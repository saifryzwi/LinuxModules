#define LICENSE		"GPL"
#define AUTHOR		"hello@saifryzwi.me"
#define DESCRIPTION	"Module to add two numbers"

#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/init.h>

static int a = 0, b = 0;

module_param(a, int, 0);
MODULE_PARM_DESC(a, "the integer 1");

module_param(b, int, 0);
MODULE_PARM_DESC(b, "the integer 2");

static int __init init_sum(void) {
	printk(KERN_INFO "the sum is %d", a + b);
	return 0;
}

static void __exit exit_sum(void) {
	printk(KERN_INFO "bye modules");
}

module_init(init_sum);
module_exit(exit_sum);

MODULE_LICENSE(LICENSE);
MODULE_AUTHOR(AUTHOR);
MODULE_DESCRIPTION(DESCRIPTION);
