/******************************************************************************/
/* File   : PBcfgPwm.cpp                                                      */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Std_Types.h"
#include "CfgPwm.h"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define PWMCFG_AR_RELEASE_MAJOR_VERSION                                        4
#define PWMCFG_AR_RELEASE_MINOR_VERSION                                        3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(PWMCFG_AR_RELEASE_MAJOR_VERSION != STD_AR_RELEASE_MAJOR_VERSION)
   #error "Incompatible PWMCFG_AR_RELEASE_MAJOR_VERSION!"
#endif

#if(PWMCFG_AR_RELEASE_MINOR_VERSION != STD_AR_RELEASE_MINOR_VERSION)
   #error "Incompatible PWMCFG_AR_RELEASE_MINOR_VERSION!"
#endif

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
CONST(CfgPwm_Type, PWMCFG_CONST) CfgPwm = {
   {
         0x0000
      ,  0xFFFF
      ,  0x01
      ,  '0'
      ,  '1'
      ,  '0'
   }
};

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
