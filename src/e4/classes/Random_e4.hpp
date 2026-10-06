// GENERATED minimal flat class (fix_c2039_methods)
#pragma once

namespace gamemd {

struct Random {
    int __thiscall AdvanceRandomBytes(char a2);
    static int Range(...);
    int State();
    static int State(void *aP0);  // G57a1 static-form sync (Random::State(&Randomizer_Global) sites)
    static int Gaussian(void *aP0);  // G57a1 static-form sync (RandomMap 0x59c2c1+)
    static int AdvanceRandomBytes(void *aP0);  // G57a1 static-form sync
};

} // namespace gamemd
