#pragma once

#include <cstdint>
#include <cstddef>
#include <cstdio>
#include <windows.h>

namespace gamemd {

//===========================================================================
// System: Screen render globals
//===========================================================================

extern const uint32_t g_ScreenRenderLUT1; // 0x879B30
extern uint16_t g_ScreenRenderLUT2; // 0x87B170
extern char g_ScreenRenderMask[256]; // 0x87BC90
extern uint8_t g_ScreenRenderFlag; // 0x87BD90

//===========================================================================
// System: CRT / I/O / TLS globals
//===========================================================================

extern FILE File; // 0x87BF70
extern LPCRITICAL_SECTION lpCriticalSection; // 0x87C2EC
extern char Str1[2]; // 0x87C3F8
extern char* Block; // 0x87C484
extern const uint32_t funcs_7CDE2B; // 0x87C488
extern uint16_t __ctype[]; // 0x87C598
extern size_t SrcSizeInBytes; // 0x87C79C
extern char SrcCh; // 0x87C7A0
extern DWORD dwTlsIndex; // 0x87C7A8
extern LPSTR lpMultiByteStr; // 0x87CAEC
extern size_t Size; // 0x87CBA0
extern HANDLE hConsoleInput; // 0x87DD80
extern HANDLE hConsoleOutput; // 0x87DD84

//===========================================================================
// Audio: stream / config / file data
//===========================================================================

extern void* g_AudioStreamObject; // 0x87E180
extern uint32_t g_AudioConfigState; // 0x87E2A0
extern uint32_t g_AudioInitialized; // 0x87E72C
extern void* g_AudioFileData; // 0x87E724

extern uint32_t g_MixFile_AUDIO; // 0x87E734
extern uint32_t g_MixFile_THEME; // 0x87E738

extern uint32_t g_MixerChannel_SFX; // 0x87E73C
extern uint32_t g_MixerChannel_Voice; // 0x87E740
extern uint32_t g_MixerChannel_Theme; // 0x87E744
extern uint32_t g_MixerChannel_Score; // 0x87E748
extern uint32_t g_MixerChannel_Misc; // 0x87E74C
extern uint32_t g_MixerChannel_Ambient; // 0x87E750
extern uint32_t g_MixerChannel_Stream; // 0x87E754

extern uint32_t g_MixerState; // 0x87E758

//===========================================================================
// Audio: mixer buffers (int[32] each, 128 bytes)
//===========================================================================

extern int g_MixerBuffer1[32]; // 0x87E2C0
extern int g_MixerBuffer2[32]; // 0x87E4E0
extern int g_MixerBuffer3[32]; // 0x87E578
extern int g_MixerBuffer4[32]; // 0x87E450
extern int g_MixerBuffer5[32]; // 0x87E340
extern int g_MixerBuffer6[32]; // 0x87E6A0
extern int g_MixerBuffer7[32]; // 0x87E5F8
extern int g_MixerBuffer8[32]; // 0x87E3C0

//===========================================================================
// Audio: thread sync / init flag
//===========================================================================

extern HANDLE hObject; // 0x87E7F0
extern DWORD ThreadId; // 0x87E7F4
extern CRITICAL_SECTION CriticalSection; // 0x87E7F8
extern char g_AudioInitFlag[3200]; // 0x87E8B8

//===========================================================================
// Misc: CommandClass globals
//===========================================================================

extern uint32_t g_CommandClassVector; // 0x87F658
extern void* g_CommandClass_Capacity; // 0x87F65C
extern uint32_t g_CommandClass_Size; // 0x87F660
extern uint8_t g_CommandClass_HasInit; // 0x87F665
extern uint32_t g_CommandClassVector_State; // 0x87F668
extern uint32_t g_CommandClass_Extra; // 0x87F66C

//===========================================================================
// Misc: FileSystem / vector helpers
//===========================================================================

extern void* Base; // 0x87F680
extern size_t NumOfElements; // 0x87F684
extern uint8_t g_FileSystemInitFlag; // 0x87F68C
extern uint32_t g_FileSystemPool; // 0x87F690
extern uint32_t g_SurfaceAnimState; // 0x87F6A8
extern uint32_t FileSystem_GRFTXT_TIBERIUM_PAL; // 0x87F6BC

//===========================================================================
// Misc: Sidebar / GameConfig / Aircraft tracker
//===========================================================================

extern uint32_t g_SidebarConfig; // 0x87F6CC
extern uint32_t g_GameConfigManager; // 0x87F778
extern const uint32_t g_AircraftTrackerPool; // 0x87F914
extern const uint32_t g_AircraftTrackerState; // 0x87F918

//===========================================================================
// Misc: Audio DSP state
//===========================================================================

extern uint32_t g_AudioDSPState; // 0xB78198

//===========================================================================
// Network: session / lobby / options
//===========================================================================

extern uint32_t g_NetworkOptionsState; // 0xAC025C
extern uint32_t g_NetworkSetupConfig; // 0xAC0260
extern uint32_t g_NetworkSettingsState; // 0xAC0264
extern uint8_t g_NetworkTestFlag; // 0xAC1344
extern uint8_t g_NetworkLobby_Init; // 0xB77DC1
extern uint32_t g_NetworkLobbyState; // 0xB77E28

//===========================================================================
// High-XRef Globals (xref≥5, ≥2 callers, from xref_analysis_batch)
//===========================================================================

extern uint32_t g_BuildingLoadQueue_Count; // 0xB0E844

extern void* g_FileSystem_THEATER_PAL; // 0x87F6C4

extern void* g_BuildingLoadQueue_Array; // 0xB0E840

extern uint32_t g_BuildingLoadQueue_Dirty; // 0xB0E84C

extern uint32_t g_BuildingLoadQueue_Active; // 0xB0E850

extern uint32_t g_BuildingLoadQueue_Capacity; // 0xB0E848

extern uint32_t g_Shroud_CellArray; // 0x87F924

extern uint32_t g_VisibleSurfaceDescriptor; // 0x87E8A4

extern void* g_hWnd; // 0xB73550

extern uint32_t g_BinkMoviePlayer; // 0x87F770

extern uint32_t g_AnimManager; // 0xB0F680

extern uint32_t g_AnimPoolManager; // 0xB0F670

extern uint32_t g_Cell_PositionLUT; // 0x87F8DC

extern uint32_t g_AlphaShapePool; // 0xB0F730

extern void* g_hInstance; // 0xB732F0

extern uint32_t g_CellPositionOffset; // 0x87F8E0

extern uint8_t g_AnimPoolLocked; // 0xB0F67D

extern uint32_t g_AnimTypePool; // 0xB0F678

extern uint32_t g_AnimManagerConfig; // 0xB0F684

} // namespace gamemd
