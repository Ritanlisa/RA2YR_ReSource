// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct TeamTypeClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    int uniqueId;  // 0x10
    bool IsAllocated;  // 0x13
    int abstractFlags;  // 0x14
    bool q017;  // 0x17
    int nextArrayIndex;  // 0x18
    int referenceCount;  // 0x1C
    void * NeedsSaveOrLink;  // 0x20
    unsigned int TeamTypeClass_field_24;  // 0x24
    unsigned char TeamTypeClass_field_28;  // 0x28
    bool q02B;  // 0x2B
    unsigned int TeamTypeClass_field_2C;  // 0x2C
    unsigned int TeamTypeClass_field_30;  // 0x30
    unsigned char q031;  // 0x31
    unsigned int alignmentPadding;  // 0x33
    unsigned int TeamTypeClass_field_34;  // 0x34
    unsigned int TeamTypeClass_field_38;  // 0x38
    unsigned char q03A;  // 0x3A
    unsigned int TeamTypeClass_field_3C;  // 0x3C
    unsigned int UINameLabel;  // 0x3D
    unsigned int taskForce;  // 0x40
    unsigned int taskForceCount;  // 0x44
    unsigned int taskForceCapacity;  // 0x48
    unsigned int q04C;  // 0x4C
    unsigned int q050;  // 0x50
    void* q054;  // 0x54
    unsigned int TeamTypeClass_field_58;  // 0x58
    unsigned char TeamTypeClass_field_5C;  // 0x5C
    unsigned char TeamTypeClass_field_5D;  // 0x5D
    unsigned int TeamTypeClass_field_64;  // 0x64
    unsigned int TeamTypeClass_field_68;  // 0x68
    unsigned int TeamTypeClass_field_6C;  // 0x6C
    unsigned char TeamTypeClass_field_70;  // 0x70
    unsigned char TeamTypeClass_field_71;  // 0x71
    unsigned int TeamTypeClass_field_60;
    unsigned int *__pad_4C;
    unsigned int q090;
    unsigned int q0A0;
    unsigned int q0C4;
    unsigned int q0A4;
    unsigned int q0B0;
    unsigned int q0AC;
    unsigned int q0B4;
    unsigned int *__pad_0;
// --- flat members (END) ---
    unsigned int * FindOrCreateTaskForce(char *Source);  // G42.35f: ida truth 0x6E85F0 int* return
    AbstractClass * * GetMaxCount(CCINIClass * aP1);
    char LoadFromINI(unsigned char *** aP1);  // G42.35f: ida truth 0x6F1090 = char __thiscall (uint8_t***)
    TeamTypeClass * ReadScriptData(char * a1, int a2);
    TeamTypeClass * ddtor(char a2);
    int Check(int a2, void *a2_2, void *a3);
    int Construct();
    int DestroyAllInstances();
    int FindByName();
    int FindFirstInstance();
    int FlashAllInstances(AnimClass * aP1);
    int GetAuxField();
    int GetClassIdentifier(int a1, unsigned int * a2);
    int GetGroup();
    int GetObjectSize();
    int GetTeam(int a2, int a3);
    int GetTypeIdentifier();
    int LoadTypeData(AbstractTypeClass * aP0, int aP1);
    int PowerDrainUpdate(int * a2);
    int ProcessTaskForce();
    int SaveToINI(TechnoTypeClass * aP0, int * a1, int aP2);
    unsigned int * GetTransportWaypoint(unsigned int * a2);
    unsigned int * CreateScriptType(char *Source);  // G42.35f: ida truth 0x691C00 int* return
    static double vftable(...);  // C2597 interim stub
    void * CreateScriptType(char *Source, int a2, int a3, int aP1);
    AbstractClass * * FindOrCreateTaskForce(char *Source, int a2, int a3, int aP1);
    AbstractClass * * LoadFromINI(unsigned char *** aP1, void *a2, void * aTaskforce, void * aWaypoint);
    AbstractClass * * GetMaxCount(CCINIClass * aP1, void * aTaskforce, void * aWaypoint);
};

} // namespace gamemd
