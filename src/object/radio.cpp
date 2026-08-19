#include "object/radio.hpp"
#include "object/techno.hpp"

#include <cstring>

namespace ra2 {
namespace game {

extern int& CurrentFrame;

// ============================================================
// Layout verification (ABI: radioLinks 12 -> 16 bytes).
// IDA ctor 0x65a750 proves radioLinks is a *base* VectorClass<TechnoClass*>:
//   vtable@224, Items@228, Capacity@232, IsInitialized@236, IsAllocated@237.
// = 16 bytes (no Count/CapacityIncrement -> NOT DynamicVectorClass).
// ============================================================
static_assert(sizeof(gamemd::VectorClass<TechnoClass*>) == 16,
              "radioLinks must be a 16-byte base VectorClass<TechnoClass*> (vtable+Items+Capacity+IsInitialized+IsAllocated) per IDA 0x65a750");

// ============================================================
// RadioClass constructor (IDA: 0x65a750)
// 1. Call MissionClass base constructor
// 2. Allocate radioLinks with initial capacity 1
// 3. Initialize vtable + lastCommands
// ============================================================
RadioClass::RadioClass() noexcept
{
    // Base MissionClass ctor: sets currentMission/suspendedMission/queuedMission = -1
    // missionQueued = false, missionStatus = 0, missionStartTime = CurrentFrame, missionData = 0

    // IDA 0x65a750: radioLinks initial 1-element allocation, slot 0 zeroed
    // (Capacity=1, Items=operator new(4), IsAllocated=1, *Items=0).
    radioLinks.SetCapacity(1, nullptr);
    radioLinks[0] = nullptr;
    // IDA 0x65a750: lastCommands[0..2] init to 0 (*(this+53/54/55)).
    lastCommands[0] = 0;
    lastCommands[1] = 0;
    lastCommands[2] = 0;
}

// ============================================================
// RadioClass destructor (ProcessEvent, IDA: 0x65aeb0)
// 1. Set vtable to RadioClass vtables
// 2. Free radioLinks.Items if we own it
// 3. Set vtable back to MissionClass
// 4. Call ObjectClass::Dtor
// ============================================================
// Destructor is =default in header; cleanup handled there

// ============================================================
// sendToFirstLink (IDA: existing in radio.cpp, corresponds to IDA radio link dispatch)
// ============================================================
RadioCommand RadioClass::sendToFirstLink(RadioCommand command)
{
    if (hasAnyLink())
    {
        AbstractClass* dummy = nullptr;
        return getNthLink(0)->ReceiveCommand((TechnoClass*)(this), command, dummy);
    }
    return (RadioCommand)(0);
}

RadioCommand RadioClass::sendCommand(RadioCommand command, TechnoClass* recipient)
{
    if (recipient)
    {
        AbstractClass* dummy = nullptr;
        return recipient->ReceiveCommand((TechnoClass*)(this), command, dummy);
    }
    return (RadioCommand)(0);
}

RadioCommand RadioClass::sendCommandWithData(RadioCommand command, AbstractClass*& inout, TechnoClass* recipient)
{
    if (recipient)
        return recipient->ReceiveCommand((TechnoClass*)(this), command, inout);
    return (RadioCommand)(0);
}

void RadioClass::sendToEachLink(RadioCommand command)
{
    for (int i = 0; i < radioLinks.Capacity; ++i)  // base VectorClass: Capacity = link count
    {
        if (radioLinks[i])
        {
            AbstractClass* dummy = nullptr;
            radioLinks[i]->ReceiveCommand((TechnoClass*)(this), command, dummy);
        }
    }
}

// ============================================================
// ExecuteAction (IDA: 0x65aac0, vt10)
// IDA: Object::Unlink(this) — removes from global object table
// Then iterates radioLinks to match and clear obj.
// Called from ObjectClass::NotifyExpired @ 0x7077C0.
// ============================================================
void RadioClass::ExecuteAction(TechnoClass* obj, bool clear)
{
    // IDA: Object::Unlink(this) — sub_5F5230
    // Removes this object from the global linked list. Deferred to ObjectClass implementation.

    int count = radioLinks.Capacity;
    for (int i = 0; i < count; ++i)
    {
        TechnoClass* link = radioLinks[i];
        if (link == obj)
        {
            if (clear)
                radioLinks[i] = nullptr;
        }
    }
}

// ============================================================
// FindLinkIndex (IDA: 0x65ad90)
// Linear search through radioLinks to find the index of obj.
// Returns -1 if not found or obj is null.
// ============================================================
int RadioClass::FindLinkIndex(TechnoClass* obj)
{
    if (!obj)
        return -1;

    int count = radioLinks.Capacity;
    if (count <= 0)
        return -1;

    for (int i = 0; i < count; ++i)
    {
        if (radioLinks[i] == obj)
            return i;
    }
    return -1;
}

// ============================================================
// hasFreeLink (IDA: 0x65adc0)
// Returns true if any existing slot in radioLinks is NULL (free).
// Note: different from "has room to add" -- this checks for empty
// slots in the already-allocated array.
// ============================================================
bool RadioClass::hasFreeLink() const
{
    int count = radioLinks.Capacity;
    if (count <= 0)
        return false;

    for (int i = 0; i < count; ++i)
    {
        if (!radioLinks[i])
            return true;
    }
    return false;
}

// ============================================================
// PowerDrainUpdate (IDA: 0x65ab10, vt13)  ->  int __thiscall _vt13(this, int a2)
// IDA: Calls AbstractClass::COMStub_13(this, a2), then Power::TimerProcess on the
// link count (radioLinks.Capacity), then iterates each non-null link calling the
// COM-interface vtable[4] (on link+4) and the primary vtable[11], passing both
// results to Power::TimerProcess. Returns the (re-read) link Capacity.
// Called from House::PowerBeginUpdate @ 0x70C270.
// ============================================================
int RadioClass::PowerDrainUpdate(int a2)
{
    // IDA 0x65ab10 (_vt13): COMStub_13(this,a2); then Power::TimerProcess(Capacity)
    // and, per non-null link, Power::TimerProcess of link COM vtable[4]/primary
    // vtable[11]; returns the (re-read) Capacity. Power::TimerProcess (0x4A1D50)
    // and the link vtable slots are not yet callable here -> deferred.
    COMStub_13(a2);                                  // IDA 0x65ab1a
    for (int i = 0; i < radioLinks.Capacity; ++i)    // *(this+58) re-read each iter
    {
        TechnoClass* link = radioLinks[i];           // *(this+57)[i]
        if (!link)
            continue;
    }
    return radioLinks.Capacity;                      // *(this+58)
}

// ============================================================
// ProcessCmd (IDA: 0x65aa80, vt53)
// IDA: if (!inLimbo) — i.e., object is deployed/on-map:
//   vtable[640](this, 3) — pre-undeploy processing
// Then always calls ObjectClass::Undeploy(this)
// Called from TechnoClass::CleanupDeploy @ 0x6F6AC0.
// ============================================================
void RadioClass::ProcessCmd()
{
    // IDA: if (!inLimbo) — object is on map (not in limbo = deployed)
    if (!inLimbo)
    {
        // IDA: vtable[640](this, 3) — pre-undeploy vtable dispatch
        // This calls the derived class's deploy processing with parameter 3 (undeploy action)
    }
    // IDA: ObjectClass::Undeploy(this) — sub_5F4D30
    // Returns object to undeployed state (limbo + cleanup)
}

// ============================================================
// LoadState (IDA: 0x65ab80, vt05)
// IDA: BuildingClass::SaveLoad_Register(this) → reset link vector →
// IStream::Read count → resize → read each link ptr →
// ObjectPtr::RegisterForTracking for each link.
// ============================================================
HRESULT RadioClass::LoadState(IStream* stream)
{
    if (!stream)
        return E_FAIL;

    // IDA: BuildingClass::SaveLoad_Register(this) — sub_5F5E80
    // Registers this object for save/load tracking. Returns < 0 on error.

    // Reset radioLinks vector: ensure at least a 1-element allocation. base
    // VectorClass has no separate Count, so there is no logical-size to reset;
    // only (re)allocate when the backing store is missing.
    if (!(radioLinks.Items && radioLinks.Capacity > 0))
    {
        radioLinks.SetCapacity(1, nullptr);
        radioLinks[0] = nullptr;
    }

    // IDA: IStream::Read(stream, &count, 4, nullptr)
    int32_t link_count = 0;
    ULONG bytes_read = 0;
    HRESULT hr = stream->Read(&link_count, 4, &bytes_read);
    if (FAILED(hr) || bytes_read != 4)
        return FAILED(hr) ? hr : E_FAIL;

    // IDA: VectorClass::resize(radioLinks, link_count, 0) — grow if needed.
    // base VectorClass tracks size as Capacity; SetLinkCount grows Capacity to
    // at least link_count (no separate Count to assign).
    if (link_count > radioLinks.Capacity)
    {
        SetLinkCount(link_count);
    }

    // IDA: Read each link pointer from stream
    for (int i = 0; i < link_count; ++i)
    {
        uint32_t ptr_raw = 0;
        hr = stream->Read(&ptr_raw, 4, &bytes_read);
        if (FAILED(hr) || bytes_read != 4)
            return FAILED(hr) ? hr : E_FAIL;
        radioLinks[i] = (TechnoClass*)(ptr_raw);
    }

    // IDA: ObjectPtr::RegisterForTracking(&SwizzleManager, &radioLinks[i])
    // Registers each link pointer for pointer swizzling after load.
    for (int i = 0; i < link_count; ++i)
    {
        // ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, &radioLinks[i]);
    }

    return S_OK;
}

// ============================================================
// SaveState (IDA: 0x65ac40, vt06)
// IDA: AbstractClass::SaveLoad_Prefix(this, stream, clear_dirty) →
// IStream::Write count → write each link pointer.
// ============================================================
HRESULT RadioClass::SaveState(IStream* stream, int clear_dirty)
{
    if (!stream)
        return E_FAIL;

    // IDA: AbstractClass::SaveLoad_Prefix(this, stream, clear_dirty) — sub_410320
    // Writes save-prefix marker. Returns < 0 on error.

    // IDA: IStream::Write(stream, &count, 4, nullptr)
    int32_t link_count = radioLinks.Capacity;
    ULONG bytes_written = 0;
    HRESULT hr = stream->Write(&link_count, 4, &bytes_written);
    if (FAILED(hr) || bytes_written != 4)
        return FAILED(hr) ? hr : E_FAIL;

    // IDA: Write each link pointer
    for (int i = 0; i < link_count; ++i)
    {
        uint32_t ptr_raw = (uint32_t)(radioLinks[i]);
        hr = stream->Write(&ptr_raw, 4, &bytes_written);
        if (FAILED(hr) || bytes_written != 4)
            return FAILED(hr) ? hr : E_FAIL;
    }

    return S_OK;
}

// ============================================================
// SetLinkCount (IDA: 0x65ae60)
// Resize radioLinks array to accommodate at least 'count' links.
// If count > current Count, grow the array and zero new slots.
// ============================================================
void RadioClass::SetLinkCount(int count)
{
    int oldCapacity = radioLinks.Capacity;           // IDA 0x65ae60: link count = Capacity
    if (count > oldCapacity)
    {
        radioLinks.SetCapacity(count, nullptr);      // vtable[2] = VectorClass::SetCapacity
        for (int i = oldCapacity; i < count; ++i)
            radioLinks[i] = nullptr;                 // IDA: zero new slots [oldCapacity, count)
    }
}

} // namespace game
} // namespace ra2

#include "object/radio.hpp"

namespace ra2 { namespace game {

// --- RadioClass ---

HRESULT __stdcall RadioClass::Load(IStream* stream) { return S_OK; }
HRESULT __stdcall RadioClass::Save(IStream* stream, int clear_dirty) { return S_OK; }
TechnoClass* const& RadioClass::getNthLink(int idx) const { return radioLinks[idx]; }
bool RadioClass::hasAnyLink() const { return radioLinks.Capacity > 0; }

} // namespace game
} // namespace ra2
