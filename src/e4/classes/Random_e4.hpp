// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

namespace gamemd {

#ifndef GAMEMD_G2_Random_DEF  // G42.57w14 twin-guard (shared; first-include wins)
#define GAMEMD_G2_Random_DEF 1
struct Random {
    int __thiscall AdvanceRandomBytes(char a2);
    static int Range(Random * aP1, int a2, int a3);  // G57w10-S raw 0x0065C7E0 (was C2597 interim stub)
    int State();
    static int State(void *aP0);  // G57a1 static-form sync (Random::State(&Randomizer_Global) sites)
    static int Gaussian(void *aP0);  // G57a1 static-form sync (RandomMap 0x59c2c1+)
    static int AdvanceRandomBytes(void *aP0);  // G57a1 static-form sync
};
    int AdvanceRandomBytes();  // G57w19k2 C2661 supply
#endif  // GAMEMD_G2_Random_DEF

} // namespace gamemd
