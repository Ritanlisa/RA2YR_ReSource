#include "shadow_txn.h"
#include "tls_storage.h"
#include <cstdio>

namespace shadow {

uint8_t* ShadowTransaction::s_data_start = nullptr;
uint8_t* ShadowTransaction::s_data_end   = nullptr;
int      ShadowTransaction::s_total_pages = 0;

static PVOID g_veh_handle = nullptr;

static LONG CALLBACK VEHHandler(PEXCEPTION_POINTERS info)
{
    if (info->ExceptionRecord->ExceptionCode != EXCEPTION_ACCESS_VIOLATION)
        return EXCEPTION_CONTINUE_SEARCH;

    DWORD access = static_cast<DWORD>(info->ExceptionRecord->ExceptionInformation[0]);
    if (access != 1)
        return EXCEPTION_CONTINUE_SEARCH;

    void* fault_addr = reinterpret_cast<void*>(
        info->ExceptionRecord->ExceptionInformation[1]
    );

    auto* txn = ShadowTransaction::Current();
    if (!txn) {
        return EXCEPTION_CONTINUE_SEARCH;
    }

    if (fault_addr < ShadowTransaction::DataStart() || fault_addr >= ShadowTransaction::DataEnd()) {
        return EXCEPTION_CONTINUE_SEARCH;
    }

    txn->OnWriteViolation(fault_addr);
    return EXCEPTION_CONTINUE_EXECUTION;
}

void InstallVEH()
{
    g_veh_handle = AddVectoredExceptionHandler(1, VEHHandler);
}

void RemoveVEH()
{
    if (g_veh_handle) {
        RemoveVectoredExceptionHandler(g_veh_handle);
        g_veh_handle = nullptr;
    }
}

// ============================================================
// ShadowTransaction
// ============================================================

ShadowTransaction::ShadowTransaction() = default;

ShadowTransaction::~ShadowTransaction()
{
    if (m_backups.empty()) return;
    for (auto& bp : m_backups) {
        DWORD old;
        VirtualProtect(bp.page_addr, 4096, PAGE_READWRITE, &old);
        memcpy(bp.page_addr, bp.backup, 4096);
    }
}

void ShadowTransaction::Begin()
{
    auto* slot = GetSlot();
    if (!slot) return;
    slot->txn = this;
    ProtectAllDataPages();
}

void ShadowTransaction::End()
{
    RestoreAllPages();
    // Unprotect ALL pages that were protected by Begin()
    // (RestoreAllPages only handles backed-up pages; Begin() protects ALL)
    for (uintptr_t p = (uintptr_t)s_data_start; p < (uintptr_t)s_data_end; p += 4096) {
        DWORD old;
        VirtualProtect(reinterpret_cast<void*>(p), 4096, PAGE_READWRITE, &old);
    }
    auto* slot = GetSlot();
    if (slot) {
        slot->txn = nullptr;
    }
}

void ShadowTransaction::Discard()
{
    // Unprotect ALL pages WITHOUT restoring backups. For exception recovery:
    // the game has continued past the original function (via SEH/exception handler)
    // and may have already written to .data pages. Restoring backups would
    // introduce secondary corruption.
    for (uintptr_t p = (uintptr_t)s_data_start; p < (uintptr_t)s_data_end; p += 4096) {
        DWORD old;
        VirtualProtect(reinterpret_cast<void*>(p), 4096, PAGE_READWRITE, &old);
    }
    m_backups.clear();
    auto* slot = GetSlot();
    if (slot) {
        slot->txn = nullptr;
    }
}

ShadowTransaction* ShadowTransaction::Current()
{
    auto* slot = GetSlot();
    return slot ? slot->txn : nullptr;
}

void ShadowTransaction::EndCurrent()
{
    auto* txn = Current();
    if (!txn) return;
    txn->End();
    delete txn;
}

// ============================================================
// Page protection -- hardcoded .data bounds from IDA
// ============================================================

void ShadowTransaction::ProtectAllDataPages()
{
    // .data section bounds -- defaults for gamemd.exe (0x812000-0xB7A000, 872 pages)
    // Override via env vars: SHADOW_DATA_START / SHADOW_DATA_END
    uintptr_t DATA_START = 0x812000;
    uintptr_t DATA_END   = 0xB7A000;

    char buf[32];
    if (GetEnvironmentVariableA("SHADOW_DATA_START", buf, sizeof(buf)) > 0)
        DATA_START = (uintptr_t)strtoul(buf, nullptr, 16);
    if (GetEnvironmentVariableA("SHADOW_DATA_END", buf, sizeof(buf)) > 0)
        DATA_END = (uintptr_t)strtoul(buf, nullptr, 16);

    s_data_start = reinterpret_cast<uint8_t*>(DATA_START);
    s_data_end   = reinterpret_cast<uint8_t*>(DATA_END);

    int n = 0;
    for (uintptr_t p = DATA_START; p < DATA_END; p += 4096) {
        DWORD old;
        VirtualProtect(reinterpret_cast<void*>(p), 4096, PAGE_READONLY, &old);
        ++n;
    }
    s_total_pages = n;
}

// ============================================================
// Backup / restore
// ============================================================

bool ShadowTransaction::OnWriteViolation(void* fault_addr)
{
    uintptr_t page_addr = reinterpret_cast<uintptr_t>(fault_addr) & ~0xFFF;
    void* page = reinterpret_cast<void*>(page_addr);

    if (IsPageBackedUp(page))
        return true;

    BackupPage(page);

    DWORD old;
    VirtualProtect(page, 4096, PAGE_READWRITE, &old);

    return false;
}

bool ShadowTransaction::IsPageBackedUp(void* page) const
{
    for (const auto& bp : m_backups) {
        if (bp.page_addr == page) return true;
    }
    return false;
}

void ShadowTransaction::BackupPage(void* page)
{
    BackedPage bp;
    bp.page_addr = page;
    memcpy(bp.backup, page, 4096);
    m_backups.push_back(bp);
}

void ShadowTransaction::RestoreAllPages()
{
    for (auto& bp : m_backups) {
        DWORD old;
        VirtualProtect(bp.page_addr, 4096, PAGE_READWRITE, &old);
        memcpy(bp.page_addr, bp.backup, 4096);
        VirtualProtect(bp.page_addr, 4096, PAGE_READONLY, &old);
    }
}

} // namespace shadow
