// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorCursor;  // fix_fwd_type_supply

struct COMClass {
// --- flat members (BEGIN) ---
    bool IsInitialized;  // 0x12
    int Count;  // 0x16
// --- flat members (END) ---
    VectorCursor * disconnectPoint(unsigned int * Block, char a2);
    void * lockServer(rc_ptr_base * Block, char a2);
    static int RegisterAll(COMClass * aP1);
    unsigned int *m_1;  // G42.33 b3 flat-carrier vocab ([3] 索引基)
    unsigned int m_8;  // G42.35 C9 flat-carrier vocab (0x7656a5)
    int RegisterAll();
    unsigned int * releaseInterface();  // 0x765C70 G42.33 b3 supplied-body sync
    unsigned int *  marshalInterface(char a2);  // 0x767C50
    int ReleaseRef();  // G42.33 b3 supplied-body sync
    unsigned int * initInterface(char a2);  // G42.33 b3 supplied-body sync
    int queryProperty();  // G42.33 b3 supplied-body sync
    unsigned int setProperty(int a2);  // G42.33 b3 supplied-body sync
    char * createInstance(char a2);  // G42.33 b3 supplied-body sync
    unsigned int * getInterface(char a2);  // G42.33 b3 supplied-body sync
    void ** coUninitialize(char a2);  // G42.33 b3 supplied-body sync

    unsigned char __pad_01A;  // X10 supply (csp_canon_members)
    int q018;  // X10 supply (member_lookup)
    int q01C;  // X10 supply (member_lookup)
    int q020;  // X10 supply (member_lookup)
    int q024;  // X10 supply (member_lookup)
    int q028;  // X10 supply (member_lookup)
    int q02C;  // X10 supply (member_lookup)
    int q030;  // X10 supply (member_lookup)
    int q034;  // X10 supply (member_lookup)
    int q038;  // X10 supply (member_lookup)
    int q03C;  // X10 supply (member_lookup)
    int q040;  // X10 supply (member_lookup)
    int q044;  // X10 supply (member_lookup)
    int q048;  // X10 supply (member_lookup)
    int q04C;  // X10 supply (member_lookup)
    int q050;  // X10 supply (member_lookup)
    unsigned int u32_100;  // X10 supply (member_lookup)
    unsigned int u32_104;  // X10 supply (member_lookup)
    unsigned int u32_108;  // X10 supply (member_lookup)
    unsigned int u32_10C;  // X10 supply (member_lookup)
    unsigned int u32_110;  // X10 supply (member_lookup)
    unsigned int u32_114;  // X10 supply (member_lookup)
    unsigned int u32_118;  // X10 supply (member_lookup)
    unsigned int u32_11C;  // X10 supply (member_lookup)
    unsigned int u32_120;  // X10 supply (member_lookup)
    unsigned int u32_124;  // X10 supply (member_lookup)
    unsigned int u32_128;  // X10 supply (member_lookup)
    unsigned int u32_12C;  // X10 supply (member_lookup)
    unsigned int u32_130;  // X10 supply (member_lookup)
    unsigned int u32_134;  // X10 supply (member_lookup)
    unsigned int u32_138;  // X10 supply (member_lookup)
    unsigned int u32_13C;  // X10 supply (member_lookup)
    unsigned int u32_140;  // X10 supply (member_lookup)
    unsigned int u32_144;  // X10 supply (member_lookup)
    unsigned int u32_148;  // X10 supply (member_lookup)
    unsigned int u32_14C;  // X10 supply (member_lookup)
    unsigned int u32_150;  // X10 supply (member_lookup)
    unsigned int u32_154;  // X10 supply (member_lookup)
    unsigned int u32_158;  // X10 supply (member_lookup)
    unsigned int u32_15C;  // X10 supply (member_lookup)
    unsigned int u32_160;  // X10 supply (member_lookup)
    unsigned int u32_164;  // X10 supply (member_lookup)
    unsigned int u32_168;  // X10 supply (member_lookup)
    unsigned int u32_54;  // X10 supply (member_lookup)
    unsigned int u32_5C;  // X10 supply (member_lookup)
    unsigned int u32_60;  // X10 supply (member_lookup)
    unsigned int u32_64;  // X10 supply (member_lookup)
    unsigned int u32_6C;  // X10 supply (member_lookup)
    unsigned int u32_70;  // X10 supply (member_lookup)
    unsigned int u32_74;  // X10 supply (member_lookup)
    unsigned int u32_78;  // X10 supply (member_lookup)
    unsigned int u32_7C;  // X10 supply (member_lookup)
    unsigned int u32_80;  // X10 supply (member_lookup)
    unsigned int u32_84;  // X10 supply (member_lookup)
    unsigned int u32_88;  // X10 supply (member_lookup)
    unsigned int u32_8C;  // X10 supply (member_lookup)
    unsigned int u32_90;  // X10 supply (member_lookup)
    unsigned int u32_94;  // X10 supply (member_lookup)
    unsigned int u32_98;  // X10 supply (member_lookup)
    unsigned int u32_9C;  // X10 supply (member_lookup)
    unsigned int u32_A0;  // X10 supply (member_lookup)
    unsigned int u32_A4;  // X10 supply (member_lookup)
    unsigned int u32_A8;  // X10 supply (member_lookup)
    unsigned int u32_AC;  // X10 supply (member_lookup)
    unsigned int u32_B0;  // X10 supply (member_lookup)
    unsigned int u32_B4;  // X10 supply (member_lookup)
    unsigned int u32_B8;  // X10 supply (member_lookup)
    unsigned int u32_BC;  // X10 supply (member_lookup)
    unsigned int u32_C0;  // X10 supply (member_lookup)
    unsigned int u32_C4;  // X10 supply (member_lookup)
    unsigned int u32_C8;  // X10 supply (member_lookup)
    unsigned int u32_CC;  // X10 supply (member_lookup)
    unsigned int u32_D0;  // X10 supply (member_lookup)
    unsigned int u32_D4;  // X10 supply (member_lookup)
    unsigned int u32_D8;  // X10 supply (member_lookup)
    unsigned int u32_DC;  // X10 supply (member_lookup)
    unsigned int u32_E0;  // X10 supply (member_lookup)
    unsigned int u32_E4;  // X10 supply (member_lookup)
    unsigned int u32_E8;  // X10 supply (member_lookup)
    unsigned int u32_EC;  // X10 supply (member_lookup)
    unsigned int u32_F0;  // X10 supply (member_lookup)
    unsigned int u32_F4;  // X10 supply (member_lookup)
    unsigned int u32_F8;  // X10 supply (member_lookup)
    unsigned int u32_FC;  // X10 supply (member_lookup)

    int q008;  // X10 supply (member_lookup)
    int q00C;  // X10 supply (member_lookup)
    int q010;  // X10 supply (member_lookup)
    unsigned char q014[4];  /* String */  // X10 supply (member_lookup)
};

} // namespace gamemd
