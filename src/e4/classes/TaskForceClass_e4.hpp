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
    bool IsAllocated;  // 0x13
    unsigned int abstractFlags;  // 0x14
    unsigned int nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    unsigned int alignmentPadding;  // 0x33
    unsigned int UINameLabel;  // 0x3D
    void * UIName;  // 0x60
    unsigned int Name;  // 0x64
    unsigned int tail_95;  // 0x95
    AbstractClass * ptr_98;  // 0x98
// --- flat members (END) ---
    unsigned int * ParseUnitCountAndType(char *Buffer);  // 0x4C4EF0
    int Construct(char *aP1, void *a2 = 0, void *a3 = 0, void *a4 = 0, void *a5 = 0, void *a6 = 0, void *a7 = 0, void *a8 = 0, void *a9 = 0);  // 0x6E7E80
    AbstractClass * * LoadFromINI(char * a1, int a2);  // 0x6E8220
    void *  ExecuteAction(char a2);  // 0x6E87F0
    int  LoadTaskForce(int a2);  // 0x6E86A0
    char GetUnitCount(unsigned char *** aP1);  // 0x6E8420
    char  GetUnitType(char * a2);  // 0x6E8510
    int  LoadTask(int * a2);  // 0x6E8750
    int Check(void *a1 = 0, void *a2 = 0, void *a3 = 0);  // 0x4C4F90
    int  SaveTaskForce(int * a2, int a3);  // 0x6E8680
    int  ddtor(unsigned int * a2);  // 0x6E8710
    int StubReturn33();  // 0x6E87D0
    int StubReturn212();  // 0x6E87E0
    unsigned int *q000;  // 0x0 (offset-truth)
    unsigned int q008;  // 0x8 (offset-truth)

    int q024;  // X10 supply (member_lookup)
    unsigned char q0A0[4];  /* char[4] */  // X10 supply (member_lookup)
    int q0A4;  // X10 supply (member_lookup)
    char q028[112];  // 0x28  /* char[112] */
};
} // namespace gamemd
