// GENERATED template-collision flat carrier (mechanical).
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct LinkClass;  // fix_fwd_type_supply

struct LinkedList_flat {
// --- flat members (BEGIN) ---
    unsigned int u32_4;  // 0x4
    unsigned int u32_8;  // 0x8
    unsigned int u32_18;  // 0x18
    unsigned int u32_1C;  // 0x1C
    unsigned int u32_28;  // 0x28
    unsigned int u32_34;  // 0x34
// --- flat members (END) ---
AbstractClass * * LoadScenarioMixFiles(int a2, int a3, int a4, int aP0, int aP1);
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
    int PushFront(int a2); // N_fix R5 supply (cache truth)
    int Prepend(int a2); // N_fix R5 supply (cache truth)
    unsigned int * Attach(int a2);
    int RemoveNode();
    int Pop();
};


// G57c8: corpus static-form carrier -- raw_decomp renders the WW-lib list
// calls as `LinkedList::Init/Pop/Next/...` (136/38/26 sites etc., all
// passing the receiver as arg0). LinkedList_flat above keeps the til
// member-form layout; this twin carries the static call forms. No e4 TU
// includes system/mix_file.hpp (verified), so no gap2 twin conflict.
struct LinkedList {
    static int Init(void *aP0);  // 136 corpus sites
    static int Prepend(void *aP0);  // 86
    static void * Pop(void *aP0);  // 38
    static int * Next(void *aP0);  // 26
    static int Remove(void *aP0, unsigned int *aP1);  // 22
    static int Contains(void *aP0, IUnknown *aP1);  // 18
    static int MoveNode(void *aP0);  // 14
    static LinkClass * * InsertAfter(void *aP0, int aP1);  // 7
    static unsigned int * Attach(void *aP0, int aP1);  // 6
    static LinkClass * * Append(void *aP0, void *aP1);  // 6
    static int RemoveNode(void *aP0);  // 5
    static unsigned int * FindPrev(void *aP0);  // 5
    static unsigned int * FindNext(void *aP0);  // 2
    static int PushFront(void *aP0, int aP1);  // 4
    static AbstractClass * * LoadScenarioMixFiles(void *aP0, int aP1, int aP2, int aP3, int aP4);  // 2
    char __pad_0[4];  // 0x0 (G57W14E1 til supply)
};

} // namespace gamemd
