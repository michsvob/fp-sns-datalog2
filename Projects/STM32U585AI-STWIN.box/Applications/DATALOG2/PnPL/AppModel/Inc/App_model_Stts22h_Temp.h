/**
  ******************************************************************************
  * @file    App_model_Stts22h_Temp.h
  * @author  SRA
  * @brief   Stts22h_Temp PnPL Components APIs
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
  * dtmi:vespucci:steval_stwinbx1:fpSnsDatalog2_datalog2:sensors:stts22h_temp;5
  *
  * Created by: DTDL2PnPL_cGen version 2.1.0
  *
  * WARNING! All changes made to this file will be lost if this is regenerated
  ******************************************************************************
  */

/**
  ******************************************************************************
  * Component APIs *************************************************************
  * - Component init function
  *    <comp_name>_comp_init(void)
  * - Component get_key function
  *    <comp_name>_get_key(void)
  * - Component GET/SET Properties APIs ****************************************
  *  - GET Functions
  *    uint8_t <comp_name>_get_<prop_name>(prop_type *value)
  *      if prop_type == char --> (char **value)
  *  - SET Functions
  *    uint8_t <comp_name>_set_<prop_name>(prop_type value)
  *      if prop_type == char --> (char *value)
  *  - Component COMMAND Reaction Functions
  *      uint8_t <comp_name>_<command_name>(
  *                     field1_type field1_name, field2_type field2_name, ...,
  *                     fieldN_type fieldN_name);
  *  - Component TELEMETRY Send Functions
  *      uint8_t <comp_name>_create_telemetry(tel1_type tel1_name,
  *                     tel2_type tel2_name, ..., telN_type telN_name,
  *                     char **telemetry, uint32_t *size)
  ******************************************************************************
  */

#ifndef APP_MODEL_STTS22H_TEMP_H_
#define APP_MODEL_STTS22H_TEMP_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "Stts22h_Temp_PnPL.h"

/* USER includes -------------------------------------------------------------*/

/* STTS22H_TEMP PnPL Component ------------------------------------------------ */
uint8_t stts22h_temp_comp_init(void);
char *stts22h_temp_get_key(void);
uint8_t stts22h_temp_get_odr(pnpl_stts22h_temp_odr_t *enum_id);
uint8_t stts22h_temp_get_fs(pnpl_stts22h_temp_fs_t *enum_id);
uint8_t stts22h_temp_get_enable(bool *value);
uint8_t stts22h_temp_get_samples_per_ts(int32_t *value);
uint8_t stts22h_temp_get_dim(int32_t *value);
uint8_t stts22h_temp_get_ioffset(float *value);
uint8_t stts22h_temp_get_measodr(float *value);
uint8_t stts22h_temp_get_usb_dps(int32_t *value);
uint8_t stts22h_temp_get_sd_dps(int32_t *value);
uint8_t stts22h_temp_get_sensitivity(float *value);
uint8_t stts22h_temp_get_data_type(char **value);
uint8_t stts22h_temp_get_sensor_annotation(char **value);
uint8_t stts22h_temp_get_sensor_category(int32_t *value);
uint8_t stts22h_temp_get_st_ble_stream__id(int32_t *value);
uint8_t stts22h_temp_get_st_ble_stream__temp_enable(bool *value);
uint8_t stts22h_temp_get_st_ble_stream__temp_unit(char **value);
uint8_t stts22h_temp_get_st_ble_stream__temp_format(char **value);
uint8_t stts22h_temp_get_st_ble_stream__temp_elements(int32_t *value);
uint8_t stts22h_temp_get_st_ble_stream__temp_channels(int32_t *value);
uint8_t stts22h_temp_get_st_ble_stream__temp_multiply_factor(float *value);
uint8_t stts22h_temp_get_st_ble_stream__temp_odr(int32_t *value);
uint8_t stts22h_temp_get_stream_id(int8_t *value);
uint8_t stts22h_temp_get_ep_id(int8_t *value);
uint8_t stts22h_temp_set_odr(pnpl_stts22h_temp_odr_t enum_id, char **response_message);
uint8_t stts22h_temp_set_enable(bool value, char **response_message);
uint8_t stts22h_temp_set_samples_per_ts(int32_t value, char **response_message);
uint8_t stts22h_temp_set_sensor_annotation(const char *value, char **response_message);
uint8_t stts22h_temp_set_st_ble_stream__id(int32_t value, char **response_message);
uint8_t stts22h_temp_set_st_ble_stream__temp_enable(bool value, char **response_message);
uint8_t stts22h_temp_set_st_ble_stream__temp_unit(const char *value, char **response_message);
uint8_t stts22h_temp_set_st_ble_stream__temp_format(const char *value, char **response_message);
uint8_t stts22h_temp_set_st_ble_stream__temp_elements(int32_t value, char **response_message);
uint8_t stts22h_temp_set_st_ble_stream__temp_channels(int32_t value, char **response_message);
uint8_t stts22h_temp_set_st_ble_stream__temp_multiply_factor(float value, char **response_message);
uint8_t stts22h_temp_set_st_ble_stream__temp_odr(int32_t value, char **response_message);


#ifdef __cplusplus
}
#endif

#endif /* APP_MODEL_STTS22H_TEMP_H_ */
