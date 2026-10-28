// G42.32 P: tree-universe marker -- e4 tree-owned decls suppressed
#define GAMEMD_TREE_UNIVERSE 1
#include "structure/unit.hpp"
#include "structure/globals_structure.hpp"

#include <cstring>
#include <cmath>
#include "e4/e4_globals_decls.hpp"
#include "entity/anim.hpp"
#include "entity/bullet.hpp"
#include "misc/locomotion.hpp"
#include "misc/misc_ext.hpp"
#include "structure/building.hpp"
#include "e4/classes/Cell_e4.hpp"  // G42.34j: after tree headers (fwd names provided)
#include "e4/classes/Math_e4.hpp"  // G42.36 C2027 supply
#include "system/map.hpp"
extern int * StartAudioControllerAt(int aP0, unsigned int *a2, int **a1);  // W13-C raw 0x7509E0 (e4_protos.h:501 同形)
extern char FindPlacementPosition(void *a1, int a2, int a3, int a4, int a5);  // W13-C raw 0x718260 ObjectClass::FindPlacementPosition thiscall 自由形
// ---- g57b5 W5: qualified-call free-form vocab ----
namespace gamemd {
int Sqrt(double p0);  // x4:signals@0x4cac40
int AnimClass_ctor(void* p0, int* p1, void* p2, int p3, void* p4, void* p5, char p6);  // x4:signals@0x421ea0
int BuildingClass_CreatePlacementCrater(BuildingClass *p_this);  // x4:ida@0x486e70
int BulletClass_LoseTarget(BulletClass *p_this);  // x4:ida@0x468430
int Cell_GetNeighbourContent(unsigned int p0);  // x4:signals@0x481810
int FootClass_MissionMoveCarryallLand(FootClass *p_this);  // x4:ida@0x416af0
int MissionClass_GetMissionControl(MissionClass *p_this);  // x4:ida@0x5b3a00
int Random_Range(int p0, int p1);  // x4:signals@0x65c7e0
int TechnoClass_FindClosestPlacementCell(TechnoClass *p_this);  // x4:ida@0x41a160
int TechnoClass_GetWaypointCoords(int* p0);  // x4:signals@0x6f18a0
int AddMember(int p0);  // x4:signals@0x6ea4f0
int ApplyOverlayReveal(uint16_t* p0, char* p1);  // x4:signals@0x5687f0
int FillRevealBuffer(uint16_t* p0, uint8_t* p1);  // x4:signals@0x5683c0
int FindNearbyCell(int p0);  // x4:signals@0x418e20
int GetDB(CCINIClass *p_this);  // x4:ida@0x473450
int Get_Waypoint_Location(int* p0, int p1);  // x4:signals@0x68bcc0
int RoundToInt(double p0);  // x4:signals@0x7c5f00
int SelectMember(int p0);  // x4:signals@0x6e9050
} // namespace gamemd
// ---- g57b5 W5 end ----

namespace gamemd {

namespace {

constexpr uint32_t kUnitFlag = (uint32_t)(AbstractFlags::Foot)
                              | (uint32_t)(AbstractFlags::Object)
                              | (uint32_t)(AbstractFlags::Techno);

} // anonymous namespace

// IDA: 0x7353C0 -- UnitClass::Construct (960B)
UnitClass::UnitClass() noexcept
    : UnitClass_field_int_6C0((int)(-1))
    , Type(nullptr)
    , FollowerCar(nullptr)
    , FlagHouseIndex(-1)
    , HasFollowerCar(false)
    , Unloading(false)
    , UnitClass_field_bool_6D2(false)
    , TerrainPalette(false)
    , UnitClass_field_int_6D4((int)(-1))
    , DeathFrameCounter((int)(-1))
    , ElectricBolt(nullptr)
    , Deployed(false)
    , Deploying(false)
    , Undeploying(false)
    , NonPassengerCount(0)
{
    abstractFlags = (void *)(kUnitFlag);
}

// ============================================================
// Phase 3: Harvest/Unload
// ============================================================

// 0x4151e0
// Merged: Westwood combined harvest + unload into a single 5-case state machine.
// Case 3 handles unloading logic (pop cargo, apply overlay, handle team members).
{

  int movementDestination; // ecx
  int v3; // edi
  int v4; // ebp
  int v5; // ebx
  unsigned int *v6; // eax
  char *MissionControl; // eax
  int v8; // eax
  int v10; // eax
  int v11; // edi
  void *ClosestPlacementCell; // eax
  int DB; // eax
  int v14; // edi
  TechnoClass **v15; // eax
  int ptr_0; // ebx
  __int16 *WaypointCoords; // eax
  void *v18; // eax
  void *NearbyCell; // eax
  int v20; // edi
  __int16 *Waypoint_Location; // eax
  void *v22; // eax
  void *v23; // eax
  int team; // ecx
  int v25; // edi
  int v26; // edi
  unsigned short *v27; // eax
  unsigned short *v28; // eax
  char *v29; // [esp+0h] [ebp-30h]
  int v30; // [esp+10h] [ebp-20h] BYREF
  int v31; // [esp+14h] [ebp-1Ch] BYREF
  int v32; // [esp+18h] [ebp-18h] BYREF
  unsigned char v33[4]; // [esp+1Ch] [ebp-14h] BYREF
  unsigned char v34[4]; // [esp+20h] [ebp-10h] BYREF
  unsigned char v35[12]; // [esp+24h] [ebp-Ch] BYREF

  switch ( this->missionStatus )
  {
    case 0:
      if ( !(*(int (**)(AircraftClass *))&this->ptr_0->u32_1C8)(this)
        && *&this->pitchAngle == 0.0
        && ((movementDestination = this->movementDestination) == 0
         || (v3 = this->location[0],
             v4 = this->location[1],
             v5 = this->location[2],
             v6 = (unsigned int *)(*(int (**)(int, unsigned char *))(*(unsigned int *)movementDestination + 72))(
                              movementDestination,
                              v35),
             v3 == *v6)
         && v4 == v6[1]
         && v5 == v6[2]) )
      {
        this->missionStatus = 3; /*0x415250*/
      }
      else if ( this->movementDestination
             || !*(unsigned char *)&this->Type->IsDropship
             || (*(int (**)(AircraftClass *))&this->ptr_0->u32_1C8)(this) <= 0 )
      {
        if ( this->movementDestination )
        {
          if ( (*(unsigned __int8 (**)(AircraftClass *, int))(this->ptr_0 + 1360))(
                 this,
                 this->movementDestination) )
          {
            DB = CCINIClass::GetDB((CCINIClass *)this->passengers); /*0x415334*/
            v14 = DB; /*0x415339*/
            if ( DB /*0x415360*/
              && (v15 = *(TechnoClass ***)(DB + 1492)) != 0
              && *TechnoClass::GetWaypointCoords(v15[9], &v30) != g_AircraftStatusFlag )
            {
              ptr_0 = this->ptr_0; /*0x415375*/
              WaypointCoords = (__int16 *)TechnoClass::GetWaypointCoords( /*0x415381*/
                                            *(TechnoClass **)(*(unsigned int *)(v14 + 1492) + 36),
                                            &v31);
              v18 = ((CellCoord *)&dword_87F7E8)->To_CellObj(WaypointCoords); /*0x41538c*/
              NearbyCell = InfantryClass::FindNearbyCell((InfantryClass *)this, (int)v18); /*0x415394*/
              (*(void (**)(AircraftClass *, void *, int))(ptr_0 + 1152))(this, NearbyCell, 1); /*0x41539c*/
            }
            else
            {
              v20 = this->ptr_0; /*0x4153ad*/
              Waypoint_Location = (__int16 *)ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v32, 700); /*0x4153bb*/
              v22 = ((CellCoord *)&dword_87F7E8)->To_CellObj(Waypoint_Location); /*0x4153c6*/
              v23 = InfantryClass::FindNearbyCell((InfantryClass *)this, (int)v22); /*0x4153ce*/
              (*(void (**)(AircraftClass *, void *, int))(v20 + 1152))(this, v23, 1); /*0x4153d6*/
              team = this->team; /*0x4153dc*/
              if ( team ) /*0x4153e4*/
                TeamClass::SelectMember(team, this->movementDestination); /*0x4153f1*/
            }
          }
          else
          {
            v25 = (*(int (**)(int))(*(unsigned int *)this->Type + 188))(this->Type); /*0x41540d*/
            this->missionStatus = v25 != this->GetZAboveGround() ? 4 : 1;
          }
        }
        else
        {
          this->missionStatus = 2; /*0x41530c*/
        }
      }
      else
      {
        v10 = (*(int (**)(AircraftClass *, int, unsigned int, unsigned int))(this->ptr_0 + 1320))( /*0x4152cd*/
                this,
                this->Type + 1000,
                0,
                0);
        if ( v10 ) /*0x4152d5*/
        {
          this->Stub( v10, 1); /*0x4152de*/
        }
        else
        {
          v11 = this->ptr_0; /*0x4152e9*/
          ClosestPlacementCell = TechnoClass::FindClosestPlacementCell((TechnoClass *)this); /*0x4152ef*/
          (*(void (**)(AircraftClass *, void *, int))(v11 + 1152))(this, ClosestPlacementCell, 1); /*0x4152f7*/
        }
      }
      goto LABEL_9; /*0x415250*/
    case 1:
      if ( !this->locomotor ) /*0x41542a*/
        sub_7DC720(-2147467261); /*0x415439*/
      if ( !(*(unsigned __int8 (**)(int))(*(unsigned int *)this->locomotor + 16))(this->locomotor) ) /*0x415447*/
        this->missionStatus = 2; /*0x41544e*/
      if ( !(*(unsigned __int8 (**)(AircraftClass *, int))(this->ptr_0 + 1360))( /*0x415463*/
              this,
              this->movementDestination) )
        this->missionStatus = 0; /*0x415471*/
      goto LABEL_9; /*0x41547b*/
    case 2:
      if ( !this->locomotor ) /*0x415480*/
        sub_7DC720(-2147467261); /*0x41548f*/
      if ( !(*(unsigned __int8 (**)(int))(*(unsigned int *)this->locomotor + 16))(this->locomotor) ) /*0x41549d*/
        this->missionStatus = 3; /*0x4154a4*/
      return 1; /*0x4154ba*/
    case 3:
      if ( !this->isTether[0] ) /*0x4154bb*/
      {
        if ( this->passengers[1] ) /*0x4154c9*/
        {
          if ( *(unsigned char *)&this->Type->Carryall_d ) /*0x4154dd*/
          {
            this->UpdateProductionDisplay( 0); /*0x4154ed*/
            FootClass::MissionMoveCarryallLand((FootClass *)this); /*0x4154f5*/
            this->UpdateProductionDisplay( 1); /*0x415500*/
          }
          else
          {
            v26 = LinkedList::Pop((LinkedList *)this->passengers); /*0x41551a*/
            v27 = (unsigned short *)this->vt_slot_440( /*0x415522*/
                             this,
                             v33,
                             this);
            MapClass::ApplyOverlayReveal((MapClass *)&dword_87F7E8, v27, v29); /*0x41552e*/
            if ( this->COMStub_64(this, v26) ) /*0x41553e*/
              v26->u8_424 = 0; /*0x415548*/
            v28 = (unsigned short *)this->GetCellCoords_Alt( v34); /*0x415559*/
            MapClass::FillRevealBuffer((MapClass *)&dword_87F7E8, v28, this); /*0x415565*/
            if ( !*(unsigned char *)(v26 + 1060) && v26->u32_5D4 ) /*0x415574*/
              TeamClass::AddMember((int *)this->team, v26, 0); /*0x415587*/
            if ( !this->passengers[1] ) /*0x41558c*/
              this->CompleteFactoryProduction( 0, 1); /*0x4155a2*/
          }
        }
        else
        {
          this->CompleteFactoryProduction( 0, 1); /*0x4155b5*/
        }
      }
      goto LABEL_9; /*0x415506*/
    case 4:
      this->missionStatus = 0; /*0x4155c0*/
      return 1; /*0x4155cd*/
    default:
LABEL_9:
      MissionControl = MissionClass::GetMissionControl((MissionClass *)this); /*0x41525a*/
      (v8) = ((v8) & ~0xFFFF) | ((Math::RoundToInt(*((double *)MissionControl + 2) * 900.0)) & 0xFFFF); /*0x41526a*/
      return v8 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2);
  }

}
// 0x6b6080
int UnitClass::CreateUnloadPlacementCraters(CellStruct* a2)
{

  int result; // eax
  int i; // ebx
  unsigned int *v6; // eax
  int v7; // [esp+4h] [ebp-8h]
  unsigned short *v8; // [esp+8h] [ebp-4h] BYREF
  unsigned short *v9; // [esp+10h] [ebp+4h]

  v7 = 0; /*0x6b6086*/
  result = this->u8_A7; /*0x6b608e*/
  if ( result > 0 ) /*0x6b6096*/
  {
    do /*0x6b611c*/
    {
      for ( i = 0; i < this->u32_A6; ++i ) /*0x6b60ac*/
      {
        LOWORD(v9) = i + *a2; /*0x6b60bd*/
        HIWORD(v9) = v7 + a2[1]; /*0x6b60c6*/
        v8 = v9; /*0x6b60d5*/
        v6 = ((CellCoord *)(&dword_87F7E8))->To_CellObj((__int16 *)&v8); /*0x6b60d9*/
        v6->q048 = this->u32_A5; /*0x6b60ea*/
        v6->u8_11F = i + this->storedTiberium * v7; /*0x6b60f5*/
        BuildingClass::CreatePlacementCrater(v6); /*0x6b60fb*/
      }
      result = ++v7; /*0x6b6115*/
    }
    while ( v7 < this->u8_A7 ); /*0x6b611c*/
  }
  return result; /*0x6b6120*/

}
// 0x54e3b0
int UnitClass::GetExitCell(AbstractClass* aP1, AbstractClass* aP2, unsigned int *a2, unsigned int *a3)  // g57b5 W4: raw 真值补参 (a2,a3)
{
  int result; // eax
  unsigned int *v6; // eax
  bool v9; // zf
  unsigned int v10; // edi
  unsigned int *v11; // eax
  unsigned int *v12; // eax
  int v13; // ecx
  int v14; // edx
  char v15[12]; // [esp+Ch] [ebp-Ch] BYREF

  a2 = a2; /*0x54e3b6*/
  if ( !*(unsigned char *)(a2[433] + 3432) ) /*0x54e3c2*/
    return (*(int (__thiscall **)(unsigned int *, unsigned int))(*a2 + 988))(a2, 0); /*0x54e3d2*/
  v6 = (unsigned int *)(operator new(8u)); /*0x54e3e3*/
  a3 = a3; /*0x54e3e8*/
  v6 = v6; /*0x54e3ec*/
  v9 = a3 == 0; /*0x54e3f1*/
  *v6 = (unsigned int)(a2); /*0x54e3f3*/
  if ( v9 ) /*0x54e3f5*/
  {
    v10 = ((unsigned int)((*ProgressTimer::GetValue((unsigned short *)a2 + 452, &a2) >> 12) + 1) >> 1) & 7; /*0x54e414*/
    v11 = (unsigned int *)(*(int (__thiscall **)(unsigned int *))(*a2 + 444))(a2); /*0x54e417*/
    v6[1] = Cell::GetNeighbourContent(v11, v10); /*0x54e425*/
  }
  else
  {
    v12 = (unsigned int *)(*(int (__thiscall **)(unsigned int *, char *))(*a3 + 72))(a3, v15); /*0x54e432*/
    (*((unsigned short *)&(a2))) = *v12 / 256; /*0x54e445*/
    (*(((unsigned short *)&(a2)) + 1)) = v12[1] / 256; /*0x54e45e*/
    a3 = a2; /*0x54e46c*/
    v6[1] = (unsigned int)(((CellCoord *)(&dword_87F7E8))->To_CellObj((int16_t *)&a3)); /*0x54e475*/
  }
  *((unsigned char *)a2 + 1738) = 1; /*0x54e47d*/
  a2[191] = 1; /*0x54e483*/
  result = (int)(this->abstractFlags); /*0x54e489*/
  if ( this->referenceCount < result /*0x54e4b6*/
    || (this->customSound || !result)
    && (v13 = this->needsSave, v13 > 0)
    && (result = this->ptr_C->g_var_326827(&this->nextObject, result + v13, 0),
        (unsigned char)result) )
  {
    result = this->referenceCount; /*0x54e4b8*/
    v14 = this->uniqueId; /*0x54e4bb*/
    this->referenceCount = result + 1; /*0x54e4c1*/
    *(unsigned int *)(v14 + 4 * result) = (unsigned int)(v6); /*0x54e4c4*/
  }
  return result; /*0x54e3d8*/
}
/* ASM:
sub     esp, 0Ch
push    ebx
push    ebp
push    esi
mov     esi, [esp+18h+arg_0]
mov     ebp, ecx
mov     eax, [esi+6C4h]
mov     cl, [eax+0D68h]
test    cl, cl
jnz     short loc_54E3E1
mov     edx, [esi]
push    0
mov     ecx, esi
call    dword ptr [edx+3DCh]
pop     esi
pop     ebp
pop     ebx
add     esp, 0Ch
retn    8
; ---------------------------------------------------------------------------

loc_54E3E1:                             ; CODE XREF: UnitClass__GetExitCell+1A↑j
push    8               ; Size
call    ??2_YAPAXI_Z
mov     ecx, [esp+1Ch+arg_4]
mov     ebx, eax
add     esp, 4
test    ecx, ecx
mov     [ebx], esi
jnz     short loc_54E42B
lea     eax, [esp+18h+arg_0]
push    edi
push    eax
lea     ecx, [esi+388h]
call    ProgressTimer__GetValue
mov     edi, [eax]
mov     edx, [esi]
shr     edi, 0Ch
inc     edi
mov     ecx, esi
shr     edi, 1
and     edi, 7
call    dword ptr [edx+1BCh]
push    edi
mov     ecx, eax
call    Cell__GetNeighbourContent
mov     [ebx+4], eax
pop     edi
jmp     short loc_54E478
; ---------------------------------------------------------------------------

loc_54E42B:                             ; CODE XREF: UnitClass__GetExitCell+45↑j
mov     eax, [ecx]
lea     edx, [esp+18h+var_C]
push    edx
call    dword ptr [eax+48h]
mov     ecx, eax
mov     eax, [ecx]
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+18h+arg_0], ax
mov     eax, [ecx+4]
cdq
and     edx, 0FFh
lea     ecx, [esp+18h+arg_4]
add     eax, edx
push    ecx
sar     eax, 8
mov     word ptr [esp+1Ch+arg_0+2], ax
mov     eax, [esp+1Ch+arg_0]
mov     ecx, 87F7E8h
mov     [esp+1Ch+arg_4], eax
call    CellCoord__To_CellObj
mov     [ebx+4], eax

loc_54E478:                             ; CODE XREF: UnitClass__GetExitCell+79↑j
mov     eax, 1
mov     [esi+6CAh], al
mov     [esi+2FCh], eax
mov     eax, [ebp+14h]
mov     ecx, [ebp+1Ch]
lea     esi, [ebp+0Ch]
cmp     ecx, eax
jl      short loc_54E4B8
mov     cl, [esi+0Dh]
test    cl, cl
jnz     short loc_54E4A1
test    eax, eax
jnz     short loc_54E4C7

loc_54E4A1:                             ; CODE XREF: UnitClass__GetExitCell+EB↑j
mov     ecx, [esi+14h]
test    ecx, ecx
jle     short loc_54E4C7
mov     edx, [esi]
add     ecx, eax
push    0
push    ecx
mov     ecx, esi
call    dword ptr [edx+8]
test    al, al
jz      short loc_54E4C7

loc_54E4B8:                             ; CODE XREF: UnitClass__GetExitCell+E4↑j
mov     eax, [esi+10h]
mov     edx, [esi+4]
lea     ecx, [eax+1]
mov     [esi+10h], ecx
mov     [edx+eax*4], ebx

loc_54E4C7:                             ; CODE XREF: UnitClass__GetExitCell+EF↑j
; UnitClass__GetExitCell+F6↑j ...
pop     esi
pop     ebp
pop     ebx
add     esp, 0Ch
retn    8
*/

// ============================================================
// Phase 3: Deploy
// ============================================================

// 0x7192f0
int UnitClass::Deploy()
{

  double v1; // st7
  TeleportLocomotionClass *v2; // esi
  int Owner; // ecx
  int v4; // eax
  int v5; // edx
  unsigned int *v7; // ecx
  int *v8; // ebp
  int i; // edi
  BulletClass *v10; // ecx
  AnimClass *v11; // eax
  int *v12; // ecx
  unsigned int *v13; // eax
  int v14; // edi
  int v15; // ecx
  int v16; // edx
  int v17; // eax
  TeleportLocomotionClass *v18; // eax
  int *p_State; // edi
  RulesClass *v20; // ebx
  int v21; // eax
  int v22; // edx
  int v23; // eax
  int v24; // ebx
  int *v25; // eax
  TeleportLocomotionClass *v26; // edx
  int v27; // ecx
  int v28; // edx
  int *v29; // edi
  int v30; // eax
  int *v31; // edi
  CrateClass *v32; // ebx
  int *v33; // edi
  int v34; // eax
  int *v35; // edi
  AnimClass *v36; // eax
  int *v37; // ecx
  AnimClass *v38; // eax
  int *v39; // edx
  int *v40; // edi
  int v41; // eax
  int *v42; // edi
  char PlacementPosition; // al
  int v44; // edi
  int *v45; // ebp
  int *v46; // edi
  int v47; // eax
  int *v48; // edi
  __int16 *v49; // eax
  unsigned char *v50; // ecx
  int v51; // ecx
  AnimClass *v52; // eax
  int *v53; // ecx
  BuildingClass *v54; // [esp+18h] [ebp-30h]
  __int16 v55[2]; // [esp+28h] [ebp-20h] BYREF
  int v56; // [esp+2Ch] [ebp-1Ch] BYREF
  int v57; // [esp+30h] [ebp-18h]
  int v58; // [esp+34h] [ebp-14h]
  char v59[4]; // [esp+38h] [ebp-10h] BYREF
  int v60; // [esp+3Ch] [ebp-Ch]
  int v61; // [esp+44h] [ebp-4h]

  v2 = this; /*0x7192f6*/
  Owner = this->Owner; /*0x7192fd*/
  v61 = 0; /*0x719300*/
  if ( *(unsigned char *)(Owner + 625) && !*(unsigned int *)this->Moving && !Owner->q280 ) /*0x719313*/
    goto LABEL_82; /*0x719319*/
  v4 = *(unsigned int *)this->Moving; /*0x719331*/
  if ( !v4 ) /*0x719336*/
  {
    v5 = Owner->q280; /*0x719338*/
    if ( v5 ) /*0x719340*/
    {
      *(unsigned int *)this->Moving = v5; /*0x719342*/
      return 0; /*0x71934e*/
    }
  }
  if ( Owner->q27C ) /*0x719351*/
  {
    if ( !v4 ) /*0x7197ce*/
    {
      Owner->q270 = 1; /*0x7197d0*/
      v2->State = *(unsigned int *)&stru_A8E960.random[528]; /*0x7197e4*/
      v2->Timer[0] = v60; /*0x7197ea*/
      v2->Timer[1] = 60; /*0x7197ed*/
      ++*(unsigned int *)v2->Moving; /*0x7197f4*/
      return 0; /*0x719800*/
    }
  }
  else if ( v4 <= 0 ) /*0x719361*/
  {
    if ( (*(unsigned __int8 (**)(TeleportLocomotionClass *))(*&this->uniqueId + 16))(this) ) /*0x71936a*/
    {
      v7 = (unsigned int *)v2->Owner; /*0x719375*/
      v8 = &v2->MovingDestination[2]; /*0x719378*/
      if ( v7[39] == v2->MovingDestination[2] && v7[40] == v2->LastCoords[0] && v7[41] == v2->LastCoords[1] /*0x7193c1*/
        || *v8 == dword_B0EBF8 && v2->LastCoords[0] == dword_B0EBFC && v2->LastCoords[1] == dword_B0EC00 )
      {
        (*(void (**)(unsigned int *, unsigned int, int))(*v7 + 1152))(v7, 0, 1); /*0x7197b4*/
        (*(void (**)(TeleportLocomotionClass *))(*&v2->u32_48 + 72))(v2); /*0x7197bd*/
        return 0; /*0x7197c0*/
      }
      else
      {
        AbstractClass::ClearTargetToMeClearManagerTarget((int)v7); /*0x7193c7*/
        for ( i = *(unsigned int *)&stru_A8E960.random[476] - 1; i >= 0; --i ) /*0x7193d6*/
        {
          v10 = *(BulletClass **)(*(unsigned int *)&stru_A8E960.random[464] + 4 * i); /*0x7193e1*/
          if ( v10->BulletClass_field_0x10C == v2->Owner ) /*0x7193ec*/
            BulletClass::LoseTarget(v10); /*0x7193ee*/
        }
        v11 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x7193fb*/
        if ( v11 ) /*0x719405*/
        {
          v12 = (int *)(v2->Owner + 156); /*0x71940b*/
          v56 = *v12; /*0x71941c*/
          v57 = v12[1]; /*0x719423*/
          v58 = v12[2]; /*0x71942f*/
          AnimClass::ctor(v11, *&dword_8871E0->u32_33C, &v56, 0, 1, (void *)0x600, 0, 0); /*0x719442*/
        }
        v13 = (unsigned int *)(*(int (**)(int, char *))(*(unsigned int *)v2->Owner + 72))(v2->Owner, v59); /*0x719451*/
        v14 = v2->LastCoords[1]; /*0x719459*/
        v15 = *v13 - *v8; /*0x71945c*/
        v16 = v13[1]; /*0x71945e*/
        v17 = v13[2]; /*0x719461*/
        v56 = v15; /*0x719464*/
        v57 = v16 - v2->LastCoords[0]; /*0x71946f*/
        v58 = v17 - v14; /*0x719473*/
        Math::Sqrt((double)v15 * (double)v15 + (double)(v17 - v14) * (double)(v17 - v14) + (double)v57 * (double)v57); /*0x71949f*/
        LOWORD(v18) = Math::RoundToInt(v1); /*0x7194a7*/
        p_State = &v2->State; /*0x7194ac*/
        this = v18; /*0x7194ba*/
        v2->State = *(unsigned int *)&stru_A8E960.random[528]; /*0x7194be*/
        v2->Timer[0] = v60; /*0x7194c4*/
        v2->Timer[1] = 0; /*0x7194c7*/
        v20 = dword_8871E0; /*0x7194ca*/
        if ( LOBYTE(dword_8871E0->Difficult[3]) ) /*0x7194d0*/
        {
          v21 = (int)v18 / dword_8871E0->Difficult[2]; /*0x7194e3*/
          *p_State = *(unsigned int *)&stru_A8E960.random[528]; /*0x7194eb*/
          v2->Timer[0] = v60; /*0x7194f1*/
          v2->Timer[1] = v21; /*0x7194f4*/
          v20 = dword_8871E0; /*0x7194f7*/
        }
        v22 = *p_State; /*0x7194fd*/
        v23 = v2->Timer[1]; /*0x7194ff*/
        if ( *p_State != -1 ) /*0x719505*/
        {
          if ( *(unsigned int *)&stru_A8E960.random[528] - v22 >= v23 ) /*0x719511*/
            v23 = 0; /*0x719517*/
          else
            v23 -= *(unsigned int *)&stru_A8E960.random[528] - v22; /*0x719513*/
        }
        v24 = v20->Difficult[4]; /*0x719519*/
        if ( v23 <= v24 ) /*0x719521*/
        {
          v58 = v24; /*0x71952d*/
          v56 = *(unsigned int *)&stru_A8E960.random[528]; /*0x719531*/
          v25 = &v56; /*0x719535*/
        }
        else
        {
          v25 = &v2->State; /*0x719523*/
        }
        *p_State = *v25; /*0x71953d*/
        v2->Timer[0] = v25->u32_4; /*0x719542*/
        v26 = this; /*0x719548*/
        v2->Timer[1] = v25->u32_8; /*0x71954c*/
        if ( (int)v26 < dword_8871E0->Difficult[5] ) /*0x71955b*/
        {
          v27 = dword_8871E0->Difficult[4]; /*0x719562*/
          *p_State = *(unsigned int *)&stru_A8E960.random[528]; /*0x71956a*/
          v2->Timer[0] = v60; /*0x719570*/
          v2->Timer[1] = v27; /*0x719573*/
        }
        *(unsigned char *)(v2->Owner + 625) = 1; /*0x719579*/
        if ( (*(int (**)(int))(*(unsigned int *)v2->Owner + 44))(v2->Owner) == 1 /*0x719596*/
          && *(unsigned char *)(*(unsigned int *)(v2->Owner + 1732) + 3598) )
        {
          v28 = v60; /*0x7195a5*/
          *p_State = *(unsigned int *)&stru_A8E960.random[528]; /*0x7195ab*/
          v2->Timer[0] = v28; /*0x7195ad*/
          v2->Timer[1] = 0; /*0x7195b0*/
          *(unsigned char *)(v2->Owner + 625) = 0; /*0x7195b6*/
        }
        if ( *(unsigned int *)(v2->Owner + 1684) ) /*0x7195bf*/
          BuildingClass::Deploy(v54, (int)v8, (int)p_State); /*0x7195cf*/
        (*(void (**)(int, unsigned int))(*(unsigned int *)v2->Owner + 292))(v2->Owner, 0); /*0x7195db*/
        v29 = (int *)v2->Owner; /*0x7195e1*/
        v30 = *(unsigned int *)((*(int (**)(int *))(*v29 + 132))(v29) + 1400); /*0x7195ee*/
        if ( v30 != -1 || (v30 = dword_8871E0->ConditionYellowSparkingProbability[0], v30 != -1) ) /*0x719608*/
        {
          v31 = v29 + 39; /*0x71960a*/
          v56 = *v31; /*0x719614*/
          v57 = v31[1]; /*0x71961b*/
          v58 = v31[2]; /*0x719624*/
          StartAudioControllerAt(v30, &v56, 0); /*0x71962c*/
        }
        (*(void (**)(int, int *))(*(unsigned int *)v2->Owner + 436))(v2->Owner, &v2->MovingDestination[2]); /*0x719637*/
        LOWORD(this) = *v8 / 256; /*0x71964c*/
        HIWORD(this) = v2->LastCoords[0] / 256; /*0x719664*/
        *(unsigned int *)v55 = this; /*0x71966d*/
        v32 = (CrateClass *)((CellCoord *)&dword_87F7E8)->To_CellObj(v55); /*0x71967f*/
        (*(void (**)(int, int *))(*(unsigned int *)v2->Owner + 436))(v2->Owner, &v2->MovingDestination[2]); /*0x719684*/
        *(unsigned char *)(v2->Owner + 140) = (v32[26].u32_8 & 0x100) != 0; /*0x719698*/
        (*(void (**)(int, unsigned int))(*(unsigned int *)v2->Owner + 460))(v2->Owner, 0); /*0x7196b2*/
        (*(void (**)(int, int))(*(unsigned int *)v2->Owner + 292))(v2->Owner, 1); /*0x7196bf*/
        v33 = (int *)v2->Owner; /*0x7196c5*/
        v34 = *(unsigned int *)((*(int (**)(int *))(*v33 + 132))(v33) + 1396); /*0x7196d2*/
        if ( v34 != -1 || (v34 = dword_8871E0->ConditionRedSparkingProbability[1], v34 != -1) ) /*0x7196ec*/
        {
          v35 = v33 + 39; /*0x7196ee*/
          v56 = *v35; /*0x7196f8*/
          v57 = v35[1]; /*0x7196ff*/
          v58 = v35[2]; /*0x719708*/
          StartAudioControllerAt(v34, &v56, 0); /*0x719710*/
        }
        (*(void (**)(int, int))(*(unsigned int *)v2->Owner + 396))(v2->Owner, 2); /*0x71971c*/
        (*(void (**)(TeleportLocomotionClass *))(*&v2->u32_48 + 72))(v2); /*0x719725*/
        CrateClass::ProcessPickup(v32, v2->Owner); /*0x71972e*/
        (*(void (**)(int, unsigned int, int))(*(unsigned int *)v2->Owner + 1152))(v2->Owner, 0, 1); /*0x71973c*/
        v36 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x719747*/
        if ( v36 ) /*0x719751*/
        {
          v37 = (int *)(v2->Owner + 156); /*0x719758*/
          v56 = *v37; /*0x71976b*/
          v57 = v37[1]; /*0x719772*/
          v58 = v37[2]; /*0x71977e*/
          AnimClass::ctor(v36, *&dword_8871E0->u32_33C, &v56, 0, 1, (void *)0x600, 0, 0); /*0x719791*/
        }
        *(unsigned int *)(v2->Owner + 640) = 0; /*0x719799*/
        return 0; /*0x7197a3*/
      }
    }
    return 0; /*0x719be5*/
  }
  switch ( v4 ) /*0x719806*/
  {
    case 1: /*0x719806*/
LABEL_82:
      (*(void (**)(char *))(*((unsigned int *)this - 1) + 40))((char *)this - 4); /*0x719b99*/
      return 0; /*0x719bac*/
    case 2: /*0x719806*/
      v38 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x71982c*/
      if ( v38 ) /*0x719836*/
      {
        v39 = (int *)(v2->Owner + 156); /*0x71983c*/
        v56 = *v39; /*0x71984d*/
        v57 = v39[1]; /*0x719854*/
        v58 = v39[2]; /*0x719860*/
        AnimClass::ctor(v38, *&dword_8871E0->u32_33C, &v56, 0, 1, (void *)0x600, 0, 0); /*0x719873*/
      }
      (*(void (**)(int, unsigned int))(*(unsigned int *)v2->Owner + 292))(v2->Owner, 0); /*0x71987e*/
      v40 = (int *)v2->Owner; /*0x719884*/
      v41 = *(unsigned int *)((*(int (**)(int *))(*v40 + 132))(v40) + 1400); /*0x719891*/
      if ( v41 != -1 || (v41 = dword_8871E0->ConditionYellowSparkingProbability[0], v41 != -1) ) /*0x7198ab*/
      {
        v42 = v40 + 39; /*0x7198ad*/
        v56 = *v42; /*0x7198b6*/
        v57 = v42[1]; /*0x7198bd*/
        v58 = v42[2]; /*0x7198c6*/
        StartAudioControllerAt(v41, &v56, 0); /*0x7198ce*/
      }
      *(unsigned char *)(v2->Owner + 625) = 1; /*0x7198da*/
      *(unsigned char *)(v2->Owner + 636) = 0; /*0x7198e4*/
      *(unsigned char *)(v2->Owner + 624) = 0; /*0x7198ee*/
      *(unsigned char *)(v2->Owner + 140) = 0; /*0x7198fa*/
      PlacementPosition = ObjectClass::FindPlacementPosition( /*0x71991d*/
                            (ObjectClass *)&v2[-1].Piggybackee,
                            *(unsigned int *)(v2->Owner + 648),
                            *(unsigned int *)(v2->Owner + 652),
                            *(unsigned int *)(v2->Owner + 656),
                            0);
      v44 = *(unsigned int *)v2->Moving + 1; /*0x719925*/
      *(unsigned int *)v2->Moving = v44; /*0x719928*/
      if ( PlacementPosition ) /*0x71992d*/
      {
        *(unsigned int *)v2->Moving = v44 + 1; /*0x719936*/
        return 0; /*0x719940*/
      }
      return 0; /*0x71992d*/
    case 3: /*0x719806*/
      if ( ObjectClass::FindPlacementPosition( /*0x719967*/
             (ObjectClass *)((char *)this - 4),
             Owner->q288,
             Owner->q28C,
             Owner->q290,
             0) )
      {
        ++*(unsigned int *)v2->Moving; /*0x719970*/
      }
      *(unsigned int *)(v2->Owner + 644) = dword_8871E0->Difficult[0]; /*0x719983*/
      return 0; /*0x719990*/
    case 4: /*0x719806*/
      ObjectClass::FindPlacementPosition( /*0x7199b8*/
        (ObjectClass *)((char *)this - 4),
        Owner->q288,
        Owner->q28C,
        Owner->q290,
        1);
      (*(void (**)(int, int *))(*(unsigned int *)v2->Owner + 436))(v2->Owner, &v2->MovingDestination[2]); /*0x7199c6*/
      (*(void (**)(int, unsigned int))(*(unsigned int *)v2->Owner + 460))(v2->Owner, 0); /*0x7199d2*/
      (*(void (**)(int, int))(*(unsigned int *)v2->Owner + 292))(v2->Owner, 1); /*0x7199df*/
      ++*(unsigned int *)v2->Moving; /*0x7199e9*/
      return 0; /*0x7199f5*/
  }
  if ( v4 != 5 ) /*0x7199fb*/
  {
    if ( v4 != 6 ) /*0x719b97*/
    {
      if ( v4 == 7 ) /*0x719bb2*/
      {
        *(unsigned char *)(Owner + 625) = 0; /*0x719bb4*/
        TechnoClass::SetFocus((TechnoClass *)v2->Owner, 0); /*0x719bbf*/
        (*(void (**)(int, unsigned int, int))(*(unsigned int *)v2->Owner + 1152))(v2->Owner, 0, 1); /*0x719bcc*/
        LOBYTE(v2->LastCoords[2]) = 0; /*0x719bd2*/
        *(unsigned int *)(v2->Owner + 640) = 0; /*0x719bd9*/
        *(unsigned int *)v2->Moving = 0; /*0x719bdf*/
      }
      return 0; /*0x719bdf*/
    }
    goto LABEL_82; /*0x719b97*/
  }
  v45 = &this->MovingDestination[2]; /*0x719a03*/
  (*(void (**)(int, int *))(*(unsigned int *)Owner + 436))(Owner, &this->MovingDestination[2]); /*0x719a07*/
  (*(void (**)(int, unsigned int))(*(unsigned int *)v2->Owner + 460))(v2->Owner, 0); /*0x719a13*/
  (*(void (**)(int, int))(*(unsigned int *)v2->Owner + 292))(v2->Owner, 1); /*0x719a20*/
  v46 = (int *)v2->Owner; /*0x719a26*/
  v47 = *(unsigned int *)((*(int (**)(int *))(*v46 + 132))(v46) + 1396); /*0x719a33*/
  if ( v47 != -1 || (v47 = dword_8871E0->ConditionRedSparkingProbability[1], v47 != -1) ) /*0x719a4d*/
  {
    v48 = v46 + 39; /*0x719a4f*/
    v56 = *v48; /*0x719a58*/
    v57 = v48[1]; /*0x719a5f*/
    v58 = v48[2]; /*0x719a68*/
    StartAudioControllerAt(v47, &v56, 0); /*0x719a70*/
  }
  v49 = (__int16 *)(*(int (**)(int, TeleportLocomotionClass **))(*(unsigned int *)v2->Owner + 440))( /*0x719a81*/
                     v2->Owner,
                     &this);
  if ( !(unsigned __int8)((LayerClass *)&dword_87F7E8)->IsWithinUsableArea( v49, 1) ) /*0x719a8d*/
    *(unsigned char *)(v2->Owner + 981) = 0; /*0x719a99*/
  if ( !*(unsigned int *)(v2->Owner + 640) ) /*0x719aa3*/
    ProcessUnitDeploymentAtCell((TechnoClass *)&v2[-1].Piggybackee, *v45, v2->LastCoords[0], v2->LastCoords[1]); /*0x719ac4*/
  v50 = (unsigned char *)v2->Owner; /*0x719ac9*/
  if ( !v50[144] ) /*0x719ad4*/
    return 0; /*0x719ad4*/
  (*(void (**)(unsigned char *, int))(*(unsigned int *)v50 + 396))(v50, 2); /*0x719ade*/
  (*(void (**)(TeleportLocomotionClass *))(*&v2->attachedBomb + 72))(v2); /*0x719ae7*/
  *(unsigned int *)(v2->Owner + 1064) = 0; /*0x719aee*/
  *(unsigned int *)(v2->Owner + 1068) = 0; /*0x719af7*/
  TechnoClass::SetFocus((TechnoClass *)v2->Owner, 0); /*0x719b00*/
  (*(void (**)(int, unsigned int, int))(*(unsigned int *)v2->Owner + 1152))(v2->Owner, 0, 1); /*0x719b0d*/
  v51 = *(unsigned int *)(v2->Owner + 644); /*0x719b23*/
  v2->State = *(unsigned int *)&stru_A8E960.random[528]; /*0x719b29*/
  v2->Timer[0] = v60; /*0x719b2f*/
  v2->Timer[1] = v51; /*0x719b32*/
  v52 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x719b35*/
  if ( v52 ) /*0x719b3f*/
  {
    v53 = (int *)(v2->Owner + 156); /*0x719b45*/
    v56 = *v53; /*0x719b56*/
    v57 = v53[1]; /*0x719b5d*/
    v58 = v53[2]; /*0x719b69*/
    AnimClass::ctor(v52, *&dword_8871E0->u32_33C, &v56, 0, 1, (void *)0x600, 0, 0); /*0x719b7c*/
  }
  ++*(unsigned int *)v2->Moving; /*0x719b85*/
  return 0; /*0x719327*/

}
// 0x738d30
int UnitClass::DeployToBuilding()
{

  int v3; // eax
  int v4; // ecx
  unsigned int *v5; // edx
  unsigned int *v6; // eax
  int *v7; // eax
  UnitTypeClass *Type; // edx
  BuildingTypeClass *BuildableFromArray; // eax
  int v10; // edi
  int *v11; // eax
  __int64 v12; // rax
  unsigned int *v13; // eax
  HouseClass *owner; // ecx
  BuildingTypeClass *v15; // eax
  int v16; // edi
  int *v17; // eax
  int FoundationHeight; // eax
  void (**ptr_0)(UnitClass *, void *, int); // edi
  void *v20; // eax
  int *v21; // edi
  unsigned short *v22; // eax
  __int16 v23; // cx
  UnitTypeClass *v24; // ecx
  void (**v25)(UnitClass *, void *, int); // edi
  void *v26; // eax
  int v27; // [esp-1Ch] [ebp-50h]
  __int16 v28[2]; // [esp+14h] [ebp-20h] BYREF
  int v29; // [esp+18h] [ebp-1Ch] BYREF
  int v30; // [esp+1Ch] [ebp-18h] BYREF
  __int16 v31[2]; // [esp+20h] [ebp-14h] BYREF
  unsigned char v32[4]; // [esp+24h] [ebp-10h] BYREF
  unsigned char v33[12]; // [esp+28h] [ebp-Ch] BYREF

  if ( !this->Type->DeploysInto[0] ) /*0x738d41*/
    return 1; /*0x738d52*/
  (*((void (**)(UnitClass *, unsigned int))this->ptr_0 + 73))(this, 0); /*0x738d58*/
  v3 = 0; /*0x738d64*/
  v4 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 2236); /*0x738d66*/
  if ( v4 <= 0 ) /*0x738d6e*/
    goto LABEL_7; /*0x738d6e*/
  v5 = *(unsigned int **)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 2224); /*0x738d76*/
  while ( *v5 != this->Type->DeploysInto[0] ) /*0x738d84*/
  {
    ++v3; /*0x738d8a*/
    ++v5; /*0x738d8b*/
    if ( v3 >= v4 ) /*0x738d90*/
      goto LABEL_7; /*0x738d90*/
  }
  if ( *(unsigned char *)((*((int (**)(UnitClass *))this->ptr_0 + 15))(this) + 497) ) /*0x738e33*/
  {
    if ( !this->movementDestination ) /*0x738e3f*/
    {
      v29 = 0; /*0x738e51*/
      BuildableFromArray = (BuildingTypeClass *)HouseClass::FirstBuildableFromArray( /*0x738e68*/
                                                  this->owner,
                                                  *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 2176);
      v10 = BuildingTypeClass::GetFoundationWidth(BuildableFromArray) + 1; /*0x738e8a*/
      v11 = HouseClass::FirstBuildableFromArray(this->owner, *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 2176); /*0x738e8b*/
      v27 = BuildingTypeClass::GetFoundationHeight(v11, 0) + 1; /*0x738ea6*/
      v12 = ((__int64 (*)(UnitClass *, __int16 *))*((unsigned int *)this->ptr_0 + 110))(this, v31); /*0x738eb7*/
      v13 = LayerClass::Pathfinding_Find( /*0x738ec8*/
              (Type *)&DataGlobal_87F7E8,
              (int)(((v12) >> 32) & 0xFFFFFFFFu),
              &v30,
              (__int16 *)v12,
              5,
              -1,
              0,
              0,
              v10,
              v27,
              0,
              0,
              0,
              1,
              (__int16 *)&v29,
              0,
              0);
      owner = this->owner; /*0x738ed4*/
      *(unsigned int *)v28 = *v13; /*0x738ee0*/
      v29 = 0; /*0x738ee4*/
      v15 = (BuildingTypeClass *)HouseClass::FirstBuildableFromArray( /*0x738eee*/
                                   owner,
                                   *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 2220);
      v16 = BuildingTypeClass::GetFoundationWidth(v15) + 1; /*0x738f10*/
      v17 = HouseClass::FirstBuildableFromArray(this->owner, *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 2220); /*0x738f11*/
      FoundationHeight = BuildingTypeClass::GetFoundationHeight(v17, 0); /*0x738f18*/
      *(unsigned int *)v28 = *LayerClass::Pathfinding_Find( /*0x738f4e*/
                          (Type *)&DataGlobal_87F7E8,
                          (int)&v29,
                          v31,
                          v28,
                          1,
                          -1,
                          0,
                          0,
                          v16,
                          FoundationHeight + 1,
                          0,
                          0,
                          0,
                          1,
                          (__int16 *)&v29,
                          0,
                          0);
      if ( *(unsigned int *)v28 != g_UnitSelectionState ) /*0x738f52*/
      {
        ptr_0 = (void (**)(UnitClass *, void *, int))this->ptr_0; /*0x738f62*/
        v20 = ((CellCoord *)&DataGlobal_87F7E8)->To_CellObj(v28); /*0x738f70*/
        ptr_0[288](this, v20, 1); /*0x738f78*/
      }
      *(unsigned char *)((*((int (**)(UnitClass *))this->ptr_0 + 15))(this) + 497) = 0; /*0x738f85*/
    }
  }
  else
  {
LABEL_7:
    if ( !this->movementDestination ) /*0x738d92*/
    {
      v6 = (unsigned int *)(*((int (**)(UnitClass *, unsigned char *))this->ptr_0 + 18))(this, v33); /*0x738da7*/
      (v29) = ((v29) & ~0xFFFF) | ((*v6 / 256) & 0xFFFF); /*0x738dbf*/
      HIWORD(v29) = v6[1] / 256; /*0x738dd7*/
      *(unsigned int *)v28 = v29; /*0x738de4*/
      v7 = CellStruct::Add((CellStruct *)v28, v31, &g_DDrawSurfaceManager.scenario[89]); /*0x738de9*/
      Type = this->Type; /*0x738df0*/
      v30 = *v7; /*0x738df6*/
      if ( (*(unsigned __int8 (**)(int, int *, unsigned int))(*(unsigned int *)Type->DeploysInto[0] + 168))( /*0x738e08*/
             Type->DeploysInto[0],
             &v30,
             0) )
      {
        (*((void (**)(UnitClass *, int))this->ptr_0 + 73))(this, 1); /*0x738e1c*/
        return 1; /*0x738e2b*/
      }
      if ( !this->movementDestination ) /*0x738f90*/
      {
        if ( (byte_B1CF9D & 1) == 0 ) /*0x738fa3*/
        {
          dword_B1D010 = -65536; /*0x738fbf*/
          byte_B1CF9D |= 1u; /*0x738fca*/
          dword_B1D014 = -131072; /*0x738fde*/
          dword_B1D018 = -131071; /*0x738ffc*/
          dword_B1D01C = -65537; /*0x73900f*/
          dword_B1D020 = -196608; /*0x739022*/
          dword_B1D024 = -196607; /*0x739035*/
          dword_B1D028 = -131073; /*0x739048*/
          dword_B1D02C = -196606; /*0x739065*/
          dword_B1D030 = -131074; /*0x73907b*/
          dword_B1D034 = -262144; /*0x739091*/
          dword_B1D038 = -262143; /*0x7390a7*/
          dword_B1D03C = -196609; /*0x7390bd*/
          dword_B1D040 = -262142; /*0x7390d3*/
          dword_B1D044 = -196610; /*0x7390e9*/
          dword_B1D048 = 0x10000; /*0x7390fd*/
          dword_B1D04C = 0x20000; /*0x739111*/
          dword_B1D050 = 131073; /*0x739125*/
          dword_B1D054 = 196607; /*0x739139*/
          dword_B1D058 = 196608; /*0x73914a*/
          dword_B1D05C = 196609; /*0x739160*/
          dword_B1D060 = 0x3FFFF; /*0x739176*/
          dword_B1D064 = 196610; /*0x73918c*/
          dword_B1D068 = 262142; /*0x7391a2*/
          dword_B1D06C = 0x40000; /*0x7391b8*/
          dword_B1D070 = 262145; /*0x7391ce*/
          dword_B1D074 = 327679; /*0x7391e4*/
          dword_B1D078 = 262146; /*0x7391fa*/
          dword_B1D07C = 327678; /*0x739210*/
          dword_B1D084 = 65534; /*0x739239*/
          dword_B1D088 = 65533; /*0x73924f*/
          dword_B1D08C = 65532; /*0x73927a*/
          dword_B1D090 = 1; /*0x739290*/
          v29 = 4; /*0x739296*/
          dword_B1D080 = 0xFFFF; /*0x7392ab*/
          dword_B1D094 = 2; /*0x7392b1*/
          dword_B1D098 = 3; /*0x7392b6*/
          dword_B1D09C = 4; /*0x7392bc*/
          atexit(nullsub_248); /*0x7392c2*/
        }
        v21 = &dword_B1D010; /*0x7392ca*/
        while ( 1 ) /*0x7392d8*/
        {
          v22 = (unsigned short *)(*((int (**)(UnitClass *, unsigned char *))this->ptr_0 + 110))(this, v32); /*0x7392d8*/
          v23 = v22[1] + *((unsigned short *)v21 + 1); /*0x7392e8*/
          LOWORD(v29) = *v22 + *(unsigned short *)v21; /*0x7392ed*/
          (v29) = ((v29) & ~(0xFFFF << 16)) | (((v23) & 0xFFFF) << 16); /*0x7392f8*/
          *(unsigned int *)v31 = v29; /*0x739308*/
          v28[0] = LOWORD(g_DDrawSurfaceManager.scenario[89]) + v29; /*0x73930e*/
          v28[1] = HIWORD(g_DDrawSurfaceManager.scenario[89]) + v23; /*0x739313*/
          v24 = this->Type; /*0x73931c*/
          v30 = *(unsigned int *)v28; /*0x739322*/
          if ( (*(unsigned __int8 (**)(int, int *, unsigned int))(*(unsigned int *)v24->DeploysInto[0] + 168))( /*0x739333*/
                 v24->DeploysInto[0],
                 &v30,
                 0) )
          {
            break; /*0x739333*/
          }
          if ( (int)++v21 >= (int)&dword_B1D0A0 ) /*0x739346*/
            goto LABEL_23; /*0x739346*/
        }
        v25 = (void (**)(UnitClass *, void *, int))this->ptr_0; /*0x73934a*/
        v26 = ((CellCoord *)&DataGlobal_87F7E8)->To_CellObj(v31); /*0x739358*/
        v25[288](this, v26, 1); /*0x739360*/
      }
    }
  }
LABEL_23:
  (*((void (**)(UnitClass *, int))this->ptr_0 + 73))(this, 1); /*0x739366*/
  if ( !this->movementDestination && !(unsigned __int8)House::IsCurrentPlayer((House *)this->owner) ) /*0x739380*/
    (*((void (**)(UnitClass *, int *, unsigned int, unsigned int))this->ptr_0 + 93))(this, &dword_B1CFE8, 0, 0); /*0x739394*/
  return 0; /*0x738d49*/

}
// 0x739ac0
int UnitClass::SimpleDeployerDeploy()
{
  UnitTypeClass *Type; // eax
  AnimClass *v3; // eax
  AnimClass *v4; // eax
  AnimClass *v5; // eax
  AnimClass *deployAnim; // eax
  int v7; // ecx
  int v8; // eax
  int (__thiscall **ptr_0)(UnitClass *); // edx
  int v10; // eax
  int v12; // [esp+4h] [ebp-Ch] BYREF
  int v13; // [esp+8h] [ebp-8h]
  int v14; // [esp+Ch] [ebp-4h]

  Type = this->Type; /*0x739ac6*/
  if ( Type->IsSimpleDeployer ) /*0x739acc*/
  {
    if ( (*((int (__thiscall **)(UnitClass *))this->ptr_0 + 114))(this) <= 0 /*0x739af2*/
      || (Type = (UnitTypeClass *)(*((int (__thiscall **)(UnitClass *))this->ptr_0 + 33))(this), Type->DeployToLand) )
    {
      (*((unsigned char *)&(Type))) = this->Deployed; /*0x739b00*/
      if ( !(unsigned char)Type ) /*0x739b08*/
      {
        if ( !this->inAirFlag && (*((int (__thiscall **)(UnitClass *))this->ptr_0 + 114))(this) > 0 ) /*0x739b2a*/
          this->inAirFlag = 1; /*0x739b2c*/
        if ( this->Deploying && (v3 = this->deployAnim) != 0 ) /*0x739b44*/
        {
          if ( this->animation[0] >= *(unsigned int *)&v3->AnimClass_field_0xC8[2].__pad_C[52] /*0x739b64*/
                                   + *(unsigned int *)&v3->AnimClass_field_0xC8[2].__pad_C[40]
                                   - 1 )
            *&this->Deployed = 1; /*0x739b6a*/
        }
        else if ( !this->inAirFlag ) /*0x739b7c*/
        {
          if ( this->Type->DeployingAnim[0] ) /*0x739b90*/
          {
            if ( !this->deployAnim ) /*0x739b9e*/
            {
              v4 = (AnimClass *)operator new(0x1C8u); /*0x739bad*/
              if ( v4 ) /*0x739bb7*/
              {
                v12 = this->location[0]; /*0x739bcb*/
                v13 = this->location[1]; /*0x739bd4*/
                v14 = this->location[2]; /*0x739be0*/
                v5 = (AnimClass *)AnimClass::ctor( /*0x739bf3*/
                                    v4,
                                    (void *)this->Type->DeployingAnim[0],
                                    &v12,
                                    0,
                                    1,
                                    (void *)0x600,
                                    0,
                                    0);
              }
              else
              {
                v5 = 0; /*0x739bfa*/
              }
              this->deployAnim = v5; /*0x739bff*/
              BuildingClass::AimTurret((BuildingClass *)v5, this); /*0x739c05*/
              this->deployAnim->AnimClass_field_0xD4 = (IUnknown *)(*((int (__thiscall **)(UnitClass *))this->ptr_0 + 121))(this); /*0x739c1a*/
            }
            deployAnim = this->deployAnim; /*0x739c20*/
            this->animation[0] = *&deployAnim->u32_CA.__pad_C[40]; /*0x739c32*/
            v7 = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416]; /*0x739c3e*/
            v8 = *&deployAnim->u32_CA.__pad_C[36]; /*0x739c44*/
            this->animation[5] = v8; /*0x739c50*/
            this->animation[2] = v7; /*0x739c56*/
            this->animation[3] = v13; /*0x739c5c*/
            this->animation[4] = v8; /*0x739c5f*/
            this->Deploying = 1; /*0x739c62*/
          }
          else
          {
            this->Deployed = 1; /*0x739c6a*/
          }
        }
        Type = (UnitTypeClass *)(*((int (__thiscall **)(UnitClass *))this->ptr_0 + 33))(this); /*0x739c74*/
        if ( Type->DeploySound != -1 ) /*0x739c84*/
        {
          v12 = this->location[0]; /*0x739c95*/
          v13 = this->location[1]; /*0x739c9e*/
          ptr_0 = (int (__thiscall **)(UnitClass *))this->ptr_0; /*0x739ca2*/
          v14 = this->location[2]; /*0x739ca7*/
          v10 = ptr_0[33](this); /*0x739cab*/
          (*((unsigned char *)&(Type))) = (uint8_t)StartAudioControllerAt(*(unsigned int *)(v10 + 1388), &v12, 0); /*0x739cb9*/
        }
      }
    }
  }
  return (char)Type; /*0x739cbf*/
}
/* ASM:
sub     esp, 0Ch
push    esi
mov     esi, ecx
mov     eax, [esi+6C4h]
mov     cl, [eax+0E13h]
test    cl, cl
jz      loc_739CBF
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+1C8h]
test    eax, eax
jle     short loc_739B00
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+84h]
mov     cl, [eax+6ADh]
test    cl, cl
jz      loc_739CBF

loc_739B00:                             ; CODE XREF: UnitClass__SimpleDeployerDeploy+26↑j
mov     al, [esi+6E0h]
test    al, al
jnz     loc_739CBF
mov     al, [esi+134h]
push    ebx
test    al, al
mov     ebx, 1
jnz     short loc_739B32
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+1C8h]
test    eax, eax
jle     short loc_739B32
mov     [esi+134h], bl

loc_739B32:                             ; CODE XREF: UnitClass__SimpleDeployerDeploy+5C↑j
; UnitClass__SimpleDeployerDeploy+6A↑j
mov     al, [esi+6E1h]
test    al, al
jz      short loc_739B7C
mov     eax, [esi+130h]
test    eax, eax
jz      short loc_739B7C
mov     eax, [eax+0C8h]
mov     ecx, [eax+2C0h]
mov     edx, [eax+2B4h]
lea     eax, [ecx+edx-1]
mov     ecx, [esi+0F8h]
cmp     ecx, eax
jl      loc_739C70
mov     [esi+6E0h], bl
mov     byte ptr [esi+6E1h], 0
jmp     loc_739C70
; ---------------------------------------------------------------------------

loc_739B7C:                             ; CODE XREF: UnitClass__SimpleDeployerDeploy+7A↑j
; UnitClass__SimpleDeployerDeploy+84↑j
mov     al, [esi+134h]
test    al, al
jnz     loc_739C70
mov     ecx, [esi+6C4h]
mov     eax, [ecx+6BCh]
test    eax, eax
jz      loc_739C6A
mov     eax, [esi+130h]
test    eax, eax
jnz     short loc_739C20
push    1C8h            ; Size
call    ??2_YAPAXI_Z
add     esp, 4
test    eax, eax
jz      short loc_739BFA
lea     edx, [esi+9Ch]
push    0               ; char
push    0               ; int
push    600h            ; int
mov     ecx, [edx]
push    ebx             ; int
mov     [esp+24h+var_C], ecx
push    0               ; int
mov     ecx, [edx+4]
mov     [esp+28h+var_8], ecx
lea     ecx, [esp+28h+var_C]
mov     edx, [edx+8]
push    ecx             ; int
mov     [esp+2Ch+var_4], edx
mov     edx, [esi+6C4h]
mov     ecx, [edx+6BCh]
push    ecx             ; int
mov     ecx, eax        ; void **
call    AnimClass__ctor
jmp     short loc_739BFC
; ---------------------------------------------------------------------------

loc_739BFA:                             ; CODE XREF: UnitClass__SimpleDeployerDeploy+F7↑j
xor     eax, eax

loc_739BFC:                             ; CODE XREF: UnitClass__SimpleDeployerDeploy+138↑j
push    esi
mov     ecx, eax
mov     [esi+130h], eax
call    BuildingClass__AimTurret
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+1E4h]
mov     ecx, [esi+130h]
mov     [ecx+0D4h], eax

loc_739C20:                             ; CODE XREF: UnitClass__SimpleDeployerDeploy+E6↑j
mov     eax, [esi+130h]
mov     edx, [eax+0C8h]
mov     ecx, [edx+2B4h]
mov     [esi+0F8h], ecx
mov     edx, [eax+0C8h]
mov     ecx, dword_A8ED54+30h
mov     eax, [edx+2B0h]
lea     edx, [esi+100h]
mov     [esi+10Ch], eax
mov     [edx], ecx
mov     ecx, [esp+14h+var_8]
mov     [edx+4], ecx
mov     [edx+8], eax
mov     [esi+6E1h], bl
jmp     short loc_739C70
; ---------------------------------------------------------------------------

loc_739C6A:                             ; CODE XREF: UnitClass__SimpleDeployerDeploy+D8↑j
mov     [esi+6E0h], bl

loc_739C70:                             ; CODE XREF: UnitClass__SimpleDeployerDeploy+A4↑j
; UnitClass__SimpleDeployerDeploy+B7↑j ...
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+84h]
mov     ecx, [eax+56Ch]
pop     ebx
cmp     ecx, 0FFFFFFFFh
jz      short loc_739CBF
lea     eax, [esi+9Ch]
push    edi
push    0
lea     edi, [esp+18h+var_C]
mov     ecx, [eax]
mov     [esp+18h+var_C], ecx
mov     ecx, esi
mov     edx, [eax+4]
mov     [esp+18h+var_8], edx
mov     edx, [esi]
mov     eax, [eax+8]
mov     [esp+18h+var_4], eax
call    dword ptr [edx+84h]
mov     ecx, [eax+56Ch]
mov     edx, edi
call    StartAudioControllerAt
pop     edi

loc_739CBF:                             ; CODE XREF: UnitClass__SimpleDeployerDeploy+14↑j
; UnitClass__SimpleDeployerDeploy+3A↑j ...
pop     esi
add     esp, 0Ch
retn
*/

// 0x739cd0
int UnitClass::SimpleDeployerUndeploy()
{

  int v2; // eax
  int v3; // eax
  int ptr_0; // edx
  int v5; // edi
  __int16 *PlacementCellsAlt; // eax
  void *v7; // eax
  AnimClass *v8; // eax
  void **v9; // eax
  int deployAnim; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // edx
  int v14; // eax
  int v16; // [esp+8h] [ebp-10h] BYREF
  int v17; // [esp+Ch] [ebp-Ch] BYREF
  int v18; // [esp+10h] [ebp-8h]
  int v19; // [esp+14h] [ebp-4h]

  LOBYTE(v2) = this->Deployed[0]; /*0x739cd7*/
  if ( (unsigned char)v2 ) /*0x739cdf*/
  {
    if ( this->Undeploying[0] && (v3 = this->deployAnim) != 0 ) /*0x739cf7*/
    {
      if ( this->animation[0] >= *(unsigned int *)(*(unsigned int *)(v3 + 200) + 704) + *(unsigned int *)(*(unsigned int *)(v3 + 200) + 692) - 2 ) /*0x739d17*/
      {
        ptr_0 = this->ptr_0; /*0x739d1d*/
        this->Deployed[0] = 0; /*0x739d21*/
        this->Undeploying[0] = 0; /*0x739d28*/
        if ( *(unsigned char *)((*(int (**)(UnitClass *))(ptr_0 + 132))(this) + 1709) ) /*0x739d35*/
        {
          v5 = this->ptr_0; /*0x739d43*/
          PlacementCellsAlt = (__int16 *)MapClass::FindPlacementCellsAlt((char *)this, &v16, (int)this); /*0x739d4f*/
          v7 = ((CellCoord *)&dword_87F7E8)->To_CellObj(PlacementCellsAlt); /*0x739d5a*/
          (*(void (**)(UnitClass *, void *, int))(v5 + 1152))(this, v7, 1); /*0x739d62*/
        }
      }
    }
    else if ( *(unsigned int *)&this->Type->DeployingAnim ) /*0x739d73*/
    {
      if ( !this->deployAnim ) /*0x739d81*/
      {
        v8 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x739d90*/
        if ( v8 ) /*0x739d9a*/
        {
          v17 = this->location[0]; /*0x739daf*/
          v18 = this->location[1]; /*0x739db8*/
          v19 = this->location[2]; /*0x739dc4*/
          v9 = AnimClass::ctor(v8, *(void **)&this->Type->DeployingAnim, &v17, 0, 1, (void *)0x600, 0, 1); /*0x739dd7*/
        }
        else
        {
          v9 = 0; /*0x739dde*/
        }
        this->deployAnim = (int)v9; /*0x739de3*/
        BuildingClass::AimTurret((BuildingClass *)v9, this); /*0x739de9*/
        *(unsigned int *)&this->deployAnim->AnimClass_field_0xD4 = this->COMStub_Return0_121(); /*0x739dfe*/
      }
      deployAnim = this->deployAnim; /*0x739e04*/
      this->animation[0] = *(unsigned int *)(deployAnim->AnimClass_field_0xC8 + 692); /*0x739e16*/
      v11 = *(unsigned int *)&stru_A8E960.random[528]; /*0x739e22*/
      v12 = *(unsigned int *)(*(unsigned int *)(deployAnim + 200) + 688); /*0x739e28*/
      this->animation[5] = v12; /*0x739e34*/
      this->animation[2] = v11; /*0x739e3a*/
      this->animation[3] = v18; /*0x739e40*/
      this->animation[4] = v12; /*0x739e43*/
      this->Undeploying[0] = 1; /*0x739e46*/
    }
    else
    {
      this->Deployed[0] = 0; /*0x739e4f*/
    }
    if ( this->IsDisguised() ) /*0x739e5a*/
      this->CheckAction(); /*0x739e68*/
    v2 = this->COMStub_Return0_33(); /*0x739e72*/
    if ( *(unsigned int *)(v2 + 1392) != -1 ) /*0x739e7f*/
    {
      v17 = this->location[0]; /*0x739e8f*/
      v18 = this->location[1]; /*0x739e98*/
      v13 = this->ptr_0; /*0x739e9c*/
      v19 = this->location[2]; /*0x739ea1*/
      v14 = (*(int (**)(UnitClass *))(v13 + 132))(this); /*0x739ea5*/
      (v2) = ((v2) & ~0xFF) | (((unsigned __int8)StartAudioControllerAt(*(unsigned int *)(v14 + 1392), &v17, 0)) & 0xFF); /*0x739eb3*/
    }
  }
  return v2; /*0x739eb8*/

}
/* ASM:
sub     esp, 10h
push    esi
mov     esi, ecx
push    edi
mov     al, [esi+6E0h]
test    al, al
jz      loc_739EB8
mov     al, [esi+6E2h]
test    al, al
jz      short loc_739D6D
mov     eax, [esi+130h]
test    eax, eax
jz      short loc_739D6D
mov     eax, [eax+0C8h]
mov     ecx, [eax+2C0h]
mov     edx, [eax+2B4h]
lea     eax, [ecx+edx-2]
mov     ecx, [esi+0F8h]
cmp     ecx, eax
jl      loc_739E56
mov     edx, [esi]
mov     ecx, esi
mov     byte ptr [esi+6E0h], 0
mov     byte ptr [esi+6E2h], 0
call    dword ptr [edx+84h]
mov     cl, [eax+6ADh]
test    cl, cl
jz      loc_739E56
mov     edi, [esi]
push    1
lea     eax, [esp+1Ch+var_10]
push    esi
push    eax
mov     ecx, esi
call    MapClass__FindPlacementCellsAlt
push    eax
mov     ecx, 87F7E8h
call    CellCoord__To_CellObj
push    eax
mov     ecx, esi
call    dword ptr [edi+480h]
jmp     loc_739E56
; ---------------------------------------------------------------------------

loc_739D6D:                             ; CODE XREF: UnitClass__SimpleDeployerUndeploy+1D↑j
; UnitClass__SimpleDeployerUndeploy+27↑j
mov     ecx, [esi+6C4h]
mov     eax, [ecx+6BCh]
test    eax, eax
jz      loc_739E4F
mov     eax, [esi+130h]
test    eax, eax
jnz     short loc_739E04
push    1C8h            ; Size
call    ??2_YAPAXI_Z
add     esp, 4
test    eax, eax
jz      short loc_739DDE
lea     edx, [esi+9Ch]
push    1               ; char
push    0               ; int
push    600h            ; int
mov     ecx, [edx]
push    1               ; int
mov     [esp+28h+var_C], ecx
push    0               ; int
mov     ecx, [edx+4]
mov     [esp+2Ch+var_8], ecx
lea     ecx, [esp+2Ch+var_C]
mov     edx, [edx+8]
push    ecx             ; int
mov     [esp+30h+var_4], edx
mov     edx, [esi+6C4h]
mov     ecx, [edx+6BCh]
push    ecx             ; int
mov     ecx, eax        ; void **
call    AnimClass__ctor
jmp     short loc_739DE0
; ---------------------------------------------------------------------------

loc_739DDE:                             ; CODE XREF: UnitClass__SimpleDeployerUndeploy+CA↑j
xor     eax, eax

loc_739DE0:                             ; CODE XREF: UnitClass__SimpleDeployerUndeploy+10C↑j
push    esi
mov     ecx, eax
mov     [esi+130h], eax
call    BuildingClass__AimTurret
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+1E4h]
mov     ecx, [esi+130h]
mov     [ecx+0D4h], eax

loc_739E04:                             ; CODE XREF: UnitClass__SimpleDeployerUndeploy+B9↑j
mov     eax, [esi+130h]
mov     edx, [eax+0C8h]
mov     ecx, [edx+2B4h]
mov     [esi+0F8h], ecx
mov     edx, [eax+0C8h]
mov     ecx, dword_A8ED54+30h
mov     eax, [edx+2B0h]
lea     edx, [esi+100h]
mov     [esi+10Ch], eax
mov     [edx], ecx
mov     ecx, [esp+18h+var_8]
mov     [edx+4], ecx
mov     [edx+8], eax
mov     byte ptr [esi+6E2h], 1
jmp     short loc_739E56
; ---------------------------------------------------------------------------

loc_739E4F:                             ; CODE XREF: UnitClass__SimpleDeployerUndeploy+AB↑j
mov     byte ptr [esi+6E0h], 0

loc_739E56:                             ; CODE XREF: UnitClass__SimpleDeployerUndeploy+47↑j
; UnitClass__SimpleDeployerUndeploy+6D↑j ...
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+0C4h]
test    al, al
jz      short loc_739E6E
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+470h]

loc_739E6E:                             ; CODE XREF: UnitClass__SimpleDeployerUndeploy+192↑j
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+84h]
cmp     dword ptr [eax+570h], 0FFFFFFFFh
jz      short loc_739EB8
lea     eax, [esi+9Ch]
push    0
lea     edi, [esp+1Ch+var_C]
mov     ecx, [eax]
mov     [esp+1Ch+var_C], ecx
mov     ecx, esi
mov     edx, [eax+4]
mov     [esp+1Ch+var_8], edx
mov     edx, [esi]
mov     eax, [eax+8]
mov     [esp+1Ch+var_4], eax
call    dword ptr [edx+84h]
mov     ecx, [eax+570h]
mov     edx, edi
call    StartAudioControllerAt

loc_739EB8:                             ; CODE XREF: UnitClass__SimpleDeployerUndeploy+F↑j
; UnitClass__SimpleDeployerUndeploy+1AF↑j
pop     edi
pop     esi
add     esp, 10h
retn
*/

// 0x737430
int UnitClass::MissionDispatch(int* a2, int a3, int* a4)
{

  unsigned int *v4; // ebp
  int result; // eax
  unsigned int *v7; // eax
  Cell *v8; // eax
  CellClass *captureManager; // ecx
  int Member; // edi
  int v11; // edi
  int v12; // eax
  int ptr_0; // edx
  unsigned int *v14; // ebp
  int v15; // eax
  int TileIndex; // ebx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // edx
  double *v21; // eax
  unsigned __int8 *v22; // eax
  int v23; // edx
  unsigned int *v24; // [esp+0h] [ebp-34h]
  double v25; // [esp+10h] [ebp-24h]
  int v26; // [esp+10h] [ebp-24h]
  int v27; // [esp+18h] [ebp-1Ch] BYREF
  char v28[8]; // [esp+1Ch] [ebp-18h] BYREF
  double v29; // [esp+20h] [ebp-14h]
  unsigned int v30[3]; // [esp+28h] [ebp-Ch] BYREF
  _UNKNOWN *retaddr; // [esp+34h] [ebp+0h] BYREF
  unsigned int *v32; // [esp+3Ch] [ebp+8h]
  int **v33; // [esp+40h] [ebp+Ch]

  v4 = a3; /*0x737435*/
  switch ( (unsigned int)a3 )
  {
    case 3u:
      if ( (*(int (**)(Class_7F5C70 *))(*&this->q_610))(this) == 12 ) /*0x737b21*/
        (*(void (**)(Class_7F5C70 *, int, unsigned int))(*&this->q7A0))(this, 5, 0); /*0x737b2b*/
      FootClass::MissionDispatch((FootClass *)a2, (int)a3, a3, (int)a4, v24); /*0x737b3e*/
      return 1; /*0x737b46*/
    case 7u:
      FootClass::MissionDispatch((FootClass *)a2, (int)a3, a3, (int)a4, v24); /*0x737517*/
      (*(void (**)(Class_7F5C70 *, unsigned int, int))(*&this->q_1200))(this, 0, 1); /*0x737524*/
      (*(void (**)(Class_7F5C70 *, unsigned int))(*&this->q_F20))(this, 0); /*0x737530*/
      (*(void (**)(Class_7F5C70 *, unsigned int, unsigned int))(*&this->q7A0))(this, 0, 0); /*0x73753e*/
      FootClass::ClearSomeVector((FootClass *)this); /*0x737546*/
      if ( !this->voiceHandle || !Team::GetMember((Team *)this, 0) ) /*0x737559*/
      {
        (*(void (**)(Class_7F5C70 *, int, BuildingClass *))(*&this->q9E0))(this, 2, a2); /*0x737569*/
        (*(void (**)(Class_7F5C70 *, int))(*&this->q9D0))(this, 24); /*0x737575*/
      }
      return 1; /*0x737587*/
    case 0xEu:
      if ( !this->Locomotor ) /*0x7377d8*/
        sub_7DC720(-2147467261); /*0x7377e7*/
      if ( ((*(unsigned __int8 (**)(unsigned int))(*this->Locomotor + 16))(this->Locomotor) /*0x73780d*/
         || this->FootClass_field_5A4)
        && this->currentMission == 2 )
      {
        goto LABEL_54; /*0x73780d*/
      }
      if ( (BuildingClass *)Team::GetMember((Team *)this, 0) != a2 ) /*0x737829*/
      {
        v26 = *(unsigned int *)&this->Type->Passengers; /*0x737841*/
        v12 = HouseClass::SumPowerDrain(&this->u32_450); /*0x737845*/
        ptr_0 = a2->ptr_0; /*0x73784a*/
        v29 = (double)v12; /*0x737856*/
        if ( (double)v26 < v29 + *(double *)((*(int (**)(BuildingClass *))(ptr_0 + 132))(a2) + 896) /*0x737898*/
          || *(double *)((*(int (**)(BuildingClass *))(a2->ptr_0 + 132))(a2) + 896) > *(double *)&this->Type->SizeLimit )
        {
          goto LABEL_54; /*0x737898*/
        }
        if ( !(unsigned __int8)Team::AllMembersValid((Team *)this) ) /*0x7378a0*/
          (*(void (**)(Class_7F5C70 *, int, BuildingClass *))(*&this->q9E0))(this, 2, a2); /*0x7378b0*/
      }
      if ( this->FootClass_field_5A4 ) /*0x7378b6*/
        goto LABEL_69; /*0x7378be*/
      retaddr = *(_UNKNOWN **)(*(int (**)(Class_7F5C70 *))(*&this->Deployed))(this); /*0x7378df*/
      v14 = ((CellCoord *)&dword_87F7E8)->To_CellObj((__int16 *)&retaddr); /*0x7378ee*/
      v15 = (*(int (**)(BuildingClass *, unsigned int))(a2->ptr_0 + 132))(a2, 0); /*0x7378f0*/
      TileIndex = MapClass::GetTileIndex( /*0x73790e*/
                    (MapClass *)&dword_87F7E8,
                    &this->u32_AB8,
                    *(unsigned int *)(v15 + 1460),
                    (char)v28);
      v17 = -1; /*0x737910*/
      if ( a2 && (a2->abstractFlags & 4) != 0 ) /*0x73791b*/
      {
        v18 = (*(int (**)(BuildingClass *))(a2->ptr_0 + 132))(a2); /*0x737923*/
        v17 = MapClass::GetTileIndex((MapClass *)&dword_87F7E8, (__int16 *)a2->Anims, *(unsigned int *)(v18 + 1460), 0); /*0x73793c*/
      }
      if ( TileIndex == v17 && (this->FootClass_field_5A4 || v14[59] != 2) ) /*0x737972*/
      {
        v4 = a3; /*0x737990*/
LABEL_69:
        if ( *(int *)&this->Type->Passengers <= 0 ) /*0x7379a2*/
          return FootClass::MissionDispatch((FootClass *)a2, (int)v4, v4, (int)a4, v24); /*0x7379a2*/
        v32 = *(unsigned int **)&this->Type->Passengers; /*0x7379ae*/
        v19 = HouseClass::SumPowerDrain(&this->u32_450); /*0x7379b2*/
        v20 = a2->ptr_0; /*0x7379b7*/
        v29 = (double)v19; /*0x7379c3*/
        v21 = (double *)(*(int (**)(BuildingClass *))(v20 + 132))(a2); /*0x7379c7*/
        if ( (double)(int)v32 < v29 + v21[112] /*0x737a09*/
          || *(double *)((*(int (**)(BuildingClass *))(a2->ptr_0 + 132))(a2) + 896) > *(double *)&this->Type->SizeLimit )
        {
          return FootClass::MissionDispatch((FootClass *)a2, (int)v4, v4, (int)a4, v24); /*0x737a09*/
        }
        FootClass::MissionDispatch((FootClass *)a2, (int)v4, v4, (int)a4, v24); /*0x737a18*/
        if ( !this->Locomotor ) /*0x737a1d*/
          sub_7DC720(-2147467261); /*0x737a2c*/
        if ( !(*(unsigned __int8 (**)(unsigned int))(*this->Locomotor + 16))(this->Locomotor) /*0x737a65*/
          && !this->FootClass_field_bool_6AF
          && !this->voiceHandle
          && (*(int (**)(Class_7F5C70 *, int, BuildingClass *))(*&this->q9E0))(this, 19, a2) == 1 )
        {
          *a4 = (int *)this; /*0x737a67*/
          if ( (*(int (**)(Class_7F5C70 *, int, int **, BuildingClass *))(*&this->u32_9F0))( /*0x737a7a*/
                 this,
                 18,
                 a4,
                 a2) != 1 )
            (*(void (**)(Class_7F5C70 *, int, BuildingClass *))(*&this->q9E0))(this, 3, a2); /*0x737a83*/
        }
        result = 1; /*0x737a8c*/
      }
      else
      {
        (*(void (**)(Class_7F5C70 *, BuildingClass *, int))(*&this->q_1200))(this, a2, 1); /*0x73794c*/
        result = 14; /*0x737955*/
      }
      break; /*0x737a95*/
    case 0xFu:
      if ( !*(unsigned int *)&this->Type->Passengers /*0x7375ad*/
        || !a2
        || !(unsigned __int8)Object::IsAlliedWithObjectHouse(this->owner, (int)a2) )
      {
        goto LABEL_28; /*0x7375b4*/
      }
      if ( (*(unsigned __int8 (**)(Class_7F5C70 *))(*&this->u32_750))(this) ) /*0x7375ba*/
      {
        result = 0; /*0x7375c7*/
      }
      else
      {
        v8 = (Cell *)(*(int (**)(Class_7F5C70 *))(*&this->q6F0))(this); /*0x7375d4*/
        if ( Cell::IsBridge(v8) ) /*0x7375dc*/
        {
          result = 0; /*0x7375e8*/
        }
        else if ( (unsigned __int8)BuildingClass::IsBeingRepairedOrCaptured(a2) /*0x737616*/
               || (a2->abstractFlags & 4) != 0 && a2->Audio8[2]
               || (captureManager = (CellClass *)a2->captureManager) != 0
               && (unsigned __int8)CellClass::HasContent(captureManager) )
        {
LABEL_28:
          result = 0; /*0x73761f*/
        }
        else
        {
          v33 = *(int ***)&this->Type->Passengers; /*0x73763d*/
          v25 = (double)HouseClass::SumPowerDrain(&this->u32_450); /*0x737652*/
          if ( (double)(int)v33 < v25 /*0x737698*/
                                + *(double *)((*(int (**)(BuildingClass *))(a2->ptr_0 + 132))(a2) + 896)
            || *(double *)((*(int (**)(BuildingClass *))(a2->ptr_0 + 132))(a2) + 896) > *(double *)&this->Type->SizeLimit )
          {
LABEL_54:
            result = 10; /*0x73780f*/
          }
          else
          {
            result = 1; /*0x7376a1*/
          }
        }
      }
      break; /*0x7375cd*/
    case 0x15u:
      v11 = *(unsigned int *)&this->Type->Passengers; /*0x73779b*/
      if ( HouseClass::SumPowerDrain(&this->u32_450) == v11 ) /*0x7377a8*/
        Timer::StartDouble(&this->u32_D40, *(double *)&this->Type->DeployTime); /*0x7377c4*/
      return 5; /*0x7377d5*/
    case 0x16u:
      FootClass::MissionDispatch((FootClass *)a2, (int)a3, a3, (int)a4, v24); /*0x7376ba*/
      if ( this->FootClass_field_bool_6AF || *(unsigned short *)ProgressTimer::GetValue(&this->u32_E20, &v27) == 0x4000 ) /*0x7376de*/
      {
        if ( !this->Locomotor ) /*0x73771b*/
          sub_7DC720(-2147467261); /*0x73772a*/
        if ( !(*(unsigned __int8 (**)(unsigned int))(*this->Locomotor + 16))(this->Locomotor) ) /*0x737738*/
        {
          Member = Team::GetMember((Team *)this, 0); /*0x737748*/
          if ( this->voiceHandle ) /*0x73774a*/
          {
            if ( Member /*0x737771*/
              && (*(int (**)(int))(*(unsigned int *)Member + 44))(Member) == 6
              && (*(int (**)(Class_7F5C70 *))(*&this->q_610))(this) == 7 )
            {
              (*(void (**)(Class_7F5C70 *, int, int))(*&this->q9E0))(this, 21, Member); /*0x73777a*/
            }
          }
        }
        return 1; /*0x737783*/
      }
      else
      {
        LOWORD(a2) = 0x4000; /*0x7376e6*/
        if ( !this->Locomotor ) /*0x7376e0*/
          sub_7DC720(-2147467261); /*0x7376f6*/
        (*(void (**)(unsigned int, BuildingClass *))(*this->Locomotor + 76))(this->Locomotor, a2); /*0x737709*/
        return 1; /*0x73770f*/
      }
    case 0x17u:
      v22 = (unsigned __int8 *)this->Type; /*0x737a98*/
      if ( v22[3598] || v22[3599] ) /*0x737aa8*/
      {
        if ( this->Unloading ) /*0x737ab2*/
        {
          v23 = *(unsigned int *)this; /*0x737abc*/
          this->Unloading = 0; /*0x737ac9*/
          (*(void (**)(Class_7F5C70 *, int *, int, unsigned int))(v23 + 372))(this, &dword_B1CFE8, 1, 0); /*0x737ad0*/
          (*(void (**)(Class_7F5C70 *, int, unsigned int))(*&this->q7A0))(this, 10, 0); /*0x737ade*/
          if ( (*(unsigned __int8 (**)(Class_7F5C70 *))(*&this->q800))(this) ) /*0x737ae8*/
            (*(void (**)(Class_7F5C70 *))(*&this->q7B0))(this); /*0x737af6*/
        }
      }
      return FootClass::MissionDispatch((FootClass *)a2, (int)v4, v4, (int)a4, v24); /*0x737af6*/
    case 0x24u:
      if ( (*(unsigned __int8 (**)(Class_7F5C70 *))(*&this->u32_750))(this) ) /*0x737460*/
        return 0; /*0x73746d*/
      v7 = (unsigned int *)(*(int (**)(Class_7F5C70 *, unsigned int *, unsigned int))(*&this->deployAnim))(this, v30, 0); /*0x737481*/
      if ( (((Coord *)&dword_87F7E8)->To_Cell( v7)->flags & 0x100) != 0 /*0x7374a0*/
        && !(*(unsigned __int8 (**)(Class_7F5C70 *, unsigned int))(*&this->slaveOwner))(this, 0) )
      {
        return 10; /*0x7374ad*/
      }
      if ( (*(int (**)(Class_7F5C70 *))(*&this->q_610))(this) == 16 ) /*0x7374c6*/
        return 10; /*0x7374cb*/
      if ( this->voiceHandle ) /*0x7374d7*/
        return 10; /*0x7374e4*/
      return this->FootClass_field_684 != 0xFF ? 10 : 1;
    default:
      return FootClass::MissionDispatch((FootClass *)a2, (int)v4, v4, (int)a4, v24); /*0x737b11*/
  }
  return result; /*0x73746a*/

}
/* ASM:
sub     esp, 24h
push    ebx
push    ebp
mov     ebp, [esp+2Ch+arg_4]
push    esi
push    edi
mov     edi, [esp+34h+arg_0]
lea     eax, [ebp-3]    ; switch 34 cases
mov     esi, ecx
cmp     eax, 21h
ja      def_737455      ; jumptable 00737455 default case, cases 4-6,8-13,16-20,24-35
xor     ecx, ecx
mov     cl, ds:((unsigned char *)&byte_737B78)[eax]
jmp     ds:jpt_737455[ecx*4] ; switch jump
; ---------------------------------------------------------------------------

loc_73745C:                             ; CODE XREF: UnitClass__MissionDispatch+25↑j
; DATA XREF: .text:jpt_737455↓o
mov     edx, [esi]      ; jumptable 00737455 case 36
mov     ecx, esi
call    dword ptr [edx+1D4h]
test    al, al
jz      short loc_737476
pop     edi
pop     esi
pop     ebp
xor     eax, eax
pop     ebx
add     esp, 24h
retn    0Ch
; ---------------------------------------------------------------------------

loc_737476:                             ; CODE XREF: UnitClass__MissionDispatch+38↑j
mov     eax, [esi]
lea     ecx, [esp+34h+var_C]
push    0
push    ecx
mov     ecx, esi
call    dword ptr [eax+4Ch]
push    eax
mov     ecx, 87F7E8h
call    Coord__To_Cell
mov     ecx, [eax+140h]
test    ch, 1
jz      short loc_7374B9
mov     edx, [esi]
push    0
mov     ecx, esi
call    dword ptr [edx+0BCh]
test    al, al
jnz     short loc_7374B9
pop     edi
pop     esi
pop     ebp
mov     eax, 0Ah
pop     ebx
add     esp, 24h
retn    0Ch
; ---------------------------------------------------------------------------

loc_7374B9:                             ; CODE XREF: UnitClass__MissionDispatch+68↑j
; UnitClass__MissionDispatch+78↑j
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+184h]
cmp     eax, 10h
jnz     short loc_7374D7
pop     edi
pop     esi
pop     ebp
mov     eax, 0Ah
pop     ebx
add     esp, 24h
retn    0Ch
; ---------------------------------------------------------------------------

loc_7374D7:                             ; CODE XREF: UnitClass__MissionDispatch+96↑j
mov     al, [esi+418h]
test    al, al
jz      short loc_7374F0
pop     edi
pop     esi
pop     ebp
mov     eax, 0Ah
pop     ebx
add     esp, 24h
retn    0Ch
; ---------------------------------------------------------------------------

loc_7374F0:                             ; CODE XREF: UnitClass__MissionDispatch+AF↑j
mov     al, [esi+684h]
pop     edi
inc     al
pop     esi
neg     al
sbb     eax, eax
pop     ebp
and     eax, 9
pop     ebx
inc     eax
add     esp, 24h
retn    0Ch
; ---------------------------------------------------------------------------

loc_73750A:                             ; CODE XREF: UnitClass__MissionDispatch+25↑j
; DATA XREF: .text:jpt_737455↓o
mov     ecx, [esp+34h+arg_8] ; jumptable 00737455 case 7
mov     edi, [esp+34h+arg_0]
push    ecx
push    ebp
push    edi
mov     ecx, esi
call    FootClass__MissionDispatch
mov     edx, [esi]
push    1
push    0
mov     ecx, esi
call    dword ptr [edx+480h]
mov     eax, [esi]
push    0
mov     ecx, esi
call    dword ptr [eax+3C8h]
mov     edx, [esi]
push    0
push    0
mov     ecx, esi
call    dword ptr [edx+1E8h]
mov     ecx, esi
call    FootClass__ClearSomeVector
mov     al, [esi+418h]
test    al, al
jz      short loc_737562
push    0
mov     ecx, esi
call    Team__GetMember
test    eax, eax
jnz     short loc_73757B

loc_737562:                             ; CODE XREF: UnitClass__MissionDispatch+123↑j
mov     eax, [esi]
push    edi
push    2
mov     ecx, esi
call    dword ptr [eax+278h]
mov     edx, [esi]
push    18h
mov     ecx, esi
call    dword ptr [edx+274h]

loc_73757B:                             ; CODE XREF: UnitClass__MissionDispatch+130↑j
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 24h
retn    0Ch
; ---------------------------------------------------------------------------

loc_73758A:                             ; CODE XREF: UnitClass__MissionDispatch+25↑j
; DATA XREF: .text:jpt_737455↓o
mov     eax, [esi+6C4h] ; jumptable 00737455 case 15
mov     ecx, [eax+5E0h]
test    ecx, ecx
jz      loc_73761F
mov     edi, [esp+34h+arg_0]
test    edi, edi
jz      short loc_73761F
mov     ecx, [esi+21Ch]
push    edi
call    Object__IsAlliedWithObjectHouse
test    al, al
jz      short loc_73761F
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+1D4h]
test    al, al
jz      short loc_7375D0
pop     edi
pop     esi
pop     ebp
xor     eax, eax
pop     ebx
add     esp, 24h
retn    0Ch
; ---------------------------------------------------------------------------

loc_7375D0:                             ; CODE XREF: UnitClass__MissionDispatch+192↑j
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+1BCh]
mov     ecx, eax
call    Cell__IsBridge
test    eax, eax
jz      short loc_7375F1
pop     edi
pop     esi
pop     ebp
xor     eax, eax
pop     ebx
add     esp, 24h
retn    0Ch
; ---------------------------------------------------------------------------

loc_7375F1:                             ; CODE XREF: UnitClass__MissionDispatch+1B3↑j
mov     ecx, edi
call    BuildingClass__IsBeingRepairedOrCaptured
test    al, al
jnz     short loc_73761F
test    byte ptr [edi+14h], 4
jz      short loc_73760C
mov     eax, [edi+694h]
test    eax, eax
jnz     short loc_73761F

loc_73760C:                             ; CODE XREF: UnitClass__MissionDispatch+1D0↑j
mov     ecx, [edi+2BCh]
test    ecx, ecx
jz      short loc_73762B
call    CellClass__HasContent
test    al, al
jz      short loc_73762B

loc_73761F:                             ; CODE XREF: UnitClass__MissionDispatch+168↑j
; UnitClass__MissionDispatch+174↑j ...
pop     edi
pop     esi
pop     ebp
xor     eax, eax
pop     ebx
add     esp, 24h
retn    0Ch
; ---------------------------------------------------------------------------

loc_73762B:                             ; CODE XREF: UnitClass__MissionDispatch+1E4↑j
; UnitClass__MissionDispatch+1ED↑j
mov     ecx, [esi+6C4h]
mov     edx, [ecx+5E0h]
lea     ecx, [esi+114h]
mov     [esp+34h+arg_8], edx
call    HouseClass__SumPowerDrain
mov     [esp+34h+arg_0], eax
mov     eax, [edi]
fild    [esp+34h+arg_0]
mov     ecx, edi
fstp    [esp+34h+var_24]
call    dword ptr [eax+84h]
fld     [esp+34h+var_24]
fadd    qword ptr [eax+380h]
fild    [esp+34h+arg_8]
fcompp
fnstsw  ax
test    ah, 1
jnz     loc_73780F
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+84h]
mov     ecx, [esi+6C4h]
fld     qword ptr [eax+380h]
fcomp   qword ptr [ecx+388h]
fnstsw  ax
test    ah, 41h
jz      loc_73780F
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 24h
retn    0Ch
; ---------------------------------------------------------------------------

loc_7376AD:                             ; CODE XREF: UnitClass__MissionDispatch+25↑j
; DATA XREF: .text:jpt_737455↓o
mov     edx, [esp+34h+arg_8] ; jumptable 00737455 case 22
mov     eax, [esp+34h+arg_0]
push    edx
push    ebp
push    eax
mov     ecx, esi
call    FootClass__MissionDispatch
mov     al, [esi+6AFh]
test    al, al
jnz     short loc_73771B
lea     ecx, [esp+34h+var_1C]
push    ecx
lea     ecx, [esi+388h]
call    ProgressTimer__GetValue
cmp     word ptr [eax], 4000h
jz      short loc_73771B
mov     eax, [esi+674h]
mov     word ptr [esp+34h+arg_0], 4000h
test    eax, eax
jnz     short loc_7376FB
push    80004003h
call    sub_7DC720
; ---------------------------------------------------------------------------

loc_7376FB:                             ; CODE XREF: UnitClass__MissionDispatch+2BF↑j
mov     esi, [esi+674h]
mov     eax, [esp+34h+arg_0]
push    eax
push    esi
mov     edx, [esi]
call    dword ptr [edx+4Ch]
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 24h
retn    0Ch
; ---------------------------------------------------------------------------

loc_73771B:                             ; CODE XREF: UnitClass__MissionDispatch+297↑j
; UnitClass__MissionDispatch+2AE↑j
mov     eax, [esi+674h]
test    eax, eax
jnz     short loc_73772F
push    80004003h
call    sub_7DC720
; ---------------------------------------------------------------------------

loc_73772F:                             ; CODE XREF: UnitClass__MissionDispatch+2F3↑j
mov     eax, [esi+674h]
push    eax
mov     ecx, [eax]
call    dword ptr [ecx+10h]
test    al, al
jnz     short loc_737780
push    0
mov     ecx, esi
call    Team__GetMember
mov     edi, eax
mov     al, [esi+418h]
test    al, al
jz      short loc_737780
test    edi, edi
jz      short loc_737780
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+2Ch]
cmp     eax, 6
jnz     short loc_737780
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+184h]
cmp     eax, 7
jnz     short loc_737780
mov     edx, [esi]
push    edi
push    15h
mov     ecx, esi
call    dword ptr [edx+278h]

loc_737780:                             ; CODE XREF: UnitClass__MissionDispatch+30D↑j
; UnitClass__MissionDispatch+322↑j ...
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 24h
retn    0Ch
; ---------------------------------------------------------------------------

loc_73778F:                             ; CODE XREF: UnitClass__MissionDispatch+25↑j
; DATA XREF: .text:jpt_737455↓o
mov     eax, [esi+6C4h] ; jumptable 00737455 case 21
lea     ecx, [esi+114h]
mov     edi, [eax+5E0h]
call    HouseClass__SumPowerDrain
cmp     eax, edi
jnz     short loc_7377C9
mov     ecx, [esi+6C4h]
mov     edx, [ecx+3CCh]
push    edx
mov     eax, [ecx+3C8h]
lea     ecx, [esi+350h]
push    eax             ; double
call    Timer__StartDouble

loc_7377C9:                             ; CODE XREF: UnitClass__MissionDispatch+378↑j
pop     edi
pop     esi
pop     ebp
mov     eax, 5
pop     ebx
add     esp, 24h
retn    0Ch
; ---------------------------------------------------------------------------

loc_7377D8:                             ; CODE XREF: UnitClass__MissionDispatch+25↑j
; DATA XREF: .text:jpt_737455↓o
mov     eax, [esi+674h] ; jumptable 00737455 case 14
test    eax, eax
jnz     short loc_7377EC
push    80004003h
call    sub_7DC720
; ---------------------------------------------------------------------------

loc_7377EC:                             ; CODE XREF: UnitClass__MissionDispatch+3B0↑j
mov     eax, [esi+674h]
push    eax
mov     ecx, [eax]
call    dword ptr [ecx+10h]
test    al, al
jnz     short loc_737806
mov     eax, [esi+5A4h]
test    eax, eax
jz      short loc_73781E

loc_737806:                             ; CODE XREF: UnitClass__MissionDispatch+3CA↑j
cmp     dword ptr [esi+0ACh], 2
jnz     short loc_73781E

loc_73780F:                             ; CODE XREF: UnitClass__MissionDispatch+241↑j
; UnitClass__MissionDispatch+268↑j ...
pop     edi
pop     esi
pop     ebp
mov     eax, 0Ah
pop     ebx
add     esp, 24h
retn    0Ch
; ---------------------------------------------------------------------------

loc_73781E:                             ; CODE XREF: UnitClass__MissionDispatch+3D4↑j
; UnitClass__MissionDispatch+3DD↑j
push    0
mov     ecx, esi
call    Team__GetMember
cmp     eax, edi
jz      loc_7378B6
mov     edx, [esi+6C4h]
lea     ecx, [esi+114h]
mov     eax, [edx+5E0h]
mov     dword ptr [esp+34h+var_24], eax
call    HouseClass__SumPowerDrain
mov     edx, [edi]
mov     [esp+34h+arg_0], eax
fild    [esp+34h+arg_0]
mov     ecx, edi
fstp    [esp+34h+var_18+4]
call    dword ptr [edx+84h]
fld     [esp+34h+var_18+4]
fadd    qword ptr [eax+380h]
fild    dword ptr [esp+34h+var_24]
fcompp
fnstsw  ax
test    ah, 1
jnz     short loc_73780F
mov     eax, [edi]
mov     ecx, edi
call    dword ptr [eax+84h]
mov     ecx, [esi+6C4h]
fld     qword ptr [eax+380h]
fcomp   qword ptr [ecx+388h]
fnstsw  ax
test    ah, 41h
jz      loc_73780F
mov     ecx, esi
call    Team__AllMembersValid
test    al, al
jnz     short loc_7378B6
mov     edx, [esi]
push    edi
push    2
mov     ecx, esi
call    dword ptr [edx+278h]

loc_7378B6:                             ; CODE XREF: UnitClass__MissionDispatch+3F9↑j
; UnitClass__MissionDispatch+477↑j
mov     eax, [esi+5A4h]
test    eax, eax
jnz     loc_737994
mov     eax, [esi]
lea     ecx, [esp+34h+var_18]
push    ecx
mov     ecx, esi
call    dword ptr [eax+1B8h]
mov     edx, [eax]
lea     eax, [esp+38h]
push    eax
mov     ecx, 87F7E8h
mov     [esp+3Ch], edx
call    CellCoord__To_CellObj
mov     edx, [edi]
push    0
mov     ecx, edi
mov     ebp, eax
call    dword ptr [edx+84h]
mov     eax, [eax+5B4h]
lea     ecx, [esi+55Ch]
push    eax
push    ecx
mov     ecx, 87F7E8h
call    MapClass__GetTileIndex
mov     ebx, eax
or      eax, 0FFFFFFFFh
test    edi, edi
jz      short loc_737941
test    byte ptr [edi+14h], 4
jz      short loc_737941
mov     edx, [edi]
push    0
mov     ecx, edi
call    dword ptr [edx+84h]
mov     eax, [eax+5B4h]
lea     ecx, [edi+55Ch]
push    eax
push    ecx
mov     ecx, 87F7E8h
call    MapClass__GetTileIndex

loc_737941:                             ; CODE XREF: UnitClass__MissionDispatch+4E5↑j
; UnitClass__MissionDispatch+4EB↑j
cmp     ebx, eax
jz      short loc_737961
mov     edx, [esi]
push    1
push    edi
mov     ecx, esi
call    dword ptr [edx+480h]
pop     edi
pop     esi
pop     ebp
mov     eax, 0Eh
pop     ebx
add     esp, 24h
retn    0Ch
; ---------------------------------------------------------------------------

loc_737961:                             ; CODE XREF: UnitClass__MissionDispatch+513↑j
mov     eax, [esi+5A4h]
test    eax, eax
jnz     short loc_737990
cmp     dword ptr [ebp+0ECh], 2
jnz     short loc_737990
mov     eax, [esi]
push    1
push    edi
mov     ecx, esi
call    dword ptr [eax+480h]
pop     edi
pop     esi
pop     ebp
mov     eax, 0Eh
pop     ebx
add     esp, 24h
retn    0Ch
; ---------------------------------------------------------------------------

loc_737990:                             ; CODE XREF: UnitClass__MissionDispatch+539↑j
; UnitClass__MissionDispatch+542↑j
mov     ebp, [esp+34h+arg_4]

loc_737994:                             ; CODE XREF: UnitClass__MissionDispatch+48E↑j
mov     ecx, [esi+6C4h]
mov     eax, [ecx+5E0h]
test    eax, eax
jle     def_737455      ; jumptable 00737455 default case, cases 4-6,8-13,16-20,24-35
lea     ecx, [esi+114h]
mov     [esp+34h+arg_4], eax
call    HouseClass__SumPowerDrain
mov     edx, [edi]
mov     [esp+34h+arg_0], eax
fild    [esp+34h+arg_0]
mov     ecx, edi
fstp    [esp+34h+var_18+4]
call    dword ptr [edx+84h]
fld     [esp+34h+var_18+4]
fadd    qword ptr [eax+380h]
fild    [esp+34h+arg_4]
fcompp
fnstsw  ax
test    ah, 1
jnz     def_737455      ; jumptable 00737455 default case, cases 4-6,8-13,16-20,24-35
mov     eax, [edi]
mov     ecx, edi
call    dword ptr [eax+84h]
mov     ecx, [esi+6C4h]
fld     qword ptr [eax+380h]
fcomp   qword ptr [ecx+388h]
fnstsw  ax
test    ah, 41h
jz      def_737455      ; jumptable 00737455 default case, cases 4-6,8-13,16-20,24-35
mov     ebx, [esp+34h+arg_8]
mov     ecx, esi
push    ebx
push    ebp
push    edi
call    FootClass__MissionDispatch
mov     eax, [esi+674h]
test    eax, eax
jnz     short loc_737A31
push    80004003h
call    sub_7DC720
; ---------------------------------------------------------------------------

loc_737A31:                             ; CODE XREF: UnitClass__MissionDispatch+5F5↑j
mov     eax, [esi+674h]
push    eax
mov     edx, [eax]
call    dword ptr [edx+10h]
test    al, al
jnz     short loc_737A89
mov     al, [esi+6AFh]
test    al, al
jnz     short loc_737A89
mov     al, [esi+418h]
test    al, al
jnz     short loc_737A89
mov     eax, [esi]
push    edi
push    13h
mov     ecx, esi
call    dword ptr [eax+278h]
cmp     eax, 1
jnz     short loc_737A89
mov     [ebx], esi
mov     edx, [esi]
push    edi
push    ebx
push    12h
mov     ecx, esi
call    dword ptr [edx+27Ch]
cmp     eax, 1
jz      short loc_737A89
mov     eax, [esi]
push    edi
push    3
mov     ecx, esi
call    dword ptr [eax+278h]

loc_737A89:                             ; CODE XREF: UnitClass__MissionDispatch+60F↑j
; UnitClass__MissionDispatch+619↑j ...
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 24h
retn    0Ch
; ---------------------------------------------------------------------------

loc_737A98:                             ; CODE XREF: UnitClass__MissionDispatch+25↑j
; DATA XREF: .text:jpt_737455↓o
mov     eax, [esi+6C4h] ; jumptable 00737455 case 23
mov     cl, [eax+0E0Eh]
test    cl, cl
jnz     short loc_737AB2
mov     cl, [eax+0E0Fh]
test    cl, cl
jz      short def_737455 ; jumptable 00737455 default case, cases 4-6,8-13,16-20,24-35

loc_737AB2:                             ; CODE XREF: UnitClass__MissionDispatch+676↑j
mov     al, [esi+6D1h]
test    al, al
jz      short def_737455 ; jumptable 00737455 default case, cases 4-6,8-13,16-20,24-35
mov     edx, [esi]
push    0
push    1
push    (offset dword_A8ED54+8E294h)
mov     ecx, esi
mov     byte ptr [esi+6D1h], 0
call    dword ptr [edx+174h]
mov     eax, [esi]
push    0
push    0Ah
mov     ecx, esi
call    dword ptr [eax+1E8h]
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+200h]
test    al, al
jz      short def_737455 ; jumptable 00737455 default case, cases 4-6,8-13,16-20,24-35
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+1ECh]

def_737455:                             ; CODE XREF: UnitClass__MissionDispatch+17↑j
; UnitClass__MissionDispatch+25↑j ...
mov     eax, [esp+34h+arg_8] ; jumptable 00737455 default case, cases 4-6,8-13,16-20,24-35
mov     ecx, esi
push    eax
push    ebp
push    edi
call    FootClass__MissionDispatch
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 24h
retn    0Ch
; ---------------------------------------------------------------------------

loc_737B14:                             ; CODE XREF: UnitClass__MissionDispatch+25↑j
; DATA XREF: .text:jpt_737455↓o
mov     edx, [esi]      ; jumptable 00737455 case 3
mov     ecx, esi
call    dword ptr [edx+184h]
cmp     eax, 0Ch
jnz     short loc_737B31
mov     eax, [esi]
push    0
push    5
mov     ecx, esi
call    dword ptr [eax+1E8h]

loc_737B31:                             ; CODE XREF: UnitClass__MissionDispatch+6F1↑j
mov     ecx, [esp+34h+arg_8]
mov     edx, [esp+34h+arg_0]
push    ecx
push    ebp
push    edx
mov     ecx, esi
call    FootClass__MissionDispatch
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 24h
retn    0Ch
*/

// ============================================================
// Phase 3: Movement
// ============================================================

// 0x7359f0
int UnitClass::CalcMoveTarget()
{

  Vector3 *v2; // eax
  int *unknownCoords568; // edi
  int *v4; // eax
  unsigned int *v5; // ebp
  int *v6; // eax
  unsigned short *Height; // eax
  int Type; // edx
  double v9; // st7
  unsigned __int16 *v10; // eax
  int v11; // edx
  int v12; // ecx
  int v13; // ecx
  int v14; // eax
  int GroundHeight; // ebx
  int ptr_0; // eax
  char v17; // bl
  int v18; // ebx
  int *v19; // eax
  CellClass *v20; // eax
  int *Coords; // ebp
  CellClass *v22; // eax
  int *v23; // eax
  int v24; // edx
  int v25; // ecx
  int v26; // eax
  int *v27; // eax
  int v28; // eax
  int v29; // edi
  unsigned int v30; // ebp
  unsigned __int16 *v31; // eax
  unsigned __int16 *v32; // eax
  bool v33; // zf
  signed int v34; // ebx
  double v35; // st7
  unsigned __int16 *v36; // eax
  int v37; // edx
  int v38; // ebp
  int v39; // edi
  unsigned int v40; // ebx
  unsigned __int16 *v41; // eax
  unsigned __int16 *v42; // eax
  bool v43; // zf
  signed int v44; // ebp
  double v45; // st7
  unsigned __int16 *v46; // eax
  unsigned __int16 *v47; // edx
  int v48; // kr00_4
  CellClass *v49; // ebx
  int firstObject; // ebp
  int v51; // eax
  int ObjectVector_field_0x14; // ecx
  int v53; // eax
  int i; // ebp
  unsigned int *v55; // edi
  int v56; // edx
  int v57; // edx
  int v58; // edx
  int v59; // eax
  int v60; // edx
  int v61; // edx
  int v62; // eax
  CellClass *v63; // eax
  unsigned int *v64; // eax
  unsigned __int16 *v65; // [esp+18h] [ebp-68h]
  double v66; // [esp+18h] [ebp-68h]
  int v67; // [esp+24h] [ebp-5Ch]
  int v68; // [esp+24h] [ebp-5Ch]
  int v69; // [esp+24h] [ebp-5Ch]
  int v70; // [esp+24h] [ebp-5Ch]
  int v71; // [esp+28h] [ebp-58h]
  unsigned __int16 *v72; // [esp+28h] [ebp-58h]
  double v73[2]; // [esp+30h] [ebp-50h] BYREF
  double v74; // [esp+40h] [ebp-40h] BYREF
  int v75; // [esp+50h] [ebp-30h] BYREF
  int ObjectVector_field_0x04; // [esp+54h] [ebp-2Ch]
  int ObjectVector_field_0x08; // [esp+58h] [ebp-28h] BYREF
  ObjectVector v78; // [esp+5Ch] [ebp-24h] BYREF
  int v79; // [esp+74h] [ebp-Ch] BYREF
  int v80; // [esp+78h] [ebp-8h]
  int v81; // [esp+7Ch] [ebp-4h]

  if ( *(unsigned int *)(*((unsigned int *)dword_8B413C + this->tubeIndex[0]) + 4 * this->unknownBool685[0] + 48) != -1 ) /*0x735a20*/
  {
    v2 = (Vector3 *)this->GetInvalidCoord(this); /*0x735a2f*/
    unknownCoords568 = this->unknownCoords568; /*0x735a32*/
    v4 = Vector3::Subtract(v2, &ObjectVector_field_0x08, this->unknownCoords568); /*0x735a40*/
    Coord::Length((Coord *)v4); /*0x735a47*/
    v5 = (unsigned int *)*((unsigned int *)dword_8B413C + this->tubeIndex[0]); /*0x735a5f*/
    v6 = (int *)(*(int (**)(UnitClass *, int *, int *))&this->ptr_0->u32_48)( /*0x735a69*/
                  this,
                  &v78.q014,
                  this->unknownCoords568);
    Height = Cell::GetHeight((Cell *)v73, v6, &v79); /*0x735a71*/
    Type = this->Type; /*0x735a76*/
    LODWORD(v73[0]) = *(unsigned int *)Height; /*0x735a7e*/
    v9 = (double)*(int *)(Type + 1656) * 1.5; /*0x735a88*/
    LOWORD(v10) = Math::RoundToInt(v9); /*0x735a8e*/
    v65 = v10; /*0x735a93*/
    v67 = v5[10]; /*0x735a9a*/
    v75 = ((__int16)v67 << 8) + 128; /*0x735aae*/
    v11 = (__int16)v5[9]; /*0x735ab8*/
    v12 = ((short)(((v67) >> 16) & 0xFFFF) << 8) + 128; /*0x735abb*/
    v68 = v5[9]; /*0x735ac1*/
    ObjectVector_field_0x04 = v12; /*0x735aca*/
    ObjectVector_field_0x08 = 0; /*0x735ad9*/
    v78.q008 = 0; /*0x735add*/
    v13 = v5[112]; /*0x735ae1*/
    *(unsigned int *)v78.__pad_0 = (v11 << 8) + 128; /*0x735ae7*/
    v14 = ((short)(((v68) >> 16) & 0xFFFF) << 8) + 128; /*0x735af2*/
    v69 = v13; /*0x735af7*/
    v78.q004 = v14; /*0x735b01*/
    GroundHeight = Cell::GetGroundHeight(&v78); /*0x735b0a*/
    v70 = (int)(Cell::GetGroundHeight(&v75) - GroundHeight) / v69; /*0x735b26*/
    if ( v71 > (int)v65 ) /*0x735b30*/
    {
      v38 = v5[this->unknownBool685[0] + 12]; /*0x735d42*/
      v79 = this->location[0]; /*0x735d48*/
      v80 = this->location[1]; /*0x735d4f*/
      v39 = this->location[2]; /*0x735d53*/
      LODWORD(v73[0]) = SLOWORD(v73[0]) - 0x3FFF; /*0x735d61*/
      v74 = (double)SLODWORD(v73[0]) * -0.00009587672516830327; /*0x735d6f*/
      v40 = HIDWORD(v74); /*0x735d77*/
      v73[0] = (double)v80; /*0x735d8c*/
      Math::SinCos(v74); /*0x735d90*/
      LOWORD(v41) = Math::RoundToInt(v9); /*0x735d9d*/
      LODWORD(v73[0]) = v41; /*0x735da8*/
      Math::ArcTan2(COERCE_DOUBLE((((v40 & 0xFFFFFFFFull)) << 32 | (LODWORD(v74) & 0xFFFFFFFFull)))); /*0x735dac*/
      LOWORD(v42) = Math::RoundToInt(v9 * (double)(int)v65 + (double)v79); /*0x735dbc*/
      ((Coord *)&v78)->Subtract( (int)v42, SLODWORD(v73[0]), v39); /*0x735dcc*/
      v44 = v38 & 0x80000001; /*0x735ddd*/
      v43 = v44 == 0; /*0x735ddd*/
      v75 = *(unsigned int *)v78.__pad_0; /*0x735de3*/
      ObjectVector_field_0x04 = v78.q004; /*0x735de7*/
      ObjectVector_field_0x08 = v78.q008; /*0x735deb*/
      if ( v44 < 0 ) /*0x735def*/
        v43 = (((unsigned char)v44 - 1) | 0xFFFFFFFE) == -1; /*0x735df5*/
      if ( v43 ) /*0x735df6*/
        v45 = 256.0; /*0x735e00*/
      else
        v45 = 362.0386719675124; /*0x735df8*/
      v48 = Math::RoundToInt(v45); /*0x735e14*/
      LOWORD(v47) = (((v48) >> 16) & 0xFFFF); /*0x735e14*/
      LOWORD(v46) = v48; /*0x735e14*/
      ObjectVector_field_0x08 = (int)v46; /*0x735e1d*/
      (*(void (__fastcall **)(UnitClass *, unsigned __int16 *, int *))&this->ptr_0->AudioController_1B4)(this, v47, &v75); /*0x735e28*/
      return; /*0x735e35*/
    }
    ptr_0 = this->ptr_0; /*0x735b3c*/
    v17 = this->unknownBool685[0] + 1; /*0x735b3e*/
    this->unknownBool685[0] = v17; /*0x735b44*/
    v18 = v5[v17 + 12]; /*0x735b4c*/
    (*(void (**)(UnitClass *, int *, double))(ptr_0 + 436))(this, this->unknownCoords568, v9); /*0x735b58*/
    if ( v18 != -1 ) /*0x735b64*/
    {
      v19 = (/*0x735b92*/
              (Coord *)&v79)->Subtract(
              dword_89F6D8[2 * (v18 & 7)] + *unknownCoords568,
              this->unknownCoords568[1] + dword_89F6DC[2 * (v18 & 7)],
              this->unknownCoords568[2]);
      v75 = *v19; /*0x735b99*/
      ObjectVector_field_0x04 = v19->q004; /*0x735ba5*/
      ObjectVector_field_0x08 = v19->q008; /*0x735bb2*/
      v20 = ((Coord *)&dword_87F7E8)->To_Cell( this->unknownCoords568); /*0x735bb6*/
      Coords = CellClass::GetCoords(v20, (int *)&v74); /*0x735bc2*/
      v22 = ((Coord *)&dword_87F7E8)->To_Cell( &v75); /*0x735bd3*/
      v23 = CellClass::GetCoords(v22, (int *)v73); /*0x735bda*/
      v24 = *v23 - *Coords + *unknownCoords568; /*0x735bf2*/
      v25 = v23[1] - Coords[1] + this->unknownCoords568[1]; /*0x735bf7*/
      v26 = this->unknownCoords568[2]; /*0x735bf9*/
      *unknownCoords568 = v24; /*0x735bfc*/
      this->unknownCoords568[1] = v25; /*0x735c00*/
      this->unknownCoords568[2] = v26; /*0x735c07*/
      this->unknownCoords568[2] += v70; /*0x735c16*/
      v27 = (int *)(*(int (**)(UnitClass *, int *))&this->ptr_0->u32_48)(this, &v79); /*0x735c21*/
      v28 = (__int16)*(unsigned int *)Cell::GetHeight((Cell *)v73, v27, this->unknownCoords568); /*0x735c36*/
      v79 = this->location[0]; /*0x735c3b*/
      v80 = this->location[1]; /*0x735c42*/
      v29 = this->location[2]; /*0x735c4a*/
      LODWORD(v73[0]) = (char *)v65 - v71; /*0x735c5c*/
      v74 = (double)(v28 - 0x3FFF) * -0.00009587672516830327; /*0x735c6e*/
      v30 = HIDWORD(v74); /*0x735c76*/
      v66 = (double)((int)v65 - v71); /*0x735c80*/
      Math::SinCos(v74); /*0x735c8f*/
      LOWORD(v31) = Math::RoundToInt(v9); /*0x735c9c*/
      v72 = v31; /*0x735ca7*/
      Math::ArcTan2(COERCE_DOUBLE((((v30 & 0xFFFFFFFFull)) << 32 | (LODWORD(v74) & 0xFFFFFFFFull)))); /*0x735cab*/
      LOWORD(v32) = Math::RoundToInt(v9 * v66 + (double)v79); /*0x735cbb*/
      ((Coord *)&v75)->Subtract( (int)v32, (int)v72, v29); /*0x735ccb*/
      v34 = v18 & 0x80000001; /*0x735cdc*/
      v33 = v34 == 0; /*0x735cdc*/
      *(unsigned int *)v78.__pad_0 = v75; /*0x735ce2*/
      v78.q004 = ObjectVector_field_0x04; /*0x735ce6*/
      v78.q008 = ObjectVector_field_0x08; /*0x735cea*/
      if ( v34 < 0 ) /*0x735cee*/
        v33 = (((unsigned char)v34 - 1) | 0xFFFFFFFE) == -1; /*0x735cf4*/
      if ( v33 ) /*0x735cf5*/
        v35 = 256.0; /*0x735cff*/
      else
        v35 = 362.0386719675124; /*0x735cf7*/
      LOWORD(v36) = Math::RoundToInt(v35); /*0x735d13*/
      v37 = this->ptr_0; /*0x735d18*/
      v78.q008 = (int)v36; /*0x735d1a*/
      (*(void (**)(UnitClass *, ObjectVector *))(v37 + 436))(this, &v78); /*0x735d27*/
      return; /*0x735d34*/
    }
  }
  v79 = this->location[0]; /*0x735e40*/
  v80 = this->location[1]; /*0x735e4c*/
  v81 = this->location[2]; /*0x735e58*/
  v49 = ((Coord *)&dword_87F7E8)->To_Cell( &v79); /*0x735e64*/
  firstObject = v49->firstObject; /*0x735e66*/
  if ( firstObject ) /*0x735e6e*/
  {
    ObjectVector::Construct(&v78, 0, 0); /*0x735e7c*/
    v51 = v78.q008; /*0x735e81*/
    ObjectVector_field_0x14 = 10; /*0x735e85*/
    /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7E4F64) */  /*0x735e8c*/
    v78.q014 = 10; /*0x735e94*/
    v78.q010 = 0; /*0x735e98*/
    while ( 1 ) /*0x735ea2*/
    {
      if ( v78.q010 < v51 ) /*0x735ea6*/
        goto LABEL_24; /*0x735ea6*/
      if ( (BYTE1(v78.ObjectVector_field_0x0C) || !v51) && ObjectVector_field_0x14 > 0 ) /*0x735eb6*/
        break; /*0x735eb6*/
LABEL_26:
      firstObject = *(unsigned int *)(firstObject + 48); /*0x735ee1*/
      if ( !firstObject ) /*0x735ee6*/
      {
        for ( i = 0; i < v78.q010; ++i ) /*0x735ef0*/
        {
          v55 = *(unsigned int **)(v78.q004 + 4 * i); /*0x735ef6*/
          if ( (*(int (**)(unsigned int *))(*v55 + 44))(v55) == 1 /*0x735f0f*/
            || (*(int (**)(unsigned int *))(*v55 + 44))(v55) == 15 )
          {
            if ( !v55[413] ) /*0x735f11*/
              sub_7DC720(-2147467261); /*0x735f1e*/
            if ( !(*(unsigned __int8 (**)(unsigned int))(*(unsigned int *)v55[413] + 16))(v55[413]) ) /*0x735f2c*/
            {
              v56 = *v55; /*0x735f33*/
              v79 = 0; /*0x735f40*/
              v80 = 0; /*0x735f47*/
              v81 = 0; /*0x735f4e*/
              (*(void (**)(unsigned int *, int *, int, int))(v56 + 372))(v55, &v79, 1, 1); /*0x735f55*/
            }
          }
        }
        this->Destru_vt337( 0, 0); /*0x735f6a*/
        /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7E192C) */  /*0x735f74*/
        if ( v78.q004 && BYTE1(v78.ObjectVector_field_0x0C) ) /*0x735f8a*/
          __3_YAXPAX_Z((void *)v78.q004); /*0x735f91*/
        return; /*0x735fa0*/
      }
      ObjectVector_field_0x14 = v78.q014; /*0x735e9e*/
    }
    if ( (*(unsigned __int8 (**)(ObjectVector *, int, unsigned int))(*(unsigned int *)v78.__pad_0 + 8))( /*0x735ec4*/
           &v78,
           ObjectVector_field_0x14 + v51,
           0) )
    {
LABEL_24:
      v53 = v78.q010++; /*0x735ecb*/
      *(unsigned int *)(v78.q004 + 4 * v53) = firstObject; /*0x735eda*/
    }
    v51 = v78.q008; /*0x735edd*/
    goto LABEL_26; /*0x735edd*/
  }
  v57 = this->unknownCoords568[2]; /*0x735fb4*/
  LODWORD(v73[0]) = *(unsigned int *)(*((unsigned int *)dword_8B413C + this->tubeIndex[0]) + 40); /*0x735fba*/
  v81 = v57; /*0x735fbe*/
  v80 = (SWORD1(v73[0]) << 8) + 128; /*0x735fdb*/
  v79 = (SLOWORD(v73[0]) << 8) + 128; /*0x735fe3*/
  this->SetPosition( &v79); /*0x735fec*/
  v58 = this->ptr_0; /*0x735ff2*/
  this->tubeIndex[0] = -1; /*0x735ff8*/
  (*(void (**)(UnitClass *, int))(v58 + 292))(this, 1); /*0x735fff*/
  if ( (CellClass *)this->movementDestination == v49 ) /*0x73600b*/
  {
    v59 = this->ptr_0; /*0x73600d*/
    memset(&v78, 0, 12); /*0x73601c*/
    (*(void (**)(UnitClass *, ObjectVector *, int, int))(v59 + 372))(this, &v78, 1, 1); /*0x736028*/
  }
  v60 = this->ptr_0; /*0x736032*/
  this->FootClass_field_bool_68B[0] = 1; /*0x736038*/
  (*(void (**)(UnitClass *, int))(v60 + 396))(this, 2); /*0x73603f*/
  this->Destru_vt337( 0, 1072693248); /*0x73604f*/
  v61 = this->location[1]; /*0x736057*/
  v62 = this->location[2]; /*0x73605a*/
  *(unsigned int *)v78.__pad_0 = this->location[0]; /*0x73605d*/
  v78.q004 = v61; /*0x736065*/
  v78.q008 = v62; /*0x73606f*/
  v63 = ((Coord *)&dword_87F7E8)->To_Cell( &v78); /*0x736073*/
  v64 = (unsigned int *)InfantryClass::GetType((InfantryClass *)v63); /*0x73607a*/
  if ( v64 ) /*0x736081*/
  {
    LOWORD(v73[0]) = (((unsigned __int16)v64[11] << 13) - 24577) & 0xE000; /*0x7360a0*/
    FacingClass::Set_SyncLog((char *)this->primaryFacing, v73); /*0x7360a5*/
  }

}
// 0x741970
int UnitClass::AssignDestination_SyncLog(int64_t a2)
{

  double v3; // st7
  __int16 *v5; // ebx
  int v6; // ecx
  int v7; // eax
  int v8; // esi
  int v9; // eax
  unsigned int *Value; // esi
  char v11; // al
  int Member; // eax
  int v13; // eax
  unsigned int *v14; // eax
  Team *v15; // esi
  int v16; // edx
  __int16 *v17; // eax
  __int16 v18; // dx
  Cell *v19; // eax
  BuildingClass *v20; // eax
  void *v21; // eax
  int v22; // eax
  int v25; // edi
  Class_7F5C70 *v26; // esi
  int v27; // eax
  int v28; // eax
  int v29; // ecx
  int v30; // eax
  int v31; // ecx
  int v32; // eax
  unsigned int *v33; // eax
  int TileIndex; // eax
  int v35; // edx
  unsigned int *v36; // eax
  Cell *v37; // eax
  unsigned int *v38; // eax
  Cell *v39; // eax
  char v40; // bl
  int RegionMap; // esi
  int v42; // edx
  char v43; // al
  int v44; // ecx
  int v45; // eax
  int v46; // ecx
  Class_7F5C70 *v47; // ebx
  int v48; // edi
  int v49; // eax
  int v50; // esi
  CellClass *v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // eax
  int v56; // eax
  int v57; // eax
  int v58; // eax
  int v59; // eax
  int (***v60)(unsigned int, void *, int *); // eax
  int v61; // esi
  int v62; // edi
  int v63; // ecx
  int v64; // esi
  int v65; // esi
  int v66; // eax
  Class_7F5C70 *v67; // esi
  int v68; // eax
  int (***Checked)(unsigned int, void *, int *); // eax
  int v70; // esi
  int v71; // eax
  int ComPtr_field_0x10; // edi
  int *v73; // eax
  int GroundHeight; // eax
  unsigned int *v75; // eax
  unsigned int *v76; // eax
  CellClass *v77; // eax
  unsigned int *v78; // eax
  CellClass *v79; // eax
  unsigned int *v80; // eax
  int v81; // eax
  __int16 *v82; // eax
  int v83; // eax
  Class_7F5C70 *v84; // ebx
  int (***v85)(unsigned int, void *, int *); // eax
  int v86; // esi
  int v87; // eax
  int v88; // edi
  int v89; // eax
  int InstanceCOM; // eax
  int StreamClass_field_0C; // eax
  int (***v92)(unsigned int, void *, int *); // eax
  int v93; // esi
  int v94; // edi
  int v95; // ecx
  int v96; // esi
  int *v97; // esi
  int m_Data; // eax
  int *v99; // esi
  int v100; // edi
  CellClass *v101; // eax
  int ComPtr_field_0x0C; // ebx
  void *v103; // edi
  int *v104; // esi
  int *v105; // esi
  int v106; // eax
  int v107; // ecx
  int v108; // ecx
  int v109; // edx
  int v110; // eax
  unsigned int *v111; // ecx
  int v112; // eax
  int v113; // eax
  int v114; // esi
  int v115; // eax
  int *v116; // ecx
  int v117; // edx
  int v118; // eax
  int v119; // ebx
  int v120; // eax
  int v121; // ebx
  int v122; // kr28_4
  int v123; // eax
  int v124; // eax
  int v125; // edx
  int v126; // [esp+D0h] [ebp-BCh]
  int v127; // [esp+D0h] [ebp-BCh]
  double v128; // [esp+F4h] [ebp-98h]
  char v129; // [esp+10Fh] [ebp-7Dh]
  char v130; // [esp+110h] [ebp-7Ch]
  char v131; // [esp+110h] [ebp-7Ch]
  char IsBuildableAdvanced; // [esp+112h] [ebp-7Ah]
  char v133; // [esp+113h] [ebp-79h]
  StreamClass v134; // [esp+114h] [ebp-78h] BYREF
  ComPtr v135; // [esp+128h] [ebp-64h] BYREF
  int v136; // [esp+14Ch] [ebp-40h]
  unsigned int v137[3]; // [esp+150h] [ebp-3Ch] BYREF
  __int16 v138[4]; // [esp+15Ch] [ebp-30h] BYREF
  int v139; // [esp+164h] [ebp-28h]
  unsigned char v140[16]; // [esp+16Ch] [ebp-20h] BYREF
  unsigned char v141[16]; // [esp+17Ch] [ebp-10h] BYREF

  v5 = (__int16 *)LODWORD(a2); /*0x74197a*/
  if ( *(unsigned char *)&this->Type->qD6A )
  {
    if ( !LODWORD(a2) )
    {
      v6 = this->FootClass_field_5A4; /*0x74199f*/
      if ( v6 )
      {
        v7 = this->AbstractClass_2B4; /*0x7419ad*/
        if ( v7 )
        {
          if ( v6 == v7
            || (*(int (**)(int))(*(unsigned int *)v6 + 44))(v6) == 11
            && ((v8 = this->FootClass_field_5A4) != 0
              ? (v9 = (*(int (**)(unsigned int))(*(unsigned int *)v8 + 44))(this->FootClass_field_5A4) == 11 ? v8 : 0)
              : (v9 = 0),
                *(unsigned int *)(v9 + 228) == this->AbstractClass_2B4)
            || (LOWORD(v135.q008) = 0x4000,
                Value = ProgressTimer::GetValue(&this->primaryFacing, &v135.q010),
                LOWORD(v135.q00C) = *(unsigned short *)ObjectClass::CalcTargetFacing(
                                                             (ObjectClass *)this,
                                                             &v135.ComPtr_field_0x04,
                                                             this->AbstractClass_2B4)
                                               - *(unsigned short *)Value,
                (unsigned __int8)UnitClass::CompareCoordinateMagnitude(
                                   (UnitClass *)&v135.q008,
                                   (__int16 *)&v135.q00C)) )
          {
            if ( (*(int (**)(Class_7F5C70 *))(*&this->q_610))(this) != 1 ) /*0x741a60*/
              (*(void (**)(Class_7F5C70 *, int))(*&this->q7C0))(this, 1); /*0x741a6d*/
            return; /*0x741a7d*/
          }
        }
      }
    }
  }
  if ( LODWORD(a2) != this->FootClass_field_5A4 || this->isTargetedByChrono )
  {
    v11 = this->Deployed; /*0x741a96*/
    this->isTargetedByChrono = 0; /*0x741a9c*/
    if ( v11 ) /*0x741aa5*/
    {
      if ( !this->isBerserk_duration_left ) /*0x741acb*/
      {
LABEL_366:
        FootClass::ClearPathIndex((FootClass *)this); /*0x743173*/
        return; /*0x743175*/
      }
    }
    else if ( this->Deploying || this->Undeploying ) /*0x741ab1*/
    {
      goto LABEL_366; /*0x741ab9*/
    }
    if ( (unsigned __int8)Team::AllMembersValid((Team *)this) ) /*0x741ad3*/
    {
      if ( *(int *)&this->Type->Passengers > 0 ) /*0x741aea*/
      {
        Member = Team::GetMember((Team *)this, 0); /*0x741af0*/
        if ( (*(int (**)(int))(*(unsigned int *)Member + 44))(Member) == 15 ) /*0x741aff*/
        {
          if ( !LODWORD(a2) ) /*0x741b03*/
            goto LABEL_49; /*0x741b03*/
          if ( (*(unsigned char *)(LODWORD(a2) + 20) & 1) != 0 && !(unsigned __int8)Array::Contains((Array *)this, SLODWORD(a2)) ) /*0x741b12*/
            (*(void (**)(Class_7F5C70 *, int))(*&this->q9D0))(this, 3); /*0x741b22*/
        }
      }
    }
    if ( LODWORD(a2) )
    {
      if ( (unsigned __int8)Team::AllMembersValid((Team *)this) ) /*0x741b32*/
      {
        if ( !(*(int (**)(Class_7F5C70 *))(*&this->q_610))(this) ) /*0x741b40*/
        {
          if ( this->voiceHandle ) /*0x741b4a*/
          {
            v13 = Team::GetMember((Team *)this, 0); /*0x741b58*/
            if ( (*(int (**)(int))(*(unsigned int *)v13 + 44))(v13) == 2 ) /*0x741b67*/
            {
              v14 = (unsigned int *)Team::GetMember((Team *)this, 0); /*0x741b6d*/
              if ( *(unsigned char *)(v14[433] + 3580) ) /*0x741b78*/
              {
                v14->vt_slot_1152(0, 1); /*0x741b8a*/
                (*(void (**)(Class_7F5C70 *, int))(*&this->q9D0))(this, 25); /*0x741b97*/
                (*(void (**)(Class_7F5C70 *, int))(*&this->q9D0))(this, 3); /*0x741ba4*/
              }
            }
          }
        }
      }
      v15 = (*(int (**)(unsigned int))(*(unsigned int *)LODWORD(a2) + 44))(LODWORD(a2)) == 6 ? (Team *)LODWORD(a2) : 0;
LABEL_36:
      v16 = *(unsigned int *)this; /*0x741bbe*/
      v135.q00C = (int)v15; /*0x741bc3*/
      if ( (*(int (**)(Class_7F5C70 *))(v16 + 388))(this) == 16 || this->queuedMission == 16 ) /*0x741bd9*/
      {
        v17 = (__int16 *)(*(int (**)(Class_7F5C70 *, int *))(*&this->Deployed))( /*0x741be5*/
                           this,
                           &v135.q010);
        v18 = *v17; /*0x741beb*/
        LOWORD(v17) = *(&dword_89F6A0 + 1) + v17[1]; /*0x741bf9*/
        LOWORD(v135.ComPtr_field_0x04) = dword_89F6A0 + v18; /*0x741c00*/
        HIWORD(v135.ComPtr_field_0x04) = (unsigned short)v17; /*0x741c05*/
        v135.q008 = v135.ComPtr_field_0x04; /*0x741c12*/
        v19 = (Cell *)((CellCoord *)&dword_87F7E8)->To_CellObj((__int16 *)&v135.q008); /*0x741c1c*/
        v20 = (BuildingClass *)Cell::IsBridge(v19); /*0x741c23*/
        if ( v20 ) /*0x741c2a*/
        {
          if ( *(unsigned char *)(this->Type + 3598) && v20->Anims[10] ) /*0x741c3c*/
            BuildingClass::ClearAnims(v20, 10); /*0x741c4a*/
        }
      }
      if ( (*(int (**)(Class_7F5C70 *))(*&this->q_610))(this) != 7 && this->queuedMission != 7 /*0x741c71*/
        || (unsigned __int8)Team::AllMembersValid((Team *)this) )
      {
        this->pathDirections = -1; /*0x741e88*/
        goto LABEL_80; /*0x741e88*/
      }
      v21 = AbstractClass::IsTechnoType((AbstractClass *)LODWORD(a2)); /*0x741c80*/
      if ( v21 && (*(int (**)(void *))(*(unsigned int *)v21 + 44))(v21) == 1 )
      {
        if ( LODWORD(a2) )
          v22 = (*(int (**)(unsigned int))(*(unsigned int *)LODWORD(a2) + 44))(LODWORD(a2)) == 1 ? LODWORD(a2) : 0;
        else
          v22 = 0; /*0x741c99*/
        this->queueUpToEnter = v22; /*0x741cb8*/
        TechnoClass::SetFocus((TechnoClass *)this, 0); /*0x741cbe*/
        v5 = 0; /*0x741cc3*/
        LODWORD(a2) = 0; /*0x741cc5*/
        goto LABEL_80; /*0x741ccc*/
      }
      if ( !v15 ) /*0x741cd3*/
        goto LABEL_74; /*0x741cd3*/
      if ( (*(int (**)(Team *))(*(unsigned int *)v15->__pad_0 + 44))(v15) == 6 /*0x741ceb*/
        && *(unsigned char *)(*(unsigned int *)&v15[5].__pad_0[132] + 5806) )
      {
        this->queueUpToEnter = v15; /*0x741cf9*/
        TechnoClass::SetFocus((TechnoClass *)this, 0); /*0x741cff*/
        v5 = 0; /*0x741d04*/
        LODWORD(a2) = 0; /*0x741d06*/
        goto LABEL_80; /*0x741d0d*/
      }
      if ( (*(int (**)(Team *))(*(unsigned int *)v15->__pad_0 + 44))(v15) == 6 ) /*0x741d1c*/
      {
        if ( (unsigned __int8)Team::AllMembersValid(v15) ) /*0x741d24*/
        {
          if ( !*(unsigned char *)(*(unsigned int *)&v15[5].__pad_0[132] + 5803) ) /*0x741d37*/
            TechnoClass::SetFocus((TechnoClass *)this, SLODWORD(a2)); /*0x741d44*/
          if ( *(unsigned char *)(*(unsigned int *)&v15[5].__pad_0[132] + 5803) ) /*0x741d4f*/
          {
            (*(void (**)(Class_7F5C70 *, int))(*&this->q9D0))(this, 3); /*0x741d60*/
            v5 = 0; /*0x741d66*/
            LODWORD(a2) = 0; /*0x741d68*/
          }
          if ( *(unsigned char *)(*(unsigned int *)&v15[5].__pad_0[132] + 5801) ) /*0x741d75*/
          {
            BuildingClass::GetHealthRatio((BuildingClass *)this); /*0x741d85*/
            _ECX = dword_8871E0; /*0x741d8a*/
            __asm /*0x741d90*/
            {
              fcomp qword ptr [ecx+16F8h]
              fnstsw ax
            }
            if ( (_AX & 0x100) != 0 ) /*0x741d9b*/
            {
              v5 = 0; /*0x741d9d*/
              this->queueUpToEnter = v15; /*0x741d9f*/
            }
            else
            {
              (*(void (**)(Class_7F5C70 *, int))(*&this->q9D0))(this, 3); /*0x741db8*/
              v5 = 0; /*0x741dbe*/
            }
            LODWORD(a2) = 0; /*0x741da5*/
          }
          goto LABEL_80; /*0x741dac*/
        }
        v25 = this->FootClass_field_5A4; /*0x741dcf*/
        if ( (*(int (**)(Class_7F5C70 *, int, Team *))(*&this->q9E0))(this, 14, v15) != 1 ) /*0x741de3*/
        {
          (*(void (**)(Class_7F5C70 *, int))(*&this->q9D0))(this, 3); /*0x741dec*/
          if ( !*(unsigned char *)(*(unsigned int *)&v15[5].__pad_0[132] + 5801) ) /*0x741e00*/
            goto LABEL_80; /*0x741e00*/
          goto LABEL_69; /*0x741e00*/
        }
        if ( *(unsigned char *)(*(unsigned int *)&v15[5].__pad_0[132] + 5811) && this->FootClass_field_5A4 != v25 ) /*0x741e28*/
        {
          v5 = (__int16 *)this->FootClass_field_5A4; /*0x741e2a*/
          LODWORD(a2) = v5; /*0x741e2c*/
        }
      }
      else
      {
LABEL_74:
        if ( !LODWORD(a2) || (*(unsigned char *)(LODWORD(a2) + 20) & 1) == 0 ) /*0x741e3d*/
          goto LABEL_80; /*0x741e3d*/
        if ( (unsigned __int8)Team::AllMembersValid((Team *)LODWORD(a2)) ) /*0x741e41*/
        {
LABEL_69:
          TechnoClass::SetFocus((TechnoClass *)this, SLODWORD(a2)); /*0x741e06*/
          goto LABEL_80; /*0x741e0e*/
        }
        if ( (*(int (**)(Class_7F5C70 *, int, unsigned int))(*&this->q9E0))(this, 2, LODWORD(a2)) == 1 /*0x741e77*/
          && (*(int (**)(Class_7F5C70 *, int))(*&this->q9D0))(this, 14) != 1 )
        {
          (*(void (**)(Class_7F5C70 *, int))(*&this->q9D0))(this, 3); /*0x741e80*/
        }
      }
LABEL_80:
      if ( v5 && *(unsigned char *)&this->Type->Spawned ) /*0x741ea1*/
      {
        v26 = &this->Locomotor; /*0x741eb5*/
        if ( !this->Locomotor ) /*0x741eaf*/
          sub_7DC720(-2147467261); /*0x741ec4*/
        if ( (*(unsigned __int8 (**)(unsigned int))(**(unsigned int **)v26 + 16))(*(unsigned int *)v26) ) /*0x741ece*/
        {
          v27 = *(unsigned int *)v26; /*0x741ed9*/
          v135.ComPtr_field_0x04 = 0; /*0x741edb*/
          if ( !v27 ) /*0x741ee5*/
            goto LABEL_90; /*0x741ee5*/
          v28 = StreamClass::Set2((StreamClass *)&v135.ComPtr_field_0x04, &this->Locomotor); /*0x741eec*/
          if ( v28 < 0 && v28 != -2147467262 ) /*0x741efa*/
            sub_7DC720(v28); /*0x741efd*/
          if ( !v135.ComPtr_field_0x04 ) /*0x741f08*/
LABEL_90:
            sub_7DC720(-2147467261); /*0x741f0f*/
          (*(void (**)(int, unsigned char *))(*(unsigned int *)v135.ComPtr_field_0x04 + 12))(v135.ComPtr_field_0x04, v140); /*0x741f20*/
          if ( !memcmp(v140, &stru_7E9A30, 0x10u) ) /*0x741f33*/
          {
            v29 = this->u32_5B4; /*0x741f3b*/
            if ( this->u32_5BC < v29 /*0x741f6c*/
              || (this->u32_5B9 || !v29)
              && (v30 = this->u32_5C0, v30 > 0)
              && (*(unsigned __int8 (**)(Class_7F5C70 *, int, unsigned int))(this->FootClass_DVC_5AC + 8))(
                   &this->FootClass_DVC_5AC,
                   v30 + v29,
                   0) )
            {
              v31 = this->u32_5BC; /*0x741f73*/
              if ( v31 ) /*0x741f78*/
                memcpy((void *)(this->q_5B0 + 4), this->q_5B0, 4 * v31); /*0x741f86*/
              *this->q_5B0 = v5; /*0x741f91*/
              ++this->u32_5BC; /*0x741f97*/
            }
            (*(void (**)(Class_7F5C70 *))(this->FootClass_DVC_588 + 12))(&this->qD2C); /*0x741fa6*/
            v32 = (*(int (**)(Class_7F5C70 *))(*&this->q710))(this); /*0x741fae*/
            v5 = (__int16 *)v32; /*0x741fb4*/
            BYTE4(a2) = 0; /*0x741fb6*/
            LODWORD(a2) = v32; /*0x741fc0*/
            if ( v32 ) /*0x741fc7*/
            {
              if ( (*(unsigned int *)(v32 + 320) & 0x100) != 0 /*0x741fe3*/
                && !(*(unsigned __int8 (**)(Class_7F5C70 *, unsigned int))(*&this->slaveOwner))(this, 0) )
              {
                v33 = (unsigned int *)this->Type; /*0x741ff3*/
                *(unsigned short *)v135.__pad_0 = 0; /*0x741ffa*/
                *(unsigned short *)&v135.ComPtr_2 = 0; /*0x741fff*/
                v126 = v33[365]; /*0x742022*/
                TileIndex = MapClass::GetTileIndex((MapClass *)&dword_87F7E8, v5 + 18, v126, 0); /*0x74202f*/
                v135.q008 = *LayerClass::Pathfinding_Find( /*0x742050*/
                                            (Type *)&dword_87F7E8,
                                            v35,
                                            &v135.q010,
                                            v5 + 18,
                                            1,
                                            TileIndex,
                                            v126,
                                            0,
                                            1,
                                            1,
                                            0,
                                            1,
                                            0,
                                            0,
                                            (__int16 *)v135.__pad_0,
                                            0,
                                            0);
                if ( v135.q008 != g_UnitSelectionState ) /*0x742054*/
                {
                  v5 = (__int16 *)((CellCoord *)&dword_87F7E8)->To_CellObj((__int16 *)&v135.q008); /*0x742073*/
                  LODWORD(a2) = v5; /*0x742075*/
                }
              }
            }
          }
          if ( v135.ComPtr_field_0x04 ) /*0x742082*/
            (*(void (**)(int))(*(unsigned int *)v135.ComPtr_field_0x04 + 8))(v135.ComPtr_field_0x04); /*0x742087*/
        }
      }
      v129 = 0; /*0x74208c*/
      if ( !v5 ) /*0x742091*/
      {
        (*(void (**)(Class_7F5C70 *))(this->FootClass_DVC_588 + 12))(&this->qD2C); /*0x7423ca*/
        goto LABEL_143; /*0x7423ca*/
      }
      if ( !*(unsigned char *)&this->Type->Spawned ) /*0x7420a5*/
        goto LABEL_128; /*0x7420a5*/
      if ( !BYTE4(a2) ) /*0x7420b4*/
        goto LABEL_143; /*0x7420b4*/
      v130 = (*(int (**)(Class_7F5C70 *, unsigned int))(*&this->slaveOwner))(this, 0); /*0x7420ca*/
      v36 = (unsigned int *)(*(int (**)(Class_7F5C70 *, unsigned int *, unsigned int))(*&this->deployAnim))(this, v137, 0); /*0x7420d7*/
      LOWORD(v134.m_Data) = *v36 / 256; /*0x7420ea*/
      HIWORD(v134.m_Data) = v36[1] / 256; /*0x742102*/
      *(unsigned int *)v135.__pad_0 = v134.m_Data; /*0x74210b*/
      v37 = (Cell *)((CellCoord *)&dword_87F7E8)->To_CellObj((__int16 *)v135.__pad_0); /*0x742115*/
      IsBuildableAdvanced = Cell::IsBuildableAdvanced(v37); /*0x74212c*/
      v38 = (unsigned int *)(*(int (**)(unsigned int, unsigned int *))(*(unsigned int *)LODWORD(a2) + 72))(LODWORD(a2), v137); /*0x742135*/
      LOWORD(v134.m_Data) = *v38 / 256; /*0x742148*/
      HIWORD(v134.m_Data) = v38[1] / 256; /*0x742161*/
      v134.StreamClass_field_0C = v134.m_Data; /*0x74216e*/
      v39 = (Cell *)((CellCoord *)&dword_87F7E8)->To_CellObj((__int16 *)&v134.StreamClass_field_0C); /*0x742173*/
      v40 = (((v39->u32_140) >> 8) & 0xFF) & 1; /*0x742183*/
      v133 = Cell::IsBuildableAdvanced(v39); /*0x742190*/
      *(unsigned int *)v134.m_Position = (*(int (**)(Class_7F5C70 *))(*&this->q720))(this); /*0x74219a*/
      if ( v130 ) /*0x7421a4*/
      {
        if ( v40 ) /*0x7421ac*/
        {
          RegionMap = GetRegionMap((ObjectClass *)&dword_87F7E8, (__int16 *)v135.__pad_0, 3, 0); /*0x7421d3*/
          if ( RegionMap == GetRegionMap((ObjectClass *)&dword_87F7E8, (__int16 *)&v134.StreamClass_field_0C, 3, 0) /*0x7421e5*/
            && RegionMap != -1 )
          {
            if ( *((unsigned char *)dword_87F83C + 16 * RegionMap + 8) ) /*0x7421f4*/
              goto LABEL_116; /*0x7421f4*/
            v134.m_Data = *Pathfinding::SelectRegionPath(&v135.q010, (__int16 *)v135.__pad_0, (int)&v135); /*0x74222f*/
            v135.q010 = *Pathfinding::SelectRegionPath( /*0x74223d*/
                                        &v135.q010,
                                        (__int16 *)&v134.StreamClass_field_0C,
                                        (int)&v134.StreamClass_field_0C);
            v42 = (__int16)(HIWORD(v134.m_Data) - HIWORD(v135.q010)); /*0x742250*/
            v134.m_Data = (__int16)(LOWORD(v134.m_Data) - LOWORD(v135.q010)); /*0x742253*/
            __asm { fild [esp+98h+var_78.m_Data] } /*0x742257*/
            v134.m_Data = v42; /*0x74225b*/
            __asm /*0x74225f*/
            {
              fild [esp+98h+var_78.m_Data]
              fld st
              fmul st, st(1)
              fld st(2)
              fmul st, st(3)
              faddp st(1), st
              fstp [esp+98h+var_98]; double
              fstp st
              fstp st
            }
            Math::Sqrt(v128); /*0x742274*/
            if ( (__int16)Math::RoundToInt(v3) <= 2 ) /*0x742285*/
LABEL_116:
              v129 = 1; /*0x742287*/
          }
        }
        if ( !v129 ) /*0x742292*/
        {
          v43 = 1; /*0x742294*/
          goto LABEL_122; /*0x742296*/
        }
      }
      else if ( v40 ) /*0x74229a*/
      {
        v43 = 1; /*0x74229c*/
        goto LABEL_122; /*0x74229e*/
      }
      v43 = 0; /*0x7422a0*/
LABEL_122:
      if ( (!IsBuildableAdvanced && *(int *)v134.m_Position >= 0 || !v133) && !v129 || v43 )
      {
        LODWORD(a2) = BuildingClass::FindPlacementCells((BuildingClass *)this, SLODWORD(a2)); /*0x7422d0*/
LABEL_130:
        if ( !this->Locomotor ) /*0x7422f7*/
          sub_7DC720(-2147467261); /*0x742306*/
        if ( (*(unsigned __int8 (**)(unsigned int))(*this->Locomotor + 152))(this->Locomotor) ) /*0x742314*/
        {
          v44 = this->u32_590; /*0x742322*/
          if ( this->q598 < v44 /*0x742353*/
            || (this->u32_595 || !v44)
            && (v45 = this->u32_59C, v45 > 0)
            && (*(unsigned __int8 (**)(Class_7F5C70 *, int, unsigned int))(this->FootClass_DVC_588 + 8))(
                 &this->FootClass_DVC_588,
                 v45 + v44,
                 0) )
          {
            v46 = this->q598; /*0x74235a*/
            if ( v46 ) /*0x74235f*/
              memcpy((void *)(this->__pad_58C + 4), this->__pad_58C, 4 * v46); /*0x74236d*/
            *this->__pad_58C = LODWORD(a2); /*0x74237f*/
            ++this->q598; /*0x742385*/
          }
          v137[0] = this->location; /*0x742394*/
          v137[1] = this->locationY; /*0x7423a0*/
          v137[2] = this->locationZ; /*0x7423a7*/
          LODWORD(a2) = ((Coord *)&dword_87F7E8)->To_Cell( v137); /*0x7423b5*/
        }
LABEL_143:
        if ( !*(unsigned char *)&this->Type->Teleporter /*0x7423fd*/
          || this->firingParticles
          || this->isBerserk_duration_left
          || this->isAttackedByLocomotor )
        {
          goto LABEL_228; /*0x742405*/
        }
        v47 = &this->qD2C; /*0x742414*/
        v48 = Team::GetMember((Team *)this, 0); /*0x74241a*/
        *(unsigned int *)v135.__pad_0 = 0; /*0x74241c*/
        if ( !this->Locomotor ) /*0x742424*/
          goto LABEL_152; /*0x742424*/
        v49 = StreamClass::Set2((StreamClass *)&v135, &this->Locomotor); /*0x74242e*/
        if ( v49 < 0 && v49 != -2147467262 ) /*0x74243c*/
          sub_7DC720(v49); /*0x74243f*/
        if ( !*(unsigned int *)v135.__pad_0 ) /*0x74244a*/
LABEL_152:
          sub_7DC720(-2147467261); /*0x742451*/
        (*(void (**)(unsigned int, __int16 *))(**(unsigned int **)v135.__pad_0 + 12))(*(unsigned int *)v135.__pad_0, v138); /*0x742462*/
        v131 = 1; /*0x742467*/
        if ( !v48 ) /*0x74246c*/
          goto LABEL_182; /*0x74246c*/
        if ( (*(int (**)(int))(*(unsigned int *)v48 + 44))(v48) != 6
          || ((v50 = (*(int (**)(int))(*(unsigned int *)v48 + 44))(v48) == 6 ? v48 : 0, LODWORD(a2))
            ? (v51 = (*(int (**)(unsigned int))(*(unsigned int *)LODWORD(a2) + 44))(LODWORD(a2)) == 11
                   ? (CellClass *)LODWORD(a2)
                   : 0)
            : (v51 = 0),
              !*(unsigned char *)(*(unsigned int *)(v50 + 1312) + 5811)
           || !v51
           || CellClass::FindBuilding(v51, 0)
           || (v131 = 0, !memcmp(v138, &g_CLSID_HoverLocomotion, 0x10u))) )
        {
LABEL_181:
          if ( v131 != 1 ) /*0x7425e0*/
          {
LABEL_226:
            if ( *(unsigned int *)v135.__pad_0 ) /*0x7427b8*/
              (*(void (**)(unsigned int))(**(unsigned int **)v135.__pad_0 + 8))(*(unsigned int *)v135.__pad_0); /*0x7427bd*/
LABEL_228:
            if ( LODWORD(a2) ) /*0x7427c9*/
            {
              v67 = &this->qD2C; /*0x7427d5*/
              if ( !this->Locomotor ) /*0x7427cf*/
                sub_7DC720(-2147467261); /*0x7427e4*/
              if ( !(*(unsigned __int8 (**)(unsigned int))(**(unsigned int **)v67 + 16))(*(unsigned int *)v67) ) /*0x7427ee*/
              {
                v68 = *(unsigned int *)v67; /*0x7427f9*/
                *(unsigned int *)v135.__pad_0 = 0; /*0x7427fb*/
                if ( !v68 ) /*0x742805*/
                  goto LABEL_240; /*0x742805*/
                Checked = (int (***)(unsigned int, void *, int *))Stream::GetChecked(&this->Locomotor); /*0x742809*/
                v70 = (**Checked)(Checked, &unk_818858, &v135.q010); /*0x74281d*/
                if ( v70 >= 0 ) /*0x742821*/
                {
                  ComPtr_field_0x10 = v135.q010; /*0x742830*/
                  ComPtr::Release_Alt(&v135); /*0x742838*/
                  v71 = ComPtr_field_0x10; /*0x74283d*/
                }
                else
                {
                  ComPtr::Release_Alt(&v135); /*0x742827*/
                  v71 = 0; /*0x74282c*/
                }
                *(unsigned int *)v135.__pad_0 = v71; /*0x742841*/
                if ( v70 < 0 && v70 != -2147467262 ) /*0x74284d*/
                  sub_7DC720(v70); /*0x742850*/
                if ( !v71 ) /*0x74285b*/
LABEL_240:
                  sub_7DC720(-2147467261); /*0x742862*/
                (*(void (**)(int, unsigned char *))(*(unsigned int *)v71 + 12))(v71, v141); /*0x742876*/
                if ( !memcmp(v141, &stru_7E9A50, 0x10u) /*0x742899*/
                  && !(*(int (**)(Class_7F5C70 *))(*&this->q720))(this) )
                {
                  v73 = (int *)(*(int (**)(unsigned int, int *))(*(unsigned int *)LODWORD(a2) + 72))( /*0x7428b0*/
                                 LODWORD(a2),
                                 &v135.q010);
                  v135.q01C = *v73; /*0x7428b5*/
                  v135.q020 = v73[1]; /*0x7428bc*/
                  v136 = v73[2]; /*0x7428cd*/
                  GroundHeight = Cell::GetGroundHeight(&v135.q01C); /*0x7428d1*/
                  if ( v136 < GroundHeight ) /*0x7428da*/
                    v136 = GroundHeight; /*0x7428dc*/
                  if ( v129 ) /*0x7428e6*/
                    goto LABEL_251; /*0x7428e6*/
                  if ( (*(unsigned __int8 (**)(Class_7F5C70 *, unsigned int))(*&this->slaveOwner))(this, 0) ) /*0x7428f3*/
                    goto LABEL_251; /*0x7428f3*/
                  v75 = (unsigned int *)(*(int (**)(unsigned int, int *))(*(unsigned int *)LODWORD(a2) + 72))( /*0x74290a*/
                                    LODWORD(a2),
                                    &v135.q010);
                  if ( (((Coord *)&dword_87F7E8)->To_Cell( v75)->flags & 0x100) != 0 ) /*0x742921*/
                    goto LABEL_251; /*0x742921*/
                  v76 = (unsigned int *)(*(int (**)(Class_7F5C70 *, int *, unsigned int))(*&this->deployAnim))( /*0x742933*/
                                    this,
                                    &v134.m_Data,
                                    0);
                  v77 = ((Coord *)&dword_87F7E8)->To_Cell( v76); /*0x74293c*/
                  if ( !(unsigned __int8)Cell::IsBuildableAdvanced((Cell *)v77) ) /*0x742943*/
                    goto LABEL_251; /*0x742943*/
                  v78 = (unsigned int *)(*(int (**)(unsigned int, __int16 *))(*(unsigned int *)LODWORD(a2) + 72))( /*0x742959*/
                                    LODWORD(a2),
                                    v138);
                  v79 = ((Coord *)&dword_87F7E8)->To_Cell( v78); /*0x742962*/
                  if ( !(unsigned __int8)Cell::IsBuildableAdvanced((Cell *)v79) /*0x7429c7*/
                    || (v80 = (unsigned int *)(*(int (**)(unsigned int))(*(unsigned int *)LODWORD(a2) + 72))(LODWORD(a2)),
                        LOWORD(v134.m_Size) = *v80 / 256,
                        HIWORD(v134.m_Size) = v80[1] / 256,
                        v81 = *(unsigned int *)this,
                        v135.q00C = v134.m_Size,
                        v82 = (__int16 *)(*(int (**)(Class_7F5C70 *, StreamClass *, int *))(v81 + 448))(
                                           this,
                                           &v134,
                                           &v135.q00C),
                        !BuildingTypeClass::IsPlacementValid((BuildingTypeClass *)this, v82, v138)) )
                  {
LABEL_251:
                    v83 = this->Locomotor; /*0x7429d4*/
                    v84 = &this->qD2C; /*0x7429da*/
                    *(unsigned int *)v134.m_Position = 0; /*0x7429e2*/
                    if ( v83 ) /*0x7429ea*/
                    {
                      v85 = (int (***)(unsigned int, void *, int *))Stream::GetChecked(&this->Locomotor); /*0x7429f2*/
                      v86 = (**v85)(v85, &unk_819088, &v135.q010); /*0x742a06*/
                      if ( v86 >= 0 ) /*0x742a0a*/
                      {
                        v88 = v135.q010; /*0x742a19*/
                        Release2COM((ObjectClass *)&v134); /*0x742a21*/
                        v87 = v88; /*0x742a26*/
                      }
                      else
                      {
                        Release2COM((ObjectClass *)&v134); /*0x742a10*/
                        v87 = 0; /*0x742a15*/
                      }
                      *(unsigned int *)v134.m_Position = v87; /*0x742a2a*/
                      if ( v86 < 0 && v86 != -2147467262 ) /*0x742a36*/
                        sub_7DC720(v86); /*0x742a39*/
                      if ( v87 && (*(unsigned __int8 (**)(int))(*(unsigned int *)v87 + 28))(v87) ) /*0x742a49*/
                      {
                        if ( *(unsigned int *)v84 ) /*0x742a50*/
                          (*(void (**)(unsigned int))(**(unsigned int **)v84 + 8))(*(unsigned int *)v84); /*0x742a59*/
                        v89 = *(unsigned int *)v134.m_Position; /*0x742a5c*/
                        *(unsigned int *)v84 = 0; /*0x742a60*/
                        if ( !v89 ) /*0x742a68*/
                          sub_7DC720(-2147467261); /*0x742a6f*/
                        (*(void (**)(int, Class_7F5C70 *))(*(unsigned int *)v89 + 16))(v89, &this->qD2C); /*0x742a7c*/
                      }
                    }
                    v134.m_Data = 0; /*0x742a8c*/
                    InstanceCOM = CreateInstanceCOM((ObjectClass *)&v134.m_Data, (IID *)&stru_7E9A30, 0, 7u); /*0x742a94*/
                    if ( InstanceCOM < 0 && InstanceCOM != -2147467262 ) /*0x742aa2*/
                      sub_7DC720(InstanceCOM); /*0x742aa5*/
                    if ( !v134.m_Data ) /*0x742ab0*/
                      sub_7DC720(-2147467261); /*0x742ab7*/
                    (*(void (**)(int, Class_7F5C70 *))(*(unsigned int *)v134.m_Data + 12))(v134.m_Data, this); /*0x742ac4*/
                    StreamClass_field_0C = 0; /*0x742acb*/
                    v134.StreamClass_field_0C = 0; /*0x742acf*/
                    if ( v134.m_Data ) /*0x742ad3*/
                    {
                      v92 = (int (***)(unsigned int, void *, int *))Stream::GetChecked((Stream *)&v134.m_Data); /*0x742ad9*/
                      v93 = (**v92)(v92, &unk_819088, &v135.q010); /*0x742aed*/
                      if ( v93 >= 0 ) /*0x742af1*/
                      {
                        v94 = v135.q010; /*0x742b00*/
                        Release2COM((ObjectClass *)&v134.StreamClass_field_0C); /*0x742b08*/
                        StreamClass_field_0C = v94; /*0x742b0d*/
                      }
                      else
                      {
                        Release2COM((ObjectClass *)&v134.StreamClass_field_0C); /*0x742af7*/
                        StreamClass_field_0C = 0; /*0x742afc*/
                      }
                      v134.StreamClass_field_0C = StreamClass_field_0C; /*0x742b11*/
                      if ( v93 < 0 && v93 != -2147467262 ) /*0x742b1d*/
                        sub_7DC720(v93); /*0x742b20*/
                    }
                    v95 = *(unsigned int *)v134.m_Position; /*0x742b29*/
                    if ( *(unsigned int *)v134.m_Position != StreamClass_field_0C ) /*0x742b2f*/
                    {
                      v96 = *(unsigned int *)v134.m_Position; /*0x742b31*/
                      v95 = StreamClass_field_0C; /*0x742b33*/
                      *(unsigned int *)v134.m_Position = StreamClass_field_0C; /*0x742b37*/
                      if ( StreamClass_field_0C ) /*0x742b3b*/
                      {
                        (*(void (**)(int))(*(unsigned int *)StreamClass_field_0C + 4))(StreamClass_field_0C); /*0x742b40*/
                        v95 = *(unsigned int *)v134.m_Position; /*0x742b43*/
                        StreamClass_field_0C = v134.StreamClass_field_0C; /*0x742b47*/
                      }
                      if ( v96 ) /*0x742b4d*/
                      {
                        (*(void (**)(int))(*(unsigned int *)v96 + 8))(v96); /*0x742b52*/
                        v95 = *(unsigned int *)v134.m_Position; /*0x742b55*/
                        StreamClass_field_0C = v134.StreamClass_field_0C; /*0x742b59*/
                      }
                    }
                    if ( StreamClass_field_0C ) /*0x742b5f*/
                    {
                      (*(void (**)(int))(*(unsigned int *)StreamClass_field_0C + 8))(StreamClass_field_0C); /*0x742b64*/
                      v95 = *(unsigned int *)v134.m_Position; /*0x742b67*/
                    }
                    if ( v95 ) /*0x742b6d*/
                    {
                      (*(void (**)(int, unsigned int))(*(unsigned int *)v95 + 12))(v95, *(unsigned int *)v84); /*0x742b75*/
                      v97 = *(int **)v84; /*0x742b78*/
                      m_Data = v134.m_Data; /*0x742b7a*/
                      if ( *(unsigned int *)v84 != v134.m_Data ) /*0x742b80*/
                      {
                        *(unsigned int *)v84 = v134.m_Data; /*0x742b84*/
                        if ( m_Data ) /*0x742b86*/
                          (*(void (**)(int))(*(unsigned int *)m_Data + 4))(m_Data); /*0x742b8b*/
                        if ( v97 ) /*0x742b90*/
                          (*(void (**)(int *))(*v97 + 8))(v97); /*0x742b95*/
                      }
                      v135.q010 = this->location; /*0x742ba4*/
                      v135.q014 = this->locationY; /*0x742bab*/
                      v135.q018 = this->locationZ; /*0x742bb2*/
                      if ( !*(unsigned int *)v84 ) /*0x742bb6*/
                        sub_7DC720(-2147467261); /*0x742bc1*/
                      v99 = *(int **)v84; /*0x742bc6*/
                      v100 = **(unsigned int **)v84; /*0x742bd2*/
                      v101 = ((Coord *)&dword_87F7E8)->To_Cell( &v135.q010); /*0x742bd4*/
                      (*(void (**)(int *, unsigned int))(v100 + 124))(v99, (unsigned __int8)v101->slopeIndex[0]); /*0x742be3*/
                      v95 = *(unsigned int *)v134.m_Position; /*0x742be6*/
                    }
                    if ( v134.m_Data ) /*0x742bf0*/
                    {
                      (*(void (**)(int))(*(unsigned int *)v134.m_Data + 8))(v134.m_Data); /*0x742bf5*/
                      v95 = *(unsigned int *)v134.m_Position; /*0x742bf8*/
                    }
                    if ( v95 ) /*0x742bfe*/
                      (*(void (**)(int))(*(unsigned int *)v95 + 8))(v95); /*0x742c03*/
                  }
                }
                if ( *(unsigned int *)v135.__pad_0 ) /*0x742c0c*/
                  (*(void (**)(unsigned int))(**(unsigned int **)v135.__pad_0 + 8))(*(unsigned int *)v135.__pad_0); /*0x742c11*/
              }
            }
            ComPtr_field_0x0C = v135.q00C; /*0x742c14*/
            if ( !v135.q00C ) /*0x742c1a*/
            {
              v103 = (void *)LODWORD(a2); /*0x742d3f*/
              goto LABEL_318; /*0x742d3f*/
            }
            if ( *(unsigned char *)(*(unsigned int *)(v135.q00C + 1312) + 5801) ) /*0x742c26*/
            {
              if ( (unsigned __int8)Team::AllMembersValid((Team *)v135.q00C) /*0x742c46*/
                && (Class_7F5C70 *)Team::GetMember((Team *)ComPtr_field_0x0C, 0) != this )
              {
                v103 = (void *)LODWORD(a2); /*0x742c48*/
                TechnoClass::SetFocus((TechnoClass *)this, SLODWORD(a2)); /*0x742c52*/
                goto LABEL_309; /*0x742c57*/
              }
              if ( (*(int (**)(Class_7F5C70 *, int, int))(*&this->q9E0))(this, 2, ComPtr_field_0x0C) == 1 ) /*0x742c6a*/
              {
                if ( (*(int (**)(Class_7F5C70 *, int))(*&this->q9D0))(this, 14) == 1 ) /*0x742c7c*/
                {
                  FootClass::AssignDestination((FootClass *)this, SLODWORD(a2), SHIDWORD(a2)); /*0x742c8e*/
LABEL_315:
                  this->pathDirections = -1; /*0x742d10*/
                  return; /*0x742d24*/
                }
                (*(void (**)(Class_7F5C70 *, int))(*&this->q9D0))(this, 3); /*0x742c97*/
                v103 = 0; /*0x742c9d*/
                LODWORD(a2) = 0; /*0x742c9f*/
                goto LABEL_309; /*0x742ca6*/
              }
            }
            v103 = (void *)LODWORD(a2); /*0x742ca8*/
LABEL_309:
            if ( *(unsigned char *)(*(unsigned int *)(ComPtr_field_0x0C + 1312) + 5803) /*0x742cec*/
              && (!(unsigned __int8)Team::AllMembersValid((Team *)ComPtr_field_0x0C)
               || (Class_7F5C70 *)Team::GetMember((Team *)ComPtr_field_0x0C, 0) == this)
              && (*(int (**)(Class_7F5C70 *, int, int))(*&this->q9E0))(this, 2, ComPtr_field_0x0C) == 1 )
            {
              if ( (*(int (**)(Class_7F5C70 *, int))(*&this->q9D0))(this, 14) == 1 ) /*0x742cfe*/
              {
                FootClass::AssignDestination((FootClass *)this, (int)v103, SHIDWORD(a2)); /*0x742d0b*/
                goto LABEL_315; /*0x742d0b*/
              }
              (*(void (**)(Class_7F5C70 *, int))(*&this->q9D0))(this, 3); /*0x742d2e*/
              v103 = 0; /*0x742d34*/
              LODWORD(a2) = 0; /*0x742d36*/
            }
LABEL_318:
            v104 = (int *)Team::GetMember((Team *)this, 0); /*0x742d46*/
            if ( v104 /*0x742d84*/
              && (*(int (**)(int *))(*v104 + 44))(v104) == 6
              && *(unsigned char *)(v104[328] + 5821)
              && this->currentMission != 7 )
            {
              if ( this->isBerserk_duration_left ) /*0x742d8a*/
              {
                (*(void (**)(Class_7F5C70 *, int))(*&this->q9D0))(this, 3); /*0x742e41*/
              }
              else
              {
                v105 = v104 + 39; /*0x742d98*/
                v106 = *v105; /*0x742d9e*/
                v107 = v105[1]; /*0x742da0*/
                v139 = v105[2]; /*0x742da6*/
                LOWORD(v135.q010) = v106 / 256; /*0x742db6*/
                HIWORD(v135.q010) = v107 / 256; /*0x742dc9*/
                LOWORD(v135.q00C) = LOWORD(v135.q010) + 4; /*0x742dda*/
                HIWORD(v135.q00C) = HIWORD(v135.q010) + 1; /*0x742ddf*/
                v135.q010 = v135.q00C; /*0x742df2*/
                if ( v103 != ((CellCoord *)&dword_87F7E8)->To_CellObj((__int16 *)&v135.q010) ) /*0x742dfd*/
                {
                  (*(void (**)(Class_7F5C70 *))(this->FootClass_DVC_5AC + 12))(&this->qD2C); /*0x742e0b*/
                  (*(void (**)(Class_7F5C70 *))(this->FootClass_DVC_588 + 12))(&this->qD2C); /*0x742e1a*/
                  if ( v103 ) /*0x742e1f*/
                    BuildingClass::AddToProductionQueue((int)this, (int)v103); /*0x742e28*/
                  return; /*0x742e37*/
                }
              }
            }
            if ( !ComPtr_field_0x0C ) /*0x742e49*/
              goto LABEL_345; /*0x742e49*/
            v108 = this->Type; /*0x742e4f*/
            if ( *(int *)(v108 + 1016) <= 0 ) /*0x742e5d*/
              goto LABEL_345; /*0x742e5d*/
            v109 = *(unsigned int *)(v108 + 1016); /*0x742e63*/
            v110 = 0; /*0x742e69*/
            if ( v109 <= 0 ) /*0x742e6d*/
              goto LABEL_345; /*0x742e6d*/
            v111 = *(unsigned int **)(v108 + 1004); /*0x742e79*/
            while ( *v111 != *(unsigned int *)(ComPtr_field_0x0C + 1312) ) /*0x742e81*/
            {
              ++v110; /*0x742e83*/
              ++v111; /*0x742e84*/
              if ( v110 >= v109 ) /*0x742e89*/
                goto LABEL_345; /*0x742e89*/
            }
            if ( (*(int (**)(Class_7F5C70 *))(*&this->suspendedMission))(this) != 1 ) /*0x742e9b*/
              goto LABEL_345; /*0x742e9b*/
            v112 = this->Type; /*0x742ea1*/
            if ( !*(unsigned char *)(v112 + 3598) && !*(unsigned char *)(v112 + 3599) ) /*0x742eb1*/
              goto LABEL_345; /*0x742eb1*/
            if ( (*(int (**)(Class_7F5C70 *))(*&this->q_610))(this) == 16 ) /*0x742ecd*/
              goto LABEL_345; /*0x742ecd*/
            if ( Team::GetMember((Team *)this, 0) == ComPtr_field_0x0C /*0x742f28*/
              || (unsigned __int8)Team::AllMembersValid((Team *)ComPtr_field_0x0C)
              || (*(int (**)(Class_7F5C70 *, int, int))(*&this->q9E0))(this, 2, ComPtr_field_0x0C) != 1
              || (*(int (**)(Class_7F5C70 *))(*&this->q_610))(this) == 7
              || (*(int (**)(Class_7F5C70 *))(*&this->q_610))(this) == 10 )
            {
              if ( !LODWORD(a2) /*0x743018*/
                || (*(int (**)(unsigned int))(*(unsigned int *)LODWORD(a2) + 44))(LODWORD(a2)) != 6
                || Team::GetMember((Team *)this, 0) == LODWORD(a2) )
              {
                goto LABEL_345; /*0x743018*/
              }
              v116 = (int *)(ComPtr_field_0x0C + 156); /*0x74301e*/
              v117 = ComPtr_field_0x0C + 156; /*0x743026*/
              v135.q008 = 0; /*0x743028*/
              v118 = *(unsigned int *)(ComPtr_field_0x0C + 156); /*0x743034*/
              v119 = *(unsigned int *)(ComPtr_field_0x0C + 160); /*0x74303d*/
              v139 = *(unsigned int *)(v117 + 8); /*0x743045*/
              LOWORD(v135.q00C) = v118 / 256; /*0x743055*/
              v120 = v119; /*0x74305a*/
              v121 = v116[1]; /*0x743063*/
              HIWORD(v135.q00C) = v120 / 256; /*0x74306b*/
              v135.q010 = v135.q00C; /*0x743074*/
              v122 = *v116; /*0x743084*/
              v139 = v116[2]; /*0x743086*/
              LOWORD(v135.q00C) = v122 / 256; /*0x74308d*/
              HIWORD(v135.q00C) = v121 / 256; /*0x7430a7*/
              v123 = this->Type; /*0x7430b0*/
              v135.ComPtr_field_0x04 = v135.q00C; /*0x7430bb*/
              v127 = *(unsigned int *)(v123 + 1460); /*0x7430c9*/
              v124 = MapClass::GetTileIndex((MapClass *)&dword_87F7E8, (__int16 *)&v135.q010, v127, 0); /*0x7430d7*/
              v135.q00C = *LayerClass::Pathfinding_Find( /*0x7430fc*/
                                          (Type *)&dword_87F7E8,
                                          v125,
                                          &v135,
                                          (__int16 *)&v135.ComPtr_field_0x04,
                                          2,
                                          v124,
                                          v127,
                                          0,
                                          1,
                                          1,
                                          0,
                                          1,
                                          0,
                                          0,
                                          (__int16 *)&v135.q008,
                                          0,
                                          0);
              if ( v135.q00C != g_UnitSelectionState ) /*0x743100*/
              {
                LODWORD(a2) = ((CellCoord *)&dword_87F7E8)->To_CellObj((__int16 *)&v135.q00C); /*0x743123*/
                goto LABEL_345; /*0x74312a*/
              }
            }
            else
            {
              (*(void (**)(Class_7F5C70 *, int, unsigned int))(*&this->q7A0))(this, 7, 0); /*0x742f37*/
            }
            LODWORD(a2) = 0; /*0x742f3d*/
LABEL_345:
            if ( !this->Locomotor ) /*0x742f48*/
              sub_7DC720(-2147467261); /*0x742f57*/
            if ( !(*(unsigned __int8 (**)(unsigned int))(*this->Locomotor + 96))(this->Locomotor) /*0x742f76*/
              && !HouseClass::IonSensitivesShouldBeOffline() )
            {
              v113 = (*(int (**)(Class_7F5C70 *))(*&this->q6F0))(this); /*0x742f88*/
              if ( (*(unsigned int *)(v113 + 320) & 0x100) == 0 ) /*0x742f97*/
              {
                v114 = *(unsigned int *)(v113 + 228); /*0x742f9d*/
                if ( v114 ) /*0x742fa5*/
                {
                  while ( 1 ) /*0x742fad*/
                  {
                    if ( (Class_7F5C70 *)v114 != this && (*(int (**)(int))(*(unsigned int *)v114 + 44))(v114) == 6 ) /*0x742fb9*/
                    {
                      v115 = *(unsigned int *)(v114 + 1312); /*0x742fbb*/
                      if ( *(unsigned char *)(v115 + 5801) || *(unsigned char *)(v115 + 5803) ) /*0x742fcf*/
                        break; /*0x742fcf*/
                    }
                    v114 = *(unsigned int *)(v114 + 48); /*0x742fdd*/
                    if ( !v114 ) /*0x742fe2*/
                      goto LABEL_365; /*0x742fe2*/
                  }
                  if ( !this->Locomotor ) /*0x74312f*/
                    sub_7DC720(-2147467261); /*0x74313e*/
                  (*(void (**)(unsigned int))(*this->Locomotor + 88))(this->Locomotor); /*0x74314c*/
                }
              }
            }
LABEL_365:
            FootClass::AssignDestination((FootClass *)this, SLODWORD(a2), SHIDWORD(a2)); /*0x74314f*/
            return; /*0x743170*/
          }
LABEL_182:
          if ( memcmp(v138, &stru_7E9A30, 0x10u) ) /*0x7425f6*/
          {
            v55 = *(unsigned int *)v47; /*0x7425fe*/
            *(unsigned int *)v134.m_Position = 0; /*0x742600*/
            if ( v55 ) /*0x742606*/
            {
              v56 = StreamClass::Set(&v134, &this->Locomotor); /*0x74260d*/
              if ( v56 < 0 && v56 != -2147467262 ) /*0x74261b*/
                sub_7DC720(v56); /*0x74261e*/
              if ( *(unsigned int *)v134.m_Position /*0x74262e*/
                && (*(unsigned __int8 (**)(unsigned int))(**(unsigned int **)v134.m_Position + 28))(*(unsigned int *)v134.m_Position) )
              {
                if ( !*(unsigned int *)v134.m_Position ) /*0x74263b*/
                  sub_7DC720(-2147467261); /*0x742642*/
                if ( (*(unsigned __int8 (**)(unsigned int))(**(unsigned int **)v134.m_Position + 20))(*(unsigned int *)v134.m_Position) ) /*0x74264e*/
                {
                  if ( *(unsigned int *)v47 ) /*0x742655*/
                    (*(void (**)(unsigned int))(**(unsigned int **)v47 + 8))(*(unsigned int *)v47); /*0x74265e*/
                  v57 = *(unsigned int *)v134.m_Position; /*0x742661*/
                  *(unsigned int *)v47 = 0; /*0x742665*/
                  if ( !v57 ) /*0x74266d*/
                    sub_7DC720(-2147467261); /*0x742674*/
                  (*(void (**)(int, Class_7F5C70 *))(*(unsigned int *)v57 + 16))(v57, &this->qD2C); /*0x742681*/
                }
              }
            }
            v134.StreamClass_field_0C = 0; /*0x742691*/
            v58 = CreateInstanceCOM((ObjectClass *)&v134.StreamClass_field_0C, (IID *)&stru_7E9A30, 0, 7u); /*0x742699*/
            if ( v58 < 0 && v58 != -2147467262 ) /*0x7426a7*/
              sub_7DC720(v58); /*0x7426aa*/
            if ( !v134.StreamClass_field_0C ) /*0x7426b5*/
              sub_7DC720(-2147467261); /*0x7426bc*/
            (*(void (**)(int, Class_7F5C70 *))(*(unsigned int *)v134.StreamClass_field_0C + 12))( /*0x7426c9*/
              v134.StreamClass_field_0C,
              this);
            v59 = 0; /*0x7426d0*/
            v134.m_Data = 0; /*0x7426d4*/
            if ( v134.StreamClass_field_0C ) /*0x7426d8*/
            {
              v60 = (int (***)(unsigned int, void *, int *))Stream::GetChecked((Stream *)&v134.StreamClass_field_0C); /*0x7426de*/
              v61 = (**v60)(v60, &unk_819088, &v135.q010); /*0x7426f2*/
              if ( v61 >= 0 ) /*0x7426f6*/
              {
                v62 = v135.q010; /*0x742705*/
                Release2COM((ObjectClass *)&v134.m_Data); /*0x74270d*/
                v59 = v62; /*0x742712*/
              }
              else
              {
                Release2COM((ObjectClass *)&v134.m_Data); /*0x7426fc*/
                v59 = 0; /*0x742701*/
              }
              v134.m_Data = v59; /*0x742716*/
              if ( v61 < 0 && v61 != -2147467262 ) /*0x742722*/
                sub_7DC720(v61); /*0x742725*/
            }
            v63 = *(unsigned int *)v134.m_Position; /*0x74272e*/
            if ( *(unsigned int *)v134.m_Position != v59 ) /*0x742734*/
            {
              v64 = *(unsigned int *)v134.m_Position; /*0x742736*/
              *(unsigned int *)v134.m_Position = v59; /*0x74273c*/
              CellClass::SetField2C((CellClass *)&v134); /*0x742740*/
              if ( v64 ) /*0x742747*/
                (*(void (**)(int))(*(unsigned int *)v64 + 8))(v64); /*0x74274c*/
              v63 = *(unsigned int *)v134.m_Position; /*0x74274f*/
              v59 = v134.m_Data; /*0x742753*/
            }
            if ( v59 ) /*0x742759*/
            {
              (*(void (**)(int))(*(unsigned int *)v59 + 8))(v59); /*0x74275e*/
              v63 = *(unsigned int *)v134.m_Position; /*0x742761*/
            }
            if ( v63 ) /*0x742767*/
            {
              (*(void (**)(int, unsigned int))(*(unsigned int *)v63 + 12))(v63, *(unsigned int *)v47); /*0x74276f*/
              v65 = *(unsigned int *)v47; /*0x742772*/
              v66 = v134.StreamClass_field_0C; /*0x742774*/
              if ( *(unsigned int *)v47 != v134.StreamClass_field_0C ) /*0x74277a*/
              {
                *(unsigned int *)v47 = v134.StreamClass_field_0C; /*0x74277e*/
                if ( v66 ) /*0x742780*/
                  (*(void (**)(int))(*(unsigned int *)v66 + 4))(v66); /*0x742785*/
                if ( v65 ) /*0x74278a*/
                  (*(void (**)(int))(*(unsigned int *)v65 + 8))(v65); /*0x74278f*/
              }
              v63 = *(unsigned int *)v134.m_Position; /*0x742792*/
            }
            if ( v134.StreamClass_field_0C ) /*0x74279c*/
            {
              (*(void (**)(int))(*(unsigned int *)v134.StreamClass_field_0C + 8))(v134.StreamClass_field_0C); /*0x7427a1*/
              v63 = *(unsigned int *)v134.m_Position; /*0x7427a4*/
            }
            if ( v63 ) /*0x7427aa*/
              (*(void (**)(int))(*(unsigned int *)v63 + 8))(v63); /*0x7427af*/
          }
          goto LABEL_226; /*0x7427af*/
        }
        v52 = *(unsigned int *)v47; /*0x742500*/
        *(unsigned int *)v134.m_Position = 0; /*0x742502*/
        if ( v52 ) /*0x742508*/
        {
          v53 = StreamClass::Set(&v134, &this->Locomotor); /*0x742513*/
          if ( v53 < 0 && v53 != -2147467262 ) /*0x742521*/
            sub_7DC720(v53); /*0x742524*/
          if ( *(unsigned int *)v134.m_Position /*0x742534*/
            && (*(unsigned __int8 (**)(unsigned int))(**(unsigned int **)v134.m_Position + 28))(*(unsigned int *)v134.m_Position) )
          {
            if ( !*(unsigned int *)v134.m_Position ) /*0x742541*/
              sub_7DC720(-2147467261); /*0x742548*/
            if ( (*(unsigned __int8 (**)(unsigned int))(**(unsigned int **)v134.m_Position + 20))(*(unsigned int *)v134.m_Position) ) /*0x742554*/
            {
              if ( *(unsigned int *)v47 ) /*0x74255b*/
                (*(void (**)(unsigned int))(**(unsigned int **)v47 + 8))(*(unsigned int *)v47); /*0x742564*/
              v54 = *(unsigned int *)v134.m_Position; /*0x742567*/
              *(unsigned int *)v47 = 0; /*0x74256b*/
              if ( !v54 ) /*0x742573*/
                sub_7DC720(-2147467261); /*0x74257a*/
              (*(void (**)(int, Class_7F5C70 *))(*(unsigned int *)v54 + 16))(v54, &this->qD2C); /*0x742587*/
              goto LABEL_179; /*0x74258a*/
            }
          }
          if ( *(unsigned int *)v47 ) /*0x74258c*/
          {
            (*(void (**)(unsigned int))(**(unsigned int **)v47 + 72))(*(unsigned int *)v47); /*0x7425a0*/
            (*(void (**)(Class_7F5C70 *, int))(*&this->q7C0))(this, -1); /*0x7425aa*/
            (*(void (**)(Class_7F5C70 *, int, unsigned int))(*&this->q7A0))(this, 7, 0); /*0x7425b9*/
            this->FootClass_field_bool_6AC = 1; /*0x7425bf*/
            this->isTargetedByChrono = 1; /*0x7425c6*/
LABEL_179:
            if ( *(unsigned int *)v134.m_Position ) /*0x7425d3*/
              (*(void (**)(unsigned int))(**(unsigned int **)v134.m_Position + 8))(*(unsigned int *)v134.m_Position); /*0x7425d8*/
            goto LABEL_181; /*0x7425d8*/
          }
        }
        sub_7DC720(-2147467261); /*0x742596*/
      }
LABEL_128:
      if ( !BYTE4(a2) ) /*0x7422e2*/
        goto LABEL_143; /*0x7422e2*/
      (*(void (**)(Class_7F5C70 *))(this->FootClass_DVC_588 + 12))(&this->qD2C); /*0x7422f4*/
      goto LABEL_130; /*0x7422f4*/
    }
LABEL_49:
    v15 = 0; /*0x741c9d*/
    goto LABEL_36; /*0x741c9f*/
  }

}

/* ASM:
ppv             = dword ptr -68h
var_64          = dword ptr -64h
var_60          = dword ptr -60h
var_5C          = dword ptr -5Ch
var_58          = dword ptr -58h
var_54          = qword ptr -54h
var_4C          = dword ptr -4Ch
var_48          = dword ptr -48h
var_44          = byte ptr -44h
var_40          = dword ptr -40h
var_3C          = dword ptr -3Ch
var_38          = dword ptr -38h
var_34          = dword ptr -34h
var_30          = word ptr -30h
var_28          = dword ptr -28h
var_20          = byte ptr -20h
var_10          = byte ptr -10h
arg_0           = qword ptr  4

sub     esp, 80h
push    ebx
push    ebp
mov     ebp, ecx
mov     ebx, dword ptr [esp+88h+arg_0]
push    esi
push    edi
mov     eax, [ebp+6C4h]
mov     cl, [eax+0D6Ah]
test    cl, cl
jz      loc_741A80
test    ebx, ebx
jnz     loc_741A80
mov     ecx, [ebp+5A4h]
test    ecx, ecx
jz      loc_741A80
mov     eax, [ebp+2B4h]
test    eax, eax
jz      loc_741A80
cmp     ecx, eax
jz      loc_741A52
test    ecx, ecx
jz      short loc_741A01
mov     edx, [ecx]
call    dword ptr [edx+2Ch]
cmp     eax, 0Bh
jnz     short loc_741A01
mov     esi, [ebp+5A4h]
test    esi, esi
jnz     short loc_7419DF
xor     eax, eax
jmp     short loc_7419F1
; ---------------------------------------------------------------------------

loc_7419DF:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+69↑j
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+2Ch]
sub     eax, 0Bh
neg     eax
sbb     eax, eax
not     eax
and     eax, esi

loc_7419F1:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+6D↑j
mov     ecx, [eax+0E4h]
mov     eax, [ebp+2B4h]
cmp     ecx, eax
jz      short loc_741A52

loc_741A01:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+55↑j
; UnitClass__AssignDestination_SyncLog+5F↑j
lea     edx, [esp+90h+var_54]
lea     ecx, [ebp+388h]
push    edx
mov     word ptr [esp+94h+var_5C], 4000h
call    ProgressTimer__GetValue
mov     esi, eax
mov     eax, [ebp+2B4h]
lea     ecx, [esp+90h+var_60]
push    eax
push    ecx
mov     ecx, ebp
call    ObjectClass__CalcTargetFacing
mov     dx, [eax]
lea     ecx, [esp+90h+var_58]
sub     dx, [esi]
push    ecx
lea     ecx, [esp+94h+var_5C]
mov     word ptr [esp+94h+var_58], dx
mov     eax, [esp+94h+var_58]
mov     [esp+94h+var_58], eax
call    UnitClass__CompareCoordinateMagnitude
test    al, al
jz      short loc_741A80

loc_741A52:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+4D↑j
; UnitClass__AssignDestination_SyncLog+8F↑j
mov     edx, [ebp+0]
mov     ecx, ebp
call    dword ptr [edx+184h]
cmp     eax, 1
jz      loc_74317A
mov     eax, [ebp+0]
push    1
mov     ecx, ebp
call    dword ptr [eax+1F0h]
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 80h
retn    8
; ---------------------------------------------------------------------------

loc_741A80:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+21↑j
; UnitClass__AssignDestination_SyncLog+29↑j ...
cmp     ebx, [ebp+5A4h]
jnz     short loc_741A96
mov     al, [ebp+1F8h]
test    al, al
jz      loc_74317A

loc_741A96:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+116↑j
mov     al, [ebp+6E0h]
mov     byte ptr [ebp+1F8h], 0
test    al, al
jnz     short loc_741AC3
mov     cl, [ebp+6E1h]
test    cl, cl
jnz     short loc_741ABB
mov     cl, [ebp+6E2h]
test    cl, cl
jz      short loc_741AD1

loc_741ABB:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+13F↑j
test    al, al
jz      loc_743173

loc_741AC3:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+135↑j
mov     eax, [ebp+2B0h]
test    eax, eax
jz      loc_743173

loc_741AD1:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+149↑j
mov     ecx, ebp
call    Team__AllMembersValid
test    al, al
jz      short loc_741B28
mov     ecx, [ebp+6C4h]
mov     eax, [ecx+5E0h]
test    eax, eax
jle     short loc_741B28
push    0
mov     ecx, ebp
call    Team__GetMember
mov     edx, [eax]
mov     ecx, eax
call    dword ptr [edx+2Ch]
cmp     eax, 0Fh
jnz     short loc_741B28
test    ebx, ebx
jz      loc_741C9D
test    byte ptr [ebx+14h], 1
jz      short loc_741B28
push    ebx
mov     ecx, ebp
call    Array__Contains
test    al, al
jnz     short loc_741B28
mov     eax, [ebp+0]
push    3
mov     ecx, ebp
call    dword ptr [eax+274h]

loc_741B28:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+16A↑j
; UnitClass__AssignDestination_SyncLog+17A↑j ...
test    ebx, ebx
jz      loc_741C9D
mov     ecx, ebp
call    Team__AllMembersValid
test    al, al
jz      short loc_741BAA
mov     edx, [ebp+0]
mov     ecx, ebp
call    dword ptr [edx+184h]
test    eax, eax
jnz     short loc_741BAA
mov     al, [ebp+418h]
test    al, al
jz      short loc_741BAA
push    0
mov     ecx, ebp
call    Team__GetMember
mov     edx, [eax]
mov     ecx, eax
call    dword ptr [edx+2Ch]
cmp     eax, 2
jnz     short loc_741BAA
push    0
mov     ecx, ebp
call    Team__GetMember
mov     ecx, [eax+6C4h]
mov     dl, [ecx+0DFCh]
test    dl, dl
jz      short loc_741BAA
mov     edx, [eax]
push    1
push    0
mov     ecx, eax
call    dword ptr [edx+480h]
mov     eax, [ebp+0]
push    19h
mov     ecx, ebp
call    dword ptr [eax+274h]
mov     edx, [ebp+0]
push    3
mov     ecx, ebp
call    dword ptr [edx+274h]

loc_741BAA:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+1C9↑j
; UnitClass__AssignDestination_SyncLog+1D8↑j ...
mov     eax, [ebx]
mov     ecx, ebx
call    dword ptr [eax+2Ch]
mov     esi, eax
sub     esi, 6
neg     esi
sbb     esi, esi
not     esi
and     esi, ebx

loc_741BBE:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+32F↓j
mov     edx, [ebp+0]
mov     ecx, ebp
mov     [esp+90h+var_58], esi
call    dword ptr [edx+184h]
cmp     eax, 10h
jz      short loc_741BDB
cmp     dword ptr [ebp+0B4h], 10h
jnz     short loc_741C4F

loc_741BDB:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+260↑j
mov     eax, [ebp+0]
lea     ecx, [esp+90h+var_54]
push    ecx
mov     ecx, ebp
call    dword ptr [eax+1B8h]
mov     dx, [eax]
mov     ax, [eax+2]
add     dx, ds:89F6A0h
add     ax, ds:89F6A2h
mov     word ptr [esp+90h+var_60], dx
mov     word ptr [esp+90h+var_60+2], ax
mov     ecx, [esp+90h+var_60]
lea     edx, [esp+90h+var_5C]
mov     [esp+90h+var_5C], ecx
push    edx
mov     ecx, 87F7E8h
call    CellCoord__To_CellObj
mov     ecx, eax
call    Cell__IsBridge
test    eax, eax
jz      short loc_741C4F
mov     ecx, [ebp+6C4h]
mov     dl, [ecx+0E0Eh]
test    dl, dl
jz      short loc_741C4F
mov     ecx, [eax+584h]
test    ecx, ecx
jz      short loc_741C4F
push    0Ah
mov     ecx, eax
call    BuildingClass__ClearAnims

loc_741C4F:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+269↑j
; UnitClass__AssignDestination_SyncLog+2BA↑j ...
mov     edx, [ebp+0]
mov     ecx, ebp
call    dword ptr [edx+184h]
or      edi, 0FFFFFFFFh
cmp     eax, 7
jz      short loc_741C6F
cmp     dword ptr [ebp+0B4h], 7
jnz     loc_741E88

loc_741C6F:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+2F0↑j
mov     ecx, ebp
call    Team__AllMembersValid
test    al, al
jnz     loc_741E88
mov     ecx, ebx
call    AbstractClass__IsTechnoType
test    eax, eax
jz      short loc_741CD1
mov     edx, [eax]
mov     ecx, eax
call    dword ptr [edx+2Ch]
cmp     eax, 1
jnz     short loc_741CD1
test    ebx, ebx
jnz     short loc_741CA4
xor     eax, eax
jmp     short loc_741CB4
; ---------------------------------------------------------------------------

loc_741C9D:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+193↑j
; UnitClass__AssignDestination_SyncLog+1BA↑j
xor     esi, esi
jmp     loc_741BBE
; ---------------------------------------------------------------------------

loc_741CA4:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+327↑j
mov     eax, [ebx]
mov     ecx, ebx
call    dword ptr [eax+2Ch]
dec     eax
neg     eax
sbb     eax, eax
not     eax
and     eax, ebx

loc_741CB4:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+32B↑j
push    0
mov     ecx, ebp
mov     [ebp+500h], eax
call    TechnoClass__SetFocus
xor     ebx, ebx
mov     dword ptr [esp+90h+arg_0], ebx
jmp     loc_741E8E
; ---------------------------------------------------------------------------

loc_741CD1:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+317↑j
; UnitClass__AssignDestination_SyncLog+323↑j
test    esi, esi
jz      loc_741E35
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+2Ch]
cmp     eax, 6
jnz     short loc_741D12
mov     eax, [esi+520h]
mov     cl, [eax+16AEh]
test    cl, cl
jz      short loc_741D12
push    0
mov     ecx, ebp
mov     [ebp+500h], esi
call    TechnoClass__SetFocus
xor     ebx, ebx
mov     dword ptr [esp+90h+arg_0], ebx
jmp     loc_741E8E
; ---------------------------------------------------------------------------

loc_741D12:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+373↑j
; UnitClass__AssignDestination_SyncLog+383↑j
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+2Ch]
cmp     eax, 6
jnz     loc_741E35
mov     ecx, esi
call    Team__AllMembersValid
test    al, al
jz      loc_741DCC
mov     eax, [esi+520h]
mov     cl, [eax+16ABh]
test    cl, cl
jnz     short loc_741D49
push    ebx
mov     ecx, ebp
call    TechnoClass__SetFocus

loc_741D49:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+3CF↑j
mov     ecx, [esi+520h]
mov     al, [ecx+16ABh]
test    al, al
jz      short loc_741D6F
mov     edx, [ebp+0]
push    3
mov     ecx, ebp
call    dword ptr [edx+274h]
xor     ebx, ebx
mov     dword ptr [esp+90h+arg_0], ebx

loc_741D6F:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+3E7↑j
mov     eax, [esi+520h]
mov     cl, [eax+16A9h]
test    cl, cl
jz      loc_741E8E
mov     ecx, ebp
call    BuildingClass__GetHealthRatio
mov     ecx, ds:8871E0h
fcomp   qword ptr [ecx+16F8h]
fnstsw  ax
test    ah, 1
jz      short loc_741DB1
xor     ebx, ebx
mov     [ebp+500h], esi
mov     dword ptr [esp+90h+arg_0], ebx
jmp     loc_741E8E
; ---------------------------------------------------------------------------

loc_741DB1:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+42B↑j
mov     edx, [ebp+0]
push    3
mov     ecx, ebp
call    dword ptr [edx+274h]
xor     ebx, ebx
mov     dword ptr [esp+90h+arg_0], ebx
jmp     loc_741E8E
; ---------------------------------------------------------------------------

loc_741DCC:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+3BB↑j
mov     eax, [ebp+0]
mov     edi, [ebp+5A4h]
push    esi
push    0Eh
mov     ecx, ebp
call    dword ptr [eax+278h]
cmp     eax, 1
jz      short loc_741E10
mov     edx, [ebp+0]
push    3
mov     ecx, ebp
call    dword ptr [edx+274h]
mov     eax, [esi+520h]
mov     cl, [eax+16A9h]
test    cl, cl
jz      loc_741E8E
push    ebx
mov     ecx, ebp
call    TechnoClass__SetFocus
jmp     short loc_741E8E
; ---------------------------------------------------------------------------

loc_741E10:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+473↑j
mov     ecx, [esi+520h]
mov     al, [ecx+16B3h]
test    al, al
jz      short loc_741E8E
mov     eax, [ebp+5A4h]
cmp     eax, edi
jz      short loc_741E8E
mov     ebx, eax
mov     dword ptr [esp+90h+arg_0], ebx
jmp     short loc_741E8E
; ---------------------------------------------------------------------------

loc_741E35:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+363↑j
; UnitClass__AssignDestination_SyncLog+3AC↑j
test    ebx, ebx
jz      short loc_741E8E
test    byte ptr [ebx+14h], 1
jz      short loc_741E8E
mov     ecx, ebx
call    Team__AllMembersValid
test    al, al
jz      short loc_741E54
push    ebx
mov     ecx, ebp
call    TechnoClass__SetFocus
jmp     short loc_741E8E
; ---------------------------------------------------------------------------

loc_741E54:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+4D8↑j
mov     edx, [ebp+0]
push    ebx
push    2
mov     ecx, ebp
call    dword ptr [edx+278h]
cmp     eax, 1
jnz     short loc_741E8E
mov     eax, [ebp+0]
push    0Eh
mov     ecx, ebp
call    dword ptr [eax+274h]
cmp     eax, 1
jz      short loc_741E8E
mov     edx, [ebp+0]
push    3
mov     ecx, ebp
call    dword ptr [edx+274h]
jmp     short loc_741E8E
; ---------------------------------------------------------------------------

loc_741E88:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+2F9↑j
; UnitClass__AssignDestination_SyncLog+308↑j
mov     [ebp+5E0h], edi

loc_741E8E:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+35C↑j
; UnitClass__AssignDestination_SyncLog+39D↑j ...
test    ebx, ebx
mov     byte ptr [esp+90h+var_7C+1], 0
jz      loc_74208A
mov     eax, [ebp+6C4h]
mov     cl, [eax+0D2Ch]
test    cl, cl
jz      loc_74208A
mov     eax, [ebp+674h]
lea     esi, [ebp+674h]
test    eax, eax
jnz     short loc_741EC9
push    80004003h
call    sub_7DC720
; ---------------------------------------------------------------------------

loc_741EC9:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+54D↑j
mov     eax, [esi]
push    eax
mov     ecx, [eax]
call    dword ptr [ecx+10h]
test    al, al
jz      loc_74208A
mov     eax, [esi]
mov     [esp+90h+var_60], 0
test    eax, eax
jz      short loc_741F0A
push    esi
lea     ecx, [esp+94h+var_60]
call    StreamClass__Set2
test    eax, eax
jge     short loc_741F02
cmp     eax, 80004002h
jz      short loc_741F02
push    eax
call    sub_7DC720
; ---------------------------------------------------------------------------

loc_741F02:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+583↑j
; UnitClass__AssignDestination_SyncLog+58A↑j
mov     eax, [esp+90h+var_60]
test    eax, eax
jnz     short loc_741F18

loc_741F0A:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+575↑j
push    80004003h
call    sub_7DC720
; ---------------------------------------------------------------------------
mov     eax, [esp+90h+var_60]

loc_741F18:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+598↑j
mov     edx, [eax]
lea     ecx, [esp+90h+var_20]
push    ecx
push    eax
call    dword ptr [edx+0Ch]
mov     ecx, 4
mov     edi, offset stru_7E9A30
lea     esi, [esp+90h+var_20]
xor     edx, edx
repe cmpsd
jnz     loc_74207C
mov     ecx, [ebp+5B4h]
mov     eax, [ebp+5BCh]
lea     esi, [ebp+5ACh]
cmp     eax, ecx
jl      short loc_741F73
mov     al, [esi+0Dh]
test    al, al
jnz     short loc_741F5C
test    ecx, ecx
jnz     short loc_741F9A

loc_741F5C:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+5E6↑j
mov     eax, [esi+14h]
test    eax, eax
jle     short loc_741F9A
mov     edx, [esi]
add     ecx, eax
push    0
push    ecx
mov     ecx, esi
call    dword ptr [edx+8]
test    al, al
jz      short loc_741F9A

loc_741F73:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+5DF↑j
mov     ecx, [esi+10h]
test    ecx, ecx
jz      short loc_741F8E
mov     eax, [esi+4]
shl     ecx, 2
push    ecx             ; Size
push    eax             ; Src
add     eax, 4
push    eax             ; void *
call    _memcpy
add     esp, 0Ch

loc_741F8E:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+608↑j
mov     edx, [esi+4]
mov     [edx], ebx
mov     eax, [esi+10h]
inc     eax
mov     [esi+10h], eax

loc_741F9A:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+5EA↑j
; UnitClass__AssignDestination_SyncLog+5F1↑j ...
mov     eax, [ebp+588h]
lea     ecx, [ebp+588h]
call    dword ptr [eax+0Ch]
mov     edx, [ebp+0]
mov     ecx, ebp
call    dword ptr [edx+1C4h]
mov     ebx, eax
mov     byte ptr [esp+90h+arg_0+4], 0
test    ebx, ebx
mov     dword ptr [esp+90h+arg_0], ebx
jz      loc_74207C
mov     eax, [ebx+140h]
test    ah, 1
jz      loc_74207C
mov     eax, [ebp+0]
push    0
mov     ecx, ebp
call    dword ptr [eax+0BCh]
test    al, al
jnz     loc_74207C
xor     edi, edi
mov     eax, [ebp+6C4h]
push    edi
mov     word ptr [esp+94h+var_64], di
mov     word ptr [esp+94h+var_64+2], di
push    edi
mov     eax, [eax+5B4h]
lea     edi, [esp+98h+var_64]
push    edi
mov     ecx, 1
push    0
push    0
mov     edx, ecx
push    ecx
push    0
push    edx
push    ecx
push    0
push    eax
lea     esi, [ebx+24h]
push    0
push    eax
push    esi
mov     ecx, 87F7E8h
call    MapClass__GetTileIndex
push    eax
push    1
lea     ecx, [esp+0C4h+var_54]
push    esi
push    ecx
mov     ecx, 87F7E8h
call    LayerClass__Pathfinding_Find
mov     eax, [eax]
cmp     ax, word ptr dword_A8ED54+8E264h
mov     [esp+90h+var_5C], eax
jnz     short loc_742064
mov     dx, word ptr [esp+90h+var_5C+2]
cmp     dx, word ptr dword_A8ED54+8E266h
jz      short loc_74207C

loc_742064:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+6E4↑j
lea     eax, [esp+90h+var_5C]
mov     ecx, 87F7E8h
push    eax
call    CellCoord__To_CellObj
mov     ebx, eax
mov     dword ptr [esp+90h+arg_0], ebx

loc_74207C:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+5C5↑j
; UnitClass__AssignDestination_SyncLog+657↑j ...
mov     eax, [esp+90h+var_60]
test    eax, eax
jz      short loc_74208A
mov     ecx, [eax]
push    eax
call    dword ptr [ecx+8]

loc_74208A:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+525↑j
; UnitClass__AssignDestination_SyncLog+539↑j ...
test    ebx, ebx
mov     [esp+90h+var_7D], 0
jz      loc_7423BE
mov     edx, [ebp+6C4h]
mov     al, [edx+0D2Ch]
test    al, al
jz      loc_7422D9
mov     al, byte ptr [esp+90h+arg_0+4]
test    al, al
jz      loc_7423CD
mov     eax, [ebp+0]
push    0
mov     ecx, ebp
call    dword ptr [eax+0BCh]
mov     edx, [ebp+0]
mov     byte ptr [esp+90h+var_7C], al
lea     eax, [esp+90h+var_3C]
push    0
push    eax
mov     ecx, ebp
call    dword ptr [edx+4Ch]
mov     ecx, eax
mov     eax, [ecx]
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+90h+var_74], ax
mov     eax, [ecx+4]
cdq
and     edx, 0FFh
add     eax, edx
lea     edx, [esp+90h+var_64]
sar     eax, 8
mov     word ptr [esp+90h+var_74+2], ax
mov     ecx, dword ptr [esp+90h+var_74]
mov     [esp+90h+var_64], ecx
push    edx
mov     ecx, 87F7E8h
call    CellCoord__To_CellObj
mov     ecx, eax
call    Cell__IsBuildableAdvanced
mov     edi, dword ptr [esp+90h+arg_0]
lea     ecx, [esp+90h+var_3C]
mov     byte ptr [esp+90h+var_7C+2], al
push    ecx
mov     eax, [edi]
mov     ecx, edi
call    dword ptr [eax+48h]
mov     ecx, eax
mov     eax, [ecx]
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+90h+var_74], ax
mov     eax, [ecx+4]
cdq
and     edx, 0FFh
mov     ecx, 87F7E8h
add     eax, edx
sar     eax, 8
mov     word ptr [esp+90h+var_74+2], ax
mov     edx, dword ptr [esp+90h+var_74]
lea     eax, [esp+90h+ppv]
mov     [esp+90h+ppv], edx
push    eax
call    CellCoord__To_CellObj
mov     ebx, [eax+140h]
mov     ecx, eax
shr     ebx, 8
and     bl, 1
call    Cell__IsBuildableAdvanced
mov     edx, [ebp+0]
mov     ecx, ebp
mov     byte ptr [esp+90h+var_7C+3], al
call    dword ptr [edx+1C8h]
mov     [esp+90h+var_78], eax
mov     al, byte ptr [esp+90h+var_7C]
test    al, al
jz      loc_742298
test    bl, bl
jz      loc_74228C
push    0
lea     eax, [esp+94h+var_64]
push    3
push    eax
mov     ecx, 87F7E8h
call    GetRegionMap
push    0
lea     ecx, [esp+94h+ppv]
push    3
push    ecx
mov     ecx, 87F7E8h
mov     esi, eax
call    GetRegionMap
cmp     esi, eax
jnz     loc_74228C
cmp     esi, 0FFFFFFFFh
jz      loc_74228C
mov     edx, ds:87F83Ch
shl     esi, 4
mov     al, [esi+edx+8]
test    al, al
jnz     loc_742287
lea     eax, [esp+90h+var_64]
lea     ecx, [esp+90h+var_64]
push    eax
lea     edx, [esp+94h+var_54]
push    ecx
push    edx
mov     ecx, 87F7E8h
call    Pathfinding__SelectRegionPath
mov     esi, [eax]
lea     eax, [esp+90h+ppv]
lea     ecx, [esp+90h+ppv]
push    eax
lea     edx, [esp+94h+var_54]
push    ecx
push    edx
mov     ecx, 87F7E8h
mov     dword ptr [esp+9Ch+var_74], esi
call    Pathfinding__SelectRegionPath
mov     eax, [eax]
sub     esp, 8
mov     dword ptr [esp+98h+var_54], eax
mov     ebx, dword ptr [esp+98h+var_54+2]
sub     esi, eax
mov     eax, dword ptr [esp+98h+var_74+2]
sub     eax, ebx
movsx   ecx, si
movsx   edx, ax
mov     dword ptr [esp+98h+var_74], ecx
fild    dword ptr [esp+98h+var_74]
mov     dword ptr [esp+98h+var_74], edx
fild    dword ptr [esp+98h+var_74]
fld     st
fmul    st, st(1)
fld     st(2)
fmul    st, st(3)
faddp   st(1), st
fstp    [esp+98h+var_98] ; double
fstp    st
fstp    st
call    Math__Sqrt
add     esp, 8
call    Math__RoundToInt
cmp     ax, 2
jg      short loc_74228C

loc_742287:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+88A↑j
mov     [esp+90h+var_7D], 1

loc_74228C:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+83C↑j
; UnitClass__AssignDestination_SyncLog+86C↑j ...
mov     al, [esp+90h+var_7D]
test    al, al
jnz     short loc_7422A0
mov     al, 1
jmp     short loc_7422A4
; ---------------------------------------------------------------------------

loc_742298:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+834↑j
test    bl, bl
jz      short loc_7422A0
mov     al, 1
jmp     short loc_7422A4
; ---------------------------------------------------------------------------

loc_7422A0:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+922↑j
; UnitClass__AssignDestination_SyncLog+92A↑j
mov     al, byte ptr [esp+90h+var_7C+1]

loc_7422A4:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+926↑j
; UnitClass__AssignDestination_SyncLog+92E↑j
mov     cl, byte ptr [esp+90h+var_7C+2]
test    cl, cl
jnz     short loc_7422B4
mov     ecx, [esp+90h+var_78]
test    ecx, ecx
jge     short loc_7422BC

loc_7422B4:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+93A↑j
mov     cl, byte ptr [esp+90h+var_7C+3]
test    cl, cl
jnz     short loc_7422C4

loc_7422BC:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+942↑j
mov     cl, [esp+90h+var_7D]
test    cl, cl
jz      short loc_7422C8

loc_7422C4:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+94A↑j
test    al, al
jz      short loc_7422D9

loc_7422C8:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+952↑j
push    edi
mov     ecx, ebp
call    BuildingClass__FindPlacementCells
mov     dword ptr [esp+90h+arg_0], eax
jmp     short loc_7422F7
; ---------------------------------------------------------------------------

loc_7422D9:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+735↑j
; UnitClass__AssignDestination_SyncLog+956↑j
mov     al, byte ptr [esp+90h+arg_0+4]
test    al, al
jz      loc_7423CD
mov     eax, [ebp+588h]
lea     ecx, [ebp+588h]
call    dword ptr [eax+0Ch]

loc_7422F7:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+967↑j
mov     eax, [ebp+674h]
test    eax, eax
jnz     short loc_74230B
push    80004003h
call    sub_7DC720
; ---------------------------------------------------------------------------

loc_74230B:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+98F↑j
mov     eax, [ebp+674h]
push    eax
mov     ecx, [eax]
call    dword ptr [ecx+98h]
test    al, al
jz      loc_7423CD
mov     ecx, [ebp+590h]
mov     eax, [ebp+598h]
lea     esi, [ebp+588h]
cmp     eax, ecx
jl      short loc_74235A
mov     al, [esi+0Dh]
test    al, al
jnz     short loc_742343
test    ecx, ecx
jnz     short loc_742388

loc_742343:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+9CD↑j
mov     eax, [esi+14h]
test    eax, eax
jle     short loc_742388
mov     edx, [esi]
add     ecx, eax
push    0
push    ecx
mov     ecx, esi
call    dword ptr [edx+8]
test    al, al
jz      short loc_742388

loc_74235A:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+9C6↑j
mov     ecx, [esi+10h]
test    ecx, ecx
jz      short loc_742375
mov     eax, [esi+4]
shl     ecx, 2
push    ecx             ; Size
push    eax             ; Src
add     eax, 4
push    eax             ; void *
call    _memcpy
add     esp, 0Ch

loc_742375:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+9EF↑j
mov     edx, [esi+4]
mov     eax, dword ptr [esp+90h+arg_0]
mov     [edx], eax
mov     eax, [esi+10h]
inc     eax
mov     [esi+10h], eax

loc_742388:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+9D1↑j
; UnitClass__AssignDestination_SyncLog+9D8↑j ...
lea     ecx, [ebp+9Ch]
mov     edx, [ebp+9Ch]
mov     [esp+90h+var_3C], edx
lea     edx, [esp+90h+var_3C]
mov     eax, [ecx+4]
push    edx
mov     [esp+94h+var_38], eax
mov     ecx, [ecx+8]
mov     [esp+94h+var_34], ecx
mov     ecx, 87F7E8h
call    Coord__To_Cell
mov     dword ptr [esp+90h+arg_0], eax
jmp     short loc_7423CD
; ---------------------------------------------------------------------------

loc_7423BE:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+721↑j
mov     eax, [ebp+588h]
lea     ecx, [ebp+588h]
call    dword ptr [eax+0Ch]

loc_7423CD:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+744↑j
; UnitClass__AssignDestination_SyncLog+972↑j ...
mov     ecx, [ebp+6C4h]
mov     al, [ecx+0CD4h]
test    al, al
jz      loc_7427C0
mov     al, [ebp+27Ch]
test    al, al
jnz     loc_7427C0
mov     eax, [ebp+2B0h]
test    eax, eax
jnz     loc_7427C0
mov     al, [ebp+6ADh]
test    al, al
jnz     loc_7427C0
push    0
mov     ecx, ebp
call    Team__GetMember
lea     ebx, [ebp+674h]
mov     edi, eax
mov     [esp+90h+var_64], 0
cmp     dword ptr [ebx], 0
jz      short loc_74244C
push    ebx
lea     ecx, [esp+94h+var_64]
call    StreamClass__Set2
test    eax, eax
jge     short loc_742444
cmp     eax, 80004002h
jz      short loc_742444
push    eax
call    sub_7DC720
; ---------------------------------------------------------------------------

loc_742444:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+AC5↑j
; UnitClass__AssignDestination_SyncLog+ACC↑j
mov     eax, [esp+90h+var_64]
test    eax, eax
jnz     short loc_74245A

loc_74244C:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+AB7↑j
push    80004003h
call    sub_7DC720
; ---------------------------------------------------------------------------
mov     eax, [esp+90h+var_64]

loc_74245A:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+ADA↑j
mov     edx, [eax]
lea     ecx, [esp+90h+var_30]
push    ecx
push    eax
call    dword ptr [edx+0Ch]
test    edi, edi
mov     byte ptr [esp+90h+var_7C], 1
jz      loc_7425E6
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+2Ch]
cmp     eax, 6
jnz     loc_7425DB
mov     eax, [edi]
mov     ecx, edi
call    dword ptr [eax+2Ch]
mov     esi, eax
sub     esi, 6
neg     esi
sbb     esi, esi
not     esi
and     esi, edi
mov     edi, dword ptr [esp+90h+arg_0]
test    edi, edi
jnz     short loc_7424A5
xor     eax, eax
jmp     short loc_7424B7
; ---------------------------------------------------------------------------

loc_7424A5:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+B2F↑j
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+2Ch]
sub     eax, 0Bh
neg     eax
sbb     eax, eax
not     eax
and     eax, edi

loc_7424B7:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+B33↑j
mov     ecx, [esi+520h]
mov     dl, [ecx+16B3h]
test    dl, dl
jz      loc_7425DB
test    eax, eax
jz      loc_7425DB
push    0
mov     ecx, eax
call    CellClass__FindBuilding
test    eax, eax
jnz     loc_7425DB
mov     ecx, 4
mov     edi, offset g_CLSID_HoverLocomotion
lea     esi, [esp+90h+var_30]
xor     edx, edx
repe cmpsd
mov     byte ptr [esp+90h+var_7C], al
jz      loc_7425DB
mov     eax, [ebx]
mov     [esp+90h+var_78], edx
test    eax, eax
jz      loc_742591
push    ebx
lea     ecx, [esp+94h+var_78]
call    StreamClass__Set
test    eax, eax
jge     short loc_742529
cmp     eax, 80004002h
jz      short loc_742529
push    eax
call    sub_7DC720
; ---------------------------------------------------------------------------

loc_742529:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+BAA↑j
; UnitClass__AssignDestination_SyncLog+BB1↑j
mov     eax, [esp+90h+var_78]
test    eax, eax
jz      short loc_74258C
mov     ecx, [eax]
push    eax
call    dword ptr [ecx+1Ch]
test    al, al
jz      short loc_74258C
mov     eax, [esp+90h+var_78]
test    eax, eax
jnz     short loc_742551
push    80004003h
call    sub_7DC720
; ---------------------------------------------------------------------------
mov     eax, [esp+90h+var_78]

loc_742551:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+BD1↑j
mov     edx, [eax]
push    eax
call    dword ptr [edx+14h]
test    al, al
jz      short loc_74258C
mov     eax, [ebx]
test    eax, eax
jz      short loc_742567
mov     ecx, [eax]
push    eax
call    dword ptr [ecx+8]

loc_742567:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+BEF↑j
mov     eax, [esp+90h+var_78]
mov     dword ptr [ebx], 0
test    eax, eax
jnz     short loc_742583
push    80004003h
call    sub_7DC720
; ---------------------------------------------------------------------------
mov     eax, [esp+90h+var_78]

loc_742583:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+C03↑j
mov     edx, [eax]
push    ebx
push    eax
call    dword ptr [edx+10h]
jmp     short loc_7425CD
; ---------------------------------------------------------------------------

loc_74258C:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+BBF↑j
; UnitClass__AssignDestination_SyncLog+BC9↑j ...
cmp     dword ptr [ebx], 0
jnz     short loc_74259B

loc_742591:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+B98↑j
push    80004003h
call    sub_7DC720
; ---------------------------------------------------------------------------

loc_74259B:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+C1F↑j
mov     eax, [ebx]
push    eax
mov     ecx, [eax]
call    dword ptr [ecx+48h]
mov     edx, [ebp+0]
push    0FFFFFFFFh
mov     ecx, ebp
call    dword ptr [edx+1F0h]
mov     eax, [ebp+0]
push    0
push    7
mov     ecx, ebp
call    dword ptr [eax+1E8h]
mov     byte ptr [ebp+6ACh], 1
mov     byte ptr [ebp+1F8h], 1

loc_7425CD:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+C1A↑j
mov     eax, [esp+90h+var_78]
test    eax, eax
jz      short loc_7425DB
mov     ecx, [eax]
push    eax
call    dword ptr [ecx+8]

loc_7425DB:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+B0C↑j
; UnitClass__AssignDestination_SyncLog+B55↑j ...
cmp     byte ptr [esp+90h+var_7C], 1
jnz     loc_7427B2

loc_7425E6:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+AFC↑j
mov     ecx, 4
mov     edi, offset stru_7E9A30
lea     esi, [esp+90h+var_30]
xor     edx, edx
repe cmpsd
jz      loc_7427B2
mov     eax, [ebx]
mov     [esp+90h+var_78], edx
test    eax, eax
jz      short loc_742684
push    ebx
lea     ecx, [esp+94h+var_78]
call    StreamClass__Set
test    eax, eax
jge     short loc_742623
cmp     eax, 80004002h
jz      short loc_742623
push    eax
call    sub_7DC720
; ---------------------------------------------------------------------------

loc_742623:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+CA4↑j
; UnitClass__AssignDestination_SyncLog+CAB↑j
mov     eax, [esp+90h+var_78]
test    eax, eax
jz      short loc_742684
mov     ecx, [eax]
push    eax
call    dword ptr [ecx+1Ch]
test    al, al
jz      short loc_742684
mov     eax, [esp+90h+var_78]
test    eax, eax
jnz     short loc_74264B
push    80004003h
call    sub_7DC720
; ---------------------------------------------------------------------------
mov     eax, [esp+90h+var_78]

loc_74264B:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+CCB↑j
mov     edx, [eax]
push    eax
call    dword ptr [edx+14h]
test    al, al
jz      short loc_742684
mov     eax, [ebx]
test    eax, eax
jz      short loc_742661
mov     ecx, [eax]
push    eax
call    dword ptr [ecx+8]

loc_742661:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+CE9↑j
mov     eax, [esp+90h+var_78]
mov     dword ptr [ebx], 0
test    eax, eax
jnz     short loc_74267D
push    80004003h
call    sub_7DC720
; ---------------------------------------------------------------------------
mov     eax, [esp+90h+var_78]

loc_74267D:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+CFD↑j
mov     edx, [eax]
push    ebx
push    eax
call    dword ptr [edx+10h]

loc_742684:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+C96↑j
; UnitClass__AssignDestination_SyncLog+CB9↑j ...
push    7               ; dwClsContext
push    0               ; pUnkOuter
push    offset stru_7E9A30 ; rclsid
lea     ecx, [esp+9Ch+ppv] ; ppv
mov     [esp+9Ch+ppv], 0
call    CreateInstanceCOM
test    eax, eax
jge     short loc_7426AF
cmp     eax, 80004002h
jz      short loc_7426AF
push    eax
call    sub_7DC720
; ---------------------------------------------------------------------------

loc_7426AF:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+D30↑j
; UnitClass__AssignDestination_SyncLog+D37↑j
mov     eax, [esp+90h+ppv]
test    eax, eax
jnz     short loc_7426C5
push    80004003h
call    sub_7DC720
; ---------------------------------------------------------------------------
mov     eax, [esp+90h+ppv]

loc_7426C5:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+D45↑j
mov     ecx, [eax]
push    ebp
push    eax
call    dword ptr [ecx+0Ch]
mov     ecx, [esp+90h+ppv]
xor     eax, eax
test    ecx, ecx
mov     dword ptr [esp+90h+var_74], eax
jz      short loc_74272E
lea     ecx, [esp+90h+ppv]
call    Stream__GetChecked
mov     edx, [eax]
lea     ecx, [esp+90h+var_54]
push    ecx
push    offset unk_819088
push    eax
call    dword ptr [edx]
mov     esi, eax
test    esi, esi
jge     short loc_742705
lea     ecx, [esp+90h+var_74]
call    Release2COM
xor     eax, eax
jmp     short loc_742714
; ---------------------------------------------------------------------------

loc_742705:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+D86↑j
mov     edi, dword ptr [esp+90h+var_54]
lea     ecx, [esp+90h+var_74]
call    Release2COM
mov     eax, edi

loc_742714:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+D93↑j
test    esi, esi
mov     dword ptr [esp+90h+var_74], eax
jge     short loc_74272E
cmp     esi, 80004002h
jz      short loc_74272E
push    esi
call    sub_7DC720
; ---------------------------------------------------------------------------
mov     eax, dword ptr [esp+90h+var_74]

loc_74272E:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+D68↑j
; UnitClass__AssignDestination_SyncLog+DAA↑j ...
mov     ecx, [esp+90h+var_78]
cmp     ecx, eax
jz      short loc_742757
mov     esi, ecx
lea     ecx, [esp+90h+var_78]
mov     [esp+90h+var_78], eax
call    CellClass__SetField2C
test    esi, esi
jz      short loc_74274F
mov     edx, [esi]
push    esi
call    dword ptr [edx+8]

loc_74274F:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+DD7↑j
mov     ecx, [esp+90h+var_78]
mov     eax, dword ptr [esp+90h+var_74]

loc_742757:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+DC4↑j
test    eax, eax
jz      short loc_742765
mov     ecx, [eax]
push    eax
call    dword ptr [ecx+8]
mov     ecx, [esp+90h+var_78]

loc_742765:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+DE9↑j
test    ecx, ecx
jz      short loc_742796
mov     eax, [ebx]
mov     edx, [ecx]
push    eax
push    ecx
call    dword ptr [edx+0Ch]
mov     esi, [ebx]
mov     eax, [esp+90h+ppv]
cmp     esi, eax
jz      short loc_742792
test    eax, eax
mov     [ebx], eax
jz      short loc_742788
mov     ecx, [eax]
push    eax
call    dword ptr [ecx+4]

loc_742788:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+E10↑j
test    esi, esi
jz      short loc_742792
mov     edx, [esi]
push    esi
call    dword ptr [edx+8]

loc_742792:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+E0A↑j
; UnitClass__AssignDestination_SyncLog+E1A↑j
mov     ecx, [esp+90h+var_78]

loc_742796:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+DF7↑j
mov     eax, [esp+90h+ppv]
test    eax, eax
jz      short loc_7427A8
mov     ecx, [eax]
push    eax
call    dword ptr [ecx+8]
mov     ecx, [esp+90h+var_78]

loc_7427A8:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+E2C↑j
test    ecx, ecx
jz      short loc_7427B2
mov     edx, [ecx]
push    ecx
call    dword ptr [edx+8]

loc_7427B2:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+C70↑j
; UnitClass__AssignDestination_SyncLog+C88↑j ...
mov     eax, [esp+90h+var_64]
test    eax, eax
jz      short loc_7427C0
mov     ecx, [eax]
push    eax
call    dword ptr [ecx+8]

loc_7427C0:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+A6B↑j
; UnitClass__AssignDestination_SyncLog+A79↑j ...
mov     ebx, dword ptr [esp+90h+arg_0]
test    ebx, ebx
jz      loc_742C14
mov     eax, [ebp+674h]
lea     esi, [ebp+674h]
test    eax, eax
jnz     short loc_7427E9
push    80004003h
call    sub_7DC720
; ---------------------------------------------------------------------------

loc_7427E9:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+E6D↑j
mov     eax, [esi]
push    eax
mov     edx, [eax]
call    dword ptr [edx+10h]
test    al, al
jnz     loc_742C14
mov     eax, [esi]
mov     [esp+90h+var_64], 0
test    eax, eax
jz      short loc_74285D
mov     ecx, esi
call    Stream__GetChecked
mov     ecx, [eax]
lea     edx, [esp+90h+var_54]
push    edx
push    offset unk_818858
push    eax
call    dword ptr [ecx]
mov     esi, eax
test    esi, esi
jge     short loc_742830
lea     ecx, [esp+90h+var_64]
call    ComPtr__Release_Alt
xor     eax, eax
jmp     short loc_74283F
; ---------------------------------------------------------------------------

loc_742830:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+EB1↑j
mov     edi, dword ptr [esp+90h+var_54]
lea     ecx, [esp+90h+var_64]
call    ComPtr__Release_Alt
mov     eax, edi

loc_74283F:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+EBE↑j
test    esi, esi
mov     [esp+90h+var_64], eax
jge     short loc_742859
cmp     esi, 80004002h
jz      short loc_742859
push    esi
call    sub_7DC720
; ---------------------------------------------------------------------------
mov     eax, [esp+90h+var_64]

loc_742859:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+ED5↑j
; UnitClass__AssignDestination_SyncLog+EDD↑j
test    eax, eax
jnz     short loc_74286B

loc_74285D:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+E95↑j
push    80004003h
call    sub_7DC720
; ---------------------------------------------------------------------------
mov     eax, [esp+90h+var_64]

loc_74286B:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+EEB↑j
mov     ecx, [eax]
lea     edx, [esp+90h+var_10]
push    edx
push    eax
call    dword ptr [ecx+0Ch]
mov     ecx, 4
mov     edi, offset stru_7E9A50
lea     esi, [esp+90h+var_10]
xor     eax, eax
repe cmpsd
jnz     loc_742C06
mov     edx, [ebp+0]
mov     ecx, ebp
call    dword ptr [edx+1C8h]
test    eax, eax
jnz     loc_742C06
mov     eax, [ebx]
lea     ecx, [esp+90h+var_54]
push    ecx
mov     ecx, ebx
call    dword ptr [eax+48h]
mov     edx, [eax]
mov     [esp+90h+var_48], edx
mov     ecx, [eax+4]
mov     dword ptr [esp+90h+var_44], ecx
mov     ecx, 87F7E8h
mov     edx, [eax+8]
lea     eax, [esp+90h+var_48]
push    eax
mov     [esp+94h+var_40], edx
call    Cell__GetGroundHeight
cmp     [esp+90h+var_40], eax
jge     short loc_7428E0
mov     [esp+90h+var_40], eax

loc_7428E0:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+F6A↑j
mov     al, [esp+90h+var_7D]
test    al, al
jnz     loc_7429D4
mov     edx, [ebp+0]
push    0
mov     ecx, ebp
call    dword ptr [edx+0BCh]
test    al, al
jnz     loc_7429D4
mov     eax, [ebx]
lea     ecx, [esp+90h+var_54]
push    ecx
mov     ecx, ebx
call    dword ptr [eax+48h]
push    eax
mov     ecx, 87F7E8h
call    Coord__To_Cell
mov     ecx, [eax+140h]
test    ch, 1
jnz     loc_7429D4
mov     edx, [ebp+0]
lea     eax, [esp+90h+var_74]
push    0
push    eax
mov     ecx, ebp
call    dword ptr [edx+4Ch]
push    eax
mov     ecx, 87F7E8h
call    Coord__To_Cell
mov     ecx, eax
call    Cell__IsBuildableAdvanced
test    al, al
jz      loc_7429D4
mov     edx, [ebx]
lea     eax, [esp+90h+var_30]
push    eax
mov     ecx, ebx
call    dword ptr [edx+48h]
push    eax
mov     ecx, 87F7E8h
call    Coord__To_Cell
mov     ecx, eax
call    Cell__IsBuildableAdvanced
test    al, al
jz      short loc_7429D4
mov     edx, [ebx]
lea     eax, [esp+90h+var_30]
push    eax
mov     ecx, ebx
call    dword ptr [edx+48h]
mov     ecx, eax
mov     eax, [ecx]
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+94h+var_6C], ax
mov     eax, [ecx+4]
cdq
and     edx, 0FFh
add     eax, edx
lea     edx, [esp+94h+var_58]
sar     eax, 8
mov     word ptr [esp+94h+var_6C+2], ax
mov     ecx, [esp+94h+var_6C]
mov     eax, [ebp+0]
mov     [esp+94h+var_58], ecx
lea     ecx, [esp+94h+var_78]
push    edx
push    ecx
mov     ecx, ebp
call    dword ptr [eax+1C0h]
push    eax
mov     ecx, ebp
call    BuildingTypeClass__IsPlacementValid
test    al, al
jnz     loc_742C06

loc_7429D4:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+F76↑j
; UnitClass__AssignDestination_SyncLog+F8B↑j ...
mov     eax, [ebp+674h]
lea     ebx, [ebp+674h]
test    eax, eax
mov     [esp+90h+var_78], 0
jz      loc_742A7F
mov     ecx, ebx
call    Stream__GetChecked
mov     edx, [eax]
lea     ecx, [esp+90h+var_54]
push    ecx
push    offset unk_819088
push    eax
call    dword ptr [edx]
mov     esi, eax
test    esi, esi
jge     short loc_742A19
lea     ecx, [esp+90h+var_78]
call    Release2COM
xor     eax, eax
jmp     short loc_742A28
; ---------------------------------------------------------------------------

loc_742A19:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+109A↑j
mov     edi, dword ptr [esp+90h+var_54]
lea     ecx, [esp+90h+var_78]
call    Release2COM
mov     eax, edi

loc_742A28:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+10A7↑j
test    esi, esi
mov     [esp+90h+var_78], eax
jge     short loc_742A42
cmp     esi, 80004002h
jz      short loc_742A42
push    esi
call    sub_7DC720
; ---------------------------------------------------------------------------
mov     eax, [esp+90h+var_78]

loc_742A42:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+10BE↑j
; UnitClass__AssignDestination_SyncLog+10C6↑j
test    eax, eax
jz      short loc_742A7F
mov     edx, [eax]
push    eax
call    dword ptr [edx+1Ch]
test    al, al
jz      short loc_742A7F
mov     eax, [ebx]
test    eax, eax
jz      short loc_742A5C
mov     ecx, [eax]
push    eax
call    dword ptr [ecx+8]

loc_742A5C:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+10E4↑j
mov     eax, [esp+90h+var_78]
mov     dword ptr [ebx], 0
test    eax, eax
jnz     short loc_742A78
push    80004003h
call    sub_7DC720
; ---------------------------------------------------------------------------
mov     eax, [esp+90h+var_78]

loc_742A78:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+10F8↑j
mov     edx, [eax]
push    ebx
push    eax
call    dword ptr [edx+10h]

loc_742A7F:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+107A↑j
; UnitClass__AssignDestination_SyncLog+10D4↑j ...
push    7               ; dwClsContext
push    0               ; pUnkOuter
push    offset stru_7E9A30 ; rclsid
lea     ecx, [esp+9Ch+var_74] ; ppv
mov     dword ptr [esp+9Ch+var_74], 0
call    CreateInstanceCOM
test    eax, eax
jge     short loc_742AAA
cmp     eax, 80004002h
jz      short loc_742AAA
push    eax
call    sub_7DC720
; ---------------------------------------------------------------------------

loc_742AAA:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+112B↑j
; UnitClass__AssignDestination_SyncLog+1132↑j
mov     eax, dword ptr [esp+90h+var_74]
test    eax, eax
jnz     short loc_742AC0
push    80004003h
call    sub_7DC720
; ---------------------------------------------------------------------------
mov     eax, dword ptr [esp+90h+var_74]

loc_742AC0:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+1140↑j
mov     ecx, [eax]
push    ebp
push    eax
call    dword ptr [ecx+0Ch]
mov     ecx, dword ptr [esp+90h+var_74]
xor     eax, eax
test    ecx, ecx
mov     [esp+90h+ppv], eax
jz      short loc_742B29
lea     ecx, [esp+90h+var_74]
call    Stream__GetChecked
mov     edx, [eax]
lea     ecx, [esp+90h+var_54]
push    ecx
push    offset unk_819088
push    eax
call    dword ptr [edx]
mov     esi, eax
test    esi, esi
jge     short loc_742B00
lea     ecx, [esp+90h+ppv]
call    Release2COM
xor     eax, eax
jmp     short loc_742B0F
; ---------------------------------------------------------------------------

loc_742B00:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+1181↑j
mov     edi, dword ptr [esp+90h+var_54]
lea     ecx, [esp+90h+ppv]
call    Release2COM
mov     eax, edi

loc_742B0F:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+118E↑j
test    esi, esi
mov     [esp+90h+ppv], eax
jge     short loc_742B29
cmp     esi, 80004002h
jz      short loc_742B29
push    esi
call    sub_7DC720
; ---------------------------------------------------------------------------
mov     eax, [esp+90h+ppv]

loc_742B29:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+1163↑j
; UnitClass__AssignDestination_SyncLog+11A5↑j ...
mov     ecx, [esp+90h+var_78]
cmp     ecx, eax
jz      short loc_742B5D
mov     esi, ecx
mov     ecx, eax
test    eax, eax
mov     [esp+90h+var_78], ecx
jz      short loc_742B4B
mov     edx, [eax]
push    eax
call    dword ptr [edx+4]
mov     ecx, [esp+90h+var_78]
mov     eax, [esp+90h+ppv]

loc_742B4B:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+11CB↑j
test    esi, esi
jz      short loc_742B5D
mov     eax, [esi]
push    esi
call    dword ptr [eax+8]
mov     ecx, [esp+90h+var_78]
mov     eax, [esp+90h+ppv]

loc_742B5D:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+11BF↑j
; UnitClass__AssignDestination_SyncLog+11DD↑j
test    eax, eax
jz      short loc_742B6B
mov     ecx, [eax]
push    eax
call    dword ptr [ecx+8]
mov     ecx, [esp+90h+var_78]

loc_742B6B:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+11EF↑j
test    ecx, ecx
jz      short loc_742BEA
mov     eax, [ebx]
mov     edx, [ecx]
push    eax
push    ecx
call    dword ptr [edx+0Ch]
mov     esi, [ebx]
mov     eax, dword ptr [esp+90h+var_74]
cmp     esi, eax
jz      short loc_742B98
test    eax, eax
mov     [ebx], eax
jz      short loc_742B8E
mov     ecx, [eax]
push    eax
call    dword ptr [ecx+4]

loc_742B8E:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+1216↑j
test    esi, esi
jz      short loc_742B98
mov     edx, [esi]
push    esi
call    dword ptr [edx+8]

loc_742B98:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+1210↑j
; UnitClass__AssignDestination_SyncLog+1220↑j
lea     eax, [ebp+9Ch]
mov     ecx, [ebp+9Ch]
mov     dword ptr [esp+90h+var_54], ecx
mov     edx, [eax+4]
mov     dword ptr [esp+90h+var_54+4], edx
mov     eax, [eax+8]
mov     [esp+90h+var_4C], eax
mov     eax, [ebx]
test    eax, eax
jnz     short loc_742BC6
push    80004003h
call    sub_7DC720
; ---------------------------------------------------------------------------

loc_742BC6:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+124A↑j
mov     esi, [ebx]
lea     ecx, [esp+90h+var_54]
push    ecx
mov     ecx, 87F7E8h
mov     edi, [esi]
call    Coord__To_Cell
xor     edx, edx
mov     dl, [eax+11Ch]
push    edx
push    esi
call    dword ptr [edi+7Ch]
mov     ecx, [esp+90h+var_78]

loc_742BEA:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+11FD↑j
mov     eax, dword ptr [esp+90h+var_74]
test    eax, eax
jz      short loc_742BFC
mov     ecx, [eax]
push    eax
call    dword ptr [ecx+8]
mov     ecx, [esp+90h+var_78]

loc_742BFC:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+1280↑j
test    ecx, ecx
jz      short loc_742C06
mov     edx, [ecx]
push    ecx
call    dword ptr [edx+8]

loc_742C06:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+F1E↑j
; UnitClass__AssignDestination_SyncLog+F31↑j ...
mov     eax, [esp+90h+var_64]
test    eax, eax
jz      short loc_742C14
mov     ecx, [eax]
push    eax
call    dword ptr [ecx+8]

loc_742C14:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+E59↑j
; UnitClass__AssignDestination_SyncLog+E83↑j ...
mov     ebx, [esp+90h+var_58]
test    ebx, ebx
jz      loc_742D3F
mov     edx, [ebx+520h]
mov     al, [edx+16A9h]
test    al, al
jz      short loc_742CA8
mov     ecx, ebx
call    Team__AllMembersValid
test    al, al
jz      short loc_742C59
push    0
mov     ecx, ebx
call    Team__GetMember
cmp     eax, ebp
jz      short loc_742C59
mov     edi, dword ptr [esp+90h+arg_0]
mov     ecx, ebp
push    edi
call    TechnoClass__SetFocus
jmp     short loc_742CAF
; ---------------------------------------------------------------------------

loc_742C59:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+12C9↑j
; UnitClass__AssignDestination_SyncLog+12D6↑j
mov     eax, [ebp+0]
push    ebx
push    2
mov     ecx, ebp
call    dword ptr [eax+278h]
cmp     eax, 1
jnz     short loc_742CA8
mov     edx, [ebp+0]
push    0Eh
mov     ecx, ebp
call    dword ptr [edx+274h]
cmp     eax, 1
jnz     short loc_742C90
mov     eax, dword ptr [esp+90h+arg_0+4]
mov     ecx, dword ptr [esp+90h+arg_0]
push    eax
push    ecx
jmp     short loc_742D09
; ---------------------------------------------------------------------------

loc_742C90:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+130C↑j
mov     edx, [ebp+0]
push    3
mov     ecx, ebp
call    dword ptr [edx+274h]
xor     edi, edi
mov     dword ptr [esp+90h+arg_0], edi
jmp     short loc_742CAF
; ---------------------------------------------------------------------------

loc_742CA8:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+12BE↑j
; UnitClass__AssignDestination_SyncLog+12FA↑j
mov     edi, dword ptr [esp+90h+arg_0]

loc_742CAF:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+12E7↑j
; UnitClass__AssignDestination_SyncLog+1336↑j
mov     eax, [ebx+520h]
mov     cl, [eax+16ABh]
test    cl, cl
jz      loc_742D46
mov     ecx, ebx
call    Team__AllMembersValid
test    al, al
jz      short loc_742CDB
push    0
mov     ecx, ebx
call    Team__GetMember
cmp     eax, ebp
jnz     short loc_742D46

loc_742CDB:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+135C↑j
mov     edx, [ebp+0]
push    ebx
push    2
mov     ecx, ebp
call    dword ptr [edx+278h]
cmp     eax, 1
jnz     short loc_742D46
mov     eax, [ebp+0]
push    0Eh
mov     ecx, ebp
call    dword ptr [eax+274h]
cmp     eax, 1
jnz     short loc_742D27
mov     ecx, dword ptr [esp+90h+arg_0+4]
push    ecx
push    edi

loc_742D09:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+131E↑j
mov     ecx, ebp
call    FootClass__AssignDestination
pop     edi
mov     dword ptr [ebp+5E0h], 0FFFFFFFFh
pop     esi
pop     ebp
pop     ebx
add     esp, 80h
retn    8
; ---------------------------------------------------------------------------

loc_742D27:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+138E↑j
mov     edx, [ebp+0]
push    3
mov     ecx, ebp
call    dword ptr [edx+274h]
xor     edi, edi
mov     dword ptr [esp+90h+arg_0], edi
jmp     short loc_742D46
; ---------------------------------------------------------------------------

loc_742D3F:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+12AA↑j
mov     edi, dword ptr [esp+90h+arg_0]

loc_742D46:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+134D↑j
; UnitClass__AssignDestination_SyncLog+1369↑j ...
push    0
mov     ecx, ebp
call    Team__GetMember
mov     esi, eax
test    esi, esi
jz      loc_742E47
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+2Ch]
cmp     eax, 6
jnz     loc_742E47
mov     ecx, [esi+520h]
mov     al, [ecx+16BDh]
test    al, al
jz      loc_742E47
cmp     dword ptr [ebp+0ACh], 7
jz      loc_742E47
mov     eax, [ebp+2B0h]
test    eax, eax
jnz     loc_742E3A
add     esi, 9Ch
mov     eax, [esi]
mov     ecx, [esi+4]
mov     edx, [esi+8]
mov     [esp+90h+var_28], edx
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+90h+var_54], ax
mov     eax, ecx
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+90h+var_54+2], ax
mov     eax, dword ptr [esp+90h+var_54]
mov     ecx, dword ptr [esp+90h+var_54+2]
add     eax, 4
inc     ecx
mov     word ptr [esp+90h+var_58], ax
mov     word ptr [esp+90h+var_58+2], cx
mov     edx, [esp+90h+var_58]
lea     eax, [esp+90h+var_54]
mov     ecx, 87F7E8h
push    eax
mov     dword ptr [esp+94h+var_54], edx
call    CellCoord__To_CellObj
cmp     edi, eax
jz      short loc_742E47
mov     edx, [ebp+5ACh]
lea     ecx, [ebp+5ACh]
call    dword ptr [edx+0Ch]
mov     eax, [ebp+588h]
lea     ecx, [ebp+588h]
call    dword ptr [eax+0Ch]
test    edi, edi
jz      loc_74317A
push    edi
mov     ecx, ebp
call    BuildingClass__AddToProductionQueue
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 80h
retn    8
; ---------------------------------------------------------------------------

loc_742E3A:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+1422↑j
mov     edx, [ebp+0]
push    3
mov     ecx, ebp
call    dword ptr [edx+274h]

loc_742E47:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+13E3↑j
; UnitClass__AssignDestination_SyncLog+13F3↑j ...
test    ebx, ebx
jz      loc_742F48
mov     ecx, [ebp+6C4h]
mov     eax, [ecx+3F8h]
test    eax, eax
jle     loc_742F48
mov     edx, [ecx+3F8h]
xor     eax, eax
test    edx, edx
jle     loc_742F48
mov     esi, [ebx+520h]
mov     ecx, [ecx+3ECh]

loc_742E7F:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+1519↓j
cmp     [ecx], esi
jz      short loc_742E90
inc     eax
add     ecx, 4
cmp     eax, edx
jl      short loc_742E7F
jmp     loc_742F48
; ---------------------------------------------------------------------------

loc_742E90:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+1511↑j
mov     eax, [ebp+0]
mov     ecx, ebp
call    dword ptr [eax+2Ch]
cmp     eax, 1
jnz     loc_742F48
mov     eax, [ebp+6C4h]
mov     cl, [eax+0E0Eh]
test    cl, cl
jnz     short loc_742EBF
mov     cl, [eax+0E0Fh]
test    cl, cl
jz      loc_742F48

loc_742EBF:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+153F↑j
mov     edx, [ebp+0]
mov     ecx, ebp
call    dword ptr [edx+184h]
cmp     eax, 10h
jz      short loc_742F48
push    0
mov     ecx, ebp
call    Team__GetMember
cmp     eax, ebx
jz      loc_742FE9
mov     ecx, ebx
call    Team__AllMembersValid
test    al, al
jnz     loc_742FE9
mov     eax, [ebp+0]
push    ebx
push    2
mov     ecx, ebp
call    dword ptr [eax+278h]
cmp     eax, 1
jnz     loc_742FE9
mov     edx, [ebp+0]
mov     ecx, ebp
call    dword ptr [edx+184h]
cmp     eax, 7
jz      loc_742FE9
mov     eax, [ebp+0]
mov     ecx, ebp
call    dword ptr [eax+184h]
cmp     eax, 0Ah
jz      loc_742FE9
mov     edx, [ebp+0]
push    0
push    7
mov     ecx, ebp
call    dword ptr [edx+1E8h]

loc_742F3D:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+179E↓j
mov     dword ptr [esp+90h+arg_0], 0

loc_742F48:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+14D9↑j
; UnitClass__AssignDestination_SyncLog+14ED↑j ...
mov     eax, [ebp+674h]
test    eax, eax
jnz     short loc_742F5C
push    80004003h
call    sub_7DC720
; ---------------------------------------------------------------------------

loc_742F5C:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+15E0↑j
mov     eax, [ebp+674h]
push    eax
mov     ecx, [eax]
call    dword ptr [ecx+60h]
test    al, al
jnz     loc_74314F
mov     ecx, [ebp+21Ch]
call    HouseClass__IonSensitivesShouldBeOffline
test    al, al
jnz     loc_74314F
mov     edx, [ebp+0]
mov     ecx, ebp
call    dword ptr [edx+1BCh]
mov     ecx, [eax+140h]
test    ch, 1
jnz     loc_74314F
mov     esi, [eax+0E4h]
test    esi, esi
jz      loc_74314F

loc_742FAB:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+1672↓j
cmp     esi, ebp
jz      short loc_742FDD
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+2Ch]
cmp     eax, 6
jnz     short loc_742FDD
mov     eax, [esi+520h]
mov     cl, [eax+16A9h]
test    cl, cl
jnz     loc_74312F
mov     cl, [eax+16ABh]
test    cl, cl
jnz     loc_74312F

loc_742FDD:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+163D↑j
; UnitClass__AssignDestination_SyncLog+1649↑j
mov     esi, [esi+30h]
test    esi, esi
jnz     short loc_742FAB
jmp     loc_74314F
; ---------------------------------------------------------------------------

loc_742FE9:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+156A↑j
; UnitClass__AssignDestination_SyncLog+1579↑j ...
mov     eax, dword ptr [esp+90h+arg_0]
test    eax, eax
jz      loc_742F48
mov     ecx, eax
mov     eax, [ecx]
call    dword ptr [eax+2Ch]
cmp     eax, 6
jnz     loc_742F48
push    0
mov     ecx, ebp
call    Team__GetMember
cmp     eax, dword ptr [esp+90h+arg_0]
jz      loc_742F48
lea     ecx, [ebx+9Ch]
xor     eax, eax
mov     edx, ecx
mov     word ptr [esp+90h+var_5C], ax
mov     word ptr [esp+90h+var_5C+2], ax
push    0
mov     eax, [edx]
push    0
mov     esi, 1
mov     ebx, [edx+4]
mov     edi, esi
mov     edx, [edx+8]
mov     [esp+98h+var_28], edx
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+98h+var_58], ax
mov     eax, ebx
cdq
and     edx, 0FFh
mov     ebx, [ecx+4]
add     eax, edx
sar     eax, 8
mov     word ptr [esp+98h+var_58+2], ax
mov     eax, [esp+98h+var_58]
mov     dword ptr [esp+98h+var_54], eax
mov     eax, [ecx]
cdq
and     edx, 0FFh
mov     ecx, [ecx+8]
add     eax, edx
mov     [esp+98h+var_28], ecx
sar     eax, 8
mov     word ptr [esp+98h+var_58], ax
mov     eax, ebx
cdq
and     edx, 0FFh
lea     ecx, [esp+98h+var_5C]
add     eax, edx
push    ecx
sar     eax, 8
push    0
mov     word ptr [esp+0A0h+var_58+2], ax
mov     edx, [esp+0A0h+var_58]
mov     eax, [ebp+6C4h]
push    0
push    esi
push    0
mov     [esp+0ACh+var_60], edx
mov     eax, [eax+5B4h]
push    edi
push    esi
push    0
push    eax
push    0
lea     edx, [esp+0C0h+var_54]
push    eax
push    edx
mov     ecx, 87F7E8h
call    MapClass__GetTileIndex
push    eax
lea     eax, [esp+0C0h+var_60]
push    2
lea     ecx, [esp+0C4h+var_64]
push    eax
push    ecx
mov     ecx, 87F7E8h
call    LayerClass__Pathfinding_Find
mov     eax, [eax]
cmp     ax, word ptr dword_A8ED54+8E264h
mov     [esp+90h+var_58], eax
jnz     short loc_743114
mov     dx, word ptr [esp+90h+var_58+2]
cmp     dx, word ptr dword_A8ED54+8E266h
jz      loc_742F3D

loc_743114:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+1790↑j
lea     eax, [esp+90h+var_58]
mov     ecx, 87F7E8h
push    eax
call    CellCoord__To_CellObj
mov     dword ptr [esp+90h+arg_0], eax
jmp     loc_742F48
; ---------------------------------------------------------------------------

loc_74312F:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+1659↑j
; UnitClass__AssignDestination_SyncLog+1667↑j
mov     eax, [ebp+674h]
test    eax, eax
jnz     short loc_743143
push    80004003h
call    sub_7DC720
; ---------------------------------------------------------------------------

loc_743143:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+17C7↑j
mov     eax, [ebp+674h]
push    eax
mov     ecx, [eax]
call    dword ptr [ecx+58h]

loc_74314F:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+15FA↑j
; UnitClass__AssignDestination_SyncLog+160D↑j ...
mov     edx, dword ptr [esp+90h+arg_0+4]
mov     eax, dword ptr [esp+90h+arg_0]
push    edx
push    eax
mov     ecx, ebp
call    FootClass__AssignDestination
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 80h
retn    8
; ---------------------------------------------------------------------------

loc_743173:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+14D↑j
; UnitClass__AssignDestination_SyncLog+15B↑j
mov     ecx, ebp
call    FootClass__ClearPathIndex

loc_74317A:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+F0↑j
; UnitClass__AssignDestination_SyncLog+120↑j ...
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 80h
retn    8
*/

// 0x7414e0
int UnitClass::ApproachTarget_DisallowMoving(char a2)
{
  int v3; // eax
  TechnoClass *v4; // edi
  int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v10; // eax

  if ( (uint8_t)House::IsCurrentPlayer(*((House **)&this->attachedTag5))
    || (v3 = this->AbstractClass_2B4) == 0
    || this->FootClass_field_5A4
    || (v4 = (*(unsigned char *)(v3 + 20) & 1) != 0 ? (TechnoClass *)v3 : 0, !this->Type->OpenTransportWeapon)
    && !(uint8_t)TechnoTypeClass::HasVoiceResponse((int *)this, 17)
    || ObjectClass::DistanceTo((ObjectClass *)this, this->AbstractClass_2B4) >= dword_8871E0->PathDelay[0]
    || !v4
    || !ObjectClass::IsCrushable(v4, this)
    || !*(unsigned char *)(this->Type + 3373) && (uint8_t)House::IsCurrentPlayer(*((House **)&this->attachedTag5)) )
  {
    if ( *(unsigned char *)&this->Type->qD6A ) /*0x74159f*/
    {
      v5 = *(unsigned int *)this; /*0x7415af*/
      v6 = (*(int (__thiscall **)(Class_7F5C70 *, unsigned int))(*&this->ptr_4))(this, this->AbstractClass_2B4); /*0x7415b4*/
      v7 = *(unsigned int *)v5->vt_slot_1016(this, v6); /*0x7415c3*/
      if ( v7 ) /*0x7415c7*/
      {
        v8 = *(unsigned int *)(v7 + 160); /*0x7415c9*/
        if ( v8 ) /*0x7415d1*/
        {
          if ( *(unsigned char *)(v8 + 704) ) /*0x7415d3*/
          {
            if ( !a2 ) /*0x7415e3*/
              (*(void (__thiscall **)(Class_7F5C70 *, unsigned int, int))(*&this->u32_1CC2))( /*0x7415f2*/
                this,
                this->AbstractClass_2B4,
                1);
            return (void *)this->AbstractClass_2B4; /*0x741600*/
          }
        }
      }
    }
    if ( !*(unsigned char *)&this->Type->qD29 ) /*0x741609*/
      return FootClass::CalculateApproachPath((FootClass *)this, 0); /*0x741609*/
    v10 = this->AbstractClass_2B4; /*0x741613*/
    if ( !v10 || *(unsigned char *)(this->owner + 492) && this->shouldLoseTarget ) /*0x74162d*/
      return FootClass::CalculateApproachPath((FootClass *)this, 0); /*0x74162d*/
    if ( (v10->abstractFlags & 2) == 0
      || !ObjectClass::IsCrushable((v10->abstractFlags & 2) != 0 ? (TechnoClass *)v10 : 0, this) )
    {
      return FootClass::CalculateApproachPath((FootClass *)this, 0); /*0x741689*/
    }
  }
  if ( !a2 ) /*0x741665*/
    (*(void (__thiscall **)(Class_7F5C70 *, unsigned int, int))(*&this->u32_1CC2))(this, this->AbstractClass_2B4, 1); /*0x741674*/
  return (void *)this->AbstractClass_2B4; /*0x7415fe*/
}
/* ASM:
push    esi
mov     esi, ecx
push    edi
mov     ecx, [esi+21Ch] ; this
call    House__IsCurrentPlayer
test    al, al
jnz     loc_741599
mov     eax, [esi+2B4h]
test    eax, eax
jz      loc_741599
mov     ecx, [esi+5A4h]
test    ecx, ecx
jnz     loc_741599
test    eax, eax
jnz     short loc_74151B
xor     edi, edi
jmp     short loc_741529
; ---------------------------------------------------------------------------

loc_74151B:                             ; CODE XREF: UnitClass__ApproachTarget_DisallowMoving+35↑j
mov     cl, [eax+14h]
and     cl, 1
neg     cl
sbb     ecx, ecx
and     ecx, eax
mov     edi, ecx

loc_741529:                             ; CODE XREF: UnitClass__ApproachTarget_DisallowMoving+39↑j
mov     edx, [esi+6C4h]
mov     al, [edx+0D28h]
test    al, al
jnz     short loc_741546
push    11h
mov     ecx, esi
call    TechnoTypeClass__HasVoiceResponse
test    al, al
jz      short loc_741599

loc_741546:                             ; CODE XREF: UnitClass__ApproachTarget_DisallowMoving+57↑j
mov     eax, [esi+2B4h]
mov     ecx, esi
push    eax
call    ObjectClass__DistanceTo
mov     ecx, ds:8871E0h
cmp     eax, [ecx+1728h]
jge     short loc_741599
test    edi, edi
jz      short loc_741599
push    esi
mov     ecx, edi
call    ObjectClass__IsCrushable
test    al, al
jz      short loc_741599
mov     edx, [esi+6C4h]
mov     al, [edx+0D2Dh]
test    al, al
jnz     loc_74165F
mov     ecx, [esi+21Ch] ; this
call    House__IsCurrentPlayer
test    al, al
jz      loc_74165F

loc_741599:                             ; CODE XREF: UnitClass__ApproachTarget_DisallowMoving+11↑j
; UnitClass__ApproachTarget_DisallowMoving+1F↑j ...
mov     edx, [esi+6C4h]
mov     al, [edx+0D6Ah]
test    al, al
jz      short loc_741603
mov     eax, [esi+2B4h]
mov     edi, [esi]
push    eax
mov     ecx, esi
call    dword ptr [edi+2E4h]
push    eax
mov     ecx, esi
call    dword ptr [edi+3F8h]
mov     eax, [eax]
test    eax, eax
jz      short loc_741603
mov     eax, [eax+0A0h]
test    eax, eax
jz      short loc_741603
mov     cl, [eax+2C0h]
test    cl, cl
jz      short loc_741603
mov     al, [esp+8+arg_0]
test    al, al
jnz     short loc_7415F8
mov     eax, [esi+2B4h]
mov     edx, [esi]
push    1
push    eax
mov     ecx, esi
call    dword ptr [edx+480h]

loc_7415F8:                             ; CODE XREF: UnitClass__ApproachTarget_DisallowMoving+103↑j
mov     eax, [esi+2B4h]
pop     edi
pop     esi
retn    4
; ---------------------------------------------------------------------------

loc_741603:                             ; CODE XREF: UnitClass__ApproachTarget_DisallowMoving+C7↑j
; UnitClass__ApproachTarget_DisallowMoving+E7↑j ...
mov     ecx, [esi+6C4h]
mov     al, [ecx+0D29h]
test    al, al
jz      short loc_741685
mov     eax, [esi+2B4h]
test    eax, eax
jz      short loc_741685
mov     edx, [esi+21Ch]
mov     cl, [edx+1ECh]
test    cl, cl
jz      short loc_741637
mov     cl, [esi+50Ch]
test    cl, cl
jnz     short loc_741685

loc_741637:                             ; CODE XREF: UnitClass__ApproachTarget_DisallowMoving+14B↑j
test    eax, eax
jz      short loc_741685
test    byte ptr [eax+14h], 2
jz      short loc_741685
test    eax, eax
jnz     short loc_741649
xor     ecx, ecx
jmp     short loc_741655
; ---------------------------------------------------------------------------

loc_741649:                             ; CODE XREF: UnitClass__ApproachTarget_DisallowMoving+163↑j
mov     cl, [eax+14h]
and     cl, 2
neg     cl
sbb     ecx, ecx
and     ecx, eax

loc_741655:                             ; CODE XREF: UnitClass__ApproachTarget_DisallowMoving+167↑j
push    esi
call    ObjectClass__IsCrushable
test    al, al
jz      short loc_741685

loc_74165F:                             ; CODE XREF: UnitClass__ApproachTarget_DisallowMoving+A0↑j
; UnitClass__ApproachTarget_DisallowMoving+B3↑j
mov     al, [esp+8+arg_0]
test    al, al
jnz     short loc_74167A
mov     ecx, [esi+2B4h]
mov     eax, [esi]
push    1
push    ecx
mov     ecx, esi
call    dword ptr [eax+480h]

loc_74167A:                             ; CODE XREF: UnitClass__ApproachTarget_DisallowMoving+185↑j
mov     eax, [esi+2B4h]
pop     edi
pop     esi
retn    4
; ---------------------------------------------------------------------------

loc_741685:                             ; CODE XREF: UnitClass__ApproachTarget_DisallowMoving+131↑j
; UnitClass__ApproachTarget_DisallowMoving+13B↑j ...
push    0
mov     ecx, esi
call    FootClass__CalculateApproachPath
pop     edi
pop     esi
retn    4
*/

// 0x736990
int UnitClass::UpdateRotation_TurretFacing_EMP()
{
  AbstractClass *target; // eax
  int v3; // ecx
  UnitTypeClass *Type; // eax
  int v5; // edi
  UnitTypeClass *v6; // eax
  bool v7; // al
  int v8; // edi
  bool v9; // cl
  unsigned short *v10; // eax
  int v11; // eax
  unsigned short *Value; // [esp-4h] [ebp-14h]
  int v15; // [esp+Ch] [ebp-4h] BYREF

  target = this->target; /*0x736997*/
  if ( target && !this->FootClass_field_bool_6AF ) /*0x7369a5*/
  {
    v3 = *ObjectClass::CalcTargetFacing((ObjectClass *)this, &v15, (int)target); /*0x7369c0*/
    Type = this->Type; /*0x7369c2*/
    v3 = v3; /*0x7369c8*/
    if ( Type->Turret ) /*0x7369cc*/
    {
      v5 = (*((int (__thiscall **)(UnitClass *))this->ptr_0 + 253))(this); /*0x7369e0*/
      if ( (uint8_t)IsNonNullPtr((unsigned int *)v5) && !*(unsigned char *)(v5->MovementZone ) /*0x7369f4*/
      {
        if ( v5->nextArrayIndex ) /*0x736a02*/
        {
          Value = ProgressTimer::GetValue((ProgressTimer *)this->primaryFacing, &v15); /*0x736a19*/
          FacingClass::Update((char *)this->secondaryFacing, Value); /*0x736a20*/
        }
        else
        {
          FacingClass::Update((char *)this->secondaryFacing, &v3); /*0x736a2d*/
        }
      }
    }
    else if ( Type->SpeedType[0] == 1 && !this->movementDestination ) /*0x736a38*/
    {
      if ( !this->locomotor[0] ) /*0x736a42*/
        sub_7DC720(-2147467261); /*0x736a51*/
      if ( !(*(uint8_t (__stdcall **)(int))(*(unsigned int *)this->locomotor[0] + 16))(this->locomotor[0]) /*0x736a80*/
        && *(unsigned short *)ProgressTimer::GetValue((ProgressTimer *)this->primaryFacing, &v15) == (unsigned short)v3 )
      {
        FacingClass::Update((char *)this->primaryFacing, &v3); /*0x736a89*/
      }
    }
  }
  v6 = this->Type; /*0x736a8e*/
  if ( (v6->qD21) ) /*0x736a95*/
  {
    (*((unsigned short *)&(v3))) = ((uint8_t)((unsigned int)((*ProgressTimer::GetValue( /*0x736acb*/
                                                        (ProgressTimer *)this->secondaryFacing,
                                                        &v15) >> 7)
                                                  + 1) >> 1)
                 + 8) << 8;
    FacingClass::Update((char *)this->secondaryFacing, &v3); /*0x736ad0*/
    goto LABEL_38; /*0x736ad0*/
  }
  this->FootClass_field_bool_6AF = 0; /*0x736ad5*/
  if ( v6->Turret ) /*0x736adc*/
  {
    if ( (uint8_t)TimerClass::Active((int)this->secondaryFacing) ) /*0x736af2*/
    {
      if ( !(this->u8_6C5) ) /*0x736b01*/
        this->FootClass_field_bool_6AF = TimerClass::Active((int)this->secondaryFacing); /*0x736b16*/
    }
    else if ( !this->target ) /*0x736b21*/
    {
      v7 = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - this->turretChargeTimer >= *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance /*0x736b52*/
                                                                                 + 3588)
                                                                     + 5;
      if ( this->bunkerLinkedUnit ) /*0x736b54*/
        v7 = 0; /*0x736b5e*/
      if ( (!this->Type->IsSimpleDeployer || !this->Deployed) && v7 ) /*0x736b7c*/
      {
        v8 = (*((int (__thiscall **)(UnitClass *))this->ptr_0 + 253))(this); /*0x736b88*/
        v9 = (uint8_t)IsNonNullPtr((unsigned int *)v8) && v8->nextArrayIndex; /*0x736b9d*/
        if ( !this->movementDestination || v9 ) /*0x736baf*/
        {
          v10 = ProgressTimer::GetValue((ProgressTimer *)this->primaryFacing, &v15); /*0x736bd5*/
        }
        else
        {
          if ( this->isAttackedByLocomotor ) /*0x736bb1*/
            goto LABEL_38; /*0x736bb9*/
          v10 = ObjectClass::CalcTargetFacing((ObjectClass *)this, &v15, (int)this->movementDestination); /*0x736bc3*/
        }
        FacingClass::Update((char *)this->secondaryFacing, v10); /*0x736bdd*/
      }
    }
  }
  LABEL_38:
  (*((unsigned char *)&(v11))) = this->Type->Turret; /*0x736be2*/
  if ( (unsigned char)v11 ) /*0x736bf1*/
  {
    v11 = (uint8_t)TimerClass::Active((int)this->secondaryFacing); /*0x736bfe*/
    this->v11 = v11; /*0x736c03*/
  }
  return v11; /*0x736c09*/
}
/* ASM:
sub     esp, 8
push    esi
mov     esi, ecx
push    edi
mov     eax, [esi+2B4h]
test    eax, eax
jz      loc_736A8E
mov     cl, [esi+6AFh]
test    cl, cl
jnz     loc_736A8E
push    eax
lea     eax, [esp+14h+var_4]
push    eax
mov     ecx, esi
call    ObjectClass__CalcTargetFacing
mov     ecx, [eax]
mov     eax, [esi+6C4h]
mov     [esp+10h+var_8], ecx
mov     cl, [eax+0CA1h]
test    cl, cl
jz      short loc_736A2F
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+3F4h]
mov     edi, eax
mov     ecx, esi
push    edi
call    IsNonNullPtr
test    al, al
jz      loc_736A8E
mov     eax, [edi]
mov     cl, [eax+12Bh]
test    cl, cl
jnz     loc_736A8E
mov     al, [edi+18h]
test    al, al
jz      short loc_736A22
lea     ecx, [esp+10h+var_4]
push    ecx
lea     ecx, [esi+388h]
call    ProgressTimer__GetValue
push    eax
lea     ecx, [esi+3A0h]
jmp     short loc_736A89
; ---------------------------------------------------------------------------

loc_736A22:                             ; CODE XREF: UnitClass__UpdateRotation_TurretFacing_EMP+77↑j
lea     edx, [esp+10h+var_8]
lea     ecx, [esi+3A0h]
push    edx
jmp     short loc_736A89
; ---------------------------------------------------------------------------

loc_736A2F:                             ; CODE XREF: UnitClass__UpdateRotation_TurretFacing_EMP+44↑j
cmp     dword ptr [eax+67Ch], 1
jnz     short loc_736A8E
mov     eax, [esi+5A4h]
test    eax, eax
jnz     short loc_736A8E
mov     eax, [esi+674h]
test    eax, eax
jnz     short loc_736A56
push    80004003h
call    sub_7DC720
; ---------------------------------------------------------------------------

loc_736A56:                             ; CODE XREF: UnitClass__UpdateRotation_TurretFacing_EMP+BA↑j
mov     eax, [esi+674h]
push    eax
mov     ecx, [eax]
call    dword ptr [ecx+10h]
test    al, al
jnz     short loc_736A8E
lea     edi, [esi+388h]
lea     edx, [esp+10h+var_4]
push    edx
mov     ecx, edi
call    ProgressTimer__GetValue
mov     ax, [eax]
cmp     ax, word ptr [esp+10h+var_8]
jnz     short loc_736A8E
lea     ecx, [esp+10h+var_8]
push    ecx
mov     ecx, edi

loc_736A89:                             ; CODE XREF: UnitClass__UpdateRotation_TurretFacing_EMP+90↑j
; UnitClass__UpdateRotation_TurretFacing_EMP+9D↑j
call    FacingClass__Update

loc_736A8E:                             ; CODE XREF: UnitClass__UpdateRotation_TurretFacing_EMP+F↑j
; UnitClass__UpdateRotation_TurretFacing_EMP+1D↑j ...
mov     eax, [esi+6C4h]
push    ebx
mov     cl, [eax+0D21h]
test    cl, cl
jz      short loc_736AD5
lea     edi, [esi+3A0h]
lea     edx, [esp+14h+var_4]
push    edx
mov     ecx, edi
call    ProgressTimer__GetValue
mov     eax, [eax]
lea     ecx, [esp+14h+var_8]
shr     eax, 7
inc     eax
push    ecx
shr     eax, 1
and     eax, 0FFh
mov     ecx, edi
add     eax, 8
shl     eax, 8
mov     word ptr [esp+18h+var_8], ax
jmp     loc_736BDD
; ---------------------------------------------------------------------------

loc_736AD5:                             ; CODE XREF: UnitClass__UpdateRotation_TurretFacing_EMP+10D↑j
mov     byte ptr [esi+6AFh], 0
mov     cl, [eax+0CA1h]
test    cl, cl
jz      loc_736BE2
lea     ebx, [esi+3A0h]
mov     ecx, ebx
call    TimerClass__Active
test    al, al
jz      short loc_736B21
mov     edx, [esi+6C4h]
mov     al, [edx+0D21h]
test    al, al
jnz     loc_736BE2
mov     ecx, ebx
call    TimerClass__Active
mov     [esi+6AFh], al
jmp     loc_736BE2
; ---------------------------------------------------------------------------

loc_736B21:                             ; CODE XREF: UnitClass__UpdateRotation_TurretFacing_EMP+169↑j
mov     eax, [esi+2B4h]
test    eax, eax
jnz     loc_736BE2
mov     ecx, dword_A8ED54+30h
mov     edx, [esi+120h]
sub     ecx, edx
mov     edx, ds:8871E0h
mov     al, 1
mov     edx, [edx+0E04h]
add     edx, 5
cmp     ecx, edx
jge     short loc_736B54
xor     al, al

loc_736B54:                             ; CODE XREF: UnitClass__UpdateRotation_TurretFacing_EMP+1C0↑j
mov     ecx, [esi+2E4h]
test    ecx, ecx
jz      short loc_736B60
xor     al, al

loc_736B60:                             ; CODE XREF: UnitClass__UpdateRotation_TurretFacing_EMP+1CC↑j
mov     ecx, [esi+6C4h]
mov     dl, [ecx+0E13h]
test    dl, dl
jz      short loc_736B7A
mov     cl, [esi+6E0h]
test    cl, cl
jnz     short loc_736BE2

loc_736B7A:                             ; CODE XREF: UnitClass__UpdateRotation_TurretFacing_EMP+1DE↑j
test    al, al
jz      short loc_736BE2
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+3F4h]
mov     edi, eax
mov     ecx, esi
push    edi
call    IsNonNullPtr
test    al, al
jz      short loc_736BA1
mov     al, [edi+18h]
test    al, al
jz      short loc_736BA1
mov     cl, 1
jmp     short loc_736BA3
; ---------------------------------------------------------------------------

loc_736BA1:                             ; CODE XREF: UnitClass__UpdateRotation_TurretFacing_EMP+204↑j
; UnitClass__UpdateRotation_TurretFacing_EMP+20B↑j
xor     cl, cl

loc_736BA3:                             ; CODE XREF: UnitClass__UpdateRotation_TurretFacing_EMP+20F↑j
mov     eax, [esi+5A4h]
test    eax, eax
jz      short loc_736BCA
test    cl, cl
jnz     short loc_736BCA
mov     cl, [esi+6ADh]
test    cl, cl
jnz     short loc_736BE2
push    eax
lea     eax, [esp+18h+var_4]
push    eax
mov     ecx, esi
call    ObjectClass__CalcTargetFacing
jmp     short loc_736BDA
; ---------------------------------------------------------------------------

loc_736BCA:                             ; CODE XREF: UnitClass__UpdateRotation_TurretFacing_EMP+21B↑j
; UnitClass__UpdateRotation_TurretFacing_EMP+21F↑j
lea     ecx, [esp+14h+var_4]
push    ecx
lea     ecx, [esi+388h]
call    ProgressTimer__GetValue

loc_736BDA:                             ; CODE XREF: UnitClass__UpdateRotation_TurretFacing_EMP+238↑j
push    eax
mov     ecx, ebx

loc_736BDD:                             ; CODE XREF: UnitClass__UpdateRotation_TurretFacing_EMP+140↑j
call    FacingClass__Update

loc_736BE2:                             ; CODE XREF: UnitClass__UpdateRotation_TurretFacing_EMP+154↑j
; UnitClass__UpdateRotation_TurretFacing_EMP+179↑j ...
mov     edx, [esi+6C4h]
pop     ebx
mov     al, [edx+0CA1h]
test    al, al
jz      short loc_736C09
lea     ecx, [esi+3A0h]
call    TimerClass__Active
and     eax, 0FFh
mov     [esi+4A0h], eax

loc_736C09:                             ; CODE XREF: UnitClass__UpdateRotation_TurretFacing_EMP+261↑j
pop     edi
pop     esi
add     esp, 8
retn
*/

// 0x743a50
int UnitClass::Scatter(CellStruct* threatPos, bool a3, bool a4)
{
  double v5; // st7
  int result; // eax
  int v8; // eax
  Class_7F5C70 *v9; // ebx
  int v10; // eax
  unsigned int *v12; // eax
  char v13; // cl
  int v14; // esi
  void *v15; // eax
  char v16; // al
  char v17; // di
  unsigned int v18; // esi
  int v19; // edx
  int v20; // edi
  unsigned int *v21; // eax
  char *v22; // esi
  int v23; // esi
  int v24; // eax
  char v25; // si
  int v26; // esi
  int v27; // ecx
  int16_t v28; // ax
  void *v29; // edi
  int v30; // ebx
  int LandHeight; // eax
  int v32; // kr04_4
  unsigned int **v33; // eax
  uint16_t v34; // ax
  double v35; // [esp+24h] [ebp-68h]
  double v36; // [esp+2Ch] [ebp-60h]
  StreamClass v37; // [esp+44h] [ebp-48h] BYREF
  unsigned int *v38; // [esp+58h] [ebp-34h] BYREF
  int v39; // [esp+5Ch] [ebp-30h] BYREF
  int v40; // [esp+60h] [ebp-2Ch] BYREF
  int v41; // [esp+64h] [ebp-28h] BYREF
  int v42; // [esp+68h] [ebp-24h]
  int v43; // [esp+6Ch] [ebp-20h]
  unsigned char v44[8]; // [esp+70h] [ebp-1Ch] BYREF
  unsigned int v46[4]; // [esp+7Ch] [ebp-10h] BYREF

  result = (*(int (__thiscall **)(Class_7F5C70 *))(*&this->ptr_4))(this); /*0x743a5c*/
  if ( !(unsigned char)result ) /*0x743a64*/
    return result; /*0x743a64*/
  v8 = this->Locomotor; /*0x743a6a*/
  v9 = &this->Locomotor; /*0x743a70*/
  *(unsigned int *)v37.m_Position = 0; /*0x743a78*/
  if ( !v8 ) /*0x743a80*/
    goto LABEL_7; /*0x743a80*/
  v10 = StreamClass::Set2(&v37, &this->ptr_4); /*0x743a87*/
  if ( v10 < 0 && v10 != -2147467262 ) /*0x743a95*/
    sub_7DC720(v10); /*0x743a98*/
  if ( !*(unsigned int *)v37.m_Position ) /*0x743aa3*/
  LABEL_7:
    sub_7DC720(-2147467261); /*0x743aaa*/
  (*(void (__stdcall **)(unsigned int, unsigned int *))(**(unsigned int **)v37.m_Position + 12))(*(unsigned int *)v37.m_Position, v46); /*0x743abb*/
  if ( !memcmp(v46, &g_CLSID_HoverLocomotion, 0x10u) ) /*0x743ad0*/
    goto LABEL_66; /*0x743ad0*/
  if ( !MissionClass::GetMissionControlthis->objectTypeFlags && !(((unsigned char *)&(a2))[4]) ) /*0x743aea*/
  {
    result = *(unsigned int *)v37.m_Position; /*0x743aec*/
    if ( *(unsigned int *)v37.m_Position ) /*0x743af2*/
      return (*(int (__stdcall **)(unsigned int))(**(unsigned int **)v37.m_Position + 8))(*(unsigned int *)v37.m_Position); /*0x743af2*/
    return result; /*0x743af2*/
  }
  if ( (uint8_t)TimerClass::Active((int)(&this->firepowerMultiplier_d4)) ) /*0x743b10*/
    goto LABEL_66; /*0x743b17*/
  if ( this->FootClass_field_5A4 && !(unsigned char)a3 ) /*0x743b2d*/
  {
    result = *(unsigned int *)v37.m_Position; /*0x743b2f*/
    if ( *(unsigned int *)v37.m_Position ) /*0x743b35*/
      return (*(int (__stdcall **)(unsigned int))(**(unsigned int **)v37.m_Position + 8))(*(unsigned int *)v37.m_Position); /*0x743b35*/
    return result; /*0x743b35*/
  }
  if ( this->airstrikeTintTimer || this->Deploying || this->Undeploying ) /*0x743b67*/
  {
    result = *(unsigned int *)v37.m_Position; /*0x74408e*/
    if ( *(unsigned int *)v37.m_Position ) /*0x744094*/
      return (*(int (__stdcall **)(unsigned int))(**(unsigned int **)v37.m_Position + 8))(*(unsigned int *)v37.m_Position); /*0x744094*/
    return result; /*0x744094*/
  }
  if ( !*(unsigned int *)v9 ) /*0x743b75*/
    sub_7DC720(-2147467261); /*0x743b7f*/
  if ( !(*(uint8_t (__stdcall **)(unsigned int))(*this->UnitClass_field_int_6D4)(*(unsigned int *)v9) ) /*0x743b89*/
  {
    result = *(unsigned int *)v37.m_Position; /*0x743b90*/
    if ( *(unsigned int *)v37.m_Position ) /*0x743b96*/
      return (*(int (__stdcall **)(unsigned int))(**(unsigned int **)v37.m_Position + 8))(*(unsigned int *)v37.m_Position); /*0x743b96*/
    return result; /*0x743b96*/
  }
  _ESI = (*((unsigned int *)&(a2))); /*0x743bac*/
  if ( *(unsigned int *)(*((unsigned int *)&(a2))) == dword_B1CFE8 /*0x743bda*/
    && *(unsigned int *)((*((unsigned int *)&(a2))) + 4) == dword_B1CFEC
    && *(unsigned int *)((*((unsigned int *)&(a2))) + 8) == dword_B1CFF0 )
  {
    (*(((unsigned int *)&(a2)) + 1)) = 0; /*0x743be6*/
    v12 = (unsigned int *)(*(int (__thiscall **)(Class_7F5C70 *, unsigned char *, unsigned int))(*&this->ptr_4))(this, v44, 0); /*0x743bff*/
    (*((unsigned short *)&(a3))) = *v12 / 256; /*0x743c16*/
    v13 = this->onBridge; /*0x743c25*/
    (*(((unsigned short *)&(a3)) + 1)) = v12[1] / 256; /*0x743c30*/
    v38 = a3; /*0x743c3d*/
    (*((unsigned int *)&(a2))) = *LayerClass::Pathfinding_Find( /*0x743c79*/
                     (Type *)&dword_87F7E8,
                     (int)&v37.StreamClass_field_0C,
                     &v37.StreamClass_field_0C,
                     (int16_t *)&v38,
                     *(unsigned int *)&this->Type->SpeedType,
                     -1,
                     0,
                     v13,
                     1,
                     1,
                     0,
                     1,
                     0,
                     1,
                     (int16_t *)&a2 + 2,
                     0,
                     0);
    if ( (*((unsigned int *)&(a2))) != g_UnitSelectionState ) /*0x743c7d*/
    {
      v14 = *(unsigned int *)this; /*0x743c91*/
      v15 = ((CellCoord *)&dword_87F7E8)->To_CellObj((int16_t *)&a2); /*0x743c9b*/
      goto LABEL_65; /*0x743c9b*/
    }
    goto LABEL_66; /*0x743c7d*/
  }
  if ( MissionClass::GetMissionControlthis->referenceCount ) /*0x743ca7*/
  {
    result = *(unsigned int *)v37.m_Position; /*0x743cae*/
    if ( *(unsigned int *)v37.m_Position ) /*0x743cb4*/
      return (*(int (__stdcall **)(unsigned int))(**(unsigned int **)v37.m_Position + 8))(*(unsigned int *)v37.m_Position); /*0x743cb4*/
    return result; /*0x743cb4*/
  }
  if ( (*(int (__thiscall **)(Class_7F5C70 *))(*&this->ptr_4))(this) == 1 && this->Unloading /*0x743d33*/
    || this->FootClass_field_5A4 && (!(unsigned char)a3 || this->FootClass_field_bool_6AF)
    || this->target && !(((unsigned char *)&(a2))[4]) && Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 1, 4) != 1 )
  {
    goto LABEL_66; /*0x743d33*/
  }
  a3 = *(unsigned int **)_ESI; /*0x743d43*/
  if ( a3 == (unsigned int *)dword_B1CFE8 /*0x743d60*/
    && *(unsigned int *)(_ESI + 4) == dword_B1CFEC
    && *(unsigned int *)(_ESI + 8) == dword_B1CFF0 )
  {
    v18 = ((unsigned int)((*ProgressTimer::GetValue(&this->ptr_4, &v39) >> 12) + 1) >> 1) & 7; /*0x743dfc*/
    v17 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2) + v18 - 1; /*0x743e04*/
  }
  else
  {
    v41 = this->location; /*0x743d70*/
    __asm { fild [esp+68h+var_28] } /*0x743d74*/
    v42 = this->locationY; /*0x743d7b*/
    __asm { fisub [esp+68h+arg_8] } /*0x743d7f*/
    v43 = this->locationZ; /*0x743d86*/
    __asm /*0x743d8a*/
    {
      fstp [esp+68h+var_60]; double
      fild dword ptr [esi+4]
      fisub [esp+68h+var_24]
      fstp [esp+68h+var_6C+4]; double
    }
    Math::CalcAngle(v35, v36); /*0x743d98*/
    __asm { fsub ds:dbl_7E2820 } /*0x743d9d*/
    __asm { fmul ds:dbl_7E2818 }
    (*((unsigned short *)&(a3))) = Math::RoundToInt(v5); /*0x743dba*/
    v16 = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x743dc5*/
    v17 = v16 + ((((unsigned int)a3 >> 12) + 1) >> 1) - 1; /*0x743dd4*/
  }
  v19 = *(unsigned int *)this; /*0x743e08*/
  v20 = v17 & 7; /*0x743e0f*/
  v37.v20 = v20; /*0x743e16*/
  a2 = 0.0; /*0x743e1a*/
  v21 = (unsigned int *)v19->vt_slot_76(this, v44, 0); /*0x743e2e*/
  (*((unsigned short *)&(a3))) = *v21 / 256; /*0x743e41*/
  (*(((unsigned short *)&(a3)) + 1)) = v21[1] / 256; /*0x743e59*/
  v37.m_Data = (int)a3; /*0x743e62*/
  v22 = (char *)((CellCoord *)&dword_87F7E8)->To_CellObj((int16_t *)&v37.m_Data); /*0x743e71*/
  v23 = v22[283] + (*(uint8_t (__thiscall **)(Class_7F5C70 *, unsigned int))(this->missionStatus)(this, 0) != 0
      ? 4
      : 0;
  (*(void (__thiscall **)(Class_7F5C70 *, unsigned char *, unsigned int))(*&this->ptr_4))(this, v44, 0); /*0x743ea1*/
  v24 = v23 * dword_B1D0B8; /*0x743ea9*/
  v25 = 0; /*0x743eac*/
  v24 = v24; /*0x743eae*/
  v38 = 0; /*0x743eb2*/
  while ( 1 ) /*0x743ec3*/
  {
    v26 = ((unsigned char)v20 + v25) & 7; /*0x743ec3*/
    v27 = v26 & 7; /*0x743ec8*/
    v28 = (*(((unsigned short *)&(dword_89F688[v27])) + 1)); /*0x743eda*/
    (*((unsigned short *)&(v37.StreamClass_field_0C))) = (*((unsigned short *)&(dword_89F688[v27]))) + (*((unsigned short *)&(v37.m_Data))); /*0x743ee2*/
    (*(((unsigned short *)&(v37.StreamClass_field_0C)) + 1)) = (*(((unsigned short *)&(v37.m_Data)) + 1)) + v28; /*0x743ef1*/
    a3 = (unsigned int *)v37.StreamClass_field_0C; /*0x743efa*/
    v29 = ((CellCoord *)&dword_87F7E8)->To_CellObj((int16_t *)&a3); /*0x743f08*/
    if ( !(uint8_t)((LayerClass *)&dword_87F7E8)->IsWithinUsableArea( (int16_t *)&a3, 1) ) /*0x743f16*/
      goto LABEL_56; /*0x743f16*/
    v30 = *(unsigned int *)this; /*0x743f23*/
    LandHeight = ObjectClass::GetLandHeight((ObjectClass *)this); /*0x743f2c*/
    if ( v30->vt_slot_428(/*0x743f36*/
           this, v29, v26, LandHeight, 0, 1) )
    {
      goto LABEL_56; /*0x743f3e*/
    }
    v32 = g_UnitSelectionState; /*0x743f53*/
    if ( (*((unsigned int *)&(a2))) == g_UnitSelectionState ) /*0x743f5a*/
      (*((unsigned int *)&(a2))) = a3; /*0x743f63*/
    if ( !g_UnitSelectionState ) /*0x743f6a*/
      break; /*0x743f6a*/
  LABEL_57:
    v25 = (unsigned char)v38 + 1; /*0x743ff9*/
    v38 = (unsigned int *)((char *)v38 + 1); /*0x744001*/
    if ( (int)v38 >= 8 ) /*0x744005*/
      goto LABEL_60; /*0x744005*/
    (*((unsigned char *)&(v20))) = v37.v20; /*0x743eb8*/
  }
  v42 = ((*((signed short *)(((unsigned char *)&(a3)) + 2))) << 8) + 128; /*0x743f94*/
  v41 = ((int16_t)a3 << 8) + 128; /*0x743fa0*/
  v43 = v24; /*0x743fac*/
  v33 = (unsigned int **)Terrain::ClimbCheck(&v40, &v41); /*0x743fb8*/
  if ( a3 != *v33 || (*((unsigned int *)((CellCoord *)&dword_87F7E8)->To_CellObj((int16_t *)&a3) + 80) & 0x100) != 0 ) /*0x743fea*/
  {
  LABEL_56:
    v32 = g_UnitSelectionState; /*0x743fec*/
    goto LABEL_57; /*0x743ff2*/
  }
  (*(((unsigned int *)&(a2)) + 1)) = a3; /*0x744018*/
  v32 = g_UnitSelectionState; /*0x74401c*/
  LABEL_60:
  v34 = (((unsigned short *)&(a2))[2]); /*0x744022*/
  v37.m_Position = (*(((unsigned int *)&(a2)) + 1)); /*0x744029*/
  if ( (((unsigned short *)&(a2))[2]) != (unsigned short)v32 ) /*0x74402d*/
    goto LABEL_64; /*0x74402d*/
  if ( (*(((unsigned short *)&(a2)) + 1)) == (*(((unsigned short *)&(v32)) + 1)) ) /*0x744034*/
  {
    v34 = (*((unsigned short *)&(a2))); /*0x744036*/
    v37.m_Position = (*((unsigned int *)&(a2))); /*0x74403a*/
  }
  if ( (((unsigned int)(unsigned short)(v34)) | ((unsigned int)(unsigned short)((*(((unsigned short *)&(v37.m_Position)) + 1))) << 16)) != v32 ) /*0x744041*/
  {
  LABEL_64:
    (*(void (__thiscall **)(Class_7F5C70 *, int, unsigned int))(*&this->ptr_4))(this, 2, 0); /*0x744053*/
    v14 = *(unsigned int *)this; /*0x744059*/
    v15 = ((CellCoord *)&dword_87F7E8)->To_CellObj((int16_t *)&v37.m_Position); /*0x744068*/
  LABEL_65:
    v14->vt_slot_1152(this, v15, 1); /*0x74406d*/
  }
  LABEL_66:
  result = *(unsigned int *)v37.m_Position; /*0x744076*/
  if ( *(unsigned int *)v37.m_Position ) /*0x74407c*/
    return (*(int (__stdcall **)(unsigned int))(**(unsigned int **)v37.m_Position + 8))(*(unsigned int *)v37.m_Position); /*0x744096*/
  return result; /*0x743afe*/
}
// 0x458a00
int UnitClass::IsCellBlockedByBridge(void* aP1)
{
  unsigned int *v2; // edi
  int result; // eax
  int v5; // edi

  v2 = aP1; /*0x458a02*/
  result = (int)Cell::IsBridge((Cell *)aP1); /*0x458a0a*/
  if ( (UnitClass *)result == this ) /*0x458a11*/
  {
    result = this->planningPathIdx; /*0x458a1a*/
    if ( result->u32_1620 == -1 ) /*0x458a27*/
    {
      (*((unsigned char *)&(result))) = 1; /*0x458a2a*/
    }
    else if ( result->u8_16AB && (result = (int)this->bunkerLinkedUnit) != 0 ) /*0x458a42*/
    {
      (*((unsigned char *)&(result))) = 1; /*0x458a45*/
    }
    else
    {
      v5 = v2->q048; /*0x458a51*/
      result = *(int16_t *)(*((int (__thiscall **)(UnitClass *, unsigned int **))this->ptr_0 + 110))(this, &aP1); /*0x458a64*/
      (*((unsigned char *)&(result))) = result + *(unsigned int *)(this->planningPathIdx + 5664) > v5; /*0x458a72*/
    }
  }
  else
  {
    (*((unsigned char *)&(result))) = 0; /*0x458a14*/
  }
  return result; /*0x458a13*/
}
// 0x4d03d0
int UnitClass::CompareCoordinateMagnitude(short* a2)
{
  int result; // eax

  result = abs16((int16_t)this->ptr_0); /*0x4d03e7*/
  (*((unsigned char *)&(result))) = result >= abs16(*a2); /*0x4d03ef*/
  return result; /*0x4d03eb*/
}
// IDA: 0x7178B0 (processEnterTarget, 14B)
// 0x7178b0
int UnitClass::processEnterTarget(int a2)
{
  return this->ToolTipText[a2 + 75]; /*0x7178bb*/
}
// 0x7468c0
int UnitClass::CheckForNearbyEnemies()
{
  int v2; // ecx
  int v3; // ebp
  Cell *v4; // eax
  int v5; // edi
  int v6; // eax
  WTFMode *v7; // eax
  unsigned int *ObjectByType; // eax
  int v9; // edx
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  ObjectTypeClass *v13; // eax
  void (__thiscall **ptr_0)(UnitClass *); // edx
  int result; // eax
  int v16; // ecx
  bool v17; // [esp+Dh] [ebp-19h]
  int v18; // [esp+Eh] [ebp-18h]
  int16_t v19[2]; // [esp+12h] [ebp-14h] BYREF
  char v20[8]; // [esp+16h] [ebp-10h] BYREF
  int v21; // [esp+1Eh] [ebp-8h]

  v17 = 0; /*0x7468c6*/
  if ( !(*((uint8_t (__thiscall **)(UnitClass *))this->ptr_0 + 49))(this) ) /*0x7468cd*/
  {
    if ( !this->locomotor[0] ) /*0x7468d7*/
      sub_7DC720(-2147467261); /*0x7468e6*/
    if ( !this->GetVtable3(this->locomotor[0]) /*0x746901*/
      && (this->u8_6C6) )
    {
      v17 = Team::GetMember((Team *)this, 0) == 0; /*0x746918*/
    }
  }
  if ( !this->locomotor[0] ) /*0x74691d*/
    sub_7DC720(-2147467261); /*0x74692c*/
  if ( (*(uint8_t (__stdcall **)(int))(*(unsigned int *)this->locomotor[0] + 16))(this->locomotor[0]) ) /*0x74693d*/
  {
  LABEL_30:
    (*((void (__thiscall **)(UnitClass *))this->ptr_0 + 284))(this); /*0x746aff*/
    goto LABEL_25; /*0x746b09*/
  }
  v2 = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416]; /*0x746948*/
  if ( *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] % 8 ) /*0x74695c*/
  {
    v3 = *(unsigned int *)(*((int (__thiscall **)(UnitClass *, char *))this->ptr_0 + 110))(this, v20); /*0x746972*/
    v4 = (Cell *)(*((int (__thiscall **)(UnitClass *))this->ptr_0 + 111))(this); /*0x74697c*/
    v20[0] = Cell::IsInRange(v4); /*0x74698e*/
    v5 = 0; /*0x746992*/
    while ( 1 ) /*0x746996*/
    {
      v6 = v5 & 7; /*0x746996*/
      (*((unsigned short *)&(v18))) = v3 + (*((unsigned short *)&(g_DDrawSurfaceManager.scenario[v6 + 82]))); /*0x7469b3*/
      (*(((unsigned short *)&(v18)) + 1)) = (*(((unsigned short *)&(v3)) + 1)) + (*(((unsigned short *)&(g_DDrawSurfaceManager.scenario[v6 + 82])) + 1)); /*0x7469bf*/
      *(unsigned int *)v19 = v18; /*0x7469ce*/
      v7 = (WTFMode *)((CellCoord *)&DataGlobal_87F7E8)->To_CellObj(v19); /*0x7469d2*/
      ObjectByType = WTFMode::FindObjectByType(v7, v20[0]); /*0x7469de*/
      if ( ObjectByType ) /*0x7469e5*/
      {
        if ( !(uint8_t)Object::IsAlliedWithObjectHouse((Object *)this->owner, (int)ObjectByType) ) /*0x7469ee*/
          break; /*0x7469ee*/
      }
      if ( ++v5 >= 8 ) /*0x7469ff*/
      {
        v2 = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416]; /*0x746a01*/
        goto LABEL_16; /*0x746a01*/
      }
    }
    v16 = *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 4116); /*0x746aed*/
    this->infantryBlinkTimer[0] = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416]; /*0x746af3*/
    this->infantryBlinkTimer[1] = v21; /*0x746af9*/
    this->infantryBlinkTimer[2] = v16; /*0x746afc*/
    goto LABEL_30; /*0x746afc*/
  }
  LABEL_16:
  if ( !v17 ) /*0x746a0d*/
    goto LABEL_25; /*0x746a0d*/
  v9 = this->infantryBlinkTimer[0]; /*0x746a13*/
  v10 = this->infantryBlinkTimer[2]; /*0x746a19*/
  if ( v9 == -1 ) /*0x746a22*/
    goto LABEL_20; /*0x746a22*/
  v11 = v2 - v9; /*0x746a24*/
  if ( v11 < v10 ) /*0x746a28*/
  {
    v10 -= v11; /*0x746a2a*/
  LABEL_20:
    if ( v10 ) /*0x746a2e*/
      goto LABEL_25; /*0x746a2e*/
  }
  v12 = Random::Range( /*0x746a30*/
          (Random *)&dword_A8B230[14].NeedsSaveOrLink,
          0,
          *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 4104) - 1);
  if ( v12 >= *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 4104) - 1 ) /*0x746a5f*/
    v12 = *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 4104) - 1; /*0x746a61*/
  v13 = *(ObjectTypeClass **)(*(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 4092) + 4 * v12); /*0x746a69*/
  if ( v13 ) /*0x746a6e*/
  {
    ptr_0 = (void (__thiscall **)(UnitClass *))this->ptr_0; /*0x746a70*/
    this->disguiseAsType = v13; /*0x746a72*/
    this->disguisedAsHouse = 0; /*0x746a78*/
    this->isDisguisedFlag = 1; /*0x746a82*/
    this->disguiseCreationFrame = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416]; /*0x746a90*/
    ptr_0[295](this); /*0x746a96*/
  }
  LABEL_25:
  result = (int)this->mindControlRingAnim; /*0x746a9c*/
  if ( result ) /*0x746aa7*/
  {
    if ( !(*((uint8_t (__thiscall **)(UnitClass *))this->ptr_0 + 49))(this) /*0x746abd*/
      || (uint8_t)House::IsHumanPlayer((House *)this->owner) )
    {
      this->mindControlRingAnim->__pad_194[9] = 0; /*0x746b13*/
      return 0; /*0x746b11*/
    }
    else
    {
      this->mindControlRingAnim->__pad_194[9] = 1; /*0x746ad2*/
      return 1; /*0x746acc*/
    }
  }
  return result; /*0x746ad1*/
}
/* ASM:
sub     esp, 1Ch
push    esi
mov     esi, ecx
mov     byte ptr [esp+20h+var_1C+3], 0
mov     eax, [esi]
call    dword ptr [eax+0C4h]
test    al, al
jnz     short loc_74691D
mov     eax, [esi+674h]
test    eax, eax
jnz     short loc_7468EB
push    80004003h
call    sub_7DC720
; ---------------------------------------------------------------------------

loc_7468EB:                             ; CODE XREF: UnitClass__CheckForNearbyEnemies+1F↑j
mov     eax, [esi+674h]
push    eax
mov     ecx, [eax]
call    dword ptr [ecx+10h]
test    al, al
jnz     short loc_74691D
mov     edx, [esi+6C4h]
mov     al, [edx+0D32h]
test    al, al
jz      short loc_74691D
push    0
mov     ecx, esi
call    Team__GetMember
test    eax, eax
jnz     short loc_74691D
mov     byte ptr [esp+20h+var_1C+3], 1

loc_74691D:                             ; CODE XREF: UnitClass__CheckForNearbyEnemies+15↑j
; UnitClass__CheckForNearbyEnemies+39↑j ...
mov     eax, [esi+674h]
test    eax, eax
jnz     short loc_746931
push    80004003h
call    sub_7DC720
; ---------------------------------------------------------------------------

loc_746931:                             ; CODE XREF: UnitClass__CheckForNearbyEnemies+65↑j
mov     eax, [esi+674h]
push    ebx
push    ebp
push    edi
mov     ecx, [eax]
push    eax
call    dword ptr [ecx+10h]
test    al, al
jnz     loc_746AFF
mov     ecx, dword_A8ED54+30h
mov     edx, ecx
and     edx, 80000007h
jns     short loc_74695D
dec     edx
or      edx, 0FFFFFFF8h
inc     edx

loc_74695D:                             ; CODE XREF: UnitClass__CheckForNearbyEnemies+96↑j
jz      loc_746A07
mov     eax, [esi]
lea     ecx, [esp+2Ch+var_10]
push    ecx
mov     ecx, esi
call    dword ptr [eax+1B8h]
mov     ebp, [eax]
mov     edx, [esi]
mov     ecx, esi
mov     dword ptr [esp+2Ch+var_18], ebp
call    dword ptr [edx+1BCh]
mov     ecx, eax
call    Cell__IsInRange
mov     bx, [esp+2Ch+var_16]
mov     byte ptr [esp+2Ch+var_10], al
xor     edi, edi

loc_746994:                             ; CODE XREF: UnitClass__CheckForNearbyEnemies+13F↓j
mov     eax, edi
and     eax, 7
mov     cx, ds:89F688h[eax*4]
mov     dx, ds:89F68Ah[eax*4]
lea     eax, ds:89F688h[eax*4]
add     cx, bp
mov     word ptr [esp+2Ch+var_18], cx
add     dx, bx
lea     ecx, [esp+2Ch+var_14]
mov     [esp+2Ch+var_16], dx
mov     eax, dword ptr [esp+2Ch+var_18]
push    ecx
mov     ecx, 87F7E8h
mov     [esp+30h+var_14], eax
call    CellCoord__To_CellObj
mov     edx, [esp+2Ch+var_10]
mov     ecx, eax
push    edx
call    WTFMode__FindObjectByType
test    eax, eax
jz      short loc_7469FB
mov     ecx, [esi+21Ch]
push    eax
call    Object__IsAlliedWithObjectHouse
test    al, al
jz      loc_746ADC

loc_7469FB:                             ; CODE XREF: UnitClass__CheckForNearbyEnemies+125↑j
inc     edi
cmp     edi, 8
jl      short loc_746994
mov     ecx, dword_A8ED54+30h

loc_746A07:                             ; CODE XREF: UnitClass__CheckForNearbyEnemies:loc_74695D↑j
mov     al, byte ptr [esp+2Ch+var_1C+3]
test    al, al
jz      loc_746A9C
mov     edx, [esi+1E0h]
mov     eax, [esi+1E8h]
cmp     edx, 0FFFFFFFFh
jz      short loc_746A2C
sub     ecx, edx
cmp     ecx, eax
jge     short loc_746A30
sub     eax, ecx

loc_746A2C:                             ; CODE XREF: UnitClass__CheckForNearbyEnemies+162↑j
test    eax, eax
jnz     short loc_746A9C

loc_746A30:                             ; CODE XREF: UnitClass__CheckForNearbyEnemies+168↑j
mov     eax, ds:8871E0h
mov     ecx, ds:0A8B230h
add     ecx, 218h
mov     eax, [eax+1008h]
dec     eax
push    eax
push    0
call    Random__Range
mov     edx, ds:8871E0h
mov     ecx, [edx+1008h]
dec     ecx
cmp     eax, ecx
jl      short loc_746A63
mov     eax, ecx

loc_746A63:                             ; CODE XREF: UnitClass__CheckForNearbyEnemies+19F↑j
mov     edx, [edx+0FFCh]
mov     eax, [edx+eax*4]
test    eax, eax
jz      short loc_746A9C
mov     edx, [esi]
mov     [esi+518h], eax
mov     dword ptr [esi+51Ch], 0
mov     byte ptr [esi+1D8h], 1
mov     eax, dword_A8ED54+30h
mov     ecx, esi
mov     [esi+1DCh], eax
call    dword ptr [edx+49Ch]

loc_746A9C:                             ; CODE XREF: UnitClass__CheckForNearbyEnemies+14D↑j
; UnitClass__CheckForNearbyEnemies+16E↑j ...
mov     eax, [esi+2C8h]
pop     edi
pop     ebp
pop     ebx
test    eax, eax
jz      short loc_746B19
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+0C4h]
test    al, al
jz      short loc_746B0B
mov     ecx, [esi+21Ch] ; this
call    House__IsHumanPlayer
test    al, al
jnz     short loc_746B0B
mov     ecx, [esi+2C8h]
mov     eax, 1
pop     esi
mov     [ecx+19Dh], al
add     esp, 1Ch
retn
; ---------------------------------------------------------------------------

loc_746ADC:                             ; CODE XREF: UnitClass__CheckForNearbyEnemies+135↑j
mov     ecx, ds:8871E0h
mov     eax, dword_A8ED54+30h
lea     edx, [esi+1E0h]
mov     ecx, [ecx+1014h]
mov     [edx], eax
mov     eax, [esp+2Ch+var_8]
mov     [edx+4], eax
mov     [edx+8], ecx

loc_746AFF:                             ; CODE XREF: UnitClass__CheckForNearbyEnemies+82↑j
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+470h]
jmp     short loc_746A9C
; ---------------------------------------------------------------------------

loc_746B0B:                             ; CODE XREF: UnitClass__CheckForNearbyEnemies+1F5↑j
; UnitClass__CheckForNearbyEnemies+204↑j
mov     ecx, [esi+2C8h]
xor     eax, eax
mov     [ecx+19Dh], al

loc_746B19:                             ; CODE XREF: UnitClass__CheckForNearbyEnemies+1E7↑j
pop     esi
add     esp, 1Ch
retn
*/

// 0x737c90
int UnitClass::OnUnderAttack(ObjectClass* attacker, int damage, int weaponIdx, CellStruct* sourceCell, int a8, bool a9, void* a10)
{
  int *v10; // ebp
  double v11; // st7
  unsigned int *v14; // edi
  CellClass *v15; // eax
  int result; // eax
  unsigned char *v17; // ebx
  Class_7F5C70 *v18; // edi
  BuildingClass *v19; // eax
  int v21; // edx
  int v23; // edx
  AnimClass *v24; // eax
  AnimClass *v25; // eax
  int v26; // edx
  int v27; // ebp
  Class_7F5C70 *v28; // edi
  Class_7F5C70 *v29; // eax
  int v30; // ebx
  CellClass *v31; // eax
  int v32; // eax
  bool v33; // bl
  int v34; // ecx
  int v35; // eax
  int v36; // edx
  int v37; // eax
  int v38; // edx
  char v39; // al
  int *v40; // eax
  unsigned int *Value; // eax
  int *v42; // ecx
  int v43; // eax
  int v46; // eax
  int v47; // eax
  int v48; // edi
  int v49; // eax
  ObjectClass *v50; // edi
  int v51; // edx
  TechnoClass *v52; // ecx
  int v53; // eax
  int v54; // eax
  int16_t *v55; // eax
  int *v56; // eax
  unsigned int *v57; // eax
  int v58; // eax
  int v61; // eax
  int v62; // edi
  int v63; // ebp
  int v64; // [esp+2Ah] [ebp-4Ch]
  int *v65; // [esp+32h] [ebp-44h]
  char v66; // [esp+36h] [ebp-40h]
  int64_t v67; // [esp+3Ah] [ebp-3Ch]
  char v68; // [esp+45h] [ebp-31h]
  int v69; // [esp+46h] [ebp-30h] BYREF
  int v70; // [esp+4Ah] [ebp-2Ch] BYREF
  Class_7F5C70 *v71; // [esp+4Eh] [ebp-28h]
  int v72; // [esp+52h] [ebp-24h] BYREF
  int v73; // [esp+56h] [ebp-20h]
  int v74; // [esp+5Ah] [ebp-1Ch]
  int v75; // [esp+62h] [ebp-14h] BYREF
  unsigned char v76[4]; // [esp+6Ah] [ebp-Ch] BYREF
  int v77; // [esp+6Eh] [ebp-8h] BYREF

  if ( !this->isSelected || (v68 = 1, !(uint8_t)House::IsHumanPlayer(this->ptr_4))) ) /*0x737ca8*/
    v68 = 0; /*0x737cb6*/
  a5 = a5; /*0x737cbb*/
  if ( !(unsigned char)a5 ) /*0x737cc1*/
  {
    v14 = (unsigned int *)Team::GetMember((Team *)this, 0); /*0x737ccc*/
    if ( v14 ) /*0x737cd0*/
    {
      if ( v14->ReturnZeroPos() == 6 ) /*0x737cdc*/
      {
        if ( v14->q520->WeaponsFactory ) /*0x737ce4*/
        {
          v69 = this->location; /*0x737cfa*/
          v70 = this->locationY; /*0x737d06*/
          v71 = (Class_7F5C70 *)this->tiltForwardsRate; /*0x737d12*/
          v15 = ((Coord *)&dword_87F7E8)->To_Cell( &v69); /*0x737d16*/
          if ( Cell::IsBridge((Cell *)v15) == v14 ) /*0x737d24*/
            return 0; /*0x737d2e*/
        }
      }
    }
  }
  v64 = (int)a5; /*0x737d47*/
  v17 = (unsigned char *)(*(((unsigned int *)&(a4)) + 1)); /*0x737d48*/
  result = FootClass::ProcessDeploy( /*0x737d52*/
             (FootClass *)this,
             a2,
             COERCE_DOUBLE((((unsigned long)(unsigned int)((unsigned int)Member)) | ((unsigned long)(unsigned int)((*((unsigned int *)&(a4)))) << 32))),
             (int *)(*(((unsigned int *)&(a4)) + 1)),
             v64,
             a6,
             (void *)result,
             v66,
             v67);
  result = result; /*0x737d5a*/
  if ( result != 5 )
  {
    v65 = v10; /*0x737d6c*/
    if ( result != 4 ) /*0x737d6d*/
    {
      if ( result ) /*0x7384bb*/
      {
        if ( this->Type->Harvester_2 ) /*0x7384c3*/
        {
          if ( this->ptr_4) == dword_A83D4C ) /*0x7384da*/
          {
            v57 = (unsigned int *)(*(int (__thiscall **)(Class_7F5C70 *, unsigned char *, unsigned int))(*&this->ptr_4))( /*0x7384e7*/
                              this,
                              v76,
                              0);
            (*((unsigned short *)&(a5))) = *v57 / 256; /*0x7384fa*/
            (*(((unsigned short *)&(a5)) + 1)) = v57[1] / 256; /*0x738513*/
            if ( (uint8_t)CreateTriggerClassIfFarEnough(4, (int)a5, (int)a5) ) /*0x73851d*/
              VoxClass::FindAndPlay((VoxClass *)aEvaOreminerund, -1); /*0x738530*/
          }
        }
      }
      if ( !this->FootClass_field_5D4 /*0x738573*/
        && v17
        && !this->voiceHandle
        && !(uint8_t)Object::IsAlliedWithObjectHouse(*((Object **)&this->attachedTag5), (int)v17)
        && !(uint8_t)House::IsCurrentPlayer(*((House **)&this->attachedTag5)) )
      {
        if ( (uint8_t)UnitClass::CanCrushTarget((int)this, v17) ) /*0x738583*/
        {
          (*(void (__thiscall **)(Class_7F5C70 *, unsigned char *, int))(*&this->u32_1CC2))(this, v17, 1); /*0x738593*/
          (*(void (__thiscall **)(Class_7F5C70 *, int, unsigned int))(*&this->ptr_4))(this, 2, 0); /*0x7385a1*/
        }
        v58 = this->Type; /*0x7385b5*/
        if ( (*(unsigned char *)(v58 + 3598) || *(unsigned char *)(v58 + 3599)) /*0x7385df*/
          && (*(int (__thiscall **)(Class_7F5C70 *))(*(unsigned int *)&this->passengers6))(this) > 0 )
        {
          BuildingClass::GetHealthRatio((BuildingClass *)this); /*0x7385e7*/
          _ECX = dword_8871E0; /*0x7385ec*/
          __asm /*0x7385f2*/
          {
            fcomp qword ptr [ecx+1700h]
            fnstsw ax
          }
          if ( (_AX & 0x4100) != 0 ) /*0x7385fd*/
          {
            v61 = this->Type; /*0x7385ff*/
            v62 = 0; /*0x738605*/
            if ( *(int *)(v61 + 1016) > 0 ) /*0x73860f*/
            {
              while ( 1 ) /*0x738629*/
              {
                v63 = (*(int (__thiscall **)(Class_7F5C70 *, unsigned int, unsigned int, unsigned int))(*&this->ptr_4))( /*0x738629*/
                        this,
                        *(unsigned int *)(v61->DeploysInto + 4 * v62),
                        0,
                        0);
                if ( v63 ) /*0x73862d*/
                  break; /*0x73862d*/
                v61 = this->Type; /*0x73862f*/
                if ( ++v62 >= *(unsigned int *)(v61 + 1016) ) /*0x73863c*/
              }
              if ( !(uint8_t)Array::Contains((Array *)this, v63) /*0x73865e*/
                && (*(int (__thiscall **)(Class_7F5C70 *, int, int))(*&this->u32_FC2))(this, 2, v63) == 1 )
              {
                (*(void (__thiscall **)(Class_7F5C70 *, int, unsigned int))(*&this->ptr_4))(this, 7, 0); /*0x738668*/
              }
            }
          }
        }
      }
    }
    v18 = (Class_7F5C70 *)this->turretRecoil; /*0x737d73*/
    if ( v18 )
    {
      v19 = v18->vt_slot_44(this->turretRecoil) == 6
          ? (BuildingClass *)v18
          : 0;
      BuildingClass::UpdateDamageAnim(v19); /*0x737d97*/
    }
    _EAX = this->Type; /*0x737d9c*/
    if ( _EAX->DeathFrames <= 0 ) /*0x737daf*/
    {
      if ( !_EAX->Naval ) /*0x737de2*/
        goto LABEL_25; /*0x737de2*/
      if ( _EAX->qD69 ) /*0x737dec*/
        goto LABEL_25; /*0x737dec*/
      if ( _EAX->DisableShadowCache ) /*0x737df6*/
        goto LABEL_25; /*0x737df6*/
      __asm { fld qword ptr [eax+370h] } /*0x737e00*/
      _EAX = dword_8871E0; /*0x737e06*/
      __asm /*0x737e0b*/
      {
        fcomp qword ptr [eax+630h]
        fnstsw ax
      }
      if ( ((((unsigned char *)&(_EAX))[1]) & 1) != 0 /*0x737e2a*/
        || *(unsigned int *)((*(int (__thiscall **)(Class_7F5C70 *))(*(unsigned int *)&this->suspendedMission4))(this) + 236) != 2
        || this->isWarpingOut )
      {
  LABEL_25:
        this->vt_slot_952(v17); /*0x737e68*/
        if ( (*(int (__thiscall **)(Class_7F5C70 *))(*&this->ptr_4))(this) <= 10 /*0x737ec0*/
          && this->isBomb
          && (v18 = &this->railgunParticles,
              v69 = this->location,
              v70 = this->locationY,
              v71 = (Class_7F5C70 *)this->tiltForwardsRate,
              ((Coord *)&dword_87F7E8)->To_Cell( &v69)->landType == 2) )
        {
          v24 = (AnimClass *)operator new(0x1C8u); /*0x737ecb*/
          if ( v24 ) /*0x737ed5*/
          {
            v69 = *(unsigned int *)v18; /*0x737ee6*/
            v70 = this->locationY; /*0x737eef*/
            v71 = (Class_7F5C70 *)this->tiltForwardsRate; /*0x737efb*/
            AnimClass::ctor(v24, (void *)dword_8871E0->InfantryBrute, &v69, 0, 1, (void *)0x600, 0, 0); /*0x737f0e*/
          }
          v25 = (AnimClass *)operator new(0x1C8u); /*0x737f18*/
          if ( v25 ) /*0x737f22*/
          {
            v26 = *(unsigned int *)v18; /*0x737f24*/
            v27 = this->locationY; /*0x737f26*/
            v28 = (Class_7F5C70 *)this->tiltForwardsRate; /*0x737f29*/
            v69 = v26; /*0x737f30*/
            v18 = v28 + 5; /*0x737f48*/
            v70 = v27; /*0x737f4b*/
            v71 = v18; /*0x737f4f*/
            AnimClass::ctor( /*0x737f66*/
              v25,
              *(void **)(dword_8871E0->Normal[10] + 4 * dword_8871E0->Normal[13] - 4),
              &v69,
              0,
              1,
              (void *)0x600,
              0,
              0);
          }
        }
        else
        {
          TechnoClass::CreateDeathAnim((int *)this, v11); /*0x737f6f*/
        }
      }
      else
      {
        this->vt_slot_952(v17); /*0x737e39*/
        v23 = *(unsigned int *)this; /*0x737e3f*/
        this->health = 1; /*0x737e43*/
        this->isAliveFlag = 1; /*0x737e4a*/
        this->isSinking_d = 1; /*0x737e51*/
        v23->vt_slot_928(this); /*0x737e58*/
      }
    }
    else
    {
      if ( this->DeathFrameCounter == -1 ) /*0x737db8*/
      {
        v21 = *(unsigned int *)this; /*0x737dba*/
        this->DeathFrameCounter = 0; /*0x737dbf*/
        v21->vt_slot_952(this, v17); /*0x737dc9*/
      }
      this->health = 1; /*0x737dcf*/
      this->isAliveFlag = 1; /*0x737dd6*/
    }
    (*(void (__thiscall **)(Class_7F5C70 *, unsigned int))(*&this->ptr_4))(this, 0); /*0x737f7a*/
    if ( *(unsigned char *)&this->Type->OpenTopped ) /*0x737f86*/
      TechnoClass::MarkPassengersAsExited((TechnoClass *)this); /*0x737f92*/
    if ( (*(int (__thiscall **)(Class_7F5C70 *))(*&this->ptr_4))(this) > 208 ) /*0x737fa6*/
      TechnoClass::CleanupAll((TechnoClass *)this, (int)v17); /*0x737fab*/
    if ( !this->Type->Accelerates && this->__pad_118 ) /*0x737fc4*/
    {
      do /*0x7381ae*/
      {
        v29 = (Class_7F5C70 *)FootClass::PopAndProcess((FootClass *)this); /*0x737fd4*/
        v18 = v29; /*0x737fd9*/
        if ( !v29 ) /*0x737fdd*/
          break; /*0x737fdd*/
        v30 = *(unsigned int *)v29; /*0x737fe9*/
        v72 = this->location; /*0x737ff7*/
        v73 = this->locationY; /*0x738003*/
        v74 = this->tiltForwardsRate; /*0x73800a*/
        v31 = ((Coord *)&dword_87F7E8)->To_Cell( &v72); /*0x738013*/
        v32 = v30->vt_slot_428(/*0x73801b*/
                v18, v31, -1, -1, 0, 1, v65);
        v33 = !v32 || v32 == 2; /*0x73802e*/
        ++dword_A8E7AC; /*0x738036*/
        v18[140] = *(&this->attachedBomb0); /*0x738041*/
        v34 = this->location; /*0x73804a*/
        v35 = this->tiltForwardsRate; /*0x73804d*/
        v71 = (Class_7F5C70 *)this->locationY; /*0x738050*/
        v36 = *(unsigned int *)this; /*0x738054*/
        v70 = v34; /*0x738056*/
        v72 = v35; /*0x73805c*/
        v37 = v36->GetCellCoords(this); /*0x738060*/
        v38 = *(unsigned int *)((*(int (__thiscall **)(int, int *))(*(unsigned int *)v37 + 72))(v37, &v75) + 8); /*0x738072*/
        v39 = this->onBridge; /*0x738075*/
        v72 = v38; /*0x73807d*/
        if ( v39 ) /*0x738081*/
        {
          v40 = (int *)(*(int (__thiscall **)(Class_7F5C70 *, int *))(*&this->ptr_4))(this, &v77); /*0x73808c*/
          v70 = *v40; /*0x738091*/
          v71 = (Class_7F5C70 *)v40[1]; /*0x738098*/
          v72 = v40[2]; /*0x73809f*/
        }
        if ( (unsigned char)a6 /*0x7380ec*/
          || this->isBomb
          || !v33
          || (Value = ProgressTimer::GetValue((ProgressTimer *)(&this->idleActionTimer4), (unsigned int *)&a4 + 1),
              !v18->vt_slot_216(&v70, (uint8_t)((unsigned int)((*Value >> 7) + 1) >> 1))) )
        {
          v65 = a5; /*0x73818e*/
          v18->vt_slot_224(); /*0x738191*/
          v18->vt_slot_248(); /*0x73819b*/
        }
        else
        {
          *(unsigned int *)&v18[284] = 0; /*0x7380fa*/
          if ( *(unsigned char *)(this->Type + 1508) && this->owner != *(unsigned int *)&v18[540] ) /*0x738122*/
            v18->vt_slot_968(0); /*0x73812a*/
          v65 = 0; /*0x738132*/
          v18->vt_slot_372(&dword_B1CFE8, 1); /*0x73813d*/
          if ( !(uint8_t)House::IsCurrentPlayer(*(House **)&v18[540]) ) /*0x738149*/
          {
            v42 = (int *)this->FootClass_field_5D4; /*0x738152*/
            if ( v42 ) /*0x73815a*/
              TeamClass::AddMember(v42, (int)v18, 0); /*0x73815f*/
            else
              v18->vt_slot_488(15, 0); /*0x73816e*/
          }
          if ( v68 ) /*0x73817a*/
            v18->vt_slot_332(); /*0x738180*/
        }
        --dword_A8E7AC; /*0x7381a8*/
      }
      while ( this->__pad_118 ); /*0x7381ae*/
    }
    if ( this->grindingAnimHandle != -1 ) /*0x7381c7*/
      goto LABEL_67; /*0x7381c7*/
    if ( (unsigned char)a6 ) /*0x7381cf*/
      goto LABEL_83; /*0x7381cf*/
    v43 = this->Type; /*0x7381d5*/
    if ( !*(unsigned char *)(v43 + 3277) ) /*0x7381db*/
      goto LABEL_83; /*0x7381db*/
    if ( *(unsigned int *)(v43 + 1504) ) /*0x7381e9*/
      goto LABEL_83; /*0x7381e9*/
    _EAX = Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646); /*0x738209*/
    _ECX = dword_8871E0; /*0x73820e*/
    a5 = (int *)_EAX; /*0x738214*/
    __asm /*0x738218*/
    {
      fild [esp+44h+arg_10]
      fmul ds:dbl_7E3570
      fcomp qword ptr [ecx+5C0h]
      fnstsw ax
    }
    if ( (_EAX & 0x100) == 0 ) /*0x73822d*/
      goto LABEL_83; /*0x73822d*/
    if ( this->grindingAnimHandle == -1 ) /*0x738239*/
    {
      v48 = (*(int (__thiscall **)(Class_7F5C70 *))(*&this->ptr_4))(this); /*0x738273*/
      if ( !v48 ) /*0x738277*/
        goto LABEL_83; /*0x738277*/
      v49 = operator new(0x6F0u); /*0x738282*/
      if ( !v49 ) /*0x73828c*/
        goto LABEL_83; /*0x73828c*/
      v47 = InfantryClass::Construct(v49, v48, v48, this->ptr_4)); /*0x73829c*/
    }
    else
    {
  LABEL_67:
      v46 = operator new(0x6F0u); /*0x738240*/
      if ( !v46 ) /*0x73824a*/
        goto LABEL_83; /*0x73824a*/
      v47 = InfantryClass::Construct( /*0x738267*/
              v46,
              (int)v18,
              *((unsigned int *)dword_A8E34C + this->grindingAnimHandle),
              *((IUnknown **)&this->attachedTag5));
    }
    v50 = (ObjectClass *)v47; /*0x7382a1*/
    if ( v47 ) /*0x7382a5*/
    {
      *&v47->onBridge = *(&this->attachedBomb0); /*0x7382b7*/
      v72 = this->location; /*0x7382c1*/
      v73 = this->locationY; /*0x7382ca*/
      v51 = *(unsigned int *)v47; /*0x7382ce*/
      v74 = this->tiltForwardsRate; /*0x7382d3*/
      if ( (*(uint8_t (__thiscall **)(int, int *, unsigned int, int *))(v51 + 216))(v47, &v72, 0, v65) ) /*0x7382dc*/
      {
        v50->health = Random::Range( /*0x73830f*/
                        (Random *)&dword_A8B230[14].NeedsSaveOrLink,
                        5,
                        *(unsigned int *)(v50[10].ptr_0.ptr_8 + 160) / 2);
        v50->COMStub_Return0_93(&dword_B1CFE8, 1, 0); /*0x73831f*/
        if ( (uint8_t)House::IsCurrentPlayer(this->ptr_4)) ) /*0x73832b*/
          v50->vt_slot_488(5); /*0x73834c*/
        else
          v50->vt_slot_488(15); /*0x73833c*/
        if ( v68 ) /*0x738358*/
          v50->HandleSelection(); /*0x73835e*/
        v52 = (TechnoClass *)this->attachedTag; /*0x738364*/
        if ( v52 && (uint8_t)TechnoClass::HasAnyMission(v52) ) /*0x73836b*/
          ObjectClass::SetReference(v50, this->attachedTag); /*0x73837a*/
      }
      else
      {
        v50->CreateInstance_0(1); /*0x738387*/
      }
    }
  LABEL_83:
    v53 = this->Type; /*0x73838a*/
    if ( *(unsigned char *)(v53 + 3610) /*0x7383c6*/
      && ((((unsigned char *)&(dword_A8B230[374].nextArrayIndex))[1]) && !v53->IsTrain
       || (((unsigned char *)&(dword_A8B230[374].ptr_C))[1]) && v53->IsTrain) )
    {
      v54 = *(unsigned int *)this; /*0x7383f5*/
      a5 = 0; /*0x7383fa*/
      v55 = (int16_t *)v54->GetCellCoords_Alt(this, (char *)&a4 + 4); /*0x73840a*/
      v56 = (int *)*LayerClass::Pathfinding_Find( /*0x738423*/
                      (Type *)&dword_87F7E8,
                      (int)&a6,
                      &a6,
                      v55,
                      1,
                      -1,
                      0,
                      0,
                      1,
                      1,
                      1,
                      0,
                      0,
                      1,
                      (int16_t *)&a5,
                      0,
                      0);
      a5 = v56; /*0x73842c*/
      if ( v56 != (int *)g_UnitSelectionState ) /*0x738430*/
      {
        if ( Crates ) /*0x738448*/
          BuildingClass::SearchPlacement((BuildingClass *)&dword_87F7E8, (int)v56, 20); /*0x738452*/
      }
    }
    if ( this->Type->Accelerates ) /*0x73845d*/
    {
      if ( !this->vt_slot_988(0) ) /*0x73846d*/
      {
  LABEL_93:
        (*(void (__thiscall **)(Class_7F5C70 *))(*&this->ptr_4))(this); /*0x73847b*/
      }
    }
    else if ( !this->isSinking_d ) /*0x738493*/
    {
      goto LABEL_93; /*0x73849b*/
    }
  }
  return result; /*0x737d26*/
}
// ============================================================
// Phase 3: Weapon Switching
// ============================================================

// 0x70dc70
int UnitClass::SetTurret(unsigned int a2)
{
  int result; // eax
  UnitClass *v4; // eax

  result = (*((int (__thiscall **)(UnitClass *))this->ptr_0 + 33))(this); /*0x70dc76*/
  if ( !result->u8_810 ) /*0x70dc7c*/
  {
    v4 = (UnitClass *)(*((int (__thiscall **)(UnitClass *))this->ptr_0 + 33))(this); /*0x70dc98*/
    if ( a2 > 0x11 ) /*0x70dc8c*/
    {
      result = UnitClass::processEnterTarget(v4, 0); /*0x70dcc4*/
      this->currentTurretNumber = result; /*0x70dcc9*/
      this->currentWeaponSlot = 0; /*0x70dccf*/
    }
    else
    {
      result = UnitClass::processEnterTarget(v4, a2); /*0x70dca0*/
      this->currentWeaponSlot = a2; /*0x70dca5*/
      this->currentTurretNumber = result; /*0x70dcab*/
    }
  }
  return result; /*0x70dcb1*/
}
// 0x73f0a0
int UnitClass::EvaluateTarget(int a2, int a3, int a4, int a5, char a6)
{
    double v7; // st7
    int64_t v9; // rax
    int v10; // edx
    bool v11; // al
    int Type; // esi
    int v13; // eax
    int v14; // edi
    int v15; // ecx
    int v16; // edx
    int result; // eax
    int v18; // ecx
    int v19; // eax
    int v20; // eax
    InfantryClass *NeighbourContent; // eax
    int v22; // ecx
    int v23; // eax
    InfantryClass *v25; // ecx
    bool v26; // al
    int v27; // ebp
    int v28; // edi
    int v29; // eax
    int v30; // esi
    int v31; // eax
    int v32; // esi
    int v33; // eax
    int v34; // ecx
    unsigned short *v35; // edi
    unsigned short *v36; // eax
    unsigned int *v37; // eax
    int v38; // eax
    unsigned char *v39; // eax
    unsigned char *v40; // eax
    int v41; // ecx
    short v42; // dx
    Cell *v43; // eax
    int v44; // eax
    unsigned int v45; // ebp
    short v46; // cx
    int v47; // eax
    int v48; // edx
    unsigned int v49; // edi
    unsigned int *v50; // edi
    unsigned int *v51; // eax
    int v52; // ecx
    int v53; // edx
    int v54; // eax
    int v55; // ecx
    int v56; // eax
    int v57; // edi
    unsigned int *v60; // eax
    int v61; // eax
    int v62; // eax
    int v63; // eax
    int v64; // eax
    TechnoClass *Building; // eax
    double v66; // [esp+24h] [ebp-A0h]
    double v67; // [esp+2Ch] [ebp-98h]
    double v68; // [esp+2Ch] [ebp-98h]
    bool v69; // [esp+47h] [ebp-7Dh] BYREF
    char v70; // [esp+48h] [ebp-7Ch]
    bool v71; // [esp+49h] [ebp-7Bh]
    char v72; // [esp+4Ah] [ebp-7Ah]
    char v73; // [esp+4Bh] [ebp-79h]
    int v74; // [esp+4Ch] [ebp-78h]
    int v75; // [esp+50h] [ebp-74h]
    int v76; // [esp+54h] [ebp-70h]
    int v77; // [esp+58h] [ebp-6Ch]
    short v78[2]; // [esp+5Ch] [ebp-68h] BYREF
    short v76[2]; // [esp+60h] [ebp-64h] BYREF
    unsigned int v80; // [esp+64h] [ebp-60h]
    unsigned int v81; // [esp+68h] [ebp-5Ch]
    int v82; // [esp+6Ch] [ebp-58h] BYREF
    int v83; // [esp+70h] [ebp-54h] BYREF
    int v84; // [esp+74h] [ebp-50h] BYREF
    int v85; // [esp+78h] [ebp-4Ch] BYREF
    int v87; // [esp+80h] [ebp-44h]
    int v88; // [esp+84h] [ebp-40h]
    int v89; // [esp+88h] [ebp-3Ch]
    int v90; // [esp+8Ch] [ebp-38h]
    int v91; // [esp+90h] [ebp-34h]
    int v93; // [esp+98h] [ebp-2Ch]
    unsigned char v95[12]; // [esp+A0h] [ebp-24h] BYREF
    unsigned char v96[12]; // [esp+ACh] [ebp-18h] BYREF
    unsigned char v97[12]; // [esp+B8h] [ebp-Ch] BYREF

    v69 = (*(unsigned int *)(((unsigned int)(a2)) + 320) & 0x100) != 0 /*0x73f0e1*/
       && (a3 == (InfantryClass *)-1
        || (v9 = (int)a3 - *(char *)(((unsigned int)(a2)) + 283), (int)((((unsigned int)((uint64_t)(v9) >> 32)) ^ v9) - ((unsigned int)((uint64_t)(v9) >> 32))) > 1));
    v10 = *(unsigned int *)(((unsigned int)(a2)) + 84); /*0x73f0f3*/
    v70 = *(unsigned char *)(((unsigned int)(a2)) + 292); /*0x73f0f6*/
    v11 = (*(unsigned int *)(((unsigned int)(a2)) + 292) & 0x20) != 0; /*0x73f103*/
    v75 = v10; /*0x73f105*/
    v71 = v11; /*0x73f109*/
    Type = InfantryClass::GetType((InfantryClass *)((unsigned int)(a2))); /*0x73f112*/
    v13 = this->Type->qDFC; /*0x73f11a*/
    if ( v13 == -1 ) /*0x73f123*/
      goto LABEL_25; /*0x73f123*/
    v14 = *(unsigned int *)(((unsigned int)(a2)) + 236); /*0x73f130*/
    if ( v14 != 10 ) /*0x73f139*/
      goto LABEL_18; /*0x73f139*/
    v15 = *((unsigned int *)dword_A8ED2C + *(unsigned int *)(((unsigned int)(a2)) + 56)); /*0x73f14a*/
    v16 = *(unsigned int *)(v15 + 740); /*0x73f14d*/
    if ( *(uint64_t *)(v15 + 740) == 0x300000005LL || v16 == 4 && *(unsigned int *)(v15 + 744) == 3 ) /*0x73f16d*/
    {
      if ( *(unsigned char *)(((unsigned int)(a2)) + 282) != 2 ) /*0x73f17d*/
        return 7; /*0x73f18e*/
      goto LABEL_18; /*0x73f17d*/
    }
    if ( v16 != 3 || *(unsigned int *)(v15 + 744) != 4 && *(unsigned int *)(v15 + 744) != 5 ) /*0x73f1aa*/
    {
  LABEL_18:
      v18 = ((unsigned int)(a2)); /*0x73f1ce*/
      goto LABEL_19; /*0x73f1ce*/
    }
    v18 = ((unsigned int)(a2)); /*0x73f1ac*/
    if ( *(unsigned char *)(((unsigned int)(a2)) + 282) != 6 ) /*0x73f1ba*/
      return 7; /*0x73f1cb*/
  LABEL_19:
    if ( v14 != v13 && v14 != 10 ) /*0x73f1dc*/
    {
      v19 = v18->u32_44; /*0x73f1de*/
      if ( v19 < 237 || v19 > 238 || a3 == (InfantryClass *)v18->u32_11B ) /*0x73f1fd*/
        return 7; /*0x73f20e*/
    }
  LABEL_25:
    if ( ((unsigned int)((uint64_t)(a2) >> 32)) == 8 ) /*0x73f21b*/
    {
      if ( Type ) /*0x73f21f*/
      {
        *(unsigned int *)v78 = *(unsigned int *)(Type + 40); /*0x73f22b*/
        if ( v78[0] || v78[1] ) /*0x73f236*/
          return 0; /*0x73f236*/
      }
      return 7; /*0x73f236*/
    }
    if ( Type ) /*0x73f24d*/
    {
      v20 = abs32(((unsigned int)((uint64_t)(a2) >> 32)) - *(unsigned int *)(Type + 44)); /*0x73f259*/
      if ( v20 > 2 && v20 < 6 && ((unsigned int)((uint64_t)(a2) >> 32)) != -1 ) /*0x73f268*/
        return 7; /*0x73f279*/
    }
    NeighbourContent = (InfantryClass *)((Cell *)((unsigned int)(a2)))->GetNeighbourContent(((((a2) >> 32) & 0xFF) - 4) & 7); /*0x73f28a*/
    v22 = InfantryClass::GetType(NeighbourContent); /*0x73f296*/
    if ( v22 ) /*0x73f29a*/
    {
      v23 = abs32((((((a2) >> 32) & 0xFF) - 4) & 7) - v22->fallRate); /*0x73f2a6*/
      if ( v23 > 2 && v23 < 6 && ((unsigned int)((uint64_t)(a2) >> 32)) != -1 ) /*0x73f2b5*/
        return 7; /*0x73f2c6*/
    }
    a4 = a4; /*0x73f2c9*/
    result = (*(int (__thiscall **)(Class_7F5C70 *, unsigned int, unsigned int, InfantryClass **, bool *, int))(*&this->ptr_4))( /*0x73f2eb*/
               this,
               ((unsigned int)(a2)),
               ((unsigned int)((uint64_t)(a2) >> 32)),
               &a3,
               &v69,
               a4);
    if ( result != 7 )
    {
      v25 = a3; /*0x73f303*/
      if ( a3 != (InfantryClass *)-1 /*0x73f32a*/
        && (*(unsigned int *)(((unsigned int)(a2)) + 320) & 0x100) != 0
        && a3 == (InfantryClass *)(*(char *)(((unsigned int)(a2)) + 283) + 4) )
      {
        v70 = *(unsigned char *)(((unsigned int)(a2)) + 296); /*0x73f332*/
        v26 = (*(unsigned int *)(((unsigned int)(a2)) + 296) & 0x20) != 0; /*0x73f342*/
        v75 = *(unsigned int *)(((unsigned int)(a2)) + 88); /*0x73f344*/
        v71 = v26; /*0x73f348*/
      }
      if ( !dword_A8E7AC ) /*0x73f353*/
      {
        if ( !(uint8_t)Type::CheckAmbiguity((Type *)&dword_87F7E8, ((int)(a2)), 1) /*0x73f37b*/
          && !(*(uint8_t (__thiscall **)(Class_7F5C70 *))(*(unsigned int *)&this->gattlingStage0))(this)
          && this->isInPlayfield_d )
        {
          return 7; /*0x73f394*/
        }
        v25 = a3; /*0x73f397*/
      }
      result = FootClass::Destru_vt107((FootClass *)this, ((int)(a2)), (int)((a2) >> 32), (int)v25, a4, a5); /*0x73f3b3*/
      v27 = result; /*0x73f3b8*/
      v74 = result; /*0x73f3bd*/
      if ( result != 7 )
      {
        v28 = ((unsigned int)(a2)); /*0x73f3d0*/
        v29 = *(unsigned int *)(((unsigned int)(a2)) + 68); /*0x73f3d7*/
        if ( v29 != -1 ) /*0x73f3dd*/
        {
          v30 = *(&dword_A83D84->ptr_0 + v29); /*0x73f3e9*/
          if ( *(unsigned char *)(v30 + 682) /*0x73f40c*/
            && !(uint8_t)House::IsCurrentPlayer(*((House **)&this->attachedTag5))
            && !*(unsigned int *)&dword_A8B238 )
          {
            return 7; /*0x73f41d*/
          }
          if ( *(unsigned char *)(v30 + 680) ) /*0x73f420*/
          {
            if ( *(unsigned char *)(v30 + 557) /*0x73f46c*/
              && (this->Type->OpenTransportWeapon
               || (uint8_t)TechnoTypeClass::HasVoiceResponse((int *)this, 17))
              || *(unsigned char *)(v30 + 680) && this->Type->q5B4 == 12 )
            {
              if ( !(uint8_t)HouseClass::IsAllied(this->ptr_4), *(unsigned int *)(((unsigned int)(a2)) + 80)) ) /*0x73f47f*/
                goto LABEL_74; /*0x73f47f*/
              goto LABEL_71; /*0x73f47f*/
            }
            if ( !(*(uint8_t (__thiscall **)(Class_7F5C70 *))(*&this->ptr_4))(this) ) /*0x73f48f*/
              return 7; /*0x73f48f*/
            v31 = *(unsigned int *)(*(unsigned int *)(*(int (__thiscall **)(Class_7F5C70 *, unsigned int))(*&this->u32_1946))(this, 0) /*0x73f4a3*/
                            + 172);
            if ( !*(unsigned char *)(v31 + 324) && (!*(unsigned char *)(v31 + 327) || *(unsigned int *)(v30 + 156) != 6) ) /*0x73f4c4*/
              return 7; /*0x73f4d5*/
            if ( (uint8_t)HouseClass::IsAllied(this->ptr_4), *(unsigned int *)(((unsigned int)(a2)) + 80)) ) /*0x73f4e2*/
            {
  LABEL_71:
              if ( v27 >= 4 ) /*0x73f4ee*/
                goto LABEL_74; /*0x73f4ee*/
              v27 = 4; /*0x73f4f0*/
              goto LABEL_73; /*0x73f4f0*/
            }
            if ( v27 < 5 ) /*0x73f511*/
            {
              v27 = 5; /*0x73f513*/
  LABEL_73:
              v74 = v27; /*0x73f4f5*/
            }
          }
        }
  LABEL_74:
        v73 = 0; /*0x73f4f9*/
        if ( v69 ) /*0x73f504*/
          v32 = *(unsigned int *)(((unsigned int)(a2)) + 232); /*0x73f506*/
        else
          v32 = *(unsigned int *)(((unsigned int)(a2)) + 228); /*0x73f51a*/
        if ( v32 )
        {
          while ( 1 )
          {
            if ( this == (Class_7F5C70 *)v32 ) /*0x73f52a*/
            {
              v71 = 0; /*0x73fc14*/
              v70 &= ~0x20u; /*0x73fc1b*/
              goto LABEL_153; /*0x73fc1f*/
            }
            v33 = this->FootClass_field_69C; /*0x73f530*/
            if ( v33 ) /*0x73f538*/
            {
              v34 = *(unsigned int *)(v33 + 40); /*0x73f53a*/
              if ( v34 ) /*0x73f53f*/
              {
                v35 = (unsigned short *)(*(int (__thiscall **)(int, int *))(*(unsigned int *)v34 + 440))(v34, &v82); /*0x73f550*/
                v36 = (unsigned short *)(*(int (__thiscall **)(int, int *))(*&v32->Deployed)(v32, &v83); /*0x73f559*/
                if ( *v36 == *v35 && v36[1] == v35[1] ) /*0x73f56f*/
                  return 0; /*0x73f56f*/
                v28 = ((unsigned int)(a2)); /*0x73f575*/
              }
            }
            if ( (uint8_t)Array::Contains((Array *)this, (v32->abstractFlags & 1) != 0 ? v32 : 0)
              && (*(int (__thiscall **)(int))(v32->fallRate)(v32) == 6
              && !(uint8_t)UnitClass::IsCellBlockedByBridge((UnitClass *)v32, (unsigned int *)v28) )
            {
              goto LABEL_153; /*0x73f5a2*/
            }
            if ( this->Type->SmallVisceroid /*0x73f5d1*/
              && (*(int (__thiscall **)(int))(v32->fallRate)(v32) == 1
              && v32->Type->SmallVisceroid )
            {
              return 0; /*0x73f5d9*/
            }
            if ( (*(int (__thiscall **)(int))(*&v32->suspendedMission)(v32) == 6 ) /*0x73f5e9*/
            {
              if ( (*(int (__thiscall **)(Class_7F5C70 *))(*&this->ptr_4))(this) == 7 /*0x73f653*/
                && v32 == this->FootClass_field_5A4
                && *(unsigned char *)(v32->FootClass_field_520 + 5806)
                && !(*(uint8_t (__thiscall **)(int))(v32->TechLevel)(v32)
                || (*(int (__thiscall **)(Class_7F5C70 *))(*(unsigned int *)&this->isInLogic8))(this) == 9
                && v32 == this->FootClass_field_5A4
                && *(unsigned char *)(v32->FootClass_field_520 + 5805)
                && !(*(uint8_t (__thiscall **)(int))(v32->TechLevel)(v32) )
              {
                return 0; /*0x73f65b*/
              }
              if ( *(unsigned char *)(v32->FootClass_field_520 + 5805) ) /*0x73f667*/
              {
                v37 = (unsigned int *)(*(int (__thiscall **)(Class_7F5C70 *, unsigned char *))(*&this->ptr_4))(this, v95); /*0x73f67a*/
                v76 = ((v76) & 0xFFFF0000u) | ((unsigned int)(*v37 / 256) & 0xFFFFu); /*0x73f68d*/
                v76 = ((v76) & 0xFFFFu) | (((unsigned int)(v37[1] / 256) & 0xFFFFu) << 16); /*0x73f6a5*/
                *(unsigned int *)v76 = v76; /*0x73f6ae*/
                v38 = *((unsigned int *)((CellCoord *)&dword_87F7E8)->To_CellObj(v76) + 57); /*0x73f6bd*/
                if ( v38 ) /*0x73f6c5*/
                {
                  while ( v38 != v32 ) /*0x73f6c9*/
                  {
                    v38 = *(unsigned int *)(v38 + 48); /*0x73f6cf*/
                    if ( !v38 ) /*0x73f6d4*/
                      goto LABEL_105; /*0x73f6d4*/
                  }
                  return 0; /*0x73f248*/
                }
              }
  LABEL_105:
              v39 = v32->FootClass_field_520; /*0x73f6d6*/
              if ( v39[5815] ) /*0x73f6dc*/
              {
                if ( !(uint8_t)BuildingClass::IsPoweredOn((BuildingClass *)v32) ) /*0x73f6e8*/
                {
                  if ( (uint8_t)HouseClass::IsAlliedWith(v32->owner) ) /*0x73f702*/
                  {
                    if ( v27 < 3 ) /*0x73f70e*/
                    {
                      v27 = 3; /*0x73f714*/
                      v74 = 3; /*0x73f719*/
                    }
                  }
                  else
                  {
                    if ( !(*(uint8_t (__thiscall **)(Class_7F5C70 *))(*&this->ptr_4))(this) ) /*0x73f72e*/
                      return 7; /*0x73f72e*/
                    if ( v27 < 5 ) /*0x73f737*/
                    {
                      v27 = 5; /*0x73f73d*/
                      v74 = 5; /*0x73f742*/
                    }
                  }
                }
                goto LABEL_153; /*0x73f71d*/
              }
              if ( (v39[5801] || v39[5803]) /*0x73f76d*/
                && Cell::IsBridge((Cell *)v28) == (unsigned int *)v32
                && !(uint8_t)UnitClass::IsCellBlockedByBridge((UnitClass *)v32, (unsigned int *)v28) )
              {
                goto LABEL_153; /*0x73f76d*/
              }
              v40 = v32->FootClass_field_520; /*0x73f77a*/
              if ( v40[5889] ) /*0x73f780*/
                goto LABEL_153; /*0x73f780*/
              if ( v40[5823] ) /*0x73f78e*/
              {
                v41 = v32->q618; /*0x73f798*/
                if ( v41 == 12 || v41 == 8 ) /*0x73f7aa*/
                  goto LABEL_153; /*0x73f7aa*/
              }
              if ( v40[5824] ) /*0x73f7b0*/
              {
                if ( *(unsigned char *)(v32->owner + 506) ) /*0x73f7c0*/
                  return 7; /*0x73f7c8*/
                goto LABEL_153; /*0x73f7c8*/
              }
              if ( v40[5488] ) /*0x73f7d3*/
              {
                v42 = (unsigned short)((dword_89F690) >> 16) + v28->u32_26; /*0x73f7ec*/
                v77 = ((v77) & 0xFFFF0000u) | ((unsigned int)(dword_89F690 + v28->u32_24) & 0xFFFFu); /*0x73f7f3*/
                v77 = ((v77) & 0xFFFFu) | (((unsigned int)(v42) & 0xFFFFu) << 16); /*0x73f7fc*/
                *(unsigned int *)v78 = v77; /*0x73f80b*/
                v43 = (Cell *)((CellCoord *)&dword_87F7E8)->To_CellObj(v78); /*0x73f80f*/
                if ( Cell::IsBridge(v43) != (unsigned int *)v32 ) /*0x73f81d*/
                  goto LABEL_153; /*0x73f81d*/
              }
            }
            if ( (*(int (__thiscall **)(Class_7F5C70 *))(*&this->ptr_4))(this) == 7 /*0x73f844*/
              && v32 == this->FootClass_field_5A4
              && (*(int (__thiscall **)(int))(v32->fallRate)(v32) == 1 )
            {
              return 0; /*0x73f844*/
            }
            if ( (*(int (__thiscall **)(Class_7F5C70 *))(*&this->ptr_4))(this) == 11 /*0x73f85f*/
              && this->focus == v32 )
            {
              return 7; /*0x73f85f*/
            }
            if ( (v32->abstractFlags & 4) == 0 ) /*0x73f869*/
              break; /*0x73f869*/
            v44 = v32->FootClass_field_5A4; /*0x73f86b*/
            *(unsigned int *)v78 = v32; /*0x73f871*/
            if ( !v44 && !(uint8_t)TimerClass::Active(v32 + 904) ) /*0x73f87f*/
            {
              if ( !v32->Locomotor ) /*0x73f888*/
                sub_7DC720(-2147467261); /*0x73f897*/
              if ( !(*(uint8_t (__stdcall **)(unsigned int))(*v32->Locomotor + 16))(v32->Locomotor) ) /*0x73f8aa*/
                goto LABEL_139; /*0x73f8aa*/
            }
            v72 = 1; /*0x73f8ac*/
  LABEL_140:
            if ( (uint8_t)(this->ptr_4))->IsAlliedWithObjectHouse(v32) ) /*0x73f8c7*/
            {
              if ( v72 ) /*0x73f8da*/
              {
                v45 = ((unsigned int)((*(unsigned int *)ProgressTimer::GetValue(&this->ptr_4, &v84) >> 12) + 1) >> 1) & 7; /*0x73f903*/
                v46 = *(unsigned short *)ProgressTimer::GetValue((ProgressTimer *)(v32 + 904), &v85) + 0x7FFF; /*0x73f914*/
                v47 = v32->location; /*0x73f91c*/
                v80 = ((v80) & 0xFFFF0000u) | ((unsigned int)(v46) & 0xFFFFu); /*0x73f91e*/
                v47 = v47; /*0x73f923*/
                __asm { fild [esp+98h+var_30] } /*0x73f934*/
                v93 = v32->locationY; /*0x73f938*/
                v48 = v32->locationZ; /*0x73f93e*/
                v89 = this->location; /*0x73f941*/
                __asm { fisub [esp+98h+var_3C] } /*0x73f945*/
                v48 = v48; /*0x73f949*/
                v90 = this->locationY; /*0x73f950*/
                v91 = this->locationZ; /*0x73f95e*/
                __asm /*0x73f964*/
                {
                  fstp [esp+0A0h+var_98]; double
                  fild [esp+0A0h+var_38]
                }
                v49 = (((v80 >> 12) + 1) >> 1) & 7; /*0x73f96c*/
                __asm /*0x73f96f*/
                {
                  fisub [esp+0A0h+var_2C]
                  fstp [esp+0A0h+var_A0]; double
                }
                Math::CalcAngle(v66, v67); /*0x73f976*/
                __asm { fsub ds:dbl_7E2820 } /*0x73f97b*/
                __asm { fmul ds:dbl_7E2818 }
                v81 = ((v81) & 0xFFFF0000u) | ((unsigned int)(Math::RoundToInt(v7)) & 0xFFFFu); /*0x73f991*/
                if ( v45 == v49 ) /*0x73f996*/
                {
                  v50 = (unsigned int *)(*(int (__thiscall **)(int, unsigned char *))(v32->u32_48)(v32, v96); /*0x73f9aa*/
                  v51 = (unsigned int *)(*(int (__thiscall **)(Class_7F5C70 *, unsigned char *))(*&this->ptr_4))(this, v97); /*0x73f9b6*/
                  v52 = *v51 - *v50; /*0x73f9bd*/
                  v53 = v51[1]; /*0x73f9bf*/
                  v54 = v51[2]; /*0x73f9c2*/
                  v52 = v52; /*0x73f9c5*/
                  v55 = v50[2]; /*0x73f9d1*/
                  v87 = v53 - v50[1]; /*0x73f9d4*/
                  __asm { fild [esp+98h+var_44] } /*0x73f9da*/
                  v88 = v54 - v55; /*0x73f9de*/
                  __asm /*0x73f9e2*/
                  {
                    fild [esp+98h+var_40]
                    fild [esp+98h+var_48]
                    fld st
                    fmul st, st(1)
                    fld st(2)
                    fmul st, st(3)
                    faddp st(1), st
                    fld st(3)
                    fmul st, st(4)
                    faddp st(1), st
                    fstp [esp+98h+var_98]; double
                    fstp st
                    fstp st
                    fstp st
                  }
                  Math::Sqrt(v68); /*0x73fa03*/
                  v56 = ((v56) & 0xFFFF0000u) | ((unsigned int)(Math::RoundToInt(v7)) & 0xFFFFu); /*0x73fa0b*/
                  if ( v56 <= 511 && ((((v81 >> 12) + 1) >> 1) & 7) == v45 ) /*0x73fa26*/
                    return 7; /*0x73fa26*/
                }
                v57 = *(unsigned int *)v78; /*0x73fa2c*/
                if ( *(unsigned char *)(v78->FootClass_field_6B6 /*0x73fa44*/
                  && (*(int (__thiscall **)(unsigned int))(*v78->fallRate)(*(unsigned int *)v78) != 15 )
                {
                  goto LABEL_150; /*0x73fa44*/
                }
                if ( !*(unsigned int *)(v57 + 1652) ) /*0x73fa46*/
                  sub_7DC720(-2147467261); /*0x73fa55*/
                if ( (*(uint8_t (__stdcall **)(unsigned int))(**(unsigned int **)(v57 + 1652) + 164))(*(unsigned int *)(v57 + 1652)) ) /*0x73fa63*/
                {
  LABEL_150:
                  if ( v74 < 2 ) /*0x73fa72*/
                    v74 = 2; /*0x73fa74*/
                }
              }
              else
              {
                if ( (*(int (__thiscall **)(int))(v32->fallRate)(v32) == 6 ) /*0x73fae9*/
                  return 7; /*0x73fae9*/
                if ( v27 < 6 ) /*0x73faf2*/
                {
                  v27 = 6; /*0x73faf4*/
                  v74 = 6; /*0x73faf9*/
                  goto LABEL_153; /*0x73fafd*/
                }
              }
            }
            else
            {
              v60 = AbstractClass::IsTechno((AbstractClass *)v32); /*0x73fb01*/
              if ( v60 && v60[136] == 2 ) /*0x73fb11*/
              {
                if ( v27 < 1 ) /*0x73fb16*/
                {
                  v27 = 1; /*0x73fb1c*/
                  v74 = 1; /*0x73fb21*/
                  goto LABEL_153; /*0x73fb25*/
                }
              }
              else if ( (this->Type->OpenTransportWeapon /*0x73fb4a*/
                      || (uint8_t)TechnoTypeClass::HasVoiceResponse((int *)this, 17))
                     && ObjectClass::IsCrushable((TechnoClass *)v32, this) )
              {
                if ( !(uint8_t)(this->ptr_4))->IsAlliedWithObjectHouse(v32) ) /*0x73fb5a*/
                {
                  v73 = 1; /*0x73fb67*/
                  goto LABEL_153; /*0x73fb6c*/
                }
              }
              else
              {
                if ( !*(unsigned int *)(*(int (__thiscall **)(Class_7F5C70 *, unsigned int))(*&this->u32_1946))(this, 0) /*0x73fb90*/
                  && !this->Type->qC94 )
                {
                  return 7; /*0x73fb90*/
                }
                v61 = (*(int (__thiscall **)(int))(v32->fallRate)(v32); /*0x73fb9a*/
                if ( v61 == 6 ) /*0x73fba0*/
                {
                  if ( *(unsigned char *)(v32->FootClass_field_520 + 5814) ) /*0x73fc00*/
                    return 7; /*0x73fc08*/
                }
                else if ( v61 == 36 ) /*0x73fba5*/
                {
                  v62 = (*(int (__thiscall **)(Class_7F5C70 *, int))(*&this->ptr_4))(this, v32); /*0x73fbac*/
                  v63 = *(unsigned int *)(*(int (__thiscall **)(Class_7F5C70 *, int))(*&this->u32_1946))(this, v62); /*0x73fbbd*/
                  if ( !v63 ) /*0x73fbc1*/
                    return 7; /*0x73fbc1*/
                  v64 = *(unsigned int *)(v63 + 172); /*0x73fbc7*/
                  if ( !v64 || !*(unsigned char *)(v64 + 327) ) /*0x73fbd5*/
                    return 7; /*0x73fbdd*/
                }
                if ( v27 < 5 ) /*0x73fbe6*/
                {
                  v27 = 5; /*0x73fbec*/
                  v74 = 5; /*0x73fbf1*/
                  goto LABEL_153; /*0x73fbf5*/
                }
              }
            }
            v27 = v74; /*0x73fa7c*/
            v28 = ((unsigned int)(a2)); /*0x73fa80*/
  LABEL_153:
            v32 = v32->nextObject; /*0x73fa87*/
            if ( !v32 ) /*0x73fa8c*/
              goto LABEL_154; /*0x73fa8c*/
          }
          *(unsigned int *)v78 = 0; /*0x73f8b3*/
  LABEL_139:
          v72 = 0; /*0x73f8bb*/
          goto LABEL_140; /*0x73f8bb*/
        }
  LABEL_154:
        if ( !v69 ) /*0x73fa98*/
        {
          _ECX = this->Type->q67C + 9 * v28->u32_EC; /*0x73fab3*/
          __asm /*0x73fab5*/
          {
            fld flt_89EA40[ecx*4]
            fcomp ds:flt_7E1748
            fnstsw ax
          }
          if ( (_AX & 0x4000) != 0 ) /*0x73fac7*/
            return 7; /*0x73fadc*/
        }
        if ( !v27 ) /*0x73fc26*/
        {
          if ( v73 ) /*0x73fc32*/
          {
            if ( v71 ) /*0x73fcfc*/
            {
              if ( !CellClass::FindBuilding((CellClass *)v28, 0) ) /*0x73fd02*/
                return 2; /*0x73fd02*/
              Building = (TechnoClass *)CellClass::FindBuilding((CellClass *)v28, 0); /*0x73fd10*/
              if ( !ObjectClass::IsCrushable(Building, this) ) /*0x73fd17*/
                return 2; /*0x73fd2f*/
            }
          }
          else if ( (v70 & 0x3F) != 0 ) /*0x73fc3d*/
          {
            if ( v71 || v75 != -1 && (uint8_t)HouseClass::IsAllied(this->ptr_4), v75) ) /*0x73fc5f*/
            {
              return 2; /*0x73fd32*/
            }
            else if ( !this->Type->OpenTransportWeapon /*0x73fc84*/
                   && !(uint8_t)TechnoTypeClass::HasVoiceResponse((int *)this, 17) )
            {
              if ( this->Type->qC94 /*0x73fcc6*/
                || *(unsigned int *)(*(int (__thiscall **)(Class_7F5C70 *, unsigned int))(*&this->u32_1946))(this, 0)
                && *(unsigned char *)(*(unsigned int *)(*(unsigned int *)(*(int (__thiscall **)(Class_7F5C70 *, unsigned int))(*&this->u32_1946))(
                                                       this,
                                                       0)
                                        + 160)
                            + 677) )
              {
                return 5; /*0x73fcf3*/
              }
              return 7; /*0x73fcdf*/
            }
          }
        }
        return v27; /*0x73fd38*/
      }
    }
    return result; /*0x73f17f*/
}
// 0x47c520
unsigned int *Cell::IsBridge()
{
  unsigned int *Cell_field_0xE4; // esi

  if ( !byte_A8E9A0 ) /*0x47c528*/
    return 0; /*0x47c528*/
  Cell_field_0xE4 = this->q0E4; /*0x47c52a*/
  if ( !Cell_field_0xE4 ) /*0x47c532*/
    return 0; /*0x47c547*/
  while ( Cell_field_0xE4->vt_slot_44() != 6 ) /*0x47c53e*/
  {
    Cell_field_0xE4 = Cell_field_0xE4->nextObject; /*0x47c540*/
    if ( !Cell_field_0xE4 ) /*0x47c545*/
      return 0; /*0x47c545*/
  }
  return Cell_field_0xE4; /*0x47c549*/
}
// 0x70fbd0
bool UnitClass::IsDeactivated()
{
  return this->ptr_0; /*0x70fbd6*/
}
// ============================================================
// Phase 3: Construction & Destruct
// ============================================================

// 0x6b4a50
int UnitClass::Create(void* aP0, void* aP1, int aP2)
{
  int v5; // eax

  ObjectClass::ctor((ObjectClass *)this); /*0x6b4a53*/
  /* X11: ptr_0 install elided (implicit via class virtuals 0x6b4a5c) — binary-proven install, was 0 */
  this->currentMission = (int)aP0; /*0x6b4a62*/
  /* X11: ptr_0 install elided (implicit via class virtuals 0x6b4a6c) — binary-proven install, was 0 */
  /* X11: ptr_0 install elided (implicit via class virtuals 0x6b4a73) — binary-proven install, was 0 */
  /* X11: ptr_0 install elided (implicit via class virtuals 0x6b4a79) — binary-proven install, was 0 */
  AbstractClass::GenerateUniqueID(&this->ptr_4); /*0x6b4a80*/
  if ( dword_A8B1F0 < dword_A8B1E8 /*0x6b4abc*/
    || (byte_A8B1ED || !dword_A8B1E8)
    && dword_A8B1F4 > 0
    && (*(uint8_t (__thiscall **)(unsigned int *, int, unsigned int))(dword_A8B1E0 + 8))(
         &dword_A8B1E0,
         dword_A8B1E8 + dword_A8B1F4,
         0) )
  {
    v5 = dword_A8B1F0++; /*0x6b4ac9*/
    *((unsigned int *)dword_A8B1E4 + v5) = this; /*0x6b4ad8*/
  }
  if ( *aP1 != dword_B0B728 || aP1[1] != dword_B0B72C || aP1[2] != dword_B0B730 ) /*0x6b4b03*/
  {
    dword_83FFD8 = aP2; /*0x6b4b0b*/
    if ( !(uint8_t)ObjectClass::Deploy((ObjectClass *)this) ) /*0x6b4b14*/
    {
      ObjectClass::Destroy((ObjectClass *)this); /*0x6b4b1f*/
      return &this->ptr_0; /*0x6b4b27*/
    }
    dword_83FFD8 = -1; /*0x6b4b2a*/
  }
  return &this->ptr_0; /*0x6b4b26*/
}
// 0x6b4c80
int UnitClass::ReadINI()
{
  int result; // eax
  int v3; // ecx
  uint8_t *StringByIndex; // eax
  char *v5; // eax
  int _6B5440; // esi
  char *v7; // eax
  int16_t v8; // di
  char *v9; // eax
  int16_t v10; // bx
  char *v11; // eax
  UnitClass *v12; // eax
  int i; // [esp+4h] [ebp-94h]
  int v14; // [esp+8h] [ebp-90h]
  unsigned int v15[3]; // [esp+Ch] [ebp-8Ch] BYREF
  char String[128]; // [esp+18h] [ebp-80h] BYREF

  INIClass::ResetSection(this); /*0x6b4c89*/
  result = INIClass::GetKeyCount(this->ptr_0, (uint8_t *)&g_INI_Key_Special.abstractFlags); /*0x6b4c96*/
  v3 = 0; /*0x6b4c9b*/
  v14 = result; /*0x6b4c9f*/
  for ( i = 0; i < v14; ++i ) /*0x6b4ca7*/
  {
    StringByIndex = (uint8_t *)INIClass::GetStringByIndex( /*0x6b4cba*/
                                         this->ptr_0,
                                         (uint8_t *)&g_INI_Key_Special.abstractFlags,
                                         v3);
    INIClass::GetString(this, (uint8_t *)&g_INI_Key_Special.abstractFlags, StringByIndex, 0, String, 128); /*0x6b4cd4*/
    v5 = strtok(String, Str); /*0x6b4ce3*/
    _6B5440 = Object_Read_6B5440((ObjectClass *)v5); /*0x6b4cf2*/
    if ( _6B5440 != -1 ) /*0x6b4cf7*/
    {
      v7 = strtok(0, Str); /*0x6b4d04*/
      if ( v7 ) /*0x6b4d0e*/
      {
        v8 = atoi(v7); /*0x6b4d21*/
        v9 = strtok(0, Str); /*0x6b4d23*/
        v10 = atoi(v9); /*0x6b4d35*/
        v11 = strtok(0, Str); /*0x6b4d38*/
        if ( !v11 || !atoi(v11) ) /*0x6b4d45*/
        {
          v12 = (UnitClass *)operator new(0xB0u); /*0x6b4d56*/
          if ( v12 ) /*0x6b4d60*/
          {
            v15[0] = (v8 << 8) + 128; /*0x6b4d7a*/
            v15[1] = (v10 << 8) + 128; /*0x6b4d7e*/
            v15[2] = 0; /*0x6b4d8e*/
            UnitClass::Create(v12, *(void **)(*(unsigned int *)&((unsigned int *)&stru_A8EB00)[56] + 4 * _6B5440), v15, -1); /*0x6b4d9d*/
          }
        }
      }
    }
    result = v14; /*0x6b4da6*/
    v3 = i + 1; /*0x6b4daa*/
  }
  return result; /*0x6b4dba*/
}
// 0x6b4fa0
int UnitClass::DestroySmudge(char a2)
{
  int v3; // eax
  SmudgeClass *v5; // [esp+4h] [ebp-4h] BYREF

  /* X11: ptr_0 install elided (implicit via class virtuals 0x6b4fa6) — binary-proven install, was 0 */
  /* X11: ptr_0 install elided (implicit via class virtuals 0x6b4fac) — binary-proven install, was 0 */
  /* X11: ptr_0 install elided (implicit via class virtuals 0x6b4fb3) — binary-proven install, was 0 */
  /* X11: ptr_0 install elided (implicit via class virtuals 0x6b4fba) — binary-proven install, was 0 */
  AbstractClass::AnnounceExpiredPointer(&this->ptr_0, 1); /*0x6b4fc1*/
  v5 = this; /*0x6b4fd6*/
  v3 = (*(int (__thiscall **)(unsigned int *, SmudgeClass **))(dword_A8B1E0 + 16))(&dword_A8B1E0, &v5); /*0x6b4fda*/
  if ( v3 != -1 && v3 < dword_A8B1F0 && v3 < --dword_A8B1F0 ) /*0x6b4ff5*/
  {
    do /*0x6b500d*/
    {
      ++v3; /*0x6b4ffd*/
      *((unsigned int *)dword_A8B1E4 + v3 - 1) = *((unsigned int *)dword_A8B1E4 + v3); /*0x6b5001*/
    }
    while ( v3 < dword_A8B1F0 ); /*0x6b500d*/
  }
  if ( byte_A8E9A0 ) /*0x6b5016*/
    ObjectClass::Undeploy((ObjectClass *)this); /*0x6b501a*/
  this->Type = 0; /*0x6b5021*/
  ObjectClass::Dtor((ObjectClass *)this); /*0x6b502b*/
  if ( (a2 & 1) != 0 ) /*0x6b5035*/
    operator delete((void *)(this)); /*0x6b5038*/
  return &this->ptr_0; /*0x6b5042*/
}
// 0x735780
void UnitClass::Destructor()
{
  UnitClass *ElectricBolt; // ecx
  UnitTypeClass *Type; // eax
  int *team; // ecx
  int v5; // eax
  int FlagHouseIndex; // eax
  HouseClass **v7; // edi
  int16_t *v8; // eax
  int v9; // eax
  int Vtable3; // eax
  char *ptr_0; // ebx
  unsigned int *ptr_0; // ebp
  int v13; // edi
  UnitClass *v14; // edx
  char *v15; // ecx
  signed int v16; // ecx
  int v17; // ecx
  unsigned int *v18; // eax
  UnitClass *v20; // [esp+10h] [ebp-4h] BYREF

  ElectricBolt = (UnitClass *)this->ElectricBolt; /*0x735789*/
  /* X11: ptr_0 install elided (implicit via class virtuals 0x735794) — binary-proven install, was 0 */
  /* X11: ptr_0 install elided (implicit via class virtuals 0x73579a) — binary-proven install, was 0 */
  /* X11: ptr_0 install elided (implicit via class virtuals 0x7357a0) — binary-proven install, was 0 */
  /* X11: ptr_0 install elided (implicit via off_7F5C44 virtuals 0x7357a7) */
  if ( ElectricBolt ) /*0x7357ae*/
  {
    UnitClass::updateHarvesting(ElectricBolt); /*0x7357b0*/
    this->ElectricBolt = 0; /*0x7357b5*/
  }
  if ( byte_A8E9A0 ) /*0x7357c2*/
  {
    Type = this->Type; /*0x7357c8*/
    if ( Type ) /*0x7357d0*/
    {
      if ( HouseClass::CanBuild(this->owner, (int)Type, 0, 0) == -1 ) /*0x7357e7*/
        this->owner->recheckTechTree = 1; /*0x7357ef*/
      team = (int *)this->team; /*0x7357f6*/
      if ( team ) /*0x7357fe*/
      {
        TeamClass::LiberateMember_Start(team, (int)this, 0xFFFFFFFF, 0); /*0x735804*/
        this->team = 0; /*0x735809*/
      }
      HouseClass::DecrementUnitCount(this->owner, this); /*0x735816*/
      if ( !dword_A8E7AC && this->passengers[1] ) /*0x735823*/
      {
        do /*0x735845*/
        {
          v5 = LinkedList::Pop((LinkedList *)this->passengers); /*0x735833*/
          if ( v5 ) /*0x73583a*/
            v5->vt_slot_32(1); /*0x735842*/
        }
        while ( this->passengers[1] ); /*0x735845*/
      }
      if ( (uint8_t)TechnoClass::CleanupDirection((FootClass *)this) ) /*0x73584f*/
      {
        FlagHouseIndex = this->FlagHouseIndex; /*0x735858*/
        if ( FlagHouseIndex != -1 ) /*0x735861*/
        {
          v7 = (HouseClass **)((char *)stru_A80220.ptr_C + 4 * FlagHouseIndex); /*0x73586c*/
          v8 = (int16_t *)(*((int (__thiscall **)(UnitClass *, UnitClass **))this->ptr_0 + 110))(this, &v20); /*0x735876*/
          HouseClass::DroppedFlag(*v7, v8, 0); /*0x73587f*/
          this->FlagHouseIndex = -1; /*0x735884*/
        }
      }
    }
  }
  AbstractClass::AnnounceExpiredPointer((AbstractClass *)this, 1); /*0x735892*/
  v20 = this; /*0x7358a7*/
  v9 = (*(int (__thiscall **)(float *, UnitClass **))((*((unsigned int *)&(FootClass_Array.tiltForwardsRate))) + 16))( /*0x7358ab*/
         &FootClass_Array.tiltForwardsRate,
         &v20);
  if ( v9 != -1 && v9 < FootClass_Array.storedTiberium[2] ) /*0x7358bb*/
  {
    --FootClass_Array.storedTiberium[2]; /*0x7358c0*/
    for ( ; /*0x7358c6*/
          v9 < FootClass_Array.storedTiberium[2];
          *(unsigned int *)(FootClass_Array.hijackerInfantryType + 4 * v9 - 4) = *(unsigned int *)(FootClass_Array.hijackerInfantryType
                                                                                     + 4 * v9) )
    {
      ++v9; /*0x7358ce*/
    }
  }
  Vtable3 = AbstractClass::GetVtable3(&this->ptr_4); /*0x7358e1*/
  ptr_0 = (char *)g_BuildingLoadQueue_Array.ptr_4; /*0x7358e6*/
  v20 = (UnitClass *)Vtable3; /*0x7358ec*/
  if ( g_BuildingLoadQueue_Array.ptr_4 ) /*0x7358f2*/
  {
    if ( !(*((unsigned char *)&(g_BuildingLoadQueue_Array.ptr_C))) ) /*0x7358ff*/
    {
      qsort( /*0x73590f*/
        g_BuildingLoadQueue_Array.ptr_0,
        (size_t)g_BuildingLoadQueue_Array.ptr_4,
        8u,
        (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunction);
      ptr_0 = (char *)g_BuildingLoadQueue_Array.ptr_4; /*0x735914*/
      g_BuildingLoadQueue_Array.uniqueId = 0; /*0x73591d*/
      (*((unsigned char *)&(g_BuildingLoadQueue_Array.ptr_C))) = 1; /*0x735923*/
    }
    ptr_0 = g_BuildingLoadQueue_Array.ptr_0; /*0x73592a*/
    v13 = (int)ptr_0; /*0x735930*/
    while ( v13 > 0 ) /*0x735934*/
    {
      v14 = (UnitClass *)ptr_0[2 * (v13 / 2)]; /*0x735941*/
      v15 = (char *)&ptr_0[2 * (v13 / 2)]; /*0x735945*/
      if ( (int)v20 >= (int)v14 ) /*0x73594d*/
      {
        if ( v14 == v20 ) /*0x735957*/
        {
          if ( v15 ) /*0x73597d*/
          {
            v16 = (v15 - (char *)g_BuildingLoadQueue_Array.ptr_0) >> 3; /*0x735985*/
            if ( v16 != -1 ) /*0x73598b*/
            {
              v17 = v16 + 1; /*0x73598d*/
              if ( v17 < (int)ptr_0 ) /*0x735990*/
              {
                do /*0x7359af*/
                {
                  v18 = (char *)g_BuildingLoadQueue_Array.ptr_0 + 8 * v17++; /*0x735998*/
                  *(v18 - 2) = *v18; /*0x73599e*/
                  *(v18 - 1) = v18[1]; /*0x7359a4*/
                  ptr_0 = (char *)g_BuildingLoadQueue_Array.ptr_4; /*0x7359a7*/
                }
                while ( v17 < (int)g_BuildingLoadQueue_Array.ptr_4 ); /*0x7359af*/
              }
              g_BuildingLoadQueue_Array.ptr_4 = ptr_0 - 1; /*0x7359bc*/
              *((unsigned int *)g_BuildingLoadQueue_Array.ptr_0 + 2 * (int)g_BuildingLoadQueue_Array.ptr_4) = 0; /*0x7359c2*/
              *((unsigned int *)g_BuildingLoadQueue_Array.ptr_0 + 2 * (int)g_BuildingLoadQueue_Array.ptr_4 + 1) = 0; /*0x7359d0*/
              g_BuildingLoadQueue_Array.uniqueId = 0; /*0x7359d4*/
            }
          }
          break; /*0x7359d4*/
        }
        ptr_0 = v15 + 8; /*0x735959*/
        v13 += -1 - v13 / 2; /*0x735961*/
      }
      else
      {
        v13 /= 2; /*0x73594f*/
      }
    }
  }
  this->isAliveFlag = 0; /*0x7359da*/
  return FootClass::Destruct((FootClass *)this); /*0x735975*/
}
/* ASM:
push    ecx
push    ebx
push    ebp
push    esi
mov     esi, ecx
xor     ebp, ebp
push    edi
mov     ecx, [esi+6DCh]
lea     ebx, [esi+4]
cmp     ecx, ebp
mov     dword ptr [esi], offset ??_7UnitClass@@6B@ ; const UnitClass_vftable
mov     dword ptr [ebx], offset ??_7UnitClass@@6B@_0 ; const UnitClass_vftable
mov     dword ptr [esi+8], offset ??_7UnitClass@@6B@_1 ; const UnitClass_vftable
mov     dword ptr [esi+0Ch], offset off_7F5C44
jz      short loc_7357BB
call    UnitClass__updateHarvesting
mov     [esi+6DCh], ebp

loc_7357BB:                             ; CODE XREF: UnitClass__Destructor+2E↑j
mov     al, ds:0A8E9A0h
test    al, al
jz      loc_73588E
mov     eax, [esi+6C4h]
cmp     eax, ebp
jz      loc_73588E
mov     ecx, [esi+21Ch]
push    ebp
push    ebp
push    eax
call    HouseClass__CanBuild
cmp     eax, 0FFFFFFFFh
jnz     short loc_7357F6
mov     eax, [esi+21Ch]
mov     byte ptr [eax+1FCh], 1

loc_7357F6:                             ; CODE XREF: UnitClass__Destructor+67↑j
mov     ecx, [esi+5D4h]
cmp     ecx, ebp
jz      short loc_73580F
push    ebp
push    0FFFFFFFFh
push    esi
call    TeamClass__LiberateMember_Start
mov     [esi+5D4h], ebp

loc_73580F:                             ; CODE XREF: UnitClass__Destructor+7E↑j
mov     ecx, [esi+21Ch]
push    esi
call    HouseClass__DecrementUnitCount
cmp     ds:0A8E7ACh, ebp
jnz     short loc_73584D
cmp     [esi+118h], ebp
jz      short loc_73584D
lea     edi, [esi+114h]

loc_735831:                             ; CODE XREF: UnitClass__Destructor+CB↓j
mov     ecx, edi
call    LinkedList__Pop
cmp     eax, ebp
jz      short loc_735845
mov     edx, [eax]
push    1
mov     ecx, eax
call    dword ptr [edx+20h]

loc_735845:                             ; CODE XREF: UnitClass__Destructor+BA↑j
cmp     [esi+118h], ebp
jnz     short loc_735831

loc_73584D:                             ; CODE XREF: UnitClass__Destructor+A1↑j
; UnitClass__Destructor+A9↑j
mov     ecx, esi
call    TechnoClass__CleanupDirection
test    al, al
jz      short loc_73588E
mov     eax, [esi+6CCh]
cmp     eax, 0FFFFFFFFh
jz      short loc_73588E
mov     ecx, ds:0A8022Ch
mov     edx, [esi]
push    ebp
lea     edi, [ecx+eax*4]
lea     eax, [esp+18h+var_4]
push    eax
mov     ecx, esi
call    dword ptr [edx+1B8h]
mov     ecx, [edi]
push    eax
call    HouseClass__DroppedFlag
mov     dword ptr [esi+6CCh], 0FFFFFFFFh

loc_73588E:                             ; CODE XREF: UnitClass__Destructor+42↑j
; UnitClass__Destructor+50↑j ...
mov     dl, 1
mov     ecx, esi        ; void **
call    AbstractClass__AnnounceExpiredPointer
mov     edx, ds:8B4108h
lea     ecx, [esp+14h+var_4]
push    ecx
mov     ecx, 8B4108h
mov     [esp+18h+var_4], esi
call    dword ptr [edx+10h]
cmp     eax, 0FFFFFFFFh
jz      short loc_7358E0
mov     ecx, ds:8B4118h
cmp     eax, ecx
jge     short loc_7358E0
dec     ecx
cmp     eax, ecx
mov     ds:8B4118h, ecx
jge     short loc_7358E0

loc_7358C8:                             ; CODE XREF: UnitClass__Destructor+15E↓j
mov     ecx, ds:8B410Ch
inc     eax
mov     edx, [ecx+eax*4]
mov     [ecx+eax*4-4], edx
mov     ecx, ds:8B4118h
cmp     eax, ecx
jl      short loc_7358C8

loc_7358E0:                             ; CODE XREF: UnitClass__Destructor+131↑j
; UnitClass__Destructor+13B↑j ...
push    ebx
call    AbstractClass__GetVtable3
mov     ebx, dword_A8ED54+7FAF0h
mov     [esp+14h+var_4], eax
cmp     ebx, ebp
jz      loc_7359DA
mov     al, byte ptr dword_A8ED54+7FAF8h
test    al, al
jnz     short loc_73592A
mov     eax, dword_A8ED54+7FAECh
push    offset CompareFunction ; CompareFunction
push    8               ; SizeOfElements
push    ebx             ; NumOfElements
push    eax             ; Base
call    _qsort
mov     ebx, dword_A8ED54+7FAF0h
add     esp, 10h
mov     dword_A8ED54+7FAFCh, ebp
mov     byte ptr dword_A8ED54+7FAF8h, 1

loc_73592A:                             ; CODE XREF: UnitClass__Destructor+17F↑j
mov     ebp, dword_A8ED54+7FAECh
mov     edi, ebx
test    edi, edi
jle     loc_7359DA

loc_73593A:                             ; CODE XREF: UnitClass__Destructor+1E5↓j
mov     eax, edi
cdq
sub     eax, edx
sar     eax, 1
mov     edx, [ebp+eax*8+0]
lea     ecx, [ebp+eax*8+0]
cmp     [esp+14h+var_4], edx
jge     short loc_735953
mov     edi, eax
jmp     short loc_735963
; ---------------------------------------------------------------------------

loc_735953:                             ; CODE XREF: UnitClass__Destructor+1CD↑j
cmp     edx, [esp+14h+var_4]
jz      short loc_73597B
lea     ebp, [ecx+8]
or      ecx, 0FFFFFFFFh
sub     ecx, eax
add     edi, ecx

loc_735963:                             ; CODE XREF: UnitClass__Destructor+1D1↑j
test    edi, edi
jg      short loc_73593A
mov     ecx, esi
mov     byte ptr [esi+90h], 0
call    FootClass__Destruct
pop     edi
pop     esi
pop     ebp
pop     ebx
pop     ecx
retn
; ---------------------------------------------------------------------------

loc_73597B:                             ; CODE XREF: UnitClass__Destructor+1D7↑j
test    ecx, ecx
jz      short loc_7359DA
sub     ecx, dword_A8ED54+7FAECh
sar     ecx, 3
cmp     ecx, 0FFFFFFFFh
jz      short loc_7359DA
inc     ecx
cmp     ecx, ebx
jge     short loc_7359B1

loc_735992:                             ; CODE XREF: UnitClass__Destructor+22F↓j
mov     edx, dword_A8ED54+7FAECh
lea     eax, [edx+ecx*8]
inc     ecx
mov     edx, [eax]
mov     [eax-8], edx
mov     edx, [eax+4]
mov     [eax-4], edx
mov     ebx, dword_A8ED54+7FAF0h
cmp     ecx, ebx
jl      short loc_735992

loc_7359B1:                             ; CODE XREF: UnitClass__Destructor+210↑j
mov     edx, dword_A8ED54+7FAECh
dec     ebx
xor     ecx, ecx
xor     eax, eax
mov     dword_A8ED54+7FAF0h, ebx
mov     [edx+ebx*8], eax
mov     eax, dword_A8ED54+7FAF0h
mov     edx, dword_A8ED54+7FAECh
mov     [edx+eax*8+4], ecx
mov     dword_A8ED54+7FAFCh, ecx

loc_7359DA:                             ; CODE XREF: UnitClass__Destructor+172↑j
; UnitClass__Destructor+1B4↑j ...
mov     ecx, esi
mov     byte ptr [esi+90h], 0
call    FootClass__Destruct
pop     edi
pop     esi
pop     ebp
pop     ebx
pop     ecx
retn
*/

// ============================================================
// Phase 3: Stream & Save
// ============================================================

// 0x744470
int UnitClass::LoadFromStream(void* a0, void* aP1)
{
  UnitClass *v2; // esi
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

  v2 = a0; /*0x744472*/
  p_vtable1 = &a0->ptr_4; /*0x74447a*/
  a0 = (UnitClass *)(*((int (__stdcall **)(void **))a0->ptr_4 + 4))(&a0->ptr_4); /*0x74448b*/
  v4 = BuildingTypeClass::Dequeue(&g_BuildingLoadQueue_Array, (int *)&a0); /*0x74448f*/
  if ( v4 ) /*0x744496*/
  {
    v5 = (signed int)(v4 - (unsigned int)g_BuildingLoadQueue_Array.ptr_0) >> 3; /*0x74449e*/
    if ( v5 != -1 ) /*0x7444a4*/
    {
      v6 = v5 + 1; /*0x7444a6*/
      for ( i = (char *)g_BuildingLoadQueue_Array.ptr_4; /*0x7444b0*/
            v6 < (int)g_BuildingLoadQueue_Array.ptr_4;
            i = (char *)g_BuildingLoadQueue_Array.ptr_4 )
      {
        v8 = (char *)g_BuildingLoadQueue_Array.ptr_0 + 8 * v6++; /*0x7444b8*/
        *(v8 - 2) = *v8; /*0x7444be*/
        *(v8 - 1) = v8[1]; /*0x7444c4*/
      }
      g_BuildingLoadQueue_Array.ptr_4 = i - 1; /*0x7444d9*/
      *((unsigned int *)g_BuildingLoadQueue_Array.ptr_0 + 2 * (int)g_BuildingLoadQueue_Array.ptr_4) = 0; /*0x7444de*/
      *((unsigned int *)g_BuildingLoadQueue_Array.ptr_0 + 2 * (int)g_BuildingLoadQueue_Array.ptr_4 + 1) = 0; /*0x7444ee*/
      g_BuildingLoadQueue_Array.uniqueId = 0; /*0x7444f2*/
    }
  }
  result = ObjectClass::LoadFromStream_Common((int)v2, aP1); /*0x7444fe*/
  if ( result >= 0 ) /*0x744505*/
  {
    v10 = v2->locomotor[0]; /*0x74450b*/
    if ( v2 ) /*0x744513*/
    {
      FootClass::PostLoadInit((FootClass *)v2, (int)&a0); /*0x74451c*/
      /* X11: ptr_0 install elided (implicit via class virtuals 0x744521) — binary-proven install, was 0 */
      *p_vtable1 = 0; /*0x744527*/
      /* X11: ptr_0 install elided (implicit via class virtuals 0x74452d) — binary-proven install, was 0 */
      /* X11: ptr_0 install elided (implicit via off_7F5C44 virtuals 0x744534) */
    }
    v11 = v2->locomotor[0]; /*0x74453c*/
    if ( v11 != v10 ) /*0x744544*/
    {
      v2->locomotor[0] = v10; /*0x744548*/
      if ( v10 ) /*0x74454e*/
        (*(void (__stdcall **)(int))(*(unsigned int *)v10 + 4))(v10); /*0x744553*/
      if ( v11 ) /*0x744558*/
        (*(void (__stdcall **)(int))(*(unsigned int *)v11 + 8))(v11); /*0x74455e*/
    }
    (*(void (__stdcall **)(int))(*(unsigned int *)v10 + 8))(v10); /*0x744564*/
    v12 = (*((int (__stdcall **)(void **))*p_vtable1 + 4))(p_vtable1); /*0x744573*/
    ptr_4 = (int)g_BuildingLoadQueue_Array.ptr_8; /*0x744575*/
    if ( (int)g_BuildingLoadQueue_Array.ptr_4 + 1 <= (int)g_BuildingLoadQueue_Array.ptr_8 ) /*0x74457e*/
      goto LABEL_18; /*0x74457e*/
    if ( !g_BuildingLoadQueue_Array.ptr_8 ) /*0x744582*/
      ptr_4 = 10; /*0x744584*/
    if ( BuildingTypeClass::Enqueue((int)&g_BuildingLoadQueue_Array, ptr_4) ) /*0x74458f*/
    {
  LABEL_18:
      *((unsigned int *)g_BuildingLoadQueue_Array.ptr_0 + 2 * (int)g_BuildingLoadQueue_Array.ptr_4) = v12; /*0x7445a3*/
      *((unsigned int *)g_BuildingLoadQueue_Array.ptr_0 + 2 * (int)g_BuildingLoadQueue_Array.ptr_4 + 1) = v2; /*0x7445b1*/
      (*((unsigned char *)&(g_BuildingLoadQueue_Array.ptr_C))) = 0; /*0x7445bb*/
      ++g_BuildingLoadQueue_Array.ptr_4; /*0x7445c2*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v2->Type); /*0x7445d3*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v2->FollowerCar); /*0x7445e4*/
    v2->ElectricBolt = 0; /*0x7445eb*/
    return 0; /*0x7445e9*/
  }
  return result; /*0x7445f1*/
}
/* ASM:
pStm            = dword ptr  8

push    ebx
push    esi
mov     esi, [esp+8+arg_0]
push    edi
mov     eax, [esi+4]
lea     ebx, [esi+4]
push    ebx
call    dword ptr [eax+10h]
lea     ecx, [esp+0Ch+arg_0]
push    ecx
mov     ecx, (offset dword_A8ED54+7FAECh)
mov     [esp+10h+arg_0], eax
call    BuildingTypeClass__Dequeue
test    eax, eax
jz      short loc_7444F8
sub     eax, dword_A8ED54+7FAECh
sar     eax, 3
cmp     eax, 0FFFFFFFFh
jz      short loc_7444F8
lea     ecx, [eax+1]
mov     eax, dword_A8ED54+7FAF0h
cmp     ecx, eax
jge     short loc_7444D0

loc_7444B2:                             ; CODE XREF: UnitClass__LoadFromStream+5E↓j
mov     edx, dword_A8ED54+7FAECh
lea     eax, [edx+ecx*8]
inc     ecx
mov     edx, [eax]
mov     [eax-8], edx
mov     edx, [eax+4]
mov     [eax-4], edx
mov     eax, dword_A8ED54+7FAF0h
cmp     ecx, eax
jl      short loc_7444B2

loc_7444D0:                             ; CODE XREF: UnitClass__LoadFromStream+40↑j
mov     edi, dword_A8ED54+7FAECh
dec     eax
xor     ecx, ecx
mov     dword_A8ED54+7FAF0h, eax
mov     [edi+eax*8], ecx
mov     eax, dword_A8ED54+7FAF0h
mov     ecx, dword_A8ED54+7FAECh
xor     edx, edx
mov     [ecx+eax*8+4], edx
mov     dword_A8ED54+7FAFCh, edx

loc_7444F8:                             ; CODE XREF: UnitClass__LoadFromStream+26↑j
; UnitClass__LoadFromStream+34↑j
mov     edx, [esp+0Ch+pStm]
push    edx             ; pStm
push    esi             ; int
call    ObjectClass__LoadFromStream_Common
test    eax, eax
jl      loc_7445F1
mov     edi, [esi+674h]
test    esi, esi
jz      short loc_74453B
lea     eax, [esp+0Ch+arg_0]
mov     ecx, esi
push    eax
call    FootClass__PostLoadInit
mov     dword ptr [esi], offset ??_7UnitClass@@6B@ ; const UnitClass_vftable
mov     dword ptr [ebx], offset ??_7UnitClass@@6B@_0 ; const UnitClass_vftable
mov     dword ptr [esi+8], offset ??_7UnitClass@@6B@_1 ; const UnitClass_vftable
mov     dword ptr [esi+0Ch], offset off_7F5C44

loc_74453B:                             ; CODE XREF: UnitClass__LoadFromStream+A3↑j
push    ebp
mov     ebp, [esi+674h]
cmp     ebp, edi
jz      short loc_744561
test    edi, edi
mov     [esi+674h], edi
jz      short loc_744556
mov     ecx, [edi]
push    edi
call    dword ptr [ecx+4]

loc_744556:                             ; CODE XREF: UnitClass__LoadFromStream+DE↑j
test    ebp, ebp
jz      short loc_744561
mov     edx, [ebp+0]
push    ebp
call    dword ptr [edx+8]

loc_744561:                             ; CODE XREF: UnitClass__LoadFromStream+D4↑j
; UnitClass__LoadFromStream+E8↑j
mov     eax, [edi]
push    edi
call    dword ptr [eax+8]
mov     ecx, [ebx]
push    ebx
call    dword ptr [ecx+10h]
mov     edx, dword_A8ED54+7FAF0h
mov     edi, eax
mov     eax, dword_A8ED54+7FAF4h
inc     edx
cmp     edx, eax
pop     ebp
jle     short loc_744598
test    eax, eax
jnz     short loc_744589
mov     eax, 0Ah

loc_744589:                             ; CODE XREF: UnitClass__LoadFromStream+112↑j
push    eax
mov     ecx, (offset dword_A8ED54+7FAECh)
call    BuildingTypeClass__Enqueue
test    al, al
jz      short loc_7445C7

loc_744598:                             ; CODE XREF: UnitClass__LoadFromStream+10E↑j
mov     eax, dword_A8ED54+7FAECh
mov     ecx, dword_A8ED54+7FAF0h
mov     [eax+ecx*8], edi
mov     edx, dword_A8ED54+7FAF0h
mov     eax, dword_A8ED54+7FAECh
mov     [eax+edx*8+4], esi
mov     eax, dword_A8ED54+7FAF0h
inc     eax
mov     byte ptr dword_A8ED54+7FAF8h, 0
mov     dword_A8ED54+7FAF0h, eax

loc_7445C7:                             ; CODE XREF: UnitClass__LoadFromStream+126↑j
lea     ecx, [esi+6C4h]
push    ecx
push    (offset dword_A8ED54+7D3BCh)
call    ObjectPtr__RegisterForTracking
lea     edx, [esi+6C8h]
push    edx
push    (offset dword_A8ED54+7D3BCh)
call    ObjectPtr__RegisterForTracking
xor     eax, eax
mov     [esi+6DCh], eax

loc_7445F1:                             ; CODE XREF: UnitClass__LoadFromStream+95↑j
pop     edi
pop     esi
pop     ebx
retn    8
*/

// 0x6b4ea0
int UnitClass::SaveLoadData(ObjectClass* aP1, int aP1a)
{
  int Register; // edi

  Register = BuildingClass::SaveLoad_Register((ObjectClass *)this); /*0x6b4eb1*/
  if ( Register >= 0 ) /*0x6b4eb5*/
  {
    if ( aP1 ) /*0x6b4eb9*/
    {
      ObjectClass::Init((ObjectClass *)aP1, (int)&aP1a); /*0x6b4ec2*/
      *aP1 = 0; /*0x6b4ec7*/
      aP1[1] = 0; /*0x6b4ecd*/
      aP1[2] = 0; /*0x6b4ed4*/
      aP1[3] = 0; /*0x6b4edb*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP1 + 43); /*0x6b4eee*/
  }
  return Register; /*0x6b4ef5*/
}
// 0x6b4f00
int UnitClass::SaveState(void* aP0, void* a1, void* aP2)
{
  return AbstractClass::SaveLoad_Prefix((int *)aP0, a1, aP2); /*0x6b4f14*/
}
// 0x744640
int UnitClass::PowerDrainUpdate(int a2)
{
  int v3; // eax
  int v4; // eax
  UnitClass *FollowerCar; // eax
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // eax
  int v10; // ecx

  FootClass::BeginPowerUpdate((FootClass *)this, a2); /*0x744649*/
  v3 = (*((int (__thiscall **)(UnitTypeClass *))this->Type->ptr_0 + 11))(this->Type); /*0x744656*/
  Power::TimerProcess(v3); /*0x74465c*/
  v4 = (*((int (__stdcall **)(void **))this->Type->ptr_4 + 4))(&this->Type->ptr_4); /*0x74466d*/
  Power::TimerProcess(v4); /*0x744673*/
  FollowerCar = this->FollowerCar; /*0x744678*/
  if ( FollowerCar ) /*0x744680*/
  {
    v6 = (*((int (__stdcall **)(void **))FollowerCar->ptr_4 + 4))(&FollowerCar->ptr_4); /*0x744689*/
    Power::TimerProcess(v6); /*0x74468f*/
  }
  Power::TimerProcess(this->FlagHouseIndex); /*0x74469d*/
  (*((unsigned char *)&(v7))) = this->HasFollowerCar; /*0x7446a2*/
  Power::FlagProcess((Power *)a2, v7); /*0x7446ab*/
  (*((unsigned char *)&(v8))) = this->Unloading; /*0x7446b0*/
  v9 = Power::FlagProcess((Power *)a2, v8); /*0x7446b9*/
  (*((unsigned char *)&(v9))) = this->UnitClass_field_bool_6D2; /*0x7446be*/
  Power::FlagProcess((Power *)a2, v9); /*0x7446c7*/
  (*((unsigned char *)&(v10))) = this->unknownBool687; /*0x7446cc*/
  return Power::FlagProcess((Power *)a2, v10); /*0x7446da*/
}
// 0x746810
int UnitClass::PerFrameUpdate()
{
  int v2; // ecx
  unsigned int *result; // eax
  int v5; // edi
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // edx
  unsigned int *v10; // eax
  int v11; // eax
  int v12; // eax
  TechnoClass *v13; // [esp+0h] [ebp-8h]

  v2 = v2; /*0x746812*/
  result = TechnoClass::Update(v13, a2); /*0x746814*/
  v5 = v2->Type; /*0x746819*/
  if ( v5 ) /*0x746821*/
  {
    v6 = v2->owner; /*0x746827*/
    if ( v6 ) /*0x74682f*/
    {
      v7 = 0; /*0x746834*/
      v8 = v6->relatedTagsCapacity + 360; /*0x746836*/
      v9 = *(unsigned int *)(v8 + 16); /*0x74683b*/
      if ( v9 > 0 ) /*0x746840*/
      {
        v10 = *(unsigned int **)(v8 + 4); /*0x746842*/
        while ( *v10 != v5 ) /*0x746847*/
        {
          ++v7; /*0x746849*/
          ++v10; /*0x74684a*/
          if ( v7 >= v9 ) /*0x74684f*/
            goto LABEL_9; /*0x74684f*/
        }
        Power::ChangedHouse(&v2->veterancy, 1); /*0x74685b*/
      }
    }
  LABEL_9:
    v11 = v2->owner; /*0x746860*/
    if ( v11 ) /*0x746868*/
    {
      if ( v11->warFactoryInfiltrated ) /*0x74686a*/
      {
        v12 = v2->Type; /*0x746874*/
        if ( !v12->Naval ) /*0x74687a*/
        {
          if ( v12->Trainable ) /*0x746884*/
            Power::ChangedHouse(&v2->veterancy, 1); /*0x746896*/
        }
      }
    }
    result = v2->Type; /*0x74689b*/
    if ( result->u8_805 ) /*0x7468a1*/
      return (unsigned int *)UnitClass::SetTurret((UnitClass *)v2, 0); /*0x7468af*/
  }
  return result; /*0x7468b4*/
}
// 0x7446e0
int UnitClass::HandleTargetDestroyed(void* a1, void* aP2)
{
  int result; // eax

  FootClass::HandleTargetDestroyed((FootClass *)this, a1, aP2); /*0x7446ee*/
  result = 0; /*0x7446f9*/
  if ( (int *)this->FollowerCar == a1 ) /*0x7446fd*/
    this->FollowerCar = 0; /*0x7446ff*/
  if ( (int *)this->Type == a1 ) /*0x74470b*/
    this->Type = 0; /*0x74470d*/
  return result; /*0x744713*/
}
// 0x6b4f20
int UnitClass::CheckStatus()
{
  return (int)this->Type; /*0x6b4f26*/
}
// 0x6b7c60
int UnitClass::ClearTargetRef(int a2)
{
  int result; // eax
  int v4; // edx
  unsigned int **v5; // ecx
  unsigned int *v6; // ecx
  ObjectClass *nextObject; // edx
  int v8; // [esp+10h] [ebp-8h]

  if ( a2 == *&this->bombVisible ) /*0x6b7c6f*/
  {
    result = this->health; /*0x6b7c71*/
    *&this->bombVisible = 0; /*0x6b7c74*/
    if ( !result ) /*0x6b7c7d*/
      return UnitClass::ProcessIdleOrders(this); /*0x6b7c7f*/
  }
  else if ( a2 == this->health ) /*0x6b7c90*/
  {
    this->health = 0; /*0x6b7c92*/
  }
  else
  {
    result = this->ambientSoundController[3] - 1; /*0x6b7ca5*/
    if ( result < 0 ) /*0x6b7ca6*/
    {
  LABEL_10:
      if ( a2 == this->occupant ) /*0x6b7cbf*/
      {
        TaskManager::Update((TaskManager *)this); /*0x6b7cc3*/
        return UnitClass::ProcessIdleOrders(this); /*0x6b7cca*/
      }
    }
    else
    {
      v4 = this->ambientSoundController[0]; /*0x6b7ca8*/
      v5 = (unsigned int **)(v4 + 4 * result); /*0x6b7cab*/
      while ( a2 != **v5 ) /*0x6b7cb2*/
      {
        --result; /*0x6b7cb4*/
        --v5; /*0x6b7cb5*/
        if ( result < 0 ) /*0x6b7cba*/
          goto LABEL_10; /*0x6b7cba*/
      }
      v6 = *(unsigned int **)(v4 + 4 * result); /*0x6b7cd8*/
      if ( *(int *)(*v6 + 108) <= 0 || *(unsigned char *)(*v6 + 1738) || v6[5] == 1 ) /*0x6b7cf2*/
      {
        *v6 = 0; /*0x6b7cf4*/
        *(unsigned int *)(*(unsigned int *)(this->ambientSoundController[0] + 4 * result) + 4) = 7; /*0x6b7d01*/
        nextObject = this->nextObject; /*0x6b7d08*/
        result = *(unsigned int *)(this->ambientSoundController[0] + 4 * result) + 8; /*0x6b7d18*/
        *(unsigned int *)result = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416]; /*0x6b7d1c*/
        result->u32_4 = v8; /*0x6b7d22*/
        result->VtableStub_8 = nextObject; /*0x6b7d25*/
      }
    }
  }
  return result; /*0x6b7c84*/
}
// 0x4d4280
int UnitClass::ApproachEvaluate()
{
  double v1; // st7
  int v3; // eax
  int v4; // ebp
  void *ptr_0; // edx
  int v7; // eax
  int v8; // edi
  int v9; // eax
  unsigned int *v10; // eax
  void *v11; // eax
  unsigned int *v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int (__thiscall **v16)(FootClass *); // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v21; // eax
  AbstractClass *target; // eax
  void **v23; // edi
  int v24; // ebx
  int (__thiscall **v27)(FootClass *, int, int); // edi
  int v28; // eax
  int v29; // eax
  int v30; // ebx
  int v31; // edi
  unsigned int *v32; // eax
  int FootClass_field_5DC; // ebx
  int v34; // eax
  int v35; // eax
  unsigned int *v36; // eax
  int v37; // ebx
  int v38; // eax
  int v39; // ecx
  void (__thiscall **v40)(FootClass *, unsigned int); // eax
  int16_t *v41; // ebp
  char v42; // al
  AbstractClass *focus; // ecx
  unsigned int *v44; // eax
  CellClass *v45; // edi
  int v46; // eax
  int v48; // ecx
  int v49; // eax
  int v50; // edx
  void (__thiscall **v51)(FootClass *, unsigned int, int); // edx
  int (__thiscall **v52)(FootClass *, int, int); // edi
  int v53; // eax
  int v54; // ebx
  int v55; // edi
  int v56; // eax
  unsigned int *v57; // eax
  int v58; // ebx
  int v59; // eax
  int v60; // ecx
  AbstractClass *v61; // eax
  void (__thiscall **v62)(FootClass *, unsigned int, int); // eax
  int TileIndex; // [esp-4h] [ebp-D0h]
  int v64; // [esp+0h] [ebp-CCh]
  int v65; // [esp+24h] [ebp-A8h]
  int v66; // [esp+34h] [ebp-98h]
  int v67; // [esp+38h] [ebp-94h]
  int v68; // [esp+38h] [ebp-94h]
  int v69; // [esp+38h] [ebp-94h]
  int16_t v70[2]; // [esp+3Ch] [ebp-90h] BYREF
  int v71; // [esp+40h] [ebp-8Ch]
  int v72; // [esp+44h] [ebp-88h] BYREF
  int v73; // [esp+48h] [ebp-84h] BYREF
  int16_t v75; // [esp+50h] [ebp-7Ch] BYREF
  int v77; // [esp+58h] [ebp-74h] BYREF
  unsigned int v78[3]; // [esp+5Ch] [ebp-70h] BYREF
  int v79; // [esp+68h] [ebp-64h] BYREF
  unsigned char v80[12]; // [esp+6Ch] [ebp-60h] BYREF
  unsigned char v81[4]; // [esp+78h] [ebp-54h] BYREF
  unsigned char v82[20]; // [esp+7Ch] [ebp-50h] BYREF
  unsigned char v83[12]; // [esp+90h] [ebp-3Ch] BYREF
  unsigned char v84[12]; // [esp+9Ch] [ebp-30h] BYREF
  unsigned char v85[12]; // [esp+A8h] [ebp-24h] BYREF
  unsigned char v86[12]; // [esp+B4h] [ebp-18h] BYREF
  unsigned char v87[12]; // [esp+C0h] [ebp-Ch] BYREF

  v3 = (*((int (__thiscall **)(FootClass *, int))this->ptr_0 + 199))(this, 2); /*0x4d4290*/
  this->isChronoImmuneFlag = 1; /*0x4d429d*/
  v4 = v3 / 256 + 6; /*0x4d42b1*/
  switch ( this->missionStatus )
  {
    case 0:
      v78[0] = this->location[0]; /*0x4d42f7*/
      ptr_0 = this->ptr_0; /*0x4d42fb*/
      v78[1] = this->location[1]; /*0x4d4300*/
      v78[2] = this->location[2]; /*0x4d430c*/
      v7 = (*((int (__thiscall **)(FootClass *, int, unsigned int *, unsigned int))ptr_0 + 241))(this, 2, v78, 0); /*0x4d4314*/
      v71 = v7; /*0x4d431c*/
      if ( v7 )
        v8 = (*(unsigned char *)(v7 + 20) & 2) != 0 ? v7 : 0;
      else
        v8 = 0; /*0x4d4322*/
      v9 = (*((int (__thiscall **)(FootClass *, int))this->ptr_0 + 185))(this, v8); /*0x4d4339*/
      if ( v8 ) /*0x4d4341*/
      {
        if ( (*((uint8_t (__thiscall **)(FootClass *, int, int))this->ptr_0 + 234))(this, v8, v9) ) /*0x4d434d*/
          goto LABEL_10; /*0x4d434d*/
        v10 = (unsigned int *)(*(int (__thiscall **)(int))(*(unsigned int *)v8 + 76))(v8); /*0x4d4365*/
        (*((unsigned short *)&(v66))) = *v10 / 256; /*0x4d4379*/
        (*(((unsigned short *)&(v66)) + 1)) = v10[1] / 256; /*0x4d4392*/
        v11 = this->ptr_0; /*0x4d439b*/
        v73 = v66; /*0x4d439f*/
        v12 = (unsigned int *)(*((int (__thiscall **)(FootClass *, unsigned char *, unsigned int))v11 + 19))(this, v82, 0); /*0x4d43a3*/
        (*((unsigned short *)&(v66))) = *v12 / 256; /*0x4d43b9*/
        (*(((unsigned short *)&(v66)) + 1)) = v12[1] / 256; /*0x4d43cf*/
        v66 = v66; /*0x4d43d8*/
        v13 = (*(int (__thiscall **)(int, unsigned int, int))(*(unsigned int *)v8 + 188))(v8, 0, -1); /*0x4d43de*/
        v14 = (*((int (__thiscall **)(FootClass *, unsigned int, int))this->ptr_0 + 47))(this, 0, v13); /*0x4d43ea*/
        if ( Pathfinding::CalcDistance( /*0x4d4408*/
               (int)&g_AudioInitFlag,
               (int16_t *)&v69,
               &v75,
               (int)this,
               v14,
               (int)v84,
               0) < v4 )
        {
  LABEL_10:
          v15 = (*((int (__thiscall **)(FootClass *))this->ptr_0 + 113))(this); /*0x4d4412*/
          this->FootClass_field_5DC = v15; /*0x4d4418*/
          if ( (*(unsigned int *)(v15 + 320) & 0x100) != 0 /*0x4d4432*/
            && !(*((uint8_t (__thiscall **)(FootClass *, unsigned int))this->ptr_0 + 47))(this, 0) )
          {
            v16 = (int (__thiscall **)(FootClass *))this->ptr_0; /*0x4d4454*/
            v72 = 0; /*0x4d4459*/
            v64 = *(unsigned int *)(v16[33](this) + 1460); /*0x4d4471*/
            v17 = (*((int (__thiscall **)(FootClass *))this->ptr_0 + 33))(this); /*0x4d4475*/
            TileIndex = MapClass::GetTileIndex( /*0x4d4498*/
                          (MapClass *)&DataGlobal_87F7E8,
                          (int16_t *)(this->FootClass_field_5DC + 36),
                          *(unsigned int *)(v17 + 1460),
                          0);
            v18 = (*((int (__thiscall **)(FootClass *))this->ptr_0 + 33))(this); /*0x4d449b*/
            *(unsigned int *)v70 = *LayerClass::Pathfinding_Find( /*0x4d44ca*/
                                &DataGlobal_87F7E8,
                                (int)&v79,
                                &v79,
                                (int16_t *)(this->FootClass_field_5DC + 36),
                                *(unsigned int *)(v18 + 1660),
                                TileIndex,
                                v64,
                                0,
                                1,
                                1,
                                0,
                                1,
                                0,
                                0,
                                (int16_t *)&v72,
                                0,
                                0);
            if ( *(unsigned int *)v70 == g_FootClass_Pool ) /*0x4d44ce*/
            {
              this->FootClass_field_5DC = 0; /*0x4d4512*/
              return 60; /*0x4d4527*/
            }
            this->FootClass_field_5DC = (int)((CellCoord *)&DataGlobal_87F7E8)->To_CellObj(v70); /*0x4d44ed*/
          }
          if ( !this->focus ) /*0x4d44f3*/
          {
            v19 = *&this->q598; /*0x4d44fb*/
            if ( v19 <= 0 ) /*0x4d4503*/
            {
              if ( this->movementDestination ) /*0x4d4528*/
                TechnoClass::SetFocus((TechnoClass *)this, (int)this->movementDestination); /*0x4d4533*/
              else
                TechnoClass::SetFocus((TechnoClass *)this, this->FootClass_field_5DC); /*0x4d453e*/
            }
            else
            {
              TechnoClass::SetFocus((TechnoClass *)this, *(unsigned int *)(*(unsigned int *)this->__pad_58C + 4 * v19 - 4)); /*0x4d4510*/
            }
          }
          (*((void (__thiscall **)(FootClass *, unsigned int, int))this->ptr_0 + 288))(this, 0, 1); /*0x4d454a*/
          (*((void (__thiscall **)(FootClass *, int))this->ptr_0 + 242))(this, v71); /*0x4d4559*/
          goto LABEL_22; /*0x4d4559*/
        }
      }
      if ( !this->movementDestination ) /*0x4d45a2*/
        goto LABEL_28; /*0x4d45a2*/
      if ( !this->locomotor[0] ) /*0x4d45aa*/
        sub_7DC720(-2147467261); /*0x4d45b7*/
      if ( !(*(uint8_t (__stdcall **)(int))(*(unsigned int *)this->locomotor[0] + 16))(this->locomotor[0]) ) /*0x4d45c5*/
      {
  LABEL_28:
        (*((void (__thiscall **)(FootClass *, unsigned int, int))this->ptr_0 + 289))(this, 0, 1); /*0x4d45d3*/
        goto LABEL_70; /*0x4d45d3*/
      }
  LABEL_23:
      _EAX = MissionClass::GetMissionControl((MissionClass *)this); /*0x4d4569*/
      __asm /*0x4d4570*/
      {
        fld qword ptr [eax+10h]
        fmul ds:dbl_7E27F8
      }
      (*((unsigned short *)&(v21))) = Math::RoundToInt(v1); /*0x4d4579*/
      return v21 + Random::Range((Random *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x4d45a1*/
    case 1:
      target = this->target; /*0x4d45d8*/
      if ( target )
        v23 = (target->abstractFlags & 2) != 0 ? (void **)target : 0;
      else
        v23 = 0; /*0x4d45e2*/
      v24 = (*((int (__thiscall **)(FootClass *, void **))this->ptr_0 + 185))(this, v23); /*0x4d45ff*/
      if ( !(*((uint8_t (__thiscall **)(FootClass *))this->ptr_0 + 204))(this) ) /*0x4d460d*/
        goto LABEL_41; /*0x4d460d*/
      if ( !v23 ) /*0x4d4615*/
        goto LABEL_38; /*0x4d4615*/
      if ( (*((int (__thiscall **)(void **))*v23 + 11))(v23) != 6 ) /*0x4d4621*/
        goto LABEL_41; /*0x4d4621*/
      if ( !(uint8_t)HouseClass::IsAlliedWith((void *)this->owner, v23[135]) ) /*0x4d4630*/
        goto LABEL_41; /*0x4d4630*/
      BuildingClass::GetHealthRatio((BuildingClass *)v23); /*0x4d463b*/
      _ECX = *(unsigned int *)&g_RulesClass_Instance; /*0x4d4640*/
      __asm /*0x4d4646*/
      {
        fcomp qword ptr [ecx+1708h]
        fnstsw ax
      }
      if ( (_AX & 0x4100) == 0 ) /*0x4d4651*/
      {
        (*((void (__thiscall **)(FootClass *, unsigned int))this->ptr_0 + 242))(this, 0); /*0x4d4659*/
      }
      else
      {
  LABEL_41:
        if ( v23 ) /*0x4d46a3*/
        {
          if ( (*((uint8_t (__thiscall **)(FootClass *, void **, int))this->ptr_0 + 234))(this, v23, v24) ) /*0x4d46ab*/
            goto LABEL_44; /*0x4d46ab*/
          v32 = (unsigned int *)(*((int (__thiscall **)(void **, unsigned char *))*v23 + 19))(v23, v86); /*0x4d46c3*/
          FootClass_field_5DC = this->FootClass_field_5DC; /*0x4d46c8*/
          (*((unsigned short *)&(v67))) = *v32 / 256; /*0x4d46e0*/
          (*(((unsigned short *)&(v67)) + 1)) = v32[1] / 256; /*0x4d46f4*/
          v72 = v67; /*0x4d46fd*/
          v65 = (*((int (__thiscall **)(void **, unsigned int, int))*v23 + 47))(v23, 0, -1); /*0x4d470b*/
          v34 = *(unsigned int *)(FootClass_field_5DC + 320) >> 8; /*0x4d4712*/
          (*((unsigned char *)&(v34))) = v34 & 1; /*0x4d4715*/
          if ( Pathfinding::CalcDistance( /*0x4d472e*/
                 (int)&g_AudioInitFlag,
                 (int16_t *)(FootClass_field_5DC + 36),
                 (int16_t *)&v73,
                 (int)this,
                 v34,
                 v65,
                 0) < v4 )
          {
  LABEL_44:
            (*((void (__thiscall **)(FootClass *, unsigned int))this->ptr_0 + 335))(this, 0); /*0x4d473a*/
            if ( this->target ) /*0x4d4740*/
              goto LABEL_23; /*0x4d4748*/
            (*((void (__thiscall **)(FootClass *, AbstractClass *, int))this->ptr_0 + 288))(this, this->focus, 1); /*0x4d475b*/
            TechnoClass::SetFocus((TechnoClass *)this, 0); /*0x4d4766*/
            this->FootClass_field_5DC = 0; /*0x4d476b*/
            this->missionStatus = 0; /*0x4d4771*/
            return 45; /*0x4d4786*/
          }
        }
      }
  LABEL_38:
      if ( !this->target )
      {
        v27 = (int (__thiscall **)(FootClass *, int, int))this->ptr_0; /*0x4d4673*/
        v28 = this->FootClass_field_5DC->GetCoords_0(/*0x4d467e*/
                this->FootClass_field_5DC, v80, 0);
        v29 = v27[241](this, 2, v28); /*0x4d4686*/
        v30 = v29; /*0x4d468c*/
        v71 = v29; /*0x4d4690*/
        v31 = v29 ? ((*(unsigned char *)(v29 + 20) & 2) != 0 ? v29 : 0) : 0;
        v35 = (*((int (__thiscall **)(FootClass *, int))this->ptr_0 + 185))(this, v31); /*0x4d479a*/
        if ( v31 ) /*0x4d47a2*/
        {
          if ( (*((uint8_t (__thiscall **)(FootClass *, int, int))this->ptr_0 + 234))(this, v31, v35) ) /*0x4d47ae*/
          {
  LABEL_51:
            (*((void (__thiscall **)(FootClass *, int))this->ptr_0 + 242))(this, v30); /*0x4d4835*/
            (*((void (__thiscall **)(FootClass *, unsigned int, int))this->ptr_0 + 288))(this, 0, 1); /*0x4d4848*/
            return 1; /*0x4d485d*/
          }
          v36 = (unsigned int *)(*(int (__thiscall **)(int, unsigned char *))(*(unsigned int *)v31 + 76))(v31, v81); /*0x4d47c3*/
          v37 = this->FootClass_field_5DC; /*0x4d47c8*/
          (*((unsigned short *)&(v68))) = *v36 / 256; /*0x4d47e0*/
          (*(((unsigned short *)&(v68)) + 1)) = v36[1] / 256; /*0x4d47f6*/
          v73 = v68; /*0x4d47ff*/
          v38 = (*(int (__thiscall **)(int, unsigned int, int))(*(unsigned int *)v31 + 188))(v31, 0, -1); /*0x4d4805*/
          v39 = this->q71C >> 8; /*0x4d4812*/
          (*((unsigned char *)&(v39))) = v39 & 1; /*0x4d4815*/
          if ( Pathfinding::CalcDistance( /*0x4d482f*/
                 (int)&g_AudioInitFlag,
                 (int16_t *)(v37 + 36),
                 (int16_t *)&v66,
                 (int)this,
                 v39,
                 v38,
                 0) < v4 )
          {
            v30 = v71; /*0x4d4831*/
            goto LABEL_51; /*0x4d4831*/
          }
        }
      }
      v40 = (void (__thiscall **)(FootClass *, unsigned int))this->ptr_0; /*0x4d485e*/
      this->missionStatus = 2; /*0x4d4864*/
      v40[242](this, 0); /*0x4d486e*/
      if ( this->focus ) /*0x4d4874*/
      {
        v41 = (int16_t *)(*((int (__thiscall **)(FootClass *))this->ptr_0 + 113))(this); /*0x4d488c*/
        v42 = (*((int (__thiscall **)(FootClass *, unsigned int))this->ptr_0 + 47))(this, 0); /*0x4d4894*/
        focus = this->focus; /*0x4d489a*/
        (*((unsigned char *)&(v71))) = v42; /*0x4d48a0*/
        v44 = (unsigned int *)(*((int (__thiscall **)(AbstractClass *, unsigned char *))focus->ptr_0 + 18))(focus, v83); /*0x4d48ab*/
        v45 = ((Coord *)&DataGlobal_87F7E8)->To_Cell( v44); /*0x4d48b9*/
        v46 = this->FootClass_field_5DC; /*0x4d48bb*/
        v71 = v71; /*0x4d48c1*/
        v48 = this->q71C >> 8; /*0x4d48d0*/
        (*((unsigned char *)&(v48))) = v48 & 1; /*0x4d48d3*/
        v41 += 18; /*0x4d48d6*/
        v49 = Pathfinding::CalcDistance( /*0x4d48e3*/
                (int)&g_AudioInitFlag,
                v41,
                (int16_t *)(v46 + 36),
                (int)this,
                v71,
                v48,
                -1);
        v50 = (unsigned int)v45->flags[0] >> 8; /*0x4d48f0*/
        (*((unsigned char *)&(v50))) = v50 & 1; /*0x4d48f3*/
        v71 = v49; /*0x4d4903*/
        if ( v49 >= Pathfinding::CalcDistance( /*0x4d4910*/
                      (int)&g_AudioInitFlag,
                      v41,
                      (int16_t *)&v45->smudgeTypeIndex,
                      (int)this,
                      v71,
                      v50,
                      -1) )
          (*((void (__thiscall **)(FootClass *, AbstractClass *, int))this->ptr_0 + 288))(this, this->focus, 1); /*0x4d4942*/
        else
          (*((void (__thiscall **)(FootClass *, int, int))this->ptr_0 + 288))(this, this->FootClass_field_5DC, 1); /*0x4d491f*/
        return 1; /*0x4d4928*/
      }
      else
      {
        v51 = (void (__thiscall **)(FootClass *, unsigned int, int))this->ptr_0; /*0x4d4958*/
        this->missionStatus = 0; /*0x4d4960*/
        v51[289](this, 0, 1); /*0x4d496a*/
        this->missionStatus = 3; /*0x4d4970*/
        return 1; /*0x4d497d*/
      }
    case 2:
      v52 = (int (__thiscall **)(FootClass *, int, int))this->ptr_0; /*0x4d4990*/
      v53 = this->FootClass_field_5DC->GetCoords_0(/*0x4d499b*/
              this->FootClass_field_5DC, v85, 0);
      v54 = v52[241](this, 2, v53); /*0x4d49a9*/
      v71 = v54; /*0x4d49ad*/
      if ( v54 )
        v55 = (v54->abstractFlags & 2) != 0 ? v54 : 0;
      else
        v55 = 0; /*0x4d49b3*/
      v56 = (*((int (__thiscall **)(FootClass *, int))this->ptr_0 + 185))(this, v55); /*0x4d49c9*/
      if ( !v55 ) /*0x4d49d1*/
        goto LABEL_66; /*0x4d49d1*/
      if ( (*((uint8_t (__thiscall **)(FootClass *, int, int))this->ptr_0 + 234))(this, v55, v56) ) /*0x4d49dd*/
        goto LABEL_65; /*0x4d49e5*/
      v57 = (unsigned int *)(*(int (__thiscall **)(int, unsigned char *))(*(unsigned int *)v55 + 76))(v55, v87); /*0x4d49f9*/
      v58 = this->FootClass_field_5DC; /*0x4d49fe*/
      (*((unsigned short *)&(v69))) = *v57 / 256; /*0x4d4a16*/
      (*(((unsigned short *)&(v69)) + 1)) = v57[1] / 256; /*0x4d4a2c*/
      v69 = v69; /*0x4d4a35*/
      v59 = (*(int (__thiscall **)(int, unsigned int, int))(*(unsigned int *)v55 + 188))(v55, 0, -1); /*0x4d4a3b*/
      v60 = this->q71C >> 8; /*0x4d4a48*/
      (*((unsigned char *)&(v60))) = v60 & 1; /*0x4d4a4b*/
      if ( Pathfinding::CalcDistance( /*0x4d4a65*/
             (int)&g_AudioInitFlag,
             (int16_t *)(v58 + 36),
             (int16_t *)&v77,
             (int)this,
             v60,
             v59,
             0) < v4 )
      {
        v54 = v71; /*0x4d4a67*/
  LABEL_65:
        (*((void (__thiscall **)(FootClass *, int))this->ptr_0 + 242))(this, v54); /*0x4d4a6b*/
        (*((void (__thiscall **)(FootClass *, unsigned int, int))this->ptr_0 + 288))(this, 0, 1); /*0x4d4a7e*/
  LABEL_22:
        this->missionStatus = 1; /*0x4d455f*/
        goto LABEL_23; /*0x4d455f*/
      }
  LABEL_66:
      if ( this->movementDestination ) /*0x4d4a89*/
        goto LABEL_23; /*0x4d4a91*/
      (*((void (__thiscall **)(FootClass *, unsigned int))this->ptr_0 + 242))(this, 0); /*0x4d4a9e*/
      v61 = this->focus; /*0x4d4aa4*/
      if ( v61 ) /*0x4d4aac*/
      {
        (*((void (__thiscall **)(FootClass *, AbstractClass *, int))this->ptr_0 + 288))(this, v61, 1); /*0x4d4ab5*/
        TechnoClass::SetFocus((TechnoClass *)this, 0); /*0x4d4abe*/
        this->missionStatus = 0; /*0x4d4ac3*/
        this->FootClass_field_5DC = 0; /*0x4d4ac9*/
        goto LABEL_23; /*0x4d4acf*/
      }
      v62 = (void (__thiscall **)(FootClass *, unsigned int, int))this->ptr_0; /*0x4d4ad4*/
      this->missionStatus = 0; /*0x4d4ad8*/
      v62[289](this, 0, 1); /*0x4d4ae1*/
  LABEL_70:
      this->missionStatus = 3; /*0x4d4ae7*/
      return 1; /*0x4d4af4*/
    case 3:
      if ( !this->movementDestination ) /*0x4d42cc*/
        goto LABEL_23; /*0x4d42cc*/
      this->missionStatus = 0; /*0x4d42d2*/
      return 1; /*0x4d42eb*/
    default:
      goto LABEL_23;
  }
}
// 0x5f5c60
double BuildingClass::GetHealthRatio() const
{
  return (*((int (__thiscall **)(BuildingClass *, unsigned int, unsigned int))this->ptr_0 + 34))( /*0x5f5c7c*/
           this,
           COERCE_UNSIGNED_INT64((double)this->health),
           (*(((unsigned int *)&(COERCE_UNSIGNED_INT64((double)this->health))) + 1)));
}
/* ASM:
sub     esp, 90h
push    ebx
push    ebp
push    esi
mov     esi, ecx
push    edi
push    2
mov     eax, [esi]
call    dword ptr [eax+31Ch]
cdq
and     edx, 0FFh
mov     byte ptr [esi+430h], 1
add     eax, edx
mov     ebp, eax
mov     eax, [esi+0BCh]
sar     ebp, 8
add     ebp, 6
cmp     eax, 3          ; switch 4 cases
ja      def_4D42BD      ; jumptable 004D42BD default case
jmp     ds:jpt_4D42BD[eax*4] ; switch jump
; ---------------------------------------------------------------------------

loc_4D42C4:                             ; CODE XREF: UnitClass__ApproachEvaluate+3D↑j
; DATA XREF: .text:jpt_4D42BD↓o
mov     eax, [esi+5A4h] ; jumptable 004D42BD case 3
test    eax, eax
jz      def_4D42BD      ; jumptable 004D42BD default case
mov     dword ptr [esi+0BCh], 0
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 90h
retn
; ---------------------------------------------------------------------------

loc_4D42EC:                             ; CODE XREF: UnitClass__ApproachEvaluate+3D↑j
; DATA XREF: .text:jpt_4D42BD↓o
lea     ecx, [esi+9Ch]  ; jumptable 004D42BD case 0
xor     ebx, ebx
push    ebx
mov     edx, [ecx]
mov     [esp+0A4h+var_70], edx
mov     edx, [esi]
mov     eax, [ecx+4]
mov     [esp+0A4h+var_6C], eax
lea     eax, [esp+0A4h+var_70]
mov     ecx, [ecx+8]
push    eax
mov     [esp+0A8h+var_68], ecx
push    2
mov     ecx, esi
call    dword ptr [edx+3C4h]
cmp     eax, ebx
mov     [esp+0A0h+var_8C], eax
jnz     short loc_4D4326
xor     edi, edi
jmp     short loc_4D4334
; ---------------------------------------------------------------------------

loc_4D4326:                             ; CODE XREF: UnitClass__ApproachEvaluate+A0↑j
mov     cl, [eax+14h]
and     cl, 2
neg     cl
sbb     ecx, ecx
and     ecx, eax
mov     edi, ecx

loc_4D4334:                             ; CODE XREF: UnitClass__ApproachEvaluate+A4↑j
mov     edx, [esi]
push    edi
mov     ecx, esi
call    dword ptr [edx+2E4h]
cmp     edi, ebx
jz      loc_4D45A2
mov     edx, [esi]
push    eax
push    edi
mov     ecx, esi
call    dword ptr [edx+3A8h]
test    al, al
jnz     loc_4D440E
mov     eax, [edi]
lea     ecx, [esp+0A0h+var_30]
push    ebx
push    ecx
mov     ecx, edi
call    dword ptr [eax+4Ch]
mov     ecx, eax
push    ebx
mov     eax, [ecx]
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+0ACh+var_98], ax
mov     eax, [ecx+4]
cdq
and     edx, 0FFh
lea     ecx, [esp+0ACh+var_50]
add     eax, edx
push    ecx
sar     eax, 8
mov     word ptr [esp+0B0h+var_98+2], ax
mov     edx, [esp+0B0h+var_98]
mov     eax, [esi]
mov     ecx, esi
mov     [esp+0B0h+var_84], edx
call    dword ptr [eax+4Ch]
mov     ecx, eax
push    0FFFFFFFFh
push    ebx
mov     eax, [ecx]
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+0B0h+var_98], ax
mov     eax, [ecx+4]
cdq
and     edx, 0FFh
mov     ecx, edi
add     eax, edx
sar     eax, 8
mov     word ptr [esp+0B0h+var_98+2], ax
mov     edx, [esp+0B0h+var_98]
mov     [esp+0B0h+var_80], edx
mov     eax, [edi]
call    dword ptr [eax+0BCh]
mov     edx, [esi]
push    eax
push    ebx
mov     ecx, esi
call    dword ptr [edx+0BCh]
push    eax
lea     eax, [esp+0ACh+var_7C]
push    esi
lea     ecx, [esp+0B0h+var_78]
push    eax
push    ecx
mov     ecx, 87E8B8h
call    Pathfinding__CalcDistance
cmp     eax, ebp
jge     loc_4D45A2

loc_4D440E:                             ; CODE XREF: UnitClass__ApproachEvaluate+D5↑j
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+1C4h]
mov     [esi+5DCh], eax
mov     ecx, [eax+140h]
test    ch, 1
jz      loc_4D44F3
mov     eax, [esi]
push    ebx
mov     ecx, esi
call    dword ptr [eax+0BCh]
test    al, al
jnz     loc_4D44F3
push    ebx
lea     edx, [esp+0A4h+var_88]
push    ebx
push    edx
mov     eax, 1
push    ebx
push    ebx
mov     ecx, eax
push    eax
push    ebx
push    ecx
push    eax
mov     eax, [esi]
push    ebx
mov     ecx, esi
mov     word ptr [esp+0C8h+var_88], bx
mov     word ptr [esp+0C8h+var_88+2], bx
call    dword ptr [eax+84h]
mov     ecx, [eax+5B4h]
mov     edx, [esi]
push    ecx
push    ebx
mov     ecx, esi
call    dword ptr [edx+84h]
mov     ecx, [esi+5DCh]
mov     eax, [eax+5B4h]
add     ecx, 24h ; '$'
push    eax
push    ecx
mov     ecx, 87F7E8h
call    MapClass__GetTileIndex
mov     edx, [esi]
push    eax
mov     ecx, esi
call    dword ptr [edx+84h]
mov     ecx, [esi+5DCh]
mov     eax, [eax+67Ch]
add     ecx, 24h ; '$'
push    eax
lea     edx, [esp+0D4h+var_64]
push    ecx
push    edx
mov     ecx, 87F7E8h
call    LayerClass__Pathfinding_Find
mov     eax, [eax]
cmp     ax, ds:8B3D88h
mov     [esp+0A0h+var_90], eax
jnz     short loc_4D44DE
mov     ax, word ptr [esp+0A0h+var_90+2]
cmp     ax, ds:8B3D8Ah
jz      short loc_4D4512

loc_4D44DE:                             ; CODE XREF: UnitClass__ApproachEvaluate+24E↑j
lea     ecx, [esp+0A0h+var_90]
push    ecx
mov     ecx, 87F7E8h
call    CellCoord__To_CellObj
mov     [esi+5DCh], eax

loc_4D44F3:                             ; CODE XREF: UnitClass__ApproachEvaluate+1A7↑j
; UnitClass__ApproachEvaluate+1BA↑j
cmp     [esi+218h], ebx
jnz     short loc_4D4543
mov     eax, [esi+598h]
cmp     eax, ebx
jle     short loc_4D4528
mov     edx, [esi+58Ch]
mov     eax, [edx+eax*4-4]
push    eax
jmp     short loc_4D453C
; ---------------------------------------------------------------------------

loc_4D4512:                             ; CODE XREF: UnitClass__ApproachEvaluate+25C↑j
mov     [esi+5DCh], ebx
pop     edi
pop     esi
pop     ebp
mov     eax, 3Ch ; '<'
pop     ebx
add     esp, 90h
retn
; ---------------------------------------------------------------------------

loc_4D4528:                             ; CODE XREF: UnitClass__ApproachEvaluate+283↑j
mov     eax, [esi+5A4h]
cmp     eax, ebx
jz      short loc_4D4535
push    eax
jmp     short loc_4D453C
; ---------------------------------------------------------------------------

loc_4D4535:                             ; CODE XREF: UnitClass__ApproachEvaluate+2B0↑j
mov     ecx, [esi+5DCh]
push    ecx

loc_4D453C:                             ; CODE XREF: UnitClass__ApproachEvaluate+290↑j
; UnitClass__ApproachEvaluate+2B3↑j
mov     ecx, esi
call    TechnoClass__SetFocus

loc_4D4543:                             ; CODE XREF: UnitClass__ApproachEvaluate+279↑j
mov     edx, [esi]
push    1
push    ebx
mov     ecx, esi
call    dword ptr [edx+480h]
mov     ecx, [esp+0A0h+var_8C]

loc_4D4554:                             ; DATA XREF: .rdata:off_7E1BC6↓o
; .data:off_83646C↓o
mov     eax, [esi]
push    ecx
mov     ecx, esi
call    dword ptr [eax+3C8h]

loc_4D455F:                             ; CODE XREF: UnitClass__ApproachEvaluate+804↓j
mov     dword ptr [esi+0BCh], 1

def_4D42BD:                             ; CODE XREF: UnitClass__ApproachEvaluate+37↑j
; UnitClass__ApproachEvaluate+4C↑j ...
mov     ecx, esi        ; jumptable 004D42BD default case
call    MissionClass__GetMissionControl
fld     qword ptr [eax+10h]
fmul    ds:dbl_7E27F8
call    Math__RoundToInt
mov     ecx, ds:0A8B230h
push    2
push    0
add     ecx, 218h
mov     esi, eax
call    Random__Range
add     eax, esi
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 90h
retn
; ---------------------------------------------------------------------------

loc_4D45A2:                             ; CODE XREF: UnitClass__ApproachEvaluate+C1↑j
; UnitClass__ApproachEvaluate+188↑j
cmp     [esi+5A4h], ebx
jz      short loc_4D45CE
cmp     [esi+674h], ebx
jnz     short loc_4D45BC
push    80004003h
call    sub_7DC720
; ---------------------------------------------------------------------------

loc_4D45BC:                             ; CODE XREF: UnitClass__ApproachEvaluate+330↑j
mov     eax, [esi+674h]
push    eax
mov     edx, [eax]
call    dword ptr [edx+10h]
test    al, al
jnz     short def_4D42BD ; jumptable 004D42BD default case
xor     ebx, ebx

loc_4D45CE:                             ; CODE XREF: UnitClass__ApproachEvaluate+328↑j
mov     eax, [esi]
push    1
push    ebx
jmp     loc_4D4ADF
; ---------------------------------------------------------------------------

loc_4D45D8:                             ; CODE XREF: UnitClass__ApproachEvaluate+3D↑j
; DATA XREF: .text:jpt_4D42BD↓o
mov     eax, [esi+2B4h] ; jumptable 004D42BD case 1
test    eax, eax
jnz     short loc_4D45E6
xor     edi, edi
jmp     short loc_4D45F4
; ---------------------------------------------------------------------------

loc_4D45E6:                             ; CODE XREF: UnitClass__ApproachEvaluate+360↑j
mov     cl, [eax+14h]
and     cl, 2
neg     cl
sbb     ecx, ecx
and     ecx, eax
mov     edi, ecx

loc_4D45F4:                             ; CODE XREF: UnitClass__ApproachEvaluate+364↑j
mov     edx, [esi]
push    edi
mov     ecx, esi
call    dword ptr [edx+2E4h]
mov     ebx, eax
mov     eax, [esi]
mov     ecx, esi
call    dword ptr [eax+330h]
test    al, al
jz      loc_4D46A1
test    edi, edi
jz      short loc_4D465F
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+2Ch]
cmp     eax, 6
jnz     short loc_4D46A1
mov     eax, [edi+21Ch]
mov     ecx, [esi+21Ch] ; this
push    eax             ; other
call    HouseClass__IsAlliedWith
test    al, al
jz      short loc_4D46A1
mov     ecx, edi
call    BuildingClass__GetHealthRatio
mov     ecx, ds:8871E0h
fcomp   qword ptr [ecx+1708h]
fnstsw  ax
test    ah, 41h
jnz     short loc_4D46A1
mov     edx, [esi]
push    0
mov     ecx, esi
call    dword ptr [edx+3C8h]

loc_4D465F:                             ; CODE XREF: UnitClass__ApproachEvaluate+395↑j
; UnitClass__ApproachEvaluate+423↓j ...
mov     eax, [esi+2B4h]
test    eax, eax
jnz     loc_4D485E
mov     ecx, [esi+5DCh]
mov     edi, [esi]
lea     eax, [esp+0A0h+var_60]
push    0
mov     edx, [ecx]
push    eax
call    dword ptr [edx+48h]
push    eax
push    2
mov     ecx, esi
call    dword ptr [edi+3C4h]
mov     ebx, eax
test    ebx, ebx
mov     [esp+0A0h+var_8C], ebx
jnz     loc_4D4787
xor     edi, edi
jmp     loc_4D4795
; ---------------------------------------------------------------------------

loc_4D46A1:                             ; CODE XREF: UnitClass__ApproachEvaluate+38D↑j
; UnitClass__ApproachEvaluate+3A1↑j ...
test    edi, edi
jz      short loc_4D465F
mov     eax, [esi]
push    ebx
push    edi
mov     ecx, esi
call    dword ptr [eax+3A8h]
test    al, al
jnz     short loc_4D4734
mov     edx, [edi]
lea     eax, [esp+0A0h+var_18]
push    0
push    eax
mov     ecx, edi
call    dword ptr [edx+4Ch]
mov     ecx, eax
mov     ebx, [esi+5DCh]
push    0FFFFFFFFh
push    0
mov     eax, [ecx]
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+0ACh+var_94], ax
mov     eax, [ecx+4]
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+0ACh+var_94+2], ax
mov     ecx, [esp+0ACh+var_94]
mov     [esp+0ACh+var_88], ecx
mov     edx, [edi]
mov     ecx, edi
call    dword ptr [edx+0BCh]
push    eax
mov     eax, [ebx+140h]
shr     eax, 8
and     al, 1
lea     ecx, [esp+0A8h+var_84]
push    eax
push    esi
add     ebx, 24h ; '$'
push    ecx
push    ebx
mov     ecx, 87E8B8h
call    Pathfinding__CalcDistance
cmp     eax, ebp
jge     loc_4D465F

loc_4D4734:                             ; CODE XREF: UnitClass__ApproachEvaluate+433↑j
mov     edx, [esi]
push    0
mov     ecx, esi
call    dword ptr [edx+53Ch]
mov     eax, [esi+2B4h]
test    eax, eax
jnz     def_4D42BD      ; jumptable 004D42BD default case
mov     ecx, [esi+218h]
mov     eax, [esi]
push    1
push    ecx
mov     ecx, esi
call    dword ptr [eax+480h]
xor     edi, edi
mov     ecx, esi
push    edi
call    TechnoClass__SetFocus
mov     [esi+5DCh], edi
mov     [esi+0BCh], edi
pop     edi
pop     esi
pop     ebp
mov     eax, 2Dh ; '-'
pop     ebx
add     esp, 90h
retn
; ---------------------------------------------------------------------------

loc_4D4787:                             ; CODE XREF: UnitClass__ApproachEvaluate+414↑j
mov     cl, [ebx+14h]
and     cl, 2
neg     cl
sbb     ecx, ecx
and     ecx, ebx
mov     edi, ecx

loc_4D4795:                             ; CODE XREF: UnitClass__ApproachEvaluate+41C↑j
mov     edx, [esi]
push    edi
mov     ecx, esi
call    dword ptr [edx+2E4h]
test    edi, edi
jz      loc_4D485E
mov     edx, [esi]
push    eax
push    edi
mov     ecx, esi
call    dword ptr [edx+3A8h]
test    al, al
jnz     short loc_4D4835
mov     eax, [edi]
lea     ecx, [esp+0A0h+var_54]
push    0
push    ecx
mov     ecx, edi
call    dword ptr [eax+4Ch]
mov     ecx, eax
mov     ebx, [esi+5DCh]
push    0FFFFFFFFh
push    0
mov     eax, [ecx]
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+0ACh+var_94], ax
mov     eax, [ecx+4]
cdq
and     edx, 0FFh
mov     ecx, edi
add     eax, edx
sar     eax, 8
mov     word ptr [esp+0ACh+var_94+2], ax
mov     edx, [esp+0ACh+var_94]
mov     [esp+0ACh+var_84], edx
mov     eax, [edi]
call    dword ptr [eax+0BCh]
mov     ecx, [ebx+140h]
push    eax
shr     ecx, 8
and     cl, 1
lea     edx, [esp+0A8h+var_80]
push    ecx
push    esi
add     ebx, 24h ; '$'
push    edx
push    ebx
mov     ecx, 87E8B8h
call    Pathfinding__CalcDistance
cmp     eax, ebp
jge     short loc_4D485E
mov     ebx, [esp+0A0h+var_8C]

loc_4D4835:                             ; CODE XREF: UnitClass__ApproachEvaluate+536↑j
mov     eax, [esi]
push    ebx
mov     ecx, esi
call    dword ptr [eax+3C8h]
mov     edx, [esi]
push    1
push    0
mov     ecx, esi
call    dword ptr [edx+480h]
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 90h
retn
; ---------------------------------------------------------------------------

loc_4D485E:                             ; CODE XREF: UnitClass__ApproachEvaluate+3E7↑j
; UnitClass__ApproachEvaluate+522↑j ...
mov     eax, [esi]
push    0
mov     ecx, esi
mov     dword ptr [esi+0BCh], 2
call    dword ptr [eax+3C8h]
mov     eax, [esi+218h]
test    eax, eax
jz      loc_4D4958
mov     edx, [esi]
mov     ecx, esi
call    dword ptr [edx+1C4h]
mov     ebp, eax
mov     eax, [esi]
push    0
mov     ecx, esi
call    dword ptr [eax+0BCh]
mov     ecx, [esi+218h]
mov     byte ptr [esp+0A0h+var_8C], al
lea     eax, [esp+0A0h+var_3C]
mov     edx, [ecx]
push    eax
call    dword ptr [edx+48h]
push    eax
mov     ecx, 87F7E8h
call    Coord__To_Cell
mov     edi, eax
mov     eax, [esi+5DCh]
mov     ebx, [esp+0A0h+var_8C]
push    0FFFFFFFFh
mov     ecx, [eax+140h]
add     eax, 24h ; '$'
shr     ecx, 8
and     cl, 1
add     ebp, 24h ; '$'
push    ecx
push    ebx
push    esi
push    eax
push    ebp
mov     ecx, 87E8B8h
call    Pathfinding__CalcDistance
mov     edx, [edi+140h]
push    0FFFFFFFFh
shr     edx, 8
and     dl, 1
add     edi, 24h ; '$'
push    edx
push    ebx
push    esi
push    edi
push    ebp
mov     ecx, 87E8B8h
mov     [esp+0B8h+var_8C], eax
call    Pathfinding__CalcDistance
cmp     [esp+0A0h+var_8C], eax
jge     short loc_4D4935
mov     ecx, [esi+5DCh]
mov     eax, [esi]
push    1
push    ecx
mov     ecx, esi
call    dword ptr [eax+480h]
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 90h
retn
; ---------------------------------------------------------------------------

loc_4D4935:                             ; CODE XREF: UnitClass__ApproachEvaluate+690↑j
mov     eax, [esi+218h]
mov     edx, [esi]
push    1
push    eax
mov     ecx, esi
call    dword ptr [edx+480h]
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 90h
retn
; ---------------------------------------------------------------------------

loc_4D4958:                             ; CODE XREF: UnitClass__ApproachEvaluate+5FC↑j
mov     edx, [esi]
push    1
push    0
mov     ecx, esi
mov     dword ptr [esi+0BCh], 0
call    dword ptr [edx+484h]
mov     dword ptr [esi+0BCh], 3
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 90h
retn
; ---------------------------------------------------------------------------

loc_4D498A:                             ; CODE XREF: UnitClass__ApproachEvaluate+3D↑j
; DATA XREF: .text:jpt_4D42BD↓o
mov     ecx, [esi+5DCh] ; jumptable 004D42BD case 2
mov     edi, [esi]
lea     edx, [esp+0A0h+var_24]
push    0
mov     eax, [ecx]
push    edx
call    dword ptr [eax+48h]
push    eax
push    2
mov     ecx, esi
call    dword ptr [edi+3C4h]
mov     ebx, eax
test    ebx, ebx
mov     [esp+0A0h+var_8C], ebx
jnz     short loc_4D49B7
xor     edi, edi
jmp     short loc_4D49C4
; ---------------------------------------------------------------------------

loc_4D49B7:                             ; CODE XREF: UnitClass__ApproachEvaluate+731↑j
mov     al, [ebx+14h]
and     al, 2
neg     al
sbb     eax, eax
and     eax, ebx
mov     edi, eax

loc_4D49C4:                             ; CODE XREF: UnitClass__ApproachEvaluate+735↑j
mov     edx, [esi]
push    edi
mov     ecx, esi
call    dword ptr [edx+2E4h]
test    edi, edi
jz      loc_4D4A89
mov     edx, [esi]
push    eax
push    edi
mov     ecx, esi
call    dword ptr [edx+3A8h]
test    al, al
jnz     loc_4D4A6B
mov     eax, [edi]
lea     ecx, [esp+0A0h+var_C]
push    0
push    ecx
mov     ecx, edi
call    dword ptr [eax+4Ch]
mov     ecx, eax
mov     ebx, [esi+5DCh]
push    0FFFFFFFFh
push    0
mov     eax, [ecx]
cdq
and     edx, 0FFh
add     eax, edx
sar     eax, 8
mov     word ptr [esp+0ACh+var_94], ax
mov     eax, [ecx+4]
cdq
and     edx, 0FFh
mov     ecx, edi
add     eax, edx
sar     eax, 8
mov     word ptr [esp+0ACh+var_94+2], ax
mov     edx, [esp+0ACh+var_94]
mov     [esp+0ACh+var_78], edx
mov     eax, [edi]
call    dword ptr [eax+0BCh]
mov     ecx, [ebx+140h]
push    eax
shr     ecx, 8
and     cl, 1
lea     edx, [esp+0A8h+var_74]
push    ecx
push    esi
add     ebx, 24h ; '$'
push    edx
push    ebx
mov     ecx, 87E8B8h
call    Pathfinding__CalcDistance
cmp     eax, ebp
jge     short loc_4D4A89
mov     ebx, [esp+0A0h+var_8C]

loc_4D4A6B:                             ; CODE XREF: UnitClass__ApproachEvaluate+765↑j
mov     eax, [esi]
push    ebx
mov     ecx, esi
call    dword ptr [eax+3C8h]
mov     edx, [esi]
push    1
push    0
mov     ecx, esi
call    dword ptr [edx+480h]
jmp     loc_4D455F
; ---------------------------------------------------------------------------

loc_4D4A89:                             ; CODE XREF: UnitClass__ApproachEvaluate+751↑j
; UnitClass__ApproachEvaluate+7E5↑j
mov     eax, [esi+5A4h]
test    eax, eax
jnz     def_4D42BD      ; jumptable 004D42BD default case
mov     eax, [esi]
xor     edi, edi
push    edi
mov     ecx, esi
call    dword ptr [eax+3C8h]
mov     eax, [esi+218h]
cmp     eax, edi
jz      short loc_4D4AD4
mov     edx, [esi]
push    1
push    eax
mov     ecx, esi
call    dword ptr [edx+480h]
push    edi
mov     ecx, esi
call    TechnoClass__SetFocus
mov     [esi+0BCh], edi
mov     [esi+5DCh], edi
jmp     def_4D42BD      ; jumptable 004D42BD default case
; ---------------------------------------------------------------------------

loc_4D4AD4:                             ; CODE XREF: UnitClass__ApproachEvaluate+82C↑j
mov     eax, [esi]
push    1
mov     [esi+0BCh], edi
push    edi

loc_4D4ADF:                             ; CODE XREF: UnitClass__ApproachEvaluate+353↑j
mov     ecx, esi
call    dword ptr [eax+484h]
mov     dword ptr [esi+0BCh], 3
pop     edi
pop     esi
pop     ebp
mov     eax, 1
pop     ebx
add     esp, 90h
retn
*/

// ============================================================
// Phase 3: Drawing
// ============================================================

void UnitClass::Draw(Point2D* screen_pos, RectangleStruct* bounds) const
{
    if (!screen_pos || !Type)
        return;

    (void)bounds;
}

void UnitClass::DrawVoxel(Point2D* screen_pos, RectangleStruct* bounds) const
{
    (void)screen_pos;
    (void)bounds;
}

void UnitClass::DrawPlacementPreview(Point2D* screen_pos, RectangleStruct* bounds) const
{
    (void)screen_pos;
    (void)bounds;
}

} // namespace gamemd

#include "e4/classes/InfantryClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/ScenarioClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/TeamClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/UnitTypeClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/Random_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/LayerClass_e4.hpp"  // w16g4 C3861 LayerClass:: supply
#include "e4/classes/HouseClass_e4.hpp"  // w16g4 C3861 HouseClass:: supply
#include "e4/classes/BuildingTypeClass_e4.hpp"  // w16g4 C3861 BuildingTypeClass:: supply
// [w16g4] C3861 supply (raw call-form evidence)
namespace gamemd { int ProcessUnitDeploymentAtCell(int p0, int p1, int p2); }  // x4:signals@0x7187a0
// [w14e3] fn vocab supply (g57b5-W5 variadic convention); evidence: raw_decomp entries
namespace gamemd {
    int ProcessUnitDeploymentAtCell(int p0, int p1, int p2);  // x4:signals@0x7187a0
} // namespace gamemd

// G57w10: q000 externs (truth e4_globals_decls)
extern unsigned char g_ptr_7E4F64[4];  // data: 0x7E4F64  // G57w10 vftable residue fix
extern unsigned char g_ptr_7E192C[4];  // data: 0x7E192C  // G57w10 vftable residue fix

namespace gamemd {

// --- UnitClass ---

// 0x6b4f50
HRESULT __stdcall UnitClass::GetClassID(CLSID* pClassID)
{
  if ( !pClassID ) /*0x6b4f56*/
    return -2147467261; /*0x6b4f58*/
  *pClassID = 237448645; /*0x6b4f66*/
  pClassID[1] = 298949647; /*0x6b4f6e*/
  pClassID[2] = -1610610249; /*0x6b4f77*/
  pClassID[3] = -777003740; /*0x6b4f80*/
  return 0; /*0x6b4f5d*/
}
/* ASM:
mov     eax, [esp+arg_4]
test    eax, eax
jnz     short loc_6B4F60
mov     eax, 80004003h
retn    8
; ---------------------------------------------------------------------------

loc_6B4F60:                             ; CODE XREF: UnitClass__GetClassID+6↑j
mov     ecx, ds:dword_7E9690
mov     [eax], ecx
mov     edx, ds:dword_7E9694
mov     [eax+4], edx
mov     ecx, ds:dword_7E9698
mov     [eax+8], ecx
mov     edx, ds:dword_7E969C
mov     [eax+0Ch], edx
xor     eax, eax
retn    8
*/
HRESULT __stdcall UnitClass::Load(IStream* pStm) { return S_OK; }
HRESULT __stdcall UnitClass::Save(IStream* pStm, BOOL fClearDirty) { return S_OK; }
AbstractType __stdcall UnitClass::whatAmI() const { return kObjectTypeId; }
int UnitClass::objectSize() const { return sizeof(UnitClass); }
void UnitClass::DrawAsVXL(Point2D* coords, RectangleStruct* bounding_rect, uint32_t dwUnk7, uint32_t dwUnk8) {}
void UnitClass::DrawAsSHP(Point2D* coords, RectangleStruct* bounding_rect, uint32_t dwUnk7, uint32_t dwUnk8) {

} // namespace gamemd
} // namespace gamemd
