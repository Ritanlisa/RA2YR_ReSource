// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once
#include "app/cmdline.hpp"



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct SessionClass;  // fix_fwd_type_supply
struct Object {
    char __pad_000[2];  // 0x0
    char Object_field_0x2[4];  // 0x2
    char __pad_6[2];  // 0x6
    int Object_field_0x8;  // 0x8
    char __pad_C[24];  // 0xC
    unsigned int q024;  // 0x24
    char __pad_28[8];  // 0x28
    int q030;  // 0x30
    int Object_field_0x34;  // 0x34
    char __pad_38[80];  // 0x38
    int Object_field_0x88;  // 0x88
    int Object_field_0x8C;  // 0x8C
    char __pad_90[28];  // 0x90
    int Object_field_0xAC;  // 0xAC
    char __pad_B0[52];  // 0xB0
    int q0E4;  // 0xE4
    int q0E8;  // 0xE8
    char __pad_EC[8];  // 0xEC
    unsigned int u32_F4;  // 0xF4
    unsigned int u32_F8;  // 0xF8
    char __pad_FC[64];  // 0xFC
    unsigned int Object_field_0x13C;  // 0x13C
    char __pad_140[348];  // 0x140
    int Object_field_0x29C;  // 0x29C
// --- flat members (BEGIN) ---
// --- flat members (END) ---
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
};
} // namespace gamemd
