@echo off

echo === Compiling documentation ===
echo.

mkdir ..\docs > nul 2> nul

copy overview.txt ..\addons
copy DPSO_Logo.png ..\addons

perl "Natural Docs\NaturalDocs" -r -i "..\addons" -o HTML "..\docs" -xi "..\addons\main\functions\ais" -p "DPSO-fundamentals" -s Default DPSO

del /Q ..\addons\overview.txt
del /Q ..\addons\DPSO_Logo.png
