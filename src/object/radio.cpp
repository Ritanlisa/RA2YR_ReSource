#include "object/radio.hpp"
#include "object/techno.hpp"

#include <cstring>

namespace ra2 {
namespace game {

extern int& CurrentFrame;

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

    // Initialize radioLinks vector
    radioLinks.Items = nullptr;
    radioLinks.Count = 0;
    radioLinks.Capacity = 0;

    // Allocate initial capacity of 1 (IDA: operator new(4))
    radioLinks.Items = new TechnoClass*[1];
    radioLinks.Capacity = 1;
    radioLinks.Count = 1;
    radioLinks.Items[0] = nullptr; // IDA: first slot = 0

    // Initialize lastCommands
    lastCommands[0] = -1;
    lastCommands[1] = -1;
    lastCommands[2] = -1;
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
        return getNthLink(0)->ReceiveCommand(static_cast<TechnoClass*>(this), command, dummy);
    }
    return static_cast<RadioCommand>(0);
}

RadioCommand RadioClass::sendCommand(RadioCommand command, TechnoClass* recipient)
{
    if (recipient)
    {
        AbstractClass* dummy = nullptr;
        return recipient->ReceiveCommand(static_cast<TechnoClass*>(this), command, dummy);
    }
    return static_cast<RadioCommand>(0);
}

RadioCommand RadioClass::sendCommandWithData(RadioCommand command, AbstractClass*& inout, TechnoClass* recipient)
{
    if (recipient)
        return recipient->ReceiveCommand(static_cast<TechnoClass*>(this), command, inout);
    return static_cast<RadioCommand>(0);
}

void RadioClass::sendToEachLink(RadioCommand command)
{
    for (int i = 0; i < radioLinks.Count; ++i)
    {
        if (radioLinks.Items[i])
        {
            AbstractClass* dummy = nullptr;
            radioLinks.Items[i]->ReceiveCommand(static_cast<TechnoClass*>(this), command, dummy);
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

    int count = radioLinks.Count;
    for (int i = 0; i < count; ++i)
    {
        TechnoClass* link = radioLinks.Items[i];
        if (link == obj)
        {
            if (clear)
                radioLinks.Items[i] = nullptr;
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

    int count = radioLinks.Count;
    if (count <= 0)
        return -1;

    for (int i = 0; i < count; ++i)
    {
        if (radioLinks.Items[i] == obj)
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
    int count = radioLinks.Count;
    if (count <= 0)
        return false;

    for (int i = 0; i < count; ++i)
    {
        if (!radioLinks.Items[i])
            return true;
    }
    return false;
}

// ============================================================
// PowerDrainUpdate (IDA: 0x65ab10, vt13)
// IDA: Calls AbstractClass::COMStub_13, then Power::TimerProcess on link count,
// then iterates each link calling vtable[16] and vtable[44], passing results
// to Power::TimerProcess. Called from House::PowerBeginUpdate @ 0x70C270.
// ============================================================
void RadioClass::PowerDrainUpdate()
{
    // IDA: AbstractClass::COMStub_13(this, a2) — sub_5B3970
    // Base class power pre-processing stub.

    // IDA: Power::TimerProcess(radioLinks.Count) — sub_4A1D50
    // Accumulates power drain for the total number of links.

    for (int i = 0; i < radioLinks.Count; ++i)
    {
        TechnoClass* link = radioLinks.Items[i];
        if (link)
        {
            // IDA: vtable[16] (offset 0x40 in vtable[0]) — COM method
            // int result1 = link->SomeVirtualMethod();
            // Power::TimerProcess(result1);

            // IDA: vtable[44] (offset 0xB0 in vtable[0]) — another COM method
            // int result2 = link->AnotherMethod();
            // Power::TimerProcess(result2);
        }
    }
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

    // Reset radioLinks vector: set count=0, keep allocation
    if (radioLinks.Items && radioLinks.Capacity > 0)
    {
        radioLinks.Count = 0;
    }
    else
    {
        radioLinks.Items = new TechnoClass*[1];
        radioLinks.Capacity = 1;
        radioLinks.Count = 1;
        radioLinks.Items[0] = nullptr;
    }

    // IDA: IStream::Read(stream, &count, 4, nullptr)
    int32_t link_count = 0;
    ULONG bytes_read = 0;
    HRESULT hr = stream->Read(&link_count, 4, &bytes_read);
    if (FAILED(hr) || bytes_read != 4)
        return FAILED(hr) ? hr : E_FAIL;

    // IDA: VectorClass::resize(radioLinks, link_count, 0) — grow if needed
    if (link_count > radioLinks.Count)
    {
        SetLinkCount(link_count);
    }
    radioLinks.Count = link_count;

    // IDA: Read each link pointer from stream
    for (int i = 0; i < link_count; ++i)
    {
        uint32_t ptr_raw = 0;
        hr = stream->Read(&ptr_raw, 4, &bytes_read);
        if (FAILED(hr) || bytes_read != 4)
            return FAILED(hr) ? hr : E_FAIL;
        radioLinks.Items[i] = reinterpret_cast<TechnoClass*>(ptr_raw);
    }

    // IDA: ObjectPtr::RegisterForTracking(&SwizzleManager, &radioLinks.Items[i])
    // Registers each link pointer for pointer swizzling after load.
    for (int i = 0; i < link_count; ++i)
    {
        // ObjectPtr::RegisterForTracking(&SwizzleManagerClass_Instance, &radioLinks.Items[i]);
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
    int32_t link_count = radioLinks.Count;
    ULONG bytes_written = 0;
    HRESULT hr = stream->Write(&link_count, 4, &bytes_written);
    if (FAILED(hr) || bytes_written != 4)
        return FAILED(hr) ? hr : E_FAIL;

    // IDA: Write each link pointer
    for (int i = 0; i < link_count; ++i)
    {
        uint32_t ptr_raw = reinterpret_cast<uint32_t>(radioLinks.Items[i]);
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
    int oldCount = radioLinks.Count;

    if (count > oldCount)
    {
        // IDA: VectorClass::resize(this+56, count, 0)
        // Grow array
        if (count > radioLinks.Capacity)
        {
            int newCap = count;
            auto* newItems = new TechnoClass*[newCap];
            for (int i = 0; i < oldCount; ++i)
                newItems[i] = radioLinks.Items[i];
            delete[] radioLinks.Items;
            radioLinks.Items = newItems;
            radioLinks.Capacity = newCap;
        }

        // Zero new slots
        for (int i = oldCount; i < count; ++i)
            radioLinks.Items[i] = nullptr;

        radioLinks.Count = count;
    }
}

} // namespace game
} // namespace ra2
