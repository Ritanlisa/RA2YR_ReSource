#pragma once

#include <cstdint>
#include <unknwn.h>

#include "core/enums.hpp"
#include "core/math.hpp"
#include "core/vector.hpp"
#include "object/object.hpp"

namespace gamemd {

#ifndef GAMEMD_USING_ObjectClass
#define GAMEMD_USING_ObjectClass
using ra2::game::ObjectClass;
#endif
#ifndef GAMEMD_USING_TechnoClass
#define GAMEMD_USING_TechnoClass
using ra2::game::TechnoClass;
#endif
#ifndef GAMEMD_USING_AbstractClass
#define GAMEMD_USING_AbstractClass
using ra2::game::AbstractClass;
#endif
#ifndef GAMEMD_USING_HouseClass
#define GAMEMD_USING_HouseClass
using ra2::game::HouseClass;
#endif


class ParticleSystemTypeClass;
class ParticleClass;

class ParticleSystemClass : public ra2::game::ObjectClass
{
public:
    static constexpr AbstractType kObjectTypeId = AbstractType::ParticleSystem;

    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override { return E_NOTIMPL; }
    virtual HRESULT __stdcall Load(IStream* pStm) override { return S_OK; }
    virtual HRESULT __stdcall Save(IStream* pStm, BOOL fClearDirty) override { return S_OK; }

    virtual ~ParticleSystemClass() override = default;

    virtual AbstractType __stdcall whatAmI() const override { return kObjectTypeId; }
    virtual int objectSize() const override { return sizeof(ParticleSystemClass); }

    ParticleSystemTypeClass*            Type;
    CoordStruct                         SpawnDistanceToOwner;
    DynamicVectorClass<ParticleClass*>  Particles;
    CoordStruct                         TargetCoords;
    ra2::game::TechnoClass*             Owner;
    ra2::game::AbstractClass*           Target;
    int32_t                             SpawnFrames;
    int32_t                             Lifetime;
    int32_t                             SparkSpawnFrames;
    int32_t                             SpotlightRadius;
    bool                                TimeToDie;
    bool                                ParticleSystemClass_field_bool_F9;
    ra2::game::HouseClass*              OwnerHouse;

public:
    ParticleSystemClass(ParticleSystemTypeClass* pType) noexcept;

protected:
    ParticleSystemClass() = default;
};

} // namespace gamemd
