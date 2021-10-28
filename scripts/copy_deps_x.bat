@echo off

set Configuration=%1
set DST=%~dp0..\src\%Configuration%\
set THIRDPARTY=%~dp0..\thirdparty\

if exist "%DST%" rmdir /S /Q "%DST%"
mkdir "%DST%"

if "%Configuration%" == "Debug" (
  xcopy "%THIRDPARTY%duilib\bin\DuiLib_d.dll" "%DST%" /Y
  xcopy "%THIRDPARTY%duilib\bin\DuiLib_d.pdb" "%DST%" /Y
) else (
  xcopy "%THIRDPARTY%duilib\bin\DuiLib.dll" "%DST%" /Y
)

xcopy %~dp0..\src\NativePPTAddin\resource\image "%DST%image\" /Y

xcopy "%THIRDPARTY%log4cpp\bin\%Configuration%\log4cpp.dll" "%DST%" /Y