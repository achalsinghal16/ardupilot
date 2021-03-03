#pragma once
// auto generated bindings, don't manually edit.  See README.md for details.
#include <AP_Notify/ScriptingLED.h>
#include <AP_Button/AP_Button.h>
#include <AP_RPM/AP_RPM.h>
#include <AP_Mission/AP_Mission.h>
#include <AP_Scripting/AP_Scripting_helpers.h>
#include <AP_Param/AP_Param.h>
#include <AP_ESC_Telem/AP_ESC_Telem.h>
#include <AP_Baro/AP_Baro.h>
#include <AP_SerialManager/AP_SerialManager.h>
#include <RC_Channel/RC_Channel.h>
#include <SRV_Channel/SRV_Channel.h>
#include <AP_SerialLED/AP_SerialLED.h>
#include <AP_Vehicle/AP_Vehicle.h>
#include <GCS_MAVLink/GCS.h>
#include <AP_Relay/AP_Relay.h>
#include <AP_Terrain/AP_Terrain.h>
#include <AP_RangeFinder/AP_RangeFinder.h>
#include <AP_Proximity/AP_Proximity.h>
#include <AP_Notify/AP_Notify.h>
#include <AP_Math/AP_Math.h>
#include <AP_GPS/AP_GPS.h>
#include <AP_BattMonitor/AP_BattMonitor.h>
#include <AP_Arming/AP_Arming.h>
#include <AP_AHRS/AP_AHRS.h>
#include <AP_Common/Location.h>
#include <AP_Scripting/lua/src/lua.hpp>
#include <new>

#if !defined(AP_TERRAIN_AVAILABLE) || (AP_TERRAIN_AVAILABLE != 1)
  #error Scripting requires terrain to be available
#endif // !defined(AP_TERRAIN_AVAILABLE) || (AP_TERRAIN_AVAILABLE != 1)


int new_mavlink_mission_item_int_t(lua_State *L);
mavlink_mission_item_int_t * check_mavlink_mission_item_int_t(lua_State *L, int arg);
int new_Parameter(lua_State *L);
Parameter * check_Parameter(lua_State *L, int arg);
int new_Vector2f(lua_State *L);
Vector2f * check_Vector2f(lua_State *L, int arg);
int new_Vector3f(lua_State *L);
Vector3f * check_Vector3f(lua_State *L, int arg);
int new_Location(lua_State *L);
Location * check_Location(lua_State *L, int arg);
int new_AP_HAL__UARTDriver(lua_State *L);
AP_HAL::UARTDriver ** check_AP_HAL__UARTDriver(lua_State *L, int arg);
int new_RC_Channel(lua_State *L);
RC_Channel ** check_RC_Channel(lua_State *L, int arg);
void load_generated_bindings(lua_State *L);
void load_generated_sandbox(lua_State *L);
