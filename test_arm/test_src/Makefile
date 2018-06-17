TARGET=_test

#CFLAGS=-g --sysroot=/home/user/software/gcc-linaro-5.2-2015.11-x86_64_arm-linux-gnueabihf/arm-linux-gnueabihf/libc/arm-linux-gnueabihf/

#CC=$(HOME)/software/gcc-linaro-5.2-2015.11-x86_64_arm-linux-gnueabihf/bin/arm-linux-gnueabihf-gcc

CFLAGS=-g --sysroot=/usr/arm-linux-gnueabihf -static -no-pie
LDFLAGS += -L/usr/arm-linux-gnueabihf/lib/ -static
#CROSS_COMPILE=/usr/bin/arm-none-eabi/usr/bin
CC=arm-linux-gnueabihf-gcc
#LD=arm-none-eabi-ld

$(TARGET):$(TARGET).c

all: $(TARGET)

clean:
	rm $(TARGET)

