/*
 * Copyright (C) 2010 Trusted Logic S.A.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

<<<<<<< HEAD:include/linux/pn544.h
#define PN544_MAGIC	0xE9

=======
#ifndef _LINUX_PN547_H
#define _LINUX_PN547_H

#define PN547_MAGIC	0xE9

>>>>>>> 4c0b860... misc: Update pn547 NFC Controller driver:include/linux/pn547.h
/*
 * PN544 power control via ioctl
 * PN544_SET_PWR(0): power off
 * PN544_SET_PWR(1): power on
<<<<<<< HEAD:include/linux/pn544.h
 * PN544_SET_PWR(2): reset and power on with firmware download enabled
 */
#define PN544_SET_PWR	_IOW(PN544_MAGIC, 0x01, unsigned int)

struct pn544_i2c_platform_data {
	unsigned int irq_gpio;
	unsigned int ven_gpio;
	unsigned int firm_gpio;
};
=======
 * PN544_SET_PWR(>1): power on with firmware download enabled
 */
#define PN547_SET_PWR	_IOW(PN547_MAGIC, 0x01, unsigned int)

struct pn547_i2c_platform_data {
	void (*conf_gpio) (void);
	int irq_gpio;
	int ven_gpio;
	int firm_gpio;
#ifdef CONFIG_NFC_PN547_CLOCK_REQUEST
	int clk_req_gpio;
	int clk_req_irq;
#endif
#ifdef CONFIG_OF
	u32 irq_gpio_flags;
	u32 ven_gpio_flags;
	u32 firm_gpio_flags;
	u32 pvdd_en_gpio_flags;
#endif
	int pvdd_en_gpio;
	int configure_gpio;
	int configure_mpp;
	bool dynamic_config;
};

#endif
>>>>>>> 4c0b860... misc: Update pn547 NFC Controller driver:include/linux/pn547.h
