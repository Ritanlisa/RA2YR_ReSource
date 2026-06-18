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

// ============================================================
// High-XRef Globals (xref≥5, ≥2 callers, from xref_analysis_batch)
// ============================================================

// 0xA8B230 [confidence: inferred_strong] (was: ScenarioClass_Instance)
extern void* g_ScenarioClass_Instance;

// 0xA8ED84 [confidence: inferred_strong] (was: CurrentFrame)
extern void* g_CurrentFrame;

// 0xA8B238 [confidence: inferred_strong] (was: GameMode_Current)
extern uint32_t g_GameMode_Current;

// 0xA8E7AC [confidence: inferred_strong] (was: IKnowWhatImDoing)
extern uint32_t g_IKnowWhatImDoing;

// 0xA8E9A0 [confidence: inferred_strong] (was: WTFMode)
extern uint32_t g_WTFMode;

// 0xA83D84 [confidence: inferred_strong] (was: BuildingTypeClass_Array)
extern void* g_BuildingTypeClass_Array;

// 0xA8ED6B [confidence: inferred_strong] (was: ArmageddonMode)
extern uint32_t g_ArmageddonMode;

// 0xA8EB78 [confidence: inferred_strong] (was: lParam)
extern uint32_t g_lParam;

// 0xABDC74 [confidence: inferred_strong] global cell index for map
extern uint32_t g_Map_GlobalCellIndex;

// 0xA8ECC8 [confidence: inferred_strong] selection manager instance
extern uint32_t g_SelectionManager;

// 0xA8EB60 [confidence: inferred_strong] game mode options flags
extern uint32_t g_GameModeOptions;

// 0xA83C6C [confidence: inferred_strong] trigger type count
extern uint32_t g_TriggerTypeCount;

// 0xA8ECBC [confidence: inferred_strong] current object class count
extern uint32_t g_ObjectClass_CurrentCount;

// 0xA8B550 [confidence: inferred_strong] scenario state flag
extern uint32_t g_ScenarioState;

// 0x8B4154 [confidence: inferred_strong] anim type count
extern uint32_t g_AnimTypeCount;

// 0xA8D5F8 [confidence: inferred_strong] network event pending flag
extern uint32_t g_NetworkEventPending;

// 0xA83C78 [confidence: inferred_strong] trigger class count
extern uint32_t g_TriggerClassCount;

// 0xA8E960 [confidence: inferred_strong] intro movie object handle
extern uint32_t g_IntroMovieObject;

// 0xA8ED80 [confidence: inferred_strong] DirectDraw active flag
extern uint32_t g_DDraw_Active;

// 0xA8ED9C [confidence: inferred_strong] game active state flag
extern uint32_t g_GameActive;

// 0xA8EB84 [confidence: inferred_strong] command line flags
extern uint32_t g_CommandLineFlags;

} // namespace gamemd
