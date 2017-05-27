#define LICENSE		"GPL"
#define AUTHOR		"hello@saifryzwi.me"
#define DESCRIPTION	"Module to sort contents of array"

#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/init.h>

#include <linux/moduleparam.h>
#include <linux/stat.h>

static int count = 0;
static int a[25];

static void sort_array(void);
static void show_array(void);

module_param(count, int, 0);
MODULE_PARM_DESC(count, "the integer to store number of entries in array");

module_param_array(a, int, &count, 0);
MODULE_PARM_DESC(a, "the integer array");

static int __init init_sort(void) {
	sort_array();
	show_array();
	return 0;
}

static void __exit exit_sort(void) {
	printk(KERN_INFO "exiting array sort module...");
}

static void sort_array(void) {
    int i, j, temp;
    for (i = 0; i < count - 1; i++) {
        for (j = i + 1; j < count; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

static void show_array(void) {
    int i;
    for (i = 0; i < count; i++) {
	    printk(KERN_INFO "%d\t", a[i]);
    }
}

module_init(init_sort);
module_exit(exit_sort);

MODULE_LICENSE(LICENSE);
MODULE_AUTHOR(AUTHOR);
MODULE_DESCRIPTION(DESCRIPTION);
