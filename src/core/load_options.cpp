#include "core/load_options.hpp"
#include "core/logging.hpp"
#include <windows.h>
#include <cstdio>
#include <cstdlib>
#include <cwchar>
#include <algorithm>

namespace gamemd {

// ============================================================================
// Helpers
// ============================================================================

// IDA 0x734E60: GetStringCSF — stub for build (returns empty string)
static const wchar_t* GetStringCSF(const char* key, int, const char*, int) {
    (void)key;
    // In real game, this reads from CSF (string table). Return empty for now.
    static const wchar_t empty[] = L"";
    return empty;
}

// IDA 0x67FD20: sub_67FD20 — validates save file (stub)
static bool sub_67FD20(const char* filename, int gameState) {
    (void)filename; (void)gameState;
    return true; // stub
}

// IDA 0x681090: ReadPointerFromECX3 (stub)
static int ReadPointerFromECX3(int gameState) {
    return 0; // stub
}

// IDA 0x6810C0: type_info raw_name (stub)
static const wchar_t* raw_name_type_info(void* type_info) {
    (void)type_info;
    return L"";
}

// IDA 0x67CEF0: SaveScenarioClassGame_AdjustMPSaveFileName (stub)
static bool SaveScenarioClassGame_AdjustMPSaveFileName(
    const char* filename, const wchar_t* desc, int flag) {
    (void)filename; (void)desc; (void)flag;
    return true; // stub
}

// IDA 0x623230: CreateMessageBox (stub)
static HWND CreateMessageBox(LPARAM text, int, int) {
    (void)text;
    return nullptr; // stub
}

// Global externs referenced in decompilations
extern int g_FramePresent_State;
extern int g_BounceClassInit;
extern int GameMode_Current[];
extern int WWMouseClass_Instance;
extern int g_CommandExecState;
extern const char g_GameSetupBuffer[];
extern int dword_83D560;
extern int ScenarioClass_Instance;
extern int HouseClass_Player;
extern int MapClass_Instance;
extern int g_UIManager;
extern int SwizzleManagerClass_Instance;

// ============================================================================
// LoadOptions implementation
// ============================================================================

// IDA 0x558740: LoadOptions::Construct
void LoadOptions::Construct() {
    mode         = 0;
    extension    = (const char*)(0x829EA0); // off_829EA0
    field_0C     = 0;
    max_entries  = 2048;
    field_14     = 0;
    count        = 0;
    capacity     = 0;
    entries      = nullptr;
    is_active    = 1;
    owns_memory  = 0;
    grow_step    = 10;
}

// 0x558740
LoadOptions::LoadOptions() {
    Construct();
}

LoadOptions::~LoadOptions() {
    Cleanup();
}

// IDA 0x558790: LoadOptions::Cleanup
// 0x558790
void LoadOptions::Cleanup() {
// [IDA decompile]
void __thiscall LoadOptions_Cleanup(_DWORD *this)
{
  int v2; // edi
  int v3; // edx
  _DWORD *v4; // esi
  void *v5; // eax

  v2 = 0;
  for ( *this = &LoadOptionsClass::`vftable'; v2 < *(this + 12); ++v2 )
    __3_YAXPAX_Z(*(void **)(*(this + 9) + 4 * v2));
  v3 = *(this + 8);
  v4 = this + 8;
  (*(void (__thiscall **)(_DWORD *))(v3 + 12))(v4);
  v5 = (void *)v4[1];
  *v4 = &VectorClass<FileEntryClass *>::`vftable';
  if ( v5 && *((_BYTE *)v4 + 13) )
  {
    __3_YAXPAX_Z(v5);
    v4[1] = 0;
  }
  *((_BYTE *)v4 + 13) = 0;
  v4[2] = 0;
}

/* ASM:
push    ebx
push    esi
mov     esi, ecx
push    edi
xor     ebx, ebx
xor     edi, edi
mov     dword ptr [esi], offset ??_7LoadOptionsClass@@6B@ ; const LoadOptionsClass::`vftable'
mov     eax, [esi+30h]
cmp     eax, ebx
jle     short loc_5587BD

loc_5587A6:                             ; CODE XREF: LoadOptions__Cleanup+2B↓j
mov     eax, [esi+24h]
mov     ecx, [eax+edi*4]
push    ecx             ; Block
call    ??3_YAXPAX_Z
mov     eax, [esi+30h]
add     esp, 4
inc     edi
cmp     edi, eax
jl      short loc_5587A6

loc_5587BD:                             ; CODE XREF: LoadOptions__Cleanup+14↑j
mov     edx, [esi+20h]
add     esi, 20h ; ' '
mov     ecx, esi
call    dword ptr [edx+0Ch]
mov     eax, [esi+4]
mov     dword ptr [esi], offset ??_7?$VectorClass@PAVFileEntryClass@@@@6B@ ; const VectorClass<FileEntryClass *>::`vftable'
cmp     eax, ebx
jz      short loc_5587E6
cmp     [esi+0Dh], bl
jz      short loc_5587E6
push    eax             ; Block
call    ??3_YAXPAX_Z
add     esp, 4
mov     [esi+4], ebx

loc_5587E6:                             ; CODE XREF: LoadOptions__Cleanup+43↑j
; LoadOptions__Cleanup+48↑j
mov     [esi+0Dh], bl
mov     [esi+8], ebx
pop     edi
pop     esi
pop     ebx
retn
*/
}

// IDA 0x55A0D0: VT00_Destroy (QueryInterface destructor)
void LoadOptions::VT00_Destroy(char free_self) {
    Cleanup();
    if (free_self & 1) {
        delete this;
    }
}

// IDA 0x559EB0: ddtor — DeleteFile wrapper
bool LoadOptions::DeleteSaveFile(const char* filename) {
    return DeleteFileA(filename) != FALSE;
}

// IDA 0x5587F0: Run — launch save/load dialog
// 0x5587f0
int LoadOptions::Run() {
// [IDA decompile]
bool __thiscall LoadOptions::Run(const char **this)
{
  *(this + 1) = (const char *)1;
  *(this + 3) = 0;
  return SaveLoadDialog::DlgProc(this);
}

/* ASM:
mov     dword ptr [ecx+4], 1
mov     dword ptr [ecx+0Ch], 0
jmp     SaveLoadDialog__DlgProc
*/
}

// IDA 0x559C20: Check — scan for save files matching extension
// 0x559c20
bool LoadOptions::Check() {
// [IDA decompile]
char __thiscall LoadOptions::Check(const char **this)
{
  char v2; // bl
  const char *v3; // eax
  int v4; // edi
  char FileName[64]; // [esp+Ch] [ebp-33Ch] BYREF
  _WORD v7[128]; // [esp+4Ch] [ebp-2FCh] BYREF
  char v8; // [esp+14Ch] [ebp-1FCh]
  int v9; // [esp+16Ch] [ebp-1DCh]
  int v10; // [esp+170h] [ebp-1D8h]
  __int16 v11; // [esp+174h] [ebp-1D4h]
  int v12; // [esp+1F4h] [ebp-154h]
  int v13; // [esp+1F8h] [ebp-150h]
  int v14; // [esp+1FCh] [ebp-14Ch]
  char v15; // [esp+200h] [ebp-148h]
  char v16; // [esp+201h] [ebp-147h]
  int v17; // [esp+204h] [ebp-144h]
  _WORD FindFileData[160]; // [esp+208h] [ebp-140h] BYREF

  v2 = 0;
  v3 = *(this + 2);
  v9 = 0;
  v10 = -1;
  v12 = -1;
  v15 = 1;
  v16 = 0;
  v17 = 0;
  v7[0] = 0;
  v8 = 0;
  v11 = 0;
  v14 = 0;
  v13 = 0;
  sprintf(FileName, "*.%3s", v3);
  v4 = ((int (__stdcall *)(char *, _WORD *))FindFirstFileA)(FileName, FindFileData);
  if ( v4 != -1 )
  {
    while ( (FindFileData[0] & 0x116) != 0
         || !_strcmpi(&FindFileData[22], MultiByteStr)
         || (*((unsigned __int8 (__thiscall **)(const char **, _WORD *, _WORD *))*this + 4))(this, v7, FindFileData) != 1
         || v16 )
    {
      if ( !((int (__stdcall *)(int, _WORD *))FindNextFileA)(v4, FindFileData) )
        goto LABEL_9;
    }
    v2 = 1;
  }
LABEL_9:
  ((void (__stdcall *)(int))FindClose)(v4);
  return v2;
}

/* ASM:
FileName        = OMOTestDerived ptr -33Ch
var_2FC         = word ptr -2FCh
var_1FC         = byte ptr -1FCh
var_1DC         = dword ptr -1DCh
var_1D8         = dword ptr -1D8h
var_1D4         = word ptr -1D4h
var_154         = dword ptr -154h
var_150         = dword ptr -150h
var_14C         = dword ptr -14Ch
var_148         = byte ptr -148h
var_147         = byte ptr -147h
var_144         = dword ptr -144h
FindFileData    = byte ptr -140h

sub     esp, 33Ch
push    ebx
push    esi
mov     esi, ecx
push    edi
lea     ecx, [esp+348h+FileName]
xor     ebx, ebx
mov     eax, [esi+8]
mov     [esp+348h+var_1DC], ebx
push    eax
push    offset a3s      ; "*.%3s"
push    ecx             ; Buffer
mov     [esp+354h+var_1D8], 0FFFFFFFFh
mov     [esp+354h+var_154], 0FFFFFFFFh
mov     [esp+354h+var_148], 1
mov     [esp+354h+var_147], bl
mov     [esp+354h+var_144], ebx
mov     [esp+354h+var_2FC], bx
mov     [esp+354h+var_1FC], bl
mov     [esp+354h+var_1D4], bx
mov     [esp+354h+var_14C], ebx
mov     [esp+354h+var_150], ebx
call    _sprintf
add     esp, 0Ch
lea     edx, [esp+348h+FindFileData]
lea     eax, [esp+348h+FileName]
push    edx             ; lpFindFileData
push    eax             ; lpFileName
call    ds:__imp_FindFirstFileA
mov     edi, eax
cmp     edi, 0FFFFFFFFh
jz      short loc_559D10

loc_559CB2:                             ; CODE XREF: LoadOptions__Check+EC↓j
test    dword ptr [esp+348h+FindFileData], 116h
jnz     short loc_559CF9
lea     ecx, [esp+348h+FindFileData+2Ch]
push    offset MultiByteStr ; "SAVEGAME.NET"
push    ecx             ; void *
call    __strcmpi
add     esp, 8
test    eax, eax
jz      short loc_559CF9
mov     edx, [esi]
lea     eax, [esp+348h+FindFileData]
lea     ecx, [esp+348h+var_2FC]
push    eax
push    ecx
mov     ecx, esi
call    dword ptr [edx+10h]
cmp     al, 1
jnz     short loc_559CF9
cmp     [esp+348h+var_147], bl
jz      short loc_559D0E

loc_559CF9:                             ; CODE XREF: LoadOptions__Check+9D↑j
; LoadOptions__Check+B6↑j ...
lea     edx, [esp+348h+FindFileData]
push    edx             ; lpFindFileData
push    edi             ; hFindFile
call    ds:__imp_FindNextFileA
test    eax, eax
jz      short loc_559D10
jmp     short loc_559CB2
; ---------------------------------------------------------------------------

loc_559D0E:                             ; CODE XREF: LoadOptions__Check+D7↑j
mov     bl, 1

loc_559D10:                             ; CODE XREF: LoadOptions__Check+90↑j
; LoadOptions__Check+EA↑j
push    edi             ; hFindFile
call    ds:__imp_FindClose
pop     edi
mov     al, bl
pop     esi
pop     ebx
add     esp, 33Ch
retn
*/
}

// IDA 0x559D60: LoadGame (AddRef/vt01)
bool LoadOptions::LoadGame(const char* filename) {
    // In original: creates "Loading" message box, calls Game::LoadSaved
    // For now: return false (stub)
    (void)filename;
    return false; // PENDING: Game::LoadSaved integration
}

// IDA 0x559E40: SaveGame (Release/vt02)
bool LoadOptions::SaveGame(const char* filename, const wchar_t* description) {
    // In original: creates "Saving" message box, calls SaveScenarioClassGame
    (void)filename; (void)description;
    return false; // PENDING: full save pipeline
}

// IDA 0x559ED0: Read (vt04) — populate FileEntry from game state
bool LoadOptions::ReadEntry(FileEntryClass* dest, int a2) {
    if (!dest && !a2) return false;

    const char* filename = (const char*)(a2 + 44);
    if (_stricmp(filename, "SAVEGAME.NET") == 0)
        return false;

    // Stub: populate after GameState validation
    (void)dest;
    return false; // PENDING: full GameState::Reset + deserialize
}

// IDA 0x55A1F0: CopyItems — resize vector, preserve existing entries
// 0x55a1f0
bool LoadOptions::CopyItems(uint32_t new_size, FileEntryClass** out_buffer) {
// [IDA decompile]
char __thiscall LoadOptions::CopyItems(void *this, int a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 )
  {
    *((_BYTE *)this + 12) = 0;
    if ( a3 )
      v4 = a3;
    else
      v4 = (_DWORD *)__2_YAPAXI_Z(4 * a2);
    *((_BYTE *)this + 12) = 1;
    if ( v4 )
    {
      if ( *((_DWORD *)this + 1) )
      {
        v6 = *((_DWORD *)this + 2);
        if ( a2 < v6 )
          v6 = a2;
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(*((_DWORD *)this + 1) + 4 * i - 4) )
          ++i;
        if ( *((_BYTE *)this + 13) )
        {
          __3_YAXPAX_Z(*((void **)this + 1));
          *((_DWORD *)this + 1) = 0;
        }
      }
      *((_DWORD *)this + 1) = v4;
      *((_DWORD *)this + 2) = a2;
      *((_BYTE *)this + 13) = a3 == 0;
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 12))(this);
    return 1;
  }
}

/* ASM:
push    ebx             ; TODO: classify (grp=blit, sz=0xae)
push    ebp
mov     ebp, [esp+8+arg_0]
push    esi
test    ebp, ebp
push    edi
mov     esi, ecx
jz      loc_55A28E
mov     ebx, [esp+10h+arg_4]
mov     byte ptr [esi+0Ch], 0
test    ebx, ebx
jnz     short loc_55A222
lea     eax, ds:0[ebp*4]
push    eax             ; Size
call    ??2_YAPAXI_Z
add     esp, 4
mov     edi, eax
jmp     short loc_55A224
; ---------------------------------------------------------------------------

loc_55A222:                             ; CODE XREF: LoadOptions__CopyItems+1C↑j
mov     edi, ebx

loc_55A224:                             ; CODE XREF: LoadOptions__CopyItems+30↑j
test    edi, edi
mov     byte ptr [esi+0Ch], 1
jnz     short loc_55A235
pop     edi
pop     esi
pop     ebp
xor     al, al
pop     ebx
retn    8
; ---------------------------------------------------------------------------

loc_55A235:                             ; CODE XREF: LoadOptions__CopyItems+3A↑j
mov     eax, [esi+4]
test    eax, eax
jz      short loc_55A275
mov     ecx, [esi+8]
cmp     ebp, ecx
jge     short loc_55A245
mov     ecx, ebp

loc_55A245:                             ; CODE XREF: LoadOptions__CopyItems+51↑j
xor     eax, eax
test    ecx, ecx
jle     short loc_55A25B

loc_55A24B:                             ; CODE XREF: LoadOptions__CopyItems+69↓j
mov     edx, [esi+4]
inc     eax
cmp     eax, ecx
mov     edx, [edx+eax*4-4]
mov     [edi+eax*4-4], edx
jl      short loc_55A24B

loc_55A25B:                             ; CODE XREF: LoadOptions__CopyItems+59↑j
mov     al, [esi+0Dh]
test    al, al
jz      short loc_55A275
mov     eax, [esi+4]
push    eax             ; Block
call    ??3_YAXPAX_Z
add     esp, 4
mov     dword ptr [esi+4], 0

loc_55A275:                             ; CODE XREF: LoadOptions__CopyItems+4A↑j
; LoadOptions__CopyItems+70↑j
xor     eax, eax
mov     [esi+4], edi
test    ebx, ebx
setz    al
mov     [esi+8], ebp
mov     [esi+0Dh], al
pop     edi
pop     esi
pop     ebp
mov     al, 1
pop     ebx
retn    8
; ---------------------------------------------------------------------------

loc_55A28E:                             ; CODE XREF: LoadOptions__CopyItems+C↑j
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+0Ch]
pop     edi
pop     esi
pop     ebp
mov     al, 1
pop     ebx
retn    8
*/
}

// IDA 0x55A2A0: ClearBuffer
// 0x55a2a0
void LoadOptions::ClearBuffer() {
// [IDA decompile]
void __thiscall LoadOptions::sub_55A2A0(int this)
{
  if ( *(_DWORD *)(this + 4) && *(_BYTE *)(this + 13) )
  {
    __3_YAXPAX_Z(*(void **)(this + 4));
    *(_DWORD *)(this + 4) = 0;
  }
  *(_BYTE *)(this + 13) = 0;
  *(_DWORD *)(this + 8) = 0;
}

/* ASM:
push    ebx             ; TODO: classify (grp=blit, sz=0x27)
push    esi
mov     esi, ecx
xor     ebx, ebx
mov     eax, [esi+4]
cmp     eax, ebx
jz      short loc_55A2BE
cmp     [esi+0Dh], bl
jz      short loc_55A2BE
push    eax             ; Block
call    ??3_YAXPAX_Z
add     esp, 4
mov     [esi+4], ebx

loc_55A2BE:                             ; CODE XREF: LoadOptions__ClearBuffer+B↑j
; LoadOptions__ClearBuffer+10↑j
mov     [esi+0Dh], bl
mov     [esi+8], ebx
pop     esi
pop     ebx
retn
*/
}

// IDA 0x55A2D0: FindItem — linear search by first dword
// 0x55a2d0
int LoadOptions::FindItem(const uint32_t* key) {
// [IDA decompile]
int __thiscall LoadOptions::sub_55A2D0(int this, _DWORD *a2)
{
  int result; // eax
  int v3; // edx
  _DWORD *i; // ecx

  if ( !*(_BYTE *)(this + 12) )
    return 0;
  v3 = *(_DWORD *)(this + 8);
  result = 0;
  if ( v3 <= 0 )
    return -1;
  for ( i = *(_DWORD **)(this + 4); *i != *a2; ++i )
  {
    if ( ++result >= v3 )
      return -1;
  }
  return result;
}

/* ASM:
mov     al, [ecx+0Ch]   ; TODO: classify (grp=blit, sz=0x33)
push    esi
test    al, al
jnz     short loc_55A2DE
xor     eax, eax
pop     esi
retn    4
; ---------------------------------------------------------------------------

loc_55A2DE:                             ; CODE XREF: LoadOptions__FindItem+6↑j
mov     edx, [ecx+8]
xor     eax, eax
test    edx, edx
jle     short loc_55A2FC
mov     esi, [esp+4+arg_0]
mov     ecx, [ecx+4]
mov     esi, [esi]

loc_55A2F0:                             ; CODE XREF: LoadOptions__FindItem+2A↓j
cmp     [ecx], esi
jz      short loc_55A2FF
inc     eax
add     ecx, 4
cmp     eax, edx
jl      short loc_55A2F0

loc_55A2FC:                             ; CODE XREF: LoadOptions__FindItem+15↑j
or      eax, 0FFFFFFFFh

loc_55A2FF:                             ; CODE XREF: LoadOptions__FindItem+22↑j
pop     esi
retn    4
*/
}

// IDA 0x55A310: PointerToIndex
// 0x55a310
uint32_t LoadOptions::PointerToIndex(FileEntryClass* ptr) {
    if (!is_active) return 0;
    return (uint32_t)((char*)(ptr) - (char*)(entries)) / sizeof(FileEntryClass*);
}

// IDA 0x55A180: vt05 — PointerToIndex compat
uint32_t LoadOptions::VT05_PointerToIndex(FileEntryClass* ptr) {
    if (!is_active) return 0;
    return (uint32_t)((char*)(ptr) - (char*)(entries)) / sizeof(FileEntryClass*);
}

// IDA 0x55A1A0: vt06 — get entry at index
FileEntryClass* LoadOptions::VT06_GetAt(int index) {
    if (index < 0 || (uint32_t)(index) >= count || !entries)
        return nullptr;
    return entries[index];
}

// IDA 0x55A1B0: vt01 (compare) — compare two vectors
bool LoadOptions::VT01_Compare(const LoadOptions& other) {
    if (count != other.count) return false;
    if (count == 0) return true;

    const uint32_t* my_data = (const uint32_t*)(entries);
    const uint32_t* ot_data = (const uint32_t*)(other.entries);

    for (uint32_t i = 0; i < count; ++i) {
        if (my_data[i] != ot_data[i])
            return false;
    }
    return true;
}

// IDA 0x55A3E0: vt04 — find index by key
int LoadOptions::VT04_FindByKey(const uint32_t* key) {
    if (count == 0) return -1;

    for (uint32_t i = 0; i < count; ++i) {
        if (entries[i] && *(const uint32_t*)(entries[i]) == *key)
            return (int)(i);
    }
    return -1;
}

// IDA 0x55A330: vt02 — resize (same as CopyItems with capacity update)
bool LoadOptions::VT02_Resize(uint32_t new_size, FileEntryClass** out_buffer) {
    bool result = CopyItems(new_size, out_buffer);
    if (result && capacity < count)
        capacity = count;
    return result;
}

// IDA 0x55A050: GetLoadMissionStr
const wchar_t* LoadOptions::GetLoadMissionStr() {
    return GetStringCSF("GUI:LoadMissionMenu", 0, "D:\\ra2mdpost\\LoadDlg.CPP", 1216);
}

// IDA 0x55A070: GetSaveMissionStr
const wchar_t* LoadOptions::GetSaveMissionStr() {
    return GetStringCSF("GUI:SaveMissionMenu", 0, "D:\\ra2mdpost\\LoadDlg.CPP", 1222);
}

// IDA 0x55A090: GetDeleteMissionStr
const wchar_t* LoadOptions::GetDeleteMissionStr() {
    return GetStringCSF("GUI:DeleteMissionMenu", 0, "D:\\ra2mdpost\\LoadDlg.CPP", 1228);
}

// IDA 0x55A0B0: GetGameSavedStr
const wchar_t* LoadOptions::GetGameSavedStr() {
    return GetStringCSF("TXT_GAME_WAS_SAVED", 0, "D:\\ra2mdpost\\LoadDlg.CPP", 1234);
}

// IDA 0x55A410: VectorClass_Dtor (dynamic heap)
void LoadOptions::VectorClass_Dtor(void* block, char free_self) {
    char* base = (char*)(block);
    char** data_ptr = (char**)(base + 0x04);
    if (*data_ptr && base[0x0D]) { // offset +13 = owns_memory byte
        delete[] *data_ptr;
        *data_ptr = nullptr;
    }
    base[0x0D] = 0;
    *(uint32_t*)(base + 0x08) = 0; // count = 0
    if (free_self & 1) {
        delete[] base;
    }
}

// IDA 0x55A460: VectorClass_Dtor2 (static)
void LoadOptions::VectorClass_Dtor2(void* block, char free_self) {
    VectorClass_Dtor(block, free_self); // Same implementation
}

// ============================================================================
// LoadSaveDialog::FillList (0x5596A0) — STUB
// This is a complex Win32 ListBox fill function. Full implementation requires
// the entire save/load dialog pipeline (CSF strings, Win32 SendMessage, etc.)
// ============================================================================
void LoadSaveDialog_FillList(LoadOptions* opts, HWND hWnd) {
    if (!opts) return;

    // Free existing entries
    for (uint32_t i = 0; i < opts->GetCount(); ++i) {
        FileEntryClass** entries = opts->GetEntries();
        if (entries && entries[i]) {
            delete entries[i];
            entries[i] = nullptr;
        }
    }

    // Scan directory for save files
    char pattern[64];
    snprintf(pattern, sizeof(pattern), "*.%s",
             opts->GetExtension() ? opts->GetExtension() : "SAV");

    WIN32_FIND_DATAA fd;
    HANDLE hFind = FindFirstFileA(pattern, &fd);
    if (hFind == INVALID_HANDLE_VALUE) {
        // Send LB_RESETCONTENT
        if (hWnd) SendMessageA(hWnd, 0x0184, 0, 0);
        return;
    }

    // Collect matching files
    std::vector<FileEntryClass*> found;
    do {
        // Skip hidden/system/temp/offline files
        if (fd.dwFileAttributes & (FILE_ATTRIBUTE_HIDDEN | FILE_ATTRIBUTE_SYSTEM |
                                    FILE_ATTRIBUTE_TEMPORARY | FILE_ATTRIBUTE_OFFLINE))
            continue;

        FileEntryClass* entry = new FileEntryClass();
        memset(entry, 0, sizeof(FileEntryClass));

        // Copy filename
        strncpy(entry->FileName, fd.cFileName, 127);
        entry->FileName[127] = '\0';

        // Copy file times
        entry->FileTime_lo = fd.ftLastWriteTime.dwLowDateTime;
        entry->FileTime_hi = fd.ftLastWriteTime.dwHighDateTime;

        // Set default values
        entry->field_436 = 1;  // is_available
        entry->field_437 = 0;  // is_multiplayer
        entry->field_72  = (uint32_t)(-1);
        entry->field_73  = (uint32_t)(-1);
        entry->field_106 = (uint32_t)(-1);

        // Set display name from filename
        int len = (int)(strlen(fd.cFileName));
        // Remove extension for display
        const char* dot = strrchr(fd.cFileName, '.');
        int name_len = dot ? (int)(dot - fd.cFileName) : len;
        if (name_len > 147) name_len = 147;
        for (int j = 0; j < name_len; ++j) {
            entry->EntryName[j] = (wchar_t)(fd.cFileName[j]);
        }
        entry->EntryName[name_len] = L'\0';

        found.push_back(entry);
    } while (FindNextFileA(hFind, &fd));
    FindClose(hFind);

    // Sort entries by write time (newest first)
    std::sort(found.begin(), found.end(),
              [](const FileEntryClass* a, const FileEntryClass* b) {
                  uint64_t ta = ((uint64_t)(a->FileTime_hi) << 32) | a->FileTime_lo;
                  uint64_t tb = ((uint64_t)(b->FileTime_hi) << 32) | b->FileTime_lo;
                  return ta > tb; // newest first
              });

    // Populate the LoadOptions vector
    uint32_t num = (uint32_t)(found.size());
    if (num > 0) {
        FileEntryClass** buf = new FileEntryClass*[num > 10 ? num : 10];
        for (uint32_t i = 0; i < num; ++i) {
            buf[i] = found[i];
        }
        // Set LoadOptions fields directly
        *(uint32_t*)((char*)(opts) + 0x24) = (uint32_t)(buf);
        *(uint32_t*)((char*)(opts) + 0x28) = num;
        *(uint8_t*)((char*)(opts) + 0x2D) = 1;
    }

    // Send LB_RESETCONTENT + fill listbox
    if (hWnd) {
        SendMessageA(hWnd, 0x0184, 0, 0); // LB_RESETCONTENT
        for (uint32_t i = 0; i < num; ++i) {
            if (!found[i]->field_437) { // not multiplayer only
                LRESULT idx = SendMessageA(hWnd, 0x04CD, 0, (LPARAM)(found[i])); // LB_ADDSTRING
                SendMessageA(hWnd, 0x019A, idx, (LPARAM)(found[i])); // LB_SETITEMDATA
            }
        }
    }
}

} // namespace gamemd

#include "core/load_options.hpp"

namespace gamemd {

// --- LoadOptions ---

char* LoadOptions::GetDataPtr() { return (char*)(this) + 264; }
uint32_t LoadOptions::GetFlag98() const { return *(const uint32_t*)((const char*)(this) + 0x188); }
uint32_t LoadOptions::GetFlag99() const { return *(const uint32_t*)((const char*)(this) + 0x18C); }
uint32_t LoadOptions::GetFlag252() const { return *(const uint32_t*)((const char*)(this) + 0x3F0); }
uint32_t LoadOptions::GetMode() const { return mode; }
void LoadOptions::SetMode(uint32_t m) { mode = m; }
const char* LoadOptions::GetExtension() const { return extension; }
void LoadOptions::SetExtension(const char* ext) { extension = ext; }
uint32_t LoadOptions::GetCount() const { return count; }
FileEntryClass** LoadOptions::GetEntries() { return entries; }
uint32_t LoadOptions::GetCapacity() const { return capacity; }
uint32_t LoadOptions::GetMaxEntries() const { return max_entries; }

} // namespace gamemd
