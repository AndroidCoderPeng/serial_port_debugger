[Setup]
AppName=SerialPortDebugger
AppVersion=1.0.1
DefaultDirName={commonpf}\SerialPortDebugger
DefaultGroupName=SerialPortDebugger
OutputDir=C:\Users\Administrator\Desktop
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
; 从 temp_build 目录复制所有文件
Source: "C:\Users\Administrator\Desktop\temp_build\*"; DestDir: "{app}"; Flags: ignoreversion recursesubdirs createallsubdirs

[Icons]
Name: "{group}\SerialPortDebugger"; Filename: "{app}\SerialPortDebugger.exe"
Name: "{commondesktop}\SerialPortDebugger"; Filename: "{app}\SerialPortDebugger.exe"; Tasks: desktopicon

[Run]
Filename: "{app}\SerialPortDebugger.exe"; Description: "{cm:LaunchProgram,SerialPortDebugger}"; Flags: nowait postinstall skipifsilent