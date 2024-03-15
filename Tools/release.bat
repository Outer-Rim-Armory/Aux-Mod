@echo off
cd ..
winget install --id=BrettMayson.HEMTT  -e
hemtt script update_minor.rhai
hemtt release
pause