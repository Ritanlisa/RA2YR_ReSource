#include "object/temporal.hpp"

namespace ra2 { namespace game {

// --- TemporalClass ---

HRESULT __stdcall TemporalClass::GetClassID(CLSID* class_id) { return 0; }
HRESULT __stdcall TemporalClass::Load(IStream* stream) { return 0; }
HRESULT __stdcall TemporalClass::Save(IStream* stream, int clear_dirty) { return 0; }
void TemporalClass::pointerExpired(AbstractClass* ptr, bool removed) {}
AbstractType __stdcall TemporalClass::whatAmI() const { return kObjectDeriveId; }
int TemporalClass::objectSize() const { return 0; }
void TemporalClass::calculateChecksum(void* checksum) const {}
int TemporalClass::StubReturn70() const { return 70; }
int TemporalClass::StubReturn80() const { return 80; }

} // namespace game
} // namespace ra2
