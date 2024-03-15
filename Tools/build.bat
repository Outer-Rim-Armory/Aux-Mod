@echo off
cd ..
winget install --id=BrettMayson.HEMTT  -e
hemtt build
pause