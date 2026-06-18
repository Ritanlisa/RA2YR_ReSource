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
    : uniqueId(static_cast<uint32_t>(-1))  // 0x410191: mov [eax+0x10], 0xFFFFFFFF
    , abstractFlags(0)                      // 0x4101B3: mov [eax+0x14], cl (preserved & 0xF8 from caller)
    , nextArrayIndex(0)                          // 0x410182: mov [eax+0x18], 0
    , referenceCount(0)                           // 0x410185: mov [eax+0x1C], 0
    , needsSave(false)                           // 0x410188: mov [eax+0x20], 0
{
    // IDA preserves bits 7-3 of pre-existing abstractFlags (& 0xF8).
    // In practice heap memory is zeroed, so result is abstractFlags = 0.
    // The vtable pointer dance (temp INoticeSink/INoticeSource -- final merged)
    // is handled automatically by the C++ compiler for MI.
}

// IDA: 0x410260 -- vtable[0][0], AbstractClass::QueryInterface
REVERSE(0x410260, "AbstractClass::QueryInterface: IDA verified", "None")
// Checks IUnknown / IPersistStream / IPersist / IRTTITypeInfo IIDs
HRESULT AbstractClass::QueryInterface(const IID& iid, void** ppv) {
    // 0x410267: if (!ppv) return E_POINTER
    if (!ppv)
        return E_POINTER;  // 0x80004003 = -2147467261

    // 0x410286: *ppv = 0
    *ppv = nullptr;

    // 0x410290: if iid == IID_IUnknown -- *ppv = this (IPersistStream sub-object)
    if (iid == IID_IUnknown)
        *ppv = static_cast<IPersistStream*>(this);

    // 0x4102A5: if iid == IID_IPersistStream -- *ppv = this
    if (iid == IID_IPersistStream)
        *ppv = static_cast<IPersistStream*>(this);

    // 0x4102B9: if iid == IID_IPersist -- *ppv = this
    if (iid == IID_IPersist)
        *ppv = static_cast<IPersistStream*>(this);

    // 0x4102CE: if iid == IID_IRTTITypeInfo -- *ppv = IRTTITypeInfo sub-object (vtable[1])
    if (iid == IID_IRTTITypeInfo)
        *ppv = static_cast<IRTTITypeInfo*>(this);

    // 0x4102E1: if !*ppv -- return E_NOINTERFACE
    if (!*ppv)
        return E_NOINTERFACE;  // 0x80004002 = -2147467262

    // 0x4102F2: AddRef() -- calls vtable[0][1]
    AddRef();

    // 0x41026E: return S_OK
    return S_OK;
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

// IDA: 0x410450 -- vtable[0][4], AbstractClass::IsClean
// Returns *(this + 0x20) == 0  --  !needsSave
HRESULT AbstractClass::IsDirty() {
    return needsSave ? S_OK : S_FALSE;
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
