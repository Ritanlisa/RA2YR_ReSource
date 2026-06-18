// Extern declarations for structure module globals.
// Address annotations refer to the original gamemd.exe binary.
// Source: tools/globals_by_module.json + tools/type_db.json
#pragma once

#include <cstdint>

namespace gamemd {

// ============================================================
// Unit globals
// ============================================================

// 0x8B410C — Dynamic pool of UnitClass instances (void*) [ida_direct]
extern void* g_UnitClassPool;

// 0x8B4148 — Counter: number of unit types active [inferred_strong]
extern uint32_t g_UnitTypeCount;

// 0xB1CFB8 — Unit selection state (int32_t) [ida_direct]
extern int32_t g_UnitSelectionState;

// ============================================================
// Infantry globals
// ============================================================

// 0xB1D4A4 — Infantry render pool pointer (void*) [ida_direct]
extern void* g_InfantryRenderPool;

// 0xB1D4B0 — Infantry selection state (uint32_t) [inferred_strong]
extern uint32_t g_InfantrySelectState;

// 0xB1D4CC — Infantry draw state pointer (void*) [ida_direct]
extern void* g_InfantryDrawState;

// ============================================================
// Team globals
// ============================================================

// 0x8B40EC — TeamClass pool pointer (void*) [ida_direct]
extern void* g_TeamClassPool;

// ============================================================
// Script globals
// ============================================================

// 0xAC4BF0 — Script action pool (uint32_t) [inferred_strong]
extern uint32_t g_ScriptActionPool;

// 0xAC4C38 — Script state (uint32_t) [inferred_strong]
extern uint32_t g_ScriptState;

// 0xAC4C98 — Script configuration (uint32_t) [inferred_strong]
extern uint32_t g_ScriptConfig;

// 0xAC4CCC — Script pool handle (uint32_t) [inferred_strong]
extern uint32_t g_ScriptPool;

} // namespace gamemd
