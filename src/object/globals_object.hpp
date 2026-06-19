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

// 0xB04A60 [inferred_strong, purity]
extern uint32_t RadBeam_Array;

// 0xB04BD0 [inferred_strong, purity]
extern uint32_t RadSiteClass_Array;

// ============================================================
// Trigger / Event
// ============================================================

// 0xB04DAC [ida_direct]
extern void* g_TriggerPool;

// 0xB04DB8 [inferred_strong, purity]
extern uint32_t g_TriggerEventState;

// 0xB052D0 [inferred_strong, purity]
extern uint32_t g_NetworkEventQueue;

// ============================================================
// ColorScheme / BuildingTypeAnim
// ============================================================

// 0xB054D0 [inferred_strong, purity]
extern uint32_t ColorScheme_Array;

// 0xB054D4 [ida_direct]
extern void* BuildingTypeClass_AnimTable;

// ============================================================
// Animation
// ============================================================

// 0xB054E0 [inferred_strong, purity]
extern uint32_t g_AnimClass_SaveState;

// 0xB0BC88 [inferred_strong, purity]
extern uint32_t g_AnimationManager;

// 0xB0BC90 [inferred_strong, purity]
extern uint32_t g_AnimClass_Capacity;

// 0xB0F674 [ida_direct]
extern void* g_AnimPoolCount;

// 0xB0F688 [inferred_strong, size]
extern uint64_t g_AnimFrameCounter;

// ============================================================
// OverlayType
// ============================================================

// 0xB077F8 [inferred_strong, purity]
extern uint32_t g_OverlayTypeConfig;

// ============================================================
// Sidebar / Tooltip / Gadget
// ============================================================

// 0xB07BC4 [ida_direct]
extern uint16_t SidebarClass_TooltipBuffer;

// 0xB0B408 [ida_direct]
extern uint8_t g_SidebarFlag[12];

// 0xB0B4F8 [inferred_strong, purity]
extern uint32_t g_SidebarBounds;

// 0xB0B518 [inferred_strong, size]
extern uint8_t g_TooltipActive;

// 0xB0BD50 [inferred_strong, purity]
extern uint32_t g_SidebarButtonState;

// 0xB0BD58 [ida_direct]
extern void* g_SidebarPool;

// 0xB0FC1C [ida_direct]
extern void* g_GadgetAnimState;

// ============================================================
// SlaveManager / SpawnManager
// ============================================================

// 0xB0B5F0 [inferred_strong, purity]
extern uint32_t SlaveManagerClass_Array;

// 0xB0B660 [inferred_strong, purity]
extern uint32_t g_SlaveMgrPool;

// 0xB0B6EC [ida_direct]
extern void* g_SlaveManagerPool;

// 0xB0B880 [inferred_strong, purity]
extern uint32_t SpawnManagerClass_Array;

// ============================================================
// Map
// ============================================================

// 0xB0B788 [inferred_strong, purity]
extern uint32_t Map_BottomRightCell;

// ============================================================
// DWORD registration
// ============================================================

// 0xB0BCEC [ida_direct]
extern uint32_t pdwRegister;

// ============================================================
// SwizzleManager / PaletteManager
// ============================================================

// 0xB0C110 [inferred_strong, purity]
extern uint32_t SwizzleManagerClass_Instance;

// 0xB0FB98 [inferred_strong, purity]
extern uint32_t g_PaletteManagerPool;

// ============================================================
// ObjectTrackingPool
// ============================================================

// 0xB0CB78 [ida_direct]
extern int32_t g_ObjectTrackingPool;

// ============================================================
// LightningStorm
// ============================================================

// 0xB0CDD8 [inferred_strong, size]
extern uint64_t LightningStorm_CloudHeightFactor;

// ============================================================
// Crater
// ============================================================

// 0xB0CE7C [ida_direct]
extern void* g_CraterPool;

// 0xB0CE88 [inferred_strong, purity]
extern uint32_t g_CraterCreationState;

// ============================================================
// TagClass
// ============================================================

// 0xB0E720 [inferred_strong, purity]
extern uint32_t TagClass_Array;

// 0xB0E724 [ida_direct]
extern void* g_TagClassCount;

// ============================================================
// GameObject / Multiplayer Cleanup
// ============================================================

// 0xB0E730 [inferred_strong, purity]
extern uint32_t g_GameObjectCleanup;

// 0xB0E790 [inferred_strong, purity]
extern uint32_t g_MultiplayerCleanup;

// ============================================================
// Techno
// ============================================================

// 0xB0EA50 [ida_direct]
extern int32_t g_TechnoHouseState;

// 0xB0EA90 [inferred_strong, purity]
extern uint32_t g_TechnoClassPool;

// ============================================================
// Building
// ============================================================

// 0xB0F4EC [ida_direct]
extern class BuildingClass* BuildingClass_InstanceArray;

// 0xB0F4F8 [inferred_strong, purity]
extern uint32_t g_CrateProcessState;

// 0xB0F540 [inferred_strong, size]
extern uint64_t g_BuildingClass_Capacity;

// 0xB0F5B8 [inferred_strong, purity]
extern uint32_t g_BuildingInstanceCount;

// 0xB0F5BC [ida_direct]
extern void* g_BuildingClassPoolManager;

// 0xB0F5C8 [inferred_strong, purity]
extern uint32_t g_BuildingTypeInstanceCount;

// ============================================================
// TActionClass
// ============================================================

// 0xB0F658 [inferred_strong, purity]
extern uint32_t TActionClass_Array;

// 0xB0F668 [inferred_strong, purity]
extern uint32_t g_TActionClassState;

// ============================================================
// AbstractClass
// ============================================================

// 0xB0F720 [inferred_strong, purity]
extern uint32_t AbstractClass_Array;

// ============================================================
// DialogControl
// ============================================================

// 0xB0FB50 [ida_direct]
extern void* g_DialogControlPool;

// ============================================================
// UnitTooltip
// ============================================================

// 0xB0FE6C [inferred_strong, purity]
extern uint32_t g_UnitTooltipState;

} // namespace game
} // namespace ra2
