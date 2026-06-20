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

extern uint32_t RadBeam_Array; // data: 0xB04A60

extern uint32_t RadSiteClass_Array; // data: 0xB04BD0

// ============================================================
// Trigger / Event
// ============================================================

extern void* g_TriggerPool; // data: 0xB04DAC

extern uint32_t g_TriggerEventState; // data: 0xB04DB8

extern uint32_t g_NetworkEventQueue; // data: 0xB052D0

// ============================================================
// ColorScheme / BuildingTypeAnim
// ============================================================

extern uint32_t ColorScheme_Array; // data: 0xB054D0

extern void* BuildingTypeClass_AnimTable; // data: 0xB054D4

// ============================================================
// Animation
// ============================================================

extern uint32_t g_AnimClass_SaveState; // data: 0xB054E0

extern uint32_t g_AnimationManager; // data: 0xB0BC88

extern uint32_t g_AnimClass_Capacity; // data: 0xB0BC90

extern void* g_AnimPoolCount; // data: 0xB0F674

extern uint64_t g_AnimFrameCounter; // data: 0xB0F688

// ============================================================
// OverlayType
// ============================================================

extern uint32_t g_OverlayTypeConfig; // data: 0xB077F8

// ============================================================
// Sidebar / Tooltip / Gadget
// ============================================================

extern uint16_t SidebarClass_TooltipBuffer; // data: 0xB07BC4

extern uint8_t g_SidebarFlag[12]; // data: 0xB0B408

extern uint32_t g_SidebarBounds; // data: 0xB0B4F8

extern uint8_t g_TooltipActive; // data: 0xB0B518

extern uint32_t g_SidebarButtonState; // data: 0xB0BD50

extern void* g_SidebarPool; // data: 0xB0BD58

extern void* g_GadgetAnimState; // data: 0xB0FC1C

// ============================================================
// SlaveManager / SpawnManager
// ============================================================

extern uint32_t SlaveManagerClass_Array; // data: 0xB0B5F0

extern uint32_t g_SlaveMgrPool; // data: 0xB0B660

extern void* g_SlaveManagerPool; // data: 0xB0B6EC

extern uint32_t SpawnManagerClass_Array; // data: 0xB0B880

// ============================================================
// Map
// ============================================================

extern uint32_t Map_BottomRightCell; // data: 0xB0B788

// ============================================================
// DWORD registration
// ============================================================

extern uint32_t pdwRegister; // data: 0xB0BCEC

// ============================================================
// SwizzleManager / PaletteManager
// ============================================================

extern uint32_t SwizzleManagerClass_Instance; // data: 0xB0C110

extern uint32_t g_PaletteManagerPool; // data: 0xB0FB98

// ============================================================
// ObjectTrackingPool
// ============================================================

extern int32_t g_ObjectTrackingPool; // data: 0xB0CB78

// ============================================================
// LightningStorm
// ============================================================

extern uint64_t LightningStorm_CloudHeightFactor; // data: 0xB0CDD8

// ============================================================
// Crater
// ============================================================

extern void* g_CraterPool; // data: 0xB0CE7C

extern uint32_t g_CraterCreationState; // data: 0xB0CE88

// ============================================================
// TagClass
// ============================================================

extern uint32_t TagClass_Array; // data: 0xB0E720

extern void* g_TagClassCount; // data: 0xB0E724

// ============================================================
// GameObject / Multiplayer Cleanup
// ============================================================

extern uint32_t g_GameObjectCleanup; // data: 0xB0E730

extern uint32_t g_MultiplayerCleanup; // data: 0xB0E790

// ============================================================
// Techno
// ============================================================

extern int32_t g_TechnoHouseState; // data: 0xB0EA50

extern uint32_t g_TechnoClassPool; // data: 0xB0EA90

// ============================================================
// Building
// ============================================================

extern class BuildingClass* BuildingClass_InstanceArray; // data: 0xB0F4EC

extern uint32_t g_CrateProcessState; // data: 0xB0F4F8

extern uint64_t g_BuildingClass_Capacity; // data: 0xB0F540

extern uint32_t g_BuildingInstanceCount; // data: 0xB0F5B8

extern void* g_BuildingClassPoolManager; // data: 0xB0F5BC

extern uint32_t g_BuildingTypeInstanceCount; // data: 0xB0F5C8

// ============================================================
// TActionClass
// ============================================================

extern uint32_t TActionClass_Array; // data: 0xB0F658

extern uint32_t g_TActionClassState; // data: 0xB0F668

// ============================================================
// AbstractClass
// ============================================================

extern uint32_t AbstractClass_Array; // data: 0xB0F720

// ============================================================
// DialogControl
// ============================================================

extern void* g_DialogControlPool; // data: 0xB0FB50

// ============================================================
// UnitTooltip
// ============================================================

extern uint32_t g_UnitTooltipState; // data: 0xB0FE6C

} // namespace game
} // namespace ra2
