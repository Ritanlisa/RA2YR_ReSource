// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct INIClass;  // fix_fwd_type_supply
struct ObjectTypeClass;  // fix_fwd_type_supply
struct CCINIClass;  // fix_fwd_type_supply
struct TaskForceClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    unsigned int u32_10;  // 0x10
    unsigned int q011;  // 0x11
    bool IsAllocated;  // 0x13
    unsigned int abstractFlags;  // 0x14
    unsigned int nextArrayIndex;  // 0x18
    unsigned int q01A;  // 0x1A
    int referenceCount;  // 0x1C
    bool q01D;  // 0x1D
    unsigned int u32_20;  // 0x20
    INIClass* q024;  // 0x24
    unsigned int q028;  // 0x28
    bool q02B;  // 0x2B
    unsigned int q02C;  // 0x2C
    unsigned char q030;  // 0x30
    unsigned char q031;  // 0x31
    unsigned int alignmentPadding;  // 0x33
    unsigned char q034;  // 0x34
    unsigned int q038;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned int q03B;  // 0x3B
    unsigned int u32_3C;  // 0x3C
    unsigned int UINameLabel;  // 0x3D
    unsigned int u32_40;  // 0x40
    bool q042;  // 0x42
    unsigned int q044;  // 0x44
    unsigned int q048;  // 0x48
    bool q04A;  // 0x4A
    unsigned int q04C;  // 0x4C
    unsigned char q04F;  // 0x4F
    unsigned int q050;  // 0x50
    unsigned int q054;  // 0x54
    unsigned char q058;  // 0x58
    unsigned char q05C;  // 0x5C
    void * UIName;  // 0x60
    unsigned int Name;  // 0x64
    unsigned char q068;  // 0x68
    ObjectClass* q06C;  // 0x6C
    unsigned char q070;  // 0x70
    bool q074;  // 0x74
    unsigned char q078;  // 0x78
    void* q07C;  // 0x7C
    unsigned int q080;  // 0x80
    unsigned int q084;  // 0x84
    unsigned char q088;  // 0x88
    unsigned char q08A;  // 0x8A
    void* q08C;  // 0x8C
    unsigned int u32_90;  // 0x90
    unsigned int q094;  // 0x94
    unsigned int tail_95;  // 0x95
    AbstractClass * ptr_98;  // 0x98
    unsigned int u32_9C;  // 0x9C
    unsigned char q0A0;  // 0xA0
    ObjectTypeClass* q0A4;  // 0xA4
    unsigned int TaskForceClass_field_0x24;
    unsigned int TaskForceClass_field_0x4;
    unsigned int TaskForceClass_field_0x98;
    unsigned int *TaskForceClass_field_0x9C;
    unsigned int TaskForceClass_field_0xA4;
    unsigned int *__pad_0;
    unsigned int *__pad_28;
    unsigned int *__pad_8;
    unsigned int *__pad_A0;
// --- flat members (END) ---
    unsigned int * ParseUnitCountAndType(char *Buffer);  // 0x4C4EF0
    int Construct(char *aP1);  // 0x6E7E80
    AbstractClass * * LoadFromINI(char * a1, int a2);  // 0x6E8220
    void * ExecuteAction(void ** Block, char a2);  // 0x6E87F0
    int LoadTaskForce(AbstractTypeClass * aP0, int aP1);  // 0x6E86A0
    char GetUnitCount(unsigned char *** aP1);  // 0x6E8420
    char GetUnitType(char * a2);  // 0x6E8510
    int LoadTask(int * a2);  // 0x6E8750
    int Check();  // 0x4C4F90
    int SaveTaskForce(TechnoTypeClass * aP0, int * a1, int aP2);  // 0x6E8680
    int ddtor(int a1, unsigned int * a2);  // 0x6E8710
    int StubReturn33();  // 0x6E87D0
    int StubReturn212();  // 0x6E87E0
};
} // namespace gamemd
