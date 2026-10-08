// G42.42q batch minimal carriers (C2036/C2027 family)
#pragma once

namespace gamemd {
class AnimClass;  // G42.36 fwd supply
class CanDeployAtCell;  // G42.36 fwd supply
} // namespace gamemd
namespace gamemd {
struct CellCoord { void* vfptr; };  // minimal E2 (size-fix pending til evidence)
struct Rules { void* vfptr; };  // minimal E2 (size-fix pending til evidence)
} // namespace gamemd
namespace gamemd {
struct InfantryClass { void* vfptr; };  // minimal E2 (size-fix pending til evidence)
struct ScenarioClass { void* vfptr; public:  // g57c5 W4 supply slot
    void* q010;  // 0x10 g57c5 W4 supply (ml ScenarioClass@0x10)
};  // minimal E2 (size-fix pending til evidence)
struct TeamClass { void* vfptr; };  // minimal E2 (size-fix pending til evidence)
struct UnitTypeClass { void* vfptr; };  // minimal E2 (size-fix pending til evidence)
} // namespace gamemd
