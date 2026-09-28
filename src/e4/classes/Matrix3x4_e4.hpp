// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Matrix3x4 {
// --- flat members (BEGIN) ---
    float m_Data;  // 0x0
    void* q004;  // 0x4
    void* q008;  // 0x8
    void* q00C;  // 0xC
    void* q010;  // 0x10
    void* q014;  // 0x14
    void* q018;  // 0x18
    void* q01C;  // 0x1C
    void* q020;  // 0x20
    void* q024;  // 0x24
    void* q028;  // 0x28
    void* q02C;  // 0x2C
// --- flat members (END) ---
    int Identity();
    unsigned int * TransformCell(AbstractClass * aP1, AbstractClass * aP2);
    void Translate(ParticleSystemClass * aP1);
};

} // namespace gamemd
