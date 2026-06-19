#pragma once

#include <cstdint>
#include <unknwn.h>

#include "core/enums.hpp"
#include "object/object.hpp"

namespace gamemd {

#ifndef GAMEMD_USING_ObjectClass
#define GAMEMD_USING_ObjectClass
using ra2::game::ObjectClass;
#endif
#ifndef GAMEMD_USING_AbstractClass
#define GAMEMD_USING_AbstractClass
using ra2::game::AbstractClass;
#endif
#ifndef GAMEMD_USING_AbstractType
#define GAMEMD_USING_AbstractType
using ra2::game::AbstractType;
#endif
#ifndef GAMEMD_USING_CoordStruct
#define GAMEMD_USING_CoordStruct
using ra2::game::CoordStruct;
#endif
#ifndef GAMEMD_USING_AudioController
#define GAMEMD_USING_AudioController
using ra2::game::AudioController;
#endif








class HouseClass;
class ParticleSystemClass;
class VoxelAnimTypeClass;

struct BounceClass
{
    uint32_t data[6];
};

class VoxelAnimClass : public ObjectClass
{
public:
    static constexpr AbstractType kObjectTypeId = AbstractType::VoxelAnim;

    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override;
    virtual HRESULT __stdcall Save(IStream* pStm, BOOL fClearDirty) override;

    virtual ~VoxelAnimClass() override = default;

    virtual AbstractType __stdcall whatAmI() const override;
    virtual int objectSize() const override;

    uint32_t               unused_AC;
    BounceClass            Bounce;
    int32_t                Voxelfield_int_100;
    VoxelAnimTypeClass*    Type;
    ParticleSystemClass*   AttachedSystem;
    HouseClass*            OwnerHouse;
    bool                   TimeToDie;
    uint8_t                unused_111[3];
    AudioController        Audio3;
    AudioController        Audio4;
    bool                   Invisible;
    uint8_t                unused_13D[3];
    int32_t                Duration;
    uint32_t               unused_144;

protected:
    VoxelAnimClass() = default;
};

} // namespace gamemd

