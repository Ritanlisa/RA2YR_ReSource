// GENERATED template-collision flat carrier (mechanical).
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct LinkedList_flat {
// --- flat members (BEGIN) ---
    unsigned int u32_4;  // 0x4
    unsigned int u32_8;  // 0x8
    unsigned int u32_18;  // 0x18
    unsigned int u32_1C;  // 0x1C
    unsigned int u32_28;  // 0x28
    unsigned int u32_34;  // 0x34
    unsigned int __pad_0;
    unsigned int __tail_0;
    unsigned int m_Next;
    unsigned int m_Prev;
    unsigned int q014;
    unsigned int q018;
    unsigned int q01C;
    unsigned int PushFront;
// --- flat members (END) ---
AbstractClass * * LoadScenarioMixFiles(INIClass * aP0, int aP2, int a3, int a4, void * a1, void * a2);
LinkClass * * Append(int a2);
LinkClass * * InsertAfter(int a2);
int * Next();
int Contains(IUnknown * aP1);
int Init();
int Pop();
int Prepend(int a2);aP1);
int RemoveNode();
unsigned int * Attach(int a2);
unsigned int * FindNext();
unsigned int * FindPrev();
void * MoveNode(void * a2);
void RelinkNode(int a2);
void Remove(unsigned int * a2);
};

} // namespace gamemd
