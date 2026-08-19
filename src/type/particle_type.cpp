#include "type/particle_type.hpp"

namespace gamemd {

// --- ParticleTypeClass ---

AbstractType __stdcall ParticleTypeClass::whatAmI() const { return AbstractType::ParticleType; }
int ParticleTypeClass::objectSize() const { return 0; }
bool ParticleTypeClass::SpawnAtMapCoords(CellStruct* pMapCoords, HouseClass* pOwner) { return false; }
ObjectClass* ParticleTypeClass::CreateObject(HouseClass* pOwner) { return nullptr; }

} // namespace gamemd
