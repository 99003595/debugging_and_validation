obj-m += ioctl.o

KSRC=/home/ubuntu/ebuildws/kernel_ws/linux-4.14.224

all:
	make -C ${KSRC} M=${PWD} modules ARCH=arm CROSS_COMPILE=arm-linux-gnueabi-
clean:
	make -C ${KSRC} M=${pwd} clean ARCH=arm CROSS_COMPILE=arm-linux-gnueabi-
