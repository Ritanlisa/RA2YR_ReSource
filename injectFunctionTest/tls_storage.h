#pragma once
#include <windows.h>
#include <cstdint>

namespace shadow {

class ShadowTransaction;

struct ShadowSlot {
    static const int MAX_DEPTH = 16;
    // Slot stack (push on hook entry, pop in PostProcStub)
    uint32_t ret_addr_stack[MAX_DEPTH];   // +0x00 (64 bytes)
    uint32_t hook_addr_stack[MAX_DEPTH];  // +0x40 (64 bytes)
    int32_t  depth;                        // +0x80
    // RE results
    uint32_t re_result_eax;               // +0x84
    uint32_t re_result_edx;               // +0x88
    // Active transaction (or nullptr)
    ShadowTransaction* txn;               // +0x8C
};

extern DWORD       g_owner_tid;
extern int         g_re_depth;
extern int         g_orphan_count;

} // namespace shadow

// Global scope for ASM access (no C++ name mangling)
extern "C" { extern void* g_current_slot; }

namespace shadow {
inline ShadowSlot* GetSlot() { return (ShadowSlot*)g_current_slot; }
inline bool         IsOwnerThread() { return GetCurrentThreadId() == g_owner_tid; }
} // namespace shadow
