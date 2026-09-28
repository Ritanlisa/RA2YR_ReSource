// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {
struct VectorClass_UDirtyAreaStruct {
// --- flat members (BEGIN) ---
    unsigned int vfptr;  // 0x0
    void* Items;  // 0x4
    void* Capacity;  // 0x8
    void* IsInitialized;  // 0xC
    unsigned char IsAllocated;  // 0xD
    unsigned char q00E;  // 0xE
    void* Count;  // 0x10
// --- flat members (END) ---
    char SetCapacity(CCINIClass * aP1,  char * a2);    // 0x6DC850
    DynamicVector * Constructor_VectorClass_ShadowControlClass___(char a2);  // 0x6DCD20
    void Destroy();  // 0x6DC4E0
    unsigned int GetItemIndex(int a2);  // 0x6DC510
    int Clear(int a2,  int a3);    // 0x6DC540
    void Destroy_0();  // 0x6DC580
    unsigned int GetItemIndex_0(int a2);  // 0x6DC5B0
    char AddRef(int a2);  // 0x6DC5E0
    char Release(int a2,  char * a3);    // 0x6DC660
    void ddtor();  // 0x6DC780
    int GetSize(int a2);  // 0x6DC7B0
    unsigned int GetCapacity(int a2);  // 0x6DC820
    int FindItemIndex(int a2);  // 0x6DC970
    char SetCapacity_0(int a2,  unsigned int * a3);    // 0x6DCB50
    int FindItemIndex_0(unsigned int * a2);  // 0x6DCC00
    VectorClass_flat * QueryInterface(unsigned int * Block,  char a2);    // 0x6DCC30
    unsigned int * loc_6DCC80(unsigned int * Block,  char a2);    // 0x6DCC80
};
} // namespace gamemd
