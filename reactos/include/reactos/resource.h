#ifndef _INC_REACTOS_RESOURCE_H
#define _INC_REACTOS_RESOURCE_H
#include "version.h"
#include "buildno.h"

/* Global File Version UINTs */

#define RES_UINT_FV_MAJOR	KERNEL_VERSION_MAJOR
#define RES_UINT_FV_MINOR	KERNEL_VERSION_MINOR
#define RES_UINT_FV_REVISION	KERNEL_VERSION_PATCH_LEVEL
/* Build number as generated by buildno.c */
#define RES_UINT_FV_BUILD	KERNEL_VERSION_BUILD

/* ReactOS Product Version UINTs */

#define RES_UINT_PV_MAJOR	KERNEL_VERSION_MAJOR
#define RES_UINT_PV_MINOR	KERNEL_VERSION_MINOR
#define RES_UINT_PV_REVISION	KERNEL_VERSION_PATCH_LEVEL
/* Build number as YYYYMMDD */
#define RES_UINT_PV_BUILD	0

/* Common version strings for rc scripts */

#define RES_STR_COMPANY_NAME	"ReactOS Development Team\0"
#define RES_STR_LEGAL_COPYRIGHT	"Copyright (c) 1998-2003 ReactOS Team\0"
#define RES_STR_PRODUCT_NAME	"ReactOS Operating System\0"
#define RES_STR_PRODUCT_VERSION	KERNEL_VERSION_RC

/* FILE_VERSION defaults to PRODUCT_VERSION */
#define RES_STR_FILE_VERSION	KERNEL_RELEASE_RC	

/* ReactOS default Application Registry Root Path */
#define RES_STR_ROSAPP_REGISTRY_ROOT	"Software\\ReactWare"

#endif /* ndef _INC_REACTOS_RESOURCE_H */

