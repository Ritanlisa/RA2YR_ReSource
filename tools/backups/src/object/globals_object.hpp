#pragma once

// Global variable extern declarations for the "object" module.
// Addresses refer to the original gamemd.exe .data section.
// Types sourced from tools/type_db.json and tools/globals_by_module.json.

#include <cstdint>

namespace ra2 {
namespace game {

// ============================================================
// RadBeam / RadSite
// ============================================================

// 0xb04a60 [inferred_strong, purity]
extern uint32_t RadBeam_Array;

// 0xb04bd0 [inferred_strong, purity]
extern uint32_t RadSiteClass_Array;

// ============================================================
// Trigger / Event
// ============================================================

// 0xb04dac [ida_direct]
extern void* g_TriggerPool;

// 0xb04db8 [inferred_strong, purity]
extern uint32_t g_TriggerEventState;

// 0xb052d0 [inferred_strong, purity]
extern uint32_t g_NetworkEventQueue;

// ============================================================
// ColorScheme / BuildingTypeAnim
// ============================================================

// 0xb054d0 [inferred_strong, purity]
extern uint32_t ColorScheme_Array;

// 0xb054d4 [ida_direct]
extern void* BuildingTypeClass_AnimTable;

// ============================================================
// Animation
// ============================================================

// 0xb054e0 [inferred_strong, purity]
extern uint32_t g_AnimClass_SaveState;

// 0xb0bc88 [inferred_strong, purity]
extern uint32_t g_AnimationManager;

// 0xb0bc90 [inferred_strong, purity]
extern uint32_t g_AnimClass_Capacity;

// 0xb0f674 [ida_direct]
extern void* g_AnimPoolCount;

// 0xb0f688 [inferred_strong, size]
extern uint64_t g_AnimFrameCounter;

// ============================================================
// OverlayType
// ============================================================

// 0xb077f8 [inferred_strong, purity]
extern uint32_t g_OverlayTypeConfig;

// ============================================================
// Sidebar / Tooltip / Gadget
// ============================================================

// 0xb07bc4 [ida_direct]
extern uint16_t SidebarClass_TooltipBuffer;

// 0xb0b408 [ida_direct]
extern uint8_t g_SidebarFlag[12];

// 0xb0b4f8 [inferred_strong, purity]
extern uint32_t g_SidebarBounds;

// 0xb0b518 [inferred_strong, size]
extern uint8_t g_TooltipActive;

// 0xb0bd50 [inferred_strong, purity]
extern uint32_t g_SidebarButtonState;

// 0xb0bd58 [ida_direct]
extern void* g_SidebarPool;

// 0xb0fc1c [ida_direct]
extern void* g_GadgetAnimState;

// ============================================================
// SlaveManager / SpawnManager
// ============================================================

// 0xb0b5f0 [inferred_strong, purity]
extern uint32_t SlaveManagerClass_Array;

// 0xb0b660 [inferred_strong, purity]
extern uint32_t g_SlaveMgrPool;

// 0xb0b6ec [ida_direct]
extern void* g_SlaveManagerPool;

// 0xb0b880 [inferred_strong, purity]
extern uint32_t SpawnManagerClass_Array;

// ============================================================
// Map
// ============================================================

// 0xb0b788 [inferred_strong, purity]
extern uint32_t Map_BottomRightCell;

// ============================================================
// DWORD registration
// ============================================================

// 0xb0bcec [ida_direct]
extern uint32_t pdwRegister;

// ============================================================
// SwizzleManager / PaletteManager
// ============================================================

// 0xb0c110 [inferred_strong, purity]
extern uint32_t SwizzleManagerClass_Instance;

// 0xb0fb98 [inferred_strong, purity]
extern uint32_t g_PaletteManagerPool;

// ============================================================
// ObjectTrackingPool
// ============================================================

// 0xb0cb78 [ida_direct]
extern int32_t g_ObjectTrackingPool;

// ============================================================
// LightningStorm
// ============================================================

// 0xb0cdd8 [inferred_strong, size]
extern uint64_t LightningStorm_CloudHeightFactor;

// ============================================================
// Crater
// ============================================================

// 0xb0ce7c [ida_direct]
extern void* g_CraterPool;

// 0xb0ce88 [inferred_strong, purity]
extern uint32_t g_CraterCreationState;

// ============================================================
// TagClass
// ============================================================

// 0xb0e720 [inferred_strong, purity]
extern uint32_t TagClass_Array;

// 0xb0e724 [ida_direct]
extern void* g_TagClassCount;

// ============================================================
// GameObject / Multiplayer Cleanup
// ============================================================

// 0xb0e730 [inferred_strong, purity]
extern uint32_t g_GameObjectCleanup;

// 0xb0e790 [inferred_strong, purity]
extern uint32_t g_MultiplayerCleanup;

// ============================================================
// Techno
// ============================================================

// 0xb0ea50 [ida_direct]
extern int32_t g_TechnoHouseState;

// 0xb0ea90 [inferred_strong, purity]
extern uint32_t g_TechnoClassPool;

// ============================================================
// Building
// ============================================================

// 0xb0f4ec [ida_direct]
extern class BuildingClass* BuildingClass_InstanceArray;

// 0xb0f4f8 [inferred_strong, purity]
extern uint32_t g_CrateProcessState;

// 0xb0f540 [inferred_strong, size]
extern uint64_t g_BuildingClass_Capacity;

// 0xb0f5b8 [inferred_strong, purity]
extern uint32_t g_BuildingInstanceCount;

// 0xb0f5bc [ida_direct]
extern void* g_BuildingClassPoolManager;

// 0xb0f5c8 [inferred_strong, purity]
extern uint32_t g_BuildingTypeInstanceCount;

// ============================================================
// TActionClass
// ============================================================

// 0xb0f658 [inferred_strong, purity]
extern uint32_t TActionClass_Array;

// 0xb0f668 [inferred_strong, purity]
extern uint32_t g_TActionClassState;

// ============================================================
// AbstractClass
// ============================================================

// 0xb0f720 [inferred_strong, purity]
extern uint32_t AbstractClass_Array;

// ============================================================
// DialogControl
// ============================================================

// 0xb0fb50 [ida_direct]
extern void* g_DialogControlPool;

// ============================================================
// UnitTooltip
// ============================================================

// 0xb0fe6c [inferred_strong, purity]
extern uint32_t g_UnitTooltipState;

} // namespace game
} // namespace ra2
