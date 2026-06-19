#pragma once

#include <cstdint>

namespace gamemd
{

// =============================================================================
// Radar
// =============================================================================

// 0x88098C [confidence: inferred_strong]
extern uint32_t g_RadarBlipPool;

// 0x880990 [confidence: inferred_strong]
extern uint32_t g_RadarBlipManager;

// =============================================================================
// Building Placement
// =============================================================================

// 0x8809A0 [confidence: inferred_strong]
extern uint32_t g_BuildingPlacementState;

// =============================================================================
// Cameo
// =============================================================================

// 0x884B8F [confidence: inferred_strong]
extern uint8_t g_CameoRenderFlag;

// =============================================================================
// MixFile Pool & Array
// =============================================================================

// 0x884D90 [confidence: inferred_strong]
extern uint32_t g_MixFileArray;

// 0x884D94 [confidence: ida_direct]
extern void* g_MixFilePool;

// 0x884D98 [confidence: inferred_strong]
extern uint32_t g_MixFilePool_Capacity;

// 0x884D9D [confidence: inferred_strong]
extern uint8_t g_MixFilePool_Flag;

// 0x884DA0 [confidence: inferred_strong]
extern uint32_t g_MixFilePool_Count;

// 0x884DA4 [confidence: inferred_strong]
extern uint32_t g_MixFilePool_GrowSize;

// 0x884DA8 [confidence: inferred_strong]
extern uint32_t g_MixFileArray_Maps;

// 0x884DE0 [confidence: inferred_strong]
extern uint32_t g_MixFileArray_Movies;

// =============================================================================
// MixFile Instances (expansion-specific)
// =============================================================================

// 0x884DD8 [confidence: inferred_strong]
extern uint32_t g_MixFile_MULTIMD;

// 0x884DDC [confidence: inferred_strong]
extern uint32_t MixFileClass_MULTI;

// 0x884DF8 [confidence: inferred_strong]
extern uint32_t g_MixFile_RA2MD;

// 0x884DFC [confidence: inferred_strong]
extern uint32_t g_MixFile_RA2;

// 0x884E14 [confidence: inferred_strong]
extern uint32_t g_MixFile_GENERIC;

// 0x884E18 [confidence: inferred_strong]
extern uint32_t g_MixFile_GENERMD;

// 0x884E24 [confidence: inferred_strong]
extern uint32_t g_MixFile_ISOGEN;

// 0x884E28 [confidence: inferred_strong]
extern uint32_t g_MixFile_ISOGENMD;

// 0x884E2C [confidence: inferred_strong]
extern uint32_t g_MixFile_MOVIES;

// 0x884E38 [confidence: inferred_strong]
extern uint32_t g_MixFile_CONQMD;

// 0x884E3C [confidence: inferred_strong]
extern uint32_t g_MixFile_CONQUER;

// 0x884E40 [confidence: inferred_strong]
extern uint32_t g_MixFile_CAMEOMD;

// 0x884E44 [confidence: inferred_strong]
extern uint32_t g_MixFile_CAMEO;

// 0x884E48 [confidence: inferred_strong]
extern uint32_t g_MixFile_CACHEMD;

// 0x884E4C [confidence: inferred_strong]
extern uint32_t g_MixFile_CACHE;

// 0x884E50 [confidence: inferred_strong]
extern uint32_t g_MixFile_LOCALMD;

// 0x884E54 [confidence: inferred_strong]
extern uint32_t g_MixFile_LOCAL;

// 0x884E60 [confidence: inferred_strong]
extern uint32_t g_MixFile_MAPSMDFirst;

// 0x884E64 [confidence: inferred_strong]
extern uint32_t g_MixFile_MAPSFirst;

// =============================================================================
// File System
// =============================================================================

// 0x885780 [confidence: inferred_strong]
extern uint8_t FileSystem_TEMPERAT_PAL;

// =============================================================================
// Randomizer
// =============================================================================

// 0x886B88 [confidence: ida_direct]
extern uint32_t Randomizer_Global[254];

// =============================================================================
// DSurface Bounds & Offsets
// =============================================================================

// 0x886F90 [confidence: inferred_strong]
extern uint32_t DSurface_SidebarBounds;

// 0x886F94 [confidence: inferred_strong]
extern uint32_t g_DSurface_SidebarBounds;

// 0x886F9C [confidence: inferred_strong]
extern uint32_t g_DSurface_ViewBounds;

// 0x886FA0 [confidence: inferred_strong]
extern uint32_t DSurface_ViewBounds;

// 0x886FA8 [confidence: inferred_strong]
extern uint32_t g_Map_VisibleRectOffset;

// 0x886FAC [confidence: inferred_strong]
extern uint32_t g_DSurface_WindowOffset;

// 0x886FB0 [confidence: inferred_strong]
extern uint32_t DSurface_WindowBounds;

// 0x886FB8 [confidence: inferred_strong]
extern uint32_t g_CreditsScreenBounds;

// 0x886FBC [confidence: inferred_strong]
extern uint32_t g_CreditsScreenConfig;

// 0x8872FC [confidence: inferred_strong]
extern uint32_t DSurface_Tile;

// 0x887300 [confidence: ida_direct]
extern void* DSurface_Sidebar;

// 0x887310 [confidence: ida_direct]
extern int32_t DSurface_Alternate;

// 0x88731C [confidence: ida_direct]
extern int32_t DSurface_Composite;

// =============================================================================
// Performance
// =============================================================================

// 0x887338 [confidence: inferred_strong]
extern uint32_t g_LastPerformanceTick;

// 0x887340 [confidence: inferred_strong]
extern uint32_t g_PerformanceTickOffset;

// =============================================================================
// Tactical Render
// =============================================================================

// 0x887368 [confidence: inferred_strong]
extern uint32_t g_TacticalRender;

// =============================================================================
// Type Arrays & Pools
// =============================================================================

// 0x887388 [confidence: inferred_strong]
extern uint32_t VoxelAnimClass_Array;

// 0x8874C0 [confidence: ida_direct]
extern class WarheadTypeClass* WarheadTypeClass_Array;

// 0x8874D0 [confidence: inferred_strong]
extern uint32_t g_WarheadTypePool;

// 0x887568 [confidence: ida_direct]
extern class WeaponTypeClass* WeaponTypeClass_Array;

// 0x88756C [confidence: ida_direct]
extern void* g_WeaponTypeConfig;

// 0x887578 [confidence: inferred_strong]
extern uint32_t g_WeaponTypePool;

// =============================================================================
// Network
// =============================================================================

// 0x887628 [confidence: inferred_strong]
extern uint32_t g_NetworkInterface;

// =============================================================================
// Type System
// =============================================================================

// 0x887734 [confidence: ida_direct]
extern uint16_t g_TypeClass_DefaultString;

// =============================================================================
// Cell Manager
// =============================================================================

// 0x887888 [confidence: ida_direct]
extern uint32_t g_CellClassManager[2400];

// =============================================================================
// Aircraft
// =============================================================================

// 0x889E68 [confidence: inferred_strong]
extern uint32_t g_AircraftStatusFlag;

// =============================================================================
// INI
// =============================================================================

// 0x8870C0 [confidence: inferred_strong]
extern uint32_t CCINIClass_INI_RA2MD;

// 0x887128 [confidence: inferred_strong]
extern uint32_t CCINIClass_INI_AI;

// 0x887208 [confidence: inferred_strong]
extern uint32_t CCINIClass_INI_UIMD;

// 0x889F64 [confidence: ida_direct]
extern uint8_t g_INI_DefaultBuffer[32];

// =============================================================================
// Alpha Shape
// =============================================================================

// 0x88A100 [confidence: inferred_strong]
extern uint32_t g_AlphaShapeLimit;

// =============================================================================
// DirectDraw
// =============================================================================

// 0x89F518 [confidence: inferred_strong]
extern uint32_t g_DDrawSurfaceManager;

// 0x89FC94 [confidence: inferred_strong]
extern uint8_t g_DDraw_PaletteEntries;

// 0x8A00B0 [confidence: ida_direct]
extern void (*g_DDraw_ErrorCallback)();

// 0x8A0790 [confidence: inferred_strong]
extern uint32_t g_DDraw_ClipRect;

// 0x8A0948 [confidence: inferred_strong]
extern uint8_t g_DDraw_PixelFormatDesc;

// 0x8A0DD4 [confidence: inferred_strong]
extern uint32_t g_BitShift_Green_0;

// 0x8A0DEF [confidence: inferred_strong]
extern uint8_t g_DDraw_Force3D;

// =============================================================================
// High-XRef Globals (xref≥5, ≥2 callers, from xref_analysis_batch)
// =============================================================================

// 0x8871E0 [confidence: inferred_strong] (was: RulesClass_Instance)
extern void* g_RulesClass_Instance;

// 0x887324 [confidence: inferred_strong] (was: TacticalClass_Instance)
extern uint32_t g_TacticalClass_Instance;

// 0x886FA4 [confidence: inferred_strong] (was: Map_VisibleRect)
extern bool g_Map_VisibleRect;

// 0x887314 [confidence: inferred_strong] (was: DSurface_Hidden_2)
extern void* g_DSurface_Hidden_2;

// 0x887640 [confidence: inferred_strong] (was: WWMouseClass_Instance)
extern void* g_WWMouseClass_Instance;

// 0x88730C [confidence: inferred_strong] (was: DSurface_Hidden)
extern void* g_DSurface_Hidden;

// 0x887308 [confidence: inferred_strong] (was: DSurface_Primary)
extern void* g_DSurface_Primary;

// 0x887644 [confidence: inferred_strong] Z-buffer descriptor
extern uint32_t g_ZBufferDescriptor;

// 0x8A0DE0 [confidence: inferred_strong] green bitmask for pixel format
extern uint32_t g_BitMask_Green;

// 0x8A0DD8 [confidence: inferred_strong] blue bit shift
extern uint32_t g_BitShift_Blue;

// 0x8A0DE4 [confidence: inferred_strong] blue bitmask
extern uint32_t g_BitMask_Blue;

// 0x8A0DDC [confidence: inferred_strong] red bitmask
extern uint32_t g_BitMask_Red;

// 0x8A0DD0 [confidence: inferred_strong] red bit shift
extern uint32_t g_BitShift_Red;

// 0x8A00A4 [confidence: inferred_strong] display width in pixels
extern uint32_t g_DisplayWidth;

// 0x8A0094 [confidence: inferred_strong] DirectDraw7 interface pointer
extern void* g_lpDirectDraw7;

// 0x8A00A0 [confidence: inferred_strong] load screen flag
extern uint32_t g_LoadScreenFlag;

} // namespace gamemd
