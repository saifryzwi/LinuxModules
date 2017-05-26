#define LICENSE		"GPL"
#define AUTHOR		"hello@saifryzwi.me"
#define DESCRIPTION	"Module to find whether a sequence of characters is palindrome"

#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/init.h>

#include <linux/moduleparam.h>
#include <linux/stat.h>

#include <linux/string.h>

static char *text = "";

static int is_palindrome(void);

module_param(text, charp, 0000);
MODULE_PARM_DESC(n, "the integer under consideration");

static int __init init_palindrome(void) {
    if(is_palindrome()) {
        printk(KERN_INFO "the string %s is palindrome", text);
    } else {
        printk(KERN_INFO "the string %s is not palindrome", text);
    }
	return 0;
}

static void __exit exit_palindrome(void) {
	printk(KERN_INFO "exiting palindrome module...");
}

static int is_palindrome(void) {
    int i, l = strlen(text);
    for (i = 0; i < l; i++) {
        if (text[i] != text[l - i - 1])
            return 0;
    }
    return 1;
}

module_init(init_palindrome);
module_exit(exit_palindrome);

MODULE_LICENSE(LICENSE);
MODULE_AUTHOR(AUTHOR);
MODULE_DESCRIPTION(DESCRIPTION);
