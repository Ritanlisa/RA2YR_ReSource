#pragma once

#include <windows.h>
#include <cstdint>
#include <cstring>
#include <vector>
#include <string>

namespace gamemd {

// ============================================================================
// FileEntryClass — single file entry in save/load dialog (0x1BC = 444 bytes)
// IDA: embedded struct used by LoadOptions + LoadSaveDialog::FillList
// ============================================================================
struct FileEntryClass {
    wchar_t     EntryName[148];     // 0x000 — display name (CSF or filename)
    uint8_t     _pad_128[108];      // 0x128
    uint32_t    field_72;           // 0x120 (dword at +72) — map data value 1
    uint32_t    field_73;           // 0x124 (dword at +73) — map data value 2
    uint32_t    field_106;          // 0x1A8 (dword at +106) — scenario value
    uint32_t    field_107;          // 0x1AC (dword at +107) — save index
    uint32_t    field_108;          // 0x1B0 (dword at +108) — game time
    uint32_t    field_110;          // 0x1B8 (dword at +110) — game mode
    uint32_t    field_252;          // 0x3F0 (dword at +252) — filter flag
    uint8_t     field_436;          // 0x1B4 — is_available flag
    uint8_t     field_437;          // 0x1B5 — is_multiplayer flag
    char        FileName[128];      // 0x100 — raw filename on disk
    uint32_t    FileTime_lo;        // 0x1AC — FILETIME low (stored as dword pair)
    uint32_t    FileTime_hi;        // 0x1B0 — FILETIME high
};

// ============================================================================
// LoadOptions — save/load game dialog controller (~31 methods)
// 0x558740 (Construct), 0x558790 (Cleanup), 0x5587F0 (Run)
// vtable: 0x7ED2E4
// Used by: Options::DlgProc, CampaignMenu::DlgProc, MenuSelect, SkirmishMapGen
// ============================================================================
class LoadOptions {
public:
    LoadOptions(); // 0x558740
    ~LoadOptions();

    // --- Lifecycle ---
    // IDA 0x558740: Construct — init fields + DynamicVectorClass
    void Construct();  // 0x558740

    // IDA 0x558790: Cleanup — free entries, reset vector
    void Cleanup();  // 0x558790

    // IDA 0x55A0D0: vt00 (QueryInterface) — scoped destruction
    // wrapper: delegates to LoadOptions::QueryInterface at 0x55A0D0
    void VT00_Destroy(char free_self);

    // IDA 0x559EB0: ddtor (vt03) — DeleteFile wrapper
    // wrapper: delegates to LoadOptions::ddtor at 0x559EB0
    static bool DeleteSaveFile(const char* filename);

    // --- Operations ---
    // IDA 0x5587F0: Run — launch save/load dialog
    int Run();  // 0x5587F0

    // IDA 0x559C20: Check — scan directory for save files
    bool Check();  // 0x559C20

    // IDA 0x559D60: AddRef (vt01) — load saved game
    bool LoadGame(const char* filename);

    // IDA 0x559E40: Release (vt02) — save game
    bool SaveGame(const char* filename, const wchar_t* description);

    // IDA 0x559ED0: Read (vt04) — populate entry from file
    // wrapper: delegates to LoadOptions::Read at 0x559ED0
    bool ReadEntry(FileEntryClass* dest, int a2);

    // --- Vector management (compat wrappers for original DynamicVectorClass) ---
    // IDA 0x55A1F0: CopyItems — resize vector, copy existing entries
    bool CopyItems(uint32_t new_size, FileEntryClass** out_buffer = nullptr);  // 0x55A1F0

    // IDA 0x55A2A0: ClearBuffer — free entry memory, reset count
    void ClearBuffer();  // 0x55A2A0

    // IDA 0x55A2D0: FindItem — linear search by dword key
    int FindItem(const uint32_t* key);  // 0x55A2D0

    // IDA 0x55A310: PointerToIndex — compute index from pointer
    uint32_t PointerToIndex(FileEntryClass* ptr);  // 0x55A310

    // IDA 0x55A180: vt05 — pointer to index (compat alias)
    // wrapper: delegates to LoadOptions::vt05 at 0x55A180
    uint32_t VT05_PointerToIndex(FileEntryClass* ptr);

    // IDA 0x55A1A0: vt06 — get entry at index
    // wrapper: delegates to LoadOptions::vt06 at 0x55A1A0
    FileEntryClass* VT06_GetAt(int index);

    // IDA 0x55A1B0: vt01 (compat) — compare vector content
    // wrapper: delegates to LoadOptions::vt01 at 0x55A1B0
    bool VT01_Compare(const LoadOptions& other);

    // IDA 0x55A3E0: vt04 (compat) — find index of entry by key
    // wrapper: delegates to LoadOptions::vt04 at 0x55A3E0
    int VT04_FindByKey(const uint32_t* key);

    // IDA 0x55A330: vt02 (compat) — resize vector (like CopyItems)
    // wrapper: delegates to LoadOptions::vt02 at 0x55A330
    bool VT02_Resize(uint32_t new_size, FileEntryClass** out_buffer = nullptr);

    // --- Static helpers ---
    // IDA 0x55A050: vt05 — get "Load Mission" CSF string
    // wrapper: delegates to LoadOptions::Write at 0x55A050
    static const wchar_t* GetLoadMissionStr();

    // IDA 0x55A070: Seek (vt06) — get "Save Mission" CSF string
    // wrapper: delegates to LoadOptions::Seek at 0x55A070
    static const wchar_t* GetSaveMissionStr();

    // IDA 0x55A090: Open (vt07) — get "Delete Mission" CSF string
    // wrapper: delegates to LoadOptions::Open at 0x55A090
    static const wchar_t* GetDeleteMissionStr();

    // IDA 0x55A0B0: Close (vt08) — get "Game Was Saved" CSF string
    // wrapper: delegates to LoadOptions::Close at 0x55A0B0
    static const wchar_t* GetGameSavedStr();

    // IDA 0x681100: GetData — get pointer to data field (this + 264)
    // wrapper: delegates to LoadOptions::GetData at 0x681100
    char* GetDataPtr();

    // IDA 0x681120: GetFlag98 — get dword at offset 98
    uint32_t GetFlag98() const;  // 0x681120

    // IDA 0x681140: GetFlag99 — get dword at offset 99
    uint32_t GetFlag99() const;  // 0x681140

    // IDA 0x6812D0: GetFlag252 — get dword at offset 252
    uint32_t GetFlag252() const;  // 0x6812D0

    // --- Accessors ---
    // wrapper: delegates to LoadOptions::GetFlag252 at 0x6812D0
    uint32_t GetMode() const;
    void SetMode(uint32_t m);
    // unmatched: no callgraph reference and no git history record
    const char* GetExtension() const;
    // unmatched: no callgraph reference and no git history record
    void SetExtension(const char* ext);
    // wrapper: delegates to __setmode_lk at 0x7DC468
    uint32_t GetCount() const;
    // unmatched: no callgraph reference and no git history record
    FileEntryClass** GetEntries();
    // wrapper: delegates to __setmode_lk at 0x7DC468
    uint32_t GetCapacity() const;
    // design: no binary equivalent found in IDA
    uint32_t GetMaxEntries() const;

    // --- Vector destructor helpers ---
    // IDA 0x55A410: VectorClass dtor (dynamic)
    // wrapper: delegates to LoadOptions::Constructor_VectorClass_FileEntryClass___ at 0x55A410
    static void VectorClass_Dtor(void* block, char free_self);

    // IDA 0x55A460: VectorClass dtor (static)
    // wrapper: delegates to LoadOptions::vt00 at 0x55A460
    static void VectorClass_Dtor2(void* block, char free_self);

private:
    uint32_t        mode;           // 0x04 — 1=load, 2=save, 3=delete
    const char*     extension;      // 0x08 — file extension (e.g. "SAV")
    uint32_t        field_0C;       // 0x0C — dialog state flag
    uint32_t        max_entries;    // 0x10 — max entries (=2048)
    uint32_t        field_14;       // 0x14

    // DynamicVectorClass<FileEntryClass*> at +0x20:
    FileEntryClass** entries;       // 0x24 — entries array
    uint32_t        count;          // 0x28 — current count
    uint8_t         is_active;      // 0x2C — active flag
    uint8_t         owns_memory;    // 0x2D — owns the entries array
    uint8_t         _pad_2E[2];     // 0x2E — padding
    uint32_t        capacity;       // 0x30 — allocated capacity
    uint32_t        grow_step;      // 0x34 — grow step (=10)
};

// ============================================================================
// LoadSaveDialog::FillList (0x5596A0)
// Fills a Win32 ListBox with save/load game entries
// ============================================================================
// unmatched: no callgraph reference and no git history record
void LoadSaveDialog_FillList(LoadOptions* opts, HWND hWnd);

} // namespace gamemd
