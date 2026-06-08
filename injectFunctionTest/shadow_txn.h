// Page-level shadow memory transaction for RE function validation.
// Uses VirtualProtect + Vectored Exception Handler to capture ALL writes
// made by the RE version, then restores them before the original function runs.
//
// gamemd.exe is single-threaded -- no synchronization needed.
#pragma once
#include <windows.h>
#include <vector>
#include <cstdint>

namespace shadow {

void InstallVEH();
void RemoveVEH();

struct BackedPage {
    void*    page_addr;
    uint8_t  backup[4096];
};

class ShadowTransaction {
public:
    ShadowTransaction();
    ~ShadowTransaction();

    void Begin();
    void End();
    bool OnWriteViolation(void* fault_addr);
    int BackedPageCount() const { return static_cast<int>(m_backups.size()); }
    static ShadowTransaction* Current();
    static void EndCurrent();  // rollback + delete heap-allocated txn from PostProcess

private:
    void ProtectAllDataPages();
    void RestoreAllPages();
    bool IsPageBackedUp(void* page) const;
    void BackupPage(void* page);

    std::vector<BackedPage> m_backups;

    static uint8_t* s_data_start;
    static uint8_t* s_data_end;
    static int     s_total_pages;
};

} // namespace shadow
