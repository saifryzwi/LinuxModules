#define LICENSE		"GPL"
#define AUTHOR		"hello@saifryzwi.me"
#define DESCRIPTION "Module to say hello"

#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/init.h>

static int __init init_hello(void) {
	printk(KERN_INFO "hello modules");
	return 0;
}

static void __exit exit_hello(void) {
	printk(KERN_INFO "bye modules");
}

module_init(init_hello);
module_exit(exit_hello);

MODULE_LICENSE(LICENSE);
MODULE_AUTHOR(AUTHOR);
MODULE_DESCRIPTION(DESCRIPTION);
