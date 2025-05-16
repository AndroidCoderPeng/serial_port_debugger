@echo off
SETLOCAL

:: Set variables
set QT_DIR=D:\Dev\Qt5.15\5.15.2\mingw81_64
set QMAKE_DIR=%QT_DIR%\bin
set WINDEPLOYQT=%QT_DIR%\bin\windeployqt.exe
set PLUGIN_DIR=%QT_DIR%\plugins

set PROJECT_DIR=D:\Code\QtProjects\serial_port_debugger
set BUILD_DIR=%PROJECT_DIR%\build\Desktop_Qt_5_15_2_MinGW_64_bit-Release\release
set EXE_NAME=SerialPortDebugger.exe
set ICON_PATH=%PROJECT_DIR%\application.ico

set ISS_SCRIPT=%PROJECT_DIR%\kit\windows_x86_64\SerialPortDebugger.iss
set INNO_SETUP=D:\Program Files (x86)\Inno Setup\ISCC.exe
set OUTPUT_DIR=%USERPROFILE%\Desktop

echo.
echo Deploying Qt dependencies with windeployqt...
echo.

"%WINDEPLOYQT%" --dir "%BUILD_DIR%" --plugindir "%PLUGIN_DIR%" "%BUILD_DIR%\%EXE_NAME%"
if not "%errorlevel%"=="0" (
    echo Error: windeployqt execution failed.
    exit /b 1
)

echo.
echo Copying MinGW runtime libraries...
echo.

copy /Y "%QMAKE_DIR%\libwinpthread-1.dll" "%BUILD_DIR%"
copy /Y "%QMAKE_DIR%\libstdc++-6.dll" "%BUILD_DIR%"
copy /Y "%QMAKE_DIR%\libgcc_s_seh-1.dll" "%BUILD_DIR%"

echo.
echo Copying Qt platform plugins...
echo.

xcopy /E /I /Y "%PLUGIN_DIR%\platforms" "%BUILD_DIR%\platforms"

if not exist "%BUILD_DIR%\%EXE_NAME%" (
    echo Error: Target executable %EXE_NAME% not found. Please ensure the build is successful.
    exit /b 1
)

echo.
echo Packaging with Inno Setup...
echo.

if not exist "%ISS_SCRIPT%" (
    echo Error: Inno Setup script not found at %ISS_SCRIPT%
    exit /b 1
)

"%INNO_SETUP%" "%ISS_SCRIPT%"

if errorlevel 1 (
    echo Error: Inno Setup packaging failed!
    exit /b 1
)

echo.
echo Packaging completed successfully! Installer generated on the desktop.
echo.

ENDLOCAL