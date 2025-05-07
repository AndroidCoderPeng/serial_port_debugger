# 指定目标系统
set(CMAKE_SYSTEM_NAME Linux)
set(CMAKE_SYSTEM_PROCESSOR aarch64)

# 指定交叉编译器
set(CMAKE_C_COMPILER aarch64-linux-gnu-gcc)
set(CMAKE_CXX_COMPILER aarch64-linux-gnu-g++)

# 指定 sysroot（如果需要）
set(CMAKE_SYSROOT /usr/aarch64-linux-gnu)

# 指定 Qt 目录
set(ENV{QTDIR} /usr/lib/aarch64-linux-gnu/qt5)
set(ENV{PATH} $ENV{PATH}:/usr/lib/aarch64-linux-gnu/qt5/bin)