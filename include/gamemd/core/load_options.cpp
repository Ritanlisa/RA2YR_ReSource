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
    extension    = reinterpret_cast<const char*>(0x829EA0); // off_829EA0
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

LoadOptions::LoadOptions() {
    Construct();
}

LoadOptions::~LoadOptions() {
    Cleanup();
}

// IDA 0x558790: LoadOptions::Cleanup
void LoadOptions::Cleanup() {
    // Free all entries
    for (uint32_t i = 0; i < count; ++i) {
        if (entries && entries[i]) {
            delete entries[i];
            entries[i] = nullptr;
        }
    }
    // Free the array if we own it
    if (entries && owns_memory) {
        delete[] entries;
        entries = nullptr;
    }
    owns_memory = 0;
    count       = 0;
    capacity    = 0;
    is_active   = 0;
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
int LoadOptions::Run() {
    mode     = 1;
    field_0C = 0;
    // Calls SaveLoadDialog::DlgProc(this) — stub for now
    return 0;
}

// IDA 0x559C20: Check — scan for save files matching extension
bool LoadOptions::Check() {
    char pattern[64];
    snprintf(pattern, sizeof(pattern), "*.%s", extension ? extension : "SAV");

    WIN32_FIND_DATAA fd;
    HANDLE hFind = FindFirstFileA(pattern, &fd);
    if (hFind == INVALID_HANDLE_VALUE)
        return false;

    bool found = false;
    do {
        // Skip directories/system files
        if (fd.dwFileAttributes & (FILE_ATTRIBUTE_HIDDEN | FILE_ATTRIBUTE_SYSTEM |
                                    FILE_ATTRIBUTE_TEMPORARY | FILE_ATTRIBUTE_OFFLINE))
            continue;
        // Skip "SAVEGAME.NET"
        if (_stricmp(fd.cFileName, "SAVEGAME.NET") == 0)
            continue;
        found = true;
        break;
    } while (FindNextFileA(hFind, &fd));

    FindClose(hFind);
    return found;
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

    const char* filename = reinterpret_cast<const char*>(a2 + 44);
    if (_stricmp(filename, "SAVEGAME.NET") == 0)
        return false;

    // Stub: populate after GameState validation
    (void)dest;
    return false; // PENDING: full GameState::Reset + deserialize
}

// IDA 0x55A1F0: CopyItems — resize vector, preserve existing entries
bool LoadOptions::CopyItems(uint32_t new_size, FileEntryClass** out_buffer) {
    if (new_size == 0) {
        Cleanup();
        return true;
    }

    is_active = 0;
    FileEntryClass** new_buf = (out_buffer) ? out_buffer : new FileEntryClass*[new_size];
    is_active = 1;
    if (!new_buf) return false;

    // Copy existing entries (min of old count and new size)
    uint32_t copy_count = (count < new_size) ? count : new_size;
    for (uint32_t i = 0; i < copy_count; ++i) {
        new_buf[i] = entries[i];
    }

    // Null out remaining slots
    for (uint32_t i = copy_count; i < new_size; ++i) {
        new_buf[i] = nullptr;
    }

    // Free old buffer if we own it
    if (entries && owns_memory) {
        delete[] entries;
    }

    entries     = new_buf;
    count       = new_size;
    owns_memory = (out_buffer == nullptr);
    return true;
}

// IDA 0x55A2A0: ClearBuffer
void LoadOptions::ClearBuffer() {
    if (entries && owns_memory) {
        delete[] entries;
        entries = nullptr;
    }
    owns_memory = 0;
    count       = 0;
}

// IDA 0x55A2D0: FindItem — linear search by first dword
int LoadOptions::FindItem(const uint32_t* key) {
    if (!is_active) return 0;
    if (count == 0) return -1;

    for (uint32_t i = 0; i < count; ++i) {
        if (entries[i] && *reinterpret_cast<const uint32_t*>(entries[i]) == *key) {
            return static_cast<int>(i);
        }
    }
    return -1;
}

// IDA 0x55A310: PointerToIndex
uint32_t LoadOptions::PointerToIndex(FileEntryClass* ptr) {
    if (!is_active) return 0;
    return static_cast<uint32_t>(reinterpret_cast<char*>(ptr) - reinterpret_cast<char*>(entries)) / sizeof(FileEntryClass*);
}

// IDA 0x55A180: vt05 — PointerToIndex compat
uint32_t LoadOptions::VT05_PointerToIndex(FileEntryClass* ptr) {
    if (!is_active) return 0;
    return static_cast<uint32_t>(reinterpret_cast<char*>(ptr) - reinterpret_cast<char*>(entries)) / sizeof(FileEntryClass*);
}

// IDA 0x55A1A0: vt06 — get entry at index
FileEntryClass* LoadOptions::VT06_GetAt(int index) {
    if (index < 0 || static_cast<uint32_t>(index) >= count || !entries)
        return nullptr;
    return entries[index];
}

// IDA 0x55A1B0: vt01 (compare) — compare two vectors
bool LoadOptions::VT01_Compare(const LoadOptions& other) {
    if (count != other.count) return false;
    if (count == 0) return true;

    const uint32_t* my_data = reinterpret_cast<const uint32_t*>(entries);
    const uint32_t* ot_data = reinterpret_cast<const uint32_t*>(other.entries);

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
        if (entries[i] && *reinterpret_cast<const uint32_t*>(entries[i]) == *key)
            return static_cast<int>(i);
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
    char* base = static_cast<char*>(block);
    char** data_ptr = reinterpret_cast<char**>(base + 0x04);
    if (*data_ptr && base[0x0D]) { // offset +13 = owns_memory byte
        delete[] *data_ptr;
        *data_ptr = nullptr;
    }
    base[0x0D] = 0;
    *reinterpret_cast<uint32_t*>(base + 0x08) = 0; // count = 0
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
        entry->field_72  = static_cast<uint32_t>(-1);
        entry->field_73  = static_cast<uint32_t>(-1);
        entry->field_106 = static_cast<uint32_t>(-1);

        // Set display name from filename
        int len = static_cast<int>(strlen(fd.cFileName));
        // Remove extension for display
        const char* dot = strrchr(fd.cFileName, '.');
        int name_len = dot ? static_cast<int>(dot - fd.cFileName) : len;
        if (name_len > 147) name_len = 147;
        for (int j = 0; j < name_len; ++j) {
            entry->EntryName[j] = static_cast<wchar_t>(fd.cFileName[j]);
        }
        entry->EntryName[name_len] = L'\0';

        found.push_back(entry);
    } while (FindNextFileA(hFind, &fd));
    FindClose(hFind);

    // Sort entries by write time (newest first)
    std::sort(found.begin(), found.end(),
              [](const FileEntryClass* a, const FileEntryClass* b) {
                  uint64_t ta = (static_cast<uint64_t>(a->FileTime_hi) << 32) | a->FileTime_lo;
                  uint64_t tb = (static_cast<uint64_t>(b->FileTime_hi) << 32) | b->FileTime_lo;
                  return ta > tb; // newest first
              });

    // Populate the LoadOptions vector
    uint32_t num = static_cast<uint32_t>(found.size());
    if (num > 0) {
        FileEntryClass** buf = new FileEntryClass*[num > 10 ? num : 10];
        for (uint32_t i = 0; i < num; ++i) {
            buf[i] = found[i];
        }
        // Set LoadOptions fields directly
        *reinterpret_cast<uint32_t*>(reinterpret_cast<char*>(opts) + 0x24) = reinterpret_cast<uint32_t>(buf);
        *reinterpret_cast<uint32_t*>(reinterpret_cast<char*>(opts) + 0x28) = num;
        *reinterpret_cast<uint8_t*>(reinterpret_cast<char*>(opts) + 0x2D) = 1;
    }

    // Send LB_RESETCONTENT + fill listbox
    if (hWnd) {
        SendMessageA(hWnd, 0x0184, 0, 0); // LB_RESETCONTENT
        for (uint32_t i = 0; i < num; ++i) {
            if (!found[i]->field_437) { // not multiplayer only
                LRESULT idx = SendMessageA(hWnd, 0x04CD, 0, reinterpret_cast<LPARAM>(found[i])); // LB_ADDSTRING
                SendMessageA(hWnd, 0x019A, idx, reinterpret_cast<LPARAM>(found[i])); // LB_SETITEMDATA
            }
        }
    }
}

} // namespace gamemd

#include "core/load_options.hpp"

namespace gamemd {

// --- LoadOptions ---

char* LoadOptions::GetDataPtr() { return reinterpret_cast<char*>(this) + 264; }
uint32_t LoadOptions::GetFlag98() const { return *reinterpret_cast<const uint32_t*>(reinterpret_cast<const char*>(this) + 0x188); }
uint32_t LoadOptions::GetFlag99() const { return *reinterpret_cast<const uint32_t*>(reinterpret_cast<const char*>(this) + 0x18C); }
uint32_t LoadOptions::GetFlag252() const { return *reinterpret_cast<const uint32_t*>(reinterpret_cast<const char*>(this) + 0x3F0); }
uint32_t LoadOptions::GetMode() const { return mode; }
void LoadOptions::SetMode(uint32_t m) { mode = m; }
const char* LoadOptions::GetExtension() const { return extension; }
void LoadOptions::SetExtension(const char* ext) { extension = ext; }
uint32_t LoadOptions::GetCount() const { return count; }
FileEntryClass** LoadOptions::GetEntries() { return entries; }
uint32_t LoadOptions::GetCapacity() const { return capacity; }
uint32_t LoadOptions::GetMaxEntries() const { return max_entries; }

} // namespace gamemd
