# Linux Modules
This repository contain some basic examples of Linux Modules and how to use them

## List Modules that Loaded Already
```
lsmod
```

## Search a Module
```
lsmod | grep "search_parameter"
lsmod | grep "hello"
```

## Display Module Info
```
modinfo module_name.ko
modinfo hello.ko
```


## Compiling Linux Module (Makefile)
```
make
```


## Insert Module into Kernel
```
insmod module_name.ko
insmod hello.ko
```

## Remove Module from Kernel
```
rmmod module_name.ko
rmmod hello.ko
```

## Display Result of The Module
```
dmesg | tail -10
```


## Running Module with Parameters
```
insmod module_name <parameter_name=parameter_value>
insmod sum.ko a=5 b=10
```

## Remove the Module
```
rmmod sum.ko
```

## Display the Result
```
dmesg | tail -5
```
