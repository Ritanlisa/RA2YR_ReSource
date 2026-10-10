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
// CSP: LayerClass matched via T1
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
    static bool __stdcall CoordinatesLegal(void* a1);  // 0x568300 (IDA: int __stdcall(int16_t*), 无接收者)
    void* Reveal(int a1);  // 0x577d90 -- LayerClass::Reveal
    int CellIteratorNext();  // 0x578290 -- LayerClass::CellIteratorNext
    int CellIteratorReset();  // 0x578350 -- LayerClass::CellIteratorReset
    bool IsWithinUsableArea(int a1, int a2);  // 0x578460 -- LayerClass::IsWithinUsableArea
    int DestroyCliff(int a1, int a2, int a3);  // 0x581140 -- LayerClass::DestroyCliff
    // === SYMBOL-ANCHOR (END) ===
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    void* Pathfinding_Find(int a1, void* a2, int16_t* a3, int a4, int a5, int a6, char a7, int a8, int a9, char a10, char a11, char a12, char a13, int16_t* a14, char a15, char a16);  // 0x56dc20 IDA 真值原型定型 (this+16)
    // === FUNCS-MOVE (END) ===
    int Load(unsigned int * a2);
};

} // namespace gamemd
