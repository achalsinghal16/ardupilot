/*
 * UAVCAN data structure definition for libcanard.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /home/alex/ArduPilot/ardupilot/modules/uavcan/dsdl/uavcan/equipment/indication/SingleLightCommand.uavcan
 */

#ifndef __UAVCAN_EQUIPMENT_INDICATION_SINGLELIGHTCOMMAND
#define __UAVCAN_EQUIPMENT_INDICATION_SINGLELIGHTCOMMAND

#include <stdint.h>
#include "canard.h"

#ifdef __cplusplus
extern "C"
{
#endif

#include <uavcan/equipment/indication/RGB565.h>

/******************************* Source text **********************************
#
# Nested type.
# Controls single light source, color or monochrome.
#

#
# Common aircraft lights IDs
#

# inform the crew working on the apron around noisy airplanes, wearing hearing protection,
# that the engines are turned on. Also called beacon light
uint8 LIGHT_ID_ANTI_COLLISION = 246

# a red light is mounted on the left, or port, side of the craft and a green on the right,
# or starboard, side both 110 degree, and tail white light of 140 degree. Also called navigation lights
uint8 LIGHT_ID_RIGHT_OF_WAY   = 247

# high-intensity burst of white light, to help other pilots recognize the
# aircraft's position in low-visibility conditions
uint8 LIGHT_ID_STROBE         = 248

# positioned on the outer side just in front of the engine cowlings on the fuselage
uint8 LIGHT_ID_WING           = 249

# lights that highlite on the logo painted on the tail or other visible surface.
# Also called vertical tail flood lights
uint8 LIGHT_ID_LOGO           = 250

# help the pilots see the area in front of them and also shows other traffic that they're on the move
uint8 LIGHT_ID_TAXI           = 251

# light up the area in front of the airplane a bit more towards the side, easier for turns
uint8 LIGHT_ID_TURN_OFF       = 252

# very bright, lights up the area in front but a lot more than the taxi light
uint8 LIGHT_ID_TAKE_OFF       = 253

# very bright lights on the wings to help the pilots during landing by
# lighting up the area where they're going to touch down
uint8 LIGHT_ID_LANDING        = 254

# usually yellow electroluminescent lightstrips designed to use
# during formation flying at night or under low visibility conditions
uint8 LIGHT_ID_FORMATION      = 255

uint8 light_id

RGB565 color      # Monocolor lights should interpret this as brightness
******************************************************************************/

/********************* DSDL signature source definition ***********************
uavcan.equipment.indication.SingleLightCommand
saturated uint8 light_id
uavcan.equipment.indication.RGB565 color
******************************************************************************/

#define UAVCAN_EQUIPMENT_INDICATION_SINGLELIGHTCOMMAND_NAME "uavcan.equipment.indication.SingleLightCommand"
#define UAVCAN_EQUIPMENT_INDICATION_SINGLELIGHTCOMMAND_SIGNATURE (0xE894B8B589807007ULL)

#define UAVCAN_EQUIPMENT_INDICATION_SINGLELIGHTCOMMAND_MAX_SIZE ((24 + 7)/8)

// Constants
#define UAVCAN_EQUIPMENT_INDICATION_SINGLELIGHTCOMMAND_LIGHT_ID_ANTI_COLLISION        246 // 246
#define UAVCAN_EQUIPMENT_INDICATION_SINGLELIGHTCOMMAND_LIGHT_ID_RIGHT_OF_WAY        247 // 247
#define UAVCAN_EQUIPMENT_INDICATION_SINGLELIGHTCOMMAND_LIGHT_ID_STROBE        248 // 248
#define UAVCAN_EQUIPMENT_INDICATION_SINGLELIGHTCOMMAND_LIGHT_ID_WING        249 // 249
#define UAVCAN_EQUIPMENT_INDICATION_SINGLELIGHTCOMMAND_LIGHT_ID_LOGO        250 // 250
#define UAVCAN_EQUIPMENT_INDICATION_SINGLELIGHTCOMMAND_LIGHT_ID_TAXI        251 // 251
#define UAVCAN_EQUIPMENT_INDICATION_SINGLELIGHTCOMMAND_LIGHT_ID_TURN_OFF        252 // 252
#define UAVCAN_EQUIPMENT_INDICATION_SINGLELIGHTCOMMAND_LIGHT_ID_TAKE_OFF        253 // 253
#define UAVCAN_EQUIPMENT_INDICATION_SINGLELIGHTCOMMAND_LIGHT_ID_LANDING        254 // 254
#define UAVCAN_EQUIPMENT_INDICATION_SINGLELIGHTCOMMAND_LIGHT_ID_FORMATION        255 // 255

typedef struct
{
    // FieldTypes
    uint8_t    light_id;                      // bit len 8
    uavcan_equipment_indication_RGB565 color;                         //

} uavcan_equipment_indication_SingleLightCommand;

static inline
uint32_t uavcan_equipment_indication_SingleLightCommand_encode(uavcan_equipment_indication_SingleLightCommand* source, void* msg_buf);

static inline
int32_t uavcan_equipment_indication_SingleLightCommand_decode(const CanardRxTransfer* transfer, uint16_t payload_len, uavcan_equipment_indication_SingleLightCommand* dest, uint8_t** dyn_arr_buf);

static inline
uint32_t uavcan_equipment_indication_SingleLightCommand_encode_internal(uavcan_equipment_indication_SingleLightCommand* source, void* msg_buf, uint32_t offset, uint8_t root_item);

static inline
int32_t uavcan_equipment_indication_SingleLightCommand_decode_internal(const CanardRxTransfer* transfer, uint16_t payload_len, uavcan_equipment_indication_SingleLightCommand* dest, uint8_t** dyn_arr_buf, int32_t offset);

/*
 * UAVCAN data structure definition for libcanard.
 *
 * Autogenerated, do not edit.
 *
 * Source file: /home/alex/ArduPilot/ardupilot/modules/uavcan/dsdl/uavcan/equipment/indication/SingleLightCommand.uavcan
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
  * @brief uavcan_equipment_indication_SingleLightCommand_encode_internal
  * @param source : pointer to source data struct
  * @param msg_buf: pointer to msg storage
  * @param offset: bit offset to msg storage
  * @param root_item: for detecting if TAO should be used
  * @retval returns offset
  */
uint32_t uavcan_equipment_indication_SingleLightCommand_encode_internal(uavcan_equipment_indication_SingleLightCommand* source,
  void* msg_buf,
  uint32_t offset,
  uint8_t CANARD_MAYBE_UNUSED(root_item))
{
    canardEncodeScalar(msg_buf, offset, 8, (void*)&source->light_id); // 255
    offset += 8;

    // Compound
    offset = uavcan_equipment_indication_RGB565_encode_internal(&source->color, msg_buf, offset, 0);

    return offset;
}

/**
  * @brief uavcan_equipment_indication_SingleLightCommand_encode
  * @param source : Pointer to source data struct
  * @param msg_buf: Pointer to msg storage
  * @retval returns message length as bytes
  */
uint32_t uavcan_equipment_indication_SingleLightCommand_encode(uavcan_equipment_indication_SingleLightCommand* source, void* msg_buf)
{
    uint32_t offset = 0;

    offset = uavcan_equipment_indication_SingleLightCommand_encode_internal(source, msg_buf, offset, 1);

    return (offset + 7 ) / 8;
}

/**
  * @brief uavcan_equipment_indication_SingleLightCommand_decode_internal
  * @param transfer: Pointer to CanardRxTransfer transfer
  * @param payload_len: Payload message length
  * @param dest: Pointer to destination struct
  * @param dyn_arr_buf: NULL or Pointer to memory storage to be used for dynamic arrays
  *                     uavcan_equipment_indication_SingleLightCommand dyn memory will point to dyn_arr_buf memory.
  *                     NULL will ignore dynamic arrays decoding.
  * @param offset: Call with 0, bit offset to msg storage
  * @retval offset or ERROR value if < 0
  */
int32_t uavcan_equipment_indication_SingleLightCommand_decode_internal(
  const CanardRxTransfer* transfer,
  uint16_t CANARD_MAYBE_UNUSED(payload_len),
  uavcan_equipment_indication_SingleLightCommand* dest,
  uint8_t** CANARD_MAYBE_UNUSED(dyn_arr_buf),
  int32_t offset)
{
    int32_t ret = 0;

    ret = canardDecodeScalar(transfer, (uint32_t)offset, 8, false, (void*)&dest->light_id);
    if (ret != 8)
    {
        goto uavcan_equipment_indication_SingleLightCommand_error_exit;
    }
    offset += 8;

    // Compound
    offset = uavcan_equipment_indication_RGB565_decode_internal(transfer, payload_len, &dest->color, dyn_arr_buf, offset);
    if (offset < 0)
    {
        ret = offset;
        goto uavcan_equipment_indication_SingleLightCommand_error_exit;
    }
    return offset;

uavcan_equipment_indication_SingleLightCommand_error_exit:
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
  * @brief uavcan_equipment_indication_SingleLightCommand_decode
  * @param transfer: Pointer to CanardRxTransfer transfer
  * @param payload_len: Payload message length
  * @param dest: Pointer to destination struct
  * @param dyn_arr_buf: NULL or Pointer to memory storage to be used for dynamic arrays
  *                     uavcan_equipment_indication_SingleLightCommand dyn memory will point to dyn_arr_buf memory.
  *                     NULL will ignore dynamic arrays decoding.
  * @retval offset or ERROR value if < 0
  */
int32_t uavcan_equipment_indication_SingleLightCommand_decode(const CanardRxTransfer* transfer,
  uint16_t payload_len,
  uavcan_equipment_indication_SingleLightCommand* dest,
  uint8_t** dyn_arr_buf)
{
    const int32_t offset = 0;
    int32_t ret = 0;

    // Clear the destination struct
    for (uint32_t c = 0; c < sizeof(uavcan_equipment_indication_SingleLightCommand); c++)
    {
        ((uint8_t*)dest)[c] = 0x00;
    }

    ret = uavcan_equipment_indication_SingleLightCommand_decode_internal(transfer, payload_len, dest, dyn_arr_buf, offset);

    return ret;
}

#ifdef __cplusplus
} // extern "C"
#endif
#endif // __UAVCAN_EQUIPMENT_INDICATION_SINGLELIGHTCOMMAND