// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorCursor;  // fix_fwd_type_supply

struct COMClass {
// --- flat members (BEGIN) ---
    unsigned char q000;  // 0x0
    unsigned char q004;  // 0x4
    unsigned char q008;  // 0x8
    unsigned char q00C;  // 0xC
    unsigned int q00D;  // 0xD
    unsigned char q010;  // 0x10
    bool IsInitialized;  // 0x12
    unsigned char q014;  // 0x14
    int Count;  // 0x16
    unsigned char q018;  // 0x18
    unsigned char q01C;  // 0x1C
    unsigned char q020;  // 0x20
    unsigned char q024;  // 0x24
    unsigned char q028;  // 0x28
    unsigned char q02C;  // 0x2C
    unsigned char q030;  // 0x30
    unsigned char q034;  // 0x34
    unsigned char q038;  // 0x38
    unsigned char q03C;  // 0x3C
    unsigned char q040;  // 0x40
    unsigned char q044;  // 0x44
    unsigned char q048;  // 0x48
    unsigned char q04C;  // 0x4C
    unsigned char q050;  // 0x50
    unsigned int *__pad_0;
// --- flat members (END) ---
    VectorCursor * disconnectPoint(unsigned int * Block, char a2);
    void * lockServer(rc_ptr_base * Block, char a2);
    static double RegisterAll(...);  // C2597 interim stub
    unsigned int *m_1;  // G42.33 b3 flat-carrier vocab ([3] 索引基)
    unsigned int m_C;  // G42.33 b3 flat-carrier vocab
    unsigned int m_10;  // G42.33 b3 flat-carrier vocab
    unsigned int m_8;  // G42.35 C9 flat-carrier vocab (0x7656a5)
    unsigned int field_18;  // G42.33 b3 flat-carrier vocab
    unsigned int COMClass_field_0x08;  // G42.33 b3 flat-carrier vocab
    unsigned int COMClass_field_0x0C;  // G42.33 b3 flat-carrier vocab
    unsigned int COMClass_field_0x10;  // G42.33 b3 flat-carrier vocab
    unsigned int COMClass_field_0x14;  // G42.33 b3 flat-carrier vocab
    unsigned int COMClass_field_0x18;  // G42.33 b3 flat-carrier vocab
    unsigned int COMClass_field_0x1C;  // G42.33 b3 flat-carrier vocab
    unsigned int COMClass_field_0x20;  // G42.33 b3 flat-carrier vocab
    unsigned int COMClass_field_0x24;  // G42.33 b3 flat-carrier vocab
    unsigned int COMClass_field_0x28;  // G42.33 b3 flat-carrier vocab
    unsigned int COMClass_field_0x2C;  // G42.33 b3 flat-carrier vocab
    unsigned int COMClass_field_0x30;  // G42.33 b3 flat-carrier vocab
    unsigned int COMClass_field_0x34;  // G42.33 b3 flat-carrier vocab
    unsigned int COMClass_field_0x38;  // G42.33 b3 flat-carrier vocab
    unsigned int COMClass_field_0x3C;  // G42.33 b3 flat-carrier vocab
    unsigned int COMClass_field_0x40;  // G42.33 b3 flat-carrier vocab
    unsigned int COMClass_field_0x44;  // G42.33 b3 flat-carrier vocab
    unsigned int COMClass_field_0x48;  // G42.33 b3 flat-carrier vocab
    unsigned int COMClass_field_0x4C;  // G42.33 b3 flat-carrier vocab
    unsigned int COMClass_field_0x50;  // G42.33 b3 flat-carrier vocab
    int RegisterAll();  // G42.33 b3 supplied-body sync (member form)
    unsigned int * releaseInterface();  // 0x765C70 G42.33 b3 supplied-body sync
    unsigned int * marshalInterface(char a2);  // 0x767C50 G42.33 b3 supplied-body sync
    int ReleaseRef();  // G42.33 b3 supplied-body sync
    unsigned int * initInterface(char a2);  // G42.33 b3 supplied-body sync
    int queryProperty();  // G42.33 b3 supplied-body sync
    unsigned int setProperty(int a2);  // G42.33 b3 supplied-body sync
    char * createInstance(char a2);  // G42.33 b3 supplied-body sync
    unsigned int * getInterface(char a2);  // G42.33 b3 supplied-body sync
    void ** coUninitialize(char a2);  // G42.33 b3 supplied-body sync

    unsigned int u32_54;  // G42.39 data supply

    unsigned int u32_5C;  // G42.39 data supply

    unsigned int u32_64;  // G42.39 data supply

    unsigned int u32_68;  // G42.39 data supply

    unsigned int u32_6C;  // G42.39 data supply

    unsigned int u32_74;  // G42.39 data supply

    unsigned int u32_78;  // G42.39 data supply

    unsigned int u32_7C;  // G42.39 data supply

    unsigned int u32_8C;  // G42.39 data supply

    unsigned int u32_84;  // G42.39 data supply

    unsigned int u32_88;  // G42.39 data supply

    unsigned int u32_94;  // G42.39 data supply

    unsigned int u32_98;  // G42.39 data supply

    unsigned int u32_9C;  // G42.39 data supply

    unsigned int u32_A4;  // G42.39 data supply

    unsigned int u32_A8;  // G42.39 data supply

    unsigned int u32_AC;  // G42.39 data supply

    unsigned int u32_B4;  // G42.39 data supply

    unsigned int u32_B8;  // G42.39 data supply

    unsigned int u32_BC;  // G42.39 data supply

    unsigned int u32_C4;  // G42.39 data supply

    unsigned int u32_C8;  // G42.39 data supply

    unsigned int u32_CC;  // G42.39 data supply

    unsigned int u32_D4;  // G42.39 data supply

    unsigned int u32_D8;  // G42.39 data supply

    unsigned int u32_DC;  // G42.39 data supply

    unsigned int u32_E4;  // G42.39 data supply

    unsigned int u32_E8;  // G42.39 data supply

    unsigned int u32_EC;  // G42.39 data supply

    unsigned int u32_F4;  // G42.39 data supply

    unsigned int u32_F8;  // G42.39 data supply

    unsigned int u32_FC;  // G42.39 data supply

    unsigned int u32_104;  // G42.39 data supply

    unsigned int u32_108;  // G42.39 data supply

    unsigned int u32_10C;  // G42.39 data supply

    unsigned int u32_114;  // G42.39 data supply

    unsigned int u32_118;  // G42.39 data supply

    unsigned int u32_11C;  // G42.39 data supply

    unsigned int u32_124;  // G42.39 data supply

    unsigned int u32_128;  // G42.39 data supply

    unsigned int u32_12C;  // G42.39 data supply

    unsigned int u32_134;  // G42.39 data supply

    unsigned int u32_138;  // G42.39 data supply

    unsigned int u32_13C;  // G42.39 data supply

    unsigned int u32_144;  // G42.39 data supply

    unsigned int u32_148;  // G42.39 data supply

    unsigned int u32_14C;  // G42.39 data supply

    unsigned int u32_150;  // G42.39 data supply

    unsigned int u32_154;  // G42.39 data supply

    unsigned int u32_158;  // G42.39 data supply

    unsigned int u32_15C;  // G42.39 data supply

    unsigned int u32_160;  // G42.39 data supply

    unsigned int u32_164;  // G42.39 data supply

    unsigned int u32_168;  // G42.39 data supply

    unsigned int u32_4;  // G42.39 data supply
};

} // namespace gamemd
