#!/usr/bin/env python3
"""Write class definition headers to src/"""

import os

BASE = r"D:\RA2YR_ReSource"

def write_file(rel_path, content):
    fp = os.path.join(BASE, rel_path)
    os.makedirs(os.path.dirname(fp), exist_ok=True)
    with open(fp, 'w', encoding='utf-8', newline='\n') as f:
        f.write(content)
    print(f"  Wrote {rel_path}")

# ── AbstractClass ──
write_file("src/object/abstract.hpp", r"""#pragma once

#include <cstdint>
#include <unknwn.h>
#include "gamemd/core/enums.hpp"
#include "gamemd/core/math.hpp"

// IDA: IID_IRTTITypeInfo @ 0x7E9AE0
static const GUID IID_IRTTITypeInfo =
{ 0x170DAC82, 0x12E4, 0x11D2, { 0x81, 0x75, 0x00, 0x60, 0x08, 0x05, 0x5B, 0xB5 } };

namespace ra2 { namespace game {

using ::gamemd::AbstractType;
using ::gamemd::AbstractFlags;
using ::gamemd::CoordStruct;
using ::gamemd::CellStruct;
using ::gamemd::Point2D;
using ::gamemd::RectangleStruct;
using ::gamemd::TimerStruct;

struct DirStruct {
    uint32_t raw;
    constexpr DirStruct() noexcept : raw(0) {}
    explicit constexpr DirStruct(uint32_t v) noexcept : raw(v) {}
};
using FacingStruct = DirStruct;

class HouseClass;
class TechnoClass;
class ObjectClass;
class FootClass;
class Checksummer;

// COM base interfaces (IDA-confirmed vtable layouts)
class IPersistStream : IUnknown {
public:
    virtual HRESULT __stdcall GetClassID(CLSID* id) = 0;
    virtual HRESULT __stdcall IsDirty() = 0;
    virtual HRESULT __stdcall Load(IStream* s) = 0;
    virtual HRESULT __stdcall Save(IStream* s, int clear) = 0;
    virtual HRESULT __stdcall GetSizeMax(ULARGE_INTEGER* sz) = 0;
};

class IRTTITypeInfo : IUnknown {
public:
    virtual AbstractType __stdcall whatAmI() const = 0;
    virtual int __stdcall fetchId() const = 0;
    virtual void __stdcall createId() = 0;
};

class INoticeSink {
public:
    virtual bool __stdcall onNotice(unsigned long ev) = 0;
};

class INoticeSource {
public:
    virtual void __stdcall notifySinks() = 0;
};

// AbstractClass - root of all game objects
// IDA constructor @ 0x410170, sizeof >= 0x24 (4 vtables + 6 fields)
// Vtable[0] @ 0x7E1F50, [1] @ 0x7E1F34, [2] @ 0x7E1F2C, [3] @ 0x7E1F24
class AbstractClass : public IPersistStream, public IRTTITypeInfo,
                      public INoticeSink, public INoticeSource {
public:
    static constexpr AbstractType kObjectTypeId = static_cast<AbstractType>(52);

    // IUnknown (COM standard names preserved)
    virtual HRESULT __stdcall QueryInterface(const IID& iid, void** ppv) override;
    virtual ULONG   __stdcall AddRef() override;
    virtual ULONG   __stdcall Release() override;

    // IPersistStream
    virtual HRESULT __stdcall GetClassID(CLSID* id) override;
    virtual HRESULT __stdcall IsDirty() override;
    virtual HRESULT __stdcall Load(IStream* s) override;
    virtual HRESULT __stdcall Save(IStream* s, int clear) override;
    virtual HRESULT __stdcall GetSizeMax(ULARGE_INTEGER* sz) override;

    // IRTTITypeInfo
    virtual AbstractType __stdcall whatAmI() const override { return kObjectTypeId; }
    virtual int __stdcall fetchId() const override { return 0; }
    virtual void __stdcall createId() override;

    // INoticeSink
    virtual bool __stdcall onNotice(unsigned long ev) override { return false; }

    // INoticeSource
    virtual void __stdcall notifySinks() override {}

    virtual ~AbstractClass() = default;

    // Custom virtuals (vtable[0] entries 8-26, IDA addresses documented)
    // [8]  = virtual destructor (compiler-generated)
    virtual void pointerExpired(AbstractClass* ptr, bool removed) {}
    virtual int  objectSize() const { return 0; }
    virtual void calculateChecksum(Checksummer& c) const {}
    virtual void serializeHeader(void* stream, void* data, int loadFlag);
    virtual HouseClass* owningHouse() const { return nullptr; }
    virtual int  arrayIndex() const { return -1; }
    virtual bool isDead() const { return false; }
    virtual bool isAlive() const { return true; }
    virtual CoordStruct* fetchCoordinates(CoordStruct* out) const;
    virtual CoordStruct* fetchExtendedCoordinates(CoordStruct* out) const;
    virtual CoordStruct* fetchDestination(CoordStruct* out, TechnoClass* docker = nullptr) const {
        return nullptr;
    }
    virtual bool isOnGround() const { return false; }
    virtual CoordStruct* fetchCoordinatesHere(CoordStruct* out) const;
    virtual bool isAirborne() const { return false; }
    virtual CoordStruct* fetchAlternateCoordinates(CoordStruct* out) const { return nullptr; }
    virtual void updateLogic() {}
    virtual void initialize() {}

    // Convenience wrappers (non-virtual, inline)
    CoordStruct getCoordinates() const {
        CoordStruct r; fetchCoordinatesHere(&r); return r;
    }
    CoordStruct getDestination() const {
        CoordStruct r; fetchDestination(&r); return r;
    }

    bool operator<(const AbstractClass& rhs) const {
        return uniqueId < rhs.uniqueId;
    }

    // Members (IDA ctor @ 0x410170 confirmed)
    uint32_t uniqueId;           // +0x10
    uint32_t abstractFlags;       // +0x14
    uint32_t nextArrayIndex;      // +0x18
    int32_t  referenceCount;      // +0x1C
    bool     needsSave;           // +0x20
    uint8_t  alignmentPadding[3]; // +0x21

protected:
    AbstractClass() noexcept;
};

}} // namespace ra2::game
""")

print("\nDone!")
