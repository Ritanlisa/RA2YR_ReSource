// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct DroppodLocomotionClass {
// --- flat members (BEGIN) ---
    void* q004;  // 0x4
    void* q008;  // 0x8
    void* q108;  // 0x108
    void* q264;  // 0x264
    void* q5A4;  // 0x5A4
    void* q1444;  // 0x1444
    void* q1554;  // 0x1554
    void* q5188;  // 0x5188
    void* q5460;  // 0x5460
// --- flat members (END) ---
    int ILoco_Process(int a1);  // 0x4B5B70

    int ddtor(int a1, unsigned int * a2);  // G42.39 supply (method, not data)
    HRESULT BeginMove(int * a1, int * pStm);  // G42.39 supply (method, not data)
    HRESULT UpdateMovement(int * a1, int * pPStm, int a3);  // G42.39 supply (method, not data)
    int StubReturn48();  // G42.39 supply (method, not data)
    void * ProcessMove(void ** Block, char a2);  // G42.39 supply (method, not data)
};
} // namespace gamemd
