// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct _VectorClass_PAVParticleClass {
    unsigned char __pad_0;  // 0x0
    char m_1[4];  // 0x1
    char __pad_5[3];  // 0x5
    int m_8;  // 0x8
    unsigned int u8_C;  // 0xC
    char __tail_10[4];  // 0x10
    AbstractClass * ParticleSystemClass__vt_02_(int a2, unsigned int * a3);
    int ParticleSystemClass_vt_04_free_(gamemd::_VectorClass_PAVParticleClass *a1, int * a2)  // G57w17h4 receiver-first (raw this=_VectorClass_PAVParticleClass);
    unsigned int * ParticleSystemClass_vt_00(_VectorClass_PAVParticleClass *Block, char a2);
    unsigned int ParticleSystemClass_vt_05_free_(gamemd::_VectorClass_PAVParticleClass *a1, int a2)  // G57w17h4 receiver-first (raw this=_VectorClass_PAVParticleClass);
    void ParticleSystemClass__vt_03_();
};

} // namespace gamemd
