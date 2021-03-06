/*
 * include/linux/amlogic/media/sound/spdif_info.h
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

#ifndef __SPDIF_INFO_H__
#define __SPDIF_INFO_H__

#include <sound/pcm.h>

struct iec958_chsts {
	unsigned short chstat0_l;
	unsigned short chstat1_l;
	unsigned short chstat0_r;
	unsigned short chstat1_r;
};

extern bool spdif_is_4x_clk(void);

extern void spdif_get_channel_status_info(struct iec958_chsts *chsts,
	unsigned int rate);

extern void spdif_notify_to_hdmitx(struct snd_pcm_substream *substream);

#endif
