/* Copyright (c) 2002,2007-2016, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#define ANY_ID (~0)

static const struct adreno_gpu_core adreno_gpulist[] = {
	{
		.gpurev = ADRENO_REV_A306,
		.core = 3,
		.major = 0,
		.minor = 6,
		.patchid = 0x00,
		.pm4fw_name = "a300_pm4.fw",
		.pfpfw_name = "a300_pfp.fw",
		.gpudev = &adreno_a3xx_gpudev,
		.gmem_size = SZ_128K,
		.busy_mask = 0x7FFFFFFE,
	},
	{
		.gpurev = ADRENO_REV_A306A,
		.core = 3,
		.major = 0,
		.minor = 6,
		.patchid = 0x20,
		.pm4fw_name = "a300_pm4.fw",
		.pfpfw_name = "a300_pfp.fw",
		.gpudev = &adreno_a3xx_gpudev,
		.gmem_size = SZ_128K,
		.busy_mask = 0x7FFFFFFE,
	},
	{
		.gpurev = ADRENO_REV_A304,
		.core = 3,
		.major = 0,
		.minor = 4,
		.patchid = 0x00,
		.pm4fw_name = "a300_pm4.fw",
		.pfpfw_name = "a300_pfp.fw",
		.gpudev = &adreno_a3xx_gpudev,
		.gmem_size = (SZ_64K + SZ_32K),
		.busy_mask = 0x7FFFFFFE,
	},
};
