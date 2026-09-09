// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct Tactical {
    void* vfptr;  // minimal E2 declaration
    char * ConstructTacticalSurface();  // 0x42A6D0
    unsigned int * MouseMove(MouseClass * aP1, MouseClass * aP2);  // 0x4A91B0
    char SelectObject(int a2);  // 0x4F4450
    bool IsCellVisible(IUnknown * aP1);  // 0x568350
    char * GetCellData();  // 0x58C2A0
    char HandleTacticalMouseInput(int _28, unsigned int * a2, int a4, MouseClass * aP4);  // 0x6930A0
    int UpdateUIVisibility();  // 0x6A6610
    void DisplayTacticalOverlayText(wchar_t * String);  // 0x6D4E20
    unsigned int SetTacticalPosition(IUnknown * aP1);  // 0x6D6070
    unsigned int * PixelToCell(AbstractClass * aP1, IUnknown * aP2);  // 0x6D6590
    int * ScrollMap(Tactical * aP0, int a2);  // 0x6DA560
    int AddCellToDrawList(IUnknown * aP1);  // 0x6DA7D0
    int DrawTacticalConnectorLines();  // 0x6DB210
    char DrawOverlay(int * a1, BuildingTypeClass * aP2, int a4, int a5);  // 0x6DBB60
    int ddtor(int a1, unsigned int * a2);  // 0x6DBCE0
    int InitMap(int a1, int a2);  // 0x6DBD20
    int UpdateMapView(TechnoTypeClass * aP0, int * a1, int aP2);  // 0x6DBE00
    int StubReturn56();  // 0x6DC450
    int StubReturn3608();  // 0x6DC460
    Tactical * UpdateView(unsigned int * Block, char a2);  // 0x6DC470
    int Init(unsigned int * a2);  // 0x6E4970
};
} // namespace gamemd
