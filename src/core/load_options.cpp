#include "core/load_options.hpp"
#include "e4/classes/SaveLoadDialog_e4.hpp"
#include "core/logging.hpp"
#include <windows.h>
#include <cstdio>
#include <cstdlib>
#include <cwchar>
#include <algorithm>
#include "e4/classes/LoadOptions_e4.hpp"
struct FileEntryClass;  // fix_tu_missing_types
struct LoadOptions;  // fix_tu_missing_types
struct SaveLoadDialog;  // fix_tu_missing_types

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
extern int GameMode_Current[];
extern int MapClass_Instance;

// ============================================================================
// LoadOptions implementation
// ============================================================================

// IDA 0x558740: LoadOptions::Construct
void LoadOptions::Construct() {
    mode         = 0;
    extension    = (const char*)(0x829EA0); // off_829EA0
    q00C     = 0;
    max_entries  = 2048;
    q014     = 0;
    count        = 0;
    capacity     = 0;
    entries      = nullptr;
    is_active    = 1;
    owns_memory  = 0;
    grow_step    = 10;
}

// 0x558740
const char ** LoadOptions::GetExtension() {
  char *p_is_active; // ecx
  int v3; // eax

  p_is_active = (char *)(&this->is_active);
  *((unsigned int *)p_is_active + 1) = 0; /*0x558748*/
  *((unsigned int *)p_is_active + 2) = 0; /*0x55874b*/
  p_is_active[12] = 1; /*0x55874e*/
  p_is_active[13] = 0; /*0x558752*/
  *(unsigned int *)p_is_active = 0; /*0x558755*/
  *((unsigned int *)p_is_active + 5) = 10; /*0x55875b*/
  *((unsigned int *)p_is_active + 4) = 0; /*0x558762*/
  *(unsigned int *)this->__pad_4 = 0; /*0x558765*/
  this->field_0C = 0; /*0x558768*/
  this->field_14 = 0; /*0x55876b*/
  v3 = *(unsigned int *)p_is_active; /*0x55876e*/
  this->extension = 0; /*0x558770*/
  *(unsigned int *)&this->__pad_4[4] = &off_829EA0; /*0x558776*/
  this->max_entries = 2048; /*0x55877d*/
  (*(void (__thiscall **)(char *))(v3 + 12))(p_is_active); /*0x558784*/
  return &this->extension; /*0x558789*/
}
LoadOptions::~LoadOptions() {
    Cleanup();
}

// 0x558790
int LoadOptions::Cleanup() {
  int v2; // edi
  int v3; // edx
  char *p_is_active; // esi
  int result; // eax

  v2 = (char *)(0);
  for ( this->extension = 0; v2 < this->capacity; ++v2 ) /*0x5587a4*/
    operator delete((void *)(*(void **)(*(unsigned int *)&this->__pad_22[2] + 4 * v2))); /*0x5587ad*/
  v3 = *(unsigned int *)&this->is_active; /*0x5587bd*/
  p_is_active = (char *)(&this->is_active); /*0x5587c0*/
  (*(void (__thiscall **)(char *))(v3 + 12))(p_is_active); /*0x5587c5*/
  result = *((unsigned int *)p_is_active + 1); /*0x5587c8*/
  *(unsigned int *)p_is_active = 0; /*0x5587cb*/
  if ( result && p_is_active[13] ) /*0x5587d5*/
  {
    operator delete((void *)((void *)result)); /*0x5587db*/
    *((unsigned int *)p_is_active + 1) = 0; /*0x5587e3*/
  }
  p_is_active[13] = 0; /*0x5587e6*/
  *((unsigned int *)p_is_active + 2) = 0; /*0x5587e9*/
  return result; /*0x5587ec*/
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
  int result; // eax

  *(unsigned int *)this->__pad_4 = 1; /*0x5587f0*/
  this->field_0C = 0; /*0x5587f7*/
  (*((unsigned char *)&(result))) = ((SaveLoadDialog *)((SaveLoadDialog *)this))->DlgProc(); /*0x5587fe*/
  return result;
}
// 0x559c20
char LoadOptions::Check()
{
  char v2; // bl
  const char *v3; // eax
  HANDLE FirstFileA; // edi
  CHAR FileName[64]; // [esp+Ch] [ebp-33Ch] BYREF
  unsigned short v7[128]; // [esp+4Ch] [ebp-2FCh] BYREF
  char v8; // [esp+14Ch] [ebp-1FCh]
  int v9; // [esp+16Ch] [ebp-1DCh]
  int v10; // [esp+170h] [ebp-1D8h]
  int16_t v11; // [esp+174h] [ebp-1D4h]
  int v12; // [esp+1F4h] [ebp-154h]
  int v13; // [esp+1F8h] [ebp-150h]
  int v14; // [esp+1FCh] [ebp-14Ch]
  char v15; // [esp+200h] [ebp-148h]
  char v16; // [esp+201h] [ebp-147h]
  int v17; // [esp+204h] [ebp-144h]
  struct _WIN32_FIND_DATAA FindFileData; // [esp+208h] [ebp-140h] BYREF

  v2 = 0; /*0x559c2f*/
  v3 = *(const char **)&this->__pad_4[4]; /*0x559c31*/
  v9 = 0; /*0x559c34*/
  v10 = -1; /*0x559c42*/
  v12 = -1; /*0x559c4d*/
  v15 = 1; /*0x559c58*/
  v16 = 0; /*0x559c60*/
  v17 = 0; /*0x559c67*/
  v7[0] = 0; /*0x559c6e*/
  v8 = 0; /*0x559c73*/
  v11 = 0; /*0x559c7a*/
  v14 = 0; /*0x559c82*/
  v13 = 0; /*0x559c89*/
  sprintf(FileName, "*.%3s", v3); /*0x559c90*/
  FirstFileA = FindFirstFileA(FileName, &FindFileData); /*0x559cab*/
  if ( FirstFileA != (HANDLE)-1 ) /*0x559cb0*/
  {
    while ( (FindFileData.dwFileAttributes & 0x116) != 0 /*0x559cf7*/
         || !_strcmpi(FindFileData.cFileName, MultiByteStr)
         || (*((uint8_t (__thiscall **)(LoadOptions *, unsigned short *, struct _WIN32_FIND_DATAA *))this->extension + 4))(
              this,
              v7,
              &FindFileData) != 1
         || v16 )
    {
      if ( !FindNextFileA(FirstFileA, &FindFileData) ) /*0x559d0a*/
        goto LABEL_9; /*0x559d0a*/
    }
    v2 = 1; /*0x559d0e*/
  }
  LABEL_9:
  FindClose(FirstFileA); /*0x559d10*/
  return v2; /*0x559d17*/
}
// IDA 0x559E40: SaveGame (Release/vt02)
bool LoadOptions::SaveGame(const char* filename, const wchar_t* description) {
    char v2; // bl
    const char *v3; // eax
    HANDLE FirstFileA; // edi
    CHAR FileName[64]; // [esp+Ch] [ebp-33Ch] BYREF
    unsigned short v7[128]; // [esp+4Ch] [ebp-2FCh] BYREF
    char v8; // [esp+14Ch] [ebp-1FCh]
    int v9; // [esp+16Ch] [ebp-1DCh]
    int v10; // [esp+170h] [ebp-1D8h]
    int16_t v11; // [esp+174h] [ebp-1D4h]
    int v12; // [esp+1F4h] [ebp-154h]
    int v13; // [esp+1F8h] [ebp-150h]
    int v14; // [esp+1FCh] [ebp-14Ch]
    char v15; // [esp+200h] [ebp-148h]
    char v16; // [esp+201h] [ebp-147h]
    int v17; // [esp+204h] [ebp-144h]
    struct _WIN32_FIND_DATAA FindFileData; // [esp+208h] [ebp-140h] BYREF

    v2 = 0; /*0x559c2f*/
    v3 = *(const char **)&(&this->mode)[4]; /*0x559c31*/
    v9 = 0; /*0x559c34*/
    v10 = -1; /*0x559c42*/
    v12 = -1; /*0x559c4d*/
    v15 = 1; /*0x559c58*/
    v16 = 0; /*0x559c60*/
    v17 = 0; /*0x559c67*/
    v7[0] = 0; /*0x559c6e*/
    v8 = 0; /*0x559c73*/
    v11 = 0; /*0x559c7a*/
    v14 = 0; /*0x559c82*/
    v13 = 0; /*0x559c89*/
    sprintf(FileName, "*.%3s", v3); /*0x559c90*/
    FirstFileA = FindFirstFileA(FileName, &FindFileData); /*0x559cab*/
    if ( FirstFileA != (HANDLE)-1 ) /*0x559cb0*/
    {
      while ( (FindFileData.dwFileAttributes & 0x116) != 0 /*0x559cf7*/
           || !_strcmpi(FindFileData.cFileName, MultiByteStr)
           || (*((uint8_t (__thiscall **)(LoadOptions *, unsigned short *, struct _WIN32_FIND_DATAA *))this->extension + 4))(
                this,
                v7,
                &FindFileData) != 1
           || v16 )
      {
        if ( !FindNextFileA(FirstFileA, &FindFileData) ) /*0x559d0a*/
          goto LABEL_9; /*0x559d0a*/
      }
      v2 = 1; /*0x559d0e*/
    }
  LABEL_9:
    FindClose(FirstFileA); /*0x559d10*/
    return v2; /*0x559d17*/
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
char LoadOptions::CopyItems(int new_size, unsigned int * out_buffer) {
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( new_size ) /*0x55a1fc*/
  {
    (*((unsigned char *)&(this->m_C))) = 0; /*0x55a206*/
    if ( out_buffer ) /*0x55a20c*/
      v4 = out_buffer; /*0x55a222*/
    else
      v4 = (unsigned int *)operator new(4 * new_size); /*0x55a21e*/
    (*((unsigned char *)&(this->m_C))) = 1; /*0x55a226*/
    if ( v4 ) /*0x55a22a*/
    {
      if ( *(unsigned int *)&this->m_1[3] ) /*0x55a235*/
      {
        m_8 = (int)(this->m_8);
        if ( new_size < m_8 ) /*0x55a241*/
          m_8 = new_size; /*0x55a243*/
        for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * i - 4) ) /*0x55a249*/
          ++i; /*0x55a24e*/
        if ( (((unsigned char *)&(this->m_C))[1]) ) /*0x55a25b*/
        {
          operator delete((void *)(*(void **)&this->m_1[3])); /*0x55a266*/
          *(unsigned int *)&this->m_1[3] = 0; /*0x55a26e*/
        }
      }
      *(unsigned int *)&this->m_1[3] = (unsigned int)(v4); /*0x55a277*/
      this->m_8 = (unsigned int *)(new_size); /*0x55a27f*/
      (((unsigned char *)&(this->m_C))[1]) = out_buffer == 0; /*0x55a282*/
      return 1; /*0x55a288*/
    }
    else
    {
      return 0; /*0x55a22f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVFileEntryClass *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x55a292*/
    return 1; /*0x55a298*/
  }
}
// 0x55a2a0
void LoadOptions::ClearBuffer() {
  if ( *(unsigned int *)&this->m_1[3] && (((unsigned char *)&(this->m_C))[1]) ) /*0x55a2ad*/
  {
    operator delete((void *)(*(void **)&this->m_1[3])); /*0x55a2b3*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x55a2bb*/
  }
  (((unsigned char *)&(this->m_C))[1]) = 0; /*0x55a2be*/
  this->m_8 = 0; /*0x55a2c1*/
}
// 0x55a2d0
int LoadOptions::FindItem(FileEntryClass* const* a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

  if ( !(*((unsigned char *)&(this->m_C))) ) /*0x55a2d0*/
    return 0; /*0x55a2d8*/
  m_8 = (int)(this->m_8); /*0x55a2de*/
  result = 0; /*0x55a2e1*/
  if ( m_8 <= 0 ) /*0x55a2e5*/
    return -1; /*0x55a2fc*/
  for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2; ++i ) /*0x55a2eb*/
  {
    if ( ++result >= m_8 ) /*0x55a2fa*/
      return -1; /*0x55a2fa*/
  }
  return result; /*0x55a2da*/
}
// 0x55a310
uint32_t LoadOptions::PointerToIndex(FileEntryClass* ptr) {
  if ( (*((unsigned char *)&(this->m_C))) ) /*0x55a310*/
    return (unsigned int)(ptr - *(unsigned int *)&this->m_1[3]) >> 2; /*0x55a325*/
  else
    return 0; /*0x55a317*/
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
bool LoadOptions::VT02_Resize(uint32_t newSize, FileEntryClass** out_buffer) {
    bool result = CopyItems(newSize, (unsigned int *)out_buffer);
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
             opts->GetExtension() ? opts->GetExtension() : (char *)"SAV");

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
        entry->q194  = (uint32_t)(-1);
        entry->q198  = (uint32_t)(-1);
        entry->q19C = (uint32_t)(-1);

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


#include "core/load_options.hpp"
#include "e4/e4_globals_decls.hpp"
// [w18j2] C2065 function supply (raw-evidenced)


// --- LoadOptions ---

char* LoadOptions::GetDataPtr() { return (char*)(this) + 264; }
// 0x681120
uint32_t LoadOptions::GetFlag98() const
{
  return this->u32_188; /*0x681126*/
}
// 0x681140
uint32_t LoadOptions::GetFlag99() const
{
  return this->u32_18C; /*0x681146*/
}
// 0x6812d0
uint32_t LoadOptions::GetFlag252() const
{
  return this->u32_3F0; /*0x6812d6*/
}
uint32_t LoadOptions::GetMode() const { return m; }
void LoadOptions::SetMode(uint32_t m) { m = m; }
const char* LoadOptions::GetExtension() const { return ext; }
void LoadOptions::SetExtension(const char* ext) { ext = ext; }
uint32_t LoadOptions::GetCount() const { return count; }
FileEntryClass** LoadOptions::GetEntries() { return entries; }
uint32_t LoadOptions::GetCapacity() const { return capacity; }
uint32_t LoadOptions::GetMaxEntries() const { return max_entries; }

