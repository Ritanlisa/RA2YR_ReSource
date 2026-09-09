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
// CSP: VoxelAnimTypeClass matched via T3
class VoxelAnimTypeClass;

struct BounceClass
{
    uint32_t data[6];
};

class VoxelAnimClass : public ObjectClass
{
public:
    static constexpr AbstractType kObjectTypeId = AbstractType::VoxelAnim;

    // design: virtual function, no binary implementation matched in IDA
    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override;
    // design: virtual function, no binary implementation matched in IDA
    virtual HRESULT __stdcall Save(IStream* pStm, BOOL fClearDirty) override;

    virtual ~VoxelAnimClass() override;  // 0x74AAD0

    // unmatched: no callgraph reference and no git history record
    virtual AbstractType __stdcall whatAmI() const override;
    // wrapper: delegates to VoxelAnimClass::ddtor at 0x74AAD0
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
// --- e4 declarations (BEGIN) ---
    float * QuaternionToMatrix(float * a2);  // 0x4399E0
    unsigned int ProcessFrame();  // 0x4CAF20
    char UpdateMatrix();  // 0x4D02B0
    int CleanupMembers();  // 0x7499F0
    int DrawVoxelFrame(int a2, int a3, int a4);  // 0x749B20
    char ProcessAnim(int * a2, unsigned int * a3);  // 0x749B70
    int StubReturn3();  // 0x74A960
    int SaveLoad_Prefix(ObjectClass * aP1, int aP1a);  // 0x74A970
    int SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2);  // 0x74AA10
    int GetFrameCount(int * a2);  // 0x74AA30
    int ddtor(int a1, unsigned int * a2);  // 0x74AAD0
    int StubReturn328();  // 0x74AB10
    int StubReturn41();  // 0x74AB20
    int LoadFrame();  // 0x74AB30
    int StubReturnFalse(int a1);  // 0x74AB40
    VoxelAnimClass * DrawVoxel(void * Block, char a2);  // 0x74AB50
    int Reset();  // 0x75AA90
    int Constructor();  // 0x75EBE0
// --- e4 declarations (END) ---
};

} // namespace gamemd

