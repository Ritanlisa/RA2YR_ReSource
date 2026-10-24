// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorCursor;  // fix_fwd_type_supply

struct COMClass {
    unsigned char ptr_0;  // 0x0
    char __pad_1[3];  // 0x1
    int q004;  // 0x4
    int q008;  // 0x8
    int q00C;  // 0xC
    int q010;  // 0x10
    unsigned char q014[4];  // 0x14
    int q018;  // 0x18
    int q01C;  // 0x1C
    int q020;  // 0x20
    int q024;  // 0x24
    int q028;  // 0x28
    int q02C;  // 0x2C
    int q030;  // 0x30
    int q034;  // 0x34
    int q038;  // 0x38
    int q03C;  // 0x3C
    int q040;  // 0x40
    int q044;  // 0x44
    int q048;  // 0x48
    int q04C;  // 0x4C
    int q050;  // 0x50
    unsigned int u32_54;  // 0x54
    unsigned int u32_58;  // 0x58
    unsigned int u32_5C;  // 0x5C
    unsigned int u32_60;  // 0x60
    unsigned int u32_64;  // 0x64
    unsigned int u32_68;  // 0x68
    unsigned int u32_6C;  // 0x6C
    unsigned int u32_70;  // 0x70
    unsigned int u32_74;  // 0x74
    unsigned int u32_78;  // 0x78
    unsigned int u32_7C;  // 0x7C
    unsigned int u32_80;  // 0x80
    unsigned int u32_84;  // 0x84
    unsigned int u32_88;  // 0x88
    unsigned int u32_8C;  // 0x8C
    unsigned int u32_90;  // 0x90
    unsigned int u32_94;  // 0x94
    unsigned int u32_98;  // 0x98
    unsigned int u32_9C;  // 0x9C
    unsigned int u32_A0;  // 0xA0
    unsigned int u32_A4;  // 0xA4
    unsigned int u32_A8;  // 0xA8
    unsigned int u32_AC;  // 0xAC
    unsigned int u32_B0;  // 0xB0
    unsigned int u32_B4;  // 0xB4
    unsigned int u32_B8;  // 0xB8
    unsigned int u32_BC;  // 0xBC
    unsigned int u32_C0;  // 0xC0
    unsigned int u32_C4;  // 0xC4
    unsigned int u32_C8;  // 0xC8
    unsigned int u32_CC;  // 0xCC
    unsigned int u32_D0;  // 0xD0
    unsigned int u32_D4;  // 0xD4
    unsigned int u32_D8;  // 0xD8
    unsigned int u32_DC;  // 0xDC
    unsigned int u32_E0;  // 0xE0
    unsigned int u32_E4;  // 0xE4
    unsigned int u32_E8;  // 0xE8
    unsigned int u32_EC;  // 0xEC
    unsigned int u32_F0;  // 0xF0
    unsigned int u32_F4;  // 0xF4
    unsigned int u32_F8;  // 0xF8
    unsigned int u32_FC;  // 0xFC
    unsigned int u32_100;  // 0x100
    unsigned int u32_104;  // 0x104
    unsigned int u32_108;  // 0x108
    unsigned int u32_10C;  // 0x10C
    unsigned int u32_110;  // 0x110
    unsigned int u32_114;  // 0x114
    unsigned int u32_118;  // 0x118
    unsigned int u32_11C;  // 0x11C
    unsigned int u32_120;  // 0x120
    unsigned int u32_124;  // 0x124
    unsigned int u32_128;  // 0x128
    unsigned int u32_12C;  // 0x12C
    unsigned int u32_130;  // 0x130
    unsigned int u32_134;  // 0x134
    unsigned int u32_138;  // 0x138
    unsigned int u32_13C;  // 0x13C
    unsigned int u32_140;  // 0x140
    unsigned int u32_144;  // 0x144
    unsigned int u32_148;  // 0x148
    unsigned int u32_14C;  // 0x14C
    unsigned int u32_150;  // 0x150
    unsigned int u32_154;  // 0x154
    unsigned int u32_158;  // 0x158
    unsigned int u32_15C;  // 0x15C
    unsigned int u32_160;  // 0x160
    unsigned int u32_164;  // 0x164
    unsigned int u32_168;  // 0x168
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    VectorCursor * disconnectPoint(unsigned int * Block, char a2);
    void * lockServer(rc_ptr_base * Block, char a2);
    static int RegisterAll(COMClass * aP1);
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
};

} // namespace gamemd
