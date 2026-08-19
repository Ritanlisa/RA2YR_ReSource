#include "type/particle_system_type.hpp"

namespace gamemd {

// --- ParticleSystemTypeClass ---

AbstractType __stdcall ParticleSystemTypeClass::whatAmI() const { return AbstractType::ParticleSystemType; }
int ParticleSystemTypeClass::objectSize() const { return 0; }
bool ParticleSystemTypeClass::SpawnAtMapCoords(CellStruct* pMapCoords, HouseClass* pOwner) { return false; }
ObjectClass* ParticleSystemTypeClass::CreateObject(HouseClass* pOwner) { return nullptr; }

} // namespace gamemd
