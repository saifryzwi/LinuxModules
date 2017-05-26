# Array Module
Module to find sum and product of an array

## Compiling Linux Module (Makefile)
```
make
```


## Insert Module into Kernel
```
insmod array.ko count=5 a=1,2,3,4,5
```

## Remove Module from Kernel
```
rmmod array.ko
```

## Display Result of The Module
```
dmesg | tail -3
```
