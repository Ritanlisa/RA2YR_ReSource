// Global variable definitions and stub functions required by
// the faithful IDA translations of core game functions.
// IDA address annotations refer to the original gamemd.exe binary.

#include <windows.h>
#include <cstdint>
#include <cstring>

#include "core/vector.hpp"
#include "core/math.hpp"
#include "object/object.hpp"
#include "type/building_type.hpp"

namespace gamemd {

using ra2::game::ObjectClass;

DynamicVectorClass<ObjectClass*> g_current_objects;
DynamicVectorClass<ObjectClass*>& CurrentObjects = g_current_objects;

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
extern bool g_DDraw_Active;

// ============================================================
// Stub functions (TODO: full IDA translation)
// ============================================================

// 0x734F50: RestartNetworkSession
void RestartNetworkSession(int mode) {
// [IDA decompile]
int __thiscall sub_734F50(void *this)
{
  int result; // eax

  result = MEMORY[0xB1CF84];
  if ( (void *)MEMORY[0xB1CF84] != this )
  {
    WinMain::ShutdownCleanup();
    MEMORY[0xB1CF84] = (int)this;
    return CSFClass::LoadFile((const char *)MEMORY[0xB1CF68]);
  }
  return result;
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
}

// 0x734F80: ToggleNetworkSession
void ToggleNetworkSession(int enable) {
// [IDA decompile]
int __thiscall sub_734F80(void *this)
{
  int result; // eax

  result = MEMORY[0xB1CF60];
  if ( (void *)MEMORY[0xB1CF60] != this )
  {
    WinMain::ShutdownCleanup();
    MEMORY[0xB1CF60] = (int)this;
    return CSFClass::LoadFile((const char *)MEMORY[0xB1CF68]);
  }
  return result;
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
}

// 0x6B8AE0: ScenarioClass::ResetIntroFlags
void ResetIntroFlags(int* obj) {
// [IDA decompile]
unsigned int __thiscall sub_6B8AE0(unsigned int *this)
{
  unsigned int result; // eax

  result = *this & 0xFFF80000 | 0x8088;
  *this = result;
  return result;
}

/* ASM:
mov     eax, [ecx]
and     eax, 0FFF88088h
or      eax, 8088h
mov     [ecx], eax
retn
*/
}

// 0x47AB10: Game::FindGameDirectoryCD
void FindGameDirectoryCD(const char* path) {
// [IDA decompile]
BOOL __thiscall Game::FindGameDirectoryCD(char *Source)
{
  char v1; // bl
  char *v3; // ebp
  char *i; // edx
  char v5; // cl
  _DWORD *v6; // esi
  _DWORD *v7; // ecx
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  char Str1[260]; // [esp+8h] [ebp-104h] BYREF

  v1 = 0;
  if ( !Source )
    return 0;
  v3 = _strdup(Source);
  if ( v3 != (char *)&MEMORY[0x87F7E8][31501] )
  {
    strcat((char *)&MEMORY[0x87F7E8][31501], asc_81C8FC);
    strcat((char *)&MEMORY[0x87F7E8][31501], v3);
  }
  for ( i = strtok(v3, asc_81C8FC); i; i = strtok(0, asc_81C8FC) )
  {
    if ( strlen(i) )
    {
      strcpy(Str1, i);
      v5 = Str1[strlen(Str1) - 1];
      if ( v5 != 58 && v5 != 92 )
        strcat(Str1, asc_815E74);
      if ( !strncmp(Str1, Str2, 2) )
      {
        if ( !MEMORY[0x87F7E8][31499] )
          continue;
        v1 = 1;
        if ( AlwaysFindYRCD() <= -1 )
          continue;
        Str1[0] = LOBYTE(MEMORY[0x87F7E8][31499]) + 65;
        v6 = (_DWORD *)__2_YAPAXI_Z(8);
        v6[1] = _strdup(Str1);
        *v6 = 0;
        v7 = (_DWORD *)MEMORY[0x87F7E8][31498];
        if ( MEMORY[0x87F7E8][31498] )
        {
          v8 = *(_DWORD **)MEMORY[0x87F7E8][31498];
          if ( *(_DWORD *)MEMORY[0x87F7E8][31498] )
          {
            do
            {
              v7 = v8;
              v8 = (_DWORD *)*v8;
            }
            while ( v8 );
          }
LABEL_24:
          *v7 = v6;
          continue;
        }
        MEMORY[0x87F7E8][31498] = v6;
      }
      else
      {
        if ( Str1[0] - 65 <= 0 || AlwaysFindYRCD() != 2 )
          continue;
        v1 = 1;
        v6 = (_DWORD *)__2_YAPAXI_Z(8);
        v6[1] = _strdup(Str1);
        *v6 = 0;
        v7 = (_DWORD *)MEMORY[0x87F7E8][31498];
        if ( MEMORY[0x87F7E8][31498] )
        {
          v9 = *(_DWORD **)MEMORY[0x87F7E8][31498];
          if ( *(_DWORD *)MEMORY[0x87F7E8][31498] )
          {
            do
            {
              v7 = v9;
              v9 = (_DWORD *)*v9;
            }
            while ( v9 );
          }
          goto LABEL_24;
        }
        MEMORY[0x87F7E8][31498] = v6;
      }
    }
  }
  free(v3);
  return v1 == 0;
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
}

// 0x53ECE0: NetworkAddress::Assign
void NetworkAssignAddress(void* addr, void* port, int arg) {
// [IDA decompile]
_DWORD *__thiscall NetworkAddress_Assign(_DWORD *this, _DWORD *a2, int a3, __int16 a4)
{
  _DWORD *result; // eax
  char *v5; // ecx

  result = this;
  v5 = (char *)(this + 1);
  *(_DWORD *)v5 = *(_DWORD *)a3;
  *((_WORD *)v5 + 2) = *(_WORD *)(a3 + 4);
  if ( dword_828140 == 1 )
  {
    *result = *a2;
  }
  else
  {
    *result = 0;
    *(_WORD *)result = a4;
  }
  return result;
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
}

// 0x542430: Network::GetField
void NetworkGetField(int port) {
// [IDA decompile]
int __thiscall Network::GetField(_WORD *this, __int16 a2)
{
  int result; // eax
  __int16 v3; // dx

  LOWORD(result) = a2;
  LOBYTE(v3) = HIBYTE(a2);
  HIBYTE(v3) = a2;
  *(this + 17) = v3;
  return result;
}

/* ASM:
mov     ax, [esp+arg_0]
xor     edx, edx
mov     dl, ah
mov     dh, al
mov     [ecx+22h], dx
retn    4
*/
}

// IDA 0x7B2720 -- SessionClass::SetInstance (defined in app/cmdline.cpp)

// ============================================================
// MainGame (0x48CCC0) -- required global variables
// ============================================================

// 0x81D4E0: g_MenuReturnState -- next MenuSelect state
int  g_MenuReturnState = 1;

// 0xA8E7AC: IKnowWhatImDoing -- developer skip flag
bool IKnowWhatImDoing = false;

// 0xA8B238: GameMode_Current -- current game mode (0=menu, 1/2=campaign, 3=internet, 4=skirmish, 5=setup)
int  GameMode_Current = 0;

// 0xA8EDA0: g_MainGameState -- in-game UI state (0=idle, 1-9=UI screens)
int  g_MainGameState = 0;

// 0xA8ED9C: g_GameActive -- game active flag
bool g_GameActive = false;

// 0xA8ED84: CurrentFrame -- frame counter
int  CurrentFrame = 0;

// 0x822CFC: g_GameLoopActive -- game loop running flag
bool g_GameLoopActive = true;

// 0xA8F900: g_SkirmishInitFlag -- skirmish initialized
bool g_SkirmishInitFlag = false;

// 0xB0BDB8: g_SkirmishSettings -- skirmish config pointer
int  g_SkirmishSettings = 0;

// 0xB0BD78: g_SkirmishFlag -- skirmish mode flag
bool g_SkirmishFlag = false;

// 0xA8EB80: byte_A8EB80 -- toolbar option flag
bool byte_A8EB80 = false;

// ============================================================
// MainGame stub functions
// ============================================================

// IDA 0x4A3C30 -- FadePalette (screen fade to/from black)
// IDA: creates dark palette, loops blending current->dark over a2 frames,
//      calls Surface::CreateSurfacePalette each frame, optional callback a3()
void FadePalette(int mode) {
    (void)mode;
    // Simplified: just sleep briefly to simulate fade timing
    // Full impl: DSurface::Lock -> palette blend -> Unlock -> Flip, ~400B of loop
    Sleep(16); // ~1 frame at 60fps
}

// 0x6C87F0: InitSkirmishSettings
void InitSkirmishSettings() {
// [IDA decompile]
int InitSkirmishSettings()
{
  int v1; // [esp+4h] [ebp-4h] BYREF

  dword_A8ED54[127989] = Timer::GetTicks(&v1);
  dword_A8ED54[127990] = v1;
  LOBYTE(dword_A8ED54[128024]) = 1;
  return v1;
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
}

// 0x69BAB0: WTFMode::Init (see game_loop.hpp struct)
// 0x69BB40: WTFMode::Shutdown (see game_loop.hpp struct)

// 0x48E0B0: DumpNetworkStats
void DumpNetworkStats() {
// [IDA decompile]
char __thiscall WTFMode::Init(_BYTE *this)
{
  char result; // al

  result = *(this + 12504);
  if ( !result )
  {
    result = MEMORY[0x87F7E8][539758];
    if ( LOBYTE(MEMORY[0x87F7E8][539758]) )
    {
      *(this + 12504) = 1;
      if ( dword_83ED20 == -1 )
        dword_83ED20 = MEMORY[0x87F7E8][539870];
      if ( !*(_DWORD *)this )
        MEMORY[0x87F7E8][539870] = 2;
      if ( !*(_BYTE *)(MEMORY[0x87F7E8][536210] + 13730) )
      {
        Scenario::ClearScreen();
        dword_A8ED54[123532] = dword_A8ED54[12] + 3;
      }
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)MEMORY[0x87F7E8][8086] + 28))(MEMORY[0x87F7E8][8086]) )
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)MEMORY[0x87F7E8][8086] + 24))(MEMORY[0x87F7E8][8086]);
      return EndBufferMixer(MEMORY[0x87E758], 0x4000);
    }
  }
  return result;
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
}

// 0x532100: ScreenSaver::Process (see game_loop.hpp struct)

// 0x5F0070: CleanupCampaignResources
void CleanupCampaignResources() {
// [IDA decompile]
char CleanupCampaignResources()
{
  int v0; // eax
  int v1; // edi
  int v2; // esi
  _BYTE v4[108]; // [esp+8h] [ebp-70h] BYREF
  __int16 v5; // [esp+74h] [ebp-4h]
  char v6; // [esp+76h] [ebp-2h]

  LOBYTE(v0) = MEMORY[0x87F7E8][538500];
  v4[0] = 0;
  if ( (MEMORY[0x87F7E8][538500] & 2) == 0 )
  {
    memset(v4, 0, sizeof(v4));
    v5 = 0;
    v6 = 0;
    v4[0] = 19;
    Stream::WriteBlock((int)&MEMORY[0x87F7E8][539810], (int)v4, 111, 0);
    Stream::WriteBlock((int)&MEMORY[0x87F7E8][539810], (int)v4, 111, 0);
    v1 = MEMORY[0x87F7E8][7894];
    if ( MEMORY[0x87F7E8][7892] != -1 )
      v1 += Timer::GetTicks(&MEMORY[0x87F7E8][7893]) - MEMORY[0x87F7E8][7892];
    while ( 1 )
    {
      LOBYTE(v0) = MEMORY[0x87F7E8][7892];
      v2 = MEMORY[0x87F7E8][7894];
      if ( MEMORY[0x87F7E8][7892] != -1 )
      {
        v0 = Timer::GetTicks(&MEMORY[0x87F7E8][7893]) - MEMORY[0x87F7E8][7892];
        v2 += v0;
      }
      if ( (unsigned int)(v2 - v1) >= 0x1E )
        break;
      Stream::ReadPacket((int)&MEMORY[0x87F7E8][539810]);
    }
  }
  return v0;
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
}

// 0x5DA720: Network::ShutdownInterface
void NetworkShutdownInterface() {
// [IDA decompile]
int Network::ShutdownInterface()
{
  int result; // eax

  LOWORD(MEMORY[0x87F7E8][538506]) = 0;
  if ( MEMORY[0x87F7E8][8080] )
    result = (**(int (__thiscall ***)(_DWORD, int))MEMORY[0x87F7E8][8080])(MEMORY[0x87F7E8][8080], 1);
  MEMORY[0x87F7E8][8080] = 0;
  return result;
}

/* ASM:
mov     ecx, ds:887628h
push    esi
xor     esi, esi
cmp     ecx, esi
mov     ds:0A8D610h, si
jz      short loc_5DA73A
mov     eax, [ecx]
push    1
call    dword ptr [eax]

loc_5DA73A:                             ; CODE XREF: Network__ShutdownInterface+12↑j
mov     ds:887628h, esi
pop     esi
retn
*/
}

// IDA: 0x6E6FF0 -- BuildingLoadQueue_FindObject
// These globals are used by all object constructors (Unit/Infantry/Aircraft/Building)
// for orderly post-construction initialization via binary search queue

// 0xB0E840: BuildingLoadQueue_Array -- array of (id, object*) pairs
void* BuildingLoadQueue_Array = nullptr;

// 0xB0E844: BuildingLoadQueue_Count -- number of entries in queue
int BuildingLoadQueue_Count = 0;

// 0xB0E848: BuildingLoadQueue_Capacity -- allocated capacity
int BuildingLoadQueue_Capacity = 0;

// 0xB0E84C: BuildingLoadQueue_Dirty -- queue needs resort
bool BuildingLoadQueue_Dirty = false;

// 0xB0E850: BuildingLoadQueue_Active -- cached active entry
void* BuildingLoadQueue_Active = nullptr;

// ============================================================
// GameFrameLoop (0x55D360) -- required global variables
// ============================================================

// 0xA8E9A0: WTFMode -- game loop control flag
int WTFMode = 0;

// 0xABCD58: byte_ABCD58 -- frame processing active flag
bool byte_ABCD58 = false;

// 0xA8E378: g_FramePresent_State -- frame presentation state
int g_FramePresent_State = 0;

// 0xA8B55C: dword_A8B55C -- frame start timestamp (timeGetTime)
int dword_A8B55C = 0;

// 0xA8B550: g_ScenarioState -- scenario state counter
int g_ScenarioState = 30;

// 0xA8B558: dword_A8B558 -- game speed setting (FPS)
int dword_A8B558 = 0;

// 0x887328: g_TacticalState -- tactical render state
int g_TacticalState = -1;

// 0xABCD04: dword_ABCE04 -- frame sync delay
int dword_ABCE04 = 0;

// 0x88732C: dword_88732C -- timer high-precision data
int dword_88732C = 0;

// 0x887330: dword_887330 -- frame interval (ms)
int dword_887330 = 33;

// 0x887348: dword_887348 -- frame timer start
int dword_887348 = 0;

// 0x88734C: dword_88734C -- frame timer value
int dword_88734C = 0;

// 0x887350: dwMilliseconds -- frame delay milliseconds
int dwMilliseconds = 2;

// 0xA8ED72: byte_A8ED72 -- high precision timer flag
bool byte_A8ED72 = false;

// 0xA8B560: ArgList -- argument list for timing
int ArgList = 0;

// 0xA8B564: dword_A8B564 -- frame counter
int dword_A8B564 = 0;

// 0xA83D14: dword_A83D14 -- theme queue state
int dword_A83D14 = 0;

// 0xA83D18: dword_A83D18 -- theme queue backup
int dword_A83D18 = 0;

// 0xA8EBA5: byte_A8EBA5 -- theme enabled flag
bool byte_A8EBA5 = false;

// 0xA8EC08: BombListClass_Array
void* BombListClass_Array = nullptr;

// 0xA8EC0C: dword_A8EC0C
int dword_A8EC0C = 0;

// 0xA8EC00: dword_A8EC00 -- mouse input flags
int dword_A8EC00 = 0;

// 0xA8EC04: dword_A8EC04 -- mouse input flags 2
int dword_A8EC04 = 0;

// 0x87F8DC: g_Cell_PositionLUT -- cell position lookup table
int g_Cell_PositionLUT = 0;

// 0x87F8E0: g_CellPositionOffset -- cell position offset
int g_CellPositionOffset = 0;

// 0xABCE14: dword_ABCE14 -- input flags
int dword_ABCE14 = 0;

// 0xB07784: dword_B07784 -- mouse update frame counter
int dword_B07784 = 0;

// ============================================================

// 0x5F9E80: Checksummer::HashString
int HashString(const char* str) {
// [IDA decompile]
int __thiscall Checksummer::HashString(char *Source)
{
  int v1; // ebp
  unsigned int v3; // kr04_4
  int v4; // ebx
  int v5; // esi
  int v6; // esi
  int v7; // ecx
  int i; // edx
  int v9; // ecx
  int j; // esi
  int k; // edi
  char v12; // si
  char v13; // dl
  char v14; // cl
  char v15; // cl
  char v16; // si
  char v17; // al
  int v18; // [esp+4h] [ebp-9Ch]
  char v19; // [esp+8h] [ebp-98h]
  unsigned int v20; // [esp+Ch] [ebp-94h] BYREF
  int v21; // [esp+10h] [ebp-90h]
  int v22; // [esp+14h] [ebp-8Ch]
  int v23; // [esp+18h] [ebp-88h]
  int v24; // [esp+1Ch] [ebp-84h]
  char Destination[128]; // [esp+20h] [ebp-80h] BYREF

  HIWORD(v1) = 0;
  if ( !Source )
    return 0;
  memset(Destination, 0xA5u, sizeof(Destination));
  strncpy(Destination, Source, 128);
  Destination[127] = 0;
  v3 = strlen(Destination) + 1;
  v4 = v3 - 1;
  v23 = v3 - 1;
  _strupr(Destination);
  v5 = 0;
  if ( (int)(v3 - 1) > 0 )
  {
    do
    {
      if ( !isgraph(Destination[v5]) )
        Destination[v5] = v5 % 26 + 65;
      ++v5;
    }
    while ( v5 < v4 );
  }
  if ( v4 < 16 || (v4 & 3) != 0 )
  {
    v6 = 16;
    if ( (((_BYTE)v4 + 3) & 0xFCu) > 0x10 )
      v6 = ((_BYTE)v4 + 3) & 0xFC;
    v7 = v3 - 1;
    if ( v4 < v6 )
    {
      do
      {
        Destination[v7] = (v7 + (Destination[v7 - v4] ^ 0x3F)) % 26 + 65;
        ++v7;
      }
      while ( v7 < v6 );
    }
    v4 = v7;
    Destination[v7] = 0;
    v23 = v7;
  }
  v20 = 0;
  v21 = 0;
  v22 = 0;
  Checksummer::Add_Buffer(&v20, (unsigned __int8 *)Destination, v4);
  _strrev(Destination);
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v18 = Checksummer::Add_Buffer(&v20, (unsigned __int8 *)Destination, v4);
  _strrev(Destination);
  for ( i = 0; i < v4; v18 = (v9 >> 8) | ((unsigned __int8)v9 << 24) )
  {
    v9 = (unsigned __int8)Destination[i] ^ v18;
    Destination[i++] = v18;
  }
  for ( j = 0; j < v4; ++j )
    Destination[j] = ~byte_832C0C[j & 7] & (Destination[j] | byte_832C14[j & 7]);
  for ( k = 0; k < v4; Destination[k - 1] = (v17 + v16) ^ v15 )
  {
    v12 = Destination[k];
    LOWORD(v1) = Destination[k + 2];
    v13 = v12 * v12;
    v14 = Destination[k + 3];
    v19 = 2 * Destination[k + 1];
    v24 = 2 * v1;
    v15 = v14 * v14;
    v16 = v12 * ((v12 * v12) ^ (2 * v1));
    k += 4;
    v17 = v1 * (v16 + (v19 ^ v15));
    Destination[k - 4] = v17 ^ v13;
    Destination[k - 3] = v17 ^ v24;
    v4 = v23;
    Destination[k - 2] = (v17 + v16) ^ v19;
  }
  v20 = 0;
  v21 = 0;
  v22 = 0;
  return Checksummer::Add_Buffer(&v20, (unsigned __int8 *)Destination, v4);
}

/* ASM:
Destination     = byte ptr -80h
var_7F          = byte ptr -7Fh
var_7E          = byte ptr -7Eh
var_7D          = byte ptr -7Dh
var_1           = byte ptr -1

sub     esp, 9Ch
mov     edx, ecx
push    ebp
xor     ebp, ebp
cmp     edx, ebp
jnz     short loc_5F9E99
xor     eax, eax
pop     ebp
add     esp, 9Ch
retn
; ---------------------------------------------------------------------------

loc_5F9E99:                             ; CODE XREF: Checksummer__HashString+D↑j
push    ebx
push    esi
push    edi
mov     ecx, 20h ; ' '
mov     eax, 0A5A5A5A5h
lea     edi, [esp+0ACh+Destination]
rep stosd
push    80h             ; Count
lea     eax, [esp+0B0h+Destination]
push    edx             ; Source
push    eax             ; Destination
call    _strncpy
lea     edi, [esp+0B8h+Destination]
or      ecx, 0FFFFFFFFh
xor     eax, eax
mov     [esp+0B8h+var_1], 0
repne scasb
not     ecx
dec     ecx
mov     ebx, ecx
lea     ecx, [esp+0B8h+Destination]
push    ecx             ; String
mov     [esp+0BCh+var_88], ebx
call    __strupr
add     esp, 10h
xor     esi, esi
cmp     ebx, ebp
jle     short loc_5F9F13

loc_5F9EEB:                             ; CODE XREF: Checksummer__HashString+91↓j
movsx   edx, [esp+esi+0ACh+Destination]
push    edx             ; C
call    _isgraph
add     esp, 4
test    eax, eax
jnz     short loc_5F9F0E
mov     eax, esi
mov     ecx, 1Ah
cdq
idiv    ecx
add     dl, 41h ; 'A'
mov     [esp+esi+0ACh+Destination], dl

loc_5F9F0E:                             ; CODE XREF: Checksummer__HashString+7B↑j
inc     esi
cmp     esi, ebx
jl      short loc_5F9EEB

loc_5F9F13:                             ; CODE XREF: Checksummer__HashString+69↑j
cmp     ebx, 10h
jl      short loc_5F9F1D
test    bl, 3
jz      short loc_5F9F63

loc_5F9F1D:                             ; CODE XREF: Checksummer__HashString+96↑j
lea     eax, [ebx+3]
mov     esi, 10h
and     eax, 0FCh
cmp     eax, esi
jle     short loc_5F9F30
mov     esi, eax

loc_5F9F30:                             ; CODE XREF: Checksummer__HashString+AC↑j
cmp     ebx, esi
mov     ecx, ebx
jge     short loc_5F9F58

loc_5F9F36:                             ; CODE XREF: Checksummer__HashString+D6↓j
mov     edx, ecx
mov     edi, 1Ah
sub     edx, ebx
movsx   eax, [esp+edx+0ACh+Destination]
xor     eax, 3Fh
add     eax, ecx
cdq
idiv    edi
add     dl, 41h ; 'A'
mov     [esp+ecx+0ACh+Destination], dl
inc     ecx
cmp     ecx, esi
jl      short loc_5F9F36

loc_5F9F58:                             ; CODE XREF: Checksummer__HashString+B4↑j
mov     ebx, ecx
mov     [esp+ecx+0ACh+Destination], 0
mov     [esp+0ACh+var_88], ebx

loc_5F9F63:                             ; CODE XREF: Checksummer__HashString+9B↑j
lea     eax, [esp+0ACh+Destination]
push    ebx
push    eax
lea     ecx, [esp+0B4h+var_94]
mov     [esp+0B4h+var_94], ebp
mov     [esp+0B4h+var_90], ebp
mov     [esp+0B4h+var_8C], ebp
call    Checksummer__Add_Buffer
lea     ecx, [esp+0ACh+Destination]
push    ecx             ; Str
call    __strrev
add     esp, 4
lea     edx, [esp+0ACh+Destination]
lea     ecx, [esp+0ACh+var_94]
mov     [esp+0ACh+var_94], ebp
push    ebx
push    edx
mov     [esp+0B4h+var_90], ebp
mov     [esp+0B4h+var_8C], ebp
call    Checksummer__Add_Buffer
mov     [esp+0ACh+var_9C], eax
lea     eax, [esp+0ACh+Destination]
push    eax             ; Str
call    __strrev
add     esp, 4
xor     edx, edx
cmp     ebx, ebp
jle     short loc_5F9FED

loc_5F9FBD:                             ; CODE XREF: Checksummer__HashString+16B↓j
mov     al, [esp+edx+0ACh+Destination]
mov     ecx, [esp+0ACh+var_9C]
mov     esi, eax
and     esi, 0FFh
xor     ecx, esi
xor     al, cl
mov     [esp+edx+0ACh+Destination], al
mov     eax, ecx
and     eax, 0FFh
shl     eax, 18h
sar     ecx, 8
or      eax, ecx
inc     edx
cmp     edx, ebx
mov     [esp+0ACh+var_9C], eax
jl      short loc_5F9FBD

loc_5F9FED:                             ; CODE XREF: Checksummer__HashString+13B↑j
xor     esi, esi
cmp     ebx, ebp
jle     short loc_5FA017

loc_5F9FF3:                             ; CODE XREF: Checksummer__HashString+195↓j
mov     dl, [esp+esi+0ACh+Destination]
mov     edi, esi
and     edi, 7
mov     cl, byte_832C14[edi]
or      cl, dl
mov     dl, byte_832C0C[edi]
not     dl
and     cl, dl
mov     [esp+esi+0ACh+Destination], cl
inc     esi
cmp     esi, ebx
jl      short loc_5F9FF3

loc_5FA017:                             ; CODE XREF: Checksummer__HashString+171↑j
xor     edi, edi
cmp     ebx, ebp
jle     short loc_5FA09C

loc_5FA01D:                             ; CODE XREF: Checksummer__HashString+218↓j
movsx   si, [esp+edi+0ACh+Destination]
movsx   ax, [esp+edi+0ACh+var_7F]
movsx   bp, [esp+edi+0ACh+var_7E]
mov     edx, esi
add     eax, eax
imul    edx, esi
movsx   cx, [esp+edi+0ACh+var_7D]
mov     [esp+0ACh+var_98], eax
lea     eax, [ebp+ebp+0]
mov     [esp+0ACh+var_84], eax
xor     eax, edx
mov     [esp+0ACh+var_9C], ecx
imul    eax, esi
imul    ecx, ecx
mov     ebx, [esp+0ACh+var_98]
mov     esi, eax
mov     eax, ecx
mov     [esp+0ACh+var_98], ebx
xor     eax, ebx
mov     ebx, esi
add     eax, esi
add     edi, 4
imul    eax, ebp
xor     edx, eax
add     ebx, eax
mov     byte ptr [esp+edi+0ACh+var_84], dl
mov     dl, byte ptr [esp+0ACh+var_84]
xor     dl, al
mov     al, byte ptr [esp+0ACh+var_98]
xor     al, bl
mov     byte ptr [esp+edi+0ACh+var_84+1], dl
xor     cl, bl
mov     ebx, [esp+0ACh+var_88]
mov     byte ptr [esp+edi+0ACh+var_84+2], al
mov     byte ptr [esp+edi+0ACh+var_84+3], cl
cmp     edi, ebx
mov     [esp+0ACh+var_9C], esi
jl      short loc_5FA01D
xor     ebp, ebp

loc_5FA09C:                             ; CODE XREF: Checksummer__HashString+19B↑j
lea     ecx, [esp+0ACh+Destination]
push    ebx
push    ecx
lea     ecx, [esp+0B4h+var_94]
mov     [esp+0B4h+var_94], ebp
mov     [esp+0B4h+var_90], ebp
mov     [esp+0B4h+var_8C], ebp
call    Checksummer__Add_Buffer
pop     edi
pop     esi
pop     ebx
pop     ebp
add     esp, 9Ch
retn
*/
}

// 0x734E60: GetStringCSF -- returns "TXT_KEY" as placeholder
const wchar_t* GetCSFString(const wchar_t* key, const char* file, int line) {
// [IDA decompile]
#72 *__fastcall GetStringCSF(#72 *Format, _DWORD *a2, const char *a3, int a4)
{
  int v6; // eax
  int v7; // esi

  if ( a2 )
    *a2 = 0;
  if ( !dword_A8ED54[145544] )
    return (#72 *)aFatalStringMan;
  v6 = bsearch(Format, (const void *)dword_A8ED54[145544], dword_A8ED54[145542], 40, _strcmpi);
  if ( v6 )
  {
    if ( a2 )
      *a2 = *(_DWORD *)(dword_A8ED54[145546] + 4 * *(_DWORD *)(v6 + 36));
    return *(#72 **)(dword_A8ED54[145545] + 4 * *(_DWORD *)(v6 + 36));
  }
  else
  {
    v7 = __2_YAPAXI_Z(520);
    swprintf((#72 *const)(v7 + 4), aMissingHs);
    Debug::Log();
    *(_DWORD *)v7 = dword_A8ED54[145549];
    dword_A8ED54[145549] = v7;
    return (#72 *)(v7 + 4);
  }
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
}

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
void* g_ObjectClass_CurrentCount = nullptr;

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
void* g_BinkMoviePlayer = nullptr;

// ============================================================
// BuildingClass::CalcDrawPos (0x480110) — required global variables
// ============================================================

// 0xA83D84: BuildingTypeClass_Array — pointer to array of BuildingTypeClass*
BuildingTypeClass** BuildingTypeClass_Array = nullptr;

// 0x886FA4: Map_VisibleRect — visible map Y coordinate (int32)
int32_t Map_VisibleRect = 0;

} // namespace gamemd
