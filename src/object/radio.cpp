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
// Unlink the object, then iterate radio links to find and clear
// the matching link. If 'clear' is true, set the slot to null.
// ============================================================
void RadioClass::ExecuteAction(TechnoClass* obj, bool clear)
{
    // IDA: Object::Unlink(this)
    // TODO: Object::Unlink(this);

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
// Process power timers for all linked Techno objects.
// Calls AbstractClass::COMStub_13 then iterates links,
// calling Power::TimerProcess on each linked object.
// ============================================================
void RadioClass::PowerDrainUpdate()
{
    // IDA: AbstractClass::COMStub_13(this, a2)
    // TODO: COMStub_13 call

    // IDA: Power::TimerProcess(radioLinks.Count) -- power timer update

    for (int i = 0; i < radioLinks.Count; ++i)
    {
        TechnoClass* link = radioLinks.Items[i];
        if (link)
        {
            // IDA: call link->vtable[16] -- some COM method
            // int result = link->SomeVirtualMethod();
            // Power::TimerProcess(result);

            // IDA: call link->vtable[44] -- another method
            // int result2 = link->AnotherMethod();
            // Power::TimerProcess(result2);
        }
    }
}

// ============================================================
// ProcessCmd (IDA: 0x65aa80, vt53)
// If not deployed (byte+129 == 0), call vtable entry 640 with param 3,
// then call ObjectClass::Undeploy.
// ============================================================
void RadioClass::ProcessCmd()
{
    // IDA: if (!*(this+129)) -- check deploy flag
    // IDA: vtable[640](this, 3) -- some processing
    // IDA: return ObjectClass::Undeploy(this)
    // TODO: implement when deploy state is tracked
}

// ============================================================
// LoadState (IDA: 0x65ab80, vt05)
// Load radio link state from IStream.
// 1. Register for save/load tracking
// 2. Read link count from stream
// 3. Allocate/resize link array
// 4. Read each link pointer from stream
// 5. Register each link for swizzle tracking
// ============================================================
HRESULT RadioClass::LoadState(IStream* stream)
{
    // IDA: BuildingClass::SaveLoad_Register(this) >= 0
    // TODO: SaveLoad registration

    // Reset radioLinks
    if (radioLinks.Items && radioLinks.Capacity > 0)
    {
        // Already allocated; reset but keep allocation
        radioLinks.Count = 0;
    }
    else
    {
        radioLinks.Items = new TechnoClass*[1];
        radioLinks.Capacity = 1;
        radioLinks.Count = 1;
        radioLinks.Items[0] = nullptr;
    }

    // IDA: IStream::Read(stream, &count, 4, 0)
    // int count = 0;
    // HRESULT hr = stream->Read(&count, 4, nullptr);

    // IDA: if count > current capacity, resize
    // radioLinks.Resize(count, 0)

    // IDA: for each link, read pointer from stream
    // for (int i = 0; i < count; ++i) {
    //     stream->Read(&ptr, 4, nullptr);
    //     radioLinks.Items[i] = ptr;
    // }

    // IDA: ObjectPtr::RegisterForTracking for each link
    // for (int i = 0; i < count; ++i) {
    //     ObjectPtr::RegisterForTracking(&SwizzleManager, &radioLinks.Items[i]);
    // }

    return S_OK; // TODO: actual serialization
}

// ============================================================
// SaveState (IDA: 0x65ac40, vt06)
// Save radio link state to IStream.
// 1. Write prefix via AbstractClass::SaveLoad_Prefix
// 2. Write link count
// 3. Write each link pointer
// ============================================================
HRESULT RadioClass::SaveState(IStream* stream, int clear_dirty)
{
    // IDA: AbstractClass::SaveLoad_Prefix(a1, a2, a3) >= 0
    // TODO: SaveLoad prefix

    // IDA: Write count
    int count = radioLinks.Count;
    // HRESULT hr = stream->Write(&count, 4, nullptr);

    // IDA: Write each link pointer
    // for (int i = 0; i < count; ++i) {
    //     stream->Write(&radioLinks.Items[i], 4, nullptr);
    // }

    return S_OK; // TODO: actual serialization
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
