#pragma once
#include <windows.h>
#include <cstdint>

namespace shadow {

class ShadowTransaction;

struct ShadowSlot {
    uint32_t original_ret_addr;  // +0x00
    uint32_t re_result_eax;      // +0x04
    uint32_t re_result_edx;      // +0x08
    uint32_t hook_addr;          // +0x0C
    ShadowTransaction* txn;      // +0x10
};

extern ShadowSlot  g_slot_storage;
extern ShadowSlot* g_current_slot;
extern DWORD       g_owner_tid;
extern int         g_re_depth;
extern int         g_orphan_count;

inline ShadowSlot* GetSlot() { return g_current_slot; }
inline bool IsOwnerThread() { return GetCurrentThreadId() == g_owner_tid; }

} // namespace shadow
