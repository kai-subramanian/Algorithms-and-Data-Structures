#include<linux/kernel.h>
#include<linux/init.h>
#include<linux/module.h>

static int __init hello(void){
	printk(KERN_INFO "This is my first device driver sample");
	printk(KERN_INFO "Module inserted successfully");
}

module_init(hello);
