/*
 * drivers/amlogic/irblaster/meson-irblaster.h
 *
 * Copyright (C) 2017 Amlogic, Inc. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 */

#ifndef AM_IRBLASTER_H
#define AM_IRBLASTER_H
#define MAX_PLUSE 1024

enum  {	/* Modulation level*/
	fisrt_low  = 0,
	fisrt_high = 1
};

struct blaster_window {
	unsigned int winnum;
	unsigned int winarray[MAX_PLUSE];
	int consumerir_freqs;
	unsigned int consumerir_dutycycle;
	struct mutex lock;
	void __iomem	*reg_base;
	void __iomem	*reset_base;
};

#define AO_IR_BLASTER_ADDR0 (0x0)
#define AO_IR_BLASTER_ADDR1 (0x4)
#define AO_IR_BLASTER_ADDR2 (0x8)
#define AO_IR_BLASTER_ADDR3 (0xc)
#define AO_RTI_GEN_CTNL_REG0 (0x0)

#define CONSUMERIR_TRANSMIT     0x5500
#define GET_CARRIER         0x5501
#define SET_CARRIER         0x5502
#define SET_DUTYCYCLE         0x5503
#endif

