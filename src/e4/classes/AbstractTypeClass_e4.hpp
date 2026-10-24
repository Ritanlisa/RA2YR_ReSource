// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct AbstractTypeClass {
    void * AbstractClass;  // 0x0
    void * ptr_4;  // 0x4
    char ptr_8[1];  // 0x8
    unsigned char u8_9;  // 0x9
    char __pad_A[2];  // 0xA
    void * ptr_C;  // 0xC
    unsigned int uniqueId;  // 0x10
    unsigned int abstractFlags;  // 0x14
    unsigned int nextArrayIndex;  // 0x18
    char referenceCount_d[4];  // 0x1C
    int NeedsSaveOrLink;  // 0x20
    unsigned char __pad_024;  // 0x24
    char __pad_25[13];  // 0x25
    bool needsSave;  // 0x32
    char __pad_33[3];  // 0x33
    unsigned char __pad_036;  // 0x36
    char __pad_37[5];  // 0x37
    unsigned char zero_3C;  // 0x3C
    char UINameLabel[32];  // 0x3D
    unsigned char __pad_05D;  // 0x5D
    char __pad_5E[2];  // 0x5E
    unsigned int UIName;  // 0x60
    char Name[49];  // 0x64
    char tail_95[3];  // 0x95
// --- flat members (BEGIN) ---
// --- flat members (END) ---
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
};

} // namespace gamemd
