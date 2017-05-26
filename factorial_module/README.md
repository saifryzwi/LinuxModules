# Factorial Module
Module to find factorial of an integer

## Compiling Linux Module (Makefile)
```
make
```


## Insert Module into Kernel
```
insmod factorial.ko n=5
```

## Remove Module from Kernel
```
rmmod factorial.ko
```

## Display Result of The Module
```
dmesg | tail -2
```
