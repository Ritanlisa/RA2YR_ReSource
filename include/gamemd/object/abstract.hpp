#pragma once

#include <cstdint>
#include <unknwn.h>

#include "..\core\enums.hpp"
#include "..\core\math.hpp"

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
    constexpr DirStruct() noexcept : Raw(0) {}
    explicit constexpr DirStruct(uint32_t val) noexcept : Raw(val) {}
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
    virtual HRESULT __stdcall IsDirty() = 0;
    virtual HRESULT __stdcall Load(IStream* stream) = 0;
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) = 0;
    virtual HRESULT __stdcall GetSizeMax(ULARGE_INTEGER* size) = 0;
};

class IRTTITypeInfo : IUnknown {
public:
    virtual AbstractType __stdcall WhatAmI() const = 0;
    virtual int __stdcall FetchID() const = 0;
    virtual void __stdcall CreateID() = 0;
};

class INoticeSink {
public:
    virtual bool __stdcall OnNotice(unsigned long event) = 0;
};

class INoticeSource {
public:
    virtual void __stdcall NotifySinks() = 0;
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
    static constexpr AbstractType kAbsID = static_cast<AbstractType>(52);

    // --- IPersistStream (vtable[0]) ---
    virtual HRESULT __stdcall QueryInterface(const IID& iid, void** ppv) override;
    virtual ULONG   __stdcall AddRef() override;
    virtual ULONG   __stdcall Release() override;
    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override;
    virtual HRESULT __stdcall IsDirty() override;
    virtual HRESULT __stdcall Load(IStream* stream) override;
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;
    virtual HRESULT __stdcall GetSizeMax(ULARGE_INTEGER* size) override;

    // --- IRTTITypeInfo (vtable[1]) ---
    virtual AbstractType __stdcall WhatAmI() const override { return kAbsID; }
    virtual int __stdcall FetchID() const override { return 0; }
    virtual void __stdcall CreateID() override;

    // --- INoticeSink (vtable[2]) ---
    virtual bool __stdcall OnNotice(unsigned long event) override { return false; }

    // --- INoticeSource (vtable[3]) ---
    virtual void __stdcall NotifySinks() override {}

    // --- AbstractClass custom virtuals (vtable[0] entries 8+) ---
    // IDA: vtable[0][8]  = COMStub_8    (0x4105A0)
    // IDA: vtable[0][9]  = StubReturnFalse (0x410470)
    // IDA: vtable[0][10] = COMStub_Return0_10 (0x410480)
    // IDA: vtable[0][13] = ProcessPower (0x410410)
    // IDA: vtable[0][17] = sub_410440
    // IDA: vtable[0][18] = GetInvalidCoord (0x4104C0)
    // IDA: vtable[0][19] = GetCoordsEx (0x4104F0)
    // IDA: vtable[0][22] = GetCoords (0x410540)
    virtual ~AbstractClass() = default;

    virtual void Initialize() {}
    virtual void PointerExpired(AbstractClass* ptr, bool removed) {}
    virtual int Size() const { return 0; }
    virtual void CalculateChecksum(Checksummer& checksum) const {}
    virtual int GetOwningHouseIndex() const { return -1; }
    virtual HouseClass* GetOwningHouse() const { return nullptr; }
    virtual int GetArrayIndex() const { return -1; }
    virtual bool IsDead() const { return false; }
    virtual CoordStruct* GetCoords(CoordStruct* out) const;
    virtual CoordStruct* GetDestination(CoordStruct* out, TechnoClass* docker = nullptr) const { return nullptr; }
    virtual bool IsOnFloor() const { return false; }
    virtual bool IsInAir() const { return false; }
    virtual CoordStruct* GetAltCoords(CoordStruct* out) const { return nullptr; }

    // IDA: 0x410320 — IPersistStream::Load helper (static, shared by all game objects)
    static int __stdcall SaveLoad_Prefix(void** obj_out, IStream* stream, bool clear_dirty);
    virtual void Update() {}

    CoordStruct GetCoords() const { CoordStruct crd; GetCoords(&crd); return crd; }
    CoordStruct GetDestination(TechnoClass* docker = nullptr) const { CoordStruct crd; GetDestination(&crd, docker); return crd; }
    CoordStruct GetAltCoords() const { CoordStruct crd; GetAltCoords(&crd); return crd; }

    bool operator<(const AbstractClass& rhs) const { return m_unique_id < rhs.m_unique_id; }

    // IDA ctor confirmed offsets:
    uint32_t    m_unique_id;         // +0x10, init = -1 (0xFFFFFFFF)
    uint32_t    m_abstract_flags;    // +0x14, init = preserve bits 7-3 (& 0xF8)
    uint32_t    m_unknown_18;        // +0x18, init = 0
    int32_t     m_ref_count;         // +0x1C, init = 0
    bool        m_dirty;             // +0x20, init = 0
    uint8_t     m_padding_21[3];     // +0x21, alignment

protected:
    AbstractClass() noexcept;
};

} // namespace game
} // namespace ra2
