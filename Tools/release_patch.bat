@echo off
winget install --id=BrettMayson.HEMTT  -e
hemtt script update_build.rhai
hemtt release
pause