/******************************************************************************/
/* File   : CfgDio.cpp                                                        */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Std_Types.hpp"
#include "CfgDio.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define CFGDIO_AR_RELEASE_VERSION_MAJOR                                        4
#define CFGDIO_AR_RELEASE_VERSION_MINOR                                        3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(CFGDIO_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible CFGDIO_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(CFGDIO_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible CFGDIO_AR_RELEASE_VERSION_MINOR!"
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
CONST(CfgDio_Type, CFGDIO_CONFIG_DATA) PBcfgDio = {
   {
#if(STD_ON == _ReSIM)
         "CfgDio"
#else
#endif
      ,  CFGDIO_AR_RELEASE_VERSION_MAJOR
      ,  CFGDIO_AR_RELEASE_VERSION_MINOR
      ,  0x00
      ,  0xFF
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

