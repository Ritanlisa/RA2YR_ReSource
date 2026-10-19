// X74: flat carrier for the List<INIClass::INISection*> global object at
// 0x887064 (RTTI ?$List@PAUINISection@INIClass@@, ptr_0 0x7E1AFC).
// Layout evidence: init 0x40E1C0 store map + GenericList::Constructor
// 0x52ACE0 (28B base part: vptr + two 12B GenericNode sentinels) + 7 own
// members (0x887080-0x88709B, zeroed at init, no other refs at X74 time).
// Sentinel tail slots (First_t8/Last_t8) absorb the +8 link dwords of the
// binary 12B sentinels: the e4 GenericNode carrier is 8B (consumer pointer
// arithmetic is baked to it; relayout = separate re-render lane, X74-P0).
#pragma once

#include "e4/classes/GenericNode_e4.hpp"

namespace gamemd {

struct List_INISection {
    void* ptr_0;  // 0x0
    GenericNode First;  // 0x4 (sentinel A; binary 12B: +8 tail below)
    unsigned int First_t8;  // 0xC
    GenericNode Last;  // 0x10 (sentinel B; +8 tail below)
    unsigned int Last_t8;  // 0x18
    unsigned int u32_1C;  // 0x1C
    unsigned int u32_20;  // 0x20
    unsigned int u32_24;  // 0x24
    unsigned char u8_28;  // 0x28
    unsigned int u32_2C;  // 0x2C
    unsigned int u32_30;  // 0x30
    unsigned char u8_34;  // 0x34
};

extern List_INISection g_IniSectionList;  // data: 0x887064 (X74 merge of dword_887064/68/6C/70/unk_887074/80-98)

} // namespace gamemd
