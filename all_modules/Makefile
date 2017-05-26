obj-m += array.o
obj-m += factorial.o
obj-m += hello.o
obj-m += palindrome.o
obj-m += prime.o

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
