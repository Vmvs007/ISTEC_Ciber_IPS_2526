@echo off
set /p a=
set /p b=
for /L %%i in (%a%,1,%b%) do if %%i %% 2==0 echo %%i
pause
