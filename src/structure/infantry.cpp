// G42.32 P: tree-universe marker -- e4 tree-owned decls suppressed
#define GAMEMD_TREE_UNIVERSE 1
#define GAMEMD_E4_Random 1  // g57w10: e4 flat carrier wins over utility_ext twin (must precede infantry.hpp -> enums.hpp -> utility_ext.hpp)
#include "structure/infantry.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/MapSeed_e4.hpp"
#include "e4/classes/Random_e4.hpp"
#include "type/infantry_type.hpp"  // InfantryTypeClass full definition (Type->Engineer access)

#include <cstring>
#include <cmath>
#include "e4/e4_globals_decls.hpp"
#include "misc/locomotion.hpp"  // g57w10: HoverLocomotionClass carrier (DeployAnimation 0x514310); must precede stream_ext.hpp (gamemd::IStream breaks IPersistStream::Load override match)
#include "entity/anim.hpp"  // g57w10: AnimClass complete (ctor 0x421EA0); precede stream_ext (Save override match)
#include "system/cell.hpp"  // g57w10: CellClass complete
#include "core/stream_ext.hpp"
#include "misc/movement_ext.hpp"
#include "system/layer.hpp"
#include "e4/classes/Math_e4.hpp"  // g57c5 W5e Math supply (56 call sites)
#include "e4/classes/Coord_e4.hpp"  // g57w10: Coord carrier (2-arg static To_Cell twin G42.39a; Length/Subtract instance)
#include "e4/classes/Rules_e4.hpp"  // g57w10: Rules carrier (GetProductionTimeMult)
#include "e4/classes/HouseClass_e4.hpp"  // g57w10: HouseClass carrier (IonSensitivesShouldBeOffline)
#include "e4/classes/Cell_e4.hpp"  // g57w10: Cell carrier (GetGroundHeight static)
#include "e4/classes/BuildingClass_e4.hpp"  // g57w10: BuildingClass carrier (CreateIdleAnim static)
#include "e4/classes/Team_e4.hpp"  // g57w10: Team carrier (GetMember)
#include "e4/classes/BuildingLightClass_e4.hpp"  // g57w10: BuildingLightClass carrier (UpdateOscillation)
#include "entity/anim.hpp"  // g57w10: AnimClass complete (ctor 0x421EA0)
#include "system/cell.hpp"  // g57w10: CellClass complete
#include "system/map.hpp"
// ---- g57c5 W5 vocab (declaration-only) ----
namespace gamemd {
int ToCell(void* a1);  // g57c5 W5 vocab (csp)
} // namespace gamemd
// ---- g57c5 W5 end ----
// ---- g57b5 W5: qualified-call free-form vocab ----
namespace gamemd {

int CalcAngle(double p0, double p1);  // x4:signals@0x4cae30
void* _GetNumberOfActiveVirtualProcessors_SchedulerBase_details_Concurrency__uint_BEIXZ(void* a1);  // g57w10 r4 item6: raw fn_52:959 IDA demangler 噪声名原样词表 (真调用目标待 live asm 考古)
int Equal(Int64 *p_this, _DWORD *a2);  // x4:ida@0x517310
int ComPtr_Release_Alt(ComPtr *p_this);  // x4:ida@0x4b4d50
int InfantryClass_CanDeployAtCell(int16_t* p0, int16_t* p1);  // x4:signals@0x5221d0
int LayerClass_IsWithinUsableArea(int16_t* p0, char p1);  // x4:signals@0x578460
int GetProductionTimeMult(int p0);  // x4:signals@0x5fb2e0
int IonSensitivesShouldBeOffline();  // x4:empty@0x53a130
int Range(int p0, int p1);  // x4:signals@0x65c7e0
int RoundToInt(double p0);  // x4:signals@0x7c5f00
int To_Cell(int* p0);  // x4:signals@0x565730
int UpdateFootFacing(TechnoClass *p_this);  // x4:ida@0x515ed0
} // namespace gamemd
// ---- g57b5 W5 end ----
// ---- g57b5 W3: TU-local 真形 vocab (declaration-only) ----
namespace gamemd {
    void *CellCoord_To_CellObj(void *a1, void *a2);    // 0x5657A0 真形 (core/cellcoord.hpp 单源);
    int StartAudioControllerAt(int aP0, int *a2, int **a1);  // 0x7509E0 真形 (g57w10: a2 int* per call-site v24 int);
    struct stru_87F5F0_host {                      // 0x87F5F0 宿主 (object/supplied_bodies:106 同款)
        unsigned char q000[0x58];
        unsigned char __pad_58[0x280 - 0x58];      // 覆盖 __pad_58[416] = +0x1F8
    };
    extern stru_87F5F0_host stru_87F5F0;          // data: 0x87F5F0
} // namespace gamemd
// ---- g57b5 W3 end ----

namespace gamemd {

namespace {

constexpr uint32_t kInfantryFlag = (uint32_t)(AbstractFlags::Foot)
                                  | (uint32_t)(AbstractFlags::Object)
                                  | (uint32_t)(AbstractFlags::Techno);

} // anonymous namespace

// IDA: 0x517A50 -- InfantryClass::Construct (617B)
InfantryClass::InfantryClass() noexcept
    : Type(nullptr)
    , SequenceAnim((Sequence)(-1))
    , InfantryClass_field_timer_6C8{}
    , PanicDurationLeft(0)
    , PermanentBerzerk(false)
    , Technician(false)
    , InfantryClass_field_bool_6DA(false)
    , Crawling(false)
    , InfantryClass_field_bool_6DC(false)
    , InfantryClass_field_bool_6DD(false)
    // InfantryClass_field_6E0(0) -- G42.38: absent from hpp
    , ShouldDeploy(false)
    // InfantryClass_field_int_6E8(2) -- G42.38: absent from hpp
    , unused_6EC(0)
{
    abstractFlags = (void *)(kInfantryFlag);
}

// ============================================================
// Mission stubs
// ============================================================
int InfantryClass::Mission_Enter()
{
    return 10;
}

int InfantryClass::Mission_ParaDropApproach()
{
    hasParachute = true;
    return 5;
}

int InfantryClass::Mission_ParaDropOverfly()
{
    return 5;
}

// ============================================================
// Phase 3: Deploy/Undeploy
// ============================================================

// IDA: 0x4D5350 (ProcessDeploy, 614B)
void InfantryClass::ProcessDeploy()
{
    // Infantry-specific deploy logic
    // Check if can deploy, set mission, deploy animations
}

// 0x51d6f0
int InfantryClass::ProcessDeployAction(int deploy_type, bool a3, bool a4)
{
  int v4; // edi
  int16_t *v6; // eax
  int v7; // eax
  int v8; // ebp
  int unknown_int_6E8; // eax
  InfantryTypeClass *v10; // eax
  InfantryTypeClass *Type; // eax
  int v12; // eax
  int (__thiscall **ptr_0)(InfantryClass *); // edx
  int v14; // ecx
  int (__thiscall **v15)(InfantryClass *); // edx
  int v16; // ecx
  int ProductionTimeMult; // eax
  int *v18; // edx
  int v19; // ecx
  int v20; // eax
  int v21; // edi
  int v22; // edi
  int v24; // [esp+Ch] [ebp-Ch] BYREF
  int v25; // [esp+10h] [ebp-8h]
  int v26; // [esp+14h] [ebp-4h]

  v4 = deploy_type; /*0x51d6f6*/
  if ( deploy_type == -1 /*0x51d72b*/
    || !*(unsigned int *)(this->Type->Sequence[0] + 36 * deploy_type + 4)
    || this->SequenceAnim[0] == 33 && this->isFallingDown )
  {
    return 0; /*0x51d72b*/
  }
  if ( this->slaveOwner /*0x51d771*/
    && *(unsigned int *)((*((int (__thiscall **)(InfantryClass *))this->ptr_0 + 33))(this) + 2048)
    && ((double (__thiscall *)(InfantryClass *))*((unsigned int *)this->ptr_0 + 173))(this) == 1.0
    && v4 == 3 )
  {
    v4 = 39; /*0x51d773*/
    goto LABEL_12; /*0x51d778*/
  }
  if ( v4 == 5 && !this->Type->Crawls ) /*0x51d785*/
    return 0; /*0x51dadc*/
  LABEL_12:
  if ( this->Type->MovementZone[0] == 3 ) /*0x51d7a0*/
  {
    v6 = (int16_t *)(*((int (__thiscall **)(InfantryClass *, int *))this->ptr_0 + 110))(this, &deploy_type); /*0x51d7b0*/
    v7 = *((unsigned int *)CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, v6) + 59); /*0x51d7c1*/
    v8 = 1; /*0x51d7c7*/
    if ( (v7 == 6 || v7 == 2) && !this->onBridge ) /*0x51d7d6*/
    {
      v8 = 0; /*0x51d7e0*/
      switch ( v4 ) /*0x51d7ea*/
      {
        case 3: /*0x51d7ea*/
        case 6: /*0x51d7ea*/
          v4 = 17; /*0x51d83d*/
          break;
        case 2: /*0x51d7ea*/
        case 0: /*0x51d7ea*/
          v4 = 16; /*0x51d836*/
          break;
        case 9: /*0x51d7ea*/
          v4 = 18; /*0x51d7fa*/
          break;
        case 10: /*0x51d7ea*/
          v4 = 19; /*0x51d806*/
          break;
        case 11: /*0x51d7ea*/
          v4 = 20; /*0x51d812*/
          break;
        case 12: /*0x51d7ea*/
          v4 = 21; /*0x51d81e*/
          break;
        case 4: /*0x51d7ea*/
        case 8: /*0x51d7ea*/
          v4 = 22; /*0x51d82f*/
          break;
      }
    }
    unknown_int_6E8 = this->unknown_int_6E8; /*0x51d842*/
    if ( unknown_int_6E8 || v8 != 1 ) /*0x51d84f*/
    {
      if ( unknown_int_6E8 == 1 && !v8 ) /*0x51d886*/
      {
        v24 = this->location[0]; /*0x51d891*/
        v25 = this->location[1]; /*0x51d89c*/
        Type = this->Type; /*0x51d8a0*/
        v26 = this->location[2]; /*0x51d8a9*/
        StartAudioControllerAt(Type->EnterWaterSound, &v24, 0); /*0x51d8b3*/
      }
    }
    else
    {
      v24 = this->location[0]; /*0x51d85b*/
      v25 = this->location[1]; /*0x51d866*/
      v10 = this->Type; /*0x51d86a*/
      v26 = this->location[2]; /*0x51d873*/
      StartAudioControllerAt(v10->LeaveWaterSound, &v24, 0); /*0x51d87d*/
    }
    this->unknown_int_6E8 = v8; /*0x51d8b8*/
  }
  if ( !(*((uint8_t (__thiscall **)(InfantryClass *))this->ptr_0 + 21))(this) /*0x51d8ec*/
    || this->onBridge
    || *(int *)(this->Type->Sequence[0] + 828) <= 0
    || v4 )
  {
    if ( v4 == 3 && this->PanicDurationLeft >= 200 ) /*0x51d904*/
      v4 = 37; /*0x51d906*/
  }
  else
  {
    v4 = 23; /*0x51d8ee*/
  }
  v12 = this->SequenceAnim[0]; /*0x51d90b*/
  if ( v4 == v12 || v12 != -1 && !a3 && !byte_7EAF7C[4 * v12] ) /*0x51d925*/
    return 0; /*0x51d92e*/
  if ( v4 == 27 ) /*0x51d937*/
  {
    if ( *(unsigned int *)((*((int (__thiscall **)(InfantryClass *))this->ptr_0 + 33))(this) + 1388) != -1 ) /*0x51d949*/
    {
      v24 = this->location[0]; /*0x51d95d*/
      v25 = this->location[1]; /*0x51d966*/
      ptr_0 = (int (__thiscall **)(InfantryClass *))this->ptr_0; /*0x51d96a*/
      v26 = this->location[2]; /*0x51d96f*/
      v14 = *(unsigned int *)(ptr_0[33](this) + 1388); /*0x51d979*/
      StartAudioControllerAt(v14, &v24, 0); /*0x51d97f*/
    }
  }
  else if ( v4 == 31 && *(unsigned int *)((*((int (__thiscall **)(InfantryClass *))this->ptr_0 + 33))(this) + 1392) != -1 ) /*0x51d996*/
  {
    v24 = this->location[0]; /*0x51d9a6*/
    v15 = (int (__thiscall **)(InfantryClass *))this->ptr_0; /*0x51d9aa*/
    v25 = this->location[1]; /*0x51d9af*/
    v26 = this->location[2]; /*0x51d9b6*/
    v16 = *(unsigned int *)(v15[33](this) + 1392); /*0x51d9c2*/
    StartAudioControllerAt(v16, &v24, 0); /*0x51d9ca*/
  }
  this->SequenceAnim[0] = v4; /*0x51d9d2*/
  if ( v4 == 9 || v4 == 10 || v4 == 18 || v4 == 19 || v4 == 23 || v4 == 32 ) /*0x51d9f1*/
  {
    ProductionTimeMult = (int)Rules::GetProductionTimeMult( /*0x51da02*/
                                (Rules *)&stru_A8EB00.ptr_0[24],
                                (uint8_t)byte_7EAF7F[4 * v4]);
    v18 = &this->animation[2]; /*0x51da0d*/
    this->animation[2] = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416]; /*0x51da13*/
    v19 = v25; /*0x51da19*/
  }
  else
  {
    ProductionTimeMult = (uint8_t)byte_7EAF7F[4 * v4]; /*0x51da27*/
    v18 = &this->animation[2]; /*0x51da2e*/
    this->animation[2] = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416]; /*0x51da34*/
    v19 = v25; /*0x51da3a*/
  }
  v18->u32_4 = v19; /*0x51da3e*/
  v18->u32_8 = ProductionTimeMult; /*0x51da41*/
  this->animation[5] = ProductionTimeMult; /*0x51da44*/
  if ( a4 ) /*0x51da50*/
  {
    v20 = *(unsigned int *)(this->Type->Sequence[0] + 36 * v4 + 4); /*0x51da61*/
    if ( v20 <= 1 ) /*0x51da68*/
      v20 = 1; /*0x51da6a*/
    this->animation[0] = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, v20 - 1); /*0x51da84*/
  }
  else
  {
    this->animation[0] = 0; /*0x51da8c*/
  }
  if ( !this->health ) /*0x51da96*/
    (*((void (__thiscall **)(InfantryClass *))this->ptr_0 + 320))(this); /*0x51daa1*/
  v21 = v4 - 5; /*0x51daa7*/
  if ( v21 ) /*0x51daaa*/
  {
    v22 = v21 - 2; /*0x51daac*/
    if ( !v22 || v22 == 20 ) /*0x51dab4*/
    {
      this->Crawling = 0; /*0x51dab6*/
      return 1; /*0x51dac5*/
    }
  }
  else
  {
    this->Crawling = 1; /*0x51dac8*/
  }
  return 1; /*0x51dabd*/
}
// 0x5200b0
int InfantryClass::ProcessIdleDeploy()
{
  int PanicDurationLeft; // eax
  int v3; // eax
  int v4; // eax
  AbstractClass *movementDestination; // eax

  if ( this->PanicDurationLeft > 0 ) /*0x5200bb*/
  {
    if ( !this->Type->Fearless ) /*0x5200c7*/
      --this->PanicDurationLeft; /*0x5200d1*/
    if ( !this->PanicDurationLeft /*0x5200ef*/
      && !this->ammo
      && (*((uint8_t (__thiscall **)(InfantryClass *))this->ptr_0 + 171))(this) )
    {
      this->ammo = this->Type->Ammo; /*0x520105*/
    }
    PanicDurationLeft = this->PanicDurationLeft; /*0x520113*/
    if ( this->Crawling ) /*0x52010b*/
    {
      if ( PanicDurationLeft < 50 ) /*0x52011e*/
      {
        v3 = this->SequenceAnim[0]; /*0x520124*/
        if ( v3 != 27 && v3 != 28 && v3 != 29 && v3 != 30 ) /*0x520148*/
          (*((void (__thiscall **)(InfantryClass *, int, unsigned int, unsigned int))this->ptr_0 + 342))(this, 7, 0, 0); /*0x520158*/
      }
    }
    else if ( PanicDurationLeft >= 50 ) /*0x520163*/
    {
      v4 = this->SequenceAnim[0]; /*0x520165*/
      if ( v4 != 27 && v4 != 28 && v4 != 29 && v4 != 30 ) /*0x52017d*/
      {
        if ( !(uint8_t)((House *)this->owner)->IsCurrentPlayer() ) /*0x520185*/
          goto LABEL_42; /*0x520185*/
        if ( !this->movementDestination ) /*0x52018e*/
        {
          if ( !this->locomotor[0] ) /*0x520198*/
            sub_7DC720(-2147467261); /*0x5201a7*/
          if ( !(*(uint8_t (__stdcall **)(int))(*(unsigned int *)this->locomotor[0] + 16))(this->locomotor[0]) ) /*0x5201b5*/
          {
  LABEL_42:
            if ( !this->Type->Fraidycat ) /*0x5201c2*/
              (*((void (__thiscall **)(InfantryClass *, int, unsigned int, unsigned int))this->ptr_0 + 342))(this, 5, 0, 0); /*0x5201d6*/
          }
        }
      }
    }
  }
  (*((unsigned char *)&(movementDestination))) = this->Type->Fraidycat; /*0x5201e2*/
  if ( (unsigned char)movementDestination ) /*0x5201ea*/
  {
    if ( this->PanicDurationLeft > 50 ) /*0x5201f3*/
    {
      movementDestination = (AbstractClass *)this->SequenceAnim[0]; /*0x5201f5*/
      if ( movementDestination != 27 /*0x52020d*/
        && movementDestination != 28
        && movementDestination != 29
        && movementDestination != 30 )
      {
        (*((unsigned char *)&(movementDestination))) = this->isFallingDown; /*0x52020f*/
        if ( !(unsigned char)movementDestination ) /*0x520217*/
        {
          if ( !this->locomotor[0] ) /*0x520219*/
            sub_7DC720(-2147467261); /*0x520228*/
          (*((unsigned char *)&(movementDestination))) = (*(int (__stdcall **)(int))(*(unsigned int *)this->locomotor[0] + 16))(this->locomotor[0]); /*0x520236*/
          if ( !(unsigned char)movementDestination ) /*0x52023b*/
          {
            movementDestination = this->movementDestination; /*0x52023d*/
            if ( !movementDestination ) /*0x520245*/
              (*((unsigned char *)&(movementDestination))) = (*((char (__thiscall **)(InfantryClass *, unsigned char *, int, unsigned int))this->ptr_0 /*0x520254*/
                                             + 93))(
                                              this,
                                              &((unsigned int *)&stru_A8EB00)[1564],
                                              1,
                                              0);
          }
        }
      }
    }
  }
  return (char)movementDestination; /*0x52025a*/
}
// 0x521b60
bool InfantryClass::CanInitiateDeploy()
{
  int currentMission; // eax
  int v3; // esi

  currentMission = this->currentMission; /*0x521b63*/
  if ( currentMission == 6 || currentMission == 21 || this->unknownBool68D || this->isFallingDown ) /*0x521b89*/
    return 0; /*0x521b89*/
  if ( !this->locomotor[0] ) /*0x521b93*/
    sub_7DC720(-2147467261); /*0x521ba2*/
  if ( (*(uint8_t (__stdcall **)(int))(*(unsigned int *)this->locomotor[0] + 128))(this->locomotor[0]) /*0x521be7*/
    && (*((int (__thiscall **)(InfantryClass *))this->ptr_0 + 97))(this) != 5
    && (*((int (__thiscall **)(InfantryClass *))this->ptr_0 + 97))(this) != 15
    && ((*((int (__thiscall **)(InfantryClass *))this->ptr_0 + 97))(this) != 1 || this->target) )
  {
    return 0; /*0x521be7*/
  }
  v3 = this->SequenceAnim[0]; /*0x521bf1*/
  return v3 == -1 || byte_7EAF7C[4 * v3]; /*0x521c0b*/
}
// 0x5221d0
bool InfantryClass::CanDeployAtCell(int16_t *a2, int16_t *a3)
{

  InfantryClass *v5; // eax
  unsigned int *v6; // eax
  signed int v7; // ecx
  __int64 v8; // rax
  int v9; // eax
  unsigned int *v10; // eax
  unsigned __int8 *v11; // ecx
  int v12; // eax

  this->vt_slot_456(this); /*0x5221d8*/
  if ( HouseClass::IonSensitivesShouldBeOffline() ) /*0x5221e4*/
    return 0; /*0x5221f3*/
  if ( this->vt_slot_456(this) > 0 ) /*0x522202*/
    return 1; /*0x522202*/
  if ( (unsigned __int8)House::IsCurrentPlayer((House *)this->owner) ) /*0x52220e*/
  {
    v5 = (InfantryClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, a2); /*0x522221*/
    if ( v5 ) /*0x522228*/
    {
      if ( InfantryClass::ValidateAttackPosition(v5) ) /*0x52222c*/
        return 0; /*0x52223b*/
    }
  }
  v6 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, a3); /*0x52224a*/
  if ( !MapSeed::CheckTileMatch((MapSeed *)&dword_87F7E8, a2, a3, 7, this->onBridge[0], BYTE1(v6->u32_140) & 1, 0) ) /*0x52226b*/
    return 1; /*0x52226b*/
  if ( *a2 == *a3 && a2[1] == a3[1] ) /*0x522288*/
    return 0; /*0x522290*/
  v7 = abs32(a3[1] - a2[1]); /*0x5222a5*/
  v8 = *a3 - *a2; /*0x5222ac*/
  v9 = ((((v8) >> 32) & 0xFFFFFFFFu) ^ v8) - (((v8) >> 32) & 0xFFFFFFFFu); /*0x5222af*/
  if ( v9 <= v7 ) /*0x5222b3*/
    v9 = v7; /*0x5222b5*/
  if ( v9 == 1 ) /*0x5222ba*/
    return 0; /*0x5222c2*/
  if ( v9 >= 4 /*0x5222e3*/
    || !(unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&dword_87F7E8, a2, 1)
    || !(unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&dword_87F7E8, a3, 1) )
  {
    return 1; /*0x52232d*/
  }
  v10 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, a3); /*0x5222f4*/
  LOBYTE(v11) = this->onBridge[0]; /*0x5222ff*/
  v12 = v10[80] >> 8; /*0x522305*/
  (v12) = ((v12) & ~0xFF) | ((v12 & 1) & 0xFF); /*0x522308*/
  return Pathfinding::CalcDistance((int)&stru_87E8B8, a2, a3, (int)this, (int)v11, v12, 7) > 7; /*0x5221ed*/

}
// 0x521eb0
bool InfantryClass::CheckDeployPath()
{
  int v2; // esi
  AnimClass *result; // eax
  int *pathDirections; // ecx
  int *locomotor; // ebp
  int v6; // eax
  int InstanceCOM; // eax
  int v8; // eax
  int v9; // eax
  AnimClass *v10; // ecx
  unsigned int *v11; // eax
  LPVOID ppv; // [esp+30h] [ebp-1Ch] BYREF
  StreamClass v13; // [esp+34h] [ebp-18h] BYREF

  v2 = 0; /*0x521ebe*/
  if ( this->movementDestination ) /*0x521eb8*/
  {
    result = 0; /*0x521ec5*/
    pathDirections = this->pathDirections; /*0x521ec7*/
    do /*0x521ee1*/
    {
      if ( *pathDirections == -1 ) /*0x521ed2*/
        break; /*0x521ed2*/
      if ( *pathDirections == 8 ) /*0x521ed7*/
        break; /*0x521ed7*/
      ++v2; /*0x521ed9*/
      result = (AnimClass *)((char *)result + 1); /*0x521eda*/
      ++pathDirections; /*0x521edb*/
    }
    while ( (int)result < 24 ); /*0x521ee1*/
    if ( v2 >= 4 ) /*0x521ee6*/
      goto LABEL_38; /*0x521ee6*/
  }
  result = (AnimClass *)this->Type; /*0x521eec*/
  if ( !result->u8_D94 ) /*0x521ef2*/
    goto LABEL_38; /*0x521ef2*/
  locomotor = this->locomotor; /*0x521f00*/
  InfantryClass::updateOccupiedBuilding( /*0x521f0b*/
    (InfantryClass *)&v13,
    (int (__stdcall ****)(unsigned int, void *, unsigned int *))this->locomotor);
  if ( !*(unsigned int *)v13.m_Position ) /*0x521f16*/
    sub_7DC720(-2147467261); /*0x521f1d*/
  (*(void (__stdcall **)(unsigned int, int *))(**(unsigned int **)v13.m_Position + 12))(*(unsigned int *)v13.m_Position, &v13.m_Position); /*0x521f2e*/
  v13.m_Data = (void *)(memcmp(&v13.m_Position, &g_CLSID_JumpjetLocomotion, 0x10u) != 0); /*0x521f4e*/
  result = (AnimClass *)((ComPtr *)&v13)->Release_Alt(); /*0x521f56*/
  if ( v13.m_Data ) /*0x521f68*/
    goto LABEL_38; /*0x521f68*/
  result = (AnimClass *)*locomotor; /*0x521f6e*/
  *(unsigned int *)v13.m_Position = 0; /*0x521f71*/
  if ( !result ) /*0x521f77*/
    goto LABEL_38; /*0x521f77*/
  v6 = StreamClass::Set(&v13, this->locomotor); /*0x521f82*/
  if ( v6 < 0 && v6 != -2147467262 ) /*0x521f90*/
    sub_7DC720(v6); /*0x521f93*/
  result = *(AnimClass **)v13.m_Position; /*0x521f98*/
  if ( !*(unsigned int *)v13.m_Position ) /*0x521f9e*/
    goto LABEL_38; /*0x521f9e*/
  if ( (*(uint8_t (__stdcall **)(unsigned int))(**(unsigned int **)v13.m_Position + 28))(*(unsigned int *)v13.m_Position) ) /*0x521fa7*/
    goto LABEL_36; /*0x521fac*/
  ppv = 0; /*0x521fbe*/
  InstanceCOM = ((ObjectClass *)&ppv)->CreateInstanceCOM((IID *)&g_CLSID_WalkLocomotion, 0, 7u); /*0x521fc2*/
  if ( InstanceCOM < 0 && InstanceCOM != -2147467262 ) /*0x521fd0*/
    sub_7DC720(InstanceCOM); /*0x521fd3*/
  if ( !ppv ) /*0x521fde*/
    sub_7DC720(-2147467261); /*0x521fe5*/
  (*(void (__stdcall **)(LPVOID, InfantryClass *))(*(unsigned int *)ppv + 12))(ppv, this); /*0x521ff2*/
  v13.m_Data = 0; /*0x521ff9*/
  if ( ppv ) /*0x521fff*/
  {
    v8 = StreamClass::Set((StreamClass *)&v13.m_Data, &ppv); /*0x52200a*/
    if ( v8 < 0 && v8 != -2147467262 ) /*0x522018*/
      sub_7DC720(v8); /*0x52201b*/
  }
  ((COMObject *)&v13)->SwapReference((int)v13.m_Data); /*0x522029*/
  ((ObjectClass *)&v13.m_Data)->Release2COM(); /*0x522032*/
  v9 = *(unsigned int *)v13.m_Position; /*0x522037*/
  if ( !*(unsigned int *)v13.m_Position ) /*0x52203d*/
  {
    result = (AnimClass *)ppv; /*0x5220c9*/
    if ( !ppv ) /*0x5220cf*/
    {
  LABEL_38:
      (*((unsigned char *)&(result))) = 0; /*0x5220e5*/
      return result; /*0x5220e8*/
    }
    (*(void (__stdcall **)(LPVOID))(*(unsigned int *)ppv + 8))(ppv); /*0x5220d4*/
  LABEL_36:
    result = *(AnimClass **)v13.m_Position; /*0x5220d7*/
    if ( *(unsigned int *)v13.m_Position ) /*0x5220dd*/
      result = (AnimClass *)(*(int (__stdcall **)(unsigned int))(**(unsigned int **)v13.m_Position + 8))(*(unsigned int *)v13.m_Position); /*0x5220e2*/
    goto LABEL_38; /*0x5220e2*/
  }
  v10 = (AnimClass *)*locomotor; /*0x522043*/
  this->pathDirections[0] = -1; /*0x522046*/
  (*(void (__stdcall **)(int, AnimClass *))(*(unsigned int *)v9 + 12))(v9, v10); /*0x522054*/
  InfantryClass::checkBridgeClearance((InfantryClass *)this->locomotor, (int)ppv); /*0x52205e*/
  v11 = (unsigned int *)(*((int (__thiscall **)(AbstractClass *, int *))this->movementDestination->ptr_0 + 18))( /*0x522070*/
                    this->movementDestination,
                    &v13.m_Position);
  if ( !*locomotor ) /*0x52207b*/
    sub_7DC720(-2147467261); /*0x522087*/
  (*(void (__stdcall **)(int, unsigned int, unsigned int, unsigned int))(*(unsigned int *)*locomotor + 68))(*locomotor, *v11, v11[1], v11[2]); /*0x5220a0*/
  if ( ppv ) /*0x5220a9*/
    (*(void (__stdcall **)(LPVOID))(*(unsigned int *)ppv + 8))(ppv); /*0x5220ae*/
  result = *(AnimClass **)v13.m_Position; /*0x5220b1*/
  if ( *(unsigned int *)v13.m_Position ) /*0x5220b7*/
    result = (AnimClass *)(*(int (__stdcall **)(unsigned int))(**(unsigned int **)v13.m_Position + 8))(*(unsigned int *)v13.m_Position); /*0x5220bc*/
  (*((unsigned char *)&(result))) = 1; /*0x5220bf*/
  return result; /*0x5220c1*/
}
// 0x522fe0
int InfantryClass::CreateDeployLocomotor(int a2, int a3, int a4)  // g57b5 W4: raw 真值补参 (a2,a3,a4)
{
  void (__thiscall **ptr_0)(InfantryClass *, CellClass *, int); // edi
  CellClass *v6; // eax
  int InstanceCOM; // eax
  int v8; // eax
  LPVOID v9; // edi
  LPVOID v10; // eax
  int v11; // edx
  int v12; // eax
  void (__thiscall **v13)(InfantryClass *, CellClass *, int); // edi
  int v14; // edx
  CellClass *v15; // eax
  LPVOID ppv; // [esp+50h] [ebp-8h] BYREF
  int v18; // [esp+54h] [ebp-4h] BYREF

  if ( (*((uint8_t (__thiscall **)(InfantryClass *))this->ptr_0 + 21))(this) /*0x52302c*/
    || (*((uint8_t (__thiscall **)(InfantryClass *))this->ptr_0 + 88))(this)
    || this->isImmobilized
    || (*((uint8_t (__thiscall **)(InfantryClass *))this->ptr_0 + 117))(this)
    || (*((uint8_t (__thiscall **)(InfantryClass *))this->ptr_0 + 118))(this) )
  {
    return 0; /*0x523239*/
  }
  if ( !this->locomotor[0] ) /*0x52303a*/
    sub_7DC720(-2147467261); /*0x523049*/
  this->HasValidWeapon(this->locomotor[0], 0); /*0x523059*/
  (*((void (__thiscall **)(InfantryClass *, int *))this->ptr_0 + 61))(this, &a2); /*0x523068*/
  ptr_0 = (void (__thiscall **)(InfantryClass *, CellClass *, int))this->ptr_0; /*0x52306e*/
  this->frozenStill = 1; /*0x52307c*/
  v6 = Coord::To_Cell((Coord *)&DataGlobal_87F7E8, &a2); /*0x523083*/
  ptr_0[288](this, v6, 1); /*0x52308b*/
  if ( !this->locomotor[0] ) /*0x523091*/
    sub_7DC720(-2147467261); /*0x5230ac*/
  (*(void (__stdcall **)(int, int, int, int))(*(unsigned int *)this->locomotor[0] + 120))(this->locomotor[0], a2, a3, a4); /*0x5230c7*/
  ppv = 0; /*0x5230d8*/
  InstanceCOM = CreateInstanceCOM((ObjectClass *)&ppv, (IID *)&g_CLSID_HoverLocomotion, 0, 7u); /*0x5230dc*/
  if ( InstanceCOM < 0 && InstanceCOM != -2147467262 ) /*0x5230ea*/
    sub_7DC720(InstanceCOM); /*0x5230ed*/
  v18 = 0; /*0x5230f6*/
  if ( ppv ) /*0x5230fc*/
  {
    v8 = StreamClass::Set((StreamClass *)&v18, &ppv); /*0x523107*/
    if ( v8 < 0 && v8 != -2147467262 ) /*0x523115*/
      sub_7DC720(v8); /*0x523118*/
  }
  if ( (Coord::To_Cell((Coord *)&DataGlobal_87F7E8, &a2)->flags[0] & 0x100) != 0 ) /*0x523135*/
    a4 += *(unsigned int *)&((unsigned int *)&stru_A8EB00)[1616]; /*0x523143*/
  if ( !ppv ) /*0x52314d*/
    sub_7DC720(-2147467261); /*0x523154*/
  (*(void (__stdcall **)(LPVOID, InfantryClass *))(*(unsigned int *)ppv + 12))(ppv, this); /*0x523161*/
  if ( !v18 ) /*0x523170*/
    sub_7DC720(-2147467261); /*0x523177*/
  (*(void (__stdcall **)(int, int))(*(unsigned int *)v18 + 12))(v18, this->locomotor[0]); /*0x523184*/
  v9 = (LPVOID)this->locomotor[0]; /*0x523187*/
  v10 = ppv; /*0x52318d*/
  if ( v9 != ppv ) /*0x523193*/
  {
    this->locomotor[0] = (int)ppv; /*0x523197*/
    if ( v10 ) /*0x52319d*/
      (*(void (__stdcall **)(LPVOID))(*&v10->q010))(v10); /*0x5231a2*/
    if ( v9 ) /*0x5231a7*/
      (*(void (__stdcall **)(LPVOID))(*(unsigned int *)v9 + 8))(v9); /*0x5231ac*/
  }
  v11 = a2; /*0x5231af*/
  v12 = a3; /*0x5231b3*/
  v13 = (void (__thiscall **)(InfantryClass *, CellClass *, int))this->ptr_0; /*0x5231bd*/
  this->isImmobilized = 1; /*0x5231c1*/
  this->chronoDestCoords[0] = v11; /*0x5231c8*/
  v14 = a4; /*0x5231ca*/
  this->chronoDestCoords[1] = v12; /*0x5231ce*/
  this->chronoDestCoords[2] = v14; /*0x5231d6*/
  v15 = Coord::To_Cell((Coord *)&DataGlobal_87F7E8, &a2); /*0x5231de*/
  v13[288](this, v15, 1); /*0x5231e6*/
  if ( !this->locomotor[0] ) /*0x5231ec*/
    sub_7DC720(-2147467261); /*0x5231f9*/
  (*(void (__stdcall **)(int, unsigned int))(*(unsigned int *)this->locomotor[0] + 156))(this->locomotor[0], 0); /*0x523208*/
  if ( v18 ) /*0x523214*/
    (*(void (__stdcall **)(int))(*(unsigned int *)v18 + 8))(v18); /*0x523219*/
  if ( ppv ) /*0x523222*/
    (*(void (__stdcall **)(LPVOID))(*(unsigned int *)ppv + 8))(ppv); /*0x523227*/
  return 1; /*0x52322c*/
}
// 0x522c00
bool InfantryClass::StartBombDeploy(char a2)
{
  AnimClass *result; // eax

  if ( a2 ) /*0x522c09*/
    return (*((AnimClass *(__thiscall **)(InfantryClass *, int, unsigned int, unsigned int))this->ptr_0 + 342))(this, 32, 0, 0); /*0x522c09*/
  result = (AnimClass *)(*((int (__thiscall **)(InfantryClass *))this->ptr_0 + 225))(this); /*0x522c0d*/
  if ( (unsigned char)result ) /*0x522c15*/
    return (*((AnimClass *(__thiscall **)(InfantryClass *, int, unsigned int, unsigned int))this->ptr_0 + 342))(this, 32, 0, 0); /*0x522c21*/
  return result; /*0x522c27*/
}
// 0x5228d0
bool InfantryClass::IsBombDeployMission()
{
  int v1; // eax
  AnimClass *result; // eax

  result = 0; /*0x5228fa*/
  if ( this->Type->Deployer ) /*0x5228d6*/
  {
    v1 = this->SequenceAnim[0]; /*0x5228e0*/
    if ( v1 == 27 || v1 == 28 || v1 == 29 || v1 == 30 ) /*0x5228f8*/
      return (AnimClass *)1; /*0x5228de*/
  }
  return result; /*0x5228ff*/
}
// 0x514310
char __stdcall HoverLocomotionClass::DeployAnimation()
{

  char *v1; // edi
  unsigned char *Owner; // ecx
  int v4; // eax
  int v5; // ecx
  double v6; // st7
  unsigned __int16 *v7; // eax
  int v8; // ecx
  int *v9; // ebx
  __int16 v10; // bx
  int v11; // ebx
  CellStruct *v12; // eax
  bool v13; // bl
  int v14; // ecx
  unsigned __int16 *v15; // eax
  int v16; // eax
  int v17; // edx
  unsigned __int16 *v18; // eax
  int Member; // eax
  unsigned __int16 v20; // bx
  unsigned int *v21; // eax
  unsigned int *v22; // eax
  bool v23; // al
  int v24; // eax
  int v25; // ecx
  int v26; // ebx
  unsigned int *v27; // ecx
  int v28; // ecx
  unsigned int v29; // ebx
  unsigned int v30; // edi
  unsigned __int16 *v31; // eax
  unsigned __int16 *v32; // eax
  int v33; // ecx
  int v34; // eax
  CellClass *v35; // eax
  unsigned char *v36; // ecx
  CellClass *v37; // edi
  int v38; // eax
  int v39; // ecx
  unsigned int *v40; // ebx
  char v41; // bl
  unsigned char *v42; // ecx
  AnimClass *v43; // eax
  int *v44; // ecx
  unsigned int *Value; // eax
  int v46; // ecx
  int v47; // ecx
  int v48; // eax
  int v49; // ecx
  int *v50; // edx
  CellClass *v51; // eax
  int *v52; // ecx
  int *v53; // eax
  signed int v54; // edi
  unsigned short *v55; // [esp+20h] [ebp-5Ch]
  double v56; // [esp+34h] [ebp-48h] BYREF
  double v57; // [esp+3Ch] [ebp-40h] BYREF
  int v58; // [esp+48h] [ebp-34h] BYREF
  int v59; // [esp+4Ch] [ebp-30h] BYREF
  int v60; // [esp+50h] [ebp-2Ch]
  int v61; // [esp+54h] [ebp-28h]
  int v62; // [esp+58h] [ebp-24h]
  double v63; // [esp+5Ch] [ebp-20h] BYREF
  int v64; // [esp+64h] [ebp-18h]
  unsigned __int16 *v65; // [esp+70h] [ebp-Ch] BYREF
  int v66; // [esp+74h] [ebp-8h]
  int v67; // [esp+78h] [ebp-4h]

  if ( (*(unsigned __int8 (**)(HoverLocomotionClass *))(*&this->Powered + 16))(this) ) /*0x514322*/
  {
    v1 = (char *)this - 4; /*0x51432d*/
    if ( (*(unsigned __int8 (**)(HoverLocomotionClass *))(*&this->Powered + 16))(this) ) /*0x514337*/
    {
      UpdateFootFacing((TechnoClass *)((char *)this - 4)); /*0x514344*/
      Owner = (unsigned char *)this->Owner; /*0x514349*/
      if ( !Owner->u32_90 ) /*0x51434c*/
        return 0; /*0x51435e*/
      v4 = (*(int (**)(unsigned char *))(*(unsigned int *)Owner + 464))(Owner); /*0x514363*/
      v5 = this->Owner; /*0x514369*/
      v58 = v4; /*0x51436c*/
      LODWORD(v57) = (*(int (**)(int))(*(unsigned int *)v5 + 1336))(v5); /*0x514378*/
      v6 = (double)SLODWORD(v57) * *&this->CurrentSpeed; /*0x514380*/
      LOWORD(v7) = Math::RoundToInt(v6); /*0x514383*/
      v8 = this->Owner; /*0x514388*/
      LODWORD(v56) = v7; /*0x51438b*/
      v9 = (int *)(*(int (**)(int, unsigned __int16 **))(*(unsigned int *)v8 + 72))(v8, &v65); /*0x514399*/
      Int64::Equal((Int64 *)v9, &this->Dest[2]); /*0x5143a1*/
      Math::CalcAngle((double)v9[1] - (double)this->HeadToCoord[0], (double)this->Dest[2] - (double)*v9); /*0x5143be*/
      v10 = Math::RoundToInt(v6); /*0x5143d7*/
      if ( !LODWORD(v56) /*0x514403*/
        && !abs16(*(unsigned short *)ProgressTimer::GetValue(&this->u32_3C, &v57) - v10) )
      {
        v13 = 1; /*0x514466*/
        if ( *((unsigned int *)v1 + 9) != *(unsigned int *)&stru_A8E960.waypoints[494] /*0x514438*/
          || v1->owningHouseIndex != *(unsigned int *)&stru_A8E960.waypoints[498]
          || v1->fallRate != *(unsigned int *)&stru_A8E960.waypoints[502] )
        {
          v11 = v1->ptr_C; /*0x51443a*/
          v55 = Coord::ToCell((Coord *)(v1 + 36), &v57); /*0x514449*/
          v12 = (CellStruct *)(*(int (**)(int, double *))(*(unsigned int *)v11 + 440))(v11, &v56); /*0x514451*/
          if ( !(unsigned __int8)CellStruct::Equals(v12, v55) ) /*0x514459*/
            v13 = 0; /*0x514438*/
        }
        v14 = v1->ptr_C; /*0x514468*/
        v1->u32_48 = 0; /*0x51446b*/
        v1->u32_4C = 1072693248; /*0x514472*/
        (*(void (**)(int, unsigned int, int, double))(*(unsigned int *)v14 + 1348))(v14, 0, 1072693248, v6); /*0x514482*/
        MovementAI::StepFootClass((MovementAI *)((char *)this - 4), 0); /*0x51448c*/
        if ( v13 ) /*0x514493*/
          MovementAI::MainFootClass((MovementAI *)((char *)this - 4), 1); /*0x514499*/
        LODWORD(v57) = (*(int (**)(int))(*(unsigned int *)this->Owner + 1336))(this->Owner); /*0x5144a9*/
        LOWORD(v15) = Math::RoundToInt(v6); /*0x5144b4*/
        LODWORD(v56) = v15; /*0x5144b9*/
      }
      v16 = *(unsigned int *)(this->Owner + 156); /*0x5144ce*/
      v17 = *(unsigned int *)(this->Owner + 164); /*0x5144d5*/
      v60 = *(unsigned int *)(this->Owner + 160) - this->HeadToCoord[0]; /*0x5144d8*/
      v67 = v17; /*0x5144e0*/
      v59 = v16 - this->Dest[2]; /*0x5144e9*/
      Math::Sqrt((double)v59 * (double)v59 + (double)v60 * (double)v60); /*0x514502*/
      LOWORD(v18) = Math::RoundToInt(v6); /*0x51450a*/
      if ( SLODWORD(v56) >= (int)v18 ) /*0x514513*/
      {
        *(unsigned char *)(this->Owner + 1718) = 1; /*0x51451e*/
        *(unsigned char *)(this->Owner + 1719) = 0; /*0x514528*/
        LOBYTE(this->HoverLocomotionClass_field_6C) = 0; /*0x514531*/
        MovementAI::StepFootClass((MovementAI *)((char *)this - 4), 0); /*0x514535*/
        if ( *(unsigned int *)(this->Owner + 1504) == -1 /*0x51456a*/
          && this->RefCount == *(unsigned int *)&stru_A8E960.waypoints[494]
          && this->Dest[0] == *(unsigned int *)&stru_A8E960.waypoints[498]
          && this->Dest[1] == *(unsigned int *)&stru_A8E960.waypoints[502] )
        {
          this->Dest[2] = *(unsigned int *)&stru_A8E960.waypoints[494]; /*0x51456f*/
          this->HeadToCoord[0] = *(unsigned int *)&stru_A8E960.waypoints[498]; /*0x514578*/
          this->HeadToCoord[1] = *(unsigned int *)&stru_A8E960.waypoints[502]; /*0x514581*/
        }
        Member = Team::GetMember((Team *)this->Owner, 0); /*0x514589*/
        v20 = *(unsigned short *)&stru_A8E960.waypoints[462]; /*0x51458e*/
        LODWORD(v57) = *(unsigned int *)&stru_A8E960.waypoints[462]; /*0x514596*/
        if ( Member ) /*0x51459a*/
        {
          v21 = (unsigned int *)(*(int (**)(int, unsigned __int16 **, int))(*(unsigned int *)Member + 76))( /*0x5145a9*/
                            Member,
                            &v65,
                            this->Owner);
          LOWORD(v57) = *v21 / 256; /*0x5145bc*/
          WORD1(v57) = v21[1] / 256; /*0x5145d0*/
          v20 = LOWORD(v57); /*0x5145d5*/
        }
        v22 = (unsigned int *)(*(int (**)(int, int *))(*(unsigned int *)this->Owner + 440))(this->Owner, &v59); /*0x5145e7*/
        v23 = *v22 == ((WORD1(v57) & 0xFFFFu) << 16 | (v20 & 0xFFFFu)); /*0x5145f0*/
        if ( this->RefCount != *(unsigned int *)&stru_A8E960.waypoints[494] /*0x51462c*/
          || this->Dest[0] != *(unsigned int *)&stru_A8E960.waypoints[498]
          || this->Dest[1] != *(unsigned int *)&stru_A8E960.waypoints[502]
          || v23 )
        {
          v24 = MovementAI::MainFootClass((MovementAI *)((char *)this - 4), 1); /*0x514636*/
          v25 = this->Owner; /*0x51463b*/
          v26 = v24; /*0x51463e*/
          if ( !*(unsigned char *)(v25 + 144) || *(unsigned char *)(v25 + 129) || v25->u8_8D ) /*0x51465c*/
            return 7; /*0x5149f4*/
          if ( !v24 /*0x514696*/
            && this->Dest[2] == *(unsigned int *)&stru_A8E960.waypoints[494]
            && this->HeadToCoord[0] == *(unsigned int *)&stru_A8E960.waypoints[498]
            && this->HeadToCoord[1] == *(unsigned int *)&stru_A8E960.waypoints[502] )
          {
            v65 = *(unsigned __int16 **)(v25 + 156); /*0x5146a4*/
            v66 = *(unsigned int *)(v25 + 160); /*0x5146ab*/
            v67 = *(unsigned int *)(v25 + 164); /*0x5146b2*/
            (*(void (**)(int, unsigned __int16 **))(*(unsigned int *)v25 + 240))(v25, &v65); /*0x5146bd*/
            (*(void (**)(int, int))(*(unsigned int *)this->Owner + 396))(this->Owner, 2); /*0x5146ca*/
            v25 = this->Owner; /*0x5146d0*/
            if ( !*(unsigned char *)(v25 + 144) || *(unsigned char *)(v25 + 129) || v25->u8_8D ) /*0x5146e7*/
              return 0; /*0x5146f9*/
          }
          if ( v26 == 7 ) /*0x5146ff*/
          {
            if ( v25->u8_684 >= 0 ) /*0x51470d*/
              return 0; /*0x514717*/
            (*(void (**)(unsigned int, unsigned int, int))(*v1->ptr_C + 1152))(v1->ptr_C, 0, 1); /*0x514723*/
            v1->customSound_controller = 0; /*0x51472b*/
            v1->u32_48 = 0; /*0x51472e*/
            v1->u32_54 = 0; /*0x514731*/
            v1->u32_4C = 0; /*0x514734*/
            (*(void (**)(unsigned int, unsigned int, unsigned int))(*v1->ptr_C + 1348))(v1->ptr_C, 0, 0); /*0x514740*/
          }
          else if ( v26 ) /*0x51497c*/
          {
            v39 = *((unsigned int *)v1 + 3); /*0x514982*/
            *((unsigned int *)v1 + 20) = 0; /*0x514985*/
            *((unsigned int *)v1 + 18) = 0; /*0x514988*/
            *((unsigned int *)v1 + 21) = 0; /*0x51498b*/
            *((unsigned int *)v1 + 19) = 0; /*0x51498e*/
            (*(void (**)(int, unsigned int, unsigned int))(*(unsigned int *)v39 + 1348))(v39, 0, 0); /*0x514995*/
            v40 = v1 + 36; /*0x5149a4*/
            if ( *((unsigned int *)v1 + 9) != *(unsigned int *)&stru_A8E960.waypoints[494] /*0x5149c1*/
              || v1->owningHouseIndex != *(unsigned int *)&stru_A8E960.waypoints[498]
              || v1->fallRate != *(unsigned int *)&stru_A8E960.waypoints[502] )
            {
              (*(void (**)(unsigned int, unsigned int *))(**((unsigned int **)v1 + 3) + 244))(*((unsigned int *)v1 + 3), v40); /*0x5149cb*/
              *v40 = *(unsigned int *)&stru_A8E960.waypoints[494]; /*0x5149d7*/
              *((unsigned int *)v1 + 10) = *(unsigned int *)&stru_A8E960.waypoints[498]; /*0x5149df*/
              v1->fallRate = *(unsigned int *)&stru_A8E960.waypoints[502]; /*0x5149e7*/
            }
            goto LABEL_66; /*0x5149ea*/
          }
        }
      }
      if ( SLODWORD(v56) > 0 ) /*0x51474c*/
      {
        v27 = (unsigned int *)this->Owner; /*0x514752*/
        v65 = (unsigned __int16 *)v27[39]; /*0x514761*/
        v66 = v27[40]; /*0x514768*/
        v67 = v27[41]; /*0x51476f*/
        if ( v27->getCoordCenter() /*0x5147a2*/
          && (this->Dest[2] != *(unsigned int *)&stru_A8E960.waypoints[494]
           || this->HeadToCoord[0] != *(unsigned int *)&stru_A8E960.waypoints[498]
           || this->HeadToCoord[1] != *(unsigned int *)&stru_A8E960.waypoints[502]) )
        {
          v28 = this->Owner; /*0x5147a4*/
          v63 = v28->q09C; /*0x5147b3*/
          v64 = *(unsigned int *)(v28 + 164); /*0x5147c1*/
          (*(void (**)(int, double *))(*(unsigned int *)v28 + 244))(v28, &v63); /*0x5147cc*/
          *(unsigned char *)(this->Owner + 1718) = 0; /*0x5147d5*/
          *(unsigned char *)(this->Owner + 1719) = 0; /*0x5147df*/
        }
        v61 = (int)v65; /*0x5147f2*/
        v62 = v66; /*0x5147fa*/
        v57 = (double)(*(__int16 *)ProgressTimer::GetValue(&this->u32_3C, &v59) - 0x3FFF) /*0x51481a*/
            * -0.00009587672516830327;
        v29 = HIDWORD(v57); /*0x514822*/
        v30 = LODWORD(v57); /*0x514826*/
        v56 = (double)SLODWORD(v56); /*0x51482c*/
        v63 = (double)v62; /*0x514834*/
        Math::SinCos(v57); /*0x514838*/
        LOWORD(v31) = Math::RoundToInt(v6); /*0x514845*/
        LODWORD(v57) = v31; /*0x51484c*/
        Math::ArcTan2(COERCE_DOUBLE((((v29 & 0xFFFFFFFFull)) << 32 | (v30 & 0xFFFFFFFFull)))); /*0x514850*/
        LOWORD(v32) = Math::RoundToInt(v6 * v56 + (double)v61); /*0x514860*/
        v33 = this->Owner; /*0x514865*/
        v65 = v32; /*0x51486e*/
        v66 = LODWORD(v57); /*0x514878*/
        v34 = *(unsigned int *)(v33 + 156); /*0x51487c*/
        HIDWORD(v63) = *(unsigned int *)(v33 + 160); /*0x514881*/
        v64 = *(unsigned int *)(v33 + 164); /*0x514888*/
        WORD1(v56) = SHIDWORD(v63) / 256; /*0x5148a7*/
        if ( (unsigned __int16)((int)v65 / 256) == (unsigned __int16)(v34 / 256) /*0x5148d9*/
          && (unsigned __int16)(SLODWORD(v57) / 256) == WORD1(v56) )
        {
          v41 = *(unsigned char *)(v33 + 116); /*0x5149f7*/
          *(unsigned char *)(v33 + 116) = 0; /*0x5149fa*/
          (*(void (**)(int, unsigned __int16 **))(*(unsigned int *)this->Owner + 436))(this->Owner, &v65); /*0x514a08*/
          ObjectClass::SetAnim((ObjectClass *)this->Owner, v58); /*0x514a16*/
          *(unsigned char *)(this->Owner + 116) = v41; /*0x514a1e*/
        }
        else
        {
          (*(void (**)(int, unsigned int))(*(unsigned int *)v33 + 292))(v33, 0); /*0x5148e3*/
          (*(void (**)(int, unsigned __int16 **))(*(unsigned int *)this->Owner + 436))(this->Owner, &v65); /*0x5148f3*/
          ObjectClass::SetAnim((ObjectClass *)this->Owner, v58); /*0x514901*/
          v35 = Coord::To_Cell((Coord *)&dword_87F7E8, &v65); /*0x514910*/
          v36 = (unsigned char *)this->Owner; /*0x514915*/
          v37 = v35; /*0x514918*/
          if ( !v36[140] /*0x51493f*/
            && (v35->flags & 0x100) != 0
            && (*(int (**)(unsigned char *))(*(unsigned int *)v36 + 456))(v36) >= *(int *)&stru_A8E960.waypoints[546] )
          {
            *(unsigned char *)(this->Owner + 140) = 1; /*0x514944*/
          }
          v38 = this->Owner; /*0x51494b*/
          if ( *(unsigned char *)(v38 + 140) == 1 && (v37->flags & 0x100) == 0 ) /*0x51495d*/
            *(unsigned char *)(v38 + 140) = 0; /*0x51495f*/
          (*(void (**)(int, int))(*(unsigned int *)this->Owner + 292))(this->Owner, 1); /*0x51496d*/
        }
      }
    }
  }
LABEL_66:
  if ( (*(unsigned __int8 (**)(HoverLocomotionClass *))(*&this->u32_2C + 128))(this) ) /*0x514a24*/
  {
    if ( !(*(unsigned int *)&stru_A8E960.random[528] % 10) ) /*0x514a3d*/
    {
      v42 = (unsigned char *)this->Owner; /*0x514a47*/
      if ( !v42[140] && *(unsigned int *)((*(int (**)(unsigned char *))(*(unsigned int *)v42 + 444))(v42) + 236) == 2 ) /*0x514a63*/
      {
        if ( dword_8871E0->InfantryBrute ) /*0x514a6a*/
        {
          v43 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x514a79*/
          if ( v43 ) /*0x514a83*/
          {
            v44 = (int *)(this->Owner + 156); /*0x514a8a*/
            v65 = (unsigned __int16 *)*v44; /*0x514a9d*/
            v66 = v44[1]; /*0x514aa4*/
            v67 = v44[2]; /*0x514ab0*/
            AnimClass::ctor(v43, (void *)dword_8871E0->InfantryBrute, (int *)&v65, 0, 1, (void *)0x600, 0, 0); /*0x514ac3*/
          }
        }
      }
    }
  }
  BuildingLightClass::UpdateOscillation((BuildingLightClass *)((char *)this - 4)); /*0x514acb*/
  if ( LOBYTE(this->CurrentWobbles[1]) )
  {
    if ( !(*(unsigned __int8 (**)(HoverLocomotionClass *))(*&this->u32_2C + 96))(this) ) /*0x514ade*/
      goto LABEL_81; /*0x514ade*/
    Value = ProgressTimer::GetValue((ProgressTimer *)(this->Owner + 904), &v59); /*0x514af3*/
    v46 = this->Owner; /*0x514b07*/
    (v58) = ((v58) & ~0xFFFF) | ((*(unsigned short *)Value + (*(unsigned short *)this->HoverLocomotionClass_field_bool_68 << 8)) & 0xFFFF); /*0x514b0a*/
    FacingClass::Set_SyncLog((char *)(v46 + 904), &v58); /*0x514b1d*/
    v47 = *(unsigned int *)this->HoverLocomotionClass_field_bool_68; /*0x514b22*/
    v48 = abs32(v47); /*0x514b2a*/
    if ( v48 >= 1 ) /*0x514b2f*/
      v48 = 1; /*0x514b31*/
    v49 = v47 >= 0 ? v47 - v48 : v48 + v47;
    *(unsigned int *)this->HoverLocomotionClass_field_bool_68 = v49; /*0x514b42*/
    if ( !v49 ) /*0x514b47*/
LABEL_81:
      LOBYTE(this->CurrentWobbles[1]) = 0; /*0x514b49*/
    if ( !LOBYTE(this->CurrentWobbles[1]) ) /*0x514b4d*/
    {
      v50 = (int *)(this->Owner + 156); /*0x514b5b*/
      v65 = (unsigned __int16 *)*v50; /*0x514b63*/
      v66 = v50[1]; /*0x514b6f*/
      v67 = v50[2]; /*0x514b7b*/
      v51 = Coord::To_Cell((Coord *)&dword_87F7E8, &v65); /*0x514b7f*/
      BuildingClass::CreateIdleAnim((BuildingClass *)v51); /*0x514b86*/
      v52 = (int *)(this->Owner + 156); /*0x514b8e*/
      v65 = (unsigned __int16 *)*v52; /*0x514b96*/
      v66 = v52[1]; /*0x514ba2*/
      v67 = v52[2]; /*0x514ba9*/
      if ( Coord::To_Cell((Coord *)&dword_87F7E8, &v65)->landType == 2 ) /*0x514bbe*/
      {
        v53 = (int *)(this->Owner + 156); /*0x514bc3*/
        v65 = (unsigned __int16 *)*v53; /*0x514bcc*/
        v66 = v53[1]; /*0x514bd3*/
        v54 = v53[2]; /*0x514bd7*/
        v65 = (unsigned __int16 *)*v53; /*0x514bdc*/
        v66 = v53[1]; /*0x514be7*/
        v67 = v53[2]; /*0x514bf4*/
        if ( v54 < (int)(*(unsigned int *)&stru_A8E960.waypoints[558] + Cell::GetGroundHeight(&v65)) ) /*0x514c05*/
          (*(void (**)(int))(*(unsigned int *)this->Owner + 236))(this->Owner); /*0x514c0c*/
      }
    }
  }
  return (*(char (**)(HoverLocomotionClass *))(*&this->q090 + 16))(this); /*0x514358*/

}
// 0x521d80
int InfantryClass::ComputeDeploySpeedFactor()
{
  int v2; // ecx

  v2 = TechnoClass::ComputeSpeedFactorEx((double *)this); /*0x521d88*/
  if ( this->Crawling ) /*0x521d8a*/
  {
    if ( this->Type->Crawls ) /*0x521d9a*/
      return (AnimClass *)(((unsigned int)(((uint64_t)(1431655765LL * v2) >> 32) - v2) >> 31) /*0x521dbb*/
                         + ((int)(((uint64_t)(1431655765LL * v2) >> 32) - v2) >> 1)
                         + v2);
    v2 += v2 / 2; /*0x521dc3*/
  }
  return (AnimClass *)v2; /*0x521da9*/
}
// 0x5218e0
int InfantryClass::GetDeployWeaponIndex(int weapon_index)
{
  InfantryTypeClass *Type; // ecx
  int v4; // eax

  Type = this->Type; /*0x5218e3*/
  if ( !Type->DeployFire ) /*0x5218e9*/
    return TechnoClass::SelectWeapon((TechnoClass *)this); /*0x521955*/
  v4 = this->SequenceAnim[0]; /*0x5218f3*/
  if ( v4 == 27 || v4 == 28 || v4 == 29 || v4 == 30 ) /*0x52190b*/
    return Type->DeployFireWeapon; /*0x52190d*/
  if ( !this->inOpenToppedTransport /*0x521932*/
    || *(unsigned int *)((*((int (__thiscall **)(InfantryClass *))this->ptr_0 + 33))(this) + 3408) == -1 )
  {
    return 0; /*0x521948*/
  }
  return *(unsigned int *)((*((int (__thiscall **)(InfantryClass *))this->ptr_0 + 33))(this) + 3408); /*0x521913*/
}
// 0x522600
int InfantryClass::FireAtTargetPos(int a2, int a3, int a4)
{
  void *ptr_0; // eax
  int Strength; // [esp+0h] [ebp-4h] BYREF

  ptr_0 = this->ptr_0; /*0x52260d*/
  Strength = this->Type->Strength; /*0x52260f*/
  return (*((AnimClass *(__thiscall **)(InfantryClass *, int *, unsigned int, unsigned int, unsigned int, int, unsigned int, int))ptr_0 + 91))( /*0x522639*/
           this,
           &Strength,
           0,
           *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 4008),
           0,
           1,
           0,
           a3);
}
/* ASM:
push    ecx
mov     eax, [ecx+6C0h]
mov     edx, [eax+0A0h]
mov     eax, [ecx]
mov     [esp+4+var_4], edx
mov     edx, [esp+4+arg_4]
push    edx
mov     edx, ds:8871E0h
push    0
push    1
mov     edx, [edx+0FA8h]
push    0
push    edx
lea     edx, [esp+18h+var_4]
push    0
push    edx
call    dword ptr [eax+16Ch]
pop     ecx
retn    0Ch
*/

// 0x51df60
int InfantryClass::FireWeaponWithCleanup(int a2, int a3)
{
  int v4; // edi
  int (__thiscall **ptr_0)(InfantryClass *); // eax

  this->unknownBool68D = 0; /*0x51df70*/
  v4 = TechnoClass::FireWeapon((TechnoClass *)this); /*0x51df7c*/
  if ( v4 ) /*0x51df80*/
  {
    if ( !this->inLimbo ) /*0x51df82*/
    {
      if ( this->Type->Fraidycat ) /*0x51df92*/
      {
        if ( !this->ammo ) /*0x51df9c*/
        {
          ptr_0 = (int (__thiscall **)(InfantryClass *))this->ptr_0; /*0x51dfa6*/
          this->PanicDurationLeft = 300; /*0x51dfaa*/
          if ( ptr_0[97](this) == 1 || (*((int (__thiscall **)(InfantryClass *))this->ptr_0 + 97))(this) == 15 ) /*0x51dfcc*/
            (*((void (__thiscall **)(InfantryClass *, int, unsigned int))this->ptr_0 + 122))(this, 5, 0); /*0x51dfd6*/
        }
      }
    }
  }
  return v4; /*0x51dfde*/
}
/* ASM:
mov     eax, [esp+arg_4]
push    esi
mov     esi, ecx
push    edi
mov     ecx, [esp+8+arg_0]
push    eax             ; int
push    ecx             ; int
mov     ecx, esi        ; this
mov     byte ptr [esi+68Dh], 0
call    TechnoClass__FireWeapon
mov     edi, eax
test    edi, edi
jz      short loc_51DFDC
mov     al, [esi+81h]
test    al, al
jnz     short loc_51DFDC
mov     edx, [esi+6C0h]
mov     al, [edx+0EBFh]
test    al, al
jz      short loc_51DFDC
mov     eax, [esi+2FCh]
test    eax, eax
jnz     short loc_51DFDC
mov     eax, [esi]
mov     ecx, esi
mov     dword ptr [esi+6D4h], 12Ch
call    dword ptr [eax+184h]
cmp     eax, 1
jz      short loc_51DFCE
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+184h]
cmp     eax, 0Fh
jnz     short loc_51DFDC

loc_51DFCE:                             ; CODE XREF: InfantryClass__FireWeaponWithCleanup+5D↑j
mov     eax, [esi]
push    0
push    5
mov     ecx, esi
call    dword ptr [eax+1E8h]

loc_51DFDC:                             ; CODE XREF: InfantryClass__FireWeaponWithCleanup+20↑j
; InfantryClass__FireWeaponWithCleanup+2A↑j ...
mov     eax, edi
pop     edi
pop     esi
retn    8
*/

// 0x51c8b0
int InfantryClass::GetFireError(int* target, int weapon_idx, int a4, int a5)
{

  int SequenceAnim; // eax
  int result; // eax
  int *v8; // edi
  int v11; // ecx
  unsigned int v12; // eax
  int v14; // eax
  int locomotor; // ecx
  int v16; // eax
  int v17; // ebp
  unsigned int *v18; // esi
  unsigned int v19; // esi
  char v20[16]; // [esp+14h] [ebp-10h] BYREF

  _EBX = this; /*0x51c8b4*/
  SequenceAnim = this->SequenceAnim; /*0x51c8b8*/
  if ( SequenceAnim == 11 /*0x51c8ee*/
    || SequenceAnim == 12
    || SequenceAnim == 13
    || SequenceAnim == 14
    || SequenceAnim == 15
    || SequenceAnim == 34
    || SequenceAnim == 35
    || SequenceAnim == 36
    || SequenceAnim == 20
    || SequenceAnim == 21 )
  {
    return 6; /*0x51c8fb*/
  }
  v8 = weapon_idx; /*0x51c907*/
  if ( TechnoClass::GetValue((TechnoClass *)this, -1) < 0 ) /*0x51c90d*/
  {
    if ( !weapon_idx ) /*0x51c911*/
      return 5; /*0x51c911*/
    if ( (*(int (**)(int *))(*weapon_idx + 44))(weapon_idx) != 15 ) /*0x51c91d*/
      return 5; /*0x51c91d*/
    BuildingClass::GetHealthRatio((BuildingClass *)weapon_idx); /*0x51c921*/
    _ECX = dword_8871E0; /*0x51c926*/
    __asm /*0x51c92c*/
    {
      fcomp qword ptr [ecx+16F8h]
      fnstsw ax
    }
    if ( (_AX & 0x100) == 0 ) /*0x51c937*/
      return 5; /*0x51c944*/
  }
  if ( weapon_idx )
  {
    if ( (*(int (**)(int *))(*weapon_idx + 44))(weapon_idx) == 1 )
    {
      if ( *(unsigned char *)((*(int (**)(InfantryClass *))(_EBX->ptr_0 + 132))(_EBX) + 1682) )
      {
        v11 = weapon_idx[170]; /*0x51c96b*/
        if ( v11 )
        {
          v12 = _EBX ? ((_EBX->abstractFlags & 1) != 0 ? (unsigned int)_EBX : 0) : 0;
          if ( v11 != v12 ) /*0x51c98a*/
            return 5; /*0x51c997*/
        }
      }
    }
  }
  result = TriggerTypeClass::ReadINI((TechnoClass *)_EBX, a4, weapon_idx, a4, a5); /*0x51c9a7*/
  if ( !result ) /*0x51c9b2*/
  {
    __asm /*0x51c9b8*/
    {
      fld qword ptr [ebx+578h]
      fcomp ds:dbl_7E3860
      fnstsw ax
    }
    if ( (_AX & 0x4100) == 0 ) /*0x51c9c9*/
      return 7; /*0x51c9c9*/
    if ( _EBX->movementDestination ) /*0x51c9cf*/
    {
      v14 = _EBX->SequenceAnim; /*0x51c9d9*/
      if ( v14 != -1 && !byte_7EAF7C[4 * v14] ) /*0x51c9e4*/
        return 7; /*0x51c9ed*/
    }
    if ( *(unsigned char *)(_EBX->Type + 3476) ) /*0x51c9f9*/
    {
      locomotor = _EBX->locomotor; /*0x51ca07*/
      a5 = 0; /*0x51ca15*/
      if ( !locomotor ) /*0x51ca1d*/
        goto LABEL_37; /*0x51ca1d*/
      v16 = StreamClass::Set2((StreamClass *)&a5, &_EBX->locomotor); /*0x51ca24*/
      if ( v16 < 0 && v16 != -2147467262 ) /*0x51ca32*/
        sub_7DC720(v16); /*0x51ca35*/
      if ( !a5 ) /*0x51ca40*/
LABEL_37:
        sub_7DC720(-2147467261); /*0x51ca47*/
      (*(void (**)(int, char *))(*(unsigned int *)a5 + 12))(a5, v20); /*0x51ca59*/
      v17 = memcmp(v20, g_CLSID_JumpjetLocomotion.Data2, 16); /*0x51ca6a*/
      ComPtr::Release_Alt((ComPtr *)&a5); /*0x51ca79*/
      if ( !v17 && *(unsigned char *)(_EBX->Type + 3787) ) /*0x51ca8e*/
      {
        if ( !_EBX->locomotor ) /*0x51ca98*/
          sub_7DC720(-2147467261); /*0x51caa7*/
        if ( (*(unsigned __int8 (**)(int))(*(unsigned int *)_EBX->locomotor + 128))(_EBX->locomotor) ) /*0x51cab5*/
          return 7; /*0x51caca*/
      }
      v8 = weapon_idx; /*0x51cacd*/
    }
    v18 = *(unsigned int **)(*(int (**)(InfantryClass *, int))(_EBX->ptr_0 + 1016))(_EBX, a4); /*0x51cae0*/
    if ( !v18 ) /*0x51cae4*/
      goto LABEL_64; /*0x51cae4*/
    if ( *((unsigned char *)v18 + 297) && _EBX->movementDestination ) /*0x51caf0*/
      return 7; /*0x51cb05*/
    if ( *((unsigned char *)v18 + 336) && v8 != (int *)(*(int (**)(InfantryClass *))(_EBX->ptr_0 + 444))(_EBX) ) /*0x51cb1e*/
      return 5; /*0x51cb2b*/
    v19 = v18[43]; /*0x51cb2e*/
    if ( v19 && *(unsigned char *)(v19 + 343) && v8 && (v8->abstractFlags & 2) != 0 && v8->attachedBomb ) /*0x51cb4c*/
    {
      return 5; /*0x51cb55*/
    }
    else
    {
LABEL_64:
      if ( !_EBX->locomotor ) /*0x51cb61*/
        sub_7DC720(-2147467261); /*0x51cb70*/
      result = (*(int (**)(int))(*(unsigned int *)_EBX->locomotor + 140))(_EBX->locomotor); /*0x51cb7e*/
      if ( !result ) /*0x51cb86*/
        return 0; /*0x51cb88*/
    }
  }
  return result; /*0x51c8f0*/

}
// 0x5227f0
bool InfantryClass::CanAttackTarget(HouseClass* other)
{

  unsigned int *v2; // eax
  HouseClass *v3; // ebx
  int disguisedAsHouse; // esi
  bool result; // al
  unsigned __int16 *v6; // [esp+Ch] [ebp-14h]
  __int16 v7[2]; // [esp+10h] [ebp-10h] BYREF
  unsigned char v8[12]; // [esp+14h] [ebp-Ch] BYREF
  HouseClass *other; // [esp+24h] [ebp+4h]

  result = 0; /*0x5228a0*/
  if ( this->vt_slot_196(this) ) /*0x5227fa*/
  {
    v2 = (unsigned int *)this->vt_slot_72(this, v8); /*0x522811*/
    LOWORD(v6) = *v2 / 256; /*0x522824*/
    HIWORD(v6) = v2[1] / 256; /*0x52283c*/
    *(unsigned int *)v7 = v6; /*0x522845*/
    v3 = (HouseClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v7); /*0x52285f*/
    if ( !(unsigned __int8)HouseClass::IsAlliedWith((HouseClass *)this->owner) /*0x522870*/
      && !(unsigned __int8)HouseClass::HasType(v3, other->relatedTagsCount) )
    {
      disguisedAsHouse = this->disguisedAsHouse; /*0x522879*/
      if ( (HouseClass *)disguisedAsHouse == other /*0x52288a*/
        || !disguisedAsHouse
        || (unsigned __int8)HouseClass::IsAlliedWith(other) )
      {
        return 1; /*0x522802*/
      }
    }
  }
  return result; /*0x522893*/

}
/* ASM:
other           = dword ptr  4

sub     esp, 14h
push    ebx
push    esi
mov     esi, ecx
push    edi
mov     eax, [esi]
call    dword ptr [eax+0C4h]
test    al, al
jz      loc_52289E
mov     edx, [esi]
lea     eax, [esp+20h+var_C]
push    eax
mov     ecx, esi
call    dword ptr [edx+48h]
mov     ecx, eax
mov     eax, [ecx]
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+20h+var_14], ax
mov     eax, [ecx+4]
cdq
and     edx, 0FFh
add     eax, edx
lea     edx, [esp+20h+var_10]
sar     eax, 8
mov     word ptr [esp+20h+var_14+2], ax
mov     ecx, [esp+20h+var_14]
mov     [esp+20h+var_10], ecx
push    edx
mov     ecx, 87F7E8h
call    CellCoord__To_CellObj
mov     edi, [esp+20h+other]
mov     ecx, [esi+21Ch] ; this
push    edi             ; other
mov     ebx, eax
call    HouseClass__IsAlliedWith
test    al, al
jnz     short loc_52289E
mov     eax, [edi+30h]
mov     ecx, ebx
push    eax
call    HouseClass__HasType
test    al, al
jnz     short loc_52289E
mov     esi, [esi+51Ch]
cmp     esi, edi
jz      short loc_522893
test    esi, esi
jz      short loc_522893
push    esi             ; other
mov     ecx, edi        ; this
call    HouseClass__IsAlliedWith
test    al, al
jz      short loc_52289E

loc_522893:                             ; CODE XREF: InfantryClass__CanAttackTarget+91↑j
; InfantryClass__CanAttackTarget+95↑j
pop     edi
pop     esi
mov     al, 1
pop     ebx
add     esp, 14h
retn    4
; ---------------------------------------------------------------------------

loc_52289E:                             ; CODE XREF: InfantryClass__CanAttackTarget+12↑j
; InfantryClass__CanAttackTarget+78↑j ...
pop     edi
pop     esi
xor     al, al
pop     ebx
add     esp, 14h
retn    4
*/

// 0x51daf0
void InfantryClass::PlayIdleAnim(int idle_anim_number)
{
  int v2; // eax
  unsigned int v3; // edi
  int (__thiscall **ptr_0)(InfantryClass *, CellClass *, unsigned int, int, unsigned int, int); // ebx
  int v5; // eax
  int v6; // edx
  CellClass *v7; // eax
  int LandHeight; // [esp-Ch] [ebp-28h]
  int v10; // [esp+Ch] [ebp-10h] BYREF
  unsigned int v11[3]; // [esp+10h] [ebp-Ch] BYREF

  v2 = idle_anim_number->SequenceAnim[0]; /*0x51daf6*/
  if ( v2 == 27 || v2 == 28 || v2 == 29 || v2 == 30 ) /*0x51db0e*/
  {
    (*((void (__thiscall **)(InfantryClass *, int, unsigned int, unsigned int))idle_anim_number->ptr_0 + 342))(idle_anim_number, 28, 0, 0); /*0x51db18*/
  }
  else if ( idle_anim_number->Crawling ) /*0x51db1a*/
  {
    (*((void (__thiscall **)(InfantryClass *, int, unsigned int, unsigned int))idle_anim_number->ptr_0 + 342))(idle_anim_number, 2, 0, 0); /*0x51db2e*/
  }
  else
  {
    (*((void (__thiscall **)(InfantryClass *, unsigned int, unsigned int, unsigned int))idle_anim_number->ptr_0 + 342))(idle_anim_number, 0, 0, 0); /*0x51db40*/
  }
  v3 = *ProgressTimer::GetValue((ProgressTimer *)idle_anim_number->primaryFacing, &v10); /*0x51db58*/
  ptr_0 = (int (__thiscall **)(InfantryClass *, CellClass *, unsigned int, int, unsigned int, int))idle_anim_number->ptr_0; /*0x51db60*/
  v5 = idle_anim_number->location[0]; /*0x51db64*/
  v6 = idle_anim_number->location[2]; /*0x51db71*/
  v11[1] = idle_anim_number->location[1]; /*0x51db74*/
  v11[0] = v5; /*0x51db7d*/
  v11[2] = v6; /*0x51db81*/
  LandHeight = ObjectClass::GetLandHeight((ObjectClass *)idle_anim_number); /*0x51db8a*/
  v7 = Coord::To_Cell((Coord *)&DataGlobal_87F7E8, v11); /*0x51db96*/
  if ( ptr_0[107](idle_anim_number, v7, (((v3 >> 12) + 1) >> 1) & 7, LandHeight, 0, 1) ) /*0x51db9e*/
    idle_anim_number->InfantryClass_field_bool_6DC = 1; /*0x51dbbe*/
  else
    idle_anim_number->InfantryClass_field_bool_6DC = 0; /*0x51dbac*/
  return FootClass::PlayCOM_audio((FootClass *)idle_anim_number); /*0x51dbb7*/
}
// 0x51cdb0
int InfantryClass::ProcessIdleAction()
{

  int result; // eax
  int v3; // edi
  unsigned __int16 *v4; // eax
  int v5; // ecx
  int v6; // edi
  char v7; // bl
  __int16 v8; // ax
  int Type; // eax
  __int16 v10; // cx
  __int16 v11; // dx
  unsigned int v12; // [esp+8h] [ebp-24h]
  int v13; // [esp+Ch] [ebp-20h] BYREF
  double v14; // [esp+10h] [ebp-1Ch] BYREF
  double v15; // [esp+18h] [ebp-14h] BYREF
  int v16; // [esp+20h] [ebp-Ch] BYREF
  int v17; // [esp+24h] [ebp-8h]
  int v18; // [esp+28h] [ebp-4h]

  result = this->vt_slot_1140(this); /*0x51cdb9*/
  if ( (unsigned char)result ) /*0x51cdc1*/
  {
    v14 = *&dword_8871E0->BridgeStrength * 1800.0; /*0x51cdeb*/
    v15 = *&dword_8871E0->BridgeStrength * 450.0; /*0x51cdfb*/
    v12 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646); /*0x51ce0c*/
    v3 = *(unsigned int *)&stru_A8E960.random[528]; /*0x51ce10*/
    LOWORD(v4) = Math::RoundToInt((v14 - v15) * ((double)(int)v12 * 4.656612877414201e-10) + v15); /*0x51ce26*/
    v5 = v17; /*0x51ce2b*/
    this->idleActionTimer[0] = v3; /*0x51ce35*/
    this->idleActionTimer[1] = v5; /*0x51ce3b*/
    this->idleActionTimer[2] = (int)v4; /*0x51ce3e*/
    if ( !*(unsigned char *)&this->Type->Fraidycat_2 /*0x51ce67*/
      || (unsigned __int8)House::IsCurrentPlayer((House *)this->owner)
      || this->PanicDurationLeft <= 50 )
    {
      v6 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 10); /*0x51cea1*/
      v7 = ObjectClass::StepCleanup((ObjectClass *)this, &unk_82554C); /*0x51cea8*/
      if ( v7 && Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 10) < 5 ) /*0x51cec6*/
        v6 = 8; /*0x51cec8*/
      result = v6 - 1; /*0x51cecd*/
      switch ( v6 ) /*0x51ced9*/
      {
        case 1: /*0x51ced9*/
        case 2: /*0x51ced9*/
        case 7: /*0x51ced9*/
          result = this->vt_slot_1368(this, 10, 0, 0); /*0x51cf4c*/
          if ( this->isSelected[0] ) /*0x51cf52*/
            goto LABEL_22; /*0x51cf52*/
          result = House::IsHumanPlayer((House *)this->owner); /*0x51cf66*/
          if ( !(unsigned char)result ) /*0x51cf6d*/
            goto LABEL_22; /*0x51cf6d*/
          result = this->Type; /*0x51cf73*/
          if ( result->u32_E98 <= 0 ) /*0x51cf81*/
            goto LABEL_22; /*0x51cf81*/
          result = Random::Range(&Randomizer_Global, 0, 2); /*0x51cf90*/
          if ( result ) /*0x51cf97*/
            goto LABEL_22; /*0x51cf97*/
          v16 = this->location[0]; /*0x51cfa7*/
          v17 = this->location[1]; /*0x51cfb2*/
          Type = this->Type; /*0x51cfb6*/
          v18 = this->location[2]; /*0x51cfbf*/
          result = (int)StartAudioControllerAt(*Type->VoiceComment_Items, &v16, 0); /*0x51cfcb*/
          (result) = ((result) & ~0xFF) | ((1) & 0xFF); /*0x51cfd2*/
          break; /*0x51cfd8*/
        case 3: /*0x51ced9*/
        case 4: /*0x51ced9*/
        case 5: /*0x51ced9*/
          result = this->vt_slot_1368(this, 9, 0, 0); /*0x51ceea*/
          (result) = ((result) & ~0xFF) | ((1) & 0xFF); /*0x51cef2*/
          break; /*0x51cef8*/
        case 6: /*0x51ced9*/
          (v12) = ((v12) & ~0xFFFF) | (((unsigned __int16)Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 7) << 13) & 0xFFFF); /*0x51cf11*/
          (v8) = ((v8) & ~0xFF) | ((0) & 0xFF); /*0x51cf16*/
          (v8) = ((v8) & ~(0xFF << 8)) | (((((v12 >> 7) + 1) >> 1) & 0xFF) << 8); /*0x51cf27*/
          (v13) = ((v13) & ~0xFFFF) | ((v8) & 0xFFFF); /*0x51cf2f*/
          result = FacingClass::Set_SyncLog((char *)this->primaryFacing, &v13); /*0x51cf34*/
          (result) = ((result) & ~0xFF) | ((1) & 0xFF); /*0x51cf3b*/
          break; /*0x51cf41*/
        case 8: /*0x51ced9*/
          (v12) = ((v12) & ~0xFFFF) | (((unsigned __int16)Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 7) << 13) & 0xFFFF); /*0x51cff1*/
          (v10) = ((v10) & ~0xFF) | ((0) & 0xFF); /*0x51cff6*/
          (v10) = ((v10) & ~(0xFF << 8)) | (((((v12 >> 7) + 1) >> 1) & 0xFF) << 8); /*0x51d007*/
          LOWORD(v14) = v10; /*0x51d009*/
          FacingClass::Set_SyncLog((char *)this->primaryFacing, &v14); /*0x51d014*/
          if ( !v7 ) /*0x51d01b*/
          {
            result = House::IsCurrentPlayer((House *)this->owner); /*0x51d023*/
            if ( (unsigned char)result ) /*0x51d02a*/
              goto LABEL_22; /*0x51d02a*/
            result = this->Type; /*0x51d02c*/
            if ( !result->u8_EBF ) /*0x51d032*/
              goto LABEL_22; /*0x51d03a*/
          }
          result = (*(int (**)(InfantryClass *, char *, int, unsigned int))&this->ptr_0->radarFlashTimer)( /*0x51d049*/
                     this,
                     &stru_A8E960.waypoints[622],
                     1,
                     0);
          (result) = ((result) & ~0xFF) | ((1) & 0xFF); /*0x51d051*/
          break; /*0x51d057*/
        case 9: /*0x51ced9*/
        case 10: /*0x51ced9*/
          (v12) = ((v12) & ~0xFFFF) | (((unsigned __int16)Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 7) << 13) & 0xFFFF); /*0x51d06f*/
          (v11) = ((v11) & ~0xFF) | ((0) & 0xFF); /*0x51d074*/
          (v11) = ((v11) & ~(0xFF << 8)) | (((((v12 >> 7) + 1) >> 1) & 0xFF) << 8); /*0x51d085*/
          LOWORD(v15) = v11; /*0x51d08d*/
          result = FacingClass::Set_SyncLog((char *)this->primaryFacing, &v15); /*0x51d092*/
          goto LABEL_22; /*0x51d092*/
        default:
LABEL_22:
          (result) = ((result) & ~0xFF) | ((1) & 0xFF); /*0x51d097*/
          break; /*0x51d09f*/
      }
    }
    else
    {
      result = (*(int (**)(InfantryClass *, char *, int, unsigned int))&this->ptr_0->radarFlashTimer)( /*0x51ce76*/
                 this,
                 &stru_A8E960.waypoints[622],
                 1,
                 0);
      (result) = ((result) & ~0xFF) | ((1) & 0xFF); /*0x51ce7d*/
    }
  }
  else
  {
    (result) = ((result) & ~0xFF) | ((0) & 0xFF); /*0x51d0a1*/
  }
  return result; /*0x51ce7c*/

}
// 0x5239d0
// 0x5239d0
int InfantryTypeClass::DTOR()
{
  int v2; // eax
  void *v3; // eax
  void *v4; // eax
  void *v5; // eax

  /* X11: vtable install elided (implicit via class virtuals 0x5239d7) — binary-proven install, was 0 */
  /* X11: vtable install elided (implicit via class virtuals 0x5239dd) — binary-proven install, was 0 */
  /* X11: vtable install elided (implicit via class virtuals 0x5239e4) — binary-proven install, was 0 */
  /* X11: vtable install elided (implicit via class virtuals 0x5239eb) — binary-proven install, was 0 */
  AbstractClass::AnnounceExpiredPointer(&this->ptr_0, 1); /*0x5239f2*/
  v2 = (*(int (__thiscall **)(unsigned int *, InfantryClass **))(dword_A8E348 + 16))(&dword_A8E348, &this); /*0x523a0b*/
  if ( v2 != -1 && v2 < dword_A8E358 && v2 < --dword_A8E358 ) /*0x523a26*/
  {
    do /*0x523a3e*/
    {
      ++v2; /*0x523a2e*/
      *((unsigned int *)dword_A8E34C + v2 - 1) = *((unsigned int *)dword_A8E34C + v2); /*0x523a32*/
    }
    while ( v2 < dword_A8E358 ); /*0x523a3e*/
  }
  operator delete((void *)(this->u32_901))); /*0x523a47*/
  this->RecordTable = 0; /*0x523a51*/
  v3 = this->VoiceComment_Items; /*0x523a57*/
  this->u32_E88 = 0; /*0x523a5f*/
  if ( v3 && this->VoiceComment_FlagByte ) /*0x523a6b*/
  {
    operator delete((v3)); /*0x523a74*/
    this->VoiceComment_Items = 0; /*0x523a7c*/
  }
  this->VoiceComment_FlagByte = 0; /*0x523a82*/
  this->VoiceComment_Capacity = 0; /*0x523a88*/
  v4 = this->DeathAnims_Items; /*0x523a8e*/
  this->u32_E6C = 0; /*0x523a94*/
  if ( v4 && this->DeathAnims_FlagByte ) /*0x523aa2*/
  {
    operator delete((v4)); /*0x523aab*/
    this->DeathAnims_Items = 0; /*0x523ab3*/
  }
  this->DeathAnims_FlagByte = 0; /*0x523ab9*/
  this->DeathAnims_Capacity = 0; /*0x523abf*/
  v5 = this->DeadBodies_Items; /*0x523ac5*/
  this->VHPScan = 0; /*0x523acb*/
  if ( v5 && this->DeadBodies_FlagByte ) /*0x523ad9*/
  {
    operator delete((v5)); /*0x523ae2*/
    this->DeadBodies_Items = 0; /*0x523aea*/
  }
  this->DeadBodies_FlagByte = 0; /*0x523af2*/
  this->DeadBodies_Capacity = 0; /*0x523af8*/
  return TechnoTypeClass::DTOR((int)this); /*0x523b03*/
}
// 0x521320
int InfantryClass::GetIdleTimer()
{

  int SequenceAnim; // eax
  int v3; // eax
  __int16 *v5; // eax
  Concurrency::details::SchedulerBase *v6; // eax
  CellClass *NumberOfActiveVirtualProcessors_SchedulerBase_details_Concurrency__uint_BEIXZ; // edi
  int v8; // ecx
  int ptr_0; // edi
  __int16 *v10; // eax
  void *v11; // eax
  char *v12; // eax
  unsigned __int16 *v13; // eax
  char *v14; // eax
  unsigned __int16 *v15; // eax
  House *v16; // eax
  int Type; // eax
  unsigned int *v18; // eax
  int v19; // edi
  int v20; // ebx
  int *v21; // eax
  int v22; // kr0C_4
  int v23; // eax
  char *MissionControl; // eax
  int v25; // eax
  unsigned char v26[4]; // [esp+Ch] [ebp-1Ch] BYREF
  unsigned char v27[12]; // [esp+10h] [ebp-18h] BYREF
  unsigned char v28[12]; // [esp+1Ch] [ebp-Ch] BYREF

  SequenceAnim = this->SequenceAnim; /*0x521328*/
  if ( SequenceAnim != 27 && SequenceAnim != 28 && SequenceAnim != 29 && SequenceAnim != 30 ) /*0x521340*/
  {
    v16 = (House *)this->vt_slot_60(this); /*0x5214fb*/
    if ( !(unsigned __int8)House::IsCurrentPlayer(v16) ) /*0x521500*/
    {
      Type = this->Type; /*0x52150d*/
      if ( Type->Deployer_d ) /*0x521513*/
      {
        if ( Type->DeployFire ) /*0x521521*/
        {
          if ( Type->UndeployDelay <= -1 /*0x521574*/
            && !this->movementDestination
            && this->missionStartTime
             + *(unsigned int *)(*&dword_8871E0->qE30 + 4 * *(unsigned int *)&this->owner->u32_184) < *(int *)&stru_A8E960.random[528] )
          {
            if ( !this->focus /*0x5215f3*/
              || (v18 = (unsigned int *)this->vt_slot_72(this, v27),
                  v19 = *v18 / 256,
                  v20 = v18[1] / 256,
                  v21 = (int *)(*(int (**)(int, unsigned char *))(*(unsigned int *)this->focus + 72))(this->focus, v28),
                  v22 = *v21,
                  v23 = v21[1] / 256,
                  (unsigned __int16)(v22 / 256) == (unsigned short)v19)
              && (unsigned short)v23 == (unsigned short)v20 )
            {
              if ( !*(unsigned char *)&this->Type->qD37 ) /*0x5215ff*/
              {
                if ( !this->locomotor ) /*0x52160d*/
                  sub_7DC720(-2147467261); /*0x52161c*/
                if ( (*(unsigned __int8 (**)(int))(*(unsigned int *)this->locomotor + 16))(this->locomotor) ) /*0x52162a*/
                {
                  if ( !this->locomotor ) /*0x52165a*/
                    sub_7DC720(-2147467261); /*0x521669*/
                  (*(void (**)(int))(*(unsigned int *)this->locomotor + 72))(this->locomotor); /*0x521677*/
                  this->ShouldDeploy[0] = 1; /*0x52167c*/
                  MissionControl = MissionClass::GetMissionControl((MissionClass *)this); /*0x521683*/
                  LOWORD(v25) = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x521691*/
                  return v25 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x5216ad*/
                }
                else
                {
                  this->vt_slot_1368(this, 27, 0, 0); /*0x52163b*/
                  return *(unsigned int *)(*(unsigned int *)(this->Type + 3644) + 976); /*0x521650*/
                }
              }
            }
          }
        }
      }
    }
    return -1; /*0x5216b8*/
  }
  v3 = this->Type; /*0x521346*/
  if ( v3->UndeployDelay > -1 ) /*0x521353*/
  {
    this->vt_slot_1368(this, 31, 0, 0); /*0x52135f*/
    return *(unsigned int *)(*(unsigned int *)(this->Type + 3644) + 1120); /*0x52137d*/
  }
  if ( !v3->DeployFire ) /*0x521386*/
    return -1; /*0x521386*/
  if ( v3->qD37 ) /*0x52138c*/
  {
    v5 = (__int16 *)this->vt_slot_440(this, v26); /*0x5213a3*/
    v6 = (Concurrency::details::SchedulerBase *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v5); /*0x5213af*/
    NumberOfActiveVirtualProcessors_SchedulerBase_details_Concurrency__uint_BEIXZ = (CellClass *)_GetNumberOfActiveVirtualProcessors_SchedulerBase_details_Concurrency__uint_BEIXZ(v6); /*0x5213c1*/
    v8 = *(unsigned int *)(*(unsigned int *)this->vt_slot_1016(this, 1) + 344); /*0x5213cb*/
    if ( !NumberOfActiveVirtualProcessors_SchedulerBase_details_Concurrency__uint_BEIXZ /*0x5213ee*/
      || CellClass::GetOccupiedRatio(NumberOfActiveVirtualProcessors_SchedulerBase_details_Concurrency__uint_BEIXZ) < v8 / 3 )
    {
      ptr_0 = this->ptr_0; /*0x5213f4*/
      v10 = (__int16 *)this->vt_slot_440(this, v26); /*0x5213fd*/
      v11 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v10); /*0x521409*/
      (*(void (**)(InfantryClass *, void *))(ptr_0 + 968))(this, v11); /*0x521411*/
      if ( !this->vt_slot_960(this, this->target, 1, 1) ) /*0x521426*/
      {
        this->vt_slot_972(this, this->target, 1); /*0x52143d*/
        this->vt_slot_968(this, 0); /*0x521449*/
        this->vt_slot_1368(this, 29, 0, 0); /*0x521459*/
        return *(unsigned int *)(*(unsigned int *)(this->Type + 3644) + 1048); /*0x521477*/
      }
      this->vt_slot_968(this, 0); /*0x52147e*/
    }
    v12 = MissionClass::GetMissionControl((MissionClass *)this); /*0x521486*/
    LOWORD(v13) = Math::RoundToInt(*((double *)v12 + 2) * 900.0); /*0x521494*/
    return (int)v13 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 10, 20); /*0x5214b0*/
  }
  else
  {
    this->vt_slot_1064(this); /*0x5214bd*/
    v14 = MissionClass::GetMissionControl((MissionClass *)this); /*0x5214c5*/
    LOWORD(v15) = Math::RoundToInt(*((double *)v14 + 2) * 900.0); /*0x5214d3*/
    return (int)v15 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x5214ee*/
  }

}
// ============================================================
// Phase 3: Crawling / Movement
// ============================================================

// 0x5216d0
bool InfantryClass::CanMoveFreely()
{
  char result; // al
  unsigned int v3; // eax

  result = TechnoClass::IsTimerExpired((TechnoClass *)this); /*0x5216d3*/
  if ( result ) /*0x5216da*/
  {
    if ( !this->locomotor[0] ) /*0x5216de*/
      sub_7DC720(-2147467261); /*0x5216ed*/
    if ( (*(uint8_t (__stdcall **)(int))(*(unsigned int *)this->locomotor[0] + 16))(this->locomotor[0]) ) /*0x5216fb*/
    {
      return 0; /*0x521702*/
    }
    else if ( this->Crawling ) /*0x521706*/
    {
      return 0; /*0x521710*/
    }
    else if ( this->unknownBool68D ) /*0x521714*/
    {
      return 0; /*0x52171e*/
    }
    else
    {
      v3 = this->SequenceAnim[0]; /*0x521722*/
      return v3 != 27 && v3 != 28 && v3 != 29 && v3 != 30 && (v3 < 2 || v3 == 16); /*0x52173c*/
    }
  }
  return result; /*0x5216dc*/
}
/* ASM:
push    esi
mov     esi, ecx
call    TechnoClass__IsTimerExpired
test    al, al
jnz     short loc_5216DE
pop     esi
retn
; ---------------------------------------------------------------------------

loc_5216DE:                             ; CODE XREF: InfantryClass__CanMoveFreely+A↑j
mov     eax, [esi+674h]
test    eax, eax
jnz     short loc_5216F2
push    80004003h
call    sub_7DC720
; ---------------------------------------------------------------------------

loc_5216F2:                             ; CODE XREF: InfantryClass__CanMoveFreely+16↑j
mov     eax, [esi+674h]
push    eax
mov     ecx, [eax]
call    dword ptr [ecx+10h]
test    al, al
jz      short loc_521706
xor     al, al
pop     esi
retn
; ---------------------------------------------------------------------------

loc_521706:                             ; CODE XREF: InfantryClass__CanMoveFreely+30↑j
mov     al, [esi+6DBh]
test    al, al
jz      short loc_521714
xor     al, al
pop     esi
retn
; ---------------------------------------------------------------------------

loc_521714:                             ; CODE XREF: InfantryClass__CanMoveFreely+3E↑j
mov     al, [esi+68Dh]
test    al, al
jz      short loc_521722
xor     al, al
pop     esi
retn
; ---------------------------------------------------------------------------

loc_521722:                             ; CODE XREF: InfantryClass__CanMoveFreely+4C↑j
mov     eax, [esi+6C4h]
cmp     eax, 1Bh
jz      short loc_52173C
cmp     eax, 1Ch
jz      short loc_52173C
cmp     eax, 1Dh
jz      short loc_52173C
cmp     eax, 1Eh
jnz     short loc_521740

loc_52173C:                             ; CODE XREF: InfantryClass__CanMoveFreely+5B↑j
; InfantryClass__CanMoveFreely+60↑j ...
xor     al, al
pop     esi
retn
; ---------------------------------------------------------------------------

loc_521740:                             ; CODE XREF: InfantryClass__CanMoveFreely+6A↑j
cmp     eax, 1
jz      short loc_521752
test    eax, eax
jz      short loc_521752
cmp     eax, 10h
jz      short loc_521752
xor     al, al
pop     esi
retn
; ---------------------------------------------------------------------------

loc_521752:                             ; CODE XREF: InfantryClass__CanMoveFreely+73↑j
; InfantryClass__CanMoveFreely+77↑j ...
mov     al, 1
pop     esi
retn
*/

// 0x484d60
bool InfantryClass::CanMoveThroughCell()
{
  int16_t v1; // ax
  unsigned int *v3; // eax
  unsigned int *v4; // esi
  unsigned short *v5; // eax
  int16_t v6; // cx
  int16_t v7; // cx
  int v8; // eax
  unsigned short *v9; // edi
  unsigned short *v10; // eax
  int16_t v11; // cx
  int16_t v12; // cx
  int occupant; // [esp+Ch] [ebp-14h] BYREF
  int16_t v14[2]; // [esp+10h] [ebp-10h] BYREF
  int16_t v15[2]; // [esp+14h] [ebp-Ch] BYREF
  int16_t v16[2]; // [esp+18h] [ebp-8h] BYREF
  int v17; // [esp+1Ch] [ebp-4h] BYREF

  v1 = (*(this->passengers + 1)); /*0x484d60*/
  if ( v1 >= 0 && v1 < FootClass_Array.primaryFacing[0] && this->radioLinks[3] == 10 ) /*0x484d8a*/
    return 1; /*0x484d8e*/
  occupant = this->occupant; /*0x484d9c*/
  *(unsigned int *)v14 = *CellStruct::Add((CellStruct *)&occupant, v16, &g_DDrawSurfaceManager.scenario[85]); /*0x484db6*/
  v3 = CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, v14); /*0x484dbf*/
  v4 = v3; /*0x484dc4*/
  if ( !v3 ) /*0x484dc8*/
    return 0; /*0x484dc8*/
  occupant = v3->ptr_24; /*0x484dd5*/
  *(unsigned int *)v15 = *CellStruct::Add((CellStruct *)&occupant, v16, &g_DDrawSurfaceManager.scenario[85]); /*0x484def*/
  v5 = CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, v15); /*0x484df8*/
  if ( !v5 ) /*0x484dff*/
    return 0; /*0x484dff*/
  v6 = v4->q116; /*0x484e05*/
  if ( v6 >= 0 && v6 < FootClass_Array.primaryFacing[0] && v4->u32_EC == 10 ) /*0x484e24*/
    return 1; /*0x484e24*/
  v7 = v5->q116; /*0x484e2a*/
  if ( v7 >= 0 && v7 < FootClass_Array.primaryFacing[0] && v5->u32_EC == 10 ) /*0x484e43*/
    return 1; /*0x484e43*/
  v8 = v4->ptr_24; /*0x484e49*/
  (*((unsigned short *)&(occupant))) = (*((unsigned short *)&(g_DDrawSurfaceManager.scenario[86]))) + v8; /*0x484e58*/
  (*(((unsigned short *)&(occupant)) + 1)) = (*(((unsigned short *)&(v8)) + 1)) + (*(((unsigned short *)&(g_DDrawSurfaceManager.scenario[86])) + 1)); /*0x484e6d*/
  *(unsigned int *)v15 = occupant; /*0x484e76*/
  v9 = CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, v15); /*0x484e88*/
  occupant = v4->ptr_24; /*0x484e97*/
  *(unsigned int *)v16 = *CellStruct::Add((CellStruct *)&occupant, &v17, &g_DDrawSurfaceManager.scenario[84]); /*0x484eac*/
  v10 = CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, v16); /*0x484eb0*/
  if ( !v9 || !v10 ) /*0x484ebb*/
    return 0; /*0x484ebb*/
  v11 = v9->q116; /*0x484ebd*/
  if ( v11 >= 0 && v11 < FootClass_Array.primaryFacing[0] && v9->u32_EC == 10 ) /*0x484edc*/
    return 1; /*0x484edc*/
  v12 = v10->q116; /*0x484ede*/
  return v12 >= 0 && v12 < FootClass_Array.primaryFacing[0] && v10->u32_EC == 10; /*0x484efb*/
}
// 0x51dff0
int InfantryClass::MoveToCell(int* a2, int a3)
{
  int *v3; // esi
  int GroundHeight; // ebx
  bool v6; // al
  CellClass *v7; // eax
  int *v8; // edx
  int result; // eax
  int v10; // ecx
  int v11; // edx
  char v12; // [esp-Ch] [ebp-30h]
  int v13; // [esp+Ch] [ebp-18h] BYREF
  int v14; // [esp+10h] [ebp-14h]
  int v15; // [esp+14h] [ebp-10h]
  int v16[3]; // [esp+18h] [ebp-Ch] BYREF

  v3 = a2; /*0x51dff5*/
  GroundHeight = Cell::GetGroundHeight(a2); /*0x51e007*/
  v13 = *v3; /*0x51e00d*/
  v14 = v3->u32_4; /*0x51e014*/
  v15 = v3->u32_8; /*0x51e01d*/
  if ( v15 == GroundHeight ) /*0x51e021*/
  {
    v6 = 1; /*0x51e078*/
    if ( !dword_A8E7AC ) /*0x51e02e*/
    {
      (*((unsigned short *)&(a2))) = *v3 / 256; /*0x51e045*/
      (*(((unsigned short *)&(a2)) + 1)) = v3->u32_4 / 256; /*0x51e05e*/
      if ( (uint8_t)LayerClass::IsWithinUsableArea((LayerClass *)&dword_87F7E8, (int16_t *)&a2, 1) ) /*0x51e06b*/
        v6 = 0; /*0x51e02e*/
    }
    v12 = v6; /*0x51e081*/
    v7 = Coord::To_Cell((Coord *)&dword_87F7E8, v3); /*0x51e08e*/
    v8 = ObjectPlacement::CalcPosition((ObjectPlacement *)v7, v16, v3, v12, 0, 0); /*0x51e0a0*/
    result = *v8; /*0x51e0a2*/
    v13 = result; /*0x51e0a4*/
    v10 = v8->ptr_4; /*0x51e0aa*/
    v14 = v10; /*0x51e0ad*/
    v11 = v8->ptr_8; /*0x51e0b1*/
    if ( result == dword_A8F200 && v10 == dword_A8F204 && v11 == dword_A8F208 ) /*0x51e0c4*/
      goto LABEL_16; /*0x51e0c4*/
    v15 = GroundHeight; /*0x51e0c6*/
  }
  if ( !FootClass::DispatchInput(&this->ptr_0.ptr_0.ptr_0.ptr_0.ptr_0.ptr_0.ptr_0, (int)&v13, a3) ) /*0x51e0dd*/
  {
  LABEL_16:
    (*((unsigned char *)&(result))) = 0; /*0x51e129*/
    return result; /*0x51e12b*/
  }
  if ( !*(unsigned int *)&this->Type->Sight ) /*0x51e0e5*/
    this->ptr_0.ptr_0.isDiscoveredByCurrentPlayer[0] = 0; /*0x51e0ef*/
  result = GroundHeight + dword_A8F234; /*0x51e0ff*/
  if ( v15 <= GroundHeight + dword_A8F234 ) /*0x51e103*/
    result = this->MarkCellPassability(/*0x51e10e*/
               this, &v13);
  this->unknown_int_6E8 = 2; /*0x51e114*/
  (*((unsigned char *)&(result))) = 1; /*0x51e120*/
  return result; /*0x51e11e*/
}
// 0x51df10
int InfantryClass::CancelMovement()
{
  if ( !this->locomotor[0] ) /*0x51df13*/
    sub_7DC720(-2147467261); /*0x51df22*/
  (*(void (__stdcall **)(int))(*(unsigned int *)this->locomotor[0] + 172))(this->locomotor[0]); /*0x51df30*/
  this->unknown_int_6E8 = 2; /*0x51df38*/
  this->Crawling = 0; /*0x51df42*/
  this->SequenceAnim[0] = 0; /*0x51df49*/
  return TechnoClass::CleanupDirection((FootClass *)this); /*0x51df58*/
}
/* ASM:
push    esi
mov     esi, ecx
mov     eax, [esi+674h]
test    eax, eax
jnz     short loc_51DF27
push    80004003h
call    sub_7DC720
; ---------------------------------------------------------------------------

loc_51DF27:                             ; CODE XREF: InfantryClass__CancelMovement+B↑j
mov     eax, [esi+674h]
push    eax
mov     ecx, [eax]
call    dword ptr [ecx+0ACh]
mov     ecx, esi
mov     dword ptr [esi+6E8h], 2
mov     byte ptr [esi+6DBh], 0
mov     dword ptr [esi+6C4h], 0
call    TechnoClass__CleanupDirection
pop     esi
retn
*/

// 0x51b350
int InfantryClass::CalcMoveTarget()
{

  double v1; // st7
  Vector3 *v3; // eax
  int *unknownCoords568; // edi
  int *v5; // eax
  unsigned int *v6; // ebp
  int *v7; // eax
  int *Height; // eax
  int Type; // edx
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  int GroundHeight; // ebx
  int v14; // ebx
  int v15; // edx
  char v16; // al
  int v17; // ecx
  int *v18; // eax
  CellClass *v19; // eax
  int *Coords; // ebp
  CellClass *v21; // eax
  int *v22; // eax
  int v23; // edx
  int v24; // ecx
  int v25; // eax
  int v26; // edx
  int *v27; // eax
  int v28; // eax
  int v29; // edi
  unsigned __int16 *v30; // eax
  unsigned __int16 *v31; // eax
  double v32; // st7
  unsigned __int16 *v33; // eax
  unsigned __int16 *v34; // edx
  int v35; // kr00_4
  int result; // eax
  int v37; // ebp
  int v38; // edi
  unsigned __int16 *v39; // eax
  unsigned __int16 *v40; // eax
  bool v41; // zf
  signed int v42; // ebp
  double v43; // st7
  unsigned __int16 *v44; // eax
  int ptr_0; // edx
  int *location; // edi
  ObjectPlacement *v47; // ebp
  int ObjectPlacement_field_0x04; // ebx
  int ObjectVector_field_0x14; // ecx
  int ObjectVector_field_0x08; // eax
  int v51; // eax
  int i; // ebx
  unsigned int *v53; // edi
  int v54; // edx
  int *v55; // eax
  int v56; // eax
  int v57; // edx
  int locomotor; // eax
  int v59; // eax
  int v60; // edx
  int v61; // eax
  int v62; // edx
  int v63; // eax
  double v64; // [esp-10h] [ebp-A0h]
  int v65; // [esp+18h] [ebp-78h]
  double v66; // [esp+18h] [ebp-78h]
  int v67; // [esp+20h] [ebp-70h]
  double v68; // [esp+20h] [ebp-70h]
  int v69; // [esp+2Ch] [ebp-64h]
  int v70; // [esp+2Ch] [ebp-64h]
  int v71; // [esp+2Ch] [ebp-64h]
  int v72; // [esp+30h] [ebp-60h]
  double v73; // [esp+30h] [ebp-60h]
  int v74[2]; // [esp+38h] [ebp-58h] BYREF
  int v75[2]; // [esp+40h] [ebp-50h] BYREF
  int v76; // [esp+48h] [ebp-48h]
  int v77; // [esp+54h] [ebp-3Ch] BYREF
  int v78; // [esp+58h] [ebp-38h]
  int v79; // [esp+5Ch] [ebp-34h] BYREF
  int v80; // [esp+60h] [ebp-30h] BYREF
  int v81; // [esp+64h] [ebp-2Ch]
  unsigned __int16 *v82; // [esp+68h] [ebp-28h] BYREF
  int v83; // [esp+6Ch] [ebp-24h] BYREF
  int v84; // [esp+70h] [ebp-20h]
  int v85; // [esp+74h] [ebp-1Ch]
  ObjectVector v86; // [esp+78h] [ebp-18h] BYREF

  if ( *(unsigned int *)(*((unsigned int *)dword_8B413C + this->tubeIndex[0]) + 4 * this->unknownBool685[0] + 48) != -1 ) /*0x51b383*/
  {
    v3 = (Vector3 *)this->vt_slot_72(this); /*0x51b392*/
    unknownCoords568 = this->unknownCoords568; /*0x51b395*/
    v5 = Vector3::Subtract(v3, &v79, this->unknownCoords568); /*0x51b3a3*/
    Coord::Length((Coord *)v5); /*0x51b3aa*/
    v6 = (unsigned int *)*((unsigned int *)dword_8B413C + this->tubeIndex[0]); /*0x51b3c2*/
    v7 = (int *)(*(int (**)(InfantryClass *, unsigned __int16 **, int *))&this->ptr_0->q048)( /*0x51b3cc*/
                  this,
                  &v82,
                  this->unknownCoords568);
    Height = (int *)Cell::GetHeight((Cell *)&v74[1], v7, &v83); /*0x51b3d4*/
    Type = this->Type; /*0x51b3d9*/
    v74[1] = *Height; /*0x51b3e1*/
    v65 = Type->Speed; /*0x51b3eb*/
    v69 = v6[10]; /*0x51b3f2*/
    v10 = (short)(((v69) >> 16) & 0xFFFF) << 8; /*0x51b401*/
    v11 = (__int16)v69 << 8; /*0x51b404*/
    v70 = v6[9]; /*0x51b407*/
    v78 = v10 + 128; /*0x51b41a*/
    v77 = v11 + 128; /*0x51b423*/
    v79 = 0; /*0x51b42c*/
    v82 = 0; /*0x51b435*/
    v80 = ((__int16)v70 << 8) + 128; /*0x51b440*/
    v12 = v6[112]; /*0x51b444*/
    v81 = ((short)(((v70) >> 16) & 0xFFFF) << 8) + 128; /*0x51b456*/
    v71 = v12; /*0x51b45a*/
    GroundHeight = Cell::GetGroundHeight(&v80); /*0x51b46d*/
    v14 = (int)(Cell::GetGroundHeight(&v77) - GroundHeight) / v71; /*0x51b47f*/
    if ( v67 > v65 ) /*0x51b48b*/
    {
      v37 = v6[this->unknownBool685[0] + 12]; /*0x51b6a8*/
      v83 = this->location[0]; /*0x51b6ae*/
      v84 = this->location[1]; /*0x51b6b5*/
      v38 = this->location[2]; /*0x51b6b9*/
      v74[1] = SLOWORD(v74[1]) - 0x3FFF; /*0x51b6c6*/
      v73 = (double)v74[1] * -0.00009587672516830327; /*0x51b6d4*/
      *(double *)v75 = (double)v84; /*0x51b6ee*/
      Math::SinCos(v73); /*0x51b6f2*/
      LOWORD(v39) = Math::RoundToInt(v1); /*0x51b6ff*/
      v74[1] = (int)v39; /*0x51b70a*/
      Math::ArcTan2(v73); /*0x51b70e*/
      LOWORD(v40) = Math::RoundToInt(v1 * (double)v65 + (double)v83); /*0x51b71e*/
      Coord::Subtract((Coord *)&v80, (int)v40, v74[1], v38); /*0x51b72e*/
      v42 = v37 & 0x80000001; /*0x51b73f*/
      v41 = v42 == 0; /*0x51b73f*/
      v77 = v80; /*0x51b745*/
      v78 = v81; /*0x51b749*/
      v79 = (int)v82; /*0x51b74d*/
      if ( v42 < 0 ) /*0x51b751*/
        v41 = (((unsigned char)v42 - 1) | 0xFFFFFFFE) == -1; /*0x51b757*/
      if ( v41 ) /*0x51b758*/
        v43 = 256.0; /*0x51b762*/
      else
        v43 = 362.0386719675124; /*0x51b75a*/
      LOWORD(v44) = Math::RoundToInt(v43); /*0x51b776*/
      ptr_0 = this->ptr_0; /*0x51b77b*/
      v79 = (int)v44; /*0x51b77d*/
      return (*(int (**)(InfantryClass *, int *))(ptr_0 + 436))(this, &v77); /*0x51b797*/
    }
    v15 = this->ptr_0; /*0x51b497*/
    v16 = this->unknownBool685[0] + 1; /*0x51b499*/
    this->unknownBool685[0] = v16; /*0x51b49f*/
    v72 = v6[v16 + 12]; /*0x51b4ae*/
    (*(void (**)(InfantryClass *, int *))(v15 + 436))(this, this->unknownCoords568); /*0x51b4b7*/
    if ( v72 != -1 ) /*0x51b4c3*/
    {
      v17 = v6[this->unknownBool685[0] + 12]; /*0x51b4d3*/
      v18 = Coord::Subtract( /*0x51b4ff*/
              (Coord *)&v83,
              *unknownCoords568 + dword_89F6D8[2 * (v17 & 7)],
              this->unknownCoords568[1] + dword_89F6DC[2 * (v17 & 7)],
              this->unknownCoords568[2]);
      v77 = *v18; /*0x51b506*/
      v78 = v18->q004; /*0x51b512*/
      v79 = v18->q008; /*0x51b51f*/
      v19 = Coord::To_Cell((Coord *)&dword_87F7E8, this->unknownCoords568); /*0x51b523*/
      Coords = CellClass::GetCoords(v19, v75); /*0x51b52f*/
      v21 = Coord::To_Cell((Coord *)&dword_87F7E8, &v77); /*0x51b540*/
      v22 = CellClass::GetCoords(v21, (int *)v86.__pad_0); /*0x51b547*/
      v23 = *v22 - *Coords + *unknownCoords568; /*0x51b55f*/
      v24 = v22[1] - Coords[1] + this->unknownCoords568[1]; /*0x51b564*/
      v25 = this->unknownCoords568[2]; /*0x51b566*/
      *unknownCoords568 = v23; /*0x51b569*/
      v26 = this->ptr_0; /*0x51b56c*/
      this->unknownCoords568[1] = v24; /*0x51b56f*/
      this->unknownCoords568[2] = v25; /*0x51b574*/
      this->unknownCoords568[2] += v14; /*0x51b584*/
      v27 = (int *)(*(int (**)(InfantryClass *, ObjectVector *))(v26 + 72))(this, &v86); /*0x51b58a*/
      v28 = *(unsigned int *)Cell::GetHeight((Cell *)&v74[1], v27, this->unknownCoords568); /*0x51b597*/
      v83 = this->location[0]; /*0x51b5a5*/
      v29 = this->location[2]; /*0x51b5af*/
      v84 = this->location[1]; /*0x51b5c1*/
      v74[1] = v65 - v67; /*0x51b5c9*/
      v68 = (double)((__int16)v28 - 0x3FFF) * -0.00009587672516830327; /*0x51b5d7*/
      v66 = (double)v74[1]; /*0x51b5e9*/
      *(double *)v75 = (double)v84; /*0x51b5f1*/
      Math::SinCos(v68); /*0x51b5f5*/
      LOWORD(v30) = Math::RoundToInt(v1); /*0x51b602*/
      v64 = v68; /*0x51b608*/
      LODWORD(v68) = v30; /*0x51b609*/
      Math::ArcTan2(v64); /*0x51b60d*/
      LOWORD(v31) = Math::RoundToInt(v1 * v66 + (double)v83); /*0x51b61d*/
      Coord::Subtract((Coord *)&v77, (int)v31, SLODWORD(v68), v29); /*0x51b62d*/
      v80 = v77; /*0x51b63e*/
      v81 = v78; /*0x51b646*/
      v82 = (unsigned __int16 *)v79; /*0x51b650*/
      if ( v72 % 2 ) /*0x51b65a*/
        v32 = 362.0386719675124; /*0x51b65d*/
      else
        v32 = 256.0; /*0x51b665*/
      v35 = Math::RoundToInt(v32); /*0x51b679*/
      LOWORD(v34) = (((v35) >> 16) & 0xFFFF); /*0x51b679*/
      LOWORD(v33) = v35; /*0x51b679*/
      v82 = v33; /*0x51b682*/
      return (*(int (__fastcall **)(InfantryClass *, unsigned __int16 *, int *))&this->ptr_0->AudioController_1B4)(this, v34, &v80); /*0x51b69a*/
    }
  }
  location = this->location; /*0x51b798*/
  v83 = this->location[0]; /*0x51b7a2*/
  v84 = this->location[1]; /*0x51b7ae*/
  v85 = this->location[2]; /*0x51b7b5*/
  v47 = (ObjectPlacement *)Coord::To_Cell((Coord *)&dword_87F7E8, &v83); /*0x51b7c7*/
  ObjectPlacement_field_0x04 = v47[28].ObjectPlacement_field_0x04; /*0x51b7cf*/
  if ( (*(int (**)(InfantryClass *, ObjectPlacement *, int, unsigned int, unsigned int, int))&this->ptr_0->airstrikeTimer)( /*0x51b7d8*/
         this,
         v47,
         -1,
         0,
         0,
         1) )
  {
    ObjectVector::Construct(&v86, 0, 0); /*0x51b7ee*/
    ObjectVector_field_0x14 = 10; /*0x51b7f3*/
    /* X11: vtable install elided (X67 star-deref, RHS vt_DynamicVectorClass_ObjectClass) */  /*0x51b7fa*/
    v86.ObjectVector_field_0x14 = 10; /*0x51b802*/
    v86.ObjectVector_field_0x10 = 0; /*0x51b809*/
    if ( ObjectPlacement_field_0x04 ) /*0x51b810*/
    {
      ObjectVector_field_0x08 = v86.ObjectVector_field_0x08; /*0x51b812*/
      while ( 1 ) /*0x51b822*/
      {
        if ( v86.ObjectVector_field_0x10 < ObjectVector_field_0x08 ) /*0x51b829*/
          goto LABEL_23; /*0x51b829*/
        if ( (BYTE1(v86.ObjectVector_field_0x0C) || !ObjectVector_field_0x08) && ObjectVector_field_0x14 > 0 ) /*0x51b83c*/
          break; /*0x51b83c*/
LABEL_25:
        ObjectPlacement_field_0x04 = *(unsigned int *)(ObjectPlacement_field_0x04 + 48); /*0x51b873*/
        if ( !ObjectPlacement_field_0x04 ) /*0x51b878*/
          goto LABEL_26; /*0x51b878*/
        ObjectVector_field_0x14 = v86.ObjectVector_field_0x14; /*0x51b81b*/
      }
      if ( (*(unsigned __int8 (**)(ObjectVector *, int, unsigned int))(*(unsigned int *)v86.__pad_0 + 8))( /*0x51b84d*/
             &v86,
             ObjectVector_field_0x14 + ObjectVector_field_0x08,
             0) )
      {
LABEL_23:
        v51 = v86.ObjectVector_field_0x10++; /*0x51b854*/
        *(unsigned int *)(v86.ObjectVector_field_0x04 + 4 * v51) = ObjectPlacement_field_0x04; /*0x51b869*/
      }
      ObjectVector_field_0x08 = v86.ObjectVector_field_0x08; /*0x51b86c*/
      goto LABEL_25; /*0x51b86c*/
    }
LABEL_26:
    for ( i = 0; i < v86.ObjectVector_field_0x10; ++i ) /*0x51b885*/
    {
      v53 = *(unsigned int **)(v86.ObjectVector_field_0x04 + 4 * i); /*0x51b88b*/
      if ( (*(int (**)(unsigned int *))(*v53 + 44))(v53) == 1 /*0x51b8a4*/
        || (*(int (**)(unsigned int *))(*v53 + 44))(v53) == 15 )
      {
        if ( !v53[413] ) /*0x51b8a6*/
          sub_7DC720(-2147467261); /*0x51b8b3*/
        if ( !(*(unsigned __int8 (**)(unsigned int))(*(unsigned int *)v53[413] + 16))(v53[413]) ) /*0x51b8c1*/
        {
          v54 = *v53; /*0x51b8c8*/
          v83 = 0; /*0x51b8d5*/
          v84 = 0; /*0x51b8d9*/
          v85 = 0; /*0x51b8dd*/
          (*(void (**)(unsigned int *, int *, int, int))(v54 + 372))(v53, &v83, 1, 1); /*0x51b8e4*/
        }
      }
    }
    this->vt_slot_1348(this, 0, 0); /*0x51b8fc*/
    result = v86.ObjectVector_field_0x04; /*0x51b902*/
    /* X11: vtable install elided (X67 star-deref, RHS vt_VectorClass_ObjectClass) */  /*0x51b906*/
    if ( v86.ObjectVector_field_0x04 && BYTE1(v86.ObjectVector_field_0x0C) ) /*0x51b91f*/
      __3_YAXPAX_Z((void *)v86.ObjectVector_field_0x04); /*0x51b926*/
  }
  else
  {
    v83 = *location; /*0x51b940*/
    v84 = this->location[1]; /*0x51b94c*/
    v85 = this->location[2]; /*0x51b960*/
    v55 = ObjectPlacement::CalcPosition(v47, (int *)v86.__pad_0, &v83, 0, 0, 0); /*0x51b967*/
    v75[0] = *v55; /*0x51b96e*/
    v75[1] = v55[1]; /*0x51b97a*/
    v76 = v55[2]; /*0x51b986*/
    v56 = Cell::GetGroundHeight(v75); /*0x51b98a*/
    v57 = this->ptr_0; /*0x51b98f*/
    v76 = v56; /*0x51b991*/
    (*(void (**)(InfantryClass *, int *))(v57 + 436))(this, v75); /*0x51b99c*/
    locomotor = this->locomotor; /*0x51b9a2*/
    v84 = *(unsigned int *)&stru_A8E960.waypoints[626]; /*0x51b9bc*/
    v85 = *(unsigned int *)&stru_A8E960.waypoints[630]; /*0x51b9c0*/
    if ( !locomotor ) /*0x51b9c4*/
      sub_7DC720(-2147467261); /*0x51b9cb*/
    (*(void (**)(int, unsigned int, int, int))(*(unsigned int *)this->locomotor + 120))( /*0x51b9f4*/
      this->locomotor,
      *(unsigned int *)&stru_A8E960.waypoints[622],
      v84,
      v85);
    if ( !this->locomotor ) /*0x51b9f7*/
      sub_7DC720(-2147467261); /*0x51ba08*/
    (*(void (**)(int))(*(unsigned int *)this->locomotor + 172))(this->locomotor); /*0x51ba16*/
    this->vt_slot_292(this, 1); /*0x51ba22*/
    v59 = *location; /*0x51ba2b*/
    v60 = this->location[2]; /*0x51ba2d*/
    v84 = this->location[1]; /*0x51ba30*/
    v83 = v59; /*0x51ba38*/
    v61 = this->ptr_0; /*0x51ba3c*/
    v85 = v60; /*0x51ba41*/
    (*(void (**)(InfantryClass *, int *))(v61 + 240))(this, &v83); /*0x51ba45*/
    if ( (ObjectPlacement *)this->movementDestination == v47 ) /*0x51ba51*/
    {
      v62 = this->ptr_0; /*0x51ba53*/
      v83 = 0; /*0x51ba60*/
      v84 = 0; /*0x51ba64*/
      v85 = 0; /*0x51ba68*/
      (*(void (**)(InfantryClass *, int *, int, int))(v62 + 372))(this, &v83, 1, 1); /*0x51ba6f*/
    }
    else
    {
      this->vt_slot_1348(this, 0, 1072693248); /*0x51ba81*/
    }
    v63 = this->ptr_0; /*0x51ba87*/
    this->tubeIndex[0] = -1; /*0x51ba8d*/
    this->FootClass_field_bool_68B[0] = 1; /*0x51ba94*/
    return (*(int (**)(InfantryClass *, int))(v63 + 396))(this, 2); /*0x51ba9b*/
  }
  return result; /*0x51b693*/

}
// 0x51d0d0
int InfantryClass::FindMoveTarget()
{

  int *v5; // ecx
  char v6; // bl
  int *v7; // esi
  int v8; // eax
  char *MissionControl; // eax
  int v11; // eax
  unsigned int *v12; // edi
  unsigned int *v13; // eax
  int v14; // ecx
  unsigned int v15; // edi
  int v16; // eax
  int v17; // edx
  unsigned int *v18; // eax
  int v19; // edi
  void *v20; // eax
  int v21; // edx
  unsigned int *v22; // eax
  char *v23; // edi
  int v24; // edi
  int v25; // eax
  char v26; // di
  int v27; // edi
  int v28; // edx
  __int16 v29; // cx
  void *v30; // ebp
  int v31; // ebx
  int LandHeight; // eax
  __int16 v33; // cx
  __int16 v34; // dx
  unsigned int *v35; // eax
  int v36; // edi
  void *v37; // eax
  double v39; // [esp+20h] [ebp-60h]
  double v40; // [esp+20h] [ebp-60h]
  double v41; // [esp+28h] [ebp-58h]
  double v42; // [esp+28h] [ebp-58h]
  __int16 v43[2]; // [esp+40h] [ebp-40h] BYREF
  __int16 v44[2]; // [esp+44h] [ebp-3Ch] BYREF
  __int16 v45[2]; // [esp+48h] [ebp-38h] BYREF
  unsigned int v46; // [esp+4Ch] [ebp-34h]
  unsigned __int16 *v47; // [esp+50h] [ebp-30h]
  int v48; // [esp+54h] [ebp-2Ch] BYREF
  int v49; // [esp+58h] [ebp-28h] BYREF
  int v50; // [esp+5Ch] [ebp-24h] BYREF
  int v51; // [esp+60h] [ebp-20h]
  int v52; // [esp+64h] [ebp-1Ch]
  unsigned int v53[3]; // [esp+68h] [ebp-18h] BYREF
  unsigned short v54[4]; // [esp+74h] [ebp-Ch] BYREF
  int v55; // [esp+7Ch] [ebp-4h]

  v6 = (char)a3; /*0x51d0d5*/
  v7 = v5; /*0x51d0da*/
  v8 = v5[433]; /*0x51d0dd*/
  if ( (v8 == 27 || v8 == 28 || v8 == 29 || v8 == 30) && (unsigned char)a3 && (unsigned char)ptr_0 ) /*0x51d101*/
  {
    (*(void (**)(int *, int, unsigned int, unsigned int))(*v5 + 1368))(v5, 31, 0, 0); /*0x51d10d*/
  }
  else if ( (unsigned __int8)House::IsCurrentPlayer((House *)v5[135]) ) /*0x51d11b*/
  {
    MissionControl = v7->q1B1; /*0x51d124*/
    if ( MissionControl == 27 /*0x51d148*/
      || MissionControl == 28
      || MissionControl == 29
      || MissionControl == 30 )
    {
      return (char)MissionControl; /*0x51d148*/
    }
  }
  if ( !v7->Locomotor ) /*0x51d150*/
    sub_7DC720(-2147467261); /*0x51d15d*/
  if ( (*(unsigned __int8 (**)(int))(*v7->Locomotor + 16))(v7->Locomotor) ) /*0x51d16b*/
    v6 = 0; /*0x51d172*/
  MissionControl = MissionClass::GetMissionControl((MissionClass *)v7); /*0x51d176*/
  if ( MissionControl[9] || v6 )
  {
    LOBYTE(MissionControl) = v7->Type->Fraidycat_2; /*0x51d190*/
    if ( (unsigned char)MissionControl || !v7->target || v6 )
    {
      MissionControl = v7->q1B1; /*0x51d1aa*/
      if ( MissionControl == (char *)-1 || MissionControl == 31 || byte_7EAF7C[4 * (unsigned int)MissionControl] )
      {
        if ( BYTE1(dword_8871E0->ElevationBonusCap[0]) /*0x51d1fa*/
          || (unsigned __int8)TechnoTypeClass::HasVoiceResponse(v7, 3)
          || (unsigned char)ptr_0
          || (LOBYTE(MissionControl) = House::IsCurrentPlayer(v7->owner), !(unsigned char)MissionControl) )
        {
          if ( !v6 ) /*0x51d210*/
          {
LABEL_33:
            LOBYTE(MissionControl) = v7->Type->Fraidycat_2; /*0x51d212*/
            if ( !(unsigned char)MissionControl ) /*0x51d220*/
              return (char)MissionControl; /*0x51d220*/
          }
        }
        else if ( !v6 ) /*0x51d1fe*/
        {
          if ( !v7->FootClass_field_5D4 ) /*0x51d206*/
            return (char)MissionControl; /*0x51d206*/
          goto LABEL_33; /*0x51d206*/
        }
        _EAX = this; /*0x51d226*/
        ptr_0 = this->ptr_0; /*0x51d234*/
        if ( ptr_0 == *(unsigned int *)&stru_A8E960.waypoints[622] /*0x51d252*/
          && this->ptr_4 == *(unsigned int *)&stru_A8E960.waypoints[626]
          && this->ptr_8 == *(unsigned int *)&stru_A8E960.waypoints[630] )
        {
          v12 = (unsigned int *)v7->GetCoords_0(v54); /*0x51d2e7*/
          v13 = (unsigned int *)v7->GetCoords_0(v53); /*0x51d2f0*/
          v14 = (unsigned __int8)v12[1]; /*0x51d2fd*/
          v50 = (unsigned __int8)*v13; /*0x51d308*/
          v51 = v14; /*0x51d30c*/
          if ( v50 == 128 && v14 == 128 ) /*0x51d314*/
          {
            v15 = *ProgressTimer::GetValue((ProgressTimer *)(v7 + 226), &v49); /*0x51d36b*/
          }
          else
          {
            __asm { fild [esp+50h+var_24] } /*0x51d316*/
            __asm
            {
              fsub ds:dbl_7E2808
              fstp [esp+60h+var_5C+4]; double
              fild [esp+60h+var_20]
              fsubr ds:dbl_7E2808
              fstp [esp+60h+var_64+4]; double
            }
            Math::CalcAngle(v40, v42); /*0x51d337*/
            __asm { fsub ds:dbl_7E2820 } /*0x51d33c*/
            __asm { fmul ds:dbl_7E2818 }
            LOWORD(ptr_0) = Math::RoundToInt(a2); /*0x51d350*/
            v15 = ptr_0; /*0x51d355*/
          }
          v16 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 4); /*0x51d385*/
          v17 = *v7; /*0x51d38a*/
          v46 = ((((v15 >> 12) + 1) >> 1) & 7) + v16 - 2; /*0x51d390*/
          a3 = 0; /*0x51d39f*/
          v18 = (unsigned int *)(*(int (**)(int *, unsigned short *, unsigned int))(v17 + 76))(v7, v54, 0); /*0x51d3ae*/
          LOWORD(ptr_0) = *v18 / 256; /*0x51d3c5*/
          HIWORD(ptr_0) = v18[1] / 256; /*0x51d3de*/
          LOBYTE(v18) = v7->onBridge; /*0x51d3e7*/
          this = (InfantryClass *)ptr_0; /*0x51d3f1*/
          *(unsigned int *)v45 = *LayerClass::Pathfinding_Find( /*0x51d42b*/
                              (Type *)&dword_87F7E8,
                              v7->Type->SpeedType,
                              &v48,
                              (__int16 *)&this,
                              v7->Type->SpeedType,
                              -1,
                              0,
                              (char)v18,
                              1,
                              1,
                              0,
                              1,
                              0,
                              1,
                              (__int16 *)&a3,
                              0,
                              0);
          if ( v45[0] != *(unsigned short *)&stru_A8E960.waypoints[590] || v45[1] != *(unsigned short *)&stru_A8E960.waypoints[592] ) /*0x51d43d*/
          {
            v19 = *v7; /*0x51d43f*/
            v20 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v45); /*0x51d44d*/
            (*(void (**)(int *, void *, int))(v19 + 1152))(v7, v20, 1); /*0x51d455*/
            if ( !v7->Locomotor ) /*0x51d45b*/
              sub_7DC720(-2147467261); /*0x51d46a*/
            LOBYTE(MissionControl) = (*(char (**)(int))(*v7->Locomotor + 64))(v7->Locomotor); /*0x51d478*/
            return (char)MissionControl; /*0x51d482*/
          }
        }
        else
        {
          v50 = v7->location; /*0x51d266*/
          __asm { fild [esp+60h+var_24] } /*0x51d26a*/
          v51 = v7[40]; /*0x51d271*/
          __asm { fisub dword ptr [esp+60h+arg_8] } /*0x51d275*/
          v52 = v7[41]; /*0x51d27c*/
          __asm /*0x51d280*/
          {
            fstp [esp+60h+var_5C+4]; double
            fild dword ptr [eax+4]
            fisub [esp+60h+var_20]
            fstp [esp+60h+var_64+4]; double
          }
          Math::CalcAngle(v39, v41); /*0x51d28e*/
          __asm { fsub ds:dbl_7E2820 } /*0x51d293*/
          __asm { fmul ds:dbl_7E2818 }
          (ptr_0) = ((ptr_0) & ~0xFFFF) | ((Math::RoundToInt(a2)) & 0xFFFF); /*0x51d2a7*/
          v11 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 4); /*0x51d2ba*/
          v46 = v11 + ((((ptr_0 >> 12) + 1) >> 1) & 7) - 2; /*0x51d2d0*/
        }
        v21 = *v7; /*0x51d487*/
        this = 0; /*0x51d491*/
        a3 = 0; /*0x51d49b*/
        v22 = (unsigned int *)(*(int (**)(int *, unsigned short *, unsigned int))(v21 + 76))(v7, v54, 0); /*0x51d4a5*/
        (ptr_0) = ((ptr_0) & ~0xFFFF) | ((*v22 / 256) & 0xFFFF); /*0x51d4b8*/
        HIWORD(ptr_0) = v22[1] / 256; /*0x51d4d0*/
        *(unsigned int *)v43 = ptr_0; /*0x51d4d9*/
        v23 = (char *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v43); /*0x51d4e8*/
        v24 = v23[283] + v7->CheckHeightDiff(0) != 0 ? 4 : 0;
        v7->GetDeployCoords(v54, 0); /*0x51d516*/
        v25 = v24 * *(unsigned int *)&stru_A8E960.waypoints[686]; /*0x51d51e*/
        v26 = 0; /*0x51d521*/
        v55 = v25; /*0x51d523*/
        v48 = 0; /*0x51d527*/
        while ( 1 ) /*0x51d536*/
        {
          v27 = ((unsigned char)v46 + v26) & 7; /*0x51d536*/
          v28 = v27 & 7; /*0x51d53b*/
          v29 = LOWORD(dword_89F688[v28]) + v43[0]; /*0x51d53e*/
          LOWORD(v28) = HIWORD(dword_89F688[v28]); /*0x51d54d*/
          LOWORD(v47) = v29; /*0x51d555*/
          HIWORD(v47) = v43[1] + v28; /*0x51d569*/
          ptr_0 = (unsigned int)v47; /*0x51d572*/
          v30 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&ptr_0); /*0x51d587*/
          if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&dword_87F7E8, (__int16 *)&ptr_0, 1) ) /*0x51d589*/
          {
            v31 = *v7; /*0x51d596*/
            LandHeight = ObjectClass::GetLandHeight((ObjectClass *)v7); /*0x51d59e*/
            if ( !(*(int (**)(int *, void *, int, int, unsigned int, int))(v31 + 428))( /*0x51d5a8*/
                    v7,
                    v30,
                    v27,
                    LandHeight,
                    0,
                    1) )
            {
              v33 = *(unsigned short *)&stru_A8E960.waypoints[590]; /*0x51d5b6*/
              v34 = *(unsigned short *)&stru_A8E960.waypoints[592]; /*0x51d5bc*/
              if ( this == *(InfantryClass **)&stru_A8E960.waypoints[590] ) /*0x51d5cc*/
                this = (InfantryClass *)ptr_0; /*0x51d5d5*/
              if ( *(unsigned short *)&stru_A8E960.waypoints[590] || *(unsigned short *)&stru_A8E960.waypoints[592] ) /*0x51d5e5*/
                goto LABEL_57; /*0x51d5e5*/
              v53[1] = ((short)(((ptr_0) >> 16) & 0xFFFF) << 8) + 128; /*0x51d606*/
              v53[0] = ((__int16)ptr_0 << 8) + 128; /*0x51d612*/
              v53[2] = v55; /*0x51d626*/
              v35 = Terrain::ClimbCheck(&v50, v53); /*0x51d62a*/
              if ( ptr_0 == *v35 /*0x51d65c*/
                && (*((unsigned int *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (__int16 *)&ptr_0) + 80) & 0x100) == 0 )
              {
                v34 = *(unsigned short *)&stru_A8E960.waypoints[592]; /*0x51d683*/
                a3 = (unsigned int *)ptr_0; /*0x51d68a*/
                v33 = *(unsigned short *)&stru_A8E960.waypoints[590]; /*0x51d68e*/
LABEL_60:
                LOWORD(MissionControl) = (unsigned short)a3; /*0x51d694*/
                *(unsigned int *)v44 = a3; /*0x51d69b*/
                if ( (unsigned short)a3 != v33 ) /*0x51d69f*/
                  goto LABEL_65; /*0x51d69f*/
                if ( HIWORD(a3) == v34 ) /*0x51d6a6*/
                {
                  LOWORD(MissionControl) = (unsigned short)this; /*0x51d6a8*/
                  *(unsigned int *)v44 = this; /*0x51d6ac*/
                }
                if ( (unsigned short)MissionControl != v33 || v44[1] != v34 ) /*0x51d6ba*/
                {
LABEL_65:
                  v7->MissionDispatch(2, 0); /*0x51d6c4*/
                  v36 = *v7; /*0x51d6ca*/
                  v37 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v44); /*0x51d6d8*/
                  LOBYTE(MissionControl) = (*(char (**)(int *, void *, int))(v36 + 1152))(v7, v37, 1); /*0x51d6e0*/
                }
                return (char)MissionControl; /*0x51d6e0*/
              }
            }
          }
          v33 = *(unsigned short *)&stru_A8E960.waypoints[590]; /*0x51d65e*/
          v34 = *(unsigned short *)&stru_A8E960.waypoints[592]; /*0x51d664*/
LABEL_57:
          v26 = ++v48; /*0x51d66b*/
          if ( v48 >= 8 ) /*0x51d677*/
            goto LABEL_60; /*0x51d677*/
        }
      }
    }
  }
  return (char)MissionControl; /*0x51d47b*/

}
// 0x418e20
int InfantryClass::FindNearbyCell()
{

  double v2; // st7
  void *v3; // esi
  TechnoClass *team; // ecx
  unsigned int *v6; // eax
  int *v7; // eax
  int v8; // ecx
  int v9; // edi
  int v10; // eax
  double v11; // rdi
  __int16 v12; // bx
  void *v13; // edi
  Cell *v14; // esi
  int v15; // eax
  __int16 v17[2]; // [esp+14h] [ebp-44h] BYREF
  double v18; // [esp+18h] [ebp-40h]
  int v19; // [esp+20h] [ebp-38h]
  __int16 v20[2]; // [esp+24h] [ebp-34h] BYREF
  double v21; // [esp+28h] [ebp-30h]
  int v22; // [esp+30h] [ebp-28h]
  Cell *v23; // [esp+34h] [ebp-24h]
  double v26; // [esp+48h] [ebp-10h] BYREF
  int v27; // [esp+50h] [ebp-8h]

  v3 = (void *)a2; /*0x418e2b*/
  v23 = (Cell *)this; /*0x418e35*/
  if ( a2 ) /*0x418e39*/
  {
    team = (TechnoClass *)this->team; /*0x418e3f*/
    if ( !team || !(unsigned __int8)TechnoClass::IsWaypointHidden(team) ) /*0x418e49*/
    {
      if ( !this->vt_slot_1360(this, a2) /*0x418eab*/
        || (v6 = (unsigned int *)(*(int (**)(int, double *, unsigned int))(*(unsigned int *)a2 + 76))(a2, &v26, 0),
            (v19) = ((v19) & ~0xFFFF) | ((*v6 / 256) & 0xFFFF),
            HIWORD(v19) = v6[1] / 256,
            *(unsigned int *)v20 = v19,
            !Cell::IsOccupied((Cell *)this, v20, 0)) )
      {
        v7 = (int *)(*(int (**)(int, double *))(*(unsigned int *)a2 + 72))(a2, &v26); /*0x418ec1*/
        v8 = *v7; /*0x418ec4*/
        v9 = v7[1]; /*0x418ec6*/
        v27 = v7[2]; /*0x418ed3*/
        if ( !dword_A8E7AC ) /*0x418ed7*/
        {
          v19 = 0; /*0x418ee2*/
          if ( *&dword_8871E0->u32_1478 / 256 > 0 ) /*0x418efa*/
          {
            *(unsigned int *)v20 = (__int16)(v9 / 256); /*0x418f21*/
            __asm { fild dword ptr [esp+50h+var_34] } /*0x418f25*/
            __asm { fstp [esp+50h+var_18] }
            *(unsigned int *)v20 = (__int16)(v8 / 256); /*0x418f30*/
            __asm /*0x418f34*/
            {
              fild dword ptr [esp+50h+var_34]
              fstp [esp+50h+var_10]
            }
            while ( 2 ) /*0x418f40*/
            {
              v10 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 7); /*0x418f40*/
              LODWORD(v21) = (__int16)v19; /*0x418f59*/
              v22 = v10; /*0x418f5d*/
              __asm { fild dword ptr [esp+50h+var_30] } /*0x418f61*/
              v18 = 0.0; /*0x418f65*/
              __asm { fstp [esp+50h+var_20] } /*0x418f73*/
              do /*0x419063*/
              {
                LODWORD(v21) = ((__int16)((WORD2(v18) + (unsigned short)v22) << 13) & 0xFFFFE000) - 0x3FFF; /*0x418f93*/
                __asm /*0x418f97*/
                {
                  fild dword ptr [esp+50h+var_30]
                  fmul ds:dbl_7E2810
                  fstp [esp+50h+var_30]
                }
                v11 = v21; /*0x418fa9*/
                Math::SinCos(v21); /*0x418faf*/
                __asm /*0x418fb4*/
                {
                  fmul [esp+58h+var_20]
                  fsubr [esp+58h+var_18]
                }
                v12 = Math::RoundToInt(v2); /*0x418fc3*/
                Math::ArcTan2(v11); /*0x418fc5*/
                __asm { fmul [esp+60h+var_20] } /*0x418fca*/
                __asm { fadd [esp+50h+var_10] }
                v20[0] = Math::RoundToInt(v2); /*0x418fde*/
                v20[1] = v12; /*0x418fe3*/
                *(unsigned int *)v17 = *(unsigned int *)v20; /*0x418ff4*/
                if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&dword_87F7E8, v17, 1) ) /*0x418ff8*/
                {
                  v13 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v17); /*0x419010*/
                  if ( *(unsigned int *)v17 != LODWORD(v18) ) /*0x41901c*/
                  {
                    v14 = v23; /*0x41902a*/
                    if ( (*(unsigned __int8 (**)(Cell *, void *))(v23->Cell_field_0x0 + 1360))(v23, v13) ) /*0x419033*/
                    {
                      if ( Cell::IsOccupied(v14, v17, 0) ) /*0x419046*/
                        return v13; /*0x4190a0*/
                    }
                  }
                  LODWORD(v18) = *(unsigned int *)v17; /*0x419053*/
                }
                ++HIDWORD(v18); /*0x41905f*/
              }
              while ( SHIDWORD(v18) < 8 ); /*0x419063*/
              v15 = *&dword_8871E0->u32_1478; /*0x419074*/
              if ( ++v19 < v15 / 256 ) /*0x41908c*/
                continue; /*0x41908c*/
              break;
            }
            return (void *)a2; /*0x419092*/
          }
        }
      }
    }
  }
  return v3; /*0x419097*/

}
// 0x51f330
int InfantryClass::FindPathToBuilding()
{
  int v2; // eax
  AbstractClass *target; // ecx
  int result; // eax
  void *ptr_0; // edx
  int v6; // edi
  unsigned int v7[3]; // [esp+Ch] [ebp-Ch] BYREF

  v2 = (*((int (__thiscall **)(InfantryClass *, unsigned int))this->ptr_0 + 185))(this, 0); /*0x51f33b*/
  target = this->target; /*0x51f341*/
  if ( !target /*0x51f359*/
    || (result = (*((int (__thiscall **)(InfantryClass *, AbstractClass *, int))this->ptr_0 + 234))(this, target, v2),
        !(unsigned char)result) )
  {
    if ( (v7[0] = this->location[0], /*0x51f3a5*/
          v7[1] = this->location[1],
          ptr_0 = this->ptr_0,
          v7[2] = this->location[2],
          v6 = (*((int (__thiscall **)(InfantryClass *, int, unsigned int *, unsigned int))ptr_0 + 241))(this, 1, v7, 0),
          (result = (int)this->target) == 0)
      && !v6
      || (result = (*((int (__thiscall **)(InfantryClass *, int))this->ptr_0 + 242))(this, v6), !v6) )
    {
      if ( this->currentMission != 5 ) /*0x51f3ae*/
      {
        result = (*((int (__thiscall **)(InfantryClass *))this->ptr_0 + 33))(this); /*0x51f3b4*/
        if ( !result->u8_D94 ) /*0x51f3ba*/
          return (*((int (__thiscall **)(InfantryClass *, unsigned int, int))this->ptr_0 + 289))(this, 0, 1); /*0x51f3cc*/
      }
    }
  }
  return result; /*0x51f3d2*/
}
/* ASM:
sub     esp, 0Ch
push    esi
mov     esi, ecx
push    edi
push    0
mov     eax, [esi]
call    dword ptr [eax+2E4h]
mov     ecx, [esi+2B4h]
test    ecx, ecx
jz      short loc_51F35B
mov     edx, [esi]
push    eax
push    ecx
mov     ecx, esi
call    dword ptr [edx+3A8h]
test    al, al
jnz     short loc_51F3D2

loc_51F35B:                             ; CODE XREF: InfantryClass__FindPathToBuilding+19↑j
lea     eax, [esi+9Ch]
push    0
mov     ecx, [eax]
mov     [esp+18h+var_C], ecx
mov     ecx, esi
mov     edx, [eax+4]
mov     [esp+18h+var_8], edx
mov     edx, [esi]
mov     eax, [eax+8]
mov     [esp+18h+var_4], eax
lea     eax, [esp+18h+var_C]
push    eax
push    1
call    dword ptr [edx+3C4h]
mov     edi, eax
mov     eax, [esi+2B4h]
test    eax, eax
jnz     short loc_51F398
test    edi, edi
jz      short loc_51F3A7

loc_51F398:                             ; CODE XREF: InfantryClass__FindPathToBuilding+62↑j
mov     edx, [esi]
push    edi
mov     ecx, esi
call    dword ptr [edx+3C8h]
test    edi, edi
jnz     short loc_51F3D2

loc_51F3A7:                             ; CODE XREF: InfantryClass__FindPathToBuilding+66↑j
cmp     dword ptr [esi+0ACh], 5
jz      short loc_51F3D2
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+84h]
mov     cl, [eax+0D94h]
test    cl, cl
jnz     short loc_51F3D2
mov     edx, [esi]
push    1
push    0
mov     ecx, esi
call    dword ptr [edx+484h]

loc_51F3D2:                             ; CODE XREF: InfantryClass__FindPathToBuilding+29↑j
; InfantryClass__FindPathToBuilding+75↑j ...
pop     edi
pop     esi
add     esp, 0Ch
retn
*/

// 0x51f3e0
int InfantryClass::EnterBuilding()
{
  AbstractClass *v2; // ecx
  AbstractClass *v3; // eax
  int uniqueId; // ecx
  AbstractClass *target; // ecx
  InfantryTypeClass *Type; // eax
  int v8; // eax
  char *MissionControl; // eax
  int v10; // eax

  if ( (this->Type->C4 || (uint8_t)TechnoTypeClass::HasVoiceResponse((int *)this, 14)) /*0x51f42a*/
    && (v2 = this->target) != 0
    && (*((int (__thiscall **)(AbstractClass *))v2->ptr_0 + 11))(v2) == 6
    && (v3 = this->target, uniqueId = v3[36].uniqueId, *(unsigned char *)(uniqueId + 5495))
    && !*(unsigned char *)(uniqueId + 5889) )
  {
    (*((void (__thiscall **)(InfantryClass *, AbstractClass *, int))this->ptr_0 + 288))(this, v3, 1); /*0x51f43b*/
    (*((void (__thiscall **)(InfantryClass *, int, unsigned int))this->ptr_0 + 122))(this, 17, 0); /*0x51f449*/
    return 1; /*0x51f44f*/
  }
  else if ( !(uint8_t)House::IsCurrentPlayer((House *)this->owner) /*0x51f4a4*/
         && (target = this->target) != 0
         && (*((int (__thiscall **)(AbstractClass *))target->ptr_0 + 11))(target) == 6
         && ((Type = this->Type, Type->Infiltrate)
          || (Type->Occupier || Type->Assaulter)
          && (uint8_t)BuildingClass::CanRepair((BuildingClass *)this->target, (int)this)) )
  {
    (*((void (__thiscall **)(InfantryClass *, AbstractClass *, int))this->ptr_0 + 288))(this, this->target, 1); /*0x51f4ba*/
    (*((void (__thiscall **)(InfantryClass *, int))this->ptr_0 + 124))(this, 8); /*0x51f4c6*/
    return 1; /*0x51f4cc*/
  }
  else if ( (uint8_t)House::IsCurrentPlayer((House *)this->owner) /*0x51f4fa*/
         && ((v8 = this->SequenceAnim[0], v8 == 27) || v8 == 28 || v8 == 29 || v8 == 30) )
  {
    (*((void (__thiscall **)(InfantryClass *))this->ptr_0 + 266))(this); /*0x51f500*/
    MissionControl = MissionClass::GetMissionControl((MissionClass *)this); /*0x51f508*/
    (*((unsigned short *)&(v10))) = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x51f516*/
    return v10 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x51f532*/
  }
  else
  {
    return InfantryClass::ScanTarget((FootClass *)this); /*0x51f538*/
  }
}
// 0x51F540
int InfantryClass::ProcessEnterOrRepair()
{
  AbstractClass *target; // ecx
  InfantryTypeClass *Type; // eax
  int v5; // eax

  if ( !(uint8_t)House::IsCurrentPlayer((House *)this->owner) /*0x51f591*/
    && (target = this->target) != 0
    && (*((int (__thiscall **)(AbstractClass *))target->ptr_0 + 11))(target) == 6
    && ((Type = this->Type, Type->Infiltrate)
     || (Type->Occupier || Type->Assaulter)
     && (uint8_t)BuildingClass::CanRepair((BuildingClass *)this->target, (int)this)) )
  {
    (*((void (__thiscall **)(InfantryClass *, AbstractClass *, int))this->ptr_0 + 288))(this, this->target, 1); /*0x51f5a7*/
    (*((void (__thiscall **)(InfantryClass *, int))this->ptr_0 + 124))(this, 8); /*0x51f5b3*/
    return 1; /*0x51f5b9*/
  }
  else if ( !(uint8_t)House::IsCurrentPlayer((House *)this->owner) /*0x51f5e9*/
         && ((v5 = this->SequenceAnim[0], v5 == 27) || v5 == 28 || v5 == 29 || v5 == 30)
         && !this->target )
  {
    (*((void (__thiscall **)(InfantryClass *, int, unsigned int, unsigned int))this->ptr_0 + 342))(this, 31, 0, 0); /*0x51f5fd*/
    return 1; /*0x51f603*/
  }
  else
  {
    return InfantryClass::ProcessDeploy((FootClass *)this); /*0x51f60c*/
  }
}
// 0x522bc0
bool InfantryClass::CanEnterBuilding()
{
  int v2; // eax
  bool result; // al

  result = 0; /*0x522bfc*/
  if ( (*((int (__thiscall **)(InfantryClass *))this->ptr_0 + 97))(this) == 5 /*0x522bdd*/
    || (*((int (__thiscall **)(InfantryClass *))this->ptr_0 + 97))(this) == 11 )
  {
    v2 = this->SequenceAnim[0]; /*0x522bdf*/
    if ( !v2 || v2 == 9 || v2 == 10 || v2 == 32 ) /*0x522bf6*/
      return 1; /*0x522bdd*/
  }
  return result; /*0x522bfa*/
}
// 0x51f640
int InfantryClass::FindIdleAITarget()
{
  int result; // eax

  result = InfantryClass::GetIdleTimer(this); /*0x51f643*/
  if ( result == -1 ) /*0x51f64b*/
    return FootClass::FindAITarget((FootClass *)this); /*0x51f64f*/
  return result; /*0x51f654*/
}
// 0x51f640
// ============================================================
// Phase 3: C4 / Bomb
// ============================================================

// 0x51f6e0
int InfantryClass::ProcessIvanBomb()
{
  int result; // eax

  result = InfantryClass::GetIdleTimer(this); /*0x51f643*/
  if ( result == -1 ) /*0x51f64b*/
    return FootClass::FindAITarget((FootClass *)this); /*0x51f64f*/
  return result; /*0x51f654*/
}
// 0x51f660
int InfantryClass::ProcessIvanBombResult()
{
  int v2; // eax
  House *v3; // eax

  v2 = this->SequenceAnim[0]; /*0x51f663*/
  if ( v2 != 27 && v2 != 28 && v2 != 29 && v2 != 30 ) /*0x51f67b*/
    return FootClass::Destru_vt139((FootClass *)this); /*0x51f67b*/
  v3 = (House *)(*((int (__thiscall **)(InfantryClass *))this->ptr_0 + 15))(this); /*0x51f681*/
  if ( (uint8_t)House::IsCurrentPlayer(v3) ) /*0x51f686*/
  {
    (*((void (__thiscall **)(InfantryClass *, unsigned int, int))this->ptr_0 + 288))(this, 0, 1); /*0x51f697*/
    return 1; /*0x51f6a3*/
  }
  if ( this->Type->UndeployDelay > -1 ) /*0x51f6b1*/
    return FootClass::Destru_vt139((FootClass *)this); /*0x51f6d9*/
  (*((void (__thiscall **)(InfantryClass *, int, unsigned int, unsigned int))this->ptr_0 + 342))(this, 31, 0, 0); /*0x51f6bd*/
  return *(unsigned int *)(this->Type->Sequence[0] + 1120); /*0x51f6a2*/
}
// 0x521dd0
int InfantryClass::CheckAndApplyBomb()
{
  int result; // eax
  int (__stdcall ***v3)(unsigned int, void *, int *); // esi
  int v4; // esi
  int v5; // eax
  int v6; // edi
  int v7; // [esp+14h] [ebp-18h] BYREF
  int v8; // [esp+18h] [ebp-14h] BYREF
  char v9[16]; // [esp+1Ch] [ebp-10h] BYREF

  FootClass::vt_entry_4F4((FootClass *)this); /*0x521dd6*/
  result = (int)this->movementDestination; /*0x521ddb*/
  if ( result ) /*0x521de3*/
  {
    result = ObjectClass::DistanceTo((ObjectClass *)this, (int)this->movementDestination); /*0x521dec*/
    if ( result < 1024 ) /*0x521df6*/
    {
      result = (int)this->Type; /*0x521dfc*/
      if ( result->u8_D94 ) /*0x521e02*/
      {
        v3 = (int (__stdcall ***)(unsigned int, void *, int *))this->locomotor[0]; /*0x521e10*/
        v7 = 0; /*0x521e16*/
        if ( !v3 ) /*0x521e20*/
          goto LABEL_12; /*0x521e20*/
        v4 = (**v3)(v3, &unk_818858, &v8); /*0x521e31*/
        if ( v4 >= 0 ) /*0x521e35*/
        {
          v6 = v8; /*0x521e49*/
          ComPtr::Release_Alt((ComPtr *)&v7); /*0x521e51*/
          v5 = v6; /*0x521e56*/
          v7 = v6; /*0x521e59*/
        }
        else
        {
          ComPtr::Release_Alt((ComPtr *)&v7); /*0x521e3b*/
          v5 = 0; /*0x521e40*/
          v7 = 0; /*0x521e42*/
        }
        if ( v4 < 0 && v4 != -2147467262 ) /*0x521e67*/
          sub_7DC720(v4); /*0x521e6a*/
        if ( !v5 ) /*0x521e75*/
  LABEL_12:
          sub_7DC720(-2147467261); /*0x521e7c*/
        (*(void (__stdcall **)(int, char *))(*(unsigned int *)v5 + 12))(v5, v9); /*0x521e8d*/
        result = v7; /*0x521e90*/
        if ( v7 ) /*0x521e96*/
          return (*(int (__stdcall **)(int))(*(unsigned int *)v7 + 8))(v7); /*0x521e9b*/
      }
    }
  }
  return result; /*0x521e9e*/
}
// ============================================================
// Phase 3: Per-Frame & AI
// ============================================================

// 0x521c90
int InfantryClass::PowerDrainUpdate(int a2)
{

  int v3; // edx
  int v4; // eax
  unsigned __int8 *v5; // edx
  unsigned __int8 *v6; // eax
  unsigned __int8 *v7; // ecx
  unsigned __int8 *v8; // edx
  unsigned __int8 *v9; // eax

  FootClass::BeginPowerUpdate((FootClass *)this, a2); /*0x521c99*/
  Power::TimerProcess(this->SequenceAnim); /*0x521ca7*/
  v3 = this->InfantryClass_field_timer_6C8[0]; /*0x521cac*/
  v4 = this->InfantryClass_field_timer_6C8[2]; /*0x521cb2*/
  if ( v3 != -1 ) /*0x521cbb*/
  {
    if ( *(unsigned int *)&stru_A8E960.random[528] - v3 >= v4 ) /*0x521cc7*/
      v4 = 0; /*0x521ccd*/
    else
      v4 -= *(unsigned int *)&stru_A8E960.random[528] - v3; /*0x521cc9*/
  }
  Power::TimerProcess(v4); /*0x521cd2*/
  Power::TimerProcess(this->PanicDurationLeft); /*0x521ce0*/
  LOBYTE(v5) = this->Technician[0]; /*0x521ce5*/
  v6 = (unsigned __int8 *)Power::FlagProcess((Power *)a2, (int)v5); /*0x521cee*/
  LOBYTE(v6) = this->InfantryClass_field_bool_6DA[0]; /*0x521cf3*/
  Power::FlagProcess((Power *)a2, (int)v6); /*0x521cfc*/
  LOBYTE(v7) = this->Crawling[0]; /*0x521d01*/
  Power::FlagProcess((Power *)a2, (int)v7); /*0x521d0a*/
  LOBYTE(v8) = this->InfantryClass_field_bool_6DC[0]; /*0x521d0f*/
  v9 = (unsigned __int8 *)Power::FlagProcess((Power *)a2, (int)v8); /*0x521d18*/
  LOBYTE(v9) = this->InfantryClass_field_bool_6DD[0]; /*0x521d1d*/
  return Power::FlagProcess((Power *)a2, (int)v9); /*0x521d2b*/

}
// 0x51aa10
int InfantryClass::HandleTargetDestroyed()
{
  int result; // eax

  result = FootClass::HandleTargetDestroyed((FootClass *)this, a2, a3); /*0x51aa1e*/
  if ( (int *)this->Type == a2 ) /*0x51aa29*/
    this->Type = 0; /*0x51aa2b*/
  return result; /*0x51aa35*/
}
// 0x51f250
int InfantryClass::ProcessUpdate()
{
  int result; // eax

  result = this->SequenceAnim; /*0x51f25d*/
  if ( (result == 27 || result == 28 || result == 29 || result == 30) /*0x51f285*/
    && (result = this->HandleCursorOverCell(a3, 0, a5),
        result == 2) )
  {
    (*((unsigned char *)&(result))) = 0; /*0x51f289*/
  }
  else if ( this->isBerserk[0] ) /*0x51f28f*/
  {
    (*((unsigned char *)&(result))) = 0; /*0x51f29b*/
  }
  else
  {
    (*((unsigned char *)&(result))) = ObjectClass::SpawnInfantry((TechnoClass *)this, a2, a3, a4, a5); /*0x51f2af*/
  }
  return result; /*0x51f287*/
}
// 0x51f190
int InfantryClass::ValidateTargetAndMove(AbstractClass* target, int flags)
{
  int result; // eax

  result = ((int64_t (__thiscall *)(InfantryClass *, int *, int))*((unsigned int *)this->ptr_0 + 29))(this, a3, a4); /*0x51f1a1*/
  switch ( result ) /*0x51f1b4*/
  {
    case 9: /*0x51f1b4*/
    case 28: /*0x51f1b4*/
    case 29: /*0x51f1b4*/
      result = 9; /*0x51f1bb*/
      break; /*0x51f1c0*/
    case 27: /*0x51f1b4*/
    case 57: /*0x51f1b4*/
      result = 5; /*0x51f1c2*/
      break; /*0x51f1c2*/
    default:
      break;
  }
  if ( a3 == (int *)this && result == 5 ) /*0x51f1ce*/
  {
    (*((unsigned char *)&(result))) = 0; /*0x51f1d2*/
  }
  else if ( this->isBerserk ) /*0x51f1d8*/
  {
    (*((unsigned char *)&(result))) = 0; /*0x51f1e4*/
  }
  else
  {
    return FootClass::ValidateMove((FootClass *)this, result, a3, a4); /*0x51f1ef*/
  }
  return result; /*0x51f1d0*/
}
/* ASM:
push    ebp
mov     ebp, [esp+4+arg_8]
push    esi
mov     esi, ecx
push    edi
mov     edi, [esp+0Ch+arg_4]
mov     eax, [esi]
push    ebp
push    edi
call    dword ptr [eax+74h]
lea     ecx, [eax-1]    ; switch 57 cases
cmp     ecx, 38h
ja      short def_51F1B4 ; jumptable 0051F1B4 default case, cases 1-8,10-26,30-56
xor     edx, edx
mov     dl, ds:((unsigned char *)&byte_51F20C)[ecx]
jmp     ds:jpt_51F1B4[edx*4] ; switch jump
; ---------------------------------------------------------------------------

loc_51F1BB:                             ; CODE XREF: InfantryClass__ValidateTargetAndMove+24↑j
; DATA XREF: .text:jpt_51F1B4↓o
mov     eax, 9          ; jumptable 0051F1B4 cases 9,28,29
jmp     short def_51F1B4 ; jumptable 0051F1B4 default case, cases 1-8,10-26,30-56
; ---------------------------------------------------------------------------

loc_51F1C2:                             ; CODE XREF: InfantryClass__ValidateTargetAndMove+24↑j
; DATA XREF: .text:jpt_51F1B4↓o
mov     eax, 5          ; jumptable 0051F1B4 cases 27,57

def_51F1B4:                             ; CODE XREF: InfantryClass__ValidateTargetAndMove+1A↑j
; InfantryClass__ValidateTargetAndMove+24↑j ...
cmp     edi, esi        ; jumptable 0051F1B4 default case, cases 1-8,10-26,30-56
jnz     short loc_51F1D8
cmp     eax, 5
jnz     short loc_51F1D8
pop     edi
pop     esi
xor     al, al
pop     ebp
retn    0Ch
; ---------------------------------------------------------------------------

loc_51F1D8:                             ; CODE XREF: InfantryClass__ValidateTargetAndMove+39↑j
; InfantryClass__ValidateTargetAndMove+3E↑j
mov     cl, [esi+298h]
test    cl, cl
jz      short loc_51F1EA
pop     edi
pop     esi
xor     al, al
pop     ebp
retn    0Ch
; ---------------------------------------------------------------------------

loc_51F1EA:                             ; CODE XREF: InfantryClass__ValidateTargetAndMove+50↑j
push    ebp
push    edi
push    eax
mov     ecx, esi
call    FootClass__ValidateMove
pop     edi
pop     esi
pop     ebp
retn    0Ch
*/

// 0x728280
int InfantryClass::SetMission()
{
  int v1; // ebp
  int v2; // edi
  int16_t *v3; // esi
  unsigned short *v4; // ebx
  int result; // eax
  int j; // ebp
  int v7; // esi
  unsigned int *v8; // esi
  int v9; // ebx
  int i; // [esp+10h] [ebp-23Ch]
  char Buffer[12]; // [esp+18h] [ebp-234h] BYREF
  char Source[552]; // [esp+24h] [ebp-228h] BYREF

  INIClass::ClearSection((int)this, (int)off_844A60, 0); /*0x728296*/
  v1 = dword_8B4148; /*0x72829b*/
  v2 = 0; /*0x7282a1*/
  for ( i = -1; v2 < v1; ++v2 ) /*0x7282ad*/
  {
    v3 = (int16_t *)*((unsigned int *)dword_8B413C + v2); /*0x7282b5*/
    v4 = CellCoord::To_CellObj(&dword_87F7E8, v3 + 18); /*0x7282c6*/
    if ( InfantryClass::IsInBounds((int)v4) ) /*0x7282ca*/
    {
      v4->q116 = ++i; /*0x7282f6*/
    }
    else
    {
      if ( v3 ) /*0x7282d5*/
        v3->vt_slot_32(1); /*0x7282dd*/
      --v1; /*0x7282e0*/
      v4->q116 = -1; /*0x7282e1*/
      --v2; /*0x7282ea*/
    }
  }
  result = dword_8B4148; /*0x728302*/
  for ( j = 0; j < dword_8B4148; ++j ) /*0x72830b*/
  {
    v7 = *((unsigned int *)dword_8B413C + j); /*0x728317*/
    if ( v7 ) /*0x72831c*/
    {
      sprintf(Buffer, "%d", j); /*0x72832d*/
      sprintf( /*0x728354*/
        Source,
        "%d,%d,%d,%d,%d",
        *(int16_t *)(v7 + 36),
        *(int16_t *)(v7 + 38),
        *(unsigned int *)(v7 + 44),
        *(int16_t *)(v7 + 40),
        *(int16_t *)(v7 + 42));
      v8 = (unsigned int *)(v7 + 48); /*0x72835c*/
      v9 = 100; /*0x72835f*/
      do /*0x72838b*/
      {
        sprintf(&Source[strlen(Source)], aD, *v8++); /*0x72837f*/
        --v9; /*0x72838a*/
      }
      while ( v9 ); /*0x72838b*/
      INIClass::SetString(this, (uint8_t *)off_844A60, Buffer, Source); /*0x7283a2*/
    }
    result = dword_8B4148; /*0x7283a7*/
  }
  return result; /*0x7283b5*/
}
// 0x728e30
int InfantryClass::IdleStateMachine()
{
  AnimClass *v2; // edi
  int v3; // edi
  int v4; // eax
  int v5; // edi
  int *Owner; // eax
  AnimClass *v7; // eax
  int *v8; // edx
  int *v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // edi
  unsigned char *v13; // eax
  int v14; // edi
  int v15; // eax
  int *v16; // edx
  int *v17; // edx
  AnimClass *v19; // [esp+0h] [ebp-18h]
  int v20; // [esp+Ch] [ebp-Ch] BYREF
  int v21; // [esp+10h] [ebp-8h] BYREF
  int v22; // [esp+14h] [ebp-4h]
  int retaddr; // [esp+18h] [ebp+0h]
  int v24; // [esp+20h] [ebp+8h]

  if ( !(*(uint8_t (__stdcall **)(TunnelLocomotionClass *))(*&this->isAliveFlag + 16))(this) ) /*0x728e3b*/
    return 0; /*0x7291a0*/
  v19 = v2; /*0x728e49*/
  v3 = this->Owner->GetZAboveGround(); /*0x728e55*/
  v4 = this->Owner->vt_slot_464(); /*0x728e59*/
  switch ( this->RefCount ) /*0x728e6c*/
  {
    case 1: /*0x728e6c*/
      if ( v3 >= 0 ) /*0x728e75*/
        InfantryClass::ProcessTunnelMovement((InfantryClass *)((char *)this - 4)); /*0x728e86*/
      else
        this->RefCount = 3; /*0x728e77*/
      break; /*0x728e7e*/
    case 2: /*0x728e6c*/
      if ( v3 >= 0 ) /*0x728e92*/
      {
        if ( !this->CurrentState[6] /*0x728ece*/
          || (v5 = this->CurrentState[6],
              (double)(v5 - Timeout::GetRemaining(&this->Timeout_C0)) / (double)v5 == 1.0) )
        {
          this->Owner->vt_slot_1348(/*0x728ee0*/
            this->Owner, 0, 1072693248, v19);
          Owner = (int *)this->Owner; /*0x728ee6*/
          this->RefCount = 3; /*0x728ee9*/
          Owner += 39; /*0x728ef0*/
          v21 = *Owner; /*0x728ef9*/
          v22 = Owner[1]; /*0x728f06*/
          retaddr = Owner[2]; /*0x728f11*/
          StartAudioControllerAt(dword_8871E0->ImpactLandSound, &v21, 0); /*0x728f1b*/
          v7 = (AnimClass *)operator new(0x1C8u); /*0x728f25*/
          if ( v7 ) /*0x728f2f*/
          {
            v8 = (int *)&this->Owner->Coord_9C; /*0x728f36*/
            v21 = *v8; /*0x728f49*/
            v22 = v8[1]; /*0x728f50*/
            retaddr = v8[2]; /*0x728f5c*/
            AnimClass::ctor(v7, *&dword_8871E0->u32_294, &v21, 0, 1, (void *)0x600, 0, 0); /*0x728f6f*/
          }
          this->Owner->vt_slot_220(0); /*0x728f7b*/
        }
      }
      else
      {
        this->RefCount = 3; /*0x728e94*/
      }
      break; /*0x728e9b*/
    case 3: /*0x728e6c*/
      v9 = (int *)this->Owner; /*0x728f86*/
      if ( v4 == -256 ) /*0x728f8e*/
      {
        (*(void (__thiscall **)(int *, unsigned int))(*v9 + 292))(v9, 0); /*0x728f94*/
        this->RefCount = 4; /*0x728f9a*/
      }
      else
      {
        v20 = v9[39]; /*0x728fb2*/
        v21 = v9[40]; /*0x728fb9*/
        v22 = v9[41]; /*0x728fc0*/
        v10 = *v9; /*0x728fc4*/
        if ( v22 <= -256 ) /*0x728fcb*/
        {
          (*(void (__stdcall **)(unsigned int))(v10 + 292))(0); /*0x729023*/
          this->RefCount = 4; /*0x729029*/
        }
        else
        {
          v24 = (*(int (__stdcall **)(AnimClass *))(v10 + 1336))(v19); /*0x728fd3*/
          (*((unsigned short *)&(v11))) = Math::RoundToInt((double)v24 * *(double *)dword_8871E0->TunnelSpeed); /*0x728fe3*/
          if ( v11 <= 5 ) /*0x728feb*/
            v11 = 5; /*0x728fed*/
          if ( retaddr - v11 < -256 ) /*0x729002*/
            retaddr = -256; /*0x729004*/
          this->Owner->SetPosition(&v21); /*0x729016*/
        }
      }
      break; /*0x728fa1*/
    case 4: /*0x728e6c*/
      FindUnitPlacementTarget((ObjectClass *)((char *)this - 4)); /*0x729038*/
      break; /*0x72903d*/
    case 5: /*0x728e6c*/
      AnimClass::GetAnimation(v19, v3); /*0x729045*/
      break; /*0x72904a*/
    case 6: /*0x728e6c*/
      if ( !this->CurrentState[6] /*0x72907d*/
        || (v12 = this->CurrentState[6],
            (double)(v12 - Timeout::GetRemaining(&this->Timeout_C0)) / (double)v12 == 1.0) )
      {
        this->Owner->vt_slot_396(2); /*0x729086*/
        v13 = (unsigned char *)this->Owner; /*0x72908c*/
        if ( v13[144] ) /*0x72908f*/
        {
          if ( !v13[129] && !v13[141] ) /*0x7290a3*/
          {
            (*(void (__stdcall **)(TunnelLocomotionClass *))(*&this->isAliveFlag + 72))(this); /*0x7290b2*/
            goto LABEL_32; /*0x7290b5*/
          }
        }
      }
      break; /*0x7290b5*/
    case 7: /*0x728e6c*/
      if ( !this->CurrentState[6] /*0x7290e5*/
        || (v14 = this->CurrentState[6],
            (double)(v14 - Timeout::GetRemaining(&this->Timeout_C0)) / (double)v14 == 1.0) )
      {
  LABEL_32:
        this->RefCount = 0; /*0x7290e7*/
        FootClass::ClearPathIndex((FootClass *)this->Owner); /*0x7290f1*/
      }
      break; /*0x7290f1*/
    default:
      break;
  }
  v15 = this->Owner; /*0x7290f6*/
  if ( v15->q083 ) /*0x7290fa*/
  {
    if ( !(uint8_t)House::IsHumanPlayer(v15->q21C) ) /*0x72910e*/
    {
      v16 = (int *)&this->Owner->Coord_9C; /*0x72911a*/
      v20 = *v16; /*0x729122*/
      v21 = v16[1]; /*0x72912e*/
      v22 = v16[2]; /*0x72913a*/
      if ( (uint8_t)Cell::IsPassable(&v20) /*0x72917b*/
        || (dword_A8B230[0].ptr_0 & 0x1000) != 0
        && (v17 = (int *)&this->Owner->Coord_9C,
            v20 = *v17,
            v21 = v17[1],
            v22 = v17[2],
            (uint8_t)Game::Stub3((int)&v20)) )
      {
        this->Owner->Remove(); /*0x729189*/
      }
    }
  }
  InfantryClass::ReleaseInfiltrators((InfantryClass *)this->Owner); /*0x729192*/
  return 1; /*0x729199*/
}
// 0x7291f0
int InfantryClass::ProcessTunnelMovement()
{

  double v1; // st7
  void **result; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // edx
  void *NeedsSaveOrLink; // eax
  ObjectClass *v10; // eax
  int v11; // ecx
  int *v12; // edx
  int *v13; // ecx
  double v14; // [esp+0h] [ebp-30h]
  double v15; // [esp+8h] [ebp-28h]
  int v16; // [esp+18h] [ebp-18h]
  int v17; // [esp+1Ch] [ebp-14h] BYREF
  int v18; // [esp+20h] [ebp-10h] BYREF
  int v19; // [esp+24h] [ebp-Ch]
  int v20; // [esp+28h] [ebp-8h]

  result = (void **)TimerClass::Active((int)this->ptr_C + 904); /*0x7291ff*/
  if ( !(unsigned char)result ) /*0x729206*/
  {
    v4 = *((unsigned int *)this->ptr_C + 39); /*0x72921d*/
    v5 = *((unsigned int *)this->ptr_C + 40); /*0x72921f*/
    v20 = *((unsigned int *)this->ptr_C + 41); /*0x729225*/
    v6 = this->referenceCount - v4; /*0x72922c*/
    NeedsSaveOrLink = this->NeedsSaveOrLink; /*0x72922e*/
    v18 = v6; /*0x729231*/
    __asm { fild [esp+30h+var_10] } /*0x729237*/
    v16 = v5 - (unsigned int)NeedsSaveOrLink; /*0x72923d*/
    __asm /*0x729241*/
    {
      fstp [esp+30h+var_28]; double
      fild [esp+30h+var_18]
      fstp [esp+30h+var_30]; double
    }
    Math::CalcAngle(v14, v15); /*0x72924c*/
    __asm { fsub ds:dbl_7E2820 } /*0x729251*/
    __asm { fmul ds:dbl_7E2818 }
    (v16) = ((v16) & ~0xFFFF) | ((Math::RoundToInt(v1)) & 0xFFFF); /*0x729276*/
    if ( (unsigned short)v16 == *(unsigned short *)ProgressTimer::GetValue((ProgressTimer *)((char *)this->ptr_C + 904), &v17) ) /*0x729284*/
    {
      _EAX = (*(int (**)(void *))(*(unsigned int *)this->ptr_C + 132))(this->ptr_C); /*0x72929f*/
      __asm { fild dword ptr [eax+71Ch] } /*0x7292a5*/
      _ECX = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x7292ab*/
      __asm /*0x7292b1*/
      {
        fdivr ds:dbl_7F5B18
        fdiv qword ptr [ecx+20h]
      }
      LOWORD(v10) = Math::RoundToInt(v1); /*0x7292ba*/
      v11 = *(unsigned int *)&MEMORY[0xA8EB00].?[416]; /*0x7292bf*/
      this->nextArrayIndex = 2; /*0x7292c8*/
      this->owningHouseIndex = v11; /*0x7292d1*/
      this->fallRate = v19; /*0x7292d7*/
      this->nextObject = v10; /*0x7292da*/
      this->attachedTag = (TagClass *)v10; /*0x7292dd*/
      v12 = (int *)((char *)this->ptr_C + 156); /*0x7292e3*/
      v18 = *v12; /*0x7292eb*/
      v19 = v12[1]; /*0x7292f7*/
      v20 = v12[2]; /*0x7292fe*/
      StartAudioControllerAt(*(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 372), &v18, 0); /*0x72930c*/
      result = (void **)__2_YAPAXI_Z(0x1C8u); /*0x729316*/
      if ( result ) /*0x729320*/
      {
        v13 = (int *)((char *)this->ptr_C + 156); /*0x729327*/
        v18 = *v13; /*0x72933a*/
        v19 = v13[1]; /*0x729341*/
        v20 = v13[2]; /*0x72934d*/
        result = AnimClass::ctor( /*0x729360*/
                   (AnimClass *)result,
                   *(void **)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 660),
                   &v18,
                   0,
                   1,
                   (void *)0x600,
                   0,
                   0);
      }
      LOBYTE(this->attachedBomb) = 0; /*0x729365*/
    }
    else
    {
      return (*((void **(**)(void **, int))this->ptr_4 + 19))(&this->ptr_4, v16); /*0x729292*/
    }
  }
  return result; /*0x729295*/

}
// 0x736579
int InfantryClass::UpdateBehavior()
{

  int v5; // eax
  double v6; // st7
  int result; // eax
  int eax7; // eax
  unsigned __int8 *v8; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  unsigned int *v13; // edi
  int v14; // ecx
  CellClass *v15; // eax
  CellClass *v16; // eax
  unsigned short *v17; // eax
  __int16 v18; // di
  __int16 v19; // bx
  CellClass *v20; // eax
  unsigned int *v21; // edi
  int v22; // ebx
  __int16 *PlacementCellsAlt; // eax
  void *v24; // eax
  int v25; // [esp-2Eh] [ebp-40h] BYREF
  unsigned int v26[2]; // [esp-26h] [ebp-38h] BYREF
  int *v27; // [esp-1Eh] [ebp-30h]
  unsigned int v28[2]; // [esp-1Ah] [ebp-2Ch] BYREF
  unsigned int v29[4]; // [esp-12h] [ebp-24h] BYREF
  int v30[2]; // [esp-2h] [ebp-14h] BYREF
  int v31; // [esp+6h] [ebp-Ch] BYREF
  int v32; // [esp+Ah] [ebp-8h] BYREF
  int v33; // [esp+Eh] [ebp-4h]
  int vars0; // [esp+12h] [ebp+0h]
  _UNKNOWN *retaddr; // [esp+16h] [ebp+4h]

  v30[0] = a2; /*0x73657d*/
  v30[1] = a3; /*0x736581*/
  v31 = v5; /*0x736585*/
  result = __2_YAPAXI_Z((size_t)v27); /*0x736589*/
  if ( result ) /*0x736593*/
    result = (int)AnimClass::ctor( /*0x7365b6*/
                    (AnimClass *)result,
                    (void *)dword_8871E0->InfantryBrute,
                    v30,
                    0,
                    1,
                    (void *)0x600,
                    0,
                    0);
  LOBYTE(result) = a4[144]; /*0x7365bb*/
  if ( (unsigned char)result ) /*0x7365c3*/
  {
    if ( (*(int (**)(unsigned char *))(*(unsigned int *)a4 + 388))(a4) != 10 ) /*0x7365d6*/
      a4[1746] = 0; /*0x7365d8*/
    UpdateTechnoFiring((TechnoClass *)a4); /*0x7365e1*/
    UnitClass::UpdateRotation_TurretFacing_EMP((UnitClass *)a4); /*0x7365e8*/
    if ( (*(int (**)(unsigned char *))(*(unsigned int *)a4 + 388))(a4) == 5 /*0x73662d*/
      && (v32 = *((unsigned int *)a4 + 39),
          eax7 = *((unsigned int *)a4 + 40),
          v27 = &v32,
          v33 = eax7,
          vars0 = *((unsigned int *)a4 + 41),
          !(unsigned __int8)Tactical::IsCellVisible((Tactical *)&dword_87F7E8, &v32))
      && a4[981] )
    {
      v8 = (unsigned __int8 *)*((unsigned int *)a4 + 373); /*0x736637*/
      if ( v8 ) /*0x73663f*/
        v8[130] = 1; /*0x736641*/
      (*(void (**)(unsigned char *))(*(unsigned int *)a4 + 928))(a4); /*0x73664c*/
      return (*(int (**)(unsigned char *))(*(unsigned int *)a4 + 248))(a4); /*0x736656*/
    }
    else
    {
      v10 = *((unsigned int *)a4 + 433); /*0x736664*/
      if ( *(unsigned char *)(v10 + 3608) || *(unsigned char *)(v10 + 3609) ) /*0x736674*/
        UpdateInfantryIdleWander((TechnoClass *)a4); /*0x736680*/
      (*(void (**)(unsigned char *))(*(unsigned int *)a4 + 1060))(a4); /*0x736689*/
      if ( *(int *)(*((unsigned int *)a4 + 433) + 1504) > 0 /*0x7366ce*/
        && !(unsigned __int8)Flag::CheckNone((Flag *)(a4 + 848))
        && (*(int (**)(unsigned char *))(*(unsigned int *)a4 + 388))(a4) != 16
        && (*(int (**)(unsigned char *, int))(*(unsigned int *)a4 + 628))(a4, 17) != 1 )
      {
        Timer::StartDouble((Timer *)(a4 + 848), *(double *)(*((unsigned int *)a4 + 433) + 968)); /*0x7366e6*/
      }
      if ( (*(unsigned __int8 (**)(unsigned char *))(*(unsigned int *)a4 + 512))(a4) ) /*0x7366ef*/
        (*(void (**)(unsigned char *))(*(unsigned int *)a4 + 492))(a4); /*0x7366fd*/
      if ( *((unsigned int *)a4 + 136) == 2 && *((unsigned int *)a4 + 435) != -1 ) /*0x736713*/
        (*(void (**)(unsigned char *))(*(unsigned int *)a4 + 252))(a4); /*0x736719*/
      if ( (stru_A8E960.random[528] & 0xF) == 0 ) /*0x736726*/
      {
        v11 = *((unsigned int *)a4 + 43); /*0x73672c*/
        if ( (v11 == 11 || v11 == 5) /*0x73675a*/
          && !(unsigned __int8)House::IsCurrentPlayer(*((House **)a4 + 135))
          && *((unsigned int *)a4 + 45) == -1 )
        {
          v12 = *((unsigned int *)a4 + 433); /*0x736760*/
          if ( *((unsigned int *)a4 + 27) < *(unsigned int *)(v12 + 160) /*0x73679a*/
            && (!*((unsigned int *)a4 + 134) || *((unsigned int *)a4 + 43) == 11)
            && !*(unsigned char *)(v12 + 3598)
            && !*(unsigned char *)(v12 + 3599) )
          {
            v13 = globalHelper_055DD0(*((unsigned int **)a4 + 135), a4, v6); /*0x7367b1*/
            if ( v13 ) /*0x7367b5*/
            {
              if ( !*((unsigned int *)a4 + 134) ) /*0x7367b7*/
              {
                v31 = *((unsigned int *)a4 + 39); /*0x7367cd*/
                v14 = *((unsigned int *)a4 + 40); /*0x7367d5*/
                v26[1] = &v31; /*0x7367d8*/
                v32 = v14; /*0x7367d9*/
                v33 = *((unsigned int *)a4 + 41); /*0x7367e5*/
                v15 = Coord::To_Cell((Coord *)&dword_87F7E8, &v31); /*0x7367e9*/
                TechnoClass::SetFocus((TechnoClass *)a4, (int)v15); /*0x7367f1*/
              }
              (*(void (**)(unsigned char *, int, unsigned int))(*(unsigned int *)a4 + 488))(a4, 7, 0); /*0x7367fe*/
              (*(void (**)(unsigned char *, unsigned int))(*(unsigned int *)a4 + 968))(a4, 0); /*0x73680a*/
              (*(void (**)(unsigned char *, unsigned int *, int))(*(unsigned int *)a4 + 1152))(a4, v13, 1); /*0x736817*/
            }
          }
        }
      }
      result = *((unsigned int *)a4 + 433); /*0x73681d*/
      if ( result->u8_E0E ) /*0x736823*/
      {
        result = House::IsCurrentPlayer(*((House **)a4 + 135)); /*0x736837*/
        if ( !(unsigned char)result && *(unsigned int *)&stru_A8E960.random[528] - *((unsigned int *)a4 + 48) > 300 ) /*0x736858*/
        {
          if ( !*((unsigned int *)a4 + 413) ) /*0x73685e*/
            sub_7DC720(-2147467261); /*0x73686d*/
          result = (*(int (__cdecl **)(unsigned int))(**((unsigned int **)a4 + 413) + 16))(*((unsigned int *)a4 + 413)); /*0x73687b*/
          if ( !(unsigned char)result ) /*0x736880*/
          {
            v29[0] = *((unsigned int *)a4 + 39); /*0x736890*/
            v29[1] = *((unsigned int *)a4 + 40); /*0x7368a1*/
            v29[2] = *((unsigned int *)a4 + 41); /*0x7368a8*/
            v16 = Coord::To_Cell((Coord *)&dword_87F7E8, v29); /*0x7368ac*/
            result = (int)Cell::IsBridge((Cell *)v16); /*0x7368b3*/
            if ( result ) /*0x7368ba*/
            {
              if ( *(unsigned char *)(result->u32_520 + 5819) ) /*0x7368c6*/
              {
                v17 = (unsigned short *)(*(int (**)(int, unsigned int *))(*(unsigned int *)result + 440))(result, v26); /*0x7368dd*/
                v18 = *v17 + 3; /*0x7368f0*/
                v19 = v17[1] + 1; /*0x7368f7*/
                result = (*(int (**)(unsigned char *, unsigned int *))(*(unsigned int *)a4 + 440))(a4, v26); /*0x7368f9*/
                if ( *(unsigned short *)result == v18 && result->u16_2 == v19 ) /*0x736908*/
                {
                  v28[0] = vars0; /*0x736913*/
                  v28[1] = retaddr; /*0x73691b*/
                  v29[0] = this; /*0x736925*/
                  v20 = Coord::To_Cell((Coord *)&dword_87F7E8, v28); /*0x736929*/
                  v21 = Cell::IsBridge((Cell *)v20); /*0x736937*/
                  if ( (unsigned __int8)Team::AllMembersValid((Team *)a4) ) /*0x736939*/
                    (*(void (**)(unsigned char *, int))(*(unsigned int *)a4 + 628))(a4, 3); /*0x736948*/
                  v22 = *(unsigned int *)a4; /*0x73694e*/
                  PlacementCellsAlt = (__int16 *)MapClass::FindPlacementCellsAlt(a4, &v25, (int)v21); /*0x73695a*/
                  v24 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, PlacementCellsAlt); /*0x736965*/
                  (*(void (**)(unsigned char *, void *))(v22 + 1152))(a4, v24); /*0x73696d*/
                  return (*(int (**)(unsigned char *, int, int))(*(unsigned int *)a4 + 488))(a4, 2, 1); /*0x73697b*/
                }
              }
            }
          }
        }
      }
    }
  }
  return result; /*0x736663*/

}
// 0x51dbd0
void* InfantryClass::CalcFacingToTarget()
{

  double v2; // st7
  int ptr_0; // edx
  int v5; // ebx
  __int16 v6; // ax
  int v7; // ebx
  unsigned __int16 *v8; // eax
  double v9; // st7
  unsigned __int16 *v10; // eax
  CellClass *v11; // eax
  int *v12; // eax
  int v13; // ebx
  CellClass *v14; // eax
  int v15; // ebx
  __int16 v16; // ax
  int v17; // ebx
  unsigned __int16 *v18; // eax
  unsigned __int16 *v19; // eax
  CellClass *v20; // eax
  int *v21; // eax
  int v22; // edx
  char v24; // [esp+24h] [ebp-58h]
  char v25; // [esp+24h] [ebp-58h]
  unsigned __int16 *v26; // [esp+3Ch] [ebp-40h]
  unsigned __int16 *v27; // [esp+3Ch] [ebp-40h]
  double v28; // [esp+44h] [ebp-38h]
  double v29; // [esp+44h] [ebp-38h]
  unsigned int v30[2]; // [esp+4Ch] [ebp-30h] BYREF
  int v31; // [esp+54h] [ebp-28h]
  unsigned __int16 *v32; // [esp+58h] [ebp-24h] BYREF
  int v33; // [esp+5Ch] [ebp-20h]
  int v34; // [esp+60h] [ebp-1Ch]
  int v35[3]; // [esp+64h] [ebp-18h] BYREF
  int v36[3]; // [esp+70h] [ebp-Ch] BYREF

  v30[0] = *a2; /*0x51dbe5*/
  v30[1] = a2[1]; /*0x51dbee*/
  ptr_0 = this->ptr_0; /*0x51dbf2*/
  v31 = a2[2]; /*0x51dbf7*/
  v5 = (*(int (**)(InfantryClass *, int *))(ptr_0 + 72))(this, v35); /*0x51dc03*/
  Int64::Equal((Int64 *)v5, a2); /*0x51dc08*/
  Math::CalcAngle((double)v5->u32_4 - (double)a2[1], (double)*a2 - (double)*(int *)v5); /*0x51dc24*/
  v6 = Math::RoundToInt(v2); /*0x51dc35*/
  v7 = a2[2]; /*0x51dc43*/
  v28 = (double)((__int16)(v6 + 0x7FFF) - 0x3FFF) * -0.00009587672516830327; /*0x51dc63*/
  Math::SinCos(v28); /*0x51dc78*/
  LOWORD(v8) = Math::RoundToInt(v2); /*0x51dc87*/
  v26 = v8; /*0x51dc90*/
  Math::ArcTan2(v28); /*0x51dc9a*/
  v9 = v2 * 124.0 + (double)*a2; /*0x51dca8*/
  LOWORD(v10) = Math::RoundToInt(v9); /*0x51dcaa*/
  v33 = (int)v26; /*0x51dcb5*/
  v32 = v10; /*0x51dcbf*/
  v34 = v7; /*0x51dcc3*/
  v24 = BYTE1(Coord::To_Cell((Coord *)&dword_87F7E8, a2)->flags) & 1; /*0x51dcdc*/
  v11 = Coord::To_Cell((Coord *)&dword_87F7E8, a2); /*0x51dceb*/
  v12 = ObjectPlacement::CalcPosition((ObjectPlacement *)v11, v36, &v32, 0, v24, 0); /*0x51dcf2*/
  *a2 = *v12; /*0x51dcfb*/
  a2[1] = v12->ptr_4; /*0x51dd00*/
  a2[2] = v12->ptr_8; /*0x51dd06*/
  if ( *a2 == *(unsigned int *)&stru_A8E960.waypoints[622] /*0x51dd32*/
    && a2[1] == *(unsigned int *)&stru_A8E960.waypoints[626]
    && a2[2] == *(unsigned int *)&stru_A8E960.waypoints[630] )
  {
    v13 = this->ptr_0; /*0x51dd38*/
    v14 = Coord::To_Cell((Coord *)&dword_87F7E8, v30); /*0x51dd4c*/
    if ( !(*(int (**)(InfantryClass *, CellClass *, int, int, unsigned int, int))(v13 + 428))( /*0x51dd54*/
            this,
            v14,
            -1,
            -1,
            0,
            1) )
    {
      v15 = (*(int (**)(InfantryClass *, int *))&this->ptr_0->q048)(this, v36); /*0x51dd6e*/
      Int64::Equal((Int64 *)v15, a2); /*0x51dd73*/
      Math::CalcAngle((double)v15->u32_4 - (double)a2[1], (double)*a2 - (double)*(int *)v15); /*0x51dd8f*/
      v16 = Math::RoundToInt(v9); /*0x51dda0*/
      v17 = v31; /*0x51ddae*/
      v29 = (double)((__int16)(v16 + 0x7FFF) - 0x3FFF) * -0.00009587672516830327; /*0x51ddcf*/
      Math::SinCos(v29); /*0x51dde5*/
      LOWORD(v18) = Math::RoundToInt(v9); /*0x51ddf4*/
      v27 = v18; /*0x51ddfd*/
      Math::ArcTan2(v29); /*0x51de07*/
      LOWORD(v19) = Math::RoundToInt(v9 * 128.0 + (double)v30[0]); /*0x51de19*/
      v33 = (int)v27; /*0x51de26*/
      v32 = v19; /*0x51de32*/
      v34 = v17; /*0x51de36*/
      v25 = BYTE1(Coord::To_Cell((Coord *)&dword_87F7E8, v30)->flags) & 1; /*0x51de52*/
      v20 = Coord::To_Cell((Coord *)&dword_87F7E8, v30); /*0x51de61*/
      v21 = ObjectPlacement::CalcPosition((ObjectPlacement *)v20, v35, &v32, 1, v25, 0); /*0x51de68*/
      *a2 = *v21; /*0x51de71*/
      a2[1] = v21->ptr_4; /*0x51de76*/
      a2[2] = v21->ptr_8; /*0x51de7c*/
    }
  }
  if ( *a2 == *(unsigned int *)&stru_A8E960.waypoints[622] /*0x51deb0*/
    && a2[1] == *(unsigned int *)&stru_A8E960.waypoints[626]
    && a2[2] == *(unsigned int *)&stru_A8E960.waypoints[630]
    || !FootClass::Destru_vt319((FootClass *)this, a2)
    || !this->isAliveFlag[0] )
  {
    return 0; /*0x51deff*/
  }
  v32 = (unsigned __int16 *)this->location[0]; /*0x51dec6*/
  v22 = this->ptr_0; /*0x51deca*/
  v33 = this->location[1]; /*0x51decf*/
  v34 = this->location[2]; /*0x51dedb*/
  (*(void (**)(InfantryClass *, unsigned __int16 **))(v22 + 244))(this, &v32); /*0x51dee1*/
  (*(void (**)(InfantryClass *, int *))&this->ptr_0->flashing)(this, a2); /*0x51deec*/
  return 1; /*0x51def4*/

}
// 0x51bf90
int InfantryClass::EvaluateTarget()
{

  __int64 v7; // rax
  int v8; // edx
  bool v9; // al
  unsigned int *Type; // eax
  int result; // eax
  int v12; // eax
  InfantryClass *NeighbourContent; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  bool v17; // al
  int v18; // eax
  int v19; // ebx
  int v20; // esi
  InfantryClass **v21; // eax
  int v22; // edi
  InfantryClass *v23; // esi
  int parasiteImUsing; // eax
  int v25; // ecx
  unsigned short *v26; // edi
  unsigned short *v27; // eax
  int slaveOwner; // eax
  BuildingClass *v29; // ecx
  InfantryClass *v30; // eax
  InfantryClass *v31; // edi
  unsigned int *v32; // eax
  int focus; // ecx
  unsigned char *planningPathIdx; // eax
  int v35; // ecx
  unsigned int *v36; // eax
  int v37; // edi
  char v38; // al
  bool v39; // zf
  bool v40; // [esp+29h] [ebp-23h] BYREF
  bool v41; // [esp+2Ah] [ebp-22h]
  char v42; // [esp+2Bh] [ebp-21h]
  int v43; // [esp+2Ch] [ebp-20h]
  int v44; // [esp+30h] [ebp-1Ch] BYREF
  unsigned int v45[3]; // [esp+34h] [ebp-18h] BYREF
  unsigned char v46[12]; // [esp+40h] [ebp-Ch] BYREF
  int v47; // [esp+54h] [ebp+8h]

  v40 = (*(unsigned int *)(a2 + 320) & 0x100) != 0 /*0x51bfc6*/
     && (a4 == -1 || (v7 = a4 - *(char *)(a2 + 283), (int)(((((v7) >> 32) & 0xFFFFFFFFu) ^ v7) - (((v7) >> 32) & 0xFFFFFFFFu)) > 1));
  v8 = *(unsigned int *)(a2 + 84); /*0x51bfd8*/
  v42 = *(unsigned char *)(a2 + 292); /*0x51bfdb*/
  v9 = (*(unsigned int *)(a2 + 292) & 0x20) != 0; /*0x51bfe8*/
  v43 = v8; /*0x51bfea*/
  v41 = v9; /*0x51bfee*/
  Type = (unsigned int *)InfantryClass::GetType((InfantryClass *)a2); /*0x51bff2*/
  if ( a3 == 8 ) /*0x51c000*/
  {
    if ( Type && ((Type->owningHouseIndex & 0xFFFFu) << 16 | (HIWORD(Type->objectTypeFlags) & 0xFFFFu)) != ((Type->objectTypeFlags & 0xFFFFu) << 16 | (HIWORD(Type->owningHouseIndex) & 0xFFFFu)) ) /*0x51c01b*/
      return 0; /*0x51c036*/
    return 7; /*0x51c01b*/
  }
  if ( Type ) /*0x51c03b*/
  {
    v12 = abs32(a3 - Type->fallRate); /*0x51c047*/
    if ( v12 > 2 && v12 < 6 && a3 != -1 ) /*0x51c056*/
      return 7; /*0x51c064*/
  }
  NeighbourContent = (InfantryClass *)Cell::GetNeighbourContent((Cell *)a2, ((unsigned char)a3 - 4) & 7); /*0x51c072*/
  v14 = InfantryClass::GetType(NeighbourContent); /*0x51c07e*/
  if ( v14 ) /*0x51c082*/
  {
    v15 = abs32((((unsigned char)a3 - 4) & 7) - v14->fallRate); /*0x51c08e*/
    if ( v15 > 2 && v15 < 6 && a3 != -1 ) /*0x51c09d*/
      return 7; /*0x51c0ab*/
  }
  if ( a4 - *(char *)(a2 + 283) > 4 ) /*0x51c0c2*/
    return 0; /*0x51c0cd*/
  result = this->vt_slot_248( /*0x51c0e6*/
             this,
             a2,
             a3,
             &a4,
             &v40,
             a5);
  if ( result != 7 )
  {
    if ( a4 != -1 && (*(unsigned int *)(a2 + 320) & 0x100) != 0 && a4 == *(char *)(a2 + 283) + 4 ) /*0x51c118*/
    {
      v16 = *(unsigned int *)(a2 + 88); /*0x51c120*/
      v42 = *(unsigned char *)(a2 + 296); /*0x51c123*/
      v17 = (*(unsigned int *)(a2 + 296) & 0x20) != 0; /*0x51c130*/
      v43 = v16; /*0x51c132*/
      v41 = v17; /*0x51c136*/
    }
    if ( this->isInPlayfield[0] /*0x51c163*/
      && !dword_A8E7AC
      && !(unsigned __int8)Type::CheckAmbiguity((Type *)&dword_87F7E8, a2, 1)
      && !(*(unsigned __int8 (**)(InfantryClass *))&this->ptr_0->isOnCarryall)(this) )
    {
      return 7; /*0x51c179*/
    }
    v18 = *(unsigned int *)(a2 + 68); /*0x51c17c*/
    v19 = 0; /*0x51c17f*/
    if ( v18 != -1 ) /*0x51c184*/
    {
      v20 = *(unsigned int *)(*(int *)((char *)&stru_A83CD9.lineTrailer + 3) + 4 * v18); /*0x51c190*/
      if ( *(unsigned char *)(v20 + 682) && !(unsigned __int8)House::IsCurrentPlayer((House *)this->owner) ) /*0x51c1a3*/
        return 7; /*0x51c1b8*/
      if ( *(unsigned char *)(v20 + 680) && *(unsigned __int8 *)(a2 + 286) >> 4 != *(unsigned int *)(v20 + 672) ) /*0x51c1dc*/
      {
        if ( !this->vt_slot_684(this) ) /*0x51c1e3*/
          return 7; /*0x51c1e3*/
        v21 = (InfantryClass **)this->vt_slot_1016(this, 0); /*0x51c1f8*/
        if ( !InfantryClass::startPanic(*v21) ) /*0x51c200*/
          return 7; /*0x51c207*/
        v19 = 5 - ((unsigned __int8)HouseClass::IsAllied((HouseClass *)this->owner, *(unsigned int *)(a2 + 80)) != 0); /*0x51c223*/
      }
    }
    v22 = 0; /*0x51c229*/
    v47 = 0; /*0x51c22d*/
    if ( v40 ) /*0x51c231*/
      v23 = *(InfantryClass **)(a2 + 232); /*0x51c237*/
    else
      v23 = *(InfantryClass **)(a2 + 228); /*0x51c243*/
    if ( v23 ) /*0x51c24b*/
    {
      while ( 1 ) /*0x51c251*/
      {
        if ( v23 != this ) /*0x51c253*/
        {
          parasiteImUsing = this->parasiteImUsing; /*0x51c259*/
          if ( parasiteImUsing ) /*0x51c261*/
          {
            v25 = *(unsigned int *)(parasiteImUsing + 40); /*0x51c263*/
            if ( v25 ) /*0x51c268*/
            {
              v26 = (unsigned short *)(*(int (**)(int, int *))(*(unsigned int *)v25 + 440))(v25, &a5); /*0x51c27b*/
              v27 = (unsigned short *)(*(int (**)(InfantryClass *, int *))(v23->ptr_0 + 440))(v23, &v44); /*0x51c282*/
              if ( *v27 == *v26 && v27[1] == v26[1] ) /*0x51c298*/
                return 0; /*0x51c298*/
            }
          }
          slaveOwner = this->slaveOwner; /*0x51c29e*/
          if ( slaveOwner /*0x51c2bc*/
            && (v29 = slaveOwner->slaveManager) != 0
            && v23 == (InfantryClass *)slaveOwner
            && BuildingClass::CheckBridge(v29, (int)this, (void *)a2) )
          {
            v41 = 0; /*0x51c2c5*/
          }
          else
          {
            if ( !(*(unsigned __int8 (**)(InfantryClass *))(v23->ptr_0 + 468))(v23) /*0x51c36f*/
              && (this->vt_slot_388(this) == 7
               || this->vt_slot_388(this) == 8
               || this->vt_slot_388(this) == 9
               || this->vt_slot_388(this) == 17
               && *(unsigned char *)&this->Type->C4_2
               || (this->vt_slot_388(this) == 11
                || this->vt_slot_388(this) == 25
                || this->vt_slot_388(this) == 5)
               && *(unsigned char *)&this->Type->Engineer_2) )
            {
              if ( v23 == (InfantryClass *)this->movementDestination /*0x51c3c8*/
                || (v45[0] = v23->location[0],
                    v45[1] = v23->location[1],
                    v45[2] = v23->location[2],
                    Coord::To_Cell((Coord *)&dword_87F7E8, v45) == (CellClass *)this->movementDestination)
                || v23 == (InfantryClass *)this->target )
              {
                if ( (*(unsigned __int8 (**)(InfantryClass *))(v23->ptr_0 + 352))(v23) ) /*0x51c71f*/
                  return 7; /*0x51c727*/
                if ( !this->isTether[0] /*0x51c76c*/
                  && !v40
                  && flt_89EA40[9 * *(unsigned int *)(a2 + 236) + *(unsigned int *)&this->Type->SpeedType] == 0.0 )
                {
                  return 7; /*0x51c77a*/
                }
                return 0; /*0x51c788*/
              }
              v30 = (InfantryClass *)Cell::IsBridge((Cell *)a2); /*0x51c3d2*/
              v31 = v30; /*0x51c3d7*/
              if ( v30 ) /*0x51c3db*/
              {
                if ( v23 != v30 ) /*0x51c3df*/
                {
                  if ( v30 == (InfantryClass *)this->movementDestination ) /*0x51c3e7*/
                    goto LABEL_134; /*0x51c3e7*/
                  v32 = (unsigned int *)(*(int (**)(InfantryClass *, unsigned char *))(v30->ptr_0 + 72))(v30, v46); /*0x51c3f6*/
                  if ( Coord::To_Cell((Coord *)&dword_87F7E8, v32) == (CellClass *)this->movementDestination /*0x51c416*/
                    || v31 == (InfantryClass *)this->target )
                  {
                    goto LABEL_134; /*0x51c416*/
                  }
                }
              }
            }
            if ( (*(int (**)(InfantryClass *))&this->ptr_0->targetingTimer_d)(this) == 11 ) /*0x51c42a*/
            {
              focus = this->focus; /*0x51c42c*/
              if ( (InfantryClass *)focus == v23 && (*(int (**)(int))(*(unsigned int *)focus + 44))(focus) == 1 ) /*0x51c43e*/
                return 7; /*0x51c43e*/
            }
            if ( *(unsigned char *)&this->Type->VehicleThief_2 /*0x51c47c*/
              && (*(unsigned __int8 (**)(InfantryClass *))(v23->ptr_0 + 128))(v23)
              && (InfantryClass *)this->movementDestination == v23
              && !*(unsigned char *)((*(int (**)(InfantryClass *))(v23->ptr_0 + 132))(v23) + 3220) )
            {
              return 0; /*0x51c47c*/
            }
            if ( (*(int (**)(InfantryClass *))(v23->ptr_0 + 44))(v23) != 6 ) /*0x51c48c*/
            {
LABEL_96:
              if ( (*(int (**)(InfantryClass *))&this->ptr_0->targetingTimer_d)(this) == 7 /*0x51c56b*/
                && v23 == (InfantryClass *)this->movementDestination
                && this->isTether[0] )
              {
                return 0; /*0x51c573*/
              }
              if ( (unsigned __int8)Object::IsAlliedWithObjectHouse((Object *)this->owner, (int)v23) || dword_A8E7AC ) /*0x51c594*/
              {
                switch ( (*(int (**)(InfantryClass *))(v23->ptr_0 + 44))(v23) ) /*0x51c669*/
                {
                  case 1: /*0x51c669*/
                    if ( !v23->locomotor ) /*0x51c670*/
                      sub_7DC720(-2147467261); /*0x51c67f*/
                    if ( (*(unsigned __int8 (**)(int))(*(unsigned int *)v23->locomotor + 16))(v23->locomotor) /*0x51c694*/
                      || v23->movementDestination )
                    {
                      if ( v23->frozenStill[0] ) /*0x51c6aa*/
                        goto LABEL_128; /*0x51c6aa*/
                      if ( !v23->locomotor ) /*0x51c6b4*/
                        sub_7DC720(-2147467261); /*0x51c6c3*/
                      if ( (*(unsigned __int8 (**)(int))(*(unsigned int *)v23->locomotor + 164))(v23->locomotor) ) /*0x51c6d1*/
                      {
LABEL_128:
                        if ( v19 < 2 ) /*0x51c6de*/
                          v19 = 2; /*0x51c6e0*/
                      }
                    }
                    else if ( v19 < 6 ) /*0x51c6a1*/
                    {
                      v19 = 6; /*0x51c6a3*/
                    }
                    goto LABEL_134; /*0x51c6a8*/
                  case 2: /*0x51c669*/
                  case 6: /*0x51c669*/
                    return 7;
                  case 15: /*0x51c669*/
                    if ( !v23->locomotor ) /*0x51c6e7*/
                      sub_7DC720(-2147467261); /*0x51c6f6*/
                    if ( !(*(unsigned __int8 (**)(int))(*(unsigned int *)v23->locomotor + 16))(v23->locomotor) ) /*0x51c704*/
                      ++v47; /*0x51c70b*/
                    goto LABEL_134; /*0x51c70b*/
                  default:
                    goto LABEL_134;
                }
              }
              v36 = AbstractClass::IsTechnoType((AbstractClass *)v23); /*0x51c59c*/
              if ( v36 && v36[136] == 2 ) /*0x51c5ac*/
              {
                if ( v19 < 1 ) /*0x51c5b1*/
                  v19 = 1; /*0x51c5b7*/
              }
              else
              {
                v37 = (*(int (**)(InfantryClass *))(v23->ptr_0 + 44))(v23); /*0x51c5cc*/
                if ( TechnoClass::GetValue((TechnoClass *)this, -1) <= 0 && v37 != 36 ) /*0x51c5da*/
                  return 7; /*0x51c5da*/
                if ( v37 == 6 ) /*0x51c5e3*/
                {
                  if ( *(unsigned char *)(v23->planningPathIdx + 5814) ) /*0x51c62f*/
                    return 7; /*0x51c637*/
                  if ( v19 < 5 ) /*0x51c640*/
                    v19 = 5; /*0x51c646*/
                }
                else if ( v37 == 15 ) /*0x51c5e8*/
                {
                  if ( (*(unsigned __int8 (**)(InfantryClass *, int))(v23->ptr_0 + 200))(v23, this->owner) ) /*0x51c611*/
                    v19 = 6; /*0x51c61f*/
                }
                else if ( v37 != 36 && v19 < 5 ) /*0x51c5f6*/
                {
                  v19 = 5; /*0x51c5fc*/
                }
              }
              goto LABEL_134; /*0x51c5bc*/
            }
            planningPathIdx = (unsigned char *)v23->planningPathIdx; /*0x51c492*/
            if ( !planningPathIdx[5889] ) /*0x51c498*/
            {
              if ( !planningPathIdx[5823] || (v35 = v23->pathDirections[14], v35 != 12) && v35 != 8 ) /*0x51c4c2*/
              {
                if ( planningPathIdx[5824] ) /*0x51c4c8*/
                {
                  if ( *(unsigned char *)(v23->owner + 506) ) /*0x51c4d8*/
                    return 7; /*0x51c4e0*/
                }
                else
                {
                  if ( !planningPathIdx[5815] ) /*0x51c4f3*/
                    goto LABEL_96; /*0x51c4f3*/
                  if ( !(unsigned __int8)BuildingClass::IsPoweredOn((BuildingClass *)v23) ) /*0x51c4f7*/
                  {
                    if ( (unsigned __int8)HouseClass::IsAlliedWith((HouseClass *)v23->owner) ) /*0x51c511*/
                    {
                      if ( v19 < 3 ) /*0x51c51d*/
                        v19 = 3; /*0x51c523*/
                    }
                    else
                    {
                      if ( !(*(unsigned __int8 (**)(InfantryClass *))&this->ptr_0->unloadTimer)(this) ) /*0x51c53a*/
                        return 7; /*0x51c53a*/
                      if ( v19 < 5 ) /*0x51c543*/
                        v19 = 5; /*0x51c549*/
                    }
                  }
                }
              }
            }
          }
        }
LABEL_134:
        v23 = (InfantryClass *)v23->nextObject; /*0x51c70f*/
        if ( !v23 ) /*0x51c714*/
        {
          v22 = v47; /*0x51c78b*/
          break; /*0x51c78b*/
        }
      }
    }
    if ( !this->isTether[0] && !v40 && flt_89EA40[9 * *(unsigned int *)(a2 + 236) + *(unsigned int *)&this->Type->SpeedType] == 0.0 ) /*0x51c7ce*/
      return 7; /*0x51c7dc*/
    if ( !v19 && v41 ) /*0x51c7e9*/
      return 2; /*0x51c7f7*/
    if ( v43 != -1 )
    {
      if ( (unsigned __int8)HouseClass::IsAllied((HouseClass *)this->owner, v43) )
      {
        v38 = v42; /*0x51c813*/
        if ( (v42 & 0x1C) == 0x1C && v19 < 2 )
          return v22 != 3 ? 2 : 6;
        goto LABEL_159; /*0x51c824*/
      }
      if ( TechnoClass::GetValue((TechnoClass *)this, -1) <= 0 ) /*0x51c84c*/
        return 7; /*0x51c84c*/
      if ( v19 < 5 ) /*0x51c851*/
        return 5; /*0x51c861*/
    }
    v38 = v42; /*0x51c864*/
LABEL_159:
    if ( v19 ) /*0x51c86a*/
      return v19; /*0x51c86a*/
    v39 = (v38 & 0x1C) == 28; /*0x51c86e*/
    result = 7; /*0x51c870*/
    if ( !v39 ) /*0x51c875*/
      return v19; /*0x51c877*/
  }
  return result; /*0x51c02d*/

}
// 0x6b0880
            && BuildingClass::CheckBridge(slaveManager, (int)this, (void *)a2) )
            {
              int occupant; // ecx
              int v5; // ebx
              int v6; // esi
              int16_t FoundationWidth; // ax
              int *v8; // ecx
              int FoundationHeight; // eax
              int v10; // ecx
              CellStruct *v11; // eax
              int v12; // eax
              int v13; // ecx
              Cell *v14; // eax
              bool v15; // zf
              int v16; // eax
              int v18; // eax
              unsigned int **i; // ecx
              int16_t v20[2]; // [esp+8h] [ebp-18h] BYREF
              int16_t v21[2]; // [esp+Ch] [ebp-14h] BYREF
              int v22; // [esp+10h] [ebp-10h] BYREF
              int16_t v23[2]; // [esp+14h] [ebp-Ch] BYREF
              int v24; // [esp+18h] [ebp-8h] BYREF
              int v25; // [esp+1Ch] [ebp-4h] BYREF

              occupant = slaveManager->occupant; /*0x6b0887*/
              if ( occupant && (*(int (__thiscall **)(int))(*(unsigned int *)occupant + 44))(occupant) == 6 )
              {
                v5 = slaveManager->occupant; /*0x6b0899*/
                if ( v5 )
                  v6 = (*(int (__thiscall **)(int))(*(unsigned int *)v5 + 44))(slaveManager->occupant) == 6 ? v5 : 0;
                else
                  v6 = 0; /*0x6b08a0*/
                FoundationWidth = BuildingTypeClass::GetFoundationWidth(*(BuildingTypeClass **)(v6 + 1312)); /*0x6b08be*/
                v8 = *(int **)(v6 + 1312); /*0x6b08c3*/
                v20[0] = FoundationWidth - 1; /*0x6b08cc*/
                FoundationHeight = BuildingTypeClass::GetFoundationHeight(v8, 0); /*0x6b08d1*/
                v10 = slaveManager->occupant; /*0x6b08d7*/
                v20[1] = FoundationHeight / 2; /*0x6b08de*/
                v11 = (CellStruct *)(*(int (__thiscall **)(int, int *))(*(unsigned int *)v10 + 440))(v10, &v24); /*0x6b08f4*/
                v12 = *CellStruct::Add(v11, &v22, v20); /*0x6b0901*/
              }
              else
              {
                v12 = *(unsigned int *)slaveManager->vt_slot_440(slaveManager->occupant, &v25); /*0x6b0916*/
              }
              v13 = slaveManager->occupant; /*0x6b0918*/
              *(unsigned int *)v23 = v12; /*0x6b091b*/
              if ( !v13 /*0x6b0985*/
                || (*(int (__thiscall **)(int))(*(unsigned int *)v13 + 44))(v13) != 6
                || (*(unsigned int *)v20 = *BuildingClass::GetRallyPointCoord(slaveManager, &v25),
                    v22 = -65536,
                    *(unsigned int *)v20 = *CellStruct::Add((CellStruct *)v20, &v24, &v22),
                    v14 = (Cell *)CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, v20),
                    v15 = Cell::IsBridge(v14) == (unsigned int *)slaveManager->occupant,
                    v16 = *(unsigned int *)v20,
                    !v15) )
              {
                v16 = dword_B0B5B8; /*0x6b0987*/
              }
              *(unsigned int *)v21 = v16; /*0x6b098c*/
              if ( a2 != CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, v23) /*0x6b09d4*/
                && (*(unsigned int *)v21 == dword_B0B5B8 || a2 != CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, v21)) )
              {
                return 0; /*0x6b09d7*/
              }
              v18 = slaveManager->ambientSoundController[3] - 1; /*0x6b09e3*/
              if ( v18 < 0 ) /*0x6b09e4*/
                return 0; /*0x6b09e4*/
              for ( i = (unsigned int **)(slaveManager->ambientSoundController[0] + 4 * v18); **i != this; --i ) /*0x6b09ed*/
              {
                if ( --v18 < 0 ) /*0x6b09fc*/
                  return 0; /*0x6b0a05*/
              }
              return *i != 0; /*0x6b0a17*/
            }
          else
          {
            if ( !(*(uint8_t (**)(int))(*(unsigned int *)v23 + 468))(v23) /*0x51c36f*/
              && ((*((int (**)(InfantryClass *))this->ptr_0 + 97))(this) == 7
               || (*((int (**)(InfantryClass *))this->ptr_0 + 97))(this) == 8
               || (*((int (**)(InfantryClass *))this->ptr_0 + 97))(this) == 9
               || (*((int (**)(InfantryClass *))this->ptr_0 + 97))(this) == 17 && this->Type->C4
               || ((*((int (**)(InfantryClass *))this->ptr_0 + 97))(this) == 11
                || (*((int (**)(InfantryClass *))this->ptr_0 + 97))(this) == 25
                || (*((int (**)(InfantryClass *))this->ptr_0 + 97))(this) == 5)
               && this->Type->Engineer) )
            {
              if ( (AbstractClass *)v23 == ((unsigned int *)this)[0] /*0x51c3c8*/
                || (v45[0] = *(unsigned int *)(v23 + 156),
                    v45[1] = *(unsigned int *)(v23 + 160),
                    v45[2] = *(unsigned int *)(v23 + 164),
                    Coord::To_Cell((Coord *)&DataGlobal_87F7E8, v45) == (CellClass *)this->__pad_000)
                || (AbstractClass *)v23 == this->__pad_000 )
              {
                if ( (*(uint8_t (**)(int))(*(unsigned int *)v23 + 352))(v23) ) /*0x51c71f*/
                  return 7; /*0x51c727*/
                if ( !this->__pad_000 && !v40 && flt_89EA40[9 * *(unsigned int *)(a2 + 236) + ((unsigned int *)this->Type)[0]] == 0.0 ) /*0x51c76c*/
                  return 7; /*0x51c77a*/
                return 0; /*0x51c788*/
              }
              v30 = (AbstractClass *)Cell::IsBridge((Cell *)a2); /*0x51c3d2*/
              v31 = v30; /*0x51c3d7*/
              if ( v30 ) /*0x51c3db*/
              {
                if ( (AbstractClass *)v23 != v30 ) /*0x51c3df*/
                {
                  if ( v30 == this->__pad_000 ) /*0x51c3e7*/
                    goto LABEL_134; /*0x51c3e7*/
                  v32 = (unsigned int *)(*((int (**)(AbstractClass *, unsigned char *))v30->ptr_0 + 18))(v30, v46); /*0x51c3f6*/
                  if ( Coord::To_Cell((Coord *)&DataGlobal_87F7E8, v32) == (CellClass *)this->__pad_000 /*0x51c416*/
                    || v31 == this->__pad_000 )
                  {
                    goto LABEL_134; /*0x51c416*/
                  }
                }
              }
            }
            if ( (*((int (**)(InfantryClass *))this->ptr_0 + 97))(this) == 11 ) /*0x51c42a*/
            {
              focus = this->ptr_0; /*0x51c42c*/
              if ( focus == (AbstractClass *)v23 /*0x51c43e*/
                && (*((int (**)(AbstractClass *))focus->ptr_0 + 11))(focus) == 1 )
              {
                return 7; /*0x51c43e*/
              }
            }
            if ( this->Type->VehicleThief /*0x51c47c*/
              && (*(uint8_t (**)(int))(*(unsigned int *)v23 + 128))(v23)
              && ((unsigned int *)this)[0] == (AbstractClass *)v23
              && !*(unsigned char *)((*(int (**)(int))(*(unsigned int *)v23 + 132))(v23) + 3220) )
            {
              return 0; /*0x51c47c*/
            }
            if ( (*(int (**)(int))(*(unsigned int *)v23 + 44))(v23) != 6 ) /*0x51c48c*/
            {
  LABEL_96:
              if ( (*((int (**)(InfantryClass *))this->ptr_0 + 97))(this) == 7 /*0x51c56b*/
                && (AbstractClass *)v23 == ((unsigned int *)this)[0]
                && ((unsigned int *)this)[0] )
              {
                return 0; /*0x51c573*/
              }
              if ( (uint8_t)((ObjectClass *)((unsigned int *)this)[0])->IsAlliedWithObjectHouse(v23) || dword_A8E7AC ) /*0x51c594*/
              {
                switch ( (*(int (**)(int))(*(unsigned int *)v23 + 44))(v23) ) /*0x51c669*/
                {
                  case 1: /*0x51c669*/
                    if ( !*(unsigned int *)(v23 + 1652) ) /*0x51c670*/
                      sub_7DC720(-2147467261); /*0x51c67f*/
                    if ( (*(uint8_t (**)(unsigned int))(**(unsigned int **)(v23 + 1652) + 16))(*(unsigned int *)(v23 + 1652)) /*0x51c694*/
                      || *(unsigned int *)(v23 + 1444) )
                    {
                      if ( *(unsigned char *)(v23 + 1718) ) /*0x51c6aa*/
                        goto LABEL_128; /*0x51c6aa*/
                      if ( !*(unsigned int *)(v23 + 1652) ) /*0x51c6b4*/
                        sub_7DC720(-2147467261); /*0x51c6c3*/
                      if ( (*(uint8_t (**)(unsigned int))(**(unsigned int **)(v23 + 1652) + 164))(*(unsigned int *)(v23 + 1652)) ) /*0x51c6d1*/
                      {
  LABEL_128:
                        if ( v19 < 2 ) /*0x51c6de*/
                          v19 = 2; /*0x51c6e0*/
                      }
                    }
                    else if ( v19 < 6 ) /*0x51c6a1*/
                    {
                      v19 = 6; /*0x51c6a3*/
                    }
                    goto LABEL_134; /*0x51c6a8*/
                  case 2: /*0x51c669*/
                  case 6: /*0x51c669*/
                    return 7;
                  case 15: /*0x51c669*/
                    if ( !*(unsigned int *)(v23 + 1652) ) /*0x51c6e7*/
                      sub_7DC720(-2147467261); /*0x51c6f6*/
                    if ( !(*(uint8_t (**)(unsigned int))(**(unsigned int **)(v23 + 1652) + 16))(*(unsigned int *)(v23 + 1652)) ) /*0x51c704*/
                      ++v47; /*0x51c70b*/
                    goto LABEL_134; /*0x51c70b*/
                  default:
                    goto LABEL_134;
                }
              }
              v36 = AbstractClass::IsTechnoType((AbstractClass *)v23); /*0x51c59c*/
              if ( v36 && v36[136] == 2 ) /*0x51c5ac*/
              {
                if ( v19 < 1 ) /*0x51c5b1*/
                  v19 = 1; /*0x51c5b7*/
              }
              else
              {
                v37 = (*(int (**)(int))(*(unsigned int *)v23 + 44))(v23); /*0x51c5cc*/
                if ( TechnoClass::GetValue((TechnoClass *)this, -1) <= 0 && v37 != 36 ) /*0x51c5da*/
                  return 7; /*0x51c5da*/
                if ( v37 == 6 ) /*0x51c5e3*/
                {
                  if ( *(unsigned char *)(*(unsigned int *)(v23 + 1312) + 5814) ) /*0x51c62f*/
                    return 7; /*0x51c637*/
                  if ( v19 < 5 ) /*0x51c640*/
                    v19 = 5; /*0x51c646*/
                }
                else if ( v37 == 15 ) /*0x51c5e8*/
                {
                  if ( (*(uint8_t (**)(int, HouseClass *))(*(unsigned int *)v23 + 200))(v23, this->ptr_0) ) /*0x51c611*/
                    v19 = 6; /*0x51c61f*/
                }
                else if ( v37 != 36 && v19 < 5 ) /*0x51c5f6*/
                {
                  v19 = 5; /*0x51c5fc*/
                }
              }
              goto LABEL_134; /*0x51c5bc*/
            }
            v34 = *(unsigned char **)(v23 + 1312); /*0x51c492*/
            if ( !v34[5889] ) /*0x51c498*/
            {
              if ( !v34[5823] || (v35 = *(unsigned int *)(v23 + 1560), v35 != 12) && v35 != 8 ) /*0x51c4c2*/
              {
                if ( v34[5824] ) /*0x51c4c8*/
                {
                  if ( *(unsigned char *)(*(unsigned int *)(v23 + 540) + 506) ) /*0x51c4d8*/
                    return 7; /*0x51c4e0*/
                }
                else
                {
                  if ( !v34[5815] ) /*0x51c4f3*/
                    goto LABEL_96; /*0x51c4f3*/
                  if ( !(uint8_t)BuildingClass::IsPoweredOn((BuildingClass *)v23) ) /*0x51c4f7*/
                  {
                    if ( (uint8_t)HouseClass::IsAlliedWith(*(void **)(v23 + 540), (void *)this->ptr_0) ) /*0x51c511*/
                    {
                      if ( v19 < 3 ) /*0x51c51d*/
                        v19 = 3; /*0x51c523*/
                    }
                    else
                    {
                      if ( !(*((uint8_t (**)(InfantryClass *))this->ptr_0 + 171))(this) ) /*0x51c53a*/
                        return 7; /*0x51c53a*/
                      if ( v19 < 5 ) /*0x51c543*/
                        v19 = 5; /*0x51c549*/
                    }
                  }
                }
              }
            }
          }
        }
  LABEL_134:
        v23 = *(unsigned int *)(v23 + 48); /*0x51c70f*/
        if ( !v23 ) /*0x51c714*/
        {
          v22 = v47; /*0x51c78b*/
          break; /*0x51c78b*/
        }
      }
    }
    if ( !((unsigned int *)this)[0] && !v40 && flt_89EA40[9 * *(unsigned int *)(a2 + 236) + ((unsigned int *)this->Type)[0]] == 0.0 ) /*0x51c7ce*/
      return 7; /*0x51c7dc*/
    if ( !v19 && v41 ) /*0x51c7e9*/
      return 2; /*0x51c7f7*/
    if ( v43 != -1 )
    {
      if ( (uint8_t)HouseClass::IsAllied(this->ptr_0, v43) )
      {
        v38 = v42; /*0x51c813*/
        if ( (v42 & 0x1C) == 0x1C && v19 < 2 )
          return v22 != 3 ? 2 : 6;
        goto LABEL_159; /*0x51c824*/
      }
      if ( TechnoClass::GetValue((TechnoClass *)this, -1) <= 0 ) /*0x51c84c*/
        return 7; /*0x51c84c*/
      if ( v19 < 5 ) /*0x51c851*/
        return 5; /*0x51c861*/
    }
    v38 = v42; /*0x51c864*/
  LABEL_159:
    if ( v19 ) /*0x51c86a*/
      return v19; /*0x51c86a*/
    v39 = (v38 & 0x1C) == 28; /*0x51c86e*/
    result = 7; /*0x51c870*/
    if ( !v39 ) /*0x51c875*/
      return v19; /*0x51c877*/
  return result; /*0x51c02d*/
// 0x51e140
BuildingTypeClass * * InfantryClass::SelectAutoTarget(unsigned int flags, int64_t a3)
{
  int v5; // esi
  int v6; // ecx
  unsigned int *v7; // edi
  unsigned int *v8; // eax
  int v9; // eax
  InfantryClass *v11; // edi
  unsigned char *v12; // ecx
  int v13; // eax
  char v14; // cl
  Building **v15; // eax
  Building **v16; // eax
  int v17; // [esp+1Ch] [ebp-20h]
  int v18; // [esp+20h] [ebp-1Ch]
  unsigned char v19[12]; // [esp+24h] [ebp-18h] BYREF
  unsigned int v20[3]; // [esp+30h] [ebp-Ch] BYREF

  v4 = v4; /*0x51e144*/
  if ( (uint8_t)House::IsCurrentPlayer(v4->owner) || !v4->Type->Engineer_2 ) /*0x51e160*/
  {
    v11 = this; /*0x51e218*/
  }
  else
  {
    v6 = *(unsigned int *)(v4->owner + 21728); /*0x51e174*/
    if ( v6 ) /*0x51e17c*/
    {
      v7 = (unsigned int *)(*(int (**)(int, unsigned char *, double))(*(unsigned int *)v6 + 72))(v6, v19, a2); /*0x51e18e*/
      v8 = (unsigned int *)(*(int (__thiscall **)(int, unsigned int *))(v4->turretChargeTimer)(v4, v20); /*0x51e197*/
      v17 = v8[1] - v7[1]; /*0x51e1b5*/
      v18 = v8[2] - v7[2]; /*0x51e1bf*/
      Math::Sqrt((double)(*v8 - *v7) * (double)(*v8 - *v7) + (double)v18 * (double)v18 + (double)v17 * (double)v17); /*0x51e1e4*/
      (*((unsigned short *)&(v9))) = Math::RoundToInt(a2); /*0x51e1ec*/
      if ( v9 < 3840 ) /*0x51e1f6*/
        return *(void **)(v4->owner + 21728); /*0x51e209*/
    }
    v11 = (InfantryClass *)((unsigned int)this | 0x200); /*0x51e210*/
  }
  if ( v4->Type->VehicleThief_2 ) /*0x51e222*/
  {
    v12 = v4->Archive; /*0x51e22c*/
    if ( v12 ) /*0x51e234*/
    {
      if ( (v12[20] & 1) != 0 /*0x51e278*/
        && (*(uint8_t (__thiscall **)(unsigned char *))(*(unsigned int *)v12 + 128))(v12)
        && !*(unsigned char *)(v4->Archive->Vt34Thunk() + 3220)
        && ObjectClass::DistanceTo((ObjectClass *)v4, v4->Archive) < 3840 )
      {
        return v4->Archive; /*0x51e285*/
      }
    }
  }
  if ( (*(uint8_t (__thiscall **)(int))(v4->unloadTimer)(v4) ) /*0x51e28c*/
    goto LABEL_21; /*0x51e294*/
  v13 = v4->Type; /*0x51e296*/
  v14 = v13->VehicleThief_2; /*0x51e2a4*/
  if ( !v13->Infiltrate_2 ) /*0x51e29c*/
  {
    if ( !v14 ) /*0x51e2ae*/
      return 0; /*0x51e2b7*/
    goto LABEL_20; /*0x51e2ae*/
  }
  if ( v14 ) /*0x51e2bc*/
  LABEL_20:
    v11 = (InfantryClass *)((unsigned int)v11 & 0xFFFFFF4B | 0x10); /*0x51e2be*/
  LABEL_21:
  if ( ((unsigned int)v11 & 0x1B978) == 0 ) /*0x51e2cd*/
  {
    if ( *(unsigned int *)(*(int (**)(int, unsigned int, double))(*(unsigned int *)v4 + 1016))(v4, 0, a2) ) /*0x51e2db*/
    {
      v15 = (Building **)v4->SelectVocOrSfx(0); /*0x51e2e6*/
      v11 = (InfantryClass *)(Building::GetRenderType(*v15) | (unsigned int)v11); /*0x51e2f3*/
    }
    if ( *(unsigned int *)v4->SelectVocOrSfx(1) ) /*0x51e301*/
    {
      v16 = (Building **)v4->SelectVocOrSfx(1); /*0x51e30c*/
      v11 = (InfantryClass *)(Building::GetRenderType(*v16) | (unsigned int)v11); /*0x51e319*/
    }
  }
  if ( (*(uint8_t (__thiscall **)(int))(v4->unloadTimer)(v4) /*0x51e33d*/
    && *(unsigned char *)(*(unsigned int *)(*(unsigned int *)v4->SelectVocOrSfx(0) + 172) + 329) )
  {
    v11 = (InfantryClass *)((unsigned int)v11 & 0xFFFFFF4B); /*0x51e347*/
  }
  if ( (v4->Type->C4_2 || (uint8_t)TechnoTypeClass::HasVoiceResponse((int *)v4, 14)) /*0x51e370*/
    && !(uint8_t)House::IsCurrentPlayer(v4->owner) )
  {
    v11 = (InfantryClass *)((unsigned int)v11 | 0x20); /*0x51e379*/
  }
  if ( v4->Type->Thief_2 ) /*0x51e382*/
    v11 = (InfantryClass *)((unsigned int)v11 | 0x240); /*0x51e38c*/
  return FootClass::SelectAutoTarget_Cloaked((FootClass *)v4, (int)v11, flags, a3); /*0x51e1fe*/
}
// 0x5f6360
        && ObjectClass::DistanceTo((void *)this, this->Archive) < 3840 )
        {
          double v2; // st7
          unsigned int *v6; // eax
          int v7; // eax
          int v8; // ebx
          int v9; // eax
          int v10; // esi
          int FoundationHeight; // edi
          int v12; // [esp+20h] [ebp-20h]
          int v13; // [esp+24h] [ebp-1Ch]
          unsigned char v14[12]; // [esp+28h] [ebp-18h] BYREF
          unsigned char v15[12]; // [esp+34h] [ebp-Ch] BYREF

          if ( !Archive ) /*0x5f636d*/
            return 0; /*0x5f6370*/
          v5 = (unsigned int *)(*(int (__thiscall **)(int, unsigned char *))(*(unsigned int *)Archive + 72))(Archive, v14); /*0x5f6388*/
          v6 = (unsigned int *)(*((int (__thiscall **)(ObjectClass *, unsigned char *))this->ptr_0 + 18))(this, v15); /*0x5f6391*/
          v12 = v6[1] - v5[1]; /*0x5f63ae*/
          v13 = v6[2] - v5[2]; /*0x5f63b2*/
          Math::Sqrt((double)(*v6 - *v5) * (double)(*v6 - *v5) + (double)v13 * (double)v13 + (double)v12 * (double)v12); /*0x5f63de*/
          (*((unsigned short *)&(v7))) = Math::RoundToInt(v2); /*0x5f63e6*/
          v8 = v7; /*0x5f63ef*/
          v9 = (*(int (__thiscall **)(int))(*(unsigned int *)Archive + 44))(Archive); /*0x5f63f1*/
          v10 = v9 == 6 ? Archive : 0;
          if ( v10 )
          {
            FoundationHeight = BuildingTypeClass::GetFoundationHeight(*(int **)(v9 == 6 ? Archive + 0x520 : 1312), 0);
            v8 += -64 * (BuildingTypeClass::GetFoundationWidth(*(BuildingTypeClass **)(v10 + 1312)) + FoundationHeight); /*0x5f6424*/
            if ( v8 < 0 ) /*0x5f6426*/
              return 0; /*0x5f6428*/
          }
          return v8; /*0x5f636f*/
        }
  if ( (*(uint8_t (**)(int))(*&this->isAliveFlag))(this) ) /*0x51e28c*/
    goto LABEL_21; /*0x51e294*/
  v11 = this->Type; /*0x51e296*/
  v12 = v11->qEC6; /*0x51e2a4*/
  if ( !v11->qEBE ) /*0x51e29c*/
  {
    if ( !v12 ) /*0x51e2ae*/
      return 0; /*0x51e2b7*/
    goto LABEL_20; /*0x51e2ae*/
  }
  if ( v12 ) /*0x51e2bc*/
  LABEL_20:
    v9 = v9 & 0xFFFFFF4B | 0x10; /*0x51e2be*/
  LABEL_21:
  if ( (v9 & 0x1B978) == 0 ) /*0x51e2cd*/
  {
    if ( *(unsigned int *)(*(int (**)(int, unsigned int))(*(unsigned int *)&this->q1946))(this, 0) ) /*0x51e2db*/
    {
      v13 = (unsigned int **)(*(int (**)(int, unsigned int))(*(unsigned int *)&this->q1946))(this, 0); /*0x51e2e6*/
      v14 = Building::GetRenderType(*v13); /*0x51e2ee*/
      v9 |= v14; /*0x51e2f3*/
    }
    if ( *(unsigned int *)(*(int (**)(int, int))(*(unsigned int *)&this->q1946))(this, 1) ) /*0x51e301*/
    {
      v15 = (unsigned int **)(*(int (**)(int, int))(*(unsigned int *)&this->q1946))(this, 1); /*0x51e30c*/
      v16 = Building::GetRenderType(*v15); /*0x51e314*/
      v9 |= v16; /*0x51e319*/
    }
  }
  if ( (*(uint8_t (**)(int))(*(unsigned int *)&this->radioQueue4))(this) /*0x51e33d*/
    && *(unsigned char *)(*(unsigned int *)(*(unsigned int *)(*(int (**)(int, unsigned int))(*(unsigned int *)&this->q1946))(this, 0) + 172)
                + 329) )
  {
    v9 &= 0xFFFFFF4B; /*0x51e347*/
  if ( (this->Type->qEC2 || TechnoTypeClass::HasVoiceResponse((float *)this, 14)) /*0x51e370*/
    && !(uint8_t)House::IsCurrentPlayer(*&this->__pad_D80) )
  {
    v9 |= 0x20u; /*0x51e379*/
  if ( this->Type->qEC5 ) /*0x51e382*/
    v9 |= 0x240u; /*0x51e38c*/
// 0x4d9920
  return FootClass::SelectAutoTarget_Cloaked(v9, a3, ((unsigned int)((uint64_t)(a3) >> 32))); /*0x51e1fe*/
  {
    int v5; // eax
    void *result; // eax

    v5 = a2; /*0x4d992b*/
    if ( this->unknownBool688 ) /*0x4d9923*/
      (*((unsigned char *)&(v5))) = a2 & 0xFC | 1; /*0x4d9933*/
    result = TechnoClass::SelectAutoTarget_Start_AU((TechnoClass *)this, a3, v5, a3, a4); /*0x4d9942*/
    if ( this->unknownBool688 ) /*0x4d9947*/
    {
      if ( !result ) /*0x4d9953*/
        this->unknownBool688 = 0; /*0x4d9955*/
    }
    return result; /*0x4d995b*/
  }
  }
  }
// 0x51aa40
int InfantryClass::AssignDestination_SyncLog(AbstractClass* dest, int sync_flag)
{
  House *v4; // eax
  int result; // eax
  AbstractClass *v6; // ebx
  unsigned int *v7; // eax
  int v8; // esi
  int (__thiscall **ptr_0)(AbstractClass *, int *); // edx
  unsigned int *v10; // eax
  FootClass *rockerLinkedUnit; // eax
  unsigned int *v12; // eax
  bool *v13; // eax
  InfantryTypeClass *Type; // eax
  Team *v15; // eax
  Team *v16; // esi
  TechnoClass *v17; // eax
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  int *v24; // eax
  unsigned int *v25; // eax
  int (__thiscall **v26)(InfantryClass *, int *, unsigned int); // edx
  unsigned int *v27; // eax
  bool v28; // al
  int v29; // ebx
  bool v30; // zf
  int v31; // eax
  int *locomotor; // esi
  int v33; // eax
  int *v34; // eax
  int InstanceCOM; // eax
  int v36; // eax
  int *v37; // eax
  int v38; // eax
  int *v39; // esi
  int v40; // eax
  int *v41; // eax
  int v42; // [esp+44h] [ebp-58h]
  bool CanDeployAtCell; // [esp+73h] [ebp-29h]
  ComPtr ppv; // [esp+74h] [ebp-28h] BYREF

  v4 = (House *)(*((int (__thiscall **)(InfantryClass *))this->ptr_0 + 15))(this); /*0x51aa4c*/
  if ( (uint8_t)House::IsCurrentPlayer(v4) ) /*0x51aa51*/
  {
    result = this->SequenceAnim[0]; /*0x51aa5a*/
    if ( result == 27 || result == 28 || result == 29 || result == 30 ) /*0x51aa7e*/
      return result; /*0x51aa7e*/
  }
  v6 = (AbstractClass *)dest; /*0x51aa8a*/
  if ( this->Type->JumpJet ) /*0x51aa90*/
  {
    if ( dest ) /*0x51aaa0*/
    {
      v7 = (unsigned int *)(*((int (__thiscall **)(InfantryClass *, int *))this->ptr_0 + 18))(this, &ppv.q00C); /*0x51aab0*/
      v8 = *(unsigned int *)CellStruct::Set((CellStruct *)&ppv.ComPtr_field_0x08, *v7 / 256, v7[1] / 256); /*0x51aadd*/
      ptr_0 = (int (__thiscall **)(AbstractClass *, int *))v6->ptr_0; /*0x51aadf*/
      *(unsigned int *)ppv.__pad_000 = v8; /*0x51aae8*/
      v10 = (unsigned int *)ptr_0[18](v6, &ppv.q018); /*0x51aaec*/
      result = *(unsigned int *)CellStruct::Set((CellStruct *)&ppv.q004, *v10 / 256, v10[1] / 256); /*0x51ab19*/
      ppv.q004 = result; /*0x51ab1e*/
      if ( result == v8 ) /*0x51ab22*/
        return result; /*0x51ab22*/
    }
  }
  rockerLinkedUnit = this->rockerLinkedUnit; /*0x51ab34*/
  if ( rockerLinkedUnit ) /*0x51ab3c*/
  {
    rockerLinkedUnit->rockerLinkedUnit = 0; /*0x51ab3e*/
    this->rockerLinkedUnit = 0; /*0x51ab44*/
  }
  if ( !this->locomotor[0] ) /*0x51ab4a*/
    sub_7DC720(-2147467261); /*0x51ab57*/
  if ( (*(uint8_t (__stdcall **)(int))(*(unsigned int *)this->locomotor[0] + 16))(this->locomotor[0]) ) /*0x51ab65*/
  {
    if ( v6 ) /*0x51ab71*/
    {
      v42 = this->Type->SpeedType[0]; /*0x51ab8e*/
      v12 = (unsigned int *)(*((int (__thiscall **)(InfantryClass *, int *))this->ptr_0 + 18))(this, &ppv.q018); /*0x51ab92*/
      v13 = (bool *)Coord::To_Cell((Coord *)&DataGlobal_87F7E8, v12); /*0x51ab9b*/
      if ( (uint8_t)Cell::IsBuildable(v13, v42, 1, 0, -1, 0, -1, 1) ) /*0x51aba2*/
      {
        if ( this->Type->JumpJet || this->currentMission != 1 || this->movementDestination != v6 ) /*0x51abca*/
          (*((void (__thiscall **)(InfantryClass *))this->ptr_0 + 320))(this); /*0x51abd1*/
      }
    }
  }
  if ( (uint8_t)House::IsCurrentPlayer((House *)this->owner) ) /*0x51abdd*/
  {
    if ( v6 ) /*0x51abe8*/
    {
      if ( this->movementDestination == v6 ) /*0x51abf0*/
      {
        if ( this->Crawling ) /*0x51abf2*/
        {
          Type = this->Type; /*0x51abfc*/
          if ( !Type->Fraidycat && !Type->Cyborg ) /*0x51ac0c*/
            (*((void (__thiscall **)(InfantryClass *, int, unsigned int, unsigned int))this->ptr_0 + 342))(this, 7, 0, 0); /*0x51ac1f*/
        }
      }
    }
  }
  if ( (*((int (__thiscall **)(InfantryClass *))this->ptr_0 + 97))(this) != 7 && this->queuedMission != 7 /*0x51ac44*/
    || (uint8_t)Team::AllMembersValid((Team *)this) )
  {
    this->pathDirections[0] = -1; /*0x51ad11*/
    goto LABEL_48; /*0x51ad11*/
  }
  v15 = (Team *)AbstractClass::IsTechnoType(v6); /*0x51ac53*/
  v16 = v15; /*0x51ac58*/
  if ( !v15 ) /*0x51ac5c*/
  {
  LABEL_48:
    if ( v6 && this->Type->JumpJet ) /*0x51ad25*/
    {
      if ( !this->locomotor[0] ) /*0x51ad33*/
        sub_7DC720(-2147467261); /*0x51ad42*/
      if ( (*(uint8_t (__stdcall **)(int))(*(unsigned int *)this->locomotor[0] + 16))(this->locomotor[0]) ) /*0x51ad50*/
      {
        v19 = this->locomotor[0]; /*0x51ad5b*/
        *(unsigned int *)ppv.__pad_000 = 0; /*0x51ad69*/
        if ( !v19 ) /*0x51ad71*/
          goto LABEL_58; /*0x51ad71*/
        v20 = StreamClass::Set2((StreamClass *)&ppv, this->locomotor); /*0x51ad78*/
        if ( v20 < 0 && v20 != -2147467262 ) /*0x51ad86*/
          sub_7DC720(v20); /*0x51ad89*/
        if ( !*(unsigned int *)ppv.__pad_000 ) /*0x51ad94*/
  LABEL_58:
          sub_7DC720(-2147467261); /*0x51ad9b*/
        (*(void (__stdcall **)(unsigned int, int *))(**(unsigned int **)ppv.__pad_000 + 12))( /*0x51adac*/
          *(unsigned int *)ppv.__pad_000,
          &ppv.q018);
        if ( !memcmp(&ppv.q018, &g_CLSID_WalkLocomotion, 0x10u) ) /*0x51adbf*/
        {
          v21 = *&this->q5B4; /*0x51adc7*/
          if ( *&this->q5BC < v21 /*0x51adf8*/
            || (this->q5B9 || !v21)
            && (v22 = *&this->q5C0, v22 > 0)
            && this->COMStub_Release(this->FootClass_field_abstract_array_5AC, v21 + v22, 0) )
          {
            v23 = *&this->q5BC; /*0x51adff*/
            if ( v23 ) /*0x51ae04*/
              memcpy((void *)(*(unsigned int *)this->q_5B0 + 4), *(const void **)this->q_5B0, 4 * v23); /*0x51ae12*/
            **(unsigned int **)this->q_5B0 = v6; /*0x51ae1d*/
            ++*&this->q5BC; /*0x51ae23*/
          }
          v24 = (int *)(*((int (__thiscall **)(InfantryClass *))this->ptr_0 + 113))(this); /*0x51ae2b*/
          v6 = (AbstractClass *)v24; /*0x51ae31*/
          dest = v24; /*0x51ae35*/
          if ( v24 && (v24[80] & 0x100) != 0 ) /*0x51ae44*/
          {
            v6 = 0; /*0x51ae46*/
            dest = 0; /*0x51ae48*/
          }
        }
        if ( *(unsigned int *)ppv.__pad_000 ) /*0x51ae52*/
          (*(void (__stdcall **)(unsigned int))(**(unsigned int **)ppv.__pad_000 + 8))(*(unsigned int *)ppv.__pad_000); /*0x51ae57*/
      }
    }
    goto LABEL_73; /*0x51ae57*/
  }
  if ( !(uint8_t)Team::AllMembersValid(v15) ) /*0x51ac6b*/
  {
    if ( (*((int (__thiscall **)(InfantryClass *, int, Team *))this->ptr_0 + 158))(this, 2, v16) == 1 ) /*0x51ace5*/
    {
      result = (*((int (__thiscall **)(InfantryClass *, int))this->ptr_0 + 157))(this, 14); /*0x51acee*/
      if ( result == 14 ) /*0x51acf7*/
        return result; /*0x51acf7*/
      if ( result != 1 ) /*0x51ad00*/
        (*((void (__thiscall **)(InfantryClass *, int))this->ptr_0 + 157))(this, 3); /*0x51ad09*/
    }
    goto LABEL_48; /*0x51ad0f*/
  }
  if ( v16->vt_slot_44() != 1 )
  {
    if ( v16->vt_slot_44() == 6 )
    {
      if ( !v6 ) /*0x51ac99*/
      {
        v17 = 0; /*0x51ac9b*/
        goto LABEL_41; /*0x51ac9d*/
      }
      v18 = (*((int (__thiscall **)(AbstractClass *))v6->ptr_0 + 11))(v6) - 6; /*0x51aca6*/
  LABEL_40:
      v17 = v18 == 0 ? (TechnoClass *)v6 : 0;
      goto LABEL_41; /*0x51acaf*/
    }
    TechnoClass::SetFocus((TechnoClass *)this, (int)v6); /*0x51accd*/
    goto LABEL_48; /*0x51acd2*/
  }
  if ( v6 ) /*0x51ac7b*/
  {
    v18 = (*((int (__thiscall **)(AbstractClass *))v6->ptr_0 + 11))(v6) - 1; /*0x51ac88*/
    goto LABEL_40; /*0x51ac89*/
  }
  v17 = 0; /*0x51ac7d*/
  LABEL_41:
  this->queueUpToEnter = v17; /*0x51acb1*/
  TechnoClass::SetFocus((TechnoClass *)this, 0); /*0x51acba*/
  v6 = 0; /*0x51acbf*/
  dest = 0; /*0x51acc1*/
  LABEL_73:
  if ( this->Type->JumpJet && v6 ) /*0x51ae72*/
  {
    if ( !this->locomotor[0] ) /*0x51ae78*/
      sub_7DC720(-2147467261); /*0x51ae8d*/
    if ( !(*(uint8_t (__stdcall **)(int))(*(unsigned int *)this->locomotor[0] + 16))(this->locomotor[0]) ) /*0x51ae97*/
    {
      v25 = (unsigned int *)(*((int (__thiscall **)(AbstractClass *, int *))v6->ptr_0 + 18))(v6, &ppv.q018); /*0x51aeab*/
      (*((unsigned short *)&(ppv.q004))) = *v25 / 256; /*0x51aebf*/
      v26 = (int (__thiscall **)(InfantryClass *, int *, unsigned int))this->ptr_0; /*0x51aed0*/
      (*(((unsigned short *)&(ppv.q004)) + 1)) = v25[1] / 256; /*0x51aed6*/
      *(unsigned int *)ppv.__pad_000 = ppv.q004; /*0x51aee3*/
      v27 = v26->u32_4C(this, &ppv.q00C, 0); /*0x51aeea*/
      (*((unsigned short *)&(ppv.q004))) = *v27 / 256; /*0x51aefd*/
      (*(((unsigned short *)&(ppv.q004)) + 1)) = v27[1] / 256; /*0x51af15*/
      ppv.ComPtr_field_0x08 = ppv.q004; /*0x51af22*/
      CanDeployAtCell = InfantryClass::CanDeployAtCell(this, (int16_t *)&ppv.ComPtr_field_0x08, (int16_t *)ppv.__pad_000); /*0x51af35*/
      if ( this->Type->JumpJet ) /*0x51af39*/
      {
        InfantryClass::updateOccupiedBuilding( /*0x51af4c*/
          (InfantryClass *)&ppv,
          (int (__stdcall ****)(unsigned int, void *, unsigned int *))this->locomotor);
        if ( !*(unsigned int *)ppv.__pad_000 ) /*0x51af57*/
          sub_7DC720(-2147467261); /*0x51af5e*/
        (*(void (__stdcall **)(unsigned int, int *))(**(unsigned int **)ppv.__pad_000 + 12))( /*0x51af6f*/
          *(unsigned int *)ppv.__pad_000,
          &ppv.q018);
        v29 = memcmp((const char *)&ppv.q018, g_CLSID_JumpjetLocomotion.Data2, 16); /*0x51af80*/
        ComPtr::Release_Alt(&ppv); /*0x51af8f*/
        v30 = v29 == 0; /*0x51af94*/
        v6 = (AbstractClass *)dest; /*0x51af96*/
        v28 = v30; /*0x51af9a*/
      }
      else
      {
        v28 = 0; /*0x51af43*/
      }
      if ( this->Type->HoverAttack ) /*0x51afa5*/
        CanDeployAtCell = 1; /*0x51afaf*/
      if ( v28 ) /*0x51afba*/
      {
        if ( !CanDeployAtCell ) /*0x51afc2*/
        {
          v31 = this->locomotor[0]; /*0x51afc8*/
          locomotor = this->locomotor; /*0x51afce*/
          dest = 0; /*0x51afd6*/
          if ( v31 ) /*0x51afda*/
          {
            v33 = StreamClass::Set((StreamClass *)&dest, this->locomotor); /*0x51afe1*/
            if ( v33 < 0 && v33 != -2147467262 ) /*0x51afef*/
              sub_7DC720(v33); /*0x51aff2*/
            if ( dest && dest->GetSizeMax() ) /*0x51b002*/
            {
              if ( !dest ) /*0x51b00f*/
                sub_7DC720(-2147467261); /*0x51b016*/
              if ( dest->GenerateUniqueID() ) /*0x51b022*/
              {
                if ( *locomotor ) /*0x51b029*/
                  (*(void (__stdcall **)(int))(*(unsigned int *)*locomotor + 8))(*locomotor); /*0x51b032*/
                v34 = dest; /*0x51b035*/
                *locomotor = 0; /*0x51b039*/
                if ( !v34 ) /*0x51b03d*/
                  sub_7DC720(-2147467261); /*0x51b044*/
                v34->IsClean(this->locomotor); /*0x51b051*/
              }
            }
          }
          *(unsigned int *)ppv.__pad_000 = 0; /*0x51b060*/
          InstanceCOM = CreateInstanceCOM((ObjectClass *)&ppv, (IID *)&g_CLSID_WalkLocomotion, 0, 7u); /*0x51b064*/
          if ( InstanceCOM < 0 && InstanceCOM != -2147467262 ) /*0x51b072*/
            sub_7DC720(InstanceCOM); /*0x51b075*/
          if ( !*(unsigned int *)ppv.__pad_000 ) /*0x51b080*/
            sub_7DC720(-2147467261); /*0x51b087*/
          (*(void (__stdcall **)(unsigned int, InfantryClass *))(**(unsigned int **)ppv.__pad_000 + 12))(*(unsigned int *)ppv.__pad_000, this); /*0x51b094*/
          ppv.q004 = 0; /*0x51b09b*/
          if ( *(unsigned int *)ppv.__pad_000 ) /*0x51b0a1*/
          {
            v36 = StreamClass::Set((StreamClass *)&ppv.q004, &ppv); /*0x51b0ac*/
            if ( v36 < 0 && v36 != -2147467262 ) /*0x51b0ba*/
              sub_7DC720(v36); /*0x51b0bd*/
          }
          COMObject::SwapReference((COMObject *)&dest, ppv.q004); /*0x51b0cb*/
          if ( ppv.q004 ) /*0x51b0d6*/
            (*(void (__stdcall **)(int))(*(unsigned int *)ppv.q004 + 8))(ppv.q004); /*0x51b0db*/
          v37 = dest; /*0x51b0de*/
          if ( dest ) /*0x51b0e4*/
          {
            dest->vt_entry_68(*locomotor); /*0x51b0ec*/
            InfantryClass::checkBridgeClearance((InfantryClass *)this->locomotor, *(int *)ppv.__pad_000); /*0x51b0f6*/
            v37 = dest; /*0x51b0fb*/
          }
          if ( *(unsigned int *)ppv.__pad_000 ) /*0x51b105*/
          {
            (*(void (__stdcall **)(unsigned int))(**(unsigned int **)ppv.__pad_000 + 8))(*(unsigned int *)ppv.__pad_000); /*0x51b10a*/
            v37 = dest; /*0x51b10d*/
          }
          if ( v37 ) /*0x51b113*/
            v37->COMStub_Release(); /*0x51b11c*/
        }
      }
      else if ( CanDeployAtCell ) /*0x51b126*/
      {
        v38 = this->locomotor[0]; /*0x51b12c*/
        v39 = this->locomotor; /*0x51b132*/
        dest = 0; /*0x51b13a*/
        if ( v38 ) /*0x51b13e*/
        {
          v40 = StreamClass::Set((StreamClass *)&dest, this->locomotor); /*0x51b149*/
          if ( v40 < 0 && v40 != -2147467262 ) /*0x51b157*/
            sub_7DC720(v40); /*0x51b15a*/
          if ( dest ) /*0x51b165*/
          {
            if ( dest->GetSizeMax() ) /*0x51b16a*/
            {
              if ( !dest ) /*0x51b177*/
                sub_7DC720(-2147467261); /*0x51b17e*/
              if ( dest->GenerateUniqueID() ) /*0x51b18a*/
              {
                if ( *v39 ) /*0x51b191*/
                  (*(void (__stdcall **)(int))(*(unsigned int *)*v39 + 8))(*v39); /*0x51b19a*/
                v41 = dest; /*0x51b19d*/
                *v39 = 0; /*0x51b1a1*/
                if ( !v41 ) /*0x51b1a5*/
                  sub_7DC720(-2147467261); /*0x51b1ac*/
                v41->IsClean(this->locomotor); /*0x51b1b9*/
              }
            }
            if ( dest ) /*0x51b1c2*/
              dest->COMStub_Release(); /*0x51b1c7*/
          }
        }
      }
    }
  }
  (*((unsigned char *)&(result))) = FootClass::AssignDestination((FootClass *)this, (int)v6, sync_flag); /*0x51b1d2*/
  return result; /*0x51b1d7*/
}
// 0x51cba0
int InfantryClass::ValidatePlacement()
{
  InfantryClass *v5; // ecx
  InfantryClass *v6; // esi
  char v7; // bl
  int result; // eax
  int v9; // edi
  InfantryTypeClass *Type; // eax
  int v11; // [esp+0h] [ebp-Ch]

  v6 = v5; /*0x51cba6*/
  v7 = FootClass::ValidatePlacement((FootClass *)this, a2, a3, a4, v11); /*0x51cbba*/
  result = (*((int (__thiscall **)(InfantryClass *))v6->ptr_0 + 299))(v6); /*0x51cbbc*/
  if ( (unsigned char)result ) /*0x51cbc4*/
  {
    (*((unsigned char *)&(result))) = v7; /*0x51cbc7*/
    return result; /*0x51cbcb*/
  }
  result = (*((int (__thiscall **)(InfantryClass *))v6->ptr_0 + 97))(v6); /*0x51cbd2*/
  if ( result == 28 ) /*0x51cbdb*/
  {
    (*((unsigned char *)&(result))) = v7; /*0x51cbde*/
    return result; /*0x51cbe2*/
  }
  if ( v6->target ) /*0x51cbe5*/
  {
    v9 = 1; /*0x51cbf3*/
    if ( (*((int (__thiscall **)(InfantryClass *))v6->ptr_0 + 97))(v6) == 17 ) /*0x51cc01*/
      v9 = 17; /*0x51cc03*/
    if ( (*((int (__thiscall **)(InfantryClass *))v6->ptr_0 + 97))(v6) == 8 ) /*0x51cc12*/
      v9 = 8; /*0x51cc18*/
    goto LABEL_37; /*0x51cc1a*/
  }
  InfantryClass::ProcessExitQueue(v6); /*0x51cc21*/
  if ( v6->movementDestination ) /*0x51cc26*/
  {
    v9 = 2; /*0x51cc34*/
    if ( (*((int (__thiscall **)(InfantryClass *))v6->ptr_0 + 97))(v6) == 8 ) /*0x51cc42*/
      v9 = 8; /*0x51cc44*/
    if ( (*((int (__thiscall **)(InfantryClass *))v6->ptr_0 + 97))(v6) == 17 ) /*0x51cc53*/
      v9 = 17; /*0x51cc59*/
    goto LABEL_37; /*0x51cc5b*/
  }
  result = (*((int (__thiscall **)(InfantryClass *))v6->ptr_0 + 97))(v6); /*0x51cc64*/
  if ( result == 5 /*0x51ccae*/
    || (result = (*((int (__thiscall **)(InfantryClass *))v6->ptr_0 + 97))(v6), result == 11)
    || (*((int (__thiscall **)(InfantryClass *))v6->ptr_0 + 97))(v6) != -1
    && ((result = (int)MissionClass::GetMissionControl((MissionClass *)v6), result->u8_5)
     || (result = (int)MissionClass::GetMissionControl((MissionClass *)v6), result->AudioStream_7)) )
  {
    (*((unsigned char *)&(result))) = 0; /*0x51cda6*/
    return result; /*0x51cda6*/
  }
  if ( (uint8_t)House::IsCurrentPlayer((House *)v6->owner) || v6->team ) /*0x51ccc8*/
  {
    if ( v6->currentMission != 11 /*0x51cd64*/
      && (!(uint8_t)TechnoTypeClass::HasVoiceResponse((int *)v6, 16) && !(v6->u8_6C1) || v6->team) )
    {
      v9 = 5; /*0x51cd6e*/
      goto LABEL_37; /*0x51cd73*/
    }
    goto LABEL_36; /*0x51cd6c*/
  }
  if ( v6->owner->iqLevel2 >= *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 5184) /*0x51ccf5*/
    || v6->currentMission == 11 )
  {
    if ( v6->slaveOwner ) /*0x51ccfe*/
    {
      v9 = 5; /*0x51cd08*/
      goto LABEL_37; /*0x51cd0d*/
    }
    if ( !(*((uint8_t (__thiscall **)(InfantryClass *))v6->ptr_0 + 171))(v6) ) /*0x51cd13*/
    {
      Type = v6->Type; /*0x51cd1d*/
      if ( !Type->Engineer && !Type->VehicleThief ) /*0x51cd2d*/
      {
        v9 = 5; /*0x51cd37*/
        goto LABEL_37; /*0x51cd3c*/
      }
    }
  LABEL_36:
    v9 = 11; /*0x51cd75*/
    goto LABEL_37; /*0x51cd75*/
  }
  v9 = 5; /*0x51ccf7*/
  LABEL_37:
  result = v6->currentMission; /*0x51cd7a*/
  if ( result != 25 && result != 11 ) /*0x51cd88*/
    result = (*((int (__thiscall **)(InfantryClass *, int, unsigned int))v6->ptr_0 + 122))(v6, v9, 0); /*0x51cd96*/
  (*((unsigned char *)&(result))) = v7; /*0x51cd9d*/
  return result; /*0x51cbc6*/
}
// 0x484ae0
int InfantryClass::ValidateAttackPosition()
{
  int16_t v2; // ax
  unsigned int *v4; // eax
  unsigned int *v5; // esi
  void *v6; // edi
  int16_t v7; // ax
  int16_t v8; // ax
  unsigned short *v9; // eax
  int16_t v10; // cx
  int16_t v11; // cx
  unsigned int *v12; // eax
  unsigned int *v13; // esi
  InfantryClass *v14; // edi
  int16_t v15; // ax
  int16_t v16; // ax
  InfantryClass *v17; // esi
  int occupant; // [esp+10h] [ebp-14h] BYREF
  int16_t v19[2]; // [esp+14h] [ebp-10h] BYREF
  int16_t v20[2]; // [esp+18h] [ebp-Ch] BYREF
  int16_t v21[2]; // [esp+1Ch] [ebp-8h] BYREF
  int v22; // [esp+20h] [ebp-4h] BYREF

  v2 = (*(this->passengers + 1)); /*0x484ae8*/
  if ( v2 >= 0 && v2 < FootClass_Array.primaryFacing[0] && this->radioLinks[3] == 10 ) /*0x484b0d*/
    return 1; /*0x484b18*/
  occupant = this->occupant; /*0x484b20*/
  *(unsigned int *)v19 = *CellStruct::Add((CellStruct *)&occupant, v21, &g_DDrawSurfaceManager.scenario[82]); /*0x484b3a*/
  v4 = CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, v19); /*0x484b43*/
  v5 = v4; /*0x484b48*/
  if ( v4 ) /*0x484b4c*/
  {
    occupant = v4->ptr_24; /*0x484b59*/
    *(unsigned int *)v20 = *CellStruct::Add((CellStruct *)&occupant, v21, &g_DDrawSurfaceManager.scenario[82]); /*0x484b73*/
    v6 = CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, v20); /*0x484b81*/
    if ( v6 ) /*0x484b85*/
    {
      v7 = v5->q116; /*0x484b8b*/
      if ( v7 >= 0 && v7 < FootClass_Array.primaryFacing[0] && v5->u32_EC == 10 ) /*0x484baa*/
      {
        v8 = v6->q116; /*0x484bac*/
        if ( v8 < 0 || v8 >= FootClass_Array.primaryFacing[0] || v6->animation != 10 ) /*0x484bc5*/
          return 1; /*0x484bd0*/
      }
      occupant = v6->objectTypeFlags; /*0x484bd6*/
      *(unsigned int *)v21 = *NeighborCoord(&v22, &occupant, 0); /*0x484bf3*/
      v9 = CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, v21); /*0x484bf7*/
      if ( v9 ) /*0x484bfe*/
      {
        v10 = v6->q116; /*0x484c00*/
        if ( v10 >= 0 && v10 < FootClass_Array.primaryFacing[0] && v6->animation == 10 ) /*0x484c1f*/
        {
          v11 = v9->q116; /*0x484c21*/
          if ( v11 < 0 || v11 >= FootClass_Array.primaryFacing[0] || v9->u32_EC != 10 ) /*0x484c3a*/
            return 1; /*0x484c45*/
        }
      }
    }
  }
  *(unsigned int *)v21 = this->occupant; /*0x484c4b*/
  *(unsigned int *)v20 = *NeighborCoord(&v22, v21, 6); /*0x484c68*/
  v12 = CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, v20); /*0x484c6c*/
  v13 = v12; /*0x484c71*/
  if ( !v12 ) /*0x484c75*/
    return 0; /*0x484c75*/
  *(unsigned int *)v21 = v12->ptr_24; /*0x484c80*/
  *(unsigned int *)v19 = *NeighborCoord(&v22, v21, 6); /*0x484c9d*/
  v14 = (InfantryClass *)CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, v19); /*0x484ca6*/
  if ( !v14 ) /*0x484caa*/
    return 0; /*0x484caa*/
  v15 = v13->q116; /*0x484cb0*/
  if ( v15 >= 0 && v15 < FootClass_Array.primaryFacing[0] && v13->u32_EC == 10 ) /*0x484ccf*/
  {
    v16 = (*(v14->passengers + 1)); /*0x484cd1*/
    if ( v16 < 0 || v16 >= FootClass_Array.primaryFacing[0] || v14->radioLinks[3] != 10 ) /*0x484cea*/
      return 1; /*0x484cf5*/
  }
  *(unsigned int *)v21 = v14->occupant; /*0x484cfb*/
  *(unsigned int *)v20 = *NeighborCoord(&v22, v21, 6); /*0x484d18*/
  v17 = (InfantryClass *)CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, v20); /*0x484d21*/
  return v17 && (uint8_t)InfantryClass::IsInBounds(v14) && !(uint8_t)InfantryClass::IsInBounds(v17); /*0x484d40*/
}
// ============================================================
// Phase 3: Stream & Save
// ============================================================

// 0x521960
int InfantryClass::LoadFromStream()
{
  InfantryClass *v2; // esi
  void **p_vtable1; // ebx
  int v4; // eax
  signed int v5; // eax
  int v6; // ecx
  char *i; // eax
  unsigned int *v8; // eax
  int result; // eax
  int v10; // edi
  int v11; // ebp
  int v12; // edi
  int ptr_4; // eax

  v2 = this; /*0x521962*/
  p_vtable1 = &this->ptr_4; /*0x52196a*/
  this = (InfantryClass *)(*((int (__stdcall **)(void **))this->ptr_4 + 4))(&this->ptr_4); /*0x52197b*/
  v4 = BuildingTypeClass::Dequeue(&g_BuildingLoadQueue_Array, (int *)&this); /*0x52197f*/
  if ( v4 ) /*0x521986*/
  {
    v5 = (signed int)(v4 - (unsigned int)g_BuildingLoadQueue_Array.ptr_0) >> 3; /*0x52198e*/
    if ( v5 != -1 ) /*0x521994*/
    {
      v6 = v5 + 1; /*0x521996*/
      for ( i = (char *)g_BuildingLoadQueue_Array.ptr_4; /*0x5219a0*/
            v6 < (int)g_BuildingLoadQueue_Array.ptr_4;
            i = (char *)g_BuildingLoadQueue_Array.ptr_4 )
      {
        v8 = (char *)g_BuildingLoadQueue_Array.ptr_0 + 8 * v6++; /*0x5219a8*/
        *(v8 - 2) = *v8; /*0x5219ae*/
        *(v8 - 1) = v8[1]; /*0x5219b4*/
      }
      g_BuildingLoadQueue_Array.ptr_4 = i - 1; /*0x5219c9*/
      *((unsigned int *)g_BuildingLoadQueue_Array.ptr_0 + 2 * (int)g_BuildingLoadQueue_Array.ptr_4) = 0; /*0x5219ce*/
      *((unsigned int *)g_BuildingLoadQueue_Array.ptr_0 + 2 * (int)g_BuildingLoadQueue_Array.ptr_4 + 1) = 0; /*0x5219de*/
      g_BuildingLoadQueue_Array.uniqueId = 0; /*0x5219e2*/
    }
  }
  result = ObjectClass::LoadFromStream_Common((int)v2, pStm); /*0x5219ee*/
  if ( result >= 0 ) /*0x5219f5*/
  {
    v10 = v2->locomotor[0]; /*0x5219fb*/
    if ( v2 ) /*0x521a03*/
    {
      FootClass::PostLoadInit((FootClass *)v2, (int)&this); /*0x521a0c*/
      /* X11: vtable install elided (implicit via class virtuals 0x521a11) — binary-proven install, was 0 */
      *p_vtable1 = 0; /*0x521a17*/
      /* X11: vtable install elided (implicit via class virtuals 0x521a1d) — binary-proven install, was 0 */
      /* X11: vtable install elided (implicit via off_7EB02C virtuals 0x521a24) */
    }
    v11 = v2->locomotor[0]; /*0x521a2c*/
    if ( v11 != v10 ) /*0x521a34*/
    {
      v2->locomotor[0] = v10; /*0x521a38*/
      if ( v10 ) /*0x521a3e*/
        (*(void (__stdcall **)(int))(*(unsigned int *)v10 + 4))(v10); /*0x521a43*/
      if ( v11 ) /*0x521a48*/
        (*(void (__stdcall **)(int))(*(unsigned int *)v11 + 8))(v11); /*0x521a4e*/
    }
    (*(void (__stdcall **)(int))(*(unsigned int *)v10 + 8))(v10); /*0x521a54*/
    v12 = (*((int (__stdcall **)(void **))*p_vtable1 + 4))(p_vtable1); /*0x521a63*/
    ptr_4 = (int)g_BuildingLoadQueue_Array.ptr_8; /*0x521a65*/
    if ( (int)g_BuildingLoadQueue_Array.ptr_4 + 1 <= (int)g_BuildingLoadQueue_Array.ptr_8 ) /*0x521a6e*/
      goto LABEL_18; /*0x521a6e*/
    if ( !g_BuildingLoadQueue_Array.ptr_8 ) /*0x521a72*/
      ptr_4 = 10; /*0x521a74*/
    if ( BuildingTypeClass::Enqueue((int)&g_BuildingLoadQueue_Array, ptr_4) ) /*0x521a7f*/
    {
  LABEL_18:
      *((unsigned int *)g_BuildingLoadQueue_Array.ptr_0 + 2 * (int)g_BuildingLoadQueue_Array.ptr_4) = v12; /*0x521a93*/
      *((unsigned int *)g_BuildingLoadQueue_Array.ptr_0 + 2 * (int)g_BuildingLoadQueue_Array.ptr_4 + 1) = v2; /*0x521aa1*/
      (*((unsigned char *)&(g_BuildingLoadQueue_Array.ptr_C))) = 0; /*0x521aab*/
      ++g_BuildingLoadQueue_Array.ptr_4; /*0x521ab2*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v2->Type); /*0x521ac3*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v2->disguiseAsType); /*0x521ad4*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v2->disguisedAsHouse); /*0x521ae5*/
    return 0; /*0x521aea*/
  }
  return result; /*0x521aec*/
}
// 0x521b00
int InfantryClass::SaveLoad_Prefix()
{
  return ObjectClass::SaveToStream_Common((ObjectClass *)this, pPStm, a3); /*0x521b14*/
}
// 0x523350
int InfantryClass::ScalarDtor()
{
  InfantryClass::Destruct(this); /*0x523353*/
  if ( (a2 & 1) != 0 ) /*0x52335d*/
    operator delete((void *)(this)); /*0x523360*/
  return &this->ptr_0; /*0x52336a*/
}
// ============================================================
// Phase 3: Cursor & UI
// ============================================================

// 0x51f800
int InfantryClass::HandleCursorOverCell()
{
  int v6; // ebx
  InfantryClass *v7; // eax
  InfantryClass *v8; // eax
  InfantryTypeClass *Type; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  uint8_t (__thiscall **ptr_0)(InfantryClass *, unsigned int *, int); // edx
  unsigned int *v14; // eax
  int v15; // ebp
  int v16; // esi
  int v17; // ecx
  int v18; // edx
  int v19; // eax
  int *v20; // ecx
  InfantryClass *v21; // eax
  unsigned int *v22; // eax
  int v23; // eax
  unsigned int v24[3]; // [esp+Ch] [ebp-Ch] BYREF
  int v25; // [esp+20h] [ebp+8h]

  if ( !(uint8_t)House::IsHumanPlayer((House *)this->owner) ) /*0x51f80e*/
    return 0; /*0x51f81f*/
  v6 = FootClass::HandleCursorWithCheck((FootClass *)this, a2, a3, a4); /*0x51f83c*/
  if ( TechnoClass::GetValue((TechnoClass *)this, -1) < 0 /*0x51f859*/
    && (uint8_t)House::IsHumanPlayer((House *)this->owner)
    && v6 == 5 )
  {
    v6 = 26; /*0x51f85b*/
  }
  if ( this->Type->JumpJet && (v6 == 1 || v6 == 2) ) /*0x51f878*/
  {
    v7 = (InfantryClass *)CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, a2); /*0x51f880*/
    if ( InfantryClass::ValidateAttackPosition(v7) /*0x51f89d*/
      || (v8 = (InfantryClass *)CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, a2),
          InfantryClass::CanMoveThroughCell(v8)) )
    {
      v6 = 0; /*0x51f8a6*/
    }
  }
  if ( !(uint8_t)House::IsHumanPlayer((House *)this->owner) ) /*0x51f8ae*/
    goto LABEL_33; /*0x51f8ae*/
  Type = this->Type; /*0x51f8bb*/
  if ( !Type->Deployer ) /*0x51f8c1*/
    goto LABEL_33; /*0x51f8c1*/
  v10 = this->SequenceAnim[0]; /*0x51f8cf*/
  if ( v10 != 27 && v10 != 28 && v10 != 29 && v10 != 30 ) /*0x51f8e7*/
    goto LABEL_33; /*0x51f8e7*/
  if ( v6 != 1 ) /*0x51f8f0*/
  {
    if ( v6 == 5 ) /*0x51f8f5*/
    {
      if ( Type->DeployFire ) /*0x51f8fb*/
      {
        v11 = (*((int (__thiscall **)(InfantryClass *, unsigned int))this->ptr_0 + 185))(this, 0); /*0x51f90b*/
        v12 = *a2 << 8; /*0x51f91b*/
        v24[1] = (a2[1] << 8) + 128; /*0x51f92b*/
        ptr_0 = (uint8_t (__thiscall **)(InfantryClass *, unsigned int *, int))this->ptr_0; /*0x51f92f*/
        v24[0] = v12 + 128; /*0x51f935*/
        v24[2] = 0; /*0x51f93c*/
        if ( ptr_0[89](this, v24, v11) ) /*0x51f944*/
          goto LABEL_24; /*0x51f94c*/
      }
      goto LABEL_23; /*0x51f94c*/
    }
  LABEL_33:
    if ( v6 == 1 ) /*0x51f9aa*/
    {
      v21 = (InfantryClass *)CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, a2); /*0x51f9b2*/
      if ( (uint8_t)InfantryClass::IsInBounds(v21) ) /*0x51f9b9*/
      {
        CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, a2); /*0x51f9c9*/
        return 36 - (globalHelper_084F10((int)this) != 0); /*0x51f9e2*/
      }
    }
    goto LABEL_24; /*0x51f9c0*/
  }
  LABEL_23:
  v6 = 2; /*0x51f94e*/
  LABEL_24:
  v14 = CellCoord::To_CellObj((CellCoord *)&DataGlobal_87F7E8, a2); /*0x51f953*/
  v15 = 0; /*0x51f965*/
  v16 = 0; /*0x51f967*/
  if ( ((int)dword_A8B230[0].ptr_0 & 0x1000) != 0 ) /*0x51f96e*/
  {
    if ( a3 ) /*0x51f97a*/
    {
      v17 = v14[10]; /*0x51f97c*/
      if ( v17 ) /*0x51f981*/
      {
        v18 = *(unsigned int *)(v17 + 16); /*0x51f983*/
        v19 = 0; /*0x51f986*/
        if ( v18 > 0 ) /*0x51f98a*/
        {
          v20 = *(int **)(v17 + 4); /*0x51f98c*/
          while ( 1 ) /*0x51f98f*/
          {
            v16 = *v20; /*0x51f98f*/
            if ( *(unsigned char *)(*v20 + 116) ) /*0x51f991*/
            {
              if ( v16->nextObject == 6 ) /*0x51f99b*/
                break; /*0x51f99b*/
            }
            ++v19; /*0x51f99d*/
            ++v20; /*0x51f99e*/
            if ( v19 >= v18 ) /*0x51f9a3*/
              goto LABEL_37; /*0x51f9a3*/
          }
          v15 = *v16->u32_60; /*0x51f9ee*/
        }
      }
    }
  }
  LABEL_37:
  if ( !this->Type->Engineer || !v15 || !(uint8_t)House::IsHumanPlayer((House *)this->owner) ) /*0x51fa16*/
    goto LABEL_55; /*0x51fa16*/
  if ( *(unsigned char *)(v15 + 5814) ) /*0x51fa1f*/
  {
    v22 = (unsigned int *)v16->GetCoords_0(v24); /*0x51fa32*/
    (*((unsigned short *)&(v25))) = *v22 / 256; /*0x51fa45*/
    (*(((unsigned short *)&(v25)) + 1)) = v22[1] / 256; /*0x51fa5d*/
    a4 = v25; /*0x51fa66*/
    v23 = -(CellClass::CheckConnectivity((CellClass *)&DataGlobal_87F7E8, (int)&a4) != 0); /*0x51fa77*/
    (*((unsigned char *)&(v23))) = v23 & 0xFD; /*0x51fa79*/
    v6 = v23 + 32; /*0x51fa7e*/
    goto LABEL_47; /*0x51fa80*/
  }
  if ( !*(unsigned char *)(v15 + 3276) ) /*0x51fa82*/
  {
  LABEL_55:
    if ( v6 == 5 && !(*((uint8_t (__thiscall **)(InfantryClass *))this->ptr_0 + 171))(this) ) /*0x51fa9c*/
      v6 = 59; /*0x51faa6*/
    goto LABEL_47; /*0x51faa6*/
  }
  v6 = 9; /*0x51fa8c*/
  LABEL_47:
  if ( (uint8_t)House::IsHumanPlayer((House *)this->owner) && !v6 && !this->Type->JumpJet ) /*0x51fac5*/
  {
    if ( (*((uint8_t (__thiscall **)(InfantryClass *))this->ptr_0 + 40))(this) ) /*0x51fad3*/
      return 2; /*0x51fadd*/
  }
  return v6; /*0x51f817*/
}
// 0x51e3b0
int InfantryClass::GetActionOnObject_EMP(AbstractClass* object, int flags)
{
    char v4; // bl
    int *v5; // esi
    int result; // eax
    int v7; // ebp
    int v8; // eax
    unsigned int *v9; // eax
    int v10; // eax
    int v16; // eax
    void *v18; // eax
    int v19; // eax
    int v20; // edx
    int **i; // ecx
    InfantryTypeClass *Type; // eax
    int v23; // eax
    int v24; // eax
    int v25; // eax
    int v26; // eax
    int v27; // esi
    int (__thiscall **ptr_0)(InfantryClass *, int); // ebx
    int v29; // eax
    int v30; // eax
    int v31; // esi
    InfantryTypeClass *v32; // ecx
    int v33; // eax
    int v34; // eax
    InfantryTypeClass *v35; // eax
    int v36; // eax
    bool v37; // zf
    int v38; // eax
    int v39; // eax
    InfantryTypeClass *v40; // eax
    int16_t *v41; // eax
    int TileIndex; // eax
    int v43; // ecx
    int *v44; // eax
    int16_t v45; // bp
    int16_t v46; // bx
    int v47; // eax
    InfantryTypeClass *v48; // ecx
    int v49; // eax
    int v50; // eax
    char v51; // [esp+10h] [ebp-38h]
    char v52; // [esp+23h] [ebp-25h]
    int16_t v53; // [esp+24h] [ebp-24h]
    int16_t v54; // [esp+26h] [ebp-22h]
    int v55; // [esp+28h] [ebp-20h]
    int v56; // [esp+2Ch] [ebp-1Ch]
    unsigned int v57[2]; // [esp+34h] [ebp-14h] BYREF
    int v58[3]; // [esp+3Ch] [ebp-Ch] BYREF

    if ( !(unsigned char)a3 /*0x51e3e2*/
      && ((uint8_t)Mouse::IsButtonDown(((unsigned int *)&stru_A8EB00)[36])
       || (uint8_t)Mouse::IsButtonDown(((unsigned int *)&stru_A8EB00)[40])) )
    {
      v4 = 1; /*0x51e3eb*/
    }
    else
    {
      v4 = 0; /*0x51e3f3*/
      if ( (unsigned char)a3 ) /*0x51e3f7*/
      {
  LABEL_9:
        v52 = 0; /*0x51e42a*/
        goto LABEL_10; /*0x51e42a*/
      }
    }
    if ( !(uint8_t)Mouse::IsButtonDown(*(unsigned int *)((char *)&stru_A8EB00 + 256)) /*0x51e421*/
      && !(uint8_t)Mouse::IsButtonDown(((unsigned int *)&stru_A8EB00)[32]) )
    {
      goto LABEL_9; /*0x51e421*/
    }
    v52 = 1; /*0x51e423*/
  LABEL_10:
    if ( v4 && v52 ) /*0x51e439*/
      v52 = 0; /*0x51e43b*/
    v5 = a2; /*0x51e444*/
    result = InfantryClass::GetCursorOverObject((FootClass *)this, (int)a2, (char)a3); /*0x51e44c*/
    v7 = result; /*0x51e451*/
    if ( result != 8 )
    {
      if ( this->Type->Engineer /*0x51e488*/
        && (uint8_t)House::IsHumanPlayer((House *)this->ptr_0)
        && v5[14]
        && v5->u32_68 )
      {
        return 57; /*0x51e49b*/
      }
      if ( !this->Type->Engineer ) /*0x51e4a4*/
        goto LABEL_39; /*0x51e4a4*/
      if ( v5->vt_slot_44() != 6 ) /*0x51e4bc*/
        goto LABEL_39; /*0x51e4bc*/
      if ( !(uint8_t)House::IsHumanPlayer((House *)this->ptr_0) ) /*0x51e4c8*/
        goto LABEL_39; /*0x51e4c8*/
      if ( v5->vt_slot_128() ) /*0x51e4d9*/
        goto LABEL_39; /*0x51e4d9*/
      v8 = v5[328]; /*0x51e4e7*/
      if ( !*(unsigned char *)(v8 + 3276) ) /*0x51e4ed*/
        goto LABEL_39; /*0x51e4f5*/
      if ( *(unsigned char *)(v8 + 5814) ) /*0x51e4fb*/
      {
        v9 = (unsigned int *)v5->vt_slot_72(v58); /*0x51e50e*/
        a3 = ((a3) & 0xFFFF0000u) | ((unsigned int)(*v9 / 256) & 0xFFFFu); /*0x51e521*/
        a3 = ((a3) & 0xFFFFu) | (((unsigned int)(v9[1] / 256) & 0xFFFFu) << 16); /*0x51e53a*/
        a2 = a3; /*0x51e547*/
        v10 = -(CellClass::CheckConnectivity((CellClass *)&DataGlobal_87F7E8, (int)&a2) != 0); /*0x51e553*/
        v10 = v10 & 0xFD; /*0x51e556*/
        return v10 + 32; /*0x51e561*/
      }
      if ( !(uint8_t)((ObjectClass *)this->ptr_0)->IsAlliedWithObjectHouse((int)v5)
        && (!*(unsigned char *)(*(unsigned int *)(v5[135] + 52) + 422)
         || !*(unsigned char *)(v5[328] + 5499)
         || v5->vt_slot_468()) )
      {
        if ( *(unsigned char *)(v5[328] + 5490) ) /*0x51e5ab*/
        {
          BuildingClass::GetHealthRatio((BuildingClass *)v5); /*0x51e5bb*/
          _ECX = *(unsigned int *)&g_RulesClass_Instance; /*0x51e5c0*/
          __asm /*0x51e5c6*/
          {
            fld dword ptr [ecx+17F8h]
            fcompp
            fnstsw ax
          }
          if ( (_AX & 0x100) != 0 ) /*0x51e5d3*/
            return 28; /*0x51e5e5*/
          return 9; /*0x51e5d3*/
        }
  LABEL_39:
        if ( v5->vt_slot_44() == 6 /*0x51e6a3*/
          && (uint8_t)House::IsHumanPlayer((House *)this->ptr_0)
          && !v5->vt_slot_468()
          && (uint8_t)BuildingClass::CanRepair((BuildingClass *)v5, (int)this)
          && !v52 )
        {
          return 9; /*0x51e6a3*/
        }
        if ( this->Type->Engineer && v7 == 5 ) /*0x51e6c7*/
          return 2; /*0x51e6d5*/
        if ( TechnoClass::GetValue((TechnoClass *)this, -1) < 0 && (uint8_t)House::IsHumanPlayer((House *)this->ptr_0) ) /*0x51e6ef*/
        {
          if ( !(uint8_t)((ObjectClass *)this->ptr_0)->IsAlliedWithObjectHouse((int)v5) ) /*0x51e70a*/
            return 59; /*0x51e7a3*/
          if ( v5->vt_slot_44() == 15 ) /*0x51e71a*/
          {
            if ( v5 == (int *)this ) /*0x51e71e*/
              return 26; /*0x51e754*/
            BuildingClass::GetHealthRatio((BuildingClass *)v5); /*0x51e722*/
            _EAX = *(unsigned int *)&g_RulesClass_Instance; /*0x51e727*/
            __asm /*0x51e72c*/
            {
              fcomp qword ptr [eax+16F8h]
              fnstsw ax
            }
            if ( (_EAX & 0x100) != 0 ) /*0x51e737*/
              return 27; /*0x51e745*/
          }
          v18 = AbstractClass::IsTechno((AbstractClass *)v5); /*0x51e759*/
          if ( !v18 || !*(unsigned int *)((*(int (__thiscall **)(void *))(*(unsigned int *)v18 + 132))(v18) + 1504) ) /*0x51e76c*/
          {
            if ( v7 != 26 && v7 != 1 ) /*0x51e782*/
              return 7; /*0x51e794*/
            return v7; /*0x51e782*/
          }
        }
        if ( (uint8_t)House::IsHumanPlayer((House *)this->ptr_0) /*0x51e7d1*/
          && this->Type->VehicleThief
          && v5->vt_slot_128() )
        {
          if ( *(unsigned char *)(v5->vt_slot_132() + 3220) ) /*0x51e7e5*/
            return 7; /*0x51e7fb*/
          if ( v5->HouseClass_21C != this->ptr_0 ) /*0x51e80c*/
          {
            if ( ((int)dword_A8B230[0].ptr_0 & 0x800) == 0 ) /*0x51e819*/
              return 9; /*0x51e819*/
            v19 = 0; /*0x51e825*/
            v20 = *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 2892); /*0x51e827*/
            if ( v20 <= 0 ) /*0x51e82f*/
              return 9; /*0x51e6b1*/
            for ( i = *(int ***)(*(unsigned int *)&g_RulesClass_Instance + 2880); *i != v5; ++i ) /*0x51e835*/
            {
              if ( ++v19 >= v20 ) /*0x51e849*/
                return 9; /*0x51e857*/
            }
            return 7; /*0x51e83d*/
          }
        }
        if ( v5->vt_slot_44() == 6 /*0x51e8b1*/
          && (uint8_t)((ObjectClass *)this->ptr_0)->IsAlliedWithObjectHouse((int)v5)
          && (uint8_t)House::IsHumanPlayer((House *)this->ptr_0)
          && !v5->vt_slot_468()
          && *(unsigned char *)(v5[328] + 5825)
          && !v52 )
        {
          Type = this->Type; /*0x51e8b3*/
          if ( this->ptr_0 >= Type->ptr_0 ) /*0x51e8c2*/
            goto LABEL_88; /*0x51e8c2*/
          if ( !Type->Deployer || (v23 = this->SequenceAnim[0], v23 != 27) && v23 != 28 && v23 != 29 && v23 != 30 ) /*0x51e8e6*/
          {
            v24 = (*((int (__thiscall **)(InfantryClass *, int, int *))this->ptr_0 + 158))(this, 15, v5) - 1; /*0x51e8f5*/
            if ( !v24 ) /*0x51e8f6*/
            {
              v7 = 3; /*0x51e9ab*/
              goto LABEL_89; /*0x51e9b0*/
            }
            if ( v24 == 9 ) /*0x51e8ff*/
  LABEL_88:
              v7 = 31; /*0x51e901*/
          }
        }
  LABEL_89:
        if ( v5->vt_slot_44() != 6 /*0x51e951*/
          || !(uint8_t)((ObjectClass *)this->ptr_0)->IsAlliedWithObjectHouse((int)v5)
          || !(uint8_t)House::IsHumanPlayer((House *)this->ptr_0)
          || v5->vt_slot_468()
          || !*(unsigned char *)(v5[328] + 5826) )
        {
          goto LABEL_106; /*0x51e959*/
        }
        if ( !(uint8_t)Audio::IsLoud(this->ptr_0) ) /*0x51e961*/
        {
          if ( this->Type->Deployer ) /*0x51e970*/
          {
            v25 = this->SequenceAnim[0]; /*0x51e97a*/
            if ( v25 == 27 || v25 == 28 || v25 == 29 || v25 == 30 ) /*0x51e992*/
              goto LABEL_106; /*0x51e992*/
          }
          v26 = (*((int (__thiscall **)(InfantryClass *, int, int *))this->ptr_0 + 158))(this, 15, v5) - 1; /*0x51e9a1*/
          if ( !v26 ) /*0x51e9a2*/
          {
            v7 = 3; /*0x51e9b5*/
            goto LABEL_106; /*0x51e9ba*/
          }
          if ( v26 != 9 ) /*0x51e9a7*/
            goto LABEL_106; /*0x51e9a7*/
        }
        v7 = 31; /*0x51e9bc*/
  LABEL_106:
        if ( (uint8_t)House::IsHumanPlayer((House *)this->ptr_0) /*0x51ea06*/
          && (this->Type->C4 || (uint8_t)TechnoTypeClass::HasVoiceResponse((int *)this, 14))
          && v7 == 5
          && v5->vt_slot_44() == 6
          && !v5->vt_slot_128() )
        {
          if ( v5 ) /*0x51ea12*/
          {
            if ( v5->vt_slot_44() == 6 ) /*0x51ea22*/
            {
              v27 = v5[328]; /*0x51ea28*/
              if ( *(unsigned char *)(v27 + 5495) ) /*0x51ea2e*/
              {
                if ( !*(unsigned char *)(v27 + 5889) ) /*0x51ea3c*/
                  return 16; /*0x51ea56*/
              }
            }
          }
          return 5; /*0x51eb21*/
        }
        ptr_0 = (int (__thiscall **)(InfantryClass *, int))this->FootClass; /*0x51ea59*/
        v29 = (*((int (__thiscall **)(InfantryClass *, int *))this->ptr_0 + 185))(this, v5); /*0x51ea5e*/
        v30 = *(unsigned int *)ptr_0[254](this, v29); /*0x51ea6d*/
        if ( v7 == 5 && v30 )
        {
          if ( *(unsigned char *)(v30 + 313) )
          {
            if ( !v5
              || v5->vt_slot_44() != 1
              || !*(v5->vt_slot_44() == 1 ? v5 + 185 : (int *)740) )
            {
              return 64; /*0x51eacf*/
            }
            return 7; /*0x51eac0*/
          }
          if ( *(unsigned char *)(v30 + 314) ) /*0x51ead2*/
          {
            if ( v5 ) /*0x51eade*/
            {
              if ( v5->vt_slot_44() == 6 ) /*0x51eaea*/
              {
                v31 = v5[328]; /*0x51eaec*/
                if ( *(unsigned char *)(v31 + 5495) ) /*0x51eaf2*/
                {
                  if ( !*(unsigned char *)(v31 + 5889) ) /*0x51eafc*/
                    return 71; /*0x51eb12*/
                }
              }
            }
            return 5; /*0x51eb04*/
          }
        }
        if ( (uint8_t)House::IsHumanPlayer((House *)this->ptr_0) && v7 == 5 && this->Type->Ivan ) /*0x51eb3e*/
        {
          if ( !*(unsigned char *)(v5->vt_slot_136() + 558) || v5[14] ) /*0x51eb5c*/
            return 54; /*0x51eb75*/
          else
            return 53; /*0x51eb66*/
        }
        if ( (uint8_t)House::IsHumanPlayer((House *)this->ptr_0) ) /*0x51eb87*/
        {
          v32 = this->Type; /*0x51eb94*/
          if ( v32->Deployer ) /*0x51eb9a*/
          {
            v33 = this->SequenceAnim[0]; /*0x51eba8*/
            if ( v33 == 27 || v33 == 28 || v33 == 29 || v33 == 30 ) /*0x51ebc0*/
            {
              switch ( v7 ) /*0x51ebc9*/
              {
                case 1: /*0x51ebc9*/
                  return 2; /*0x51ebd7*/
                case 5: /*0x51ebc9*/
                  if ( !v32->ptr_0 ) /*0x51ebdf*/
                    return 2; /*0x51ebdf*/
                  v34 = (*((int (__thiscall **)(InfantryClass *, unsigned int))this->ptr_0 + 185))(this, 0); /*0x51ebef*/
                  if ( !(*((uint8_t (__thiscall **)(InfantryClass *, int *, int))this->ptr_0 + 234))( /*0x51ebfb*/
                          this,
                          v5,
                          v34) )
                    return 2; /*0x51ec11*/
                  break;
                case 4: /*0x51ebc9*/
                  if ( !ScriptAction::SetField10((ScriptAction *)4) ) /*0x51ec1b*/
                    return 30; /*0x51ec30*/
                  if ( ((unsigned int *)this->Type)[0] > -1 ) /*0x51ec40*/
                    return 30; /*0x51ec4e*/
                  break;
              }
            }
          }
        }
        if ( (uint8_t)House::IsHumanPlayer((House *)this->ptr_0) )
        {
          if ( v7 == 4 ) /*0x51ec63*/
          {
            v35 = this->Type; /*0x51ec69*/
            if ( v35->Deployer && v35->ptr_0 > -1 && this->SequenceAnim[0] == 31 ) /*0x51ec89*/
              return 30; /*0x51ec97*/
            goto LABEL_163; /*0x51ec89*/
          }
        }
        else if ( v7 == 4 )
        {
  LABEL_163:
          if ( ScriptAction::SetField10((ScriptAction *)4) ) /*0x51eca4*/
          {
            if ( (uint8_t)House::IsHumanPlayer((House *)this->ptr_0) ) /*0x51ecb3*/
            {
              if ( *(unsigned int *)(*((int (__thiscall **)(InfantryClass *))this->ptr_0 + 252))(this) /*0x51ecdb*/
                && *(unsigned char *)(*(unsigned int *)(*((int (__thiscall **)(InfantryClass *))this->ptr_0 + 252))(this) + 336) )
              {
                v7 = 52; /*0x51ece5*/
              }
              else if ( !this->Type->Deployer ) /*0x51ecf2*/
              {
                v7 = 0; /*0x51ecfc*/
              }
            }
            else
            {
              v7 = 0; /*0x51ecbc*/
            }
          }
          else
          {
            v7 = 30; /*0x51ed00*/
          }
  LABEL_173:
          if ( (uint8_t)((ObjectClass *)this->ptr_0)->IsAlliedWithObjectHouse((int)v5) ) /*0x51ed17*/
          {
            if ( (uint8_t)House::IsHumanPlayer((House *)this->ptr_0) ) /*0x51ed2a*/
            {
              if ( AbstractClass::IsTechno((AbstractClass *)v5) ) /*0x51ed39*/
              {
                if ( !v5->vt_slot_468() /*0x51ed76*/
                  && !v5->vt_slot_472()
                  && v7 != 5
                  && v7 != 26 )
                {
                  v36 = v5->vt_slot_132(); /*0x51ed80*/
                  if ( v36 ) /*0x51ed88*/
                  {
                    if ( *(int *)(v36 + 1504) > 0 /*0x51eda0*/
                      && (*((uint8_t (__thiscall **)(InfantryClass *))this->ptr_0 + 40))(this) )
                    {
                      if ( (((unsigned int)(((unsigned int *)this->Type)[0]) >> 16) & 0xFF) ) /*0x51edb4*/
                      {
                        v7 = 31; /*0x51edbe*/
                      }
                      else
                      {
                        if ( !v5 ) /*0x51edc7*/
                          goto LABEL_193; /*0x51edc7*/
                        v37 = (v5[5] & 4) == 0; /*0x51edcf*/
                        a3 = ((a3) & 0xFFFFFF00u) | ((unsigned int)((v5[5] & 4) != 0) & 0xFFu); /*0x51edd2*/
                        if ( v37 ) /*0x51edd6*/
                          goto LABEL_193; /*0x51edd6*/
                        v38 = v5[373]; /*0x51edd8*/
                        if ( v38 ) /*0x51ede0*/
                        {
                          if ( !*(unsigned char *)(*(unsigned int *)(v38 + 36) + 164) ) /*0x51ede5*/
                            goto LABEL_192; /*0x51ede5*/
                        }
                        if ( !v5[413] ) /*0x51edef*/
                          sub_7DC720(-2147467261); /*0x51edfe*/
                        if ( (*(uint8_t (__stdcall **)(int))(*v5->u32_674 + 16))(v5[413]) ) /*0x51ee0c*/
                        {
  LABEL_192:
                          v7 = 31; /*0x51ee13*/
                        }
                        else
                        {
  LABEL_193:
                          v39 = (*((int (__thiscall **)(InfantryClass *, int, int *))this->ptr_0 + 158))(this, 15, v5) /*0x51ee27*/
                              - 1;
                          if ( v39 ) /*0x51ee28*/
                          {
                            if ( v39 == 9 ) /*0x51ee2d*/
                              v7 = 31; /*0x51ee2f*/
                          }
                          else
                          {
                            v7 = 3; /*0x51ee36*/
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
  LABEL_197:
          if ( (uint8_t)House::IsHumanPlayer((House *)this->ptr_0) && (v40 = this->Type, v40->Infiltrate) ) /*0x51ee54*/
          {
            if ( v7 == 5 ) /*0x51ee65*/
            {
              if ( !v40->Agent /*0x51eedf*/
                && !(uint8_t)((ObjectClass *)this->ptr_0)->IsAlliedWithObjectHouse((int)v5)
                && v5->vt_slot_44() == 6
                && *(unsigned char *)(v5[328] + 5490)
                || this->Type->Agent
                && !(uint8_t)((ObjectClass *)this->ptr_0)->IsAlliedWithObjectHouse((int)v5)
                && v5->vt_slot_44() == 6
                && *(unsigned char *)(v5[328] + 5494) )
              {
                v7 = 9; /*0x51eeef*/
                if ( v5->vt_slot_44() == 6 ) /*0x51ef00*/
                {
                  v5->vt_slot_72(); /*0x51ef0f*/
                  v41 = (int16_t *)(*((int (__thiscall **)(InfantryClass *, int **, int, unsigned int))this->ptr_0 + 112))( /*0x51ef58*/
                                     this,
                                     &a2,
                                     ((unsigned int *)this->Type)[0],
                                     (uint8_t)this->ptr_0);
                  TileIndex = MapClass::GetTileIndex((MapClass *)&DataGlobal_87F7E8, v41, (int)v58, v51); /*0x51ef64*/
                  v43 = v5[328]; /*0x51ef69*/
                  v58[0] = TileIndex; /*0x51ef71*/
                  a2 = (int *)(*(int (__thiscall **)(int, unsigned int))(*(unsigned int *)v43 + 144))(v43, 0); /*0x51ef7d*/
                  a3 = ((a3) & 0xFFFFFF00u) | ((unsigned int)(0) & 0xFFu); /*0x51ef81*/
  LABEL_210:
                  while ( (*(unsigned short *)a2 != 0x7FFF || *((unsigned short *)a2 + 1) != 0x7FFF) && !(unsigned char)a3 ) /*0x51efa3*/
                  {
                    v44 = a2++; /*0x51efb2*/
                    v55 = 0; /*0x51efbb*/
                    v45 = *(unsigned short *)v44 + v53; /*0x51efc7*/
                    v46 = v54 + *((unsigned short *)v44 + 1); /*0x51efca*/
                    while ( 1 ) /*0x51efd5*/
                    {
                      v47 = v55 & 7; /*0x51efd5*/
                      v56 = ((v56) & 0xFFFF0000u) | ((unsigned int)(v45 + (unsigned short)(g_DDrawSurfaceManager.scenario[v47 + 82])) & 0xFFFFu); /*0x51eff5*/
                      v48 = this->Type; /*0x51effa*/
                      v56 = ((v56) & 0xFFFFu) | (((unsigned int)(v46 + (unsigned short)((g_DDrawSurfaceManager.scenario[v47 + 82]) >> 16)) & 0xFFFFu) << 16); /*0x51f000*/
                      v57[0] = v56; /*0x51f009*/
                      v49 = MapClass::GetTileIndex((MapClass *)&DataGlobal_87F7E8, (int16_t *)v57, *&v48->MovementZone, 0); /*0x51f01e*/
                      if ( v49 == v57[1] ) /*0x51f027*/
                        break; /*0x51f027*/
                      if ( ++v55 >= 8 ) /*0x51f035*/
                      {
                        v7 = 9; /*0x51f037*/
                        goto LABEL_210; /*0x51f03b*/
                      }
                    }
                    v7 = 9; /*0x51f040*/
                    a3 = ((a3) & 0xFFFFFF00u) | ((unsigned int)(1) & 0xFFu); /*0x51f044*/
                  }
                }
                goto LABEL_220; /*0x51efa3*/
              }
              if ( !(*((uint8_t (__thiscall **)(InfantryClass *))this->ptr_0 + 171))(this) ) /*0x51f052*/
              {
                v7 = 0; /*0x51f05c*/
                goto LABEL_220; /*0x51f05c*/
              }
  LABEL_225:
              if ( !(*((uint8_t (__thiscall **)(InfantryClass *))this->ptr_0 + 171))(this) ) /*0x51f09e*/
                v7 = 59; /*0x51f0a8*/
              goto LABEL_220; /*0x51f0ad*/
            }
          }
          else if ( v7 == 5 ) /*0x51f098*/
          {
            goto LABEL_225; /*0x51f098*/
          }
          if ( v7 == 7
            && v5->vt_slot_44() == 6
            && (uint8_t)House::IsHumanPlayer((House *)this->ptr_0)
            && !v5->vt_slot_128()
            && *(unsigned char *)(v5[328] + 5805) )
          {
            return dword_A83D4C != (ObjectClass *)v5->vt_slot_60() ? 31 : 11;
          }
  LABEL_220:
          if ( !(uint8_t)House::IsHumanPlayer((House *)this->ptr_0) || v7 ) /*0x51f073*/
          {
            if ( v7 == 2 ) /*0x51f117*/
              goto LABEL_234; /*0x51f117*/
            if ( v7 == 5 && *(unsigned char *)(v5->vt_slot_136() + 563) ) /*0x51f16f*/
              return 2; /*0x51f179*/
          }
          else if ( (*((uint8_t (__thiscall **)(InfantryClass *))this->ptr_0 + 40))(this) ) /*0x51f07d*/
          {
            v7 = 2; /*0x51f08b*/
  LABEL_234:
            if ( v5->vt_slot_196() ) /*0x51f11d*/
            {
              if ( !v5->vt_slot_208(1) ) /*0x51f12d*/
              {
                v50 = v5->vt_slot_204(1); /*0x51f13d*/
                if ( (*(int (__thiscall **)(int))(*(unsigned int *)v50 + 44))(v50) == 21 ) /*0x51f14d*/
                  return 1; /*0x51f15d*/
              }
            }
          }
          return v7; /*0x51f17f*/
        }
        if ( v7 == 31 ) /*0x51ed0a*/
          goto LABEL_197; /*0x51ed0a*/
        goto LABEL_173; /*0x51ed0a*/
      }
      if ( !*(unsigned char *)(v5[328] + 5825) ) /*0x51e5ee*/
        goto LABEL_36; /*0x51e5ee*/
      BuildingClass::GetHealthRatio((BuildingClass *)this); /*0x51e5fa*/
      _EAX = *(unsigned int *)&g_RulesClass_Instance; /*0x51e5ff*/
      __asm /*0x51e604*/
      {
        fcomp qword ptr [eax+16F8h]
        fnstsw ax
      }
      if ( (_EAX & 0x100) != 0 ) /*0x51e60f*/
      {
        return 3; /*0x51e614*/
      }
      else
      {
  LABEL_36:
        BuildingClass::GetHealthRatio((BuildingClass *)v5); /*0x51e622*/
        _ECX = *(unsigned int *)&g_RulesClass_Instance; /*0x51e627*/
        __asm /*0x51e62d*/
        {
          fcomp qword ptr [ecx+16F8h]
          fnstsw ax
        }
        if ( (_AX & 0x4000) != 0 ) /*0x51e638*/
        {
          v16 = -(*(unsigned char *)(v5[328] + 5805) != 0); /*0x51e64c*/
          v16 = ((v16) & 0xFFFFFF00u) | ((unsigned int)(v16 & 0xEB) & 0xFFu); /*0x51e64e*/
          return v16 + 32; /*0x51e650*/
        }
        else
        {
          return 29; /*0x51e65c*/
        }
      }
    }
    return result; /*0x51e458*/

} // G42.37 split: global-scope class def
// 0x4dded0
int FootClass::GetActionOnObject()
{
  int v4; // ebx
  unsigned int *v5; // eax
  unsigned int v7[2]; // [esp+Ch] [ebp-18h] BYREF
  int GroundHeight; // [esp+14h] [ebp-10h]
  unsigned char v9[12]; // [esp+18h] [ebp-Ch] BYREF

  v4 = TechnoClass::HandleCursorClick((TechnoClass *)this, (unsigned char *)a2, a3); /*0x4ddee9*/
  v5 = (unsigned int *)(*(int (__thiscall **)(int, unsigned char *))(*(unsigned int *)a2 + 72))(a2, v9); /*0x4ddef2*/
  v7[0] = *v5; /*0x4ddef7*/
  v7[1] = v5[1]; /*0x4ddf03*/
  GroundHeight = v5[2]; /*0x4ddf0f*/
  GroundHeight = Cell::GetGroundHeight(v7); /*0x4ddf22*/
  if ( (Coord::To_Cell((Coord *)&DataGlobal_87F7E8, v7)->flags[0] & 0x100) != 0 ) /*0x4ddf34*/
    GroundHeight += (int)FootClass_Array.attachedTag; /*0x4ddf41*/
  if ( (uint8_t)Cell::IsPassable(v7) && v4 && !*(unsigned int *)&dword_A8B238 ) /*0x4ddf63*/
    return 2 - (*(unsigned char *)((*((int (__thiscall **)(FootClass *))this->ptr_0 + 33))(this) + 3213) != 0); /*0x4ddf7b*/
  else
    return v4; /*0x4ddf86*/
}
// 0x51FAF0
InfantryTypeClass* InfantryClass::GetTypePtr()
{
  return this->Type; /*0x51faf6*/
}
// 0x51f2c0
int InfantryClass::GetTooltipName()
{
  if ( this->Technician ) /*0x51f2c3*/
    return GetStringCSF((char *)&stru_825538.Name[6], 0, (const char *)&stru_825538.Volume, 4636); /*0x51f2de*/
  if ( !(*((uint8_t (__thiscall **)(InfantryClass *))this->ptr_0 + 49))(this) /*0x51f300*/
    || (uint8_t)HouseClass::IsAlliedWith((void *)this->owner, (void *)dword_A83D4C) )
  {
    return *&this->q060; /*0x51f321*/
  }
  return *(wchar_t **)((*((int (__thiscall **)(InfantryClass *, int))this->ptr_0 + 51))(this, 1) + 96); /*0x51f2e3*/
}
// 0x521d30
int InfantryClass::GetTransformMatrix()
{
  unsigned int *v3; // ecx
  unsigned char v5[12]; // [esp+Ch] [ebp-Ch] BYREF

  v3 = (unsigned int *)(*((int (__thiscall **)(InfantryClass *, unsigned char *, int, unsigned int, unsigned int, unsigned int))this->ptr_0 + 44))( /*0x521d5b*/
                   this,
                   v5,
                   a3,
                   0,
                   0,
                   0);
  *a2 = *v3; /*0x521d66*/
  a2[1] = v3[1]; /*0x521d6b*/
  a2[2] = v3[2]; /*0x521d73*/
  return a2; /*0x521d63*/
}
// 0x523250
int InfantryClass::ComputeTransform()
{
  TechnoClass *transporter; // eax
  int v8; // eax
  unsigned int *v9; // eax
  unsigned int *v10; // ecx
  unsigned int v12[3]; // [esp+10h] [ebp-Ch] BYREF

  if ( this->inOpenToppedTransport /*0x52327b*/
    && (transporter = this->transporter) != 0
    && (v8 = TechnoClass::IndexOf((TechnoClass *)transporter->passengers, (int)this)) != 0 )
  {
    v9 = (unsigned int *)(*((int (__thiscall **)(TechnoClass *, unsigned int *, int, unsigned int, unsigned int, unsigned int))this->transporter->ptr_0 /*0x5232a1*/
                    + 44))(
                     this->transporter,
                     v12,
                     -v8,
                     0,
                     0,
                     0);
  }
  else
  {
    v9 = TechnoClass::ComputeTransform((TechnoClass *)this, v12, a3, 0, 0, 0); /*0x5232c8*/
  }
  v10 = v9; /*0x5232cd*/
  *a2 = *v10; /*0x5232d8*/
  a2[1] = v10->ptr_4; /*0x5232dd*/
  a2[2] = v10->ptr_8; /*0x5232e5*/
  return a2; /*0x5232d5*/
}
// 0x701140
int InfantryClass::CheckHealthDiff()
{
  int result; // eax

  result = (*((int (__thiscall **)(TechnoClass *))this->ptr_0 + 11))(this); /*0x701145*/
  if ( result == 6 ) /*0x70114b*/
    return *(unsigned char *)((*((int (__thiscall **)(TechnoClass *))this->ptr_0 + 33))(this) + 3276) /*0x701183*/
        && this->health != *(unsigned int *)((*((int (__thiscall **)(TechnoClass *))this->ptr_0 + 34))(this) + 160);
  (*((unsigned char *)&(result))) = 0; /*0x70114d*/
  return result; /*0x70114f*/
}
// ============================================================
// Phase 3: Marking & Passability
// ============================================================

// 0x5217c0
int InfantryClass::MarkCellPassability(int* a2)
{
  char v3; // bp
  CellClass *v4; // esi
  int result; // eax

  v3 = Input::OffsetToDirection((Input *)a2); /*0x5217d7*/
  v4 = Coord::To_Cell((Coord *)&dword_87F7E8, a2); /*0x5217e4*/
  if ( (signed int)(dword_A8F234 + Cell::GetGroundHeight(a2)) <= a2[2] && (v4->flags & 0x100) != 0 ) /*0x521803*/
  {
    (*((unsigned char *)&(v4->altOccupationFlags))) |= 1 << v3; /*0x521813*/
    result = this->GetID(); /*0x52181d*/
    v4->altInfantryOwnerIndex = result; /*0x521820*/
  }
  else
  {
    (*((unsigned char *)&(v4->occupationFlags))) |= 1 << v3; /*0x521838*/
    result = this->GetID(); /*0x521842*/
    v4->infantryOwnerIndex = result; /*0x521845*/
  }
  return result; /*0x521823*/
}
// 0x521850
int InfantryClass::ClearCellPassability()
{
  char v1; // bl
  CellClass *v2; // esi
  int v3; // ecx
  int result; // eax

  v1 = Input::OffsetToDirection((Input *)this); /*0x521864*/
  v2 = Coord::To_Cell((Coord *)&DataGlobal_87F7E8, this); /*0x521871*/
  v3 = Cell::GetGroundHeight(this) + *(unsigned int *)&((unsigned int *)&stru_A8EB00)[1616]; /*0x52187e*/
  result = (int)this->ptr_8; /*0x521880*/
  if ( v3 > result ) /*0x521885*/
  {
    (*((unsigned char *)&(result))) = ~(1 << v1) & (*((unsigned char *)&(v2->occupationFlags))); /*0x5218c0*/
    (*((unsigned char *)&(v2->occupationFlags))) = result; /*0x5218c2*/
    if ( (result & 0x1C) == 0 ) /*0x5218ca*/
      v2->infantryOwnerIndex = -1; /*0x5218cc*/
  }
  else
  {
    (*((unsigned char *)&(result))) = ~(1 << v1) & (*((unsigned char *)&(v2->altOccupationFlags))); /*0x521897*/
    (*((unsigned char *)&(v2->altOccupationFlags))) = result; /*0x521899*/
    if ( (result & 0x1C) == 0 ) /*0x5218a1*/
      v2->altInfantryOwnerIndex = -1; /*0x5218a3*/
  }
  return result; /*0x5218aa*/
}
// ============================================================
// Phase 3: Capture & Misc
// ============================================================

// 0x522700
int InfantryClass::CaptureAttackerInfo()
{
  bool v3; // zf
  int v4; // eax

  if ( a2 && (*(int (__thiscall **)(int *))(*a2 + 44))(a2) == 15 ) /*0x522716*/
  {
    TechnoClass::ActivateEffect((TechnoClass *)this); /*0x52271b*/
    v3 = (*(uint8_t (__thiscall **)(int *))(*a2 + 196))(a2) == 0; /*0x52272a*/
    v4 = *a2; /*0x52272c*/
    if ( v3 ) /*0x52272e*/
    {
      this->disguiseAsType = (ObjectTypeClass *)v4->updateLayer(a2); /*0x52275f*/
      this->disguisedAsHouse = (HouseClass *)(*(int (__thiscall **)(int *))(*a2 + 60))(a2); /*0x52276c*/
    }
    else
    {
      this->disguiseAsType = (ObjectTypeClass *)v4->LandingCheckStub(a2, 1); /*0x52273a*/
      this->disguisedAsHouse = (HouseClass *)(*(int (__thiscall **)(int *, int))(*a2 + 208))(a2, 1); /*0x52274c*/
    }
  }
}
// 0x522780
int InfantryClass::InitProductionLimits()
{
  int result; // eax
  HouseClass *owner; // eax
  int sideIndex; // eax

  result = (int)this->Type; /*0x522780*/
  if ( result->Spawns ) /*0x522786*/
  {
    owner = this->owner; /*0x522790*/
    this->isDisguisedFlag = 1; /*0x522796*/
    this->owner = owner; /*0x52279d*/
    sideIndex = owner->sideIndex; /*0x5227a3*/
    if ( sideIndex ) /*0x5227ab*/
    {
      if ( sideIndex == 1 ) /*0x5227c9*/
        result = *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 3420); /*0x5227cb*/
      else
        result = *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 3424); /*0x5227d8*/
      this->disguiseAsType = (ObjectTypeClass *)result; /*0x5227d1*/
    }
    else
    {
      result = *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 3416); /*0x5227b3*/
      this->disguiseAsType = (ObjectTypeClass *)result; /*0x5227b9*/
    }
  }
  else
  {
    this->isDisguisedFlag = 0; /*0x5227e5*/
  }
  return result; /*0x5227bf*/
}
// 0x522640
int InfantryClass::GetProductionLimit()
{
  int result; // eax
  int v4; // eax

  if ( (uint8_t)HouseClass::IsAlliedWith((void *)this->owner, (void *)dword_A83D4C) && !a2 ) /*0x52265e*/
    return (int)this->Type; /*0x522667*/
  result = (int)this->disguiseAsType; /*0x52266a*/
  if ( !result ) /*0x522672*/
  {
    if ( !dword_A83D4C ) /*0x52267b*/
      return *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 3424); /*0x52267b*/
    v4 = *&dword_A83D4C->sideIndex; /*0x52267d*/
    if ( !v4 ) /*0x522685*/
      return *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 3416); /*0x522694*/
    if ( v4 == 1 ) /*0x52269a*/
      return *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 3420); /*0x5226a3*/
    else
      return *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 3424); /*0x5226b1*/
  }
  return result; /*0x522666*/
}
// 0x5226c0
int InfantryClass::GetProductionHouse()
{
  void *result; // eax

  if ( (uint8_t)HouseClass::IsAlliedWith((HouseClass *)this->ptr_0.ptr_0.owner) && !a2 ) /*0x5226de*/
    return (void *)this->ptr_0.ptr_0.owner; /*0x5226e0*/
  result = (void *)this->ptr_0.ptr_0.disguisedAsHouse; /*0x5226ea*/
  if ( !result ) /*0x5226f2*/
    return dword_A83D4C; /*0x5226f4*/
  return result; /*0x5226e6*/
}
// 0x521b20
int InfantryClass::ResetMissionIfDone()
{
  int result; // eax

  result = this->SequenceAnim[0]; /*0x521b20*/
  if ( result == 6 || result == 3 || result == 17 ) /*0x521b33*/
    this->SequenceAnim[0] = -1; /*0x521b35*/
  return result; /*0x521b3f*/
}
// 0x521b40
int InfantryClass::ProcessMission16()
{
  int result; // eax
  void *ptr_0; // eax

  (*((unsigned char *)&(result))) = this->ShouldDeploy; /*0x521b40*/
  if ( (unsigned char)result ) /*0x521b48*/
  {
    ptr_0 = this->ptr_0; /*0x521b4a*/
    this->ShouldDeploy = 0; /*0x521b52*/
    return (*((int (__stdcall **)(int, unsigned int, unsigned int))ptr_0 + 342))(27, 0, 0); /*0x521b59*/
  }
  return result; /*0x521b5f*/
}
// 0x521c60
int InfantryClass::SetMissionOnCondition()
{
  if ( a2 == 1 ) /*0x521c65*/
    return (*((int (__thiscall **)(InfantryClass *, int, unsigned int, unsigned int))this->ptr_0 + 342))(this, 10, 0, 0); /*0x521c80*/
  else
    return (*((int (__thiscall **)(InfantryClass *, int, unsigned int, unsigned int))this->ptr_0 + 342))(this, 9, 0, 0); /*0x521c6f*/
}
// 0x521c10
int InfantryClass::InitVoiceResponseTimer()
{
  int result; // eax

  result = (int)this->Type; /*0x521c13*/
  if ( !result->Fearless_d ) /*0x521c19*/
  {
    result = TechnoTypeClass::HasVoiceResponse((int *)this, 13); /*0x521c27*/
    if ( !(unsigned char)result ) /*0x521c2e*/
      this->PanicDurationLeft = 300; /*0x521c30*/
  }
  return result; /*0x521c3a*/
}
// 0x521c40
int InfantryClass::ResetReloadIfNeeded()
{
  int result; // eax

  result = (int)this->Type; /*0x521c40*/
  if ( !result->Fearless_d ) /*0x521c46*/
    this->PanicDurationLeft = 0; /*0x521c50*/
  return result; /*0x521c5a*/
}
// 0x5220f0
void InfantryClass::SetPermanentBerzerk()
{
  this->PermanentBerzerk = 1; /*0x5220f0*/
}
/* ASM:
mov     byte ptr [ecx+6D8h], 1
retn
*/

// 0x523340
int InfantryClass::StubReturn15()
{
  return 15; /*0x523345*/
}
// 0x5232f0
int InfantryClass::StubReturn1776()
{
  return 1776; /*0x5232f5*/
}
// 0x70e1e0
int InfantryClass::ProcessIdle()
{
  HouseClass *v3; // eax
  bool v4; // al

  v3 = (HouseClass *)(*((int (__thiscall **)(InfantryClass *))this->ptr_0 + 33))(this); /*0x70e1f1*/
  v4 = (uint8_t)HouseClass::HasPower(v3) /*0x70e214*/
    && a2 < *(unsigned int *)((*((int (__thiscall **)(InfantryClass *))this->ptr_0 + 33))(this) + 2060);
  return a2 >= -1 && (a2 < 2 || v4); /*0x70e227*/
}
// 0x703230
int InfantryClass::RegisterKill()
{
  int v2; // eax
  int v3; // ebp
  TeamClass *attachedTag; // ecx
  TeamClass *v5; // ecx
  TeamClass *v6; // ecx
  TeamClass *v7; // ecx
  TeamClass *v8; // ecx
  int result; // eax
  int v10; // eax
  int v11; // eax
  int v12; // [esp+Ch] [ebp-4h]
  Object *v13; // [esp+14h] [ebp+4h]

  v12 = 0; /*0x703236*/
  v2 = (*((int (__thiscall **)(TechnoClass *))this->ptr_0 + 33))(this); /*0x703240*/
  v3 = (*(int (__thiscall **)(int, HouseClass *))(*(unsigned int *)v2 + 132))(v2, this->owner); /*0x70325b*/
  if ( this->isAliveFlag ) /*0x70325d*/
  {
    attachedTag = (TeamClass *)this->attachedTag; /*0x703267*/
    if ( attachedTag ) /*0x70326c*/
    {
      if ( v13 ) /*0x703270*/
        TeamClass::Update_0(attachedTag, 6, (int)this, *(int *)&g_BuildingLoadQueue_Array.ImageFile[24], 0, 0); /*0x703280*/
    }
  }
  if ( this->isAliveFlag ) /*0x703285*/
  {
    v5 = (TeamClass *)this->attachedTag; /*0x703293*/
    if ( v5 && v13 ) /*0x70329c*/
      TeamClass::Update_0(v5, 4, (int)this, *(int *)&g_BuildingLoadQueue_Array.ImageFile[24], 0, 0); /*0x7032ab*/
    if ( this->isAliveFlag && (*((int (__thiscall **)(TechnoClass *))this->ptr_0 + 11))(this) != 1 && this->isAliveFlag ) /*0x7032c6*/
    {
      v6 = (TeamClass *)this->attachedTag; /*0x7032d0*/
      if ( v6 && v13 ) /*0x7032d9*/
        TeamClass::Update_0(v6, 7, (int)this, *(int *)&g_BuildingLoadQueue_Array.ImageFile[24], 0, 0); /*0x7032e8*/
      if ( this->isAliveFlag ) /*0x7032ed*/
      {
        v7 = (TeamClass *)this->attachedTag; /*0x7032f7*/
        if ( v7 ) /*0x7032fc*/
          TeamClass::Update_0(v7, 48, (int)this, *(int *)&g_BuildingLoadQueue_Array.ImageFile[24], 0, 0); /*0x70330c*/
        if ( this->isAliveFlag ) /*0x703311*/
        {
          v8 = (TeamClass *)this->attachedTag; /*0x70331b*/
          if ( v8 ) /*0x703320*/
            TeamClass::Update_0(v8, 29, (int)this, *(int *)&g_BuildingLoadQueue_Array.ImageFile[24], 0, 0); /*0x70332f*/
        }
      }
    }
  }
  if ( v13 ) /*0x703336*/
  {
    if ( (uint8_t)Object::IsAlliedWithObjectHouse(v13, (int)this) ) /*0x70333c*/
    {
      v3 = 0; /*0x703345*/
    }
    else if ( (uint8_t)Audio::IsMediumVolume(this->veterancy) ) /*0x703351*/
    {
      v3 *= 2; /*0x70335a*/
    }
    else if ( (uint8_t)Audio::IsLoud(this->veterancy) ) /*0x703360*/
    {
      v3 *= 3; /*0x703369*/
    }
    this->owner->HouseClass_field_548C = (int)v13->Object_field_0x30; /*0x703377*/
    v13[32].Object_field_0xE8 = (char *)v13[32].Object_field_0xE8 + v3; /*0x703385*/
  }
  result = (*((int (__thiscall **)(TechnoClass *))this->ptr_0 + 11))(this) - 1; /*0x703392*/
  switch ( result ) /*0x7033a4*/
  {
    case 0: /*0x7033a4*/
      goto LABEL_45;
    case 1: /*0x7033a4*/
      if ( !v13 ) /*0x703447*/
        goto LABEL_49; /*0x703447*/
      if ( !*(unsigned char *)((*((int (__thiscall **)(TechnoClass *))this->ptr_0 + 33))(this) + 3231) ) /*0x703457*/
      {
        HouseClass::IncrementStat((HouseClass *)&v13[13].__pad_EC[60], *(unsigned int *)(this->SequenceAnim + 3576)); /*0x703474*/
        v12 = 1; /*0x703479*/
      }
  LABEL_41:
      if ( v13 ) /*0x703483*/
      {
        if ( !v12 && !*(unsigned char *)((*((int (__thiscall **)(TechnoClass *))this->ptr_0 + 33))(this) + 3231) ) /*0x703497*/
        {
          HouseClass::IncrementStat((HouseClass *)&v13[16].__pad_140[16], *(unsigned int *)(this->airstrikeTimer + 3576)); /*0x7034b4*/
          v12 = 1; /*0x7034b9*/
        }
  LABEL_45:
        if ( v13 && !v12 && !*(unsigned char *)((*((int (__thiscall **)(TechnoClass *))this->ptr_0 + 33))(this) + 3231) ) /*0x7034d7*/
          HouseClass::IncrementStat((HouseClass *)&v13[19].__pad_140[56], *(unsigned int *)(this->SequenceAnim + 3576)); /*0x7034f4*/
      }
  LABEL_49:
      ++this->owner->killedBuildingsOfHouses[0]; /*0x7034f9*/
      if ( v13 ) /*0x70350e*/
      {
        if ( !*(unsigned char *)((*((int (__thiscall **)(TechnoClass *))this->ptr_0 + 33))(this) + 3231) ) /*0x70351a*/
        {
          v11 = (*((int (__thiscall **)(TechnoClass *))this->ptr_0 + 14))(this); /*0x703528*/
          ++*(unsigned int *)&v13[31].__pad_140[4 * v11 + 324]; /*0x70353a*/
        }
      }
      result = RadarClass::IsActiveMode((RadarClass *)&DataGlobal_87F7E8); /*0x703541*/
      if ( (unsigned char)result ) /*0x703548*/
        return RadarClass::SetFlag((RadarClass *)&DataGlobal_87F7E8, 0); /*0x70354a*/
      return result;
    case 5: /*0x7033a4*/
      result = (*((int (__thiscall **)(TechnoClass *))this->ptr_0 + 33))(this); /*0x7033af*/
      if ( !result->u8_232 ) /*0x7033b5*/
      {
        if ( this->FootClass_field_53C != -1 ) /*0x7033ca*/
          ++*(unsigned int *)this->owner->__pad_5488; /*0x7033d2*/
        if ( v13 && !*(unsigned char *)((*((int (__thiscall **)(TechnoClass *))this->ptr_0 + 33))(this) + 3231) ) /*0x7033e6*/
        {
          HouseClass::IncrementStat((HouseClass *)&v13[22].__pad_140[96], *(unsigned int *)(this->gattlingValue + 3576)); /*0x703403*/
          v10 = (*((int (__thiscall **)(TechnoClass *))this->ptr_0 + 14))(this); /*0x70340c*/
          ++*(unsigned int *)&v13[32].__pad_38[4 * v10]; /*0x70341e*/
        }
        result = RadarClass::IsActiveMode((RadarClass *)&DataGlobal_87F7E8); /*0x703425*/
        if ( (unsigned char)result ) /*0x70342c*/
          return RadarClass::SetFlag((RadarClass *)&DataGlobal_87F7E8, 0); /*0x70342c*/
      }
      return result; /*0x70342c*/
    case 14: /*0x7033a4*/
      goto LABEL_41;
    default:
      return result;
  }
}
// 0x70d7a0
int InfantryClass::ReleaseInfiltrators()
{
  int result; // eax
  ParticleSystemClass *damageParticles; // ecx

  BuildingClass::GetHealthRatio((BuildingClass *)this); /*0x70d7a3*/
  result = *(unsigned int *)&g_RulesClass_Instance; /*0x70d7a8*/
  __asm /*0x70d7ad*/
  {
    fcomp qword ptr [eax+1700h]
    fnstsw ax
  }
  if ( (result & 0x4100) == 0 /*0x70d7c7*/
    || (result = (*((int (__thiscall **)(InfantryClass *))this->ptr_0 + 114))(this), result < -10) )
  {
    damageParticles = this->damageParticles; /*0x70d7c9*/
    if ( damageParticles ) /*0x70d7d1*/
      return (*((int (__thiscall **)(ParticleSystemClass *))damageParticles->ptr_0 + 62))(damageParticles); /*0x70d7d5*/
  }
  return result; /*0x70d7db*/
}
// 0x522e70
int InfantryClass::ProcessTiberiumHarvest()
{
  double v1; // st7
  int (__thiscall **ptr_0)(InfantryClass *); // edx
  Cell *v5; // ebx
  int v7; // ebp
  int v11; // eax
  float v12; // [esp+Ch] [ebp-1Ch]
  int v15; // [esp+24h] [ebp-4h]

  ptr_0 = (int (__thiscall **)(InfantryClass *))this->ptr_0; /*0x522e7b*/
  if ( this->Type->Storage ) /*0x522e7d*/
  {
    v5 = ptr_0->airstrikeTintTimer_d(this); /*0x522eb4*/
    if ( !(uint8_t)Cell::IsBridge2(v5) ) /*0x522eb8*/
      goto LABEL_13; /*0x522eb8*/
    (*((void (__thiscall **)(InfantryClass *))this->ptr_0 + 173))(this); /*0x522ec9*/
    __asm /*0x522ecf*/
    {
      fcomp ds:dbl_7E1718
      fnstsw ax
    }
    if ( (_AX & 0x4000) != 0 ) /*0x522eda*/
    {
  LABEL_13:
      (*((void (__thiscall **)(InfantryClass *, unsigned int, unsigned int, unsigned int))this->ptr_0 + 342))(this, 0, 0, 0); /*0x522f98*/
      (*((void (__thiscall **)(InfantryClass *, int, unsigned int))this->ptr_0 + 122))(this, 5, 0); /*0x522fa6*/
      return 1; /*0x522fad*/
    }
    else
    {
      if ( this->SequenceAnim[0] != 38 ) /*0x522ee7*/
        (*((void (__thiscall **)(InfantryClass *, int, unsigned int, unsigned int))this->ptr_0 + 342))(this, 38, 0, 0); /*0x522ef3*/
      v7 = BuildingClass::FindByCellHash((BuildingClass *)v5); /*0x522f02*/
      _EAX = this->Type; /*0x522f04*/
      __asm { fild dword ptr [eax+800h] } /*0x522f10*/
      __asm { fstp [esp+14h+var_4] }
      Float4::Sum(&this->isAliveFlag); /*0x522f1c*/
      __asm /*0x522f21*/
      {
        fsubr [esp+14h+var_4]
        fcomp ds:flt_7E2AC8
        fnstsw ax
      }
      if ( (_AX & 0x4100) != 0 ) /*0x522f30*/
      {
        _ECX = this->Type; /*0x522f3a*/
        __asm { fild dword ptr [ecx+800h] } /*0x522f40*/
        __asm { fstp [esp+14h+var_4] }
        Float4::Sum(&this->isAliveFlag); /*0x522f4c*/
        __asm { fsubr [esp+14h+var_4] } /*0x522f51*/
      }
      else
      {
        __asm { fld ds:flt_7E2AC8 } /*0x522f32*/
      }
      (*((unsigned short *)&(v11))) = Math::RoundToInt(v1); /*0x522f55*/
      v15 = CellClass::ReduceTiberium(&v5->__pad_000, v11); /*0x522f64*/
      if ( v15 > 0 ) /*0x522f68*/
      {
        __asm { fild [esp+14h+var_4] } /*0x522f6a*/
        __asm { fstp [esp+1Ch+var_1C] } /*; float*/
        Float::Accumulate(&this->isAliveFlag, v12, v7); /*0x522f75*/
        __asm { fstp st } /*0x522f7a*/
      }
      return this->Type->HarvestRate; /*0x522f85*/
    }
  }
  else
  {
    ((void (__thiscall *)(InfantryClass *, unsigned int, unsigned int, unsigned int))ptr_0[342])(this, 0, 0, 0); /*0x522e8f*/
    (*((void (__thiscall **)(InfantryClass *, int, unsigned int))this->ptr_0 + 122))(this, 5, 0); /*0x522e9d*/
    return 1; /*0x522ea4*/
  }
}
// 0x519630
int InfantryClass::RepairBridge()
{
    CellClass *v4; // edi
    double v5; // st7
    Cell *location; // ebp
    int Type; // eax
    int movementDestination; // ecx
    BuildingClass *v10; // edi
    int ptr_0; // ebx
    int v12; // eax
    TeamClass *attachedTag; // ecx
    BuildingClass *v14; // eax
    TeamClass *v16; // ecx
    int v17; // edx
    int v18; // edi
    unsigned int v19; // edx
    int v20; // eax
    int v21; // ecx
    int v22; // eax
    int v23; // edx
    int v24; // edi
    unsigned int v25; // eax
    int v26; // eax
    TeamClass *v27; // ecx
    unsigned int *v28; // eax
    unsigned char *v31; // ecx
    ObjectClass *v32; // edi
    unsigned short *v33; // ebx
    unsigned short *v34; // eax
    TeamClass *v35; // ecx
    int v36; // edx
    TechnoClass *v37; // ecx
    TeamClass *v38; // ecx
    int *v39; // eax
    int v40; // ecx
    int v41; // ebx
    int v42; // eax
    int v43; // edi
    int v44; // ebx
    unsigned short *v45; // eax
    BuildingClass *v46; // eax
    TeamClass *v48; // ecx
    int v49; // eax
    int64_t v50; // rax
    int v51; // ebx
    unsigned short *v52; // eax
    int v53; // ebp
    unsigned short *v54; // eax
    int v55; // eax
    int16_t *v56; // eax
    int v57; // eax
    int i; // ebx
    char v59; // bl
    int v64; // eax
    CellClass *v65; // edx
    int v66; // eax
    int v70; // eax
    TeamClass *v71; // ecx
    TechnoClass *v72; // ecx
    int v73; // eax
    int v74; // ebx
    int v75; // eax
    CellClass *v76; // eax
    CellClass *v77; // eax
    unsigned int *Building; // edi
    PlacementList *v79; // eax
    Cell *v80; // eax
    unsigned int *v81; // eax
    Cell *v82; // eax
    PlacementList *v83; // eax
    CellClass *v84; // eax
    int v85; // ecx
    unsigned int *v86; // ebx
    unsigned int *v87; // eax
    CellClass *v88; // ebp
    unsigned int *v89; // eax
    TeamClass *v90; // ecx
    Cell *v91; // eax
    int mindControlledBy; // eax
    unsigned int *v93; // eax
    int v94; // eax
    unsigned short *v95; // ebx
    unsigned short *v96; // eax
    int v97; // eax
    unsigned int *v98; // eax
    TeamClass *v100; // ecx
    int v101; // eax
    int v102; // ebx
    int v103; // eax
    int v105; // ebx
    int v106; // eax
    int v107; // edx
    int v108; // kr00_4
    double v109; // st7
    int v112; // eax
    int v114; // eax
    int v115; // ebx
    int v116; // eax
    unsigned int *v117; // eax
    int *v118; // ebx
    unsigned int *Value; // eax
    int v120; // edx
    unsigned int v121; // eax
    int v122; // edi
    int v123; // ecx
    int v124; // eax
    int v125; // eax
    int v126; // edx
    int v127; // ecx
    unsigned int *v128; // eax
    int v129; // eax
    int lastSightRange; // ecx
    int v131; // ecx
    int v132; // edx
    int landType; // ebx
    int v134; // edx
    char v135; // [esp+0h] [ebp-54h]
    char v136; // [esp+0h] [ebp-54h]
    char v137; // [esp+0h] [ebp-54h]
    char v138; // [esp+0h] [ebp-54h]
    unsigned int *v139; // [esp+4h] [ebp-50h]
    int v140; // [esp+8h] [ebp-4Ch]
    unsigned int *v141; // [esp+Ch] [ebp-48h]
    Cell *v142; // [esp+18h] [ebp-3Ch]
    int v143; // [esp+18h] [ebp-3Ch]
    int v144; // [esp+1Ch] [ebp-38h]
    int v145; // [esp+20h] [ebp-34h]
    int16_t v144[2]; // [esp+24h] [ebp-30h] BYREF
    int16_t v147[2]; // [esp+28h] [ebp-2Ch] BYREF
    int v148; // [esp+2Ch] [ebp-28h] BYREF
    double v149; // [esp+30h] [ebp-24h] BYREF
    int v150; // [esp+38h] [ebp-1Ch]
    int q000; // [esp+3Ch] [ebp-18h] BYREF
    int q004; // [esp+40h] [ebp-14h]
    int u32_8; // [esp+44h] [ebp-10h]
    int v154; // [esp+48h] [ebp-Ch] BYREF
    int v155; // [esp+4Ch] [ebp-8h]
    int v156; // [esp+50h] [ebp-4h]

    location = (Cell *)this->location; /*0x519639*/
    q000 = this->location[0]; /*0x519643*/
    q004 = this->location[1]; /*0x519654*/
    u32_8 = this->location[2]; /*0x51965b*/
    v142 = (Cell *)Coord::To_Cell((Coord *)&dword_87F7E8, &q000); /*0x519664*/
    if ( p_Cell_field_0x0 != 2 ) /*0x51966f*/
    {
  LABEL_216:
      if ( this->isAliveFlag[0] ) /*0x51a9eb*/
        FootClass::UpdateAI((FootClass *)p_Cell_field_0x0, (int)location, (int)v4, v5, (int)v139); /*0x51a9fc*/
      return; /*0x51a9fc*/
    }
    if ( (*(int (__thiscall **)(InfantryClass *))((char *)this->ptr_0 + 388))(this) == 8 ) /*0x519682*/
    {
      Type = this->Type; /*0x519688*/
      if ( *(unsigned char *)(Type + 3765) || Type->Occupier_d ) /*0x519698*/
      {
        movementDestination = this->movementDestination; /*0x5196a6*/
        if ( movementDestination ) /*0x5196ae*/
        {
          if ( (*(int (__thiscall **)(int))(*(unsigned int *)movementDestination + 44))(movementDestination) == 6 ) /*0x5196bc*/
          {
            v10 = (BuildingClass *)this->movementDestination; /*0x5196c2*/
            if ( v10 == (BuildingClass *)Cell::IsBridge(v142) ) /*0x5196cf*/
            {
              if ( (uint8_t)BuildingClass::CanRepair(v10, (int)this) ) /*0x5196d4*/
              {
                attachedTag = (TeamClass *)v10->attachedTag; /*0x519710*/
                if ( attachedTag ) /*0x519715*/
                  TeamClass::Update_0(attachedTag, 1, (int)this, dword_A8F1E0, 0, 0); /*0x519725*/
                TechnoClass::GarrisonBuilding(this, v10); /*0x51972d*/
              }
              else
              {
                (*(void (__thiscall **)(InfantryClass *, unsigned int, int))((char *)this->ptr_0 + 1152))(this, 0, 1); /*0x5196e5*/
                ptr_0 = this->ptr_0; /*0x5196ed*/
                v12 = v10->GetExitCoords(&v154, 1, 1); /*0x5196fa*/
                ptr_0->FindMoveTarget(this, v12); /*0x519700*/
              }
              return; /*0x51970d*/
            }
          }
        }
      }
    }
    if ( (*(int (__thiscall **)(InfantryClass *))((char *)this->ptr_0 + 388))(this) == 9 ) /*0x519749*/
    {
      v14 = (BuildingClass *)Cell::IsBridge(v142); /*0x519753*/
      v14 = v14; /*0x519758*/
      if ( v14 ) /*0x51975c*/
      {
        if ( v14 == (BuildingClass *)this->movementDestination || v14 == (BuildingClass *)this->target ) /*0x519770*/
        {
          v16 = (TeamClass *)v14->attachedTag; /*0x519776*/
          if ( v16 ) /*0x51977b*/
            TeamClass::Update_0(v16, 1, (int)this, dword_A8F1E0, 0, 0); /*0x51978b*/
          if ( *(int *)((*(int (__thiscall **)(InfantryClass *))((char *)this->ptr_0 + 132))(this) + 1228) > 0 /*0x5197af*/
            && (uint8_t)House::IsHumanPlayer((House *)this->owner) )
          {
            q000 = location->__pad_000; /*0x5197bc*/
            v17 = this->ptr_0; /*0x5197c0*/
            q004 = location->q004; /*0x5197c5*/
            u32_8 = location->u32_8; /*0x5197cc*/
            v18 = v17->Vt34Thunk(this) + 1212; /*0x5197df*/
            v19 = (unsigned int)Random::State(&Randomizer_Global) % *(unsigned int *)(v18 + 16); /*0x5197f0*/
            v20 = *(unsigned int *)(v18 + 4); /*0x5197f3*/
            p_Cell_field_0x0 = (CellClass *)&q000; /*0x5197f6*/
            StartAudioControllerAt(*(unsigned int *)(v20 + 4 * v19), &q000, 0); /*0x519803*/
          }
          if ( *(int *)((*(int (__thiscall **)(InfantryClass *))((char *)this->ptr_0 + 132))(this) + 1312) > 0 ) /*0x51981f*/
          {
            v21 = location->__pad_000; /*0x519824*/
            v22 = location->u32_8; /*0x519827*/
            q004 = location->q004; /*0x51982a*/
            v23 = this->ptr_0; /*0x51982e*/
            q000 = v21; /*0x519830*/
            u32_8 = v22; /*0x519836*/
            v24 = v23->Vt34Thunk(this) + 1296; /*0x519847*/
            v25 = Random::State(&Randomizer_Global); /*0x51984d*/
            StartAudioControllerAt( /*0x519865*/
              *(unsigned int *)(*(unsigned int *)(v24 + 4) + 4 * (v25 % *(unsigned int *)(v24 + 16))),
              &q000,
              0);
          }
          v26 = (*(int (__thiscall **)(InfantryClass *))((char *)this->ptr_0 + 700))(this); /*0x51986e*/
          HouseClass::AddPower((HouseClass *)v14->owner, v26); /*0x51987b*/
          v27 = (TeamClass *)this->attachedTag; /*0x519880*/
          if ( v27 ) /*0x519885*/
            TeamClass::Update_0(v27, 48, (int)this, dword_A8F1E0, 0, 0); /*0x519894*/
          if ( v14->Type->Grinding ) /*0x51989f*/
          {
            v28 = (unsigned int *)(*(int (__thiscall **)(InfantryClass *, int *))((char *)this->ptr_0 + 72))(this, &v154); /*0x5198b8*/
            StartAudioControllerAt(*&dword_8871E0->q268, v28, 0); /*0x5198c9*/
            if ( v14->Anims[3] ) /*0x5198ce*/
            {
              BuildingClass::ClearAnims(v14, 3); /*0x5198e0*/
              BuildingClass::GetHealthRatio(v14); /*0x5198e7*/
              _EDX = dword_8871E0; /*0x5198ec*/
              __asm /*0x5198f2*/
              {
                fcomp qword ptr [edx+1700h]
                fnstsw ax
              }
              if ( (_AX & 0x4100) != 0 ) /*0x5198fd*/
                BuildingClass::PlayUpgradeAnim(v14, 10, 1, 0, 0); /*0x51990d*/
              else
                BuildingClass::PlayUpgradeAnim(v14, 10, 0, 0, 0); /*0x51992f*/
              (*(void (__thiscall **)(InfantryClass *))((char *)this->ptr_0 + 248))(this); /*0x519916*/
              return; /*0x519923*/
            }
          }
  LABEL_114:
          (*(void (__thiscall **)(InfantryClass *))((char *)this->ptr_0 + 248))(this); /*0x51a02a*/
          return; /*0x51a03b*/
        }
      }
    }
    if ( (*(int (__thiscall **)(InfantryClass *))((char *)this->ptr_0 + 388))(this) == 8 /*0x519973*/
      || (*(int (__thiscall **)(InfantryClass *))((char *)this->ptr_0 + 388))(this) == 11
      || (*(int (__thiscall **)(InfantryClass *))((char *)this->ptr_0 + 388))(this) == 25 )
    {
      v31 = (unsigned char *)this->movementDestination; /*0x519979*/
      if ( v31 ) /*0x519981*/
      {
        if ( (v31[20] & 1) != 0 ) /*0x519990*/
        {
          if ( (*(uint8_t (__thiscall **)(unsigned char *))(*(unsigned int *)v31 + 128))(v31) ) /*0x519998*/
          {
            v32 = (ObjectClass *)this->movementDestination; /*0x5199a6*/
            if ( v32 ) /*0x5199ae*/
            {
              if ( v32->getAltitude(this->movementDestination) == 6 ) /*0x5199be*/
              {
                v33 = (unsigned short *)v32->GetCellCoords_Alt(v147); /*0x5199d5*/
                v34 = (unsigned short *)(*(int (__thiscall **)(InfantryClass *, int16_t *))((char *)this->ptr_0 + 440))(this, v144); /*0x5199de*/
                if ( *v34 == *v33 && v34[1] == v33[1] ) /*0x5199f8*/
                {
                  v35 = (TeamClass *)v32->attachedTag; /*0x5199fa*/
                  if ( v35 ) /*0x5199ff*/
                    TeamClass::Update_0(v35, 1, (int)this, dword_A8F1E0, 0, 0); /*0x519a0e*/
                  v32->Destroy2(0); /*0x519a19*/
                  v32->vt_slot_980(this->owner, 1); /*0x519a2c*/
                  v36 = v32->ptr_0; /*0x519a40*/
                  v32[4].parachute = this->Type->ArrayIndex; /*0x519a42*/
                  v36->vt_slot_736(v32); /*0x519a48*/
                  v37 = (TechnoClass *)this->attachedTag; /*0x519a4e*/
                  if ( v37 && (uint8_t)TechnoClass::HasAnyMission(v37) ) /*0x519a55*/
                    ObjectClass::SetReference(v32, this->attachedTag); /*0x519a64*/
                  v38 = (TeamClass *)this->attachedTag; /*0x519a69*/
                  if ( !v38 ) /*0x519a6e*/
                    goto LABEL_114; /*0x519a6e*/
                  goto LABEL_113; /*0x519a6e*/
                }
                if ( !this->locomotor ) /*0x519a79*/
                  sub_7DC720(-2147467261); /*0x519a88*/
                v39 = (int *)(*(int (__stdcall **)(int, int *))(*(unsigned int *)this->locomotor + 20))(this->locomotor, &v154); /*0x519a9b*/
                v40 = *v39; /*0x519a9e*/
                v41 = v39[1]; /*0x519aa6*/
                v42 = v39[2]; /*0x519aa9*/
                if ( v40 == dword_A8F200 && v41 == dword_A8F204 && v42 == dword_A8F208 /*0x519af8*/
                  || (v43 = v40 / 256,
                      v44 = v41 / 256,
                      v45 = (unsigned short *)(*(int (__thiscall **)(InfantryClass *, int16_t *))((char *)this->ptr_0 + 440))(this, v147),
                      *v45 == (unsigned short)v43)
                  && v45[1] == (unsigned short)v44 )
                {
                  (*(void (__thiscall **)(InfantryClass *, int, int))((char *)this->ptr_0 + 1152))( /*0x519b07*/
                    this,
                    this->movementDestination,
                    1);
                  return; /*0x519b14*/
                }
              }
            }
          }
        }
      }
      v46 = (BuildingClass *)Cell::IsBridge(v142); /*0x519b1b*/
      v46 = v46; /*0x519b20*/
      if ( v46 && (v46 == (BuildingClass *)this->movementDestination || v46 == (BuildingClass *)this->target) ) /*0x519b38*/
      {
        v48 = (TeamClass *)v46->attachedTag; /*0x519b3e*/
        if ( v48 ) /*0x519b43*/
          TeamClass::Update_0(v48, 1, (int)this, dword_A8F1E0, 0, 0); /*0x519b53*/
        v49 = this->Type; /*0x519b58*/
        if ( this->u32_1583 ) /*0x519b5e*/
        {
          if ( v46->Mission_Construction() == 6 && v46->Type->BridgeRepairHut ) /*0x519b82*/
          {
            if ( (uint8_t)House::IsHumanPlayer((House *)this->owner) ) /*0x519b96*/
            {
              v50 = ((int64_t (__thiscall *)(InfantryClass *, CellClass **))*(unsigned int *)((char *)this->ptr_0 + 440))( /*0x519ba8*/
                      this,
                      &p_Cell_field_0x0);
              if ( (uint8_t)CreateTriggerClassIfFarEnough(14, (int)((v50) >> 32), *(unsigned int *)v50) ) /*0x519bb6*/
                VoxClass::FindAndPlay(&stru_825538, -1); /*0x519bc9*/
            }
            if ( *&dword_8871E0->q248 != -1 ) /*0x519bda*/
            {
              q000 = v46->location[0]; /*0x519be6*/
              q004 = v46->location[1]; /*0x519bed*/
              u32_8 = v46->location[2]; /*0x519bf4*/
              StartAudioControllerAt(*&dword_8871E0->q248, &q000, 0); /*0x519c02*/
            }
            p_Cell_field_0x0 = ((p_Cell_field_0x0) & 0xFFFFFF00u) | ((unsigned int)(0) & 0xFFu); /*0x519c07*/
            v143 = -2; /*0x519c0c*/
            do /*0x519cd3*/
            {
              v51 = -2; /*0x519c14*/
              do /*0x519cc1*/
              {
                v52 = (unsigned short *)(*(int (__thiscall **)(InfantryClass *, int *))((char *)this->ptr_0 + 440))(this, &v148); /*0x519c22*/
                v144 = ((v144) & 0xFFFF0000u) | ((unsigned int)(*v52 + v51) & 0xFFFFu); /*0x519c37*/
                v144 = ((v144) & 0xFFFFu) | (((unsigned int)(v143 + v52[1]) & 0xFFFFu) << 16); /*0x519c40*/
                *(unsigned int *)v144 = v144; /*0x519c49*/
                v53 = *((unsigned int *)CellCoord_To_CellObj((CellCoord *)&dword_87F7E8, v144) + 14); /*0x519c58*/
                v54 = (unsigned short *)(*(int (__thiscall **)(InfantryClass *, double *))((char *)this->ptr_0 + 440))(this, &v149); /*0x519c64*/
                v145 = ((v145) & 0xFFFF0000u) | ((unsigned int)(v51 + *v54) & 0xFFFFu); /*0x519c79*/
                v145 = ((v145) & 0xFFFFu) | (((unsigned int)(v143 + v54[1]) & 0xFFFFu) << 16); /*0x519c82*/
                *(unsigned int *)v147 = v145; /*0x519c8b*/
                v55 = *((unsigned int *)CellCoord_To_CellObj((CellCoord *)&dword_87F7E8, v147) + 17); /*0x519ca0*/
                if ( v53 >= g_TerrainBridgeIndex && v53 < g_TerrainBridgeIndex + 16 || v55 >= 74 && v55 <= 101 ) /*0x519cb6*/
                  p_Cell_field_0x0 = ((p_Cell_field_0x0) & 0xFFFFFF00u) | ((unsigned int)(1) & 0xFFu); /*0x519cb8*/
                ++v51; /*0x519cbd*/
              }
              while ( v51 < 3 ); /*0x519cc1*/
              ++v143; /*0x519ccf*/
            }
            while ( v143 < 3 ); /*0x519cd3*/
            if ( (unsigned char)p_Cell_field_0x0 ) /*0x519cdf*/
            {
              v56 = (int16_t *)(*(int (__thiscall **)(InfantryClass *, CellClass **))((char *)this->ptr_0 + 440))( /*0x519cea*/
                                 this,
                                 &p_Cell_field_0x0);
              Terrain::ProcessCellModification((Terrain *)&dword_87F7E8, v56); /*0x519cf6*/
            }
            else
            {
              v57 = (*(int (__thiscall **)(InfantryClass *, CellClass **))((char *)this->ptr_0 + 440))(this, &p_Cell_field_0x0); /*0x519d06*/
              Terrain::RecursiveModify((Terrain *)&dword_87F7E8, v57); /*0x519d12*/
            }
            for ( i = dword_A83DF8 - 1; i >= 0; --i ) /*0x519d22*/
              (*(void (__thiscall **)(unsigned int, BuildingClass *, unsigned int))(**((unsigned int **)dword_A83DEC + i) + 40))( /*0x519d32*/
                *((unsigned int *)dword_A83DEC + i),
                v46,
                0);
            v46->DestroyOnBridgeCollapse(); /*0x519d3c*/
            goto LABEL_112; /*0x519d42*/
          }
          if ( (uint8_t)((ObjectClass *)this->owner)->IsAlliedWithObjectHouse((int)v46) /*0x519d74*/
            || *(unsigned char *)(*(unsigned int *)(v46->owner + 52) + 422) && v46->Type->CanBeOccupied )
          {
            if ( v46->health != *(unsigned int *)(v46->Vt34Thunk() + 160) ) /*0x519fb7*/
            {
              v46->HandleSellOrRepair(); /*0x519ff0*/
              goto LABEL_112; /*0x519ff6*/
            }
          }
          else
          {
            v59 = 0; /*0x519d86*/
            if ( v46->Mission_Construction() == 6 ) /*0x519d8e*/
              v59 = v46->Type->Capturable; /*0x519d96*/
            if ( *(unsigned int *)&dword_A8B238 ) /*0x519da3*/
            {
              if ( stru_A8B250[28] ) /*0x519db0*/
              {
                BuildingClass::GetHealthRatio(v46); /*0x519db8*/
                _EDX = dword_8871E0; /*0x519dbd*/
                __asm /*0x519dc3*/
                {
                  fcomp qword ptr [edx+1708h]
                  fnstsw ax
                }
                if ( (_AX & 0x4100) == 0 ) /*0x519dce*/
                {
                  _EAX = v46->Vt34Thunk(); /*0x519dd8*/
                  __asm { fild dword ptr [eax+0A0h] } /*0x519dde*/
                  _ECX = dword_8871E0; /*0x519de4*/
                  __asm /*0x519dea*/
                  {
                    fmul qword ptr [ecx+1708h]
                    fmul ds:dbl_7E1738
                  }
                  v64 = ((v64) & 0xFFFF0000u) | ((unsigned int)(Math::RoundToInt(v5)) & 0xFFFFu); /*0x519df6*/
                  v65 = (CellClass *)(v46->health - v64); /*0x519e00*/
                  v66 = v46->ptr_0; /*0x519e02*/
                  p_Cell_field_0x0 = v65; /*0x519e04*/
                  __asm /*0x519e08*/
                  {
                    fild [esp+50h+arg_0]
                    fstp qword ptr [esp+50h+var_24]
                  }
                  _EAX = v66->Vt34Thunk(v46); /*0x519e10*/
                  _EBX = dword_8871E0; /*0x519e16*/
                  __asm /*0x519e1c*/
                  {
                    fild dword ptr [eax+0A0h]
                    fld qword ptr [ebx+1708h]
                    fmul ds:dbl_7E1738
                    fsubr ds:dbl_7E1718
                    fmul ds:dbl_7E1738
                    fmulp st(1), st
                    fcomp qword ptr [esp+50h+var_24]
                    fnstsw ax
                  }
                  if ( (_EAX & 0x100) != 0 ) /*0x519e45*/
                  {
                    _EAX = v46->Vt34Thunk(); /*0x519e4b*/
                    _EBX = dword_8871E0; /*0x519e51*/
                    __asm /*0x519e57*/
                    {
                      fild dword ptr [eax+0A0h]
                      fld qword ptr [ebx+1708h]
                      fmul ds:dbl_7E1738
                      fsubr ds:dbl_7E1718
                      fmul ds:dbl_7E1738
                      fmulp st(1), st
                    }
                  }
                  else
                  {
                    __asm { fld qword ptr [esp+50h+var_24] } /*0x519e79*/
                  }
                  v70 = ((v70) & 0xFFFF0000u) | ((unsigned int)(Math::RoundToInt(v5)) & 0xFFFFu); /*0x519e7d*/
                  *(unsigned int *)v147 = v70; /*0x519e84*/
                  v46->ProcessAttack(/*0x519e9f*/
                    v46, v147, 0, *&_EBX->u32_FA8, this, 1, 0, 0);
                  goto LABEL_112; /*0x519ea5*/
                }
              }
            }
            if ( !v59 ) /*0x519eac*/
              goto LABEL_112; /*0x519eac*/
            if ( v46->currentMission != 19 /*0x519ef2*/
              && !v46->GetShroudByte() )
            {
              v71 = (TeamClass *)v46->attachedTag; /*0x519f2f*/
              if ( v71 ) /*0x519f34*/
                TeamClass::Update_0(v71, 1, (int)this, dword_A8F1E0, 0, 0); /*0x519f44*/
              *(unsigned char *)(v46->owner + 580) = 1; /*0x519f4f*/
              v72 = (TechnoClass *)this->attachedTag; /*0x519f56*/
              if ( v72 && (uint8_t)TechnoClass::HasAnyMission(v72) ) /*0x519f5d*/
                ObjectClass::SetReference(v46, this->attachedTag); /*0x519f6c*/
              v46->drawFrame_0(this->owner, 1); /*0x519f7e*/
              v73 = v46->ptr_0; /*0x519f8a*/
              v46->waveEffect = this->Type->ArrayIndex; /*0x519f94*/
              v73->DestroyOnBridgeCollapse(v46); /*0x519f9a*/
  LABEL_112:
              v38 = (TeamClass *)this->attachedTag; /*0x51a010*/
              if ( !v38 ) /*0x51a015*/
                goto LABEL_114; /*0x51a015*/
  LABEL_113:
              TeamClass::Update_0(v38, 48, (int)this, dword_A8F1E0, 0, 0); /*0x51a017*/
              goto LABEL_114; /*0x51a025*/
            }
          }
        }
        else if ( this->q1584 ) /*0x519ff8*/
        {
          BuildingClass::Infiltrate(v46, (void *)this->owner); /*0x51a00b*/
          goto LABEL_112; /*0x51a00b*/
        }
        (*(void (__thiscall **)(InfantryClass *, unsigned int, int))((char *)this->ptr_0 + 1152))(this, 0, 1); /*0x519fc1*/
        v74 = this->ptr_0; /*0x519fc9*/
        v75 = v46->GetExitCoords(&v154, 1, 1); /*0x519fd6*/
        v74->FindMoveTarget(this, v75); /*0x519fdc*/
        return; /*0x519fe9*/
      }
      if ( !this->movementDestination ) /*0x51a071*/
      {
        if ( this->currentMission != 11 ) /*0x51a082*/
          (*(void (__thiscall **)(InfantryClass *, unsigned int, int))((char *)this->ptr_0 + 1156))(this, 0, 1); /*0x51a08c*/
        v149 = *&location->__pad_000; /*0x51a095*/
        v150 = location->u32_8; /*0x51a0ad*/
        v76 = Coord::To_Cell((Coord *)&dword_87F7E8, &v149); /*0x51a0b1*/
        if ( Cell::IsBridge((Cell *)v76) ) /*0x51a0b8*/
          (*(void (__thiscall **)(InfantryClass *, int *, int, unsigned int))((char *)this->ptr_0 + 372))(this, &dword_A8F200, 1, 0); /*0x51a0ce*/
      }
    }
    if ( this->Type->qEC6 ) /*0x51a0da*/
    {
      v135 = this->onBridge[0]; /*0x51a0ec*/
      v77 = (CellClass *)(*(int (__thiscall **)(InfantryClass *))((char *)this->ptr_0 + 444))(this); /*0x51a0ef*/
      Building = CellClass::FindBuilding(v77, v135); /*0x51a0fc*/
      if ( !Building ) /*0x51a100*/
      {
        v136 = this->onBridge[0]; /*0x51a10e*/
        v79 = (PlacementList *)(*(int (__thiscall **)(InfantryClass *))((char *)this->ptr_0 + 444))(this); /*0x51a111*/
        Building = PlacementList::FindByType(v79, v136); /*0x51a11e*/
        if ( !Building ) /*0x51a122*/
        {
          v80 = (Cell *)(*(int (__thiscall **)(InfantryClass *))((char *)this->ptr_0 + 444))(this); /*0x51a128*/
          v81 = Cell::IsBridge(v80); /*0x51a130*/
  LABEL_128:
          Building = v81; /*0x51a184*/
        }
      }
    }
    else
    {
      v82 = (Cell *)(*(int (__thiscall **)(InfantryClass *))((char *)this->ptr_0 + 444))(this); /*0x51a13b*/
      Building = Cell::IsBridge(v82); /*0x51a148*/
      if ( !Building ) /*0x51a14c*/
      {
        v137 = this->onBridge[0]; /*0x51a156*/
        v83 = (PlacementList *)(*(int (__thiscall **)(InfantryClass *))((char *)this->ptr_0 + 444))(this); /*0x51a159*/
        Building = PlacementList::FindByType(v83, v137); /*0x51a166*/
        if ( !Building ) /*0x51a16a*/
        {
          v138 = this->onBridge[0]; /*0x51a174*/
          v84 = (CellClass *)(*(int (__thiscall **)(InfantryClass *))((char *)this->ptr_0 + 444))(this); /*0x51a177*/
          v81 = CellClass::FindBuilding(v84, v138); /*0x51a17f*/
          goto LABEL_128; /*0x51a17f*/
        }
      }
    }
    v85 = this->movementDestination; /*0x51a186*/
    v86 = 0; /*0x51a18c*/
    if ( v85 && (*(int (__thiscall **)(int))(*(unsigned int *)v85 + 44))(v85) == 11 ) /*0x51a19e*/
    {
      v87 = (unsigned int *)this->GetCoords_0(/*0x51a1ad*/
                        this->movementDestination, &v154);
      v88 = Coord::To_Cell((Coord *)&dword_87F7E8, v87); /*0x51a1c1*/
      if ( this->Type->qEC6 ) /*0x51a1c3*/
      {
        v86 = CellClass::FindBuilding(v88, 1); /*0x51a1d6*/
        if ( !v86 ) /*0x51a1da*/
        {
          v86 = PlacementList::FindByType((PlacementList *)v88, 1); /*0x51a1e5*/
          if ( !v86 ) /*0x51a1e9*/
          {
            v89 = Cell::IsBridge((Cell *)v88); /*0x51a1ed*/
  LABEL_138:
            v86 = v89; /*0x51a219*/
          }
        }
      }
      else
      {
        v86 = Cell::IsBridge((Cell *)v88); /*0x51a1fb*/
        if ( !v86 ) /*0x51a1ff*/
        {
          v86 = PlacementList::FindByType((PlacementList *)v88, 1); /*0x51a20a*/
          if ( !v86 ) /*0x51a20e*/
          {
            v89 = CellClass::FindBuilding(v88, 1); /*0x51a214*/
            goto LABEL_138; /*0x51a214*/
          }
        }
      }
    }
    if ( (*(int (__thiscall **)(InfantryClass *))((char *)this->ptr_0 + 388))(this) == 7 /*0x51a252*/
      && Building
      && ((unsigned int *)this->movementDestination == Building || (unsigned int *)this->target == Building || v86 && Building == v86) )
    {
      v90 = Building->q034; /*0x51a258*/
      if ( v90 ) /*0x51a25d*/
        TeamClass::Update_0(v90, 1, (int)this, dword_A8F1E0, 0, 0); /*0x51a26a*/
      if ( Building->getAltitude() == 6 ) /*0x51a279*/
      {
        v91 = (Cell *)(*(int (__thiscall **)(InfantryClass *))((char *)this->ptr_0 + 444))(this); /*0x51a283*/
        if ( Building == Cell::IsBridge(v91) /*0x51a2a7*/
          && (*(int (__thiscall **)(InfantryClass *, int))((char *)this->ptr_0 + 628))(this, 21) == 1 )
        {
          this->missionData = 0; /*0x51a2b0*/
          TechnoClass::SetMember81(this, 0); /*0x51a2b6*/
          TechnoClass::SetSpread(this, 0); /*0x51a2be*/
          mindControlledBy = this->mindControlledBy; /*0x51a2c3*/
          if ( mindControlledBy && mindControlledBy->captureManager ) /*0x51a2cd*/
            CaptureManagerClass::FreeUnit((CaptureManagerClass *)this, (int)v86, 0, v139, v140, v141); /*0x51a2da*/
          if ( *(unsigned char *)(Building[328] + 5807) ) /*0x51a2e5*/
          {
            v93 = (unsigned int *)(*(int (__thiscall **)(InfantryClass *, int *))((char *)this->ptr_0 + 72))(this, &v154); /*0x51a2f9*/
            StartAudioControllerAt(*&dword_8871E0->u32_270, v93, 0); /*0x51a30a*/
            this->isAbsorbed[0] = 1; /*0x51a30f*/
          }
          (*(void (__thiscall **)(InfantryClass *))((char *)this->ptr_0 + 212))(this); /*0x51a31a*/
          if ( InfantryClass::updateDeployAnimation((InfantryClass *)Building) && this->isCountedAsOwned_special[0] ) /*0x51a32b*/
          {
            --*(unsigned int *)&this->owner->ownedInfantry; /*0x51a342*/
            this->isCountedAsOwned_special[0] = 0; /*0x51a348*/
          }
          v94 = Building[328]; /*0x51a34f*/
          if ( *(unsigned char *)(v94 + 5807) ) /*0x51a355*/
          {
            if ( *(int *)(v94 + 3816) > 0 ) /*0x51a374*/
              *(unsigned char *)(Building[135] + 22392) = 1; /*0x51a37c*/
          }
          else
          {
            (*(void (__thiscall **)(InfantryClass *, int, unsigned int *))((char *)this->ptr_0 + 632))(this, 2, Building); /*0x51a366*/
          }
          CellClass::AddObject((CellClass *)(Building + 69), this); /*0x51a38a*/
          FootClass::ClearPathIndex(this); /*0x51a391*/
          return; /*0x51a39d*/
        }
      }
      else
      {
        v95 = (unsigned short *)Building->GetCellCoords_Alt(&v149); /*0x51a3b1*/
        v96 = (unsigned short *)(*(int (__thiscall **)(InfantryClass *, int *))((char *)this->ptr_0 + 440))(this, &v148); /*0x51a3ba*/
        if ( *v96 == *v95 && v96[1] == v95[1] && Building == (unsigned int *)this->movementDestination ) /*0x51a3e0*/
        {
          if ( (*(int (__thiscall **)(InfantryClass *, int, unsigned int *))((char *)this->ptr_0 + 632))(this, 15, Building) == 1 ) /*0x51a3f6*/
          {
            (this)->SetFocus(0); /*0x51a3ff*/
            this->onBridge[0] = 0; /*0x51a407*/
            this->missionData = 0; /*0x51a40e*/
            TechnoClass::SetMember81(this, 0); /*0x51a414*/
            TechnoClass::SetSpread(this, 0); /*0x51a41c*/
            v97 = this->mindControlledBy; /*0x51a421*/
            if ( v97 && v97->captureManager ) /*0x51a42b*/
              CaptureManagerClass::FreeUnit((CaptureManagerClass *)this, (int)v95, 0, v139, v140, v141); /*0x51a438*/
            (*(void (__thiscall **)(InfantryClass *))((char *)this->ptr_0 + 212))(this); /*0x51a441*/
            if ( *(unsigned char *)(Building->GetSpecialValue() + 1508) ) /*0x51a451*/
              TechnoClass::EnteredOpenTopped((int)this); /*0x51a45e*/
            this->transporter = (int)Building; /*0x51a463*/
            Building->vt_slot_916(this); /*0x51a46e*/
            (*(void (__thiscall **)(InfantryClass *))((char *)this->ptr_0 + 284))(this); /*0x51a478*/
          }
          else
          {
            (*(void (__thiscall **)(InfantryClass *, unsigned int, int))((char *)this->ptr_0 + 1152))(this, 0, 1); /*0x51a48f*/
            (*(void (__thiscall **)(InfantryClass *, int, unsigned int))((char *)this->ptr_0 + 488))(this, 5, 0); /*0x51a49c*/
            (*(void (__thiscall **)(InfantryClass *, int *, int, int))((char *)this->ptr_0 + 372))(this, &dword_A8F200, 1, 1); /*0x51a4af*/
          }
          return; /*0x51a485*/
        }
      }
    }
    if ( (*(int (__thiscall **)(InfantryClass *))((char *)this->ptr_0 + 388))(this) != 17 || !this->Type->qEC2 ) /*0x51a4d8*/
    {
      location = v142; /*0x51a7f4*/
  LABEL_193:
      if ( this->isTether[0] ) /*0x51a7f8*/
      {
        (*(void (__thiscall **)(InfantryClass *, int))((char *)this->ptr_0 + 628))(this, 8); /*0x51a80c*/
        v129 = this->Type; /*0x51a812*/
        if ( this->q1558 > 1 ) /*0x51a81f*/
        {
          v154 = this->location[0]; /*0x51a82b*/
          v155 = this->location[1]; /*0x51a832*/
          v156 = this->location[2]; /*0x51a83d*/
          StartAudioControllerAt(*(unsigned int *)(this->u32_154C + 4), &v154, 0); /*0x51a84a*/
        }
        if ( this->onBridge[0] ) /*0x51a84f*/
        {
          if ( (location->q128 & 0x1C) == 0x1C ) /*0x51a865*/
            Cell::ApplyDamage(location, (int)&dword_A8F200, 1, 1, 1); /*0x51a869*/
        }
        else if ( (location->u32_124 & 0x1C) == 0x1C ) /*0x51a877*/
        {
          Cell::ApplyDamage(location, (int)&dword_A8F200, 1, 1, 0); /*0x51a886*/
        }
      }
      if ( this->queuedMission == -1 /*0x51a8aa*/
        && !this->movementDestination
        && !this->target
        && !(uint8_t)Team::AllMembersValid((Team *)this) )
      {
        (*(void (__thiscall **)(InfantryClass *, unsigned int, int))((char *)this->ptr_0 + 1156))(this, 0, 1); /*0x51a8bb*/
      }
      (*(void (__thiscall **)(InfantryClass *))((char *)this->ptr_0 + 492))(this); /*0x51a8c5*/
      (*(void (__thiscall **)(InfantryClass *, unsigned int, unsigned int, unsigned int, unsigned int))((char *)this->ptr_0 + 1164))(this, 0, 0, 0, 0); /*0x51a8d7*/
      (*(void (__thiscall **)(InfantryClass *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int))((char *)this->ptr_0 + 1160))( /*0x51a8eb*/
        this,
        0,
        0,
        0,
        0,
        0);
      v154 = this->location[0]; /*0x51a8fd*/
      lastSightRange = this->lastSightRange; /*0x51a901*/
      v155 = this->location[1]; /*0x51a90d*/
      v156 = this->location[2]; /*0x51a921*/
      MapClass::RevealArea2((MapClass *)&dword_87F7E8, &v154, 0, lastSightRange + 3, 0); /*0x51a925*/
      v131 = this->location[1]; /*0x51a92c*/
      v132 = this->location[2]; /*0x51a92f*/
      v154 = this->location[0]; /*0x51a932*/
      v155 = v131; /*0x51a93a*/
      v156 = v132; /*0x51a944*/
      v4 = Coord::To_Cell((Coord *)&dword_87F7E8, &v154); /*0x51a94d*/
      landType = v4->landType; /*0x51a957*/
      if ( !this->locomotor ) /*0x51a94f*/
        sub_7DC720(-2147467261); /*0x51a964*/
      if ( !(*(uint8_t (__stdcall **)(int))(*(unsigned int *)this->locomotor + 16))(this->locomotor) /*0x51a9b3*/
        && !this->Type->qEC2
        && !(uint8_t)TechnoTypeClass::HasVoiceResponse(&this->ptr_0, 14)
        && (landType == 3 || landType == 2)
        && (!this->onBridge[0] || (v4->flags & 0x100) == 0) )
      {
        v134 = this->ptr_0; /*0x51a9b8*/
        p_Cell_field_0x0 = (CellClass *)this->health; /*0x51a9ba*/
        v134->ProcessDeployment(/*0x51a9db*/
          this, &p_Cell_field_0x0, 0, *&dword_8871E0->u32_FA8, 0, 1, 0, 0);
        return; /*0x51a9e8*/
      }
      goto LABEL_216; /*0x51a9b3*/
    }
    location = v142; /*0x51a4e6*/
    v98 = Cell::IsBridge(v142); /*0x51a4ec*/
    v98 = v98; /*0x51a4f1*/
    if ( !v98 || v98 != (unsigned int *)this->movementDestination ) /*0x51a501*/
    {
      v117 = (unsigned int *)(*(int (__thiscall **)(InfantryClass *, int *))((char *)this->ptr_0 + 72))(this, &v154); /*0x51a670*/
      if ( Coord::To_Cell((Coord *)&dword_87F7E8, v117) == (CellClass *)this->movementDestination ) /*0x51a684*/
      {
        v118 = this->location; /*0x51a68a*/
        v149 = *(double *)this->location; /*0x51a698*/
        v150 = this->location[2]; /*0x51a6ab*/
        PlaySoundEffectAt(&v149, dword_8871E0->TiberiumLongScan, this, *&dword_8871E0->u32_FA8, 1, 0); /*0x51a6c1*/
        (*(void (__thiscall **)(InfantryClass *))((char *)this->ptr_0 + 1280))(this); /*0x51a6ca*/
        Value = ProgressTimer::GetValue((ProgressTimer *)this->primaryFacing, &v149); /*0x51a6db*/
        v120 = this->location[1]; /*0x51a6ef*/
        v121 = ((unsigned int)((*Value >> 12) + 1) >> 1) & 7; /*0x51a6f2*/
        v122 = this->location[2]; /*0x51a6f7*/
        v123 = (&dword_89F6D8)[2 * v121] + this->location[0]; /*0x51a6fc*/
        v124 = (&dword_89F6DC)[2 * v121]; /*0x51a70a*/
        v154 = v123; /*0x51a70d*/
        v125 = v120 + v124; /*0x51a711*/
        v126 = this->ptr_0; /*0x51a713*/
        v155 = v125; /*0x51a715*/
        v156 = v122; /*0x51a720*/
        v126->FindMoveTarget(this, &v154, 1, 1); /*0x51a724*/
        (*(void (__thiscall **)(InfantryClass *, int, unsigned int))((char *)this->ptr_0 + 488))(this, 2, 0); /*0x51a732*/
        v127 = this->movementDestination; /*0x51a738*/
        if ( !v127 /*0x51a75e*/
          || (v128 = (unsigned int *)(*(int (__thiscall **)(int, int *))(*(unsigned int *)v127 + 72))(v127, &v154),
              Coord::To_Cell((Coord *)&dword_87F7E8, v128)->landType == 2) )
        {
          (*(void (__thiscall **)(InfantryClass *, int))((char *)this->ptr_0 + 292))(this, 1); /*0x51a766*/
        }
        v154 = *v118; /*0x51a774*/
        v155 = this->location[1]; /*0x51a77b*/
        v156 = this->location[2]; /*0x51a787*/
        PlaySoundEffectAt(&v154, dword_8871E0->TiberiumLongScan, 0, *&dword_8871E0->u32_FA8, 1, 0); /*0x51a79e*/
        v154 = *v118; /*0x51a7a7*/
        v155 = this->location[1]; /*0x51a7b5*/
        v156 = this->location[2]; /*0x51a7bc*/
        PlaySoundEffectAt(&v154, dword_8871E0->TiberiumLongScan, 0, *&dword_8871E0->u32_FA8, 1, 0); /*0x51a7d3*/
        if ( !this->isAliveFlag[0] ) /*0x51a7e0*/
          return; /*0x51a7e0*/
        (*(void (__thiscall **)(InfantryClass *, int))((char *)this->ptr_0 + 292))(this, 1); /*0x51a7ec*/
      }
      goto LABEL_193; /*0x51a7f2*/
    }
    v100 = v98->q034; /*0x51a507*/
    if ( v100 ) /*0x51a50c*/
      TeamClass::Update_0(v100, 1, (int)this, dword_A8F1E0, 0, 0); /*0x51a51c*/
    if ( v98->vt_slot_388() != 19 /*0x51a538*/
      && !v98->vt_slot_352() )
    {
      if ( *((unsigned char *)v98 + 1759) ) /*0x51a546*/
      {
        (*(void (__thiscall **)(InfantryClass *, unsigned int, int))((char *)this->ptr_0 + 1152))(this, 0, 1); /*0x51a558*/
        v101 = (*(int (__thiscall **)(InfantryClass *, int))((char *)this->ptr_0 + 792))(this, 1); /*0x51a564*/
        v102 = this->ptr_0; /*0x51a576*/
        this->diskLaserTimer[0] = (int)dword_A8ED84; /*0x51a57a*/
        this->diskLaserTimer[1] = v155; /*0x51a582*/
        this->diskLaserTimer[2] = v101; /*0x51a587*/
        v103 = v98->vt_slot_72(&v154, 1, 1); /*0x51a591*/
        v102->FindMoveTarget(this, v103); /*0x51a597*/
        return; /*0x51a5a4*/
      }
      *((unsigned char *)v98 + 1759) = 1; /*0x51a5a7*/
      _ECX = dword_8871E0; /*0x51a5ae*/
      v105 = *v98; /*0x51a5b4*/
      __asm /*0x51a5b6*/
      {
        fld qword ptr [ecx+1750h]
        fmul ds:dbl_7E27F8
        fmul ds:dbl_7E1738
      }
      v108 = Math::RoundToInt(v5); /*0x51a5c8*/
      v107 = ((v107) & 0xFFFF0000u) | ((unsigned int)((unsigned short)((v108) >> 16)) & 0xFFFFu); /*0x51a5c8*/
      v106 = ((v106) & 0xFFFF0000u) | ((unsigned int)(v108) & 0xFFFFu); /*0x51a5c8*/
      v109 = ((double (__fastcall *)(unsigned int *, int, int))*(unsigned int *)(v105 + 328))(v98, v107, v106); /*0x51a5d0*/
      _EDX = dword_8871E0; /*0x51a5d6*/
      dword_A8ED84 = dword_A8ED84; /*0x51a5dc*/
      __asm /*0x51a5e2*/
      {
        fld qword ptr [edx+1750h]
        fmul ds:dbl_7E27F8
      }
      v112 = ((v112) & 0xFFFF0000u) | ((unsigned int)(Math::RoundToInt(v109)) & 0xFFFFu); /*0x51a5ee*/
      v155 = v155; /*0x51a5f3*/
      v98[336] = this; /*0x51a5fd*/
      v98[330] = dword_A8ED84; /*0x51a603*/
      v98[331] = v155; /*0x51a605*/
      v98[332] = v112; /*0x51a608*/
    }
    FootClass::ClearPathIndex(this); /*0x51a60d*/
    (*(void (__thiscall **)(InfantryClass *, unsigned int))((char *)this->ptr_0 + 1116))(this, 0); /*0x51a618*/
    v114 = (*(int (__thiscall **)(InfantryClass *, int))((char *)this->ptr_0 + 792))(this, 1); /*0x51a624*/
    v115 = this->ptr_0; /*0x51a636*/
    this->diskLaserTimer[0] = (int)dword_A8ED84; /*0x51a63a*/
    this->diskLaserTimer[1] = v155; /*0x51a642*/
    this->diskLaserTimer[2] = v114; /*0x51a647*/
    v116 = v98->vt_slot_72(&v154, 1, 1); /*0x51a651*/
    v115->FindMoveTarget(this, v116); /*0x51a657*/
}

// 0x522340
void InfantryClass::CalculateApproachPath(char a2)
{
  int v3; // eax
  House *v5; // eax
  InfantryTypeClass *Type; // eax
  int DeployFireWeapon; // edi
  char v8; // bl
  int v9; // eax
  int v10; // eax

  if ( this->target ) /*0x522344*/
  {
    v3 = this->SequenceAnim[0]; /*0x522352*/
    if ( v3 != 27 && v3 != 28 && v3 != 29 && v3 != 30 ) /*0x52236a*/
      return FootClass::CalculateApproachPath((FootClass *)this, 0); /*0x522375*/
    v5 = (House *)(*((int (__thiscall **)(InfantryClass *))this->ptr_0 + 15))(this); /*0x52237c*/
    if ( !(uint8_t)House::IsCurrentPlayer(v5) ) /*0x522381*/
    {
      Type = this->Type; /*0x52238e*/
      if ( Type->Deployer ) /*0x522394*/
      {
        if ( Type->DeployFire ) /*0x5223a2*/
        {
          DeployFireWeapon = Type->DeployFireWeapon; /*0x5223b3*/
          v8 = (*((int (__thiscall **)(InfantryClass *, AbstractClass *, int))this->ptr_0 + 234))( /*0x5223ce*/
                 this,
                 this->target,
                 DeployFireWeapon);
          v9 = *(unsigned int *)(*((int (__thiscall **)(InfantryClass *, int))this->ptr_0 + 254))(this, DeployFireWeapon); /*0x5223d6*/
          if ( v9 ) /*0x5223db*/
          {
            if ( !*(unsigned char *)(v9 + 336) ) /*0x5223e1*/
            {
              v10 = this->SequenceAnim[0]; /*0x5223ef*/
              if ( v10 == 27 || v10 == 28 || v10 == 29 || v10 == 30 ) /*0x522407*/
              {
                if ( !v8 && !a2 ) /*0x522417*/
                {
                  (*((void (__thiscall **)(InfantryClass *, int, unsigned int, unsigned int))this->ptr_0 + 342))(this, 31, 0, 0); /*0x522427*/
                  return 0; /*0x522431*/
                }
              }
              else if ( v8 && !a2 ) /*0x522442*/
              {
                if ( !this->locomotor[0] ) /*0x522444*/
                  sub_7DC720(-2147467261); /*0x522453*/
                if ( !(*(uint8_t (__stdcall **)(int))(*(unsigned int *)this->locomotor[0] + 16))(this->locomotor[0]) ) /*0x522461*/
                {
                  (*((void (__thiscall **)(InfantryClass *, int, unsigned int, unsigned int))this->ptr_0 + 342))(this, 27, 0, 0); /*0x522472*/
                  return 0; /*0x52247c*/
                }
                if ( !this->locomotor[0] ) /*0x52247f*/
                  sub_7DC720(-2147467261); /*0x52248e*/
                (*(void (__stdcall **)(int))(*(unsigned int *)this->locomotor[0] + 72))(this->locomotor[0]); /*0x52249c*/
                this->ShouldDeploy = 1; /*0x5224a1*/
                MissionClass::GetMissionControl((MissionClass *)this); /*0x5224a8*/
                Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x5224bd*/
              }
            }
          }
        }
      }
    }
  }
  return 0; /*0x522373*/
}
// 0x5224d0
bool InfantryClass::IsBridgeRepairEnabled()
{
  return this->Type->Engineer; /*0x5224dc*/
}
// 0x522d50
int InfantryClass::SlaveGiveMoney_RecordBalanceBefore()
{
  int *v2; // ebp
  char v3; // bl
  int result; // eax
  int v5; // esi
  int v6; // edi
  float v10; // [esp+Ch] [ebp-Ch]
  int v11; // [esp+10h] [ebp-8h]
  float v12; // [esp+10h] [ebp-8h]
  float v13; // [esp+14h] [ebp-4h]

  v2 = &this->tiltSidewaysAngle; /*0x522d55*/
  v3 = 0; /*0x522d5e*/
  result = FirstFloatPositivethis->isAliveFlag); /*0x522d60*/
  v5 = result; /*0x522d65*/
  if ( result != -1 ) /*0x522d6a*/
  {
    do /*0x522e44*/
    {
      v6 = a2[135]; /*0x522d75*/
      v11 = v6->numOrePurifiers; /*0x522d89*/
      if ( !v6->currentPlayer && dword_A8B238[0] ) /*0x522d97*/
        v11 = *(unsigned int *)(*&dword_8871E0->q1324 + 4 * v6->u32_184) /*0x522dae*/
            + v6->numOrePurifiers;
      if ( v5 == -1 ) /*0x522db5*/
      {
        v10 = 0.0; /*0x522dc5*/
      }
      else
      {
        FloatArray::Get(v2, v5); /*0x522dba*/
        __asm { fstp [esp+1Ch+var_C] } /*0x522dbf*/
      }
      __asm { fild [esp+1Ch+var_8] } /*0x522dcd*/
      _EAX = dword_8871E0; /*0x522dd1*/
      __asm /*0x522dd9*/
      {
        fmul dword ptr [eax+0F3Ch]
        fmul [esp+1Ch+var_C]
        fstp [esp+1Ch+var_8]
      }
      if ( v5 != -1 ) /*0x522de7*/
      {
        Float::SubtractClamped(v2, v10, v5); /*0x522df1*/
        __asm /*0x522df6*/
        {
          fst [esp+1Ch+var_4]
          fcomp ds:flt_7E1748
          fnstsw ax
        }
        if ( (_AX & 0x4100) == 0 ) /*0x522e05*/
        {
          v3 = 1; /*0x522e0f*/
          HouseClass::GiveTiberium_Storage((unsigned int *)v6, v13, v5); /*0x522e11*/
          __asm /*0x522e16*/
          {
            fstp st
            fld [esp+1Ch+var_8]
            fcomp ds:flt_7E1748
            fnstsw ax
          }
          if ( (_AX & 0x4100) == 0 ) /*0x522e27*/
          {
            HouseClass::GiveTiberium_Storage((unsigned int *)v6, v12, v5); /*0x522e31*/
            __asm { fstp st } /*0x522e36*/
          }
        }
      }
      result = FirstFloatPositive((float *)v2); /*0x522e3a*/
      v5 = result; /*0x522e3f*/
    }
    while ( result != -1 ); /*0x522e44*/
    if ( v3 ) /*0x522e4d*/
      return (*(int (__thiscall **)(unsigned int *))(*a2 + 1128))(a2); /*0x522e55*/
  }
  return result; /*0x522e5b*/
}
// 0x772ac0
void InfantryClass::startPanic()
{
  int currentMission; // eax

  currentMission = this->currentMission; /*0x772ac0*/
  return currentMission && currentMission->gattlingValue; /*0x772ad6*/
}
int InfantryClass::CheckHealthDiff_0()
{
    // IDA: 0x7447A0 — check health diff (stub)
    return 0;
}

// ============================================================
// Phase 3: Drawing
// ============================================================

// 0x518f90
void InfantryClass::Draw(Point2D* screen_pos, RectangleStruct* bounds) const
{
  int *v16; // ecx
  int v17; // ebp
  int ptr_4; // edx
  int v19; // eax
  int v20; // edx
  char v21; // al
  int FlashFrameTime; // eax
  char *v23; // edx
  uint8_t v24; // bl
  int v25; // eax
  int v26; // edx
  int v27; // ecx
  int v28; // eax
  unsigned int *v29; // eax
  CellClass *v30; // eax
  int v31; // eax
  int **v32; // ebx
  int v33; // eax
  unsigned int *v34; // eax
  InfantryClass *v35; // edi
  int v36; // edx
  int v37; // ecx
  bool v38; // zf
  int *v39; // esi
  unsigned int v40; // eax
  int *v41; // ebx
  int v42; // ecx
  int v43; // eax
  int uniqueId; // ebx
  int *v45; // esi
  signed int v46; // edi
  int v47; // ecx
  int v48; // eax
  unsigned int v49; // esi
  int v50; // esi
  int v51; // edi
  int v52; // esi
  int v53; // ebx
  CellClass *m_Position; // ecx
  int flags; // edx
  int v56; // eax
  int v57; // edi
  int v58; // eax
  int v59; // eax
  InfantryClass *v60; // edi
  int v61; // eax
  int *v62; // [esp+8h] [ebp-88h]
  int *v63; // [esp+14h] [ebp-7Ch]
  int v64; // [esp+14h] [ebp-7Ch]
  int v65; // [esp+20h] [ebp-70h]
  uint8_t v66; // [esp+4Eh] [ebp-42h]
  uint8_t v67; // [esp+4Fh] [ebp-41h]
  int v68; // [esp+50h] [ebp-40h]
  StreamClass v69; // [esp+54h] [ebp-3Ch] BYREF
  int v70; // [esp+68h] [ebp-28h] BYREF
  int ptr_0; // [esp+6Ch] [ebp-24h] BYREF
  int v72; // [esp+70h] [ebp-20h]
  int v73; // [esp+74h] [ebp-1Ch] BYREF
  int v74; // [esp+78h] [ebp-18h]
  int v75; // [esp+7Ch] [ebp-14h]
  unsigned int v76[4]; // [esp+80h] [ebp-10h] BYREF

  v17 = (int)v16; /*0x518f99*/
  ptr_4 = this->ptr_4; /*0x518f9d*/
  v19 = *v16; /*0x518fa0*/
  ptr_0 = this->ptr_0; /*0x518fa3*/
  v72 = ptr_4; /*0x518fb0*/
  v20 = *(unsigned int *)v19->CoordToCell(v16, &v69.StreamClass_field_0C); /*0x518fba*/
  v21 = *(unsigned char *)(v17 + 664); /*0x518fbc*/
  v69.m_Data = v20; /*0x518fc4*/
  v68 = 0; /*0x518fca*/
  if ( v21 ) /*0x518fce*/
  {
    FlashFrameTime = dword_8871E0[1].FlashFrameTime; /*0x518fda*/
    v23 = (char *)dword_8871E0 + 2 * FlashFrameTime; /*0x518fe0*/
    v24 = v23[FlashFrameTime + 6261]; /*0x518fed*/
    v66 = v23[FlashFrameTime + 6260]; /*0x518ffa*/
    v67 = v23[FlashFrameTime + 6262]; /*0x519004*/
    v25 = DDraw_GetStatus() - 1; /*0x51900d*/
    if ( v25 ) /*0x51900e*/
    {
      v28 = v25 - 1; /*0x519010*/
      if ( v28 ) /*0x519011*/
      {
  LABEL_6:
        (*((unsigned short *)&(v26))) = v66; /*0x51905b*/
        (*((unsigned short *)&(v28))) = v67; /*0x519061*/
        (*((unsigned short *)&(v27))) = v24 >> 1; /*0x51906c*/
        v68 |= v28 | (32 * ((32 * v26) | v27)); /*0x51907e*/
        goto LABEL_7; /*0x51907e*/
      }
      (*((unsigned short *)&(v26))) = v67; /*0x519019*/
      (*((unsigned short *)&(v27))) = v24; /*0x519025*/
      v25 = v26 | (32 * (v27 | (v66 << 6))); /*0x51902c*/
      v68 = v25; /*0x51902e*/
    }
    (*((unsigned short *)&(v26))) = v66; /*0x519032*/
    (*((unsigned short *)&(v27))) = v24 >> 1; /*0x51903f*/
    (*((unsigned short *)&(v25))) = v67; /*0x519041*/
    v26 *= 32; /*0x519047*/
    v27 = v25 | ((v26 | v27) << 6); /*0x51904f*/
    (*(((unsigned short *)&(v28)) + 1)) = (*(((unsigned short *)&(v27)) + 1)) | (*(((unsigned short *)&(v68)) + 1)); /*0x519055*/
    v68 |= v27; /*0x519057*/
    goto LABEL_6; /*0x519057*/
  }
  LABEL_7:
  v29 = (unsigned int *)(*(int (__thiscall **)(int, int *))(*(unsigned int *)v17 + 72))(v17, &v73); /*0x519082*/
  *(unsigned short *)v69.m_Position = *v29 / 256; /*0x51909f*/
  *(unsigned short *)&v69.__pad_0[2] = v29->ptr_4 / 256; /*0x5190b7*/
  v69.m_Position = *(unsigned int *)v69.m_Position; /*0x5190c0*/
  v30 = (CellClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (int16_t *)&v69.m_Position); /*0x5190ca*/
  if ( (uint8_t)CellClass::QuickPassable(v30) ) /*0x5190d1*/
    v68 = 0; /*0x5190da*/
  if ( *(unsigned char *)(v17 + 1668) != 0xFF ) /*0x5190e5*/
  {
    TacticalClass::AddToDrawQueue((TacticalClass *)g_TacticalClass_Instance, v17, ptr_0, v72); /*0x519609*/
  LABEL_56:
    AbstractClass::COMStub_Return0_69((FootClass *)&ptr_0, (int)a2); /*0x51960e*/
    return; /*0x51961a*/
  }
  v31 = *(unsigned int *)(v17 + 1652); /*0x5190eb*/
  v32 = (int **)(v17 + 1652); /*0x5190f1*/
  *(unsigned int *)v69.m_Position = 0; /*0x5190f9*/
  if ( !v31 ) /*0x5190fd*/
    goto LABEL_15; /*0x5190fd*/
  v33 = StreamClass::Set2(&v69, (unsigned int *)(v17 + 1652)); /*0x519104*/
  if ( v33 < 0 && v33 != -2147467262 ) /*0x519112*/
    sub_7DC720(v33); /*0x519115*/
  if ( !*(unsigned int *)v69.m_Position ) /*0x519120*/
  LABEL_15:
    sub_7DC720(-2147467261); /*0x519127*/
  (*(void (__stdcall **)(unsigned int, unsigned int *))(**(unsigned int **)v69.m_Position + 12))(*(unsigned int *)v69.m_Position, v76); /*0x519138*/
  if ( (*(int (__thiscall **)(int))(*(unsigned int *)v17 + 456))(v17) > 0 && !memcmp(v76, &g_CLSID_DriveLocomotion, 0x10u) ) /*0x51915e*/
  {
    v69.m_Position = (int)SearchMIXFile(aPodShp, 0); /*0x519172*/
    if ( !*v32 ) /*0x519176*/
      sub_7DC720(-2147467261); /*0x519181*/
    v34 = (unsigned int *)(*(int (__stdcall **)(int *, int *))(**v32 + 48))(*v32, &v73); /*0x519190*/
    v35 = this; /*0x519193*/
    v36 = v34[1]; /*0x519199*/
    v37 = this->ptr_4; /*0x5191a0*/
    v69.StreamClass_field_0C = *v34 + this->ptr_0; /*0x5191a3*/
    v38 = *v32 == 0; /*0x5191ab*/
    v70 = v36 + v37; /*0x5191ad*/
    if ( v38 ) /*0x5191b1*/
      sub_7DC720(-2147467261); /*0x5191b8*/
    v39 = *v32; /*0x5191c3*/
    v65 = (*(int (__thiscall **)(int, unsigned int))(*(unsigned int *)v17 + 748))(v17, 0) - 2; /*0x5191e1*/
    v63 = a3; /*0x5191f1*/
    v40 = (*(int (**)(void))(*v39 + 136))(); /*0x5191f4*/
    DrawToSurfaceSHP( /*0x51920c*/
      (int)g_DSurface_Hidden_2,
      (int)dword_87F6C4,
      v69.m_Position,
      v40,
      v39,
      &v70,
      (int)v63,
      11777,
      0,
      v65,
      1000,
      v68,
      0,
      0,
      0,
      0);
    CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (int16_t *)&v69.m_Data); /*0x51921b*/
    CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (int16_t *)&v69.m_Data); /*0x51922a*/
    if ( !*v32 ) /*0x51922f*/
      sub_7DC720(-2147467261); /*0x51923c*/
    v41 = *v32; /*0x519248*/
    v42 = *v41; /*0x519255*/
    this = *(InfantryClass **)v17; /*0x519267*/
    v43 = (*(int (__stdcall **)(int *, InfantryClass *, int *, unsigned int, int, unsigned int, int, unsigned int, int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int))(v42 + 136))( /*0x519271*/
            v41,
            v35,
            a2,
            0,
            256,
            0,
            2,
            0,
            1000,
            0,
            0,
            0,
            0,
            0,
            0);
    (*(void (__thiscall **)(int, InfantryClass *, int))(a15 + 1292))(v17, this, v43); /*0x519286*/
  LABEL_53:
    if ( *(unsigned int *)v69.m_Position ) /*0x5195ee*/
      v69->vt_slot_8(*(unsigned int *)v69.m_Position); /*0x5195f3*/
    goto LABEL_56; /*0x5195f6*/
  }
  v69.StreamClass_field_0C = (*(int (__thiscall **)(int))(*(unsigned int *)v17 + 108))(v17); /*0x51929d*/
  if ( v69.StreamClass_field_0C )
  {
    this = *(InfantryClass **)(*(int (__thiscall **)(int, int *))(*(unsigned int *)v17 + 448))(v17, &v69.m_Position); /*0x5192da*/
    TacticalClass::AddToDrawQueue((TacticalClass *)g_TacticalClass_Instance, v17, ptr_0, v72); /*0x5192e6*/
    if ( (uint8_t)LightningStorm::IsActive() ) /*0x5192eb*/
    {
      uniqueId = dword_A8B230[379].uniqueId; /*0x5192fa*/
    }
    else if ( (uint8_t)PsyDom::IsActive() ) /*0x519302*/
    {
      uniqueId = dword_A8B230[380].NeedsSaveOrLink; /*0x519311*/
    }
    else if ( NukeFlash::IsActive() ) /*0x519319*/
    {
      uniqueId = dword_A8B230[380].ptr_4; /*0x519327*/
    }
    else
    {
      uniqueId = dword_A8B230[378].referenceCount; /*0x519335*/
    }
    if ( *(unsigned char *)(v17 + 140) ) /*0x51933b*/
      goto LABEL_39; /*0x51933b*/
    v45 = (int *)(v17 + 156); /*0x519349*/
    v73 = *(unsigned int *)(v17 + 156); /*0x519353*/
    v74 = *(unsigned int *)(v17 + 160); /*0x51935f*/
    v75 = *(unsigned int *)(v17 + 164); /*0x51936b*/
    if ( (Coord::To_Cell((Coord *)&dword_87F7E8, &v73)->flags & 0x10000) == 0 ) /*0x51937e*/
      goto LABEL_38; /*0x51937e*/
    v73 = *v45; /*0x519384*/
    v74 = *(unsigned int *)(v17 + 160); /*0x51938b*/
    v46 = *(unsigned int *)(v17 + 164); /*0x51938f*/
    v73 = *v45; /*0x519394*/
    v74 = *(unsigned int *)(v17 + 160); /*0x5193a0*/
    v75 = *(unsigned int *)(v17 + 164); /*0x5193a7*/
    if ( v46 > (int)(dword_A8F234 / 2 + Cell::GetGroundHeight(&v73)) )
    {
  LABEL_39:
      v51 = uniqueId * ((*(int (__thiscall **)(int))(*(unsigned int *)v17 + 456))(v17) / (2 * dword_A8F240)); /*0x51943c*/
      v50 = v51 + *((int16_t *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (int16_t *)&this) + 133); /*0x51944b*/
    }
    else
    {
  LABEL_38:
      v47 = *(unsigned int *)(v17 + 164); /*0x5193c9*/
      v48 = *(unsigned int *)(v17 + 160); /*0x5193cc*/
      v73 = *v45; /*0x5193cf*/
      v75 = v47; /*0x5193d7*/
      v74 = v48; /*0x5193e1*/
      v49 = (Coord::To_Cell((Coord *)&dword_87F7E8, &v73)->flags & 0x10000) != 0 ? 0xFFFFFE0C : 0;
      v50 = *((int16_t *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (int16_t *)&this) + 133) + v49; /*0x519416*/
    }
    v52 = *(unsigned int *)dword_8871E0->RadColor + v50; /*0x519457*/
    v53 = (*(int (__thiscall **)(int))(*(unsigned int *)v17 + 456))(v17); /*0x519469*/
    v73 = *(unsigned int *)(v17 + 156); /*0x51946f*/
    v74 = *(unsigned int *)(v17 + 160); /*0x519480*/
    v75 = *(unsigned int *)(v17 + 164); /*0x519487*/
    m_Position = Coord::To_Cell((Coord *)&dword_87F7E8, &v73); /*0x519490*/
    v69.m_Position = (int)m_Position; /*0x519492*/
    flags = m_Position->flags; /*0x519496*/
    if ( (flags & 0x100) == 0 || v53 < dword_A8F234 ) /*0x5194a7*/
      goto LABEL_48; /*0x5194a7*/
    if ( (flags & 0x800) != 0 ) /*0x5194ac*/
    {
      if ( (*((unsigned int *)Cell::GetNeighbourContent((Cell *)m_Position, 0) + 80) & 0x100) != 0 ) /*0x5194be*/
      {
  LABEL_47:
        v53 -= dword_A8F234; /*0x5194e1*/
  LABEL_48:
        if ( v53 > 0 && (dword_A8F244 || (dword_A8F244 = (int)SearchMIXFile(aInfshdwShp, 0)) != 0) ) /*0x51950b*/
        {
          v56 = *(unsigned int *)(v17 + 160); /*0x51950f*/
          v57 = *(unsigned int *)(v17 + 164); /*0x519512*/
          v73 = *(unsigned int *)(v17 + 156); /*0x519517*/
          v74 = v56; /*0x51951b*/
          v58 = ZCoordToScreenY(v53); /*0x51951f*/
          v69.m_Size = v72 - *(char *)(v17 + 1716) + v58; /*0x51953b*/
          v69.m_Position = ptr_0; /*0x51954e*/
          v59 = ZCoordToScreenY(v57 - v53); /*0x519552*/
          DrawToSurfaceSHP( /*0x519585*/
            (int)g_DSurface_Hidden_2,
            (int)dword_87F6C4,
            dword_A8F244,
            1u,
            &v69.m_Position,
            a2,
            9729,
            0,
            -5 - v59,
            0,
            1000,
            0,
            0,
            0,
            0,
            0);
        }
        v69.m_Size = v72 - *(char *)(v17 + 1716); /*0x5195ab*/
        v64 = dword_825500; /*0x5195b8*/
        v62 = a2; /*0x5195ca*/
        v69.m_Position = ptr_0; /*0x5195cb*/
        v60 = *(InfantryClass **)v17; /*0x5195cf*/
        v61 = CalculateLocomotionFrameIndex((TechnoClass *)v17); /*0x5195d5*/
        ((void (__thiscall *)(int, int, int, int *, int *, unsigned int, int, int, int, unsigned int, int, int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int))v60->shouldLoseTarget)( /*0x5195e2*/
          v17,
          v69.StreamClass_field_0C,
          v61,
          &v69.m_Position,
          v62,
          0,
          256,
          v64,
          2,
          0,
          v52,
          v68,
          0,
          0,
          0,
          0,
          0);
        goto LABEL_53; /*0x5195e2*/
      }
      m_Position = (CellClass *)v69.m_Position; /*0x5194c0*/
    }
    if ( (m_Position->flags & 0x800) != 0 /*0x5194df*/
      || (*((unsigned int *)Cell::GetNeighbourContent((Cell *)m_Position, 6u) + 80) & 0x100) == 0 )
    {
      goto LABEL_48; /*0x5194df*/
    }
    goto LABEL_47; /*0x5194df*/
  }
  if ( *(unsigned int *)v69.m_Position ) /*0x5192a9*/
    (*(void (__stdcall **)(unsigned int))(**(unsigned int **)v69.m_Position + 8))(*(unsigned int *)v69.m_Position); /*0x5192b2*/
}
void InfantryClass::DrawShadow(Point2D* screen_pos, RectangleStruct* bounds) const
{
    (void)screen_pos;
    (void)bounds;
}

} // namespace gamemd

#include "e4/classes/Rules_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/HouseClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/_tree_alias_e4.hpp"  // gB C2027 supply
#include "e4/classes/TriggerTypeClass_e4.hpp"  // w16g4 C3861 TriggerTypeClass:: supply
#include "e4/classes/ObjectPlacement_e4.hpp"  // w16g4 C3861 ObjectPlacement:: supply

namespace gamemd {

// --- InfantryClass ---

// 0x523300
HRESULT __stdcall InfantryClass::GetClassID(CLSID* pClassID) { return E_NOTIMPL; 
  if ( !pClassID ) /*0x523306*/
    return -2147467261; /*0x523308*/
  *pClassID = 237448644; /*0x523316*/
  pClassID[1] = 298949647; /*0x52331e*/
  pClassID[2] = -1610610249; /*0x523327*/
  pClassID[3] = unk_7E968C; /*0x523330*/
  return 0; /*0x52330d*/
}