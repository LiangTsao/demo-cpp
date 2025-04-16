@echo off
set MINGW_PATH=%MINGW_PATH%
if "%MINGW_PATH%"=="" (
    if exist "C:\mingw64\bin\g++.exe" (
        set MINGW_PATH=C:\mingw64
    ) else if exist "C:\MinGW\bin\g++.exe" (
        set MINGW_PATH=C:\MinGW
    ) else if exist "C:\msys64\mingw64\bin\g++.exe" (
        set MINGW_PATH=C:\msys64\mingw64
    ) else (
    for /d %%i in ("%ProgramFiles%\mingw-w64\*") do (
        if exist "%%i\bin\g++.exe" set "MINGW_PATH=%%i"
    )
)
)

where ninja >nul 2>&1
if %ERRORLEVEL% neq 0 (
    echo Error: Ninja build system not found in PATH
    echo Install Ninja from https://github.com/ninja-build/ninja/releases
    exit /b 1
)

if not exist "%MINGW_PATH%\bin\g++.exe" (
    echo Error: MinGW not found in:
    echo   Checked paths:
echo   - C:\mingw64
echo   - C:\MinGW
echo   - C:\msys64\mingw64
echo   - %ProgramFiles%\mingw-w64
    echo Please install MinGW or set MINGW_PATH environment variable
    exit /b 1
)

mkdir build 2>nul
cd build || exit /b 1

cmake -G Ninja ^
    -DCMAKE_C_COMPILER="%MINGW_PATH%\bin\gcc.exe" ^
    -DCMAKE_CXX_COMPILER="%MINGW_PATH%\bin\g++.exe" ^
    .. || exit /b 1

ninja || exit /b 1