#pragma once
/******************************************************************************/
/* File   : CfgRte.hpp                                                        */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CfgModule.hpp"
#include "CompilerCfg_CfgRte.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define CFGRTE_AR_RELEASE_VERSION_MAJOR                                        4
#define CFGRTE_AR_RELEASE_VERSION_MINOR                                        3
#define Rte_DevErrorDetect                                        DevErrorDetect
#define Rte_InitCheck                                                     STD_ON

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class CfgRte_Type:
      public CfgModule_TypeAbstract
{
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/
extern CONST(CfgRte_Type, CFGRTE_CONFIG_DATA) PBcfgRte;

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

