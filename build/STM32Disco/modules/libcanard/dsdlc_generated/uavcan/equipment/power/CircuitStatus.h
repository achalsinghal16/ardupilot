/*
 * UAVCAN data structure definition for libcanard.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /home/alex/ArduPilot/ardupilot/modules/uavcan/dsdl/uavcan/equipment/power/1091.CircuitStatus.uavcan
 */

#ifndef __UAVCAN_EQUIPMENT_POWER_CIRCUITSTATUS
#define __UAVCAN_EQUIPMENT_POWER_CIRCUITSTATUS

#include <stdint.h>
#include "canard.h"

#ifdef __cplusplus
extern "C"
{
#endif

/******************************* Source text **********************************
#
# Generic electrical circuit info.
#

uint16 circuit_id

float16 voltage
float16 current

uint8 ERROR_FLAG_OVERVOLTAGE  = 1
uint8 ERROR_FLAG_UNDERVOLTAGE = 2
uint8 ERROR_FLAG_OVERCURRENT  = 4
uint8 ERROR_FLAG_UNDERCURRENT = 8
uint8 error_flags
******************************************************************************/

/********************* DSDL signature source definition ***********************
uavcan.equipment.power.CircuitStatus
saturated uint16 circuit_id
saturated float16 voltage
saturated float16 current
saturated uint8 error_flags
******************************************************************************/

#define UAVCAN_EQUIPMENT_POWER_CIRCUITSTATUS_ID            1091
#define UAVCAN_EQUIPMENT_POWER_CIRCUITSTATUS_NAME          "uavcan.equipment.power.CircuitStatus"
#define UAVCAN_EQUIPMENT_POWER_CIRCUITSTATUS_SIGNATURE     (0x8313D33D0DDDA115ULL)

#define UAVCAN_EQUIPMENT_POWER_CIRCUITSTATUS_MAX_SIZE      ((56 + 7)/8)

// Constants
#define UAVCAN_EQUIPMENT_POWER_CIRCUITSTATUS_ERROR_FLAG_OVERVOLTAGE           1 // 1
#define UAVCAN_EQUIPMENT_POWER_CIRCUITSTATUS_ERROR_FLAG_UNDERVOLTAGE          2 // 2
#define UAVCAN_EQUIPMENT_POWER_CIRCUITSTATUS_ERROR_FLAG_OVERCURRENT           4 // 4
#define UAVCAN_EQUIPMENT_POWER_CIRCUITSTATUS_ERROR_FLAG_UNDERCURRENT          8 // 8

typedef struct
{
    // FieldTypes
    uint16_t   circuit_id;                    // bit len 16
    float      voltage;                       // float16 Saturate
    float      current;                       // float16 Saturate
    uint8_t    error_flags;                   // bit len 8

} uavcan_equipment_power_CircuitStatus;

static inline
uint32_t uavcan_equipment_power_CircuitStatus_encode(uavcan_equipment_power_CircuitStatus* source, void* msg_buf);

static inline
int32_t uavcan_equipment_power_CircuitStatus_decode(const CanardRxTransfer* transfer, uint16_t payload_len, uavcan_equipment_power_CircuitStatus* dest, uint8_t** dyn_arr_buf);

static inline
uint32_t uavcan_equipment_power_CircuitStatus_encode_internal(uavcan_equipment_power_CircuitStatus* source, void* msg_buf, uint32_t offset, uint8_t root_item);

static inline
int32_t uavcan_equipment_power_CircuitStatus_decode_internal(const CanardRxTransfer* transfer, uint16_t payload_len, uavcan_equipment_power_CircuitStatus* dest, uint8_t** dyn_arr_buf, int32_t offset);

/*
 * UAVCAN data structure definition for libcanard.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /home/alex/ArduPilot/ardupilot/modules/uavcan/dsdl/uavcan/equipment/power/1091.CircuitStatus.uavcan
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
  * @brief uavcan_equipment_power_CircuitStatus_encode_internal
  * @param source : pointer to source data struct
  * @param msg_buf: pointer to msg storage
  * @param offset: bit offset to msg storage
  * @param root_item: for detecting if TAO should be used
  * @retval returns offset
  */
uint32_t uavcan_equipment_power_CircuitStatus_encode_internal(uavcan_equipment_power_CircuitStatus* source,
  void* msg_buf,
  uint32_t offset,
  uint8_t CANARD_MAYBE_UNUSED(root_item))
{
#ifndef CANARD_USE_FLOAT16_CAST
    uint16_t tmp_float = 0;
#else
    CANARD_USE_FLOAT16_CAST tmp_float = 0;
#endif

    canardEncodeScalar(msg_buf, offset, 16, (void*)&source->circuit_id); // 65535
    offset += 16;

    // float16 special handling
#ifndef CANARD_USE_FLOAT16_CAST
    tmp_float = canardConvertNativeFloatToFloat16(source->voltage);
#else
    tmp_float = (CANARD_USE_FLOAT16_CAST)source->voltage;
#endif
    canardEncodeScalar(msg_buf, offset, 16, (void*)&tmp_float); // 32767
    offset += 16;

    // float16 special handling
#ifndef CANARD_USE_FLOAT16_CAST
    tmp_float = canardConvertNativeFloatToFloat16(source->current);
#else
    tmp_float = (CANARD_USE_FLOAT16_CAST)source->current;
#endif
    canardEncodeScalar(msg_buf, offset, 16, (void*)&tmp_float); // 32767
    offset += 16;
    canardEncodeScalar(msg_buf, offset, 8, (void*)&source->error_flags); // 255
    offset += 8;

    return offset;
}

/**
  * @brief uavcan_equipment_power_CircuitStatus_encode
  * @param source : Pointer to source data struct
  * @param msg_buf: Pointer to msg storage
  * @retval returns message length as bytes
  */
uint32_t uavcan_equipment_power_CircuitStatus_encode(uavcan_equipment_power_CircuitStatus* source, void* msg_buf)
{
    uint32_t offset = 0;

    offset = uavcan_equipment_power_CircuitStatus_encode_internal(source, msg_buf, offset, 1);

    return (offset + 7 ) / 8;
}

/**
  * @brief uavcan_equipment_power_CircuitStatus_decode_internal
  * @param transfer: Pointer to CanardRxTransfer transfer
  * @param payload_len: Payload message length
  * @param dest: Pointer to destination struct
  * @param dyn_arr_buf: NULL or Pointer to memory storage to be used for dynamic arrays
  *                     uavcan_equipment_power_CircuitStatus dyn memory will point to dyn_arr_buf memory.
  *                     NULL will ignore dynamic arrays decoding.
  * @param offset: Call with 0, bit offset to msg storage
  * @retval offset or ERROR value if < 0
  */
int32_t uavcan_equipment_power_CircuitStatus_decode_internal(
  const CanardRxTransfer* transfer,
  uint16_t CANARD_MAYBE_UNUSED(payload_len),
  uavcan_equipment_power_CircuitStatus* dest,
  uint8_t** CANARD_MAYBE_UNUSED(dyn_arr_buf),
  int32_t offset)
{
    int32_t ret = 0;
#ifndef CANARD_USE_FLOAT16_CAST
    uint16_t tmp_float = 0;
#else
    CANARD_USE_FLOAT16_CAST tmp_float = 0;
#endif

    ret = canardDecodeScalar(transfer, (uint32_t)offset, 16, false, (void*)&dest->circuit_id);
    if (ret != 16)
    {
        goto uavcan_equipment_power_CircuitStatus_error_exit;
    }
    offset += 16;

    // float16 special handling
    ret = canardDecodeScalar(transfer, (uint32_t)offset, 16, false, (void*)&tmp_float);

    if (ret != 16)
    {
        goto uavcan_equipment_power_CircuitStatus_error_exit;
    }
#ifndef CANARD_USE_FLOAT16_CAST
    dest->voltage = canardConvertFloat16ToNativeFloat(tmp_float);
#else
    dest->voltage = (float)tmp_float;
#endif
    offset += 16;

    // float16 special handling
    ret = canardDecodeScalar(transfer, (uint32_t)offset, 16, false, (void*)&tmp_float);

    if (ret != 16)
    {
        goto uavcan_equipment_power_CircuitStatus_error_exit;
    }
#ifndef CANARD_USE_FLOAT16_CAST
    dest->current = canardConvertFloat16ToNativeFloat(tmp_float);
#else
    dest->current = (float)tmp_float;
#endif
    offset += 16;

    ret = canardDecodeScalar(transfer, (uint32_t)offset, 8, false, (void*)&dest->error_flags);
    if (ret != 8)
    {
        goto uavcan_equipment_power_CircuitStatus_error_exit;
    }
    offset += 8;
    return offset;

uavcan_equipment_power_CircuitStatus_error_exit:
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
  * @brief uavcan_equipment_power_CircuitStatus_decode
  * @param transfer: Pointer to CanardRxTransfer transfer
  * @param payload_len: Payload message length
  * @param dest: Pointer to destination struct
  * @param dyn_arr_buf: NULL or Pointer to memory storage to be used for dynamic arrays
  *                     uavcan_equipment_power_CircuitStatus dyn memory will point to dyn_arr_buf memory.
  *                     NULL will ignore dynamic arrays decoding.
  * @retval offset or ERROR value if < 0
  */
int32_t uavcan_equipment_power_CircuitStatus_decode(const CanardRxTransfer* transfer,
  uint16_t payload_len,
  uavcan_equipment_power_CircuitStatus* dest,
  uint8_t** dyn_arr_buf)
{
    const int32_t offset = 0;
    int32_t ret = 0;

    // Clear the destination struct
    for (uint32_t c = 0; c < sizeof(uavcan_equipment_power_CircuitStatus); c++)
    {
        ((uint8_t*)dest)[c] = 0x00;
    }

    ret = uavcan_equipment_power_CircuitStatus_decode_internal(transfer, payload_len, dest, dyn_arr_buf, offset);

    return ret;
}

#ifdef __cplusplus
} // extern "C"
#endif
#endif // __UAVCAN_EQUIPMENT_POWER_CIRCUITSTATUS