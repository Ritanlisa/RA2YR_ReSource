#pragma once

#include <cstdint>
#include <windows.h>

#include "core/enums.hpp"
#include "core/math.hpp"
#include "core/vector.hpp"
#include "object/object.hpp"
#include "type/abstract_type.hpp"
#include "fundamentals.hpp"

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
    static DynamicVectorClass<AbstractTypeClass*>* Array; // data: 0x87F668

    virtual ~SuperWeaponTypeClass() = default;                                       // 0x6CEFE0 (SDDTOR)

    virtual AbstractType __stdcall whatAmI() const override; // 0x6CE8F0 (SD_vt11)
    virtual int32_t objectSize() const override; // 0x6CE900 (SD_vt12)
    virtual Action MouseOverObject(const CellStruct& cell, ObjectClass* pObjBelowMouse) const;

    static SuperWeaponTypeClass* FindFirstOfAction(Action action);                    // 0x6CEEB0

    SuperWeaponTypeClass(const char* pID) noexcept;                                   // 0x5113F0 (Construct)

    // type I/O
    void loadSWProperties(CCINIClass* ini);                                           // 0x474EE0
    static SuperWeaponTypeClass* FindOrCreate(const char* name);                       // 0x475540
    static SuperWeaponTypeClass* FindByName(const char* name);                         // 0x5117D0
    bool IsAvailable() const;                                                         // 0x4F6540
    void Construct(const char* pID);  // 0x5113F0

    // vtable helpers
    void SaveLoad_Prefix(IStream* stream);                                             // 0x6CE800
    void SaveLoad_Prefix_0(IStream* stream);                                           // 0x6CE8D0
    void SDDTOR();  // 0x6CEFE0

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
    explicit SuperWeaponTypeClass(noinit_t) noexcept;  // 0x6CE5B0
};

class SuperClass : public AbstractClass
{
public:
    static constexpr AbstractType AbsID = AbstractType::Super;
    static DynamicVectorClass<SuperClass*>* Array; // data: 0x87F670

    virtual ~SuperClass() = default;                                                 // 0x6CDEB0 (ddtor)

    virtual AbstractType __stdcall whatAmI() const override; // 0x6CE020 (PowerDrainUpdate area)
    // wrapper: delegates to SuperClass::PowerDrainUpdate at 0x6CE020
    virtual int32_t objectSize() const override;

    void Reset();                                                                    // 0x6CE0B0
    bool SetOnHold(bool onHold);                                                     // 0x6CB4D0
    bool Grant(bool oneTime, bool announce, bool onHold);
    bool Lose();                                                                     // 0x6CB7B0
    bool IsPowered() const;
    void Launch(const CellStruct& cell, bool isPlayer);                              // 0x6CC390
    int8_t CanFire() const;                                                           // 0x6CC360
    void SetReadiness(bool ready);                                                    // 0x6CB820
    int8_t StopPreclickAnim(bool isPlayer);                                           // 0x6CB830
    int8_t ClickFire(bool isPlayer, const CellStruct& cell);                          // 0x6CB920
    bool HasChargeProgressed(bool isPlayer);
    // wrapper: delegates to SuperClass::AnnounceReady at 0x6CC080
    int32_t GetCameoChargeState() const;
    void SetCharge(int32_t percentage);                                               // 0x6CC1E0
    // wrapper: delegates to SuperClass::SetCharge at 0x6CC1E0
    int32_t GetRechargeTime() const;
    void SetRechargeTime(int32_t time);                                               // 0x6CC280
    void ResetRechargeTime();                                                        // 0x6CC290
    const wchar_t* NameReadiness() const;                                             // 0x6CC2B0
    bool ShouldDrawProgress() const;                                                  // 0x6CDE90
    bool ShouldFlashTab() const;  // 0x6CE1A0

    SuperClass(SuperWeaponTypeClass* pSWType, HouseClass* pOwner) noexcept;           // 0x6CAEC0 (Constructor)

    // lifecycle
    void Constructor(SuperWeaponTypeClass* pSWType, HouseClass* pOwner);  // 0x6CAEC0
    void Construct();                                                                // 0x6CAF90
    void CleanupMembers();                                                           // 0x6CB120
    void StartTimer(int32_t duration);  // 0x6CB560
    void ExecuteAction(Action action);                                                // 0x6CDFF0
    void PowerDrainUpdate();  // 0x6CE020
    void AnnounceReady();  // 0x6CC080
    void LaunchPsychicDominator(const CellStruct& cell);                              // 0x53AE50
    void CreateChronoAnim(const CellStruct& cell);                                    // 0x6CB3A0

    // save/load
    void LoadFromStream(IStream* stream);                                             // 0x6CDEF0
    void SaveState(IStream* stream);                                                  // 0x6CDFD0

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
    // unmatched: no callgraph reference and no git history record
    explicit SuperClass(noinit_t) noexcept;
};

class LightningStorm
{
public:
    static double      CloudHeightFactor;           // data: 0xA8E7B8
    static CellStruct  Coords;                      // data: 0xA8E7C0
    static HouseClass* Owner;                       // data: 0xA8E7C8
    static int32_t     Deferment;                   // data: 0xA8E7CC
    static int32_t     Duration;                    // data: 0xA8E7D0
    static int32_t     StartTime;                   // data: 0xA8E7D4
    static bool        Active;                      // data: 0xA8E7D8
    static bool        TimeToEnd;                   // data: 0xA8E7D9

    static DynamicVectorClass<AnimClass*> CloudsPresent;     // data: 0xA8E7DC
    static DynamicVectorClass<AnimClass*> CloudsManifesting; // data: 0xA8E7F4
    static DynamicVectorClass<AnimClass*> BoltsPresent;      // data: 0xA8E80C

    static void Start(int32_t duration, int32_t deferment, const CellStruct& cell, HouseClass* pOwner); // 0x539EB0
    static void RequestStop();
    static bool HasDeferment();
    static void Strike(const CellStruct& cell);                              // 0x53A140
    static void Strike2(const CoordStruct& coords);                          // 0x53A300
    // unmatched: no callgraph reference and no git history record
    static void PrintMessage();
    static void End();  // 0x53A090
    static bool IsActive();  // 0x53A100
};

class PsyDom
{
public:
    static PsychicDominatorStatus  Status;   // data: 0xA8E824
    static CellStruct              Coords;   // data: 0xA8E828
    static HouseClass*             Owner;    // data: 0xA8E830
    static AnimClass*              Anim;     // data: 0xA8E834

    static void Start(HouseClass* pOwner, const CellStruct& coords);
    // wrapper: delegates to start at 0x7CD80F
    static void updateLogic();
    static void Fire();                                               // 0x53B080
    // unmatched: no callgraph reference and no git history record
    static void PrintMessage();
    static bool Active();
};

class ChronoScreenEffect
{
public:
    static int32_t Status;   // data: 0xA8E838
    static int32_t Duration; // data: 0xA8E83C

    static void Start(int32_t duration);
    // wrapper: delegates to ChronoScreenEffect::DecrementCounter at 0x753580
    static void updateLogic();
    static bool Active();
    static void DecrementCounter();  // 0x753580
};

class NukeFlash
{
public:
    static NukeFlashStatus  Status;     // data: 0xA8E840
    static int32_t          StartTime;  // data: 0xA8E844
    static int32_t          Duration;   // data: 0xA8E848

    static void FadeIn();
    static void FadeOut();
    // wrapper: delegates to NukeFlash::ProcessEffect at 0x53A120
    static bool IsFadingIn();
    // unmatched: no callgraph reference and no git history record
    static bool IsFadingOut();
    static bool IsActive();  // 0x53A110
    static void ProcessEffect();  // 0x53A120
};

} // namespace gamemd
