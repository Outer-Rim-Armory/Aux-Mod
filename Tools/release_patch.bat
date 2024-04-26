@echo off
cd ..
winget install --id=BrettMayson.HEMTT  -e
hemtt script update_patch.rhai
hemtt release
pause