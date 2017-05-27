# Array Sort Module
Module to sort elements of array in ascending order

## Compiling Linux Module (Makefile)
```
make
```


## Insert Module into Kernel
```
insmod sort.ko count=5 a=3,2,4,1,5
```

## Remove Module from Kernel
```
rmmod sort.ko
```

## Display Result of The Module
```
dmesg | tail -10
```
