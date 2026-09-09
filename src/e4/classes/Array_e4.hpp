// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct Array {
    void* vfptr;  // minimal E2 declaration
    int ForEach(AbstractClass * aP0, int a2, IUnknown * aP2, int (__thiscall *a4)(int) a4);  // 0x4068F0
    int ForEachReverse(ObjectClass * aP0, int a2, int a3, int (__thiscall *a4)(int) a4);  // 0x40AFD0
    void Cleanup();  // 0x49B720
    char GetElementAt(unsigned int * a2, int a3);  // 0x49D070
    int GetClamped(CheckListClass * aP1);  // 0x557AC0
    void RemoveItemByValue(AbstractClass * aP0, int a2);  // 0x55B880
    int FindValue(IUnknown * aP1);  // 0x634290
    char RemoveAt(int a2);  // 0x63E590
    int Get(int a2);  // 0x65AD40
    char ContainsValue(IUnknown * aP1);  // 0x65ADF0
    int Zero();  // 0x7490D0
    void ByteSwap();  // 0x749150
    int GetElement(CampaignScore * aP1);  // 0x763980
    int CleanupArrayWOL();  // 0x7ACD30
    char InsertElement(const void * a1, ObjectClass * aP2);  // 0x7AD790
};
} // namespace gamemd
