// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once



#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct WaveClass {
// --- flat members (BEGIN) ---
    void* vtable1;  // 0x0
    void* vtable2;  // 0x4
    void* vtable3;  // 0x8
    void* vtable4;  // 0xC
    unsigned int WaveClass_field_BC;  // 0x10
    ObjectClass* nextObject;  // 0x12
    bool IsAllocated;  // 0x13
    bool q02B;  // 0x2B
    unsigned char q03A;  // 0x3A
    bool inLimbo;  // 0x5D
    bool inOpenToppedTransport;  // 0x5E
    bool wasFallingDown;  // 0x6A
    unsigned int q08A;  // 0x8A
    unsigned int q08B;  // 0x8B
    bool isFallingDown;  // 0x8D
    bool isVisible;  // 0x99
    unsigned int Owner;  // 0x128
    unsigned char Facing;  // 0x12C
    unsigned int Cells;  // 0x130
    unsigned int q138;  // 0x138
    unsigned int q13C;  // 0x13C
    unsigned int q140;  // 0x140
    unsigned int q144;  // 0x144
    unsigned int q150;  // 0x150
    unsigned int q154;  // 0x154
    unsigned int q158;  // 0x158
    unsigned int q164;  // 0x164
    unsigned int q168;  // 0x168
    bool q17B;  // 0x17B
    unsigned int q19C;  // 0x19C
    unsigned int q1AC;  // 0x1AC
    unsigned int q1B0;  // 0x1B0
    unsigned int Constructor_7632D0;
// --- flat members (END) ---
    WaveClass * ddtor(char a2, int aP1, int a1, int a3);
    char DamageArea(ObjectClass * aP1);
    int CheckStateFlag();
    int GetClassIdentifier(int a1, unsigned int * a2);
    int GetObjectSize();
    int GetTypeIdentifier();
    int LoadWaveData(int a2, int a3);
    int ProcessWaveTick(int * a1, int * a2, int a3);
    int StubReturnFalse();
     double Destroy(...);  // C2597 interim stub
     double Dtor(...);  // C2597 interim stub
};

} // namespace gamemd
