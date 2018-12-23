obj-m += hw_module.o
all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
init:all
	sudo insmod hw_module.ko
	sudo dmesg
remove:
	sudo rmmod hw_module.ko
	sudo dmesg
