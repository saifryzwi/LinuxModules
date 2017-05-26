#define LICENSE		"GPL"
#define AUTHOR		"hello@saifryzwi.me"
#define DESCRIPTION	"Module to find whether a number is prime or not"

#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/init.h>

#include <linux/moduleparam.h>
#include <linux/stat.h>

static int count = 0;
static int a[25];

static int get_sum(void);
static int get_pro(void);

module_param(count, int, 0);
MODULE_PARM_DESC(count, "the integer to store number of entries in array");

module_param_array(a, int, &count, 0);
MODULE_PARM_DESC(a, "the integer array");

static int __init init_sum(void) {
	printk(KERN_INFO "the sum of array members is %d", get_sum());
	printk(KERN_INFO "the product of array members is %d", get_pro());
	return 0;
}

static void __exit exit_sum(void) {
	printk(KERN_INFO "exiting array module...");
}

static int get_sum(void) {
    int i, s = 0;
    for (i = 0; i < count; i++) {
        s += a[i];
    }
    return s;
}

static int get_pro(void) {
    int i, p = 0;
    for (i = 0; i < count; i++) {
        p *= a[i];
    }
    return p;
}

module_init(init_sum);
module_exit(exit_sum);

MODULE_LICENSE(LICENSE);
MODULE_AUTHOR(AUTHOR);
MODULE_DESCRIPTION(DESCRIPTION);
