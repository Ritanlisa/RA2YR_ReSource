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
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    bool CoordinatesLegal(int a1);  // 0x568300 -- LayerClass::CoordinatesLegal
    void* Reveal(int a1);  // 0x577d90 -- LayerClass::Reveal
    int CellIteratorNext();  // 0x578290 -- LayerClass::CellIteratorNext
    int CellIteratorReset();  // 0x578350 -- LayerClass::CellIteratorReset
    bool IsWithinUsableArea(int a1, int a2);  // 0x578460 -- LayerClass::IsWithinUsableArea
    int DestroyCliff(int a1, int a2, int a3);  // 0x581140 -- LayerClass::DestroyCliff
    // === SYMBOL-ANCHOR (END) ===
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    void* Pathfinding_Find(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17);  // 0x56dc20
    // === FUNCS-MOVE (END) ===
};

} // namespace gamemd
