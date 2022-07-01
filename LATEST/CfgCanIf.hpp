#pragma once
/******************************************************************************/
/* File   : CfgCanIf.hpp                                                      */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CfgModule.hpp"
#include "CompilerCfg_CfgCanIf.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define CFGCANIF_AR_RELEASE_VERSION_MAJOR                                      4
#define CFGCANIF_AR_RELEASE_VERSION_MINOR                                      3
#define CanIf_DevErrorDetect                                      DevErrorDetect
#define CanIf_InitCheck                                                   STD_ON

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
typedef enum{
      eModePdu_Offline = 0
   ,  eModePdu_TxOffline
   ,  eModePdu_TxOfflineActive
   ,  eModePdu_Online
}CfgCanIf_TypeModePdu;

typedef enum{
      eStatusNotif_None = 0
   ,  eStatusNotif_TxRx
}CfgCanIf_TypeStatusNotif;

class CfgCanIf_Type:
      public CfgModule_TypeAbstract
{
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/
extern CONST(CfgCanIf_Type, CFGCANIF_CONFIG_DATA) PBcfgCanIf;

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

