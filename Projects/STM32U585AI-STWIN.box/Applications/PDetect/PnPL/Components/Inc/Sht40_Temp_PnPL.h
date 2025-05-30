/**
  ******************************************************************************
  * @file    Sht40_Temp_PnPL.h
  * @author  SRA
  * @brief   Sht40_Temp PnPL Component Manager
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file in
  * the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  *
  ******************************************************************************
  */

/**
  ******************************************************************************
  * This file has been auto generated from the following DTDL Component:
  * dtmi:vespucci:steval_stwinbx1:FP_SNS_DATALOG2_PDetect:sensors:sht40_temp;3
  *
  * Created by: DTDL2PnPL_cGen version 2.1.0
  *
  * WARNING! All changes made to this file will be lost if this is regenerated
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef _PNPL_SHT40_TEMP_H_
#define _PNPL_SHT40_TEMP_H_

typedef enum
{
  pnpl_sht40_temp_odr_hz1 = 0,
} pnpl_sht40_temp_odr_t;
typedef enum
{
  pnpl_sht40_temp_fs_cdeg100 = 0,
} pnpl_sht40_temp_fs_t;


#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "parson.h"
#include "IPnPLComponent.h"
#include "IPnPLComponent_vtbl.h"

/* VTBL Functions ------------------------------------------------------------*/
char *Sht40_Temp_PnPL_vtblGetKey(IPnPLComponent_t *_this);
uint8_t Sht40_Temp_PnPL_vtblGetNCommands(IPnPLComponent_t *_this);
char *Sht40_Temp_PnPL_vtblGetCommandKey(IPnPLComponent_t *_this, uint8_t id);
uint8_t Sht40_Temp_PnPL_vtblGetStatus(IPnPLComponent_t *_this, char **serializedJSON, uint32_t *size, uint8_t pretty);
uint8_t Sht40_Temp_PnPL_vtblSetProperty(IPnPLComponent_t *_this, char *serializedJSON, char **response, uint32_t *size,
                                        uint8_t pretty);
uint8_t Sht40_Temp_PnPL_vtblExecuteFunction(IPnPLComponent_t *_this, char *serializedJSON, char **response,
                                            uint32_t *size, uint8_t pretty);

/**
  * Create a type name for _Sht40_Temp_PnPL.
 */
typedef struct _Sht40_Temp_PnPL Sht40_Temp_PnPL;

/* Public API declaration ----------------------------------------------------*/

IPnPLComponent_t *Sht40_Temp_PnPLAlloc(void);

/**
  * Initialize the default parameters.
  *
 */
uint8_t Sht40_Temp_PnPLInit(IPnPLComponent_t *_this);


/**
  * Get the IPnPLComponent interface for the component.
  * @param _this [IN] specifies a pointer to a PnPL component.
  * @return a pointer to the generic object ::IPnPLComponent if success,
  * or NULL if out of memory error occurs.
 */
IPnPLComponent_t *Sht40_Temp_PnPLGetComponentIF(Sht40_Temp_PnPL *_this);

#ifdef __cplusplus
}
#endif

#endif /* _PNPL_SHT40_TEMP_H_ */
