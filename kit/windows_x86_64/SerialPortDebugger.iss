[Setup]
AppName=Serial Port Debugger
AppVersion=1.0.1
DefaultDirName={commonpf}\SerialPortDebugger
DefaultGroupName=Serial Port Debugger
OutputDir=C:\Users\pengx\Desktop
OutputBaseFilename=SerialPortDebugger_Setup
SetupIconFile=D:\Code\QtProjects\serial_port_debugger\application.ico
UninstallDisplayIcon={app}\SerialPortDebugger.exe
Compression=lzma
SolidCompression=yes
PrivilegesRequired=none
ArchitecturesInstallIn64BitMode=x64

[Tasks]
Name: "desktopicon"; Description: "{cm:CreateDesktopIcon}"; GroupDescription: "{cm:AdditionalIcons}"; Flags: unchecked

[Files]
; 使用 windeployqt 打包后的完整发布目录（包含exe + Qt依赖 + MinGW运行时）
Source: "D:\Code\QtProjects\serial_port_debugger\build\Desktop_Qt_5_15_2_MinGW_64_bit-Release\release\*"; DestDir: "{app}"; \
    Excludes: "*.pdb,*.ilk,*.qch,*.pri,*.pro,*.obj"; Flags: ignoreversion recursesubdirs createallsubdirs

[Icons]
Name: "{group}\Serial Port Debugger"; Filename: "{app}\SerialPortDebugger.exe"
Name: "{commondesktop}\Serial Port Debugger"; Filename: "{app}\SerialPortDebugger.exe"; Tasks: desktopicon

[Run]
Filename: "{app}\SerialPortDebugger.exe"; Description: "{cm:LaunchProgram,Serial Port Debugger}"; Flags: nowait postinstall skipifsilent