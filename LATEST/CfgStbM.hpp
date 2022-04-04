#pragma once
/******************************************************************************/
/* File   : CfgStbM.hpp                                                       */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CfgModule.hpp"
#include "CompilerCfg_CfgStbM.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define StbM_DevErrorDetect                                       DevErrorDetect
#define StbM_InitCheck                                                    STD_ON
#define STBM_VERSION_INFO_API                                     VersionInfoApi

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class CfgStbM_Type:
      public CfgModule_TypeAbstract
{
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/
extern CONST(CfgStbM_Type, CFGSTBM_CONFIG_DATA) PBcfgStbM;

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

