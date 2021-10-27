@echo off

set DST=%~dp0..\src\Release\
set THIRDPARTY=%~dp0..\thirdparty\

xcopy "%THIRDPARTY%duilib\bin\DuiLib_d.dll" "%DST%" /Y
xcopy "%THIRDPARTY%duilib\bin\DuiLib_d.pdb" "%DST%" /Y

xcopy %~dp0..\src\NativePPTAddin\resource\image "%DST%image\"