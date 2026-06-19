#include "entity/ebolt.hpp"

namespace gamemd {

// --- EBolt ---

void EBolt::SetOwner(UnitClass* owner, int weaponIdx) {}
void EBolt::ClearOwner() {}
CoordStruct* EBolt::GetSourceCoords(CoordStruct* out) const { return out; }
CoordStruct EBolt::GetSourceCoords() const { CoordStruct b; GetSourceCoords(&b); return b; }
void EBolt::Fire(const CoordStruct&, const CoordStruct&, uint32_t) {}

} // namespace gamemd
