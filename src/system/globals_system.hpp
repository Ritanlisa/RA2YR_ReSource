#pragma once

#include <cstdint>
#include <cstddef>
#include <cstdio>
#include <windows.h>

namespace gamemd {

//===========================================================================
// System: Screen render globals
//===========================================================================

// 0x879B30: lookup table 1 (read-only from type_db)
extern const uint32_t g_ScreenRenderLUT1;
// 0x87B170: lookup table 2
extern uint16_t g_ScreenRenderLUT2;
// 0x87BC90: render mask array
extern char g_ScreenRenderMask[256];
// 0x87BD90: render flag
extern uint8_t g_ScreenRenderFlag;

//===========================================================================
// System: CRT / I/O / TLS globals
//===========================================================================

// 0x87BF70: file handle (size 32, ida_type: FILE)
extern FILE File;
// 0x87C2EC: critical section pointer
extern LPCRITICAL_SECTION lpCriticalSection;
// 0x87C3F8: short string buffer
extern char Str1[2];
// 0x87C484: heap block pointer (ida_type: char*)
extern char* Block;
// 0x87C488: function pointer array
extern const uint32_t funcs_7CDE2B;  // CRT locale dispatch table element
// 0x87C598: CRT ctype table (ida_type: unsigned __int16[])
extern uint16_t __ctype[];
// 0x87C79C: source buffer size
extern size_t SrcSizeInBytes;
// 0x87C7A0: source character
extern char SrcCh;
// 0x87C7A8: TLS index
extern DWORD dwTlsIndex;
// 0x87CAEC: multibyte string pointer
extern LPSTR lpMultiByteStr;
// 0x87CBA0: size counter
extern size_t Size;
// 0x87DD80: console input handle
extern HANDLE hConsoleInput;
// 0x87DD84: console output handle
extern HANDLE hConsoleOutput;

//===========================================================================
// Audio: stream / config / file data
//===========================================================================

// 0x87E180: audio stream object handle
extern void* g_AudioStreamObject;
// 0x87E2A0: audio config state flag
extern uint32_t g_AudioConfigState;
// 0x87E72C: audio subsystem initialized flag
extern uint32_t g_AudioInitialized;
// 0x87E724: audio file data pointer
extern void* g_AudioFileData;

// 0x87E734-0x87e738: MIX file handles

extern uint32_t g_MixFile_AUDIO;
// 0x87E738: THEME.MIX
extern uint32_t g_MixFile_THEME;

// 0x87E73C-0x87e754: mixer channel indices
extern uint32_t g_MixerChannel_SFX;
extern uint32_t g_MixerChannel_Voice;   // 0x87E740
extern uint32_t g_MixerChannel_Theme;   // 0x87E744
extern uint32_t g_MixerChannel_Score;   // 0x87E748
extern uint32_t g_MixerChannel_Misc;    // 0x87E74C
extern uint32_t g_MixerChannel_Ambient; // 0x87E750
extern uint32_t g_MixerChannel_Stream;  // 0x87E754

// 0x87E758: mixer state
extern uint32_t g_MixerState;

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

// 0x87E7F0: audio thread event/semaphore
extern HANDLE hObject;
// 0x87E7F4: audio thread ID
extern DWORD ThreadId;
// 0x87E7F8: audio critical section
extern CRITICAL_SECTION CriticalSection;
// 0x87E8B8: audio init flag array (3200 bytes)
extern char g_AudioInitFlag[3200];

//===========================================================================
// Misc: CommandClass globals
//===========================================================================

// 0x87F658: command class vector (DynamicVectorClass*)
extern uint32_t g_CommandClassVector;
// 0x87F65C: command class capacity pointer
extern void* g_CommandClass_Capacity;
// 0x87F660: command class size counter
extern uint32_t g_CommandClass_Size;
// 0x87F665: command class initialized flag
extern uint8_t g_CommandClass_HasInit;
// 0x87F668: command class vector state
extern uint32_t g_CommandClassVector_State;
// 0x87F66C: command class extra data
extern uint32_t g_CommandClass_Extra;

//===========================================================================
// Misc: FileSystem / vector helpers
//===========================================================================

// 0x87F680: vector base pointer
extern void* Base;
// 0x87F684: vector element count
extern size_t NumOfElements;
// 0x87F68C: filesystem init flag
extern uint8_t g_FileSystemInitFlag;
// 0x87F690: filesystem pool pointer
extern uint32_t g_FileSystemPool;
// 0x87F6A8: surface animation state
extern uint32_t g_SurfaceAnimState;
// 0x87F6BC: TIBERIUM.PAL file handle
extern uint32_t FileSystem_GRFTXT_TIBERIUM_PAL;

//===========================================================================
// Misc: Sidebar / GameConfig / Aircraft tracker
//===========================================================================

// 0x87F6CC: sidebar config pointer
extern uint32_t g_SidebarConfig;
// 0x87F778: game config manager pointer
extern uint32_t g_GameConfigManager;
// 0x87F914: aircraft tracker pool pointer
extern const uint32_t g_AircraftTrackerPool;
// 0x87F918: aircraft tracker state
extern const uint32_t g_AircraftTrackerState;

//===========================================================================
// Misc: Audio DSP state
//===========================================================================

// 0xB78198: audio DSP state
extern uint32_t g_AudioDSPState;

//===========================================================================
// Network: session / lobby / options
//===========================================================================

// 0xAC025C: network options dialog state
extern uint32_t g_NetworkOptionsState;
// 0xAC0260: network setup config (ida_type: WPARAM)
extern uint32_t g_NetworkSetupConfig;
// 0xAC0264: network settings dialog state
extern uint32_t g_NetworkSettingsState;
// 0xAC1344: network test flag
extern uint8_t g_NetworkTestFlag;
// 0xB77DC1: network lobby init flag
extern uint8_t g_NetworkLobby_Init;
// 0xB77E28: network lobby state
extern uint32_t g_NetworkLobbyState;

//===========================================================================
// High-XRef Globals (xref≥5, ≥2 callers, from xref_analysis_batch)
//===========================================================================

// 0xB0E844 [confidence: inferred_strong] (was: BuildingLoadQueue_Count)
extern uint32_t g_BuildingLoadQueue_Count;

// 0x87F6C4 [confidence: inferred_strong] (was: FileSystem_THEATER_PAL)
extern void* g_FileSystem_THEATER_PAL;

// 0xB0E840 [confidence: inferred_strong] (was: BuildingLoadQueue_Array)
extern void* g_BuildingLoadQueue_Array;

// 0xB0E84C [confidence: inferred_strong] (was: BuildingLoadQueue_Dirty)
extern uint32_t g_BuildingLoadQueue_Dirty;

// 0xB0E850 [confidence: inferred_strong] (was: BuildingLoadQueue_Active)
extern uint32_t g_BuildingLoadQueue_Active;

// 0xB0E848 [confidence: inferred_strong] (was: BuildingLoadQueue_Capacity)
extern uint32_t g_BuildingLoadQueue_Capacity;

// 0x87F924 [confidence: inferred_strong] shroud cell array (fog of war)
extern uint32_t g_Shroud_CellArray;

// 0x87E8A4 [confidence: inferred_strong] visible surface descriptor
extern uint32_t g_VisibleSurfaceDescriptor;

// 0xB73550 [confidence: inferred_strong] main window handle
extern void* g_hWnd;

// 0x87F770 [confidence: inferred_strong] Bink movie player instance
extern uint32_t g_BinkMoviePlayer;

// 0xB0F680 [confidence: inferred_strong] animation manager
extern uint32_t g_AnimManager;

// 0xB0F670 [confidence: inferred_strong] anim pool manager
extern uint32_t g_AnimPoolManager;

// 0x87F8DC [confidence: inferred_strong] cell position lookup table
extern uint32_t g_Cell_PositionLUT;

// 0xB0F730 [confidence: inferred_strong] alpha shape pool
extern uint32_t g_AlphaShapePool;

// 0xB732F0 [confidence: inferred_strong] application instance handle
extern void* g_hInstance;

// 0x87F8E0 [confidence: inferred_strong] cell position offset
extern uint32_t g_CellPositionOffset;

// 0xB0F67D [confidence: inferred_strong] anim pool locked flag (uint8_t)
extern uint8_t g_AnimPoolLocked;

// 0xB0F678 [confidence: inferred_strong] anim type pool
extern uint32_t g_AnimTypePool;

// 0xB0F684 [confidence: inferred_strong] anim manager config
extern uint32_t g_AnimManagerConfig;

} // namespace gamemd
