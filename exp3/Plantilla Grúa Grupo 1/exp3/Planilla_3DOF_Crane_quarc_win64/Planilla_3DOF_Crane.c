/*
 * Planilla_3DOF_Crane.c
 *
 * Code generation for model "Planilla_3DOF_Crane.mdl".
 *
 * Model version              : 1.165
 * Simulink Coder version : 8.1 (R2011b) 08-Jul-2011
 * C source code generated on : Fri Nov 06 13:29:08 2015
 *
 * Target selection: quarc_win64.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */
#include "Planilla_3DOF_Crane.h"
#include "Planilla_3DOF_Crane_private.h"
#include "Planilla_3DOF_Crane_dt.h"

/* Block signals (auto storage) */
BlockIO_Planilla_3DOF_Crane Planilla_3DOF_Crane_B;

/* Block states (auto storage) */
D_Work_Planilla_3DOF_Crane Planilla_3DOF_Crane_DWork;

/* Real-time model */
RT_MODEL_Planilla_3DOF_Crane Planilla_3DOF_Crane_M_;
RT_MODEL_Planilla_3DOF_Crane *const Planilla_3DOF_Crane_M =
  &Planilla_3DOF_Crane_M_;

/* Forward declaration for local functions */
static void Planilla_3DOF_Crane_mpc_getrv_d(real_T window[20], const real_T
  signal[2], real_T t1, real_T t2, real_T addone);
static void Planilla_3DOF_Cran_mpc_getrv_dw(real_T window[11], real_T signal,
  real_T t1, real_T t2, real_T addone);
static void Planilla_3DOF_Crane_mpc_getrv(real_T window[120], const real_T
  signal[2], real_T t1, real_T t2, real_T addone);
static void Planilla_3DOF_Crane_mpc_getrv_k(real_T window[61], real_T signal,
  real_T t1, real_T t2, real_T addone);
static void Planilla_3DOF_Crane_abs(const real_T x[400], real_T y[400]);
static real_T Planilla_3DOF_Crane_norm(const real_T x[41]);
static void Planilla_3DOF_Crane_eml_xgemm(int32_T n, const real_T A[1681], const
  real_T B_data[1681], const int32_T B_sizes[2], real_T C_data[1681], int32_T
  C_sizes[2]);
static void Planilla_3_eml_matlab_zlarf_jek(int32_T m, int32_T n, int32_T iv0,
  real_T tau, real_T C_data[1681], int32_T C_sizes[2], int32_T ic0, real_T
  work_data[41], int32_T *work_sizes);
static void Planilla_3DOF_Crane_eml_xscal_j(int32_T n, real_T a, real_T x_data
  [1681], int32_T x_sizes[2], int32_T ix0);
static real_T Planilla_3D_eml_matlab_zlarfg_j(real_T *alpha1, const real_T *x);
static real_T Planilla_3DOF_Crane_eml_xnrm2_j(int32_T n, const real_T x_data
  [1681], const int32_T x_sizes[2], int32_T ix0);
static real_T Planilla_3_eml_matlab_zlarfg_je(int32_T n, real_T *alpha1, real_T
  x_data[1681], int32_T x_sizes[2], int32_T ix0);
static void Planilla_3D_eml_matlab_zlarf_je(int32_T m, int32_T n, int32_T iv0,
  real_T tau, real_T C_data[1681], int32_T C_sizes[2], int32_T ic0, real_T
  work_data[41], int32_T *work_sizes);
static void Planilla_3DO_eml_matlab_zlarf_j(int32_T m, int32_T n, int32_T iv0,
  real_T tau, real_T C_data[1681], int32_T C_sizes[2], int32_T ic0, real_T
  work_data[41], int32_T *work_sizes);
static void Planilla_3DOF_Crane_eml_xscal(int32_T n, real_T a, real_T x_data
  [1681], int32_T x_sizes[2], int32_T ix0);
static real_T Planilla_3DOF_Crane_eml_xnrm2(int32_T n, const real_T x_data[1681],
  const int32_T x_sizes[2], int32_T ix0);
static real_T Planilla_3DOF_eml_matlab_zlarfg(int32_T n, real_T *alpha1, real_T
  x_data[1681], int32_T x_sizes[2], int32_T ix0);
static void Planilla_3DOF__eml_matlab_zlarf(int32_T m, int32_T n, int32_T iv0,
  real_T tau, real_T C_data[1681], int32_T C_sizes[2], int32_T ic0, int32_T ldc,
  real_T work_data[41], int32_T *work_sizes);
static void Planilla_3DOF_Crane_qr(const real_T A_data[1681], const int32_T
  A_sizes[2], real_T Q_data[1681], int32_T Q_sizes[2], real_T R_data[1681],
  int32_T R_sizes[2]);
static real_T Planilla_3DOF_Crane_eml_div(real_T x, real_T y);
static int32_T Planilla_3DOF_Crane_eml_ixamax(int32_T n, const real_T x_data[41],
  const int32_T *x_sizes, int32_T ix0);
static void Planilla_3DOF_Crane_eml_xswap(int32_T n, real_T x_data[1681],
  int32_T x_sizes[2], int32_T ix0, int32_T incx, int32_T iy0, int32_T incy);
static real_T Planilla_3DOF_Cran_eml_xnrm2_je(int32_T n, const real_T x_data
  [1681], const int32_T x_sizes[2], int32_T ix0);
static void Planilla_3DOF_Crane_eml_qrsolve(const real_T A_data[1681], const
  int32_T A_sizes[2], real_T B_data[1681], int32_T B_sizes[2], real_T Y_data
  [1681], int32_T Y_sizes[2]);
static void Planilla_3DOF_Crane_eml_xtrsm(int32_T m, int32_T n, const real_T
  A_data[1681], const int32_T A_sizes[2], int32_T lda, real_T B_data[1681],
  int32_T B_sizes[2], int32_T ldb);
static void Planilla_3DOF_Crane_eml_xtrsm_j(int32_T m, int32_T n, const real_T
  A_data[1681], const int32_T A_sizes[2], int32_T lda, real_T B_data[1681],
  int32_T B_sizes[2], int32_T ldb);
static void Planilla_3DOF_Crane_eml_lusolve(const real_T A_data[1681], const
  int32_T A_sizes[2], real_T B_data[1681], int32_T B_sizes[2]);
static void Planilla_3DOF_Crane_mldivide(const real_T A_data[1681], const
  int32_T A_sizes[2], const real_T B_data[1681], const int32_T B_sizes[2],
  real_T Y_data[1681], int32_T Y_sizes[2]);
static real_T Planilla_3DOF_Crane_KWIKfactor(const real_T iC[41], real_T nA,
  real_T TL[1681], real_T Q[1681], real_T RLinv[1681]);
static void Planilla_3DOF_Cra_eml_xgemm_jek(int32_T m, int32_T k, const real_T
  A_data[1681], const int32_T A_sizes[2], int32_T lda, const real_T B_data[1681],
  const int32_T B_sizes[2], int32_T ldb, real_T C_data[1681], int32_T C_sizes[2],
  int32_T ldc);
static boolean_T Planilla_3DOF_Crane_all(const boolean_T x[41]);
static real_T Planilla_3DOF_Crane_mrdivide(real_T A, real_T B);
static void Planilla_3DOF_Cr_DropConstraint(real_T kDrop, boolean_T iA[441],
  real_T *nA, real_T iC[41]);
static void Planilla_3DOF_Crane_abs_j(const real_T x[41], real_T y[41]);
static void Planilla_3DOF_Crane_eml_xgemm_j(int32_T n, int32_T k, const real_T
  A_data[1681], const int32_T A_sizes[2], const real_T B_data[1681], const
  int32_T B_sizes[2], int32_T ldb, real_T C_data[1681], int32_T C_sizes[2]);
static void Planilla_3DOF_Cran_eml_xgemm_je(int32_T m, int32_T n, int32_T k,
  const real_T A_data[1681], const int32_T A_sizes[2], int32_T lda, const real_T
  B_data[1681], const int32_T B_sizes[2], int32_T ldb, real_T C_data[1681],
  int32_T C_sizes[2], int32_T ldc);
static void Planilla_3DOF_Crane_qpkwik(const real_T f[41], const real_T b[400],
  boolean_T iA[441], real_T x[41], real_T lambda[400], real_T *status);
static void Planilla_3DOF_Crane_mpc_solveQP(const real_T xQP[4], const real_T
  rseq[120], real_T old_u, const real_T vseq[61], const real_T Bc[400],
  boolean_T iA[441], real_T zopt[41], real_T f[41], real_T *status);
static void rate_monotonic_scheduler(void);
int32_T div_s32_floor(int32_T numerator, int32_T denominator)
{
  int32_T quotient;
  uint32_T absNumerator;
  uint32_T absDenominator;
  uint32_T tempAbsQuotient;
  uint32_T quotientNeedsNegation;
  if (denominator == 0) {
    quotient = numerator >= 0 ? MAX_int32_T : MIN_int32_T;

    /* Divide by zero handler */
  } else {
    absNumerator = (uint32_T)(numerator >= 0 ? numerator : -numerator);
    absDenominator = (uint32_T)(denominator >= 0 ? denominator : -denominator);
    quotientNeedsNegation = ((numerator < 0) != (denominator < 0));
    tempAbsQuotient = absDenominator == 0 ? MAX_uint32_T : absNumerator /
      absDenominator;
    if (quotientNeedsNegation) {
      absNumerator %= absDenominator;
      if (absNumerator > 0) {
        tempAbsQuotient++;
      }
    }

    quotient = quotientNeedsNegation ? -(int32_T)tempAbsQuotient : (int32_T)
      tempAbsQuotient;
  }

  return quotient;
}

time_T rt_SimUpdateDiscreteEvents(
  int_T rtmNumSampTimes, void *rtmTimingData, int_T *rtmSampleHitPtr, int_T
  *rtmPerTaskSampleHits )
{
  rtmSampleHitPtr[1] = rtmStepTask(Planilla_3DOF_Crane_M, 1);
  UNUSED_PARAMETER(rtmNumSampTimes);
  UNUSED_PARAMETER(rtmTimingData);
  UNUSED_PARAMETER(rtmPerTaskSampleHits);
  return(-1);
}

/* rate_monotonic_scheduler */
static void rate_monotonic_scheduler(void)
{
  /* To ensure a deterministic data transfer between two rates,
   * data is transferred at the priority of a fast task and the frequency
   * of the slow task.  The following flags indicate when the data transfer
   * happens.  That is, a rate interaction flag is set true when both rates
   * will run, and false otherwise.
   */

  /* tid 0 shares data with slower tid rate: 1 */
  Planilla_3DOF_Crane_M->Timing.RateInteraction.TID0_1 =
    (Planilla_3DOF_Crane_M->Timing.TaskCounters.TID[1] == 0);

  /* update PerTaskSampleHits matrix for non-inline sfcn */
  Planilla_3DOF_Crane_M->Timing.perTaskSampleHits[1] =
    Planilla_3DOF_Crane_M->Timing.RateInteraction.TID0_1;

  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (Planilla_3DOF_Crane_M->Timing.TaskCounters.TID[1])++;
  if ((Planilla_3DOF_Crane_M->Timing.TaskCounters.TID[1]) > 49) {/* Sample time: [0.5s, 0.0s] */
    Planilla_3DOF_Crane_M->Timing.TaskCounters.TID[1] = 0;
  }
}

/* Function for MATLAB Function: '<S26>/ref_and_md' */
static void Planilla_3DOF_Crane_mpc_getrv_d(real_T window[20], const real_T
  signal[2], real_T t1, real_T t2, real_T addone)
{
  real_T k;
  for (k = t1; k <= t2; k++) {
    if (k <= 0.0) {
      window[(int32_T)((k - t1) * (2.0 + addone) + 1.0) - 1] = signal[(int32_T)
        (k + 1.0) - 1];
      window[(int32_T)((k - t1) * (2.0 + addone) + 2.0) - 1] = signal[(int32_T)
        (k + 1.0)];
    } else {
      window[(int32_T)((k - t1) * (2.0 + addone) + 1.0) - 1] = signal[0];
      window[(int32_T)((k - t1) * (2.0 + addone) + 2.0) - 1] = signal[1];
    }

    if (addone != 0.0) {
      window[(int32_T)(((k - t1) * (2.0 + addone) + 2.0) + 1.0) - 1] = 1.0;
    }
  }
}

/* Function for MATLAB Function: '<S26>/ref_and_md' */
static void Planilla_3DOF_Cran_mpc_getrv_dw(real_T window[11], real_T signal,
  real_T t1, real_T t2, real_T addone)
{
  real_T k;
  for (k = t1; k <= t2; k++) {
    window[(int32_T)((k - t1) * (1.0 + addone) + 1.0) - 1] = signal;
    if (addone != 0.0) {
      window[(int32_T)(((k - t1) * (1.0 + addone) + 1.0) + 1.0) - 1] = 1.0;
    }
  }
}

/* Function for MATLAB Function: '<S22>/ref_and_md' */
static void Planilla_3DOF_Crane_mpc_getrv(real_T window[120], const real_T
  signal[2], real_T t1, real_T t2, real_T addone)
{
  real_T k;
  for (k = t1; k <= t2; k++) {
    if (k <= 0.0) {
      window[(int32_T)((k - t1) * (2.0 + addone) + 1.0) - 1] = signal[(int32_T)
        (k + 1.0) - 1];
      window[(int32_T)((k - t1) * (2.0 + addone) + 2.0) - 1] = signal[(int32_T)
        (k + 1.0)];
    } else {
      window[(int32_T)((k - t1) * (2.0 + addone) + 1.0) - 1] = signal[0];
      window[(int32_T)((k - t1) * (2.0 + addone) + 2.0) - 1] = signal[1];
    }

    if (addone != 0.0) {
      window[(int32_T)(((k - t1) * (2.0 + addone) + 2.0) + 1.0) - 1] = 1.0;
    }
  }
}

/* Function for MATLAB Function: '<S22>/ref_and_md' */
static void Planilla_3DOF_Crane_mpc_getrv_k(real_T window[61], real_T signal,
  real_T t1, real_T t2, real_T addone)
{
  real_T k;
  for (k = t1; k <= t2; k++) {
    window[(int32_T)((k - t1) * (1.0 + addone) + 1.0) - 1] = signal;
    if (addone != 0.0) {
      window[(int32_T)(((k - t1) * (1.0 + addone) + 1.0) + 1.0) - 1] = 1.0;
    }
  }
}

/* Function for MATLAB Function: '<S22>/optimizer' */
static void Planilla_3DOF_Crane_abs(const real_T x[400], real_T y[400])
{
  int32_T k;
  for (k = 0; k < 400; k++) {
    y[k] = fabs(x[k]);
  }
}

/* Function for MATLAB Function: '<S22>/optimizer' */
static real_T Planilla_3DOF_Crane_norm(const real_T x[41])
{
  real_T y;
  real_T scale;
  real_T absxk;
  real_T t;
  int32_T k;
  y = 0.0;
  scale = 2.2250738585072014E-308;
  for (k = 0; k < 41; k++) {
    absxk = fabs(x[k]);
    if (absxk > scale) {
      t = scale / absxk;
      y = y * t * t + 1.0;
      scale = absxk;
    } else {
      t = absxk / scale;
      y += t * t;
    }
  }

  return scale * sqrt(y);
}

/* Function for MATLAB Function: '<S22>/optimizer' */
static void Planilla_3DOF_Crane_eml_xgemm(int32_T n, const real_T A[1681], const
  real_T B_data[1681], const int32_T B_sizes[2], real_T C_data[1681], int32_T
  C_sizes[2])
{
  int32_T br;
  int32_T ar;
  int32_T ia;
  int32_T b_cr;
  int32_T ib;
  int32_T b_ic;
  int32_T c;
  UNUSED_PARAMETER(C_sizes);
  UNUSED_PARAMETER(B_sizes);
  c = (n - 1) * 41;
  for (br = 0; br <= c; br += 41) {
    for (b_cr = br; b_cr + 1 <= br + 41; b_cr++) {
      C_data[b_cr] = 0.0;
    }
  }

  br = 41;
  for (b_cr = 0; b_cr <= c; b_cr += 41) {
    ar = -1;
    for (ib = br - 41; ib + 1 <= br; ib++) {
      if (B_data[ib] != 0.0) {
        ia = ar;
        for (b_ic = b_cr; b_ic + 1 <= b_cr + 41; b_ic++) {
          ia++;
          C_data[b_ic] += B_data[ib] * A[ia];
        }
      }

      ar += 41;
    }

    br += 41;
  }
}

/* Function for MATLAB Function: '<S22>/optimizer' */
static void Planilla_3_eml_matlab_zlarf_jek(int32_T m, int32_T n, int32_T iv0,
  real_T tau, real_T C_data[1681], int32_T C_sizes[2], int32_T ic0, real_T
  work_data[41], int32_T *work_sizes)
{
  int32_T lastv;
  int32_T i;
  int32_T lastc;
  int32_T nm;
  int32_T ix;
  real_T c;
  int32_T iy;
  int32_T b_ia;
  int32_T b_ix;
  boolean_T exitg;
  UNUSED_PARAMETER(work_sizes);
  UNUSED_PARAMETER(C_sizes);
  if (tau != 0.0) {
    lastv = m;
    i = iv0 + m;
    while ((lastv > 0) && (C_data[i - 2] == 0.0)) {
      lastv--;
      i--;
    }

    lastc = n;
    exitg = FALSE;
    while (((uint32_T)exitg == 0U) && (lastc > 0)) {
      i = (lastc - 1) * 41 + ic0;
      nm = (i + lastv) - 1;
      do {
        ix = 0;
        if (i <= nm) {
          if (C_data[i - 1] != 0.0) {
            ix = 1;
          } else {
            i++;
          }
        } else {
          lastc--;
          ix = 2;
        }
      } while ((uint32_T)ix == 0U);

      if ((uint32_T)ix == 1U) {
        exitg = TRUE;
      }
    }
  } else {
    lastv = 0;
    lastc = 0;
  }

  if (lastv > 0) {
    if (lastc != 0) {
      for (i = 1; i <= lastc; i++) {
        work_data[i - 1] = 0.0;
      }

      iy = 0;
      i = (lastc - 1) * 41 + ic0;
      for (nm = ic0; nm <= i; nm += 41) {
        ix = iv0;
        c = 0.0;
        b_ix = nm + lastv;
        for (b_ia = nm; b_ia <= b_ix - 1; b_ia++) {
          c += C_data[b_ia - 1] * C_data[ix - 1];
          ix++;
        }

        work_data[iy] += c;
        iy++;
      }
    }

    if (!(-tau == 0.0)) {
      i = ic0 - 1;
      nm = 0;
      for (ix = 1; ix <= lastc; ix++) {
        if (work_data[nm] != 0.0) {
          c = work_data[nm] * -tau;
          b_ix = iv0;
          b_ia = lastv + i;
          for (iy = i; iy + 1 <= b_ia; iy++) {
            C_data[iy] += C_data[b_ix - 1] * c;
            b_ix++;
          }
        }

        nm++;
        i += 41;
      }
    }
  }
}

/* Function for MATLAB Function: '<S22>/optimizer' */
static void Planilla_3DOF_Crane_eml_xscal_j(int32_T n, real_T a, real_T x_data
  [1681], int32_T x_sizes[2], int32_T ix0)
{
  int32_T b;
  int32_T k;
  UNUSED_PARAMETER(x_sizes);
  b = (ix0 + n) - 1;
  for (k = ix0; k <= b; k++) {
    x_data[k - 1] *= a;
  }
}

/* Function for MATLAB Function: '<S22>/optimizer' */
static real_T Planilla_3D_eml_matlab_zlarfg_j(real_T *alpha1, const real_T *x)
{
  UNUSED_PARAMETER(x);
  UNUSED_PARAMETER(alpha1);
  return 0.0;
}

/* Function for MATLAB Function: '<S22>/optimizer' */
static real_T Planilla_3DOF_Crane_eml_xnrm2_j(int32_T n, const real_T x_data
  [1681], const int32_T x_sizes[2], int32_T ix0)
{
  real_T y;
  real_T scale;
  int32_T kend;
  real_T absxk;
  real_T t;
  int32_T k;
  UNUSED_PARAMETER(x_sizes);
  y = 0.0;
  if (!(n < 1)) {
    if (n == 1) {
      y = fabs(x_data[ix0 - 1]);
    } else {
      scale = 2.2250738585072014E-308;
      kend = (ix0 + n) - 1;
      for (k = ix0; k <= kend; k++) {
        absxk = fabs(x_data[k - 1]);
        if (absxk > scale) {
          t = scale / absxk;
          y = y * t * t + 1.0;
          scale = absxk;
        } else {
          t = absxk / scale;
          y += t * t;
        }
      }

      y = scale * sqrt(y);
    }
  }

  return y;
}

/* Function for MATLAB Function: '<S22>/optimizer' */
static real_T Planilla_3_eml_matlab_zlarfg_je(int32_T n, real_T *alpha1, real_T
  x_data[1681], int32_T x_sizes[2], int32_T ix0)
{
  real_T tau;
  int32_T nm;
  real_T xnorm;
  int32_T knt;
  real_T a;
  int32_T b_k;
  int32_T c_k;
  tau = 0.0;
  nm = n - 1;
  if ((n < 0) && (nm >= 0)) {
    nm = MIN_int32_T;
  }

  xnorm = Planilla_3DOF_Crane_eml_xnrm2_j(nm, x_data, x_sizes, ix0);
  if (xnorm != 0.0) {
    a = fabs(*alpha1);
    if (a < xnorm) {
      a /= xnorm;
      xnorm *= sqrt(a * a + 1.0);
    } else if (a > xnorm) {
      xnorm /= a;
      xnorm = sqrt(xnorm * xnorm + 1.0) * a;
    } else {
      if (!rtIsNaN(xnorm)) {
        xnorm = a * 1.4142135623730951;
      }
    }

    if (*alpha1 >= 0.0) {
      xnorm = -xnorm;
    }

    if (fabs(xnorm) < 1.0020841800044864E-292) {
      knt = 0;
      do {
        knt++;
        b_k = (ix0 + nm) - 1;
        for (c_k = ix0; c_k <= b_k; c_k++) {
          x_data[c_k - 1] *= 9.9792015476736E+291;
        }

        xnorm *= 9.9792015476736E+291;
        *alpha1 *= 9.9792015476736E+291;
      } while (!(fabs(xnorm) >= 1.0020841800044864E-292));

      xnorm = Planilla_3DOF_Crane_eml_xnrm2_j(nm, x_data, x_sizes, ix0);
      a = fabs(*alpha1);
      if (a < xnorm) {
        a /= xnorm;
        xnorm *= sqrt(a * a + 1.0);
      } else if (a > xnorm) {
        xnorm /= a;
        xnorm = sqrt(xnorm * xnorm + 1.0) * a;
      } else {
        if (!rtIsNaN(xnorm)) {
          xnorm = a * 1.4142135623730951;
        }
      }

      if (*alpha1 >= 0.0) {
        xnorm = -xnorm;
      }

      tau = (xnorm - *alpha1) / xnorm;
      *alpha1 = 1.0 / (*alpha1 - xnorm);
      nm = (ix0 + nm) - 1;
      for (b_k = ix0; b_k <= nm; b_k++) {
        x_data[b_k - 1] *= *alpha1;
      }

      for (nm = 1; nm <= knt; nm++) {
        xnorm *= 1.0020841800044864E-292;
      }

      *alpha1 = xnorm;
    } else {
      tau = (xnorm - *alpha1) / xnorm;
      *alpha1 = 1.0 / (*alpha1 - xnorm);
      nm = (ix0 + nm) - 1;
      for (b_k = ix0; b_k <= nm; b_k++) {
        x_data[b_k - 1] *= *alpha1;
      }

      *alpha1 = xnorm;
    }
  }

  return tau;
}

/* Function for MATLAB Function: '<S22>/optimizer' */
static void Planilla_3D_eml_matlab_zlarf_je(int32_T m, int32_T n, int32_T iv0,
  real_T tau, real_T C_data[1681], int32_T C_sizes[2], int32_T ic0, real_T
  work_data[41], int32_T *work_sizes)
{
  int32_T lastv;
  int32_T i;
  int32_T lastc;
  int32_T nm;
  int32_T ix;
  real_T c;
  int32_T iy;
  int32_T b_ia;
  int32_T b_ix;
  boolean_T exitg;
  UNUSED_PARAMETER(work_sizes);
  UNUSED_PARAMETER(C_sizes);
  if (tau != 0.0) {
    lastv = m;
    i = iv0 + m;
    while ((lastv > 0) && (C_data[i - 2] == 0.0)) {
      lastv--;
      i--;
    }

    lastc = n;
    exitg = FALSE;
    while (((uint32_T)exitg == 0U) && (lastc > 0)) {
      i = (lastc - 1) * 41 + ic0;
      nm = (i + lastv) - 1;
      do {
        ix = 0;
        if (i <= nm) {
          if (C_data[i - 1] != 0.0) {
            ix = 1;
          } else {
            i++;
          }
        } else {
          lastc--;
          ix = 2;
        }
      } while ((uint32_T)ix == 0U);

      if ((uint32_T)ix == 1U) {
        exitg = TRUE;
      }
    }
  } else {
    lastv = 0;
    lastc = 0;
  }

  if (lastv > 0) {
    if (lastc != 0) {
      for (i = 1; i <= lastc; i++) {
        work_data[i - 1] = 0.0;
      }

      iy = 0;
      i = (lastc - 1) * 41 + ic0;
      for (nm = ic0; nm <= i; nm += 41) {
        ix = iv0;
        c = 0.0;
        b_ix = nm + lastv;
        for (b_ia = nm; b_ia <= b_ix - 1; b_ia++) {
          c += C_data[b_ia - 1] * C_data[ix - 1];
          ix++;
        }

        work_data[iy] += c;
        iy++;
      }
    }

    if (!(-tau == 0.0)) {
      i = ic0 - 1;
      nm = 0;
      for (ix = 1; ix <= lastc; ix++) {
        if (work_data[nm] != 0.0) {
          c = work_data[nm] * -tau;
          b_ix = iv0;
          b_ia = lastv + i;
          for (iy = i; iy + 1 <= b_ia; iy++) {
            C_data[iy] += C_data[b_ix - 1] * c;
            b_ix++;
          }
        }

        nm++;
        i += 41;
      }
    }
  }
}

/* Function for MATLAB Function: '<S22>/optimizer' */
static void Planilla_3DO_eml_matlab_zlarf_j(int32_T m, int32_T n, int32_T iv0,
  real_T tau, real_T C_data[1681], int32_T C_sizes[2], int32_T ic0, real_T
  work_data[41], int32_T *work_sizes)
{
  int32_T lastv;
  int32_T i;
  int32_T lastc;
  int32_T nm;
  int32_T ix;
  real_T c;
  int32_T iy;
  int32_T b_ia;
  int32_T b_ix;
  boolean_T exitg;
  UNUSED_PARAMETER(work_sizes);
  if (tau != 0.0) {
    lastv = m;
    i = iv0 + m;
    while ((lastv > 0) && (C_data[i - 2] == 0.0)) {
      lastv--;
      i--;
    }

    lastc = n;
    exitg = FALSE;
    while (((uint32_T)exitg == 0U) && (lastc > 0)) {
      i = (lastc - 1) * 41 + ic0;
      nm = (i + lastv) - 1;
      do {
        ix = 0;
        if (i <= nm) {
          for (iy = 0; iy < 41; iy++) {
            for (b_ix = 0; b_ix < 41; b_ix++) {
              Planilla_3DOF_Crane_B.C_data[b_ix + 41 * iy] = C_data[C_sizes[0] *
                iy + b_ix];
            }
          }

          if (Planilla_3DOF_Crane_B.C_data[i - 1] != 0.0) {
            ix = 1;
          } else {
            i++;
          }
        } else {
          lastc--;
          ix = 2;
        }
      } while ((uint32_T)ix == 0U);

      if ((uint32_T)ix == 1U) {
        exitg = TRUE;
      }
    }
  } else {
    lastv = 0;
    lastc = 0;
  }

  if (lastv > 0) {
    if (lastc != 0) {
      for (i = 1; i <= lastc; i++) {
        work_data[i - 1] = 0.0;
      }

      iy = 0;
      i = (lastc - 1) * 41 + ic0;
      for (nm = ic0; nm <= i; nm += 41) {
        ix = iv0;
        c = 0.0;
        b_ix = nm + lastv;
        for (b_ia = nm; b_ia <= b_ix - 1; b_ia++) {
          c += C_data[b_ia - 1] * C_data[ix - 1];
          ix++;
        }

        work_data[iy] += c;
        iy++;
      }
    }

    if (!(-tau == 0.0)) {
      i = ic0 - 1;
      nm = 0;
      for (ix = 1; ix <= lastc; ix++) {
        if (work_data[nm] != 0.0) {
          c = work_data[nm] * -tau;
          b_ix = iv0;
          b_ia = lastv + i;
          for (iy = i; iy + 1 <= b_ia; iy++) {
            C_data[iy] += C_data[b_ix - 1] * c;
            b_ix++;
          }
        }

        nm++;
        i += 41;
      }
    }
  }
}

/* Function for MATLAB Function: '<S22>/optimizer' */
static void Planilla_3DOF_Crane_eml_xscal(int32_T n, real_T a, real_T x_data
  [1681], int32_T x_sizes[2], int32_T ix0)
{
  int32_T b;
  int32_T k;
  UNUSED_PARAMETER(x_sizes);
  b = (ix0 + n) - 1;
  for (k = ix0; k <= b; k++) {
    x_data[k - 1] *= a;
  }
}

/* Function for MATLAB Function: '<S22>/optimizer' */
static real_T Planilla_3DOF_Crane_eml_xnrm2(int32_T n, const real_T x_data[1681],
  const int32_T x_sizes[2], int32_T ix0)
{
  real_T y;
  real_T scale;
  int32_T kend;
  real_T absxk;
  real_T t;
  int32_T k;
  UNUSED_PARAMETER(x_sizes);
  y = 0.0;
  if (!(n < 1)) {
    if (n == 1) {
      y = fabs(x_data[ix0 - 1]);
    } else {
      scale = 2.2250738585072014E-308;
      kend = (ix0 + n) - 1;
      for (k = ix0; k <= kend; k++) {
        absxk = fabs(x_data[k - 1]);
        if (absxk > scale) {
          t = scale / absxk;
          y = y * t * t + 1.0;
          scale = absxk;
        } else {
          t = absxk / scale;
          y += t * t;
        }
      }

      y = scale * sqrt(y);
    }
  }

  return y;
}

/* Function for MATLAB Function: '<S22>/optimizer' */
static real_T Planilla_3DOF_eml_matlab_zlarfg(int32_T n, real_T *alpha1, real_T
  x_data[1681], int32_T x_sizes[2], int32_T ix0)
{
  real_T tau;
  int32_T nm;
  real_T xnorm;
  int32_T knt;
  real_T a;
  int32_T b_k;
  int32_T c_k;
  tau = 0.0;
  if (!(n <= 0)) {
    nm = n - 1;
    xnorm = Planilla_3DOF_Crane_eml_xnrm2(nm, x_data, x_sizes, ix0);
    if (xnorm != 0.0) {
      a = fabs(*alpha1);
      if (a < xnorm) {
        a /= xnorm;
        xnorm *= sqrt(a * a + 1.0);
      } else if (a > xnorm) {
        xnorm /= a;
        xnorm = sqrt(xnorm * xnorm + 1.0) * a;
      } else {
        if (!rtIsNaN(xnorm)) {
          xnorm = a * 1.4142135623730951;
        }
      }

      if (*alpha1 >= 0.0) {
        xnorm = -xnorm;
      }

      if (fabs(xnorm) < 1.0020841800044864E-292) {
        knt = 0;
        do {
          knt++;
          b_k = (ix0 + nm) - 1;
          for (c_k = ix0; c_k <= b_k; c_k++) {
            x_data[c_k - 1] *= 9.9792015476736E+291;
          }

          xnorm *= 9.9792015476736E+291;
          *alpha1 *= 9.9792015476736E+291;
        } while (!(fabs(xnorm) >= 1.0020841800044864E-292));

        xnorm = Planilla_3DOF_Crane_eml_xnrm2(nm, x_data, x_sizes, ix0);
        a = fabs(*alpha1);
        if (a < xnorm) {
          a /= xnorm;
          xnorm *= sqrt(a * a + 1.0);
        } else if (a > xnorm) {
          xnorm /= a;
          xnorm = sqrt(xnorm * xnorm + 1.0) * a;
        } else {
          if (!rtIsNaN(xnorm)) {
            xnorm = a * 1.4142135623730951;
          }
        }

        if (*alpha1 >= 0.0) {
          xnorm = -xnorm;
        }

        tau = (xnorm - *alpha1) / xnorm;
        *alpha1 = 1.0 / (*alpha1 - xnorm);
        nm = (ix0 + nm) - 1;
        for (b_k = ix0; b_k <= nm; b_k++) {
          x_data[b_k - 1] *= *alpha1;
        }

        for (nm = 1; nm <= knt; nm++) {
          xnorm *= 1.0020841800044864E-292;
        }

        *alpha1 = xnorm;
      } else {
        tau = (xnorm - *alpha1) / xnorm;
        *alpha1 = 1.0 / (*alpha1 - xnorm);
        nm = (ix0 + nm) - 1;
        for (b_k = ix0; b_k <= nm; b_k++) {
          x_data[b_k - 1] *= *alpha1;
        }

        *alpha1 = xnorm;
      }
    }
  }

  return tau;
}

/* Function for MATLAB Function: '<S22>/optimizer' */
static void Planilla_3DOF__eml_matlab_zlarf(int32_T m, int32_T n, int32_T iv0,
  real_T tau, real_T C_data[1681], int32_T C_sizes[2], int32_T ic0, int32_T ldc,
  real_T work_data[41], int32_T *work_sizes)
{
  int32_T lastv;
  int32_T i;
  int32_T lastc;
  int32_T nm;
  int32_T ix;
  real_T c;
  int32_T iy;
  int32_T b_ia;
  int32_T b_ix;
  boolean_T exitg;
  UNUSED_PARAMETER(work_sizes);
  UNUSED_PARAMETER(C_sizes);
  if (tau != 0.0) {
    lastv = m;
    i = iv0 + m;
    while ((lastv > 0) && (C_data[i - 2] == 0.0)) {
      lastv--;
      i--;
    }

    lastc = n;
    exitg = FALSE;
    while (((uint32_T)exitg == 0U) && (lastc > 0)) {
      i = (lastc - 1) * ldc + ic0;
      nm = (i + lastv) - 1;
      do {
        ix = 0;
        if (i <= nm) {
          if (C_data[i - 1] != 0.0) {
            ix = 1;
          } else {
            i++;
          }
        } else {
          lastc--;
          ix = 2;
        }
      } while ((uint32_T)ix == 0U);

      if ((uint32_T)ix == 1U) {
        exitg = TRUE;
      }
    }
  } else {
    lastv = 0;
    lastc = 0;
  }

  if (lastv > 0) {
    if (lastc != 0) {
      for (i = 1; i <= lastc; i++) {
        work_data[i - 1] = 0.0;
      }

      iy = 0;
      i = (lastc - 1) * ldc + ic0;
      for (nm = ic0; nm <= i; nm += ldc) {
        ix = iv0;
        c = 0.0;
        b_ix = nm + lastv;
        for (b_ia = nm; b_ia <= b_ix - 1; b_ia++) {
          c += C_data[b_ia - 1] * C_data[ix - 1];
          ix++;
        }

        work_data[iy] += c;
        iy++;
      }
    }

    if (!(-tau == 0.0)) {
      i = ic0 - 1;
      nm = 0;
      for (ix = 1; ix <= lastc; ix++) {
        if (work_data[nm] != 0.0) {
          c = work_data[nm] * -tau;
          b_ix = iv0;
          b_ia = lastv + i;
          for (iy = i; iy + 1 <= b_ia; iy++) {
            C_data[iy] += C_data[b_ix - 1] * c;
            b_ix++;
          }
        }

        nm++;
        i += ldc;
      }
    }
  }
}

/* Function for MATLAB Function: '<S22>/optimizer' */
static void Planilla_3DOF_Crane_qr(const real_T A_data[1681], const int32_T
  A_sizes[2], real_T Q_data[1681], int32_T Q_sizes[2], real_T R_data[1681],
  int32_T R_sizes[2])
{
  int32_T mn;
  int32_T mmip;
  real_T atmp;
  real_T b;
  real_T c;
  int32_T j_i;
  int32_T itau;
  int32_T i;
  int32_T b_A_sizes[2];
  real_T tau_data[41];
  real_T work_data[41];
  int32_T work_sizes;
  real_T b_work_data[41];
  int8_T e_idx;
  Q_sizes[0] = 41;
  Q_sizes[1] = 41;
  R_sizes[0] = A_sizes[0];
  R_sizes[1] = A_sizes[1];
  if (41 > A_sizes[1]) {
    for (mn = 0; mn + 1 <= A_sizes[1]; mn++) {
      memcpy((void *)&Q_data[41 * mn], (void *)&A_data[A_sizes[0] * mn], 41U *
             sizeof(real_T));
    }

    for (mn = A_sizes[1]; mn + 1 < 42; mn++) {
      for (itau = 0; itau < 41; itau++) {
        Q_data[itau + 41 * mn] = 0.0;
      }
    }

    for (i = 0; i < 41; i++) {
      b_work_data[i] = 0.0;
    }

    for (mn = 0; mn < 41; mn++) {
      itau = mn * 41 + mn;
      if (mn + 1 < 41) {
        atmp = Q_data[itau];
        b_A_sizes[0] = 41;
        b_A_sizes[1] = 41;
        mmip = Q_sizes[0] * Q_sizes[1] - 1;
        for (i = 0; i <= mmip; i++) {
          Planilla_3DOF_Crane_B.b_A_data[i] = Q_data[i];
        }

        b = Planilla_3DOF_eml_matlab_zlarfg(41 - mn, &atmp,
          &Planilla_3DOF_Crane_B.b_A_data[0], b_A_sizes, itau + 2);
        Q_sizes[0] = b_A_sizes[0];
        Q_sizes[1] = b_A_sizes[1];
        mmip = b_A_sizes[0] * b_A_sizes[1] - 1;
        for (i = 0; i <= mmip; i++) {
          Q_data[i] = Planilla_3DOF_Crane_B.b_A_data[i];
        }

        tau_data[mn] = b;
      } else {
        atmp = Q_data[itau];
        b = Q_data[itau];
        c = Planilla_3D_eml_matlab_zlarfg_j(&atmp, &b);
        Q_data[itau] = b;
        tau_data[40] = c;
      }

      Q_data[itau] = atmp;
      if (mn + 1 < 41) {
        atmp = Q_data[itau];
        Q_data[itau] = 1.0;
        b_A_sizes[0] = 41;
        b_A_sizes[1] = 41;
        mmip = Q_sizes[0] * Q_sizes[1] - 1;
        for (i = 0; i <= mmip; i++) {
          Planilla_3DOF_Crane_B.b_A_data[i] = Q_data[i];
        }

        work_sizes = 41;
        memcpy((void *)&work_data[0], (void *)&b_work_data[0], 41U * sizeof
               (real_T));
        Planilla_3DOF__eml_matlab_zlarf(41 - mn, 40 - mn, itau + 1, tau_data[mn],
          &Planilla_3DOF_Crane_B.b_A_data[0], b_A_sizes, (mn + (mn + 1) * 41) +
          1, 41, work_data, &work_sizes);
        Q_sizes[0] = b_A_sizes[0];
        Q_sizes[1] = b_A_sizes[1];
        mmip = b_A_sizes[0] * b_A_sizes[1] - 1;
        for (i = 0; i <= mmip; i++) {
          Q_data[i] = Planilla_3DOF_Crane_B.b_A_data[i];
        }

        mmip = work_sizes - 1;
        for (i = 0; i <= mmip; i++) {
          b_work_data[i] = work_data[i];
        }

        Q_data[itau] = atmp;
      }
    }

    for (itau = 0; itau + 1 <= A_sizes[1]; itau++) {
      for (mn = 0; mn + 1 <= itau + 1; mn++) {
        R_data[mn + R_sizes[0] * itau] = Q_data[Q_sizes[0] * itau + mn];
      }

      for (mn = itau; mn + 2 < 42; mn++) {
        R_data[(mn + R_sizes[0] * itau) + 1] = 0.0;
      }
    }

    for (mn = A_sizes[1]; mn < 41; mn++) {
      itau = mn * 41;
      for (j_i = 0; j_i < 41; j_i++) {
        Q_data[itau + j_i] = 0.0;
      }

      Q_data[itau + mn] = 1.0;
    }

    mn = A_sizes[1] - 1;
    work_sizes = 41;
    for (i = 0; i < 41; i++) {
      b_work_data[i] = 0.0;
    }

    for (itau = A_sizes[1]; itau >= 1; itau--) {
      j_i = (itau - 1) * 41 + itau;
      Q_data[j_i - 1] = 1.0;
      Planilla_3DO_eml_matlab_zlarf_j(42 - itau, 41 - itau, j_i, tau_data[mn],
        Q_data, Q_sizes, j_i + 41, b_work_data, &work_sizes);
      b_A_sizes[0] = 41;
      b_A_sizes[1] = 41;
      mmip = Q_sizes[0] * Q_sizes[1] - 1;
      for (i = 0; i <= mmip; i++) {
        Planilla_3DOF_Crane_B.b_A_data[i] = Q_data[i];
      }

      Planilla_3DOF_Crane_eml_xscal(41 - itau, -tau_data[mn],
        &Planilla_3DOF_Crane_B.b_A_data[0], b_A_sizes, j_i + 1);
      Q_sizes[0] = b_A_sizes[0];
      Q_sizes[1] = b_A_sizes[1];
      mmip = b_A_sizes[0] * b_A_sizes[1] - 1;
      for (i = 0; i <= mmip; i++) {
        Q_data[i] = Planilla_3DOF_Crane_B.b_A_data[i];
      }

      Q_data[j_i - 1] = 1.0 - tau_data[mn];
      for (mmip = 1; mmip <= itau - 1; mmip++) {
        Q_data[(j_i - mmip) - 1] = 0.0;
      }

      mn--;
    }
  } else {
    b_A_sizes[0] = 41;
    b_A_sizes[1] = A_sizes[1];
    mmip = A_sizes[0] * A_sizes[1] - 1;
    for (i = 0; i <= mmip; i++) {
      Planilla_3DOF_Crane_B.b_A_data[i] = A_data[i];
    }

    e_idx = (int8_T)A_sizes[1];
    work_sizes = e_idx;
    mmip = e_idx - 1;
    for (i = 0; i <= mmip; i++) {
      work_data[i] = 0.0;
    }

    for (itau = 1; itau < 42; itau++) {
      j_i = ((itau - 1) * 41 + itau) - 1;
      mmip = 42 - itau;
      if (itau < 41) {
        atmp = Planilla_3DOF_Crane_B.b_A_data[j_i];
        b = Planilla_3_eml_matlab_zlarfg_je(mmip, &atmp,
          &Planilla_3DOF_Crane_B.b_A_data[0], b_A_sizes, j_i + 2);
        tau_data[itau - 1] = b;
      } else {
        atmp = Planilla_3DOF_Crane_B.b_A_data[j_i];
        b = Planilla_3DOF_Crane_B.b_A_data[j_i];
        c = Planilla_3D_eml_matlab_zlarfg_j(&atmp, &b);
        Planilla_3DOF_Crane_B.b_A_data[j_i] = b;
        tau_data[40] = c;
      }

      Planilla_3DOF_Crane_B.b_A_data[j_i] = atmp;
      if (itau < A_sizes[1]) {
        atmp = Planilla_3DOF_Crane_B.b_A_data[j_i];
        Planilla_3DOF_Crane_B.b_A_data[j_i] = 1.0;
        Planilla_3D_eml_matlab_zlarf_je(mmip, A_sizes[1] - itau, j_i + 1,
          tau_data[itau - 1], &Planilla_3DOF_Crane_B.b_A_data[0], b_A_sizes,
          itau + itau * 41, work_data, &work_sizes);
        Planilla_3DOF_Crane_B.b_A_data[j_i] = atmp;
      }
    }

    for (itau = 0; itau < 41; itau++) {
      for (mn = 0; mn + 1 <= itau + 1; mn++) {
        R_data[mn + R_sizes[0] * itau] =
          Planilla_3DOF_Crane_B.b_A_data[b_A_sizes[0] * itau + mn];
      }

      for (mn = itau + 1; mn + 1 < 42; mn++) {
        R_data[mn + R_sizes[0] * itau] = 0.0;
      }
    }

    itau = 40;
    e_idx = (int8_T)b_A_sizes[1];
    work_sizes = e_idx;
    mmip = e_idx - 1;
    for (i = 0; i <= mmip; i++) {
      work_data[i] = 0.0;
    }

    for (j_i = 40; j_i >= 0; j_i += -1) {
      mn = j_i * 41 + j_i;
      if (j_i + 1 < 41) {
        Planilla_3DOF_Crane_B.b_A_data[mn] = 1.0;
        Planilla_3_eml_matlab_zlarf_jek(41 - j_i, 40 - j_i, mn + 1,
          tau_data[itau], &Planilla_3DOF_Crane_B.b_A_data[0], b_A_sizes, mn + 42,
          work_data, &work_sizes);
        Planilla_3DOF_Crane_eml_xscal_j(40 - j_i, -tau_data[itau],
          &Planilla_3DOF_Crane_B.b_A_data[0], b_A_sizes, mn + 2);
      }

      Planilla_3DOF_Crane_B.b_A_data[mn] = 1.0 - tau_data[itau];
      for (mmip = 1; mmip <= j_i; mmip++) {
        Planilla_3DOF_Crane_B.b_A_data[mn - mmip] = 0.0;
      }

      itau--;
    }

    for (mn = 0; mn < 41; mn++) {
      memcpy((void *)&Q_data[41 * mn], (void *)
             (&Planilla_3DOF_Crane_B.b_A_data[b_A_sizes[0] * mn]), 41U * sizeof
             (real_T));
    }
  }
}

/* Function for MATLAB Function: '<S22>/optimizer' */
static real_T Planilla_3DOF_Crane_eml_div(real_T x, real_T y)
{
  return x / y;
}

/* Function for MATLAB Function: '<S22>/optimizer' */
static int32_T Planilla_3DOF_Crane_eml_ixamax(int32_T n, const real_T x_data[41],
  const int32_T *x_sizes, int32_T ix0)
{
  int32_T idxmax;
  int32_T ix;
  real_T smax;
  real_T s;
  int32_T k;
  UNUSED_PARAMETER(x_sizes);
  if (n < 1) {
    idxmax = 0;
  } else {
    idxmax = 1;
    if (n > 1) {
      ix = ix0 - 1;
      smax = fabs(x_data[ix0 - 1]);
      for (k = 2; k <= n; k++) {
        ix++;
        s = fabs(x_data[ix]);
        if (s > smax) {
          idxmax = k;
          smax = s;
        }
      }
    }
  }

  return idxmax;
}

/* Function for MATLAB Function: '<S22>/optimizer' */
static void Planilla_3DOF_Crane_eml_xswap(int32_T n, real_T x_data[1681],
  int32_T x_sizes[2], int32_T ix0, int32_T incx, int32_T iy0, int32_T incy)
{
  int32_T ix;
  int32_T iy;
  real_T temp;
  int32_T k;
  UNUSED_PARAMETER(x_sizes);
  ix = ix0 - 1;
  iy = iy0 - 1;
  for (k = 1; k <= n; k++) {
    temp = x_data[ix];
    x_data[ix] = x_data[iy];
    x_data[iy] = temp;
    ix += incx;
    iy += incy;
  }
}

/* Function for MATLAB Function: '<S22>/optimizer' */
static real_T Planilla_3DOF_Cran_eml_xnrm2_je(int32_T n, const real_T x_data
  [1681], const int32_T x_sizes[2], int32_T ix0)
{
  real_T y;
  real_T scale;
  int32_T kend;
  real_T absxk;
  real_T t;
  int32_T k;
  UNUSED_PARAMETER(x_sizes);
  y = 0.0;
  if (!(n < 1)) {
    if (n == 1) {
      y = fabs(x_data[ix0 - 1]);
    } else {
      scale = 2.2250738585072014E-308;
      kend = (ix0 + n) - 1;
      for (k = ix0; k <= kend; k++) {
        absxk = fabs(x_data[k - 1]);
        if (absxk > scale) {
          t = scale / absxk;
          y = y * t * t + 1.0;
          scale = absxk;
        } else {
          t = absxk / scale;
          y += t * t;
        }
      }

      y = scale * sqrt(y);
    }
  }

  return y;
}

/* Function for MATLAB Function: '<S22>/optimizer' */
static void Planilla_3DOF_Crane_eml_qrsolve(const real_T A_data[1681], const
  int32_T A_sizes[2], real_T B_data[1681], int32_T B_sizes[2], real_T Y_data
  [1681], int32_T Y_sizes[2])
{
  int32_T nb;
  int32_T mn;
  real_T tol;
  real_T rankR;
  int32_T b_mn;
  int32_T d_k;
  int32_T i_i;
  int32_T nmi;
  int32_T mmi;
  int32_T mmip;
  int32_T pvt;
  real_T atmp;
  int32_T f_i;
  boolean_T exitg;
  int32_T b_A_sizes[2];
  real_T tau_data[41];
  int32_T jpvt_data[41];
  real_T work_data[41];
  int32_T work_sizes;
  real_T vn1_data[41];
  real_T vn2_data[41];
  int32_T tmp_data[41];
  int32_T h_idx_0;
  int8_T h_idx;
  int8_T h_idx_1;
  nb = B_sizes[1] - 1;
  mn = (int32_T)((real_T)A_sizes[0] <= (real_T)A_sizes[1] ? (real_T)A_sizes[0] :
                 (real_T)A_sizes[1]) - 1;
  b_A_sizes[0] = A_sizes[0];
  b_A_sizes[1] = A_sizes[1];
  d_k = A_sizes[0] * A_sizes[1] - 1;
  for (i_i = 0; i_i <= d_k; i_i++) {
    Planilla_3DOF_Crane_B.b_A_data_m[i_i] = A_data[i_i];
  }

  b_mn = A_sizes[0] <= A_sizes[1] ? A_sizes[0] : A_sizes[1];
  d_k = A_sizes[1] - 1;
  for (i_i = 0; i_i <= d_k; i_i++) {
    tmp_data[i_i] = 1 + i_i;
  }

  d_k = A_sizes[1] - 1;
  for (i_i = 0; i_i <= d_k; i_i++) {
    for (h_idx_0 = 0; h_idx_0 < 1; h_idx_0++) {
      jpvt_data[i_i] = tmp_data[i_i];
    }
  }

  h_idx = (int8_T)A_sizes[1];
  work_sizes = h_idx;
  d_k = h_idx - 1;
  for (i_i = 0; i_i <= d_k; i_i++) {
    work_data[i_i] = 0.0;
  }

  h_idx_0 = (int8_T)A_sizes[1];
  d_k = 1;
  for (i_i = 0; i_i + 1 <= A_sizes[1]; i_i++) {
    vn1_data[i_i] = Planilla_3DOF_Crane_eml_xnrm2(A_sizes[0], A_data, A_sizes,
      d_k);
    vn2_data[i_i] = vn1_data[i_i];
    d_k += A_sizes[0];
  }

  for (f_i = 1; f_i <= b_mn; f_i++) {
    d_k = f_i - 1;
    i_i = (d_k * A_sizes[0] + f_i) - 1;
    nmi = A_sizes[1] - f_i;
    mmi = A_sizes[0] - f_i;
    mmip = 1 + mmi;
    pvt = (Planilla_3DOF_Crane_eml_ixamax(1 + nmi, vn1_data, &h_idx_0, f_i) +
           d_k) - 1;
    if (pvt + 1 != f_i) {
      Planilla_3DOF_Crane_eml_xswap(A_sizes[0],
        &Planilla_3DOF_Crane_B.b_A_data_m[0], b_A_sizes, 1 + A_sizes[0] * pvt, 1,
        1 + A_sizes[0] * d_k, 1);
      d_k = jpvt_data[pvt];
      jpvt_data[pvt] = jpvt_data[f_i - 1];
      jpvt_data[f_i - 1] = d_k;
      vn1_data[pvt] = vn1_data[f_i - 1];
      vn2_data[pvt] = vn2_data[f_i - 1];
    }

    if (f_i < A_sizes[0]) {
      atmp = Planilla_3DOF_Crane_B.b_A_data_m[i_i];
      tol = Planilla_3DOF_eml_matlab_zlarfg(mmip, &atmp,
        &Planilla_3DOF_Crane_B.b_A_data_m[0], b_A_sizes, i_i + 2);
      tau_data[f_i - 1] = tol;
    } else {
      atmp = Planilla_3DOF_Crane_B.b_A_data_m[i_i];
      tol = Planilla_3DOF_Crane_B.b_A_data_m[i_i];
      rankR = Planilla_3D_eml_matlab_zlarfg_j(&atmp, &tol);
      Planilla_3DOF_Crane_B.b_A_data_m[i_i] = tol;
      tau_data[f_i - 1] = rankR;
    }

    Planilla_3DOF_Crane_B.b_A_data_m[i_i] = atmp;
    if (f_i < A_sizes[1]) {
      atmp = Planilla_3DOF_Crane_B.b_A_data_m[i_i];
      Planilla_3DOF_Crane_B.b_A_data_m[i_i] = 1.0;
      Planilla_3DOF__eml_matlab_zlarf(mmip, nmi, i_i + 1, tau_data[f_i - 1],
        &Planilla_3DOF_Crane_B.b_A_data_m[0], b_A_sizes, f_i + f_i * A_sizes[0],
        A_sizes[0], work_data, &work_sizes);
      Planilla_3DOF_Crane_B.b_A_data_m[i_i] = atmp;
    }

    for (d_k = f_i; d_k + 1 <= A_sizes[1]; d_k++) {
      if (vn1_data[d_k] != 0.0) {
        rankR = fabs(Planilla_3DOF_Crane_B.b_A_data_m[(b_A_sizes[0] * d_k + f_i)
                     - 1]) / vn1_data[d_k];
        tol = rankR * rankR;
        rankR = 1.0 - rankR * rankR;
        if (1.0 - tol < 0.0) {
          rankR = 0.0;
        }

        tol = vn1_data[d_k] / vn2_data[d_k];
        if (tol * tol * rankR <= 1.4901161193847656E-8) {
          if (f_i < A_sizes[0]) {
            vn1_data[d_k] = Planilla_3DOF_Cran_eml_xnrm2_je(mmi,
              &Planilla_3DOF_Crane_B.b_A_data_m[0], b_A_sizes, (A_sizes[0] * d_k
              + f_i) + 1);
            vn2_data[d_k] = vn1_data[d_k];
          } else {
            vn1_data[d_k] = 0.0;
            vn2_data[d_k] = 0.0;
          }
        } else {
          vn1_data[d_k] *= sqrt(rankR);
        }
      }
    }
  }

  tol = ((real_T)A_sizes[0] >= (real_T)A_sizes[1] ? (real_T)A_sizes[0] : (real_T)
         A_sizes[1]) * fabs(Planilla_3DOF_Crane_B.b_A_data_m[0]) *
    2.2204460492503131E-16;
  rankR = 0.0;
  d_k = 0;
  exitg = FALSE;
  while (((uint32_T)exitg == 0U) && (d_k <= mn)) {
    if (fabs(Planilla_3DOF_Crane_B.b_A_data_m[b_A_sizes[0] * d_k + d_k]) <= tol)
    {
      exitg = TRUE;
    } else {
      rankR++;
      d_k++;
    }
  }

  h_idx = (int8_T)A_sizes[1];
  h_idx_1 = (int8_T)B_sizes[1];
  Y_sizes[0] = h_idx;
  Y_sizes[1] = h_idx_1;
  d_k = h_idx * h_idx_1 - 1;
  for (i_i = 0; i_i <= d_k; i_i++) {
    Y_data[i_i] = 0.0;
  }

  for (nmi = 0; nmi <= mn; nmi++) {
    if (tau_data[nmi] != 0.0) {
      for (mmip = 0; mmip <= nb; mmip++) {
        tol = B_data[B_sizes[0] * mmip + nmi];
        d_k = A_sizes[0] - nmi;
        for (i_i = 0; i_i <= d_k - 2; i_i++) {
          pvt = (nmi + i_i) + 1;
          tol += Planilla_3DOF_Crane_B.b_A_data_m[b_A_sizes[0] * nmi + pvt] *
            B_data[B_sizes[0] * mmip + pvt];
        }

        tol *= tau_data[nmi];
        if (tol != 0.0) {
          B_data[nmi + B_sizes[0] * mmip] = B_data[B_sizes[0] * mmip + nmi] -
            tol;
          d_k = A_sizes[0] - nmi;
          for (i_i = 0; i_i <= d_k - 2; i_i++) {
            pvt = (nmi + i_i) + 1;
            B_data[pvt + B_sizes[0] * mmip] = B_data[B_sizes[0] * mmip + pvt] -
              Planilla_3DOF_Crane_B.b_A_data_m[b_A_sizes[0] * nmi + pvt] * tol;
          }
        }
      }
    }
  }

  for (nmi = 0; nmi <= nb; nmi++) {
    for (d_k = 0; d_k <= (int32_T)rankR - 1; d_k++) {
      Y_data[(jpvt_data[(int32_T)(1.0 + (real_T)d_k) - 1] + Y_sizes[0] * nmi) -
        1] = B_data[((int32_T)(1.0 + (real_T)d_k) + B_sizes[0] * nmi) - 1];
    }

    for (d_k = 0; d_k <= (int32_T)-((-1.0 - rankR) + 1.0) - 1; d_k++) {
      tol = rankR + -(real_T)d_k;
      Y_data[(jpvt_data[(int32_T)tol - 1] + Y_sizes[0] * nmi) - 1] =
        Planilla_3DOF_Crane_eml_div(Y_data[(jpvt_data[(int32_T)tol - 1] +
        Y_sizes[0] * nmi) - 1], Planilla_3DOF_Crane_B.b_A_data_m[(((int32_T)tol
        - 1) * b_A_sizes[0] + (int32_T)tol) - 1]);
      for (i_i = 0; i_i <= (int32_T)(tol - 1.0) - 1; i_i++) {
        Y_data[(jpvt_data[(int32_T)(1.0 + (real_T)i_i) - 1] + Y_sizes[0] * nmi)
          - 1] -= Planilla_3DOF_Crane_B.b_A_data_m[(((int32_T)tol - 1) *
          b_A_sizes[0] + (int32_T)(1.0 + (real_T)i_i)) - 1] * Y_data[(jpvt_data
          [(int32_T)tol - 1] + Y_sizes[0] * nmi) - 1];
      }
    }
  }
}

/* Function for MATLAB Function: '<S22>/optimizer' */
static void Planilla_3DOF_Crane_eml_xtrsm(int32_T m, int32_T n, const real_T
  A_data[1681], const int32_T A_sizes[2], int32_T lda, real_T B_data[1681],
  int32_T B_sizes[2], int32_T ldb)
{
  int32_T j;
  int32_T k;
  int32_T i;
  int32_T c;
  int32_T b_c;
  UNUSED_PARAMETER(B_sizes);
  UNUSED_PARAMETER(A_sizes);
  for (j = 1; j <= n; j++) {
    c = (j - 1) * ldb;
    for (k = 0; k + 1 <= m; k++) {
      b_c = lda * k;
      if (B_data[k + c] != 0.0) {
        for (i = k + 1; i + 1 <= m; i++) {
          B_data[i + c] -= B_data[k + c] * A_data[i + b_c];
        }
      }
    }
  }
}

/* Function for MATLAB Function: '<S22>/optimizer' */
static void Planilla_3DOF_Crane_eml_xtrsm_j(int32_T m, int32_T n, const real_T
  A_data[1681], const int32_T A_sizes[2], int32_T lda, real_T B_data[1681],
  int32_T B_sizes[2], int32_T ldb)
{
  int32_T j;
  int32_T k;
  int32_T i;
  int32_T c;
  int32_T b_c;
  UNUSED_PARAMETER(B_sizes);
  UNUSED_PARAMETER(A_sizes);
  for (j = 1; j <= n; j++) {
    c = (j - 1) * ldb - 1;
    for (k = m; k > 0; k--) {
      b_c = (k - 1) * lda - 1;
      if (B_data[k + c] != 0.0) {
        B_data[k + c] /= A_data[k + b_c];
        for (i = 1; i <= k - 1; i++) {
          B_data[i + c] -= B_data[k + c] * A_data[i + b_c];
        }
      }
    }
  }
}

/* Function for MATLAB Function: '<S22>/optimizer' */
static void Planilla_3DOF_Crane_eml_lusolve(const real_T A_data[1681], const
  int32_T A_sizes[2], real_T B_data[1681], int32_T B_sizes[2])
{
  int32_T nb;
  real_T temp;
  int32_T i;
  int32_T ldap;
  int32_T mmj;
  int32_T jj;
  int32_T jp1j;
  int32_T b_j;
  int32_T c_c;
  int32_T ix;
  real_T s;
  int32_T k;
  int32_T jA;
  int32_T b_A_sizes[2];
  int32_T ipiv_data[41];
  int32_T tmp_data[41];
  int32_T loop_ub;
  b_A_sizes[0] = A_sizes[0];
  b_A_sizes[1] = A_sizes[1];
  loop_ub = A_sizes[0] * A_sizes[1] - 1;
  for (b_j = 0; b_j <= loop_ub; b_j++) {
    Planilla_3DOF_Crane_B.b_A_data_c[b_j] = A_data[b_j];
  }

  loop_ub = A_sizes[1] - 1;
  for (b_j = 0; b_j <= loop_ub; b_j++) {
    tmp_data[b_j] = 1 + b_j;
  }

  loop_ub = A_sizes[1] - 1;
  for (b_j = 0; b_j <= loop_ub; b_j++) {
    for (nb = 0; nb < 1; nb++) {
      ipiv_data[b_j] = tmp_data[b_j];
    }
  }

  ldap = A_sizes[1] + 1;
  loop_ub = A_sizes[1] - 1;
  loop_ub = loop_ub <= A_sizes[1] ? loop_ub : A_sizes[1];
  for (b_j = 1; b_j <= loop_ub; b_j++) {
    mmj = A_sizes[1] - b_j;
    jj = (b_j - 1) * ldap;
    jp1j = jj + 2;
    nb = mmj + 1;
    if (nb < 1) {
      i = -1;
    } else {
      i = 0;
      if (nb > 1) {
        ix = jj;
        temp = fabs(Planilla_3DOF_Crane_B.b_A_data_c[jj]);
        for (k = 1; k + 1 <= nb; k++) {
          ix++;
          s = fabs(Planilla_3DOF_Crane_B.b_A_data_c[ix]);
          if (s > temp) {
            i = k;
            temp = s;
          }
        }
      }
    }

    if (Planilla_3DOF_Crane_B.b_A_data_c[jj + i] != 0.0) {
      if (i != 0) {
        ipiv_data[b_j - 1] = b_j + i;
        Planilla_3DOF_Crane_eml_xswap(A_sizes[1],
          &Planilla_3DOF_Crane_B.b_A_data_c[0], b_A_sizes, b_j, A_sizes[1], b_j
          + i, A_sizes[1]);
      }

      nb = (jp1j + mmj) - 1;
      for (i = jp1j; i <= nb; i++) {
        Planilla_3DOF_Crane_B.b_A_data_c[i - 1] =
          Planilla_3DOF_Crane_B.b_A_data_c[i - 1] /
          Planilla_3DOF_Crane_B.b_A_data_c[jj];
      }
    }

    c_c = A_sizes[1] - b_j;
    jA = jj + ldap;
    nb = jj + A_sizes[1];
    for (i = 1; i <= c_c; i++) {
      temp = Planilla_3DOF_Crane_B.b_A_data_c[nb];
      if (Planilla_3DOF_Crane_B.b_A_data_c[nb] != 0.0) {
        ix = jp1j;
        k = mmj + jA;
        for (jj = jA; jj + 1 <= k; jj++) {
          Planilla_3DOF_Crane_B.b_A_data_c[jj] =
            Planilla_3DOF_Crane_B.b_A_data_c[ix - 1] * -temp +
            Planilla_3DOF_Crane_B.b_A_data_c[jj];
          ix++;
        }
      }

      nb += A_sizes[1];
      jA += A_sizes[1];
    }
  }

  nb = B_sizes[1];
  for (i = 0; i + 1 <= A_sizes[1]; i++) {
    if (i + 1 != ipiv_data[i]) {
      for (ix = 0; ix + 1 <= nb; ix++) {
        temp = B_data[B_sizes[0] * ix + i];
        B_data[i + B_sizes[0] * ix] = B_data[(B_sizes[0] * ix + ipiv_data[i]) -
          1];
        B_data[(ipiv_data[i] + B_sizes[0] * ix) - 1] = temp;
      }
    }
  }

  Planilla_3DOF_Crane_eml_xtrsm(A_sizes[1], nb,
    &Planilla_3DOF_Crane_B.b_A_data_c[0], b_A_sizes, A_sizes[1], B_data, B_sizes,
    A_sizes[1]);
  Planilla_3DOF_Crane_eml_xtrsm_j(A_sizes[1], nb,
    &Planilla_3DOF_Crane_B.b_A_data_c[0], b_A_sizes, A_sizes[1], B_data, B_sizes,
    A_sizes[1]);
}

/* Function for MATLAB Function: '<S22>/optimizer' */
static void Planilla_3DOF_Crane_mldivide(const real_T A_data[1681], const
  int32_T A_sizes[2], const real_T B_data[1681], const int32_T B_sizes[2],
  real_T Y_data[1681], int32_T Y_sizes[2])
{
  int32_T i;
  int32_T B_sizes_0[2];
  int32_T loop_ub;
  if (A_sizes[0] == A_sizes[1]) {
    Y_sizes[0] = B_sizes[0];
    Y_sizes[1] = B_sizes[1];
    loop_ub = B_sizes[0] * B_sizes[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      Y_data[i] = B_data[i];
    }

    Planilla_3DOF_Crane_eml_lusolve(A_data, A_sizes, Y_data, Y_sizes);
  } else {
    B_sizes_0[0] = B_sizes[0];
    B_sizes_0[1] = B_sizes[1];
    loop_ub = B_sizes[0] * B_sizes[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      Planilla_3DOF_Crane_B.B_data[i] = B_data[i];
    }

    Planilla_3DOF_Crane_eml_qrsolve(A_data, A_sizes,
      &Planilla_3DOF_Crane_B.B_data[0], B_sizes_0, Y_data, Y_sizes);
  }
}

/* Function for MATLAB Function: '<S22>/optimizer' */
static real_T Planilla_3DOF_Crane_KWIKfactor(const real_T iC[41], real_T nA,
  real_T TL[1681], real_T Q[1681], real_T RLinv[1681])
{
  real_T Status;
  int32_T i;
  static const int8_T EYE[1681] = { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 1 };

  static const real_T A[16400] = { -122.92585708443505, 89.743962404247725,
    -469.23951004644942, 143.32531878203673, -1025.5289456501509,
    31.99058381611772, -1819.6624942238932, 23.271901759494639,
    -2853.8225394743986, 138.1198565101991, -4099.261352837816,
    100.56020151405892, -5565.3805363637839, 0.84702541282959487,
    -7277.13941411706, 78.586411795835787, -9215.0789475513338,
    146.97426274767963, -11362.080892110174, 41.6777812162796,
    -13744.502135701281, 15.719471768746104, -16368.840333729961,
    131.47593403328628, -19206.120348032749, 110.7898205275151,
    -22261.520144359198, 3.3688914051172816, -25561.928383627914,
    67.340599114444259, -29091.332231365828, 148.98393160798355,
    -32829.29544761841, 52.113791641431931, -36800.065712683892,
    9.5045803688707551, -41014.308589067427, 123.54423323710444,
    -45443.47867521365, 120.20081518969195, -50088.4128660826,
    7.5084029200590408, -54977.319333828207, 56.261575539274567,
    -60097.994613651055, 149.30874676163725, -65427.147957119967,
    63.061929950135578, -70986.367907840919, 4.7681791678185874,
    -76790.246044114945, 114.50464237859434, -82811.314100923424,
    128.57974736552094, -89046.048921945883, 13.171677254544306,
    -95523.3384388902, 45.600609529734896, -102235.06532703183,
    147.94134151222596, -109155.61255565878, 74.273896115989189,
    -116303.41991091125, 1.6176881223081239, -123696.67405488883,
    104.56217628178702, -131309.60682995062, 135.73658574357634,
    -139134.41493247409, 20.230273286702015, -147200.01088532593,
    35.599488142856629, -155502.54760200047, 144.91272814238221,
    -164014.66275498597, 85.495406587169242, -172751.229164924,
    0.12455929000621779, -181733.61611044646, 93.942326671825242,
    -190938.33995427814, 141.50901568112022, -200353.4942217475,
    28.524104476544963, -210007.36030076578, 26.485033385668139,
    -219900.4485936503, 140.29159456583949, -230004.27204430423,
    96.471961350276828, -240329.79919739324, 0.32265632133699285,
    -250901.09730016242, 82.885948099882853, -261697.49983655111,
    145.76612044459679, -272703.2671956055, 37.865069573856985,
    -283945.40821809182, 18.4639579697768, -295428.77921940066,
    134.18274650907904, -307124.41449152364, 106.95461590345923,
    -319039.129540315, 2.2074864434909216, -331199.14374471013,
    71.643795444452337, -343587.07641936751, 148.41135035630208,
    -356183.71178603574, 48.041318690111154, -369014.17358707963,
    11.718177137881923, -382087.55391139357, 126.72473055335561,
    -395375.06533139275, 116.70562723243215, -408879.21574078186,
    5.73630235497275, 122.92585708443505, -89.743962404247725,
    469.23951004644942, -143.32531878203673, 1025.5289456501509,
    -31.99058381611772, 1819.6624942238932, -23.271901759494639,
    2853.8225394743986, -138.1198565101991, 4099.261352837816,
    -100.56020151405892, 5565.3805363637839, -0.84702541282959487,
    7277.13941411706, -78.586411795835787, 9215.0789475513338,
    -146.97426274767963, 11362.080892110174, -41.6777812162796,
    13744.502135701281, -15.719471768746104, 16368.840333729961,
    -131.47593403328628, 19206.120348032749, -110.7898205275151,
    22261.520144359198, -3.3688914051172816, 25561.928383627914,
    -67.340599114444259, 29091.332231365828, -148.98393160798355,
    32829.29544761841, -52.113791641431931, 36800.065712683892,
    -9.5045803688707551, 41014.308589067427, -123.54423323710444,
    45443.47867521365, -120.20081518969195, 50088.4128660826,
    -7.5084029200590408, 54977.319333828207, -56.261575539274567,
    60097.994613651055, -149.30874676163725, 65427.147957119967,
    -63.061929950135578, 70986.367907840919, -4.7681791678185874,
    76790.246044114945, -114.50464237859434, 82811.314100923424,
    -128.57974736552094, 89046.048921945883, -13.171677254544306,
    95523.3384388902, -45.600609529734896, 102235.06532703183,
    -147.94134151222596, 109155.61255565878, -74.273896115989189,
    116303.41991091125, -1.6176881223081239, 123696.67405488883,
    -104.56217628178702, 131309.60682995062, -135.73658574357634,
    139134.41493247409, -20.230273286702015, 147200.01088532593,
    -35.599488142856629, 155502.54760200047, -144.91272814238221,
    164014.66275498597, -85.495406587169242, 172751.229164924,
    -0.12455929000621779, 181733.61611044646, -93.942326671825242,
    190938.33995427814, -141.50901568112022, 200353.4942217475,
    -28.524104476544963, 210007.36030076578, -26.485033385668139,
    219900.4485936503, -140.29159456583949, 230004.27204430423,
    -96.471961350276828, 240329.79919739324, -0.32265632133699285,
    250901.09730016242, -82.885948099882853, 261697.49983655111,
    -145.76612044459679, 272703.2671956055, -37.865069573856985,
    283945.40821809182, -18.4639579697768, 295428.77921940066,
    -134.18274650907904, 307124.41449152364, -106.95461590345923,
    319039.129540315, -2.2074864434909216, 331199.14374471013,
    -71.643795444452337, 343587.07641936751, -148.41135035630208,
    356183.71178603574, -48.041318690111154, 369014.17358707963,
    -11.718177137881923, 382087.55391139357, -126.72473055335561,
    395375.06533139275, -116.70562723243215, 408879.21574078186,
    -5.73630235497275, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0, -0.0,
    -122.92585708443505, 89.743962404247725, -469.23951004644942,
    143.32531878203673, -1025.5289456501509, 31.99058381611772,
    -1819.6624942238932, 23.271901759494639, -2853.8225394743986,
    138.1198565101991, -4099.261352837816, 100.56020151405892,
    -5565.3805363637839, 0.84702541282959487, -7277.13941411706,
    78.586411795835787, -9215.0789475513338, 146.97426274767963,
    -11362.080892110174, 41.6777812162796, -13744.502135701281,
    15.719471768746104, -16368.840333729961, 131.47593403328628,
    -19206.120348032749, 110.7898205275151, -22261.520144359198,
    3.3688914051172816, -25561.928383627914, 67.340599114444259,
    -29091.332231365828, 148.98393160798355, -32829.29544761841,
    52.113791641431931, -36800.065712683892, 9.5045803688707551,
    -41014.308589067427, 123.54423323710444, -45443.47867521365,
    120.20081518969195, -50088.4128660826, 7.5084029200590408,
    -54977.319333828207, 56.261575539274567, -60097.994613651055,
    149.30874676163725, -65427.147957119967, 63.061929950135578,
    -70986.367907840919, 4.7681791678185874, -76790.246044114945,
    114.50464237859434, -82811.314100923424, 128.57974736552094,
    -89046.048921945883, 13.171677254544306, -95523.3384388902,
    45.600609529734896, -102235.06532703183, 147.94134151222596,
    -109155.61255565878, 74.273896115989189, -116303.41991091125,
    1.6176881223081239, -123696.67405488883, 104.56217628178702,
    -131309.60682995062, 135.73658574357634, -139134.41493247409,
    20.230273286702015, -147200.01088532593, 35.599488142856629,
    -155502.54760200047, 144.91272814238221, -164014.66275498597,
    85.495406587169242, -172751.229164924, 0.12455929000621779,
    -181733.61611044646, 93.942326671825242, -190938.33995427814,
    141.50901568112022, -200353.4942217475, 28.524104476544963,
    -210007.36030076578, 26.485033385668139, -219900.4485936503,
    140.29159456583949, -230004.27204430423, 96.471961350276828,
    -240329.79919739324, 0.32265632133699285, -250901.09730016242,
    82.885948099882853, -261697.49983655111, 145.76612044459679,
    -272703.2671956055, 37.865069573856985, -283945.40821809182,
    18.4639579697768, -295428.77921940066, 134.18274650907904,
    -307124.41449152364, 106.95461590345923, -319039.129540315,
    2.2074864434909216, -331199.14374471013, 71.643795444452337,
    -343587.07641936751, 148.41135035630208, -356183.71178603574,
    48.041318690111154, -369014.17358707963, 11.718177137881923,
    -382087.55391139357, 126.72473055335561, -395375.06533139275,
    116.70562723243215, -0.0, -0.0, 122.92585708443505, -89.743962404247725,
    469.23951004644942, -143.32531878203673, 1025.5289456501509,
    -31.99058381611772, 1819.6624942238932, -23.271901759494639,
    2853.8225394743986, -138.1198565101991, 4099.261352837816,
    -100.56020151405892, 5565.3805363637839, -0.84702541282959487,
    7277.13941411706, -78.586411795835787, 9215.0789475513338,
    -146.97426274767963, 11362.080892110174, -41.6777812162796,
    13744.502135701281, -15.719471768746104, 16368.840333729961,
    -131.47593403328628, 19206.120348032749, -110.7898205275151,
    22261.520144359198, -3.3688914051172816, 25561.928383627914,
    -67.340599114444259, 29091.332231365828, -148.98393160798355,
    32829.29544761841, -52.113791641431931, 36800.065712683892,
    -9.5045803688707551, 41014.308589067427, -123.54423323710444,
    45443.47867521365, -120.20081518969195, 50088.4128660826,
    -7.5084029200590408, 54977.319333828207, -56.261575539274567,
    60097.994613651055, -149.30874676163725, 65427.147957119967,
    -63.061929950135578, 70986.367907840919, -4.7681791678185874,
    76790.246044114945, -114.50464237859434, 82811.314100923424,
    -128.57974736552094, 89046.048921945883, -13.171677254544306,
    95523.3384388902, -45.600609529734896, 102235.06532703183,
    -147.94134151222596, 109155.61255565878, -74.273896115989189,
    116303.41991091125, -1.6176881223081239, 123696.67405488883,
    -104.56217628178702, 131309.60682995062, -135.73658574357634,
    139134.41493247409, -20.230273286702015, 147200.01088532593,
    -35.599488142856629, 155502.54760200047, -144.91272814238221,
    164014.66275498597, -85.495406587169242, 172751.229164924,
    -0.12455929000621779, 181733.61611044646, -93.942326671825242,
    190938.33995427814, -141.50901568112022, 200353.4942217475,
    -28.524104476544963, 210007.36030076578, -26.485033385668139,
    219900.4485936503, -140.29159456583949, 230004.27204430423,
    -96.471961350276828, 240329.79919739324, -0.32265632133699285,
    250901.09730016242, -82.885948099882853, 261697.49983655111,
    -145.76612044459679, 272703.2671956055, -37.865069573856985,
    283945.40821809182, -18.4639579697768, 295428.77921940066,
    -134.18274650907904, 307124.41449152364, -106.95461590345923,
    319039.129540315, -2.2074864434909216, 331199.14374471013,
    -71.643795444452337, 343587.07641936751, -148.41135035630208,
    356183.71178603574, -48.041318690111154, 369014.17358707963,
    -11.718177137881923, 382087.55391139357, -126.72473055335561,
    395375.06533139275, -116.70562723243215, -0.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -0.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, -0.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, -0.0, -0.0, -0.0, -0.0, -122.92585708443505, 89.743962404247725,
    -469.23951004644942, 143.32531878203673, -1025.5289456501509,
    31.99058381611772, -1819.6624942238932, 23.271901759494639,
    -2853.8225394743986, 138.1198565101991, -4099.261352837816,
    100.56020151405892, -5565.3805363637839, 0.84702541282959487,
    -7277.13941411706, 78.586411795835787, -9215.0789475513338,
    146.97426274767963, -11362.080892110174, 41.6777812162796,
    -13744.502135701281, 15.719471768746104, -16368.840333729961,
    131.47593403328628, -19206.120348032749, 110.7898205275151,
    -22261.520144359198, 3.3688914051172816, -25561.928383627914,
    67.340599114444259, -29091.332231365828, 148.98393160798355,
    -32829.29544761841, 52.113791641431931, -36800.065712683892,
    9.5045803688707551, -41014.308589067427, 123.54423323710444,
    -45443.47867521365, 120.20081518969195, -50088.4128660826,
    7.5084029200590408, -54977.319333828207, 56.261575539274567,
    -60097.994613651055, 149.30874676163725, -65427.147957119967,
    63.061929950135578, -70986.367907840919, 4.7681791678185874,
    -76790.246044114945, 114.50464237859434, -82811.314100923424,
    128.57974736552094, -89046.048921945883, 13.171677254544306,
    -95523.3384388902, 45.600609529734896, -102235.06532703183,
    147.94134151222596, -109155.61255565878, 74.273896115989189,
    -116303.41991091125, 1.6176881223081239, -123696.67405488883,
    104.56217628178702, -131309.60682995062, 135.73658574357634,
    -139134.41493247409, 20.230273286702015, -147200.01088532593,
    35.599488142856629, -155502.54760200047, 144.91272814238221,
    -164014.66275498597, 85.495406587169242, -172751.229164924,
    0.12455929000621779, -181733.61611044646, 93.942326671825242,
    -190938.33995427814, 141.50901568112022, -200353.4942217475,
    28.524104476544963, -210007.36030076578, 26.485033385668139,
    -219900.4485936503, 140.29159456583949, -230004.27204430423,
    96.471961350276828, -240329.79919739324, 0.32265632133699285,
    -250901.09730016242, 82.885948099882853, -261697.49983655111,
    145.76612044459679, -272703.2671956055, 37.865069573856985,
    -283945.40821809182, 18.4639579697768, -295428.77921940066,
    134.18274650907904, -307124.41449152364, 106.95461590345923,
    -319039.129540315, 2.2074864434909216, -331199.14374471013,
    71.643795444452337, -343587.07641936751, 148.41135035630208,
    -356183.71178603574, 48.041318690111154, -369014.17358707963,
    11.718177137881923, -382087.55391139357, 126.72473055335561, -0.0, -0.0,
    -0.0, -0.0, 122.92585708443505, -89.743962404247725, 469.23951004644942,
    -143.32531878203673, 1025.5289456501509, -31.99058381611772,
    1819.6624942238932, -23.271901759494639, 2853.8225394743986,
    -138.1198565101991, 4099.261352837816, -100.56020151405892,
    5565.3805363637839, -0.84702541282959487, 7277.13941411706,
    -78.586411795835787, 9215.0789475513338, -146.97426274767963,
    11362.080892110174, -41.6777812162796, 13744.502135701281,
    -15.719471768746104, 16368.840333729961, -131.47593403328628,
    19206.120348032749, -110.7898205275151, 22261.520144359198,
    -3.3688914051172816, 25561.928383627914, -67.340599114444259,
    29091.332231365828, -148.98393160798355, 32829.29544761841,
    -52.113791641431931, 36800.065712683892, -9.5045803688707551,
    41014.308589067427, -123.54423323710444, 45443.47867521365,
    -120.20081518969195, 50088.4128660826, -7.5084029200590408,
    54977.319333828207, -56.261575539274567, 60097.994613651055,
    -149.30874676163725, 65427.147957119967, -63.061929950135578,
    70986.367907840919, -4.7681791678185874, 76790.246044114945,
    -114.50464237859434, 82811.314100923424, -128.57974736552094,
    89046.048921945883, -13.171677254544306, 95523.3384388902,
    -45.600609529734896, 102235.06532703183, -147.94134151222596,
    109155.61255565878, -74.273896115989189, 116303.41991091125,
    -1.6176881223081239, 123696.67405488883, -104.56217628178702,
    131309.60682995062, -135.73658574357634, 139134.41493247409,
    -20.230273286702015, 147200.01088532593, -35.599488142856629,
    155502.54760200047, -144.91272814238221, 164014.66275498597,
    -85.495406587169242, 172751.229164924, -0.12455929000621779,
    181733.61611044646, -93.942326671825242, 190938.33995427814,
    -141.50901568112022, 200353.4942217475, -28.524104476544963,
    210007.36030076578, -26.485033385668139, 219900.4485936503,
    -140.29159456583949, 230004.27204430423, -96.471961350276828,
    240329.79919739324, -0.32265632133699285, 250901.09730016242,
    -82.885948099882853, 261697.49983655111, -145.76612044459679,
    272703.2671956055, -37.865069573856985, 283945.40821809182,
    -18.4639579697768, 295428.77921940066, -134.18274650907904,
    307124.41449152364, -106.95461590345923, 319039.129540315,
    -2.2074864434909216, 331199.14374471013, -71.643795444452337,
    343587.07641936751, -148.41135035630208, 356183.71178603574,
    -48.041318690111154, 369014.17358707963, -11.718177137881923,
    382087.55391139357, -126.72473055335561, -0.0, -0.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -0.0, -0.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, -0.0, -0.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -122.92585708443505,
    89.743962404247725, -469.23951004644942, 143.32531878203673,
    -1025.5289456501509, 31.99058381611772, -1819.6624942238932,
    23.271901759494639, -2853.8225394743986, 138.1198565101991,
    -4099.261352837816, 100.56020151405892, -5565.3805363637839,
    0.84702541282959487, -7277.13941411706, 78.586411795835787,
    -9215.0789475513338, 146.97426274767963, -11362.080892110174,
    41.6777812162796, -13744.502135701281, 15.719471768746104,
    -16368.840333729961, 131.47593403328628, -19206.120348032749,
    110.7898205275151, -22261.520144359198, 3.3688914051172816,
    -25561.928383627914, 67.340599114444259, -29091.332231365828,
    148.98393160798355, -32829.29544761841, 52.113791641431931,
    -36800.065712683892, 9.5045803688707551, -41014.308589067427,
    123.54423323710444, -45443.47867521365, 120.20081518969195,
    -50088.4128660826, 7.5084029200590408, -54977.319333828207,
    56.261575539274567, -60097.994613651055, 149.30874676163725,
    -65427.147957119967, 63.061929950135578, -70986.367907840919,
    4.7681791678185874, -76790.246044114945, 114.50464237859434,
    -82811.314100923424, 128.57974736552094, -89046.048921945883,
    13.171677254544306, -95523.3384388902, 45.600609529734896,
    -102235.06532703183, 147.94134151222596, -109155.61255565878,
    74.273896115989189, -116303.41991091125, 1.6176881223081239,
    -123696.67405488883, 104.56217628178702, -131309.60682995062,
    135.73658574357634, -139134.41493247409, 20.230273286702015,
    -147200.01088532593, 35.599488142856629, -155502.54760200047,
    144.91272814238221, -164014.66275498597, 85.495406587169242,
    -172751.229164924, 0.12455929000621779, -181733.61611044646,
    93.942326671825242, -190938.33995427814, 141.50901568112022,
    -200353.4942217475, 28.524104476544963, -210007.36030076578,
    26.485033385668139, -219900.4485936503, 140.29159456583949,
    -230004.27204430423, 96.471961350276828, -240329.79919739324,
    0.32265632133699285, -250901.09730016242, 82.885948099882853,
    -261697.49983655111, 145.76612044459679, -272703.2671956055,
    37.865069573856985, -283945.40821809182, 18.4639579697768,
    -295428.77921940066, 134.18274650907904, -307124.41449152364,
    106.95461590345923, -319039.129540315, 2.2074864434909216,
    -331199.14374471013, 71.643795444452337, -343587.07641936751,
    148.41135035630208, -356183.71178603574, 48.041318690111154,
    -369014.17358707963, 11.718177137881923, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    122.92585708443505, -89.743962404247725, 469.23951004644942,
    -143.32531878203673, 1025.5289456501509, -31.99058381611772,
    1819.6624942238932, -23.271901759494639, 2853.8225394743986,
    -138.1198565101991, 4099.261352837816, -100.56020151405892,
    5565.3805363637839, -0.84702541282959487, 7277.13941411706,
    -78.586411795835787, 9215.0789475513338, -146.97426274767963,
    11362.080892110174, -41.6777812162796, 13744.502135701281,
    -15.719471768746104, 16368.840333729961, -131.47593403328628,
    19206.120348032749, -110.7898205275151, 22261.520144359198,
    -3.3688914051172816, 25561.928383627914, -67.340599114444259,
    29091.332231365828, -148.98393160798355, 32829.29544761841,
    -52.113791641431931, 36800.065712683892, -9.5045803688707551,
    41014.308589067427, -123.54423323710444, 45443.47867521365,
    -120.20081518969195, 50088.4128660826, -7.5084029200590408,
    54977.319333828207, -56.261575539274567, 60097.994613651055,
    -149.30874676163725, 65427.147957119967, -63.061929950135578,
    70986.367907840919, -4.7681791678185874, 76790.246044114945,
    -114.50464237859434, 82811.314100923424, -128.57974736552094,
    89046.048921945883, -13.171677254544306, 95523.3384388902,
    -45.600609529734896, 102235.06532703183, -147.94134151222596,
    109155.61255565878, -74.273896115989189, 116303.41991091125,
    -1.6176881223081239, 123696.67405488883, -104.56217628178702,
    131309.60682995062, -135.73658574357634, 139134.41493247409,
    -20.230273286702015, 147200.01088532593, -35.599488142856629,
    155502.54760200047, -144.91272814238221, 164014.66275498597,
    -85.495406587169242, 172751.229164924, -0.12455929000621779,
    181733.61611044646, -93.942326671825242, 190938.33995427814,
    -141.50901568112022, 200353.4942217475, -28.524104476544963,
    210007.36030076578, -26.485033385668139, 219900.4485936503,
    -140.29159456583949, 230004.27204430423, -96.471961350276828,
    240329.79919739324, -0.32265632133699285, 250901.09730016242,
    -82.885948099882853, 261697.49983655111, -145.76612044459679,
    272703.2671956055, -37.865069573856985, 283945.40821809182,
    -18.4639579697768, 295428.77921940066, -134.18274650907904,
    307124.41449152364, -106.95461590345923, 319039.129540315,
    -2.2074864434909216, 331199.14374471013, -71.643795444452337,
    343587.07641936751, -148.41135035630208, 356183.71178603574,
    -48.041318690111154, 369014.17358707963, -11.718177137881923, -0.0, -0.0,
    -0.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -0.0,
    -0.0, -0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, -0.0, -0.0, -0.0, -1.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 0.0, 0.0, 0.0, 1.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -122.92585708443505, 89.743962404247725, -469.23951004644942,
    143.32531878203673, -1025.5289456501509, 31.99058381611772,
    -1819.6624942238932, 23.271901759494639, -2853.8225394743986,
    138.1198565101991, -4099.261352837816, 100.56020151405892,
    -5565.3805363637839, 0.84702541282959487, -7277.13941411706,
    78.586411795835787, -9215.0789475513338, 146.97426274767963,
    -11362.080892110174, 41.6777812162796, -13744.502135701281,
    15.719471768746104, -16368.840333729961, 131.47593403328628,
    -19206.120348032749, 110.7898205275151, -22261.520144359198,
    3.3688914051172816, -25561.928383627914, 67.340599114444259,
    -29091.332231365828, 148.98393160798355, -32829.29544761841,
    52.113791641431931, -36800.065712683892, 9.5045803688707551,
    -41014.308589067427, 123.54423323710444, -45443.47867521365,
    120.20081518969195, -50088.4128660826, 7.5084029200590408,
    -54977.319333828207, 56.261575539274567, -60097.994613651055,
    149.30874676163725, -65427.147957119967, 63.061929950135578,
    -70986.367907840919, 4.7681791678185874, -76790.246044114945,
    114.50464237859434, -82811.314100923424, 128.57974736552094,
    -89046.048921945883, 13.171677254544306, -95523.3384388902,
    45.600609529734896, -102235.06532703183, 147.94134151222596,
    -109155.61255565878, 74.273896115989189, -116303.41991091125,
    1.6176881223081239, -123696.67405488883, 104.56217628178702,
    -131309.60682995062, 135.73658574357634, -139134.41493247409,
    20.230273286702015, -147200.01088532593, 35.599488142856629,
    -155502.54760200047, 144.91272814238221, -164014.66275498597,
    85.495406587169242, -172751.229164924, 0.12455929000621779,
    -181733.61611044646, 93.942326671825242, -190938.33995427814,
    141.50901568112022, -200353.4942217475, 28.524104476544963,
    -210007.36030076578, 26.485033385668139, -219900.4485936503,
    140.29159456583949, -230004.27204430423, 96.471961350276828,
    -240329.79919739324, 0.32265632133699285, -250901.09730016242,
    82.885948099882853, -261697.49983655111, 145.76612044459679,
    -272703.2671956055, 37.865069573856985, -283945.40821809182,
    18.4639579697768, -295428.77921940066, 134.18274650907904,
    -307124.41449152364, 106.95461590345923, -319039.129540315,
    2.2074864434909216, -331199.14374471013, 71.643795444452337,
    -343587.07641936751, 148.41135035630208, -356183.71178603574,
    48.041318690111154, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    122.92585708443505, -89.743962404247725, 469.23951004644942,
    -143.32531878203673, 1025.5289456501509, -31.99058381611772,
    1819.6624942238932, -23.271901759494639, 2853.8225394743986,
    -138.1198565101991, 4099.261352837816, -100.56020151405892,
    5565.3805363637839, -0.84702541282959487, 7277.13941411706,
    -78.586411795835787, 9215.0789475513338, -146.97426274767963,
    11362.080892110174, -41.6777812162796, 13744.502135701281,
    -15.719471768746104, 16368.840333729961, -131.47593403328628,
    19206.120348032749, -110.7898205275151, 22261.520144359198,
    -3.3688914051172816, 25561.928383627914, -67.340599114444259,
    29091.332231365828, -148.98393160798355, 32829.29544761841,
    -52.113791641431931, 36800.065712683892, -9.5045803688707551,
    41014.308589067427, -123.54423323710444, 45443.47867521365,
    -120.20081518969195, 50088.4128660826, -7.5084029200590408,
    54977.319333828207, -56.261575539274567, 60097.994613651055,
    -149.30874676163725, 65427.147957119967, -63.061929950135578,
    70986.367907840919, -4.7681791678185874, 76790.246044114945,
    -114.50464237859434, 82811.314100923424, -128.57974736552094,
    89046.048921945883, -13.171677254544306, 95523.3384388902,
    -45.600609529734896, 102235.06532703183, -147.94134151222596,
    109155.61255565878, -74.273896115989189, 116303.41991091125,
    -1.6176881223081239, 123696.67405488883, -104.56217628178702,
    131309.60682995062, -135.73658574357634, 139134.41493247409,
    -20.230273286702015, 147200.01088532593, -35.599488142856629,
    155502.54760200047, -144.91272814238221, 164014.66275498597,
    -85.495406587169242, 172751.229164924, -0.12455929000621779,
    181733.61611044646, -93.942326671825242, 190938.33995427814,
    -141.50901568112022, 200353.4942217475, -28.524104476544963,
    210007.36030076578, -26.485033385668139, 219900.4485936503,
    -140.29159456583949, 230004.27204430423, -96.471961350276828,
    240329.79919739324, -0.32265632133699285, 250901.09730016242,
    -82.885948099882853, 261697.49983655111, -145.76612044459679,
    272703.2671956055, -37.865069573856985, 283945.40821809182,
    -18.4639579697768, 295428.77921940066, -134.18274650907904,
    307124.41449152364, -106.95461590345923, 319039.129540315,
    -2.2074864434909216, 331199.14374471013, -71.643795444452337,
    343587.07641936751, -148.41135035630208, 356183.71178603574,
    -48.041318690111154, -0.0, -0.0, -0.0, -0.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -0.0, -0.0, -0.0, -0.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, -0.0, -0.0, -0.0, -0.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -122.92585708443505,
    89.743962404247725, -469.23951004644942, 143.32531878203673,
    -1025.5289456501509, 31.99058381611772, -1819.6624942238932,
    23.271901759494639, -2853.8225394743986, 138.1198565101991,
    -4099.261352837816, 100.56020151405892, -5565.3805363637839,
    0.84702541282959487, -7277.13941411706, 78.586411795835787,
    -9215.0789475513338, 146.97426274767963, -11362.080892110174,
    41.6777812162796, -13744.502135701281, 15.719471768746104,
    -16368.840333729961, 131.47593403328628, -19206.120348032749,
    110.7898205275151, -22261.520144359198, 3.3688914051172816,
    -25561.928383627914, 67.340599114444259, -29091.332231365828,
    148.98393160798355, -32829.29544761841, 52.113791641431931,
    -36800.065712683892, 9.5045803688707551, -41014.308589067427,
    123.54423323710444, -45443.47867521365, 120.20081518969195,
    -50088.4128660826, 7.5084029200590408, -54977.319333828207,
    56.261575539274567, -60097.994613651055, 149.30874676163725,
    -65427.147957119967, 63.061929950135578, -70986.367907840919,
    4.7681791678185874, -76790.246044114945, 114.50464237859434,
    -82811.314100923424, 128.57974736552094, -89046.048921945883,
    13.171677254544306, -95523.3384388902, 45.600609529734896,
    -102235.06532703183, 147.94134151222596, -109155.61255565878,
    74.273896115989189, -116303.41991091125, 1.6176881223081239,
    -123696.67405488883, 104.56217628178702, -131309.60682995062,
    135.73658574357634, -139134.41493247409, 20.230273286702015,
    -147200.01088532593, 35.599488142856629, -155502.54760200047,
    144.91272814238221, -164014.66275498597, 85.495406587169242,
    -172751.229164924, 0.12455929000621779, -181733.61611044646,
    93.942326671825242, -190938.33995427814, 141.50901568112022,
    -200353.4942217475, 28.524104476544963, -210007.36030076578,
    26.485033385668139, -219900.4485936503, 140.29159456583949,
    -230004.27204430423, 96.471961350276828, -240329.79919739324,
    0.32265632133699285, -250901.09730016242, 82.885948099882853,
    -261697.49983655111, 145.76612044459679, -272703.2671956055,
    37.865069573856985, -283945.40821809182, 18.4639579697768,
    -295428.77921940066, 134.18274650907904, -307124.41449152364,
    106.95461590345923, -319039.129540315, 2.2074864434909216,
    -331199.14374471013, 71.643795444452337, -343587.07641936751,
    148.41135035630208, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, 122.92585708443505, -89.743962404247725, 469.23951004644942,
    -143.32531878203673, 1025.5289456501509, -31.99058381611772,
    1819.6624942238932, -23.271901759494639, 2853.8225394743986,
    -138.1198565101991, 4099.261352837816, -100.56020151405892,
    5565.3805363637839, -0.84702541282959487, 7277.13941411706,
    -78.586411795835787, 9215.0789475513338, -146.97426274767963,
    11362.080892110174, -41.6777812162796, 13744.502135701281,
    -15.719471768746104, 16368.840333729961, -131.47593403328628,
    19206.120348032749, -110.7898205275151, 22261.520144359198,
    -3.3688914051172816, 25561.928383627914, -67.340599114444259,
    29091.332231365828, -148.98393160798355, 32829.29544761841,
    -52.113791641431931, 36800.065712683892, -9.5045803688707551,
    41014.308589067427, -123.54423323710444, 45443.47867521365,
    -120.20081518969195, 50088.4128660826, -7.5084029200590408,
    54977.319333828207, -56.261575539274567, 60097.994613651055,
    -149.30874676163725, 65427.147957119967, -63.061929950135578,
    70986.367907840919, -4.7681791678185874, 76790.246044114945,
    -114.50464237859434, 82811.314100923424, -128.57974736552094,
    89046.048921945883, -13.171677254544306, 95523.3384388902,
    -45.600609529734896, 102235.06532703183, -147.94134151222596,
    109155.61255565878, -74.273896115989189, 116303.41991091125,
    -1.6176881223081239, 123696.67405488883, -104.56217628178702,
    131309.60682995062, -135.73658574357634, 139134.41493247409,
    -20.230273286702015, 147200.01088532593, -35.599488142856629,
    155502.54760200047, -144.91272814238221, 164014.66275498597,
    -85.495406587169242, 172751.229164924, -0.12455929000621779,
    181733.61611044646, -93.942326671825242, 190938.33995427814,
    -141.50901568112022, 200353.4942217475, -28.524104476544963,
    210007.36030076578, -26.485033385668139, 219900.4485936503,
    -140.29159456583949, 230004.27204430423, -96.471961350276828,
    240329.79919739324, -0.32265632133699285, 250901.09730016242,
    -82.885948099882853, 261697.49983655111, -145.76612044459679,
    272703.2671956055, -37.865069573856985, 283945.40821809182,
    -18.4639579697768, 295428.77921940066, -134.18274650907904,
    307124.41449152364, -106.95461590345923, 319039.129540315,
    -2.2074864434909216, 331199.14374471013, -71.643795444452337,
    343587.07641936751, -148.41135035630208, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -122.92585708443505, 89.743962404247725, -469.23951004644942,
    143.32531878203673, -1025.5289456501509, 31.99058381611772,
    -1819.6624942238932, 23.271901759494639, -2853.8225394743986,
    138.1198565101991, -4099.261352837816, 100.56020151405892,
    -5565.3805363637839, 0.84702541282959487, -7277.13941411706,
    78.586411795835787, -9215.0789475513338, 146.97426274767963,
    -11362.080892110174, 41.6777812162796, -13744.502135701281,
    15.719471768746104, -16368.840333729961, 131.47593403328628,
    -19206.120348032749, 110.7898205275151, -22261.520144359198,
    3.3688914051172816, -25561.928383627914, 67.340599114444259,
    -29091.332231365828, 148.98393160798355, -32829.29544761841,
    52.113791641431931, -36800.065712683892, 9.5045803688707551,
    -41014.308589067427, 123.54423323710444, -45443.47867521365,
    120.20081518969195, -50088.4128660826, 7.5084029200590408,
    -54977.319333828207, 56.261575539274567, -60097.994613651055,
    149.30874676163725, -65427.147957119967, 63.061929950135578,
    -70986.367907840919, 4.7681791678185874, -76790.246044114945,
    114.50464237859434, -82811.314100923424, 128.57974736552094,
    -89046.048921945883, 13.171677254544306, -95523.3384388902,
    45.600609529734896, -102235.06532703183, 147.94134151222596,
    -109155.61255565878, 74.273896115989189, -116303.41991091125,
    1.6176881223081239, -123696.67405488883, 104.56217628178702,
    -131309.60682995062, 135.73658574357634, -139134.41493247409,
    20.230273286702015, -147200.01088532593, 35.599488142856629,
    -155502.54760200047, 144.91272814238221, -164014.66275498597,
    85.495406587169242, -172751.229164924, 0.12455929000621779,
    -181733.61611044646, 93.942326671825242, -190938.33995427814,
    141.50901568112022, -200353.4942217475, 28.524104476544963,
    -210007.36030076578, 26.485033385668139, -219900.4485936503,
    140.29159456583949, -230004.27204430423, 96.471961350276828,
    -240329.79919739324, 0.32265632133699285, -250901.09730016242,
    82.885948099882853, -261697.49983655111, 145.76612044459679,
    -272703.2671956055, 37.865069573856985, -283945.40821809182,
    18.4639579697768, -295428.77921940066, 134.18274650907904,
    -307124.41449152364, 106.95461590345923, -319039.129540315,
    2.2074864434909216, -331199.14374471013, 71.643795444452337, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    122.92585708443505, -89.743962404247725, 469.23951004644942,
    -143.32531878203673, 1025.5289456501509, -31.99058381611772,
    1819.6624942238932, -23.271901759494639, 2853.8225394743986,
    -138.1198565101991, 4099.261352837816, -100.56020151405892,
    5565.3805363637839, -0.84702541282959487, 7277.13941411706,
    -78.586411795835787, 9215.0789475513338, -146.97426274767963,
    11362.080892110174, -41.6777812162796, 13744.502135701281,
    -15.719471768746104, 16368.840333729961, -131.47593403328628,
    19206.120348032749, -110.7898205275151, 22261.520144359198,
    -3.3688914051172816, 25561.928383627914, -67.340599114444259,
    29091.332231365828, -148.98393160798355, 32829.29544761841,
    -52.113791641431931, 36800.065712683892, -9.5045803688707551,
    41014.308589067427, -123.54423323710444, 45443.47867521365,
    -120.20081518969195, 50088.4128660826, -7.5084029200590408,
    54977.319333828207, -56.261575539274567, 60097.994613651055,
    -149.30874676163725, 65427.147957119967, -63.061929950135578,
    70986.367907840919, -4.7681791678185874, 76790.246044114945,
    -114.50464237859434, 82811.314100923424, -128.57974736552094,
    89046.048921945883, -13.171677254544306, 95523.3384388902,
    -45.600609529734896, 102235.06532703183, -147.94134151222596,
    109155.61255565878, -74.273896115989189, 116303.41991091125,
    -1.6176881223081239, 123696.67405488883, -104.56217628178702,
    131309.60682995062, -135.73658574357634, 139134.41493247409,
    -20.230273286702015, 147200.01088532593, -35.599488142856629,
    155502.54760200047, -144.91272814238221, 164014.66275498597,
    -85.495406587169242, 172751.229164924, -0.12455929000621779,
    181733.61611044646, -93.942326671825242, 190938.33995427814,
    -141.50901568112022, 200353.4942217475, -28.524104476544963,
    210007.36030076578, -26.485033385668139, 219900.4485936503,
    -140.29159456583949, 230004.27204430423, -96.471961350276828,
    240329.79919739324, -0.32265632133699285, 250901.09730016242,
    -82.885948099882853, 261697.49983655111, -145.76612044459679,
    272703.2671956055, -37.865069573856985, 283945.40821809182,
    -18.4639579697768, 295428.77921940066, -134.18274650907904,
    307124.41449152364, -106.95461590345923, 319039.129540315,
    -2.2074864434909216, 331199.14374471013, -71.643795444452337, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -122.92585708443505,
    89.743962404247725, -469.23951004644942, 143.32531878203673,
    -1025.5289456501509, 31.99058381611772, -1819.6624942238932,
    23.271901759494639, -2853.8225394743986, 138.1198565101991,
    -4099.261352837816, 100.56020151405892, -5565.3805363637839,
    0.84702541282959487, -7277.13941411706, 78.586411795835787,
    -9215.0789475513338, 146.97426274767963, -11362.080892110174,
    41.6777812162796, -13744.502135701281, 15.719471768746104,
    -16368.840333729961, 131.47593403328628, -19206.120348032749,
    110.7898205275151, -22261.520144359198, 3.3688914051172816,
    -25561.928383627914, 67.340599114444259, -29091.332231365828,
    148.98393160798355, -32829.29544761841, 52.113791641431931,
    -36800.065712683892, 9.5045803688707551, -41014.308589067427,
    123.54423323710444, -45443.47867521365, 120.20081518969195,
    -50088.4128660826, 7.5084029200590408, -54977.319333828207,
    56.261575539274567, -60097.994613651055, 149.30874676163725,
    -65427.147957119967, 63.061929950135578, -70986.367907840919,
    4.7681791678185874, -76790.246044114945, 114.50464237859434,
    -82811.314100923424, 128.57974736552094, -89046.048921945883,
    13.171677254544306, -95523.3384388902, 45.600609529734896,
    -102235.06532703183, 147.94134151222596, -109155.61255565878,
    74.273896115989189, -116303.41991091125, 1.6176881223081239,
    -123696.67405488883, 104.56217628178702, -131309.60682995062,
    135.73658574357634, -139134.41493247409, 20.230273286702015,
    -147200.01088532593, 35.599488142856629, -155502.54760200047,
    144.91272814238221, -164014.66275498597, 85.495406587169242,
    -172751.229164924, 0.12455929000621779, -181733.61611044646,
    93.942326671825242, -190938.33995427814, 141.50901568112022,
    -200353.4942217475, 28.524104476544963, -210007.36030076578,
    26.485033385668139, -219900.4485936503, 140.29159456583949,
    -230004.27204430423, 96.471961350276828, -240329.79919739324,
    0.32265632133699285, -250901.09730016242, 82.885948099882853,
    -261697.49983655111, 145.76612044459679, -272703.2671956055,
    37.865069573856985, -283945.40821809182, 18.4639579697768,
    -295428.77921940066, 134.18274650907904, -307124.41449152364,
    106.95461590345923, -319039.129540315, 2.2074864434909216, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    122.92585708443505, -89.743962404247725, 469.23951004644942,
    -143.32531878203673, 1025.5289456501509, -31.99058381611772,
    1819.6624942238932, -23.271901759494639, 2853.8225394743986,
    -138.1198565101991, 4099.261352837816, -100.56020151405892,
    5565.3805363637839, -0.84702541282959487, 7277.13941411706,
    -78.586411795835787, 9215.0789475513338, -146.97426274767963,
    11362.080892110174, -41.6777812162796, 13744.502135701281,
    -15.719471768746104, 16368.840333729961, -131.47593403328628,
    19206.120348032749, -110.7898205275151, 22261.520144359198,
    -3.3688914051172816, 25561.928383627914, -67.340599114444259,
    29091.332231365828, -148.98393160798355, 32829.29544761841,
    -52.113791641431931, 36800.065712683892, -9.5045803688707551,
    41014.308589067427, -123.54423323710444, 45443.47867521365,
    -120.20081518969195, 50088.4128660826, -7.5084029200590408,
    54977.319333828207, -56.261575539274567, 60097.994613651055,
    -149.30874676163725, 65427.147957119967, -63.061929950135578,
    70986.367907840919, -4.7681791678185874, 76790.246044114945,
    -114.50464237859434, 82811.314100923424, -128.57974736552094,
    89046.048921945883, -13.171677254544306, 95523.3384388902,
    -45.600609529734896, 102235.06532703183, -147.94134151222596,
    109155.61255565878, -74.273896115989189, 116303.41991091125,
    -1.6176881223081239, 123696.67405488883, -104.56217628178702,
    131309.60682995062, -135.73658574357634, 139134.41493247409,
    -20.230273286702015, 147200.01088532593, -35.599488142856629,
    155502.54760200047, -144.91272814238221, 164014.66275498597,
    -85.495406587169242, 172751.229164924, -0.12455929000621779,
    181733.61611044646, -93.942326671825242, 190938.33995427814,
    -141.50901568112022, 200353.4942217475, -28.524104476544963,
    210007.36030076578, -26.485033385668139, 219900.4485936503,
    -140.29159456583949, 230004.27204430423, -96.471961350276828,
    240329.79919739324, -0.32265632133699285, 250901.09730016242,
    -82.885948099882853, 261697.49983655111, -145.76612044459679,
    272703.2671956055, -37.865069573856985, 283945.40821809182,
    -18.4639579697768, 295428.77921940066, -134.18274650907904,
    307124.41449152364, -106.95461590345923, 319039.129540315,
    -2.2074864434909216, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -122.92585708443505, 89.743962404247725, -469.23951004644942,
    143.32531878203673, -1025.5289456501509, 31.99058381611772,
    -1819.6624942238932, 23.271901759494639, -2853.8225394743986,
    138.1198565101991, -4099.261352837816, 100.56020151405892,
    -5565.3805363637839, 0.84702541282959487, -7277.13941411706,
    78.586411795835787, -9215.0789475513338, 146.97426274767963,
    -11362.080892110174, 41.6777812162796, -13744.502135701281,
    15.719471768746104, -16368.840333729961, 131.47593403328628,
    -19206.120348032749, 110.7898205275151, -22261.520144359198,
    3.3688914051172816, -25561.928383627914, 67.340599114444259,
    -29091.332231365828, 148.98393160798355, -32829.29544761841,
    52.113791641431931, -36800.065712683892, 9.5045803688707551,
    -41014.308589067427, 123.54423323710444, -45443.47867521365,
    120.20081518969195, -50088.4128660826, 7.5084029200590408,
    -54977.319333828207, 56.261575539274567, -60097.994613651055,
    149.30874676163725, -65427.147957119967, 63.061929950135578,
    -70986.367907840919, 4.7681791678185874, -76790.246044114945,
    114.50464237859434, -82811.314100923424, 128.57974736552094,
    -89046.048921945883, 13.171677254544306, -95523.3384388902,
    45.600609529734896, -102235.06532703183, 147.94134151222596,
    -109155.61255565878, 74.273896115989189, -116303.41991091125,
    1.6176881223081239, -123696.67405488883, 104.56217628178702,
    -131309.60682995062, 135.73658574357634, -139134.41493247409,
    20.230273286702015, -147200.01088532593, 35.599488142856629,
    -155502.54760200047, 144.91272814238221, -164014.66275498597,
    85.495406587169242, -172751.229164924, 0.12455929000621779,
    -181733.61611044646, 93.942326671825242, -190938.33995427814,
    141.50901568112022, -200353.4942217475, 28.524104476544963,
    -210007.36030076578, 26.485033385668139, -219900.4485936503,
    140.29159456583949, -230004.27204430423, 96.471961350276828,
    -240329.79919739324, 0.32265632133699285, -250901.09730016242,
    82.885948099882853, -261697.49983655111, 145.76612044459679,
    -272703.2671956055, 37.865069573856985, -283945.40821809182,
    18.4639579697768, -295428.77921940066, 134.18274650907904,
    -307124.41449152364, 106.95461590345923, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    122.92585708443505, -89.743962404247725, 469.23951004644942,
    -143.32531878203673, 1025.5289456501509, -31.99058381611772,
    1819.6624942238932, -23.271901759494639, 2853.8225394743986,
    -138.1198565101991, 4099.261352837816, -100.56020151405892,
    5565.3805363637839, -0.84702541282959487, 7277.13941411706,
    -78.586411795835787, 9215.0789475513338, -146.97426274767963,
    11362.080892110174, -41.6777812162796, 13744.502135701281,
    -15.719471768746104, 16368.840333729961, -131.47593403328628,
    19206.120348032749, -110.7898205275151, 22261.520144359198,
    -3.3688914051172816, 25561.928383627914, -67.340599114444259,
    29091.332231365828, -148.98393160798355, 32829.29544761841,
    -52.113791641431931, 36800.065712683892, -9.5045803688707551,
    41014.308589067427, -123.54423323710444, 45443.47867521365,
    -120.20081518969195, 50088.4128660826, -7.5084029200590408,
    54977.319333828207, -56.261575539274567, 60097.994613651055,
    -149.30874676163725, 65427.147957119967, -63.061929950135578,
    70986.367907840919, -4.7681791678185874, 76790.246044114945,
    -114.50464237859434, 82811.314100923424, -128.57974736552094,
    89046.048921945883, -13.171677254544306, 95523.3384388902,
    -45.600609529734896, 102235.06532703183, -147.94134151222596,
    109155.61255565878, -74.273896115989189, 116303.41991091125,
    -1.6176881223081239, 123696.67405488883, -104.56217628178702,
    131309.60682995062, -135.73658574357634, 139134.41493247409,
    -20.230273286702015, 147200.01088532593, -35.599488142856629,
    155502.54760200047, -144.91272814238221, 164014.66275498597,
    -85.495406587169242, 172751.229164924, -0.12455929000621779,
    181733.61611044646, -93.942326671825242, 190938.33995427814,
    -141.50901568112022, 200353.4942217475, -28.524104476544963,
    210007.36030076578, -26.485033385668139, 219900.4485936503,
    -140.29159456583949, 230004.27204430423, -96.471961350276828,
    240329.79919739324, -0.32265632133699285, 250901.09730016242,
    -82.885948099882853, 261697.49983655111, -145.76612044459679,
    272703.2671956055, -37.865069573856985, 283945.40821809182,
    -18.4639579697768, 295428.77921940066, -134.18274650907904,
    307124.41449152364, -106.95461590345923, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -122.92585708443505,
    89.743962404247725, -469.23951004644942, 143.32531878203673,
    -1025.5289456501509, 31.99058381611772, -1819.6624942238932,
    23.271901759494639, -2853.8225394743986, 138.1198565101991,
    -4099.261352837816, 100.56020151405892, -5565.3805363637839,
    0.84702541282959487, -7277.13941411706, 78.586411795835787,
    -9215.0789475513338, 146.97426274767963, -11362.080892110174,
    41.6777812162796, -13744.502135701281, 15.719471768746104,
    -16368.840333729961, 131.47593403328628, -19206.120348032749,
    110.7898205275151, -22261.520144359198, 3.3688914051172816,
    -25561.928383627914, 67.340599114444259, -29091.332231365828,
    148.98393160798355, -32829.29544761841, 52.113791641431931,
    -36800.065712683892, 9.5045803688707551, -41014.308589067427,
    123.54423323710444, -45443.47867521365, 120.20081518969195,
    -50088.4128660826, 7.5084029200590408, -54977.319333828207,
    56.261575539274567, -60097.994613651055, 149.30874676163725,
    -65427.147957119967, 63.061929950135578, -70986.367907840919,
    4.7681791678185874, -76790.246044114945, 114.50464237859434,
    -82811.314100923424, 128.57974736552094, -89046.048921945883,
    13.171677254544306, -95523.3384388902, 45.600609529734896,
    -102235.06532703183, 147.94134151222596, -109155.61255565878,
    74.273896115989189, -116303.41991091125, 1.6176881223081239,
    -123696.67405488883, 104.56217628178702, -131309.60682995062,
    135.73658574357634, -139134.41493247409, 20.230273286702015,
    -147200.01088532593, 35.599488142856629, -155502.54760200047,
    144.91272814238221, -164014.66275498597, 85.495406587169242,
    -172751.229164924, 0.12455929000621779, -181733.61611044646,
    93.942326671825242, -190938.33995427814, 141.50901568112022,
    -200353.4942217475, 28.524104476544963, -210007.36030076578,
    26.485033385668139, -219900.4485936503, 140.29159456583949,
    -230004.27204430423, 96.471961350276828, -240329.79919739324,
    0.32265632133699285, -250901.09730016242, 82.885948099882853,
    -261697.49983655111, 145.76612044459679, -272703.2671956055,
    37.865069573856985, -283945.40821809182, 18.4639579697768,
    -295428.77921940066, 134.18274650907904, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    122.92585708443505, -89.743962404247725, 469.23951004644942,
    -143.32531878203673, 1025.5289456501509, -31.99058381611772,
    1819.6624942238932, -23.271901759494639, 2853.8225394743986,
    -138.1198565101991, 4099.261352837816, -100.56020151405892,
    5565.3805363637839, -0.84702541282959487, 7277.13941411706,
    -78.586411795835787, 9215.0789475513338, -146.97426274767963,
    11362.080892110174, -41.6777812162796, 13744.502135701281,
    -15.719471768746104, 16368.840333729961, -131.47593403328628,
    19206.120348032749, -110.7898205275151, 22261.520144359198,
    -3.3688914051172816, 25561.928383627914, -67.340599114444259,
    29091.332231365828, -148.98393160798355, 32829.29544761841,
    -52.113791641431931, 36800.065712683892, -9.5045803688707551,
    41014.308589067427, -123.54423323710444, 45443.47867521365,
    -120.20081518969195, 50088.4128660826, -7.5084029200590408,
    54977.319333828207, -56.261575539274567, 60097.994613651055,
    -149.30874676163725, 65427.147957119967, -63.061929950135578,
    70986.367907840919, -4.7681791678185874, 76790.246044114945,
    -114.50464237859434, 82811.314100923424, -128.57974736552094,
    89046.048921945883, -13.171677254544306, 95523.3384388902,
    -45.600609529734896, 102235.06532703183, -147.94134151222596,
    109155.61255565878, -74.273896115989189, 116303.41991091125,
    -1.6176881223081239, 123696.67405488883, -104.56217628178702,
    131309.60682995062, -135.73658574357634, 139134.41493247409,
    -20.230273286702015, 147200.01088532593, -35.599488142856629,
    155502.54760200047, -144.91272814238221, 164014.66275498597,
    -85.495406587169242, 172751.229164924, -0.12455929000621779,
    181733.61611044646, -93.942326671825242, 190938.33995427814,
    -141.50901568112022, 200353.4942217475, -28.524104476544963,
    210007.36030076578, -26.485033385668139, 219900.4485936503,
    -140.29159456583949, 230004.27204430423, -96.471961350276828,
    240329.79919739324, -0.32265632133699285, 250901.09730016242,
    -82.885948099882853, 261697.49983655111, -145.76612044459679,
    272703.2671956055, -37.865069573856985, 283945.40821809182,
    -18.4639579697768, 295428.77921940066, -134.18274650907904, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -122.92585708443505, 89.743962404247725, -469.23951004644942,
    143.32531878203673, -1025.5289456501509, 31.99058381611772,
    -1819.6624942238932, 23.271901759494639, -2853.8225394743986,
    138.1198565101991, -4099.261352837816, 100.56020151405892,
    -5565.3805363637839, 0.84702541282959487, -7277.13941411706,
    78.586411795835787, -9215.0789475513338, 146.97426274767963,
    -11362.080892110174, 41.6777812162796, -13744.502135701281,
    15.719471768746104, -16368.840333729961, 131.47593403328628,
    -19206.120348032749, 110.7898205275151, -22261.520144359198,
    3.3688914051172816, -25561.928383627914, 67.340599114444259,
    -29091.332231365828, 148.98393160798355, -32829.29544761841,
    52.113791641431931, -36800.065712683892, 9.5045803688707551,
    -41014.308589067427, 123.54423323710444, -45443.47867521365,
    120.20081518969195, -50088.4128660826, 7.5084029200590408,
    -54977.319333828207, 56.261575539274567, -60097.994613651055,
    149.30874676163725, -65427.147957119967, 63.061929950135578,
    -70986.367907840919, 4.7681791678185874, -76790.246044114945,
    114.50464237859434, -82811.314100923424, 128.57974736552094,
    -89046.048921945883, 13.171677254544306, -95523.3384388902,
    45.600609529734896, -102235.06532703183, 147.94134151222596,
    -109155.61255565878, 74.273896115989189, -116303.41991091125,
    1.6176881223081239, -123696.67405488883, 104.56217628178702,
    -131309.60682995062, 135.73658574357634, -139134.41493247409,
    20.230273286702015, -147200.01088532593, 35.599488142856629,
    -155502.54760200047, 144.91272814238221, -164014.66275498597,
    85.495406587169242, -172751.229164924, 0.12455929000621779,
    -181733.61611044646, 93.942326671825242, -190938.33995427814,
    141.50901568112022, -200353.4942217475, 28.524104476544963,
    -210007.36030076578, 26.485033385668139, -219900.4485936503,
    140.29159456583949, -230004.27204430423, 96.471961350276828,
    -240329.79919739324, 0.32265632133699285, -250901.09730016242,
    82.885948099882853, -261697.49983655111, 145.76612044459679,
    -272703.2671956055, 37.865069573856985, -283945.40821809182,
    18.4639579697768, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    122.92585708443505, -89.743962404247725, 469.23951004644942,
    -143.32531878203673, 1025.5289456501509, -31.99058381611772,
    1819.6624942238932, -23.271901759494639, 2853.8225394743986,
    -138.1198565101991, 4099.261352837816, -100.56020151405892,
    5565.3805363637839, -0.84702541282959487, 7277.13941411706,
    -78.586411795835787, 9215.0789475513338, -146.97426274767963,
    11362.080892110174, -41.6777812162796, 13744.502135701281,
    -15.719471768746104, 16368.840333729961, -131.47593403328628,
    19206.120348032749, -110.7898205275151, 22261.520144359198,
    -3.3688914051172816, 25561.928383627914, -67.340599114444259,
    29091.332231365828, -148.98393160798355, 32829.29544761841,
    -52.113791641431931, 36800.065712683892, -9.5045803688707551,
    41014.308589067427, -123.54423323710444, 45443.47867521365,
    -120.20081518969195, 50088.4128660826, -7.5084029200590408,
    54977.319333828207, -56.261575539274567, 60097.994613651055,
    -149.30874676163725, 65427.147957119967, -63.061929950135578,
    70986.367907840919, -4.7681791678185874, 76790.246044114945,
    -114.50464237859434, 82811.314100923424, -128.57974736552094,
    89046.048921945883, -13.171677254544306, 95523.3384388902,
    -45.600609529734896, 102235.06532703183, -147.94134151222596,
    109155.61255565878, -74.273896115989189, 116303.41991091125,
    -1.6176881223081239, 123696.67405488883, -104.56217628178702,
    131309.60682995062, -135.73658574357634, 139134.41493247409,
    -20.230273286702015, 147200.01088532593, -35.599488142856629,
    155502.54760200047, -144.91272814238221, 164014.66275498597,
    -85.495406587169242, 172751.229164924, -0.12455929000621779,
    181733.61611044646, -93.942326671825242, 190938.33995427814,
    -141.50901568112022, 200353.4942217475, -28.524104476544963,
    210007.36030076578, -26.485033385668139, 219900.4485936503,
    -140.29159456583949, 230004.27204430423, -96.471961350276828,
    240329.79919739324, -0.32265632133699285, 250901.09730016242,
    -82.885948099882853, 261697.49983655111, -145.76612044459679,
    272703.2671956055, -37.865069573856985, 283945.40821809182,
    -18.4639579697768, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -122.92585708443505,
    89.743962404247725, -469.23951004644942, 143.32531878203673,
    -1025.5289456501509, 31.99058381611772, -1819.6624942238932,
    23.271901759494639, -2853.8225394743986, 138.1198565101991,
    -4099.261352837816, 100.56020151405892, -5565.3805363637839,
    0.84702541282959487, -7277.13941411706, 78.586411795835787,
    -9215.0789475513338, 146.97426274767963, -11362.080892110174,
    41.6777812162796, -13744.502135701281, 15.719471768746104,
    -16368.840333729961, 131.47593403328628, -19206.120348032749,
    110.7898205275151, -22261.520144359198, 3.3688914051172816,
    -25561.928383627914, 67.340599114444259, -29091.332231365828,
    148.98393160798355, -32829.29544761841, 52.113791641431931,
    -36800.065712683892, 9.5045803688707551, -41014.308589067427,
    123.54423323710444, -45443.47867521365, 120.20081518969195,
    -50088.4128660826, 7.5084029200590408, -54977.319333828207,
    56.261575539274567, -60097.994613651055, 149.30874676163725,
    -65427.147957119967, 63.061929950135578, -70986.367907840919,
    4.7681791678185874, -76790.246044114945, 114.50464237859434,
    -82811.314100923424, 128.57974736552094, -89046.048921945883,
    13.171677254544306, -95523.3384388902, 45.600609529734896,
    -102235.06532703183, 147.94134151222596, -109155.61255565878,
    74.273896115989189, -116303.41991091125, 1.6176881223081239,
    -123696.67405488883, 104.56217628178702, -131309.60682995062,
    135.73658574357634, -139134.41493247409, 20.230273286702015,
    -147200.01088532593, 35.599488142856629, -155502.54760200047,
    144.91272814238221, -164014.66275498597, 85.495406587169242,
    -172751.229164924, 0.12455929000621779, -181733.61611044646,
    93.942326671825242, -190938.33995427814, 141.50901568112022,
    -200353.4942217475, 28.524104476544963, -210007.36030076578,
    26.485033385668139, -219900.4485936503, 140.29159456583949,
    -230004.27204430423, 96.471961350276828, -240329.79919739324,
    0.32265632133699285, -250901.09730016242, 82.885948099882853,
    -261697.49983655111, 145.76612044459679, -272703.2671956055,
    37.865069573856985, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    122.92585708443505, -89.743962404247725, 469.23951004644942,
    -143.32531878203673, 1025.5289456501509, -31.99058381611772,
    1819.6624942238932, -23.271901759494639, 2853.8225394743986,
    -138.1198565101991, 4099.261352837816, -100.56020151405892,
    5565.3805363637839, -0.84702541282959487, 7277.13941411706,
    -78.586411795835787, 9215.0789475513338, -146.97426274767963,
    11362.080892110174, -41.6777812162796, 13744.502135701281,
    -15.719471768746104, 16368.840333729961, -131.47593403328628,
    19206.120348032749, -110.7898205275151, 22261.520144359198,
    -3.3688914051172816, 25561.928383627914, -67.340599114444259,
    29091.332231365828, -148.98393160798355, 32829.29544761841,
    -52.113791641431931, 36800.065712683892, -9.5045803688707551,
    41014.308589067427, -123.54423323710444, 45443.47867521365,
    -120.20081518969195, 50088.4128660826, -7.5084029200590408,
    54977.319333828207, -56.261575539274567, 60097.994613651055,
    -149.30874676163725, 65427.147957119967, -63.061929950135578,
    70986.367907840919, -4.7681791678185874, 76790.246044114945,
    -114.50464237859434, 82811.314100923424, -128.57974736552094,
    89046.048921945883, -13.171677254544306, 95523.3384388902,
    -45.600609529734896, 102235.06532703183, -147.94134151222596,
    109155.61255565878, -74.273896115989189, 116303.41991091125,
    -1.6176881223081239, 123696.67405488883, -104.56217628178702,
    131309.60682995062, -135.73658574357634, 139134.41493247409,
    -20.230273286702015, 147200.01088532593, -35.599488142856629,
    155502.54760200047, -144.91272814238221, 164014.66275498597,
    -85.495406587169242, 172751.229164924, -0.12455929000621779,
    181733.61611044646, -93.942326671825242, 190938.33995427814,
    -141.50901568112022, 200353.4942217475, -28.524104476544963,
    210007.36030076578, -26.485033385668139, 219900.4485936503,
    -140.29159456583949, 230004.27204430423, -96.471961350276828,
    240329.79919739324, -0.32265632133699285, 250901.09730016242,
    -82.885948099882853, 261697.49983655111, -145.76612044459679,
    272703.2671956055, -37.865069573856985, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -122.92585708443505, 89.743962404247725, -469.23951004644942,
    143.32531878203673, -1025.5289456501509, 31.99058381611772,
    -1819.6624942238932, 23.271901759494639, -2853.8225394743986,
    138.1198565101991, -4099.261352837816, 100.56020151405892,
    -5565.3805363637839, 0.84702541282959487, -7277.13941411706,
    78.586411795835787, -9215.0789475513338, 146.97426274767963,
    -11362.080892110174, 41.6777812162796, -13744.502135701281,
    15.719471768746104, -16368.840333729961, 131.47593403328628,
    -19206.120348032749, 110.7898205275151, -22261.520144359198,
    3.3688914051172816, -25561.928383627914, 67.340599114444259,
    -29091.332231365828, 148.98393160798355, -32829.29544761841,
    52.113791641431931, -36800.065712683892, 9.5045803688707551,
    -41014.308589067427, 123.54423323710444, -45443.47867521365,
    120.20081518969195, -50088.4128660826, 7.5084029200590408,
    -54977.319333828207, 56.261575539274567, -60097.994613651055,
    149.30874676163725, -65427.147957119967, 63.061929950135578,
    -70986.367907840919, 4.7681791678185874, -76790.246044114945,
    114.50464237859434, -82811.314100923424, 128.57974736552094,
    -89046.048921945883, 13.171677254544306, -95523.3384388902,
    45.600609529734896, -102235.06532703183, 147.94134151222596,
    -109155.61255565878, 74.273896115989189, -116303.41991091125,
    1.6176881223081239, -123696.67405488883, 104.56217628178702,
    -131309.60682995062, 135.73658574357634, -139134.41493247409,
    20.230273286702015, -147200.01088532593, 35.599488142856629,
    -155502.54760200047, 144.91272814238221, -164014.66275498597,
    85.495406587169242, -172751.229164924, 0.12455929000621779,
    -181733.61611044646, 93.942326671825242, -190938.33995427814,
    141.50901568112022, -200353.4942217475, 28.524104476544963,
    -210007.36030076578, 26.485033385668139, -219900.4485936503,
    140.29159456583949, -230004.27204430423, 96.471961350276828,
    -240329.79919739324, 0.32265632133699285, -250901.09730016242,
    82.885948099882853, -261697.49983655111, 145.76612044459679, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 122.92585708443505,
    -89.743962404247725, 469.23951004644942, -143.32531878203673,
    1025.5289456501509, -31.99058381611772, 1819.6624942238932,
    -23.271901759494639, 2853.8225394743986, -138.1198565101991,
    4099.261352837816, -100.56020151405892, 5565.3805363637839,
    -0.84702541282959487, 7277.13941411706, -78.586411795835787,
    9215.0789475513338, -146.97426274767963, 11362.080892110174,
    -41.6777812162796, 13744.502135701281, -15.719471768746104,
    16368.840333729961, -131.47593403328628, 19206.120348032749,
    -110.7898205275151, 22261.520144359198, -3.3688914051172816,
    25561.928383627914, -67.340599114444259, 29091.332231365828,
    -148.98393160798355, 32829.29544761841, -52.113791641431931,
    36800.065712683892, -9.5045803688707551, 41014.308589067427,
    -123.54423323710444, 45443.47867521365, -120.20081518969195,
    50088.4128660826, -7.5084029200590408, 54977.319333828207,
    -56.261575539274567, 60097.994613651055, -149.30874676163725,
    65427.147957119967, -63.061929950135578, 70986.367907840919,
    -4.7681791678185874, 76790.246044114945, -114.50464237859434,
    82811.314100923424, -128.57974736552094, 89046.048921945883,
    -13.171677254544306, 95523.3384388902, -45.600609529734896,
    102235.06532703183, -147.94134151222596, 109155.61255565878,
    -74.273896115989189, 116303.41991091125, -1.6176881223081239,
    123696.67405488883, -104.56217628178702, 131309.60682995062,
    -135.73658574357634, 139134.41493247409, -20.230273286702015,
    147200.01088532593, -35.599488142856629, 155502.54760200047,
    -144.91272814238221, 164014.66275498597, -85.495406587169242,
    172751.229164924, -0.12455929000621779, 181733.61611044646,
    -93.942326671825242, 190938.33995427814, -141.50901568112022,
    200353.4942217475, -28.524104476544963, 210007.36030076578,
    -26.485033385668139, 219900.4485936503, -140.29159456583949,
    230004.27204430423, -96.471961350276828, 240329.79919739324,
    -0.32265632133699285, 250901.09730016242, -82.885948099882853,
    261697.49983655111, -145.76612044459679, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -122.92585708443505, 89.743962404247725, -469.23951004644942,
    143.32531878203673, -1025.5289456501509, 31.99058381611772,
    -1819.6624942238932, 23.271901759494639, -2853.8225394743986,
    138.1198565101991, -4099.261352837816, 100.56020151405892,
    -5565.3805363637839, 0.84702541282959487, -7277.13941411706,
    78.586411795835787, -9215.0789475513338, 146.97426274767963,
    -11362.080892110174, 41.6777812162796, -13744.502135701281,
    15.719471768746104, -16368.840333729961, 131.47593403328628,
    -19206.120348032749, 110.7898205275151, -22261.520144359198,
    3.3688914051172816, -25561.928383627914, 67.340599114444259,
    -29091.332231365828, 148.98393160798355, -32829.29544761841,
    52.113791641431931, -36800.065712683892, 9.5045803688707551,
    -41014.308589067427, 123.54423323710444, -45443.47867521365,
    120.20081518969195, -50088.4128660826, 7.5084029200590408,
    -54977.319333828207, 56.261575539274567, -60097.994613651055,
    149.30874676163725, -65427.147957119967, 63.061929950135578,
    -70986.367907840919, 4.7681791678185874, -76790.246044114945,
    114.50464237859434, -82811.314100923424, 128.57974736552094,
    -89046.048921945883, 13.171677254544306, -95523.3384388902,
    45.600609529734896, -102235.06532703183, 147.94134151222596,
    -109155.61255565878, 74.273896115989189, -116303.41991091125,
    1.6176881223081239, -123696.67405488883, 104.56217628178702,
    -131309.60682995062, 135.73658574357634, -139134.41493247409,
    20.230273286702015, -147200.01088532593, 35.599488142856629,
    -155502.54760200047, 144.91272814238221, -164014.66275498597,
    85.495406587169242, -172751.229164924, 0.12455929000621779,
    -181733.61611044646, 93.942326671825242, -190938.33995427814,
    141.50901568112022, -200353.4942217475, 28.524104476544963,
    -210007.36030076578, 26.485033385668139, -219900.4485936503,
    140.29159456583949, -230004.27204430423, 96.471961350276828,
    -240329.79919739324, 0.32265632133699285, -250901.09730016242,
    82.885948099882853, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, 122.92585708443505, -89.743962404247725,
    469.23951004644942, -143.32531878203673, 1025.5289456501509,
    -31.99058381611772, 1819.6624942238932, -23.271901759494639,
    2853.8225394743986, -138.1198565101991, 4099.261352837816,
    -100.56020151405892, 5565.3805363637839, -0.84702541282959487,
    7277.13941411706, -78.586411795835787, 9215.0789475513338,
    -146.97426274767963, 11362.080892110174, -41.6777812162796,
    13744.502135701281, -15.719471768746104, 16368.840333729961,
    -131.47593403328628, 19206.120348032749, -110.7898205275151,
    22261.520144359198, -3.3688914051172816, 25561.928383627914,
    -67.340599114444259, 29091.332231365828, -148.98393160798355,
    32829.29544761841, -52.113791641431931, 36800.065712683892,
    -9.5045803688707551, 41014.308589067427, -123.54423323710444,
    45443.47867521365, -120.20081518969195, 50088.4128660826,
    -7.5084029200590408, 54977.319333828207, -56.261575539274567,
    60097.994613651055, -149.30874676163725, 65427.147957119967,
    -63.061929950135578, 70986.367907840919, -4.7681791678185874,
    76790.246044114945, -114.50464237859434, 82811.314100923424,
    -128.57974736552094, 89046.048921945883, -13.171677254544306,
    95523.3384388902, -45.600609529734896, 102235.06532703183,
    -147.94134151222596, 109155.61255565878, -74.273896115989189,
    116303.41991091125, -1.6176881223081239, 123696.67405488883,
    -104.56217628178702, 131309.60682995062, -135.73658574357634,
    139134.41493247409, -20.230273286702015, 147200.01088532593,
    -35.599488142856629, 155502.54760200047, -144.91272814238221,
    164014.66275498597, -85.495406587169242, 172751.229164924,
    -0.12455929000621779, 181733.61611044646, -93.942326671825242,
    190938.33995427814, -141.50901568112022, 200353.4942217475,
    -28.524104476544963, 210007.36030076578, -26.485033385668139,
    219900.4485936503, -140.29159456583949, 230004.27204430423,
    -96.471961350276828, 240329.79919739324, -0.32265632133699285,
    250901.09730016242, -82.885948099882853, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -122.92585708443505, 89.743962404247725,
    -469.23951004644942, 143.32531878203673, -1025.5289456501509,
    31.99058381611772, -1819.6624942238932, 23.271901759494639,
    -2853.8225394743986, 138.1198565101991, -4099.261352837816,
    100.56020151405892, -5565.3805363637839, 0.84702541282959487,
    -7277.13941411706, 78.586411795835787, -9215.0789475513338,
    146.97426274767963, -11362.080892110174, 41.6777812162796,
    -13744.502135701281, 15.719471768746104, -16368.840333729961,
    131.47593403328628, -19206.120348032749, 110.7898205275151,
    -22261.520144359198, 3.3688914051172816, -25561.928383627914,
    67.340599114444259, -29091.332231365828, 148.98393160798355,
    -32829.29544761841, 52.113791641431931, -36800.065712683892,
    9.5045803688707551, -41014.308589067427, 123.54423323710444,
    -45443.47867521365, 120.20081518969195, -50088.4128660826,
    7.5084029200590408, -54977.319333828207, 56.261575539274567,
    -60097.994613651055, 149.30874676163725, -65427.147957119967,
    63.061929950135578, -70986.367907840919, 4.7681791678185874,
    -76790.246044114945, 114.50464237859434, -82811.314100923424,
    128.57974736552094, -89046.048921945883, 13.171677254544306,
    -95523.3384388902, 45.600609529734896, -102235.06532703183,
    147.94134151222596, -109155.61255565878, 74.273896115989189,
    -116303.41991091125, 1.6176881223081239, -123696.67405488883,
    104.56217628178702, -131309.60682995062, 135.73658574357634,
    -139134.41493247409, 20.230273286702015, -147200.01088532593,
    35.599488142856629, -155502.54760200047, 144.91272814238221,
    -164014.66275498597, 85.495406587169242, -172751.229164924,
    0.12455929000621779, -181733.61611044646, 93.942326671825242,
    -190938.33995427814, 141.50901568112022, -200353.4942217475,
    28.524104476544963, -210007.36030076578, 26.485033385668139,
    -219900.4485936503, 140.29159456583949, -230004.27204430423,
    96.471961350276828, -240329.79919739324, 0.32265632133699285, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    122.92585708443505, -89.743962404247725, 469.23951004644942,
    -143.32531878203673, 1025.5289456501509, -31.99058381611772,
    1819.6624942238932, -23.271901759494639, 2853.8225394743986,
    -138.1198565101991, 4099.261352837816, -100.56020151405892,
    5565.3805363637839, -0.84702541282959487, 7277.13941411706,
    -78.586411795835787, 9215.0789475513338, -146.97426274767963,
    11362.080892110174, -41.6777812162796, 13744.502135701281,
    -15.719471768746104, 16368.840333729961, -131.47593403328628,
    19206.120348032749, -110.7898205275151, 22261.520144359198,
    -3.3688914051172816, 25561.928383627914, -67.340599114444259,
    29091.332231365828, -148.98393160798355, 32829.29544761841,
    -52.113791641431931, 36800.065712683892, -9.5045803688707551,
    41014.308589067427, -123.54423323710444, 45443.47867521365,
    -120.20081518969195, 50088.4128660826, -7.5084029200590408,
    54977.319333828207, -56.261575539274567, 60097.994613651055,
    -149.30874676163725, 65427.147957119967, -63.061929950135578,
    70986.367907840919, -4.7681791678185874, 76790.246044114945,
    -114.50464237859434, 82811.314100923424, -128.57974736552094,
    89046.048921945883, -13.171677254544306, 95523.3384388902,
    -45.600609529734896, 102235.06532703183, -147.94134151222596,
    109155.61255565878, -74.273896115989189, 116303.41991091125,
    -1.6176881223081239, 123696.67405488883, -104.56217628178702,
    131309.60682995062, -135.73658574357634, 139134.41493247409,
    -20.230273286702015, 147200.01088532593, -35.599488142856629,
    155502.54760200047, -144.91272814238221, 164014.66275498597,
    -85.495406587169242, 172751.229164924, -0.12455929000621779,
    181733.61611044646, -93.942326671825242, 190938.33995427814,
    -141.50901568112022, 200353.4942217475, -28.524104476544963,
    210007.36030076578, -26.485033385668139, 219900.4485936503,
    -140.29159456583949, 230004.27204430423, -96.471961350276828,
    240329.79919739324, -0.32265632133699285, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -122.92585708443505,
    89.743962404247725, -469.23951004644942, 143.32531878203673,
    -1025.5289456501509, 31.99058381611772, -1819.6624942238932,
    23.271901759494639, -2853.8225394743986, 138.1198565101991,
    -4099.261352837816, 100.56020151405892, -5565.3805363637839,
    0.84702541282959487, -7277.13941411706, 78.586411795835787,
    -9215.0789475513338, 146.97426274767963, -11362.080892110174,
    41.6777812162796, -13744.502135701281, 15.719471768746104,
    -16368.840333729961, 131.47593403328628, -19206.120348032749,
    110.7898205275151, -22261.520144359198, 3.3688914051172816,
    -25561.928383627914, 67.340599114444259, -29091.332231365828,
    148.98393160798355, -32829.29544761841, 52.113791641431931,
    -36800.065712683892, 9.5045803688707551, -41014.308589067427,
    123.54423323710444, -45443.47867521365, 120.20081518969195,
    -50088.4128660826, 7.5084029200590408, -54977.319333828207,
    56.261575539274567, -60097.994613651055, 149.30874676163725,
    -65427.147957119967, 63.061929950135578, -70986.367907840919,
    4.7681791678185874, -76790.246044114945, 114.50464237859434,
    -82811.314100923424, 128.57974736552094, -89046.048921945883,
    13.171677254544306, -95523.3384388902, 45.600609529734896,
    -102235.06532703183, 147.94134151222596, -109155.61255565878,
    74.273896115989189, -116303.41991091125, 1.6176881223081239,
    -123696.67405488883, 104.56217628178702, -131309.60682995062,
    135.73658574357634, -139134.41493247409, 20.230273286702015,
    -147200.01088532593, 35.599488142856629, -155502.54760200047,
    144.91272814238221, -164014.66275498597, 85.495406587169242,
    -172751.229164924, 0.12455929000621779, -181733.61611044646,
    93.942326671825242, -190938.33995427814, 141.50901568112022,
    -200353.4942217475, 28.524104476544963, -210007.36030076578,
    26.485033385668139, -219900.4485936503, 140.29159456583949,
    -230004.27204430423, 96.471961350276828, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    122.92585708443505, -89.743962404247725, 469.23951004644942,
    -143.32531878203673, 1025.5289456501509, -31.99058381611772,
    1819.6624942238932, -23.271901759494639, 2853.8225394743986,
    -138.1198565101991, 4099.261352837816, -100.56020151405892,
    5565.3805363637839, -0.84702541282959487, 7277.13941411706,
    -78.586411795835787, 9215.0789475513338, -146.97426274767963,
    11362.080892110174, -41.6777812162796, 13744.502135701281,
    -15.719471768746104, 16368.840333729961, -131.47593403328628,
    19206.120348032749, -110.7898205275151, 22261.520144359198,
    -3.3688914051172816, 25561.928383627914, -67.340599114444259,
    29091.332231365828, -148.98393160798355, 32829.29544761841,
    -52.113791641431931, 36800.065712683892, -9.5045803688707551,
    41014.308589067427, -123.54423323710444, 45443.47867521365,
    -120.20081518969195, 50088.4128660826, -7.5084029200590408,
    54977.319333828207, -56.261575539274567, 60097.994613651055,
    -149.30874676163725, 65427.147957119967, -63.061929950135578,
    70986.367907840919, -4.7681791678185874, 76790.246044114945,
    -114.50464237859434, 82811.314100923424, -128.57974736552094,
    89046.048921945883, -13.171677254544306, 95523.3384388902,
    -45.600609529734896, 102235.06532703183, -147.94134151222596,
    109155.61255565878, -74.273896115989189, 116303.41991091125,
    -1.6176881223081239, 123696.67405488883, -104.56217628178702,
    131309.60682995062, -135.73658574357634, 139134.41493247409,
    -20.230273286702015, 147200.01088532593, -35.599488142856629,
    155502.54760200047, -144.91272814238221, 164014.66275498597,
    -85.495406587169242, 172751.229164924, -0.12455929000621779,
    181733.61611044646, -93.942326671825242, 190938.33995427814,
    -141.50901568112022, 200353.4942217475, -28.524104476544963,
    210007.36030076578, -26.485033385668139, 219900.4485936503,
    -140.29159456583949, 230004.27204430423, -96.471961350276828, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -122.92585708443505, 89.743962404247725, -469.23951004644942,
    143.32531878203673, -1025.5289456501509, 31.99058381611772,
    -1819.6624942238932, 23.271901759494639, -2853.8225394743986,
    138.1198565101991, -4099.261352837816, 100.56020151405892,
    -5565.3805363637839, 0.84702541282959487, -7277.13941411706,
    78.586411795835787, -9215.0789475513338, 146.97426274767963,
    -11362.080892110174, 41.6777812162796, -13744.502135701281,
    15.719471768746104, -16368.840333729961, 131.47593403328628,
    -19206.120348032749, 110.7898205275151, -22261.520144359198,
    3.3688914051172816, -25561.928383627914, 67.340599114444259,
    -29091.332231365828, 148.98393160798355, -32829.29544761841,
    52.113791641431931, -36800.065712683892, 9.5045803688707551,
    -41014.308589067427, 123.54423323710444, -45443.47867521365,
    120.20081518969195, -50088.4128660826, 7.5084029200590408,
    -54977.319333828207, 56.261575539274567, -60097.994613651055,
    149.30874676163725, -65427.147957119967, 63.061929950135578,
    -70986.367907840919, 4.7681791678185874, -76790.246044114945,
    114.50464237859434, -82811.314100923424, 128.57974736552094,
    -89046.048921945883, 13.171677254544306, -95523.3384388902,
    45.600609529734896, -102235.06532703183, 147.94134151222596,
    -109155.61255565878, 74.273896115989189, -116303.41991091125,
    1.6176881223081239, -123696.67405488883, 104.56217628178702,
    -131309.60682995062, 135.73658574357634, -139134.41493247409,
    20.230273286702015, -147200.01088532593, 35.599488142856629,
    -155502.54760200047, 144.91272814238221, -164014.66275498597,
    85.495406587169242, -172751.229164924, 0.12455929000621779,
    -181733.61611044646, 93.942326671825242, -190938.33995427814,
    141.50901568112022, -200353.4942217475, 28.524104476544963,
    -210007.36030076578, 26.485033385668139, -219900.4485936503,
    140.29159456583949, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    122.92585708443505, -89.743962404247725, 469.23951004644942,
    -143.32531878203673, 1025.5289456501509, -31.99058381611772,
    1819.6624942238932, -23.271901759494639, 2853.8225394743986,
    -138.1198565101991, 4099.261352837816, -100.56020151405892,
    5565.3805363637839, -0.84702541282959487, 7277.13941411706,
    -78.586411795835787, 9215.0789475513338, -146.97426274767963,
    11362.080892110174, -41.6777812162796, 13744.502135701281,
    -15.719471768746104, 16368.840333729961, -131.47593403328628,
    19206.120348032749, -110.7898205275151, 22261.520144359198,
    -3.3688914051172816, 25561.928383627914, -67.340599114444259,
    29091.332231365828, -148.98393160798355, 32829.29544761841,
    -52.113791641431931, 36800.065712683892, -9.5045803688707551,
    41014.308589067427, -123.54423323710444, 45443.47867521365,
    -120.20081518969195, 50088.4128660826, -7.5084029200590408,
    54977.319333828207, -56.261575539274567, 60097.994613651055,
    -149.30874676163725, 65427.147957119967, -63.061929950135578,
    70986.367907840919, -4.7681791678185874, 76790.246044114945,
    -114.50464237859434, 82811.314100923424, -128.57974736552094,
    89046.048921945883, -13.171677254544306, 95523.3384388902,
    -45.600609529734896, 102235.06532703183, -147.94134151222596,
    109155.61255565878, -74.273896115989189, 116303.41991091125,
    -1.6176881223081239, 123696.67405488883, -104.56217628178702,
    131309.60682995062, -135.73658574357634, 139134.41493247409,
    -20.230273286702015, 147200.01088532593, -35.599488142856629,
    155502.54760200047, -144.91272814238221, 164014.66275498597,
    -85.495406587169242, 172751.229164924, -0.12455929000621779,
    181733.61611044646, -93.942326671825242, 190938.33995427814,
    -141.50901568112022, 200353.4942217475, -28.524104476544963,
    210007.36030076578, -26.485033385668139, 219900.4485936503,
    -140.29159456583949, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -122.92585708443505,
    89.743962404247725, -469.23951004644942, 143.32531878203673,
    -1025.5289456501509, 31.99058381611772, -1819.6624942238932,
    23.271901759494639, -2853.8225394743986, 138.1198565101991,
    -4099.261352837816, 100.56020151405892, -5565.3805363637839,
    0.84702541282959487, -7277.13941411706, 78.586411795835787,
    -9215.0789475513338, 146.97426274767963, -11362.080892110174,
    41.6777812162796, -13744.502135701281, 15.719471768746104,
    -16368.840333729961, 131.47593403328628, -19206.120348032749,
    110.7898205275151, -22261.520144359198, 3.3688914051172816,
    -25561.928383627914, 67.340599114444259, -29091.332231365828,
    148.98393160798355, -32829.29544761841, 52.113791641431931,
    -36800.065712683892, 9.5045803688707551, -41014.308589067427,
    123.54423323710444, -45443.47867521365, 120.20081518969195,
    -50088.4128660826, 7.5084029200590408, -54977.319333828207,
    56.261575539274567, -60097.994613651055, 149.30874676163725,
    -65427.147957119967, 63.061929950135578, -70986.367907840919,
    4.7681791678185874, -76790.246044114945, 114.50464237859434,
    -82811.314100923424, 128.57974736552094, -89046.048921945883,
    13.171677254544306, -95523.3384388902, 45.600609529734896,
    -102235.06532703183, 147.94134151222596, -109155.61255565878,
    74.273896115989189, -116303.41991091125, 1.6176881223081239,
    -123696.67405488883, 104.56217628178702, -131309.60682995062,
    135.73658574357634, -139134.41493247409, 20.230273286702015,
    -147200.01088532593, 35.599488142856629, -155502.54760200047,
    144.91272814238221, -164014.66275498597, 85.495406587169242,
    -172751.229164924, 0.12455929000621779, -181733.61611044646,
    93.942326671825242, -190938.33995427814, 141.50901568112022,
    -200353.4942217475, 28.524104476544963, -210007.36030076578,
    26.485033385668139, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    122.92585708443505, -89.743962404247725, 469.23951004644942,
    -143.32531878203673, 1025.5289456501509, -31.99058381611772,
    1819.6624942238932, -23.271901759494639, 2853.8225394743986,
    -138.1198565101991, 4099.261352837816, -100.56020151405892,
    5565.3805363637839, -0.84702541282959487, 7277.13941411706,
    -78.586411795835787, 9215.0789475513338, -146.97426274767963,
    11362.080892110174, -41.6777812162796, 13744.502135701281,
    -15.719471768746104, 16368.840333729961, -131.47593403328628,
    19206.120348032749, -110.7898205275151, 22261.520144359198,
    -3.3688914051172816, 25561.928383627914, -67.340599114444259,
    29091.332231365828, -148.98393160798355, 32829.29544761841,
    -52.113791641431931, 36800.065712683892, -9.5045803688707551,
    41014.308589067427, -123.54423323710444, 45443.47867521365,
    -120.20081518969195, 50088.4128660826, -7.5084029200590408,
    54977.319333828207, -56.261575539274567, 60097.994613651055,
    -149.30874676163725, 65427.147957119967, -63.061929950135578,
    70986.367907840919, -4.7681791678185874, 76790.246044114945,
    -114.50464237859434, 82811.314100923424, -128.57974736552094,
    89046.048921945883, -13.171677254544306, 95523.3384388902,
    -45.600609529734896, 102235.06532703183, -147.94134151222596,
    109155.61255565878, -74.273896115989189, 116303.41991091125,
    -1.6176881223081239, 123696.67405488883, -104.56217628178702,
    131309.60682995062, -135.73658574357634, 139134.41493247409,
    -20.230273286702015, 147200.01088532593, -35.599488142856629,
    155502.54760200047, -144.91272814238221, 164014.66275498597,
    -85.495406587169242, 172751.229164924, -0.12455929000621779,
    181733.61611044646, -93.942326671825242, 190938.33995427814,
    -141.50901568112022, 200353.4942217475, -28.524104476544963,
    210007.36030076578, -26.485033385668139, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -122.92585708443505, 89.743962404247725, -469.23951004644942,
    143.32531878203673, -1025.5289456501509, 31.99058381611772,
    -1819.6624942238932, 23.271901759494639, -2853.8225394743986,
    138.1198565101991, -4099.261352837816, 100.56020151405892,
    -5565.3805363637839, 0.84702541282959487, -7277.13941411706,
    78.586411795835787, -9215.0789475513338, 146.97426274767963,
    -11362.080892110174, 41.6777812162796, -13744.502135701281,
    15.719471768746104, -16368.840333729961, 131.47593403328628,
    -19206.120348032749, 110.7898205275151, -22261.520144359198,
    3.3688914051172816, -25561.928383627914, 67.340599114444259,
    -29091.332231365828, 148.98393160798355, -32829.29544761841,
    52.113791641431931, -36800.065712683892, 9.5045803688707551,
    -41014.308589067427, 123.54423323710444, -45443.47867521365,
    120.20081518969195, -50088.4128660826, 7.5084029200590408,
    -54977.319333828207, 56.261575539274567, -60097.994613651055,
    149.30874676163725, -65427.147957119967, 63.061929950135578,
    -70986.367907840919, 4.7681791678185874, -76790.246044114945,
    114.50464237859434, -82811.314100923424, 128.57974736552094,
    -89046.048921945883, 13.171677254544306, -95523.3384388902,
    45.600609529734896, -102235.06532703183, 147.94134151222596,
    -109155.61255565878, 74.273896115989189, -116303.41991091125,
    1.6176881223081239, -123696.67405488883, 104.56217628178702,
    -131309.60682995062, 135.73658574357634, -139134.41493247409,
    20.230273286702015, -147200.01088532593, 35.599488142856629,
    -155502.54760200047, 144.91272814238221, -164014.66275498597,
    85.495406587169242, -172751.229164924, 0.12455929000621779,
    -181733.61611044646, 93.942326671825242, -190938.33995427814,
    141.50901568112022, -200353.4942217475, 28.524104476544963, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 122.92585708443505,
    -89.743962404247725, 469.23951004644942, -143.32531878203673,
    1025.5289456501509, -31.99058381611772, 1819.6624942238932,
    -23.271901759494639, 2853.8225394743986, -138.1198565101991,
    4099.261352837816, -100.56020151405892, 5565.3805363637839,
    -0.84702541282959487, 7277.13941411706, -78.586411795835787,
    9215.0789475513338, -146.97426274767963, 11362.080892110174,
    -41.6777812162796, 13744.502135701281, -15.719471768746104,
    16368.840333729961, -131.47593403328628, 19206.120348032749,
    -110.7898205275151, 22261.520144359198, -3.3688914051172816,
    25561.928383627914, -67.340599114444259, 29091.332231365828,
    -148.98393160798355, 32829.29544761841, -52.113791641431931,
    36800.065712683892, -9.5045803688707551, 41014.308589067427,
    -123.54423323710444, 45443.47867521365, -120.20081518969195,
    50088.4128660826, -7.5084029200590408, 54977.319333828207,
    -56.261575539274567, 60097.994613651055, -149.30874676163725,
    65427.147957119967, -63.061929950135578, 70986.367907840919,
    -4.7681791678185874, 76790.246044114945, -114.50464237859434,
    82811.314100923424, -128.57974736552094, 89046.048921945883,
    -13.171677254544306, 95523.3384388902, -45.600609529734896,
    102235.06532703183, -147.94134151222596, 109155.61255565878,
    -74.273896115989189, 116303.41991091125, -1.6176881223081239,
    123696.67405488883, -104.56217628178702, 131309.60682995062,
    -135.73658574357634, 139134.41493247409, -20.230273286702015,
    147200.01088532593, -35.599488142856629, 155502.54760200047,
    -144.91272814238221, 164014.66275498597, -85.495406587169242,
    172751.229164924, -0.12455929000621779, 181733.61611044646,
    -93.942326671825242, 190938.33995427814, -141.50901568112022,
    200353.4942217475, -28.524104476544963, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -122.92585708443505, 89.743962404247725, -469.23951004644942,
    143.32531878203673, -1025.5289456501509, 31.99058381611772,
    -1819.6624942238932, 23.271901759494639, -2853.8225394743986,
    138.1198565101991, -4099.261352837816, 100.56020151405892,
    -5565.3805363637839, 0.84702541282959487, -7277.13941411706,
    78.586411795835787, -9215.0789475513338, 146.97426274767963,
    -11362.080892110174, 41.6777812162796, -13744.502135701281,
    15.719471768746104, -16368.840333729961, 131.47593403328628,
    -19206.120348032749, 110.7898205275151, -22261.520144359198,
    3.3688914051172816, -25561.928383627914, 67.340599114444259,
    -29091.332231365828, 148.98393160798355, -32829.29544761841,
    52.113791641431931, -36800.065712683892, 9.5045803688707551,
    -41014.308589067427, 123.54423323710444, -45443.47867521365,
    120.20081518969195, -50088.4128660826, 7.5084029200590408,
    -54977.319333828207, 56.261575539274567, -60097.994613651055,
    149.30874676163725, -65427.147957119967, 63.061929950135578,
    -70986.367907840919, 4.7681791678185874, -76790.246044114945,
    114.50464237859434, -82811.314100923424, 128.57974736552094,
    -89046.048921945883, 13.171677254544306, -95523.3384388902,
    45.600609529734896, -102235.06532703183, 147.94134151222596,
    -109155.61255565878, 74.273896115989189, -116303.41991091125,
    1.6176881223081239, -123696.67405488883, 104.56217628178702,
    -131309.60682995062, 135.73658574357634, -139134.41493247409,
    20.230273286702015, -147200.01088532593, 35.599488142856629,
    -155502.54760200047, 144.91272814238221, -164014.66275498597,
    85.495406587169242, -172751.229164924, 0.12455929000621779,
    -181733.61611044646, 93.942326671825242, -190938.33995427814,
    141.50901568112022, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, 122.92585708443505, -89.743962404247725,
    469.23951004644942, -143.32531878203673, 1025.5289456501509,
    -31.99058381611772, 1819.6624942238932, -23.271901759494639,
    2853.8225394743986, -138.1198565101991, 4099.261352837816,
    -100.56020151405892, 5565.3805363637839, -0.84702541282959487,
    7277.13941411706, -78.586411795835787, 9215.0789475513338,
    -146.97426274767963, 11362.080892110174, -41.6777812162796,
    13744.502135701281, -15.719471768746104, 16368.840333729961,
    -131.47593403328628, 19206.120348032749, -110.7898205275151,
    22261.520144359198, -3.3688914051172816, 25561.928383627914,
    -67.340599114444259, 29091.332231365828, -148.98393160798355,
    32829.29544761841, -52.113791641431931, 36800.065712683892,
    -9.5045803688707551, 41014.308589067427, -123.54423323710444,
    45443.47867521365, -120.20081518969195, 50088.4128660826,
    -7.5084029200590408, 54977.319333828207, -56.261575539274567,
    60097.994613651055, -149.30874676163725, 65427.147957119967,
    -63.061929950135578, 70986.367907840919, -4.7681791678185874,
    76790.246044114945, -114.50464237859434, 82811.314100923424,
    -128.57974736552094, 89046.048921945883, -13.171677254544306,
    95523.3384388902, -45.600609529734896, 102235.06532703183,
    -147.94134151222596, 109155.61255565878, -74.273896115989189,
    116303.41991091125, -1.6176881223081239, 123696.67405488883,
    -104.56217628178702, 131309.60682995062, -135.73658574357634,
    139134.41493247409, -20.230273286702015, 147200.01088532593,
    -35.599488142856629, 155502.54760200047, -144.91272814238221,
    164014.66275498597, -85.495406587169242, 172751.229164924,
    -0.12455929000621779, 181733.61611044646, -93.942326671825242,
    190938.33995427814, -141.50901568112022, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -122.92585708443505, 89.743962404247725,
    -469.23951004644942, 143.32531878203673, -1025.5289456501509,
    31.99058381611772, -1819.6624942238932, 23.271901759494639,
    -2853.8225394743986, 138.1198565101991, -4099.261352837816,
    100.56020151405892, -5565.3805363637839, 0.84702541282959487,
    -7277.13941411706, 78.586411795835787, -9215.0789475513338,
    146.97426274767963, -11362.080892110174, 41.6777812162796,
    -13744.502135701281, 15.719471768746104, -16368.840333729961,
    131.47593403328628, -19206.120348032749, 110.7898205275151,
    -22261.520144359198, 3.3688914051172816, -25561.928383627914,
    67.340599114444259, -29091.332231365828, 148.98393160798355,
    -32829.29544761841, 52.113791641431931, -36800.065712683892,
    9.5045803688707551, -41014.308589067427, 123.54423323710444,
    -45443.47867521365, 120.20081518969195, -50088.4128660826,
    7.5084029200590408, -54977.319333828207, 56.261575539274567,
    -60097.994613651055, 149.30874676163725, -65427.147957119967,
    63.061929950135578, -70986.367907840919, 4.7681791678185874,
    -76790.246044114945, 114.50464237859434, -82811.314100923424,
    128.57974736552094, -89046.048921945883, 13.171677254544306,
    -95523.3384388902, 45.600609529734896, -102235.06532703183,
    147.94134151222596, -109155.61255565878, 74.273896115989189,
    -116303.41991091125, 1.6176881223081239, -123696.67405488883,
    104.56217628178702, -131309.60682995062, 135.73658574357634,
    -139134.41493247409, 20.230273286702015, -147200.01088532593,
    35.599488142856629, -155502.54760200047, 144.91272814238221,
    -164014.66275498597, 85.495406587169242, -172751.229164924,
    0.12455929000621779, -181733.61611044646, 93.942326671825242, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    122.92585708443505, -89.743962404247725, 469.23951004644942,
    -143.32531878203673, 1025.5289456501509, -31.99058381611772,
    1819.6624942238932, -23.271901759494639, 2853.8225394743986,
    -138.1198565101991, 4099.261352837816, -100.56020151405892,
    5565.3805363637839, -0.84702541282959487, 7277.13941411706,
    -78.586411795835787, 9215.0789475513338, -146.97426274767963,
    11362.080892110174, -41.6777812162796, 13744.502135701281,
    -15.719471768746104, 16368.840333729961, -131.47593403328628,
    19206.120348032749, -110.7898205275151, 22261.520144359198,
    -3.3688914051172816, 25561.928383627914, -67.340599114444259,
    29091.332231365828, -148.98393160798355, 32829.29544761841,
    -52.113791641431931, 36800.065712683892, -9.5045803688707551,
    41014.308589067427, -123.54423323710444, 45443.47867521365,
    -120.20081518969195, 50088.4128660826, -7.5084029200590408,
    54977.319333828207, -56.261575539274567, 60097.994613651055,
    -149.30874676163725, 65427.147957119967, -63.061929950135578,
    70986.367907840919, -4.7681791678185874, 76790.246044114945,
    -114.50464237859434, 82811.314100923424, -128.57974736552094,
    89046.048921945883, -13.171677254544306, 95523.3384388902,
    -45.600609529734896, 102235.06532703183, -147.94134151222596,
    109155.61255565878, -74.273896115989189, 116303.41991091125,
    -1.6176881223081239, 123696.67405488883, -104.56217628178702,
    131309.60682995062, -135.73658574357634, 139134.41493247409,
    -20.230273286702015, 147200.01088532593, -35.599488142856629,
    155502.54760200047, -144.91272814238221, 164014.66275498597,
    -85.495406587169242, 172751.229164924, -0.12455929000621779,
    181733.61611044646, -93.942326671825242, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -122.92585708443505, 89.743962404247725,
    -469.23951004644942, 143.32531878203673, -1025.5289456501509,
    31.99058381611772, -1819.6624942238932, 23.271901759494639,
    -2853.8225394743986, 138.1198565101991, -4099.261352837816,
    100.56020151405892, -5565.3805363637839, 0.84702541282959487,
    -7277.13941411706, 78.586411795835787, -9215.0789475513338,
    146.97426274767963, -11362.080892110174, 41.6777812162796,
    -13744.502135701281, 15.719471768746104, -16368.840333729961,
    131.47593403328628, -19206.120348032749, 110.7898205275151,
    -22261.520144359198, 3.3688914051172816, -25561.928383627914,
    67.340599114444259, -29091.332231365828, 148.98393160798355,
    -32829.29544761841, 52.113791641431931, -36800.065712683892,
    9.5045803688707551, -41014.308589067427, 123.54423323710444,
    -45443.47867521365, 120.20081518969195, -50088.4128660826,
    7.5084029200590408, -54977.319333828207, 56.261575539274567,
    -60097.994613651055, 149.30874676163725, -65427.147957119967,
    63.061929950135578, -70986.367907840919, 4.7681791678185874,
    -76790.246044114945, 114.50464237859434, -82811.314100923424,
    128.57974736552094, -89046.048921945883, 13.171677254544306,
    -95523.3384388902, 45.600609529734896, -102235.06532703183,
    147.94134151222596, -109155.61255565878, 74.273896115989189,
    -116303.41991091125, 1.6176881223081239, -123696.67405488883,
    104.56217628178702, -131309.60682995062, 135.73658574357634,
    -139134.41493247409, 20.230273286702015, -147200.01088532593,
    35.599488142856629, -155502.54760200047, 144.91272814238221,
    -164014.66275498597, 85.495406587169242, -172751.229164924,
    0.12455929000621779, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 122.92585708443505,
    -89.743962404247725, 469.23951004644942, -143.32531878203673,
    1025.5289456501509, -31.99058381611772, 1819.6624942238932,
    -23.271901759494639, 2853.8225394743986, -138.1198565101991,
    4099.261352837816, -100.56020151405892, 5565.3805363637839,
    -0.84702541282959487, 7277.13941411706, -78.586411795835787,
    9215.0789475513338, -146.97426274767963, 11362.080892110174,
    -41.6777812162796, 13744.502135701281, -15.719471768746104,
    16368.840333729961, -131.47593403328628, 19206.120348032749,
    -110.7898205275151, 22261.520144359198, -3.3688914051172816,
    25561.928383627914, -67.340599114444259, 29091.332231365828,
    -148.98393160798355, 32829.29544761841, -52.113791641431931,
    36800.065712683892, -9.5045803688707551, 41014.308589067427,
    -123.54423323710444, 45443.47867521365, -120.20081518969195,
    50088.4128660826, -7.5084029200590408, 54977.319333828207,
    -56.261575539274567, 60097.994613651055, -149.30874676163725,
    65427.147957119967, -63.061929950135578, 70986.367907840919,
    -4.7681791678185874, 76790.246044114945, -114.50464237859434,
    82811.314100923424, -128.57974736552094, 89046.048921945883,
    -13.171677254544306, 95523.3384388902, -45.600609529734896,
    102235.06532703183, -147.94134151222596, 109155.61255565878,
    -74.273896115989189, 116303.41991091125, -1.6176881223081239,
    123696.67405488883, -104.56217628178702, 131309.60682995062,
    -135.73658574357634, 139134.41493247409, -20.230273286702015,
    147200.01088532593, -35.599488142856629, 155502.54760200047,
    -144.91272814238221, 164014.66275498597, -85.495406587169242,
    172751.229164924, -0.12455929000621779, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -122.92585708443505,
    89.743962404247725, -469.23951004644942, 143.32531878203673,
    -1025.5289456501509, 31.99058381611772, -1819.6624942238932,
    23.271901759494639, -2853.8225394743986, 138.1198565101991,
    -4099.261352837816, 100.56020151405892, -5565.3805363637839,
    0.84702541282959487, -7277.13941411706, 78.586411795835787,
    -9215.0789475513338, 146.97426274767963, -11362.080892110174,
    41.6777812162796, -13744.502135701281, 15.719471768746104,
    -16368.840333729961, 131.47593403328628, -19206.120348032749,
    110.7898205275151, -22261.520144359198, 3.3688914051172816,
    -25561.928383627914, 67.340599114444259, -29091.332231365828,
    148.98393160798355, -32829.29544761841, 52.113791641431931,
    -36800.065712683892, 9.5045803688707551, -41014.308589067427,
    123.54423323710444, -45443.47867521365, 120.20081518969195,
    -50088.4128660826, 7.5084029200590408, -54977.319333828207,
    56.261575539274567, -60097.994613651055, 149.30874676163725,
    -65427.147957119967, 63.061929950135578, -70986.367907840919,
    4.7681791678185874, -76790.246044114945, 114.50464237859434,
    -82811.314100923424, 128.57974736552094, -89046.048921945883,
    13.171677254544306, -95523.3384388902, 45.600609529734896,
    -102235.06532703183, 147.94134151222596, -109155.61255565878,
    74.273896115989189, -116303.41991091125, 1.6176881223081239,
    -123696.67405488883, 104.56217628178702, -131309.60682995062,
    135.73658574357634, -139134.41493247409, 20.230273286702015,
    -147200.01088532593, 35.599488142856629, -155502.54760200047,
    144.91272814238221, -164014.66275498597, 85.495406587169242, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, 122.92585708443505, -89.743962404247725,
    469.23951004644942, -143.32531878203673, 1025.5289456501509,
    -31.99058381611772, 1819.6624942238932, -23.271901759494639,
    2853.8225394743986, -138.1198565101991, 4099.261352837816,
    -100.56020151405892, 5565.3805363637839, -0.84702541282959487,
    7277.13941411706, -78.586411795835787, 9215.0789475513338,
    -146.97426274767963, 11362.080892110174, -41.6777812162796,
    13744.502135701281, -15.719471768746104, 16368.840333729961,
    -131.47593403328628, 19206.120348032749, -110.7898205275151,
    22261.520144359198, -3.3688914051172816, 25561.928383627914,
    -67.340599114444259, 29091.332231365828, -148.98393160798355,
    32829.29544761841, -52.113791641431931, 36800.065712683892,
    -9.5045803688707551, 41014.308589067427, -123.54423323710444,
    45443.47867521365, -120.20081518969195, 50088.4128660826,
    -7.5084029200590408, 54977.319333828207, -56.261575539274567,
    60097.994613651055, -149.30874676163725, 65427.147957119967,
    -63.061929950135578, 70986.367907840919, -4.7681791678185874,
    76790.246044114945, -114.50464237859434, 82811.314100923424,
    -128.57974736552094, 89046.048921945883, -13.171677254544306,
    95523.3384388902, -45.600609529734896, 102235.06532703183,
    -147.94134151222596, 109155.61255565878, -74.273896115989189,
    116303.41991091125, -1.6176881223081239, 123696.67405488883,
    -104.56217628178702, 131309.60682995062, -135.73658574357634,
    139134.41493247409, -20.230273286702015, 147200.01088532593,
    -35.599488142856629, 155502.54760200047, -144.91272814238221,
    164014.66275498597, -85.495406587169242, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -122.92585708443505, 89.743962404247725, -469.23951004644942,
    143.32531878203673, -1025.5289456501509, 31.99058381611772,
    -1819.6624942238932, 23.271901759494639, -2853.8225394743986,
    138.1198565101991, -4099.261352837816, 100.56020151405892,
    -5565.3805363637839, 0.84702541282959487, -7277.13941411706,
    78.586411795835787, -9215.0789475513338, 146.97426274767963,
    -11362.080892110174, 41.6777812162796, -13744.502135701281,
    15.719471768746104, -16368.840333729961, 131.47593403328628,
    -19206.120348032749, 110.7898205275151, -22261.520144359198,
    3.3688914051172816, -25561.928383627914, 67.340599114444259,
    -29091.332231365828, 148.98393160798355, -32829.29544761841,
    52.113791641431931, -36800.065712683892, 9.5045803688707551,
    -41014.308589067427, 123.54423323710444, -45443.47867521365,
    120.20081518969195, -50088.4128660826, 7.5084029200590408,
    -54977.319333828207, 56.261575539274567, -60097.994613651055,
    149.30874676163725, -65427.147957119967, 63.061929950135578,
    -70986.367907840919, 4.7681791678185874, -76790.246044114945,
    114.50464237859434, -82811.314100923424, 128.57974736552094,
    -89046.048921945883, 13.171677254544306, -95523.3384388902,
    45.600609529734896, -102235.06532703183, 147.94134151222596,
    -109155.61255565878, 74.273896115989189, -116303.41991091125,
    1.6176881223081239, -123696.67405488883, 104.56217628178702,
    -131309.60682995062, 135.73658574357634, -139134.41493247409,
    20.230273286702015, -147200.01088532593, 35.599488142856629,
    -155502.54760200047, 144.91272814238221, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, 122.92585708443505, -89.743962404247725, 469.23951004644942,
    -143.32531878203673, 1025.5289456501509, -31.99058381611772,
    1819.6624942238932, -23.271901759494639, 2853.8225394743986,
    -138.1198565101991, 4099.261352837816, -100.56020151405892,
    5565.3805363637839, -0.84702541282959487, 7277.13941411706,
    -78.586411795835787, 9215.0789475513338, -146.97426274767963,
    11362.080892110174, -41.6777812162796, 13744.502135701281,
    -15.719471768746104, 16368.840333729961, -131.47593403328628,
    19206.120348032749, -110.7898205275151, 22261.520144359198,
    -3.3688914051172816, 25561.928383627914, -67.340599114444259,
    29091.332231365828, -148.98393160798355, 32829.29544761841,
    -52.113791641431931, 36800.065712683892, -9.5045803688707551,
    41014.308589067427, -123.54423323710444, 45443.47867521365,
    -120.20081518969195, 50088.4128660826, -7.5084029200590408,
    54977.319333828207, -56.261575539274567, 60097.994613651055,
    -149.30874676163725, 65427.147957119967, -63.061929950135578,
    70986.367907840919, -4.7681791678185874, 76790.246044114945,
    -114.50464237859434, 82811.314100923424, -128.57974736552094,
    89046.048921945883, -13.171677254544306, 95523.3384388902,
    -45.600609529734896, 102235.06532703183, -147.94134151222596,
    109155.61255565878, -74.273896115989189, 116303.41991091125,
    -1.6176881223081239, 123696.67405488883, -104.56217628178702,
    131309.60682995062, -135.73658574357634, 139134.41493247409,
    -20.230273286702015, 147200.01088532593, -35.599488142856629,
    155502.54760200047, -144.91272814238221, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -122.92585708443505, 89.743962404247725, -469.23951004644942,
    143.32531878203673, -1025.5289456501509, 31.99058381611772,
    -1819.6624942238932, 23.271901759494639, -2853.8225394743986,
    138.1198565101991, -4099.261352837816, 100.56020151405892,
    -5565.3805363637839, 0.84702541282959487, -7277.13941411706,
    78.586411795835787, -9215.0789475513338, 146.97426274767963,
    -11362.080892110174, 41.6777812162796, -13744.502135701281,
    15.719471768746104, -16368.840333729961, 131.47593403328628,
    -19206.120348032749, 110.7898205275151, -22261.520144359198,
    3.3688914051172816, -25561.928383627914, 67.340599114444259,
    -29091.332231365828, 148.98393160798355, -32829.29544761841,
    52.113791641431931, -36800.065712683892, 9.5045803688707551,
    -41014.308589067427, 123.54423323710444, -45443.47867521365,
    120.20081518969195, -50088.4128660826, 7.5084029200590408,
    -54977.319333828207, 56.261575539274567, -60097.994613651055,
    149.30874676163725, -65427.147957119967, 63.061929950135578,
    -70986.367907840919, 4.7681791678185874, -76790.246044114945,
    114.50464237859434, -82811.314100923424, 128.57974736552094,
    -89046.048921945883, 13.171677254544306, -95523.3384388902,
    45.600609529734896, -102235.06532703183, 147.94134151222596,
    -109155.61255565878, 74.273896115989189, -116303.41991091125,
    1.6176881223081239, -123696.67405488883, 104.56217628178702,
    -131309.60682995062, 135.73658574357634, -139134.41493247409,
    20.230273286702015, -147200.01088532593, 35.599488142856629, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 122.92585708443505,
    -89.743962404247725, 469.23951004644942, -143.32531878203673,
    1025.5289456501509, -31.99058381611772, 1819.6624942238932,
    -23.271901759494639, 2853.8225394743986, -138.1198565101991,
    4099.261352837816, -100.56020151405892, 5565.3805363637839,
    -0.84702541282959487, 7277.13941411706, -78.586411795835787,
    9215.0789475513338, -146.97426274767963, 11362.080892110174,
    -41.6777812162796, 13744.502135701281, -15.719471768746104,
    16368.840333729961, -131.47593403328628, 19206.120348032749,
    -110.7898205275151, 22261.520144359198, -3.3688914051172816,
    25561.928383627914, -67.340599114444259, 29091.332231365828,
    -148.98393160798355, 32829.29544761841, -52.113791641431931,
    36800.065712683892, -9.5045803688707551, 41014.308589067427,
    -123.54423323710444, 45443.47867521365, -120.20081518969195,
    50088.4128660826, -7.5084029200590408, 54977.319333828207,
    -56.261575539274567, 60097.994613651055, -149.30874676163725,
    65427.147957119967, -63.061929950135578, 70986.367907840919,
    -4.7681791678185874, 76790.246044114945, -114.50464237859434,
    82811.314100923424, -128.57974736552094, 89046.048921945883,
    -13.171677254544306, 95523.3384388902, -45.600609529734896,
    102235.06532703183, -147.94134151222596, 109155.61255565878,
    -74.273896115989189, 116303.41991091125, -1.6176881223081239,
    123696.67405488883, -104.56217628178702, 131309.60682995062,
    -135.73658574357634, 139134.41493247409, -20.230273286702015,
    147200.01088532593, -35.599488142856629, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -122.92585708443505, 89.743962404247725, -469.23951004644942,
    143.32531878203673, -1025.5289456501509, 31.99058381611772,
    -1819.6624942238932, 23.271901759494639, -2853.8225394743986,
    138.1198565101991, -4099.261352837816, 100.56020151405892,
    -5565.3805363637839, 0.84702541282959487, -7277.13941411706,
    78.586411795835787, -9215.0789475513338, 146.97426274767963,
    -11362.080892110174, 41.6777812162796, -13744.502135701281,
    15.719471768746104, -16368.840333729961, 131.47593403328628,
    -19206.120348032749, 110.7898205275151, -22261.520144359198,
    3.3688914051172816, -25561.928383627914, 67.340599114444259,
    -29091.332231365828, 148.98393160798355, -32829.29544761841,
    52.113791641431931, -36800.065712683892, 9.5045803688707551,
    -41014.308589067427, 123.54423323710444, -45443.47867521365,
    120.20081518969195, -50088.4128660826, 7.5084029200590408,
    -54977.319333828207, 56.261575539274567, -60097.994613651055,
    149.30874676163725, -65427.147957119967, 63.061929950135578,
    -70986.367907840919, 4.7681791678185874, -76790.246044114945,
    114.50464237859434, -82811.314100923424, 128.57974736552094,
    -89046.048921945883, 13.171677254544306, -95523.3384388902,
    45.600609529734896, -102235.06532703183, 147.94134151222596,
    -109155.61255565878, 74.273896115989189, -116303.41991091125,
    1.6176881223081239, -123696.67405488883, 104.56217628178702,
    -131309.60682995062, 135.73658574357634, -139134.41493247409,
    20.230273286702015, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, 122.92585708443505, -89.743962404247725, 469.23951004644942,
    -143.32531878203673, 1025.5289456501509, -31.99058381611772,
    1819.6624942238932, -23.271901759494639, 2853.8225394743986,
    -138.1198565101991, 4099.261352837816, -100.56020151405892,
    5565.3805363637839, -0.84702541282959487, 7277.13941411706,
    -78.586411795835787, 9215.0789475513338, -146.97426274767963,
    11362.080892110174, -41.6777812162796, 13744.502135701281,
    -15.719471768746104, 16368.840333729961, -131.47593403328628,
    19206.120348032749, -110.7898205275151, 22261.520144359198,
    -3.3688914051172816, 25561.928383627914, -67.340599114444259,
    29091.332231365828, -148.98393160798355, 32829.29544761841,
    -52.113791641431931, 36800.065712683892, -9.5045803688707551,
    41014.308589067427, -123.54423323710444, 45443.47867521365,
    -120.20081518969195, 50088.4128660826, -7.5084029200590408,
    54977.319333828207, -56.261575539274567, 60097.994613651055,
    -149.30874676163725, 65427.147957119967, -63.061929950135578,
    70986.367907840919, -4.7681791678185874, 76790.246044114945,
    -114.50464237859434, 82811.314100923424, -128.57974736552094,
    89046.048921945883, -13.171677254544306, 95523.3384388902,
    -45.600609529734896, 102235.06532703183, -147.94134151222596,
    109155.61255565878, -74.273896115989189, 116303.41991091125,
    -1.6176881223081239, 123696.67405488883, -104.56217628178702,
    131309.60682995062, -135.73658574357634, 139134.41493247409,
    -20.230273286702015, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -122.92585708443505, 89.743962404247725, -469.23951004644942,
    143.32531878203673, -1025.5289456501509, 31.99058381611772,
    -1819.6624942238932, 23.271901759494639, -2853.8225394743986,
    138.1198565101991, -4099.261352837816, 100.56020151405892,
    -5565.3805363637839, 0.84702541282959487, -7277.13941411706,
    78.586411795835787, -9215.0789475513338, 146.97426274767963,
    -11362.080892110174, 41.6777812162796, -13744.502135701281,
    15.719471768746104, -16368.840333729961, 131.47593403328628,
    -19206.120348032749, 110.7898205275151, -22261.520144359198,
    3.3688914051172816, -25561.928383627914, 67.340599114444259,
    -29091.332231365828, 148.98393160798355, -32829.29544761841,
    52.113791641431931, -36800.065712683892, 9.5045803688707551,
    -41014.308589067427, 123.54423323710444, -45443.47867521365,
    120.20081518969195, -50088.4128660826, 7.5084029200590408,
    -54977.319333828207, 56.261575539274567, -60097.994613651055,
    149.30874676163725, -65427.147957119967, 63.061929950135578,
    -70986.367907840919, 4.7681791678185874, -76790.246044114945,
    114.50464237859434, -82811.314100923424, 128.57974736552094,
    -89046.048921945883, 13.171677254544306, -95523.3384388902,
    45.600609529734896, -102235.06532703183, 147.94134151222596,
    -109155.61255565878, 74.273896115989189, -116303.41991091125,
    1.6176881223081239, -123696.67405488883, 104.56217628178702,
    -131309.60682995062, 135.73658574357634, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 122.92585708443505,
    -89.743962404247725, 469.23951004644942, -143.32531878203673,
    1025.5289456501509, -31.99058381611772, 1819.6624942238932,
    -23.271901759494639, 2853.8225394743986, -138.1198565101991,
    4099.261352837816, -100.56020151405892, 5565.3805363637839,
    -0.84702541282959487, 7277.13941411706, -78.586411795835787,
    9215.0789475513338, -146.97426274767963, 11362.080892110174,
    -41.6777812162796, 13744.502135701281, -15.719471768746104,
    16368.840333729961, -131.47593403328628, 19206.120348032749,
    -110.7898205275151, 22261.520144359198, -3.3688914051172816,
    25561.928383627914, -67.340599114444259, 29091.332231365828,
    -148.98393160798355, 32829.29544761841, -52.113791641431931,
    36800.065712683892, -9.5045803688707551, 41014.308589067427,
    -123.54423323710444, 45443.47867521365, -120.20081518969195,
    50088.4128660826, -7.5084029200590408, 54977.319333828207,
    -56.261575539274567, 60097.994613651055, -149.30874676163725,
    65427.147957119967, -63.061929950135578, 70986.367907840919,
    -4.7681791678185874, 76790.246044114945, -114.50464237859434,
    82811.314100923424, -128.57974736552094, 89046.048921945883,
    -13.171677254544306, 95523.3384388902, -45.600609529734896,
    102235.06532703183, -147.94134151222596, 109155.61255565878,
    -74.273896115989189, 116303.41991091125, -1.6176881223081239,
    123696.67405488883, -104.56217628178702, 131309.60682995062,
    -135.73658574357634, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -122.92585708443505, 89.743962404247725,
    -469.23951004644942, 143.32531878203673, -1025.5289456501509,
    31.99058381611772, -1819.6624942238932, 23.271901759494639,
    -2853.8225394743986, 138.1198565101991, -4099.261352837816,
    100.56020151405892, -5565.3805363637839, 0.84702541282959487,
    -7277.13941411706, 78.586411795835787, -9215.0789475513338,
    146.97426274767963, -11362.080892110174, 41.6777812162796,
    -13744.502135701281, 15.719471768746104, -16368.840333729961,
    131.47593403328628, -19206.120348032749, 110.7898205275151,
    -22261.520144359198, 3.3688914051172816, -25561.928383627914,
    67.340599114444259, -29091.332231365828, 148.98393160798355,
    -32829.29544761841, 52.113791641431931, -36800.065712683892,
    9.5045803688707551, -41014.308589067427, 123.54423323710444,
    -45443.47867521365, 120.20081518969195, -50088.4128660826,
    7.5084029200590408, -54977.319333828207, 56.261575539274567,
    -60097.994613651055, 149.30874676163725, -65427.147957119967,
    63.061929950135578, -70986.367907840919, 4.7681791678185874,
    -76790.246044114945, 114.50464237859434, -82811.314100923424,
    128.57974736552094, -89046.048921945883, 13.171677254544306,
    -95523.3384388902, 45.600609529734896, -102235.06532703183,
    147.94134151222596, -109155.61255565878, 74.273896115989189,
    -116303.41991091125, 1.6176881223081239, -123696.67405488883,
    104.56217628178702, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 122.92585708443505, -89.743962404247725,
    469.23951004644942, -143.32531878203673, 1025.5289456501509,
    -31.99058381611772, 1819.6624942238932, -23.271901759494639,
    2853.8225394743986, -138.1198565101991, 4099.261352837816,
    -100.56020151405892, 5565.3805363637839, -0.84702541282959487,
    7277.13941411706, -78.586411795835787, 9215.0789475513338,
    -146.97426274767963, 11362.080892110174, -41.6777812162796,
    13744.502135701281, -15.719471768746104, 16368.840333729961,
    -131.47593403328628, 19206.120348032749, -110.7898205275151,
    22261.520144359198, -3.3688914051172816, 25561.928383627914,
    -67.340599114444259, 29091.332231365828, -148.98393160798355,
    32829.29544761841, -52.113791641431931, 36800.065712683892,
    -9.5045803688707551, 41014.308589067427, -123.54423323710444,
    45443.47867521365, -120.20081518969195, 50088.4128660826,
    -7.5084029200590408, 54977.319333828207, -56.261575539274567,
    60097.994613651055, -149.30874676163725, 65427.147957119967,
    -63.061929950135578, 70986.367907840919, -4.7681791678185874,
    76790.246044114945, -114.50464237859434, 82811.314100923424,
    -128.57974736552094, 89046.048921945883, -13.171677254544306,
    95523.3384388902, -45.600609529734896, 102235.06532703183,
    -147.94134151222596, 109155.61255565878, -74.273896115989189,
    116303.41991091125, -1.6176881223081239, 123696.67405488883,
    -104.56217628178702, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -122.92585708443505, 89.743962404247725,
    -469.23951004644942, 143.32531878203673, -1025.5289456501509,
    31.99058381611772, -1819.6624942238932, 23.271901759494639,
    -2853.8225394743986, 138.1198565101991, -4099.261352837816,
    100.56020151405892, -5565.3805363637839, 0.84702541282959487,
    -7277.13941411706, 78.586411795835787, -9215.0789475513338,
    146.97426274767963, -11362.080892110174, 41.6777812162796,
    -13744.502135701281, 15.719471768746104, -16368.840333729961,
    131.47593403328628, -19206.120348032749, 110.7898205275151,
    -22261.520144359198, 3.3688914051172816, -25561.928383627914,
    67.340599114444259, -29091.332231365828, 148.98393160798355,
    -32829.29544761841, 52.113791641431931, -36800.065712683892,
    9.5045803688707551, -41014.308589067427, 123.54423323710444,
    -45443.47867521365, 120.20081518969195, -50088.4128660826,
    7.5084029200590408, -54977.319333828207, 56.261575539274567,
    -60097.994613651055, 149.30874676163725, -65427.147957119967,
    63.061929950135578, -70986.367907840919, 4.7681791678185874,
    -76790.246044114945, 114.50464237859434, -82811.314100923424,
    128.57974736552094, -89046.048921945883, 13.171677254544306,
    -95523.3384388902, 45.600609529734896, -102235.06532703183,
    147.94134151222596, -109155.61255565878, 74.273896115989189,
    -116303.41991091125, 1.6176881223081239, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    122.92585708443505, -89.743962404247725, 469.23951004644942,
    -143.32531878203673, 1025.5289456501509, -31.99058381611772,
    1819.6624942238932, -23.271901759494639, 2853.8225394743986,
    -138.1198565101991, 4099.261352837816, -100.56020151405892,
    5565.3805363637839, -0.84702541282959487, 7277.13941411706,
    -78.586411795835787, 9215.0789475513338, -146.97426274767963,
    11362.080892110174, -41.6777812162796, 13744.502135701281,
    -15.719471768746104, 16368.840333729961, -131.47593403328628,
    19206.120348032749, -110.7898205275151, 22261.520144359198,
    -3.3688914051172816, 25561.928383627914, -67.340599114444259,
    29091.332231365828, -148.98393160798355, 32829.29544761841,
    -52.113791641431931, 36800.065712683892, -9.5045803688707551,
    41014.308589067427, -123.54423323710444, 45443.47867521365,
    -120.20081518969195, 50088.4128660826, -7.5084029200590408,
    54977.319333828207, -56.261575539274567, 60097.994613651055,
    -149.30874676163725, 65427.147957119967, -63.061929950135578,
    70986.367907840919, -4.7681791678185874, 76790.246044114945,
    -114.50464237859434, 82811.314100923424, -128.57974736552094,
    89046.048921945883, -13.171677254544306, 95523.3384388902,
    -45.600609529734896, 102235.06532703183, -147.94134151222596,
    109155.61255565878, -74.273896115989189, 116303.41991091125,
    -1.6176881223081239, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -122.92585708443505,
    89.743962404247725, -469.23951004644942, 143.32531878203673,
    -1025.5289456501509, 31.99058381611772, -1819.6624942238932,
    23.271901759494639, -2853.8225394743986, 138.1198565101991,
    -4099.261352837816, 100.56020151405892, -5565.3805363637839,
    0.84702541282959487, -7277.13941411706, 78.586411795835787,
    -9215.0789475513338, 146.97426274767963, -11362.080892110174,
    41.6777812162796, -13744.502135701281, 15.719471768746104,
    -16368.840333729961, 131.47593403328628, -19206.120348032749,
    110.7898205275151, -22261.520144359198, 3.3688914051172816,
    -25561.928383627914, 67.340599114444259, -29091.332231365828,
    148.98393160798355, -32829.29544761841, 52.113791641431931,
    -36800.065712683892, 9.5045803688707551, -41014.308589067427,
    123.54423323710444, -45443.47867521365, 120.20081518969195,
    -50088.4128660826, 7.5084029200590408, -54977.319333828207,
    56.261575539274567, -60097.994613651055, 149.30874676163725,
    -65427.147957119967, 63.061929950135578, -70986.367907840919,
    4.7681791678185874, -76790.246044114945, 114.50464237859434,
    -82811.314100923424, 128.57974736552094, -89046.048921945883,
    13.171677254544306, -95523.3384388902, 45.600609529734896,
    -102235.06532703183, 147.94134151222596, -109155.61255565878,
    74.273896115989189, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    122.92585708443505, -89.743962404247725, 469.23951004644942,
    -143.32531878203673, 1025.5289456501509, -31.99058381611772,
    1819.6624942238932, -23.271901759494639, 2853.8225394743986,
    -138.1198565101991, 4099.261352837816, -100.56020151405892,
    5565.3805363637839, -0.84702541282959487, 7277.13941411706,
    -78.586411795835787, 9215.0789475513338, -146.97426274767963,
    11362.080892110174, -41.6777812162796, 13744.502135701281,
    -15.719471768746104, 16368.840333729961, -131.47593403328628,
    19206.120348032749, -110.7898205275151, 22261.520144359198,
    -3.3688914051172816, 25561.928383627914, -67.340599114444259,
    29091.332231365828, -148.98393160798355, 32829.29544761841,
    -52.113791641431931, 36800.065712683892, -9.5045803688707551,
    41014.308589067427, -123.54423323710444, 45443.47867521365,
    -120.20081518969195, 50088.4128660826, -7.5084029200590408,
    54977.319333828207, -56.261575539274567, 60097.994613651055,
    -149.30874676163725, 65427.147957119967, -63.061929950135578,
    70986.367907840919, -4.7681791678185874, 76790.246044114945,
    -114.50464237859434, 82811.314100923424, -128.57974736552094,
    89046.048921945883, -13.171677254544306, 95523.3384388902,
    -45.600609529734896, 102235.06532703183, -147.94134151222596,
    109155.61255565878, -74.273896115989189, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -122.92585708443505, 89.743962404247725, -469.23951004644942,
    143.32531878203673, -1025.5289456501509, 31.99058381611772,
    -1819.6624942238932, 23.271901759494639, -2853.8225394743986,
    138.1198565101991, -4099.261352837816, 100.56020151405892,
    -5565.3805363637839, 0.84702541282959487, -7277.13941411706,
    78.586411795835787, -9215.0789475513338, 146.97426274767963,
    -11362.080892110174, 41.6777812162796, -13744.502135701281,
    15.719471768746104, -16368.840333729961, 131.47593403328628,
    -19206.120348032749, 110.7898205275151, -22261.520144359198,
    3.3688914051172816, -25561.928383627914, 67.340599114444259,
    -29091.332231365828, 148.98393160798355, -32829.29544761841,
    52.113791641431931, -36800.065712683892, 9.5045803688707551,
    -41014.308589067427, 123.54423323710444, -45443.47867521365,
    120.20081518969195, -50088.4128660826, 7.5084029200590408,
    -54977.319333828207, 56.261575539274567, -60097.994613651055,
    149.30874676163725, -65427.147957119967, 63.061929950135578,
    -70986.367907840919, 4.7681791678185874, -76790.246044114945,
    114.50464237859434, -82811.314100923424, 128.57974736552094,
    -89046.048921945883, 13.171677254544306, -95523.3384388902,
    45.600609529734896, -102235.06532703183, 147.94134151222596, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 122.92585708443505, -89.743962404247725,
    469.23951004644942, -143.32531878203673, 1025.5289456501509,
    -31.99058381611772, 1819.6624942238932, -23.271901759494639,
    2853.8225394743986, -138.1198565101991, 4099.261352837816,
    -100.56020151405892, 5565.3805363637839, -0.84702541282959487,
    7277.13941411706, -78.586411795835787, 9215.0789475513338,
    -146.97426274767963, 11362.080892110174, -41.6777812162796,
    13744.502135701281, -15.719471768746104, 16368.840333729961,
    -131.47593403328628, 19206.120348032749, -110.7898205275151,
    22261.520144359198, -3.3688914051172816, 25561.928383627914,
    -67.340599114444259, 29091.332231365828, -148.98393160798355,
    32829.29544761841, -52.113791641431931, 36800.065712683892,
    -9.5045803688707551, 41014.308589067427, -123.54423323710444,
    45443.47867521365, -120.20081518969195, 50088.4128660826,
    -7.5084029200590408, 54977.319333828207, -56.261575539274567,
    60097.994613651055, -149.30874676163725, 65427.147957119967,
    -63.061929950135578, 70986.367907840919, -4.7681791678185874,
    76790.246044114945, -114.50464237859434, 82811.314100923424,
    -128.57974736552094, 89046.048921945883, -13.171677254544306,
    95523.3384388902, -45.600609529734896, 102235.06532703183,
    -147.94134151222596, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -122.92585708443505, 89.743962404247725, -469.23951004644942,
    143.32531878203673, -1025.5289456501509, 31.99058381611772,
    -1819.6624942238932, 23.271901759494639, -2853.8225394743986,
    138.1198565101991, -4099.261352837816, 100.56020151405892,
    -5565.3805363637839, 0.84702541282959487, -7277.13941411706,
    78.586411795835787, -9215.0789475513338, 146.97426274767963,
    -11362.080892110174, 41.6777812162796, -13744.502135701281,
    15.719471768746104, -16368.840333729961, 131.47593403328628,
    -19206.120348032749, 110.7898205275151, -22261.520144359198,
    3.3688914051172816, -25561.928383627914, 67.340599114444259,
    -29091.332231365828, 148.98393160798355, -32829.29544761841,
    52.113791641431931, -36800.065712683892, 9.5045803688707551,
    -41014.308589067427, 123.54423323710444, -45443.47867521365,
    120.20081518969195, -50088.4128660826, 7.5084029200590408,
    -54977.319333828207, 56.261575539274567, -60097.994613651055,
    149.30874676163725, -65427.147957119967, 63.061929950135578,
    -70986.367907840919, 4.7681791678185874, -76790.246044114945,
    114.50464237859434, -82811.314100923424, 128.57974736552094,
    -89046.048921945883, 13.171677254544306, -95523.3384388902,
    45.600609529734896, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, 122.92585708443505, -89.743962404247725, 469.23951004644942,
    -143.32531878203673, 1025.5289456501509, -31.99058381611772,
    1819.6624942238932, -23.271901759494639, 2853.8225394743986,
    -138.1198565101991, 4099.261352837816, -100.56020151405892,
    5565.3805363637839, -0.84702541282959487, 7277.13941411706,
    -78.586411795835787, 9215.0789475513338, -146.97426274767963,
    11362.080892110174, -41.6777812162796, 13744.502135701281,
    -15.719471768746104, 16368.840333729961, -131.47593403328628,
    19206.120348032749, -110.7898205275151, 22261.520144359198,
    -3.3688914051172816, 25561.928383627914, -67.340599114444259,
    29091.332231365828, -148.98393160798355, 32829.29544761841,
    -52.113791641431931, 36800.065712683892, -9.5045803688707551,
    41014.308589067427, -123.54423323710444, 45443.47867521365,
    -120.20081518969195, 50088.4128660826, -7.5084029200590408,
    54977.319333828207, -56.261575539274567, 60097.994613651055,
    -149.30874676163725, 65427.147957119967, -63.061929950135578,
    70986.367907840919, -4.7681791678185874, 76790.246044114945,
    -114.50464237859434, 82811.314100923424, -128.57974736552094,
    89046.048921945883, -13.171677254544306, 95523.3384388902,
    -45.600609529734896, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -122.92585708443505, 89.743962404247725, -469.23951004644942,
    143.32531878203673, -1025.5289456501509, 31.99058381611772,
    -1819.6624942238932, 23.271901759494639, -2853.8225394743986,
    138.1198565101991, -4099.261352837816, 100.56020151405892,
    -5565.3805363637839, 0.84702541282959487, -7277.13941411706,
    78.586411795835787, -9215.0789475513338, 146.97426274767963,
    -11362.080892110174, 41.6777812162796, -13744.502135701281,
    15.719471768746104, -16368.840333729961, 131.47593403328628,
    -19206.120348032749, 110.7898205275151, -22261.520144359198,
    3.3688914051172816, -25561.928383627914, 67.340599114444259,
    -29091.332231365828, 148.98393160798355, -32829.29544761841,
    52.113791641431931, -36800.065712683892, 9.5045803688707551,
    -41014.308589067427, 123.54423323710444, -45443.47867521365,
    120.20081518969195, -50088.4128660826, 7.5084029200590408,
    -54977.319333828207, 56.261575539274567, -60097.994613651055,
    149.30874676163725, -65427.147957119967, 63.061929950135578,
    -70986.367907840919, 4.7681791678185874, -76790.246044114945,
    114.50464237859434, -82811.314100923424, 128.57974736552094,
    -89046.048921945883, 13.171677254544306, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 122.92585708443505, -89.743962404247725,
    469.23951004644942, -143.32531878203673, 1025.5289456501509,
    -31.99058381611772, 1819.6624942238932, -23.271901759494639,
    2853.8225394743986, -138.1198565101991, 4099.261352837816,
    -100.56020151405892, 5565.3805363637839, -0.84702541282959487,
    7277.13941411706, -78.586411795835787, 9215.0789475513338,
    -146.97426274767963, 11362.080892110174, -41.6777812162796,
    13744.502135701281, -15.719471768746104, 16368.840333729961,
    -131.47593403328628, 19206.120348032749, -110.7898205275151,
    22261.520144359198, -3.3688914051172816, 25561.928383627914,
    -67.340599114444259, 29091.332231365828, -148.98393160798355,
    32829.29544761841, -52.113791641431931, 36800.065712683892,
    -9.5045803688707551, 41014.308589067427, -123.54423323710444,
    45443.47867521365, -120.20081518969195, 50088.4128660826,
    -7.5084029200590408, 54977.319333828207, -56.261575539274567,
    60097.994613651055, -149.30874676163725, 65427.147957119967,
    -63.061929950135578, 70986.367907840919, -4.7681791678185874,
    76790.246044114945, -114.50464237859434, 82811.314100923424,
    -128.57974736552094, 89046.048921945883, -13.171677254544306, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -122.92585708443505, 89.743962404247725, -469.23951004644942,
    143.32531878203673, -1025.5289456501509, 31.99058381611772,
    -1819.6624942238932, 23.271901759494639, -2853.8225394743986,
    138.1198565101991, -4099.261352837816, 100.56020151405892,
    -5565.3805363637839, 0.84702541282959487, -7277.13941411706,
    78.586411795835787, -9215.0789475513338, 146.97426274767963,
    -11362.080892110174, 41.6777812162796, -13744.502135701281,
    15.719471768746104, -16368.840333729961, 131.47593403328628,
    -19206.120348032749, 110.7898205275151, -22261.520144359198,
    3.3688914051172816, -25561.928383627914, 67.340599114444259,
    -29091.332231365828, 148.98393160798355, -32829.29544761841,
    52.113791641431931, -36800.065712683892, 9.5045803688707551,
    -41014.308589067427, 123.54423323710444, -45443.47867521365,
    120.20081518969195, -50088.4128660826, 7.5084029200590408,
    -54977.319333828207, 56.261575539274567, -60097.994613651055,
    149.30874676163725, -65427.147957119967, 63.061929950135578,
    -70986.367907840919, 4.7681791678185874, -76790.246044114945,
    114.50464237859434, -82811.314100923424, 128.57974736552094, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    122.92585708443505, -89.743962404247725, 469.23951004644942,
    -143.32531878203673, 1025.5289456501509, -31.99058381611772,
    1819.6624942238932, -23.271901759494639, 2853.8225394743986,
    -138.1198565101991, 4099.261352837816, -100.56020151405892,
    5565.3805363637839, -0.84702541282959487, 7277.13941411706,
    -78.586411795835787, 9215.0789475513338, -146.97426274767963,
    11362.080892110174, -41.6777812162796, 13744.502135701281,
    -15.719471768746104, 16368.840333729961, -131.47593403328628,
    19206.120348032749, -110.7898205275151, 22261.520144359198,
    -3.3688914051172816, 25561.928383627914, -67.340599114444259,
    29091.332231365828, -148.98393160798355, 32829.29544761841,
    -52.113791641431931, 36800.065712683892, -9.5045803688707551,
    41014.308589067427, -123.54423323710444, 45443.47867521365,
    -120.20081518969195, 50088.4128660826, -7.5084029200590408,
    54977.319333828207, -56.261575539274567, 60097.994613651055,
    -149.30874676163725, 65427.147957119967, -63.061929950135578,
    70986.367907840919, -4.7681791678185874, 76790.246044114945,
    -114.50464237859434, 82811.314100923424, -128.57974736552094, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -122.92585708443505, 89.743962404247725, -469.23951004644942,
    143.32531878203673, -1025.5289456501509, 31.99058381611772,
    -1819.6624942238932, 23.271901759494639, -2853.8225394743986,
    138.1198565101991, -4099.261352837816, 100.56020151405892,
    -5565.3805363637839, 0.84702541282959487, -7277.13941411706,
    78.586411795835787, -9215.0789475513338, 146.97426274767963,
    -11362.080892110174, 41.6777812162796, -13744.502135701281,
    15.719471768746104, -16368.840333729961, 131.47593403328628,
    -19206.120348032749, 110.7898205275151, -22261.520144359198,
    3.3688914051172816, -25561.928383627914, 67.340599114444259,
    -29091.332231365828, 148.98393160798355, -32829.29544761841,
    52.113791641431931, -36800.065712683892, 9.5045803688707551,
    -41014.308589067427, 123.54423323710444, -45443.47867521365,
    120.20081518969195, -50088.4128660826, 7.5084029200590408,
    -54977.319333828207, 56.261575539274567, -60097.994613651055,
    149.30874676163725, -65427.147957119967, 63.061929950135578,
    -70986.367907840919, 4.7681791678185874, -76790.246044114945,
    114.50464237859434, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 122.92585708443505,
    -89.743962404247725, 469.23951004644942, -143.32531878203673,
    1025.5289456501509, -31.99058381611772, 1819.6624942238932,
    -23.271901759494639, 2853.8225394743986, -138.1198565101991,
    4099.261352837816, -100.56020151405892, 5565.3805363637839,
    -0.84702541282959487, 7277.13941411706, -78.586411795835787,
    9215.0789475513338, -146.97426274767963, 11362.080892110174,
    -41.6777812162796, 13744.502135701281, -15.719471768746104,
    16368.840333729961, -131.47593403328628, 19206.120348032749,
    -110.7898205275151, 22261.520144359198, -3.3688914051172816,
    25561.928383627914, -67.340599114444259, 29091.332231365828,
    -148.98393160798355, 32829.29544761841, -52.113791641431931,
    36800.065712683892, -9.5045803688707551, 41014.308589067427,
    -123.54423323710444, 45443.47867521365, -120.20081518969195,
    50088.4128660826, -7.5084029200590408, 54977.319333828207,
    -56.261575539274567, 60097.994613651055, -149.30874676163725,
    65427.147957119967, -63.061929950135578, 70986.367907840919,
    -4.7681791678185874, 76790.246044114945, -114.50464237859434, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -122.92585708443505, 89.743962404247725, -469.23951004644942,
    143.32531878203673, -1025.5289456501509, 31.99058381611772,
    -1819.6624942238932, 23.271901759494639, -2853.8225394743986,
    138.1198565101991, -4099.261352837816, 100.56020151405892,
    -5565.3805363637839, 0.84702541282959487, -7277.13941411706,
    78.586411795835787, -9215.0789475513338, 146.97426274767963,
    -11362.080892110174, 41.6777812162796, -13744.502135701281,
    15.719471768746104, -16368.840333729961, 131.47593403328628,
    -19206.120348032749, 110.7898205275151, -22261.520144359198,
    3.3688914051172816, -25561.928383627914, 67.340599114444259,
    -29091.332231365828, 148.98393160798355, -32829.29544761841,
    52.113791641431931, -36800.065712683892, 9.5045803688707551,
    -41014.308589067427, 123.54423323710444, -45443.47867521365,
    120.20081518969195, -50088.4128660826, 7.5084029200590408,
    -54977.319333828207, 56.261575539274567, -60097.994613651055,
    149.30874676163725, -65427.147957119967, 63.061929950135578,
    -70986.367907840919, 4.7681791678185874, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    122.92585708443505, -89.743962404247725, 469.23951004644942,
    -143.32531878203673, 1025.5289456501509, -31.99058381611772,
    1819.6624942238932, -23.271901759494639, 2853.8225394743986,
    -138.1198565101991, 4099.261352837816, -100.56020151405892,
    5565.3805363637839, -0.84702541282959487, 7277.13941411706,
    -78.586411795835787, 9215.0789475513338, -146.97426274767963,
    11362.080892110174, -41.6777812162796, 13744.502135701281,
    -15.719471768746104, 16368.840333729961, -131.47593403328628,
    19206.120348032749, -110.7898205275151, 22261.520144359198,
    -3.3688914051172816, 25561.928383627914, -67.340599114444259,
    29091.332231365828, -148.98393160798355, 32829.29544761841,
    -52.113791641431931, 36800.065712683892, -9.5045803688707551,
    41014.308589067427, -123.54423323710444, 45443.47867521365,
    -120.20081518969195, 50088.4128660826, -7.5084029200590408,
    54977.319333828207, -56.261575539274567, 60097.994613651055,
    -149.30874676163725, 65427.147957119967, -63.061929950135578,
    70986.367907840919, -4.7681791678185874, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -1.0, -1.0, -1.0, -1.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, 1.0, 1.0, 1.0, 1.0, 1.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -0.0, -0.0, -0.0, -0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -122.92585708443505, 89.743962404247725, -469.23951004644942,
    143.32531878203673, -1025.5289456501509, 31.99058381611772,
    -1819.6624942238932, 23.271901759494639, -2853.8225394743986,
    138.1198565101991, -4099.261352837816, 100.56020151405892,
    -5565.3805363637839, 0.84702541282959487, -7277.13941411706,
    78.586411795835787, -9215.0789475513338, 146.97426274767963,
    -11362.080892110174, 41.6777812162796, -13744.502135701281,
    15.719471768746104, -16368.840333729961, 131.47593403328628,
    -19206.120348032749, 110.7898205275151, -22261.520144359198,
    3.3688914051172816, -25561.928383627914, 67.340599114444259,
    -29091.332231365828, 148.98393160798355, -32829.29544761841,
    52.113791641431931, -36800.065712683892, 9.5045803688707551,
    -41014.308589067427, 123.54423323710444, -45443.47867521365,
    120.20081518969195, -50088.4128660826, 7.5084029200590408,
    -54977.319333828207, 56.261575539274567, -60097.994613651055,
    149.30874676163725, -65427.147957119967, 63.061929950135578, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, 122.92585708443505, -89.743962404247725,
    469.23951004644942, -143.32531878203673, 1025.5289456501509,
    -31.99058381611772, 1819.6624942238932, -23.271901759494639,
    2853.8225394743986, -138.1198565101991, 4099.261352837816,
    -100.56020151405892, 5565.3805363637839, -0.84702541282959487,
    7277.13941411706, -78.586411795835787, 9215.0789475513338,
    -146.97426274767963, 11362.080892110174, -41.6777812162796,
    13744.502135701281, -15.719471768746104, 16368.840333729961,
    -131.47593403328628, 19206.120348032749, -110.7898205275151,
    22261.520144359198, -3.3688914051172816, 25561.928383627914,
    -67.340599114444259, 29091.332231365828, -148.98393160798355,
    32829.29544761841, -52.113791641431931, 36800.065712683892,
    -9.5045803688707551, 41014.308589067427, -123.54423323710444,
    45443.47867521365, -120.20081518969195, 50088.4128660826,
    -7.5084029200590408, 54977.319333828207, -56.261575539274567,
    60097.994613651055, -149.30874676163725, 65427.147957119967,
    -63.061929950135578, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -1.0, -1.0, -1.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, 1.0, 1.0, 1.0, 1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -1.0, -0.0, -0.0, -0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0,
    0.0, 0.0, 0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -122.92585708443505, 89.743962404247725, -469.23951004644942,
    143.32531878203673, -1025.5289456501509, 31.99058381611772,
    -1819.6624942238932, 23.271901759494639, -2853.8225394743986,
    138.1198565101991, -4099.261352837816, 100.56020151405892,
    -5565.3805363637839, 0.84702541282959487, -7277.13941411706,
    78.586411795835787, -9215.0789475513338, 146.97426274767963,
    -11362.080892110174, 41.6777812162796, -13744.502135701281,
    15.719471768746104, -16368.840333729961, 131.47593403328628,
    -19206.120348032749, 110.7898205275151, -22261.520144359198,
    3.3688914051172816, -25561.928383627914, 67.340599114444259,
    -29091.332231365828, 148.98393160798355, -32829.29544761841,
    52.113791641431931, -36800.065712683892, 9.5045803688707551,
    -41014.308589067427, 123.54423323710444, -45443.47867521365,
    120.20081518969195, -50088.4128660826, 7.5084029200590408,
    -54977.319333828207, 56.261575539274567, -60097.994613651055,
    149.30874676163725, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    122.92585708443505, -89.743962404247725, 469.23951004644942,
    -143.32531878203673, 1025.5289456501509, -31.99058381611772,
    1819.6624942238932, -23.271901759494639, 2853.8225394743986,
    -138.1198565101991, 4099.261352837816, -100.56020151405892,
    5565.3805363637839, -0.84702541282959487, 7277.13941411706,
    -78.586411795835787, 9215.0789475513338, -146.97426274767963,
    11362.080892110174, -41.6777812162796, 13744.502135701281,
    -15.719471768746104, 16368.840333729961, -131.47593403328628,
    19206.120348032749, -110.7898205275151, 22261.520144359198,
    -3.3688914051172816, 25561.928383627914, -67.340599114444259,
    29091.332231365828, -148.98393160798355, 32829.29544761841,
    -52.113791641431931, 36800.065712683892, -9.5045803688707551,
    41014.308589067427, -123.54423323710444, 45443.47867521365,
    -120.20081518969195, 50088.4128660826, -7.5084029200590408,
    54977.319333828207, -56.261575539274567, 60097.994613651055,
    -149.30874676163725, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -1.0, -1.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, 1.0, 1.0, 1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -1.0, -0.0, -0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 0.0, 0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -122.92585708443505, 89.743962404247725, -469.23951004644942,
    143.32531878203673, -1025.5289456501509, 31.99058381611772,
    -1819.6624942238932, 23.271901759494639, -2853.8225394743986,
    138.1198565101991, -4099.261352837816, 100.56020151405892,
    -5565.3805363637839, 0.84702541282959487, -7277.13941411706,
    78.586411795835787, -9215.0789475513338, 146.97426274767963,
    -11362.080892110174, 41.6777812162796, -13744.502135701281,
    15.719471768746104, -16368.840333729961, 131.47593403328628,
    -19206.120348032749, 110.7898205275151, -22261.520144359198,
    3.3688914051172816, -25561.928383627914, 67.340599114444259,
    -29091.332231365828, 148.98393160798355, -32829.29544761841,
    52.113791641431931, -36800.065712683892, 9.5045803688707551,
    -41014.308589067427, 123.54423323710444, -45443.47867521365,
    120.20081518969195, -50088.4128660826, 7.5084029200590408,
    -54977.319333828207, 56.261575539274567, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, 122.92585708443505, -89.743962404247725,
    469.23951004644942, -143.32531878203673, 1025.5289456501509,
    -31.99058381611772, 1819.6624942238932, -23.271901759494639,
    2853.8225394743986, -138.1198565101991, 4099.261352837816,
    -100.56020151405892, 5565.3805363637839, -0.84702541282959487,
    7277.13941411706, -78.586411795835787, 9215.0789475513338,
    -146.97426274767963, 11362.080892110174, -41.6777812162796,
    13744.502135701281, -15.719471768746104, 16368.840333729961,
    -131.47593403328628, 19206.120348032749, -110.7898205275151,
    22261.520144359198, -3.3688914051172816, 25561.928383627914,
    -67.340599114444259, 29091.332231365828, -148.98393160798355,
    32829.29544761841, -52.113791641431931, 36800.065712683892,
    -9.5045803688707551, 41014.308589067427, -123.54423323710444,
    45443.47867521365, -120.20081518969195, 50088.4128660826,
    -7.5084029200590408, 54977.319333828207, -56.261575539274567, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -1.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 1.0, 1.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0,
    -0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -122.92585708443505, 89.743962404247725, -469.23951004644942,
    143.32531878203673, -1025.5289456501509, 31.99058381611772,
    -1819.6624942238932, 23.271901759494639, -2853.8225394743986,
    138.1198565101991, -4099.261352837816, 100.56020151405892,
    -5565.3805363637839, 0.84702541282959487, -7277.13941411706,
    78.586411795835787, -9215.0789475513338, 146.97426274767963,
    -11362.080892110174, 41.6777812162796, -13744.502135701281,
    15.719471768746104, -16368.840333729961, 131.47593403328628,
    -19206.120348032749, 110.7898205275151, -22261.520144359198,
    3.3688914051172816, -25561.928383627914, 67.340599114444259,
    -29091.332231365828, 148.98393160798355, -32829.29544761841,
    52.113791641431931, -36800.065712683892, 9.5045803688707551,
    -41014.308589067427, 123.54423323710444, -45443.47867521365,
    120.20081518969195, -50088.4128660826, 7.5084029200590408, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    122.92585708443505, -89.743962404247725, 469.23951004644942,
    -143.32531878203673, 1025.5289456501509, -31.99058381611772,
    1819.6624942238932, -23.271901759494639, 2853.8225394743986,
    -138.1198565101991, 4099.261352837816, -100.56020151405892,
    5565.3805363637839, -0.84702541282959487, 7277.13941411706,
    -78.586411795835787, 9215.0789475513338, -146.97426274767963,
    11362.080892110174, -41.6777812162796, 13744.502135701281,
    -15.719471768746104, 16368.840333729961, -131.47593403328628,
    19206.120348032749, -110.7898205275151, 22261.520144359198,
    -3.3688914051172816, 25561.928383627914, -67.340599114444259,
    29091.332231365828, -148.98393160798355, 32829.29544761841,
    -52.113791641431931, 36800.065712683892, -9.5045803688707551,
    41014.308589067427, -123.54423323710444, 45443.47867521365,
    -120.20081518969195, 50088.4128660826, -7.5084029200590408, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 1.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0 };

  static const real_T b_A[1681] = { 1.7033679484849182E-7, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -1.5833163662321911E-5, 1.6507808629411345E-5,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.00035884485039649653,
    -0.00074237089200969843, 0.00038424433012088896, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, -0.00031636880267271842, 0.0011347957299664884,
    -0.0013335499390621987, 0.00051550982942572085, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 7.5148906799627745E-6, -0.00033517790865665885, 0.0011505122977449346,
    -0.0013391038714673622, 0.00051666143802967836, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    -0.00082068227176963966, 0.002268148411111671, -0.0027227686438632171,
    0.0029549867902216144, -0.0027245064598565949, 0.0010452412449160231, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.00091767717060216108, -0.003672656011531876,
    0.0060082266322380338, -0.00643751149387515, 0.0063958023073637967,
    -0.0046672725193179117, 0.0014561228823706924, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    -0.00029416201056793958, 0.0019276574361793536, -0.0051634977645518389,
    0.007588557626677467, -0.0079619683917161212, 0.0074200581213650649,
    -0.0050102293987804693, 0.0014939780696908574, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    -7.4380703403881748E-5, -3.2833532693508365E-5, 0.0015267614474524889,
    -0.004726601384463602, 0.0071708458925449116, -0.0076813775606975445,
    0.0073270081505527112, -0.0050089306120790107, 0.0014999274696224974, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, -0.00018563488436246496, 0.00057409390216153723, -0.0010152947674872499,
    0.0025896011091159775, -0.0057697051620618969, 0.0079136170045813678,
    -0.00797377680345909, 0.0073987165492197535, -0.0050483025948286388,
    0.0015171367903991117, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.00037596097112555839, -0.0015048710078568136,
    0.0025877072205988416, -0.0032387974320874646, 0.0048950704847291427,
    -0.0076347047194233828, 0.00895941501662382, -0.0085612450064349241,
    0.0078434626463884452, -0.0052976811328991485, 0.0015761549778299004, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    -0.00020402588547043494, 0.0010992293007862561, -0.0026242615165546087,
    0.00384207241642267, -0.0045763148782274575, 0.0060715401968000704,
    -0.0084355462355737224, 0.0095289022958627515, -0.00903834813269586,
    0.0081591671886791523, -0.0054169517993193465, 0.0015950331953176015, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    4.0139342985889219E-5, -0.00034703988174841869, 0.0013216379042234273,
    -0.0028734602844134255, 0.0041085746112952534, -0.0048170707447599869,
    0.0062444517831021333, -0.008561799109641487, 0.0096359808871266384,
    -0.0091184652633165136, 0.00820315040326633, -0.0054363188736698074,
    0.0016007519846104076, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, -0.00010529886019000078, 0.00041587323203983313,
    -0.00093508669118043766, 0.0019890404903064006, -0.0035931382412355811,
    0.0047601743618059045, -0.0052942780932087319, 0.0066146522341752412,
    -0.0088899162874918666, 0.0098816464369153416, -0.0092459767798843771,
    0.0082529485893143434, -0.0054579534891467914, 0.0016078785989361544, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.00018907578780926761, -0.00078119665011487551, 0.0014779205677319621,
    -0.0021500516725777058, 0.0033143547692030969, -0.0048144201046225743,
    0.0056820469948405845, -0.0060378641131094545, 0.0073044614998051191,
    -0.0094521467090438356, 0.010238471479370355, -0.0094529552798704,
    0.0083833347100006669, -0.0055251799434595083, 0.001624744766802711, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.00013995470631013692,
    0.00069083980112346439, -0.0015737385003653094, 0.0023916803352806455,
    -0.0031571685776124203, 0.0042600866969589269, -0.0055525365678028094,
    0.0062982367115611924, -0.0066274841750293368, 0.0078182612411714768,
    -0.00982717311025554, 0.010507223973551747, -0.0096598872960095318,
    0.0085180392359016817, -0.0055828236366744647, 0.0016370374281528548, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 7.0910447324870149E-5,
    -0.00039473979951420925, 0.0010944338536459217, -0.0020398288889641484,
    0.0029058787194037477, -0.0036433862645288461, 0.00464535993725935,
    -0.0058769624660253714, 0.0066084200559208524, -0.00690357470992344,
    0.0080314595207294556, -0.0099859515929368852, 0.010628237242742845,
    -0.0097415005132206935, 0.0085620448791245852, -0.0056038320560141616,
    0.0016437187366906175, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    -8.2749048984989964E-5, 0.00036868490661799881, -0.00086795497540828181,
    0.0016437113237207717, -0.0026488803712087857, 0.0034859909186746585,
    -0.0041097051194210954, 0.0050451036155136223, -0.0062641184363519432,
    0.0069587629248197514, -0.0071839949472762774, 0.00825385285071932,
    -0.010169211372800612, 0.010766957961350672, -0.00982724511527916,
    0.0086060442216044919, -0.0056245257836058538, 0.001650002857968296, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.00011460892412020687,
    -0.00049563570498571913, 0.0010264181263418125, -0.0016345202889957386,
    0.0024975816401809439, -0.0034673708924763645, 0.0041513029808495552,
    -0.004687663372905557, 0.0056110528427536195, -0.00678342086324463,
    0.0073844238778275548, -0.0075344289443806363, 0.0085574130617049691,
    -0.010415309155289935, 0.010939873121485946, -0.00993512680722452,
    0.0086676901688639372, -0.0056546792257509233, 0.0016585656021018281, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.00010047133044494287,
    0.00047684038459451679, -0.0010736957243807504, 0.0017025107611469603,
    -0.0023911831121872671, 0.0032273999594703245, -0.0040660424887510411,
    0.0046769807074565715, -0.0052082175810866209, 0.0060951219879084636,
    -0.0071866140417881337, 0.0077244423765129994, -0.00784167374557626,
    0.0088205253817529652, -0.010611029728889269, 0.011077757446930766,
    -0.010037300892105297, 0.0087387646855067135, -0.0056928604679927124,
    0.0016695869438935508, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 7.19281173479124E-5,
    -0.00036013229685474368, 0.00089210308096118577, -0.0015605093453745821,
    0.0022483670746609547, -0.0029199551166794696, 0.0036649824965525588,
    -0.004453119410236823, 0.0050612787072806913, -0.0055686084305792451,
    0.0064012915986167611, -0.0074492987397237823, 0.0079628297964172163,
    -0.008050495147854872, 0.0089876965017755429, -0.01073922030741895,
    0.011174776109930911, -0.010101593955560297, 0.0087732311642047169,
    -0.005710346224083767, 0.0016756961590273271, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    -7.0828655964906152E-5, 0.00032785988045678008, -0.00077012357276325691,
    0.0013737953838885983, -0.0021017490727745164, 0.0027745872069626413,
    -0.0033584166473701665, 0.0040553701263472573, -0.0048420982283444549,
    0.0054284860347672652, -0.0058847288569740738, 0.0066763126385999561,
    -0.0077012087356044256, 0.0081872583610303647, -0.0082371137847094423,
    0.0091379970120226278, -0.010858178482240657, 0.011262413418255292,
    -0.010157290272054047, 0.00880479322815439, -0.0057281725460461216,
    0.001681993590514484, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 8.13994088102986E-5,
    -0.00036534169215963726, 0.00080083436508689935, -0.0013277282955286805,
    0.0020023327515094475, -0.0027159254890938814, 0.003291198064632453,
    -0.0038228459926677705, 0.0045206811117960545, -0.0052849664131580792,
    0.0058160945599324406, -0.0062286699094686983, 0.006995887159715327,
    -0.00799097038612002, 0.0084375269821223686, -0.0084506188363820678,
    0.0093169845117738771, -0.011000559364505147, 0.011372967702243695,
    -0.010239441286507969, 0.0088574480980247432, -0.0057560151634227594,
    0.0016907675164053197, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -7.6748246312057669E-5,
    0.00035903050127630072, -0.00081110660654522379, 0.001326499370934271,
    -0.0019208767152293338, 0.0025824604800072527, -0.0032039460330392016,
    0.003730139838458301, -0.0042638067560365972, 0.0049412974206454428,
    -0.0056524866738739384, 0.0061419120532004261, -0.0065340415699865284,
    0.0072752386776338595, -0.0082300488642520486, 0.0086390438161175163,
    -0.0086252097911825882, 0.0094634599143619651, -0.0111093989399671,
    0.01144443399957781, -0.010284375436578437, 0.0088893726160316437,
    -0.0057800594281510213, 0.0017003510734104582, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 6.4725804744111763E-5,
    -0.00031114354003724084, 0.00073614261618656376, -0.0012570825188097888,
    0.0018311686350728697, -0.0024166957883262996, 0.0030028456426429324,
    -0.0035849369650962164, 0.0041147010700016027, -0.0046332902700654535,
    0.0052682554352714642, -0.005946305706083713, 0.00642025647627536,
    -0.0067924896317070544, 0.0075022101533664667, -0.0084274598390745963,
    0.0088151189113256923, -0.0087794576748790459, 0.0095891392781923355,
    -0.011206054338744937, 0.01151901035371948, -0.010338481811155265,
    0.0089231364162988581, -0.0057992577668837617, 0.0017071578224541414, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    -6.1665453600011637E-5, 0.00028816926832313255, -0.000671016231559678,
    0.0011623346212503766, -0.0017400451317220616, 0.00230677212213,
    -0.0028215747734936618, 0.0033711388604641284, -0.0039574935712662707,
    0.004473979628122772, -0.0049532678485286691, 0.0055575713472510906,
    -0.0062215716828980094, 0.0066777086429809056, -0.0070214925464343247,
    0.0077039120726533064, -0.0086089723035137466, 0.00897700318023039,
    -0.008916609494144313, 0.0096995847713149137, -0.011294049361196639,
    0.011588358404980818, -0.010385021771777667, 0.008948595501923319,
    -0.0058146304573305505, 0.0017135889648455507, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 6.4195400029502922E-5,
    -0.0002944473108922948, 0.00066361265412342735, -0.0011164632383179128,
    0.001667809396180801, -0.0022388769299738548, 0.0027333464291192334,
    -0.0032114273375455811, 0.003766237782638948, -0.0043394578458180958,
    0.0048166105593068533, -0.0052659019200826246, 0.0058560807690087565,
    -0.0065012823148471073, 0.0069298066117413071, -0.0072487113328526236,
    0.0079101073618278624, -0.0087917512399790267, 0.00913657446189745,
    -0.00905652193727832, 0.0098157945992540588, -0.011380215087114419,
    0.011652961199388658, -0.010439799461876346, 0.008994688955492873,
    -0.0058470320176971088, 0.0017255031434703226, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -6.2041393662820967E-5,
    0.00028918614443411872, -0.00065738493521644878, 0.0010943859806847504,
    -0.0016056294246422546, 0.002151023544832343, -0.00265253726166196,
    0.0031117287767251866, -0.0035954186507724576, 0.0041381634225062065,
    -0.004673448039813244, 0.0051215093124228478, -0.0055579532770690986,
    0.0061311534768293133, -0.0067493972232840222, 0.0071528037944454522,
    -0.0074526511534822376, 0.0080942812174259939, -0.00895268194835523,
    0.00927459776518718, -0.0091734609131565621, 0.0099113349282538,
    -0.01145375071557491, 0.011705146459754281, -0.010470287374014765,
    0.0090122133496855824, -0.0058627567957089018, 0.0017334418516285041, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    5.655793585899276E-5, -0.00026725718765353916, 0.00062056418725817781,
    -0.0010512965132686313, 0.001542422757508108, -0.00204928497786871,
    0.0025322911229352309, -0.0030025761827459493, 0.003467884400326738,
    -0.0039416330422075031, 0.00445070972485201, -0.0049603388436040789,
    0.0053978088411742245, -0.0058199774403136523, 0.0063693769466094015,
    -0.00696533137897557, 0.0073526771208118494, -0.0076361700307548495,
    0.0082571475332753833, -0.00909449184396255, 0.0093988066893733891,
    -0.00928117456802138, 0.0099991957622173784, -0.011519717155679069,
    0.011753241261614804, -0.01050419724745132, 0.009036461062343364,
    -0.0058813797370444358, 0.001741369247968254, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -5.4007971723668496E-5, 0.0002527107959542474,
    -0.000584563764553605, 0.00099868962841066539, -0.0014824992016919888,
    0.0019711391910674126, -0.0024201361850594945, 0.002874794603768395,
    -0.0033524237516833985, 0.0038099857324254203, -0.0042532544762624372,
    0.0047391813474712404, -0.0052401781600927592, 0.00566599819506692,
    -0.0060672358025989975, 0.0065963281835691237, -0.0071781552183233883,
    0.0075524676886310248, -0.00781859522561691, 0.0084195303157738564,
    -0.009240248936173593, 0.009532807205764094, -0.0094004762574994329,
    0.010095569643773167, -0.011595825035250321, 0.011822875853360993,
    -0.010565363432043172, 0.0090783340730528871, -0.0059066877309217431,
    0.0017510969923467835, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    5.3748486650398786E-5, -0.00024912689322771712, 0.00056808513999669812,
    -0.000959940580653119, 0.0014261367747588568, -0.001906496401638029,
    0.0023366720003021981, -0.0027567918416787711, 0.0032178989502782765,
    -0.0036866836462044216, 0.0041131063762818321, -0.0045329684723594494,
    0.0050094121128364576, -0.0054971646365461957, 0.00590129997252128,
    -0.0062828052153812292, 0.0067971401230926829, -0.0073629586670515687,
    0.00771862512125407, -0.0079675135733428219, 0.008552315575946115,
    -0.0093547244404592958, 0.009629006368472335, -0.0094821986881222422,
    0.010161986748028219, -0.011640372355942829, 0.011846896806715036,
    -0.010580076202652383, 0.0090984861567144238, -0.0059331078136535742,
    0.0017641847747343405, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    -5.2303880672036263E-5, 0.0002437866913533666, -0.00055678659864330429,
    0.00093512303246897027, -0.0013788737522410421, 0.0018431553287497711,
    -0.0022680926212477665, 0.0026715020585717105, -0.0030992261262394257,
    0.0035531509285540333, -0.0039930369629672105, 0.0043980014747687915,
    -0.0048100122438323178, 0.0052750504342611781, -0.0057430814853047215,
    0.0061292349375397844, -0.0064977687786463506, 0.0069981912778222053,
    -0.007547277798166694, 0.00788710549318426, -0.00812160575032916,
    0.0086907365103013577, -0.0094769878264430885, 0.00973737134545319,
    -0.0095765551974306817, 0.010238419282165963, -0.011699335271653143,
    0.011895113695700591, -0.010617190990605575, 0.0091241124089362219,
    -0.0059528616327361745, 0.0017731953338878531, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 4.946971038479136E-5, -0.00023208186053029836,
    0.00053495133865486119, -0.000904352084603272, 0.0013320855586572092,
    -0.0017743884163240347, 0.0021865983641603855, -0.0025865429667640983,
    0.0029975031587408693, -0.0034188027456579732, 0.0038456957329630623,
    -0.0042655828316335428, 0.0046635375566146933, -0.0050651872088999673,
    0.0055117967448884793, -0.0059630103635382918, 0.00633742072805794,
    -0.0066934154074142164, 0.0071780860200669908, -0.007712047888862943,
    0.0080390048009686514, -0.008259887552219217, 0.0088135354916204691,
    -0.0095855006164791822, 0.0098337125805675191, -0.00965884675292011,
    0.010303633420865474, -0.011750393605386423, 0.011936999893684264,
    -0.01064555059123082, 0.0091408469182579673, -0.0059687226689007404,
    0.0017818995412863404, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    -4.7568579445071985E-5, 0.00022245963040895845, -0.00051260450664180788,
    0.0008703860237531428, -0.0012881407788636644, 0.0017155540475879312,
    -0.0021088720511446067, 0.002497946785626507, -0.0029060596165822786,
    0.0033119678591528477, -0.0037083701761146605, 0.0041168212627829505,
    -0.0045307993963833422, 0.00492010750888078, -0.0053053230091730354,
    0.0057362606787168275, -0.0061766528815672978, 0.00654077042491396,
    -0.006883580547291465, 0.0073535571491688189, -0.0078744207385206925,
    0.0081909952687715427, -0.0084010612826066356, 0.0089395202329445936,
    -0.00969542155104671, 0.00993457276036695, -0.0097536139737730027,
    0.010381226906562324, -0.01180420282709225, 0.011984498129494115,
    -0.010700026297365384, 0.0091948616434439009, -0.006010677002357411,
    0.0017986669624236833, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    4.657414724184663E-5, -0.00021685553402133557, 0.00049672466900080206,
    -0.00084014245942672431, 0.0012446449831977537, -0.0016613107579320622,
    0.0020399828895468581, -0.0024099999317614882, 0.0028064070256098189,
    -0.0032087595189962187, 0.0035895125823589866, -0.0039672892249332931,
    0.0043693302128531139, -0.00477388651190721, 0.0051462125956315769,
    -0.0055157348630508344, 0.0059356753347984594, -0.0063646874738165268,
    0.006714577297582896, -0.0070431656997764856, 0.007500681251790201,
    -0.0080093065299736352, 0.0083125964983913024, -0.0085090566762912514,
    0.0090345521563787931, -0.00977796074093288, 0.010004272794197506,
    -0.0098098161258269537, 0.010424065928755747, -0.011834685050379226,
    0.012002749855788156, -0.010704488117615518, 0.0091991322515862436,
    -0.0060282365773961883, 0.0018107955709295487, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    -4.5352361315182948E-5, 0.00021152564072101688, -0.00048442088915919961,
    0.000816810467968771, -0.0012065051794792586, 0.0016108497273228512,
    -0.0019809923406319467, 0.0023378536153098373, -0.0027158528342076703,
    0.0031075098934158669, -0.0034862650212259833, 0.0038498021041488764,
    -0.0042222155576122546, 0.0046158918067824121, -0.005004771964967453,
    0.005362813796851322, -0.0057225682695126387, 0.0061321282106339917,
    -0.0065480480081762911, 0.0068852635978060009, -0.0072028471643266661,
    0.0076488867259085743, -0.0081450103074818068, 0.0084366302000473247,
    -0.0086221998125658918, 0.0091353880161482211, -0.0098656752427245236,
    0.010081280011090274, -0.0098774090046927342, 0.01047830413097545,
    -0.011873181063161114, 0.012031844307339126, -0.010728787020444932,
    0.009222400499099925, -0.006052467665873351, 0.0018227887033921235, 0.0, 0.0,
    0.0, 0.0, 0.0, 4.3729628335887119E-5, -0.0002045517753347784,
    0.00047022193876319917, -0.00079468469272574377, 0.0011728364944369959,
    -0.0015636982045473694, 0.001924532966386032, -0.0022749041393715229,
    0.0026407086160101941, -0.0030154044897591904, 0.0033855741690124253,
    -0.0037490139178972311, 0.0041087135579790796, -0.0044743323729439007,
    0.0048540582386250057, -0.0052304470677822972, 0.0055805582913061374,
    -0.0059316130264204662, 0.0063294908580962747, -0.0067343942831042973,
    0.00706285415987047, -0.0073708714534918753, 0.0078052352389687257,
    -0.0082909482972504736, 0.0085748298567777676, -0.0087507620416461991,
    0.0092502854052793782, -0.00996973737736196, 0.010181195526697365,
    -0.0099692057204669917, 0.010550646421274778, -0.011931394137235875,
    0.01209525518455701, -0.010790845459496223, 0.00926600994897149,
    -0.0060827056188062622, 0.0018366034067595629, 0.0, 0.0, 0.0, 0.0,
    -4.22039703785732E-5, 0.00019724218645540719, -0.00045359286182725854,
    0.00076819007436003221, -0.0011357878475384046, 0.0015139010986030084,
    -0.0018615768632017412, 0.0022021772782014359, -0.0025600438959706116,
    0.0029215601787955926, -0.0032744213545927553, 0.0036285916398973478,
    -0.003987065745614608, 0.00433917419661413, -0.0046904087343009413,
    0.0050567706494312305, -0.005423949510330206, 0.00576472966514003,
    -0.0061040638506065616, 0.0064898826866614462, -0.0068839721978533374,
    0.0072023485664765678, -0.0074999788292441976, 0.0079228704065346,
    -0.0083965352728686358, 0.0086699756886050843, -0.0088372168124744837,
    0.0093257479139198622, -0.010030710085774604, 0.0102309860512989,
    -0.010014219529381108, 0.010586258866908312, -0.011946331496958033,
    0.012095784636131767, -0.010796473445682006, 0.009293486735082809,
    -0.0061256250027687635, 0.0018589046419136856, 0.0, 0.0, 0.0,
    4.11979287861466E-5, -0.00019217349457521966, 0.00044089186638163284,
    -0.0007457141730180597, 0.0011032878745628409, -0.0014718580761233378,
    0.0018088561905125404, -0.0021377459724243241, 0.0024866053001832387,
    -0.0028412612225790024, 0.0031824547352322439, -0.0035206896685522153,
    0.0038710000549351665, -0.0042230220385988306, 0.0045620382312763184,
    -0.0049012432558202656, 0.0052596662371318867, -0.0056186749655284191,
    0.0059488762131125333, -0.0062774877751936324, 0.0066539560749434073,
    -0.0070391182580476714, 0.0073479775492386505, -0.007635482135155771,
    0.0080482323735006668, -0.0085126469622599787, 0.0087775619873953874,
    -0.0089350421342814339, 0.0094121552487094785, -0.010107468829835162,
    0.010301266950344092, -0.010075563518753713, 0.010633021860034574,
    -0.011981873515202655, 0.012129937465504878, -0.010824892513430327,
    0.009315142627107911, -0.0061506740853919375, 0.0018734355115324413, 0.0,
    0.0, -4.01366567367057E-5, 0.00018730281577316444, -0.000429541800033748,
    0.00072547893925362355, -0.0010721613829626335, 0.0014306647894791276,
    -0.0017591649682509967, 0.0020778577942752894, -0.0024147836388283689,
    0.0027604880755223065, -0.0030953284775451641, 0.003422284163489019,
    -0.0037567548929243648, 0.0041007279207764188, -0.0044399636772547565,
    0.0047673100771034593, -0.0050988062363434119, 0.0054491579558567605,
    -0.0057977727388707915, 0.0061176701094116824, -0.0064373020436095168,
    0.006804820162041811, -0.0071804324665204946, 0.0074797804305633429,
    -0.0077578756928989379, 0.0081610521670642151, -0.0086162811476792663,
    0.0088724800235601576, -0.0090203573008086051, 0.0094869052665266327,
    -0.010173214787728032, 0.010359881807282792, -0.010124592501715485,
    0.010669028187307446, -0.012008586359952465, 0.012153544473942046,
    -0.010839926567672648, 0.0093263672671679444, -0.0061723781082367616,
    0.0018880814930384553, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0015694007453940979 };

  int32_T i_0;
  int32_T i_1;
  int32_T y_sizes[2];
  int32_T b_b_sizes[2];
  int32_T RLinv_sizes[2];
  int32_T EYE_sizes[2];
  int32_T y_sizes_0[2];
  int32_T unnamed_idx_1;
  int32_T loop_ub;
  static real_T tmp[1681] = { 1.7033679484849182E-7, -1.5833163662321911E-5,
    0.00035884485039649653, -0.00031636880267271842, 7.5148906799627745E-6,
    -0.00082068227176963966, 0.00091767717060216108, -0.00029416201056793958,
    -7.4380703403881748E-5, -0.00018563488436246496, 0.00037596097112555839,
    -0.00020402588547043494, 4.0139342985889219E-5, -0.00010529886019000078,
    0.00018907578780926761, -0.00013995470631013692, 7.0910447324870149E-5,
    -8.2749048984989964E-5, 0.00011460892412020687, -0.00010047133044494287,
    7.19281173479124E-5, -7.0828655964906152E-5, 8.13994088102986E-5,
    -7.6748246312057669E-5, 6.4725804744111763E-5, -6.1665453600011637E-5,
    6.4195400029502922E-5, -6.2041393662820967E-5, 5.655793585899276E-5,
    -5.4007971723668496E-5, 5.3748486650398786E-5, -5.2303880672036263E-5,
    4.946971038479136E-5, -4.7568579445071985E-5, 4.657414724184663E-5,
    -4.5352361315182948E-5, 4.3729628335887119E-5, -4.22039703785732E-5,
    4.11979287861466E-5, -4.01366567367057E-5, 0.0, 0.0, 1.6507808629411345E-5,
    -0.00074237089200969843, 0.0011347957299664884, -0.00033517790865665885,
    0.002268148411111671, -0.003672656011531876, 0.0019276574361793536,
    -3.2833532693508365E-5, 0.00057409390216153723, -0.0015048710078568136,
    0.0010992293007862561, -0.00034703988174841869, 0.00041587323203983313,
    -0.00078119665011487551, 0.00069083980112346439, -0.00039473979951420925,
    0.00036868490661799881, -0.00049563570498571913, 0.00047684038459451679,
    -0.00036013229685474368, 0.00032785988045678008, -0.00036534169215963726,
    0.00035903050127630072, -0.00031114354003724084, 0.00028816926832313255,
    -0.0002944473108922948, 0.00028918614443411872, -0.00026725718765353916,
    0.0002527107959542474, -0.00024912689322771712, 0.0002437866913533666,
    -0.00023208186053029836, 0.00022245963040895845, -0.00021685553402133557,
    0.00021152564072101688, -0.0002045517753347784, 0.00019724218645540719,
    -0.00019217349457521966, 0.00018730281577316444, 0.0, 0.0, 0.0,
    0.00038424433012088896, -0.0013335499390621987, 0.0011505122977449346,
    -0.0027227686438632171, 0.0060082266322380338, -0.0051634977645518389,
    0.0015267614474524889, -0.0010152947674872499, 0.0025877072205988416,
    -0.0026242615165546087, 0.0013216379042234273, -0.00093508669118043766,
    0.0014779205677319621, -0.0015737385003653094, 0.0010944338536459217,
    -0.00086795497540828181, 0.0010264181263418125, -0.0010736957243807504,
    0.00089210308096118577, -0.00077012357276325691, 0.00080083436508689935,
    -0.00081110660654522379, 0.00073614261618656376, -0.000671016231559678,
    0.00066361265412342735, -0.00065738493521644878, 0.00062056418725817781,
    -0.000584563764553605, 0.00056808513999669812, -0.00055678659864330429,
    0.00053495133865486119, -0.00051260450664180788, 0.00049672466900080206,
    -0.00048442088915919961, 0.00047022193876319917, -0.00045359286182725854,
    0.00044089186638163284, -0.000429541800033748, 0.0, 0.0, 0.0, 0.0,
    0.00051550982942572085, -0.0013391038714673622, 0.0029549867902216144,
    -0.00643751149387515, 0.007588557626677467, -0.004726601384463602,
    0.0025896011091159775, -0.0032387974320874646, 0.00384207241642267,
    -0.0028734602844134255, 0.0019890404903064006, -0.0021500516725777058,
    0.0023916803352806455, -0.0020398288889641484, 0.0016437113237207717,
    -0.0016345202889957386, 0.0017025107611469603, -0.0015605093453745821,
    0.0013737953838885983, -0.0013277282955286805, 0.001326499370934271,
    -0.0012570825188097888, 0.0011623346212503766, -0.0011164632383179128,
    0.0010943859806847504, -0.0010512965132686313, 0.00099868962841066539,
    -0.000959940580653119, 0.00093512303246897027, -0.000904352084603272,
    0.0008703860237531428, -0.00084014245942672431, 0.000816810467968771,
    -0.00079468469272574377, 0.00076819007436003221, -0.0007457141730180597,
    0.00072547893925362355, 0.0, 0.0, 0.0, 0.0, 0.0, 0.00051666143802967836,
    -0.0027245064598565949, 0.0063958023073637967, -0.0079619683917161212,
    0.0071708458925449116, -0.0057697051620618969, 0.0048950704847291427,
    -0.0045763148782274575, 0.0041085746112952534, -0.0035931382412355811,
    0.0033143547692030969, -0.0031571685776124203, 0.0029058787194037477,
    -0.0026488803712087857, 0.0024975816401809439, -0.0023911831121872671,
    0.0022483670746609547, -0.0021017490727745164, 0.0020023327515094475,
    -0.0019208767152293338, 0.0018311686350728697, -0.0017400451317220616,
    0.001667809396180801, -0.0016056294246422546, 0.001542422757508108,
    -0.0014824992016919888, 0.0014261367747588568, -0.0013788737522410421,
    0.0013320855586572092, -0.0012881407788636644, 0.0012446449831977537,
    -0.0012065051794792586, 0.0011728364944369959, -0.0011357878475384046,
    0.0011032878745628409, -0.0010721613829626335, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0010452412449160231, -0.0046672725193179117, 0.0074200581213650649,
    -0.0076813775606975445, 0.0079136170045813678, -0.0076347047194233828,
    0.0060715401968000704, -0.0048170707447599869, 0.0047601743618059045,
    -0.0048144201046225743, 0.0042600866969589269, -0.0036433862645288461,
    0.0034859909186746585, -0.0034673708924763645, 0.0032273999594703245,
    -0.0029199551166794696, 0.0027745872069626413, -0.0027159254890938814,
    0.0025824604800072527, -0.0024166957883262996, 0.00230677212213,
    -0.0022388769299738548, 0.002151023544832343, -0.00204928497786871,
    0.0019711391910674126, -0.001906496401638029, 0.0018431553287497711,
    -0.0017743884163240347, 0.0017155540475879312, -0.0016613107579320622,
    0.0016108497273228512, -0.0015636982045473694, 0.0015139010986030084,
    -0.0014718580761233378, 0.0014306647894791276, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0014561228823706924, -0.0050102293987804693, 0.0073270081505527112,
    -0.00797377680345909, 0.00895941501662382, -0.0084355462355737224,
    0.0062444517831021333, -0.0052942780932087319, 0.0056820469948405845,
    -0.0055525365678028094, 0.00464535993725935, -0.0041097051194210954,
    0.0041513029808495552, -0.0040660424887510411, 0.0036649824965525588,
    -0.0033584166473701665, 0.003291198064632453, -0.0032039460330392016,
    0.0030028456426429324, -0.0028215747734936618, 0.0027333464291192334,
    -0.00265253726166196, 0.0025322911229352309, -0.0024201361850594945,
    0.0023366720003021981, -0.0022680926212477665, 0.0021865983641603855,
    -0.0021088720511446067, 0.0020399828895468581, -0.0019809923406319467,
    0.001924532966386032, -0.0018615768632017412, 0.0018088561905125404,
    -0.0017591649682509967, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0014939780696908574, -0.0050089306120790107, 0.0073987165492197535,
    -0.0085612450064349241, 0.0095289022958627515, -0.008561799109641487,
    0.0066146522341752412, -0.0060378641131094545, 0.0062982367115611924,
    -0.0058769624660253714, 0.0050451036155136223, -0.004687663372905557,
    0.0046769807074565715, -0.004453119410236823, 0.0040553701263472573,
    -0.0038228459926677705, 0.003730139838458301, -0.0035849369650962164,
    0.0033711388604641284, -0.0032114273375455811, 0.0031117287767251866,
    -0.0030025761827459493, 0.002874794603768395, -0.0027567918416787711,
    0.0026715020585717105, -0.0025865429667640983, 0.002497946785626507,
    -0.0024099999317614882, 0.0023378536153098373, -0.0022749041393715229,
    0.0022021772782014359, -0.0021377459724243241, 0.0020778577942752894, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0014999274696224974,
    -0.0050483025948286388, 0.0078434626463884452, -0.00903834813269586,
    0.0096359808871266384, -0.0088899162874918666, 0.0073044614998051191,
    -0.0066274841750293368, 0.0066084200559208524, -0.0062641184363519432,
    0.0056110528427536195, -0.0052082175810866209, 0.0050612787072806913,
    -0.0048420982283444549, 0.0045206811117960545, -0.0042638067560365972,
    0.0041147010700016027, -0.0039574935712662707, 0.003766237782638948,
    -0.0035954186507724576, 0.003467884400326738, -0.0033524237516833985,
    0.0032178989502782765, -0.0030992261262394257, 0.0029975031587408693,
    -0.0029060596165822786, 0.0028064070256098189, -0.0027158528342076703,
    0.0026407086160101941, -0.0025600438959706116, 0.0024866053001832387,
    -0.0024147836388283689, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0015171367903991117, -0.0052976811328991485, 0.0081591671886791523,
    -0.0091184652633165136, 0.0098816464369153416, -0.0094521467090438356,
    0.0078182612411714768, -0.00690357470992344, 0.0069587629248197514,
    -0.00678342086324463, 0.0060951219879084636, -0.0055686084305792451,
    0.0054284860347672652, -0.0052849664131580792, 0.0049412974206454428,
    -0.0046332902700654535, 0.004473979628122772, -0.0043394578458180958,
    0.0041381634225062065, -0.0039416330422075031, 0.0038099857324254203,
    -0.0036866836462044216, 0.0035531509285540333, -0.0034188027456579732,
    0.0033119678591528477, -0.0032087595189962187, 0.0031075098934158669,
    -0.0030154044897591904, 0.0029215601787955926, -0.0028412612225790024,
    0.0027604880755223065, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0015761549778299004, -0.0054169517993193465, 0.00820315040326633,
    -0.0092459767798843771, 0.010238471479370355, -0.00982717311025554,
    0.0080314595207294556, -0.0071839949472762774, 0.0073844238778275548,
    -0.0071866140417881337, 0.0064012915986167611, -0.0058847288569740738,
    0.0058160945599324406, -0.0056524866738739384, 0.0052682554352714642,
    -0.0049532678485286691, 0.0048166105593068533, -0.004673448039813244,
    0.00445070972485201, -0.0042532544762624372, 0.0041131063762818321,
    -0.0039930369629672105, 0.0038456957329630623, -0.0037083701761146605,
    0.0035895125823589866, -0.0034862650212259833, 0.0033855741690124253,
    -0.0032744213545927553, 0.0031824547352322439, -0.0030953284775451641, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0015950331953176015,
    -0.0054363188736698074, 0.0082529485893143434, -0.0094529552798704,
    0.010507223973551747, -0.0099859515929368852, 0.00825385285071932,
    -0.0075344289443806363, 0.0077244423765129994, -0.0074492987397237823,
    0.0066763126385999561, -0.0062286699094686983, 0.0061419120532004261,
    -0.005946305706083713, 0.0055575713472510906, -0.0052659019200826246,
    0.0051215093124228478, -0.0049603388436040789, 0.0047391813474712404,
    -0.0045329684723594494, 0.0043980014747687915, -0.0042655828316335428,
    0.0041168212627829505, -0.0039672892249332931, 0.0038498021041488764,
    -0.0037490139178972311, 0.0036285916398973478, -0.0035206896685522153,
    0.003422284163489019, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0016007519846104076, -0.0054579534891467914,
    0.0083833347100006669, -0.0096598872960095318, 0.010628237242742845,
    -0.010169211372800612, 0.0085574130617049691, -0.00784167374557626,
    0.0079628297964172163, -0.0077012087356044256, 0.006995887159715327,
    -0.0065340415699865284, 0.00642025647627536, -0.0062215716828980094,
    0.0058560807690087565, -0.0055579532770690986, 0.0053978088411742245,
    -0.0052401781600927592, 0.0050094121128364576, -0.0048100122438323178,
    0.0046635375566146933, -0.0045307993963833422, 0.0043693302128531139,
    -0.0042222155576122546, 0.0041087135579790796, -0.003987065745614608,
    0.0038710000549351665, -0.0037567548929243648, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0016078785989361544,
    -0.0055251799434595083, 0.0085180392359016817, -0.0097415005132206935,
    0.010766957961350672, -0.010415309155289935, 0.0088205253817529652,
    -0.008050495147854872, 0.0081872583610303647, -0.00799097038612002,
    0.0072752386776338595, -0.0067924896317070544, 0.0066777086429809056,
    -0.0065012823148471073, 0.0061311534768293133, -0.0058199774403136523,
    0.00566599819506692, -0.0054971646365461957, 0.0052750504342611781,
    -0.0050651872088999673, 0.00492010750888078, -0.00477388651190721,
    0.0046158918067824121, -0.0044743323729439007, 0.00433917419661413,
    -0.0042230220385988306, 0.0041007279207764188, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.001624744766802711,
    -0.0055828236366744647, 0.0085620448791245852, -0.00982724511527916,
    0.010939873121485946, -0.010611029728889269, 0.0089876965017755429,
    -0.0082371137847094423, 0.0084375269821223686, -0.0082300488642520486,
    0.0075022101533664667, -0.0070214925464343247, 0.0069298066117413071,
    -0.0067493972232840222, 0.0063693769466094015, -0.0060672358025989975,
    0.00590129997252128, -0.0057430814853047215, 0.0055117967448884793,
    -0.0053053230091730354, 0.0051462125956315769, -0.005004771964967453,
    0.0048540582386250057, -0.0046904087343009413, 0.0045620382312763184,
    -0.0044399636772547565, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0016370374281528548, -0.0056038320560141616,
    0.0086060442216044919, -0.00993512680722452, 0.011077757446930766,
    -0.01073922030741895, 0.0091379970120226278, -0.0084506188363820678,
    0.0086390438161175163, -0.0084274598390745963, 0.0077039120726533064,
    -0.0072487113328526236, 0.0071528037944454522, -0.00696533137897557,
    0.0065963281835691237, -0.0062828052153812292, 0.0061292349375397844,
    -0.0059630103635382918, 0.0057362606787168275, -0.0055157348630508344,
    0.005362813796851322, -0.0052304470677822972, 0.0050567706494312305,
    -0.0049012432558202656, 0.0047673100771034593, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0016437187366906175,
    -0.0056245257836058538, 0.0086676901688639372, -0.010037300892105297,
    0.011174776109930911, -0.010858178482240657, 0.0093169845117738771,
    -0.0086252097911825882, 0.0088151189113256923, -0.0086089723035137466,
    0.0079101073618278624, -0.0074526511534822376, 0.0073526771208118494,
    -0.0071781552183233883, 0.0067971401230926829, -0.0064977687786463506,
    0.00633742072805794, -0.0061766528815672978, 0.0059356753347984594,
    -0.0057225682695126387, 0.0055805582913061374, -0.005423949510330206,
    0.0052596662371318867, -0.0050988062363434119, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.001650002857968296, -0.0056546792257509233, 0.0087387646855067135,
    -0.010101593955560297, 0.011262413418255292, -0.011000559364505147,
    0.0094634599143619651, -0.0087794576748790459, 0.00897700318023039,
    -0.0087917512399790267, 0.0080942812174259939, -0.0076361700307548495,
    0.0075524676886310248, -0.0073629586670515687, 0.0069981912778222053,
    -0.0066934154074142164, 0.00654077042491396, -0.0063646874738165268,
    0.0061321282106339917, -0.0059316130264204662, 0.00576472966514003,
    -0.0056186749655284191, 0.0054491579558567605, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0016585656021018281, -0.0056928604679927124, 0.0087732311642047169,
    -0.010157290272054047, 0.011372967702243695, -0.0111093989399671,
    0.0095891392781923355, -0.008916609494144313, 0.00913657446189745,
    -0.00895268194835523, 0.0082571475332753833, -0.00781859522561691,
    0.00771862512125407, -0.007547277798166694, 0.0071780860200669908,
    -0.006883580547291465, 0.006714577297582896, -0.0065480480081762911,
    0.0063294908580962747, -0.0061040638506065616, 0.0059488762131125333,
    -0.0057977727388707915, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0016695869438935508,
    -0.005710346224083767, 0.00880479322815439, -0.010239441286507969,
    0.01144443399957781, -0.011206054338744937, 0.0096995847713149137,
    -0.00905652193727832, 0.00927459776518718, -0.00909449184396255,
    0.0084195303157738564, -0.0079675135733428219, 0.00788710549318426,
    -0.007712047888862943, 0.0073535571491688189, -0.0070431656997764856,
    0.0068852635978060009, -0.0067343942831042973, 0.0064898826866614462,
    -0.0062774877751936324, 0.0061176701094116824, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0016756961590273271, -0.0057281725460461216, 0.0088574480980247432,
    -0.010284375436578437, 0.01151901035371948, -0.011294049361196639,
    0.0098157945992540588, -0.0091734609131565621, 0.0093988066893733891,
    -0.009240248936173593, 0.008552315575946115, -0.00812160575032916,
    0.0080390048009686514, -0.0078744207385206925, 0.007500681251790201,
    -0.0072028471643266661, 0.00706285415987047, -0.0068839721978533374,
    0.0066539560749434073, -0.0064373020436095168, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.001681993590514484, -0.0057560151634227594, 0.0088893726160316437,
    -0.010338481811155265, 0.011588358404980818, -0.011380215087114419,
    0.0099113349282538, -0.00928117456802138, 0.009532807205764094,
    -0.0093547244404592958, 0.0086907365103013577, -0.008259887552219217,
    0.0081909952687715427, -0.0080093065299736352, 0.0076488867259085743,
    -0.0073708714534918753, 0.0072023485664765678, -0.0070391182580476714,
    0.006804820162041811, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0016907675164053197, -0.0057800594281510213, 0.0089231364162988581,
    -0.010385021771777667, 0.011652961199388658, -0.01145375071557491,
    0.0099991957622173784, -0.0094004762574994329, 0.009629006368472335,
    -0.0094769878264430885, 0.0088135354916204691, -0.0084010612826066356,
    0.0083125964983913024, -0.0081450103074818068, 0.0078052352389687257,
    -0.0074999788292441976, 0.0073479775492386505, -0.0071804324665204946, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0017003510734104582,
    -0.0057992577668837617, 0.008948595501923319, -0.010439799461876346,
    0.011705146459754281, -0.011519717155679069, 0.010095569643773167,
    -0.0094821986881222422, 0.00973737134545319, -0.0095855006164791822,
    0.0089395202329445936, -0.0085090566762912514, 0.0084366302000473247,
    -0.0082909482972504736, 0.0079228704065346, -0.007635482135155771,
    0.0074797804305633429, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0017071578224541414, -0.0058146304573305505, 0.008994688955492873,
    -0.010470287374014765, 0.011753241261614804, -0.011595825035250321,
    0.010161986748028219, -0.0095765551974306817, 0.0098337125805675191,
    -0.00969542155104671, 0.0090345521563787931, -0.0086221998125658918,
    0.0085748298567777676, -0.0083965352728686358, 0.0080482323735006668,
    -0.0077578756928989379, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0017135889648455507, -0.0058470320176971088, 0.0090122133496855824,
    -0.01050419724745132, 0.011822875853360993, -0.011640372355942829,
    0.010238419282165963, -0.00965884675292011, 0.00993457276036695,
    -0.00977796074093288, 0.0091353880161482211, -0.0087507620416461991,
    0.0086699756886050843, -0.0085126469622599787, 0.0081610521670642151, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0017255031434703226,
    -0.0058627567957089018, 0.009036461062343364, -0.010565363432043172,
    0.011846896806715036, -0.011699335271653143, 0.010303633420865474,
    -0.0097536139737730027, 0.010004272794197506, -0.0098656752427245236,
    0.0092502854052793782, -0.0088372168124744837, 0.0087775619873953874,
    -0.0086162811476792663, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0017334418516285041, -0.0058813797370444358,
    0.0090783340730528871, -0.010580076202652383, 0.011895113695700591,
    -0.011750393605386423, 0.010381226906562324, -0.0098098161258269537,
    0.010081280011090274, -0.00996973737736196, 0.0093257479139198622,
    -0.0089350421342814339, 0.0088724800235601576, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.001741369247968254,
    -0.0059066877309217431, 0.0090984861567144238, -0.010617190990605575,
    0.011936999893684264, -0.01180420282709225, 0.010424065928755747,
    -0.0098774090046927342, 0.010181195526697365, -0.010030710085774604,
    0.0094121552487094785, -0.0090203573008086051, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0017510969923467835,
    -0.0059331078136535742, 0.0091241124089362219, -0.01064555059123082,
    0.011984498129494115, -0.011834685050379226, 0.01047830413097545,
    -0.0099692057204669917, 0.0102309860512989, -0.010107468829835162,
    0.0094869052665266327, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0017641847747343405, -0.0059528616327361745,
    0.0091408469182579673, -0.010700026297365384, 0.012002749855788156,
    -0.011873181063161114, 0.010550646421274778, -0.010014219529381108,
    0.010301266950344092, -0.010173214787728032, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0017731953338878531,
    -0.0059687226689007404, 0.0091948616434439009, -0.010704488117615518,
    0.012031844307339126, -0.011931394137235875, 0.010586258866908312,
    -0.010075563518753713, 0.010359881807282792, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0017818995412863404, -0.006010677002357411, 0.0091991322515862436,
    -0.010728787020444932, 0.01209525518455701, -0.011946331496958033,
    0.010633021860034574, -0.010124592501715485, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0017986669624236833, -0.0060282365773961883, 0.009222400499099925,
    -0.010790845459496223, 0.012095784636131767, -0.011981873515202655,
    0.010669028187307446, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0018107955709295487,
    -0.006052467665873351, 0.00926600994897149, -0.010796473445682006,
    0.012129937465504878, -0.012008586359952465, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0018227887033921235, -0.0060827056188062622, 0.009293486735082809,
    -0.010824892513430327, 0.012153544473942046, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0018366034067595629, -0.0061256250027687635, 0.009315142627107911,
    -0.010839926567672648, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0018589046419136856, -0.0061506740853919375, 0.0093263672671679444, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0018734355115324413,
    -0.0061723781082367616, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0018880814930384553, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0015694007453940979 };

  b_b_sizes[0] = 41;
  b_b_sizes[1] = (int32_T)nA;
  loop_ub = (int32_T)nA - 1;
  for (i_0 = 0; i_0 <= loop_ub; i_0++) {
    for (i_1 = 0; i_1 < 41; i_1++) {
      Planilla_3DOF_Crane_B.b_b_data[i_1 + 41 * i_0] = A[(400 * i_1 + (int32_T)
        iC[i_0]) - 1];
    }
  }

  y_sizes[0] = 41;
  y_sizes[1] = (int8_T)b_b_sizes[1];
  y_sizes[0] = 41;
  loop_ub = y_sizes[1] - 1;
  for (i_0 = 0; i_0 <= loop_ub; i_0++) {
    for (i_1 = 0; i_1 < 41; i_1++) {
      Planilla_3DOF_Crane_B.y_data_c[i_1 + 41 * i_0] = 0.0;
    }
  }

  Planilla_3DOF_Crane_eml_xgemm(b_b_sizes[1], tmp,
    &Planilla_3DOF_Crane_B.b_b_data[0], b_b_sizes,
    &Planilla_3DOF_Crane_B.y_data_c[0], y_sizes);
  unnamed_idx_1 = (int32_T)(41.0 - nA);
  loop_ub = y_sizes[1] - 1;
  for (i_0 = 0; i_0 <= loop_ub; i_0++) {
    memcpy((void *)(&Planilla_3DOF_Crane_B.y_data[41 * i_0]), (void *)
           (&Planilla_3DOF_Crane_B.y_data_c[y_sizes[0] * i_0]), 41U * sizeof
           (real_T));
  }

  loop_ub = unnamed_idx_1 - 1;
  for (i_0 = 0; i_0 <= loop_ub; i_0++) {
    for (i_1 = 0; i_1 < 41; i_1++) {
      Planilla_3DOF_Crane_B.y_data[i_1 + 41 * (i_0 + y_sizes[1])] = 0.0;
    }
  }

  for (i_0 = 0; i_0 < 41; i_0++) {
    for (i_1 = 0; i_1 < 41; i_1++) {
      RLinv[i_1 + 41 * i_0] = Planilla_3DOF_Crane_B.y_data[41 * i_0 + i_1];
    }
  }

  unnamed_idx_1 = (int32_T)(41.0 - nA);
  loop_ub = y_sizes[1] - 1;
  for (i_0 = 0; i_0 <= loop_ub; i_0++) {
    memcpy((void *)(&Planilla_3DOF_Crane_B.y_data[41 * i_0]), (void *)
           (&Planilla_3DOF_Crane_B.y_data_c[y_sizes[0] * i_0]), 41U * sizeof
           (real_T));
  }

  loop_ub = unnamed_idx_1 - 1;
  for (i_0 = 0; i_0 <= loop_ub; i_0++) {
    for (i_1 = 0; i_1 < 41; i_1++) {
      Planilla_3DOF_Crane_B.y_data[i_1 + 41 * (i_0 + y_sizes[1])] = 0.0;
    }
  }

  y_sizes_0[0] = 41;
  y_sizes_0[1] = (int32_T)nA;
  loop_ub = (int32_T)nA - 1;
  for (i_0 = 0; i_0 <= loop_ub; i_0++) {
    memcpy((void *)(&Planilla_3DOF_Crane_B.y_data_k[41 * i_0]), (void *)
           (&Planilla_3DOF_Crane_B.y_data[41 * i_0]), 41U * sizeof(real_T));
  }

  Planilla_3DOF_Crane_qr(&Planilla_3DOF_Crane_B.y_data_k[0], y_sizes_0,
    &Planilla_3DOF_Crane_B.b_data[0], y_sizes, &Planilla_3DOF_Crane_B.b_b_data[0],
    b_b_sizes);
  for (i_0 = 0; i_0 < 41; i_0++) {
    for (i_1 = 0; i_1 < 41; i_1++) {
      Q[i_1 + 41 * i_0] = Planilla_3DOF_Crane_B.b_data[41 * i_0 + i_1];
    }
  }

  loop_ub = b_b_sizes[1] - 1;
  for (i_0 = 0; i_0 <= loop_ub; i_0++) {
    for (i_1 = 0; i_1 < 41; i_1++) {
      RLinv[i_1 + 41 * i_0] = Planilla_3DOF_Crane_B.b_b_data[b_b_sizes[0] * i_0
        + i_1];
    }
  }

  i = 0;
  do {
    unnamed_idx_1 = 0;
    if (i <= (int32_T)nA - 1) {
      if (fabs(RLinv[(((int32_T)(1.0 + (real_T)i) - 1) * 41 + (int32_T)(1.0 +
             (real_T)i)) - 1]) < 1.0E-12) {
        Status = -2.0;
        unnamed_idx_1 = 1;
      } else {
        i++;
      }
    } else {
      Status = 1.0;
      for (i_0 = 0; i_0 < 41; i_0++) {
        for (i_1 = 0; i_1 < 41; i_1++) {
          TL[i_0 + 41 * i_1] = 0.0;
          for (unnamed_idx_1 = 0; unnamed_idx_1 < 41; unnamed_idx_1++) {
            TL[i_0 + 41 * i_1] = b_A[41 * unnamed_idx_1 + i_0] *
              Planilla_3DOF_Crane_B.b_data[41 * i_1 + unnamed_idx_1] + TL[41 *
              i_1 + i_0];
          }
        }
      }

      RLinv_sizes[0] = (int32_T)nA;
      RLinv_sizes[1] = (int32_T)nA;
      loop_ub = (int32_T)nA - 1;
      for (i_0 = 0; i_0 <= loop_ub; i_0++) {
        unnamed_idx_1 = (int32_T)nA - 1;
        for (i_1 = 0; i_1 <= unnamed_idx_1; i_1++) {
          Planilla_3DOF_Crane_B.y_data_c[i_1 + RLinv_sizes[0] * i_0] = RLinv[41 *
            i_0 + i_1];
        }
      }

      EYE_sizes[0] = (int32_T)nA;
      EYE_sizes[1] = (int32_T)nA;
      loop_ub = (int32_T)nA - 1;
      for (i_0 = 0; i_0 <= loop_ub; i_0++) {
        unnamed_idx_1 = (int32_T)nA - 1;
        for (i_1 = 0; i_1 <= unnamed_idx_1; i_1++) {
          Planilla_3DOF_Crane_B.b_b_data[i_1 + EYE_sizes[0] * i_0] = (real_T)
            EYE[41 * i_0 + i_1];
        }
      }

      Planilla_3DOF_Crane_mldivide(&Planilla_3DOF_Crane_B.y_data_c[0],
        RLinv_sizes, &Planilla_3DOF_Crane_B.b_b_data[0], EYE_sizes,
        &Planilla_3DOF_Crane_B.y_data_k[0], y_sizes);
      loop_ub = y_sizes[1] - 1;
      for (i_0 = 0; i_0 <= loop_ub; i_0++) {
        unnamed_idx_1 = y_sizes[0] - 1;
        for (i_1 = 0; i_1 <= unnamed_idx_1; i_1++) {
          RLinv[i_1 + 41 * i_0] = Planilla_3DOF_Crane_B.y_data_k[y_sizes[0] *
            i_0 + i_1];
        }
      }

      unnamed_idx_1 = 1;
    }
  } while ((uint32_T)unnamed_idx_1 == 0U);

  return Status;
}

/* Function for MATLAB Function: '<S22>/optimizer' */
static void Planilla_3DOF_Cra_eml_xgemm_jek(int32_T m, int32_T k, const real_T
  A_data[1681], const int32_T A_sizes[2], int32_T lda, const real_T B_data[1681],
  const int32_T B_sizes[2], int32_T ldb, real_T C_data[1681], int32_T C_sizes[2],
  int32_T ldc)
{
  int32_T br;
  int32_T ar;
  int32_T ia;
  int32_T b_cr;
  int32_T c;
  int32_T ib;
  int32_T d;
  int32_T b_ic;
  int32_T b_c;
  UNUSED_PARAMETER(C_sizes);
  UNUSED_PARAMETER(B_sizes);
  UNUSED_PARAMETER(A_sizes);
  b_c = ldc * 40;
  for (br = 0; br <= b_c; br += ldc) {
    b_cr = br + m;
    for (ar = br; ar + 1 <= b_cr; ar++) {
      C_data[ar] = 0.0;
    }
  }

  br = 0;
  for (b_cr = 0; b_cr <= b_c; b_cr += ldc) {
    ar = -1;
    c = br + k;
    for (ib = br; ib + 1 <= c; ib++) {
      if (B_data[ib] != 0.0) {
        ia = ar;
        d = b_cr + m;
        for (b_ic = b_cr; b_ic + 1 <= d; b_ic++) {
          ia++;
          C_data[b_ic] += B_data[ib] * A_data[ia];
        }
      }

      ar += lda;
    }

    br += ldb;
  }
}

/* Function for MATLAB Function: '<S22>/optimizer' */
static boolean_T Planilla_3DOF_Crane_all(const boolean_T x[41])
{
  boolean_T y;
  int32_T k;
  boolean_T exitg;
  y = TRUE;
  k = 0;
  exitg = FALSE;
  while (((uint32_T)exitg == 0U) && (k < 41)) {
    if (x[k] == FALSE) {
      y = FALSE;
      exitg = TRUE;
    } else {
      k++;
    }
  }

  return y;
}

/* Function for MATLAB Function: '<S22>/optimizer' */
static real_T Planilla_3DOF_Crane_mrdivide(real_T A, real_T B)
{
  return A / B;
}

/* Function for MATLAB Function: '<S22>/optimizer' */
static void Planilla_3DOF_Cr_DropConstraint(real_T kDrop, boolean_T iA[441],
  real_T *nA, real_T iC[41])
{
  int32_T b;
  int32_T c;
  int32_T d;
  int32_T e;
  int32_T i;
  int32_T e_data[40];
  int32_T c_data[41];
  real_T iC_data[40];
  int32_T loop_ub;
  iA[(int32_T)iC[(int32_T)kDrop - 1] - 1] = FALSE;
  if (kDrop < *nA) {
    if (kDrop + 1.0 > *nA) {
      c = 1;
      b = 1;
    } else {
      c = (int32_T)(kDrop + 1.0);
      b = (int32_T)*nA + 1;
    }

    if (kDrop > *nA - 1.0) {
      e = 1;
      d = 1;
    } else {
      e = (int32_T)kDrop;
      d = (int32_T)(*nA - 1.0) + 1;
    }

    loop_ub = (d - e) - 1;
    for (i = 0; i <= loop_ub; i++) {
      e_data[i] = e + i;
    }

    loop_ub = (b - c) - 1;
    for (i = 0; i <= loop_ub; i++) {
      c_data[i] = c + i;
    }

    d = b - c;
    loop_ub = d - 1;
    for (i = 0; i <= loop_ub; i++) {
      for (c = 0; c < 1; c++) {
        iC_data[i] = iC[c_data[i] - 1];
      }
    }

    loop_ub = d - 1;
    for (i = 0; i <= loop_ub; i++) {
      iC[e_data[i] - 1] = iC_data[i];
    }
  }

  iC[(int32_T)*nA - 1] = 0.0;
  (*nA)--;
}

/* Function for MATLAB Function: '<S22>/optimizer' */
static void Planilla_3DOF_Crane_abs_j(const real_T x[41], real_T y[41])
{
  int32_T k;
  for (k = 0; k < 41; k++) {
    y[k] = fabs(x[k]);
  }
}

/* Function for MATLAB Function: '<S22>/optimizer' */
static void Planilla_3DOF_Crane_eml_xgemm_j(int32_T n, int32_T k, const real_T
  A_data[1681], const int32_T A_sizes[2], const real_T B_data[1681], const
  int32_T B_sizes[2], int32_T ldb, real_T C_data[1681], int32_T C_sizes[2])
{
  int32_T br;
  int32_T ar;
  int32_T ia;
  int32_T b_cr;
  int32_T b;
  int32_T ib;
  int32_T b_ic;
  int32_T c;
  UNUSED_PARAMETER(C_sizes);
  UNUSED_PARAMETER(B_sizes);
  UNUSED_PARAMETER(A_sizes);
  c = (n - 1) * 41;
  for (br = 0; br <= c; br += 41) {
    for (b_cr = br; b_cr + 1 <= br + 41; b_cr++) {
      C_data[b_cr] = 0.0;
    }
  }

  br = 0;
  for (b_cr = 0; b_cr <= c; b_cr += 41) {
    ar = -1;
    b = br + k;
    for (ib = br; ib + 1 <= b; ib++) {
      if (B_data[ib] != 0.0) {
        ia = ar;
        for (b_ic = b_cr; b_ic + 1 <= b_cr + 41; b_ic++) {
          ia++;
          C_data[b_ic] += B_data[ib] * A_data[ia];
        }
      }

      ar += 41;
    }

    br += ldb;
  }
}

/* Function for MATLAB Function: '<S22>/optimizer' */
static void Planilla_3DOF_Cran_eml_xgemm_je(int32_T m, int32_T n, int32_T k,
  const real_T A_data[1681], const int32_T A_sizes[2], int32_T lda, const real_T
  B_data[1681], const int32_T B_sizes[2], int32_T ldb, real_T C_data[1681],
  int32_T C_sizes[2], int32_T ldc)
{
  int32_T br;
  int32_T ar;
  int32_T ia;
  int32_T b_cr;
  int32_T c;
  int32_T ib;
  int32_T d;
  int32_T b_ic;
  int32_T b_c;
  UNUSED_PARAMETER(C_sizes);
  UNUSED_PARAMETER(B_sizes);
  UNUSED_PARAMETER(A_sizes);
  b_c = (n - 1) * ldc;
  for (br = 0; br <= b_c; br += ldc) {
    b_cr = br + m;
    for (ar = br; ar + 1 <= b_cr; ar++) {
      C_data[ar] = 0.0;
    }
  }

  br = 0;
  for (b_cr = 0; b_cr <= b_c; b_cr += ldc) {
    ar = -1;
    c = br + k;
    for (ib = br; ib + 1 <= c; ib++) {
      if (B_data[ib] != 0.0) {
        ia = ar;
        d = b_cr + m;
        for (b_ic = b_cr; b_ic + 1 <= d; b_ic++) {
          ia++;
          C_data[b_ic] += B_data[ib] * A_data[ia];
        }
      }

      ar += lda;
    }

    br += ldb;
  }
}

/* Function for MATLAB Function: '<S22>/optimizer' */
static void Planilla_3DOF_Crane_qpkwik(const real_T f[41], const real_T b[400],
  boolean_T iA[441], real_T x[41], real_T lambda[400], real_T *status)
{
  real_T r[41];
  real_T rMin;
  real_T cTol[400];
  boolean_T cTolComputed;
  real_T iC[41];
  real_T nA;
  real_T Opt[82];
  real_T Rhs[82];
  boolean_T DualFeasible = FALSE;
  real_T MaxWSiter;
  real_T kDrop;
  real_T Xnorm;
  int32_T kNext;
  real_T z[41];
  real_T t;
  real_T Xnorm_0;
  real_T varargin[400];
  real_T d_b[41];
  int32_T br;
  int32_T ar;
  int32_T ia;
  int32_T b_br;
  int32_T b_ar;
  int32_T i;
  int32_T pEnd;
  int32_T qEnd;
  int32_T kEnd;
  static const real_T A[1681] = { -2.2238021946692144E-6, 8.0970116497416662E-6,
    -1.3160772951054385E-5, 1.5789126083448594E-5, -1.8123636042970095E-5,
    1.8192986098848445E-5, -1.5991119839765732E-5, 1.4993889365502125E-5,
    -1.5456275083966506E-5, 1.5299456426580366E-5, -1.4219147872373133E-5,
    1.3447570713188559E-5, -1.3257437548554206E-5, 1.292489732418955E-5,
    -1.223285798393282E-5, 1.1602348970229265E-5, -1.119497605062617E-5,
    1.0768263572640121E-5, -1.0206690848402784E-5, 9.64819525155078E-6,
    -9.17308417469689E-6, 8.7038678941308789E-6, -8.18527268874542E-6,
    7.6598707758775724E-6, -7.1659253041016166E-6, 6.6808800020125657E-6,
    -6.1768525489792484E-6, 5.6642858211566963E-6, -5.1656954916158491E-6,
    4.6787366391220594E-6, -4.1815801268049541E-6, 3.6690683966219177E-6,
    -3.1666163918452412E-6, 2.6887949416249182E-6, -2.2013959852030579E-6,
    1.6746500603164739E-6, -1.1576826748272837E-6, 7.0617739100345955E-7,
    -3.2492028416900742E-7, 7.5781278777011273E-8, -0.0, 8.0970116497416662E-6,
    -3.1703961917295374E-5, 5.6008802649716436E-5, -7.0632923874213715E-5,
    8.174959132878297E-5, -8.4322790412333183E-5, 7.6360701334931842E-5,
    -7.0514742125506077E-5, 7.11883620968309E-5, -7.1066302450943088E-5,
    6.6962198310756936E-5, -6.3059148937695328E-5, 6.1582223112746846E-5,
    -6.0167930958931338E-5, 5.7301894416610158E-5, -5.4300580942118953E-5,
    5.2173720458759034E-5, -5.0199413909272137E-5, 4.7713984288295931E-5,
    -4.5104965697816452E-5, 4.2803772937887478E-5, -4.0607444458820719E-5,
    3.8235320169043908E-5, -3.5788702171538148E-5, 3.3452833945455367E-5,
    -3.1181684757626481E-5, 2.8845360919249083E-5, -2.6456869719322215E-5,
    2.4118611949260998E-5, -2.1841020623780708E-5, 1.9525310185738945E-5,
    -1.713470625483487E-5, 1.4785151949455586E-5, -1.2552184555093961E-5,
    1.0278126465669661E-5, -7.8195129492725258E-6, 5.4043844364079321E-6,
    -3.2955057990414009E-6, 1.5161284488018868E-6, -3.5364298005530304E-7, -0.0,
    -1.3160772951054385E-5, 5.6008802649716436E-5, -0.00010955645056188323,
    0.00014937122072165566, -0.00017775626297932343, 0.00018921885465988264,
    -0.00017869436686244412, 0.00016476933453966184, -0.00016160043640592715,
    0.00016128316556293456, -0.00015470323032898322, 0.00014597038866010764,
    -0.00014088114471797256, 0.00013737385669720028, -0.00013179987845035027,
    0.000125139171728077, -0.00011966593052184989, 0.00011495191673841316,
    -0.00010958884321994765, 0.00010373317176995125, -9.8252713664892245E-5,
    9.3115044633055232E-5, -8.7781148283250335E-5, 8.2229628304906612E-5,
    -7.6803879431661923E-5, 7.1545550475572535E-5, -6.6216457015534917E-5,
    6.0761884450249384E-5, -5.53746502385606E-5, 5.0126735101436659E-5,
    -4.4820239323576006E-5, 3.9343746154593969E-5, -3.3944187710846431E-5,
    2.8810060050468755E-5, -2.3591873618754776E-5, 1.7951740231721457E-5,
    -1.2405323178740539E-5, 7.5610326371183439E-6, -3.477276882326086E-6,
    8.1100992313014454E-7, -0.0, 1.5789126083448594E-5, -7.0632923874213715E-5,
    0.00014937122072165566, -0.00022147703664248926, 0.00027774072327403204,
    -0.00030647020614134123, 0.00030214634187570476, -0.00028440108962094791,
    0.00027362276256232286, -0.00026919635413530683, 0.00026106097554979874,
    -0.00024885958434080679, 0.00023863696232864396, -0.00023104367431250173,
    0.00022247585251449764, -0.00021228021238759749, 0.00020258715475543067,
    -0.00019394248528187527, 0.00018509152141126274, -0.00017561406750229584,
    0.00016624825524101918, -0.00015729968769470572, 0.00014832299682363562,
    -0.00013909820889151898, 0.0001299114816494938, -0.00012092288784135831,
    0.00011191386158648867, -0.00010275104130825022, 9.36463534509541E-5,
    -8.47380263263087E-5, 7.5761541343894416E-5, -6.6523414855187041E-5,
    5.7398382124523818E-5, -4.8705454916180005E-5, 3.98797879793679E-5,
    -3.0351286527324654E-5, 2.0975737248959766E-5, -1.2780719966266258E-5,
    5.8749777358209739E-6, -1.3697633587939363E-6, -0.0, -1.8123636042970095E-5,
    8.174959132878297E-5, -0.00017775626297932343, 0.00027774072327403204,
    -0.00036865915753231566, 0.00042523809630870432, -0.0004357641167242642,
    0.00042307584831326888, -0.00040886877847570952, 0.00039656899629877311,
    -0.00038308847820428857, 0.00036842294327806485, -0.00035443580232811785,
    0.00034126149757197661, -0.00032777987728734096, 0.00031382857805732075,
    -0.00030007649112017456, 0.00028666639652772644, -0.00027319208069268009,
    0.00025953776950063759, -0.00024595715535489192, 0.00023253652769464551,
    -0.000219096395809843, 0.00020556668630803814, -0.00019209987445527224,
    0.00017875915216991427, -0.00016537221554253396, 0.00015185742142142351,
    -0.0001384452575737666, 0.00012526445597927716, -0.00011196876362702279,
    9.832093883312552E-5, -8.485096773124326E-5, 7.1999342981801041E-5,
    -5.8944104656317768E-5, 4.4862186145951584E-5, -3.1010880508298004E-5,
    1.889665626800333E-5, -8.6847241323445856E-6, 2.0243280647222641E-6, -0.0,
    1.8192986098848445E-5, -8.4322790412333183E-5, 0.00018921885465988264,
    -0.00030647020614134123, 0.00042523809630870432, -0.00051635442337439035,
    0.00055453757786382007, -0.00055655471349769789, 0.000547308997373437,
    -0.00053145921884498334, 0.00050995223627411219, -0.00048980184898490971,
    0.00047323172773007743, -0.000456167082963046, 0.00043696417928399219,
    -0.00041796236557993619, 0.00040032893679343653, -0.00038273211130032442,
    0.00036435400480704631, -0.00034593865688230518, 0.00032805595650832822,
    -0.00031029562994019157, 0.00029224060155784605, -0.00027410154551547324,
    0.00025621099838936954, -0.00023847906583182761, 0.00022058544969107044,
    -0.00020251985436454812, 0.00018465137001089354, -0.00016709659094584688,
    0.00014935258277439084, -0.00013113332947182506, 0.00011317259447630939,
    -9.60412535799218E-5, 7.8625754280662154E-5, -5.9837527934135268E-5,
    4.1364353037795333E-5, -2.5210022368665863E-5, 1.1588035214551403E-5,
    -2.7012117117572986E-6, -0.0, -1.5991119839765732E-5, 7.6360701334931842E-5,
    -0.00017869436686244412, 0.00030214634187570476, -0.0004357641167242642,
    0.00055453757786382007, -0.0006293103438628219, 0.00065985472374438547,
    -0.00066474276169515407, 0.00065388925949032436, -0.00062977844308123056,
    0.000602245947355268, -0.00058026246066281194, 0.00056082469663255928,
    -0.00053829392599742557, 0.000514074071585581, -0.000491676654441795,
    0.00047050270096797868, -0.00044836892992162195, 0.00042547841586242904,
    -0.00040319093380722647, 0.0003814790936431657, -0.00035946687240615417,
    0.0003370992117681952, -0.00031498146635044083, 0.00029320680074090578,
    -0.00027127748441297707, 0.000249050490378505, -0.000227033074675797,
    0.0002054510849645003, -0.0001836595749085672, 0.00016125520374952492,
    -0.00013915293218111162, 0.00011808680006653617, -9.6681487771144972E-5,
    7.3578601345917512E-5, -5.0856898063104489E-5, 3.099279734491573E-5,
    -1.4247006761370954E-5, 3.3214468197562888E-6, -0.0, 1.4993889365502125E-5,
    -7.0514742125506077E-5, 0.00016476933453966184, -0.00028440108962094791,
    0.00042307584831326888, -0.00055655471349769789, 0.00065985472374438547,
    -0.00072732839400413852, 0.00076043199826169455, -0.00076367227471102277,
    0.00074492900844021562, -0.00071502906346874778, 0.00068564171634077648,
    -0.00066083028713932756, 0.00063612425062688075, -0.00060874834769905671,
    0.00058120851806046773, -0.00055535354148874, 0.00052977996485667716,
    -0.00050327028288867353, 0.00047661608095813133, -0.0004506054045108381,
    0.000424754216770732, -0.00039854225689555549, 0.00037231944325104342,
    -0.00034644415406635354, 0.000320566612137947, -0.00029438513842939347,
    0.00026834581837895636, -0.000242784689641104, 0.00021703702900670904,
    -0.00019059118719910538, 0.00016446720161180254, -0.00013954977276241722,
    0.00011425169324063829, -8.6959098160001563E-5, 6.0105043429969617E-5,
    -3.6621081236865617E-5, 1.68302531807891E-5, -3.92316484653688E-6, -0.0,
    -1.5456275083966506E-5, 7.11883620968309E-5, -0.00016160043640592715,
    0.00027362276256232286, -0.00040886877847570952, 0.000547308997373437,
    -0.00066474276169515407, 0.00076043199826169455, -0.00083045981468350932,
    0.00086177604693168475, -0.00085679214407719494, 0.00083199297855079252,
    -0.00080009483210299274, 0.00076770424120130071, -0.00073737151847912878,
    0.00070758163442832464, -0.00067669719539436451, 0.0006455059287525795,
    -0.00061502347165136469, 0.00058484730251718328, -0.00055437365405019208,
    0.00052379734399340689, -0.00049342305908006939, 0.00046314383250512149,
    -0.00043287897704222706, 0.00040270955116460127, -0.00037249899942763925,
    0.00034211853438246458, -0.000311939500608138, 0.00028220811093218276,
    -0.00025223060053559352, 0.00022150492901222208, -0.00019117495766969047,
    0.00016221020454126891, -0.00013278822378751088, 0.00010107022843819503,
    -6.9870963688013E-5, 4.2574335348619448E-5, -1.9563452340960596E-5,
    4.5593082981639008E-6, -0.0, 1.5299456426580366E-5, -7.1066302450943088E-5,
    0.00016128316556293456, -0.00026919635413530683, 0.00039656899629877311,
    -0.00053145921884498334, 0.00065388925949032436, -0.00076367227471102277,
    0.00086177604693168475, -0.00092991443655442282, 0.00095296661385431,
    -0.00094186881463373916, 0.00091497511304160434, -0.000879984950375349,
    0.000842006500660378, -0.00080652062350912586, 0.00077314113432575037,
    -0.000738524182545308, 0.000702627589518616, -0.00066746504124003472,
    0.00063325110856207051, -0.00059878128668663043, 0.00056375484495164085,
    -0.000528863705834159, 0.00049446594014865362, -0.00046019541587098678,
    0.00042559139196509023, -0.00039076163250400235, 0.00035633253839874242,
    -0.00032244597408160794, 0.00028817750822856034, -0.00025302861560531995,
    0.00021839076980971993, -0.00018533167371348279, 0.00015171570597264384,
    -0.00011546369446225496, 7.9824725795765868E-5, -4.8651899178497657E-5,
    2.2361695837322097E-5, -5.2120264471470086E-6, -0.0, -1.4219147872373133E-5,
    6.6962198310756936E-5, -0.00015470323032898322, 0.00026106097554979874,
    -0.00038308847820428857, 0.00050995223627411219, -0.00062977844308123056,
    0.00074492900844021562, -0.00085679214407719494, 0.00095296661385431,
    -0.0010132466803576853, 0.0010304444582797476, -0.0010172318898171531,
    0.00098729257160545944, -0.00094693236515318389, 0.000903990324238748,
    -0.00086500008422415759, 0.00082798131428921682, -0.00078881133826254422,
    0.000748386037670946, -0.00070930643017856686, 0.00067121431618951462,
    -0.00063241999141291471, 0.00059300278896324079, -0.0005541299712089802,
    0.0005158664751430818, -0.00047726782005105812, 0.00043813720077778053,
    -0.00039941254793057562, 0.0003614613774484329, -0.00032311945552877873,
    0.00028369312314012029, -0.00024481101141523632, 0.00020775610627985966,
    -0.00017009684319964016, 0.00012944790969348957, -8.9473987534357581E-5,
    5.45292491176696E-5, -2.5067661447430254E-5, 5.8442324133279225E-6, -0.0,
    1.3447570713188559E-5, -6.3059148937695328E-5, 0.00014597038866010764,
    -0.00024885958434080679, 0.00036842294327806485, -0.00048980184898490971,
    0.000602245947355268, -0.00071502906346874778, 0.00083199297855079252,
    -0.00094186881463373916, 0.0010304444582797476, -0.001085026128130467,
    0.0011000660402155119, -0.0010838116957635308, 0.0010486277783266279,
    -0.0010034096630381394, 0.00095699547225026329, -0.00091440351510326239,
    0.00087290983273034914, -0.00082928874930645658, 0.00078500457886466037,
    -0.0007421030811199541, 0.00069974404788279807, -0.00065661615641316991,
    0.00061328879178338086, -0.00057062584234435481, 0.00052807504174962278,
    -0.00048497614310450717, 0.00044203792594849387, -0.0003999106552159458,
    0.00035752183079540347, -0.00031397178339010953, 0.000270923489498002,
    -0.00022986756258347186, 0.0001882016865004648, -0.00014324776210018625,
    9.9005878842071116E-5, -6.0317299551396829E-5, 2.771941690103608E-5,
    -6.4615513930022085E-6, -0.0, -1.3257437548554206E-5, 6.1582223112746846E-5,
    -0.00014088114471797256, 0.00023863696232864396, -0.00035443580232811785,
    0.00047323172773007743, -0.00058026246066281194, 0.00068564171634077648,
    -0.00080009483210299274, 0.00091497511304160434, -0.0010172318898171531,
    0.0011000660402155119, -0.0011523996041722597, 0.0011643172527575885,
    -0.0011427654957504056, 0.001102667140311817, -0.0010539051267664129,
    0.0010038177992783678, -0.000956684943077655, 0.00091067444496089765,
    -0.00086313095306417233, 0.00081496099329622152, -0.00076771742493326079,
    0.00072094756730518589, -0.00067385421947869562, 0.00062668767283442155,
    -0.00057964958991183271, 0.00053249441300031884, -0.00048554685991812331,
    0.00043919933722784372, -0.00039252574390897371, 0.00034474984531266561,
    -0.00029755921380324787, 0.00025245365677285049, -0.00020665272125276903,
    0.00015730309166867105, -0.00010875121173031197, 6.6257710608721347E-5,
    -3.0440180627157261E-5, 7.0930593872121573E-6, -0.0, 1.292489732418955E-5,
    -6.0167930958931338E-5, 0.00013737385669720028, -0.00023104367431250173,
    0.00034126149757197661, -0.000456167082963046, 0.00056082469663255928,
    -0.00066083028713932756, 0.00076770424120130071, -0.000879984950375349,
    0.00098729257160545944, -0.0010838116957635308, 0.0011643172527575885,
    -0.00121346687370638, 0.0012200760482177064, -0.0011935911645340211,
    0.0011499008007096478, -0.0010974190810858282, 0.0010427582177440344,
    -0.00099107600111199225, 0.0009411075892606927, -0.00088964206683611255,
    0.00083708535062011931, -0.00078538453612893983, 0.00073462330736268045,
    -0.00068367069606018469, 0.00063207045126439964, -0.00058035327766829236,
    0.00052933837242976093, -0.00047900487492476322, 0.00042803073004905846,
    -0.00037581883107797568, 0.00032441445531548478, -0.0002753153984632852,
    0.00022535799435320324, -0.00017150803875461474, 0.00011858737017146138,
    -7.22854379228978E-5, 3.3222802699130792E-5, -7.7425084952040223E-6, -0.0,
    -1.223285798393282E-5, 5.7301894416610158E-5, -0.00013179987845035027,
    0.00022247585251449764, -0.00032777987728734096, 0.00043696417928399219,
    -0.00053829392599742557, 0.00063612425062688075, -0.00073737151847912878,
    0.000842006500660378, -0.00094693236515318389, 0.0010486277783266279,
    -0.0011427654957504056, 0.0012200760482177064, -0.0012640147724479727,
    0.0012657708614646549, -0.0012357086257460061, 0.0011883178439804373,
    -0.0011313174387566946, 0.0010721616742204437, -0.0010165598240445665,
    0.00096270597383215782, -0.0009068893823907326, 0.0008499103920207602,
    -0.00079426929640292749, 0.000739704484238376, -0.00068433729018973913,
    0.00062806181452632385, -0.00057255197568252612, 0.00051825174670344165,
    -0.00046328731793222162, 0.00040670007913172517, -0.00035095119971987189,
    0.0002978665365850825, -0.00024388251046351793, 0.00018558356998716466,
    -0.00012827158193294024, 7.818736480130642E-5, -3.5951819030295355E-5,
    8.383013248787671E-6, -0.0, 1.1602348970229265E-5, -5.4300580942118953E-5,
    0.000125139171728077, -0.00021228021238759749, 0.00031382857805732075,
    -0.00041796236557993619, 0.000514074071585581, -0.00060874834769905671,
    0.00070758163442832464, -0.00080652062350912586, 0.000903990324238748,
    -0.0010034096630381394, 0.001102667140311817, -0.0011935911645340211,
    0.0012657708614646549, -0.0013049206826160329, 0.0013031043373097884,
    -0.001269350718774132, 0.0012174822041752438, -0.0011560275365625917,
    0.0010929787716383692, -0.0010335165854909716, 0.00097533471413868646,
    -0.00091511803092437333, 0.00085423758075066423, -0.00079483645524267856,
    0.00073586409108154132, -0.00067581344886635494, 0.00061579977393215978,
    -0.000557092447791935, 0.00049814536043864136, -0.00043748203345669222,
    0.00037743630613599235, -0.00032022099093105842, 0.00026220721893100015,
    -0.000199580723597788, 0.00013791520876623155, -8.40076889686339E-5,
    3.8607803521202467E-5, -9.0010699281547727E-6, -0.0, -1.119497605062617E-5,
    5.2173720458759034E-5, -0.00011966593052184989, 0.00020258715475543067,
    -0.00030007649112017456, 0.00040032893679343653, -0.000491676654441795,
    0.00058120851806046773, -0.00067669719539436451, 0.00077314113432575037,
    -0.00086500008422415759, 0.00095699547225026329, -0.0010539051267664129,
    0.0011499008007096478, -0.0012357086257460061, 0.0013031043373097884,
    -0.0013386496330795154, 0.0013331120393780258, -0.0012948694226526845,
    0.0012385353547741127, -0.0011731704281518986, 0.0011062431229667898,
    -0.0010424282461514937, 0.000979820159420914, -0.00091569482084074855,
    0.00085105252371298653, -0.00078720502099001812, 0.000723494875739669,
    -0.00065971352638815022, 0.00059654315041080875, -0.00053312858151025923,
    0.00046835331055796793, -0.00040426184803879571, 0.00034291304340216568,
    -0.00028068186709839609, 0.00021368721892755816, -0.00014773957945828873,
    8.9986437329061272E-5, -4.1325405498798237E-5, 9.6269616914290556E-6, -0.0,
    1.0768263572640121E-5, -5.0199413909272137E-5, 0.00011495191673841316,
    -0.00019394248528187527, 0.00028666639652772644, -0.00038273211130032442,
    0.00047050270096797868, -0.00055535354148874, 0.0006455059287525795,
    -0.000738524182545308, 0.00082798131428921682, -0.00091440351510326239,
    0.0010038177992783678, -0.0010974190810858282, 0.0011883178439804373,
    -0.001269350718774132, 0.0013331120393780258, -0.0013649085976130953,
    0.0013548742119110007, -0.0013121581993308061, 0.0012518994492741937,
    -0.0011826405646863567, 0.0011113389254959983, -0.0010430747581968887,
    0.00097655389594970929, -0.00090866798202721361, 0.00083954324108252753,
    -0.00077090623625928982, 0.00070347614760748415, -0.00063658250095674073,
    0.000568646950458812, -0.0004992765951305077, 0.000431107093874579,
    -0.00036588097237255776, 0.00029943165154605584, -0.00022788040472059246,
    0.00015761382363928213, -9.609556963175269E-5, 4.4160488483233705E-5,
    -1.028845428909641E-5, -0.0, -1.0206690848402784E-5, 4.7713984288295931E-5,
    -0.00010958884321994765, 0.00018509152141126274, -0.00027319208069268009,
    0.00036435400480704631, -0.00044836892992162195, 0.00052977996485667716,
    -0.00061502347165136469, 0.000702627589518616, -0.00078881133826254422,
    0.00087290983273034914, -0.000956684943077655, 0.0010427582177440344,
    -0.0011313174387566946, 0.0012174822041752438, -0.0012948694226526845,
    0.0013548742119110007, -0.0013821937146174372, 0.001367705462309549,
    -0.00132107317509766, 0.0012569275285445193, -0.0011832972780870779,
    0.0011075481466286748, -0.0010353914194538901, 0.00096513543841552068,
    -0.00089275410058645252, 0.00081881078920650787, -0.00074648998171545689,
    0.00067601863694782827, -0.00060432341579085751, 0.00053032295096379323,
    -0.00045761909909951281, 0.00038851633314624653, -0.00031812461529725854,
    0.00024202360838532927, -0.0001672780317563722, 0.00010200862928190903,
    -4.6930881481293617E-5, 1.0946667409104819E-5, -0.0, 9.64819525155078E-6,
    -4.5104965697816452E-5, 0.00010373317176995125, -0.00017561406750229584,
    0.00025953776950063759, -0.00034593865688230518, 0.00042547841586242904,
    -0.00050327028288867353, 0.00058484730251718328, -0.00066746504124003472,
    0.000748386037670946, -0.00082928874930645658, 0.00091067444496089765,
    -0.00099107600111199225, 0.0010721616742204437, -0.0011560275365625917,
    0.0012385353547741127, -0.0013121581993308061, 0.001367705462309549,
    -0.0013905904231628382, 0.0013721941687612196, -0.0013216819147214263,
    0.0012531677444618096, -0.0011750916830208173, 0.0010954700155549947,
    -0.0010196034031689, 0.00094483896088032836, -0.00086761001244279527,
    0.00079001878177320159, -0.00071472732007782217, 0.00063941802758752818,
    -0.00056154915414825606, 0.00048427557987638275, -0.00041083881845087273,
    0.00033650548305502677, -0.00025613186348426954, 0.00017691378785038449,
    -0.00010773049269170723, 4.9521041578005594E-5, -1.155065971409474E-5, -0.0,
    -9.17308417469689E-6, 4.2803772937887478E-5, -9.8252713664892245E-5,
    0.00016624825524101918, -0.00024595715535489192, 0.00032805595650832822,
    -0.00040319093380722647, 0.00047661608095813133, -0.00055437365405019208,
    0.00063325110856207051, -0.00070930643017856686, 0.00078500457886466037,
    -0.00086313095306417233, 0.0009411075892606927, -0.0010165598240445665,
    0.0010929787716383692, -0.0011731704281518986, 0.0012518994492741937,
    -0.00132107317509766, 0.0013721941687612196, -0.0013911706895907722,
    0.0013688928970035492, -0.0013140059156257846, 0.0012410385427140658,
    -0.001159099995597543, 0.0010757834447815877, -0.000995387801111127,
    0.00091574029758105557, -0.0008348880051685482, 0.00075438286060418877,
    -0.00067421151073646091, 0.000592619735656584, -0.00051152482827517725,
    0.00043369471269890216, -0.00035495926850550512, 0.00027033103141143222,
    -0.00018690272554426472, 0.0001137596061372781, -5.2199219813059145E-5,
    1.2154150853637756E-5, -0.0, 8.7038678941308789E-6, -4.0607444458820719E-5,
    9.3115044633055232E-5, -0.00015729968769470572, 0.00023253652769464551,
    -0.00031029562994019157, 0.0003814790936431657, -0.0004506054045108381,
    0.00052379734399340689, -0.00059878128668663043, 0.00067121431618951462,
    -0.0007421030811199541, 0.00081496099329622152, -0.00088964206683611255,
    0.00096270597383215782, -0.0010335165854909716, 0.0011062431229667898,
    -0.0011826405646863567, 0.0012569275285445193, -0.0013216819147214263,
    0.0013688928970035492, -0.0013839851949610338, 0.0013573252441329764,
    -0.0012979764147599551, 0.0012211554040133684, -0.001135535804108623,
    0.0010476684838237769, -0.00096235313209285043, 0.00087910561278234942,
    -0.00079539492965426, 0.00070996685820810747, -0.00062340307505760859,
    0.0005386310075629426, -0.00045715459855721034, 0.00037395672450657533,
    -0.00028461245939640211, 0.00019699039548527959, -0.00012014805345491793,
    5.5189257113177892E-5, -1.2848055011406086E-5, -0.0, -8.18527268874542E-6,
    3.8235320169043908E-5, -8.7781148283250335E-5, 0.00014832299682363562,
    -0.000219096395809843, 0.00029224060155784605, -0.00035946687240615417,
    0.000424754216770732, -0.00049342305908006939, 0.00056375484495164085,
    -0.00063241999141291471, 0.00069974404788279807, -0.00076771742493326079,
    0.00083708535062011931, -0.0009068893823907326, 0.00097533471413868646,
    -0.0010424282461514937, 0.0011113389254959983, -0.0011832972780870779,
    0.0012531677444618096, -0.0013140059156257846, 0.0013573252441329764,
    -0.0013680221203615874, 0.0013368856097541108, -0.0012736886918736055,
    0.00119319795193417, -0.0011029980730655608, 0.0010101644082639528,
    -0.00092127110762238343, 0.00083522418990689628, -0.000746536769342088,
    0.00065458578373442215, -0.00056488936003031118, 0.00047993154667065548,
    -0.00039300388564412597, 0.00029883330727025463, -0.00020655999902026401,
    0.00012610411087194708, -5.80863062427104E-5, 1.3557241652049813E-5, -0.0,
    7.6598707758775724E-6, -3.5788702171538148E-5, 8.2229628304906612E-5,
    -0.00013909820889151898, 0.00020556668630803814, -0.00027410154551547324,
    0.0003370992117681952, -0.00039854225689555549, 0.00046314383250512149,
    -0.000528863705834159, 0.00059300278896324079, -0.00065661615641316991,
    0.00072094756730518589, -0.00078538453612893983, 0.0008499103920207602,
    -0.00091511803092437333, 0.000979820159420914, -0.0010430747581968887,
    0.0011075481466286748, -0.0011750916830208173, 0.0012410385427140658,
    -0.0012979764147599551, 0.0013368856097541108, -0.0013430897353731242,
    0.0013081097220458795, -0.0012412535550321599, 0.0011561512353262067,
    -0.0010609362318935568, 0.00096454610519200847, -0.00087291258952110044,
    0.00078183276710265092, -0.00068648798053878325, 0.00059145206309366908,
    -0.00050176885431101406, 0.00041127317307571693, -0.00031299980056262189,
    0.00021596559266929467, -0.00013145040204737274, 6.0472616363699283E-5,
    -1.4122435002937857E-5, -0.0, -7.1659253041016166E-6, 3.3452833945455367E-5,
    -7.6803879431661923E-5, 0.0001299114816494938, -0.00019209987445527224,
    0.00025621099838936954, -0.00031498146635044083, 0.00037231944325104342,
    -0.00043287897704222706, 0.00049446594014865362, -0.0005541299712089802,
    0.00061328879178338086, -0.00067385421947869562, 0.00073462330736268045,
    -0.00079426929640292749, 0.00085423758075066423, -0.00091569482084074855,
    0.00097655389594970929, -0.0010353914194538901, 0.0010954700155549947,
    -0.001159099995597543, 0.0012211554040133684, -0.0012736886918736055,
    0.0013081097220458795, -0.0013104906405144053, 0.0012718761180932634,
    -0.0012004001027639826, 0.001110260625969482, -0.0010115232252220772,
    0.00091245686864164816, -0.00081576193766561976, 0.00071793381027571428,
    -0.00061955943074772481, 0.00052471287499253772, -0.00042943841710362408,
    0.00032731464096914033, -0.0002262478234188786, 0.00013746321061264098,
    -6.2962386426852673E-5, 1.4647501521055368E-5, -0.0, 6.6808800020125657E-6,
    -3.1181684757626481E-5, 7.1545550475572535E-5, -0.00012092288784135831,
    0.00017875915216991427, -0.00023847906583182761, 0.00029320680074090578,
    -0.00034644415406635354, 0.00040270955116460127, -0.00046019541587098678,
    0.0005158664751430818, -0.00057062584234435481, 0.00062668767283442155,
    -0.00068367069606018469, 0.000739704484238376, -0.00079483645524267856,
    0.00085105252371298653, -0.00090866798202721361, 0.00096513543841552068,
    -0.0010196034031689, 0.0010757834447815877, -0.001135535804108623,
    0.00119319795193417, -0.0012412535550321599, 0.0012718761180932634,
    -0.001270651343768809, 0.0012274152962881994, -0.0011508876707462181,
    0.001057263370520113, -0.00095591513511737161, 0.00085176684472261467,
    -0.00074824499673292082, 0.00064744458141133016, -0.00054942928976426156,
    0.00044894791407545888, -0.00034178869440985794, 0.00023694242602253672,
    -0.00014458814491824734, 6.6320994852401958E-5, -1.5408731560355326E-5, -0.0,
    -6.1768525489792484E-6, 2.8845360919249083E-5, -6.6216457015534917E-5,
    0.00011191386158648867, -0.00016537221554253396, 0.00022058544969107044,
    -0.00027127748441297707, 0.000320566612137947, -0.00037249899942763925,
    0.00042559139196509023, -0.00047726782005105812, 0.00052807504174962278,
    -0.00057964958991183271, 0.00063207045126439964, -0.00068433729018973913,
    0.00073586409108154132, -0.00078720502099001812, 0.00083954324108252753,
    -0.00089275410058645252, 0.00094483896088032836, -0.000995387801111127,
    0.0010476684838237769, -0.0011029980730655608, 0.0011561512353262067,
    -0.0012004001027639826, 0.0012274152962881994, -0.0012215221667584738,
    0.0011731686802714954, -0.0010931658738350346, 0.000996981142183015,
    -0.00089047784095011378, 0.00077934515939918935, -0.00067288844792448706,
    0.00057264729023982644, -0.00046889202079069658, 0.00035611288278764578,
    -0.00024628667870835083, 0.0001507740688635328, -6.9627141462212417E-5,
    1.6268240973749365E-5, -0.0, 5.6642858211566963E-6, -2.6456869719322215E-5,
    6.0761884450249384E-5, -0.00010275104130825022, 0.00015185742142142351,
    -0.00020251985436454812, 0.000249050490378505, -0.00029438513842939347,
    0.00034211853438246458, -0.00039076163250400235, 0.00043813720077778053,
    -0.00048497614310450717, 0.00053249441300031884, -0.00058035327766829236,
    0.00062806181452632385, -0.00067581344886635494, 0.000723494875739669,
    -0.00077090623625928982, 0.00081881078920650787, -0.00086761001244279527,
    0.00091574029758105557, -0.00096235313209285043, 0.0010101644082639528,
    -0.0010609362318935568, 0.001110260625969482, -0.0011508876707462181,
    0.0011731686802714954, -0.0011620707783828123, 0.0011102402232723086,
    -0.0010277211340754585, 0.00092628591745783084, -0.00081260767413090943,
    0.00069856966162784454, -0.00059288528187650144, 0.00048677251326140918,
    -0.00037024068668305935, 0.00025484471201137212, -0.00015504021546404532,
    7.1503526694592165E-5, -1.6751965329837333E-5, -0.0, -5.1656954916158491E-6,
    2.4118611949260998E-5, -5.53746502385606E-5, 9.36463534509541E-5,
    -0.0001384452575737666, 0.00018465137001089354, -0.000227033074675797,
    0.00026834581837895636, -0.000311939500608138, 0.00035633253839874242,
    -0.00039941254793057562, 0.00044203792594849387, -0.00048554685991812331,
    0.00052933837242976093, -0.00057255197568252612, 0.00061579977393215978,
    -0.00065971352638815022, 0.00070347614760748415, -0.00074648998171545689,
    0.00079001878177320159, -0.0008348880051685482, 0.00087910561278234942,
    -0.00092127110762238343, 0.00096454610519200847, -0.0010115232252220772,
    0.001057263370520113, -0.0010931658738350346, 0.0011102402232723086,
    -0.0010957114510990568, 0.0010414361708992292, -0.000953658453438468,
    0.00084498689812666683, -0.00072846820391585557, 0.00061537070335835546,
    -0.000503784499390437, 0.00038466879842777681, -0.0002655987662113096,
    0.00016066439798448069, -7.3310121814973474E-5, 1.7031169680251041E-5, -0.0,
    4.6787366391220594E-6, -2.1841020623780708E-5, 5.0126735101436659E-5,
    -8.47380263263087E-5, 0.00012526445597927716, -0.00016709659094584688,
    0.0002054510849645003, -0.000242784689641104, 0.00028220811093218276,
    -0.00032244597408160794, 0.0003614613774484329, -0.0003999106552159458,
    0.00043919933722784372, -0.00047900487492476322, 0.00051825174670344165,
    -0.000557092447791935, 0.00059654315041080875, -0.00063658250095674073,
    0.00067601863694782827, -0.00071472732007782217, 0.00075438286060418877,
    -0.00079539492965426, 0.00083522418990689628, -0.00087291258952110044,
    0.00091245686864164816, -0.00095591513511737161, 0.000996981142183015,
    -0.0010277211340754585, 0.0010414361708992292, -0.0010245485427261411,
    0.00096505400162159426, -0.00087004859523515349, 0.00075861940032717363,
    -0.00064318395434872925, 0.00052421040685588437, -0.00039953279994875223,
    0.00027797053134028925, -0.00016966453680714478, 7.7492457419545474E-5,
    -1.791205025993799E-5, -0.0, -4.1815801268049541E-6, 1.9525310185738945E-5,
    -4.4820239323576006E-5, 7.5761541343894416E-5, -0.00011196876362702279,
    0.00014935258277439084, -0.0001836595749085672, 0.00021703702900670904,
    -0.00025223060053559352, 0.00028817750822856034, -0.00032311945552877873,
    0.00035752183079540347, -0.00039252574390897371, 0.00042803073004905846,
    -0.00046328731793222162, 0.00049814536043864136, -0.00053312858151025923,
    0.000568646950458812, -0.00060432341579085751, 0.00063941802758752818,
    -0.00067421151073646091, 0.00070996685820810747, -0.000746536769342088,
    0.00078183276710265092, -0.00081576193766561976, 0.00085176684472261467,
    -0.00089047784095011378, 0.00092628591745783084, -0.000953658453438468,
    0.00096505400162159426, -0.00094284411993337, 0.00087592100069040692,
    -0.00077818138494462671, 0.00066804746119820079, -0.00054659687294940818,
    0.00041403651879774067, -0.00028695537883172248, 0.00017685435224463065,
    -8.2091687564713115E-5, 1.9207858565414436E-5, -0.0, 3.6690683966219177E-6,
    -1.713470625483487E-5, 3.9343746154593969E-5, -6.6523414855187041E-5,
    9.832093883312552E-5, -0.00013113332947182506, 0.00016125520374952492,
    -0.00019059118719910538, 0.00022150492901222208, -0.00025302861560531995,
    0.00028369312314012029, -0.00031397178339010953, 0.00034474984531266561,
    -0.00037581883107797568, 0.00040670007913172517, -0.00043748203345669222,
    0.00046835331055796793, -0.0004992765951305077, 0.00053032295096379323,
    -0.00056154915414825606, 0.000592619735656584, -0.00062340307505760859,
    0.00065458578373442215, -0.00068648798053878325, 0.00071793381027571428,
    -0.00074824499673292082, 0.00077934515939918935, -0.00081260767413090943,
    0.00084498689812666683, -0.00087004859523515349, 0.00087592100069040692,
    -0.000845937870065239, 0.00077626558786780147, -0.00068008310392301467,
    0.00056368015860371826, -0.00042786610078925579, 0.0002929163603871439,
    -0.00017827041575788554, 8.2821026165926561E-5, -1.9560301110396426E-5, -0.0,
    -3.1666163918452412E-6, 1.4785151949455586E-5, -3.3944187710846431E-5,
    5.7398382124523818E-5, -8.485096773124326E-5, 0.00011317259447630939,
    -0.00013915293218111162, 0.00016446720161180254, -0.00019117495766969047,
    0.00021839076980971993, -0.00024481101141523632, 0.000270923489498002,
    -0.00029755921380324787, 0.00032441445531548478, -0.00035095119971987189,
    0.00037743630613599235, -0.00040426184803879571, 0.000431107093874579,
    -0.00045761909909951281, 0.00048427557987638275, -0.00051152482827517725,
    0.0005386310075629426, -0.00056488936003031118, 0.00059145206309366908,
    -0.00061955943074772481, 0.00064744458141133016, -0.00067288844792448706,
    0.00069856966162784454, -0.00072846820391585557, 0.00075861940032717363,
    -0.00077818138494462671, 0.00077626558786780147, -0.00074361287053067787,
    0.0006756522907032359, -0.00057320632377627178, 0.00044230226573181757,
    -0.00030419088821629703, 0.0001820330111788689, -8.2413093859896226E-5,
    1.9116055727044921E-5, -0.0, 2.6887949416249182E-6, -1.2552184555093961E-5,
    2.8810060050468755E-5, -4.8705454916180005E-5, 7.1999342981801041E-5,
    -9.60412535799218E-5, 0.00011808680006653617, -0.00013954977276241722,
    0.00016221020454126891, -0.00018533167371348279, 0.00020775610627985966,
    -0.00022986756258347186, 0.00025245365677285049, -0.0002753153984632852,
    0.0002978665365850825, -0.00032022099093105842, 0.00034291304340216568,
    -0.00036588097237255776, 0.00038851633314624653, -0.00041083881845087273,
    0.00043369471269890216, -0.00045715459855721034, 0.00047993154667065548,
    -0.00050176885431101406, 0.00052471287499253772, -0.00054942928976426156,
    0.00057264729023982644, -0.00059288528187650144, 0.00061537070335835546,
    -0.00064318395434872925, 0.00066804746119820079, -0.00068008310392301467,
    0.0006756522907032359, -0.00064477131713085753, 0.00057077340675463779,
    -0.00045422903930214265, 0.00032117708716084367, -0.00019568478439069086,
    8.8300543357568118E-5, -2.0143994669160808E-5, -0.0, -2.2013959852030579E-6,
    1.0278126465669661E-5, -2.3591873618754776E-5, 3.98797879793679E-5,
    -5.8944104656317768E-5, 7.8625754280662154E-5, -9.6681487771144972E-5,
    0.00011425169324063829, -0.00013278822378751088, 0.00015171570597264384,
    -0.00017009684319964016, 0.0001882016865004648, -0.00020665272125276903,
    0.00022535799435320324, -0.00024388251046351793, 0.00026220721893100015,
    -0.00028068186709839609, 0.00029943165154605584, -0.00031812461529725854,
    0.00033650548305502677, -0.00035495926850550512, 0.00037395672450657533,
    -0.00039300388564412597, 0.00041127317307571693, -0.00042943841710362408,
    0.00044894791407545888, -0.00046889202079069658, 0.00048677251326140918,
    -0.000503784499390437, 0.00052421040685588437, -0.00054659687294940818,
    0.00056368015860371826, -0.00057320632377627178, 0.00057077340675463779,
    -0.00053367565396539112, 0.00044498382087622103, -0.00032631742499246566,
    0.00020667339338340185, -9.6846191159585842E-5, 2.2673189663780281E-5, -0.0,
    1.6746500603164739E-6, -7.8195129492725258E-6, 1.7951740231721457E-5,
    -3.0351286527324654E-5, 4.4862186145951584E-5, -5.9837527934135268E-5,
    7.3578601345917512E-5, -8.6959098160001563E-5, 0.00010107022843819503,
    -0.00011546369446225496, 0.00012944790969348957, -0.00014324776210018625,
    0.00015730309166867105, -0.00017150803875461474, 0.00018558356998716466,
    -0.000199580723597788, 0.00021368721892755816, -0.00022788040472059246,
    0.00024202360838532927, -0.00025613186348426954, 0.00027033103141143222,
    -0.00028461245939640211, 0.00029883330727025463, -0.00031299980056262189,
    0.00032731464096914033, -0.00034178869440985794, 0.00035611288278764578,
    -0.00037024068668305935, 0.00038466879842777681, -0.00039953279994875223,
    0.00041403651879774067, -0.00042786610078925579, 0.00044230226573181757,
    -0.00045422903930214265, 0.00044498382087622103, -0.00039157770320483854,
    0.00030067887988932988, -0.00019720451085276073, 9.5296009891623792E-5,
    -2.2946882396069766E-5, -0.0, -1.1576826748272837E-6, 5.4043844364079321E-6,
    -1.2405323178740539E-5, 2.0975737248959766E-5, -3.1010880508298004E-5,
    4.1364353037795333E-5, -5.0856898063104489E-5, 6.0105043429969617E-5,
    -6.9870963688013E-5, 7.9824725795765868E-5, -8.9473987534357581E-5,
    9.9005878842071116E-5, -0.00010875121173031197, 0.00011858737017146138,
    -0.00012827158193294024, 0.00013791520876623155, -0.00014773957945828873,
    0.00015761382363928213, -0.0001672780317563722, 0.00017691378785038449,
    -0.00018690272554426472, 0.00019699039548527959, -0.00020655999902026401,
    0.00021596559266929467, -0.0002262478234188786, 0.00023694242602253672,
    -0.00024628667870835083, 0.00025484471201137212, -0.0002655987662113096,
    0.00027797053134028925, -0.00028695537883172248, 0.0002929163603871439,
    -0.00030419088821629703, 0.00032117708716084367, -0.00032631742499246566,
    0.00030067887988932988, -0.00024517228390416482, 0.00016977849542979814,
    -8.435944443381028E-5, 2.0466664738318593E-5, -0.0, 7.0617739100345955E-7,
    -3.2955057990414009E-6, 7.5610326371183439E-6, -1.2780719966266258E-5,
    1.889665626800333E-5, -2.5210022368665863E-5, 3.099279734491573E-5,
    -3.6621081236865617E-5, 4.2574335348619448E-5, -4.8651899178497657E-5,
    5.45292491176696E-5, -6.0317299551396829E-5, 6.6257710608721347E-5,
    -7.22854379228978E-5, 7.818736480130642E-5, -8.40076889686339E-5,
    8.9986437329061272E-5, -9.609556963175269E-5, 0.00010200862928190903,
    -0.00010773049269170723, 0.0001137596061372781, -0.00012014805345491793,
    0.00012610411087194708, -0.00013145040204737274, 0.00013746321061264098,
    -0.00014458814491824734, 0.0001507740688635328, -0.00015504021546404532,
    0.00016066439798448069, -0.00016966453680714478, 0.00017685435224463065,
    -0.00017827041575788554, 0.0001820330111788689, -0.00019568478439069086,
    0.00020667339338340185, -0.00019720451085276073, 0.00016977849542979814,
    -0.00012826744457454186, 6.9088756400678908E-5, -1.760894143441943E-5, -0.0,
    -3.2492028416900742E-7, 1.5161284488018868E-6, -3.477276882326086E-6,
    5.8749777358209739E-6, -8.6847241323445856E-6, 1.1588035214551403E-5,
    -1.4247006761370954E-5, 1.68302531807891E-5, -1.9563452340960596E-5,
    2.2361695837322097E-5, -2.5067661447430254E-5, 2.771941690103608E-5,
    -3.0440180627157261E-5, 3.3222802699130792E-5, -3.5951819030295355E-5,
    3.8607803521202467E-5, -4.1325405498798237E-5, 4.4160488483233705E-5,
    -4.6930881481293617E-5, 4.9521041578005594E-5, -5.2199219813059145E-5,
    5.5189257113177892E-5, -5.80863062427104E-5, 6.0472616363699283E-5,
    -6.2962386426852673E-5, 6.6320994852401958E-5, -6.9627141462212417E-5,
    7.1503526694592165E-5, -7.3310121814973474E-5, 7.7492457419545474E-5,
    -8.2091687564713115E-5, 8.2821026165926561E-5, -8.2413093859896226E-5,
    8.8300543357568118E-5, -9.6846191159585842E-5, 9.5296009891623792E-5,
    -8.435944443381028E-5, 6.9088756400678908E-5, -4.1608012126911243E-5,
    1.1653952874197542E-5, -0.0, 7.5781278777011273E-8, -3.5364298005530304E-7,
    8.1100992313014454E-7, -1.3697633587939363E-6, 2.0243280647222641E-6,
    -2.7012117117572986E-6, 3.3214468197562888E-6, -3.92316484653688E-6,
    4.5593082981639008E-6, -5.2120264471470086E-6, 5.8442324133279225E-6,
    -6.4615513930022085E-6, 7.0930593872121573E-6, -7.7425084952040223E-6,
    8.383013248787671E-6, -9.0010699281547727E-6, 9.6269616914290556E-6,
    -1.028845428909641E-5, 1.0946667409104819E-5, -1.155065971409474E-5,
    1.2154150853637756E-5, -1.2848055011406086E-5, 1.3557241652049813E-5,
    -1.4122435002937857E-5, 1.4647501521055368E-5, -1.5408731560355326E-5,
    1.6268240973749365E-5, -1.6751965329837333E-5, 1.7031169680251041E-5,
    -1.791205025993799E-5, 1.9207858565414436E-5, -1.9560301110396426E-5,
    1.9116055727044921E-5, -2.0143994669160808E-5, 2.2673189663780281E-5,
    -2.2946882396069766E-5, 2.0466664738318593E-5, -1.760894143441943E-5,
    1.1653952874197542E-5, -3.5648517243543225E-6, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -2.46301869964355E-6 };

  static const real_T b_A[16400] = { -122.92585708443505, 89.743962404247725,
    -469.23951004644942, 143.32531878203673, -1025.5289456501509,
    31.99058381611772, -1819.6624942238932, 23.271901759494639,
    -2853.8225394743986, 138.1198565101991, -4099.261352837816,
    100.56020151405892, -5565.3805363637839, 0.84702541282959487,
    -7277.13941411706, 78.586411795835787, -9215.0789475513338,
    146.97426274767963, -11362.080892110174, 41.6777812162796,
    -13744.502135701281, 15.719471768746104, -16368.840333729961,
    131.47593403328628, -19206.120348032749, 110.7898205275151,
    -22261.520144359198, 3.3688914051172816, -25561.928383627914,
    67.340599114444259, -29091.332231365828, 148.98393160798355,
    -32829.29544761841, 52.113791641431931, -36800.065712683892,
    9.5045803688707551, -41014.308589067427, 123.54423323710444,
    -45443.47867521365, 120.20081518969195, -50088.4128660826,
    7.5084029200590408, -54977.319333828207, 56.261575539274567,
    -60097.994613651055, 149.30874676163725, -65427.147957119967,
    63.061929950135578, -70986.367907840919, 4.7681791678185874,
    -76790.246044114945, 114.50464237859434, -82811.314100923424,
    128.57974736552094, -89046.048921945883, 13.171677254544306,
    -95523.3384388902, 45.600609529734896, -102235.06532703183,
    147.94134151222596, -109155.61255565878, 74.273896115989189,
    -116303.41991091125, 1.6176881223081239, -123696.67405488883,
    104.56217628178702, -131309.60682995062, 135.73658574357634,
    -139134.41493247409, 20.230273286702015, -147200.01088532593,
    35.599488142856629, -155502.54760200047, 144.91272814238221,
    -164014.66275498597, 85.495406587169242, -172751.229164924,
    0.12455929000621779, -181733.61611044646, 93.942326671825242,
    -190938.33995427814, 141.50901568112022, -200353.4942217475,
    28.524104476544963, -210007.36030076578, 26.485033385668139,
    -219900.4485936503, 140.29159456583949, -230004.27204430423,
    96.471961350276828, -240329.79919739324, 0.32265632133699285,
    -250901.09730016242, 82.885948099882853, -261697.49983655111,
    145.76612044459679, -272703.2671956055, 37.865069573856985,
    -283945.40821809182, 18.4639579697768, -295428.77921940066,
    134.18274650907904, -307124.41449152364, 106.95461590345923,
    -319039.129540315, 2.2074864434909216, -331199.14374471013,
    71.643795444452337, -343587.07641936751, 148.41135035630208,
    -356183.71178603574, 48.041318690111154, -369014.17358707963,
    11.718177137881923, -382087.55391139357, 126.72473055335561,
    -395375.06533139275, 116.70562723243215, -408879.21574078186,
    5.73630235497275, 122.92585708443505, -89.743962404247725,
    469.23951004644942, -143.32531878203673, 1025.5289456501509,
    -31.99058381611772, 1819.6624942238932, -23.271901759494639,
    2853.8225394743986, -138.1198565101991, 4099.261352837816,
    -100.56020151405892, 5565.3805363637839, -0.84702541282959487,
    7277.13941411706, -78.586411795835787, 9215.0789475513338,
    -146.97426274767963, 11362.080892110174, -41.6777812162796,
    13744.502135701281, -15.719471768746104, 16368.840333729961,
    -131.47593403328628, 19206.120348032749, -110.7898205275151,
    22261.520144359198, -3.3688914051172816, 25561.928383627914,
    -67.340599114444259, 29091.332231365828, -148.98393160798355,
    32829.29544761841, -52.113791641431931, 36800.065712683892,
    -9.5045803688707551, 41014.308589067427, -123.54423323710444,
    45443.47867521365, -120.20081518969195, 50088.4128660826,
    -7.5084029200590408, 54977.319333828207, -56.261575539274567,
    60097.994613651055, -149.30874676163725, 65427.147957119967,
    -63.061929950135578, 70986.367907840919, -4.7681791678185874,
    76790.246044114945, -114.50464237859434, 82811.314100923424,
    -128.57974736552094, 89046.048921945883, -13.171677254544306,
    95523.3384388902, -45.600609529734896, 102235.06532703183,
    -147.94134151222596, 109155.61255565878, -74.273896115989189,
    116303.41991091125, -1.6176881223081239, 123696.67405488883,
    -104.56217628178702, 131309.60682995062, -135.73658574357634,
    139134.41493247409, -20.230273286702015, 147200.01088532593,
    -35.599488142856629, 155502.54760200047, -144.91272814238221,
    164014.66275498597, -85.495406587169242, 172751.229164924,
    -0.12455929000621779, 181733.61611044646, -93.942326671825242,
    190938.33995427814, -141.50901568112022, 200353.4942217475,
    -28.524104476544963, 210007.36030076578, -26.485033385668139,
    219900.4485936503, -140.29159456583949, 230004.27204430423,
    -96.471961350276828, 240329.79919739324, -0.32265632133699285,
    250901.09730016242, -82.885948099882853, 261697.49983655111,
    -145.76612044459679, 272703.2671956055, -37.865069573856985,
    283945.40821809182, -18.4639579697768, 295428.77921940066,
    -134.18274650907904, 307124.41449152364, -106.95461590345923,
    319039.129540315, -2.2074864434909216, 331199.14374471013,
    -71.643795444452337, 343587.07641936751, -148.41135035630208,
    356183.71178603574, -48.041318690111154, 369014.17358707963,
    -11.718177137881923, 382087.55391139357, -126.72473055335561,
    395375.06533139275, -116.70562723243215, 408879.21574078186,
    -5.73630235497275, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0, -0.0,
    -122.92585708443505, 89.743962404247725, -469.23951004644942,
    143.32531878203673, -1025.5289456501509, 31.99058381611772,
    -1819.6624942238932, 23.271901759494639, -2853.8225394743986,
    138.1198565101991, -4099.261352837816, 100.56020151405892,
    -5565.3805363637839, 0.84702541282959487, -7277.13941411706,
    78.586411795835787, -9215.0789475513338, 146.97426274767963,
    -11362.080892110174, 41.6777812162796, -13744.502135701281,
    15.719471768746104, -16368.840333729961, 131.47593403328628,
    -19206.120348032749, 110.7898205275151, -22261.520144359198,
    3.3688914051172816, -25561.928383627914, 67.340599114444259,
    -29091.332231365828, 148.98393160798355, -32829.29544761841,
    52.113791641431931, -36800.065712683892, 9.5045803688707551,
    -41014.308589067427, 123.54423323710444, -45443.47867521365,
    120.20081518969195, -50088.4128660826, 7.5084029200590408,
    -54977.319333828207, 56.261575539274567, -60097.994613651055,
    149.30874676163725, -65427.147957119967, 63.061929950135578,
    -70986.367907840919, 4.7681791678185874, -76790.246044114945,
    114.50464237859434, -82811.314100923424, 128.57974736552094,
    -89046.048921945883, 13.171677254544306, -95523.3384388902,
    45.600609529734896, -102235.06532703183, 147.94134151222596,
    -109155.61255565878, 74.273896115989189, -116303.41991091125,
    1.6176881223081239, -123696.67405488883, 104.56217628178702,
    -131309.60682995062, 135.73658574357634, -139134.41493247409,
    20.230273286702015, -147200.01088532593, 35.599488142856629,
    -155502.54760200047, 144.91272814238221, -164014.66275498597,
    85.495406587169242, -172751.229164924, 0.12455929000621779,
    -181733.61611044646, 93.942326671825242, -190938.33995427814,
    141.50901568112022, -200353.4942217475, 28.524104476544963,
    -210007.36030076578, 26.485033385668139, -219900.4485936503,
    140.29159456583949, -230004.27204430423, 96.471961350276828,
    -240329.79919739324, 0.32265632133699285, -250901.09730016242,
    82.885948099882853, -261697.49983655111, 145.76612044459679,
    -272703.2671956055, 37.865069573856985, -283945.40821809182,
    18.4639579697768, -295428.77921940066, 134.18274650907904,
    -307124.41449152364, 106.95461590345923, -319039.129540315,
    2.2074864434909216, -331199.14374471013, 71.643795444452337,
    -343587.07641936751, 148.41135035630208, -356183.71178603574,
    48.041318690111154, -369014.17358707963, 11.718177137881923,
    -382087.55391139357, 126.72473055335561, -395375.06533139275,
    116.70562723243215, -0.0, -0.0, 122.92585708443505, -89.743962404247725,
    469.23951004644942, -143.32531878203673, 1025.5289456501509,
    -31.99058381611772, 1819.6624942238932, -23.271901759494639,
    2853.8225394743986, -138.1198565101991, 4099.261352837816,
    -100.56020151405892, 5565.3805363637839, -0.84702541282959487,
    7277.13941411706, -78.586411795835787, 9215.0789475513338,
    -146.97426274767963, 11362.080892110174, -41.6777812162796,
    13744.502135701281, -15.719471768746104, 16368.840333729961,
    -131.47593403328628, 19206.120348032749, -110.7898205275151,
    22261.520144359198, -3.3688914051172816, 25561.928383627914,
    -67.340599114444259, 29091.332231365828, -148.98393160798355,
    32829.29544761841, -52.113791641431931, 36800.065712683892,
    -9.5045803688707551, 41014.308589067427, -123.54423323710444,
    45443.47867521365, -120.20081518969195, 50088.4128660826,
    -7.5084029200590408, 54977.319333828207, -56.261575539274567,
    60097.994613651055, -149.30874676163725, 65427.147957119967,
    -63.061929950135578, 70986.367907840919, -4.7681791678185874,
    76790.246044114945, -114.50464237859434, 82811.314100923424,
    -128.57974736552094, 89046.048921945883, -13.171677254544306,
    95523.3384388902, -45.600609529734896, 102235.06532703183,
    -147.94134151222596, 109155.61255565878, -74.273896115989189,
    116303.41991091125, -1.6176881223081239, 123696.67405488883,
    -104.56217628178702, 131309.60682995062, -135.73658574357634,
    139134.41493247409, -20.230273286702015, 147200.01088532593,
    -35.599488142856629, 155502.54760200047, -144.91272814238221,
    164014.66275498597, -85.495406587169242, 172751.229164924,
    -0.12455929000621779, 181733.61611044646, -93.942326671825242,
    190938.33995427814, -141.50901568112022, 200353.4942217475,
    -28.524104476544963, 210007.36030076578, -26.485033385668139,
    219900.4485936503, -140.29159456583949, 230004.27204430423,
    -96.471961350276828, 240329.79919739324, -0.32265632133699285,
    250901.09730016242, -82.885948099882853, 261697.49983655111,
    -145.76612044459679, 272703.2671956055, -37.865069573856985,
    283945.40821809182, -18.4639579697768, 295428.77921940066,
    -134.18274650907904, 307124.41449152364, -106.95461590345923,
    319039.129540315, -2.2074864434909216, 331199.14374471013,
    -71.643795444452337, 343587.07641936751, -148.41135035630208,
    356183.71178603574, -48.041318690111154, 369014.17358707963,
    -11.718177137881923, 382087.55391139357, -126.72473055335561,
    395375.06533139275, -116.70562723243215, -0.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -0.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, -0.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, -0.0, -0.0, -0.0, -0.0, -122.92585708443505, 89.743962404247725,
    -469.23951004644942, 143.32531878203673, -1025.5289456501509,
    31.99058381611772, -1819.6624942238932, 23.271901759494639,
    -2853.8225394743986, 138.1198565101991, -4099.261352837816,
    100.56020151405892, -5565.3805363637839, 0.84702541282959487,
    -7277.13941411706, 78.586411795835787, -9215.0789475513338,
    146.97426274767963, -11362.080892110174, 41.6777812162796,
    -13744.502135701281, 15.719471768746104, -16368.840333729961,
    131.47593403328628, -19206.120348032749, 110.7898205275151,
    -22261.520144359198, 3.3688914051172816, -25561.928383627914,
    67.340599114444259, -29091.332231365828, 148.98393160798355,
    -32829.29544761841, 52.113791641431931, -36800.065712683892,
    9.5045803688707551, -41014.308589067427, 123.54423323710444,
    -45443.47867521365, 120.20081518969195, -50088.4128660826,
    7.5084029200590408, -54977.319333828207, 56.261575539274567,
    -60097.994613651055, 149.30874676163725, -65427.147957119967,
    63.061929950135578, -70986.367907840919, 4.7681791678185874,
    -76790.246044114945, 114.50464237859434, -82811.314100923424,
    128.57974736552094, -89046.048921945883, 13.171677254544306,
    -95523.3384388902, 45.600609529734896, -102235.06532703183,
    147.94134151222596, -109155.61255565878, 74.273896115989189,
    -116303.41991091125, 1.6176881223081239, -123696.67405488883,
    104.56217628178702, -131309.60682995062, 135.73658574357634,
    -139134.41493247409, 20.230273286702015, -147200.01088532593,
    35.599488142856629, -155502.54760200047, 144.91272814238221,
    -164014.66275498597, 85.495406587169242, -172751.229164924,
    0.12455929000621779, -181733.61611044646, 93.942326671825242,
    -190938.33995427814, 141.50901568112022, -200353.4942217475,
    28.524104476544963, -210007.36030076578, 26.485033385668139,
    -219900.4485936503, 140.29159456583949, -230004.27204430423,
    96.471961350276828, -240329.79919739324, 0.32265632133699285,
    -250901.09730016242, 82.885948099882853, -261697.49983655111,
    145.76612044459679, -272703.2671956055, 37.865069573856985,
    -283945.40821809182, 18.4639579697768, -295428.77921940066,
    134.18274650907904, -307124.41449152364, 106.95461590345923,
    -319039.129540315, 2.2074864434909216, -331199.14374471013,
    71.643795444452337, -343587.07641936751, 148.41135035630208,
    -356183.71178603574, 48.041318690111154, -369014.17358707963,
    11.718177137881923, -382087.55391139357, 126.72473055335561, -0.0, -0.0,
    -0.0, -0.0, 122.92585708443505, -89.743962404247725, 469.23951004644942,
    -143.32531878203673, 1025.5289456501509, -31.99058381611772,
    1819.6624942238932, -23.271901759494639, 2853.8225394743986,
    -138.1198565101991, 4099.261352837816, -100.56020151405892,
    5565.3805363637839, -0.84702541282959487, 7277.13941411706,
    -78.586411795835787, 9215.0789475513338, -146.97426274767963,
    11362.080892110174, -41.6777812162796, 13744.502135701281,
    -15.719471768746104, 16368.840333729961, -131.47593403328628,
    19206.120348032749, -110.7898205275151, 22261.520144359198,
    -3.3688914051172816, 25561.928383627914, -67.340599114444259,
    29091.332231365828, -148.98393160798355, 32829.29544761841,
    -52.113791641431931, 36800.065712683892, -9.5045803688707551,
    41014.308589067427, -123.54423323710444, 45443.47867521365,
    -120.20081518969195, 50088.4128660826, -7.5084029200590408,
    54977.319333828207, -56.261575539274567, 60097.994613651055,
    -149.30874676163725, 65427.147957119967, -63.061929950135578,
    70986.367907840919, -4.7681791678185874, 76790.246044114945,
    -114.50464237859434, 82811.314100923424, -128.57974736552094,
    89046.048921945883, -13.171677254544306, 95523.3384388902,
    -45.600609529734896, 102235.06532703183, -147.94134151222596,
    109155.61255565878, -74.273896115989189, 116303.41991091125,
    -1.6176881223081239, 123696.67405488883, -104.56217628178702,
    131309.60682995062, -135.73658574357634, 139134.41493247409,
    -20.230273286702015, 147200.01088532593, -35.599488142856629,
    155502.54760200047, -144.91272814238221, 164014.66275498597,
    -85.495406587169242, 172751.229164924, -0.12455929000621779,
    181733.61611044646, -93.942326671825242, 190938.33995427814,
    -141.50901568112022, 200353.4942217475, -28.524104476544963,
    210007.36030076578, -26.485033385668139, 219900.4485936503,
    -140.29159456583949, 230004.27204430423, -96.471961350276828,
    240329.79919739324, -0.32265632133699285, 250901.09730016242,
    -82.885948099882853, 261697.49983655111, -145.76612044459679,
    272703.2671956055, -37.865069573856985, 283945.40821809182,
    -18.4639579697768, 295428.77921940066, -134.18274650907904,
    307124.41449152364, -106.95461590345923, 319039.129540315,
    -2.2074864434909216, 331199.14374471013, -71.643795444452337,
    343587.07641936751, -148.41135035630208, 356183.71178603574,
    -48.041318690111154, 369014.17358707963, -11.718177137881923,
    382087.55391139357, -126.72473055335561, -0.0, -0.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -0.0, -0.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, -0.0, -0.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -122.92585708443505,
    89.743962404247725, -469.23951004644942, 143.32531878203673,
    -1025.5289456501509, 31.99058381611772, -1819.6624942238932,
    23.271901759494639, -2853.8225394743986, 138.1198565101991,
    -4099.261352837816, 100.56020151405892, -5565.3805363637839,
    0.84702541282959487, -7277.13941411706, 78.586411795835787,
    -9215.0789475513338, 146.97426274767963, -11362.080892110174,
    41.6777812162796, -13744.502135701281, 15.719471768746104,
    -16368.840333729961, 131.47593403328628, -19206.120348032749,
    110.7898205275151, -22261.520144359198, 3.3688914051172816,
    -25561.928383627914, 67.340599114444259, -29091.332231365828,
    148.98393160798355, -32829.29544761841, 52.113791641431931,
    -36800.065712683892, 9.5045803688707551, -41014.308589067427,
    123.54423323710444, -45443.47867521365, 120.20081518969195,
    -50088.4128660826, 7.5084029200590408, -54977.319333828207,
    56.261575539274567, -60097.994613651055, 149.30874676163725,
    -65427.147957119967, 63.061929950135578, -70986.367907840919,
    4.7681791678185874, -76790.246044114945, 114.50464237859434,
    -82811.314100923424, 128.57974736552094, -89046.048921945883,
    13.171677254544306, -95523.3384388902, 45.600609529734896,
    -102235.06532703183, 147.94134151222596, -109155.61255565878,
    74.273896115989189, -116303.41991091125, 1.6176881223081239,
    -123696.67405488883, 104.56217628178702, -131309.60682995062,
    135.73658574357634, -139134.41493247409, 20.230273286702015,
    -147200.01088532593, 35.599488142856629, -155502.54760200047,
    144.91272814238221, -164014.66275498597, 85.495406587169242,
    -172751.229164924, 0.12455929000621779, -181733.61611044646,
    93.942326671825242, -190938.33995427814, 141.50901568112022,
    -200353.4942217475, 28.524104476544963, -210007.36030076578,
    26.485033385668139, -219900.4485936503, 140.29159456583949,
    -230004.27204430423, 96.471961350276828, -240329.79919739324,
    0.32265632133699285, -250901.09730016242, 82.885948099882853,
    -261697.49983655111, 145.76612044459679, -272703.2671956055,
    37.865069573856985, -283945.40821809182, 18.4639579697768,
    -295428.77921940066, 134.18274650907904, -307124.41449152364,
    106.95461590345923, -319039.129540315, 2.2074864434909216,
    -331199.14374471013, 71.643795444452337, -343587.07641936751,
    148.41135035630208, -356183.71178603574, 48.041318690111154,
    -369014.17358707963, 11.718177137881923, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    122.92585708443505, -89.743962404247725, 469.23951004644942,
    -143.32531878203673, 1025.5289456501509, -31.99058381611772,
    1819.6624942238932, -23.271901759494639, 2853.8225394743986,
    -138.1198565101991, 4099.261352837816, -100.56020151405892,
    5565.3805363637839, -0.84702541282959487, 7277.13941411706,
    -78.586411795835787, 9215.0789475513338, -146.97426274767963,
    11362.080892110174, -41.6777812162796, 13744.502135701281,
    -15.719471768746104, 16368.840333729961, -131.47593403328628,
    19206.120348032749, -110.7898205275151, 22261.520144359198,
    -3.3688914051172816, 25561.928383627914, -67.340599114444259,
    29091.332231365828, -148.98393160798355, 32829.29544761841,
    -52.113791641431931, 36800.065712683892, -9.5045803688707551,
    41014.308589067427, -123.54423323710444, 45443.47867521365,
    -120.20081518969195, 50088.4128660826, -7.5084029200590408,
    54977.319333828207, -56.261575539274567, 60097.994613651055,
    -149.30874676163725, 65427.147957119967, -63.061929950135578,
    70986.367907840919, -4.7681791678185874, 76790.246044114945,
    -114.50464237859434, 82811.314100923424, -128.57974736552094,
    89046.048921945883, -13.171677254544306, 95523.3384388902,
    -45.600609529734896, 102235.06532703183, -147.94134151222596,
    109155.61255565878, -74.273896115989189, 116303.41991091125,
    -1.6176881223081239, 123696.67405488883, -104.56217628178702,
    131309.60682995062, -135.73658574357634, 139134.41493247409,
    -20.230273286702015, 147200.01088532593, -35.599488142856629,
    155502.54760200047, -144.91272814238221, 164014.66275498597,
    -85.495406587169242, 172751.229164924, -0.12455929000621779,
    181733.61611044646, -93.942326671825242, 190938.33995427814,
    -141.50901568112022, 200353.4942217475, -28.524104476544963,
    210007.36030076578, -26.485033385668139, 219900.4485936503,
    -140.29159456583949, 230004.27204430423, -96.471961350276828,
    240329.79919739324, -0.32265632133699285, 250901.09730016242,
    -82.885948099882853, 261697.49983655111, -145.76612044459679,
    272703.2671956055, -37.865069573856985, 283945.40821809182,
    -18.4639579697768, 295428.77921940066, -134.18274650907904,
    307124.41449152364, -106.95461590345923, 319039.129540315,
    -2.2074864434909216, 331199.14374471013, -71.643795444452337,
    343587.07641936751, -148.41135035630208, 356183.71178603574,
    -48.041318690111154, 369014.17358707963, -11.718177137881923, -0.0, -0.0,
    -0.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -0.0,
    -0.0, -0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, -0.0, -0.0, -0.0, -1.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 0.0, 0.0, 0.0, 1.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -122.92585708443505, 89.743962404247725, -469.23951004644942,
    143.32531878203673, -1025.5289456501509, 31.99058381611772,
    -1819.6624942238932, 23.271901759494639, -2853.8225394743986,
    138.1198565101991, -4099.261352837816, 100.56020151405892,
    -5565.3805363637839, 0.84702541282959487, -7277.13941411706,
    78.586411795835787, -9215.0789475513338, 146.97426274767963,
    -11362.080892110174, 41.6777812162796, -13744.502135701281,
    15.719471768746104, -16368.840333729961, 131.47593403328628,
    -19206.120348032749, 110.7898205275151, -22261.520144359198,
    3.3688914051172816, -25561.928383627914, 67.340599114444259,
    -29091.332231365828, 148.98393160798355, -32829.29544761841,
    52.113791641431931, -36800.065712683892, 9.5045803688707551,
    -41014.308589067427, 123.54423323710444, -45443.47867521365,
    120.20081518969195, -50088.4128660826, 7.5084029200590408,
    -54977.319333828207, 56.261575539274567, -60097.994613651055,
    149.30874676163725, -65427.147957119967, 63.061929950135578,
    -70986.367907840919, 4.7681791678185874, -76790.246044114945,
    114.50464237859434, -82811.314100923424, 128.57974736552094,
    -89046.048921945883, 13.171677254544306, -95523.3384388902,
    45.600609529734896, -102235.06532703183, 147.94134151222596,
    -109155.61255565878, 74.273896115989189, -116303.41991091125,
    1.6176881223081239, -123696.67405488883, 104.56217628178702,
    -131309.60682995062, 135.73658574357634, -139134.41493247409,
    20.230273286702015, -147200.01088532593, 35.599488142856629,
    -155502.54760200047, 144.91272814238221, -164014.66275498597,
    85.495406587169242, -172751.229164924, 0.12455929000621779,
    -181733.61611044646, 93.942326671825242, -190938.33995427814,
    141.50901568112022, -200353.4942217475, 28.524104476544963,
    -210007.36030076578, 26.485033385668139, -219900.4485936503,
    140.29159456583949, -230004.27204430423, 96.471961350276828,
    -240329.79919739324, 0.32265632133699285, -250901.09730016242,
    82.885948099882853, -261697.49983655111, 145.76612044459679,
    -272703.2671956055, 37.865069573856985, -283945.40821809182,
    18.4639579697768, -295428.77921940066, 134.18274650907904,
    -307124.41449152364, 106.95461590345923, -319039.129540315,
    2.2074864434909216, -331199.14374471013, 71.643795444452337,
    -343587.07641936751, 148.41135035630208, -356183.71178603574,
    48.041318690111154, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    122.92585708443505, -89.743962404247725, 469.23951004644942,
    -143.32531878203673, 1025.5289456501509, -31.99058381611772,
    1819.6624942238932, -23.271901759494639, 2853.8225394743986,
    -138.1198565101991, 4099.261352837816, -100.56020151405892,
    5565.3805363637839, -0.84702541282959487, 7277.13941411706,
    -78.586411795835787, 9215.0789475513338, -146.97426274767963,
    11362.080892110174, -41.6777812162796, 13744.502135701281,
    -15.719471768746104, 16368.840333729961, -131.47593403328628,
    19206.120348032749, -110.7898205275151, 22261.520144359198,
    -3.3688914051172816, 25561.928383627914, -67.340599114444259,
    29091.332231365828, -148.98393160798355, 32829.29544761841,
    -52.113791641431931, 36800.065712683892, -9.5045803688707551,
    41014.308589067427, -123.54423323710444, 45443.47867521365,
    -120.20081518969195, 50088.4128660826, -7.5084029200590408,
    54977.319333828207, -56.261575539274567, 60097.994613651055,
    -149.30874676163725, 65427.147957119967, -63.061929950135578,
    70986.367907840919, -4.7681791678185874, 76790.246044114945,
    -114.50464237859434, 82811.314100923424, -128.57974736552094,
    89046.048921945883, -13.171677254544306, 95523.3384388902,
    -45.600609529734896, 102235.06532703183, -147.94134151222596,
    109155.61255565878, -74.273896115989189, 116303.41991091125,
    -1.6176881223081239, 123696.67405488883, -104.56217628178702,
    131309.60682995062, -135.73658574357634, 139134.41493247409,
    -20.230273286702015, 147200.01088532593, -35.599488142856629,
    155502.54760200047, -144.91272814238221, 164014.66275498597,
    -85.495406587169242, 172751.229164924, -0.12455929000621779,
    181733.61611044646, -93.942326671825242, 190938.33995427814,
    -141.50901568112022, 200353.4942217475, -28.524104476544963,
    210007.36030076578, -26.485033385668139, 219900.4485936503,
    -140.29159456583949, 230004.27204430423, -96.471961350276828,
    240329.79919739324, -0.32265632133699285, 250901.09730016242,
    -82.885948099882853, 261697.49983655111, -145.76612044459679,
    272703.2671956055, -37.865069573856985, 283945.40821809182,
    -18.4639579697768, 295428.77921940066, -134.18274650907904,
    307124.41449152364, -106.95461590345923, 319039.129540315,
    -2.2074864434909216, 331199.14374471013, -71.643795444452337,
    343587.07641936751, -148.41135035630208, 356183.71178603574,
    -48.041318690111154, -0.0, -0.0, -0.0, -0.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -0.0, -0.0, -0.0, -0.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, -0.0, -0.0, -0.0, -0.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -122.92585708443505,
    89.743962404247725, -469.23951004644942, 143.32531878203673,
    -1025.5289456501509, 31.99058381611772, -1819.6624942238932,
    23.271901759494639, -2853.8225394743986, 138.1198565101991,
    -4099.261352837816, 100.56020151405892, -5565.3805363637839,
    0.84702541282959487, -7277.13941411706, 78.586411795835787,
    -9215.0789475513338, 146.97426274767963, -11362.080892110174,
    41.6777812162796, -13744.502135701281, 15.719471768746104,
    -16368.840333729961, 131.47593403328628, -19206.120348032749,
    110.7898205275151, -22261.520144359198, 3.3688914051172816,
    -25561.928383627914, 67.340599114444259, -29091.332231365828,
    148.98393160798355, -32829.29544761841, 52.113791641431931,
    -36800.065712683892, 9.5045803688707551, -41014.308589067427,
    123.54423323710444, -45443.47867521365, 120.20081518969195,
    -50088.4128660826, 7.5084029200590408, -54977.319333828207,
    56.261575539274567, -60097.994613651055, 149.30874676163725,
    -65427.147957119967, 63.061929950135578, -70986.367907840919,
    4.7681791678185874, -76790.246044114945, 114.50464237859434,
    -82811.314100923424, 128.57974736552094, -89046.048921945883,
    13.171677254544306, -95523.3384388902, 45.600609529734896,
    -102235.06532703183, 147.94134151222596, -109155.61255565878,
    74.273896115989189, -116303.41991091125, 1.6176881223081239,
    -123696.67405488883, 104.56217628178702, -131309.60682995062,
    135.73658574357634, -139134.41493247409, 20.230273286702015,
    -147200.01088532593, 35.599488142856629, -155502.54760200047,
    144.91272814238221, -164014.66275498597, 85.495406587169242,
    -172751.229164924, 0.12455929000621779, -181733.61611044646,
    93.942326671825242, -190938.33995427814, 141.50901568112022,
    -200353.4942217475, 28.524104476544963, -210007.36030076578,
    26.485033385668139, -219900.4485936503, 140.29159456583949,
    -230004.27204430423, 96.471961350276828, -240329.79919739324,
    0.32265632133699285, -250901.09730016242, 82.885948099882853,
    -261697.49983655111, 145.76612044459679, -272703.2671956055,
    37.865069573856985, -283945.40821809182, 18.4639579697768,
    -295428.77921940066, 134.18274650907904, -307124.41449152364,
    106.95461590345923, -319039.129540315, 2.2074864434909216,
    -331199.14374471013, 71.643795444452337, -343587.07641936751,
    148.41135035630208, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, 122.92585708443505, -89.743962404247725, 469.23951004644942,
    -143.32531878203673, 1025.5289456501509, -31.99058381611772,
    1819.6624942238932, -23.271901759494639, 2853.8225394743986,
    -138.1198565101991, 4099.261352837816, -100.56020151405892,
    5565.3805363637839, -0.84702541282959487, 7277.13941411706,
    -78.586411795835787, 9215.0789475513338, -146.97426274767963,
    11362.080892110174, -41.6777812162796, 13744.502135701281,
    -15.719471768746104, 16368.840333729961, -131.47593403328628,
    19206.120348032749, -110.7898205275151, 22261.520144359198,
    -3.3688914051172816, 25561.928383627914, -67.340599114444259,
    29091.332231365828, -148.98393160798355, 32829.29544761841,
    -52.113791641431931, 36800.065712683892, -9.5045803688707551,
    41014.308589067427, -123.54423323710444, 45443.47867521365,
    -120.20081518969195, 50088.4128660826, -7.5084029200590408,
    54977.319333828207, -56.261575539274567, 60097.994613651055,
    -149.30874676163725, 65427.147957119967, -63.061929950135578,
    70986.367907840919, -4.7681791678185874, 76790.246044114945,
    -114.50464237859434, 82811.314100923424, -128.57974736552094,
    89046.048921945883, -13.171677254544306, 95523.3384388902,
    -45.600609529734896, 102235.06532703183, -147.94134151222596,
    109155.61255565878, -74.273896115989189, 116303.41991091125,
    -1.6176881223081239, 123696.67405488883, -104.56217628178702,
    131309.60682995062, -135.73658574357634, 139134.41493247409,
    -20.230273286702015, 147200.01088532593, -35.599488142856629,
    155502.54760200047, -144.91272814238221, 164014.66275498597,
    -85.495406587169242, 172751.229164924, -0.12455929000621779,
    181733.61611044646, -93.942326671825242, 190938.33995427814,
    -141.50901568112022, 200353.4942217475, -28.524104476544963,
    210007.36030076578, -26.485033385668139, 219900.4485936503,
    -140.29159456583949, 230004.27204430423, -96.471961350276828,
    240329.79919739324, -0.32265632133699285, 250901.09730016242,
    -82.885948099882853, 261697.49983655111, -145.76612044459679,
    272703.2671956055, -37.865069573856985, 283945.40821809182,
    -18.4639579697768, 295428.77921940066, -134.18274650907904,
    307124.41449152364, -106.95461590345923, 319039.129540315,
    -2.2074864434909216, 331199.14374471013, -71.643795444452337,
    343587.07641936751, -148.41135035630208, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -122.92585708443505, 89.743962404247725, -469.23951004644942,
    143.32531878203673, -1025.5289456501509, 31.99058381611772,
    -1819.6624942238932, 23.271901759494639, -2853.8225394743986,
    138.1198565101991, -4099.261352837816, 100.56020151405892,
    -5565.3805363637839, 0.84702541282959487, -7277.13941411706,
    78.586411795835787, -9215.0789475513338, 146.97426274767963,
    -11362.080892110174, 41.6777812162796, -13744.502135701281,
    15.719471768746104, -16368.840333729961, 131.47593403328628,
    -19206.120348032749, 110.7898205275151, -22261.520144359198,
    3.3688914051172816, -25561.928383627914, 67.340599114444259,
    -29091.332231365828, 148.98393160798355, -32829.29544761841,
    52.113791641431931, -36800.065712683892, 9.5045803688707551,
    -41014.308589067427, 123.54423323710444, -45443.47867521365,
    120.20081518969195, -50088.4128660826, 7.5084029200590408,
    -54977.319333828207, 56.261575539274567, -60097.994613651055,
    149.30874676163725, -65427.147957119967, 63.061929950135578,
    -70986.367907840919, 4.7681791678185874, -76790.246044114945,
    114.50464237859434, -82811.314100923424, 128.57974736552094,
    -89046.048921945883, 13.171677254544306, -95523.3384388902,
    45.600609529734896, -102235.06532703183, 147.94134151222596,
    -109155.61255565878, 74.273896115989189, -116303.41991091125,
    1.6176881223081239, -123696.67405488883, 104.56217628178702,
    -131309.60682995062, 135.73658574357634, -139134.41493247409,
    20.230273286702015, -147200.01088532593, 35.599488142856629,
    -155502.54760200047, 144.91272814238221, -164014.66275498597,
    85.495406587169242, -172751.229164924, 0.12455929000621779,
    -181733.61611044646, 93.942326671825242, -190938.33995427814,
    141.50901568112022, -200353.4942217475, 28.524104476544963,
    -210007.36030076578, 26.485033385668139, -219900.4485936503,
    140.29159456583949, -230004.27204430423, 96.471961350276828,
    -240329.79919739324, 0.32265632133699285, -250901.09730016242,
    82.885948099882853, -261697.49983655111, 145.76612044459679,
    -272703.2671956055, 37.865069573856985, -283945.40821809182,
    18.4639579697768, -295428.77921940066, 134.18274650907904,
    -307124.41449152364, 106.95461590345923, -319039.129540315,
    2.2074864434909216, -331199.14374471013, 71.643795444452337, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    122.92585708443505, -89.743962404247725, 469.23951004644942,
    -143.32531878203673, 1025.5289456501509, -31.99058381611772,
    1819.6624942238932, -23.271901759494639, 2853.8225394743986,
    -138.1198565101991, 4099.261352837816, -100.56020151405892,
    5565.3805363637839, -0.84702541282959487, 7277.13941411706,
    -78.586411795835787, 9215.0789475513338, -146.97426274767963,
    11362.080892110174, -41.6777812162796, 13744.502135701281,
    -15.719471768746104, 16368.840333729961, -131.47593403328628,
    19206.120348032749, -110.7898205275151, 22261.520144359198,
    -3.3688914051172816, 25561.928383627914, -67.340599114444259,
    29091.332231365828, -148.98393160798355, 32829.29544761841,
    -52.113791641431931, 36800.065712683892, -9.5045803688707551,
    41014.308589067427, -123.54423323710444, 45443.47867521365,
    -120.20081518969195, 50088.4128660826, -7.5084029200590408,
    54977.319333828207, -56.261575539274567, 60097.994613651055,
    -149.30874676163725, 65427.147957119967, -63.061929950135578,
    70986.367907840919, -4.7681791678185874, 76790.246044114945,
    -114.50464237859434, 82811.314100923424, -128.57974736552094,
    89046.048921945883, -13.171677254544306, 95523.3384388902,
    -45.600609529734896, 102235.06532703183, -147.94134151222596,
    109155.61255565878, -74.273896115989189, 116303.41991091125,
    -1.6176881223081239, 123696.67405488883, -104.56217628178702,
    131309.60682995062, -135.73658574357634, 139134.41493247409,
    -20.230273286702015, 147200.01088532593, -35.599488142856629,
    155502.54760200047, -144.91272814238221, 164014.66275498597,
    -85.495406587169242, 172751.229164924, -0.12455929000621779,
    181733.61611044646, -93.942326671825242, 190938.33995427814,
    -141.50901568112022, 200353.4942217475, -28.524104476544963,
    210007.36030076578, -26.485033385668139, 219900.4485936503,
    -140.29159456583949, 230004.27204430423, -96.471961350276828,
    240329.79919739324, -0.32265632133699285, 250901.09730016242,
    -82.885948099882853, 261697.49983655111, -145.76612044459679,
    272703.2671956055, -37.865069573856985, 283945.40821809182,
    -18.4639579697768, 295428.77921940066, -134.18274650907904,
    307124.41449152364, -106.95461590345923, 319039.129540315,
    -2.2074864434909216, 331199.14374471013, -71.643795444452337, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -122.92585708443505,
    89.743962404247725, -469.23951004644942, 143.32531878203673,
    -1025.5289456501509, 31.99058381611772, -1819.6624942238932,
    23.271901759494639, -2853.8225394743986, 138.1198565101991,
    -4099.261352837816, 100.56020151405892, -5565.3805363637839,
    0.84702541282959487, -7277.13941411706, 78.586411795835787,
    -9215.0789475513338, 146.97426274767963, -11362.080892110174,
    41.6777812162796, -13744.502135701281, 15.719471768746104,
    -16368.840333729961, 131.47593403328628, -19206.120348032749,
    110.7898205275151, -22261.520144359198, 3.3688914051172816,
    -25561.928383627914, 67.340599114444259, -29091.332231365828,
    148.98393160798355, -32829.29544761841, 52.113791641431931,
    -36800.065712683892, 9.5045803688707551, -41014.308589067427,
    123.54423323710444, -45443.47867521365, 120.20081518969195,
    -50088.4128660826, 7.5084029200590408, -54977.319333828207,
    56.261575539274567, -60097.994613651055, 149.30874676163725,
    -65427.147957119967, 63.061929950135578, -70986.367907840919,
    4.7681791678185874, -76790.246044114945, 114.50464237859434,
    -82811.314100923424, 128.57974736552094, -89046.048921945883,
    13.171677254544306, -95523.3384388902, 45.600609529734896,
    -102235.06532703183, 147.94134151222596, -109155.61255565878,
    74.273896115989189, -116303.41991091125, 1.6176881223081239,
    -123696.67405488883, 104.56217628178702, -131309.60682995062,
    135.73658574357634, -139134.41493247409, 20.230273286702015,
    -147200.01088532593, 35.599488142856629, -155502.54760200047,
    144.91272814238221, -164014.66275498597, 85.495406587169242,
    -172751.229164924, 0.12455929000621779, -181733.61611044646,
    93.942326671825242, -190938.33995427814, 141.50901568112022,
    -200353.4942217475, 28.524104476544963, -210007.36030076578,
    26.485033385668139, -219900.4485936503, 140.29159456583949,
    -230004.27204430423, 96.471961350276828, -240329.79919739324,
    0.32265632133699285, -250901.09730016242, 82.885948099882853,
    -261697.49983655111, 145.76612044459679, -272703.2671956055,
    37.865069573856985, -283945.40821809182, 18.4639579697768,
    -295428.77921940066, 134.18274650907904, -307124.41449152364,
    106.95461590345923, -319039.129540315, 2.2074864434909216, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    122.92585708443505, -89.743962404247725, 469.23951004644942,
    -143.32531878203673, 1025.5289456501509, -31.99058381611772,
    1819.6624942238932, -23.271901759494639, 2853.8225394743986,
    -138.1198565101991, 4099.261352837816, -100.56020151405892,
    5565.3805363637839, -0.84702541282959487, 7277.13941411706,
    -78.586411795835787, 9215.0789475513338, -146.97426274767963,
    11362.080892110174, -41.6777812162796, 13744.502135701281,
    -15.719471768746104, 16368.840333729961, -131.47593403328628,
    19206.120348032749, -110.7898205275151, 22261.520144359198,
    -3.3688914051172816, 25561.928383627914, -67.340599114444259,
    29091.332231365828, -148.98393160798355, 32829.29544761841,
    -52.113791641431931, 36800.065712683892, -9.5045803688707551,
    41014.308589067427, -123.54423323710444, 45443.47867521365,
    -120.20081518969195, 50088.4128660826, -7.5084029200590408,
    54977.319333828207, -56.261575539274567, 60097.994613651055,
    -149.30874676163725, 65427.147957119967, -63.061929950135578,
    70986.367907840919, -4.7681791678185874, 76790.246044114945,
    -114.50464237859434, 82811.314100923424, -128.57974736552094,
    89046.048921945883, -13.171677254544306, 95523.3384388902,
    -45.600609529734896, 102235.06532703183, -147.94134151222596,
    109155.61255565878, -74.273896115989189, 116303.41991091125,
    -1.6176881223081239, 123696.67405488883, -104.56217628178702,
    131309.60682995062, -135.73658574357634, 139134.41493247409,
    -20.230273286702015, 147200.01088532593, -35.599488142856629,
    155502.54760200047, -144.91272814238221, 164014.66275498597,
    -85.495406587169242, 172751.229164924, -0.12455929000621779,
    181733.61611044646, -93.942326671825242, 190938.33995427814,
    -141.50901568112022, 200353.4942217475, -28.524104476544963,
    210007.36030076578, -26.485033385668139, 219900.4485936503,
    -140.29159456583949, 230004.27204430423, -96.471961350276828,
    240329.79919739324, -0.32265632133699285, 250901.09730016242,
    -82.885948099882853, 261697.49983655111, -145.76612044459679,
    272703.2671956055, -37.865069573856985, 283945.40821809182,
    -18.4639579697768, 295428.77921940066, -134.18274650907904,
    307124.41449152364, -106.95461590345923, 319039.129540315,
    -2.2074864434909216, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -122.92585708443505, 89.743962404247725, -469.23951004644942,
    143.32531878203673, -1025.5289456501509, 31.99058381611772,
    -1819.6624942238932, 23.271901759494639, -2853.8225394743986,
    138.1198565101991, -4099.261352837816, 100.56020151405892,
    -5565.3805363637839, 0.84702541282959487, -7277.13941411706,
    78.586411795835787, -9215.0789475513338, 146.97426274767963,
    -11362.080892110174, 41.6777812162796, -13744.502135701281,
    15.719471768746104, -16368.840333729961, 131.47593403328628,
    -19206.120348032749, 110.7898205275151, -22261.520144359198,
    3.3688914051172816, -25561.928383627914, 67.340599114444259,
    -29091.332231365828, 148.98393160798355, -32829.29544761841,
    52.113791641431931, -36800.065712683892, 9.5045803688707551,
    -41014.308589067427, 123.54423323710444, -45443.47867521365,
    120.20081518969195, -50088.4128660826, 7.5084029200590408,
    -54977.319333828207, 56.261575539274567, -60097.994613651055,
    149.30874676163725, -65427.147957119967, 63.061929950135578,
    -70986.367907840919, 4.7681791678185874, -76790.246044114945,
    114.50464237859434, -82811.314100923424, 128.57974736552094,
    -89046.048921945883, 13.171677254544306, -95523.3384388902,
    45.600609529734896, -102235.06532703183, 147.94134151222596,
    -109155.61255565878, 74.273896115989189, -116303.41991091125,
    1.6176881223081239, -123696.67405488883, 104.56217628178702,
    -131309.60682995062, 135.73658574357634, -139134.41493247409,
    20.230273286702015, -147200.01088532593, 35.599488142856629,
    -155502.54760200047, 144.91272814238221, -164014.66275498597,
    85.495406587169242, -172751.229164924, 0.12455929000621779,
    -181733.61611044646, 93.942326671825242, -190938.33995427814,
    141.50901568112022, -200353.4942217475, 28.524104476544963,
    -210007.36030076578, 26.485033385668139, -219900.4485936503,
    140.29159456583949, -230004.27204430423, 96.471961350276828,
    -240329.79919739324, 0.32265632133699285, -250901.09730016242,
    82.885948099882853, -261697.49983655111, 145.76612044459679,
    -272703.2671956055, 37.865069573856985, -283945.40821809182,
    18.4639579697768, -295428.77921940066, 134.18274650907904,
    -307124.41449152364, 106.95461590345923, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    122.92585708443505, -89.743962404247725, 469.23951004644942,
    -143.32531878203673, 1025.5289456501509, -31.99058381611772,
    1819.6624942238932, -23.271901759494639, 2853.8225394743986,
    -138.1198565101991, 4099.261352837816, -100.56020151405892,
    5565.3805363637839, -0.84702541282959487, 7277.13941411706,
    -78.586411795835787, 9215.0789475513338, -146.97426274767963,
    11362.080892110174, -41.6777812162796, 13744.502135701281,
    -15.719471768746104, 16368.840333729961, -131.47593403328628,
    19206.120348032749, -110.7898205275151, 22261.520144359198,
    -3.3688914051172816, 25561.928383627914, -67.340599114444259,
    29091.332231365828, -148.98393160798355, 32829.29544761841,
    -52.113791641431931, 36800.065712683892, -9.5045803688707551,
    41014.308589067427, -123.54423323710444, 45443.47867521365,
    -120.20081518969195, 50088.4128660826, -7.5084029200590408,
    54977.319333828207, -56.261575539274567, 60097.994613651055,
    -149.30874676163725, 65427.147957119967, -63.061929950135578,
    70986.367907840919, -4.7681791678185874, 76790.246044114945,
    -114.50464237859434, 82811.314100923424, -128.57974736552094,
    89046.048921945883, -13.171677254544306, 95523.3384388902,
    -45.600609529734896, 102235.06532703183, -147.94134151222596,
    109155.61255565878, -74.273896115989189, 116303.41991091125,
    -1.6176881223081239, 123696.67405488883, -104.56217628178702,
    131309.60682995062, -135.73658574357634, 139134.41493247409,
    -20.230273286702015, 147200.01088532593, -35.599488142856629,
    155502.54760200047, -144.91272814238221, 164014.66275498597,
    -85.495406587169242, 172751.229164924, -0.12455929000621779,
    181733.61611044646, -93.942326671825242, 190938.33995427814,
    -141.50901568112022, 200353.4942217475, -28.524104476544963,
    210007.36030076578, -26.485033385668139, 219900.4485936503,
    -140.29159456583949, 230004.27204430423, -96.471961350276828,
    240329.79919739324, -0.32265632133699285, 250901.09730016242,
    -82.885948099882853, 261697.49983655111, -145.76612044459679,
    272703.2671956055, -37.865069573856985, 283945.40821809182,
    -18.4639579697768, 295428.77921940066, -134.18274650907904,
    307124.41449152364, -106.95461590345923, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -122.92585708443505,
    89.743962404247725, -469.23951004644942, 143.32531878203673,
    -1025.5289456501509, 31.99058381611772, -1819.6624942238932,
    23.271901759494639, -2853.8225394743986, 138.1198565101991,
    -4099.261352837816, 100.56020151405892, -5565.3805363637839,
    0.84702541282959487, -7277.13941411706, 78.586411795835787,
    -9215.0789475513338, 146.97426274767963, -11362.080892110174,
    41.6777812162796, -13744.502135701281, 15.719471768746104,
    -16368.840333729961, 131.47593403328628, -19206.120348032749,
    110.7898205275151, -22261.520144359198, 3.3688914051172816,
    -25561.928383627914, 67.340599114444259, -29091.332231365828,
    148.98393160798355, -32829.29544761841, 52.113791641431931,
    -36800.065712683892, 9.5045803688707551, -41014.308589067427,
    123.54423323710444, -45443.47867521365, 120.20081518969195,
    -50088.4128660826, 7.5084029200590408, -54977.319333828207,
    56.261575539274567, -60097.994613651055, 149.30874676163725,
    -65427.147957119967, 63.061929950135578, -70986.367907840919,
    4.7681791678185874, -76790.246044114945, 114.50464237859434,
    -82811.314100923424, 128.57974736552094, -89046.048921945883,
    13.171677254544306, -95523.3384388902, 45.600609529734896,
    -102235.06532703183, 147.94134151222596, -109155.61255565878,
    74.273896115989189, -116303.41991091125, 1.6176881223081239,
    -123696.67405488883, 104.56217628178702, -131309.60682995062,
    135.73658574357634, -139134.41493247409, 20.230273286702015,
    -147200.01088532593, 35.599488142856629, -155502.54760200047,
    144.91272814238221, -164014.66275498597, 85.495406587169242,
    -172751.229164924, 0.12455929000621779, -181733.61611044646,
    93.942326671825242, -190938.33995427814, 141.50901568112022,
    -200353.4942217475, 28.524104476544963, -210007.36030076578,
    26.485033385668139, -219900.4485936503, 140.29159456583949,
    -230004.27204430423, 96.471961350276828, -240329.79919739324,
    0.32265632133699285, -250901.09730016242, 82.885948099882853,
    -261697.49983655111, 145.76612044459679, -272703.2671956055,
    37.865069573856985, -283945.40821809182, 18.4639579697768,
    -295428.77921940066, 134.18274650907904, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    122.92585708443505, -89.743962404247725, 469.23951004644942,
    -143.32531878203673, 1025.5289456501509, -31.99058381611772,
    1819.6624942238932, -23.271901759494639, 2853.8225394743986,
    -138.1198565101991, 4099.261352837816, -100.56020151405892,
    5565.3805363637839, -0.84702541282959487, 7277.13941411706,
    -78.586411795835787, 9215.0789475513338, -146.97426274767963,
    11362.080892110174, -41.6777812162796, 13744.502135701281,
    -15.719471768746104, 16368.840333729961, -131.47593403328628,
    19206.120348032749, -110.7898205275151, 22261.520144359198,
    -3.3688914051172816, 25561.928383627914, -67.340599114444259,
    29091.332231365828, -148.98393160798355, 32829.29544761841,
    -52.113791641431931, 36800.065712683892, -9.5045803688707551,
    41014.308589067427, -123.54423323710444, 45443.47867521365,
    -120.20081518969195, 50088.4128660826, -7.5084029200590408,
    54977.319333828207, -56.261575539274567, 60097.994613651055,
    -149.30874676163725, 65427.147957119967, -63.061929950135578,
    70986.367907840919, -4.7681791678185874, 76790.246044114945,
    -114.50464237859434, 82811.314100923424, -128.57974736552094,
    89046.048921945883, -13.171677254544306, 95523.3384388902,
    -45.600609529734896, 102235.06532703183, -147.94134151222596,
    109155.61255565878, -74.273896115989189, 116303.41991091125,
    -1.6176881223081239, 123696.67405488883, -104.56217628178702,
    131309.60682995062, -135.73658574357634, 139134.41493247409,
    -20.230273286702015, 147200.01088532593, -35.599488142856629,
    155502.54760200047, -144.91272814238221, 164014.66275498597,
    -85.495406587169242, 172751.229164924, -0.12455929000621779,
    181733.61611044646, -93.942326671825242, 190938.33995427814,
    -141.50901568112022, 200353.4942217475, -28.524104476544963,
    210007.36030076578, -26.485033385668139, 219900.4485936503,
    -140.29159456583949, 230004.27204430423, -96.471961350276828,
    240329.79919739324, -0.32265632133699285, 250901.09730016242,
    -82.885948099882853, 261697.49983655111, -145.76612044459679,
    272703.2671956055, -37.865069573856985, 283945.40821809182,
    -18.4639579697768, 295428.77921940066, -134.18274650907904, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -122.92585708443505, 89.743962404247725, -469.23951004644942,
    143.32531878203673, -1025.5289456501509, 31.99058381611772,
    -1819.6624942238932, 23.271901759494639, -2853.8225394743986,
    138.1198565101991, -4099.261352837816, 100.56020151405892,
    -5565.3805363637839, 0.84702541282959487, -7277.13941411706,
    78.586411795835787, -9215.0789475513338, 146.97426274767963,
    -11362.080892110174, 41.6777812162796, -13744.502135701281,
    15.719471768746104, -16368.840333729961, 131.47593403328628,
    -19206.120348032749, 110.7898205275151, -22261.520144359198,
    3.3688914051172816, -25561.928383627914, 67.340599114444259,
    -29091.332231365828, 148.98393160798355, -32829.29544761841,
    52.113791641431931, -36800.065712683892, 9.5045803688707551,
    -41014.308589067427, 123.54423323710444, -45443.47867521365,
    120.20081518969195, -50088.4128660826, 7.5084029200590408,
    -54977.319333828207, 56.261575539274567, -60097.994613651055,
    149.30874676163725, -65427.147957119967, 63.061929950135578,
    -70986.367907840919, 4.7681791678185874, -76790.246044114945,
    114.50464237859434, -82811.314100923424, 128.57974736552094,
    -89046.048921945883, 13.171677254544306, -95523.3384388902,
    45.600609529734896, -102235.06532703183, 147.94134151222596,
    -109155.61255565878, 74.273896115989189, -116303.41991091125,
    1.6176881223081239, -123696.67405488883, 104.56217628178702,
    -131309.60682995062, 135.73658574357634, -139134.41493247409,
    20.230273286702015, -147200.01088532593, 35.599488142856629,
    -155502.54760200047, 144.91272814238221, -164014.66275498597,
    85.495406587169242, -172751.229164924, 0.12455929000621779,
    -181733.61611044646, 93.942326671825242, -190938.33995427814,
    141.50901568112022, -200353.4942217475, 28.524104476544963,
    -210007.36030076578, 26.485033385668139, -219900.4485936503,
    140.29159456583949, -230004.27204430423, 96.471961350276828,
    -240329.79919739324, 0.32265632133699285, -250901.09730016242,
    82.885948099882853, -261697.49983655111, 145.76612044459679,
    -272703.2671956055, 37.865069573856985, -283945.40821809182,
    18.4639579697768, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    122.92585708443505, -89.743962404247725, 469.23951004644942,
    -143.32531878203673, 1025.5289456501509, -31.99058381611772,
    1819.6624942238932, -23.271901759494639, 2853.8225394743986,
    -138.1198565101991, 4099.261352837816, -100.56020151405892,
    5565.3805363637839, -0.84702541282959487, 7277.13941411706,
    -78.586411795835787, 9215.0789475513338, -146.97426274767963,
    11362.080892110174, -41.6777812162796, 13744.502135701281,
    -15.719471768746104, 16368.840333729961, -131.47593403328628,
    19206.120348032749, -110.7898205275151, 22261.520144359198,
    -3.3688914051172816, 25561.928383627914, -67.340599114444259,
    29091.332231365828, -148.98393160798355, 32829.29544761841,
    -52.113791641431931, 36800.065712683892, -9.5045803688707551,
    41014.308589067427, -123.54423323710444, 45443.47867521365,
    -120.20081518969195, 50088.4128660826, -7.5084029200590408,
    54977.319333828207, -56.261575539274567, 60097.994613651055,
    -149.30874676163725, 65427.147957119967, -63.061929950135578,
    70986.367907840919, -4.7681791678185874, 76790.246044114945,
    -114.50464237859434, 82811.314100923424, -128.57974736552094,
    89046.048921945883, -13.171677254544306, 95523.3384388902,
    -45.600609529734896, 102235.06532703183, -147.94134151222596,
    109155.61255565878, -74.273896115989189, 116303.41991091125,
    -1.6176881223081239, 123696.67405488883, -104.56217628178702,
    131309.60682995062, -135.73658574357634, 139134.41493247409,
    -20.230273286702015, 147200.01088532593, -35.599488142856629,
    155502.54760200047, -144.91272814238221, 164014.66275498597,
    -85.495406587169242, 172751.229164924, -0.12455929000621779,
    181733.61611044646, -93.942326671825242, 190938.33995427814,
    -141.50901568112022, 200353.4942217475, -28.524104476544963,
    210007.36030076578, -26.485033385668139, 219900.4485936503,
    -140.29159456583949, 230004.27204430423, -96.471961350276828,
    240329.79919739324, -0.32265632133699285, 250901.09730016242,
    -82.885948099882853, 261697.49983655111, -145.76612044459679,
    272703.2671956055, -37.865069573856985, 283945.40821809182,
    -18.4639579697768, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -122.92585708443505,
    89.743962404247725, -469.23951004644942, 143.32531878203673,
    -1025.5289456501509, 31.99058381611772, -1819.6624942238932,
    23.271901759494639, -2853.8225394743986, 138.1198565101991,
    -4099.261352837816, 100.56020151405892, -5565.3805363637839,
    0.84702541282959487, -7277.13941411706, 78.586411795835787,
    -9215.0789475513338, 146.97426274767963, -11362.080892110174,
    41.6777812162796, -13744.502135701281, 15.719471768746104,
    -16368.840333729961, 131.47593403328628, -19206.120348032749,
    110.7898205275151, -22261.520144359198, 3.3688914051172816,
    -25561.928383627914, 67.340599114444259, -29091.332231365828,
    148.98393160798355, -32829.29544761841, 52.113791641431931,
    -36800.065712683892, 9.5045803688707551, -41014.308589067427,
    123.54423323710444, -45443.47867521365, 120.20081518969195,
    -50088.4128660826, 7.5084029200590408, -54977.319333828207,
    56.261575539274567, -60097.994613651055, 149.30874676163725,
    -65427.147957119967, 63.061929950135578, -70986.367907840919,
    4.7681791678185874, -76790.246044114945, 114.50464237859434,
    -82811.314100923424, 128.57974736552094, -89046.048921945883,
    13.171677254544306, -95523.3384388902, 45.600609529734896,
    -102235.06532703183, 147.94134151222596, -109155.61255565878,
    74.273896115989189, -116303.41991091125, 1.6176881223081239,
    -123696.67405488883, 104.56217628178702, -131309.60682995062,
    135.73658574357634, -139134.41493247409, 20.230273286702015,
    -147200.01088532593, 35.599488142856629, -155502.54760200047,
    144.91272814238221, -164014.66275498597, 85.495406587169242,
    -172751.229164924, 0.12455929000621779, -181733.61611044646,
    93.942326671825242, -190938.33995427814, 141.50901568112022,
    -200353.4942217475, 28.524104476544963, -210007.36030076578,
    26.485033385668139, -219900.4485936503, 140.29159456583949,
    -230004.27204430423, 96.471961350276828, -240329.79919739324,
    0.32265632133699285, -250901.09730016242, 82.885948099882853,
    -261697.49983655111, 145.76612044459679, -272703.2671956055,
    37.865069573856985, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    122.92585708443505, -89.743962404247725, 469.23951004644942,
    -143.32531878203673, 1025.5289456501509, -31.99058381611772,
    1819.6624942238932, -23.271901759494639, 2853.8225394743986,
    -138.1198565101991, 4099.261352837816, -100.56020151405892,
    5565.3805363637839, -0.84702541282959487, 7277.13941411706,
    -78.586411795835787, 9215.0789475513338, -146.97426274767963,
    11362.080892110174, -41.6777812162796, 13744.502135701281,
    -15.719471768746104, 16368.840333729961, -131.47593403328628,
    19206.120348032749, -110.7898205275151, 22261.520144359198,
    -3.3688914051172816, 25561.928383627914, -67.340599114444259,
    29091.332231365828, -148.98393160798355, 32829.29544761841,
    -52.113791641431931, 36800.065712683892, -9.5045803688707551,
    41014.308589067427, -123.54423323710444, 45443.47867521365,
    -120.20081518969195, 50088.4128660826, -7.5084029200590408,
    54977.319333828207, -56.261575539274567, 60097.994613651055,
    -149.30874676163725, 65427.147957119967, -63.061929950135578,
    70986.367907840919, -4.7681791678185874, 76790.246044114945,
    -114.50464237859434, 82811.314100923424, -128.57974736552094,
    89046.048921945883, -13.171677254544306, 95523.3384388902,
    -45.600609529734896, 102235.06532703183, -147.94134151222596,
    109155.61255565878, -74.273896115989189, 116303.41991091125,
    -1.6176881223081239, 123696.67405488883, -104.56217628178702,
    131309.60682995062, -135.73658574357634, 139134.41493247409,
    -20.230273286702015, 147200.01088532593, -35.599488142856629,
    155502.54760200047, -144.91272814238221, 164014.66275498597,
    -85.495406587169242, 172751.229164924, -0.12455929000621779,
    181733.61611044646, -93.942326671825242, 190938.33995427814,
    -141.50901568112022, 200353.4942217475, -28.524104476544963,
    210007.36030076578, -26.485033385668139, 219900.4485936503,
    -140.29159456583949, 230004.27204430423, -96.471961350276828,
    240329.79919739324, -0.32265632133699285, 250901.09730016242,
    -82.885948099882853, 261697.49983655111, -145.76612044459679,
    272703.2671956055, -37.865069573856985, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -122.92585708443505, 89.743962404247725, -469.23951004644942,
    143.32531878203673, -1025.5289456501509, 31.99058381611772,
    -1819.6624942238932, 23.271901759494639, -2853.8225394743986,
    138.1198565101991, -4099.261352837816, 100.56020151405892,
    -5565.3805363637839, 0.84702541282959487, -7277.13941411706,
    78.586411795835787, -9215.0789475513338, 146.97426274767963,
    -11362.080892110174, 41.6777812162796, -13744.502135701281,
    15.719471768746104, -16368.840333729961, 131.47593403328628,
    -19206.120348032749, 110.7898205275151, -22261.520144359198,
    3.3688914051172816, -25561.928383627914, 67.340599114444259,
    -29091.332231365828, 148.98393160798355, -32829.29544761841,
    52.113791641431931, -36800.065712683892, 9.5045803688707551,
    -41014.308589067427, 123.54423323710444, -45443.47867521365,
    120.20081518969195, -50088.4128660826, 7.5084029200590408,
    -54977.319333828207, 56.261575539274567, -60097.994613651055,
    149.30874676163725, -65427.147957119967, 63.061929950135578,
    -70986.367907840919, 4.7681791678185874, -76790.246044114945,
    114.50464237859434, -82811.314100923424, 128.57974736552094,
    -89046.048921945883, 13.171677254544306, -95523.3384388902,
    45.600609529734896, -102235.06532703183, 147.94134151222596,
    -109155.61255565878, 74.273896115989189, -116303.41991091125,
    1.6176881223081239, -123696.67405488883, 104.56217628178702,
    -131309.60682995062, 135.73658574357634, -139134.41493247409,
    20.230273286702015, -147200.01088532593, 35.599488142856629,
    -155502.54760200047, 144.91272814238221, -164014.66275498597,
    85.495406587169242, -172751.229164924, 0.12455929000621779,
    -181733.61611044646, 93.942326671825242, -190938.33995427814,
    141.50901568112022, -200353.4942217475, 28.524104476544963,
    -210007.36030076578, 26.485033385668139, -219900.4485936503,
    140.29159456583949, -230004.27204430423, 96.471961350276828,
    -240329.79919739324, 0.32265632133699285, -250901.09730016242,
    82.885948099882853, -261697.49983655111, 145.76612044459679, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 122.92585708443505,
    -89.743962404247725, 469.23951004644942, -143.32531878203673,
    1025.5289456501509, -31.99058381611772, 1819.6624942238932,
    -23.271901759494639, 2853.8225394743986, -138.1198565101991,
    4099.261352837816, -100.56020151405892, 5565.3805363637839,
    -0.84702541282959487, 7277.13941411706, -78.586411795835787,
    9215.0789475513338, -146.97426274767963, 11362.080892110174,
    -41.6777812162796, 13744.502135701281, -15.719471768746104,
    16368.840333729961, -131.47593403328628, 19206.120348032749,
    -110.7898205275151, 22261.520144359198, -3.3688914051172816,
    25561.928383627914, -67.340599114444259, 29091.332231365828,
    -148.98393160798355, 32829.29544761841, -52.113791641431931,
    36800.065712683892, -9.5045803688707551, 41014.308589067427,
    -123.54423323710444, 45443.47867521365, -120.20081518969195,
    50088.4128660826, -7.5084029200590408, 54977.319333828207,
    -56.261575539274567, 60097.994613651055, -149.30874676163725,
    65427.147957119967, -63.061929950135578, 70986.367907840919,
    -4.7681791678185874, 76790.246044114945, -114.50464237859434,
    82811.314100923424, -128.57974736552094, 89046.048921945883,
    -13.171677254544306, 95523.3384388902, -45.600609529734896,
    102235.06532703183, -147.94134151222596, 109155.61255565878,
    -74.273896115989189, 116303.41991091125, -1.6176881223081239,
    123696.67405488883, -104.56217628178702, 131309.60682995062,
    -135.73658574357634, 139134.41493247409, -20.230273286702015,
    147200.01088532593, -35.599488142856629, 155502.54760200047,
    -144.91272814238221, 164014.66275498597, -85.495406587169242,
    172751.229164924, -0.12455929000621779, 181733.61611044646,
    -93.942326671825242, 190938.33995427814, -141.50901568112022,
    200353.4942217475, -28.524104476544963, 210007.36030076578,
    -26.485033385668139, 219900.4485936503, -140.29159456583949,
    230004.27204430423, -96.471961350276828, 240329.79919739324,
    -0.32265632133699285, 250901.09730016242, -82.885948099882853,
    261697.49983655111, -145.76612044459679, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -122.92585708443505, 89.743962404247725, -469.23951004644942,
    143.32531878203673, -1025.5289456501509, 31.99058381611772,
    -1819.6624942238932, 23.271901759494639, -2853.8225394743986,
    138.1198565101991, -4099.261352837816, 100.56020151405892,
    -5565.3805363637839, 0.84702541282959487, -7277.13941411706,
    78.586411795835787, -9215.0789475513338, 146.97426274767963,
    -11362.080892110174, 41.6777812162796, -13744.502135701281,
    15.719471768746104, -16368.840333729961, 131.47593403328628,
    -19206.120348032749, 110.7898205275151, -22261.520144359198,
    3.3688914051172816, -25561.928383627914, 67.340599114444259,
    -29091.332231365828, 148.98393160798355, -32829.29544761841,
    52.113791641431931, -36800.065712683892, 9.5045803688707551,
    -41014.308589067427, 123.54423323710444, -45443.47867521365,
    120.20081518969195, -50088.4128660826, 7.5084029200590408,
    -54977.319333828207, 56.261575539274567, -60097.994613651055,
    149.30874676163725, -65427.147957119967, 63.061929950135578,
    -70986.367907840919, 4.7681791678185874, -76790.246044114945,
    114.50464237859434, -82811.314100923424, 128.57974736552094,
    -89046.048921945883, 13.171677254544306, -95523.3384388902,
    45.600609529734896, -102235.06532703183, 147.94134151222596,
    -109155.61255565878, 74.273896115989189, -116303.41991091125,
    1.6176881223081239, -123696.67405488883, 104.56217628178702,
    -131309.60682995062, 135.73658574357634, -139134.41493247409,
    20.230273286702015, -147200.01088532593, 35.599488142856629,
    -155502.54760200047, 144.91272814238221, -164014.66275498597,
    85.495406587169242, -172751.229164924, 0.12455929000621779,
    -181733.61611044646, 93.942326671825242, -190938.33995427814,
    141.50901568112022, -200353.4942217475, 28.524104476544963,
    -210007.36030076578, 26.485033385668139, -219900.4485936503,
    140.29159456583949, -230004.27204430423, 96.471961350276828,
    -240329.79919739324, 0.32265632133699285, -250901.09730016242,
    82.885948099882853, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, 122.92585708443505, -89.743962404247725,
    469.23951004644942, -143.32531878203673, 1025.5289456501509,
    -31.99058381611772, 1819.6624942238932, -23.271901759494639,
    2853.8225394743986, -138.1198565101991, 4099.261352837816,
    -100.56020151405892, 5565.3805363637839, -0.84702541282959487,
    7277.13941411706, -78.586411795835787, 9215.0789475513338,
    -146.97426274767963, 11362.080892110174, -41.6777812162796,
    13744.502135701281, -15.719471768746104, 16368.840333729961,
    -131.47593403328628, 19206.120348032749, -110.7898205275151,
    22261.520144359198, -3.3688914051172816, 25561.928383627914,
    -67.340599114444259, 29091.332231365828, -148.98393160798355,
    32829.29544761841, -52.113791641431931, 36800.065712683892,
    -9.5045803688707551, 41014.308589067427, -123.54423323710444,
    45443.47867521365, -120.20081518969195, 50088.4128660826,
    -7.5084029200590408, 54977.319333828207, -56.261575539274567,
    60097.994613651055, -149.30874676163725, 65427.147957119967,
    -63.061929950135578, 70986.367907840919, -4.7681791678185874,
    76790.246044114945, -114.50464237859434, 82811.314100923424,
    -128.57974736552094, 89046.048921945883, -13.171677254544306,
    95523.3384388902, -45.600609529734896, 102235.06532703183,
    -147.94134151222596, 109155.61255565878, -74.273896115989189,
    116303.41991091125, -1.6176881223081239, 123696.67405488883,
    -104.56217628178702, 131309.60682995062, -135.73658574357634,
    139134.41493247409, -20.230273286702015, 147200.01088532593,
    -35.599488142856629, 155502.54760200047, -144.91272814238221,
    164014.66275498597, -85.495406587169242, 172751.229164924,
    -0.12455929000621779, 181733.61611044646, -93.942326671825242,
    190938.33995427814, -141.50901568112022, 200353.4942217475,
    -28.524104476544963, 210007.36030076578, -26.485033385668139,
    219900.4485936503, -140.29159456583949, 230004.27204430423,
    -96.471961350276828, 240329.79919739324, -0.32265632133699285,
    250901.09730016242, -82.885948099882853, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -122.92585708443505, 89.743962404247725,
    -469.23951004644942, 143.32531878203673, -1025.5289456501509,
    31.99058381611772, -1819.6624942238932, 23.271901759494639,
    -2853.8225394743986, 138.1198565101991, -4099.261352837816,
    100.56020151405892, -5565.3805363637839, 0.84702541282959487,
    -7277.13941411706, 78.586411795835787, -9215.0789475513338,
    146.97426274767963, -11362.080892110174, 41.6777812162796,
    -13744.502135701281, 15.719471768746104, -16368.840333729961,
    131.47593403328628, -19206.120348032749, 110.7898205275151,
    -22261.520144359198, 3.3688914051172816, -25561.928383627914,
    67.340599114444259, -29091.332231365828, 148.98393160798355,
    -32829.29544761841, 52.113791641431931, -36800.065712683892,
    9.5045803688707551, -41014.308589067427, 123.54423323710444,
    -45443.47867521365, 120.20081518969195, -50088.4128660826,
    7.5084029200590408, -54977.319333828207, 56.261575539274567,
    -60097.994613651055, 149.30874676163725, -65427.147957119967,
    63.061929950135578, -70986.367907840919, 4.7681791678185874,
    -76790.246044114945, 114.50464237859434, -82811.314100923424,
    128.57974736552094, -89046.048921945883, 13.171677254544306,
    -95523.3384388902, 45.600609529734896, -102235.06532703183,
    147.94134151222596, -109155.61255565878, 74.273896115989189,
    -116303.41991091125, 1.6176881223081239, -123696.67405488883,
    104.56217628178702, -131309.60682995062, 135.73658574357634,
    -139134.41493247409, 20.230273286702015, -147200.01088532593,
    35.599488142856629, -155502.54760200047, 144.91272814238221,
    -164014.66275498597, 85.495406587169242, -172751.229164924,
    0.12455929000621779, -181733.61611044646, 93.942326671825242,
    -190938.33995427814, 141.50901568112022, -200353.4942217475,
    28.524104476544963, -210007.36030076578, 26.485033385668139,
    -219900.4485936503, 140.29159456583949, -230004.27204430423,
    96.471961350276828, -240329.79919739324, 0.32265632133699285, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    122.92585708443505, -89.743962404247725, 469.23951004644942,
    -143.32531878203673, 1025.5289456501509, -31.99058381611772,
    1819.6624942238932, -23.271901759494639, 2853.8225394743986,
    -138.1198565101991, 4099.261352837816, -100.56020151405892,
    5565.3805363637839, -0.84702541282959487, 7277.13941411706,
    -78.586411795835787, 9215.0789475513338, -146.97426274767963,
    11362.080892110174, -41.6777812162796, 13744.502135701281,
    -15.719471768746104, 16368.840333729961, -131.47593403328628,
    19206.120348032749, -110.7898205275151, 22261.520144359198,
    -3.3688914051172816, 25561.928383627914, -67.340599114444259,
    29091.332231365828, -148.98393160798355, 32829.29544761841,
    -52.113791641431931, 36800.065712683892, -9.5045803688707551,
    41014.308589067427, -123.54423323710444, 45443.47867521365,
    -120.20081518969195, 50088.4128660826, -7.5084029200590408,
    54977.319333828207, -56.261575539274567, 60097.994613651055,
    -149.30874676163725, 65427.147957119967, -63.061929950135578,
    70986.367907840919, -4.7681791678185874, 76790.246044114945,
    -114.50464237859434, 82811.314100923424, -128.57974736552094,
    89046.048921945883, -13.171677254544306, 95523.3384388902,
    -45.600609529734896, 102235.06532703183, -147.94134151222596,
    109155.61255565878, -74.273896115989189, 116303.41991091125,
    -1.6176881223081239, 123696.67405488883, -104.56217628178702,
    131309.60682995062, -135.73658574357634, 139134.41493247409,
    -20.230273286702015, 147200.01088532593, -35.599488142856629,
    155502.54760200047, -144.91272814238221, 164014.66275498597,
    -85.495406587169242, 172751.229164924, -0.12455929000621779,
    181733.61611044646, -93.942326671825242, 190938.33995427814,
    -141.50901568112022, 200353.4942217475, -28.524104476544963,
    210007.36030076578, -26.485033385668139, 219900.4485936503,
    -140.29159456583949, 230004.27204430423, -96.471961350276828,
    240329.79919739324, -0.32265632133699285, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -122.92585708443505,
    89.743962404247725, -469.23951004644942, 143.32531878203673,
    -1025.5289456501509, 31.99058381611772, -1819.6624942238932,
    23.271901759494639, -2853.8225394743986, 138.1198565101991,
    -4099.261352837816, 100.56020151405892, -5565.3805363637839,
    0.84702541282959487, -7277.13941411706, 78.586411795835787,
    -9215.0789475513338, 146.97426274767963, -11362.080892110174,
    41.6777812162796, -13744.502135701281, 15.719471768746104,
    -16368.840333729961, 131.47593403328628, -19206.120348032749,
    110.7898205275151, -22261.520144359198, 3.3688914051172816,
    -25561.928383627914, 67.340599114444259, -29091.332231365828,
    148.98393160798355, -32829.29544761841, 52.113791641431931,
    -36800.065712683892, 9.5045803688707551, -41014.308589067427,
    123.54423323710444, -45443.47867521365, 120.20081518969195,
    -50088.4128660826, 7.5084029200590408, -54977.319333828207,
    56.261575539274567, -60097.994613651055, 149.30874676163725,
    -65427.147957119967, 63.061929950135578, -70986.367907840919,
    4.7681791678185874, -76790.246044114945, 114.50464237859434,
    -82811.314100923424, 128.57974736552094, -89046.048921945883,
    13.171677254544306, -95523.3384388902, 45.600609529734896,
    -102235.06532703183, 147.94134151222596, -109155.61255565878,
    74.273896115989189, -116303.41991091125, 1.6176881223081239,
    -123696.67405488883, 104.56217628178702, -131309.60682995062,
    135.73658574357634, -139134.41493247409, 20.230273286702015,
    -147200.01088532593, 35.599488142856629, -155502.54760200047,
    144.91272814238221, -164014.66275498597, 85.495406587169242,
    -172751.229164924, 0.12455929000621779, -181733.61611044646,
    93.942326671825242, -190938.33995427814, 141.50901568112022,
    -200353.4942217475, 28.524104476544963, -210007.36030076578,
    26.485033385668139, -219900.4485936503, 140.29159456583949,
    -230004.27204430423, 96.471961350276828, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    122.92585708443505, -89.743962404247725, 469.23951004644942,
    -143.32531878203673, 1025.5289456501509, -31.99058381611772,
    1819.6624942238932, -23.271901759494639, 2853.8225394743986,
    -138.1198565101991, 4099.261352837816, -100.56020151405892,
    5565.3805363637839, -0.84702541282959487, 7277.13941411706,
    -78.586411795835787, 9215.0789475513338, -146.97426274767963,
    11362.080892110174, -41.6777812162796, 13744.502135701281,
    -15.719471768746104, 16368.840333729961, -131.47593403328628,
    19206.120348032749, -110.7898205275151, 22261.520144359198,
    -3.3688914051172816, 25561.928383627914, -67.340599114444259,
    29091.332231365828, -148.98393160798355, 32829.29544761841,
    -52.113791641431931, 36800.065712683892, -9.5045803688707551,
    41014.308589067427, -123.54423323710444, 45443.47867521365,
    -120.20081518969195, 50088.4128660826, -7.5084029200590408,
    54977.319333828207, -56.261575539274567, 60097.994613651055,
    -149.30874676163725, 65427.147957119967, -63.061929950135578,
    70986.367907840919, -4.7681791678185874, 76790.246044114945,
    -114.50464237859434, 82811.314100923424, -128.57974736552094,
    89046.048921945883, -13.171677254544306, 95523.3384388902,
    -45.600609529734896, 102235.06532703183, -147.94134151222596,
    109155.61255565878, -74.273896115989189, 116303.41991091125,
    -1.6176881223081239, 123696.67405488883, -104.56217628178702,
    131309.60682995062, -135.73658574357634, 139134.41493247409,
    -20.230273286702015, 147200.01088532593, -35.599488142856629,
    155502.54760200047, -144.91272814238221, 164014.66275498597,
    -85.495406587169242, 172751.229164924, -0.12455929000621779,
    181733.61611044646, -93.942326671825242, 190938.33995427814,
    -141.50901568112022, 200353.4942217475, -28.524104476544963,
    210007.36030076578, -26.485033385668139, 219900.4485936503,
    -140.29159456583949, 230004.27204430423, -96.471961350276828, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -122.92585708443505, 89.743962404247725, -469.23951004644942,
    143.32531878203673, -1025.5289456501509, 31.99058381611772,
    -1819.6624942238932, 23.271901759494639, -2853.8225394743986,
    138.1198565101991, -4099.261352837816, 100.56020151405892,
    -5565.3805363637839, 0.84702541282959487, -7277.13941411706,
    78.586411795835787, -9215.0789475513338, 146.97426274767963,
    -11362.080892110174, 41.6777812162796, -13744.502135701281,
    15.719471768746104, -16368.840333729961, 131.47593403328628,
    -19206.120348032749, 110.7898205275151, -22261.520144359198,
    3.3688914051172816, -25561.928383627914, 67.340599114444259,
    -29091.332231365828, 148.98393160798355, -32829.29544761841,
    52.113791641431931, -36800.065712683892, 9.5045803688707551,
    -41014.308589067427, 123.54423323710444, -45443.47867521365,
    120.20081518969195, -50088.4128660826, 7.5084029200590408,
    -54977.319333828207, 56.261575539274567, -60097.994613651055,
    149.30874676163725, -65427.147957119967, 63.061929950135578,
    -70986.367907840919, 4.7681791678185874, -76790.246044114945,
    114.50464237859434, -82811.314100923424, 128.57974736552094,
    -89046.048921945883, 13.171677254544306, -95523.3384388902,
    45.600609529734896, -102235.06532703183, 147.94134151222596,
    -109155.61255565878, 74.273896115989189, -116303.41991091125,
    1.6176881223081239, -123696.67405488883, 104.56217628178702,
    -131309.60682995062, 135.73658574357634, -139134.41493247409,
    20.230273286702015, -147200.01088532593, 35.599488142856629,
    -155502.54760200047, 144.91272814238221, -164014.66275498597,
    85.495406587169242, -172751.229164924, 0.12455929000621779,
    -181733.61611044646, 93.942326671825242, -190938.33995427814,
    141.50901568112022, -200353.4942217475, 28.524104476544963,
    -210007.36030076578, 26.485033385668139, -219900.4485936503,
    140.29159456583949, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    122.92585708443505, -89.743962404247725, 469.23951004644942,
    -143.32531878203673, 1025.5289456501509, -31.99058381611772,
    1819.6624942238932, -23.271901759494639, 2853.8225394743986,
    -138.1198565101991, 4099.261352837816, -100.56020151405892,
    5565.3805363637839, -0.84702541282959487, 7277.13941411706,
    -78.586411795835787, 9215.0789475513338, -146.97426274767963,
    11362.080892110174, -41.6777812162796, 13744.502135701281,
    -15.719471768746104, 16368.840333729961, -131.47593403328628,
    19206.120348032749, -110.7898205275151, 22261.520144359198,
    -3.3688914051172816, 25561.928383627914, -67.340599114444259,
    29091.332231365828, -148.98393160798355, 32829.29544761841,
    -52.113791641431931, 36800.065712683892, -9.5045803688707551,
    41014.308589067427, -123.54423323710444, 45443.47867521365,
    -120.20081518969195, 50088.4128660826, -7.5084029200590408,
    54977.319333828207, -56.261575539274567, 60097.994613651055,
    -149.30874676163725, 65427.147957119967, -63.061929950135578,
    70986.367907840919, -4.7681791678185874, 76790.246044114945,
    -114.50464237859434, 82811.314100923424, -128.57974736552094,
    89046.048921945883, -13.171677254544306, 95523.3384388902,
    -45.600609529734896, 102235.06532703183, -147.94134151222596,
    109155.61255565878, -74.273896115989189, 116303.41991091125,
    -1.6176881223081239, 123696.67405488883, -104.56217628178702,
    131309.60682995062, -135.73658574357634, 139134.41493247409,
    -20.230273286702015, 147200.01088532593, -35.599488142856629,
    155502.54760200047, -144.91272814238221, 164014.66275498597,
    -85.495406587169242, 172751.229164924, -0.12455929000621779,
    181733.61611044646, -93.942326671825242, 190938.33995427814,
    -141.50901568112022, 200353.4942217475, -28.524104476544963,
    210007.36030076578, -26.485033385668139, 219900.4485936503,
    -140.29159456583949, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -122.92585708443505,
    89.743962404247725, -469.23951004644942, 143.32531878203673,
    -1025.5289456501509, 31.99058381611772, -1819.6624942238932,
    23.271901759494639, -2853.8225394743986, 138.1198565101991,
    -4099.261352837816, 100.56020151405892, -5565.3805363637839,
    0.84702541282959487, -7277.13941411706, 78.586411795835787,
    -9215.0789475513338, 146.97426274767963, -11362.080892110174,
    41.6777812162796, -13744.502135701281, 15.719471768746104,
    -16368.840333729961, 131.47593403328628, -19206.120348032749,
    110.7898205275151, -22261.520144359198, 3.3688914051172816,
    -25561.928383627914, 67.340599114444259, -29091.332231365828,
    148.98393160798355, -32829.29544761841, 52.113791641431931,
    -36800.065712683892, 9.5045803688707551, -41014.308589067427,
    123.54423323710444, -45443.47867521365, 120.20081518969195,
    -50088.4128660826, 7.5084029200590408, -54977.319333828207,
    56.261575539274567, -60097.994613651055, 149.30874676163725,
    -65427.147957119967, 63.061929950135578, -70986.367907840919,
    4.7681791678185874, -76790.246044114945, 114.50464237859434,
    -82811.314100923424, 128.57974736552094, -89046.048921945883,
    13.171677254544306, -95523.3384388902, 45.600609529734896,
    -102235.06532703183, 147.94134151222596, -109155.61255565878,
    74.273896115989189, -116303.41991091125, 1.6176881223081239,
    -123696.67405488883, 104.56217628178702, -131309.60682995062,
    135.73658574357634, -139134.41493247409, 20.230273286702015,
    -147200.01088532593, 35.599488142856629, -155502.54760200047,
    144.91272814238221, -164014.66275498597, 85.495406587169242,
    -172751.229164924, 0.12455929000621779, -181733.61611044646,
    93.942326671825242, -190938.33995427814, 141.50901568112022,
    -200353.4942217475, 28.524104476544963, -210007.36030076578,
    26.485033385668139, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    122.92585708443505, -89.743962404247725, 469.23951004644942,
    -143.32531878203673, 1025.5289456501509, -31.99058381611772,
    1819.6624942238932, -23.271901759494639, 2853.8225394743986,
    -138.1198565101991, 4099.261352837816, -100.56020151405892,
    5565.3805363637839, -0.84702541282959487, 7277.13941411706,
    -78.586411795835787, 9215.0789475513338, -146.97426274767963,
    11362.080892110174, -41.6777812162796, 13744.502135701281,
    -15.719471768746104, 16368.840333729961, -131.47593403328628,
    19206.120348032749, -110.7898205275151, 22261.520144359198,
    -3.3688914051172816, 25561.928383627914, -67.340599114444259,
    29091.332231365828, -148.98393160798355, 32829.29544761841,
    -52.113791641431931, 36800.065712683892, -9.5045803688707551,
    41014.308589067427, -123.54423323710444, 45443.47867521365,
    -120.20081518969195, 50088.4128660826, -7.5084029200590408,
    54977.319333828207, -56.261575539274567, 60097.994613651055,
    -149.30874676163725, 65427.147957119967, -63.061929950135578,
    70986.367907840919, -4.7681791678185874, 76790.246044114945,
    -114.50464237859434, 82811.314100923424, -128.57974736552094,
    89046.048921945883, -13.171677254544306, 95523.3384388902,
    -45.600609529734896, 102235.06532703183, -147.94134151222596,
    109155.61255565878, -74.273896115989189, 116303.41991091125,
    -1.6176881223081239, 123696.67405488883, -104.56217628178702,
    131309.60682995062, -135.73658574357634, 139134.41493247409,
    -20.230273286702015, 147200.01088532593, -35.599488142856629,
    155502.54760200047, -144.91272814238221, 164014.66275498597,
    -85.495406587169242, 172751.229164924, -0.12455929000621779,
    181733.61611044646, -93.942326671825242, 190938.33995427814,
    -141.50901568112022, 200353.4942217475, -28.524104476544963,
    210007.36030076578, -26.485033385668139, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -122.92585708443505, 89.743962404247725, -469.23951004644942,
    143.32531878203673, -1025.5289456501509, 31.99058381611772,
    -1819.6624942238932, 23.271901759494639, -2853.8225394743986,
    138.1198565101991, -4099.261352837816, 100.56020151405892,
    -5565.3805363637839, 0.84702541282959487, -7277.13941411706,
    78.586411795835787, -9215.0789475513338, 146.97426274767963,
    -11362.080892110174, 41.6777812162796, -13744.502135701281,
    15.719471768746104, -16368.840333729961, 131.47593403328628,
    -19206.120348032749, 110.7898205275151, -22261.520144359198,
    3.3688914051172816, -25561.928383627914, 67.340599114444259,
    -29091.332231365828, 148.98393160798355, -32829.29544761841,
    52.113791641431931, -36800.065712683892, 9.5045803688707551,
    -41014.308589067427, 123.54423323710444, -45443.47867521365,
    120.20081518969195, -50088.4128660826, 7.5084029200590408,
    -54977.319333828207, 56.261575539274567, -60097.994613651055,
    149.30874676163725, -65427.147957119967, 63.061929950135578,
    -70986.367907840919, 4.7681791678185874, -76790.246044114945,
    114.50464237859434, -82811.314100923424, 128.57974736552094,
    -89046.048921945883, 13.171677254544306, -95523.3384388902,
    45.600609529734896, -102235.06532703183, 147.94134151222596,
    -109155.61255565878, 74.273896115989189, -116303.41991091125,
    1.6176881223081239, -123696.67405488883, 104.56217628178702,
    -131309.60682995062, 135.73658574357634, -139134.41493247409,
    20.230273286702015, -147200.01088532593, 35.599488142856629,
    -155502.54760200047, 144.91272814238221, -164014.66275498597,
    85.495406587169242, -172751.229164924, 0.12455929000621779,
    -181733.61611044646, 93.942326671825242, -190938.33995427814,
    141.50901568112022, -200353.4942217475, 28.524104476544963, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 122.92585708443505,
    -89.743962404247725, 469.23951004644942, -143.32531878203673,
    1025.5289456501509, -31.99058381611772, 1819.6624942238932,
    -23.271901759494639, 2853.8225394743986, -138.1198565101991,
    4099.261352837816, -100.56020151405892, 5565.3805363637839,
    -0.84702541282959487, 7277.13941411706, -78.586411795835787,
    9215.0789475513338, -146.97426274767963, 11362.080892110174,
    -41.6777812162796, 13744.502135701281, -15.719471768746104,
    16368.840333729961, -131.47593403328628, 19206.120348032749,
    -110.7898205275151, 22261.520144359198, -3.3688914051172816,
    25561.928383627914, -67.340599114444259, 29091.332231365828,
    -148.98393160798355, 32829.29544761841, -52.113791641431931,
    36800.065712683892, -9.5045803688707551, 41014.308589067427,
    -123.54423323710444, 45443.47867521365, -120.20081518969195,
    50088.4128660826, -7.5084029200590408, 54977.319333828207,
    -56.261575539274567, 60097.994613651055, -149.30874676163725,
    65427.147957119967, -63.061929950135578, 70986.367907840919,
    -4.7681791678185874, 76790.246044114945, -114.50464237859434,
    82811.314100923424, -128.57974736552094, 89046.048921945883,
    -13.171677254544306, 95523.3384388902, -45.600609529734896,
    102235.06532703183, -147.94134151222596, 109155.61255565878,
    -74.273896115989189, 116303.41991091125, -1.6176881223081239,
    123696.67405488883, -104.56217628178702, 131309.60682995062,
    -135.73658574357634, 139134.41493247409, -20.230273286702015,
    147200.01088532593, -35.599488142856629, 155502.54760200047,
    -144.91272814238221, 164014.66275498597, -85.495406587169242,
    172751.229164924, -0.12455929000621779, 181733.61611044646,
    -93.942326671825242, 190938.33995427814, -141.50901568112022,
    200353.4942217475, -28.524104476544963, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -122.92585708443505, 89.743962404247725, -469.23951004644942,
    143.32531878203673, -1025.5289456501509, 31.99058381611772,
    -1819.6624942238932, 23.271901759494639, -2853.8225394743986,
    138.1198565101991, -4099.261352837816, 100.56020151405892,
    -5565.3805363637839, 0.84702541282959487, -7277.13941411706,
    78.586411795835787, -9215.0789475513338, 146.97426274767963,
    -11362.080892110174, 41.6777812162796, -13744.502135701281,
    15.719471768746104, -16368.840333729961, 131.47593403328628,
    -19206.120348032749, 110.7898205275151, -22261.520144359198,
    3.3688914051172816, -25561.928383627914, 67.340599114444259,
    -29091.332231365828, 148.98393160798355, -32829.29544761841,
    52.113791641431931, -36800.065712683892, 9.5045803688707551,
    -41014.308589067427, 123.54423323710444, -45443.47867521365,
    120.20081518969195, -50088.4128660826, 7.5084029200590408,
    -54977.319333828207, 56.261575539274567, -60097.994613651055,
    149.30874676163725, -65427.147957119967, 63.061929950135578,
    -70986.367907840919, 4.7681791678185874, -76790.246044114945,
    114.50464237859434, -82811.314100923424, 128.57974736552094,
    -89046.048921945883, 13.171677254544306, -95523.3384388902,
    45.600609529734896, -102235.06532703183, 147.94134151222596,
    -109155.61255565878, 74.273896115989189, -116303.41991091125,
    1.6176881223081239, -123696.67405488883, 104.56217628178702,
    -131309.60682995062, 135.73658574357634, -139134.41493247409,
    20.230273286702015, -147200.01088532593, 35.599488142856629,
    -155502.54760200047, 144.91272814238221, -164014.66275498597,
    85.495406587169242, -172751.229164924, 0.12455929000621779,
    -181733.61611044646, 93.942326671825242, -190938.33995427814,
    141.50901568112022, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, 122.92585708443505, -89.743962404247725,
    469.23951004644942, -143.32531878203673, 1025.5289456501509,
    -31.99058381611772, 1819.6624942238932, -23.271901759494639,
    2853.8225394743986, -138.1198565101991, 4099.261352837816,
    -100.56020151405892, 5565.3805363637839, -0.84702541282959487,
    7277.13941411706, -78.586411795835787, 9215.0789475513338,
    -146.97426274767963, 11362.080892110174, -41.6777812162796,
    13744.502135701281, -15.719471768746104, 16368.840333729961,
    -131.47593403328628, 19206.120348032749, -110.7898205275151,
    22261.520144359198, -3.3688914051172816, 25561.928383627914,
    -67.340599114444259, 29091.332231365828, -148.98393160798355,
    32829.29544761841, -52.113791641431931, 36800.065712683892,
    -9.5045803688707551, 41014.308589067427, -123.54423323710444,
    45443.47867521365, -120.20081518969195, 50088.4128660826,
    -7.5084029200590408, 54977.319333828207, -56.261575539274567,
    60097.994613651055, -149.30874676163725, 65427.147957119967,
    -63.061929950135578, 70986.367907840919, -4.7681791678185874,
    76790.246044114945, -114.50464237859434, 82811.314100923424,
    -128.57974736552094, 89046.048921945883, -13.171677254544306,
    95523.3384388902, -45.600609529734896, 102235.06532703183,
    -147.94134151222596, 109155.61255565878, -74.273896115989189,
    116303.41991091125, -1.6176881223081239, 123696.67405488883,
    -104.56217628178702, 131309.60682995062, -135.73658574357634,
    139134.41493247409, -20.230273286702015, 147200.01088532593,
    -35.599488142856629, 155502.54760200047, -144.91272814238221,
    164014.66275498597, -85.495406587169242, 172751.229164924,
    -0.12455929000621779, 181733.61611044646, -93.942326671825242,
    190938.33995427814, -141.50901568112022, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -122.92585708443505, 89.743962404247725,
    -469.23951004644942, 143.32531878203673, -1025.5289456501509,
    31.99058381611772, -1819.6624942238932, 23.271901759494639,
    -2853.8225394743986, 138.1198565101991, -4099.261352837816,
    100.56020151405892, -5565.3805363637839, 0.84702541282959487,
    -7277.13941411706, 78.586411795835787, -9215.0789475513338,
    146.97426274767963, -11362.080892110174, 41.6777812162796,
    -13744.502135701281, 15.719471768746104, -16368.840333729961,
    131.47593403328628, -19206.120348032749, 110.7898205275151,
    -22261.520144359198, 3.3688914051172816, -25561.928383627914,
    67.340599114444259, -29091.332231365828, 148.98393160798355,
    -32829.29544761841, 52.113791641431931, -36800.065712683892,
    9.5045803688707551, -41014.308589067427, 123.54423323710444,
    -45443.47867521365, 120.20081518969195, -50088.4128660826,
    7.5084029200590408, -54977.319333828207, 56.261575539274567,
    -60097.994613651055, 149.30874676163725, -65427.147957119967,
    63.061929950135578, -70986.367907840919, 4.7681791678185874,
    -76790.246044114945, 114.50464237859434, -82811.314100923424,
    128.57974736552094, -89046.048921945883, 13.171677254544306,
    -95523.3384388902, 45.600609529734896, -102235.06532703183,
    147.94134151222596, -109155.61255565878, 74.273896115989189,
    -116303.41991091125, 1.6176881223081239, -123696.67405488883,
    104.56217628178702, -131309.60682995062, 135.73658574357634,
    -139134.41493247409, 20.230273286702015, -147200.01088532593,
    35.599488142856629, -155502.54760200047, 144.91272814238221,
    -164014.66275498597, 85.495406587169242, -172751.229164924,
    0.12455929000621779, -181733.61611044646, 93.942326671825242, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    122.92585708443505, -89.743962404247725, 469.23951004644942,
    -143.32531878203673, 1025.5289456501509, -31.99058381611772,
    1819.6624942238932, -23.271901759494639, 2853.8225394743986,
    -138.1198565101991, 4099.261352837816, -100.56020151405892,
    5565.3805363637839, -0.84702541282959487, 7277.13941411706,
    -78.586411795835787, 9215.0789475513338, -146.97426274767963,
    11362.080892110174, -41.6777812162796, 13744.502135701281,
    -15.719471768746104, 16368.840333729961, -131.47593403328628,
    19206.120348032749, -110.7898205275151, 22261.520144359198,
    -3.3688914051172816, 25561.928383627914, -67.340599114444259,
    29091.332231365828, -148.98393160798355, 32829.29544761841,
    -52.113791641431931, 36800.065712683892, -9.5045803688707551,
    41014.308589067427, -123.54423323710444, 45443.47867521365,
    -120.20081518969195, 50088.4128660826, -7.5084029200590408,
    54977.319333828207, -56.261575539274567, 60097.994613651055,
    -149.30874676163725, 65427.147957119967, -63.061929950135578,
    70986.367907840919, -4.7681791678185874, 76790.246044114945,
    -114.50464237859434, 82811.314100923424, -128.57974736552094,
    89046.048921945883, -13.171677254544306, 95523.3384388902,
    -45.600609529734896, 102235.06532703183, -147.94134151222596,
    109155.61255565878, -74.273896115989189, 116303.41991091125,
    -1.6176881223081239, 123696.67405488883, -104.56217628178702,
    131309.60682995062, -135.73658574357634, 139134.41493247409,
    -20.230273286702015, 147200.01088532593, -35.599488142856629,
    155502.54760200047, -144.91272814238221, 164014.66275498597,
    -85.495406587169242, 172751.229164924, -0.12455929000621779,
    181733.61611044646, -93.942326671825242, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -122.92585708443505, 89.743962404247725,
    -469.23951004644942, 143.32531878203673, -1025.5289456501509,
    31.99058381611772, -1819.6624942238932, 23.271901759494639,
    -2853.8225394743986, 138.1198565101991, -4099.261352837816,
    100.56020151405892, -5565.3805363637839, 0.84702541282959487,
    -7277.13941411706, 78.586411795835787, -9215.0789475513338,
    146.97426274767963, -11362.080892110174, 41.6777812162796,
    -13744.502135701281, 15.719471768746104, -16368.840333729961,
    131.47593403328628, -19206.120348032749, 110.7898205275151,
    -22261.520144359198, 3.3688914051172816, -25561.928383627914,
    67.340599114444259, -29091.332231365828, 148.98393160798355,
    -32829.29544761841, 52.113791641431931, -36800.065712683892,
    9.5045803688707551, -41014.308589067427, 123.54423323710444,
    -45443.47867521365, 120.20081518969195, -50088.4128660826,
    7.5084029200590408, -54977.319333828207, 56.261575539274567,
    -60097.994613651055, 149.30874676163725, -65427.147957119967,
    63.061929950135578, -70986.367907840919, 4.7681791678185874,
    -76790.246044114945, 114.50464237859434, -82811.314100923424,
    128.57974736552094, -89046.048921945883, 13.171677254544306,
    -95523.3384388902, 45.600609529734896, -102235.06532703183,
    147.94134151222596, -109155.61255565878, 74.273896115989189,
    -116303.41991091125, 1.6176881223081239, -123696.67405488883,
    104.56217628178702, -131309.60682995062, 135.73658574357634,
    -139134.41493247409, 20.230273286702015, -147200.01088532593,
    35.599488142856629, -155502.54760200047, 144.91272814238221,
    -164014.66275498597, 85.495406587169242, -172751.229164924,
    0.12455929000621779, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 122.92585708443505,
    -89.743962404247725, 469.23951004644942, -143.32531878203673,
    1025.5289456501509, -31.99058381611772, 1819.6624942238932,
    -23.271901759494639, 2853.8225394743986, -138.1198565101991,
    4099.261352837816, -100.56020151405892, 5565.3805363637839,
    -0.84702541282959487, 7277.13941411706, -78.586411795835787,
    9215.0789475513338, -146.97426274767963, 11362.080892110174,
    -41.6777812162796, 13744.502135701281, -15.719471768746104,
    16368.840333729961, -131.47593403328628, 19206.120348032749,
    -110.7898205275151, 22261.520144359198, -3.3688914051172816,
    25561.928383627914, -67.340599114444259, 29091.332231365828,
    -148.98393160798355, 32829.29544761841, -52.113791641431931,
    36800.065712683892, -9.5045803688707551, 41014.308589067427,
    -123.54423323710444, 45443.47867521365, -120.20081518969195,
    50088.4128660826, -7.5084029200590408, 54977.319333828207,
    -56.261575539274567, 60097.994613651055, -149.30874676163725,
    65427.147957119967, -63.061929950135578, 70986.367907840919,
    -4.7681791678185874, 76790.246044114945, -114.50464237859434,
    82811.314100923424, -128.57974736552094, 89046.048921945883,
    -13.171677254544306, 95523.3384388902, -45.600609529734896,
    102235.06532703183, -147.94134151222596, 109155.61255565878,
    -74.273896115989189, 116303.41991091125, -1.6176881223081239,
    123696.67405488883, -104.56217628178702, 131309.60682995062,
    -135.73658574357634, 139134.41493247409, -20.230273286702015,
    147200.01088532593, -35.599488142856629, 155502.54760200047,
    -144.91272814238221, 164014.66275498597, -85.495406587169242,
    172751.229164924, -0.12455929000621779, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -122.92585708443505,
    89.743962404247725, -469.23951004644942, 143.32531878203673,
    -1025.5289456501509, 31.99058381611772, -1819.6624942238932,
    23.271901759494639, -2853.8225394743986, 138.1198565101991,
    -4099.261352837816, 100.56020151405892, -5565.3805363637839,
    0.84702541282959487, -7277.13941411706, 78.586411795835787,
    -9215.0789475513338, 146.97426274767963, -11362.080892110174,
    41.6777812162796, -13744.502135701281, 15.719471768746104,
    -16368.840333729961, 131.47593403328628, -19206.120348032749,
    110.7898205275151, -22261.520144359198, 3.3688914051172816,
    -25561.928383627914, 67.340599114444259, -29091.332231365828,
    148.98393160798355, -32829.29544761841, 52.113791641431931,
    -36800.065712683892, 9.5045803688707551, -41014.308589067427,
    123.54423323710444, -45443.47867521365, 120.20081518969195,
    -50088.4128660826, 7.5084029200590408, -54977.319333828207,
    56.261575539274567, -60097.994613651055, 149.30874676163725,
    -65427.147957119967, 63.061929950135578, -70986.367907840919,
    4.7681791678185874, -76790.246044114945, 114.50464237859434,
    -82811.314100923424, 128.57974736552094, -89046.048921945883,
    13.171677254544306, -95523.3384388902, 45.600609529734896,
    -102235.06532703183, 147.94134151222596, -109155.61255565878,
    74.273896115989189, -116303.41991091125, 1.6176881223081239,
    -123696.67405488883, 104.56217628178702, -131309.60682995062,
    135.73658574357634, -139134.41493247409, 20.230273286702015,
    -147200.01088532593, 35.599488142856629, -155502.54760200047,
    144.91272814238221, -164014.66275498597, 85.495406587169242, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, 122.92585708443505, -89.743962404247725,
    469.23951004644942, -143.32531878203673, 1025.5289456501509,
    -31.99058381611772, 1819.6624942238932, -23.271901759494639,
    2853.8225394743986, -138.1198565101991, 4099.261352837816,
    -100.56020151405892, 5565.3805363637839, -0.84702541282959487,
    7277.13941411706, -78.586411795835787, 9215.0789475513338,
    -146.97426274767963, 11362.080892110174, -41.6777812162796,
    13744.502135701281, -15.719471768746104, 16368.840333729961,
    -131.47593403328628, 19206.120348032749, -110.7898205275151,
    22261.520144359198, -3.3688914051172816, 25561.928383627914,
    -67.340599114444259, 29091.332231365828, -148.98393160798355,
    32829.29544761841, -52.113791641431931, 36800.065712683892,
    -9.5045803688707551, 41014.308589067427, -123.54423323710444,
    45443.47867521365, -120.20081518969195, 50088.4128660826,
    -7.5084029200590408, 54977.319333828207, -56.261575539274567,
    60097.994613651055, -149.30874676163725, 65427.147957119967,
    -63.061929950135578, 70986.367907840919, -4.7681791678185874,
    76790.246044114945, -114.50464237859434, 82811.314100923424,
    -128.57974736552094, 89046.048921945883, -13.171677254544306,
    95523.3384388902, -45.600609529734896, 102235.06532703183,
    -147.94134151222596, 109155.61255565878, -74.273896115989189,
    116303.41991091125, -1.6176881223081239, 123696.67405488883,
    -104.56217628178702, 131309.60682995062, -135.73658574357634,
    139134.41493247409, -20.230273286702015, 147200.01088532593,
    -35.599488142856629, 155502.54760200047, -144.91272814238221,
    164014.66275498597, -85.495406587169242, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -122.92585708443505, 89.743962404247725, -469.23951004644942,
    143.32531878203673, -1025.5289456501509, 31.99058381611772,
    -1819.6624942238932, 23.271901759494639, -2853.8225394743986,
    138.1198565101991, -4099.261352837816, 100.56020151405892,
    -5565.3805363637839, 0.84702541282959487, -7277.13941411706,
    78.586411795835787, -9215.0789475513338, 146.97426274767963,
    -11362.080892110174, 41.6777812162796, -13744.502135701281,
    15.719471768746104, -16368.840333729961, 131.47593403328628,
    -19206.120348032749, 110.7898205275151, -22261.520144359198,
    3.3688914051172816, -25561.928383627914, 67.340599114444259,
    -29091.332231365828, 148.98393160798355, -32829.29544761841,
    52.113791641431931, -36800.065712683892, 9.5045803688707551,
    -41014.308589067427, 123.54423323710444, -45443.47867521365,
    120.20081518969195, -50088.4128660826, 7.5084029200590408,
    -54977.319333828207, 56.261575539274567, -60097.994613651055,
    149.30874676163725, -65427.147957119967, 63.061929950135578,
    -70986.367907840919, 4.7681791678185874, -76790.246044114945,
    114.50464237859434, -82811.314100923424, 128.57974736552094,
    -89046.048921945883, 13.171677254544306, -95523.3384388902,
    45.600609529734896, -102235.06532703183, 147.94134151222596,
    -109155.61255565878, 74.273896115989189, -116303.41991091125,
    1.6176881223081239, -123696.67405488883, 104.56217628178702,
    -131309.60682995062, 135.73658574357634, -139134.41493247409,
    20.230273286702015, -147200.01088532593, 35.599488142856629,
    -155502.54760200047, 144.91272814238221, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, 122.92585708443505, -89.743962404247725, 469.23951004644942,
    -143.32531878203673, 1025.5289456501509, -31.99058381611772,
    1819.6624942238932, -23.271901759494639, 2853.8225394743986,
    -138.1198565101991, 4099.261352837816, -100.56020151405892,
    5565.3805363637839, -0.84702541282959487, 7277.13941411706,
    -78.586411795835787, 9215.0789475513338, -146.97426274767963,
    11362.080892110174, -41.6777812162796, 13744.502135701281,
    -15.719471768746104, 16368.840333729961, -131.47593403328628,
    19206.120348032749, -110.7898205275151, 22261.520144359198,
    -3.3688914051172816, 25561.928383627914, -67.340599114444259,
    29091.332231365828, -148.98393160798355, 32829.29544761841,
    -52.113791641431931, 36800.065712683892, -9.5045803688707551,
    41014.308589067427, -123.54423323710444, 45443.47867521365,
    -120.20081518969195, 50088.4128660826, -7.5084029200590408,
    54977.319333828207, -56.261575539274567, 60097.994613651055,
    -149.30874676163725, 65427.147957119967, -63.061929950135578,
    70986.367907840919, -4.7681791678185874, 76790.246044114945,
    -114.50464237859434, 82811.314100923424, -128.57974736552094,
    89046.048921945883, -13.171677254544306, 95523.3384388902,
    -45.600609529734896, 102235.06532703183, -147.94134151222596,
    109155.61255565878, -74.273896115989189, 116303.41991091125,
    -1.6176881223081239, 123696.67405488883, -104.56217628178702,
    131309.60682995062, -135.73658574357634, 139134.41493247409,
    -20.230273286702015, 147200.01088532593, -35.599488142856629,
    155502.54760200047, -144.91272814238221, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -122.92585708443505, 89.743962404247725, -469.23951004644942,
    143.32531878203673, -1025.5289456501509, 31.99058381611772,
    -1819.6624942238932, 23.271901759494639, -2853.8225394743986,
    138.1198565101991, -4099.261352837816, 100.56020151405892,
    -5565.3805363637839, 0.84702541282959487, -7277.13941411706,
    78.586411795835787, -9215.0789475513338, 146.97426274767963,
    -11362.080892110174, 41.6777812162796, -13744.502135701281,
    15.719471768746104, -16368.840333729961, 131.47593403328628,
    -19206.120348032749, 110.7898205275151, -22261.520144359198,
    3.3688914051172816, -25561.928383627914, 67.340599114444259,
    -29091.332231365828, 148.98393160798355, -32829.29544761841,
    52.113791641431931, -36800.065712683892, 9.5045803688707551,
    -41014.308589067427, 123.54423323710444, -45443.47867521365,
    120.20081518969195, -50088.4128660826, 7.5084029200590408,
    -54977.319333828207, 56.261575539274567, -60097.994613651055,
    149.30874676163725, -65427.147957119967, 63.061929950135578,
    -70986.367907840919, 4.7681791678185874, -76790.246044114945,
    114.50464237859434, -82811.314100923424, 128.57974736552094,
    -89046.048921945883, 13.171677254544306, -95523.3384388902,
    45.600609529734896, -102235.06532703183, 147.94134151222596,
    -109155.61255565878, 74.273896115989189, -116303.41991091125,
    1.6176881223081239, -123696.67405488883, 104.56217628178702,
    -131309.60682995062, 135.73658574357634, -139134.41493247409,
    20.230273286702015, -147200.01088532593, 35.599488142856629, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 122.92585708443505,
    -89.743962404247725, 469.23951004644942, -143.32531878203673,
    1025.5289456501509, -31.99058381611772, 1819.6624942238932,
    -23.271901759494639, 2853.8225394743986, -138.1198565101991,
    4099.261352837816, -100.56020151405892, 5565.3805363637839,
    -0.84702541282959487, 7277.13941411706, -78.586411795835787,
    9215.0789475513338, -146.97426274767963, 11362.080892110174,
    -41.6777812162796, 13744.502135701281, -15.719471768746104,
    16368.840333729961, -131.47593403328628, 19206.120348032749,
    -110.7898205275151, 22261.520144359198, -3.3688914051172816,
    25561.928383627914, -67.340599114444259, 29091.332231365828,
    -148.98393160798355, 32829.29544761841, -52.113791641431931,
    36800.065712683892, -9.5045803688707551, 41014.308589067427,
    -123.54423323710444, 45443.47867521365, -120.20081518969195,
    50088.4128660826, -7.5084029200590408, 54977.319333828207,
    -56.261575539274567, 60097.994613651055, -149.30874676163725,
    65427.147957119967, -63.061929950135578, 70986.367907840919,
    -4.7681791678185874, 76790.246044114945, -114.50464237859434,
    82811.314100923424, -128.57974736552094, 89046.048921945883,
    -13.171677254544306, 95523.3384388902, -45.600609529734896,
    102235.06532703183, -147.94134151222596, 109155.61255565878,
    -74.273896115989189, 116303.41991091125, -1.6176881223081239,
    123696.67405488883, -104.56217628178702, 131309.60682995062,
    -135.73658574357634, 139134.41493247409, -20.230273286702015,
    147200.01088532593, -35.599488142856629, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -122.92585708443505, 89.743962404247725, -469.23951004644942,
    143.32531878203673, -1025.5289456501509, 31.99058381611772,
    -1819.6624942238932, 23.271901759494639, -2853.8225394743986,
    138.1198565101991, -4099.261352837816, 100.56020151405892,
    -5565.3805363637839, 0.84702541282959487, -7277.13941411706,
    78.586411795835787, -9215.0789475513338, 146.97426274767963,
    -11362.080892110174, 41.6777812162796, -13744.502135701281,
    15.719471768746104, -16368.840333729961, 131.47593403328628,
    -19206.120348032749, 110.7898205275151, -22261.520144359198,
    3.3688914051172816, -25561.928383627914, 67.340599114444259,
    -29091.332231365828, 148.98393160798355, -32829.29544761841,
    52.113791641431931, -36800.065712683892, 9.5045803688707551,
    -41014.308589067427, 123.54423323710444, -45443.47867521365,
    120.20081518969195, -50088.4128660826, 7.5084029200590408,
    -54977.319333828207, 56.261575539274567, -60097.994613651055,
    149.30874676163725, -65427.147957119967, 63.061929950135578,
    -70986.367907840919, 4.7681791678185874, -76790.246044114945,
    114.50464237859434, -82811.314100923424, 128.57974736552094,
    -89046.048921945883, 13.171677254544306, -95523.3384388902,
    45.600609529734896, -102235.06532703183, 147.94134151222596,
    -109155.61255565878, 74.273896115989189, -116303.41991091125,
    1.6176881223081239, -123696.67405488883, 104.56217628178702,
    -131309.60682995062, 135.73658574357634, -139134.41493247409,
    20.230273286702015, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, 122.92585708443505, -89.743962404247725, 469.23951004644942,
    -143.32531878203673, 1025.5289456501509, -31.99058381611772,
    1819.6624942238932, -23.271901759494639, 2853.8225394743986,
    -138.1198565101991, 4099.261352837816, -100.56020151405892,
    5565.3805363637839, -0.84702541282959487, 7277.13941411706,
    -78.586411795835787, 9215.0789475513338, -146.97426274767963,
    11362.080892110174, -41.6777812162796, 13744.502135701281,
    -15.719471768746104, 16368.840333729961, -131.47593403328628,
    19206.120348032749, -110.7898205275151, 22261.520144359198,
    -3.3688914051172816, 25561.928383627914, -67.340599114444259,
    29091.332231365828, -148.98393160798355, 32829.29544761841,
    -52.113791641431931, 36800.065712683892, -9.5045803688707551,
    41014.308589067427, -123.54423323710444, 45443.47867521365,
    -120.20081518969195, 50088.4128660826, -7.5084029200590408,
    54977.319333828207, -56.261575539274567, 60097.994613651055,
    -149.30874676163725, 65427.147957119967, -63.061929950135578,
    70986.367907840919, -4.7681791678185874, 76790.246044114945,
    -114.50464237859434, 82811.314100923424, -128.57974736552094,
    89046.048921945883, -13.171677254544306, 95523.3384388902,
    -45.600609529734896, 102235.06532703183, -147.94134151222596,
    109155.61255565878, -74.273896115989189, 116303.41991091125,
    -1.6176881223081239, 123696.67405488883, -104.56217628178702,
    131309.60682995062, -135.73658574357634, 139134.41493247409,
    -20.230273286702015, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -122.92585708443505, 89.743962404247725, -469.23951004644942,
    143.32531878203673, -1025.5289456501509, 31.99058381611772,
    -1819.6624942238932, 23.271901759494639, -2853.8225394743986,
    138.1198565101991, -4099.261352837816, 100.56020151405892,
    -5565.3805363637839, 0.84702541282959487, -7277.13941411706,
    78.586411795835787, -9215.0789475513338, 146.97426274767963,
    -11362.080892110174, 41.6777812162796, -13744.502135701281,
    15.719471768746104, -16368.840333729961, 131.47593403328628,
    -19206.120348032749, 110.7898205275151, -22261.520144359198,
    3.3688914051172816, -25561.928383627914, 67.340599114444259,
    -29091.332231365828, 148.98393160798355, -32829.29544761841,
    52.113791641431931, -36800.065712683892, 9.5045803688707551,
    -41014.308589067427, 123.54423323710444, -45443.47867521365,
    120.20081518969195, -50088.4128660826, 7.5084029200590408,
    -54977.319333828207, 56.261575539274567, -60097.994613651055,
    149.30874676163725, -65427.147957119967, 63.061929950135578,
    -70986.367907840919, 4.7681791678185874, -76790.246044114945,
    114.50464237859434, -82811.314100923424, 128.57974736552094,
    -89046.048921945883, 13.171677254544306, -95523.3384388902,
    45.600609529734896, -102235.06532703183, 147.94134151222596,
    -109155.61255565878, 74.273896115989189, -116303.41991091125,
    1.6176881223081239, -123696.67405488883, 104.56217628178702,
    -131309.60682995062, 135.73658574357634, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 122.92585708443505,
    -89.743962404247725, 469.23951004644942, -143.32531878203673,
    1025.5289456501509, -31.99058381611772, 1819.6624942238932,
    -23.271901759494639, 2853.8225394743986, -138.1198565101991,
    4099.261352837816, -100.56020151405892, 5565.3805363637839,
    -0.84702541282959487, 7277.13941411706, -78.586411795835787,
    9215.0789475513338, -146.97426274767963, 11362.080892110174,
    -41.6777812162796, 13744.502135701281, -15.719471768746104,
    16368.840333729961, -131.47593403328628, 19206.120348032749,
    -110.7898205275151, 22261.520144359198, -3.3688914051172816,
    25561.928383627914, -67.340599114444259, 29091.332231365828,
    -148.98393160798355, 32829.29544761841, -52.113791641431931,
    36800.065712683892, -9.5045803688707551, 41014.308589067427,
    -123.54423323710444, 45443.47867521365, -120.20081518969195,
    50088.4128660826, -7.5084029200590408, 54977.319333828207,
    -56.261575539274567, 60097.994613651055, -149.30874676163725,
    65427.147957119967, -63.061929950135578, 70986.367907840919,
    -4.7681791678185874, 76790.246044114945, -114.50464237859434,
    82811.314100923424, -128.57974736552094, 89046.048921945883,
    -13.171677254544306, 95523.3384388902, -45.600609529734896,
    102235.06532703183, -147.94134151222596, 109155.61255565878,
    -74.273896115989189, 116303.41991091125, -1.6176881223081239,
    123696.67405488883, -104.56217628178702, 131309.60682995062,
    -135.73658574357634, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -122.92585708443505, 89.743962404247725,
    -469.23951004644942, 143.32531878203673, -1025.5289456501509,
    31.99058381611772, -1819.6624942238932, 23.271901759494639,
    -2853.8225394743986, 138.1198565101991, -4099.261352837816,
    100.56020151405892, -5565.3805363637839, 0.84702541282959487,
    -7277.13941411706, 78.586411795835787, -9215.0789475513338,
    146.97426274767963, -11362.080892110174, 41.6777812162796,
    -13744.502135701281, 15.719471768746104, -16368.840333729961,
    131.47593403328628, -19206.120348032749, 110.7898205275151,
    -22261.520144359198, 3.3688914051172816, -25561.928383627914,
    67.340599114444259, -29091.332231365828, 148.98393160798355,
    -32829.29544761841, 52.113791641431931, -36800.065712683892,
    9.5045803688707551, -41014.308589067427, 123.54423323710444,
    -45443.47867521365, 120.20081518969195, -50088.4128660826,
    7.5084029200590408, -54977.319333828207, 56.261575539274567,
    -60097.994613651055, 149.30874676163725, -65427.147957119967,
    63.061929950135578, -70986.367907840919, 4.7681791678185874,
    -76790.246044114945, 114.50464237859434, -82811.314100923424,
    128.57974736552094, -89046.048921945883, 13.171677254544306,
    -95523.3384388902, 45.600609529734896, -102235.06532703183,
    147.94134151222596, -109155.61255565878, 74.273896115989189,
    -116303.41991091125, 1.6176881223081239, -123696.67405488883,
    104.56217628178702, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 122.92585708443505, -89.743962404247725,
    469.23951004644942, -143.32531878203673, 1025.5289456501509,
    -31.99058381611772, 1819.6624942238932, -23.271901759494639,
    2853.8225394743986, -138.1198565101991, 4099.261352837816,
    -100.56020151405892, 5565.3805363637839, -0.84702541282959487,
    7277.13941411706, -78.586411795835787, 9215.0789475513338,
    -146.97426274767963, 11362.080892110174, -41.6777812162796,
    13744.502135701281, -15.719471768746104, 16368.840333729961,
    -131.47593403328628, 19206.120348032749, -110.7898205275151,
    22261.520144359198, -3.3688914051172816, 25561.928383627914,
    -67.340599114444259, 29091.332231365828, -148.98393160798355,
    32829.29544761841, -52.113791641431931, 36800.065712683892,
    -9.5045803688707551, 41014.308589067427, -123.54423323710444,
    45443.47867521365, -120.20081518969195, 50088.4128660826,
    -7.5084029200590408, 54977.319333828207, -56.261575539274567,
    60097.994613651055, -149.30874676163725, 65427.147957119967,
    -63.061929950135578, 70986.367907840919, -4.7681791678185874,
    76790.246044114945, -114.50464237859434, 82811.314100923424,
    -128.57974736552094, 89046.048921945883, -13.171677254544306,
    95523.3384388902, -45.600609529734896, 102235.06532703183,
    -147.94134151222596, 109155.61255565878, -74.273896115989189,
    116303.41991091125, -1.6176881223081239, 123696.67405488883,
    -104.56217628178702, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -122.92585708443505, 89.743962404247725,
    -469.23951004644942, 143.32531878203673, -1025.5289456501509,
    31.99058381611772, -1819.6624942238932, 23.271901759494639,
    -2853.8225394743986, 138.1198565101991, -4099.261352837816,
    100.56020151405892, -5565.3805363637839, 0.84702541282959487,
    -7277.13941411706, 78.586411795835787, -9215.0789475513338,
    146.97426274767963, -11362.080892110174, 41.6777812162796,
    -13744.502135701281, 15.719471768746104, -16368.840333729961,
    131.47593403328628, -19206.120348032749, 110.7898205275151,
    -22261.520144359198, 3.3688914051172816, -25561.928383627914,
    67.340599114444259, -29091.332231365828, 148.98393160798355,
    -32829.29544761841, 52.113791641431931, -36800.065712683892,
    9.5045803688707551, -41014.308589067427, 123.54423323710444,
    -45443.47867521365, 120.20081518969195, -50088.4128660826,
    7.5084029200590408, -54977.319333828207, 56.261575539274567,
    -60097.994613651055, 149.30874676163725, -65427.147957119967,
    63.061929950135578, -70986.367907840919, 4.7681791678185874,
    -76790.246044114945, 114.50464237859434, -82811.314100923424,
    128.57974736552094, -89046.048921945883, 13.171677254544306,
    -95523.3384388902, 45.600609529734896, -102235.06532703183,
    147.94134151222596, -109155.61255565878, 74.273896115989189,
    -116303.41991091125, 1.6176881223081239, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    122.92585708443505, -89.743962404247725, 469.23951004644942,
    -143.32531878203673, 1025.5289456501509, -31.99058381611772,
    1819.6624942238932, -23.271901759494639, 2853.8225394743986,
    -138.1198565101991, 4099.261352837816, -100.56020151405892,
    5565.3805363637839, -0.84702541282959487, 7277.13941411706,
    -78.586411795835787, 9215.0789475513338, -146.97426274767963,
    11362.080892110174, -41.6777812162796, 13744.502135701281,
    -15.719471768746104, 16368.840333729961, -131.47593403328628,
    19206.120348032749, -110.7898205275151, 22261.520144359198,
    -3.3688914051172816, 25561.928383627914, -67.340599114444259,
    29091.332231365828, -148.98393160798355, 32829.29544761841,
    -52.113791641431931, 36800.065712683892, -9.5045803688707551,
    41014.308589067427, -123.54423323710444, 45443.47867521365,
    -120.20081518969195, 50088.4128660826, -7.5084029200590408,
    54977.319333828207, -56.261575539274567, 60097.994613651055,
    -149.30874676163725, 65427.147957119967, -63.061929950135578,
    70986.367907840919, -4.7681791678185874, 76790.246044114945,
    -114.50464237859434, 82811.314100923424, -128.57974736552094,
    89046.048921945883, -13.171677254544306, 95523.3384388902,
    -45.600609529734896, 102235.06532703183, -147.94134151222596,
    109155.61255565878, -74.273896115989189, 116303.41991091125,
    -1.6176881223081239, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -122.92585708443505,
    89.743962404247725, -469.23951004644942, 143.32531878203673,
    -1025.5289456501509, 31.99058381611772, -1819.6624942238932,
    23.271901759494639, -2853.8225394743986, 138.1198565101991,
    -4099.261352837816, 100.56020151405892, -5565.3805363637839,
    0.84702541282959487, -7277.13941411706, 78.586411795835787,
    -9215.0789475513338, 146.97426274767963, -11362.080892110174,
    41.6777812162796, -13744.502135701281, 15.719471768746104,
    -16368.840333729961, 131.47593403328628, -19206.120348032749,
    110.7898205275151, -22261.520144359198, 3.3688914051172816,
    -25561.928383627914, 67.340599114444259, -29091.332231365828,
    148.98393160798355, -32829.29544761841, 52.113791641431931,
    -36800.065712683892, 9.5045803688707551, -41014.308589067427,
    123.54423323710444, -45443.47867521365, 120.20081518969195,
    -50088.4128660826, 7.5084029200590408, -54977.319333828207,
    56.261575539274567, -60097.994613651055, 149.30874676163725,
    -65427.147957119967, 63.061929950135578, -70986.367907840919,
    4.7681791678185874, -76790.246044114945, 114.50464237859434,
    -82811.314100923424, 128.57974736552094, -89046.048921945883,
    13.171677254544306, -95523.3384388902, 45.600609529734896,
    -102235.06532703183, 147.94134151222596, -109155.61255565878,
    74.273896115989189, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    122.92585708443505, -89.743962404247725, 469.23951004644942,
    -143.32531878203673, 1025.5289456501509, -31.99058381611772,
    1819.6624942238932, -23.271901759494639, 2853.8225394743986,
    -138.1198565101991, 4099.261352837816, -100.56020151405892,
    5565.3805363637839, -0.84702541282959487, 7277.13941411706,
    -78.586411795835787, 9215.0789475513338, -146.97426274767963,
    11362.080892110174, -41.6777812162796, 13744.502135701281,
    -15.719471768746104, 16368.840333729961, -131.47593403328628,
    19206.120348032749, -110.7898205275151, 22261.520144359198,
    -3.3688914051172816, 25561.928383627914, -67.340599114444259,
    29091.332231365828, -148.98393160798355, 32829.29544761841,
    -52.113791641431931, 36800.065712683892, -9.5045803688707551,
    41014.308589067427, -123.54423323710444, 45443.47867521365,
    -120.20081518969195, 50088.4128660826, -7.5084029200590408,
    54977.319333828207, -56.261575539274567, 60097.994613651055,
    -149.30874676163725, 65427.147957119967, -63.061929950135578,
    70986.367907840919, -4.7681791678185874, 76790.246044114945,
    -114.50464237859434, 82811.314100923424, -128.57974736552094,
    89046.048921945883, -13.171677254544306, 95523.3384388902,
    -45.600609529734896, 102235.06532703183, -147.94134151222596,
    109155.61255565878, -74.273896115989189, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -122.92585708443505, 89.743962404247725, -469.23951004644942,
    143.32531878203673, -1025.5289456501509, 31.99058381611772,
    -1819.6624942238932, 23.271901759494639, -2853.8225394743986,
    138.1198565101991, -4099.261352837816, 100.56020151405892,
    -5565.3805363637839, 0.84702541282959487, -7277.13941411706,
    78.586411795835787, -9215.0789475513338, 146.97426274767963,
    -11362.080892110174, 41.6777812162796, -13744.502135701281,
    15.719471768746104, -16368.840333729961, 131.47593403328628,
    -19206.120348032749, 110.7898205275151, -22261.520144359198,
    3.3688914051172816, -25561.928383627914, 67.340599114444259,
    -29091.332231365828, 148.98393160798355, -32829.29544761841,
    52.113791641431931, -36800.065712683892, 9.5045803688707551,
    -41014.308589067427, 123.54423323710444, -45443.47867521365,
    120.20081518969195, -50088.4128660826, 7.5084029200590408,
    -54977.319333828207, 56.261575539274567, -60097.994613651055,
    149.30874676163725, -65427.147957119967, 63.061929950135578,
    -70986.367907840919, 4.7681791678185874, -76790.246044114945,
    114.50464237859434, -82811.314100923424, 128.57974736552094,
    -89046.048921945883, 13.171677254544306, -95523.3384388902,
    45.600609529734896, -102235.06532703183, 147.94134151222596, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 122.92585708443505, -89.743962404247725,
    469.23951004644942, -143.32531878203673, 1025.5289456501509,
    -31.99058381611772, 1819.6624942238932, -23.271901759494639,
    2853.8225394743986, -138.1198565101991, 4099.261352837816,
    -100.56020151405892, 5565.3805363637839, -0.84702541282959487,
    7277.13941411706, -78.586411795835787, 9215.0789475513338,
    -146.97426274767963, 11362.080892110174, -41.6777812162796,
    13744.502135701281, -15.719471768746104, 16368.840333729961,
    -131.47593403328628, 19206.120348032749, -110.7898205275151,
    22261.520144359198, -3.3688914051172816, 25561.928383627914,
    -67.340599114444259, 29091.332231365828, -148.98393160798355,
    32829.29544761841, -52.113791641431931, 36800.065712683892,
    -9.5045803688707551, 41014.308589067427, -123.54423323710444,
    45443.47867521365, -120.20081518969195, 50088.4128660826,
    -7.5084029200590408, 54977.319333828207, -56.261575539274567,
    60097.994613651055, -149.30874676163725, 65427.147957119967,
    -63.061929950135578, 70986.367907840919, -4.7681791678185874,
    76790.246044114945, -114.50464237859434, 82811.314100923424,
    -128.57974736552094, 89046.048921945883, -13.171677254544306,
    95523.3384388902, -45.600609529734896, 102235.06532703183,
    -147.94134151222596, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -122.92585708443505, 89.743962404247725, -469.23951004644942,
    143.32531878203673, -1025.5289456501509, 31.99058381611772,
    -1819.6624942238932, 23.271901759494639, -2853.8225394743986,
    138.1198565101991, -4099.261352837816, 100.56020151405892,
    -5565.3805363637839, 0.84702541282959487, -7277.13941411706,
    78.586411795835787, -9215.0789475513338, 146.97426274767963,
    -11362.080892110174, 41.6777812162796, -13744.502135701281,
    15.719471768746104, -16368.840333729961, 131.47593403328628,
    -19206.120348032749, 110.7898205275151, -22261.520144359198,
    3.3688914051172816, -25561.928383627914, 67.340599114444259,
    -29091.332231365828, 148.98393160798355, -32829.29544761841,
    52.113791641431931, -36800.065712683892, 9.5045803688707551,
    -41014.308589067427, 123.54423323710444, -45443.47867521365,
    120.20081518969195, -50088.4128660826, 7.5084029200590408,
    -54977.319333828207, 56.261575539274567, -60097.994613651055,
    149.30874676163725, -65427.147957119967, 63.061929950135578,
    -70986.367907840919, 4.7681791678185874, -76790.246044114945,
    114.50464237859434, -82811.314100923424, 128.57974736552094,
    -89046.048921945883, 13.171677254544306, -95523.3384388902,
    45.600609529734896, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, 122.92585708443505, -89.743962404247725, 469.23951004644942,
    -143.32531878203673, 1025.5289456501509, -31.99058381611772,
    1819.6624942238932, -23.271901759494639, 2853.8225394743986,
    -138.1198565101991, 4099.261352837816, -100.56020151405892,
    5565.3805363637839, -0.84702541282959487, 7277.13941411706,
    -78.586411795835787, 9215.0789475513338, -146.97426274767963,
    11362.080892110174, -41.6777812162796, 13744.502135701281,
    -15.719471768746104, 16368.840333729961, -131.47593403328628,
    19206.120348032749, -110.7898205275151, 22261.520144359198,
    -3.3688914051172816, 25561.928383627914, -67.340599114444259,
    29091.332231365828, -148.98393160798355, 32829.29544761841,
    -52.113791641431931, 36800.065712683892, -9.5045803688707551,
    41014.308589067427, -123.54423323710444, 45443.47867521365,
    -120.20081518969195, 50088.4128660826, -7.5084029200590408,
    54977.319333828207, -56.261575539274567, 60097.994613651055,
    -149.30874676163725, 65427.147957119967, -63.061929950135578,
    70986.367907840919, -4.7681791678185874, 76790.246044114945,
    -114.50464237859434, 82811.314100923424, -128.57974736552094,
    89046.048921945883, -13.171677254544306, 95523.3384388902,
    -45.600609529734896, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -122.92585708443505, 89.743962404247725, -469.23951004644942,
    143.32531878203673, -1025.5289456501509, 31.99058381611772,
    -1819.6624942238932, 23.271901759494639, -2853.8225394743986,
    138.1198565101991, -4099.261352837816, 100.56020151405892,
    -5565.3805363637839, 0.84702541282959487, -7277.13941411706,
    78.586411795835787, -9215.0789475513338, 146.97426274767963,
    -11362.080892110174, 41.6777812162796, -13744.502135701281,
    15.719471768746104, -16368.840333729961, 131.47593403328628,
    -19206.120348032749, 110.7898205275151, -22261.520144359198,
    3.3688914051172816, -25561.928383627914, 67.340599114444259,
    -29091.332231365828, 148.98393160798355, -32829.29544761841,
    52.113791641431931, -36800.065712683892, 9.5045803688707551,
    -41014.308589067427, 123.54423323710444, -45443.47867521365,
    120.20081518969195, -50088.4128660826, 7.5084029200590408,
    -54977.319333828207, 56.261575539274567, -60097.994613651055,
    149.30874676163725, -65427.147957119967, 63.061929950135578,
    -70986.367907840919, 4.7681791678185874, -76790.246044114945,
    114.50464237859434, -82811.314100923424, 128.57974736552094,
    -89046.048921945883, 13.171677254544306, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 122.92585708443505, -89.743962404247725,
    469.23951004644942, -143.32531878203673, 1025.5289456501509,
    -31.99058381611772, 1819.6624942238932, -23.271901759494639,
    2853.8225394743986, -138.1198565101991, 4099.261352837816,
    -100.56020151405892, 5565.3805363637839, -0.84702541282959487,
    7277.13941411706, -78.586411795835787, 9215.0789475513338,
    -146.97426274767963, 11362.080892110174, -41.6777812162796,
    13744.502135701281, -15.719471768746104, 16368.840333729961,
    -131.47593403328628, 19206.120348032749, -110.7898205275151,
    22261.520144359198, -3.3688914051172816, 25561.928383627914,
    -67.340599114444259, 29091.332231365828, -148.98393160798355,
    32829.29544761841, -52.113791641431931, 36800.065712683892,
    -9.5045803688707551, 41014.308589067427, -123.54423323710444,
    45443.47867521365, -120.20081518969195, 50088.4128660826,
    -7.5084029200590408, 54977.319333828207, -56.261575539274567,
    60097.994613651055, -149.30874676163725, 65427.147957119967,
    -63.061929950135578, 70986.367907840919, -4.7681791678185874,
    76790.246044114945, -114.50464237859434, 82811.314100923424,
    -128.57974736552094, 89046.048921945883, -13.171677254544306, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -122.92585708443505, 89.743962404247725, -469.23951004644942,
    143.32531878203673, -1025.5289456501509, 31.99058381611772,
    -1819.6624942238932, 23.271901759494639, -2853.8225394743986,
    138.1198565101991, -4099.261352837816, 100.56020151405892,
    -5565.3805363637839, 0.84702541282959487, -7277.13941411706,
    78.586411795835787, -9215.0789475513338, 146.97426274767963,
    -11362.080892110174, 41.6777812162796, -13744.502135701281,
    15.719471768746104, -16368.840333729961, 131.47593403328628,
    -19206.120348032749, 110.7898205275151, -22261.520144359198,
    3.3688914051172816, -25561.928383627914, 67.340599114444259,
    -29091.332231365828, 148.98393160798355, -32829.29544761841,
    52.113791641431931, -36800.065712683892, 9.5045803688707551,
    -41014.308589067427, 123.54423323710444, -45443.47867521365,
    120.20081518969195, -50088.4128660826, 7.5084029200590408,
    -54977.319333828207, 56.261575539274567, -60097.994613651055,
    149.30874676163725, -65427.147957119967, 63.061929950135578,
    -70986.367907840919, 4.7681791678185874, -76790.246044114945,
    114.50464237859434, -82811.314100923424, 128.57974736552094, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    122.92585708443505, -89.743962404247725, 469.23951004644942,
    -143.32531878203673, 1025.5289456501509, -31.99058381611772,
    1819.6624942238932, -23.271901759494639, 2853.8225394743986,
    -138.1198565101991, 4099.261352837816, -100.56020151405892,
    5565.3805363637839, -0.84702541282959487, 7277.13941411706,
    -78.586411795835787, 9215.0789475513338, -146.97426274767963,
    11362.080892110174, -41.6777812162796, 13744.502135701281,
    -15.719471768746104, 16368.840333729961, -131.47593403328628,
    19206.120348032749, -110.7898205275151, 22261.520144359198,
    -3.3688914051172816, 25561.928383627914, -67.340599114444259,
    29091.332231365828, -148.98393160798355, 32829.29544761841,
    -52.113791641431931, 36800.065712683892, -9.5045803688707551,
    41014.308589067427, -123.54423323710444, 45443.47867521365,
    -120.20081518969195, 50088.4128660826, -7.5084029200590408,
    54977.319333828207, -56.261575539274567, 60097.994613651055,
    -149.30874676163725, 65427.147957119967, -63.061929950135578,
    70986.367907840919, -4.7681791678185874, 76790.246044114945,
    -114.50464237859434, 82811.314100923424, -128.57974736552094, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -122.92585708443505, 89.743962404247725, -469.23951004644942,
    143.32531878203673, -1025.5289456501509, 31.99058381611772,
    -1819.6624942238932, 23.271901759494639, -2853.8225394743986,
    138.1198565101991, -4099.261352837816, 100.56020151405892,
    -5565.3805363637839, 0.84702541282959487, -7277.13941411706,
    78.586411795835787, -9215.0789475513338, 146.97426274767963,
    -11362.080892110174, 41.6777812162796, -13744.502135701281,
    15.719471768746104, -16368.840333729961, 131.47593403328628,
    -19206.120348032749, 110.7898205275151, -22261.520144359198,
    3.3688914051172816, -25561.928383627914, 67.340599114444259,
    -29091.332231365828, 148.98393160798355, -32829.29544761841,
    52.113791641431931, -36800.065712683892, 9.5045803688707551,
    -41014.308589067427, 123.54423323710444, -45443.47867521365,
    120.20081518969195, -50088.4128660826, 7.5084029200590408,
    -54977.319333828207, 56.261575539274567, -60097.994613651055,
    149.30874676163725, -65427.147957119967, 63.061929950135578,
    -70986.367907840919, 4.7681791678185874, -76790.246044114945,
    114.50464237859434, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 122.92585708443505,
    -89.743962404247725, 469.23951004644942, -143.32531878203673,
    1025.5289456501509, -31.99058381611772, 1819.6624942238932,
    -23.271901759494639, 2853.8225394743986, -138.1198565101991,
    4099.261352837816, -100.56020151405892, 5565.3805363637839,
    -0.84702541282959487, 7277.13941411706, -78.586411795835787,
    9215.0789475513338, -146.97426274767963, 11362.080892110174,
    -41.6777812162796, 13744.502135701281, -15.719471768746104,
    16368.840333729961, -131.47593403328628, 19206.120348032749,
    -110.7898205275151, 22261.520144359198, -3.3688914051172816,
    25561.928383627914, -67.340599114444259, 29091.332231365828,
    -148.98393160798355, 32829.29544761841, -52.113791641431931,
    36800.065712683892, -9.5045803688707551, 41014.308589067427,
    -123.54423323710444, 45443.47867521365, -120.20081518969195,
    50088.4128660826, -7.5084029200590408, 54977.319333828207,
    -56.261575539274567, 60097.994613651055, -149.30874676163725,
    65427.147957119967, -63.061929950135578, 70986.367907840919,
    -4.7681791678185874, 76790.246044114945, -114.50464237859434, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -122.92585708443505, 89.743962404247725, -469.23951004644942,
    143.32531878203673, -1025.5289456501509, 31.99058381611772,
    -1819.6624942238932, 23.271901759494639, -2853.8225394743986,
    138.1198565101991, -4099.261352837816, 100.56020151405892,
    -5565.3805363637839, 0.84702541282959487, -7277.13941411706,
    78.586411795835787, -9215.0789475513338, 146.97426274767963,
    -11362.080892110174, 41.6777812162796, -13744.502135701281,
    15.719471768746104, -16368.840333729961, 131.47593403328628,
    -19206.120348032749, 110.7898205275151, -22261.520144359198,
    3.3688914051172816, -25561.928383627914, 67.340599114444259,
    -29091.332231365828, 148.98393160798355, -32829.29544761841,
    52.113791641431931, -36800.065712683892, 9.5045803688707551,
    -41014.308589067427, 123.54423323710444, -45443.47867521365,
    120.20081518969195, -50088.4128660826, 7.5084029200590408,
    -54977.319333828207, 56.261575539274567, -60097.994613651055,
    149.30874676163725, -65427.147957119967, 63.061929950135578,
    -70986.367907840919, 4.7681791678185874, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    122.92585708443505, -89.743962404247725, 469.23951004644942,
    -143.32531878203673, 1025.5289456501509, -31.99058381611772,
    1819.6624942238932, -23.271901759494639, 2853.8225394743986,
    -138.1198565101991, 4099.261352837816, -100.56020151405892,
    5565.3805363637839, -0.84702541282959487, 7277.13941411706,
    -78.586411795835787, 9215.0789475513338, -146.97426274767963,
    11362.080892110174, -41.6777812162796, 13744.502135701281,
    -15.719471768746104, 16368.840333729961, -131.47593403328628,
    19206.120348032749, -110.7898205275151, 22261.520144359198,
    -3.3688914051172816, 25561.928383627914, -67.340599114444259,
    29091.332231365828, -148.98393160798355, 32829.29544761841,
    -52.113791641431931, 36800.065712683892, -9.5045803688707551,
    41014.308589067427, -123.54423323710444, 45443.47867521365,
    -120.20081518969195, 50088.4128660826, -7.5084029200590408,
    54977.319333828207, -56.261575539274567, 60097.994613651055,
    -149.30874676163725, 65427.147957119967, -63.061929950135578,
    70986.367907840919, -4.7681791678185874, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -1.0, -1.0, -1.0, -1.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, 1.0, 1.0, 1.0, 1.0, 1.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -0.0, -0.0, -0.0, -0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -122.92585708443505, 89.743962404247725, -469.23951004644942,
    143.32531878203673, -1025.5289456501509, 31.99058381611772,
    -1819.6624942238932, 23.271901759494639, -2853.8225394743986,
    138.1198565101991, -4099.261352837816, 100.56020151405892,
    -5565.3805363637839, 0.84702541282959487, -7277.13941411706,
    78.586411795835787, -9215.0789475513338, 146.97426274767963,
    -11362.080892110174, 41.6777812162796, -13744.502135701281,
    15.719471768746104, -16368.840333729961, 131.47593403328628,
    -19206.120348032749, 110.7898205275151, -22261.520144359198,
    3.3688914051172816, -25561.928383627914, 67.340599114444259,
    -29091.332231365828, 148.98393160798355, -32829.29544761841,
    52.113791641431931, -36800.065712683892, 9.5045803688707551,
    -41014.308589067427, 123.54423323710444, -45443.47867521365,
    120.20081518969195, -50088.4128660826, 7.5084029200590408,
    -54977.319333828207, 56.261575539274567, -60097.994613651055,
    149.30874676163725, -65427.147957119967, 63.061929950135578, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, 122.92585708443505, -89.743962404247725,
    469.23951004644942, -143.32531878203673, 1025.5289456501509,
    -31.99058381611772, 1819.6624942238932, -23.271901759494639,
    2853.8225394743986, -138.1198565101991, 4099.261352837816,
    -100.56020151405892, 5565.3805363637839, -0.84702541282959487,
    7277.13941411706, -78.586411795835787, 9215.0789475513338,
    -146.97426274767963, 11362.080892110174, -41.6777812162796,
    13744.502135701281, -15.719471768746104, 16368.840333729961,
    -131.47593403328628, 19206.120348032749, -110.7898205275151,
    22261.520144359198, -3.3688914051172816, 25561.928383627914,
    -67.340599114444259, 29091.332231365828, -148.98393160798355,
    32829.29544761841, -52.113791641431931, 36800.065712683892,
    -9.5045803688707551, 41014.308589067427, -123.54423323710444,
    45443.47867521365, -120.20081518969195, 50088.4128660826,
    -7.5084029200590408, 54977.319333828207, -56.261575539274567,
    60097.994613651055, -149.30874676163725, 65427.147957119967,
    -63.061929950135578, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -1.0, -1.0, -1.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, 1.0, 1.0, 1.0, 1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -1.0, -0.0, -0.0, -0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0,
    0.0, 0.0, 0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -122.92585708443505, 89.743962404247725, -469.23951004644942,
    143.32531878203673, -1025.5289456501509, 31.99058381611772,
    -1819.6624942238932, 23.271901759494639, -2853.8225394743986,
    138.1198565101991, -4099.261352837816, 100.56020151405892,
    -5565.3805363637839, 0.84702541282959487, -7277.13941411706,
    78.586411795835787, -9215.0789475513338, 146.97426274767963,
    -11362.080892110174, 41.6777812162796, -13744.502135701281,
    15.719471768746104, -16368.840333729961, 131.47593403328628,
    -19206.120348032749, 110.7898205275151, -22261.520144359198,
    3.3688914051172816, -25561.928383627914, 67.340599114444259,
    -29091.332231365828, 148.98393160798355, -32829.29544761841,
    52.113791641431931, -36800.065712683892, 9.5045803688707551,
    -41014.308589067427, 123.54423323710444, -45443.47867521365,
    120.20081518969195, -50088.4128660826, 7.5084029200590408,
    -54977.319333828207, 56.261575539274567, -60097.994613651055,
    149.30874676163725, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    122.92585708443505, -89.743962404247725, 469.23951004644942,
    -143.32531878203673, 1025.5289456501509, -31.99058381611772,
    1819.6624942238932, -23.271901759494639, 2853.8225394743986,
    -138.1198565101991, 4099.261352837816, -100.56020151405892,
    5565.3805363637839, -0.84702541282959487, 7277.13941411706,
    -78.586411795835787, 9215.0789475513338, -146.97426274767963,
    11362.080892110174, -41.6777812162796, 13744.502135701281,
    -15.719471768746104, 16368.840333729961, -131.47593403328628,
    19206.120348032749, -110.7898205275151, 22261.520144359198,
    -3.3688914051172816, 25561.928383627914, -67.340599114444259,
    29091.332231365828, -148.98393160798355, 32829.29544761841,
    -52.113791641431931, 36800.065712683892, -9.5045803688707551,
    41014.308589067427, -123.54423323710444, 45443.47867521365,
    -120.20081518969195, 50088.4128660826, -7.5084029200590408,
    54977.319333828207, -56.261575539274567, 60097.994613651055,
    -149.30874676163725, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -1.0, -1.0, -1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, 1.0, 1.0, 1.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -1.0, -0.0, -0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 0.0, 0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -122.92585708443505, 89.743962404247725, -469.23951004644942,
    143.32531878203673, -1025.5289456501509, 31.99058381611772,
    -1819.6624942238932, 23.271901759494639, -2853.8225394743986,
    138.1198565101991, -4099.261352837816, 100.56020151405892,
    -5565.3805363637839, 0.84702541282959487, -7277.13941411706,
    78.586411795835787, -9215.0789475513338, 146.97426274767963,
    -11362.080892110174, 41.6777812162796, -13744.502135701281,
    15.719471768746104, -16368.840333729961, 131.47593403328628,
    -19206.120348032749, 110.7898205275151, -22261.520144359198,
    3.3688914051172816, -25561.928383627914, 67.340599114444259,
    -29091.332231365828, 148.98393160798355, -32829.29544761841,
    52.113791641431931, -36800.065712683892, 9.5045803688707551,
    -41014.308589067427, 123.54423323710444, -45443.47867521365,
    120.20081518969195, -50088.4128660826, 7.5084029200590408,
    -54977.319333828207, 56.261575539274567, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, 122.92585708443505, -89.743962404247725,
    469.23951004644942, -143.32531878203673, 1025.5289456501509,
    -31.99058381611772, 1819.6624942238932, -23.271901759494639,
    2853.8225394743986, -138.1198565101991, 4099.261352837816,
    -100.56020151405892, 5565.3805363637839, -0.84702541282959487,
    7277.13941411706, -78.586411795835787, 9215.0789475513338,
    -146.97426274767963, 11362.080892110174, -41.6777812162796,
    13744.502135701281, -15.719471768746104, 16368.840333729961,
    -131.47593403328628, 19206.120348032749, -110.7898205275151,
    22261.520144359198, -3.3688914051172816, 25561.928383627914,
    -67.340599114444259, 29091.332231365828, -148.98393160798355,
    32829.29544761841, -52.113791641431931, 36800.065712683892,
    -9.5045803688707551, 41014.308589067427, -123.54423323710444,
    45443.47867521365, -120.20081518969195, 50088.4128660826,
    -7.5084029200590408, 54977.319333828207, -56.261575539274567, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -1.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 1.0, 1.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0,
    -0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -122.92585708443505, 89.743962404247725, -469.23951004644942,
    143.32531878203673, -1025.5289456501509, 31.99058381611772,
    -1819.6624942238932, 23.271901759494639, -2853.8225394743986,
    138.1198565101991, -4099.261352837816, 100.56020151405892,
    -5565.3805363637839, 0.84702541282959487, -7277.13941411706,
    78.586411795835787, -9215.0789475513338, 146.97426274767963,
    -11362.080892110174, 41.6777812162796, -13744.502135701281,
    15.719471768746104, -16368.840333729961, 131.47593403328628,
    -19206.120348032749, 110.7898205275151, -22261.520144359198,
    3.3688914051172816, -25561.928383627914, 67.340599114444259,
    -29091.332231365828, 148.98393160798355, -32829.29544761841,
    52.113791641431931, -36800.065712683892, 9.5045803688707551,
    -41014.308589067427, 123.54423323710444, -45443.47867521365,
    120.20081518969195, -50088.4128660826, 7.5084029200590408, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    122.92585708443505, -89.743962404247725, 469.23951004644942,
    -143.32531878203673, 1025.5289456501509, -31.99058381611772,
    1819.6624942238932, -23.271901759494639, 2853.8225394743986,
    -138.1198565101991, 4099.261352837816, -100.56020151405892,
    5565.3805363637839, -0.84702541282959487, 7277.13941411706,
    -78.586411795835787, 9215.0789475513338, -146.97426274767963,
    11362.080892110174, -41.6777812162796, 13744.502135701281,
    -15.719471768746104, 16368.840333729961, -131.47593403328628,
    19206.120348032749, -110.7898205275151, 22261.520144359198,
    -3.3688914051172816, 25561.928383627914, -67.340599114444259,
    29091.332231365828, -148.98393160798355, 32829.29544761841,
    -52.113791641431931, 36800.065712683892, -9.5045803688707551,
    41014.308589067427, -123.54423323710444, 45443.47867521365,
    -120.20081518969195, 50088.4128660826, -7.5084029200590408, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, 1.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -1.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0 };

  static const real_T c_A[1681] = { 2.2238021946692144E-6,
    -8.0970116497416662E-6, 1.3160772951054385E-5, -1.5789126083448594E-5,
    1.8123636042970095E-5, -1.8192986098848445E-5, 1.5991119839765732E-5,
    -1.4993889365502125E-5, 1.5456275083966506E-5, -1.5299456426580366E-5,
    1.4219147872373133E-5, -1.3447570713188559E-5, 1.3257437548554206E-5,
    -1.292489732418955E-5, 1.223285798393282E-5, -1.1602348970229265E-5,
    1.119497605062617E-5, -1.0768263572640121E-5, 1.0206690848402784E-5,
    -9.64819525155078E-6, 9.17308417469689E-6, -8.7038678941308789E-6,
    8.18527268874542E-6, -7.6598707758775724E-6, 7.1659253041016166E-6,
    -6.6808800020125657E-6, 6.1768525489792484E-6, -5.6642858211566963E-6,
    5.1656954916158491E-6, -4.6787366391220594E-6, 4.1815801268049541E-6,
    -3.6690683966219177E-6, 3.1666163918452412E-6, -2.6887949416249182E-6,
    2.2013959852030579E-6, -1.6746500603164739E-6, 1.1576826748272837E-6,
    -7.0617739100345955E-7, 3.2492028416900742E-7, -7.5781278777011273E-8, 0.0,
    -8.0970116497416662E-6, 3.1703961917295374E-5, -5.6008802649716436E-5,
    7.0632923874213715E-5, -8.174959132878297E-5, 8.4322790412333183E-5,
    -7.6360701334931842E-5, 7.0514742125506077E-5, -7.11883620968309E-5,
    7.1066302450943088E-5, -6.6962198310756936E-5, 6.3059148937695328E-5,
    -6.1582223112746846E-5, 6.0167930958931338E-5, -5.7301894416610158E-5,
    5.4300580942118953E-5, -5.2173720458759034E-5, 5.0199413909272137E-5,
    -4.7713984288295931E-5, 4.5104965697816452E-5, -4.2803772937887478E-5,
    4.0607444458820719E-5, -3.8235320169043908E-5, 3.5788702171538148E-5,
    -3.3452833945455367E-5, 3.1181684757626481E-5, -2.8845360919249083E-5,
    2.6456869719322215E-5, -2.4118611949260998E-5, 2.1841020623780708E-5,
    -1.9525310185738945E-5, 1.713470625483487E-5, -1.4785151949455586E-5,
    1.2552184555093961E-5, -1.0278126465669661E-5, 7.8195129492725258E-6,
    -5.4043844364079321E-6, 3.2955057990414009E-6, -1.5161284488018868E-6,
    3.5364298005530304E-7, 0.0, 1.3160772951054385E-5, -5.6008802649716436E-5,
    0.00010955645056188323, -0.00014937122072165566, 0.00017775626297932343,
    -0.00018921885465988264, 0.00017869436686244412, -0.00016476933453966184,
    0.00016160043640592715, -0.00016128316556293456, 0.00015470323032898322,
    -0.00014597038866010764, 0.00014088114471797256, -0.00013737385669720028,
    0.00013179987845035027, -0.000125139171728077, 0.00011966593052184989,
    -0.00011495191673841316, 0.00010958884321994765, -0.00010373317176995125,
    9.8252713664892245E-5, -9.3115044633055232E-5, 8.7781148283250335E-5,
    -8.2229628304906612E-5, 7.6803879431661923E-5, -7.1545550475572535E-5,
    6.6216457015534917E-5, -6.0761884450249384E-5, 5.53746502385606E-5,
    -5.0126735101436659E-5, 4.4820239323576006E-5, -3.9343746154593969E-5,
    3.3944187710846431E-5, -2.8810060050468755E-5, 2.3591873618754776E-5,
    -1.7951740231721457E-5, 1.2405323178740539E-5, -7.5610326371183439E-6,
    3.477276882326086E-6, -8.1100992313014454E-7, 0.0, -1.5789126083448594E-5,
    7.0632923874213715E-5, -0.00014937122072165566, 0.00022147703664248926,
    -0.00027774072327403204, 0.00030647020614134123, -0.00030214634187570476,
    0.00028440108962094791, -0.00027362276256232286, 0.00026919635413530683,
    -0.00026106097554979874, 0.00024885958434080679, -0.00023863696232864396,
    0.00023104367431250173, -0.00022247585251449764, 0.00021228021238759749,
    -0.00020258715475543067, 0.00019394248528187527, -0.00018509152141126274,
    0.00017561406750229584, -0.00016624825524101918, 0.00015729968769470572,
    -0.00014832299682363562, 0.00013909820889151898, -0.0001299114816494938,
    0.00012092288784135831, -0.00011191386158648867, 0.00010275104130825022,
    -9.36463534509541E-5, 8.47380263263087E-5, -7.5761541343894416E-5,
    6.6523414855187041E-5, -5.7398382124523818E-5, 4.8705454916180005E-5,
    -3.98797879793679E-5, 3.0351286527324654E-5, -2.0975737248959766E-5,
    1.2780719966266258E-5, -5.8749777358209739E-6, 1.3697633587939363E-6, 0.0,
    1.8123636042970095E-5, -8.174959132878297E-5, 0.00017775626297932343,
    -0.00027774072327403204, 0.00036865915753231566, -0.00042523809630870432,
    0.0004357641167242642, -0.00042307584831326888, 0.00040886877847570952,
    -0.00039656899629877311, 0.00038308847820428857, -0.00036842294327806485,
    0.00035443580232811785, -0.00034126149757197661, 0.00032777987728734096,
    -0.00031382857805732075, 0.00030007649112017456, -0.00028666639652772644,
    0.00027319208069268009, -0.00025953776950063759, 0.00024595715535489192,
    -0.00023253652769464551, 0.000219096395809843, -0.00020556668630803814,
    0.00019209987445527224, -0.00017875915216991427, 0.00016537221554253396,
    -0.00015185742142142351, 0.0001384452575737666, -0.00012526445597927716,
    0.00011196876362702279, -9.832093883312552E-5, 8.485096773124326E-5,
    -7.1999342981801041E-5, 5.8944104656317768E-5, -4.4862186145951584E-5,
    3.1010880508298004E-5, -1.889665626800333E-5, 8.6847241323445856E-6,
    -2.0243280647222641E-6, 0.0, -1.8192986098848445E-5, 8.4322790412333183E-5,
    -0.00018921885465988264, 0.00030647020614134123, -0.00042523809630870432,
    0.00051635442337439035, -0.00055453757786382007, 0.00055655471349769789,
    -0.000547308997373437, 0.00053145921884498334, -0.00050995223627411219,
    0.00048980184898490971, -0.00047323172773007743, 0.000456167082963046,
    -0.00043696417928399219, 0.00041796236557993619, -0.00040032893679343653,
    0.00038273211130032442, -0.00036435400480704631, 0.00034593865688230518,
    -0.00032805595650832822, 0.00031029562994019157, -0.00029224060155784605,
    0.00027410154551547324, -0.00025621099838936954, 0.00023847906583182761,
    -0.00022058544969107044, 0.00020251985436454812, -0.00018465137001089354,
    0.00016709659094584688, -0.00014935258277439084, 0.00013113332947182506,
    -0.00011317259447630939, 9.60412535799218E-5, -7.8625754280662154E-5,
    5.9837527934135268E-5, -4.1364353037795333E-5, 2.5210022368665863E-5,
    -1.1588035214551403E-5, 2.7012117117572986E-6, 0.0, 1.5991119839765732E-5,
    -7.6360701334931842E-5, 0.00017869436686244412, -0.00030214634187570476,
    0.0004357641167242642, -0.00055453757786382007, 0.0006293103438628219,
    -0.00065985472374438547, 0.00066474276169515407, -0.00065388925949032436,
    0.00062977844308123056, -0.000602245947355268, 0.00058026246066281194,
    -0.00056082469663255928, 0.00053829392599742557, -0.000514074071585581,
    0.000491676654441795, -0.00047050270096797868, 0.00044836892992162195,
    -0.00042547841586242904, 0.00040319093380722647, -0.0003814790936431657,
    0.00035946687240615417, -0.0003370992117681952, 0.00031498146635044083,
    -0.00029320680074090578, 0.00027127748441297707, -0.000249050490378505,
    0.000227033074675797, -0.0002054510849645003, 0.0001836595749085672,
    -0.00016125520374952492, 0.00013915293218111162, -0.00011808680006653617,
    9.6681487771144972E-5, -7.3578601345917512E-5, 5.0856898063104489E-5,
    -3.099279734491573E-5, 1.4247006761370954E-5, -3.3214468197562888E-6, 0.0,
    -1.4993889365502125E-5, 7.0514742125506077E-5, -0.00016476933453966184,
    0.00028440108962094791, -0.00042307584831326888, 0.00055655471349769789,
    -0.00065985472374438547, 0.00072732839400413852, -0.00076043199826169455,
    0.00076367227471102277, -0.00074492900844021562, 0.00071502906346874778,
    -0.00068564171634077648, 0.00066083028713932756, -0.00063612425062688075,
    0.00060874834769905671, -0.00058120851806046773, 0.00055535354148874,
    -0.00052977996485667716, 0.00050327028288867353, -0.00047661608095813133,
    0.0004506054045108381, -0.000424754216770732, 0.00039854225689555549,
    -0.00037231944325104342, 0.00034644415406635354, -0.000320566612137947,
    0.00029438513842939347, -0.00026834581837895636, 0.000242784689641104,
    -0.00021703702900670904, 0.00019059118719910538, -0.00016446720161180254,
    0.00013954977276241722, -0.00011425169324063829, 8.6959098160001563E-5,
    -6.0105043429969617E-5, 3.6621081236865617E-5, -1.68302531807891E-5,
    3.92316484653688E-6, 0.0, 1.5456275083966506E-5, -7.11883620968309E-5,
    0.00016160043640592715, -0.00027362276256232286, 0.00040886877847570952,
    -0.000547308997373437, 0.00066474276169515407, -0.00076043199826169455,
    0.00083045981468350932, -0.00086177604693168475, 0.00085679214407719494,
    -0.00083199297855079252, 0.00080009483210299274, -0.00076770424120130071,
    0.00073737151847912878, -0.00070758163442832464, 0.00067669719539436451,
    -0.0006455059287525795, 0.00061502347165136469, -0.00058484730251718328,
    0.00055437365405019208, -0.00052379734399340689, 0.00049342305908006939,
    -0.00046314383250512149, 0.00043287897704222706, -0.00040270955116460127,
    0.00037249899942763925, -0.00034211853438246458, 0.000311939500608138,
    -0.00028220811093218276, 0.00025223060053559352, -0.00022150492901222208,
    0.00019117495766969047, -0.00016221020454126891, 0.00013278822378751088,
    -0.00010107022843819503, 6.9870963688013E-5, -4.2574335348619448E-5,
    1.9563452340960596E-5, -4.5593082981639008E-6, 0.0, -1.5299456426580366E-5,
    7.1066302450943088E-5, -0.00016128316556293456, 0.00026919635413530683,
    -0.00039656899629877311, 0.00053145921884498334, -0.00065388925949032436,
    0.00076367227471102277, -0.00086177604693168475, 0.00092991443655442282,
    -0.00095296661385431, 0.00094186881463373916, -0.00091497511304160434,
    0.000879984950375349, -0.000842006500660378, 0.00080652062350912586,
    -0.00077314113432575037, 0.000738524182545308, -0.000702627589518616,
    0.00066746504124003472, -0.00063325110856207051, 0.00059878128668663043,
    -0.00056375484495164085, 0.000528863705834159, -0.00049446594014865362,
    0.00046019541587098678, -0.00042559139196509023, 0.00039076163250400235,
    -0.00035633253839874242, 0.00032244597408160794, -0.00028817750822856034,
    0.00025302861560531995, -0.00021839076980971993, 0.00018533167371348279,
    -0.00015171570597264384, 0.00011546369446225496, -7.9824725795765868E-5,
    4.8651899178497657E-5, -2.2361695837322097E-5, 5.2120264471470086E-6, 0.0,
    1.4219147872373133E-5, -6.6962198310756936E-5, 0.00015470323032898322,
    -0.00026106097554979874, 0.00038308847820428857, -0.00050995223627411219,
    0.00062977844308123056, -0.00074492900844021562, 0.00085679214407719494,
    -0.00095296661385431, 0.0010132466803576853, -0.0010304444582797476,
    0.0010172318898171531, -0.00098729257160545944, 0.00094693236515318389,
    -0.000903990324238748, 0.00086500008422415759, -0.00082798131428921682,
    0.00078881133826254422, -0.000748386037670946, 0.00070930643017856686,
    -0.00067121431618951462, 0.00063241999141291471, -0.00059300278896324079,
    0.0005541299712089802, -0.0005158664751430818, 0.00047726782005105812,
    -0.00043813720077778053, 0.00039941254793057562, -0.0003614613774484329,
    0.00032311945552877873, -0.00028369312314012029, 0.00024481101141523632,
    -0.00020775610627985966, 0.00017009684319964016, -0.00012944790969348957,
    8.9473987534357581E-5, -5.45292491176696E-5, 2.5067661447430254E-5,
    -5.8442324133279225E-6, 0.0, -1.3447570713188559E-5, 6.3059148937695328E-5,
    -0.00014597038866010764, 0.00024885958434080679, -0.00036842294327806485,
    0.00048980184898490971, -0.000602245947355268, 0.00071502906346874778,
    -0.00083199297855079252, 0.00094186881463373916, -0.0010304444582797476,
    0.001085026128130467, -0.0011000660402155119, 0.0010838116957635308,
    -0.0010486277783266279, 0.0010034096630381394, -0.00095699547225026329,
    0.00091440351510326239, -0.00087290983273034914, 0.00082928874930645658,
    -0.00078500457886466037, 0.0007421030811199541, -0.00069974404788279807,
    0.00065661615641316991, -0.00061328879178338086, 0.00057062584234435481,
    -0.00052807504174962278, 0.00048497614310450717, -0.00044203792594849387,
    0.0003999106552159458, -0.00035752183079540347, 0.00031397178339010953,
    -0.000270923489498002, 0.00022986756258347186, -0.0001882016865004648,
    0.00014324776210018625, -9.9005878842071116E-5, 6.0317299551396829E-5,
    -2.771941690103608E-5, 6.4615513930022085E-6, 0.0, 1.3257437548554206E-5,
    -6.1582223112746846E-5, 0.00014088114471797256, -0.00023863696232864396,
    0.00035443580232811785, -0.00047323172773007743, 0.00058026246066281194,
    -0.00068564171634077648, 0.00080009483210299274, -0.00091497511304160434,
    0.0010172318898171531, -0.0011000660402155119, 0.0011523996041722597,
    -0.0011643172527575885, 0.0011427654957504056, -0.001102667140311817,
    0.0010539051267664129, -0.0010038177992783678, 0.000956684943077655,
    -0.00091067444496089765, 0.00086313095306417233, -0.00081496099329622152,
    0.00076771742493326079, -0.00072094756730518589, 0.00067385421947869562,
    -0.00062668767283442155, 0.00057964958991183271, -0.00053249441300031884,
    0.00048554685991812331, -0.00043919933722784372, 0.00039252574390897371,
    -0.00034474984531266561, 0.00029755921380324787, -0.00025245365677285049,
    0.00020665272125276903, -0.00015730309166867105, 0.00010875121173031197,
    -6.6257710608721347E-5, 3.0440180627157261E-5, -7.0930593872121573E-6, 0.0,
    -1.292489732418955E-5, 6.0167930958931338E-5, -0.00013737385669720028,
    0.00023104367431250173, -0.00034126149757197661, 0.000456167082963046,
    -0.00056082469663255928, 0.00066083028713932756, -0.00076770424120130071,
    0.000879984950375349, -0.00098729257160545944, 0.0010838116957635308,
    -0.0011643172527575885, 0.00121346687370638, -0.0012200760482177064,
    0.0011935911645340211, -0.0011499008007096478, 0.0010974190810858282,
    -0.0010427582177440344, 0.00099107600111199225, -0.0009411075892606927,
    0.00088964206683611255, -0.00083708535062011931, 0.00078538453612893983,
    -0.00073462330736268045, 0.00068367069606018469, -0.00063207045126439964,
    0.00058035327766829236, -0.00052933837242976093, 0.00047900487492476322,
    -0.00042803073004905846, 0.00037581883107797568, -0.00032441445531548478,
    0.0002753153984632852, -0.00022535799435320324, 0.00017150803875461474,
    -0.00011858737017146138, 7.22854379228978E-5, -3.3222802699130792E-5,
    7.7425084952040223E-6, 0.0, 1.223285798393282E-5, -5.7301894416610158E-5,
    0.00013179987845035027, -0.00022247585251449764, 0.00032777987728734096,
    -0.00043696417928399219, 0.00053829392599742557, -0.00063612425062688075,
    0.00073737151847912878, -0.000842006500660378, 0.00094693236515318389,
    -0.0010486277783266279, 0.0011427654957504056, -0.0012200760482177064,
    0.0012640147724479727, -0.0012657708614646549, 0.0012357086257460061,
    -0.0011883178439804373, 0.0011313174387566946, -0.0010721616742204437,
    0.0010165598240445665, -0.00096270597383215782, 0.0009068893823907326,
    -0.0008499103920207602, 0.00079426929640292749, -0.000739704484238376,
    0.00068433729018973913, -0.00062806181452632385, 0.00057255197568252612,
    -0.00051825174670344165, 0.00046328731793222162, -0.00040670007913172517,
    0.00035095119971987189, -0.0002978665365850825, 0.00024388251046351793,
    -0.00018558356998716466, 0.00012827158193294024, -7.818736480130642E-5,
    3.5951819030295355E-5, -8.383013248787671E-6, 0.0, -1.1602348970229265E-5,
    5.4300580942118953E-5, -0.000125139171728077, 0.00021228021238759749,
    -0.00031382857805732075, 0.00041796236557993619, -0.000514074071585581,
    0.00060874834769905671, -0.00070758163442832464, 0.00080652062350912586,
    -0.000903990324238748, 0.0010034096630381394, -0.001102667140311817,
    0.0011935911645340211, -0.0012657708614646549, 0.0013049206826160329,
    -0.0013031043373097884, 0.001269350718774132, -0.0012174822041752438,
    0.0011560275365625917, -0.0010929787716383692, 0.0010335165854909716,
    -0.00097533471413868646, 0.00091511803092437333, -0.00085423758075066423,
    0.00079483645524267856, -0.00073586409108154132, 0.00067581344886635494,
    -0.00061579977393215978, 0.000557092447791935, -0.00049814536043864136,
    0.00043748203345669222, -0.00037743630613599235, 0.00032022099093105842,
    -0.00026220721893100015, 0.000199580723597788, -0.00013791520876623155,
    8.40076889686339E-5, -3.8607803521202467E-5, 9.0010699281547727E-6, 0.0,
    1.119497605062617E-5, -5.2173720458759034E-5, 0.00011966593052184989,
    -0.00020258715475543067, 0.00030007649112017456, -0.00040032893679343653,
    0.000491676654441795, -0.00058120851806046773, 0.00067669719539436451,
    -0.00077314113432575037, 0.00086500008422415759, -0.00095699547225026329,
    0.0010539051267664129, -0.0011499008007096478, 0.0012357086257460061,
    -0.0013031043373097884, 0.0013386496330795154, -0.0013331120393780258,
    0.0012948694226526845, -0.0012385353547741127, 0.0011731704281518986,
    -0.0011062431229667898, 0.0010424282461514937, -0.000979820159420914,
    0.00091569482084074855, -0.00085105252371298653, 0.00078720502099001812,
    -0.000723494875739669, 0.00065971352638815022, -0.00059654315041080875,
    0.00053312858151025923, -0.00046835331055796793, 0.00040426184803879571,
    -0.00034291304340216568, 0.00028068186709839609, -0.00021368721892755816,
    0.00014773957945828873, -8.9986437329061272E-5, 4.1325405498798237E-5,
    -9.6269616914290556E-6, 0.0, -1.0768263572640121E-5, 5.0199413909272137E-5,
    -0.00011495191673841316, 0.00019394248528187527, -0.00028666639652772644,
    0.00038273211130032442, -0.00047050270096797868, 0.00055535354148874,
    -0.0006455059287525795, 0.000738524182545308, -0.00082798131428921682,
    0.00091440351510326239, -0.0010038177992783678, 0.0010974190810858282,
    -0.0011883178439804373, 0.001269350718774132, -0.0013331120393780258,
    0.0013649085976130953, -0.0013548742119110007, 0.0013121581993308061,
    -0.0012518994492741937, 0.0011826405646863567, -0.0011113389254959983,
    0.0010430747581968887, -0.00097655389594970929, 0.00090866798202721361,
    -0.00083954324108252753, 0.00077090623625928982, -0.00070347614760748415,
    0.00063658250095674073, -0.000568646950458812, 0.0004992765951305077,
    -0.000431107093874579, 0.00036588097237255776, -0.00029943165154605584,
    0.00022788040472059246, -0.00015761382363928213, 9.609556963175269E-5,
    -4.4160488483233705E-5, 1.028845428909641E-5, 0.0, 1.0206690848402784E-5,
    -4.7713984288295931E-5, 0.00010958884321994765, -0.00018509152141126274,
    0.00027319208069268009, -0.00036435400480704631, 0.00044836892992162195,
    -0.00052977996485667716, 0.00061502347165136469, -0.000702627589518616,
    0.00078881133826254422, -0.00087290983273034914, 0.000956684943077655,
    -0.0010427582177440344, 0.0011313174387566946, -0.0012174822041752438,
    0.0012948694226526845, -0.0013548742119110007, 0.0013821937146174372,
    -0.001367705462309549, 0.00132107317509766, -0.0012569275285445193,
    0.0011832972780870779, -0.0011075481466286748, 0.0010353914194538901,
    -0.00096513543841552068, 0.00089275410058645252, -0.00081881078920650787,
    0.00074648998171545689, -0.00067601863694782827, 0.00060432341579085751,
    -0.00053032295096379323, 0.00045761909909951281, -0.00038851633314624653,
    0.00031812461529725854, -0.00024202360838532927, 0.0001672780317563722,
    -0.00010200862928190903, 4.6930881481293617E-5, -1.0946667409104819E-5, 0.0,
    -9.64819525155078E-6, 4.5104965697816452E-5, -0.00010373317176995125,
    0.00017561406750229584, -0.00025953776950063759, 0.00034593865688230518,
    -0.00042547841586242904, 0.00050327028288867353, -0.00058484730251718328,
    0.00066746504124003472, -0.000748386037670946, 0.00082928874930645658,
    -0.00091067444496089765, 0.00099107600111199225, -0.0010721616742204437,
    0.0011560275365625917, -0.0012385353547741127, 0.0013121581993308061,
    -0.001367705462309549, 0.0013905904231628382, -0.0013721941687612196,
    0.0013216819147214263, -0.0012531677444618096, 0.0011750916830208173,
    -0.0010954700155549947, 0.0010196034031689, -0.00094483896088032836,
    0.00086761001244279527, -0.00079001878177320159, 0.00071472732007782217,
    -0.00063941802758752818, 0.00056154915414825606, -0.00048427557987638275,
    0.00041083881845087273, -0.00033650548305502677, 0.00025613186348426954,
    -0.00017691378785038449, 0.00010773049269170723, -4.9521041578005594E-5,
    1.155065971409474E-5, 0.0, 9.17308417469689E-6, -4.2803772937887478E-5,
    9.8252713664892245E-5, -0.00016624825524101918, 0.00024595715535489192,
    -0.00032805595650832822, 0.00040319093380722647, -0.00047661608095813133,
    0.00055437365405019208, -0.00063325110856207051, 0.00070930643017856686,
    -0.00078500457886466037, 0.00086313095306417233, -0.0009411075892606927,
    0.0010165598240445665, -0.0010929787716383692, 0.0011731704281518986,
    -0.0012518994492741937, 0.00132107317509766, -0.0013721941687612196,
    0.0013911706895907722, -0.0013688928970035492, 0.0013140059156257846,
    -0.0012410385427140658, 0.001159099995597543, -0.0010757834447815877,
    0.000995387801111127, -0.00091574029758105557, 0.0008348880051685482,
    -0.00075438286060418877, 0.00067421151073646091, -0.000592619735656584,
    0.00051152482827517725, -0.00043369471269890216, 0.00035495926850550512,
    -0.00027033103141143222, 0.00018690272554426472, -0.0001137596061372781,
    5.2199219813059145E-5, -1.2154150853637756E-5, 0.0, -8.7038678941308789E-6,
    4.0607444458820719E-5, -9.3115044633055232E-5, 0.00015729968769470572,
    -0.00023253652769464551, 0.00031029562994019157, -0.0003814790936431657,
    0.0004506054045108381, -0.00052379734399340689, 0.00059878128668663043,
    -0.00067121431618951462, 0.0007421030811199541, -0.00081496099329622152,
    0.00088964206683611255, -0.00096270597383215782, 0.0010335165854909716,
    -0.0011062431229667898, 0.0011826405646863567, -0.0012569275285445193,
    0.0013216819147214263, -0.0013688928970035492, 0.0013839851949610338,
    -0.0013573252441329764, 0.0012979764147599551, -0.0012211554040133684,
    0.001135535804108623, -0.0010476684838237769, 0.00096235313209285043,
    -0.00087910561278234942, 0.00079539492965426, -0.00070996685820810747,
    0.00062340307505760859, -0.0005386310075629426, 0.00045715459855721034,
    -0.00037395672450657533, 0.00028461245939640211, -0.00019699039548527959,
    0.00012014805345491793, -5.5189257113177892E-5, 1.2848055011406086E-5, 0.0,
    8.18527268874542E-6, -3.8235320169043908E-5, 8.7781148283250335E-5,
    -0.00014832299682363562, 0.000219096395809843, -0.00029224060155784605,
    0.00035946687240615417, -0.000424754216770732, 0.00049342305908006939,
    -0.00056375484495164085, 0.00063241999141291471, -0.00069974404788279807,
    0.00076771742493326079, -0.00083708535062011931, 0.0009068893823907326,
    -0.00097533471413868646, 0.0010424282461514937, -0.0011113389254959983,
    0.0011832972780870779, -0.0012531677444618096, 0.0013140059156257846,
    -0.0013573252441329764, 0.0013680221203615874, -0.0013368856097541108,
    0.0012736886918736055, -0.00119319795193417, 0.0011029980730655608,
    -0.0010101644082639528, 0.00092127110762238343, -0.00083522418990689628,
    0.000746536769342088, -0.00065458578373442215, 0.00056488936003031118,
    -0.00047993154667065548, 0.00039300388564412597, -0.00029883330727025463,
    0.00020655999902026401, -0.00012610411087194708, 5.80863062427104E-5,
    -1.3557241652049813E-5, 0.0, -7.6598707758775724E-6, 3.5788702171538148E-5,
    -8.2229628304906612E-5, 0.00013909820889151898, -0.00020556668630803814,
    0.00027410154551547324, -0.0003370992117681952, 0.00039854225689555549,
    -0.00046314383250512149, 0.000528863705834159, -0.00059300278896324079,
    0.00065661615641316991, -0.00072094756730518589, 0.00078538453612893983,
    -0.0008499103920207602, 0.00091511803092437333, -0.000979820159420914,
    0.0010430747581968887, -0.0011075481466286748, 0.0011750916830208173,
    -0.0012410385427140658, 0.0012979764147599551, -0.0013368856097541108,
    0.0013430897353731242, -0.0013081097220458795, 0.0012412535550321599,
    -0.0011561512353262067, 0.0010609362318935568, -0.00096454610519200847,
    0.00087291258952110044, -0.00078183276710265092, 0.00068648798053878325,
    -0.00059145206309366908, 0.00050176885431101406, -0.00041127317307571693,
    0.00031299980056262189, -0.00021596559266929467, 0.00013145040204737274,
    -6.0472616363699283E-5, 1.4122435002937857E-5, 0.0, 7.1659253041016166E-6,
    -3.3452833945455367E-5, 7.6803879431661923E-5, -0.0001299114816494938,
    0.00019209987445527224, -0.00025621099838936954, 0.00031498146635044083,
    -0.00037231944325104342, 0.00043287897704222706, -0.00049446594014865362,
    0.0005541299712089802, -0.00061328879178338086, 0.00067385421947869562,
    -0.00073462330736268045, 0.00079426929640292749, -0.00085423758075066423,
    0.00091569482084074855, -0.00097655389594970929, 0.0010353914194538901,
    -0.0010954700155549947, 0.001159099995597543, -0.0012211554040133684,
    0.0012736886918736055, -0.0013081097220458795, 0.0013104906405144053,
    -0.0012718761180932634, 0.0012004001027639826, -0.001110260625969482,
    0.0010115232252220772, -0.00091245686864164816, 0.00081576193766561976,
    -0.00071793381027571428, 0.00061955943074772481, -0.00052471287499253772,
    0.00042943841710362408, -0.00032731464096914033, 0.0002262478234188786,
    -0.00013746321061264098, 6.2962386426852673E-5, -1.4647501521055368E-5, 0.0,
    -6.6808800020125657E-6, 3.1181684757626481E-5, -7.1545550475572535E-5,
    0.00012092288784135831, -0.00017875915216991427, 0.00023847906583182761,
    -0.00029320680074090578, 0.00034644415406635354, -0.00040270955116460127,
    0.00046019541587098678, -0.0005158664751430818, 0.00057062584234435481,
    -0.00062668767283442155, 0.00068367069606018469, -0.000739704484238376,
    0.00079483645524267856, -0.00085105252371298653, 0.00090866798202721361,
    -0.00096513543841552068, 0.0010196034031689, -0.0010757834447815877,
    0.001135535804108623, -0.00119319795193417, 0.0012412535550321599,
    -0.0012718761180932634, 0.001270651343768809, -0.0012274152962881994,
    0.0011508876707462181, -0.001057263370520113, 0.00095591513511737161,
    -0.00085176684472261467, 0.00074824499673292082, -0.00064744458141133016,
    0.00054942928976426156, -0.00044894791407545888, 0.00034178869440985794,
    -0.00023694242602253672, 0.00014458814491824734, -6.6320994852401958E-5,
    1.5408731560355326E-5, 0.0, 6.1768525489792484E-6, -2.8845360919249083E-5,
    6.6216457015534917E-5, -0.00011191386158648867, 0.00016537221554253396,
    -0.00022058544969107044, 0.00027127748441297707, -0.000320566612137947,
    0.00037249899942763925, -0.00042559139196509023, 0.00047726782005105812,
    -0.00052807504174962278, 0.00057964958991183271, -0.00063207045126439964,
    0.00068433729018973913, -0.00073586409108154132, 0.00078720502099001812,
    -0.00083954324108252753, 0.00089275410058645252, -0.00094483896088032836,
    0.000995387801111127, -0.0010476684838237769, 0.0011029980730655608,
    -0.0011561512353262067, 0.0012004001027639826, -0.0012274152962881994,
    0.0012215221667584738, -0.0011731686802714954, 0.0010931658738350346,
    -0.000996981142183015, 0.00089047784095011378, -0.00077934515939918935,
    0.00067288844792448706, -0.00057264729023982644, 0.00046889202079069658,
    -0.00035611288278764578, 0.00024628667870835083, -0.0001507740688635328,
    6.9627141462212417E-5, -1.6268240973749365E-5, 0.0, -5.6642858211566963E-6,
    2.6456869719322215E-5, -6.0761884450249384E-5, 0.00010275104130825022,
    -0.00015185742142142351, 0.00020251985436454812, -0.000249050490378505,
    0.00029438513842939347, -0.00034211853438246458, 0.00039076163250400235,
    -0.00043813720077778053, 0.00048497614310450717, -0.00053249441300031884,
    0.00058035327766829236, -0.00062806181452632385, 0.00067581344886635494,
    -0.000723494875739669, 0.00077090623625928982, -0.00081881078920650787,
    0.00086761001244279527, -0.00091574029758105557, 0.00096235313209285043,
    -0.0010101644082639528, 0.0010609362318935568, -0.001110260625969482,
    0.0011508876707462181, -0.0011731686802714954, 0.0011620707783828123,
    -0.0011102402232723086, 0.0010277211340754585, -0.00092628591745783084,
    0.00081260767413090943, -0.00069856966162784454, 0.00059288528187650144,
    -0.00048677251326140918, 0.00037024068668305935, -0.00025484471201137212,
    0.00015504021546404532, -7.1503526694592165E-5, 1.6751965329837333E-5, 0.0,
    5.1656954916158491E-6, -2.4118611949260998E-5, 5.53746502385606E-5,
    -9.36463534509541E-5, 0.0001384452575737666, -0.00018465137001089354,
    0.000227033074675797, -0.00026834581837895636, 0.000311939500608138,
    -0.00035633253839874242, 0.00039941254793057562, -0.00044203792594849387,
    0.00048554685991812331, -0.00052933837242976093, 0.00057255197568252612,
    -0.00061579977393215978, 0.00065971352638815022, -0.00070347614760748415,
    0.00074648998171545689, -0.00079001878177320159, 0.0008348880051685482,
    -0.00087910561278234942, 0.00092127110762238343, -0.00096454610519200847,
    0.0010115232252220772, -0.001057263370520113, 0.0010931658738350346,
    -0.0011102402232723086, 0.0010957114510990568, -0.0010414361708992292,
    0.000953658453438468, -0.00084498689812666683, 0.00072846820391585557,
    -0.00061537070335835546, 0.000503784499390437, -0.00038466879842777681,
    0.0002655987662113096, -0.00016066439798448069, 7.3310121814973474E-5,
    -1.7031169680251041E-5, 0.0, -4.6787366391220594E-6, 2.1841020623780708E-5,
    -5.0126735101436659E-5, 8.47380263263087E-5, -0.00012526445597927716,
    0.00016709659094584688, -0.0002054510849645003, 0.000242784689641104,
    -0.00028220811093218276, 0.00032244597408160794, -0.0003614613774484329,
    0.0003999106552159458, -0.00043919933722784372, 0.00047900487492476322,
    -0.00051825174670344165, 0.000557092447791935, -0.00059654315041080875,
    0.00063658250095674073, -0.00067601863694782827, 0.00071472732007782217,
    -0.00075438286060418877, 0.00079539492965426, -0.00083522418990689628,
    0.00087291258952110044, -0.00091245686864164816, 0.00095591513511737161,
    -0.000996981142183015, 0.0010277211340754585, -0.0010414361708992292,
    0.0010245485427261411, -0.00096505400162159426, 0.00087004859523515349,
    -0.00075861940032717363, 0.00064318395434872925, -0.00052421040685588437,
    0.00039953279994875223, -0.00027797053134028925, 0.00016966453680714478,
    -7.7492457419545474E-5, 1.791205025993799E-5, 0.0, 4.1815801268049541E-6,
    -1.9525310185738945E-5, 4.4820239323576006E-5, -7.5761541343894416E-5,
    0.00011196876362702279, -0.00014935258277439084, 0.0001836595749085672,
    -0.00021703702900670904, 0.00025223060053559352, -0.00028817750822856034,
    0.00032311945552877873, -0.00035752183079540347, 0.00039252574390897371,
    -0.00042803073004905846, 0.00046328731793222162, -0.00049814536043864136,
    0.00053312858151025923, -0.000568646950458812, 0.00060432341579085751,
    -0.00063941802758752818, 0.00067421151073646091, -0.00070996685820810747,
    0.000746536769342088, -0.00078183276710265092, 0.00081576193766561976,
    -0.00085176684472261467, 0.00089047784095011378, -0.00092628591745783084,
    0.000953658453438468, -0.00096505400162159426, 0.00094284411993337,
    -0.00087592100069040692, 0.00077818138494462671, -0.00066804746119820079,
    0.00054659687294940818, -0.00041403651879774067, 0.00028695537883172248,
    -0.00017685435224463065, 8.2091687564713115E-5, -1.9207858565414436E-5, 0.0,
    -3.6690683966219177E-6, 1.713470625483487E-5, -3.9343746154593969E-5,
    6.6523414855187041E-5, -9.832093883312552E-5, 0.00013113332947182506,
    -0.00016125520374952492, 0.00019059118719910538, -0.00022150492901222208,
    0.00025302861560531995, -0.00028369312314012029, 0.00031397178339010953,
    -0.00034474984531266561, 0.00037581883107797568, -0.00040670007913172517,
    0.00043748203345669222, -0.00046835331055796793, 0.0004992765951305077,
    -0.00053032295096379323, 0.00056154915414825606, -0.000592619735656584,
    0.00062340307505760859, -0.00065458578373442215, 0.00068648798053878325,
    -0.00071793381027571428, 0.00074824499673292082, -0.00077934515939918935,
    0.00081260767413090943, -0.00084498689812666683, 0.00087004859523515349,
    -0.00087592100069040692, 0.000845937870065239, -0.00077626558786780147,
    0.00068008310392301467, -0.00056368015860371826, 0.00042786610078925579,
    -0.0002929163603871439, 0.00017827041575788554, -8.2821026165926561E-5,
    1.9560301110396426E-5, 0.0, 3.1666163918452412E-6, -1.4785151949455586E-5,
    3.3944187710846431E-5, -5.7398382124523818E-5, 8.485096773124326E-5,
    -0.00011317259447630939, 0.00013915293218111162, -0.00016446720161180254,
    0.00019117495766969047, -0.00021839076980971993, 0.00024481101141523632,
    -0.000270923489498002, 0.00029755921380324787, -0.00032441445531548478,
    0.00035095119971987189, -0.00037743630613599235, 0.00040426184803879571,
    -0.000431107093874579, 0.00045761909909951281, -0.00048427557987638275,
    0.00051152482827517725, -0.0005386310075629426, 0.00056488936003031118,
    -0.00059145206309366908, 0.00061955943074772481, -0.00064744458141133016,
    0.00067288844792448706, -0.00069856966162784454, 0.00072846820391585557,
    -0.00075861940032717363, 0.00077818138494462671, -0.00077626558786780147,
    0.00074361287053067787, -0.0006756522907032359, 0.00057320632377627178,
    -0.00044230226573181757, 0.00030419088821629703, -0.0001820330111788689,
    8.2413093859896226E-5, -1.9116055727044921E-5, 0.0, -2.6887949416249182E-6,
    1.2552184555093961E-5, -2.8810060050468755E-5, 4.8705454916180005E-5,
    -7.1999342981801041E-5, 9.60412535799218E-5, -0.00011808680006653617,
    0.00013954977276241722, -0.00016221020454126891, 0.00018533167371348279,
    -0.00020775610627985966, 0.00022986756258347186, -0.00025245365677285049,
    0.0002753153984632852, -0.0002978665365850825, 0.00032022099093105842,
    -0.00034291304340216568, 0.00036588097237255776, -0.00038851633314624653,
    0.00041083881845087273, -0.00043369471269890216, 0.00045715459855721034,
    -0.00047993154667065548, 0.00050176885431101406, -0.00052471287499253772,
    0.00054942928976426156, -0.00057264729023982644, 0.00059288528187650144,
    -0.00061537070335835546, 0.00064318395434872925, -0.00066804746119820079,
    0.00068008310392301467, -0.0006756522907032359, 0.00064477131713085753,
    -0.00057077340675463779, 0.00045422903930214265, -0.00032117708716084367,
    0.00019568478439069086, -8.8300543357568118E-5, 2.0143994669160808E-5, 0.0,
    2.2013959852030579E-6, -1.0278126465669661E-5, 2.3591873618754776E-5,
    -3.98797879793679E-5, 5.8944104656317768E-5, -7.8625754280662154E-5,
    9.6681487771144972E-5, -0.00011425169324063829, 0.00013278822378751088,
    -0.00015171570597264384, 0.00017009684319964016, -0.0001882016865004648,
    0.00020665272125276903, -0.00022535799435320324, 0.00024388251046351793,
    -0.00026220721893100015, 0.00028068186709839609, -0.00029943165154605584,
    0.00031812461529725854, -0.00033650548305502677, 0.00035495926850550512,
    -0.00037395672450657533, 0.00039300388564412597, -0.00041127317307571693,
    0.00042943841710362408, -0.00044894791407545888, 0.00046889202079069658,
    -0.00048677251326140918, 0.000503784499390437, -0.00052421040685588437,
    0.00054659687294940818, -0.00056368015860371826, 0.00057320632377627178,
    -0.00057077340675463779, 0.00053367565396539112, -0.00044498382087622103,
    0.00032631742499246566, -0.00020667339338340185, 9.6846191159585842E-5,
    -2.2673189663780281E-5, 0.0, -1.6746500603164739E-6, 7.8195129492725258E-6,
    -1.7951740231721457E-5, 3.0351286527324654E-5, -4.4862186145951584E-5,
    5.9837527934135268E-5, -7.3578601345917512E-5, 8.6959098160001563E-5,
    -0.00010107022843819503, 0.00011546369446225496, -0.00012944790969348957,
    0.00014324776210018625, -0.00015730309166867105, 0.00017150803875461474,
    -0.00018558356998716466, 0.000199580723597788, -0.00021368721892755816,
    0.00022788040472059246, -0.00024202360838532927, 0.00025613186348426954,
    -0.00027033103141143222, 0.00028461245939640211, -0.00029883330727025463,
    0.00031299980056262189, -0.00032731464096914033, 0.00034178869440985794,
    -0.00035611288278764578, 0.00037024068668305935, -0.00038466879842777681,
    0.00039953279994875223, -0.00041403651879774067, 0.00042786610078925579,
    -0.00044230226573181757, 0.00045422903930214265, -0.00044498382087622103,
    0.00039157770320483854, -0.00030067887988932988, 0.00019720451085276073,
    -9.5296009891623792E-5, 2.2946882396069766E-5, 0.0, 1.1576826748272837E-6,
    -5.4043844364079321E-6, 1.2405323178740539E-5, -2.0975737248959766E-5,
    3.1010880508298004E-5, -4.1364353037795333E-5, 5.0856898063104489E-5,
    -6.0105043429969617E-5, 6.9870963688013E-5, -7.9824725795765868E-5,
    8.9473987534357581E-5, -9.9005878842071116E-5, 0.00010875121173031197,
    -0.00011858737017146138, 0.00012827158193294024, -0.00013791520876623155,
    0.00014773957945828873, -0.00015761382363928213, 0.0001672780317563722,
    -0.00017691378785038449, 0.00018690272554426472, -0.00019699039548527959,
    0.00020655999902026401, -0.00021596559266929467, 0.0002262478234188786,
    -0.00023694242602253672, 0.00024628667870835083, -0.00025484471201137212,
    0.0002655987662113096, -0.00027797053134028925, 0.00028695537883172248,
    -0.0002929163603871439, 0.00030419088821629703, -0.00032117708716084367,
    0.00032631742499246566, -0.00030067887988932988, 0.00024517228390416482,
    -0.00016977849542979814, 8.435944443381028E-5, -2.0466664738318593E-5, 0.0,
    -7.0617739100345955E-7, 3.2955057990414009E-6, -7.5610326371183439E-6,
    1.2780719966266258E-5, -1.889665626800333E-5, 2.5210022368665863E-5,
    -3.099279734491573E-5, 3.6621081236865617E-5, -4.2574335348619448E-5,
    4.8651899178497657E-5, -5.45292491176696E-5, 6.0317299551396829E-5,
    -6.6257710608721347E-5, 7.22854379228978E-5, -7.818736480130642E-5,
    8.40076889686339E-5, -8.9986437329061272E-5, 9.609556963175269E-5,
    -0.00010200862928190903, 0.00010773049269170723, -0.0001137596061372781,
    0.00012014805345491793, -0.00012610411087194708, 0.00013145040204737274,
    -0.00013746321061264098, 0.00014458814491824734, -0.0001507740688635328,
    0.00015504021546404532, -0.00016066439798448069, 0.00016966453680714478,
    -0.00017685435224463065, 0.00017827041575788554, -0.0001820330111788689,
    0.00019568478439069086, -0.00020667339338340185, 0.00019720451085276073,
    -0.00016977849542979814, 0.00012826744457454186, -6.9088756400678908E-5,
    1.760894143441943E-5, 0.0, 3.2492028416900742E-7, -1.5161284488018868E-6,
    3.477276882326086E-6, -5.8749777358209739E-6, 8.6847241323445856E-6,
    -1.1588035214551403E-5, 1.4247006761370954E-5, -1.68302531807891E-5,
    1.9563452340960596E-5, -2.2361695837322097E-5, 2.5067661447430254E-5,
    -2.771941690103608E-5, 3.0440180627157261E-5, -3.3222802699130792E-5,
    3.5951819030295355E-5, -3.8607803521202467E-5, 4.1325405498798237E-5,
    -4.4160488483233705E-5, 4.6930881481293617E-5, -4.9521041578005594E-5,
    5.2199219813059145E-5, -5.5189257113177892E-5, 5.80863062427104E-5,
    -6.0472616363699283E-5, 6.2962386426852673E-5, -6.6320994852401958E-5,
    6.9627141462212417E-5, -7.1503526694592165E-5, 7.3310121814973474E-5,
    -7.7492457419545474E-5, 8.2091687564713115E-5, -8.2821026165926561E-5,
    8.2413093859896226E-5, -8.8300543357568118E-5, 9.6846191159585842E-5,
    -9.5296009891623792E-5, 8.435944443381028E-5, -6.9088756400678908E-5,
    4.1608012126911243E-5, -1.1653952874197542E-5, 0.0, -7.5781278777011273E-8,
    3.5364298005530304E-7, -8.1100992313014454E-7, 1.3697633587939363E-6,
    -2.0243280647222641E-6, 2.7012117117572986E-6, -3.3214468197562888E-6,
    3.92316484653688E-6, -4.5593082981639008E-6, 5.2120264471470086E-6,
    -5.8442324133279225E-6, 6.4615513930022085E-6, -7.0930593872121573E-6,
    7.7425084952040223E-6, -8.383013248787671E-6, 9.0010699281547727E-6,
    -9.6269616914290556E-6, 1.028845428909641E-5, -1.0946667409104819E-5,
    1.155065971409474E-5, -1.2154150853637756E-5, 1.2848055011406086E-5,
    -1.3557241652049813E-5, 1.4122435002937857E-5, -1.4647501521055368E-5,
    1.5408731560355326E-5, -1.6268240973749365E-5, 1.6751965329837333E-5,
    -1.7031169680251041E-5, 1.791205025993799E-5, -1.9207858565414436E-5,
    1.9560301110396426E-5, -1.9116055727044921E-5, 2.0143994669160808E-5,
    -2.2673189663780281E-5, 2.2946882396069766E-5, -2.0466664738318593E-5,
    1.760894143441943E-5, -1.1653952874197542E-5, 3.5648517243543225E-6, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 2.46301869964355E-6 };

  int32_T exitg;
  int32_T exitg_0;
  boolean_T guard;
  int32_T i_0;
  boolean_T r_0[41];
  int32_T i_1;
  int32_T i_2;
  int32_T h_sizes[2];
  int32_T j_data[82];
  real_T C_data[82];
  int32_T o_data[41];
  int32_T c_b_sizes[2];
  int32_T b_y_sizes[2];
  int32_T e_b_sizes[2];
  int32_T b_a_sizes[2];
  real_T vwork_data[41];
  int32_T iidx_data[41];
  int32_T idx0_data[41];
  int32_T RLinv_sizes[2];
  int32_T RLinv_sizes_0[2];
  int32_T TL_sizes[2];
  int32_T tmp_data[41];
  int32_T tmp_data_0[82];
  int32_T nA_idx;
  int8_T u_idx;
  int32_T loop_ub;
  *status = 1.0;
  for (i_0 = 0; i_0 < 41; i_0++) {
    r[i_0] = 0.0;
  }

  rMin = 0.0;
  for (i_1 = 0; i_1 < 1681; i_1++) {
    Planilla_3DOF_Crane_B.RLinv[i_1] = 0.0;
    Planilla_3DOF_Crane_B.TL[i_1] = 0.0;
    Planilla_3DOF_Crane_B.Q[i_1] = 0.0;
  }

  Planilla_3DOF_Crane_abs(b, varargin);
  for (b_ar = 0; b_ar < 400; b_ar++) {
    cTol[b_ar] = varargin[b_ar] >= 1.0 ? varargin[b_ar] : 1.0;
  }

  cTolComputed = FALSE;
  for (i_1 = 0; i_1 < 41; i_1++) {
    iC[i_1] = 0.0;
  }

  nA = 0.0;
  for (b_ar = 0; b_ar < 400; b_ar++) {
    if (iA[b_ar]) {
      nA++;
      iC[(int32_T)nA - 1] = 1.0 + (real_T)b_ar;
    }
  }

  for (i_0 = 0; i_0 < 400; i_0++) {
    lambda[i_0] = 0.0;
  }

  if (nA > 0.0) {
    for (i_0 = 0; i_0 < 41; i_0++) {
      x[i_0] = 0.0;
    }

    for (i_1 = 0; i_1 < 1681; i_1++) {
      Planilla_3DOF_Crane_B.D[i_1] = 0.0;
    }

    for (i_0 = 0; i_0 < 82; i_0++) {
      Opt[i_0] = 0.0;
    }

    memcpy((void *)&Rhs[0], (void *)&f[0], 41U * sizeof(real_T));
    for (i_0 = 0; i_0 < 41; i_0++) {
      Rhs[i_0 + 41] = 0.0;
    }

    MaxWSiter = ceil(0.3 * nA);
    MaxWSiter = MaxWSiter >= 5.0 ? MaxWSiter : 5.0;
    while ((!DualFeasible) && (nA > 0.0) && (*status <= 1764.0)) {
      Xnorm_0 = Planilla_3DOF_Crane_KWIKfactor(iC, nA,
        &Planilla_3DOF_Crane_B.TL[0], &Planilla_3DOF_Crane_B.Q[0],
        &Planilla_3DOF_Crane_B.RLinv[0]);
      if (Xnorm_0 < 0.0) {
        nA = 0.0;
        for (i_0 = 0; i_0 < 441; i_0++) {
          iA[i_0] = FALSE;
        }

        for (i_1 = 0; i_1 < 41; i_1++) {
          iC[i_1] = 0.0;
        }

        DualFeasible = TRUE;
      } else {
        e_b_sizes[0] = (int32_T)nA;
        e_b_sizes[1] = (int32_T)nA;
        loop_ub = (int32_T)nA - 1;
        for (i_1 = 0; i_1 <= loop_ub; i_1++) {
          b_br = (int32_T)nA - 1;
          for (i_2 = 0; i_2 <= b_br; i_2++) {
            Planilla_3DOF_Crane_B.e_b_data[i_2 + e_b_sizes[0] * i_1] =
              Planilla_3DOF_Crane_B.RLinv[41 * i_2 + i_1];
          }
        }

        if (((int32_T)nA == 1) || (e_b_sizes[0] == 1)) {
          i_0 = (int32_T)nA;
          loop_ub = (int32_T)nA - 1;
          for (i_1 = 0; i_1 <= loop_ub; i_1++) {
            memcpy((void *)(&Planilla_3DOF_Crane_B.TL_data[41 * i_1]), (void *)(
                    &Planilla_3DOF_Crane_B.TL[41 * i_1]), 41U * sizeof(real_T));
          }

          b_a_sizes[0] = 41;
          b_a_sizes[1] = e_b_sizes[1];
          for (i_1 = 0; i_1 < 41; i_1++) {
            loop_ub = e_b_sizes[1] - 1;
            for (i_2 = 0; i_2 <= loop_ub; i_2++) {
              Planilla_3DOF_Crane_B.b_a_data[i_1 + 41 * i_2] = 0.0;
              b_br = i_0 - 1;
              for (ar = 0; ar <= b_br; ar++) {
                Planilla_3DOF_Crane_B.b_a_data[i_1 + 41 * i_2] =
                  Planilla_3DOF_Crane_B.TL_data[41 * ar + i_1] *
                  Planilla_3DOF_Crane_B.e_b_data[e_b_sizes[0] * i_2 + ar] +
                  Planilla_3DOF_Crane_B.b_a_data[41 * i_2 + i_1];
              }
            }
          }
        } else {
          b_a_sizes[0] = 41;
          b_a_sizes[1] = (int8_T)e_b_sizes[1];
          b_a_sizes[0] = 41;
          loop_ub = b_a_sizes[1] - 1;
          for (i_1 = 0; i_1 <= loop_ub; i_1++) {
            for (i_2 = 0; i_2 < 41; i_2++) {
              Planilla_3DOF_Crane_B.b_a_data[i_2 + 41 * i_1] = 0.0;
            }
          }

          TL_sizes[0] = 41;
          TL_sizes[1] = (int32_T)nA;
          loop_ub = (int32_T)nA - 1;
          for (i_1 = 0; i_1 <= loop_ub; i_1++) {
            memcpy((void *)(&Planilla_3DOF_Crane_B.TL_data[41 * i_1]), (void *)(
                    &Planilla_3DOF_Crane_B.TL[41 * i_1]), 41U * sizeof(real_T));
          }

          Planilla_3DOF_Crane_eml_xgemm_j(e_b_sizes[1], (int32_T)nA,
            &Planilla_3DOF_Crane_B.TL_data[0], TL_sizes,
            &Planilla_3DOF_Crane_B.e_b_data[0], e_b_sizes, (int32_T)nA,
            &Planilla_3DOF_Crane_B.b_a_data[0], b_a_sizes);
        }

        loop_ub = b_a_sizes[1] - 1;
        for (i_1 = 0; i_1 <= loop_ub; i_1++) {
          memcpy((void *)(&Planilla_3DOF_Crane_B.D[41 * i_1]), (void *)
                 (&Planilla_3DOF_Crane_B.b_a_data[b_a_sizes[0] * i_1]), 41U *
                 sizeof(real_T));
        }

        i_1 = (int32_T)(41.0 + nA) - 42;
        for (i_2 = 0; i_2 <= i_1; i_2++) {
          iidx_data[i_2] = 42 + i_2;
        }

        loop_ub = (int32_T)nA - 1;
        for (i_1 = 0; i_1 <= loop_ub; i_1++) {
          tmp_data[i_1] = 1 + i_1;
        }

        nA_idx = (int32_T)nA;
        loop_ub = nA_idx - 1;
        for (i_1 = 0; i_1 <= loop_ub; i_1++) {
          for (i_2 = 0; i_2 < 1; i_2++) {
            Rhs[iidx_data[i_1] - 1] = b[(int32_T)iC[tmp_data[i_1] - 1] - 1];
          }
        }

        if (nA + 1.0 > 41.0) {
          b_ar = 0;
          pEnd = -1;
          br = 0;
          ia = -1;
        } else {
          b_ar = (int32_T)(nA + 1.0) - 1;
          pEnd = 40;
          br = (int32_T)(nA + 1.0) - 1;
          ia = 40;
        }

        e_b_sizes[0] = (int32_T)nA;
        e_b_sizes[1] = (int32_T)nA;
        loop_ub = (int32_T)nA - 1;
        for (i_1 = 0; i_1 <= loop_ub; i_1++) {
          b_br = (int32_T)nA - 1;
          for (i_2 = 0; i_2 <= b_br; i_2++) {
            Planilla_3DOF_Crane_B.e_b_data[i_2 + e_b_sizes[0] * i_1] =
              Planilla_3DOF_Crane_B.RLinv[41 * i_2 + i_1];
          }
        }

        if (((int32_T)nA == 1) || (e_b_sizes[0] == 1)) {
          qEnd = (int32_T)nA;
          i = (int32_T)nA;
          loop_ub = (int32_T)nA - 1;
          for (i_1 = 0; i_1 <= loop_ub; i_1++) {
            b_br = (int32_T)nA - 1;
            for (i_2 = 0; i_2 <= b_br; i_2++) {
              Planilla_3DOF_Crane_B.TL_data[i_2 + qEnd * i_1] =
                Planilla_3DOF_Crane_B.RLinv[41 * i_1 + i_2];
            }
          }

          h_sizes[0] = qEnd;
          h_sizes[1] = e_b_sizes[1];
          loop_ub = qEnd - 1;
          for (i_1 = 0; i_1 <= loop_ub; i_1++) {
            b_br = e_b_sizes[1] - 1;
            for (i_2 = 0; i_2 <= b_br; i_2++) {
              Planilla_3DOF_Crane_B.h_data[i_1 + h_sizes[0] * i_2] = 0.0;
              i_0 = i - 1;
              for (ar = 0; ar <= i_0; ar++) {
                Planilla_3DOF_Crane_B.h_data[i_1 + h_sizes[0] * i_2] =
                  Planilla_3DOF_Crane_B.TL_data[qEnd * ar + i_1] *
                  Planilla_3DOF_Crane_B.e_b_data[e_b_sizes[0] * i_2 + ar] +
                  Planilla_3DOF_Crane_B.h_data[h_sizes[0] * i_2 + i_1];
              }
            }
          }
        } else {
          h_sizes[0] = (int8_T)(int32_T)nA;
          h_sizes[1] = (int8_T)e_b_sizes[1];
          loop_ub = h_sizes[1] - 1;
          for (i_1 = 0; i_1 <= loop_ub; i_1++) {
            b_br = h_sizes[0] - 1;
            for (i_2 = 0; i_2 <= b_br; i_2++) {
              Planilla_3DOF_Crane_B.h_data[i_2 + h_sizes[0] * i_1] = 0.0;
            }
          }

          RLinv_sizes_0[0] = (int32_T)nA;
          RLinv_sizes_0[1] = (int32_T)nA;
          loop_ub = (int32_T)nA - 1;
          for (i_1 = 0; i_1 <= loop_ub; i_1++) {
            b_br = (int32_T)nA - 1;
            for (i_2 = 0; i_2 <= b_br; i_2++) {
              Planilla_3DOF_Crane_B.TL_data[i_2 + RLinv_sizes_0[0] * i_1] =
                Planilla_3DOF_Crane_B.RLinv[41 * i_1 + i_2];
            }
          }

          Planilla_3DOF_Cran_eml_xgemm_je((int32_T)nA, e_b_sizes[1], (int32_T)nA,
            &Planilla_3DOF_Crane_B.TL_data[0], RLinv_sizes_0, (int32_T)nA,
            &Planilla_3DOF_Crane_B.e_b_data[0], e_b_sizes, (int32_T)nA,
            &Planilla_3DOF_Crane_B.h_data[0], h_sizes, (int32_T)nA);
        }

        b_a_sizes[0] = 41;
        b_a_sizes[1] = (pEnd - b_ar) + 1;
        loop_ub = pEnd - b_ar;
        for (i_1 = 0; i_1 <= loop_ub; i_1++) {
          for (i_2 = 0; i_2 < 41; i_2++) {
            Planilla_3DOF_Crane_B.b_a_data[i_2 + 41 * i_1] =
              -Planilla_3DOF_Crane_B.TL[(b_ar + i_1) * 41 + i_2];
          }
        }

        c_b_sizes[0] = (ia - br) + 1;
        c_b_sizes[1] = 41;
        for (i_1 = 0; i_1 < 41; i_1++) {
          loop_ub = ia - br;
          for (i_2 = 0; i_2 <= loop_ub; i_2++) {
            Planilla_3DOF_Crane_B.c_b_data[i_2 + c_b_sizes[0] * i_1] =
              Planilla_3DOF_Crane_B.TL[(br + i_2) * 41 + i_1];
          }
        }

        if ((b_a_sizes[1] == 1) || (c_b_sizes[0] == 1)) {
          for (i_1 = 0; i_1 < 41; i_1++) {
            for (i_2 = 0; i_2 < 41; i_2++) {
              Planilla_3DOF_Crane_B.y[i_1 + 41 * i_2] = 0.0;
              loop_ub = b_a_sizes[1] - 1;
              for (ar = 0; ar <= loop_ub; ar++) {
                Planilla_3DOF_Crane_B.y[i_1 + 41 * i_2] =
                  Planilla_3DOF_Crane_B.b_a_data[41 * ar + i_1] *
                  Planilla_3DOF_Crane_B.c_b_data[c_b_sizes[0] * i_2 + ar] +
                  Planilla_3DOF_Crane_B.y[41 * i_2 + i_1];
              }
            }
          }
        } else {
          for (i_1 = 0; i_1 < 1681; i_1++) {
            Planilla_3DOF_Crane_B.y[i_1] = 0.0;
          }

          for (b_ar = 0; b_ar <= 1641; b_ar += 41) {
            for (pEnd = b_ar; pEnd + 1 <= b_ar + 41; pEnd++) {
              Planilla_3DOF_Crane_B.y[pEnd] = 0.0;
            }
          }

          b_ar = 0;
          for (br = 0; br <= 1641; br += 41) {
            ia = -1;
            b_br = b_ar + b_a_sizes[1];
            for (pEnd = b_ar; pEnd + 1 <= b_br; pEnd++) {
              if (Planilla_3DOF_Crane_B.c_b_data[pEnd] != 0.0) {
                ar = ia;
                for (i = br; i + 1 <= br + 41; i++) {
                  ar++;
                  Planilla_3DOF_Crane_B.y[i] =
                    Planilla_3DOF_Crane_B.c_b_data[pEnd] *
                    Planilla_3DOF_Crane_B.b_a_data[ar] +
                    Planilla_3DOF_Crane_B.y[i];
                }
              }

              ia += 41;
            }

            b_ar += b_a_sizes[1];
          }
        }

        i_1 = (int32_T)(41.0 + nA);
        loop_ub = i_1 - 1;
        for (i_1 = 0; i_1 <= loop_ub; i_1++) {
          tmp_data_0[i_1] = 1 + i_1;
        }

        i_0 = (int32_T)(41.0 + nA);
        loop_ub = i_0 - 1;
        for (i_1 = 0; i_1 <= loop_ub; i_1++) {
          for (i_2 = 0; i_2 < 1; i_2++) {
            j_data[i_1] = tmp_data_0[i_1];
          }
        }

        i = (int32_T)nA + 41;
        qEnd = (int32_T)nA + 41;
        for (i_1 = 0; i_1 < 41; i_1++) {
          memcpy((void *)(&Planilla_3DOF_Crane_B.c_a_data[i * i_1]), (void *)
                 (&Planilla_3DOF_Crane_B.y[41 * i_1]), 41U * sizeof(real_T));
        }

        loop_ub = (int32_T)nA - 1;
        for (i_1 = 0; i_1 <= loop_ub; i_1++) {
          memcpy((void *)(&Planilla_3DOF_Crane_B.c_a_data[i * (i_1 + 41)]),
                 (void *)(&Planilla_3DOF_Crane_B.D[41 * i_1]), 41U * sizeof
                 (real_T));
        }

        for (i_1 = 0; i_1 < 41; i_1++) {
          loop_ub = (int32_T)nA - 1;
          for (i_2 = 0; i_2 <= loop_ub; i_2++) {
            Planilla_3DOF_Crane_B.c_a_data[(i_2 + i * i_1) + 41] =
              Planilla_3DOF_Crane_B.D[41 * i_2 + i_1];
          }
        }

        loop_ub = h_sizes[1] - 1;
        for (i_1 = 0; i_1 <= loop_ub; i_1++) {
          b_br = h_sizes[0] - 1;
          for (i_2 = 0; i_2 <= b_br; i_2++) {
            Planilla_3DOF_Crane_B.c_a_data[(i_2 + i * (i_1 + 41)) + 41] =
              Planilla_3DOF_Crane_B.h_data[h_sizes[0] * i_1 + i_2];
          }
        }

        u_idx = (int8_T)i;
        loop_ub = u_idx - 1;
        for (i_1 = 0; i_1 <= loop_ub; i_1++) {
          C_data[i_1] = 0.0;
        }

        b_ar = 0;
        while (b_ar <= 0) {
          for (b_ar = 1; b_ar <= i; b_ar++) {
            C_data[b_ar - 1] = 0.0;
          }

          b_ar = i;
        }

        ar = 0;
        b_ar = 0;
        while (b_ar <= 0) {
          b_ar = -1;
          pEnd = ar + qEnd;
          for (br = ar; br + 1 <= pEnd; br++) {
            if (Rhs[br] != 0.0) {
              ia = b_ar;
              for (b_br = 0; b_br + 1 <= i; b_br++) {
                ia++;
                C_data[b_br] += Rhs[br] * Planilla_3DOF_Crane_B.c_a_data[ia];
              }
            }

            b_ar += i;
          }

          ar += qEnd;
          b_ar = i;
        }

        loop_ub = i_0 - 1;
        for (i_1 = 0; i_1 <= loop_ub; i_1++) {
          Opt[j_data[i_1] - 1] = C_data[i_1];
        }

        Xnorm_0 = -1.0E-12;
        kDrop = 0.0;
        for (b_ar = 0; b_ar <= (int32_T)nA - 1; b_ar++) {
          lambda[(int32_T)iC[(int32_T)(1.0 + (real_T)b_ar) - 1] - 1] = Opt
            [(int32_T)((1.0 + (real_T)b_ar) + 41.0) - 1];
          if (Opt[(int32_T)((1.0 + (real_T)b_ar) + 41.0) - 1] < Xnorm_0) {
            kDrop = 1.0 + (real_T)b_ar;
            Xnorm_0 = Opt[(int32_T)((1.0 + (real_T)b_ar) + 41.0) - 1];
          }
        }

        if (kDrop <= 0.0) {
          DualFeasible = TRUE;
          memcpy((void *)&x[0], (void *)&Opt[0], 41U * sizeof(real_T));
        } else {
          (*status)++;
          if (*status > MaxWSiter) {
            for (b_ar = 0; b_ar <= (int32_T)nA - 1; b_ar++) {
              iA[(int32_T)iC[(int32_T)(1.0 + (real_T)b_ar) - 1] - 1] = FALSE;
              lambda[(int32_T)iC[(int32_T)(1.0 + (real_T)b_ar) - 1] - 1] = 0.0;
              iC[(int32_T)(1.0 + (real_T)b_ar) - 1] = 0.0;
            }

            nA = 0.0;
          } else {
            lambda[(int32_T)iC[(int32_T)kDrop - 1] - 1] = 0.0;
            Planilla_3DOF_Cr_DropConstraint(kDrop, iA, &nA, iC);
          }
        }
      }
    }

    if (nA <= 0.0) {
      for (i_1 = 0; i_1 < 41; i_1++) {
        x[i_1] = 0.0;
        for (i_2 = 0; i_2 < 41; i_2++) {
          x[i_1] += A[41 * i_2 + i_1] * f[i_2];
        }
      }
    }
  } else {
    for (i_1 = 0; i_1 < 41; i_1++) {
      x[i_1] = 0.0;
      for (i_2 = 0; i_2 < 41; i_2++) {
        x[i_1] += A[41 * i_2 + i_1] * f[i_2];
      }
    }
  }

  Xnorm = Planilla_3DOF_Crane_norm(x);
  do {
    exitg_0 = 0;
    if (*status <= 1764.0) {
      MaxWSiter = -1.0E-6;
      kNext = -1;
      for (br = 0; br < 400; br++) {
        if (!cTolComputed) {
          for (i_1 = 0; i_1 < 41; i_1++) {
            d_b[i_1] = b_A[400 * i_1 + br] * x[i_1];
          }

          Planilla_3DOF_Crane_abs_j(d_b, vwork_data);
          b_ar = 1;
          Xnorm_0 = vwork_data[0];
          if (rtIsNaN(vwork_data[0])) {
            pEnd = 2;
            DualFeasible = FALSE;
            while (((uint32_T)DualFeasible == 0U) && (pEnd < 42)) {
              b_ar = pEnd;
              if (!rtIsNaN(vwork_data[pEnd - 1])) {
                Xnorm_0 = vwork_data[pEnd - 1];
                DualFeasible = TRUE;
              } else {
                pEnd++;
              }
            }
          }

          if (b_ar < 41) {
            while (b_ar + 1 < 42) {
              if (vwork_data[b_ar] > Xnorm_0) {
                Xnorm_0 = vwork_data[b_ar];
              }

              b_ar++;
            }
          }

          cTol[br] = (cTol[br] >= Xnorm_0) || rtIsNaN(Xnorm_0) ? cTol[br] :
            Xnorm_0;
        }

        if (!iA[br]) {
          Xnorm_0 = 0.0;
          for (b_ar = 0; b_ar < 41; b_ar++) {
            Xnorm_0 += b_A[400 * b_ar + br] * x[b_ar];
          }

          Xnorm_0 = Planilla_3DOF_Crane_mrdivide(Xnorm_0 - b[br], cTol[br]);
          if (Xnorm_0 < MaxWSiter) {
            MaxWSiter = Xnorm_0;
            kNext = br;
          }
        }
      }

      cTolComputed = TRUE;
      if (kNext + 1 <= 0) {
        exitg_0 = 1;
      } else {
        do {
          exitg = 0;
          if ((kNext + 1 > 0) && (*status <= 1764.0)) {
            DualFeasible = FALSE;
            guard = FALSE;
            if (nA == 0.0) {
              for (i_1 = 0; i_1 < 41; i_1++) {
                z[i_1] = 0.0;
                for (i_2 = 0; i_2 < 41; i_2++) {
                  z[i_1] += c_A[41 * i_2 + i_1] * b_A[400 * i_2 + kNext];
                }
              }

              guard = TRUE;
            } else {
              Xnorm_0 = Planilla_3DOF_Crane_KWIKfactor(iC, nA,
                &Planilla_3DOF_Crane_B.TL[0], &Planilla_3DOF_Crane_B.Q[0],
                &Planilla_3DOF_Crane_B.RLinv[0]);
              if (Xnorm_0 <= 0.0) {
                *status = -2.0;
                exitg = 1;
              } else {
                if (nA + 1.0 > 41.0) {
                  qEnd = 1;
                  kEnd = 1;
                  b_ar = 0;
                  pEnd = -1;
                } else {
                  qEnd = (int32_T)(nA + 1.0);
                  kEnd = 42;
                  b_ar = (int32_T)(nA + 1.0) - 1;
                  pEnd = 40;
                }

                c_b_sizes[0] = (pEnd - b_ar) + 1;
                c_b_sizes[1] = 41;
                for (i_1 = 0; i_1 < 41; i_1++) {
                  loop_ub = pEnd - b_ar;
                  for (i_2 = 0; i_2 <= loop_ub; i_2++) {
                    Planilla_3DOF_Crane_B.c_b_data[i_2 + c_b_sizes[0] * i_1] =
                      Planilla_3DOF_Crane_B.TL[(b_ar + i_2) * 41 + i_1];
                  }
                }

                if ((kEnd - qEnd == 1) || (c_b_sizes[0] == 1)) {
                  i_0 = kEnd - qEnd;
                  loop_ub = (kEnd - qEnd) - 1;
                  for (i_1 = 0; i_1 <= loop_ub; i_1++) {
                    memcpy((void *)(&Planilla_3DOF_Crane_B.TL_data[41 * i_1]),
                           (void *)(&Planilla_3DOF_Crane_B.TL[((qEnd + i_1) - 1)
                                    * 41]), 41U * sizeof(real_T));
                  }

                  for (i_1 = 0; i_1 < 41; i_1++) {
                    for (i_2 = 0; i_2 < 41; i_2++) {
                      Planilla_3DOF_Crane_B.y[i_1 + 41 * i_2] = 0.0;
                      loop_ub = i_0 - 1;
                      for (ar = 0; ar <= loop_ub; ar++) {
                        Planilla_3DOF_Crane_B.y[i_1 + 41 * i_2] =
                          Planilla_3DOF_Crane_B.TL_data[41 * ar + i_1] *
                          Planilla_3DOF_Crane_B.c_b_data[c_b_sizes[0] * i_2 + ar]
                          + Planilla_3DOF_Crane_B.y[41 * i_2 + i_1];
                      }
                    }
                  }
                } else {
                  for (i_1 = 0; i_1 < 1681; i_1++) {
                    Planilla_3DOF_Crane_B.y[i_1] = 0.0;
                  }

                  for (b_ar = 0; b_ar <= 1641; b_ar += 41) {
                    for (br = b_ar; br + 1 <= b_ar + 41; br++) {
                      Planilla_3DOF_Crane_B.y[br] = 0.0;
                    }
                  }

                  br = 0;
                  for (pEnd = 0; pEnd <= 1641; pEnd += 41) {
                    ar = -1;
                    i = (kEnd - qEnd) + br;
                    for (b_ar = br; b_ar + 1 <= i; b_ar++) {
                      if (Planilla_3DOF_Crane_B.c_b_data[b_ar] != 0.0) {
                        ia = ar;
                        for (b_br = pEnd; b_br + 1 <= pEnd + 41; b_br++) {
                          ia++;
                          i_0 = div_s32_floor(ia, 41) - 1;
                          Planilla_3DOF_Crane_B.y[b_br] =
                            Planilla_3DOF_Crane_B.TL[(qEnd + i_0) * 41 + ia % 41]
                            * Planilla_3DOF_Crane_B.c_b_data[b_ar] +
                            Planilla_3DOF_Crane_B.y[b_br];
                        }
                      }

                      ar += 41;
                    }

                    br += kEnd - qEnd;
                  }
                }

                for (i_1 = 0; i_1 < 41; i_1++) {
                  z[i_1] = 0.0;
                  for (i_2 = 0; i_2 < 41; i_2++) {
                    z[i_1] += Planilla_3DOF_Crane_B.y[41 * i_2 + i_1] * b_A[400 *
                      i_2 + kNext];
                  }
                }

                loop_ub = (int32_T)nA - 1;
                for (i_1 = 0; i_1 <= loop_ub; i_1++) {
                  iidx_data[i_1] = 1 + i_1;
                }

                nA_idx = (int32_T)nA;
                loop_ub = nA_idx - 1;
                for (i_1 = 0; i_1 <= loop_ub; i_1++) {
                  for (i_2 = 0; i_2 < 1; i_2++) {
                    o_data[i_1] = iidx_data[i_1];
                  }
                }

                c_b_sizes[0] = (int32_T)nA;
                c_b_sizes[1] = 41;
                for (i_1 = 0; i_1 < 41; i_1++) {
                  loop_ub = (int32_T)nA - 1;
                  for (i_2 = 0; i_2 <= loop_ub; i_2++) {
                    Planilla_3DOF_Crane_B.c_b_data[i_2 + c_b_sizes[0] * i_1] =
                      Planilla_3DOF_Crane_B.TL[41 * i_2 + i_1];
                  }
                }

                if (((int32_T)nA == 1) || (c_b_sizes[0] == 1)) {
                  qEnd = (int32_T)nA;
                  i = (int32_T)nA;
                  loop_ub = (int32_T)nA - 1;
                  for (i_1 = 0; i_1 <= loop_ub; i_1++) {
                    b_br = (int32_T)nA - 1;
                    for (i_2 = 0; i_2 <= b_br; i_2++) {
                      Planilla_3DOF_Crane_B.TL_data[i_2 + qEnd * i_1] =
                        Planilla_3DOF_Crane_B.RLinv[41 * i_1 + i_2];
                    }
                  }

                  b_y_sizes[0] = qEnd;
                  b_y_sizes[1] = 41;
                  loop_ub = qEnd - 1;
                  for (i_1 = 0; i_1 <= loop_ub; i_1++) {
                    for (i_2 = 0; i_2 < 41; i_2++) {
                      Planilla_3DOF_Crane_B.b_y_data[i_1 + b_y_sizes[0] * i_2] =
                        0.0;
                      b_br = i - 1;
                      for (ar = 0; ar <= b_br; ar++) {
                        Planilla_3DOF_Crane_B.b_y_data[i_1 + b_y_sizes[0] * i_2]
                          = Planilla_3DOF_Crane_B.TL_data[qEnd * ar + i_1] *
                          Planilla_3DOF_Crane_B.c_b_data[c_b_sizes[0] * i_2 + ar]
                          + Planilla_3DOF_Crane_B.b_y_data[b_y_sizes[0] * i_2 +
                          i_1];
                      }
                    }
                  }
                } else {
                  b_y_sizes[0] = (int8_T)(int32_T)nA;
                  b_y_sizes[1] = 41;
                  b_y_sizes[1] = 41;
                  for (i_1 = 0; i_1 < 41; i_1++) {
                    loop_ub = b_y_sizes[0] - 1;
                    for (i_2 = 0; i_2 <= loop_ub; i_2++) {
                      Planilla_3DOF_Crane_B.b_y_data[i_2 + b_y_sizes[0] * i_1] =
                        0.0;
                    }
                  }

                  RLinv_sizes[0] = (int32_T)nA;
                  RLinv_sizes[1] = (int32_T)nA;
                  loop_ub = (int32_T)nA - 1;
                  for (i_1 = 0; i_1 <= loop_ub; i_1++) {
                    b_br = (int32_T)nA - 1;
                    for (i_2 = 0; i_2 <= b_br; i_2++) {
                      Planilla_3DOF_Crane_B.TL_data[i_2 + RLinv_sizes[0] * i_1] =
                        Planilla_3DOF_Crane_B.RLinv[41 * i_1 + i_2];
                    }
                  }

                  Planilla_3DOF_Cra_eml_xgemm_jek((int32_T)nA, (int32_T)nA,
                    &Planilla_3DOF_Crane_B.TL_data[0], RLinv_sizes, (int32_T)nA,
                    &Planilla_3DOF_Crane_B.c_b_data[0], c_b_sizes, (int32_T)nA,
                    &Planilla_3DOF_Crane_B.b_y_data[0], b_y_sizes, (int32_T)nA);
                }

                for (i_1 = 0; i_1 < 41; i_1++) {
                  d_b[i_1] = b_A[400 * i_1 + kNext];
                }

                u_idx = (int8_T)b_y_sizes[0];
                loop_ub = u_idx - 1;
                for (i_1 = 0; i_1 <= loop_ub; i_1++) {
                  vwork_data[i_1] = 0.0;
                }

                b_ar = 0;
                while (b_ar <= 0) {
                  for (b_ar = 1; b_ar <= b_y_sizes[0]; b_ar++) {
                    vwork_data[b_ar - 1] = 0.0;
                  }

                  b_ar = b_y_sizes[0];
                }

                b_br = 41;
                b_ar = 0;
                while (b_ar <= 0) {
                  b_ar = -1;
                  for (br = b_br - 41; br + 1 <= b_br; br++) {
                    if (d_b[br] != 0.0) {
                      ia = b_ar;
                      for (pEnd = 0; pEnd + 1 <= b_y_sizes[0]; pEnd++) {
                        ia++;
                        vwork_data[pEnd] += d_b[br] *
                          Planilla_3DOF_Crane_B.b_y_data[ia];
                      }
                    }

                    b_ar += b_y_sizes[0];
                  }

                  b_br += 41;
                  b_ar = b_y_sizes[0];
                }

                loop_ub = nA_idx - 1;
                for (i_1 = 0; i_1 <= loop_ub; i_1++) {
                  r[o_data[i_1] - 1] = vwork_data[i_1];
                }

                guard = TRUE;
              }
            }

            if (guard) {
              kDrop = 0.0;
              for (i_1 = 0; i_1 < 41; i_1++) {
                r_0[i_1] = (r[i_1] < 0.0);
              }

              if ((nA == 0.0) || Planilla_3DOF_Crane_all(r_0)) {
                t = (rtInf);
              } else {
                for (b_ar = 0; b_ar <= (int32_T)nA - 1; b_ar++) {
                  if (r[(int32_T)(1.0 + (real_T)b_ar) - 1] > 0.0) {
                    Xnorm_0 = Planilla_3DOF_Crane_mrdivide(lambda[(int32_T)iC
                      [(int32_T)(1.0 + (real_T)b_ar) - 1] - 1], r[(int32_T)(1.0
                      + (real_T)b_ar) - 1]);
                    if ((kDrop == 0.0) || (Xnorm_0 < rMin)) {
                      rMin = Xnorm_0;
                      kDrop = 1.0 + (real_T)b_ar;
                    }
                  }
                }

                if (kDrop > 0.0) {
                  t = rMin;
                } else {
                  t = (rtInf);
                }
              }

              Xnorm_0 = 0.0;
              for (i_1 = 0; i_1 < 41; i_1++) {
                Xnorm_0 += b_A[400 * i_1 + kNext] * z[i_1];
              }

              if (Xnorm_0 <= 0.0) {
                Xnorm_0 = (rtInf);
              } else {
                MaxWSiter = 0.0;
                for (b_ar = 0; b_ar < 41; b_ar++) {
                  MaxWSiter += b_A[400 * b_ar + kNext] * x[b_ar];
                }

                Xnorm_0 = Planilla_3DOF_Crane_mrdivide(b[kNext] - MaxWSiter,
                  Xnorm_0);
              }

              if (rtIsInf(t) && rtIsInf(Xnorm_0)) {
                *status = -1.0;
                exitg = 1;
              } else {
                MaxWSiter = (t <= Xnorm_0) || rtIsNaN(Xnorm_0) ? t : Xnorm_0;
                for (b_ar = 0; b_ar <= (int32_T)nA - 1; b_ar++) {
                  lambda[(int32_T)iC[(int32_T)(1.0 + (real_T)b_ar) - 1] - 1] -=
                    r[(int32_T)(1.0 + (real_T)b_ar) - 1] * MaxWSiter;
                  if (lambda[(int32_T)iC[(int32_T)(1.0 + (real_T)b_ar) - 1] - 1]
                      < 0.0) {
                    lambda[(int32_T)iC[(int32_T)(1.0 + (real_T)b_ar) - 1] - 1] =
                      0.0;
                  }
                }

                lambda[kNext] += MaxWSiter;
                if (MaxWSiter == t) {
                  Planilla_3DOF_Cr_DropConstraint(kDrop, iA, &nA, iC);
                }

                if (!rtIsInf(Xnorm_0)) {
                  for (i_1 = 0; i_1 < 41; i_1++) {
                    x[i_1] += MaxWSiter * z[i_1];
                  }

                  if (MaxWSiter == Xnorm_0) {
                    if (nA == 41.0) {
                      *status = -1.0;
                      exitg = 1;
                    } else {
                      nA++;
                      iC[(int32_T)nA - 1] = (real_T)kNext + 1.0;
                      u_idx = (int8_T)(int32_T)nA;
                      nA_idx = (int32_T)nA;
                      ia = 0;
                      for (b_ar = 0; b_ar <= (int32_T)nA - 1; b_ar++) {
                        loop_ub = (int32_T)nA - 1;
                        for (i_1 = 0; i_1 <= loop_ub; i_1++) {
                          iidx_data[i_1] = 1 + i_1;
                        }

                        vwork_data[b_ar] = iC[iidx_data[ia] - 1];
                        ia++;
                      }

                      i_0 = u_idx + 1;
                      for (b_ar = 1; b_ar <= u_idx; b_ar++) {
                        iidx_data[b_ar - 1] = b_ar;
                      }

                      for (b_ar = 1; b_ar <= u_idx - 1; b_ar += 2) {
                        if ((vwork_data[b_ar - 1] <= vwork_data[b_ar]) ||
                            rtIsNaN(vwork_data[b_ar])) {
                          DualFeasible = TRUE;
                        } else {
                          DualFeasible = FALSE;
                        }

                        if (!DualFeasible) {
                          iidx_data[b_ar - 1] = b_ar + 1;
                          iidx_data[b_ar] = b_ar;
                        }
                      }

                      loop_ub = u_idx - 1;
                      for (i_1 = 0; i_1 <= loop_ub; i_1++) {
                        idx0_data[i_1] = 1;
                      }

                      ar = 2;
                      while (ar < u_idx) {
                        i = ar << 1;
                        ia = 1;
                        for (pEnd = 1 + ar; pEnd < i_0; pEnd = qEnd + ar) {
                          b_ar = ia;
                          b_br = pEnd - 1;
                          qEnd = ia + i;
                          if (qEnd > i_0) {
                            qEnd = i_0;
                          }

                          br = 0;
                          kEnd = qEnd - ia;
                          while (br + 1 <= kEnd) {
                            if ((vwork_data[iidx_data[b_ar - 1] - 1] <=
                                 vwork_data[iidx_data[b_br] - 1]) || rtIsNaN
                                (vwork_data[iidx_data[b_br] - 1])) {
                              DualFeasible = TRUE;
                            } else {
                              DualFeasible = FALSE;
                            }

                            if (DualFeasible) {
                              idx0_data[br] = iidx_data[b_ar - 1];
                              b_ar++;
                              if (b_ar == pEnd) {
                                while (b_br + 1 < qEnd) {
                                  br++;
                                  idx0_data[br] = iidx_data[b_br];
                                  b_br++;
                                }
                              }
                            } else {
                              idx0_data[br] = iidx_data[b_br];
                              b_br++;
                              if (b_br + 1 == qEnd) {
                                while (b_ar < pEnd) {
                                  br++;
                                  idx0_data[br] = iidx_data[b_ar - 1];
                                  b_ar++;
                                }
                              }
                            }

                            br++;
                          }

                          for (br = -1; br + 2 <= kEnd; br++) {
                            iidx_data[ia + br] = idx0_data[br + 1];
                          }

                          ia = qEnd;
                        }

                        ar = i;
                      }

                      ia = 0;
                      for (b_ar = 0; b_ar <= (int32_T)nA - 1; b_ar++) {
                        d_b[ia] = vwork_data[iidx_data[b_ar] - 1];
                        ia++;
                      }

                      loop_ub = (int32_T)nA - 1;
                      for (i_1 = 0; i_1 <= loop_ub; i_1++) {
                        iidx_data[i_1] = 1 + i_1;
                      }

                      loop_ub = nA_idx - 1;
                      for (i_1 = 0; i_1 <= loop_ub; i_1++) {
                        iC[iidx_data[i_1] - 1] = d_b[i_1];
                      }

                      iA[kNext] = TRUE;
                      kNext = -1;
                      DualFeasible = TRUE;
                    }
                  } else {
                    DualFeasible = TRUE;
                  }
                } else {
                  DualFeasible = TRUE;
                }
              }
            }

            if (DualFeasible) {
              (*status)++;
            }
          } else {
            Xnorm_0 = Planilla_3DOF_Crane_norm(x);
            if (fabs(Xnorm_0 - Xnorm) > 1000.0) {
              Xnorm = Xnorm_0;
              Planilla_3DOF_Crane_abs(b, varargin);
              for (b_ar = 0; b_ar < 400; b_ar++) {
                cTol[b_ar] = varargin[b_ar] >= 1.0 ? varargin[b_ar] : 1.0;
              }

              cTolComputed = FALSE;
            }

            exitg = 2;
          }
        } while ((uint32_T)exitg == 0U);

        if ((uint32_T)exitg == 1U) {
          exitg_0 = 1;
        }
      }
    } else {
      *status = 0.0;
      exitg_0 = 1;
    }
  } while ((uint32_T)exitg_0 == 0U);
}

/* Function for MATLAB Function: '<S22>/optimizer' */
static void Planilla_3DOF_Crane_mpc_solveQP(const real_T xQP[4], const real_T
  rseq[120], real_T old_u, const real_T vseq[61], const real_T Bc[400],
  boolean_T iA[441], real_T zopt[41], real_T f[41], real_T *status)
{
  real_T unusedU[400];
  real_T b_status;
  int32_T i;
  real_T c_y;
  int32_T k;
  static const real_T b_Kx[160] = { 1.3819615183873734E+8, 1.4177048649134804E+7,
    3.1350520851741424E+9, 3.2668616516905409E+8, 1.3145615618058205E+8,
    1.3476683710102743E+7, 2.9985802935197744E+9, 3.1246764630292916E+8,
    1.2493876395058452E+8, 1.2801753824535128E+7, 2.8655279085951409E+9,
    2.986024452764672E+8, 1.1864040405539577E+8, 1.2159214072481928E+7,
    2.7358973137671766E+9, 2.8509493734060258E+8, 1.1255754674197471E+8,
    1.1532871796645604E+7, 2.6096903677355318E+9, 2.7194649439325112E+8,
    1.0668618772316492E+8, 1.0921510008694362E+7, 2.4868926910328207E+9,
    2.5915116529362333E+8, 1.0102247258648518E+8, 1.0340328139238087E+7,
    2.3674924732256703E+9, 2.4670834757432231E+8, 9.556296106110771E+7,
    9.7835509098687079E+6, 2.2514886079949E+9, 2.3462197307484043E+8,
    9.0303896121874869E+7, 9.2378870515831374E+6, 2.1388686078788524E+9,
    2.2288853251343513E+8, 8.5241234239108264E+7, 8.7132518227692433E+6,
    2.0296093685154083E+9, 2.1150259499593297E+8, 8.0371364085338354E+7,
    8.2175977881847294E+6, 1.9236989459449801E+9, 2.004662397211675E+8,
    7.5690786680405244E+7, 7.7373100254842406E+6, 1.8211270171371899E+9,
    1.8977998512247366E+8, 7.1195525571245819E+7, 7.2692127624038076E+6,
    1.72186694664803E+9, 1.7943723150235116E+8, 6.6881684356664069E+7,
    6.826729383456978E+6, 1.6258925523889091E+9, 1.6943523373216042E+8,
    6.2745811851220831E+7, 6.4066766574725695E+6, 1.5331892831512225E+9,
    1.5977615392781997E+8, 5.8784197416549526E+7, 5.996515700598483E+6,
    1.4437329488193581E+9, 1.5045603561580086E+8, 5.4992789745882839E+7,
    5.6033405615619766E+6, 1.3574871135722988E+9, 1.4146812764413571E+8,
    5.1367934258762084E+7, 5.2354375986558124E+6, 1.274425416088057E+9,
    1.3281222631027749E+8, 4.7906157181041479E+7, 4.8818249866797887E+6,
    1.1945251823469596E+9, 1.2448779206517038E+8, 4.460351515580602E+7,
    4.5380043837320469E+6, 1.117747679167799E+9, 1.1648764272940317E+8,
    4.1456073239650786E+7, 4.2153235113457888E+6, 1.0440524583029673E+9,
    1.0880706762053618E+8, 3.8460362681690283E+7, 3.9126759916622876E+6,
    9.7341132290499735E+8, 1.0144632519213438E+8, 3.5612718463817544E+7,
    3.6187703156423117E+6, 9.0578835560072374E+8, 9.4400888016661271E+7,
    3.2909088461887486E+7, 3.3381996964297867E+6, 8.411339997737658E+8,
    8.76628652436711E+7, 3.0345772804546691E+7, 3.078970557869859E+6,
    7.7940741645581555E+8, 8.1229823209877223E+7, 2.7919316785132658E+7,
    2.8326522901030867E+6, 7.2057339426596069E+8, 7.5099964961899519E+7,
    2.5625814654324006E+7, 2.594063897240961E+6, 6.64581237668863E+8,
    6.9265550324820533E+7, 2.3461297247136872E+7, 2.372313017810015E+6,
    6.1137636407681739E+8, 6.3720091328394413E+7, 2.1422271994782753E+7,
    2.1677986162443818E+6, 5.6091674250358534E+8, 5.84618458651365E+7,
    1.9505117698230993E+7, 1.9708588495351926E+6, 5.13154672456148E+8,
    5.3485566231987365E+7, 1.7705788394207772E+7, 1.7840064148172236E+6,
    4.6802768753255522E+8, 4.8782375538971461E+7, 1.6020537909741316E+7,
    1.6144274121186812E+6, 4.254804419534322E+8, 4.4347699041173346E+7,
    1.4445924034677567E+7, 1.4560324832793407E+6, 3.8546498771885848E+8,
    4.0178295722808287E+7, 1.2978082285806941E+7, 1.3035746824653817E+6,
    3.4791877639564312E+8, 3.6265851139543183E+7, 1.1613014373330291E+7,
    1.1638937624864997E+6, 3.1277324620800877E+8, 3.260229148545289E+7,
    1.0347198198281338E+7, 1.0382924937580467E+6, 2.7997236005568093E+8,
    2.9183816539573107E+7, 9.17705358572078E+6, 918996.55895558547,
    2.4945654847172457E+8, 2.6004290487941362E+7, 8.0985475717686275E+6,
    806936.77564199339, 2.2115064183904433E+8, 2.3053972091796059E+7,
    7.1078877212159755E+6, 708032.06209568377, 1.9498479018307272E+8,
    2.0326265305393804E+7, 6.2016374660258563E+6, 618209.92598086176,
    1.7089810126038209E+8, 1.7816318189899009E+7 };

  static const real_T b_Kr[4800] = { -2026.3190476019929, 164.37180078403381,
    -7734.97927650359, 262.50947824244957, -16904.89605462522,
    58.592798101579611, -29995.453029220356, 42.623974888100143,
    -47042.624776989091, 252.97534152045878, -67572.531584209253,
    184.18243375098436, -91740.150164185936, 1.5513811590967854,
    -119956.91188674844, 143.93603400138886, -151902.05250107418,
    269.19275224244365, -187293.393580029, 76.335519044104558,
    -226565.40404064636, 28.791216843800523, -269825.19172195054,
    240.80657303127083, -316595.12827332376, 202.91863453296364,
    -366960.56767052819, 6.1703398431488425, -421364.74461679213,
    123.3386095931174, -479543.70234770107, 272.87358915556973,
    -541160.56835112942, 95.449738882720112, -606615.04320768581,
    17.408246182518869, -676082.93884962087, 226.27915627563561,
    -749093.710736795, 220.15547251458725, -825661.15430849639,
    13.752119651491865, -906250.25519011926, 103.04667008885932,
    -990659.85055265215, 273.46850886156074, -1.0785060139521523E+6,
    115.50195365933341, -1.1701446125605588E+6, 8.7332247794550319,
    -1.265816175048952E+6, 209.72256808899826, -1.3650679124766488E+6,
    235.5020221151552, -1.4678417488706266E+6, 24.124768415318719,
    -1.5746138750637486E+6, 83.5204297252795, -1.6852504844664573E+6,
    270.96401878528303, -1.7993293040232225E+6, 136.03738601198143,
    -1.9171542965517605E+6, 2.9628991482790052, -2.0390252523541185E+6,
    191.51230621973772, -2.164517407187135E+6, 248.61022884690487,
    -2.29350213080865E+6, 37.05303801396397, -2.4264560194140333E+6,
    65.202736944833632, -2.5633156573407943E+6, 265.416919903718,
    -2.7036300019300585E+6, 156.59029936960977, -2.8476442178727412E+6,
    0.22813829759910018, -2.9957105579605037E+6, 172.06137316886529,
    -3.1474419161552317E+6, 259.18280307156209, -3.3026420252354559E+6,
    52.243719721692372, -3.4617770777206048E+6, 48.509030744796654,
    -3.6248554871207578E+6, 256.95301851926189, -3.7914076706666891E+6,
    176.69456069795913, -3.961614434671307E+6, 0.59096566667757389,
    -4.13587250544324E+6, 151.81090943478176, -4.3138412145817578E+6,
    266.97996242749679, -4.4952611091594305E+6, 69.352294081156046,
    -4.6805774049331062E+6, 33.817918663119741, -4.8698701537699075E+6,
    245.7642730158849, -5.0626618827666E+6, 195.89421223710252,
    -5.2590649392328458E+6, 4.0431524550755835, -5.4595115253774673E+6,
    131.22018859789281, -5.6637151366797453E+6, 271.824870011544,
    -5.8713590188098028E+6, 87.990744486667211, -6.0828573134210594E+6,
    21.462590089166596, -6.2983598951887544E+6, 232.1044403087401,
    -6.5173922299975269E+6, 213.75381246724493, -6.7399956581552979E+6,
    10.506404249027637, -0.0, -0.0, -2026.3190476019929, 164.37180078403381,
    -7734.97927650359, 262.50947824244957, -16904.89605462522,
    58.592798101579611, -29995.453029220356, 42.623974888100143,
    -47042.624776989091, 252.97534152045878, -67572.531584209253,
    184.18243375098436, -91740.150164185936, 1.5513811590967854,
    -119956.91188674844, 143.93603400138886, -151902.05250107418,
    269.19275224244365, -187293.393580029, 76.335519044104558,
    -226565.40404064636, 28.791216843800523, -269825.19172195054,
    240.80657303127083, -316595.12827332376, 202.91863453296364,
    -366960.56767052819, 6.1703398431488425, -421364.74461679213,
    123.3386095931174, -479543.70234770107, 272.87358915556973,
    -541160.56835112942, 95.449738882720112, -606615.04320768581,
    17.408246182518869, -676082.93884962087, 226.27915627563561,
    -749093.710736795, 220.15547251458725, -825661.15430849639,
    13.752119651491865, -906250.25519011926, 103.04667008885932,
    -990659.85055265215, 273.46850886156074, -1.0785060139521523E+6,
    115.50195365933341, -1.1701446125605588E+6, 8.7332247794550319,
    -1.265816175048952E+6, 209.72256808899826, -1.3650679124766488E+6,
    235.5020221151552, -1.4678417488706266E+6, 24.124768415318719,
    -1.5746138750637486E+6, 83.5204297252795, -1.6852504844664573E+6,
    270.96401878528303, -1.7993293040232225E+6, 136.03738601198143,
    -1.9171542965517605E+6, 2.9628991482790052, -2.0390252523541185E+6,
    191.51230621973772, -2.164517407187135E+6, 248.61022884690487,
    -2.29350213080865E+6, 37.05303801396397, -2.4264560194140333E+6,
    65.202736944833632, -2.5633156573407943E+6, 265.416919903718,
    -2.7036300019300585E+6, 156.59029936960977, -2.8476442178727412E+6,
    0.22813829759910018, -2.9957105579605037E+6, 172.06137316886529,
    -3.1474419161552317E+6, 259.18280307156209, -3.3026420252354559E+6,
    52.243719721692372, -3.4617770777206048E+6, 48.509030744796654,
    -3.6248554871207578E+6, 256.95301851926189, -3.7914076706666891E+6,
    176.69456069795913, -3.961614434671307E+6, 0.59096566667757389,
    -4.13587250544324E+6, 151.81090943478176, -4.3138412145817578E+6,
    266.97996242749679, -4.4952611091594305E+6, 69.352294081156046,
    -4.6805774049331062E+6, 33.817918663119741, -4.8698701537699075E+6,
    245.7642730158849, -5.0626618827666E+6, 195.89421223710252,
    -5.2590649392328458E+6, 4.0431524550755835, -5.4595115253774673E+6,
    131.22018859789281, -5.6637151366797453E+6, 271.824870011544,
    -5.8713590188098028E+6, 87.990744486667211, -6.0828573134210594E+6,
    21.462590089166596, -6.2983598951887544E+6, 232.1044403087401,
    -6.5173922299975269E+6, 213.75381246724493, -0.0, -0.0, -0.0, -0.0,
    -2026.3190476019929, 164.37180078403381, -7734.97927650359,
    262.50947824244957, -16904.89605462522, 58.592798101579611,
    -29995.453029220356, 42.623974888100143, -47042.624776989091,
    252.97534152045878, -67572.531584209253, 184.18243375098436,
    -91740.150164185936, 1.5513811590967854, -119956.91188674844,
    143.93603400138886, -151902.05250107418, 269.19275224244365,
    -187293.393580029, 76.335519044104558, -226565.40404064636,
    28.791216843800523, -269825.19172195054, 240.80657303127083,
    -316595.12827332376, 202.91863453296364, -366960.56767052819,
    6.1703398431488425, -421364.74461679213, 123.3386095931174,
    -479543.70234770107, 272.87358915556973, -541160.56835112942,
    95.449738882720112, -606615.04320768581, 17.408246182518869,
    -676082.93884962087, 226.27915627563561, -749093.710736795,
    220.15547251458725, -825661.15430849639, 13.752119651491865,
    -906250.25519011926, 103.04667008885932, -990659.85055265215,
    273.46850886156074, -1.0785060139521523E+6, 115.50195365933341,
    -1.1701446125605588E+6, 8.7332247794550319, -1.265816175048952E+6,
    209.72256808899826, -1.3650679124766488E+6, 235.5020221151552,
    -1.4678417488706266E+6, 24.124768415318719, -1.5746138750637486E+6,
    83.5204297252795, -1.6852504844664573E+6, 270.96401878528303,
    -1.7993293040232225E+6, 136.03738601198143, -1.9171542965517605E+6,
    2.9628991482790052, -2.0390252523541185E+6, 191.51230621973772,
    -2.164517407187135E+6, 248.61022884690487, -2.29350213080865E+6,
    37.05303801396397, -2.4264560194140333E+6, 65.202736944833632,
    -2.5633156573407943E+6, 265.416919903718, -2.7036300019300585E+6,
    156.59029936960977, -2.8476442178727412E+6, 0.22813829759910018,
    -2.9957105579605037E+6, 172.06137316886529, -3.1474419161552317E+6,
    259.18280307156209, -3.3026420252354559E+6, 52.243719721692372,
    -3.4617770777206048E+6, 48.509030744796654, -3.6248554871207578E+6,
    256.95301851926189, -3.7914076706666891E+6, 176.69456069795913,
    -3.961614434671307E+6, 0.59096566667757389, -4.13587250544324E+6,
    151.81090943478176, -4.3138412145817578E+6, 266.97996242749679,
    -4.4952611091594305E+6, 69.352294081156046, -4.6805774049331062E+6,
    33.817918663119741, -4.8698701537699075E+6, 245.7642730158849,
    -5.0626618827666E+6, 195.89421223710252, -5.2590649392328458E+6,
    4.0431524550755835, -5.4595115253774673E+6, 131.22018859789281,
    -5.6637151366797453E+6, 271.824870011544, -5.8713590188098028E+6,
    87.990744486667211, -6.0828573134210594E+6, 21.462590089166596,
    -6.2983598951887544E+6, 232.1044403087401, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -2026.3190476019929, 164.37180078403381, -7734.97927650359,
    262.50947824244957, -16904.89605462522, 58.592798101579611,
    -29995.453029220356, 42.623974888100143, -47042.624776989091,
    252.97534152045878, -67572.531584209253, 184.18243375098436,
    -91740.150164185936, 1.5513811590967854, -119956.91188674844,
    143.93603400138886, -151902.05250107418, 269.19275224244365,
    -187293.393580029, 76.335519044104558, -226565.40404064636,
    28.791216843800523, -269825.19172195054, 240.80657303127083,
    -316595.12827332376, 202.91863453296364, -366960.56767052819,
    6.1703398431488425, -421364.74461679213, 123.3386095931174,
    -479543.70234770107, 272.87358915556973, -541160.56835112942,
    95.449738882720112, -606615.04320768581, 17.408246182518869,
    -676082.93884962087, 226.27915627563561, -749093.710736795,
    220.15547251458725, -825661.15430849639, 13.752119651491865,
    -906250.25519011926, 103.04667008885932, -990659.85055265215,
    273.46850886156074, -1.0785060139521523E+6, 115.50195365933341,
    -1.1701446125605588E+6, 8.7332247794550319, -1.265816175048952E+6,
    209.72256808899826, -1.3650679124766488E+6, 235.5020221151552,
    -1.4678417488706266E+6, 24.124768415318719, -1.5746138750637486E+6,
    83.5204297252795, -1.6852504844664573E+6, 270.96401878528303,
    -1.7993293040232225E+6, 136.03738601198143, -1.9171542965517605E+6,
    2.9628991482790052, -2.0390252523541185E+6, 191.51230621973772,
    -2.164517407187135E+6, 248.61022884690487, -2.29350213080865E+6,
    37.05303801396397, -2.4264560194140333E+6, 65.202736944833632,
    -2.5633156573407943E+6, 265.416919903718, -2.7036300019300585E+6,
    156.59029936960977, -2.8476442178727412E+6, 0.22813829759910018,
    -2.9957105579605037E+6, 172.06137316886529, -3.1474419161552317E+6,
    259.18280307156209, -3.3026420252354559E+6, 52.243719721692372,
    -3.4617770777206048E+6, 48.509030744796654, -3.6248554871207578E+6,
    256.95301851926189, -3.7914076706666891E+6, 176.69456069795913,
    -3.961614434671307E+6, 0.59096566667757389, -4.13587250544324E+6,
    151.81090943478176, -4.3138412145817578E+6, 266.97996242749679,
    -4.4952611091594305E+6, 69.352294081156046, -4.6805774049331062E+6,
    33.817918663119741, -4.8698701537699075E+6, 245.7642730158849,
    -5.0626618827666E+6, 195.89421223710252, -5.2590649392328458E+6,
    4.0431524550755835, -5.4595115253774673E+6, 131.22018859789281,
    -5.6637151366797453E+6, 271.824870011544, -5.8713590188098028E+6,
    87.990744486667211, -6.0828573134210594E+6, 21.462590089166596, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -2026.3190476019929, 164.37180078403381,
    -7734.97927650359, 262.50947824244957, -16904.89605462522,
    58.592798101579611, -29995.453029220356, 42.623974888100143,
    -47042.624776989091, 252.97534152045878, -67572.531584209253,
    184.18243375098436, -91740.150164185936, 1.5513811590967854,
    -119956.91188674844, 143.93603400138886, -151902.05250107418,
    269.19275224244365, -187293.393580029, 76.335519044104558,
    -226565.40404064636, 28.791216843800523, -269825.19172195054,
    240.80657303127083, -316595.12827332376, 202.91863453296364,
    -366960.56767052819, 6.1703398431488425, -421364.74461679213,
    123.3386095931174, -479543.70234770107, 272.87358915556973,
    -541160.56835112942, 95.449738882720112, -606615.04320768581,
    17.408246182518869, -676082.93884962087, 226.27915627563561,
    -749093.710736795, 220.15547251458725, -825661.15430849639,
    13.752119651491865, -906250.25519011926, 103.04667008885932,
    -990659.85055265215, 273.46850886156074, -1.0785060139521523E+6,
    115.50195365933341, -1.1701446125605588E+6, 8.7332247794550319,
    -1.265816175048952E+6, 209.72256808899826, -1.3650679124766488E+6,
    235.5020221151552, -1.4678417488706266E+6, 24.124768415318719,
    -1.5746138750637486E+6, 83.5204297252795, -1.6852504844664573E+6,
    270.96401878528303, -1.7993293040232225E+6, 136.03738601198143,
    -1.9171542965517605E+6, 2.9628991482790052, -2.0390252523541185E+6,
    191.51230621973772, -2.164517407187135E+6, 248.61022884690487,
    -2.29350213080865E+6, 37.05303801396397, -2.4264560194140333E+6,
    65.202736944833632, -2.5633156573407943E+6, 265.416919903718,
    -2.7036300019300585E+6, 156.59029936960977, -2.8476442178727412E+6,
    0.22813829759910018, -2.9957105579605037E+6, 172.06137316886529,
    -3.1474419161552317E+6, 259.18280307156209, -3.3026420252354559E+6,
    52.243719721692372, -3.4617770777206048E+6, 48.509030744796654,
    -3.6248554871207578E+6, 256.95301851926189, -3.7914076706666891E+6,
    176.69456069795913, -3.961614434671307E+6, 0.59096566667757389,
    -4.13587250544324E+6, 151.81090943478176, -4.3138412145817578E+6,
    266.97996242749679, -4.4952611091594305E+6, 69.352294081156046,
    -4.6805774049331062E+6, 33.817918663119741, -4.8698701537699075E+6,
    245.7642730158849, -5.0626618827666E+6, 195.89421223710252,
    -5.2590649392328458E+6, 4.0431524550755835, -5.4595115253774673E+6,
    131.22018859789281, -5.6637151366797453E+6, 271.824870011544,
    -5.8713590188098028E+6, 87.990744486667211, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -2026.3190476019929, 164.37180078403381,
    -7734.97927650359, 262.50947824244957, -16904.89605462522,
    58.592798101579611, -29995.453029220356, 42.623974888100143,
    -47042.624776989091, 252.97534152045878, -67572.531584209253,
    184.18243375098436, -91740.150164185936, 1.5513811590967854,
    -119956.91188674844, 143.93603400138886, -151902.05250107418,
    269.19275224244365, -187293.393580029, 76.335519044104558,
    -226565.40404064636, 28.791216843800523, -269825.19172195054,
    240.80657303127083, -316595.12827332376, 202.91863453296364,
    -366960.56767052819, 6.1703398431488425, -421364.74461679213,
    123.3386095931174, -479543.70234770107, 272.87358915556973,
    -541160.56835112942, 95.449738882720112, -606615.04320768581,
    17.408246182518869, -676082.93884962087, 226.27915627563561,
    -749093.710736795, 220.15547251458725, -825661.15430849639,
    13.752119651491865, -906250.25519011926, 103.04667008885932,
    -990659.85055265215, 273.46850886156074, -1.0785060139521523E+6,
    115.50195365933341, -1.1701446125605588E+6, 8.7332247794550319,
    -1.265816175048952E+6, 209.72256808899826, -1.3650679124766488E+6,
    235.5020221151552, -1.4678417488706266E+6, 24.124768415318719,
    -1.5746138750637486E+6, 83.5204297252795, -1.6852504844664573E+6,
    270.96401878528303, -1.7993293040232225E+6, 136.03738601198143,
    -1.9171542965517605E+6, 2.9628991482790052, -2.0390252523541185E+6,
    191.51230621973772, -2.164517407187135E+6, 248.61022884690487,
    -2.29350213080865E+6, 37.05303801396397, -2.4264560194140333E+6,
    65.202736944833632, -2.5633156573407943E+6, 265.416919903718,
    -2.7036300019300585E+6, 156.59029936960977, -2.8476442178727412E+6,
    0.22813829759910018, -2.9957105579605037E+6, 172.06137316886529,
    -3.1474419161552317E+6, 259.18280307156209, -3.3026420252354559E+6,
    52.243719721692372, -3.4617770777206048E+6, 48.509030744796654,
    -3.6248554871207578E+6, 256.95301851926189, -3.7914076706666891E+6,
    176.69456069795913, -3.961614434671307E+6, 0.59096566667757389,
    -4.13587250544324E+6, 151.81090943478176, -4.3138412145817578E+6,
    266.97996242749679, -4.4952611091594305E+6, 69.352294081156046,
    -4.6805774049331062E+6, 33.817918663119741, -4.8698701537699075E+6,
    245.7642730158849, -5.0626618827666E+6, 195.89421223710252,
    -5.2590649392328458E+6, 4.0431524550755835, -5.4595115253774673E+6,
    131.22018859789281, -5.6637151366797453E+6, 271.824870011544, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -2026.3190476019929, 164.37180078403381, -7734.97927650359,
    262.50947824244957, -16904.89605462522, 58.592798101579611,
    -29995.453029220356, 42.623974888100143, -47042.624776989091,
    252.97534152045878, -67572.531584209253, 184.18243375098436,
    -91740.150164185936, 1.5513811590967854, -119956.91188674844,
    143.93603400138886, -151902.05250107418, 269.19275224244365,
    -187293.393580029, 76.335519044104558, -226565.40404064636,
    28.791216843800523, -269825.19172195054, 240.80657303127083,
    -316595.12827332376, 202.91863453296364, -366960.56767052819,
    6.1703398431488425, -421364.74461679213, 123.3386095931174,
    -479543.70234770107, 272.87358915556973, -541160.56835112942,
    95.449738882720112, -606615.04320768581, 17.408246182518869,
    -676082.93884962087, 226.27915627563561, -749093.710736795,
    220.15547251458725, -825661.15430849639, 13.752119651491865,
    -906250.25519011926, 103.04667008885932, -990659.85055265215,
    273.46850886156074, -1.0785060139521523E+6, 115.50195365933341,
    -1.1701446125605588E+6, 8.7332247794550319, -1.265816175048952E+6,
    209.72256808899826, -1.3650679124766488E+6, 235.5020221151552,
    -1.4678417488706266E+6, 24.124768415318719, -1.5746138750637486E+6,
    83.5204297252795, -1.6852504844664573E+6, 270.96401878528303,
    -1.7993293040232225E+6, 136.03738601198143, -1.9171542965517605E+6,
    2.9628991482790052, -2.0390252523541185E+6, 191.51230621973772,
    -2.164517407187135E+6, 248.61022884690487, -2.29350213080865E+6,
    37.05303801396397, -2.4264560194140333E+6, 65.202736944833632,
    -2.5633156573407943E+6, 265.416919903718, -2.7036300019300585E+6,
    156.59029936960977, -2.8476442178727412E+6, 0.22813829759910018,
    -2.9957105579605037E+6, 172.06137316886529, -3.1474419161552317E+6,
    259.18280307156209, -3.3026420252354559E+6, 52.243719721692372,
    -3.4617770777206048E+6, 48.509030744796654, -3.6248554871207578E+6,
    256.95301851926189, -3.7914076706666891E+6, 176.69456069795913,
    -3.961614434671307E+6, 0.59096566667757389, -4.13587250544324E+6,
    151.81090943478176, -4.3138412145817578E+6, 266.97996242749679,
    -4.4952611091594305E+6, 69.352294081156046, -4.6805774049331062E+6,
    33.817918663119741, -4.8698701537699075E+6, 245.7642730158849,
    -5.0626618827666E+6, 195.89421223710252, -5.2590649392328458E+6,
    4.0431524550755835, -5.4595115253774673E+6, 131.22018859789281, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -2026.3190476019929, 164.37180078403381, -7734.97927650359,
    262.50947824244957, -16904.89605462522, 58.592798101579611,
    -29995.453029220356, 42.623974888100143, -47042.624776989091,
    252.97534152045878, -67572.531584209253, 184.18243375098436,
    -91740.150164185936, 1.5513811590967854, -119956.91188674844,
    143.93603400138886, -151902.05250107418, 269.19275224244365,
    -187293.393580029, 76.335519044104558, -226565.40404064636,
    28.791216843800523, -269825.19172195054, 240.80657303127083,
    -316595.12827332376, 202.91863453296364, -366960.56767052819,
    6.1703398431488425, -421364.74461679213, 123.3386095931174,
    -479543.70234770107, 272.87358915556973, -541160.56835112942,
    95.449738882720112, -606615.04320768581, 17.408246182518869,
    -676082.93884962087, 226.27915627563561, -749093.710736795,
    220.15547251458725, -825661.15430849639, 13.752119651491865,
    -906250.25519011926, 103.04667008885932, -990659.85055265215,
    273.46850886156074, -1.0785060139521523E+6, 115.50195365933341,
    -1.1701446125605588E+6, 8.7332247794550319, -1.265816175048952E+6,
    209.72256808899826, -1.3650679124766488E+6, 235.5020221151552,
    -1.4678417488706266E+6, 24.124768415318719, -1.5746138750637486E+6,
    83.5204297252795, -1.6852504844664573E+6, 270.96401878528303,
    -1.7993293040232225E+6, 136.03738601198143, -1.9171542965517605E+6,
    2.9628991482790052, -2.0390252523541185E+6, 191.51230621973772,
    -2.164517407187135E+6, 248.61022884690487, -2.29350213080865E+6,
    37.05303801396397, -2.4264560194140333E+6, 65.202736944833632,
    -2.5633156573407943E+6, 265.416919903718, -2.7036300019300585E+6,
    156.59029936960977, -2.8476442178727412E+6, 0.22813829759910018,
    -2.9957105579605037E+6, 172.06137316886529, -3.1474419161552317E+6,
    259.18280307156209, -3.3026420252354559E+6, 52.243719721692372,
    -3.4617770777206048E+6, 48.509030744796654, -3.6248554871207578E+6,
    256.95301851926189, -3.7914076706666891E+6, 176.69456069795913,
    -3.961614434671307E+6, 0.59096566667757389, -4.13587250544324E+6,
    151.81090943478176, -4.3138412145817578E+6, 266.97996242749679,
    -4.4952611091594305E+6, 69.352294081156046, -4.6805774049331062E+6,
    33.817918663119741, -4.8698701537699075E+6, 245.7642730158849,
    -5.0626618827666E+6, 195.89421223710252, -5.2590649392328458E+6,
    4.0431524550755835, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -2026.3190476019929,
    164.37180078403381, -7734.97927650359, 262.50947824244957,
    -16904.89605462522, 58.592798101579611, -29995.453029220356,
    42.623974888100143, -47042.624776989091, 252.97534152045878,
    -67572.531584209253, 184.18243375098436, -91740.150164185936,
    1.5513811590967854, -119956.91188674844, 143.93603400138886,
    -151902.05250107418, 269.19275224244365, -187293.393580029,
    76.335519044104558, -226565.40404064636, 28.791216843800523,
    -269825.19172195054, 240.80657303127083, -316595.12827332376,
    202.91863453296364, -366960.56767052819, 6.1703398431488425,
    -421364.74461679213, 123.3386095931174, -479543.70234770107,
    272.87358915556973, -541160.56835112942, 95.449738882720112,
    -606615.04320768581, 17.408246182518869, -676082.93884962087,
    226.27915627563561, -749093.710736795, 220.15547251458725,
    -825661.15430849639, 13.752119651491865, -906250.25519011926,
    103.04667008885932, -990659.85055265215, 273.46850886156074,
    -1.0785060139521523E+6, 115.50195365933341, -1.1701446125605588E+6,
    8.7332247794550319, -1.265816175048952E+6, 209.72256808899826,
    -1.3650679124766488E+6, 235.5020221151552, -1.4678417488706266E+6,
    24.124768415318719, -1.5746138750637486E+6, 83.5204297252795,
    -1.6852504844664573E+6, 270.96401878528303, -1.7993293040232225E+6,
    136.03738601198143, -1.9171542965517605E+6, 2.9628991482790052,
    -2.0390252523541185E+6, 191.51230621973772, -2.164517407187135E+6,
    248.61022884690487, -2.29350213080865E+6, 37.05303801396397,
    -2.4264560194140333E+6, 65.202736944833632, -2.5633156573407943E+6,
    265.416919903718, -2.7036300019300585E+6, 156.59029936960977,
    -2.8476442178727412E+6, 0.22813829759910018, -2.9957105579605037E+6,
    172.06137316886529, -3.1474419161552317E+6, 259.18280307156209,
    -3.3026420252354559E+6, 52.243719721692372, -3.4617770777206048E+6,
    48.509030744796654, -3.6248554871207578E+6, 256.95301851926189,
    -3.7914076706666891E+6, 176.69456069795913, -3.961614434671307E+6,
    0.59096566667757389, -4.13587250544324E+6, 151.81090943478176,
    -4.3138412145817578E+6, 266.97996242749679, -4.4952611091594305E+6,
    69.352294081156046, -4.6805774049331062E+6, 33.817918663119741,
    -4.8698701537699075E+6, 245.7642730158849, -5.0626618827666E+6,
    195.89421223710252, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -2026.3190476019929,
    164.37180078403381, -7734.97927650359, 262.50947824244957,
    -16904.89605462522, 58.592798101579611, -29995.453029220356,
    42.623974888100143, -47042.624776989091, 252.97534152045878,
    -67572.531584209253, 184.18243375098436, -91740.150164185936,
    1.5513811590967854, -119956.91188674844, 143.93603400138886,
    -151902.05250107418, 269.19275224244365, -187293.393580029,
    76.335519044104558, -226565.40404064636, 28.791216843800523,
    -269825.19172195054, 240.80657303127083, -316595.12827332376,
    202.91863453296364, -366960.56767052819, 6.1703398431488425,
    -421364.74461679213, 123.3386095931174, -479543.70234770107,
    272.87358915556973, -541160.56835112942, 95.449738882720112,
    -606615.04320768581, 17.408246182518869, -676082.93884962087,
    226.27915627563561, -749093.710736795, 220.15547251458725,
    -825661.15430849639, 13.752119651491865, -906250.25519011926,
    103.04667008885932, -990659.85055265215, 273.46850886156074,
    -1.0785060139521523E+6, 115.50195365933341, -1.1701446125605588E+6,
    8.7332247794550319, -1.265816175048952E+6, 209.72256808899826,
    -1.3650679124766488E+6, 235.5020221151552, -1.4678417488706266E+6,
    24.124768415318719, -1.5746138750637486E+6, 83.5204297252795,
    -1.6852504844664573E+6, 270.96401878528303, -1.7993293040232225E+6,
    136.03738601198143, -1.9171542965517605E+6, 2.9628991482790052,
    -2.0390252523541185E+6, 191.51230621973772, -2.164517407187135E+6,
    248.61022884690487, -2.29350213080865E+6, 37.05303801396397,
    -2.4264560194140333E+6, 65.202736944833632, -2.5633156573407943E+6,
    265.416919903718, -2.7036300019300585E+6, 156.59029936960977,
    -2.8476442178727412E+6, 0.22813829759910018, -2.9957105579605037E+6,
    172.06137316886529, -3.1474419161552317E+6, 259.18280307156209,
    -3.3026420252354559E+6, 52.243719721692372, -3.4617770777206048E+6,
    48.509030744796654, -3.6248554871207578E+6, 256.95301851926189,
    -3.7914076706666891E+6, 176.69456069795913, -3.961614434671307E+6,
    0.59096566667757389, -4.13587250544324E+6, 151.81090943478176,
    -4.3138412145817578E+6, 266.97996242749679, -4.4952611091594305E+6,
    69.352294081156046, -4.6805774049331062E+6, 33.817918663119741,
    -4.8698701537699075E+6, 245.7642730158849, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -2026.3190476019929, 164.37180078403381, -7734.97927650359,
    262.50947824244957, -16904.89605462522, 58.592798101579611,
    -29995.453029220356, 42.623974888100143, -47042.624776989091,
    252.97534152045878, -67572.531584209253, 184.18243375098436,
    -91740.150164185936, 1.5513811590967854, -119956.91188674844,
    143.93603400138886, -151902.05250107418, 269.19275224244365,
    -187293.393580029, 76.335519044104558, -226565.40404064636,
    28.791216843800523, -269825.19172195054, 240.80657303127083,
    -316595.12827332376, 202.91863453296364, -366960.56767052819,
    6.1703398431488425, -421364.74461679213, 123.3386095931174,
    -479543.70234770107, 272.87358915556973, -541160.56835112942,
    95.449738882720112, -606615.04320768581, 17.408246182518869,
    -676082.93884962087, 226.27915627563561, -749093.710736795,
    220.15547251458725, -825661.15430849639, 13.752119651491865,
    -906250.25519011926, 103.04667008885932, -990659.85055265215,
    273.46850886156074, -1.0785060139521523E+6, 115.50195365933341,
    -1.1701446125605588E+6, 8.7332247794550319, -1.265816175048952E+6,
    209.72256808899826, -1.3650679124766488E+6, 235.5020221151552,
    -1.4678417488706266E+6, 24.124768415318719, -1.5746138750637486E+6,
    83.5204297252795, -1.6852504844664573E+6, 270.96401878528303,
    -1.7993293040232225E+6, 136.03738601198143, -1.9171542965517605E+6,
    2.9628991482790052, -2.0390252523541185E+6, 191.51230621973772,
    -2.164517407187135E+6, 248.61022884690487, -2.29350213080865E+6,
    37.05303801396397, -2.4264560194140333E+6, 65.202736944833632,
    -2.5633156573407943E+6, 265.416919903718, -2.7036300019300585E+6,
    156.59029936960977, -2.8476442178727412E+6, 0.22813829759910018,
    -2.9957105579605037E+6, 172.06137316886529, -3.1474419161552317E+6,
    259.18280307156209, -3.3026420252354559E+6, 52.243719721692372,
    -3.4617770777206048E+6, 48.509030744796654, -3.6248554871207578E+6,
    256.95301851926189, -3.7914076706666891E+6, 176.69456069795913,
    -3.961614434671307E+6, 0.59096566667757389, -4.13587250544324E+6,
    151.81090943478176, -4.3138412145817578E+6, 266.97996242749679,
    -4.4952611091594305E+6, 69.352294081156046, -4.6805774049331062E+6,
    33.817918663119741, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -2026.3190476019929, 164.37180078403381, -7734.97927650359,
    262.50947824244957, -16904.89605462522, 58.592798101579611,
    -29995.453029220356, 42.623974888100143, -47042.624776989091,
    252.97534152045878, -67572.531584209253, 184.18243375098436,
    -91740.150164185936, 1.5513811590967854, -119956.91188674844,
    143.93603400138886, -151902.05250107418, 269.19275224244365,
    -187293.393580029, 76.335519044104558, -226565.40404064636,
    28.791216843800523, -269825.19172195054, 240.80657303127083,
    -316595.12827332376, 202.91863453296364, -366960.56767052819,
    6.1703398431488425, -421364.74461679213, 123.3386095931174,
    -479543.70234770107, 272.87358915556973, -541160.56835112942,
    95.449738882720112, -606615.04320768581, 17.408246182518869,
    -676082.93884962087, 226.27915627563561, -749093.710736795,
    220.15547251458725, -825661.15430849639, 13.752119651491865,
    -906250.25519011926, 103.04667008885932, -990659.85055265215,
    273.46850886156074, -1.0785060139521523E+6, 115.50195365933341,
    -1.1701446125605588E+6, 8.7332247794550319, -1.265816175048952E+6,
    209.72256808899826, -1.3650679124766488E+6, 235.5020221151552,
    -1.4678417488706266E+6, 24.124768415318719, -1.5746138750637486E+6,
    83.5204297252795, -1.6852504844664573E+6, 270.96401878528303,
    -1.7993293040232225E+6, 136.03738601198143, -1.9171542965517605E+6,
    2.9628991482790052, -2.0390252523541185E+6, 191.51230621973772,
    -2.164517407187135E+6, 248.61022884690487, -2.29350213080865E+6,
    37.05303801396397, -2.4264560194140333E+6, 65.202736944833632,
    -2.5633156573407943E+6, 265.416919903718, -2.7036300019300585E+6,
    156.59029936960977, -2.8476442178727412E+6, 0.22813829759910018,
    -2.9957105579605037E+6, 172.06137316886529, -3.1474419161552317E+6,
    259.18280307156209, -3.3026420252354559E+6, 52.243719721692372,
    -3.4617770777206048E+6, 48.509030744796654, -3.6248554871207578E+6,
    256.95301851926189, -3.7914076706666891E+6, 176.69456069795913,
    -3.961614434671307E+6, 0.59096566667757389, -4.13587250544324E+6,
    151.81090943478176, -4.3138412145817578E+6, 266.97996242749679,
    -4.4952611091594305E+6, 69.352294081156046, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -2026.3190476019929, 164.37180078403381,
    -7734.97927650359, 262.50947824244957, -16904.89605462522,
    58.592798101579611, -29995.453029220356, 42.623974888100143,
    -47042.624776989091, 252.97534152045878, -67572.531584209253,
    184.18243375098436, -91740.150164185936, 1.5513811590967854,
    -119956.91188674844, 143.93603400138886, -151902.05250107418,
    269.19275224244365, -187293.393580029, 76.335519044104558,
    -226565.40404064636, 28.791216843800523, -269825.19172195054,
    240.80657303127083, -316595.12827332376, 202.91863453296364,
    -366960.56767052819, 6.1703398431488425, -421364.74461679213,
    123.3386095931174, -479543.70234770107, 272.87358915556973,
    -541160.56835112942, 95.449738882720112, -606615.04320768581,
    17.408246182518869, -676082.93884962087, 226.27915627563561,
    -749093.710736795, 220.15547251458725, -825661.15430849639,
    13.752119651491865, -906250.25519011926, 103.04667008885932,
    -990659.85055265215, 273.46850886156074, -1.0785060139521523E+6,
    115.50195365933341, -1.1701446125605588E+6, 8.7332247794550319,
    -1.265816175048952E+6, 209.72256808899826, -1.3650679124766488E+6,
    235.5020221151552, -1.4678417488706266E+6, 24.124768415318719,
    -1.5746138750637486E+6, 83.5204297252795, -1.6852504844664573E+6,
    270.96401878528303, -1.7993293040232225E+6, 136.03738601198143,
    -1.9171542965517605E+6, 2.9628991482790052, -2.0390252523541185E+6,
    191.51230621973772, -2.164517407187135E+6, 248.61022884690487,
    -2.29350213080865E+6, 37.05303801396397, -2.4264560194140333E+6,
    65.202736944833632, -2.5633156573407943E+6, 265.416919903718,
    -2.7036300019300585E+6, 156.59029936960977, -2.8476442178727412E+6,
    0.22813829759910018, -2.9957105579605037E+6, 172.06137316886529,
    -3.1474419161552317E+6, 259.18280307156209, -3.3026420252354559E+6,
    52.243719721692372, -3.4617770777206048E+6, 48.509030744796654,
    -3.6248554871207578E+6, 256.95301851926189, -3.7914076706666891E+6,
    176.69456069795913, -3.961614434671307E+6, 0.59096566667757389,
    -4.13587250544324E+6, 151.81090943478176, -4.3138412145817578E+6,
    266.97996242749679, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -2026.3190476019929, 164.37180078403381,
    -7734.97927650359, 262.50947824244957, -16904.89605462522,
    58.592798101579611, -29995.453029220356, 42.623974888100143,
    -47042.624776989091, 252.97534152045878, -67572.531584209253,
    184.18243375098436, -91740.150164185936, 1.5513811590967854,
    -119956.91188674844, 143.93603400138886, -151902.05250107418,
    269.19275224244365, -187293.393580029, 76.335519044104558,
    -226565.40404064636, 28.791216843800523, -269825.19172195054,
    240.80657303127083, -316595.12827332376, 202.91863453296364,
    -366960.56767052819, 6.1703398431488425, -421364.74461679213,
    123.3386095931174, -479543.70234770107, 272.87358915556973,
    -541160.56835112942, 95.449738882720112, -606615.04320768581,
    17.408246182518869, -676082.93884962087, 226.27915627563561,
    -749093.710736795, 220.15547251458725, -825661.15430849639,
    13.752119651491865, -906250.25519011926, 103.04667008885932,
    -990659.85055265215, 273.46850886156074, -1.0785060139521523E+6,
    115.50195365933341, -1.1701446125605588E+6, 8.7332247794550319,
    -1.265816175048952E+6, 209.72256808899826, -1.3650679124766488E+6,
    235.5020221151552, -1.4678417488706266E+6, 24.124768415318719,
    -1.5746138750637486E+6, 83.5204297252795, -1.6852504844664573E+6,
    270.96401878528303, -1.7993293040232225E+6, 136.03738601198143,
    -1.9171542965517605E+6, 2.9628991482790052, -2.0390252523541185E+6,
    191.51230621973772, -2.164517407187135E+6, 248.61022884690487,
    -2.29350213080865E+6, 37.05303801396397, -2.4264560194140333E+6,
    65.202736944833632, -2.5633156573407943E+6, 265.416919903718,
    -2.7036300019300585E+6, 156.59029936960977, -2.8476442178727412E+6,
    0.22813829759910018, -2.9957105579605037E+6, 172.06137316886529,
    -3.1474419161552317E+6, 259.18280307156209, -3.3026420252354559E+6,
    52.243719721692372, -3.4617770777206048E+6, 48.509030744796654,
    -3.6248554871207578E+6, 256.95301851926189, -3.7914076706666891E+6,
    176.69456069795913, -3.961614434671307E+6, 0.59096566667757389,
    -4.13587250544324E+6, 151.81090943478176, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -2026.3190476019929,
    164.37180078403381, -7734.97927650359, 262.50947824244957,
    -16904.89605462522, 58.592798101579611, -29995.453029220356,
    42.623974888100143, -47042.624776989091, 252.97534152045878,
    -67572.531584209253, 184.18243375098436, -91740.150164185936,
    1.5513811590967854, -119956.91188674844, 143.93603400138886,
    -151902.05250107418, 269.19275224244365, -187293.393580029,
    76.335519044104558, -226565.40404064636, 28.791216843800523,
    -269825.19172195054, 240.80657303127083, -316595.12827332376,
    202.91863453296364, -366960.56767052819, 6.1703398431488425,
    -421364.74461679213, 123.3386095931174, -479543.70234770107,
    272.87358915556973, -541160.56835112942, 95.449738882720112,
    -606615.04320768581, 17.408246182518869, -676082.93884962087,
    226.27915627563561, -749093.710736795, 220.15547251458725,
    -825661.15430849639, 13.752119651491865, -906250.25519011926,
    103.04667008885932, -990659.85055265215, 273.46850886156074,
    -1.0785060139521523E+6, 115.50195365933341, -1.1701446125605588E+6,
    8.7332247794550319, -1.265816175048952E+6, 209.72256808899826,
    -1.3650679124766488E+6, 235.5020221151552, -1.4678417488706266E+6,
    24.124768415318719, -1.5746138750637486E+6, 83.5204297252795,
    -1.6852504844664573E+6, 270.96401878528303, -1.7993293040232225E+6,
    136.03738601198143, -1.9171542965517605E+6, 2.9628991482790052,
    -2.0390252523541185E+6, 191.51230621973772, -2.164517407187135E+6,
    248.61022884690487, -2.29350213080865E+6, 37.05303801396397,
    -2.4264560194140333E+6, 65.202736944833632, -2.5633156573407943E+6,
    265.416919903718, -2.7036300019300585E+6, 156.59029936960977,
    -2.8476442178727412E+6, 0.22813829759910018, -2.9957105579605037E+6,
    172.06137316886529, -3.1474419161552317E+6, 259.18280307156209,
    -3.3026420252354559E+6, 52.243719721692372, -3.4617770777206048E+6,
    48.509030744796654, -3.6248554871207578E+6, 256.95301851926189,
    -3.7914076706666891E+6, 176.69456069795913, -3.961614434671307E+6,
    0.59096566667757389, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -2026.3190476019929,
    164.37180078403381, -7734.97927650359, 262.50947824244957,
    -16904.89605462522, 58.592798101579611, -29995.453029220356,
    42.623974888100143, -47042.624776989091, 252.97534152045878,
    -67572.531584209253, 184.18243375098436, -91740.150164185936,
    1.5513811590967854, -119956.91188674844, 143.93603400138886,
    -151902.05250107418, 269.19275224244365, -187293.393580029,
    76.335519044104558, -226565.40404064636, 28.791216843800523,
    -269825.19172195054, 240.80657303127083, -316595.12827332376,
    202.91863453296364, -366960.56767052819, 6.1703398431488425,
    -421364.74461679213, 123.3386095931174, -479543.70234770107,
    272.87358915556973, -541160.56835112942, 95.449738882720112,
    -606615.04320768581, 17.408246182518869, -676082.93884962087,
    226.27915627563561, -749093.710736795, 220.15547251458725,
    -825661.15430849639, 13.752119651491865, -906250.25519011926,
    103.04667008885932, -990659.85055265215, 273.46850886156074,
    -1.0785060139521523E+6, 115.50195365933341, -1.1701446125605588E+6,
    8.7332247794550319, -1.265816175048952E+6, 209.72256808899826,
    -1.3650679124766488E+6, 235.5020221151552, -1.4678417488706266E+6,
    24.124768415318719, -1.5746138750637486E+6, 83.5204297252795,
    -1.6852504844664573E+6, 270.96401878528303, -1.7993293040232225E+6,
    136.03738601198143, -1.9171542965517605E+6, 2.9628991482790052,
    -2.0390252523541185E+6, 191.51230621973772, -2.164517407187135E+6,
    248.61022884690487, -2.29350213080865E+6, 37.05303801396397,
    -2.4264560194140333E+6, 65.202736944833632, -2.5633156573407943E+6,
    265.416919903718, -2.7036300019300585E+6, 156.59029936960977,
    -2.8476442178727412E+6, 0.22813829759910018, -2.9957105579605037E+6,
    172.06137316886529, -3.1474419161552317E+6, 259.18280307156209,
    -3.3026420252354559E+6, 52.243719721692372, -3.4617770777206048E+6,
    48.509030744796654, -3.6248554871207578E+6, 256.95301851926189,
    -3.7914076706666891E+6, 176.69456069795913, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -2026.3190476019929, 164.37180078403381, -7734.97927650359,
    262.50947824244957, -16904.89605462522, 58.592798101579611,
    -29995.453029220356, 42.623974888100143, -47042.624776989091,
    252.97534152045878, -67572.531584209253, 184.18243375098436,
    -91740.150164185936, 1.5513811590967854, -119956.91188674844,
    143.93603400138886, -151902.05250107418, 269.19275224244365,
    -187293.393580029, 76.335519044104558, -226565.40404064636,
    28.791216843800523, -269825.19172195054, 240.80657303127083,
    -316595.12827332376, 202.91863453296364, -366960.56767052819,
    6.1703398431488425, -421364.74461679213, 123.3386095931174,
    -479543.70234770107, 272.87358915556973, -541160.56835112942,
    95.449738882720112, -606615.04320768581, 17.408246182518869,
    -676082.93884962087, 226.27915627563561, -749093.710736795,
    220.15547251458725, -825661.15430849639, 13.752119651491865,
    -906250.25519011926, 103.04667008885932, -990659.85055265215,
    273.46850886156074, -1.0785060139521523E+6, 115.50195365933341,
    -1.1701446125605588E+6, 8.7332247794550319, -1.265816175048952E+6,
    209.72256808899826, -1.3650679124766488E+6, 235.5020221151552,
    -1.4678417488706266E+6, 24.124768415318719, -1.5746138750637486E+6,
    83.5204297252795, -1.6852504844664573E+6, 270.96401878528303,
    -1.7993293040232225E+6, 136.03738601198143, -1.9171542965517605E+6,
    2.9628991482790052, -2.0390252523541185E+6, 191.51230621973772,
    -2.164517407187135E+6, 248.61022884690487, -2.29350213080865E+6,
    37.05303801396397, -2.4264560194140333E+6, 65.202736944833632,
    -2.5633156573407943E+6, 265.416919903718, -2.7036300019300585E+6,
    156.59029936960977, -2.8476442178727412E+6, 0.22813829759910018,
    -2.9957105579605037E+6, 172.06137316886529, -3.1474419161552317E+6,
    259.18280307156209, -3.3026420252354559E+6, 52.243719721692372,
    -3.4617770777206048E+6, 48.509030744796654, -3.6248554871207578E+6,
    256.95301851926189, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -2026.3190476019929, 164.37180078403381, -7734.97927650359,
    262.50947824244957, -16904.89605462522, 58.592798101579611,
    -29995.453029220356, 42.623974888100143, -47042.624776989091,
    252.97534152045878, -67572.531584209253, 184.18243375098436,
    -91740.150164185936, 1.5513811590967854, -119956.91188674844,
    143.93603400138886, -151902.05250107418, 269.19275224244365,
    -187293.393580029, 76.335519044104558, -226565.40404064636,
    28.791216843800523, -269825.19172195054, 240.80657303127083,
    -316595.12827332376, 202.91863453296364, -366960.56767052819,
    6.1703398431488425, -421364.74461679213, 123.3386095931174,
    -479543.70234770107, 272.87358915556973, -541160.56835112942,
    95.449738882720112, -606615.04320768581, 17.408246182518869,
    -676082.93884962087, 226.27915627563561, -749093.710736795,
    220.15547251458725, -825661.15430849639, 13.752119651491865,
    -906250.25519011926, 103.04667008885932, -990659.85055265215,
    273.46850886156074, -1.0785060139521523E+6, 115.50195365933341,
    -1.1701446125605588E+6, 8.7332247794550319, -1.265816175048952E+6,
    209.72256808899826, -1.3650679124766488E+6, 235.5020221151552,
    -1.4678417488706266E+6, 24.124768415318719, -1.5746138750637486E+6,
    83.5204297252795, -1.6852504844664573E+6, 270.96401878528303,
    -1.7993293040232225E+6, 136.03738601198143, -1.9171542965517605E+6,
    2.9628991482790052, -2.0390252523541185E+6, 191.51230621973772,
    -2.164517407187135E+6, 248.61022884690487, -2.29350213080865E+6,
    37.05303801396397, -2.4264560194140333E+6, 65.202736944833632,
    -2.5633156573407943E+6, 265.416919903718, -2.7036300019300585E+6,
    156.59029936960977, -2.8476442178727412E+6, 0.22813829759910018,
    -2.9957105579605037E+6, 172.06137316886529, -3.1474419161552317E+6,
    259.18280307156209, -3.3026420252354559E+6, 52.243719721692372,
    -3.4617770777206048E+6, 48.509030744796654, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -2026.3190476019929, 164.37180078403381,
    -7734.97927650359, 262.50947824244957, -16904.89605462522,
    58.592798101579611, -29995.453029220356, 42.623974888100143,
    -47042.624776989091, 252.97534152045878, -67572.531584209253,
    184.18243375098436, -91740.150164185936, 1.5513811590967854,
    -119956.91188674844, 143.93603400138886, -151902.05250107418,
    269.19275224244365, -187293.393580029, 76.335519044104558,
    -226565.40404064636, 28.791216843800523, -269825.19172195054,
    240.80657303127083, -316595.12827332376, 202.91863453296364,
    -366960.56767052819, 6.1703398431488425, -421364.74461679213,
    123.3386095931174, -479543.70234770107, 272.87358915556973,
    -541160.56835112942, 95.449738882720112, -606615.04320768581,
    17.408246182518869, -676082.93884962087, 226.27915627563561,
    -749093.710736795, 220.15547251458725, -825661.15430849639,
    13.752119651491865, -906250.25519011926, 103.04667008885932,
    -990659.85055265215, 273.46850886156074, -1.0785060139521523E+6,
    115.50195365933341, -1.1701446125605588E+6, 8.7332247794550319,
    -1.265816175048952E+6, 209.72256808899826, -1.3650679124766488E+6,
    235.5020221151552, -1.4678417488706266E+6, 24.124768415318719,
    -1.5746138750637486E+6, 83.5204297252795, -1.6852504844664573E+6,
    270.96401878528303, -1.7993293040232225E+6, 136.03738601198143,
    -1.9171542965517605E+6, 2.9628991482790052, -2.0390252523541185E+6,
    191.51230621973772, -2.164517407187135E+6, 248.61022884690487,
    -2.29350213080865E+6, 37.05303801396397, -2.4264560194140333E+6,
    65.202736944833632, -2.5633156573407943E+6, 265.416919903718,
    -2.7036300019300585E+6, 156.59029936960977, -2.8476442178727412E+6,
    0.22813829759910018, -2.9957105579605037E+6, 172.06137316886529,
    -3.1474419161552317E+6, 259.18280307156209, -3.3026420252354559E+6,
    52.243719721692372, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -2026.3190476019929, 164.37180078403381, -7734.97927650359,
    262.50947824244957, -16904.89605462522, 58.592798101579611,
    -29995.453029220356, 42.623974888100143, -47042.624776989091,
    252.97534152045878, -67572.531584209253, 184.18243375098436,
    -91740.150164185936, 1.5513811590967854, -119956.91188674844,
    143.93603400138886, -151902.05250107418, 269.19275224244365,
    -187293.393580029, 76.335519044104558, -226565.40404064636,
    28.791216843800523, -269825.19172195054, 240.80657303127083,
    -316595.12827332376, 202.91863453296364, -366960.56767052819,
    6.1703398431488425, -421364.74461679213, 123.3386095931174,
    -479543.70234770107, 272.87358915556973, -541160.56835112942,
    95.449738882720112, -606615.04320768581, 17.408246182518869,
    -676082.93884962087, 226.27915627563561, -749093.710736795,
    220.15547251458725, -825661.15430849639, 13.752119651491865,
    -906250.25519011926, 103.04667008885932, -990659.85055265215,
    273.46850886156074, -1.0785060139521523E+6, 115.50195365933341,
    -1.1701446125605588E+6, 8.7332247794550319, -1.265816175048952E+6,
    209.72256808899826, -1.3650679124766488E+6, 235.5020221151552,
    -1.4678417488706266E+6, 24.124768415318719, -1.5746138750637486E+6,
    83.5204297252795, -1.6852504844664573E+6, 270.96401878528303,
    -1.7993293040232225E+6, 136.03738601198143, -1.9171542965517605E+6,
    2.9628991482790052, -2.0390252523541185E+6, 191.51230621973772,
    -2.164517407187135E+6, 248.61022884690487, -2.29350213080865E+6,
    37.05303801396397, -2.4264560194140333E+6, 65.202736944833632,
    -2.5633156573407943E+6, 265.416919903718, -2.7036300019300585E+6,
    156.59029936960977, -2.8476442178727412E+6, 0.22813829759910018,
    -2.9957105579605037E+6, 172.06137316886529, -3.1474419161552317E+6,
    259.18280307156209, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -2026.3190476019929, 164.37180078403381,
    -7734.97927650359, 262.50947824244957, -16904.89605462522,
    58.592798101579611, -29995.453029220356, 42.623974888100143,
    -47042.624776989091, 252.97534152045878, -67572.531584209253,
    184.18243375098436, -91740.150164185936, 1.5513811590967854,
    -119956.91188674844, 143.93603400138886, -151902.05250107418,
    269.19275224244365, -187293.393580029, 76.335519044104558,
    -226565.40404064636, 28.791216843800523, -269825.19172195054,
    240.80657303127083, -316595.12827332376, 202.91863453296364,
    -366960.56767052819, 6.1703398431488425, -421364.74461679213,
    123.3386095931174, -479543.70234770107, 272.87358915556973,
    -541160.56835112942, 95.449738882720112, -606615.04320768581,
    17.408246182518869, -676082.93884962087, 226.27915627563561,
    -749093.710736795, 220.15547251458725, -825661.15430849639,
    13.752119651491865, -906250.25519011926, 103.04667008885932,
    -990659.85055265215, 273.46850886156074, -1.0785060139521523E+6,
    115.50195365933341, -1.1701446125605588E+6, 8.7332247794550319,
    -1.265816175048952E+6, 209.72256808899826, -1.3650679124766488E+6,
    235.5020221151552, -1.4678417488706266E+6, 24.124768415318719,
    -1.5746138750637486E+6, 83.5204297252795, -1.6852504844664573E+6,
    270.96401878528303, -1.7993293040232225E+6, 136.03738601198143,
    -1.9171542965517605E+6, 2.9628991482790052, -2.0390252523541185E+6,
    191.51230621973772, -2.164517407187135E+6, 248.61022884690487,
    -2.29350213080865E+6, 37.05303801396397, -2.4264560194140333E+6,
    65.202736944833632, -2.5633156573407943E+6, 265.416919903718,
    -2.7036300019300585E+6, 156.59029936960977, -2.8476442178727412E+6,
    0.22813829759910018, -2.9957105579605037E+6, 172.06137316886529, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -2026.3190476019929, 164.37180078403381, -7734.97927650359,
    262.50947824244957, -16904.89605462522, 58.592798101579611,
    -29995.453029220356, 42.623974888100143, -47042.624776989091,
    252.97534152045878, -67572.531584209253, 184.18243375098436,
    -91740.150164185936, 1.5513811590967854, -119956.91188674844,
    143.93603400138886, -151902.05250107418, 269.19275224244365,
    -187293.393580029, 76.335519044104558, -226565.40404064636,
    28.791216843800523, -269825.19172195054, 240.80657303127083,
    -316595.12827332376, 202.91863453296364, -366960.56767052819,
    6.1703398431488425, -421364.74461679213, 123.3386095931174,
    -479543.70234770107, 272.87358915556973, -541160.56835112942,
    95.449738882720112, -606615.04320768581, 17.408246182518869,
    -676082.93884962087, 226.27915627563561, -749093.710736795,
    220.15547251458725, -825661.15430849639, 13.752119651491865,
    -906250.25519011926, 103.04667008885932, -990659.85055265215,
    273.46850886156074, -1.0785060139521523E+6, 115.50195365933341,
    -1.1701446125605588E+6, 8.7332247794550319, -1.265816175048952E+6,
    209.72256808899826, -1.3650679124766488E+6, 235.5020221151552,
    -1.4678417488706266E+6, 24.124768415318719, -1.5746138750637486E+6,
    83.5204297252795, -1.6852504844664573E+6, 270.96401878528303,
    -1.7993293040232225E+6, 136.03738601198143, -1.9171542965517605E+6,
    2.9628991482790052, -2.0390252523541185E+6, 191.51230621973772,
    -2.164517407187135E+6, 248.61022884690487, -2.29350213080865E+6,
    37.05303801396397, -2.4264560194140333E+6, 65.202736944833632,
    -2.5633156573407943E+6, 265.416919903718, -2.7036300019300585E+6,
    156.59029936960977, -2.8476442178727412E+6, 0.22813829759910018, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -2026.3190476019929, 164.37180078403381, -7734.97927650359,
    262.50947824244957, -16904.89605462522, 58.592798101579611,
    -29995.453029220356, 42.623974888100143, -47042.624776989091,
    252.97534152045878, -67572.531584209253, 184.18243375098436,
    -91740.150164185936, 1.5513811590967854, -119956.91188674844,
    143.93603400138886, -151902.05250107418, 269.19275224244365,
    -187293.393580029, 76.335519044104558, -226565.40404064636,
    28.791216843800523, -269825.19172195054, 240.80657303127083,
    -316595.12827332376, 202.91863453296364, -366960.56767052819,
    6.1703398431488425, -421364.74461679213, 123.3386095931174,
    -479543.70234770107, 272.87358915556973, -541160.56835112942,
    95.449738882720112, -606615.04320768581, 17.408246182518869,
    -676082.93884962087, 226.27915627563561, -749093.710736795,
    220.15547251458725, -825661.15430849639, 13.752119651491865,
    -906250.25519011926, 103.04667008885932, -990659.85055265215,
    273.46850886156074, -1.0785060139521523E+6, 115.50195365933341,
    -1.1701446125605588E+6, 8.7332247794550319, -1.265816175048952E+6,
    209.72256808899826, -1.3650679124766488E+6, 235.5020221151552,
    -1.4678417488706266E+6, 24.124768415318719, -1.5746138750637486E+6,
    83.5204297252795, -1.6852504844664573E+6, 270.96401878528303,
    -1.7993293040232225E+6, 136.03738601198143, -1.9171542965517605E+6,
    2.9628991482790052, -2.0390252523541185E+6, 191.51230621973772,
    -2.164517407187135E+6, 248.61022884690487, -2.29350213080865E+6,
    37.05303801396397, -2.4264560194140333E+6, 65.202736944833632,
    -2.5633156573407943E+6, 265.416919903718, -2.7036300019300585E+6,
    156.59029936960977, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -2026.3190476019929, 164.37180078403381, -7734.97927650359,
    262.50947824244957, -16904.89605462522, 58.592798101579611,
    -29995.453029220356, 42.623974888100143, -47042.624776989091,
    252.97534152045878, -67572.531584209253, 184.18243375098436,
    -91740.150164185936, 1.5513811590967854, -119956.91188674844,
    143.93603400138886, -151902.05250107418, 269.19275224244365,
    -187293.393580029, 76.335519044104558, -226565.40404064636,
    28.791216843800523, -269825.19172195054, 240.80657303127083,
    -316595.12827332376, 202.91863453296364, -366960.56767052819,
    6.1703398431488425, -421364.74461679213, 123.3386095931174,
    -479543.70234770107, 272.87358915556973, -541160.56835112942,
    95.449738882720112, -606615.04320768581, 17.408246182518869,
    -676082.93884962087, 226.27915627563561, -749093.710736795,
    220.15547251458725, -825661.15430849639, 13.752119651491865,
    -906250.25519011926, 103.04667008885932, -990659.85055265215,
    273.46850886156074, -1.0785060139521523E+6, 115.50195365933341,
    -1.1701446125605588E+6, 8.7332247794550319, -1.265816175048952E+6,
    209.72256808899826, -1.3650679124766488E+6, 235.5020221151552,
    -1.4678417488706266E+6, 24.124768415318719, -1.5746138750637486E+6,
    83.5204297252795, -1.6852504844664573E+6, 270.96401878528303,
    -1.7993293040232225E+6, 136.03738601198143, -1.9171542965517605E+6,
    2.9628991482790052, -2.0390252523541185E+6, 191.51230621973772,
    -2.164517407187135E+6, 248.61022884690487, -2.29350213080865E+6,
    37.05303801396397, -2.4264560194140333E+6, 65.202736944833632,
    -2.5633156573407943E+6, 265.416919903718, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -2026.3190476019929, 164.37180078403381, -7734.97927650359,
    262.50947824244957, -16904.89605462522, 58.592798101579611,
    -29995.453029220356, 42.623974888100143, -47042.624776989091,
    252.97534152045878, -67572.531584209253, 184.18243375098436,
    -91740.150164185936, 1.5513811590967854, -119956.91188674844,
    143.93603400138886, -151902.05250107418, 269.19275224244365,
    -187293.393580029, 76.335519044104558, -226565.40404064636,
    28.791216843800523, -269825.19172195054, 240.80657303127083,
    -316595.12827332376, 202.91863453296364, -366960.56767052819,
    6.1703398431488425, -421364.74461679213, 123.3386095931174,
    -479543.70234770107, 272.87358915556973, -541160.56835112942,
    95.449738882720112, -606615.04320768581, 17.408246182518869,
    -676082.93884962087, 226.27915627563561, -749093.710736795,
    220.15547251458725, -825661.15430849639, 13.752119651491865,
    -906250.25519011926, 103.04667008885932, -990659.85055265215,
    273.46850886156074, -1.0785060139521523E+6, 115.50195365933341,
    -1.1701446125605588E+6, 8.7332247794550319, -1.265816175048952E+6,
    209.72256808899826, -1.3650679124766488E+6, 235.5020221151552,
    -1.4678417488706266E+6, 24.124768415318719, -1.5746138750637486E+6,
    83.5204297252795, -1.6852504844664573E+6, 270.96401878528303,
    -1.7993293040232225E+6, 136.03738601198143, -1.9171542965517605E+6,
    2.9628991482790052, -2.0390252523541185E+6, 191.51230621973772,
    -2.164517407187135E+6, 248.61022884690487, -2.29350213080865E+6,
    37.05303801396397, -2.4264560194140333E+6, 65.202736944833632, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -2026.3190476019929,
    164.37180078403381, -7734.97927650359, 262.50947824244957,
    -16904.89605462522, 58.592798101579611, -29995.453029220356,
    42.623974888100143, -47042.624776989091, 252.97534152045878,
    -67572.531584209253, 184.18243375098436, -91740.150164185936,
    1.5513811590967854, -119956.91188674844, 143.93603400138886,
    -151902.05250107418, 269.19275224244365, -187293.393580029,
    76.335519044104558, -226565.40404064636, 28.791216843800523,
    -269825.19172195054, 240.80657303127083, -316595.12827332376,
    202.91863453296364, -366960.56767052819, 6.1703398431488425,
    -421364.74461679213, 123.3386095931174, -479543.70234770107,
    272.87358915556973, -541160.56835112942, 95.449738882720112,
    -606615.04320768581, 17.408246182518869, -676082.93884962087,
    226.27915627563561, -749093.710736795, 220.15547251458725,
    -825661.15430849639, 13.752119651491865, -906250.25519011926,
    103.04667008885932, -990659.85055265215, 273.46850886156074,
    -1.0785060139521523E+6, 115.50195365933341, -1.1701446125605588E+6,
    8.7332247794550319, -1.265816175048952E+6, 209.72256808899826,
    -1.3650679124766488E+6, 235.5020221151552, -1.4678417488706266E+6,
    24.124768415318719, -1.5746138750637486E+6, 83.5204297252795,
    -1.6852504844664573E+6, 270.96401878528303, -1.7993293040232225E+6,
    136.03738601198143, -1.9171542965517605E+6, 2.9628991482790052,
    -2.0390252523541185E+6, 191.51230621973772, -2.164517407187135E+6,
    248.61022884690487, -2.29350213080865E+6, 37.05303801396397, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -2026.3190476019929, 164.37180078403381, -7734.97927650359,
    262.50947824244957, -16904.89605462522, 58.592798101579611,
    -29995.453029220356, 42.623974888100143, -47042.624776989091,
    252.97534152045878, -67572.531584209253, 184.18243375098436,
    -91740.150164185936, 1.5513811590967854, -119956.91188674844,
    143.93603400138886, -151902.05250107418, 269.19275224244365,
    -187293.393580029, 76.335519044104558, -226565.40404064636,
    28.791216843800523, -269825.19172195054, 240.80657303127083,
    -316595.12827332376, 202.91863453296364, -366960.56767052819,
    6.1703398431488425, -421364.74461679213, 123.3386095931174,
    -479543.70234770107, 272.87358915556973, -541160.56835112942,
    95.449738882720112, -606615.04320768581, 17.408246182518869,
    -676082.93884962087, 226.27915627563561, -749093.710736795,
    220.15547251458725, -825661.15430849639, 13.752119651491865,
    -906250.25519011926, 103.04667008885932, -990659.85055265215,
    273.46850886156074, -1.0785060139521523E+6, 115.50195365933341,
    -1.1701446125605588E+6, 8.7332247794550319, -1.265816175048952E+6,
    209.72256808899826, -1.3650679124766488E+6, 235.5020221151552,
    -1.4678417488706266E+6, 24.124768415318719, -1.5746138750637486E+6,
    83.5204297252795, -1.6852504844664573E+6, 270.96401878528303,
    -1.7993293040232225E+6, 136.03738601198143, -1.9171542965517605E+6,
    2.9628991482790052, -2.0390252523541185E+6, 191.51230621973772,
    -2.164517407187135E+6, 248.61022884690487, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -2026.3190476019929, 164.37180078403381, -7734.97927650359,
    262.50947824244957, -16904.89605462522, 58.592798101579611,
    -29995.453029220356, 42.623974888100143, -47042.624776989091,
    252.97534152045878, -67572.531584209253, 184.18243375098436,
    -91740.150164185936, 1.5513811590967854, -119956.91188674844,
    143.93603400138886, -151902.05250107418, 269.19275224244365,
    -187293.393580029, 76.335519044104558, -226565.40404064636,
    28.791216843800523, -269825.19172195054, 240.80657303127083,
    -316595.12827332376, 202.91863453296364, -366960.56767052819,
    6.1703398431488425, -421364.74461679213, 123.3386095931174,
    -479543.70234770107, 272.87358915556973, -541160.56835112942,
    95.449738882720112, -606615.04320768581, 17.408246182518869,
    -676082.93884962087, 226.27915627563561, -749093.710736795,
    220.15547251458725, -825661.15430849639, 13.752119651491865,
    -906250.25519011926, 103.04667008885932, -990659.85055265215,
    273.46850886156074, -1.0785060139521523E+6, 115.50195365933341,
    -1.1701446125605588E+6, 8.7332247794550319, -1.265816175048952E+6,
    209.72256808899826, -1.3650679124766488E+6, 235.5020221151552,
    -1.4678417488706266E+6, 24.124768415318719, -1.5746138750637486E+6,
    83.5204297252795, -1.6852504844664573E+6, 270.96401878528303,
    -1.7993293040232225E+6, 136.03738601198143, -1.9171542965517605E+6,
    2.9628991482790052, -2.0390252523541185E+6, 191.51230621973772, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -2026.3190476019929, 164.37180078403381, -7734.97927650359,
    262.50947824244957, -16904.89605462522, 58.592798101579611,
    -29995.453029220356, 42.623974888100143, -47042.624776989091,
    252.97534152045878, -67572.531584209253, 184.18243375098436,
    -91740.150164185936, 1.5513811590967854, -119956.91188674844,
    143.93603400138886, -151902.05250107418, 269.19275224244365,
    -187293.393580029, 76.335519044104558, -226565.40404064636,
    28.791216843800523, -269825.19172195054, 240.80657303127083,
    -316595.12827332376, 202.91863453296364, -366960.56767052819,
    6.1703398431488425, -421364.74461679213, 123.3386095931174,
    -479543.70234770107, 272.87358915556973, -541160.56835112942,
    95.449738882720112, -606615.04320768581, 17.408246182518869,
    -676082.93884962087, 226.27915627563561, -749093.710736795,
    220.15547251458725, -825661.15430849639, 13.752119651491865,
    -906250.25519011926, 103.04667008885932, -990659.85055265215,
    273.46850886156074, -1.0785060139521523E+6, 115.50195365933341,
    -1.1701446125605588E+6, 8.7332247794550319, -1.265816175048952E+6,
    209.72256808899826, -1.3650679124766488E+6, 235.5020221151552,
    -1.4678417488706266E+6, 24.124768415318719, -1.5746138750637486E+6,
    83.5204297252795, -1.6852504844664573E+6, 270.96401878528303,
    -1.7993293040232225E+6, 136.03738601198143, -1.9171542965517605E+6,
    2.9628991482790052, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -2026.3190476019929, 164.37180078403381, -7734.97927650359,
    262.50947824244957, -16904.89605462522, 58.592798101579611,
    -29995.453029220356, 42.623974888100143, -47042.624776989091,
    252.97534152045878, -67572.531584209253, 184.18243375098436,
    -91740.150164185936, 1.5513811590967854, -119956.91188674844,
    143.93603400138886, -151902.05250107418, 269.19275224244365,
    -187293.393580029, 76.335519044104558, -226565.40404064636,
    28.791216843800523, -269825.19172195054, 240.80657303127083,
    -316595.12827332376, 202.91863453296364, -366960.56767052819,
    6.1703398431488425, -421364.74461679213, 123.3386095931174,
    -479543.70234770107, 272.87358915556973, -541160.56835112942,
    95.449738882720112, -606615.04320768581, 17.408246182518869,
    -676082.93884962087, 226.27915627563561, -749093.710736795,
    220.15547251458725, -825661.15430849639, 13.752119651491865,
    -906250.25519011926, 103.04667008885932, -990659.85055265215,
    273.46850886156074, -1.0785060139521523E+6, 115.50195365933341,
    -1.1701446125605588E+6, 8.7332247794550319, -1.265816175048952E+6,
    209.72256808899826, -1.3650679124766488E+6, 235.5020221151552,
    -1.4678417488706266E+6, 24.124768415318719, -1.5746138750637486E+6,
    83.5204297252795, -1.6852504844664573E+6, 270.96401878528303,
    -1.7993293040232225E+6, 136.03738601198143, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -2026.3190476019929, 164.37180078403381, -7734.97927650359,
    262.50947824244957, -16904.89605462522, 58.592798101579611,
    -29995.453029220356, 42.623974888100143, -47042.624776989091,
    252.97534152045878, -67572.531584209253, 184.18243375098436,
    -91740.150164185936, 1.5513811590967854, -119956.91188674844,
    143.93603400138886, -151902.05250107418, 269.19275224244365,
    -187293.393580029, 76.335519044104558, -226565.40404064636,
    28.791216843800523, -269825.19172195054, 240.80657303127083,
    -316595.12827332376, 202.91863453296364, -366960.56767052819,
    6.1703398431488425, -421364.74461679213, 123.3386095931174,
    -479543.70234770107, 272.87358915556973, -541160.56835112942,
    95.449738882720112, -606615.04320768581, 17.408246182518869,
    -676082.93884962087, 226.27915627563561, -749093.710736795,
    220.15547251458725, -825661.15430849639, 13.752119651491865,
    -906250.25519011926, 103.04667008885932, -990659.85055265215,
    273.46850886156074, -1.0785060139521523E+6, 115.50195365933341,
    -1.1701446125605588E+6, 8.7332247794550319, -1.265816175048952E+6,
    209.72256808899826, -1.3650679124766488E+6, 235.5020221151552,
    -1.4678417488706266E+6, 24.124768415318719, -1.5746138750637486E+6,
    83.5204297252795, -1.6852504844664573E+6, 270.96401878528303, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -2026.3190476019929,
    164.37180078403381, -7734.97927650359, 262.50947824244957,
    -16904.89605462522, 58.592798101579611, -29995.453029220356,
    42.623974888100143, -47042.624776989091, 252.97534152045878,
    -67572.531584209253, 184.18243375098436, -91740.150164185936,
    1.5513811590967854, -119956.91188674844, 143.93603400138886,
    -151902.05250107418, 269.19275224244365, -187293.393580029,
    76.335519044104558, -226565.40404064636, 28.791216843800523,
    -269825.19172195054, 240.80657303127083, -316595.12827332376,
    202.91863453296364, -366960.56767052819, 6.1703398431488425,
    -421364.74461679213, 123.3386095931174, -479543.70234770107,
    272.87358915556973, -541160.56835112942, 95.449738882720112,
    -606615.04320768581, 17.408246182518869, -676082.93884962087,
    226.27915627563561, -749093.710736795, 220.15547251458725,
    -825661.15430849639, 13.752119651491865, -906250.25519011926,
    103.04667008885932, -990659.85055265215, 273.46850886156074,
    -1.0785060139521523E+6, 115.50195365933341, -1.1701446125605588E+6,
    8.7332247794550319, -1.265816175048952E+6, 209.72256808899826,
    -1.3650679124766488E+6, 235.5020221151552, -1.4678417488706266E+6,
    24.124768415318719, -1.5746138750637486E+6, 83.5204297252795, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -2026.3190476019929, 164.37180078403381, -7734.97927650359,
    262.50947824244957, -16904.89605462522, 58.592798101579611,
    -29995.453029220356, 42.623974888100143, -47042.624776989091,
    252.97534152045878, -67572.531584209253, 184.18243375098436,
    -91740.150164185936, 1.5513811590967854, -119956.91188674844,
    143.93603400138886, -151902.05250107418, 269.19275224244365,
    -187293.393580029, 76.335519044104558, -226565.40404064636,
    28.791216843800523, -269825.19172195054, 240.80657303127083,
    -316595.12827332376, 202.91863453296364, -366960.56767052819,
    6.1703398431488425, -421364.74461679213, 123.3386095931174,
    -479543.70234770107, 272.87358915556973, -541160.56835112942,
    95.449738882720112, -606615.04320768581, 17.408246182518869,
    -676082.93884962087, 226.27915627563561, -749093.710736795,
    220.15547251458725, -825661.15430849639, 13.752119651491865,
    -906250.25519011926, 103.04667008885932, -990659.85055265215,
    273.46850886156074, -1.0785060139521523E+6, 115.50195365933341,
    -1.1701446125605588E+6, 8.7332247794550319, -1.265816175048952E+6,
    209.72256808899826, -1.3650679124766488E+6, 235.5020221151552,
    -1.4678417488706266E+6, 24.124768415318719, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -2026.3190476019929,
    164.37180078403381, -7734.97927650359, 262.50947824244957,
    -16904.89605462522, 58.592798101579611, -29995.453029220356,
    42.623974888100143, -47042.624776989091, 252.97534152045878,
    -67572.531584209253, 184.18243375098436, -91740.150164185936,
    1.5513811590967854, -119956.91188674844, 143.93603400138886,
    -151902.05250107418, 269.19275224244365, -187293.393580029,
    76.335519044104558, -226565.40404064636, 28.791216843800523,
    -269825.19172195054, 240.80657303127083, -316595.12827332376,
    202.91863453296364, -366960.56767052819, 6.1703398431488425,
    -421364.74461679213, 123.3386095931174, -479543.70234770107,
    272.87358915556973, -541160.56835112942, 95.449738882720112,
    -606615.04320768581, 17.408246182518869, -676082.93884962087,
    226.27915627563561, -749093.710736795, 220.15547251458725,
    -825661.15430849639, 13.752119651491865, -906250.25519011926,
    103.04667008885932, -990659.85055265215, 273.46850886156074,
    -1.0785060139521523E+6, 115.50195365933341, -1.1701446125605588E+6,
    8.7332247794550319, -1.265816175048952E+6, 209.72256808899826,
    -1.3650679124766488E+6, 235.5020221151552, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -2026.3190476019929, 164.37180078403381, -7734.97927650359,
    262.50947824244957, -16904.89605462522, 58.592798101579611,
    -29995.453029220356, 42.623974888100143, -47042.624776989091,
    252.97534152045878, -67572.531584209253, 184.18243375098436,
    -91740.150164185936, 1.5513811590967854, -119956.91188674844,
    143.93603400138886, -151902.05250107418, 269.19275224244365,
    -187293.393580029, 76.335519044104558, -226565.40404064636,
    28.791216843800523, -269825.19172195054, 240.80657303127083,
    -316595.12827332376, 202.91863453296364, -366960.56767052819,
    6.1703398431488425, -421364.74461679213, 123.3386095931174,
    -479543.70234770107, 272.87358915556973, -541160.56835112942,
    95.449738882720112, -606615.04320768581, 17.408246182518869,
    -676082.93884962087, 226.27915627563561, -749093.710736795,
    220.15547251458725, -825661.15430849639, 13.752119651491865,
    -906250.25519011926, 103.04667008885932, -990659.85055265215,
    273.46850886156074, -1.0785060139521523E+6, 115.50195365933341,
    -1.1701446125605588E+6, 8.7332247794550319, -1.265816175048952E+6,
    209.72256808899826, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -2026.3190476019929,
    164.37180078403381, -7734.97927650359, 262.50947824244957,
    -16904.89605462522, 58.592798101579611, -29995.453029220356,
    42.623974888100143, -47042.624776989091, 252.97534152045878,
    -67572.531584209253, 184.18243375098436, -91740.150164185936,
    1.5513811590967854, -119956.91188674844, 143.93603400138886,
    -151902.05250107418, 269.19275224244365, -187293.393580029,
    76.335519044104558, -226565.40404064636, 28.791216843800523,
    -269825.19172195054, 240.80657303127083, -316595.12827332376,
    202.91863453296364, -366960.56767052819, 6.1703398431488425,
    -421364.74461679213, 123.3386095931174, -479543.70234770107,
    272.87358915556973, -541160.56835112942, 95.449738882720112,
    -606615.04320768581, 17.408246182518869, -676082.93884962087,
    226.27915627563561, -749093.710736795, 220.15547251458725,
    -825661.15430849639, 13.752119651491865, -906250.25519011926,
    103.04667008885932, -990659.85055265215, 273.46850886156074,
    -1.0785060139521523E+6, 115.50195365933341, -1.1701446125605588E+6,
    8.7332247794550319, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -2026.3190476019929, 164.37180078403381, -7734.97927650359,
    262.50947824244957, -16904.89605462522, 58.592798101579611,
    -29995.453029220356, 42.623974888100143, -47042.624776989091,
    252.97534152045878, -67572.531584209253, 184.18243375098436,
    -91740.150164185936, 1.5513811590967854, -119956.91188674844,
    143.93603400138886, -151902.05250107418, 269.19275224244365,
    -187293.393580029, 76.335519044104558, -226565.40404064636,
    28.791216843800523, -269825.19172195054, 240.80657303127083,
    -316595.12827332376, 202.91863453296364, -366960.56767052819,
    6.1703398431488425, -421364.74461679213, 123.3386095931174,
    -479543.70234770107, 272.87358915556973, -541160.56835112942,
    95.449738882720112, -606615.04320768581, 17.408246182518869,
    -676082.93884962087, 226.27915627563561, -749093.710736795,
    220.15547251458725, -825661.15430849639, 13.752119651491865,
    -906250.25519011926, 103.04667008885932, -990659.85055265215,
    273.46850886156074, -1.0785060139521523E+6, 115.50195365933341, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -2026.3190476019929,
    164.37180078403381, -7734.97927650359, 262.50947824244957,
    -16904.89605462522, 58.592798101579611, -29995.453029220356,
    42.623974888100143, -47042.624776989091, 252.97534152045878,
    -67572.531584209253, 184.18243375098436, -91740.150164185936,
    1.5513811590967854, -119956.91188674844, 143.93603400138886,
    -151902.05250107418, 269.19275224244365, -187293.393580029,
    76.335519044104558, -226565.40404064636, 28.791216843800523,
    -269825.19172195054, 240.80657303127083, -316595.12827332376,
    202.91863453296364, -366960.56767052819, 6.1703398431488425,
    -421364.74461679213, 123.3386095931174, -479543.70234770107,
    272.87358915556973, -541160.56835112942, 95.449738882720112,
    -606615.04320768581, 17.408246182518869, -676082.93884962087,
    226.27915627563561, -749093.710736795, 220.15547251458725,
    -825661.15430849639, 13.752119651491865, -906250.25519011926,
    103.04667008885932, -990659.85055265215, 273.46850886156074, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -2026.3190476019929,
    164.37180078403381, -7734.97927650359, 262.50947824244957,
    -16904.89605462522, 58.592798101579611, -29995.453029220356,
    42.623974888100143, -47042.624776989091, 252.97534152045878,
    -67572.531584209253, 184.18243375098436, -91740.150164185936,
    1.5513811590967854, -119956.91188674844, 143.93603400138886,
    -151902.05250107418, 269.19275224244365, -187293.393580029,
    76.335519044104558, -226565.40404064636, 28.791216843800523,
    -269825.19172195054, 240.80657303127083, -316595.12827332376,
    202.91863453296364, -366960.56767052819, 6.1703398431488425,
    -421364.74461679213, 123.3386095931174, -479543.70234770107,
    272.87358915556973, -541160.56835112942, 95.449738882720112,
    -606615.04320768581, 17.408246182518869, -676082.93884962087,
    226.27915627563561, -749093.710736795, 220.15547251458725,
    -825661.15430849639, 13.752119651491865, -906250.25519011926,
    103.04667008885932, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0, -0.0,
    -0.0, -0.0, -0.0, -0.0, -2026.3190476019929, 164.37180078403381,
    -7734.97927650359, 262.50947824244957, -16904.89605462522,
    58.592798101579611, -29995.453029220356, 42.623974888100143,
    -47042.624776989091, 252.97534152045878, -67572.531584209253,
    184.18243375098436, -91740.150164185936, 1.5513811590967854,
    -119956.91188674844, 143.93603400138886, -151902.05250107418,
    269.19275224244365, -187293.393580029, 76.335519044104558,
    -226565.40404064636, 28.791216843800523, -269825.19172195054,
    240.80657303127083, -316595.12827332376, 202.91863453296364,
    -366960.56767052819, 6.1703398431488425, -421364.74461679213,
    123.3386095931174, -479543.70234770107, 272.87358915556973,
    -541160.56835112942, 95.449738882720112, -606615.04320768581,
    17.408246182518869, -676082.93884962087, 226.27915627563561,
    -749093.710736795, 220.15547251458725, -825661.15430849639,
    13.752119651491865 };

  static const real_T b_Ku[40] = { 3.4465378943201434E+13,
    3.3056839810913125E+13, 3.1679613601292949E+13, 3.0333770378830949E+13,
    2.9019396630790176E+13, 2.7736379820442871E+13, 2.648466500195352E+13,
    2.5264364917575004E+13, 2.4075456962385504E+13, 2.291779305918977E+13,
    2.179139672077652E+13, 2.0696331501874187E+13, 1.9632454821355883E+13,
    1.8599646623608539E+13, 1.7597961468490937E+13, 1.6627336543261508E+13,
    1.5687555089482578E+13, 1.4778551121165781E+13, 1.39003212488498E+13,
    1.3052653378609422E+13, 1.2235322111805943E+13, 1.1448279356715182E+13,
    1.0691380094386463E+13, 9.9643001283344844E+12, 9.2668414404099824E+12,
    8.598889442346127E+12, 7.9601227431076562E+12, 7.3501707379991221E+12,
    6.7688383813961348E+12, 6.215856012276583E+12, 5.6907532485785586E+12,
    5.1931579404114287E+12, 4.7227998621141895E+12, 4.2792081814480664E+12,
    3.8618275535167622E+12, 3.4702719038695654E+12, 3.1041040730421558E+12,
    2.762668687783002E+12, 2.4453778108423516E+12, 2.151761019882541E+12 };

  for (i = 0; i < 40; i++) {
    b_status = 0.0;
    for (k = 0; k < 120; k++) {
      b_status += b_Kr[120 * i + k] * rseq[k];
    }

    c_y = 0.0;
    for (k = 0; k < 61; k++) {
      c_y += 0.0 * vseq[k];
    }

    f[i] = (((((b_Kx[(i << 2) + 1] * xQP[1] + b_Kx[i << 2] * xQP[0]) + b_Kx[(i <<
                2) + 2] * xQP[2]) + b_Kx[(i << 2) + 3] * xQP[3]) + b_status) +
            b_Ku[i] * old_u) + c_y;
  }

  f[40] = 0.0;
  Planilla_3DOF_Crane_qpkwik(f, Bc, iA, zopt, unusedU, &b_status);
  *status = b_status;
  if (b_status <= 0.0) {
    for (i = 0; i < 41; i++) {
      zopt[i] = 0.0;
    }
  }
}

/* Model output function for TID0 */
void Planilla_3DOF_Crane_output0(int_T tid) /* Sample time: [0.01s, 0.0s] */
{
  /* local block i/o variables */
  real_T rtb_HILReadTimebase_o1[3];
  real_T rtb_Gain1_l[5];
  real_T rtb_Gain_k[5];
  real_T rtb_DACLimitV[3];
  real_T v;
  real_T b_p;
  real_T b_voff;
  real_T b_no_md;
  real_T b_md_from_ws;
  real_T b_md_signal;
  real_T b_md_preview;
  real_T b_md_temp;
  real_T time;
  int32_T b_j;
  real_T xQP[5];
  static const real_T b_Kx[10] = { 0.35089188143877492, 0.38430886295426464,
    0.027566829782545675, 0.031133162187039858, 0.40378779355103855,
    0.25980205464209349, 0.28416238871456007, 0.021055867649298461,
    0.023799870939811858, 0.29930668988311265 };

  static const real_T b_Kr[40] = { -0.00091237501692542937,
    -0.0010563776453479425, -0.0036493203027606253, -0.0042241025758442928,
    -0.0082102968022841581, -0.00949895265152361, -0.014594406888480443,
    -0.01687389722553212, -0.022800395558952618, -0.026339106515009238,
    -0.032826652108667462, -0.037881964702830943, -0.044671212276802805,
    -0.051487086752752133, -0.058331760864836012, -0.06713633891553572,
    -0.073805634822383948, -0.084808862898736681, -0.091089826796681456,
    -0.10448110366792593, -0.0, -0.0, -0.00091237501692542937,
    -0.0010563776453479425, -0.0036493203027606253, -0.0042241025758442928,
    -0.0082102968022841581, -0.00949895265152361, -0.014594406888480443,
    -0.01687389722553212, -0.022800395558952618, -0.026339106515009238,
    -0.032826652108667462, -0.037881964702830943, -0.044671212276802805,
    -0.051487086752752133, -0.058331760864836012, -0.06713633891553572,
    -0.073805634822383948, -0.084808862898736681 };

  real_T rtb_MultiportSwitch1;
  real_T rtb_SliderGain;
  real_T rtb_u_select_o;
  real_T rtb_Add1[2];
  real_T rtb_Add2_o[5];
  int32_T i;
  int32_T i_0;

  {                                    /* Sample time: [0.01s, 0.0s] */
    rate_monotonic_scheduler();
  }

  /* S-Function (hil_read_timebase_block): '<S7>/HIL Read Timebase' */

  /* S-Function Block: Planilla_3DOF_Crane/3DOF Crane/3-DOF Crane HIL/HIL Read Timebase (hil_read_timebase_block) */
  {
    t_error result;
    result = hil_task_read(Planilla_3DOF_Crane_DWork.HILReadTimebase_Task, 1,
      rtb_HILReadTimebase_o1,
      &Planilla_3DOF_Crane_DWork.HILReadTimebase_EncoderBuffer[0],
      &Planilla_3DOF_Crane_DWork.HILReadTimebase_DigitalBuffer[0],
      NULL
      );
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(Planilla_3DOF_Crane_M, _rt_error_message);
    } else {
      {
        int_T i1;
        real_T *y1 = rtb_Gain1_l;
        int32_T *dw_EncoderBuffer =
          &Planilla_3DOF_Crane_DWork.HILReadTimebase_EncoderBuffer[0];
        for (i1=0; i1 < 5; i1++) {
          y1[i1] = dw_EncoderBuffer[i1];
        }
      }

      {
        int_T i1;
        real_T *y2 = rtb_Gain_k;
        t_boolean *dw_DigitalBuffer =
          &Planilla_3DOF_Crane_DWork.HILReadTimebase_DigitalBuffer[0];
        for (i1=0; i1 < 5; i1++) {
          y2[i1] = dw_DigitalBuffer[i1];
        }
      }
    }
  }

  /* RateTransition: '<S11>/TmpRTBAtRelational Operator5Inport1' */
  if (Planilla_3DOF_Crane_M->Timing.RateInteraction.TID0_1) {
    Planilla_3DOF_Crane_B.TmpRTBAtRelationalOperator5Inpo =
      Planilla_3DOF_Crane_DWork.TmpRTBAtRelationalOperator5Inpo;
  }

  /* End of RateTransition: '<S11>/TmpRTBAtRelational Operator5Inport1' */

  /* RelationalOperator: '<S21>/Compare' incorporates:
   *  Constant: '<S21>/Constant'
   */
  Planilla_3DOF_Crane_B.Compare = (rtb_Gain_k[0] <
    Planilla_3DOF_Crane_P.Constant_Value_l);

  /* RateTransition: '<S11>/TmpRTBAtRelational Operator4Inport1' */
  if (Planilla_3DOF_Crane_M->Timing.RateInteraction.TID0_1) {
    Planilla_3DOF_Crane_B.TmpRTBAtRelationalOperator4Inpo =
      Planilla_3DOF_Crane_DWork.TmpRTBAtRelationalOperator4Inpo;

    /* RateTransition: '<S11>/TmpRTBAtProduct4Inport2' */
    Planilla_3DOF_Crane_B.TmpRTBAtProduct4Inport2 =
      Planilla_3DOF_Crane_DWork.TmpRTBAtProduct4Inport2_Buffer0;
  }

  /* End of RateTransition: '<S11>/TmpRTBAtRelational Operator4Inport1' */

  /* RelationalOperator: '<S20>/Compare' incorporates:
   *  Constant: '<S20>/Constant'
   */
  Planilla_3DOF_Crane_B.Compare_g = (rtb_Gain_k[4] <
    Planilla_3DOF_Crane_P.Constant_Value_a);

  /* RateTransition: '<S11>/TmpRTBAtRelational Operator6Inport2' */
  if (Planilla_3DOF_Crane_M->Timing.RateInteraction.TID0_1) {
    Planilla_3DOF_Crane_B.TmpRTBAtRelationalOperator6Inpo =
      Planilla_3DOF_Crane_DWork.TmpRTBAtRelationalOperator6Inpo;

    /* RateTransition: '<S11>/TmpRTBAtProduct5Inport2' */
    Planilla_3DOF_Crane_B.TmpRTBAtProduct5Inport2 =
      Planilla_3DOF_Crane_DWork.TmpRTBAtProduct5Inport2_Buffer0;
  }

  /* End of RateTransition: '<S11>/TmpRTBAtRelational Operator6Inport2' */

  /* MultiPortSwitch: '<S11>/Multiport Switch1' incorporates:
   *  Constant: '<S11>/Constant4'
   *  Constant: '<S11>/Constant5'
   *  Constant: '<S11>/Constant6'
   *  Logic: '<S11>/Logical Operator3'
   *  Logic: '<S11>/Logical Operator4'
   *  Product: '<S11>/Product4'
   *  Product: '<S11>/Product5'
   *  RelationalOperator: '<S11>/Relational Operator4'
   *  RelationalOperator: '<S11>/Relational Operator5'
   *  RelationalOperator: '<S11>/Relational Operator6'
   */
  if ((Planilla_3DOF_Crane_B.TmpRTBAtRelationalOperator5Inpo >
       Planilla_3DOF_Crane_P.Constant5_Value) == 0) {
    rtb_MultiportSwitch1 = (real_T)!(Planilla_3DOF_Crane_B.Compare &&
      (Planilla_3DOF_Crane_B.TmpRTBAtRelationalOperator4Inpo <
       Planilla_3DOF_Crane_P.Constant4_Value)) *
      Planilla_3DOF_Crane_B.TmpRTBAtProduct4Inport2;
  } else {
    rtb_MultiportSwitch1 = (real_T)!(Planilla_3DOF_Crane_B.Compare_g &&
      (Planilla_3DOF_Crane_P.Constant6_Value <
       Planilla_3DOF_Crane_B.TmpRTBAtRelationalOperator6Inpo)) *
      Planilla_3DOF_Crane_B.TmpRTBAtProduct5Inport2;
  }

  /* End of MultiPortSwitch: '<S11>/Multiport Switch1' */

  /* Gain: '<S6>/Slider Gain' incorporates:
   *  Constant: '<Root>/Trolley Setpoint Constant '
   */
  rtb_SliderGain = Planilla_3DOF_Crane_P.SliderGain_Gain *
    Planilla_3DOF_Crane_P.TrolleySetpointConstant_Value;

  /* RelationalOperator: '<S19>/Compare' incorporates:
   *  Constant: '<S19>/Constant'
   */
  Planilla_3DOF_Crane_B.Compare_j = (rtb_Gain_k[1] <
    Planilla_3DOF_Crane_P.Constant_Value_e);

  /* RelationalOperator: '<S17>/Compare' incorporates:
   *  Constant: '<S17>/Constant'
   */
  Planilla_3DOF_Crane_B.Compare_f = (rtb_Gain_k[2] <
    Planilla_3DOF_Crane_P.Constant_Value_g);

  /* MultiPortSwitch: '<S11>/Multiport Switch2' incorporates:
   *  Constant: '<S11>/Constant1'
   *  Constant: '<S11>/Constant2'
   *  Constant: '<S11>/Constant3'
   *  Logic: '<S11>/Logical Operator1'
   *  Logic: '<S11>/Logical Operator2'
   *  Product: '<S11>/Product2'
   *  Product: '<S11>/Product3'
   *  RelationalOperator: '<S11>/Relational Operator1'
   *  RelationalOperator: '<S11>/Relational Operator2'
   *  RelationalOperator: '<S11>/Relational Operator3'
   */
  if ((rtb_SliderGain > Planilla_3DOF_Crane_P.Constant2_Value) == 0) {
    rtb_SliderGain *= (real_T)!(Planilla_3DOF_Crane_B.Compare_j &&
      (rtb_SliderGain < Planilla_3DOF_Crane_P.Constant1_Value));
  } else {
    rtb_SliderGain *= (real_T)!(Planilla_3DOF_Crane_B.Compare_f &&
      (Planilla_3DOF_Crane_P.Constant3_Value < rtb_SliderGain));
  }

  /* End of MultiPortSwitch: '<S11>/Multiport Switch2' */

  /* Gain: '<S12>/Encoder Calibration' */
  for (i = 0; i < 5; i++) {
    Planilla_3DOF_Crane_B.EncoderCalibration[i] =
      Planilla_3DOF_Crane_P.EncoderCalibration_Gain[i] * rtb_Gain1_l[i];
  }

  /* End of Gain: '<S12>/Encoder Calibration' */

  /* RelationalOperator: '<S18>/Compare' incorporates:
   *  Constant: '<S18>/Constant'
   */
  Planilla_3DOF_Crane_B.Compare_p = (rtb_Gain_k[3] <
    Planilla_3DOF_Crane_P.Constant_Value_j);

  /* MultiPortSwitch: '<S11>/Multiport Switch' incorporates:
   *  Constant: '<Root>/Payload Setpoint Constant '
   *  Constant: '<S11>/Constant'
   *  Constant: '<S11>/Constant7'
   *  Constant: '<S11>/Constant8'
   *  Logic: '<S11>/Logical Operator'
   *  Product: '<S11>/Product1'
   *  Product: '<S11>/Product6'
   *  RelationalOperator: '<S11>/Relational Operator'
   *  RelationalOperator: '<S11>/Relational Operator7'
   *  RelationalOperator: '<S11>/Relational Operator8'
   */
  if ((Planilla_3DOF_Crane_P.PayloadSetpointConstant_Value >
       Planilla_3DOF_Crane_P.Constant7_Value) == 0) {
    rtb_u_select_o = (real_T)(Planilla_3DOF_Crane_P.Constant8_Value <
      Planilla_3DOF_Crane_B.EncoderCalibration[2]) *
      Planilla_3DOF_Crane_P.PayloadSetpointConstant_Value;
  } else {
    rtb_u_select_o = (real_T)!(Planilla_3DOF_Crane_B.Compare_p &&
      (Planilla_3DOF_Crane_P.Constant_Value <
       Planilla_3DOF_Crane_P.PayloadSetpointConstant_Value)) *
      Planilla_3DOF_Crane_P.PayloadSetpointConstant_Value;
  }

  /* End of MultiPortSwitch: '<S11>/Multiport Switch' */

  /* Saturate: '<S8>/AMPAQ Current  Limit (A)' */
  rtb_DACLimitV[0] = rtb_MultiportSwitch1 >=
    Planilla_3DOF_Crane_P.AMPAQCurrentLimitA_UpperSat ?
    Planilla_3DOF_Crane_P.AMPAQCurrentLimitA_UpperSat : rtb_MultiportSwitch1 <=
    Planilla_3DOF_Crane_P.AMPAQCurrentLimitA_LowerSat ?
    Planilla_3DOF_Crane_P.AMPAQCurrentLimitA_LowerSat : rtb_MultiportSwitch1;
  rtb_DACLimitV[1] = rtb_SliderGain >=
    Planilla_3DOF_Crane_P.AMPAQCurrentLimitA_UpperSat ?
    Planilla_3DOF_Crane_P.AMPAQCurrentLimitA_UpperSat : rtb_SliderGain <=
    Planilla_3DOF_Crane_P.AMPAQCurrentLimitA_LowerSat ?
    Planilla_3DOF_Crane_P.AMPAQCurrentLimitA_LowerSat : rtb_SliderGain;
  rtb_DACLimitV[2] = rtb_u_select_o >=
    Planilla_3DOF_Crane_P.AMPAQCurrentLimitA_UpperSat ?
    Planilla_3DOF_Crane_P.AMPAQCurrentLimitA_UpperSat : rtb_u_select_o <=
    Planilla_3DOF_Crane_P.AMPAQCurrentLimitA_LowerSat ?
    Planilla_3DOF_Crane_P.AMPAQCurrentLimitA_LowerSat : rtb_u_select_o;

  /* Gain: '<S8>/Amps to Volts' incorporates:
   *  Gain: '<S8>/Gain1'
   */
  rtb_DACLimitV[0] = Planilla_3DOF_Crane_P.Gain1_Gain * rtb_DACLimitV[0] *
    Planilla_3DOF_Crane_P.AmpstoVolts_Gain;
  rtb_DACLimitV[1] = Planilla_3DOF_Crane_P.Gain1_Gain * rtb_DACLimitV[1] *
    Planilla_3DOF_Crane_P.AmpstoVolts_Gain;
  rtb_DACLimitV[2] = Planilla_3DOF_Crane_P.Gain1_Gain * rtb_DACLimitV[2] *
    Planilla_3DOF_Crane_P.AmpstoVolts_Gain;

  /* Saturate: '<S8>/DAC Limit (V)' */
  rtb_DACLimitV[0] = rtb_DACLimitV[0] >=
    Planilla_3DOF_Crane_P.DACLimitV_UpperSat ?
    Planilla_3DOF_Crane_P.DACLimitV_UpperSat : rtb_DACLimitV[0] <=
    Planilla_3DOF_Crane_P.DACLimitV_LowerSat ?
    Planilla_3DOF_Crane_P.DACLimitV_LowerSat : rtb_DACLimitV[0];
  rtb_DACLimitV[1] = rtb_DACLimitV[1] >=
    Planilla_3DOF_Crane_P.DACLimitV_UpperSat ?
    Planilla_3DOF_Crane_P.DACLimitV_UpperSat : rtb_DACLimitV[1] <=
    Planilla_3DOF_Crane_P.DACLimitV_LowerSat ?
    Planilla_3DOF_Crane_P.DACLimitV_LowerSat : rtb_DACLimitV[1];
  rtb_DACLimitV[2] = rtb_DACLimitV[2] >=
    Planilla_3DOF_Crane_P.DACLimitV_UpperSat ?
    Planilla_3DOF_Crane_P.DACLimitV_UpperSat : rtb_DACLimitV[2] <=
    Planilla_3DOF_Crane_P.DACLimitV_LowerSat ?
    Planilla_3DOF_Crane_P.DACLimitV_LowerSat : rtb_DACLimitV[2];

  /* S-Function (hil_write_block): '<S7>/HIL Write' */

  /* S-Function Block: Planilla_3DOF_Crane/3DOF Crane/3-DOF Crane HIL/HIL Write (hil_write_block) */
  {
    t_error result;
    Planilla_3DOF_Crane_DWork.HILWrite_DigitalBuffer[0] =
      (Planilla_3DOF_Crane_P.EnableAmp_Value[0] != 0);
    Planilla_3DOF_Crane_DWork.HILWrite_DigitalBuffer[1] =
      (Planilla_3DOF_Crane_P.EnableAmp_Value[1] != 0);
    Planilla_3DOF_Crane_DWork.HILWrite_DigitalBuffer[2] =
      (Planilla_3DOF_Crane_P.EnableAmp_Value[2] != 0);
    Planilla_3DOF_Crane_DWork.HILWrite_DigitalBuffer[3] =
      (Planilla_3DOF_Crane_P.EnableAmp_Value[3] != 0);
    result = hil_write(Planilla_3DOF_Crane_DWork.HILInitialize_Card,
                       Planilla_3DOF_Crane_P.HILWrite_AnalogChannels, 3U,
                       NULL, 0U,
                       Planilla_3DOF_Crane_P.HILWrite_DigitalChannels, 4U,
                       NULL, 0U,
                       rtb_DACLimitV,
                       NULL,
                       &Planilla_3DOF_Crane_DWork.HILWrite_DigitalBuffer[0],
                       NULL
                       );
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(Planilla_3DOF_Crane_M, _rt_error_message);
    }
  }

  /* Gain: '<S8>/Commanded Current (A)' */
  Planilla_3DOF_Crane_B.CommandedCurrentA[0] =
    Planilla_3DOF_Crane_P.CommandedCurrentA_Gain * rtb_DACLimitV[0];
  Planilla_3DOF_Crane_B.CommandedCurrentA[1] =
    Planilla_3DOF_Crane_P.CommandedCurrentA_Gain * rtb_DACLimitV[1];
  Planilla_3DOF_Crane_B.CommandedCurrentA[2] =
    Planilla_3DOF_Crane_P.CommandedCurrentA_Gain * rtb_DACLimitV[2];

  /* Gain: '<S9>/Current Sensitivity (A//V)' */
  Planilla_3DOF_Crane_B.CurrentSensitivityAV[0] =
    Planilla_3DOF_Crane_P.CurrentSensitivityAV_Gain * rtb_HILReadTimebase_o1[0];
  Planilla_3DOF_Crane_B.CurrentSensitivityAV[1] =
    Planilla_3DOF_Crane_P.CurrentSensitivityAV_Gain * rtb_HILReadTimebase_o1[1];
  Planilla_3DOF_Crane_B.CurrentSensitivityAV[2] =
    Planilla_3DOF_Crane_P.CurrentSensitivityAV_Gain * rtb_HILReadTimebase_o1[2];

  /* Gain: '<S14>/Gain' */
  Planilla_3DOF_Crane_B.Gain = Planilla_3DOF_Crane_P.Gain_Gain *
    Planilla_3DOF_Crane_B.EncoderCalibration[0];

  /* Gain: '<S15>/Gain' */
  Planilla_3DOF_Crane_B.Gain_c = Planilla_3DOF_Crane_P.Gain_Gain_p *
    Planilla_3DOF_Crane_B.EncoderCalibration[4];

  /* Gain: '<S16>/Gain' */
  Planilla_3DOF_Crane_B.Gain_f = Planilla_3DOF_Crane_P.Gain_Gain_c *
    Planilla_3DOF_Crane_B.EncoderCalibration[3];

  /* Constant: '<Root>/x_ref' */
  Planilla_3DOF_Crane_B.x_ref = Planilla_3DOF_Crane_P.x_ref_Value;

  /* Constant: '<Root>/theta_ref' */
  Planilla_3DOF_Crane_B.theta_ref = Planilla_3DOF_Crane_P.theta_ref_Value;

  /* Constant: '<Root>/alpha_ref' */
  Planilla_3DOF_Crane_B.alpha_ref = Planilla_3DOF_Crane_P.alpha_ref_Value;

  /* Constant: '<Root>/gamma_ref' */
  Planilla_3DOF_Crane_B.gamma_ref = Planilla_3DOF_Crane_P.gamma_ref_Value;

  /* RateTransition: '<S22>/TmpRTBAtref_and_mdInport1' */
  if (Planilla_3DOF_Crane_M->Timing.RateInteraction.TID0_1) {
    Planilla_3DOF_Crane_B.TmpRTBAtref_and_mdInport1[0] =
      Planilla_3DOF_Crane_B.theta_ref;
    Planilla_3DOF_Crane_B.TmpRTBAtref_and_mdInport1[1] =
      Planilla_3DOF_Crane_B.alpha_ref;

    /* RateTransition: '<S25>/TmpRTBAtAdd1Inport1' */
    Planilla_3DOF_Crane_B.TmpRTBAtAdd1Inport1[0] =
      Planilla_3DOF_Crane_DWork.TmpRTBAtAdd1Inport1_Buffer0[0];
    Planilla_3DOF_Crane_B.TmpRTBAtAdd1Inport1[1] =
      Planilla_3DOF_Crane_DWork.TmpRTBAtAdd1Inport1_Buffer0[1];

    /* RateTransition: '<S25>/TmpRTBAtAdd1Inport2' */
    Planilla_3DOF_Crane_B.TmpRTBAtAdd1Inport2[0] =
      Planilla_3DOF_Crane_DWork.TmpRTBAtAdd1Inport2_Buffer0[0];
    Planilla_3DOF_Crane_B.TmpRTBAtAdd1Inport2[1] =
      Planilla_3DOF_Crane_DWork.TmpRTBAtAdd1Inport2_Buffer0[1];

    /* RateTransition: '<S25>/TmpRTBAtAdd1Inport3' */
    Planilla_3DOF_Crane_B.TmpRTBAtAdd1Inport3[0] =
      Planilla_3DOF_Crane_DWork.TmpRTBAtAdd1Inport3_Buffer0[0];
    Planilla_3DOF_Crane_B.TmpRTBAtAdd1Inport3[1] =
      Planilla_3DOF_Crane_DWork.TmpRTBAtAdd1Inport3_Buffer0[1];
  }

  /* End of RateTransition: '<S22>/TmpRTBAtref_and_mdInport1' */

  /* Sum: '<S25>/Add1' */
  rtb_Add1[0] = ((Planilla_3DOF_Crane_B.Gain -
                  Planilla_3DOF_Crane_B.TmpRTBAtAdd1Inport1[0]) -
                 Planilla_3DOF_Crane_B.TmpRTBAtAdd1Inport2[0]) -
    Planilla_3DOF_Crane_B.TmpRTBAtAdd1Inport3[0];
  rtb_Add1[1] = ((Planilla_3DOF_Crane_B.Gain_f -
                  Planilla_3DOF_Crane_B.TmpRTBAtAdd1Inport1[1]) -
                 Planilla_3DOF_Crane_B.TmpRTBAtAdd1Inport2[1]) -
    Planilla_3DOF_Crane_B.TmpRTBAtAdd1Inport3[1];

  /* RateTransition: '<S25>/TmpRTBAtGain5Inport1' */
  if (Planilla_3DOF_Crane_M->Timing.RateInteraction.TID0_1) {
    Planilla_3DOF_Crane_B.TmpRTBAtGain5Inport1[0] = rtb_Add1[0];
    Planilla_3DOF_Crane_B.TmpRTBAtGain5Inport1[1] = rtb_Add1[1];
  }

  /* End of RateTransition: '<S25>/TmpRTBAtGain5Inport1' */

  /* SignalConversion: '<S28>/TmpSignal ConversionAt SFunction Inport1' incorporates:
   *  MATLAB Function: '<S26>/ref_and_md'
   */
  rtb_Add1[0] = Planilla_3DOF_Crane_B.x_ref;
  rtb_Add1[1] = Planilla_3DOF_Crane_B.gamma_ref;

  /* MATLAB Function: '<S26>/ref_and_md' incorporates:
   *  Constant: '<S5>/md_zero'
   *  Memory: '<S26>/Memory1'
   */
  Planilla_3DOF_Crane_DWork.sfEvent = CALL_EVENT;

  /* MATLAB Function 'MPC Controller/MPC/ref_and_md': '<S28>:1' */
  rtb_SliderGain = Planilla_3DOF_Crane_P.md_zero_Value_c;
  rtb_u_select_o = Planilla_3DOF_Crane_P.SFunction_p7_b;
  rtb_MultiportSwitch1 = Planilla_3DOF_Crane_P.SFunction_p8_b;
  b_p = Planilla_3DOF_Crane_P.SFunction_p10_i;
  b_voff = Planilla_3DOF_Crane_P.SFunction_p16_a;
  b_no_md = Planilla_3DOF_Crane_P.SFunction_p5_g;
  b_md_from_ws = Planilla_3DOF_Crane_P.SFunction_p1_h;
  b_md_signal = Planilla_3DOF_Crane_P.SFunction_p3_k;
  b_md_preview = Planilla_3DOF_Crane_P.SFunction_p2_a;
  b_md_temp = Planilla_3DOF_Crane_P.SFunction_p4_c;
  time = Planilla_3DOF_Crane_DWork.Memory1_PreviousInput_a;
  memcpy((void *)(&Planilla_3DOF_Crane_B.vseq[0]), (void *)
         Planilla_3DOF_Crane_P.SFunction_p15_m, 11U * sizeof(real_T));
  memcpy((void *)(&Planilla_3DOF_Crane_B.rseq[0]), (void *)
         Planilla_3DOF_Crane_P.SFunction_p11_a, 20U * sizeof(real_T));
  v = Planilla_3DOF_Crane_P.SFunction_p4_c;
  if (Planilla_3DOF_Crane_P.SFunction_p9_n) {
    rtb_SliderGain = Planilla_3DOF_Crane_DWork.Memory1_PreviousInput_a + 1.0;
  } else {
    if (Planilla_3DOF_Crane_P.SFunction_p12_k == 0.0) {
      for (b_j = 0; b_j <= (int32_T)((Planilla_3DOF_Crane_P.SFunction_p10_i -
             1.0) + 1.0) - 1; b_j++) {
        for (i = 0; i <= (int32_T)Planilla_3DOF_Crane_P.SFunction_p8_b - 1; i++)
        {
          if (Planilla_3DOF_Crane_P.SFunction_p6_p == 1.0) {
            Planilla_3DOF_Crane_B.rseq[(int32_T)((1.0 + (real_T)i) + (real_T)b_j
              * Planilla_3DOF_Crane_P.SFunction_p8_b) - 1] = 0.0;
          } else {
            Planilla_3DOF_Crane_B.rseq[(int32_T)((1.0 + (real_T)i) + (real_T)b_j
              * Planilla_3DOF_Crane_P.SFunction_p8_b) - 1] = rtb_Add1[(int32_T)
              (1.0 + (real_T)i) - 1] - Planilla_3DOF_Crane_P.SFunction_p17_d
              [(int32_T)(1.0 + (real_T)i) - 1];
          }
        }
      }
    } else if (Planilla_3DOF_Crane_P.SFunction_p13_k == 0.0) {
      Planilla_3DOF_Crane_mpc_getrv_d(&Planilla_3DOF_Crane_B.rseq[0],
        Planilla_3DOF_Crane_P.SFunction_p14_k,
        Planilla_3DOF_Crane_DWork.Memory1_PreviousInput_a,
        Planilla_3DOF_Crane_DWork.Memory1_PreviousInput_a, 0.0);
      for (i = 0; i <= (int32_T)(b_p - 1.0) - 1; i++) {
        for (b_j = 0; b_j <= (int32_T)rtb_MultiportSwitch1 - 1; b_j++) {
          Planilla_3DOF_Crane_B.rseq[(int32_T)((1.0 + (real_T)b_j) + (1.0 +
            (real_T)i) * rtb_MultiportSwitch1) - 1] =
            Planilla_3DOF_Crane_B.rseq[(int32_T)(1.0 + (real_T)b_j) - 1];
        }
      }
    } else {
      Planilla_3DOF_Crane_mpc_getrv_d(&Planilla_3DOF_Crane_B.rseq[0],
        Planilla_3DOF_Crane_P.SFunction_p14_k,
        Planilla_3DOF_Crane_DWork.Memory1_PreviousInput_a,
        (Planilla_3DOF_Crane_DWork.Memory1_PreviousInput_a +
         Planilla_3DOF_Crane_P.SFunction_p10_i) - 1.0, 0.0);
    }

    if (b_md_from_ws == 0.0) {
      for (i = 0; i <= (int32_T)(b_p + 1.0) - 1; i++) {
        for (b_j = 0; b_j <= (int32_T)((rtb_u_select_o - 2.0) + 1.0) - 1; b_j++)
        {
          if (b_no_md == 1.0) {
            Planilla_3DOF_Crane_B.vseq[(int32_T)(((real_T)b_j + (real_T)i *
              rtb_u_select_o) + 1.0) - 1] = 0.0;
          } else {
            Planilla_3DOF_Crane_B.vseq[(int32_T)(((real_T)b_j + (real_T)i *
              rtb_u_select_o) + 1.0) - 1] = rtb_SliderGain - b_voff;
          }
        }
      }
    } else if (b_md_preview == 0.0) {
      Planilla_3DOF_Cran_mpc_getrv_dw(&Planilla_3DOF_Crane_B.vseq[0],
        b_md_signal, time, time, 1.0);
      for (i = 0; i <= (int32_T)b_p - 1; i++) {
        for (b_j = 0; b_j <= (int32_T)((rtb_u_select_o - 1.0) + 1.0) - 1; b_j++)
        {
          Planilla_3DOF_Crane_B.vseq[(int32_T)(((real_T)b_j + (1.0 + (real_T)i) *
            rtb_u_select_o) + 1.0) - 1] = b_md_temp;
        }
      }
    } else {
      Planilla_3DOF_Cran_mpc_getrv_dw(&Planilla_3DOF_Crane_B.vseq[0],
        b_md_signal, time, time + b_p, 1.0);
    }

    for (i = 0; i <= (int32_T)rtb_u_select_o - 1; i++) {
      v = Planilla_3DOF_Crane_B.vseq[(int32_T)(1.0 + (real_T)i) - 1];
    }

    rtb_SliderGain = time + 1.0;
  }

  /* '<S28>:1:15' */
  Planilla_3DOF_Crane_B.v = v;
  Planilla_3DOF_Crane_B.next_t = rtb_SliderGain;

  /* Memory: '<S29>/Memory' */
  for (i = 0; i < 5; i++) {
    rtb_Gain_k[i] = Planilla_3DOF_Crane_DWork.Memory_PreviousInput_m[i];
  }

  /* End of Memory: '<S29>/Memory' */

  /* Gain: '<S29>/Gain3' */
  for (i_0 = 0; i_0 < 2; i_0++) {
    rtb_Add1[i_0] = 0.0;
    for (i = 0; i < 5; i++) {
      rtb_Add1[i_0] += Planilla_3DOF_Crane_P.Gain3_Gain[(i << 1) + i_0] *
        rtb_Gain_k[i];
    }
  }

  /* End of Gain: '<S29>/Gain3' */

  /* Sum: '<S29>/Add1' incorporates:
   *  Constant: '<S29>/ym offset'
   *  Gain: '<S29>/Gain4'
   */
  rtb_Add1[0] = ((Planilla_3DOF_Crane_B.EncoderCalibration[1] - rtb_Add1[0]) -
                 Planilla_3DOF_Crane_P.Gain4_Gain[0] * Planilla_3DOF_Crane_B.v)
    - Planilla_3DOF_Crane_P.ymoffset_Value[0];
  rtb_Add1[1] = ((Planilla_3DOF_Crane_B.Gain_c - rtb_Add1[1]) -
                 Planilla_3DOF_Crane_P.Gain4_Gain[1] * Planilla_3DOF_Crane_B.v)
    - Planilla_3DOF_Crane_P.ymoffset_Value[1];
  for (i_0 = 0; i_0 < 5; i_0++) {
    /* Gain: '<S29>/Gain5' */
    rtb_Gain1_l[i_0] = 0.0;
    rtb_Gain1_l[i_0] += Planilla_3DOF_Crane_P.Gain5_Gain_e[i_0] * rtb_Add1[0];
    rtb_Gain1_l[i_0] += Planilla_3DOF_Crane_P.Gain5_Gain_e[i_0 + 5] * rtb_Add1[1];

    /* Sum: '<S29>/Add2' */
    rtb_Add2_o[i_0] = rtb_Gain_k[i_0] + rtb_Gain1_l[i_0];
  }

  /* MATLAB Function: '<S26>/optimizer' incorporates:
   *  Memory: '<S26>/Memory'
   *  UnitDelay: '<S26>/Last MVs'
   */
  Planilla_3DOF_Crane_DWork.sfEvent_b = CALL_EVENT;

  /* MATLAB Function 'MPC Controller/MPC/optimizer': '<S27>:1' */
  for (i = 0; i < 10; i++) {
    Planilla_3DOF_Crane_B.useq[i] = 0.0;
  }

  for (i = 0; i < 5; i++) {
    xQP[i] = rtb_Add2_o[i];
  }

  for (b_j = 0; b_j < 2; b_j++) {
    rtb_SliderGain = 0.0;
    for (i_0 = 0; i_0 < 5; i_0++) {
      rtb_SliderGain += b_Kx[5 * b_j + i_0] * xQP[i_0];
    }

    rtb_u_select_o = 0.0;
    for (i_0 = 0; i_0 < 20; i_0++) {
      rtb_u_select_o += b_Kr[20 * b_j + i_0] * Planilla_3DOF_Crane_B.rseq[i_0];
    }

    rtb_MultiportSwitch1 = 0.0;
    for (i = 0; i < 11; i++) {
      rtb_MultiportSwitch1 += 0.0 * Planilla_3DOF_Crane_B.vseq[i];
    }

    rtb_Add1[b_j] = ((-0.010880999097244333 * (real_T)b_j + 0.048824504210637859)
                     * Planilla_3DOF_Crane_DWork.LastMVs_DSTATE_g +
                     (rtb_SliderGain + rtb_u_select_o)) + rtb_MultiportSwitch1;
  }

  /* '<S27>:1:23' */
  Planilla_3DOF_Crane_B.u = ((0.0 - 44.487632787006589 * rtb_Add1[0]) -
    -42.615012434099441 * rtb_Add1[1]) +
    Planilla_3DOF_Crane_DWork.LastMVs_DSTATE_g;

  /* '<S27>:1:23' */
  Planilla_3DOF_Crane_B.cost = 0.0;

  /* '<S27>:1:23' */
  Planilla_3DOF_Crane_B.status = 1.0;

  /* '<S27>:1:23' */
  Planilla_3DOF_Crane_B.iAout[0] =
    Planilla_3DOF_Crane_DWork.Memory_PreviousInput_j[0];
  Planilla_3DOF_Crane_B.iAout[1] =
    Planilla_3DOF_Crane_DWork.Memory_PreviousInput_j[1];
  Planilla_3DOF_Crane_B.iAout[2] =
    Planilla_3DOF_Crane_DWork.Memory_PreviousInput_j[2];

  /* End of MATLAB Function: '<S26>/optimizer' */

  /* Switch: '<S26>/u_select' incorporates:
   *  Constant: '<S26>/mv_inport'
   *  Constant: '<S5>/mv_zero'
   */
  if (Planilla_3DOF_Crane_P.mv_inport_Value_a >=
      Planilla_3DOF_Crane_P.u_select_Threshold_p) {
    rtb_MultiportSwitch1 = Planilla_3DOF_Crane_P.mv_zero_Value_d;
  } else {
    rtb_MultiportSwitch1 = Planilla_3DOF_Crane_B.u;
  }

  /* End of Switch: '<S26>/u_select' */

  /* Bias: '<S26>/mv_bias' */
  Planilla_3DOF_Crane_B.mv_bias_l = rtb_MultiportSwitch1 +
    Planilla_3DOF_Crane_P.mv_bias_Bias_c;
  for (i_0 = 0; i_0 < 5; i_0++) {
    /* Gain: '<S29>/Gain' */
    rtb_Gain_k[i_0] = 0.0;
    for (i = 0; i < 5; i++) {
      rtb_Gain_k[i_0] += Planilla_3DOF_Crane_P.Gain_Gain_o[5 * i + i_0] *
        rtb_Add2_o[i];
    }

    /* End of Gain: '<S29>/Gain' */

    /* Gain: '<S29>/Gain1' */
    rtb_Gain1_l[i_0] = Planilla_3DOF_Crane_P.Gain1_Gain_f[i_0] *
      Planilla_3DOF_Crane_B.mv_bias_l;

    /* Sum: '<S29>/Add' incorporates:
     *  Gain: '<S29>/Gain2'
     */
    Planilla_3DOF_Crane_B.Add_l[i_0] = (rtb_Gain_k[i_0] + rtb_Gain1_l[i_0]) +
      Planilla_3DOF_Crane_P.Gain2_Gain_e[i_0] * Planilla_3DOF_Crane_B.v;
  }

  /* tid is required for a uniform function interface.
   * Argument tid is not used in the function. */
  UNUSED_PARAMETER(tid);
}

/* Model update function for TID0 */
void Planilla_3DOF_Crane_update0(int_T tid) /* Sample time: [0.01s, 0.0s] */
{
  int32_T i;

  /* Update for Memory: '<S26>/Memory1' */
  Planilla_3DOF_Crane_DWork.Memory1_PreviousInput_a =
    Planilla_3DOF_Crane_B.next_t;

  /* Update for Memory: '<S29>/Memory' */
  for (i = 0; i < 5; i++) {
    Planilla_3DOF_Crane_DWork.Memory_PreviousInput_m[i] =
      Planilla_3DOF_Crane_B.Add_l[i];
  }

  /* End of Update for Memory: '<S29>/Memory' */

  /* Update for UnitDelay: '<S26>/Last MVs' */
  Planilla_3DOF_Crane_DWork.LastMVs_DSTATE_g = Planilla_3DOF_Crane_B.mv_bias_l;

  /* Update for Memory: '<S26>/Memory' */
  Planilla_3DOF_Crane_DWork.Memory_PreviousInput_j[0] =
    Planilla_3DOF_Crane_B.iAout[0];
  Planilla_3DOF_Crane_DWork.Memory_PreviousInput_j[1] =
    Planilla_3DOF_Crane_B.iAout[1];
  Planilla_3DOF_Crane_DWork.Memory_PreviousInput_j[2] =
    Planilla_3DOF_Crane_B.iAout[2];

  /* Update absolute time */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++Planilla_3DOF_Crane_M->Timing.clockTick0)) {
    ++Planilla_3DOF_Crane_M->Timing.clockTickH0;
  }

  Planilla_3DOF_Crane_M->Timing.t[0] = Planilla_3DOF_Crane_M->Timing.clockTick0 *
    Planilla_3DOF_Crane_M->Timing.stepSize0 +
    Planilla_3DOF_Crane_M->Timing.clockTickH0 *
    Planilla_3DOF_Crane_M->Timing.stepSize0 * 4294967296.0;

  /* tid is required for a uniform function interface.
   * Argument tid is not used in the function. */
  UNUSED_PARAMETER(tid);
}

/* Model output function for TID1 */
void Planilla_3DOF_Crane_output1(int_T tid) /* Sample time: [0.5s, 0.0s] */
{
  real_T v;
  real_T md;
  real_T b_nv;
  real_T b_ny;
  real_T b_md_signal;
  real_T b_md_preview;
  real_T b_md_temp;
  real_T time;
  int32_T b_j;
  real_T xQP[4];
  real_T zopt[41];
  real_T f[41];
  boolean_T iAout[441];
  static const real_T b[400] = { -120.0, -3.0, -120.0, -3.0, -120.0, -3.0,
    -120.0, -3.0, -120.0, -3.0, -120.0, -3.0, -120.0, -3.0, -120.0, -3.0, -120.0,
    -3.0, -120.0, -3.0, -120.0, -3.0, -120.0, -3.0, -120.0, -3.0, -120.0, -3.0,
    -120.0, -3.0, -120.0, -3.0, -120.0, -3.0, -120.0, -3.0, -120.0, -3.0, -120.0,
    -3.0, -120.0, -3.0, -120.0, -3.0, -120.0, -3.0, -120.0, -3.0, -120.0, -3.0,
    -120.0, -3.0, -120.0, -3.0, -120.0, -3.0, -120.0, -3.0, -120.0, -3.0, -120.0,
    -3.0, -120.0, -3.0, -120.0, -3.0, -120.0, -3.0, -120.0, -3.0, -120.0, -3.0,
    -120.0, -3.0, -120.0, -3.0, -120.0, -3.0, -120.0, -3.0, -120.0, -3.0, -120.0,
    -3.0, -120.0, -3.0, -120.0, -3.0, -120.0, -3.0, -120.0, -3.0, -120.0, -3.0,
    -120.0, -3.0, -120.0, -3.0, -120.0, -3.0, -120.0, -3.0, -120.0, -3.0, -120.0,
    -3.0, -120.0, -3.0, -120.0, -3.0, -120.0, -3.0, -120.0, -3.0, -120.0, -3.0,
    -120.0, -3.0, -120.0, -3.0, -120.0, -3.0, -120.0, -3.0, -120.0, -3.0, -120.0,
    -3.0, -120.0, -3.0, -120.0, -3.0, -120.0, -3.0, -120.0, -3.0, -120.0, -3.0,
    -120.0, -3.0, -120.0, -3.0, -120.0, -3.0, -120.0, -3.0, -120.0, -3.0, -120.0,
    -3.0, -120.0, -3.0, -120.0, -3.0, -120.0, -3.0, -120.0, -3.0, -120.0, -3.0,
    -120.0, -3.0, -120.0, -3.0, -120.0, -3.0, -120.0, -3.0, -120.0, -3.0, -120.0,
    -3.0, -120.0, -3.0, -120.0, -3.0, -120.0, -3.0, -120.0, -3.0, -120.0, -3.0,
    -120.0, -3.0, -120.0, -3.0, -120.0, -3.0, -120.0, -3.0, -120.0, -3.0, -120.0,
    -3.0, -120.0, -3.0, -120.0, -3.0, -120.0, -3.0, -120.0, -3.0, -120.0, -3.0,
    -120.0, -3.0, -120.0, -3.0, -120.0, -3.0, -120.0, -3.0, -120.0, -3.0, -120.0,
    -3.0, -120.0, -3.0, -120.0, -3.0, -120.0, -3.0, -120.0, -3.0, -120.0, -3.0,
    -120.0, -3.0, -120.0, -3.0, -120.0, -3.0, -120.0, -3.0, -120.0, -3.0, -120.0,
    -3.0, -120.0, -3.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -0.5, -0.5, -0.5, -0.5, -0.5, -0.5, -0.5,
    -0.5, -0.5, -0.5, -0.5, -0.5, -0.5, -0.5, -0.5, -0.5, -0.5, -0.5, -0.5, -0.5,
    -0.5, -0.5, -0.5, -0.5, -0.5, -0.5, -0.5, -0.5, -0.5, -0.5, -0.5, -0.5, -0.5,
    -0.5, -0.5, -0.5, -0.5, -0.5, -0.5, -0.5, -0.5, -0.5, -0.5, -0.5, -0.5, -0.5,
    -0.5, -0.5, -0.5, -0.5, -0.5, -0.5, -0.5, -0.5, -0.5, -0.5, -0.5, -0.5, -0.5,
    -0.5, -0.5, -0.5, -0.5, -0.5, -0.5, -0.5, -0.5, -0.5, -0.5, -0.5, -0.5, -0.5,
    -0.5, -0.5, -0.5, -0.5, -0.5, -0.5, -0.5, -0.5 };

  static const real_T a[1600] = { -1.0, -0.0, -1.0, -0.0, -1.0, -0.0, -1.0, -0.0,
    -1.0, -0.0, -1.0, -0.0, -1.0, -0.0, -1.0, -0.0, -1.0, -0.0, -1.0, -0.0, -1.0,
    -0.0, -1.0, -0.0, -1.0, -0.0, -1.0, -0.0, -1.0, -0.0, -1.0, -0.0, -1.0, -0.0,
    -1.0, -0.0, -1.0, -0.0, -1.0, -0.0, -1.0, -0.0, -1.0, -0.0, -1.0, -0.0, -1.0,
    -0.0, -1.0, -0.0, -1.0, -0.0, -1.0, -0.0, -1.0, -0.0, -1.0, -0.0, -1.0, -0.0,
    -1.0, -0.0, -1.0, -0.0, -1.0, -0.0, -1.0, -0.0, -1.0, -0.0, -1.0, -0.0, -1.0,
    -0.0, -1.0, -0.0, -1.0, -0.0, -1.0, -0.0, -1.0, -0.0, -1.0, -0.0, -1.0, -0.0,
    -1.0, -0.0, -1.0, -0.0, -1.0, -0.0, -1.0, -0.0, -1.0, -0.0, -1.0, -0.0, -1.0,
    -0.0, -1.0, -0.0, -1.0, -0.0, -1.0, -0.0, -1.0, -0.0, -1.0, -0.0, -1.0, -0.0,
    -1.0, -0.0, -1.0, -0.0, -1.0, -0.0, -1.0, -0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0,
    1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0,
    0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0,
    1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0,
    0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0,
    1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0,
    0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0,
    1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0,
    0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, -0.12515559648516014, 0.20147653980089464,
    -0.19987935993722605, 0.91881440781971979, -0.044613592849619632,
    -0.57171563501434552, -0.03245464840223844, -0.68843983203419923,
    -0.19261989959962411, 0.84912458545306613, -0.14023976283182427,
    0.34628246536029539, -0.0011812490549856225, -0.98866017128209938,
    -0.10959544219401018, 0.052101195337457995, -0.2049681229729361,
    0.96766583416993912, -0.058123214404164569, -0.44202512324166932,
    -0.021922141756867353, -0.78955044949835085, -0.18335438403375548,
    0.76017690836800789, -0.15450583750855795, 0.48323482322929706,
    -0.0046982058960329809, -0.95489786855908143, -0.093912198927347923,
    -0.098455786388232019, -0.20777077730433202, 0.994570930888838,
    -0.0726771194769289, -0.30230963309584319, -0.013254946556166658,
    -0.87275433323958351, -0.17229295195862093, 0.65398867941054029,
    -0.1676302708287376, 0.60922758084640138, -0.010471107146771352,
    -0.89947880929094748, -0.07846155726994386, -0.24677982460606532,
    -0.20822375969126616, 0.9989194995995534, -0.087945230486510262,
    -0.15573786403185225, -0.0066496318182167613, -0.93616444767731666,
    -0.15968647286443272, 0.53296821123713545, -0.17931540514062494,
    0.72140326562945856, -0.018369025384421533, -0.82365987875731483,
    -0.0635939324817496, -0.38950698093976421, -0.20631679664837943,
    0.98061291625339042, -0.10358127190551958, -0.0056340135618297982,
    -0.0022560038185313047, -0.97834267313813561, -0.14582085737852069,
    0.39986020660868815, -0.18929622560092962, 0.81721777147495955,
    -0.028212838528897777, -0.72916062432983542, -0.049646517199850138,
    -0.52340025237689125, -0.20209313744422897, 0.9400663678894593,
    -0.11923062367091841, 0.14459761440576657, -0.00017370853503972938,
    -0.9983324219173374, -0.13101057291024265, 0.25768350947213686,
    -0.19734637062069194, 0.89449805821294559, -0.039779292270219813,
    -0.61812425672686444, -0.036935634024948705, -0.645422985388291,
    -0.19564857322268914, 0.87819943633485853, -0.13453836384557771,
    0.2915498180126061, -0.00044997171145588766, -0.99568033336038164,
    -0.11559151163786296, 0.10966263861389496, -0.20328326566854393,
    0.95149143541365711, -0.052806063399792436, -0.49306904272855528,
    -0.025749561433164203, -0.75280774618988222, -0.1871292644926239,
    0.79641524240385175, -0.14915731812621935, 0.43188977162144671,
    -0.0030785277935763133, -0.97044655592722928, -0.099913372589023552,
    -0.0408453433216209, -0.20697226399857982, 0.98690531280607141,
    -0.066997709210896872, -0.3568311917489525, -0.016341995718924807,
    -0.84311908519285728, -0.17672842625762542, 0.69656862359845861,
    -0.16275593363769048, 0.56243461315988119, -0.0079997620299021577,
    -0.92320338304587568, 0.12515559648516014, -0.20147653980089464,
    0.19987935993722605, -0.91881440781971979, 0.044613592849619632,
    0.57171563501434552, 0.03245464840223844, 0.68843983203419923,
    0.19261989959962411, -0.84912458545306613, 0.14023976283182427,
    -0.34628246536029539, 0.0011812490549856225, 0.98866017128209938,
    0.10959544219401018, -0.052101195337457995, 0.2049681229729361,
    -0.96766583416993912, 0.058123214404164569, 0.44202512324166932,
    0.021922141756867353, 0.78955044949835085, 0.18335438403375548,
    -0.76017690836800789, 0.15450583750855795, -0.48323482322929706,
    0.0046982058960329809, 0.95489786855908143, 0.093912198927347923,
    0.098455786388232019, 0.20777077730433202, -0.994570930888838,
    0.0726771194769289, 0.30230963309584319, 0.013254946556166658,
    0.87275433323958351, 0.17229295195862093, -0.65398867941054029,
    0.1676302708287376, -0.60922758084640138, 0.010471107146771352,
    0.89947880929094748, 0.07846155726994386, 0.24677982460606532,
    0.20822375969126616, -0.9989194995995534, 0.087945230486510262,
    0.15573786403185225, 0.0066496318182167613, 0.93616444767731666,
    0.15968647286443272, -0.53296821123713545, 0.17931540514062494,
    -0.72140326562945856, 0.018369025384421533, 0.82365987875731483,
    0.0635939324817496, 0.38950698093976421, 0.20631679664837943,
    -0.98061291625339042, 0.10358127190551958, 0.0056340135618297982,
    0.0022560038185313047, 0.97834267313813561, 0.14582085737852069,
    -0.39986020660868815, 0.18929622560092962, -0.81721777147495955,
    0.028212838528897777, 0.72916062432983542, 0.049646517199850138,
    0.52340025237689125, 0.20209313744422897, -0.9400663678894593,
    0.11923062367091841, -0.14459761440576657, 0.00017370853503972938,
    0.9983324219173374, 0.13101057291024265, -0.25768350947213686,
    0.19734637062069194, -0.89449805821294559, 0.039779292270219813,
    0.61812425672686444, 0.036935634024948705, 0.645422985388291,
    0.19564857322268914, -0.87819943633485853, 0.13453836384557771,
    -0.2915498180126061, 0.00044997171145588766, 0.99568033336038164,
    0.11559151163786296, -0.10966263861389496, 0.20328326566854393,
    -0.95149143541365711, 0.052806063399792436, 0.49306904272855528,
    0.025749561433164203, 0.75280774618988222, 0.1871292644926239,
    -0.79641524240385175, 0.14915731812621935, -0.43188977162144671,
    0.0030785277935763133, 0.97044655592722928, 0.099913372589023552,
    0.0408453433216209, 0.20697226399857982, -0.98690531280607141,
    0.066997709210896872, 0.3568311917489525, 0.016341995718924807,
    0.84311908519285728, 0.17672842625762542, -0.69656862359845861,
    0.16275593363769048, -0.56243461315988119, 0.0079997620299021577,
    0.92320338304587568, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    -0.50000000000000011, -0.0, -1.0000000000000002, -0.0, -1.5000000000000004,
    -0.0, -2.0000000000000004, -0.0, -2.5000000000000004, -0.0,
    -3.0000000000000004, -0.0, -3.5000000000000004, -0.0, -4.0000000000000009,
    -0.0, -4.5000000000000009, -0.0, -5.0000000000000009, -0.0,
    -5.5000000000000009, -0.0, -6.0000000000000009, -0.0, -6.5000000000000009,
    -0.0, -7.0000000000000009, -0.0, -7.5000000000000009, -0.0,
    -8.0000000000000018, -0.0, -8.5000000000000018, -0.0, -9.0000000000000018,
    -0.0, -9.5000000000000018, -0.0, -10.000000000000002, -0.0,
    -10.500000000000002, -0.0, -11.000000000000002, -0.0, -11.500000000000002,
    -0.0, -12.000000000000002, -0.0, -12.500000000000002, -0.0,
    -13.000000000000002, -0.0, -13.500000000000002, -0.0, -14.000000000000002,
    -0.0, -14.500000000000002, -0.0, -15.000000000000002, -0.0,
    -15.500000000000002, -0.0, -16.000000000000004, -0.0, -16.500000000000004,
    -0.0, -17.000000000000004, -0.0, -17.500000000000004, -0.0,
    -18.000000000000004, -0.0, -18.500000000000004, -0.0, -19.000000000000004,
    -0.0, -19.500000000000004, -0.0, -20.000000000000004, -0.0,
    -20.500000000000004, -0.0, -21.000000000000004, -0.0, -21.500000000000004,
    -0.0, -22.000000000000004, -0.0, -22.500000000000004, -0.0,
    -23.000000000000004, -0.0, -23.500000000000004, -0.0, -24.000000000000004,
    -0.0, -24.500000000000004, -0.0, -25.000000000000004, -0.0,
    -25.500000000000004, -0.0, -26.000000000000004, -0.0, -26.500000000000004,
    -0.0, -27.000000000000004, -0.0, -27.500000000000004, -0.0,
    -28.000000000000004, -0.0, -28.500000000000004, -0.0, -29.000000000000004,
    -0.0, -29.500000000000004, -0.0, -30.000000000000004, -0.0,
    0.50000000000000011, 0.0, 1.0000000000000002, 0.0, 1.5000000000000004, 0.0,
    2.0000000000000004, 0.0, 2.5000000000000004, 0.0, 3.0000000000000004, 0.0,
    3.5000000000000004, 0.0, 4.0000000000000009, 0.0, 4.5000000000000009, 0.0,
    5.0000000000000009, 0.0, 5.5000000000000009, 0.0, 6.0000000000000009, 0.0,
    6.5000000000000009, 0.0, 7.0000000000000009, 0.0, 7.5000000000000009, 0.0,
    8.0000000000000018, 0.0, 8.5000000000000018, 0.0, 9.0000000000000018, 0.0,
    9.5000000000000018, 0.0, 10.000000000000002, 0.0, 10.500000000000002, 0.0,
    11.000000000000002, 0.0, 11.500000000000002, 0.0, 12.000000000000002, 0.0,
    12.500000000000002, 0.0, 13.000000000000002, 0.0, 13.500000000000002, 0.0,
    14.000000000000002, 0.0, 14.500000000000002, 0.0, 15.000000000000002, 0.0,
    15.500000000000002, 0.0, 16.000000000000004, 0.0, 16.500000000000004, 0.0,
    17.000000000000004, 0.0, 17.500000000000004, 0.0, 18.000000000000004, 0.0,
    18.500000000000004, 0.0, 19.000000000000004, 0.0, 19.500000000000004, 0.0,
    20.000000000000004, 0.0, 20.500000000000004, 0.0, 21.000000000000004, 0.0,
    21.500000000000004, 0.0, 22.000000000000004, 0.0, 22.500000000000004, 0.0,
    23.000000000000004, 0.0, 23.500000000000004, 0.0, 24.000000000000004, 0.0,
    24.500000000000004, 0.0, 25.000000000000004, 0.0, 25.500000000000004, 0.0,
    26.000000000000004, 0.0, 26.500000000000004, 0.0, 27.000000000000004, 0.0,
    27.500000000000004, 0.0, 28.000000000000004, 0.0, 28.500000000000004, 0.0,
    29.000000000000004, 0.0, 29.500000000000004, 0.0, 30.000000000000004, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.023320975116744743,
    -0.27612184133234913, -0.11575833774255126, 0.11126414631018668,
    -0.18034503917063066, 0.23128761092739611, -0.18703786278821835,
    -0.20446220140712168, -0.24490986395736056, -0.14889893720823577,
    -0.34005293573110895, 0.26446148670461428, -0.36899833727312087,
    0.042333366704544212, -0.38734722329286836, -0.28151984718812295,
    -0.47616367810709714, 0.0711059226889349, -0.54718152458580338,
    0.25286749666269071, -0.55490380631145286, -0.17299965920036145,
    -0.60592983911500364, -0.18315675121784575, -0.70280205681646168,
    0.24680323615345162, -0.73789666204741344, 0.083706627154125274,
    -0.75203856157589444, -0.28053307934828581, -0.83640103086368234,
    0.029335041099439348, -0.91342061101803629, 0.2687124341970224,
    -0.92317846120257463, -0.13761354398642273, -0.96738252175122841,
    -0.2132606328527778, -1.0649681057228659, 0.22354757275227638,
    -1.1065972300732621, 0.12318144997474356, -1.1173926587286667,
    -0.27318391736941366, -1.1965690796411141, -0.013101149173057963,
    -1.2790248648323517, 0.27846306577502056, -1.2917782278312715,
    -0.09910640073634211, -1.3293390322294993, -0.23852783639006325,
    -1.4266060239111535, 0.19522192698047008, -1.4750067821563617,
    0.15986255970748786, -1.4833921523698994, -0.25963903772762775,
    -1.5567680798587051, -0.055240209870295563, -1.6439712501800756,
    0.28189825041271321, -1.6606121331443944, -0.058351558267863417,
    -1.6918590642704192, -0.25838531030911516, -1.7877827306659244,
    0.16246871478078545, -1.8430386592442962, 0.19291804134925361,
    -1.8500050427470394, -0.24020563365321296, -1.91709758496771,
    -0.096126441530992812, -2.0082516514439952, 0.27894007929928843,
    -2.0295838939036388, -0.016273322447022488, -2.0549895311185882,
    -0.27238269390390851, -2.1485756053890954, 0.12603076778583394,
    -2.2106147678241639, 0.22159820790002949, -2.2171854184796898,
    -0.21532444809338869, -2.27765418861315, -0.13483255842724351,
    -2.371873057297774, 0.26965564274223519, -2.3985941003564077,
    0.026173986752260341, -2.4187635015662963, -0.28020253130951561,
    -2.5090707326615735, 0.086734486151125667, -2.5776673510566925,
    0.24525260300724155, -2.5848744978139933, -0.18555977781324889,
    -2.6385293339230378, -0.17048071908716983, -2.734857402205229,
    0.254255508582152, -2.7675424708149441, 0.068027678898272978,
    -2.7831994499646324, -0.28166747129237346, -2.8693609498744497,
    0.045471096082637261, -2.9441405254781516, 0.2633447530930067,
    -2.9530019617726677, -0.15158667533843723, -2.999807239609555,
    -0.20226243543878755, -3.0972410689542089, 0.23308894658625517,
    -3.1363301260106575, 0.10833852659071966, 0.023320975116744743,
    0.27612184133234913, 0.11575833774255126, -0.11126414631018668,
    0.18034503917063066, -0.23128761092739611, 0.18703786278821835,
    0.20446220140712168, 0.24490986395736056, 0.14889893720823577,
    0.34005293573110895, -0.26446148670461428, 0.36899833727312087,
    -0.042333366704544212, 0.38734722329286836, 0.28151984718812295,
    0.47616367810709714, -0.0711059226889349, 0.54718152458580338,
    -0.25286749666269071, 0.55490380631145286, 0.17299965920036145,
    0.60592983911500364, 0.18315675121784575, 0.70280205681646168,
    -0.24680323615345162, 0.73789666204741344, -0.083706627154125274,
    0.75203856157589444, 0.28053307934828581, 0.83640103086368234,
    -0.029335041099439348, 0.91342061101803629, -0.2687124341970224,
    0.92317846120257463, 0.13761354398642273, 0.96738252175122841,
    0.2132606328527778, 1.0649681057228659, -0.22354757275227638,
    1.1065972300732621, -0.12318144997474356, 1.1173926587286667,
    0.27318391736941366, 1.1965690796411141, 0.013101149173057963,
    1.2790248648323517, -0.27846306577502056, 1.2917782278312715,
    0.09910640073634211, 1.3293390322294993, 0.23852783639006325,
    1.4266060239111535, -0.19522192698047008, 1.4750067821563617,
    -0.15986255970748786, 1.4833921523698994, 0.25963903772762775,
    1.5567680798587051, 0.055240209870295563, 1.6439712501800756,
    -0.28189825041271321, 1.6606121331443944, 0.058351558267863417,
    1.6918590642704192, 0.25838531030911516, 1.7877827306659244,
    -0.16246871478078545, 1.8430386592442962, -0.19291804134925361,
    1.8500050427470394, 0.24020563365321296, 1.91709758496771,
    0.096126441530992812, 2.0082516514439952, -0.27894007929928843,
    2.0295838939036388, 0.016273322447022488, 2.0549895311185882,
    0.27238269390390851, 2.1485756053890954, -0.12603076778583394,
    2.2106147678241639, -0.22159820790002949, 2.2171854184796898,
    0.21532444809338869, 2.27765418861315, 0.13483255842724351,
    2.371873057297774, -0.26965564274223519, 2.3985941003564077,
    -0.026173986752260341, 2.4187635015662963, 0.28020253130951561,
    2.5090707326615735, -0.086734486151125667, 2.5776673510566925,
    -0.24525260300724155, 2.5848744978139933, 0.18555977781324889,
    2.6385293339230378, 0.17048071908716983, 2.734857402205229,
    -0.254255508582152, 2.7675424708149441, -0.068027678898272978,
    2.7831994499646324, 0.28166747129237346, 2.8693609498744497,
    -0.045471096082637261, 2.9441405254781516, -0.2633447530930067,
    2.9530019617726677, 0.15158667533843723, 2.999807239609555,
    0.20226243543878755, 3.0972410689542089, -0.23308894658625517,
    3.1363301260106575, -0.10833852659071966, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0 };

  static const real_T b_a[400] = { -122.92585708443505, 89.743962404247725,
    -469.23951004644942, 143.32531878203673, -1025.5289456501509,
    31.99058381611772, -1819.6624942238932, 23.271901759494639,
    -2853.8225394743986, 138.1198565101991, -4099.261352837816,
    100.56020151405892, -5565.3805363637839, 0.84702541282959487,
    -7277.13941411706, 78.586411795835787, -9215.0789475513338,
    146.97426274767963, -11362.080892110174, 41.6777812162796,
    -13744.502135701281, 15.719471768746104, -16368.840333729961,
    131.47593403328628, -19206.120348032749, 110.7898205275151,
    -22261.520144359198, 3.3688914051172816, -25561.928383627914,
    67.340599114444259, -29091.332231365828, 148.98393160798355,
    -32829.29544761841, 52.113791641431931, -36800.065712683892,
    9.5045803688707551, -41014.308589067427, 123.54423323710444,
    -45443.47867521365, 120.20081518969195, -50088.4128660826,
    7.5084029200590408, -54977.319333828207, 56.261575539274567,
    -60097.994613651055, 149.30874676163725, -65427.147957119967,
    63.061929950135578, -70986.367907840919, 4.7681791678185874,
    -76790.246044114945, 114.50464237859434, -82811.314100923424,
    128.57974736552094, -89046.048921945883, 13.171677254544306,
    -95523.3384388902, 45.600609529734896, -102235.06532703183,
    147.94134151222596, -109155.61255565878, 74.273896115989189,
    -116303.41991091125, 1.6176881223081239, -123696.67405488883,
    104.56217628178702, -131309.60682995062, 135.73658574357634,
    -139134.41493247409, 20.230273286702015, -147200.01088532593,
    35.599488142856629, -155502.54760200047, 144.91272814238221,
    -164014.66275498597, 85.495406587169242, -172751.229164924,
    0.12455929000621779, -181733.61611044646, 93.942326671825242,
    -190938.33995427814, 141.50901568112022, -200353.4942217475,
    28.524104476544963, -210007.36030076578, 26.485033385668139,
    -219900.4485936503, 140.29159456583949, -230004.27204430423,
    96.471961350276828, -240329.79919739324, 0.32265632133699285,
    -250901.09730016242, 82.885948099882853, -261697.49983655111,
    145.76612044459679, -272703.2671956055, 37.865069573856985,
    -283945.40821809182, 18.4639579697768, -295428.77921940066,
    134.18274650907904, -307124.41449152364, 106.95461590345923,
    -319039.129540315, 2.2074864434909216, -331199.14374471013,
    71.643795444452337, -343587.07641936751, 148.41135035630208,
    -356183.71178603574, 48.041318690111154, -369014.17358707963,
    11.718177137881923, -382087.55391139357, 126.72473055335561,
    -395375.06533139275, 116.70562723243215, -408879.21574078186,
    5.73630235497275, 122.92585708443505, -89.743962404247725,
    469.23951004644942, -143.32531878203673, 1025.5289456501509,
    -31.99058381611772, 1819.6624942238932, -23.271901759494639,
    2853.8225394743986, -138.1198565101991, 4099.261352837816,
    -100.56020151405892, 5565.3805363637839, -0.84702541282959487,
    7277.13941411706, -78.586411795835787, 9215.0789475513338,
    -146.97426274767963, 11362.080892110174, -41.6777812162796,
    13744.502135701281, -15.719471768746104, 16368.840333729961,
    -131.47593403328628, 19206.120348032749, -110.7898205275151,
    22261.520144359198, -3.3688914051172816, 25561.928383627914,
    -67.340599114444259, 29091.332231365828, -148.98393160798355,
    32829.29544761841, -52.113791641431931, 36800.065712683892,
    -9.5045803688707551, 41014.308589067427, -123.54423323710444,
    45443.47867521365, -120.20081518969195, 50088.4128660826,
    -7.5084029200590408, 54977.319333828207, -56.261575539274567,
    60097.994613651055, -149.30874676163725, 65427.147957119967,
    -63.061929950135578, 70986.367907840919, -4.7681791678185874,
    76790.246044114945, -114.50464237859434, 82811.314100923424,
    -128.57974736552094, 89046.048921945883, -13.171677254544306,
    95523.3384388902, -45.600609529734896, 102235.06532703183,
    -147.94134151222596, 109155.61255565878, -74.273896115989189,
    116303.41991091125, -1.6176881223081239, 123696.67405488883,
    -104.56217628178702, 131309.60682995062, -135.73658574357634,
    139134.41493247409, -20.230273286702015, 147200.01088532593,
    -35.599488142856629, 155502.54760200047, -144.91272814238221,
    164014.66275498597, -85.495406587169242, 172751.229164924,
    -0.12455929000621779, 181733.61611044646, -93.942326671825242,
    190938.33995427814, -141.50901568112022, 200353.4942217475,
    -28.524104476544963, 210007.36030076578, -26.485033385668139,
    219900.4485936503, -140.29159456583949, 230004.27204430423,
    -96.471961350276828, 240329.79919739324, -0.32265632133699285,
    250901.09730016242, -82.885948099882853, 261697.49983655111,
    -145.76612044459679, 272703.2671956055, -37.865069573856985,
    283945.40821809182, -18.4639579697768, 295428.77921940066,
    -134.18274650907904, 307124.41449152364, -106.95461590345923,
    319039.129540315, -2.2074864434909216, 331199.14374471013,
    -71.643795444452337, 343587.07641936751, -148.41135035630208,
    356183.71178603574, -48.041318690111154, 369014.17358707963,
    -11.718177137881923, 382087.55391139357, -126.72473055335561,
    395375.06533139275, -116.70562723243215, 408879.21574078186,
    -5.73630235497275, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0, -1.0, -1.0, -1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };

  real_T rtb_Add2[4];
  int32_T i;
  real_T b_0[400];
  real_T b_1[400];
  real_T tmp[400];
  real_T rtb_Memory_idx;
  real_T rtb_Memory_idx_0;
  real_T rtb_Memory_idx_1;
  real_T rtb_Memory_idx_2;

  /* MATLAB Function: '<S22>/ref_and_md' incorporates:
   *  Constant: '<S4>/md_zero'
   *  Memory: '<S22>/Memory1'
   */
  Planilla_3DOF_Crane_DWork.sfEvent_g = CALL_EVENT;

  /* MATLAB Function 'MPC Controller/MPC/ref_and_md': '<S24>:1' */
  md = Planilla_3DOF_Crane_P.md_zero_Value;
  b_nv = Planilla_3DOF_Crane_P.SFunction_p7;
  b_ny = Planilla_3DOF_Crane_P.SFunction_p8;
  rtb_Memory_idx = Planilla_3DOF_Crane_P.SFunction_p10;
  rtb_Memory_idx_0 = Planilla_3DOF_Crane_P.SFunction_p16;
  rtb_Memory_idx_1 = Planilla_3DOF_Crane_P.SFunction_p5;
  rtb_Memory_idx_2 = Planilla_3DOF_Crane_P.SFunction_p1;
  b_md_signal = Planilla_3DOF_Crane_P.SFunction_p3;
  b_md_preview = Planilla_3DOF_Crane_P.SFunction_p2;
  b_md_temp = Planilla_3DOF_Crane_P.SFunction_p4;
  time = Planilla_3DOF_Crane_DWork.Memory1_PreviousInput;
  memcpy((void *)(&Planilla_3DOF_Crane_B.vseq_d[0]), (void *)
         Planilla_3DOF_Crane_P.SFunction_p15, 61U * sizeof(real_T));
  memcpy((void *)(&Planilla_3DOF_Crane_B.rseq_k[0]), (void *)
         Planilla_3DOF_Crane_P.SFunction_p11, 120U * sizeof(real_T));
  v = Planilla_3DOF_Crane_P.SFunction_p4;
  if (Planilla_3DOF_Crane_P.SFunction_p9) {
    md = Planilla_3DOF_Crane_DWork.Memory1_PreviousInput + 1.0;
  } else {
    if (Planilla_3DOF_Crane_P.SFunction_p12 == 0.0) {
      for (i = 0; i <= (int32_T)((Planilla_3DOF_Crane_P.SFunction_p10 - 1.0) +
            1.0) - 1; i++) {
        for (b_j = 0; b_j <= (int32_T)Planilla_3DOF_Crane_P.SFunction_p8 - 1;
             b_j++) {
          if (Planilla_3DOF_Crane_P.SFunction_p6 == 1.0) {
            Planilla_3DOF_Crane_B.rseq_k[(int32_T)((1.0 + (real_T)b_j) + (real_T)
              i * Planilla_3DOF_Crane_P.SFunction_p8) - 1] = 0.0;
          } else {
            Planilla_3DOF_Crane_B.rseq_k[(int32_T)((1.0 + (real_T)b_j) + (real_T)
              i * Planilla_3DOF_Crane_P.SFunction_p8) - 1] =
              Planilla_3DOF_Crane_B.TmpRTBAtref_and_mdInport1[(int32_T)(1.0 +
              (real_T)b_j) - 1] - Planilla_3DOF_Crane_P.SFunction_p17[(int32_T)
              (1.0 + (real_T)b_j) - 1];
          }
        }
      }
    } else if (Planilla_3DOF_Crane_P.SFunction_p13 == 0.0) {
      Planilla_3DOF_Crane_mpc_getrv(&Planilla_3DOF_Crane_B.rseq_k[0],
        Planilla_3DOF_Crane_P.SFunction_p14,
        Planilla_3DOF_Crane_DWork.Memory1_PreviousInput,
        Planilla_3DOF_Crane_DWork.Memory1_PreviousInput, 0.0);
      for (i = 0; i <= (int32_T)(rtb_Memory_idx - 1.0) - 1; i++) {
        for (b_j = 0; b_j <= (int32_T)b_ny - 1; b_j++) {
          Planilla_3DOF_Crane_B.rseq_k[(int32_T)((1.0 + (real_T)b_j) + (1.0 +
            (real_T)i) * b_ny) - 1] = Planilla_3DOF_Crane_B.rseq_k[(int32_T)(1.0
            + (real_T)b_j) - 1];
        }
      }
    } else {
      Planilla_3DOF_Crane_mpc_getrv(&Planilla_3DOF_Crane_B.rseq_k[0],
        Planilla_3DOF_Crane_P.SFunction_p14,
        Planilla_3DOF_Crane_DWork.Memory1_PreviousInput,
        (Planilla_3DOF_Crane_DWork.Memory1_PreviousInput +
         Planilla_3DOF_Crane_P.SFunction_p10) - 1.0, 0.0);
    }

    if (rtb_Memory_idx_2 == 0.0) {
      for (i = 0; i <= (int32_T)(rtb_Memory_idx + 1.0) - 1; i++) {
        for (b_j = 0; b_j <= (int32_T)((b_nv - 2.0) + 1.0) - 1; b_j++) {
          if (rtb_Memory_idx_1 == 1.0) {
            Planilla_3DOF_Crane_B.vseq_d[(int32_T)(((real_T)b_j + (real_T)i *
              b_nv) + 1.0) - 1] = 0.0;
          } else {
            Planilla_3DOF_Crane_B.vseq_d[(int32_T)(((real_T)b_j + (real_T)i *
              b_nv) + 1.0) - 1] = md - rtb_Memory_idx_0;
          }
        }
      }
    } else if (b_md_preview == 0.0) {
      Planilla_3DOF_Crane_mpc_getrv_k(&Planilla_3DOF_Crane_B.vseq_d[0],
        b_md_signal, time, time, 1.0);
      for (i = 0; i <= (int32_T)rtb_Memory_idx - 1; i++) {
        for (b_j = 0; b_j <= (int32_T)((b_nv - 1.0) + 1.0) - 1; b_j++) {
          Planilla_3DOF_Crane_B.vseq_d[(int32_T)(((real_T)b_j + (1.0 + (real_T)i)
            * b_nv) + 1.0) - 1] = b_md_temp;
        }
      }
    } else {
      Planilla_3DOF_Crane_mpc_getrv_k(&Planilla_3DOF_Crane_B.vseq_d[0],
        b_md_signal, time, time + rtb_Memory_idx, 1.0);
    }

    for (i = 0; i <= (int32_T)b_nv - 1; i++) {
      v = Planilla_3DOF_Crane_B.vseq_d[(int32_T)(1.0 + (real_T)i) - 1];
    }

    md = time + 1.0;
  }

  /* '<S24>:1:15' */
  Planilla_3DOF_Crane_B.v_o = v;
  Planilla_3DOF_Crane_B.next_t_a = md;

  /* End of MATLAB Function: '<S22>/ref_and_md' */

  /* Memory: '<S25>/Memory' */
  rtb_Memory_idx = Planilla_3DOF_Crane_DWork.Memory_PreviousInput[0];
  rtb_Memory_idx_0 = Planilla_3DOF_Crane_DWork.Memory_PreviousInput[1];
  rtb_Memory_idx_1 = Planilla_3DOF_Crane_DWork.Memory_PreviousInput[2];
  rtb_Memory_idx_2 = Planilla_3DOF_Crane_DWork.Memory_PreviousInput[3];

  /* Sum: '<S25>/Add2' incorporates:
   *  Gain: '<S25>/Gain5'
   *  Memory: '<S25>/Memory'
   */
  for (i = 0; i < 4; i++) {
    rtb_Add2[i] = (Planilla_3DOF_Crane_P.Gain5_Gain[i + 4] *
                   Planilla_3DOF_Crane_B.TmpRTBAtGain5Inport1[1] +
                   Planilla_3DOF_Crane_P.Gain5_Gain[i] *
                   Planilla_3DOF_Crane_B.TmpRTBAtGain5Inport1[0]) +
      Planilla_3DOF_Crane_DWork.Memory_PreviousInput[i];
  }

  /* End of Sum: '<S25>/Add2' */

  /* MATLAB Function: '<S22>/optimizer' incorporates:
   *  Memory: '<S22>/Memory'
   *  UnitDelay: '<S22>/Last MVs'
   */
  Planilla_3DOF_Crane_DWork.sfEvent_l = CALL_EVENT;

  /* MATLAB Function 'MPC Controller/MPC/optimizer': '<S23>:1' */
  /* '<S23>:1:11' */
  Planilla_3DOF_Crane_B.cost_i = 0.0;
  md = Planilla_3DOF_Crane_DWork.LastMVs_DSTATE;
  xQP[0] = rtb_Add2[0];
  xQP[1] = rtb_Add2[1];
  xQP[2] = rtb_Add2[2];
  xQP[3] = rtb_Add2[3];
  memcpy((void *)&iAout[0], (void *)
         Planilla_3DOF_Crane_DWork.Memory_PreviousInput_e, 441U * sizeof
         (boolean_T));
  for (i = 0; i < 400; i++) {
    b_1[i] = (b[i] - (((a[i + 400] * xQP[1] + a[i] * xQP[0]) + a[i + 800] * xQP
                       [2]) + a[i + 1200] * xQP[3])) - b_a[i] *
      Planilla_3DOF_Crane_DWork.LastMVs_DSTATE;
    tmp[i] = 0.0;
    for (b_j = 0; b_j < 61; b_j++) {
      tmp[i] += -0.0 * Planilla_3DOF_Crane_B.vseq_d[b_j];
    }

    b_0[i] = b_1[i] - tmp[i];
  }

  Planilla_3DOF_Crane_mpc_solveQP(xQP, &Planilla_3DOF_Crane_B.rseq_k[0],
    Planilla_3DOF_Crane_DWork.LastMVs_DSTATE, &Planilla_3DOF_Crane_B.vseq_d[0],
    b_0, iAout, zopt, f, &b_nv);

  /* '<S23>:1:23' */
  Planilla_3DOF_Crane_B.u_g = md + zopt[0];

  /* '<S23>:1:23' */
  for (i = 0; i < 60; i++) {
    Planilla_3DOF_Crane_B.useq_i[i] = 0.0;
  }

  /* '<S23>:1:23' */
  Planilla_3DOF_Crane_B.status_b = b_nv;

  /* '<S23>:1:23' */
  memcpy((void *)(&Planilla_3DOF_Crane_B.iAout_c[0]), (void *)&iAout[0], 441U *
         sizeof(boolean_T));

  /* End of MATLAB Function: '<S22>/optimizer' */

  /* Switch: '<S22>/u_select' incorporates:
   *  Constant: '<S22>/mv_inport'
   *  Constant: '<S4>/mv_zero'
   */
  if (Planilla_3DOF_Crane_P.mv_inport_Value >=
      Planilla_3DOF_Crane_P.u_select_Threshold) {
    b_ny = Planilla_3DOF_Crane_P.mv_zero_Value;
  } else {
    b_ny = Planilla_3DOF_Crane_B.u_g;
  }

  /* End of Switch: '<S22>/u_select' */

  /* Bias: '<S22>/mv_bias' */
  Planilla_3DOF_Crane_B.mv_bias = b_ny + Planilla_3DOF_Crane_P.mv_bias_Bias;

  /* Sum: '<S25>/Add' incorporates:
   *  Gain: '<S25>/Gain'
   *  Gain: '<S25>/Gain1'
   *  Gain: '<S25>/Gain2'
   */
  for (i = 0; i < 4; i++) {
    Planilla_3DOF_Crane_B.Add[i] = ((((Planilla_3DOF_Crane_P.Gain_Gain_j[i + 4] *
      rtb_Add2[1] + Planilla_3DOF_Crane_P.Gain_Gain_j[i] * rtb_Add2[0]) +
      Planilla_3DOF_Crane_P.Gain_Gain_j[i + 8] * rtb_Add2[2]) +
      Planilla_3DOF_Crane_P.Gain_Gain_j[i + 12] * rtb_Add2[3]) +
      Planilla_3DOF_Crane_P.Gain1_Gain_h[i] * Planilla_3DOF_Crane_B.mv_bias) +
      Planilla_3DOF_Crane_P.Gain2_Gain[i] * Planilla_3DOF_Crane_B.v_o;
  }

  /* End of Sum: '<S25>/Add' */

  /* Gain: '<S25>/Gain3' */
  for (i = 0; i < 2; i++) {
    Planilla_3DOF_Crane_B.Gain3[i] = 0.0;
    Planilla_3DOF_Crane_B.Gain3[i] = Planilla_3DOF_Crane_P.Gain3_Gain_f[i] *
      rtb_Memory_idx + Planilla_3DOF_Crane_B.Gain3[i];
    Planilla_3DOF_Crane_B.Gain3[i] = Planilla_3DOF_Crane_P.Gain3_Gain_f[i + 2] *
      rtb_Memory_idx_0 + Planilla_3DOF_Crane_B.Gain3[i];
    Planilla_3DOF_Crane_B.Gain3[i] = Planilla_3DOF_Crane_P.Gain3_Gain_f[i + 4] *
      rtb_Memory_idx_1 + Planilla_3DOF_Crane_B.Gain3[i];
    Planilla_3DOF_Crane_B.Gain3[i] = Planilla_3DOF_Crane_P.Gain3_Gain_f[i + 6] *
      rtb_Memory_idx_2 + Planilla_3DOF_Crane_B.Gain3[i];
  }

  /* End of Gain: '<S25>/Gain3' */

  /* Gain: '<S25>/Gain4' */
  Planilla_3DOF_Crane_B.Gain4[0] = Planilla_3DOF_Crane_P.Gain4_Gain_j[0] *
    Planilla_3DOF_Crane_B.v_o;
  Planilla_3DOF_Crane_B.Gain4[1] = Planilla_3DOF_Crane_P.Gain4_Gain_j[1] *
    Planilla_3DOF_Crane_B.v_o;

  /* tid is required for a uniform function interface.
   * Argument tid is not used in the function. */
  UNUSED_PARAMETER(tid);
}

/* Model update function for TID1 */
void Planilla_3DOF_Crane_update1(int_T tid) /* Sample time: [0.5s, 0.0s] */
{
  /* Update for RateTransition: '<S11>/TmpRTBAtRelational Operator5Inport1' */
  Planilla_3DOF_Crane_DWork.TmpRTBAtRelationalOperator5Inpo =
    Planilla_3DOF_Crane_B.u_g;

  /* Update for RateTransition: '<S11>/TmpRTBAtRelational Operator4Inport1' */
  Planilla_3DOF_Crane_DWork.TmpRTBAtRelationalOperator4Inpo =
    Planilla_3DOF_Crane_B.u_g;

  /* Update for RateTransition: '<S11>/TmpRTBAtProduct4Inport2' */
  Planilla_3DOF_Crane_DWork.TmpRTBAtProduct4Inport2_Buffer0 =
    Planilla_3DOF_Crane_B.u_g;

  /* Update for RateTransition: '<S11>/TmpRTBAtRelational Operator6Inport2' */
  Planilla_3DOF_Crane_DWork.TmpRTBAtRelationalOperator6Inpo =
    Planilla_3DOF_Crane_B.u_g;

  /* Update for RateTransition: '<S11>/TmpRTBAtProduct5Inport2' */
  Planilla_3DOF_Crane_DWork.TmpRTBAtProduct5Inport2_Buffer0 =
    Planilla_3DOF_Crane_B.u_g;

  /* Update for Memory: '<S22>/Memory1' */
  Planilla_3DOF_Crane_DWork.Memory1_PreviousInput =
    Planilla_3DOF_Crane_B.next_t_a;

  /* Update for Memory: '<S25>/Memory' */
  Planilla_3DOF_Crane_DWork.Memory_PreviousInput[0] = Planilla_3DOF_Crane_B.Add
    [0];
  Planilla_3DOF_Crane_DWork.Memory_PreviousInput[1] = Planilla_3DOF_Crane_B.Add
    [1];
  Planilla_3DOF_Crane_DWork.Memory_PreviousInput[2] = Planilla_3DOF_Crane_B.Add
    [2];
  Planilla_3DOF_Crane_DWork.Memory_PreviousInput[3] = Planilla_3DOF_Crane_B.Add
    [3];

  /* Update for RateTransition: '<S25>/TmpRTBAtAdd1Inport1' */
  Planilla_3DOF_Crane_DWork.TmpRTBAtAdd1Inport1_Buffer0[0] =
    Planilla_3DOF_Crane_B.Gain3[0];
  Planilla_3DOF_Crane_DWork.TmpRTBAtAdd1Inport1_Buffer0[1] =
    Planilla_3DOF_Crane_B.Gain3[1];

  /* Update for RateTransition: '<S25>/TmpRTBAtAdd1Inport2' */
  Planilla_3DOF_Crane_DWork.TmpRTBAtAdd1Inport2_Buffer0[0] =
    Planilla_3DOF_Crane_B.Gain4[0];
  Planilla_3DOF_Crane_DWork.TmpRTBAtAdd1Inport2_Buffer0[1] =
    Planilla_3DOF_Crane_B.Gain4[1];

  /* Update for RateTransition: '<S25>/TmpRTBAtAdd1Inport3' incorporates:
   *  Constant: '<S25>/ym offset'
   */
  Planilla_3DOF_Crane_DWork.TmpRTBAtAdd1Inport3_Buffer0[0] =
    Planilla_3DOF_Crane_P.ymoffset_Value_o[0];
  Planilla_3DOF_Crane_DWork.TmpRTBAtAdd1Inport3_Buffer0[1] =
    Planilla_3DOF_Crane_P.ymoffset_Value_o[1];

  /* Update for UnitDelay: '<S22>/Last MVs' */
  Planilla_3DOF_Crane_DWork.LastMVs_DSTATE = Planilla_3DOF_Crane_B.mv_bias;

  /* Update for Memory: '<S22>/Memory' */
  memcpy((void *)Planilla_3DOF_Crane_DWork.Memory_PreviousInput_e, (void *)
         (&Planilla_3DOF_Crane_B.iAout_c[0]), 441U * sizeof(boolean_T));

  /* Update absolute time */
  /* The "clockTick1" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick1"
   * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick1 and the high bits
   * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++Planilla_3DOF_Crane_M->Timing.clockTick1)) {
    ++Planilla_3DOF_Crane_M->Timing.clockTickH1;
  }

  Planilla_3DOF_Crane_M->Timing.t[1] = Planilla_3DOF_Crane_M->Timing.clockTick1 *
    Planilla_3DOF_Crane_M->Timing.stepSize1 +
    Planilla_3DOF_Crane_M->Timing.clockTickH1 *
    Planilla_3DOF_Crane_M->Timing.stepSize1 * 4294967296.0;

  /* tid is required for a uniform function interface.
   * Argument tid is not used in the function. */
  UNUSED_PARAMETER(tid);
}

void Planilla_3DOF_Crane_output(int_T tid)
{
  switch (tid) {
   case 0 :
    Planilla_3DOF_Crane_output0(0);
    break;

   case 1 :
    Planilla_3DOF_Crane_output1(1);
    break;

   default :
    break;
  }
}

void Planilla_3DOF_Crane_update(int_T tid)
{
  switch (tid) {
   case 0 :
    Planilla_3DOF_Crane_update0(0);
    break;

   case 1 :
    Planilla_3DOF_Crane_update1(1);
    break;

   default :
    break;
  }
}

/* Model initialize function */
void Planilla_3DOF_Crane_initialize(boolean_T firstTime)
{
  (void)firstTime;

  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)Planilla_3DOF_Crane_M, 0,
                sizeof(RT_MODEL_Planilla_3DOF_Crane));

  /* Initialize timing info */
  {
    int_T *mdlTsMap = Planilla_3DOF_Crane_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    Planilla_3DOF_Crane_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    Planilla_3DOF_Crane_M->Timing.sampleTimes =
      (&Planilla_3DOF_Crane_M->Timing.sampleTimesArray[0]);
    Planilla_3DOF_Crane_M->Timing.offsetTimes =
      (&Planilla_3DOF_Crane_M->Timing.offsetTimesArray[0]);

    /* task periods */
    Planilla_3DOF_Crane_M->Timing.sampleTimes[0] = (0.01);
    Planilla_3DOF_Crane_M->Timing.sampleTimes[1] = (0.5);

    /* task offsets */
    Planilla_3DOF_Crane_M->Timing.offsetTimes[0] = (0.0);
    Planilla_3DOF_Crane_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(Planilla_3DOF_Crane_M, &Planilla_3DOF_Crane_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = Planilla_3DOF_Crane_M->Timing.sampleHitArray;
    int_T *mdlPerTaskSampleHits =
      Planilla_3DOF_Crane_M->Timing.perTaskSampleHitsArray;
    Planilla_3DOF_Crane_M->Timing.perTaskSampleHits = (&mdlPerTaskSampleHits[0]);
    mdlSampleHits[0] = 1;
    Planilla_3DOF_Crane_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(Planilla_3DOF_Crane_M, -1);
  Planilla_3DOF_Crane_M->Timing.stepSize0 = 0.01;
  Planilla_3DOF_Crane_M->Timing.stepSize1 = 0.5;

  /* external mode info */
  Planilla_3DOF_Crane_M->Sizes.checksums[0] = (2456944232U);
  Planilla_3DOF_Crane_M->Sizes.checksums[1] = (2675229128U);
  Planilla_3DOF_Crane_M->Sizes.checksums[2] = (4268961412U);
  Planilla_3DOF_Crane_M->Sizes.checksums[3] = (3273530888U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[11];
    Planilla_3DOF_Crane_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    systemRan[4] = &rtAlwaysEnabled;
    systemRan[5] = &rtAlwaysEnabled;
    systemRan[6] = &rtAlwaysEnabled;
    systemRan[7] = &rtAlwaysEnabled;
    systemRan[8] = &rtAlwaysEnabled;
    systemRan[9] = &rtAlwaysEnabled;
    systemRan[10] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(Planilla_3DOF_Crane_M->extModeInfo,
      &Planilla_3DOF_Crane_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(Planilla_3DOF_Crane_M->extModeInfo,
                        Planilla_3DOF_Crane_M->Sizes.checksums);
    rteiSetTPtr(Planilla_3DOF_Crane_M->extModeInfo, rtmGetTPtr
                (Planilla_3DOF_Crane_M));
  }

  Planilla_3DOF_Crane_M->solverInfoPtr = (&Planilla_3DOF_Crane_M->solverInfo);
  Planilla_3DOF_Crane_M->Timing.stepSize = (0.01);
  rtsiSetFixedStepSize(&Planilla_3DOF_Crane_M->solverInfo, 0.01);
  rtsiSetSolverMode(&Planilla_3DOF_Crane_M->solverInfo, SOLVER_MODE_MULTITASKING);

  /* block I/O */
  Planilla_3DOF_Crane_M->ModelData.blockIO = ((void *) &Planilla_3DOF_Crane_B);
  (void) memset(((void *) &Planilla_3DOF_Crane_B), 0,
                sizeof(BlockIO_Planilla_3DOF_Crane));

  {
    int_T i;
    for (i = 0; i < 5; i++) {
      Planilla_3DOF_Crane_B.EncoderCalibration[i] = 0.0;
    }

    for (i = 0; i < 5; i++) {
      Planilla_3DOF_Crane_B.Add_l[i] = 0.0;
    }

    for (i = 0; i < 20; i++) {
      Planilla_3DOF_Crane_B.rseq[i] = 0.0;
    }

    for (i = 0; i < 11; i++) {
      Planilla_3DOF_Crane_B.vseq[i] = 0.0;
    }

    for (i = 0; i < 10; i++) {
      Planilla_3DOF_Crane_B.useq[i] = 0.0;
    }

    for (i = 0; i < 120; i++) {
      Planilla_3DOF_Crane_B.rseq_k[i] = 0.0;
    }

    for (i = 0; i < 61; i++) {
      Planilla_3DOF_Crane_B.vseq_d[i] = 0.0;
    }

    for (i = 0; i < 60; i++) {
      Planilla_3DOF_Crane_B.useq_i[i] = 0.0;
    }

    Planilla_3DOF_Crane_B.TmpRTBAtRelationalOperator5Inpo = 0.0;
    Planilla_3DOF_Crane_B.TmpRTBAtRelationalOperator4Inpo = 0.0;
    Planilla_3DOF_Crane_B.TmpRTBAtProduct4Inport2 = 0.0;
    Planilla_3DOF_Crane_B.TmpRTBAtRelationalOperator6Inpo = 0.0;
    Planilla_3DOF_Crane_B.TmpRTBAtProduct5Inport2 = 0.0;
    Planilla_3DOF_Crane_B.CommandedCurrentA[0] = 0.0;
    Planilla_3DOF_Crane_B.CommandedCurrentA[1] = 0.0;
    Planilla_3DOF_Crane_B.CommandedCurrentA[2] = 0.0;
    Planilla_3DOF_Crane_B.CurrentSensitivityAV[0] = 0.0;
    Planilla_3DOF_Crane_B.CurrentSensitivityAV[1] = 0.0;
    Planilla_3DOF_Crane_B.CurrentSensitivityAV[2] = 0.0;
    Planilla_3DOF_Crane_B.Gain = 0.0;
    Planilla_3DOF_Crane_B.Gain_c = 0.0;
    Planilla_3DOF_Crane_B.Gain_f = 0.0;
    Planilla_3DOF_Crane_B.x_ref = 0.0;
    Planilla_3DOF_Crane_B.theta_ref = 0.0;
    Planilla_3DOF_Crane_B.alpha_ref = 0.0;
    Planilla_3DOF_Crane_B.gamma_ref = 0.0;
    Planilla_3DOF_Crane_B.TmpRTBAtref_and_mdInport1[0] = 0.0;
    Planilla_3DOF_Crane_B.TmpRTBAtref_and_mdInport1[1] = 0.0;
    Planilla_3DOF_Crane_B.TmpRTBAtAdd1Inport1[0] = 0.0;
    Planilla_3DOF_Crane_B.TmpRTBAtAdd1Inport1[1] = 0.0;
    Planilla_3DOF_Crane_B.TmpRTBAtAdd1Inport2[0] = 0.0;
    Planilla_3DOF_Crane_B.TmpRTBAtAdd1Inport2[1] = 0.0;
    Planilla_3DOF_Crane_B.TmpRTBAtAdd1Inport3[0] = 0.0;
    Planilla_3DOF_Crane_B.TmpRTBAtAdd1Inport3[1] = 0.0;
    Planilla_3DOF_Crane_B.TmpRTBAtGain5Inport1[0] = 0.0;
    Planilla_3DOF_Crane_B.TmpRTBAtGain5Inport1[1] = 0.0;
    Planilla_3DOF_Crane_B.mv_bias = 0.0;
    Planilla_3DOF_Crane_B.Add[0] = 0.0;
    Planilla_3DOF_Crane_B.Add[1] = 0.0;
    Planilla_3DOF_Crane_B.Add[2] = 0.0;
    Planilla_3DOF_Crane_B.Add[3] = 0.0;
    Planilla_3DOF_Crane_B.Gain3[0] = 0.0;
    Planilla_3DOF_Crane_B.Gain3[1] = 0.0;
    Planilla_3DOF_Crane_B.Gain4[0] = 0.0;
    Planilla_3DOF_Crane_B.Gain4[1] = 0.0;
    Planilla_3DOF_Crane_B.mv_bias_l = 0.0;
    Planilla_3DOF_Crane_B.v = 0.0;
    Planilla_3DOF_Crane_B.next_t = 0.0;
    Planilla_3DOF_Crane_B.u = 0.0;
    Planilla_3DOF_Crane_B.cost = 0.0;
    Planilla_3DOF_Crane_B.status = 0.0;
    Planilla_3DOF_Crane_B.v_o = 0.0;
    Planilla_3DOF_Crane_B.next_t_a = 0.0;
    Planilla_3DOF_Crane_B.u_g = 0.0;
    Planilla_3DOF_Crane_B.cost_i = 0.0;
    Planilla_3DOF_Crane_B.status_b = 0.0;
  }

  /* parameters */
  Planilla_3DOF_Crane_M->ModelData.defaultParam = ((real_T *)
    &Planilla_3DOF_Crane_P);

  /* states (dwork) */
  Planilla_3DOF_Crane_M->Work.dwork = ((void *) &Planilla_3DOF_Crane_DWork);
  (void) memset((void *)&Planilla_3DOF_Crane_DWork, 0,
                sizeof(D_Work_Planilla_3DOF_Crane));
  Planilla_3DOF_Crane_DWork.LastMVs_DSTATE = 0.0;
  Planilla_3DOF_Crane_DWork.LastMVs_DSTATE_g = 0.0;

  {
    int_T i;
    for (i = 0; i < 8; i++) {
      Planilla_3DOF_Crane_DWork.HILInitialize_AIMinimums[i] = 0.0;
    }
  }

  {
    int_T i;
    for (i = 0; i < 8; i++) {
      Planilla_3DOF_Crane_DWork.HILInitialize_AIMaximums[i] = 0.0;
    }
  }

  {
    int_T i;
    for (i = 0; i < 8; i++) {
      Planilla_3DOF_Crane_DWork.HILInitialize_AOMinimums[i] = 0.0;
    }
  }

  {
    int_T i;
    for (i = 0; i < 8; i++) {
      Planilla_3DOF_Crane_DWork.HILInitialize_AOMaximums[i] = 0.0;
    }
  }

  {
    int_T i;
    for (i = 0; i < 8; i++) {
      Planilla_3DOF_Crane_DWork.HILInitialize_AOVoltages[i] = 0.0;
    }
  }

  {
    int_T i;
    for (i = 0; i < 8; i++) {
      Planilla_3DOF_Crane_DWork.HILInitialize_FilterFrequency[i] = 0.0;
    }
  }

  {
    int_T i;
    for (i = 0; i < 8; i++) {
      Planilla_3DOF_Crane_DWork.HILInitialize_POSortedFreqs[i] = 0.0;
    }
  }

  {
    int_T i;
    for (i = 0; i < 8; i++) {
      Planilla_3DOF_Crane_DWork.HILInitialize_POValues[i] = 0.0;
    }
  }

  Planilla_3DOF_Crane_DWork.TmpRTBAtRelationalOperator5Inpo = 0.0;
  Planilla_3DOF_Crane_DWork.TmpRTBAtRelationalOperator4Inpo = 0.0;
  Planilla_3DOF_Crane_DWork.TmpRTBAtProduct4Inport2_Buffer0 = 0.0;
  Planilla_3DOF_Crane_DWork.TmpRTBAtRelationalOperator6Inpo = 0.0;
  Planilla_3DOF_Crane_DWork.TmpRTBAtProduct5Inport2_Buffer0 = 0.0;
  Planilla_3DOF_Crane_DWork.Memory1_PreviousInput = 0.0;
  Planilla_3DOF_Crane_DWork.Memory_PreviousInput[0] = 0.0;
  Planilla_3DOF_Crane_DWork.Memory_PreviousInput[1] = 0.0;
  Planilla_3DOF_Crane_DWork.Memory_PreviousInput[2] = 0.0;
  Planilla_3DOF_Crane_DWork.Memory_PreviousInput[3] = 0.0;
  Planilla_3DOF_Crane_DWork.TmpRTBAtAdd1Inport1_Buffer0[0] = 0.0;
  Planilla_3DOF_Crane_DWork.TmpRTBAtAdd1Inport1_Buffer0[1] = 0.0;
  Planilla_3DOF_Crane_DWork.TmpRTBAtAdd1Inport2_Buffer0[0] = 0.0;
  Planilla_3DOF_Crane_DWork.TmpRTBAtAdd1Inport2_Buffer0[1] = 0.0;
  Planilla_3DOF_Crane_DWork.TmpRTBAtAdd1Inport3_Buffer0[0] = 0.0;
  Planilla_3DOF_Crane_DWork.TmpRTBAtAdd1Inport3_Buffer0[1] = 0.0;
  Planilla_3DOF_Crane_DWork.Memory1_PreviousInput_a = 0.0;

  {
    int_T i;
    for (i = 0; i < 5; i++) {
      Planilla_3DOF_Crane_DWork.Memory_PreviousInput_m[i] = 0.0;
    }
  }

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    Planilla_3DOF_Crane_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 17;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.B = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.P = &rtPTransTable;
  }
}

/* Model terminate function */
void Planilla_3DOF_Crane_terminate(void)
{
  /* Terminate for S-Function (hil_initialize_block): '<S7>/HIL Initialize' */

  /* S-Function Block: Planilla_3DOF_Crane/3DOF Crane/3-DOF Crane HIL/HIL Initialize (hil_initialize_block) */
  {
    t_boolean is_switching;
    t_int result;
    t_uint32 num_final_analog_outputs = 0;
    t_uint32 num_final_pwm_outputs = 0;
    hil_task_stop_all(Planilla_3DOF_Crane_DWork.HILInitialize_Card);
    hil_monitor_stop_all(Planilla_3DOF_Crane_DWork.HILInitialize_Card);
    is_switching = false;
    if ((Planilla_3DOF_Crane_P.HILInitialize_AOTerminate && !is_switching) ||
        (Planilla_3DOF_Crane_P.HILInitialize_AOExit && is_switching)) {
      {
        int_T i1;
        real_T *dw_AOVoltages =
          &Planilla_3DOF_Crane_DWork.HILInitialize_AOVoltages[0];
        for (i1=0; i1 < 8; i1++) {
          dw_AOVoltages[i1] = Planilla_3DOF_Crane_P.HILInitialize_AOFinal;
        }
      }

      num_final_analog_outputs = 8U;
    }

    if ((Planilla_3DOF_Crane_P.HILInitialize_POTerminate && !is_switching) ||
        (Planilla_3DOF_Crane_P.HILInitialize_POExit && is_switching)) {
      {
        int_T i1;
        real_T *dw_POValues = &Planilla_3DOF_Crane_DWork.HILInitialize_POValues
          [0];
        for (i1=0; i1 < 8; i1++) {
          dw_POValues[i1] = Planilla_3DOF_Crane_P.HILInitialize_POFinal;
        }
      }

      num_final_pwm_outputs = 8U;
    }

    if (0
        || num_final_analog_outputs > 0
        || num_final_pwm_outputs > 0
        ) {
      /* Attempt to write the final outputs atomically (due to firmware issue in old Q2-USB). Otherwise write channels individually */
      result = hil_write(Planilla_3DOF_Crane_DWork.HILInitialize_Card
                         , Planilla_3DOF_Crane_P.HILInitialize_AOChannels,
                         num_final_analog_outputs
                         , Planilla_3DOF_Crane_P.HILInitialize_POChannels,
                         num_final_pwm_outputs
                         , NULL, 0
                         , NULL, 0
                         , &Planilla_3DOF_Crane_DWork.HILInitialize_AOVoltages[0]
                         , &Planilla_3DOF_Crane_DWork.HILInitialize_POValues[0]
                         , (t_boolean *) NULL
                         , NULL
                         );
      if (result == -QERR_HIL_WRITE_NOT_SUPPORTED) {
        t_error local_result;
        result = 0;

        /* The hil_write operation is not supported by this card. Write final outputs for each channel type */
        if (num_final_analog_outputs > 0) {
          local_result = hil_write_analog
            (Planilla_3DOF_Crane_DWork.HILInitialize_Card,
             Planilla_3DOF_Crane_P.HILInitialize_AOChannels,
             num_final_analog_outputs,
             &Planilla_3DOF_Crane_DWork.HILInitialize_AOVoltages[0]);
          if (local_result < 0) {
            result = local_result;
          }
        }

        if (num_final_pwm_outputs > 0) {
          local_result = hil_write_pwm
            (Planilla_3DOF_Crane_DWork.HILInitialize_Card,
             Planilla_3DOF_Crane_P.HILInitialize_POChannels,
             num_final_pwm_outputs,
             &Planilla_3DOF_Crane_DWork.HILInitialize_POValues[0]);
          if (local_result < 0) {
            result = local_result;
          }
        }

        if (result < 0) {
          msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
            (_rt_error_message));
          rtmSetErrorStatus(Planilla_3DOF_Crane_M, _rt_error_message);
        }
      }
    }

    hil_task_delete_all(Planilla_3DOF_Crane_DWork.HILInitialize_Card);
    hil_monitor_delete_all(Planilla_3DOF_Crane_DWork.HILInitialize_Card);
    hil_close(Planilla_3DOF_Crane_DWork.HILInitialize_Card);
    Planilla_3DOF_Crane_DWork.HILInitialize_Card = NULL;
  }
}

/*========================================================================*
 * Start of GRT compatible call interface                                 *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  Planilla_3DOF_Crane_output(tid);
}

void MdlUpdate(int_T tid)
{
  Planilla_3DOF_Crane_update(tid);
}

void MdlInitializeSizes(void)
{
  Planilla_3DOF_Crane_M->Sizes.numContStates = (0);/* Number of continuous states */
  Planilla_3DOF_Crane_M->Sizes.numY = (0);/* Number of model outputs */
  Planilla_3DOF_Crane_M->Sizes.numU = (0);/* Number of model inputs */
  Planilla_3DOF_Crane_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  Planilla_3DOF_Crane_M->Sizes.numSampTimes = (2);/* Number of sample times */
  Planilla_3DOF_Crane_M->Sizes.numBlocks = (151);/* Number of blocks */
  Planilla_3DOF_Crane_M->Sizes.numBlockIO = (49);/* Number of block outputs */
  Planilla_3DOF_Crane_M->Sizes.numBlockPrms = (1020);/* Sum of parameter "widths" */
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
  {
    int32_T i;

    /* InitializeConditions for RateTransition: '<S11>/TmpRTBAtRelational Operator5Inport1' */
    Planilla_3DOF_Crane_DWork.TmpRTBAtRelationalOperator5Inpo =
      Planilla_3DOF_Crane_P.TmpRTBAtRelationalOperator5Inpo;

    /* InitializeConditions for RateTransition: '<S11>/TmpRTBAtRelational Operator4Inport1' */
    Planilla_3DOF_Crane_DWork.TmpRTBAtRelationalOperator4Inpo =
      Planilla_3DOF_Crane_P.TmpRTBAtRelationalOperator4Inpo;

    /* InitializeConditions for RateTransition: '<S11>/TmpRTBAtProduct4Inport2' */
    Planilla_3DOF_Crane_DWork.TmpRTBAtProduct4Inport2_Buffer0 =
      Planilla_3DOF_Crane_P.TmpRTBAtProduct4Inport2_X0;

    /* InitializeConditions for RateTransition: '<S11>/TmpRTBAtRelational Operator6Inport2' */
    Planilla_3DOF_Crane_DWork.TmpRTBAtRelationalOperator6Inpo =
      Planilla_3DOF_Crane_P.TmpRTBAtRelationalOperator6Inpo;

    /* InitializeConditions for RateTransition: '<S11>/TmpRTBAtProduct5Inport2' */
    Planilla_3DOF_Crane_DWork.TmpRTBAtProduct5Inport2_Buffer0 =
      Planilla_3DOF_Crane_P.TmpRTBAtProduct5Inport2_X0;

    /* InitializeConditions for Memory: '<S22>/Memory1' */
    Planilla_3DOF_Crane_DWork.Memory1_PreviousInput =
      Planilla_3DOF_Crane_P.Memory1_X0;

    /* InitializeConditions for MATLAB Function: '<S22>/ref_and_md' */
    Planilla_3DOF_Crane_DWork.sfEvent_g = CALL_EVENT;
    Planilla_3DOF_Crane_DWork.is_active_c4_glSqxMBNa7gPxPnMgW = 0U;

    /* InitializeConditions for Memory: '<S25>/Memory' */
    Planilla_3DOF_Crane_DWork.Memory_PreviousInput[0] =
      Planilla_3DOF_Crane_P.Memory_X0[0];
    Planilla_3DOF_Crane_DWork.Memory_PreviousInput[1] =
      Planilla_3DOF_Crane_P.Memory_X0[1];
    Planilla_3DOF_Crane_DWork.Memory_PreviousInput[2] =
      Planilla_3DOF_Crane_P.Memory_X0[2];
    Planilla_3DOF_Crane_DWork.Memory_PreviousInput[3] =
      Planilla_3DOF_Crane_P.Memory_X0[3];

    /* InitializeConditions for RateTransition: '<S25>/TmpRTBAtAdd1Inport1' */
    Planilla_3DOF_Crane_DWork.TmpRTBAtAdd1Inport1_Buffer0[0] =
      Planilla_3DOF_Crane_P.TmpRTBAtAdd1Inport1_X0;
    Planilla_3DOF_Crane_DWork.TmpRTBAtAdd1Inport1_Buffer0[1] =
      Planilla_3DOF_Crane_P.TmpRTBAtAdd1Inport1_X0;

    /* InitializeConditions for RateTransition: '<S25>/TmpRTBAtAdd1Inport2' */
    Planilla_3DOF_Crane_DWork.TmpRTBAtAdd1Inport2_Buffer0[0] =
      Planilla_3DOF_Crane_P.TmpRTBAtAdd1Inport2_X0;
    Planilla_3DOF_Crane_DWork.TmpRTBAtAdd1Inport2_Buffer0[1] =
      Planilla_3DOF_Crane_P.TmpRTBAtAdd1Inport2_X0;

    /* InitializeConditions for RateTransition: '<S25>/TmpRTBAtAdd1Inport3' */
    Planilla_3DOF_Crane_DWork.TmpRTBAtAdd1Inport3_Buffer0[0] =
      Planilla_3DOF_Crane_P.TmpRTBAtAdd1Inport3_X0;
    Planilla_3DOF_Crane_DWork.TmpRTBAtAdd1Inport3_Buffer0[1] =
      Planilla_3DOF_Crane_P.TmpRTBAtAdd1Inport3_X0;

    /* InitializeConditions for UnitDelay: '<S22>/Last MVs' */
    Planilla_3DOF_Crane_DWork.LastMVs_DSTATE = Planilla_3DOF_Crane_P.LastMVs_X0;

    /* InitializeConditions for Memory: '<S22>/Memory' */
    memcpy((void *)Planilla_3DOF_Crane_DWork.Memory_PreviousInput_e, (void *)
           Planilla_3DOF_Crane_P.Memory_X0_g, 441U * sizeof(boolean_T));

    /* InitializeConditions for MATLAB Function: '<S22>/optimizer' */
    Planilla_3DOF_Crane_DWork.sfEvent_l = CALL_EVENT;
    Planilla_3DOF_Crane_DWork.is_active_c3_henUYLNwaF38eGHaqe = 0U;

    /* InitializeConditions for Memory: '<S26>/Memory1' */
    Planilla_3DOF_Crane_DWork.Memory1_PreviousInput_a =
      Planilla_3DOF_Crane_P.Memory1_X0_b;

    /* InitializeConditions for MATLAB Function: '<S26>/ref_and_md' */
    Planilla_3DOF_Crane_DWork.sfEvent = CALL_EVENT;
    Planilla_3DOF_Crane_DWork.is_active_c4_it6COyaovpvMoCC6OT = 0U;

    /* InitializeConditions for Memory: '<S29>/Memory' */
    for (i = 0; i < 5; i++) {
      Planilla_3DOF_Crane_DWork.Memory_PreviousInput_m[i] =
        Planilla_3DOF_Crane_P.Memory_X0_a[i];
    }

    /* End of InitializeConditions for Memory: '<S29>/Memory' */

    /* InitializeConditions for UnitDelay: '<S26>/Last MVs' */
    Planilla_3DOF_Crane_DWork.LastMVs_DSTATE_g =
      Planilla_3DOF_Crane_P.LastMVs_X0_c;

    /* InitializeConditions for Memory: '<S26>/Memory' */
    Planilla_3DOF_Crane_DWork.Memory_PreviousInput_j[0] =
      Planilla_3DOF_Crane_P.Memory_X0_n[0];
    Planilla_3DOF_Crane_DWork.Memory_PreviousInput_j[1] =
      Planilla_3DOF_Crane_P.Memory_X0_n[1];
    Planilla_3DOF_Crane_DWork.Memory_PreviousInput_j[2] =
      Planilla_3DOF_Crane_P.Memory_X0_n[2];

    /* InitializeConditions for MATLAB Function: '<S26>/optimizer' */
    Planilla_3DOF_Crane_DWork.sfEvent_b = CALL_EVENT;
    Planilla_3DOF_Crane_DWork.is_active_c3_w80NEcatHKOpB0PDTg = 0U;
  }
}

void MdlStart(void)
{
  /* Start for S-Function (hil_initialize_block): '<S7>/HIL Initialize' */

  /* S-Function Block: Planilla_3DOF_Crane/3DOF Crane/3-DOF Crane HIL/HIL Initialize (hil_initialize_block) */
  {
    t_int result;
    t_boolean is_switching;
    result = hil_open("qpid", "0", &Planilla_3DOF_Crane_DWork.HILInitialize_Card);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(Planilla_3DOF_Crane_M, _rt_error_message);
      return;
    }

    is_switching = false;
    result = hil_set_card_specific_options
      (Planilla_3DOF_Crane_DWork.HILInitialize_Card,
       "enc0_dir=0;enc0_filter=1;enc0_a=1;enc0_b=1;enc0_z=0;enc0_reload=0;enc1_dir=0;enc1_filter=1;enc1_a=1;enc1_b=1;enc1_z=0;enc1_reload=0;enc2_dir=0;enc2_filter=1;enc2_a=1;enc2_b=1;enc2_z=0;enc2_reload=0;enc3_dir=0;enc3_filter=1;enc3_a=1;enc3_b=1;enc3_z=0;enc3_reload=0;enc4_dir=0;enc4_filter=1;enc4_a=1;enc4_b=1;enc4_z=0;enc4_reload=0;enc5_dir=0;enc5_filter=1;enc5_a=1;enc5_b=1;enc5_z=0;enc5_reload=0;enc6_dir=0;enc6_filter=1;enc6_a=1;enc6_b=1;enc6_z=0;enc6_reload=0;enc7_dir=0;enc7_filter=1;enc7_a=1;enc7_b=1;enc7_z=0;enc7_reload=0;ext_int_polarity=0;fuse_polarity=0;convert_polarity=0;watchdog_polarity=0;ext_int_watchdog=0;fuse_watchdog=0;trig1_watchdog=0;watchdog_to_trig1=0;watchdog_to_trig2=0;counter_to_trig0=0;trigger_adcs=0;latch_on_adc=0;pwm_immediate=0",
       759);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(Planilla_3DOF_Crane_M, _rt_error_message);
      return;
    }

    result = hil_watchdog_clear(Planilla_3DOF_Crane_DWork.HILInitialize_Card);
    if (result < 0 && result != -QERR_HIL_WATCHDOG_CLEAR) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(Planilla_3DOF_Crane_M, _rt_error_message);
      return;
    }

    if ((Planilla_3DOF_Crane_P.HILInitialize_AIPStart && !is_switching) ||
        (Planilla_3DOF_Crane_P.HILInitialize_AIPEnter && is_switching)) {
      {
        int_T i1;
        real_T *dw_AIMinimums =
          &Planilla_3DOF_Crane_DWork.HILInitialize_AIMinimums[0];
        for (i1=0; i1 < 8; i1++) {
          dw_AIMinimums[i1] = Planilla_3DOF_Crane_P.HILInitialize_AILow;
        }
      }

      {
        int_T i1;
        real_T *dw_AIMaximums =
          &Planilla_3DOF_Crane_DWork.HILInitialize_AIMaximums[0];
        for (i1=0; i1 < 8; i1++) {
          dw_AIMaximums[i1] = Planilla_3DOF_Crane_P.HILInitialize_AIHigh;
        }
      }

      result = hil_set_analog_input_ranges
        (Planilla_3DOF_Crane_DWork.HILInitialize_Card,
         Planilla_3DOF_Crane_P.HILInitialize_AIChannels, 8U,
         &Planilla_3DOF_Crane_DWork.HILInitialize_AIMinimums[0],
         &Planilla_3DOF_Crane_DWork.HILInitialize_AIMaximums[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Planilla_3DOF_Crane_M, _rt_error_message);
        return;
      }
    }

    if ((Planilla_3DOF_Crane_P.HILInitialize_AOPStart && !is_switching) ||
        (Planilla_3DOF_Crane_P.HILInitialize_AOPEnter && is_switching)) {
      {
        int_T i1;
        real_T *dw_AOMinimums =
          &Planilla_3DOF_Crane_DWork.HILInitialize_AOMinimums[0];
        for (i1=0; i1 < 8; i1++) {
          dw_AOMinimums[i1] = Planilla_3DOF_Crane_P.HILInitialize_AOLow;
        }
      }

      {
        int_T i1;
        real_T *dw_AOMaximums =
          &Planilla_3DOF_Crane_DWork.HILInitialize_AOMaximums[0];
        for (i1=0; i1 < 8; i1++) {
          dw_AOMaximums[i1] = Planilla_3DOF_Crane_P.HILInitialize_AOHigh;
        }
      }

      result = hil_set_analog_output_ranges
        (Planilla_3DOF_Crane_DWork.HILInitialize_Card,
         Planilla_3DOF_Crane_P.HILInitialize_AOChannels, 8U,
         &Planilla_3DOF_Crane_DWork.HILInitialize_AOMinimums[0],
         &Planilla_3DOF_Crane_DWork.HILInitialize_AOMaximums[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Planilla_3DOF_Crane_M, _rt_error_message);
        return;
      }
    }

    if ((Planilla_3DOF_Crane_P.HILInitialize_AOStart && !is_switching) ||
        (Planilla_3DOF_Crane_P.HILInitialize_AOEnter && is_switching)) {
      {
        int_T i1;
        real_T *dw_AOVoltages =
          &Planilla_3DOF_Crane_DWork.HILInitialize_AOVoltages[0];
        for (i1=0; i1 < 8; i1++) {
          dw_AOVoltages[i1] = Planilla_3DOF_Crane_P.HILInitialize_AOInitial;
        }
      }

      result = hil_write_analog(Planilla_3DOF_Crane_DWork.HILInitialize_Card,
        Planilla_3DOF_Crane_P.HILInitialize_AOChannels, 8U,
        &Planilla_3DOF_Crane_DWork.HILInitialize_AOVoltages[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Planilla_3DOF_Crane_M, _rt_error_message);
        return;
      }
    }

    if (Planilla_3DOF_Crane_P.HILInitialize_AOReset) {
      {
        int_T i1;
        real_T *dw_AOVoltages =
          &Planilla_3DOF_Crane_DWork.HILInitialize_AOVoltages[0];
        for (i1=0; i1 < 8; i1++) {
          dw_AOVoltages[i1] = Planilla_3DOF_Crane_P.HILInitialize_AOWatchdog;
        }
      }

      result = hil_watchdog_set_analog_expiration_state
        (Planilla_3DOF_Crane_DWork.HILInitialize_Card,
         Planilla_3DOF_Crane_P.HILInitialize_AOChannels, 8U,
         &Planilla_3DOF_Crane_DWork.HILInitialize_AOVoltages[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Planilla_3DOF_Crane_M, _rt_error_message);
        return;
      }
    }

    if ((Planilla_3DOF_Crane_P.HILInitialize_EIPStart && !is_switching) ||
        (Planilla_3DOF_Crane_P.HILInitialize_EIPEnter && is_switching)) {
      {
        int_T i1;
        int32_T *dw_QuadratureModes =
          &Planilla_3DOF_Crane_DWork.HILInitialize_QuadratureModes[0];
        for (i1=0; i1 < 8; i1++) {
          dw_QuadratureModes[i1] =
            Planilla_3DOF_Crane_P.HILInitialize_EIQuadrature;
        }
      }

      result = hil_set_encoder_quadrature_mode
        (Planilla_3DOF_Crane_DWork.HILInitialize_Card,
         Planilla_3DOF_Crane_P.HILInitialize_EIChannels, 8U,
         (t_encoder_quadrature_mode *)
         &Planilla_3DOF_Crane_DWork.HILInitialize_QuadratureModes[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Planilla_3DOF_Crane_M, _rt_error_message);
        return;
      }

      {
        int_T i1;
        real_T *dw_FilterFrequency =
          &Planilla_3DOF_Crane_DWork.HILInitialize_FilterFrequency[0];
        for (i1=0; i1 < 8; i1++) {
          dw_FilterFrequency[i1] =
            Planilla_3DOF_Crane_P.HILInitialize_EIFrequency;
        }
      }

      result = hil_set_encoder_filter_frequency
        (Planilla_3DOF_Crane_DWork.HILInitialize_Card,
         Planilla_3DOF_Crane_P.HILInitialize_EIChannels, 8U,
         &Planilla_3DOF_Crane_DWork.HILInitialize_FilterFrequency[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Planilla_3DOF_Crane_M, _rt_error_message);
        return;
      }
    }

    if ((Planilla_3DOF_Crane_P.HILInitialize_EIStart && !is_switching) ||
        (Planilla_3DOF_Crane_P.HILInitialize_EIEnter && is_switching)) {
      {
        int_T i1;
        int32_T *dw_InitialEICounts =
          &Planilla_3DOF_Crane_DWork.HILInitialize_InitialEICounts[0];
        for (i1=0; i1 < 8; i1++) {
          dw_InitialEICounts[i1] = Planilla_3DOF_Crane_P.HILInitialize_EIInitial;
        }
      }

      result = hil_set_encoder_counts
        (Planilla_3DOF_Crane_DWork.HILInitialize_Card,
         Planilla_3DOF_Crane_P.HILInitialize_EIChannels, 8U,
         &Planilla_3DOF_Crane_DWork.HILInitialize_InitialEICounts[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Planilla_3DOF_Crane_M, _rt_error_message);
        return;
      }
    }

    if ((Planilla_3DOF_Crane_P.HILInitialize_POPStart && !is_switching) ||
        (Planilla_3DOF_Crane_P.HILInitialize_POPEnter && is_switching)) {
      uint32_T num_duty_cycle_modes = 0;
      uint32_T num_frequency_modes = 0;

      {
        int_T i1;
        int32_T *dw_POModeValues =
          &Planilla_3DOF_Crane_DWork.HILInitialize_POModeValues[0];
        for (i1=0; i1 < 8; i1++) {
          dw_POModeValues[i1] = Planilla_3DOF_Crane_P.HILInitialize_POModes;
        }
      }

      result = hil_set_pwm_mode(Planilla_3DOF_Crane_DWork.HILInitialize_Card,
        Planilla_3DOF_Crane_P.HILInitialize_POChannels, 8U, (t_pwm_mode *)
        &Planilla_3DOF_Crane_DWork.HILInitialize_POModeValues[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Planilla_3DOF_Crane_M, _rt_error_message);
        return;
      }

      {
        int_T i1;
        const uint32_T *p_HILInitialize_POChannels =
          Planilla_3DOF_Crane_P.HILInitialize_POChannels;
        int32_T *dw_POModeValues =
          &Planilla_3DOF_Crane_DWork.HILInitialize_POModeValues[0];
        for (i1=0; i1 < 8; i1++) {
          if (dw_POModeValues[i1] == PWM_DUTY_CYCLE_MODE || dw_POModeValues[i1] ==
              PWM_ONE_SHOT_MODE || dw_POModeValues[i1] == PWM_TIME_MODE) {
            Planilla_3DOF_Crane_DWork.HILInitialize_POSortedChans[num_duty_cycle_modes]
              = (p_HILInitialize_POChannels[i1]);
            Planilla_3DOF_Crane_DWork.HILInitialize_POSortedFreqs[num_duty_cycle_modes]
              = Planilla_3DOF_Crane_P.HILInitialize_POFrequency;
            num_duty_cycle_modes++;
          } else {
            Planilla_3DOF_Crane_DWork.HILInitialize_POSortedChans[7U -
              num_frequency_modes] = (p_HILInitialize_POChannels[i1]);
            Planilla_3DOF_Crane_DWork.HILInitialize_POSortedFreqs[7U -
              num_frequency_modes] =
              Planilla_3DOF_Crane_P.HILInitialize_POFrequency;
            num_frequency_modes++;
          }
        }
      }

      if (num_duty_cycle_modes > 0) {
        result = hil_set_pwm_frequency
          (Planilla_3DOF_Crane_DWork.HILInitialize_Card,
           &Planilla_3DOF_Crane_DWork.HILInitialize_POSortedChans[0],
           num_duty_cycle_modes,
           &Planilla_3DOF_Crane_DWork.HILInitialize_POSortedFreqs[0]);
        if (result < 0) {
          msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
            (_rt_error_message));
          rtmSetErrorStatus(Planilla_3DOF_Crane_M, _rt_error_message);
          return;
        }
      }

      if (num_frequency_modes > 0) {
        result = hil_set_pwm_duty_cycle
          (Planilla_3DOF_Crane_DWork.HILInitialize_Card,
           &Planilla_3DOF_Crane_DWork.HILInitialize_POSortedChans[num_duty_cycle_modes],
           num_frequency_modes,
           &Planilla_3DOF_Crane_DWork.HILInitialize_POSortedFreqs[num_duty_cycle_modes]);
        if (result < 0) {
          msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
            (_rt_error_message));
          rtmSetErrorStatus(Planilla_3DOF_Crane_M, _rt_error_message);
          return;
        }
      }

      {
        int_T i1;
        int32_T *dw_POModeValues =
          &Planilla_3DOF_Crane_DWork.HILInitialize_POModeValues[0];
        for (i1=0; i1 < 8; i1++) {
          dw_POModeValues[i1] =
            Planilla_3DOF_Crane_P.HILInitialize_POConfiguration;
        }
      }

      {
        int_T i1;
        int32_T *dw_POAlignValues =
          &Planilla_3DOF_Crane_DWork.HILInitialize_POAlignValues[0];
        for (i1=0; i1 < 8; i1++) {
          dw_POAlignValues[i1] = Planilla_3DOF_Crane_P.HILInitialize_POAlignment;
        }
      }

      {
        int_T i1;
        int32_T *dw_POPolarityVals =
          &Planilla_3DOF_Crane_DWork.HILInitialize_POPolarityVals[0];
        for (i1=0; i1 < 8; i1++) {
          dw_POPolarityVals[i1] = Planilla_3DOF_Crane_P.HILInitialize_POPolarity;
        }
      }

      result = hil_set_pwm_configuration
        (Planilla_3DOF_Crane_DWork.HILInitialize_Card,
         Planilla_3DOF_Crane_P.HILInitialize_POChannels, 8U,
         (t_pwm_configuration *)
         &Planilla_3DOF_Crane_DWork.HILInitialize_POModeValues[0],
         (t_pwm_alignment *)
         &Planilla_3DOF_Crane_DWork.HILInitialize_POAlignValues[0],
         (t_pwm_polarity *)
         &Planilla_3DOF_Crane_DWork.HILInitialize_POPolarityVals[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Planilla_3DOF_Crane_M, _rt_error_message);
        return;
      }

      {
        int_T i1;
        real_T *dw_POSortedFreqs =
          &Planilla_3DOF_Crane_DWork.HILInitialize_POSortedFreqs[0];
        for (i1=0; i1 < 8; i1++) {
          dw_POSortedFreqs[i1] = Planilla_3DOF_Crane_P.HILInitialize_POLeading;
        }
      }

      {
        int_T i1;
        real_T *dw_POValues = &Planilla_3DOF_Crane_DWork.HILInitialize_POValues
          [0];
        for (i1=0; i1 < 8; i1++) {
          dw_POValues[i1] = Planilla_3DOF_Crane_P.HILInitialize_POTrailing;
        }
      }

      result = hil_set_pwm_deadband(Planilla_3DOF_Crane_DWork.HILInitialize_Card,
        Planilla_3DOF_Crane_P.HILInitialize_POChannels, 8U,
        &Planilla_3DOF_Crane_DWork.HILInitialize_POSortedFreqs[0],
        &Planilla_3DOF_Crane_DWork.HILInitialize_POValues[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Planilla_3DOF_Crane_M, _rt_error_message);
        return;
      }
    }

    if ((Planilla_3DOF_Crane_P.HILInitialize_POStart && !is_switching) ||
        (Planilla_3DOF_Crane_P.HILInitialize_POEnter && is_switching)) {
      {
        int_T i1;
        real_T *dw_POValues = &Planilla_3DOF_Crane_DWork.HILInitialize_POValues
          [0];
        for (i1=0; i1 < 8; i1++) {
          dw_POValues[i1] = Planilla_3DOF_Crane_P.HILInitialize_POInitial;
        }
      }

      result = hil_write_pwm(Planilla_3DOF_Crane_DWork.HILInitialize_Card,
        Planilla_3DOF_Crane_P.HILInitialize_POChannels, 8U,
        &Planilla_3DOF_Crane_DWork.HILInitialize_POValues[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Planilla_3DOF_Crane_M, _rt_error_message);
        return;
      }
    }

    if (Planilla_3DOF_Crane_P.HILInitialize_POReset) {
      {
        int_T i1;
        real_T *dw_POValues = &Planilla_3DOF_Crane_DWork.HILInitialize_POValues
          [0];
        for (i1=0; i1 < 8; i1++) {
          dw_POValues[i1] = Planilla_3DOF_Crane_P.HILInitialize_POWatchdog;
        }
      }

      result = hil_watchdog_set_pwm_expiration_state
        (Planilla_3DOF_Crane_DWork.HILInitialize_Card,
         Planilla_3DOF_Crane_P.HILInitialize_POChannels, 8U,
         &Planilla_3DOF_Crane_DWork.HILInitialize_POValues[0]);
      if (result < 0) {
        msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
          (_rt_error_message));
        rtmSetErrorStatus(Planilla_3DOF_Crane_M, _rt_error_message);
        return;
      }
    }
  }

  /* Start for S-Function (hil_read_timebase_block): '<S7>/HIL Read Timebase' */

  /* S-Function Block: Planilla_3DOF_Crane/3DOF Crane/3-DOF Crane HIL/HIL Read Timebase (hil_read_timebase_block) */
  {
    t_error result;
    result = hil_task_create_reader(Planilla_3DOF_Crane_DWork.HILInitialize_Card,
      Planilla_3DOF_Crane_P.HILReadTimebase_SamplesInBuffer,
      Planilla_3DOF_Crane_P.HILReadTimebase_AnalogChannels, 3U,
      Planilla_3DOF_Crane_P.HILReadTimebase_EncoderChannels, 5U,
      Planilla_3DOF_Crane_P.HILReadTimebase_DigitalChannels, 5U,
      NULL, 0U,
      &Planilla_3DOF_Crane_DWork.HILReadTimebase_Task);
    if (result < 0) {
      msg_get_error_messageA(NULL, result, _rt_error_message, sizeof
        (_rt_error_message));
      rtmSetErrorStatus(Planilla_3DOF_Crane_M, _rt_error_message);
    }
  }

  /* Start for RateTransition: '<S11>/TmpRTBAtRelational Operator5Inport1' */
  Planilla_3DOF_Crane_B.TmpRTBAtRelationalOperator5Inpo =
    Planilla_3DOF_Crane_P.TmpRTBAtRelationalOperator5Inpo;

  /* Start for RateTransition: '<S11>/TmpRTBAtRelational Operator4Inport1' */
  Planilla_3DOF_Crane_B.TmpRTBAtRelationalOperator4Inpo =
    Planilla_3DOF_Crane_P.TmpRTBAtRelationalOperator4Inpo;

  /* Start for RateTransition: '<S11>/TmpRTBAtProduct4Inport2' */
  Planilla_3DOF_Crane_B.TmpRTBAtProduct4Inport2 =
    Planilla_3DOF_Crane_P.TmpRTBAtProduct4Inport2_X0;

  /* Start for RateTransition: '<S11>/TmpRTBAtRelational Operator6Inport2' */
  Planilla_3DOF_Crane_B.TmpRTBAtRelationalOperator6Inpo =
    Planilla_3DOF_Crane_P.TmpRTBAtRelationalOperator6Inpo;

  /* Start for RateTransition: '<S11>/TmpRTBAtProduct5Inport2' */
  Planilla_3DOF_Crane_B.TmpRTBAtProduct5Inport2 =
    Planilla_3DOF_Crane_P.TmpRTBAtProduct5Inport2_X0;

  /* Start for RateTransition: '<S25>/TmpRTBAtAdd1Inport1' */
  Planilla_3DOF_Crane_B.TmpRTBAtAdd1Inport1[0] =
    Planilla_3DOF_Crane_P.TmpRTBAtAdd1Inport1_X0;
  Planilla_3DOF_Crane_B.TmpRTBAtAdd1Inport1[1] =
    Planilla_3DOF_Crane_P.TmpRTBAtAdd1Inport1_X0;

  /* Start for RateTransition: '<S25>/TmpRTBAtAdd1Inport2' */
  Planilla_3DOF_Crane_B.TmpRTBAtAdd1Inport2[0] =
    Planilla_3DOF_Crane_P.TmpRTBAtAdd1Inport2_X0;
  Planilla_3DOF_Crane_B.TmpRTBAtAdd1Inport2[1] =
    Planilla_3DOF_Crane_P.TmpRTBAtAdd1Inport2_X0;

  /* Start for RateTransition: '<S25>/TmpRTBAtAdd1Inport3' */
  Planilla_3DOF_Crane_B.TmpRTBAtAdd1Inport3[0] =
    Planilla_3DOF_Crane_P.TmpRTBAtAdd1Inport3_X0;
  Planilla_3DOF_Crane_B.TmpRTBAtAdd1Inport3[1] =
    Planilla_3DOF_Crane_P.TmpRTBAtAdd1Inport3_X0;
  MdlInitialize();
}

void MdlTerminate(void)
{
  Planilla_3DOF_Crane_terminate();
}

RT_MODEL_Planilla_3DOF_Crane *Planilla_3DOF_Crane(void)
{
  Planilla_3DOF_Crane_initialize(1);
  return Planilla_3DOF_Crane_M;
}

/*========================================================================*
 * End of GRT compatible call interface                                   *
 *========================================================================*/
