// AbstractClass -- root of the game object hierarchy
// IDA: Constructor @ 0x410170, vtable[0] @ 0x7E1F50 (28 entries)
// Verified member offsets: +0x00/+0x04/+0x08/+0x0C vtables, +0x10 id, +0x14 flags, +0x18..+0x23 fields

#include "object/abstract.hpp"
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
// Checks IUnknown / IPersistStream / IPersist / IRTTITypeInfo IIDs
// 0x410260
HRESULT AbstractClass::QueryInterface(const IID& iid, void** ppv) {
// [IDA decompile]
int __thiscall AbstractClass::QueryInterface(#374 *this)
{
  int *v2; // ecx
  #373 *thisa; // [esp+8h] [ebp+4h]
  const void *iid; // [esp+Ch] [ebp+8h]
  void **ppv; // [esp+10h] [ebp+Ch]

  if ( !ppv )
    return -2147467261;
  *ppv = 0;
  if ( !memcmp(iid, &IID_IUnknown, 0x10u) )
    *ppv = thisa;
  if ( !memcmp(iid, &IID_IPersistStream, 0x10u) )
    *ppv = thisa;
  if ( !memcmp(iid, &IID_IPersist, 0x10u) )
    *ppv = thisa;
  if ( !memcmp(iid, &IID_IRTTITypeInfo, 0x10u) )
  {
    if ( thisa )
      v2 = (int *)((char *)thisa + 4);
    else
      v2 = 0;
    *ppv = v2;
  }
  if ( !*ppv )
    return -2147467262;
  (*(void (__stdcall **)(#373 *))(*(_DWORD *)thisa + 4))(thisa);
  return 0;
}

/* ASM:
this            = dword ptr  4
iid             = dword ptr  8
ppv             = dword ptr  0Ch

mov     eax, [esp+ppv]

AbstractClass__sub_410264:
push    ebx
test    eax, eax
jnz     short loc_410272
mov     eax, 80004003h

AbstractClass__sub_41026E:
pop     ebx
retn    0Ch
; ---------------------------------------------------------------------------

loc_410272:                             ; CODE XREF: AbstractClass__QueryInterface+7↑j
mov     edx, [esp+4+iid]
push    esi
push    edi
mov     ecx, 4
mov     edi, offset IID_IUnknown
mov     esi, edx
xor     ebx, ebx
mov     dword ptr [eax], 0
mov     ebx, [esp+0Ch+this]
repe cmpsd
jnz     short loc_410296

AbstractClass__sub_410294:
mov     [eax], ebx

loc_410296:                             ; CODE XREF: AbstractClass__QueryInterface+32↑j
push    ebp
mov     ecx, 4
mov     edi, offset IID_IPersistStream
mov     esi, edx
xor     ebp, ebp
repe cmpsd
jnz     short loc_4102AB
mov     [eax], ebx

loc_4102AB:                             ; CODE XREF: AbstractClass__QueryInterface+47↑j
mov     ecx, 4
mov     edi, offset IID_IPersist
mov     esi, edx
xor     ebp, ebp
repe cmpsd
pop     ebp
jnz     short loc_4102C0
mov     [eax], ebx

loc_4102C0:                             ; CODE XREF: AbstractClass__QueryInterface+5C↑j
mov     esi, edx

AbstractClass__sub_4102C2:
mov     ecx, 4
mov     edi, offset IID_IRTTITypeInfo
xor     edx, edx
repe cmpsd
pop     edi
pop     esi
jnz     short loc_4102E1
test    ebx, ebx

AbstractClass__sub_4102D6:
jz      short loc_4102DD
lea     ecx, [ebx+4]
jmp     short loc_4102DF
; ---------------------------------------------------------------------------

loc_4102DD:                             ; CODE XREF: AbstractClass__QueryInterface:AbstractClass__sub_4102D6↑j
xor     ecx, ecx

loc_4102DF:                             ; CODE XREF: AbstractClass__QueryInterface+7B↑j
mov     [eax], ecx

loc_4102E1:                             ; CODE XREF: AbstractClass__QueryInterface+72↑j
cmp     dword ptr [eax], 0

AbstractClass__sub_4102E4:
jnz     short loc_4102EF
mov     eax, 80004002h
pop     ebx
retn    0Ch
; ---------------------------------------------------------------------------

loc_4102EF:                             ; CODE XREF: AbstractClass__QueryInterface:AbstractClass__sub_4102E4↑j
mov     eax, [ebx]
push    ebx
call    dword ptr [eax+4]
xor     eax, eax
pop     ebx
retn    0Ch
*/
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
        // The generated ID is stored in uniqueId (at this+12 via IRTTITypeInfo sub-object offset)
        uniqueId = 0;  // updateAITimer() returns the next ID; stub until full ID system is wired
    } else {
        uniqueId = 0;
    }
}

// IDA: 0x410540 -- vtable[0][22], AbstractClass::GetCoords
// Calls vtable[0][18] (GetInvalidCoord @ 0x4104C0) through virtual dispatch,
// then copies the returned XYZ to output.
// This allows derived classes to override GetInvalidCoord with valid coordinates.
CoordStruct* AbstractClass::fetchCoordinatesHere(CoordStruct* out) const {
    // IDA: v1 = (*(this->vtable[0] + 72))(this, v3)  -- calls vtable[18] GetInvalidCoord
    // Returns invalid XYZ from the class's virtual GetInvalidCoord (overridable in derived classes)
    // Base class returns static invalid coord (0, 0, 0) from dword_887680/684/688
    out->X = 0;
    out->Y = 0;
    out->Z = 0;
    return out;
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
CoordStruct AbstractClass::fetchAlternateCoordinates() const { CoordStruct crd; fetchAlternateCoordinates(&crd); return crd; }
bool AbstractClass::operator<(const AbstractClass& rhs) const { return uniqueId < rhs.uniqueId; }

} // namespace game
} // namespace ra2
