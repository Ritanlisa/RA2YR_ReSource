// TLS storage for shadow execution framework
// Uses fs:[0x18] (TIB Arbitrary User Pointer) -- Syringe uses fs:[0x14],
// so we avoid collision by using the next available slot.
//
// Layout of fs:[0x18]:
//   +0x00: original_ret_addr (caller's return address, hijacked)
//   +0x04: re_result_eax (EAX from RE version)
//   +0x08: re_result_edx (EDX from RE version, used for 64-bit returns)
//   +0x0C: ShadowTransaction* (active transaction or nullptr)
//   +0x10: bool in_shadow_execution
#pragma once
#include <cstdint>

namespace shadow {

struct ShadowSlot {
    uint32_t original_ret_addr;
    uint32_t re_result_eax;
    uint32_t re_result_edx;
    uint32_t hook_addr;          // current hook address (for logging)
    void*    transaction;
    bool     in_shadow;
};

inline void InitTLS() {
    auto* slot = reinterpret_cast<ShadowSlot*>(__readfsdword(0x18));
    if (!slot) {
        slot = new ShadowSlot{};
        __writefsdword(0x18, reinterpret_cast<uint32_t>(slot));
    }
    slot->transaction = nullptr;
    slot->in_shadow = false;
}

inline ShadowSlot* GetSlot() {
    return reinterpret_cast<ShadowSlot*>(__readfsdword(0x18));
}

} // namespace shadow
