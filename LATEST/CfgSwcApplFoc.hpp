#pragma once
/******************************************************************************/
/* File   : CfgSwcApplFoc.hpp                                                 */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CfgModule.hpp"
#include "CompilerCfg_CfgSwcApplFoc.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define CFGSWCAPPLFOC_AR_RELEASE_VERSION_MAJOR                                 4
#define CFGSWCAPPLFOC_AR_RELEASE_VERSION_MINOR                                 3
#define SwcApplFoc_DevErrorDetect                                 DevErrorDetect
#define SwcApplFoc_InitCheck                                              STD_ON

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class CfgSwcApplFoc_Type:
      public CfgModule_TypeAbstract
{
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/
extern CONST(CfgSwcApplFoc_Type, CFGSWCAPPLFOC_CONFIG_DATA) PBcfgSwcApplFoc;

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

