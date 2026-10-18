#include "object/foot.hpp"

#include <cstring>
#include "e4/e4_globals_decls.hpp"
#include "e4/classes/HouseClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/TeamClass_e4.hpp"  // gB C2027 supply
#include "e4/classes/Cell_e4.hpp"  // g57c5 W5d scope supply
#include "e4/classes/House_e4.hpp"  // g57c5 W5d scope supply
#include "e4/classes/Math_e4.hpp"  // g57c5 W5d scope supply
#include "e4/classes/MovementAI_e4.hpp"  // g57c5 W5d scope supply
#include "system/map.hpp"
// [w18j2] C3861 supply (raw-evidenced)
namespace gamemd { int Begin(TechnoClass *p_this); }  // x4:ida@0x6f9e50
namespace gamemd { int CheckAmbiguity(int p0, char p1); }  // x4:signals@0x578540
namespace gamemd { int Update_0(int p0, int p1, int p2, char p3, int p4); }  // x4:signals@0x6e53a0
namespace gamemd { int State(Random *p_this); }  // x4:ida@0x65c780
// [w18j2] C2065 function supply (raw-evidenced)
// [w14e3] fn vocab supply (g57b5-W5 variadic convention); evidence: raw_decomp entries
namespace gamemd {
    int StartAudioController(int p0, int p1);  // x4:signals@0x750d40
} // namespace gamemd
class Mixer;  // W13-C fwd (misc/audio_ext.hpp:115 载体; (Mixer*) cast 用法)
extern int RoundToInt(double value);  // W13-C raw 0x7C5F00 (e4_protos.h:492 同形)
// ---- g57c5 W5 vocab (declaration-only) ----
namespace ra2 { namespace game {
class Math;  // g57c5 W5 fwd
class MovementAI;  // g57c5 W5 fwd
class Random;  // g57c5 W5 fwd
class Type;  // g57c5 W5 fwd
int StartAudioControllerAt(int p0, int p1, int p2);  // x4:signals@0x7509e0
int sub_7DC720();  // x4:empty@0x7dc720
void GetTraversability();  // g57c5 W5 vocab (csp)
} }
// ---- g57c5 W5 end ----
// ---- g57b5 W3: TU-local 真形 vocab (declaration-only) 
namespace gamemd {

    void Mixer_ReleaseChannel(void *a1);               // raw 0x4220d9 Mixer::ReleaseChannel;
    void sub_7DC720(int a1);                       // 0x7DC720 真形 (stream_ext.hpp:12 同形);
    void MapClass_RevealArea2(void *self, int *coords, int a3, int a4, int a5);  // 0x567DA0 真形;
    void *CellCoord_To_CellObj(void *a1, void *a2);    // 0x5657A0 真形 (core/cellcoord.hpp 单源);
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

namespace {

constexpr uint32_t kFootFlag = 0x4u;

} // anonymous namespace

extern int& CurrentFrame;

FootClass::FootClass() noexcept
    : planningPathIdx(-1)
    , unknownShort524(0)
    , unknownShort526(0)
    , unknownShort528(0)
    , FootClass_field_short_52A(0)
    , FootClass_field_52C(0)
    , unknown530(0)
    , unknown534(0)
    , unknown538(0)
    , FootClass_field_bool_53C(false)
    , unknown540(0)
    , currentMapCoords{}
    , lastMapCoords{}
    , lastJumpjetMapCoords{}
    , currentJumpjetMapCoords{}
    , unknownCoords568{}
    , unused574(0)
    , currentSpeed_percentage(0.0)
    , currentSpeed_multiplier(0.0)
    , movementDestination(nullptr)
    , lastDestination(nullptr)
    , FootClass_field_int_5C4(-1)
    , FootClass_field_5C8(0)
    , FootClass_field_5CC(0)
    , FootClass_field_5D0(0)
    , FootClass_field_bool_5D1(false)
    , team(nullptr)
    , nextTeamMember(nullptr)
    , FootClass_field_5DC(0)
    , pathDelayTimer{}
    , FootClass_field_int_64C(0)
    , FootClass_field_timer_650{}
    , sightTimer{}
    , blockagePathTimer{}
    , unknownPoint3d678{}
    , tubeIndex(-1)
    , unknownBool685(false)
    , waypointIndex(0)
    , unknownBool687(false)
    , unknownBool688(false)
    , isTeamLeader(false)
    , shouldScanForTarget(false)
    , FootClass_field_bool_68B(false)
    , FootClass_field_bool_68C(false)
    , unknownBool68D(false)
    , FootClass_field_bool_68E(false)
    , shouldEnterAbsorber(false)
    , shouldEnterOccupiable(false)
    , shouldGarrisonStructure(true)
    , parasiteEatingMe(nullptr)
    , unknown698(0)
    , parasiteImUsing(nullptr)
    , paralysisTimer{}
    , FootClass_field_bool_6AC(false)
    , isAttackedByLocomotor(false)
    , isLetGoByLocomotor(false)
    , FootClass_field_bool_6AF(false)
    , FootClass_field_bool_6B0(false)
    , FootClass_field_bool_6B1(false)
    , FootClass_field_bool_6B2(false)
    , FootClass_field_bool_6B3(false)
    , FootClass_field_bool_6B4(false)
    , FootClass_field_bool_6B5(false)
    , FootClass_field_bool_6B7(false)
    , frozenStill(false)
    , FootClass_field_bool_6B8(false)
    , m_unused_6BC(0)
{
    std::memset(&audioController7, 0, sizeof(audioController7));
    std::memset(pathDirections, 0, sizeof(pathDirections));

    locomotor.ptr = nullptr;

    abstractFlags |= kFootFlag;
}

// ============================================================
// MovementAI -- per-frame movement and navigation update
// IDA: 0x4DA530 (2520 bytes, 138 BBs, called from InfantryClass::Update,
//      TechnoClass::SmokeUpdate)
// ============================================================

// 0x4da530
bool FootClass::MovementAI()
{
  char result; // al
  unsigned int *v3; // eax
  double *v4; // eax
  int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // edx
  int v9; // eax
  int v10; // edx
  int lastSightRange; // ecx
  int v12; // eax
  int v13; // edx
  int v14; // eax
  int v16; // eax
  int unknown538; // ebp
  FootClass *v18; // edi
  int (__thiscall **vtable0)(FootClass *); // edx
  int v20; // edi
  unsigned int v21; // eax
  int unknown540; // eax
  char isFallingDown; // al
  int (__thiscall **v24)(FootClass *); // edx
  int v25; // eax
  char isSinking; // al
  int (__thiscall **v27)(FootClass *); // edx
  int v28; // eax
  int (__thiscall **v29)(FootClass *); // eax
  int v30; // eax
  char isCrashing; // al
  int (__thiscall **v32)(FootClass *); // edx
  int v33; // eax
  int (__thiscall **v34)(FootClass *); // edx
  int v35; // eax
  void (__thiscall **v36)(FootClass *, int *, int, unsigned int); // edx
  int (__stdcall ***v37)(unsigned int, int *, int16_t *); // eax
  int *locomotor; // ebp
  int v39; // edi
  int v40; // eax
  int (__thiscall **v41)(FootClass *); // eax
  FootClass *parasiteEatingMe; // esi
  int v43; // [esp+54h] [ebp-30h]
  int Traversability; // [esp+70h] [ebp-14h] BYREF
  int16_t v45[2]; // [esp+74h] [ebp-10h] BYREF
  int v46; // [esp+78h] [ebp-Ch] BYREF
  int v47; // [esp+7Ch] [ebp-8h]
  int v48; // [esp+80h] [ebp-4h]

  MovementAI::Begin((TechnoClass *)this); /*0x4da539*/
  result = (char)(this->isAliveFlag); /*0x4da53e*/
  if ( !result ) /*0x4da548*/
    return result; /*0x4da548*/
  this->FootClass_field_bool_6B3 = 0; /*0x4da54e*/
  if ( !(*(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] % *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 6152)) /*0x4da593*/
    && !*(unsigned char *)((*((int (__thiscall **)(FootClass *))this->ptr_0 + 33))(this) + 3383)
    && !(*((uint8_t (__thiscall **)(FootClass *))this->ptr_0 + 21))(this)
    && !this->inLimbo )
  {
    v3 = (unsigned int *)(*((int (__thiscall **)(FootClass *, int *))this->ptr_0 + 18))(this, &v46); /*0x4da5a8*/
    (*((unsigned short *)&(Traversability))) = *v3 / 256; /*0x4da5bb*/
    (*(((unsigned short *)&(Traversability)) + 1)) = v3[1] / 256; /*0x4da5d3*/
    *(unsigned int *)v45 = Traversability; /*0x4da5dc*/
    v4 = (double *)CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, v45); /*0x4da5e6*/
    Traversability = Cell::GetTraversability(v4); /*0x4da5f4*/
    if ( Traversability > 0 ) /*0x4da5f8*/
    {
      v5 = *(unsigned int *)&g_RulesClass_Instance; /*0x4da5fe*/
      (*((unsigned short *)&(v6))) = Math::RoundToInt((double)Traversability * *(double *)(*(unsigned int *)&g_RulesClass_Instance /*0x4da60a*/
                                                                       + 6168));
      Traversability = v6; /*0x4da610*/
      result = (*((int (__thiscall **)(FootClass *, int *, unsigned int, unsigned int, unsigned int, unsigned int, int, unsigned int))this->ptr_0 + 91))( /*0x4da629*/
                 this,
                 &Traversability,
                 0,
                 v5->RadSiteWarhead_d,
                 0,
                 0,
                 1,
                 0);
      if ( !this->isAliveFlag ) /*0x4da62f*/
        return result; /*0x4da635*/
    }
  }
  if ( !this->isInPlayfield ) /*0x4da63b*/
  {
    if ( *(unsigned char *)((*((int (__thiscall **)(FootClass *))this->ptr_0 + 33))(this) + 3434) ) /*0x4da64d*/
    {
      v7 = (*((int (__thiscall **)(FootClass *))this->ptr_0 + 111))(this); /*0x4da65b*/
      if ( (uint8_t)Type::CheckAmbiguity((Type *)&DataGlobal_87F7E8, v7, 1) ) /*0x4da667*/
        this->isInPlayfield = 1; /*0x4da670*/
    }
  }
  if ( !this->locomotor[0] ) /*0x4da677*/
    sub_7DC720(-2147467261); /*0x4da684*/
  if ( (*(uint8_t (__stdcall **)(int))(*(unsigned int *)this->locomotor[0] + 128))(this->locomotor[0]) /*0x4da6bb*/
    && (*((uint8_t (__thiscall **)(FootClass *))this->ptr_0 + 21))(this)
    && (uint8_t)((void *)this->owner)->IsAlliedWith((void *)dword_A83D4C) )
  {
    v8 = this->sightTimer[0]; /*0x4da6c8*/
    v9 = this->sightTimer[2]; /*0x4da6ce*/
    if ( v8 != -1 ) /*0x4da6d7*/
    {
      if ( *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - v8 >= v9 ) /*0x4da6e3*/
      {
  LABEL_21:
        (*((void (__thiscall **)(FootClass *, unsigned int, unsigned int, unsigned int, unsigned int))this->ptr_0 + 291))(this, 0, 0, 0, 0); /*0x4da6ef*/
        (*((void (__thiscall **)(FootClass *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int))this->ptr_0 + 290))( /*0x4da706*/
          this,
          0,
          0,
          0,
          0,
          0);
        if ( this->lastSightHeight == (*((int (__thiscall **)(FootClass *))this->ptr_0 + 114))(this) ) /*0x4da72a*/
        {
          v13 = this->location[1]; /*0x4da750*/
          v46 = this->location[0]; /*0x4da753*/
          v47 = v13; /*0x4da758*/
          v48 = this->location[2]; /*0x4da763*/
          MapClass::RevealArea2( /*0x4da77b*/
            (MapClass *)&DataGlobal_87F7E8,
            &v46,
            this->lastSightRange - 3,
            this->lastSightRange + 3,
            0);
        }
        else
        {
          v10 = this->location[1]; /*0x4da72c*/
          v46 = this->location[0]; /*0x4da72f*/
          lastSightRange = this->lastSightRange; /*0x4da733*/
          v12 = this->location[2]; /*0x4da73a*/
          v47 = v10; /*0x4da740*/
          v48 = v12; /*0x4da745*/
          MapClass::RevealArea2((MapClass *)&DataGlobal_87F7E8, &v46, 0, lastSightRange + 3, 0); /*0x4da74e*/
        }
        v14 = (*((int (__thiscall **)(FootClass *))this->ptr_0 + 114))(this); /*0x4da784*/
        v47 = v47; /*0x4da78a*/
        this->lastSightHeight = v14; /*0x4da78e*/
        this->sightTimer[0] = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416]; /*0x4da79e*/
        this->sightTimer[1] = v47; /*0x4da7a4*/
        this->sightTimer[2] = 15; /*0x4da7aa*/
        goto LABEL_25; /*0x4da7aa*/
      }
      v9 -= *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - v8; /*0x4da6e5*/
    }
    if ( v9 ) /*0x4da6e9*/
      goto LABEL_25; /*0x4da6e9*/
    goto LABEL_21; /*0x4da6e9*/
  }
  LABEL_25:
  if ( !(*(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] % 16) /*0x4da7d8*/
    && (*((uint8_t (__thiscall **)(FootClass *))this->ptr_0 + 21))(this)
    && *(unsigned int *)((*((int (__thiscall **)(FootClass *))this->ptr_0 + 111))(this) + 60) )
  {
    v43 = *(unsigned int *)(*((int (__thiscall **)(FootClass *, int16_t *))this->ptr_0 + 110))(this, v45); /*0x4da7f2*/
    v16 = (*((int (__thiscall **)(FootClass *))this->ptr_0 + 111))(this); /*0x4da7f8*/
    TeamClass::Update_0(*(TeamClass **)(v16 + 60), 59, (int)this, v43, 0, 0); /*0x4da801*/
  }
  unknown538 = this->unknown538; /*0x4da80c*/
  if ( !this->locomotor[0] /*0x4da850*/
    || this->isSinking
    || this->isFallingDown
    || this->rockerLinkedUnit && !*(unsigned char *)((*((int (__thiscall **)(FootClass *))this->ptr_0 + 33))(this) + 1682)
    || this->inLimbo )
  {
    goto LABEL_67; /*0x4da856*/
  }
  if ( !this->locomotor[0] ) /*0x4da85c*/
    sub_7DC720(-2147467261); /*0x4da869*/
  result = (*(int (__stdcall **)(int))(*(unsigned int *)this->locomotor[0] + 64))(this->locomotor[0]); /*0x4da877*/
  if ( this->isAliveFlag )
  {
    if ( this )
      v18 = (*((int (__thiscall **)(FootClass *))this->ptr_0 + 11))(this) == 1 ? this : 0;
    else
      v18 = 0; /*0x4da88a*/
    if ( !this->locomotor[0] ) /*0x4da8a0*/
      sub_7DC720(-2147467261); /*0x4da8ad*/
    if ( ((*(uint8_t (__stdcall **)(int))(*(unsigned int *)this->locomotor[0] + 128))(this->locomotor[0]) /*0x4da934*/
       && !(*((uint8_t (__thiscall **)(FootClass *))this->ptr_0 + 118))(this)
       || this->target
       && *(unsigned char *)((*((int (__thiscall **)(FootClass *))this->ptr_0 + 33))(this) + 912)
       && v18
       && !(v18)->updateScanRange())
      && !(*(unsigned int *)&((unsigned int *)&stru_A8EB00)[416]
         % *(unsigned int *)((*((int (__thiscall **)(FootClass *))this->ptr_0 + 33))(this) + 660))
      && !(*((uint8_t (__thiscall **)(FootClass *))this->ptr_0 + 117))(this)
      && !(*((uint8_t (__thiscall **)(FootClass *))this->ptr_0 + 118))(this)
      && !this->isAttackedByLocomotor )
    {
      goto LABEL_66; /*0x4da934*/
    }
    if ( *(unsigned int *)((*((int (__thiscall **)(FootClass *))this->ptr_0 + 33))(this) + 664) ) /*0x4da94a*/
    {
      if ( !this->locomotor[0] ) /*0x4da952*/
        sub_7DC720(-2147467261); /*0x4da95f*/
      if ( !this->COMStub_Return0_32(this->locomotor[0]) /*0x4da9af*/
        && !(*(unsigned int *)&((unsigned int *)&stru_A8EB00)[416]
           % *(unsigned int *)((*((int (__thiscall **)(FootClass *))this->ptr_0 + 33))(this) + 664))
        && !(*((uint8_t (__thiscall **)(FootClass *))this->ptr_0 + 117))(this)
        && !(*((uint8_t (__thiscall **)(FootClass *))this->ptr_0 + 118))(this)
        && !this->isAttackedByLocomotor )
      {
        goto LABEL_66; /*0x4da9af*/
      }
    }
    if ( *(unsigned char *)((*((int (__thiscall **)(FootClass *))this->ptr_0 + 33))(this) + 1709) /*0x4da9f3*/
      && (*((int (__thiscall **)(FootClass *))this->ptr_0 + 114))(this) > 0
      && !(*((uint8_t (__thiscall **)(FootClass *))this->ptr_0 + 117))(this)
      && !(*((uint8_t (__thiscall **)(FootClass *))this->ptr_0 + 118))(this)
      && !this->isAttackedByLocomotor )
    {
  LABEL_66:
      ++this->unknown538; /*0x4da9fb*/
    }
  LABEL_67:
    if ( unknown538 == this->unknown538 ) /*0x4daa07*/
    {
      if ( !this->locomotor[0] ) /*0x4daa09*/
        sub_7DC720(-2147467261); /*0x4daa16*/
      if ( !(*(uint8_t (__stdcall **)(int))(*(unsigned int *)this->locomotor[0] + 128))(this->locomotor[0]) ) /*0x4daa24*/
        goto LABEL_136; /*0x4daa24*/
    }
    if ( this->isFallingDown /*0x4daa5c*/
      || this->isCrashing
      || this->rockerLinkedUnit && *(unsigned char *)((*((int (__thiscall **)(FootClass *))this->ptr_0 + 33))(this) + 1682) )
    {
  LABEL_136:
      if ( this->FootClass_field_bool_53C ) /*0x4daafa*/
      {
        unknown540 = this->unknown540; /*0x4dab02*/
        if ( !unknown540 || this->isFallingDown || this->isCrashing ) /*0x4dab14*/
        {
          Mixer::ReleaseChannel((Mixer *)this->audioController7); /*0x4dab2b*/
          this->FootClass_field_bool_53C = 0; /*0x4dab30*/
          this->unknown540 = 0; /*0x4dab36*/
        }
        else
        {
          this->unknown540 = unknown540 - 1; /*0x4dab1d*/
        }
      }
    }
    else
    {
      if ( !this->FootClass_field_bool_53C /*0x4daa87*/
        && *(int *)((*((int (__thiscall **)(FootClass *))this->ptr_0 + 33))(this) + 1284) > 0 )
      {
        AudioController::Stop((AudioController *)this->audioController7); /*0x4daa91*/
        v46 = this->location[0]; /*0x4daaa2*/
        vtable0 = (int (__thiscall **)(FootClass *))this->ptr_0; /*0x4daaa6*/
        v47 = this->location[1]; /*0x4daaab*/
        v48 = this->location[2]; /*0x4daab2*/
        v20 = vtable0[33](this) + 1268; /*0x4daac5*/
        v21 = Random::State(&Randomizer_Global); /*0x4daacb*/
        StartAudioControllerAt( /*0x4daae2*/
          *(unsigned int *)(*(unsigned int *)(v20 + 4) + 4 * (v21 % *(unsigned int *)(v20 + 16))),
          &v46,
          (int **)this->audioController7);
        this->FootClass_field_bool_53C = 1; /*0x4daae7*/
      }
      this->unknown540 = 3; /*0x4daaee*/
    }
    isFallingDown = this->isFallingDown; /*0x4dab3c*/
    if ( isFallingDown != this->wasFallingDown ) /*0x4dab4a*/
    {
      if ( isFallingDown /*0x4dab67*/
        && *(unsigned int *)((*((int (__thiscall **)(FootClass *))this->ptr_0 + 33))(this) + 1356) != -1
        && this->isBomb )
      {
        v46 = this->location[0]; /*0x4dab7c*/
        v47 = this->location[1]; /*0x4dab85*/
        v24 = (int (__thiscall **)(FootClass *))this->ptr_0; /*0x4dab89*/
        v48 = this->location[2]; /*0x4dab8e*/
        v25 = v24[33](this); /*0x4dab92*/
        StartAudioControllerAt(*(unsigned int *)(v25 + 1356), &v46, 0); /*0x4daba0*/
        this->wasFallingDown = this->isFallingDown; /*0x4dabab*/
      }
      else
      {
        this->wasFallingDown = this->isFallingDown; /*0x4dabbc*/
      }
    }
    isSinking = this->isSinking; /*0x4dabc7*/
    if ( isSinking != this->wasAlreadySinking ) /*0x4dabd5*/
    {
      if ( isSinking ) /*0x4dabdd*/
      {
        if ( *(unsigned int *)((*((int (__thiscall **)(FootClass *))this->ptr_0 + 33))(this) + 1364) != -1 ) /*0x4dabf3*/
        {
          v46 = this->location[0]; /*0x4dac02*/
          v47 = this->location[1]; /*0x4dac0b*/
          v27 = (int (__thiscall **)(FootClass *))this->ptr_0; /*0x4dac0f*/
          v48 = this->location[2]; /*0x4dac14*/
          v28 = v27[33](this); /*0x4dac18*/
          StartAudioControllerAt(*(unsigned int *)(v28 + 1364), &v46, 0); /*0x4dac26*/
        }
        if ( *(unsigned int *)((*((int (__thiscall **)(FootClass *))this->ptr_0 + 33))(this) + 1352) == -1 ) /*0x4dac3b*/
        {
          if ( *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 520) != -1 ) /*0x4dac86*/
          {
            v46 = this->location[0]; /*0x4dac94*/
            v47 = this->location[1]; /*0x4dac9b*/
            v48 = this->location[2]; /*0x4daca9*/
            StartAudioControllerAt( /*0x4dacb7*/
              *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 520),
              &v46,
              (int **)this->audioController7);
          }
        }
        else
        {
          v46 = this->location[0]; /*0x4dac49*/
          v47 = this->location[1]; /*0x4dac57*/
          v29 = (int (__thiscall **)(FootClass *))this->ptr_0; /*0x4dac5b*/
          v48 = this->location[2]; /*0x4dac60*/
          v30 = v29[33](this); /*0x4dac66*/
          StartAudioControllerAt(*(unsigned int *)(v30 + 1352), &v46, (int **)this->audioController7); /*0x4dac74*/
        }
      }
      else if ( !this->FootClass_field_bool_53C ) /*0x4dacbe*/
      {
        Mixer::ReleaseChannel((Mixer *)this->audioController7); /*0x4daccc*/
      }
      this->wasAlreadySinking = this->isSinking; /*0x4dacd7*/
    }
    isCrashing = this->isCrashing; /*0x4dacdd*/
    if ( isCrashing != this->wasAlreadyCrashing ) /*0x4daceb*/
    {
      if ( isCrashing ) /*0x4dacf3*/
      {
        Mixer::ReleaseChannel((Mixer *)this->audioController7); /*0x4dad01*/
        if ( *(unsigned int *)((*((int (__thiscall **)(FootClass *))this->ptr_0 + 33))(this) + 1360) != -1 /*0x4dad1f*/
          && (uint8_t)House::IsHumanPlayer((House *)this->owner) )
        {
          v46 = this->location[0]; /*0x4dad35*/
          v47 = this->location[1]; /*0x4dad3e*/
          v32 = (int (__thiscall **)(FootClass *))this->ptr_0; /*0x4dad42*/
          v48 = this->location[2]; /*0x4dad47*/
          v33 = v32[33](this); /*0x4dad4b*/
          StartAudioControllerAt(*(unsigned int *)(v33 + 1360), &v46, 0); /*0x4dad59*/
        }
        if ( *(unsigned int *)((*((int (__thiscall **)(FootClass *))this->ptr_0 + 33))(this) + 1348) != -1 ) /*0x4dad6f*/
        {
          v46 = this->location[0]; /*0x4dad7e*/
          v34 = (int (__thiscall **)(FootClass *))this->ptr_0; /*0x4dad82*/
          v47 = this->location[1]; /*0x4dad87*/
          v48 = this->location[2]; /*0x4dad8e*/
          v35 = v34[33](this); /*0x4dad94*/
          StartAudioControllerAt(*(unsigned int *)(v35 + 1348), &v46, (int **)this->audioController7); /*0x4dada2*/
        }
      }
      else if ( !this->FootClass_field_bool_53C ) /*0x4dada9*/
      {
        Mixer::ReleaseChannel((Mixer *)this->audioController7); /*0x4dadb7*/
      }
      this->wasAlreadyCrashing = this->isCrashing; /*0x4dadc2*/
    }
    v46 = this->location[0]; /*0x4dadd4*/
    v47 = this->location[1]; /*0x4dade1*/
    v48 = this->location[2]; /*0x4dade8*/
    StartAudioController(&v46, (int **)this->audioController7); /*0x4dadf0*/
    if ( (((unsigned int *)&stru_A8EB00)[416] & 0x3F) == 0x3F /*0x4dae37*/
      && !this->movementDestination
      && !this->onBridge
      && !*(unsigned char *)((*((int (__thiscall **)(FootClass *))this->ptr_0 + 111))(this) + 284)
      && (*((uint8_t (__thiscall **)(FootClass *))this->ptr_0 + 172))(this)
      && !(*((int (__thiscall **)(FootClass *))this->ptr_0 + 114))(this) )
    {
      v36 = (void (__thiscall **)(FootClass *, int *, int, unsigned int))this->ptr_0; /*0x4dae41*/
      v46 = 0; /*0x4dae4d*/
      v47 = 0; /*0x4dae51*/
      v48 = 0; /*0x4dae55*/
      v36[93](this, &v46, 1, 0); /*0x4dae59*/
    }
    v37 = (int (__stdcall ***)(unsigned int, int *, int16_t *))this->locomotor[0]; /*0x4dae5f*/
    locomotor = this->locomotor; /*0x4dae65*/
    v39 = 0; /*0x4dae6b*/
    if ( v37 )
    {
      v40 = (**v37)(v37, &stru_818E00.VoxelCaches[17], v45); /*0x4dae7e*/
      v39 = v40 < 0 ? 0 : *(unsigned int *)v45;
      if ( v40 < 0 && v40 != -2147467262 ) /*0x4dae99*/
        sub_7DC720(v40); /*0x4dae9c*/
      if ( v39 && (*(uint8_t (__stdcall **)(unsigned int))(*(unsigned int *)v39 + 20))(v40 < 0 ? 0 : *(unsigned int *)v45) )
      {
        if ( *locomotor ) /*0x4daeaf*/
          (*(void (__stdcall **)(int))(*(unsigned int *)*locomotor + 8))(*locomotor); /*0x4daeb9*/
        *locomotor = 0; /*0x4daebc*/
        (*(void (__stdcall **)(int, int *))(*(unsigned int *)v39 + 16))(v39, this->locomotor); /*0x4daec3*/
      }
    }
    v41 = (int (__thiscall **)(FootClass *))this->ptr_0; /*0x4daec6*/
    this->FootClass_field_bool_6B4 = 0; /*0x4daeca*/
    result = v41[118](this); /*0x4daed0*/
    if ( !result ) /*0x4daed8*/
      result = FootClass::ProcessEnterTransport(this); /*0x4daedc*/
    parasiteEatingMe = this->parasiteEatingMe; /*0x4daee1*/
    if ( parasiteEatingMe ) /*0x4daee9*/
      result = (*((int (__thiscall **)(ParasiteClass *))parasiteEatingMe->parasiteImUsing->ptr_0 + 23))(parasiteEatingMe->parasiteImUsing); /*0x4daef3*/
    if ( v39 ) /*0x4daef8*/
      return (*(char (__stdcall **)(int))(*(unsigned int *)v39 + 8))(v39); /*0x4daefd*/
  }
  return result; /*0x4daf00*/
}
// --- FootClass ---

void FootClass::onBuildingPlacement(uint32_t a, uint32_t b) {}
void FootClass::ReceiveGunner(FootClass* gunner) {}
void FootClass::RemoveGunner(FootClass* gunner) {}
bool FootClass::IsLeavingMap() const { return false; }
bool FootClass::canMove() const { return false; }
bool FootClass::onProductionComplete() const { return false; }
void FootClass::onCellEntry(CellStruct* cell) {}
void FootClass::processSuperWeapon(CellStruct* cell) {}
CoordStruct* FootClass::getMoveCoords(CoordStruct* out) { return nullptr; }
void FootClass::onMoveStart() {}
bool FootClass::canStop() { return false; }
bool FootClass::canRecruitTeamMember() { return false; }
void FootClass::onDrawComplete() {}
void FootClass::PlayIdleAnim(int idle_anim_number) {}
uint32_t FootClass::getMovementMode() { return 0; }
uint32_t FootClass::getPathDistance(uint32_t a, uint32_t b, uint32_t c) const { return 0; }
uint32_t FootClass::getPathCost(uint32_t a, uint32_t b, uint32_t c, uint32_t d) const { return 0; }
uint32_t FootClass::isAreaClear(uint32_t a, uint32_t b, uint32_t c) const { return 0; }
void FootClass::onAreaEntry(uint32_t a, uint32_t b) {}
uint32_t FootClass::getWaypointData(uint32_t a) { return 0; }
void FootClass::onWaypointReached(uint32_t a) {}
void FootClass::onPathComplete() {
void FootClass::onMovementDone() {
}
}
// 0x709290
bool FootClass::CanEnterCell(uint32_t a) { return false; 

  unsigned int *v3; // eax
  unsigned int v4; // eax
  bool result; // al
  FactoryClass *v6; // ecx
  int v7; // edi
  FactoryClass *v8; // ecx
  int v9; // edi
  unsigned __int8 **v10; // eax
  unsigned __int8 *v11; // eax
  bool v12; // bl
  bool v13; // al

  if ( !*(unsigned int *)(a1 + 692) && !(unsigned __int8)House::IsCurrentPlayer(*(House **)(a1 + 540)) ) /*0x7092aa*/
  {
    if ( a1 ) /*0x7092b5*/
    {
      if ( (*(unsigned char *)(a1 + 20) & 4) != 0 ) /*0x7092c3*/
      {
        v3 = *(unsigned int **)(a1 + 1492); /*0x7092c5*/
        if ( v3 ) /*0x7092cd*/
        {
          v4 = v3[9]; /*0x7092cf*/
          if ( !*(unsigned char *)(v4 + 175) && *(unsigned char *)(v4 + 173) && *(unsigned int *)(a1 + 172) == 2 ) /*0x7092ec*/
            return 1; /*0x7092ec*/
        }
      }
    }
  }
  result = FootClass::CanEnterBuilding((FootClass *)a1); /*0x7092f4*/
  if ( !result ) /*0x7092fb*/
    return result; /*0x7092fb*/
  if ( *(unsigned int *)(a1 + 172) == 2 )
  {
    if ( *(unsigned char *)((*(int (**)(int))(*(unsigned int *)a1 + 132))(a1) + 3434) ) /*0x709317*/
    {
      if ( !a1 || (*(unsigned char *)(a1 + 20) & 4) == 0 ) /*0x709331*/
        return 0; /*0x709338*/
      if ( *(unsigned int *)(a1 + 1444) == (*(int (**)(int))(*(unsigned int *)a1 + 444))(a1) ) /*0x709349*/
      {
        v6 = *(FactoryClass **)(a1 + 1300); /*0x70934b*/
        if ( !v6 || FactoryClass::GetState(v6) <= 0 ) /*0x709360*/
          return 1; /*0x709360*/
      }
    }
    if ( *(unsigned int *)(a1 + 172) == 2 )
    {
      if ( a1 )
      {
        if ( (*(int (**)(int))(*(unsigned int *)a1 + 44))(a1) == 1 )
        {
          if ( *(unsigned char *)(*(unsigned int *)((*(int (**)(int))(*(unsigned int *)a1 + 44))(a1) == 1 ? a1 + 0x6C4 : 1732)
                        + 3603) )
          {
            v7 = (*(unsigned char *)(a1 + 20) & 4) != 0 ? a1 : 0;
            if ( *(unsigned int *)(v7 + 1444) == (*(int (**)(int))(*(unsigned int *)a1 + 444))(a1) ) /*0x7093bc*/
            {
              v8 = *(FactoryClass **)(a1 + 1300); /*0x7093be*/
              if ( !v8 || FactoryClass::GetState(v8) <= 0 ) /*0x7093d3*/
                return 1; /*0x7093d3*/
            }
          }
        }
      }
    }
  }
  if ( *(unsigned char *)((*(int (**)(int))(*(unsigned int *)a1 + 132))(a1) + 1711) ) /*0x7093df*/
    return 1; /*0x7093df*/
  if ( *(unsigned int *)(a1 + 172) != 5 ) /*0x7093f0*/
    return 0; /*0x7093f7*/
  v9 = (*(int (**)(int, int))(*(unsigned int *)a1 + 996))(a1, a2); /*0x709403*/
  v10 = (unsigned __int8 **)(*(int (**)(int, int))(*(unsigned int *)a1 + 1016))(a1, v9); /*0x70940a*/
  v12 = 0; /*0x709424*/
  if ( v10 ) /*0x709412*/
  {
    v11 = *v10; /*0x709414*/
    if ( v11 ) /*0x709418*/
    {
      if ( v11[336] ) /*0x70941a*/
        v12 = 1; /*0x709412*/
    }
  }
  v13 = (*(int (**)(int, unsigned int))(*(unsigned int *)a1 + 740))(a1, *(unsigned int *)(a1 + 692)) == v9; /*0x70943d*/
  return !v12 || !v13; /*0x709450*/

}
} // namespace ra2
} // namespace game