// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once
#include "app/cmdline.hpp"



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct SessionClass;  // fix_fwd_type_supply
struct Object {
// --- flat members (BEGIN) ---
    ProgressTimer* ptr_28;  // 0x28 [X30:type_map]
// --- flat members (END) ---
    char* attachedTag;  // g57w8: +N 指针算术载体  // 0x0 (no offset truth)
    char* nextObject;  // g57w8: 同上  // 0x0 (no offset truth)
    void* parachute;  // 0x0 (no offset truth)
    int FindClosestObjectCell(unsigned int *aP1, char aP2, int aP3);
    int FindObjectCell(TechnoClass * aP1, char aP2);  // 0x47C5A0
    int IsAlliedWithObjectHouse(int aP1, void *a2 = 0);
    int  IsAlliedWithObjectSimpleHouse(unsigned char * a2);  // 0x4F9AF0
    unsigned int *  FindNearestObjectAtCell(unsigned int * a2);  // 0x56C210
    int SpawnAtCell(int aP1, int16_t *aP2, int aP3, void *a4 = 0);  // 0x5FC380
    void*  HandleAction(int * a2, int * a3);  // 0x5FD970
    int ProcessEvent();  // 0x5FDDE0
    void *  DrawObject(char a2);  // 0x5FDF70
    void* * CalculateObjectPlacementPosition(int *a2);  // 0x62AC30
    int LoadObject(ObjectClass * aP1, int aP1a);  // 0x5FD8F0
    SessionClass * DtorWithDelete(void ** Block, char a2);  // 0x7AD330
    static int ComputeAllocationSize();  // 0x42B1F0
    void ** RemoveObjectArray(void *a1 = 0);  // 0x53E420
    int Unlink(void *a1 = 0);  // 0x5F5230
    char CheckState(IUnknown * aP1, int a3);  // 0x5FD270
    int  SaveObject(int * a2, int a3);  // 0x5FD950
    int  ddtor(unsigned int * a2);  // 0x5FDF10
    int StubReturn176();  // 0x5FDF00
    int StubReturn20();  // 0x5FDF50
    char __pad_EC[80];  // 0xEC (ml)
    unsigned int u32_5788;  // 0x5788 (offset-truth)

    unsigned char q004[4];  /* AbstractClass */  // X10 supply (member_lookup)
    int q008;  // X10 supply (member_lookup)
    unsigned char q024;  // X10 supply (member_lookup)
    int q030;  // X10 supply (member_lookup)
    int q0E4;  // X10 supply (member_lookup)
    int q0E8;  // X10 supply (member_lookup)
    int q13C;  // X10 supply (member_lookup)
    unsigned int u32_F4;  // X10 supply (member_lookup)
    unsigned int u32_F8;  // X10 supply (member_lookup)
    int __pad_000;  // 0x0 [X30:type_map]
    unsigned char __pad_02C;  // 0x2C [X30:canon]
    int Object_field_0x8;  // 0x8 [X30:member_lookup]
    int Object_field_0xAC;  // 0xAC [X30:member_lookup]
    char __pad_C[36];  // 0xC [X30:member_lookup]


    unsigned int Object_field_0x13C;  // 0x13C [X55 W3 supply (render vocab)]
};
} // namespace gamemd
