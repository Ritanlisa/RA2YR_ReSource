#pragma once

#include <cstdint>
#include <cstddef>
#include <cstdio>
#include <windows.h>

namespace gamemd {

//===========================================================================
// System: Screen render globals
//===========================================================================

extern const uint32_t g_ScreenRenderLUT1; // data: 0x879B30
extern uint16_t g_ScreenRenderLUT2; // data: 0x87B170
extern char g_ScreenRenderMask[256]; // data: 0x87BC90
extern uint8_t g_ScreenRenderFlag; // data: 0x87BD90

//===========================================================================
// System: CRT / I/O / TLS globals
//===========================================================================

extern FILE File; // data: 0x87BF70
extern LPCRITICAL_SECTION lpCriticalSection; // data: 0x87C2EC
extern char Str1[2]; // data: 0x87C3F8
extern char* Block; // data: 0x87C484
extern const uint32_t funcs_7CDE2B; // data: 0x87C488
extern uint16_t __ctype[]; // data: 0x87C598
extern size_t SrcSizeInBytes; // data: 0x87C79C
extern char SrcCh; // data: 0x87C7A0
extern DWORD dwTlsIndex; // data: 0x87C7A8
extern LPSTR lpMultiByteStr; // data: 0x87CAEC
extern size_t Size; // data: 0x87CBA0
extern HANDLE hConsoleInput; // data: 0x87DD80
extern HANDLE hConsoleOutput; // data: 0x87DD84

//===========================================================================
// Audio: stream / config / file data
//===========================================================================

extern void* g_AudioStreamObject; // data: 0x87E180
extern uint32_t g_AudioConfigState; // data: 0x87E2A0
extern uint32_t g_AudioInitialized; // data: 0x87E72C
extern void* g_AudioFileData; // data: 0x87E724

extern uint32_t g_MixFile_AUDIO; // data: 0x87E734
extern uint32_t g_MixFile_THEME; // data: 0x87E738

extern uint32_t g_MixerChannel_SFX; // data: 0x87E73C
extern uint32_t g_MixerChannel_Voice; // data: 0x87E740
extern uint32_t g_MixerChannel_Theme; // data: 0x87E744
extern uint32_t g_MixerChannel_Score; // data: 0x87E748
extern uint32_t g_MixerChannel_Misc; // data: 0x87E74C
extern uint32_t g_MixerChannel_Ambient; // data: 0x87E750
extern uint32_t g_MixerChannel_Stream; // data: 0x87E754

extern uint32_t g_MixerState; // data: 0x87E758

//===========================================================================
// Audio: mixer buffers (int[32] each, 128 bytes)
//===========================================================================

extern int g_MixerBuffer1[32]; // data: 0x87E2C0
extern int g_MixerBuffer2[32]; // data: 0x87E4E0
extern int g_MixerBuffer3[32]; // data: 0x87E578
extern int g_MixerBuffer4[32]; // data: 0x87E450
extern int g_MixerBuffer5[32]; // data: 0x87E340
extern int g_MixerBuffer6[32]; // data: 0x87E6A0
extern int g_MixerBuffer7[32]; // data: 0x87E5F8
extern int g_MixerBuffer8[32]; // data: 0x87E3C0

//===========================================================================
// Audio: thread sync / init flag
//===========================================================================

extern HANDLE hObject; // data: 0x87E7F0
extern DWORD ThreadId; // data: 0x87E7F4
extern CRITICAL_SECTION CriticalSection; // data: 0x87E7F8
extern char g_AudioInitFlag[3200]; // data: 0x87E8B8

//===========================================================================
// Misc: CommandClass globals
//===========================================================================

extern uint32_t g_CommandClassVector; // data: 0x87F658
extern void* g_CommandClass_Capacity; // data: 0x87F65C
extern uint32_t g_CommandClass_Size; // data: 0x87F660
extern uint8_t g_CommandClass_HasInit; // data: 0x87F665
extern uint32_t g_CommandClassVector_State; // data: 0x87F668
extern uint32_t g_CommandClass_Extra; // data: 0x87F66C

//===========================================================================
// Misc: FileSystem / vector helpers
//===========================================================================

extern void* Base; // data: 0x87F680
extern size_t NumOfElements; // data: 0x87F684
extern uint8_t g_FileSystemInitFlag; // data: 0x87F68C
extern uint32_t g_FileSystemPool; // data: 0x87F690
extern uint32_t g_SurfaceAnimState; // data: 0x87F6A8
extern uint32_t FileSystem_GRFTXT_TIBERIUM_PAL; // data: 0x87F6BC

//===========================================================================
// Misc: Sidebar / GameConfig / Aircraft tracker
//===========================================================================

extern uint32_t g_SidebarConfig; // data: 0x87F6CC
extern uint32_t g_GameConfigManager; // data: 0x87F778
extern const uint32_t g_AircraftTrackerPool; // data: 0x87F914
extern const uint32_t g_AircraftTrackerState; // data: 0x87F918

//===========================================================================
// Misc: Audio DSP state
//===========================================================================

extern uint32_t g_AudioDSPState; // data: 0xB78198

//===========================================================================
// Network: session / lobby / options
//===========================================================================

extern uint32_t g_NetworkOptionsState; // data: 0xAC025C
extern uint32_t g_NetworkSetupConfig; // data: 0xAC0260
extern uint32_t g_NetworkSettingsState; // data: 0xAC0264
extern uint8_t g_NetworkTestFlag; // data: 0xAC1344
extern uint8_t g_NetworkLobby_Init; // data: 0xB77DC1
extern uint32_t g_NetworkLobbyState; // data: 0xB77E28

//===========================================================================
// High-XRef Globals (xref≥5, ≥2 callers, from xref_analysis_batch)
//===========================================================================

extern uint32_t g_BuildingLoadQueue_Count; // data: 0xB0E844

extern void* g_FileSystem_THEATER_PAL; // data: 0x87F6C4

extern void* g_BuildingLoadQueue_Array; // data: 0xB0E840

extern uint32_t g_BuildingLoadQueue_Dirty; // data: 0xB0E84C

extern uint32_t g_BuildingLoadQueue_Active; // data: 0xB0E850

extern uint32_t g_BuildingLoadQueue_Capacity; // data: 0xB0E848

extern uint32_t g_Shroud_CellArray; // data: 0x87F924

extern uint32_t g_VisibleSurfaceDescriptor; // data: 0x87E8A4

extern void* g_hWnd; // data: 0xB73550

extern uint32_t g_BinkMoviePlayer; // data: 0x87F770

extern uint32_t g_AnimManager; // data: 0xB0F680

extern uint32_t g_AnimPoolManager; // data: 0xB0F670

extern uint32_t g_Cell_PositionLUT; // data: 0x87F8DC

extern uint32_t g_AlphaShapePool; // data: 0xB0F730

extern void* g_hInstance; // data: 0xB732F0

extern uint32_t g_CellPositionOffset; // data: 0x87F8E0

extern uint8_t g_AnimPoolLocked; // data: 0xB0F67D

extern uint32_t g_AnimTypePool; // data: 0xB0F678

extern uint32_t g_AnimManagerConfig; // data: 0xB0F684

} // namespace gamemd
