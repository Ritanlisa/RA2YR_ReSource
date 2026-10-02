// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct AbstractTypeClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    unsigned int uniqueId;  // 0x10
    unsigned char alignmentPadding_3;  // 0x11
    char referenceCount[4];  // 0x12
    bool IsAllocated;  // 0x13
    unsigned int abstractFlags;  // 0x14
    unsigned int nextArrayIndex;  // 0x18
    unsigned int q01A;  // 0x1A
    char q01C[4];  // 0x1C
    bool q01D;  // 0x1D
    bool NeedsSaveOrLink;  // 0x20
    unsigned int q024;  // 0x24
    unsigned int u32_28;  // 0x28
    bool q02B;  // 0x2B
    unsigned int q02C;  // 0x2C
    unsigned char q030;  // 0x30
    unsigned char q031;  // 0x31
    bool needsSave;  // 0x32
    unsigned char q034;  // 0x34
    unsigned int q038;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned int q03B;  // 0x3B
    unsigned char zero_3C;  // 0x3C
    char UINameLabel;  // 0x3D
    unsigned int q040;  // 0x40
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
    unsigned char q05D;  // 0x5D
    void *q60;  // 0x60
    char Name;  // 0x64
    unsigned int q068;  // 0x68
    ObjectClass* q06C;  // 0x6C
    unsigned char q070;  // 0x70
    bool q074;  // 0x74
    unsigned char q078;  // 0x78
    void* q07C;  // 0x7C
    unsigned int q080;  // 0x80
    unsigned int q084;  // 0x84
    void* q088;  // 0x88
    void* q08C;  // 0x8C
    unsigned char q090;  // 0x90
    unsigned int q094;  // 0x94
    unsigned char tail_95;  // 0x95
    unsigned int TaskForceClass_field_0x4;
    unsigned int *__pad_0;
    unsigned int *__pad_24;
    unsigned int nextArrayIndex1;
    unsigned int vtable34;
    unsigned int vtable35;
    unsigned int vtable46;
    unsigned int *__pad_8;
    unsigned int UIName;
    void* houseTypes;  // 0x0 (no offset truth)
    void* AbstractClass;  // 0x0 (no offset truth)
    void* houseTypesCount;  // 0x0 (no offset truth)
// --- flat members (END) ---
    AbstractTypeClass * ddtor(char a2, int aP1, int a3, int a4, int a5, int a6, int a7, int a8, int a1);
    BOOL NameEquals(void *a2);
    char WriteINI(char *aP1);
    int AddSampleVocClass();
    int Constructor(char *aP1);
    int Dtor();
    int GetData(void *a1);
    int GetType(int a1);
    int Init(int aP1);
    int LoadFromINI(AbstractTypeClass * aP1, void *a2);
    int ProcessPower(int *aP1);
    int SetType();
    int StubReturnFalse();
    int Validate();
    int sub_406550();
    int sub_406570();
    int sub_4065F0(int a2);
    int sub_406600();
    int sub_406610();
    int sub_406620();
    void sub_406520();
    void sub_406530();
    void sub_406540();
    void sub_4065C0();
    void sub_4065D0();
    void sub_4065E0();
    void sub_406640();
};

} // namespace gamemd
