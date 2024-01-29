@echo off
if "%~1"=="" (
    set option=default
) else (
    set option=%1
)
hemtt.exe launch %option%
pause