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

    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override;  // 0x4E8470
    virtual HRESULT __stdcall Load(IStream* pStm) override;  // 0x4E84A0
    virtual HRESULT __stdcall Save(IStream* pStm, BOOL fClearDirty) override;  // 0x4E84C0

    virtual ~ParticleSystemClass() override = default;  // 0x630230

    virtual AbstractType __stdcall whatAmI() const override; // IDA: UNMATCHED — no_callgraph_match, no_git_history
    virtual int objectSize() const override;  // 0x630200

    void Draw(void* surface, int draw_x, int draw_y);  // 0x62FE60

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
    ParticleSystemClass(ParticleSystemTypeClass* pType) noexcept; // 0x4E8780

protected:
    ParticleSystemClass() = default; // 0x4E8780
};

} // namespace gamemd
