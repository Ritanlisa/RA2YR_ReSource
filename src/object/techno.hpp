#pragma once

#include "radio.hpp"
#include "core/vector.hpp"
#include "fundamentals.hpp"
#include "type/weapon_type.hpp"

namespace ra2 {
namespace game {

using ::gamemd::DynamicVectorClass;
using ::gamemd::ProgressTimer;
using ::gamemd::TurretControl;  // X27: member-decl type supply
using ::gamemd::OwnedTiberiumStruct;  // X27: member-decl type supply

enum class CloakState : int;
enum class FireError : int;
enum class Rank : int;
enum class TargetFlags : unsigned int;
enum class ZGradient : int;
enum class Ability : int;
enum class AIDifficulty : unsigned int;
enum class NetworkEvents : unsigned char;
struct WeaponStruct;
class AirstrikeClass;
class AnimClass;
class BulletClass;
class BuildingClass;
class CaptureManagerClass;
class CellClass;
class FootClass;
class InfantryTypeClass;
class LaserDrawClass;
class ObjectTypeClass;
class ParticleSystemClass;
class PlanningTokenClass;
class RadBeam;
class SlaveManagerClass;
class SpawnManagerClass;
class TeamClass;
class TemporalClass;
class WaveClass;

struct FlashData {
    int32_t DurationRemaining;
    bool    FlashingNow;
    uint8_t padding[3];
};

class PassengersClass {
public:
    int32_t     NumPassengers;
    FootClass*  FirstPassenger;
    int AddObject(ObjectClass *a2);  // 0x4733a0 (CellClass::AddObject 同体向量加, passengers@0x114 thiscall)
};

struct VeterancyStruct {
    float Veterancy;

bool IsRookie();   // 0x74FFC0
    bool IsVeteran();  // 0x74FF90
    bool IsElite();    // 0x750010
};



struct RecoilData {
    TurretControl   Turret;
    float           TravelPerFrame;
    float           TravelSoFar;
    uint32_t        State;
    int32_t         TravelFramesLeft;
};

struct TransitionTimer {
    uint32_t data[3];
};

template <typename T>
struct IndexBitfieldT {
    T* Items;
};



class TechnoClass : public RadioClass {

public:
    // --- g57w20m20c supply (csp_canon TechnoClass truth) ---
    void* q0A4;           // 0xA4
    void* q0AC;           // 0xAC
    unsigned int q0B0;    // 0xB0
    unsigned int q0EC;    // 0xEC

public:
    static constexpr AbstractType kObjectDeriveId = static_cast<AbstractType>(0x1);


    virtual ~TechnoClass() = default;  // X134: slot 8 = 0x7106E0 (deleting dtor; 0x6F4500 = complete dtor)
    // === X134: TechnoClass inherited-range overrides (binary 0x7F4960 slots 0-160 where RVA != RadioClass) ===

    virtual HRESULT __stdcall Load(IStream* stream) override;  // X134 slot 5 = 0x70BF50 (def pending)
    virtual HRESULT __stdcall Save(IStream* stream, int clear_dirty) override;  // X134 slot 6 = 0x70C250 (def pending)
    virtual int PerFrameUpdate() override;  // X134 slot 9 = 0x6F3F40 (signals: Update)
    virtual int Unlink(int a1, int a2) override;  // X134 slot 10 = 0x7077C0 (signals: NotifyExpired)
    virtual int ProcessPower() override;  // X134 slot 13 = 0x70C270 (signals: PowerBeginUpdate; base arity 0 per I525)
    virtual int computeDistanceSquared() override;  // X134 slot 14 = 0x6F9DB0 (signals: GetID)
    virtual int COMStub_Return0_15() override;  // X134 slot 15 = 0x6F9DC0 (signals: GetTarget)
    virtual int DetectCloaked() override;  // X134 slot 23 = 0x6F9E50 (signals: MovementAI::Begin)
    virtual int ResetPointerIfMatch(int a1) override;  // X134 slot 24 = 0x710410 (signals: ClearPointerRefs)
    virtual bool COMStub_Return0_25() override;  // X134 slot 25 = 0x6F32D0 (signals: CanInitiateSell)
    virtual int COMStub_26(int a1, int a2) override;  // X134 slot 26 = 0x703860 (signals: UpdatePowerDrain)
    virtual int COMStub_28(int a1, int a2, int a3) override;  // X134 slot 28 = 0x700600 (signals: HandleCursor)
    virtual int COMStub_29(int a1, int a2) override;  // X134 slot 29 = 0x6FFEC0 (signals: HandleCursorClick)
    virtual int COMStub_Return0_33() override;  // X134 slot 33 = 0x6F3270 (signals: Vt34Thunk)
    virtual int COMStub_Ret2147483647_35() override;  // X134 slot 35 = 0x708B30 (signals: GetTypeVt28)
    virtual bool COMStub_Return0_37() override;  // X134 slot 37 = 0x701140 (signals: InfantryClass::CheckHealthDiff)
    virtual bool COMStub_Return0_39() override;  // X134 slot 39 = 0x7010D0 (signals: HasValidWeapon)
    virtual bool COMStub_Return0_40() override;  // X134 slot 40 = 0x700C40 (signals: CanReceivePassengers)
    virtual int GetDrawPosition(int a1, int a2, int a3, int a4, int a5) override;  // X134 slot 44 = 0x6F3AD0 (signals: ComputeTransform; 5 stack args)
    virtual bool COMStub_Return0_49() override;  // X134 slot 49 = 0x41C010 (signals: AircraftClass::CheckReloadState; semantic: IsDisguised (demoted twin))
    virtual int COMStub_50(int a1) override;  // X134 slot 50 = 0x41C020 (signals: AircraftClass::CheckReloadTimer)
    virtual AbstractClass** Undeploy() override;  // X134 slot 53 = 0x6F6AC0 (signals: CleanupDeploy; base ret AbstractClass**)
    virtual AbstractClass** Deploy(int a1, int a2) override;  // X134 slot 54 = 0x6F6CA0 (signals: FinishDeploy; base ret AbstractClass**, 2 args)
    virtual int COMStub_Return0_56(int a1) override;  // X134 slot 56 = 0x702D40 (signals: RegisterKill)
    virtual int COMStub_Return0_57(int a1) override;  // X134 slot 57 = 0x703230 (signals: InfantryClass::RegisterKill)
    virtual int COMStub_Return0_63() override;  // X134 slot 63 = 0x703850 (signals: Vt279Thunk0)
    virtual int COMStub_64(int a1, int a2) override;  // X134 slot 64 = 0x7099D0 (signals: IPersistStream::IsDirty)
    virtual int COMStub_Return0_67(int a1, int a2) override;  // X134 slot 67 = 0x6F60D0 (signals: BuildingClass::DrawSelectionBox)
    virtual int COMStub_Return0_68(int a1, int a2) override;  // X134 slot 68 = 0x6F5190 (signals: DrawHealthBar (demoted twin keeps semantic body))
    virtual int COMStub_Return0_71() override;  // X134 slot 71 = 0x6F4A40 (signals: CheckPlayerOwned)
    virtual int COMStub_Return0_72(int a1, int a2) override;  // X134 slot 72 = 0x70ADC0 (signals: RevealAreaSmall)
    virtual int UpdateProductionDisplay(int a1) override;  // X134 slot 73 = 0x6F4A70 (signals: UpdateProdWithSound)
    virtual int COMStub_79(int a1, int a2) override;  // X134 slot 79 = 0x6FC030 (signals: CanMoveToCell)
    virtual int COMStub_Return0_82(int a1) override;  // X134 slot 82 = 0x6F9DD0 (signals: SetTargetIfAllowed)
    virtual int HandleSelection() override;  // X134 slot 83 = 0x6FBFA0 (signals: ExecuteMoveCommand)
    virtual int COMStub_Return0_85(int a1, int a2, int a3) override;  // X134 slot 85 = 0x70E2B0 (signals: IronCurtain)
    virtual int COMStub_Return0_86() override;  // X134 slot 86 = 0x70E340 (signals: ResetTimer2)
    virtual int COMStub_Return0_87(int a1) override;  // X134 slot 87 = 0x70E300 (signals: ResetTimer)
    virtual bool COMStub_Return0_88() override;  // X134 slot 88 = 0x41BF40 (signals: FrameTimer::HasRemaining)
    virtual int COMStub_89(int a1, int a2) override;  // X134 slot 89 = 0x6F7970 (signals: CheckCellPassable3)
    virtual int COMStub_90(int a1) override;  // X134 slot 90 = 0x7012C0 (signals: FindLowestDamage)
    virtual int CreateDestructionEffect(int a1, int a2, int a3, int a4, int a5, int a6, int a7) override;  // X134 slot 91 = 0x701900 (signals: ReceiveDamage_Shield; 7 stack args)
    virtual int COMStub_Return0_92() override;  // X134 slot 92 = 0x710460 (signals: FreeCaptureManager)
    virtual int COMStub_Return0_96() override;  // X134 slot 96 = 0x707DD0 (signals: ComputeTotalPowerDrain)
    virtual int COMStub_Return0_99(int a1) override;  // X134 slot 99 = 0x6F5090 (signals: FootClass::CompleteProduction)
    virtual int ProcessInputKey(int a1, int a2, int a3) override;  // X134 slot 101 = 0x6F4AB0 (signals: Mission_RepairDispatch; 3 stack args)
    virtual int IsNotNull(int a1) override;  // X134 slot 102 = 0x6F4960 (signals: SetHouseFlag)
    virtual bool COMStub_Return0_117() override;  // X134 slot 117 = 0x70C5B0 (signals: GetShroudByte)
    virtual bool COMStub_Return0_118() override;  // X134 slot 118 = 0x70C5C0 (signals: GetFogByte)
    virtual bool COMStub_Return0_119() override;  // X134 slot 119 = 0x70C5D0 (signals: HasSubObject)
    virtual int getCoordCenter2() override;  // X134 slot 120 = 0x70C5F0 (signals: IsNotShrouded)
    virtual int COMStub_Return0_121() override;  // X134 slot 121 = 0x705D70 (signals: GetBuildAnim)
    virtual int COMStub_125(int a1, int a2, int a3) override;  // X134 slot 125 = 0x7013A0 (signals: OverrideMission_SyncLog; 3 stack args)
    virtual int COMStub_126() override;  // X134 slot 126 = 0x7013E0 (signals: BuildingClass::CheckOccupantState)

    // ========================================================================
    // X134: TechnoClass own virtuals -- binary table 0x7F4960 slots [161]-[308] (148)
    // declaration order = slot order; arity = Capstone first-retn/4.
    // ========================================================================
    virtual int StubReturnFalse_161();  // X134 slot 161 = 0x41BEE0
    virtual int CheckCellPassability();  // X134 slot 162 = 0x70C5A0
    virtual int IsNotAircraftOrBuilding() const;  // X134 slot 163 = 0x6F3280
    virtual int StubReturnFalse_164();  // X134 slot 164 = 0x459D80
    virtual bool ShouldSelfHealOneStep() const;  // X134 slot 165 = 0x70BE80 (renamed from shouldSelfHealOneStep)
    virtual int IsInvisible();  // X134 slot 166 = 0x6F9E10
    virtual int selectTarget();  // X134 slot 167 = 0x41BEF0
    virtual bool ShouldBeCloaked() const;  // X134 slot 168 = 0x6FBDC0 (renamed from shouldBeCloaked)
    virtual bool ShouldNotBeCloaked() const;  // X134 slot 169 = 0x6FBC90 (renamed from shouldNotBeCloaked)
    virtual int GetAnimationValue() const;  // X134 slot 170 = 0x4E0150
    virtual int HasActiveParam() const;  // X134 slot 171 = 0x701120
    virtual int CheckCliffTransition() const;  // X134 slot 172 = 0x70C620
    virtual int ComputeAverageValue() const;  // X134 slot 173 = 0x708BC0
    virtual int GetAmmoCount() const;  // X134 slot 174 = 0x708C30
    virtual int Vt46Thunk();  // X134 slot 175 = 0x70ADA0
    virtual int GetCostMultiplier(int a2, int a3, int a4, int a5, int a6) const;  // X134 slot 176 = 0x708B40
    virtual int MissionStubReturnZero4();  // X134 slot 177 = 0x459D90
    virtual int GetFiringAngle() const;  // X134 slot 178 = 0x6FDA00
    virtual int CheckPlacementTileMatch() const;  // X134 slot 179 = 0x707F60
    virtual int GetCrewCount() const;  // X134 slot 180 = 0x6F3950 (renamed from getCrewCount)
    virtual int StubReturnFalse2_181();  // X134 slot 181 = 0x41BF00
    virtual int StubReturnFalse3_182();  // X134 slot 182 = 0x41BF10
    virtual int StubReturnFalse4_183();  // X134 slot 183 = 0x41BF20
    virtual int StubReturnTrue3();  // X134 slot 184 = 0x70D980
    virtual int SelectWeapon();  // X134 slot 185 = 0x6F3330
    virtual int CanTargetHouse() const;  // X134 slot 186 = 0x6F3820
    virtual int GetDrawHeight();  // X134 slot 187 = 0x704350
    virtual int MissionStubReturnZero5();  // X134 slot 188 = 0x459DA0
    virtual int ClearLimpetCheck();  // X134 slot 189 = 0x459DB0
    virtual int COMStub_Return0_190();  // X134 slot 190 = 0x459DC0
    virtual int GetCellCoordsV2() const;  // X134 slot 191 = 0x70AD50
    virtual void* GetTurretOffset(void* a1, int a2);  // X134 slot 192 = 0x6F3D60
    virtual int GetGlobalValue(int* outValue) const;  // X134 slot 193 = 0x708C10
    virtual int Vt170();  // X134 slot 194 = 0x708D70
    virtual int GetCrew() const;  // X134 slot 195 = 0x707D20 (X144c: return int per raw_decomp fn_70.c — Rules side-index, not a pointer)
    virtual int IsDeadOrInactive() const;  // X134 slot 196 = 0x700D10
    virtual int CanAttack() const;  // X134 slot 197 = 0x700D50
    virtual int CalculateROF();  // X134 slot 198 = 0x6FCFA0
    virtual int ComputeScanDistance() const;  // X134 slot 199 = 0x707E60
    virtual int StubReturnFalse2_200();  // X134 slot 200 = 0x459DD0
    virtual int ShouldScanArea() const;  // X134 slot 201 = 0x70D1D0
    virtual int IsPlayerCellPassable() const;  // X134 slot 202 = 0x70D420
    virtual int IsCellPassableFor() const;  // X134 slot 203 = 0x70D460
    virtual int vt_entry_1FC();  // X134 slot 204 = 0x41BF30
    virtual int COMStub_Return0_205();  // X134 slot 205 = 0x459DE0
    virtual int FindBridgeCell();  // X134 slot 206 = 0x70F8F0
    virtual int StubReturnFalse3_207();  // X134 slot 207 = 0x459DF0
    virtual int StubReturnFalse4_208();  // X134 slot 208 = 0x459E00
    virtual int StubReturnFalse10();  // X134 slot 209 = 0x459E10
    virtual int StubReturnFalse11();  // X134 slot 210 = 0x459E20
    virtual int StubReturnFalse12();  // X134 slot 211 = 0x459E30
    virtual int StubReturnFalse11_212();  // X134 slot 212 = 0x701190
    virtual int SetMoveDestination(int a1);  // X134 slot 213 = 0x708D90
    virtual int GetSecondaryTargetOrFallback() const;  // X134 slot 214 = 0x709020
    virtual int GetTertiaryTargetOrFallback() const;  // X134 slot 215 = 0x709060
    virtual int SelectRandomTarget();  // X134 slot 216 = 0x708EB0
    virtual int GetPrimaryTargetOrFallback() const;  // X134 slot 217 = 0x708DC0
    virtual int ResponseMove_Pickup();  // X134 slot 218 = 0x708FC0
    virtual int PickAlternateTarget();  // X134 slot 219 = 0x708E00
    virtual int VoiceAttack(ObjectClass* target);  // X134 slot 220 = 0x7090A0
    virtual int RecordEvent();  // X134 slot 221 = 0x6FFE00
    virtual int ExecuteMissionCmd();  // X134 slot 222 = 0x6FFBE0
    virtual int HasPassengers() const;  // X134 slot 223 = 0x70EFD0
    virtual int StubReturnFalse13();  // X134 slot 224 = 0x459E40
    virtual int StubReturnFalse5();  // X134 slot 225 = 0x41BF80
    virtual int StubReturnFalse6();  // X134 slot 226 = 0x41BF90
    virtual int GetMaxSpeed() const;  // X134 slot 227 = 0x70EFE0
    virtual int DecCounter();  // X134 slot 228 = 0x70D670
    virtual int OnCellPlacementComplete();  // X134 slot 229 = 0x710670
    virtual int CanDamageTarget() const;  // X134 slot 230 = 0x70EF00
    virtual int BeginFiringSequence();  // X134 slot 231 = 0x709820
    virtual int ProcessDeploymentState();  // X134 slot 232 = 0x6FCD40
    virtual int IsInRange() const;  // X134 slot 233 = 0x6F7660
    virtual int ValidateTarget(TechnoClass* target, int weapon_index) const;  // X134 slot 234 = 0x6F77B0
    virtual int CheckCellPassable2(int a2) const;  // X134 slot 235 = 0x6F7780
    virtual int CheckCellPassable() const;  // X134 slot 236 = 0x6F7930
    virtual int CheckAndFireAtTarget();  // X134 slot 237 = 0x6F78D0
    virtual int vt_entry_68();  // X134 slot 238 = 0x4C9150
    virtual int Vt240Thunk();  // X134 slot 239 = 0x6FC090
    virtual int ReadINI(int a1, int a2, int a3);  // X134 slot 240 = 0x6FC0B0
    virtual int SelectAutoTarget_Start_AU();  // X134 slot 241 = 0x6F8DF0
    virtual int AssignTarget_SyncLog(int syncFlag);  // X134 slot 242 = 0x6FCDB0
    virtual int FireWeapon();  // X134 slot 243 = 0x6FDD50
    virtual int SetIdleState();  // X134 slot 244 = 0x70F850
    virtual int ProcessCapture();  // X134 slot 245 = 0x7014A0
    virtual int ComputeAimVector();  // X134 slot 246 = 0x70B280
    virtual int StubReturnFalse14();  // X134 slot 247 = 0x459E50
    virtual int GetVt252Byte() const;  // X134 slot 248 = 0x70DD50
    virtual int CheckTypeFlag1681();  // X134 slot 249 = 0x70DD70
    virtual int vt_entry_3E8();  // X134 slot 250 = 0x70DD90
    virtual int CheckTypeFlag1681_2();  // X134 slot 251 = 0x70DDA0
    virtual int Vt249to254();  // X134 slot 252 = 0x70E120
    virtual int UpdatePowered();  // X134 slot 253 = 0x70E1A0
    virtual int SelectVocOrSfx(int a1);  // X134 slot 254 = 0x70E140
    virtual bool ProcessFrame();  // X134 slot 255 = 0x41BFA0
    virtual int StubReturnFalse7();  // X134 slot 256 = 0x41BFB0
    virtual int StubReturnFalse8();  // X134 slot 257 = 0x41BFC0
    virtual int StubReturnFalse9();  // X134 slot 258 = 0x41BFD0
    virtual int HandleSellOrRepair();  // X134 slot 259 = 0x701410
    virtual int UpdateLocomotion(int a1, int a2);  // X134 slot 260 = 0x6FB740
    virtual int RevealShroud();  // X134 slot 261 = 0x6FB170
    virtual int RemoveShroud();  // X134 slot 262 = 0x6FB470
    virtual int UpdateBodyTilt();  // X134 slot 263 = 0x70B570
    virtual int PushNearbyUnits();  // X134 slot 264 = 0x6F4EB0
    virtual int StepAnimFrame();  // X134 slot 265 = 0x6FB010
    virtual int vt_entry_428();  // X134 slot 266 = 0x41BFE0
    virtual int GetBridgeAwareCoords();  // X134 slot 267 = 0x705CA0
    virtual int IsNotBusy() const;  // X134 slot 268 = 0x705D50
    virtual int vt_entry_434();  // X134 slot 269 = 0x41BFF0
    virtual int COMStub_Return0_270();  // X134 slot 270 = 0x459E60
    virtual int GetAnimationFlags() const;  // X134 slot 271 = 0x70ED80
    virtual int CheckFireCooldown() const;  // X134 slot 272 = 0x70EE30
    virtual int UpdateState();  // X134 slot 273 = 0x706640
    virtual int vt_entry_448();  // X134 slot 274 = 0x6F60C0
    virtual int DrawHealthBar();  // X134 slot 275 = 0x6F64A0
    virtual int DrawPips();  // X134 slot 276 = 0x709A90
    virtual int DrawVeterancy();  // X134 slot 277 = 0x70A990
    virtual int DrawPowerIndicator();  // X134 slot 278 = 0x70AA60
    virtual int TransitionEffectState(int a2);  // X134 slot 279 = 0x7036C0
    virtual int StartEffectAudio();  // X134 slot 280 = 0x703770
    virtual int GetRangeModifier() const;  // X134 slot 281 = 0x70D190
    virtual int StubReturnTrue2();  // X134 slot 282 = 0x41C000
    virtual int ActivateEffect();  // X134 slot 283 = 0x70E280
    virtual int CheckAction();  // X134 slot 284 = 0x41C030
    virtual int IsTimerExpired() const;  // X134 slot 285 = 0x7099E0
    virtual int StubReturnFalse10_286();  // X134 slot 286 = 0x41C040
    virtual int COMStub_Return0_287();  // X134 slot 287 = 0x709A20
    virtual int Stub(void *a2, int a3);  // X134 slot 288 = 0x709A30
    virtual int CompleteFactoryProduction(int a2, int a3);  // X134 slot 289 = 0x709A40
    virtual int ScanForEnemies();  // X134 slot 290 = 0x70AF50
    virtual int RevealAreaConditional();  // X134 slot 291 = 0x70B1D0
    virtual int vt_entry_68_292();  // X134 slot 292 = 0x4C9150
    virtual int RadarUpdateOn();  // X134 slot 293 = 0x70CC90
    virtual int RadarUpdateOff();  // X134 slot 294 = 0x70CCC0
    virtual int RevealOwnCell();  // X134 slot 295 = 0x70CCF0
    virtual int OnEnterCell();  // X134 slot 296 = 0x70D990
    virtual int ClearUnknownFlag();  // X134 slot 297 = 0x70F000
    virtual int COMStub_Return0_298();  // X134 slot 298 = 0x70F010
    virtual int StubReturnFalse5_299();  // X134 slot 299 = 0x70F020
    virtual int StubReturnFalse6_300();  // X134 slot 300 = 0x70F030
    virtual int checkMovementRestrictions();  // X134 slot 301 = 0x70F040
    virtual int ProcessCellClearance();  // X134 slot 302 = 0x70F050
    virtual int GetTypeVt40() const;  // X134 slot 303 = 0x70F070
    virtual int GetTypeVt41();  // X134 slot 304 = 0x70F090
    virtual int StubReturnFalse7_305();  // X134 slot 305 = 0x70F0E0
    virtual int StubReturnFalse8_306();  // X134 slot 306 = 0x70F0F0
    virtual int COMStub_Return0_307();  // X134 slot 307 = 0x70F100
    virtual int StubReturnFalse9_308();  // X134 slot 308 = 0x70F110

    // wrapper: delegates to TechnoClass::DTOR at 0x6F4500
    bool isUnitfactory() const;
    // wrapper: delegates to TechnoClass::DTOR at 0x6F4500
    bool isCloakable() const;
    // wrapper: delegates to TechnoClass::DTOR at 0x6F4500
    bool canScatter() const;
    // wrapper: delegates to TechnoClass::DTOR at 0x6F4500
    bool belongsToATeam() const;
    // wrapper: delegates to TechnoClass::ShouldSelfHealOneStep at 0x70BE80
    bool isVoxel() const;
    bool canSelfRepair();  // 0x70FB50
    bool IsDisguised() const;  // 0x41C010 (ptr_0 slot 196, all Techno-family tables share this impl)
    // wrapper: delegates to TechnoClass::ShouldNotBeCloaked at 0x6FBC90
    DirStruct* getFacing(DirStruct* buffer) const;
    // wrapper: delegates to TechnoClass::ShouldNotBeCloaked at 0x6FBC90
    bool isArmed() const;
    // wrapper: delegates to TechnoClass::ShouldNotBeCloaked at 0x6FBC90
    void onSpawnComplete() const;
    // wrapper: delegates to TechnoClass::ShouldNotBeCloaked at 0x6FBC90
    double getStoragePercentage() const;
    // wrapper: delegates to TechnoClass::ShouldNotBeCloaked at 0x6FBC90
    int getPipFillLevel() const;
    // design: virtual function, no binary implementation matched in IDA
    int getRefund() const;
    int getThreatValue() const;  // 0x4DED70
    // wrapper: delegates to TechnoClass::GetThreatValue at 0x4DED70
    bool canBeAttacked(uint32_t a);
    uint32_t getSpecialValue(uint32_t a, uint32_t b);
    bool canCrush(uint32_t a);
    // wrapper: delegates to TechnoClass::GetCrewCount at 0x6F3950
    int getAntiAirValue() const;
    // wrapper: delegates to TechnoClass::GetCrewCount at 0x6F3950
    int getAntiArmorValue() const;
    // wrapper: delegates to TechnoClass::GetCrewCount at 0x6F3950
    int getAntiInfantryValue() const;
    // wrapper: delegates to TechnoClass::GetCrewCount at 0x6F3950
    void gotHijacked();
    // wrapper: delegates to TechnoClass::GetCrewCount at 0x6F3950
    int selectNavalTargeting(AbstractClass* target) const;
    // design: virtual function, no binary implementation matched in IDA
    int getZAdjustment() const;
    // design: virtual function, no binary implementation matched in IDA
    ZGradient GetZGradient() const;
    // design: virtual function, no binary implementation matched in IDA
    CellStruct* GetSomeCellStruct() const;
    // design: virtual function, no binary implementation matched in IDA
    void SetSomeCellStruct(CellStruct* buffer);
    // design: virtual function, no binary implementation matched in IDA
    CellStruct* getOccupiedCell(CellStruct* buffer, uint32_t a, uint32_t b) const;
    // design: virtual function, no binary implementation matched in IDA
    CoordStruct* getTurretCoords(CoordStruct* buffer, uint32_t a) const;
    // design: virtual function, no binary implementation matched in IDA
    uint32_t getWeaponRangeValue(uint32_t a, uint32_t b) const;
    // design: virtual function, no binary implementation matched in IDA
    DirStruct* GetRealFacing(DirStruct* buffer) const;
    // wrapper: delegates to TechnoClass::GetCrew at 0x707D20
    bool isInAirAlt() const;
    // wrapper: delegates to TechnoClass::GetCrew at 0x707D20
    bool CanDeploySlashUnload() const;
    // design: virtual function, no binary implementation matched in IDA
    int GetROF(int weapon) const;
    int GetGuardRange(int unknown) const;
    // wrapper: delegates to TechnoClass::GetWeaponRange at 0x773070
    bool canEnterTransport() const;
    // wrapper: delegates to TechnoClass::GetWeaponRange at 0x773070
    bool IsRadarVisible(int* out_detection) const;
    // wrapper: delegates to TechnoClass::GetWeaponRange at 0x773070
    bool IsSensorVisibleToPlayer() const;
    // wrapper: delegates to TechnoClass::GetWeaponRange at 0x773070
    bool IsSensorVisibleToHouse(HouseClass* house) const;
    // wrapper: delegates to TechnoClass::GetWeaponRange at 0x773070
    bool IsEngineer() const;
    // design: virtual function, no binary implementation matched in IDA
    void ProceedToNextPlanningWaypoint();
    // design: virtual function, no binary implementation matched in IDA
    uint32_t ScanForTiberium(uint32_t a, uint32_t b, uint32_t c) const;
    // design: virtual function, no binary implementation matched in IDA
    bool EnterGrinder();
    // design: virtual function, no binary implementation matched in IDA
    bool EnterBioReactor();
    // design: virtual function, no binary implementation matched in IDA
    bool EnterTankBunker();
    // design: virtual function, no binary implementation matched in IDA
    bool EnterBattleBunker();
    // design: virtual function, no binary implementation matched in IDA
    bool GarrisonStructure();
    // design: virtual function, no binary implementation matched in IDA
    bool isPowerOnline() const;
    // design: virtual function, no binary implementation matched in IDA
    void QueueVoice(int idx_voc);
    // design: virtual function, no binary implementation matched in IDA
    int VoiceEnter();
    // design: virtual function, no binary implementation matched in IDA
    int VoiceHarvest();
    // design: virtual function, no binary implementation matched in IDA
    int VoiceSelect();
    // design: virtual function, no binary implementation matched in IDA
    int VoiceCapture();
    // design: virtual function, no binary implementation matched in IDA
    int VoiceMove();
    // design: virtual function, no binary implementation matched in IDA
    int VoiceDeploy();
    // wrapper: delegates to TechnoClass::VoiceAttack at 0x7090A0
    bool ClickedEvent(NetworkEvents event);
    // wrapper: delegates to TechnoClass::VoiceAttack at 0x7090A0
    bool ClickedMission(Mission mission, ObjectClass* target, CellClass* target_cell, CellClass* nearest_target_cell);
    // wrapper: delegates to TechnoClass::VoiceAttack at 0x7090A0
    bool isUnderEmp() const;
    // wrapper: delegates to TechnoClass::VoiceAttack at 0x7090A0
    bool isParalyzed() const;
    // wrapper: delegates to TechnoClass::VoiceAttack at 0x7090A0
    bool canCheer() const;
    // design: virtual function, no binary implementation matched in IDA
    void Cheer(bool force);
    // design: virtual function, no binary implementation matched in IDA
    int GetDefaultSpeed() const;
    // design: virtual function, no binary implementation matched in IDA
    void DecreaseAmmo();
    // design: virtual function, no binary implementation matched in IDA
    void AddPassenger(FootClass* passenger);
    // design: virtual function, no binary implementation matched in IDA
    bool CanDisguiseAs(AbstractClass* target) const;
    // design: virtual function, no binary implementation matched in IDA
    bool TargetAndEstimateDamage(uint32_t a, uint32_t b);
    // design: virtual function, no binary implementation matched in IDA
    uint32_t getDamageReduction();
    // design: virtual function, no binary implementation matched in IDA
    bool TriggersCellInset(AbstractClass* target);
    bool IsCloseEnough(AbstractClass* target, int weapon_idx) const;
    // wrapper: delegates to TechnoClass::IsCloseEnoughToBuilding at 0x70D590
    bool IsCloseEnoughToAttack(AbstractClass* target) const;
    // wrapper: delegates to TechnoClass::IsCloseEnoughToBuilding at 0x70D590
    bool IsCloseEnoughToAttackCoords(const CoordStruct& coords) const;
    uint32_t getSightRange(uint32_t a) const;  // 0x717800
    // design: pure virtual function, no binary implementation
    void Destroyed(ObjectClass* killer);
    // wrapper: delegates to TechnoClass::GetSightRange at 0x717800
    FireError GetFireErrorWithoutRange(AbstractClass* target, int weapon_index) const;
    // wrapper: delegates to TechnoClass::GetSightRange at 0x717800
    FireError GetFireError(AbstractClass* target, int weapon_index, bool ignore_range) const;
    CellClass* SelectAutoTarget(TargetFlags flags, int current_threat, bool only_target_house_enemy);
    void SetTarget(AbstractClass* target);
    BulletClass* Fire(AbstractClass* target, int weapon_index);  // 0x70ECE0
    // wrapper: delegates to TechnoClass::Fire at 0x70ECE0
    void Guard();
    // wrapper: delegates to TechnoClass::Fire at 0x70ECE0
    bool SetOwningHouse(HouseClass* house, bool announce = true);
    // wrapper: delegates to TechnoClass::Fire at 0x70ECE0
    void onHouseChange(uint32_t a, uint32_t b, uint32_t c);
    // wrapper: delegates to TechnoClass::Fire at 0x70ECE0
    bool Crash(ObjectClass* killer);
    // wrapper: delegates to TechnoClass::Fire at 0x70ECE0
    bool isAreaFire() const;
    // design: virtual function, no binary implementation matched in IDA
    int isNotSprayAttack() const;
    // design: virtual function, no binary implementation matched in IDA
    int canAct();
    // design: virtual function, no binary implementation matched in IDA
    int isNotSprayAttack2() const;
    WeaponStruct* GetDeployWeapon() const;
    // wrapper: delegates to InfantryClass::GetDeployWeaponIndex at 0x5218E0
    WeaponStruct* GetTurretWeapon() const;
    // wrapper: delegates to InfantryClass::GetDeployWeaponIndex at 0x5218E0
    WeaponStruct* GetWeapon(int weapon_index) const;
    // wrapper: delegates to InfantryClass::GetDeployWeaponIndex at 0x5218E0
    bool hasTurret() const;
    // wrapper: delegates to InfantryClass::GetDeployWeaponIndex at 0x5218E0
    bool canOccupyFire() const;
    // wrapper: delegates to InfantryClass::GetDeployWeaponIndex at 0x5218E0
    int getOccupyRangeBonus() const;
    // design: virtual function, no binary implementation matched in IDA
    int getOccupantCount() const;
    // design: virtual function, no binary implementation matched in IDA
    void OnFinishRepair();

    void UpdateCloak(bool unknown = true);
    // wrapper: delegates to BuildingClass::UpdateCloak at 0x457770
    void CreateGap();
    // wrapper: delegates to BuildingClass::UpdateCloak at 0x457770
    void DestroyGap();
    // wrapper: delegates to BuildingClass::UpdateCloak at 0x457770
    void onBridgeRepair();
    // wrapper: delegates to BuildingClass::UpdateCloak at 0x457770
    void Sensed();
    void Reload();
    // wrapper: delegates to TechnoClass::ReturnToBaseAndReload at 0x4158E0
    void onReloadComplete();
    CoordStruct* GetTargetCoords(CoordStruct* pCrd) const;  // 0x70BCB0
    // wrapper: delegates to TechnoClass::GetTargetCoords at 0x70BCB0
    bool IsNotWarpingIn() const;
    // wrapper: delegates to TechnoClass::GetTargetCoords at 0x70BCB0
    bool canChronoShift(uint32_t dwUnk) const;
    void DrawActionLines(bool force, uint32_t dwUnk2);
    // wrapper: delegates to BuildingClass::DrawActionLines at 0x63BE60
    uint32_t GetDisguiseFlags(uint32_t existingFlags) const;
    // wrapper: delegates to BuildingClass::DrawActionLines at 0x63BE60
    bool isClearlyVisibleTo(HouseClass* house) const;
    void onSelect(uint32_t a, uint32_t b);
    void DrawHealthBar(Point2D* pLocation, RectangleStruct* pBounds, bool bUnk3) const;  // 0x6f5190
    // wrapper: delegates to TechnoClass::DrawHealthBar at 0x6F5190
    void DrawPipScalePips(Point2D* pLocation, Point2D* pOriginalLocation, RectangleStruct* pBounds) const;
    // wrapper: delegates to TechnoClass::DrawHealthBar at 0x6F5190
    void DrawVeterancyPips(Point2D* pLocation, RectangleStruct* pBounds) const;
    // wrapper: delegates to TechnoClass::DrawHealthBar at 0x6F5190
    void DrawExtraInfo(Point2D const& location, Point2D const& originalLocation, RectangleStruct const& bounds) const;
    // wrapper: delegates to TechnoClass::DrawHealthBar at 0x6F5190
    void Uncloak(bool play_sound);
    // wrapper: delegates to TechnoClass::DrawHealthBar at 0x6F5190
    void Cloak(bool play_sound);
    uint32_t getSight(uint32_t dwUnk) const;
    // wrapper: delegates to TechnoClass::GetSightRange at 0x717800
    void UpdateRefinerySmokeSystems();
    // wrapper: delegates to TechnoClass::GetSightRange at 0x717800
    uint32_t DisguiseAs(AbstractClass* pTarget);
    // wrapper: delegates to TechnoClass::GetSightRange at 0x717800
    void ClearDisguise();
    // wrapper: delegates to TechnoClass::GetSightRange at 0x717800
    bool IsItTimeForIdleActionYet() const;
    // wrapper: delegates to TechnoClass::GetSightRange at 0x717800
    bool UpdateIdleAction();
    void onDamage(uint32_t dwUnk);
    // wrapper: delegates to BuildingClass::ApplyFoundationDamage at 0x45EE70
    void SetDestination(AbstractClass* dest, bool unknown);
    // wrapper: delegates to BuildingClass::ApplyFoundationDamage at 0x45EE70
    bool canRecruit(uint32_t dwUnk, uint32_t dwUnk2);
    void UpdateSight(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
    // wrapper: delegates to TechnoClass::updateSightRange at 0x4C2BD0
    void onPlacement(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
    // design: pure virtual function, no binary implementation
    void onBuildingPlacement(uint32_t a, uint32_t b);
    // wrapper: delegates to TechnoClass::updateSightRange at 0x4C2BD0
    void RadarTrackingStart();
    // wrapper: delegates to TechnoClass::updateSightRange at 0x4C2BD0
    void RadarTrackingStop();
    // wrapper: delegates to TechnoClass::updateSightRange at 0x4C2BD0
    void RadarTrackingFlash();
    // design: virtual function, no binary implementation matched in IDA
    void RadarTrackingUpdate(bool unknown);
    // design: virtual function, no binary implementation matched in IDA
    void onRadarEvent(uint32_t a);
    // design: virtual function, no binary implementation matched in IDA
    void onSpawn();
    // design: virtual function, no binary implementation matched in IDA
    bool canSpawn() const;
    // design: virtual function, no binary implementation matched in IDA
    bool isSpawning() const;
    // design: virtual function, no binary implementation matched in IDA
    int getSpawnCount() const;
    // design: virtual function, no binary implementation matched in IDA
    CoordStruct* getSpawnCoords(CoordStruct* out);
    uint32_t processSpawn();
    // wrapper: delegates to TerrainClass::ProcessSpawnAnim at 0x71D000
    bool canAttackOnTheMove() const;
    // wrapper: delegates to TerrainClass::ProcessSpawnAnim at 0x71D000
    bool canTarget() const;
    // wrapper: delegates to TechnoClass::selectTarget at 0x41BEF0
    void onTargetChange();
    bool canFire();

    // === Phase 3 generated declarations (IDA functions.json) ===
    int ApplyIronCurtain();  // 0x4155F0
    int ReturnToBase();  // 0x4157C0
    int ReturnToBaseAndReload();   // 0x4158E0
    int ScatterFromThreat();  // 0x415960
    int ExecuteMissionCommand();  // 0x417CA0
    int FindNearbyBuildCell(int a2, int16_t *a3);  // 0x4195A0 (G42.33 b4 W7: 体签名同步)
    void * FindClosestPlacementCell();  // 0x41A160 (G42.33 b4 W7: 体签名同步)
    unsigned int * GetTurretFacing(unsigned int *a2);  // 0x41A570 (G42.33 b4 W7: 体签名同步)
    int ComputeTeamAttackPriority();  // 0x41B6A0 (G42.33 b4 W7: 体签名同步)
    int GetAutoFireDirection();  // 0x41B760 (G42.33 b4 W7: 体签名同步 const 撤除)
    int sub_41B7D0();
    unsigned int * HasOnlyOneGarrisonSlot();  // 0x41B7F0 (G42.33 b4 W7: 体签名同步)
    int sub_41B840();
    int sub_41B860();
    int sub_41B9E0();
    bool CreateWarheadDamageEffect();  // 0x41BC30
    // wrapper: delegates to TechnoClass::CreateWarheadDamageEffect at 0x41BC30
    void sub_41BEF0();
    int sub_41BFE0();  // 0x41BFE0 (G42.33 b4 W7: 体签名同步)
    int sub_41BFF0();  // 0x41BFF0
    unsigned int * GetBodyFacing(unsigned int *a2);  // 0x41C1E0 (G42.33 b4 W7c: 体签名同步)
    int sub_41C640();
    int sub_41C650();
    int sub_41C660();
    int sub_41C670();
    int sub_41C680();
    int sub_41C690();
    int ApplyDamageEffects(); // 0x438720
    // wrapper: delegates to TechnoClass::ApplyDamageEffects at 0x438720
    int sub_5439080();
    int RemoveFromDynamicVector(char a2);  // 0x4390D0 (G42.33 b4 W7c: 体签名同步)
    int ComputeTargetAngle();  // 0x43E940 (G42.33 b4 W7c: 体签名同步)
    int StartOrResumeProduction();  // 0x44D6A0
    int GetTurretScreenPos();  // 0x453A70 (G42.34: raw 零参非 const, 除 const 对齐 def)
    void ProcessMissionDeploy();  // 0x456F80
    int EvacuateFootprintCells();  // 0x458A80
    bool StubReturnFalse2(); // 0x459DD0
    // wrapper: delegates to TechnoClass::StubReturnFalse2 at 0x459DD0
    int sub_546B270();
    // wrapper: delegates to TechnoClass::StubReturnFalse2 at 0x459DD0
    int sub_54722D0();
    int IndexOf(); // 0x473500
    int CalcFacingFromMatrix() const;  // 0x5AF410
    void CreateTrailParticle();  // 0x4C2A60
    // wrapper: delegates to TechnoClass::CreateTrailParticle at 0x4C2A60
    int sub_4C2BD0();
    int UpdateThunk();  // 0x4CC770
    int GetData() const; // 0x4CF950
    // wrapper: delegates to TechnoClass::GetData at 0x4CF950
    int sub_54A50F0();
    int CreatePlanningNode();  // 0x638A80
    int GetBuildCost() const;  // 0x711EC0
    int StubReturn450(); // 0x5B2E40
    void sub_6F60C0();  // 0x6F60C0
    // wrapper: delegates to TechnoClass::g_var_370bdd at 0x6F60C0
    int sub_54D28C0();
    int GetTypeFlag() const;  // 0x5224E0
    // wrapper: delegates to TechnoClass::GetTypeFlag at 0x5224E0
    int sub_5505180();
    int FindClosestBuilding();  // 0x4DFF40
    int FindBestMatch();  // 0x4DF040
    int FindClosestInfantry();  // 0x4DFA70
    int FindClosestUnit();  // 0x4DFB70
    int FindBestMovementDirection();  // 0x740B60
    int sub_4DF1A0();  // 0x4DF1A0
    int sub_4DF1C0();  // 0x4DF1C0
    int sub_4DF1D0();  // 0x4DF1D0
    int sub_4DF1E0();  // 0x4DF1E0
    int sub_4DF1F0();  // 0x4DF1F0
    int sub_4DF310();  // 0x4DF310
    int sub_4DF320();  // 0x4DF320
    int sub_4DF4B0();  // 0x4DF4B0
    int FindDeployDestination();  // 0x50C920
    // wrapper: delegates to TechnoClass::FindDeployDestination at 0x50C920
    int sub_550D9C0();
    // wrapper: delegates to TechnoClass::FindDeployDestination at 0x50C920
    int sub_550D9D0();
    int MapHouseRelationIndex();  // 0x50DAC0
    int GetDamageMultiplier() const;  // 0x50BD30
    bool ProcessTarget(int a2);  // 0x50CAD0  // G42.35 def-truth sync (def=object/supplied_bodies.cpp:6851 `bool ProcessTarget(int)`; cache: bool __thiscall TechnoClass::ProcessTarget(TechnoClass*,int))
    // wrapper: delegates to TechnoClass::ProcessTarget at 0x50CAD0
    int sub_55224F0();
    int* GetDeployCoords(int* out = nullptr, int a3 = 0);  // 0x4DBDF0 truth (out, a3)
    int CanBePermaMC() const;  // 0x53C450
    int GarrisonBuilding();  // 0x522910
    int IsMission27to30() const;  // 0x522510
    int HandleSpecialAction();  // 0x522A60
    int IsEnteringOrCapturingStructure() const;  // 0x522CB0
    void CreateDestructionEffect();  // 0x5F5390
    int FindMatchingUnit();  // 0x5F7900
    int ClearArrays();  // 0x5F99E0
    int ComputeScanRange() const;  // 0x48AB90
    // G21 L6: draw* 族 (0x6594xx-0x6595xx) 归属裁决迁出——真 owner = RadBeam
    // （双调用方接收者均 RadBeam::Create 对象，InitState 无 ptr_0 安装）
    int ClearScriptPlanningData();  // 0x633D30
    int GetTileAnimationData() const;  // 0x547150
    int MutateAll();  // 0x6B0AE0
    int RefreshDeployOccupierState();  // 0x6B0D10
    int CountPassengers() const;  // 0x6B7D80
    int GetValue() const; // 0x6F3970
    int CanMoveToCell() const;  // 0x6FC030
    int CanInitiateSell() const;  // 0x6F32D0
    int CanSelfRepair();  // 0x70FB50
    int Mission_RepairDispatch();  // 0x6F4AB0
    int SetFocus(int a2);  // G42.35 def-truth sync (调用形 static (this,0) @0x73E74B)
    int SetHouseFlag();  // 0x6F4960
    int ProcessAIDecision();  // 0x740810
    int CheckPlayerOwned() const;  // 0x6F4A40
    int UpdateProdWithSound();  // 0x6F4A70
    // wrapper: delegates to TechnoClass::HasActiveParam at 0x701120
    int HasOnlyOneGarrisonSlot2() const;
    int FindLowestDamage();  // 0x7012C0
    int IsCloseEnoughToBuilding() const;   // 0x70D590
    int SetPositionAnimated(unsigned int* a2 = nullptr);  // 0x4DB810 (g57w10 raw: int(this,unsigned int*))
    int GetTargetCellCenter(AbstractClass* target);  // 0x4DBA50
    int ComputeSpeedFactor();  // 0x4DAFC0
    int ComputeSpeedFactorEx();  // 0x4DB1A0
    int CleanupDirection();  // 0x4DB260
    int GetDeployProgressValue() const;  // 0x740F80
    int RevealAreaSmall();  // 0x70ADC0
    int GetTargetCoords();  // 0x70BCB0
    int CalcOffsetFacing() const;  // 0x70BE50
    int ComputeThreatLevel();  // 0x4D97A0
    int CanBeTargeted() const;  // 0x744270
    int GetCommandTooltip() const;  // 0x746B20
    int SetTargetIfAllowed();   // 0x6F9DD0
    int CanReceivePassengers() const;  // 0x700C40
    int GetTarget() const;  // 0x6F9DC0
    int GetID() const;  // 0x6F9DB0
    int GetSightRange() const;  // 0x717800
    int GattlingRateUp_GattlingRateDownReset();  // 0x70DE70
    int GattlingValueRateDown_GattlingRateDownDelay();  // 0x70DE40
    int SetMember81();  // 0x70DE00
    int Deactivate(); // 0x70FC90
    int Activate(); // 0x70FBE0
    int IronCurtain(); // 0x70E2B0
    int InvulnerabilityIntensity_SetContext();  // 0x70E380
    int ResetTimer();  // 0x70E300
    int CalcAnimDelay() const;  // 0x6FB080
    // G57W20M26: canon 槽供给 (0x184/0x1E8/0x1F0/0x334, ProcessRepair 成员扫描段)
    int GetPrimaryOrFallback();  // vt+0x184
    TechnoClass *GetVecTechnoMember(int a2);  // 0x65ad30 (原 Team::GetMember 误标; 体读 this+0xE4 vecTechno 数组)

    WeaponStruct* GetWeaponSlot(int index) const;  // 0x7177C0 (&Weapon[index] on the type; real owner TechnoTypeClass - ownership debt)
    int VoiceAttack();  // 0x7090A0
    int GetAmmoCount_0() const;  // 0x740E50
    int SelectAttackWeapon();  // 0x746CD0
    int GetAverageDamageScore() const;  // 0x7414A0
    int ProcessSpecialUnitDeployCrush();  // 0x7416A0
    int FireWeaponBurst();  // 0x741340
    int GetWeaponRange(int weapon_index) const; // 0x773070
    int CreateFireEffect();  // 0x6FD210
    int CreateFireBeamEffect();  // 0x6FD620
    int CreateFiringRadarBlip();  // 0x6FD570
    int CreateRadarBlip();  // 0x6FD460
    int ComputeAudioFalloffDamage();  // 0x6FDB80
    int ComputeCombatDamage();  // 0x70D690
    int sub_70F040();
    int DrainAmmo();  // 0x70E000
    int EjectPassengers();  // 0x70FEE0
    int ComputeDamage();  // 0x70CD10
    int GetCrew();  // 0x707D20
    int GetCrew_0();  // 0x740EE0
    int GetCrewCount();  // 0x6F3950
    unsigned int* g_var_e1d6b5(unsigned int* a2);  // 0x4DF1F0 (X144c decl supply: vt+1208 slot 302; def techno.cpp)
    int CheckCellPassable3() const;  // 0x6F7970
    int GetBridgeDamageMult() const;  // 0x6F79A0
    // wrapper: delegates to TechnoClass::GetBridgeDamageMult at 0x6F79A0
    int CheckAndFireAtTarget2();
    int EvaluateTarget();  // 0x6f7ca0
    int CheckTargetLOS() const;  // 0x6F7220
    int CheckTargetCell() const; // 0x703B10
    int ComputeTotalPowerDrain();  // 0x707DD0
    int EvaluateBuildingTarget();  // 0x6F8C10
    int GetBuildAnim() const;  // 0x705D70
    int EvaluateMission();  // 0x708080
    int GetThreatValue() const;  // 0x4DED70
    int GetThreatValue_0() const;  // 0x5216C0
    int ProcessBorderTower();  // 0x6ED4D0
    int HandleCursor();  // 0x700600
    int GetActionOnObject();  // 0x6FFEC0
    int ScanAdjacentCells2();
    int ScanNeighborCells();  // 0x703E70
    int IsValidBuildingPlacement();  // 0x704000
    int Vt279Thunk0();  // 0x703850
    int UpdatePowerDrain(); // 0x703860
    gamemd::WeaponTypeClass** GetPoweredWeaponSlot();  // 0x70E1A0 (ptr_0 slot 253: house-power-gated weapon-slot pick via slot 254 SelectWeaponSlot; returns pointer to the WeaponTypeClass* holder)
    int UpdateUnitAnimation();  // 0x736CA0
    int GetInfantryCursorAction() const;  // 0x7404B0
    // wrapper: delegates to TechnoClass::GetInfantryCursorAction at 0x7404B0
    int GetThreatValueEx() const;
    int ComputeSlopeDifference();  // 0x6F6F60
    int ComputeSlopePenalty();  // 0x6F70E0
    int IsOwnedByHuman() const;  // 0x732580
    int IsCapturableByPlayer() const;  // 0x7335F0
    int IsC4AnimationActive() const;  // 0x736D50
    int CreateDeathAnim();  // 0x738680
    int DispatchPlayerInput();  // 0x737BA0
    int Deploy(); // 0x7393C0
    int DeployIntoBuilding();  // 0x73EFC0
    int SpawnInfantryFromBuilding();  // 0x738910
    int CleanupDeploy();  // 0x6F6AC0
    int ClearAllTargets();  // 0x746720
    int SelectAITarget();  // 0x744100
    int ReturnCapturedFlag();  // 0x7440B0
    int AreBuildingFlagsClear() const;  // 0x744180
    int MarkCellImpassable();  // 0x7441B0
    int ClearCellImpassable();  // 0x744210
    int CaptureTurret();  // 0x746420
    int TransferSlavedUnit();  // 0x7463A0
    int TransferTurret();  // 0x7464E0
    int ApplyObjectEffect();  // 0x746670
    int IsGuardingTarget() const;  // 0x746750
    int ProcessUnitSelfDestruct();  // 0x746100
    int NotifyTeamOnDestruction();  // 0x744720
    int RespondToDestruction();
    int GetWaypointCoords() const; // 0x6F18A0
    int Create(); // 0x6F1920
    int CopyStateFrom();  // 0x4B5210
    int ScalarDtor();
    int EnteredOpenTopped();  // 0x710470
    int MarkPassengersAsExited();  // 0x7104C0
    int ExitedOpenTopped();  // 0x7104A0
    int GetMember388() const;  // 0x711EB0
    // wrapper: delegates to TechnoClass::GetMember388 at 0x711EB0
    int GetBuildCost2() const;
    // wrapper: delegates to TechnoClass::GetMember388 at 0x711EB0
    int FindBestMatch2();
    int IsWaypointHidden() const;  // 0x6EC300
    int LinkToBridge();  // 0x70FD70
    int ResetDamageAccumulator();  // 0x4C1E10
    // wrapper: delegates to TechnoClass::OnEnterCell at 0x70D990
    int sub_570DC50();
    int OwnerHasPower() const;  // 0x70DC60
    // wrapper: delegates to TechnoClass::OwnerHasPower at 0x70DC60
    int sub_570DCE0();
    // wrapper: delegates to TechnoClass::OwnerHasPower at 0x70DC60
    int sub_570DCF0();
    int GetPoweredWeaponIndex() const;  // 0x70DD20
    int sub_70DD90();  // 0x70DD90
    int SetSpread(); // 0x70DDD0
    int PlaceAtCell();  // 0x70D8F0
    WeaponStruct* SelectWeaponSlot(int weaponIndex); // 0x70E140 (ptr_0 slot 254: elite-vs-regular slot by veterancy >= 2.0 at +0x150)
    int Update2(); // 0x70ED10
    int GetTargetSpeedMultiplier() const;  // 0x50C050
    int ProcessEnterTransport();
    // wrapper: delegates to FootClass::ProcessEnterTransport at 0x70D7E0
    int IsCloseEnoughToBuilding2() const;
    int IsDeployed() const;  // 0x6EF9E0
    int CheckAdjacencyFlags() const;  // 0x704240
    int IsProductionChainActive() const;  // 0x637840
    int HasDeployFlags() const;  // 0x746DB0
    int RemoveBuildingFromScripts();  // 0x638840
    int FinishDeploy();  // 0x6F6CA0
    int ValidateMoveType();  // 0x738890
    // wrapper: delegates to TechnoClass::ValidateMoveType at 0x738890
    int ComputeSlopePenalty2();
    int sub_740B10();
    int CheckRepairNeeded() const;  // 0x740A90
    int EnterRepairBuilding();  // 0x740EF0
    int CheckUnitFireConstraints() const;  // 0x740FD0
    int checkTargetValidity();  // 0x741490
    // wrapper: delegates to TechnoClass::checkTargetValidity at 0x741490
    int sub_7441B0();
    // wrapper: delegates to TechnoClass::checkTargetValidity at 0x741490
    int sub_744180();
    // wrapper: delegates to TechnoClass::checkTargetValidity at 0x741490
    int sub_744210();
    // wrapper: delegates to TechnoClass::checkTargetValidity at 0x741490
    int sub_744270();
    // wrapper: delegates to TechnoClass::checkTargetValidity at 0x741490
    int sub_744720();
    // design: virtual function, no binary implementation matched in IDA
    int sub_7440B0();
    // design: virtual function, no binary implementation matched in IDA
    int sub_744100();
    int SelectAutoTargetWithGarrison();  // 0x743190
    int processParasiteAttachment();  // 0x746400
    // wrapper: delegates to TechnoClass::processParasiteAttachment at 0x746400
    int sub_746420();
    // wrapper: delegates to TechnoClass::processParasiteAttachment at 0x746400
    int sub_7464E0();
    int sub_7465B0();
    int sub_7465F0();
    // wrapper: delegates to TechnoClass::processParasiteAttachment at 0x746400
    int sub_7463A0();
    // design: virtual function, no binary implementation matched in IDA
    int sub_746670();
    // design: virtual function, no binary implementation matched in IDA
    int sub_746720();
    // design: virtual function, no binary implementation matched in IDA
    int sub_746750();
    // design: virtual function, no binary implementation matched in IDA
    int sub_746B20();
    int sub_746C90();
    // design: virtual function, no binary implementation matched in IDA
    int sub_746CD0();
    int sub_746D00();
    int sub_746D60();
    // design: virtual function, no binary implementation matched in IDA
    int sub_746DB0();
    int sub_746E30();
    int sub_746EA0();
    // design: virtual function, no binary implementation matched in IDA
    int sub_746100();
    // design: virtual function, no binary implementation matched in IDA
    int sub_746F80();
    // design: virtual function, no binary implementation matched in IDA
    int sub_70F850();
    // design: virtual function, no binary implementation matched in IDA
    int sub_70FB50();
    int sub_70FC90();
    // design: virtual function, no binary implementation matched in IDA
    int sub_70FD70();
    // design: virtual function, no binary implementation matched in IDA
    int sub_70FEE0();
    // design: virtual function, no binary implementation matched in IDA
    int sub_710000();
    // design: virtual function, no binary implementation matched in IDA
    int sub_710470();
    // design: virtual function, no binary implementation matched in IDA
    int sub_7104A0();
    // design: virtual function, no binary implementation matched in IDA
    int sub_7104C0();
    int sub_7106E0();
    // design: virtual function, no binary implementation matched in IDA
    int sub_710F70();
    // design: virtual function, no binary implementation matched in IDA
    int sub_711E00();
    // design: virtual function, no binary implementation matched in IDA
    int sub_711EB0();
    // design: virtual function, no binary implementation matched in IDA
    int sub_73EFC0();
    int sub_7393C0();
    // design: virtual function, no binary implementation matched in IDA
    int sub_737BA0();
    // design: virtual function, no binary implementation matched in IDA
    int sub_738910();
    int GatherAllBuildings();  // 0x732050
    // wrapper: delegates to TechnoClass::GatherAllBuildings at 0x732050
    int sub_732580();
    int sub_731CF0();
    // wrapper: delegates to TechnoClass::GatherAllBuildings at 0x732050
    int sub_729AA0();
    // wrapper: delegates to TechnoClass::GatherAllBuildings at 0x732050
    int sub_729480();
    // wrapper: delegates to TechnoClass::GatherAllBuildings at 0x732050
    int sub_71F010();
    // design: virtual function, no binary implementation matched in IDA
    int sub_71A130();
    int CalculateDamage(); // 0x663030
    // wrapper: delegates to TechnoClass::CalculateDamage at 0x663030
    int UpdateBodyTilt2();
    // wrapper: delegates to TechnoClass::CalculateDamage at 0x663030
    int GattlingRateUp_GattlingRateDownReset2();
    int ApplySplashDamageToNeighbors();  // 0x487720
    int ReceiveDamage_Shield();  // 0x701900
    // wrapper: delegates to TechnoClass::ReceiveDamage_Shield at 0x701900
    int sub_70B1D0();
    // wrapper: delegates to TechnoClass::ReceiveDamage_Shield at 0x701900
    int sub_70B280();
    // wrapper: delegates to TechnoClass::ReceiveDamage_Shield at 0x701900
    int sub_70B570();
    // wrapper: delegates to TechnoClass::ReceiveDamage_Shield at 0x701900
    int sub_70BCB0();
    // wrapper: delegates to TechnoClass::ReceiveDamage_Shield at 0x701900
    int sub_70BE80();
    // design: virtual function, no binary implementation matched in IDA
    int sub_70D1D0();
    // design: virtual function, no binary implementation matched in IDA
    int sub_70D990();
    // design: virtual function, no binary implementation matched in IDA
    int sub_70DE70();
    // design: virtual function, no binary implementation matched in IDA
    int sub_70DE00();
    // design: virtual function, no binary implementation matched in IDA
    int sub_70DD20();
    // design: virtual function, no binary implementation matched in IDA
    int sub_70DD50();
    int sub_70DDD0();
    // design: virtual function, no binary implementation matched in IDA
    int sub_70DE40();
    int sub_70E120();
    int sub_70E140();
    // design: virtual function, no binary implementation matched in IDA
    int sub_70E1A0();
    // design: virtual function, no binary implementation matched in IDA
    int sub_70E280();
    int sub_70E2B0();
    // design: virtual function, no binary implementation matched in IDA
    int sub_70E300();
    // design: virtual function, no binary implementation matched in IDA
    int sub_70E380();
    int sub_70E4B0();
    // design: virtual function, no binary implementation matched in IDA
    int sub_70EC0A();
    int sub_70ED10();
    // design: virtual function, no binary implementation matched in IDA
    int sub_70ED80();
    // design: virtual function, no binary implementation matched in IDA
    int sub_70EE30();
    // design: virtual function, no binary implementation matched in IDA
    int sub_70EFD0();
    // design: virtual function, no binary implementation matched in IDA
    int sub_70EF00();
    // design: virtual function, no binary implementation matched in IDA
    int sub_70F010();
    int sub_70F000();
    // design: virtual function, no binary implementation matched in IDA
    int sub_70ECE0();
    // design: virtual function, no binary implementation matched in IDA
    int sub_70CCC0();
    // design: virtual function, no binary implementation matched in IDA
    int sub_70CC90();
    // design: virtual function, no binary implementation matched in IDA
    int sub_70CD10();
    // design: virtual function, no binary implementation matched in IDA
    int sub_70D190();
    // design: virtual function, no binary implementation matched in IDA
    int sub_70D460();
    int sub_70D590();
    // design: virtual function, no binary implementation matched in IDA
    int sub_70D670();
    // design: virtual function, no binary implementation matched in IDA
    int sub_70D690();
    // design: virtual function, no binary implementation matched in IDA
    int sub_70D8F0();
    // design: virtual function, no binary implementation matched in IDA
    int sub_70BE50();
    // design: virtual function, no binary implementation matched in IDA
    int sub_70C620();
    int sub_70C610();

    int SelectWeapon(AbstractClass* target) const; // 0x6F3330
    // wrapper: delegates to TechnoClass::SelectWeapon at 0x6F3330
    void SmokeupdateLogic();
    bool CreateUnit(); // 0x423AC0

    // wrapper: delegates to TechnoClass::CreateUnit at 0x423AC0
    int GetIonCannonValue(AIDifficulty difficulty) const;

    // wrapper: delegates to TechnoClass::CreateUnit at 0x423AC0
    DirStruct getFacing() const;
    // wrapper: delegates to TechnoClass::CreateUnit at 0x423AC0
    DirStruct GetRealFacing() const;

    // ---- member variables ----

    FlashData               flashing;
    ProgressTimer           animation;
    PassengersClass         passengers;
    TechnoClass*            transporter;
    int32_t                 turretChargeTimer;
    int32_t                 currentTurretNumber;
    int32_t                 secondaryTurretIndex;
    AnimClass*              behindAnim;
    AnimClass*              deployAnim;
    bool                    inAirFlag;
    uint8_t                 alignmentPadding139[3];
    int32_t                 currentWeaponSlot;
    int32_t                 currentRank;          // Rank enum
    int32_t                 gattlingStage;
    int32_t                 gattlingValue;
    uint32_t                ammoReloadTimer;
    HouseClass*             initialOwner;
    VeterancyStruct         veterancy;
    uint32_t                alignmentPadding154;
    double                  armorMultiplier;
    double                  firepowerMultiplier;
    TimerStruct             idleActionTimer;
    TimerStruct             radarFlashTimer;
    TimerStruct             targetingTimer;
    TimerStruct             ironCurtainTimer;
    TimerStruct             ironTintTimer;
    int32_t                 ironTintStage;
    TimerStruct             airstrikeTimer;
    TimerStruct             airstrikeTintTimer;
    uint32_t                airstrikeTintStage;
    int32_t                 forceShielded;
    bool                    isDeactivated;
    uint8_t                 alignmentPadding1BD[3];
    TechnoClass*            drainTarget;
    TechnoClass*            drainingMe;
    AnimClass*              drainAnim;
    bool                    isDisguisedFlag;
    uint8_t                 alignmentPadding1CE[3];
    uint32_t                disguiseCreationFrame;
    TimerStruct             infantryBlinkTimer;
    TimerStruct             disguiseBlinkTimer;
    bool                    isTargetedByChrono;
    uint8_t                 alignmentPadding1F9[3];
    TimerStruct             reloadTimer;
    uint32_t                currentBurstCount;
    uint32_t                currentBarrelIndex;
    IndexBitfieldT<HouseClass*> displayProductionTo;
    int32_t                 controlGroup;    // 0-9 CTRL+group number (YRpp Group; was misnamed Owner)
    AbstractClass*          focus;
    HouseClass*             owner;
    uint32_t                cloakState;              // CloakState enum
    ProgressTimer           cloakProgress;
    TimerStruct             cloakDelayTimer;
    float                   warpFactor;
    bool                    isChronosphereImmune;
    uint8_t                 alignmentPadding251[3];
    CoordStruct             lastSightCoords;
    int32_t                 lastSightRange;
    int32_t                 lastSightHeight;
    bool                    gapSuperCharged;
    bool                    isGeneratingGap;
    uint8_t                 alignmentPadding27E[2];
    int32_t                 gapRadius;
    bool                    isBeingWarpedOut;
    bool                    isWarpingOut;
    bool                    isWarpEffectActive;
    uint8_t                 unusedField273;
    TemporalClass*          temporalUsing;
    TemporalClass*          temporalTargetingMe;
    bool                    isImmobilized;
    uint8_t                 alignmentPadding27D[3];
    uint32_t                owningHouseIndex0;
    int32_t                 chronoLockRemaining;
    CoordStruct             chronoDestCoords;
    AirstrikeClass*         airstrike;
    bool                    isBerserk;
    uint8_t                 alignmentPadding29D[3];
    uint32_t                isBerserk_duration_left;
    uint32_t                sprayOffsetIndex;
    bool                    isUncrushable;
    uint8_t                 alignmentPadding2A9[3];
    FootClass*              rockerLinkedUnit;
    FootClass*              locomotorTarget;
    FootClass*              locomotorSource;
    AbstractClass*          target;
    AbstractClass*          lastTarget;
    CaptureManagerClass*    captureManager;
    TechnoClass*            mindControlledBy;
    bool                    mindControlledBy_a_unit;
    uint8_t                 alignmentPadding2C2[3];
    AnimClass*              mindControlRingAnim;
    HouseClass*             mindControlledBy_house;
    SpawnManagerClass*      spawnManager;
    TechnoClass*            spawnOwner;
    SlaveManagerClass*      slaveManager;
    TechnoClass*            slaveOwner;
    HouseClass*             originalOwnerHouse;
    TechnoClass*            bunkerLinkedUnit;
    float                   pitchAngle;
    TimerStruct             diskLaserTimer;
    uint32_t                diskLaserChargeState;
    int32_t                 ammo;
    int32_t                 unitValue;
    ParticleSystemClass*    fireParticles;
    ParticleSystemClass*    sparkParticles;
    ParticleSystemClass*    ambientParticles;
    ParticleSystemClass*    damageParticles;
    ParticleSystemClass*    railgunParticles;
    ParticleSystemClass*    auxParticles1;
    ParticleSystemClass*    auxParticles2;
    ParticleSystemClass*    firingParticles;
    WaveClass*              waveEffect;
    float                   tiltSidewaysAngle;
    float                   tiltForwardsAngle;
    float                   tiltSidewaysRate;
    float                   tiltForwardsRate;
    int32_t                 hijackerInfantryType;
    OwnedTiberiumStruct     storedTiberium;
    uint32_t                tiberiumCollectionState;
    TransitionTimer         unloadTimer;
    FacingStruct            barrelFacing;
    FacingStruct            primaryFacing;
    FacingStruct            secondaryFacing;
    int32_t                 currentBurstIndex;
    TimerStruct             targetLaserTimer;
    int16_t                 unknown_short_3C8;
    uint16_t                unknown_3CA;
    bool                    isCountedAsOwned;
    bool                    isSinking;
    bool                    wasAlreadySinking;
    bool                    isReceivingDamageEffect;
    bool                    isUseless;
    bool                    hasBeenAttacked;
    bool                    isCloakableFlag;
    bool                    isPrimaryFactory;
    bool                    isALoaner;
    bool                    isInPlayfield;
    RecoilData              turretRecoil;
    RecoilData              barrelRecoil;
    bool                    isTether;
    bool                    isAlternativeTether;
    bool                    isOwnedByCurrentPlayer;
    bool                    isDiscoveredByCurrentPlayer;
    bool                    isDiscoveredByComputer;
    bool                    isSelectedByPlayer;
    bool                    isUnderCursor;
    bool                    isCommandLineTarget;
    char                    sightRangeBonus;
    bool                    isRecruitableByAlly;
    bool                    isRecruitableByEnemy;
    bool                    isRadarTracked;
    bool                    isOnCarryall;
    bool                    isCrashing;
    bool                    wasAlreadyCrashing;
    bool                    isBeingManipulated;
    TechnoClass*            manipulatedByUnit;
    HouseClass*             chronoWarpedByHouse;
    bool                    isChronoImmuneFlag;
    bool                    isMouseHovering;
    bool                    shouldBeReselectOnUnlimbo;
    uint8_t                 alignmentPadding433;
    TeamClass*              previousTeam;
    bool                    isCountedAsOwned_special;
    bool                    isAbsorbed;
    bool                    isGrindingInProgress;
    uint8_t                 alignmentPadding43B;
    uint32_t                grindingAnimHandle;
    DynamicVectorClass<int32_t> currentTargetThreatValues;
    DynamicVectorClass<AbstractClass*> currentTargets;
    DynamicVectorClass<AbstractClass*> attackedTargets;
    AudioController         turretRotateSoundController;
    uint32_t                isTurretRotateSoundPlaying;
    uint32_t                turretIsRotating;
    AudioController         gattlingSoundController;
    bool                    isGattlingSoundPlaying;
    uint8_t                 alignmentPadding4B9[3];
    uint32_t                unknown_4BC;
    AudioController         unusedGattlingSoundController;
    bool                    isUnusedGattlingSoundPlaying;
    uint8_t                 alignmentPadding4D5[3];
    uint32_t                unknown_4D8;
    AudioController         queuedVoiceSoundController;
    uint32_t                queuedVoiceIndex;
    uint32_t                unknown_4F4;
    bool                    unknown_bool_4F8;
    uint8_t                 alignmentPadding4F9[3];
    uint32_t                unknown_4FC;
    TechnoClass*            queueUpToEnter;
    uint32_t                empLockRemaining;
    uint32_t                threatPosed;
    uint32_t                shouldLoseTarget;
    RadBeam*                firingRadBeam;
    PlanningTokenClass*     planningToken;
    ObjectTypeClass*        disguiseAsType;
    HouseClass*             disguisedAsHouse;

protected:
    TechnoClass() noexcept; // 0x6F2B40
    unsigned int q674;  // 0x674
    unsigned int q0584;  // 0x584
    unsigned int q1843;  // 0x1843
    unsigned int q5A4;  // 0x5A4
    unsigned int u32_5C4;  // 0x5C4 (member_lookup)
    unsigned int u32_5C8;  // 0x5C8 (member_lookup)
    unsigned int u32_608;  // 0x608
public:  // --- gap2 auto-generated stub declarations (BEGIN) ---
    int SmokeUpdate(double a2);  // 0x414BB0
    int updateROFTimer();  // 0x41B9E0
    int processIdleState(int a1, void* a2, void* a3);  // 0x41C640
    int processGuardState(int a1);  // 0x41C650
    int processAttackState(int a1);  // 0x41C660
    int processMoveState(int a1, void* a2, void* a3);  // 0x41C670
    int processHarvestState(int a1);  // 0x41C680
    int processDeployState(int a1);  // 0x41C690
    int checkRange(int a2);  // 0x439080
    int updateHealthBar();  // 0x46B270
    int checkCloakState();  // 0x4A50F0
    void* GetWeaponType(void* a1);  // 0x4C9470
    int recalcThreat();  // 0x4D28C0
    int QueueDrawVoiceResponse(void* a1, int a2, int a3, int a4, int a5, void* a6, int a7, int a8, int a9, int a10, int a11);  // 0x4DB0D0
    void checkBuildLimit();  // 0x505180
    void Find(int a1);  // 0x50E010
    void Process(int a1);  // 0x50E1C0
    bool updateTurretRotation();  // 0x5224F0
    bool HasAnyMission();  // 0x6E57C0
    void* Constructor(int a1);  // 0x6F4300
    int ExecuteMoveCommand();  // 0x6FBFA0
    int DrawTargetLine();  // 0x6FF960
    int HasValidWeapon();  // 0x7010D0
    int CleanupAll(int a1);  // 0x707CB0
    int processEMPulse();  // 0x70DC50
    bool checkEMPState();  // 0x70DCE0
    int applyEMPulseDamage();  // 0x70DCF0
    int GetMember81();  // 0x70DDF0
    int CalcFlashAlpha(int a1);  // 0x70E4B0
    WeaponStruct* GetEliteWeaponSlot(int index);  // 0x7177E0 (&EliteWeapon[index] on the type; real owner TechnoTypeClass - ownership debt)
    bool HasVoiceResponse(int weaponIndex);  // 0x70D0D0 -- reads this->veterancy and type-side Voice*WeaponAttack flags
    int ShouldSkipOccupierDraw(int a1, int a2, int a3);  // 0x73B0B0
    int Draw(void* a1, void* a2);  // 0x73CEC0
    int updateTargeting();  // 0x740B10
    int updateParasiteState(int a1);  // 0x7465B0
    int detachParasites(int a1);  // 0x7465F0
    bool checkSpawnState();  // 0x746C90
    int updateSpawnManager();  // 0x746D00
    int releaseSpawns();  // 0x746D60
    void* checkIronCurtainState(void* a1);  // 0x746E30
    bool processIronCurtainExpiry(void* a1);  // 0x746EA0
    // --- gap2 auto-generated stub declarations (END) ---
    public:  // symbol-anchor
    // === SYMBOL-ANCHOR (BEGIN) ===
    void updateSightRange(int a1, int a2);  // 0x4c2bd0 -- TechnoClass::updateSightRange
    int ScanAdjacentCells();  // 0x703cc0 -- TechnoClass::ScanAdjacentCells
    int GetOwnerHouse();  // 0x6f2070 -- Techno::GetOwnerHouse
    // === SYMBOL-ANCHOR (END) ===
    public:  // funcs-move
    // === FUNCS-MOVE (BEGIN) ===
    int CanFireAtTarget(int a1, int a2 = 0, int a3 = 0, int a4 = 0, int a5 = 0);  // 0x41a9e0 (vararg call shapes 2..5)
    int processDamageAnimation();  // 0x41b7d0
    int updateWeaponCooldown();  // 0x41b840
    int checkAmmo(int a1);  // 0x41b860
    void* Update(int a1, int a2);  // 0x6f3f40
    bool GetField();  // 0x731cf0
    // === G42.41m supplies (ml names; /c-gate) ===
    uint32_t u32_5D1;  // ml @0x5D1 (g_var_242f49 returns)
    uint32_t u32_6C4;  // ml @0x6C4 (byte-ptr base use 0x746415)
    uint8_t u32_6E1;  // ml name (0x746400 use)
    uint8_t u32_6E2;  // ml name (0x746400 use)
    // === FUNCS-MOVE (END) ===
public:  // g57c5 W4b supply slot
    TimerStruct __pad_194;  // 0x194 g57c5 W4b (self-desc vocab, ml slot witness)
public:  // g57c5 W6 owner supply
    unsigned int q0F2;  // 0xF2 g57c5 W6 (ml TechnoClass@0xF2 own)

    void* NeedsSaveOrLink;  // X10 supply (csp_canon_members)
    void* abstractFlags;  // X10 supply (csp_canon_members)
    unsigned int airstrikeTintStage_2;  // X10 supply (csp_canon_members)
    unsigned int airstrikeTintStage_d;  // X10 supply (csp_canon_members)
    void* ambientSoundController;  // X10 supply (csp_canon_members)
    BombClass* attachedBomb;  // X10 supply (csp_canon_members)
    void* attachedTag;  // X10 supply (csp_canon_members)
    void* currentMission;  // X10 supply (csp_canon_members)
    void* customSound_controller;  // X10 supply (csp_canon_members)
    unsigned char facing[4];  /* FacingStruct */  // X10 supply (csp_canon_members)
    void* fallRate;  // X10 supply (csp_canon_members)
    bool hasParachute;  // X10 supply (csp_canon_members)
    void* health;  // X10 supply (csp_canon_members)
    void* inLimbo;  // X10 supply (csp_canon_members)
    bool inOpenToppedTransport;  // X10 supply (csp_canon_members)
    void* isAliveFlag;  // X10 supply (csp_canon_members)
    bool isInLogic;  // X10 supply (csp_canon_members)
    bool isOnMap;  // X10 supply (csp_canon_members)
    void* isSelected;  // X10 supply (csp_canon_members)
    bool isVisible;  // X10 supply (csp_canon_members)
    void* lastCommands;  // X10 supply (csp_canon_members)
    unsigned int lastLayer;  // X10 supply (csp_canon_members)
    void* lineTrailer;  // X10 supply (csp_canon_members)
    void* location;  // X10 supply (csp_canon_members)
    void* missionQueued;  // X10 supply (csp_canon_members)
    int32_t missionStartTime;  // X10 supply (csp_canon_members)
    int32_t missionStatus;  // X10 supply (csp_canon_members)
    bool needsRedraw;  // X10 supply (csp_canon_members)
    void* nextArrayIndex;  // X10 supply (csp_canon_members)
    void* nextObject;  // X10 supply (csp_canon_members)
    unsigned int occupant;  // X10 supply (csp_canon_members)
    void* onBridge;  // X10 supply (csp_canon_members)
    void* owningHouseIndex;  // X10 supply (csp_canon_members)
    AnimClass* parachute;  // X10 supply (csp_canon_members)
    unsigned int q019;  // X10 supply (member_lookup)
    unsigned int q01E;  // X10 supply (member_lookup)
    unsigned int q051;  // X10 supply (member_lookup)
    unsigned int q07D;  // X10 supply (member_lookup)
    unsigned int q173;  // X10 supply (member_lookup)
    void* q17A0;  // X10 supply (member_lookup)  // X27: template-carrier
    unsigned char q18C[4];  /* char[4] */  // X10 supply (member_lookup)
    unsigned int q1A2;  // X10 supply (member_lookup)
    unsigned int q578;  // X10 supply (member_lookup)
    void* q6C0;  // X10 supply (member_lookup)
    void* queuedMission;  // X10 supply (csp_canon_members)
    unsigned int radioLinks;  // X10 supply (csp_canon_members)
    void* referenceCount;  // X10 supply (csp_canon_members)
    void* spawnStatus;  // X10 supply (csp_canon_members)
    int32_t suspendedMission;  // X10 supply (csp_canon_members)
    int16_t targetLaserOpacity;  // X10 supply (csp_canon_members)
    unsigned int u32_11;  // X10 supply (member_lookup)
    unsigned int u32_11BC;  // X10 supply (member_lookup)
    int u32_14B0;  // X10 supply (member_lookup)
    unsigned int u32_14D0;  // X10 supply (member_lookup)
    unsigned int u32_1D;  // X10 supply (member_lookup)
    unsigned int u32_1ED;  // X10 supply (member_lookup)
    unsigned int u32_2ED4;  // X10 supply (member_lookup)
    unsigned int u32_3C2;  // X10 supply (member_lookup)
    unsigned int u32_3D2;  // X10 supply (member_lookup)
    unsigned int u32_44;  // X10 supply (member_lookup)
    unsigned int u32_48;  // X10 supply (member_lookup)
    unsigned int u32_5490;  // X10 supply (member_lookup)
    unsigned int u32_5494;  // X10 supply (member_lookup)
    unsigned int u32_5496;  // X10 supply (member_lookup)
    unsigned int u32_54D8;  // X10 supply (member_lookup)
    unsigned int u32_5714;  // X10 supply (member_lookup)
    unsigned int u32_577C;  // X10 supply (member_lookup)
    unsigned int u32_59C;  // X10 supply (member_lookup)
    unsigned int u32_5CC;  // X10 supply (member_lookup)
    unsigned int u32_5D4;  // X10 supply (member_lookup)
    unsigned int u32_661;  // X10 supply (member_lookup)
    unsigned int u32_684;  // X10 supply (member_lookup)
    unsigned int u32_68D;  // X10 supply (member_lookup)
    unsigned int u32_694;  // X10 supply (member_lookup)
    unsigned int u32_6AD;  // X10 supply (member_lookup)
    unsigned int u32_6AF;  // X10 supply (member_lookup)
    unsigned int u32_6B5;  // X10 supply (member_lookup)
    unsigned int u32_6B8;  // X10 supply (member_lookup)
    unsigned int u32_6C8;  // X10 supply (member_lookup)
    unsigned int u32_6CC;  // X10 supply (member_lookup)
    unsigned int u32_6D0;  // X10 supply (member_lookup)
    unsigned int u32_6D1;  // X10 supply (member_lookup)
    unsigned int u32_6D2;  // X10 supply (member_lookup)
    unsigned int u32_6D3;  // X10 supply (member_lookup)
    unsigned int u32_6D5;  // X10 supply (member_lookup)
    unsigned int u32_6D8;  // X10 supply (member_lookup)
    unsigned int u32_6DC;  // X10 supply (member_lookup)
    int u32_6E0;  // X10 supply (member_lookup)
    int u32_D;  // X10 supply (member_lookup)
    int u8_6DB;  // X10 supply (member_lookup)
    unsigned char u8_B5;  // X10 supply (member_lookup)
    void* uniqueId;  // X10 supply (csp_canon_members)
    unsigned int visibilityFlags;  // X10 supply (csp_canon_members)
    void* ptr_0;  // X10 supply (csp_canon_members)
    void* ptr_4;  // X10 supply (csp_canon_members)
    void* ptr_C;  // X10 supply (csp_canon_members)
    float warpFactor_d;  // X10 supply (csp_canon_members)
};

} // namespace game
} // namespace ra2
