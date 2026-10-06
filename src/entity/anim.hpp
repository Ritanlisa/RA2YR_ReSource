#pragma once

#include <cstdint>
#include <unknwn.h>

#include "core/enums.hpp"
#include "object/object.hpp"
#include "object/techno.hpp"

namespace gamemd {

// CSP: AnimTypeClass matched via T1
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

    virtual ~AnimClass() override;  // 0x4228E0

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
    HouseClass*  Owner;
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
              HouseClass* owner) noexcept;
    unsigned char __pad_120[73];  // 0x120
    unsigned char __pad_194[11];  // 0x194
    unsigned char __pad_118[4];  // 0x118
    unsigned int AnimClass_field_0x104;  // 0x104
    void* AnimClass_field_0x0;  // 0x0
    unsigned int AnimClass_field_0x100;  // 0x100
    unsigned int AnimClass_field_0x11C;  // 0x11C
    unsigned int AnimClass_field_0x184;  // 0x184
    unsigned int AnimClass_field_0x188;  // 0x188
    unsigned int AnimClass_field_0x1A0;  // 0x1A0
    unsigned int AnimClass_field_0x1B4;  // 0x1B4
    unsigned int AnimClass_field_0x4;  // 0x4
    unsigned int AnimClass_field_0x8;  // 0x8
    unsigned int AnimClass_field_0xAC;  // 0xAC
    unsigned char __pad_A0[4];  // 0xA0 (ml AnimClass@0xA0=q0A0 slot witness; g57e2 W4)
    unsigned int AnimClass_field_0x9C;  // 0x9C (ml AnimClass@0x9C=q09C slot witness; g57e2 W4)
    unsigned int AnimClass_field_0xA4;  // 0xA4 (ml AnimClass@0xA4=q0A4 slot witness; g57e2 W4)
    unsigned int AnimClass_field_0xB4;  // 0xB4
    unsigned int AnimClass_field_0xBC;  // 0xBC
    unsigned int AnimClass_field_0xC0;  // 0xC0
    unsigned int AnimClass_field_0xC8;  // 0xC8
    unsigned int AnimClass_field_0xCC;  // 0xCC
    unsigned char AnimClass_field_0xD0[1];  // 0xD0
    unsigned int AnimClass_field_0xD4;  // 0xD4
    unsigned char AnimClass_field_0xFC[1];  // 0xFC
    unsigned char __pad_178[2];  // 0x178
    unsigned char __pad_18C;  // 0x18C
    unsigned char __pad_7C[21];  // 0x7C
    unsigned char __pad_B0[1];  // 0xB0
    unsigned char __pad_C;  // 0xC
    unsigned char q41C[107];  // 0x41C (ml AnimClass@0x41C=q41C unsigned char 107B; g57b5 W2r2 词表内补洞)
    unsigned char __pad_C4;  // 0xC4
    unsigned char __pad_D8;  // 0xD8
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    void* ctor(void* a1, void* a2, void* a3, int a4, void* a5, void* a6, int a7); // 0x421EA0  // g57e2 W5i: raw proto (void*,int*,void*,int,void*,void*,char)
    int SimpleCtor();  // 0x422720
    int SetAnimSpeed();  // 0x422BC0
    int * UpdateZAdjust(int * a1);  // 0x422BE0
    char CheckLayerFlags(int a1, int a2, int a3);  // 0x422C70
    bool UpdateMirrorState(int a1);  // 0x4238B0
    int UpdateProjectileTrajectory();  // 0x423930
    int ClearTargetReferences(int a1, int a2);  // 0x425150
    int SaveLoad_Prefix(int a1, int a2);  // 0x425280
    int ProcessPower(int * a1);  // 0x425410
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
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    int ProcessFrame();  // 0x761030 -- AnimClass::ProcessFrame
    // 2026-09-07 归位（原 BuildingClass::SetField95/8 误挂）：4/4 调用方
    // 传 AnimClass receiver（HouseClass::PsiWarn / ProcessSuperWeaponEffects
    // 直接传 AnimClass::ctor 结果；PlayAnim/Deactivate/UpdateAnimationSlots
    // 传建筑动画槽数组项）。写 AnimClass+0x17C(dword)/+0x19E(byte=1)，
    // 成员语义待 AnimClass 中段布局考古（til 现为 field_17C/pad）。
    void SetField95(int value);  // 0x424C90 -- AnimClass::SetField95
    void SetField8(int value);  // 0x425260 -- AnimClass::SetField8
    // === SYMBOL-ANCHOR (END) ===
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    void* CheckMirrorFlags(int a1);  // 0x4238d0
    int SaveLoad_Prefix_0(int a1, int a2, int a3);  // 0x4253b0
    int ProcessAreaEffect(int a1);  // 0x426300
    int MissionStubReturnZero2(int a1, int a2);  // 0x426540
    int GetAnimation(int a1, int a2);  // 0x7298f0
    // === FUNCS-MOVE (END) ===
    unsigned int AnimClass_field_0x190; // 0x190  gB member supply
public:  // g57c5 W4b supply slot
    int AnimClass_field_0x108;  // 0x108 g57c5 W4b (self-desc vocab, ml slot witness)
public:  // g57c5 W4b supply slot
    int __pad_10C;  // 0x10C g57c5 W4b (self-desc vocab, ml slot witness)
public:  // g57c5 W4b supply slot
    int AnimClass_field_0x114;  // 0x114 g57c5 W4b (self-desc vocab, ml slot witness)
public:  // g57c5 W4b supply slot
    int AnimClass_field_0x17C;  // 0x17C g57c5 W4b (self-desc vocab, ml slot witness)
public:  // g57c5 W4b supply slot
    int AnimClass_field_0x180;  // 0x180 g57c5 W4b (self-desc vocab, ml slot witness)
public:  // g57c5 W4b supply slot
    int AnimClass_field_0xB8;  // 0xB8 g57c5 W4b (self-desc vocab, ml slot witness)
};

} // namespace gamemd
