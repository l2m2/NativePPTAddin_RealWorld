@echo off

set Configuration=%1
set LibrariesArchitecture=%2
set DST=%~dp0..\src\%Configuration%\
if "%LibrariesArchitecture%" == "x64" (
  set DST=%~dp0..\src\x64\%Configuration%\
)
set THIRDPARTY=%~dp0..\thirdparty\

if exist "%DST%" rmdir /S /Q "%DST%"
mkdir "%DST%"

if "%Configuration%" == "Debug" (
  xcopy "%THIRDPARTY%duilib\bin\%LibrariesArchitecture%\DuiLib_d.dll" "%DST%" /Y
  xcopy "%THIRDPARTY%duilib\bin\%LibrariesArchitecture%\DuiLib_d.pdb" "%DST%" /Y
) else (
  xcopy "%THIRDPARTY%duilib\bin\%LibrariesArchitecture%\DuiLib.dll" "%DST%" /Y
)

xcopy %~dp0..\src\NativePPTAddin\resource\image "%DST%image\" /Y