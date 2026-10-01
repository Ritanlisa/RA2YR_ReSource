// GENERATED template-collision flat carrier (mechanical).
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct AbstractClass;  // fix_fwd_type_supply
struct LinkClass;  // fix_fwd_type_supply

struct LinkedList_flat {
// --- flat members (BEGIN) ---
    unsigned int u32_4;  // 0x4
    unsigned int u32_8;  // 0x8
    unsigned int u32_18;  // 0x18
    unsigned int u32_1C;  // 0x1C
    unsigned int u32_28;  // 0x28
    unsigned int u32_34;  // 0x34
    unsigned int *__pad_0;
    unsigned int __tail_0;
    unsigned int m_Next;
    unsigned int m_Prev;
    unsigned int q018;
    unsigned int q014;
    unsigned int q01C;
    unsigned int Tail;
    unsigned int q004;
    unsigned int Debug;
    unsigned int PushFront;
// --- flat members (END) ---
AbstractClass * * LoadScenarioMixFiles(INIClass * aP0, int aP2, int a3, int a4);
LinkClass * * Append(int a2, void *a2_2);
LinkClass * * InsertAfter(int a2);
int * Next();
int Contains(IUnknown * aP1);
int Init(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8);
unsigned int * FindNext();
unsigned int * FindPrev();
void * MoveNode(void * a2);
void RelinkNode(int a2);
int Remove(unsigned int * a2);
};

} // namespace gamemd
