#include "object/airstrike.hpp"

namespace ra2 { namespace game {

// --- AirstrikeClass ---

HRESULT __stdcall AirstrikeClass::GetClassID(CLSID* class_id) { return 0; }
HRESULT __stdcall AirstrikeClass::Load(IStream* stream) { return 0; }
HRESULT __stdcall AirstrikeClass::Save(IStream* stream, int clear_dirty) { return 0; }
void AirstrikeClass::pointerExpired(AbstractClass* ptr, bool removed) {}
AbstractType __stdcall AirstrikeClass::whatAmI() const { return kObjectDeriveId; }
int AirstrikeClass::objectSize() const { return 0; }
void AirstrikeClass::calculateChecksum(void* checksum) const {}
bool AirstrikeClass::StubReturnFalse() const { return false; }
int AirstrikeClass::StubReturn71() const { return 71; }
int AirstrikeClass::StubReturn96() const { return 96; }

} // namespace game
} // namespace ra2
