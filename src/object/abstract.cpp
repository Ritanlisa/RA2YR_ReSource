// AbstractClass -- root of the game object hierarchy
// IDA: Constructor @ 0x410170, vtable[0] @ 0x7E1F50 (28 entries)
// Verified member offsets: +0x00/+0x04/+0x08/+0x0C vtables, +0x10 id, +0x14 flags, +0x18..+0x23 fields

#include "object/abstract.hpp"
#include "object/object.hpp"
#include "system/scenario.hpp"
#include "core/reverse_marker.hpp"

namespace ra2 {
namespace game {

// IDA: 0x410170 -- AbstractClass::Constructor
// Layout confirmed: 4 vtables at 0x00/0x04/0x08/0x0C, fields at 0x10-0x20
AbstractClass::AbstractClass() noexcept
    : uniqueId((uint32_t)(-1))  // 0x410191: mov [eax+0x10], 0xFFFFFFFF
    , abstractFlags(0)                      // 0x4101B3: mov [eax+0x14], cl (preserved & 0xF8 from caller)
    , nextArrayIndex(0)                          // 0x410182: mov [eax+0x18], 0
    , referenceCount(0)                           // 0x410185: mov [eax+0x1C], 0
    , NeedsSaveOrLink(nullptr)                   // 0x410188: mov [eax+0x20], 0
{
    // IDA preserves bits 7-3 of pre-existing abstractFlags (& 0xF8).
    // In practice heap memory is zeroed, so result is abstractFlags = 0.
    // The vtable pointer dance (temp INoticeSink/INoticeSource -- final merged)
    // is handled automatically by the C++ compiler for MI.
}

// IDA: 0x410260 -- vtable[0][0], AbstractClass::QueryInterface
REVERSE(0x410260, "AbstractClass::QueryInterface: IDA verified", "None")
// 0x410260
HRESULT AbstractClass::QueryInterface(const IID& iid, void** ppv) {
  void **p_vtable1; // ecx
  AbstractClass *thisa; // [esp+8h] [ebp+4h]
  const void *iid; // [esp+Ch] [ebp+8h]
  void **ppv; // [esp+10h] [ebp+Ch]

  if ( !ppv ) /*0x410267*/
    return -2147467261; /*0x410269*/
  *ppv = 0; /*0x410286*/
  if ( !memcmp((const void *)(iid), &IID_IUnknown, 0x10u) ) /*0x410290*/
    *ppv = thisa; /*0x410294*/
  if ( !memcmp((const void *)(iid), &IID_IPersistStream, 0x10u) ) /*0x4102a5*/
    *ppv = thisa; /*0x4102a9*/
  if ( !memcmp((const void *)(iid), &IID_IPersist, 0x10u) ) /*0x4102b9*/
    *ppv = thisa; /*0x4102be*/
  if ( !memcmp((const void *)(iid), &IID_IRTTITypeInfo, 0x10u) ) /*0x4102ce*/
  {
    if ( thisa ) /*0x4102d6*/
      p_vtable1 = &thisa->vtable1; /*0x4102d8*/
    else
      p_vtable1 = 0; /*0x4102dd*/
    *ppv = p_vtable1; /*0x4102df*/
  }
// IDA: 0x410300 -- vtable[0][1] (COMStub_AddRef)
ULONG AbstractClass::AddRef() {
    return 1;  // IDA: returns 1 (stub, not tracking ref count)
}

// IDA: 0x410310 -- vtable[0][2] (COMStub_Release)
ULONG AbstractClass::Release() {
    return 1;  // IDA: returns 1 (stub, not tracking ref count)
}

// IDA: vtable[0][3] -- GetClassID (XSurface::vt_entry_68 stub @ 0x4C9150)
HRESULT AbstractClass::GetClassID(CLSID* class_id) {
    return E_NOTIMPL;
}

// IDA: 0x7099D0 -- AbstractClass::IsDirty (IPersistStream override)
// COM IPersistStream::IsDirty: returns S_OK when needsSave is set (dirty), S_FALSE when clean.
// NOTE: the previous 0x410450 annotation was wrong -- that address is the separate
//       AbstractClass::IsClean getter (returns *(this+0x20)==0), not this method.
HRESULT AbstractClass::IsDirty() {
    return NeedsSaveOrLink ? S_OK : S_FALSE;
}

// IDA: vtable[0][5] -- Load (stub = XSurface::vt_entry_68)
HRESULT AbstractClass::Load(IStream* stream) {
    return S_OK;
}

// IDA: vtable[0][6] -- Save (stub = XSurface::vt_entry_68)
HRESULT AbstractClass::Save(IStream* stream, int clear_dirty) {
    return S_OK;
}

// IDA: vtable[0][7] -- GetSizeMax (delegated to ObjectClass::GetSizeMax @ 0x4103E0)
HRESULT AbstractClass::GetSizeMax(ULARGE_INTEGER* size) {
    return E_NOTIMPL;
}

// IDA: 0x410230 -- vtable[1][5], GenerateUniqueID / createId
// Calls updateAITimer() (vtable[1] method) when ScenarioClass instance exists,
// stores returned ID into uniqueId. If no ScenarioClass, uniqueId = 0.
void AbstractClass::createId() {
    if (gamemd::ScenarioClass::Instance) {
        // IDA: result = AbstractClass::updateAITimer() -- generates next unique ID
        // The generated ID is stored in uniqueId (at &this->u32_30 via IRTTITypeInfo sub-object offset)
        uniqueId = 0;  // updateAITimer() returns the next ID; stub until full ID system is wired
    } else {
        uniqueId = 0;
    }
}

// IDA: 0x410540 -- vtable[0][22], AbstractClass::GetCoords
// Dispatches vtable[0][18] (+72; base impl GetInvalidCoord @ 0x4104C0,
// overridden e.g. by BuildingClass::GetExitCoords @ 0x447AC0) into a local
// buffer, then copies the returned XYZ to the out param.
// 0x410540
CoordStruct* AbstractClass::GetCoords(CoordStruct* out) const
{
    int *v1; // ecx
    unsigned char v3[12]; // [esp+4h] [ebp-Ch] BYREF
    CoordStruct *out; // [esp+14h] [ebp+4h]

    v1 = (int *)(*(int (__thiscall **)(AbstractClass *, unsigned char *))(this->vtable0 + 72))(this, v3); /*0x41054e*/
    out->vfptr = (void *)*v1; /*0x410558*/
    out[1].vfptr = (void *)v1[1]; /*0x41055d*/
    out[2].vfptr = (void *)v1[2]; /*0x410564*/
    return (int)out; /*0x410560*/
}
// src-model helper kept for the existing callers (techno.cpp): the pointer
// flavor simply forwards to the virtual GetCoords above.
CoordStruct* AbstractClass::fetchCoordinatesHere(CoordStruct* out) const {
    return GetCoords(out);
}

} // namespace game
} // namespace ra2

#include "object/abstract.hpp"

namespace ra2 { namespace game {

// --- AbstractClass ---

AbstractType __stdcall AbstractClass::whatAmI() const { return kObjectTypeId; }
int __stdcall AbstractClass::fetchId() const { return 0; }
bool __stdcall AbstractClass::onNotice(unsigned long event) { return false; }
void __stdcall AbstractClass::notifySinks() {}
void AbstractClass::initialize() {}
void AbstractClass::pointerExpired(AbstractClass* ptr, bool removed) {}
int AbstractClass::objectSize() const { return 0; }
void AbstractClass::calculateChecksum(Checksummer& checksum) const {}
int AbstractClass::owningHouseIndex() const { return -1; }
HouseClass* AbstractClass::owningHouse() const { return nullptr; }
int AbstractClass::arrayIndex() const { return -1; }
bool AbstractClass::isDead() const { return false; }
CoordStruct* AbstractClass::fetchDestination(CoordStruct* out, TechnoClass* docker) const { return nullptr; }
bool AbstractClass::isOnGround() const { return false; }
bool AbstractClass::isAirborne() const { return false; }
CoordStruct* AbstractClass::fetchAlternateCoordinates(CoordStruct* out) const { return nullptr; }
void AbstractClass::updateLogic() {}
CoordStruct AbstractClass::fetchCoordinatesHere() const { CoordStruct crd; fetchCoordinatesHere(&crd); return crd; }
CoordStruct AbstractClass::fetchDestination(TechnoClass* docker) const { CoordStruct crd; fetchDestination(&crd, docker); return crd; }
CoordStruct AbstractClass::fetchAlternateCoordinates() const { CoordStruct crd; fetchAlternateCoordinates(&crd); return crd; 
bool AbstractClass::operator<(const AbstractClass& rhs) const { return uniqueId < rhs.uniqueId; 

} // namespace game
} // namespace ra2
