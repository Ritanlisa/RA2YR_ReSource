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
    char u32_3;  // 0x3
    bool IsAllocated;  // 0x13
    unsigned int abstractFlags;  // 0x14
    unsigned int nextArrayIndex;  // 0x18
    char referenceCount_d[4];  // 0x1C
    bool NeedsSaveOrLink;  // 0x20
    bool needsSave;  // 0x32
    unsigned char zero_3C;  // 0x3C
    void *q60;  // 0x60
    unsigned char tail_95;  // 0x95
// --- flat members (END) ---
    char UINameLabel[32];  // 0x3D char[32] ml g7-til-merge (G57w4)
    char Name[49];  // 0x64 char[49] ml g7-til-merge (G57w4)
    void* houseTypes;  // 0x0 (no offset truth)
    void* AbstractClass;  // 0x0 (no offset truth)
    void* houseTypesCount;  // 0x0 (no offset truth)
    AbstractTypeClass * ddtor(char a2, int aP1, int a3, int a4, int a5, int a6, int a7, int a8, int a1);
    BOOL NameEquals(void *a2);
    char WriteINI(char *aP1, void *a2 = 0);
    int AddSampleVocClass(int a1 = 0, unsigned char * a2 = 0);
    int Constructor(char *aP1, void *a2 = 0, void *a3 = 0, void *a4 = 0);
    int Dtor(void *a1 = 0);
    int GetData(void *a1);
    int GetType(int a1);
    int Init(int aP1, void *a2 = 0);
    int LoadFromINI(uint8_t ***aP1, void *a2 = 0);
    int ProcessPower(int *aP1, void *a2 = 0);
    int SetType();
    int StubReturnFalse();
    int Validate();
    int sub_406550(int a1 = 0, int a2 = 0);
    int sub_406570(unsigned int * a1 = 0, int a2 = 0);
    int sub_4065F0(int a2);
    int sub_406600(int a1 = 0, int a2 = 0, int a3 = 0);
    int sub_406610(int a1 = 0, int a2 = 0, int a3 = 0);
    int sub_406620(int a1 = 0, int a2 = 0);
    void sub_406520(int a1 = 0, int a2 = 0);
    void sub_406530(int a1 = 0, int a2 = 0);
    void sub_406540(int a1 = 0, int a2 = 0);
    void sub_4065C0(int a1 = 0, int a2 = 0);
    void sub_4065D0(int a1 = 0, int a2 = 0);
    void sub_4065E0(int a1 = 0, int a2 = 0);
    void sub_406640(int a1 = 0, int a2 = 0);
    unsigned int *q000;  // 0x0 (offset-truth)
    unsigned int q008;  // 0x8 (offset-truth)

    unsigned int UIName;  // X10 supply (csp_canon_members)
    unsigned char __pad_024;  // X10 supply (csp_canon_members)
    unsigned char __pad_036;  // X10 supply (csp_canon_members)
    bool q019;  // X10 supply (member_lookup)
    unsigned int u32_94;  // X10 supply (member_lookup)
    char u8_9;  // X10 supply (member_lookup)
    unsigned int u32_A0;  // 0xA0
    unsigned char __pad_05D;  // 0x5D [X30:canon]
    int vtable46;  // 0xB4 [X30:type_map]
};

} // namespace gamemd
