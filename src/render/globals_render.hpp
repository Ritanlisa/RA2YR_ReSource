#pragma once

#include <cstdint>

namespace gamemd
{

// =============================================================================
// Radar
// =============================================================================

extern uint32_t g_RadarBlipPool; // 0x88098C

extern uint32_t g_RadarBlipManager; // 0x880990

// =============================================================================
// Building Placement
// =============================================================================

extern uint32_t g_BuildingPlacementState; // 0x8809A0

// =============================================================================
// Cameo
// =============================================================================

extern uint8_t g_CameoRenderFlag; // 0x884B8F

// =============================================================================
// MixFile Pool & Array
// =============================================================================

extern uint32_t g_MixFileArray; // 0x884D90

extern void* g_MixFilePool; // 0x884D94

extern uint32_t g_MixFilePool_Capacity; // 0x884D98

extern uint8_t g_MixFilePool_Flag; // 0x884D9D

extern uint32_t g_MixFilePool_Count; // 0x884DA0

extern uint32_t g_MixFilePool_GrowSize; // 0x884DA4

extern uint32_t g_MixFileArray_Maps; // 0x884DA8

extern uint32_t g_MixFileArray_Movies; // 0x884DE0

// =============================================================================
// MixFile Instances (expansion-specific)
// =============================================================================

extern uint32_t g_MixFile_MULTIMD; // 0x884DD8

extern uint32_t MixFileClass_MULTI; // 0x884DDC

extern uint32_t g_MixFile_RA2MD; // 0x884DF8

extern uint32_t g_MixFile_RA2; // 0x884DFC

extern uint32_t g_MixFile_GENERIC; // 0x884E14

extern uint32_t g_MixFile_GENERMD; // 0x884E18

extern uint32_t g_MixFile_ISOGEN; // 0x884E24

extern uint32_t g_MixFile_ISOGENMD; // 0x884E28

extern uint32_t g_MixFile_MOVIES; // 0x884E2C

extern uint32_t g_MixFile_CONQMD; // 0x884E38

extern uint32_t g_MixFile_CONQUER; // 0x884E3C

extern uint32_t g_MixFile_CAMEOMD; // 0x884E40

extern uint32_t g_MixFile_CAMEO; // 0x884E44

extern uint32_t g_MixFile_CACHEMD; // 0x884E48

extern uint32_t g_MixFile_CACHE; // 0x884E4C

extern uint32_t g_MixFile_LOCALMD; // 0x884E50

extern uint32_t g_MixFile_LOCAL; // 0x884E54

extern uint32_t g_MixFile_MAPSMDFirst; // 0x884E60

extern uint32_t g_MixFile_MAPSFirst; // 0x884E64

// =============================================================================
// File System
// =============================================================================

extern uint8_t FileSystem_TEMPERAT_PAL; // 0x885780

// =============================================================================
// Randomizer
// =============================================================================

extern uint32_t Randomizer_Global[254]; // 0x886B88

// =============================================================================
// DSurface Bounds & Offsets
// =============================================================================

extern uint32_t DSurface_SidebarBounds; // 0x886F90

extern uint32_t g_DSurface_SidebarBounds; // 0x886F94

extern uint32_t g_DSurface_ViewBounds; // 0x886F9C

extern uint32_t DSurface_ViewBounds; // 0x886FA0

extern uint32_t g_Map_VisibleRectOffset; // 0x886FA8

extern uint32_t g_DSurface_WindowOffset; // 0x886FAC

extern uint32_t DSurface_WindowBounds; // 0x886FB0

extern uint32_t g_CreditsScreenBounds; // 0x886FB8

extern uint32_t g_CreditsScreenConfig; // 0x886FBC

extern uint32_t DSurface_Tile; // 0x8872FC

extern void* DSurface_Sidebar; // 0x887300

extern int32_t DSurface_Alternate; // 0x887310

extern int32_t DSurface_Composite; // 0x88731C

// =============================================================================
// Performance
// =============================================================================

extern uint32_t g_LastPerformanceTick; // 0x887338

extern uint32_t g_PerformanceTickOffset; // 0x887340

// =============================================================================
// Tactical Render
// =============================================================================

extern uint32_t g_TacticalRender; // 0x887368

// =============================================================================
// Type Arrays & Pools
// =============================================================================

extern uint32_t VoxelAnimClass_Array; // 0x887388

extern class WarheadTypeClass* WarheadTypeClass_Array; // 0x8874C0

extern uint32_t g_WarheadTypePool; // 0x8874D0

extern class WeaponTypeClass* WeaponTypeClass_Array; // 0x887568

extern void* g_WeaponTypeConfig; // 0x88756C

extern uint32_t g_WeaponTypePool; // 0x887578

// =============================================================================
// Network
// =============================================================================

extern uint32_t g_NetworkInterface; // 0x887628

// =============================================================================
// Type System
// =============================================================================

extern uint16_t g_TypeClass_DefaultString; // 0x887734

// =============================================================================
// Cell Manager
// =============================================================================

extern uint32_t g_CellClassManager[2400]; // 0x887888

// =============================================================================
// Aircraft
// =============================================================================

extern uint32_t g_AircraftStatusFlag; // 0x889E68

// =============================================================================
// INI
// =============================================================================

extern uint32_t CCINIClass_INI_RA2MD; // 0x8870C0

extern uint32_t CCINIClass_INI_AI; // 0x887128

extern uint32_t CCINIClass_INI_UIMD; // 0x887208

extern uint8_t g_INI_DefaultBuffer[32]; // 0x889F64

// =============================================================================
// Alpha Shape
// =============================================================================

extern uint32_t g_AlphaShapeLimit; // 0x88A100

// =============================================================================
// DirectDraw
// =============================================================================

extern uint32_t g_DDrawSurfaceManager; // 0x89F518

extern uint8_t g_DDraw_PaletteEntries; // 0x89FC94

extern void (*g_DDraw_ErrorCallback)(); // 0x8A00B0

extern uint32_t g_DDraw_ClipRect; // 0x8A0790

extern uint8_t g_DDraw_PixelFormatDesc; // 0x8A0948

extern uint32_t g_BitShift_Green_0; // 0x8A0DD4

extern uint8_t g_DDraw_Force3D; // 0x8A0DEF

// =============================================================================
// High-XRef Globals (xref≥5, ≥2 callers, from xref_analysis_batch)
// =============================================================================

extern void* g_RulesClass_Instance; // 0x8871E0

extern uint32_t g_TacticalClass_Instance; // 0x887324

extern bool g_Map_VisibleRect; // 0x886FA4

extern void* g_DSurface_Hidden_2; // 0x887314

extern void* g_WWMouseClass_Instance; // 0x887640

extern void* g_DSurface_Hidden; // 0x88730C

extern void* g_DSurface_Primary; // 0x887308

extern uint32_t g_ZBufferDescriptor; // 0x887644

extern uint32_t g_BitMask_Green; // 0x8A0DE0

extern uint32_t g_BitShift_Blue; // 0x8A0DD8

extern uint32_t g_BitMask_Blue; // 0x8A0DE4

extern uint32_t g_BitMask_Red; // 0x8A0DDC

extern uint32_t g_BitShift_Red; // 0x8A0DD0

extern uint32_t g_DisplayWidth; // 0x8A00A4

extern void* g_lpDirectDraw7; // 0x8A0094

extern uint32_t g_LoadScreenFlag; // 0x8A00A0

} // namespace gamemd
