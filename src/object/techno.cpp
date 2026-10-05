// G42.32 P: tree-universe marker -- e4 tree-owned decls suppressed
#define GAMEMD_TREE_UNIVERSE 1
#include "object/techno.hpp"
#include "object/globals_object.hpp"
#include "object/radbeam.hpp"
#include "structure/building.hpp"
#include "type/building_type.hpp"

#include <cstring>
// G42.34 T1: bridge for HouseClass_e4.hpp bare AbstractClass*
using ra2::game::AbstractClass;
#include "e4/e4_globals_decls.hpp"
#include "e4/classes/HouseClass_e4.hpp"

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
// [this+0/4/0x10/0x18/0x1C] (32B sub-object; float@0x10 = v0/max(v4,1) ramp)
// with zero stack args; sole xrefs are BuildingClass::ProcessSuperWeaponEffects
// (0x44D4B0/0x44D4BB) passing ecx = BuildingClass+0x3D8 / +0x3F8. This is NOT
// the real TechnoClass::Fire(target, weapon). Virtual slot decl keeps the
// signature; real Fire address pending re-attribution (ledger).
BulletClass* TechnoClass::Fire(AbstractClass* target, int weapon_index)
{
    (void)target;
    (void)weapon_index;
    return nullptr;
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
// Object::IsAlliedWithObjectSimpleHouse fragment + an older duplicate body
// with this->fallRate-style vtable-slot-as-member garbage) ahead of the ASM
// quarantine below. Single def restored; ASM quarantine kept verbatim for the
// pending translation.
int TechnoClass::SelectWeapon(AbstractClass* target) const
{
    (void)target;
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
    lastSightCoords = location;
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
// helpers Math::/Coord::/Cell::/StartAudioController that do not exist in the
// tree headers). Full re-translation pending from ida truth; the complete
// disassembly quarantine follows below (kept verbatim). Stage banner above
// documents the pipeline for the next pass.
bool TechnoClass::CreateUnit()
{
    double v1; // st7
    unsigned int *v3; // eax
    unsigned int *v4; // eax
    CellClass *v5; // eax
    Building *v6; // eax
    int AnimClass_field_0x0; // eax
    int v8; // eax
    int *p_AnimClass_field_0x9C; // edi
    int landType; // ebx
    int v11; // ebp
    bool v12; // bl
    bool v13; // al
    AnimClass *v14; // eax
    int v15; // edx
    int v16; // ebp
    int v17; // edi
    AnimClass *v18; // eax
    AnimClass *v19; // eax
    int v20; // edx
    int v21; // ebp
    int v22; // edi
    AnimClass *v23; // edi
    int v24; // eax
    int v25; // eax
    int v26; // eax
    int AnimClass_field_0xC8; // edx
    int v29; // eax
    int v30; // ebp
    unsigned int *Coords; // eax
    int v33; // ebp
    int v34; // eax
    int v35; // ebp
    int *v36; // eax
    int *v37; // eax
    int v38; // eax
    int v39; // eax
    int v40; // edi
    int v41; // eax
    int v42; // edi
    AnimClass *v43; // eax
    int v44; // eax
    int v45; // ebx
    int v46; // ebp
    char v47; // cl
    int v48; // eax
    int v49; // eax
    int v50; // edx
    House *v51; // edi
    Object *v52; // ebx
    int v53; // eax
    int *StartCoords; // edx
    int v55; // eax
    int v56; // ecx
    int v57; // edi
    int v58; // edx
    int v59; // edx
    int v60; // edi
    int v61; // ebx
    int result; // eax
    int v63; // eax
    int v64; // ecx
    AnimClass *v65; // edi
    int *v66; // eax
    unsigned int *v67; // eax
    CellClass *v68; // eax
    int AnimClass_field_0x184; // eax
    int *v70; // eax
    int v71; // ecx
    int v72; // edx
    int v73; // eax
    int v74; // eax
    unsigned int *v75; // ecx
    int v76; // ecx
    int v77; // eax
    int v78; // edx
    int v79; // edx
    int AnimClass_field_0xAC; // ebx
    int AnimClass_field_0xCC; // ecx
    int v87; // eax
    int v88; // ebp
    int v89; // eax
    unsigned int *v91; // eax
    int v92; // eax
    int v93; // ecx
    int v94; // ecx
    char v95; // cl
    int v96; // eax
    int v97; // ecx
    unsigned int *v98; // ecx
    int v99; // ecx
    int v100; // eax
    int v101; // eax
    char v102; // cl
    int v103; // ecx
    int v104; // edx
    char *ProductionTimeMult; // eax
    int *v106; // ebp
    int v107; // edx
    int AnimClass_field_0x180; // eax
    int v109; // edi
    int v110; // eax
    int v111; // ecx
    HouseClass *v112; // edx
    int v113; // ecx
    unsigned char *v114; // edi
    int v115; // edx
    unsigned int *v116; // eax
    unsigned int *v117; // eax
    int v118; // ecx
    int v119; // edx
    int v120; // ebp
    int v121; // eax
    int v122; // eax
    unsigned int *v123; // [esp+8h] [ebp-98h]
    int v124; // [esp+Ch] [ebp-94h]
    int v125; // [esp+Ch] [ebp-94h]
    char v126; // [esp+10h] [ebp-90h]
    double v127; // [esp+10h] [ebp-90h]
    unsigned int *v128; // [esp+18h] [ebp-88h]
    bool v129; // [esp+2Bh] [ebp-75h]
    int i; // [esp+2Ch] [ebp-74h]
    int v131; // [esp+30h] [ebp-70h]
    __int16 v132[4]; // [esp+34h] [ebp-6Ch] BYREF
    __int16 v133[2]; // [esp+3Ch] [ebp-64h] BYREF
    double v134; // [esp+40h] [ebp-60h] BYREF
    int v135; // [esp+48h] [ebp-58h]
    int AnimClass_field_0x9C; // [esp+54h] [ebp-4Ch] BYREF
    int v137; // [esp+58h] [ebp-48h]
    int AnimClass_field_0xA4; // [esp+5Ch] [ebp-44h]
    int v139; // [esp+60h] [ebp-40h]
    int v140; // [esp+64h] [ebp-3Ch]
    int v141; // [esp+6Ch] [ebp-34h]
    int v142; // [esp+78h] [ebp-28h]
    int v143; // [esp+7Ch] [ebp-24h]
    int v144; // [esp+88h] [ebp-18h]
    int v145; // [esp+8Ch] [ebp-14h]
    char v146[16]; // [esp+90h] [ebp-10h] BYREF

    _ESI = this; /*0x423acc*/
    if ( !this->__pad_194[4] && *(unsigned int *)(this->AnimClass_field_0xC8 + 760) != -1 ) /*0x423ae8*/
    {
      v3 = (unsigned int *)(*(int (__thiscall **)(AnimClass *, int *))(this->AnimClass_field_0x0 + 72))( /*0x423af9*/
                       this,
                       &AnimClass_field_0x9C);
      StartAudioController(v3, (AudioSource *)&_ESI->AnimClass_field_0x1A0); /*0x423b00*/
    }
    if ( *(unsigned char *)(_ESI->AnimClass_field_0xC8 + 852) ) /*0x423b0b*/
    {
      ConstructionPositionTracker((TechnoClass *)_ESI); /*0x423b17*/
      ObjectClass::DetectCloaked((TechnoClass *)_ESI); /*0x423b1e*/
    }
    if ( *(unsigned char *)(_ESI->AnimClass_field_0xC8 + 883) ) /*0x423b29*/
    {
      v4 = (unsigned int *)(*(int (__thiscall **)(AnimClass *, int *))(_ESI->AnimClass_field_0x0 + 72))( /*0x423b3c*/
                       _ESI,
                       &AnimClass_field_0x9C);
      v5 = Coord::To_Cell((Coord *)&dword_87F7E8, v4); /*0x423b45*/
      _ESI->__pad_194[9] = Cell::CanPlaceBuilding((void *)_ESI->AnimClass_field_0x180, v5) == 0; /*0x423b5c*/
    }
    if ( _ESI->AnimClass_field_0xC8 == *(unsigned int *)&dword_8871E0->__pad_A0[24] ) /*0x423b74*/
    {
      if ( byte_A8EB7F ) /*0x423b7d*/
        _ESI->__pad_194[9] = 0; /*0x423b88*/
      else
        _ESI->__pad_194[9] = 1; /*0x423b7f*/
    }
    if ( *(unsigned char *)(_ESI->AnimClass_field_0xC8 + 857) ) /*0x423b95*/
    {
      v6 = (Building *)(*(int (__thiscall **)(AnimClass *))(_ESI->AnimClass_field_0x0 + 444))(_ESI); /*0x423ba3*/
      _ESI->__pad_194[9] = !v6 || !Building::GetNthOfType(v6); /*0x423bb8*/
    }
    if ( *(unsigned int *)(_ESI->AnimClass_field_0xC8 + 844) != -1 ) /*0x423bd4*/
    {
      AnimClass_field_0x9C = _ESI->AnimClass_field_0x9C; /*0x423be2*/
      AnimClass_field_0x0 = _ESI->AnimClass_field_0x0; /*0x423be6*/
      v137 = *(unsigned int *)_ESI->__pad_A0; /*0x423beb*/
      AnimClass_field_0xA4 = _ESI->AnimClass_field_0xA4; /*0x423bf9*/
      (*(void (__thiscall **)(AnimClass *, int *))(AnimClass_field_0x0 + 240))(_ESI, &AnimClass_field_0x9C); /*0x423bfd*/
    }
    if ( _ESI->__pad_118[3] && _ESI->AnimClass_field_0x11C == _ESI->AnimClass_field_0xAC ) /*0x423c1b*/
      _ESI->__pad_118[3] = 0; /*0x423c1d*/
    if ( _ESI->__pad_194[0] ) /*0x423c24*/
    {
      v8 = (*(int (__thiscall **)(AnimClass *))(_ESI->AnimClass_field_0x0 + 488))(_ESI); /*0x423c36*/
      if ( v8 == 2 || v8 == 1 ) /*0x423c44*/
      {
        p_AnimClass_field_0x9C = &_ESI->AnimClass_field_0x9C; /*0x423c4a*/
        AnimClass_field_0x9C = _ESI->AnimClass_field_0x9C; /*0x423c54*/
        v137 = *(unsigned int *)_ESI->__pad_A0; /*0x423c60*/
        AnimClass_field_0xA4 = _ESI->AnimClass_field_0xA4; /*0x423c67*/
        landType = Coord::To_Cell((Coord *)&dword_87F7E8, &AnimClass_field_0x9C)->landType; /*0x423c75*/
        AnimClass_field_0x9C = _ESI->AnimClass_field_0x9C; /*0x423c82*/
        v137 = *(unsigned int *)_ESI->__pad_A0; /*0x423c89*/
        v11 = _ESI->AnimClass_field_0xA4; /*0x423c8d*/
        AnimClass_field_0x9C = _ESI->AnimClass_field_0x9C; /*0x423c92*/
        v137 = *(unsigned int *)_ESI->__pad_A0; /*0x423ca3*/
        v12 = landType == 2; /*0x423caa*/
        AnimClass_field_0xA4 = _ESI->AnimClass_field_0xA4; /*0x423cad*/
        v13 = v11 >= (int)(Map_MaxHeight + Cell::GetGroundHeight(&AnimClass_field_0x9C)); /*0x423cbe*/
        v129 = v13; /*0x423cc3*/
        if ( !v12 || v13 ) /*0x423ccf*/
        {
          if ( *(unsigned int *)(_ESI->AnimClass_field_0xC8 + 772) ) /*0x423ded*/
          {
            v134 = *(double *)&_ESI->__pad_120[32]; /*0x423e08*/
            v135 = *(unsigned int *)&_ESI->__pad_120[40]; /*0x423e16*/
            v23 = (AnimClass *)RA2_OPNEW(0x1C8u); /*0x423e1f*/
            if ( v23 ) /*0x423e26*/
            {
              __asm { fld [esp+88h+var_60] } /*0x423e28*/
              IDA_LOWORD(v24) = Math::RoundToInt(v1); /*0x423e2c*/
              __asm { fld [esp+88h+var_5C] } /*0x423e31*/
              AnimClass_field_0x9C = v24; /*0x423e35*/
              IDA_LOWORD(v25) = Math::RoundToInt(v1); /*0x423e39*/
              __asm { fld [esp+88h+var_58] } /*0x423e3e*/
              v137 = v25; /*0x423e42*/
              IDA_LOWORD(v26) = Math::RoundToInt(v1); /*0x423e46*/
              AnimClass_field_0xC8 = _ESI->AnimClass_field_0xC8; /*0x423e4b*/
              AnimClass_field_0xA4 = v26; /*0x423e5a*/
              AnimClass::ctor( /*0x423e70*/
                v23,
                *(void **)(AnimClass_field_0xC8 + 772),
                &AnimClass_field_0x9C,
                0,
                1,
                (void *)0x2600,
                (void *)0xFFFFFFE2,
                0);
            }
            _EAX = _ESI->AnimClass_field_0xC8; /*0x423e75*/
            __asm { fld qword ptr [eax+2A8h] } /*0x423e8b*/
            v124 = *(unsigned int *)(_EAX + 816); /*0x423e91*/
            IDA_LOWORD(v29) = Math::RoundToInt(v1); /*0x423e94*/
            v30 = v29; /*0x423ea0*/
            Coords = (unsigned int *)Coord::GetCoords(&AnimClass_field_0x9C, 0); /*0x423ea2*/
            PlaySoundEffectAt(Coords, v30, v123, v124, 1, 0); /*0x423eab*/
            _EAX = _ESI->AnimClass_field_0xC8; /*0x423eb0*/
            __asm { fld qword ptr [eax+2A8h] } /*0x423eba*/
            v33 = *(unsigned int *)(_EAX + 816); /*0x423ec0*/
            IDA_LOWORD(v34) = Math::RoundToInt(v1); /*0x423ec6*/
            *(unsigned int *)v132 = v33; /*0x423ecb*/
            v35 = v34; /*0x423ecf*/
            v36 = (int *)Coord::GetCoords(&AnimClass_field_0x9C, 0); /*0x423ed8*/
            CreateSmokeEffectAt(v35, *(int *)v132, *v36, v36[1], v36[2], v126, 0); /*0x423ef8*/
          }
        }
        else if ( *(unsigned char *)(_ESI->AnimClass_field_0xC8 + 854) ) /*0x423ce0*/
        {
          v14 = (AnimClass *)RA2_OPNEW(0x1C8u); /*0x423cea*/
          if ( v14 ) /*0x423cf4*/
          {
            v15 = *p_AnimClass_field_0x9C; /*0x423cfa*/
            v16 = *(unsigned int *)_ESI->__pad_A0; /*0x423cfc*/
            v17 = _ESI->AnimClass_field_0xA4; /*0x423cff*/
            AnimClass_field_0x9C = v15; /*0x423d06*/
            v137 = v16; /*0x423d20*/
            AnimClass_field_0xA4 = v17 + 3; /*0x423d24*/
            AnimClass::ctor( /*0x423d3c*/
              v14,
              *(void **)(dword_8871E0->Normal[10] + 4 * dword_8871E0->Normal[13] - 4),
              &AnimClass_field_0x9C,
              0,
              1,
              (void *)0x600,
              0,
              0);
          }
        }
        else
        {
          v18 = (AnimClass *)RA2_OPNEW(0x1C8u); /*0x423d46*/
          if ( v18 ) /*0x423d50*/
          {
            AnimClass_field_0x9C = *p_AnimClass_field_0x9C; /*0x423d61*/
            v137 = *(unsigned int *)_ESI->__pad_A0; /*0x423d6a*/
            AnimClass_field_0xA4 = _ESI->AnimClass_field_0xA4; /*0x423d76*/
            AnimClass::ctor(v18, (void *)dword_8871E0->InfantryBrute, &AnimClass_field_0x9C, 0, 1, (void *)0x600, 0, 0); /*0x423d89*/
          }
          v19 = (AnimClass *)RA2_OPNEW(0x1C8u); /*0x423d93*/
          if ( v19 ) /*0x423d9d*/
          {
            v20 = *p_AnimClass_field_0x9C; /*0x423da3*/
            v21 = *(unsigned int *)_ESI->__pad_A0; /*0x423da5*/
            v22 = _ESI->AnimClass_field_0xA4; /*0x423da8*/
            AnimClass_field_0x9C = v20; /*0x423db5*/
            v137 = v21; /*0x423dc9*/
            AnimClass_field_0xA4 = v22 + 3; /*0x423dcd*/
            AnimClass::ctor(v19, *(void **)dword_8871E0->Normal[10], &AnimClass_field_0x9C, 0, 1, (void *)0x600, 0, 0); /*0x423ddd*/
          }
        }
        if ( !v12 || v129 ) /*0x423f07*/
        {
          v37 = (int *)Coord::GetCoords((int *)&v134, v128); /*0x423f18*/
          AnimClass_field_0x9C = *v37; /*0x423f1f*/
          v137 = v37[1]; /*0x423f26*/
          AnimClass_field_0xA4 = v37[2]; /*0x423f2d*/
          v38 = _ESI->AnimClass_field_0xC8; /*0x423f31*/
          if ( *(unsigned int *)(v38 + 752) ) /*0x423f37*/
          {
            v39 = *(unsigned int *)(v38 + 756); /*0x423f45*/
            if ( v39 > 0 ) /*0x423f4d*/
            {
              v40 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v39); /*0x423f69*/
              v41 = v40 /*0x423f84*/
                  + Random::Range(
                      (Random *)&dword_A8B230[14].NeedsSaveOrLink,
                      0,
                      *(unsigned int *)(_ESI->AnimClass_field_0xC8 + 756));
              if ( v41 > 0 ) /*0x423f88*/
              {
                v42 = v41; /*0x423f8a*/
                do /*0x423fc4*/
                {
                  v43 = (AnimClass *)RA2_OPNEW(0x1C8u); /*0x423f91*/
                  if ( v43 ) /*0x423f9b*/
                    AnimClass::ctor( /*0x423fbe*/
                      v43,
                      *(void **)(_ESI->AnimClass_field_0xC8 + 752),
                      &AnimClass_field_0x9C,
                      0,
                      1,
                      (void *)0x600,
                      0,
                      0);
                  --v42; /*0x423fc3*/
                }
                while ( v42 ); /*0x423fc4*/
              }
            }
          }
          v44 = _ESI->AnimClass_field_0xC8; /*0x423fc6*/
          v45 = 0; /*0x423fcc*/
          v46 = 0; /*0x423fce*/
          v139 = 0; /*0x423fd0*/
          v47 = *(unsigned char *)(v44 + 856); /*0x423fd4*/
          v140 = 0; /*0x423fda*/
          v141 = 0; /*0x423fe0*/
          if ( v47 && !v129 ) /*0x423ff0*/
          {
            v48 = *(unsigned int *)(v44 + 828); /*0x423ff6*/
            for ( i = -v48; i <= v48; ++i ) /*0x424006*/
            {
              v131 = -v48; /*0x424012*/
              if ( -v48 <= v48 ) /*0x424016*/
              {
                __asm /*0x42401c*/
                {
                  fild [esp+88h+var_74]
                  fld st
                  fmul st, st(1)
                  fstp qword ptr [esp+88h+var_60]
                  fstp st
                }
                do /*0x42424c*/
                {
                  __asm { fild [esp+88h+var_70] } /*0x42402a*/
                  __asm
                  {
                    fld st
                    fmul st, st(1)
                    fadd qword ptr [esp+90h+var_60]
                    fstp [esp+90h+var_90]; double
                    fstp st
                  }
                  Math::Sqrt(v127); /*0x42403e*/
                  IDA_LOWORD(v49) = Math::RoundToInt(v1); /*0x424046*/
                  if ( v49 <= *(unsigned int *)(_ESI->AnimClass_field_0xC8 + 828) ) /*0x424057*/
                  {
                    v50 = i & 7; /*0x42407d*/
                    v132[0] = AnimClass_field_0x9C / 256 + IDA_LOWORD(dword_89F688[v50]); /*0x424099*/
                    v132[1] = v137 / 256 + IDA_HIWORD(dword_89F688[v50]); /*0x4240a8*/
                    *(unsigned int *)&v132[2] = *(unsigned int *)v132; /*0x4240b7*/
                    v51 = (House *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, &v132[2]); /*0x4240c0*/
                    if ( (unsigned __int8)IsCoordValidMap((int)v51, 0) ) /*0x4240c6*/
                    {
                      if ( *(unsigned int *)(_ESI->AnimClass_field_0xC8 + 824) ) /*0x4240d9*/
                      {
                        v52 = (Object *)RA2_OPNEW(0xB0u); /*0x4240f1*/
                        if ( v52 ) /*0x4240f8*/
                        {
                          *(unsigned int *)v133 = *(unsigned int *)&v51->__pad_C[24]; /*0x42410c*/
                          v53 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 3); /*0x424110*/
                          Object::SpawnAtCell( /*0x42413b*/
                            v52,
                            *(&dword_A83D84->vtable0
                            + v53
                            + *(unsigned int *)(*(unsigned int *)(_ESI->AnimClass_field_0xC8 + 824) + 660)),
                            v133,
                            -1);
                        }
                        v51->__pad_7C[162] = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x424155*/
                        StartCoords = House::GetStartCoords(v51, v146); /*0x424167*/
                        v55 = *StartCoords; /*0x42416f*/
                        v56 = StartCoords[1] - dword_886FA4; /*0x424174*/
                        v57 = StartCoords[2]; /*0x424176*/
                        v58 = StartCoords[3]; /*0x42417b*/
                        v144 = v57; /*0x42417e*/
                        v145 = v58; /*0x424182*/
                        if ( v46 <= 0 || v141 <= 0 ) /*0x424192*/
                        {
                          v46 = v57; /*0x424225*/
                        }
                        else if ( v57 <= 0 || v58 <= 0 ) /*0x42419e*/
                        {
                          v55 = v139; /*0x424217*/
                          v56 = v140; /*0x42421b*/
                          v58 = v141; /*0x42421f*/
                        }
                        else
                        {
                          v59 = v139; /*0x4241a0*/
                          v60 = v140; /*0x4241a4*/
                          v143 = v141; /*0x4241a8*/
                          v142 = v46; /*0x4241b0*/
                          if ( v139 > v55 ) /*0x4241b4*/
                          {
                            v59 = v55; /*0x4241b8*/
                            v142 = v139 + v46 - v55; /*0x4241bc*/
                          }
                          if ( v140 > v56 ) /*0x4241c2*/
                          {
                            v60 = v56; /*0x4241cc*/
                            v143 += v140 - v56; /*0x4241ce*/
                          }
                          if ( v59 + v142 < v55 + v144 ) /*0x4241e0*/
                            v142 = v144 - v59 + v55 + 1; /*0x4241ec*/
                          v61 = v143; /*0x4241f0*/
                          if ( v143 + v60 < v56 + v145 ) /*0x4241ff*/
                            v61 = v145 - v60 + v56 + 1; /*0x424207*/
                          v46 = v142; /*0x42420b*/
                          v55 = v59; /*0x42420f*/
                          v56 = v60; /*0x424211*/
                          v58 = v61; /*0x424213*/
                        }
                        v45 = v58; /*0x424227*/
                        v139 = v55; /*0x424229*/
                        v140 = v56; /*0x42422d*/
                        v141 = v58; /*0x424231*/
                      }
                    }
                  }
                  ++v131; /*0x424246*/
                }
                while ( v131 <= *(unsigned int *)(_ESI->AnimClass_field_0xC8 + 828) ); /*0x42424c*/
              }
              v48 = *(unsigned int *)(_ESI->AnimClass_field_0xC8 + 828); /*0x42425d*/
            }
            Cell::CreateCrater(v139, v140, v46, v45, 0); /*0x42428f*/
          }
        }
        return (*(int (__thiscall **)(AnimClass *))(_ESI->AnimClass_field_0x0 + 248))(_ESI); /*0x4242a5*/
      }
    }
    if ( _ESI->__pad_7C[20] ) /*0x4242a6*/
    {
      if ( !_ESI->__pad_194[7] ) /*0x4242b0*/
      {
        v63 = _ESI->AnimClass_field_0xC8; /*0x4242ba*/
        if ( *(unsigned int *)(v63 + 776) ) /*0x4242c0*/
        {
          v64 = *(unsigned int *)(v63 + 780); /*0x4242ca*/
          if ( v64 == 1 || !((int)dword_A8ED84 % v64) ) /*0x4242db*/
          {
            v65 = (AnimClass *)RA2_OPNEW(0x1C8u); /*0x4242eb*/
            if ( v65 ) /*0x4242f2*/
            {
              v66 = (int *)(*(int (__thiscall **)(AnimClass *, int *))(_ESI->AnimClass_field_0x0 + 72))( /*0x42430a*/
                             _ESI,
                             &AnimClass_field_0x9C);
              AnimClass::ctor(v65, *(void **)(_ESI->AnimClass_field_0xC8 + 776), v66, (void *)1, 1, (void *)0x600, 0, 0); /*0x42431d*/
            }
          }
        }
      }
    }
    result = _ESI->AnimClass_field_0xC8; /*0x424328*/
    if ( result == *(unsigned int *)&dword_8871E0->__pad_13BC[192] ) /*0x424334*/
    {
      v67 = (unsigned int *)(*(int (__thiscall **)(AnimClass *, int *))(_ESI->AnimClass_field_0x0 + 72))( /*0x42433f*/
                        _ESI,
                        &AnimClass_field_0x9C);
      v68 = Coord::To_Cell((Coord *)&dword_87F7E8, v67); /*0x424348*/
      result = (int)Cell::IsBridge((Cell *)v68); /*0x42434f*/
      if ( result ) /*0x424356*/
        _ESI->__pad_194[7] = 1; /*0x424358*/
    }
    if ( _ESI->__pad_194[7] ) /*0x42435f*/
      return (*(int (__thiscall **)(AnimClass *))(_ESI->AnimClass_field_0x0 + 248))(_ESI); /*0x424367*/
    IDA_LOBYTE(result) = _ESI->__pad_194[8]; /*0x42436d*/
    if ( (unsigned char)result ) /*0x424375*/
    {
      _ESI->__pad_194[8] = 0; /*0x424377*/
      return result; /*0x424385*/
    }
    AnimClass_field_0x184 = _ESI->AnimClass_field_0x184; /*0x424386*/
    if ( AnimClass_field_0x184 ) /*0x42438e*/
    {
      result = AnimClass_field_0x184 - 1; /*0x424390*/
      _ESI->AnimClass_field_0x184 = result; /*0x424393*/
      if ( !result ) /*0x424399*/
        IDA_LOBYTE(result) = ProductionCompletionCallback((TechnoClass *)_ESI); /*0x4243a1*/
      return result; /*0x4243ad*/
    }
    result = (unsigned __int8)_ESI->__pad_7C[20]; /*0x4243ae*/
    if ( (unsigned char)result )
    {
      if ( *(unsigned char *)(_ESI->AnimClass_field_0xC8 + 864) ) /*0x4243c2*/
      {
        v70 = (int *)(*(int (__thiscall **)(AnimClass *, double *))(_ESI->AnimClass_field_0x0 + 72))(_ESI, &v134); /*0x4243d5*/
        v71 = *v70; /*0x4243d8*/
        v72 = v70[1]; /*0x4243da*/
        v73 = v70[2]; /*0x4243dd*/
        AnimClass_field_0x9C = v71 - 384; /*0x4243e6*/
        v137 = v72 - 384; /*0x4243fa*/
        AnimClass_field_0xA4 = v73; /*0x4243fe*/
        v74 = *(unsigned int *)&Coord::To_Cell((Coord *)&dword_87F7E8, &AnimClass_field_0x9C)->__pad_28[28]; /*0x424407*/
        if ( v74 == -1 || *(unsigned int *)(*(&dword_A83D84->vtable0 + v74) + 668) != _ESI->AnimClass_field_0xC8 ) /*0x424425*/
          _ESI->__pad_194[7] = 1; /*0x424427*/
      }
      v75 = (unsigned int *)_ESI->AnimClass_field_0xC8; /*0x42442e*/
      if ( v75[176] == -1 ) /*0x42443a*/
      {
        *(unsigned int *)(_ESI->AnimClass_field_0xC8 + 704) = *(__int16 *)((*(int (__thiscall **)(unsigned int *))(*v75 + 156))(v75) /*0x42444e*/
                                                                   + 6);
        v76 = _ESI->AnimClass_field_0xC8; /*0x424454*/
        if ( *(unsigned char *)(v76 + 882) ) /*0x42445a*/
          *(int *)(v76 + 704) /= 2; /*0x42446f*/
      }
      v77 = _ESI->AnimClass_field_0xC8; /*0x424475*/
      if ( *(unsigned int *)(v77 + 700) == -1 ) /*0x424481*/
        *(unsigned int *)(v77 + 700) = *(unsigned int *)(v77 + 704); /*0x424489*/
      result = (*(int (__thiscall **)(AnimClass *, int))(_ESI->AnimClass_field_0x0 + 292))(_ESI, 2); /*0x424495*/
      IDA_LOBYTE(result) = _ESI->__pad_194[10]; /*0x42449b*/
      if ( !(unsigned char)result )
      {
        IDA_LOBYTE(result) = _ESI->__pad_118[2]; /*0x4244a9*/
        if ( !(unsigned char)result )
        {
          result = Locomotor::GetSpeed((Locomotor *)&_ESI->AnimClass_field_0xB4); /*0x4244bf*/
          if ( result || (result = _ESI->AnimClass_field_0xC0) == 0 ) /*0x4244d4*/
          {
            _ESI->__pad_B0[0] = 0; /*0x424560*/
            return result; /*0x42456e*/
          }
          v78 = *(unsigned int *)_ESI->__pad_C4 + _ESI->AnimClass_field_0xAC; /*0x4244e6*/
          _ESI->__pad_B0[0] = 1; /*0x4244e8*/
          _ESI->AnimClass_field_0xAC = v78; /*0x4244ef*/
          v79 = v137; /*0x4244fb*/
          _ESI->AnimClass_field_0xB4 = (int)dword_A8ED84; /*0x4244ff*/
          _ESI->AnimClass_field_0xB8 = v79; /*0x424501*/
          _ESI->AnimClass_field_0xBC = result; /*0x424504*/
          _EAX = _ESI->AnimClass_field_0xC8; /*0x424507*/
          AnimClass_field_0xAC = _ESI->AnimClass_field_0xAC; /*0x42450d*/
          __asm /*0x424513*/
          {
            fld qword ptr [eax+2A8h]
            fcomp ds:dbl_7E2800
            fnstsw ax
          }
          if ( (_EAX & 0x4100) != 0 || _ESI->__pad_194[0] ) /*0x42452a*/
            goto LABEL_120; /*0x42452a*/
          AnimClass_field_0xCC = _ESI->AnimClass_field_0xCC; /*0x424538*/
          if ( AnimClass_field_0xCC /*0x42454a*/
            && (*(int (__thiscall **)(int))(*(unsigned int *)AnimClass_field_0xCC + 44))(AnimClass_field_0xCC) == 36 )
          {
            _EAX = _ESI->AnimClass_field_0xC8; /*0x42454c*/
            __asm /*0x424552*/
            {
              fld qword ptr [eax+2A8h]
              fmul ds:dbl_7E3568
            }
          }
          else
          {
            _ECX = _ESI->AnimClass_field_0xC8; /*0x42456f*/
            __asm { fld qword ptr [ecx+2A8h] } /*0x424575*/
          }
          __asm /*0x42457b*/
          {
            fadd qword ptr [esi+188h]
            fstp qword ptr [esi+188h]
          }
          *(double *)&_ESI->AnimClass_field_0x188 = _RT1; /*0x424581*/
          __asm /*0x424587*/
          {
            fld qword ptr [esi+188h]
            fcomp ds:dbl_7E1718
            fnstsw ax
          }
          if ( (_AX & 0x100) != 0 || _ESI->__pad_194[4] ) /*0x42459e*/
            goto LABEL_120; /*0x42459e*/
          __asm { fld qword ptr [esi+188h] } /*0x4245ac*/
          IDA_LOWORD(v87) = Math::RoundToInt(v1); /*0x4245b2*/
          v88 = v87; /*0x4245b7*/
          v89 = _ESI->AnimClass_field_0xC8; /*0x4245b9*/
          *(unsigned int *)v133 = v88; /*0x4245bf*/
          __asm { fild dword ptr [esp+88h+var_64] } /*0x4245c8*/
          __asm
          {
            fsubr qword ptr [esi+188h]
            fstp qword ptr [esi+188h]
          }
          *(double *)&_ESI->AnimClass_field_0x188 = _RT1; /*0x4245d5*/
          v125 = !strcmp((const char *)(v89 + 36), aInviso)
               ? *(unsigned int *)&dword_8871E0->__pad_C3C[876]
               : *(unsigned int *)&dword_8871E0->__pad_C3C[844];
          v91 = (unsigned int *)(*(int (__thiscall **)(AnimClass *, int *))(_ESI->AnimClass_field_0x0 + 72))( /*0x424623*/
                            _ESI,
                            &AnimClass_field_0x9C);
          result = PlaySoundEffectAt(v91, v88, 0, v125, 1, 0); /*0x424647*/
          IDA_LOBYTE(result) = _ESI->__pad_7C[20]; /*0x42464c*/
          if ( (unsigned char)result ) /*0x424654*/
          {
  LABEL_120:
            v92 = _ESI->AnimClass_field_0xC8; /*0x42465d*/
            v93 = *(unsigned int *)(v92 + 664); /*0x424665*/
            if ( v93 && AnimClass_field_0xAC + *(unsigned int *)(v92 + 692) == v93 && !_ESI->__pad_194[0] ) /*0x42467b*/
              CreateUnitOnCompletion((TechnoClass *)_ESI); /*0x424687*/
            result = _ESI->AnimClass_field_0xC8; /*0x42468c*/
            if ( *(unsigned char *)(result + 880) ) /*0x424692*/
            {
              if ( _ESI->__pad_194[1] <= 1u ) /*0x4246a5*/
              {
                if ( AnimClass_field_0xAC < *(unsigned int *)(result + 704) && AnimClass_field_0xAC ) /*0x4246b1*/
                  goto LABEL_132; /*0x4246b1*/
  LABEL_131:
                result = -*(unsigned int *)_ESI->__pad_C4; /*0x4246ce*/
                *(unsigned int *)_ESI->__pad_C4 = result; /*0x4246d6*/
                return result; /*0x4246e3*/
              }
              v94 = *(unsigned int *)(result + 692); /*0x4246b8*/
              if ( AnimClass_field_0xAC >= *(unsigned int *)(result + 700) - v94 || AnimClass_field_0xAC == v94 ) /*0x4246cc*/
                goto LABEL_131; /*0x4246cc*/
            }
  LABEL_132:
            v95 = _ESI->__pad_194[1]; /*0x4246e4*/
            if ( (unsigned __int8)v95 > 1u ) /*0x4246ed*/
            {
              if ( AnimClass_field_0xAC >= *(unsigned int *)(result + 700) - *(unsigned int *)(result + 692) ) /*0x42470a*/
                goto LABEL_143; /*0x42470a*/
            }
            else if ( AnimClass_field_0xAC >= *(unsigned int *)(result + 704) ) /*0x4246f5*/
            {
              goto LABEL_143; /*0x4246f5*/
            }
            if ( !*(unsigned char *)(result + 882) ) /*0x42470c*/
              goto LABEL_190; /*0x42470c*/
            if ( *(unsigned char *)(result + 881) ) /*0x424716*/
            {
  LABEL_142:
              if ( AnimClass_field_0xAC > 0 ) /*0x424754*/
                return result; /*0x424754*/
              goto LABEL_143; /*0x424754*/
            }
            if ( _ESI->__pad_120[0] || AnimClass_field_0xAC < *(unsigned int *)(result + 700) - *(unsigned int *)(result + 692) ) /*0x424738*/
            {
  LABEL_190:
              if ( !*(unsigned char *)(result + 881) ) /*0x42473a*/
              {
                IDA_LOBYTE(result) = _ESI->__pad_120[0]; /*0x424744*/
                if ( !(unsigned char)result ) /*0x42474c*/
                  return result; /*0x42474c*/
              }
              goto LABEL_142; /*0x42474c*/
            }
  LABEL_143:
            if ( v95 && v95 != -1 ) /*0x424761*/
              _ESI->__pad_194[1] = v95 - 1; /*0x424765*/
            v96 = _ESI->AnimClass_field_0xC8; /*0x424773*/
            if ( _ESI->__pad_194[1] ) /*0x42476b*/
            {
              if ( *(unsigned char *)(v96 + 881) || _ESI->__pad_120[0] ) /*0x424785*/
                _ESI->AnimClass_field_0xAC = *(unsigned int *)(v96 + 700); /*0x4247ab*/
              else
                _ESI->AnimClass_field_0xAC = *(unsigned int *)(v96 + 696) - *(unsigned int *)(v96 + 692); /*0x42479d*/
              result = _ESI->AnimClass_field_0xC8; /*0x4247b1*/
              v97 = *(unsigned int *)(result + 732); /*0x4247b7*/
              if ( v97 || *(unsigned int *)(result + 736) ) /*0x4247c1*/
              {
                result = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, v97, *(unsigned int *)(result + 736)); /*0x4247e0*/
                _ESI->AnimClass_field_0x184 = result; /*0x4247e5*/
              }
              return result; /*0x4247f2*/
            }
            v98 = *(unsigned int **)(v96 + 712); /*0x4247f3*/
            if ( v98 ) /*0x4247fb*/
            {
              _ESI->AnimClass_field_0xC8 = (int)v98; /*0x424801*/
              if ( v98[176] == -1 ) /*0x42480f*/
              {
                *(unsigned int *)(_ESI->AnimClass_field_0xC8 + 704) = *(__int16 *)((*(int (__thiscall **)(unsigned int *))(*v98 + 156))(v98) /*0x424823*/
                                                                           + 6);
                v99 = _ESI->AnimClass_field_0xC8; /*0x424829*/
                if ( *(unsigned char *)(v99 + 882) ) /*0x42482f*/
                  *(int *)(v99 + 704) /= 2; /*0x424844*/
              }
              v100 = _ESI->AnimClass_field_0xC8; /*0x42484a*/
              if ( *(unsigned int *)(v100 + 700) == -1 ) /*0x424856*/
                *(unsigned int *)(v100 + 700) = *(unsigned int *)(v100 + 704); /*0x42485e*/
              v101 = _ESI->AnimClass_field_0xC8; /*0x424864*/
              _ESI->__pad_194[7] = 0; /*0x42486a*/
              v102 = *(unsigned char *)(v101 + 708); /*0x424871*/
              _ESI->AnimClass_field_0x188 = 0; /*0x424877*/
              _ESI->__pad_194[1] = v102; /*0x42487d*/
              v103 = v101; /*0x424883*/
              *(unsigned int *)_ESI->__pad_18C = 0; /*0x424885*/
              v104 = *(unsigned int *)(v101 + 740); /*0x42488b*/
              ProductionTimeMult = *(char **)(v101 + 688); /*0x424891*/
              if ( v104 || *(unsigned int *)(v103 + 744) ) /*0x42489b*/
                ProductionTimeMult = (char *)Random::Range( /*0x4248b7*/
                                               (Random *)&dword_A8B230[14].NeedsSaveOrLink,
                                               v104,
                                               *(unsigned int *)(v103 + 744));
              if ( *(unsigned char *)(_ESI->AnimClass_field_0xC8 + 866) ) /*0x4248c2*/
                ProductionTimeMult = Rules::GetProductionTimeMult((Rules *)&dword_A8EB60, (int)ProductionTimeMult); /*0x4248d2*/
              _ESI->AnimClass_field_0xB4 = (int)dword_A8ED84; /*0x4248e3*/
              _ESI->AnimClass_field_0xB8 = v137; /*0x424905*/
              _ESI->AnimClass_field_0xBC = (int)ProductionTimeMult; /*0x42490a*/
              _ESI->AnimClass_field_0xC0 = (int)ProductionTimeMult; /*0x42490d*/
              _ESI->AnimClass_field_0xAC = *(unsigned int *)(_ESI->AnimClass_field_0xC8 + 692); /*0x42491f*/
              IDA_LOBYTE(result) = ProductionCompletionCallback((TechnoClass *)_ESI); /*0x424925*/
              return result; /*0x424931*/
            }
            if ( *(unsigned int *)(v96 + 844) != -1 ) /*0x424938*/
            {
              v106 = &_ESI->AnimClass_field_0x9C; /*0x42493e*/
              AnimClass_field_0x9C = _ESI->AnimClass_field_0x9C; /*0x424948*/
              v107 = _ESI->AnimClass_field_0x0; /*0x42494c*/
              v137 = *(unsigned int *)_ESI->__pad_A0; /*0x424951*/
              AnimClass_field_0xA4 = _ESI->AnimClass_field_0xA4; /*0x42495d*/
              (*(void (__thiscall **)(AnimClass *, int *))(v107 + 244))(_ESI, &AnimClass_field_0x9C); /*0x424963*/
              if ( *(unsigned int *)(_ESI->AnimClass_field_0xC8 + 844) <= *(unsigned int *)&dword_8871E0->__pad_C3C[184] ) /*0x424982*/
              {
                AnimClass_field_0x180 = _ESI->AnimClass_field_0x180; /*0x424988*/
                if ( !AnimClass_field_0x180 || *(unsigned char *)(AnimClass_field_0x180 + 501) ) /*0x424992*/
                {
                  v109 = dword_A80238; /*0x42499c*/
                  v110 = HouseTypeClass::Find(&g_INI_Key_Civilian); /*0x4249a7*/
                  v111 = 0; /*0x4249ac*/
                  if ( v109 > 0 ) /*0x4249b0*/
                  {
                    v112 = dword_A8022C; /*0x4249b2*/
                    while ( *(unsigned int *)(*(unsigned int *)(v112->vtable0 + 52) + 188) != v110 ) /*0x4249c3*/
                    {
                      ++v111; /*0x4249c5*/
                      v112 = (HouseClass *)((char *)v112 + 4); /*0x4249c6*/
                      if ( v111 >= v109 ) /*0x4249cb*/
                        goto LABEL_176; /*0x4249cb*/
                    }
                    _ESI->AnimClass_field_0x180 = *(&dword_A8022C->vtable0 + v111); /*0x4249d8*/
                  }
                }
  LABEL_176:
                if ( _ESI->AnimClass_field_0x180 ) /*0x4249de*/
                {
                  v113 = *((unsigned int *)dword_A8E34C /*0x424a14*/
                         + *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&dword_8871E0->__pad_C3C[172]
                                                 + 4 * *(unsigned int *)(_ESI->AnimClass_field_0xC8 + 844))
                                     + 3576));
                  v114 = (unsigned char *)(*(int (__thiscall **)(int, int))(*(unsigned int *)v113 + 140))( /*0x424a1f*/
                                    v113,
                                    _ESI->AnimClass_field_0x180);
                  AnimClass_field_0x9C = *v106; /*0x424a27*/
                  v137 = *(unsigned int *)_ESI->__pad_A0; /*0x424a30*/
                  v115 = *(unsigned int *)v114; /*0x424a34*/
                  AnimClass_field_0xA4 = _ESI->AnimClass_field_0xA4; /*0x424a39*/
                  result = (*(int (__thiscall **)(unsigned char *, int *, int))(v115 + 216))(v114, &AnimClass_field_0x9C, 96); /*0x424a42*/
                  if ( !(unsigned char)result ) /*0x424a4a*/
                  {
                    --_ESI->AnimClass_field_0xAC; /*0x424b23*/
                    return result; /*0x424b30*/
                  }
                  v116 = (unsigned int *)(*(int (__thiscall **)(AnimClass *, int *))(_ESI->AnimClass_field_0x0 + 72))( /*0x424a59*/
                                     _ESI,
                                     &AnimClass_field_0x9C);
                  v132[0] = *v116 / 256; /*0x424a6c*/
                  v132[1] = v116[1] / 256; /*0x424a84*/
                  *(unsigned int *)v133 = *(unsigned int *)v132; /*0x424a8d*/
                  v117 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v133); /*0x424a97*/
                  if ( v117 ) /*0x424a9e*/
                  {
                    if ( (v117[80] & 0x100) != 0 ) /*0x424aa9*/
                    {
                      v118 = *v106; /*0x424aab*/
                      v119 = *(unsigned int *)_ESI->__pad_A0; /*0x424aae*/
                      v120 = _ESI->AnimClass_field_0xA4; /*0x424ab1*/
                      AnimClass_field_0x9C = v118; /*0x424ab4*/
                      v137 = v119; /*0x424abc*/
                      if ( v120 > *(unsigned int *)((*(int (__thiscall **)(unsigned int *, int *))(*v117 + 72))( /*0x424acb*/
                                                v117,
                                                &AnimClass_field_0x9C)
                                            + 8) )
                      {
                        (*(void (__thiscall **)(unsigned char *, unsigned int))(*(unsigned int *)v114 + 292))(v114, 0); /*0x424ad3*/
                        v121 = *(unsigned int *)v114; /*0x424ad9*/
                        v114[140] = 1; /*0x424adf*/
                        (*(void (__thiscall **)(unsigned char *, int))(v121 + 292))(v114, 1); /*0x424ae6*/
                      }
                    }
                  }
                  if ( !*(unsigned char *)(_ESI->AnimClass_field_0x180 + 492) ) /*0x424af2*/
                    (*(void (__thiscall **)(unsigned char *, int, unsigned int))(*(unsigned int *)v114 + 488))(v114, 15, 0); /*0x424b04*/
                }
              }
              v122 = _ESI->AnimClass_field_0x0; /*0x424b0a*/
              _ESI->__pad_178[1] = 1; /*0x424b0e*/
              return (*(int (__thiscall **)(AnimClass *))(v122 + 248))(_ESI); /*0x424b22*/
            }
            _ESI->__pad_178[1] = 1; /*0x424b31*/
            return (*(int (__thiscall **)(AnimClass *))(_ESI->AnimClass_field_0x0 + 248))(_ESI); /*0x424b38*/
          }
        }
      }
    }
    return result; /*0x42429e*/
}

/* ASM:
push    ebp             ; TechnoClass::CreateUnit — per-frame production pipeline (4234B).
; Sections: Audio → Placement → Deploy → Progress → Cost → Milestone → TypeSwitch → UnitCreate
mov     ebp, esp
and     esp, 0FFFFFFF8h
sub     esp, 78h
push    ebx
push    ebp
push    esi
mov     esi, ecx
or      ebp, 0FFFFFFFFh
push    edi
mov     al, [esi+198h]
test    al, al
jnz     short loc_423B05
mov     eax, [esi+0C8h]
cmp     [eax+2F8h], ebp
jz      short loc_423B05
mov     edx, [esi]
lea     eax, [esp+88h+var_4C]
push    eax
mov     ecx, esi
lea     edi, [esi+1A0h]
call    dword ptr [edx+48h]
mov     ecx, eax
mov     edx, edi
call    StartAudioController

loc_423B05:                             ; CODE XREF: TechnoClass__CreateUnit+1A↑j
; TechnoClass__CreateUnit+28↑j
mov     ecx, [esi+0C8h]
mov     al, [ecx+354h]
test    al, al
jz      short loc_423B23
mov     ecx, esi        ; BuildingClass_Full *
call    ConstructionPositionTracker
mov     ecx, esi        ; this
call    ObjectClass__DetectCloaked

loc_423B23:                             ; CODE XREF: TechnoClass__CreateUnit+53↑j
mov     edx, [esi+0C8h]
mov     al, [edx+373h]
test    al, al
jz      short loc_423B62
mov     eax, [esi]
lea     ecx, [esp+88h+var_4C]
push    ecx
mov     ecx, esi
call    dword ptr [eax+48h]
push    eax
mov     ecx, 87F7E8h
call    Coord__To_Cell
mov     ecx, [esi+180h]
mov     edx, eax
call    Cell__CanPlaceBuilding
test    al, al
setz    dl
mov     [esi+19Dh], dl

loc_423B62:                             ; CODE XREF: TechnoClass__CreateUnit+71↑j
mov     ecx, ds:8871E0h
mov     eax, [esi+0C8h]
cmp     eax, [ecx+0B8h]
jnz     short loc_423B8F
mov     al, ds:0A8EB7Fh
test    al, al
jnz     short loc_423B88
mov     byte ptr [esi+19Dh], 1
jmp     short loc_423B8F
; ---------------------------------------------------------------------------

loc_423B88:                             ; CODE XREF: TechnoClass__CreateUnit+BD↑j
mov     byte ptr [esi+19Dh], 0

loc_423B8F:                             ; CODE XREF: TechnoClass__CreateUnit+B4↑j
; TechnoClass__CreateUnit+C6↑j
mov     edx, [esi+0C8h]
mov     al, [edx+359h]
test    al, al
jz      short loc_423BC8
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+1BCh]
test    eax, eax
jz      short loc_423BC1
mov     ecx, eax
call    Building__GetNthOfType
test    eax, eax
jz      short loc_423BC1
mov     byte ptr [esi+19Dh], 0
jmp     short loc_423BC8
; ---------------------------------------------------------------------------

loc_423BC1:                             ; CODE XREF: TechnoClass__CreateUnit+EB↑j
; TechnoClass__CreateUnit+F6↑j
mov     byte ptr [esi+19Dh], 1

loc_423BC8:                             ; CODE XREF: TechnoClass__CreateUnit+DD↑j
; TechnoClass__CreateUnit+FF↑j
mov     ecx, [esi+0C8h]
cmp     [ecx+34Ch], ebp
jz      short loc_423C03
lea     edx, [esi+9Ch]
mov     eax, [esi+9Ch]
mov     [esp+88h+var_4C], eax
mov     eax, [esi]
mov     ecx, [edx+4]
mov     [esp+88h+var_48], ecx
lea     ecx, [esp+88h+var_4C]
mov     edx, [edx+8]
push    ecx
mov     ecx, esi
mov     [esp+8Ch+var_44], edx
call    dword ptr [eax+0F0h]

loc_423C03:                             ; CODE XREF: TechnoClass__CreateUnit+114↑j
mov     al, [esi+11Bh]
test    al, al
jz      short loc_423C24
mov     edx, [esi+11Ch]
mov     eax, [esi+0ACh]
cmp     edx, eax
jnz     short loc_423C24
mov     byte ptr [esi+11Bh], 0

loc_423C24:                             ; CODE XREF: TechnoClass__CreateUnit+14B↑j
; TechnoClass__CreateUnit+15B↑j
mov     al, [esi+194h]
test    al, al
jz      loc_4242A6
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+1E8h]
cmp     eax, 2
jz      short loc_423C4A
cmp     eax, 1
jnz     loc_4242A6

loc_423C4A:                             ; CODE XREF: TechnoClass__CreateUnit+17F↑j
lea     edi, [esi+9Ch]
mov     ecx, edi
mov     edx, [ecx]
mov     [esp+88h+var_4C], edx
lea     edx, [esp+88h+var_4C]
mov     eax, [ecx+4]
push    edx
mov     [esp+8Ch+var_48], eax
mov     ecx, [ecx+8]
mov     [esp+8Ch+var_44], ecx
mov     ecx, 87F7E8h
call    Coord__To_Cell
mov     ebx, [eax+0ECh]
mov     eax, edi
cmp     ebx, 2
mov     ecx, [eax]
mov     [esp+88h+var_4C], ecx
mov     edx, [eax+4]
mov     [esp+88h+var_48], edx
mov     ebp, [eax+8]
mov     ecx, [eax]
mov     [esp+88h+var_4C], ecx
lea     ecx, [esp+88h+var_4C]
mov     edx, [eax+4]
push    ecx
mov     ecx, 87F7E8h
mov     [esp+8Ch+var_48], edx
mov     eax, [eax+8]
setz    bl
mov     [esp+8Ch+var_44], eax
call    Cell__GetGroundHeight
add     eax, ds:89A1B4h
cmp     ebp, eax
setnl   al
test    bl, bl
mov     byte ptr [esp+88h+var_78+3], al
jz      loc_423DE7
test    al, al
jnz     loc_423DE7
mov     edx, [esi+0C8h]
push    1C8h            ; Size
mov     al, [edx+356h]
test    al, al
jz      short loc_423D46
call    ??2_YAPAXI_Z
add     esp, 4
test    eax, eax
jz      loc_423EFD
mov     edx, [edi]
mov     ebp, [edi+4]
mov     edi, [edi+8]
push    0               ; char
push    0               ; int
mov     [esp+90h+var_4C], edx
mov     edx, ds:8871E0h
push    600h            ; int
add     edi, 3
push    1               ; int
lea     ecx, [esp+98h+var_4C]
push    0               ; int
mov     [esp+9Ch+var_48], ebp
mov     [esp+9Ch+var_44], edi
push    ecx             ; int
mov     ecx, [edx+0BD0h]
mov     edx, [edx+0BC4h]
mov     ecx, [edx+ecx*4-4]
push    ecx             ; int
mov     ecx, eax        ; void **
call    AnimClass__ctor
jmp     loc_423EFD
; ---------------------------------------------------------------------------

loc_423D46:                             ; CODE XREF: TechnoClass__CreateUnit+228↑j
call    ??2_YAPAXI_Z
add     esp, 4
test    eax, eax
jz      short loc_423D8E
mov     edx, edi
push    0               ; char
push    0               ; int
push    600h            ; int
mov     ecx, [edx]
push    1               ; int
mov     [esp+98h+var_4C], ecx
push    0               ; int
mov     ecx, [edx+4]
mov     [esp+9Ch+var_48], ecx
lea     ecx, [esp+9Ch+var_4C]
mov     edx, [edx+8]
push    ecx             ; int
mov     [esp+0A0h+var_44], edx
mov     edx, ds:8871E0h
mov     ecx, [edx+94h]
push    ecx             ; int
mov     ecx, eax        ; void **
call    AnimClass__ctor

loc_423D8E:                             ; CODE XREF: TechnoClass__CreateUnit+290↑j
push    1C8h            ; Size
call    ??2_YAPAXI_Z
add     esp, 4
test    eax, eax
jz      loc_423EFD
mov     edx, [edi]
mov     ebp, [edi+4]
mov     edi, [edi+8]
mov     ecx, ds:8871E0h
push    0               ; char
push    0               ; int
mov     [esp+90h+var_4C], edx
push    600h            ; int
add     edi, 3
push    1               ; int
lea     edx, [esp+98h+var_4C]
push    0               ; int
mov     [esp+9Ch+var_48], ebp
mov     [esp+9Ch+var_44], edi
push    edx             ; int
mov     edx, [ecx+0BC4h]
mov     ecx, [edx]
push    ecx             ; int
mov     ecx, eax        ; void **
call    AnimClass__ctor
jmp     loc_423EFD
; ---------------------------------------------------------------------------

loc_423DE7:                             ; CODE XREF: TechnoClass__CreateUnit+207↑j
; TechnoClass__CreateUnit+20F↑j
mov     edx, [esi+0C8h]
mov     eax, [edx+304h]
test    eax, eax
jz      loc_423EFD
lea     eax, [esi+140h]
push    1C8h            ; Size
mov     ecx, [eax]
mov     [esp+8Ch+var_60], ecx
mov     edx, [eax+4]
mov     [esp+8Ch+var_5C], edx
mov     eax, [eax+8]
mov     [esp+8Ch+var_58], eax
call    ??2_YAPAXI_Z
mov     edi, eax
add     esp, 4
test    edi, edi
jz      short loc_423E75
fld     [esp+88h+var_60]
call    Math__RoundToInt
fld     [esp+88h+var_5C]
mov     [esp+88h+var_4C], eax
call    Math__RoundToInt
fld     [esp+88h+var_58]
mov     [esp+88h+var_48], eax
call    Math__RoundToInt
mov     edx, [esi+0C8h]
push    0               ; char
push    0FFFFFFE2h      ; int
push    2600h           ; int
mov     [esp+94h+var_44], eax
mov     eax, [edx+304h]
push    1               ; int
lea     ecx, [esp+98h+var_4C]
push    0               ; int
push    ecx             ; int
push    eax             ; int
mov     ecx, edi        ; void **
call    AnimClass__ctor

loc_423E75:                             ; CODE XREF: TechnoClass__CreateUnit+366↑j
mov     eax, [esi+0C8h]
push    0
push    1
lea     edi, [esi+128h]
mov     ecx, [eax+330h]
fld     qword ptr [eax+2A8h]
push    ecx
push    0
call    Math__RoundToInt
lea     edx, [esp+98h+var_4C]
mov     ecx, edi
push    edx
mov     ebp, eax
call    Coord__GetCoords
mov     ecx, eax
mov     edx, ebp
call    PlaySoundEffectAt
mov     eax, [esi+0C8h]
push    0
push    0
fld     qword ptr [eax+2A8h]
mov     ebp, [eax+330h]
call    Math__RoundToInt
mov     dword ptr [esp+90h+var_6C], ebp
mov     ebp, eax
lea     eax, [esp+90h+var_4C]
mov     ecx, edi
push    eax
call    Coord__GetCoords
mov     edx, [eax]
sub     esp, 0Ch
mov     ecx, esp
mov     [ecx], edx
mov     edx, [eax+4]
mov     eax, [eax+8]
mov     [ecx+4], edx
mov     edx, dword ptr [esp+9Ch+var_6C]
mov     [ecx+8], eax
mov     ecx, ebp
call    CreateSmokeEffectAt

loc_423EFD:                             ; CODE XREF: TechnoClass__CreateUnit+234↑j
; TechnoClass__CreateUnit+281↑j ...
test    bl, bl
jz      short loc_423F0D
mov     al, byte ptr [esp+88h+var_78+3]
test    al, al
jz      loc_424294

loc_423F0D:                             ; CODE XREF: TechnoClass__CreateUnit+43F↑j
lea     eax, [esp+88h+var_60]
lea     ecx, [esi+128h]
push    eax
call    Coord__GetCoords
mov     ecx, [eax]
mov     [esp+88h+var_4C], ecx
mov     edx, [eax+4]
mov     [esp+88h+var_48], edx
mov     eax, [eax+8]
mov     [esp+88h+var_44], eax
mov     eax, [esi+0C8h]
mov     ecx, [eax+2F0h]
test    ecx, ecx
jz      loc_423FC6
mov     eax, [eax+2F4h]
test    eax, eax
jle     short loc_423FC6
mov     ecx, ds:0A8B230h
push    eax
push    0
add     ecx, 218h
call    Random__Range
mov     edx, [esi+0C8h]
mov     edi, eax
mov     eax, [edx+2F4h]
push    eax
mov     eax, ds:0A8B230h
push    0
lea     ecx, [eax+218h]
call    Random__Range
add     eax, edi
test    eax, eax
jle     short loc_423FC6
mov     edi, eax

loc_423F8C:                             ; CODE XREF: TechnoClass__CreateUnit+504↓j
push    1C8h            ; Size
call    ??2_YAPAXI_Z
add     esp, 4
test    eax, eax
jz      short loc_423FC3
mov     edx, [esi+0C8h]
push    0               ; char
push    0               ; int
push    600h            ; int
push    1               ; int
lea     ecx, [esp+98h+var_4C]
push    0               ; int
push    ecx             ; int
mov     ecx, [edx+2F0h]
push    ecx             ; int
mov     ecx, eax        ; void **
call    AnimClass__ctor

loc_423FC3:                             ; CODE XREF: TechnoClass__CreateUnit+4DB↑j
dec     edi
jnz     short loc_423F8C

loc_423FC6:                             ; CODE XREF: TechnoClass__CreateUnit+47F↑j
; TechnoClass__CreateUnit+48D↑j ...
mov     eax, [esi+0C8h]
xor     ebx, ebx
xor     ebp, ebp
mov     [esp+88h+var_40], ebx
mov     cl, [eax+358h]
mov     [esp+88h+var_3C], ebx
test    cl, cl
mov     [esp+88h+var_34], ebx
jz      loc_424294
mov     cl, byte ptr [esp+88h+var_78+3]
test    cl, cl
jnz     loc_424294
mov     eax, [eax+33Ch]
mov     ecx, eax
neg     ecx
cmp     ecx, eax
mov     [esp+88h+var_74], ecx
jg      loc_42426F

loc_42400C:                             ; CODE XREF: TechnoClass__CreateUnit+7A9↓j
mov     ecx, eax
neg     ecx
cmp     ecx, eax
mov     [esp+88h+var_70], ecx
jg      loc_424252
fild    [esp+88h+var_74]
fld     st
fmul    st, st(1)
fstp    qword ptr [esp+88h+var_60]
fstp    st

loc_42402A:                             ; CODE XREF: TechnoClass__CreateUnit+78C↓j
fild    [esp+88h+var_70]
sub     esp, 8
fld     st
fmul    st, st(1)
fadd    qword ptr [esp+90h+var_60]
fstp    [esp+90h+var_90] ; double
fstp    st
call    Math__Sqrt
add     esp, 8
call    Math__RoundToInt
mov     edx, [esi+0C8h]
cmp     eax, [edx+33Ch]
jg      loc_424235
mov     eax, [esp+88h+var_4C]
cdq
and     edx, 0FFh
add     eax, edx
mov     ecx, eax
mov     eax, [esp+88h+var_48]
cdq
and     edx, 0FFh
add     eax, edx
mov     edx, [esp+88h+var_74]
and     edx, 7
sar     ecx, 8
mov     di, ds:89F688h[edx*4]
lea     edx, ds:89F688h[edx*4]
add     di, cx
mov     cx, [edx+2]
mov     word ptr [esp+88h+var_6C], di
sar     eax, 8
add     cx, ax
lea     eax, [esp+88h+var_6C+4]
mov     word ptr [esp+88h+var_6C+2], cx
mov     edx, dword ptr [esp+88h+var_6C]
push    eax
mov     ecx, 87F7E8h
mov     dword ptr [esp+8Ch+var_6C+4], edx
call    CellCoord__To_CellObj
mov     edi, eax
push    0
mov     ecx, edi
call    IsCoordValidMap
test    al, al
jz      loc_424235
mov     ecx, [esi+0C8h]
mov     eax, [ecx+338h]
test    eax, eax
jz      loc_424235
push    0B0h            ; Size
call    ??2_YAPAXI_Z
mov     ebx, eax
add     esp, 4
test    ebx, ebx
jz      short loc_424140
mov     eax, ds:0A8B230h
mov     edx, [edi+24h]
push    3
push    0
lea     ecx, [eax+218h]
mov     [esp+90h+var_64], edx
call    Random__Range
mov     edx, [esi+0C8h]
lea     ecx, [esp+88h+var_64]
push    0FFFFFFFFh
push    ecx
mov     ecx, [edx+338h]
mov     edx, [ecx+294h]
add     edx, eax
mov     eax, ds:0A83D84h
mov     ecx, [eax+edx*4]
push    ecx
mov     ecx, ebx
call    Object__SpawnAtCell

loc_424140:                             ; CODE XREF: TechnoClass__CreateUnit+638↑j
mov     edx, ds:0A8B230h
push    2
push    0
lea     ecx, [edx+218h]
call    Random__Range
mov     [edi+11Eh], al
lea     eax, [esp+88h+var_10]
push    eax
mov     ecx, edi
call    House__GetStartCoords
mov     edx, eax
mov     ebx, ds:886FA4h
mov     eax, [edx]
mov     ecx, [edx+4]
sub     ecx, ebx
mov     edi, [edx+8]
test    ebp, ebp
mov     edx, [edx+0Ch]
mov     [esp+88h+var_18], edi
mov     [esp+88h+var_14], edx
jle     loc_424225
mov     ebx, [esp+88h+var_34]
test    ebx, ebx
jle     loc_424225
test    edi, edi
jle     short loc_424217
test    edx, edx
jle     short loc_424217
mov     edx, [esp+88h+var_40]
mov     edi, [esp+88h+var_3C]
mov     [esp+88h+var_24], ebx
mov     ebx, edx
cmp     ebx, eax
mov     [esp+88h+var_28], ebp
jle     short loc_4241C0
sub     ebp, eax
mov     edx, eax
add     ebp, ebx
mov     [esp+88h+var_28], ebp

loc_4241C0:                             ; CODE XREF: TechnoClass__CreateUnit+6F4↑j
cmp     edi, ecx
jle     short loc_4241D2
mov     ebx, [esp+88h+var_24]
sub     edi, ecx
add     ebx, edi
mov     edi, ecx
mov     [esp+88h+var_24], ebx

loc_4241D2:                             ; CODE XREF: TechnoClass__CreateUnit+702↑j
mov     ebx, [esp+88h+var_18]
mov     ebp, [esp+88h+var_28]
add     ebx, eax
add     ebp, edx
cmp     ebp, ebx
jge     short loc_4241F0
mov     ebx, [esp+88h+var_18]
sub     ebx, edx
lea     eax, [ebx+eax+1]
mov     [esp+88h+var_28], eax

loc_4241F0:                             ; CODE XREF: TechnoClass__CreateUnit+720↑j
mov     ebx, [esp+88h+var_24]
mov     ebp, [esp+88h+var_14]
add     ebp, ecx
lea     eax, [ebx+edi]
cmp     eax, ebp
jge     short loc_42420B
mov     ebx, [esp+88h+var_14]
sub     ebx, edi
lea     ebx, [ebx+ecx+1]

loc_42420B:                             ; CODE XREF: TechnoClass__CreateUnit+73F↑j
mov     ebp, [esp+88h+var_28]
mov     eax, edx
mov     ecx, edi
mov     edx, ebx
jmp     short loc_424227
; ---------------------------------------------------------------------------

loc_424217:                             ; CODE XREF: TechnoClass__CreateUnit+6DA↑j
; TechnoClass__CreateUnit+6DE↑j
mov     eax, [esp+88h+var_40]
mov     ecx, [esp+88h+var_3C]
mov     edx, [esp+88h+var_34]
jmp     short loc_424227
; ---------------------------------------------------------------------------

loc_424225:                             ; CODE XREF: TechnoClass__CreateUnit+6C6↑j
; TechnoClass__CreateUnit+6D2↑j
mov     ebp, edi

loc_424227:                             ; CODE XREF: TechnoClass__CreateUnit+755↑j
; TechnoClass__CreateUnit+763↑j
mov     ebx, edx
mov     [esp+88h+var_40], eax
mov     [esp+88h+var_3C], ecx
mov     [esp+88h+var_34], ebx

loc_424235:                             ; CODE XREF: TechnoClass__CreateUnit+597↑j
; TechnoClass__CreateUnit+60D↑j ...
mov     ecx, [esi+0C8h]
mov     eax, [esp+88h+var_70]
inc     eax
mov     edx, [ecx+33Ch]
mov     [esp+88h+var_70], eax
cmp     eax, edx
jle     loc_42402A

loc_424252:                             ; CODE XREF: TechnoClass__CreateUnit+556↑j
mov     edx, [esi+0C8h]
mov     ecx, [esp+88h+var_74]
inc     ecx
mov     eax, [edx+33Ch]
mov     [esp+88h+var_74], ecx
cmp     ecx, eax
jle     loc_42400C

loc_42426F:                             ; CODE XREF: TechnoClass__CreateUnit+546↑j
mov     ecx, [esp+88h+var_40]
push    0
mov     edx, [esp+8Ch+var_3C]
sub     esp, 10h
mov     eax, esp
mov     [eax], ecx
mov     ecx, ds:887324h
mov     [eax+4], edx
mov     [eax+8], ebp
mov     [eax+0Ch], ebx
call    Cell__CreateCrater

loc_424294:                             ; CODE XREF: TechnoClass__CreateUnit+447↑j
; TechnoClass__CreateUnit+524↑j ...
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+0F8h]
pop     edi
pop     esi
pop     ebp
pop     ebx
mov     esp, ebp
pop     ebp
retn
; ---------------------------------------------------------------------------

loc_4242A6:                             ; CODE XREF: TechnoClass__CreateUnit+16C↑j
; TechnoClass__CreateUnit+184↑j
mov     al, [esi+90h]
test    al, al
jz      short loc_424322
mov     al, [esi+19Bh]
test    al, al
jnz     short loc_424322
mov     eax, [esi+0C8h]
mov     ecx, [eax+308h]
test    ecx, ecx
jz      short loc_424322
mov     ecx, [eax+30Ch]
cmp     ecx, 1
jz      short loc_4242E1
mov     eax, dword_A8ED54+30h
cdq
idiv    ecx
test    edx, edx
jnz     short loc_424322

loc_4242E1:                             ; CODE XREF: TechnoClass__CreateUnit+813↑j
push    1C8h            ; Size
call    ??2_YAPAXI_Z
mov     edi, eax
add     esp, 4
test    edi, edi
jz      short loc_424322
mov     edx, [esi]
push    0               ; char
push    0               ; int
push    600h            ; int
push    1               ; int
lea     eax, [esp+98h+var_4C]
push    1               ; int
push    eax
mov     ecx, esi
call    dword ptr [edx+48h]
mov     ecx, [esi+0C8h]
push    eax             ; int
mov     edx, [ecx+308h]
mov     ecx, edi        ; void **
push    edx             ; int
call    AnimClass__ctor

loc_424322:                             ; CODE XREF: TechnoClass__CreateUnit+7EE↑j
; TechnoClass__CreateUnit+7F8↑j ...
mov     ecx, ds:8871E0h
mov     eax, [esi+0C8h]
cmp     eax, [ecx+147Ch]
jnz     short loc_42435F
mov     edx, [esi]
lea     eax, [esp+88h+var_4C]
push    eax
mov     ecx, esi
call    dword ptr [edx+48h]
push    eax
mov     ecx, 87F7E8h
call    Coord__To_Cell
mov     ecx, eax
call    Cell__IsBridge
test    eax, eax
jz      short loc_42435F
mov     byte ptr [esi+19Bh], 1

loc_42435F:                             ; CODE XREF: TechnoClass__CreateUnit+874↑j
; TechnoClass__CreateUnit+896↑j
mov     al, [esi+19Bh]
test    al, al
jnz     loc_424B38
mov     al, [esi+19Ch]
test    al, al
jz      short loc_424386
mov     byte ptr [esi+19Ch], 0
pop     edi
pop     esi
pop     ebp
pop     ebx
mov     esp, ebp
pop     ebp
retn
; ---------------------------------------------------------------------------

loc_424386:                             ; CODE XREF: TechnoClass__CreateUnit+8B5↑j
mov     eax, [esi+184h]
test    eax, eax
jz      short loc_4243AE
dec     eax
test    eax, eax
mov     [esi+184h], eax
jnz     loc_424B42
mov     ecx, esi        ; BuildingClass_Full *
call    ProductionCompletionCallback ; Production completion callback (543B). Handles audio, special building anims, unit creation.
pop     edi
pop     esi
pop     ebp
pop     ebx
mov     esp, ebp
pop     ebp
retn
; ---------------------------------------------------------------------------

loc_4243AE:                             ; CODE XREF: TechnoClass__CreateUnit+8CE↑j
mov     al, [esi+90h]
test    al, al
jz      loc_424B42
mov     eax, [esi+0C8h]
mov     cl, [eax+360h]
test    cl, cl
jz      short loc_42442E
mov     edx, [esi]
lea     eax, [esp+88h+var_60]
push    eax
mov     ecx, esi
call    dword ptr [edx+48h]
mov     ecx, [eax]
mov     edx, [eax+4]
mov     eax, [eax+8]
sub     ecx, 180h
mov     [esp+88h+var_4C], ecx
lea     ecx, [esp+88h+var_4C]
sub     edx, 180h
push    ecx
mov     ecx, 87F7E8h
mov     [esp+8Ch+var_48], edx
mov     [esp+8Ch+var_44], eax
call    Coord__To_Cell
mov     eax, [eax+44h]
cmp     eax, ebp
jz      short loc_424427
mov     edx, ds:0A83D84h
mov     eax, [edx+eax*4]
mov     ecx, [eax+29Ch]
mov     eax, [esi+0C8h]
cmp     ecx, eax
jz      short loc_42442E

loc_424427:                             ; CODE XREF: TechnoClass__CreateUnit+94C↑j
mov     byte ptr [esi+19Bh], 1

loc_42442E:                             ; CODE XREF: TechnoClass__CreateUnit+90A↑j
; TechnoClass__CreateUnit+965↑j
mov     ecx, [esi+0C8h]
cmp     [ecx+2C0h], ebp
jnz     short loc_424475
mov     edx, [ecx]
call    dword ptr [edx+9Ch]
movsx   eax, word ptr [eax+6]
mov     ecx, [esi+0C8h]
mov     [ecx+2C0h], eax
mov     ecx, [esi+0C8h]
mov     al, [ecx+372h]
test    al, al
jz      short loc_424475
mov     eax, [ecx+2C0h]
cdq
sub     eax, edx
sar     eax, 1
mov     [ecx+2C0h], eax

loc_424475:                             ; CODE XREF: TechnoClass__CreateUnit+97A↑j
; TechnoClass__CreateUnit+9A2↑j
mov     eax, [esi+0C8h]
cmp     [eax+2BCh], ebp
jnz     short loc_42448F
mov     edx, [eax+2C0h]
mov     [eax+2BCh], edx

loc_42448F:                             ; CODE XREF: TechnoClass__CreateUnit+9C1↑j
mov     eax, [esi]
push    2
mov     ecx, esi
call    dword ptr [eax+124h]
mov     al, [esi+19Eh]
test    al, al
jnz     loc_424B42
mov     al, [esi+11Ah]
test    al, al
jnz     loc_424B42
lea     edi, [esi+0B4h]
mov     ecx, edi
call    Locomotor__GetSpeed
test    eax, eax
jnz     loc_424560
mov     eax, [esi+0C0h]
test    eax, eax
jz      loc_424560
mov     ecx, [esi+0C4h]
mov     edx, [esi+0ACh]
add     edx, ecx
mov     byte ptr [esi+0B0h], 1
mov     [esi+0ACh], edx
mov     ecx, dword_A8ED54+30h
mov     edx, [esp+88h+var_48]
mov     [edi], ecx
mov     [edi+4], edx
mov     [edi+8], eax
mov     eax, [esi+0C8h]
mov     ebx, [esi+0ACh]
fld     qword ptr [eax+2A8h]
fcomp   ds:dbl_7E2800
fnstsw  ax
test    ah, 41h
jnz     loc_42465D
mov     al, [esi+194h]
test    al, al
jnz     loc_42465D
mov     ecx, [esi+0CCh]
test    ecx, ecx
jz      short loc_42456F
mov     edx, [ecx]
call    dword ptr [edx+2Ch]
cmp     eax, 24h ; '$'
jnz     short loc_42456F
mov     eax, [esi+0C8h]
fld     qword ptr [eax+2A8h]
fmul    ds:dbl_7E3568
jmp     short loc_42457B
; ---------------------------------------------------------------------------

loc_424560:                             ; CODE XREF: TechnoClass__CreateUnit+A06↑j
; TechnoClass__CreateUnit+A14↑j
mov     byte ptr [esi+0B0h], 0
pop     edi
pop     esi
pop     ebp
pop     ebx
mov     esp, ebp
pop     ebp
retn
; ---------------------------------------------------------------------------

loc_42456F:                             ; CODE XREF: TechnoClass__CreateUnit+A80↑j
; TechnoClass__CreateUnit+A8A↑j
mov     ecx, [esi+0C8h]
fld     qword ptr [ecx+2A8h]

loc_42457B:                             ; CODE XREF: TechnoClass__CreateUnit+A9E↑j
fadd    qword ptr [esi+188h]
fstp    qword ptr [esi+188h]
fld     qword ptr [esi+188h]
fcomp   ds:dbl_7E1718
fnstsw  ax
test    ah, 1
jnz     loc_42465D
mov     al, [esi+198h]
test    al, al
jnz     loc_42465D
fld     qword ptr [esi+188h]
call    Math__RoundToInt
mov     ebp, eax
mov     eax, [esi+0C8h]
mov     [esp+88h+var_64], ebp
mov     edi, offset aInviso ; "INVISO"
fild    [esp+88h+var_64]
add     eax, 24h ; '$'
fsubr   qword ptr [esi+188h]
fstp    qword ptr [esi+188h]

loc_4245DB:                             ; CODE XREF: TechnoClass__CreateUnit+B39↓j
mov     dl, [eax]
mov     cl, dl
cmp     dl, [edi]
jnz     short loc_4245FF
test    cl, cl
jz      short loc_4245FB
mov     dl, [eax+1]
mov     cl, dl
cmp     dl, [edi+1]
jnz     short loc_4245FF
add     eax, 2
add     edi, 2
test    cl, cl
jnz     short loc_4245DB

loc_4245FB:                             ; CODE XREF: TechnoClass__CreateUnit+B25↑j
xor     eax, eax
jmp     short loc_424604
; ---------------------------------------------------------------------------

loc_4245FF:                             ; CODE XREF: TechnoClass__CreateUnit+B21↑j
; TechnoClass__CreateUnit+B2F↑j
sbb     eax, eax
sbb     eax, 0FFFFFFFFh

loc_424604:                             ; CODE XREF: TechnoClass__CreateUnit+B3D↑j
test    eax, eax
push    0
push    1
jnz     short loc_424628
mov     eax, ds:8871E0h
mov     edx, [esi]
mov     ecx, [eax+0FA8h]
lea     eax, [esp+90h+var_4C]
push    ecx
push    0
push    eax
mov     ecx, esi
call    dword ptr [edx+48h]
jmp     short loc_424643
; ---------------------------------------------------------------------------

loc_424628:                             ; CODE XREF: TechnoClass__CreateUnit+B4A↑j
mov     ecx, ds:8871E0h
mov     eax, [esi]
mov     edx, [ecx+0F88h]
lea     ecx, [esp+90h+var_4C]
push    edx
push    0
push    ecx
mov     ecx, esi
call    dword ptr [eax+48h]

loc_424643:                             ; CODE XREF: TechnoClass__CreateUnit+B66↑j
mov     ecx, eax
mov     edx, ebp
call    PlaySoundEffectAt
mov     al, [esi+90h]
test    al, al
jz      loc_424B42
or      ebp, 0FFFFFFFFh

loc_42465D:                             ; CODE XREF: TechnoClass__CreateUnit+A64↑j
; TechnoClass__CreateUnit+A72↑j ...
mov     eax, [esi+0C8h]
xor     edi, edi
mov     ecx, [eax+298h]
cmp     ecx, edi
jz      short loc_42468C
mov     edx, [eax+2B4h]
add     edx, ebx
cmp     edx, ecx
jnz     short loc_42468C
mov     al, [esi+194h]
test    al, al
jnz     short loc_42468C
mov     ecx, esi        ; BuildingClass_Full *
call    CreateUnitOnCompletion ; Create unit at completion (583B). Calculates exit cell, foundation offsets, spawns unit.

loc_42468C:                             ; CODE XREF: TechnoClass__CreateUnit+BAD↑j
; TechnoClass__CreateUnit+BB9↑j ...
mov     eax, [esi+0C8h]
mov     cl, [eax+370h]
test    cl, cl
jz      short loc_4246E4
mov     cl, [esi+195h]
cmp     cl, 1
ja      short loc_4246B8
cmp     ebx, [eax+2C0h]
jge     short loc_4246CE
cmp     ebx, edi
jz      short loc_4246CE
cmp     cl, 1
jbe     short loc_4246E4

loc_4246B8:                             ; CODE XREF: TechnoClass__CreateUnit+BE5↑j
mov     ecx, [eax+2B4h]
mov     edx, [eax+2BCh]
sub     edx, ecx
cmp     ebx, edx
jge     short loc_4246CE
cmp     ebx, ecx
jnz     short loc_4246E4

loc_4246CE:                             ; CODE XREF: TechnoClass__CreateUnit+BED↑j
; TechnoClass__CreateUnit+BF1↑j ...
mov     eax, [esi+0C4h]
neg     eax
mov     [esi+0C4h], eax
pop     edi
pop     esi
pop     ebp
pop     ebx
mov     esp, ebp
pop     ebp
retn
; ---------------------------------------------------------------------------

loc_4246E4:                             ; CODE XREF: TechnoClass__CreateUnit+BDA↑j
; TechnoClass__CreateUnit+BF6↑j ...
mov     cl, [esi+195h]
cmp     cl, 1
ja      short loc_4246FC
cmp     ebx, [eax+2C0h]
jge     short loc_42475A
cmp     cl, 1
jbe     short loc_42470C

loc_4246FC:                             ; CODE XREF: TechnoClass__CreateUnit+C2D↑j
mov     edx, [eax+2BCh]
sub     edx, [eax+2B4h]
cmp     ebx, edx
jge     short loc_42475A

loc_42470C:                             ; CODE XREF: TechnoClass__CreateUnit+C3A↑j
mov     dl, [eax+372h]
test    dl, dl
jz      short loc_42473A
mov     dl, [eax+371h]
test    dl, dl
jnz     short loc_424752
mov     dl, [esi+120h]
test    dl, dl
jnz     short loc_42473A
mov     edx, [eax+2BCh]
sub     edx, [eax+2B4h]
cmp     ebx, edx
jge     short loc_42475A

loc_42473A:                             ; CODE XREF: TechnoClass__CreateUnit+C54↑j
; TechnoClass__CreateUnit+C68↑j
mov     dl, [eax+371h]
test    dl, dl
jnz     short loc_424752
mov     al, [esi+120h]
test    al, al
jz      loc_424B42

loc_424752:                             ; CODE XREF: TechnoClass__CreateUnit+C5E↑j
; TechnoClass__CreateUnit+C82↑j
cmp     ebx, edi
jg      loc_424B42

loc_42475A:                             ; CODE XREF: TechnoClass__CreateUnit+C35↑j
; TechnoClass__CreateUnit+C4A↑j ...
test    cl, cl
jz      short loc_42476B
cmp     cl, 0FFh
jz      short loc_42476B
dec     cl
mov     [esi+195h], cl

loc_42476B:                             ; CODE XREF: TechnoClass__CreateUnit+C9C↑j
; TechnoClass__CreateUnit+CA1↑j
mov     al, [esi+195h]
test    al, al
mov     eax, [esi+0C8h]
jz      short loc_4247F3
mov     cl, [eax+371h]
test    cl, cl
jnz     short loc_4247A5
mov     cl, [esi+120h]
test    cl, cl
jnz     short loc_4247A5
mov     ecx, [eax+2B8h]
mov     edx, [eax+2B4h]
sub     ecx, edx
mov     [esi+0ACh], ecx
jmp     short loc_4247B1
; ---------------------------------------------------------------------------

loc_4247A5:                             ; CODE XREF: TechnoClass__CreateUnit+CC3↑j
; TechnoClass__CreateUnit+CCD↑j
mov     edx, [eax+2BCh]
mov     [esi+0ACh], edx

loc_4247B1:                             ; CODE XREF: TechnoClass__CreateUnit+CE3↑j
mov     eax, [esi+0C8h]
mov     ecx, [eax+2DCh]
cmp     ecx, edi
jnz     short loc_4247CD
cmp     [eax+2E0h], edi
jz      loc_424B42

loc_4247CD:                             ; CODE XREF: TechnoClass__CreateUnit+CFF↑j
mov     eax, [eax+2E0h]
push    eax
mov     eax, ds:0A8B230h
push    ecx
lea     ecx, [eax+218h]
call    Random__Range
mov     [esi+184h], eax
pop     edi
pop     esi
pop     ebp
pop     ebx
mov     esp, ebp
pop     ebp
retn
; ---------------------------------------------------------------------------

loc_4247F3:                             ; CODE XREF: TechnoClass__CreateUnit+CB9↑j
mov     ecx, [eax+2C8h]
cmp     ecx, edi
jz      loc_424932
mov     [esi+0C8h], ecx
mov     eax, [ecx+2C0h]
cmp     eax, ebp
jnz     short loc_42484A
mov     edx, [ecx]
call    dword ptr [edx+9Ch]
movsx   eax, word ptr [eax+6]
mov     ecx, [esi+0C8h]
mov     [ecx+2C0h], eax
mov     ecx, [esi+0C8h]
mov     al, [ecx+372h]
test    al, al
jz      short loc_42484A
mov     eax, [ecx+2C0h]
cdq
sub     eax, edx
sar     eax, 1
mov     [ecx+2C0h], eax

loc_42484A:                             ; CODE XREF: TechnoClass__CreateUnit+D4F↑j
; TechnoClass__CreateUnit+D77↑j
mov     eax, [esi+0C8h]
cmp     [eax+2BCh], ebp
jnz     short loc_424864
mov     edx, [eax+2C0h]
mov     [eax+2BCh], edx

loc_424864:                             ; CODE XREF: TechnoClass__CreateUnit+D96↑j
mov     eax, [esi+0C8h]
mov     byte ptr [esi+19Bh], 0
mov     cl, [eax+2C4h]
mov     [esi+188h], edi
mov     [esi+195h], cl
mov     ecx, eax
mov     [esi+18Ch], edi
mov     edx, [ecx+2E4h]
mov     eax, [ecx+2B0h]
cmp     edx, edi
jnz     short loc_4248A3
cmp     [ecx+2E8h], edi
jz      short loc_4248BC

loc_4248A3:                             ; CODE XREF: TechnoClass__CreateUnit+DD9↑j
mov     ecx, [ecx+2E8h]
push    ecx
push    edx
mov     edx, ds:0A8B230h
lea     ecx, [edx+218h]
call    Random__Range

loc_4248BC:                             ; CODE XREF: TechnoClass__CreateUnit+DE1↑j
mov     ecx, [esi+0C8h]
mov     dl, [ecx+362h]
test    dl, dl
jz      short loc_4248EF
push    eax
mov     ecx, 0A8EB60h
call    Rules__GetProductionTimeMult
mov     ecx, dword_A8ED54+30h
lea     edx, [esi+0B4h]
mov     [esi+0B4h], ecx
mov     ecx, [esp+88h+var_48]
jmp     short loc_424905
; ---------------------------------------------------------------------------

loc_4248EF:                             ; CODE XREF: TechnoClass__CreateUnit+E0A↑j
mov     ecx, dword_A8ED54+30h
lea     edx, [esi+0B4h]
mov     [esi+0B4h], ecx
mov     ecx, [esp+88h+var_48]

loc_424905:                             ; CODE XREF: TechnoClass__CreateUnit+E2D↑j
mov     [edx+4], ecx
mov     ecx, esi        ; BuildingClass_Full *
mov     [edx+8], eax
mov     [esi+0C0h], eax
mov     edx, [esi+0C8h]
mov     eax, [edx+2B4h]
mov     [esi+0ACh], eax
call    ProductionCompletionCallback ; Production completion callback (543B). Handles audio, special building anims, unit creation.
pop     edi
pop     esi
pop     ebp
pop     ebx
mov     esp, ebp
pop     ebp
retn
; ---------------------------------------------------------------------------

loc_424932:                             ; CODE XREF: TechnoClass__CreateUnit+D3B↑j
cmp     [eax+34Ch], ebp
jz      loc_424B31
lea     ebp, [esi+9Ch]
mov     ecx, ebp
mov     edx, [ecx]
mov     [esp+88h+var_4C], edx
mov     edx, [esi]
mov     eax, [ecx+4]
mov     [esp+88h+var_48], eax
lea     eax, [esp+88h+var_4C]
mov     ecx, [ecx+8]
push    eax
mov     [esp+8Ch+var_44], ecx
mov     ecx, esi
call    dword ptr [edx+0F4h]
mov     ecx, [esi+0C8h]
mov     eax, ds:8871E0h
mov     edx, [ecx+34Ch]
mov     ecx, [eax+0CF4h]
cmp     edx, ecx
jg      loc_424B0A
mov     eax, [esi+180h]
test    eax, eax
jz      short loc_42499C
mov     cl, [eax+1F5h]
test    cl, cl
jz      short loc_4249DE

loc_42499C:                             ; CODE XREF: TechnoClass__CreateUnit+ED0↑j
mov     edi, ds:0A80238h
mov     ecx, offset g_INI_Key_Civilian ; "Civilian"
call    HouseTypeClass__Find
xor     ecx, ecx
test    edi, edi
jle     short loc_4249DE
mov     edx, ds:0A8022Ch

loc_4249B8:                             ; CODE XREF: TechnoClass__CreateUnit+F0B↓j
mov     ebx, [edx]
mov     ebx, [ebx+34h]
cmp     [ebx+0BCh], eax
jz      short loc_4249CF
inc     ecx
add     edx, 4
cmp     ecx, edi
jl      short loc_4249B8
jmp     short loc_4249DE
; ---------------------------------------------------------------------------

loc_4249CF:                             ; CODE XREF: TechnoClass__CreateUnit+F03↑j
mov     edx, ds:0A8022Ch
mov     eax, [edx+ecx*4]
mov     [esi+180h], eax

loc_4249DE:                             ; CODE XREF: TechnoClass__CreateUnit+EDA↑j
; TechnoClass__CreateUnit+EF0↑j ...
mov     eax, [esi+180h]
test    eax, eax
jz      loc_424B0A
mov     ecx, [esi+0C8h]
push    eax
mov     edx, [ecx+34Ch]
mov     ecx, ds:8871E0h
mov     ecx, [ecx+0CE8h]
mov     edx, [ecx+edx*4]
mov     ecx, [edx+0DF8h]
mov     edx, ds:0A8E34Ch
mov     ecx, [edx+ecx*4]
mov     edx, [ecx]
call    dword ptr [edx+8Ch]
mov     edi, eax
mov     eax, ebp
push    60h ; '`'
mov     ecx, [eax]
mov     [esp+8Ch+var_4C], ecx
mov     ecx, edi
mov     edx, [eax+4]
mov     [esp+8Ch+var_48], edx
mov     edx, [edi]
mov     eax, [eax+8]
mov     [esp+8Ch+var_44], eax
lea     eax, [esp+8Ch+var_4C]
push    eax
call    dword ptr [edx+0D8h]
test    al, al
jz      loc_424B23
mov     edx, [esi]
lea     eax, [esp+88h+var_4C]
push    eax
mov     ecx, esi
call    dword ptr [edx+48h]
mov     ecx, eax
mov     eax, [ecx]
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+88h+var_6C], ax
mov     eax, [ecx+4]
cdq
and     edx, 0FFh
add     eax, edx
lea     edx, [esp+88h+var_64]
sar     eax, 8
mov     word ptr [esp+88h+var_6C+2], ax
mov     ecx, dword ptr [esp+88h+var_6C]
mov     [esp+88h+var_64], ecx
push    edx
mov     ecx, 87F7E8h
call    CellCoord__To_CellObj
test    eax, eax
jz      short loc_424AEC
mov     ecx, [eax+140h]
test    ch, 1
jz      short loc_424AEC
mov     ecx, [ebp+0]
mov     edx, [ebp+4]
mov     ebp, [ebp+8]
mov     [esp+88h+var_4C], ecx
lea     ecx, [esp+88h+var_4C]
mov     [esp+88h+var_48], edx
mov     edx, [eax]
push    ecx
mov     ecx, eax
call    dword ptr [edx+48h]
cmp     ebp, [eax+8]
jle     short loc_424AEC
mov     edx, [edi]
push    0
mov     ecx, edi
call    dword ptr [edx+124h]
mov     eax, [edi]
push    1
mov     ecx, edi
mov     byte ptr [edi+8Ch], 1
call    dword ptr [eax+124h]

loc_424AEC:                             ; CODE XREF: TechnoClass__CreateUnit+FDE↑j
; TechnoClass__CreateUnit+FE9↑j ...
mov     ecx, [esi+180h]
mov     al, [ecx+1ECh]
test    al, al
jnz     short loc_424B0A
mov     edx, [edi]
push    0
push    0Fh
mov     ecx, edi
call    dword ptr [edx+1E8h]

loc_424B0A:                             ; CODE XREF: TechnoClass__CreateUnit+EC2↑j
; TechnoClass__CreateUnit+F26↑j ...
mov     eax, [esi]
mov     ecx, esi
mov     byte ptr [esi+179h], 1
call    dword ptr [eax+0F8h]
pop     edi
pop     esi
pop     ebp
pop     ebx
mov     esp, ebp
pop     ebp
retn
; ---------------------------------------------------------------------------

loc_424B23:                             ; CODE XREF: TechnoClass__CreateUnit+F8A↑j
dec     dword ptr [esi+0ACh]
pop     edi
pop     esi
pop     ebp
pop     ebx
mov     esp, ebp
pop     ebp
retn
; ---------------------------------------------------------------------------

loc_424B31:                             ; CODE XREF: TechnoClass__CreateUnit+E78↑j
mov     byte ptr [esi+179h], 1

loc_424B38:                             ; CODE XREF: TechnoClass__CreateUnit+8A7↑j
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+0F8h]

loc_424B42:                             ; CODE XREF: TechnoClass__CreateUnit+8D9↑j
; TechnoClass__CreateUnit+8F6↑j ...
pop     edi
pop     esi
pop     ebp
pop     ebx
mov     esp, ebp
pop     ebp
retn
*/

// ============================================================
// ProductionCompletionCallback (IDA: 0x424CE0, 543B)
// Called when production timer expires.
//
// Sections from IDA:
//  1. vt_entry_292(this, 2) — update production progress display
//  2. Audio: start WorkingSound on Audio7 or stop Audio7
//  3. Audio: stop Audio8 controller
//  4. If no completion threshold (type+664==0): create unit immediately
//  5. Special building launch: NukeSilo/ICBM/SpySat — launch anim + EVA + radar
// ============================================================
bool ProductionCompletionCallback(TechnoClass* techno)
{
    auto* building = (gamemd::BuildingClass*)(techno);
    auto* type = (gamemd::BuildingTypeClass*)(techno->GetTechnoType());
    if (!type) return false;

    // IDA: Section 1: vt_entry_292(this, 2) — update production progress display

    // IDA: Section 2-3: Audio management
    // G42.34: audioController3 = first controller @0x488 (position mapping;
    // semantic naming pending -- WorkingSound controller identity needs asm check)
    bool audio_active = (techno->turretRotateSoundController.AudioController_field_00 != 0);
    bool has_working_sound = (type->WorkingSound != -1);

    if (audio_active || !has_working_sound)
    {
        // IDA: Stop Audio7 (AudioController::Stop) — sub_405D40
    }
    else
    {
        // IDA: Start WorkingSound on Audio7 via StartAudioControllerAt
        // CoordStruct coords; fetchCoordinatesHere(&coords);
        // AudioController_StartAt(type->WorkingSound, coords, &building->Audio7)
    }
    // IDA: Stop Audio8 (AudioController::Stop)

    // IDA: Section 4: Immediate unit creation if no completion threshold
    if (!type->ProductionCompletionThreshold)
    {
        // IDA: CreateUnitOnCompletion(techno)
    }

    // IDA: Section 5: Special building launch (Nuke/ICBM/SpySat)
    // IDA: if (!audio_active && (type->ICBMLauncher || type->SpySat || type->NukeSilo)):
    if (!audio_active)
    {
        if (type->ICBMLauncher || type->SpySat || type->NukeSilo)
        {
            // IDA: cell = Coord::To_Cell(fetchCoordinatesHere())
            // IDA: building_idx = BuildingClass::FindByCellHash(cell) — sub_485010
            // IDA: if valid: EVA_Announce, optional launch animation (1-in-3 chance),
            //      PlaySoundEffectAt(coords, Rules[346]), House_AnnounceUpgrade,
            //      Radar::Update — sub_584550
        }
    }

    return true;
}

// ============================================================
// CreateUnitOnCompletion (IDA: 0x424F00, 583B)
// Creates unit at completion of production.
//
// Sections from IDA:
//  1. Get cell coordinates from building position
//  2. Foundation size offsets (type+668/672 via Building::GetFoundationSize)
//  3. Super weapon fire effects (type+716 → SW_CreateFireAt)
//  4. Construction delay check (vt_entry_456)
//  5. Branch: CreateUnitAtCoords_Timed or _Standard
// ============================================================
bool CreateUnitOnCompletion(TechnoClass* techno)
{
    auto* building = (gamemd::BuildingClass*)(techno);
    auto* type = (gamemd::BuildingTypeClass*)(techno->GetTechnoType());
    if (!type) return false;

    // IDA: Section 1: coords = fetchCoordinatesHere() / 256 → CellCoord::To_CellObj
    // CellStruct cell_coords = { coords.X / 256, coords.Y / 256 };
    // CellClass* cell = CellCoord::To_CellObj(&MapClass_Instance, &cell_coords);

    int build_time = 30;

    // IDA: Section 2: Foundation size offsets via vt_entry_108
    // if (vt_entry_108(this)):
    //   foundation_width = Building::GetFoundationSize(coords, type+664)[2/3]
    //   type+668 = foundation_width if -1
    //   type+672 = foundation_height if -1
    //   build_time = type+672
    (void)build_time;

    // IDA: Section 3: Super weapon fire effects (type+716/720)
    // IDA: if (type->field_716 != -1):
    //   for (int i = 0; i < type->field_720; ++i):
    //     SW_CreateFireAt(SW_Array[type+716], coords) — sub_62E430
    if (type->BuildingTypeClass_field_716 != -1)
    {
        for (int i = 0; i < type->BuildingTypeClass_field_720; ++i)
        {
            // IDA: SW_CreateFireAt(sw_array[type+716], coords)
        }
    }

    // IDA: Section 4-5: Construction delay check → unit creation
    // int delay = vt_entry_456(this) — returns < 30 for immediate creation
    // if (delay < 30):
    //   if (type+875 && type+877 && Random >= 0.5):
    //     EVA_Announce + CreateUnitAtCoords_Timed(coords, 300, 300, 1) or
    //     CreateUnitAtCoords_Timed(coords, foundation_width, build_time, 0)
    //   else:
    //     CreateUnitAtCoords_Standard(coords, foundation_width, build_time, 0)

    return false;
}

// ============================================================
// ConstructionPositionTracker (IDA: 0x425670, 1688B)
// Tracks building/pod position during construction.
// Called from CreateUnit pipeline.
//
// Key IDA logic:
//  1. Not production-blocked → start production timer
//  2. Compare current vs target position
//  3. Invalid target → Building::ComputePosition to calculate new target
//  4. Within range (distance <= 18): snap to target, check cell type
//  5. Out of range: angle calculation → vt_entry_436 adjust position
//  6. Cell walkability check at 3 neighbor cells
//  7. Direction angle → update production progress timer / mission
// ============================================================
void ConstructionPositionTracker(TechnoClass* techno)
{
    auto* building = (gamemd::BuildingClass*)(techno);
    auto* type = (gamemd::BuildingTypeClass*)(techno->GetTechnoType());
    if (!type) return;

    // IDA: Section 1: Start production timer if not blocked
    if (!building->ProductionBlocked)
    {
        building->ProductionFrame = (int)(CurrentFrame);
        building->ProductionSpeed = 0;
        building->ProductionRate = 0;
    }

    // IDA: Section 2-3: Target position management
    // Compare current location with target coords (&this->q840 region).
    // If target matches Map_InvalidCoord or ProductionBlocked:
    //   Building::ComputePosition → compute new target
    //   If still invalid: mark ProductionBlocked, set ProductionSpeed=1

    // IDA: Section 4: Distance check
    // Coord_Subtract(current_pos - target_pos)
    // if (Coord_Length(delta) > 18): far → angle calc, vt_entry_436 adjust
    // else: close → snap to target, check cell data[59], update retry counter

    // IDA: Section 5: Cell walkability check
    // If on surface (Z >= ground + threshold):
    //   Check 3 adjacent cells for walkability (cell_data[80] & 0x100)
    //   If all 3 blocked: set flag (&this->u32_234 = 1)

    // IDA: Section 6: Angle calculation and timer update
    // if (!ProductionBlocked && current != target):
    //   Math::CalcAngle(Y_delta, X_delta) → direction
    //   Math::RoundToInt(angle) → rotation steps
    //   rotation_steps = type+848 * calculated_steps
    //   CurrentMission = steps + (CurrentFrame/3 % type+848)
    //
    // if (ProductionBlocked):
    //   foundation_size = vt_entry_108(this).GetFoundationWidth() / 2 - 1
    //   if CurrentMission >= foundation_size: vt_entry_248 → complete
}

// ============================================================
// CreateUnitAtCoordsStandard (IDA: 0x6B59A0)
// Creates a unit at specified cell coordinates.
// Iterates BuildingTypeClass array, builds candidate list by walkability,
// applies size filters, random pick winner, creates via UnitClass_Create.
// ============================================================
static bool CreateUnitAtCoordsStandard(CoordStruct* coords, int time, bool special)
{
    if (!coords) return false;

    // IDA: Check if coords == Map_BottomRightCell → early return

    // IDA: Game_LockMutex
    // For each BuildingTypeClass in global instance array:
    //   if (instance->CanPlaceAtCoords flag at +673):
    //     if (Cell_IsWalkable(cell, special)):
    //       Add to DynamicVectorClass candidates (max 10)
    // Game_LockMutex (unlock)

    // IDA: Filter candidates by size constraints (field_664/668)
    // if (filtered count > 0):
    //   Random pick: Random::Range(0, filtered-1)
    //   UnitClass_Create(filtered[index], coords, -1)
    // elif (candidate count > 0):
    //   Random pick: Random::Range(0, candidate-1)
    //   UnitClass_Create(candidates[index], coords, -1)

    // IDA: Clean up dynamic vectors (delete[])

    return false;
}

// ============================================================
// CreateUnitAtCoordsTimed (IDA: 0x6B5C90)
// Same flow as Standard but checks entry+672 flag for timed placement.
// ============================================================
static bool CreateUnitAtCoordsTimed(CoordStruct* coords, int time, bool special)
{
    if (!coords) return false;

    // IDA: Same flow as Standard but:
    //   Filter: entry+672 flag (TimedCreate flag) instead of +673
    //   Additional time-based constraints
    //   Standard mode: (field != 1 || field_668 != 1) && (time <= 60 || special <= 50)
    //   Timed mode: (field > 1 && field_668 > 1) for special placement

    return false;
}

// ============================================================
// TechnoClass::Update — parent per-frame update (IDA: 0x6F3F40)
// Called by all TechnoClass subclasses.
// Sections: owner C4 check, particle/VFX system creation,
//           production display setup, type member copy.
// ============================================================

} // namespace game
} // namespace ra2

#include "object/techno.hpp"

namespace ra2 { namespace game {

// --- TechnoClass ---

HRESULT __stdcall TechnoClass::Load(IStream* stream) { return S_OK; }
HRESULT __stdcall TechnoClass::Save(IStream* stream, int clear_dirty) { return S_OK; }
bool TechnoClass::isUnitfactory() const { return false; }
bool TechnoClass::isCloakable() const { return false; }
bool TechnoClass::canScatter() const { return true; }
bool TechnoClass::belongsToATeam() const { return false; }
bool TechnoClass::shouldSelfHealOneStep() const { return false; }
bool TechnoClass::isVoxel() const { return false; }
bool TechnoClass::canSelfRepair() { return false; }
bool TechnoClass::shouldBeCloaked() const { return false; }
bool TechnoClass::shouldNotBeCloaked() const { return false; }
DirStruct* TechnoClass::getFacing(DirStruct* buffer) const { return nullptr; }
bool TechnoClass::isArmed() const { return false; }
void TechnoClass::onSpawnComplete() const {}
double TechnoClass::getStoragePercentage() const { return 0.0; }
int TechnoClass::getPipFillLevel() const { return 0; }
int TechnoClass::getRefund() const { return 0; }
int TechnoClass::getThreatValue() const { return 0; }
bool TechnoClass::canBeAttacked(uint32_t a) { return false; }
uint32_t TechnoClass::getSpecialValue(uint32_t a, uint32_t b) { return 0; }
bool TechnoClass::canCrush(uint32_t a) { return false; }
int TechnoClass::getCrewCount() const { return 0; }
int TechnoClass::getAntiAirValue() const { return 0; }
int TechnoClass::getAntiArmorValue() const { return 0; }
int TechnoClass::getAntiInfantryValue() const { return 0; }
void TechnoClass::gotHijacked() {}
int TechnoClass::selectNavalTargeting(AbstractClass* target) const { return 0; }
int TechnoClass::getZAdjustment() const { return 0; }
ZGradient TechnoClass::GetZGradient() const { return (ZGradient)(-1); }
CellStruct* TechnoClass::GetSomeCellStruct() const { return nullptr; }
void TechnoClass::SetSomeCellStruct(CellStruct* buffer) {}
CellStruct* TechnoClass::getOccupiedCell(CellStruct* buffer, uint32_t a, uint32_t b) const { return nullptr; }
CoordStruct* TechnoClass::getTurretCoords(CoordStruct* buffer, uint32_t a) const { return nullptr; }
uint32_t TechnoClass::getWeaponRangeValue(uint32_t a, uint32_t b) const { return 0; }
DirStruct* TechnoClass::GetRealFacing(DirStruct* buffer) const { return nullptr; }
// 0x707d20
InfantryTypeClass* TechnoClass::GetCrew() const { return nullptr; }
// G42.34 T10: orphan raw body removed (its def is the stub above; the body
// was stranded at namespace scope by the L-fix close-stub wave and never compiled).
// 0x4df1e0
int TechnoClass::vt_entry_4B4() {
  return this->u32_5C4; /*0x4df1e6*/
}
// 0x4df1f0
int TechnoClass::vt_entry_4B8() { return 0; }
// G42.34 T10: orphan raw body removed (def is the stub above; body was
// stranded at namespace scope by the L-fix close-stub wave and never compiled).
// 0x5f7900
int TechnoClass::FindMatchingUnit() { return -1; }
// G42.34 T10: orphan raw body removed (def is the stub above; body was
// stranded at namespace scope by the L-fix close-stub wave and never compiled).
// 0x659540
int RadBeam::drawMindControlPips(int a2) {
  ((unsigned int *)this)[1] = a2; /*0x659544*/
  return a2; /*0x659547*/
}
// 0x659550
char RadBeam::drawPassengerPips(char a2) {
  IDA_LOBYTE(((unsigned int *)this)[2]) = a2; /*0x659554*/
  return a2; /*0x659557*/
}
// 0x633d30
int TechnoClass::ClearScriptPlanningData() { return 0; }
// G42.34 T10: orphan raw body removed (def is the stub above; body was
// stranded at namespace scope by the L-fix close-stub wave and never compiled).
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
// 0x6f3820
int TechnoClass::CanTargetHouse() const { return false; }  // L-fix: close stub
// G42.34 T10: orphan raw body removed (its def is the stub above; the body
// was stranded at namespace scope by the L-fix close-stub wave and never compiled).
int TechnoClass::sub_7441B0() { return 0; }  // L-fix: close stub
int TechnoClass::sub_744180() { return 0; }  // L-fix: close stub
int TechnoClass::sub_744210() { return 0; }  // L-fix: close stub
int TechnoClass::sub_744270() { return 0; }  // L-fix: close stub
int TechnoClass::sub_744720() { return 0; }  // L-fix: close stub
int TechnoClass::sub_7440B0() { return 0; }  // L-fix: close stub
int TechnoClass::sub_744100() { return 0; }  // L-fix: close stub
// 0x743190
int TechnoClass::SelectAutoTargetWithGarrison() { return 0; }
// 0x732050
int TechnoClass::GatherAllBuildings() { return 0; }

} // namespace game
} // namespace ra2
