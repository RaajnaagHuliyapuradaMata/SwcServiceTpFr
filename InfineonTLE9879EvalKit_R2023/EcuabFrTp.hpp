#pragma once
/******************************************************************************/
/* File   : EcuabFrTp.hpp                                                     */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "infEcuabFrTp_ServiceNvM_Types.hpp"
#include "CfgEcuabFrTp.hpp"
#include "EcuabFrTp_core.hpp"
#include "infEcuabFrTp_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_EcuabFrTp:
      INTERFACES_EXPORTED_ECUABFRTP
      public abstract_module
   ,  public class_EcuabFrTp_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstModule_TypeAbstract* lptrNvMBlocksRom = (ConstModule_TypeAbstract*)NULL_PTR;
      infServicePduRClient_Lo infServicePduRClient_EcuabFrTp;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, ECUABFRTP_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, ECUABFRTP_CONST,       ECUABFRTP_APPL_CONST) lptrNvMBlocksRomModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   ECUABFRTP_CONFIG_DATA, ECUABFRTP_APPL_CONST) lptrCfgModule
      );
      FUNC(void, ECUABFRTP_CODE) DeInitFunction (void);
      FUNC(void, ECUABFRTP_CODE) MainFunction   (void);
      ECUABFRTP_CORE_FUNCTIONALITIES
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern VAR(module_EcuabFrTp, ECUABFRTP_VAR) EcuabFrTp;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

