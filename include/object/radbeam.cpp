#include "object/radbeam.hpp"

namespace ra2 { namespace game {

// --- RadBeam ---

HRESULT __stdcall RadBeam::GetClassID(CLSID* class_id) { return 0; }
HRESULT __stdcall RadBeam::Load(IStream* stream) { return 0; }
HRESULT __stdcall RadBeam::Save(IStream* stream, int clear_dirty) { return 0; }
void RadBeam::pointerExpired(AbstractClass* ptr, bool removed) {}
AbstractType __stdcall RadBeam::whatAmI() const { return kObjectDeriveId; }
int RadBeam::objectSize() const { return 0; }
void RadBeam::calculateChecksum(void* checksum) const {}

} // namespace game
} // namespace ra2
