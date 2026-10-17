// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once


#include "e4/classes/_fwd_e4.hpp"

namespace gamemd {

struct Render {
    int Render_field_00;  // 0x0
// --- flat members (BEGIN) ---
// --- flat members (END) ---
    AbstractClass * * DrawLine(int a1, int a2, int a3, int a4, int a5, int a6, int a7, char a8);
    static void DrawTileBitmap(int a1, unsigned short * a2, short a3, short a4, unsigned int a5, int a6);
};

} // namespace gamemd
