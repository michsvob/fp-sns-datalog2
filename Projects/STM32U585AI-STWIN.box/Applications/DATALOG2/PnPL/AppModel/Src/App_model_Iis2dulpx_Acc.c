/**
  ******************************************************************************
  * @file    App_model_Iis2dulpx_Acc.c
  * @author  SRA
  * @brief   Iis2dulpx_Acc PnPL Components APIs
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
  * dtmi:vespucci:steval_stwinbx1:fpSnsDatalog2_datalog2:sensors:iis2dulpx_acc;1
  *
  * Created by: DTDL2PnPL_cGen version 2.1.0
  *
  * WARNING! All changes made to this file will be lost if this is regenerated
  ******************************************************************************
  */

#include "App_model.h"
#include "services/SQuery.h"

/* USER includes -------------------------------------------------------------*/

/* USER private function prototypes ------------------------------------------*/

/* USER defines --------------------------------------------------------------*/

/* IIS2DULPX_ACC PnPL Component ----------------------------------------------*/
static SensorModel_t iis2dulpx_acc_model;
extern AppModel_t app_model;

uint8_t iis2dulpx_acc_comp_init(void)
{
  iis2dulpx_acc_model.comp_name = iis2dulpx_acc_get_key();

  SQuery_t querySM;
  SQInit(&querySM, SMGetSensorManager());
  uint16_t id = SQNextByNameAndType(&querySM, "iis2dulpx", COM_TYPE_ACC);
  iis2dulpx_acc_model.id = id;
  iis2dulpx_acc_set_st_ble_stream__id(id, NULL);

  iis2dulpx_acc_model.sensor_status = SMSensorGetStatusPointer(id);
  iis2dulpx_acc_model.stream_params.stream_id = -1;
  iis2dulpx_acc_model.stream_params.usb_ep = -1;

  iis2dulpx_acc_set_st_ble_stream__acc_unit("g", NULL);
  iis2dulpx_acc_set_st_ble_stream__acc_format("int16_t", NULL);

  addSensorToAppModel(id, &iis2dulpx_acc_model);

  iis2dulpx_acc_set_sensor_annotation("[EXTERN]\0", NULL);
  iis2dulpx_acc_set_odr(pnpl_iis2dulpx_acc_odr_hz800, NULL);
  iis2dulpx_acc_set_fs(pnpl_iis2dulpx_acc_fs_g16, NULL);
  iis2dulpx_acc_set_enable(true, NULL);
#if (HSD_USE_DUMMY_DATA == 1)
  iis2dulpx_acc_set_samples_per_ts(0, NULL);
#else
  iis2dulpx_acc_set_samples_per_ts(1000, NULL);
#endif

  int32_t value = 0;
  iis2dulpx_acc_get_dim(&value);
  iis2dulpx_acc_set_st_ble_stream__acc_channels(value, NULL);
  float sensitivity = 0.0f;
  iis2dulpx_acc_get_sensitivity(&sensitivity);
  iis2dulpx_acc_set_st_ble_stream__acc_multiply_factor(sensitivity, NULL);

  __stream_control(true);
  __sc_set_ble_stream_params(iis2dulpx_acc_model.id);

  /* USER Component initialization code */
  return PNPL_NO_ERROR_CODE;
}

char *iis2dulpx_acc_get_key(void)
{
  return "iis2dulpx_acc";
}


uint8_t iis2dulpx_acc_get_odr(pnpl_iis2dulpx_acc_odr_t *enum_id)
{
  float odr = iis2dulpx_acc_model.sensor_status->type.mems.odr;
  if (odr < 7.0f)
  {
    *enum_id = pnpl_iis2dulpx_acc_odr_hz6;
  }
  else if (odr < 13.0f)
  {
    *enum_id = pnpl_iis2dulpx_acc_odr_hz12_5;
  }
  else if (odr < 26.0f)
  {
    *enum_id = pnpl_iis2dulpx_acc_odr_hz25;
  }
  else if (odr < 51.0f)
  {
    *enum_id = pnpl_iis2dulpx_acc_odr_hz50;
  }
  else if (odr < 101.0f)
  {
    *enum_id = pnpl_iis2dulpx_acc_odr_hz100;
  }
  else if (odr < 201.0f)
  {
    *enum_id = pnpl_iis2dulpx_acc_odr_hz200;
  }
  else if (odr < 401.0f)
  {
    *enum_id = pnpl_iis2dulpx_acc_odr_hz400;
  }
  else
  {
    *enum_id = pnpl_iis2dulpx_acc_odr_hz800;
  }
  return PNPL_NO_ERROR_CODE;
}

uint8_t iis2dulpx_acc_get_fs(pnpl_iis2dulpx_acc_fs_t *enum_id)
{
  float fs = iis2dulpx_acc_model.sensor_status->type.mems.fs;
  if (fs < 3.0f)
  {
    *enum_id = pnpl_iis2dulpx_acc_fs_g2;
  }
  else if (fs < 5.0f)
  {
    *enum_id = pnpl_iis2dulpx_acc_fs_g4;
  }
  else if (fs < 9.0f)
  {
    *enum_id = pnpl_iis2dulpx_acc_fs_g8;
  }
  else
  {
    *enum_id = pnpl_iis2dulpx_acc_fs_g16;
  }
  return PNPL_NO_ERROR_CODE;
}

uint8_t iis2dulpx_acc_get_enable(bool *value)
{
  *value = iis2dulpx_acc_model.sensor_status->is_active;
  /* USER Code */
  return PNPL_NO_ERROR_CODE;
}

uint8_t iis2dulpx_acc_get_samples_per_ts(int32_t *value)
{
  *value = iis2dulpx_acc_model.stream_params.spts;
  /* USER Code */
  return PNPL_NO_ERROR_CODE;
}

uint8_t iis2dulpx_acc_get_dim(int32_t *value)
{
  *value = 3;
  return PNPL_NO_ERROR_CODE;
}

uint8_t iis2dulpx_acc_get_ioffset(float *value)
{
  *value = iis2dulpx_acc_model.stream_params.ioffset;
  /* USER Code */
  return PNPL_NO_ERROR_CODE;
}

uint8_t iis2dulpx_acc_get_measodr(float *value)
{
  *value = iis2dulpx_acc_model.sensor_status->type.mems.measured_odr;
  /* USER Code */
  return PNPL_NO_ERROR_CODE;
}

uint8_t iis2dulpx_acc_get_usb_dps(int32_t *value)
{
  *value = iis2dulpx_acc_model.stream_params.usb_dps;
  /* USER Code */
  return PNPL_NO_ERROR_CODE;
}

uint8_t iis2dulpx_acc_get_sd_dps(int32_t *value)
{
  *value = iis2dulpx_acc_model.stream_params.sd_dps;
  /* USER Code */
  return PNPL_NO_ERROR_CODE;
}

uint8_t iis2dulpx_acc_get_sensitivity(float *value)
{
  *value = iis2dulpx_acc_model.sensor_status->type.mems.sensitivity;
  /* USER Code */
  return PNPL_NO_ERROR_CODE;
}

uint8_t iis2dulpx_acc_get_data_type(char **value)
{
  *value = "int16";
  return PNPL_NO_ERROR_CODE;
}

uint8_t iis2dulpx_acc_get_sensor_annotation(char **value)
{
  *value = iis2dulpx_acc_model.annotation;
  return PNPL_NO_ERROR_CODE;
}

uint8_t iis2dulpx_acc_get_sensor_category(int32_t *value)
{
  *value = iis2dulpx_acc_model.sensor_status->isensor_class;
  /* USER Code */
  return PNPL_NO_ERROR_CODE;
}

uint8_t iis2dulpx_acc_get_mounted(bool *value)
{
  *value = true;
  return PNPL_NO_ERROR_CODE;
}

uint8_t iis2dulpx_acc_get_st_ble_stream__id(int32_t *value)
{
  *value = iis2dulpx_acc_model.st_ble_stream.st_ble_stream_id;
  return PNPL_NO_ERROR_CODE;
}

uint8_t iis2dulpx_acc_get_st_ble_stream__acc_enable(bool *value)
{
  *value = iis2dulpx_acc_model.st_ble_stream.st_ble_stream_objects.status;
  return PNPL_NO_ERROR_CODE;
}

uint8_t iis2dulpx_acc_get_st_ble_stream__acc_unit(char **value)
{
  *value = iis2dulpx_acc_model.st_ble_stream.st_ble_stream_objects.unit;
  return PNPL_NO_ERROR_CODE;
}

uint8_t iis2dulpx_acc_get_st_ble_stream__acc_format(char **value)
{
  *value = iis2dulpx_acc_model.st_ble_stream.st_ble_stream_objects.format;
  return PNPL_NO_ERROR_CODE;
}

uint8_t iis2dulpx_acc_get_st_ble_stream__acc_elements(int32_t *value)
{
  *value = iis2dulpx_acc_model.st_ble_stream.st_ble_stream_objects.elements;
  return PNPL_NO_ERROR_CODE;
}

uint8_t iis2dulpx_acc_get_st_ble_stream__acc_channels(int32_t *value)
{
  *value = iis2dulpx_acc_model.st_ble_stream.st_ble_stream_objects.channel;
  return PNPL_NO_ERROR_CODE;
}

uint8_t iis2dulpx_acc_get_st_ble_stream__acc_multiply_factor(float *value)
{
  *value = iis2dulpx_acc_model.st_ble_stream.st_ble_stream_objects.multiply_factor;
  return PNPL_NO_ERROR_CODE;
}

uint8_t iis2dulpx_acc_get_st_ble_stream__acc_odr(int32_t *value)
{
  *value = iis2dulpx_acc_model.st_ble_stream.st_ble_stream_objects.odr;
  return PNPL_NO_ERROR_CODE;
}

uint8_t iis2dulpx_acc_get_stream_id(int8_t *value)
{
  *value = iis2dulpx_acc_model.stream_params.stream_id;
  /* USER Code */
  return PNPL_NO_ERROR_CODE;
}

uint8_t iis2dulpx_acc_get_ep_id(int8_t *value)
{
  *value = iis2dulpx_acc_model.stream_params.usb_ep;
  /* USER Code */
  return PNPL_NO_ERROR_CODE;
}


uint8_t iis2dulpx_acc_set_odr(pnpl_iis2dulpx_acc_odr_t enum_id, char **response_message)
{
  if (response_message != NULL)
  {
    *response_message = "";
  }
  uint8_t ret = PNPL_NO_ERROR_CODE;
  float value;
  switch (enum_id)
  {
    case pnpl_iis2dulpx_acc_odr_hz6:
      value = 6.0f;
      break;
    case pnpl_iis2dulpx_acc_odr_hz12_5:
      value = 12.5f;
      break;
    case pnpl_iis2dulpx_acc_odr_hz25:
      value = 25.0f;
      break;
    case pnpl_iis2dulpx_acc_odr_hz50:
      value = 50.0f;
      break;
    case pnpl_iis2dulpx_acc_odr_hz100:
      value = 100.0f;
      break;
    case pnpl_iis2dulpx_acc_odr_hz200:
      value = 200.0f;
      break;
    case pnpl_iis2dulpx_acc_odr_hz400:
      value = 400.0f;
      break;
    case pnpl_iis2dulpx_acc_odr_hz800:
      value = 800.0f;
      break;
    default:
      if (response_message != NULL)
      {
        *response_message = "Error: Failed to set ODR";
      }
      return PNPL_BASE_ERROR_CODE;
  }
  ret = SMSensorSetODR(iis2dulpx_acc_model.id, value);
  if (ret == SYS_NO_ERROR_CODE)
  {
    /* USER Code */
#if (HSD_USE_DUMMY_DATA != 1)
    iis2dulpx_acc_set_samples_per_ts((int32_t)value, NULL);
#endif
    __stream_control(true);
    __sc_set_ble_stream_params(iis2dulpx_acc_model.id);
  }
  return ret;
}

uint8_t iis2dulpx_acc_set_fs(pnpl_iis2dulpx_acc_fs_t enum_id, char **response_message)
{
  if (response_message != NULL)
  {
    *response_message = "";
  }
  uint8_t ret = PNPL_NO_ERROR_CODE;
  float value;
  switch (enum_id)
  {
    case pnpl_iis2dulpx_acc_fs_g2:
      value = 2.0f;
      break;
    case pnpl_iis2dulpx_acc_fs_g4:
      value = 4.0f;
      break;
    case pnpl_iis2dulpx_acc_fs_g8:
      value = 8.0f;
      break;
    case pnpl_iis2dulpx_acc_fs_g16:
      value = 16.0f;
      break;
    default:
      if (response_message != NULL)
      {
        *response_message = "Error: Failed to set FS";
      }
      return PNPL_BASE_ERROR_CODE;
  }
  ret = SMSensorSetFS(iis2dulpx_acc_model.id, value);

  float sensitivity = 0.0f;
  iis2dulpx_acc_get_sensitivity(&sensitivity);
  iis2dulpx_acc_set_st_ble_stream__acc_multiply_factor(sensitivity, NULL);

  return ret;
}

uint8_t iis2dulpx_acc_set_enable(bool value, char **response_message)
{
  if (response_message != NULL)
  {
    *response_message = "";
  }
  uint8_t ret = PNPL_NO_ERROR_CODE;
  if (value)
  {
    ret = SMSensorEnable(iis2dulpx_acc_model.id);
  }
  else
  {
    ret = SMSensorDisable(iis2dulpx_acc_model.id);
  }
  if (ret == SYS_NO_ERROR_CODE)
  {
    /* USER Code */
    __stream_control(true);
    __sc_set_ble_stream_params(iis2dulpx_acc_model.id);
  }
  else
  {
    if (response_message != NULL)
    {
      *response_message = "Error: Failed to enable the sensor";
    }
  }
  return ret;
}

uint8_t iis2dulpx_acc_set_samples_per_ts(int32_t value, char **response_message)
{
  if (response_message != NULL)
  {
    *response_message = "";
  }
  uint8_t ret = PNPL_NO_ERROR_CODE;
  int32_t min_v = 0;
  int32_t max_v = 1000;
  if (value >= min_v && value <= max_v)
  {
    iis2dulpx_acc_model.stream_params.spts = value;
  }
  else if (value > max_v)
  {
    iis2dulpx_acc_model.stream_params.spts = max_v;
    if (response_message != NULL)
    {
      *response_message = "Error: Value setting above maximum threshold (1000)";
    }
  }
  else
  {
    iis2dulpx_acc_model.stream_params.spts = min_v;
    if (response_message != NULL)
    {
      *response_message = "Error: Value setting below minimum threshold (0)";
    }
  }
  return ret;
}

uint8_t iis2dulpx_acc_set_sensor_annotation(const char *value, char **response_message)
{
  if (response_message != NULL)
  {
    *response_message = "";
  }
  uint8_t ret = PNPL_NO_ERROR_CODE;
  strcpy(iis2dulpx_acc_model.annotation, value);
  return ret;
}

uint8_t iis2dulpx_acc_set_st_ble_stream__id(int32_t value, char **response_message)
{
  if (response_message != NULL)
  {
    *response_message = "";
  }
  /* USER Code */
  iis2dulpx_acc_model.st_ble_stream.st_ble_stream_id = value;
  return PNPL_NO_ERROR_CODE;
}

uint8_t iis2dulpx_acc_set_st_ble_stream__acc_enable(bool value, char **response_message)
{
  if (response_message != NULL)
  {
    *response_message = "";
  }
  /* USER Code */
  iis2dulpx_acc_model.st_ble_stream.st_ble_stream_objects.status = value;
  return PNPL_NO_ERROR_CODE;
}

uint8_t iis2dulpx_acc_set_st_ble_stream__acc_unit(const char *value, char **response_message)
{
  if (response_message != NULL)
  {
    *response_message = "";
  }
  /* USER Code */
  strcpy(iis2dulpx_acc_model.st_ble_stream.st_ble_stream_objects.unit, value);
  return PNPL_NO_ERROR_CODE;
}

uint8_t iis2dulpx_acc_set_st_ble_stream__acc_format(const char *value, char **response_message)
{
  if (response_message != NULL)
  {
    *response_message = "";
  }
  /* USER Code */
  strcpy(iis2dulpx_acc_model.st_ble_stream.st_ble_stream_objects.format, value);
  return PNPL_NO_ERROR_CODE;
}

uint8_t iis2dulpx_acc_set_st_ble_stream__acc_elements(int32_t value, char **response_message)
{
  if (response_message != NULL)
  {
    *response_message = "";
  }
  iis2dulpx_acc_model.st_ble_stream.st_ble_stream_objects.elements = value;
  return PNPL_NO_ERROR_CODE;
}

uint8_t iis2dulpx_acc_set_st_ble_stream__acc_channels(int32_t value, char **response_message)
{
  if (response_message != NULL)
  {
    *response_message = "";
  }
  uint8_t ret = PNPL_NO_ERROR_CODE;
  iis2dulpx_acc_model.st_ble_stream.st_ble_stream_objects.channel = value;
  return ret;
}

uint8_t iis2dulpx_acc_set_st_ble_stream__acc_multiply_factor(float value, char **response_message)
{
  if (response_message != NULL)
  {
    *response_message = "";
  }
  uint8_t ret = PNPL_NO_ERROR_CODE;
  iis2dulpx_acc_model.st_ble_stream.st_ble_stream_objects.multiply_factor = value;
  return ret;
}

uint8_t iis2dulpx_acc_set_st_ble_stream__acc_odr(int32_t value, char **response_message)
{
  if (response_message != NULL)
  {
    *response_message = "";
  }
  uint8_t ret = PNPL_NO_ERROR_CODE;
  iis2dulpx_acc_model.st_ble_stream.st_ble_stream_objects.odr = value;
  return ret;
}



