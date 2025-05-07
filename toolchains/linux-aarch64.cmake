# 指定目标系统
set(CMAKE_SYSTEM_NAME Linux)
set(CMAKE_SYSTEM_PROCESSOR aarch64)

# 指定 C 和 C++ 编译器
set(CMAKE_C_COMPILER /usr/bin/aarch64-linux-gnu-gcc)
set(CMAKE_CXX_COMPILER /usr/bin/aarch64-linux-gnu-g++)

# Specify the root directory for the target system
set(CMAKE_SYSROOT /usr/aarch64-linux-gnu)

# 指定 Qt5 的路径
set(CMAKE_PREFIX_PATH /usr/lib/aarch64-linux-gnu/qt5)