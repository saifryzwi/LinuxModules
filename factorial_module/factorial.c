#define LICENSE		"GPL"
#define AUTHOR		"hello@saifryzwi.me"
#define DESCRIPTION	"Module to find factorial of a number"

#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/init.h>

#include <linux/moduleparam.h>
#include <linux/stat.h>

static int n = 0;

static int fact(int);

module_param(n, int, 0);
MODULE_PARM_DESC(n, "the integer under consideration");

static int __init init_fact(void) {
	printk(KERN_INFO "the factorial of %d is %d", n, fact(n));
	return 0;
}

static void __exit exit_fact(void) {
	printk(KERN_INFO "exiting factorial module...");
}

static int fact(int n) {
    if (n < 1)
        return 1;
    return n * fact(n - 1);
}

module_init(init_fact);
module_exit(exit_fact);

MODULE_LICENSE(LICENSE);
MODULE_AUTHOR(AUTHOR);
MODULE_DESCRIPTION(DESCRIPTION);
