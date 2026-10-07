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
extern int * StartAudioControllerAt(int aP0, unsigned int *a2, int **a1);  // W13-C raw 0x7509E0 (e4_protos.h:501 同形)
extern char FindPlacementPosition(void *a1, int a2, int a3, int a4, int a5);  // W13-C raw 0x718260 ObjectClass::FindPlacementPosition thiscall 自由形
// ---- g57b5 W5: qualified-call free-form vocab ----
namespace gamemd {
int Sqrt(...);   // g57b5 W5: raw 自由函数词表 (纯变参兜底)
int AnimClass_ctor(...);   // g57b5 W5: raw 词表 (纯变参兜底)
int BuildingClass_CreatePlacementCrater(...);   // g57b5 W5: raw 词表 (纯变参兜底)
int BulletClass_LoseTarget(...);   // g57b5 W5: raw 词表 (纯变参兜底)
int Cell_GetNeighbourContent(...);   // g57b5 W5: raw 词表 (纯变参兜底)
int FootClass_MissionMoveCarryallLand(...);   // g57b5 W5: raw 词表 (纯变参兜底)
int LinkedList_Pop(...);   // g57b5 W5: raw 词表 (纯变参兜底)
int MissionClass_GetMissionControl(...);   // g57b5 W5: raw 词表 (纯变参兜底)
int Random_Range(...);   // g57b5 W5: raw 词表 (纯变参兜底)
int TechnoClass_FindClosestPlacementCell(...);   // g57b5 W5: raw 词表 (纯变参兜底)
int TechnoClass_GetWaypointCoords(...);   // g57b5 W5: raw 词表 (纯变参兜底)
int AddMember(...);   // g57b5 W5: raw 自由函数词表 (纯变参兜底)
int ApplyOverlayReveal(...);   // g57b5 W5: raw 自由函数词表 (纯变参兜底)
int FillRevealBuffer(...);   // g57b5 W5: raw 自由函数词表 (纯变参兜底)
int FindNearbyCell(...);   // g57b5 W5: raw 自由函数词表 (纯变参兜底)
int GetDB(...);   // g57b5 W5: raw 自由函数词表 (纯变参兜底)
int Get_Waypoint_Location(...);   // g57b5 W5: raw 自由函数词表 (纯变参兜底)
int RoundToInt(...);   // g57b5 W5: raw 自由函数词表 (纯变参兜底)
int SelectMember(...);   // g57b5 W5: raw 自由函数词表 (纯变参兜底)
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
    abstractFlags = kUnitFlag;
}

// ============================================================
// Phase 3: Harvest/Unload
// ============================================================

// 0x4151e0
// Merged: Westwood combined harvest + unload into a single 5-case state machine.
// Case 3 handles unloading logic (pop cargo, apply overlay, handle team members).
int UnitClass::Mission_Harvest()
{
    AbstractClass *movementDestination; // ecx
    int v3; // edi
    int v4; // ebp
    int v5; // ebx
    unsigned int *v6; // eax
    char *MissionControl; // eax
    int v8; // eax
    int v10; // eax
    void (__thiscall **v11)(AircraftClass *, void *, int); // edi
    void *ClosestPlacementCell; // eax
    int DB; // eax
    int v14; // edi
    int v15; // eax
    void (__thiscall **vtable0)(AircraftClass *, void *, int); // ebx
    short *WaypointCoords; // eax
    void *v18; // eax
    void *NearbyCell; // eax
    void (__thiscall **v20)(AircraftClass *, void *, int); // edi
    short *Waypoint_Location; // eax
    void *v22; // eax
    void *v23; // eax
    TeamClass *team; // ecx
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

    switch ( ((unsigned int *)this)[0] )
    {
      case 0:
        if ( !(*((int (__thiscall **)(AircraftClass *))this->vtable1 + 114))((gamemd::AircraftClass *)(this))
          && ((unsigned int *)this)[0] == 0.0
          && ((movementDestination = ((unsigned int *)this)[0]) == 0
           || (v3 = ((unsigned int *)this)[0],
               v4 = ((unsigned int *)this)[1],
               v5 = ((unsigned int *)this)[2],
               v6 = (unsigned int *)(*((int (__thiscall **)(AbstractClass *, unsigned char *))movementDestination->vtable1 + 18))(
                                movementDestination,
                                v35),
               v3 == *v6)
           && v4 == v6[1]
           && v5 == v6[2]) )
        {
          ((unsigned int *)this)[0] = 3; /*0x415250*/
        }
        else if ( ((unsigned int *)this)[0]
               || !this->Type->TechnoTypeClass[3221]
               || (*((int (__thiscall **)(AircraftClass *))this->vtable1 + 114))((gamemd::AircraftClass *)(this)) <= 0 )
        {
          if ( ((unsigned int *)this)[0] )
          {
            if ( (*((unsigned __int8 (__thiscall **)(AircraftClass *, AbstractClass *))this->vtable1 + 340))(
                   this,
                   ((unsigned int *)this)[0]) )
            {
              DB = CCINIClass::GetDB((CCINIClass *)((unsigned int *)this)[0]); /*0x415334*/
              v14 = DB; /*0x415339*/
              if ( DB /*0x415360*/
                && (v15 = *(unsigned int *)(DB + 1492)) != 0
                && *TechnoClass_GetWaypointCoords(*(TechnoClass **)(v15 + 36), &v30) != g_AircraftStatusFlag )
              {
                vtable0 = *(void (__thiscall ***)(AircraftClass *, void *, int))this; /*0x415375*/  // g57e2 W2
                WaypointCoords = (short *)TechnoClass_GetWaypointCoords( /*0x415381*/
                                              *(TechnoClass **)(*(unsigned int *)(v14 + 1492) + 36),
                                              &v31);
                v18 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], WaypointCoords); /*0x41538c*/
 NearbyCell = (void *)(InfantryClass::FindNearbyCell((InfantryClass *)this, (int)v18)); /*0x415394*/
                vtable0[288](this, NearbyCell, 1); /*0x41539c*/
              }
              else
              {
                v20 = *(void (__thiscall ***)(AircraftClass *, void *, int))this; /*0x4153ad*/  // g57e2 W2
                Waypoint_Location = (short *)ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &v32, 700); /*0x4153bb*/
                v22 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], Waypoint_Location); /*0x4153c6*/
 v23 = (void *)(InfantryClass::FindNearbyCell((InfantryClass *)this, (int)v22)); /*0x4153ce*/
                v20[288](this, v23, 1); /*0x4153d6*/
 team = (TeamClass *)(((unsigned int *)this)[0]); /*0x4153dc*/
                if ( team ) /*0x4153e4*/
                  TeamClass::SelectMember((int)team, (int)((unsigned int *)this)[0]); /*0x4153f1*/
              }
            }
            else
            {
              v25 = (*(int (__thiscall **)(AircraftTypeClass *))(*(unsigned int *)this->Type + 188))((gamemd::AircraftTypeClass *)(this->Type)); /*0x41540d*/
              ((unsigned int *)this)[0] = v25 != (*((int (__thiscall **)(AircraftClass *))this->vtable1 + 114))((gamemd::AircraftClass *)(this)) ? 4 : 1;
            }
          }
          else
          {
            ((unsigned int *)this)[0] = 2; /*0x41530c*/
          }
        }
        else
        {
          v10 = (*((int (__thiscall **)(AircraftClass *, unsigned char *, unsigned int, unsigned int))this->vtable1 + 330))( /*0x4152cd*/
                  this,
                  &this->Type->TechnoTypeClass[1000],
                  0,
                  0);
          if ( v10 ) /*0x4152d5*/
          {
            (*((void (__thiscall **)(AircraftClass *, int, int))this->vtable1 + 288))((gamemd::AircraftClass *)(this), v10, 1); /*0x4152de*/
          }
          else
          {
            v11 = *(void (__thiscall ***)(AircraftClass *, void *, int))this; /*0x4152e9*/  // g57e2 W2
 ClosestPlacementCell = (void *)(TechnoClass_FindClosestPlacementCell((void *)this)); /*0x4152ef*/
            v11[288](this, ClosestPlacementCell, 1); /*0x4152f7*/
          }
        }
        goto LABEL_9; /*0x415250*/
      case 1:
        if ( !*(unsigned int *)&this->Locomotor ) /*0x41542a*/
          WinAPI::Wrapper(-2147467261); /*0x415439*/
        if ( !(*(unsigned __int8 (__stdcall **)(int))(*(unsigned int *)((unsigned int *)this)[0] + 16))(((unsigned int *)this)[0]) ) /*0x415447*/
          ((unsigned int *)this)[0] = 2; /*0x41544e*/
        if ( !(*((unsigned __int8 (__thiscall **)(AircraftClass *, AbstractClass *))this->vtable1 + 340))(this, ((unsigned int *)this)[0]) ) /*0x415463*/
          ((unsigned int *)this)[0] = 0; /*0x415471*/
        goto LABEL_9; /*0x41547b*/
      case 2:
        if ( !*(unsigned int *)&this->Locomotor ) /*0x415480*/
          WinAPI::Wrapper(-2147467261); /*0x41548f*/
        if ( !(*(unsigned __int8 (__stdcall **)(int))(*(unsigned int *)((unsigned int *)this)[0] + 16))(((unsigned int *)this)[0]) ) /*0x41549d*/
          ((unsigned int *)this)[0] = 3; /*0x4154a4*/
        return 1; /*0x4154ba*/
      case 3:
        if ( !((unsigned int *)this)[0] ) /*0x4154bb*/
        {
          if ( *(unsigned int *)&this->q118 ) /*0x4154c9*/
          {
            if ( this->Type[1].TechnoTypeClass[300] ) /*0x4154dd*/
            {
              (*((void (__thiscall **)(AircraftClass *, unsigned int))this->vtable1 + 73))((gamemd::AircraftClass *)(this), 0); /*0x4154ed*/
              FootClass_MissionMoveCarryallLand((void *)this); /*0x4154f5*/
              (*((void (__thiscall **)(AircraftClass *, int))this->vtable1 + 73))((gamemd::AircraftClass *)(this), 1); /*0x415500*/
            }
            else
            {
              v26 = LinkedList_Pop((void *)((unsigned int *)this)[0]); /*0x41551a*/
              v27 = (unsigned short *)(*((int (__thiscall **)(AircraftClass *, unsigned char *, AircraftClass *))this->vtable1 + 110))( /*0x415522*/
                               this,
                               v33,
                               this);
              MapClass::ApplyOverlayReveal((MapClass *)&stru_87F5F0.__pad_58[416], v27, v29); /*0x41552e*/
              if ( (*((int (__thiscall **)(AircraftClass *, int))this->vtable1 + 64))((gamemd::AircraftClass *)(this), v26) ) /*0x41553e*/
                *(unsigned char *)(v26 + 1060) = 0; /*0x415548*/
              v28 = (unsigned short *)(*((int (__thiscall **)(AircraftClass *, unsigned char *))this->vtable1 + 110))((gamemd::AircraftClass *)(this), v34); /*0x415559*/
              MapClass::FillRevealBuffer((MapClass *)&stru_87F5F0.__pad_58[416], v28, this); /*0x415565*/
              if ( !*(unsigned char *)(v26 + 1060) && *(unsigned int *)(v26 + 1492) ) /*0x415574*/
                TeamClass::AddMember((int *)((unsigned int *)this)[0], v26, 0); /*0x415587*/
              if ( !*(unsigned int *)&this->q118 ) /*0x41558c*/
                (*((void (__thiscall **)(AircraftClass *, unsigned int, int))this->vtable1 + 289))((gamemd::AircraftClass *)(this), 0, 1); /*0x4155a2*/
            }
          }
          else
          {
            (*((void (__thiscall **)(AircraftClass *, unsigned int, int))this->vtable1 + 289))((gamemd::AircraftClass *)(this), 0, 1); /*0x4155b5*/
          }
        }
        goto LABEL_9; /*0x415506*/
      case 4:
        ((unsigned int *)this)[0] = 0; /*0x4155c0*/
        return 1; /*0x4155cd*/
      default:
  LABEL_9:
 MissionControl = (char *)(MissionClass_GetMissionControl((void *)this)); /*0x41525a*/
        IDA_LOWORD(v8) = Math::RoundToInt(*((double *)MissionControl + 2) * 900.0); /*0x41526a*/
        return v8 + Random_Range((void *)&((AbstractClass *)dword_A8B230)[14].NeedsSaveOrLink, 0, 2);
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
    result = *(this + 167); /*0x6b608e*/
    if ( result > 0 ) /*0x6b6096*/
    {
      do /*0x6b611c*/
      {
        for ( i = 0; i < *(this + 166); ++i ) /*0x6b60ac*/
        {
          IDA_LOWORD(v9) = i + *a2; /*0x6b60bd*/
          IDA_HIWORD(v9) = v7 + a2[1]; /*0x6b60c6*/
          v8 = v9; /*0x6b60d5*/
          v6 = CellCoord::To_CellObj(&dword_87F7E8, (short *)&v8); /*0x6b60d9*/
          v6[18] = *(this + 165); /*0x6b60ea*/
          *((unsigned char *)v6 + 287) = i + *((unsigned char *)this + 664) * v7; /*0x6b60f5*/
          BuildingClass_CreatePlacementCrater(v6); /*0x6b60fb*/
        }
        result = ++v7; /*0x6b6115*/
      }
      while ( v7 < *(this + 167) ); /*0x6b611c*/
    }
    return result; /*0x6b6120*/
}
// 0x54e3b0
int UnitClass::GetExitCell(AbstractClass* aP1, AbstractClass* aP2, unsigned int *a2, unsigned int *a3)  // g57b5 W4: raw 真值补参 (a2,a3)
{
    unsigned int *v3; // esi
    int result; // eax
    unsigned int *v6; // eax
    unsigned int *v7; // ecx
    unsigned int *v8; // ebx
    bool v9; // zf
    unsigned int v10; // edi
    unsigned int *v11; // eax
    unsigned int *v12; // eax
    int v13; // ecx
    int v14; // edx
    char v15[12]; // [esp+Ch] [ebp-Ch] BYREF

    v3 = a2; /*0x54e3b6*/
    if ( !*(unsigned char *)(a2[433] + 3432) ) /*0x54e3c2*/
      return (*(int (__thiscall **)(unsigned int *, unsigned int))(*a2 + 988))(a2, 0); /*0x54e3d2*/
    v6 = RA2_OPNEW(8u); /*0x54e3e3*/
    v7 = a3; /*0x54e3e8*/
    v8 = v6; /*0x54e3ec*/
    v9 = a3 == 0; /*0x54e3f1*/
    *v6 = v3; /*0x54e3f3*/
    if ( v9 ) /*0x54e3f5*/
    {
      v10 = ((unsigned int)((*ProgressTimer::GetValue((unsigned short *)v3 + 452, &a2) >> 12) + 1) >> 1) & 7; /*0x54e414*/
      v11 = (unsigned int *)(*(int (__thiscall **)(unsigned int *))(*v3 + 444))(v3); /*0x54e417*/
      v8[1] = Cell_GetNeighbourContent(v11, v10); /*0x54e425*/
    }
    else
    {
      v12 = (unsigned int *)(*(int (__thiscall **)(unsigned int *, char *))(*v7 + 72))(v7, v15); /*0x54e432*/
      IDA_LOWORD(a2) = *v12 / 256; /*0x54e445*/
      IDA_HIWORD(a2) = v12[1] / 256; /*0x54e45e*/
      a3 = a2; /*0x54e46c*/
      v8[1] = CellCoord::To_CellObj(&dword_87F7E8, (short *)&a3); /*0x54e475*/
    }
    *((unsigned char *)v3 + 1738) = 1; /*0x54e47d*/
    v3[191] = 1; /*0x54e483*/
    result = *(unsigned int *)(this + 20); /*0x54e489*/
    if ( *(unsigned int *)(this + 28) < result /*0x54e4b6*/
      || (*(unsigned char *)(this + 25) || !result)
      && (v13 = *(unsigned int *)(this + 32), v13 > 0)
      && (result = (*(int (__thiscall **)(int, int, unsigned int))(*(unsigned int *)(this + 12) + 8))( (int)(this + 12), result + v13, 0 ),
          (unsigned char)result) )
    {
      result = *(unsigned int *)(this + 28); /*0x54e4b8*/
      v14 = *(unsigned int *)(this + 16); /*0x54e4bb*/
      *(unsigned int *)(this + 28) = result + 1; /*0x54e4c1*/
      *(unsigned int *)(v14 + 4 * result) = v8; /*0x54e4c4*/
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
    FootClass *Owner; // ecx
    int v4; // eax
    int owningHouseIndex0; // edx
    FootClass *v7; // ecx
    int *v8; // ebp
    int i; // edi
    BulletClass *v10; // ecx
    AnimClass *v11; // eax
    int *location; // ecx
    unsigned int *v13; // eax
    int v14; // edi
    int v15; // ecx
    int v16; // edx
    int v17; // eax
    TeleportLocomotionClass *v18; // eax
    int *p_State; // edi
    int v20; // ebx
    int v21; // eax
    int v22; // edx
    int v23; // eax
    int v24; // ebx
    int *v25; // eax
    TeleportLocomotionClass *v26; // edx
    int v27; // ecx
    int v28; // edx
    FootClass *v29; // edi
    int v30; // eax
    int *v31; // edi
    CrateClass *v32; // ebx
    FootClass *v33; // edi
    int v34; // eax
    int *v35; // edi
    AnimClass *v36; // eax
    int *v37; // ecx
    AnimClass *v38; // eax
    int *v39; // edx
    FootClass *v40; // edi
    int v41; // eax
    int *v42; // edi
    char PlacementPosition; // al
    int v44; // edi
    int *v45; // ebp
    FootClass *v46; // edi
    int v47; // eax
    int *v48; // edi
    short *v49; // eax
    FootClass *v50; // ecx
    int chronoLockRemaining; // ecx
    AnimClass *v52; // eax
    int *v53; // ecx
    BuildingClass *v54; // [esp+18h] [ebp-30h]
    short v55[2]; // [esp+28h] [ebp-20h] BYREF
    int v56; // [esp+2Ch] [ebp-1Ch] BYREF
    int v57; // [esp+30h] [ebp-18h]
    int v58; // [esp+34h] [ebp-14h]
    char v59[4]; // [esp+38h] [ebp-10h] BYREF
    int v60; // [esp+3Ch] [ebp-Ch]
    int v61; // [esp+44h] [ebp-4h]

 v2 = (TeleportLocomotionClass *)(this); /*0x7192f6*/
 Owner = (FootClass *)(((unsigned int *)this)[0]); /*0x7192fd*/
    v61 = 0; /*0x719300*/
    if ( ((unsigned int *)Owner)[0] && !*(unsigned int *)&v2->Moving && !((unsigned int *)Owner)[0] ) /*0x719313 g57w10 r4: raw 0x7192F0 this=TeleportLocomotionClass; v2=真型载体 (ml Moving)*/
      goto LABEL_82; /*0x719319*/
    v4 = *(unsigned int *)&v2->Moving; /*0x719331 g57w10 r4*/
    if ( !v4 ) /*0x719336*/
    {
      owningHouseIndex0 = ((unsigned int *)Owner)[0]; /*0x719338*/
      if ( owningHouseIndex0 ) /*0x719340*/
      {
        *(unsigned int *)&v2->Moving = owningHouseIndex0; /*0x719342 g57w10 r4*/
        return 0; /*0x71934e*/
      }
    }
    if ( ((unsigned int *)Owner)[0] ) /*0x719351*/
    {
      if ( !v4 ) /*0x7197ce*/
      {
        ((unsigned int *)Owner)[0] = 1; /*0x7197d0*/
        v2->State = *(unsigned int * *)((char *)&stru_A8EB00 + 644); /*0x7197e4*/
        ((unsigned int *)&v2->Timer)[0] = v60; /*0x7197ea*/  // g57e2 W3
        ((unsigned int *)&v2->Timer)[1] = 60; /*0x7197ed*/  // g57e2 W3
        ++*(unsigned int *)&v2->Moving; /*0x7197f4*/
        return 0; /*0x719800*/
      }
    }
    else if ( v4 <= 0 ) /*0x719361*/
    {
      if ( (*(unsigned __int8 (__stdcall **)(TeleportLocomotionClass *))(*(unsigned int *)v2 + 16))(this)  /*g57w10 r4: raw til 基类子对象渲染 this->LocomotionClass@0 = vfptr*/ ) /*0x71936a*/
      {
 v7 = (FootClass *)(((unsigned int *)v2)[0]); /*0x719375*/
 v8 = (int *)((unsigned int *)&v2->MovingDestination + 2); /*0x719378*/  // g57e2 W3
        if ( *(unsigned int *)&v7->vtable3 == ((unsigned int *)&v2->MovingDestination)[2] &&((char *)v7 + 8) == ((unsigned int *)&v2->LastCoords)[0] &&((char *)v7 + 8) == ((unsigned int *)&v2->LastCoords)[1] /*0x7193c1*/  // g57e2 W3
          || *v8 == ((char *)&g_BuildingLoadQueue_Array)
          && ((unsigned int *)&v2->LastCoords)[0] == ((unsigned int *)&g_BuildingLoadQueue_Array)[0]
          && ((unsigned int *)&v2->LastCoords)[1] == ((unsigned int *)&g_BuildingLoadQueue_Array)[0] )
        {
          (*((void (__thiscall **)(FootClass *, unsigned int, int))v7->vtable1 + 288))(v7, 0, 1); /*0x7197b4*/
          (*(void (__stdcall **)(TeleportLocomotionClass *))(*(unsigned int *)v2 + 72))(v2); /*0x7197bd g57w10 r4: til 基类子对象渲染@0=vfptr*/
          return 0; /*0x7197c0*/
        }
        else
        {
          AbstractClass::ClearTargetToMeClearManagerTarget((int)v7); /*0x7193c7*/
          for ( i = *(unsigned int * *)((char *)&stru_A8EB00 + 592) - 1; i >= 0; --i ) /*0x7193d6*/
          {
            v10 = *(BulletClass **)(*(unsigned int * *)((char *)&stru_A8EB00 + 580) + 4 * i); /*0x7193e1*/
            if ( v10->BulletClass_field_0x10C == ((unsigned int *)v2)[0] ) /*0x7193ec*/
              BulletClass_LoseTarget(v10); /*0x7193ee*/
          }
          v11 = (AnimClass *)RA2_OPNEW(0x1C8u); /*0x7193fb*/
          if ( v11 ) /*0x719405*/
          {
 location = (int *)(((unsigned int *)v2)[0]); /*0x71940b*/
            v56 = *location; /*0x71941c*/
            v57 = location[1]; /*0x719423*/
            v58 = location[2]; /*0x71942f*/
            AnimClass_ctor( /*0x719442*/
              v11,
              *(void **)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 828),
              &v56,
              0,
              1,
              (void *)0x600,
              0,
              0);
          }
          v13 = (unsigned int *)(*((int (__thiscall **)(FootClass *, char *))((unsigned int *)v2)[0]->vtable1 + 18))(((unsigned int *)v2)[0], v59); /*0x719451*/
          v14 = ((unsigned int *)&v2->LastCoords)[1]; /*0x719459*/  // g57e2 W3
          v15 = *v13 - *v8; /*0x71945c*/
          v16 = v13[1]; /*0x71945e*/
          v17 = v13[2]; /*0x719461*/
          v56 = v15; /*0x719464*/
          v57 = v16 - ((unsigned int *)&v2->LastCoords)[0]; /*0x71946f*/  // g57e2 W3
          v58 = v17 - v14; /*0x719473*/
          Math::Sqrt((double)v15 * (double)v15 + (double)(v17 - v14) * (double)(v17 - v14) + (double)v57 * (double)v57); /*0x71949f*/
          IDA_LOWORD(v18) = Math::RoundToInt(v1); /*0x7194a7*/
          p_State = &v2->State; /*0x7194ac*/
          this = v18; /*0x7194ba*/
          v2->State = *(unsigned int * *)((char *)&stru_A8EB00 + 644); /*0x7194be*/
          ((unsigned int *)&v2->Timer)[0] = v60; /*0x7194c4*/  // g57e2 W3
          ((unsigned int *)&v2->Timer)[1] = 0; /*0x7194c7*/  // g57e2 W3
          v20 = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x7194ca*/
          if ( *(unsigned char *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 3064) ) /*0x7194d0*/
          {
            v21 = (int)v18 / *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 3060); /*0x7194e3*/
            *p_State = (unsigned int)(*(unsigned int * *)((char *)&stru_A8EB00 + 644)); /*0x7194eb*/
            ((unsigned int *)&v2->Timer)[0] = v60; /*0x7194f1*/  // g57e2 W3
            ((unsigned int *)&v2->Timer)[1] = v21; /*0x7194f4*/  // g57e2 W3
            v20 = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x7194f7*/
          }
          v22 = *p_State; /*0x7194fd*/
          v23 = ((unsigned int *)&v2->Timer)[1]; /*0x7194ff*/  // g57e2 W3
          if ( *p_State != -1 ) /*0x719505*/
          {
            if ( *(unsigned int * *)((char *)&stru_A8EB00 + 644) - v22 >= v23 ) /*0x719511*/
              v23 = 0; /*0x719517*/
            else
              v23 -= *(unsigned int * *)((char *)&stru_A8EB00 + 644) - v22; /*0x719513*/
          }
          v24 = *(unsigned int *)(v20 + 3068); /*0x719519*/
          if ( v23 <= v24 ) /*0x719521*/
          {
            v58 = v24; /*0x71952d*/
            v56 = (unsigned int)(*(unsigned int * *)((char *)&stru_A8EB00 + 644))); /*0x719531*/
            v25 = &v56; /*0x719535*/
          }
          else
          {
            v25 = &v2->State; /*0x719523*/
          }
          *p_State = *v25; /*0x71953d*/
          ((unsigned int *)&v2->Timer)[0] = v25[1]; /*0x719542*/  // g57e2 W3
 v26 = (TeleportLocomotionClass *)(this); /*0x719548*/
          ((unsigned int *)&v2->Timer)[1] = v25[2]; /*0x71954c*/  // g57e2 W3
          if ( (int)v26 < *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 3072) ) /*0x71955b*/
          {
            v27 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 3068); /*0x719562*/
            *p_State = (unsigned int)(*(unsigned int * *)((char *)&stru_A8EB00 + 644)); /*0x71956a*/
            ((unsigned int *)&v2->Timer)[0] = v60; /*0x719570*/  // g57e2 W3
            ((unsigned int *)&v2->Timer)[1] = v27; /*0x719573*/  // g57e2 W3
          }
          ((unsigned int *)v2)[0] = 1; /*0x719579*/
          if ( (*((int (__thiscall **)(FootClass *))((unsigned int *)v2)[0]->vtable1 + 11))(((unsigned int *)v2)[0]) == 1 && *((unsigned char *)((unsigned int *)v2)[1] + 3598) ) /*0x719596*/
          {
            v28 = v60; /*0x7195a5*/
            *p_State = (unsigned int)(*(unsigned int * *)((char *)&stru_A8EB00 + 644)); /*0x7195ab*/
            ((unsigned int *)&v2->Timer)[0] = v28; /*0x7195ad*/  // g57e2 W3
            ((unsigned int *)&v2->Timer)[1] = 0; /*0x7195b0*/  // g57e2 W3
            ((unsigned int *)v2)[0] = 0; /*0x7195b6*/
          }
          if ( ((unsigned int *)v2)[0]->parasiteEatingMe ) /*0x7195bf*/
            BuildingClass::Deploy(v54, (int)v8, (int)p_State); /*0x7195cf*/
          (*((void (__thiscall **)(FootClass *, unsigned int))((unsigned int *)v2)[0]->vtable1 + 73))(((unsigned int *)v2)[0], 0); /*0x7195db*/
 v29 = (FootClass *)(((unsigned int *)v2)[0]); /*0x7195e1*/
          v30 = *(unsigned int *)((*((int (__thiscall **)(FootClass *))v29->vtable1 + 33))(v29) + 1400); /*0x7195ee*/
          if ( v30 != -1 || (v30 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 540), v30 != -1) ) /*0x719608*/
          {
 v31 = (int *)(((unsigned int *)v29)[0]); /*0x71960a*/
            v56 = (unsigned int)(*v31)); /*0x719614*/
            v57 = v31[1]; /*0x71961b*/
            v58 = v31[2]; /*0x719624*/
            StartAudioControllerAt(v30, &v56, 0); /*0x71962c*/
          }
          (*((void (__thiscall **)(FootClass *, int *))((unsigned int *)v2)[0]->vtable1 + 109))(((unsigned int *)v2)[0], &v2->MovingDestination[2]); /*0x719637*/
          IDA_LOWORD(this) = *v8 / 256; /*0x71964c*/
          IDA_HIWORD(this) = v2->LastCoords[0] / 256; /*0x719664*/
          *(unsigned int *)v55 = this; /*0x71966d*/
          v32 = (CrateClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v55); /*0x71967f*/
          (*((void (__thiscall **)(FootClass *, int *))((unsigned int *)v2)[0]->vtable1 + 109))(((unsigned int *)v2)[0], &v2->MovingDestination[2]); /*0x719684*/
          ((unsigned int *)v2)[0] = (v32[26].CrateClass_field_0x08 & 0x100) != 0; /*0x719698*/
          (*((void (__thiscall **)(FootClass *, unsigned int))((unsigned int *)v2)[0]->vtable1 + 115))(((unsigned int *)v2)[0], 0); /*0x7196b2*/
          (*((void (__thiscall **)(FootClass *, int))((unsigned int *)v2)[0]->vtable1 + 73))(((unsigned int *)v2)[0], 1); /*0x7196bf*/
 v33 = (FootClass *)(((unsigned int *)v2)[0]); /*0x7196c5*/
          v34 = *(unsigned int *)((*((int (__thiscall **)(FootClass *))v33->vtable1 + 33))(v33) + 1396); /*0x7196d2*/
          if ( v34 != -1 || (v34 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 536), v34 != -1) ) /*0x7196ec*/
          {
 v35 = (int *)(((unsigned int *)v33)[0]); /*0x7196ee*/
            v56 = *v35; /*0x7196f8*/
            v57 = v35[1]; /*0x7196ff*/
            v58 = v35[2]; /*0x719708*/
            StartAudioControllerAt(v34, &v56, 0); /*0x719710*/
          }
          (*((void (__thiscall **)(FootClass *, int))((unsigned int *)v2)[0]->vtable1 + 99))(((unsigned int *)v2)[0], 2); /*0x71971c*/
          (*(void (__stdcall **)(TeleportLocomotionClass *))(*(unsigned int *)v2 + 72))(v2); /*0x719725 g57w10 r4: 同上*/
          CrateClass::ProcessPickup(v32, (int)((unsigned int *)v2)[0]); /*0x71972e*/
          (*((void (__thiscall **)(FootClass *, unsigned int, int))((unsigned int *)v2)[0]->vtable1 + 288))(((unsigned int *)v2)[0], 0, 1); /*0x71973c*/
          v36 = (AnimClass *)RA2_OPNEW(0x1C8u); /*0x719747*/
          if ( v36 ) /*0x719751*/
          {
 v37 = (int *)(((unsigned int *)v2)[0]); /*0x719758*/
            v56 = *v37; /*0x71976b*/
            v57 = v37[1]; /*0x719772*/
            v58 = v37[2]; /*0x71977e*/
            AnimClass_ctor( /*0x719791*/
              v36,
              *(void **)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 828),
              &v56,
              0,
              1,
              (void *)0x600,
              0,
              0);
          }
          ((unsigned int *)v2)[0] = 0; /*0x719799*/
          return 0; /*0x7197a3*/
        }
      }
      return 0; /*0x719be5*/
    }
    switch ( v4 ) /*0x719806*/
    {
      case 1: /*0x719806*/
  LABEL_82:
        (*(void (__stdcall **)(char *))(*((unsigned int *)this - 1) + 40))((char *)this - 4); /*0x719b99*/
        return 0; /*0x719bac*/
      case 2: /*0x719806*/
        v38 = (AnimClass *)RA2_OPNEW(0x1C8u); /*0x71982c*/
        if ( v38 ) /*0x719836*/
        {
 v39 = (int *)(((unsigned int *)v2)[0]); /*0x71983c*/
          v56 = *v39; /*0x71984d*/
          v57 = v39[1]; /*0x719854*/
          v58 = v39[2]; /*0x719860*/
          AnimClass_ctor( /*0x719873*/
            v38,
            *(void **)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 828),
            &v56,
            0,
            1,
            (void *)0x600,
            0,
            0);
        }
        (*((void (__thiscall **)(FootClass *, unsigned int))((unsigned int *)v2)[0]->vtable1 + 73))(((unsigned int *)v2)[0], 0); /*0x71987e*/
 v40 = (FootClass *)(((unsigned int *)v2)[0]); /*0x719884*/
        v41 = *(unsigned int *)((*((int (__thiscall **)(FootClass *))v40->vtable1 + 33))(v40) + 1400); /*0x719891*/
        if ( v41 != -1 || (v41 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 540), v41 != -1) ) /*0x7198ab*/
        {
 v42 = (int *)(((unsigned int *)v40)[0]); /*0x7198ad*/
          v56 = *v42; /*0x7198b6*/
          v57 = v42[1]; /*0x7198bd*/
          v58 = v42[2]; /*0x7198c6*/
          StartAudioControllerAt(v41, &v56, 0); /*0x7198ce*/
        }
        ((unsigned int *)v2)[0] = 1; /*0x7198da*/
        ((unsigned int *)v2)[0] = 0; /*0x7198e4*/
        ((unsigned int *)v2)[0] = 0; /*0x7198ee*/
        ((unsigned int *)v2)[0] = 0; /*0x7198fa*/
        PlacementPosition = ObjectClass::FindPlacementPosition( /*0x71991d*/
                              (ObjectClass *)&v2[-1].Piggybackee,
                              ((unsigned int *)v2)[0]->?[0],
                              ((unsigned int *)v2)[0]->?[1],
                              ((unsigned int *)v2)[0]->?[2],
                              0);
        v44 = *(unsigned int *)&v2->Moving + 1; /*0x719925*/
        *(unsigned int *)&v2->Moving = v44; /*0x719928*/
        if ( PlacementPosition ) /*0x71992d*/
        {
          *(unsigned int *)&v2->Moving = v44 + 1; /*0x719936*/
          return 0; /*0x719940*/
        }
        return 0; /*0x71992d*/
      case 3: /*0x719806*/
        if ( ObjectClass::FindPlacementPosition( /*0x719967*/
               (ObjectClass *)((char *)this - 4),
               ((unsigned int *)Owner)[0],
               ((unsigned int *)Owner)[1],
               ((unsigned int *)Owner)[2],
               0) )
        {
          ++*(unsigned int *)&v2->Moving; /*0x719970*/
        }
        ((unsigned int *)v2)[0] = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 3052); /*0x719983*/
        return 0; /*0x719990*/
      case 4: /*0x719806*/
        ObjectClass::FindPlacementPosition((ObjectClass *)((char *)this - 4), ((unsigned int *)Owner)[0], ((unsigned int *)Owner)[1], ((unsigned int *)Owner)[2], 1); /*0x7199b8*/
        (*((void (__thiscall **)(FootClass *, int *))((unsigned int *)v2)[0]->vtable1 + 109))(((unsigned int *)v2)[0], &v2->MovingDestination[2]); /*0x7199c6*/
        (*((void (__thiscall **)(FootClass *, unsigned int))((unsigned int *)v2)[0]->vtable1 + 115))(((unsigned int *)v2)[0], 0); /*0x7199d2*/
        (*((void (__thiscall **)(FootClass *, int))((unsigned int *)v2)[0]->vtable1 + 73))(((unsigned int *)v2)[0], 1); /*0x7199df*/
        ++*(unsigned int *)&v2->Moving; /*0x7199e9*/
        return 0; /*0x7199f5*/
    }
    if ( v4 != 5 ) /*0x7199fb*/
    {
      if ( v4 != 6 ) /*0x719b97*/
      {
        if ( v4 == 7 ) /*0x719bb2*/
        {
          ((unsigned int *)Owner)[0] = 0; /*0x719bb4*/
          ((TechnoClass *)((unsigned int *)v2)[0])->SetFocus(0); /*0x719bbf*/
          (*((void (__thiscall **)(FootClass *, unsigned int, int))((unsigned int *)v2)[0]->vtable1 + 288))(((unsigned int *)v2)[0], 0, 1); /*0x719bcc*/
          IDA_LOBYTE(v2->LastCoords[2]) = 0; /*0x719bd2*/
          ((unsigned int *)v2)[0] = 0; /*0x719bd9*/
          *(unsigned int *)&v2->Moving = 0; /*0x719bdf*/
        }
        return 0; /*0x719bdf*/
      }
      goto LABEL_82; /*0x719b97*/
    }
    v45 = &this->MovingDestination[2]; /*0x719a03*/
    (*((void (__thiscall **)(FootClass *, int *))Owner->vtable1 + 109))(Owner, &this->MovingDestination[2]); /*0x719a07*/
    (*((void (__thiscall **)(FootClass *, unsigned int))((unsigned int *)v2)[0]->vtable1 + 115))(((unsigned int *)v2)[0], 0); /*0x719a13*/
    (*((void (__thiscall **)(FootClass *, int))((unsigned int *)v2)[0]->vtable1 + 73))(((unsigned int *)v2)[0], 1); /*0x719a20*/
    v46 = ((unsigned int *)v2)[0]; /*0x719a26*/
    v47 = *(unsigned int *)((*((int (__thiscall **)(FootClass *))v46->vtable1 + 33))(v46) + 1396); /*0x719a33*/
    if ( v47 != -1 || (v47 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 536), v47 != -1) ) /*0x719a4d*/
    {
      v48 = ((unsigned int *)v46)[0]; /*0x719a4f*/
      v56 = *v48; /*0x719a58*/
      v57 = v48[1]; /*0x719a5f*/
      v58 = v48[2]; /*0x719a68*/
      StartAudioControllerAt(v47, &v56, 0); /*0x719a70*/
    }
    v49 = (short *)(*((int (__thiscall **)(FootClass *, TeleportLocomotionClass **))((unsigned int *)v2)[0]->vtable1 + 110))( /*0x719a81*/
                       ((unsigned int *)v2)[0],
                       &this);
    if ( !(unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], v49, 1) ) /*0x719a8d*/
      ((unsigned int *)v2)[0] = 0; /*0x719a99*/
    if ( !((unsigned int *)v2)[0] ) /*0x719aa3*/
      ProcessUnitDeploymentAtCell((ObjectClass *)&v2[-1].Piggybackee, *v45, v2->LastCoords[0], v2->LastCoords[1]); /*0x719ac4*/
    v50 = ((unsigned int *)v2)[0]; /*0x719ac9*/
    if ( !((unsigned int *)v50)[0] ) /*0x719ad4*/
      return 0; /*0x719ad4*/
    (*((void (__thiscall **)(FootClass *, int))v50->vtable1 + 99))(v50, 2); /*0x719ade*/
    (*(void (__stdcall **)(TeleportLocomotionClass *))(*(unsigned int *)v2->LocomotionClass + 72))(v2); /*0x719ae7*/
    ((unsigned int *)v2)[0] = 0; /*0x719aee*/
    ((unsigned int *)v2)[0] = 0; /*0x719af7*/
    ((TechnoClass *)((unsigned int *)v2)[0])->SetFocus(0); /*0x719b00*/
    (*((void (__thiscall **)(FootClass *, unsigned int, int))((unsigned int *)v2)[0]->vtable1 + 288))(((unsigned int *)v2)[0], 0, 1); /*0x719b0d*/
    chronoLockRemaining = ((unsigned int *)v2)[0]; /*0x719b23*/
    v2->State = *(unsigned int * *)((char *)&stru_A8EB00 + 644); /*0x719b29*/
    v2->Timer[0] = v60; /*0x719b2f*/
    v2->Timer[1] = chronoLockRemaining; /*0x719b32*/
    v52 = (AnimClass *)RA2_OPNEW(0x1C8u); /*0x719b35*/
    if ( v52 ) /*0x719b3f*/
    {
      v53 = ((unsigned int *)v2)[0]; /*0x719b45*/
      v56 = *v53; /*0x719b56*/
      v57 = v53[1]; /*0x719b5d*/
      v58 = v53[2]; /*0x719b69*/
      AnimClass_ctor( /*0x719b7c*/
        v52,
        *(void **)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 828),
        &v56,
        0,
        1,
        (void *)0x600,
        0,
        0);
    }
    ++*(unsigned int *)&v2->Moving; /*0x719b85*/
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
    void (__thiscall **vtable0)(UnitClass *, void *, int); // edi
    void *v20; // eax
    int *v21; // edi
    unsigned short *v22; // eax
    short v23; // cx
    UnitTypeClass *v24; // ecx
    void (__thiscall **v25)(UnitClass *, void *, int); // edi
    void *v26; // eax
    int v27; // [esp-1Ch] [ebp-50h]
    short v28[2]; // [esp+14h] [ebp-20h] BYREF
    int v29; // [esp+18h] [ebp-1Ch] BYREF
    int v30; // [esp+1Ch] [ebp-18h] BYREF
    short v31[2]; // [esp+20h] [ebp-14h] BYREF
    unsigned char v32[4]; // [esp+24h] [ebp-10h] BYREF
    unsigned char v33[12]; // [esp+28h] [ebp-Ch] BYREF

    if ( !this->((unsigned int *)Type)[0] ) /*0x738d41*/
      return 1; /*0x738d52*/
    (*((void (__thiscall **)(UnitClass *, unsigned int))this->vtable1 + 73))(this, 0); /*0x738d58*/
    v3 = 0; /*0x738d64*/
    v4 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 2236); /*0x738d66*/
    if ( v4 <= 0 ) /*0x738d6e*/
      goto LABEL_7; /*0x738d6e*/
    v5 = *(unsigned int **)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 2224); /*0x738d76*/
    while ( *v5 != this->*(unsigned int *)&Type->VoiceSelectDeactivated ) /*0x738d84*/
    {
      ++v3; /*0x738d8a*/
      ++v5; /*0x738d8b*/
      if ( v3 >= v4 ) /*0x738d90*/
        goto LABEL_7; /*0x738d90*/
    }
    if ( *(unsigned char *)((*((int (__thiscall **)(UnitClass *))this->vtable1 + 15))(this) + 497) ) /*0x738e33*/
    {
      if ( !((unsigned int *)this)[0] ) /*0x738e3f*/
      {
        v29 = 0; /*0x738e51*/
        BuildableFromArray = (BuildingTypeClass *)HouseClass::FirstBuildableFromArray( /*0x738e68*/
                                                    ((unsigned int *)this)[0],
                                                    *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 2176);
        v10 = BuildingTypeClass::GetFoundationWidth(BuildableFromArray) + 1; /*0x738e8a*/
        v11 = HouseClass::FirstBuildableFromArray(((unsigned int *)this)[0], *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 2176); /*0x738e8b*/
        v27 = BuildingTypeClass::GetFoundationHeight(v11, 0) + 1; /*0x738ea6*/
        v12 = ((__int64 (__thiscall *)(UnitClass *, short *))*((unsigned int *)this->vtable1 + 110))(this, v31); /*0x738eb7*/
        v13 = LayerClass::Pathfinding_Find( /*0x738ec8*/
                (Type *)&stru_87F5F0.__pad_58[416],
                IDA_SHIDWORD(v12),
                &v30,
                (short *)v12,
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
                (short *)&v29,
                0,
                0);
        owner = ((unsigned int *)this)[0]; /*0x738ed4*/
        *(unsigned int *)v28 = *v13; /*0x738ee0*/
        v29 = 0; /*0x738ee4*/
        v15 = (BuildingTypeClass *)HouseClass::FirstBuildableFromArray( /*0x738eee*/
                                     owner,
                                     *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 2220);
        v16 = BuildingTypeClass::GetFoundationWidth(v15) + 1; /*0x738f10*/
        v17 = HouseClass::FirstBuildableFromArray(((unsigned int *)this)[0], *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 2220); /*0x738f11*/
        FoundationHeight = BuildingTypeClass::GetFoundationHeight(v17, 0); /*0x738f18*/
        *(unsigned int *)v28 = *LayerClass::Pathfinding_Find( /*0x738f4e*/
                            (Type *)&stru_87F5F0.__pad_58[416],
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
                            (short *)&v29,
                            0,
                            0);
        if ( *(unsigned int *)v28 != g_UnitSelectionState ) /*0x738f52*/
        {
          vtable0 = (void (__thiscall **)(UnitClass *, void *, int))this->FootClass; /*0x738f62*/
          v20 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v28); /*0x738f70*/
          vtable0[288](this, v20, 1); /*0x738f78*/
        }
        *(unsigned char *)((*((int (__thiscall **)(UnitClass *))this->vtable1 + 15))(this) + 497) = 0; /*0x738f85*/
      }
    }
    else
    {
  LABEL_7:
      if ( !((unsigned int *)this)[0] ) /*0x738d92*/
      {
        v6 = (unsigned int *)(*((int (__thiscall **)(UnitClass *, unsigned char *))this->vtable1 + 18))(this, v33); /*0x738da7*/
        IDA_LOWORD(v29) = *v6 / 256; /*0x738dbf*/
        IDA_HIWORD(v29) = v6[1] / 256; /*0x738dd7*/
        *(unsigned int *)v28 = v29; /*0x738de4*/
        v7 = CellStruct::Add((CellStruct *)v28, v31, &g_DDrawSurfaceManager.scenario[89]); /*0x738de9*/
        Type = this->Type; /*0x738df0*/
        v30 = *v7; /*0x738df6*/
        if ( (*(unsigned __int8 (__thiscall **)(int, int *, unsigned int))(*(unsigned int *)*(unsigned int *)&Type->ImageAllocated + 168))(*(unsigned int *)&Type->ImageAllocated, &v30, 0) ) /*0x738e08*/
        {
          (*((void (__thiscall **)(UnitClass *, int))this->vtable1 + 73))(this, 1); /*0x738e1c*/
          return 1; /*0x738e2b*/
        }
        if ( !((unsigned int *)this)[0] ) /*0x738f90*/
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
            v22 = (unsigned short *)(*((int (__thiscall **)(UnitClass *, unsigned char *))this->vtable1 + 110))(this, v32); /*0x7392d8*/
            v23 = v22[1] + *((unsigned short *)v21 + 1); /*0x7392e8*/
            IDA_LOWORD(v29) = *v22 + *(unsigned short *)v21; /*0x7392ed*/
            IDA_HIWORD(v29) = v23; /*0x7392f8*/
            *(unsigned int *)v31 = v29; /*0x739308*/
            v28[0] = IDA_LOWORD(g_DDrawSurfaceManager.scenario[89]) + v29; /*0x73930e*/
            v28[1] = IDA_HIWORD(g_DDrawSurfaceManager.scenario[89]) + v23; /*0x739313*/
            v24 = this->Type; /*0x73931c*/
            v30 = *(unsigned int *)v28; /*0x739322*/
            if ( (*(unsigned __int8 (__thiscall **)(int, int *, unsigned int))(*(unsigned int *)((unsigned int *)v24)[0] + 168))(((unsigned int *)v24)[0], &v30, 0) ) /*0x739333*/
              break; /*0x739333*/
            if ( (int)++v21 >= (int)&dword_B1D0A0 ) /*0x739346*/
              goto LABEL_23; /*0x739346*/
          }
          v25 = (void (__thiscall **)(UnitClass *, void *, int))this->FootClass; /*0x73934a*/
          v26 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v31); /*0x739358*/
          v25[288](this, v26, 1); /*0x739360*/
        }
      }
    }
  LABEL_23:
    (*((void (__thiscall **)(UnitClass *, int))this->vtable1 + 73))(this, 1); /*0x739366*/
    if ( !((unsigned int *)this)[0] && !(unsigned __int8)House::IsCurrentPlayer((House *)((unsigned int *)this)[0]) ) /*0x739380*/
      (*((void (__thiscall **)(UnitClass *, int *, unsigned int, unsigned int))this->vtable1 + 93))(this, &dword_B1CFE8, 0, 0); /*0x739394*/
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
    int (__thiscall **vtable0)(UnitClass *); // edx
    int v10; // eax
    int v12; // [esp+4h] [ebp-Ch] BYREF
    int v13; // [esp+8h] [ebp-8h]
    int v14; // [esp+Ch] [ebp-4h]

    Type = this->Type; /*0x739ac6*/
    if ( Type->IsSimpleDeployer ) /*0x739acc*/
    {
      if ( (*((int (__thiscall **)(UnitClass *))this->vtable1 + 114))(this) <= 0 /*0x739af2*/
        || (Type = (UnitTypeClass *)(*((int (__thiscall **)(UnitClass *))this->vtable1 + 33))(this), ((unsigned int *)Type)[0]) )
      {
        IDA_LOBYTE(Type) = this->Deployed; /*0x739b00*/
        if ( !(unsigned char)Type ) /*0x739b08*/
        {
          if ( !((unsigned int *)this)[0] && (*((int (__thiscall **)(UnitClass *))this->vtable1 + 114))(this) > 0 ) /*0x739b2a*/
            ((unsigned int *)this)[0] = 1; /*0x739b2c*/
          if ( this->Deploying && (v3 = ((unsigned int *)this)[0]) != 0 ) /*0x739b44*/
          {
            if ( *(unsigned int *)&this->radioContact >= *(unsigned int *)&v3->AnimClass_field_0xC8[2].vtable4[52] /*0x739b64*/
                             + *(unsigned int *)&v3->AnimClass_field_0xC8[2].vtable4[40]
                             - 1 )
              *(unsigned short *)&this->Deployed = 1; /*0x739b6a*/
          }
          else if ( !((unsigned int *)this)[0] ) /*0x739b7c*/
          {
            if ( this->((unsigned int *)Type)[0] ) /*0x739b90*/
            {
              if ( !((unsigned int *)this)[0] ) /*0x739b9e*/
              {
                v4 = (AnimClass *)RA2_OPNEW(0x1C8u); /*0x739bad*/
                if ( v4 ) /*0x739bb7*/
                {
                  v12 = *(unsigned int *)&this->vtable2; /*0x739bcb*/
                  v13 = ((unsigned int *)this)[1]; /*0x739bd4*/
                  v14 = ((unsigned int *)this)[2]; /*0x739be0*/
                  v5 = (AnimClass *)AnimClass_ctor(v4, (void *)this->*(unsigned int *)&Type->q6BC, &v12, 0, 1, (void *)0x600, 0, 0); /*0x739bf3*/
                }
                else
                {
                  v5 = 0; /*0x739bfa*/
                }
                ((unsigned int *)this)[0] = v5; /*0x739bff*/
                BuildingClass::AimTurret((BuildingClass *)v5, this); /*0x739c05*/
                ((unsigned int *)this)[0]->AnimClass_field_0xD4 = (IUnknown *)(*((int (__thiscall **)(UnitClass *))this->vtable1 + 121))(this); /*0x739c1a*/
              }
              deployAnim = ((unsigned int *)this)[0]; /*0x739c20*/
              *(unsigned int *)&this->radioContact = *(unsigned int *)&deployAnim->AnimClass_field_0xC8[2].vtable4[40]; /*0x739c32*/
              v7 = *(unsigned int * *)((char *)&stru_A8EB00 + 644); /*0x739c3e*/
              v8 = *(unsigned int *)&deployAnim->AnimClass_field_0xC8[2].vtable4[36]; /*0x739c44*/
              ((unsigned int *)this)[5] = v8; /*0x739c50*/
              ((unsigned int *)this)[2] = v7; /*0x739c56*/
              ((unsigned int *)this)[3] = v13; /*0x739c5c*/
              ((unsigned int *)this)[4] = v8; /*0x739c5f*/
              this->Deploying = 1; /*0x739c62*/
            }
            else
            {
              this->Deployed = 1; /*0x739c6a*/
            }
          }
          Type = (UnitTypeClass *)(*((int (__thiscall **)(UnitClass *))this->vtable1 + 33))(this); /*0x739c74*/
          if ( ((unsigned int *)Type)[0] != -1 ) /*0x739c84*/
          {
            v12 = *(unsigned int *)&this->vtable2; /*0x739c95*/
            v13 = ((unsigned int *)this)[1]; /*0x739c9e*/
            vtable0 = (int (__thiscall **)(UnitClass *))this->FootClass; /*0x739ca2*/
            v14 = ((unsigned int *)this)[2]; /*0x739ca7*/
            v10 = vtable0[33](this); /*0x739cab*/
            IDA_LOBYTE(Type) = (unsigned __int8)StartAudioControllerAt(*(unsigned int *)(v10 + 1388), &v12, 0); /*0x739cb9*/
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
    AnimClass *v3; // eax
    int (__thiscall **vtable0)(UnitClass *); // edx
    void (__thiscall **v5)(UnitClass *, void *, int); // edi
    short *PlacementCellsAlt; // eax
    void *v7; // eax
    AnimClass *v8; // eax
    AnimClass *v9; // eax
    AnimClass *deployAnim; // eax
    int v11; // ecx
    int v12; // eax
    int (__thiscall **v13)(UnitClass *); // edx
    int v14; // eax
    int v16; // [esp+8h] [ebp-10h] BYREF
    int v17; // [esp+Ch] [ebp-Ch] BYREF
    int v18; // [esp+10h] [ebp-8h]
    int v19; // [esp+14h] [ebp-4h]

    IDA_LOBYTE(v2) = this->Deployed; /*0x739cd7*/
    if ( (unsigned char)v2 ) /*0x739cdf*/
    {
      if ( this->Undeploying && (v3 = ((unsigned int *)this)[0]) != 0 ) /*0x739cf7*/
      {
        if ( *(unsigned int *)&this->radioContact >= *(unsigned int *)&v3->AnimClass_field_0xC8[2].vtable4[52] /*0x739d17*/
                         + *(unsigned int *)&v3->AnimClass_field_0xC8[2].vtable4[40]
                         - 2 )
        {
          vtable0 = (int (__thiscall **)(UnitClass *))this->FootClass; /*0x739d1d*/
          this->Deployed = 0; /*0x739d21*/
          this->Undeploying = 0; /*0x739d28*/
          if ( *(unsigned char *)(vtable0[33](this) + 1709) ) /*0x739d35*/
          {
            v5 = (void (__thiscall **)(UnitClass *, void *, int))this->FootClass; /*0x739d43*/
            PlacementCellsAlt = (short *)MapClass::FindPlacementCellsAlt((char *)this, &v16, (int)this); /*0x739d4f*/
            v7 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], PlacementCellsAlt); /*0x739d5a*/
            v5[288](this, v7, 1); /*0x739d62*/
          }
        }
      }
      else if ( this->((unsigned int *)Type)[0] ) /*0x739d73*/
      {
        if ( !((unsigned int *)this)[0] ) /*0x739d81*/
        {
          v8 = (AnimClass *)RA2_OPNEW(0x1C8u); /*0x739d90*/
          if ( v8 ) /*0x739d9a*/
          {
            v17 = *(unsigned int *)&this->vtable2; /*0x739daf*/
            v18 = ((unsigned int *)this)[1]; /*0x739db8*/
            v19 = ((unsigned int *)this)[2]; /*0x739dc4*/
            v9 = (AnimClass *)AnimClass_ctor(v8, (void *)this->*(unsigned int *)((char *)Type + 1724), &v17, 0, 1, (void *)0x600, 0, 1); /*0x739dd7*/
          }
          else
          {
            v9 = 0; /*0x739dde*/
          }
          ((unsigned int *)this)[0] = v9; /*0x739de3*/
          BuildingClass::AimTurret((BuildingClass *)v9, this); /*0x739de9*/
          ((unsigned int *)this)[0]->AnimClass_field_0xD4 = (IUnknown *)(*((int (__thiscall **)(UnitClass *))this->vtable1 + 121))(this); /*0x739dfe*/
        }
        deployAnim = ((unsigned int *)this)[0]; /*0x739e04*/
        ((unsigned int *)this)[0] = *(unsigned int *)&deployAnim->AnimClass_field_0xC8[2].vtable4[40]; /*0x739e16*/
        v11 = *(unsigned int * *)((char *)&stru_A8EB00 + 644); /*0x739e22*/
        v12 = *(unsigned int *)&deployAnim->AnimClass_field_0xC8[2].vtable4[36]; /*0x739e28*/
        ((unsigned int *)this)[5] = v12; /*0x739e34*/
        ((unsigned int *)this)[2] = v11; /*0x739e3a*/
        ((unsigned int *)this)[3] = v18; /*0x739e40*/
        ((unsigned int *)this)[4] = v12; /*0x739e43*/
        this->Undeploying = 1; /*0x739e46*/
      }
      else
      {
        this->Deployed = 0; /*0x739e4f*/
      }
      if ( (*((unsigned __int8 (__thiscall **)(UnitClass *))this->vtable1 + 49))(this) ) /*0x739e5a*/
        (*((void (__thiscall **)(UnitClass *))this->vtable1 + 284))(this); /*0x739e68*/
      v2 = (*((int (__thiscall **)(UnitClass *))this->vtable1 + 33))(this); /*0x739e72*/
      if ( *(unsigned int *)(v2 + 1392) != -1 ) /*0x739e7f*/
      {
        v17 = *(unsigned int *)&this->vtable2; /*0x739e8f*/
        v18 = ((unsigned int *)this)[1]; /*0x739e98*/
        v13 = (int (__thiscall **)(UnitClass *))this->FootClass; /*0x739e9c*/
        v19 = ((unsigned int *)this)[2]; /*0x739ea1*/
        v14 = v13[33](this); /*0x739ea5*/
        IDA_LOBYTE(v2) = (unsigned __int8)StartAudioControllerAt(*(unsigned int *)(v14 + 1392), &v17, 0); /*0x739eb3*/
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
    int vtable0; // edx
    unsigned int *v14; // ebp
    int v15; // eax
    int TileIndex; // ebx
    int v17; // eax
    int v18; // eax
    int v19; // eax
    int v20; // edx
    int v21; // eax
    int v22; // eax
    int v23; // edx
    unsigned int *v24; // [esp+0h] [ebp-34h]
    double v25; // [esp+10h] [ebp-24h]
    int v26; // [esp+10h] [ebp-24h]
    int v27; // [esp+18h] [ebp-1Ch] BYREF
    char v28[8]; // [esp+1Ch] [ebp-18h] BYREF
    double v29; // [esp+20h] [ebp-14h]
    unsigned int v30[3]; // [esp+28h] [ebp-Ch] BYREF
    void *retaddr; // [esp+34h] [ebp+0h] BYREF
    unsigned int *v32; // [esp+3Ch] [ebp+8h]
    int **v33; // [esp+40h] [ebp+Ch]

    v4 = a3; /*0x737435*/
    switch ( (unsigned int)a3 )
    {
      case 3u:
        if ( (*(int (__thiscall **)(Class_7F5C70 *))(*(unsigned int *)this + 388))(this) == 12 ) /*0x737b21*/
          (*(void (__thiscall **)(Class_7F5C70 *, int, unsigned int))(*(unsigned int *)this + 488))(this, 5, 0); /*0x737b2b*/
        FootClass::MissionDispatch((FootClass *)a2, (int)a3, a3, (int)a4, v24); /*0x737b3e*/
        return 1; /*0x737b46*/
      case 7u:
        FootClass::MissionDispatch((FootClass *)a2, (int)a3, a3, (int)a4, v24); /*0x737517*/
        (*(void (__thiscall **)(Class_7F5C70 *, unsigned int, int))(*(unsigned int *)this + 1152))(this, 0, 1); /*0x737524*/
        (*(void (__thiscall **)(Class_7F5C70 *, unsigned int))(*(unsigned int *)this + 968))(this, 0); /*0x737530*/
        (*(void (__thiscall **)(Class_7F5C70 *, unsigned int, unsigned int))(*(unsigned int *)this + 488))(this, 0, 0); /*0x73753e*/
        FootClass::ClearSomeVector((FootClass *)this); /*0x737546*/
        if ( !*((unsigned char *)this + 1048) || !Team::GetMember((Team *)this, 0) ) /*0x737559*/
        {
          (*(void (__thiscall **)(Class_7F5C70 *, int, BuildingClass *))(*(unsigned int *)this + 632))(this, 2, a2); /*0x737569*/
          (*(void (__thiscall **)(Class_7F5C70 *, int))(*(unsigned int *)this + 628))(this, 24); /*0x737575*/
        }
        return 1; /*0x737587*/
      case 0xEu:
        if ( !*((unsigned int *)this + 413) ) /*0x7377d8*/
          WinAPI::Wrapper(-2147467261); /*0x7377e7*/
        if ( ((*(unsigned __int8 (__stdcall **)(unsigned int))(**((unsigned int **)this + 413) + 16))(*((unsigned int *)this + 413)) /*0x73780d*/
           || *((unsigned int *)this + 361))
          && *((unsigned int *)this + 43) == 2 )
        {
          goto LABEL_54; /*0x73780d*/
        }
        if ( (BuildingClass *)Team::GetMember((Team *)this, 0) != a2 ) /*0x737829*/
        {
          v26 = *(unsigned int *)(*((unsigned int *)this + 433) + 1504); /*0x737841*/
          v12 = HouseClass::SumPowerDrain((HouseClass *)(this + 276)); /*0x737845*/
          vtable0 = a2->vtable1; /*0x73784a*/
          v29 = (double)v12; /*0x737856*/
          if ( (double)v26 < v29 + *(double *)((*(int (__thiscall **)(BuildingClass *))(vtable0 + 132))(a2) + 896) /*0x737898*/
            || *(double *)((*(int (__thiscall **)(BuildingClass *))(a2->vtable1 + 132))(a2) + 896) > *(double *)(*((unsigned int *)this + 433) + 904) )
          {
            goto LABEL_54; /*0x737898*/
          }
          if ( !(unsigned __int8)Team::AllMembersValid((Team *)this) ) /*0x7378a0*/
            (*(void (__thiscall **)(Class_7F5C70 *, int, BuildingClass *))(*(unsigned int *)this + 632))(this, 2, a2); /*0x7378b0*/
        }
        if ( *((unsigned int *)this + 361) ) /*0x7378b6*/
          goto LABEL_69; /*0x7378be*/
        retaddr = *(void **)(*(int (__thiscall **)(Class_7F5C70 *))(*(unsigned int *)this + 440))(this); /*0x7378df*/
        v14 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (short *)&retaddr); /*0x7378ee*/
        v15 = (*(int (__thiscall **)(BuildingClass *, unsigned int))(a2->vtable1 + 132))(a2, 0); /*0x7378f0*/
        TileIndex = MapClass::GetTileIndex( /*0x73790e*/
                      (MapClass *)&dword_87F7E8,
                      (short *)this + 686,
                      *(unsigned int *)(v15 + 1460),
                      (char)v28);
        v17 = -1; /*0x737910*/
        if ( a2 && (a2->abstractFlags & 4) != 0 ) /*0x73791b*/
        {
          v18 = (*(int (__thiscall **)(BuildingClass *))(a2->vtable1 + 132))(a2); /*0x737923*/
          v17 = MapClass::GetTileIndex((MapClass *)&dword_87F7E8, (short *)a2->Anims, *(unsigned int *)(v18 + 1460), 0); /*0x73793c*/
        }
        if ( TileIndex == v17 && (*((unsigned int *)this + 361) || v14[59] != 2) ) /*0x737972*/
        {
          v4 = a3; /*0x737990*/
  LABEL_69:
          if ( *(int *)(*((unsigned int *)this + 433) + 1504) <= 0 ) /*0x7379a2*/
            return FootClass::MissionDispatch((FootClass *)a2, (int)v4, v4, (int)a4, v24); /*0x7379a2*/
          v32 = *(unsigned int **)(*((unsigned int *)this + 433) + 1504); /*0x7379ae*/
          v19 = HouseClass::SumPowerDrain((HouseClass *)(this + 276)); /*0x7379b2*/
          v20 = a2->vtable1; /*0x7379b7*/
          v29 = (double)v19; /*0x7379c3*/
          v21 = (*(int (__thiscall **)(BuildingClass *))(v20 + 132))(a2); /*0x7379c7*/
          if ( (double)(int)v32 < v29 + *(double *)(v21 + 896) /*0x737a09*/
            || *(double *)((*(int (__thiscall **)(BuildingClass *))(a2->vtable1 + 132))(a2) + 896) > *(double *)(*((unsigned int *)this + 433) + 904) )
          {
            return FootClass::MissionDispatch((FootClass *)a2, (int)v4, v4, (int)a4, v24); /*0x737a09*/
          }
          FootClass::MissionDispatch((FootClass *)a2, (int)v4, v4, (int)a4, v24); /*0x737a18*/
          if ( !*((unsigned int *)this + 413) ) /*0x737a1d*/
            WinAPI::Wrapper(-2147467261); /*0x737a2c*/
          if ( !(*(unsigned __int8 (__stdcall **)(unsigned int))(**((unsigned int **)this + 413) + 16))(*((unsigned int *)this + 413)) /*0x737a65*/
            && !*((unsigned char *)this + 1711)
            && !*((unsigned char *)this + 1048)
            && (*(int (__thiscall **)(Class_7F5C70 *, int, BuildingClass *))(*(unsigned int *)this + 632))(this, 19, a2) == 1 )
          {
            *a4 = (int *)this; /*0x737a67*/
            if ( (*(int (__thiscall **)(Class_7F5C70 *, int, int **, BuildingClass *))(*(unsigned int *)this + 636))( /*0x737a7a*/
                   this,
                   18,
                   a4,
                   a2) != 1 )
              (*(void (__thiscall **)(Class_7F5C70 *, int, BuildingClass *))(*(unsigned int *)this + 632))(this, 3, a2); /*0x737a83*/
          }
          result = 1; /*0x737a8c*/
        }
        else
        {
          (*(void (__thiscall **)(Class_7F5C70 *, BuildingClass *, int))(*(unsigned int *)this + 1152))(this, a2, 1); /*0x73794c*/
          result = 14; /*0x737955*/
        }
        break; /*0x737a95*/
      case 0xFu:
        if ( !*(unsigned int *)(*((unsigned int *)this + 433) + 1504) /*0x7375ad*/
          || !a2
          || !(unsigned __int8)(*((ObjectClass **)this + 135))->IsAlliedWithObjectHouse((int)a2) )
        {
          goto LABEL_28; /*0x7375b4*/
        }
        if ( (*(unsigned __int8 (__thiscall **)(Class_7F5C70 *))(*(unsigned int *)this + 468))(this) ) /*0x7375ba*/
        {
          result = 0; /*0x7375c7*/
        }
        else
        {
          v8 = (Cell *)(*(int (__thiscall **)(Class_7F5C70 *))(*(unsigned int *)this + 444))(this); /*0x7375d4*/
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
            v33 = *(int ***)(*((unsigned int *)this + 433) + 1504); /*0x73763d*/
            v25 = (double)HouseClass::SumPowerDrain((HouseClass *)(this + 276)); /*0x737652*/
            if ( (double)(int)v33 < v25 /*0x737698*/
                                  + *(double *)((*(int (__thiscall **)(BuildingClass *))(a2->vtable1 + 132))(a2) + 896)
              || *(double *)((*(int (__thiscall **)(BuildingClass *))(a2->vtable1 + 132))(a2) + 896) > *(double *)(*((unsigned int *)this + 433) + 904) )
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
        v11 = *(unsigned int *)(*((unsigned int *)this + 433) + 1504); /*0x73779b*/
        if ( HouseClass::SumPowerDrain((HouseClass *)(this + 276)) == v11 ) /*0x7377a8*/
          Timer::StartDouble((Timer *)(this + 848), *(double *)(*((unsigned int *)this + 433) + 968)); /*0x7377c4*/
        return 5; /*0x7377d5*/
      case 0x16u:
        FootClass::MissionDispatch((FootClass *)a2, (int)a3, a3, (int)a4, v24); /*0x7376ba*/
        if ( *((unsigned char *)this + 1711) || *(unsigned short *)ProgressTimer::GetValue((ProgressTimer *)(this + 904), &v27) == 0x4000 ) /*0x7376de*/
        {
          if ( !*((unsigned int *)this + 413) ) /*0x73771b*/
            WinAPI::Wrapper(-2147467261); /*0x73772a*/
          if ( !(*(unsigned __int8 (__stdcall **)(unsigned int))(**((unsigned int **)this + 413) + 16))(*((unsigned int *)this + 413)) ) /*0x737738*/
          {
            Member = Team::GetMember((Team *)this, 0); /*0x737748*/
            if ( *((unsigned char *)this + 1048) ) /*0x73774a*/
            {
              if ( Member /*0x737771*/
                && (*(int (__thiscall **)(int))(*(unsigned int *)Member + 44))(Member) == 6
                && (*(int (__thiscall **)(Class_7F5C70 *))(*(unsigned int *)this + 388))(this) == 7 )
              {
                (*(void (__thiscall **)(Class_7F5C70 *, int, int))(*(unsigned int *)this + 632))(this, 21, Member); /*0x73777a*/
              }
            }
          }
          return 1; /*0x737783*/
        }
        else
        {
          IDA_LOWORD(a2) = 0x4000; /*0x7376e6*/
          if ( !*((unsigned int *)this + 413) ) /*0x7376e0*/
            WinAPI::Wrapper(-2147467261); /*0x7376f6*/
          (*(void (__stdcall **)(unsigned int, BuildingClass *))(**((unsigned int **)this + 413) + 76))(*((unsigned int *)this + 413), a2); /*0x737709*/
          return 1; /*0x73770f*/
        }
      case 0x17u:
        v22 = *((unsigned int *)this + 433); /*0x737a98*/
        if ( *(unsigned char *)(v22 + 3598) || *(unsigned char *)(v22 + 3599) ) /*0x737aa8*/
        {
          if ( *((unsigned char *)this + 1745) ) /*0x737ab2*/
          {
            v23 = *(unsigned int *)this; /*0x737abc*/
            *((unsigned char *)this + 1745) = 0; /*0x737ac9*/
            (*(void (__thiscall **)(Class_7F5C70 *, int *, int, unsigned int))(v23 + 372))(this, &dword_B1CFE8, 1, 0); /*0x737ad0*/
            (*(void (__thiscall **)(Class_7F5C70 *, int, unsigned int))(*(unsigned int *)this + 488))(this, 10, 0); /*0x737ade*/
            if ( (*(unsigned __int8 (__thiscall **)(Class_7F5C70 *))(*(unsigned int *)this + 512))(this) ) /*0x737ae8*/
              (*(void (__thiscall **)(Class_7F5C70 *))(*(unsigned int *)this + 492))(this); /*0x737af6*/
          }
        }
        return FootClass::MissionDispatch((FootClass *)a2, (int)v4, v4, (int)a4, v24); /*0x737af6*/
      case 0x24u:
        if ( (*(unsigned __int8 (__thiscall **)(Class_7F5C70 *))(*(unsigned int *)this + 468))(this) ) /*0x737460*/
          return 0; /*0x73746d*/
        v7 = (unsigned int *)(*(int (__thiscall **)(Class_7F5C70 *, unsigned int *, unsigned int))(*(unsigned int *)this + 76))(this, v30, 0); /*0x737481*/
        if ( (Coord::To_Cell((Coord *)&dword_87F7E8, v7)->flags & 0x100) != 0 /*0x7374a0*/
          && !(*(unsigned __int8 (__thiscall **)(Class_7F5C70 *, unsigned int))(*(unsigned int *)this + 188))(this, 0) )
        {
          return 10; /*0x7374ad*/
        }
        if ( (*(int (__thiscall **)(Class_7F5C70 *))(*(unsigned int *)this + 388))(this) == 16 ) /*0x7374c6*/
          return 10; /*0x7374cb*/
        if ( *((unsigned char *)this + 1048) ) /*0x7374d7*/
          return 10; /*0x7374e4*/
        return *((unsigned char *)this + 1668) != 0xFF ? 10 : 1;
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
mov     cl, ds:byte_737B78[eax]
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
call    WinAPI__Wrapper
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
call    WinAPI__Wrapper
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
call    WinAPI__Wrapper
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
call    WinAPI__Wrapper
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
    int *Height; // eax
    UnitTypeClass *Type; // edx
    double v9; // st7
    int v10; // eax
    int v11; // edx
    int v12; // ecx
    int v13; // ecx
    int v14; // eax
    int GroundHeight; // ebx
    void (**vtable0)(UnitClass *, int *, double); // eax
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
    int v30; // ebp
    int v31; // eax
    int v32; // eax
    bool v33; // zf
    signed int v34; // ebx
    double v35; // st7
    int v36; // eax
    void (__thiscall **v37)(UnitClass *, ObjectVector *); // edx
    int v38; // ebp
    int v39; // edi
    int v40; // ebx
    int v41; // eax
    int v42; // eax
    bool v43; // zf
    signed int v44; // ebp
    double v45; // st7
    int v46; // eax
    int v47; // edx
    int v48; // kr00_4
    AbstractClass *v49; // ebx
    unsigned int *vtable3; // ebp
    int v51; // eax
    int ObjectVector_field_0x14; // ecx
    int v53; // eax
    int i; // ebp
    unsigned int *v55; // edi
    int v56; // edx
    int v57; // edx
    void (__thiscall **v58)(UnitClass *, int); // edx
    void (__thiscall **v59)(UnitClass *, ObjectVector *, int, int); // eax
    void (__thiscall **v60)(UnitClass *, int); // edx
    int v61; // edx
    int v62; // eax
    CellClass *v63; // eax
    int v64; // eax
    int v65; // [esp+18h] [ebp-68h]
    double v66; // [esp+18h] [ebp-68h]
    int v67; // [esp+24h] [ebp-5Ch]
    int v68; // [esp+24h] [ebp-5Ch]
    int v69; // [esp+24h] [ebp-5Ch]
    int v70; // [esp+24h] [ebp-5Ch]
    int v71; // [esp+28h] [ebp-58h]
    int v72; // [esp+28h] [ebp-58h]
    int v73[4]; // [esp+30h] [ebp-50h] BYREF
    int v74[2]; // [esp+40h] [ebp-40h] BYREF
    int v75; // [esp+50h] [ebp-30h] BYREF
    int ObjectVector_field_0x04; // [esp+54h] [ebp-2Ch]
    int ObjectVector_field_0x08; // [esp+58h] [ebp-28h] BYREF
    ObjectVector v78; // [esp+5Ch] [ebp-24h] BYREF
    int v79; // [esp+74h] [ebp-Ch] BYREF
    int v80; // [esp+78h] [ebp-8h]
    int v81; // [esp+7Ch] [ebp-4h]

    if ( *(unsigned int *)(*(unsigned int *)(*(unsigned int *)((char *)&FootClass_Array + 892) + 4 * ((unsigned int *)this)[0]) + 4 * ((unsigned int *)this)[0] + 48) != -1 ) /*0x735a20*/
    {
      v2 = (Vector3 *)(*((int (__thiscall **)(UnitClass *))this->vtable1 + 18))(this); /*0x735a2f*/
      unknownCoords568 = ((unsigned int *)this)[0]; /*0x735a32*/
      v4 = Vector3::Subtract(v2, &ObjectVector_field_0x08, ((unsigned int *)this)[0]); /*0x735a40*/
      Coord::Length((Coord *)v4); /*0x735a47*/
      v5 = *(unsigned int **)(*(unsigned int *)((char *)&FootClass_Array + 892) + 4 * ((unsigned int *)this)[0]); /*0x735a5f*/
      v6 = (int *)(*((int (__thiscall **)(UnitClass *, int *, int *))this->vtable1 + 18))( /*0x735a69*/
                    this,
                    &v78.ObjectVector_field_0x14,
                    ((unsigned int *)this)[0]);
      Height = (int *)Cell::GetHeight((Cell *)v73, v6, &v79); /*0x735a71*/
      Type = this->Type; /*0x735a76*/
      v73[0] = *Height; /*0x735a7e*/
      v9 = (double)((unsigned int *)Type)[0] * 1.5; /*0x735a88*/
      IDA_LOWORD(v10) = Math::RoundToInt(v9); /*0x735a8e*/
      v65 = v10; /*0x735a93*/
      v67 = v5[10]; /*0x735a9a*/
      v75 = ((__int16)v67 << 8) + 128; /*0x735aae*/
      v11 = (__int16)v5[9]; /*0x735ab8*/
      v12 = (IDA_SHIWORD(v67) << 8) + 128; /*0x735abb*/
      v68 = v5[9]; /*0x735ac1*/
      ObjectVector_field_0x04 = v12; /*0x735aca*/
      ObjectVector_field_0x08 = 0; /*0x735ad9*/
      v78.ObjectVector_field_0x08 = 0; /*0x735add*/
      v13 = v5[112]; /*0x735ae1*/
      *(unsigned int *)v78.__pad_0 = (v11 << 8) + 128; /*0x735ae7*/
      v14 = (IDA_SHIWORD(v68) << 8) + 128; /*0x735af2*/
      v69 = v13; /*0x735af7*/
      v78.ObjectVector_field_0x04 = v14; /*0x735b01*/
      GroundHeight = Cell::GetGroundHeight(&v78); /*0x735b0a*/
      v70 = (int)(Cell::GetGroundHeight(&v75) - GroundHeight) / v69; /*0x735b26*/
      if ( v71 > v65 ) /*0x735b30*/
      {
        v38 = v5[((unsigned int *)this)[0] + 12]; /*0x735d42*/
        v79 = *(unsigned int *)&this->vtable2; /*0x735d48*/
        v80 = ((unsigned int *)this)[1]; /*0x735d4f*/
        v39 = *(unsigned int *)&this->vtable3; /*0x735d53*/
        v73[0] = SLOWORD(v73[0]) - 0x3FFF; /*0x735d61*/
        *(double *)v74 = (double)v73[0] * -0.00009587672516830327; /*0x735d6f*/
        v40 = v74[1]; /*0x735d77*/
        *(double *)v73 = (double)v80; /*0x735d8c*/
        Math::SinCos(*(double *)v74); /*0x735d90*/
        IDA_LOWORD(v41) = Math::RoundToInt(v9); /*0x735d9d*/
        v73[0] = v41; /*0x735da8*/
        Math::ArcTan2(COERCE_DOUBLE(IDA___PAIR64__(v40, v74[0]))); /*0x735dac*/
        IDA_LOWORD(v42) = Math::RoundToInt(v9 * (double)v65 + (double)v79); /*0x735dbc*/
        Coord::Subtract((Coord *)&v78, v42, v73[0], v39); /*0x735dcc*/
        v44 = v38 & 0x80000001; /*0x735ddd*/
        v43 = v44 == 0; /*0x735ddd*/
        v75 = *(unsigned int *)v78.__pad_0; /*0x735de3*/
        ObjectVector_field_0x04 = v78.ObjectVector_field_0x04; /*0x735de7*/
        ObjectVector_field_0x08 = v78.ObjectVector_field_0x08; /*0x735deb*/
        if ( v44 < 0 ) /*0x735def*/
          v43 = (((unsigned char)v44 - 1) | 0xFFFFFFFE) == -1; /*0x735df5*/
        if ( v43 ) /*0x735df6*/
          v45 = 256.0; /*0x735e00*/
        else
          v45 = 362.0386719675124; /*0x735df8*/
        v48 = Math::RoundToInt(v45); /*0x735e14*/
        IDA_LOWORD(v47) = IDA_HIWORD(v48); /*0x735e14*/
        IDA_LOWORD(v46) = v48; /*0x735e14*/
        ObjectVector_field_0x08 = v46; /*0x735e1d*/
        (*((void (__fastcall **)(UnitClass *, int, int *))this->vtable1 + 109))(this, v47, &v75); /*0x735e28*/
        return; /*0x735e35*/
      }
      vtable0 = (void (**)(UnitClass *, int *, double))this->FootClass; /*0x735b3c*/
      v17 = ((unsigned int *)this)[0] + 1; /*0x735b3e*/
      ((unsigned int *)this)[0] = v17; /*0x735b44*/
      v18 = v5[v17 + 12]; /*0x735b4c*/
      vtable0[109](this, ((unsigned int *)this)[0], v9); /*0x735b58*/
      if ( v18 != -1 ) /*0x735b64*/
      {
        v19 = Coord::Subtract( /*0x735b92*/
                (Coord *)&v79,
                g_DDrawSurfaceManager.scenario[2 * (v18 & 7) + 102] + *unknownCoords568,
                ((unsigned int *)this)[1] + g_DDrawSurfaceManager.scenario[2 * (v18 & 7) + 103],
                ((unsigned int *)this)[2]);
        v75 = *v19; /*0x735b99*/
        ObjectVector_field_0x04 = v19[1]; /*0x735ba5*/
        ObjectVector_field_0x08 = v19[2]; /*0x735bb2*/
        v20 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], ((unsigned int *)this)[0]); /*0x735bb6*/
        Coords = CellClass::GetCoords(v20, v74); /*0x735bc2*/
        v22 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v75); /*0x735bd3*/
        v23 = CellClass::GetCoords(v22, v73); /*0x735bda*/
        v24 = *v23 - *Coords + *unknownCoords568; /*0x735bf2*/
        v25 = v23[1] - Coords[1] + ((unsigned int *)this)[1]; /*0x735bf7*/
        v26 = ((unsigned int *)this)[2]; /*0x735bf9*/
        *unknownCoords568 = v24; /*0x735bfc*/
        ((unsigned int *)this)[1] = v25; /*0x735c00*/
        ((unsigned int *)this)[2] = v26; /*0x735c07*/
        *(unsigned int *)&this->FootClass_field_570 += v70; /*0x735c16*/
        v27 = (int *)(*((int (__thiscall **)(UnitClass *, int *))this->vtable1 + 18))(this, &v79); /*0x735c21*/
        v28 = (__int16)*(unsigned int *)Cell::GetHeight((Cell *)v73, v27, ((unsigned int *)this)[0]); /*0x735c36*/
        v79 = *(unsigned int *)&this->vtable2; /*0x735c3b*/
        v80 = ((unsigned int *)this)[1]; /*0x735c42*/
        v29 = *(unsigned int *)&this->vtable3; /*0x735c4a*/
        v73[0] = v65 - v71; /*0x735c5c*/
        *(double *)v74 = (double)(v28 - 0x3FFF) * -0.00009587672516830327; /*0x735c6e*/
        v30 = v74[1]; /*0x735c76*/
        v66 = (double)(v65 - v71); /*0x735c80*/
        Math::SinCos(*(double *)v74); /*0x735c8f*/
        IDA_LOWORD(v31) = Math::RoundToInt(v9); /*0x735c9c*/
        v72 = v31; /*0x735ca7*/
        Math::ArcTan2(COERCE_DOUBLE(IDA___PAIR64__(v30, v74[0]))); /*0x735cab*/
        IDA_LOWORD(v32) = Math::RoundToInt(v9 * v66 + (double)v79); /*0x735cbb*/
        Coord::Subtract((Coord *)&v75, v32, v72, v29); /*0x735ccb*/
        v34 = v18 & 0x80000001; /*0x735cdc*/
        v33 = v34 == 0; /*0x735cdc*/
        *(unsigned int *)v78.__pad_0 = v75; /*0x735ce2*/
        v78.ObjectVector_field_0x04 = ObjectVector_field_0x04; /*0x735ce6*/
        v78.ObjectVector_field_0x08 = ObjectVector_field_0x08; /*0x735cea*/
        if ( v34 < 0 ) /*0x735cee*/
          v33 = (((unsigned char)v34 - 1) | 0xFFFFFFFE) == -1; /*0x735cf4*/
        if ( v33 ) /*0x735cf5*/
          v35 = 256.0; /*0x735cff*/
        else
          v35 = 362.0386719675124; /*0x735cf7*/
        IDA_LOWORD(v36) = Math::RoundToInt(v35); /*0x735d13*/
        v37 = (void (__thiscall **)(UnitClass *, ObjectVector *))this->FootClass; /*0x735d18*/
        v78.ObjectVector_field_0x08 = v36; /*0x735d1a*/
        v37[109](this, &v78); /*0x735d27*/
        return; /*0x735d34*/
      }
    }
    v79 = *(unsigned int *)&this->vtable2; /*0x735e40*/
    v80 = *(unsigned int *)&this->vtable2; /*0x735e4c*/
    v81 = *(unsigned int *)&this->vtable3; /*0x735e58*/
    v49 = (AbstractClass *)Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v79); /*0x735e64*/
    vtable3 = v49[6].vtable3; /*0x735e66*/
    if ( vtable3 ) /*0x735e6e*/
    {
      ObjectVector::Construct(&v78, 0, 0); /*0x735e7c*/
      v51 = v78.ObjectVector_field_0x08; /*0x735e81*/
      ObjectVector_field_0x14 = 10; /*0x735e85*/
      *(unsigned int *)v78.__pad_0 = (void *)&vt_DynamicVectorClass_ObjectClass; /*0x735e8c*/
      v78.ObjectVector_field_0x14 = 10; /*0x735e94*/
      v78.ObjectVector_field_0x10 = 0; /*0x735e98*/
      while ( 1 ) /*0x735ea2*/
      {
        if ( v78.ObjectVector_field_0x10 < v51 ) /*0x735ea6*/
          goto LABEL_24; /*0x735ea6*/
        if ( (IDA_BYTE1(v78.ObjectVector_field_0x0C) || !v51) && ObjectVector_field_0x14 > 0 ) /*0x735eb6*/
          break; /*0x735eb6*/
  LABEL_26:
        vtable3 = (unsigned int *)vtable3[12]; /*0x735ee1*/
        if ( !vtable3 ) /*0x735ee6*/
        {
          for ( i = 0; i < v78.ObjectVector_field_0x10; ++i ) /*0x735ef0*/
          {
            v55 = *(unsigned int **)(v78.ObjectVector_field_0x04 + 4 * i); /*0x735ef6*/
            if ( (*(int (__thiscall **)(unsigned int *))(*v55 + 44))(v55) == 1 /*0x735f0f*/
              || (*(int (__thiscall **)(unsigned int *))(*v55 + 44))(v55) == 15 )
            {
              if ( !v55[413] ) /*0x735f11*/
                WinAPI::Wrapper(-2147467261); /*0x735f1e*/
              if ( !(*(unsigned __int8 (__stdcall **)(unsigned int))(*(unsigned int *)v55[413] + 16))(v55[413]) ) /*0x735f2c*/
              {
                v56 = *v55; /*0x735f33*/
                v79 = 0; /*0x735f40*/
                v80 = 0; /*0x735f47*/
                v81 = 0; /*0x735f4e*/
                (*(void (__thiscall **)(unsigned int *, int *, int, int))(v56 + 372))(v55, &v79, 1, 1); /*0x735f55*/
              }
            }
          }
          (*((void (__thiscall **)(UnitClass *, unsigned int, unsigned int))this->vtable1 + 337))(this, 0, 0); /*0x735f6a*/
          *(unsigned int *)v78.__pad_0 = (void *)&vt_VectorClass_ObjectClass; /*0x735f74*/
          if ( v78.ObjectVector_field_0x04 && IDA_BYTE1(v78.ObjectVector_field_0x0C) ) /*0x735f8a*/
            RA2_OPDEL((void *)v78.ObjectVector_field_0x04); /*0x735f91*/
          return; /*0x735fa0*/
        }
        ObjectVector_field_0x14 = v78.ObjectVector_field_0x14; /*0x735e9e*/
      }
      if ( (*(unsigned __int8 (__thiscall **)(ObjectVector *, int, unsigned int))(*(unsigned int *)v78.__pad_0 + 8))( /*0x735ec4*/
             &v78,
             ObjectVector_field_0x14 + v51,
             0) )
      {
  LABEL_24:
        v53 = v78.ObjectVector_field_0x10++; /*0x735ecb*/
        *(unsigned int *)(v78.ObjectVector_field_0x04 + 4 * v53) = vtable3; /*0x735eda*/
      }
      v51 = v78.ObjectVector_field_0x08; /*0x735edd*/
      goto LABEL_26; /*0x735edd*/
    }
    v57 = ((unsigned int *)this)[2]; /*0x735fb4*/
    v73[0] = *(unsigned int *)(*(unsigned int *)(*(unsigned int *)((char *)&FootClass_Array + 892) + 4 * ((unsigned int *)this)[0]) + 40); /*0x735fba*/
    v81 = v57; /*0x735fbe*/
    v80 = (IDA_SHIWORD(v73[0]) << 8) + 128; /*0x735fdb*/
    v79 = (SLOWORD(v73[0]) << 8) + 128; /*0x735fe3*/
    (*((void (__thiscall **)(UnitClass *, int *))this->vtable1 + 109))(this, &v79); /*0x735fec*/
    v58 = (void (__thiscall **)(UnitClass *, int))this->FootClass; /*0x735ff2*/
    ((unsigned int *)this)[0] = -1; /*0x735ff8*/
    v58[73](this, 1); /*0x735fff*/
    if ( ((unsigned int *)this)[0] == v49 ) /*0x73600b*/
    {
      v59 = (void (__thiscall **)(UnitClass *, ObjectVector *, int, int))this->FootClass; /*0x73600d*/
      memset(&v78, 0, 12); /*0x73601c*/
      v59[93](this, &v78, 1, 1); /*0x736028*/
    }
    v60 = (void (__thiscall **)(UnitClass *, int))this->FootClass; /*0x736032*/
    ((unsigned int *)this)[0] = 1; /*0x736038*/
    v60[99](this, 2); /*0x73603f*/
    (*((void (__thiscall **)(UnitClass *, unsigned int, int))this->vtable1 + 337))(this, 0, 1072693248); /*0x73604f*/
    v61 = ((unsigned int *)this)[1]; /*0x736057*/
    v62 = ((unsigned int *)this)[2]; /*0x73605a*/
    *(unsigned int *)v78.__pad_0 = ((unsigned int *)this)[0]; /*0x73605d*/
    v78.ObjectVector_field_0x04 = v61; /*0x736065*/
    v78.ObjectVector_field_0x08 = v62; /*0x73606f*/
    v63 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v78); /*0x736073*/
    v64 = InfantryClass::GetType((InfantryClass *)v63); /*0x73607a*/
    if ( v64 ) /*0x736081*/
    {
      IDA_LOWORD(v73[0]) = (((unsigned __int16)*(unsigned int *)(v64 + 44) << 13) - 24577) & 0xE000; /*0x7360a0*/
      ((char *)((unsigned int *)this)[0])->Set_SyncLog(v73); /*0x7360a5*/
    }
}
// 0x741970
int UnitClass::AssignDestination_SyncLog(int64_t a2)
{
    double v3; // st7
    short *v5; // ebx
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
    short *v17; // eax
    short v18; // dx
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
    int v33; // eax
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
    int (__stdcall ***v60)(unsigned int, void *, int *); // eax
    int v61; // esi
    int v62; // edi
    int v63; // ecx
    int v64; // esi
    int v65; // esi
    int v66; // eax
    Class_7F5C70 *v67; // esi
    int v68; // eax
    int (__stdcall ***Checked)(unsigned int, void *, int *); // eax
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
    short *v82; // eax
    int v83; // eax
    Class_7F5C70 *v84; // ebx
    int (__stdcall ***v85)(unsigned int, void *, int *); // eax
    int v86; // esi
    int v87; // eax
    int v88; // edi
    int v89; // eax
    int InstanceCOM; // eax
    int StreamClass_field_0C; // eax
    int (__stdcall ***v92)(unsigned int, void *, int *); // eax
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
    short v138[4]; // [esp+15Ch] [ebp-30h] BYREF
    int v139; // [esp+164h] [ebp-28h]
    unsigned char v140[16]; // [esp+16Ch] [ebp-20h] BYREF
    unsigned char v141[16]; // [esp+17Ch] [ebp-10h] BYREF

    v5 = (short *)IDA_LODWORD(a2); /*0x74197a*/
    if ( *(unsigned char *)(*((unsigned int *)this + 433) + 3434) )
    {
      if ( !IDA_LODWORD(a2) )
      {
        v6 = *((unsigned int *)this + 361); /*0x74199f*/
        if ( v6 )
        {
          v7 = *((unsigned int *)this + 173); /*0x7419ad*/
          if ( v7 )
          {
            if ( v6 == v7
              || (*(int (__thiscall **)(int))(*(unsigned int *)v6 + 44))(v6) == 11
              && ((v8 = *((unsigned int *)this + 361)) != 0
                ? (v9 = (*(int (__thiscall **)(unsigned int))(*(unsigned int *)v8 + 44))(*((unsigned int *)this + 361)) == 11 ? v8 : 0)
                : (v9 = 0),
                  *(unsigned int *)(v9 + 228) == *((unsigned int *)this + 173))
              || (IDA_LOWORD(v135.ComPtr_field_0x08) = 0x4000,
                  Value = ProgressTimer::GetValue((ProgressTimer *)(this + 904), &v135.ComPtr_field_0x10),
                  IDA_LOWORD(v135.ComPtr_field_0x0C) = *(unsigned short *)ObjectClass::CalcTargetFacing(
                                                               (ObjectClass *)this,
                                                               &v135.ComPtr_field_0x04,
                                                               *((unsigned int *)this + 173))
                                                 - *(unsigned short *)Value,
                  (unsigned __int8)UnitClass::CompareCoordinateMagnitude(
                                     (UnitClass *)&v135.ComPtr_field_0x08,
                                     (short *)&v135.ComPtr_field_0x0C)) )
            {
              if ( (*(int (__thiscall **)(Class_7F5C70 *))(*(unsigned int *)this + 388))(this) != 1 ) /*0x741a60*/
                (*(void (__thiscall **)(Class_7F5C70 *, int))(*(unsigned int *)this + 496))(this, 1); /*0x741a6d*/
              return; /*0x741a7d*/
            }
          }
        }
      }
    }
    if ( IDA_LODWORD(a2) != *((unsigned int *)this + 361) || *((unsigned char *)this + 504) )
    {
      v11 = *((unsigned char *)this + 1760); /*0x741a96*/
      *((unsigned char *)this + 504) = 0; /*0x741a9c*/
      if ( v11 ) /*0x741aa5*/
      {
        if ( !*((unsigned int *)this + 172) ) /*0x741acb*/
        {
  LABEL_366:
          FootClass::ClearPathIndex((FootClass *)this); /*0x743173*/
          return; /*0x743175*/
        }
      }
      else if ( *((unsigned char *)this + 1761) || *((unsigned char *)this + 1762) ) /*0x741ab1*/
      {
        goto LABEL_366; /*0x741ab9*/
      }
      if ( (unsigned __int8)Team::AllMembersValid((Team *)this) ) /*0x741ad3*/
      {
        if ( *(int *)(*((unsigned int *)this + 433) + 1504) > 0 ) /*0x741aea*/
        {
          Member = Team::GetMember((Team *)this, 0); /*0x741af0*/
          if ( (*(int (__thiscall **)(int))(*(unsigned int *)Member + 44))(Member) == 15 ) /*0x741aff*/
          {
            if ( !IDA_LODWORD(a2) ) /*0x741b03*/
              goto LABEL_49; /*0x741b03*/
            if ( (*(unsigned char *)(IDA_LODWORD(a2) + 20) & 1) != 0 && !(unsigned __int8)Array::Contains((Array *)this, IDA_SLODWORD(a2)) ) /*0x741b12*/
              (*(void (__thiscall **)(Class_7F5C70 *, int))(*(unsigned int *)this + 628))(this, 3); /*0x741b22*/
          }
        }
      }
      if ( IDA_LODWORD(a2) )
      {
        if ( (unsigned __int8)Team::AllMembersValid((Team *)this) ) /*0x741b32*/
        {
          if ( !(*(int (__thiscall **)(Class_7F5C70 *))(*(unsigned int *)this + 388))(this) ) /*0x741b40*/
          {
            if ( *((unsigned char *)this + 1048) ) /*0x741b4a*/
            {
              v13 = Team::GetMember((Team *)this, 0); /*0x741b58*/
              if ( (*(int (__thiscall **)(int))(*(unsigned int *)v13 + 44))(v13) == 2 ) /*0x741b67*/
              {
                v14 = (unsigned int *)Team::GetMember((Team *)this, 0); /*0x741b6d*/
                if ( *(unsigned char *)(v14[433] + 3580) ) /*0x741b78*/
                {
                  (*(void (__thiscall **)(unsigned int *, unsigned int, int))(*v14 + 1152))(v14, 0, 1); /*0x741b8a*/
                  (*(void (__thiscall **)(Class_7F5C70 *, int))(*(unsigned int *)this + 628))(this, 25); /*0x741b97*/
                  (*(void (__thiscall **)(Class_7F5C70 *, int))(*(unsigned int *)this + 628))(this, 3); /*0x741ba4*/
                }
              }
            }
          }
        }
        v15 = (*(int (__thiscall **)(unsigned int))(*(unsigned int *)IDA_LODWORD(a2) + 44))(IDA_LODWORD(a2)) == 6 ? (Team *)IDA_LODWORD(a2) : 0;
  LABEL_36:
        v16 = *(unsigned int *)this; /*0x741bbe*/
        v135.ComPtr_field_0x0C = (int)v15; /*0x741bc3*/
        if ( (*(int (__thiscall **)(Class_7F5C70 *))(v16 + 388))(this) == 16 || *((unsigned int *)this + 45) == 16 ) /*0x741bd9*/
        {
          v17 = (short *)(*(int (__thiscall **)(Class_7F5C70 *, int *))(*(unsigned int *)this + 440))( /*0x741be5*/
                             this,
                             &v135.ComPtr_field_0x10);
          v18 = *v17; /*0x741beb*/
          IDA_LOWORD(v17) = IDA_HIWORD(dword_89F6A0) + v17[1]; /*0x741bf9*/
          IDA_LOWORD(v135.ComPtr_field_0x04) = dword_89F6A0 + v18; /*0x741c00*/
          IDA_HIWORD(v135.ComPtr_field_0x04) = (unsigned short)v17; /*0x741c05*/
          v135.ComPtr_field_0x08 = v135.ComPtr_field_0x04; /*0x741c12*/
          v19 = (Cell *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (short *)&v135.ComPtr_field_0x08); /*0x741c1c*/
          v20 = (BuildingClass *)Cell::IsBridge(v19); /*0x741c23*/
          if ( v20 ) /*0x741c2a*/
          {
            if ( *(unsigned char *)(*((unsigned int *)this + 433) + 3598) && v20->Anims[10] ) /*0x741c3c*/
              BuildingClass::ClearAnims(v20, 10); /*0x741c4a*/
          }
        }
        if ( (*(int (__thiscall **)(Class_7F5C70 *))(*(unsigned int *)this + 388))(this) != 7 && *((unsigned int *)this + 45) != 7 /*0x741c71*/
          || (unsigned __int8)Team::AllMembersValid((Team *)this) )
        {
          *((unsigned int *)this + 376) = -1; /*0x741e88*/
          goto LABEL_80; /*0x741e88*/
        }
        v21 = AbstractClass::IsTechnoType((AbstractClass *)IDA_LODWORD(a2)); /*0x741c80*/
        if ( v21 && (*(int (__thiscall **)(void *))(*(unsigned int *)v21 + 44))(v21) == 1 )
        {
          if ( IDA_LODWORD(a2) )
            v22 = (*(int (__thiscall **)(unsigned int))(*(unsigned int *)IDA_LODWORD(a2) + 44))(IDA_LODWORD(a2)) == 1 ? IDA_LODWORD(a2) : 0;
          else
            v22 = 0; /*0x741c99*/
          *((unsigned int *)this + 320) = v22; /*0x741cb8*/
          ((TechnoClass *)this)->SetFocus(0); /*0x741cbe*/
          v5 = 0; /*0x741cc3*/
          IDA_LODWORD(a2) = 0; /*0x741cc5*/
          goto LABEL_80; /*0x741ccc*/
        }
        if ( !v15 ) /*0x741cd3*/
          goto LABEL_74; /*0x741cd3*/
        if ( (*(int (__thiscall **)(Team *))(*(unsigned int *)v15->__pad_0 + 44))(v15) == 6 /*0x741ceb*/
          && *(unsigned char *)(*(unsigned int *)&v15[5].__pad_0[132] + 5806) )
        {
          *((unsigned int *)this + 320) = v15; /*0x741cf9*/
          ((TechnoClass *)this)->SetFocus(0); /*0x741cff*/
          v5 = 0; /*0x741d04*/
          IDA_LODWORD(a2) = 0; /*0x741d06*/
          goto LABEL_80; /*0x741d0d*/
        }
        if ( (*(int (__thiscall **)(Team *))(*(unsigned int *)v15->__pad_0 + 44))(v15) == 6 ) /*0x741d1c*/
        {
          if ( (unsigned __int8)Team::AllMembersValid(v15) ) /*0x741d24*/
          {
            if ( !*(unsigned char *)(*(unsigned int *)&v15[5].__pad_0[132] + 5803) ) /*0x741d37*/
              ((TechnoClass *)this)->SetFocus(IDA_SLODWORD(a2)); /*0x741d44*/
            if ( *(unsigned char *)(*(unsigned int *)&v15[5].__pad_0[132] + 5803) ) /*0x741d4f*/
            {
              (*(void (__thiscall **)(Class_7F5C70 *, int))(*(unsigned int *)this + 628))(this, 3); /*0x741d60*/
              v5 = 0; /*0x741d66*/
              IDA_LODWORD(a2) = 0; /*0x741d68*/
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
                *((unsigned int *)this + 320) = v15; /*0x741d9f*/
              }
              else
              {
                (*(void (__thiscall **)(Class_7F5C70 *, int))(*(unsigned int *)this + 628))(this, 3); /*0x741db8*/
                v5 = 0; /*0x741dbe*/
              }
              IDA_LODWORD(a2) = 0; /*0x741da5*/
            }
            goto LABEL_80; /*0x741dac*/
          }
          v25 = *((unsigned int *)this + 361); /*0x741dcf*/
          if ( (*(int (__thiscall **)(Class_7F5C70 *, int, Team *))(*(unsigned int *)this + 632))(this, 14, v15) != 1 ) /*0x741de3*/
          {
            (*(void (__thiscall **)(Class_7F5C70 *, int))(*(unsigned int *)this + 628))(this, 3); /*0x741dec*/
            if ( !*(unsigned char *)(*(unsigned int *)&v15[5].__pad_0[132] + 5801) ) /*0x741e00*/
              goto LABEL_80; /*0x741e00*/
            goto LABEL_69; /*0x741e00*/
          }
          if ( *(unsigned char *)(*(unsigned int *)&v15[5].__pad_0[132] + 5811) && *((unsigned int *)this + 361) != v25 ) /*0x741e28*/
          {
            v5 = (short *)*((unsigned int *)this + 361); /*0x741e2a*/
            IDA_LODWORD(a2) = v5; /*0x741e2c*/
          }
        }
        else
        {
  LABEL_74:
          if ( !IDA_LODWORD(a2) || (*(unsigned char *)(IDA_LODWORD(a2) + 20) & 1) == 0 ) /*0x741e3d*/
            goto LABEL_80; /*0x741e3d*/
          if ( (unsigned __int8)Team::AllMembersValid((Team *)IDA_LODWORD(a2)) ) /*0x741e41*/
          {
  LABEL_69:
            ((TechnoClass *)this)->SetFocus(IDA_SLODWORD(a2)); /*0x741e06*/
            goto LABEL_80; /*0x741e0e*/
          }
          if ( (*(int (__thiscall **)(Class_7F5C70 *, int, unsigned int))(*(unsigned int *)this + 632))(this, 2, IDA_LODWORD(a2)) == 1 /*0x741e77*/
            && (*(int (__thiscall **)(Class_7F5C70 *, int))(*(unsigned int *)this + 628))(this, 14) != 1 )
          {
            (*(void (__thiscall **)(Class_7F5C70 *, int))(*(unsigned int *)this + 628))(this, 3); /*0x741e80*/
          }
        }
  LABEL_80:
        if ( v5 && *(unsigned char *)(*((unsigned int *)this + 433) + 3372) ) /*0x741ea1*/
        {
          v26 = this + 1652; /*0x741eb5*/
          if ( !*((unsigned int *)this + 413) ) /*0x741eaf*/
            WinAPI::Wrapper(-2147467261); /*0x741ec4*/
          if ( (*(unsigned __int8 (__stdcall **)(unsigned int))(**(unsigned int * *)&v26->uniqueId)(*(unsigned int *)v26) ) /*0x741ece*/
          {
            v27 = *(unsigned int *)v26; /*0x741ed9*/
            v135.ComPtr_field_0x04 = 0; /*0x741edb*/
            if ( !v27 ) /*0x741ee5*/
              goto LABEL_90; /*0x741ee5*/
            v28 = StreamClass::Set2((StreamClass *)&v135.ComPtr_field_0x04, (unsigned int *)this + 413); /*0x741eec*/
            if ( v28 < 0 && v28 != -2147467262 ) /*0x741efa*/
              WinAPI::Wrapper(v28); /*0x741efd*/
            if ( !v135.ComPtr_field_0x04 ) /*0x741f08*/
  LABEL_90:
              WinAPI::Wrapper(-2147467261); /*0x741f0f*/
            (*(void (__stdcall **)(int, unsigned char *))(*(unsigned int *)v135.ComPtr_field_0x04 + 12))(v135.ComPtr_field_0x04, v140); /*0x741f20*/
            if ( !memcmp(v140, &stru_7E9A30, 0x10u) ) /*0x741f33*/
            {
              v29 = *((unsigned int *)this + 365); /*0x741f3b*/
              if ( *((unsigned int *)this + 367) < v29 /*0x741f6c*/
                || (*((unsigned char *)this + 1465) || !v29)
                && (v30 = *((unsigned int *)this + 368), v30 > 0)
                && (*(unsigned __int8 (__thiscall **)(Class_7F5C70 *, int, unsigned int))(*((unsigned int *)this + 363) + 8))(
                     this + 1452,
                     v30 + v29,
                     0) )
              {
                v31 = *((unsigned int *)this + 367); /*0x741f73*/
                if ( v31 ) /*0x741f78*/
                  memcpy((void *)(*((unsigned int *)this + 364) + 4), *((const void **)this + 364), 4 * v31); /*0x741f86*/
                **((unsigned int **)this + 364) = v5; /*0x741f91*/
                ++*((unsigned int *)this + 367); /*0x741f97*/
              }
              (*(void (__thiscall **)(Class_7F5C70 *))(*((unsigned int *)this + 354) + 12))(this + 1416); /*0x741fa6*/
              v32 = (*(int (__thiscall **)(Class_7F5C70 *))(*(unsigned int *)this + 452))(this); /*0x741fae*/
              v5 = (short *)v32; /*0x741fb4*/
              IDA_BYTE4(a2) = 0; /*0x741fb6*/
              IDA_LODWORD(a2) = v32; /*0x741fc0*/
              if ( v32 ) /*0x741fc7*/
              {
                if ( (*(unsigned int *)(v32 + 320) & 0x100) != 0 /*0x741fe3*/
                  && !(*(unsigned __int8 (__thiscall **)(Class_7F5C70 *, unsigned int))(*(unsigned int *)this + 188))(this, 0) )
                {
                  v33 = *((unsigned int *)this + 433); /*0x741ff3*/
                  *(unsigned short *)v135.__pad_0 = 0; /*0x741ffa*/
                  *(unsigned short *)&v135.__pad_0[2] = 0; /*0x741fff*/
                  v126 = *(unsigned int *)(v33 + 1460); /*0x742022*/
                  TileIndex = MapClass::GetTileIndex((MapClass *)&dword_87F7E8, v5 + 18, v126, 0); /*0x74202f*/
                  v135.ComPtr_field_0x08 = *LayerClass::Pathfinding_Find( /*0x742050*/
                                              (Type *)&dword_87F7E8,
                                              v35,
                                              &v135.ComPtr_field_0x10,
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
                                              (short *)v135.__pad_0,
                                              0,
                                              0);
                  if ( v135.ComPtr_field_0x08 != g_UnitSelectionState ) /*0x742054*/
                  {
                    v5 = (short *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (short *)&v135.ComPtr_field_0x08); /*0x742073*/
                    IDA_LODWORD(a2) = v5; /*0x742075*/
                  }
                }
              }
            }
            if ( v135.ComPtr_field_0x04 ) /*0x742082*/
              (*(void (__stdcall **)(int))(*(unsigned int *)v135.ComPtr_field_0x04 + 8))(v135.ComPtr_field_0x04); /*0x742087*/
          }
        }
        v129 = 0; /*0x74208c*/
        if ( !v5 ) /*0x742091*/
        {
          (*(void (__thiscall **)(Class_7F5C70 *))(*((unsigned int *)this + 354) + 12))(this + 1416); /*0x7423ca*/
          goto LABEL_143; /*0x7423ca*/
        }
        if ( !*(unsigned char *)(*((unsigned int *)this + 433) + 3372) ) /*0x7420a5*/
          goto LABEL_128; /*0x7420a5*/
        if ( !IDA_BYTE4(a2) ) /*0x7420b4*/
          goto LABEL_143; /*0x7420b4*/
        v130 = (*(int (__thiscall **)(Class_7F5C70 *, unsigned int))(*(unsigned int *)this + 188))(this, 0); /*0x7420ca*/
        v36 = (unsigned int *)(*(int (__thiscall **)(Class_7F5C70 *, unsigned int *, unsigned int))(*(unsigned int *)this + 76))(this, v137, 0); /*0x7420d7*/
        IDA_LOWORD(v134.m_Data) = *v36 / 256; /*0x7420ea*/
        IDA_HIWORD(v134.m_Data) = v36[1] / 256; /*0x742102*/
        *(unsigned int *)v135.__pad_0 = v134.m_Data; /*0x74210b*/
        v37 = (Cell *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (short *)v135.__pad_0); /*0x742115*/
        IsBuildableAdvanced = Cell::IsBuildableAdvanced(v37); /*0x74212c*/
        v38 = (unsigned int *)(*(int (__thiscall **)(unsigned int, unsigned int *))(*(unsigned int *)IDA_LODWORD(a2) + 72))(IDA_LODWORD(a2), v137); /*0x742135*/
        IDA_LOWORD(v134.m_Data) = *v38 / 256; /*0x742148*/
        IDA_HIWORD(v134.m_Data) = v38[1] / 256; /*0x742161*/
        v134.StreamClass_field_0C = v134.m_Data; /*0x74216e*/
        v39 = (Cell *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (short *)&v134.StreamClass_field_0C); /*0x742173*/
        v40 = IDA_BYTE1(v39->Cell_field_0x140) & 1; /*0x742183*/
        v133 = Cell::IsBuildableAdvanced(v39); /*0x742190*/
        *(unsigned int *)v134.__pad_0 = (*(int (__thiscall **)(Class_7F5C70 *))(*(unsigned int *)this + 456))(this); /*0x74219a*/
        if ( v130 ) /*0x7421a4*/
        {
          if ( v40 ) /*0x7421ac*/
          {
            RegionMap = GetRegionMap((ObjectClass *)&dword_87F7E8, (short *)v135.__pad_0, 3, 0); /*0x7421d3*/
            if ( RegionMap == GetRegionMap((ObjectClass *)&dword_87F7E8, (short *)&v134.StreamClass_field_0C, 3, 0) /*0x7421e5*/
              && RegionMap != -1 )
            {
              if ( *((unsigned char *)dword_87F83C + 16 * RegionMap + 8) ) /*0x7421f4*/
                goto LABEL_116; /*0x7421f4*/
              v134.m_Data = *Pathfinding::SelectRegionPath(&v135.ComPtr_field_0x10, (short *)v135.__pad_0, (int)&v135); /*0x74222f*/
              v135.ComPtr_field_0x10 = *Pathfinding::SelectRegionPath( /*0x74223d*/
                                          &v135.ComPtr_field_0x10,
                                          (short *)&v134.StreamClass_field_0C,
                                          (int)&v134.StreamClass_field_0C);
              v42 = (__int16)(IDA_HIWORD(v134.m_Data) - IDA_HIWORD(v135.ComPtr_field_0x10)); /*0x742250*/
              v134.m_Data = (__int16)(IDA_LOWORD(v134.m_Data) - IDA_LOWORD(v135.ComPtr_field_0x10)); /*0x742253*/
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
        if ( (!IsBuildableAdvanced && *(int *)v134.__pad_0 >= 0 || !v133) && !v129 || v43 )
        {
          IDA_LODWORD(a2) = BuildingClass::FindPlacementCells((BuildingClass *)this, IDA_SLODWORD(a2)); /*0x7422d0*/
  LABEL_130:
          if ( !*((unsigned int *)this + 413) ) /*0x7422f7*/
            WinAPI::Wrapper(-2147467261); /*0x742306*/
          if ( (*(unsigned __int8 (__stdcall **)(unsigned int))(**((unsigned int **)this + 413) + 152))(*((unsigned int *)this + 413)) ) /*0x742314*/
          {
            v44 = *((unsigned int *)this + 356); /*0x742322*/
            if ( *((unsigned int *)this + 358) < v44 /*0x742353*/
              || (*((unsigned char *)this + 1429) || !v44)
              && (v45 = *((unsigned int *)this + 359), v45 > 0)
              && (*(unsigned __int8 (__thiscall **)(Class_7F5C70 *, int, unsigned int))(*((unsigned int *)this + 354) + 8))(
                   this + 1416,
                   v45 + v44,
                   0) )
            {
              v46 = *((unsigned int *)this + 358); /*0x74235a*/
              if ( v46 ) /*0x74235f*/
                memcpy((void *)(*((unsigned int *)this + 355) + 4), *((const void **)this + 355), 4 * v46); /*0x74236d*/
              **((unsigned int **)this + 355) = IDA_LODWORD(a2); /*0x74237f*/
              ++*((unsigned int *)this + 358); /*0x742385*/
            }
            v137[0] = *((unsigned int *)this + 39); /*0x742394*/
            v137[1] = *((unsigned int *)this + 40); /*0x7423a0*/
            v137[2] = *((unsigned int *)this + 41); /*0x7423a7*/
            IDA_LODWORD(a2) = Coord::To_Cell((Coord *)&dword_87F7E8, v137); /*0x7423b5*/
          }
  LABEL_143:
          if ( !*(unsigned char *)(*((unsigned int *)this + 433) + 3284) /*0x7423fd*/
            || *((unsigned char *)this + 636)
            || *((unsigned int *)this + 172)
            || *((unsigned char *)this + 1709) )
          {
            goto LABEL_228; /*0x742405*/
          }
          v47 = this + 1652; /*0x742414*/
          v48 = Team::GetMember((Team *)this, 0); /*0x74241a*/
          *(unsigned int *)v135.__pad_0 = 0; /*0x74241c*/
          if ( !*((unsigned int *)this + 413) ) /*0x742424*/
            goto LABEL_152; /*0x742424*/
          v49 = StreamClass::Set2((StreamClass *)&v135, (unsigned int *)this + 413); /*0x74242e*/
          if ( v49 < 0 && v49 != -2147467262 ) /*0x74243c*/
            WinAPI::Wrapper(v49); /*0x74243f*/
          if ( !*(unsigned int *)v135.__pad_0 ) /*0x74244a*/
  LABEL_152:
            WinAPI::Wrapper(-2147467261); /*0x742451*/
          (*(void (__stdcall **)(unsigned int, short *))(**(unsigned int **)v135.__pad_0 + 12))(*(unsigned int *)v135.__pad_0, v138); /*0x742462*/
          v131 = 1; /*0x742467*/
          if ( !v48 ) /*0x74246c*/
            goto LABEL_182; /*0x74246c*/
          if ( (*(int (__thiscall **)(int))(*(unsigned int *)v48 + 44))(v48) != 6
            || ((v50 = (*(int (__thiscall **)(int))(*(unsigned int *)v48 + 44))(v48) == 6 ? v48 : 0, IDA_LODWORD(a2))
              ? (v51 = (*(int (__thiscall **)(unsigned int))(*(unsigned int *)IDA_LODWORD(a2) + 44))(IDA_LODWORD(a2)) == 11
                     ? (CellClass *)IDA_LODWORD(a2)
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
                (*(void (__stdcall **)(unsigned int))(**(unsigned int **)v135.__pad_0 + 8))(*(unsigned int *)v135.__pad_0); /*0x7427bd*/
  LABEL_228:
              if ( IDA_LODWORD(a2) ) /*0x7427c9*/
              {
                v67 = this + 1652; /*0x7427d5*/
                if ( !*((unsigned int *)this + 413) ) /*0x7427cf*/
                  WinAPI::Wrapper(-2147467261); /*0x7427e4*/
                if ( !(*(unsigned __int8 (__stdcall **)(unsigned int))(**(unsigned int * *)&v67->uniqueId)(*(unsigned int *)v67) ) /*0x7427ee*/
                {
                  v68 = *(unsigned int *)v67; /*0x7427f9*/
                  *(unsigned int *)v135.__pad_0 = 0; /*0x7427fb*/
                  if ( !v68 ) /*0x742805*/
                    goto LABEL_240; /*0x742805*/
                  Checked = (int (__stdcall ***)(unsigned int, void *, int *))Stream::GetChecked((Stream *)(this + 1652)); /*0x742809*/
                  v70 = (**Checked)(Checked, &unk_818858, &v135.ComPtr_field_0x10); /*0x74281d*/
                  if ( v70 >= 0 ) /*0x742821*/
                  {
                    ComPtr_field_0x10 = v135.ComPtr_field_0x10; /*0x742830*/
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
                    WinAPI::Wrapper(v70); /*0x742850*/
                  if ( !v71 ) /*0x74285b*/
  LABEL_240:
                    WinAPI::Wrapper(-2147467261); /*0x742862*/
                  (*(void (__stdcall **)(int, unsigned char *))(*(unsigned int *)v71 + 12))(v71, v141); /*0x742876*/
                  if ( !memcmp(v141, &stru_7E9A50, 0x10u) /*0x742899*/
                    && !(*(int (__thiscall **)(Class_7F5C70 *))(*(unsigned int *)this + 456))(this) )
                  {
                    v73 = (int *)(*(int (__thiscall **)(unsigned int, int *))(*(unsigned int *)IDA_LODWORD(a2) + 72))( /*0x7428b0*/
                                   IDA_LODWORD(a2),
                                   &v135.ComPtr_field_0x10);
                    v135.ComPtr_field_0x1C = *v73; /*0x7428b5*/
                    v135.ComPtr_field_0x20 = v73[1]; /*0x7428bc*/
                    v136 = v73[2]; /*0x7428cd*/
                    GroundHeight = Cell::GetGroundHeight(&v135.ComPtr_field_0x1C); /*0x7428d1*/
                    if ( v136 < GroundHeight ) /*0x7428da*/
                      v136 = GroundHeight; /*0x7428dc*/
                    if ( v129 ) /*0x7428e6*/
                      goto LABEL_251; /*0x7428e6*/
                    if ( (*(unsigned __int8 (__thiscall **)(Class_7F5C70 *, unsigned int))(*(unsigned int *)this + 188))(this, 0) ) /*0x7428f3*/
                      goto LABEL_251; /*0x7428f3*/
                    v75 = (unsigned int *)(*(int (__thiscall **)(unsigned int, int *))(*(unsigned int *)IDA_LODWORD(a2) + 72))( /*0x74290a*/
                                      IDA_LODWORD(a2),
                                      &v135.ComPtr_field_0x10);
                    if ( (Coord::To_Cell((Coord *)&dword_87F7E8, v75)->flags & 0x100) != 0 ) /*0x742921*/
                      goto LABEL_251; /*0x742921*/
                    v76 = (unsigned int *)(*(int (__thiscall **)(Class_7F5C70 *, int *, unsigned int))(*(unsigned int *)this + 76))( /*0x742933*/
                                      this,
                                      &v134.m_Data,
                                      0);
                    v77 = Coord::To_Cell((Coord *)&dword_87F7E8, v76); /*0x74293c*/
                    if ( !(unsigned __int8)Cell::IsBuildableAdvanced((Cell *)v77) ) /*0x742943*/
                      goto LABEL_251; /*0x742943*/
                    v78 = (unsigned int *)(*(int (__thiscall **)(unsigned int, short *))(*(unsigned int *)IDA_LODWORD(a2) + 72))( /*0x742959*/
                                      IDA_LODWORD(a2),
                                      v138);
                    v79 = Coord::To_Cell((Coord *)&dword_87F7E8, v78); /*0x742962*/
                    if ( !(unsigned __int8)Cell::IsBuildableAdvanced((Cell *)v79) /*0x7429c7*/
                      || (v80 = (unsigned int *)(*(int (__thiscall **)(unsigned int))(*(unsigned int *)IDA_LODWORD(a2) + 72))(IDA_LODWORD(a2)),
                          IDA_LOWORD(v134.m_Size) = *v80 / 256,
                          IDA_HIWORD(v134.m_Size) = v80[1] / 256,
                          v81 = *(unsigned int *)this,
                          v135.ComPtr_field_0x0C = v134.m_Size,
                          v82 = (short *)(*(int (__thiscall **)(Class_7F5C70 *, StreamClass *, int *))(v81 + 448))(
                                             this,
                                             &v134,
                                             &v135.ComPtr_field_0x0C),
                          !BuildingTypeClass::IsPlacementValid((BuildingTypeClass *)this, v82, v138)) )
                    {
  LABEL_251:
                      v83 = *((unsigned int *)this + 413); /*0x7429d4*/
                      v84 = this + 1652; /*0x7429da*/
                      *(unsigned int *)v134.__pad_0 = 0; /*0x7429e2*/
                      if ( v83 ) /*0x7429ea*/
                      {
                        v85 = (int (__stdcall ***)(unsigned int, void *, int *))Stream::GetChecked((Stream *)(this + 1652)); /*0x7429f2*/
                        v86 = (**v85)(v85, &unk_819088, &v135.ComPtr_field_0x10); /*0x742a06*/
                        if ( v86 >= 0 ) /*0x742a0a*/
                        {
                          v88 = v135.ComPtr_field_0x10; /*0x742a19*/
                          Release2COM((ObjectClass *)&v134); /*0x742a21*/
                          v87 = v88; /*0x742a26*/
                        }
                        else
                        {
                          Release2COM((ObjectClass *)&v134); /*0x742a10*/
                          v87 = 0; /*0x742a15*/
                        }
                        *(unsigned int *)v134.__pad_0 = v87; /*0x742a2a*/
                        if ( v86 < 0 && v86 != -2147467262 ) /*0x742a36*/
                          WinAPI::Wrapper(v86); /*0x742a39*/
                        if ( v87 && (*(unsigned __int8 (__stdcall **)(int))(*(unsigned int *)v87 + 28))(v87) ) /*0x742a49*/
                        {
                          if ( *(unsigned int *)v84 ) /*0x742a50*/
                            (*(void (__stdcall **)(unsigned int))(**(unsigned int * *)&v84->vtable3)(*(unsigned int *)v84); /*0x742a59*/
                          v89 = *(unsigned int *)v134.__pad_0; /*0x742a5c*/
                          *(unsigned int *)v84 = 0; /*0x742a60*/
                          if ( !v89 ) /*0x742a68*/
                            WinAPI::Wrapper(-2147467261); /*0x742a6f*/
                          (*(void (__stdcall **)(int, Class_7F5C70 *))(*(unsigned int *)v89 + 16))(v89, this + 1652); /*0x742a7c*/
                        }
                      }
                      v134.m_Data = 0; /*0x742a8c*/
                      InstanceCOM = CreateInstanceCOM((ObjectClass *)&v134.m_Data, (IID *)&stru_7E9A30, 0, 7u); /*0x742a94*/
                      if ( InstanceCOM < 0 && InstanceCOM != -2147467262 ) /*0x742aa2*/
                        WinAPI::Wrapper(InstanceCOM); /*0x742aa5*/
                      if ( !v134.m_Data ) /*0x742ab0*/
                        WinAPI::Wrapper(-2147467261); /*0x742ab7*/
                      (*(void (__stdcall **)(int, Class_7F5C70 *))(*(unsigned int *)v134.m_Data + 12))(v134.m_Data, this); /*0x742ac4*/
                      StreamClass_field_0C = 0; /*0x742acb*/
                      v134.StreamClass_field_0C = 0; /*0x742acf*/
                      if ( v134.m_Data ) /*0x742ad3*/
                      {
                        v92 = (int (__stdcall ***)(unsigned int, void *, int *))Stream::GetChecked((Stream *)&v134.m_Data); /*0x742ad9*/
                        v93 = (**v92)(v92, &unk_819088, &v135.ComPtr_field_0x10); /*0x742aed*/
                        if ( v93 >= 0 ) /*0x742af1*/
                        {
                          v94 = v135.ComPtr_field_0x10; /*0x742b00*/
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
                          WinAPI::Wrapper(v93); /*0x742b20*/
                      }
                      v95 = *(unsigned int *)v134.__pad_0; /*0x742b29*/
                      if ( *(unsigned int *)v134.__pad_0 != StreamClass_field_0C ) /*0x742b2f*/
                      {
                        v96 = *(unsigned int *)v134.__pad_0; /*0x742b31*/
                        v95 = StreamClass_field_0C; /*0x742b33*/
                        *(unsigned int *)v134.__pad_0 = StreamClass_field_0C; /*0x742b37*/
                        if ( StreamClass_field_0C ) /*0x742b3b*/
                        {
                          (*(void (__stdcall **)(int))(*(unsigned int *)StreamClass_field_0C + 4))(StreamClass_field_0C); /*0x742b40*/
                          v95 = *(unsigned int *)v134.__pad_0; /*0x742b43*/
                          StreamClass_field_0C = v134.StreamClass_field_0C; /*0x742b47*/
                        }
                        if ( v96 ) /*0x742b4d*/
                        {
                          (*(void (__stdcall **)(int))(*(unsigned int *)v96 + 8))(v96); /*0x742b52*/
                          v95 = *(unsigned int *)v134.__pad_0; /*0x742b55*/
                          StreamClass_field_0C = v134.StreamClass_field_0C; /*0x742b59*/
                        }
                      }
                      if ( StreamClass_field_0C ) /*0x742b5f*/
                      {
                        (*(void (__stdcall **)(int))(*(unsigned int *)StreamClass_field_0C + 8))(StreamClass_field_0C); /*0x742b64*/
                        v95 = *(unsigned int *)v134.__pad_0; /*0x742b67*/
                      }
                      if ( v95 ) /*0x742b6d*/
                      {
                        (*(void (__stdcall **)(int, unsigned int))(*(unsigned int *)v95 + 12))(v95, *(unsigned int *)v84); /*0x742b75*/
                        v97 = *(int **)v84; /*0x742b78*/
                        m_Data = v134.m_Data; /*0x742b7a*/
                        if ( *(unsigned int *)v84 != v134.m_Data ) /*0x742b80*/
                        {
                          *(unsigned int *)v84 = v134.m_Data; /*0x742b84*/
                          if ( m_Data ) /*0x742b86*/
                            (*(void (__stdcall **)(int))(*(unsigned int *)m_Data + 4))(m_Data); /*0x742b8b*/
                          if ( v97 ) /*0x742b90*/
                            (*(void (__stdcall **)(int *))(*v97 + 8))(v97); /*0x742b95*/
                        }
                        v135.ComPtr_field_0x10 = *((unsigned int *)this + 39); /*0x742ba4*/
                        v135.ComPtr_field_0x14 = *((unsigned int *)this + 40); /*0x742bab*/
                        v135.ComPtr_field_0x18 = *((unsigned int *)this + 41); /*0x742bb2*/
                        if ( !*(unsigned int *)v84 ) /*0x742bb6*/
                          WinAPI::Wrapper(-2147467261); /*0x742bc1*/
                        v99 = *(int **)v84; /*0x742bc6*/
                        v100 = **(unsigned int **)v84; /*0x742bd2*/
                        v101 = Coord::To_Cell((Coord *)&dword_87F7E8, &v135.ComPtr_field_0x10); /*0x742bd4*/
                        (*(void (__stdcall **)(int *, unsigned int))(v100 + 124))(v99, (unsigned __int8)v101->slopeIndex[0]); /*0x742be3*/
                        v95 = *(unsigned int *)v134.__pad_0; /*0x742be6*/
                      }
                      if ( v134.m_Data ) /*0x742bf0*/
                      {
                        (*(void (__stdcall **)(int))(*(unsigned int *)v134.m_Data + 8))(v134.m_Data); /*0x742bf5*/
                        v95 = *(unsigned int *)v134.__pad_0; /*0x742bf8*/
                      }
                      if ( v95 ) /*0x742bfe*/
                        (*(void (__stdcall **)(int))(*(unsigned int *)v95 + 8))(v95); /*0x742c03*/
                    }
                  }
                  if ( *(unsigned int *)v135.__pad_0 ) /*0x742c0c*/
                    (*(void (__stdcall **)(unsigned int))(**(unsigned int **)v135.__pad_0 + 8))(*(unsigned int *)v135.__pad_0); /*0x742c11*/
                }
              }
              ComPtr_field_0x0C = v135.ComPtr_field_0x0C; /*0x742c14*/
              if ( !v135.ComPtr_field_0x0C ) /*0x742c1a*/
              {
                v103 = (void *)IDA_LODWORD(a2); /*0x742d3f*/
                goto LABEL_318; /*0x742d3f*/
              }
              if ( *(unsigned char *)(*(unsigned int *)(v135.ComPtr_field_0x0C + 1312) + 5801) ) /*0x742c26*/
              {
                if ( (unsigned __int8)Team::AllMembersValid((Team *)v135.ComPtr_field_0x0C) /*0x742c46*/
                  && (Class_7F5C70 *)Team::GetMember((Team *)ComPtr_field_0x0C, 0) != this )
                {
                  v103 = (void *)IDA_LODWORD(a2); /*0x742c48*/
                  ((TechnoClass *)this)->SetFocus(IDA_SLODWORD(a2)); /*0x742c52*/
                  goto LABEL_309; /*0x742c57*/
                }
                if ( (*(int (__thiscall **)(Class_7F5C70 *, int, int))(*(unsigned int *)this + 632))(this, 2, ComPtr_field_0x0C) == 1 ) /*0x742c6a*/
                {
                  if ( (*(int (__thiscall **)(Class_7F5C70 *, int))(*(unsigned int *)this + 628))(this, 14) == 1 ) /*0x742c7c*/
                  {
                    FootClass::AssignDestination((FootClass *)this, IDA_SLODWORD(a2), IDA_SHIDWORD(a2)); /*0x742c8e*/
  LABEL_315:
                    *((unsigned int *)this + 376) = -1; /*0x742d10*/
                    return; /*0x742d24*/
                  }
                  (*(void (__thiscall **)(Class_7F5C70 *, int))(*(unsigned int *)this + 628))(this, 3); /*0x742c97*/
                  v103 = 0; /*0x742c9d*/
                  IDA_LODWORD(a2) = 0; /*0x742c9f*/
                  goto LABEL_309; /*0x742ca6*/
                }
              }
              v103 = (void *)IDA_LODWORD(a2); /*0x742ca8*/
  LABEL_309:
              if ( *(unsigned char *)(*(unsigned int *)(ComPtr_field_0x0C + 1312) + 5803) /*0x742cec*/
                && (!(unsigned __int8)Team::AllMembersValid((Team *)ComPtr_field_0x0C)
                 || (Class_7F5C70 *)Team::GetMember((Team *)ComPtr_field_0x0C, 0) == this)
                && (*(int (__thiscall **)(Class_7F5C70 *, int, int))(*(unsigned int *)this + 632))(this, 2, ComPtr_field_0x0C) == 1 )
              {
                if ( (*(int (__thiscall **)(Class_7F5C70 *, int))(*(unsigned int *)this + 628))(this, 14) == 1 ) /*0x742cfe*/
                {
                  FootClass::AssignDestination((FootClass *)this, (int)v103, IDA_SHIDWORD(a2)); /*0x742d0b*/
                  goto LABEL_315; /*0x742d0b*/
                }
                (*(void (__thiscall **)(Class_7F5C70 *, int))(*(unsigned int *)this + 628))(this, 3); /*0x742d2e*/
                v103 = 0; /*0x742d34*/
                IDA_LODWORD(a2) = 0; /*0x742d36*/
              }
  LABEL_318:
              v104 = (int *)Team::GetMember((Team *)this, 0); /*0x742d46*/
              if ( v104 /*0x742d84*/
                && (*(int (__thiscall **)(int *))(*v104 + 44))(v104) == 6
                && *(unsigned char *)(v104[328] + 5821)
                && *((unsigned int *)this + 43) != 7 )
              {
                if ( *((unsigned int *)this + 172) ) /*0x742d8a*/
                {
                  (*(void (__thiscall **)(Class_7F5C70 *, int))(*(unsigned int *)this + 628))(this, 3); /*0x742e41*/
                }
                else
                {
                  v105 = v104 + 39; /*0x742d98*/
                  v106 = *v105; /*0x742d9e*/
                  v107 = v105[1]; /*0x742da0*/
                  v139 = v105[2]; /*0x742da6*/
                  IDA_LOWORD(v135.ComPtr_field_0x10) = v106 / 256; /*0x742db6*/
                  IDA_HIWORD(v135.ComPtr_field_0x10) = v107 / 256; /*0x742dc9*/
                  IDA_LOWORD(v135.ComPtr_field_0x0C) = IDA_LOWORD(v135.ComPtr_field_0x10) + 4; /*0x742dda*/
                  IDA_HIWORD(v135.ComPtr_field_0x0C) = IDA_HIWORD(v135.ComPtr_field_0x10) + 1; /*0x742ddf*/
                  v135.ComPtr_field_0x10 = v135.ComPtr_field_0x0C; /*0x742df2*/
                  if ( v103 != CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (short *)&v135.ComPtr_field_0x10) ) /*0x742dfd*/
                  {
                    (*(void (__thiscall **)(Class_7F5C70 *))(*((unsigned int *)this + 363) + 12))(this + 1452); /*0x742e0b*/
                    (*(void (__thiscall **)(Class_7F5C70 *))(*((unsigned int *)this + 354) + 12))(this + 1416); /*0x742e1a*/
                    if ( v103 ) /*0x742e1f*/
                      ((int)this)->AddToProductionQueue((int)v103); /*0x742e28*/
                    return; /*0x742e37*/
                  }
                }
              }
              if ( !ComPtr_field_0x0C ) /*0x742e49*/
                goto LABEL_345; /*0x742e49*/
              v108 = *((unsigned int *)this + 433); /*0x742e4f*/
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
              if ( (*(int (__thiscall **)(Class_7F5C70 *))(*(unsigned int *)this + 44))(this) != 1 ) /*0x742e9b*/
                goto LABEL_345; /*0x742e9b*/
              v112 = *((unsigned int *)this + 433); /*0x742ea1*/
              if ( !*(unsigned char *)(v112 + 3598) && !*(unsigned char *)(v112 + 3599) ) /*0x742eb1*/
                goto LABEL_345; /*0x742eb1*/
              if ( (*(int (__thiscall **)(Class_7F5C70 *))(*(unsigned int *)this + 388))(this) == 16 ) /*0x742ecd*/
                goto LABEL_345; /*0x742ecd*/
              if ( Team::GetMember((Team *)this, 0) == ComPtr_field_0x0C /*0x742f28*/
                || (unsigned __int8)Team::AllMembersValid((Team *)ComPtr_field_0x0C)
                || (*(int (__thiscall **)(Class_7F5C70 *, int, int))(*(unsigned int *)this + 632))(this, 2, ComPtr_field_0x0C) != 1
                || (*(int (__thiscall **)(Class_7F5C70 *))(*(unsigned int *)this + 388))(this) == 7
                || (*(int (__thiscall **)(Class_7F5C70 *))(*(unsigned int *)this + 388))(this) == 10 )
              {
                if ( !IDA_LODWORD(a2) /*0x743018*/
                  || (*(int (__thiscall **)(unsigned int))(*(unsigned int *)IDA_LODWORD(a2) + 44))(IDA_LODWORD(a2)) != 6
                  || Team::GetMember((Team *)this, 0) == IDA_LODWORD(a2) )
                {
                  goto LABEL_345; /*0x743018*/
                }
                v116 = (int *)(ComPtr_field_0x0C + 156); /*0x74301e*/
                v117 = ComPtr_field_0x0C + 156; /*0x743026*/
                v135.ComPtr_field_0x08 = 0; /*0x743028*/
                v118 = *(unsigned int *)(ComPtr_field_0x0C + 156); /*0x743034*/
                v119 = *(unsigned int *)(ComPtr_field_0x0C + 160); /*0x74303d*/
                v139 = *(unsigned int *)(v117 + 8); /*0x743045*/
                IDA_LOWORD(v135.ComPtr_field_0x0C) = v118 / 256; /*0x743055*/
                v120 = v119; /*0x74305a*/
                v121 = v116[1]; /*0x743063*/
                IDA_HIWORD(v135.ComPtr_field_0x0C) = v120 / 256; /*0x74306b*/
                v135.ComPtr_field_0x10 = v135.ComPtr_field_0x0C; /*0x743074*/
                v122 = *v116; /*0x743084*/
                v139 = v116[2]; /*0x743086*/
                IDA_LOWORD(v135.ComPtr_field_0x0C) = v122 / 256; /*0x74308d*/
                IDA_HIWORD(v135.ComPtr_field_0x0C) = v121 / 256; /*0x7430a7*/
                v123 = *((unsigned int *)this + 433); /*0x7430b0*/
                v135.ComPtr_field_0x04 = v135.ComPtr_field_0x0C; /*0x7430bb*/
                v127 = *(unsigned int *)(v123 + 1460); /*0x7430c9*/
                v124 = MapClass::GetTileIndex((MapClass *)&dword_87F7E8, (short *)&v135.ComPtr_field_0x10, v127, 0); /*0x7430d7*/
                v135.ComPtr_field_0x0C = *LayerClass::Pathfinding_Find( /*0x7430fc*/
                                            (Type *)&dword_87F7E8,
                                            v125,
                                            &v135,
                                            (short *)&v135.ComPtr_field_0x04,
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
                                            (short *)&v135.ComPtr_field_0x08,
                                            0,
                                            0);
                if ( v135.ComPtr_field_0x0C != g_UnitSelectionState ) /*0x743100*/
                {
                  IDA_LODWORD(a2) = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (short *)&v135.ComPtr_field_0x0C); /*0x743123*/
                  goto LABEL_345; /*0x74312a*/
                }
              }
              else
              {
                (*(void (__thiscall **)(Class_7F5C70 *, int, unsigned int))(*(unsigned int *)this + 488))(this, 7, 0); /*0x742f37*/
              }
              IDA_LODWORD(a2) = 0; /*0x742f3d*/
  LABEL_345:
              if ( !*((unsigned int *)this + 413) ) /*0x742f48*/
                WinAPI::Wrapper(-2147467261); /*0x742f57*/
              if ( !(*(unsigned __int8 (__stdcall **)(unsigned int))(**((unsigned int **)this + 413) + 96))(*((unsigned int *)this + 413)) /*0x742f76*/
                && !HouseClass::IonSensitivesShouldBeOffline() )
              {
                v113 = (*(int (__thiscall **)(Class_7F5C70 *))(*(unsigned int *)this + 444))(this); /*0x742f88*/
                if ( (*(unsigned int *)(v113 + 320) & 0x100) == 0 ) /*0x742f97*/
                {
                  v114 = *(unsigned int *)(v113 + 228); /*0x742f9d*/
                  if ( v114 ) /*0x742fa5*/
                  {
                    while ( 1 ) /*0x742fad*/
                    {
                      if ( (Class_7F5C70 *)v114 != this && (*(int (__thiscall **)(int))(*(unsigned int *)v114 + 44))(v114) == 6 ) /*0x742fb9*/
                      {
                        v115 = *(unsigned int *)(v114 + 1312); /*0x742fbb*/
                        if ( *(unsigned char *)(v115 + 5801) || *(unsigned char *)(v115 + 5803) ) /*0x742fcf*/
                          break; /*0x742fcf*/
                      }
                      v114 = *(unsigned int *)(v114 + 48); /*0x742fdd*/
                      if ( !v114 ) /*0x742fe2*/
                        goto LABEL_365; /*0x742fe2*/
                    }
                    if ( !*((unsigned int *)this + 413) ) /*0x74312f*/
                      WinAPI::Wrapper(-2147467261); /*0x74313e*/
                    (*(void (__stdcall **)(unsigned int))(**((unsigned int **)this + 413) + 88))(*((unsigned int *)this + 413)); /*0x74314c*/
                  }
                }
              }
  LABEL_365:
              FootClass::AssignDestination((FootClass *)this, IDA_SLODWORD(a2), IDA_SHIDWORD(a2)); /*0x74314f*/
              return; /*0x743170*/
            }
  LABEL_182:
            if ( memcmp(v138, &stru_7E9A30, 0x10u) ) /*0x7425f6*/
            {
              v55 = *(unsigned int *)v47; /*0x7425fe*/
              *(unsigned int *)v134.__pad_0 = 0; /*0x742600*/
              if ( v55 ) /*0x742606*/
              {
                v56 = StreamClass::Set(&v134, (unsigned int *)this + 413); /*0x74260d*/
                if ( v56 < 0 && v56 != -2147467262 ) /*0x74261b*/
                  WinAPI::Wrapper(v56); /*0x74261e*/
                if ( *(unsigned int *)v134.__pad_0 /*0x74262e*/
                  && (*(unsigned __int8 (__stdcall **)(unsigned int))(**(unsigned int **)v134.__pad_0 + 28))(*(unsigned int *)v134.__pad_0) )
                {
                  if ( !*(unsigned int *)v134.__pad_0 ) /*0x74263b*/
                    WinAPI::Wrapper(-2147467261); /*0x742642*/
                  if ( (*(unsigned __int8 (__stdcall **)(unsigned int))(**(unsigned int **)v134.__pad_0 + 20))(*(unsigned int *)v134.__pad_0) ) /*0x74264e*/
                  {
                    if ( *(unsigned int *)v47 ) /*0x742655*/
                      (*(void (__stdcall **)(unsigned int))(**(unsigned int * *)&v47->vtable3)(*(unsigned int *)v47); /*0x74265e*/
                    v57 = *(unsigned int *)v134.__pad_0; /*0x742661*/
                    *(unsigned int *)v47 = 0; /*0x742665*/
                    if ( !v57 ) /*0x74266d*/
                      WinAPI::Wrapper(-2147467261); /*0x742674*/
                    (*(void (__stdcall **)(int, Class_7F5C70 *))(*(unsigned int *)v57 + 16))(v57, this + 1652); /*0x742681*/
                  }
                }
              }
              v134.StreamClass_field_0C = 0; /*0x742691*/
              v58 = CreateInstanceCOM((ObjectClass *)&v134.StreamClass_field_0C, (IID *)&stru_7E9A30, 0, 7u); /*0x742699*/
              if ( v58 < 0 && v58 != -2147467262 ) /*0x7426a7*/
                WinAPI::Wrapper(v58); /*0x7426aa*/
              if ( !v134.StreamClass_field_0C ) /*0x7426b5*/
                WinAPI::Wrapper(-2147467261); /*0x7426bc*/
              (*(void (__stdcall **)(int, Class_7F5C70 *))(*(unsigned int *)v134.StreamClass_field_0C + 12))( /*0x7426c9*/
                v134.StreamClass_field_0C,
                this);
              v59 = 0; /*0x7426d0*/
              v134.m_Data = 0; /*0x7426d4*/
              if ( v134.StreamClass_field_0C ) /*0x7426d8*/
              {
                v60 = (int (__stdcall ***)(unsigned int, void *, int *))Stream::GetChecked((Stream *)&v134.StreamClass_field_0C); /*0x7426de*/
                v61 = (**v60)(v60, &unk_819088, &v135.ComPtr_field_0x10); /*0x7426f2*/
                if ( v61 >= 0 ) /*0x7426f6*/
                {
                  v62 = v135.ComPtr_field_0x10; /*0x742705*/
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
                  WinAPI::Wrapper(v61); /*0x742725*/
              }
              v63 = *(unsigned int *)v134.__pad_0; /*0x74272e*/
              if ( *(unsigned int *)v134.__pad_0 != v59 ) /*0x742734*/
              {
                v64 = *(unsigned int *)v134.__pad_0; /*0x742736*/
                *(unsigned int *)v134.__pad_0 = v59; /*0x74273c*/
                CellClass::SetField2C((CellClass *)&v134); /*0x742740*/
                if ( v64 ) /*0x742747*/
                  (*(void (__stdcall **)(int))(*(unsigned int *)v64 + 8))(v64); /*0x74274c*/
                v63 = *(unsigned int *)v134.__pad_0; /*0x74274f*/
                v59 = v134.m_Data; /*0x742753*/
              }
              if ( v59 ) /*0x742759*/
              {
                (*(void (__stdcall **)(int))(*(unsigned int *)v59 + 8))(v59); /*0x74275e*/
                v63 = *(unsigned int *)v134.__pad_0; /*0x742761*/
              }
              if ( v63 ) /*0x742767*/
              {
                (*(void (__stdcall **)(int, unsigned int))(*(unsigned int *)v63 + 12))(v63, *(unsigned int *)v47); /*0x74276f*/
                v65 = *(unsigned int *)v47; /*0x742772*/
                v66 = v134.StreamClass_field_0C; /*0x742774*/
                if ( *(unsigned int *)v47 != v134.StreamClass_field_0C ) /*0x74277a*/
                {
                  *(unsigned int *)v47 = v134.StreamClass_field_0C; /*0x74277e*/
                  if ( v66 ) /*0x742780*/
                    (*(void (__stdcall **)(int))(*(unsigned int *)v66 + 4))(v66); /*0x742785*/
                  if ( v65 ) /*0x74278a*/
                    (*(void (__stdcall **)(int))(*(unsigned int *)v65 + 8))(v65); /*0x74278f*/
                }
                v63 = *(unsigned int *)v134.__pad_0; /*0x742792*/
              }
              if ( v134.StreamClass_field_0C ) /*0x74279c*/
              {
                (*(void (__stdcall **)(int))(*(unsigned int *)v134.StreamClass_field_0C + 8))(v134.StreamClass_field_0C); /*0x7427a1*/
                v63 = *(unsigned int *)v134.__pad_0; /*0x7427a4*/
              }
              if ( v63 ) /*0x7427aa*/
                (*(void (__stdcall **)(int))(*(unsigned int *)v63 + 8))(v63); /*0x7427af*/
            }
            goto LABEL_226; /*0x7427af*/
          }
          v52 = *(unsigned int *)v47; /*0x742500*/
          *(unsigned int *)v134.__pad_0 = 0; /*0x742502*/
          if ( v52 ) /*0x742508*/
          {
            v53 = StreamClass::Set(&v134, (unsigned int *)this + 413); /*0x742513*/
            if ( v53 < 0 && v53 != -2147467262 ) /*0x742521*/
              WinAPI::Wrapper(v53); /*0x742524*/
            if ( *(unsigned int *)v134.__pad_0 /*0x742534*/
              && (*(unsigned __int8 (__stdcall **)(unsigned int))(**(unsigned int **)v134.__pad_0 + 28))(*(unsigned int *)v134.__pad_0) )
            {
              if ( !*(unsigned int *)v134.__pad_0 ) /*0x742541*/
                WinAPI::Wrapper(-2147467261); /*0x742548*/
              if ( (*(unsigned __int8 (__stdcall **)(unsigned int))(**(unsigned int **)v134.__pad_0 + 20))(*(unsigned int *)v134.__pad_0) ) /*0x742554*/
              {
                if ( *(unsigned int *)v47 ) /*0x74255b*/
                  (*(void (__stdcall **)(unsigned int))(**(unsigned int * *)&v47->vtable3)(*(unsigned int *)v47); /*0x742564*/
                v54 = *(unsigned int *)v134.__pad_0; /*0x742567*/
                *(unsigned int *)v47 = 0; /*0x74256b*/
                if ( !v54 ) /*0x742573*/
                  WinAPI::Wrapper(-2147467261); /*0x74257a*/
                (*(void (__stdcall **)(int, Class_7F5C70 *))(*(unsigned int *)v54 + 16))(v54, this + 1652); /*0x742587*/
                goto LABEL_179; /*0x74258a*/
              }
            }
            if ( *(unsigned int *)v47 ) /*0x74258c*/
            {
              (*(void (__stdcall **)(unsigned int))(**(unsigned int * *)&v47->u32_48)(*(unsigned int *)v47); /*0x7425a0*/
              (*(void (__thiscall **)(Class_7F5C70 *, int))(*(unsigned int *)this + 496))(this, -1); /*0x7425aa*/
              (*(void (__thiscall **)(Class_7F5C70 *, int, unsigned int))(*(unsigned int *)this + 488))(this, 7, 0); /*0x7425b9*/
              *((unsigned char *)this + 1708) = 1; /*0x7425bf*/
              *((unsigned char *)this + 504) = 1; /*0x7425c6*/
  LABEL_179:
              if ( *(unsigned int *)v134.__pad_0 ) /*0x7425d3*/
                (*(void (__stdcall **)(unsigned int))(**(unsigned int **)v134.__pad_0 + 8))(*(unsigned int *)v134.__pad_0); /*0x7425d8*/
              goto LABEL_181; /*0x7425d8*/
            }
          }
          WinAPI::Wrapper(-2147467261); /*0x742596*/
        }
  LABEL_128:
        if ( !IDA_BYTE4(a2) ) /*0x7422e2*/
          goto LABEL_143; /*0x7422e2*/
        (*(void (__thiscall **)(Class_7F5C70 *))(*((unsigned int *)this + 354) + 12))(this + 1416); /*0x7422f4*/
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
call    WinAPI__Wrapper
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
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_741F02:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+583↑j
; UnitClass__AssignDestination_SyncLog+58A↑j
mov     eax, [esp+90h+var_60]
test    eax, eax
jnz     short loc_741F18

loc_741F0A:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+575↑j
push    80004003h
call    WinAPI__Wrapper
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
call    WinAPI__Wrapper
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
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_742444:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+AC5↑j
; UnitClass__AssignDestination_SyncLog+ACC↑j
mov     eax, [esp+90h+var_64]
test    eax, eax
jnz     short loc_74245A

loc_74244C:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+AB7↑j
push    80004003h
call    WinAPI__Wrapper
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
call    WinAPI__Wrapper
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
call    WinAPI__Wrapper
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
call    WinAPI__Wrapper
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
call    WinAPI__Wrapper
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
call    WinAPI__Wrapper
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
call    WinAPI__Wrapper
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
call    WinAPI__Wrapper
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
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_7426AF:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+D30↑j
; UnitClass__AssignDestination_SyncLog+D37↑j
mov     eax, [esp+90h+ppv]
test    eax, eax
jnz     short loc_7426C5
push    80004003h
call    WinAPI__Wrapper
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
call    WinAPI__Wrapper
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
call    WinAPI__Wrapper
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
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------
mov     eax, [esp+90h+var_64]

loc_742859:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+ED5↑j
; UnitClass__AssignDestination_SyncLog+EDD↑j
test    eax, eax
jnz     short loc_74286B

loc_74285D:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+E95↑j
push    80004003h
call    WinAPI__Wrapper
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
call    WinAPI__Wrapper
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
call    WinAPI__Wrapper
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
call    WinAPI__Wrapper
; ---------------------------------------------------------------------------

loc_742AAA:                             ; CODE XREF: UnitClass__AssignDestination_SyncLog+112B↑j
; UnitClass__AssignDestination_SyncLog+1132↑j
mov     eax, dword ptr [esp+90h+var_74]
test    eax, eax
jnz     short loc_742AC0
push    80004003h
call    WinAPI__Wrapper
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
call    WinAPI__Wrapper
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
call    WinAPI__Wrapper
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
call    WinAPI__Wrapper
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
call    WinAPI__Wrapper
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

    if ( (unsigned __int8)House::IsCurrentPlayer(*((House **)this + 135))
      || (v3 = *((unsigned int *)this + 173)) == 0
      || *((unsigned int *)this + 361)
      || (v4 = (*(unsigned char *)(v3 + 20) & 1) != 0 ? (TechnoClass *)v3 : 0, !*(unsigned char *)(*((unsigned int *)this + 433) + 3368))
      && !(unsigned __int8)TechnoTypeClass::HasVoiceResponse((int *)this, 17)
      || ObjectClass::DistanceTo((ObjectClass *)this, *((unsigned int *)this + 173)) >= dword_8871E0->PathDelay[0]
      || !v4
      || !ObjectClass::IsCrushable(v4, this)
      || !*(unsigned char *)(*((unsigned int *)this + 433) + 3373) && (unsigned __int8)House::IsCurrentPlayer(*((House **)this + 135)) )
    {
      if ( *(unsigned char *)(*((unsigned int *)this + 433) + 3434) ) /*0x74159f*/
      {
        v5 = *(unsigned int *)this; /*0x7415af*/
        v6 = (*(int (__thiscall **)(Class_7F5C70 *, unsigned int))(*(unsigned int *)this + 740))(this, *((unsigned int *)this + 173)); /*0x7415b4*/
        v7 = *(unsigned int *)(*(int (__thiscall **)(Class_7F5C70 *, int))(v5 + 1016))(this, v6); /*0x7415c3*/
        if ( v7 ) /*0x7415c7*/
        {
          v8 = *(unsigned int *)(v7 + 160); /*0x7415c9*/
          if ( v8 ) /*0x7415d1*/
          {
            if ( *(unsigned char *)(v8 + 704) ) /*0x7415d3*/
            {
              if ( !a2 ) /*0x7415e3*/
                (*(void (__thiscall **)(Class_7F5C70 *, unsigned int, int))(*(unsigned int *)this + 1152))( /*0x7415f2*/
                  this,
                  *((unsigned int *)this + 173),
                  1);
              return (void *)*((unsigned int *)this + 173); /*0x741600*/
            }
          }
        }
      }
      if ( !*(unsigned char *)(*((unsigned int *)this + 433) + 3369) ) /*0x741609*/
        return FootClass::CalculateApproachPath((FootClass *)this, 0); /*0x741609*/
      v10 = *((unsigned int *)this + 173); /*0x741613*/
      if ( !v10 || *(unsigned char *)(*((unsigned int *)this + 135) + 492) && *((unsigned char *)this + 1292) ) /*0x74162d*/
        return FootClass::CalculateApproachPath((FootClass *)this, 0); /*0x74162d*/
      if ( (*(unsigned char *)(v10 + 20) & 2) == 0
        || !ObjectClass::IsCrushable((*(unsigned char *)(v10 + 20) & 2) != 0 ? (TechnoClass *)v10 : 0, this) )
      {
        return FootClass::CalculateApproachPath((FootClass *)this, 0); /*0x741689*/
      }
    }
    if ( !a2 ) /*0x741665*/
      (*(void (__thiscall **)(Class_7F5C70 *, unsigned int, int))(*(unsigned int *)this + 1152))(this, *((unsigned int *)this + 173), 1); /*0x741674*/
    return (void *)*((unsigned int *)this + 173); /*0x7415fe*/
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
    int v14; // [esp+8h] [ebp-8h] BYREF
    int v15; // [esp+Ch] [ebp-4h] BYREF

    target = ((unsigned int *)this)[0]; /*0x736997*/
    if ( target && !((unsigned int *)this)[0] ) /*0x7369a5*/
    {
      v3 = *ObjectClass::CalcTargetFacing((ObjectClass *)this, &v15, (int)target); /*0x7369c0*/
      Type = this->Type; /*0x7369c2*/
      v14 = v3; /*0x7369c8*/
      if ( ((unsigned int *)Type)[0] ) /*0x7369cc*/
      {
        v5 = (*((int (__thiscall **)(UnitClass *))this->vtable1 + 253))(this); /*0x7369e0*/
        if ( (unsigned __int8)IsNonNullPtr((unsigned int *)v5) && !*(unsigned char *)(*(unsigned int *)&v5->MovementZone ) /*0x7369f4*/
        {
          if ( *(unsigned char *)(v5 + 24) ) /*0x736a02*/
          {
            Value = ProgressTimer::GetValue((ProgressTimer *)((unsigned int *)this)[0], &v15); /*0x736a19*/
            FacingClass::Update((char *)((unsigned int *)this)[0], Value); /*0x736a20*/
          }
          else
          {
            FacingClass::Update((char *)((unsigned int *)this)[0], &v14); /*0x736a2d*/
          }
        }
      }
      else if ( ((unsigned int *)Type)[0] == 1 && !((unsigned int *)this)[0] ) /*0x736a38*/
      {
        if ( !*(unsigned int *)&this->Locomotor ) /*0x736a42*/
          WinAPI::Wrapper(-2147467261); /*0x736a51*/
        if ( !(*(unsigned __int8 (__stdcall **)(int))(*(unsigned int *)((unsigned int *)this)[0] + 16))(((unsigned int *)this)[0]) /*0x736a80*/
          && *(unsigned short *)ProgressTimer::GetValue((ProgressTimer *)((unsigned int *)this)[0], &v15) == (unsigned short)v14 )
        {
          FacingClass::Update((char *)((unsigned int *)this)[0], &v14); /*0x736a89*/
        }
      }
    }
    v6 = this->Type; /*0x736a8e*/
    if ( IDA_BYTE1(((unsigned int *)v6)[0]) ) /*0x736a95*/
    {
      IDA_LOWORD(v14) = ((unsigned __int8)((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)((unsigned int *)this)[0], &v15) >> 7) + 1) >> 1) /*0x736acb*/
                   + 8) << 8;
      FacingClass::Update((char *)((unsigned int *)this)[0], &v14); /*0x736ad0*/
      goto LABEL_38; /*0x736ad0*/
    }
    ((unsigned int *)this)[0] = 0; /*0x736ad5*/
    if ( ((unsigned int *)v6)[0] ) /*0x736adc*/
    {
      if ( (unsigned __int8)TimerClass::Active((int)((unsigned int *)this)[0]) ) /*0x736af2*/
      {
        if ( !IDA_BYTE1(this->((unsigned int *)Type)[0]) ) /*0x736b01*/
          ((unsigned int *)this)[0] = TimerClass::Active((int)((unsigned int *)this)[0]); /*0x736b16*/
      }
      else if ( !((unsigned int *)this)[0] ) /*0x736b21*/
      {
        v7 = *(unsigned int * *)((char *)&stru_A8EB00 + 644) - ((unsigned int *)this)[0] >= *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 3588) /*0x736b52*/
                                                       + 5;
        if ( ((unsigned int *)this)[0] ) /*0x736b54*/
          v7 = 0; /*0x736b5e*/
        if ( (!this->Type->IsSimpleDeployer || !this->Deployed) && v7 ) /*0x736b7c*/
        {
          v8 = (*((int (__thiscall **)(UnitClass *))this->vtable1 + 253))(this); /*0x736b88*/
          v9 = (unsigned __int8)IsNonNullPtr((unsigned int *)v8) && *(unsigned char *)(v8 + 24); /*0x736b9d*/
          if ( !((unsigned int *)this)[0] || v9 ) /*0x736baf*/
          {
            v10 = ProgressTimer::GetValue((ProgressTimer *)((unsigned int *)this)[0], &v15); /*0x736bd5*/
          }
          else
          {
            if ( ((unsigned int *)this)[0] ) /*0x736bb1*/
              goto LABEL_38; /*0x736bb9*/
            v10 = ObjectClass::CalcTargetFacing((ObjectClass *)this, &v15, (int)((unsigned int *)this)[0]); /*0x736bc3*/
          }
          FacingClass::Update((char *)((unsigned int *)this)[0], v10); /*0x736bdd*/
        }
      }
    }
  LABEL_38:
    IDA_LOBYTE(v11) = this->((unsigned int *)Type)[0]; /*0x736be2*/
    if ( (unsigned char)v11 ) /*0x736bf1*/
    {
      v11 = (unsigned __int8)TimerClass::Active((int)((unsigned int *)this)[0]); /*0x736bfe*/
      ((unsigned int *)this)[0] = v11; /*0x736c03*/
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
call    WinAPI__Wrapper
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
    short v28; // ax
    void *v29; // edi
    int v30; // ebx
    int LandHeight; // eax
    int v32; // kr04_4
    unsigned int **v33; // eax
    unsigned short v34; // ax
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
    int v45; // [esp+78h] [ebp-14h]
    unsigned int v46[4]; // [esp+7Ch] [ebp-10h] BYREF

    result = (*(int (__thiscall **)(Class_7F5C70 *))(*(unsigned int *)this + 652))(this); /*0x743a5c*/
    if ( !(unsigned char)result ) /*0x743a64*/
      return result; /*0x743a64*/
    v8 = *((unsigned int *)this + 413); /*0x743a6a*/
    v9 = this + 1652; /*0x743a70*/
    *(unsigned int *)v37.__pad_0 = 0; /*0x743a78*/
    if ( !v8 ) /*0x743a80*/
      goto LABEL_7; /*0x743a80*/
    v10 = StreamClass::Set2(&v37, (unsigned int *)this + 413); /*0x743a87*/
    if ( v10 < 0 && v10 != -2147467262 ) /*0x743a95*/
      WinAPI::Wrapper(v10); /*0x743a98*/
    if ( !*(unsigned int *)v37.__pad_0 ) /*0x743aa3*/
  LABEL_7:
      WinAPI::Wrapper(-2147467261); /*0x743aaa*/
    (*(void (__stdcall **)(unsigned int, unsigned int *))(**(unsigned int **)v37.__pad_0 + 12))(*(unsigned int *)v37.__pad_0, v46); /*0x743abb*/
    if ( !memcmp(v46, &g_CLSID_HoverLocomotion, 0x10u) ) /*0x743ad0*/
      goto LABEL_66; /*0x743ad0*/
    if ( !MissionClass_GetMissionControl((void *)this)[9] && !IDA_BYTE4(a2) ) /*0x743aea*/
    {
      result = *(unsigned int *)v37.__pad_0; /*0x743aec*/
      if ( *(unsigned int *)v37.__pad_0 ) /*0x743af2*/
        return (*(int (__stdcall **)(unsigned int))(**(unsigned int **)v37.__pad_0 + 8))(*(unsigned int *)v37.__pad_0); /*0x743af2*/
      return result; /*0x743af2*/
    }
    if ( (unsigned __int8)TimerClass::Active((int)(this + 904)) ) /*0x743b10*/
      goto LABEL_66; /*0x743b17*/
    if ( *((unsigned int *)this + 361) && !(unsigned char)a3 ) /*0x743b2d*/
    {
      result = *(unsigned int *)v37.__pad_0; /*0x743b2f*/
      if ( *(unsigned int *)v37.__pad_0 ) /*0x743b35*/
        return (*(int (__stdcall **)(unsigned int))(**(unsigned int **)v37.__pad_0 + 8))(*(unsigned int *)v37.__pad_0); /*0x743b35*/
      return result; /*0x743b35*/
    }
    if ( *((unsigned char *)this + 1760) || *((unsigned char *)this + 1761) || *((unsigned char *)this + 1762) ) /*0x743b67*/
    {
      result = *(unsigned int *)v37.__pad_0; /*0x74408e*/
      if ( *(unsigned int *)v37.__pad_0 ) /*0x744094*/
        return (*(int (__stdcall **)(unsigned int))(**(unsigned int **)v37.__pad_0 + 8))(*(unsigned int *)v37.__pad_0); /*0x744094*/
      return result; /*0x744094*/
    }
    if ( !*(unsigned int *)v9 ) /*0x743b75*/
      WinAPI::Wrapper(-2147467261); /*0x743b7f*/
    if ( !(*(unsigned __int8 (__stdcall **)(unsigned int))(**(unsigned int * *)&v9->u32_60)(*(unsigned int *)v9) ) /*0x743b89*/
    {
      result = *(unsigned int *)v37.__pad_0; /*0x743b90*/
      if ( *(unsigned int *)v37.__pad_0 ) /*0x743b96*/
        return (*(int (__stdcall **)(unsigned int))(**(unsigned int **)v37.__pad_0 + 8))(*(unsigned int *)v37.__pad_0); /*0x743b96*/
      return result; /*0x743b96*/
    }
    _ESI = IDA_LODWORD(a2); /*0x743bac*/
    if ( *(unsigned int *)IDA_LODWORD(a2) == dword_B1CFE8 /*0x743bda*/
      && *(unsigned int *)(IDA_LODWORD(a2) + 4) == dword_B1CFEC
      && *(unsigned int *)(IDA_LODWORD(a2) + 8) == dword_B1CFF0 )
    {
      IDA_HIDWORD(a2) = 0; /*0x743be6*/
      v12 = (unsigned int *)(*(int (__thiscall **)(Class_7F5C70 *, unsigned char *, unsigned int))(*(unsigned int *)this + 76))(this, v44, 0); /*0x743bff*/
      IDA_LOWORD(a3) = *v12 / 256; /*0x743c16*/
      v13 = *((unsigned char *)this + 140); /*0x743c25*/
      IDA_HIWORD(a3) = v12[1] / 256; /*0x743c30*/
      v38 = a3; /*0x743c3d*/
      IDA_LODWORD(a2) = *LayerClass::Pathfinding_Find( /*0x743c79*/
                       (Type *)&dword_87F7E8,
                       (int)&v37.StreamClass_field_0C,
                       &v37.StreamClass_field_0C,
                       (short *)&v38,
                       *(unsigned int *)(*((unsigned int *)this + 433) + 1660),
                       -1,
                       0,
                       v13,
                       1,
                       1,
                       0,
                       1,
                       0,
                       1,
                       (short *)&a2 + 2,
                       0,
                       0);
      if ( IDA_LODWORD(a2) != g_UnitSelectionState ) /*0x743c7d*/
      {
        v14 = *(unsigned int *)this; /*0x743c91*/
        v15 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (short *)&a2); /*0x743c9b*/
        goto LABEL_65; /*0x743c9b*/
      }
      goto LABEL_66; /*0x743c7d*/
    }
    if ( MissionClass_GetMissionControl((void *)this)[7] ) /*0x743ca7*/
    {
      result = *(unsigned int *)v37.__pad_0; /*0x743cae*/
      if ( *(unsigned int *)v37.__pad_0 ) /*0x743cb4*/
        return (*(int (__stdcall **)(unsigned int))(**(unsigned int **)v37.__pad_0 + 8))(*(unsigned int *)v37.__pad_0); /*0x743cb4*/
      return result; /*0x743cb4*/
    }
    if ( (*(int (__thiscall **)(Class_7F5C70 *))(*(unsigned int *)this + 44))(this) == 1 && *((unsigned char *)this + 1745) /*0x743d33*/
      || *((unsigned int *)this + 361) && (!(unsigned char)a3 || *((unsigned char *)this + 1711))
      || *((unsigned int *)this + 173) && !IDA_BYTE4(a2) && Random_Range((void *)&dword_A8B230[14].NeedsSaveOrLink, 1, 4) != 1 )
    {
      goto LABEL_66; /*0x743d33*/
    }
    a3 = *(unsigned int **)_ESI; /*0x743d43*/
    if ( a3 == (unsigned int *)dword_B1CFE8 /*0x743d60*/
      && *(unsigned int *)(_ESI + 4) == dword_B1CFEC
      && *(unsigned int *)(_ESI + 8) == dword_B1CFF0 )
    {
      v18 = ((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)(this + 904), &v39) >> 12) + 1) >> 1) & 7; /*0x743dfc*/
      v17 = Random_Range((void *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2) + v18 - 1; /*0x743e04*/
    }
    else
    {
      v41 = *((unsigned int *)this + 39); /*0x743d70*/
      __asm { fild [esp+68h+var_28] } /*0x743d74*/
      v42 = *((unsigned int *)this + 40); /*0x743d7b*/
      __asm { fisub [esp+68h+arg_8] } /*0x743d7f*/
      v43 = *((unsigned int *)this + 41); /*0x743d86*/
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
      IDA_LOWORD(a3) = Math::RoundToInt(v5); /*0x743dba*/
      v16 = Random_Range((void *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x743dc5*/
      v17 = v16 + ((((unsigned int)a3 >> 12) + 1) >> 1) - 1; /*0x743dd4*/
    }
    v19 = *(unsigned int *)this; /*0x743e08*/
    v20 = v17 & 7; /*0x743e0f*/
    v37.m_Size = v20; /*0x743e16*/
    a2 = 0.0; /*0x743e1a*/
    v21 = (unsigned int *)(*(int (__thiscall **)(Class_7F5C70 *, unsigned char *, unsigned int))(v19 + 76))(this, v44, 0); /*0x743e2e*/
    IDA_LOWORD(a3) = *v21 / 256; /*0x743e41*/
    IDA_HIWORD(a3) = v21[1] / 256; /*0x743e59*/
    v37.m_Data = (int)a3; /*0x743e62*/
    v22 = (char *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (short *)&v37.m_Data); /*0x743e71*/
    v23 = v22[283] + (*(unsigned __int8 (__thiscall **)(Class_7F5C70 *, unsigned int))(*(unsigned int *)this + 188))(this, 0) != 0
        ? 4
        : 0;
    (*(void (__thiscall **)(Class_7F5C70 *, unsigned char *, unsigned int))(*(unsigned int *)this + 76))(this, v44, 0); /*0x743ea1*/
    v24 = v23 * dword_B1D0B8; /*0x743ea9*/
    v25 = 0; /*0x743eac*/
    v45 = v24; /*0x743eae*/
    v38 = 0; /*0x743eb2*/
    while ( 1 ) /*0x743ec3*/
    {
      v26 = ((unsigned char)v20 + v25) & 7; /*0x743ec3*/
      v27 = v26 & 7; /*0x743ec8*/
      v28 = IDA_HIWORD(dword_89F688[v27]); /*0x743eda*/
      IDA_LOWORD(v37.StreamClass_field_0C) = IDA_LOWORD(dword_89F688[v27]) + IDA_LOWORD(v37.m_Data); /*0x743ee2*/
      IDA_HIWORD(v37.StreamClass_field_0C) = IDA_HIWORD(v37.m_Data) + v28; /*0x743ef1*/
      a3 = (unsigned int *)v37.StreamClass_field_0C; /*0x743efa*/
      v29 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (short *)&a3); /*0x743f08*/
      if ( !(unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&dword_87F7E8, (short *)&a3, 1) ) /*0x743f16*/
        goto LABEL_56; /*0x743f16*/
      v30 = *(unsigned int *)this; /*0x743f23*/
      LandHeight = ObjectClass::GetLandHeight((ObjectClass *)this); /*0x743f2c*/
      if ( (*(int (__thiscall **)(Class_7F5C70 *, void *, int, int, unsigned int, int))(v30 + 428))( /*0x743f36*/
             this,
             v29,
             v26,
             LandHeight,
             0,
             1) )
      {
        goto LABEL_56; /*0x743f3e*/
      }
      v32 = g_UnitSelectionState; /*0x743f53*/
      if ( IDA_LODWORD(a2) == g_UnitSelectionState ) /*0x743f5a*/
        IDA_LODWORD(a2) = a3; /*0x743f63*/
      if ( !g_UnitSelectionState ) /*0x743f6a*/
        break; /*0x743f6a*/
  LABEL_57:
      v25 = (unsigned char)v38 + 1; /*0x743ff9*/
      v38 = (unsigned int *)((char *)v38 + 1); /*0x744001*/
      if ( (int)v38 >= 8 ) /*0x744005*/
        goto LABEL_60; /*0x744005*/
      IDA_LOBYTE(v20) = v37.m_Size; /*0x743eb8*/
    }
    v42 = (IDA_SHIWORD(a3) << 8) + 128; /*0x743f94*/
    v41 = ((__int16)a3 << 8) + 128; /*0x743fa0*/
    v43 = v45; /*0x743fac*/
    v33 = (unsigned int **)Terrain::ClimbCheck(&v40, &v41); /*0x743fb8*/
    if ( a3 != *v33 || (*((unsigned int *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (short *)&a3) + 80) & 0x100) != 0 ) /*0x743fea*/
    {
  LABEL_56:
      v32 = g_UnitSelectionState; /*0x743fec*/
      goto LABEL_57; /*0x743ff2*/
    }
    IDA_HIDWORD(a2) = a3; /*0x744018*/
    v32 = g_UnitSelectionState; /*0x74401c*/
  LABEL_60:
    v34 = IDA_WORD2(a2); /*0x744022*/
    v37.m_Position = IDA_HIDWORD(a2); /*0x744029*/
    if ( IDA_WORD2(a2) != (unsigned short)v32 ) /*0x74402d*/
      goto LABEL_64; /*0x74402d*/
    if ( IDA_HIWORD(a2) == IDA_HIWORD(v32) ) /*0x744034*/
    {
      v34 = IDA_LOWORD(a2); /*0x744036*/
      v37.m_Position = IDA_LODWORD(a2); /*0x74403a*/
    }
    if ( IDA___PAIR32__(IDA_HIWORD(v37.m_Position), v34) != v32 ) /*0x744041*/
    {
  LABEL_64:
      (*(void (__thiscall **)(Class_7F5C70 *, int, unsigned int))(*(unsigned int *)this + 488))(this, 2, 0); /*0x744053*/
      v14 = *(unsigned int *)this; /*0x744059*/
      v15 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (short *)&v37.m_Position); /*0x744068*/
  LABEL_65:
      (*(void (__thiscall **)(Class_7F5C70 *, void *, int))(v14 + 1152))(this, v15, 1); /*0x74406d*/
    }
  LABEL_66:
    result = *(unsigned int *)v37.__pad_0; /*0x744076*/
    if ( *(unsigned int *)v37.__pad_0 ) /*0x74407c*/
      return (*(int (__stdcall **)(unsigned int))(**(unsigned int **)v37.__pad_0 + 8))(*(unsigned int *)v37.__pad_0); /*0x744096*/
    return result; /*0x743afe*/
}
// 0x458a00
int UnitClass::IsCellBlockedByBridge(void* aP1)
{
    unsigned int *v2; // edi
    int result; // eax
    int v5; // edi

    v2 = a2; /*0x458a02*/
    result = (int)Cell::IsBridge((Cell *)a2); /*0x458a0a*/
    if ( (UnitClass *)result == this ) /*0x458a11*/
    {
      result = ((unsigned int *)this)[0]; /*0x458a1a*/
      if ( *(unsigned int *)(result + 5664) == -1 ) /*0x458a27*/
      {
        IDA_LOBYTE(result) = 1; /*0x458a2a*/
      }
      else if ( *(unsigned char *)(result + 5803) && (result = (int)((unsigned int *)this)[0]) != 0 ) /*0x458a42*/
      {
        IDA_LOBYTE(result) = 1; /*0x458a45*/
      }
      else
      {
        v5 = *((short *)v2 + 18); /*0x458a51*/
        result = *(short *)(*((int (__thiscall **)(UnitClass *, unsigned int **))this->vtable1 + 110))(this, &a2); /*0x458a64*/
        IDA_LOBYTE(result) = result + *(unsigned int *)(((unsigned int *)this)[0] + 5664) > v5; /*0x458a72*/
      }
    }
    else
    {
      IDA_LOBYTE(result) = 0; /*0x458a14*/
    }
    return result; /*0x458a13*/
}
// 0x4d03d0
int UnitClass::CompareCoordinateMagnitude(short* a2)
{
    int result; // eax

    result = abs16((__int16)this->FootClass); /*0x4d03e7*/
    IDA_LOBYTE(result) = result >= abs16(*a2); /*0x4d03ef*/
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
    void (__thiscall **vtable0)(UnitClass *); // edx
    int result; // eax
    int v16; // ecx
    bool v17; // [esp+Dh] [ebp-19h]
    int v18; // [esp+Eh] [ebp-18h]
    short v19[2]; // [esp+12h] [ebp-14h] BYREF
    char v20[8]; // [esp+16h] [ebp-10h] BYREF
    int v21; // [esp+1Eh] [ebp-8h]

    v17 = 0; /*0x7468c6*/
    if ( !(*((unsigned __int8 (__thiscall **)(UnitClass *))this->vtable1 + 49))(this) ) /*0x7468cd*/
    {
      if ( !*(unsigned int *)&this->Locomotor ) /*0x7468d7*/
        WinAPI::Wrapper(-2147467261); /*0x7468e6*/
      if ( !(*(unsigned __int8 (__stdcall **)(int))(*(unsigned int *)((unsigned int *)this)[0] + 16))(((unsigned int *)this)[0]) && IDA_BYTE2(this->((unsigned int *)Type)[0]) ) /*0x746901*/
        v17 = Team::GetMember((Team *)this, 0) == 0; /*0x746918*/
    }
    if ( !*(unsigned int *)&this->Locomotor ) /*0x74691d*/
      WinAPI::Wrapper(-2147467261); /*0x74692c*/
    if ( (*(unsigned __int8 (__stdcall **)(int))(*(unsigned int *)*(unsigned int *)&this->uniqueId + 16))(*(unsigned int *)&this->uniqueId) ) /*0x74693d*/
    {
  LABEL_30:
      (*((void (__thiscall **)(UnitClass *))this->vtable1 + 284))(this); /*0x746aff*/
      goto LABEL_25; /*0x746b09*/
    }
    v2 = *(unsigned int * *)((char *)&stru_A8EB00 + 644); /*0x746948*/
    if ( *(unsigned int * *)((char *)&stru_A8EB00 + 644) % 8 ) /*0x74695c*/
    {
      v3 = *(unsigned int *)(*((int (__thiscall **)(UnitClass *, char *))this->vtable1 + 110))(this, v20); /*0x746972*/
      v4 = (Cell *)(*((int (__thiscall **)(UnitClass *))this->vtable1 + 111))(this); /*0x74697c*/
      v20[0] = Cell::IsInRange(v4); /*0x74698e*/
      v5 = 0; /*0x746992*/
      while ( 1 ) /*0x746996*/
      {
        v6 = v5 & 7; /*0x746996*/
        IDA_LOWORD(v18) = v3 + IDA_LOWORD(g_DDrawSurfaceManager.scenario[v6 + 82]); /*0x7469b3*/
        IDA_HIWORD(v18) = IDA_HIWORD(v3) + IDA_HIWORD(g_DDrawSurfaceManager.scenario[v6 + 82]); /*0x7469bf*/
        *(unsigned int *)v19 = v18; /*0x7469ce*/
        v7 = (WTFMode *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v19); /*0x7469d2*/
        ObjectByType = WTFMode::FindObjectByType(v7, v20[0]); /*0x7469de*/
        if ( ObjectByType ) /*0x7469e5*/
        {
          if ( !(unsigned __int8)((ObjectClass *)((unsigned int *)this)[0])->IsAlliedWithObjectHouse((int)ObjectByType) ) /*0x7469ee*/
            break; /*0x7469ee*/
        }
        if ( ++v5 >= 8 ) /*0x7469ff*/
        {
          v2 = *(unsigned int * *)((char *)&stru_A8EB00 + 644); /*0x746a01*/
          goto LABEL_16; /*0x746a01*/
        }
      }
      v16 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4116); /*0x746aed*/
      ((unsigned int *)this)[0] = *(unsigned int * *)((char *)&stru_A8EB00 + 644); /*0x746af3*/
      ((unsigned int *)this)[1] = v21; /*0x746af9*/
      ((unsigned int *)this)[2] = v16; /*0x746afc*/
      goto LABEL_30; /*0x746afc*/
    }
  LABEL_16:
    if ( !v17 ) /*0x746a0d*/
      goto LABEL_25; /*0x746a0d*/
    v9 = ((unsigned int *)this)[0]; /*0x746a13*/
    v10 = ((unsigned int *)this)[2]; /*0x746a19*/
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
            *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4104) - 1);
    if ( v12 >= *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4104) - 1 ) /*0x746a5f*/
      v12 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4104) - 1; /*0x746a61*/
    v13 = *(ObjectTypeClass **)(*(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4092) + 4 * v12); /*0x746a69*/
    if ( v13 ) /*0x746a6e*/
    {
      vtable0 = (void (__thiscall **)(UnitClass *))this->FootClass; /*0x746a70*/
      ((unsigned int *)this)[0] = v13; /*0x746a72*/
      ((unsigned int *)this)[0] = 0; /*0x746a78*/
      ((unsigned int *)this)[0] = 1; /*0x746a82*/
      ((unsigned int *)this)[0] = *(unsigned int * *)((char *)&stru_A8EB00 + 644); /*0x746a90*/
      vtable0[295](this); /*0x746a96*/
    }
  LABEL_25:
    result = (int)((unsigned int *)this)[0]; /*0x746a9c*/
    if ( result ) /*0x746aa7*/
    {
      if ( !(*((unsigned __int8 (__thiscall **)(UnitClass *))this->vtable1 + 49))(this) /*0x746abd*/
        || (unsigned __int8)House::IsHumanPlayer((House *)((unsigned int *)this)[0]) )
      {
        ((unsigned int *)this)[0]->__pad_194[9] = 0; /*0x746b13*/
        return 0; /*0x746b11*/
      }
      else
      {
        ((unsigned int *)this)[0]->__pad_194[9] = 1; /*0x746ad2*/
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
call    WinAPI__Wrapper
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
call    WinAPI__Wrapper
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
    int *v13; // ebx
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
    short *v55; // eax
    int *v56; // eax
    unsigned int *v57; // eax
    int v58; // eax
    int v61; // eax
    int v62; // edi
    int v63; // ebp
    int v64; // [esp+2Ah] [ebp-4Ch]
    int *v65; // [esp+32h] [ebp-44h]
    char v66; // [esp+36h] [ebp-40h]
    __int64 v67; // [esp+3Ah] [ebp-3Ch]
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

    if ( !*((unsigned char *)this + 131) || (v68 = 1, !(unsigned __int8)House::IsHumanPlayer(*((House **)this + 135))) ) /*0x737ca8*/
      v68 = 0; /*0x737cb6*/
    v13 = a5; /*0x737cbb*/
    if ( !(unsigned char)a5 ) /*0x737cc1*/
    {
      v14 = (unsigned int *)Team::GetMember((Team *)this, 0); /*0x737ccc*/
      if ( v14 ) /*0x737cd0*/
      {
        if ( (*(int (__thiscall **)(unsigned int *))(*v14 + 44))(v14) == 6 ) /*0x737cdc*/
        {
          if ( *(unsigned char *)(v14[328] + 5821) ) /*0x737ce4*/
          {
            v69 = *((unsigned int *)this + 39); /*0x737cfa*/
            v70 = *((unsigned int *)this + 40); /*0x737d06*/
            v71 = (Class_7F5C70 *)*((unsigned int *)this + 41); /*0x737d12*/
            v15 = Coord::To_Cell((Coord *)&dword_87F7E8, &v69); /*0x737d16*/
            if ( Cell::IsBridge((Cell *)v15) == v14 ) /*0x737d24*/
              return 0; /*0x737d2e*/
          }
        }
      }
    }
    v64 = (int)v13; /*0x737d47*/
    v17 = (unsigned char *)IDA_HIDWORD(a4); /*0x737d48*/
    result = FootClass::ProcessDeploy( /*0x737d52*/
               (FootClass *)this,
               a2,
               COERCE_DOUBLE(IDA___PAIR64__(IDA_LODWORD(a4), (unsigned int)Member)),
               (int *)IDA_HIDWORD(a4),
               v64,
               a6,
               (void *)a7,
               v66,
               v67);
    a7 = result; /*0x737d5a*/
    if ( result != 5 )
    {
      v65 = v10; /*0x737d6c*/
      if ( result != 4 ) /*0x737d6d*/
      {
        if ( result ) /*0x7384bb*/
        {
          if ( *(unsigned char *)(*((unsigned int *)this + 433) + 3598) ) /*0x7384c3*/
          {
            if ( *((ObjectClass **)this + 135) == dword_A83D4C ) /*0x7384da*/
            {
              v57 = (unsigned int *)(*(int (__thiscall **)(Class_7F5C70 *, unsigned char *, unsigned int))(*(unsigned int *)this + 76))( /*0x7384e7*/
                                this,
                                v76,
                                0);
              IDA_LOWORD(a5) = *v57 / 256; /*0x7384fa*/
              IDA_HIWORD(a5) = v57[1] / 256; /*0x738513*/
              if ( (unsigned __int8)CreateTriggerClassIfFarEnough(4, (int)a5, (int)a5) ) /*0x73851d*/
                VoxClass::FindAndPlay((VoxClass *)aEvaOreminerund, -1); /*0x738530*/
            }
          }
        }
        if ( !*((unsigned int *)this + 373) /*0x738573*/
          && v17
          && !*((unsigned char *)this + 1048)
          && !(unsigned __int8)(*((ObjectClass **)this + 135))->IsAlliedWithObjectHouse((int)v17)
          && !(unsigned __int8)House::IsCurrentPlayer(*((House **)this + 135)) )
        {
          if ( (unsigned __int8)UnitClass::CanCrushTarget((int)this, v17) ) /*0x738583*/
          {
            (*(void (__thiscall **)(Class_7F5C70 *, unsigned char *, int))(*(unsigned int *)this + 1152))(this, v17, 1); /*0x738593*/
            (*(void (__thiscall **)(Class_7F5C70 *, int, unsigned int))(*(unsigned int *)this + 488))(this, 2, 0); /*0x7385a1*/
            return a7; /*0x7385b2*/
          }
          v58 = *((unsigned int *)this + 433); /*0x7385b5*/
          if ( (*(unsigned char *)(v58 + 3598) || *(unsigned char *)(v58 + 3599)) /*0x7385df*/
            && (*(int (__thiscall **)(Class_7F5C70 *))(*(unsigned int *)this + 696))(this) > 0 )
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
              v61 = *((unsigned int *)this + 433); /*0x7385ff*/
              v62 = 0; /*0x738605*/
              if ( *(int *)(v61 + 1016) > 0 ) /*0x73860f*/
              {
                while ( 1 ) /*0x738629*/
                {
                  v63 = (*(int (__thiscall **)(Class_7F5C70 *, unsigned int, unsigned int, unsigned int))(*(unsigned int *)this + 1328))( /*0x738629*/
                          this,
                          *(unsigned int *)(*(unsigned int *)(v61 + 1004) + 4 * v62),
                          0,
                          0);
                  if ( v63 ) /*0x73862d*/
                    break; /*0x73862d*/
                  v61 = *((unsigned int *)this + 433); /*0x73862f*/
                  if ( ++v62 >= *(unsigned int *)(v61 + 1016) ) /*0x73863c*/
                    return a7; /*0x73863c*/
                }
                if ( !(unsigned __int8)Array::Contains((Array *)this, v63) /*0x73865e*/
                  && (*(int (__thiscall **)(Class_7F5C70 *, int, int))(*(unsigned int *)this + 632))(this, 2, v63) == 1 )
                {
                  (*(void (__thiscall **)(Class_7F5C70 *, int, unsigned int))(*(unsigned int *)this + 488))(this, 7, 0); /*0x738668*/
                }
              }
            }
          }
        }
        return a7; /*0x738668*/
      }
      v18 = (Class_7F5C70 *)*((unsigned int *)this + 185); /*0x737d73*/
      if ( v18 )
      {
        v19 = (*(int (__thiscall **)(unsigned int))(*(unsigned int *)v18 + 44))(*((unsigned int *)this + 185)) == 6
            ? (BuildingClass *)v18
            : 0;
        BuildingClass::UpdateDamageAnim(v19); /*0x737d97*/
      }
      _EAX = *((unsigned int *)this + 433); /*0x737d9c*/
      if ( *(int *)(_EAX + 3616) <= 0 ) /*0x737daf*/
      {
        if ( !*(unsigned char *)(_EAX + 3278) ) /*0x737de2*/
          goto LABEL_25; /*0x737de2*/
        if ( *(unsigned char *)(_EAX + 3433) ) /*0x737dec*/
          goto LABEL_25; /*0x737dec*/
        if ( *(unsigned char *)(_EAX + 3479) ) /*0x737df6*/
          goto LABEL_25; /*0x737df6*/
        __asm { fld qword ptr [eax+370h] } /*0x737e00*/
        _EAX = dword_8871E0; /*0x737e06*/
        __asm /*0x737e0b*/
        {
          fcomp qword ptr [eax+630h]
          fnstsw ax
        }
        if ( (IDA_BYTE1(_EAX) & 1) != 0 /*0x737e2a*/
          || *(unsigned int *)((*(int (__thiscall **)(Class_7F5C70 *))(*(unsigned int *)this + 444))(this) + 236) != 2
          || *((unsigned char *)this + 625) )
        {
  LABEL_25:
          (*(void (__thiscall **)(Class_7F5C70 *, unsigned char *))(*(unsigned int *)this + 952))(this, v17); /*0x737e68*/
          if ( (*(int (__thiscall **)(Class_7F5C70 *))(*(unsigned int *)this + 456))(this) <= 10 /*0x737ec0*/
            && *((unsigned char *)this + 143)
            && (v18 = this + 156,
                v69 = *((unsigned int *)this + 39),
                v70 = *((unsigned int *)this + 40),
                v71 = (Class_7F5C70 *)*((unsigned int *)this + 41),
                Coord::To_Cell((Coord *)&dword_87F7E8, &v69)->landType == 2) )
          {
            v24 = (AnimClass *)RA2_OPNEW(0x1C8u); /*0x737ecb*/
            if ( v24 ) /*0x737ed5*/
            {
              v69 = *(unsigned int *)v18; /*0x737ee6*/
              v70 = *((unsigned int *)this + 40); /*0x737eef*/
              v71 = (Class_7F5C70 *)*((unsigned int *)this + 41); /*0x737efb*/
              AnimClass_ctor(v24, (void *)dword_8871E0->InfantryBrute, &v69, 0, 1, (void *)0x600, 0, 0); /*0x737f0e*/
            }
            v25 = (AnimClass *)RA2_OPNEW(0x1C8u); /*0x737f18*/
            if ( v25 ) /*0x737f22*/
            {
              v26 = *(unsigned int *)v18; /*0x737f24*/
              v27 = *((unsigned int *)this + 40); /*0x737f26*/
              v28 = (Class_7F5C70 *)*((unsigned int *)this + 41); /*0x737f29*/
              v69 = v26; /*0x737f30*/
              v18 = v28 + 5; /*0x737f48*/
              v70 = v27; /*0x737f4b*/
              v71 = v18; /*0x737f4f*/
              AnimClass_ctor( /*0x737f66*/
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
          (*(void (__thiscall **)(Class_7F5C70 *, unsigned char *))(*(unsigned int *)this + 952))(this, v17); /*0x737e39*/
          v23 = *(unsigned int *)this; /*0x737e3f*/
          *((unsigned int *)this + 27) = 1; /*0x737e43*/
          *((unsigned char *)this + 144) = 1; /*0x737e4a*/
          *((unsigned char *)this + 973) = 1; /*0x737e51*/
          (*(void (__thiscall **)(Class_7F5C70 *))(v23 + 928))(this); /*0x737e58*/
        }
      }
      else
      {
        if ( *((unsigned int *)this + 438) == -1 ) /*0x737db8*/
        {
          v21 = *(unsigned int *)this; /*0x737dba*/
          *((unsigned int *)this + 438) = 0; /*0x737dbf*/
          (*(void (__thiscall **)(Class_7F5C70 *, unsigned char *))(v21 + 952))(this, v17); /*0x737dc9*/
        }
        *((unsigned int *)this + 27) = 1; /*0x737dcf*/
        *((unsigned char *)this + 144) = 1; /*0x737dd6*/
      }
      (*(void (__thiscall **)(Class_7F5C70 *, unsigned int))(*(unsigned int *)this + 292))(this, 0); /*0x737f7a*/
      if ( *(unsigned char *)(*((unsigned int *)this + 433) + 1508) ) /*0x737f86*/
        TechnoClass::MarkPassengersAsExited((TechnoClass *)this); /*0x737f92*/
      if ( (*(int (__thiscall **)(Class_7F5C70 *))(*(unsigned int *)this + 456))(this) > 208 ) /*0x737fa6*/
        ((TechnoClass *)this)->CleanupAll((int)v17); /*0x737fab*/
      if ( !*(unsigned char *)(*((unsigned int *)this + 433) + 3477) && *((unsigned int *)this + 70) ) /*0x737fc4*/
      {
        do /*0x7381ae*/
        {
          v29 = (Class_7F5C70 *)FootClass::PopAndProcess((FootClass *)this); /*0x737fd4*/
          v18 = v29; /*0x737fd9*/
          if ( !v29 ) /*0x737fdd*/
            break; /*0x737fdd*/
          v30 = *(unsigned int *)v29; /*0x737fe9*/
          v72 = *((unsigned int *)this + 39); /*0x737ff7*/
          v73 = *((unsigned int *)this + 40); /*0x738003*/
          v74 = *((unsigned int *)this + 41); /*0x73800a*/
          v31 = Coord::To_Cell((Coord *)&dword_87F7E8, &v72); /*0x738013*/
          v32 = (*(int (__thiscall **)(Class_7F5C70 *, CellClass *, int, int, unsigned int, int, int *))(v30 + 428))( /*0x73801b*/
                  v18,
                  v31,
                  -1,
                  -1,
                  0,
                  1,
                  v65);
          v33 = !v32 || v32 == 2; /*0x73802e*/
          ++dword_A8E7AC; /*0x738036*/
          v18[140] = *(this + 140); /*0x738041*/
          v34 = *((unsigned int *)this + 39); /*0x73804a*/
          v35 = *((unsigned int *)this + 41); /*0x73804d*/
          v71 = (Class_7F5C70 *)*((unsigned int *)this + 40); /*0x738050*/
          v36 = *(unsigned int *)this; /*0x738054*/
          v70 = v34; /*0x738056*/
          v72 = v35; /*0x73805c*/
          v37 = (*(int (__thiscall **)(Class_7F5C70 *))(v36 + 444))(this); /*0x738060*/
          v38 = *(unsigned int *)((*(int (__thiscall **)(int, int *))(*(unsigned int *)v37 + 72))(v37, &v75) + 8); /*0x738072*/
          v39 = *((unsigned char *)this + 140); /*0x738075*/
          v72 = v38; /*0x73807d*/
          if ( v39 ) /*0x738081*/
          {
            v40 = (int *)(*(int (__thiscall **)(Class_7F5C70 *, int *))(*(unsigned int *)this + 88))(this, &v77); /*0x73808c*/
            v70 = *v40; /*0x738091*/
            v71 = (Class_7F5C70 *)v40[1]; /*0x738098*/
            v72 = v40[2]; /*0x73809f*/
          }
          if ( (unsigned char)a6 /*0x7380ec*/
            || *((unsigned char *)this + 143)
            || !v33
            || (Value = ProgressTimer::GetValue((ProgressTimer *)(this + 904), (unsigned int *)&a4 + 1),
                !(*(unsigned __int8 (__thiscall **)(Class_7F5C70 *, int *, unsigned int))(*(unsigned int *)v18 + 216))(
                   v18,
                   &v70,
                   (unsigned __int8)((unsigned int)((*Value >> 7) + 1) >> 1))) )
          {
            v65 = a5; /*0x73818e*/
            (*(void (__thiscall **)(Class_7F5C70 *))(*(unsigned int *)v18 + 224))(v18); /*0x738191*/
            (*(void (__thiscall **)(Class_7F5C70 *))(*(unsigned int *)v18 + 248))(v18); /*0x73819b*/
          }
          else
          {
            *(unsigned int *)&v18[284] = 0; /*0x7380fa*/
            if ( *(unsigned char *)(*((unsigned int *)this + 433) + 1508) && *((unsigned int *)this + 135) != *(unsigned int *)&v18[540] ) /*0x738122*/
              (*(void (__thiscall **)(Class_7F5C70 *, unsigned int))(*(unsigned int *)v18 + 968))(v18, 0); /*0x73812a*/
            v65 = 0; /*0x738132*/
            (*(void (__thiscall **)(Class_7F5C70 *, int *, int))(*(unsigned int *)v18 + 372))(v18, &dword_B1CFE8, 1); /*0x73813d*/
            if ( !(unsigned __int8)House::IsCurrentPlayer(*(House **)&v18[540]) ) /*0x738149*/
            {
              v42 = (int *)*((unsigned int *)this + 373); /*0x738152*/
              if ( v42 ) /*0x73815a*/
                TeamClass::AddMember(v42, (int)v18, 0); /*0x73815f*/
              else
                (*(void (__thiscall **)(Class_7F5C70 *, int, unsigned int))(*(unsigned int *)v18 + 488))(v18, 15, 0); /*0x73816e*/
            }
            if ( v68 ) /*0x73817a*/
              (*(void (__thiscall **)(Class_7F5C70 *))(*(unsigned int *)v18 + 332))(v18); /*0x738180*/
          }
          --dword_A8E7AC; /*0x7381a8*/
        }
        while ( *((unsigned int *)this + 70) ); /*0x7381ae*/
      }
      if ( *((unsigned int *)this + 206) != -1 ) /*0x7381c7*/
        goto LABEL_67; /*0x7381c7*/
      if ( (unsigned char)a6 ) /*0x7381cf*/
        goto LABEL_83; /*0x7381cf*/
      v43 = *((unsigned int *)this + 433); /*0x7381d5*/
      if ( !*(unsigned char *)(v43 + 3277) ) /*0x7381db*/
        goto LABEL_83; /*0x7381db*/
      if ( *(unsigned int *)(v43 + 1504) ) /*0x7381e9*/
        goto LABEL_83; /*0x7381e9*/
      _EAX = Random_Range((void *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646); /*0x738209*/
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
      if ( *((unsigned int *)this + 206) == -1 ) /*0x738239*/
      {
        v48 = (*(int (__thiscall **)(Class_7F5C70 *))(*(unsigned int *)this + 780))(this); /*0x738273*/
        if ( !v48 ) /*0x738277*/
          goto LABEL_83; /*0x738277*/
        v49 = RA2_OPNEW(0x6F0u); /*0x738282*/
        if ( !v49 ) /*0x73828c*/
          goto LABEL_83; /*0x73828c*/
        v47 = InfantryClass::Construct(v49, v48, v48, *((IUnknown **)this + 135)); /*0x73829c*/
      }
      else
      {
  LABEL_67:
        v46 = RA2_OPNEW(0x6F0u); /*0x738240*/
        if ( !v46 ) /*0x73824a*/
          goto LABEL_83; /*0x73824a*/
        v47 = InfantryClass::Construct( /*0x738267*/
                v46,
                (int)v18,
                *((unsigned int *)dword_A8E34C + *((unsigned int *)this + 206)),
                *((IUnknown **)this + 135));
      }
      v50 = (ObjectClass *)v47; /*0x7382a1*/
      if ( v47 ) /*0x7382a5*/
      {
        *(Class_7F5C70 *)(v47 + 140) = *(this + 140); /*0x7382b7*/
        v72 = *((unsigned int *)this + 39); /*0x7382c1*/
        v73 = *((unsigned int *)this + 40); /*0x7382ca*/
        v51 = *(unsigned int *)v47; /*0x7382ce*/
        v74 = *((unsigned int *)this + 41); /*0x7382d3*/
        if ( (*(unsigned __int8 (__thiscall **)(int, int *, unsigned int, int *))(v51 + 216))(v47, &v72, 0, v65) ) /*0x7382dc*/
        {
          v50->health = Random::Range( /*0x73830f*/
                          (Random *)&dword_A8B230[14].NeedsSaveOrLink,
                          5,
                          *(unsigned int *)(v50[10].vtable2 + 160) / 2);
          (*(void (__thiscall **)(ObjectClass *, int *, int, unsigned int))(v50->vtable1 + 372))(v50, &dword_B1CFE8, 1, 0); /*0x73831f*/
          if ( (unsigned __int8)House::IsCurrentPlayer(*((House **)this + 135)) ) /*0x73832b*/
            (*(void (__thiscall **)(ObjectClass *, int))(v50->vtable1 + 488))(v50, 5); /*0x73834c*/
          else
            (*(void (__thiscall **)(ObjectClass *, int))(v50->vtable1 + 488))(v50, 15); /*0x73833c*/
          if ( v68 ) /*0x738358*/
            (*(void (__thiscall **)(ObjectClass *))(v50->vtable1 + 332))(v50); /*0x73835e*/
          v52 = (TechnoClass *)*((unsigned int *)this + 13); /*0x738364*/
          if ( v52 && (unsigned __int8)TechnoClass::HasAnyMission(v52) ) /*0x73836b*/
            ObjectClass::SetReference(v50, *((unsigned int *)this + 13)); /*0x73837a*/
        }
        else
        {
          (*(void (__thiscall **)(ObjectClass *, int))(v50->vtable1 + 32))(v50, 1); /*0x738387*/
        }
      }
  LABEL_83:
      v53 = *((unsigned int *)this + 433); /*0x73838a*/
      if ( *(unsigned char *)(v53 + 3610) /*0x7383c6*/
        && (IDA_BYTE1(dword_A8B230[374].nextArrayIndex) && !*(unsigned char *)(v53 + 3220)
         || IDA_BYTE1(dword_A8B230[374].vtable3) && *(unsigned char *)(v53 + 3220)) )
      {
        v54 = *(unsigned int *)this; /*0x7383f5*/
        a5 = 0; /*0x7383fa*/
        v55 = (short *)(*(int (__thiscall **)(Class_7F5C70 *, char *))(v54 + 440))(this, (char *)&a4 + 4); /*0x73840a*/
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
                        (short *)&a5,
                        0,
                        0);
        a5 = v56; /*0x73842c*/
        if ( v56 != (int *)g_UnitSelectionState ) /*0x738430*/
        {
          if ( stru_A8B250[17] ) /*0x738448*/
            BuildingClass::SearchPlacement((BuildingClass *)&dword_87F7E8, (int)v56, 20); /*0x738452*/
        }
      }
      if ( *(unsigned char *)(*((unsigned int *)this + 433) + 3477) ) /*0x73845d*/
      {
        if ( !(*(unsigned __int8 (__thiscall **)(Class_7F5C70 *, unsigned int))(*(unsigned int *)this + 988))(this, 0) ) /*0x73846d*/
        {
  LABEL_93:
          (*(void (__thiscall **)(Class_7F5C70 *))(*(unsigned int *)this + 248))(this); /*0x73847b*/
          return a7; /*0x738490*/
        }
      }
      else if ( !*((unsigned char *)this + 973) ) /*0x738493*/
      {
        goto LABEL_93; /*0x73849b*/
      }
      return a7; /*0x73866e*/
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

    result = (*((int (__thiscall **)(UnitClass *))this->vtable1 + 33))(this); /*0x70dc76*/
    if ( !*(unsigned char *)(result + 2064) ) /*0x70dc7c*/
    {
      v4 = (UnitClass *)(*((int (__thiscall **)(UnitClass *))this->vtable1 + 33))(this); /*0x70dc98*/
      if ( a2 > 0x11 ) /*0x70dc8c*/
      {
        result = UnitClass::processEnterTarget(v4, 0); /*0x70dcc4*/
        ((unsigned int *)this)[0] = result; /*0x70dcc9*/
        ((unsigned int *)this)[0] = 0; /*0x70dccf*/
      }
      else
      {
        result = UnitClass::processEnterTarget(v4, a2); /*0x70dca0*/
        ((unsigned int *)this)[0] = a2; /*0x70dca5*/
        ((unsigned int *)this)[0] = result; /*0x70dcab*/
      }
    }
    return result; /*0x70dcb1*/
}
// 0x73f0a0
int UnitClass::EvaluateTarget(int a2, int a3, int a4, int a5, char a6)
{
    double v7; // st7
    __int64 v9; // rax
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
    int v24; // esi
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
    short v79[2]; // [esp+60h] [ebp-64h] BYREF
    unsigned int v80; // [esp+64h] [ebp-60h]
    unsigned int v81; // [esp+68h] [ebp-5Ch]
    int v82; // [esp+6Ch] [ebp-58h] BYREF
    int v83; // [esp+70h] [ebp-54h] BYREF
    int v84; // [esp+74h] [ebp-50h] BYREF
    int v85; // [esp+78h] [ebp-4Ch] BYREF
    int v86; // [esp+7Ch] [ebp-48h]
    int v87; // [esp+80h] [ebp-44h]
    int v88; // [esp+84h] [ebp-40h]
    int v89; // [esp+88h] [ebp-3Ch]
    int v90; // [esp+8Ch] [ebp-38h]
    int v91; // [esp+90h] [ebp-34h]
    int v92; // [esp+94h] [ebp-30h]
    int v93; // [esp+98h] [ebp-2Ch]
    int v94; // [esp+9Ch] [ebp-28h]
    unsigned char v95[12]; // [esp+A0h] [ebp-24h] BYREF
    unsigned char v96[12]; // [esp+ACh] [ebp-18h] BYREF
    unsigned char v97[12]; // [esp+B8h] [ebp-Ch] BYREF

    v69 = (*(unsigned int *)(IDA_LODWORD(a2) + 320) & 0x100) != 0 /*0x73f0e1*/
       && (a3 == (InfantryClass *)-1
        || (v9 = (int)a3 - *(char *)(IDA_LODWORD(a2) + 283), (int)((IDA_HIDWORD(v9) ^ v9) - IDA_HIDWORD(v9)) > 1));
    v10 = *(unsigned int *)(IDA_LODWORD(a2) + 84); /*0x73f0f3*/
    v70 = *(unsigned char *)(IDA_LODWORD(a2) + 292); /*0x73f0f6*/
    v11 = (*(unsigned int *)(IDA_LODWORD(a2) + 292) & 0x20) != 0; /*0x73f103*/
    v75 = v10; /*0x73f105*/
    v71 = v11; /*0x73f109*/
    Type = InfantryClass::GetType((InfantryClass *)IDA_LODWORD(a2)); /*0x73f112*/
    v13 = *(unsigned int *)(*((unsigned int *)this + 433) + 3580); /*0x73f11a*/
    if ( v13 == -1 ) /*0x73f123*/
      goto LABEL_25; /*0x73f123*/
    v14 = *(unsigned int *)(IDA_LODWORD(a2) + 236); /*0x73f130*/
    if ( v14 != 10 ) /*0x73f139*/
      goto LABEL_18; /*0x73f139*/
    v15 = *((unsigned int *)dword_A8ED2C + *(unsigned int *)(IDA_LODWORD(a2) + 56)); /*0x73f14a*/
    v16 = *(unsigned int *)(v15 + 740); /*0x73f14d*/
    if ( *(unsigned __int64 *)(v15 + 740) == 0x300000005LL || v16 == 4 && *(unsigned int *)(v15 + 744) == 3 ) /*0x73f16d*/
    {
      if ( *(unsigned char *)(IDA_LODWORD(a2) + 282) != 2 ) /*0x73f17d*/
        return 7; /*0x73f18e*/
      goto LABEL_18; /*0x73f17d*/
    }
    if ( v16 != 3 || *(unsigned int *)(v15 + 744) != 4 && *(unsigned int *)(v15 + 744) != 5 ) /*0x73f1aa*/
    {
  LABEL_18:
      v18 = IDA_LODWORD(a2); /*0x73f1ce*/
      goto LABEL_19; /*0x73f1ce*/
    }
    v18 = IDA_LODWORD(a2); /*0x73f1ac*/
    if ( *(unsigned char *)(IDA_LODWORD(a2) + 282) != 6 ) /*0x73f1ba*/
      return 7; /*0x73f1cb*/
  LABEL_19:
    if ( v14 != v13 && v14 != 10 ) /*0x73f1dc*/
    {
      v19 = *(unsigned int *)(v18 + 68); /*0x73f1de*/
      if ( v19 < 237 || v19 > 238 || a3 == (InfantryClass *)*(char *)(v18 + 283) ) /*0x73f1fd*/
        return 7; /*0x73f20e*/
    }
  LABEL_25:
    if ( IDA_HIDWORD(a2) == 8 ) /*0x73f21b*/
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
      v20 = abs32(IDA_HIDWORD(a2) - *(unsigned int *)(Type + 44)); /*0x73f259*/
      if ( v20 > 2 && v20 < 6 && IDA_HIDWORD(a2) != -1 ) /*0x73f268*/
        return 7; /*0x73f279*/
    }
    NeighbourContent = (InfantryClass *)((Cell *)IDA_LODWORD(a2))->GetNeighbourContent((IDA_BYTE4(a2) - 4) & 7); /*0x73f28a*/
    v22 = InfantryClass::GetType(NeighbourContent); /*0x73f296*/
    if ( v22 ) /*0x73f29a*/
    {
      v23 = abs32(((IDA_BYTE4(a2) - 4) & 7) - *(unsigned int *)(v22 + 44)); /*0x73f2a6*/
      if ( v23 > 2 && v23 < 6 && IDA_HIDWORD(a2) != -1 ) /*0x73f2b5*/
        return 7; /*0x73f2c6*/
    }
    v24 = a4; /*0x73f2c9*/
    result = (*(int (__thiscall **)(Class_7F5C70 *, unsigned int, unsigned int, InfantryClass **, bool *, int))(*(unsigned int *)this + 432))( /*0x73f2eb*/
               this,
               IDA_LODWORD(a2),
               IDA_HIDWORD(a2),
               &a3,
               &v69,
               a4);
    if ( result != 7 )
    {
      v25 = a3; /*0x73f303*/
      if ( a3 != (InfantryClass *)-1 /*0x73f32a*/
        && (*(unsigned int *)(IDA_LODWORD(a2) + 320) & 0x100) != 0
        && a3 == (InfantryClass *)(*(char *)(IDA_LODWORD(a2) + 283) + 4) )
      {
        v70 = *(unsigned char *)(IDA_LODWORD(a2) + 296); /*0x73f332*/
        v26 = (*(unsigned int *)(IDA_LODWORD(a2) + 296) & 0x20) != 0; /*0x73f342*/
        v75 = *(unsigned int *)(IDA_LODWORD(a2) + 88); /*0x73f344*/
        v71 = v26; /*0x73f348*/
      }
      if ( !dword_A8E7AC ) /*0x73f353*/
      {
        if ( !(unsigned __int8)Type::CheckAmbiguity((Type *)&dword_87F7E8, IDA_SLODWORD(a2), 1) /*0x73f37b*/
          && !(*(unsigned __int8 (__thiscall **)(Class_7F5C70 *))(*(unsigned int *)this + 800))(this)
          && *((unsigned char *)this + 981) )
        {
          return 7; /*0x73f394*/
        }
        v25 = a3; /*0x73f397*/
      }
      result = FootClass::Destru_vt107((FootClass *)this, IDA_SLODWORD(a2), IDA_SHIDWORD(a2), (int)v25, v24, a5); /*0x73f3b3*/
      v27 = result; /*0x73f3b8*/
      v74 = result; /*0x73f3bd*/
      if ( result != 7 )
      {
        v28 = IDA_LODWORD(a2); /*0x73f3d0*/
        v29 = *(unsigned int *)(IDA_LODWORD(a2) + 68); /*0x73f3d7*/
        if ( v29 != -1 ) /*0x73f3dd*/
        {
          v30 = *(&dword_A83D84->vtable1 + v29); /*0x73f3e9*/
          if ( *(unsigned char *)(v30 + 682) /*0x73f40c*/
            && !(unsigned __int8)House::IsCurrentPlayer(*((House **)this + 135))
            && !*(unsigned int *)&dword_A8B238 )
          {
            return 7; /*0x73f41d*/
          }
          if ( *(unsigned char *)(v30 + 680) ) /*0x73f420*/
          {
            if ( *(unsigned char *)(v30 + 557) /*0x73f46c*/
              && (*(unsigned char *)(*((unsigned int *)this + 433) + 3368)
               || (unsigned __int8)TechnoTypeClass::HasVoiceResponse((int *)this, 17))
              || *(unsigned char *)(v30 + 680) && *(unsigned int *)(*((unsigned int *)this + 433) + 1460) == 12 )
            {
              if ( !(unsigned __int8)HouseClass::IsAllied(*((HouseClass **)this + 135), *(unsigned int *)(IDA_LODWORD(a2) + 80)) ) /*0x73f47f*/
                goto LABEL_74; /*0x73f47f*/
              goto LABEL_71; /*0x73f47f*/
            }
            if ( !(*(unsigned __int8 (__thiscall **)(Class_7F5C70 *))(*(unsigned int *)this + 684))(this) ) /*0x73f48f*/
              return 7; /*0x73f48f*/
            v31 = *(unsigned int *)(*(unsigned int *)(*(int (__thiscall **)(Class_7F5C70 *, unsigned int))(*(unsigned int *)this + 1016))(this, 0) /*0x73f4a3*/
                            + 172);
            if ( !*(unsigned char *)(v31 + 324) && (!*(unsigned char *)(v31 + 327) || *(unsigned int *)(v30 + 156) != 6) ) /*0x73f4c4*/
              return 7; /*0x73f4d5*/
            if ( (unsigned __int8)HouseClass::IsAllied(*((HouseClass **)this + 135), *(unsigned int *)(IDA_LODWORD(a2) + 80)) ) /*0x73f4e2*/
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
          v32 = *(unsigned int *)(IDA_LODWORD(a2) + 232); /*0x73f506*/
        else
          v32 = *(unsigned int *)(IDA_LODWORD(a2) + 228); /*0x73f51a*/
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
            v33 = *((unsigned int *)this + 423); /*0x73f530*/
            if ( v33 ) /*0x73f538*/
            {
              v34 = *(unsigned int *)(v33 + 40); /*0x73f53a*/
              if ( v34 ) /*0x73f53f*/
              {
                v35 = (unsigned short *)(*(int (__thiscall **)(int, int *))(*(unsigned int *)v34 + 440))(v34, &v82); /*0x73f550*/
                v36 = (unsigned short *)(*(int (__thiscall **)(int, int *))(*(unsigned int *)&v32->Deployed)(v32, &v83); /*0x73f559*/
                if ( *v36 == *v35 && v36[1] == v35[1] ) /*0x73f56f*/
                  return 0; /*0x73f56f*/
                v28 = IDA_LODWORD(a2); /*0x73f575*/
              }
            }
            if ( (unsigned __int8)Array::Contains((Array *)this, (*(unsigned char *)(v32 + 20) & 1) != 0 ? v32 : 0)
              && (*(int (__thiscall **)(int))(*(unsigned int *)v32 + 44))(v32) == 6
              && !(unsigned __int8)UnitClass::IsCellBlockedByBridge((UnitClass *)v32, (unsigned int *)v28) )
            {
              goto LABEL_153; /*0x73f5a2*/
            }
            if ( *(unsigned char *)(*((unsigned int *)this + 433) + 3608) /*0x73f5d1*/
              && (*(int (__thiscall **)(int))(*(unsigned int *)v32 + 44))(v32) == 1
              && *(unsigned char *)(*(unsigned int *)(v32 + 1732) + 3608) )
            {
              return 0; /*0x73f5d9*/
            }
            if ( (*(int (__thiscall **)(int))(*(unsigned int *)&v32->suspendedMission)(v32) == 6 ) /*0x73f5e9*/
            {
              if ( (*(int (__thiscall **)(Class_7F5C70 *))(*(unsigned int *)this + 388))(this) == 7 /*0x73f653*/
                && v32 == *((unsigned int *)this + 361)
                && *(unsigned char *)(*(unsigned int *)(v32 + 1312) + 5806)
                && !(*(unsigned __int8 (__thiscall **)(int))(*(unsigned int *)v32 + 468))(v32)
                || (*(int (__thiscall **)(Class_7F5C70 *))(*(unsigned int *)this + 388))(this) == 9
                && v32 == *((unsigned int *)this + 361)
                && *(unsigned char *)(*(unsigned int *)(v32 + 1312) + 5805)
                && !(*(unsigned __int8 (__thiscall **)(int))(*(unsigned int *)v32 + 468))(v32) )
              {
                return 0; /*0x73f65b*/
              }
              if ( *(unsigned char *)(*(unsigned int *)(v32 + 1312) + 5805) ) /*0x73f667*/
              {
                v37 = (unsigned int *)(*(int (__thiscall **)(Class_7F5C70 *, unsigned char *))(*(unsigned int *)this + 72))(this, v95); /*0x73f67a*/
                IDA_LOWORD(v76) = *v37 / 256; /*0x73f68d*/
                IDA_HIWORD(v76) = v37[1] / 256; /*0x73f6a5*/
                *(unsigned int *)v79 = v76; /*0x73f6ae*/
                v38 = *((unsigned int *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v79) + 57); /*0x73f6bd*/
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
              v39 = *(unsigned char **)(v32 + 1312); /*0x73f6d6*/
              if ( v39[5815] ) /*0x73f6dc*/
              {
                if ( !(unsigned __int8)BuildingClass::IsPoweredOn((BuildingClass *)v32) ) /*0x73f6e8*/
                {
                  if ( (unsigned __int8)HouseClass::IsAlliedWith(*(HouseClass **)(v32 + 540)) ) /*0x73f702*/
                  {
                    if ( v27 < 3 ) /*0x73f70e*/
                    {
                      v27 = 3; /*0x73f714*/
                      v74 = 3; /*0x73f719*/
                    }
                  }
                  else
                  {
                    if ( !(*(unsigned __int8 (__thiscall **)(Class_7F5C70 *))(*(unsigned int *)this + 684))(this) ) /*0x73f72e*/
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
                && !(unsigned __int8)UnitClass::IsCellBlockedByBridge((UnitClass *)v32, (unsigned int *)v28) )
              {
                goto LABEL_153; /*0x73f76d*/
              }
              v40 = *(unsigned char **)(v32 + 1312); /*0x73f77a*/
              if ( v40[5889] ) /*0x73f780*/
                goto LABEL_153; /*0x73f780*/
              if ( v40[5823] ) /*0x73f78e*/
              {
                v41 = *(unsigned int *)(v32 + 1560); /*0x73f798*/
                if ( v41 == 12 || v41 == 8 ) /*0x73f7aa*/
                  goto LABEL_153; /*0x73f7aa*/
              }
              if ( v40[5824] ) /*0x73f7b0*/
              {
                if ( *(unsigned char *)(*(unsigned int *)(v32 + 540) + 506) ) /*0x73f7c0*/
                  return 7; /*0x73f7c8*/
                goto LABEL_153; /*0x73f7c8*/
              }
              if ( v40[5488] ) /*0x73f7d3*/
              {
                v42 = IDA_HIWORD(dword_89F690) + *(unsigned short *)(v28 + 38); /*0x73f7ec*/
                IDA_LOWORD(v77) = dword_89F690 + *(unsigned short *)(v28 + 36); /*0x73f7f3*/
                IDA_HIWORD(v77) = v42; /*0x73f7fc*/
                *(unsigned int *)v78 = v77; /*0x73f80b*/
                v43 = (Cell *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v78); /*0x73f80f*/
                if ( Cell::IsBridge(v43) != (unsigned int *)v32 ) /*0x73f81d*/
                  goto LABEL_153; /*0x73f81d*/
              }
            }
            if ( (*(int (__thiscall **)(Class_7F5C70 *))(*(unsigned int *)this + 388))(this) == 7 /*0x73f844*/
              && v32 == *((unsigned int *)this + 361)
              && (*(int (__thiscall **)(int))(*(unsigned int *)v32 + 44))(v32) == 1 )
            {
              return 0; /*0x73f844*/
            }
            if ( (*(int (__thiscall **)(Class_7F5C70 *))(*(unsigned int *)this + 388))(this) == 11 /*0x73f85f*/
              && *((unsigned int *)this + 134) == v32 )
            {
              return 7; /*0x73f85f*/
            }
            if ( (*(unsigned char *)(v32 + 20) & 4) == 0 ) /*0x73f869*/
              break; /*0x73f869*/
            v44 = *(unsigned int *)(v32 + 1444); /*0x73f86b*/
            *(unsigned int *)v78 = v32; /*0x73f871*/
            if ( !v44 && !(unsigned __int8)TimerClass::Active(v32 + 904) ) /*0x73f87f*/
            {
              if ( !*(unsigned int *)(v32 + 1652) ) /*0x73f888*/
                WinAPI::Wrapper(-2147467261); /*0x73f897*/
              if ( !(*(unsigned __int8 (__stdcall **)(unsigned int))(**(unsigned int **)(v32 + 1652) + 16))(*(unsigned int *)(v32 + 1652)) ) /*0x73f8aa*/
                goto LABEL_139; /*0x73f8aa*/
            }
            v72 = 1; /*0x73f8ac*/
  LABEL_140:
            if ( (unsigned __int8)(*((ObjectClass **)this + 135))->IsAlliedWithObjectHouse(v32) ) /*0x73f8c7*/
            {
              if ( v72 ) /*0x73f8da*/
              {
                v45 = ((unsigned int)((*ProgressTimer::GetValue((ProgressTimer *)(this + 904), &v84) >> 12) + 1) >> 1) & 7; /*0x73f903*/
                v46 = *(unsigned short *)ProgressTimer::GetValue((ProgressTimer *)(v32 + 904), &v85) + 0x7FFF; /*0x73f914*/
                v47 = *(unsigned int *)(v32 + 156); /*0x73f91c*/
                IDA_LOWORD(v80) = v46; /*0x73f91e*/
                v92 = v47; /*0x73f923*/
                __asm { fild [esp+98h+var_30] } /*0x73f934*/
                v93 = *(unsigned int *)(v32 + 160); /*0x73f938*/
                v48 = *(unsigned int *)(v32 + 164); /*0x73f93e*/
                v89 = *((unsigned int *)this + 39); /*0x73f941*/
                __asm { fisub [esp+98h+var_3C] } /*0x73f945*/
                v94 = v48; /*0x73f949*/
                v90 = *((unsigned int *)this + 40); /*0x73f950*/
                v91 = *((unsigned int *)this + 41); /*0x73f95e*/
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
                IDA_LOWORD(v81) = Math::RoundToInt(v7); /*0x73f991*/
                if ( v45 == v49 ) /*0x73f996*/
                {
                  v50 = (unsigned int *)(*(int (__thiscall **)(int, unsigned char *))(*(unsigned int *)v32 + 72))(v32, v96); /*0x73f9aa*/
                  v51 = (unsigned int *)(*(int (__thiscall **)(Class_7F5C70 *, unsigned char *))(*(unsigned int *)this + 72))(this, v97); /*0x73f9b6*/
                  v52 = *v51 - *v50; /*0x73f9bd*/
                  v53 = v51[1]; /*0x73f9bf*/
                  v54 = v51[2]; /*0x73f9c2*/
                  v86 = v52; /*0x73f9c5*/
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
                  IDA_LOWORD(v56) = Math::RoundToInt(v7); /*0x73fa0b*/
                  if ( v56 <= 511 && ((((v81 >> 12) + 1) >> 1) & 7) == v45 ) /*0x73fa26*/
                    return 7; /*0x73fa26*/
                }
                v57 = *(unsigned int *)v78; /*0x73fa2c*/
                if ( *(unsigned char *)(*(unsigned int *)v78 + 1718) /*0x73fa44*/
                  && (*(int (__thiscall **)(unsigned int))(**(unsigned int **)v78 + 44))(*(unsigned int *)v78) != 15 )
                {
                  goto LABEL_150; /*0x73fa44*/
                }
                if ( !*(unsigned int *)(v57 + 1652) ) /*0x73fa46*/
                  WinAPI::Wrapper(-2147467261); /*0x73fa55*/
                if ( (*(unsigned __int8 (__stdcall **)(unsigned int))(**(unsigned int **)(v57 + 1652) + 164))(*(unsigned int *)(v57 + 1652)) ) /*0x73fa63*/
                {
  LABEL_150:
                  if ( v74 < 2 ) /*0x73fa72*/
                    v74 = 2; /*0x73fa74*/
                }
              }
              else
              {
                if ( (*(int (__thiscall **)(int))(*(unsigned int *)v32 + 44))(v32) == 6 ) /*0x73fae9*/
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
              else if ( (*(unsigned char *)(*((unsigned int *)this + 433) + 3368) /*0x73fb4a*/
                      || (unsigned __int8)TechnoTypeClass::HasVoiceResponse((int *)this, 17))
                     && ObjectClass::IsCrushable((TechnoClass *)v32, this) )
              {
                if ( !(unsigned __int8)(*((ObjectClass **)this + 135))->IsAlliedWithObjectHouse(v32) ) /*0x73fb5a*/
                {
                  v73 = 1; /*0x73fb67*/
                  goto LABEL_153; /*0x73fb6c*/
                }
              }
              else
              {
                if ( !*(unsigned int *)(*(int (__thiscall **)(Class_7F5C70 *, unsigned int))(*(unsigned int *)this + 1016))(this, 0) /*0x73fb90*/
                  && !*(unsigned char *)(*((unsigned int *)this + 433) + 3220) )
                {
                  return 7; /*0x73fb90*/
                }
                v61 = (*(int (__thiscall **)(int))(*(unsigned int *)v32 + 44))(v32); /*0x73fb9a*/
                if ( v61 == 6 ) /*0x73fba0*/
                {
                  if ( *(unsigned char *)(*(unsigned int *)(v32 + 1312) + 5814) ) /*0x73fc00*/
                    return 7; /*0x73fc08*/
                }
                else if ( v61 == 36 ) /*0x73fba5*/
                {
                  v62 = (*(int (__thiscall **)(Class_7F5C70 *, int))(*(unsigned int *)this + 740))(this, v32); /*0x73fbac*/
                  v63 = *(unsigned int *)(*(int (__thiscall **)(Class_7F5C70 *, int))(*(unsigned int *)this + 1016))(this, v62); /*0x73fbbd*/
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
            v28 = IDA_LODWORD(a2); /*0x73fa80*/
  LABEL_153:
            v32 = *(unsigned int *)(v32 + 48); /*0x73fa87*/
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
          _ECX = *(unsigned int *)(*((unsigned int *)this + 433) + 1660) + 9 * *(unsigned int *)(v28 + 236); /*0x73fab3*/
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
            if ( v71 || v75 != -1 && (unsigned __int8)HouseClass::IsAllied(*((HouseClass **)this + 135), v75) ) /*0x73fc5f*/
            {
              return 2; /*0x73fd32*/
            }
            else if ( !*(unsigned char *)(*((unsigned int *)this + 433) + 3368) /*0x73fc84*/
                   && !(unsigned __int8)TechnoTypeClass::HasVoiceResponse((int *)this, 17) )
            {
              if ( *(unsigned char *)(*((unsigned int *)this + 433) + 3220) /*0x73fcc6*/
                || *(unsigned int *)(*(int (__thiscall **)(Class_7F5C70 *, unsigned int))(*(unsigned int *)this + 1016))(this, 0)
                && *(unsigned char *)(*(unsigned int *)(*(unsigned int *)(*(int (__thiscall **)(Class_7F5C70 *, unsigned int))(*(unsigned int *)this + 1016))(
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
    Cell_field_0xE4 = this->Cell_field_0xE4; /*0x47c52a*/
    if ( !Cell_field_0xE4 ) /*0x47c532*/
      return 0; /*0x47c547*/
    while ( (*(int (__thiscall **)(unsigned int *))(*Cell_field_0xE4 + 44))(Cell_field_0xE4) != 6 ) /*0x47c53e*/
    {
      Cell_field_0xE4 = (unsigned int *)Cell_field_0xE4[12]; /*0x47c540*/
      if ( !Cell_field_0xE4 ) /*0x47c545*/
        return 0; /*0x47c545*/
    }
    return Cell_field_0xE4; /*0x47c549*/
}
// 0x70fbd0
bool UnitClass::IsDeactivated()
{
  return ((unsigned int *)this)[0]; /*0x70fbd6*/
}
// ============================================================
// Phase 3: Construction & Destruct
// ============================================================

// 0x6b4a50
int UnitClass::Create(void* aP0, void* aP1, int aP2)
{
    int v5; // eax

    ObjectClass::ctor((ObjectClass *)this); /*0x6b4a53*/
    this->FootClass = &vt_SmudgeClass; /*0x6b4a5c*/
    ((unsigned int *)this)[0] = (int)a2; /*0x6b4a62*/
    ((unsigned int *)this)[0] = &vt_SmudgeClass; /*0x6b4a6c*/
    ((unsigned int *)this)[0] = &vt_SmudgeClass; /*0x6b4a73*/
    ((unsigned int *)this)[0] = &vt_SmudgeClass; /*0x6b4a79*/
    AbstractClass::GenerateUniqueID((AbstractClass *)&((unsigned int *)this)[0]); /*0x6b4a80*/
    if ( dword_A8B1F0 < dword_A8B1E8 /*0x6b4abc*/
      || (byte_A8B1ED || !dword_A8B1E8)
      && dword_A8B1F4 > 0
      && (*(unsigned __int8 (__thiscall **)(unsigned int *, int, unsigned int))(dword_A8B1E0 + 8))(
           &dword_A8B1E0,
           dword_A8B1E8 + dword_A8B1F4,
           0) )
    {
      v5 = dword_A8B1F0++; /*0x6b4ac9*/
      *((unsigned int *)dword_A8B1E4 + v5) = this; /*0x6b4ad8*/
    }
    if ( *a3 != dword_B0B728 || a3[1] != dword_B0B72C || a3[2] != dword_B0B730 ) /*0x6b4b03*/
    {
      dword_83FFD8 = a4; /*0x6b4b0b*/
      if ( !(unsigned __int8)ObjectClass::Deploy((ObjectClass *)this) ) /*0x6b4b14*/
      {
        ObjectClass::Destroy((ObjectClass *)this); /*0x6b4b1f*/
        return this; /*0x6b4b27*/
      }
      dword_83FFD8 = -1; /*0x6b4b2a*/
    }
    return this; /*0x6b4b26*/
}
// 0x6b4c80
int UnitClass::ReadINI()
{
    int result; // eax
    int v3; // ecx
    unsigned __int8 *StringByIndex; // eax
    char *v5; // eax
    int _6B5440; // esi
    char *v7; // eax
    short v8; // di
    char *v9; // eax
    short v10; // bx
    char *v11; // eax
    UnitClass *v12; // eax
    int i; // [esp+4h] [ebp-94h]
    int v14; // [esp+8h] [ebp-90h]
    unsigned int v15[3]; // [esp+Ch] [ebp-8Ch] BYREF
    char String[128]; // [esp+18h] [ebp-80h] BYREF

    INIClass::ResetSection(this); /*0x6b4c89*/
    result = INIClass::GetKeyCount(this->__pad_0, (unsigned __int8 *)&((char *)&g_INI_Key_Special)); /*0x6b4c96*/
    v3 = 0; /*0x6b4c9b*/
    v14 = result; /*0x6b4c9f*/
    for ( i = 0; i < v14; ++i ) /*0x6b4ca7*/
    {
      StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex( /*0x6b4cba*/
                                           this->__pad_0,
                                           (unsigned __int8 *)&((char *)&g_INI_Key_Special),
                                           v3);
      INIClass::GetString(this, (unsigned __int8 *)&((char *)&g_INI_Key_Special), StringByIndex, 0, String, 128); /*0x6b4cd4*/
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
            v12 = (UnitClass *)RA2_OPNEW(0xB0u); /*0x6b4d56*/
            if ( v12 ) /*0x6b4d60*/
            {
              v15[0] = (v8 << 8) + 128; /*0x6b4d7a*/
              v15[1] = (v10 << 8) + 128; /*0x6b4d7e*/
              v15[2] = 0; /*0x6b4d8e*/
              UnitClass::Create(v12, *(void **)(*(unsigned int * *)((char *)&stru_A8EB00 + 284) + 4 * _6B5440), v15, -1); /*0x6b4d9d*/
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

    this->ObjectClass = &vt_SmudgeClass; /*0x6b4fa6*/
    ((unsigned int *)this)[0] = &vt_SmudgeClass; /*0x6b4fac*/
    ((unsigned int *)this)[0] = &vt_SmudgeClass; /*0x6b4fb3*/
    ((unsigned int *)this)[0] = &vt_SmudgeClass; /*0x6b4fba*/
    AbstractClass::AnnounceExpiredPointer(this, 1); /*0x6b4fc1*/
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
      RA2_OPDEL(this); /*0x6b5038*/
    return this; /*0x6b5042*/
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
    short *v8; // eax
    int v9; // eax
    int Vtable3; // eax
    char *vtable1; // ebx
    unsigned int *vtable0; // ebp
    int v13; // edi
    UnitClass *v14; // edx
    char *v15; // ecx
    signed int v16; // ecx
    int v17; // ecx
    unsigned int *v18; // eax
    UnitClass *v20; // [esp+10h] [ebp-4h] BYREF

    ElectricBolt = (UnitClass *)this->ElectricBolt; /*0x735789*/
    this->FootClass = &vt_UnitClass; /*0x735794*/
    ((unsigned int *)this)[0] = &vt_UnitClass; /*0x73579a*/
    ((unsigned int *)this)[0] = &vt_UnitClass; /*0x7357a0*/
    ((unsigned int *)this)[0] = &off_7F5C44; /*0x7357a7*/
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
        if ( HouseClass::CanBuild(((unsigned int *)this)[0], (int)Type, 0, 0) == -1 ) /*0x7357e7*/
          ((unsigned int *)this)[0]->recheckTechTree = 1; /*0x7357ef*/
        team = (int *)((unsigned int *)this)[0]; /*0x7357f6*/
        if ( team ) /*0x7357fe*/
        {
          TeamClass::LiberateMember_Start(team, (int)this, 0xFFFFFFFF, 0); /*0x735804*/
          ((unsigned int *)this)[0] = 0; /*0x735809*/
        }
        HouseClass::DecrementUnitCount(((unsigned int *)this)[0], this); /*0x735816*/
        if ( !dword_A8E7AC &&((char *)this + 280) ) /*0x735823*/
        {
          do /*0x735845*/
          {
            v5 = LinkedList_Pop((void *)((unsigned int *)this)[0]); /*0x735833*/
            if ( v5 ) /*0x73583a*/
              (*(void (__thiscall **)(int, int))(*(unsigned int *)v5 + 32))(v5, 1); /*0x735842*/
          }
          while ( *(unsigned int *)&this->q118 ); /*0x735845*/
        }
        if ( (unsigned __int8)TechnoClass::CleanupDirection((FootClass *)this) ) /*0x73584f*/
        {
          FlagHouseIndex = this->FlagHouseIndex; /*0x735858*/
          if ( FlagHouseIndex != -1 ) /*0x735861*/
          {
            v7 = (HouseClass **)((char *)((char *)&stru_A80220) + 4 * FlagHouseIndex); /*0x73586c*/
            v8 = (short *)(*((int (__thiscall **)(UnitClass *, UnitClass **))this->vtable1 + 110))(this, &v20); /*0x735876*/
            HouseClass::DroppedFlag(*v7, v8, 0); /*0x73587f*/
            this->FlagHouseIndex = -1; /*0x735884*/
          }
        }
      }
    }
    AbstractClass::AnnounceExpiredPointer((AbstractClass *)this, 1); /*0x735892*/
    v20 = this; /*0x7358a7*/
    v9 = (*(int (__thiscall **)(float *, UnitClass **))(IDA_LODWORD(((char *)&FootClass_Array)) + 16))(&((char *)&FootClass_Array), &v20); /*0x7358ab*/
    if ( v9 != -1 && v9 < *(unsigned int *)((char *)&FootClass_Array + 891) ) /*0x7358bb*/
    {
      --*(unsigned int *)((char *)&FootClass_Array + 891); /*0x7358c0*/
      for ( ; v9 < *(unsigned int *)((char *)&FootClass_Array + 891); *(unsigned int *)(((char *)&FootClass_Array) + 4 * v9 - 4) = *(unsigned int *)(((char *)&FootClass_Array) /*0x7358c6*/
                                                                                                 + 4 * v9) )
        ++v9; /*0x7358ce*/
    }
    Vtable3 = AbstractClass::GetVtable3((AbstractClass *)&((unsigned int *)this)[0]); /*0x7358e1*/
    vtable1 = (char *)((char *)&g_BuildingLoadQueue_Array); /*0x7358e6*/
    v20 = (UnitClass *)Vtable3; /*0x7358ec*/
    if ( ((char *)&g_BuildingLoadQueue_Array) ) /*0x7358f2*/
    {
      if ( !IDA_LOBYTE(((char *)&g_BuildingLoadQueue_Array)) ) /*0x7358ff*/
      {
        qsort( /*0x73590f*/
          g_BuildingLoadQueue_Array.TechnoTypeClass,
          (size_t)((char *)&g_BuildingLoadQueue_Array),
          8u,
          (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunction);
        vtable1 = (char *)((char *)&g_BuildingLoadQueue_Array); /*0x735914*/
        ((unsigned int *)&g_BuildingLoadQueue_Array)[0] = 0; /*0x73591d*/
        IDA_LOBYTE(((char *)&g_BuildingLoadQueue_Array)) = 1; /*0x735923*/
      }
      vtable0 = g_BuildingLoadQueue_Array.TechnoTypeClass; /*0x73592a*/
      v13 = (int)vtable1; /*0x735930*/
      while ( v13 > 0 ) /*0x735934*/
      {
        v14 = (UnitClass *)vtable0[2 * (v13 / 2)]; /*0x735941*/
        v15 = (char *)&vtable0[2 * (v13 / 2)]; /*0x735945*/
        if ( (int)v20 >= (int)v14 ) /*0x73594d*/
        {
          if ( v14 == v20 ) /*0x735957*/
          {
            if ( v15 ) /*0x73597d*/
            {
              v16 = (v15 - (char *)g_BuildingLoadQueue_Array.TechnoTypeClass) >> 3; /*0x735985*/
              if ( v16 != -1 ) /*0x73598b*/
              {
                v17 = v16 + 1; /*0x73598d*/
                if ( v17 < (int)vtable1 ) /*0x735990*/
                {
                  do /*0x7359af*/
                  {
                    v18 = (char *)g_BuildingLoadQueue_Array.TechnoTypeClass + 8 * v17++; /*0x735998*/
                    *(v18 - 2) = *v18; /*0x73599e*/
                    *(v18 - 1) = v18[1]; /*0x7359a4*/
                    vtable1 = (char *)((char *)&g_BuildingLoadQueue_Array); /*0x7359a7*/
                  }
                  while ( v17 < (int)((char *)&g_BuildingLoadQueue_Array) ); /*0x7359af*/
                }
                ((unsigned int *)&g_BuildingLoadQueue_Array)[0] = vtable1 - 1; /*0x7359bc*/
                *((unsigned int *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)((char *)&g_BuildingLoadQueue_Array)) = 0; /*0x7359c2*/
                *((unsigned int *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)((char *)&g_BuildingLoadQueue_Array) + 1) = 0; /*0x7359d0*/
                ((unsigned int *)&g_BuildingLoadQueue_Array)[0] = 0; /*0x7359d4*/
              }
            }
            break; /*0x7359d4*/
          }
          vtable0 = v15 + 8; /*0x735959*/
          v13 += -1 - v13 / 2; /*0x735961*/
        }
        else
        {
          v13 /= 2; /*0x73594f*/
        }
      }
    }
    ((unsigned int *)this)[0] = 0; /*0x7359da*/
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
    int vtable2; // eax

    v2 = this; /*0x744472*/
    p_vtable1 = &((unsigned int *)this)[0]; /*0x74447a*/
    this = (UnitClass *)(*((int (__stdcall **)(void **))((unsigned int *)this)[0] + 4))(&((unsigned int *)this)[0]); /*0x74448b*/
    v4 = BuildingTypeClass::Dequeue(&g_BuildingLoadQueue_Array, (int *)&this); /*0x74448f*/
    if ( v4 ) /*0x744496*/
    {
      v5 = (signed int)(v4 - (unsigned int)g_BuildingLoadQueue_Array.TechnoTypeClass) >> 3; /*0x74449e*/
      if ( v5 != -1 ) /*0x7444a4*/
      {
        v6 = v5 + 1; /*0x7444a6*/
        for ( i = (char *)((char *)&g_BuildingLoadQueue_Array); /*0x7444b0*/
              v6 < (int)((char *)&g_BuildingLoadQueue_Array);
              i = (char *)((char *)&g_BuildingLoadQueue_Array) )
        {
          v8 = (char *)g_BuildingLoadQueue_Array.TechnoTypeClass + 8 * v6++; /*0x7444b8*/
          *(v8 - 2) = *v8; /*0x7444be*/
          *(v8 - 1) = v8[1]; /*0x7444c4*/
        }
        ((unsigned int *)&g_BuildingLoadQueue_Array)[0] = i - 1; /*0x7444d9*/
        *((unsigned int *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)((char *)&g_BuildingLoadQueue_Array)) = 0; /*0x7444de*/
        *((unsigned int *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)((char *)&g_BuildingLoadQueue_Array) + 1) = 0; /*0x7444ee*/
        ((unsigned int *)&g_BuildingLoadQueue_Array)[0] = 0; /*0x7444f2*/
      }
    }
    result = ObjectClass::LoadFromStream_Common((int)v2, pStm); /*0x7444fe*/
    if ( result >= 0 ) /*0x744505*/
    {
      v10 = *(unsigned int *)&v2->Locomotor; /*0x74450b*/
      if ( v2 ) /*0x744513*/
      {
        FootClass::PostLoadInit((FootClass *)v2, (int)&this); /*0x74451c*/
        v2->FootClass = &vt_UnitClass; /*0x744521*/
        *p_vtable1 = &vt_UnitClass; /*0x744527*/
        ((unsigned int *)v2)[0] = &vt_UnitClass; /*0x74452d*/
        ((unsigned int *)v2)[0] = &off_7F5C44; /*0x744534*/
      }
      v11 = ((unsigned int *)v2)[0]; /*0x74453c*/
      if ( v11 != v10 ) /*0x744544*/
      {
        *(unsigned int *)&v2->Locomotor = v10; /*0x744548*/
        if ( v10 ) /*0x74454e*/
          (*(void (__stdcall **)(int))(*(unsigned int *)v10 + 4))(v10); /*0x744553*/
        if ( v11 ) /*0x744558*/
          (*(void (__stdcall **)(int))(*(unsigned int *)v11 + 8))(v11); /*0x74455e*/
      }
      (*(void (__stdcall **)(int))(*(unsigned int *)v10 + 8))(v10); /*0x744564*/
      v12 = (*((int (__stdcall **)(void **))*p_vtable1 + 4))(p_vtable1); /*0x744573*/
      vtable2 = (int)((char *)&g_BuildingLoadQueue_Array); /*0x744575*/
      if ( (int)((char *)&g_BuildingLoadQueue_Array) + 1 <= (int)((char *)&g_BuildingLoadQueue_Array) ) /*0x74457e*/
        goto LABEL_18; /*0x74457e*/
      if ( !((char *)&g_BuildingLoadQueue_Array) ) /*0x744582*/
        vtable2 = 10; /*0x744584*/
      if ( BuildingTypeClass::Enqueue((int)&g_BuildingLoadQueue_Array, vtable2) ) /*0x74458f*/
      {
  LABEL_18:
        *((unsigned int *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)((char *)&g_BuildingLoadQueue_Array)) = v12; /*0x7445a3*/
        *((unsigned int *)g_BuildingLoadQueue_Array.TechnoTypeClass + 2 * (int)((char *)&g_BuildingLoadQueue_Array) + 1) = v2; /*0x7445b1*/
        IDA_LOBYTE(((char *)&g_BuildingLoadQueue_Array)) = 0; /*0x7445bb*/
        ++((char *)&g_BuildingLoadQueue_Array); /*0x7445c2*/
      }
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v2->Type); /*0x7445d3*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&v2->FollowerCar); /*0x7445e4*/
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
      if ( a2 ) /*0x6b4eb9*/
      {
        ((ObjectClass *)a2)->Init((int)&a3); /*0x6b4ec2*/
        *a2 = &vt_SmudgeClass; /*0x6b4ec7*/
        a2[1] = &vt_SmudgeClass; /*0x6b4ecd*/
        a2[2] = &vt_SmudgeClass; /*0x6b4ed4*/
        a2[3] = &vt_SmudgeClass; /*0x6b4edb*/
      }
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, a2 + 43); /*0x6b4eee*/
    }
    return Register; /*0x6b4ef5*/
}
// 0x6b4f00
int UnitClass::SaveState(void* aP0, void* a1, void* aP2)
{
    (void)aP0; (void)a1; (void)aP2;
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
    v3 = (*((int (__thiscall **)(UnitTypeClass *))this->Type->vtable1 + 11))(this->Type); /*0x744656*/
    Power::TimerProcess(v3); /*0x74465c*/
    v4 = (*((int (__stdcall **)(void **))this->((unsigned int *)Type)[0] + 4))(&this->((unsigned int *)Type)[0]); /*0x74466d*/
    Power::TimerProcess(v4); /*0x744673*/
    FollowerCar = this->FollowerCar; /*0x744678*/
    if ( FollowerCar ) /*0x744680*/
    {
      v6 = (*((int (__stdcall **)(void **))((unsigned int *)FollowerCar)[0] + 4))(&((unsigned int *)FollowerCar)[0]); /*0x744689*/
      Power::TimerProcess(v6); /*0x74468f*/
    }
    Power::TimerProcess(this->FlagHouseIndex); /*0x74469d*/
    IDA_LOBYTE(v7) = this->HasFollowerCar; /*0x7446a2*/
    Power::FlagProcess((Power *)a2, v7); /*0x7446ab*/
    IDA_LOBYTE(v8) = this->Unloading; /*0x7446b0*/
    v9 = Power::FlagProcess((Power *)a2, v8); /*0x7446b9*/
    IDA_LOBYTE(v9) = this->UnitClass_field_bool_6D2; /*0x7446be*/
    Power::FlagProcess((Power *)a2, v9); /*0x7446c7*/
    IDA_LOBYTE(v10) = ((unsigned int *)this)[0]; /*0x7446cc*/
    return Power::FlagProcess((Power *)a2, v10); /*0x7446da*/
}
// 0x746810
int UnitClass::PerFrameUpdate()
{
    int v2; // ecx
    int v3; // esi
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

    v3 = v2; /*0x746812*/
    result = TechnoClass::Update(v13, a2); /*0x746814*/
    v5 = *(unsigned int *)(v3 + 1732); /*0x746819*/
    if ( v5 ) /*0x746821*/
    {
      v6 = *(unsigned int *)(v3 + 540); /*0x746827*/
      if ( v6 ) /*0x74682f*/
      {
        v7 = 0; /*0x746834*/
        v8 = *(unsigned int *)(v6 + 52) + 360; /*0x746836*/
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
          ((Power *)(v3 + 336))->ChangedHouse(1); /*0x74685b*/
        }
      }
  LABEL_9:
      v11 = *(unsigned int *)(v3 + 540); /*0x746860*/
      if ( v11 ) /*0x746868*/
      {
        if ( *(unsigned char *)(v11 + 704) ) /*0x74686a*/
        {
          v12 = *(unsigned int *)(v3 + 1732); /*0x746874*/
          if ( !*(unsigned char *)(v12 + 3278) ) /*0x74687a*/
          {
            if ( *(unsigned char *)(v12 + 3214) ) /*0x746884*/
              ((Power *)(v3 + 336))->ChangedHouse(1); /*0x746896*/
          }
        }
      }
      result = *(unsigned int **)(v3 + 1732); /*0x74689b*/
      if ( *((unsigned char *)result + 2053) ) /*0x7468a1*/
        return (unsigned int *)UnitClass::SetTurret((UnitClass *)v3, 0); /*0x7468af*/
    }
    return result; /*0x7468b4*/
}
// 0x7446e0
int UnitClass::HandleTargetDestroyed(void* a1, void* aP2)
{
    int result; // eax

    FootClass::HandleTargetDestroyed((FootClass *)this, a2, a3); /*0x7446ee*/
    result = 0; /*0x7446f9*/
    if ( (int *)this->FollowerCar == a2 ) /*0x7446fd*/
      this->FollowerCar = 0; /*0x7446ff*/
    if ( (int *)this->Type == a2 ) /*0x74470b*/
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

    if ( a2 == *(unsigned int *)&((unsigned int *)this)[0] ) /*0x6b7c6f*/
    {
      result = ((unsigned int *)this)[0]; /*0x6b7c71*/
      *(unsigned int *)&((unsigned int *)this)[0] = 0; /*0x6b7c74*/
      if ( !result ) /*0x6b7c7d*/
        return UnitClass::ProcessIdleOrders(this); /*0x6b7c7f*/
    }
    else if ( a2 == ((unsigned int *)this)[0] ) /*0x6b7c90*/
    {
      ((unsigned int *)this)[0] = 0; /*0x6b7c92*/
    }
    else
    {
      result = ((unsigned int *)this)[3] - 1; /*0x6b7ca5*/
      if ( result < 0 ) /*0x6b7ca6*/
      {
  LABEL_10:
        if ( a2 == ((unsigned int *)this)[0] ) /*0x6b7cbf*/
        {
          TaskManager::Update((TaskManager *)this); /*0x6b7cc3*/
          return UnitClass::ProcessIdleOrders(this); /*0x6b7cca*/
        }
      }
      else
      {
        v4 = ((unsigned int *)this)[0]; /*0x6b7ca8*/
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
          *(unsigned int *)(*(unsigned int *)(((unsigned int *)this)[0] + 4 * result) + 4) = 7; /*0x6b7d01*/
          nextObject = ((unsigned int *)this)[0]; /*0x6b7d08*/
          result = *(unsigned int *)(((unsigned int *)this)[0] + 4 * result) + 8; /*0x6b7d18*/
          *(unsigned int *)result = *(unsigned int * *)((char *)&stru_A8EB00 + 644); /*0x6b7d1c*/
          *(unsigned int *)(result + 4) = v8; /*0x6b7d22*/
          *(unsigned int *)(result + 8) = nextObject; /*0x6b7d25*/
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
    void *vtable0; // edx
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
    short *v41; // ebp
    char v42; // al
    AbstractClass *focus; // ecx
    unsigned int *v44; // eax
    CellClass *v45; // edi
    int v46; // eax
    int v47; // ebx
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
    short v70[2]; // [esp+3Ch] [ebp-90h] BYREF
    int v71; // [esp+40h] [ebp-8Ch]
    int v72; // [esp+44h] [ebp-88h] BYREF
    int v73; // [esp+48h] [ebp-84h] BYREF
    int v74; // [esp+4Ch] [ebp-80h] BYREF
    short v75; // [esp+50h] [ebp-7Ch] BYREF
    int v76; // [esp+54h] [ebp-78h] BYREF
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

    v3 = (*((int (__thiscall **)(FootClass *, int))this->vtable1 + 199))(this, 2); /*0x4d4290*/
    ((unsigned int *)this)[0] = 1; /*0x4d429d*/
    v4 = v3 / 256 + 6; /*0x4d42b1*/
    switch ( ((unsigned int *)this)[0] )
    {
      case 0:
        v78[0] = *(unsigned int *)&this->vtable2; /*0x4d42f7*/
        vtable0 = this->TechnoClass; /*0x4d42fb*/
        v78[1] = ((unsigned int *)this)[1]; /*0x4d4300*/
        v78[2] = ((unsigned int *)this)[2]; /*0x4d430c*/
        v7 = (*((int (__thiscall **)(FootClass *, int, unsigned int *, unsigned int))vtable0 + 241))(this, 2, v78, 0); /*0x4d4314*/
        v71 = v7; /*0x4d431c*/
        if ( v7 )
          v8 = (*(unsigned char *)(v7 + 20) & 2) != 0 ? v7 : 0;
        else
          v8 = 0; /*0x4d4322*/
        v9 = (*((int (__thiscall **)(FootClass *, int))this->vtable1 + 185))(this, v8); /*0x4d4339*/
        if ( v8 ) /*0x4d4341*/
        {
          if ( (*((unsigned __int8 (__thiscall **)(FootClass *, int, int))this->vtable1 + 234))(this, v8, v9) ) /*0x4d434d*/
            goto LABEL_10; /*0x4d434d*/
          v10 = (unsigned int *)(*(int (__thiscall **)(int))(*(unsigned int *)v8 + 76))(v8); /*0x4d4365*/
          IDA_LOWORD(v66) = *v10 / 256; /*0x4d4379*/
          IDA_HIWORD(v66) = v10[1] / 256; /*0x4d4392*/
          v11 = this->TechnoClass; /*0x4d439b*/
          v73 = v66; /*0x4d439f*/
          v12 = (unsigned int *)(*((int (__thiscall **)(FootClass *, unsigned char *, unsigned int))v11 + 19))(this, v82, 0); /*0x4d43a3*/
          IDA_LOWORD(v66) = *v12 / 256; /*0x4d43b9*/
          IDA_HIWORD(v66) = v12[1] / 256; /*0x4d43cf*/
          v74 = v66; /*0x4d43d8*/
          v13 = (*(int (__thiscall **)(int, unsigned int, int))(*(unsigned int *)v8 + 188))(v8, 0, -1); /*0x4d43de*/
          v14 = (*((int (__thiscall **)(FootClass *, unsigned int, int))this->vtable1 + 47))(this, 0, v13); /*0x4d43ea*/
          if ( Pathfinding::CalcDistance( /*0x4d4408*/
                 (int)&stru_87E790.__pad_D8[80],
                 (short *)&v76,
                 &v75,
                 (int)this,
                 v14,
                 (int)v84,
                 0) < v4 )
          {
  LABEL_10:
            v15 = (*((int (__thiscall **)(FootClass *))this->vtable1 + 113))(this); /*0x4d4412*/
            this->FootClass_field_5DC = v15; /*0x4d4418*/
            if ( (*(unsigned int *)(v15 + 320) & 0x100) != 0 /*0x4d4432*/
              && !(*((unsigned __int8 (__thiscall **)(FootClass *, unsigned int))this->vtable1 + 47))(this, 0) )
            {
              v16 = (int (__thiscall **)(FootClass *))this->TechnoClass; /*0x4d4454*/
              v72 = 0; /*0x4d4459*/
              v64 = *(unsigned int *)(v16[33](this) + 1460); /*0x4d4471*/
              v17 = (*((int (__thiscall **)(FootClass *))this->vtable1 + 33))(this); /*0x4d4475*/
              TileIndex = MapClass::GetTileIndex( /*0x4d4498*/
                            (MapClass *)&stru_87F5F0.__pad_58[416],
                            (short *)(this->FootClass_field_5DC + 36),
                            *(unsigned int *)(v17 + 1460),
                            0);
              v18 = (*((int (__thiscall **)(FootClass *))this->vtable1 + 33))(this); /*0x4d449b*/
              *(unsigned int *)v70 = *LayerClass::Pathfinding_Find( /*0x4d44ca*/
                                  &stru_87F5F0.__pad_58[416],
                                  (int)&v79,
                                  &v79,
                                  (short *)(this->FootClass_field_5DC + 36),
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
                                  (short *)&v72,
                                  0,
                                  0);
              if ( *(unsigned int *)v70 == g_FootClass_Pool ) /*0x4d44ce*/
              {
                this->FootClass_field_5DC = 0; /*0x4d4512*/
                return 60; /*0x4d4527*/
              }
              this->FootClass_field_5DC = (int)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v70); /*0x4d44ed*/
            }
            if ( !((unsigned int *)this)[0] ) /*0x4d44f3*/
            {
              v19 = *(unsigned int *)&this->__pad_58C[12]; /*0x4d44fb*/
              if ( v19 <= 0 ) /*0x4d4503*/
              {
                if ( this->movementDestination ) /*0x4d4528*/
                  ((TechnoClass *)this)->SetFocus((int)this->movementDestination); /*0x4d4533*/
                else
                  ((TechnoClass *)this)->SetFocus(this->FootClass_field_5DC); /*0x4d453e*/
              }
              else
              {
                ((TechnoClass *)this)->SetFocus(*(unsigned int *)(*(unsigned int *)this->__pad_58C + 4 * v19 - 4)); /*0x4d4510*/
              }
            }
            (*((void (__thiscall **)(FootClass *, unsigned int, int))this->vtable1 + 288))(this, 0, 1); /*0x4d454a*/
            (*((void (__thiscall **)(FootClass *, int))this->vtable1 + 242))(this, v71); /*0x4d4559*/
            goto LABEL_22; /*0x4d4559*/
          }
        }
        if ( !this->movementDestination ) /*0x4d45a2*/
          goto LABEL_28; /*0x4d45a2*/
        if ( !this->locomotor[0] ) /*0x4d45aa*/
          WinAPI::Wrapper(-2147467261); /*0x4d45b7*/
        if ( !(*(unsigned __int8 (__stdcall **)(int))(*(unsigned int *)this->locomotor[0] + 16))(this->locomotor[0]) ) /*0x4d45c5*/
        {
  LABEL_28:
          (*((void (__thiscall **)(FootClass *, unsigned int, int))this->vtable1 + 289))(this, 0, 1); /*0x4d45d3*/
          goto LABEL_70; /*0x4d45d3*/
        }
  LABEL_23:
        _EAX = MissionClass_GetMissionControl((void *)this); /*0x4d4569*/
        __asm /*0x4d4570*/
        {
          fld qword ptr [eax+10h]
          fmul ds:dbl_7E27F8
        }
        IDA_LOWORD(v21) = Math::RoundToInt(v1); /*0x4d4579*/
        return v21 + Random_Range((void *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x4d45a1*/
      case 1:
        target = ((unsigned int *)this)[0]; /*0x4d45d8*/
        if ( target )
          v23 = (target->abstractFlags & 2) != 0 ? (void **)target : 0;
        else
          v23 = 0; /*0x4d45e2*/
        v24 = (*((int (__thiscall **)(FootClass *, void **))this->vtable1 + 185))(this, v23); /*0x4d45ff*/
        if ( !(*((unsigned __int8 (__thiscall **)(FootClass *))this->vtable1 + 204))(this) ) /*0x4d460d*/
          goto LABEL_41; /*0x4d460d*/
        if ( !v23 ) /*0x4d4615*/
          goto LABEL_38; /*0x4d4615*/
        if ( (*((int (__thiscall **)(void **))*v23 + 11))(v23) != 6 ) /*0x4d4621*/
          goto LABEL_41; /*0x4d4621*/
        if ( !(unsigned __int8)HouseClass::IsAlliedWith((void *)((unsigned int *)this)[0], v23[135]) ) /*0x4d4630*/
          goto LABEL_41; /*0x4d4630*/
        BuildingClass::GetHealthRatio((BuildingClass *)v23); /*0x4d463b*/
        _ECX = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x4d4640*/
        __asm /*0x4d4646*/
        {
          fcomp qword ptr [ecx+1708h]
          fnstsw ax
        }
        if ( (_AX & 0x4100) == 0 ) /*0x4d4651*/
        {
          (*((void (__thiscall **)(FootClass *, unsigned int))this->vtable1 + 242))(this, 0); /*0x4d4659*/
        }
        else
        {
  LABEL_41:
          if ( v23 ) /*0x4d46a3*/
          {
            if ( (*((unsigned __int8 (__thiscall **)(FootClass *, void **, int))this->vtable1 + 234))(this, v23, v24) ) /*0x4d46ab*/
              goto LABEL_44; /*0x4d46ab*/
            v32 = (unsigned int *)(*((int (__thiscall **)(void **, unsigned char *))*v23 + 19))(v23, v86); /*0x4d46c3*/
            FootClass_field_5DC = this->FootClass_field_5DC; /*0x4d46c8*/
            IDA_LOWORD(v67) = *v32 / 256; /*0x4d46e0*/
            IDA_HIWORD(v67) = v32[1] / 256; /*0x4d46f4*/
            v72 = v67; /*0x4d46fd*/
            v65 = (*((int (__thiscall **)(void **, unsigned int, int))*v23 + 47))(v23, 0, -1); /*0x4d470b*/
            v34 = *(unsigned int *)(FootClass_field_5DC + 320) >> 8; /*0x4d4712*/
            IDA_LOBYTE(v34) = v34 & 1; /*0x4d4715*/
            if ( Pathfinding::CalcDistance( /*0x4d472e*/
                   (int)&stru_87E790.__pad_D8[80],
                   (short *)(FootClass_field_5DC + 36),
                   (short *)&v73,
                   (int)this,
                   v34,
                   v65,
                   0) < v4 )
            {
  LABEL_44:
              (*((void (__thiscall **)(FootClass *, unsigned int))this->vtable1 + 335))(this, 0); /*0x4d473a*/
              if ( ((unsigned int *)this)[0] ) /*0x4d4740*/
                goto LABEL_23; /*0x4d4748*/
              (*((void (__thiscall **)(FootClass *, AbstractClass *, int))this->vtable1 + 288))(this, ((unsigned int *)this)[0], 1); /*0x4d475b*/
              ((TechnoClass *)this)->SetFocus(0); /*0x4d4766*/
              this->FootClass_field_5DC = 0; /*0x4d476b*/
              ((unsigned int *)this)[0] = 0; /*0x4d4771*/
              return 45; /*0x4d4786*/
            }
          }
        }
  LABEL_38:
        if ( !((unsigned int *)this)[0] )
        {
          v27 = (int (__thiscall **)(FootClass *, int, int))this->TechnoClass; /*0x4d4673*/
          v28 = (*(int (__thiscall **)(int, unsigned char *, unsigned int))(*(unsigned int *)this->FootClass_field_5DC + 72))( /*0x4d467e*/
                  this->FootClass_field_5DC,
                  v80,
                  0);
          v29 = v27[241](this, 2, v28); /*0x4d4686*/
          v30 = v29; /*0x4d468c*/
          v71 = v29; /*0x4d4690*/
          v31 = v29 ? ((*(unsigned char *)(v29 + 20) & 2) != 0 ? v29 : 0) : 0;
          v35 = (*((int (__thiscall **)(FootClass *, int))this->vtable1 + 185))(this, v31); /*0x4d479a*/
          if ( v31 ) /*0x4d47a2*/
          {
            if ( (*((unsigned __int8 (__thiscall **)(FootClass *, int, int))this->vtable1 + 234))(this, v31, v35) ) /*0x4d47ae*/
            {
  LABEL_51:
              (*((void (__thiscall **)(FootClass *, int))this->vtable1 + 242))(this, v30); /*0x4d4835*/
              (*((void (__thiscall **)(FootClass *, unsigned int, int))this->vtable1 + 288))(this, 0, 1); /*0x4d4848*/
              return 1; /*0x4d485d*/
            }
            v36 = (unsigned int *)(*(int (__thiscall **)(int, unsigned char *))(*(unsigned int *)v31 + 76))(v31, v81); /*0x4d47c3*/
            v37 = this->FootClass_field_5DC; /*0x4d47c8*/
            IDA_LOWORD(v68) = *v36 / 256; /*0x4d47e0*/
            IDA_HIWORD(v68) = v36[1] / 256; /*0x4d47f6*/
            v73 = v68; /*0x4d47ff*/
            v38 = (*(int (__thiscall **)(int, unsigned int, int))(*(unsigned int *)v31 + 188))(v31, 0, -1); /*0x4d4805*/
            v39 = *(unsigned int *)(v37 + 320) >> 8; /*0x4d4812*/
            IDA_LOBYTE(v39) = v39 & 1; /*0x4d4815*/
            if ( Pathfinding::CalcDistance( /*0x4d482f*/
                   (int)&stru_87E790.__pad_D8[80],
                   (short *)(v37 + 36),
                   (short *)&v74,
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
        v40 = (void (__thiscall **)(FootClass *, unsigned int))this->TechnoClass; /*0x4d485e*/
        ((unsigned int *)this)[0] = 2; /*0x4d4864*/
        v40[242](this, 0); /*0x4d486e*/
        if ( ((unsigned int *)this)[0] ) /*0x4d4874*/
        {
          v41 = (short *)(*((int (__thiscall **)(FootClass *))this->vtable1 + 113))(this); /*0x4d488c*/
          v42 = (*((int (__thiscall **)(FootClass *, unsigned int))this->vtable1 + 47))(this, 0); /*0x4d4894*/
          focus = ((unsigned int *)this)[0]; /*0x4d489a*/
          IDA_LOBYTE(v71) = v42; /*0x4d48a0*/
          v44 = (unsigned int *)(*((int (__thiscall **)(AbstractClass *, unsigned char *))focus->vtable1 + 18))(focus, v83); /*0x4d48ab*/
          v45 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v44); /*0x4d48b9*/
          v46 = this->FootClass_field_5DC; /*0x4d48bb*/
          v47 = v71; /*0x4d48c1*/
          v48 = *(unsigned int *)(v46 + 320) >> 8; /*0x4d48d0*/
          IDA_LOBYTE(v48) = v48 & 1; /*0x4d48d3*/
          v41 += 18; /*0x4d48d6*/
          v49 = Pathfinding::CalcDistance( /*0x4d48e3*/
                  (int)&stru_87E790.__pad_D8[80],
                  v41,
                  (short *)(v46 + 36),
                  (int)this,
                  v71,
                  v48,
                  -1);
          v50 = (unsigned int)v45->flags[0] >> 8; /*0x4d48f0*/
          IDA_LOBYTE(v50) = v50 & 1; /*0x4d48f3*/
          v71 = v49; /*0x4d4903*/
          if ( v49 >= Pathfinding::CalcDistance( /*0x4d4910*/
                        (int)&stru_87E790.__pad_D8[80],
                        v41,
                        (short *)&v45->smudgeTypeIndex,
                        (int)this,
                        v47,
                        v50,
                        -1) )
            (*((void (__thiscall **)(FootClass *, AbstractClass *, int))this->vtable1 + 288))(this, ((unsigned int *)this)[0], 1); /*0x4d4942*/
          else
            (*((void (__thiscall **)(FootClass *, int, int))this->vtable1 + 288))(this, this->FootClass_field_5DC, 1); /*0x4d491f*/
          return 1; /*0x4d4928*/
        }
        else
        {
          v51 = (void (__thiscall **)(FootClass *, unsigned int, int))this->TechnoClass; /*0x4d4958*/
          ((unsigned int *)this)[0] = 0; /*0x4d4960*/
          v51[289](this, 0, 1); /*0x4d496a*/
          ((unsigned int *)this)[0] = 3; /*0x4d4970*/
          return 1; /*0x4d497d*/
        }
      case 2:
        v52 = (int (__thiscall **)(FootClass *, int, int))this->TechnoClass; /*0x4d4990*/
        v53 = (*(int (__thiscall **)(int, unsigned char *, unsigned int))(*(unsigned int *)this->FootClass_field_5DC + 72))( /*0x4d499b*/
                this->FootClass_field_5DC,
                v85,
                0);
        v54 = v52[241](this, 2, v53); /*0x4d49a9*/
        v71 = v54; /*0x4d49ad*/
        if ( v54 )
          v55 = (*(unsigned char *)(v54 + 20) & 2) != 0 ? v54 : 0;
        else
          v55 = 0; /*0x4d49b3*/
        v56 = (*((int (__thiscall **)(FootClass *, int))this->vtable1 + 185))(this, v55); /*0x4d49c9*/
        if ( !v55 ) /*0x4d49d1*/
          goto LABEL_66; /*0x4d49d1*/
        if ( (*((unsigned __int8 (__thiscall **)(FootClass *, int, int))this->vtable1 + 234))(this, v55, v56) ) /*0x4d49dd*/
          goto LABEL_65; /*0x4d49e5*/
        v57 = (unsigned int *)(*(int (__thiscall **)(int, unsigned char *))(*(unsigned int *)v55 + 76))(v55, v87); /*0x4d49f9*/
        v58 = this->FootClass_field_5DC; /*0x4d49fe*/
        IDA_LOWORD(v69) = *v57 / 256; /*0x4d4a16*/
        IDA_HIWORD(v69) = v57[1] / 256; /*0x4d4a2c*/
        v76 = v69; /*0x4d4a35*/
        v59 = (*(int (__thiscall **)(int, unsigned int, int))(*(unsigned int *)v55 + 188))(v55, 0, -1); /*0x4d4a3b*/
        v60 = *(unsigned int *)(v58 + 320) >> 8; /*0x4d4a48*/
        IDA_LOBYTE(v60) = v60 & 1; /*0x4d4a4b*/
        if ( Pathfinding::CalcDistance( /*0x4d4a65*/
               (int)&stru_87E790.__pad_D8[80],
               (short *)(v58 + 36),
               (short *)&v77,
               (int)this,
               v60,
               v59,
               0) < v4 )
        {
          v54 = v71; /*0x4d4a67*/
  LABEL_65:
          (*((void (__thiscall **)(FootClass *, int))this->vtable1 + 242))(this, v54); /*0x4d4a6b*/
          (*((void (__thiscall **)(FootClass *, unsigned int, int))this->vtable1 + 288))(this, 0, 1); /*0x4d4a7e*/
  LABEL_22:
          ((unsigned int *)this)[0] = 1; /*0x4d455f*/
          goto LABEL_23; /*0x4d455f*/
        }
  LABEL_66:
        if ( this->movementDestination ) /*0x4d4a89*/
          goto LABEL_23; /*0x4d4a91*/
        (*((void (__thiscall **)(FootClass *, unsigned int))this->vtable1 + 242))(this, 0); /*0x4d4a9e*/
        v61 = ((unsigned int *)this)[0]; /*0x4d4aa4*/
        if ( v61 ) /*0x4d4aac*/
        {
          (*((void (__thiscall **)(FootClass *, AbstractClass *, int))this->vtable1 + 288))(this, v61, 1); /*0x4d4ab5*/
          ((TechnoClass *)this)->SetFocus(0); /*0x4d4abe*/
          ((unsigned int *)this)[0] = 0; /*0x4d4ac3*/
          this->FootClass_field_5DC = 0; /*0x4d4ac9*/
          goto LABEL_23; /*0x4d4acf*/
        }
        v62 = (void (__thiscall **)(FootClass *, unsigned int, int))this->TechnoClass; /*0x4d4ad4*/
        ((unsigned int *)this)[0] = 0; /*0x4d4ad8*/
        v62[289](this, 0, 1); /*0x4d4ae1*/
  LABEL_70:
        ((unsigned int *)this)[0] = 3; /*0x4d4ae7*/
        return 1; /*0x4d4af4*/
      case 3:
        if ( !this->movementDestination ) /*0x4d42cc*/
          goto LABEL_23; /*0x4d42cc*/
        ((unsigned int *)this)[0] = 0; /*0x4d42d2*/
        return 1; /*0x4d42eb*/
      default:
        goto LABEL_23;
    }
}
// 0x5f5c60
double BuildingClass::GetHealthRatio() const
{
    return (*((int (__thiscall **)(BuildingClass *, unsigned int, unsigned int))this->vtable1 + 34))( /*0x5f5c7c*/
             this,
             COERCE_UNSIGNED_INT64((double)((unsigned int *)this)[0]),
             IDA_HIDWORD(COERCE_UNSIGNED_INT64((double)((unsigned int *)this)[0])));
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
call    WinAPI__Wrapper
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

#include "e4/classes/CCINIClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/InfantryClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/ScenarioClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/TeamClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/UnitTypeClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/MapClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/Random_e4.hpp"  // G42.36 C2027 supply
#include "structure/minimal_carriers.hpp"  // G42.42q minimal carriers

// G57w10: vtable externs (truth e4_globals_decls)
extern unsigned char vt_DynamicVectorClass_ObjectClass[4];  // data: 0x7E4F64  // G57w10 vftable residue fix
extern unsigned char vt_VectorClass_ObjectClass[4];  // data: 0x7E192C  // G57w10 vftable residue fix

namespace gamemd {

// --- UnitClass ---

// 0x6b4f50
HRESULT __stdcall UnitClass::GetClassID(CLSID* pClassID)
{
    if ( !a2 ) /*0x6b4f56*/
      return -2147467261; /*0x6b4f58*/
    *a2 = 237448645; /*0x6b4f66*/
    a2[1] = 298949647; /*0x6b4f6e*/
    a2[2] = -1610610249; /*0x6b4f77*/
    a2[3] = -777003740; /*0x6b4f80*/
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
