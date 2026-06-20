#pragma once

#include <cstdint>
#include <unknwn.h>

#include "core/enums.hpp"
#include "core/math.hpp"

// IDA: IID_IRTTITypeInfo @ 0x7E9AE0 = {170DAC82-12E4-11D2-8175-006008055BB5}
// {170DAC82-12E4-11D2-8175-006008055BB5}
static const GUID IID_IRTTITypeInfo = 
{ 0x170DAC82, 0x12E4, 0x11D2, { 0x81, 0x75, 0x00, 0x60, 0x08, 0x05, 0x5B, 0xB5 } };

namespace ra2 {
namespace game {

using ::gamemd::AbstractType;
using ::gamemd::AbstractFlags;
using ::gamemd::CoordStruct;
using ::gamemd::CellStruct;
using ::gamemd::Point2D;
using ::gamemd::RectangleStruct;
using ::gamemd::TimerStruct;

struct DirStruct {
    uint32_t Raw;
    constexpr DirStruct() noexcept : Raw(0) {} // IDA: UNMATCHED — constexpr_no_runtime, no_callgraph_match, no_git_history
    explicit constexpr DirStruct(uint32_t val) noexcept : Raw(val) {} // IDA: UNMATCHED — constexpr_no_runtime, no_callgraph_match, no_git_history
};

using FacingStruct = DirStruct;

class HouseClass;
class TechnoClass;
class ObjectClass;
class FootClass;
class Checksummer;

class IPersistStream : IUnknown {
public:
    virtual HRESULT __stdcall GetClassID(CLSID* class_id) = 0;
    virtual HRESULT __stdcall IsDirty() = 0;  // 0x7099D0
    virtual HRESULT __stdcall Load(IStream* stream) = 0;  // 0x55AA60
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) = 0; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual HRESULT __stdcall GetSizeMax(ULARGE_INTEGER* size) = 0;  // 0x70C250
};

class IRTTITypeInfo : IUnknown {
public:
    virtual AbstractType __stdcall whatAmI() const = 0; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual int __stdcall fetchId() const = 0; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual void __stdcall createId() = 0;  // 0x486920
};

class INoticeSink {
public:
    virtual bool __stdcall onNotice(unsigned long event) = 0; // IDA: UNMATCHED — no_callgraph_match, no_git_history
};

class INoticeSource {
public:
    virtual void __stdcall notifySinks() = 0; // IDA: UNMATCHED — no_callgraph_match, no_git_history
};

// IDA: AbstractClass @ constructor=0x410170, sizeof >= 0x24 (4 vtables + 6 fields)
// vtable[0] @ 0x7E1F50 (IPersistStream + custom, 28 entries)
// vtable[1] @ 0x7E1F34 (IRTTITypeInfo chain, 32 entries)
// vtable[2] @ 0x7E1F2C (INoticeSink merged, 32 entries)
// vtable[3] @ 0x7E1F24 (INoticeSource merged, 31 entries)
// All 4 vtable pointers are at +0x00/+0x04/+0x08/+0x0C (IDA ctor confirmed)
class AbstractClass : public IPersistStream, public IRTTITypeInfo,
                      public INoticeSink, public INoticeSource {
public:
    static constexpr AbstractType kObjectTypeId = static_cast<AbstractType>(52);

    // --- IPersistStream (vtable[0]) ---
    virtual HRESULT __stdcall QueryInterface(const IID& iid, void** ppv) override;  // 0x410260
    virtual ULONG   __stdcall AddRef() override;  // 0x464AC0
    virtual ULONG   __stdcall Release() override;  // 0x4E0360
    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override; // IDA: NOT_FOUND
    virtual HRESULT __stdcall IsDirty() override;  // 0x7099D0
    virtual HRESULT __stdcall Load(IStream* stream) override; // IDA: NOT_FOUND
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override; // IDA: NOT_FOUND
    virtual HRESULT __stdcall GetSizeMax(ULARGE_INTEGER* size) override; // IDA: UNMATCHED — no_callgraph_match, no_git_history

    // --- IRTTITypeInfo (vtable[1]) ---
    virtual AbstractType __stdcall whatAmI() const override; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual int __stdcall fetchId() const override; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual void __stdcall createId() override;   // 0x486920

    // --- INoticeSink (vtable[2]) ---
    virtual bool __stdcall onNotice(unsigned long event) override; // IDA: UNMATCHED — no_callgraph_match, no_git_history

    // --- INoticeSource (vtable[3]) ---
    virtual void __stdcall notifySinks() override; // IDA: UNMATCHED — no_callgraph_match, no_git_history

    // --- AbstractClass custom virtuals (vtable[0] entries 8+) ---
    // IDA: vtable[0][8]  = COMStub_8    (0x4105A0)
    // IDA: vtable[0][9]  = StubReturnFalse (0x410470)
    // IDA: vtable[0][10] = COMStub_Return0_10 (0x410480)
    // IDA: vtable[0][13] = ProcessPower (0x410410)
    // IDA: vtable[0][17] = sub_410440
    // IDA: vtable[0][18] = GetInvalidCoord (0x4104C0)
    // IDA: vtable[0][19] = GetCoordsEx (0x4104F0)
    // IDA: vtable[0][22] = GetCoords (0x410540)
    virtual ~AbstractClass() = default;  // 0x4101F0

    virtual void initialize();  // 0x438E70
    virtual void pointerExpired(AbstractClass* ptr, bool removed); // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual int objectSize() const; // IDA: NOT_FOUND
    virtual void calculateChecksum(Checksummer& checksum) const; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual int owningHouseIndex() const; // IDA: NOT_FOUND
    virtual HouseClass* owningHouse() const; // IDA: NOT_FOUND
    virtual int arrayIndex() const; // IDA: NOT_FOUND
    virtual bool isDead() const;  // 0x700D10
    virtual CoordStruct* fetchCoordinatesHere(CoordStruct* out) const; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual CoordStruct* fetchDestination(CoordStruct* out, TechnoClass* docker = nullptr) const; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual CoordStruct* GetCoords(CoordStruct* out) const;  // 0x410540
    virtual bool isOnGround() const; // IDA: NOT_FOUND
    virtual bool isAirborne() const; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual CoordStruct* fetchAlternateCoordinates(CoordStruct* out) const; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual void updateLogic(); // IDA: NOT_FOUND

    CoordStruct fetchCoordinatesHere() const; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    CoordStruct fetchDestination(TechnoClass* docker = nullptr) const; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    CoordStruct fetchAlternateCoordinates() const; // IDA: UNMATCHED — no_callgraph_match, no_git_history

    bool operator<(const AbstractClass& rhs) const; // IDA: UNMATCHED — no_callgraph_match, no_git_history

    // IDA ctor confirmed offsets:
    uint32_t    uniqueId;         // +0x10, init = -1 (0xFFFFFFFF)
    uint32_t    abstractFlags;    // +0x14, init = preserve bits 7-3 (& 0xF8)
    uint32_t    nextArrayIndex;        // +0x18, init = 0
    int32_t     referenceCount;         // +0x1C, init = 0
    bool        needsSave;             // +0x20, init = 0
    uint8_t     alignmentPadding[3];     // +0x21, alignment

protected:
    AbstractClass() noexcept;
};

} // namespace game
} // namespace ra2
