/*
 * Code for supporting AM335X EVM.
 *
 * Copyright (C) {2011} Texas Instruments Incorporated - http://www.ti.com/
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation version 2.
 *
 * This program is distributed "as is" WITHOUT ANY WARRANTY of any
 * kind, whether express or implied; without even the implied warranty
 * of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef _BOARD_AM335X_H
#define _BOARD_AM335X_H

#define LOW_COST_EVM		0
#define BEAGLE_BONE_OLD		1
#define BEAGLE_BONE_A3		2
#define CALIXTO_EVM		3
#define EVM_SK			4

#define IND_AUT_MTR_EVM		5
#define GEN_PURP_EVM		7
#define IP_PHN_EVM		8


/* REVIST : check posibility of PROFILE_(x) syntax usage */
#define PROFILE_NONE	-1	/* Few EVM doesn't have profiles */
#define PROFILE_0		(0x1 << 0)
#define PROFILE_1		(0x1 << 1)
#define PROFILE_2		(0x1 << 2)
#define PROFILE_3		(0x1 << 3)
#define PROFILE_4		(0x1 << 4)
#define PROFILE_5		(0x1 << 5)
#define PROFILE_6		(0x1 << 6)
#define PROFILE_7		(0x1 << 7)
#define PROFILE_ALL		0xFF

#ifndef __ASSEMBLER__
void am335x_evm_set_id(unsigned int evmid);
int am335x_evm_get_id(void);
void am33xx_cpsw_macidfillup(char *eeprommacid0, char *eeprommacid1);
void am33xx_d_can_init(unsigned int instance);

#endif
#endif
