// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorCursor;  // fix_fwd_type_supply

struct COMClass {
    unsigned char __pad_000;  // 0x0
    char __pad_1[3];  // 0x1
    int COMClass_field_0x04;  // 0x4
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
