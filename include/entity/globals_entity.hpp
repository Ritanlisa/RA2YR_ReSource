#pragma once

#include <cstdint>

// Entity (Bullet) / House / Team combined globals
// Source: tools/globals_by_module.json (module "entity_house_team"), tools/type_db.json

extern uint32_t g_BulletClassPool;           // 0xABCD3C, size 4, .data
extern uint32_t g_HouseClass_AIProductionState; // 0x8B40F8, size 4, .data
extern uint32_t g_HouseClass_BuildState;        // 0x8B4118, size 4, .data
extern int32_t  g_HouseClass_ObserverFlags;     // 0xAC119C, size 4, .data (IDA: LPARAM)
