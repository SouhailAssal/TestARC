/**********************************************************************************************************************
*  COPYRIGHT
*  -------------------------------------------------------------------------------------------------------------------
*  \verbatim
*  Copyright (c) 2021- 2022 by Vector Informatik GmbH.                                           All rights reserved.
*
*                 This software is copyright protected and proprietary to Vector Informatik GmbH.
*                 Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
*                 All other rights remain with Vector Informatik GmbH.
*  \endverbatim
*  -------------------------------------------------------------------------------------------------------------------
*  FILE DESCRIPTION
*  -------------------------------------------------------------------------------------------------------------------
*         File:  Compiler_Cfg.h
*
*  Description:  This Compiler_Cfg.h provides the Compiler abstraction defines from the template file of each package 
*
*********************************************************************************************************************/


#ifndef COMPILER_CFG_H_USECASEFILE
#define COMPILER_CFG_H_USECASEFILE


/**********************************************************************************************************************
*  Compiler abstraction defines for CDD code START
*********************************************************************************************************************/
#define CDD_LINTP_CODE

/**********************************************************************************************************************
*  Compiler abstraction defines for CDD code END
*********************************************************************************************************************/


/* including the _Compiler_Cfg_MSR4_*.h templates generated by the swcp */

#include "_Compiler_Cfg_MSR4_MBP.h"
#undef COMPILER_CFG_H
#include "_Compiler_Cfg_MSR4_MCP.h"
#undef COMPILER_CFG_H
#include "_Compiler_Cfg_MSR4_MEP.h"
#undef COMPILER_CFG_H
#include "_Compiler_Cfg_MSR4_MPP_VTT.h"

#endif  /* COMPILER_CFG_H_USECASEFILE */
