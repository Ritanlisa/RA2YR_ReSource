// Extern declarations for structure module globals.
// Address annotations refer to the original gamemd.exe binary.
// Source: tools/globals_by_module.json + tools/type_db.json
#pragma once

#include <cstdint>

namespace gamemd {

// ============================================================
// Unit globals
// ============================================================

extern void* g_UnitClassPool; // 0x8B410C

extern uint32_t g_UnitTypeCount; // 0x8B4148

extern int32_t g_UnitSelectionState; // 0xB1CFB8

// ============================================================
// Infantry globals
// ============================================================

extern void* g_InfantryRenderPool; // 0xB1D4A4

extern uint32_t g_InfantrySelectState; // 0xB1D4B0

extern void* g_InfantryDrawState; // 0xB1D4CC

// ============================================================
// Team globals
// ============================================================

extern void* g_TeamClassPool; // 0x8B40EC

// ============================================================
// Script globals
// ============================================================

extern uint32_t g_ScriptActionPool; // 0xAC4BF0

extern uint32_t g_ScriptState; // 0xAC4C38

extern uint32_t g_ScriptConfig; // 0xAC4C98

extern uint32_t g_ScriptPool; // 0xAC4CCC

// ============================================================
// High-XRef Globals (xref≥5, ≥2 callers, from xref_analysis_batch)
// ============================================================

extern void* g_ScenarioClass_Instance; // 0xA8B230

extern void* g_CurrentFrame; // 0xA8ED84

extern uint32_t g_GameMode_Current; // 0xA8B238

extern uint32_t g_IKnowWhatImDoing; // 0xA8E7AC

extern uint32_t g_WTFMode; // 0xA8E9A0

extern void* g_BuildingTypeClass_Array; // 0xA83D84

extern uint32_t g_ArmageddonMode; // 0xA8ED6B

extern uint32_t g_lParam; // 0xA8EB78

extern uint32_t g_Map_GlobalCellIndex; // 0xABDC74

extern uint32_t g_SelectionManager; // 0xA8ECC8

extern uint32_t g_GameModeOptions; // 0xA8EB60

extern uint32_t g_TriggerTypeCount; // 0xA83C6C

extern uint32_t g_ObjectClass_CurrentCount; // 0xA8ECBC

extern uint32_t g_ScenarioState; // 0xA8B550

extern uint32_t g_AnimTypeCount; // 0x8B4154

extern uint32_t g_NetworkEventPending; // 0xA8D5F8

extern uint32_t g_TriggerClassCount; // 0xA83C78

extern uint32_t g_IntroMovieObject; // 0xA8E960

extern uint32_t g_DDraw_Active; // 0xA8ED80

extern uint32_t g_GameActive; // 0xA8ED9C

extern uint32_t g_CommandLineFlags; // 0xA8EB84

} // namespace gamemd
