#pragma once

#include <cstdint>
#include <unknwn.h>

#include "core/enums.hpp"
#include "object/object.hpp"
#include "object/techno.hpp"

namespace gamemd {

class AnimTypeClass;
class BulletClass;
class LightConvertClass;

struct BounceClass
{
    uint32_t data[6];
};

class AnimClass : public ra2::game::ObjectClass
{
public:
    static constexpr AbstractType kObjectTypeId = AbstractType::Anim;

    // design: virtual function, no binary implementation matched in IDA
    virtual HRESULT __stdcall GetClassID(CLSID* pClassID) override;
    // design: virtual function, no binary implementation matched in IDA
    virtual HRESULT __stdcall Save(IStream* pStm, BOOL fClearDirty) override;

    virtual ~AnimClass() override = default;  // 0x4228E0

    // unmatched: no callgraph reference and no git history record
    virtual AbstractType __stdcall whatAmI() const override;
    // wrapper: delegates to AnimClass::Destruct at 0x4228E0
    virtual int objectSize() const override;

    // wrapper: delegates to AnimClass::Destruct at 0x4228E0
    virtual int AnimExtras();
    // unmatched: no callgraph reference and no git history record
    virtual int GetEnd() const;

    void Render(void* surface, int* a2, int* a3);  // 0x422CA0
    void FreeRenderBuffer();  // 0x428DE0

    ProgressTimer       Animation;
    AnimTypeClass*      Type;
    ra2::game::ObjectClass* OwnerObject;
    uint32_t            AnimClass_field_D0;
    LightConvertClass*  LightConvert;
    int32_t             LightConvertIndex;
    char                PaletteName[0x20];
    int32_t             TintColor;
    int32_t             ZAdjust;
    int32_t             YSortAdjust;
    ra2::game::CoordStruct  FlamingGuyCoords;
    int32_t             FlamingGuyRetries;
    bool                IsBuildingAnim;
    bool                UnderTemporal;
    bool                Paused;
    bool                Unpaused;
    int32_t             PausedAnimFrame;
    bool                Reverse;
    uint32_t            AnimClass_field_124;
    BounceClass         Bounce;
    uint8_t             TranslucencyLevel;
    bool                TimeToDie;
    BulletClass*        AttachedBullet;
    ra2::game::HouseClass*  Owner;
    int32_t             LoopDelay;
    double              Damage;
    BlitterFlags        AnimFlags;
    bool                HasExtras;
    uint8_t             RemainingIterations;
    uint8_t             AnimClass_field_196;
    uint8_t             AnimClass_field_197;
    bool                IsPlaying;
    bool                IsFogged;
    bool                FlamingGuyExpire;
    bool                UnableToContinue;
    bool                SkipProcessOnce;
    bool                Invisible;
    bool                PowerOff;
    uint8_t             unused_19F;
    ra2::game::AudioController Audio3;
    ra2::game::AudioController Audio4;

protected:
    AnimClass() = default;
public:
    AnimClass(AnimTypeClass* pType, const ra2::game::CoordStruct& coords,
              int z_adjust, int loop_delay, double damage,
              ra2::game::HouseClass* owner) noexcept;
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    void* ctor(void* a1, void* a2, void* a3, int a4, void* a5, void* a6, int a7);  // 0x421EA0
    int SimpleCtor();  // 0x422720
    int SetAnimSpeed();  // 0x422BC0
    void* UpdateZAdjust(void* a1);  // 0x422BE0
    int CheckLayerFlags(int a1, int a2, int a3);  // 0x422C70
    bool UpdateMirrorState(int a1);  // 0x4238B0
    int UpdateProjectileTrajectory();  // 0x423930
    int ClearTargetReferences(int a1, int a2);  // 0x425150
    int SaveLoad_Prefix(int a1, int a2);  // 0x425280
    int ProcessPower(void* a1);  // 0x425410
    int CheckEndOfSequence();  // 0x425510
    int Undeploy();  // 0x425530
    int ProcessCraterFormation();  // 0x4255B0
    int CheckDamageFlags();  // 0x425630
    int UpdateDamageRadius(void* a1);  // 0x426270
    void* MissionStubReturnZero3(int a1);  // 0x426590
    void* InitRotation(void* a1, int a2, int a3, int a4, int a5, int a6, int a7, void* a8, double a9);  // 0x4397E0
    int initAnimation();  // 0x447E00
    bool updateAnimation(int a1);  // 0x448070
    int drawFrame();  // 0x448260
    int resetAnimation();  // 0x449540
    int setLoopCount();  // 0x449A50
    int finalizeAnimation();  // 0x449C30
    void ProcessSequence();  // 0x729370
    // --- gap2 auto-generated stub declarations (END) ---
};

} // namespace gamemd
