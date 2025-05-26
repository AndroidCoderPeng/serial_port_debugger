#!/bin/bash

# =============== 配置参数 ===============
APP_NAME="SerialPortDebugger"
BUILD_DIR="/home/unitree/Desktop/serial_port_debugger/build/Desktop_Qt_5_12_8_ARM64_bit-Release"
APP_EXECUTABLE="$BUILD_DIR/$APP_NAME"
APP_ICON="/home/unitree/Desktop/serial_port_debugger/application.png"
APP_DIR_NAME="${APP_NAME}.AppDir"

LINUXDEPLOY="/home/unitree/Downloads/linuxdeploy-aarch64.AppImage"
LINUXDEPLOY_PLUGIN_QT="/home/vm/Download/linuxdeploy-plugin-qt-x86_64.AppImage"
APPIMAGETOOL="/home/vm/Download/appimagetool-x86_64.AppImage"
RUNTIME_FILE="/home/vm/Download/runtime-x86_64"
QT_BIN_PATH="/home/vm/Qt/5.15.2/gcc_64/bin"

OUTPUT_APPIMAGE="${APP_NAME}.AppImage"

# 设置 QMAKE 环境变量
export QMAKE="$QT_BIN_PATH/qmake"

# =============== 开始打包 ===============
echo "开始打包流程..."

echo "清理旧的构建..."
rm -rf "$APP_DIR_NAME" "$OUTPUT_APPIMAGE"
mkdir -p "$APP_DIR_NAME/usr/bin"
cp "$APP_EXECUTABLE" "$APP_DIR_NAME/usr/bin/"
if [ $? -ne 0 ]; then echo "错误: 程序拷贝失败."; exit 1; fi

# 复制图标文件
if [ -f "$APP_ICON" ]; then
    ICON_PATH="$APP_DIR_NAME/usr/share/icons/hicolor/256x256/apps/${APP_NAME}.png"
    mkdir -p "$(dirname "$ICON_PATH")"
    cp "$APP_ICON" "$ICON_PATH"
    if [ $? -ne 0 ]; then echo "错误: 图标拷贝失败."; exit 1; fi
else
    echo "警告: 应用程序图标未找到."
fi

# 创建 .desktop 文件
DESKTOP_FILE="$APP_DIR_NAME/usr/share/applications/${APP_NAME}.desktop"
mkdir -p "$(dirname "$DESKTOP_FILE")"
if [ ! -f "$DESKTOP_FILE" ]; then
    echo "创建 .desktop 文件..."
    cat > "$DESKTOP_FILE" <<EOL
[Desktop Entry]
Name=$APP_NAME
Exec=$APP_NAME
Icon=$APP_ICON
Type=Application
Categories=Utility;
EOL
    if [ $? -ne 0 ]; then echo "错误: .desktop 文件创建失败."; exit 1; fi
fi

echo "使用 linuxdeploy 打包并部署 Qt 依赖..."
chmod +x "$LINUXDEPLOY" "$LINUXDEPLOY_PLUGIN_QT"
"$LINUXDEPLOY" --appdir "$APP_DIR_NAME" --plugin qt
if [ $? -ne 0 ]; then echo "错误: 在使用 linuxdeploy 时发生错误."; exit 1; fi

echo "使用 appimagetool 打包为 AppImage..."
chmod +x "$APPIMAGETOOL"
"$APPIMAGETOOL" --runtime-file "$RUNTIME_FILE" "$APP_DIR_NAME" "$OUTPUT_APPIMAGE"
if [ $? -ne 0 ]; then echo "错误: 在使用 appimagetool 时发生错误."; exit 1; fi

ls -l "$OUTPUT_APPIMAGE"
echo "✅ 打包完成！输出文件为: $OUTPUT_APPIMAGE"