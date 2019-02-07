/*
 * Copyright (C) Huawei Technologies Co., Ltd. 2012-2015. All rights reserved.
 * foss@huawei.com
 *
 * If distributed as part of the Linux kernel, the following license terms
 * apply:
 *
 * * This program is free software; you can redistribute it and/or modify
 * * it under the terms of the GNU General Public License version 2 and
 * * only version 2 as published by the Free Software Foundation.
 * *
 * * This program is distributed in the hope that it will be useful,
 * * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * * GNU General Public License for more details.
 * *
 * * You should have received a copy of the GNU General Public License
 * * along with this program; if not, write to the Free Software
 * * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307, USA
 *
 * Otherwise, the following license terms apply:
 *
 * * Redistribution and use in source and binary forms, with or without
 * * modification, are permitted provided that the following conditions
 * * are met:
 * * 1) Redistributions of source code must retain the above copyright
 * *    notice, this list of conditions and the following disclaimer.
 * * 2) Redistributions in binary form must reproduce the above copyright
 * *    notice, this list of conditions and the following disclaimer in the
 * *    documentation and/or other materials provided with the distribution.
 * * 3) Neither the name of Huawei nor the names of its contributors may
 * *    be used to endorse or promote products derived from this software
 * *    without specific prior written permission.
 *
 * * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 */

#ifndef __OSL_CACHE_H
#define __OSL_CACHE_H

typedef enum				/* CACHE_TYPE */
{
    OSL_INSTRUCTION_CACHE ,
    OSL_DATA_CACHE
} OSL_CACHE_TYPE;
#ifndef OK
#define OK                  (0)
#endif

#ifndef ERROR
#define ERROR               (1)
#endif


#ifdef __KERNEL__
#include <linux/dma-mapping.h>

#elif defined(__OS_VXWORKS__)
#include <cacheLib.h>

#define OSL_CACHE_ALIGN_SIZE    _CACHE_ALIGN_SIZE

enum dma_data_direction {
	DMA_BIDIRECTIONAL = 0,
	DMA_TO_DEVICE = 1,
	DMA_FROM_DEVICE = 2,
	DMA_NONE = 3,
};

static __inline__ int osl_cache_flush( OSL_CACHE_TYPE type,void *address,unsigned int bytes  )
{
    int ret = OK;
    ret = (int)cacheFlush (type,address,bytes);
    return ret;
}
static __inline__ int osl_cache_invalid( OSL_CACHE_TYPE type,void *address,unsigned int bytes  )
{
    return (int)cacheInvalidate (type,address,bytes);
}

#elif defined(__OS_RTOSCK__) ||defined(__OS_RTOSCK_SMP__)
#include "sre_cache.h"
#include "osl_types.h"
#include "osl_generic.h"

#define OSL_CACHE_ALIGN_SIZE    32

//lint -esym(528,*)
/*lint -save -e528*/
static __inline__ int osl_cache_flush( OSL_CACHE_TYPE type,void *address,unsigned int bytes  )
{
    int ret = OK;
    if(OSL_DATA_CACHE == type)
    {
        ret =  (int)SRE_DCacheFlush(address,OSL_ROUND_UP(bytes, OSL_CACHE_ALIGN_SIZE) ,TRUE);
    }
    return ret;
}
static __inline__ int osl_cache_invalid( OSL_CACHE_TYPE type,void *address,unsigned int bytes  )
{
    if(OSL_DATA_CACHE == type)
    {
        return (int)SRE_DCacheInv(address,OSL_ROUND_UP(bytes, OSL_CACHE_ALIGN_SIZE),TRUE);
    }
    else
    {
        return (int)SRE_ICacheInv(address,OSL_ROUND_UP(bytes, OSL_CACHE_ALIGN_SIZE),TRUE);
    }
}

static __inline__ unsigned int osl_cache_flush_all(void)
{
    return SRE_DCacheFlushAll();
}
#ifdef __OS_RTOSCK_SMP__
/*注意
*此接口里涉及操作L2CACHE寄存器，
*对于多核系统，使用此接口时用户自己保证多核不重入
*/
static __inline__ unsigned int osl_cache_flush_all_nolock(void)
{
    return SRE_DCacheFlushAllNoLock();
}
static __inline__ BOOL osl_l2cache_enabled(void)
{
    return SRE_L2CacheIsEnable();
}
static __inline__ void osl_l2cache_spin_unlock(void)
{
    SRE_L2CacheSpinUnLock();
}

#else
static __inline__ unsigned int osl_cache_flush_all_nolock(void)
{
    return SRE_DCacheFlushAll();
}
#endif
//lint +esym(528,*)
/*lint �Crestore */
#else

#endif /* __KERNEL__ */

#endif

