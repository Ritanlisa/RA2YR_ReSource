// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct Object {
    void* vfptr;  // minimal E2 declaration
    int FindClosestObjectCell(IUnknown * aP1, IUnknown * aP2, IUnknown * aP3);  // 0x47C3D0
    int FindObjectCell(TechnoClass * aP1, char aP2);  // 0x47C5A0
    bool IsAlliedWithObjectHouse(IUnknown * aP1);  // 0x4F9A90
    bool IsAlliedWithObjectSimpleHouse(unsigned char * a2);  // 0x4F9AF0
    unsigned int * FindNearestObjectAtCell(unsigned int * a2);  // 0x56C210
    OverlayClass * SpawnAtCell(IUnknown * aP1, IUnknown * aP2, BuildingTypeClass * aP3);  // 0x5FC380
    void HandleAction(int * a2, int * a3);  // 0x5FD970
    int ProcessEvent();  // 0x5FDDE0
    OverlayClass * DrawObject(char a2);  // 0x5FDF70
    int * CalculateObjectPlacementPosition(int * a2);  // 0x62AC30
    int LoadObject(ObjectClass * aP1, int aP1a);  // 0x5FD8F0
    SessionClass * DtorWithDelete(char a2);  // 0x7AD330
    int ComputeAllocationSize();  // 0x42B1F0
    void ** RemoveObjectArray();  // 0x53E420
    int Unlink();  // 0x5F5230
    char CheckState(IUnknown * aP1, int a3);  // 0x5FD270
    int SaveObject(TechnoTypeClass * aP0, int * a1, int aP2);  // 0x5FD950
    int ddtor(int a1, unsigned int * a2);  // 0x5FDF10
    int StubReturn176();  // 0x5FDF00
    int StubReturn20();  // 0x5FDF50
};
} // namespace gamemd
