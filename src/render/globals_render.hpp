#pragma once

#include <cstdint>

namespace gamemd
{

// =============================================================================
// Radar
// =============================================================================

// 0x88098c [confidence: inferred_strong]
extern uint32_t g_RadarBlipPool;

// 0x880990 [confidence: inferred_strong]
extern uint32_t g_RadarBlipManager;

// =============================================================================
// Building Placement
// =============================================================================

// 0x8809a0 [confidence: inferred_strong]
extern uint32_t g_BuildingPlacementState;

// =============================================================================
// Cameo
// =============================================================================

// 0x884b8f [confidence: inferred_strong]
extern uint8_t g_CameoRenderFlag;

// =============================================================================
// MixFile Pool & Array
// =============================================================================

// 0x884d90 [confidence: inferred_strong]
extern uint32_t g_MixFileArray;

// 0x884d94 [confidence: ida_direct]
extern void* g_MixFilePool;

// 0x884d98 [confidence: inferred_strong]
extern uint32_t g_MixFilePool_Capacity;

// 0x884d9d [confidence: inferred_strong]
extern uint8_t g_MixFilePool_Flag;

// 0x884da0 [confidence: inferred_strong]
extern uint32_t g_MixFilePool_Count;

// 0x884da4 [confidence: inferred_strong]
extern uint32_t g_MixFilePool_GrowSize;

// 0x884da8 [confidence: inferred_strong]
extern uint32_t g_MixFileArray_Maps;

// 0x884de0 [confidence: inferred_strong]
extern uint32_t g_MixFileArray_Movies;

// =============================================================================
// MixFile Instances (expansion-specific)
// =============================================================================

// 0x884dd8 [confidence: inferred_strong]
extern uint32_t g_MixFile_MULTIMD;

// 0x884ddc [confidence: inferred_strong]
extern uint32_t MixFileClass_MULTI;

// 0x884df8 [confidence: inferred_strong]
extern uint32_t g_MixFile_RA2MD;

// 0x884dfc [confidence: inferred_strong]
extern uint32_t g_MixFile_RA2;

// 0x884e14 [confidence: inferred_strong]
extern uint32_t g_MixFile_GENERIC;

// 0x884e18 [confidence: inferred_strong]
extern uint32_t g_MixFile_GENERMD;

// 0x884e24 [confidence: inferred_strong]
extern uint32_t g_MixFile_ISOGEN;

// 0x884e28 [confidence: inferred_strong]
extern uint32_t g_MixFile_ISOGENMD;

// 0x884e2c [confidence: inferred_strong]
extern uint32_t g_MixFile_MOVIES;

// 0x884e38 [confidence: inferred_strong]
extern uint32_t g_MixFile_CONQMD;

// 0x884e3c [confidence: inferred_strong]
extern uint32_t g_MixFile_CONQUER;

// 0x884e40 [confidence: inferred_strong]
extern uint32_t g_MixFile_CAMEOMD;

// 0x884e44 [confidence: inferred_strong]
extern uint32_t g_MixFile_CAMEO;

// 0x884e48 [confidence: inferred_strong]
extern uint32_t g_MixFile_CACHEMD;

// 0x884e4c [confidence: inferred_strong]
extern uint32_t g_MixFile_CACHE;

// 0x884e50 [confidence: inferred_strong]
extern uint32_t g_MixFile_LOCALMD;

// 0x884e54 [confidence: inferred_strong]
extern uint32_t g_MixFile_LOCAL;

// 0x884e60 [confidence: inferred_strong]
extern uint32_t g_MixFile_MAPSMDFirst;

// 0x884e64 [confidence: inferred_strong]
extern uint32_t g_MixFile_MAPSFirst;

// =============================================================================
// File System
// =============================================================================

// 0x885780 [confidence: inferred_strong]
extern uint8_t FileSystem_TEMPERAT_PAL;

// =============================================================================
// Randomizer
// =============================================================================

// 0x886b88 [confidence: ida_direct]
extern uint32_t Randomizer_Global[254];

// =============================================================================
// DSurface Bounds & Offsets
// =============================================================================

// 0x886f90 [confidence: inferred_strong]
extern uint32_t DSurface_SidebarBounds;

// 0x886f94 [confidence: inferred_strong]
extern uint32_t g_DSurface_SidebarBounds;

// 0x886f9c [confidence: inferred_strong]
extern uint32_t g_DSurface_ViewBounds;

// 0x886fa0 [confidence: inferred_strong]
extern uint32_t DSurface_ViewBounds;

// 0x886fa8 [confidence: inferred_strong]
extern uint32_t g_Map_VisibleRectOffset;

// 0x886fac [confidence: inferred_strong]
extern uint32_t g_DSurface_WindowOffset;

// 0x886fb0 [confidence: inferred_strong]
extern uint32_t DSurface_WindowBounds;

// 0x886fb8 [confidence: inferred_strong]
extern uint32_t g_CreditsScreenBounds;

// 0x886fbc [confidence: inferred_strong]
extern uint32_t g_CreditsScreenConfig;

// 0x8872fc [confidence: inferred_strong]
extern uint32_t DSurface_Tile;

// 0x887300 [confidence: ida_direct]
extern void* DSurface_Sidebar;

// 0x887310 [confidence: ida_direct]
extern int32_t DSurface_Alternate;

// 0x88731c [confidence: ida_direct]
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

// 0x8874c0 [confidence: ida_direct]
extern class WarheadTypeClass* WarheadTypeClass_Array;

// 0x8874d0 [confidence: inferred_strong]
extern uint32_t g_WarheadTypePool;

// 0x887568 [confidence: ida_direct]
extern class WeaponTypeClass* WeaponTypeClass_Array;

// 0x88756c [confidence: ida_direct]
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

// 0x889e68 [confidence: inferred_strong]
extern uint32_t g_AircraftStatusFlag;

// =============================================================================
// INI
// =============================================================================

// 0x8870c0 [confidence: inferred_strong]
extern uint32_t CCINIClass_INI_RA2MD;

// 0x887128 [confidence: inferred_strong]
extern uint32_t CCINIClass_INI_AI;

// 0x887208 [confidence: inferred_strong]
extern uint32_t CCINIClass_INI_UIMD;

// 0x889f64 [confidence: ida_direct]
extern uint8_t g_INI_DefaultBuffer[32];

// =============================================================================
// Alpha Shape
// =============================================================================

// 0x88a100 [confidence: inferred_strong]
extern uint32_t g_AlphaShapeLimit;

// =============================================================================
// DirectDraw
// =============================================================================

// 0x89f518 [confidence: inferred_strong]
extern uint32_t g_DDrawSurfaceManager;

// 0x89fc94 [confidence: inferred_strong]
extern uint8_t g_DDraw_PaletteEntries;

// 0x8a00b0 [confidence: ida_direct]
extern void (*g_DDraw_ErrorCallback)();

// 0x8a0790 [confidence: inferred_strong]
extern uint32_t g_DDraw_ClipRect;

// 0x8a0948 [confidence: inferred_strong]
extern uint8_t g_DDraw_PixelFormatDesc;

// 0x8a0dd4 [confidence: inferred_strong]
extern uint32_t g_BitShift_Green_0;

// 0x8a0def [confidence: inferred_strong]
extern uint8_t g_DDraw_Force3D;

} // namespace gamemd
