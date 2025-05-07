FROM ubuntu:24.04

# 安装交叉编译工具链和依赖项
RUN apt-get update && apt-get install -y \
    g++-aarch64-linux-gnu \
    gcc-aarch64-linux-gnu \
    libc6-dev-arm64-cross \
    qt5-qmake \
    qtbase5-dev \
    qtbase5-dev-tools \
    qttools5-dev-tools \
    qttools5-dev \
    qtdeclarative5-dev \
    libqt5serialport5-dev \
    cmake  # 添加 cmake

# 设置环境变量
ENV QTDIR=/usr/lib/aarch64-linux-gnu/qt5
ENV PATH=$PATH:/usr/lib/aarch64-linux-gnu/qt5/bin