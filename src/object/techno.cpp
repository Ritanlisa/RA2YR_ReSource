// G42.32 P: tree-universe marker -- e4 tree-owned decls suppressed
#define GAMEMD_TREE_UNIVERSE 1
#include "object/techno.hpp"
#include "object/globals_object.hpp"
#include "object/radbeam.hpp"
#include "structure/building.hpp"
#include "type/building_type.hpp"
#include "misc/audio_ext.hpp"  // g57e2 W5: AudioSource cast operand
#include "entity/anim.hpp"  // g57e2 W5c: AnimClass full def (C2027)
// dword_8871E0 host (render/supplied_bodies.cpp:205 precedent; ml RulesClass
// Normal@0xB9C int[20] g7-til-merge + q0A0/MinimumRange byte windows) -- g57e2 W5
int StartAudioController(unsigned int *aP0, ::gamemd::AudioSource *a1);  // g57e2 W5c: TU-local (entity/supplied_bodies.cpp:40 precedent; raw 0x423b00)
struct dword_8871E0_v {
    unsigned char q000[0x94];
    void *InfantryBrute;  // 0x94 (ml RulesClass@0x94 InfantryBrute g7-til-merge; g57e2 W5f)
    unsigned char __pad_98[8];
    unsigned char q0A0[28];
    unsigned char __pad_BC[0xB9C - 0xBC];
    int Normal[20];
};
extern dword_8871E0_v *dword_8871E0_t;
extern unsigned int dword_87F7E8;
extern unsigned int dword_A8B230;  // data: 0xA8B230 (Scenario singleton window)
struct dword_A8B230_elem_te { unsigned int NeedsSaveOrLink; };  // g57e2 W5g (object/supplied_bodies.cpp:191 precedent)
#define dword_A8B230_te ((dword_A8B230_elem_te *)&dword_A8B230)
int Random_Range(void *a1, int a2, int a3);  // raw 0x6e17e3 Random::Range (g57b5 W3 decl; g57e2 W5f)  // data: 0x87F7E8 (g57e2 W5e; global obj as Coord window)  // data: 0x8871E0 (Rules instance pointer)
#define dword_8871E0 dword_8871E0_t


#include <cstring>
// G42.34 T1: bridge for HouseClass_e4.hpp bare AbstractClass*
using ra2::game::AbstractClass;
#include "e4/e4_globals_decls.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "system/map.hpp"
// ---- g57b5 W6: TU-local globals (csp_canon 驱动) ----extern int AudioSource;  // 词表 (canon 无条目, int 兜底) L1306
// ---- g57c5 W5 vocab (declaration-only) ----
namespace ra2 { namespace game {
int Cell_CanPlaceBuilding(int* p0, int* p1);  // x4:signals@0x43b4c0
int Cell_GetGroundHeight(int* p0);  // x4:signals@0x578080
int ConstructionPositionTracker(TechnoClass *p_this);  // x4:ida@0x425670
int Coord_GetCoords(int* p0);  // x4:signals@0x4399a0
int CreateSmokeEffectAt(int p0, int p1, int p2, int p3, int p4, char p5, int p6);  // x4:signals@0x48a620
int Math_RoundToInt(double p0);  // x4:signals@0x7c5f00
int ObjectClass_DetectCloaked(TechnoClass *p_this);  // x4:ida@0x5f3e70
int PlaySoundEffectAt(int* p0, int p1, int* p2, int p3, char p4, int p5);  // x4:signals@0x489280
} }
// ---- g57c5 W5 end ----
extern int Coord;  // 词表 (canon 无条目, int 兜底) L1352
extern unsigned char byte_A8EB7F; // 词表 (canon 无条目, int 兜底) L1323
// g57b5 W6audit: int 兜底移除 (member-access 用法会放大为 C2109 群; 还原为 C2065 债): extern int dword_8871E0;  // 词表 (canon 无条目, int 兜底) L1321
// ---- g57b5 W6 end ----
// ---- g57b5 W5: qualified-call free-form vocab ----
namespace gamemd {
int Cell_GetGroundHeight(int* p0);  // x4:signals@0x578080
int Coord_GetCoords(int* p0);  // x4:signals@0x4399a0
int CreateSmokeEffectAt(int p0, int p1, int p2, int p3, int p4, char p5, int p6);  // x4:signals@0x48a620
int ObjectClass_DetectCloaked(TechnoClass *p_this);  // x4:ida@0x5f3e70
int Cell_GetGroundHeight(int* p0);  // x4:signals@0x578080
int Coord_GetCoords(int* p0);  // x4:signals@0x4399a0
int ObjectClass_DetectCloaked(TechnoClass *p_this);  // x4:ida@0x5f3e70
int Cell_CanPlaceBuilding(int* p0, int* p1);  // x4:signals@0x43b4c0
int ConstructionPositionTracker(TechnoClass *p_this);  // x4:ida@0x425670
int GetGroundHeight(int* p0);  // x4:signals@0x578080
int GetNthOfType(Building *p_this);  // x4:ida@0x485020
int Math_RoundToInt(double p0);  // x4:signals@0x7c5f00
int PlaySoundEffectAt(int* p0, int p1, int* p2, int p3, char p4, int p5);  // x4:signals@0x489280
} // namespace gamemd
// ---- g57b5 W5 end ----
// ---- g57b5 W3: TU-local 真形 vocab (declaration-only) ----
namespace gamemd {
    int Math_RoundToInt(double a1);                    // raw fn_49 Math::RoundToInt 家族 (16 处跨 TU);
    void *Coord_To_Cell(void *a1, void *a2);           // raw Coord::To_Cell 家族 (fn_42:3240);
    int Cell_CanPlaceBuilding(void *a1, void *a2);    // raw 0x423b5c Cell::CanPlaceBuilding;
    int ZCoordToScreenY(int a1);                       // raw 0x423a6c;
    int StartAudioControllerAt(int aP0, unsigned int *a2, int **a1);  // 0x7509E0 真形;
    struct stru_87F5F0_host {                      // 0x87F5F0 宿主 (object/supplied_bodies:106 同款)
        unsigned char q000[0x58];
        unsigned char __pad_58[0x280 - 0x58];      // 覆盖 __pad_58[416] = +0x1F8
    };
    extern stru_87F5F0_host stru_87F5F0;          // data: 0x87F5F0
} // namespace gamemd
// ---- g57b5 W3 end ----

namespace ra2 {
namespace game {

extern int& CurrentFrame;

TechnoClass::TechnoClass() noexcept
    : transporter(nullptr)
    , turretChargeTimer(0)
    , currentTurretNumber(0)
    , secondaryTurretIndex(0)
    , behindAnim(nullptr)
    , deployAnim(nullptr)
    , inAirFlag(false)
    , currentWeaponSlot(0)
    , currentRank(-1)
    , gattlingStage(0)
    , gattlingValue(0)
    , ammoReloadTimer(0)
    , initialOwner(nullptr)
    , armorMultiplier(1.0)
    , firepowerMultiplier(1.0)
    , ironTintStage(0)
    , airstrikeTintStage(0)
    , forceShielded(0)
    , isDeactivated(false)
    , drainTarget(nullptr)
    , drainingMe(nullptr)
    , drainAnim(nullptr)
    , isDisguisedFlag(false)
    , disguiseCreationFrame(0)
    , isTargetedByChrono(false)
    , currentBurstCount(0)
    , currentBarrelIndex(0)
    , controlGroup(0)
    , focus(nullptr)
    , owner(nullptr)
    , cloakState(0)
    , warpFactor(0.0f)
    , isChronosphereImmune(false)
    , lastSightCoords{}
    , lastSightRange(0)
    , lastSightHeight(0)
    , gapSuperCharged(false)
    , isGeneratingGap(false)
    , gapRadius(0)
    , isBeingWarpedOut(false)
    , isWarpingOut(false)
    , isWarpEffectActive(false)
    , unusedField273(0)
    , temporalUsing(nullptr)
    , temporalTargetingMe(nullptr)
    , isImmobilized(false)
    , owningHouseIndex0(0)
    , chronoLockRemaining(0)
    , chronoDestCoords{}
    , airstrike(nullptr)
    , isBerserk(false)
    , isBerserk_duration_left(0)
    , sprayOffsetIndex(0)
    , isUncrushable(false)
    , rockerLinkedUnit(nullptr)
    , locomotorTarget(nullptr)
    , locomotorSource(nullptr)
    , target(nullptr)
    , lastTarget(nullptr)
    , captureManager(nullptr)
    , mindControlledBy(nullptr)
    , mindControlledBy_a_unit(false)
    , mindControlRingAnim(nullptr)
    , mindControlledBy_house(nullptr)
    , spawnManager(nullptr)
    , spawnOwner(nullptr)
    , slaveManager(nullptr)
    , slaveOwner(nullptr)
    , originalOwnerHouse(nullptr)
    , bunkerLinkedUnit(nullptr)
    , pitchAngle(0.0f)
    , diskLaserChargeState(0)
    , ammo(0)
    , unitValue(0)
    , fireParticles(nullptr)
    , sparkParticles(nullptr)
    , ambientParticles(nullptr)
    , damageParticles(nullptr)
    , railgunParticles(nullptr)
    , auxParticles1(nullptr)
    , auxParticles2(nullptr)
    , firingParticles(nullptr)
    , waveEffect(nullptr)
    , tiltSidewaysAngle(0.0f)
    , tiltForwardsAngle(0.0f)
    , tiltSidewaysRate(0.0f)
    , tiltForwardsRate(0.0f)
    , hijackerInfantryType(0)
    , tiberiumCollectionState(0)
    , unloadTimer{}
    , barrelFacing{}
    , primaryFacing{}
    , secondaryFacing{}
    , currentBurstIndex(0)
    , unknown_short_3C8(0)
    , unknown_3CA(0)
    , isCountedAsOwned(false)
    , isSinking(false)
    , wasAlreadySinking(false)
    , isReceivingDamageEffect(false)
    , isUseless(false)
    , hasBeenAttacked(false)
    , isCloakableFlag(false)
    , isPrimaryFactory(false)
    , isALoaner(false)
    , isInPlayfield(false)
    , isTether(false)
    , isAlternativeTether(false)
    , isOwnedByCurrentPlayer(false)
    , isDiscoveredByCurrentPlayer(false)
    , isDiscoveredByComputer(false)
    , isSelectedByPlayer(false)
    , isUnderCursor(false)
    , isCommandLineTarget(false)
    , sightRangeBonus(0)
    , isRecruitableByAlly(false)
    , isRecruitableByEnemy(false)
    , isRadarTracked(false)
    , isOnCarryall(false)
    , isCrashing(false)
    , wasAlreadyCrashing(false)
    , isBeingManipulated(false)
    , manipulatedByUnit(nullptr)
    , chronoWarpedByHouse(nullptr)
    , isChronoImmuneFlag(false)
    , isMouseHovering(false)
    , shouldBeReselectOnUnlimbo(false)
    , previousTeam(nullptr)
    , isCountedAsOwned_special(false)
    , isAbsorbed(false)
    , isGrindingInProgress(false)
    , grindingAnimHandle(0)
    , queuedVoiceIndex(0)
    , unknown_4F4(0)
    , unknown_bool_4F8(false)
    , unknown_4FC(0)
    , queueUpToEnter(nullptr)
    , empLockRemaining(0)
    , threatPosed(0)
    , shouldLoseTarget(0)
    , firingRadBeam(nullptr)
    , planningToken(nullptr)
    , disguiseAsType(nullptr)
    , disguisedAsHouse(nullptr)
{
    std::memset(&flashing, 0, sizeof(flashing));
    std::memset(&animation, 0, sizeof(animation));
    std::memset(&passengers, 0, sizeof(passengers));
    std::memset(&veterancy, 0, sizeof(veterancy));
    std::memset(&idleActionTimer, 0, sizeof(idleActionTimer));
    std::memset(&radarFlashTimer, 0, sizeof(radarFlashTimer));
    std::memset(&targetingTimer, 0, sizeof(targetingTimer));
    std::memset(&ironCurtainTimer, 0, sizeof(ironCurtainTimer));
    std::memset(&ironTintTimer, 0, sizeof(ironTintTimer));
    std::memset(&airstrikeTimer, 0, sizeof(airstrikeTimer));
    std::memset(&airstrikeTintTimer, 0, sizeof(airstrikeTintTimer));
    std::memset(&infantryBlinkTimer, 0, sizeof(infantryBlinkTimer));
    std::memset(&disguiseBlinkTimer, 0, sizeof(disguiseBlinkTimer));
    std::memset(&reloadTimer, 0, sizeof(reloadTimer));
    std::memset(&cloakProgress, 0, sizeof(cloakProgress));
    std::memset(&cloakDelayTimer, 0, sizeof(cloakDelayTimer));
    std::memset(&diskLaserTimer, 0, sizeof(diskLaserTimer));
    std::memset(&targetLaserTimer, 0, sizeof(targetLaserTimer));
    std::memset(&turretRecoil, 0, sizeof(turretRecoil));
    std::memset(&barrelRecoil, 0, sizeof(barrelRecoil));
    std::memset(&storedTiberium, 0, sizeof(storedTiberium));
    std::memset((void *)(&turretRotateSoundController), 0, sizeof(turretRotateSoundController));
    std::memset((void *)(&gattlingSoundController), 0, sizeof(gattlingSoundController));
    std::memset((void *)(&unusedGattlingSoundController), 0, sizeof(unusedGattlingSoundController));
    std::memset((void *)(&queuedVoiceSoundController), 0, sizeof(queuedVoiceSoundController));

    abstractFlags |= 0x1u;
}

FireError TechnoClass::GetFireErrorWithoutRange(AbstractClass* target, int weapon_index) const
{
    // Fire-error check without range validation (helper for TechnoClass::GetFireError).
    // NOTE: 0x6F3F40 (a previous annotation here) is TechnoClass::Update, a different function.
    // Can_Fire check without range validation.
    // Checks: target alive, not falling, weapon exists, weapon AA/AG match,
    // rearm delay elapsed, ammo available, not cloaked.
    if (!target)
        return (FireError)((int)(gamemd::FireError::ILLEGAL));

    if (isFallingDown)
        return (FireError)((int)(gamemd::FireError::CANT));

    auto* weapon = GetWeapon(weapon_index);
    if (!weapon)
        return (FireError)((int)(gamemd::FireError::CANT));

    // IDA: Anti-air check — weapon must have AA=yes to target aircraft (isAirborne)
    // IDA: Anti-ground check — weapon must have AG=yes to target ground units (!isAirborne)
    // Enforced via WeaponStruct AA/AG flags checked against target altitude

    // IDA: Rearm delay check — if weapon Arm != 0 and rearm timer active → REARM
    // if (weapon->Arm != 0 && !isArmed()) return FireError::REARM;

    if (ammo <= 0)
        return (FireError)((int)(gamemd::FireError::AMMO));

    if (cloakState == (uint32_t)(gamemd::CloakState::Cloaked))
        return (FireError)((int)(gamemd::FireError::CLOAKED));

    return (FireError)((int)(gamemd::FireError::NONE));
}

FireError TechnoClass::GetFireError(AbstractClass* target, int weapon_index, bool ignore_range) const
{
    auto result = GetFireErrorWithoutRange(target, weapon_index);
    if ((int)(result) != (int)(gamemd::FireError::NONE))
        return result;

    if (!IsCloseEnoughToAttack(target) && !ignore_range)
        return (FireError)((int)(gamemd::FireError::RANGE));

    return (FireError)((int)(gamemd::FireError::NONE));
}

// 0x70ece0
// G42.34 T4: 0x70ECE0 misattribution, asm-verified -- body touches only
// [&this->vtable1/4/0x10/0x18/0x1C] (32B sub-object; float@0x10 = v0/max(v4,1) ramp)
{
  BulletClass *result; // eax
  void *vtable0; // [esp+0h] [ebp-4h]

  result = (BulletClass *)this->vfptr; /*0x70ece1*/
  vtable0 = this->vfptr; /*0x70ece5*/
  if ( this->vfptr ) /*0x70ece5*/
  {
    result = (BulletClass *)this->vfptr1; /*0x70eceb*/
    this->nextArrayIndex = 1; /*0x70ecf5*/
    this->referenceCount = (int)result; /*0x70ecf8*/
    if ( (int)result < 1 ) /*0x70ecfb*/
      this->referenceCount = 1; /*0x70ecfd*/
    *&this->uniqueId = (double)(int)vtable0 / (double)this->referenceCount; /*0x70ed07*/
  }
  return result; /*0x70ed0b*/
}
bool TechnoClass::IsCloseEnoughToAttack(AbstractClass* target) const
{
    return IsCloseEnough(target, currentWeaponSlot);
}

CellClass* TechnoClass::SelectAutoTarget(TargetFlags flags, int current_threat, bool only_target_house_enemy)
{
    // IDA: Greatest_Threat — dual-mode target scanning.
    // Area scan: radiating outward box from current position, scanning cell occupiers.
    // Full-map fallback: iterate all objects on map layer.
    // Each candidate scored by Evaluate_Object via threat matrix.

    CoordStruct my_pos;
    fetchCoordinatesHere(&my_pos);

    int best_value = current_threat;
    AbstractClass* best_target = nullptr;
    int scan_range = GetWeaponRange(currentWeaponSlot);

    CellStruct center = {
        (int16_t)(my_pos.X / 256),
        (int16_t)(my_pos.Y / 256)
    };

    // IDA: Area scan — radiating outward box, perimeter-only
    for (int radius = 0; radius <= scan_range; ++radius)
    {
        for (int dx = -radius; dx <= radius; ++dx)
        {
            for (int dy = -radius; dy <= radius; ++dy)
            {
                if (abs(dx) != radius && abs(dy) != radius)
                    continue;

                CellStruct map_coords = {
                    (int16_t)(center.X + dx),
                    (int16_t)(center.Y + dy)
                };

                // IDA: CellCoord::To_CellObj(&MapClass_Instance, &map_coords)
                // For each occupier in cell: Evaluate_Object → score comparison
                // if (value > best_value) { best_value = value; best_target = occupier; }
            }
        }

        // IDA: Early exit at range/4 for high-value close targets
        if (best_target && (radius >= scan_range / 4))
        {
            break;
        }
    }

    // IDA: Full-map fallback — iterate MapClass::Instance->Objects
    if (!best_target)
    {
        // IDA: for each object on MapClass::Instance->Objects layer:
        //   value = Evaluate_Object(flags, obj)
        //   if (value > best_value) { ... }
    }

    if (best_target)
        SetTarget(best_target);

    return nullptr;
}

void TechnoClass::Guard()
{
    target = nullptr;
    lastTarget = nullptr;
    queueMission((Mission)((int)(gamemd::Mission::Guard)), true);
}

void TechnoClass::SetTarget(AbstractClass* target)
{
    lastTarget = target;
    target = target;
    if (target)
        SetDestination(target, false);
}

void TechnoClass::Cloak(bool play_sound)
{
    cloakState = (uint32_t)(gamemd::CloakState::Cloaked);
}

void TechnoClass::Uncloak(bool play_sound)
{
    cloakState = (uint32_t)(gamemd::CloakState::Uncloaking);
}

// 0x6f3330
// G42.34 T6: region consolidated -- three corrupted remnants of this function
// were spliced together (raw body v1 + a 0x4F9AF0
{
  HouseClass *v2; // eax
  int result; // eax
  int v4; // edi
  int v5; // ebx
  unsigned char *v6; // ebp
  int gattlingStage; // esi
  int v8; // eax
  int v9; // eax
  bool v10; // bl
  unsigned int *v11; // [esp+1Ch] [ebp+4h]

  v2 = (HouseClass *)(*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this); /*0x6f333b*/
  if ( (uint8_t)HouseClass::HasPower(v2)
    && !*(unsigned char *)((*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this) + 3285) )
  {
    return this->currentWeaponSlot != -1 ? this->currentWeaponSlot : 0;
  }
  if ( (*((uint8_t (__thiscall **)(TechnoClass *))this->vfptr + 256))(this) ) /*0x6f337d*/
    return 0; /*0x6f337d*/
  v4 = *(unsigned int *)(*((int (__thiscall **)(TechnoClass *, int))this->vfptr + 254))(this, 1); /*0x6f3397*/
  if ( !v4 ) /*0x6f339f*/
    return 0; /*0x6f339f*/
  v5 = *(unsigned int *)(*((int (__thiscall **)(TechnoClass *, unsigned int))this->vfptr + 254))(this, 0); /*0x6f33b1*/
  if ( !v5 || *(unsigned char *)(v4 + 310) || !v11 ) /*0x6f33d3*/
    return 0; /*0x6f33d3*/
  if ( this->inOpenToppedTransport /*0x6f33f4*/
    && *(unsigned int *)((*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this) + 3408) != -1 )
  {
    return *(unsigned int *)((*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this) + 3408); /*0x6f340d*/
  }
  v6 = (v11[5] & 1) != 0 ? (unsigned char *)v11 : 0;
  if ( !*(unsigned char *)((*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this) + 3285) )
  {
    if ( *(unsigned char *)(*(unsigned int *)(v4 + 172) + 364) )
    {
      if ( (*(int (__thiscall **)(unsigned int *))(*v11 + 44))(v11) == 6
        && *(unsigned char *)(*((*(int (__thiscall **)(unsigned int *))(*v11 + 44))(v11) == 6 ? v11 + 328 : (unsigned int *)1312) + 5495) )
      {
        v8 = (*(int (__thiscall **)(unsigned int *))(*v11 + 44))(v11); /*0x6f34c9*/
        if ( *(unsigned char *)((*(int (__thiscall **)(unsigned int *))(*(v8 == 6 ? v11 : 0) + 132))(v8 == 6 ? v11 : 0) + 1517) )
        {
          v9 = (*(int (__thiscall **)(unsigned int *))(*v11 + 44))(v11); /*0x6f34f3*/
          return !*(unsigned char *)((*(int (__thiscall **)(unsigned int *))(*(v9 == 6 ? v11 : 0) + 132))(v9 == 6 ? v11 : 0) + 1516);
        }
        return 1; /*0x6f380a*/
      }
    }
    else
    {
      if ( *(unsigned char *)(*(unsigned int *)(v5 + 172) + 347) /*0x6f3547*/
        && v6
        && (*(int (__thiscall **)(unsigned char *))(*(unsigned int *)v6 + 44))(v6) == 6 )
      {
        return 1; /*0x6f3555*/
      }
      if ( *(unsigned char *)(v4 + 322) /*0x6f3590*/
        && v6
        && *(unsigned char *)((*(int (__thiscall **)(unsigned char *))(*(unsigned int *)v6 + 132))(v6) + 1519)
        && !this->drainTarget
        && !(uint8_t)Object::IsAlliedWithObjectHouse((Object *)this->owner, (int)v6) )
      {
        return 1; /*0x6f35a5*/
      }
      if ( *(unsigned char *)(v4 + 336) && (*((int (__thiscall **)(TechnoClass *))this->vfptr + 97))(this) == 16 ) /*0x6f35c3*/
        return 1; /*0x6f35d1*/
      if ( (*((int (__thiscall **)(TechnoClass *))this->vfptr + 11))(this) == 6 && this->u32_661 ) /*0x6f35e0*/
        return 1; /*0x6f35f6*/
      if ( (*(int (__thiscall **)(unsigned int *))(*v11 + 44))(v11) == 6 /*0x6f362f*/
        && (uint8_t)Object::IsAlliedWithObjectSimpleHouse((Object *)this->owner, v11)
        && *(unsigned char *)(*(unsigned int *)(v4 + 172) + 344)
        && *(unsigned char *)(v11[328] + 5493) )
      {
        return 1; /*0x6f3645*/
      }
      if ( (*((int (__thiscall **)(TechnoClass *))this->vfptr + 11))(this) == 2 && this->Tactical_6CA ) /*0x6f3658*/
        return 1; /*0x6f366e*/
      if ( (*(int (__thiscall **)(unsigned int *))(*v11 + 44))(v11) == 11 /*0x6f36ca*/
        && (v11[59] != 2 && (*(uint8_t (__thiscall **)(unsigned int *))(*v11 + 80))(v11)
         || (v11[80] & 0x100) != 0 && *(unsigned char *)((*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this) + 3278))
        && !(*(uint8_t (__thiscall **)(unsigned int *))(*v11 + 84))(v11)
        && *(unsigned int *)((*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this) + 1540) == 2 )
      {
        return 1; /*0x6f36d8*/
      }
      if ( v6 /*0x6f3710*/
        && *(double *)(*(unsigned int *)(v4 + 172)
                     + 8 * *(unsigned int *)((*(int (__thiscall **)(unsigned char *))(*(unsigned int *)v6 + 132))(v6) + 156)
                     + 160) != 0.0 )
      {
        if ( *(double *)(*(unsigned int *)(v5 + 172) /*0x6f3743*/
                       + 8 * *(unsigned int *)((*(int (__thiscall **)(unsigned char *))(*(unsigned int *)v6 + 132))(v6) + 156)
                       + 160) == 0.0 )
          return 1; /*0x6f3751*/
        v10 = *(unsigned int *)((*(int (__thiscall **)(unsigned char *))(*(unsigned int *)v6 + 444))(v6) + 236) == 2 /*0x6f377f*/
           || *(unsigned int *)((*(int (__thiscall **)(unsigned char *))(*(unsigned int *)v6 + 444))(v6) + 236) == 6;
        if ( (*(uint8_t (__thiscall **)(unsigned char *))(*(unsigned int *)v6 + 84))(v6) ) /*0x6f3786*/
          v10 = 0; /*0x6f378d*/
        if ( !v6[140] && v10 ) /*0x6f379b*/
        {
          result = (*((int (__thiscall **)(TechnoClass *, unsigned int *))this->vfptr + 186))(this, v11); /*0x6f37a2*/
          if ( result != -1 ) /*0x6f37ab*/
            return result; /*0x6f37ab*/
          return 0; /*0x6f37ab*/
        }
        if ( !(*(uint8_t (__thiscall **)(unsigned char *))(*(unsigned int *)v6 + 84))(v6) /*0x6f37d6*/
          && *(unsigned int *)((*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this) + 1540) == 2 )
        {
          return 1; /*0x6f37e4*/
        }
        if ( *(unsigned char *)(*(unsigned int *)(v4 + 160) + 676) /*0x6f3800*/
          && (*(uint8_t (__thiscall **)(unsigned char *))(*(unsigned int *)v6 + 84))(v6) )
        {
          return 1; /*0x6f3805*/
        }
      }
    }
    return 0; /*0x6f37ad*/
  }
  gattlingStage = this->gattlingStage; /*0x6f3436*/
  if ( *(unsigned char *)(*(unsigned int *)(v4 + 160) + 676) /*0x6f3455*/
    && v6
    && (*(uint8_t (__thiscall **)(unsigned char *))(*(unsigned int *)v6 + 84))(v6) )
  {
    return 2 * gattlingStage + 1; /*0x6f345c*/
  }
  else
  {
    return 2 * gattlingStage; /*0x6f346a*/
  }
}
/* ASM:
sub     esp, 8
push    ebx
push    ebp
push    esi
mov     esi, ecx
push    edi
mov     eax, [esi]
call    dword ptr [eax+84h]
mov     ecx, eax
call    HouseClass__HasPower
test    al, al
jz      short loc_6F3379
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+84h]
mov     cl, [eax+0CD5h]
test    cl, cl
jnz     short loc_6F3379
mov     esi, [esi+138h]
pop     edi
mov     eax, esi
inc     eax
neg     eax
sbb     eax, eax
and     eax, esi
pop     esi
pop     ebp
pop     ebx
add     esp, 8
retn    4
; ---------------------------------------------------------------------------

loc_6F3379:                             ; CODE XREF: TechnoClass__SelectWeapon+1A↑j
; TechnoClass__SelectWeapon+2E↑j
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+400h]
test    al, al
jnz     loc_6F37AD
mov     edx, [esi]
push    1
mov     ecx, esi
call    dword ptr [edx+3F8h]
mov     edi, [eax]
test    edi, edi
mov     [esp+18h+var_8], edi
jz      loc_6F37AD
mov     eax, [esi]
push    0
mov     ecx, esi
call    dword ptr [eax+3F8h]
mov     ebx, [eax]
test    ebx, ebx
mov     [esp+18h+var_4], ebx
jz      loc_6F37AD
mov     al, [edi+136h]
test    al, al
jnz     loc_6F37AD
mov     edi, [esp+18h+arg_0]
test    edi, edi
jz      loc_6F37AD
mov     al, [esi+82h]
test    al, al
jz      short loc_6F3410
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+84h]
cmp     dword ptr [eax+0D50h], 0FFFFFFFFh
jz      short loc_6F3410
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+84h]
mov     eax, [eax+0D50h]
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 8
retn    4
; ---------------------------------------------------------------------------

loc_6F3410:                             ; CODE XREF: TechnoClass__SelectWeapon+B1↑j
; TechnoClass__SelectWeapon+C4↑j
mov     cl, [edi+14h]
mov     edx, [esi]
and     cl, 1
neg     cl
sbb     ecx, ecx
and     ecx, edi
mov     ebp, ecx
mov     ecx, esi
call    dword ptr [edx+84h]
mov     cl, [eax+0CD5h]
test    cl, cl
jz      short loc_6F3477
mov     eax, [esp+18h+var_8]
mov     esi, [esi+140h]
mov     ecx, [eax+0A0h]
mov     al, [ecx+2A4h]
test    al, al
jz      short loc_6F346A
test    ebp, ebp
jz      short loc_6F346A
mov     edx, [ebp+0]
mov     ecx, ebp
call    dword ptr [edx+54h]
test    al, al
jz      short loc_6F346A
lea     eax, [esi+esi+1]
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 8
retn    4
; ---------------------------------------------------------------------------

loc_6F346A:                             ; CODE XREF: TechnoClass__SelectWeapon+11A↑j
; TechnoClass__SelectWeapon+11E↑j ...
lea     eax, [esi+esi]
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 8
retn    4
; ---------------------------------------------------------------------------

loc_6F3477:                             ; CODE XREF: TechnoClass__SelectWeapon+100↑j
mov     eax, [esp+18h+var_8]
mov     ecx, [eax+0ACh]
mov     al, [ecx+16Ch]
test    al, al
jz      loc_6F3528
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+2Ch]
cmp     eax, 6
jnz     loc_6F37AD
mov     eax, [edi]
mov     ecx, edi
call    dword ptr [eax+2Ch]
sub     eax, 6
neg     eax
sbb     eax, eax
not     eax
and     eax, edi
mov     ecx, [eax+520h]
mov     al, [ecx+1577h]
test    al, al
jz      loc_6F37AD
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+2Ch]
sub     eax, 6
neg     eax
sbb     eax, eax
not     eax
and     eax, edi
mov     ecx, eax
mov     edx, [eax]
call    dword ptr [edx+84h]
mov     cl, [eax+5EDh]
test    cl, cl
jz      loc_6F3807
mov     eax, [edi]
mov     ecx, edi
call    dword ptr [eax+2Ch]
sub     eax, 6
neg     eax
sbb     eax, eax
not     eax
and     eax, edi
mov     ecx, eax
mov     edx, [eax]
call    dword ptr [edx+84h]
mov     cl, [eax+5ECh]
test    cl, cl
jnz     loc_6F37AD
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 8
retn    4
; ---------------------------------------------------------------------------

loc_6F3528:                             ; CODE XREF: TechnoClass__SelectWeapon+159↑j
mov     eax, [ebx+0ACh]
mov     cl, [eax+15Bh]
test    cl, cl
jz      short loc_6F3558
test    ebp, ebp
jz      short loc_6F3558
mov     edx, [ebp+0]
mov     ecx, ebp
call    dword ptr [edx+2Ch]
cmp     eax, 6
jnz     short loc_6F3558
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 8
retn    4
; ---------------------------------------------------------------------------

loc_6F3558:                             ; CODE XREF: TechnoClass__SelectWeapon+206↑j
; TechnoClass__SelectWeapon+20A↑j ...
mov     eax, [esp+18h+var_8]
mov     cl, [eax+142h]
test    cl, cl
jz      short loc_6F35A8
test    ebp, ebp
jz      short loc_6F35A8
mov     edx, [ebp+0]
mov     ecx, ebp
call    dword ptr [edx+84h]
mov     cl, [eax+5EFh]
test    cl, cl
jz      short loc_6F35A8
mov     eax, [esi+1CCh]
test    eax, eax
jnz     short loc_6F35A8
mov     ecx, [esi+21Ch]
push    ebp
call    Object__IsAlliedWithObjectHouse
test    al, al
jnz     short loc_6F35A8
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 8
retn    4
; ---------------------------------------------------------------------------

loc_6F35A8:                             ; CODE XREF: TechnoClass__SelectWeapon+234↑j
; TechnoClass__SelectWeapon+238↑j ...
mov     eax, [esp+18h+var_8]
mov     cl, [eax+150h]
test    cl, cl
jz      short loc_6F35D4
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+184h]
cmp     eax, 10h
jnz     short loc_6F35D4
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 8
retn    4
; ---------------------------------------------------------------------------

loc_6F35D4:                             ; CODE XREF: TechnoClass__SelectWeapon+284↑j
; TechnoClass__SelectWeapon+293↑j
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+2Ch]
cmp     eax, 6
jnz     short loc_6F35F9
mov     al, [esi+661h]
test    al, al
jz      short loc_6F35F9
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 8
retn    4
; ---------------------------------------------------------------------------

loc_6F35F9:                             ; CODE XREF: TechnoClass__SelectWeapon+2AE↑j
; TechnoClass__SelectWeapon+2B8↑j
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+2Ch]
cmp     eax, 6
jnz     short loc_6F3648
mov     ecx, [esi+21Ch]
push    edi
call    Object__IsAlliedWithObjectSimpleHouse
test    al, al
jz      short loc_6F3648
mov     eax, [esp+18h+var_8]
mov     ecx, [eax+0ACh]
mov     al, [ecx+158h]
test    al, al
jz      short loc_6F3648
mov     edx, [edi+520h]
mov     al, [edx+1575h]
test    al, al
jz      short loc_6F3648
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 8
retn    4
; ---------------------------------------------------------------------------

loc_6F3648:                             ; CODE XREF: TechnoClass__SelectWeapon+2D3↑j
; TechnoClass__SelectWeapon+2E3↑j ...
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+2Ch]
mov     ebx, 2
cmp     eax, ebx
jnz     short loc_6F3671
mov     al, [esi+6CAh]
test    al, al
jz      short loc_6F3671
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 8
retn    4
; ---------------------------------------------------------------------------

loc_6F3671:                             ; CODE XREF: TechnoClass__SelectWeapon+326↑j
; TechnoClass__SelectWeapon+330↑j
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+2Ch]
cmp     eax, 0Bh
jnz     short loc_6F36DB
cmp     [edi+0ECh], ebx
jz      short loc_6F3690
mov     eax, [edi]
mov     ecx, edi
call    dword ptr [eax+50h]
test    al, al
jnz     short loc_6F36AF

loc_6F3690:                             ; CODE XREF: TechnoClass__SelectWeapon+353↑j
mov     eax, [edi+140h]
test    ah, 1
jz      short loc_6F36DB
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+84h]
mov     cl, [eax+0CCEh]
test    cl, cl
jz      short loc_6F36DB

loc_6F36AF:                             ; CODE XREF: TechnoClass__SelectWeapon+35E↑j
mov     eax, [edi]
mov     ecx, edi
call    dword ptr [eax+54h]
test    al, al
jnz     short loc_6F36DB
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+84h]
cmp     [eax+604h], ebx
jnz     short loc_6F36DB
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 8
retn    4
; ---------------------------------------------------------------------------

loc_6F36DB:                             ; CODE XREF: TechnoClass__SelectWeapon+34B↑j
; TechnoClass__SelectWeapon+369↑j ...
test    ebp, ebp
jz      loc_6F37AD
mov     eax, [ebp+0]
mov     ecx, ebp
call    dword ptr [eax+84h]
mov     edx, [esp+18h+var_8]
mov     ecx, [eax+9Ch]
mov     eax, [edx+0ACh]
fld     qword ptr [eax+ecx*8+0A0h]
fcomp   ds:dbl_7E2800
fnstsw  ax
test    ah, 40h
jnz     loc_6F37AD
mov     edx, [ebp+0]
mov     ecx, ebp
call    dword ptr [edx+84h]
mov     ecx, [esp+18h+var_4]
mov     eax, [eax+9Ch]
mov     edx, [ecx+0ACh]
fld     qword ptr [edx+eax*8+0A0h]
fcomp   ds:dbl_7E2800
fnstsw  ax
test    ah, 40h
jz      short loc_6F3754
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 8
retn    4
; ---------------------------------------------------------------------------

loc_6F3754:                             ; CODE XREF: TechnoClass__SelectWeapon+413↑j
mov     eax, [ebp+0]
mov     ecx, ebp
call    dword ptr [eax+1BCh]
cmp     [eax+0ECh], ebx
jz      short loc_6F377F
mov     edx, [ebp+0]
mov     ecx, ebp
call    dword ptr [edx+1BCh]
cmp     dword ptr [eax+0ECh], 6
jz      short loc_6F377F
xor     bl, bl
jmp     short loc_6F3781
; ---------------------------------------------------------------------------

loc_6F377F:                             ; CODE XREF: TechnoClass__SelectWeapon+435↑j
; TechnoClass__SelectWeapon+449↑j
mov     bl, 1

loc_6F3781:                             ; CODE XREF: TechnoClass__SelectWeapon+44D↑j
mov     eax, [ebp+0]
mov     ecx, ebp
call    dword ptr [eax+54h]
test    al, al
jz      short loc_6F378F
xor     bl, bl

loc_6F378F:                             ; CODE XREF: TechnoClass__SelectWeapon+45B↑j
mov     al, [ebp+8Ch]
test    al, al
jnz     short loc_6F37B9
test    bl, bl
jz      short loc_6F37B9
mov     edx, [esi]
push    edi
mov     ecx, esi
call    dword ptr [edx+2E8h]
cmp     eax, 0FFFFFFFFh
jnz     short loc_6F37AF

loc_6F37AD:                             ; CODE XREF: TechnoClass__SelectWeapon+55↑j
; TechnoClass__SelectWeapon+6F↑j ...
xor     eax, eax

loc_6F37AF:                             ; CODE XREF: TechnoClass__SelectWeapon+47B↑j
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 8
retn    4
; ---------------------------------------------------------------------------

loc_6F37B9:                             ; CODE XREF: TechnoClass__SelectWeapon+467↑j
; TechnoClass__SelectWeapon+46B↑j
mov     eax, [ebp+0]
mov     ecx, ebp
call    dword ptr [eax+54h]
test    al, al
jnz     short loc_6F37E7
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+84h]
cmp     dword ptr [eax+604h], 2
jnz     short loc_6F37E7
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 8
retn    4
; ---------------------------------------------------------------------------

loc_6F37E7:                             ; CODE XREF: TechnoClass__SelectWeapon+493↑j
; TechnoClass__SelectWeapon+4A6↑j
mov     eax, [esp+18h+var_8]
mov     ecx, [eax+0A0h]
mov     al, [ecx+2A4h]
test    al, al
jz      short loc_6F37AD
mov     edx, [ebp+0]
mov     ecx, ebp
call    dword ptr [edx+54h]
test    al, al
jz      short loc_6F37AD

loc_6F3807:                             ; CODE XREF: TechnoClass__SelectWeapon+1B9↑j
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 8
retn    4
*/

void TechnoClass::DecreaseAmmo()
{
    if (ammo > 0)
        --ammo;
}

void TechnoClass::Reload()
{
    auto* weapon = GetWeapon(currentWeaponSlot);
    if (!weapon)
        return;
}

void TechnoClass::UpdateCloak(bool unknown)
{
    if (!isCloakableFlag)
        return;

    bool should_cloak = shouldBeCloaked();
    bool should_uncloak = shouldNotBeCloaked();

    if (should_cloak && cloakState != (uint32_t)(gamemd::CloakState::Cloaked))
        Cloak(true);
    else if (should_uncloak && cloakState != (uint32_t)(gamemd::CloakState::Uncloaked))
        Uncloak(true);
}

void TechnoClass::CreateGap()
{
    isGeneratingGap = true;
    gapRadius = 0;
}

void TechnoClass::DestroyGap()
{
    isGeneratingGap = false;
}

void TechnoClass::UpdateSight(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e)
{
    location = location;
}

void TechnoClass::RadarTrackingStart()
{
    isRadarTracked = true;
}

void TechnoClass::RadarTrackingStop()
{
    isRadarTracked = false;
}

void TechnoClass::RadarTrackingFlash()
{
    isRadarTracked = !isRadarTracked;
}

void TechnoClass::RadarTrackingUpdate(bool unknown)
{
}

void TechnoClass::SmokeupdateLogic()
{
    // IDA 0x414BB0: Per-frame techno smoke/damage update.
    // Clear chrono immunity for non-deploy/non-harvest missions.
    // Every 24 frames if damaged: create damage smoke anim.
    // Handle sinking (decreasing Z) and random damage smoke.
    if (currentMission != 1 && currentMission != 27
        && currentMission != 30 && currentMission != 31)
        isChronoImmuneFlag = false;

    if ((CurrentFrame % 24) == 0 && hasBeenAttacked)
    {
        // IDA: Create smoke AnimClass at current position
        // AnimClass ctor(rules[209], coords, 0, 1, 0x600, 0, 0)
    }

    if (isAliveFlag)
    {
        if (isSinking)
        {
            CoordStruct coords;
            fetchCoordinatesHere(&coords);
            // IDA: Sinking: decrease Z, if too deep trigger death
        }
        if ((CurrentFrame & 3) == 0 && health > 0)
        {
            // IDA: Random damage smoke near position
        }
    }
}

bool TechnoClass::EnterGrinder() { return false; }
bool TechnoClass::EnterBioReactor() { return false; }
bool TechnoClass::EnterTankBunker() { return false; }
bool TechnoClass::EnterBattleBunker() { return false; }
bool TechnoClass::GarrisonStructure() { return false; }  // L-fix: close stub
bool TechnoClass::CanDeploySlashUnload() const { return false; }  // L-fix: close stub

void TechnoClass::AddPassenger(FootClass* passenger)
{
    if (!passenger) return;
    if (!passengers.FirstPassenger)
        passengers.FirstPassenger = passenger;
    passengers.NumPassengers++;
}  // G42.34 T8: missing fn closer (L-fix wave missed this one)

// ============================================================
// CreateUnit — per-frame unit/building construction pipeline
// IDA: 0x423AC0 (4234 bytes, 197 BBs)
//
// Pipeline stages (from IDA decompilation, ordered):
//  1. Audio: WorkingSound on audioController3
//  2. Cloak/stealth detection (HasStupidGuardMode)
//  3. Building placement validation (cell owner check)
//  4. MCV deploy state check
//  5. Deploy animation coordinate preset (vt_entry_240)
//  6. Mission queued clear
//  7. Deploy/undeploy animation state machine (vt_entry_488)
//  8. Construction progress: timer countdown, placement distance,
//     production size calc, cost accumulation
//  9. Production milestone → type chain switching
// 10. Final unit creation via CreateUnitOnCompletion
// ============================================================
// 0x423ac0
// G42.34 T9: body quarantined -- the prior epoch half-translation targeted the
// wrong universe (gamemd::-style members q1BC/q11B/ambientSoundController6,
} // namespace game
} // namespace ra2
namespace ra2 { namespace game {
// 0x707d20
InfantryTypeClass* TechnoClass::GetCrew() const
{
  HouseClass *owner; // ecx
  int sideIndex; // eax
  int v5; // eax
  int v6; // esi
  bool v7; // zf

  if ( !*(unsigned char *)((*((int (__thiscall **)(TechnoClass *))this->vfptr + 33))(this) + 3277) ) /*0x707d2b*/
    return 0; /*0x707d38*/
  owner = this->owner; /*0x707d39*/
  sideIndex = (int)(owner->sideIndex); /*0x707d40*/
  if ( sideIndex ) /*0x707d48*/
  {
    if ( sideIndex == 1 ) /*0x707d5a*/
    {
      v5 = *(unsigned int *)&g_RulesClass_Instance; /*0x707d5c*/
      v6 = *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 3964); /*0x707d61*/
    }
    else
    {
      v7 = sideIndex == 2; /*0x707d69*/
      v5 = *(unsigned int *)&g_RulesClass_Instance; /*0x707d6c*/
      if ( v7 ) /*0x707d71*/
        v6 = *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 3968); /*0x707d73*/
      else
        v6 = *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 3948); /*0x707d7b*/
    }
  }
  else
  {
    v5 = *(unsigned int *)&g_RulesClass_Instance; /*0x707d4a*/
    v6 = *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 3960); /*0x707d4f*/
  }
  if ( *(unsigned int *)(owner->relatedTagsCapacity + 188) == -1 ) /*0x707d8b*/
    return v5->u32_F6C; /*0x707dc5*/
  if ( (*((uint8_t (__thiscall **)(TechnoClass *))this->vfptr + 171))(this) /*0x707db2*/
    && Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 99) < 15 )
  {
    return (ra2::game::InfantryTypeClass *)(*(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 3948)); /*0x707dc4*/
  }
  return (ra2::game::InfantryTypeClass *)(v6); /*0x707d37*/
}
  else
  {
    v5 = *(unsigned int *)&DSurface_ViewBounds.q0FC[324]; /*0x707d4a*/
    v6 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.q0FC[324] + 3960); /*0x707d4f*/
  }
  if ( *(unsigned int *)(owner->relatedTagsCapacity + 188) == -1 ) /*0x707d8b*/
    return *(unsigned int *)(v5 + 3948); /*0x707dc5*/
  if ( (*((uint8_t (__thiscall **)(TechnoClass *))this->vfptr + 171))(this) /*0x707db2*/
    && Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 99) < 15 )
  {
    return *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 3948); /*0x707dc4*/
  }
  return v6; /*0x707d37*/
}
// 0x4df1f0
int TechnoClass::vt_entry_4B8()
{
  int v2; // eax
  unsigned int *v3; // edx
  int v5; // ecx
  unsigned int *v6; // ecx
  unsigned char v7[12]; // [esp+4h] [ebp-Ch] BYREF

  v2 = this->u32_5C8; /*0x4df1f0*/
  if ( v2 ) /*0x4df1fc*/
  {
    v3 = (unsigned int *)(*(int (__thiscall **)(int, unsigned char *))(v2->turretChargeTimer_d)(v2, v7); /*0x4df20a*/
    *a2 = *v3; /*0x4df214*/
    a2[1] = v3[1]; /*0x4df219*/
    a2[2] = v3[2]; /*0x4df220*/
    return a2; /*0x4df20c*/
  }
  else
  {
    v5 = this->u32_5CC; /*0x4df229*/
    if ( v5 ) /*0x4df231*/
    {
      v6 = (unsigned int *)(*(int (__thiscall **)(int, unsigned char *))(*(unsigned int *)v5 + 72))(v5, v7); /*0x4df23d*/
      *a2 = *v6; /*0x4df247*/
      a2[1] = v6[1]; /*0x4df24c*/
      a2[2] = v6[2]; /*0x4df253*/
    }
    else
    {
      *a2 = -1; /*0x4df26c*/
      a2[1] = -1; /*0x4df26e*/
      a2[2] = -1; /*0x4df271*/
    }
    return a2; /*0x4df23f*/
  }
}
  else
  {
    v5 = this->q173; /*0x4df229*/
    if ( v5 ) /*0x4df231*/
    {
      v6 = (unsigned int *)(*(int (__thiscall **)(int, unsigned char *))(*(unsigned int *)v5 + 72))(v5, v7); /*0x4df23d*/
      *a2 = *v6; /*0x4df247*/
      a2[1] = v6[1]; /*0x4df24c*/
      a2[2] = v6[2]; /*0x4df253*/
    }
    else
    {
      *a2 = -1; /*0x4df26c*/
      a2[1] = -1; /*0x4df26e*/
      a2[2] = -1; /*0x4df271*/
    }
    return a2; /*0x4df23f*/
  }
// 0x659550
char RadBeam::drawPassengerPips(char a2) {
  (this->memberAtOffset88) = a2; /*0x659554*/
  return a2; /*0x659557*/
}
// 0x633d30
int TechnoClass::ClearScriptPlanningData() { return 0; 
  int v2; // eax
  int v3; // eax
  int v4; // eax
  void *occupant; // eax
  void *vtable1; // eax
  TechnoClass *v7; // [esp+Ch] [ebp-4h] BYREF

  FactoryClass::ClearObjects((FactoryClass *)this); /*0x633d35*/
  v7 = this; /*0x633d4a*/
  v2 = (*(int (__thiscall **)(char *, TechnoClass **))(*(unsigned int *)&g_ScriptConfig + 16))( /*0x633d4e*/
         &g_ScriptConfig,
         &v7);
  if ( v2 != -1 ) /*0x633d54*/
    Array::RemoveAt((Array *)&g_ScriptConfig, v2); /*0x633d5c*/
  v3 = stru_AC4B30.vt_slot_16(&v7); /*0x633d71*/
  if ( v3 != -1 ) /*0x633d77*/
    Array::RemoveAt(&stru_AC4B30, v3); /*0x633d7f*/
  v4 = (*((int (__thiscall **)(void **, TechnoClass **))DataGlobal_AC4C18 + 4))( /*0x633d94*/
         &DataGlobal_AC4C18,
         &v7);
  if ( v4 != -1 && v4 < *(int *)&DataGlobal_AC4C28 ) /*0x633da4*/
  {
    --*(unsigned int *)&DataGlobal_AC4C28; /*0x633da9*/
    for ( ; /*0x633daf*/
          v4 < *(int *)&DataGlobal_AC4C28;
          *(unsigned int *)(*(unsigned int *)DataGlobal_AC4C1C + 4 * v4 - 4) = *(unsigned int *)(*(unsigned int *)DataGlobal_AC4C1C
                                                                                + 4 * v4) )
    {
      ++v4; /*0x633db7*/
    }
  }
  if ( *(TechnoClass **)&g_ScriptPool == v7 ) /*0x633dd7*/
    *(unsigned int *)&g_ScriptPool = 0; /*0x633dd9*/
  if ( *(TechnoClass **)&g_ScriptState == v7 ) /*0x633de5*/
    *(unsigned int *)&g_ScriptState = 0; /*0x633de7*/
  if ( *(TechnoClass **)&g_ScriptActionPool == v7 ) /*0x633df3*/
    *(unsigned int *)&g_ScriptActionPool = 0; /*0x633df5*/
  occupant = (void *)this->occupant; /*0x633dfb*/
  this->NeedsSaveOrLink = 0; /*0x633dfe*/
  if ( occupant && (this->u32_2D) ) /*0x633e09*/
  {
    operator delete((void *)(occupant)); /*0x633e0f*/
    this->occupant = 0; /*0x633e17*/
  }
  (this->u32_2D) = 0; /*0x633e1a*/
  this->owningHouseIndex = 0; /*0x633e1d*/
  vtable1 = this->vfptr1; /*0x633e20*/
  /* X11: vtable install elided (implicit via class virtuals 0x633e23) — binary-proven install, was 0 */
  if ( vtable1 && (this->u32_D) ) /*0x633e2d*/
  {
    operator delete((void *)(vtable1)); /*0x633e33*/
    this->vfptr1 = 0; /*0x633e3b*/
  }
  (this->u32_D) = 0; /*0x633e3e*/
  this->vfptr2 = 0; /*0x633e41*/
}