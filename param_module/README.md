# Modules with Parameter

## Compiling Linux Module (Makefile)
```
make
```


## Insert Module into Kernel
```
insmod sum.ko a=5 b=10
```

## Insert Module into Kernel
```
insmod sub.ko a=5 b=10
```

## Remove Module from Kernel
```
rmmod sum.ko
```

## Remove Module from Kernel
```
rmmod sub.ko
```

## Display Result of The Module
```
dmesg | tail -5
```
