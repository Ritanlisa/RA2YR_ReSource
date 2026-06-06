#include "shadow_txn.h"
#include "tls_storage.h"
#include <cstdio>
#include <psapi.h>

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
    if (access != 1) // write violation only
        return EXCEPTION_CONTINUE_SEARCH;

    void* fault_addr = reinterpret_cast<void*>(
        info->ExceptionRecord->ExceptionInformation[1]
    );

    auto* txn = ShadowTransaction::Current();
    if (!txn) {
        // No transaction active — just unprotect
        MEMORY_BASIC_INFORMATION mbi;
        VirtualQuery(fault_addr, &mbi, sizeof(mbi));
        DWORD old;
        VirtualProtect(mbi.BaseAddress, mbi.RegionSize, PAGE_READWRITE, &old);
        return EXCEPTION_CONTINUE_EXECUTION;
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
// ShadowTransaction implementation
// ============================================================

ShadowTransaction::ShadowTransaction() = default;

ShadowTransaction::~ShadowTransaction()
{
    if (m_backups.empty()) return;
    // Emergency cleanup: restore all pages
    for (auto& bp : m_backups) {
        DWORD old;
        VirtualProtect(bp.page_addr, 4096, PAGE_READWRITE, &old);
        memcpy(bp.page_addr, bp.backup, 4096);
    }
}

void ShadowTransaction::Begin()
{
    auto* slot = GetSlot();
    slot->transaction = this;
    slot->in_shadow   = true;

    ProtectAllDataPages();
}

void ShadowTransaction::End()
{
    RestoreAllPages();

    auto* slot = GetSlot();
    slot->transaction = nullptr;
    slot->in_shadow   = false;
}

ShadowTransaction* ShadowTransaction::Current()
{
    return static_cast<ShadowTransaction*>(GetSlot()->transaction);
}

// ============================================================
// Page protection
// ============================================================

void ShadowTransaction::ProtectAllDataPages()
{
    if (s_data_start) {
        // Already discovered .data bounds — re-protect only
        for (uint8_t* p = s_data_start; p < s_data_end; p += 4096) {
            DWORD old;
            VirtualProtect(p, 4096, PAGE_READONLY, &old);
        }
        return;
    }

    // Discover gamemd.exe's .data section by scanning writable pages
    // in the gamemd.exe process space (0x400000+)
    HMODULE hMod = GetModuleHandleA(nullptr);
    MODULEINFO mi;
    GetModuleInformation(GetCurrentProcess(), hMod, &mi, sizeof(mi));

    uint8_t* base = static_cast<uint8_t*>(mi.lpBaseOfDll);
    uint8_t* end  = base + mi.SizeOfImage;

    MEMORY_BASIC_INFORMATION mbi;
    uint8_t* addr = base;

    int protected_pages = 0;

    while (addr < end) {
        VirtualQuery(addr, &mbi, sizeof(mbi));

        if (mbi.State == MEM_COMMIT &&
            (mbi.Protect & (PAGE_READWRITE | PAGE_WRITECOPY | PAGE_EXECUTE_READWRITE))) {

            // Don't protect stack or heap pages
            // Stack: check if this page contains a stack pointer
            if (mbi.Type == MEM_PRIVATE && !(mbi.Protect & PAGE_EXECUTE_READWRITE)) {
                // Skip private non-executable pages (likely stack/heap)
                // but include them if they're in the image range (global data in .data/.bss)
                if (addr >= base + 0x1000 && addr < end) {
                    // Image range writable pages → protect
                } else {
                    addr = static_cast<uint8_t*>(mbi.BaseAddress) + mbi.RegionSize;
                    continue;
                }
            }

            void* page = mbi.BaseAddress;
            SIZE_T size = mbi.RegionSize;

            // Record first .data page for optimization
            if (!s_data_start) s_data_start = static_cast<uint8_t*>(page);

            for (SIZE_T off = 0; off < size; off += 4096) {
                DWORD old;
                VirtualProtect(static_cast<uint8_t*>(page) + off, 4096, PAGE_READONLY, &old);
                ++protected_pages;
            }
        }

        addr = static_cast<uint8_t*>(mbi.BaseAddress) + mbi.RegionSize;
    }

    s_data_end   = static_cast<uint8_t*>(mbi.BaseAddress) + mbi.RegionSize; // approx
    s_total_pages = protected_pages;
}

// ============================================================
// Backup / restore
// ============================================================

bool ShadowTransaction::OnWriteViolation(void* fault_addr)
{
    // Align to page boundary
    uintptr_t page_addr = reinterpret_cast<uintptr_t>(fault_addr) & ~0xFFF;
    void* page = reinterpret_cast<void*>(page_addr);

    if (IsPageBackedUp(page))
        return true; // already handled

    BackupPage(page);

    // Make writable so RE can continue
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
        // Re-protect for next shadow execution
        VirtualProtect(bp.page_addr, 4096, PAGE_READONLY, &old);
    }
}

} // namespace shadow
