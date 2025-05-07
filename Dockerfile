# 使用一个轻量级的 Linux 发行版作为基础镜像
FROM ubuntu:24.04

# 安装运行时依赖项
RUN apt-get update && apt-get install -y \
    libc6 \
    libqt5core5a \
    libqt5gui5 \
    libqt5serialport5 \
    libqt5widgets5

# 将可执行文件复制到容器中
COPY build/serial_port_debugger /usr/local/bin/

# 设置容器启动时运行的命令
ENTRYPOINT ["serial_port_debugger"]