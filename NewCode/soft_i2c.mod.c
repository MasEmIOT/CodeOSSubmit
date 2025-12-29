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

KSYMTAB_FUNC(my_i2c_start, "", "");
KSYMTAB_FUNC(my_i2c_stop, "", "");
KSYMTAB_FUNC(my_i2c_wait_ack, "", "");
KSYMTAB_FUNC(my_i2c_write_byte, "", "");
KSYMTAB_FUNC(my_i2c_read_byte, "", "");

SYMBOL_CRC(my_i2c_start, 0x10e97c25, "");
SYMBOL_CRC(my_i2c_stop, 0x93887e8e, "");
SYMBOL_CRC(my_i2c_wait_ack, 0x8985cfe1, "");
SYMBOL_CRC(my_i2c_write_byte, 0xcc7be3bc, "");
SYMBOL_CRC(my_i2c_read_byte, 0x20b90bfc, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xedc03953, "iounmap" },
	{ 0x92997ed8, "_printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xaf56600a, "arm64_use_ng_mappings" },
	{ 0x40863ba1, "ioremap_prot" },
	{ 0x474e54d2, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "573F8FDA61E585CC8027A18");
