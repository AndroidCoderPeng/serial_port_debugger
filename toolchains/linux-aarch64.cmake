# toolchains/linux-aarch64.cmake
set(CMAKE_SYSTEM_NAME Linux)
set(CMAKE_SYSTEM_PROCESSOR aarch64)

# Specify the cross-compiler
set(CMAKE_C_COMPILER aarch64-linux-gnu-gcc)
set(CMAKE_CXX_COMPILER aarch64-linux-gnu-g++)

# Specify the sysroot directory
set(CMAKE_SYSROOT /usr/aarch64-linux-gnu)

# Specify the Qt directory for the target system
set(ENV{QTDIR} /usr/lib/aarch64-linux-gnu/qt5)