#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x27271c6b, "cdev_del" },
	{ 0x8b970f46, "device_destroy" },
	{ 0x6775d5d3, "class_destroy" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x59c02473, "class_create" },
	{ 0x2c9a4c10, "device_create" },
	{ 0xa01f13a6, "cdev_init" },
	{ 0x3a6d85d3, "cdev_add" },
	{ 0x10e97c25, "my_i2c_start" },
	{ 0xcc7be3bc, "my_i2c_write_byte" },
	{ 0x8985cfe1, "my_i2c_wait_ack" },
	{ 0x93887e8e, "my_i2c_stop" },
	{ 0x92997ed8, "_printk" },
	{ 0x20b90bfc, "my_i2c_read_byte" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "soft_i2c");


MODULE_INFO(srcversion, "CA5739408E376E07D10F451");
