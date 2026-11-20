/*
 * SPDX-FileCopyrightText: Copyright (c) 2026 Infineon Technologies AG,
 * or an affiliate of Infineon Technologies AG. All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr/kernel.h>
#include <zephyr/sys/poweroff.h>
#include <zephyr/sys/printk.h>

int main(void)
{
	printk("PSE84 booted; hibernating in 5 seconds\n");
	k_sleep(K_SECONDS(5));
	printk("Entering hibernate\n");
	sys_poweroff();

	return 0;
}
