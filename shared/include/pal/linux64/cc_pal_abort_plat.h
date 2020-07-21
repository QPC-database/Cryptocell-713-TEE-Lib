/*
 * Copyright (c) 2001-2019, Arm Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause OR Arm's non-OSI source license
 *
 */

#ifndef _CC_PAL_ABORT_PLAT_H
#define _CC_PAL_ABORT_PLAT_H

#include "cc_pal_log.h"
#include "cc_pal_compiler.h"
#include "stdlib.h"

void CC_PalAbort(const char * exp);
#endif
