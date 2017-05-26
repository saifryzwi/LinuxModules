# Prime Module
Module to find whether a number is prime or not

## Compiling Linux Module (Makefile)
```
make
```


## Insert Module into Kernel
```
insmod prime.ko n=5
```

## Remove Module from Kernel
```
rmmod prime.ko
```

## Display Result of The Module
```
dmesg | tail -2
```
