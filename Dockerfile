FROM debian:bookworm as build

RUN apt-get update &&\
    apt-get install -y build-essential git make \
    pkg-config cmake ninja-build &&\
    apt-get install cmake &&\
    apt-get install -y gdb

ENTRYPOINT ["bash"]
