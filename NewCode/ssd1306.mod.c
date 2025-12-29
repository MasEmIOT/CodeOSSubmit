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
	{ 0x10e97c25, "my_i2c_start" },
	{ 0xcc7be3bc, "my_i2c_write_byte" },
	{ 0x8985cfe1, "my_i2c_wait_ack" },
	{ 0x93887e8e, "my_i2c_stop" },
	{ 0x92997ed8, "_printk" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "soft_i2c");


MODULE_INFO(srcversion, "1F145847586588D509B424B");
