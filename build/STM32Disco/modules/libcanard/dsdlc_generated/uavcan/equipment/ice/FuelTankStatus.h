/*
 * UAVCAN data structure definition for libcanard.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /home/alex/ArduPilot/ardupilot/modules/uavcan/dsdl/uavcan/equipment/ice/1129.FuelTankStatus.uavcan
 */

#ifndef __UAVCAN_EQUIPMENT_ICE_FUELTANKSTATUS
#define __UAVCAN_EQUIPMENT_ICE_FUELTANKSTATUS

#include <stdint.h>
#include "canard.h"

#ifdef __cplusplus
extern "C"
{
#endif

/******************************* Source text **********************************
#
# Generic fuel tank status message.
# All fields are required unless stated otherwise. Unpopulated optional fields should be set to NaN.
#

#
# Reserved for future use.
#
void9

#
# The estimated amount of fuel.
# The reported values can be either measured directly using appropriate sensors,
# or they can be estimated by fusing the data provided by various sensors.
# For example, a Kalman filter can be used to fuse the data from fuel level sensors and flow sensors.
# All fields are required.
#
uint7 available_fuel_volume_percent     # Unit: percent, from 0% to 100%
float32 available_fuel_volume_cm3       # Unit: centimeter^3

#
# Estimate of the current fuel consumption rate.
# The flow can be negative if the fuel is being transferred between the tanks or during refueling.
# This field is required.
# Unit: (centimeter^3)/minute
#
float32 fuel_consumption_rate_cm3pm

#
# Fuel temperature.
# This field is optional, set to NaN if not provided.
# Unit: kelvin
#
float16 fuel_temperature

#
# The ID of the current fuel tank.
#
uint8 fuel_tank_id
******************************************************************************/

/********************* DSDL signature source definition ***********************
uavcan.equipment.ice.FuelTankStatus
void9
saturated uint7 available_fuel_volume_percent
saturated float32 available_fuel_volume_cm3
saturated float32 fuel_consumption_rate_cm3pm
saturated float16 fuel_temperature
saturated uint8 fuel_tank_id
******************************************************************************/

#define UAVCAN_EQUIPMENT_ICE_FUELTANKSTATUS_ID             1129
#define UAVCAN_EQUIPMENT_ICE_FUELTANKSTATUS_NAME           "uavcan.equipment.ice.FuelTankStatus"
#define UAVCAN_EQUIPMENT_ICE_FUELTANKSTATUS_SIGNATURE      (0x286B4A387BA84BC4ULL)

#define UAVCAN_EQUIPMENT_ICE_FUELTANKSTATUS_MAX_SIZE       ((104 + 7)/8)

// Constants

typedef struct
{
    // FieldTypes
    // void9
    uint8_t    available_fuel_volume_percent; // bit len 7
    float      available_fuel_volume_cm3;     // float32 Saturate
    float      fuel_consumption_rate_cm3pm;   // float32 Saturate
    float      fuel_temperature;              // float16 Saturate
    uint8_t    fuel_tank_id;                  // bit len 8

} uavcan_equipment_ice_FuelTankStatus;

static inline
uint32_t uavcan_equipment_ice_FuelTankStatus_encode(uavcan_equipment_ice_FuelTankStatus* source, void* msg_buf);

static inline
int32_t uavcan_equipment_ice_FuelTankStatus_decode(const CanardRxTransfer* transfer, uint16_t payload_len, uavcan_equipment_ice_FuelTankStatus* dest, uint8_t** dyn_arr_buf);

static inline
uint32_t uavcan_equipment_ice_FuelTankStatus_encode_internal(uavcan_equipment_ice_FuelTankStatus* source, void* msg_buf, uint32_t offset, uint8_t root_item);

static inline
int32_t uavcan_equipment_ice_FuelTankStatus_decode_internal(const CanardRxTransfer* transfer, uint16_t payload_len, uavcan_equipment_ice_FuelTankStatus* dest, uint8_t** dyn_arr_buf, int32_t offset);

/*
 * UAVCAN data structure definition for libcanard.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /home/alex/ArduPilot/ardupilot/modules/uavcan/dsdl/uavcan/equipment/ice/1129.FuelTankStatus.uavcan
 */

#ifndef CANARD_INTERNAL_SATURATE
#define CANARD_INTERNAL_SATURATE(x, max) ( ((x) > max) ? max : ( (-(x) > max) ? (-max) : (x) ) );
#endif

#ifndef CANARD_INTERNAL_SATURATE_UNSIGNED
#define CANARD_INTERNAL_SATURATE_UNSIGNED(x, max) ( ((x) >= max) ? max : (x) );
#endif

#if defined(__GNUC__)
# define CANARD_MAYBE_UNUSED(x) x __attribute__((unused))
#else
# define CANARD_MAYBE_UNUSED(x) x
#endif

/**
  * @brief uavcan_equipment_ice_FuelTankStatus_encode_internal
  * @param source : pointer to source data struct
  * @param msg_buf: pointer to msg storage
  * @param offset: bit offset to msg storage
  * @param root_item: for detecting if TAO should be used
  * @retval returns offset
  */
uint32_t uavcan_equipment_ice_FuelTankStatus_encode_internal(uavcan_equipment_ice_FuelTankStatus* source,
  void* msg_buf,
  uint32_t offset,
  uint8_t CANARD_MAYBE_UNUSED(root_item))
{
#ifndef CANARD_USE_FLOAT16_CAST
    uint16_t tmp_float = 0;
#else
    CANARD_USE_FLOAT16_CAST tmp_float = 0;
#endif

    // Void9
    offset += 9;
    source->available_fuel_volume_percent = CANARD_INTERNAL_SATURATE_UNSIGNED(source->available_fuel_volume_percent, 127)
    canardEncodeScalar(msg_buf, offset, 7, (void*)&source->available_fuel_volume_percent); // 127
    offset += 7;

    canardEncodeScalar(msg_buf, offset, 32, (void*)&source->available_fuel_volume_cm3); // 2147483647
    offset += 32;

    canardEncodeScalar(msg_buf, offset, 32, (void*)&source->fuel_consumption_rate_cm3pm); // 2147483647
    offset += 32;

    // float16 special handling
#ifndef CANARD_USE_FLOAT16_CAST
    tmp_float = canardConvertNativeFloatToFloat16(source->fuel_temperature);
#else
    tmp_float = (CANARD_USE_FLOAT16_CAST)source->fuel_temperature;
#endif
    canardEncodeScalar(msg_buf, offset, 16, (void*)&tmp_float); // 32767
    offset += 16;
    canardEncodeScalar(msg_buf, offset, 8, (void*)&source->fuel_tank_id); // 255
    offset += 8;

    return offset;
}

/**
  * @brief uavcan_equipment_ice_FuelTankStatus_encode
  * @param source : Pointer to source data struct
  * @param msg_buf: Pointer to msg storage
  * @retval returns message length as bytes
  */
uint32_t uavcan_equipment_ice_FuelTankStatus_encode(uavcan_equipment_ice_FuelTankStatus* source, void* msg_buf)
{
    uint32_t offset = 0;

    offset = uavcan_equipment_ice_FuelTankStatus_encode_internal(source, msg_buf, offset, 1);

    return (offset + 7 ) / 8;
}

/**
  * @brief uavcan_equipment_ice_FuelTankStatus_decode_internal
  * @param transfer: Pointer to CanardRxTransfer transfer
  * @param payload_len: Payload message length
  * @param dest: Pointer to destination struct
  * @param dyn_arr_buf: NULL or Pointer to memory storage to be used for dynamic arrays
  *                     uavcan_equipment_ice_FuelTankStatus dyn memory will point to dyn_arr_buf memory.
  *                     NULL will ignore dynamic arrays decoding.
  * @param offset: Call with 0, bit offset to msg storage
  * @retval offset or ERROR value if < 0
  */
int32_t uavcan_equipment_ice_FuelTankStatus_decode_internal(
  const CanardRxTransfer* transfer,
  uint16_t CANARD_MAYBE_UNUSED(payload_len),
  uavcan_equipment_ice_FuelTankStatus* dest,
  uint8_t** CANARD_MAYBE_UNUSED(dyn_arr_buf),
  int32_t offset)
{
    int32_t ret = 0;
#ifndef CANARD_USE_FLOAT16_CAST
    uint16_t tmp_float = 0;
#else
    CANARD_USE_FLOAT16_CAST tmp_float = 0;
#endif

    // Void9
    offset += 9;

    ret = canardDecodeScalar(transfer, (uint32_t)offset, 7, false, (void*)&dest->available_fuel_volume_percent);
    if (ret != 7)
    {
        goto uavcan_equipment_ice_FuelTankStatus_error_exit;
    }
    offset += 7;

    ret = canardDecodeScalar(transfer, (uint32_t)offset, 32, false, (void*)&dest->available_fuel_volume_cm3);
    if (ret != 32)
    {
        goto uavcan_equipment_ice_FuelTankStatus_error_exit;
    }
    offset += 32;

    ret = canardDecodeScalar(transfer, (uint32_t)offset, 32, false, (void*)&dest->fuel_consumption_rate_cm3pm);
    if (ret != 32)
    {
        goto uavcan_equipment_ice_FuelTankStatus_error_exit;
    }
    offset += 32;

    // float16 special handling
    ret = canardDecodeScalar(transfer, (uint32_t)offset, 16, false, (void*)&tmp_float);

    if (ret != 16)
    {
        goto uavcan_equipment_ice_FuelTankStatus_error_exit;
    }
#ifndef CANARD_USE_FLOAT16_CAST
    dest->fuel_temperature = canardConvertFloat16ToNativeFloat(tmp_float);
#else
    dest->fuel_temperature = (float)tmp_float;
#endif
    offset += 16;

    ret = canardDecodeScalar(transfer, (uint32_t)offset, 8, false, (void*)&dest->fuel_tank_id);
    if (ret != 8)
    {
        goto uavcan_equipment_ice_FuelTankStatus_error_exit;
    }
    offset += 8;
    return offset;

uavcan_equipment_ice_FuelTankStatus_error_exit:
    if (ret < 0)
    {
        return ret;
    }
    else
    {
        return -CANARD_ERROR_INTERNAL;
    }
}

/**
  * @brief uavcan_equipment_ice_FuelTankStatus_decode
  * @param transfer: Pointer to CanardRxTransfer transfer
  * @param payload_len: Payload message length
  * @param dest: Pointer to destination struct
  * @param dyn_arr_buf: NULL or Pointer to memory storage to be used for dynamic arrays
  *                     uavcan_equipment_ice_FuelTankStatus dyn memory will point to dyn_arr_buf memory.
  *                     NULL will ignore dynamic arrays decoding.
  * @retval offset or ERROR value if < 0
  */
int32_t uavcan_equipment_ice_FuelTankStatus_decode(const CanardRxTransfer* transfer,
  uint16_t payload_len,
  uavcan_equipment_ice_FuelTankStatus* dest,
  uint8_t** dyn_arr_buf)
{
    const int32_t offset = 0;
    int32_t ret = 0;

    // Clear the destination struct
    for (uint32_t c = 0; c < sizeof(uavcan_equipment_ice_FuelTankStatus); c++)
    {
        ((uint8_t*)dest)[c] = 0x00;
    }

    ret = uavcan_equipment_ice_FuelTankStatus_decode_internal(transfer, payload_len, dest, dyn_arr_buf, offset);

    return ret;
}

#ifdef __cplusplus
} // extern "C"
#endif
#endif // __UAVCAN_EQUIPMENT_ICE_FUELTANKSTATUS