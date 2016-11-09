@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2014a
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2014a\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=ILTM_warm_mex
set MEX_NAME=ILTM_warm_mex
set MEX_EXT=.mexw64
call mexopts.bat
echo # Make settings for ILTM > ILTM_mex.mki
echo COMPILER=%COMPILER%>> ILTM_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> ILTM_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> ILTM_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> ILTM_mex.mki
echo LINKER=%LINKER%>> ILTM_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> ILTM_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> ILTM_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> ILTM_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> ILTM_mex.mki
echo BORLAND=%BORLAND%>> ILTM_mex.mki
echo OMPFLAGS= >> ILTM_mex.mki
echo OMPLINKFLAGS= >> ILTM_mex.mki
echo EMC_COMPILER=msvc120>> ILTM_mex.mki
echo EMC_CONFIG=optim>> ILTM_mex.mki
"C:\Program Files\MATLAB\R2014a\bin\win64\gmake" -B -f ILTM_mex.mk
