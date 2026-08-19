#pragma once

#include <cstdint>

namespace gamemd
{

// =============================================================================
// Radar
// =============================================================================

extern uint32_t g_RadarBlipPool; // data: 0x88098C

extern uint32_t g_RadarBlipManager; // data: 0x880990

// =============================================================================
// Building Placement
// =============================================================================

extern uint32_t g_BuildingPlacementState; // data: 0x8809A0

// =============================================================================
// Cameo
// =============================================================================

extern uint8_t g_CameoRenderFlag; // data: 0x884B8F

// =============================================================================
// MixFile Pool & Array
// =============================================================================

extern uint32_t g_MixFileArray; // data: 0x884D90

extern void* g_MixFilePool; // data: 0x884D94

extern uint32_t g_MixFilePool_Capacity; // data: 0x884D98

extern uint8_t g_MixFilePool_Flag; // data: 0x884D9D

extern uint32_t g_MixFilePool_Count; // data: 0x884DA0

extern uint32_t g_MixFilePool_GrowSize; // data: 0x884DA4

extern uint32_t g_MixFileArray_Maps; // data: 0x884DA8

extern uint32_t g_MixFileArray_Movies; // data: 0x884DE0

// =============================================================================
// MixFile Instances (expansion-specific)
// =============================================================================

extern uint32_t g_MixFile_MULTIMD; // data: 0x884DD8

extern uint32_t MixFileClass_MULTI; // data: 0x884DDC

extern uint32_t g_MixFile_RA2MD; // data: 0x884DF8

extern uint32_t g_MixFile_RA2; // data: 0x884DFC

extern uint32_t g_MixFile_GENERIC; // data: 0x884E14

extern uint32_t g_MixFile_GENERMD; // data: 0x884E18

extern uint32_t g_MixFile_ISOGEN; // data: 0x884E24

extern uint32_t g_MixFile_ISOGENMD; // data: 0x884E28

extern uint32_t g_MixFile_MOVIES; // data: 0x884E2C

extern uint32_t g_MixFile_CONQMD; // data: 0x884E38

extern uint32_t g_MixFile_CONQUER; // data: 0x884E3C

extern uint32_t g_MixFile_CAMEOMD; // data: 0x884E40

extern uint32_t g_MixFile_CAMEO; // data: 0x884E44

extern uint32_t g_MixFile_CACHEMD; // data: 0x884E48

extern uint32_t g_MixFile_CACHE; // data: 0x884E4C

extern uint32_t g_MixFile_LOCALMD; // data: 0x884E50

extern uint32_t g_MixFile_LOCAL; // data: 0x884E54

extern uint32_t g_MixFile_MAPSMDFirst; // data: 0x884E60

extern uint32_t g_MixFile_MAPSFirst; // data: 0x884E64

// =============================================================================
// File System
// =============================================================================

extern uint8_t FileSystem_TEMPERAT_PAL; // data: 0x885780

// =============================================================================
// Randomizer
// =============================================================================

extern uint32_t Randomizer_Global[254]; // data: 0x886B88

// =============================================================================
// DSurface Bounds & Offsets
// =============================================================================

extern uint32_t DSurface_SidebarBounds; // data: 0x886F90

extern uint32_t g_DSurface_SidebarBounds; // data: 0x886F94

extern uint32_t g_DSurface_ViewBounds; // data: 0x886F9C

extern uint32_t DSurface_ViewBounds; // data: 0x886FA0

extern uint32_t g_Map_VisibleRectOffset; // data: 0x886FA8

extern uint32_t g_DSurface_WindowOffset; // data: 0x886FAC

extern uint32_t DSurface_WindowBounds; // data: 0x886FB0

extern uint32_t g_CreditsScreenBounds; // data: 0x886FB8

extern uint32_t g_CreditsScreenConfig; // data: 0x886FBC

extern uint32_t DSurface_Tile; // data: 0x8872FC

extern void* DSurface_Sidebar; // data: 0x887300

extern int32_t DSurface_Alternate; // data: 0x887310

extern int32_t DSurface_Composite; // data: 0x88731C

// =============================================================================
// Performance
// =============================================================================

extern uint32_t g_LastPerformanceTick; // data: 0x887338

extern uint32_t g_PerformanceTickOffset; // data: 0x887340

// =============================================================================
// Tactical Render
// =============================================================================

extern uint32_t g_TacticalRender; // data: 0x887368

// =============================================================================
// Type Arrays & Pools
// =============================================================================

extern uint32_t VoxelAnimClass_Array; // data: 0x887388

extern class WarheadTypeClass* WarheadTypeClass_Array; // data: 0x8874C0

extern uint32_t g_WarheadTypePool; // data: 0x8874D0

extern class WeaponTypeClass* WeaponTypeClass_Array; // data: 0x887568

extern void* g_WeaponTypeConfig; // data: 0x88756C

extern uint32_t g_WeaponTypePool; // data: 0x887578

// =============================================================================
// Network
// =============================================================================

extern uint32_t g_NetworkInterface; // data: 0x887628

// =============================================================================
// Type System
// =============================================================================

extern uint16_t g_TypeClass_DefaultString; // data: 0x887734

// =============================================================================
// Cell Manager
// =============================================================================

extern uint32_t g_CellClassManager[2400]; // data: 0x887888

// =============================================================================
// Aircraft
// =============================================================================

extern uint32_t g_AircraftStatusFlag; // data: 0x889E68

// =============================================================================
// INI
// =============================================================================

extern uint32_t CCINIClass_INI_RA2MD; // data: 0x8870C0

extern uint32_t CCINIClass_INI_AI; // data: 0x887128

extern uint32_t CCINIClass_INI_UIMD; // data: 0x887208

extern uint8_t g_INI_DefaultBuffer[32]; // data: 0x889F64

// =============================================================================
// Alpha Shape
// =============================================================================

extern uint32_t g_AlphaShapeLimit; // data: 0x88A100

// =============================================================================
// DirectDraw
// =============================================================================

extern uint32_t g_DDrawSurfaceManager; // data: 0x89F518

extern uint8_t g_DDraw_PaletteEntries; // data: 0x89FC94

extern void (*g_DDraw_ErrorCallback)(); // data: 0x8A00B0

extern uint32_t g_DDraw_ClipRect; // data: 0x8A0790

extern uint8_t g_DDraw_PixelFormatDesc; // data: 0x8A0948

extern uint32_t g_BitShift_Green_0; // data: 0x8A0DD4

extern uint8_t g_DDraw_Force3D; // data: 0x8A0DEF

// =============================================================================
// High-XRef Globals (xref≥5, ≥2 callers, from xref_analysis_batch)
// =============================================================================

extern void* g_RulesClass_Instance; // data: 0x8871E0

extern uint32_t g_TacticalClass_Instance; // data: 0x887324

extern bool g_Map_VisibleRect; // data: 0x886FA4

extern void* g_DSurface_Hidden_2; // data: 0x887314

extern void* g_WWMouseClass_Instance; // data: 0x887640

extern void* g_DSurface_Hidden; // data: 0x88730C

extern void* g_DSurface_Primary; // data: 0x887308

extern uint32_t g_ZBufferDescriptor; // data: 0x887644

extern uint32_t g_BitMask_Green; // data: 0x8A0DE0

extern uint32_t g_BitShift_Blue; // data: 0x8A0DD8

extern uint32_t g_BitMask_Blue; // data: 0x8A0DE4

extern uint32_t g_BitMask_Red; // data: 0x8A0DDC

extern uint32_t g_BitShift_Red; // data: 0x8A0DD0

extern uint32_t g_DisplayWidth; // data: 0x8A00A4

extern void* g_lpDirectDraw7; // data: 0x8A0094

extern uint32_t g_LoadScreenFlag; // data: 0x8A00A0

} // namespace gamemd
