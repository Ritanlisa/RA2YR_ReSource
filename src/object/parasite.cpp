#include "object/parasite.hpp"

namespace ra2 { namespace game {

// --- ParasiteClass ---

HRESULT __stdcall ParasiteClass::GetClassID(CLSID* class_id) { return 0; }
HRESULT __stdcall ParasiteClass::Load(IStream* stream) { return 0; }
HRESULT __stdcall ParasiteClass::Save(IStream* stream, int clear_dirty) { return 0; }
void ParasiteClass::pointerExpired(AbstractClass* ptr, bool removed) {}
AbstractType __stdcall ParasiteClass::whatAmI() const { return kObjectDeriveId; }
int ParasiteClass::objectSize() const { return 0; }
void ParasiteClass::calculateChecksum(void* checksum) const {}
int ParasiteClass::StubReturn67() const { return 67; }
int ParasiteClass::StubReturn88() const { return 88; }

} // namespace game
} // namespace ra2
