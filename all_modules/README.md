# Linux Modules

## Array Modules
Module to find sum and product of an array

### Insert Module into Kernel
```
insmod array.ko count=5 a=1,2,3,4,5
```


## Factorial Module
Module to find factorial of an integer

### Insert Module into Kernel
```
insmod factorial.ko n=5
```


## Hello Module
Module to print Hello in log file

### Insert Module into Kernel
```
insmod hello.ko
```


## Palindrome Module
Module to check whether a string is palindrome or not

### Insert Module into Kernel
```
insmod palindrome.ko text="level"
```

## Prime Module
Module to find whether a number is prime or not

### Insert Module into Kernel
```
insmod prime.ko n=5
```
