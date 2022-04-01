/******************************************************************************/
/* File   : CfgMemIf.cpp                                                      */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Std_Types.hpp"
#include "CfgMemIf.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define CFGMEMIF_AR_RELEASE_MAJOR_VERSION                                      4
#define CFGMEMIF_AR_RELEASE_MINOR_VERSION                                      3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(CFGMEMIF_AR_RELEASE_MAJOR_VERSION != STD_AR_RELEASE_MAJOR_VERSION)
   #error "Incompatible CFGMEMIF_AR_RELEASE_MAJOR_VERSION!"
#endif

#if(CFGMEMIF_AR_RELEASE_MINOR_VERSION != STD_AR_RELEASE_MINOR_VERSION)
   #error "Incompatible CFGMEMIF_AR_RELEASE_MINOR_VERSION!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/
CONST(CfgMemIf_Type, CFGMEMIF_CONFIG_DATA) PBcfgMemIf = {
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
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
