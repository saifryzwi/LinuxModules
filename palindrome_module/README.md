# Palindrome Module
Module to check whether a string is palindrome or not

## Compiling Linux Module (Makefile)
```
make
```


## Insert Module into Kernel
```
insmod palindrome.ko text="level"
```

## Remove Module from Kernel
```
rmmod factorial.ko
```

##Display Result of The Module
```
dmesg | tail -2
```
