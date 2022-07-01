#pragma once
/******************************************************************************/
/* File   : CfgLin.hpp                                                        */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CfgModule.hpp"
#include "CompilerCfg_CfgLin.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define CFGLIN_AR_RELEASE_VERSION_MAJOR                                        4
#define CFGLIN_AR_RELEASE_VERSION_MINOR                                        3
#define Lin_DevErrorDetect                                        DevErrorDetect
#define Lin_InitCheck                                                     STD_ON

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class CfgLin_Type:
      public CfgModule_TypeAbstract
{
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/
extern CONST(CfgLin_Type, CFGLIN_CONFIG_DATA) PBcfgLin;

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

