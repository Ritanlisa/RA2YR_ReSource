// GENERATED flat e4 class (mechanical, supply_e4_class_decls)
#pragma once

namespace gamemd {
class IsRookie;  // G42.36 fwd supply
class Accumulate;  // G42.36 fwd supply

struct VeterancyStruct {
    void* vfptr;
    BOOL IsElite();
    BOOL IsVeteran();
    void Accumulate(int a1, int a2);
    bool IsRookie();
};

} // namespace gamemd
