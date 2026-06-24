#pragma once

#define GAMEMD_VOXEL_STRUCT_FULL  // prevents stub in object_type.hpp

#include <cstdint>

#include "core/math.hpp"
#include "core/enums.hpp"
#include "core/vector.hpp"
#include "fundamentals.hpp"

namespace gamemd {

// Forward declarations needed by VoxelStruct
class AnimTypeClass;
class HouseClass;
class ParticleSystemClass;
class ParticleSystemTypeClass;
class WarheadTypeClass;
class WeaponTypeClass;
class VoxelAnimTypeClass;

struct VoxLib
{
    void Start();
    bool Loaded();
    void Clear();
    // unmatched: no callgraph reference and no git history record
    void InitLimits(
        int32_t hva_min_x, int32_t hva_min_y, int32_t hva_min_z,
        int32_t hva_max_x, int32_t hva_max_y, int32_t hva_max_z);

    int32_t VXL_FileStart;
    uint8_t* VXL_File;
    uint32_t* VXL_Body;
    int32_t* VXL_HVATrans;
    int32_t Counter;
    int32_t CurrentVXLIndex;
    uint32_t VXLSize;
    uint32_t VXL_HVASize;

    int32_t VoxLib_field_1C;
    int32_t VoxLib_field_20;
    int32_t VoxLib_field_24;
    int32_t VoxLib_field_28;
    int32_t VoxLib_field_2C;
    int32_t VoxLib_field_30;
    int32_t VoxLib_field_34;
    int32_t VoxLib_field_38;
    int32_t VoxLib_field_3C;
    int32_t HVA_MinX;
    int32_t HVA_MinY;
    int32_t HVA_MinZ;
    int32_t HVA_MaxX;
    int32_t HVA_MaxY;
    int32_t HVA_MaxZ;
    int32_t HVA_NormalSize;
    bool    GenerateMipLevels;
    bool    VoxLib_field_69;
    uint8_t pad[2];
    float   XCompress;
    float   YCompress;
    float   ZCompress;
    int32_t VoxLib_field_78;
    int32_t VoxLib_field_7C;
};

struct MotLib
{
    bool Loaded();
    int32_t Frames;
    int32_t Layers;
    int32_t MotLib_field_8;
    uint32_t* Data;
    int16_t MotLib_field_10;
    int16_t MotLib_field_12;
    int16_t MotLib_field_14;
    int16_t MotLib_field_16;
    int16_t MotLib_field_18;
    int16_t MotLib_field_1A;
    int16_t MotLib_field_1C;
    int16_t MotLib_field_1E;
};

// Define VoxelStruct BEFORE including object_type.hpp
// (object_type.hpp has a stub that is skipped via GAMEMD_VOXEL_STRUCT_FULL)
struct VoxelStruct
{
    VoxLib* VXL;
    MotLib* HVA;
    bool    VoxelStruct_field_8;
    uint8_t pad[3];
};

} // namespace gamemd

#include "type/object_type.hpp"
#include "object/object.hpp"
#include "bounce.hpp"

namespace gamemd {

#ifndef GAMEMD_USING_ObjectClass
#define GAMEMD_USING_ObjectClass
using ra2::game::ObjectClass;
#endif
#ifndef GAMEMD_USING_AbstractType
#define GAMEMD_USING_AbstractType
using ra2::game::AbstractType;
#endif
#ifndef GAMEMD_USING_AudioController
#define GAMEMD_USING_AudioController
using ra2::game::AudioController;
#endif

class VoxelAnimTypeClass : public ObjectTypeClass
{
public:
    static constexpr AbstractType kAbsID = AbstractType::VoxelAnimType;

    static DynamicVectorClass<VoxelAnimTypeClass*>* Array;

    // design: virtual function, no binary implementation matched in IDA
    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override;

    // unmatched: no callgraph reference and no git history record
    virtual AbstractType __stdcall WhatAmI() const;
    virtual int Size() const;

    // wrapper: delegates to BuildingClass::Size at 0x454190
    virtual bool SpawnAtMapCoords(CellStruct* coords, HouseClass* owner);
    virtual ObjectClass* CreateObject(HouseClass* owner) override;  // 0x4737F0

    virtual ~VoxelAnimTypeClass() override = default;  // 0x74BA30

    bool Normalized;
    bool Translucent;
    bool SourceShared;
    uint8_t  align_297;
    int32_t  VoxelIndex;
    int32_t  Duration;
    double   Elasticity;
    double   MinAngularVelocity;
    double   MaxAngularVelocity;
    double   MinZVel;
    double   MaxZVel;
    double   MaxXYVel;
    bool     IsMeteor;
    uint8_t  align_2D1[3];
    VoxelAnimTypeClass*        Spawns;
    int32_t                    SpawnCount;
    int32_t                    StartSound;
    int32_t                    StopSound;
    AnimTypeClass*             BounceAnim;
    AnimTypeClass*             ExpireAnim;
    AnimTypeClass*             TrailerAnim;
    int32_t                    Damage;
    int32_t                    DamageRadius;
    WarheadTypeClass*          Warhead;
    ParticleSystemTypeClass*   AttachedSystem;
    bool                       IsTiberium;
    uint8_t                    align_301[3];

protected:
    VoxelAnimTypeClass() = default;
    // design: no binary equivalent found in IDA
    explicit VoxelAnimTypeClass(noinit_t) noexcept;
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int PowerDrainUpdate(int a1);  // 0x74b690 -- VoxelAnimTypeClass::PowerDrainUpdate
    int GetData(int a1, int a2);  // 0x74b8f0 -- VoxelAnimTypeClass::GetData
    int LoadSection(int a1, int a2);  // 0x5f7a90 -- VoxelAnimType::LoadSection
    int LoadBarrel(int a1, int a2);  // 0x5f7db0 -- VoxelAnimType::LoadBarrel
    int LoadAnim();  // 0x5f8110 -- VoxelAnimType::LoadAnim
    // === SYMBOL-ANCHOR (END) ===
};



class VoxelAnimClass : public ObjectClass
{
public:
    static constexpr AbstractType kAbsID = AbstractType::VoxelAnim;

    static DynamicVectorClass<VoxelAnimClass*>* Array;

    // design: virtual function, no binary implementation matched in IDA
    virtual HRESULT __stdcall GetClassID(CLSID* class_id) override;

    // design: virtual function, no binary implementation matched in IDA
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;

    virtual ~VoxelAnimClass() override = default;  // 0x74AAD0

    // unmatched: no callgraph reference and no git history record
    virtual AbstractType __stdcall WhatAmI() const;
    virtual int Size() const;

    uint32_t                align_AC;
    BounceClass             Bounce;
    int32_t                 Voxelfield_int_100;
    VoxelAnimTypeClass*     Type;
    ParticleSystemClass*    AttachedSystem;
    HouseClass*             OwnerHouse;
    bool                    TimeToDie;
    uint8_t                 align_111[3];
    AudioController         Audio3;
    AudioController         Audio4;
    bool                    Invisible;
    uint8_t                 align_13D[3];
    int32_t                 Duration;
    uint32_t                align_144;

protected:
    VoxelAnimClass() = default;
    // design: no binary equivalent found in IDA
    explicit VoxelAnimClass(noinit_t) noexcept;
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    void* QuaternionToMatrix(int a1);  // 0x4399e0 -- VoxelAnimClass::QuaternionToMatrix
    int UpdateMatrix();  // 0x4d02b0 -- VoxelAnimClass::UpdateMatrix
    int CleanupMembers();  // 0x7499f0 -- VoxelAnimClass::CleanupMembers
    int DrawVoxelFrame(int a1, int a2, int a3);  // 0x749b20 -- VoxelAnimClass::DrawVoxelFrame
    int ProcessAnim(int a1, int a2);  // 0x749b70 -- VoxelAnimClass::ProcessAnim
    int Update();  // 0x749f30 -- VoxelAnimClass::Update
    int SaveLoad_Prefix(int a1, int a2);  // 0x74a970 -- VoxelAnimClass::SaveLoad_Prefix
    int GetFrameCount(int a1);  // 0x74aa30 -- VoxelAnimClass::GetFrameCount
    int LoadFrame();  // 0x74ab30 -- VoxelAnimClass::LoadFrame
    void* DrawVoxel(int a1);  // 0x74ab50 -- VoxelAnimClass::DrawVoxel
    int Reset();  // 0x75aa90 -- VoxelAnimClass::Reset
    // === SYMBOL-ANCHOR (END) ===
};

} // namespace gamemd

