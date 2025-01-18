/*
 * SPDX-License-Identifier: BSD-2-Clause
 *
 * Copyright (c) 2024 Ventana Micro Systems Inc.
 *
 * Authors:
 *   Anup Patel <apatel@ventanamicro.com>
 */

#ifndef __FDT_CPPC_H__
#define __FDT_CPPC_H__

#include <sbi/sbi_types.h>
#include <sbi_utils/fdt/fdt_driver.h>

#ifdef CONFIG_FDT_CPPC

void fdt_cppc_init(const void *fdt);

#else

static inline void fdt_cppc_init(const void *fdt) { }

#endif

#endif
