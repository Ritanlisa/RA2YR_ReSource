#pragma once

#include <cstdint>

#include "core/enums.hpp"

namespace gamemd {

#ifndef GAMEMD_USING_CellStruct
#define GAMEMD_USING_CellStruct
using ra2::game::CellStruct;
#endif

class HouseClass;

// IDA: inline struct in house.hpp — base building planner node
// CSP: BaseNodeClass matched via T1
struct BaseNodeClass
{
    int32_t     buildingTypeIndex;  // +0x00
    CellStruct  mapCoords;          // +0x04
    bool        placed;             // +0x08
    int32_t     attempts;           // +0x0C
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    void* Vector_Constructor(int a1, int a2);  // 0x42FC40
    // --- gap2 auto-generated stub declarations (END) ---
};

// IDA: inline struct in house.hpp — AI base construction manager
struct BaseClass
{
    BaseNodeClass*  baseNodes;        // +0x00
    int32_t         baseNodeCount;    // +0x04
    int32_t         baseNodeCapacity; // +0x08
    int32_t         percentBuilt;     // +0x0C
    CellStruct*     cells24;          // +0x10
    int32_t         cells24Count;     // +0x14
    int32_t         cells24Capacity;  // +0x18
    CellStruct*     cells38;          // +0x1C
    int32_t         cells38Count;     // +0x20
    int32_t         cells38Capacity;  // +0x24
    CellStruct      center;           // +0x28
    uint8_t         unknown54[32];    // +0x2C
    HouseClass*     owner;            // +0x4C
    unsigned int m_10;  // 0x10
    unsigned char __pad_0;  // 0x0
    int Count;  // 0x22
    unsigned int u32_52;  // 0x52
    int u32_54;  // 0x54
    unsigned int u32_5C;  // 0x5C
    unsigned int u32_64;  // 0x64
    unsigned char u32_68;  // 0x68
    unsigned int u32_6C;  // 0x6C
    unsigned int u32_74;  // 0x74
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    void* Constructor();  // 0x42E6F0
    int ProcessPowerTimer(unsigned int *a2);
    void* Construct(int a1);  // 0x42F1E0
    void ddtor();  // 0x42F3A0
    int Write(int a1);  // 0x42F3D0
    int Seek(int a1, int a2);  // 0x42F3F0
    char AddRef(int a1);  // 0x42F490
    int Release(int a1, void* a2);  // 0x42F4F0
    int Read(int a1);  // 0x42F5E0
    void* QueryInterface(int a1);  // 0x42F970
    // --- gap2 auto-generated stub declarations (END) ---
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    int LoadBaseNodeClass(int a1, int a2);  // 0x42ee30
    int LoadArrayFields(int a1, int a2);  // 0x42f070
    // === FUNCS-MOVE (END) ===
};

} // namespace gamemd
