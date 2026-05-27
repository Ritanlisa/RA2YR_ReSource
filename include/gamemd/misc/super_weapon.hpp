#pragma once

#include <cstdint>
#include <windows.h>

#include "..\core\enums.hpp"
#include "..\core\math.hpp"
#include "..\core\vector.hpp"
#include "..\object\object.hpp"
#include "..\type\abstract_type.hpp"
#include "..\fundamentals.hpp"

namespace gamemd {

#ifndef GAMEMD_USING_AbstractClass
#define GAMEMD_USING_AbstractClass
using ra2::game::AbstractClass;
#endif
#ifndef GAMEMD_USING_AbstractType
#define GAMEMD_USING_AbstractType
using ra2::game::AbstractType;
#endif
#ifndef GAMEMD_USING_ObjectClass
#define GAMEMD_USING_ObjectClass
using ra2::game::ObjectClass;
#endif





class WeaponTypeClass;
class BuildingTypeClass;
class AnimClass;
class WarheadTypeClass;
class HouseClass;
struct SHPStruct;

class SuperWeaponTypeClass : public AbstractTypeClass
{
public:
    static constexpr AbstractType AbsID = AbstractType::SuperWeaponType;
    static DynamicVectorClass<AbstractTypeClass*>* Array;

    virtual ~SuperWeaponTypeClass() = default;

    virtual AbstractType __stdcall WhatAmI() const override { return AbsID; }
    virtual int32_t Size() const override { return sizeof(SuperWeaponTypeClass); }
    virtual Action MouseOverObject(const CellStruct& cell, ObjectClass* pObjBelowMouse) const { return Action::None; }

    static SuperWeaponTypeClass* FindFirstOfAction(Action action);

    SuperWeaponTypeClass(const char* pID) noexcept;

    int32_t             ArrayIndex;
    WeaponTypeClass*    WeaponType;
    int32_t             RechargeVoice;
    int32_t             ChargingVoice;
    int32_t             ImpatientVoice;
    int32_t             SuspendVoice;
    int32_t             RechargeTime;
    SuperWeaponType     Type;
    SHPStruct*          SidebarImage;
    Action              ActionValue;
    int32_t             SpecialSound;
    int32_t             StartSound;
    BuildingTypeClass*  AuxBuilding;
    char                SidebarImageFile[0x18];
    uint8_t             zero_E4;
    bool                UseChargeDrain;
    bool                IsPowered;
    bool                DisableableFromShell;
    int32_t             FlashSidebarTabFrames;
    bool                AIDefendAgainst;
    bool                PreClick;
    bool                PostClick;
    int32_t             PreDependent;
    bool                ShowTimer;
    bool                ManualControl;
    float               Range;
    int32_t             LineMultiplier;

    // TODO: complete SuperWeaponTypeClass

protected:
    explicit SuperWeaponTypeClass(noinit_t) noexcept;
};

class SuperClass : public AbstractClass
{
public:
    static constexpr AbstractType AbsID = AbstractType::Super;
    static DynamicVectorClass<SuperClass*>* Array;

    virtual ~SuperClass() = default;

    virtual AbstractType __stdcall WhatAmI() const override { return AbsID; }
    virtual int32_t Size() const override { return sizeof(SuperClass); }

    void Reset();
    bool SetOnHold(bool onHold);
    bool Grant(bool oneTime, bool announce, bool onHold);
    bool Lose();
    bool IsPowered() const;
    void Launch(const CellStruct& cell, bool isPlayer);
    int8_t CanFire() const;
    void SetReadiness(bool ready);
    int8_t StopPreclickAnim(bool isPlayer);
    int8_t ClickFire(bool isPlayer, const CellStruct& cell);
    bool HasChargeProgressed(bool isPlayer);
    int32_t GetCameoChargeState() const;
    void SetCharge(int32_t percentage);
    int32_t GetRechargeTime() const;
    void SetRechargeTime(int32_t time);
    void ResetRechargeTime();
    const wchar_t* NameReadiness() const;
    bool ShouldDrawProgress() const;
    bool ShouldFlashTab() const;

    SuperClass(SuperWeaponTypeClass* pSWType, HouseClass* pOwner) noexcept;

    int32_t                  CustomChargeTime;
    SuperWeaponTypeClass*    Type;
    HouseClass*              Owner;
    TimerStruct              RechargeTimer;
    uint32_t                 unused_3C;
    bool                     BlinkState;
    uint8_t                  unused_41[7];
    LARGE_INTEGER            BlinkTimer;
    int32_t                  SpecialSoundDuration;
    CoordStruct              SpecialSoundLocation;
    bool                     CanHold;
    uint8_t                  unused_61;
    CellStruct               ChronoMapCoords;
    uint8_t                  unused_66[2];
    AnimClass*               Animation;
    bool                     AnimationGotInvalid;
    bool                     Granted;
    bool                     OneTime;
    bool                     IsCharged;
    bool                     IsOnHold;
    uint8_t                  unused_71[3];
    int32_t                  ReadinessFrame;
    int32_t                  CameoChargeState;
    ChargeDrainState         ChargeDrainState;

    // TODO: complete SuperClass

protected:
    explicit SuperClass(noinit_t) noexcept;
};

class LightningStorm
{
public:
    static double      CloudHeightFactor;
    static CellStruct  Coords;
    static HouseClass* Owner;
    static int32_t     Deferment;
    static int32_t     Duration;
    static int32_t     StartTime;
    static bool        Active;
    static bool        TimeToEnd;

    static DynamicVectorClass<AnimClass*> CloudsPresent;
    static DynamicVectorClass<AnimClass*> CloudsManifesting;
    static DynamicVectorClass<AnimClass*> BoltsPresent;

    static void Start(int32_t duration, int32_t deferment, const CellStruct& cell, HouseClass* pOwner);
    static void RequestStop();
    static bool HasDeferment();
    static void Strike(const CellStruct& cell);
    static void Strike2(const CoordStruct& coords);
    static void PrintMessage();
};

class PsyDom
{
public:
    static PsychicDominatorStatus  Status;
    static CellStruct              Coords;
    static HouseClass*             Owner;
    static AnimClass*              Anim;

    static void Start(HouseClass* pOwner, const CellStruct& coords);
    static void Update();
    static void Fire();
    static void PrintMessage();
    static bool Active();
};

class ChronoScreenEffect
{
public:
    static int32_t Status;
    static int32_t Duration;

    static void Start(int32_t duration);
    static void Update();
    static bool Active();
};

class NukeFlash
{
public:
    static NukeFlashStatus  Status;
    static int32_t          StartTime;
    static int32_t          Duration;

    static void FadeIn();
    static void FadeOut();
    static bool IsFadingIn();
    static bool IsFadingOut();
};

} // namespace gamemd

