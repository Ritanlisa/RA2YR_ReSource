// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct INIClass;  // fix_fwd_type_supply
struct ObjectTypeClass;  // fix_fwd_type_supply
struct CCINIClass;  // fix_fwd_type_supply
struct TaskForceClass {
    unsigned int __pad_0;  // 0x0
    int TaskForceClass_field_0x4;  // 0x4
    void* ptr_8;  // 0x8
    void* ptr_C;  // 0xC
    unsigned char __pad_010;  // 0x10
    char __pad_11[2];  // 0x11
    bool IsAllocated;  // 0x13
    unsigned int abstractFlags;  // 0x14
    unsigned int nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    unsigned char __pad_020;  // 0x20
    char __pad_21[3];  // 0x21
    int q024;  // 0x24
    char q028[112];  // 0x28
    AbstractClass * ptr_98;  // 0x98
    int __pad_09C;  // 0x9C
    unsigned char q0A0[4];  // 0xA0
    int q0A4;  // 0xA4
// --- flat members (BEGIN) ---
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
};
} // namespace gamemd
