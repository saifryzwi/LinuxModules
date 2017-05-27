#define LICENSE		"GPL"
#define AUTHOR		"hello@saifryzwi.me"
#define DESCRIPTION	"Module to find whether a number is prime or not"

#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/init.h>

#include <linux/moduleparam.h>
#include <linux/stat.h>

static int n = 0;

static int is_prime(int);

module_param(n, int, 0);
MODULE_PARM_DESC(n, "the integer under consideration");

static int __init init_prime(void) {
    if(is_prime(n)) {
        printk(KERN_INFO "the integer %d is prime", n);
    } else {
        printk(KERN_INFO "the integer %d is not prime", n);
    }
	return 0;
}

static void __exit exit_prime(void) {
	printk(KERN_INFO "exiting prime module...");
}

static int is_prime(int n) {
    int i;
    for (i = 2; i < n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

module_init(init_prime);
module_exit(exit_prime);

MODULE_LICENSE(LICENSE);
MODULE_AUTHOR(AUTHOR);
MODULE_DESCRIPTION(DESCRIPTION);
