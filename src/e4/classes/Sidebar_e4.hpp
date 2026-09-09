// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct Sidebar {
    void* vfptr;  // minimal E2 declaration
    int StartSidebarProduction(void * a1, BuildingTypeClass * aP2, HouseClass * aP3, char a5);  // 0x4FA350
    char Dispatch(IUnknown * aP1, char a3, int a4, char a5);  // 0x5007A0
    int ScrollSidebarSkipGame();  // 0x533F50
    void CancelSidebarProductionQueue(int * Block);  // 0x636310
    char RemoveItem(int a2);  // 0x63F040
    int Render(char a2);  // 0x63FB20
    int ActivateTab(IUnknown * aP1);  // 0x6A60A0
    char FindProductionType(FactoryClass * aP1, MouseClass * aP2, int a4);  // 0x6A6140
    void FlushSidebarTooltip(char a2);  // 0x6A70E0
};
} // namespace gamemd
