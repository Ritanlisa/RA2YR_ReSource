#pragma once

#include <cstdint>
#include <unknwn.h>

#include "core/enums.hpp"
#include "core/interfaces.hpp"
#include "object/foot.hpp"

namespace gamemd {

using ra2::game::AbstractClass;
using ra2::game::AbstractType;




class AircraftTypeClass;

class StageClass : public IFlyControl
{
public:
    virtual int __stdcall Landing_Altitude() override { return 0; }
    virtual int __stdcall Landing_Direction() override { return 0; }
    virtual long __stdcall Is_Loaded() override { return 0; }
    virtual long __stdcall Is_Strafe() override { return 0; }
    virtual long __stdcall Is_Fighter() override { return 0; }
    virtual long __stdcall Is_Locked() override { return 0; }
};

class FlasherClass : public StageClass
{
};

class AircraftClass : public ra2::game::FootClass, public FlasherClass
{
public:
    static constexpr AbstractType kObjectTypeId = AbstractType::Aircraft;

    virtual int __stdcall Landing_Altitude() override { return 0; }
    virtual int __stdcall Landing_Direction() override { return 0; }
    virtual long __stdcall Is_Loaded() override { return 0; }
    virtual long __stdcall Is_Strafe() override { return 0; }
    virtual long __stdcall Is_Fighter() override { return 0; }
    virtual long __stdcall Is_Locked() override { return 0; }

    virtual HRESULT __stdcall QueryInterface(const IID& iid, void** ppvObject) override { return E_NOINTERFACE; }
    virtual ULONG __stdcall AddRef() override { return 0; }
    virtual ULONG __stdcall Release() override { return 0; }

    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override { return E_NOTIMPL; }
    virtual HRESULT __stdcall Load(IStream* pStm) override { return S_OK; }
    virtual HRESULT __stdcall Save(IStream* pStm, BOOL fClearDirty) override { return S_OK; }

    virtual AbstractType __stdcall whatAmI() const override { return kObjectTypeId; }
    virtual int objectSize() const override { return sizeof(AircraftClass); }

    virtual ~AircraftClass() override = default;

    int Mission_Attack() override;
    int Mission_Return() override;
    int Mission_Unload() override;
    int Mission_Hunt() override;
    int Mission_Retreat() override;

    AircraftTypeClass* Type;
    bool               unknown_bool_6C8;
    bool               HasPassengers;
    bool               IsKamikaze;
    uint32_t           unknown_6CC;
    bool               unknown_bool_6D0;
    bool               unknown_bool_6D1;
    bool               unknown_bool_6D2;
    char               unknown_char_6D3;
    bool               unknown_bool_6D4;
    bool               unknown_bool_6D5;

protected:
    AircraftClass() noexcept;
};

} // namespace gamemd

