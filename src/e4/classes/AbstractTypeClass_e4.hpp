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
    char referenceCount_d[4];  // 0x1C
    bool NeedsSaveOrLink;  // 0x20
    bool needsSave;  // 0x32
    unsigned char zero_3C;  // 0x3C
    char UINameLabel;  // 0x3D
    void* ;  // 0x60
    char Name;  // 0x64
    unsigned char tail_95;  // 0x95
// --- flat members (END) ---
    char UINameLabel[32];  // 0x3D char[32] ml g7-til-merge (G57w4)
    char Name[49];  // 0x64 char[49] ml g7-til-merge (G57w4)
    void* houseTypes;  // 0x0 (no offset truth)
    void* AbstractClass;  // 0x0 (no offset truth)
    void* houseTypesCount;  // 0x0 (no offset truth)
    AbstractTypeClass * ddtor(char a2, int aP1, int a3, int a4, int a5, int a6, int a7, int a8, int a1);
    BOOL NameEquals(void *a2);
    char WriteINI(char *aP1, void *a1 = 0);
    int AddSampleVocClass();
    int Constructor(char *aP1, void *a1 = 0, void *a2 = 0, void *a3 = 0);
    int Dtor(void *a1 = 0);
    int GetData(void *a1);
    int GetType(int a1);
    int Init(int aP1, void *a1 = 0);
    int LoadFromINI(uint8_t ***aP1, void *a1 = 0);
    int ProcessPower(int *aP1, void *a1 = 0);
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
    unsigned int *q000;  // 0x0 (offset-truth)
    unsigned int q008;  // 0x8 (offset-truth)
};

} // namespace gamemd
