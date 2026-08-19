#include "object/bomb.hpp"

namespace ra2 { namespace game {

// --- BombClass ---

HRESULT __stdcall BombClass::GetClassID(CLSID* class_id) { return 0; }
HRESULT __stdcall BombClass::Load(IStream* stream) { return 0; }
HRESULT __stdcall BombClass::Save(IStream* stream, int clear_dirty) { return 0; }
void BombClass::pointerExpired(AbstractClass* ptr, bool removed) {}
AbstractType __stdcall BombClass::whatAmI() const { return kObjectDeriveId; }
int BombClass::objectSize() const { return 0; }
void BombClass::calculateChecksum(void* checksum) const {}
int BombClass::StubReturn68() const { return 68; }
int BombClass::StubReturn92() const { return 92; }

} // namespace game
} // namespace ra2
