#pragma once

#include <cstdint>
#include <unknwn.h>

#include "..\core\enums.hpp"
#include "..\core\math.hpp"

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
class Checksummer;

struct INoticeSource {
    virtual void __stdcall NotifySinks() = 0;
};

struct INoticeSink {
    virtual bool __stdcall OnNotice(unsigned long event) = 0;
};

struct IRTTITypeInfo : IUnknown {
    virtual AbstractType __stdcall WhatAmI() const = 0;
    virtual int __stdcall FetchID() const = 0;
    virtual void __stdcall CreateID() = 0;
};

struct IPersist {
    virtual HRESULT __stdcall GetClassID(CLSID* class_id) = 0;
};

struct IPersistStream : IPersist {
    virtual HRESULT __stdcall IsDirty() = 0;
    virtual HRESULT __stdcall Load(IStream* stream) = 0;
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) = 0;
    virtual HRESULT __stdcall GetSizeMax(ULARGE_INTEGER* size) = 0;
};

class AbstractClass : public IPersistStream, public IRTTITypeInfo, public INoticeSink, public INoticeSource {
public:
    static constexpr AbstractType kAbsID = static_cast<AbstractType>(52);

    virtual HRESULT __stdcall QueryInterface(const IID& iid, void** ppv) override { return E_NOINTERFACE; }
    virtual ULONG __stdcall AddRef() override { return 0; }
    virtual ULONG __stdcall Release() override { return 0; }

    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override { return E_NOTIMPL; }

    virtual HRESULT __stdcall IsDirty() override { return S_FALSE; }
    virtual HRESULT __stdcall Load(IStream* stream) override { return S_OK; }
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override { return S_OK; }
    virtual HRESULT __stdcall GetSizeMax(ULARGE_INTEGER* size) override { return E_NOTIMPL; }

    virtual AbstractType __stdcall WhatAmI() const override { return kAbsID; }
    virtual int __stdcall FetchID() const override { return 0; }
    virtual void __stdcall CreateID() override {}

    virtual bool __stdcall OnNotice(unsigned long event) override { return false; }

    virtual void __stdcall NotifySinks() override {}

    virtual ~AbstractClass() = default;

    virtual void Initialize() {}
    virtual void PointerExpired(AbstractClass* ptr, bool removed) {}
    virtual int Size() const { return 0; }
    virtual void CalculateChecksum(Checksummer& checksum) const {}
    virtual int GetOwningHouseIndex() const { return -1; }
    virtual HouseClass* GetOwningHouse() const { return nullptr; }
    virtual int GetArrayIndex() const { return -1; }
    virtual bool IsDead() const { return false; }
    virtual CoordStruct* GetCoords(CoordStruct* out) const { return nullptr; }
    virtual CoordStruct* GetDestination(CoordStruct* out, TechnoClass* docker = nullptr) const { return nullptr; }
    virtual bool IsOnFloor() const { return false; }
    virtual bool IsInAir() const { return false; }
    virtual CoordStruct* GetAltCoords(CoordStruct* out) const { return nullptr; }
    virtual void Update() {}

    CoordStruct GetCoords() const { CoordStruct crd; GetCoords(&crd); return crd; }
    CoordStruct GetDestination(TechnoClass* docker = nullptr) const { CoordStruct crd; GetDestination(&crd, docker); return crd; }
    CoordStruct GetAltCoords() const { CoordStruct crd; GetAltCoords(&crd); return crd; }

    bool operator<(const AbstractClass& rhs) const { return m_unique_id < rhs.m_unique_id; }

    uint32_t    m_unique_id;
    uint32_t    m_abstract_flags;
    uint32_t    m_unknown_18;
    int32_t     m_ref_count;
    bool        m_dirty;
    uint8_t     m_padding_21[3];

protected:
    AbstractClass() noexcept;
};

} // namespace game
} // namespace ra2
