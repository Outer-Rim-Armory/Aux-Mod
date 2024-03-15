@echo off
winget install --id=BrettMayson.HEMTT  -e
if "%~1"=="" (
    set option=default
) else (
    set option=%1
)
hemtt launch %option%
pause