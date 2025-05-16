1、编译时，把【build_appimage.sh】放到Linux用户根目录，并用【chomd +x】给它授权
2、将本目录下的所有文件复制到Linux用户根目录的其他文件下（比如：Download），然后给它们分别授权
3、最后执行【./build_appimage.sh】执行，最后会在用户根目录生成一个【SerialPortDebugger.AppImage】，此程序包可在任意x86_64的AMD架构的Linux平台运行【./SerialPortDebugger.AppImage】