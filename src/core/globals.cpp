// G42.32 P: tree-universe marker -- e4 tree-owned decls suppressed
#define GAMEMD_TREE_UNIVERSE 1
// Global variable definitions and stub functions required by
// the faithful IDA translations of core game functions.
// IDA address annotations refer to the original gamemd.exe binary.

#include <windows.h>
#include "e4/classes/Stream_e4.hpp"
#include "e4/classes/Checksummer_e4.hpp"
#include <cstdint>
#include <cstring>

#include "core/vector.hpp"
#include "core/math.hpp"
#include "object/object.hpp"
#include "type/building_type.hpp"
#include "e4/e4_globals_decls.hpp"
#include "core/utility_ext.hpp"
#include "misc/misc_ext.hpp"

namespace gamemd {

using ra2::game::ObjectClass;

void * g_current_objects;  // extern form per e4_globals (C2040 fix)
void *& CurrentObjects = g_current_objects;  // reference-to-slot (C2040 fix)

// ============================================================
// Command line globals (ParseCommandLine @ 0x52F620)
// ============================================================

int  g_IntroMovieObject    = 0;   // 0xA8E960
bool ArmageddonMode        = false; // 0xA8ED6B
uint32_t g_Audio_MixerEnabled = 1; // 0x840A70 (default: audio enabled)
int  dword_A8F784          = 0;   // 0xA8F784 (record/playback: 0=normal, 1=record, 2=play)
bool byte_89E3A0           = false; // 0x89E3A0 (-CD flag)
uint32_t dword_A8D600      = 0;   // 0xA8D600 (dest IP net)
uint32_t dword_A8D604      = 0;   // 0xA8D604
uint32_t dword_A8D608      = 0;   // 0xA8D608
bool dword_A8D5FC           = false; // 0xA8D5FC (-DESTNET set)
bool byte_B04880           = false; // 0xB04880 (MP debug)
bool byte_A8B8B4           = false; // 0xA8B8B4 (MP debug 2)
bool byte_A8EDDC           = false; // 0xA8EDDC (-SPEEDCONTROL)
int  dword_B77E18          = 0;   // 0xB77E18 (router: 0=default, 1=DLINK1, 2=NETGEAR)
bool byte_A8E2C8           = true;  // 0xA8E2C8 (no router, default: router enabled)
bool byte_A8D60C           = false; // 0xA8D60C (-STEALTH)
bool byte_A8D60D           = true;  // 0xA8D60D (-MESSAGES, default: messages)
int  g_NetworkEventPending = 0;   // 0xA8D5F8 (network event flags)
int  g_CommandLineFlags    = 0;   // 0xA8EB84
int  g_CommandLineParam    = 0;   // 0xA8EB88
bool g_Is16BitMode         = false; // 0x8175B0
int  g_DDraw_Initialized   = 0;   // 0x89F978 (window mode flag)
bool byte_A8ED64           = false; // 0xA8ED64 (-XQ / -OQ)

// 0xA8ED80 -- g_DDraw_Active (defined in ddraw_init.cpp, declared here for core access)
int RestartNetworkSession(int mode)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00A8ED80.json)
}

/* ASM:
mov     eax, dword_A8ED54+8E230h
push    esi
mov     esi, ecx
cmp     eax, esi
jz      short loc_734F72
call    WinMain__ShutdownCleanup
mov     ecx, dword_A8ED54+8E214h
mov     dword_A8ED54+8E230h, esi
call    CSFClass__LoadFile

loc_734F72:                             ; CODE XREF: RestartNetworkSession+A↑j
pop     esi
retn
*/

// 0x734F80: ToggleNetworkSession
int ToggleNetworkSession(int enable)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00734F80.json)
}

/* ASM:
mov     eax, dword_A8ED54+8E20Ch
push    esi
mov     esi, ecx
cmp     eax, esi
jz      short loc_734FA2
call    WinMain__ShutdownCleanup
mov     ecx, dword_A8ED54+8E214h
mov     dword_A8ED54+8E20Ch, esi
call    CSFClass__LoadFile

loc_734FA2:                             ; CODE XREF: ToggleNetworkSession+A↑j
pop     esi
retn
*/

// 0x6B8AE0: ScenarioClass::ResetIntroFlags
unsigned int ResetIntroFlags(int* obj)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6B8AE0)
}

/* ASM:
mov     eax, [ecx]
and     eax, 0FFF88088h
or      eax, 8088h
mov     [ecx], eax
retn
*/

// 0x47AB10: Game::FindGameDirectoryCD
void FindGameDirectoryCD(const char* path)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0047AB10.json)
}

/* ASM:
Str1            = byte ptr -104h

sub     esp, 108h
push    ebx
xor     bl, bl
test    ecx, ecx
jnz     short loc_47AB27
xor     eax, eax
pop     ebx
add     esp, 108h
retn
; ---------------------------------------------------------------------------

loc_47AB27:                             ; CODE XREF: Game__FindGameDirectoryCD+B↑j
push    ebp
push    esi
push    edi
push    ecx             ; Source
call    __strdup
mov     ebp, eax
add     esp, 4
cmp     ebp, 89E41Ch
jz      short loc_47AB92
mov     edi, offset asc_81C8FC ; ";"
or      ecx, 0FFFFFFFFh
xor     eax, eax
repne scasb
not     ecx
sub     edi, ecx
mov     esi, edi
mov     edx, ecx
mov     edi, 89E41Ch
or      ecx, 0FFFFFFFFh
repne scasb
mov     ecx, edx
dec     edi
shr     ecx, 2
rep movsd
mov     ecx, edx
and     ecx, 3
rep movsb
mov     edi, ebp
or      ecx, 0FFFFFFFFh
repne scasb
not     ecx
sub     edi, ecx
mov     esi, edi
mov     edx, ecx
mov     edi, 89E41Ch
or      ecx, 0FFFFFFFFh
repne scasb
mov     ecx, edx
dec     edi
shr     ecx, 2
rep movsd
mov     ecx, edx
and     ecx, 3
rep movsb

loc_47AB92:                             ; CODE XREF: Game__FindGameDirectoryCD+2B↑j
push    offset asc_81C8FC ; ";"
push    ebp             ; String
call    _strtok
mov     edx, eax
add     esp, 8
test    edx, edx
jz      loc_47AD27

loc_47ABAA:                             ; CODE XREF: Game__FindGameDirectoryCD+211↓j
mov     edi, edx
or      ecx, 0FFFFFFFFh
xor     eax, eax
repne scasb
not     ecx
dec     ecx
jz      loc_47AD0E
mov     edi, edx
or      ecx, 0FFFFFFFFh
repne scasb
lea     esi, [esp+118h+Str1]
not     ecx
sub     edi, ecx
mov     edx, esi
mov     eax, ecx
mov     esi, edi
mov     edi, edx
shr     ecx, 2
rep movsd
mov     ecx, eax
xor     eax, eax
and     ecx, 3
rep movsb
lea     edi, [esp+118h+Str1]
or      ecx, 0FFFFFFFFh
repne scasb
not     ecx
dec     ecx
mov     cl, [esp+ecx+118h+var_105]
cmp     cl, 3Ah ; ':'
jz      short loc_47AC27
cmp     cl, 5Ch ; '\'
jz      short loc_47AC27
mov     edi, offset asc_815E74 ; "\\"
or      ecx, 0FFFFFFFFh
repne scasb
not     ecx
sub     edi, ecx
lea     edx, [esp+118h+Str1]
mov     esi, edi
mov     edi, edx
mov     edx, ecx
or      ecx, 0FFFFFFFFh
repne scasb
mov     ecx, edx
dec     edi
shr     ecx, 2
rep movsd
mov     ecx, edx
and     ecx, 3
rep movsb

loc_47AC27:                             ; CODE XREF: Game__FindGameDirectoryCD+E4↑j
; Game__FindGameDirectoryCD+E9↑j
push    2               ; MaxCount
lea     eax, [esp+11Ch+Str1]
push    offset Str2     ; "?:"
push    eax             ; Str1
call    _strncmp
add     esp, 0Ch
test    eax, eax
jnz     short loc_47ACB0
mov     ecx, ds:89E414h
test    ecx, ecx
jz      loc_47AD0E
mov     edx, 78h ; 'x'
mov     bl, 1
call    AlwaysFindYRCD
cmp     eax, 0FFFFFFFFh
jle     loc_47AD0E
mov     cl, ds:89E414h
push    8               ; Size
add     cl, 41h ; 'A'
mov     [esp+11Ch+Str1], cl
call    ??2_YAPAXI_Z
lea     edx, [esp+11Ch+Str1]
mov     esi, eax
push    edx             ; Source
call    __strdup
mov     [esi+4], eax
mov     dword ptr [esi], 0
mov     ecx, ds:89E410h
add     esp, 8
test    ecx, ecx
jnz     short loc_47ACA0
mov     ds:89E410h, esi
jmp     short loc_47AD0E
; ---------------------------------------------------------------------------

loc_47ACA0:                             ; CODE XREF: Game__FindGameDirectoryCD+186↑j
mov     eax, [ecx]
test    eax, eax
jz      short loc_47AD0C

loc_47ACA6:                             ; CODE XREF: Game__FindGameDirectoryCD+19C↓j
mov     ecx, eax
mov     eax, [ecx]
test    eax, eax
jnz     short loc_47ACA6
jmp     short loc_47AD0C
; ---------------------------------------------------------------------------

loc_47ACB0:                             ; CODE XREF: Game__FindGameDirectoryCD+12D↑j
movsx   ecx, [esp+118h+Str1]
sub     ecx, 41h ; 'A'
test    ecx, ecx
jle     short loc_47AD0E
mov     edx, 78h ; 'x'
call    AlwaysFindYRCD
cmp     eax, 2
jnz     short loc_47AD0E
push    8               ; Size
mov     bl, 1
call    ??2_YAPAXI_Z
mov     esi, eax
lea     eax, [esp+11Ch+Str1]
push    eax             ; Source
call    __strdup
mov     [esi+4], eax
mov     dword ptr [esi], 0
mov     ecx, ds:89E410h
add     esp, 8
test    ecx, ecx
jnz     short loc_47ACFE
mov     ds:89E410h, esi
jmp     short loc_47AD0E
; ---------------------------------------------------------------------------

loc_47ACFE:                             ; CODE XREF: Game__FindGameDirectoryCD+1E4↑j
mov     eax, [ecx]
test    eax, eax
jz      short loc_47AD0C

loc_47AD04:                             ; CODE XREF: Game__FindGameDirectoryCD+1FA↓j
mov     ecx, eax
mov     eax, [ecx]
test    eax, eax
jnz     short loc_47AD04

loc_47AD0C:                             ; CODE XREF: Game__FindGameDirectoryCD+194↑j
; Game__FindGameDirectoryCD+19E↑j ...
mov     [ecx], esi

loc_47AD0E:                             ; CODE XREF: Game__FindGameDirectoryCD+A6↑j
; Game__FindGameDirectoryCD+137↑j ...
push    offset asc_81C8FC ; ";"
push    0               ; String
call    _strtok
mov     edx, eax
add     esp, 8
test    edx, edx
jnz     loc_47ABAA

loc_47AD27:                             ; CODE XREF: Game__FindGameDirectoryCD+94↑j
push    ebp             ; Block
call    _free
add     esp, 4
xor     eax, eax
test    bl, bl
pop     edi
pop     esi
pop     ebp
pop     ebx
setz    al
add     esp, 108h
retn
*/

// 0x53ECE0: NetworkAddress::Assign
void NetworkAssignAddress(void* addr, void* port, int arg)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0053ECE0.json)
}

/* ASM:
mov     edx, [esp+arg_4]
mov     eax, ecx
push    esi
mov     esi, [edx]
lea     ecx, [eax+4]
mov     [eax+4], esi
mov     dx, [edx+4]
pop     esi
mov     [ecx+4], dx
mov     ecx, dword_828140
cmp     ecx, 1
jnz     short loc_53ED0E
mov     ecx, [esp+arg_0]
mov     edx, [ecx]
mov     [eax], edx
retn    0Ch
; ---------------------------------------------------------------------------

loc_53ED0E:                             ; CODE XREF: NetworkAddress__Assign+21↑j
mov     cx, [esp+arg_8]
mov     dword ptr [eax], 0
mov     [eax], cx
retn    0Ch
*/

// 0x542430: Network::GetField
void NetworkGetField(int port)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00542430.json)
}

// 0x6C87F0: InitSkirmishSettings
int InitSkirmishSettings()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006C87F0.json)
}

/* ASM:
sub     esp, 8
lea     ecx, [esp+8+var_4]
call    Timer__GetTicks
mov     dword_A8ED54+7CFD4h, eax
mov     eax, [esp+8+var_4]
mov     dword_A8ED54+7CFD8h, eax
mov     byte ptr dword_A8ED54+7D060h, 1
add     esp, 8
retn
*/

// 0x69BAB0: WTFMode::Init (see game_loop.hpp struct)
// 0x69BB40: WTFMode::Shutdown (see game_loop.hpp struct)

// 0x48E0B0: DumpNetworkStats
FILE * DumpNetworkStats()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x48E0B0)
}

/* ASM:
mov     al, [ecx+30D8h]
test    al, al
jnz     locret_69BB3F
mov     al, ds:0A8E9A0h
test    al, al
jz      short locret_69BB3F
mov     byte ptr [ecx+30D8h], 1
mov     eax, dword_83ED20
cmp     eax, 0FFFFFFFFh
jnz     short loc_69BAE2
mov     eax, ds:0A8EB60h
mov     dword_83ED20, eax

loc_69BAE2:                             ; CODE XREF: WTFMode__Init+26↑j
cmp     dword ptr [ecx], 0
jnz     short loc_69BAF1
mov     dword ptr ds:0A8EB60h, 2

loc_69BAF1:                             ; CODE XREF: WTFMode__Init+35↑j
mov     ecx, ds:0A8B230h
mov     al, [ecx+35A2h]
test    al, al
jnz     short loc_69BB15
call    Scenario__ClearScreen
mov     edx, dword_A8ED54+30h
add     edx, 3
mov     dword_A8ED54+78A30h, edx

loc_69BB15:                             ; CODE XREF: WTFMode__Init+4F↑j
mov     ecx, ds:887640h
mov     eax, [ecx]
call    dword ptr [eax+1Ch]
test    al, al
jnz     short loc_69BB2F
mov     ecx, ds:887640h
mov     edx, [ecx]
call    dword ptr [edx+18h]

loc_69BB2F:                             ; CODE XREF: WTFMode__Init+72↑j
mov     ecx, ds:87E758h
mov     edx, 4000h
jmp     EndBufferMixer
; ---------------------------------------------------------------------------

locret_69BB3F:                          ; CODE XREF: WTFMode__Init+8↑j
; WTFMode__Init+15↑j
retn
*/

// 0x532100: ScreenSaver::Process (see game_loop.hpp struct)

// 0x5F0070: CleanupCampaignResources
char CleanupCampaignResources()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F0070.json)
}

/* ASM:
sub     esp, 70h
mov     al, ds:0A8D5F8h
push    esi
test    al, 2
push    edi
mov     [esp+78h+var_70], 0
jnz     loc_5F0119
mov     ecx, 1Bh
xor     eax, eax
lea     edi, [esp+78h+var_70]
push    0
rep stosd
stosw
stosb
lea     eax, [esp+7Ch+var_70]
push    6Fh ; 'o'
push    eax
mov     ecx, 0A8EA70h
mov     [esp+84h+var_70], 13h
call    Stream__WriteBlock
lea     ecx, [esp+78h+var_70]
push    0
push    6Fh ; 'o'
push    ecx
mov     ecx, 0A8EA70h
call    Stream__WriteBlock
mov     eax, ds:887338h
mov     edi, ds:887340h
cmp     eax, 0FFFFFFFFh
jz      short loc_5F00E4
mov     ecx, 88733Ch
call    Timer__GetTicks
sub     eax, ds:887338h
add     edi, eax

loc_5F00E4:                             ; CODE XREF: CleanupCampaignResources+60↑j
; CleanupCampaignResources+A7↓j
mov     eax, ds:887338h
mov     esi, ds:887340h
cmp     eax, 0FFFFFFFFh
jz      short loc_5F0106
mov     ecx, 88733Ch
call    Timer__GetTicks
sub     eax, ds:887338h
add     esi, eax

loc_5F0106:                             ; CODE XREF: CleanupCampaignResources+82↑j
sub     esi, edi
cmp     esi, 1Eh
jnb     short loc_5F0119
mov     ecx, 0A8EA70h
call    Stream__ReadPacket
jmp     short loc_5F00E4
; ---------------------------------------------------------------------------

loc_5F0119:                             ; CODE XREF: CleanupCampaignResources+11↑j
; CleanupCampaignResources+9B↑j
pop     edi
pop     esi
add     esp, 70h
retn
*/

// 0x5DA720: Network::ShutdownInterface
void NetworkShutdownInterface()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005DA720.json)
}

// 0x734E60: GetStringCSF -- returns "TXT_KEY" as placeholder
const wchar_t* GetCSFString(const wchar_t* key, const char* file, int line)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x734E60)
}

/* ASM:
push    ebx
push    esi
mov     esi, edx
mov     ebx, ecx
test    esi, esi
jz      short loc_734E70
mov     dword ptr [esi], 0

loc_734E70:                             ; CODE XREF: GetStringCSF+8↑j
mov     eax, dword_A8ED54+8E220h
test    eax, eax
jnz     short loc_734E83
pop     esi
mov     eax, offset aFatalStringMan ; "***FATAL*** String Manager failed to in"...
pop     ebx
retn    8
; ---------------------------------------------------------------------------

loc_734E83:                             ; CODE XREF: GetStringCSF+17↑j
mov     ecx, dword_A8ED54+8E218h
push    offset __strcmpi ; CompareFunction
push    28h ; '('       ; SizeOfElements
push    ecx             ; NumOfElements
push    eax             ; Base
push    ebx             ; Key
call    _bsearch
add     esp, 14h
test    eax, eax
jz      short loc_734EC2
test    esi, esi
jz      short loc_734EB1
mov     edx, [eax+24h]
mov     ecx, dword_A8ED54+8E228h
mov     edx, [ecx+edx*4]
mov     [esi], edx

loc_734EB1:                             ; CODE XREF: GetStringCSF+41↑j
mov     eax, [eax+24h]
mov     ecx, dword_A8ED54+8E224h
pop     esi
pop     ebx
mov     eax, [ecx+eax*4]
retn    8
; ---------------------------------------------------------------------------

loc_734EC2:                             ; CODE XREF: GetStringCSF+3D↑j
push    ebp
push    edi
push    208h            ; Size
call    ??2_YAPAXI_Z
mov     ebp, [esp+14h+arg_4]
mov     edx, [esp+14h+arg_0]
mov     esi, eax
push    ebp
push    edx
push    ebx             ; Format
lea     edi, [esi+4]
push    offset aMissingHs ; "MISSING:'%hs'"
push    edi             ; Buffer
call    _swprintf
mov     eax, [esp+28h+arg_0]
push    ebp
push    eax
push    ebx
push    offset aNoStringSFileS ; "***NO_STRING*** '%s' -> file:%s line:%d"...
call    Debug__Log
mov     ecx, dword_A8ED54+8E234h
add     esp, 28h
mov     eax, edi
mov     [esi], ecx
pop     edi
mov     dword_A8ED54+8E234h, esi
pop     ebp
pop     esi
pop     ebx
retn    8
*/

// IDA: 0x55D360 -- GameFrameLoop stub
bool GameFrameLoop() { return false; }

// IDA: 0x55CFD0 -- GameFrameCheck stub
bool GameFrameCheck() { return false; }

// IDA: 0x48C8B0 -- MainGameFrame stub
void MainGameFrame() {}

// IDA: 0x87F7E8 -- MapClass_Instance (global tactical map)
void* MapClass_Instance = nullptr;

// IDA: 0x4F42F0 -- MapClass::MarkForRedraw (see system/map.hpp)

// IDA: Scene/Scenario related globals
void* TacticalClass_Instance = nullptr; // 0x887324
void* DSurface_Hidden = nullptr;        // 0x88730C
void* DSurface_Hidden_2 = nullptr;      // 0x887314
void* DSurface_Primary = nullptr;       // 0x887308

// IDA: 0xA8ED9D -- byte_A8ED9D (network state flag)
bool byte_A8ED9D = false;

// IDA: 0x822CF2 -- MoveFeedback (UI feedback flag)
int MoveFeedback = 1;

// IDA: 0xA83D48/49 -- game state flags
bool byte_A83D48 = false;
bool byte_A83D49 = false;

// IDA: 0x8B41C0 -- byte_8B41C0 (restart flag)
bool byte_8B41C0 = false;

// IDA: 0xA8ECD0 -- g_NetResponseActive
bool g_NetResponseActive = false;

// IDA: 0xA8ECB8 -- ObjectClass_CurrentObjects (global object list)
void* ObjectClass_CurrentObjects = nullptr;

// IDA: 0xA8ECBC -- g_ObjectClass_CurrentCount
void* g_ObjectClass_CurrentCount = nullptr;  // data: 0xa8ecbc

// IDA: 0xA8ECC8 -- g_SelectionManager (selection count)
int   g_SelectionManager = 0;

// IDA: 0xA8E368-A8E374 -- Object placement pool system
int   g_PlacementCellPool = 0;    // 0xA8E370
int   dword_A8E368 = 0;
int   dword_A8E374 = 0;
void* dword_A8E360 = nullptr;    // 0xA8E360
void* dword_A8E364 = nullptr;    // 0xA8E364
bool  byte_A8E36D = false;       // 0xA8E36D

// IDA: Object AlphaShape pool globals
int   g_AlphaShapePool = 0;       // 0xB0F730
void* dword_B0F724 = nullptr;     // 0xB0F724
int   dword_B0F728 = 0;           // 0xB0F728
bool  byte_B0F72D = false;        // 0xB0F72D
int   dword_B0F734 = 0;           // 0xB0F734

// IDA: Anim pool globals
int   g_AnimTypePool = 0;         // 0xB0F678
void* g_AnimManager = nullptr;     // 0xB0F680
bool  g_AnimPoolLocked = false;    // 0xB0F67D
int   g_AnimManagerConfig = 0;     // 0xB0F684
void* g_AnimPoolManager = nullptr; // 0xB0F670

// IDA: Laser draw globals
int   g_LaserDrawConfig = 0;       // 0xB0F6A8
void* g_DiskLaserManager = nullptr; // 0xB0F698
void* dword_B0F69C = nullptr;      // 0xB0F69C
int   dword_B0F6A0 = 0;            // 0xB0F6A0
bool  byte_B0F6A5 = false;         // 0xB0F6A5
int   dword_B0F6AC = 0;            // 0xB0F6AC

// IDA: Cell/Map globals
void* g_Shroud_CellArray = nullptr; // 0x87F924
int   dword_87F928 = 0;             // 0x87F928
int   g_Map_GlobalCellIndex = 0;     // 0xABDC74

// IDA: 0xA8E950 -- dword_A8E950 (CD drive count)
int   dword_A8E950 = 0;

// IDA: 0xA8E8E8 -- dword_A8E8E8 (CD drive letters array)
int   dword_A8E8E8 = 0;

// IDA: 0x81C1D0 -- dword_81C1D0 (CD availability flag)
int   dword_81C1D0 = 0;

// IDA: 0xB0F6D8 -- Foot object pool state
int   dword_B0F6D8 = 0;
void* dword_B0F6CC = nullptr;
int   dword_B0F6D0 = 0;
bool  byte_B0F6D5 = false;
int   dword_B0F6DC = 0;
void* dword_B0F6C8 = nullptr;

// IDA: 0x887640 -- WWMouseClass_Instance
void* WWMouseClass_Instance = nullptr;

// IDA: 0x87F770 -- g_BinkMoviePlayer
void* g_BinkMoviePlayer = nullptr;  // data: 0x87f770

// ============================================================
// BuildingClass::CalcDrawPos (0x480110) — required global variables
// ============================================================

// 0xA83D84: BuildingTypeClass_Array — pointer to array of BuildingTypeClass*
BuildingTypeClass** BuildingTypeClass_Array = nullptr;

// 0x886FA4: Map_VisibleRect — visible map Y coordinate (int32)
int32_t Map_VisibleRect = 0;

} // namespace gamemd
