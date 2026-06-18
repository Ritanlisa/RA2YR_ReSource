#pragma once

#include <cstdint>
#include <cstddef>
#include <cstdio>
#include <windows.h>

namespace gamemd {

//===========================================================================
// System: Screen render globals
//===========================================================================

// 0x879b30: lookup table 1 (read-only from type_db)
extern const uint32_t g_ScreenRenderLUT1;
// 0x87b170: lookup table 2
extern uint16_t g_ScreenRenderLUT2;
// 0x87bc90: render mask array
extern char g_ScreenRenderMask[256];
// 0x87bd90: render flag
extern uint8_t g_ScreenRenderFlag;

//===========================================================================
// System: CRT / I/O / TLS globals
//===========================================================================

// 0x87bf70: file handle (size 32, ida_type: FILE)
extern FILE File;
// 0x87c2ec: critical section pointer
extern LPCRITICAL_SECTION lpCriticalSection;
// 0x87c3f8: short string buffer
extern char Str1[2];
// 0x87c484: heap block pointer (ida_type: char*)
extern char* Block;
// 0x87c488: function pointer array
extern const uint32_t funcs_7CDE2B;  // CRT locale dispatch table element
// 0x87c598: CRT ctype table (ida_type: unsigned __int16[])
extern uint16_t __ctype[];
// 0x87c79c: source buffer size
extern size_t SrcSizeInBytes;
// 0x87c7a0: source character
extern char SrcCh;
// 0x87c7a8: TLS index
extern DWORD dwTlsIndex;
// 0x87caec: multibyte string pointer
extern LPSTR lpMultiByteStr;
// 0x87cba0: size counter
extern size_t Size;
// 0x87dd80: console input handle
extern HANDLE hConsoleInput;
// 0x87dd84: console output handle
extern HANDLE hConsoleOutput;

//===========================================================================
// Audio: stream / config / file data
//===========================================================================

// 0x87e180: audio stream object handle
extern void* g_AudioStreamObject;
// 0x87e2a0: audio config state flag
extern uint32_t g_AudioConfigState;
// 0x87e72c: audio subsystem initialized flag
extern uint32_t g_AudioInitialized;
// 0x87e724: audio file data pointer
extern void* g_AudioFileData;

// 0x87e734-0x87e738: MIX file handles
// 0x87e734: AUDIO.MIX
extern uint32_t g_MixFile_AUDIO;
// 0x87e738: THEME.MIX
extern uint32_t g_MixFile_THEME;

// 0x87e73c-0x87e754: mixer channel indices
extern uint32_t g_MixerChannel_SFX;     // 0x87e73c
extern uint32_t g_MixerChannel_Voice;   // 0x87e740
extern uint32_t g_MixerChannel_Theme;   // 0x87e744
extern uint32_t g_MixerChannel_Score;   // 0x87e748
extern uint32_t g_MixerChannel_Misc;    // 0x87e74c
extern uint32_t g_MixerChannel_Ambient; // 0x87e750
extern uint32_t g_MixerChannel_Stream;  // 0x87e754

// 0x87e758: mixer state
extern uint32_t g_MixerState;

//===========================================================================
// Audio: mixer buffers (int[32] each, 128 bytes)
//===========================================================================

extern int g_MixerBuffer1[32]; // 0x87e2c0
extern int g_MixerBuffer2[32]; // 0x87e4e0
extern int g_MixerBuffer3[32]; // 0x87e578
extern int g_MixerBuffer4[32]; // 0x87e450
extern int g_MixerBuffer5[32]; // 0x87e340
extern int g_MixerBuffer6[32]; // 0x87e6a0
extern int g_MixerBuffer7[32]; // 0x87e5f8
extern int g_MixerBuffer8[32]; // 0x87e3c0

//===========================================================================
// Audio: thread sync / init flag
//===========================================================================

// 0x87e7f0: audio thread event/semaphore
extern HANDLE hObject;
// 0x87e7f4: audio thread ID
extern DWORD ThreadId;
// 0x87e7f8: audio critical section
extern CRITICAL_SECTION CriticalSection;
// 0x87e8b8: audio init flag array (3200 bytes)
extern char g_AudioInitFlag[3200];

//===========================================================================
// Misc: CommandClass globals
//===========================================================================

// 0x87f658: command class vector (DynamicVectorClass*)
extern uint32_t g_CommandClassVector;
// 0x87f65c: command class capacity pointer
extern void* g_CommandClass_Capacity;
// 0x87f660: command class size counter
extern uint32_t g_CommandClass_Size;
// 0x87f665: command class initialized flag
extern uint8_t g_CommandClass_HasInit;
// 0x87f668: command class vector state
extern uint32_t g_CommandClassVector_State;
// 0x87f66c: command class extra data
extern uint32_t g_CommandClass_Extra;

//===========================================================================
// Misc: FileSystem / vector helpers
//===========================================================================

// 0x87f680: vector base pointer
extern void* Base;
// 0x87f684: vector element count
extern size_t NumOfElements;
// 0x87f68c: filesystem init flag
extern uint8_t g_FileSystemInitFlag;
// 0x87f690: filesystem pool pointer
extern uint32_t g_FileSystemPool;
// 0x87f6a8: surface animation state
extern uint32_t g_SurfaceAnimState;
// 0x87f6bc: TIBERIUM.PAL file handle
extern uint32_t FileSystem_GRFTXT_TIBERIUM_PAL;

//===========================================================================
// Misc: Sidebar / GameConfig / Aircraft tracker
//===========================================================================

// 0x87f6cc: sidebar config pointer
extern uint32_t g_SidebarConfig;
// 0x87f778: game config manager pointer
extern uint32_t g_GameConfigManager;
// 0x87f914: aircraft tracker pool pointer
extern const uint32_t g_AircraftTrackerPool;
// 0x87f918: aircraft tracker state
extern const uint32_t g_AircraftTrackerState;

//===========================================================================
// Misc: Audio DSP state
//===========================================================================

// 0xb78198: audio DSP state
extern uint32_t g_AudioDSPState;

//===========================================================================
// Network: session / lobby / options
//===========================================================================

// 0xac025c: network options dialog state
extern uint32_t g_NetworkOptionsState;
// 0xac0260: network setup config (ida_type: WPARAM)
extern uint32_t g_NetworkSetupConfig;
// 0xac0264: network settings dialog state
extern uint32_t g_NetworkSettingsState;
// 0xac1344: network test flag
extern uint8_t g_NetworkTestFlag;
// 0xb77dc1: network lobby init flag
extern uint8_t g_NetworkLobby_Init;
// 0xb77e28: network lobby state
extern uint32_t g_NetworkLobbyState;

} // namespace gamemd
