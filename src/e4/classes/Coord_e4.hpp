// E2 minimal declaration (auto-generated, full layout via member_lookup/til)
#pragma once

namespace gamemd {
struct Coord {
    void* vfptr;  // minimal E2 declaration
    int ToGridIndex(VectorClass * aP1, VectorClass * aP2, VectorClass * aP3);  // 0x4138C0
    unsigned int * ToCell(IUnknown * aP1);  // 0x413A30
    IUnknown * Subtract(IUnknown * aP1, IUnknown * aP2, IUnknown * aP3);  // 0x41C230
    double Length();  // 0x41C380
    unsigned int * GetCoords(int * outCoords);  // 0x4399A0
    float * Scale(IUnknown * aP1);  // 0x43A0D0
    void * To_Cell(IUnknown * aP1);  // 0x565730
    BOOL Compare2D(unsigned short * a2);  // 0x5AC370
    int * WorldToScreen(MouseClass * aP1, MouseClass * aP2, char a4);  // 0x6557F0
    int * To_ScreenRaw(AbstractClass * aP0, IUnknown * aP1);  // 0x6D1F10
    long long ScaleToScreenY();  // 0x6D2120
    bool To_Screen(unsigned int * a1, IUnknown * aP2);  // 0x6D2140
    int * Divide(int * a2, int a3);  // 0x710700
};
} // namespace gamemd
