
	obj-m := driver.o

	KERNELDIR = /lib/modules/$(shell uname -r)/build

	PWD := $(shell pwd)

default:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules
	gcc -o write write.c
	gcc -o read read.c
	gcc -o ioctl ioctl.c

	
clean:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) clean
	rm -f write
	rm -f read
	rm -f ioctl
