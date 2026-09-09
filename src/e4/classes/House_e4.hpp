// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct House {
    void* vfptr;  // minimal E2 declaration
    void AnnounceUpgrade(IUnknown * aP1);  // 0x47D2B0
    unsigned int * GetStartCoords(IUnknown * aP1);  // 0x47FB90
    int UpdateHouseAI();  // 0x4FD500
    int IsHumanPlayer();  // 0x50B6F0
    int IsCurrentPlayer();  // 0x50B730
    int ChooseHouseEnemy(BuildingClass * aP1);  // 0x50DB00
    int LookupObject(int a2);  // 0x544BE0
    bool LoadMapFileData(int a2, char a3);  // 0x544C20
    void Constructor();  // 0x69E090
    int PowerBeginUpdate(AbstractClass * aP1);  // 0x70C270
};
} // namespace gamemd
