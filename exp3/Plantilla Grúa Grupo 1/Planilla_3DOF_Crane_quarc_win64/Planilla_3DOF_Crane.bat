@call "C:\Users\UCH\AppData\Roaming\MathWorks\MATLAB\R2011b\mexopts.bat"
@echo on
call "%VCINSTALLDIR%\vcvarsall.bat" x86_amd64
set MATLAB=C:\PROGRA~1\MATLAB\R2011b
nmake -f Planilla_3DOF_Crane.mk  GENERATE_REPORT=0 SHOW_TIMES=0 DEBUG=0 DEBUG_HEAP=0
