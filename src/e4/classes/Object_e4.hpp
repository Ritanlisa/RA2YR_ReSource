// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once
#include "app/cmdline.hpp"



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct SessionClass;  // fix_fwd_type_supply
struct Object {
// --- flat members (BEGIN) ---
    void * ptr_28;  // 0x28
// --- flat members (END) ---
    char* attachedTag;  // g57w8: +N 指针算术载体  // 0x0 (no offset truth)
    char* nextObject;  // g57w8: 同上  // 0x0 (no offset truth)
    void* parachute;  // 0x0 (no offset truth)
    int FindClosestObjectCell(unsigned int *aP1, char aP2, int aP3);
    int  FindObjectCell(unsigned int * a2, char a3);  // 0x47C5A0
    int IsAlliedWithObjectHouse(int aP1, void *a1 = 0);
    int  IsAlliedWithObjectSimpleHouse(unsigned char * a2);  // 0x4F9AF0
    unsigned int *  FindNearestObjectAtCell(unsigned int * a2);  // 0x56C210
    int  SpawnAtCell(int a2, int16_t * a3, int a4, void *a1 = 0);  // 0x5FC380
    void*  HandleAction(int * a2, int * a3);  // 0x5FD970
    int ProcessEvent();  // 0x5FDDE0
    void *  DrawObject(char a2);  // 0x5FDF70
    void* *  CalculateObjectPlacementPosition(int * a2);  // 0x62AC30
    int  LoadObject(unsigned int * a2, int a3);  // 0x5FD8F0
    SessionClass *  DtorWithDelete(char a2, void *a1 = 0);  // 0x7AD330
    int ComputeAllocationSize();  // 0x42B1F0
    void ** RemoveObjectArray(void *a1 = 0);  // 0x53E420
    int Unlink(void *a1 = 0);  // 0x5F5230
    char  CheckState(unsigned int * a2, int a3);  // 0x5FD270
    int  SaveObject(int * a2, int a3);  // 0x5FD950
    int  ddtor(unsigned int * a2);  // 0x5FDF10
    int StubReturn176();  // 0x5FDF00
    int StubReturn20();  // 0x5FDF50
    char __pad_EC[80];  // 0xEC (ml)
    unsigned int u32_5788;  // 0x5788 (offset-truth)
};
} // namespace gamemd
