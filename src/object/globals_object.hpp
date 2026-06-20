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

extern uint32_t RadBeam_Array; // 0xB04A60

extern uint32_t RadSiteClass_Array; // 0xB04BD0

// ============================================================
// Trigger / Event
// ============================================================

extern void* g_TriggerPool; // 0xB04DAC

extern uint32_t g_TriggerEventState; // 0xB04DB8

extern uint32_t g_NetworkEventQueue; // 0xB052D0

// ============================================================
// ColorScheme / BuildingTypeAnim
// ============================================================

extern uint32_t ColorScheme_Array; // 0xB054D0

extern void* BuildingTypeClass_AnimTable; // 0xB054D4

// ============================================================
// Animation
// ============================================================

extern uint32_t g_AnimClass_SaveState; // 0xB054E0

extern uint32_t g_AnimationManager; // 0xB0BC88

extern uint32_t g_AnimClass_Capacity; // 0xB0BC90

extern void* g_AnimPoolCount; // 0xB0F674

extern uint64_t g_AnimFrameCounter; // 0xB0F688

// ============================================================
// OverlayType
// ============================================================

extern uint32_t g_OverlayTypeConfig; // 0xB077F8

// ============================================================
// Sidebar / Tooltip / Gadget
// ============================================================

extern uint16_t SidebarClass_TooltipBuffer; // 0xB07BC4

extern uint8_t g_SidebarFlag[12]; // 0xB0B408

extern uint32_t g_SidebarBounds; // 0xB0B4F8

extern uint8_t g_TooltipActive; // 0xB0B518

extern uint32_t g_SidebarButtonState; // 0xB0BD50

extern void* g_SidebarPool; // 0xB0BD58

extern void* g_GadgetAnimState; // 0xB0FC1C

// ============================================================
// SlaveManager / SpawnManager
// ============================================================

extern uint32_t SlaveManagerClass_Array; // 0xB0B5F0

extern uint32_t g_SlaveMgrPool; // 0xB0B660

extern void* g_SlaveManagerPool; // 0xB0B6EC

extern uint32_t SpawnManagerClass_Array; // 0xB0B880

// ============================================================
// Map
// ============================================================

extern uint32_t Map_BottomRightCell; // 0xB0B788

// ============================================================
// DWORD registration
// ============================================================

extern uint32_t pdwRegister; // 0xB0BCEC

// ============================================================
// SwizzleManager / PaletteManager
// ============================================================

extern uint32_t SwizzleManagerClass_Instance; // 0xB0C110

extern uint32_t g_PaletteManagerPool; // 0xB0FB98

// ============================================================
// ObjectTrackingPool
// ============================================================

extern int32_t g_ObjectTrackingPool; // 0xB0CB78

// ============================================================
// LightningStorm
// ============================================================

extern uint64_t LightningStorm_CloudHeightFactor; // 0xB0CDD8

// ============================================================
// Crater
// ============================================================

extern void* g_CraterPool; // 0xB0CE7C

extern uint32_t g_CraterCreationState; // 0xB0CE88

// ============================================================
// TagClass
// ============================================================

extern uint32_t TagClass_Array; // 0xB0E720

extern void* g_TagClassCount; // 0xB0E724

// ============================================================
// GameObject / Multiplayer Cleanup
// ============================================================

extern uint32_t g_GameObjectCleanup; // 0xB0E730

extern uint32_t g_MultiplayerCleanup; // 0xB0E790

// ============================================================
// Techno
// ============================================================

extern int32_t g_TechnoHouseState; // 0xB0EA50

extern uint32_t g_TechnoClassPool; // 0xB0EA90

// ============================================================
// Building
// ============================================================

extern class BuildingClass* BuildingClass_InstanceArray; // 0xB0F4EC

extern uint32_t g_CrateProcessState; // 0xB0F4F8

extern uint64_t g_BuildingClass_Capacity; // 0xB0F540

extern uint32_t g_BuildingInstanceCount; // 0xB0F5B8

extern void* g_BuildingClassPoolManager; // 0xB0F5BC

extern uint32_t g_BuildingTypeInstanceCount; // 0xB0F5C8

// ============================================================
// TActionClass
// ============================================================

extern uint32_t TActionClass_Array; // 0xB0F658

extern uint32_t g_TActionClassState; // 0xB0F668

// ============================================================
// AbstractClass
// ============================================================

extern uint32_t AbstractClass_Array; // 0xB0F720

// ============================================================
// DialogControl
// ============================================================

extern void* g_DialogControlPool; // 0xB0FB50

// ============================================================
// UnitTooltip
// ============================================================

extern uint32_t g_UnitTooltipState; // 0xB0FE6C

} // namespace game
} // namespace ra2
