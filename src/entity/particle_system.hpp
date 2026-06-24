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

    // unmatched: no callgraph reference and no git history record
    virtual AbstractType __stdcall whatAmI() const override;
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
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    int updateParticles(int a1);  // 0x4E87B0
    int AddRef(int a1);  // 0x4E9DE0
    int Release(int a1, void* a2);  // 0x4E9F60
    int Init(void* a1);  // 0x4EA010
    int ReallocateBuffer(int a1, void* a2);  // 0x4EB3E0
    int processParticleFrame(void* a1);  // 0x4EB490
    void* QueryInterface(int a1);  // 0x4EF850
    void* finalizeParticles(int a1);  // 0x4EFDA0
    int Constructor(int a1, void* a2, int a3, void* a4, void* a5, int a6);  // 0x62DC50
    void CreateBuildingLight(int a1, int a2);  // 0x62E280
    int CreateParticle(void* a1, void* a2);  // 0x62E380
    void UpdateAllParticles();  // 0x62E6D0
    int SpawnParticle();  // 0x62F230
    int Update();  // 0x62FD60
    int UpdateSystem(int a1, int a2);  // 0x62FE90
    int Write(int a1, void* a2);  // 0x62FF20
    int PowerDrainUpdate(void* a1);  // 0x630100
    void ProcessFrame();  // 0x6301E0
    int Stub();  // 0x630220
    void* resetSystemState(int a1, int a2);  // 0x6302A0
    // --- gap2 auto-generated stub declarations (END) ---
};

} // namespace gamemd
