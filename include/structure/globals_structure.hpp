// Extern declarations for structure module globals.
// Address annotations refer to the original gamemd.exe binary.
// Source: tools/globals_by_module.json + tools/type_db.json
#pragma once

#include <cstdint>

namespace gamemd {

// ============================================================
// Unit globals
// ============================================================

extern void* g_UnitClassPool; // data: 0x8B410C

extern uint32_t g_UnitTypeCount; // data: 0x8B4148

extern int32_t g_UnitSelectionState; // data: 0xB1CFB8

// ============================================================
// Infantry globals
// ============================================================

extern void* g_InfantryRenderPool; // data: 0xB1D4A4

extern uint32_t g_InfantrySelectState; // data: 0xB1D4B0

extern void* g_InfantryDrawState; // data: 0xB1D4CC

// ============================================================
// Team globals
// ============================================================

extern void* g_TeamClassPool; // data: 0x8B40EC

// ============================================================
// Script globals
// ============================================================

extern uint32_t g_ScriptActionPool; // data: 0xAC4BF0

extern uint32_t g_ScriptState; // data: 0xAC4C38

extern uint32_t g_ScriptConfig; // data: 0xAC4C98

extern uint32_t g_ScriptPool; // data: 0xAC4CCC

// ============================================================
// High-XRef Globals (xref≥5, ≥2 callers, from xref_analysis_batch)
// ============================================================

extern void* g_ScenarioClass_Instance; // data: 0xA8B230

extern void* g_CurrentFrame; // data: 0xA8ED84

extern uint32_t g_GameMode_Current; // data: 0xA8B238

extern uint32_t g_IKnowWhatImDoing; // data: 0xA8E7AC

extern uint32_t g_WTFMode; // data: 0xA8E9A0

extern void* g_BuildingTypeClass_Array; // data: 0xA83D84

extern uint32_t g_ArmageddonMode; // data: 0xA8ED6B

extern uint32_t g_lParam; // data: 0xA8EB78

extern uint32_t g_Map_GlobalCellIndex; // data: 0xABDC74

extern uint32_t g_SelectionManager; // data: 0xA8ECC8

extern uint32_t g_GameModeOptions; // data: 0xA8EB60

extern uint32_t g_TriggerTypeCount; // data: 0xA83C6C

extern uint32_t g_ObjectClass_CurrentCount; // data: 0xA8ECBC

extern uint32_t g_ScenarioState; // data: 0xA8B550

extern uint32_t g_AnimTypeCount; // data: 0x8B4154

extern uint32_t g_NetworkEventPending; // data: 0xA8D5F8

extern uint32_t g_TriggerClassCount; // data: 0xA83C78

extern uint32_t g_IntroMovieObject; // data: 0xA8E960

extern uint32_t g_DDraw_Active; // data: 0xA8ED80

extern uint32_t g_GameActive; // data: 0xA8ED9C

extern uint32_t g_CommandLineFlags; // data: 0xA8EB84

} // namespace gamemd
