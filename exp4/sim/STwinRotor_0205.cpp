/*
 * IMPORTANTE!!!!
 * Para compilar en Matlab se debe incluir la libreria "ws2_32.lib" de socket para Windows
 */

//para compilar mex [nombre].cpp wS2_32.LIB *.obj

extern "C" {

#define S_FUNCTION_NAME  STwinRotor
#define S_FUNCTION_LEVEL 2

#include "simstruc.h"
#include "O22SIOMM.h"

#define NENTRADAS	2
#define NSALIDAS	4   //TR_taco, MR_taco, pos_h, pos_v
#define PI          3.1416
float pos_v,pos_h,pos_vt,pos_ht;
float flag_h,flag_v;
float bias_h,bias_v;

/*====================*
 * S-function methods *
 *====================*/


/* Function: mdlInitializeSizes ===============================================
 * Abstract:
 *    The sizes information is used by Simulink to determine the S-function
 *    block's characteristics (number of inputs, outputs, states, etc.).
 */
static void mdlInitializeSizes(SimStruct *S)
{
    ssSetNumSFcnParams(S, 5);		// Number of expected parameters

    if (ssGetNumSFcnParams(S) != ssGetSFcnParamsCount(S)) {
        return;						// Parameter mismatch will be reported by Simulink
    }

    ssSetNumContStates(S, 0);
    ssSetNumDiscStates(S, 1);

    if (!ssSetNumInputPorts(S, 1)) return;
	ssSetInputPortWidth(S,0,NENTRADAS);
	//ssSetInputPortDirectFeedThrough(S,0,0);	// Existen llamadas de la entrada en la funcion mdlOutputs
	ssSetInputPortRequiredContiguous(S,0,1);	// sacado del ejemplo (?)
    
    if (!ssSetNumOutputPorts(S, 1)) return;
    ssSetOutputPortWidth(S, 0, NSALIDAS);	// NSALIDAS salidas

    ssSetNumSampleTimes(S, 1);
    ssSetNumRWork(S, 0);			// reserve element in the float vector
    ssSetNumIWork(S, 0);			// reserve element in the int vector
    ssSetNumPWork(S, 1);			// reserve element in the pointers vector
    ssSetNumModes(S, 0);			// to store a C++ object
    ssSetNumNonsampledZCs(S, 0);	// number of states for which a block detects zero crossings

    ssSetOptions(S, 0);				// set the simulation options that this block implements
}


/* Function: mdlInitializeSampleTimes =========================================
 * Abstract:
 *    This function is used to specify the sample time(s) for your
 *    S-function. You must register the same number of sample times as
 *    specified in ssSetNumSampleTimes.
 */
static void mdlInitializeSampleTimes(SimStruct *S)
{
    ssSetSampleTime(S, 0, mxGetScalar(ssGetSFcnParam(S, 0)));	// tiempo de muestreo?
    ssSetOffsetTime(S, 0, 0.0);
}

/* Function: mdlStart =======================================================
 * Abstract:
 *    This function is called once at start of model execution. If you
 *    have states that should be initialized once, this is the place
 *    to do it.
 */
#define MDL_START
#if defined(MDL_START) 
static void mdlStart(SimStruct *S)
{
	O22SnapIoMemMap *Brain;
	long nResult;

	Brain = new O22SnapIoMemMap();
	nResult = Brain->OpenEnet("192.168.6.102", 2001, 10000, 1);
	//mexPrintf("openenet: %d\n",nResult);

	if ( nResult == SIOMM_OK )
	{
		nResult = Brain->IsOpenDone();
		//mexPrintf("	isopendone: %d\n",nResult);
		while ( nResult == SIOMM_ERROR_NOT_CONNECTED_YET )
		{
			nResult = Brain->IsOpenDone();
			//mexPrintf("  isopendone: %d\n",nResult);
		} 
	}

	// Check for error on OpenEnet() and IsOpenDone()
	if ( nResult != SIOMM_OK )
	{
		ssSetErrorStatus(S,"No se pudo realizar la conexion con exito.");
		return;
	}

	ssGetPWork(S)[0] = (void *) Brain;
    
    //***************************************
    //* CALCULO POSICION HORIZONTAL INICIAL *
    //***************************************
    nResult=Brain->GetAnaPtValue(6,&pos_h);
	if ( nResult != SIOMM_OK )
	{
		//mexPrintf("getanaptvalue: %d\n",nResult);
		ssSetErrorStatus(S,"Error al recibir el dato de posicion horiz");
		return;
	}    
    nResult=Brain->GetAnaPtValue(9,&flag_h);
	if ( nResult != SIOMM_OK )
	{
		//mexPrintf("getanaptvalue: %d\n",nResult);
		ssSetErrorStatus(S,"Error al recibir el dato de bit extra horiz");
		return;
	}
    if (flag_h>1)
        flag_h=1;
    else
        flag_h=0;
    
    pos_h=(real_T)(pos_h-9.2*flag_h);
    pos_ht=pos_h;
    
    //*************************************
    //* CALCULO POSICION VERTICAL INICIAL *
    //*************************************
    nResult=Brain->GetAnaPtValue(7,&pos_v);
	if ( nResult != SIOMM_OK )
	{
		//mexPrintf("getanaptvalue: %d\n",nResult);
		ssSetErrorStatus(S,"Error al recibir el dato de posicion horiz");
		return;
	}    
    nResult=Brain->GetAnaPtValue(8,&flag_v);
	if ( nResult != SIOMM_OK )
	{
		//mexPrintf("getanaptvalue: %d\n",nResult);
		ssSetErrorStatus(S,"Error al recibir el dato de bit extra horiz");
		return;
	}
    if (flag_v>1)
        flag_v=1;
    else
        flag_v=0;
    
    pos_v=(real_T)(pos_v-9.2*flag_v);
    pos_vt=pos_v;
    
    bias_h=mxGetScalar(ssGetSFcnParam(S, 1));
    bias_v=mxGetScalar(ssGetSFcnParam(S, 2));
        
}
#endif /*  MDL_START */

/* Function: mdlUpdate ========================================================
 * Abstract:
 *    In this function, you compute the outputs of your S-function
 *    block. Generally outputs are placed in the output vector, ssGetY(S).
 */
#define MDL_UPDATE
static void mdlUpdate(SimStruct *S, int_T tid)
{
	O22SnapIoMemMap *Brain;
	long nResult;
    float principal, cola, transfor;
    float max_MR,max_TR;
    
    max_MR=mxGetScalar(ssGetSFcnParam(S, 3));
    max_TR=mxGetScalar(ssGetSFcnParam(S, 4));

	Brain = (O22SnapIoMemMap *) ssGetPWork(S)[0];
	const real_T *u = ssGetInputPortRealSignal(S,0);

    // Rotor Principal
    transfor=2.5*u[0]/max_MR+2.5;
    //transfor=u[0];
    if (transfor>=5)
        principal=5;
    else if (transfor<=0)
        principal=0;
    else
        principal=transfor;
    nResult=Brain->SetAnaPtValue(0,principal);
	if ( nResult != SIOMM_OK )
	{
		//mexPrintf("setanaptvalue: %d\n",nResult);
		ssSetErrorStatus(S,"Error al transmitir el dato de voltaje (rotor principal).");
		return;
	}
    // Rotor de Cola
    transfor=2.5*u[1]/max_TR+2.5;
    //transfor=u[1];
    if (transfor>=5)
        cola=5;
    else if (transfor<=0)
        cola=0;
    else
        cola=transfor;
    nResult=Brain->SetAnaPtValue(1,cola);
	if ( nResult != SIOMM_OK )
	{
		//mexPrintf("setanaptvalue: %d\n",nResult);
		ssSetErrorStatus(S,"Error al transmitir el dato de voltaje (rotor de cola).");
		return;
	}
}


/* Function: mdlOutputs =======================================================
 * Abstract:
 *    In this function, you compute the outputs of your S-function
 *    block. Generally outputs are placed in the output vector, ssGetY(S).
 */
static void mdlOutputs(SimStruct *S, int_T tid)
{
	O22SnapIoMemMap *Brain;
	float vel_ang_MR;
    float vel_ang_TR;
	long nResult;
        
	Brain = (O22SnapIoMemMap *) ssGetPWork(S)[0];

	real_T *y = ssGetOutputPortRealSignal(S,0);

	nResult=Brain->GetAnaPtValue(4,&vel_ang_TR);
	if ( nResult != SIOMM_OK )
	{
		//mexPrintf("getanaptvalue: %d\n",nResult);
		ssSetErrorStatus(S,"Error al recibir el dato de velocidad MR.");
		return;
	}
    	
    nResult=Brain->GetAnaPtValue(5,&vel_ang_MR);
	if ( nResult != SIOMM_OK )
	{
		//mexPrintf("getanaptvalue: %d\n",nResult);
		ssSetErrorStatus(S,"Error al recibir el dato de velocidad TR.");
		return;
	}
     
    // CALCULO POSICION HORIZONTAL
    nResult=Brain->GetAnaPtValue(6,&pos_h);
	if ( nResult != SIOMM_OK )
	{
		//mexPrintf("getanaptvalue: %d\n",nResult);
		ssSetErrorStatus(S,"Error al recibir el dato de posicion horiz");
		return;
	}
    
    nResult=Brain->GetAnaPtValue(9,&flag_h);
	if ( nResult != SIOMM_OK )
	{
		//mexPrintf("getanaptvalue: %d\n",nResult);
		ssSetErrorStatus(S,"Error al recibir el dato de bit extra horiz");
		return;
	}
    if (flag_h>0.5)
        flag_h=1;
    else
        flag_h=0;
    
    y[0]=(real_T)pos_h;
    pos_h=(real_T)(pos_h-9.2*flag_h);
    y[1]=(real_T)pos_h;
    
    // CALCULO POSICION VERTICAL
    nResult=Brain->GetAnaPtValue(7,&pos_v);
	if ( nResult != SIOMM_OK )
	{
		//mexPrintf("getanaptvalue: %d\n",nResult);
		ssSetErrorStatus(S,"Error al recibir el dato de posicion vert");
		return;
	}
    
    nResult=Brain->GetAnaPtValue(8,&flag_v);
	if ( nResult != SIOMM_OK )
	{
		//mexPrintf("getanaptvalue: %d\n",nResult);
		ssSetErrorStatus(S,"Error al recibir el dato de bit extra vert");
		return;
	}
    if (flag_v>0.5)
        flag_v=1;
    else
        flag_v=0;
    
    pos_v=(real_T)(pos_v-9.2*flag_v); 
    //y[1]=(real_T)pos_v;
    
    // saturaciones para evitar el delta
    // horizontal
    if (abs(pos_ht-pos_h)>0.3)
        pos_h=pos_ht;
    else
        pos_ht=pos_h;
    // vertical
    if (abs(pos_vt-pos_v)>0.3)
        pos_v=pos_vt;
    else
        pos_vt=pos_v;
    
    // transformacion a mks
    //y[0]=-1622*vel_ang_MR+19.33;
    //y[1]=-3528*vel_ang_TR-51.15;
    y[2]=0.3478*pos_h+3.088-bias_h;
    y[3]=-0.3433*pos_v-2.348-bias_v;
    
}

/* Function: mdlTerminate =====================================================
 * Abstract:
 *    In this function, you should perform any actions that are necessary
 *    at the termination of a simulation.  For example, if memory was
 *    allocated in mdlStart, this is the place to free it.
 */
static void mdlTerminate(SimStruct *S)
{
    long nResult;
	O22SnapIoMemMap *Brain;

	Brain = (O22SnapIoMemMap *) ssGetPWork(S)[0];
    
    nResult=Brain->SetAnaPtValue(0,0);
    nResult=Brain->SetAnaPtValue(1,0);
    Brain->SetAnaPtValue(0,0.0);
	Brain->Close();

	delete Brain,pos_v,pos_vt,pos_h,pos_ht;
}

/*=============================*
 * Required S-function trailer *
 *=============================*/

#ifdef  MATLAB_MEX_FILE    /* Is this file being compiled as a MEX-file? */
#include "simulink.c"      /* MEX-file interface mechanism */
#else
#include "cg_sfun.h"       /* Code generation registration function */
#endif


} // end of extern "C" scope

