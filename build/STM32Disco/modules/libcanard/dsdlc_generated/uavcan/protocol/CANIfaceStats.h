/*
 * UAVCAN data structure definition for libcanard.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /home/alex/ArduPilot/ardupilot/modules/uavcan/dsdl/uavcan/protocol/CANIfaceStats.uavcan
 */

#ifndef __UAVCAN_PROTOCOL_CANIFACESTATS
#define __UAVCAN_PROTOCOL_CANIFACESTATS

#include <stdint.h>
#include "canard.h"

#ifdef __cplusplus
extern "C"
{
#endif

/******************************* Source text **********************************
#
# Single CAN iface statistics.
#

uint48 frames_tx        # Number of transmitted CAN frames.
uint48 frames_rx        # Number of received CAN frames.
uint48 errors           # Number of errors in the CAN layer.
******************************************************************************/

/********************* DSDL signature source definition ***********************
uavcan.protocol.CANIfaceStats
saturated uint48 frames_tx
saturated uint48 frames_rx
saturated uint48 errors
******************************************************************************/

#define UAVCAN_PROTOCOL_CANIFACESTATS_NAME                 "uavcan.protocol.CANIfaceStats"
#define UAVCAN_PROTOCOL_CANIFACESTATS_SIGNATURE            (0x13B106F0C44CA350ULL)

#define UAVCAN_PROTOCOL_CANIFACESTATS_MAX_SIZE             ((144 + 7)/8)

// Constants

typedef struct
{
    // FieldTypes
    uint64_t   frames_tx;                     // bit len 48
    uint64_t   frames_rx;                     // bit len 48
    uint64_t   errors;                        // bit len 48

} uavcan_protocol_CANIfaceStats;

static inline
uint32_t uavcan_protocol_CANIfaceStats_encode(uavcan_protocol_CANIfaceStats* source, void* msg_buf);

static inline
int32_t uavcan_protocol_CANIfaceStats_decode(const CanardRxTransfer* transfer, uint16_t payload_len, uavcan_protocol_CANIfaceStats* dest, uint8_t** dyn_arr_buf);

static inline
uint32_t uavcan_protocol_CANIfaceStats_encode_internal(uavcan_protocol_CANIfaceStats* source, void* msg_buf, uint32_t offset, uint8_t root_item);

static inline
int32_t uavcan_protocol_CANIfaceStats_decode_internal(const CanardRxTransfer* transfer, uint16_t payload_len, uavcan_protocol_CANIfaceStats* dest, uint8_t** dyn_arr_buf, int32_t offset);

/*
 * UAVCAN data structure definition for libcanard.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /home/alex/ArduPilot/ardupilot/modules/uavcan/dsdl/uavcan/protocol/CANIfaceStats.uavcan
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
  * @brief uavcan_protocol_CANIfaceStats_encode_internal
  * @param source : pointer to source data struct
  * @param msg_buf: pointer to msg storage
  * @param offset: bit offset to msg storage
  * @param root_item: for detecting if TAO should be used
  * @retval returns offset
  */
uint32_t uavcan_protocol_CANIfaceStats_encode_internal(uavcan_protocol_CANIfaceStats* source,
  void* msg_buf,
  uint32_t offset,
  uint8_t CANARD_MAYBE_UNUSED(root_item))
{
    source->frames_tx = CANARD_INTERNAL_SATURATE_UNSIGNED(source->frames_tx, 281474976710655)
    canardEncodeScalar(msg_buf, offset, 48, (void*)&source->frames_tx); // 281474976710655
    offset += 48;

    source->frames_rx = CANARD_INTERNAL_SATURATE_UNSIGNED(source->frames_rx, 281474976710655)
    canardEncodeScalar(msg_buf, offset, 48, (void*)&source->frames_rx); // 281474976710655
    offset += 48;

    source->errors = CANARD_INTERNAL_SATURATE_UNSIGNED(source->errors, 281474976710655)
    canardEncodeScalar(msg_buf, offset, 48, (void*)&source->errors); // 281474976710655
    offset += 48;

    return offset;
}

/**
  * @brief uavcan_protocol_CANIfaceStats_encode
  * @param source : Pointer to source data struct
  * @param msg_buf: Pointer to msg storage
  * @retval returns message length as bytes
  */
uint32_t uavcan_protocol_CANIfaceStats_encode(uavcan_protocol_CANIfaceStats* source, void* msg_buf)
{
    uint32_t offset = 0;

    offset = uavcan_protocol_CANIfaceStats_encode_internal(source, msg_buf, offset, 1);

    return (offset + 7 ) / 8;
}

/**
  * @brief uavcan_protocol_CANIfaceStats_decode_internal
  * @param transfer: Pointer to CanardRxTransfer transfer
  * @param payload_len: Payload message length
  * @param dest: Pointer to destination struct
  * @param dyn_arr_buf: NULL or Pointer to memory storage to be used for dynamic arrays
  *                     uavcan_protocol_CANIfaceStats dyn memory will point to dyn_arr_buf memory.
  *                     NULL will ignore dynamic arrays decoding.
  * @param offset: Call with 0, bit offset to msg storage
  * @retval offset or ERROR value if < 0
  */
int32_t uavcan_protocol_CANIfaceStats_decode_internal(
  const CanardRxTransfer* transfer,
  uint16_t CANARD_MAYBE_UNUSED(payload_len),
  uavcan_protocol_CANIfaceStats* dest,
  uint8_t** CANARD_MAYBE_UNUSED(dyn_arr_buf),
  int32_t offset)
{
    int32_t ret = 0;

    ret = canardDecodeScalar(transfer, (uint32_t)offset, 48, false, (void*)&dest->frames_tx);
    if (ret != 48)
    {
        goto uavcan_protocol_CANIfaceStats_error_exit;
    }
    offset += 48;

    ret = canardDecodeScalar(transfer, (uint32_t)offset, 48, false, (void*)&dest->frames_rx);
    if (ret != 48)
    {
        goto uavcan_protocol_CANIfaceStats_error_exit;
    }
    offset += 48;

    ret = canardDecodeScalar(transfer, (uint32_t)offset, 48, false, (void*)&dest->errors);
    if (ret != 48)
    {
        goto uavcan_protocol_CANIfaceStats_error_exit;
    }
    offset += 48;
    return offset;

uavcan_protocol_CANIfaceStats_error_exit:
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
  * @brief uavcan_protocol_CANIfaceStats_decode
  * @param transfer: Pointer to CanardRxTransfer transfer
  * @param payload_len: Payload message length
  * @param dest: Pointer to destination struct
  * @param dyn_arr_buf: NULL or Pointer to memory storage to be used for dynamic arrays
  *                     uavcan_protocol_CANIfaceStats dyn memory will point to dyn_arr_buf memory.
  *                     NULL will ignore dynamic arrays decoding.
  * @retval offset or ERROR value if < 0
  */
int32_t uavcan_protocol_CANIfaceStats_decode(const CanardRxTransfer* transfer,
  uint16_t payload_len,
  uavcan_protocol_CANIfaceStats* dest,
  uint8_t** dyn_arr_buf)
{
    const int32_t offset = 0;
    int32_t ret = 0;

    // Clear the destination struct
    for (uint32_t c = 0; c < sizeof(uavcan_protocol_CANIfaceStats); c++)
    {
        ((uint8_t*)dest)[c] = 0x00;
    }

    ret = uavcan_protocol_CANIfaceStats_decode_internal(transfer, payload_len, dest, dyn_arr_buf, offset);

    return ret;
}

#ifdef __cplusplus
} // extern "C"
#endif
#endif // __UAVCAN_PROTOCOL_CANIFACESTATS