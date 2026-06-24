#pragma once

#include <cstdint>

#include "object/abstract.hpp"

namespace gamemd {

#ifndef GAMEMD_USING_ObjectClass
#define GAMEMD_USING_ObjectClass
using ra2::game::ObjectClass;
#endif

// IDA: inline struct in map.hpp
// Dynamically-resized array of ObjectClass* pointers
struct LayerClass
{
    ObjectClass**  items;    // +0x00
    int32_t        count;    // +0x04
    int32_t        capacity; // +0x08
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    int Save(void* a1);  // 0x551B20
    int Load(void* a1);  // 0x551B90
    int AssignCellOwnership();  // 0x5855A0
    void Update_Pathfinding_2(int a1);  // 0x586990
    int ClearFactoryCellAssignments();  // 0x588AC0
    // --- gap2 auto-generated stub declarations (END) ---
};

} // namespace gamemd
