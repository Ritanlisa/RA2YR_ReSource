// G42.32 P: tree-universe marker -- e4 tree-owned decls suppressed
#define GAMEMD_TREE_UNIVERSE 1
// GENERATED supplied bodies (supply_missing_bodies.py) -- no-body
// no-file FAIL family; bodies are cache-verbatim transforms.
#include "core/game_loop.hpp"
// G42.35a: stream_ext removed -- gamemd::IStream shadowed ::IStream and broke
// 18 Load/Save override signatures across class headers (C3668), plus a
// gamemd::Buffer double-supply (C2011). This TU uses none of its symbols.
#include "core/utility_ext.hpp"
#include "entity/anim.hpp"
#include "entity/particle_system.hpp"
#include "house/house.hpp"
#include "misc/audio.hpp"
#include "misc/misc_ext.hpp"
#include "misc/movement_ext.hpp"
#include "misc/super_weapon.hpp"
#include "object/abstract.hpp"
#include "object/foot.hpp"
#include "object/mission.hpp"
#include "object/object.hpp"
#include "object/radio.hpp"
#include "object/techno.hpp"
#include "render/display.hpp"
#include "render/light_source.hpp"
#include "structure/aircraft.hpp"
#include "structure/building.hpp"
#include "structure/building_light.hpp"
#include "structure/infantry.hpp"
#include "structure/unit.hpp"
#include "system/cell.hpp"
#include "system/convert_class.hpp"
#include "system/factory.hpp"
#include "system/ini_class.hpp"
#include "system/mix_file.hpp"
#include "system/scenario.hpp"
#include "system/tactical.hpp"
#include "team/team.hpp"
#include "type/anim_type.hpp"
#include "type/techno_type.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/Team_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/House_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/Math_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/DynamicVector_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/Object_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/LayerClass_e4.hpp"  // gB C2027 supply
#include "e4/classes/UnitTypeClass_e4.hpp"  // gB C2027 supply
#include "e4/e4_globals_decls.hpp"  // gB globals supply
// [w14e3] fn vocab supply (g57b5-W5 variadic convention); evidence: raw_decomp entries
namespace gamemd {
    int ComputeMovementWeight(...);  // raw 00429830: double __thiscall ComputeMovementWeight(int this, int *a2, _DWORD *a3, char a4, int a5, in
} // namespace gamemd
extern int CellToTileIndexMap(void *a1, __int16 *a2);  // W13-C raw 0x56D3F0 ObjectClass::CellToTileIndexMap thiscall 自由形
extern int * globalHelper_02AA90(int a1, int a2);  // W13-C raw 0x42AA90 sub_42AA90
extern char ParsePathDirections(void *a1, int a2, void *a3);  // W13-C raw 0x42B210 ObjectClass::ParsePathDirections thiscall 自由形
extern void * SimplifyPathFilter(void *a1, void *a2, int a3);  // W13-C raw 0x42B7F0 ObjectClass::SimplifyPathFilter thiscall 自由形

// G57w10: vtable externs (truth e4_globals_decls)
extern unsigned char vt_DynamicVectorClass_PlanningNodeClass[4];  // data: 0x7EFE44  // G57w10 vftable residue fix
extern unsigned char vt_DynamicVectorClass_TechnoClass[4];  // data: 0x7E17AC  // G57w10 vftable residue fix
extern unsigned char vt_VectorClass_TechnoClass[4];  // data: 0x7E180C  // G57w10 vftable residue fix
// ---- g57b5 W6: TU-local globals (csp_canon 驱动) ----
extern int IID_IFlyControl;  // 词表 (canon 无条目, int 兜底) L1038
// ---- g57b5 W6 end ----
// ---- g57b5 W5: qualified-call free-form vocab ----
namespace gamemd {
int FootClass_MissionMoveCarryallLand(...);   // g57b5 W5: raw 词表 (纯变参兜底)
int MissionClass_GetMissionControl(...);   // g57b5 W5: raw 词表 (纯变参兜底)
int Random_Range(...);   // g57b5 W5: raw 词表 (纯变参兜底)
int TeamClass_AddMember(...);   // g57b5 W5: raw 词表 (纯变参兜底)
int TechnoClass_FindClosestPlacementCell(...);   // g57b5 W5: raw 词表 (纯变参兜底)
int ApplyOverlayReveal(...);   // g57b5 W5: raw 自由函数词表 (纯变参兜底)
int FillRevealBuffer(...);   // g57b5 W5: raw 自由函数词表 (纯变参兜底)
int Pop(...);   // g57b5 W5: raw 自由函数词表 (纯变参兜底)
int RemoveTarget(...);   // g57b5 W5: raw 自由函数词表 (纯变参兜底)
int AbstractClass_QueryInterface(...);   // g57b5 W5: raw 词表 (纯变参兜底)
int BuildingClass_CanAcceptType(...);   // g57b5 W5: raw 词表 (纯变参兜底)
int BuildingClass_CheckPowerFlags(...);   // g57b5 W5: raw 词表 (纯变参兜底)
int BuildingClass_FindPlacementCells2(...);   // g57b5 W5: raw 词表 (纯变参兜底)
int BuildingClass_checkRepairEligibility(...);   // g57b5 W5: raw 词表 (纯变参兜底)
int BuildingTypeClass_GetFoundationHeight(...);   // g57b5 W5: raw 词表 (纯变参兜底)
int House_IsCurrentPlayer(...);   // g57b5 W5: raw 词表 (纯变参兜底)
int InfantryClass_FindNearbyCell(...);   // g57b5 W5: raw 词表 (纯变参兜底)
int ObjectClass_FindClosestObjectCell(...);   // g57b5 W5: raw 词表 (纯变参兜底)
int ObjectClass_HasLocation(...);   // g57b5 W5: raw 词表 (纯变参兜底)
int ScenarioClass_Get_Waypoint_Location(...);   // g57b5 W5: raw 词表 (纯变参兜底)
int Team_AllMembersValid(...);   // g57b5 W5: raw 词表 (纯变参兜底)
int TeamClass_SelectMember(...);   // g57b5 W5: raw 词表 (纯变参兜底)
int TechnoClass_CanMoveToCell(...);   // g57b5 W5: raw 词表 (纯变参兜底)
int TechnoClass_GetWaypointCoords(...);   // g57b5 W5: raw 词表 (纯变参兜底)
int TechnoClass_SetHouseFlag(...);   // g57b5 W5: raw 词表 (纯变参兜底)
int TechnoClass_ShouldNotBeCloaked(...);   // g57b5 W5: raw 词表 (纯变参兜底)
int WTFMode_FindObjectByType(...);   // g57b5 W5: raw 词表 (纯变参兜底)
int FindBuildingByTiberiumType(...);   // g57b5 W5: raw 自由函数词表 (纯变参兜底)
int GetDB(...);   // g57b5 W5: raw 自由函数词表 (纯变参兜底)
int GetFoundationWidth(...);   // g57b5 W5: raw 自由函数词表 (纯变参兜底)
int GetTileIndex(...);   // g57b5 W5: raw 自由函数词表 (纯变参兜底)
int Is1x1AndUndeployable_BuildingMassSelectable(...);   // g57b5 W5: raw 自由函数词表 (纯变参兜底)
int IsNonNullPtr(...);   // g57b5 W5: raw 自由函数词表 (纯变参兜底)
int UpdatePowered(...);   // g57b5 W5: raw 自由函数词表 (纯变参兜底)
} // namespace gamemd
// ---- g57b5 W5 end ----

// 0x41C170
namespace gamemd {
int AircraftClass::MissionStubReturnZero2() {
    return 1752; /*0x41c175*/
}
} // namespace gamemd

// 0x41C180
namespace gamemd {
int AircraftClass::MissionStubReturnZero3() {
    return 2; /*0x41c185*/
}
} // namespace gamemd

// 0x4494C0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::CanBeSold()
{
    int result; // eax

    result = ObjectClass_HasLocation((void *)this); /*0x4494c3*/
    if ( (unsigned char)result ) /*0x4494ca*/
      goto LABEL_11; /*0x4494ca*/
    result = (int)this->Type; /*0x4494cc*/
    if ( *(unsigned char *)(result + 5497) ) /*0x4494d2*/
      goto LABEL_11; /*0x4494d2*/
    if ( this->BuildingClass_field_bool_6E9 ) /*0x4494dc*/
    {
      result = this->BuildingClass_field_int_534; /*0x4494e6*/
      if ( result ) /*0x4494ee*/
      {
        result = (*((int (__thiscall **)(BuildingClass *))this->vtable1 + 97))(this); /*0x4494f4*/
        if ( result != 19 ) /*0x4494fd*/
        {
          result = (*((int (__thiscall **)(BuildingClass *))this->vtable1 + 97))(this); /*0x449503*/
          if ( result != 18 ) /*0x44950c*/
          {
            (result) = ((result) & ~0xFF) | ((unsigned int)(1) & 0xFF) /*0x44950e*/
            return result; /*0x449511*/
          }
        }
      }
    }
    if ( !this->Type->FirestormWall || ((unsigned int *)this)[0]->firestormActive ) /*0x449528*/
  LABEL_11:
      (result) = ((result) & ~0xFF) | ((unsigned int)(0) & 0xFF) /*0x449536*/
    else
      (result) = ((result) & ~0xFF) | ((unsigned int)(1) & 0xFF) /*0x449532*/
    return result; /*0x449510*/
}
} // namespace gamemd

// 0x44D5D0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::CaptureBuilding()
{
    int result; // eax
    HouseClass *v3; // [esp+Ch] [ebp+4h]

    if ( TechnoClass_SetHouseFlag((void *)this, v3) ) /*0x44d5d9*/
    {
      if ( !dword_A8E7AC ) /*0x44d5ed*/
      {
        ((unsigned int *)this)[0]->lastBuiltVehicleType = this->Type->ArrayIndex; /*0x44d601*/
        ((unsigned int *)this)[0]->unknownBool246 = 1; /*0x44d60d*/
      }
      ((unsigned int *)this)[0]->recheckTechTree = 1; /*0x44d61a*/
      if ( !(unsigned __int8)Team_AllMembersValid((void *)this) /*0x44d682*/
        && (unsigned __int8)House_IsCurrentPlayer((void *)((unsigned int *)this)[0])
        && (*((int (__thiscall **)(BuildingClass *))this->vtable1 + 97))(this) != 18
        && ((unsigned int *)this)[0] != 18
        || (result = Team_AllMembersValid((void *)this), !(unsigned char)result)
        && (result = House_IsCurrentPlayer((void *)((unsigned int *)this)[0]), !(unsigned char)result)
        && v3 == *(unsigned int **)this
        && (result = (*((int (__thiscall **)(BuildingClass *))this->vtable1 + 97))(this), result != 18) )
      {
        result = (*((int (__thiscall **)(BuildingClass *, unsigned int))this->vtable1 + 311))(this, 0); /*0x44d68a*/
      }
      (result) = ((result) & ~0xFF) | ((unsigned int)(1) & 0xFF) /*0x44d691*/
    }
    else
    {
      (result) = ((result) & ~0xFF) | ((unsigned int)(0) & 0xFF) /*0x44d698*/
    }
    return result; /*0x44d690*/
}
} // namespace gamemd

// 0x44D700
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::GetAmmoCountScaled()
{
    BuildingTypeClass *Type; // esi
    int result; // eax
    int v3; // [esp+4h] [ebp-Ch]
    double v4; // [esp+8h] [ebp-8h]

    Type = this->Type; /*0x44d704*/
    if ( *(unsigned int *)&Type->PipScale != 2 ) /*0x44d713*/
      return TechnoClass::GetAmmoCount((TechnoClass *)this); /*0x44d715*/
    if ( !Type->Weeder ) /*0x44d71f*/
      return 0; /*0x44d755*/
    v4 = BuildingClass_checkRepairEligibility((float *)((unsigned int *)this)[0]); /*0x44d738*/
    v3 = (*((int (__thiscall **)(BuildingTypeClass *))Type->vtable1 + 29))(Type); /*0x44d73f*/
    (result) = ((result) & ~0xFFFF) | ((unsigned int)(Math::RoundToInt((double)v3 * v4)) & 0xFFFF) /*0x44d74b*/
    return result; /*0x44d71a*/
}
} // namespace gamemd

// 0x44E3A0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
char BuildingClass::CheckOverlapWithOthers()
{
    int v2; // ebp
    unsigned short *v3; // esi
    BuildingClass *v4; // eax
    char v6; // [esp+13h] [ebp-9h]
    int v7; // [esp+14h] [ebp-8h]
    short v8[2]; // [esp+18h] [ebp-4h] BYREF

    v2 = *(unsigned int *)(*((int (__thiscall **)(BuildingClass *, short *))this->vtable1 + 110))(this, v8); /*0x44e3b8*/
    v3 = (unsigned short *)(*((int (__thiscall **)(BuildingClass *, unsigned int))this->vtable1 + 66))(this, 0); /*0x44e3cf*/
    v6 = 0; /*0x44e3d1*/
  LABEL_2:
    while ( *v3 != 0x7FFF || v3[1] != 0x7FFF ) /*0x44e3e3*/
    {
      (v7) = ((v7) & ~0xFFFF) | ((unsigned int)(v2 + *v3) & 0xFFFF) /*0x44e3eb*/
      (v7) = ((v7) & ~(0xFFFFULL << 16)) | (((unsigned __int64)(unsigned int)((((unsigned int)(v2) >> 16) & 0xFFFF) + v3[1]) & 0xFFFF) << 16) /*0x44e3f8*/
      *(unsigned int *)v8 = v7; /*0x44e401*/
      v3 += 2; /*0x44e40a*/
      v4 = (BuildingClass *)*((unsigned int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v8) + 57); /*0x44e412*/
      if ( v4 ) /*0x44e41a*/
      {
        while ( this == v4 ) /*0x44e41e*/
        {
          v4 = (BuildingClass *)((unsigned int *)v4)[0]; /*0x44e420*/
          if ( !v4 ) /*0x44e425*/
            goto LABEL_2; /*0x44e425*/
        }
        v6 = 1; /*0x44e429*/
      }
    }
    return v6; /*0x44e434*/
}
} // namespace gamemd

// 0x44F640
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::GetFactoryPosition() const
{
    BuildingTypeClass *Type; // eax
    int *location; // ecx
    int v3; // esi
    int v4; // edi
    int v5; // ecx
    int v6; // edx
    int v7; // esi
    int *v9; // ecx
    char v10[12]; // [esp+4h] [ebp-Ch] BYREF
    int *v11; // [esp+14h] [ebp+4h]

    Type = this->Type; /*0x44f640*/
    if ( ((unsigned int *)&Type->ExitCoord)[0] == g_BuildingClassPool /*0x44f676*/
      && ((unsigned int *)&Type->ExitCoord)[1] == dword_89C84C
      && ((unsigned int *)&Type->ExitCoord)[2] == dword_89C850 )
    {
      v9 = (int *)(*((int (__thiscall **)(BuildingClass *, char *))this->vtable1 + 18))((gamemd::BuildingClass *)(this), v10); /*0x44f6bf*/
      *v11 = *v9; /*0x44f6c9*/
      v11[1] = v9[1]; /*0x44f6ce*/
      v11[2] = v9[2]; /*0x44f6d5*/
      return (int)v11; /*0x44f6c1*/
    }
    else
    {
 location = (int *)(((unsigned int *)this)[0]); /*0x44f678*/
      v3 = location[1]; /*0x44f681*/
      v4 = location[2]; /*0x44f684*/
      v5 = *location + ((unsigned int *)&Type->ExitCoord)[0]; /*0x44f68d*/
      v6 = v3 + ((unsigned int *)&Type->ExitCoord)[1]; /*0x44f695*/
      v7 = ((unsigned int *)&Type->ExitCoord)[2]; /*0x44f697*/
      *v11 = v5; /*0x44f6a5*/
      v11[1] = v6; /*0x44f6a7*/
      v11[2] = v4 + v7; /*0x44f6aa*/
      return (int)v11; /*0x44f69d*/
    }
}
} // namespace gamemd

// 0x451750
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::PlayUpgradeAnim(int a2, int a3, int a4, void *a5)
{
    int result; // eax
    int *v6; // edx

    if ( (unsigned char)a3 ) /*0x45175f*/
    {
      result = a2; /*0x451761*/
      v6 = &(unsigned char *)&this->Type->BuildingAnim[17 * a2 + 16]; /*0x451772*/
    }
    else
    {
      result = a2; /*0x45177b*/
      if ( (unsigned char)a4 ) /*0x451783*/
        v6 = &(unsigned char *)&this->Type->BuildingAnim[17 * a2 + 20]; /*0x451790*/
      else
        v6 = &(unsigned char *)&this->Type->BuildingAnim[17 * a2 + 12]; /*0x4517a4*/
    }
    if ( v6 ) /*0x4517ad*/
    {
      if ( *(unsigned char *)v6 ) /*0x4517af*/
        return (this)->PlayAnim((int)v6, v6, result, a3, a4, a5); /*0x4517bf*/
    }
    return result; /*0x4517c4*/
}
} // namespace gamemd

// 0x452170
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::SetConnectedBuildingMission(int a2)
{
    char v3; // bl
    int *Anims; // ecx
    int v5; // esi
    int result; // eax

    v3 = a2; /*0x45217b*/
    if ( a2 == 15 && (*((int (__thiscall **)(BuildingClass *, unsigned int, unsigned int))this->vtable1 + 26))(this, 0, 0) == 5 ) /*0x45218b*/
      v3 = 16; /*0x45218d*/
 Anims = (int *)(this->Anims); /*0x452192*/
    v5 = 21; /*0x452198*/
    do /*0x4521ad*/
    {
      result = *Anims; /*0x45219d*/
      if ( *Anims ) /*0x45219d*/
        *(unsigned char *)(result + 376) = v3; /*0x4521a3*/
      ++Anims; /*0x4521a9*/
      --v5; /*0x4521ac*/
    }
    while ( v5 ); /*0x4521ad*/
    return result; /*0x4521af*/
}
} // namespace gamemd

// 0x4525F0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::IsPoweredOn()
{
    int result; // eax

    result = (int)this->Type; /*0x4525f3*/
    if ( *(unsigned char *)(result + 5815) ) /*0x4525f9*/
    {
      result = (*((int (__thiscall **)(BuildingClass *))this->vtable1 + 97))(this); /*0x45260b*/
      (result) = ((result) & ~0xFF) | ((unsigned int)(result == 24 && (result = BuildingClass_CheckPowerFlags((void *)((unsigned int *)this)[0]), (unsigned char)result)) & 0xFF) /*0x452625*/
    }
    else
    {
      (result) = ((result) & ~0xFF) | ((unsigned int)(1) & 0xFF) /*0x452603*/
    }
    return result; /*0x452605*/
}
} // namespace gamemd

// 0x452630
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::CheckHealthForRepair()
{
    int result; // eax

    result = ((unsigned int *)this)[0]; /*0x452633*/
    if ( result ) /*0x452638*/
    {
      result = (int)this->Type; /*0x45263e*/
      if ( *(unsigned char *)(result + 5498) ) /*0x452644*/
      {
        result = (*((int (__thiscall **)(BuildingClass *))this->vtable1 + 32))(this); /*0x452656*/
        if ( (unsigned char)result ) /*0x45265e*/
          (result) = ((result) & ~0xFF) | ((unsigned int)(0) & 0xFF) /*0x452660*/
        else
          return InfantryClass::CheckHealthDiff((TechnoClass *)this); /*0x452666*/
      }
      else
      {
        (result) = ((result) & ~0xFF) | ((unsigned int)(0) & 0xFF) /*0x45264e*/
      }
    }
    else
    {
      (result) = ((result) & ~0xFF) | ((unsigned int)(0) & 0xFF) /*0x45263a*/
    }
    return result; /*0x45263c*/
}
} // namespace gamemd

// 0x452670
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::CanAcceptType(int a3 a2,int)
{
    int result; // eax

    result = a3; /*0x452670*/
    if ( a3 != *((unsigned int *)this + 135) ) /*0x45267e*/
      goto LABEL_6; /*0x45267e*/
    result = _strcmpi((char *)(a2 + 3720), (char *)(*((unsigned int *)this + 328) + 36)); /*0x452695*/
    if ( result ) /*0x45269f*/
      goto LABEL_6; /*0x45269f*/
    result = *(unsigned int *)(a2 + 5884); /*0x4526a1*/
    if ( result == -1 ) /*0x4526aa*/
    {
      result = *(this + 1794); /*0x4526c2*/
      if ( result < *(unsigned int *)(*((unsigned int *)this + 328) + 5344) ) /*0x4526cf*/
      {
        (result) = ((result) & ~0xFF) | ((unsigned int)(1) & 0xFF) /*0x4526d2*/
        return result; /*0x4526d5*/
      }
    }
    else if ( result <= 0 || result > 3 ) /*0x4526b3*/
    {
      goto LABEL_6; /*0x4526b3*/
    }
    if ( *(this + 1794) ) /*0x4526d8*/
    {
  LABEL_6:
      (result) = ((result) & ~0xFF) | ((unsigned int)(0) & 0xFF) /*0x4526b5*/
      return result; /*0x4526b9*/
    }
    (result) = ((result) & ~0xFF) | ((unsigned int)(1) & 0xFF) /*0x4526e3*/
    return result; /*0x4526b5*/
}
} // namespace gamemd

// 0x4566B0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::GetPowerFrame()
{
    int v2; // ecx
    int result; // eax
    unsigned int *updated; // edi
    int v6; // eax

    v2 = *((unsigned int *)this + 328); /*0x4566b7*/
    result = *(unsigned int *)(v2 + 5900); /*0x4566bd*/
    if ( result <= 0 ) /*0x4566c5*/
    {
      if ( *(unsigned char *)(v2 + 3281) ) /*0x4566cb*/
      {
        if ( this->gapSuperCharged ) /*0x4566d5*/
          return *(char *)(v2 + 3283); /*0x4566df*/
        else
          return *(char *)(v2 + 3282); /*0x4566ec*/
      }
      else if ( *(unsigned char *)(v2 + 5832) || *(unsigned char *)(v2 + 5831) ) /*0x456703*/
      {
        return *(char *)(v2 + 5895); /*0x45673e*/
      }
      else
      {
        updated = (unsigned int *)TechnoClass::UpdatePowered(this); /*0x456714*/
        if ( (unsigned __int8)IsNonNullPtr(updated) && (v6 = *(unsigned int *)(*updated + 180), v6 > 0) ) /*0x45672c*/
          return v6 / 256; /*0x456739*/
        else
          return 0; /*0x456749*/
      }
    }
    return result; /*0x4566e5*/
}
} // namespace gamemd

// 0x457620
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::IsFactorySelectable()
{
    int result; // eax

    (result) = ((result) & ~0xFF) | ((unsigned int)(BuildingClass::Is1x1AndUndeployable_BuildingMassSelectable((BuildingClass *)this->Type)) & 0xFF) /*0x457626*/
    return result;
}
} // namespace gamemd

// 0x457630
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::SWAvailable()
{
    int SuperWeapon; // eax
    int v3; // eax

    SuperWeapon = this->Type->SuperWeapon; /*0x457639*/
    if ( SuperWeapon == -1 ) /*0x457642*/
      return this->Type->SuperWeapon; /*0x457642*/
    v3 = *(unsigned int *)(*(unsigned int *)(*((unsigned int *)dword_A83CBC + SuperWeapon) + 40) + 200); /*0x457650*/
    if ( !v3 || ((DynamicVector *)((unsigned int *)this)[0]->ownedInfantryTypes2)->GetOrGrow(*(unsigned int *)(v3 + 3576)) ) /*0x45766d*/
      return this->Type->SuperWeapon; /*0x457682*/
    else
      return -1; /*0x457676*/
}
} // namespace gamemd

// 0x4578C0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::IsFootprintBlocked()
{
    int result; // eax
    int *v3; // eax
    BuildingTypeClass *Type; // ecx
    int FoundationWidth; // eax
    int *v6; // ecx
    int v7; // ebx
    int v8; // edi
    short v9; // si
    short v10; // di
    short v11; // si
    ObjectClass *v12; // eax
    BuildingClass *ClosestObjectCell; // eax
    WTFMode *v14; // eax
    int v15; // [esp+10h] [ebp-30h]
    int v16; // [esp+14h] [ebp-2Ch]
    int v17; // [esp+18h] [ebp-28h]
    int v18; // [esp+1Ch] [ebp-24h]
    short v19[2]; // [esp+20h] [ebp-20h] BYREF
    short v20[2]; // [esp+24h] [ebp-1Ch] BYREF
    int v21; // [esp+28h] [ebp-18h]
    int v22; // [esp+2Ch] [ebp-14h] BYREF
    int v23; // [esp+30h] [ebp-10h]
    unsigned int v24[2]; // [esp+38h] [ebp-8h] BYREF

    if ( !TechnoClass_ShouldNotBeCloaked((float *)this) ) /*0x4578c9*/
    {
      v3 = (int *)(*((int (__thiscall **)(BuildingClass *, int *))this->vtable1 + 110))(this, &v22); /*0x4578e0*/
      Type = this->Type; /*0x4578e8*/
      v23 = *v3; /*0x4578ee*/
      FoundationWidth = BuildingTypeClass::GetFoundationWidth(Type); /*0x4578f2*/
      v6 = (int *)this->Type; /*0x4578f7*/
      v7 = FoundationWidth; /*0x4578fd*/
      v22 = FoundationWidth; /*0x457901*/
      result = BuildingTypeClass_GetFoundationHeight(v6, 0); /*0x457905*/
      v8 = -1; /*0x45790a*/
      v21 = result; /*0x457910*/
      v18 = -1; /*0x457914*/
      if ( v7 < -1 ) /*0x457918*/
      {
  LABEL_13:
        (result) = ((result) & ~0xFF) | ((unsigned int)(0) & 0xFF) /*0x4579f3*/
        return result; /*0x4579fc*/
      }
      while ( 1 ) /*0x45791e*/
      {
        v9 = -1; /*0x45791e*/
        v17 = -1; /*0x457924*/
        if ( result >= -1 ) /*0x457928*/
          break; /*0x457928*/
  LABEL_12:
        v18 = ++v8; /*0x4579e9*/
        if ( v8 > v7 ) /*0x4579ed*/
          goto LABEL_13; /*0x4579ed*/
      }
      v10 = v23 + v8; /*0x457932*/
      while ( 1 ) /*0x45793b*/
      {
        v24[0] = 0; /*0x45793b*/
        v24[1] = 0; /*0x45793f*/
        v11 = (((unsigned int)(v23) >> 16) & 0xFFFF) + v9; /*0x457944*/
        (v15) = ((v15) & ~0xFFFF) | ((unsigned int)(v10) & 0xFFFF) /*0x45794e*/
        (v15) = ((v15) & ~(0xFFFFULL << 16)) | (((unsigned __int64)(unsigned int)(v11) & 0xFFFF) << 16) /*0x457953*/
        *(unsigned int *)v19 = v15; /*0x457963*/
        v12 = (ObjectClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v19); /*0x457967*/
        ClosestObjectCell = (BuildingClass *)ObjectClass_FindClosestObjectCell(v12, v24, 0, 0); /*0x45796e*/
        if ( ClosestObjectCell == this ) /*0x457975*/
        {
          (v16) = ((v16) & ~0xFFFF) | ((unsigned int)(v10) & 0xFFFF) /*0x457977*/
          (v16) = ((v16) & ~(0xFFFFULL << 16)) | (((unsigned __int64)(unsigned int)(v11) & 0xFFFF) << 16) /*0x45797c*/
          *(unsigned int *)v20 = v16; /*0x457991*/
          v14 = (WTFMode *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v20); /*0x457995*/
          ClosestObjectCell = (BuildingClass *)WTFMode_FindObjectByType(v14, 0); /*0x45799c*/
        }
        if ( ClosestObjectCell ) /*0x4579a3*/
        {
          if ( ((unsigned int *)ClosestObjectCell)[0] != ((unsigned int *)this)[0] ) /*0x4579b3*/
          {
            result = (*((int (__thiscall **)(BuildingClass *))ClosestObjectCell->vtable1 + 33))(ClosestObjectCell); /*0x4579b9*/
            if ( *(unsigned char *)(result + 3229) ) /*0x4579bf*/
              break; /*0x4579bf*/
          }
        }
        result = v21; /*0x4579cd*/
        v9 = ++v17; /*0x4579d1*/
        if ( v17 > v21 ) /*0x4579d8*/
        {
          v7 = v22; /*0x4579de*/
          v8 = v18; /*0x4579e2*/
          goto LABEL_12; /*0x4579e2*/
        }
      }
    }
    (result) = ((result) & ~0xFF) | ((unsigned int)(1) & 0xFF) /*0x457a00*/
    return result; /*0x4579f3*/
}
} // namespace gamemd

// 0x4581F0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::MissionStubReturnZero6() {
    return 0; /*0x4581f6*/ // G42.35a: was this->Audio8[2] -- member is an AudioController object now
}
} // namespace gamemd

// 0x459870
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::MissionStubReturnZero() {
    return *(unsigned int *)&this->Type->__pad_F70[1460]; /*0x45987c*/
}
} // namespace gamemd

// 0x459880
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::MissionStubReturnZero2() {
    return *(unsigned int *)&this->Type->__pad_F70[1464]; /*0x45988c*/
}
} // namespace gamemd

// 0x459890
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::MissionStubReturnZero3() {
    return *(unsigned int *)&this->Type->__pad_F70[1468]; /*0x45989c*/
}
} // namespace gamemd

// 0x459C00
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::IsMassSelectable()
{
    int result; // eax

    (result) = ((result) & ~0xFF) | ((unsigned int)(BuildingClass::Is1x1AndUndeployable_BuildingMassSelectable((BuildingClass *)this->Type)) & 0xFF) /*0x459c09*/
    if ( (unsigned char)result ) /*0x459c10*/
      (result) = ((result) & ~0xFF) | ((unsigned int)(TechnoClass_CanMoveToCell((void *)this)) & 0xFF) /*0x459c16*/
    return result; /*0x459c12*/
}
} // namespace gamemd

// 0x459D80
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::StubReturnFalse()
{
    int result; // eax

    (result) = ((result) & ~0xFF) | ((unsigned int)(0) & 0xFF) /*0x459d80*/
    return result; /*0x459d82*/
}
} // namespace gamemd

// 0x459DA0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::MissionStubReturnZero5() {
    return 2; /*0x459da5*/
}
} // namespace gamemd

// 0x459DF0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::StubReturnFalse3()
{
    int result; // eax

    (result) = ((result) & ~0xFF) | ((unsigned int)(0) & 0xFF) /*0x459df0*/
    return result; /*0x459df2*/
}
} // namespace gamemd

// 0x459E00
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::StubReturnFalse4()
{
    int result; // eax

    (result) = ((result) & ~0xFF) | ((unsigned int)(0) & 0xFF) /*0x459e00*/
    return result; /*0x459e02*/
}
} // namespace gamemd

// 0x459E10
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::StubReturnFalse10()
{
    int result; // eax

    (result) = ((result) & ~0xFF) | ((unsigned int)(0) & 0xFF) /*0x459e10*/
    return result; /*0x459e12*/
}
} // namespace gamemd

// 0x459E20
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::StubReturnFalse11()
{
    int result; // eax

    (result) = ((result) & ~0xFF) | ((unsigned int)(0) & 0xFF) /*0x459e20*/
    return result; /*0x459e22*/
}
} // namespace gamemd

// 0x459E30
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::StubReturnFalse12()
{
    int result; // eax

    (result) = ((result) & ~0xFF) | ((unsigned int)(0) & 0xFF) /*0x459e30*/
    return result; /*0x459e32*/
}
} // namespace gamemd

// 0x459E40
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::StubReturnFalse13()
{
    int result; // eax

    (result) = ((result) & ~0xFF) | ((unsigned int)(0) & 0xFF) /*0x459e40*/
    return result; /*0x459e42*/
}
} // namespace gamemd

// 0x459E50
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::StubReturnFalse14()
{
    int result; // eax

    (result) = ((result) & ~0xFF) | ((unsigned int)(0) & 0xFF) /*0x459e50*/
    return result; /*0x459e52*/
}
} // namespace gamemd

// 0x459ED0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
const wchar_t *BuildingClass::GetTypeField60() {
    return (int)((unsigned int *)this->Type)[0]; /*0x459ed9*/
}
} // namespace gamemd

// 0x459EE0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
BuildingTypeClass *BuildingClass::GetTypePtr() {
    return this->Type; /*0x459ee6*/
}
} // namespace gamemd

// 0x483620
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::IsTiberiumCollectorEligible()
{
    int BuildingByTiberiumType; // eax
    int v4; // eax

    if ( !IDA_BYTE2(((AbstractClass *)dword_A8B230)[374].vtable3) ) /*0x483628*/
      return 0; /*0x483632*/
    BuildingByTiberiumType = FindBuildingByTiberiumType(*(unsigned int *)&this->q044); /*0x483639*/
    if ( BuildingByTiberiumType == -1 ) /*0x483641*/
      return 0; /*0x483643*/
    v4 = *(unsigned int *)(((unsigned int *)&g_BuildingLoadQueue_Array)[2] + 4 * BuildingByTiberiumType); /*0x48364d*/
    if ( ((unsigned int)(((unsigned int *)this)[0]) & 0xFF) ) /*0x483650*/
      return 0; /*0x48365a*/
    if ( (((unsigned int)(((unsigned int *)this)[0]) >> 16) & 0xFF) < *(unsigned int *)(v4 + 228) - 1 ) /*0x48366f*/
      return *(double *)(v4 + 176) >= 0.00001; /*0x483686*/
    return 0; /*0x483634*/
}
} // namespace gamemd

// 0x487C10
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::CheckC4Active()
{
    int result; // eax
    unsigned int *v3; // esi

    if ( ((unsigned int)(((unsigned int *)this)[0]) & 0xFF) ) /*0x487c14*/
    {
      (result) = ((result) & ~0xFF) | ((unsigned int)(0) & 0xFF) /*0x487c1f*/
    }
    else if ( byte_A8E9A0 && (v3 = (unsigned int *)((unsigned int *)this)[1]) != 0 ) /*0x487c34*/
    {
      while ( 1 ) /*0x487c3a*/
      {
        result = (*(int (__thiscall **)(unsigned int *))(*v3 + 44))(v3); /*0x487c3a*/
        if ( result == 6 ) /*0x487c40*/
          break; /*0x487c40*/
        v3 = (unsigned int *)v3[12]; /*0x487c42*/
        if ( !v3 ) /*0x487c47*/
          goto LABEL_7; /*0x487c47*/
      }
      (result) = ((result) & ~0xFF) | ((unsigned int)(0) & 0xFF) /*0x487c61*/
    }
    else
    {
  LABEL_7:
      result = *(unsigned int *)&this->animation; /*0x487c49*/
      (result) = ((result) & ~0xFF) | ((unsigned int)(((unsigned char *)&byte_89EA60)[36 * result]) & 0xFF) /*0x487c54*/
    }
    return result; /*0x487c1e*/
}
} // namespace gamemd

// 0x4A5130
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::CheckFlag24()
{
    int result; // eax

    (result) = ((result) & ~0xFF) | ((unsigned int)(((unsigned int)(((unsigned int *)this)[0]) & 0xFF) && !(((unsigned int)(((unsigned int *)this)[0]) >> 8) & 0xFF)) & 0xFF) /*0x4a5141*/
    return result; /*0x4a5140*/
}
} // namespace gamemd

// 0x4A51B0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::CheckPowerFlags()
{
    int result; // eax

    if ( ((unsigned int)(((unsigned int *)this)[0]) & 0xFF) || ((result) = ((result) & ~0xFF) | ((unsigned int)(1, (((unsigned int)(((unsigned int *)this)[0]) >> 8) & 0xFF) != 1) ) /*0x4a51be*/
      (result) = ((result) & ~0xFF) | ((unsigned int)(0) & 0xFF) /*0x4a51c0*/
    return result) & 0xFF) /*0x4a51c2*/
}
} // namespace gamemd

// 0x4C2C10
namespace gamemd {
UnitClass* UnitClass::updateHarvesting()
{
    int result; // eax

    result = (int)((unsigned int *)this)[0]; /*0x4c2c10*/
    if ( result ) /*0x4c2c17*/
    {
      *(unsigned int *)(result + 1756) = 0; /*0x4c2c19*/
      ((unsigned int *)this)[0] = 0; /*0x4c2c1f*/
    }
    return (gamemd::UnitClass *)(result); /*0x4c2c22*/
}
} // namespace gamemd

// 0x5F43B0
namespace gamemd {
bool AircraftClass::StubReturnFalse3()
{
    int result; // eax

    (result) = ((result) & ~0xFF) | ((unsigned int)(0) & 0xFF) /*0x5f43b0*/
    return result; /*0x5f43b2*/
}
} // namespace gamemd

// 0x5F43C0
namespace gamemd {
bool AircraftClass::StubReturnTrue()
{
    int result; // eax

    return result; /*0x5f43c0*/
}
} // namespace gamemd

// 0x5F43F0
namespace gamemd {
bool AircraftClass::StubReturnFalse4()
{
    int result; // eax

    return result; /*0x5f43f0*/
}
} // namespace gamemd

// 0x5F5DD0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::GetSellPriority()
{
    int result; // eax
    double v3; // st7
    double health; // [esp+4h] [ebp-8h]
    double v5; // [esp+4h] [ebp-8h]
    double v6; // [esp+4h] [ebp-8h]

    health = (double)((unsigned int *)this)[0]; /*0x5f5ddb*/
    if ( health / (double)*(int *)((*((int (__thiscall **)(BuildingClass *))this->vtable1 + 34))(this) + 160) <= *(double *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5896) /*0x5f5e07*/
      && ((unsigned int *)this)[0] > 0 )
    {
      return 0; /*0x5f5e09*/
    }
    v5 = (double)((unsigned int *)this)[0]; /*0x5f5e17*/
    if ( v5 / (double)*(int *)((*((int (__thiscall **)(BuildingClass *))this->vtable1 + 34))(this) + 160) <= *(double *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5896) ) /*0x5f5e3b*/
      return 2; /*0x5f5e3b*/
    v6 = (double)((unsigned int *)this)[0]; /*0x5f5e44*/
    v3 = v6 / (double)*(int *)((*((int (__thiscall **)(BuildingClass *))this->vtable1 + 34))(this) + 160); /*0x5f5e59*/
    result = 1; /*0x5f5e68*/
    if ( v3 > *(double *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5888) ) /*0x5f5e6d*/
      return 2; /*0x5f5e6f*/
    return result; /*0x5f5e0b*/
}
} // namespace gamemd

// 0x5F6500
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::SquaredDistanceTo(ObjectClass* target, int *a2) const  // g57b5 W4: raw 真值补参 (a2)
{
    int *v3; // eax
    int v4; // esi
    int v5; // edx
    int v6; // edi
    unsigned int *v7; // edx
    unsigned int v8[3]; // [esp+4h] [ebp-Ch] BYREF

    if ( !a2 ) /*0x5f650a*/
      return 0; /*0x5f650c*/
    v3 = (int *)(*((int (__thiscall **)(BuildingClass *, unsigned int *))this->vtable1 + 18))((gamemd::BuildingClass *)(this), v8); /*0x5f651e*/
    v4 = *v3; /*0x5f6521*/
    v5 = *a2; /*0x5f6523*/
    v6 = v3[1]; /*0x5f6527*/
    v8[2] = v3[2]; /*0x5f652d*/
    v7 = (unsigned int *)(*(int (__thiscall **)(int *, unsigned int *))(v5 + 72))( (int *)(a2), v8 ); /*0x5f6539*/
    return (v4 - *v7) * (v4 - *v7) + (v6 - v7[1]) * (v6 - v7[1]); /*0x5f650e*/
}
} // namespace gamemd

// 0x6B0300
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::FindPlacementCells2(int* outCell, int inCell, unsigned int *a2, int a3)
{
    int occupant; // ecx
    int v5; // edi
    int v6; // eax
    int FoundationWidth; // eax
    int v8; // ebx
    int v9; // edi
    int FoundationHeight; // ebx
    int v11; // eax
    int v12; // eax
    int v13; // eax
    short *v14; // eax
    int TileIndex; // eax
    int v16; // eax
    short v17; // dx
    int v19; // [esp+Ch] [ebp-Ch] BYREF
    unsigned int v20[2]; // [esp+10h] [ebp-8h] BYREF

    occupant = ((unsigned int *)this)[0]; /*0x6b0308*/
    if ( occupant && (*(int (__thiscall **)(int))(*(unsigned int *)occupant + 44))(occupant) == 6 )
    {
      v5 = ((unsigned int *)this)[0]; /*0x6b0319*/
      if ( v5 )
        v6 = (*(int (__thiscall **)(int))(*(unsigned int *)v5 + 44))(((unsigned int *)this)[0]) == 6 ? v5 : 0;
      else
        v6 = 0; /*0x6b0320*/
      FoundationWidth = BuildingTypeClass::GetFoundationWidth(*(BuildingTypeClass **)(v6 + 1312)); /*0x6b033c*/
      v8 = ((unsigned int *)this)[0]; /*0x6b0341*/
      v9 = FoundationWidth; /*0x6b0344*/
      if ( v8 )
      {
        v11 = (*(int (__thiscall **)(int))(*(unsigned int *)v8 + 44))(((unsigned int *)this)[0]); /*0x6b0360*/
        FoundationHeight = (*(int **)(v11 == 6 ? v8 + 0x520 : 1312))->GetFoundationHeight(0);
      }
      else
      {
        FoundationHeight = BuildingTypeClass_GetFoundationHeight(MEMORY[0x520], 0); /*0x6b0358*/
      }
    }
    else if ( *(unsigned int *)((*(int (__thiscall **)(int))(*(unsigned int *)((unsigned int *)this)[0] + 132))(((unsigned int *)this)[0]) + 1028) ) /*0x6b038a*/
    {
      v12 = (*(int (__thiscall **)(int))(*(unsigned int *)((unsigned int *)this)[0] + 132))(((unsigned int *)this)[0]); /*0x6b0399*/
      v9 = BuildingTypeClass::GetFoundationWidth(*(BuildingTypeClass **)(v12 + 1028)); /*0x6b03af*/
      v13 = (*(int (__thiscall **)(int))(*(unsigned int *)((unsigned int *)this)[0] + 132))(((unsigned int *)this)[0]); /*0x6b03b3*/
      FoundationHeight = (*(int **)(v13 + 1028))->GetFoundationHeight(0); /*0x6b03c4*/
    }
    else
    {
      v9 = 1; /*0x6b03c8*/
      FoundationHeight = 1; /*0x6b03cd*/
    }
    v14 = (short *)(*(int (__thiscall **)(int, int *))(*(unsigned int *)((unsigned int *)this)[0] + 440))(((unsigned int *)this)[0], &v19); /*0x6b03f4*/
    TileIndex = MapClass::GetTileIndex((MapClass *)&stru_87F5F0.__pad_58[416], v14, 0, 0); /*0x6b0400*/
    v16 = *LayerClass::Pathfinding_Find( /*0x6b041c*/
             (Type *)&stru_87F5F0.__pad_58[416],
             (int)v20,
             v20,
             (short *)&a3,
             1,
             TileIndex,
             0,
             0,
             v9,
             FoundationHeight,
             1,
             0,
             0,
             0,
             (short *)&a3,
             0,
             1);
    v20[0] = v16; /*0x6b0424*/
    v17 = (((unsigned int)(v16) >> 16) & 0xFFFF); /*0x6b0428*/
    if ( v16 == dword_B0B5B8 ) /*0x6b042f*/
    {
      *a2 = dword_B0B5B8; /*0x6b0441*/
      return a2; /*0x6b043a*/
    }
    else
    {
      if ( v9 > 2 ) /*0x6b044c*/
      {
        (a3) = ((a3) & ~(0xFFFFULL << 16)) | (((unsigned __int64)(unsigned int)((((unsigned int)(v20[0]) >> 16) & 0xFFFF)) & 0xFFFF) << 16) /*0x6b044f*/
        (a3) = ((a3) & ~0xFFFF) | ((unsigned int)(v16 + 1) & 0xFFFF) /*0x6b0454*/
        v16 = a3; /*0x6b0459*/
        v20[0] = a3; /*0x6b045d*/
        v17 = (((unsigned int)(a3) >> 16) & 0xFFFF); /*0x6b0461*/
      }
      if ( FoundationHeight > 2 ) /*0x6b0468*/
      {
        (a3) = ((a3) & ~0xFFFF) | ((unsigned int)(v16) & 0xFFFF) /*0x6b046b*/
        (a3) = ((a3) & ~(0xFFFFULL << 16)) | (((unsigned __int64)(unsigned int)(v17 + 1) & 0xFFFF) << 16) /*0x6b0470*/
        v16 = a3; /*0x6b0475*/
      }
      *a2 = v16; /*0x6b0480*/
      return a2; /*0x6b0482*/
    }
}
} // namespace gamemd

// 0x6B4F30
namespace gamemd {
int UnitClass::StubReturn176() {
    return 176; /*0x6b4f35*/
}
} // namespace gamemd

// 0x6B4F40
namespace gamemd {
int UnitClass::StubReturn29() {
    return 29; /*0x6b4f45*/
}
} // namespace gamemd

// 0x7105E0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::IsBeingRepairedOrCaptured()
{
    return ((unsigned int *)this)[0] || ((unsigned int *)this)[0]; /*0x7105f6*/
}
} // namespace gamemd

// 0x414290
namespace gamemd {
HRESULT __stdcall AircraftClass::QueryInterface(AbstractClass *a2, void *iid, void **ppv)
{
    int result; // eax

    result = AbstractClass_QueryInterface((void *)this); /*0x4142a2*/
    if ( result < 0 ) /*0x4142a9*/
    {
      if ( !memcmp((const void *)(iid), &IID_IFlyControl, 0x10u) ) /*0x4142b8*/
      {
        if ( a2 ) /*0x4142bf*/
        {
          *ppv = &a2[48]; /*0x4142c8*/
          (*((void (__stdcall **)(AbstractClass *))a2->vtable1 + 1))(a2); /*0x4142cf*/
          return 0; /*0x4142d7*/
        }
        *ppv = 0; /*0x4142dc*/
      }
      (*((void (__stdcall **)(AbstractClass *))a2->vtable1 + 1))(a2); /*0x4142e4*/
      return 0; /*0x4142e7*/
    }
    return result; /*0x4142d4*/
}
} // namespace gamemd

// 0x4142F0
namespace gamemd {
ULONG __stdcall AircraftClass::AddRef() {
    return this->AbstractClass::COMStub_AddRef(); /*0x4142fa*/
}
} // namespace gamemd

// 0x414300
namespace gamemd {
ULONG __stdcall AircraftClass::Release() {
    return this->AbstractClass::COMStub_Release(); /*0x41430a*/
}
} // namespace gamemd

// 0x4151E0
namespace gamemd {
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
               || !*((char *)this->Type + 3221)
               || (*((int (__thiscall **)(AircraftClass *))this->vtable1 + 114))((gamemd::AircraftClass *)(this)) <= 0 )
        {
          if ( ((unsigned int *)this)[0] )
          {
            if ( (*((unsigned __int8 (__thiscall **)(AircraftClass *, AbstractClass *))this->vtable1 + 340))(
                   this,
                   ((unsigned int *)this)[0]) )
            {
              DB = CCINIClass::GetDB((gamemd::AircraftClass *)((unsigned int *)this)[0]); /*0x415334*/
              v14 = DB; /*0x415339*/
              if ( DB /*0x415360*/
                && (v15 = *(unsigned int *)(DB + 1492)) != 0
                && *(unsigned int *)TechnoClass_GetWaypointCoords(*(TechnoClass **)(v15 + 36), &v30) != g_AircraftStatusFlag )
              {
                vtable0 = *(void (__thiscall ***)(AircraftClass *, void *, int))this; /*0x415375*/  // g57e2 W2
                WaypointCoords = (short *)TechnoClass_GetWaypointCoords( /*0x415381*/
                                              *(TechnoClass **)(*(unsigned int *)(v14 + 1492) + 36),
                                              &v31);
                v18 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], WaypointCoords); /*0x41538c*/
 NearbyCell = (void *)(InfantryClass_FindNearbyCell((void *)this, (int)v18)); /*0x415394*/
                vtable0[288]((gamemd::AircraftClass *)(this), NearbyCell, 1); /*0x41539c*/
              }
              else
              {
                v20 = *(void (__thiscall ***)(AircraftClass *, void *, int))this; /*0x4153ad*/  // g57e2 W2
                Waypoint_Location = (short *)ScenarioClass_Get_Waypoint_Location((char *)dword_A8B230, &v32, 700); /*0x4153bb*/
                v22 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], Waypoint_Location); /*0x4153c6*/
 v23 = (void *)(InfantryClass_FindNearbyCell((void *)this, (int)v22)); /*0x4153ce*/
                v20[288]((gamemd::AircraftClass *)(this), v23, 1); /*0x4153d6*/
 team = (TeamClass *)(((unsigned int *)this)[0]); /*0x4153dc*/
                if ( team ) /*0x4153e4*/
                  TeamClass_SelectMember((int)team, (int)((unsigned int *)this)[0]); /*0x4153f1*/
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
          v10 = (*((int (__thiscall **)(AircraftClass *, unsigned char *, unsigned int, unsigned int))this->vtable1 + 330))( (gamemd::AircraftClass *)(/*0x4152cd*/
                  this),
                  ((unsigned char *)this->Type + 1000),
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
            v11[288]((gamemd::AircraftClass *)(this), ClosestPlacementCell, 1); /*0x4152f7*/
          }
        }
        goto LABEL_9; /*0x415250*/
      case 1:
        if ( !*(unsigned int *)&this->Locomotor ) /*0x41542a*/
          sub_7DC720(-2147467261); /*0x415439*/
        if ( !(*(unsigned __int8 (__stdcall **)(int))(*(unsigned int *)((unsigned int *)this)[0] + 16))(((unsigned int *)this)[0]) ) /*0x415447*/
          ((unsigned int *)this)[0] = 2; /*0x41544e*/
        if ( !(*((unsigned __int8 (__thiscall **)(AircraftClass *, AbstractClass *))this->vtable1 + 340))(this, ((unsigned int *)this)[0]) ) /*0x415463*/
          ((gamemd::AircraftClass *)this)[0] = 0; /*0x415471*/
        goto LABEL_9; /*0x41547b*/
      case 2:
        if ( !*(unsigned int *)&this->Locomotor ) /*0x415480*/
          sub_7DC720(-2147467261); /*0x41548f*/
        if ( !(*(unsigned __int8 (__stdcall **)(int))(*(unsigned int *)((unsigned int *)this)[0] + 16))(((unsigned int *)this)[0]) ) /*0x41549d*/
          ((unsigned int *)this)[0] = 3; /*0x4154a4*/
        return 1; /*0x4154ba*/
      case 3:
        if ( !((unsigned int *)this)[0] ) /*0x4154bb*/
        {
          if ( *(unsigned int *)&this->q118 ) /*0x4154c9*/
          {
            if ( *((char *)this->Type + 0xDFC) ) /*0x4154dd*/
            {
              (*((void (__thiscall **)(AircraftClass *, unsigned int))this->vtable1 + 73))((gamemd::AircraftClass *)(this), 0); /*0x4154ed*/
              FootClass_MissionMoveCarryallLand((void *)this); /*0x4154f5*/
              (*((void (__thiscall **)(AircraftClass *, int))this->vtable1 + 73))((gamemd::AircraftClass *)(this), 1); /*0x415500*/
            }
            else
            {
              v26 = LinkedList::Pop((LinkedList *)((unsigned int *)this)[0]); /*0x41551a*/
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
                TeamClass_AddMember((int *)((unsigned int *)this)[0], v26, 0); /*0x415587*/
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
} // namespace gamemd

// 0x41B910
namespace gamemd {
int AircraftClass::MissionStubReturnZero()
{
    return (*((int (__thiscall **)(AircraftClass *))this->vtable1 + 20))(this);
}
} // namespace gamemd

// 0x424B50
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::AimTurret(_BYTE a2)
{
    unsigned char *v3; // ebp
    char isOnMap; // bl
    int v5; // ecx
    char *v6; // edx
    int *v7; // eax
    int v8; // edx
    int (__thiscall **vtable0)(BuildingClass *, unsigned int *); // eax
    int result; // eax
    int *v11; // eax
    int v12; // ebx
    int v13; // ebp
    unsigned int *v14; // eax
    int v15; // ebx
    void (__thiscall **v16)(BuildingClass *, unsigned int *); // edx
    int v17; // ebp
    int v18; // [esp+10h] [ebp-24h] BYREF
    int v19; // [esp+14h] [ebp-20h]
    int v20; // [esp+18h] [ebp-1Ch]
    unsigned char v21[8]; // [esp+1Ch] [ebp-18h] BYREF
    int v22; // [esp+24h] [ebp-10h]
    unsigned char v23[12]; // [esp+28h] [ebp-Ch] BYREF

    v3 = (unsigned char *)*(unsigned int *)&this->q0CC; /*0x424b59*/
    if ( v3 ) /*0x424b61*/
    {
      isOnMap = ((unsigned int *)this)[0]; /*0x424b67*/
      if ( isOnMap ) /*0x424b6c*/
        RemoveTarget((int)this); /*0x424b74*/
      v5 = 0; /*0x424b7f*/
      if ( dword_A8E9B8 > 0 ) /*0x424b83*/
      {
        v6 = (char *)dword_A8E9AC; /*0x424b85*/
        do /*0x424ba5*/
        {
          if ( *(BuildingClass **)v6 != this && *(unsigned int *)(*(unsigned int *)&v6->q_330 == *(unsigned int *)&this->q0CC ) /*0x424b9d*/
            break; /*0x424b9d*/
          ++v5; /*0x424b9f*/
          v6 += 4; /*0x424ba0*/
        }
        while ( v5 < dword_A8E9B8 ); /*0x424ba5*/
      }
      if ( v5 == dword_A8E9B8 ) /*0x424ba9*/
      {
        (*(void (__thiscall **)(unsigned char *))(*(unsigned int *)v3 + 380))(v3); /*0x424bb0*/
        v3[132] = 0; /*0x424bb6*/
      }
      v7 = (int *)(*((int (__thiscall **)(BuildingClass *, unsigned char *))this->vtable1 + 18))(this, v21); /*0x424bc6*/
      v18 = *v7; /*0x424bcb*/
      v19 = v7[1]; /*0x424bd2*/
      v8 = v7[2]; /*0x424bda*/
      vtable0 = *(int (__thiscall ***)(BuildingClass *, unsigned int *))this; /*0x424bdd*/  // g57e2 W2
      v20 = v8; /*0x424be2*/
      *(unsigned int *)&this->q0CC = 0; /*0x424be6*/
      result = vtable0[109](this, (unsigned int *)(&v18)); /*0x424bf0*/
      if ( isOnMap ) /*0x424bf8*/
        result = Targeting::Readd(this); /*0x424c00*/
    }
    if ( a2 ) /*0x424c0b*/
    {
      v11 = (int *)(*((int (__thiscall **)(BuildingClass *, unsigned char *))this->vtable1 + 18))(this, v21); /*0x424c16*/
      v12 = *v11; /*0x424c19*/
      v13 = v11[1]; /*0x424c1c*/
      v22 = v11[2]; /*0x424c22*/
      RemoveTarget((int)this); /*0x424c2b*/
      a2[132] = 1; /*0x424c30*/
      ((unsigned int *)this)[1] = (int)a2; /*0x424c37*/
      v14 = (unsigned int *)(*(int (__thiscall **)(unsigned char *, unsigned char *))(*(unsigned int *)a2 + 72))((unsigned char *)(a2), v23); /*0x424c46*/
      v15 = v12 - *v14; /*0x424c51*/
      v16 = (void (__thiscall **)(BuildingClass *, unsigned int *))this->TechnoClass; /*0x424c5d*/
      v17 = v13 - v14[1]; /*0x424c5f*/
      v20 = v22 - v14[2]; /*0x424c61*/
      v18 = v15; /*0x424c68*/
      v19 = v17; /*0x424c6c*/
      v16[109](this, (unsigned int *)(&v18)); /*0x424c70*/
      return Targeting::Readd(this); /*0x424c7c*/
    }
    return result; /*0x424c81*/
}
} // namespace gamemd

// 0x4260F0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::IsCellPlaceable(int cell_x, int cell_y) const
{
    int result; // eax
    int v4; // ecx
    int v5; // ecx

    result = (int)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2); /*0x426101*/
    if ( (*(unsigned int *)(result + 320) & 0x100) != 0 /*0x426142*/
      && ((unsigned int *)this)[2] - Map_CellHeight * *(char *)(result + 283) > 2 * Map_CellHeight )
    {
      if ( (*(unsigned char *)(result + 296) & 0xE0) != 0 ) /*0x42614b*/
      {
  LABEL_4:
        (result) = ((result) & ~0xFF) | ((unsigned int)(0) & 0xFF) /*0x42614d*/
        return result; /*0x426154*/
      }
    }
    else
    {
      v4 = *(unsigned int *)(result + 236); /*0x426157*/
      switch ( v4 ) /*0x426160*/
      {
        case 3: /*0x426160*/
          goto LABEL_4; /*0x426160*/
        case 10: /*0x426160*/
          goto LABEL_4; /*0x426165*/
        case 4: /*0x426160*/
          goto LABEL_4; /*0x42616a*/
      }
      v5 = *(unsigned int *)(result + 68); /*0x42616c*/
      if ( v5 != -1 ) /*0x426172*/
      {
        if ( *(unsigned char *)(*(unsigned int *)(*(unsigned int *)stru_A83D50.__pad_34 + 4 * v5) + 680) ) /*0x42617e*/
          goto LABEL_4; /*0x42617e*/
      }
      if ( (*(unsigned char *)(result + 292) & 0xE0) != 0 ) /*0x426190*/
        goto LABEL_4; /*0x426190*/
      result = Map_CellHeight * *(char *)(result + 283) - *(unsigned int *)&this->vtable3; /*0x4261b2*/
      if ( result > 2 * Map_CellHeight ) /*0x4261b9*/
        goto LABEL_4; /*0x4261b9*/
    }
    (result) = ((result) & ~0xFF) | ((unsigned int)(1) & 0xFF) /*0x4261bc*/
    return result; /*0x42614d*/
}
} // namespace gamemd

// 0x429A90
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int * BuildingClass::BuildingClass::UpdatePowerAnimation(int a2, __int16 *a3, _DWORD *a4, int a5, int a6, char a7)
{
    short *v7; // edi
    int v8; // ebp
    int v10; // ecx
    int v11; // ebx
    int v12; // eax
    int v13; // eax
    int v14; // ecx
    __int64 v15; // rax
    int v16; // eax
    int v17; // edx
    int v18; // eax
    int v19; // ebp
    float *v20; // edi
    __int64 v21; // rax
    int v22; // eax
    int v23; // ecx
    int v24; // eax
    int *v25; // eax
    int v26; // eax
    int *v27; // eax
    int v28; // ebx
    int v29; // edi
    int v30; // eax
    int v31; // edi
    int v32; // edx
    int v33; // eax
    int v34; // ecx
    int v35; // eax
    int v36; // ebp
    double v37; // st7
    char v38; // fps^1
    double v39; // st6
    bool v40; // c0
    char v41; // c2
    bool v42; // c3
    double v43; // st7
    char v44; // fps^1
    double v45; // st6
    bool v46; // c0
    char v47; // c2
    bool v48; // c3
    unsigned int *v49; // edi
    int v50; // ebx
    int *v51; // edi
    signed int v52; // ecx
    __int64 v53; // rax
    int v54; // ebx
    unsigned int *v55; // edi
    unsigned int v56; // ecx
    unsigned int v57; // edx
    int v58; // ebp
    int v59; // ebx
    unsigned int v60; // eax
    unsigned int v61; // ecx
    unsigned int v62; // edx
    int v63; // ebp
    int v64; // ebx
    unsigned int v65; // ecx
    int v66; // ecx
    int v67; // eax
    __int64 v68; // rax
    int ***v69; // ecx
    int *v70; // edx
    int v71; // edi
    int v72; // ebp
    int v73; // ebx
    int v74; // ecx
    int v75; // eax
    int v76; // edi
    int v77; // ebp
    bool v78; // cc
    int *v79; // ecx
    int v80; // eax
    int v81; // ebx
    int ***v82; // edi
    int v83; // edi
    int v84; // edx
    int v85; // eax
    int v86; // edi
    int v87; // ebp
    int *v88; // eax
    int v89; // ebx
    int *v90; // edi
    int v92; // [esp-2h] [ebp-60h]
    char v93; // [esp+14h] [ebp-4Ah]
    char v94; // [esp+15h] [ebp-49h]
    int ***v95; // [esp+16h] [ebp-48h]
    int v96; // [esp+1Ah] [ebp-44h]
    int v97; // [esp+1Eh] [ebp-40h]
    int *v98; // [esp+22h] [ebp-3Ch]
    int *v99; // [esp+26h] [ebp-38h]
    int *v100; // [esp+26h] [ebp-38h]
    int v101; // [esp+2Ah] [ebp-34h]
    int *v102; // [esp+2Eh] [ebp-30h]
    int *v103; // [esp+2Eh] [ebp-30h]
    int v104; // [esp+32h] [ebp-2Ch]
    short *v105; // [esp+32h] [ebp-2Ch]
    float v106; // [esp+36h] [ebp-28h]
    int v107; // [esp+36h] [ebp-28h]
    int *v108; // [esp+3Ah] [ebp-24h]
    int v109; // [esp+3Eh] [ebp-20h]
    int v110; // [esp+42h] [ebp-1Ch]
    float v111; // [esp+46h] [ebp-18h]
    float v112; // [esp+4Ah] [ebp-14h]
    int v113; // [esp+4Eh] [ebp-10h]
    int v114; // [esp+4Eh] [ebp-10h]
    int ***v115; // [esp+4Eh] [ebp-10h]

    v7 = a3; /*0x429a97*/
    v8 = a2; /*0x429a9b*/
    v101 = 0; /*0x429ab6*/
    v108 = (int *)(*(unsigned int *)&stru_87F5F0.__pad_58[732] + 4 * (*a3 + (a3[1] << 9))); /*0x429aca*/
    v10 = *v108; /*0x429ace*/
    v102 = (int *)(*(unsigned int *)&stru_87F5F0.__pad_58[732] + 4 * (*(short *)a2 + (*(short *)(a2 + 2) << 9))); /*0x429ad3*/
    v104 = *v108; /*0x429ad7*/
    a2 = *v102; /*0x429adf*/
    if ( !a2 || !v10 ) /*0x429aeb*/
      return 0; /*0x429aeb*/
    v11 = (int)a4; /*0x429af1*/
    if ( (*(int (__thiscall **)(unsigned int *))(*a4 + 44))(a4) == 2 || (*(unsigned int *)(v104 + 320) & 0x100) == 0 ) /*0x429b0e*/
      v12 = *(char *)(v104 + 283); /*0x429b1c*/
    else
      v12 = *(char *)(v104 + 283) + 4; /*0x429b17*/
    *(unsigned int *)(this + 52) = v12; /*0x429b23*/
    if ( (*(int (__thiscall **)(int))(*(unsigned int *)v11 + 44))(v11) == 2 || !*(unsigned char *)(v11 + 140) ) /*0x429b32*/
      v13 = *(char *)(a2 + 283); /*0x429b50*/
    else
      v13 = *(char *)(a2 + 283) + 4; /*0x429b47*/
    *(unsigned int *)(this + 48) = v13; /*0x429b57*/
    if ( *(unsigned char *)((*(int (__thiscall **)(int))(*(unsigned int *)v11 + 132))(v11) + 3220) ) /*0x429b64*/
    {
      if ( (*(unsigned int *)(a2 + 320) & 0x100) != 0 ) /*0x429b7b*/
      {
        v14 = *(unsigned int *)(this + 48); /*0x429b97*/
        v15 = *(unsigned int *)(v11 + 164) / dword_89C2D8 - v14; /*0x429ba3*/
        if ( (int)((((unsigned int)((unsigned __int64)(v15) >> 32)) ^ v15) - ((unsigned int)((unsigned __int64)(v15) >> 32))) > 2 ) /*0x429bab*/
          *(unsigned int *)(this + 48) = v14 + 4; /*0x429bb0*/
      }
    }
    v16 = (*(int (__thiscall **)(int))(*(unsigned int *)v11 + 132))(v11); /*0x429bb7*/
    v17 = *(unsigned int *)(this + 64); /*0x429bc3*/
    *(unsigned int *)(this + 44) = *(unsigned int *)(v16 + 1660); /*0x429bc6*/
    *(unsigned int *)(this + 108) = 0; /*0x429bcd*/
    *(unsigned int *)(this + 112) = *(unsigned int *)v8; /*0x429bda*/
    v110 = v17; /*0x429be2*/
    v95 = (int ***)BuildingClass::AddRectToDrawList((BuildingClass *)this, 0, v102, v7, 0.0); /*0x429bef*/
    if ( *(unsigned short *)v8 == *v7 && *(unsigned short *)(v8 + 2) == v7[1] && *(unsigned int *)(this + 48) == *(unsigned int *)(this + 52) ) /*0x429c0a*/
      return 0; /*0x429c0a*/
    if ( *(unsigned int *)(this + 60) ) /*0x429c10*/
      BuildingClass::UpdatePowerAnim((BuildingClass *)this, v11); /*0x429c1a*/
    v18 = *(short *)(a2 + 36) + g_MapCellWidth * *(short *)(a2 + 38); /*0x429c39*/
    if ( *(unsigned int *)(this + 48) <= *(char *)(a2 + 283) ) /*0x429c40*/
    {
      *(unsigned int *)(*(unsigned int *)(this + 24) + 4 * v18) = *(unsigned int *)(this + 40); /*0x429c5d*/
      *(unsigned int *)(*(unsigned int *)(this + 36) + 4 * v18) = 0; /*0x429c63*/
    }
    else
    {
      *(unsigned int *)(*(unsigned int *)(this + 28) + 4 * v18) = *(unsigned int *)(this + 40); /*0x429c48*/
      *(unsigned int *)(*(unsigned int *)(this + 32) + 4 * v18) = 0; /*0x429c4e*/
    }
    v93 = 0; /*0x429c6e*/
    if ( *(unsigned char *)((*(int (__thiscall **)(int))(*(unsigned int *)v11 + 132))(v11) + 3220) ) /*0x429c79*/
    {
      v93 = 1; /*0x429c87*/
      v19 = 0; /*0x429c8c*/
      v20 = (float *)dword_7E3774; /*0x429c8e*/
      do /*0x429d25*/
      {
        v21 = (int)((((unsigned int)((*(unsigned int *)ProgressTimer::GetValue((ProgressTimer *)(v11 + 904), &a2) >> 12) + 1) >> 1) & 7) /*0x429cb0*/
                  - v19);
        v22 = (((unsigned int)((unsigned __int64)(v21) >> 32)) ^ v21) - ((unsigned int)((unsigned __int64)(v21) >> 32)); /*0x429cb3*/
        if ( v22 > 2 && v22 < 6 && v20 != *(float *)&flt_7E3794 ) /*0x429cc5*/
        {
          v23 = v102[*(unsigned int *)v20]; /*0x429cd0*/
          v24 = *(short *)(v23 + 36) + g_MapCellWidth * *(short *)(v23 + 38); /*0x429ce9*/
          if ( *(unsigned int *)(this + 48) <= *(char *)(v23 + 283) + 1 ) /*0x429cf1*/
          {
            *(unsigned int *)(*(unsigned int *)(this + 24) + 4 * v24) = *(unsigned int *)(this + 40); /*0x429d0e*/
            *(unsigned int *)(*(unsigned int *)(this + 36) + 4 * v24) = 0; /*0x429d14*/
          }
          else
          {
            *(unsigned int *)(*(unsigned int *)(this + 28) + 4 * v24) = *(unsigned int *)(this + 40); /*0x429cf9*/
            *(unsigned int *)(*(unsigned int *)(this + 32) + 4 * v24) = 0; /*0x429cff*/
          }
        }
        ++v20; /*0x429d1b*/
        ++v19; /*0x429d1e*/
      }
      while ( (int)v20 <= (int)flt_7E3794 ); /*0x429d25*/
    }
    if ( (*(int (__thiscall **)(int))(*(unsigned int *)v11 + 44))(v11) != 1 /*0x429d42*/
      || (v94 = 1, !*(unsigned char *)(*(unsigned int *)(v11 + 1732) + 3596)) )
    {
      v94 = 0; /*0x429d4c*/
    }
    if ( a6 < 0 ) /*0x429d57*/
      a6 = 65527; /*0x429d59*/
    if ( !v95 ) /*0x429d67*/
    {
  LABEL_156:
      if ( *(unsigned int *)(this + 60) ) /*0x42a442*/
        BuildingClass::UpdatePowerAnim((BuildingClass *)this, v11); /*0x42a44c*/
      return 0; /*0x42a454*/
    }
    do /*0x42a3d8*/
    {
      if ( v101 >= a6 ) /*0x429d79*/
        break; /*0x429d79*/
      v25 = **v95; /*0x429d89*/
      v98 = v25; /*0x429d8d*/
      if ( v25 == v108 && (*v95)[1] == *(int **)(this + 52) ) /*0x429d9b*/
        break; /*0x429d9b*/
      v97 = 0; /*0x429da3*/
      v96 = 0; /*0x429daa*/
      v109 = *(short *)(*v25 + 36) + g_MapCellWidth * *(short *)(*v25 + 38); /*0x429dbe*/
      do /*0x42a1ad*/
      {
        if ( v96 == 8 ) /*0x429dc9*/
        {
          v26 = *(short *)(*v98 + 278); /*0x429dd1*/
          if ( v26 == -1 ) /*0x429ddb*/
          {
            v27 = (int *)&unk_89C2E0; /*0x429e04*/
          }
          else
          {
            a2 = *(unsigned int *)(*(unsigned int *)(*(unsigned int *)((char *)&FootClass_Array + 892) + 4 * v26) + 40); /*0x429de9*/
            v27 = (int *)(*(unsigned int *)&stru_87F5F0.__pad_58[732] + 4 * ((__int16)a2 + (IDA_SHIWORD(a2) << 9))); /*0x429dff*/
          }
        }
        else
        {
          v27 = &v98[(&dword_7E3774)[v96]]; /*0x429e16*/
        }
        v28 = *v27; /*0x429e19*/
        v99 = v27; /*0x429e1b*/
        if ( !*v27 ) /*0x429e21*/
          goto LABEL_107; /*0x429e21*/
        v105 = (short *)(v28 + 36); /*0x429e31*/
        if ( v96 == 8 ) /*0x429e35*/
        {
          v29 = g_MapCellWidth * *(short *)(v28 + 38); /*0x429e48*/
          v30 = *(short *)(v28 + 36); /*0x429e4f*/
        }
        else
        {
          v29 = (&dword_89A304)[v96]; /*0x429e37*/
          v30 = v109; /*0x429e3e*/
        }
        v31 = v30 + v29; /*0x429e52*/
        if ( (*(unsigned int *)(v28 + 320) & 0x100) == 0 /*0x429e78*/
          || (v32 = *(char *)(v28 + 283), v33 = *(unsigned int *)(this + 48), IDA_LOBYTE(a2) = 0, (int)abs32(v33 - v32) <= 1) )
        {
          IDA_LOBYTE(a2) = 1; /*0x429e7a*/
        }
        v34 = *(short *)(*(unsigned int *)&stru_87F5F0.__pad_58[528] /*0x429e9a*/
                         + 10 * CellToTileIndexMap((ObjectClass *)&stru_87F5F0.__pad_58[416], (short *)(v28 + 36)));
        v35 = *(unsigned int *)(this + 40); /*0x429e9d*/
        v113 = v34; /*0x429ea0*/
        if ( *(unsigned int *)(v110 + 4 * v34) != v35 ) /*0x429ea7*/
        {
          if ( !(unsigned char)a2 ) /*0x429eaf*/
            goto LABEL_62; /*0x429eaf*/
          if ( !*(unsigned char *)(v28 + 290) && a7 ) /*0x429ec1*/
            goto LABEL_107; /*0x429ec1*/
        }
        if ( !(unsigned char)a2 ) /*0x429ecd*/
        {
  LABEL_62:
          v36 = 4 * v31; /*0x429f04*/
          v103 = (int *)(4 * v31); /*0x429f0e*/
          if ( *(unsigned int *)(*(unsigned int *)(this + 28) + 4 * v31) == v35 ) /*0x429f15*/
          {
            v35 = *(unsigned int *)(this + 32); /*0x429f1b*/
            v43 = *((float *)v95 + 1) + 1.009; /*0x429f21*/
            v45 = *(float *)(v35 + 4 * v31); /*0x429f27*/
            v46 = v45 < v43; /*0x429f2a*/
            v47 = 0; /*0x429f2a*/
            v48 = v45 == v43; /*0x429f2a*/
            (((v35) >> 8) & 0xFF) = v44; /*0x429f2c*/
            if ( v45 < v43 ) /*0x429f31*/
              goto LABEL_107; /*0x429f31*/
          }
          goto LABEL_64; /*0x429f31*/
        }
        v36 = 4 * v31; /*0x429ed2*/
        v103 = (int *)(4 * v31); /*0x429ed9*/
        if ( *(unsigned int *)(*(unsigned int *)(this + 24) + 4 * v31) == v35 ) /*0x429ee0*/
        {
          v35 = *(unsigned int *)(this + 36); /*0x429ee6*/
          v37 = *((float *)v95 + 1) + 1.009; /*0x429eec*/
          v39 = *(float *)(v35 + 4 * v31); /*0x429ef2*/
          v40 = v39 < v37; /*0x429ef5*/
          v41 = 0; /*0x429ef5*/
          v42 = v39 == v37; /*0x429ef5*/
          (((v35) >> 8) & 0xFF) = v38; /*0x429ef7*/
          if ( v39 < v37 ) /*0x429efc*/
            goto LABEL_107; /*0x429efc*/
        }
  LABEL_64:
        IDA_LOBYTE(v35) = *(unsigned char *)(this + 8); /*0x429f37*/
        v49 = a4; /*0x429f3e*/
        v50 = (*(int (__thiscall **)(unsigned int *, int, int, unsigned int, int, int))(*a4 + 428))( /*0x429f5a*/
                a4,
                v28,
                v96,
                *(unsigned int *)(this + 48),
                *v98,
                v35);
        if ( v93 && v50 < 7 ) /*0x429f67*/
          v50 = 0; /*0x429f69*/
        if ( v96 == 8 ) /*0x429f70*/
        {
          v52 = abs32(*(short *)(*v98 + 38) - v105[1]); /*0x429fc2*/
          v53 = *(short *)(*v98 + 36) - *v105; /*0x429fcd*/
          v107 = (IDA_HIDWORD(v53) ^ v53) - IDA_HIDWORD(v53); /*0x429fd4*/
          if ( v107 <= v52 ) /*0x429fd8*/
            v107 = v52; /*0x429fda*/
          v51 = v99; /*0x429fe2*/
          v106 = (float)v107; /*0x429fe6*/
        }
        else
        {
          v92 = (int)v49; /*0x429f7c*/
          v51 = v99; /*0x429f7d*/
          v106 = ComputeMovementWeight(this, v98, v99, (unsigned char)a2 == 0, v50, v92) * *(float *)(this + 4) + flt_81872C[v96]; /*0x429f9d*/
        }
        if ( v50 >= 7 ) /*0x429fed*/
        {
          if ( v51 == v108 && !v94 ) /*0x42a189*/
          {
            v68 = *(unsigned int *)(this + 48) - *(unsigned int *)(this + 52); /*0x42a193*/
            if ( (int)((IDA_HIDWORD(v68) ^ v68) - IDA_HIDWORD(v68)) <= 1 ) /*0x42a19b*/
              goto LABEL_148; /*0x42a19b*/
          }
        }
        else
        {
          if ( (unsigned char)a2 ) /*0x429ff9*/
          {
            if ( *(unsigned int *)(*(unsigned int *)(this + 24) + v36) == *(unsigned int *)(this + 40) ) /*0x42a006*/
              goto LABEL_107; /*0x42a006*/
          }
          else if ( *(unsigned int *)(*(unsigned int *)(this + 28) + v36) == *(unsigned int *)(this + 40) ) /*0x42a018*/
          {
            goto LABEL_107; /*0x42a018*/
          }
          v54 = BuildingClass::AddRectToDrawList((BuildingClass *)this, v95, v51, a3, v106); /*0x42a035*/
          v100 = (int *)v54; /*0x42a03d*/
          if ( v97 ) /*0x42a041*/
          {
            v55 = *(unsigned int **)(this + 20); /*0x42a052*/
            v56 = *v55 + 1; /*0x42a05c*/
            if ( *v55 == -1 ) /*0x42a05f*/
            {
              v112 = *(float *)(v54 + 8); /*0x42a0d0*/
              v62 = v56 >> 1; /*0x42a0d7*/
              if ( v56 < v55[1] ) /*0x42a0db*/
              {
                for ( ; v56 > 1; v62 >>= 1 ) /*0x42a0e0*/
                {
                  v63 = v55[2]; /*0x42a0e2*/
                  v64 = *(unsigned int *)(v63 + 4 * v62); /*0x42a0e5*/
                  if ( *(float *)(v64 + 8) <= (double)v112 ) /*0x42a0f5*/
                    break; /*0x42a0f5*/
                  *(unsigned int *)(v63 + 4 * v56) = v64; /*0x42a0f7*/
                  v56 = v62; /*0x42a0fb*/
                }
                *(unsigned int *)(v55[2] + 4 * v56) = v100; /*0x42a10b*/
                v65 = v55[3]; /*0x42a110*/
                ++*v55; /*0x42a116*/
                if ( (unsigned int)v100 > v65 ) /*0x42a118*/
                  v55[3] = v100; /*0x42a11a*/
                if ( (unsigned int)v100 < v55[4] ) /*0x42a120*/
                  v55[4] = v100; /*0x42a122*/
              }
            }
            else
            {
              v57 = v56 >> 1; /*0x42a065*/
              v111 = *(float *)(v97 + 8); /*0x42a06a*/
              if ( v56 < v55[1] ) /*0x42a073*/
              {
                if ( v56 <= 1 ) /*0x42a078*/
                {
                  v60 = v97; /*0x42a0a6*/
                }
                else
                {
                  do /*0x42a09a*/
                  {
                    v58 = v55[2]; /*0x42a07a*/
                    v59 = *(unsigned int *)(v58 + 4 * v57); /*0x42a07d*/
                    if ( *(float *)(v59 + 8) <= (double)v111 ) /*0x42a08d*/
                      break; /*0x42a08d*/
                    *(unsigned int *)(v58 + 4 * v56) = v59; /*0x42a08f*/
                    v56 = v57; /*0x42a093*/
                    v57 >>= 1; /*0x42a095*/
                  }
                  while ( v56 > 1 ); /*0x42a09a*/
                  v60 = v97; /*0x42a09c*/
                  v54 = (int)v100; /*0x42a0a0*/
                }
                *(unsigned int *)(v55[2] + 4 * v56) = v60; /*0x42a0ad*/
                v61 = v55[3]; /*0x42a0b2*/
                ++*v55; /*0x42a0b8*/
                if ( v60 > v61 ) /*0x42a0ba*/
                  v55[3] = v60; /*0x42a0bc*/
                if ( v60 < v55[4] ) /*0x42a0c2*/
                  v55[4] = v60; /*0x42a0c4*/
              }
              v97 = v54; /*0x42a0c7*/
            }
          }
          else
          {
            v97 = v54; /*0x42a043*/
          }
          if ( (unsigned char)a2 ) /*0x42a12b*/
          {
            *(int *)((char *)v103 + *(unsigned int *)(this + 24)) = *(unsigned int *)(this + 40); /*0x42a137*/
            v66 = *(unsigned int *)(this + 36); /*0x42a13a*/
          }
          else
          {
            *(int *)((char *)v103 + *(unsigned int *)(this + 28)) = *(unsigned int *)(this + 40); /*0x42a149*/
            v66 = *(unsigned int *)(this + 32); /*0x42a14c*/
          }
          *(int *)((char *)v103 + v66) = v100[1]; /*0x42a156*/
          v67 = *(unsigned int *)(this + 108); /*0x42a159*/
          if ( v113 == *(unsigned short *)(this + 2 * v67 + 190) ) /*0x42a16c*/
          {
            *(unsigned int *)(this + 108) = v67 + 1; /*0x42a173*/
            *(unsigned int *)(this + 112) = *(unsigned int *)v105; /*0x42a178*/
          }
        }
  LABEL_107:
        ++v96; /*0x42a1a1*/
      }
      while ( v96 <= 8 ); /*0x42a1ad*/
      v69 = (int ***)v97; /*0x42a1b3*/
      if ( !v97 ) /*0x42a1b9*/
      {
        v79 = *(int **)(this + 20); /*0x42a2bb*/
        if ( !*v79 ) /*0x42a2be*/
        {
          v95 = 0; /*0x42a2c4*/
          goto LABEL_147; /*0x42a2c8*/
        }
        v80 = v79[2]; /*0x42a2cd*/
        v81 = 1; /*0x42a2d0*/
        v82 = *(int ****)(v80 + 4); /*0x42a2d8*/
        *(unsigned int *)(v80 + 4) = *(unsigned int *)(v80 + 4 * *v79); /*0x42a2db*/
        v115 = v82; /*0x42a2e3*/
        *(unsigned int *)(v79[2] + 4 * *v79) = 0; /*0x42a2e7*/
        v83 = *v79 - 1; /*0x42a2f1*/
        *v79 = v83; /*0x42a2f3*/
        if ( v83 < 2 /*0x42a315*/
          || (v84 = 2, *(float *)(*(unsigned int *)(v79[2] + 4) + 8) <= (double)*(float *)(*(unsigned int *)(v79[2] + 8) + 8)) )
        {
          v84 = 1; /*0x42a317*/
        }
        if ( v83 < 3 || *(float *)(*(unsigned int *)(v79[2] + 4 * v84) + 8) <= (double)*(float *)(*(unsigned int *)(v79[2] + 12) + 8) ) /*0x42a337*/
        {
          if ( v84 == 1 ) /*0x42a343*/
          {
  LABEL_143:
            v69 = v115; /*0x42a3b1*/
  LABEL_144:
            v95 = v69; /*0x42a3b5*/
            goto LABEL_145; /*0x42a3b5*/
          }
        }
        else
        {
          v84 = 3; /*0x42a339*/
        }
        do /*0x42a3af*/
        {
          v85 = v79[2]; /*0x42a345*/
          v86 = *(unsigned int *)(v85 + 4 * v81); /*0x42a34b*/
          *(unsigned int *)(v85 + 4 * v81) = *(unsigned int *)(v85 + 4 * v84); /*0x42a34e*/
          v81 = v84; /*0x42a354*/
          *(unsigned int *)(v79[2] + 4 * v84) = v86; /*0x42a356*/
          v87 = *v79; /*0x42a359*/
          v78 = 2 * v84 <= *v79; /*0x42a362*/
          a2 = 2 * v84 + 1; /*0x42a364*/
          if ( v78 /*0x42a383*/
            && *(float *)(*(unsigned int *)(v79[2] + 4 * v84) + 8) > (double)*(float *)(*(unsigned int *)(v79[2] + 8 * v84) + 8) )
          {
            v84 *= 2; /*0x42a385*/
          }
          if ( a2 <= v87 /*0x42a3a7*/
            && *(float *)(*(unsigned int *)(v79[2] + 4 * v84) + 8) > (double)*(float *)(*(unsigned int *)(v79[2] + 4 * a2) + 8) )
          {
            v84 = a2; /*0x42a3a9*/
          }
        }
        while ( v84 != v81 ); /*0x42a3af*/
        goto LABEL_143; /*0x42a3af*/
      }
      v70 = *(int **)(this + 20); /*0x42a1bf*/
      if ( !*v70 ) /*0x42a1c2*/
        goto LABEL_144; /*0x42a1c2*/
      v71 = v70[2]; /*0x42a1cb*/
      v72 = *(unsigned int *)(v71 + 4); /*0x42a1d1*/
      v114 = v72; /*0x42a1d9*/
      if ( *(float *)(v72 + 8) > (double)*(float *)(v97 + 8) ) /*0x42a1e2*/
        goto LABEL_144; /*0x42a1e2*/
      *(unsigned int *)(v71 + 4) = v97; /*0x42a1e8*/
      v73 = 1; /*0x42a1f0*/
      if ( *v70 < 2 /*0x42a212*/
        || (v74 = 2, *(float *)(*(unsigned int *)(v70[2] + 4) + 8) <= (double)*(float *)(*(unsigned int *)(v70[2] + 8) + 8)) )
      {
        v74 = 1; /*0x42a214*/
      }
      if ( *v70 < 3 || *(float *)(*(unsigned int *)(v70[2] + 4 * v74) + 8) <= (double)*(float *)(*(unsigned int *)(v70[2] + 12) + 8) ) /*0x42a234*/
      {
        if ( v74 != 1 ) /*0x42a240*/
          goto LABEL_118; /*0x42a240*/
      }
      else
      {
        v74 = 3; /*0x42a236*/
        do /*0x42a2ac*/
        {
  LABEL_118:
          v75 = v70[2]; /*0x42a242*/
          v76 = *(unsigned int *)(v75 + 4 * v73); /*0x42a248*/
          *(unsigned int *)(v75 + 4 * v73) = *(unsigned int *)(v75 + 4 * v74); /*0x42a24b*/
          v73 = v74; /*0x42a251*/
          *(unsigned int *)(v70[2] + 4 * v74) = v76; /*0x42a253*/
          v77 = *v70; /*0x42a256*/
          v78 = 2 * v74 <= *v70; /*0x42a25f*/
          a2 = 2 * v74 + 1; /*0x42a261*/
          if ( v78 /*0x42a280*/
            && *(float *)(*(unsigned int *)(v70[2] + 4 * v74) + 8) > (double)*(float *)(*(unsigned int *)(v70[2] + 8 * v74) + 8) )
          {
            v74 *= 2; /*0x42a282*/
          }
          if ( a2 <= v77 /*0x42a2a4*/
            && *(float *)(*(unsigned int *)(v70[2] + 4 * v74) + 8) > (double)*(float *)(*(unsigned int *)(v70[2] + 4 * a2) + 8) )
          {
            v74 = a2; /*0x42a2a6*/
          }
        }
        while ( v74 != v73 ); /*0x42a2ac*/
        v72 = v114; /*0x42a2ae*/
      }
      v95 = (int ***)v72; /*0x42a2b2*/
  LABEL_145:
      if ( v95 ) /*0x42a3bf*/
        *(unsigned int *)(this + 48) = (*v95)[1]; /*0x42a3c6*/
  LABEL_147:
      ++v101; /*0x42a3c9*/
    }
    while ( v95 ); /*0x42a3d8*/
  LABEL_148:
    if ( v101 == 10000 || !v95 || v101 == a6 || (int)v95[3] < 2 ) /*0x42a3fc*/
    {
      v11 = (int)a4; /*0x42a43e*/
      goto LABEL_156; /*0x42a43e*/
    }
    v88 = globalHelper_02AA90((int)v95, a5); /*0x42a406*/
    v89 = (int)a4; /*0x42a40b*/
    v90 = v88; /*0x42a40f*/
    ParsePathDirections((ObjectClass *)this, (int)v88, a4); /*0x42a415*/
    SimplifyPathFilter((ObjectClass *)this, v90, v89); /*0x42a41e*/
    if ( *(unsigned int *)(this + 60) ) /*0x42a423*/
      BuildingClass::UpdatePowerAnim((BuildingClass *)this, v89); /*0x42a42d*/
    return v90; /*0x42a434*/
}
} // namespace gamemd

// 0x42A460
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::AddRectToDrawList(RectangleStruct* rect) const
{
    int uniqueId; // eax
    unsigned int *vtable3; // eax
    int v9; // edx
    int **v10; // edi
    int v11; // eax
    int *v12; // edx
    int v13; // ecx
    int v14; // ebp
    __int64 v15; // rax
    ObjectClass *nextObject; // eax
    unsigned int v18; // ecx
    __int64 v19; // rax
    double v22; // [esp+0h] [ebp-18h]
    int *v23; // [esp+20h] [ebp+8h]

    uniqueId = ((unsigned int *)this)[0]; /*0x42a460*/
    _EBX = a2; /*0x42a46c*/
    _ESI = uniqueId + 16 * (*(unsigned int *)(uniqueId + 0x100000))++; /*0x42a476*/
    vtable3 = ((unsigned int *)this)[0]; /*0x42a47f*/
    v9 = vtable3[393216]; /*0x42a482*/
    vtable3[393216] = v9 + 1; /*0x42a48c*/
    v10 = (int **)&vtable3[3 * v9]; /*0x42a492*/
    *v10 = a3; /*0x42a49b*/
    if ( a2 ) /*0x42a49d*/
    {
      v10[2] = (int *)*a2; /*0x42a4a1*/
      v11 = *a3; /*0x42a4a6*/
      v12 = (int *)*(char *)(*a3 + 283); /*0x42a4aa*/
      v13 = ***a2; /*0x42a4b1*/
      v10[1] = v12; /*0x42a4b3*/
      if ( (*(unsigned int *)(v11 + 320) & 0x100) == 0 ) /*0x42a4c0*/
        goto LABEL_12; /*0x42a4c0*/
      v14 = *(unsigned int *)(v13 + 320) & 0x100; /*0x42a4c8*/
      if ( v14 ) /*0x42a4d2*/
      {
        if ( (*a2)[1] == (int *)(*(char *)(v13 + 283) + 4) ) /*0x42a4e3*/
        {
          v10[1] = v12 + 1; /*0x42a4e8*/
          goto LABEL_12; /*0x42a4eb*/
        }
        v14 = *(unsigned int *)(v13 + 320) & 0x100; /*0x42a4ed*/
      }
      if ( v14 ) /*0x42a4f3*/
        goto LABEL_12; /*0x42a4f3*/
      v15 = *(char *)(v11 + 283) - (int)(*a2)[1] + 3; /*0x42a504*/
      if ( (int)((((unsigned int)((unsigned __int64)(v15) >> 32)) ^ v15) - ((unsigned int)((unsigned __int64)(v15) >> 32))) > 1 ) /*0x42a50c*/
        goto LABEL_12; /*0x42a50c*/
      nextObject = (ObjectClass *)(v10[1] + 1); /*0x42a511*/
    }
    else
    {
      v10[2] = 0; /*0x42a516*/
      nextObject = ((unsigned int *)this)[0]; /*0x42a51d*/
    }
    v10[1] = (int *)nextObject; /*0x42a520*/
  LABEL_12:
    *(unsigned int *)_ESI = v10; /*0x42a523*/
    if ( a2 ) /*0x42a527*/
    {
      __asm /*0x42a529*/
      {
        fld [esp+10h+arg_C]
        fadd dword ptr [ebx+4]
        fstp dword ptr [esi+4]
      }
      *(float *)(_ESI + 4) = _ET1; /*0x42a530*/
      *(unsigned int *)(_ESI + 12) = (char *)a2[3] + 1; /*0x42a537*/
    }
    else
    {
      *(unsigned int *)(_ESI + 4) = 0; /*0x42a53c*/
      *(unsigned int *)(_ESI + 12) = 1; /*0x42a543*/
    }
    v18 = abs32(*(short *)(*a3 + 36) - *a4); /*0x42a56c*/
    v19 = *(short *)(*a3 + 38) - a4[1]; /*0x42a574*/
    v23 = (int *)(v18 * v18 + ((((unsigned int)((unsigned __int64)(v19) >> 32)) ^ v19) - ((unsigned int)((unsigned __int64)(v19) >> 32))) * ((((unsigned int)((unsigned __int64)(v19) >> 32)) ^ v19) - ((unsigned int)((unsigned __int64)(v19) >> 32)))); /*0x42a585*/
    __asm /*0x42a589*/
    {
      fild [esp+18h+arg_4]
      fstp [esp+18h+var_18]; double
    }
    Math::Sqrt(v22); /*0x42a590*/
    __asm { fadd dword ptr [esi+4] } /*0x42a595*/
    __asm { fstp dword ptr [esi+8] }
    *(float *)(_ESI + 8) = _ET1; /*0x42a59e*/
    return _ESI; /*0x42a5a1*/
}
} // namespace gamemd

// 0x42ACF0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::UpdatePowerAnim()
{
    int v2; // eax
    int v3; // esi
    char *v4; // edi
    unsigned int v5; // edx
    short v6; // cx
    short *v7; // ebx
    __int64 v8; // rax
    int *v9; // ebp
    char v10; // al
    int v11; // eax
    int v12; // esi
    int v13; // ebx
    int v14; // eax
    int *v15; // edi
    int v16; // eax
    int v17; // eax
    int v18; // eax
    short v19; // dx
    unsigned int *v20; // esi
    unsigned int *v21; // eax
    int v22; // edi
    int v23; // esi
    unsigned int *v24; // eax
    short v26[2]; // [esp+10h] [ebp-28h] BYREF
    short *v27; // [esp+14h] [ebp-24h]
    short v28[2]; // [esp+18h] [ebp-20h] BYREF
    BuildingClass *v29; // [esp+1Ch] [ebp-1Ch]
    int v30; // [esp+20h] [ebp-18h]
    int v31; // [esp+28h] [ebp-10h]
    short v32[2]; // [esp+2Ch] [ebp-Ch] BYREF
    short v33[2]; // [esp+30h] [ebp-8h] BYREF
    int v34; // [esp+34h] [ebp-4h] BYREF

    (v2) = ((v2) & ~0xFF) | ((unsigned int)(IDA_HIBYTE(this->TechnoClass)) & 0xFF) /*0x42acf3*/
    v29 = this; /*0x42acfc*/
    if ( !(unsigned char)v2 ) /*0x42ad00*/
      return v2; /*0x42ad00*/
    v3 = a2; /*0x42ad06*/
    *(unsigned int *)v28 = *(unsigned int *)(*(int (__thiscall **)(int, int *))(*(unsigned int *)a2 + 440))(a2, &a2); /*0x42ad25*/
    v4 = (char *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v28); /*0x42ad32*/
    v5 = ((unsigned int)((*(unsigned int *)ProgressTimer::GetValue((ProgressTimer *)(v3 + 904), &v34) >> 12) + 1) >> 1) & 7; /*0x42ad4d*/
    v6 = IDA_LOWORD(g_DDrawSurfaceManager.scenario[v5 + 82]) + v28[0]; /*0x42ad50*/
    (v5) = ((v5) & ~0xFFFF) | ((unsigned int)(IDA_HIWORD(g_DDrawSurfaceManager.scenario[v5 + 82])) & 0xFFFF) /*0x42ad5f*/
    IDA_LOWORD(a2) = v6; /*0x42ad67*/
    IDA_HIWORD(a2) = v28[1] + v5; /*0x42ad7b*/
    *(unsigned int *)v32 = a2; /*0x42ad84*/
    v7 = (short *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v32); /*0x42ad8d*/
    v27 = v7; /*0x42ad8f*/
    if ( (*((unsigned int *)v7 + 80) & 0x100) != 0 /*0x42adb8*/
      && ((v8 = v4[283] - *((char *)v7 + 283), (int)((((unsigned int)((unsigned __int64)(v8) >> 32)) ^ v8) - ((unsigned int)((unsigned __int64)(v8) >> 32))) > 3) || *(unsigned char *)(v3 + 140)) )
    {
      v9 = (int *)*((unsigned int *)v7 + 58); /*0x42adc2*/
      v10 = 1; /*0x42adc8*/
    }
    else
    {
      v9 = (int *)*((unsigned int *)v7 + 57); /*0x42adcc*/
      v10 = 0; /*0x42add2*/
    }
    if ( !v9 )
      v9 = (int *)globalHelper_02B080(v7 + 18, (v10 != 0 ? 4 : 0) + *((char *)v7 + 283));
    v11 = *(unsigned int *)v3; /*0x42adf8*/
    IDA_LOBYTE(a2) = 0; /*0x42adfc*/
    v12 = (*(int (__thiscall **)(int))(v11 + 132))(v3); /*0x42ae07*/
    *(unsigned int *)v33 = v12; /*0x42ae0b*/
    if ( v9 ) /*0x42ae0f*/
    {
      while ( 1 ) /*0x42ae15*/
      {
        if ( (*(int (__thiscall **)(int *))(*v9 + 44))(v9) != 1 && (*(int (__thiscall **)(int *))(*v9 + 44))(v9) != 15 ) /*0x42ae2d*/
          goto LABEL_36; /*0x42ae2d*/
        v13 = 0; /*0x42ae39*/
        *(unsigned int *)v26 = v9[342]; /*0x42ae3b*/
        v14 = (*(int (__thiscall **)(int *))(*v9 + 132))(v9); /*0x42ae44*/
        if ( ((unsigned int *)v29)[0] == 2 /*0x42ae74*/
          || v12 != v14
          && *(unsigned int *)(v12 + 1656) > *(unsigned int *)(v14 + 1656)
          && (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], v26, 1) )
        {
          v15 = v9 + 376; /*0x42ae88*/
          if ( (*(int (__thiscall **)(int *))(*v9 + 44))(v9) == 1 ) /*0x42ae8e*/
          {
            if ( *v15 != -1 && v9[377] != -1 ) /*0x42ae9c*/
              goto LABEL_27; /*0x42ae9c*/
          }
          else if ( *v15 != -1 && v9[377] != -1 && v9[378] != -1 ) /*0x42aeef*/
          {
  LABEL_27:
            IDA_LOBYTE(a2) = 1; /*0x42aef1*/
            do /*0x42afb5*/
            {
              if ( v13 >= 24 ) /*0x42aef9*/
                break; /*0x42aef9*/
              v16 = *v15; /*0x42aeff*/
              if ( *v15 == 8 ) /*0x42af04*/
              {
                v17 = *((short *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v26) + 139); /*0x42af15*/
                if ( v17 == -1 ) /*0x42af1f*/
                {
                  v30 = 0; /*0x42af31*/
                  v18 = 0; /*0x42af3b*/
                }
                else
                {
                  v18 = *(unsigned int *)(*(unsigned int *)(*(unsigned int *)((char *)&FootClass_Array + 892) + 4 * v17) + 40); /*0x42af2a*/
                }
              }
              else
              {
                v19 = IDA_HIWORD(g_DDrawSurfaceManager.scenario[v16 + 82]); /*0x42af49*/
                (v31) = ((v31) & ~0xFFFF) | ((unsigned int)(v26[0] + IDA_LOWORD(g_DDrawSurfaceManager.scenario[v16 + 82])) & 0xFFFF) /*0x42af5b*/
                (v31) = ((v31) & ~(0xFFFFULL << 16)) | (((unsigned __int64)(unsigned int)(v26[1] + v19) & 0xFFFF) << 16) /*0x42af60*/
                v18 = v31; /*0x42af65*/
              }
              *(unsigned int *)v26 = v18; /*0x42af69*/
              v20 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v26); /*0x42af80*/
              v21 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v26); /*0x42af88*/
              ++v15; /*0x42af9e*/
              ++v13; /*0x42afad*/
              v21[80] ^= (v21[80] ^ ~v20[80]) & 0x40000; /*0x42afae*/
            }
            while ( *v15 != -1 ); /*0x42afb5*/
            v7 = v27; /*0x42afbb*/
  LABEL_36:
            v9 = (int *)v9[12]; /*0x42afbf*/
            v12 = *(unsigned int *)v33; /*0x42afc2*/
            goto LABEL_20; /*0x42afc6*/
          }
        }
        v9 = (int *)v9[12]; /*0x42ae9e*/
        v7 = v27; /*0x42aea1*/
  LABEL_20:
        if ( !v9 ) /*0x42aea7*/
        {
          if ( !(unsigned char)a2 ) /*0x42aeb3*/
            break; /*0x42aeb3*/
  LABEL_37:
          v22 = -2; /*0x42afcb*/
          do /*0x42b04d*/
          {
            v23 = -2; /*0x42afd0*/
            do /*0x42b047*/
            {
              v30 = *((unsigned int *)v7 + 9); /*0x42afd8*/
              IDA_LOWORD(a2) = v22 + v30; /*0x42afe4*/
              IDA_HIWORD(a2) = v23 + (((unsigned int)(v30) >> 16) & 0xFFFF); /*0x42afe9*/
              *(unsigned int *)v33 = a2; /*0x42affc*/
              v24 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v33); /*0x42b000*/
              if ( *((unsigned char *)v24 + 292) ) /*0x42b005*/
              {
                v31 = v24[9]; /*0x42b017*/
                if ( v31 != *(unsigned int *)v28 ) /*0x42b01b*/
                  v24[80] ^= (v24[80] ^ ~v24[80]) & 0x40000; /*0x42b03d*/
              }
              ++v23; /*0x42b043*/
            }
            while ( v23 < 3 ); /*0x42b047*/
            ++v22; /*0x42b049*/
          }
          while ( v22 < 3 ); /*0x42b04d*/
          v2 = *((unsigned int *)v7 + 80); /*0x42b04f*/
          *((unsigned int *)v7 + 80) = v2 ^ (v2 ^ ~v2) & 0x40000; /*0x42b063*/
          return v2; /*0x42b063*/
        }
      }
    }
    IDA_LOBYTE(v2) = (unsigned char)v29; /*0x42aeb9*/
    if ( *(unsigned int *)&v29->ambientSoundController != 1 ) /*0x42aec1*/
      goto LABEL_37; /*0x42aec1*/
    *(unsigned int *)&v29->ambientSoundController = 0; /*0x42aeca*/
    return v2; /*0x42aec7*/
}
} // namespace gamemd

// 0x43C2D0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::MissionController()
{
    double v1; // st7
    int v2; // ebp
    int result; // eax
    BuildingTypeClass *v5; // eax
    CellClass *captureManager; // ecx
    BuildingClass *v9; // ebx
    CellClass *v10; // ecx
    int v11; // eax
    BuildingTypeClass *v12; // eax
    BuildingTypeClass *v13; // eax
    void (__thiscall **v14)(BuildingClass *, int, unsigned int); // eax
    void (__thiscall **vtable0)(BuildingClass *, int, unsigned int); // eax
    unsigned int *v16; // ebx
    TechnoClass *v17; // edi
    BuildingTypeClass *v18; // eax
    BuildingTypeClass *v19; // eax
    unsigned int v20; // ebp
    unsigned int *v21; // eax
    CellClass *v22; // eax
    CellClass *v23; // ebp
    BuildingTypeClass *v24; // eax
    int Member; // eax
    unsigned int *v26; // ebp
    unsigned int *v27; // eax
    int v28; // ecx
    int v29; // edx
    int v30; // eax
    int v31; // ecx
    int v32; // eax
    BuildingTypeClass *v33; // eax
    unsigned short *v34; // eax
    int i; // ebp
    int v36; // ebx
    BuildingTypeClass *v37; // esi
    int v40; // ecx
    char *v41; // eax
    BuildingTypeClass *Type; // eax
    unsigned int *v43; // edi
    unsigned int *v44; // eax
    int v45; // ecx
    int v46; // edx
    int v47; // eax
    int v48; // ecx
    int v49; // eax
    BuildingTypeClass *v50; // esi
    double v51; // [esp+18h] [ebp-58h]
    double v52; // [esp+18h] [ebp-58h]
    unsigned int *v53; // [esp+20h] [ebp-50h]
    int v54; // [esp+30h] [ebp-40h] BYREF
    int v55; // [esp+34h] [ebp-3Ch]
    int v56; // [esp+38h] [ebp-38h]
    int v57; // [esp+3Ch] [ebp-34h]
    unsigned int v58[3]; // [esp+40h] [ebp-30h] BYREF
    char v59[12]; // [esp+4Ch] [ebp-24h] BYREF
    unsigned char v60[12]; // [esp+58h] [ebp-18h] BYREF
    unsigned char v61[12]; // [esp+64h] [ebp-Ch] BYREF
    TechnoClass *v62; // [esp+74h] [ebp+4h]
    char v63; // [esp+74h] [ebp+4h]
    TechnoClass *v64; // [esp+74h] [ebp+4h]
    TechnoClass *v65; // [esp+78h] [ebp+8h] BYREF
    int v66; // [esp+7Ch] [ebp+Ch]

    v2 = (int)v65; /*0x43c2d5*/
    switch ( (unsigned int)v65 )
    {
      case 3u:
        BuildingClass::StartProduction(this, 1); /*0x43cd05*/
        TechnoClass::Mission_RepairDispatch(v62, v2, v2, v66, v53); /*0x43cd17*/
        return 1; /*0x43cd28*/
      case 8u:
        Type = this->Type; /*0x43cd2b*/
        if ( !Type->UnitRepair && !Type->Bunker ) /*0x43cd3f*/
          goto LABEL_151; /*0x43cd3f*/
        v43 = (unsigned int *)(*((int (__thiscall **)(TechnoClass *, unsigned char *))v62->vtable1 + 18))(v62, v61); /*0x43cd5b*/
        v44 = (unsigned int *)(*((int (__thiscall **)(BuildingClass *, unsigned char *))this->vtable1 + 18))(this, v60); /*0x43cd64*/
        v45 = *v44 - *v43; /*0x43cd6b*/
        v46 = v44[1]; /*0x43cd6d*/
        v47 = v44[2]; /*0x43cd70*/
        v55 = v45; /*0x43cd73*/
        v48 = v43[2]; /*0x43cd7f*/
        v56 = v46 - v43[1]; /*0x43cd82*/
        __asm { fild [esp+58h+var_38] } /*0x43cd88*/
        v57 = v47 - v48; /*0x43cd8c*/
        __asm /*0x43cd90*/
        {
          fild [esp+58h+var_34]
          fild [esp+58h+var_3C]
          fld st
          fmul st, st(1)
          fld st(2)
          fmul st, st(3)
          faddp st(1), st
          fld st(3)
          fmul st, st(4)
          faddp st(1), st
          fstp [esp+58h+var_58]; double
          fstp st
          fstp st
          fstp st
        }
        Math::Sqrt(v52); /*0x43cdb1*/
        (v49) = ((v49) & ~0xFFFF) | ((unsigned int)(Math::RoundToInt(v1)) & 0xFFFF) /*0x43cdb9*/
        if ( v49 < 384 ) /*0x43cdc3*/
          return 1; /*0x43cdc8*/
  LABEL_151:
        TechnoClass::Mission_RepairDispatch(v62, v2, v2, v66, v53); /*0x43cddd*/
        v50 = this->Type; /*0x43cde2*/
        if ( v50->WeaponsFactory || v50->UnitRepair || v50->Bunker ) /*0x43cdfc*/
          return 23; /*0x43ce18*/
        else
          return 1; /*0x43ce09*/
      case 0xBu:
        (*((void (__thiscall **)(BuildingClass *, int, unsigned int))this->vtable1 + 122))(this, 20, 0); /*0x43cc41*/
        goto LABEL_144; /*0x43cc47*/
      case 0xCu:
        if ( (*((int (__thiscall **)(BuildingClass *))this->vtable1 + 97))(this) != 19 ) /*0x43cc59*/
        {
          (*((void (__thiscall **)(BuildingClass *, int, unsigned int))this->vtable1 + 122))(this, 5, 0); /*0x43cc67*/
          if ( this->Type->ConstructionYard ) /*0x43cc73*/
          {
            BuildingClass::ClearAnims(this, 7); /*0x43cc81*/
            BuildingClass::ClearAnims(this, 18); /*0x43cc8a*/
            BuildingClass::GetHealthRatio(this); /*0x43cc91*/
            _EDX = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x43cc96*/
            __asm /*0x43cc9c*/
            {
              fcomp qword ptr [edx+1700h]
              fnstsw ax
            }
            if ( (_AX & 0x4100) != 0 ) /*0x43cca7*/
            {
              v40 = 1; /*0x43ccaf*/
              v41 = &this->Type->__pad_F70[524]; /*0x43ccb4*/
            }
            else
            {
              v40 = 0; /*0x43ccc1*/
              v41 = &this->Type->__pad_F70[508]; /*0x43ccc3*/
            }
            if ( v41 && *v41 ) /*0x43cccc*/
              (this)->PlayAnim(*(int *)&DSurface_ViewBounds.__pad_FC[324], v41, 8, v40, 0, 0); /*0x43ccdb*/
          }
        }
  LABEL_144:
        TechnoClass::Mission_RepairDispatch(v62, v2, v2, v66, v53); /*0x43cce0*/
        return 1; /*0x43cced*/
      case 0xDu:
        if ( !this->Type->WeaponsFactory ) /*0x43ce32*/
          return TechnoClass::Mission_RepairDispatch(v62, v2, v2, v66, v53); /*0x43ce32*/
        return 1; /*0x43ce40*/
      case 0xEu:
        v16 = (unsigned int *)v66; /*0x43c7e9*/
        v17 = v62; /*0x43c7ed*/
        TechnoClass::Mission_RepairDispatch(v62, (int)v65, (int)v65, v66, v53); /*0x43c7f6*/
        if ( !this->HasPower ) /*0x43c7fb*/
          return 10; /*0x43c811*/
        if ( this->Type->UnitRepair ) /*0x43c81a*/
        {
          if ( (unsigned __int8)Array::Contains((Array *)this, (int)v62) ) /*0x43c827*/
          {
            result = (*((int (__thiscall **)(BuildingClass *, int, TechnoClass *))this->vtable1 + 158))(this, 34, v62); /*0x43c837*/
            if ( result == 10 ) /*0x43c840*/
              return result; /*0x43c840*/
          }
        }
        if ( this->Type->Bunker /*0x43c86a*/
          && (unsigned __int8)Array::Contains((Array *)this, (int)v62)
          && !TechnoClass::CanSelfRepair(v62) )
        {
          return 10; /*0x43c87f*/
        }
        v18 = this->Type; /*0x43c882*/
        if ( !v18->Hospital && !v18->Armory )
        {
          if ( !(unsigned __int8)Array::Contains((Array *)this, (int)v62) /*0x43c8b3*/
            && (unsigned __int8)Array::ContainsValue((Array *)this, (int)v62) )
          {
            (*((void (__thiscall **)(BuildingClass *, int, TechnoClass *))this->vtable1 + 158))(this, 2, v62); /*0x43c8c3*/
            Array::Contains((Array *)this, (int)v62); /*0x43c8cc*/
          }
          v63 = 0; /*0x43c8d4*/
          if ( (unsigned __int8)Array::Contains((Array *)this, (int)v17) )
          {
            v19 = this->Type; /*0x43c8e2*/
            if ( v19->DockUnload || v19->Weeder )
            {
              v20 = v17 ? ((((unsigned int *)v17)[0] & 4) != 0 ? (unsigned int)v17 : 0) : 0;
              v21 = (unsigned int *)(*((int (__thiscall **)(BuildingClass *, char *, unsigned int))this->vtable1 + 42))( /*0x43c91b*/
                                this,
                                v59,
                                v20);
              v22 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v21); /*0x43c927*/
              v23 = *(CellClass **)(v20 + 1444); /*0x43c92c*/
              if ( v23 ) /*0x43c934*/
              {
                if ( v22 != v23 ) /*0x43c938*/
                  v63 = 1; /*0x43c93a*/
              }
            }
          }
          if ( Team::GetMember((Team *)this, 0) ) /*0x43c943*/
          {
            v24 = this->Type; /*0x43c950*/
            if ( v24->UnitRepair || v24->Bunker ) /*0x43c960*/
            {
              Member = Team::GetMember((Team *)this, 0); /*0x43c972*/
              v26 = (unsigned int *)(*(int (__thiscall **)(int, unsigned char *))(*(unsigned int *)Member + 72))(Member, v60); /*0x43c985*/
              v27 = (unsigned int *)(*((int (__thiscall **)(BuildingClass *, unsigned char *))this->vtable1 + 18))(this, v61); /*0x43c98e*/
              v28 = *v27 - *v26; /*0x43c996*/
              v29 = v27[1]; /*0x43c998*/
              v30 = v27[2]; /*0x43c99b*/
              v55 = v28; /*0x43c99e*/
              v31 = v26[2]; /*0x43c9aa*/
              v56 = v29 - v26[1]; /*0x43c9ad*/
              __asm { fild [esp+58h+var_38] } /*0x43c9b3*/
              v57 = v30 - v31; /*0x43c9b7*/
              __asm /*0x43c9bb*/
              {
                fild [esp+58h+var_34]
                fild [esp+58h+var_3C]
                fld st
                fmul st, st(1)
                fld st(2)
                fmul st, st(3)
                faddp st(1), st
                fld st(3)
                fmul st, st(4)
                faddp st(1), st
                fstp [esp+58h+var_58]; double
                fstp st
                fstp st
                fstp st
              }
              Math::Sqrt(v51); /*0x43c9dc*/
              IDA_LOWORD(v32) = Math::RoundToInt(v1); /*0x43c9e4*/
              if ( v32 > 128 ) /*0x43c9ee*/
                v63 = 1; /*0x43c9f0*/
            }
          }
          if ( (*((int (__thiscall **)(BuildingClass *, int, TechnoClass *))this->vtable1 + 158))(this, 19, v17) == 1 /*0x43ca0d*/
            || v63 )
          {
            *v16 = this; /*0x43ca13*/
            v33 = this->Type; /*0x43ca15*/
            if ( v33->DockUnload || v33->Weeder ) /*0x43ca25*/
            {
              v34 = (unsigned short *)(*((int (__thiscall **)(BuildingClass *, int *))this->vtable1 + 110))(this, &v54); /*0x43ca7a*/
              IDA_LOWORD(v64) = *v34 + 3; /*0x43ca8d*/
              IDA_HIWORD(v64) = v34[1] + 1; /*0x43ca92*/
              v65 = v64; /*0x43ca9f*/
              *v16 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (short *)&v65); /*0x43caae*/
              if ( (*((int (__thiscall **)(BuildingClass *, int, unsigned int *, TechnoClass *))this->vtable1 + 159))( /*0x43cac1*/
                     this,
                     18,
                     v16,
                     v17) == 20 )
              {
                (*((void (__thiscall **)(BuildingClass *, int, TechnoClass *))this->vtable1 + 158))(this, 24, v17); /*0x43cace*/
                if ( (*((int (__thiscall **)(BuildingClass *, int, TechnoClass *))this->vtable1 + 158))(this, 22, v17) != 1 ) /*0x43cae4*/
                {
                  (*((void (__thiscall **)(TechnoClass *, unsigned int *, int, int))v17->vtable1 + 93))( /*0x43caf7*/
                    v17,
                    &g_BuildingClassPool,
                    1,
                    1);
                  return 1; /*0x43cb09*/
                }
              }
            }
            else if ( v33->Helipad ) /*0x43ca2f*/
            {
              *v16 = this; /*0x43ca3d*/
              if ( (*((int (__thiscall **)(BuildingClass *, int, unsigned int *, TechnoClass *))this->vtable1 + 159))( /*0x43ca50*/
                     this,
                     18,
                     v16,
                     v17) == 20 )
              {
                (*((void (__thiscall **)(BuildingClass *, int))this->vtable1 + 157))(this, 24); /*0x43ca5c*/
                return 1; /*0x43ca6e*/
              }
            }
          }
          return 1; /*0x43ca50*/
        }
        if ( (unsigned __int8)Array::ContainsValue((Array *)this, (int)v62) ) /*0x43cb0f*/
        {
          v58[0] = ((unsigned int *)this)[0]; /*0x43cb83*/
          v58[1] = *(unsigned int *)&this->vtable3; /*0x43cb94*/
          v58[2] = *(unsigned int *)&this->vtable3; /*0x43cb9b*/
          *v16 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v58); /*0x43cba4*/
          (*((void (__thiscall **)(BuildingClass *, int, unsigned int *, TechnoClass *))this->vtable1 + 159))( /*0x43cbae*/
            this,
            18,
            v16,
            v62);
          return 1; /*0x43cbc0*/
        }
        for ( i = 0; i < ((unsigned int *)this)[2]; ++i ) /*0x43cb22*/
        {
          v36 = Team::GetMember((Team *)this, i); /*0x43cb2c*/
          if ( (*((int (__thiscall **)(BuildingClass *, int, int))this->vtable1 + 158))(this, 34, v36) == 10 ) /*0x43cb3e*/
            (*((void (__thiscall **)(BuildingClass *, int, int))this->vtable1 + 158))(this, 23, v36); /*0x43cb47*/
        }
        if ( !(unsigned __int8)Array::ContainsValue((Array *)this, (int)v62) ) /*0x43cb5b*/
          return 10; /*0x43cb62*/
        return 1; /*0x43cb62*/
      case 0xFu:
        TechnoClass::Mission_RepairDispatch(v62, (int)v65, (int)v65, v66, v53); /*0x43c305*/
        if ( !(unsigned __int8)((ObjectClass *)((unsigned int *)this)[0])->IsAlliedWithObjectHouse((int)v62) ) /*0x43c311*/
          return 0; /*0x43c318*/
        if ( (*((int (__thiscall **)(BuildingClass *))this->vtable1 + 97))(this) == 18 ) /*0x43c333*/
          return 10; /*0x43c333*/
        if ( (*((int (__thiscall **)(BuildingClass *))this->vtable1 + 97))(this) == 19 ) /*0x43c346*/
          return 10; /*0x43c346*/
        if ( !this->BuildingClass_field_int_534 ) /*0x43c34c*/
          return 10; /*0x43c34c*/
        if ( !dword_A8E7AC && !(unsigned __int8)Array::ContainsValue((Array *)this, (int)v62) ) /*0x43c366*/
        {
          v5 = this->Type; /*0x43c36f*/
          if ( !v5->UnitAbsorb && !v5->InfantryAbsorb ) /*0x43c37f*/
            return 10; /*0x43c387*/
        }
        if ( *(unsigned int *)((*((int (__thiscall **)(TechnoClass *))v62->vtable1 + 33))(v62) + 1460) != 5 /*0x43c3e6*/
          && (*(unsigned char *)((*((int (__thiscall **)(BuildingClass *))this->vtable1 + 33))(this) + 3278)
           && !*(unsigned char *)((*((int (__thiscall **)(TechnoClass *))v62->vtable1 + 33))(v62) + 3278)
           || !*(unsigned char *)((*((int (__thiscall **)(BuildingClass *))this->vtable1 + 33))(this) + 3278)
           && *(unsigned char *)((*((int (__thiscall **)(TechnoClass *))v62->vtable1 + 33))(v62) + 3278)) )
        {
          return 10; /*0x43c3fc*/
        }
        if ( *(unsigned char *)((*((int (__thiscall **)(TechnoClass *))v62->vtable1 + 33))(v62) + 3434) ) /*0x43c409*/
          return 10; /*0x43c41f*/
        if ( !this->HasPower ) /*0x43c422*/
          return 10; /*0x43c438*/
        _EBX = this->Type; /*0x43c43b*/
        if ( !_EBX->UnitAbsorb && !_EBX->InfantryAbsorb ) /*0x43c453*/
          goto LABEL_33; /*0x43c453*/
        if ( (*((int (__thiscall **)(TechnoClass *))v62->vtable1 + 11))(v62) == 1 && !this->Type->UnitAbsorb /*0x43c487*/
          || (*((int (__thiscall **)(TechnoClass *))v62->vtable1 + 11))(v62) == 15 && !this->Type->InfantryAbsorb )
        {
          return 10; /*0x43c49d*/
        }
        captureManager = (CellClass *)v62->captureManager; /*0x43c4a0*/
        if ( captureManager && (unsigned __int8)CellClass::HasContent(captureManager) ) /*0x43c4aa*/
          return 10; /*0x43c4bf*/
        _EBX = this->Type; /*0x43c4c2*/
        if ( ((unsigned int *)this)[0] + 1 <= ((unsigned int *)_EBX)[0] ) /*0x43c4d5*/
        {
          _EAX = (*((int (__thiscall **)(TechnoClass *))v62->vtable1 + 33))(v62); /*0x43c4db*/
          __asm /*0x43c4e1*/
          {
            fld qword ptr [eax+380h]
            fcomp qword ptr [ebx+388h]
            fnstsw ax
          }
          if ( (_EAX & 0x4100) != 0 ) /*0x43c4f2*/
            return 1; /*0x43c4f2*/
        }
  LABEL_33:
        if ( _EBX->Grinding ) /*0x43c4f8*/
          return 1; /*0x43c500*/
        if ( _EBX->Bunker ) /*0x43c506*/
        {
          if ( TechnoClass::CanSelfRepair(v62) /*0x43c52f*/
            && (*((int (__thiscall **)(BuildingClass *, int, TechnoClass *))this->vtable1 + 158))(this, 35, v62) != 1 )
          {
            return 1; /*0x43c541*/
          }
          return 10; /*0x43cb74*/
        }
        if ( _EBX->UnitRepair ) /*0x43c544*/
        {
          if ( ((*((int (__thiscall **)(TechnoClass *))v62->vtable1 + 11))(v62) == 1 /*0x43c57a*/
             || (*((int (__thiscall **)(TechnoClass *))v62->vtable1 + 11))(v62) == 2)
            && (*((int (__thiscall **)(BuildingClass *, int, TechnoClass *))this->vtable1 + 158))(this, 35, v62) != 1 )
          {
            return 1; /*0x43c58c*/
          }
          return 10; /*0x43c57a*/
        }
        if ( !_EBX->Armory && !_EBX->Hospital || (*((int (__thiscall **)(TechnoClass *))v62->vtable1 + 11))(v62) != 15 )
        {
          v12 = this->Type; /*0x43c620*/
          if ( v12->Helipad )
            return (*((int (__stdcall **)(void **))((unsigned int *)v62)[0] + 3))(&((unsigned int *)v62)[0]) != 2 ? 10 : 1;
          if ( !v12->DockUnload /*0x43c682*/
            || (*((int (__thiscall **)(TechnoClass *))v62->vtable1 + 11))(v62) != 1
            || !*(unsigned char *)(v62[1].ironTintTimer[2] + 3598)
            || !dword_A8E7AC && ((unsigned int *)this)[1] )
          {
            if ( !this->Type->Weeder /*0x43c6ba*/
              || (*((int (__thiscall **)(TechnoClass *))v62->vtable1 + 11))(v62) != 1
              || !*(unsigned char *)(v62[1].ironTintTimer[2] + 3599) )
            {
              return 0; /*0x43c6c2*/
            }
            if ( !dword_A8E7AC ) /*0x43c6cf*/
              return !*(unsigned int *)&this->q184; /*0x43c323*/
          }
          return 1; /*0x43ccfe*/
        }
        if ( v62 )
          v9 = (*((int (__thiscall **)(TechnoClass *))v62->vtable1 + 11))(v62) == 15 ? (BuildingClass *)v62 : 0;
        else
          v9 = 0; /*0x43c5b3*/
        v10 = (CellClass *)((unsigned int *)v9)[0]; /*0x43c5cb*/
        if ( v10 && (unsigned __int8)CellClass::HasContent(v10) ) /*0x43c5d5*/
          return 10; /*0x43c5e1*/
        if ( (unsigned __int8)BuildingClass::IsBeingRepairedOrCaptured(v9) ) /*0x43c5ef*/
          return 10; /*0x43c5fb*/
        v11 = -(((unsigned int *)this)[0] != 0); /*0x43c610*/
        IDA_LOBYTE(v11) = v11 & 0xF7; /*0x43c613*/
        return v11 + 10;
      case 0x10u:
        if ( ((unsigned int *)this)[1] /*0x43cbf4*/
          || !(unsigned __int8)Array::ContainsValue((Array *)this, (int)v62)
          || ((unsigned int *)this)[0]
          || ((unsigned int *)this)[0] != (HouseClass *)(*((int (__thiscall **)(TechnoClass *))v62->vtable1 + 15))(v62) )
        {
          return 10; /*0x43cbf4*/
        }
        v37 = this->Type; /*0x43cbfa*/
        if ( v37->Refinery || v37->UnitRepair ) /*0x43cc0e*/
          return 1; /*0x43cc16*/
        if ( !v37->Weeder ) /*0x43cc24*/
          return 10; /*0x43cc24*/
        return 1; /*0x43cc36*/
      case 0x15u:
        if ( (*((int (__thiscall **)(BuildingClass *))this->vtable1 + 97))(this) == 19 ) /*0x43c6ff*/
          return 10; /*0x43c70d*/
        v13 = this->Type; /*0x43c710*/
        if ( v13->UnitAbsorb || v13->InfantryAbsorb ) /*0x43c724*/
          return 1; /*0x43c72c*/
        if ( v13->UnitRepair || v13->UnitReload || v13->Hospital || v13->Armory ) /*0x43c750*/
        {
          vtable0 = (void (__thiscall **)(BuildingClass *, int, unsigned int))this->TechnoClass; /*0x43c7b5*/
          this->BuildingClass_field_bool_6DD = 1; /*0x43c7bd*/
          vtable0[122](this, 20, 0); /*0x43c7c4*/
          (*((void (__thiscall **)(TechnoClass *, unsigned int, unsigned int))v62->vtable1 + 122))(v62, 0, 0); /*0x43c7d4*/
          return 1; /*0x43c7dd*/
        }
        else if ( v13->Bunker ) /*0x43c75a*/
        {
          v14 = (void (__thiscall **)(BuildingClass *, int, unsigned int))this->TechnoClass; /*0x43c764*/
          this->BuildingClass_field_bool_6DD = 1; /*0x43c76c*/
          v14[122](this, 20, 0); /*0x43c773*/
          return 1; /*0x43c77c*/
        }
        else if ( v13->DockUnload ) /*0x43c788*/
        {
          (*((void (__thiscall **)(TechnoClass *, int, unsigned int))v62->vtable1 + 122))(v62, 16, 0); /*0x43c7a0*/
          return 1; /*0x43c7a9*/
        }
        else
        {
          return TechnoClass::Mission_RepairDispatch(v62, v2, v2, v66, v53); /*0x43ce43*/
        }
      default:
        return TechnoClass::Mission_RepairDispatch(v62, v2, v2, v66, v53);
    }
}
} // namespace gamemd

// 0x43CEA0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::DrawFactoryProduction(Point2D* screen_pos, RectangleStruct* bounds, int frame) const
{
    int result; // eax
    int *v3; // eax
    int v4; // ebx
    char *v5; // ebp
    unsigned int *v6; // eax
    int v7; // edx
    int v8; // ecx
    int v9; // ebx
    int v10; // ebp
    int v11; // ebx
    unsigned int *v12; // eax
    int v13; // ecx
    int v14; // [esp+10h] [ebp-18h] BYREF
    int v15; // [esp+14h] [ebp-14h]
    unsigned int v16[4]; // [esp+18h] [ebp-10h] BYREF
    int *v17; // [esp+2Ch] [ebp+4h]
    char v18; // [esp+30h] [ebp+8h]
    char v19; // [esp+34h] [ebp+Ch]

    if ( !*(unsigned int *)((char *)&stru_A8EB00 + 619) ) /*0x43ceb0*/
    {
      result = (int)g_hWnd; /*0x43ceb2*/
      if ( g_hWnd ) /*0x43ceb9*/
      {
        if ( !v18 && !((unsigned int *)this)[0] || !((unsigned int *)this)[0] || ((unsigned int *)this)[0] ) /*0x43cedc*/
          goto LABEL_20; /*0x43cedc*/
      }
    }
    ((unsigned int *)this)[0] = 0; /*0x43cefd*/
    v3 = ClipRectIntersection(v16, v17, &DSurface_ViewBounds.field_0, 0, 0); /*0x43cf04*/
    *v17 = *v3; /*0x43cf0d*/
    v17[1] = v3[1]; /*0x43cf12*/
    v17[2] = v3[2]; /*0x43cf18*/
    v17[3] = v3[3]; /*0x43cf1e*/
    v4 = DSurface_ViewBounds.field_0; /*0x43cf23*/
    v5 = (char *)DSurface_ViewBounds.field_4; /*0x43cf29*/
    v6 = (unsigned int *)(*((int (__thiscall **)(BuildingClass *, unsigned int *))this->vtable1 + 75))(this, v16); /*0x43cf36*/
    v7 = v6[1]; /*0x43cf3e*/
    v8 = v4 + *v6; /*0x43cf41*/
    v9 = v6[2]; /*0x43cf43*/
    result = v6[3]; /*0x43cf46*/
    v10 = (int)&v5[v7]; /*0x43cf49*/
    if ( *v17 >= v8 + v9 ) /*0x43cf51*/
      goto LABEL_20; /*0x43cf51*/
    v11 = v17[1]; /*0x43cf57*/
    result += v10; /*0x43cf5a*/
    if ( v11 < result && (result = *v17 + v17[2], result > v8) && v11 + v17[3] > v10 ) /*0x43cf78*/
    {
      v12 = (unsigned int *)(*((int (__thiscall **)(BuildingClass *, unsigned int *))this->vtable1 + 43))(this, v16); /*0x43cf8c*/
      Coord::To_Screen((Coord *)g_TacticalClass_Instance, v12, &v14); /*0x43cf99*/
      if ( *v17 > DSurface_ViewBounds.field_0 ) /*0x43cfa7*/
        v14 += DSurface_ViewBounds.field_0 - *v17; /*0x43cfb1*/
      v13 = v17[1]; /*0x43cfb5*/
      result = (int)DSurface_ViewBounds.field_4; /*0x43cfb8*/
      if ( v13 > (int)DSurface_ViewBounds.field_4 ) /*0x43cfbf*/
      {
        result = (int)DSurface_ViewBounds.field_4 - v13; /*0x43cfc1*/
        v15 += (int)DSurface_ViewBounds.field_4 - v13; /*0x43cfc9*/
      }
      if ( v19 ) /*0x43cfd3*/
      {
        if ( !this->IsFogged ) /*0x43cfd5*/
        {
          result = (*((int (__thiscall **)(BuildingClass *, int *, int *))this->vtable1 + 313))(this, &v14, v17); /*0x43cfe9*/
          (result) = ((result) & ~0xFF) | ((unsigned int)(1) & 0xFF) /*0x43cff2*/
          return result; /*0x43cff8*/
        }
      }
      else
      {
        result = (*((int (__thiscall **)(BuildingClass *, int *, int *))this->vtable1 + 69))(this, &v14, v17); /*0x43d005*/
      }
      (result) = ((result) & ~0xFF) | ((unsigned int)(1) & 0xFF) /*0x43d00e*/
    }
    else
    {
  LABEL_20:
      (result) = ((result) & ~0xFF) | ((unsigned int)(0) & 0xFF) /*0x43d01a*/
    }
    return result; /*0x43cfef*/
}
} // namespace gamemd

// 0x43D030
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::DisplayProductionFrame()
{
    int v2; // edx
    int (__thiscall **vtable0)(BuildingClass *); // eax
    int result; // eax
    int v5; // ebp
    int Type; // eax
    int *v7; // ebx
    int v8; // ecx
    int v9; // edi
    int v10; // eax
    short *v11; // eax
    int v12; // eax
    int ProductionFrame; // eax
    int v14; // eax
    int v15; // ecx
    int v16; // ebp
    int v17; // ebp
    int v18; // edx
    short *v19; // eax
    int v20; // eax
    int v21; // eax
    int v22; // [esp+30h] [ebp-3Ch]
    int v23; // [esp+38h] [ebp-34h]
    int v24; // [esp+44h] [ebp-28h] BYREF
    short v25[2]; // [esp+48h] [ebp-24h] BYREF
    int v26; // [esp+4Ch] [ebp-20h]
    int v27; // [esp+50h] [ebp-1Ch]
    int v28; // [esp+54h] [ebp-18h]
    int v29; // [esp+58h] [ebp-14h]
    int v30; // [esp+5Ch] [ebp-10h]
    int v31; // [esp+60h] [ebp-Ch]
    int v32; // [esp+64h] [ebp-8h]
    unsigned int *v33; // [esp+68h] [ebp-4h]
    int v34; // [esp+70h] [ebp+4h] BYREF
    int *v35; // [esp+74h] [ebp+8h]
    __int64 v36; // [esp+78h] [ebp+Ch] BYREF
    char v37; // [esp+80h] [ebp+14h] BYREF

    v2 = *(unsigned int *)(*((int (__thiscall **)(BuildingClass *, int *))this->vtable1 + 110))(this, &v24); /*0x43d046*/
    vtable0 = (int (__thiscall **)(BuildingClass *))this->TechnoClass; /*0x43d048*/
    *(unsigned int *)v25 = v2; /*0x43d04c*/
    result = vtable0[27](this); /*0x43d050*/
    v5 = result; /*0x43d053*/
    v24 = result; /*0x43d057*/
    if ( result ) /*0x43d05b*/
    {
      (result) = ((result) & ~0xFF) | ((unsigned int)(this->Type->InvisibleInGame) & 0xFF) /*0x43d067*/
      if ( !(unsigned char)result ) /*0x43d06f*/
      {
        if ( (*((int (__thiscall **)(BuildingClass *))this->vtable1 + 97))(this) != 24 /*0x43d091*/
          || (result = Flag::CheckNone((Flag *)((unsigned int *)this)[0]), (unsigned char)result) )
        {
          if ( (*((int (__thiscall **)(BuildingClass *))this->vtable1 + 97))(this) == 16 /*0x43d0ac*/
            && *(unsigned int *)&this->Type->__pad_F70[1396] )
          {
            Type = AbstractClass::GetType((AbstractClass *)this->Factory); /*0x43d0bc*/
            if ( Type && *(unsigned char *)((*(int (__thiscall **)(int))(*(unsigned int *)Type + 132))(Type) + 3476) ) /*0x43d0cf*/
              v5 = *(unsigned int *)&this->Type->__pad_F70[1420]; /*0x43d0df*/
            else
              v5 = *(unsigned int *)&this->Type->__pad_F70[1396]; /*0x43d0ed*/
            v24 = v5; /*0x43d0f3*/
          }
          v7 = v35; /*0x43d0fc*/
          v8 = *(unsigned int *)(v34 + 4); /*0x43d103*/
          v28 = *(unsigned int *)v34; /*0x43d106*/
          v29 = v8; /*0x43d10a*/
          v34 = *(short *)(v5 + 4); /*0x43d112*/
          v9 = v8 - v34 / 2; /*0x43d11d*/
          v30 = *v35; /*0x43d123*/
          v31 = v35[1]; /*0x43d12a*/
          v32 = v35[2]; /*0x43d131*/
          v33 = (unsigned int *)v35[3]; /*0x43d13a*/
          v10 = (int)v33; /*0x43d135*/
          if ( (int)v33 > v9 ) /*0x43d13e*/
          {
            v10 = v8 - v34 / 2; /*0x43d140*/
            v33 = (unsigned int *)v10; /*0x43d142*/
          }
          if ( v10 > 0 ) /*0x43d148*/
          {
            v11 = (short *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v25); /*0x43d15e*/
            v12 = (*((int (__thiscall **)(BuildingClass *, int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int))this->TechnoClass /*0x43d173*/
                   + 116))(
                    this,
                    2,
                    0,
                    v11[133],
                    0,
                    0,
                    0,
                    0,
                    0,
                    0);
            v22 = -2 - ZCoordToScreenY(v12); /*0x43d18f*/
            ProductionFrame = BuildingClass::GetProductionFrame(this); /*0x43d19b*/
            ((void (__thiscall *)(BuildingClass *, int, int, __int64 *, char *, unsigned int, int, int))loc_705E00)( /*0x43d1a4*/
              this,
              v5,
              ProductionFrame,
              &v36,
              &v37,
              0,
              256,
              v22);
            v8 = v29; /*0x43d1a9*/
          }
          v27 = v8; /*0x43d1af*/
          v14 = *v7; /*0x43d1b5*/
          v27 = v8 - v9; /*0x43d1b7*/
          v30 = v14; /*0x43d1bb*/
          v15 = v7[1]; /*0x43d1bf*/
          result = v9 + v15; /*0x43d1c5*/
          v16 = v7[2]; /*0x43d1c7*/
          v31 = v9 + v15; /*0x43d1ca*/
          v32 = v16; /*0x43d1ce*/
          v17 = v34; /*0x43d1d2*/
          v33 = (unsigned int *)v7[3]; /*0x43d1d9*/
          v26 = v28; /*0x43d1e1*/
          v18 = v15 + v7[3]; /*0x43d1e8*/
          v33 = (unsigned int *)v34; /*0x43d1f0*/
          if ( v9 + v15 + v34 > v18 ) /*0x43d1f5*/
          {
            v17 = v18 - result; /*0x43d1f9*/
            v33 = (unsigned int *)(v18 - result); /*0x43d1fb*/
          }
          if ( result < v15 ) /*0x43d201*/
          {
            result = v9; /*0x43d205*/
            v31 = v15; /*0x43d209*/
            v17 += v9; /*0x43d20d*/
            v33 = (unsigned int *)v17; /*0x43d215*/
            v27 += v9; /*0x43d219*/
          }
          if ( v17 > 0 ) /*0x43d21f*/
          {
            v19 = (short *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v25); /*0x43d235*/
            v20 = (*((int (__thiscall **)(BuildingClass *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int))this->TechnoClass /*0x43d24a*/
                   + 116))(
                    this,
                    0,
                    0,
                    v19[133],
                    0,
                    0,
                    0,
                    0,
                    0,
                    0);
            v23 = -ZCoordToScreenY(v20); /*0x43d259*/
            v21 = BuildingClass::GetProductionFrame(this); /*0x43d26d*/
            return ((int (__thiscall *)(BuildingClass *, unsigned int *, int, int *, char *, unsigned int, int, int))loc_705E00)( /*0x43d27a*/
                     this,
                     v33,
                     v21,
                     &v34,
                     &v37,
                     0,
                     256,
                     v23);
          }
        }
      }
    }
    return result; /*0x43d27f*/
}
} // namespace gamemd

// 0x43E7B0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::DrawVisible(Point2D* screen_pos, RectangleStruct* bounds) const
{
    int v4; // eax
    FactoryClass *BuildLimit; // eax
    int Type; // eax
    int v7; // eax
    int v8; // eax
    unsigned int v9[2]; // [esp+Ch] [ebp-8h] BYREF

    (*((void (__thiscall **)(BuildingClass *, unsigned int *))this->vtable1 + 110))(this, v9); /*0x43e7c1*/
    if ( ((unsigned int *)this)[0] /*0x43e80c*/
      && ((unsigned __int8)HouseClass::IsAlliedWith((void *)((unsigned int *)this)[0], (void *)dword_A83D4C)
       || ((1 << *((unsigned int *)dword_A83D4C->Object_field_0x34 + 46)) & ((unsigned int *)this)[0]) != 0) )
    {
      v4 = *a2 - 10; /*0x43e816*/
      v9[1] = a2[1] + 10; /*0x43e819*/
      v9[0] = v4; /*0x43e822*/
      (*((void (__thiscall **)(BuildingClass *, unsigned int *, int *, int *))this->vtable1 + 278))(this, v9, a2, a3); /*0x43e82c*/
    }
    if ( ((1 << *((unsigned int *)dword_A83D4C->Object_field_0x34 + 46)) &((char *)this + 131)) != 0 && ((unsigned int *)this)[0] ) /*0x43e856*/
    {
      if ( (unsigned __int8)House_IsCurrentPlayer((void *)((unsigned int *)this)[0]) ) /*0x43e86a*/
        BuildLimit = (FactoryClass *)HouseClass::GetBuildLimit(((unsigned int *)this)[0], this->Type->Factory[0], this->*(unsigned int *)((char *)Type + 3278), 0); /*0x43e88f*/
      else
        BuildLimit = this->Factory; /*0x43e896*/
      if ( BuildLimit ) /*0x43e89e*/
      {
        Type = AbstractClass::GetType((AbstractClass *)BuildLimit); /*0x43e8a2*/
        if ( Type ) /*0x43e8a9*/
        {
          v7 = (*(int (__thiscall **)(int))(*(unsigned int *)Type + 132))(Type); /*0x43e8b4*/
          v8 = (*(int (__thiscall **)(int))(*(unsigned int *)v7 + 152))(v7); /*0x43e8d3*/
          DrawToSurfaceSHP( /*0x43e8e6*/
            (int)g_DSurface_Hidden_2,
            *(int *)&stru_87F5F0.__pad_58[124],
            v8,
            0,
            a2,
            a3,
            3584,
            0,
            0,
            0,
            1000,
            0,
            0,
            0,
            0,
            0);
        }
      }
    }
}
} // namespace gamemd

// 0x43E900
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::GetZDrawOffset() const
{
    int v2; // eax
    int v3; // eax
    BuildingTypeClass *Type; // esi

    v2 = (*((int (__thiscall **)(BuildingClass *))this->vtable1 + 116))(this); /*0x43e905*/
    v3 = ZCoordToScreenY(v2); /*0x43e90d*/
    Type = this->Type; /*0x43e912*/
    if ( Type->TurretAnimIsVoxel ) /*0x43e91c*/
      return *(unsigned int *)&Type->__pad_F70[632] - v3; /*0x43e92d*/
    else
      return -v3; /*0x43e930*/
}
} // namespace gamemd

// 0x43EF90
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::GetProductionFrame() const
{
    BuildingTypeClass *Type; // eax
    int v3; // edi
    BuildingTypeClass *v12; // esi
    int v13; // edx
    int v14; // eax
    int v15; // edx
    int v16; // edx

    Type = this->Type; /*0x43ef94*/
    v3 = ((unsigned int *)this)[0]; /*0x43ef9a*/
    if ( Type->LaserFence ) /*0x43efa0*/
      return this->LaserFenceFrame; /*0x43efb2*/
    if ( Type->FirestormWall ) /*0x43efb3*/
      return this->FirestormWallFrame; /*0x43efc5*/
    if ( !this->BuildingClass_field_int_534 ) /*0x43efc6*/
    {
      if ( Type->Gate ) /*0x43efd0*/
        v3 = Type->BuildingAnimFrame[0] + Type->BuildingAnimFrame[1] - v3 - 1; /*0x43efeb*/
      if ( (*((int (__thiscall **)(BuildingClass *))this->vtable1 + 97))(this) == 19 ) /*0x43effa*/
        return this->Type->BuildingAnimFrame[3 * this->BuildingClass_field_int_534] /*0x43f02b*/
             + this->Type->BuildingAnimFrame[3 * this->BuildingClass_field_int_534 + 1]
             - v3
             - 1;
      return v3; /*0x43f16f*/
    }
    if ( Type->CanBeOccupied ) /*0x43f02c*/
    {
      v3 = 0; /*0x43f03e*/
      if ( (*((int (__thiscall **)(BuildingClass *))this->vtable1 + 258))(this) > 0 ) /*0x43f048*/
        v3 = 2; /*0x43f04a*/
      BuildingClass::GetHealthRatio(this); /*0x43f051*/
      _ECX = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x43f056*/
      __asm /*0x43f05c*/
      {
        fcomp qword ptr [ecx+1708h]
        fnstsw ax
      }
      if ( (_AX & 0x4100) != 0 ) /*0x43f067*/
        goto LABEL_16; /*0x43f067*/
      if ( *(int *)((*((int (__thiscall **)(BuildingClass *))this->vtable1 + 33))(this) + 1588) > 0 ) /*0x43f07b*/
      {
        BuildingClass::GetHealthRatio(this); /*0x43f07f*/
        _EAX = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x43f084*/
        __asm /*0x43f089*/
        {
          fcomp qword ptr [eax+1700h]
          fnstsw ax
        }
        if ( (_EAX & 0x4100) != 0 ) /*0x43f094*/
  LABEL_16:
          ++v3; /*0x43f096*/
      }
      if ( ((unsigned int *)this->Type)[0] == -1 && v3 == 3 ) /*0x43f0ad*/
        return 1; /*0x43f0bc*/
      return v3; /*0x43f0ad*/
    }
    if ( !Type->Gate ) /*0x43f0c7*/
    {
      BuildingClass::GetHealthRatio(this); /*0x43f0f6*/
      _ECX = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x43f0fb*/
      __asm /*0x43f101*/
      {
        fcomp qword ptr [ecx+1700h]
        fnstsw ax
      }
      if ( (_AX & 0x4100) != 0 ) /*0x43f10c*/
      {
        if ( this->BuildingClass_field_int_534 == 1 ) /*0x43f115*/
          return v3 + 1; /*0x43f11c*/
        v12 = this->Type; /*0x43f11d*/
        v13 = v12->BuildingAnim[0]; /*0x43f12f*/
        v14 = v12->BuildingAnimFrame[3] + v12->BuildingAnimFrame[4]; /*0x43f135*/
        if ( v14 <= v13 + v12->BuildingAnim[1] ) /*0x43f141*/
          v14 = v13 + v12->BuildingAnim[1]; /*0x43f143*/
        v15 = v12->BuildingAnim[6]; /*0x43f14b*/
        if ( v14 <= v15 + v12->BuildingAnim[7] ) /*0x43f155*/
          v14 = v15 + v12->BuildingAnim[7]; /*0x43f157*/
        v16 = v12->BuildingAnim[9]; /*0x43f15f*/
        if ( v14 <= v16 + v12->BuildingAnim[10] ) /*0x43f169*/
          v14 = v16 + v12->BuildingAnim[10]; /*0x43f16b*/
        v3 += v14; /*0x43f16d*/
      }
      return v3; /*0x43f16d*/
    }
    BuildingClass::GetHealthRatio(this); /*0x43f0c9*/
    _EDX = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x43f0ce*/
    __asm /*0x43f0d4*/
    {
      fcomp qword ptr [edx+1700h]
      fnstsw ax
    }
    if ( (_AX & 0x4100) != 0 ) /*0x43f0df*/
      return this->Type->GateStages + 1; /*0x43f0ef*/
    else
      return 0; /*0x43f0f2*/
}
} // namespace gamemd

// 0x440580
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::Unlimbo_UnitDeliveryFix()
{
    double v1; // st7
    TechnoClass *v2; // ebp
    int vtable0; // edi
    CellClass *v5; // eax
    int v6; // eax
    int v7; // ebx
    int Type; // ecx
    CellClass *v9; // eax
    int wallOwnerIndex; // ecx
    BuildingClass *v11; // edx
    BuildingClass *owner; // ecx
    int v13; // edx
    bool v14; // zf
    int v15; // ecx
    BuildingClass *v16; // edx
    unsigned short *i; // ebx
    short v18; // dx
    void *v19; // edi
    BuildingClass *v20; // edx
    int v21; // eax
    BuildingClass *v22; // ecx
    int v23; // eax
    unsigned int *v24; // eax
    int v25; // ebp
    unsigned char *v26; // eax
    int v27; // edi
    CellClass *v28; // eax
    int result; // eax
    int v30; // edi
    int v31; // eax
    BuildingClass *v32; // edi
    int v33; // ebx
    int v34; // eax
    int v35; // ebx
    char *v36; // ebp
    int v37; // edx
    short v38; // cx
    Cell *v39; // eax
    unsigned int *v40; // eax
    unsigned int *v41; // edi
    int j; // edi
    int v43; // eax
    int FoundationWidth; // ebx
    int v45; // ecx
    int v46; // kr18_4
    int v47; // eax
    int v48; // ebx
    int v49; // edi
    short v50; // bp
    unsigned char *v51; // eax
    char v52; // al
    LightSourceClass *v53; // edi
    unsigned int *v54; // eax
    int *v55; // eax
    unsigned int *v56; // eax
    int v57; // eax
    int *v58; // eax
    int v59; // ebx
    int *v60; // ebp
    int v61; // edx
    int v62; // edi
    int v63; // edx
    int v64; // eax
    CellClass *v65; // eax
    int v66; // eax
    RulesClass *v67; // eax
    int smudgeTypeIndex; // edi
    BuildingClass *v69; // eax
    BuildingClass *v70; // eax
    BuildingClass *v71; // eax
    BuildingClass *v72; // eax
    int v73; // ecx
    int *v74; // edi
    BuildingClass *v75; // eax
    BuildingClass *v76; // eax
    int v77; // ecx
    int v78; // edi
    BuildingClass *v79; // eax
    BuildingClass *v80; // eax
    int *v81; // eax
    int v82; // edx
    int v83; // eax
    int IvanIconFlickerRate; // edx
    unsigned int *IvanDamage; // ecx
    unsigned int *v86; // edi
    int v87; // ecx
    int v88; // eax
    int v89; // eax
    int v90; // edx
    unsigned int *v91; // edi
    int v92; // ecx
    int v93; // eax
    int v94; // eax
    int v95; // edx
    unsigned int *v96; // edi
    int v97; // ecx
    int v98; // eax
    int v99; // eax
    int v100; // edx
    int v101; // eax
    unsigned int *v102; // edi
    int v103; // ecx
    int v104; // eax
    int v105; // eax
    int v106; // edx
    unsigned int *v107; // edi
    int v108; // ecx
    int v109; // eax
    int v110; // eax
    int v111; // edx
    int v112; // eax
    unsigned int *v113; // edi
    int v114; // ecx
    int v115; // eax
    int v116; // eax
    int v117; // edx
    unsigned int *v118; // edi
    int v119; // ecx
    int v120; // eax
    int v121; // eax
    int v122; // edx
    unsigned int *v123; // edi
    int v124; // ecx
    int v125; // eax
    int v126; // eax
    int v127; // edx
    unsigned int *v128; // edi
    int v129; // ecx
    int v130; // eax
    int v131; // eax
    int v132; // edx
    unsigned int *v133; // edi
    int v134; // ecx
    int v135; // eax
    int v136; // eax
    int v137; // edx
    unsigned int *v138; // edi
    int v139; // ecx
    int v140; // eax
    int v141; // eax
    int v142; // edx
    int v143; // ecx
    int v144; // [esp-8h] [ebp-58h]
    int v145; // [esp-4h] [ebp-54h]
    int v146; // [esp+0h] [ebp-50h]
    int v147; // [esp+4h] [ebp-4Ch]
    int v148; // [esp+8h] [ebp-48h]
    int v149; // [esp+Ch] [ebp-44h]
    int v150; // [esp+Ch] [ebp-44h]
    short v151; // [esp+10h] [ebp-40h]
    bool v152; // [esp+1Fh] [ebp-31h]
    int v153; // [esp+20h] [ebp-30h] BYREF
    int v154; // [esp+24h] [ebp-2Ch] BYREF
    short v155[2]; // [esp+28h] [ebp-28h] BYREF
    unsigned int v156[3]; // [esp+2Ch] [ebp-24h] BYREF
    int v157; // [esp+38h] [ebp-18h] BYREF
    int v158; // [esp+3Ch] [ebp-14h]
    int v159; // [esp+40h] [ebp-10h]
    int v160[3]; // [esp+44h] [ebp-Ch] BYREF
    TechnoClass *v161; // [esp+54h] [ebp+4h] BYREF
    int *v162; // [esp+58h] [ebp+8h] BYREF

    v2 = v161; /*0x440585*/
    vtable0 = this->vtable1; /*0x440595*/
    v5 = Coord::To_Cell((Coord *)&dword_87F7E8, v161); /*0x44059d*/
    v6 = (*(int (__thiscall **)(BuildingClass *, CellClass *, int, int, unsigned int, int))(vtable0 + 428))( /*0x4405a5*/
           this,
           v5,
           -1,
           -1,
           0,
           1);
    (v7) = ((v7) & ~0xFF) | ((unsigned int)(v6 == 0) & 0xFF) /*0x4405ad*/
    v152 = v6 == 0; /*0x4405b2*/
    if ( !v6 ) /*0x4405b6*/
    {
      Type = this->Type; /*0x4405c1*/
      if ( Type == dword_8871E0->NukeDown ) /*0x4405cd*/
      {
        v9 = Coord::To_Cell((Coord *)&dword_87F7E8, v2); /*0x4405d5*/
        wallOwnerIndex = v9->wallOwnerIndex; /*0x4405da*/
        v11 = 0; /*0x4405dd*/
        if ( wallOwnerIndex >= 0 ) /*0x4405e1*/
          v11 = (BuildingClass *)*(&dword_A8022C->vtable1 + wallOwnerIndex); /*0x4405e9*/
        owner = (BuildingClass *)this->owner; /*0x4405ec*/
        if ( v11 == owner ) /*0x4405f4*/
        {
          v13 = *(unsigned int *)&v9->__pad_28[28]; /*0x4405fa*/
          if ( v13 == 2 ) /*0x440600*/
          {
  LABEL_14:
            BuildingClass::Capture(owner, (short *)&v9->smudgeTypeIndex, 1); /*0x440656*/
            goto LABEL_33; /*0x440661*/
          }
          v14 = v13 == 0; /*0x440602*/
  LABEL_13:
          if ( !v14 ) /*0x440650*/
            goto LABEL_33; /*0x440650*/
          goto LABEL_14; /*0x440650*/
        }
      }
      else if ( *(unsigned int *)(Type + 3668) ) /*0x440606*/
      {
        v9 = Coord::To_Cell((Coord *)&dword_87F7E8, v2); /*0x440616*/
        v15 = v9->wallOwnerIndex; /*0x44061b*/
        v16 = 0; /*0x44061e*/
        if ( v15 >= 0 ) /*0x440622*/
          v16 = (BuildingClass *)*(&dword_A8022C->vtable1 + v15); /*0x44062a*/
        owner = (BuildingClass *)this->owner; /*0x44062d*/
        if ( v16 == owner ) /*0x440635*/
        {
          v14 = *(unsigned int *)&v9->__pad_28[28] == *(unsigned int *)(*(unsigned int *)(this->Type + 3668) + 660); /*0x44064a*/
          goto LABEL_13; /*0x44064a*/
        }
      }
      else if ( *(unsigned char *)(Type + 5815) ) /*0x440666*/
      {
        (v153) = ((v153) & ~0xFFFF) | ((unsigned int)(v2->vtable1 / 256) & 0xFFFF) /*0x440685*/
        (v153) = ((v153) & ~(0xFFFFULL << 16)) | (((unsigned __int64)(unsigned int)(v2->vtable1 / 256) & 0xFFFF) << 16) /*0x440699*/
        for ( i = (unsigned short *)(*(int (__thiscall **)(int, int))(*(unsigned int *)Type + 144))(Type, 1); /*0x4406a6*/
              *i != 0x7FFF || i[1] != 0x7FFF;
              i += 2 )
        {
          v18 = (((unsigned int)(v153) >> 16) & 0xFFFF) + i[1]; /*0x4406c3*/
          (v154) = ((v154) & ~0xFFFF) | ((unsigned int)(v153 + *i) & 0xFFFF) /*0x4406ce*/
          (v154) = ((v154) & ~(0xFFFFULL << 16)) | (((unsigned __int64)(unsigned int)(v18) & 0xFFFF) << 16) /*0x4406d3*/
          *(unsigned int *)v155 = v154; /*0x4406e2*/
          v19 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v155); /*0x4406eb*/
          v20 = 0; /*0x4406ed*/
          v21 = *((unsigned int *)v19 + 20); /*0x4406ef*/
          if ( v21 >= 0 ) /*0x4406f4*/
            v20 = (BuildingClass *)*(&dword_A8022C->vtable1 + v21); /*0x4406fc*/
          v22 = (BuildingClass *)this->owner; /*0x4406ff*/
          if ( v20 == v22 ) /*0x440707*/
          {
            v23 = *((unsigned int *)v19 + 17); /*0x440709*/
            if ( v23 == 2 || !v23 || v23 == 26 ) /*0x440718*/
              BuildingClass::Capture(v22, (short *)v19 + 18, 1); /*0x440720*/
          }
          v24 = Cell::IsBridge((Cell *)v19); /*0x440727*/
          if ( v24 && *(unsigned char *)(v24[328] + 5823) ) /*0x440736*/
          {
            v25 = (*(int (__thiscall **)(unsigned int *))(*v24 + 56))(v24); /*0x440747*/
            if ( v25 == (*(int (__thiscall **)(BuildingClass *))((char *)this->vtable1 + 56))(this) ) /*0x440752*/
            {
              *(unsigned int *)v155 = *((unsigned int *)v19 + 9); /*0x440757*/
              BuildingClass::TraverseBridgeSegments((BuildingClass *)v155); /*0x44075f*/
            }
            v2 = v161; /*0x440764*/
          }
        }
        IDA_LOBYTE(v7) = v152; /*0x440770*/
      }
    }
  LABEL_33:
    v26 = (unsigned char *)this->Type; /*0x440774*/
    if ( v26[5489] ) /*0x44077a*/
    {
      v27 = this->vtable1; /*0x440788*/
      v28 = Coord::To_Cell((Coord *)&dword_87F7E8, v2); /*0x440798*/
      result = (*(int (__thiscall **)(BuildingClass *, CellClass *, int, int, unsigned int, int))(v27 + 428))( /*0x4407a0*/
                 this,
                 v28,
                 -1,
                 -1,
                 0,
                 1);
      if ( !result ) /*0x4407a8*/
      {
        result = (*(int (__thiscall **)(unsigned int, int))(**(unsigned int **)(this->Type + 3668) + 140))( /*0x4407c3*/
                   *(unsigned int *)(this->Type + 3668),
                   this->owner);
        if ( result ) /*0x4407cb*/
        {
          result = (*(int (__thiscall **)(int, TechnoClass *, unsigned int))(*(unsigned int *)result + 216))(result, v2, 0); /*0x4407d8*/
          if ( (unsigned char)result ) /*0x4407e0*/
          {
            v30 = this->owner; /*0x4407e6*/
            Coord::To_Cell((Coord *)&dword_87F7E8, v2)->wallOwnerIndex = *(unsigned int *)(v30 + 48); /*0x4407fc*/
            (*(void (__thiscall **)(BuildingClass *, int))((char *)this->vtable1 + 628))(this, 3); /*0x440803*/
            MapClass::RevealArea1( /*0x44082d*/
              (MapClass *)&dword_87F7E8,
              &v2->vtable1,
              *(unsigned int *)(this->Type + 1512),
              (void *)this->owner,
              0,
              0,
              0,
              1,
              0);
            MapClass::RevealArea1( /*0x440856*/
              (MapClass *)&dword_87F7E8,
              &v2->vtable1,
              *(unsigned int *)(this->Type + 1512),
              (void *)this->owner,
              0,
              0,
              0,
              1,
              1);
            result = (*(int (__thiscall **)(BuildingClass *))((char *)this->vtable1 + 248))(this); /*0x44085f*/
            IDA_LOBYTE(result) = 1; /*0x440865*/
            return result; /*0x44086e*/
          }
        }
      }
      goto LABEL_46; /*0x4407e0*/
    }
    if ( v26[3720] ) /*0x440871*/
    {
      v31 = v2->vtable1; /*0x44087f*/
      v157 = 0; /*0x44088b*/
      v158 = 0; /*0x440891*/
      IDA_LOWORD(v161) = v31 / 256; /*0x440898*/
      IDA_HIWORD(v161) = v2->vtable1 / 256; /*0x4408b0*/
      result = BuildingClass::updateSellBack((BuildingClass *)&dword_87F7E8, (short *)&v161, &v157); /*0x4408c8*/
      v32 = (BuildingClass *)result; /*0x4408cd*/
      if ( !result ) /*0x4408d1*/
        goto LABEL_46; /*0x4408d1*/
      result = (*(int (__thiscall **)(int))(*(unsigned int *)result + 44))(result); /*0x4408d7*/
      if ( result != 6 ) /*0x4408dd*/
        goto LABEL_46; /*0x4408dd*/
      result = this->owner; /*0x4408df*/
      v33 = this->Type; /*0x4408eb*/
      if ( result != v32->owner ) /*0x4408f3*/
        goto LABEL_46; /*0x4408f3*/
      result = _strcmpi((char *)(v33 + 3720), (char *)(v32->Type + 36)); /*0x440906*/
      if ( result ) /*0x440910*/
        goto LABEL_46; /*0x440910*/
      result = *(unsigned int *)(v33 + 5884); /*0x440912*/
      if ( result == -1 ) /*0x44091b*/
      {
        result = v32->Type; /*0x440932*/
        if ( v32->UpgradeLevel[0] < *(unsigned int *)(result + 5344) ) /*0x440945*/
        {
  LABEL_49:
          *(unsigned char *)(this->owner + 22393) = 1; /*0x440951*/
          *(unsigned char *)(this->owner + 22392) = 1; /*0x440964*/
          v34 = this->Type; /*0x44096b*/
          v35 = *(unsigned int *)(v34 + 5884); /*0x440971*/
          if ( v35 == -1 ) /*0x44097a*/
            v35 = 1; /*0x44097c*/
          v36 = (char *)(v32->Type + 68 * v32->UpgradeLevel[0] + 3916); /*0x44099b*/
          if ( _strcmpi(v36, (char *)(v34 + 504)) ) /*0x4409a3*/
            strncpy(v36, (const char *)(this->Type + 504), 0x10u); /*0x4409bf*/
          for ( ; v35; --v35 ) /*0x4409c9*/
            UpdateBuildingActiveAnim(v32, v37); /*0x4409cd*/
          *(unsigned int *)&v32->RequiresDamageFires[4 * v32->UpgradeLevel[0]] = this->Type; /*0x4409e2*/
          SuperWeapon::UpdateSuperWeaponsUnavailableHouseClass((SuperWeapon *)this->owner); /*0x4409ef*/
          *(unsigned char *)(this->owner + 508) = 1; /*0x4409fa*/
          if ( *(unsigned char *)(this->Type + 5987) ) /*0x440a07*/
            HouseClass::AcquiredThreatNode((HouseClass *)this->owner); /*0x440a17*/
          result = (*(int (__thiscall **)(BuildingClass *))((char *)this->vtable1 + 248))(this); /*0x440a20*/
          IDA_LOBYTE(result) = 1; /*0x440a26*/
          return result; /*0x440a2f*/
        }
      }
      else if ( result <= 0 || result > 3 ) /*0x440924*/
      {
        goto LABEL_46; /*0x440924*/
      }
      if ( v32->UpgradeLevel[0] ) /*0x440947*/
      {
  LABEL_46:
        IDA_LOBYTE(result) = 0; /*0x440926*/
        return result; /*0x44092f*/
      }
      goto LABEL_49; /*0x44094f*/
    }
    if ( v26[5823] ) /*0x440a32*/
    {
      IDA_LOBYTE(v38) = 0; /*0x440a3c*/
      IDA_HIBYTE(v38) = (unsigned char)v162; /*0x440a3e*/
      v155[0] = v38; /*0x440a42*/
      if ( (((unsigned __int8)(*(unsigned int *)v155 >> 12) + 1) & 6) == 4 ) /*0x440a55*/
        this->LaserFenceFrame = 8; /*0x440a57*/
      else
        this->LaserFenceFrame = 12; /*0x440a63*/
    }
    if ( (unsigned char)v7 ) /*0x440a6f*/
    {
      if ( v26[5822] ) /*0x440a75*/
      {
        this->LaserFenceFrame = 0; /*0x440a83*/
        IDA_LOWORD(v154) = v2->vtable1 / 256; /*0x440aa1*/
        IDA_HIWORD(v154) = v2->vtable1 / 256; /*0x440aba*/
        *(unsigned int *)v155 = v154; /*0x440ac3*/
        v39 = (Cell *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v155); /*0x440ac7*/
        v40 = Cell::IsBridge(v39); /*0x440ace*/
        v41 = v40; /*0x440ad3*/
        if ( v40 ) /*0x440ad7*/
        {
          if ( *(unsigned char *)(v40[328] + 5823) ) /*0x440adf*/
          {
            v7 = (*(int (__thiscall **)(unsigned int *))(*v40 + 56))(v40); /*0x440af4*/
            if ( (*(int (__thiscall **)(BuildingClass *))((char *)this->vtable1 + 56))(this) == v7 ) /*0x440afb*/
              (*(void (__thiscall **)(unsigned int *))(*v41 + 248))(v41); /*0x440b01*/
          }
        }
      }
    }
    if ( !TechnoClass::FinishDeploy(v2, (unsigned __int8)v7, v162, v149, v151) ) /*0x440b16*/
      goto LABEL_46; /*0x440b16*/
    if ( *(unsigned char *)(this->Type + 5831) ) /*0x440b22*/
    {
      result = this->owner; /*0x440b2c*/
      *(unsigned char *)(result + 22264) = 1; /*0x440b32*/
    }
    if ( this->isAliveFlag[0] ) /*0x440b39*/
    {
      if ( *(unsigned int *)&dword_A8B238 /*0x440b70*/
        && !(unsigned __int8)House_IsCurrentPlayer((void *)this->owner)
        && !*(unsigned char *)(*(unsigned int *)(this->owner + 52) + 422) )
      {
        this->__pad_6B8[19] = 1; /*0x440b7a*/
      }
      if ( (dword_A8B230->vtable1 & 0x1000) != 0 ) /*0x440b8b*/
      {
        v162 = *(int **)(*(int (__thiscall **)(BuildingClass *, int *))((char *)this->vtable1 + 440))(this, &v154); /*0x440ba0*/
        for ( j = (*(int (__thiscall **)(int, unsigned int))(*(unsigned int *)this->Type + 144))(this->Type, 0); /*0x440bb2*/
              *(unsigned short *)j != 0x7FFF || *(unsigned short *)(j + 2) != 0x7FFF;
              j += 4 )
        {
          *(unsigned int *)v155 = *CellStruct::Add((CellStruct *)j, &v153, &v162); /*0x440be5*/
          if ( (*((unsigned int *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v155) + 80) & 0x400000) == 0 ) /*0x440bf4*/
            goto LABEL_84; /*0x440bf4*/
        }
        BuildingClass::CreateFoggedObjects(this, 0, 0, 0); /*0x440c03*/
      }
  LABEL_84:
      v43 = this->Type; /*0x440c08*/
      if ( (!*(unsigned int *)(v43 + 1032) || !*(unsigned char *)(v43 + 1516)) /*0x440c26*/
        && !(*(unsigned __int8 (__thiscall **)(BuildingClass *))((char *)this->vtable1 + 128))(this) )
      {
        MarkBuildingFoundationCells(this, 0); /*0x440c34*/
      }
      FoundationWidth = BuildingTypeClass::GetFoundationWidth((BuildingTypeClass *)this->Type); /*0x440c4c*/
      v45 = ((int *)this->Type)->GetFoundationHeight(0) + 2; /*0x440c5f*/
      v46 = v2->vtable1; /*0x440c62*/
      v153 = v45; /*0x440c64*/
      (v156[0]) = ((v156[0]) & ~0xFFFF) | ((unsigned int)(v46 / 256) & 0xFFFF) /*0x440c6b*/
      (v156[0]) = ((v156[0]) & ~(0xFFFFULL << 16)) | (((unsigned __int64)(unsigned int)(v2->vtable1 / 256) & 0xFFFF) << 16) /*0x440c7f*/
      v47 = 0; /*0x440c84*/
      v154 = 0; /*0x440c88*/
      if ( v45 > 0 ) /*0x440c8c*/
      {
        v48 = FoundationWidth + 2; /*0x440c8e*/
        do /*0x440cff*/
        {
          v49 = 0; /*0x440c91*/
          if ( v48 > 0 ) /*0x440c95*/
          {
            IDA_LOWORD(v157) = ((unsigned int)(v156[0]) & 0xFFFF) - 1; /*0x440ca1*/
            IDA_HIWORD(v157) = (((unsigned int)(v156[0]) >> 16) & 0xFFFF) - 1; /*0x440ca6*/
            v50 = ((unsigned int)(v156[0]) & 0xFFFF) - 1; /*0x440caf*/
            IDA_HIWORD(v162) = v47 + (((unsigned int)(v156[0]) >> 16) & 0xFFFF) - 1; /*0x440cb5*/
            do /*0x440cea*/
            {
              IDA_LOWORD(v162) = v49 + v50; /*0x440cc1*/
              *(unsigned int *)v155 = v162; /*0x440cd0*/
              v51 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v155); /*0x440cd4*/
              ++v49; /*0x440ce1*/
              ++v51[290]; /*0x440ce4*/
            }
            while ( v49 < v48 ); /*0x440cea*/
            v2 = v161; /*0x440cec*/
            v45 = v153; /*0x440cf0*/
            v47 = v154; /*0x440cf4*/
          }
          v154 = ++v47; /*0x440cfb*/
        }
        while ( v47 < v45 ); /*0x440cff*/
      }
      BuildingClass::CalcExitCoords((BuildingClass *)this->owner); /*0x440d07*/
      BuildingClass::IncrementOccupantTypeCounter((BuildingClass *)this->owner, this); /*0x440d13*/
      *(unsigned char *)(this->owner + 508) = 1; /*0x440d1e*/
      v52 = this->isDiscoveredByCurrentPlayer[0]; /*0x440d25*/
      this->BuildingClass_field_544 = 0; /*0x440d2d*/
      if ( !v52 && (Coord::To_Cell((Coord *)&dword_87F7E8, v2)->copyFlags & 0x10) != 0 || *(unsigned int *)&dword_A8B238 ) /*0x440d54*/
      {
        (*(void (__thiscall **)(BuildingClass *, Object *))((char *)this->vtable1 + 408))(this, dword_A83D4C); /*0x440d61*/
      }
      else if ( *(unsigned int *)(this->Type + 3636) ) /*0x440d72*/
      {
        if ( !this->LightSource ) /*0x440d80*/
        {
          v53 = (LightSourceClass *)RA2_OPNEW(0x4Cu); /*0x440d91*/
          if ( v53 ) /*0x440d98*/
          {
            v54 = (unsigned int *)this->Type; /*0x440d9a*/
            v148 = v54[912]; /*0x440dac*/
            v147 = v54[911]; /*0x440db3*/
            v146 = v54[910]; /*0x440dc0*/
            v145 = v54[909]; /*0x440dc1*/
            v144 = v54[908]; /*0x440dc4*/
            v55 = (int *)(*(int (__thiscall **)(BuildingClass *, int *))((char *)this->vtable1 + 72))(this, v160); /*0x440dcc*/
            v56 = LightSourceClass::Construct(v53, *v55, v55[1], v55[2], v144, v145, v146, v147, v148); /*0x440de6*/
          }
          else
          {
            v56 = 0; /*0x440ded*/
          }
          this->LightSource = (int)v56; /*0x440def*/
        }
        Trigger::EnableOnce((Trigger *)this->LightSource, 0); /*0x440dfd*/
      }
      if ( *(unsigned char *)(this->Type + 5822) && !dword_A8E7AC && this->isAliveFlag[0] && !this->inLimbo[0] ) /*0x440e25*/
      {
        BuildingClass::DemolishBridge(this); /*0x440e33*/
        BuildingClass::DemolishBridge(this); /*0x440e3c*/
        BuildingClass::DemolishBridge(this); /*0x440e45*/
        BuildingClass::DemolishBridge(this); /*0x440e4e*/
        BuildingClass::RepairPlacement(this, 1); /*0x440e57*/
      }
      if ( !(unsigned __int8)House_IsCurrentPlayer((void *)this->owner) ) /*0x440e62*/
        (*(void (__thiscall **)(BuildingClass *, int))((char *)this->vtable1 + 408))(this, this->owner); /*0x440e76*/
      if ( this->isOwnedByCurrentPlayer[0] ) /*0x440e7c*/
      {
        byte_880CF4 = 1; /*0x440e8d*/
        MapClass::MarkForRedraw((GScreenClass *)&dword_87F7E8, 0); /*0x440e94*/
      }
      v57 = this->Type; /*0x440e99*/
      if ( *(unsigned int *)(v57 + 1892) && !this->ambientParticles ) /*0x440ead*/
      {
        v58 = (int *)(v57 + 1896); /*0x440ebb*/
        v59 = *v58; /*0x440ec5*/
        v158 = v58[1]; /*0x440eca*/
        v159 = v58[2]; /*0x440ed1*/
        v60 = (int *)RA2_OPNEW(0x100u); /*0x440eda*/
        if ( v60 ) /*0x440ee1*/
        {
          v61 = this->location[1]; /*0x440efc*/
          v160[0] = v59 + this->location[0]; /*0x440eff*/
          v62 = this->location[2]; /*0x440f07*/
          v156[0] = this->location[0]; /*0x440f0e*/
          v160[1] = v158 + v61; /*0x440f12*/
          v63 = this->location[1]; /*0x440f16*/
          v64 = this->location[2]; /*0x440f19*/
          v160[2] = v159 + v62; /*0x440f28*/
          v156[1] = v63; /*0x440f2c*/
          v156[2] = v64; /*0x440f30*/
          v65 = Coord::To_Cell((Coord *)&dword_87F7E8, v156); /*0x440f34*/
          v66 = ParticleSystemClass::Constructor( /*0x440f4e*/
                  v60,
                  *(unsigned int *)(this->Type + 1892),
                  v160,
                  (int)v65,
                  0,
                  &g_BuildingClassPool,
                  0);
        }
        else
        {
          v66 = 0; /*0x440f55*/
        }
        v2 = v161; /*0x440f57*/
        this->ambientParticles = v66; /*0x440f5b*/
      }
      v67 = dword_8871E0; /*0x440f61*/
      if ( this->Type == dword_8871E0->NukeDown ) /*0x440f72*/
      {
        smudgeTypeIndex = Coord::To_Cell((Coord *)&dword_87F7E8, v161)->smudgeTypeIndex; /*0x440f87*/
        v157 = smudgeTypeIndex; /*0x440f8e*/
        IDA_HIWORD(v162) = IDA_HIWORD(smudgeTypeIndex); /*0x440f99*/
        IDA_LOWORD(v162) = smudgeTypeIndex + 1; /*0x440f9e*/
        v69 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (short *)&v162); /*0x440fb3*/
        BuildingClass::ValidatePlacement(v69, 0); /*0x440fba*/
        IDA_HIWORD(v162) = IDA_HIWORD(smudgeTypeIndex); /*0x440fc2*/
        IDA_LOWORD(v162) = smudgeTypeIndex - 1; /*0x440fc7*/
        v70 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (short *)&v162); /*0x440fe0*/
        BuildingClass::ValidatePlacement(v70, 0); /*0x440fe7*/
        v162 = (int *)(smudgeTypeIndex + 0x10000); /*0x440ff4*/
        v71 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (short *)&v162); /*0x44100d*/
        BuildingClass::ValidatePlacement(v71, 0); /*0x441014*/
        v162 = (int *)(smudgeTypeIndex - 0x10000); /*0x44101f*/
        v72 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (short *)&v162); /*0x441038*/
        BuildingClass::ValidatePlacement(v72, 0); /*0x44103f*/
        v67 = dword_8871E0; /*0x441044*/
        v2 = v161; /*0x441049*/
      }
      v73 = this->Type; /*0x44104d*/
      if ( v73 == v67->FlameDamage || v73 == v67->NukeWarhead ) /*0x441063*/
      {
        v74 = (int *)Coord::To_Cell((Coord *)&dword_87F7E8, v2)->smudgeTypeIndex; /*0x441070*/
        v162 = v74; /*0x441077*/
        IDA_HIWORD(v161) = IDA_HIWORD(v74); /*0x441083*/
        IDA_LOWORD(v161) = (unsigned short)v74 - 1; /*0x441088*/
        v75 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (short *)&v161); /*0x44109d*/
        BuildingClass::ValidatePlacement(v75, 0); /*0x4410a4*/
        IDA_LOWORD(v161) = (unsigned short)v74 + 3; /*0x4410b0*/
        IDA_HIWORD(v161) = IDA_HIWORD(v74); /*0x4410b5*/
        v76 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (short *)&v161); /*0x4410ca*/
        BuildingClass::ValidatePlacement(v76, 0); /*0x4410d1*/
        v67 = dword_8871E0; /*0x4410d6*/
      }
      v77 = this->Type; /*0x4410db*/
      if ( v77 == v67->FlameDamage2 || v77 == v67->NukeProjectile ) /*0x4410f1*/
      {
        v78 = Coord::To_Cell((Coord *)&dword_87F7E8, v2)->smudgeTypeIndex; /*0x4410fe*/
        v157 = v78; /*0x441105*/
        v161 = (TechnoClass *)(v78 - 0x10000); /*0x441118*/
        v79 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (short *)&v161); /*0x44112a*/
        BuildingClass::ValidatePlacement(v79, 0); /*0x441131*/
        v161 = (TechnoClass *)(v78 + 196608); /*0x44113e*/
        v80 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (short *)&v161); /*0x441157*/
        BuildingClass::ValidatePlacement(v80, 0); /*0x44115e*/
      }
      if ( *(unsigned char *)(this->Type + 5451) ) /*0x441169*/
      {
        if ( RA2_OPNEW(0xE8u) ) /*0x441178*/
          v81 = BuildingLightClass::CTOR((BuildingLightClass *)this, v1, v150); /*0x441187*/
        else
          v81 = 0; /*0x44118e*/
        this->Spotlight = (int)v81; /*0x441190*/
      }
      v82 = this->Type; /*0x441196*/
      this->isPrimaryFactory[0] = 0; /*0x44119c*/
      if ( *(unsigned int *)(v82 + 3768) ) /*0x4411a3*/
        AnimClass::updateAnimation((int)this, 0); /*0x4411b1*/
      v83 = 0; /*0x4411bc*/
      IvanIconFlickerRate = dword_8871E0->IvanIconFlickerRate; /*0x4411be*/
      if ( IvanIconFlickerRate > 0 ) /*0x4411c6*/
      {
        IvanDamage = (unsigned int *)dword_8871E0->IvanDamage; /*0x4411ce*/
        while ( *IvanDamage != this->Type ) /*0x4411d6*/
        {
          ++v83; /*0x4411d8*/
          ++IvanDamage; /*0x4411d9*/
          if ( v83 >= IvanIconFlickerRate ) /*0x4411de*/
            goto LABEL_147; /*0x4411de*/
        }
        v86 = (unsigned int *)(this->owner + 80); /*0x4411e8*/
        v87 = *(unsigned int *)(this->owner + 88); /*0x4411eb*/
        if ( *(unsigned int *)(this->owner + 96) < v87 /*0x441210*/
          || (*(unsigned char *)(this->owner + 93) || !v87)
          && (v88 = *(unsigned int *)(this->owner + 100), v88 > 0)
          && (*(unsigned __int8 (__thiscall **)(unsigned int *, int, unsigned int))(*v86 + 8))(v86, v88 + v87, 0) )
        {
          v89 = v86[4]; /*0x441217*/
          v90 = v86[1]; /*0x44121a*/
          v86[4] = v89 + 1; /*0x441220*/
          *(unsigned int *)(v90 + 4 * v89) = this; /*0x441223*/
        }
      }
  LABEL_147:
      if ( *(unsigned char *)(this->Type + 5801) ) /*0x44122c*/
      {
        v91 = (unsigned int *)(this->owner + 128); /*0x44123c*/
        v92 = *(unsigned int *)(this->owner + 136); /*0x441242*/
        if ( *(unsigned int *)(this->owner + 144) < v92 /*0x441267*/
          || (*(unsigned char *)(this->owner + 141) || !v92)
          && (v93 = *(unsigned int *)(this->owner + 148), v93 > 0)
          && (*(unsigned __int8 (__thiscall **)(unsigned int *, int, unsigned int))(*v91 + 8))(v91, v93 + v92, 0) )
        {
          v94 = v91[4]; /*0x44126e*/
          v95 = v91[1]; /*0x441271*/
          v91[4] = v94 + 1; /*0x441277*/
          *(unsigned int *)(v95 + 4 * v94) = this; /*0x44127a*/
        }
      }
      if ( *(unsigned char *)(this->Type + 5805) ) /*0x441283*/
      {
        v96 = (unsigned int *)(this->owner + 152); /*0x441293*/
        v97 = *(unsigned int *)(this->owner + 160); /*0x441299*/
        if ( *(unsigned int *)(this->owner + 168) < v97 /*0x4412be*/
          || (*(unsigned char *)(this->owner + 165) || !v97)
          && (v98 = *(unsigned int *)(this->owner + 172), v98 > 0)
          && (*(unsigned __int8 (__thiscall **)(unsigned int *, int, unsigned int))(*v96 + 8))(v96, v98 + v97, 0) )
        {
          v99 = v96[4]; /*0x4412c5*/
          v100 = v96[1]; /*0x4412c8*/
          v96[4] = v99 + 1; /*0x4412ce*/
          *(unsigned int *)(v100 + 4 * v99) = this; /*0x4412d1*/
        }
      }
      v101 = this->Type; /*0x4412d4*/
      if ( *(unsigned char *)(v101 + 5806) || *(unsigned char *)(v101 + 5807) ) /*0x4412e4*/
      {
        v102 = (unsigned int *)(this->owner + 176); /*0x4412f4*/
        v103 = *(unsigned int *)(this->owner + 184); /*0x4412fa*/
        if ( *(unsigned int *)(this->owner + 192) < v103 /*0x44131f*/
          || (*(unsigned char *)(this->owner + 189) || !v103)
          && (v104 = *(unsigned int *)(this->owner + 196), v104 > 0)
          && (*(unsigned __int8 (__thiscall **)(unsigned int *, int, unsigned int))(*v102 + 8))(v102, v104 + v103, 0) )
        {
          v105 = v102[4]; /*0x441326*/
          v106 = v102[1]; /*0x441329*/
          v102[4] = v105 + 1; /*0x44132f*/
          *(unsigned int *)(v106 + 4 * v105) = this; /*0x441332*/
        }
      }
      if ( *(unsigned char *)(this->Type + 5803) ) /*0x44133b*/
      {
        v107 = (unsigned int *)(this->owner + 200); /*0x44134b*/
        v108 = *(unsigned int *)(this->owner + 208); /*0x441351*/
        if ( *(unsigned int *)(this->owner + 216) < v108 /*0x441376*/
          || (*(unsigned char *)(this->owner + 213) || !v108)
          && (v109 = *(unsigned int *)(this->owner + 220), v109 > 0)
          && (*(unsigned __int8 (__thiscall **)(unsigned int *, int, unsigned int))(*v107 + 8))(v107, v109 + v108, 0) )
        {
          v110 = v107[4]; /*0x44137d*/
          v111 = v107[1]; /*0x441380*/
          v107[4] = v110 + 1; /*0x441386*/
          *(unsigned int *)(v111 + 4 * v110) = this; /*0x441389*/
        }
      }
      v112 = this->Type; /*0x44138c*/
      if ( *(unsigned char *)(v112 + 5499) && *(int *)(v112 + 1588) > -1 ) /*0x4413a3*/
      {
        v113 = (unsigned int *)(this->owner + 224); /*0x4413ab*/
        v114 = *(unsigned int *)(this->owner + 232); /*0x4413b1*/
        if ( *(unsigned int *)(this->owner + 240) < v114 /*0x4413d6*/
          || (*(unsigned char *)(this->owner + 237) || !v114)
          && (v115 = *(unsigned int *)(this->owner + 244), v115 > 0)
          && (*(unsigned __int8 (__thiscall **)(unsigned int *, int, unsigned int))(*v113 + 8))(v113, v115 + v114, 0) )
        {
          v116 = v113[4]; /*0x4413dd*/
          v117 = v113[1]; /*0x4413e0*/
          v113[4] = v116 + 1; /*0x4413e6*/
          *(unsigned int *)(v117 + 4 * v116) = this; /*0x4413e9*/
        }
      }
      if ( *(unsigned char *)(this->Type + 5804) ) /*0x4413f2*/
      {
        v118 = (unsigned int *)(this->owner + 248); /*0x441402*/
        v119 = *(unsigned int *)(this->owner + 256); /*0x441408*/
        if ( *(unsigned int *)(this->owner + 264) < v119 /*0x44142d*/
          || (*(unsigned char *)(this->owner + 261) || !v119)
          && (v120 = *(unsigned int *)(this->owner + 268), v120 > 0)
          && (*(unsigned __int8 (__thiscall **)(unsigned int *, int, unsigned int))(*v118 + 8))(v118, v120 + v119, 0) )
        {
          v121 = v118[4]; /*0x441434*/
          v122 = v118[1]; /*0x441437*/
          v118[4] = v121 + 1; /*0x44143d*/
          *(unsigned int *)(v122 + 4 * v121) = this; /*0x441440*/
        }
      }
      if ( *(unsigned char *)(this->Type + 5808) ) /*0x441449*/
      {
        v123 = (unsigned int *)(this->owner + 272); /*0x441459*/
        v124 = *(unsigned int *)(this->owner + 280); /*0x44145f*/
        if ( *(unsigned int *)(this->owner + 288) < v124 /*0x441484*/
          || (*(unsigned char *)(this->owner + 285) || !v124)
          && (v125 = *(unsigned int *)(this->owner + 292), v125 > 0)
          && (*(unsigned __int8 (__thiscall **)(unsigned int *, int, unsigned int))(*v123 + 8))(v123, v125 + v124, 0) )
        {
          v126 = v123[4]; /*0x44148b*/
          v127 = v123[1]; /*0x44148e*/
          v123[4] = v126 + 1; /*0x441494*/
          *(unsigned int *)(v127 + 4 * v126) = this; /*0x441497*/
        }
      }
      if ( *(int *)(this->Type + 5900) > 0 ) /*0x4414a8*/
      {
        v128 = (unsigned int *)(this->owner + 296); /*0x4414b0*/
        v129 = *(unsigned int *)(this->owner + 304); /*0x4414b6*/
        if ( *(unsigned int *)(this->owner + 312) < v129 /*0x4414db*/
          || (*(unsigned char *)(this->owner + 309) || !v129)
          && (v130 = *(unsigned int *)(this->owner + 316), v130 > 0)
          && (*(unsigned __int8 (__thiscall **)(unsigned int *, int, unsigned int))(*v128 + 8))(v128, v130 + v129, 0) )
        {
          v131 = v128[4]; /*0x4414e2*/
          v132 = v128[1]; /*0x4414e5*/
          v128[4] = v131 + 1; /*0x4414eb*/
          *(unsigned int *)(v132 + 4 * v131) = this; /*0x4414ee*/
        }
      }
      if ( *(unsigned char *)(this->Type + 5837) ) /*0x4414f7*/
      {
        v133 = (unsigned int *)(this->owner + 320); /*0x441507*/
        v134 = *(unsigned int *)(this->owner + 328); /*0x44150d*/
        if ( *(unsigned int *)(this->owner + 336) < v134 /*0x441532*/
          || (*(unsigned char *)(this->owner + 333) || !v134)
          && (v135 = *(unsigned int *)(this->owner + 340), v135 > 0)
          && (*(unsigned __int8 (__thiscall **)(unsigned int *, int, unsigned int))(*v133 + 8))(v133, v135 + v134, 0) )
        {
          v136 = v133[4]; /*0x441539*/
          v137 = v133[1]; /*0x44153c*/
          v133[4] = v136 + 1; /*0x441542*/
          *(unsigned int *)(v137 + 4 * v136) = this; /*0x441545*/
        }
        HouseClass::CalculateCostMultipliers((float *)this->owner); /*0x44154e*/
      }
      v138 = (unsigned int *)(this->owner + 104); /*0x441559*/
      v139 = *(unsigned int *)(this->owner + 112); /*0x44155c*/
      if ( *(unsigned int *)(this->owner + 120) < v139 /*0x441581*/
        || (*(unsigned char *)(this->owner + 117) || !v139)
        && (v140 = *(unsigned int *)(this->owner + 124), v140 > 0)
        && (*(unsigned __int8 (__thiscall **)(unsigned int *, int, unsigned int))(*v138 + 8))(v138, v140 + v139, 0) )
      {
        v141 = v138[4]; /*0x441588*/
        v142 = v138[1]; /*0x44158b*/
        v138[4] = v141 + 1; /*0x441591*/
        *(unsigned int *)(v142 + 4 * v141) = this; /*0x441594*/
      }
      if ( !(unsigned __int8)House_IsCurrentPlayer((void *)this->owner) ) /*0x44159d*/
        BuildingClass::MarkUpgradeComponentUsed((BuildingClass *)(this->owner + 22272), this); /*0x4415b3*/
      result = this->Type; /*0x4415b8*/
      v143 = *(unsigned int *)(result + 3768); /*0x4415be*/
      if ( v143 ) /*0x4415c6*/
      {
        IDA_LOBYTE(result) = *(unsigned char *)(result + 3278); /*0x4415c8*/
        result = HouseClass::UpdateProduction(this->owner, v143, result, 0); /*0x4415d8*/
      }
      IDA_LOBYTE(result) = 1; /*0x4415e0*/
    }
    else
    {
      IDA_LOBYTE(result) = 1; /*0x440b43*/
    }
    return result; /*0x440867*/
}
} // namespace gamemd

// 0x442230
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::ProcessAttack()
{
    int v1; // ebp
    int v3; // ebx
    int v4; // eax
    int Member; // edi
    int v6; // eax
    unsigned char *Type; // eax
    double v9; // st7
    int v10; // eax
    int v11; // edi
    void *v12; // eax
    int v13; // eax
    unsigned int *captureManager; // ecx
    int v15; // ebx
    unsigned int *v16; // edi
    unsigned int *v17; // ebp
    unsigned int *v18; // eax
    int *v19; // eax
    int v20; // eax
    int v21; // edx
    int v22; // edi
    int LightSource; // ecx
    int v24; // ecx
    int v25; // eax
    int v28; // edi
    int vtable0; // edx
    unsigned short *v30; // eax
    int FoundationHeight; // edi
    int FoundationWidth; // eax
    AnimClass *v33; // ebp
    int v34; // eax
    void **v35; // edi
    void **v36; // eax
    AnimClass *v37; // ebp
    void **v38; // edi
    AnimClass *v39; // ebp
    void **v40; // edi
    char v41; // al
    unsigned short v42; // dx
    int v43; // eax
    BOOL v46; // ebx
    int v47; // ebp
    int v48; // edi
    AnimTypeClass *v49; // eax
    int v50; // eax
    BOOL v53; // ebx
    int *v54; // edx
    int v55; // ebp
    int v56; // edi
    AnimTypeClass *v57; // eax
    int *v58; // [esp+14h] [ebp-B4h]
    int *v59; // [esp+14h] [ebp-B4h]
    int *v60; // [esp+14h] [ebp-B4h]
    int v61; // [esp+1Ch] [ebp-ACh]
    int v62; // [esp+1Ch] [ebp-ACh]
    void *v63; // [esp+2Ch] [ebp-9Ch]
    char v64; // [esp+30h] [ebp-98h]
    __int64 v65; // [esp+34h] [ebp-94h]
    int *Anims; // [esp+3Ch] [ebp-8Ch] BYREF
    void **v67; // [esp+40h] [ebp-88h] BYREF
    void *Block; // [esp+44h] [ebp-84h]
    int v69; // [esp+48h] [ebp-80h]
    int v70; // [esp+4Ch] [ebp-7Ch]
    int v71; // [esp+50h] [ebp-78h]
    int v72; // [esp+54h] [ebp-74h]
    int v73; // [esp+58h] [ebp-70h] BYREF
    int v74; // [esp+5Ch] [ebp-6Ch]
    int v75; // [esp+60h] [ebp-68h] BYREF
    int v76; // [esp+64h] [ebp-64h]
    int GroundHeight; // [esp+68h] [ebp-60h]
    int ProductionFrame; // [esp+6Ch] [ebp-5Ch]
    unsigned int v79[3]; // [esp+70h] [ebp-58h] BYREF
    char v80[4]; // [esp+7Ch] [ebp-4Ch] BYREF
    int v81[3]; // [esp+80h] [ebp-48h] BYREF
    int v82[3]; // [esp+8Ch] [ebp-3Ch] BYREF
    int v83[3]; // [esp+98h] [ebp-30h] BYREF
    int v84[3]; // [esp+A4h] [ebp-24h] BYREF
    char v85[12]; // [esp+B0h] [ebp-18h] BYREF
    char v86[12]; // [esp+BCh] [ebp-Ch] BYREF
    double v87; // [esp+CCh] [ebp+4h]
    double v88; // [esp+D4h] [ebp+Ch]
    int *v89; // [esp+DCh] [ebp+14h]
    int v90; // [esp+E0h] [ebp+18h]
    unsigned char *v91; // [esp+E4h] [ebp+1Ch]

    v1 = IDA_HIDWORD(v88); /*0x442238*/
    v74 = 0; /*0x442245*/
    if ( this == (BuildingClass *)IDA_HIDWORD(v88) /*0x442262*/
      && !*(unsigned char *)((*(int (__thiscall **)(unsigned int))(*(unsigned int *)IDA_HIDWORD(v88) + 132))(IDA_HIDWORD(v88)) + 3232) )
    {
      return v74; /*0x442c06*/
    }
    BuildingClass::GetHealthRatio(this); /*0x44226a*/
    __asm { fstp st } /*0x442271*/
    v3 = 0; /*0x442278*/
    ProductionFrame = BuildingClass::GetProductionFrame(this); /*0x44227a*/
    if ( IDA_HIDWORD(v88) && !(*(unsigned __int8 (__thiscall **)(BuildingClass *))((char *)this->vtable1 + 128))(this) ) /*0x442286*/
    {
      *(unsigned int *)(this->owner + 21720) = dword_A8ED84; /*0x44229c*/
      *(unsigned int *)(this->owner + 21724) = *(unsigned int *)((*(int (__thiscall **)(unsigned int))(*(unsigned int *)IDA_HIDWORD(v88) + 60))(IDA_HIDWORD(v88)) /*0x4422b4*/
                                                   + 48);
      TechnoClass::EvaluateMission(this, IDA_SHIDWORD(v88)); /*0x4422bc*/
    }
    Anims = (int *)(*(int (__thiscall **)(BuildingClass *, unsigned int))((char *)this->vtable1 + 264))(this, 0); /*0x4422d2*/
    EventClass::resetEvent((EventClass *)&v67, 0, 0); /*0x4422d6*/
    v4 = this->radioLinks[2]; /*0x4422db*/
    v67 = (void *)&vt_DynamicVectorClass_TechnoClass; /*0x4422e1*/
    v72 = 10; /*0x4422eb*/
    v71 = 0; /*0x4422f3*/
    if ( v4 > 0 ) /*0x4422f7*/
    {
      do /*0x442356*/
      {
        Member = Team::GetMember((Team *)this, v3); /*0x442301*/
        if ( Member /*0x442334*/
          && (v71 < v69
           || ((((v70) >> 8) & 0xFF) || !v69)
           && v72 > 0
           && ((unsigned __int8 (__thiscall *)(void ***, int, unsigned int))v67[2])(&v67, v72 + v69, 0)) )
        {
          v6 = v71++; /*0x44233f*/
          *((unsigned int *)Block + v6) = Member; /*0x44234a*/
        }
        ++v3; /*0x442353*/
      }
      while ( v3 < this->radioLinks[2] ); /*0x442356*/
    }
    Type = (unsigned char *)this->Type; /*0x442358*/
    if ( Type[5823] && !(unsigned char)v89 ) /*0x442371*/
    {
      v67 = (void *)&vt_VectorClass_TechnoClass; /*0x442377*/
      if ( Block && (((v70) >> 8) & 0xFF) ) /*0x442389*/
      {
        RA2_OPDEL(Block); /*0x44238c*/
        return 0; /*0x4423a0*/
      }
      return 0; /*0x442389*/
    }
    if ( Type[5814] && Type[563] ) /*0x4423ad*/
    {
      v67 = (void *)&vt_VectorClass_TechnoClass; /*0x4423bb*/
      if ( Block && (((v70) >> 8) & 0xFF) ) /*0x4423cd*/
        RA2_OPDEL(Block); /*0x4423d0*/
      return 0; /*0x4423e4*/
    }
    if ( this->health ) /*0x4423e7*/
    {
      v9 = TechnoClass::ReceiveDamage_Shield(this, v87, v88, v89, v90, v91, v63, v64, v65); /*0x442425*/
      v11 = v10; /*0x44242a*/
      (v10) = ((v10) & ~0xFF) | ((unsigned int)(this->isAliveFlag[0]) & 0xFF) /*0x44242c*/
      v74 = v11; /*0x442434*/
      if ( !(unsigned char)v10 ) /*0x442438*/
      {
        v67 = (void *)&vt_VectorClass_TechnoClass; /*0x44243e*/
        if ( Block && (((v70) >> 8) & 0xFF) ) /*0x442450*/
          RA2_OPDEL(Block); /*0x442453*/
        return v11; /*0x442467*/
      }
      switch ( v11 ) /*0x442476*/
      {
        case 2: /*0x442476*/
          _EAX = this->ambientParticles; /*0x4426ac*/
          if ( _EAX ) /*0x4426b4*/
          {
            __asm /*0x4426b6*/
            {
              fld dword ptr [eax+0E8h]
              fmul ds:flt_7E4460
              fstp dword ptr [eax+0E8h]
            }
            *(float *)(_EAX + 232) = _ET1; /*0x4426c2*/
          }
          goto LABEL_64; /*0x4426c2*/
        case 3: /*0x442476*/
  LABEL_64:
          if ( *(unsigned int *)((*(int (__thiscall **)(BuildingClass *))((char *)this->vtable1 + 132))(this) + 1336) == -1 ) /*0x4426d9*/
          {
            v79[0] = this->location[0]; /*0x4426e5*/
            v79[1] = this->location[1]; /*0x4426f0*/
            v79[2] = this->location[2]; /*0x4426fc*/
            PlayAudioAt2(*(unsigned int *)&dword_8871E0->__pad_704[16], v79, 0); /*0x442706*/
          }
          while ( *(unsigned short *)Anims != 0x7FFF || *((unsigned short *)Anims + 1) != 0x7FFF ) /*0x44271c*/
          {
            v28 = *Anims; /*0x442722*/
            vtable0 = this->vtable1; /*0x442724*/
            ++Anims; /*0x44272b*/
            v73 = v28; /*0x442734*/
            v30 = (unsigned short *)(*(int (__thiscall **)(BuildingClass *, char *))(vtable0 + 440))(this, v80); /*0x442738*/
            IDA_LOWORD(v28) = *v30 + v28; /*0x44273e*/
            IDA_LOWORD(v30) = (((unsigned int)(v73) >> 16) & 0xFFFF) + v30[1]; /*0x442745*/
            GroundHeight = 0; /*0x44274a*/
            v75 = ((__int16)v28 << 8) + 128; /*0x442768*/
            v76 = ((__int16)v30 << 8) + 128; /*0x442778*/
            GroundHeight = Cell::GetGroundHeight(&v75); /*0x442781*/
            if ( *(unsigned char *)(IDA_LODWORD(v88) + 330) ) /*0x442785*/
            {
              FoundationHeight = ((int *)this->Type)->GetFoundationHeight(0); /*0x4427a6*/
              FoundationWidth = BuildingTypeClass::GetFoundationWidth((BuildingTypeClass *)this->Type); /*0x4427a8*/
              switch ( Random::Range( /*0x4427d7*/
                         (Random *)&dword_A8B230[14].NeedsSaveOrLink,
                         0,
                         FoundationHeight + FoundationWidth + 5) )
              {
                case 1: /*0x4427d7*/
                case 2: /*0x4427d7*/
                case 3: /*0x4427d7*/
                case 4: /*0x4427d7*/
                case 5: /*0x4427d7*/
                  v33 = (AnimClass *)RA2_OPNEW(0x1C8u); /*0x4427e8*/
                  if ( v33 ) /*0x4427ef*/
                  {
                    v34 = Random_Range((void *)&dword_A8B230[14].NeedsSaveOrLink, 1, 3); /*0x442804*/
                    v35 = (void **)dword_8871E0->Easy[11]; /*0x442818*/
                    v61 = v34; /*0x44281e*/
                    v58 = RandomCoordScatter(v81, &v75, v9, 96, 0); /*0x442834*/
                    v36 = AnimClass::ctor(v33, *v35, v58, 0, v61, (void *)0x600, 0, 0); /*0x442836*/
                    goto LABEL_76; /*0x442836*/
                  }
                  break; /*0x442836*/
                case 6: /*0x4427d7*/
                case 7: /*0x4427d7*/
                case 8: /*0x4427d7*/
                  v37 = (AnimClass *)RA2_OPNEW(0x1C8u); /*0x442845*/
                  if ( v37 ) /*0x44284c*/
                  {
                    v62 = Random_Range((void *)&dword_A8B230[14].NeedsSaveOrLink, 1, 3); /*0x44287b*/
                    v38 = (void **)(dword_8871E0->Easy[11] + 4); /*0x44288a*/
                    v59 = RandomCoordScatter(v82, &v75, v9, 96, 0); /*0x442894*/
                    v36 = AnimClass::ctor(v37, *v38, v59, 0, v62, (void *)0x600, 0, 0); /*0x442896*/
                    goto LABEL_76; /*0x442896*/
                  }
                  break; /*0x442896*/
                case 9: /*0x4427d7*/
                  v39 = (AnimClass *)RA2_OPNEW(0x1C8u); /*0x4428a2*/
                  if ( v39 ) /*0x4428a9*/
                  {
                    v40 = (void **)(dword_8871E0->Easy[11] + 8); /*0x4428d6*/
                    v60 = RandomCoordScatter(v84, &v75, v9, 96, 0); /*0x4428e0*/
                    v36 = AnimClass::ctor(v39, *v40, v60, 0, 1, (void *)0x600, 0, 0); /*0x4428e4*/
  LABEL_76:
                    if ( v36 ) /*0x4428eb*/
                      BuildingClass::AimTurret((BuildingClass *)v36, this); /*0x4428f4*/
                  }
                  break; /*0x4428f9*/
                default:
                  continue;
              }
            }
          }
          v1 = IDA_HIDWORD(v88); /*0x4428fe*/
          break; /*0x4428fe*/
        case 4: /*0x442476*/
          if ( this->bunkerLinkedUnit ) /*0x4424a2*/
          {
            v13 = ((int (__thiscall *)(void ***, int *))v67[4])(&v67, &this->bunkerLinkedUnit); /*0x4424bb*/
            if ( v13 != -1 && v13 < v71 && v13 < --v71 ) /*0x4424d2*/
            {
              do /*0x4424e6*/
              {
                ++v13; /*0x4424d8*/
                *((unsigned int *)Block + v13 - 1) = *((unsigned int *)Block + v13); /*0x4424dc*/
              }
              while ( v13 < v71 ); /*0x4424e6*/
            }
            BuildingClass::RemoveLimpet(this); /*0x4424ea*/
          }
          captureManager = (unsigned int *)this->captureManager; /*0x4424ef*/
          if ( captureManager ) /*0x4424f7*/
            CaptureManager::FreeAll(captureManager); /*0x4424f9*/
          if ( this->locomotorTarget ) /*0x4424fe*/
            TechnoClass::EjectPassengers(this, 1); /*0x44250c*/
          v15 = 0; /*0x442515*/
          if ( v71 > 0 ) /*0x442519*/
          {
            do /*0x4425fb*/
            {
              v16 = (unsigned int *)*((unsigned int *)Block + v15); /*0x442523*/
              v17 = (unsigned int *)(*(int (__thiscall **)(unsigned int *, char *))(*v16 + 72))(v16, v85); /*0x442537*/
              v18 = (unsigned int *)(*(int (__thiscall **)(BuildingClass *, char *))((char *)this->vtable1 + 72))(this, v86); /*0x442543*/
              v19 = Coord::Subtract((Coord *)v83, *v18 - *v17, v18[1] - v17[1], v18[2] - v17[2]); /*0x442564*/
              v75 = *v19; /*0x44256b*/
              v76 = v19[1]; /*0x442576*/
              GroundHeight = v19[2]; /*0x44257d*/
              if ( (int)Coord::Length((Coord *)&v75) < 256 || *(unsigned char *)(this->Type + 5835) ) /*0x442593*/
              {
                v20 = (*(int (__thiscall **)(unsigned int *))(*v16 + 132))(v16); /*0x4425ba*/
                v21 = *v16; /*0x4425c6*/
                v73 = 10 * *(unsigned int *)(v20 + 160); /*0x4425d6*/
                (*(void (__thiscall **)(unsigned int *, int *, unsigned int, unsigned int, unsigned int, int, int, unsigned int))(v21 + 364))( /*0x4425ee*/
                  v16,
                  &v73,
                  0,
                  *(unsigned int *)&dword_8871E0->__pad_C3C[876],
                  0,
                  1,
                  1,
                  0);
              }
              else
              {
                (*(void (__thiscall **)(BuildingClass *, int, unsigned int *))((char *)this->vtable1 + 632))(this, 23, v16); /*0x4425a4*/
                v16[320] = 0; /*0x4425aa*/
              }
              ++v15; /*0x4425f8*/
            }
            while ( v15 < v71 ); /*0x4425fb*/
            v1 = IDA_HIDWORD(v88); /*0x442601*/
          }
          v22 = v69; /*0x44260c*/
          ((void (__thiscall *)(void ***))v67[3])(&v67); /*0x442614*/
          ((void (__thiscall *)(void ***, int, unsigned int))v67[2])(&v67, v22, 0); /*0x442622*/
          if ( *(unsigned char *)(this->Type + 5499) ) /*0x44262b*/
            BuildingClass::UnloadUnits(this, 0, 0); /*0x44263b*/
          LightSource = this->LightSource; /*0x442640*/
          if ( LightSource ) /*0x442648*/
            MapClass::ScrollOnce(LightSource, 0); /*0x44264c*/
          (*(void (__thiscall **)(BuildingClass *, unsigned int, int, int *, int *))((char *)this->vtable1 + 1260))( /*0x442665*/
            this,
            0,
            v1,
            v89,
            Anims);
          v24 = this->C4Timer[0]; /*0x44266b*/
          v25 = this->C4Timer[2]; /*0x442671*/
          if ( v24 == -1 ) /*0x44267a*/
            goto LABEL_60; /*0x44267a*/
          if ( (int)dword_A8ED84 - v24 < v25 ) /*0x442686*/
          {
            v25 -= (int)dword_A8ED84 - v24; /*0x44268c*/
  LABEL_60:
            if ( v25 > 0 ) /*0x442690*/
            {
              (*(void (__thiscall **)(BuildingClass *))((char *)this->vtable1 + 248))(this); /*0x44269a*/
              BuildingClass::AfterDestruction(this); /*0x4426a2*/
            }
          }
          break; /*0x4426a7*/
        case 5: /*0x442476*/
          v12 = Block; /*0x44247d*/
          v67 = (void *)&vt_VectorClass_TechnoClass; /*0x442481*/
          if ( Block && (((v70) >> 8) & 0xFF) ) /*0x442497*/
            goto LABEL_126; /*0x442497*/
          return v74; /*0x442497*/
        default:
          break;
      }
    }
    if ( this->isAliveFlag[0] ) /*0x442905*/
    {
      if ( v1 ) /*0x442944*/
      {
        if ( !v74 ) /*0x442950*/
          goto LABEL_113; /*0x442950*/
        if ( !*(unsigned char *)(this->Type + 562) /*0x44296a*/
          && !(*(unsigned __int8 (__thiscall **)(BuildingClass *))((char *)this->vtable1 + 128))(this) )
        {
          HouseClass::NotifyUnderAttack((HouseClass *)this->owner, this); /*0x44297b*/
        }
        this->OwnerCountryIndex = *(unsigned int *)((*(int (__thiscall **)(int))(*(unsigned int *)v1 + 60))(v1) + 48); /*0x44298b*/
        if ( this->currentMission != 19 /*0x4429fa*/
          && !(unsigned __int8)((ObjectClass *)this->owner)->IsAlliedWithObjectHouse(v1)
          && *(unsigned int *)(*(int (__thiscall **)(BuildingClass *, unsigned int))((char *)this->vtable1 + 1016))(this, 0)
          && !*(unsigned char *)(*(unsigned int *)(*(unsigned int *)(*(int (__thiscall **)(BuildingClass *, unsigned int))((char *)this->vtable1 + 1016))(
                                                  this,
                                                  0)
                                   + 160)
                       + 676)
          && (!this->target
           || !(*(unsigned __int8 (__thiscall **)(BuildingClass *, int))((char *)this->vtable1 + 940))(this, this->target)) )
        {
          if ( (*(int (__thiscall **)(int))(*(unsigned int *)v1 + 44))(v1) == 2 /*0x442a2a*/
            || (unsigned __int8)House_IsCurrentPlayer((void *)this->owner)
            && !IDA_LOBYTE(dword_8871E0->ElevationBonusCap[0]) )
          {
            if ( !(unsigned __int8)TimerClass::Active((int)this->primaryFacing) /*0x442a56*/
              && (*(unsigned __int8 (__thiscall **)(BuildingClass *))((char *)this->vtable1 + 848))(this) )
            {
              IDA_LOWORD(v73) = 0; /*0x442a66*/
              v41 = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink); /*0x442a73*/
              IDA_LOBYTE(v42) = 0; /*0x442a78*/
              IDA_HIBYTE(v42) = v41; /*0x442a7e*/
              v43 = v73; /*0x442a80*/
              (((v43) >> 8) & 0xFF) = 0; /*0x442a84*/
              Anims = (int *)(v43 | v42); /*0x442a8c*/
              FacingClass::Update((char *)this->primaryFacing, &Anims); /*0x442a90*/
            }
          }
          else
          {
            (*(void (__thiscall **)(BuildingClass *, int))((char *)this->vtable1 + 968))(this, v1); /*0x442a39*/
          }
        }
      }
      if ( v74 ) /*0x442a9b*/
      {
        BuildingClass::GetHealthRatio(this); /*0x442aa3*/
        _EDX = dword_8871E0; /*0x442aa8*/
        __asm /*0x442aae*/
        {
          fcomp qword ptr [edx+1700h]
          fnstsw ax
        }
        v46 = (_AX & 0x4100) != 0; /*0x442ab9*/
        if ( this->IsDamaged[0] != v46 ) /*0x442aca*/
        {
          v47 = 0; /*0x442ad2*/
          this->IsDamaged[0] = v46; /*0x442ad4*/
          v48 = 0; /*0x442ada*/
          Anims = this->Anims; /*0x442adc*/
          do /*0x442b35*/
          {
            if ( *Anims ) /*0x442ae4*/
            {
              if ( v46 ) /*0x442aeb*/
              {
                _EDX = (RulesClass *)this->Type; /*0x442aed*/
                v49 = (AnimTypeClass *)&_EDX->__pad_C3C[v48 + 800]; /*0x442af3*/
              }
              else
              {
                v49 = (AnimTypeClass *)(v48 + this->Type + 3916); /*0x442b02*/
              }
              if ( v49 && IDA_LOBYTE(v49->vtable1) ) /*0x442b0d*/
                (this)->PlayAnim((int)_EDX, v49, v47, v46, 0, 0); /*0x442b1b*/
            }
            v48 += 68; /*0x442b24*/
            ++v47; /*0x442b27*/
            _EDX = (RulesClass *)++Anims; /*0x442b28*/
          }
          while ( v48 < 1428 ); /*0x442b35*/
        }
      }
  LABEL_113:
      v50 = BuildingClass::GetProductionFrame(this); /*0x442b37*/
      if ( ProductionFrame != v50 ) /*0x442b42*/
      {
        this->needsRedraw[0] = 1; /*0x442b4a*/
        BuildingClass::GetHealthRatio(this); /*0x442b51*/
        _ECX = dword_8871E0; /*0x442b56*/
        __asm /*0x442b5c*/
        {
          fcomp qword ptr [ecx+1700h]
          fnstsw ax
        }
        v53 = (_AX & 0x4100) != 0; /*0x442b67*/
        if ( this->IsDamaged[0] != v53 ) /*0x442b78*/
        {
          v54 = this->Anims; /*0x442b7a*/
          v55 = 0; /*0x442b80*/
          this->IsDamaged[0] = v53; /*0x442b82*/
          v56 = 0; /*0x442b88*/
          Anims = this->Anims; /*0x442b8a*/
          do /*0x442be3*/
          {
            if ( *Anims ) /*0x442b92*/
            {
              if ( v53 ) /*0x442b99*/
              {
                v57 = (AnimTypeClass *)(v56 * 4 + this->Type + 3932); /*0x442ba1*/
              }
              else
              {
                v54 = (int *)this->Type; /*0x442baa*/
                v57 = (AnimTypeClass *)&v54[v56 + 979]; /*0x442bb0*/
              }
              if ( v57 && IDA_LOBYTE(v57->vtable1) ) /*0x442bbb*/
                (this)->PlayAnim((int)v54, v57, v55, v53, 0, 0); /*0x442bc9*/
            }
            v56 += 17; /*0x442bd2*/
            ++v55; /*0x442bd5*/
            v54 = ++Anims; /*0x442bd6*/
          }
          while ( v56 < 357 ); /*0x442be3*/
        }
      }
      v12 = Block; /*0x442be5*/
      v67 = (void *)&vt_VectorClass_TechnoClass; /*0x442be9*/
      if ( Block && (((v70) >> 8) & 0xFF) ) /*0x442bfb*/
  LABEL_126:
        RA2_OPDEL(v12); /*0x442bfd*/
      return v74; /*0x442bfe*/
    }
    v67 = (void *)&vt_VectorClass_TechnoClass; /*0x442913*/
    if ( Block && (((v70) >> 8) & 0xFF) ) /*0x442925*/
      RA2_OPDEL(Block); /*0x442928*/
    return 4; /*0x442396*/
}
} // namespace gamemd

// 0x445E50
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::GetFacingToTarget()
{
    double v1; // st7
    AbstractClass *target; // ecx
    int *v4; // edi
    int *v5; // eax
    int v7; // ecx
    int v8; // [esp+20h] [ebp-20h]
    int v9; // [esp+24h] [ebp-1Ch] BYREF
    char v10[12]; // [esp+28h] [ebp-18h] BYREF
    char v11[12]; // [esp+34h] [ebp-Ch] BYREF
    int *v12; // [esp+44h] [ebp+4h]

    if ( (*((unsigned __int8 (__thiscall **)(BuildingClass *))this->vtable1 + 255))(this) || (target = ((unsigned int *)this)[0]) == 0 ) /*0x445e6a*/
    {
      v7 = *(unsigned int *)ProgressTimer::GetValue((ProgressTimer *)((unsigned int *)this)[0], &v9); /*0x445eec*/
      *v12 = v7; /*0x445ef3*/
      return (int)v12; /*0x445eee*/
    }
    else
    {
      v4 = (int *)(*((int (__thiscall **)(AbstractClass *, char *))target->vtable1 + 18))(target, v10); /*0x445e79*/
      v5 = (int *)(*((int (__thiscall **)(BuildingClass *, char *))this->vtable1 + 18))(this, v11); /*0x445e82*/
      v8 = *v4; /*0x445e89*/
      v9 = *v5; /*0x445e8d*/
      Math::CalcAngle((double)v5[1] - (double)v4[1], (double)v8 - (double)v9); /*0x445eac*/
      (v9) = ((v9) & ~0xFFFF) | ((unsigned int)(Math::RoundToInt((v1 - 1.570796326794897) * -10430.06004058427)) & 0xFFFF) /*0x445ec5*/
      *v12 = v9; /*0x445ed3*/
      return (int)v12; /*0x445eca*/
    }
}
} // namespace gamemd

// 0x445F00
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::SelectTargetTypeFlags()
{
    Building **v2; // eax
    int v3; // edi
    int v4; // edx
    Building **v5; // eax
    int v7; // [esp+Ch] [ebp+4h]
    int v8; // [esp+10h] [ebp+8h]
    char v9; // [esp+14h] [ebp+Ch]

    if ( *(unsigned int *)(*((int (__thiscall **)(BuildingClass *, unsigned int))this->vtable1 + 254))(this, 0) ) /*0x445f0e*/
    {
      v2 = (Building **)(*((int (__thiscall **)(BuildingClass *, unsigned int))this->vtable1 + 254))(this, 0); /*0x445f19*/
      v3 = Building::GetRenderType(*v2) | v7; /*0x445f2a*/
    }
    else
    {
      v3 = v7; /*0x445f2e*/
    }
    if ( *(unsigned int *)(*((int (__thiscall **)(BuildingClass *, int))this->vtable1 + 254))(this, 1) ) /*0x445f3e*/
    {
      v5 = (Building **)(*((int (__thiscall **)(BuildingClass *, int))this->vtable1 + 254))(this, 1); /*0x445f49*/
      v3 |= Building::GetRenderType(*v5); /*0x445f56*/
    }
    return (int)TechnoClass::SelectAutoTarget_Start_AU((TechnoClass *)this, v4, v3 | 1, v8, v9); /*0x445f6d*/
}
} // namespace gamemd

// 0x447110
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::ToggleSellMode()
{
    int result; // eax
    BuildingTypeClass *Type; // ecx
    int v4; // [esp+8h] [ebp+4h]

    if ( this->BuildingClass_field_bool_6E9 ) /*0x447113*/
    {
      if ( v4 == -1 ) /*0x447128*/
      {
        if ( (*((int (__thiscall **)(BuildingClass *))this->vtable1 + 97))(this) == 19 ) /*0x44717b*/
          goto LABEL_12; /*0x44717b*/
        goto LABEL_11; /*0x44717b*/
      }
      if ( !v4 ) /*0x44712c*/
      {
        result = (*((int (__thiscall **)(BuildingClass *))this->vtable1 + 97))(this); /*0x447158*/
        if ( result != 19 ) /*0x447161*/
          return result; /*0x447161*/
        goto LABEL_12; /*0x447161*/
      }
      if ( v4 != 1 ) /*0x447131*/
      {
  LABEL_12:
        result = House::IsHumanPlayer((House *)((unsigned int *)this)[0]); /*0x447195*/
        if ( (unsigned char)result ) /*0x4471a2*/
          return PlayVocClass(*(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1804), 0x2000, 1.0, 0); /*0x4471bc*/
        return result; /*0x4471c2*/
      }
      result = (*((int (__thiscall **)(BuildingClass *))this->vtable1 + 97))(this); /*0x447135*/
      if ( result != 19 ) /*0x44713e*/
      {
        (result) = ((result) & ~0xFF) | ((unsigned int)(this->C4Applied) & 0xFF) /*0x447144*/
        if ( !(unsigned char)result ) /*0x44714c*/
        {
  LABEL_11:
          (*((void (__thiscall **)(BuildingClass *, int, unsigned int))this->vtable1 + 122))(this, 19, 0); /*0x44717d*/
          (*((void (__thiscall **)(BuildingClass *))this->vtable1 + 123))(this); /*0x44718f*/
          goto LABEL_12; /*0x44718f*/
        }
      }
    }
    else
    {
      Type = this->Type; /*0x4471c5*/
      (result) = ((result) & ~0xFF) | ((unsigned int)(Type->FirestormWall) & 0xFF) /*0x4471cb*/
      if ( (unsigned char)result ) /*0x4471d3*/
      {
        (*((void (__thiscall **)(BuildingTypeClass *, HouseClass *))Type->vtable1 + 33))(Type, ((unsigned int *)this)[0]); /*0x4471de*/
        House_IsCurrentPlayer((void *)((unsigned int *)this)[0]); /*0x4471ea*/
        (*((void (__thiscall **)(BuildingClass *))this->vtable1 + 53))(this); /*0x4471f3*/
        return (*((int (__thiscall **)(BuildingClass *))this->vtable1 + 62))(this); /*0x4471fd*/
      }
    }
    return result; /*0x4471c1*/
}
} // namespace gamemd

// 0x447540
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::HandleRepairCursor()
{
    BuildingTypeClass *Type; // eax
    short *v4; // edi
    int v5; // ebx
    void *v6; // eax
    unsigned int *v7; // eax
    BuildingTypeClass *v8; // eax
    int v9; // ecx
    int v10; // edx
    unsigned __int8 (__thiscall **vtable0)(BuildingClass *, unsigned int *); // eax
    unsigned int v12[3]; // [esp+Ch] [ebp-Ch] BYREF
    short *v13; // [esp+1Ch] [ebp+4h]
    char v14; // [esp+20h] [ebp+8h]
    char v15; // [esp+24h] [ebp+Ch]

    Type = this->Type; /*0x447548*/
    if ( Type->InvisibleInGame ) /*0x44754e*/
      return 0; /*0x447560*/
    if ( *(unsigned int *)&Type->VoiceMove && v14 ) /*0x447577*/
    {
      v4 = v13; /*0x44757d*/
      v5 = TechnoClass::HandleCursor((TechnoClass *)this, v13, 0, v15); /*0x447592*/
      v6 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v13); /*0x447594*/
      v7 = (unsigned int *)(*(int (__thiscall **)(void *, unsigned int *))(*(unsigned int *)v6 + 72))(v6, v12); /*0x4475a2*/
      if ( !(unsigned __int8)Cell::IsPassable(v7) ) /*0x4475ab*/
      {
        if ( v5 == 1 ) /*0x4475b7*/
        {
          if ( *((unsigned int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v13) + 59) == 5 ) /*0x4475cb*/
          {
            v8 = this->Type; /*0x4475cd*/
            if ( ((unsigned int *)v8)[0] ) /*0x4475d3*/
            {
              if ( ((unsigned int *)v8)[0] ) /*0x4475dd*/
                return 6; /*0x4475f2*/
            }
          }
          goto LABEL_14; /*0x4475e5*/
        }
  LABEL_13:
        if ( v5 != 2 ) /*0x447611*/
          goto LABEL_27; /*0x447611*/
        goto LABEL_14; /*0x447611*/
      }
    }
    else
    {
      v4 = v13; /*0x4475f9*/
      v5 = TechnoClass::HandleCursor((TechnoClass *)this, v13, v14, v15); /*0x447607*/
    }
    if ( v5 != 1 ) /*0x44760c*/
      goto LABEL_13; /*0x44760c*/
  LABEL_14:
    if ( !(*((unsigned __int8 (__thiscall **)(BuildingClass *))this->vtable1 + 40))(this) && v5 == 1 ) /*0x447628*/
    {
      v5 = 0; /*0x44762a*/
      goto LABEL_35; /*0x44762c*/
    }
    if ( (*((unsigned __int8 (__thiscall **)(BuildingClass *))this->vtable1 + 161))(this) ) /*0x447635*/
    {
      if ( !(unsigned __int8)Mouse::IsButtonDown(*(unsigned int *)((char *)&stru_A8EB00 + 248)) /*0x447664*/
        && !(unsigned __int8)Mouse::IsButtonDown(((unsigned int *)&stru_A8EB00)[24]) )
      {
        v5 = 0; /*0x44766d*/
        goto LABEL_35; /*0x44766f*/
      }
      if ( this->Type->Factory[0] != 3 ) /*0x447681*/
      {
        v9 = *v4; /*0x447683*/
        v10 = v4[1]; /*0x447686*/
        vtable0 = (unsigned __int8 (__thiscall **)(BuildingClass *, unsigned int *))this->TechnoClass; /*0x44768a*/
        v12[2] = 0; /*0x44768c*/
        v12[0] = (v9 << 8) + 128; /*0x44769d*/
        v12[1] = (v10 << 8) + 128; /*0x4476b1*/
        if ( !vtable0[179](this, v12) ) /*0x4476b5*/
          v5 = 2; /*0x4476bf*/
        if ( (*((unsigned int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v4) + 80) & 0x100) == 0 /*0x4476e5*/
          && *((unsigned int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v4) + 19) )
        {
          v5 = 2; /*0x4476ec*/
          goto LABEL_35; /*0x4476f1*/
        }
      }
    }
  LABEL_27:
    if ( v5 != 5 ) /*0x4476f6*/
      goto LABEL_35; /*0x4476f6*/
    if ( *(unsigned int *)(*((int (__thiscall **)(BuildingClass *, unsigned int))this->vtable1 + 254))(this, 0) ) /*0x447704*/
    {
      if ( !*(unsigned char *)(*(unsigned int *)(*(unsigned int *)(*((int (__thiscall **)(BuildingClass *, unsigned int))this->vtable1 + 254))( /*0x44772d*/
                                                this,
                                                0)
                                 + 160)
                     + 677)
        || this->Type->EMPulseCannon )
      {
        v5 = 0; /*0x447737*/
      }
      if ( ((unsigned int *)this)[0] == 19 ) /*0x447740*/
      {
        v5 = 0; /*0x447742*/
        goto LABEL_35; /*0x447744*/
      }
      if ( v5 != 5 ) /*0x447749*/
      {
  LABEL_35:
        if ( (*((unsigned __int8 (__thiscall **)(BuildingClass *))this->vtable1 + 161))(this) ) /*0x44774f*/
        {
          if ( (unsigned __int8)House::IsHumanPlayer((House *)((unsigned int *)this)[0]) ) /*0x44775f*/
            return 1; /*0x447768*/
        }
      }
    }
    return v5; /*0x447558*/
}
} // namespace gamemd

// 0x447780
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::StartProduction(int type_index)
{
    int result; // eax
    int v4; // edi
    int BuildingClass_field_int_534; // ecx
    BuildingTypeClass *Type; // ecx
    int *v7; // ebp
    BOOL v10; // ebx
    bool v11; // al
    int v12; // edx
    char *v13; // eax
    bool v14; // zf
    BuildingTypeClass *v15; // eax
    BOOL v18; // ebx
    bool v19; // al
    int v20; // edx
    char *v21; // eax
    BuildingTypeClass *v22; // eax
    BOOL v25; // ebx
    bool v26; // al
    int v27; // edx
    char *v28; // eax
    BuildingTypeClass *v29; // eax
    BOOL v32; // ebx
    bool v33; // al
    int v34; // edx
    char *v35; // eax
    BuildingTypeClass *v36; // eax
    BOOL v39; // ebx
    bool v40; // al
    int v41; // edx
    char *v42; // eax
    BuildingTypeClass *v43; // eax
    int v44; // ecx
    int v45; // [esp+Ch] [ebp-8h]

    result = -1; /*0x447783*/
    v4 = a2; /*0x44778a*/
    BuildingClass_field_int_534 = this->BuildingClass_field_int_534; /*0x44778e*/
    this->BuildingClass_field_int_538 = a2; /*0x447794*/
    if ( BuildingClass_field_int_534 == -1 || !a2 || dword_A8E7AC )
    {
      Type = this->Type; /*0x4477b0*/
      this->BuildingClass_field_int_538 = -1; /*0x4477b6*/
      this->BuildingClass_field_int_534 = a2; /*0x4477c1*/
      v7 = &Type->BuildingAnimFrame[3 * a2]; /*0x4477c7*/
      if ( dword_A8E7AC )
      {
        BuildingClass::GetHealthRatio(this); /*0x4477dd*/
        _EDX = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x4477e2*/
        __asm /*0x4477e8*/
        {
          fcomp qword ptr [edx+1700h]
          fnstsw ax
        }
        v10 = (_AX & 0x4100) != 0; /*0x4477f3*/
        v11 = (*((int (__thiscall **)(BuildingClass *))this->vtable1 + 258))(this) > 0; /*0x44780a*/
        IDA_LOBYTE(a2) = v11; /*0x44780f*/
        if ( v10 ) /*0x447813*/
        {
          v13 = &this->Type->__pad_F70[1204]; /*0x44781b*/
        }
        else
        {
          v14 = !v11; /*0x447822*/
          v15 = this->Type; /*0x447824*/
          if ( v14 ) /*0x44782a*/
            v13 = &v15->__pad_F70[1188]; /*0x447833*/
          else
            v13 = &v15->__pad_F70[1220]; /*0x44782c*/
        }
        if ( v13 && *v13 ) /*0x44783c*/
          (this)->PlayAnim(v12, v13, 18, v10, a2, 0); /*0x44784e*/
        if ( dword_A8E7AC )
        {
          BuildingClass::GetHealthRatio(this); /*0x447862*/
          _EDX = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x447867*/
          __asm /*0x44786d*/
          {
            fcomp qword ptr [edx+1700h]
            fnstsw ax
          }
          v18 = (_AX & 0x4100) != 0; /*0x447878*/
          v19 = (*((int (__thiscall **)(BuildingClass *))this->vtable1 + 258))(this) > 0; /*0x44788f*/
          IDA_LOBYTE(a2) = v19; /*0x447894*/
          if ( v18 ) /*0x447898*/
          {
            v21 = &this->Type->__pad_F70[184]; /*0x4478a0*/
          }
          else
          {
            v14 = !v19; /*0x4478a7*/
            v22 = this->Type; /*0x4478a9*/
            if ( v14 ) /*0x4478af*/
              v21 = &v22->__pad_F70[168]; /*0x4478b8*/
            else
              v21 = &v22->__pad_F70[200]; /*0x4478b1*/
          }
          if ( v21 && *v21 ) /*0x4478c1*/
            (this)->PlayAnim(v20, v21, 3, v18, a2, 0); /*0x4478d3*/
          if ( dword_A8E7AC )
          {
            BuildingClass::GetHealthRatio(this); /*0x4478e7*/
            _EDX = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x4478ec*/
            __asm /*0x4478f2*/
            {
              fcomp qword ptr [edx+1700h]
              fnstsw ax
            }
            v25 = (_AX & 0x4100) != 0; /*0x4478fd*/
            v26 = (*((int (__thiscall **)(BuildingClass *))this->vtable1 + 258))(this) > 0; /*0x447914*/
            IDA_LOBYTE(a2) = v26; /*0x447919*/
            if ( v25 ) /*0x44791d*/
            {
              v28 = &this->Type->__pad_F70[252]; /*0x447925*/
            }
            else
            {
              v14 = !v26; /*0x44792c*/
              v29 = this->Type; /*0x44792e*/
              if ( v14 ) /*0x447934*/
                v28 = &v29->__pad_F70[236]; /*0x44793d*/
              else
                v28 = &v29->__pad_F70[268]; /*0x447936*/
            }
            if ( v28 && *v28 ) /*0x447946*/
              (this)->PlayAnim(v27, v28, 4, v25, a2, 0); /*0x447958*/
            if ( dword_A8E7AC )
            {
              BuildingClass::GetHealthRatio(this); /*0x44796c*/
              _EDX = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x447971*/
              __asm /*0x447977*/
              {
                fcomp qword ptr [edx+1700h]
                fnstsw ax
              }
              v32 = (_AX & 0x4100) != 0; /*0x447982*/
              v33 = (*((int (__thiscall **)(BuildingClass *))this->vtable1 + 258))(this) > 0; /*0x447999*/
              IDA_LOBYTE(a2) = v33; /*0x44799e*/
              if ( v32 ) /*0x4479a2*/
              {
                v35 = &this->Type->__pad_F70[320]; /*0x4479aa*/
              }
              else
              {
                v14 = !v33; /*0x4479b1*/
                v36 = this->Type; /*0x4479b3*/
                if ( v14 ) /*0x4479b9*/
                  v35 = &v36->__pad_F70[304]; /*0x4479c2*/
                else
                  v35 = &v36->__pad_F70[336]; /*0x4479bb*/
              }
              if ( v35 && *v35 ) /*0x4479cb*/
                (this)->PlayAnim(v34, v35, 5, v32, a2, 0); /*0x4479dd*/
              if ( dword_A8E7AC )
              {
                BuildingClass::GetHealthRatio(this); /*0x4479ed*/
                _EDX = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x4479f2*/
                __asm /*0x4479f8*/
                {
                  fcomp qword ptr [edx+1700h]
                  fnstsw ax
                }
                v39 = (_AX & 0x4100) != 0; /*0x447a03*/
                v40 = (*((int (__thiscall **)(BuildingClass *))this->vtable1 + 258))(this) > 0; /*0x447a1a*/
                IDA_LOBYTE(a2) = v40; /*0x447a1f*/
                if ( v39 )
                {
                  v42 = &this->Type->__pad_F70[388]; /*0x447a2b*/
                }
                else
                {
                  v14 = !v40; /*0x447a32*/
                  v43 = this->Type; /*0x447a34*/
                  v42 = v14 ? &v43->__pad_F70[372] : &v43->__pad_F70[404];
                }
                if ( v42 && *v42 ) /*0x447a4c*/
                  (this)->PlayAnim(v41, v42, 6, v39, a2, 0); /*0x447a5e*/
              }
            }
          }
        }
      }
      result = v7[2]; /*0x447a69*/
      if ( (((unsigned int)(((unsigned int *)this->Type)[0]) >> 24) & 0xFF) ) /*0x447a6c*/
      {
        if ( v4 ) /*0x447a78*/
          result = (int)Rules::GetProductionTimeMult((Rules *)&stru_A8EB00.ObjectTypeClass[24], v7[2]); /*0x447a80*/
      }
      v44 = *(unsigned int * *)((char *)&stru_A8EB00 + 644); /*0x447a85*/
      *(unsigned int *)&this->behindAnim = result; /*0x447a91*/
      ((unsigned int *)this)[2] = v44; /*0x447a97*/
      ((unsigned int *)this)[3] = v45; /*0x447a9d*/
      ((unsigned int *)this)[4] = result; /*0x447aa0*/
      ((unsigned int *)this)[0] = *v7; /*0x447aa7*/
    }
    return result; /*0x447aae*/
}
} // namespace gamemd

// 0x447AC0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
CoordStruct *BuildingClass::GetExitCoords(CoordStruct *out, uint32_t unknown) const
{
    BuildingClass *v1; // edi
    int v2; // esi
    int FoundationWidth; // eax
    int v4; // ecx
    void *vtable1; // edx
    void *vtable2; // edi
    int *v8; // [esp+Ch] [ebp+4h]

    v1 = this; /*0x447ac2*/
    v2 = (((int *)this->Type)->GetFoundationHeight(0) << 7) - 128; /*0x447adc*/
    FoundationWidth = BuildingTypeClass::GetFoundationWidth(v1->Type); /*0x447ae2*/
    v1 = (BuildingClass *)((char *)v1 + 156); /*0x447ae7*/
    v4 = (int)v1->vtable1 + 128 * FoundationWidth - 128; /*0x447af7*/
    vtable1 = ((unsigned int *)v1)[0]; /*0x447afd*/
    vtable2 = ((unsigned int *)v1)[0]; /*0x447b04*/
    *v8 = v4; /*0x447b07*/
    v8[1] = (int)vtable1 + v2; /*0x447b09*/
    v8[2] = (int)vtable2; /*0x447b0c*/
    return (int)v8; /*0x447b0f*/
}
} // namespace gamemd

// 0x447B20
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::CalculateTurretAngle()
{
    double v1; // st7
    BuildingTypeClass *Type; // eax
    unsigned short *v4; // eax
    short v5; // dx
    int v6; // eax
    int v7; // ecx
    int *location; // esi
    int v9; // edx
    unsigned int *Coords_Alt; // eax
    int v12; // edx
    int v13; // ecx
    int *v14; // edi
    int *v15; // eax
    int v16; // ecx
    int v17; // eax
    int *v18; // edx
    int v19; // edx
    int LinkIndex; // eax
    BuildingTypeClass *v21; // ecx
    int *v22; // edi
    int *v23; // eax
    int v24; // ecx
    int v25; // edx
    int v26; // ecx
    int v27; // edx
    int v28; // edi
    int v29; // edx
    int v30; // esi
    int (__thiscall **vtable0)(BuildingClass *, unsigned char *); // edx
    char *v32; // eax
    int *v33; // ecx
    unsigned int v34[3]; // [esp+24h] [ebp-30h] BYREF
    char v35[12]; // [esp+30h] [ebp-24h] BYREF
    char v36[12]; // [esp+3Ch] [ebp-18h] BYREF
    char v37; // [esp+48h] [ebp-Ch] BYREF
    int *v38; // [esp+58h] [ebp+4h]
    int v39; // [esp+5Ch] [ebp+8h] BYREF

    Type = this->Type; /*0x447b27*/
    if ( Type->Weeder ) /*0x447b2d*/
    {
      v4 = (unsigned short *)(*((int (__thiscall **)(BuildingClass *, int *))this->vtable1 + 110))(this, &v39); /*0x447b40*/
      v5 = v4[1] + 1; /*0x447b51*/
      v6 = ((__int16)(*v4 + 2) << 8) + 128; /*0x447b5f*/
      v7 = (v5 << 8) + 128; /*0x447b64*/
      location = ((unsigned int *)this)[0]; /*0x447b6c*/
      v34[2] = 0; /*0x447b72*/
      v34[0] = *location; /*0x447b78*/
      v34[1] = location[1]; /*0x447b7f*/
      v9 = location[2]; /*0x447b83*/
      *v38 = v6; /*0x447b8c*/
      v38[1] = v7; /*0x447b90*/
      v38[2] = v9; /*0x447b93*/
      return (int)v38; /*0x447b9b*/
    }
    if ( Type->Refinery ) /*0x447b9e*/
    {
      Coords_Alt = (unsigned int *)ObjectClass::GetCoords_Alt((IUnknown *)this); /*0x447bb4*/
      v12 = Coords_Alt[1]; /*0x447bbb*/
      v13 = *Coords_Alt + 128; /*0x447bbe*/
  LABEL_15:
      v17 = Coords_Alt[2]; /*0x447ce1*/
      *v38 = v13; /*0x447cea*/
      v38[1] = v12; /*0x447cec*/
      v38[2] = v17; /*0x447cef*/
      return (int)v38; /*0x447cf9*/
    }
    if ( Type->Bunker && v39 ) /*0x447bdd*/
    {
      v14 = (int *)(*(int (__stdcall **)(unsigned int *))(*(unsigned int *)v39 + 72))(v34); /*0x447bef*/
      v15 = (int *)(*((int (__thiscall **)(BuildingClass *, char *))this->vtable1 + 18))(this, v35); /*0x447bf8*/
      v16 = *v15; /*0x447bfd*/
      v39 = *v14; /*0x447bff*/
      Math::CalcAngle((double)v15[1] - (double)v14[1], (double)v39 - (double)v16); /*0x447c22*/
      (v39) = ((v39) & ~0xFFFF) | ((unsigned int)(Math::RoundToInt((v1 - 1.570796326794897) * -10430.06004058427)) & 0xFFFF) /*0x447c3b*/
      if ( (unsigned __int8)((((unsigned int)v39 >> 7) + 1) >> 1) >= 0x40u ) /*0x447c54*/
      {
        if ( (unsigned __int8)((((unsigned int)v39 >> 7) + 1) >> 1) < 0x80u ) /*0x447c76*/
        {
          Coords_Alt = (unsigned int *)(*((int (__thiscall **)(BuildingClass *, char *))this->vtable1 + 18))(this, v35); /*0x447c81*/
          v13 = *Coords_Alt + 128; /*0x447c89*/
          v12 = Coords_Alt[1] + 128; /*0x447c8f*/
          goto LABEL_15; /*0x447c95*/
        }
        if ( (unsigned __int8)((((unsigned int)v39 >> 7) + 1) >> 1) < 0xC0u ) /*0x447ca3*/
        {
          Coords_Alt = (unsigned int *)(*((int (__thiscall **)(BuildingClass *, char *))this->vtable1 + 18))(this, v35); /*0x447cae*/
          v13 = *Coords_Alt - 128; /*0x447cb6*/
          v12 = Coords_Alt[1] + 128; /*0x447cbc*/
          goto LABEL_15; /*0x447cc2*/
        }
        Coords_Alt = (unsigned int *)(*((int (__thiscall **)(BuildingClass *, char *))this->vtable1 + 18))(this, v35); /*0x447ccd*/
        v13 = *Coords_Alt - 128; /*0x447cd2*/
      }
      else
      {
        Coords_Alt = (unsigned int *)(*((int (__thiscall **)(BuildingClass *, char *))this->vtable1 + 18))(this, v35); /*0x447c5f*/
        v13 = *Coords_Alt + 128; /*0x447c64*/
      }
      v12 = Coords_Alt[1] - 128; /*0x447cdb*/
      goto LABEL_15; /*0x447cdb*/
    }
    if ( !Type->Helipad && !Type->UnitRepair ) /*0x447d06*/
    {
      v18 = (int *)ObjectClass::GetCoords_Alt((IUnknown *)this); /*0x447d1d*/
      *v38 = *v18; /*0x447d28*/
      v38[1] = v18[1]; /*0x447d2d*/
      v38[2] = v18[2]; /*0x447d34*/
      return (int)v38; /*0x447d3a*/
    }
    v19 = *(unsigned int *)&Type->__pad_1714[108]; /*0x447d3d*/
    if ( v19 ) /*0x447d46*/
    {
      if ( v19 == 1 ) /*0x447d4d*/
      {
        v22 = *(int **)&Type->__pad_1714[116]; /*0x447db5*/
        v23 = (int *)(*((int (__thiscall **)(BuildingClass *, char *))this->vtable1 + 18))(this, v36); /*0x447dc4*/
        v24 = *v23; /*0x447dc7*/
        v25 = *v22; /*0x447dc9*/
        goto LABEL_24; /*0x447dcb*/
      }
      LinkIndex = RadioClass::FindLinkIndex((RadioClass *)this, v39); /*0x447d52*/
      if ( LinkIndex >= 0 ) /*0x447d59*/
      {
        v21 = this->Type; /*0x447d5b*/
        if ( LinkIndex < *(unsigned int *)&v21->__pad_1714[108] ) /*0x447d67*/
        {
          v22 = (int *)(*(unsigned int *)&v21->__pad_1714[116] + 12 * LinkIndex); /*0x447d74*/
          v23 = (int *)(*((int (__thiscall **)(BuildingClass *, char *))this->vtable1 + 18))(this, v35); /*0x447d7e*/
          v24 = *v22; /*0x447d81*/
          v25 = *v23; /*0x447d83*/
  LABEL_24:
          v26 = v25 + v24; /*0x447d85*/
          v27 = v22[1]; /*0x447d8a*/
          v28 = v22[2]; /*0x447d8d*/
          v29 = v23[1] + v27; /*0x447d90*/
          v30 = v23[2]; /*0x447d92*/
          *v38 = v26; /*0x447d9d*/
          v38[1] = v29; /*0x447d9f*/
          v38[2] = v30 + v28; /*0x447da2*/
          return (int)v38; /*0x447daa*/
        }
      }
      vtable0 = (int (__thiscall **)(BuildingClass *, unsigned char *))this->TechnoClass; /*0x447dad*/
      v32 = (char *)v34; /*0x447daf*/
    }
    else
    {
      vtable0 = (int (__thiscall **)(BuildingClass *, unsigned char *))this->TechnoClass; /*0x447dcd*/
      v32 = &v37; /*0x447dcf*/
    }
    v33 = (int *)vtable0[18](this, v32); /*0x447dd9*/
    *v38 = *v33; /*0x447de4*/
    v38[1] = v33[1]; /*0x447de9*/
    v38[2] = v33[2]; /*0x447df0*/
    return (int)v38; /*0x447b96*/
}
} // namespace gamemd

// 0x447E90
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::TogglePrimaryFactory()
{
    BuildingTypeClass *Type; // eax
    int v2; // eax
    unsigned int *v3; // ecx
    unsigned char v5[12]; // [esp+4h] [ebp-Ch] BYREF
    unsigned int *v6; // [esp+14h] [ebp+4h]
    int v7; // [esp+18h] [ebp+8h]

    Type = this->Type; /*0x447e90*/
    if ( Type->Helipad || Type->UnitRepair || Type->Bunker ) /*0x447ec2*/
      v2 = (*((int (__thiscall **)(BuildingClass *, unsigned char *, int))this->vtable1 + 42))(this, v5, v7); /*0x447ee4*/
    else
      v2 = (*((int (__thiscall **)(BuildingClass *, unsigned char *))this->vtable1 + 18))(this, v5); /*0x447ed3*/
    v3 = (unsigned int *)v2; /*0x447eea*/
    *v6 = *v3; /*0x447ef4*/
    v6[1] = v3[1]; /*0x447ef9*/
    v6[2] = v3[2]; /*0x447f00*/
    return (int)v6; /*0x447efc*/
}
} // namespace gamemd

// 0x44ACF0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::ProcessActiveUpdate()
{
    double v1; // st7
    BuildingTypeClass *Type; // eax
    int missionStatus; // ecx
    int v6; // eax
    AbstractClass *v8; // edi
    AbstractClass *v9; // eax
    int v10; // eax
    AbstractClass *v12; // edi
    AbstractClass *v13; // eax
    unsigned short *v14; // ebx
    unsigned short *v15; // eax
    void (__thiscall **v16)(BuildingClass *, int, unsigned int); // eax
    unsigned __int8 (__thiscall **vtable0)(BuildingClass *); // edx
    int v18; // ebp
    int (__thiscall **v19)(BuildingClass *, AbstractClass *, int, int); // eax
    int v20; // edi
    int v21; // edx
    BuildingTypeClass *v22; // eax
    char ROT; // bl
    unsigned int *Value; // eax
    short v25; // dx
    unsigned __int8 (__thiscall **v26)(BuildingClass *); // eax
    unsigned short *v27; // eax
    unsigned short *v28; // eax
    unsigned short *v29; // eax
    BuildingClass *v30; // ecx
    BuildingTypeClass *v31; // eax
    BuildingClass *v32; // ebx
    int *v33; // eax
    int SupportingPrisms; // ecx
    HouseClass *owner; // eax
    ObjectClass *v36; // edi
    int v37; // edx
    int v38; // ecx
    unsigned int *v39; // edx
    int v40; // eax
    int v41; // edx
    int v42; // eax
    int v43; // ebp
    void *v44; // edi
    int *v45; // eax
    int v46; // ecx
    int v47; // edx
    int v48; // eax
    int v49; // edx
    int v52; // ecx
    char *v53; // eax
    int v54; // ecx
    int v55; // eax
    int v58; // ecx
    char *v59; // eax
    int v60; // edx
    int v61; // eax
    AbstractClass *target; // [esp+1Ch] [ebp-84h]
    double v65; // [esp+20h] [ebp-80h]
    unsigned int v66[2]; // [esp+38h] [ebp-68h] BYREF
    double v67; // [esp+40h] [ebp-60h] BYREF
    int bunkersCount; // [esp+4Ch] [ebp-54h] BYREF
    int v69; // [esp+50h] [ebp-50h] BYREF
    char v70[4]; // [esp+54h] [ebp-4Ch] BYREF
    int v72; // [esp+64h] [ebp-3Ch]
    int v73; // [esp+68h] [ebp-38h]
    int v74; // [esp+6Ch] [ebp-34h]
    int v75; // [esp+74h] [ebp-2Ch]
    int v76; // [esp+78h] [ebp-28h]
    char v77[12]; // [esp+7Ch] [ebp-24h] BYREF
    char v78[12]; // [esp+88h] [ebp-18h] BYREF
    char v79[12]; // [esp+94h] [ebp-Ch] BYREF

    Type = this->Type; /*0x44ad01*/
    if ( !Type->SAM ) /*0x44ad0f*/
    {
      if ( !((unsigned int *)this)[0] ) /*0x44af86*/
      {
        (*((void (__thiscall **)(BuildingClass *, unsigned int))this->vtable1 + 242))(this, 0); /*0x44af95*/
        vtable0 = (unsigned __int8 (__thiscall **)(BuildingClass *))this->TechnoClass; /*0x44af9b*/
        this->SupportingPrisms = 0; /*0x44af9f*/
        if ( vtable0[268](this) ) /*0x44afa5*/
          BuildingClass::GetType_Thunk(this); /*0x44afb1*/
        if ( (*((int (__thiscall **)(BuildingClass *))this->vtable1 + 97))(this) != 28 ) /*0x44afc3*/
        {
          (*((void (__thiscall **)(BuildingClass *, int, unsigned int))this->vtable1 + 122))(this, 5, 0); /*0x44afd0*/
          (*((void (__thiscall **)(BuildingClass *))this->vtable1 + 123))(this); /*0x44afda*/
          return 1; /*0x44afec*/
        }
        return 1; /*0x44afc3*/
      }
      v18 = (*((int (__thiscall **)(BuildingClass *, AbstractClass *))this->vtable1 + 185))(this, ((unsigned int *)this)[0]); /*0x44affe*/
      v19 = (int (__thiscall **)(BuildingClass *, AbstractClass *, int, int))this->TechnoClass; /*0x44b000*/
      target = ((unsigned int *)this)[0]; /*0x44b005*/
      this->BuildingClass_field_bool_6DD = 1; /*0x44b008*/
      v20 = v19[240](this, target, v18, 1); /*0x44b015*/
      if ( v20 == 2 ) /*0x44b01a*/
      {
        if ( (*((unsigned __int8 (__thiscall **)(BuildingClass *))this->vtable1 + 255))(this) ) /*0x44b024*/
        {
          if ( this->Type->TurretAnimIsVoxel ) /*0x44b038*/
          {
            v21 = *(unsigned int *)(*((int (__thiscall **)(BuildingClass *, int *, AbstractClass *))this->vtable1 + 314))( /*0x44b05c*/
                               this,
                               &bunkersCount,
                               ((unsigned int *)this)[0]);
            v22 = this->Type; /*0x44b05e*/
            v66[1] = v21; /*0x44b064*/
            if ( !((unsigned int *)v22)[0] /*0x44b0a4*/
              || (ROT = ((unsigned int *)v22)[0],
                  Value = ProgressTimer::GetValue((ProgressTimer *)((unsigned int *)this)[0], &bunkersCount),
                  (v25) = ((v25) & ~0xFF) | ((unsigned int)(0,
                  (v25) = ((v25) & ~(0xFFULL << 24)) | (((unsigned __int64)(unsigned int)(ROT,
                  abs16(v25) >= (int)abs16(*(unsigned short *)Value - ((unsigned int)(v66[1]) & 0xFFFF))) )
            {
              ((char *)((unsigned int *)this)[0])->Set_SyncLog(&v66[1])) & 0xFF) /*0x44b0b3*/
              v20 = (*((int (__thiscall **)(BuildingClass *, AbstractClass *, int, int))this->vtable1 + 240))( /*0x44b0cc*/
                      this,
                      ((unsigned int *)this)[0],
                      v18,
                      1)) & 0xFF) << 24)
            }
          }
        }
      }
      switch ( v20 ) /*0x44b0d7*/
      {
        case 0: /*0x44b0d7*/
          if ( this->UpgradeLevel ) /*0x44b2bc*/
          {
            v30 = (BuildingClass *)this->Upgrades[0]; /*0x44b2c6*/
            if ( v30 ) /*0x44b2ce*/
            {
              if ( BuildingClass::processCapture(v30) ) /*0x44b2d0*/
              {
                (*((void (__thiscall **)(BuildingClass *, AbstractClass *, unsigned int))this->vtable1 + 243))( /*0x44b2e9*/
                  this,
                  ((unsigned int *)this)[0],
                  0);
                (*((void (__thiscall **)(BuildingClass *, AbstractClass *, int))this->vtable1 + 243))( /*0x44b2f3*/
                  this,
                  ((unsigned int *)this)[0],
                  1);
              }
              goto LABEL_116; /*0x44b2f3*/
            }
          }
          v31 = this->Type; /*0x44b2fe*/
          if ( v31 != *(BuildingTypeClass **)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1176) ) /*0x44b30a*/
          {
            if ( !v31->IsAnimDelayedFire ) /*0x44b638*/
            {
              (*((void (__thiscall **)(BuildingClass *, AbstractClass *, int))this->vtable1 + 243))( /*0x44b6d0*/
                this,
                ((unsigned int *)this)[0],
                v18);
              goto LABEL_116; /*0x44b6d0*/
            }
            v60 = v75; /*0x44b644*/
            this->DelayBeforeFiring = v31->DelayedFireDelay; /*0x44b64e*/
            v61 = v76; /*0x44b654*/
            this->PrismTargetCoords[0] = v18; /*0x44b65a*/
            this->PrismStage[0] = 1; /*0x44b65c*/
            this->PrismTargetCoords[1] = v60; /*0x44b666*/
            this->PrismTargetCoords[2] = v61; /*0x44b669*/
            BuildingClass::ClearAnims(this, 3); /*0x44b66e*/
            BuildingClass::GetHealthRatio(this); /*0x44b675*/
            _ECX = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x44b67a*/
            __asm /*0x44b680*/
            {
              fcomp qword ptr [ecx+1700h]
              fnstsw ax
            }
            if ( (_AX & 0x4100) != 0 ) /*0x44b68b*/
            {
              v58 = 1; /*0x44b693*/
              v59 = &this->Type->__pad_F70[660]; /*0x44b698*/
            }
            else
            {
              v58 = 0; /*0x44b6a5*/
              v59 = &this->Type->__pad_F70[644]; /*0x44b6a7*/
            }
            if ( v59 && *v59 ) /*0x44b6b0*/
              goto LABEL_107; /*0x44b6b3*/
  LABEL_116:
            if ( (((unsigned int)(((unsigned int *)this->Type)[0]) >> 8) & 0xFF) ) /*0x44b6dc*/
            {
              TechnoClass::GattlingRateUp_GattlingRateDownReset((float *)this, ((unsigned int *)this)[0]); /*0x44b6ef*/
              ((unsigned int *)this)[0] = 0; /*0x44b6f4*/
            }
            else
            {
              ++((unsigned int *)this)[0]; /*0x44b713*/
            }
            return 1; /*0x44b70a*/
          }
          v32 = 0; /*0x44b319*/
          v66[0] = 0x7FFFFFFF; /*0x44b31b*/
          v33 = (int *)(*((int (__thiscall **)(BuildingClass *, char *))this->vtable1 + 43))(this, v77); /*0x44b323*/
          v72 = *v33; /*0x44b32b*/
          SupportingPrisms = this->SupportingPrisms; /*0x44b32f*/
          v73 = v33[1]; /*0x44b338*/
          v74 = v33[2]; /*0x44b345*/
          if ( SupportingPrisms >= *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1184) ) /*0x44b351*/
            goto LABEL_102; /*0x44b351*/
          owner = ((unsigned int *)this)[0]; /*0x44b357*/
          v66[1] = 0; /*0x44b35d*/
          bunkersCount = owner->bunkersCount; /*0x44b366*/
          if ( bunkersCount <= 0 ) /*0x44b36a*/
            goto LABEL_102; /*0x44b36a*/
          break; /*0x44b36a*/
        case 1: /*0x44b0d7*/
        case 5: /*0x44b0d7*/
        case 6: /*0x44b0d7*/
        case 8: /*0x44b0d7*/
          (*((void (__thiscall **)(BuildingClass *, unsigned int))this->vtable1 + 242))(this, 0); /*0x44b0e3*/
          v26 = (unsigned __int8 (__thiscall **)(BuildingClass *))this->TechnoClass; /*0x44b0e9*/
          this->SupportingPrisms = 0; /*0x44b0ed*/
          if ( v26[268](this) ) /*0x44b0f3*/
            BuildingClass::GetType_Thunk(this); /*0x44b0ff*/
          if ( (*((int (__thiscall **)(BuildingClass *))this->vtable1 + 97))(this) == 28 ) /*0x44b111*/
            return 1; /*0x44b111*/
          if ( (((unsigned int)(((unsigned int *)this->Type)[0]) >> 8) & 0xFF) ) /*0x44b119*/
          {
            TechnoClass::DrainAmmo((char *)this, ((unsigned int *)this)[0]); /*0x44b12c*/
            ((unsigned int *)this)[0] = 0; /*0x44b131*/
          }
          (*((void (__thiscall **)(BuildingClass *, int, unsigned int))this->vtable1 + 122))(this, 5, 0); /*0x44b13e*/
          (*((void (__thiscall **)(BuildingClass *))this->vtable1 + 123))(this); /*0x44b148*/
          goto LABEL_53; /*0x44b148*/
        case 2: /*0x44b0d7*/
          if ( ((unsigned int *)this)[0] ) /*0x44b187*/
          {
            v28 = (unsigned short *)(*((int (__thiscall **)(BuildingClass *, int *, AbstractClass *))this->vtable1 + 314))( /*0x44b19b*/
                             this,
                             &v69,
                             ((unsigned int *)this)[0]);
            FacingClass::Update((char *)((unsigned int *)this)[0], v28); /*0x44b1a8*/
          }
          if ( (((unsigned int)(((unsigned int *)this->Type)[0]) >> 8) & 0xFF) ) /*0x44b1b3*/
          {
            TechnoClass::GattlingRateUp_GattlingRateDownReset((float *)this, ((unsigned int *)this)[0]); /*0x44b1c6*/
            ((unsigned int *)this)[0] = 0; /*0x44b1cb*/
          }
          return 2; /*0x44b1dd*/
        case 3: /*0x44b0d7*/
          if ( ((unsigned int *)this)[0] ) /*0x44b1de*/
          {
            v29 = (unsigned short *)(*((int (__thiscall **)(BuildingClass *, char *, AbstractClass *))this->vtable1 + 314))( /*0x44b1f2*/
                             this,
                             v70,
                             ((unsigned int *)this)[0]);
            FacingClass::Update((char *)((unsigned int *)this)[0], v29); /*0x44b1ff*/
          }
          if ( (((unsigned int)(((unsigned int *)this->Type)[0]) >> 8) & 0xFF) ) /*0x44b20a*/
          {
            TechnoClass::GattlingRateUp_GattlingRateDownReset((float *)this, ((unsigned int *)this)[0]); /*0x44b21d*/
            ((unsigned int *)this)[0] = 0; /*0x44b222*/
          }
          else
          {
            ++((unsigned int *)this)[0]; /*0x44b23c*/
          }
          return 2; /*0x44b234*/
        case 9: /*0x44b0d7*/
          (*((void (__thiscall **)(BuildingClass *, unsigned int))this->vtable1 + 279))(this, 0); /*0x44b289*/
          if ( (((unsigned int)(((unsigned int *)this->Type)[0]) >> 8) & 0xFF) ) /*0x44b295*/
          {
            TechnoClass::DrainAmmo((char *)this, ((unsigned int *)this)[0]); /*0x44b2ac*/
            ((unsigned int *)this)[0] = 0; /*0x44b2b1*/
          }
          goto LABEL_53; /*0x44b2b7*/
        case 10: /*0x44b0d7*/
          if ( !(((unsigned int)(((unsigned int *)this->Type)[0]) >> 8) & 0xFF) ) /*0x44b25d*/
            return 1; /*0x44b25d*/
          TechnoClass::DrainAmmo((char *)this, ((unsigned int *)this)[0]); /*0x44b26c*/
          ((unsigned int *)this)[0] = 0; /*0x44b271*/
          return 1; /*0x44b283*/
        default:
  LABEL_53:
          if ( ((unsigned int *)this)[0] ) /*0x44b14e*/
          {
            v27 = (unsigned short *)(*((int (__thiscall **)(BuildingClass *, char *, AbstractClass *))this->vtable1 + 314))( /*0x44b162*/
                             this,
                             v70,
                             ((unsigned int *)this)[0]);
            FacingClass::Update((char *)((unsigned int *)this)[0], v27); /*0x44b16f*/
          }
          ((unsigned int *)this)[0] = 0; /*0x44b174*/
          return 1; /*0x44b174*/
      }
      while ( 1 ) /*0x44b37d*/
      {
        v36 = *(ObjectClass **)(((unsigned int *)this)[0]->absorbersCount + 4 * v66[1]); /*0x44b37d*/
        if ( v36 && v36->isAliveFlag && v36[7].health == *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1176) ) /*0x44b3a8*/
        {
          v37 = v36[4].ambientSoundController[0]; /*0x44b3ae*/
          v38 = v36[4].ambientSoundController[2]; /*0x44b3b4*/
          if ( v37 != -1 ) /*0x44b3bd*/
          {
            if ( *(unsigned int * *)((char *)&stru_A8EB00 + 644) - v37 >= v38 ) /*0x44b3c8*/
              goto LABEL_86; /*0x44b3c8*/
            v38 -= *(unsigned int * *)((char *)&stru_A8EB00 + 644) - v37; /*0x44b3ca*/
          }
          if ( !v38 ) /*0x44b3ce*/
          {
  LABEL_86:
            if ( !v36[10].customSound_controller[3] /*0x44b406*/
              && !(unsigned __int8)ObjectClass::HasLocation(v36)
              && (*((int (__thiscall **)(ObjectClass *))v36->vtable1 + 97))(v36) != 1
              && v36 != (ObjectClass *)this )
            {
              v39 = (unsigned int *)(*((int (__thiscall **)(ObjectClass *, char *))v36->vtable1 + 43))(v36, v78); /*0x44b41f*/
              v40 = v39[1]; /*0x44b42c*/
              IDA_LODWORD(v67) = v72 - *v39; /*0x44b42f*/
              __asm { fild dword ptr [esp+80h+var_60] } /*0x44b433*/
              v41 = v39[2]; /*0x44b437*/
              IDA_LODWORD(v67) = v40 - v73; /*0x44b43c*/
              __asm { fild dword ptr [esp+80h+var_60] } /*0x44b444*/
              IDA_LODWORD(v67) = v74 - v41; /*0x44b44a*/
              __asm /*0x44b44e*/
              {
                fild dword ptr [esp+80h+var_60]
                fstp [esp+80h+var_28]
                fstp [esp+80h+var_48]
                fld [esp+80h+var_28]
                fstp [esp+80h+var_60]
                fld st
                fmul st, st(1)
                fld [esp+80h+var_60]
                fmul [esp+80h+var_60]
                faddp st(1), st
                fld [esp+80h+var_48]
                fmul [esp+80h+var_48]
                faddp st(1), st
                fstp [esp+80h+var_80]; double
                fstp st
              }
              Math::Sqrt(v65); /*0x44b47f*/
              IDA_LOWORD(v42) = Math::RoundToInt(v1); /*0x44b487*/
              v43 = v42; /*0x44b492*/
              if ( v42 <= (*((int (__thiscall **)(BuildingClass *, int))this->vtable1 + 90))(this, 1) /*0x44b4a6*/
                && (!v32 || v43 < v66[0]) )
              {
                v32 = (BuildingClass *)v36; /*0x44b4a8*/
                v66[0] = v43; /*0x44b4aa*/
              }
            }
          }
        }
        if ( ++v66[1] >= bunkersCount ) /*0x44b4bd*/
        {
          if ( v32 ) /*0x44b4c5*/
          {
            v44 = this->TechnoClass; /*0x44b4d5*/
            ++this->SupportingPrisms; /*0x44b4d7*/
            v45 = (int *)(*((int (__thiscall **)(BuildingClass *, char *, unsigned int, unsigned int, unsigned int, unsigned int))v44 + 44))( /*0x44b4f6*/
                           this,
                           v79,
                           0,
                           0,
                           0,
                           0);
            v46 = *v45; /*0x44b502*/
            v47 = v45[1]; /*0x44b504*/
            v48 = v45[2]; /*0x44b507*/
            v32->DelayBeforeFiring = v32->Type->DelayedFireDelay; /*0x44b512*/
            v32->PrismStage[0] = 2; /*0x44b51e*/
            v32->PrismTargetCoords[0] = v46; /*0x44b528*/
            v32->PrismTargetCoords[1] = v47; /*0x44b52c*/
            v32->PrismTargetCoords[2] = v48; /*0x44b52f*/
            BuildingClass::ClearAnims(v32, 3); /*0x44b532*/
            BuildingClass::GetHealthRatio(v32); /*0x44b539*/
            _ECX = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x44b53e*/
            __asm /*0x44b544*/
            {
              fcomp qword ptr [ecx+1700h]
              fnstsw ax
            }
            if ( (_AX & 0x4100) != 0 ) /*0x44b54f*/
            {
              v52 = 1; /*0x44b557*/
              v53 = &v32->Type->__pad_F70[660]; /*0x44b55c*/
            }
            else
            {
              v52 = 0; /*0x44b569*/
              v53 = &v32->Type->__pad_F70[644]; /*0x44b56b*/
            }
            if ( v53 && *v53 ) /*0x44b578*/
              BuildingClass::PlayAnim(v32, v49, v53, 10, v52, 0, 0); /*0x44b58b*/
            goto LABEL_116; /*0x44b590*/
          }
  LABEL_102:
          this->DelayBeforeFiring = this->Type->DelayedFireDelay; /*0x44b595*/
          v54 = v76; /*0x44b5b1*/
          this->PrismTargetCoords[0] = 0; /*0x44b5b5*/
          v55 = v75; /*0x44b5b7*/
          this->PrismStage[0] = 1; /*0x44b5bb*/
          this->PrismTargetCoords[1] = v55; /*0x44b5c5*/
          this->PrismTargetCoords[2] = v54; /*0x44b5c8*/
          BuildingClass::ClearAnims(this, 3); /*0x44b5cd*/
          BuildingClass::GetHealthRatio(this); /*0x44b5d4*/
          _EDX = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x44b5d9*/
          __asm /*0x44b5df*/
          {
            fcomp qword ptr [edx+1700h]
            fnstsw ax
          }
          if ( (_AX & 0x4100) != 0 ) /*0x44b5ea*/
          {
            v58 = 1; /*0x44b5f2*/
            v59 = &this->Type->__pad_F70[660]; /*0x44b5f7*/
          }
          else
          {
            v58 = 0; /*0x44b604*/
            v59 = &this->Type->__pad_F70[644]; /*0x44b606*/
          }
          if ( !v59 || !*v59 ) /*0x44b613*/
            goto LABEL_116; /*0x44b616*/
  LABEL_107:
          (this)->PlayAnim(_EDX, v59, 10, v58, 0, 0); /*0x44b61c*/
          goto LABEL_116; /*0x44b62b*/
        }
      }
    }
    missionStatus = ((unsigned int *)this)[0]; /*0x44ad15*/
    if ( missionStatus )
    {
      if ( missionStatus != 1 ) /*0x44ad24*/
      {
        _EAX = MissionClass_GetMissionControl((void *)this); /*0x44ad28*/
        __asm /*0x44ad2d*/
        {
          fld qword ptr [eax+18h]
          fmul ds:dbl_7E27F8
        }
        IDA_LOWORD(v6) = Math::RoundToInt(v1); /*0x44ad36*/
        return v6 + Random_Range((void *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x44ad59*/
      }
      v8 = ((unsigned int *)this)[0]; /*0x44ad5a*/
      if ( v8 )
        v9 = (*((int (__thiscall **)(AbstractClass *))v8->vtable1 + 11))(((unsigned int *)this)[0]) == 2 ? v8 : 0;
      else
        v9 = 0; /*0x44ad64*/
      if ( ((unsigned int *)this)[0] && v9 && (*((int (__thiscall **)(AbstractClass *))v9->vtable1 + 116))(v9) ) /*0x44ad92*/
      {
        v10 = (*((int (__thiscall **)(BuildingClass *, AbstractClass *, unsigned int, int))this->vtable1 + 240))( /*0x44adae*/
                this,
                ((unsigned int *)this)[0],
                0,
                1);
        if ( v10 == 5 || v10 == 6 || v10 == 8 ) /*0x44adc1*/
        {
          (*((void (__thiscall **)(BuildingClass *, unsigned int))this->vtable1 + 242))(this, 0); /*0x44ae0d*/
          ((unsigned int *)this)[0] = 0; /*0x44ae13*/
          return 1; /*0x44ae25*/
        }
        if ( v10 != 2 ) /*0x44adc6*/
        {
          if ( !v10 ) /*0x44adca*/
          {
            (*((void (__thiscall **)(BuildingClass *, AbstractClass *, unsigned int))this->vtable1 + 243))(this, ((unsigned int *)this)[0], 0); /*0x44addc*/
            (*((void (__thiscall **)(BuildingClass *, AbstractClass *, int))this->vtable1 + 243))(this, ((unsigned int *)this)[0], 1); /*0x44adef*/
            ((unsigned int *)this)[0] = 0; /*0x44adf5*/
            return 1; /*0x44ae07*/
          }
          return 1; /*0x44b186*/
        }
      }
      else
      {
        (*((void (__thiscall **)(BuildingClass *, unsigned int))this->vtable1 + 242))(this, 0); /*0x44ae2b*/
      }
      ((unsigned int *)this)[0] = 0; /*0x44ae31*/
      return 1; /*0x44ae43*/
    }
    if ( Type->Powered ) /*0x44ae44*/
    {
      if ( Type->PowerDrain > 0 ) /*0x44ae54*/
      {
        HouseClass::GetPowerRatio(((unsigned int *)this)[0]); /*0x44ae5c*/
        __asm /*0x44ae61*/
        {
          fcomp ds:dbl_7E1718
          fnstsw ax
        }
        if ( (_AX & 0x100) != 0 ) /*0x44ae6c*/
          return 1; /*0x44ae6c*/
      }
    }
    v12 = ((unsigned int *)this)[0]; /*0x44ae72*/
    if ( v12 )
      v13 = (*((int (__thiscall **)(AbstractClass *))v12->vtable1 + 11))(((unsigned int *)this)[0]) == 2 ? v12 : 0;
    else
      v13 = 0; /*0x44ae7c*/
    if ( !((unsigned int *)this)[0] || !v13 || !(*((int (__thiscall **)(AbstractClass *))v13->vtable1 + 116))(v13) ) /*0x44aeaa*/
    {
      (*((void (__thiscall **)(BuildingClass *, unsigned int))this->vtable1 + 242))(this, 0); /*0x44af56*/
      v16 = (void (__thiscall **)(BuildingClass *, int, unsigned int))this->TechnoClass; /*0x44af5c*/
      ((unsigned int *)this)[0] = 0; /*0x44af63*/
      v16[122](this, 5, 0); /*0x44af69*/
      (*((void (__thiscall **)(BuildingClass *))this->vtable1 + 123))(this); /*0x44af73*/
      return 1; /*0x44af85*/
    }
    if ( (unsigned __int8)TimerClass::Active((int)((unsigned int *)this)[0]) ) /*0x44aec0*/
      return 1; /*0x44aec7*/
    v14 = (unsigned short *)(*((int (__thiscall **)(BuildingClass *, int *, AbstractClass *))this->vtable1 + 314))( /*0x44aee3*/
                     this,
                     &bunkersCount,
                     ((unsigned int *)this)[0]);
    if ( abs16(*(unsigned short *)ProgressTimer::GetValue((ProgressTimer *)((unsigned int *)this)[0], &v67) - *v14) > 0x2000u ) /*0x44af0d*/
    {
      v15 = (unsigned short *)(*((int (__thiscall **)(BuildingClass *, unsigned int *, AbstractClass *))this->vtable1 + 314))( /*0x44af36*/
                       this,
                       &v66[1],
                       ((unsigned int *)this)[0]);
      FacingClass::Update((char *)((unsigned int *)this)[0], v15); /*0x44af3f*/
    }
    else
    {
      ((unsigned int *)this)[0] = 1; /*0x44af0f*/
    }
    return 1; /*0x44ad52*/
}
} // namespace gamemd

// 0x44C980
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::ProcessSuperWeaponEffects()
{
    double v1; // st7
    HouseClass *owner; // ecx
    void *v4; // eax
    HouseClass *v5; // ebp
    void *v6; // edi
    void *v7; // ebx
    int *v8; // eax
    AnimClass *v9; // eax
    void **v10; // edi
    void *v11; // eax
    int *v12; // ebx
    unsigned int *UIObjectCOM; // eax
    int v14; // edi
    BuildingClass *PsiWarnAnim; // ecx
    int *v16; // eax
    int result; // eax
    AnimClass *v18; // eax
    void **v19; // eax
    void (__thiscall **vtable0)(BuildingClass *, void *, unsigned int); // edi
    void *v21; // eax
    int (__thiscall **v22)(BuildingClass *, unsigned char *, void *); // edi
    void *v23; // eax
    AnimClass *v24; // eax
    int (__thiscall **v25)(BuildingClass *, unsigned char *, void *); // edi
    void *v26; // eax
    int *v27; // eax
    int v28; // ebp
    void *v29; // ebx
    unsigned short *v30; // eax
    int v31; // eax
    int v32; // edx
    int *v33; // eax
    TechnoClass *v35; // eax
    int v36; // eax
    char v37; // cl
    int v38; // edi
    void *v42; // edx
    int *v43; // eax
    unsigned int *v44; // eax
    int v45; // ebx
    int v47; // eax
    char IsCloseEnoughToBuilding; // al
    int v50; // eax
    char v51; // al
    unsigned int v53; // edi
    unsigned int v54; // ebx
    void **v55; // edi
    int v56; // ebp
    unsigned int *v57; // eax
    int v59; // [esp+34h] [ebp-FCh]
    int v60; // [esp+34h] [ebp-FCh]
    double v61; // [esp+38h] [ebp-F8h]
    double v62; // [esp+3Ch] [ebp-F4h]
    double v63; // [esp+3Ch] [ebp-F4h]
    __int64 v64; // [esp+40h] [ebp-F0h]
    double v65; // [esp+40h] [ebp-F0h]
    double v66; // [esp+40h] [ebp-F0h]
    double v67; // [esp+40h] [ebp-F0h]
    double v68; // [esp+40h] [ebp-F0h]
    double v69; // [esp+40h] [ebp-F0h]
    double v70; // [esp+40h] [ebp-F0h]
    double v71; // [esp+40h] [ebp-F0h]
    double v72; // [esp+40h] [ebp-F0h]
    short *v73; // [esp+44h] [ebp-ECh]
    AnimClass *v74; // [esp+5Ch] [ebp-D4h] BYREF
    double v75; // [esp+60h] [ebp-D0h] BYREF
    double v76; // [esp+68h] [ebp-C8h]
    double v77; // [esp+70h] [ebp-C0h]
    double v78; // [esp+78h] [ebp-B8h] BYREF
    void **v79; // [esp+8Ch] [ebp-A4h] BYREF
    double v80; // [esp+90h] [ebp-A0h]
    int v81; // [esp+98h] [ebp-98h]
    int v82[2]; // [esp+A4h] [ebp-8Ch] BYREF
    int v83; // [esp+ACh] [ebp-84h]
    double v84; // [esp+B0h] [ebp-80h] BYREF
    double v85; // [esp+C0h] [ebp-70h] BYREF
    int v86; // [esp+CCh] [ebp-64h]
    double v87[2]; // [esp+D0h] [ebp-60h] BYREF
    short v88; // [esp+E0h] [ebp-50h] BYREF
    unsigned int v89[3]; // [esp+E4h] [ebp-4Ch] BYREF
    int v90; // [esp+F0h] [ebp-40h] BYREF
    unsigned char v91[4]; // [esp+F4h] [ebp-3Ch] BYREF
    unsigned char v92[4]; // [esp+F8h] [ebp-38h] BYREF
    int v93; // [esp+FCh] [ebp-34h] BYREF
    unsigned char v94[12]; // [esp+100h] [ebp-30h] BYREF
    unsigned char v95[12]; // [esp+10Ch] [ebp-24h] BYREF
    unsigned char v96[12]; // [esp+118h] [ebp-18h] BYREF
    unsigned char v97[12]; // [esp+124h] [ebp-Ch] BYREF

    if ( this->Type->NukeSilo ) /*0x44c998*/
    {
      switch ( ((unsigned int *)this)[0] ) /*0x44c9b5*/
      {
        case 0: /*0x44c9b5*/
          this->BuildingClass_field_bool_6DD = 0; /*0x44c9c0*/
          BuildingClass::StartProduction(this, 2); /*0x44c9c7*/
          owner = ((unsigned int *)this)[0]; /*0x44c9cc*/
          ((unsigned int *)this)[0] = 1; /*0x44c9d2*/
          v4 = CellCoord::To_CellObj( /*0x44c9e8*/
                 (CellCoord *)&stru_87F5F0.__pad_58[416],
                 (short *)&owner->HouseClass_field_timer_C[2]);
          v5 = ((unsigned int *)this)[0]; /*0x44c9ed*/
          v6 = v4; /*0x44c9f8*/
          v7 = *(void **)(*(unsigned int *)((char *)&FootClass_Array + 892) + 4 * AnimTypeClass::FindIndex((AnimTypeClass * *)((char *)&stru_818E00 + 72))); /*0x44ca0f*/
          v8 = (int *)(*(int (__thiscall **)(void *, unsigned int *))(*(unsigned int *)v6 + 72))(v6, v89); /*0x44ca14*/
          v82[0] = *v8; /*0x44ca1e*/
          v82[1] = v8[1]; /*0x44ca25*/
          v83 = v8[2]; /*0x44ca2c*/
          v9 = (AnimClass *)RA2_OPNEW(0x1C8u); /*0x44ca30*/
          if ( v9 ) /*0x44ca3a*/
            v10 = AnimClass::ctor(v9, v7, v82, 0, 1, (void *)0x600, 0, 0); /*0x44ca56*/
          else
            v10 = 0; /*0x44ca5a*/
          BuildingClass::SetField95((BuildingClass *)v10, 0); /*0x44ca60*/
          Function::Method_424CA0(v10, (int)v5); /*0x44ca68*/
          *((unsigned char *)v10 + 413) = 1; /*0x44ca6d*/
          this->PsiWarnAnim = (AnimClass *)v10; /*0x44ca74*/
          goto LABEL_7; /*0x44ca74*/
        case 1: /*0x44c9b5*/
  LABEL_7:
          if ( this->BuildingClass_field_bool_6DD ) /*0x44ca7a*/
          {
            BuildingClass::StartProduction(this, 4); /*0x44ca88*/
            ((unsigned int *)this)[0] = 2; /*0x44ca8d*/
          }
          goto LABEL_9; /*0x44ca8d*/
        case 2: /*0x44c9b5*/
  LABEL_9:
          (*((void (__thiscall **)(BuildingClass *, double *))this->vtable1 + 18))(this, &v78); /*0x44ca97*/
          v11 = CellCoord::To_CellObj( /*0x44cab5*/
                  (CellCoord *)&stru_87F5F0.__pad_58[416],
                  (short *)&((unsigned int *)this)[0]->HouseClass_field_timer_C[2]);
          v12 = *(int **)(*((unsigned int *)dword_A8E334 + this->FiringSWType) + 156); /*0x44cad0*/
          UIObjectCOM = (unsigned int *)CreateUIObjectCOM(v12[40], (int)v11, (int)this, v12[41], v12[43], 255, 1); /*0x44caed*/
          v14 = (int)UIObjectCOM; /*0x44caf2*/
          if ( !UIObjectCOM ) /*0x44caf6*/
            goto LABEL_18; /*0x44caf6*/
          Function::Method_46B260(UIObjectCOM, (int)v12); /*0x44caff*/
          PsiWarnAnim = (BuildingClass *)this->PsiWarnAnim; /*0x44cb04*/
          if ( PsiWarnAnim ) /*0x44cb0c*/
          {
            BuildingClass::SetField95(PsiWarnAnim, v14); /*0x44cb0f*/
            this->PsiWarnAnim = 0; /*0x44cb14*/
          }
          (*(void (__thiscall **)(int))(*(unsigned int *)v14 + 212))(v14); /*0x44cb22*/
          v16 = (int *)(*((int (__thiscall **)(BuildingClass *, double *, unsigned int, unsigned int, unsigned int, unsigned int))this->TechnoClass /*0x44cb46*/
                        + 44))(
                         this,
                         &v84,
                         0,
                         0,
                         0,
                         0);
          v82[0] = *v16; /*0x44cb53*/
          v82[1] = v16[1]; /*0x44cb5f*/
          v83 = v16[2]; /*0x44cb66*/
          Math::SinCos(1.570748388432313); /*0x44cb6a*/
          __asm { fstp [esp+0F0h+var_A0] } /*0x44cb6f*/
          Math::ArcTan2(1.570748388432313); /*0x44cb7d*/
          __asm { fmul [esp+0F8h+var_A0] } /*0x44cb82*/
          __asm
          {
            fmul ds:dbl_7E44A8
            fstp [esp+100h+var_70]
          }
          Math::ArcTan2(1.570748388432313); /*0x44cb9d*/
          __asm { fstp [esp+100h+var_A0] } /*0x44cba2*/
          Math::ArcTan2(1.570748388432313); /*0x44cbb0*/
          __asm { fmul [esp+108h+var_A0] } /*0x44cbb5*/
          v87[1] = v85; /*0x44cbc7*/
          __asm { fmul ds:dbl_7E44A8 } /*0x44cbd5*/
          v76 = v85; /*0x44cbec*/
          __asm { fstp [esp+110h+var_60] } /*0x44cbf0*/
          v75 = v87[0]; /*0x44cc05*/
          Math::SinCos(1.570748388432313); /*0x44cc18*/
          __asm { fmul ds:dbl_7E44A8 } /*0x44cc1d*/
          __asm { fstp [esp+0F0h+var_C0] }
          if ( (*(unsigned __int8 (__thiscall **)(int, int *, double *))(*(unsigned int *)v14 + 496))(v14, v82, &v75) ) /*0x44cc38*/
          {
            v18 = (AnimClass *)RA2_OPNEW(0x1C8u); /*0x44cc67*/
            if ( v18 ) /*0x44cc71*/
              v19 = AnimClass::ctor( /*0x44cc94*/
                      v18,
                      *(void **)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 152),
                      v82,
                      0,
                      1,
                      (void *)0x600,
                      0,
                      0);
            else
              v19 = 0; /*0x44cc9b*/
            v19[64] = (void *)-100; /*0x44cc9d*/
            ((unsigned int *)this)[0] = 3; /*0x44cca7*/
  LABEL_18:
            result = 1; /*0x44ccb1*/
          }
          else
          {
            (*(void (__thiscall **)(int, int))(*(unsigned int *)v14 + 32))(v14, 1); /*0x44cc48*/
            ((unsigned int *)this)[0] = 3; /*0x44cc4b*/
            result = 1; /*0x44cc55*/
          }
          break; /*0x44cc61*/
        case 3: /*0x44c9b5*/
          BuildingClass::StartProduction(this, 5); /*0x44ccc2*/
          ((unsigned int *)this)[0] = 4; /*0x44ccc7*/
          return 6; /*0x44ccdd*/
        case 4: /*0x44c9b5*/
  LABEL_54:
          BuildingClass::StartProduction(this, 1); /*0x44d53c*/
          (*((void (__thiscall **)(BuildingClass *, int, unsigned int))this->vtable1 + 122))(this, 5, 0); /*0x44d54d*/
          return 60; /*0x44d55f*/
        default:
          goto LABEL_20;
      }
    }
    else
    {
  LABEL_20:
      if ( this->FiringSWType != -1 ) /*0x44cce5*/
      {
        vtable0 = (void (__thiscall **)(BuildingClass *, void *, unsigned int))this->TechnoClass; /*0x44cced*/
        v64 = (unsigned int)&((unsigned int *)this)[0]->HouseClass_field_timer_C[2]; /*0x44ccf6*/
        v21 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (short *)v64); /*0x44ccfc*/
        vtable0[243](this, v21, IDA_HIDWORD(v64)); /*0x44cd04*/
        (*((void (__thiscall **)(BuildingClass *, int, unsigned int))this->vtable1 + 122))(this, 5, 0); /*0x44cd12*/
      }
      if ( this->Type->EMPulseCannon ) /*0x44cd1e*/
      {
        switch ( ((unsigned int *)this)[0] ) /*0x44cd3b*/
        {
          case 0: /*0x44cd3b*/
            v22 = (int (__thiscall **)(BuildingClass *, unsigned char *, void *))this->TechnoClass; /*0x44cd48*/
            v23 = CellCoord::To_CellObj( /*0x44cd56*/
                    (CellCoord *)&stru_87F5F0.__pad_58[416],
                    (short *)&((unsigned int *)this)[0]->HouseClass_field_timer_C[1]);
            v24 = *(AnimClass **)v22[314](this, v92, v23); /*0x44cd72*/
            v25 = (int (__thiscall **)(BuildingClass *, unsigned char *, void *))this->TechnoClass; /*0x44cd74*/
            v73 = (short *)&((unsigned int *)this)[0]->HouseClass_field_timer_C[1]; /*0x44cd7c*/
            v74 = v24; /*0x44cd82*/
            v26 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v73); /*0x44cd86*/
            v79 = *(void ***)v25[178](this, v91, v26); /*0x44cdae*/
            if ( abs16(*(unsigned short *)ProgressTimer::GetValue((ProgressTimer *)((unsigned int *)this)[0], &v93) - (unsigned short)v74) ) /*0x44cdce*/
            {
              FacingClass::Update((char *)((unsigned int *)this)[0], &v74); /*0x44cddb*/
              return 1; /*0x44cde0*/
            }
            else
            {
              if ( abs16(*(unsigned short *)ProgressTimer::GetValue((ProgressTimer *)((unsigned int *)this)[0], &v90) - (unsigned short)v79) ) /*0x44ce10*/
                FacingClass::Update((char *)((unsigned int *)this)[0], &v79); /*0x44ce1d*/
              else
                ((unsigned int *)this)[0] = 1; /*0x44ce2f*/
              return 1; /*0x44ce22*/
            }
          case 1: /*0x44cd3b*/
            v74 = (AnimClass *)RA2_OPNEW(0x1C8u); /*0x44ce53*/
            if ( v74 ) /*0x44ce59*/
            {
              v79 = (void **)(*(unsigned int *)((char *)&FootClass_Array + 892) + 4 * GlobalArray::FindString((GlobalArray *)&((unsigned int *)&stru_818E00)[11])); /*0x44ce81*/
              v27 = (int *)(*((int (__thiscall **)(BuildingClass *, unsigned char *, unsigned int, unsigned int, unsigned int, unsigned int))this->TechnoClass /*0x44ce9c*/
                            + 44))(
                             this,
                             v97,
                             0,
                             0,
                             0,
                             0);
              AnimClass::ctor(v74, *v79, v27, 0, 1, (void *)0x600, 0, 0); /*0x44ceae*/
            }
            ((unsigned int *)this)[0] = 2; /*0x44ceb3*/
            return 32; /*0x44cec9*/
          case 2: /*0x44cd3b*/
            v28 = *(unsigned int *)(*((int (__thiscall **)(BuildingClass *, unsigned int))this->vtable1 + 254))(this, 0); /*0x44cefe*/
            v29 = CellCoord::To_CellObj( /*0x44cf22*/
                    (CellCoord *)&stru_87F5F0.__pad_58[416],
                    (short *)&((unsigned int *)this)[0]->HouseClass_field_timer_C[1]);
            IDA_LODWORD(v78) = CellCoord::To_CellObj( /*0x44cf2a*/
                             (CellCoord *)&stru_87F5F0.__pad_58[416],
                             (short *)&((unsigned int *)this)[0]->HouseClass_field_timer_C[1]);
            if ( *(unsigned int *)((char *)&stru_A8EB00 + 619) || ((unsigned int *)this)[0]->HouseClass_field_timer_C[1] == g_TerrainTypeTable ) /*0x44cf50*/
            {
              BuildingClass::StartProduction(this, 1); /*0x44d564*/
              (*((void (__thiscall **)(BuildingClass *, int, unsigned int))this->vtable1 + 122))(this, 5, 0); /*0x44d571*/
              result = 60; /*0x44d577*/
            }
            else
            {
              v30 = (unsigned short *)(*((int (__thiscall **)(BuildingClass *, double *, void *))this->vtable1 + 178))( /*0x44cf6d*/
                               this,
                               &v85,
                               v29);
              FacingClass::Update((char *)((unsigned int *)this)[0], v30); /*0x44cf7a*/
              v31 = (*((int (__thiscall **)(BuildingClass *, unsigned char *, unsigned int, unsigned int, unsigned int, unsigned int))this->TechnoClass /*0x44cf9d*/
                     + 44))(
                      this,
                      v95,
                      0,
                      0,
                      0,
                      0);
              v80 = *(double *)v31; /*0x44cfa5*/
              v81 = *(unsigned int *)(v31 + 8); /*0x44cfb3*/
              v32 = (SLOWORD(((unsigned int *)this)[0]->HouseClass_field_timer_C[1]) << 8) + 128; /*0x44cfdc*/
              v89[1] = (IDA_SHIWORD(((unsigned int *)this)[0]->HouseClass_field_timer_C[1]) << 8) + 128; /*0x44cfe2*/
              v89[0] = v32; /*0x44cfef*/
              v89[2] = 0; /*0x44cff6*/
              Cell::GetGroundHeight(v89); /*0x44d001*/
              v33 = &((unsigned int *)this)[0]->HouseClass_field_timer_C[1]; /*0x44d00f*/
              IDA_LODWORD(v84) = (*(short *)v33 << 8) + 128; /*0x44d023*/
              __asm { fild dword ptr [esp+0F8h+var_80] } /*0x44d027*/
              __asm { fisub dword ptr [esp+0F8h+var_A0] }
              IDA_HIDWORD(v84) = (*((short *)v33 + 1) << 8) + 128; /*0x44d03c*/
              __asm /*0x44d040*/
              {
                fstp [esp+0F8h+var_F0]; double
                fild dword ptr [esp+0F8h+var_A0+4]
                fisub dword ptr [esp+0F8h+var_80+4]
                fstp [esp+0F8h+var_F8]; double
              }
              Math::CalcAngle(v61, v65); /*0x44d04f*/
              __asm /*0x44d054*/
              {
                fsub ds:dbl_7E2820
                fmul ds:dbl_7E2818
              }
              IDA_LOWORD(v84) = Math::RoundToInt(v1); /*0x44d065*/
              _EAX = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x44d06a*/
              __asm /*0x44d074*/
              {
                fild dword ptr [eax+16B8h]
                fstp [esp+0F0h+var_F0]; double
              }
              v35 = (TechnoClass *)ObjectClass::DistanceTo((ObjectClass *)this, (int)v29); /*0x44d07e*/
              v36 = TechnoClass::ComputeScanRange(v35, v66); /*0x44d085*/
              v37 = *(unsigned char *)(v28 + 303); /*0x44d08a*/
              v38 = v36; /*0x44d090*/
              v86 = v36; /*0x44d092*/
              v79 = (void **)CreateUIObjectCOM( /*0x44d0ca*/
                               *(unsigned int *)(v28 + 160),
                               (int)v29,
                               (int)this,
                               *(unsigned int *)(v28 + 164),
                               *(unsigned int *)(v28 + 172),
                               3 * v36 / 4,
                               v37);
              v77 = 0.0; /*0x44d0de*/
              Math::Sqrt(10000.0); /*0x44d0fe*/
              __asm { fstp [esp+0F0h+var_A0] } /*0x44d108*/
              IDA_LODWORD(v84) = SLOWORD(v84) - 0x3FFF; /*0x44d112*/
              __asm /*0x44d116*/
              {
                fild dword ptr [esp+0F0h+var_80]
                fmul ds:dbl_7E2810
                fstp [esp+0F0h+var_80]
              }
              Math::ArcTan2(v84); /*0x44d12e*/
              __asm { fmul [esp+0F8h+var_A0] } /*0x44d133*/
              __asm { fstp [esp+100h+var_D0] }
              Math::SinCos(v84); /*0x44d141*/
              __asm { fmul [esp+100h+var_A0] } /*0x44d146*/
              __asm
              {
                fchs
                fst [esp+0E8h+var_C8]
                fld [esp+0E8h+var_D0]
                fcomp ds:dbl_7E2800
                fnstsw ax
              }
              if ( (_AX & 0x4000) != 0 ) /*0x44d162*/
              {
                __asm /*0x44d164*/
                {
                  fcom ds:dbl_7E2800
                  fnstsw ax
                }
                if ( (_AX & 0x4000) != 0 ) /*0x44d16f*/
                {
                  __asm /*0x44d171*/
                  {
                    fld [esp+0E8h+var_C0]
                    fcomp ds:dbl_7E2800
                    fnstsw ax
                  }
                  if ( (_AX & 0x4000) != 0 ) /*0x44d180*/
                    v75 = 100.0; /*0x44d182*/
                }
              }
              __asm /*0x44d192*/
              {
                fld [esp+0E8h+var_C0]
                fild [esp+0E8h+var_64]
              }
              __asm
              {
                fstp [esp+0F0h+var_A0]
                fld [esp+0F0h+var_D0]
                fmul [esp+0F0h+var_D0]
                fld st(1)
                fmul st, st(2)
                faddp st(1), st
                fld st(2)
                fmul st, st(3)
                faddp st(1), st
                fstp [esp+0F0h+var_F0]; double
                fstp st
                fstp st
              }
              Math::Sqrt(v67); /*0x44d1bf*/
              __asm { fdivr [esp+0F0h+var_A0] } /*0x44d1c4*/
              v42 = this->TechnoClass; /*0x44d1c8*/
              __asm /*0x44d1d9*/
              {
                fld st
                fmul [esp+0F0h+var_D0]
                fstp [esp+0F0h+var_D0]
                fld [esp+0F0h+var_C8]
                fmul st, st(1)
                fstp [esp+0F0h+var_C8]
                fld [esp+0F0h+var_C0]
                fmul st, st(1)
                fstp [esp+0F0h+var_C0]
                fstp st
              }
              v43 = (int *)(*((int (__thiscall **)(BuildingClass *, unsigned char *, unsigned int))v42 + 192))(this, v94, 0); /*0x44d1f9*/
              v82[0] = *v43; /*0x44d201*/
              v82[1] = v43[1]; /*0x44d20c*/
              v83 = v43[2]; /*0x44d213*/
              v44 = (unsigned int *)(*(int (__thiscall **)(unsigned int, unsigned char *))(*(unsigned int *)IDA_LODWORD(v78) + 72))(IDA_LODWORD(v78), v96); /*0x44d221*/
              v45 = v44[2] - v83; /*0x44d23c*/
              _ECX = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x44d248*/
              IDA_LODWORD(v78) = (*v44 - v82[0]) * (*v44 - v82[0]) + (v44[1] - v82[1]) * (v44[1] - v82[1]); /*0x44d250*/
              __asm { fild dword ptr [esp+0E8h+var_B8] } /*0x44d258*/
              __asm
              {
                fstp [esp+0F4h+var_B8]
                fild dword ptr [ecx+16B8h]
              }
              __asm { fstp [esp+0F4h+var_F8+4]; double }
              Math::Sqrt(v78); /*0x44d278*/
              IDA_LOWORD(v47) = Math::RoundToInt(v1); /*0x44d280*/
              v59 = v47; /*0x44d285*/
              IsCloseEnoughToBuilding = TechnoClass::IsCloseEnoughToBuilding((TechnoClass *)this, 0); /*0x44d28a*/
              if ( !(unsigned __int8)ComputeMathFacingAngle(IsCloseEnoughToBuilding, v38, v59, v45, v62, &v74) ) /*0x44d29a*/
              {
                _EDX = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x44d2a0*/
                __asm { fild dword ptr [edx+16B8h] } /*0x44d2ae*/
                __asm { fstp [esp+0F4h+var_F8+4]; double }
                Math::Sqrt(v78); /*0x44d2c2*/
                IDA_LOWORD(v50) = Math::RoundToInt(v1); /*0x44d2ca*/
                v60 = v50; /*0x44d2cf*/
                v51 = TechnoClass::IsCloseEnoughToBuilding((TechnoClass *)this, 0); /*0x44d2e4*/
                if ( !(unsigned __int8)ComputeMathFacingAngle(v51, 10 * v38 / 8, v60, v45, v63, &v74) ) /*0x44d2f4*/
                {
                  IDA_LOWORD(v78) = -1536; /*0x44d2fa*/
                  v74 = (AnimClass *)IDA_LODWORD(v78); /*0x44d305*/
                }
              }
              __asm /*0x44d30e*/
              {
                fld [esp+0E8h+var_C8]
                fmul [esp+0E8h+var_C8]
                fld [esp+0E8h+var_D0]
                fmul [esp+0E8h+var_D0]
              }
              __asm
              {
                faddp st(1), st
                fstp [esp+0F0h+var_F0]; double
              }
              Math::Sqrt(v68); /*0x44d326*/
              __asm { fstp [esp+0F0h+var_A0] } /*0x44d32f*/
              Math::CalcAngle(v77, v80); /*0x44d343*/
              __asm /*0x44d348*/
              {
                fsub ds:dbl_7E2820
                fmul ds:dbl_7E2818
              }
              IDA_LODWORD(v78) = (__int16)Math::RoundToInt(v1) - 0x3FFF; /*0x44d365*/
              __asm /*0x44d369*/
              {
                fild dword ptr [esp+0F0h+var_B8]
                fmul ds:dbl_7E2810
                fstp [esp+0F0h+var_B8]
                fld [esp+0F0h+var_C8]
                fmul [esp+0F0h+var_C8]
                fld [esp+0F0h+var_C0]
                fmul [esp+0F0h+var_C0]
                faddp st(1), st
                fld [esp+0F0h+var_D0]
                fmul [esp+0F0h+var_D0]
                faddp st(1), st
                fstp [esp+0F0h+var_F0]; double
              }
              Math::Sqrt(v69); /*0x44d396*/
              __asm /*0x44d39b*/
              {
                fstp [esp+0F0h+var_A0]
                fld [esp+0F0h+var_B8]
                fcomp ds:dbl_7E2800
              }
              __asm { fnstsw ax }
              if ( (_AX & 0x4000) == 0 ) /*0x44d3b1*/
              {
                v53 = IDA_HIDWORD(v78); /*0x44d3b3*/
                v54 = IDA_LODWORD(v78); /*0x44d3b7*/
                Math::ArcTan2(v78); /*0x44d3bd*/
                __asm { fdivr [esp+0F0h+var_D0] } /*0x44d3c2*/
                __asm { fstp [esp+0F8h+var_D0] }
                Math::ArcTan2(COERCE_DOUBLE(IDA___PAIR64__(v53, v54))); /*0x44d3cc*/
                __asm { fdivr [esp+0F8h+var_C8] } /*0x44d3d1*/
                __asm { fstp [esp+0E8h+var_C8] }
              }
              IDA_LODWORD(v78) = (__int16)v74 - 0x3FFF; /*0x44d3ea*/
              __asm /*0x44d3ee*/
              {
                fild dword ptr [esp+0F0h+var_B8]
                fmul ds:dbl_7E2810
                fstp [esp+0F0h+var_F0]; double
              }
              Math::ArcTan2(v70); /*0x44d3fb*/
              __asm { fmul [esp+0F0h+var_D0] } /*0x44d400*/
              __asm { fstp [esp+0F0h+var_D0] }
              IDA_LODWORD(v78) = (__int16)v74 - 0x3FFF; /*0x44d412*/
              __asm /*0x44d416*/
              {
                fild dword ptr [esp+0F0h+var_B8]
                fmul ds:dbl_7E2810
                fstp [esp+0F0h+var_F0]; double
              }
              Math::ArcTan2(v71); /*0x44d423*/
              __asm { fmul [esp+0F0h+var_C8] } /*0x44d428*/
              __asm { fstp [esp+0F0h+var_C8] }
              IDA_LODWORD(v78) = (__int16)v74 - 0x3FFF; /*0x44d43b*/
              __asm /*0x44d43f*/
              {
                fild dword ptr [esp+0F0h+var_B8]
                fmul ds:dbl_7E2810
                fstp [esp+0F0h+var_F0]; double
              }
              Math::SinCos(v72); /*0x44d44c*/
              __asm { fmul [esp+0F0h+var_A0] } /*0x44d451*/
              v55 = v79; /*0x44d459*/
              __asm { fstp [esp+0E8h+var_C0] } /*0x44d462*/
              if ( !(*((unsigned __int8 (__thiscall **)(void **, int *, double *))*v79 + 124))(v79, v82, &v75) ) /*0x44d482*/
              {
                (*((void (__stdcall **)(void **))*v55 + 2))(v55); /*0x44d539*/
                goto LABEL_54; /*0x44d539*/
              }
              if ( (*((unsigned __int8 (__thiscall **)(BuildingClass *))this->vtable1 + 255))(this) /*0x44d4a0*/
                && *(unsigned char *)((*((int (__thiscall **)(BuildingClass *))this->vtable1 + 33))(this) + 3234) )
              {
                TechnoClass::Fire((TechnoClass *)((unsigned int *)this)[0]); /*0x44d4b0*/
                TechnoClass::Fire((TechnoClass *)((unsigned int *)this)[0]); /*0x44d4bb*/
              }
              if ( !*(unsigned char *)((*((int (__thiscall **)(BuildingClass *))this->vtable1 + 33))(this) + 3285) ) /*0x44d4ca*/
              {
                v56 = *(unsigned int *)(*(unsigned int *)(v28 + 192) /*0x44d4fb*/
                                + 4 * ((unsigned int)Random::State(&Randomizer_Global) % *(unsigned int *)(v28 + 204)));
                v57 = (unsigned int *)(*((int (__thiscall **)(BuildingClass *, double *, unsigned int, unsigned int, unsigned int, unsigned int))this->TechnoClass /*0x44d510*/
                                 + 44))(
                                  this,
                                  v87,
                                  0,
                                  0,
                                  0,
                                  0);
                StartAudioControllerAt(v56, v57, 0); /*0x44d51a*/
              }
              ((unsigned int *)this)[0] = 3; /*0x44d51f*/
              result = 1; /*0x44d529*/
            }
            break; /*0x44d535*/
          case 3: /*0x44cd3b*/
            v88 = 0x4000; /*0x44ced1*/
            FacingClass::Update((char *)((unsigned int *)this)[0], &v88); /*0x44cee2*/
            goto LABEL_54; /*0x44cee7*/
          default:
            goto LABEL_56;
        }
      }
      else
      {
  LABEL_56:
        _EAX = MissionClass_GetMissionControl((void *)this); /*0x44d584*/
        __asm /*0x44d58b*/
        {
          fld qword ptr [eax+10h]
          fmul ds:dbl_7E27F8
        }
        IDA_LOWORD(result) = Math::RoundToInt(v1); /*0x44d594*/
      }
    }
    return result; /*0x44cc5a*/
}
} // namespace gamemd

// 0x44D7D0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::GetTargetFacing()
{
    unsigned int v2; // ecx
    short v4; // dx
    unsigned int v5; // ecx
    int v6; // edx
    int v7; // [esp+4h] [ebp-4h] BYREF
    unsigned int *v8; // [esp+Ch] [ebp+4h]

    if ( ((unsigned int *)this)[0] ) /*0x44d7d4*/
    {
      if ( !(*((unsigned __int8 (__thiscall **)(BuildingClass *))this->vtable1 + 255))(this) /*0x44d81a*/
        || this->Type->TurretAnimIsVoxel )
      {
        v6 = *(unsigned int *)(*((int (__thiscall **)(BuildingClass *, int *, AbstractClass *))this->vtable1 + 314))( /*0x44d864*/
                          this,
                          &v7,
                          ((unsigned int *)this)[0]);
        *v8 = v6; /*0x44d86b*/
        return (int)v8; /*0x44d866*/
      }
      else
      {
        v5 = *(unsigned int *)ProgressTimer::GetValue((ProgressTimer *)((unsigned int *)this)[0], &v7); /*0x44d834*/
        *(unsigned short *)v8 = ((((v5 >> 10) + 1) >> 1) & 0x1F) << 11; /*0x44d847*/
        return (int)v8; /*0x44d836*/
      }
    }
    else
    {
      v2 = *(unsigned int *)ProgressTimer::GetValue((ProgressTimer *)((unsigned int *)this)[0], &v7); /*0x44d7ee*/
      (v4) = ((v4) & ~0xFF) | ((unsigned int)(0) & 0xFF) /*0x44d7fb*/
      (v4) = ((v4) & ~(0xFFULL << 24)) | (((unsigned __int64)(unsigned int)(((v2 >> 7) + 1) >> 1) & 0xFF) << 24) /*0x44d7fd*/
      *(unsigned short *)v8 = v4; /*0x44d7ff*/
      return (int)v8; /*0x44d7f0*/
    }
}
} // namespace gamemd

// 0x44D880
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::ClearFactoryBib()
{
    double v1; // st7
    BuildingTypeClass *Type; // eax
    int v4; // esi
    short v5; // dx
    int v6; // eax
    unsigned int v7; // edi
    int v8; // edi
    unsigned short *v9; // eax
    int v10; // edx
    short v11; // cx
    unsigned short *v12; // edx
    short v13; // bx
    short v14; // bx
    short v15; // cx
    int v16; // ebx
    void *v17; // eax
    int v18; // eax
    int v19; // ebx
    void *v20; // eax
    int v21; // eax
    int v22; // edx
    int *v23; // eax
    int v24; // edx
    int v25; // eax
    int v26; // eax
    void *v27; // eax
    unsigned int *v28; // eax
    char v29; // al
    unsigned int *v30; // eax
    int v31; // eax
    int v32; // edi
    void *v33; // eax
    int v35; // eax
    char v37; // cl
    int (__thiscall **vtable0)(BuildingClass *, unsigned char *); // edx
    unsigned short *v39; // eax
    short v40; // cx
    int Member; // eax
    int v42; // esi
    char v43; // cl
    int v46; // ecx
    char *v47; // eax
    int v48; // eax
    int v49; // ebx
    int v50; // eax
    int *v51; // ebx
    int v52; // eax
    unsigned short *v53; // eax
    short v54; // dx
    int v55; // edi
    void *v56; // eax
    unsigned int *m_Size; // edi
    int v58; // eax
    int v59; // eax
    int v60; // eax
    int InstanceCOM; // eax
    void *m_Data; // eax
    int (__stdcall ***Checked)(unsigned int, int *, void **); // eax
    int v64; // esi
    void *v65; // edi
    int v66; // ecx
    int v67; // esi
    int v68; // esi
    int m_Position; // eax
    int v70; // edx
    int StreamClass_field_0C; // eax
    int v73; // eax
    unsigned __int8 (__thiscall **v74)(BuildingClass *); // edx
    void (__thiscall **v75)(BuildingClass *); // edx
    BuildingTypeClass *v76; // ecx
    void (__thiscall **v77)(BuildingClass *); // eax
    int LandHeight; // [esp+34h] [ebp-5Ch]
    int v79; // [esp+34h] [ebp-5Ch]
    short *p_m_Position; // [esp+3Ch] [ebp-54h]
    int v81; // [esp+40h] [ebp-50h]
    char v82; // [esp+52h] [ebp-3Eh]
    bool v83; // [esp+53h] [ebp-3Dh]
    StreamClass v84; // [esp+54h] [ebp-3Ch] BYREF
    unsigned int i; // [esp+68h] [ebp-28h] BYREF
    void *v86; // [esp+6Ch] [ebp-24h] BYREF
    char v87; // [esp+70h] [ebp-20h] BYREF
    int v88; // [esp+74h] [ebp-1Ch] BYREF
    __int64 v89; // [esp+78h] [ebp-18h]
    int v90; // [esp+80h] [ebp-10h] BYREF
    char v91[12]; // [esp+84h] [ebp-Ch] BYREF

    if ( (*((int (__thiscall **)(BuildingClass *))this->vtable1 + 258))(this) > 0 ) /*0x44d896*/
      BuildingClass::UnloadUnits(this, 0, 0); /*0x44d89c*/
    Type = this->Type; /*0x44d8a1*/
    if ( !Type->UnitAbsorb && !Type->InfantryAbsorb || ((unsigned int *)this)[0] <= 0 )
    {
      if ( Type->WeaponsFactory )
      {
        v37 = *(unsigned int *)&Type->Naval; /*0x44dcc7*/
        v88 = 0; /*0x44dccd*/
        v89 = 0; /*0x44dcd3*/
        if ( !v37 ) /*0x44dcdb*/
        {
          vtable0 = (int (__thiscall **)(BuildingClass *, unsigned char *))this->TechnoClass; /*0x44dce3*/
          i = *(unsigned int *)(Type->FoundationOutside[0] + 40); /*0x44dcf0*/
          v39 = (unsigned short *)vtable0[110](this, &v87); /*0x44dcf4*/
          v40 = (((unsigned int)(i) >> 16) & 0xFFFF) + v39[1]; /*0x44dd01*/
          IDA_LOWORD(v84.StreamClass_field_0C) = *v39 + i; /*0x44dd06*/
          IDA_HIWORD(v84.StreamClass_field_0C) = v40; /*0x44dd0b*/
          v88 = ((__int16)(IDA_LOWORD(v84.StreamClass_field_0C) - 1) << 8) + 128; /*0x44dd30*/
          v89 = (unsigned int)((v40 << 8) + 128); /*0x44dd34*/
        }
        switch ( ((unsigned int *)this)[0] )
        {
          case 0:
            Member = Team::GetMember((Team *)this, 0); /*0x44dd59*/
            v42 = Member; /*0x44dd5e*/
            if ( Member ) /*0x44dd62*/
            {
              (*(void (__thiscall **)(int, int, unsigned int))(*(unsigned int *)Member + 488))(Member, 5, 0); /*0x44dd6b*/
              (*(void (__thiscall **)(int))(*(unsigned int *)v42 + 492))(v42); /*0x44dd75*/
            }
            RateScaler::Init((RateScaler *)((unsigned int *)this)[0], *(double *)((unsigned int *)this->Type)[0]); /*0x44dd95*/
            v43 = this->*(unsigned int *)&Type->Naval; /*0x44dda2*/
            ((unsigned int *)this)[0] = 1; /*0x44dda8*/
            ((unsigned int *)this)[0] = v43 != 0 ? 4 : 1;
            BuildingClass::ClearAnims(this, 18); /*0x44ddbf*/
            BuildingClass::GetHealthRatio(this); /*0x44ddc6*/
            _EDX = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x44ddcb*/
            __asm /*0x44ddd1*/
            {
              fcomp qword ptr [edx+1700h]
              fnstsw ax
            }
            if ( (_AX & 0x4100) != 0 ) /*0x44dddc*/
            {
              v46 = 1; /*0x44dde4*/
              v47 = &this->Type->__pad_F70[524]; /*0x44dde9*/
            }
            else
            {
              v46 = 0; /*0x44ddf6*/
              v47 = &this->Type->__pad_F70[508]; /*0x44ddf8*/
            }
            if ( v47 && *v47 ) /*0x44de05*/
              (this)->PlayAnim(*(int *)&DSurface_ViewBounds.__pad_FC[324], v47, 8, v46, 0, 0); /*0x44de16*/
            break; /*0x44de1b*/
          case 1:
            if ( !AnimClass::resetAnimation((AnimClass *)this) ) /*0x44de22*/
            {
              Debug::Log(); /*0x44de34*/
              ((unsigned int *)this)[0] = 2; /*0x44de3c*/
            }
            break; /*0x44de46*/
          case 2:
            if ( (unsigned __int8)BuildingClass_CheckPowerFlags((void *)((unsigned int *)this)[0]) ) /*0x44de53*/
            {
              v48 = Team::GetMember((Team *)this, 0); /*0x44de63*/
              v84.m_Size = v48; /*0x44de6a*/
              if ( !v48 ) /*0x44de6e*/
                goto LABEL_112; /*0x44de6e*/
              v49 = v48; /*0x44de74*/
              (*(void (__thiscall **)(int, int, unsigned int))(*(unsigned int *)v48 + 488))(v48, 2, 0); /*0x44de7e*/
              v50 = *(unsigned int *)(v49 + 1652); /*0x44de84*/
              v51 = (int *)(v49 + 1652); /*0x44de8a*/
              v84.StreamClass_field_0C = 0; /*0x44de92*/
              if ( !v50 ) /*0x44de9a*/
                goto LABEL_57; /*0x44de9a*/
              v52 = StreamClass::Set2((StreamClass *)&v84.StreamClass_field_0C, v51); /*0x44dea1*/
              if ( v52 < 0 && v52 != -2147467262 ) /*0x44deaf*/
                sub_7DC720(v52); /*0x44deb2*/
              if ( !v84.StreamClass_field_0C ) /*0x44debd*/
  LABEL_57:
                sub_7DC720(-2147467261); /*0x44dec4*/
              (*(void (__stdcall **)(int, int *))(*(unsigned int *)v84.StreamClass_field_0C + 12))( /*0x44ded5*/
                v84.StreamClass_field_0C,
                &v90);
              if ( !memcmp(&v90, &stru_7E9A50, 0x10u) || !memcmp(&v90, &g_CLSID_HoverLocomotion, 0x10u) ) /*0x44df00*/
              {
                v58 = *v51; /*0x44dfad*/
                *(unsigned int *)v84.__pad_0 = 0; /*0x44dfaf*/
                if ( v58 ) /*0x44dfb9*/
                {
                  v59 = StreamClass::Set(&v84, v51); /*0x44dfc0*/
                  if ( v59 < 0 && v59 != -2147467262 ) /*0x44dfce*/
                    sub_7DC720(v59); /*0x44dfd1*/
                  if ( *(unsigned int *)v84.__pad_0 /*0x44dfe1*/
                    && (*(unsigned __int8 (__stdcall **)(unsigned int))(**(unsigned int **)v84.__pad_0 + 28))(*(unsigned int *)v84.__pad_0) )
                  {
                    if ( *v51 ) /*0x44dfe8*/
                      (*(void (__stdcall **)(int))(*(unsigned int *)*v51 + 8))(*v51); /*0x44dff1*/
                    v60 = *(unsigned int *)v84.__pad_0; /*0x44dff4*/
                    *v51 = 0; /*0x44dff8*/
                    if ( !v60 ) /*0x44e000*/
                      sub_7DC720(-2147467261); /*0x44e007*/
                    (*(void (__stdcall **)(int, int *))(*(unsigned int *)v60 + 16))(v60, v51); /*0x44e014*/
                  }
                }
                v84.m_Position = 0; /*0x44e024*/
                InstanceCOM = CreateInstanceCOM((ObjectClass *)&v84.m_Position, (IID *)&stru_7E9A30, 0, 7u); /*0x44e02c*/
                if ( InstanceCOM < 0 && InstanceCOM != -2147467262 ) /*0x44e03a*/
                  sub_7DC720(InstanceCOM); /*0x44e03d*/
                if ( !v84.m_Position ) /*0x44e048*/
                  sub_7DC720(-2147467261); /*0x44e04f*/
                m_Size = (unsigned int *)v84.m_Size; /*0x44e058*/
                (*(void (__stdcall **)(int, int))(*(unsigned int *)v84.m_Position + 12))(v84.m_Position, v84.m_Size); /*0x44e060*/
                m_Data = 0; /*0x44e067*/
                v84.m_Data = 0; /*0x44e06b*/
                if ( v84.m_Position ) /*0x44e06f*/
                {
                  Checked = (int (__stdcall ***)(unsigned int, int *, void **))Stream::GetChecked((Stream *)&v84.m_Position); /*0x44e075*/
                  v64 = (**Checked)(Checked, &((unsigned int *)&stru_818E00)[17], &v86); /*0x44e089*/
                  if ( v64 >= 0 ) /*0x44e08d*/
                  {
                    v65 = v86; /*0x44e0a0*/
                    Release2COM((ObjectClass *)&v84.m_Data); /*0x44e0a8*/
                    m_Data = v65; /*0x44e0ad*/
                    m_Size = (unsigned int *)v84.m_Size; /*0x44e0af*/
                    v84.m_Data = m_Data; /*0x44e0b3*/
                  }
                  else
                  {
                    Release2COM((ObjectClass *)&v84.m_Data); /*0x44e093*/
                    m_Data = 0; /*0x44e098*/
                    v84.m_Data = 0; /*0x44e09a*/
                  }
                  if ( v64 < 0 && v64 != -2147467262 ) /*0x44e0c1*/
                    sub_7DC720(v64); /*0x44e0c4*/
                }
                v66 = *(unsigned int *)v84.__pad_0; /*0x44e0cd*/
                if ( *(void **)v84.__pad_0 != m_Data ) /*0x44e0d3*/
                {
                  v67 = *(unsigned int *)v84.__pad_0; /*0x44e0d5*/
                  *(unsigned int *)v84.__pad_0 = m_Data; /*0x44e0db*/
                  CellClass::SetField2C((CellClass *)&v84); /*0x44e0df*/
                  if ( v67 ) /*0x44e0e6*/
                    (*(void (__stdcall **)(int))(*(unsigned int *)v67 + 8))(v67); /*0x44e0eb*/
                  v66 = *(unsigned int *)v84.__pad_0; /*0x44e0ee*/
                  m_Data = v84.m_Data; /*0x44e0f2*/
                }
                if ( m_Data ) /*0x44e0f8*/
                {
                  (*(void (__stdcall **)(void *))(*(unsigned int *)m_Data + 8))(m_Data); /*0x44e0fd*/
                  v66 = *(unsigned int *)v84.__pad_0; /*0x44e100*/
                }
                if ( v66 ) /*0x44e106*/
                {
                  (*(void (__stdcall **)(int, int))(*(unsigned int *)v66 + 12))(v66, *v51); /*0x44e10e*/
                  v68 = *v51; /*0x44e111*/
                  m_Position = v84.m_Position; /*0x44e113*/
                  if ( *v51 != v84.m_Position ) /*0x44e119*/
                  {
                    *v51 = v84.m_Position; /*0x44e11d*/
                    if ( m_Position ) /*0x44e11f*/
                      (*(void (__stdcall **)(int))(*(unsigned int *)m_Position + 4))(m_Position); /*0x44e124*/
                    if ( v68 ) /*0x44e129*/
                      (*(void (__stdcall **)(int))(*(unsigned int *)&v68->q_20)(v68); /*0x44e12e*/
                  }
                  if ( !*v51 ) /*0x44e131*/
                    sub_7DC720(-2147467261); /*0x44e13b*/
                  (*(void (__stdcall **)(int, int, int, unsigned int, unsigned int))(*(unsigned int *)*v51 + 112))( /*0x44e160*/
                    *v51,
                    66,
                    v88,
                    v89,
                    IDA_HIDWORD(v89));
                }
                else
                {
                  v70 = *m_Size; /*0x44e168*/
                  v86 = (void *)m_Size[27]; /*0x44e16a*/
                  (*(void (__thiscall **)(unsigned int *, void **, unsigned int, unsigned int, unsigned int, int, unsigned int, unsigned int))(v70 + 364))( /*0x44e18b*/
                    m_Size,
                    &v86,
                    0,
                    *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
                    0,
                    1,
                    0,
                    0);
                }
                if ( v84.m_Position ) /*0x44e197*/
                  (*(void (__stdcall **)(int))(*(unsigned int *)v84.m_Position + 8))(v84.m_Position); /*0x44e19c*/
                if ( *(unsigned int *)v84.__pad_0 ) /*0x44e1a5*/
                  (*(void (__stdcall **)(unsigned int))(**(unsigned int **)v84.__pad_0 + 8))(*(unsigned int *)v84.__pad_0); /*0x44e1aa*/
              }
              else if ( !memcmp(&v90, &stru_7E9A30, 0x10u) ) /*0x44df1a*/
              {
                if ( !*v51 ) /*0x44df72*/
                  sub_7DC720(-2147467261); /*0x44df7c*/
                (*(void (__stdcall **)(int, int, int, unsigned int, unsigned int))(*(unsigned int *)*v51 + 112))( /*0x44dfa1*/
                  *v51,
                  66,
                  v88,
                  v89,
                  IDA_HIDWORD(v89));
                m_Size = (unsigned int *)v84.m_Size; /*0x44dfa4*/
              }
              else
              {
                v53 = (unsigned short *)(*((int (__thiscall **)(BuildingClass *, char *))this->vtable1 + 110))(this, &v87); /*0x44df26*/
                v54 = v53[1] + 1; /*0x44df3b*/
                IDA_LOWORD(v84.m_Position) = *v53 + 4; /*0x44df3d*/
                IDA_HIWORD(v84.m_Position) = v54; /*0x44df42*/
                i = v84.m_Position; /*0x44df52*/
                v55 = *(unsigned int *)v84.m_Size; /*0x44df56*/
                v56 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (short *)&i); /*0x44df5d*/
                (*(void (__thiscall **)(int, void *, int))(v55 + 1152))(v84.m_Size, v56, 1); /*0x44df65*/
                m_Size = (unsigned int *)v84.m_Size; /*0x44df6b*/
              }
              (*(void (__thiscall **)(unsigned int *, unsigned int, int))(*m_Size + 1348))(m_Size, 0, 1071644672); /*0x44e1b8*/
              StreamClass_field_0C = v84.StreamClass_field_0C; /*0x44e1be*/
              ((unsigned int *)this)[0] = 3; /*0x44e1c2*/
              if ( StreamClass_field_0C ) /*0x44e1ce*/
                (*(void (__stdcall **)(int))(*(unsigned int *)StreamClass_field_0C + 8))(StreamClass_field_0C); /*0x44e1d7*/
            }
            break; /*0x44e1da*/
          case 3:
            if ( !((unsigned int *)this)[0] ) /*0x44e202*/
            {
  LABEL_112:
              Timer::StartDouble((Timer *)((unsigned int *)this)[0], *(double *)((unsigned int *)this->Type)[0]); /*0x44e20c*/
              ((unsigned int *)this)[0] = 4; /*0x44e22b*/
            }
            break; /*0x44e231*/
          case 4:
            if ( (unsigned __int8)Flag::CheckNone((Flag *)((unsigned int *)this)[0]) || this->*(unsigned int *)&Type->Naval ) /*0x44e248*/
            {
              (*((void (__thiscall **)(BuildingClass *, unsigned int, int))this->vtable1 + 289))(this, 0, 1); /*0x44e25a*/
              ((unsigned int *)this)[0] = 1; /*0x44e260*/
            }
            break; /*0x44e260*/
          default:
            break;
        }
        _EAX = MissionClass_GetMissionControl((void *)this); /*0x44e267*/
        __asm /*0x44e26e*/
        {
          fld qword ptr [eax+10h]
          fmul ds:dbl_7E27F8
        }
        IDA_LOWORD(v73) = Math::RoundToInt(v1); /*0x44e277*/
        return v73 + Random_Range((void *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x44e29c*/
      }
      if ( ((unsigned int *)Type)[0] && ((unsigned int *)Type)[0] ) /*0x44e2b0*/
      {
        if ( ((unsigned int *)this)[0] ) /*0x44e2be*/
        {
          (*((void (__thiscall **)(BuildingClass *))this->vtable1 + 262))(this); /*0x44e333*/
          v76 = this->Type; /*0x44e339*/
          v77 = (void (__thiscall **)(BuildingClass *))this->TechnoClass; /*0x44e33f*/
          ((unsigned int *)this)[0] = 0; /*0x44e342*/
          this->HasExtraPowerDrain = 0; /*0x44e349*/
          ((unsigned int *)this)[0] = ((unsigned int *)v76)[0]; /*0x44e359*/
          v77[261](this); /*0x44e35f*/
          goto LABEL_124; /*0x44e35f*/
        }
        (*((void (__thiscall **)(BuildingClass *))this->vtable1 + 262))(this); /*0x44e2cd*/
        v74 = (unsigned __int8 (__thiscall **)(BuildingClass *))this->TechnoClass; /*0x44e2d9*/
        ((unsigned int *)this)[0] = ((unsigned int *)this->Type)[0]; /*0x44e2e3*/
        if ( v74[212](this) ) /*0x44e2eb*/
        {
          (*((void (__thiscall **)(BuildingClass *))this->vtable1 + 261))(this); /*0x44e2fa*/
          ((unsigned int *)this)[0] = 1; /*0x44e300*/
          this->HasExtraPowerDrain = 1; /*0x44e306*/
  LABEL_124:
          IDA_LOBYTE(((unsigned int *)this)[0]->HouseClass_field_timer_B[2]) = 1; /*0x44e365*/
          goto LABEL_125; /*0x44e36b*/
        }
        v75 = (void (__thiscall **)(BuildingClass *))this->TechnoClass; /*0x44e31d*/
        ((unsigned int *)this)[0] = ((unsigned int *)this->Type)[0]; /*0x44e320*/
        v75[261](this); /*0x44e326*/
      }
  LABEL_125:
      (*((void (__thiscall **)(BuildingClass *, int, unsigned int))this->vtable1 + 122))(this, 5, 0); /*0x44e371*/
      return 1; /*0x44e381*/
    }
    v4 = LinkedList::Pop((LinkedList *)((unsigned int *)this)[0]); /*0x44d8d8*/
    if ( !v4 ) /*0x44d8dc*/
      goto LABEL_35; /*0x44d8dc*/
    v5 = *(unsigned short *)ProgressTimer::GetValue((ProgressTimer *)((unsigned int *)this)[0], &v86); /*0x44d8f2*/
    IDA_LOBYTE(v6) = 0; /*0x44d8f5*/
    v82 = 1; /*0x44d8fc*/
    IDA_LOWORD(v84.StreamClass_field_0C) = v5 + 0x7FFF; /*0x44d901*/
    v84.m_Size = 0; /*0x44d90e*/
    v7 = (((unsigned int)v84.StreamClass_field_0C >> 12) + 1) >> 1; /*0x44d912*/
    for ( i = v7; ; IDA_LOBYTE(v7) = i ) /*0x44d914*/
    {
      v8 = ((unsigned char)v6 + (unsigned char)v7) & 7; /*0x44d92a*/
      v9 = (unsigned short *)(*((int (__thiscall **)(BuildingClass *, char *))this->vtable1 + 110))(this, &v87); /*0x44d92d*/
      v10 = v8 & 7; /*0x44d938*/
      v11 = IDA_LOWORD(g_DDrawSurfaceManager.scenario[v10 + 82]) + *v9; /*0x44d93f*/
      v12 = (unsigned short *)(4 * v10 + 9041544); /*0x44d947*/
      v13 = v12[1]; /*0x44d94e*/
      IDA_LOWORD(v84.StreamClass_field_0C) = v11; /*0x44d952*/
      v14 = v9[1] + v13; /*0x44d95a*/
      IDA_LOWORD(v84.m_Position) = *v12 + v11; /*0x44d95e*/
      v15 = v14 + v12[1]; /*0x44d967*/
      IDA_HIWORD(v84.StreamClass_field_0C) = v14; /*0x44d96a*/
      v16 = *(unsigned int *)v4; /*0x44d973*/
      IDA_HIWORD(v84.m_Position) = v15; /*0x44d975*/
      *(unsigned int *)v84.__pad_0 = v84.StreamClass_field_0C; /*0x44d980*/
      v84.m_Data = (void *)v84.m_Position; /*0x44d984*/
      LandHeight = ObjectClass::GetLandHeight((ObjectClass *)this); /*0x44d98d*/
      v17 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (short *)&v84.m_Data); /*0x44d999*/
      v18 = (*(int (__thiscall **)(int, void *, int, int, unsigned int, int))(v16 + 428))(v4, v17, v8, LandHeight, 0, 1); /*0x44d9a1*/
      v19 = *(unsigned int *)v4; /*0x44d9a7*/
      v83 = v18 == 0; /*0x44d9b1*/
      v79 = ObjectClass::GetLandHeight((ObjectClass *)this); /*0x44d9bb*/
      v20 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (short *)v84.__pad_0); /*0x44d9c7*/
      if ( !(*(int (__thiscall **)(int, void *, int, int, unsigned int, int))(v19 + 428))(v4, v20, v8, v79, 0, 1) ) /*0x44d9cf*/
        break; /*0x44d9cf*/
      if ( !v82 ) /*0x44da20*/
        goto LABEL_13; /*0x44da20*/
  LABEL_17:
      v21 = v84.m_Size; /*0x44da22*/
      if ( v84.m_Size == 7 ) /*0x44da2c*/
      {
        v21 = 0; /*0x44da2e*/
        v82 = 0; /*0x44da30*/
      }
  LABEL_14:
      v6 = v21 + 1; /*0x44da07*/
      v84.m_Size = v6; /*0x44da0b*/
      if ( v6 >= 8 ) /*0x44da0f*/
        goto LABEL_34; /*0x44da0f*/
    }
    if ( !v83 && v82 ) /*0x44d9e7*/
      goto LABEL_17; /*0x44d9e7*/
    if ( (*((unsigned int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (short *)v84.__pad_0) + 80) & 0x100) != 0 ) /*0x44da01*/
    {
  LABEL_13:
      v21 = v84.m_Size; /*0x44da03*/
      goto LABEL_14; /*0x44da03*/
    }
    ++dword_A8E7AC; /*0x44da55*/
    v22 = *(unsigned int *)v4; /*0x44da5f*/
    v89 = (unsigned int)((*(short *)&v84.__pad_0[2] << 8) + 128); /*0x44da66*/
    v88 = (*(short *)v84.__pad_0 << 8) + 128; /*0x44da6c*/
    if ( (*(int (__thiscall **)(int))(v22 + 44))(v4) == 15 ) /*0x44da76*/
    {
      v23 = ObjectPlacement::CalcPosition_Wrapper(&v90, &v88, 0); /*0x44da89*/
      v88 = *v23; /*0x44da90*/
      IDA_LODWORD(v89) = v23[1]; /*0x44da97*/
      v24 = v23[2]; /*0x44da9b*/
    }
    else
    {
      v25 = *(unsigned int *)v4; /*0x44dabc*/
      v84.StreamClass_field_0C = 0; /*0x44dac6*/
      v26 = (*(int (__thiscall **)(int, int))(v25 + 132))(v4, -1); /*0x44dad4*/
      v84.m_Data = (void *)*LayerClass::Pathfinding_Find( /*0x44dafb*/
                              &stru_87F5F0.__pad_58[416],
                              (int)&v84.m_Data,
                              &v88,
                              (short *)&v84.m_Data,
                              *(unsigned int *)(v26 + 1660),
                              0,
                              0,
                              1,
                              1,
                              0,
                              0,
                              0,
                              1,
                              (char)&v84.StreamClass_field_0C,
                              0,
                              0,
                              v81);
      v27 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (short *)&v84.m_Data); /*0x44db05*/
      v28 = (unsigned int *)(*(int (__thiscall **)(void *, char *))(*(unsigned int *)v27 + 72))(v27, v91); /*0x44db13*/
      i = *(unsigned int *)CellStruct::Set((CellStruct *)&v87, *v28 / 256, v28[1] / 256); /*0x44db42*/
      v24 = 0; /*0x44db5f*/
      v88 = ((__int16)i << 8) + 128; /*0x44db61*/
      IDA_LODWORD(v89) = (IDA_SHIWORD(i) << 8) + 128; /*0x44db65*/
    }
    IDA_LOWORD(i) = (unsigned short)v8 << 13; /*0x44db6c*/
    IDA_HIDWORD(v89) = v24; /*0x44db84*/
    v29 = (*(int (__thiscall **)(int, int *, unsigned int))(*(unsigned int *)v4 + 216))( /*0x44db8e*/
            v4,
            &v88,
            (unsigned __int8)(((i >> 7) + 1) >> 1));
    --dword_A8E7AC; /*0x44db9d*/
    if ( !v29 ) /*0x44dba3*/
    {
  LABEL_34:
      CellClass::AddObject((CellClass *)((unsigned int *)this)[0], (unsigned int *)v4); /*0x44dc6e*/
      (*(void (__thiscall **)(int))(*(unsigned int *)v4 + 284))(v4); /*0x44dc7e*/
      goto LABEL_35; /*0x44dc7e*/
    }
    if ( this->Type->InfantryAbsorb ) /*0x44dbaf*/
    {
      v30 = (unsigned int *)(*((int (__thiscall **)(BuildingClass *, int *))this->vtable1 + 18))(this, &v90); /*0x44dbc5*/
      StartAudioControllerAt(*(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 628), v30, 0); /*0x44dbd5*/
      v31 = *(unsigned int *)(v4 + 540); /*0x44dbda*/
      if ( *(unsigned char *)(v31 + 492) ) /*0x44dbe0*/
        *(unsigned char *)(v4 + 1679) = 0; /*0x44dbea*/
      if ( !*(unsigned char *)(v4 + 1080) ) /*0x44dbf1*/
      {
        ++*(unsigned int *)(v31 + 756); /*0x44dc02*/
        *(unsigned char *)(v4 + 1080) = 1; /*0x44dc08*/
      }
      *(unsigned char *)(v4 + 1081) = 0; /*0x44dc0f*/
    }
    (*(void (__thiscall **)(int, int, unsigned int, int))(*(unsigned int *)v4 + 488))(v4, 2, 0, v81); /*0x44dc1e*/
    v32 = *(unsigned int *)v4; /*0x44dc28*/
    if ( v84.__pad_0[2] ) /*0x44dc2e*/
      p_m_Position = (short *)&v84.m_Position; /*0x44dc34*/
    else
      p_m_Position = (short *)&v84.m_Data; /*0x44dc3b*/
    v33 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], p_m_Position); /*0x44dc41*/
    (*(void (__thiscall **)(int, void *))(v32 + 1152))(v4, v33); /*0x44dc49*/
    if ( this->Type->ExtraPowerBonus > 0 ) /*0x44dc5d*/
      IDA_LOBYTE(((unsigned int *)this)[0]->HouseClass_field_timer_B[2]) = 1; /*0x44dc65*/
  LABEL_35:
    _EAX = MissionClass_GetMissionControl((void *)this); /*0x44dc84*/
    __asm /*0x44dc8b*/
    {
      fld qword ptr [eax+10h]
      fmul ds:dbl_7E27F8
    }
    IDA_LOWORD(v35) = Math::RoundToInt(v1); /*0x44dc94*/
    return v35 + Random_Range((void *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x44dcb1*/
}
} // namespace gamemd

// 0x44E440
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::ProcessPowerPlantEffect()
{
    double v1; // st7
    BuildingTypeClass *Type; // eax
    int v5; // eax
    int v6; // ecx
    int v8; // eax
    int result; // eax
    int *v10; // eax
    int v12; // eax
    int v13; // edx
    int *GateTimer; // esi
    int *location; // esi
    int v16; // edi
    int v17; // edx
    int v18; // eax
    int v21; // eax
    int v23; // eax
    int v24; // [esp+8h] [ebp-34h]
    int v25; // [esp+Ch] [ebp-30h]
    unsigned int v26[3]; // [esp+10h] [ebp-2Ch] BYREF
    int v27; // [esp+1Ch] [ebp-20h] BYREF
    int v28; // [esp+20h] [ebp-1Ch]
    int v29; // [esp+24h] [ebp-18h]
    int v30; // [esp+2Ch] [ebp-10h] BYREF
    int v31; // [esp+30h] [ebp-Ch]

    Type = this->Type; /*0x44e447*/
    if ( Type->Gate ) /*0x44e44d*/
    {
      switch ( ((unsigned int *)this)[0] ) /*0x44e466*/
      {
        case 0: /*0x44e466*/
          if ( (unsigned __int8)BuildingClass_CheckPowerFlags((void *)((unsigned int *)this)[0]) ) /*0x44e475*/
          {
            _EAX = this->Type; /*0x44e47e*/
            __asm /*0x44e484*/
            {
              fld qword ptr [eax+0E28h]
              fmul ds:dbl_7E27F8
            }
            (v5) = ((v5) & ~0xFFFF) | ((unsigned int)(Math::RoundToInt(v1)) & 0xFFFF) /*0x44e490*/
            v6 = *(unsigned int * *)((char *)&stru_A8EB00 + 644); /*0x44e495*/
            ((unsigned int *)this)[0] = 2; /*0x44e4a1*/
            this->GateTimer[0] = v6; /*0x44e4ab*/
            this->GateTimer[1] = v28; /*0x44e4b1*/
            this->GateTimer[2] = v5; /*0x44e4b4*/
            this->GateTimer[3] = v5; /*0x44e4b7*/
            goto LABEL_5; /*0x44e4b7*/
          }
          if ( !(unsigned __int8)Window::IsVisible((Window *)((unsigned int *)this)[0]) ) /*0x44e4f0*/
          {
            if ( (unsigned __int8)BuildingClass::CheckFlag24((BuildingClass *)((unsigned int *)this)[0]) ) /*0x44e4ff*/
            {
              BuildingClass::UpdateTimerWithElapsed((BuildingClass *)((unsigned int *)this)[0]); /*0x44e50a*/
            }
            else
            {
              RateScaler::Init((RateScaler *)((unsigned int *)this)[0], *(double *)((unsigned int *)this->Type)[0]); /*0x44e52a*/
              v26[0] = ((unsigned int *)this)[0]; /*0x44e539*/
              v26[1] = ((unsigned int *)this)[1]; /*0x44e545*/
              v26[2] = ((unsigned int *)this)[2]; /*0x44e54c*/
              StartAudioControllerAt(*(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1032), v26, 0); /*0x44e55a*/
              v10 = (int *)(*((int (__thiscall **)(BuildingClass *, int *))this->vtable1 + 75))(this, &v30); /*0x44e56a*/
              Cell::CreateCrater(*v10, v10[1], v10[2], v10[3], 0); /*0x44e591*/
            }
          }
          _ECX = this->Type; /*0x44e596*/
          ((unsigned int *)this)[0] = 1; /*0x44e59c*/
          __asm /*0x44e5a6*/
          {
            fld qword ptr [ecx+0E28h]
            fmul ds:dbl_7E27F8
          }
          (v12) = ((v12) & ~0xFFFF) | ((unsigned int)(Math::RoundToInt(v1)) & 0xFFFF) /*0x44e5b2*/
          v13 = v31; /*0x44e5bd*/
          GateTimer = this->GateTimer; /*0x44e5c1*/
          *GateTimer = *(unsigned int * *)((char *)&stru_A8EB00 + 644); /*0x44e5c7*/
          GateTimer[1] = v13; /*0x44e5c9*/
          GateTimer[2] = v12; /*0x44e5cc*/
          GateTimer[3] = v12; /*0x44e5cf*/
          return 0; /*0x44e5d9*/
        case 1: /*0x44e466*/
          if ( (unsigned __int8)BuildingClass_CheckPowerFlags((void *)((unsigned int *)this)[0]) ) /*0x44e6e0*/
            ((unsigned int *)this)[0] = 2; /*0x44e6e9*/
          goto LABEL_23; /*0x44e6e9*/
        case 2: /*0x44e466*/
          if ( BuildingClass::CheckOverlapWithOthers(this) ) /*0x44e637*/
          {
            _ECX = this->Type; /*0x44e69f*/
            __asm /*0x44e6a5*/
            {
              fld qword ptr [ecx+0E28h]
              fmul ds:dbl_7E27F8
            }
            (v21) = ((v21) & ~0xFFFF) | ((unsigned int)(Math::RoundToInt(v1)) & 0xFFFF) /*0x44e6b1*/
            this->GateTimer[0] = *(unsigned int * *)((char *)&stru_A8EB00 + 644); /*0x44e6c2*/
            this->GateTimer[1] = v31; /*0x44e6cc*/
            this->GateTimer[2] = v21; /*0x44e6cf*/
            this->GateTimer[3] = v21; /*0x44e6d2*/
          }
          else
          {
            v16 = this->GateTimer[3]; /*0x44e640*/
            v25 = v16; /*0x44e648*/
            if ( !v16 ) /*0x44e64c*/
              goto LABEL_19; /*0x44e64c*/
            v17 = this->GateTimer[0]; /*0x44e64e*/
            v18 = this->GateTimer[2]; /*0x44e654*/
            if ( v17 != -1 ) /*0x44e65d*/
            {
              if ( *(unsigned int * *)((char *)&stru_A8EB00 + 644) - v17 >= v18 ) /*0x44e669*/
                v18 = 0; /*0x44e66f*/
              else
                v18 -= *(unsigned int * *)((char *)&stru_A8EB00 + 644) - v17; /*0x44e66b*/
            }
            v24 = v16 - v18; /*0x44e673*/
            __asm /*0x44e677*/
            {
              fild [esp+3Ch+var_34]
              fidiv [esp+3Ch+var_30]
              fcomp ds:dbl_7E1718
              fnstsw ax
            }
            if ( (_AX & 0x4000) != 0 ) /*0x44e68a*/
  LABEL_19:
              ((unsigned int *)this)[0] = 3; /*0x44e690*/
          }
          goto LABEL_5; /*0x44e69a*/
        case 3: /*0x44e466*/
          Timer::StartDouble((Timer *)((unsigned int *)this)[0], *(double *)((unsigned int *)Type)[0]); /*0x44e5ee*/
          ((unsigned int *)this)[0] = 4; /*0x44e5f3*/
          location = ((unsigned int *)this)[0]; /*0x44e5fd*/
          v27 = *location; /*0x44e607*/
          v28 = location[1]; /*0x44e613*/
          v29 = location[2]; /*0x44e61a*/
          StartAudioControllerAt(*(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1028), &v27, 0); /*0x44e628*/
          return 0; /*0x44e634*/
        case 4: /*0x44e466*/
  LABEL_23:
          if ( (unsigned __int8)Flag::CheckNone((Flag *)((unsigned int *)this)[0]) ) /*0x44e6fb*/
          {
            (*((void (__thiscall **)(BuildingClass *, unsigned int, int))this->vtable1 + 289))(this, 0, 1); /*0x44e70c*/
            ((unsigned int *)this)[0] = 5; /*0x44e712*/
            ((unsigned int *)this)[0] = 1; /*0x44e71c*/
          }
          if ( (unsigned __int8)Window::IsVisible((Window *)((unsigned int *)this)[0]) /*0x44e73b*/
            || (unsigned __int8)BuildingClass::CheckFlag24((BuildingClass *)((unsigned int *)this)[0])
            || (unsigned __int8)BuildingClass_CheckPowerFlags((void *)((unsigned int *)this)[0]) )
          {
            Animation::GetProgress((Animation *)((unsigned int *)this)[0]); /*0x44e746*/
            _EAX = this->Type; /*0x44e74b*/
            __asm { fimul dword ptr [eax+16F8h] } /*0x44e751*/
            IDA_LOWORD(v23) = Math::RoundToInt(v1); /*0x44e757*/
            if ( v23 != this->GateStage ) /*0x44e765*/
            {
              this->GateStage = v23; /*0x44e767*/
              ((unsigned int *)this)[0] = 1; /*0x44e76d*/
            }
          }
          return 0; /*0x44e77b*/
        default:
  LABEL_5:
          _EAX = MissionClass_GetMissionControl((void *)this); /*0x44e4ba*/
          __asm /*0x44e4c1*/
          {
            fld qword ptr [eax+10h]
            fmul ds:dbl_7E27F8
          }
          IDA_LOWORD(v8) = Math::RoundToInt(v1); /*0x44e4ca*/
          result = v8 + Random_Range((void *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2); /*0x44e4e6*/
          break; /*0x44e4ed*/
      }
    }
    else
    {
      (*((void (__thiscall **)(BuildingClass *, int, unsigned int))this->vtable1 + 122))(this, 5, 0); /*0x44e784*/
      return 1; /*0x44e78b*/
    }
    return result; /*0x44e4e8*/
}
} // namespace gamemd

// 0x44E880
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::GetPowerDrain()
{
    BuildingTypeClass *Type; // ecx
    int result; // eax
    int *Upgrades; // edx
    int v5; // esi

    if ( (*((unsigned __int8 (__thiscall **)(BuildingClass *))this->vtable1 + 117))(this) || !this->HasPower ) /*0x44e88f*/
      return 0; /*0x44e8de*/
    Type = this->Type; /*0x44e899*/
    result = Type->PowerDrain; /*0x44e8a7*/
    if ( this->HasExtraPowerDrain ) /*0x44e89f*/
      result += Type->ExtraPowerDrain; /*0x44e8af*/
    if ( this->UpgradeLevel ) /*0x44e8b5*/
    {
      Upgrades = this->Upgrades; /*0x44e8bf*/
      v5 = 3; /*0x44e8c5*/
      do /*0x44e8da*/
      {
        if ( *Upgrades ) /*0x44e8ca*/
          result += *(unsigned int *)(*Upgrades + 3812); /*0x44e8d0*/
        ++Upgrades; /*0x44e8d6*/
        --v5; /*0x44e8d9*/
      }
      while ( v5 ); /*0x44e8da*/
    }
    return result; /*0x44e8dc*/
}
} // namespace gamemd

// 0x44EBF0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::Disappear_PrismForward()
{
    int v1; // ebx
    FactoryClass *Factory; // ecx
    FactoryClass *v4; // ecx
    HouseClass *owner; // ecx
    BuildingTypeClass *Type; // eax
    int v7; // edx
    AbstractClass *primaryForBuildings; // ecx
    int v9; // eax
    char inLimbo; // bl
    int v11; // edi
    int v12; // eax
    int v13; // eax
    int v14; // eax
    AbstractClass *primaryUnused1; // ecx
    int v16; // eax
    char v17; // bl
    int v18; // edi
    int v19; // eax
    int v20; // eax
    int v21; // eax
    AbstractClass *primaryUnused2; // ecx
    int v23; // eax
    char v24; // bl
    int v25; // edi
    int v26; // eax
    int v27; // eax
    int v28; // eax
    AbstractClass *primaryUnused3; // ecx
    int v30; // eax
    char v31; // bl
    int v32; // edi
    int v33; // eax
    int v34; // eax
    int v35; // eax
    AbstractClass *primaryForDefenses; // ecx
    int v37; // eax
    char v38; // bl
    int v39; // edi
    int v40; // eax
    int v41; // eax
    int v42; // eax
    AbstractClass *BuildLimit; // eax
    int i; // ebp
    int Member; // eax
    int v46; // edi
    int v48; // [esp+44h] [ebp-10h]
    char v49; // [esp+58h] [ebp+4h]

    if ( v49 ) /*0x44ebfb*/
    {
      Factory = this->Factory; /*0x44ec01*/
      if ( Factory ) /*0x44ec09*/
      {
        BuildingClass::AbandonProduction((int)Factory); /*0x44ec0b*/
        v4 = this->Factory; /*0x44ec10*/
        if ( v4 ) /*0x44ec18*/
          (*((void (__thiscall **)(FactoryClass *, int))v4->vtable1 + 8))(v4, 1); /*0x44ec1e*/
        this->Factory = 0; /*0x44ec21*/
      }
      owner = ((unsigned int *)this)[0]; /*0x44ec2b*/
      v48 = v1; /*0x44ec31*/
      if ( !owner ) /*0x44ec34*/
        goto LABEL_33; /*0x44ec34*/
      Type = this->Type; /*0x44ec3a*/
      v7 = Type->Factory[0]; /*0x44ec40*/
      if ( v7 == 7 ) /*0x44ec49*/
      {
        primaryForBuildings = (AbstractClass *)owner->primaryForBuildings; /*0x44ec4f*/
        if ( primaryForBuildings ) /*0x44ec57*/
        {
          v9 = AbstractClass::GetType(primaryForBuildings); /*0x44ec59*/
          inLimbo = ((unsigned int *)this)[0]; /*0x44ec5e*/
          v11 = v9; /*0x44ec64*/
          ((unsigned int *)this)[0] = 1; /*0x44ec68*/
          if ( v9 ) /*0x44ec6f*/
          {
            v12 = (*(int (__thiscall **)(int))(*(unsigned int *)v9 + 132))(v9); /*0x44ec75*/
            if ( !(*(int (__thiscall **)(int, int, unsigned int, unsigned int, HouseClass *))(*(unsigned int *)v12 + 148))( /*0x44ec8c*/
                    v12,
                    1,
                    0,
                    0,
                    ((unsigned int *)this)[0]) )
            {
              v13 = (*(int (__thiscall **)(int))(*(unsigned int *)&v11->q210)(v11); /*0x44ec9a*/
              v14 = (*(int (__thiscall **)(int))(*(unsigned int *)v13 + 64))(v13); /*0x44eca8*/
              HouseClass::CancelProduction(((unsigned int *)this)[0], (void *)this->Type->Factory[0], v14, 0, 0); /*0x44ecbf*/
            }
          }
          ((unsigned int *)this)[0] = inLimbo; /*0x44ecc4*/
        }
        primaryUnused1 = (AbstractClass *)((unsigned int *)this)[0]->primaryUnused1; /*0x44ecd0*/
        if ( primaryUnused1 ) /*0x44ecd8*/
        {
          v16 = AbstractClass::GetType(primaryUnused1); /*0x44ecda*/
          v17 = ((unsigned int *)this)[0]; /*0x44ecdf*/
          v18 = v16; /*0x44ece5*/
          ((unsigned int *)this)[0] = 1; /*0x44ece9*/
          if ( v16 ) /*0x44ecf0*/
          {
            v19 = (*(int (__thiscall **)(int))(*(unsigned int *)v16 + 132))(v16); /*0x44ecf6*/
            if ( !(*(int (__thiscall **)(int, int, unsigned int, unsigned int, HouseClass *))(*(unsigned int *)v19 + 148))( /*0x44ed0d*/
                    v19,
                    1,
                    0,
                    0,
                    ((unsigned int *)this)[0]) )
            {
              v20 = (*(int (__thiscall **)(int))(*(unsigned int *)&v18->q210)(v18); /*0x44ed1b*/
              v21 = (*(int (__thiscall **)(int))(*(unsigned int *)v20 + 64))(v20); /*0x44ed29*/
              HouseClass::CancelProduction(((unsigned int *)this)[0], (void *)this->Type->Factory[0], v21, 0, 0); /*0x44ed40*/
            }
          }
          ((unsigned int *)this)[0] = v17; /*0x44ed45*/
        }
        primaryUnused2 = (AbstractClass *)((unsigned int *)this)[0]->primaryUnused2; /*0x44ed51*/
        if ( primaryUnused2 ) /*0x44ed59*/
        {
          v23 = AbstractClass::GetType(primaryUnused2); /*0x44ed5b*/
          v24 = ((unsigned int *)this)[0]; /*0x44ed60*/
          v25 = v23; /*0x44ed66*/
          ((unsigned int *)this)[0] = 1; /*0x44ed6a*/
          if ( v23 ) /*0x44ed71*/
          {
            v26 = (*(int (__thiscall **)(int))(*(unsigned int *)v23 + 132))(v23); /*0x44ed77*/
            if ( !(*(int (__thiscall **)(int, int, unsigned int, unsigned int, HouseClass *))(*(unsigned int *)v26 + 148))( /*0x44ed8e*/
                    v26,
                    1,
                    0,
                    0,
                    ((unsigned int *)this)[0]) )
            {
              v27 = (*(int (__thiscall **)(int))(*(unsigned int *)&v25->q210)(v25); /*0x44ed9c*/
              v28 = (*(int (__thiscall **)(int))(*(unsigned int *)v27 + 64))(v27); /*0x44edaa*/
              HouseClass::CancelProduction(((unsigned int *)this)[0], (void *)this->Type->Factory[0], v28, 0, 0); /*0x44edc1*/
            }
          }
          ((unsigned int *)this)[0] = v24; /*0x44edc6*/
        }
        primaryUnused3 = (AbstractClass *)((unsigned int *)this)[0]->primaryUnused3; /*0x44edd2*/
        if ( primaryUnused3 ) /*0x44edda*/
        {
          v30 = AbstractClass::GetType(primaryUnused3); /*0x44eddc*/
          v31 = ((unsigned int *)this)[0]; /*0x44ede1*/
          v32 = v30; /*0x44ede7*/
          ((unsigned int *)this)[0] = 1; /*0x44edeb*/
          if ( v30 ) /*0x44edf2*/
          {
            v33 = (*(int (__thiscall **)(int))(*(unsigned int *)v30 + 132))(v30); /*0x44edf8*/
            if ( !(*(int (__thiscall **)(int, int, unsigned int, unsigned int, HouseClass *))(*(unsigned int *)v33 + 148))( /*0x44ee0f*/
                    v33,
                    1,
                    0,
                    0,
                    ((unsigned int *)this)[0]) )
            {
              v34 = (*(int (__thiscall **)(int))(*(unsigned int *)&v32->q210)(v32); /*0x44ee1d*/
              v35 = (*(int (__thiscall **)(int))(*(unsigned int *)v34 + 64))(v34); /*0x44ee2b*/
              HouseClass::CancelProduction(((unsigned int *)this)[0], (void *)this->Type->Factory[0], v35, 0, 0); /*0x44ee42*/
            }
          }
          ((unsigned int *)this)[0] = v31; /*0x44ee47*/
        }
        primaryForDefenses = (AbstractClass *)((unsigned int *)this)[0]->primaryForDefenses; /*0x44ee53*/
        if ( !primaryForDefenses ) /*0x44ee5b*/
          goto LABEL_33; /*0x44ee5b*/
        v37 = AbstractClass::GetType(primaryForDefenses); /*0x44ee5d*/
        v38 = ((unsigned int *)this)[0]; /*0x44ee62*/
        v39 = v37; /*0x44ee68*/
        ((unsigned int *)this)[0] = 1; /*0x44ee6c*/
        if ( !v37 ) /*0x44ee73*/
          goto LABEL_32; /*0x44ee73*/
      }
      else
      {
        BuildLimit = (AbstractClass *)HouseClass::GetBuildLimit(owner, v7, *(unsigned int *)&Type->Naval, 0); /*0x44eef7*/
        if ( !BuildLimit ) /*0x44eefe*/
          goto LABEL_33; /*0x44eefe*/
        v37 = AbstractClass::GetType(BuildLimit); /*0x44ef02*/
        v38 = ((unsigned int *)this)[0]; /*0x44ef07*/
        v39 = v37; /*0x44ef0d*/
        ((unsigned int *)this)[0] = 1; /*0x44ef11*/
        if ( !v37 ) /*0x44ef18*/
        {
  LABEL_32:
          ((unsigned int *)this)[0] = v38; /*0x44eec8*/
  LABEL_33:
          (*((void (__thiscall **)(BuildingClass *, int))this->vtable1 + 160))(this, 3); /*0x44eece*/
          return ObjectClass::Destroy2((ObjectClass *)this); /*0x44eed4*/
        }
      }
      v40 = (*(int (__thiscall **)(int, int))(*(unsigned int *)v37 + 132))(v37, v48); /*0x44ee79*/
      if ( !(*(int (__thiscall **)(int, int, unsigned int, unsigned int))(*(unsigned int *)v40 + 148))(v40, 1, 0, 0) ) /*0x44ee90*/
      {
        v41 = (*(int (__thiscall **)(int))(*(unsigned int *)&v39->__pad_210)(v39); /*0x44ee9e*/
        v42 = (*(int (__thiscall **)(int))(*(unsigned int *)v41 + 64))(v41); /*0x44eeac*/
        HouseClass::CancelProduction(((unsigned int *)this)[0], (void *)this->Type->Factory[0], v42, 0, 0); /*0x44eec3*/
      }
      goto LABEL_32; /*0x44eec3*/
    }
    for ( i = 0; i < ((unsigned int *)this)[2]; ++i ) /*0x44ef33*/
    {
      Member = Team::GetMember((Team *)this, i); /*0x44ef38*/
      v46 = Member; /*0x44ef3d*/
      if ( Member && !(unsigned __int8)((ObjectClass *)((unsigned int *)this)[0])->IsAlliedWithObjectHouse(Member) ) /*0x44ef4a*/
        (*((void (__thiscall **)(BuildingClass *, int, int))this->vtable1 + 158))(this, 3, v46); /*0x44ef5a*/
    }
    return ObjectClass::Destroy2((ObjectClass *)this); /*0x44eee7*/
}
} // namespace gamemd

// 0x4500A0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
CoordStruct* BuildingClass::GetAdjustedExitCoords(CoordStruct* out) const
{
    unsigned int *v2; // eax
    int v3; // edi
    int v4; // ebx
    int v5; // ecx
    int v6; // edx
    int v7; // eax
    unsigned char v9[12]; // [esp+Ch] [ebp-Ch] BYREF
    int *v10; // [esp+1Ch] [ebp+4h]

    v2 = (unsigned int *)(*((int (__thiscall **)(BuildingClass *, unsigned char *))this->vtable1 + 18))(this, v9); /*0x4500b1*/
    v3 = v2[1]; /*0x4500b6*/
    v4 = v2[2]; /*0x4500b9*/
    v5 = *v2 + this->Type->TargetCoordOffset[0]; /*0x4500cd*/
    v6 = this->Type->TargetCoordOffset[1]; /*0x4500cf*/
    v7 = this->Type->TargetCoordOffset[2]; /*0x4500d2*/
    *v10 = v5; /*0x4500db*/
    v10[1] = v3 + v6; /*0x4500dd*/
    v10[2] = v4 + v7; /*0x4500e0*/
    return (int)v10; /*0x4500e5*/
}
} // namespace gamemd

// 0x4503F0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::UpdatePrism()
{
    __int64 v2; // rax
    int v3; // ecx
    int v4; // eax
    int v5; // ecx

    (v2) = (unsigned int)(this->PrismStage[0]) /*0x4503f3*/
    if ( (unsigned int)v2 ) /*0x4503fb*/
    {
      v3 = this->DelayBeforeFiring - 1; /*0x450408*/
      this->DelayBeforeFiring = v3; /*0x45040a*/
      if ( v3 <= 0 ) /*0x450412*/
      {
        v4 = v2 - 1; /*0x450418*/
        this->DelayBeforeFiring = 0; /*0x450419*/
        if ( v4 ) /*0x450423*/
        {
          (v2) = (unsigned int)(v4 - 1) /*0x450425*/
          if ( !(unsigned int)v2 ) /*0x450426*/
          {
            (v2) = (unsigned int)(BuildingClass::FireLaser( /*0x45044d*/
                            this,
                            this->PrismTargetCoords[0],
                            this->PrismTargetCoords[1],
                            this->PrismTargetCoords[2]))
            this->PrismStage[0] = 0; /*0x450452*/
            return v2; /*0x45045d*/
          }
        }
        else
        {
          (v2) = (unsigned int)(((unsigned int *)this)[0]) /*0x45045e*/
          if ( (unsigned int)v2 ) /*0x450466*/
          {
            (v2) = (unsigned int)((*((int (__thiscall **)(BuildingClass *, unsigned int, int, int))this->vtable1 + 240))( /*0x450476*/
                            this,
                            v2,
                            this->PrismTargetCoords[0],
                            1))
            if ( !(unsigned int)v2 ) /*0x45047e*/
            {
              (v2) = (unsigned int)((*((int (__thiscall **)(BuildingClass *, AbstractClass *, int))this->vtable1 + 243))( /*0x450492*/
                              this,
                              ((unsigned int *)this)[0],
                              this->PrismTargetCoords[0]))
              v5 = v2; /*0x450498*/
              if ( (unsigned int)v2 ) /*0x45049c*/
              {
                (v2) = (unsigned int)(this->SupportingPrisms) /*0x45049e*/
                if ( (unsigned int)v2 ) /*0x4504a6*/
                {
                  v2 = 1374389535LL /*0x4504c2*/
                     * (unsigned int)(((unsigned int)v2 * *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1180) + 100) << 8);
                  *(unsigned int *)(v5 + 336) = ((unsigned int)((unsigned __int64)(v2) >> 32)) >> 5; /*0x4504c7*/
                  this->SupportingPrisms = 0; /*0x4504cd*/
                }
              }
            }
          }
        }
        this->PrismStage[0] = 0; /*0x4504d7*/
      }
    }
    return v2; /*0x45045c*/
}
} // namespace gamemd

// 0x4513D0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::ProductionCheck()
{
    if ( this->BuildingClass_field_int_534 && this->ActuallyPlacedOnMap ) /*0x4513da*/
      return (*((int (__thiscall **)(BuildingTypeClass *))this->Type->vtable1 + 39))(this->Type); /*0x4513ec*/
    else
      return (*((int (__thiscall **)(BuildingTypeClass *))this->Type->vtable1 + 48))(this->Type); /*0x4513fa*/
}
} // namespace gamemd

// 0x451890
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::PlayAnim(int a2, void* a3, int a4, int a5, int a6, void* a7)
{
    int v8; // edi
    int *Anims; // ebp
    int result; // eax
    int v11; // ebp
    int v12; // edi
    unsigned int *v13; // ebx
    unsigned int *v14; // eax
    int v15; // ecx
    int v16; // edx
    int v17; // eax
    AnimClass *v18; // eax
    void **v19; // ebp
    void *v20; // edx
    int Translucency; // ebx
    int *v22; // ecx
    int v23; // edx
    int v24; // eax
    int v25; // ecx
    BuildingTypeClass *Type; // eax
    int v27; // eax
    int started; // edi
    unsigned int *v29; // eax
    int v30[3]; // [esp+10h] [ebp-24h] BYREF
    unsigned int v31[3]; // [esp+1Ch] [ebp-18h] BYREF
    unsigned char v32[12]; // [esp+28h] [ebp-Ch] BYREF

    if ( a1->IsDamaged != (unsigned char)a5 ) /*0x4518a3*/
    {
      a1->IsDamaged = a5; /*0x4518a5*/
      v8 = 0; /*0x4518ab*/
      Anims = a1->Anims; /*0x4518ad*/
      do /*0x4518cd*/
      {
        if ( *Anims ) /*0x4518b3*/
          BuildingClass::PlayUpgradeAnim(a1, v8, a5, 0, 0); /*0x4518c1*/
        ++v8; /*0x4518c6*/
        ++Anims; /*0x4518c7*/
      }
      while ( v8 < 21 ); /*0x4518cd*/
    }
    result = AnimTypeClass::FindIndex(a3); /*0x4518d3*/
    v11 = result; /*0x4518d8*/
    if ( result != -1 )
    {
      v12 = 68 * a4; /*0x4518f8*/
      v13 = Matrix3x4::TransformCell((float *)g_TacticalClass_Instance, v31, (int *)&a1->Type->__pad_F70[68 * a4 + 12]); /*0x451913*/
      v14 = (unsigned int *)(*((int (__thiscall **)(BuildingClass *, unsigned char *))a1->vtable1 + 43))(a1, v32); /*0x45191a*/
      v15 = *v13 + *v14; /*0x451924*/
      v16 = v13[1] + v14[1]; /*0x45192c*/
      v17 = v13[2] + v14[2]; /*0x45192f*/
      v30[0] = v15; /*0x451937*/
      v30[1] = v16; /*0x45193b*/
      v30[2] = v17; /*0x45193f*/
      v18 = (AnimClass *)RA2_OPNEW(0x1C8u); /*0x451943*/
      if ( v18 ) /*0x45194d*/
        v19 = AnimClass::ctor(v18, *(void **)(*(unsigned int *)((char *)&FootClass_Array + 892) + 4 * v11), v30, a7, 1, (void *)0x1600, 0, 0); /*0x451975*/
      else
        v19 = 0; /*0x451979*/
      v19[64] = *(void **)&a1->Type->__pad_F70[v12 + 20]; /*0x451988*/
      v20 = *(void **)&a1->Type->__pad_F70[v12 + 24]; /*0x451994*/
      *((unsigned char *)v19 + 280) = 1; /*0x45199b*/
      v19[65] = v20; /*0x4519a2*/
      if ( a1->IsFogged ) /*0x4519a8*/
        *((unsigned char *)v19 + 409) = 1; /*0x4519b2*/
      Translucency = a1->Translucency; /*0x4519b9*/
      if ( Translucency == 15 /*0x4519d3*/
        && (*((int (__thiscall **)(BuildingClass *, unsigned int, unsigned int))a1->vtable1 + 26))(a1, 0, 0) == 5 )
      {
        (Translucency) = ((Translucency) & ~0xFF) | ((unsigned int)(16) & 0xFF) /*0x4519d5*/
      }
      v22 = a1->Anims; /*0x4519da*/
      v23 = 21; /*0x4519e0*/
      do /*0x4519f5*/
      {
        if ( *v22 ) /*0x4519e5*/
          *(unsigned char *)(*v22 + 376) = Translucency; /*0x4519eb*/
        ++v22; /*0x4519f1*/
        --v23; /*0x4519f4*/
      }
      while ( v23 ); /*0x4519f5*/
      v24 = a1->Anims[a4]; /*0x4519fb*/
      if ( v24 ) /*0x451a04*/
      {
        v19[43] = *(void **)(v24 + 172); /*0x451a0c*/
        v25 = a1->Anims[a4]; /*0x451a12*/
        a1->Anims[a4] = 0; /*0x451a1b*/
        if ( v25 ) /*0x451a26*/
          (*(void (__thiscall **)(int, int))(*(unsigned int *)v25 + 32))(v25, 1); /*0x451a2c*/
      }
      a1->Anims[a4] = (int)v19; /*0x451a2f*/
      if ( !a1->StuffEnabled || !(*((unsigned __int8 (__thiscall **)(BuildingClass *))a1->vtable1 + 212))(a1) ) /*0x451a44*/
      {
        Type = a1->Type; /*0x451a4e*/
        if ( Type->Powered ) /*0x451a54*/
        {
          if ( Type->__pad_F70[v12 + 28] ) /*0x451a5e*/
            BuildingClass::SetField8((BuildingClass *)v19); /*0x451a6b*/
        }
      }
      if ( *((unsigned char *)v19[50] + 860) )
      {
        v19[53] = (void *)(*((int (__thiscall **)(BuildingClass *))a1->vtable1 + 121))(a1); /*0x451a8a*/
        v27 = (*((int (__thiscall **)(BuildingClass *))a1->vtable1 + 111))(a1); /*0x451a94*/
        started = (*((int (__thiscall **)(BuildingClass *, unsigned int))a1->vtable1 + 281))(a1, *(short *)(v27 + 266)); /*0x451aac*/
        if ( (*((unsigned __int8 (__thiscall **)(BuildingClass *))a1->vtable1 + 88))(a1)
          || ((unsigned int *)a1)[0]
          && (a1
            ? (v29 = (*((int (__thiscall **)(BuildingClass *))a1->vtable1 + 11))(a1) == 6 ? (unsigned int *)a1 : 0)
            : (v29 = 0),
              (unsigned int *)((unsigned int *)a1)[0]->AirstrikeClass_field_50 == v29) )
        {
          started = Techno::StartInvulnerability(started); /*0x451af3*/
        }
        v19[63] = (void *)started; /*0x451af5*/
      }
      if ( a4 == 9 && a1->Type->BarrelAnimIsVoxel ) /*0x451b06*/
        *((unsigned char *)v19 + 413) = 1; /*0x451b10*/
      result = (*((int (__thiscall **)(BuildingClass *))a1->vtable1 + 117))(a1); /*0x451b1b*/
      if ( (unsigned char)result ) /*0x451b23*/
        *((unsigned char *)v19 + 282) = 1; /*0x451b25*/
    }
    return result; /*0x451b2c*/
}
} // namespace gamemd

// 0x451B40
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::StopAnim(int anim_index)
{
    int Type; // eax
    int *i; // ecx
    int v5; // edx
    int v8; // ecx
    BOOL v11; // ebx
    bool v12; // al
    int v13; // edx
    bool v14; // zf
    BuildingTypeClass *v15; // eax
    int v18; // ecx
    int v21; // ecx
    int v22; // edx
    int v24; // ecx

    (Type) = ((Type) & ~0xFF) | ((unsigned int)(((unsigned int *)this)[0]) & 0xFF) /*0x451b44*/
    if ( (unsigned char)Type )
    {
      Type = 0; /*0x451b56*/
      for ( i = this->Anims; *i != a2; ++i ) /*0x451b58*/
      {
        if ( ++Type >= 21 ) /*0x451b69*/
          return Type; /*0x451b69*/
      }
      this->Anims[Type] = 0; /*0x451b70*/
      Type -= 10; /*0x451b7b*/
      switch ( Type )
      {
        case 0:
          Type = (int)this->Type; /*0x451b8e*/
          if ( *(unsigned char *)(Type + 5801) )
          {
            if ( !(unsigned __int8)Team_AllMembersValid((void *)this) /*0x451bba*/
              || (*((int (__thiscall **)(BuildingClass *))this->vtable1 + 97))(this) != 20 )
            {
              BuildingClass::GetHealthRatio(this); /*0x451c1c*/
              _EDX = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x451c21*/
              __asm { fcomp qword ptr [edx+1700h] } /*0x451c27*/
              goto LABEL_30; /*0x451c2d*/
            }
            BuildingClass::GetHealthRatio(this); /*0x451bbe*/
            _ECX = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x451bc3*/
            __asm /*0x451bc9*/
            {
              fcomp qword ptr [ecx+1700h]
              fnstsw ax
            }
            if ( (_AX & 0x4100) != 0 ) /*0x451bd4*/
            {
              v8 = 1; /*0x451bdc*/
              Type = (int)&this->Type->__pad_F70[728]; /*0x451be1*/
            }
            else
            {
              v8 = 0; /*0x451bee*/
              Type = (int)&this->Type->__pad_F70[712]; /*0x451bf0*/
            }
            if ( Type && *(unsigned char *)Type ) /*0x451bfd*/
              (Type) = ((Type) & ~0xFF) | ((unsigned int)((this)->PlayAnim(v5, (AnimTypeClass *)Type, 11, v8, 0, 0)) & 0xFF) /*0x451c10*/
          }
          else if ( *(unsigned char *)(Type + 5799) )
          {
            (Type) = ((Type) & ~0xFF) | ((unsigned int)(*(unsigned char *)(a2 + 377)) & 0xFF) /*0x451c40*/
            if ( (unsigned char)Type )
            {
              BuildingClass::GetHealthRatio(this); /*0x451c50*/
              _EAX = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x451c55*/
              __asm /*0x451c5a*/
              {
                fcomp qword ptr [eax+1700h]
                fnstsw ax
              }
              v11 = (_EAX & 0x4100) != 0; /*0x451c65*/
              v12 = (*((int (__thiscall **)(BuildingClass *))this->vtable1 + 258))(this) > 0; /*0x451c7c*/
              IDA_LOBYTE(a2) = v12; /*0x451c81*/
              if ( v11 )
              {
                Type = (int)&this->Type->__pad_F70[184]; /*0x451c8d*/
              }
              else
              {
                v14 = !v12; /*0x451c94*/
                v15 = this->Type; /*0x451c96*/
                Type = (int)(v14 ? &v15->__pad_F70[168] : &v15->__pad_F70[200]);
              }
              if ( Type && *(unsigned char *)Type ) /*0x451cb2*/
                (Type) = ((Type) & ~0xFF) | ((unsigned int)((this)->PlayAnim(v13, (AnimTypeClass *)Type, 3, v11, a2, 0)) & 0xFF) /*0x451cc8*/
            }
          }
          break; /*0x451c17*/
        case 2:
          Type = (int)this->Type; /*0x451cd2*/
          if ( *(unsigned char *)(Type + 5801) ) /*0x451cd8*/
          {
            (Type) = ((Type) & ~0xFF) | ((unsigned int)(*(unsigned char *)(a2 + 377)) & 0xFF) /*0x451ce6*/
            if ( (unsigned char)Type ) /*0x451cee*/
            {
              BuildingClass::GetHealthRatio(this); /*0x451cf6*/
              _ECX = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x451cfb*/
              __asm { fcomp qword ptr [ecx+1700h] } /*0x451d01*/
  LABEL_30:
              __asm { fnstsw ax } /*0x451d07*/
              if ( (_AX & 0x4100) != 0 ) /*0x451d0c*/
              {
                v18 = 1; /*0x451d14*/
                Type = (int)&this->Type->__pad_F70[1204]; /*0x451d19*/
              }
              else
              {
                v18 = 0; /*0x451d26*/
                Type = (int)&this->Type->__pad_F70[1188]; /*0x451d28*/
              }
              if ( Type && *(unsigned char *)Type ) /*0x451d35*/
                (Type) = ((Type) & ~0xFF) | ((unsigned int)((this)->PlayAnim(_EDX, (AnimTypeClass *)Type, 18, v18, 0, 0)) & 0xFF) /*0x451d48*/
            }
          }
          break; /*0x451d4f*/
        case 5:
          (Type) = ((Type) & ~0xFF) | ((unsigned int)(*(unsigned char *)(a2 + 377)) & 0xFF) /*0x451d52*/
          if ( (unsigned char)Type ) /*0x451d5a*/
          {
            BuildingClass::GetHealthRatio(this); /*0x451d62*/
            _EDX = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x451d67*/
            __asm /*0x451d6d*/
            {
              fcomp qword ptr [edx+1700h]
              fnstsw ax
            }
            if ( (_AX & 0x4100) != 0 ) /*0x451d78*/
            {
              v21 = 1; /*0x451d80*/
              Type = (int)&this->Type->__pad_F70[1068]; /*0x451d85*/
            }
            else
            {
              v21 = 0; /*0x451d92*/
              Type = (int)&this->Type->__pad_F70[1052]; /*0x451d94*/
            }
            if ( Type && *(unsigned char *)Type ) /*0x451d9d*/
              (Type) = ((Type) & ~0xFF) | ((unsigned int)((/*0x451dac*/
                               this)->PlayAnim(*(int *)&DSurface_ViewBounds.__pad_FC[324], (AnimTypeClass *)Type, 16, v21, 0, 0)) & 0xFF)
          }
          break; /*0x451db3*/
        case 7:
          (Type) = ((Type) & ~0xFF) | ((unsigned int)(*(unsigned char *)(a2 + 377)) & 0xFF) /*0x451db6*/
          if ( (unsigned char)Type ) /*0x451dbe*/
          {
            BuildingClass::GetHealthRatio(this); /*0x451dc2*/
            _EAX = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x451dc7*/
            __asm /*0x451dcc*/
            {
              fcomp qword ptr [eax+1700h]
              fnstsw ax
            }
            if ( (_EAX & 0x4100) != 0 ) /*0x451dd7*/
            {
              v24 = 1; /*0x451ddf*/
              Type = (int)&this->Type->__pad_F70[932]; /*0x451de4*/
            }
            else
            {
              v24 = 0; /*0x451df1*/
              Type = (int)&this->Type->__pad_F70[916]; /*0x451df3*/
            }
            if ( Type && *(unsigned char *)Type ) /*0x451dfc*/
              IDA_LOBYTE(Type) = (this)->PlayAnim(v22, (AnimTypeClass *)Type, 14, v24, 0, 0); /*0x451e0b*/
          }
          break; /*0x451e0b*/
        default:
          return Type;
      }
    }
    return Type; /*0x451b6b*/
}
} // namespace gamemd

// 0x451E40
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::ClearAnims(int a2)
{
    int result; // eax
    int *Anims; // esi
    int v4; // edi
    int v5; // ecx

    if ( a2 == -2 ) /*0x451e47*/
    {
      Anims = this->Anims; /*0x451e4b*/
      v4 = 21; /*0x451e51*/
      do /*0x451e6d*/
      {
        v5 = *Anims; /*0x451e56*/
        if ( *Anims ) /*0x451e56*/
        {
          *Anims = 0; /*0x451e5c*/
          result = (*(int (__thiscall **)(int, int))(*(unsigned int *)v5 + 32))(v5, 1); /*0x451e66*/
        }
        ++Anims; /*0x451e69*/
        --v4; /*0x451e6c*/
      }
      while ( v4 ); /*0x451e6d*/
    }
    else
    {
      result = this->Anims[a2]; /*0x451e74*/
      if ( result ) /*0x451e7d*/
      {
        this->Anims[a2] = 0; /*0x451e7f*/
        return (*(int (__thiscall **)(int, int))(*(unsigned int *)result + 32))(result, 1); /*0x451e90*/
      }
    }
    return result; /*0x451e71*/
}
} // namespace gamemd

// 0x4521C0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::DisableTemporal()
{
    int *Anims; // ecx
    int v2; // edx
    int result; // eax
    int v4; // esi

    this->HasPower = 0; /*0x4521c0*/
    Anims = this->Anims; /*0x4521c8*/
    v2 = 21; /*0x4521ce*/
    do /*0x4521fe*/
    {
      result = *Anims; /*0x4521d3*/
      if ( *Anims ) /*0x4521d3*/
      {
        v4 = *(unsigned int *)(result + 172); /*0x4521d9*/
        *(unsigned char *)(result + 282) = 1; /*0x4521df*/
        *(unsigned char *)(result + 283) = 0; /*0x4521e6*/
        *(unsigned int *)(result + 284) = v4; /*0x4521ed*/
        *(unsigned char *)(result + 281) = 1; /*0x4521f3*/
      }
      ++Anims; /*0x4521fa*/
      --v2; /*0x4521fd*/
    }
    while ( v2 ); /*0x4521fe*/
    return result; /*0x452200*/
}
} // namespace gamemd

// 0x452210
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::EnableTogglePower()
{
    int *Anims; // ecx
    int v2; // edx
    unsigned char *result; // eax

    this->HasPower = 1; /*0x452210*/
    Anims = this->Anims; /*0x452218*/
    v2 = 21; /*0x45221e*/
    do /*0x452242*/
    {
      result = (unsigned char *)*Anims; /*0x452225*/
      if ( *Anims ) /*0x452225*/
      {
        result[282] = 0; /*0x45222b*/
        result[283] = 1; /*0x452231*/
        result[281] = 0; /*0x452238*/
      }
      ++Anims; /*0x45223e*/
      --v2; /*0x452241*/
    }
    while ( v2 ); /*0x452242*/
    return result; /*0x452244*/
}
} // namespace gamemd

// 0x452360
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::PowerOff()
{
    BuildingTypeClass *Type; // eax
    HouseClass *owner; // ecx
    int v4; // edx
    int v5; // ecx

    IDA_LOBYTE(Type) = this->HasPower; /*0x452363*/
    if ( (unsigned char)Type ) /*0x45236b*/
    {
      Type = this->Type; /*0x452371*/
      if ( Type->PowerDrain > 0 || Type->Powered ) /*0x452381*/
      {
        owner = ((unsigned int *)this)[0]; /*0x45238b*/
        this->HasPower = 0; /*0x452393*/
        ((unsigned int *)this)[0] = 1; /*0x45239a*/
        IDA_LOBYTE(owner->HouseClass_field_timer_B[2]) = 1; /*0x4523a0*/
        IDA_BYTE1(((unsigned int *)this)[0]->HouseClass_field_timer_B[2]) = 1; /*0x4523ac*/
        ((unsigned int *)this)[0]->recheckTechTree = 1; /*0x4523b8*/
        BuildingClass::Deactivate(this); /*0x4523c0*/
        if ( (unsigned __int8)House::IsHumanPlayer((House *)((unsigned int *)this)[0]) ) /*0x4523cb*/
          VoxClass::FindAndPlay((VoxClass *)&stru_818E00.TrailerAnim, -1); /*0x4523de*/
        Type = this->Type; /*0x4523e3*/
        v5 = Type->Factory[0]; /*0x4523e9*/
        if ( v5 ) /*0x4523f1*/
        {
          (v4) = ((v4) & ~0xFF) | ((unsigned int)(*(unsigned int *)&Type->Naval) & 0xFF) /*0x4523f3*/
          IDA_LOBYTE(Type) = HouseClass::UpdateProduction((int)((unsigned int *)this)[0], v5, v4, 0); /*0x452403*/
        }
      }
    }
    return (char)Type; /*0x452408*/
}
} // namespace gamemd

// 0x452410
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::EnableStuff()
{
    LightSourceClass *LightSource; // ecx
    int v3; // esi
    int *Anims; // edi

    LightSource = this->LightSource; /*0x452415*/
    this->StuffEnabled = 1; /*0x45241b*/
    if ( LightSource ) /*0x452424*/
      Trigger::EnableOnce((Trigger *)LightSource, 0); /*0x452428*/
    if ( this->Type->LaserFencePost ) /*0x452433*/
      BuildingClass::RepairPlacement(this, 0); /*0x452441*/
    v3 = 0; /*0x452446*/
    Anims = this->Anims; /*0x452448*/
    do /*0x452476*/
    {
      if ( this->Type->__pad_F70[v3 + 28] ) /*0x452454*/
      {
        if ( *Anims ) /*0x45245f*/
          VtableStub::Method_425270((unsigned char *)*Anims); /*0x452465*/
      }
      v3 += 68; /*0x45246a*/
      ++Anims; /*0x45246d*/
    }
    while ( v3 < 1428 ); /*0x452476*/
}
} // namespace gamemd

// 0x452540
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::MakeTraversable()
{
    if ( !this->Type->Gate ) /*0x45254a*/
      return 1; /*0x452558*/
    if ( (*((int (__thiscall **)(BuildingClass *))this->vtable1 + 97))(this) != 24 /*0x45257b*/
      || (unsigned __int8)BuildingClass::CheckFlag24((BuildingClass *)((unsigned int *)this)[0])
      || (unsigned __int8)Flag::CheckNone((Flag *)((unsigned int *)this)[0]) )
    {
      (*((void (__thiscall **)(BuildingClass *, int))this->vtable1 + 124))(this, -1); /*0x4525be*/
      (*((void (__thiscall **)(BuildingClass *, int, unsigned int))this->vtable1 + 122))(this, 24, 0); /*0x4525cc*/
      (*((void (__thiscall **)(BuildingClass *))this->vtable1 + 123))(this); /*0x4525d6*/
    }
    else
    {
      if ( !this->Type->Gate ) /*0x45258a*/
        return 1; /*0x452598*/
      if ( (*((int (__thiscall **)(BuildingClass *))this->vtable1 + 97))(this) == 24 /*0x4525aa*/
        && (unsigned __int8)BuildingClass_CheckPowerFlags((void *)((unsigned int *)this)[0]) )
      {
        return 1; /*0x4525b7*/
      }
    }
    return 0; /*0x452554*/
}
} // namespace gamemd

// 0x4527D0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::HasOccupantAudio()
{
    int result; // eax
    char UpgradeLevel; // al
    int v3; // esi
    int v4; // edx
    int *Upgrades; // ecx

    result = (int)this->Type; /*0x4527d0*/
    if ( *(unsigned char *)(result + 3233) ) /*0x4527d8*/
    {
  LABEL_2:
      (result) = ((result) & ~0xFF) | ((unsigned int)(1) & 0xFF) /*0x4527e2*/
      return result; /*0x4527e6*/
    }
    UpgradeLevel = this->UpgradeLevel; /*0x4527e7*/
    if ( UpgradeLevel ) /*0x4527ef*/
    {
      v3 = UpgradeLevel; /*0x4527f1*/
      v4 = 0; /*0x4527f4*/
      if ( UpgradeLevel > 0 ) /*0x4527f8*/
      {
        Upgrades = this->Upgrades; /*0x4527fa*/
        do /*0x452800*/
        {
          result = *Upgrades; /*0x452800*/
          if ( *Upgrades ) /*0x452800*/
          {
            if ( *(unsigned char *)(result + 3233) ) /*0x452806*/
              goto LABEL_2; /*0x45280e*/
          }
          ++v4; /*0x452810*/
          ++Upgrades; /*0x452811*/
        }
        while ( v4 < v3 ); /*0x452800*/
      }
    }
    (result) = ((result) & ~0xFF) | ((unsigned int)(0) & 0xFF) /*0x452818*/
    return result; /*0x4527e2*/
}
} // namespace gamemd

// 0x452A40
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
unsigned int * BuildingClass::DemolishBridgeCheck(int a2)
{
    unsigned int *result; // eax
    int v4; // esi
    unsigned int *v5; // eax
    int v6; // edi
    int v7; // ecx
    int v8; // edx
    Cell *v9; // eax
    unsigned int *v10; // eax
    unsigned int *v11; // edi
    int v12; // ebp
    unsigned int *v13; // [esp+4h] [ebp-20h]
    int v14; // [esp+8h] [ebp-1Ch]
    char v15; // [esp+Ch] [ebp-18h]
    short v16[2]; // [esp+10h] [ebp-14h] BYREF
    int v17; // [esp+14h] [ebp-10h] BYREF
    unsigned char v18[12]; // [esp+18h] [ebp-Ch] BYREF
    short v19; // [esp+28h] [ebp+4h]
    short v20; // [esp+2Ah] [ebp+6h]

    result = (unsigned int *)dword_A8E7AC; /*0x452a40*/
    if ( !dword_A8E7AC ) /*0x452a4d*/
    {
      result = &this->Type->TechnoTypeClass; /*0x452a53*/
      if ( *((unsigned char *)result + 5822) ) /*0x452a59*/
      {
        v15 = a2 == 1; /*0x452a79*/
        v4 = 0; /*0x452a89*/
        v5 = (unsigned int *)(*((int (__thiscall **)(BuildingClass *, unsigned char *))this->vtable1 + 18))(this, v18); /*0x452a8b*/
        v13 = &unk_818CA0; /*0x452a90*/
        v6 = *v5 / 256; /*0x452ab3*/
        v7 = v5[1] / 256; /*0x452ab6*/
        v19 = v6; /*0x452ab9*/
        v20 = v7; /*0x452abe*/
        while ( 1 ) /*0x452ad1*/
        {
          v8 = v4 & 7; /*0x452ad1*/
          (v14) = ((v14) & ~0xFFFF) | ((unsigned int)(v6 + IDA_LOWORD(g_DDrawSurfaceManager.scenario[v8 + 82])) & 0xFFFF) /*0x452aed*/
          (v14) = ((v14) & ~(0xFFFFULL << 16)) | (((unsigned __int64)(unsigned int)(v7 + IDA_HIWORD(g_DDrawSurfaceManager.scenario[v8 + 82])) & 0xFFFF) << 16) /*0x452af2*/
          *(unsigned int *)v16 = v14; /*0x452aff*/
          v9 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v16); /*0x452b09*/
          v10 = Cell::IsBridge(v9); /*0x452b10*/
          v11 = v10; /*0x452b15*/
          if ( v10 ) /*0x452b19*/
          {
            if ( *(unsigned char *)(v10[328] + 5823) ) /*0x452b21*/
            {
              v12 = (*(int (__thiscall **)(unsigned int *))(*v10 + 56))(v10); /*0x452b32*/
              if ( (*((int (__thiscall **)(BuildingClass *))this->vtable1 + 14))(this) == v12 /*0x452b5f*/
                && (v4 & 3) == (((unsigned int)((*(unsigned int *)ProgressTimer::GetValue((ProgressTimer *)(v11 + 226), &v17) >> 12) + 1) >> 1)
                              & 3) )
              {
                this->LaserFenceFrame |= *v13; /*0x452b79*/
                BuildingClass::DemolishBridgeAnim(this, v4, v15); /*0x452b7f*/
              }
            }
          }
          result = v13 + 1; /*0x452b8b*/
          v4 = ((unsigned char)v4 + 2) & 7; /*0x452b8e*/
          if ( (int)++v13 >= (int)&dword_818CB0 ) /*0x452b9a*/
            break; /*0x452b9a*/
          (v7) = ((v7) & ~0xFFFF) | ((unsigned int)(v20) & 0xFFFF) /*0x452aca*/
          (v6) = ((v6) & ~0xFFFF) | ((unsigned int)(v19) & 0xFFFF) /*0x452aca*/
        }
      }
    }
    return result; /*0x452ba3*/
}
} // namespace gamemd

// 0x452BB0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::FindBridgeSegment()
{
    int v4; // ebx
    BuildingTypeClass *Type; // eax
    char v7; // si
    int v8; // ebp
    unsigned int *v9; // eax
    int result; // eax
    unsigned short *v11; // esi
    Cell *v12; // eax
    unsigned int *v13; // eax
    int v14; // esi
    int v15; // ebx
    int v16; // ebx
    int v17; // [esp+10h] [ebp-20h]
    int v18; // [esp+14h] [ebp-1Ch]
    int v19; // [esp+18h] [ebp-18h]
    unsigned short *i; // [esp+1Ch] [ebp-14h]
    int v21; // [esp+20h] [ebp-10h] BYREF
    char v22[12]; // [esp+24h] [ebp-Ch] BYREF

    v4 = 1; /*0x452bba*/
    v17 = 1; /*0x452bc4*/
    if ( a4 >= 0 ) /*0x452bc8*/
    {
      v4 = a4; /*0x452bf3*/
    }
    else
    {
      Type = this->Type; /*0x452bca*/
      if ( !Type->LaserFencePost ) /*0x452bd0*/
        goto LABEL_7; /*0x452bd0*/
      v4 = ((unsigned int *)Type)[0] >> 8; /*0x452be0*/
      v17 = v4; /*0x452be6*/
      if ( v4 > 1 ) /*0x452bea*/
        goto LABEL_7; /*0x452bea*/
      v4 = 1; /*0x452bec*/
    }
    v17 = v4; /*0x452bf5*/
  LABEL_7:
    v7 = a2; /*0x452bf9*/
    v8 = a2 & 3; /*0x452c08*/
    v9 = (unsigned int *)(*((int (__thiscall **)(BuildingClass *, char *))this->vtable1 + 18))(this, v22); /*0x452c0b*/
    IDA_LOWORD(a4) = *v9 / 256; /*0x452c1e*/
    IDA_HIWORD(a4) = v9[1] / 256; /*0x452c32*/
    result = 0; /*0x452c3b*/
    a2 = a4; /*0x452c3d*/
    a4 = 0; /*0x452c43*/
    v19 = 0; /*0x452c47*/
    if ( v4 <= 0 ) /*0x452c4b*/
      return result; /*0x452c4b*/
    v11 = (unsigned short *)(4 * (v7 & 7) + 9041544); /*0x452c54*/
    for ( i = v11; ; v11 = i ) /*0x452c5b*/
    {
      (v18) = ((v18) & ~0xFFFF) | ((unsigned int)(a2 + *v11) & 0xFFFF) /*0x452c76*/
      (v18) = ((v18) & ~(0xFFFFULL << 16)) | (((unsigned __int64)(unsigned int)((((unsigned int)(a2) >> 16) & 0xFFFF) + v11[1]) & 0xFFFF) << 16) /*0x452c7b*/
      a2 = v18; /*0x452c8e*/
      v12 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (short *)&a2); /*0x452c92*/
      v13 = Cell::IsBridge(v12); /*0x452c99*/
      v14 = (int)v13; /*0x452c9e*/
      if ( !v13 ) /*0x452ca2*/
        goto LABEL_19; /*0x452ca2*/
      if ( *(unsigned char *)(v13[328] + 5822) ) /*0x452caa*/
      {
        v15 = (*(int (__thiscall **)(unsigned int *))(*v13 + 56))(v13); /*0x452cbb*/
        if ( (*((int (__thiscall **)(BuildingClass *))this->vtable1 + 14))(this) == v15 ) /*0x452cc6*/
          a4 = v14; /*0x452cc8*/
      }
      if ( !a3 ) /*0x452cd2*/
        break; /*0x452cd2*/
      if ( !*(unsigned char *)(*(unsigned int *)(v14 + 1312) + 5823) ) /*0x452cda*/
        break; /*0x452cda*/
      v16 = (*(int (__thiscall **)(int))(*(unsigned int *)v14 + 56))(v14); /*0x452ceb*/
      if ( (*((int (__thiscall **)(BuildingClass *))this->vtable1 + 14))(this) != v16 /*0x452d15*/
        || (((unsigned int)((*(unsigned int *)ProgressTimer::GetValue((ProgressTimer *)(v14 + 904), &v21) >> 12) + 1) >> 1) & 3) != v8 )
      {
        break; /*0x452d15*/
      }
      v4 = v17; /*0x452d17*/
  LABEL_19:
      if ( ++v19 >= v4 ) /*0x452d26*/
        return a4; /*0x452d26*/
    }
    return a4; /*0x452d30*/
}
} // namespace gamemd

// 0x452DC0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::DemolishBridge()
{
    int BridgeSegment; // eax
    int v3; // ebp
    char *v4; // ecx
    unsigned int *v5; // eax
    unsigned short *v6; // ebx
    short v7; // cx
    Cell *v8; // eax
    unsigned int *v9; // eax
    int *v10; // esi
    int v11; // ebx
    int v12; // eax
    int v13; // esi
    int v14; // eax
    unsigned int *v15; // eax
    int *v16; // esi
    Cell *v17; // eax
    unsigned int *v18; // eax
    short v19[2]; // [esp+10h] [ebp-20h] BYREF
    int v20; // [esp+14h] [ebp-1Ch]
    unsigned int *v21; // [esp+18h] [ebp-18h]
    unsigned short *i; // [esp+1Ch] [ebp-14h]
    unsigned int v23; // [esp+20h] [ebp-10h]
    unsigned int v24[3]; // [esp+24h] [ebp-Ch] BYREF
    int v25; // [esp+34h] [ebp+4h]
    int v26; // [esp+34h] [ebp+4h]
    int v27; // [esp+34h] [ebp+4h]

    if ( !dword_A8E7AC ) /*0x452dd0*/
    {
      if ( this->Type->LaserFencePost ) /*0x452ddc*/
      {
        BridgeSegment = BuildingClass::FindBridgeSegment(this, v25, 0, -1); /*0x452e08*/
        v21 = (unsigned int *)BridgeSegment; /*0x452e0f*/
        if ( BridgeSegment ) /*0x452e13*/
        {
          if ( (*(int (__thiscall **)(int))(*(unsigned int *)BridgeSegment + 388))(BridgeSegment) != 19 ) /*0x452e26*/
          {
            v3 = 0; /*0x452e31*/
            if ( dword_A83C78 > 0 ) /*0x452e35*/
            {
              v4 = (char *)dword_A83C6C; /*0x452e37*/
              do /*0x452e4e*/
              {
                if ( *(unsigned char *)(*(unsigned int *)v4 + 5823) ) /*0x452e3f*/
                  break; /*0x452e46*/
                ++v3; /*0x452e48*/
                v4 += 4; /*0x452e49*/
              }
              while ( v3 < dword_A83C78 ); /*0x452e4e*/
            }
            if ( v3 < dword_A83C78 ) /*0x452e52*/
            {
              v5 = (unsigned int *)(*((int (__thiscall **)(BuildingClass *, unsigned int *))this->vtable1 + 18))(this, v24); /*0x452e61*/
              (v20) = ((v20) & ~0xFFFF) | ((unsigned int)(*v5 / 256) & 0xFFFF) /*0x452e74*/
              (v20) = ((v20) & ~(0xFFFFULL << 16)) | (((unsigned __int64)(unsigned int)(v5[1] / 256) & 0xFFFF) << 16) /*0x452e88*/
              *(unsigned int *)v19 = v20; /*0x452e93*/
              v6 = (unsigned short *)(4 * (v25 & 7) + 9041544); /*0x452ea0*/
              for ( i = v6; ; v6 = i ) /*0x452ea7*/
              {
                v7 = v6[1] + v19[1]; /*0x452ebe*/
                (v20) = ((v20) & ~0xFFFF) | ((unsigned int)(v19[0] + *v6) & 0xFFFF) /*0x452ec2*/
                (v20) = ((v20) & ~(0xFFFFULL << 16)) | (((unsigned __int64)(unsigned int)(v7) & 0xFFFF) << 16) /*0x452ec7*/
                *(unsigned int *)v19 = v20; /*0x452eda*/
                v8 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v19); /*0x452ede*/
                v9 = Cell::IsBridge(v8); /*0x452ee5*/
                if ( v9 == v21 ) /*0x452eee*/
                  break; /*0x452eee*/
                v10 = (int *)*((unsigned int *)dword_A83C6C + v3); /*0x452efc*/
                v11 = *v10; /*0x452f01*/
                v12 = (*((int (__thiscall **)(BuildingClass *))this->vtable1 + 15))(this); /*0x452f03*/
                v13 = (*(int (__thiscall **)(int *, int))(v11 + 140))(v10, v12); /*0x452f13*/
                v24[2] = 0; /*0x452f21*/
                (v23) = ((v23) & ~0xFFFF) | ((unsigned int)((v25 & 3) << 13) & 0xFFFF) /*0x452f38*/
                v24[0] = (v19[0] << 8) + 128; /*0x452f3d*/
                v14 = *(unsigned int *)v13; /*0x452f48*/
                v24[1] = (v19[1] << 8) + 128; /*0x452f54*/
                if ( !(*(unsigned __int8 (__thiscall **)(int, unsigned int *, unsigned int))(v14 + 216))( /*0x452f68*/
                        v13,
                        v24,
                        (unsigned __int8)(((v23 >> 7) + 1) >> 1)) )
                {
                  if ( v13 ) /*0x452f78*/
                    (*(void (__thiscall **)(int, int))(*(unsigned int *)v13 + 32))(v13, 1); /*0x452f80*/
                  BuildingClass::DemolishBridgeAnim(this, v25, 0); /*0x452f88*/
                  return; /*0x452f94*/
                }
              }
              v15 = (unsigned int *)(*((int (__thiscall **)(BuildingClass *, unsigned int *))this->vtable1 + 18))(this, v24); /*0x452fa0*/
              (v26) = ((v26) & ~0xFFFF) | ((unsigned int)(*v15 / 256) & 0xFFFF) /*0x452fb8*/
              (v26) = ((v26) & ~(0xFFFFULL << 16)) | (((unsigned __int64)(unsigned int)(v15[1] / 256) & 0xFFFF) << 16) /*0x452fcc*/
              *(unsigned int *)v19 = v26; /*0x452fd5*/
              do /*0x453048*/
              {
                v16 = (int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v19); /*0x452fe8*/
                if ( BuildingClass::FindByCellHash((BuildingClass *)v16) != -1 ) /*0x452ff4*/
                  CellClass::ReduceTiberium(v16, 12); /*0x452ffa*/
                if ( v16[17] == 126 ) /*0x453002*/
                  Helper_486E30((ObjectClass *)v16); /*0x453006*/
                (v27) = ((v27) & ~0xFFFF) | ((unsigned int)(*v6 + v19[0]) & 0xFFFF) /*0x45301c*/
                (v27) = ((v27) & ~(0xFFFFULL << 16)) | (((unsigned __int64)(unsigned int)(v19[1] + v6[1]) & 0xFFFF) << 16) /*0x453021*/
                *(unsigned int *)v19 = v27; /*0x453034*/
                v17 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v19); /*0x453038*/
                v18 = Cell::IsBridge(v17); /*0x45303f*/
              }
              while ( v18 != v21 ); /*0x453048*/
            }
          }
        }
      }
    }
}
} // namespace gamemd

// 0x453060
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::DemolishBridgeAnim()
{
    BuildingClass *v3; // ebx
    int result; // eax
    int v5; // ebp
    char v6; // si
    int v7; // edi
    unsigned int *v8; // eax
    unsigned short *v9; // esi
    Cell *v10; // eax
    int v11; // esi
    int v12; // ebp
    int v13; // ebp
    int v14; // ebx
    int *v15; // eax
    char v16; // [esp+14h] [ebp-38h]
    int v17; // [esp+18h] [ebp-34h]
    int v18; // [esp+24h] [ebp-28h]
    __int64 v19; // [esp+28h] [ebp-24h]
    int v20; // [esp+28h] [ebp-24h]
    unsigned short *i; // [esp+30h] [ebp-1Ch]
    int v23; // [esp+38h] [ebp-14h]
    int v24; // [esp+3Ch] [ebp-10h] BYREF
    unsigned char v25[12]; // [esp+40h] [ebp-Ch] BYREF

    v3 = this; /*0x453064*/
    result = (int)this->Type; /*0x453068*/
    if ( *(unsigned char *)(result + 5822) ) /*0x453073*/
    {
      v5 = *(int *)(result + 1464) >> 8; /*0x453087*/
      v18 = v5; /*0x45308d*/
      if ( v5 <= 1 ) /*0x453091*/
      {
        v5 = 1; /*0x453093*/
        v18 = 1; /*0x453098*/
      }
      v6 = a2; /*0x45309c*/
      v7 = a2 & 3; /*0x4530a8*/
      v23 = v7; /*0x4530ae*/
      v8 = (unsigned int *)(*((int (__thiscall **)(BuildingClass *, unsigned char *))this->vtable1 + 18))(this, v25); /*0x4530b2*/
      (v19) = ((v19) & ~(0xFFFFULL << 16)) | (((unsigned __int64)(unsigned int)(0) & 0xFFFF) << 16) /*0x4530b7*/
      (v19) = ((v19) & ~0xFFFF) | ((unsigned int)(*v8 / 256) & 0xFFFF) /*0x4530cd*/
      *(unsigned int *)((char *)&v19 + 2) = (unsigned __int16)(v8[1] / 256); /*0x4530e1*/
      a2 = v19; /*0x4530ec*/
      v9 = (unsigned short *)(4 * (v6 & 7) + 9041544); /*0x4530f9*/
      for ( i = v9; ; v9 = i ) /*0x453100*/
      {
        (v20) = ((v20) & ~0xFFFF) | ((unsigned int)(a2 + *v9) & 0xFFFF) /*0x45311b*/
        (v20) = ((v20) & ~(0xFFFFULL << 16)) | (((unsigned __int64)(unsigned int)(IDA_HIWORD(a2) + v9[1]) & 0xFFFF) << 16) /*0x453120*/
        a2 = v20; /*0x453133*/
        v10 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (short *)&a2); /*0x453137*/
        result = (int)Cell::IsBridge(v10); /*0x45313e*/
        v11 = result; /*0x453143*/
        if ( result ) /*0x453147*/
        {
          (result) = ((result) & ~0xFF) | ((unsigned int)(*(unsigned char *)(*(unsigned int *)(result + 1312) + 5823)) & 0xFF) /*0x453153*/
          if ( !(unsigned char)result ) /*0x45315b*/
            return result; /*0x45315b*/
          v12 = (*(int (__thiscall **)(int))(*(unsigned int *)&v11->q_E0)(v11); /*0x453168*/
          result = (*((int (__thiscall **)(BuildingClass *))v3->vtable1 + 14))(v3); /*0x45316e*/
          if ( result != v12 ) /*0x453173*/
            return result; /*0x453173*/
          result = (int)ProgressTimer::GetValue((ProgressTimer *)(v11 + 904), &v24); /*0x453184*/
          if ( (((unsigned int)((*(unsigned int *)result >> 12) + 1) >> 1) & 3) != v7 ) /*0x453196*/
            return result; /*0x453196*/
          if ( a3 ) /*0x4531a2*/
          {
            v13 = *(unsigned int *)(v11 + 108); /*0x4531ab*/
            v14 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4008); /*0x4531b1*/
            v15 = (int *)(*(int (__thiscall **)(int, unsigned char *, unsigned int, unsigned int))(*(unsigned int *)&v11->q_120)(v11, v25, 0, 0); /*0x4531c2*/
            CreateSmokeEffectAt(v13, v14, *v15, v15[1], v15[2], v16, v17); /*0x4531de*/
            v17 = 0; /*0x4531ea*/
            v16 = 1; /*0x4531ec*/
            (*(void (__thiscall **)(int, int, unsigned int, unsigned int, unsigned int, int))(*(unsigned int *)&v11->q_5B0)( /*0x4531fe*/
              v11,
              v11 + 108,
              0,
              *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
              0,
              1);
            v3 = this; /*0x453204*/
            v5 = v18; /*0x453208*/
            v7 = v23; /*0x45320c*/
          }
          else
          {
            (*(void (__thiscall **)(int))(*(unsigned int *)&v11->q_3E0)(v11); /*0x453216*/
            v5 = v18; /*0x45321c*/
          }
        }
        result = ++((unsigned int)((unsigned __int64)(v19) >> 32)); /*0x453224*/
        if ( IDA_SHIDWORD(v19) >= v5 ) /*0x45322b*/
          return result; /*0x45322b*/
      }
    }
    return result; /*0x453231*/
}
} // namespace gamemd

// 0x453240
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::TraverseBridgeSegments()
{
    Cell *v2; // eax
    Cell *v3; // ebp
    unsigned int v4; // esi
    void *vtable0; // eax
    BuildingClass *v6; // ebx
    unsigned int v7; // esi
    int v8; // edx
    unsigned short *v9; // edi
    short v10; // cx
    int i; // ecx
    Cell *v12; // eax
    BuildingClass *v13; // eax
    BuildingTypeClass *Type; // eax
    short v15; // cx
    short v17[2]; // [esp+10h] [ebp-10h] BYREF
    void *v18; // [esp+14h] [ebp-Ch]
    int v19; // [esp+18h] [ebp-8h]
    int v20; // [esp+1Ch] [ebp-4h] BYREF

    v2 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (short *)this); /*0x45324f*/
    if ( v2 ) /*0x453256*/
    {
      v2 = (Cell *)Cell::IsBridge(v2); /*0x45325e*/
      v3 = v2; /*0x453263*/
      if ( v2 ) /*0x453267*/
      {
        v2 = *(Cell **)&v2[1].__pad_250[48]; /*0x45326d*/
        if ( v2[8].__pad_144[123] ) /*0x453273*/
        {
          v4 = *(unsigned int *)ProgressTimer::GetValue((ProgressTimer *)v3[1].__pad_E8, &v20); /*0x453291*/
          vtable0 = this->TechnoClass; /*0x453293*/
          v6 = 0; /*0x453299*/
          v7 = (((v4 >> 12) + 1) >> 1) & 3; /*0x45329d*/
          v18 = vtable0; /*0x4532a0*/
          v8 = v7 & 7; /*0x4532a6*/
          v9 = (unsigned short *)(4 * v8 + 9041544); /*0x4532b1*/
          v10 = (unsigned short)vtable0 + IDA_LOWORD(g_DDrawSurfaceManager.scenario[v8 + 82]); /*0x4532b8*/
          (v8) = ((v8) & ~0xFFFF) | ((unsigned int)(IDA_HIWORD(g_DDrawSurfaceManager.scenario[v8 + 82])) & 0xFFFF) /*0x4532bb*/
          (v19) = ((v19) & ~0xFFFF) | ((unsigned int)(v10) & 0xFFFF) /*0x4532bf*/
          (v19) = ((v19) & ~(0xFFFFULL << 16)) | (((unsigned __int64)(unsigned int)(IDA_HIWORD(vtable0) + v8) & 0xFFFF) << 16) /*0x4532c9*/
          for ( i = v19; ; i = v19 ) /*0x4532ce*/
          {
            *(unsigned int *)v17 = i; /*0x4532d5*/
            if ( (unsigned short)i == (unsigned short)vtable0 ) /*0x4532d9*/
            {
              IDA_LOBYTE(v2) = (((v18) >> 16) & 0xFF); /*0x4532db*/
              if ( v17[1] == (((unsigned int)(v18) >> 16) & 0xFFFF) ) /*0x4532e5*/
                break; /*0x4532e5*/
            }
            v12 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v17); /*0x4532f1*/
            v13 = (BuildingClass *)Cell::IsBridge(v12); /*0x4532f8*/
            v6 = v13; /*0x4532fd*/
            if ( !v13 ) /*0x453301*/
              goto LABEL_13; /*0x453301*/
            Type = v13->Type; /*0x453303*/
            if ( Type->LaserFencePost ) /*0x453309*/
            {
              IDA_LOBYTE(v2) = BuildingClass::DemolishBridgeAnim(v6, v7 | 4, 0); /*0x45334c*/
              break; /*0x45334c*/
            }
            if ( !Type->LaserFence ) /*0x45331b*/
              goto LABEL_13; /*0x45331b*/
            IDA_LOWORD(vtable0) = v17[0]; /*0x45331d*/
            v15 = v9[1]; /*0x453324*/
            (v19) = ((v19) & ~0xFFFF) | ((unsigned int)(v17[0] + *v9) & 0xFFFF) /*0x453330*/
            v18 = *(void **)v17; /*0x453335*/
            (v19) = ((v19) & ~(0xFFFFULL << 16)) | (((unsigned __int64)(unsigned int)(v17[1] + v15) & 0xFFFF) << 16) /*0x453339*/
          }
          if ( v6 ) /*0x453353*/
            return (char)v2; /*0x453353*/
  LABEL_13:
          IDA_LOBYTE(v2) = (*(char (__thiscall **)(Cell *))(v3->Cell_field_0x0 + 248))(v3); /*0x453355*/
        }
      }
    }
    return (char)v2; /*0x453360*/
}
} // namespace gamemd

// 0x4533A0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::RepairPlacement(char a2)
{
    BuildingClass *v2; // ebx
    int result; // eax
    unsigned int *v4; // eax
    char v5; // si
    int v6; // kr00_4
    int v7; // edx
    short v8; // di
    short v9; // cx
    Cell *v10; // eax
    unsigned int *v11; // eax
    unsigned int *v12; // edi
    int v13; // esi
    int v14; // ebp
    unsigned char *BridgeSegment; // esi
    int v16; // ebx
    int v17; // esi
    unsigned int *Value; // eax
    unsigned int *v19; // esi
    int v20; // eax
    unsigned int *v21; // ebp
    short v22; // dx
    short v23; // ax
    Cell *v24; // eax
    unsigned int *v25; // eax
    bool v26; // zf
    bool v27; // [esp+6h] [ebp-4Eh]
    char v28; // [esp+7h] [ebp-4Dh]
    int v29; // [esp+8h] [ebp-4Ch]
    short v30[2]; // [esp+Ch] [ebp-48h] BYREF
    int v31; // [esp+10h] [ebp-44h]
    int v32; // [esp+14h] [ebp-40h]
    int v33; // [esp+18h] [ebp-3Ch]
    int v34; // [esp+1Ch] [ebp-38h]
    BuildingClass *v35; // [esp+20h] [ebp-34h]
    int v36; // [esp+24h] [ebp-30h]
    int v37; // [esp+28h] [ebp-2Ch]
    int v38; // [esp+2Ch] [ebp-28h]
    unsigned int *v39; // [esp+30h] [ebp-24h]
    unsigned int *v40; // [esp+34h] [ebp-20h]
    int v41; // [esp+38h] [ebp-1Ch]
    unsigned short *v42; // [esp+3Ch] [ebp-18h]
    int v43; // [esp+40h] [ebp-14h] BYREF
    int v44; // [esp+44h] [ebp-10h] BYREF
    char v45[12]; // [esp+48h] [ebp-Ch] BYREF

    v2 = this; /*0x4533a4*/
    v35 = this; /*0x4533a6*/
    result = (int)this->Type; /*0x4533aa*/
    if ( *(unsigned char *)(result + 5822) && ((unsigned int *)this)[0] && !((unsigned int *)this)[0] ) /*0x4533cc*/
    {
      v37 = *(int *)(result + 1464) >> 8; /*0x4533e6*/
      if ( v37 <= 1 ) /*0x4533ea*/
        v37 = 1; /*0x4533ec*/
      v27 = 0; /*0x4533f8*/
      if ( (*((unsigned __int8 (__thiscall **)(BuildingClass *))this->vtable1 + 212))(this) /*0x45341e*/
        && v2->StuffEnabled
        && (*((int (__thiscall **)(BuildingClass *))v2->vtable1 + 97))(v2) != 19 )
      {
        v27 = (*((int (__thiscall **)(BuildingClass *))v2->vtable1 + 97))(v2) != 18; /*0x45342f*/
      }
      v32 = 0; /*0x453437*/
      v41 = 4; /*0x45343f*/
      do /*0x453450*/
      {
        v4 = (unsigned int *)(*((int (__thiscall **)(BuildingClass *, char *))v2->vtable1 + 18))(v2, v45); /*0x453450*/
        v5 = v32; /*0x453465*/
        v6 = v4[1]; /*0x453470*/
        v7 = v32 & 7; /*0x453474*/
        v8 = *v4 / 256 + IDA_LOWORD(g_DDrawSurfaceManager.scenario[v7 + 82]); /*0x453489*/
        v42 = (unsigned short *)(4 * v7 + 9041544); /*0x45348c*/
        v9 = IDA_HIWORD(g_DDrawSurfaceManager.scenario[v7 + 82]); /*0x453490*/
        (v36) = ((v36) & ~0xFFFF) | ((unsigned int)(v8) & 0xFFFF) /*0x453494*/
        (v36) = ((v36) & ~(0xFFFFULL << 16)) | (((unsigned __int64)(unsigned int)(v6 / 256 + v9) & 0xFFFF) << 16) /*0x4534a3*/
        *(unsigned int *)v30 = v36; /*0x4534b2*/
        v10 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v30); /*0x4534b6*/
        v11 = Cell::IsBridge(v10); /*0x4534bd*/
        v12 = v11; /*0x4534c2*/
        v13 = v5 & 3; /*0x4534c4*/
        v34 = v13; /*0x4534c9*/
        if ( v11 ) /*0x4534cd*/
        {
          if ( *(unsigned char *)(v11[328] + 5823) ) /*0x4534d9*/
          {
            v14 = (*(int (__thiscall **)(unsigned int *))(*v11 + 56))(v11); /*0x4534ee*/
            if ( (*((int (__thiscall **)(BuildingClass *))v2->vtable1 + 14))(v2) == v14 /*0x45351c*/
              && (((unsigned int)((*(unsigned int *)ProgressTimer::GetValue((ProgressTimer *)(v12 + 226), &v43) >> 12) + 1) >> 1) & 3) == v13 )
            {
              v40 = v12; /*0x453526*/
              v39 = v12; /*0x45352c*/
              if ( a2 ) /*0x453530*/
                goto LABEL_20; /*0x453530*/
              if ( v27 ) /*0x453538*/
              {
                if ( (int)v12[390] >= 8 ) /*0x453547*/
                  goto LABEL_20; /*0x453547*/
              }
              else if ( (int)v12[390] < 8 ) /*0x453556*/
              {
  LABEL_20:
                BridgeSegment = 0; /*0x453561*/
                if ( v27 ) /*0x453569*/
                  BridgeSegment = (unsigned char *)BuildingClass::FindBridgeSegment(v2, v32, 1, -1); /*0x45357b*/
                v16 = 12; /*0x453581*/
                v29 = 12; /*0x453589*/
                v31 = 12; /*0x45358d*/
                if ( v34 == 2 ) /*0x453591*/
                {
                  v16 = 8; /*0x453593*/
                  v29 = 8; /*0x453595*/
                  v31 = 8; /*0x453599*/
                }
                v28 = 0; /*0x4535a1*/
                if ( v27 /*0x4535f4*/
                  && BridgeSegment
                  && (*(unsigned __int8 (__thiscall **)(unsigned char *))(*(unsigned int *)BridgeSegment + 848))(BridgeSegment)
                  && BridgeSegment[1770]
                  && (*(int (__thiscall **)(unsigned char *))(*(unsigned int *)BridgeSegment + 388))(BridgeSegment) != 19
                  && (*(int (__thiscall **)(unsigned char *))(*(unsigned int *)BridgeSegment + 388))(BridgeSegment) != 18 )
                {
                  v28 = 1; /*0x4535fa*/
                  switch ( v32 ) /*0x453604*/
                  {
                    case 0: /*0x453604*/
                      v16 = 5; /*0x45360b*/
                      v29 = 4; /*0x453610*/
                      v31 = 6; /*0x453618*/
                      break; /*0x453620*/
                    case 2: /*0x453604*/
                      v16 = 1; /*0x453639*/
                      v29 = 0; /*0x45363e*/
                      v31 = 2; /*0x453642*/
                      break; /*0x45364a*/
                    case 4: /*0x453604*/
                      v16 = 6; /*0x453622*/
                      v29 = 4; /*0x453627*/
                      v31 = 5; /*0x45362f*/
                      break; /*0x453637*/
                    case 6: /*0x453604*/
                      v16 = 2; /*0x45364c*/
                      v29 = 0; /*0x453651*/
                      v31 = 1; /*0x453655*/
                      break; /*0x453655*/
                    default:
                      break;
                  }
                }
                v33 = 0; /*0x45365d*/
                do /*0x4537a8*/
                {
                  if ( v33 >= v37 ) /*0x45366f*/
                    break; /*0x45366f*/
                  if ( !*(unsigned char *)(v12[328] + 5823) ) /*0x45367b*/
                    break; /*0x45367b*/
                  v17 = (*(int (__thiscall **)(unsigned int *))(*v12 + 56))(v12); /*0x453694*/
                  if ( (*((int (__thiscall **)(BuildingClass *))v35->vtable1 + 14))(v35) != v17 ) /*0x45369d*/
                    break; /*0x45369d*/
                  Value = ProgressTimer::GetValue((ProgressTimer *)(v12 + 226), &v44); /*0x4536ae*/
                  if ( (((unsigned int)((*Value >> 12) + 1) >> 1) & 3) != v34 ) /*0x4536c4*/
                    break; /*0x4536c4*/
                  v39 = v12; /*0x4536ce*/
                  if ( v12 == v40 ) /*0x4536d4*/
                    v12[390] = v16; /*0x4536d6*/
                  else
                    v12[390] = v29; /*0x4536e2*/
                  *((unsigned char *)v12 + 128) = 1; /*0x4536ec*/
                  if ( v28 ) /*0x4536f5*/
                  {
                    v19 = (unsigned int *)*((unsigned int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v30) + 57); /*0x453706*/
                    while ( v19 ) /*0x45370e*/
                    {
                      v20 = (*(int (__thiscall **)(unsigned int *))(*v19 + 44))(v19); /*0x453714*/
                      if ( v20 > 0 && (v20 <= 2 || v20 == 15) ) /*0x453723*/
                      {
                        v21 = (unsigned int *)v19[12]; /*0x453728*/
                        if ( (int)v19[27] > 0 ) /*0x453730*/
                          (*(void (__thiscall **)(unsigned int *, unsigned int *, unsigned int, unsigned int, unsigned int *, int, int, unsigned int))(*v19 + 364))( /*0x45374d*/
                            v19,
                            v19 + 27,
                            0,
                            *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
                            v12,
                            1,
                            1,
                            0);
                        v19 = v21; /*0x453753*/
                      }
                      else
                      {
                        v19 = (unsigned int *)v19[12]; /*0x453757*/
                      }
                    }
                  }
                  v22 = v30[0] + *v42; /*0x45376e*/
                  v23 = v30[1] + v42[1]; /*0x453773*/
                  ++v33; /*0x453778*/
                  IDA_LOWORD(v38) = v22; /*0x45377c*/
                  IDA_HIWORD(v38) = v23; /*0x453781*/
                  *(unsigned int *)v30 = v38; /*0x45378e*/
                  v24 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v30); /*0x453798*/
                  v12 = Cell::IsBridge(v24); /*0x4537a4*/
                }
                while ( v12 ); /*0x4537a8*/
                if ( v28 ) /*0x4537b4*/
                {
                  v25 = v39; /*0x4537b6*/
                  if ( v39 ) /*0x4537bc*/
                  {
                    if ( v40 == v39 ) /*0x4537c2*/
                    {
                      if ( v34 == 2 ) /*0x4537c9*/
                        v39[390] = 3; /*0x4537cb*/
                      else
                        v39[390] = 7; /*0x4537d7*/
                    }
                    else
                    {
                      v39[390] = v31; /*0x4537e7*/
                    }
                    *((unsigned char *)v25 + 128) = 1; /*0x4537ed*/
                  }
                }
                v2 = v35; /*0x4537f4*/
              }
            }
          }
        }
        result = v41 - 1; /*0x4537f8*/
        v26 = v41 == 1; /*0x453806*/
        v32 = ((unsigned char)v32 + 2) & 7; /*0x453807*/
        --v41; /*0x45380b*/
      }
      while ( !v26 ); /*0x453450*/
    }
    return result; /*0x453818*/
}
} // namespace gamemd

// 0x453BF0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::CalcBarrelFlashPosition()
{
    int v5; // eax
    int currentBurstIndex; // ecx
    int v7; // eax
    BuildingTypeClass *Type; // eax
    double v9; // st7
    float *v10; // eax
    float *v11; // eax
    float v12; // edx
    int v13; // eax
    int v14; // ebx
    int v15; // eax
    int v16; // ebp
    float v17; // eax
    int v18; // edx
    int v19; // kr00_4
    unsigned int *v20; // eax
    BuildingTypeClass *v21; // esi
    int v22; // ecx
    int v23; // ebp
    int v24; // edx
    float v25; // edi
    int v26; // ebx
    unsigned int *v27; // eax
    int v28; // edx
    int *v30; // [esp+0h] [ebp-6Ch]
    unsigned int v31[2]; // [esp+10h] [ebp-5Ch] BYREF
    int v32; // [esp+18h] [ebp-54h] BYREF
    float v33; // [esp+1Ch] [ebp-50h]
    float v34; // [esp+20h] [ebp-4Ch]
    float v35[3]; // [esp+24h] [ebp-48h] BYREF
    float v36[3]; // [esp+30h] [ebp-3Ch] BYREF
    float v37[12]; // [esp+3Ch] [ebp-30h] BYREF
    int v38; // [esp+78h] [ebp+Ch]

    v5 = *(unsigned int *)(*((int (__thiscall **)(BuildingClass *, int))this->vtable1 + 254))(this, a3); /*0x453c0c*/
    if ( a4 ) /*0x453c10*/
    {
      currentBurstIndex = ((unsigned int *)this)[0]; /*0x453c12*/
      if ( currentBurstIndex ) /*0x453c1a*/
        v7 = currentBurstIndex - 1; /*0x453c25*/
      else
        v7 = *(unsigned int *)(v5 + 156) - 1; /*0x453c22*/
    }
    else
    {
      v7 = ((unsigned int *)this)[0]; /*0x453c2a*/
    }
    if ( v7 ) /*0x453c32*/
    {
      if ( v7 == 1 ) /*0x453c49*/
        v38 = -*(unsigned int *)&this->Type->__pad_1714[68]; /*0x453c59*/
      else
        v38 = 0; /*0x453c5f*/
    }
    else
    {
      v38 = *(unsigned int *)&this->Type->__pad_1714[68]; /*0x453c40*/
    }
    Type = this->Type; /*0x453c67*/
    v9 = (double)*(int *)&Type->__pad_1714[72]; /*0x453c71*/
    v35[0] = (float)*(int *)&Type->__pad_1714[64]; /*0x453c83*/
    v35[1] = (float)v38; /*0x453c90*/
    v35[2] = v9; /*0x453c94*/
    v10 = BuildingClass::BuildTurretTransform((int)this, v37); /*0x453c98*/
    v11 = TransformMatrix3x4Point(v36, v10, v35); /*0x453ca3*/
    v32 = *(int *)v11; /*0x453caa*/
    v12 = v11[2]; /*0x453cb5*/
    v33 = v11[1]; /*0x453cb8*/
    v34 = v12; /*0x453cbc*/
    (v13) = ((v13) & ~0xFFFF) | ((unsigned int)(Math::RoundToInt(*(float *)&v32)) & 0xFFFF) /*0x453cc0*/
    v14 = v13; /*0x453ccb*/
    (v15) = ((v15) & ~0xFFFF) | ((unsigned int)(Math::RoundToInt(-v33)) & 0xFFFF) /*0x453ccd*/
    v16 = v15; /*0x453cd6*/
    v19 = Math::RoundToInt(v34); /*0x453cd8*/
    (v18) = ((v18) & ~0xFFFF) | ((unsigned int)((((unsigned int)(v19) >> 16) & 0xFFFF)) & 0xFFFF) /*0x453cd8*/
    IDA_LOWORD(v17) = v19; /*0x453cd8*/
    v34 = v17; /*0x453ce1*/
    v20 = (unsigned int *)(*((int (__fastcall **)(BuildingClass *, int, float *))this->vtable1 + 43))(this, v18, v36); /*0x453cea*/
    v21 = this->Type; /*0x453cfc*/
    v22 = v16 + v20[1]; /*0x453d04*/
    v23 = IDA_LODWORD(v34) + v20[2]; /*0x453d06*/
    v24 = *(unsigned int *)&v21->__pad_F70[624]; /*0x453d0e*/
    IDA_LODWORD(v25) = v14 + *v20; /*0x453d14*/
    v31[1] = *(unsigned int *)&v21->__pad_F70[628]; /*0x453d16*/
    v26 = v22; /*0x453d1a*/
    v36[0] = v25; /*0x453d2c*/
    v31[0] = v24; /*0x453d30*/
    v27 = (unsigned int *)World::ToScreen(&v32, v31, v30); /*0x453d34*/
    v28 = v27[1]; /*0x453d3b*/
    *a2 = IDA_LODWORD(v25) + *v27; /*0x453d4a*/
    a2[1] = v28 + v26; /*0x453d4c*/
    a2[2] = v23; /*0x453d4f*/
    return a2; /*0x453d48*/
}
} // namespace gamemd

// 0x453D60
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::MarkCellOccupied(int cell_x, int cell_y)
{
    unsigned int *v1; // ecx
    unsigned int *v2; // eax
    int v3; // ecx
    int result; // eax
    unsigned int *v5; // [esp+4h] [ebp+4h] BYREF

    v1 = v5; /*0x453d60*/
    (v5) = ((v5) & ~0xFFFF) | ((unsigned int)(*v5 / 256) & 0xFFFF) /*0x453d72*/
    (v5) = ((v5) & ~(0xFFFFULL << 16)) | (((unsigned __int64)(unsigned int)(v1[1] / 256) & 0xFFFF) << 16) /*0x453d8b*/
    v2 = CellCoord::To_CellObj(&dword_87F7E8, (short *)&v5); /*0x453d9d*/
    v3 = v2[73]; /*0x453da2*/
    result = (int)(v2 + 73); /*0x453da8*/
    (v3) = ((v3) & ~0xFF) | ((unsigned int)(v3 | 0x80) & 0xFF) /*0x453dad*/
    *(unsigned int *)result = v3; /*0x453db0*/
    return result; /*0x453db2*/
}
} // namespace gamemd

// 0x453DC0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::ClearCellOccupied(int cell_x, int cell_y)
{
    unsigned int *v1; // ecx
    unsigned int *v2; // eax
    int v3; // ecx
    int result; // eax
    unsigned int *v5; // [esp+4h] [ebp+4h] BYREF

    v1 = v5; /*0x453dc0*/
    (v5) = ((v5) & ~0xFFFF) | ((unsigned int)(*v5 / 256) & 0xFFFF) /*0x453dd2*/
    (v5) = ((v5) & ~(0xFFFFULL << 16)) | (((unsigned __int64)(unsigned int)(v1[1] / 256) & 0xFFFF) << 16) /*0x453deb*/
    v2 = CellCoord::To_CellObj(&dword_87F7E8, (short *)&v5); /*0x453dfd*/
    v3 = v2[73]; /*0x453e02*/
    result = (int)(v2 + 73); /*0x453e08*/
    (v3) = ((v3) & ~0xFF) | ((unsigned int)(v3 & 0x7F) & 0xFF) /*0x453e0d*/
    *(unsigned int *)result = v3; /*0x453e10*/
    return result; /*0x453e12*/
}
} // namespace gamemd

// 0x454260
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::PowerDrainUpdate(int a2)
{
    int v2; // edx
    int v3; // eax
    int v4; // edx
    int v5; // eax
    InfantryClass *C4AppliedBy; // eax
    int v7; // eax
    AnimClass *FirestormAnim; // eax
    int v9; // eax
    int v10; // edx
    int v11; // eax
    int v12; // edx
    int v13; // eax
    int v14; // ecx
    int v15; // edx
    int v16; // eax
    int v17; // ecx
    int v18; // edx
    int v19; // eax
    int v20; // ecx
    int v21; // edx
    int v22; // eax
    int v23; // ecx
    int v24; // edx
    int v25; // eax
    int v26; // ecx
    int v27; // edx
    int v28; // eax
    int v29; // edx
    Power *v31; // [esp+Ch] [ebp+4h]

    House::PowerBeginUpdate((TechnoClass *)this, (int)v31); /*0x454269*/
    v2 = this->C4Timer[0]; /*0x45426e*/
    v3 = this->C4Timer[2]; /*0x454274*/
    if ( v2 != -1 ) /*0x45427d*/
    {
      if ( *(unsigned int * *)((char *)&stru_A8EB00 + 644) - v2 >= v3 ) /*0x454289*/
        v3 = 0; /*0x45428f*/
      else
        v3 -= *(unsigned int * *)((char *)&stru_A8EB00 + 644) - v2; /*0x45428b*/
    }
    Power::TimerProcess(v3); /*0x454294*/
    v4 = *(unsigned int *)&this->__pad_6B8[24]; /*0x454299*/
    v5 = *(unsigned int *)&this->__pad_6B8[32]; /*0x45429f*/
    if ( v4 != -1 ) /*0x4542a8*/
    {
      if ( *(unsigned int * *)((char *)&stru_A8EB00 + 644) - v4 >= v5 ) /*0x4542b4*/
        v5 = 0; /*0x4542ba*/
      else
        v5 -= *(unsigned int * *)((char *)&stru_A8EB00 + 644) - v4; /*0x4542b6*/
    }
    Power::TimerProcess(v5); /*0x4542bf*/
    Power::TimerProcess(this->BuildingClass_field_int_534); /*0x4542cd*/
    Power::TimerProcess(this->BuildingClass_field_int_538); /*0x4542db*/
    Power::TimerProcess(this->OwnerCountryIndex); /*0x4542e9*/
    C4AppliedBy = this->C4AppliedBy; /*0x4542ee*/
    if ( C4AppliedBy ) /*0x4542f6*/
    {
      v7 = (*((int (__stdcall **)(void **))((unsigned int *)C4AppliedBy)[0] + 4))(&((unsigned int *)C4AppliedBy)[0]); /*0x4542ff*/
      Power::TimerProcess(v7); /*0x454305*/
    }
    Power::TimerProcess(this->BuildingClass_field_544); /*0x454313*/
    FirestormAnim = this->FirestormAnim; /*0x454318*/
    if ( FirestormAnim ) /*0x454320*/
    {
      v9 = (*((int (__stdcall **)(void **))FirestormAnim->AnimClass_field_0x4 + 4))(&FirestormAnim->AnimClass_field_0x4); /*0x454329*/
      Power::TimerProcess(v9); /*0x45432f*/
    }
    v10 = this->BuildingClass_field_timer_550[0]; /*0x454334*/
    v11 = this->BuildingClass_field_timer_550[2]; /*0x45433a*/
    if ( v10 != -1 ) /*0x454343*/
    {
      if ( *(unsigned int * *)((char *)&stru_A8EB00 + 644) - v10 >= v11 ) /*0x45434f*/
        v11 = 0; /*0x454355*/
      else
        v11 -= *(unsigned int * *)((char *)&stru_A8EB00 + 644) - v10; /*0x454351*/
    }
    Power::TimerProcess(v11); /*0x45435a*/
    Power::TimerProcess(this->SuperWeaponToken); /*0x454368*/
    Power::TimerProcess(this->LaserFenceFrame); /*0x454376*/
    Power::TimerProcess(this->FirestormWallFrame); /*0x454384*/
    (v12) = ((v12) & ~0xFF) | ((unsigned int)(this->HasPower) & 0xFF) /*0x454389*/
    v13 = Power::FlagProcess(v31, v12); /*0x454392*/
    (v13) = ((v13) & ~0xFF) | ((unsigned int)(this->StuffEnabled) & 0xFF) /*0x454397*/
    Power::FlagProcess(v31, v13); /*0x4543a0*/
    (v14) = ((v14) & ~0xFF) | ((unsigned int)(this->__pad_6B8[18]) & 0xFF) /*0x4543a5*/
    Power::FlagProcess(v31, v14); /*0x4543ae*/
    (v15) = ((v15) & ~0xFF) | ((unsigned int)(this->__pad_6B8[19]) & 0xFF) /*0x4543b3*/
    v16 = Power::FlagProcess(v31, v15); /*0x4543bc*/
    (v16) = ((v16) & ~0xFF) | ((unsigned int)(this->BuildingClass_field_bool_6DC) & 0xFF) /*0x4543c1*/
    Power::FlagProcess(v31, v16); /*0x4543ca*/
    (v17) = ((v17) & ~0xFF) | ((unsigned int)(this->BuildingClass_field_bool_6DD) & 0xFF) /*0x4543cf*/
    Power::FlagProcess(v31, v17); /*0x4543d8*/
    (v18) = ((v18) & ~0xFF) | ((unsigned int)(this->IsBeingRepaired) & 0xFF) /*0x4543dd*/
    v19 = Power::FlagProcess(v31, v18); /*0x4543e6*/
    (v19) = ((v19) & ~0xFF) | ((unsigned int)(this->NeedsRepairs) & 0xFF) /*0x4543eb*/
    Power::FlagProcess(v31, v19); /*0x4543f4*/
    (v20) = ((v20) & ~0xFF) | ((unsigned int)(this->C4Applied) & 0xFF) /*0x4543f9*/
    Power::FlagProcess(v31, v20); /*0x454402*/
    (v21) = ((v21) & ~0xFF) | ((unsigned int)(this->NoCrew) & 0xFF) /*0x454407*/
    v22 = Power::FlagProcess(v31, v21); /*0x454410*/
    (v22) = ((v22) & ~0xFF) | ((unsigned int)(this->BuildingClass_field_bool_6E1) & 0xFF) /*0x454415*/
    Power::FlagProcess(v31, v22); /*0x45441e*/
    (v23) = ((v23) & ~0xFF) | ((unsigned int)(this->BuildingClass_field_bool_6E2) & 0xFF) /*0x454423*/
    Power::FlagProcess(v31, v23); /*0x45442c*/
    (v24) = ((v24) & ~0xFF) | ((unsigned int)(this->HasBeenCaptured) & 0xFF) /*0x454431*/
    v25 = Power::FlagProcess(v31, v24); /*0x45443a*/
    (v25) = ((v25) & ~0xFF) | ((unsigned int)(this->ActuallyPlacedOnMap) & 0xFF) /*0x45443f*/
    Power::FlagProcess(v31, v25); /*0x454448*/
    (v26) = ((v26) & ~0xFF) | ((unsigned int)(this->__pad_6B8[20]) & 0xFF) /*0x45444d*/
    Power::FlagProcess(v31, v26); /*0x454456*/
    (v27) = ((v27) & ~0xFF) | ((unsigned int)(this->BuildingClass_field_bool_6E5) & 0xFF) /*0x45445b*/
    v28 = Power::FlagProcess(v31, v27); /*0x454464*/
    (v28) = ((v28) & ~0xFF) | ((unsigned int)(this->IsDamaged) & 0xFF) /*0x454469*/
    Power::FlagProcess(v31, v28); /*0x454472*/
    Power::TimerProcess(*(unsigned short *)this->BuildingClass_field_short_700); /*0x454483*/
    (v29) = ((v29) & ~0xFF) | ((unsigned int)(this->UpgradeLevel) & 0xFF) /*0x454488*/
    return Power::FinalizeDrain(v31, v29); /*0x454496*/
}
} // namespace gamemd

// 0x4545D0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::ProcessAnimationStates()
{
    int *Anims; // ecx
    int v3; // ebp
    int v4; // edi
    BuildingTypeClass *Type; // eax
    unsigned char *v6; // ecx
    BuildingTypeClass *v7; // edx
    int v9; // ecx
    AnimTypeClass *v10; // eax
    int *v13; // [esp+Ch] [ebp-4h]

    BuildingClass::ClearAnims(this, 20); /*0x4545d8*/
    Anims = this->Anims; /*0x4545dd*/
    v3 = 0; /*0x4545e3*/
    v4 = 0; /*0x4545e5*/
    v13 = this->Anims; /*0x4545e7*/
    do /*0x454716*/
    {
      Type = this->Type; /*0x4545eb*/
      if ( Type->__pad_F70[v4 * 4 + 28] ) /*0x4545f1*/
      {
        v6 = (unsigned char *)*Anims; /*0x4545fc*/
        if ( v6 ) /*0x454600*/
          VtableStub::Method_425270(v6); /*0x454606*/
      }
      else if ( Type->__pad_F70[v4 * 4 + 29] ) /*0x454610*/
      {
        if ( !*Anims && this->ActuallyPlacedOnMap && (!Type->IsAnimDelayedFire || v4 != 170) ) /*0x454642*/
        {
          BuildingClass::GetHealthRatio(this); /*0x45464a*/
          _EAX = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x45464f*/
          __asm /*0x454654*/
          {
            fcomp qword ptr [eax+1700h]
            fnstsw ax
          }
          if ( (_EAX & 0x4100) != 0 ) /*0x45465f*/
          {
            v7 = this->Type; /*0x454661*/
            v9 = 1; /*0x454667*/
            v10 = (AnimTypeClass *)&v7->BuildingAnim[v4 + 16]; /*0x45466c*/
          }
          else
          {
            v9 = 0; /*0x45467b*/
            v10 = (AnimTypeClass *)&this->Type->BuildingAnim[v4 + 12]; /*0x45467d*/
          }
          if ( v10 && IDA_LOBYTE(v10->ObjectTypeClass) ) /*0x454688*/
            goto LABEL_23; /*0x45468b*/
        }
      }
      else if ( Type->__pad_F70[v4 * 4 + 30] && this->AnimStates[v3] ) /*0x45469a*/
      {
        this->AnimStates[v3] = 0; /*0x4546a7*/
        BuildingClass::GetHealthRatio(this); /*0x4546af*/
        _ECX = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x4546b4*/
        __asm /*0x4546ba*/
        {
          fcomp qword ptr [ecx+1700h]
          fnstsw ax
        }
        if ( (_AX & 0x4100) != 0 ) /*0x4546c5*/
        {
          v7 = this->Type; /*0x4546c7*/
          v9 = 1; /*0x4546cd*/
          v10 = (AnimTypeClass *)&v7->BuildingAnim[v4 + 16]; /*0x4546d2*/
        }
        else
        {
          v9 = 0; /*0x4546e1*/
          v10 = (AnimTypeClass *)&this->Type->BuildingAnim[v4 + 12]; /*0x4546e3*/
        }
        if ( v10 && IDA_LOBYTE(v10->ObjectTypeClass) ) /*0x4546ee*/
  LABEL_23:
          (this)->PlayAnim((int)v7, v10, v3, v9, 0, 0); /*0x4546f3*/
      }
      v4 += 17; /*0x454701*/
      ++v3; /*0x454708*/
      Anims = ++v13; /*0x454709*/
    }
    while ( v4 < 357 ); /*0x454716*/
}
} // namespace gamemd

// 0x454730
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::UpdateIdleAnims()
{
    int v2; // ebx
    int i; // edi
    unsigned char *result; // eax
    BuildingTypeClass *Type; // edx
    int v8; // ecx

    BuildingClass::ClearAnims(this, 19); /*0x454737*/
    v2 = 0; /*0x45473c*/
    for ( i = 0; i < 357; i += 17 ) /*0x45473e*/
    {
      result = this->Type; /*0x454740*/
      if ( result[i * 4 + 3983] ) /*0x454746*/
      {
        BuildingClass::GetHealthRatio(this); /*0x454753*/
        _ECX = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x454758*/
        __asm /*0x45475e*/
        {
          fcomp qword ptr [ecx+1700h]
          fnstsw ax
        }
        if ( (_AX & 0x4100) != 0 ) /*0x454769*/
        {
          Type = this->Type; /*0x45476b*/
          v8 = 1; /*0x454771*/
          result = &Type->BuildingAnim[i + 16]; /*0x454776*/
        }
        else
        {
          v8 = 0; /*0x454785*/
          result = &this->Type->BuildingAnim[i + 12]; /*0x454787*/
        }
        if ( result ) /*0x454790*/
        {
          if ( *result ) /*0x454792*/
            result = (unsigned char *)(this)->PlayAnim((int)Type, (AnimTypeClass *)result, v2, v8, 0, 0); /*0x4547a0*/
        }
      }
      ++v2; /*0x4547a8*/
    }
    return result; /*0x4547b1*/
}
} // namespace gamemd

// 0x4547C0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::UpdateAnimationSlots()
{
    int i; // edi
    char *v3; // eax
    BuildingClass *v4; // ecx
    BuildingTypeClass *Type; // eax
    int v8; // ecx
    char *v9; // eax
    int v10; // edx
    int v12; // ecx
    char *v13; // eax

    for ( i = 0; i < 21; ++i ) /*0x4547c4*/
    {
      v3 = (char *)this->Type + 68 * i; /*0x4547d3*/
      if ( v3[3980] ) /*0x4547d6*/
      {
        v4 = (BuildingClass *)this->Anims[i]; /*0x4547e0*/
        if ( v4 ) /*0x4547e9*/
          BuildingClass::SetField8(v4); /*0x4547ef*/
      }
      else if ( v3[3981] ) /*0x4547f9*/
      {
        if ( this->Anims[i] ) /*0x454807*/
        {
          BuildingClass::ClearAnims(this, i); /*0x454819*/
          if ( i == 10 ) /*0x454821*/
          {
            Type = this->Type; /*0x454827*/
            if ( Type->IsAnimDelayedFire ) /*0x45482d*/
            {
              if ( Type->__pad_F70[232] ) /*0x45483b*/
              {
                BuildingClass::GetHealthRatio(this); /*0x45484b*/
                _EDX = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x454850*/
                __asm /*0x454856*/
                {
                  fcomp qword ptr [edx+1700h]
                  fnstsw ax
                }
                if ( (_AX & 0x4100) != 0 ) /*0x454861*/
                {
                  v8 = 1; /*0x454869*/
                  v9 = &this->Type->__pad_F70[184]; /*0x45486e*/
                }
                else
                {
                  v8 = 0; /*0x45487b*/
                  v9 = &this->Type->__pad_F70[168]; /*0x45487d*/
                }
                if ( v9 && *v9 ) /*0x45488a*/
                  (/*0x45489a*/
                    this)->PlayAnim(*(int *)&DSurface_ViewBounds.__pad_FC[324], (AnimTypeClass *)v9, 3, v8, 0, 0);
              }
            }
          }
        }
      }
      else if ( v3[3982] ) /*0x45489c*/
      {
        if ( this->Anims[i] ) /*0x4548a6*/
        {
          this->AnimStates[i] = 1; /*0x4548b4*/
          BuildingClass::ClearAnims(this, i); /*0x4548bc*/
          if ( i == 16 ) /*0x4548c4*/
          {
            BuildingClass::GetHealthRatio(this); /*0x4548c8*/
            _EAX = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x4548cd*/
            __asm /*0x4548d2*/
            {
              fcomp qword ptr [eax+1700h]
              fnstsw ax
            }
            if ( (_EAX & 0x4100) != 0 ) /*0x4548dd*/
            {
              v12 = 1; /*0x4548e5*/
              v13 = &this->Type->__pad_F70[1340]; /*0x4548ea*/
            }
            else
            {
              v12 = 0; /*0x4548f7*/
              v13 = &this->Type->__pad_F70[1324]; /*0x4548f9*/
            }
            if ( v13 && *v13 ) /*0x454902*/
              (this)->PlayAnim(v10, (AnimTypeClass *)v13, 20, v12, 0, 0); /*0x454911*/
          }
        }
      }
    }
}
} // namespace gamemd

// 0x454930
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::ProcessDamageAnim()
{
    int v2; // edx
    int v4; // ecx
    char *v5; // eax
    int v6; // ebx
    int i; // esi

    BuildingClass::GetHealthRatio(this); /*0x454935*/
    _EAX = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x45493a*/
    __asm /*0x45493f*/
    {
      fcomp qword ptr [eax+1700h]
      fnstsw ax
    }
    if ( (_EAX & 0x4100) != 0 ) /*0x45494a*/
    {
      v4 = 1; /*0x454952*/
      v5 = &this->Type->__pad_F70[1272]; /*0x454957*/
    }
    else
    {
      v4 = 0; /*0x454964*/
      v5 = &this->Type->__pad_F70[1256]; /*0x454966*/
    }
    if ( v5 && *v5 ) /*0x45496f*/
      (this)->PlayAnim(v2, (AnimTypeClass *)v5, 19, v4, 0, 0); /*0x45497e*/
    v6 = 0; /*0x454983*/
    for ( i = 0; i < 1428; i += 68 ) /*0x454985*/
    {
      if ( this->Type->__pad_F70[i + 31] ) /*0x45498d*/
        BuildingClass::ClearAnims(this, v6); /*0x45499b*/
      ++v6; /*0x4549a3*/
    }
}
} // namespace gamemd

// 0x4555D0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::IsPoweredActive()
{
    int result; // eax
    BuildingTypeClass *Type; // ebx
    HouseClass *owner; // edi
    int v5; // edx

    if ( !this->HasPower && this->Audio7[1] < 2 ) /*0x4555ea*/
      goto LABEL_20; /*0x4555ea*/
    result = ((unsigned int *)this)[0]; /*0x4555f0*/
    if ( result > 0 ) /*0x4555f8*/
      goto LABEL_20; /*0x4555f8*/
    result = ((unsigned int *)this)[0]; /*0x4555fe*/
    if ( !result ) /*0x455603*/
      goto LABEL_20; /*0x455603*/
    result = (int)this->Type; /*0x455609*/
    if ( *(unsigned char *)(result + 5491) ) /*0x45560f*/
    {
      if ( *(int *)(result + 3812) > 0 ) /*0x455621*/
      {
        result = HouseClass::GetPowerRatio(((unsigned int *)this)[0]); /*0x455629*/
        __asm /*0x45562e*/
        {
          fcomp ds:dbl_7E1718
          fnstsw ax
        }
        if ( (result & 0x100) != 0 && this->Audio7[1] < 2 ) /*0x455641*/
          goto LABEL_20; /*0x455641*/
      }
    }
    Type = this->Type; /*0x455643*/
    if ( Type->PoweredSpecial ) /*0x455649*/
    {
      owner = ((unsigned int *)this)[0]; /*0x455653*/
      v5 = owner->powerBlackoutTimer[0]; /*0x455659*/
      result = owner->powerBlackoutTimer[2]; /*0x45565f*/
      if ( v5 != -1 ) /*0x455668*/
      {
        if ( *(unsigned int * *)((char *)&stru_A8EB00 + 644) - v5 >= result ) /*0x455674*/
        {
  LABEL_14:
          if ( IDA_HIBYTE(owner->HouseClass_field_timer_B[2]) ) /*0x45567c*/
            goto LABEL_20; /*0x455684*/
          goto LABEL_15; /*0x455684*/
        }
        result -= *(unsigned int * *)((char *)&stru_A8EB00 + 644) - v5; /*0x455676*/
      }
      if ( result ) /*0x45567a*/
        goto LABEL_20; /*0x45567a*/
      goto LABEL_14; /*0x45567a*/
    }
  LABEL_15:
    if ( !Type->NeedsEngineer || this->__pad_6B8[20] ) /*0x455690*/
    {
      result = (*((int (__thiscall **)(BuildingClass *))this->vtable1 + 97))(this); /*0x45569e*/
      if ( result != 18 ) /*0x4556a7*/
      {
        result = (*((int (__thiscall **)(BuildingClass *))this->vtable1 + 97))(this); /*0x4556ad*/
        if ( result != 19 ) /*0x4556b6*/
        {
          (result) = ((result) & ~0xFF) | ((unsigned int)(1) & 0xFF) /*0x4556ba*/
          return result; /*0x4556bd*/
        }
      }
    }
  LABEL_20:
    (result) = ((result) & ~0xFF) | ((unsigned int)(0) & 0xFF) /*0x4556be*/
    return result; /*0x4556b8*/
}
} // namespace gamemd

// 0x455980
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::ScanCircleForTiberium()
{
    int DetectDisguiseRange; // ebx
    int result; // eax
    unsigned int *v3; // eax
    int v4; // esi
    int v5; // ebp
    BuildingClass *v6; // eax
    int v7; // [esp+Ch] [ebp-20h]
    int v8; // [esp+Ch] [ebp-20h]
    short v9[2]; // [esp+14h] [ebp-18h] BYREF
    int v10; // [esp+18h] [ebp-14h]
    int i; // [esp+1Ch] [ebp-10h]
    unsigned char v12[12]; // [esp+20h] [ebp-Ch] BYREF
    int v13; // [esp+30h] [ebp+4h]

    DetectDisguiseRange = ((unsigned int *)this->Type)[0]; /*0x455991*/
    result = ((unsigned int *)this)[0]->relatedTagsCount; /*0x4559a1*/
    v10 = result; /*0x4559a9*/
    if ( (unsigned short)v13 == (unsigned short)g_TerrainTypeTable ) /*0x4559b4*/
    {
      (result) = ((result) & ~0xFFFF) | ((unsigned int)((((unsigned int)(v13) >> 16) & 0xFFFF)) & 0xFFFF) /*0x4559b6*/
      if ( (((unsigned int)(v13) >> 16) & 0xFFFF) == IDA_HIWORD(g_TerrainTypeTable) ) /*0x4559c2*/
      {
        v3 = (unsigned int *)(*((int (__thiscall **)(BuildingClass *, unsigned char *))this->vtable1 + 18))(this, v12); /*0x4559cb*/
        (v7) = ((v7) & ~0xFFFF) | ((unsigned int)(*v3 / 256) & 0xFFFF) /*0x4559de*/
        result = v3[1] / 256; /*0x4559ef*/
        (v7) = ((v7) & ~(0xFFFFULL << 16)) | (((unsigned __int64)(unsigned int)(result) & 0xFFFF) << 16) /*0x4559f2*/
        v13 = v7; /*0x4559fb*/
      }
    }
    v4 = -DetectDisguiseRange; /*0x455a01*/
    v5 = -DetectDisguiseRange; /*0x455a03*/
    for ( i = -DetectDisguiseRange; v5 < DetectDisguiseRange; ++v5 ) /*0x455a0b*/
    {
      if ( v4 < DetectDisguiseRange ) /*0x455a10*/
      {
        do /*0x455a64*/
        {
          (v8) = ((v8) & ~0xFFFF) | ((unsigned int)(v4 + v13) & 0xFFFF) /*0x455a2f*/
          (v8) = ((v8) & ~(0xFFFFULL << 16)) | (((unsigned __int64)(unsigned int)((((unsigned int)(v13) >> 16) & 0xFFFF) + v5) & 0xFFFF) << 16) /*0x455a1e*/
          *(unsigned int *)v9 = v8; /*0x455a38*/
          result = DetectDisguiseRange * DetectDisguiseRange; /*0x455a3c*/
          if ( v5 * v5 + v4 * v4 < DetectDisguiseRange * DetectDisguiseRange ) /*0x455a44*/
          {
            v6 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v9); /*0x455a50*/
            result = BuildingClass::evaulateDefense(v6, v10); /*0x455a5c*/
          }
          ++v4; /*0x455a61*/
        }
        while ( v4 < DetectDisguiseRange ); /*0x455a64*/
        v4 = i; /*0x455a66*/
      }
    }
    return result; /*0x455a70*/
}
} // namespace gamemd

// 0x455A80
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::UpdateTerrainEffect()
{
    int result; // eax
    int DetectDisguiseRange; // ebx
    unsigned int *v4; // eax
    int v5; // esi
    int v6; // ebp
    BuildingClass *v7; // eax
    int v8; // [esp+Ch] [ebp-20h]
    int v9; // [esp+Ch] [ebp-20h]
    short v10[2]; // [esp+14h] [ebp-18h] BYREF
    int v11; // [esp+18h] [ebp-14h]
    int i; // [esp+1Ch] [ebp-10h]
    unsigned char v13[12]; // [esp+20h] [ebp-Ch] BYREF
    int v14; // [esp+30h] [ebp+4h]

    result = (*((int (__thiscall **)(BuildingClass *))this->vtable1 + 212))(this); /*0x455a8a*/
    if ( (unsigned char)result ) /*0x455a92*/
    {
      DetectDisguiseRange = ((unsigned int *)this->Type)[0]; /*0x455aa4*/
      result = ((unsigned int *)this)[0]->relatedTagsCount; /*0x455abf*/
      v11 = result; /*0x455ac2*/
      if ( v14 == g_TerrainTypeTable ) /*0x455ac6*/
      {
        v4 = (unsigned int *)(*((int (__thiscall **)(BuildingClass *, unsigned char *))this->vtable1 + 18))(this, v13); /*0x455adf*/
        (v8) = ((v8) & ~0xFFFF) | ((unsigned int)(*v4 / 256) & 0xFFFF) /*0x455af2*/
        result = v4[1] / 256; /*0x455b03*/
        (v8) = ((v8) & ~(0xFFFFULL << 16)) | (((unsigned __int64)(unsigned int)(result) & 0xFFFF) << 16) /*0x455b06*/
        v14 = v8; /*0x455b0f*/
      }
      v5 = -DetectDisguiseRange; /*0x455b15*/
      v6 = -DetectDisguiseRange; /*0x455b17*/
      for ( i = -DetectDisguiseRange; v6 < DetectDisguiseRange; ++v6 ) /*0x455b1f*/
      {
        if ( v5 < DetectDisguiseRange ) /*0x455b24*/
        {
          do /*0x455b78*/
          {
            (v9) = ((v9) & ~0xFFFF) | ((unsigned int)(v5 + v14) & 0xFFFF) /*0x455b43*/
            result = DetectDisguiseRange * DetectDisguiseRange; /*0x455b48*/
            (v9) = ((v9) & ~(0xFFFFULL << 16)) | (((unsigned __int64)(unsigned int)((((unsigned int)(v14) >> 16) & 0xFFFF) + v6) & 0xFFFF) << 16) /*0x455b32*/
            *(unsigned int *)v10 = v9; /*0x455b54*/
            if ( v6 * v6 + v5 * v5 < DetectDisguiseRange * DetectDisguiseRange ) /*0x455b58*/
            {
              v7 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v10); /*0x455b64*/
              result = BuildingClass::processGarrison(v7, v11); /*0x455b70*/
            }
            ++v5; /*0x455b75*/
          }
          while ( v5 < DetectDisguiseRange ); /*0x455b78*/
          v5 = i; /*0x455b7a*/
        }
      }
    }
    return result; /*0x455b84*/
}
} // namespace gamemd

// 0x456580
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::UpdateRevealField()
{
    char *Field; // ebx
    int v3; // edi
    int result; // eax

    Field = Diplomacy::GetField(&stru_87F5F0.__pad_58[416], (int)this->Type); /*0x456596*/
    v3 = 0; /*0x456598*/
    result = *((unsigned int *)Field + 4); /*0x45659a*/
    if ( result > 0 ) /*0x45659f*/
    {
      do /*0x4565d0*/
      {
        BuildingClass::ProcessFogCellOccupancy( /*0x4565c5*/
          (int)&stru_87F5F0.__pad_58[416],
          (int)this,
          *(unsigned int *)(*((unsigned int *)Field + 1) + 8 * v3) + ((unsigned int *)this)[0],
          ((unsigned int *)this)[0] + *(unsigned int *)(*((unsigned int *)Field + 1) + 8 * v3 + 4));
        result = *((unsigned int *)Field + 4); /*0x4565ca*/
        ++v3; /*0x4565cd*/
      }
      while ( v3 < result ); /*0x4565d0*/
    }
    ((unsigned int *)this)[0] = 1; /*0x4565d2*/
    return result; /*0x4565d9*/
}
} // namespace gamemd

// 0x4565E0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::UpdateGapGeneratorField()
{
    char *Field; // ebp
    int v3; // edi
    int result; // eax

    Field = Diplomacy::GetField(&stru_87F5F0.__pad_58[416], (int)this->Type); /*0x4565f6*/
    v3 = 0; /*0x4565f8*/
    result = *((unsigned int *)Field + 4); /*0x4565fa*/
    if ( result > 0 ) /*0x4565ff*/
    {
      do /*0x456630*/
      {
        BuildingClass::RemoveGapCellCoverage( /*0x456625*/
          (int)&stru_87F5F0.__pad_58[416],
          (int)this,
          *(unsigned int *)(*((unsigned int *)Field + 1) + 8 * v3) + ((unsigned int *)this)[0],
          ((unsigned int *)this)[0] + *(unsigned int *)(*((unsigned int *)Field + 1) + 8 * v3 + 4));
        result = *((unsigned int *)Field + 4); /*0x45662a*/
        ++v3; /*0x45662d*/
      }
      while ( v3 < result ); /*0x456630*/
    }
    ((unsigned int *)this)[0] = 0; /*0x456632*/
    return result; /*0x456639*/
}
} // namespace gamemd

// 0x456750
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::DrawDeployCircle(Point2D* screen_pos) const
{
    double v1; // st7
    int result; // eax
    char *v4; // ecx
    DWORD Time; // eax
    char v6; // ecx^3
    int v7; // edi
    int *v8; // eax
    int v9; // eax
    HouseClass *owner; // ecx
    int *v11; // eax
    HouseClass *v12; // ecx
    int *v13; // eax
    int v14; // [esp+0h] [ebp-2Ch]
    int v15; // [esp+0h] [ebp-2Ch]
    int v16; // [esp+0h] [ebp-2Ch]
    float v17; // [esp+4h] [ebp-28h]
    float v18; // [esp+4h] [ebp-28h]
    float v19; // [esp+4h] [ebp-28h]
    int v20; // [esp+18h] [ebp-14h]
    int v21[3]; // [esp+20h] [ebp-Ch] BYREF
    Color v22; // [esp+30h] [ebp+4h] BYREF

    result = BuildingClass::GetPowerFrame((TechnoClass *)this); /*0x456757*/
    v20 = result; /*0x45675e*/
    if ( result > 0 ) /*0x456762*/
    {
      (result) = ((result) & ~0xFF) | ((unsigned int)(this->HasPower) & 0xFF) /*0x456768*/
      if ( (unsigned char)result ) /*0x456770*/
      {
        result = House::IsHumanPlayer((House *)((unsigned int *)this)[0]); /*0x45677c*/
        if ( (unsigned char)result ) /*0x456783*/
        {
          if ( this->Type->ConcentricRadialIndicator ) /*0x45678f*/
          {
            if ( (byte_89C838 & 1) == 0 ) /*0x4567a4*/
            {
              byte_89C800 = -1; /*0x4567b0*/
              byte_89C838 |= 1u; /*0x4567b7*/
              byte_89C801 = -1; /*0x4567bd*/
              byte_89C802 = -1; /*0x4567c4*/
              atexit(nullsub_103); /*0x4567cb*/
            }
            v4 = (char *)&((unsigned int *)this)[0]->base[4] + 1; /*0x4567d9*/
            IDA_LOWORD(v22.Color_field_00) = *(unsigned short *)v4; /*0x4567e2*/
            IDA_BYTE2(v22.Color_field_00) = v4[2]; /*0x4567ea*/
            Time = timeGetTime(); /*0x4567ee*/
            v7 = (Time >> 1) & 0x3FF; /*0x4567f8*/
            if ( ((Time >> 1) & 0x200) == 0 ) /*0x456804*/
            {
              if ( ((Time >> 1) & 0x100) == 0 ) /*0x45680c*/
                Color::Lerp(&v22, ~(Time >> 1), &byte_89C800); /*0x456822*/
              v17 = (float)v20; /*0x456835*/
              (v14) = ((v14) & ~(0xFFULL << 24)) | (((unsigned __int64)(unsigned int)(v6) & 0xFF) << 24) /*0x456838*/
              (v14) = ((v14) & ~0xFFFF) | ((unsigned int)(v22.Color_field_00) & 0xFFFF) /*0x45683f*/
              (((v14) >> 16) & 0xFF) = IDA_BYTE2(v22.Color_field_00); /*0x456847*/
              v8 = (int *)(*((int (__thiscall **)(BuildingClass *, int *))this->vtable1 + 18))(this, v21); /*0x45684e*/
              DrawTechnoDeployCircle(0, 0, *v8, v8[1], v8[2], v14, v17, 0, 1); /*0x45686a*/
            }
            Math::Sqrt(2.0); /*0x456884*/
            (v9) = ((v9) & ~0xFFFF) | ((unsigned int)(Math::RoundToInt(((double)v20 + 0.5) / v1 * 60.0)) & 0xFFFF) /*0x456896*/
            result = (unsigned int)(v7 * v9) >> 10; /*0x45689e*/
            if ( (unsigned int)result > 0x20 ) /*0x4568a4*/
            {
              owner = ((unsigned int *)this)[0]; /*0x4568bf*/
              v18 = (float)(unsigned int)result; /*0x4568cb*/
              v15 = (int)&owner->base[4] + 1; /*0x4568ce*/
              (v15) = ((v15) & ~0xFFFF) | ((unsigned int)(*(unsigned short *)((char *)&owner->base[4] + 1)) & 0xFFFF) /*0x4568d7*/
              (((v15) >> 16) & 0xFF) = IDA_HIBYTE(owner->base[4]); /*0x4568df*/
              v11 = (int *)(*((int (__thiscall **)(BuildingClass *, int *))this->vtable1 + 18))(this, v21); /*0x4568e6*/
              (result) = ((result) & ~0xFF) | ((unsigned int)(DrawTechnoDeployCircle(0, 0, *v11, v11[1], v11[2], v15, v18, 1, 1)) & 0xFF) /*0x456902*/
            }
          }
          else
          {
            v12 = ((unsigned int *)this)[0]; /*0x456918*/
            v19 = (float)v20; /*0x456924*/
            v16 = (int)&v12->base[4] + 1; /*0x456927*/
            (v16) = ((v16) & ~0xFFFF) | ((unsigned int)(*(unsigned short *)((char *)&v12->base[4] + 1)) & 0xFFFF) /*0x456930*/
            (((v16) >> 16) & 0xFF) = IDA_HIBYTE(v12->base[4]); /*0x456938*/
            v13 = (int *)(*((int (__thiscall **)(BuildingClass *, int *))this->vtable1 + 18))(this, v21); /*0x45693f*/
            (result) = ((result) & ~0xFF) | ((unsigned int)(DrawTechnoDeployCircle(v22.Color_field_00, 1, *v13, v13[1], v13[2], v16, v19, 0, 1)) & 0xFF) /*0x45695d*/
          }
        }
      }
    }
    return result; /*0x456907*/
}
} // namespace gamemd

// 0x457690
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::SW2Available()
{
    int SuperWeapon2; // eax
    int v3; // eax

    SuperWeapon2 = this->Type->SuperWeapon2; /*0x457699*/
    if ( SuperWeapon2 == -1 ) /*0x4576a2*/
      return this->Type->SuperWeapon2; /*0x4576a2*/
    v3 = *(unsigned int *)(*(unsigned int *)(*((unsigned int *)dword_A83CBC + SuperWeapon2) + 40) + 200); /*0x4576b0*/
    if ( !v3 || ((DynamicVector *)((unsigned int *)this)[0]->ownedInfantryTypes2)->GetOrGrow(*(unsigned int *)(v3 + 3576)) ) /*0x4576cd*/
      return this->Type->SuperWeapon2; /*0x4576e2*/
    else
      return -1; /*0x4576d6*/
}
} // namespace gamemd

// 0x4576F0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::DestroyOnBridgeCollapse()
{
    int result; // eax
    int i; // edi
    int v4; // esi
    unsigned int *v5; // eax
    CellClass *v6; // eax
    BuildingClass *v7; // eax
    BuildingClass *v8; // ecx
    unsigned char v9[12]; // [esp+8h] [ebp-Ch] BYREF

    result = *(unsigned int *)&stru_A83D50.__pad_80[40]; /*0x4576f0*/
    for ( i = 0; i < *(int *)&stru_A83D50.__pad_80[40]; ++i ) /*0x457700*/
    {
      v4 = *(unsigned int *)(*(unsigned int *)&stru_A83D50.__pad_80[28] + 4 * i); /*0x45770a*/
      v5 = (unsigned int *)(*(int (__thiscall **)(int, unsigned char *, unsigned int))(*(unsigned int *)v4 + 76))(v4, v9, 0); /*0x457716*/
      v6 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], v5); /*0x45771f*/
      v7 = (BuildingClass *)Cell::IsBridge((Cell *)v6); /*0x457726*/
      if ( *(unsigned char *)(v4 + 144) ) /*0x45772b*/
      {
        if ( v7 ) /*0x457737*/
        {
          if ( v7 == this ) /*0x45773b*/
          {
            v8 = *(BuildingClass **)(v4 + 1444); /*0x45773d*/
            if ( !v8 || v8 == v7 ) /*0x457749*/
              (*(void (__thiscall **)(int, unsigned int *, int, int))(*(unsigned int *)v4 + 372))(v4, &g_BuildingClassPool, 1, 1); /*0x457758*/
          }
        }
      }
      result = *(unsigned int *)&stru_A83D50.__pad_80[40]; /*0x45775e*/
    }
    return result; /*0x457769*/
}
} // namespace gamemd

// 0x457DE0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::UnloadUnits()
{
    int (**vtable0)(void); // eax
    BuildingTypeClass *Type; // ecx
    int FoundationWidth; // eax
    int *v7; // ecx
    short v8; // di
    int FoundationHeight; // eax
    int (__thiscall **v10)(BuildingClass *, char *); // edx
    short v11; // bp
    char v12; // bl
    unsigned int *v13; // eax
    int **v14; // edx
    int *v15; // edi
    int v16; // ebp
    void *v17; // eax
    int v18; // eax
    int v19; // ebp
    void *v20; // eax
    int *v21; // eax
    int v22; // ecx
    short *v23; // eax
    int v24; // ebp
    void *v25; // eax
    short *v26; // eax
    int v27; // ebp
    void *v28; // eax
    int v29; // ebp
    int v30; // eax
    int v31; // ebx
    void *v32; // eax
    void *v33; // eax
    int *v34; // eax
    int v35; // edx
    int v36; // ebp
    int v37; // edi
    int v38; // ebx
    int v39; // eax
    int *v40; // ecx
    short v41; // di
    unsigned short *v42; // eax
    int v43; // ebx
    unsigned int *v44; // eax
    short v45[2]; // [esp+84h] [ebp-2Ch] BYREF
    short v46[2]; // [esp+88h] [ebp-28h] BYREF
    int v47; // [esp+8Ch] [ebp-24h]
    int v48; // [esp+90h] [ebp-20h]
    char v49[4]; // [esp+94h] [ebp-1Ch] BYREF
    int v50; // [esp+98h] [ebp-18h] BYREF
    int v51; // [esp+9Ch] [ebp-14h]
    int i; // [esp+A0h] [ebp-10h]
    unsigned char v53[12]; // [esp+A4h] [ebp-Ch] BYREF
    int v54; // [esp+B8h] [ebp+8h]

    vtable0 = (int (**)(void))this->TechnoClass; /*0x457de9*/
    this->Audio8[4] = 0; /*0x457deb*/
    if ( vtable0[258]() ) /*0x457df5*/
    {
      v50 = g_BuildingClassPool; /*0x457e14*/
      v51 = dword_89C84C; /*0x457e1e*/
      *(unsigned int *)v46 = g_TerrainTypeTable; /*0x457e22*/
      Type = this->Type; /*0x457e26*/
      i = dword_89C850; /*0x457e2c*/
      FoundationWidth = BuildingTypeClass::GetFoundationWidth(Type); /*0x457e30*/
      v7 = (int *)this->Type; /*0x457e35*/
      v8 = FoundationWidth; /*0x457e3b*/
      v47 = FoundationWidth; /*0x457e3f*/
      FoundationHeight = BuildingTypeClass_GetFoundationHeight(v7, 0); /*0x457e43*/
      v10 = (int (__thiscall **)(BuildingClass *, char *))this->TechnoClass; /*0x457e48*/
      v11 = FoundationHeight; /*0x457e4a*/
      v48 = FoundationHeight; /*0x457e53*/
      v12 = 0; /*0x457e57*/
      v13 = (unsigned int *)v10[110](this, v49); /*0x457e59*/
      v14 = (int **)this->Audio7[4]; /*0x457e61*/
      *(unsigned int *)v45 = *v13; /*0x457e67*/
      v45[0] += v8; /*0x457e6b*/
      v45[1] += v11; /*0x457e70*/
      v15 = *v14; /*0x457e75*/
      v16 = **v14; /*0x457e7b*/
      v17 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v45); /*0x457e8b*/
      if ( (*(int (__thiscall **)(int *, void *, int, int, unsigned int, int))(v16 + 428))(v15, v17, -1, -1, 0, 1) ) /*0x457e93*/
      {
        while ( 1 ) /*0x457ea6*/
        {
          v18 = (*((int (__thiscall **)(BuildingClass *, char *))this->vtable1 + 110))(this, v49); /*0x457ea6*/
          if ( v45[1] <= *(short *)(v18 + 2) - 1 ) /*0x457eb8*/
            break; /*0x457eb8*/
          --v45[1]; /*0x457eba*/
          v19 = *v15; /*0x457ebf*/
          v20 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v45); /*0x457ed3*/
          if ( !(*(int (__thiscall **)(int *, void *, int, int, unsigned int, int))(v19 + 428))(v15, v20, -1, -1, 0, 1) ) /*0x457edb*/
            goto LABEL_5; /*0x457ee3*/
        }
      }
      else
      {
  LABEL_5:
        v12 = 1; /*0x457ee5*/
        *(unsigned int *)v46 = *(unsigned int *)v45; /*0x457eeb*/
      }
      v21 = (int *)(*((int (__thiscall **)(BuildingClass *, char *))this->vtable1 + 110))(this, v49); /*0x457ef8*/
      v22 = *v21; /*0x457efe*/
      v45[0] = v47 + *v21; /*0x457f0e*/
      v45[1] = v48 + (((unsigned int)(v22) >> 16) & 0xFFFF); /*0x457f13*/
      if ( !v12 ) /*0x457f1a*/
      {
        while ( 1 ) /*0x457f25*/
        {
          v23 = (short *)(*((int (__thiscall **)(BuildingClass *, char *))this->vtable1 + 110))(this, v49); /*0x457f25*/
          if ( v45[0] <= *v23 - 1 ) /*0x457f36*/
            break; /*0x457f36*/
          --v45[0]; /*0x457f38*/
          v24 = *v15; /*0x457f3d*/
          v25 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v45); /*0x457f51*/
          if ( !(*(int (__thiscall **)(int *, void *, int, int, unsigned int, int))(v24 + 428))(v15, v25, -1, -1, 0, 1) ) /*0x457f59*/
          {
            v12 = 1; /*0x457f67*/
            *(unsigned int *)v46 = *(unsigned int *)v45; /*0x457f69*/
            break; /*0x457f69*/
          }
        }
      }
      *(unsigned int *)v45 = *(unsigned int *)(*((int (__thiscall **)(BuildingClass *, char *))this->vtable1 + 110))(this, v49); /*0x457f6d*/
      --v45[0]; /*0x457f82*/
      --v45[1]; /*0x457f87*/
      if ( !v12 ) /*0x457f8e*/
      {
        while ( 1 ) /*0x457f99*/
        {
          v26 = (short *)(*((int (__thiscall **)(BuildingClass *, char *))this->vtable1 + 110))(this, v49); /*0x457f99*/
          if ( v45[0] >= v47 + *v26 ) /*0x457fad*/
            break; /*0x457fad*/
          ++v45[0]; /*0x457faf*/
          v27 = *v15; /*0x457fb4*/
          v28 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v45); /*0x457fc8*/
          if ( !(*(int (__thiscall **)(int *, void *, int, int, unsigned int, int))(v27 + 428))(v15, v28, -1, -1, 0, 1) ) /*0x457fd0*/
          {
            v12 = 1; /*0x457fde*/
            *(unsigned int *)v46 = *(unsigned int *)v45; /*0x457fe0*/
            break; /*0x457fe0*/
          }
        }
      }
      *(unsigned int *)v45 = *(unsigned int *)(*((int (__thiscall **)(BuildingClass *, char *))this->vtable1 + 110))(this, v49); /*0x457fe4*/
      --v45[0]; /*0x457ff9*/
      --v45[1]; /*0x457ffe*/
      if ( !v12 ) /*0x458005*/
      {
        v29 = v48; /*0x458007*/
        while ( 1 ) /*0x458014*/
        {
          v30 = (*((int (__thiscall **)(BuildingClass *, char *))this->vtable1 + 110))(this, v49); /*0x458014*/
          if ( v45[1] >= v29 + *(short *)(v30 + 2) ) /*0x458027*/
            break; /*0x458027*/
          ++v45[1]; /*0x45802d*/
          v31 = *v15; /*0x458032*/
          v32 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v45); /*0x458046*/
          if ( !(*(int (__thiscall **)(int *, void *, int, int, unsigned int, int))(v31 + 428))(v15, v32, -1, -1, 0, 1) ) /*0x45804e*/
          {
            *(unsigned int *)v46 = *(unsigned int *)v45; /*0x45805c*/
            goto LABEL_19; /*0x45805c*/
          }
        }
        if ( !a3 ) /*0x458146*/
        {
          BuildingClass::AnimateUnloadUnits(this, 0); /*0x458184*/
          return; /*0x458190*/
        }
        v41 = v47 - 1; /*0x458156*/
        v42 = (unsigned short *)(*((int (__thiscall **)(BuildingClass *, char *))this->vtable1 + 110))(this, v49); /*0x458159*/
        (v54) = ((v54) & ~0xFFFF) | ((unsigned int)(*v42 + v41) & 0xFFFF) /*0x458169*/
        (v54) = ((v54) & ~(0xFFFFULL << 16)) | (((unsigned __int64)(unsigned int)(v29 - 1 + v42[1]) & 0xFFFF) << 16) /*0x45816e*/
        *(unsigned int *)v46 = v54; /*0x458177*/
      }
  LABEL_19:
      v33 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v46); /*0x458060*/
      v34 = (int *)(*(int (__thiscall **)(void *, unsigned char *))(*(unsigned int *)v33 + 72))(v33, v53); /*0x458078*/
      v50 = *v34; /*0x45807d*/
      v51 = v34[1]; /*0x458084*/
      v35 = v34[2]; /*0x45808e*/
      ++dword_A8E7AC; /*0x458092*/
      v36 = this->Audio8[2] - 1; /*0x45809e*/
      for ( i = v35; v36 >= 0; --v36 ) /*0x4580a3*/
      {
        v37 = *(unsigned int *)(this->Audio7[4] + 4 * v36); /*0x4580b1*/
        if ( (*(unsigned __int8 (__thiscall **)(int, int *, unsigned int))(*(unsigned int *)&v37->tiberiumCollectionState)(v37, &v50, 0) ) /*0x4580bd*/
        {
          if ( *(unsigned char *)(*(unsigned int *)(v37 + 540) + 492) ) /*0x4580d1*/
          {
            *(unsigned char *)(v37 + 1681) = 0; /*0x4580db*/
            *(unsigned char *)(v37 + 1680) = 0; /*0x4580e2*/
          }
          (*(void (__thiscall **)(int, unsigned int))(*(unsigned int *)&v37->q_F20)(v37, 0); /*0x4580ef*/
          v38 = *(unsigned int *)v37; /*0x4580f7*/
          v39 = (*((int (__thiscall **)(BuildingClass *, unsigned char *, int, int))this->vtable1 + 18))(this, v53, 1, 1); /*0x458104*/
          (*(void (__thiscall **)(int, int))(v38 + 372))(v37, v39); /*0x45810a*/
          if ( a2 ) /*0x458116*/
          {
            v40 = *(int **)(v37 + 1492); /*0x45811c*/
            if ( v40 ) /*0x458124*/
              TeamClass::LiberateMember_Start(v40, v37, 0xFFFFFFFF, 0); /*0x45812b*/
            (*(void (__thiscall **)(int, int, unsigned int))(*(unsigned int *)v37 + 488))(v37, 15, 0); /*0x458138*/
          }
        }
        else
        {
          (*(void (__thiscall **)(int))(*(unsigned int *)v37 + 248))(v37); /*0x458197*/
        }
      }
      --dword_A8E7AC; /*0x4581b2*/
      v43 = this->Audio8[0]; /*0x4581b9*/
      (*(void (__thiscall **)(int *))(this->Audio7[3] + 12))(&this->Audio7[3]); /*0x4581bc*/
      (*(void (__thiscall **)(int *, int, unsigned int))(this->Audio7[3] + 8))(&this->Audio7[3], v43, 0); /*0x4581c6*/
      v44 = (unsigned int *)(*((int (__thiscall **)(BuildingClass *))this->vtable1 + 111))(this); /*0x4581cd*/
      BuildingClass::UpdateThreatBounds(this, v44); /*0x4581d6*/
    }
}
} // namespace gamemd

// 0x4585C0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::AnimateUnloadUnits()
{
    int v4; // edi
    int i; // edi
    int v6; // ecx
    int v7; // edi
    int *v8; // eax
    int v9; // ecx
    int (__thiscall **vtable0)(BuildingClass *, char *); // edx
    unsigned int *v11; // eax
    int v12; // ecx
    int v13; // edx
    int v14; // eax
    AnimClass *v15; // ebx
    int v16; // eax
    void **v17; // eax
    int v18; // ecx
    int v19; // ebx
    unsigned int *v20; // eax
    int *v21; // [esp+0h] [ebp-30h]
    int v22; // [esp+10h] [ebp-20h] BYREF
    int v23; // [esp+18h] [ebp-18h] BYREF
    int v24; // [esp+1Ch] [ebp-14h]
    int v25; // [esp+20h] [ebp-10h]
    char v26[12]; // [esp+24h] [ebp-Ch] BYREF
    int v27; // [esp+34h] [ebp+4h]

    this->Audio8[4] = 0; /*0x4585cf*/
    v4 = this->Audio8[2]; /*0x4585d9*/
    if ( a2 ) /*0x4585df*/
    {
      v7 = v4 - 1; /*0x458601*/
      if ( v7 >= 0 ) /*0x458602*/
      {
        v27 = 8 * v7 + 5512; /*0x45860f*/
        do /*0x4586fe*/
        {
          v8 = (int *)World::ToScreen(&v22, (void **)((char *)&this->Type->TechnoTypeClass + v27), v21); /*0x45862b*/
          v9 = v8[1]; /*0x458630*/
          vtable0 = (int (__thiscall **)(BuildingClass *, char *))this->TechnoClass; /*0x458635*/
          v23 = *v8; /*0x458637*/
          v24 = v9; /*0x45863f*/
          v25 = 0; /*0x458646*/
          v11 = (unsigned int *)vtable0[43](this, v26); /*0x45864e*/
          v12 = v23 + *v11; /*0x45865e*/
          v13 = v11[1]; /*0x458660*/
          v14 = v25 + v11[2]; /*0x45866c*/
          v23 = v12; /*0x458673*/
          v24 += v13; /*0x458677*/
          v25 = v14; /*0x45867b*/
          v15 = (AnimClass *)RA2_OPNEW(0x1C8u); /*0x458684*/
          if ( v15 ) /*0x45868b*/
          {
            v16 = (*(int (__thiscall **)(int, unsigned int))(*(unsigned int *)a2 + 1016))(a2, 0); /*0x4586a6*/
            v17 = AnimClass::ctor(v15, *(void **)(*(unsigned int *)v16 + 276), &v23, 0, 1, (void *)0x600, 0, 0); /*0x4586b7*/
          }
          else
          {
            v17 = 0; /*0x4586be*/
          }
          v17[64] = (void *)-200; /*0x4586c0*/
          (*(void (__thiscall **)(int, unsigned int))(*(unsigned int *)a2 + 224))(a2, *(unsigned int *)(this->Audio7[4] + 4 * v7)); /*0x4586d9*/
          v18 = *(unsigned int *)(this->Audio7[4] + 4 * v7); /*0x4586e5*/
          (*(void (__thiscall **)(int))(*(unsigned int *)v18 + 248))(v18); /*0x4586ea*/
          --v7; /*0x4586f4*/
          v27 -= 8; /*0x4586fa*/
        }
        while ( v7 >= 0 ); /*0x4586fe*/
      }
    }
    else
    {
      for ( i = v4 - 1; i >= 0; --i ) /*0x4585e2*/
      {
        v6 = *(unsigned int *)(this->Audio7[4] + 4 * i); /*0x4585ee*/
        (*(void (__thiscall **)(int))(*(unsigned int *)v6 + 248))(v6); /*0x4585f3*/
      }
    }
    v19 = this->Audio8[0]; /*0x45870a*/
    (*(void (__thiscall **)(int *))(this->Audio7[3] + 12))(&this->Audio7[3]); /*0x458718*/
    (*(void (__thiscall **)(int *, int, unsigned int))(this->Audio7[3] + 8))(&this->Audio7[3], v19, 0); /*0x458722*/
    v20 = (unsigned int *)(*((int (__thiscall **)(BuildingClass *))this->vtable1 + 111))(this); /*0x458729*/
    BuildingClass::UpdateThreatBounds(this, v20); /*0x458732*/
}
} // namespace gamemd

// 0x4593A0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::RemoveLimpet()
{
    TechnoClass *bunkerLinkedUnit; // esi
    int *v3; // eax
    int v4; // ebx
    int v5; // ebp
    int v6; // ecx
    int v7; // eax
    int v8; // ebx
    int v9; // ebp
    void (__thiscall **vtable0)(BuildingClass *, int); // eax
    int v11; // [esp+10h] [ebp-Ch] BYREF
    int v12; // [esp+18h] [ebp-4h]

    bunkerLinkedUnit = ((unsigned int *)this)[0]; /*0x4593a9*/
    if ( bunkerLinkedUnit && (*((int (__thiscall **)(TechnoClass *))bunkerLinkedUnit->vtable1 + 11))(((unsigned int *)this)[0]) == 1 ) /*0x4593c1*/
    {
      if ( !bunkerLinkedUnit[1].alignmentPadding154[0] ) /*0x4593c7*/
        sub_7DC720(-2147467261); /*0x4593d6*/
      (*(void (__stdcall **)(int))(*(unsigned int *)bunkerLinkedUnit[1].alignmentPadding154[0] + 88))(bunkerLinkedUnit[1].alignmentPadding154[0]); /*0x4593e4*/
      v3 = (int *)(*((int (__thiscall **)(BuildingClass *, int *))this->vtable1 + 18))(this, &v11); /*0x4593f0*/
      v4 = *v3; /*0x4593f3*/
      v5 = v3[1]; /*0x4593f5*/
      v6 = v3[2]; /*0x4593f8*/
      v7 = bunkerLinkedUnit[1].alignmentPadding154[0]; /*0x4593fb*/
      v8 = v4 - 128; /*0x459401*/
      v9 = v5 + 128; /*0x459407*/
      v12 = v6; /*0x45940f*/
      if ( !v7 ) /*0x459413*/
        sub_7DC720(-2147467261); /*0x45941a*/
      (*(void (__stdcall **)(int, int, int, int, int))(*(unsigned int *)bunkerLinkedUnit[1].alignmentPadding154[0] + 112))( /*0x45943b*/
        bunkerLinkedUnit[1].alignmentPadding154[0],
        71,
        v8,
        v9,
        v12);
      (*((void (__thiscall **)(TechnoClass *, unsigned int, int))bunkerLinkedUnit->vtable1 + 337))( /*0x45944a*/
        bunkerLinkedUnit,
        0,
        1072693248);
      bunkerLinkedUnit->bunkerLinkedUnit = 0; /*0x459450*/
      vtable0 = (void (__thiscall **)(BuildingClass *, int))this->TechnoClass; /*0x459456*/
      ((unsigned int *)this)[0] = 0; /*0x45945c*/
      vtable0[157](this, 3); /*0x459462*/
    }
}
} // namespace gamemd

// 0x459470
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::UpdateDamageAnim()
{
    int result; // eax
    int v5; // ecx
    char *v6; // eax
    int v7; // edx
    int v9; // ecx
    char *v10; // eax
    int (__thiscall **vtable0)(BuildingClass *, int, unsigned int); // edx
    unsigned int v12[3]; // [esp+4h] [ebp-Ch] BYREF

    BuildingClass::ClearAnims(this, 10); /*0x459478*/
    BuildingClass::ClearAnims(this, 11); /*0x459481*/
    result = (int)((unsigned int *)this)[0]; /*0x459486*/
    if ( result ) /*0x45948e*/
    {
      if ( *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 580) != -1 ) /*0x4594a0*/
      {
        v12[0] = *(unsigned int *)&this->vtable2; /*0x4594ac*/
        v12[1] = ((unsigned int *)this)[1]; /*0x4594b3*/
        v12[2] = ((unsigned int *)this)[2]; /*0x4594be*/
        StartAudioControllerAt(*(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 580), v12, 0); /*0x4594c8*/
      }
      BuildingClass::GetHealthRatio(this); /*0x4594cf*/
      _EDX = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x4594d4*/
      __asm /*0x4594da*/
      {
        fcomp qword ptr [edx+1700h]
        fnstsw ax
      }
      if ( (_AX & 0x4100) != 0 ) /*0x4594e5*/
      {
        v5 = 1; /*0x4594ed*/
        v6 = &this->Type->__pad_F70[796]; /*0x4594f2*/
      }
      else
      {
        v5 = 0; /*0x4594ff*/
        v6 = &this->Type->__pad_F70[780]; /*0x459501*/
      }
      if ( v6 && *v6 ) /*0x45950a*/
        (this)->PlayAnim(*(int *)&DSurface_ViewBounds.__pad_FC[324], (AnimTypeClass *)v6, 12, v5, 0, 0); /*0x459519*/
      BuildingClass::GetHealthRatio(this); /*0x459520*/
      _EAX = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x459525*/
      __asm /*0x45952a*/
      {
        fcomp qword ptr [eax+1700h]
        fnstsw ax
      }
      if ( (_EAX & 0x4100) != 0 ) /*0x459535*/
      {
        v9 = 1; /*0x45953d*/
        v10 = &this->Type->__pad_F70[864]; /*0x459542*/
      }
      else
      {
        v9 = 0; /*0x45954f*/
        v10 = &this->Type->__pad_F70[848]; /*0x459551*/
      }
      if ( v10 ) /*0x459558*/
      {
        if ( *v10 ) /*0x45955a*/
          (this)->PlayAnim(v7, (AnimTypeClass *)v10, 13, v9, 0, 0); /*0x459569*/
      }
      (*((void (__thiscall **)(BuildingClass *, int))this->vtable1 + 157))(this, 3); /*0x459574*/
      ((unsigned int *)this)[0]->bunkerLinkedUnit = 0; /*0x459586*/
      vtable0 = (int (__thiscall **)(BuildingClass *, int, unsigned int))this->TechnoClass; /*0x459590*/
      ((unsigned int *)this)[0] = 0; /*0x459592*/
      this->BunkerState = 0; /*0x45959c*/
      return vtable0[122](this, 5, 0); /*0x4595a6*/
    }
    return result; /*0x4595ac*/
}
} // namespace gamemd

// 0x4595C0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::EmptyBunker()
{
    int v4; // ecx
    char *v5; // eax
    int v6; // edx
    int v8; // ecx
    char *v9; // eax
    TechnoClass *bunkerLinkedUnit; // esi
    int (__thiscall **v11)(BuildingClass *, int, unsigned int); // edx
    int result; // eax
    int *v13; // eax
    int v14; // ebp
    int v15; // ebx
    int v16; // ecx
    int v17; // eax
    int v18; // ebp
    int v19; // ebx
    short *v20; // eax
    short v21; // dx
    int (__thiscall **vtable0)(TechnoClass *); // eax
    int v23; // eax
    short *v24; // eax
    void *v25; // eax
    void (__thiscall **v26)(BuildingClass *, int, unsigned int); // edx
    int v27; // [esp+18h] [ebp-28h]
    int v28; // [esp+1Ch] [ebp-24h]
    int v29; // [esp+30h] [ebp-10h] BYREF
    int v30; // [esp+34h] [ebp-Ch] BYREF
    int v31; // [esp+38h] [ebp-8h] BYREF
    int v32; // [esp+3Ch] [ebp-4h]

    BuildingClass::ClearAnims(this, 10); /*0x4595cb*/
    BuildingClass::ClearAnims(this, 11); /*0x4595d4*/
    if ( *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 580) != -1 ) /*0x4595e5*/
    {
      v30 = *(unsigned int *)&this->vtable2; /*0x4595f1*/
      v31 = ((unsigned int *)this)[1]; /*0x4595f8*/
      v32 = ((unsigned int *)this)[2]; /*0x459603*/
      StartAudioControllerAt(*(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 580), &v30, 0); /*0x45960d*/
    }
    BuildingClass::GetHealthRatio(this); /*0x459614*/
    _EDX = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x459619*/
    __asm /*0x45961f*/
    {
      fcomp qword ptr [edx+1700h]
      fnstsw ax
    }
    if ( (_AX & 0x4100) != 0 ) /*0x45962a*/
    {
      v4 = 1; /*0x459632*/
      v5 = &this->Type->__pad_F70[796]; /*0x459637*/
    }
    else
    {
      v4 = 0; /*0x459644*/
      v5 = &this->Type->__pad_F70[780]; /*0x459646*/
    }
    if ( v5 && *v5 ) /*0x459651*/
      (this)->PlayAnim(*(int *)&DSurface_ViewBounds.__pad_FC[324], (AnimTypeClass *)v5, 12, v4, 0, 0); /*0x45965e*/
    BuildingClass::GetHealthRatio(this); /*0x459665*/
    _EAX = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x45966a*/
    __asm /*0x45966f*/
    {
      fcomp qword ptr [eax+1700h]
      fnstsw ax
    }
    if ( (_EAX & 0x4100) != 0 ) /*0x45967a*/
    {
      v8 = 1; /*0x459682*/
      v9 = &this->Type->__pad_F70[864]; /*0x459687*/
    }
    else
    {
      v8 = 0; /*0x459694*/
      v9 = &this->Type->__pad_F70[848]; /*0x459696*/
    }
    if ( v9 && *v9 ) /*0x45969f*/
      (this)->PlayAnim(v6, (AnimTypeClass *)v9, 13, v8, 0, 0); /*0x4596ac*/
    bunkerLinkedUnit = ((unsigned int *)this)[0]; /*0x4596b1*/
    if ( bunkerLinkedUnit ) /*0x4596b9*/
    {
      result = (*((int (__thiscall **)(TechnoClass *))bunkerLinkedUnit->vtable1 + 11))(((unsigned int *)this)[0]); /*0x4596da*/
      if ( result == 1 ) /*0x4596e0*/
      {
        bunkerLinkedUnit->bunkerLinkedUnit = 0; /*0x4596e6*/
        if ( !bunkerLinkedUnit[1].alignmentPadding154[0] ) /*0x4596ec*/
          sub_7DC720(-2147467261); /*0x4596fb*/
        (*(void (__stdcall **)(int))(*(unsigned int *)bunkerLinkedUnit[1].alignmentPadding154[0] + 88))(bunkerLinkedUnit[1].alignmentPadding154[0]); /*0x459709*/
        v13 = (int *)(*((int (__thiscall **)(BuildingClass *, int *))this->vtable1 + 18))(this, &v30); /*0x459715*/
        v14 = *v13; /*0x459718*/
        v15 = v13[1]; /*0x45971a*/
        v16 = v13[2]; /*0x45971d*/
        v17 = bunkerLinkedUnit[1].alignmentPadding154[0]; /*0x459720*/
        v18 = v14 - 128; /*0x459726*/
        v19 = v15 + 128; /*0x45972c*/
        v32 = v16; /*0x459734*/
        if ( !v17 ) /*0x459738*/
          sub_7DC720(-2147467261); /*0x45973f*/
        (*(void (__stdcall **)(int, int, int, int, int, int, int))(*(unsigned int *)bunkerLinkedUnit[1].alignmentPadding154[0] /*0x459760*/
                                                                 + 112))(
          bunkerLinkedUnit[1].alignmentPadding154[0],
          71,
          v18,
          v19,
          v32,
          v27,
          v28);
        (*((void (__thiscall **)(TechnoClass *, unsigned int, int))bunkerLinkedUnit->vtable1 + 337))( /*0x45976f*/
          bunkerLinkedUnit,
          0,
          1072693248);
        v20 = (short *)(*((int (__thiscall **)(BuildingClass *, int *))this->vtable1 + 110))(this, &v31); /*0x45977e*/
        v21 = *v20; /*0x459784*/
        (v20) = ((v20) & ~0xFFFF) | ((unsigned int)(v20[1] + 1) & 0xFFFF) /*0x45978d*/
        (v29) = ((v29) & ~0xFFFF) | ((unsigned int)(v21 - 1) & 0xFFFF) /*0x45978f*/
        (v29) = ((v29) & ~(0xFFFFULL << 16)) | (((unsigned __int64)(unsigned int)((unsigned short)v20) & 0xFFFF) << 16) /*0x459794*/
        v30 = v29; /*0x4597aa*/
        vtable0 = (int (__thiscall **)(TechnoClass *))bunkerLinkedUnit->RadioClass; /*0x4597b5*/
        v29 = 0; /*0x4597bd*/
        v23 = vtable0[33](bunkerLinkedUnit); /*0x4597c7*/
        v24 = (short *)LayerClass::Pathfinding_Find( /*0x4597e3*/
                           &stru_87F5F0.__pad_58[416],
                           (int)&v30,
                           &v31,
                           (short *)&v30,
                           *(unsigned int *)(v23 + 1660),
                           -1,
                           0,
                           0,
                           1,
                           1,
                           0,
                           0,
                           0,
                           1,
                           (short *)&v29,
                           0,
                           0);
        v25 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v24); /*0x4597ee*/
        (*((void (__thiscall **)(TechnoClass *, void *, int))bunkerLinkedUnit->vtable1 + 288))( /*0x4597fa*/
          bunkerLinkedUnit,
          v25,
          1);
        (*((void (__thiscall **)(TechnoClass *, int, unsigned int))bunkerLinkedUnit->vtable1 + 122))(bunkerLinkedUnit, 2, 0); /*0x459807*/
        v26 = (void (__thiscall **)(BuildingClass *, int, unsigned int))this->TechnoClass; /*0x45980d*/
        ((unsigned int *)this)[0] = 0; /*0x459814*/
        this->BunkerState = 0; /*0x45981a*/
        v26[122](this, 5, 0); /*0x459820*/
        return (*((int (__thiscall **)(BuildingClass *, int))this->vtable1 + 157))(this, 3); /*0x45982c*/
      }
    }
    else
    {
      v11 = (int (__thiscall **)(BuildingClass *, int, unsigned int))this->TechnoClass; /*0x4596bb*/
      this->BunkerState = 0; /*0x4596c2*/
      return v11[122](this, 5, 0); /*0x4596c8*/
    }
    return result; /*0x4596ce*/
}
} // namespace gamemd

// 0x459900
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::SpawnParticles()
{
    int result; // eax
    int v3; // ebp
    int v4; // ecx
    int v5; // edx
    int *v6; // eax
    int v7; // ebx
    int v8; // edi
    ObjectClass *v9; // eax
    int *RefinerySmokeOffsetTwo; // edx
    int v11; // ecx
    int v12; // edx
    int *v13; // eax
    int v14; // ebx
    int v15; // edi
    ObjectClass *v16; // eax
    int *RefinerySmokeOffsetThree; // edx
    int v18; // ecx
    int v19; // edx
    int *v20; // eax
    int v21; // ebx
    int v22; // edi
    ObjectClass *v23; // eax
    int *RefinerySmokeOffsetFour; // edx
    int v25; // ecx
    int v26; // edx
    int *v27; // eax
    int v28; // ebx
    int v29; // edi
    ObjectClass *v30; // eax
    int v31; // [esp+10h] [ebp-1Ch]
    Coord3D v32; // [esp+14h] [ebp-18h] BYREF
    int v33; // [esp+20h] [ebp-Ch] BYREF
    int v34; // [esp+24h] [ebp-8h]
    int v35; // [esp+28h] [ebp-4h]

    result = (int)this->Type; /*0x459909*/
    v3 = *(unsigned int *)(result + 1908); /*0x45990f*/
    if ( v3 ) /*0x459917*/
    {
      v31 = *(unsigned int *)(result + 5484); /*0x459930*/
      *(unsigned int *)v32.__pad_0 = *(unsigned int *)(result + 1996); /*0x459936*/
      v4 = *(unsigned int *)(result + 2000); /*0x45993c*/
      v32.Coord3D_field_0x04 = v4; /*0x45993f*/
      v5 = *(unsigned int *)(result + 2004); /*0x459943*/
      v32.Coord3D_field_0x08 = v5; /*0x459946*/
      if ( (*(unsigned int *)v32.__pad_0 != g_BuildingClassPool || v4 != dword_89C84C || v5 != dword_89C850) /*0x459965*/
        && !(unsigned __int8)Coord3D::Equals(&v32, &dword_89C870) )
      {
        v6 = (int *)RA2_OPNEW(0x100u); /*0x459973*/
        if ( v6 ) /*0x45997d*/
        {
          v7 = ((unsigned int *)this)[2]; /*0x459994*/
          v8 = v32.Coord3D_field_0x04 + ((unsigned int *)this)[1]; /*0x4599a1*/
          v33 = *(unsigned int *)v32.__pad_0 + ((unsigned int *)this)[0]; /*0x4599a7*/
          v34 = v8; /*0x4599b5*/
          v35 = v32.Coord3D_field_0x08 + v7; /*0x4599b9*/
          v9 = (ObjectClass *)ParticleSystemClass::Constructor(v6, v3, &v33, 0, this, &g_BuildingClassPool, 0); /*0x4599bd*/
        }
        else
        {
          v9 = 0; /*0x4599c4*/
        }
        ObjectClass::SetMember59(v9, v31); /*0x4599cd*/
      }
      RefinerySmokeOffsetTwo = ((unsigned int *)this->Type)[0]; /*0x4599de*/
      *(unsigned int *)v32.__pad_0 = *RefinerySmokeOffsetTwo; /*0x4599e6*/
      v11 = RefinerySmokeOffsetTwo[1]; /*0x4599ec*/
      v32.Coord3D_field_0x04 = v11; /*0x4599ef*/
      v12 = RefinerySmokeOffsetTwo[2]; /*0x4599f3*/
      v32.Coord3D_field_0x08 = v12; /*0x4599f6*/
      if ( (*(unsigned int *)v32.__pad_0 != g_BuildingClassPool || v11 != dword_89C84C || v12 != dword_89C850) /*0x459a15*/
        && !(unsigned __int8)Coord3D::Equals(&v32, &dword_89C870) )
      {
        v13 = (int *)RA2_OPNEW(0x100u); /*0x459a23*/
        if ( v13 ) /*0x459a2d*/
        {
          v14 = ((unsigned int *)this)[2]; /*0x459a44*/
          v15 = v32.Coord3D_field_0x04 + ((unsigned int *)this)[1]; /*0x459a51*/
          v33 = *(unsigned int *)v32.__pad_0 + ((unsigned int *)this)[0]; /*0x459a57*/
          v34 = v15; /*0x459a65*/
          v35 = v32.Coord3D_field_0x08 + v14; /*0x459a69*/
          v16 = (ObjectClass *)ParticleSystemClass::Constructor(v13, v3, &v33, 0, this, &g_BuildingClassPool, 0); /*0x459a6d*/
        }
        else
        {
          v16 = 0; /*0x459a74*/
        }
        ObjectClass::SetMember59(v16, v31); /*0x459a7d*/
      }
      RefinerySmokeOffsetThree = ((unsigned int *)this->Type)[0]; /*0x459a8e*/
      *(unsigned int *)v32.__pad_0 = *RefinerySmokeOffsetThree; /*0x459a96*/
      v18 = RefinerySmokeOffsetThree[1]; /*0x459a9c*/
      v32.Coord3D_field_0x04 = v18; /*0x459a9f*/
      v19 = RefinerySmokeOffsetThree[2]; /*0x459aa3*/
      v32.Coord3D_field_0x08 = v19; /*0x459aa6*/
      if ( (*(unsigned int *)v32.__pad_0 != g_BuildingClassPool || v18 != dword_89C84C || v19 != dword_89C850) /*0x459ac5*/
        && !(unsigned __int8)Coord3D::Equals(&v32, &dword_89C870) )
      {
        v20 = (int *)RA2_OPNEW(0x100u); /*0x459ad3*/
        if ( v20 ) /*0x459add*/
        {
          v21 = ((unsigned int *)this)[2]; /*0x459af4*/
          v22 = v32.Coord3D_field_0x04 + ((unsigned int *)this)[1]; /*0x459b01*/
          v33 = *(unsigned int *)v32.__pad_0 + ((unsigned int *)this)[0]; /*0x459b07*/
          v34 = v22; /*0x459b15*/
          v35 = v32.Coord3D_field_0x08 + v21; /*0x459b19*/
          v23 = (ObjectClass *)ParticleSystemClass::Constructor(v20, v3, &v33, 0, this, &g_BuildingClassPool, 0); /*0x459b1d*/
        }
        else
        {
          v23 = 0; /*0x459b24*/
        }
        ObjectClass::SetMember59(v23, v31); /*0x459b2d*/
      }
      RefinerySmokeOffsetFour = ((unsigned int *)this->Type)[0]; /*0x459b3e*/
      result = *RefinerySmokeOffsetFour; /*0x459b44*/
      *(unsigned int *)v32.__pad_0 = result; /*0x459b46*/
      v25 = RefinerySmokeOffsetFour[1]; /*0x459b4c*/
      v32.Coord3D_field_0x04 = v25; /*0x459b4f*/
      v26 = RefinerySmokeOffsetFour[2]; /*0x459b53*/
      v32.Coord3D_field_0x08 = v26; /*0x459b56*/
      if ( result != g_BuildingClassPool || v25 != dword_89C84C || v26 != dword_89C850 ) /*0x459b6a*/
      {
        result = Coord3D::Equals(&v32, &dword_89C870); /*0x459b79*/
        if ( !(unsigned char)result ) /*0x459b80*/
        {
          v27 = (int *)RA2_OPNEW(0x100u); /*0x459b87*/
          if ( v27 ) /*0x459b91*/
          {
            v28 = ((unsigned int *)this)[2]; /*0x459ba8*/
            v29 = v32.Coord3D_field_0x04 + ((unsigned int *)this)[1]; /*0x459bb5*/
            v33 = *(unsigned int *)v32.__pad_0 + ((unsigned int *)this)[0]; /*0x459bbb*/
            v34 = v29; /*0x459bc9*/
            v35 = v32.Coord3D_field_0x08 + v28; /*0x459bcd*/
            v30 = (ObjectClass *)ParticleSystemClass::Constructor(v27, v3, &v33, 0, this, &g_BuildingClassPool, 0); /*0x459bd1*/
            return ObjectClass::SetMember59(v30, v31); /*0x459bdd*/
          }
          else
          {
            return ObjectClass::SetMember59(0, v31); /*0x459bf3*/
          }
        }
      }
    }
    return result; /*0x459be2*/
}
} // namespace gamemd

// 0x459EF0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
CoordStruct* BuildingClass::GetBuildCoordsAdjusted(CoordStruct* out) const
{
    int *location; // edx
    int v2; // eax
    int v3; // ecx
    int v4; // esi
    int v6; // edx
    int *v7; // [esp+Ch] [ebp+4h]

    location = ((unsigned int *)this)[0]; /*0x459ef7*/
    v2 = *(unsigned int *)&this->vtable2; /*0x459efa*/
    v3 = *(unsigned int *)&this->vtable2; /*0x459efc*/
    v4 = v2 - 128; /*0x459eff*/
    v6 = location[2]; /*0x459f09*/
    *v7 = v4; /*0x459f0e*/
    v7[1] = v3 - 128; /*0x459f10*/
    v7[2] = v6; /*0x459f13*/
    return (int)v7; /*0x459f16*/
}
} // namespace gamemd

// 0x45EE70
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::ApplyFoundationDamage()
{
    unsigned short *v4; // edi
    unsigned short *v5; // eax
    short v6; // dx
    unsigned int *v7; // eax
    int v8; // ecx
    int v9; // esi
    Cell *v10; // eax
    char v12; // [esp+13h] [ebp-15h]
    short v13[2]; // [esp+14h] [ebp-14h] BYREF
    int v14; // [esp+18h] [ebp-10h]
    unsigned int v15[3]; // [esp+1Ch] [ebp-Ch] BYREF

    v12 = 0; /*0x45ee81*/
    if ( *a2 == word_89C8B0 && a2[1] == word_89C8B2 ) /*0x45ee9a*/
      return 0; /*0x45ee9a*/
    v4 = (unsigned short *)(*(int (__thiscall **)(BuildingClass *, int))((char *)this->vtable1 + 144))(this, 1); /*0x45eeac*/
    while ( *v4 != 0x7FFF || v4[1] != 0x7FFF ) /*0x45eebb*/
    {
      v5 = v4; /*0x45eec5*/
      v4 += 2; /*0x45eec7*/
      v6 = a2[1] + v5[1]; /*0x45eed1*/
      (v14) = ((v14) & ~0xFFFF) | ((unsigned int)(*v5 + *a2) & 0xFFFF) /*0x45eed5*/
      (v14) = ((v14) & ~(0xFFFFULL << 16)) | (((unsigned __int64)(unsigned int)(v6) & 0xFFFF) << 16) /*0x45eede*/
      *(unsigned int *)v13 = v14; /*0x45eeed*/
      if ( (unsigned __int8)LayerClass::CoordinatesLegal((LayerClass *)&dword_87F7E8, v13) ) /*0x45eef1*/
      {
        v7 = CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v13); /*0x45ef04*/
        v8 = v7[17]; /*0x45ef09*/
        if ( v8 != -1 && (this != (BuildingClass *)dword_8871E0->NukeDown || v8 != 2) ) /*0x45ef26*/
          return 2; /*0x45f017*/
        v9 = v7[57]; /*0x45ef2c*/
        if ( v9 ) /*0x45ef34*/
        {
          if ( (*(int (__thiscall **)(int))(*(unsigned int *)&v9->suspendedMission)(v9) == 36 ) /*0x45ef44*/
            return 2; /*0x45ef44*/
          if ( (*(unsigned char *)(v9 + 20) & 1) != 0 ) /*0x45ef4e*/
          {
            if ( (*(int (__thiscall **)(int))(*(unsigned int *)&v9->suspendedMission)(v9) == 6 ) /*0x45ef5e*/
            {
              if ( !(unsigned __int8)BuildingClass_CanAcceptType((bool *)v9, (int)this, (int)other) ) /*0x45ef6f*/
                return 2; /*0x45ef6f*/
            }
            else
            {
              if ( !(unsigned __int8)HouseClass::IsAlliedWith(*(HouseClass **)(v9 + 540)) /*0x45ef9b*/
                || (*(unsigned char *)(v9 + 20) & 4) == 0 )
              {
                return 2; /*0x45ef9b*/
              }
              v12 = 1; /*0x45efa3*/
              if ( !*(unsigned int *)(v9 + 1444) /*0x45efdf*/
                || (v15[0] = *(unsigned int *)(v9 + 156),
                    v15[1] = *(unsigned int *)(v9 + 160),
                    v15[2] = *(unsigned int *)(v9 + 164),
                    Coord::To_Cell((Coord *)&dword_87F7E8, v15) == *(CellClass **)(v9 + 1444)) )
              {
                v10 = (Cell *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, v13); /*0x45effa*/
                Cell::ApplyDamage(v10, (int)&dword_89C8D0, 1, 1, 0); /*0x45f001*/
              }
            }
          }
        }
      }
    }
    return v12 != 0; /*0x45f034*/
}
} // namespace gamemd

// 0x45F160
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::GetPlacementCoords(int* out, unsigned int* a3)
{
    int result; // eax

    if ( *((unsigned char *)this + 5992) && a2 ) /*0x45f171*/
    {
      result = *((unsigned int *)this + 1341); /*0x45f173*/
      if ( result ) /*0x45f17b*/
      {
        *a2 = result; /*0x45f1ad*/
        (result) = ((result) & ~0xFF) | ((unsigned int)(1) & 0xFF) /*0x45f1af*/
        *a3 = 0; /*0x45f1b2*/
        return result; /*0x45f1b8*/
      }
      result = (*((int (__thiscall **)(BuildingClass *))this->vtable1 + 39))(this); /*0x45f17f*/
      *a2 = result; /*0x45f187*/
      if ( result ) /*0x45f189*/
      {
        result = *(short *)(result + 6) / 2; /*0x45f192*/
        if ( result > 3 ) /*0x45f197*/
        {
          (result) = ((result) & ~0xFF) | ((unsigned int)(1) & 0xFF) /*0x45f19d*/
          *a3 = 3; /*0x45f1a0*/
          return result; /*0x45f1a6*/
        }
      }
    }
    (result) = ((result) & ~0xFF) | ((unsigned int)(0) & 0xFF) /*0x45f1bb*/
    return result; /*0x45f19f*/
}
} // namespace gamemd

// 0x47F6A0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::Draw_0(Point2D* screen_pos, RectangleStruct* bounds) const
{
    int result; // eax
    unsigned int *v5; // eax
    int v6; // ecx
    int v7; // edi
    int v8; // edx
    int v9; // eax
    int *v10; // ebp
    int v11; // eax
    int v12; // edi
    unsigned int v13; // ecx
    unsigned int *v14; // ebx
    int v15; // ecx
    int v16; // edx
    char v17; // bl
    int v18; // edi
    BuildingClass *v19; // ecx
    unsigned int v20; // [esp-34h] [ebp-58h]
    int *v21; // [esp-2Ch] [ebp-50h]
    int v22; // [esp-20h] [ebp-44h]
    int v23; // [esp-1Ch] [ebp-40h]
    int v24; // [esp-18h] [ebp-3Ch]
    int v25; // [esp-18h] [ebp-3Ch]
    int v26; // [esp+10h] [ebp-14h] BYREF
    int v27[2]; // [esp+14h] [ebp-10h] BYREF
    char v28[8]; // [esp+1Ch] [ebp-8h] BYREF
    int v29; // [esp+28h] [ebp+4h]

    result = *(unsigned int *)(this + 68); /*0x47f6a9*/
    if ( result != 167 && result != 178 )
    {
      v26 = *(unsigned int *)(*(unsigned int *)stru_A83D50.__pad_34 + 4 * result); /*0x47f6d2*/
      v5 = BuildingClass::CalcDrawPos((BuildingClass *)this, v28); /*0x47f6d6*/
      v6 = *v5 + *a2; /*0x47f6ef*/
      v7 = *(char *)(this + 283); /*0x47f6f1*/
      v8 = (*(unsigned int *)(this + 320) >> 7) & 1; /*0x47f6fb*/
      v9 = a2[1] + v5[1]; /*0x47f6fe*/
      v10 = a3; /*0x47f700*/
      v27[0] = v6; /*0x47f704*/
      v27[1] = v9 - a3[1]; /*0x47f713*/
      v11 = *(unsigned int *)(this + 52); /*0x47f717*/
      v12 = 15 * (v7 + 4 * v8); /*0x47f71a*/
      v29 = v12; /*0x47f722*/
      v27[0] = v6 - *a3; /*0x47f728*/
      if ( !v11 ) /*0x47f72c*/
        TacticalClass::SetView((int *)this, 0, 0x10000, 0, 1000, 1000, 1000); /*0x47f748*/
      result = (*(int (__thiscall **)(int))(*(unsigned int *)&v26->q_270)(v26); /*0x47f755*/
      if ( *(char *)(this + 320) >= 0 )
      {
        if ( *(unsigned char *)(v26 + 681) )
        {
          result = FindBuildingByTiberiumType(*(unsigned int *)(this + 68)); /*0x47f863*/
          if ( result == -1 ) /*0x47f86b*/
            return result; /*0x47f86b*/
          v14 = *(unsigned int **)(*(unsigned int *)((char *)&g_BuildingLoadQueue_Array + 506) + 4 * result); /*0x47f87f*/
          if ( *(unsigned char *)(this + 284) ) /*0x47f877*/
          {
            v15 = v14[58]; /*0x47f8c3*/
            v16 = *(unsigned int *)(v14[56] + 660) /*0x47f8ce*/
                + v14[59] / 4 * (*(unsigned __int8 *)(this + 284) - 1)
                + *(short *)(this + 36) * *(short *)(this + 38) % (v14[59] / 4);
          }
          else
          {
            v16 = *(short *)(this + 36) * *(short *)(this + 38) % v14[58]; /*0x47f8e3*/
            v15 = *(unsigned int *)(v14[56] + 660); /*0x47f8ef*/
          }
          result = (*(int (__thiscall **)(unsigned int))(**(unsigned int **)(*(unsigned int *)stru_A83D50.__pad_34 + 4 * (v15 + v16)) + 156))(*(unsigned int *)(*(unsigned int *)stru_A83D50.__pad_34 + 4 * (v15 + v16))); /*0x47f902*/
          if ( *(unsigned char *)(this + 284) ) /*0x47f908*/
            return DrawToSurfaceSHP( /*0x47f952*/
                     (int)g_DSurface_Hidden_2,
                     *(int *)&stru_87F5F0.__pad_58[112],
                     result,
                     *(unsigned __int8 *)(this + 286),
                     v27,
                     v10,
                     19968,
                     0,
                     -2 - v12,
                     0,
                     1000,
                     0,
                     (&dword_AA105C)[*(unsigned __int8 *)(this + 284)],
                     0,
                     0,
                     0);
          v24 = 1000; /*0x47f960*/
        }
        else
        {
          if ( *(unsigned char *)(v26 + 680) ) /*0x47f96a*/
            return DrawToSurfaceSHP( /*0x47f9c1*/
                     (int)g_DSurface_Hidden_2,
                     *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&stru_B054D0.m_1[3] + 4
                                                                            * *(unsigned int *)&(&dword_A83D4C)[134].__pad_90[4])
                               + 780),
                     result,
                     *(unsigned __int8 *)(this + 286),
                     v27,
                     v10,
                     19968,
                     0,
                     -2 - v12,
                     2,
                     *(short *)(this + 266),
                     0,
                     0,
                     0,
                     0,
                     0);
          if ( *(unsigned int *)(v26 + 660) != 126 )
          {
            v17 = *(unsigned char *)(v26 + 691); /*0x47fa69*/
            v18 = v17 != 0 ? 0 : -15;
            if ( *(unsigned char *)(v26 + 693) ) /*0x47fa81*/
              v18 = 0; /*0x47fa8b*/
            if ( *(unsigned char *)(v26 + 682) )
            {
              v25 = *(short *)(this + 268); /*0x47fab4*/
              v23 = v17 != 0 ? 0 : 2;
              v22 = v18 - v29 - 2; /*0x47fabc*/
              v21 = v10; /*0x47fac8*/
              v20 = 0; /*0x47faca*/
            }
            else if ( *(unsigned char *)(v26 + 692) )
            {
              v19 = *(BuildingClass **)(this + 64); /*0x47fadb*/
              if ( !v19 ) /*0x47fae0*/
                return result; /*0x47fae0*/
              result = BuildingClass::GetPlacementCoords(v19, &v26, &a3); /*0x47faf0*/
              if ( !(unsigned char)result ) /*0x47faf7*/
                return result; /*0x47faf7*/
              v25 = *(short *)(this + 268); /*0x47fb21*/
              result = v26; /*0x47fb22*/
              v23 = v17 != 0 ? 0 : 2;
              v22 = v18 - v29 - 2; /*0x47fb2a*/
              v21 = v10; /*0x47fb36*/
              v20 = (unsigned int)a3; /*0x47fb38*/
            }
            else
            {
              v25 = *(short *)(this + 268); /*0x47fb58*/
              v23 = v17 != 0 ? 0 : 2;
              v22 = v18 - v29 - 2; /*0x47fb60*/
              v21 = v10; /*0x47fb74*/
              v20 = *(unsigned __int8 *)(this + 286); /*0x47fb76*/
            }
            return DrawToSurfaceSHP( /*0x47fb81*/
                     (int)g_DSurface_Hidden_2,
                     *(unsigned int *)(this + 52),
                     result,
                     v20,
                     v27,
                     v21,
                     19968,
                     0,
                     v22,
                     v23,
                     v25,
                     0,
                     0,
                     0,
                     0,
                     0);
          }
          if ( *(unsigned char *)(this + 284) ) /*0x47f9d3*/
            return DrawToSurfaceSHP( /*0x47fa27*/
                     (int)g_DSurface_Hidden_2,
                     *(int *)&stru_87F5F0.__pad_58[112],
                     result,
                     *(unsigned __int8 *)(this + 286),
                     v27,
                     v10,
                     19968,
                     0,
                     -2 - v12,
                     0,
                     *(short *)(this + 268),
                     0,
                     (&dword_AA105C)[*(unsigned __int8 *)(this + 284)],
                     0,
                     30,
                     -2);
          v24 = *(short *)(this + 268); /*0x47fa3c*/
        }
        return DrawToSurfaceSHP( /*0x47fa64*/
                 (int)g_DSurface_Hidden_2,
                 *(int *)&stru_87F5F0.__pad_58[112],
                 result,
                 *(unsigned __int8 *)(this + 286),
                 v27,
                 v10,
                 19968,
                 0,
                 -2 - v12,
                 0,
                 v24,
                 0,
                 0,
                 0,
                 0,
                 0);
      }
      if ( *(unsigned int *)(this + 100) != *(unsigned int * *)((char *)&stru_A8EB00 + 644) /*0x47f7ab*/
        || *(unsigned char *)(this + 280) != stru_87F5F0.__pad_E12[1342]
        || *(unsigned int *)(this + 104) != *v10
        || *(unsigned int *)(this + 108) != v10[1]
        || *(unsigned int *)(this + 112) != v10[2]
        || *(unsigned int *)(this + 116) != v10[3] )
      {
        v13 = *(unsigned __int8 *)(this + 286); /*0x47f7b3*/
        if ( !*(unsigned char *)(this + 286) || v13 == 9 ) /*0x47f7c0*/
          v13 += (&dword_81CC30)[*(unsigned char *)(this + 36) & 3 | (4 * (*(unsigned char *)(this + 38) & 3))]; /*0x47f7d3*/
        DrawToSurfaceSHP( /*0x47f80b*/
          (int)g_DSurface_Hidden_2,
          *(unsigned int *)(this + 52),
          result,
          v13,
          v27,
          v10,
          19968,
          0,
          -2 - v12,
          0,
          *(short *)(this + 270),
          0,
          0,
          0,
          0,
          0);
        *(unsigned int *)(this + 100) = *(unsigned int * *)((char *)&stru_A8EB00 + 644); /*0x47f818*/
        *(unsigned int *)(this + 104) = DSurface_ViewBounds.field_0; /*0x47f821*/
        *(unsigned int *)(this + 108) = DSurface_ViewBounds.field_4; /*0x47f829*/
        *(unsigned int *)(this + 112) = *(unsigned int *)DSurface_ViewBounds.__pad_8; /*0x47f832*/
        result = *(unsigned int *)&DSurface_ViewBounds.__pad_8[4]; /*0x47f835*/
        *(unsigned int *)(this + 116) = *(unsigned int *)&DSurface_ViewBounds.__pad_8[4]; /*0x47f83a*/
        *(unsigned char *)(this + 280) = stru_87F5F0.__pad_E12[1342]; /*0x47f843*/
      }
    }
    return result; /*0x47f828*/
}
} // namespace gamemd

// 0x47FDE0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int* BuildingClass::GetPlacementRect(int* out)
{
    int v3; // eax
    unsigned char *v4; // esi
    short *v5; // ebx
    unsigned int v7; // ebp
    unsigned int *v8; // eax
    int v9; // edx
    int v10; // esi
    int v11; // ecx
    unsigned __int8 v12; // al
    int v13; // edi
    int v14; // esi
    unsigned int *FoundationSize; // eax
    int v16; // ecx
    int v17; // edx
    int v18; // esi
    int v19; // eax
    unsigned int v20[3]; // [esp+Ch] [ebp-24h] BYREF
    int v21; // [esp+18h] [ebp-18h] BYREF
    int v22; // [esp+1Ch] [ebp-14h]
    unsigned int v23[4]; // [esp+20h] [ebp-10h] BYREF

    v3 = *(unsigned int *)&this->q044; /*0x47fde8*/
    if ( v3 != -1 /*0x47fe07*/
      && (v4 = *(unsigned char **)(*(unsigned int *)stru_A83D50.__pad_34 + 4 * v3),
          (v5 = (short *)(*(int (__thiscall **)(unsigned char *))(*(unsigned int *)v4 + 156))(v4)) != 0) )
    {
      (v20[0]) = ((v20[0]) & ~0xFF) | ((unsigned int)((((unsigned int)(((unsigned int *)this)[0]) >> 16) & 0xFF)) & 0xFF) /*0x47fe31*/
      if ( v4[682] ) /*0x47fe35*/
        (v20[0]) = ((v20[0]) & ~0xFF) | ((unsigned int)(0) & 0xFF) /*0x47fe3f*/
      v7 = ((unsigned int)(v20[0]) & 0xFF) + v5[3] / 2; /*0x47fe67*/
      Coord::Subtract( /*0x47fe9d*/
        (Coord *)v20,
        (((SLOWORD(((unsigned int *)this)[0]) << 8) + 128) / 256) << 8,
        (((IDA_SHIWORD(((unsigned int *)this)[0]) << 8) + 128) / 256) << 8,
        0);
      v23[0] = v20[0]; /*0x47feae*/
      v23[1] = v20[1]; /*0x47feb2*/
      v23[2] = v20[2]; /*0x47febe*/
      Coord::To_Screen((Coord *)g_TacticalClass_Instance, v23, &v21); /*0x47feca*/
      v8 = BuildingClass::CalcDrawPos(this, v20); /*0x47fed6*/
      v21 += *v8; /*0x47fee7*/
      v9 = v8[1]; /*0x47feeb*/
      (v8) = ((v8) & ~0xFF) | ((unsigned int)(((unsigned int *)this)[0]) & 0xFF) /*0x47feee*/
      v10 = v9 + v22; /*0x47fef4*/
      v11 = v21 - 30; /*0x47fef6*/
      v22 += v9; /*0x47fef9*/
      v21 -= 30; /*0x47feff*/
      if ( (char)v8 < 0 ) /*0x47ff03*/
      {
        v12 = (((unsigned int)(((unsigned int *)this)[0]) >> 16) & 0xFF); /*0x47ff05*/
        if ( v12 >= 9u && v12 <= 0x11u ) /*0x47ff11*/
        {
          v11 -= 15; /*0x47ff13*/
          v10 += 7; /*0x47ff16*/
          v21 = v11; /*0x47ff19*/
          v22 = v10; /*0x47ff1d*/
        }
      }
      v13 = v11 - v5[1] / 2; /*0x47ff3a*/
      v14 = v10 - v5[2] / 2; /*0x47ff41*/
      FoundationSize = Building::GetFoundationSize(v23, v7); /*0x47ff43*/
      v16 = v13 + *FoundationSize; /*0x47ff4d*/
      v17 = v14 + FoundationSize[1]; /*0x47ff53*/
      v18 = FoundationSize[2]; /*0x47ff55*/
      v19 = FoundationSize[3]; /*0x47ff58*/
      *a2 = v16; /*0x47ff5e*/
      a2[1] = v17; /*0x47ff60*/
      a2[2] = v18; /*0x47ff63*/
      a2[3] = v19; /*0x47ff66*/
      return a2; /*0x47ff69*/
    }
    else
    {
      *a2 = 0; /*0x47fe17*/
      a2[1] = 0; /*0x47fe19*/
      a2[2] = 0; /*0x47fe1c*/
      a2[3] = 0; /*0x47fe1f*/
      return a2; /*0x47fe09*/
    }
}
} // namespace gamemd

// 0x483C80
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::DetermineVisualState() const
{
    int v2; // eax
    int v3; // ecx
    int v4; // eax
    unsigned int *v5; // esi
    int v6; // eax
    int v7; // eax
    int v8; // eax

    if ( !(unsigned __int8)LayerClass::IsWithinUsableArea( /*0x483c90*/
                             (LayerClass *)&stru_87F5F0.__pad_58[416],
                             (short *)&((unsigned int *)this)[0],
                             1) )
    {
      *(unsigned int *)&this->u32_4C = 7; /*0x483c99*/
      return; /*0x483ca3*/
    }
    v2 = *(unsigned int *)&this->q044; /*0x483ca4*/
    if ( v2 != -1 ) /*0x483caa*/
    {
      v3 = *(unsigned int *)(*(unsigned int *)stru_A83D50.__pad_34 + 4 * v2); /*0x483cb2*/
      if ( *(unsigned char *)(v3 + 557) ) /*0x483cb5*/
      {
        *(unsigned int *)&this->u32_4C = 1; /*0x483cbf*/
        return; /*0x483cc9*/
      }
      if ( *(unsigned char *)(v3 + 680) ) /*0x483cca*/
        goto LABEL_7; /*0x483cd2*/
      if ( flt_89EA48[9 * *(unsigned int *)(v3 + 664)] == 0.0 ) /*0x483cfa*/
      {
        *(unsigned int *)&this->u32_4C = 6; /*0x483cfc*/
        return; /*0x483d06*/
      }
      if ( *(unsigned char *)(v3 + 693) ) /*0x483d07*/
      {
        *(unsigned int *)&this->u32_4C = 6; /*0x483d11*/
        return; /*0x483d1b*/
      }
      if ( *(unsigned char *)(v3 + 692) ) /*0x483d1c*/
        goto LABEL_31; /*0x483d1c*/
    }
    v4 = *(unsigned int *)&this->animation; /*0x483d2a*/
    if ( v4 == 2 ) /*0x483d33*/
    {
      *(unsigned int *)&this->u32_4C = 4; /*0x483d35*/
      return; /*0x483d3f*/
    }
    if ( v4 == 6 ) /*0x483d47*/
    {
      *(unsigned int *)&this->u32_4C = 3; /*0x483d49*/
      return; /*0x483d53*/
    }
    if ( flt_89EA48[9 * v4] <= 0.01 ) /*0x483d69*/
    {
  LABEL_18:
      *(unsigned int *)&this->u32_4C = 6; /*0x483d6b*/
      return; /*0x483d71*/
    }
    v5 = (unsigned int *)*(unsigned int *)&this->flashing; /*0x483d72*/
    if ( !v5 ) /*0x483d7a*/
    {
  LABEL_31:
      *(unsigned int *)&this->u32_4C = 0; /*0x483dd4*/
      return; /*0x483dde*/
    }
    while ( 1 ) /*0x483d80*/
    {
      v6 = (*(int (__thiscall **)(unsigned int *))(*v5 + 44))(v5); /*0x483d80*/
      if ( v6 == 6 ) /*0x483d85*/
      {
        v7 = v5[328]; /*0x483d8e*/
        if ( *(unsigned char *)(v7 + 5824) ) /*0x483d94*/
        {
          if ( *(unsigned char *)(v5[135] + 506) ) /*0x483da4*/
            goto LABEL_18; /*0x483dac*/
        }
        else if ( *(unsigned char *)(v7 + 5823) ) /*0x483db0*/
        {
          v8 = v5[390]; /*0x483dba*/
          if ( v8 != 12 && v8 != 8 ) /*0x483dc8*/
            *(unsigned int *)&this->u32_4C = 6; /*0x483dca*/
        }
        goto LABEL_30; /*0x483dac*/
      }
      if ( v6 == 36 ) /*0x483d8a*/
        break; /*0x483d8a*/
  LABEL_30:
      v5 = (unsigned int *)v5[12]; /*0x483dcd*/
      if ( !v5 ) /*0x483dd2*/
        goto LABEL_31; /*0x483dd2*/
    }
    if ( dword_A8B230[130].uniqueId == 1 ) /*0x483df3*/
    {
      if ( *(unsigned int *)(v5[50] + 684) == 7 ) /*0x483e18*/
        goto LABEL_7; /*0x483e18*/
    }
    else if ( *(unsigned int *)(v5[50] + 680) == 7 ) /*0x483e01*/
    {
  LABEL_7:
      *(unsigned int *)&this->u32_4C = 2; /*0x483cd4*/
      return; /*0x483cde*/
    }
    *(unsigned int *)&this->u32_4C = 5; /*0x483e1e*/
}
} // namespace gamemd

// 0x485010
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
BuildingClass* BuildingClass::FindByCellHash(uint32_t hash)
{
    return FindBuildingByTiberiumType(((unsigned int *)this)[2]);
}
} // namespace gamemd

// 0x4852D0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::CreateDestructionCrater()
{
    int v2; // kr04_4
    int v3; // kr00_4
    int v5[2]; // [esp+8h] [ebp-14h] BYREF
    unsigned int v6[3]; // [esp+10h] [ebp-Ch] BYREF

    v2 = (SLOWORD(((unsigned int *)this)[0]) << 8) + 128; /*0x4852f9*/
    v3 = (IDA_SHIWORD(((unsigned int *)this)[0]) << 8) + 128; /*0x485306*/
    v6[2] = 0; /*0x485308*/
    v6[1] = (v3 / 256) << 8; /*0x485312*/
    v6[0] = (v2 / 256) << 8; /*0x48532c*/
    Coord::To_Screen((Coord *)g_TacticalClass_Instance, v6, v5); /*0x485330*/
    return Cell::CreateCrater( /*0x485389*/
             v5[0] - 30,
             (int)DSurface_ViewBounds.field_4 + v5[1] + -15 * SHIBYTE(((unsigned int *)this)[1]) - 15,
             60,
             30,
             0);
}
} // namespace gamemd

// 0x485AF0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::VisualizePlacement()
{
    BuildingClass *v1; // ebp
    int *PlacementRect; // esi
    unsigned int *StartCoords; // eax
    int v4; // edi
    int v5; // eax
    int v6; // esi
    int v7; // eax
    char transporter; // al
    signed int v9; // ebx
    BuildingClass *NeighbourContent; // esi
    int v11; // eax
    int BridgeBitfield; // edi
    int v13; // eax
    int *v14; // ebp
    int *v15; // eax
    int v16; // ecx
    int v17; // edx
    int v18; // ebx
    int v19; // edi
    int v20; // eax
    bool v21; // cc
    int v22; // ebp
    int v23; // edx
    int v24; // eax
    struct tagRECT *v25; // edi
    struct tagRECT *v26; // eax
    LONG left; // edx
    LONG v28; // ecx
    LONG v29; // ebp
    LONG top; // ebx
    LONG bottom; // edi
    LONG v32; // eax
    LONG v33; // ecx
    int v34; // eax
    Coord2D *v35; // eax
    int *v36; // eax
    int *v37; // eax
    struct tagRECT *v38; // eax
    int *v39; // eax
    int v40; // edx
    struct tagRECT *v41; // eax
    Bounds *v42; // eax
    Rect *v43; // eax
    struct tagRECT *v44; // eax
    Bounds *v45; // eax
    int *v46; // eax
    struct tagRECT *v47; // [esp-Ch] [ebp-1C4h]
    struct tagRECT *v48; // [esp-Ch] [ebp-1C4h]
    int v49; // [esp-8h] [ebp-1C0h]
    const RECT *v50; // [esp-8h] [ebp-1C0h]
    unsigned int *v51; // [esp-8h] [ebp-1C0h]
    const RECT *v52; // [esp-8h] [ebp-1C0h]
    unsigned int *v53; // [esp-8h] [ebp-1C0h]
    int v54; // [esp-4h] [ebp-1BCh]
    struct tagRECT *v55; // [esp-4h] [ebp-1BCh]
    const RECT *v56; // [esp-4h] [ebp-1BCh]
    const RECT *v57; // [esp-4h] [ebp-1BCh]
    unsigned int *v58; // [esp-4h] [ebp-1BCh]
    const RECT *v59; // [esp-4h] [ebp-1BCh]
    const RECT *v60; // [esp-4h] [ebp-1BCh]
    unsigned int *v61; // [esp-4h] [ebp-1BCh]
    const RECT *v62; // [esp+0h] [ebp-1B8h]
    const RECT *v63; // [esp+0h] [ebp-1B8h]
    const RECT *v64; // [esp+4h] [ebp-1B4h]
    const RECT *v65; // [esp+4h] [ebp-1B4h]
    int v66; // [esp+10h] [ebp-1A8h]
    int right; // [esp+10h] [ebp-1A8h]
    signed int v68; // [esp+34h] [ebp-184h]
    Rect v69; // [esp+38h] [ebp-180h] BYREF
    int v70; // [esp+48h] [ebp-170h]
    int v71; // [esp+4Ch] [ebp-16Ch]
    int v72; // [esp+50h] [ebp-168h]
    BuildingClass *v73; // [esp+54h] [ebp-164h]
    struct tagRECT rcDst; // [esp+58h] [ebp-160h] BYREF
    int v75; // [esp+74h] [ebp-144h]
    int v76; // [esp+80h] [ebp-138h]
    int v77; // [esp+84h] [ebp-134h]
    unsigned int v78[2]; // [esp+88h] [ebp-130h] BYREF
    int v79; // [esp+90h] [ebp-128h] BYREF
    int v80; // [esp+98h] [ebp-120h]
    int v81; // [esp+A0h] [ebp-118h] BYREF
    LONG v82; // [esp+A8h] [ebp-110h]
    unsigned int v83[2]; // [esp+B0h] [ebp-108h] BYREF
    int v84; // [esp+B8h] [ebp-100h] BYREF
    RECT rcSrc1; // [esp+C0h] [ebp-F8h] BYREF
    int v86[4]; // [esp+D0h] [ebp-E8h] BYREF
    RECT v87; // [esp+E0h] [ebp-D8h] BYREF
    int v88[4]; // [esp+F0h] [ebp-C8h] BYREF
    int v89; // [esp+100h] [ebp-B8h] BYREF
    int v90[4]; // [esp+108h] [ebp-B0h] BYREF
    Rect v91; // [esp+118h] [ebp-A0h] BYREF
    int v92[4]; // [esp+128h] [ebp-90h] BYREF
    int v93[4]; // [esp+138h] [ebp-80h] BYREF
    int v94[4]; // [esp+148h] [ebp-70h] BYREF
    int v95[4]; // [esp+168h] [ebp-50h] BYREF
    int v96[4]; // [esp+178h] [ebp-40h] BYREF
    int v97[4]; // [esp+1A8h] [ebp-10h] BYREF

    v1 = this; /*0x485afa*/
    v73 = this; /*0x485afe*/
    if ( !(unsigned __int8)BuildingClass::CheckAdjacentCells((int)this) ) /*0x485b19*/
      return; /*0x485b19*/
    PlacementRect = BuildingClass::GetPlacementRect(v1, &v81); /*0x485b35*/
    StartCoords = House::GetStartCoords((House *)v1, &v79); /*0x485b3a*/
    if ( (int)StartCoords[2] <= 0 || (int)StartCoords[3] <= 0 ) /*0x485b4b*/
    {
      v7 = PlacementRect[3]; /*0x485bdb*/
    }
    else
    {
      if ( PlacementRect[2] > 0 ) /*0x485b5a*/
      {
        v72 = PlacementRect[3]; /*0x485b61*/
        if ( v72 > 0 ) /*0x485b65*/
        {
          v4 = StartCoords[1]; /*0x485b6b*/
          v5 = StartCoords[3]; /*0x485b71*/
          v6 = PlacementRect[1]; /*0x485b7e*/
          if ( v4 > v6 ) /*0x485b87*/
          {
            v5 += v4 - v6; /*0x485b8b*/
            v4 = v6; /*0x485b8d*/
          }
          if ( v5 + v4 < v72 + v6 ) /*0x485bb5*/
            v5 = v72 + v6 - v4 + 1; /*0x485bba*/
          v1 = v73; /*0x485bbc*/
          v75 = v5; /*0x485bc0*/
          goto LABEL_14; /*0x485bc4*/
        }
      }
      v7 = StartCoords[3]; /*0x485bce*/
    }
    v75 = v7; /*0x485bde*/
  LABEL_14:
    BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)&((unsigned int *)v1)[0]); /*0x485c7d*/
    transporter = (char)((unsigned int *)v1)[0]; /*0x485c9b*/
    ((unsigned int *)v1)[2] = 126; /*0x485ca1*/
    if ( !transporter ) /*0x485caa*/
    {
      v9 = 0; /*0x485cd0*/
      (((unsigned int *)v1)[0]) = ((((unsigned int *)v1)[0]) & ~(0xFFULL << 16)) | (((unsigned __int64)(unsigned int)((int)abs32(Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink)) % 3 + 48) & 0xFF) << 16) /*0x485cd2*/
      v68 = 0; /*0x485cd8*/
      while ( 1 ) /*0x485ce4*/
      {
        NeighbourContent = (BuildingClass *)((Cell *)v1)->GetNeighbourContent(v9); /*0x485ce4*/
        v11 = *(unsigned int *)&NeighbourContent->q044; /*0x485ce6*/
        if ( v11 == 126 ) /*0x485cec*/
        {
          if ( (((unsigned int)(((unsigned int *)NeighbourContent)[0]) >> 16) & 0xFF) < 0x30u ) /*0x485cf5*/
            goto LABEL_21; /*0x485cf5*/
        }
        else if ( v11 == -1 || !*(unsigned char *)(*(unsigned int *)(*(unsigned int *)stru_A83D50.__pad_34 + 4 * v11) + 686) ) /*0x485d0d*/
        {
  LABEL_21:
          if ( ((unsigned int)(((unsigned int *)NeighbourContent)[0]) & 0xFF) ) /*0x485d1b*/
          {
            Rect::Set(&v69, 0, 0, 0, 0); /*0x486142*/
            v55 = (struct tagRECT *)BuildingClass::GetPlacementRect(NeighbourContent, v93); /*0x48615d*/
            House::GetStartCoords((House *)NeighbourContent, v96); /*0x486161*/
            v38 = (struct tagRECT *)Rect::Union(v55, v62, v64); /*0x48616f*/
            v39 = (int *)Rect::Union(v38, v63, v65); /*0x486180*/
            v69.X = *v39; /*0x486187*/
            v69.Y = v39[1]; /*0x48618e*/
            v69.Width = v39[2]; /*0x486195*/
            v40 = v39[3]; /*0x486199*/
            *(unsigned int *)&NeighbourContent->q044 = 126; /*0x48619c*/
            v69.Height = v40; /*0x4861a8*/
            (((unsigned int *)NeighbourContent)[0]) = ((((unsigned int *)NeighbourContent)[0]) & ~(0xFFULL << 16)) | (((unsigned __int64)(unsigned int)(2 * ((unsigned int)(((unsigned int *)NeighbourContent)[0]) & 0xFF) /*0x4861d7*/
                                       + (abs32(Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink)) & 1)
                                       + 51) & 0xFF) << 16)
            v56 = (const RECT *)CellStruct::Copy(&DSurface_ViewBounds, v83); /*0x4861e2*/
            v47 = (struct tagRECT *)BuildingClass::GetPlacementRect(NeighbourContent, v86); /*0x486201*/
            House::GetStartCoords((House *)NeighbourContent, v88); /*0x486205*/
            v41 = (struct tagRECT *)Rect::Union(v47, &rcSrc1, v56); /*0x486213*/
            v42 = (Bounds *)Rect::Union(v41, v50, v57); /*0x486224*/
            v43 = (Rect *)Bounds::Subtract(v42, v51, v58); /*0x48622b*/
            v69 = *v43; /*0x486239*/
            Cell::CreateCrater(v43->X, v43->Y, v43->Width, v43->Height, 0); /*0x486270*/
          }
          else
          {
            BridgeBitfield = CellClass::GetBridgeBitfield((CellClass *)NeighbourContent); /*0x485d30*/
            v13 = *(unsigned int *)&NeighbourContent->q044; /*0x485d32*/
            v70 = BridgeBitfield; /*0x485d38*/
            if ( v13 == -1 || BridgeBitfield <= 15 && (((unsigned int)(((unsigned int *)NeighbourContent)[0]) >> 16) & 0xFF) / 3 != BridgeBitfield ) /*0x485d5f*/
            {
              v14 = BuildingClass::GetPlacementRect(NeighbourContent, v97); /*0x485d86*/
              v15 = House::GetStartCoords((House *)NeighbourContent, v92); /*0x485d92*/
              if ( v15[2] <= 0 || v15[3] <= 0 ) /*0x485da7*/
              {
                v76 = v14[2]; /*0x485e60*/
                v20 = v14[3]; /*0x485e67*/
              }
              else
              {
                v66 = v14[2]; /*0x485db2*/
                if ( v66 <= 0 || (v71 = v14[3], v71 <= 0) ) /*0x485dc5*/
                {
                  v23 = v15[2]; /*0x485e43*/
                  v20 = v15[3]; /*0x485e4b*/
                  v76 = v23; /*0x485e4e*/
                }
                else
                {
                  v16 = *v15; /*0x485dc7*/
                  v17 = *v14; /*0x485dc9*/
                  v18 = v15[2]; /*0x485dcc*/
                  v19 = v15[1]; /*0x485dcf*/
                  v20 = v15[3]; /*0x485dd2*/
                  v21 = v16 <= *v14; /*0x485dd5*/
                  v80 = v18; /*0x485dd7*/
                  if ( !v21 ) /*0x485dde*/
                  {
                    v18 += v16 - v17; /*0x485de2*/
                    v16 = v17; /*0x485de4*/
                    v80 = v18; /*0x485de6*/
                  }
                  v22 = v14[1]; /*0x485ded*/
                  v72 = v22; /*0x485df2*/
                  if ( v19 > v22 ) /*0x485df6*/
                  {
                    v20 += v19 - v22; /*0x485dfa*/
                    v19 = v22; /*0x485dfc*/
                  }
                  if ( v16 + v18 < v17 + v66 ) /*0x485e08*/
                    v80 = v17 - v16 + v66 + 1; /*0x485e14*/
                  if ( v20 + v19 < v71 + v72 ) /*0x485e2a*/
                    v20 = v71 + v72 - v19 + 1; /*0x485e2f*/
                  v76 = v80; /*0x485e3a*/
                }
              }
              v77 = v20; /*0x485e6e*/
              *(unsigned int *)&NeighbourContent->q044 = 126; /*0x485f28*/
              v24 = Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink); /*0x485f47*/
              (((unsigned int *)NeighbourContent)[0]) = ((((unsigned int *)NeighbourContent)[0]) & ~(0xFFULL << 16)) | (((unsigned __int64)(unsigned int)(3 * v70 + abs32(v24 % 3)) & 0xFF) << 16) /*0x485f69*/
              House::AnnounceUpgrade((int)NeighbourContent, -1); /*0x485f71*/
              v78[0] = DSurface_ViewBounds.field_0; /*0x485f81*/
              v78[1] = DSurface_ViewBounds.field_4; /*0x485f8f*/
              v25 = (struct tagRECT *)House::GetStartCoords((House *)NeighbourContent, v94); /*0x485fa5*/
              v26 = (struct tagRECT *)BuildingClass::GetPlacementRect(NeighbourContent, v95); /*0x485faa*/
              if ( v25->right <= 0 || v25->bottom <= 0 ) /*0x485fbf*/
              {
                rcDst = *v26; /*0x48607b*/
              }
              else
              {
                right = v26->right; /*0x485fca*/
                if ( right <= 0 || (v70 = v26->bottom, v70 <= 0) ) /*0x485fdd*/
                {
                  rcDst = *v25; /*0x48605e*/
                }
                else
                {
                  left = v25->left; /*0x485fdf*/
                  v28 = v26->left; /*0x485fe1*/
                  v29 = v25->right; /*0x485fe3*/
                  top = v25->top; /*0x485fe6*/
                  bottom = v25->bottom; /*0x485fe9*/
                  v21 = left <= v26->left; /*0x485fec*/
                  v82 = v29; /*0x485fee*/
                  if ( !v21 ) /*0x485ff5*/
                  {
                    v29 += left - v28; /*0x485ff9*/
                    left = v28; /*0x485ffb*/
                    v82 = v29; /*0x485ffd*/
                  }
                  v32 = v26->top; /*0x486004*/
                  v71 = v32; /*0x486009*/
                  if ( top > v32 ) /*0x48600d*/
                  {
                    bottom += top - v32; /*0x486011*/
                    top = v32; /*0x486013*/
                  }
                  if ( left + v29 >= v28 + right ) /*0x48601f*/
                    v33 = v82; /*0x48602d*/
                  else
                    v33 = v28 - left + right + 1; /*0x486027*/
                  if ( bottom + top < v71 + v70 ) /*0x486043*/
                    bottom = v71 + v70 - top + 1; /*0x486048*/
                  rcDst.left = left; /*0x48604a*/
                  rcDst.top = top; /*0x48604e*/
                  rcDst.right = v33; /*0x486052*/
                  rcDst.bottom = bottom; /*0x486056*/
                }
              }
              v34 = Rect::Union(&rcDst, v62, v64); /*0x4860a4*/
              v54 = *(unsigned int *)(v34 + 12); /*0x4860af*/
              v49 = *(unsigned int *)(v34 + 8); /*0x4860b7*/
              v35 = (Coord2D *)CellStruct::Copy((CellStruct *)v34, &v84); /*0x4860cb*/
              v36 = Coord2D::Sub(v35, &v89, v78); /*0x4860d2*/
              v37 = Rect::Construct(&v91, v36, v49, v54); /*0x4860df*/
              Cell::CreateCrater(*v37, v37[1], v37[2], v37[3], 0); /*0x486124*/
              v9 = v68; /*0x486129*/
              v1 = v73; /*0x48612d*/
            }
          }
          BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)&((unsigned int *)NeighbourContent)[0]); /*0x48627e*/
        }
        v9 += 2; /*0x486283*/
        v68 = v9; /*0x486289*/
        if ( v9 >= 8 ) /*0x48628d*/
        {
          BuildingClass::CreateIdleAnim(v1); /*0x486295*/
          goto LABEL_62; /*0x48629a*/
        }
      }
    }
    (((unsigned int *)v1)[0]) = ((((unsigned int *)v1)[0]) & ~(0xFFULL << 16)) | (((unsigned __int64)(unsigned int)(2 * ((unsigned int)(((unsigned int *)v1)[0]) & 0xFF) + (abs32(Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink)) & 1) + 51) & 0xFF) << 16) /*0x4862c0*/
  LABEL_62:
    v59 = (const RECT *)CellStruct::Copy(&DSurface_ViewBounds, v83); /*0x4862c6*/
    v48 = (struct tagRECT *)BuildingClass::GetPlacementRect(v1, v90); /*0x4862f0*/
    House::GetStartCoords((House *)v1, v88); /*0x4862fb*/
    v44 = (struct tagRECT *)Rect::Union(v48, &v87, v59); /*0x486309*/
    v45 = (Bounds *)Rect::Union(v44, v52, v60); /*0x48631a*/
    v46 = Bounds::Subtract(v45, v53, v61); /*0x486321*/
    Cell::CreateCrater(*v46, v46[1], v46[2], v46[3], 0); /*0x486366*/
    House::AnnounceUpgrade((int)v1, -1); /*0x48636f*/
}
} // namespace gamemd

// 0x486920
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::CreateIdleAnim()
{
    int *v2; // esi
    AnimClass *v3; // ebp
    int inited; // eax
    int *v5; // [esp+Ch] [ebp-1Ch]
    int occupant; // [esp+10h] [ebp-18h]
    unsigned int v7[2]; // [esp+14h] [ebp-14h] BYREF
    int v8[3]; // [esp+1Ch] [ebp-Ch] BYREF

    if ( ((unsigned int *)this)[2] == 126 && (((unsigned int)(((unsigned int *)this)[0]) >> 16) & 0xFF) >= 0x30u && !((unsigned int)(((unsigned int *)this)[0]) & 0xFF) && (((unsigned int *)this)[0] & 0x20000) == 0 ) /*0x486956*/
    {
      v2 = (int *)*(unsigned int *)&this->flashing; /*0x48695c*/
      v5 = v2; /*0x486964*/
      if ( v2 ) /*0x486968*/
      {
        while ( 1 ) /*0x486976*/
        {
          if ( (*(int (__thiscall **)(int *))(*v2 + 456))(v2) <= 5 /*0x4869bd*/
            && (v2[5] & 1) != 0
            && !*(unsigned char *)((*(int (__thiscall **)(int *))(*v2 + 132))(v2) + 3217)
            && !(unsigned __int8)TechnoTypeClass::HasVoiceResponse(v2, 8) )
          {
            v3 = (AnimClass *)RA2_OPNEW(0x1C8u); /*0x4869d4*/
            if ( v3 ) /*0x4869db*/
            {
              occupant = ((unsigned int *)this)[0]; /*0x4869e2*/
              v7[0] = 128; /*0x4869fd*/
              v7[1] = 128; /*0x486a01*/
              inited = Isometric::InitTables((int)this, v7); /*0x486a0a*/
              v8[1] = IDA_SHIWORD(occupant) << 8; /*0x486a15*/
              v8[0] = (__int16)occupant << 8; /*0x486a23*/
              v8[2] = inited; /*0x486a2c*/
              AnimClass::ctor( /*0x486a42*/
                v3,
                *(void **)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 232),
                v8,
                0,
                1,
                (void *)0x600,
                0,
                0);
              v2 = v5; /*0x486a47*/
            }
            ((unsigned int *)this)[0] |= 0x20000u; /*0x486a4b*/
          }
          v5 = (int *)v2[12]; /*0x486a5a*/
          if ( !v5 ) /*0x486a5e*/
            break; /*0x486a5e*/
          v2 = (int *)v2[12]; /*0x486972*/
        }
      }
    }
}
} // namespace gamemd

// 0x486E70
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::CreatePlacementCrater()
{
    int *ScreenRect; // edi
    int *StartCoords; // eax
    int v4; // edx
    int v5; // esi
    int v6; // ecx
    int v7; // ebp
    int v8; // ebx
    int v9; // edi
    int v10; // eax
    int *PlacementRect; // eax
    int v12; // ecx
    int v13; // edx
    int v14; // eax
    int v15; // ecx
    int v16; // eax
    int v19; // [esp+14h] [ebp-3Ch]
    int v20; // [esp+1Ch] [ebp-34h]
    int v21[4]; // [esp+20h] [ebp-30h] BYREF
    int v22[4]; // [esp+30h] [ebp-20h] BYREF
    int v23[4]; // [esp+40h] [ebp-10h] BYREF

    ScreenRect = CellClass::GetScreenRect((CellClass *)this, v21); /*0x486e8b*/
    StartCoords = House::GetStartCoords((House *)this, v22); /*0x486e90*/
    if ( ScreenRect[2] <= 0 || ScreenRect[3] <= 0 ) /*0x486ea1*/
    {
      v5 = *StartCoords; /*0x486f19*/
      v7 = StartCoords[1]; /*0x486f1b*/
      v8 = StartCoords[2]; /*0x486f1e*/
      v9 = StartCoords[3]; /*0x486f21*/
    }
    else
    {
      v4 = StartCoords[2]; /*0x486ea3*/
      if ( v4 <= 0 || (v20 = StartCoords[3], v20 <= 0) ) /*0x486eb7*/
      {
        v5 = *ScreenRect; /*0x486f0c*/
        v7 = ScreenRect[1]; /*0x486f0e*/
        v8 = ScreenRect[2]; /*0x486f11*/
        v9 = ScreenRect[3]; /*0x486f14*/
      }
      else
      {
        v5 = *ScreenRect; /*0x486eb9*/
        v6 = *StartCoords; /*0x486ebb*/
        v7 = ScreenRect[1]; /*0x486ebd*/
        v8 = ScreenRect[2]; /*0x486ec0*/
        v9 = ScreenRect[3]; /*0x486ec3*/
        if ( v5 > *StartCoords ) /*0x486ec8*/
        {
          v8 += v5 - v6; /*0x486ecc*/
          v5 = *StartCoords; /*0x486ece*/
        }
        v10 = StartCoords[1]; /*0x486ed0*/
        if ( v7 > v10 ) /*0x486ed9*/
        {
          v9 += v7 - v10; /*0x486edd*/
          v7 = v10; /*0x486edf*/
        }
        if ( v8 + v5 < v6 + v4 ) /*0x486ee8*/
          v8 = v6 - v5 + v4 + 1; /*0x486ef0*/
        if ( v9 + v7 < v20 + v10 ) /*0x486f03*/
          v9 = v20 + v10 - v7 + 1; /*0x486f08*/
      }
    }
    PlacementRect = BuildingClass::GetPlacementRect(this, v23); /*0x486f2d*/
    if ( v8 <= 0 || v9 <= 0 ) /*0x486f38*/
    {
      v5 = *PlacementRect; /*0x486f9e*/
      v15 = PlacementRect[1]; /*0x486fa0*/
      v8 = PlacementRect[2]; /*0x486fa3*/
      v16 = PlacementRect[3]; /*0x486fa6*/
    }
    else
    {
      v12 = PlacementRect[2]; /*0x486f3a*/
      if ( v12 > 0 ) /*0x486f43*/
      {
        v19 = PlacementRect[3]; /*0x486f4a*/
        if ( v19 > 0 ) /*0x486f4e*/
        {
          v13 = *PlacementRect; /*0x486f50*/
          if ( v5 > *PlacementRect ) /*0x486f54*/
          {
            v8 += v5 - v13; /*0x486f5a*/
            v5 = *PlacementRect; /*0x486f5c*/
          }
          v14 = PlacementRect[1]; /*0x486f5e*/
          if ( v7 > v14 ) /*0x486f67*/
          {
            v9 += v7 - v14; /*0x486f6b*/
            v7 = v14; /*0x486f6d*/
          }
          if ( v8 + v5 < v13 + v12 ) /*0x486f76*/
            v8 = v13 - v5 + v12 + 1; /*0x486f7e*/
          if ( v9 + v7 < v14 + v19 ) /*0x486f91*/
            v9 = v14 + v19 - v7 + 1; /*0x486f96*/
        }
      }
      v15 = v7; /*0x486f98*/
      v16 = v9; /*0x486f9a*/
    }
    Cell::CreateCrater(v5 - DSurface_ViewBounds.field_0, v15 - (unsigned int)DSurface_ViewBounds.field_4, v8, v16, 0); /*0x486fd1*/
    return BuildingClass::AddUpgrade((int *)&stru_87F5F0.__pad_58[416], (int)&((unsigned int *)this)[0]); /*0x486fe8*/
}
} // namespace gamemd

// 0x490B90
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::GetSHPFrame() const
{
    if ( !((unsigned int *)this)[0] ) /*0x490b93*/
      ConvertClass::InitTables((ConvertClass *)this); /*0x490b9a*/
    if ( (a2 & 0x10) != 0 ) /*0x490ba5*/
    {
      if ( (a2 & 0x4000) != 0 ) /*0x490baa*/
      {
        if ( (a2 & 0x800) != 0 ) /*0x490baf*/
          return ((unsigned int *)this)[0]; /*0x490bb1*/
        else
          return *(unsigned int *)&this->u32_58; /*0x490bbb*/
      }
      else if ( (a2 & dword_81DC24) != 0 ) /*0x490bc8*/
      {
        if ( (a2 & 0x800) != 0 ) /*0x490bcd*/
          return *(unsigned int *)&this->location; /*0x490bcf*/
        else
          return (int)((unsigned int *)this)[0]; /*0x490bd9*/
      }
      else if ( (a2 & 0x800) != 0 ) /*0x490be3*/
      {
        return ((unsigned int *)this)[0]; /*0x490be5*/
      }
      else
      {
        return ((unsigned int *)this)[0]; /*0x490bec*/
      }
    }
    switch ( a2 & 6 ) /*0x490bfb*/
    {
      case 2: /*0x490bfb*/
        if ( (a2 & 0x4000) != 0 ) /*0x490de4*/
        {
          if ( (a2 & 0x800) != 0 ) /*0x490de9*/
            return *(unsigned int *)&this->q0CC; /*0x490deb*/
          else
            return ((unsigned int *)this)[0]; /*0x490df5*/
        }
        else if ( (a2 & dword_81DC24) != 0 ) /*0x490e02*/
        {
          if ( (a2 & 8) != 0 ) /*0x490e06*/
          {
            if ( (a2 & 0x800) != 0 ) /*0x490e0b*/
              return ((unsigned int *)this)[0]; /*0x490e0d*/
            else
              return *(unsigned int *)&this->q048; /*0x490e17*/
          }
          else if ( (a2 & 0x800) != 0 ) /*0x490e21*/
          {
            return (int)((unsigned int *)this)[0]; /*0x490e23*/
          }
          else
          {
            return *(unsigned int *)&this->ambientSoundController; /*0x490e2d*/
          }
        }
        else if ( (a2 & 0x800) != 0 ) /*0x490e37*/
        {
          return ((unsigned int *)this)[0]; /*0x490e39*/
        }
        else
        {
          return (int)((unsigned int *)this)[0]; /*0x490e40*/
        }
      case 4: /*0x490bfb*/
        if ( (a2 & 0x4000) != 0 ) /*0x490d5c*/
        {
          if ( (a2 & 0x800) != 0 ) /*0x490d61*/
            return *(unsigned int *)&this->missionTimer; /*0x490d63*/
          else
            return *(unsigned int *)&this->q060; /*0x490d6d*/
        }
        else if ( (a2 & dword_81DC24) != 0 ) /*0x490d7a*/
        {
          if ( (a2 & 8) != 0 ) /*0x490d7e*/
          {
            if ( (a2 & 0x800) != 0 ) /*0x490d83*/
              return ((unsigned int *)this)[0]; /*0x490d85*/
            else
              return *(unsigned int *)&this->q044; /*0x490d8f*/
          }
          else if ( (a2 & 0x800) != 0 ) /*0x490d99*/
          {
            return *(unsigned int *)&this->q0A4; /*0x490d9b*/
          }
          else
          {
            return (int)((unsigned int *)this)[0]; /*0x490da5*/
          }
        }
        else if ( (a2 & 0x800) != 0 ) /*0x490daf*/
        {
          return ((unsigned int *)this)[0]; /*0x490db1*/
        }
        else if ( (a2 & 0x10000) != 0 ) /*0x490dbd*/
        {
          return *(unsigned int *)&((unsigned int *)this)[0]; /*0x490dbf*/
        }
        else if ( (a2 & 0x20000) != 0 ) /*0x490dce*/
        {
          return *(unsigned int *)&((unsigned int *)this)[0]; /*0x490dd0*/
        }
        else
        {
          return ((unsigned int *)this)[0]; /*0x490dda*/
        }
      case 6: /*0x490bfb*/
        if ( (a2 & 0x4000) != 0 ) /*0x490cf6*/
        {
          if ( (a2 & 0x800) != 0 ) /*0x490cfb*/
            return ((unsigned int *)this)[0]; /*0x490cfd*/
          else
            return *(unsigned int *)&this->q05C; /*0x490d07*/
        }
        else if ( (a2 & dword_81DC24) != 0 ) /*0x490d14*/
        {
          if ( (a2 & 8) != 0 ) /*0x490d18*/
          {
            if ( (a2 & 0x800) != 0 ) /*0x490d1d*/
              return ((unsigned int *)this)[0]; /*0x490d1f*/
            else
              return *(unsigned int *)&this->q040; /*0x490d29*/
          }
          else if ( (a2 & 0x800) != 0 ) /*0x490d33*/
          {
            return *(unsigned int *)&this->q0A0; /*0x490d35*/
          }
          else
          {
            return (int)((unsigned int *)this)[0]; /*0x490d3f*/
          }
        }
        else if ( (a2 & 0x800) != 0 ) /*0x490d49*/
        {
          return *(unsigned int *)&((unsigned int *)this)[0]; /*0x490d4b*/
        }
        else
        {
          return ((unsigned int *)this)[0]; /*0x490d52*/
        }
      default:
        if ( (a2 & 1) != 0 ) /*0x490c15*/
        {
          if ( (a2 & 0x4000) != 0 ) /*0x490c1a*/
            return *(unsigned int *)&this->q054; /*0x490c1c*/
          if ( (a2 & dword_81DC24) != 0 ) /*0x490c29*/
            return ((unsigned int *)this)[0]; /*0x490c2b*/
          return ((unsigned int *)this)[0]; /*0x490c20*/
        }
        if ( (a2 & 0x20) != 0 ) /*0x490c3b*/
        {
          if ( (a2 & 0x4000) != 0 ) /*0x490c40*/
          {
            if ( (a2 & 0x800) != 0 ) /*0x490c45*/
              return ((unsigned int *)this)[0]; /*0x490c4e*/
            return *(unsigned int *)&this->customSound_controller; /*0x490c93*/
          }
          if ( (a2 & dword_81DC24) != 0 ) /*0x490c57*/
          {
            if ( (a2 & 0x800) != 0 ) /*0x490c5c*/
              return *(unsigned int *)&((unsigned int *)this)[0]; /*0x490c65*/
            return ((unsigned int *)this)[0]; /*0x490cb1*/
          }
          if ( (a2 & 0x800) != 0 ) /*0x490c6b*/
            return *(unsigned int *)&((unsigned int *)this)[0]; /*0x490c6d*/
          else
            return (int)((unsigned int *)this)[0]; /*0x490c74*/
        }
        else
        {
          if ( (a2 & 0x4000) != 0 ) /*0x490c7e*/
          {
            if ( (a2 & 0x800) != 0 ) /*0x490c83*/
              return ((unsigned int *)this)[0]; /*0x490c8c*/
            return *(unsigned int *)&this->missionStatus; /*0x490c83*/
          }
          if ( (a2 & dword_81DC24) != 0 ) /*0x490c9c*/
          {
            if ( (a2 & 0x800) != 0 ) /*0x490ca1*/
              return *(unsigned int *)&((unsigned int *)this)[0]; /*0x490caa*/
            return ((unsigned int *)this)[0]; /*0x490ca1*/
          }
          if ( (a2 & 0x8000) == 0 ) /*0x490cb7*/
          {
            if ( (a2 & 0x100) != 0 ) /*0x490cc6*/
            {
              return *(unsigned int *)&((unsigned int *)this)[0]; /*0x490cc8*/
            }
            else if ( (a2 & 0x40) != 0 ) /*0x490cd4*/
            {
              return (int)((unsigned int *)this)[0]; /*0x490cd6*/
            }
            else if ( (a2 & 0x800) != 0 ) /*0x490ce3*/
            {
              return ((unsigned int *)this)[0]; /*0x490ce5*/
            }
            else
            {
              return (int)((unsigned int *)this)[0]; /*0x490cec*/
            }
          }
          else
          {
            return *(unsigned int *)&((unsigned int *)this)[0]; /*0x490cb9*/
          }
        }
    }
}
} // namespace gamemd

// 0x4A17C0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::BeginCrumblingTimer()
{
    CellClass *p_vtable3; // edi
    void *vtable0; // edx
    char *vtable2; // eax
    char *v6; // eax
    void *v7; // eax
    void *v8; // edi
    void *v9; // eax
    void *v10; // edx
    int v12; // [esp+Ch] [ebp-18h] BYREF
    double v13; // [esp+10h] [ebp-14h]
    double v14; // [esp+18h] [ebp-Ch]
    short *v15; // [esp+28h] [ebp+4h]

    p_vtable3 = (CellClass *)&((unsigned int *)this)[0]; /*0x4a17cc*/
    if ( ((unsigned int *)this)[0] != (void *)g_DDrawSurfaceManager.description[45] ) /*0x4a17d6*/
    {
      CellClass::DestroyOverlay(p_vtable3); /*0x4a17e7*/
      p_vtable3->mapCoords[0] = g_DDrawSurfaceManager.description[45]; /*0x4a17f2*/
      vtable0 = this->TechnoClass; /*0x4a17f4*/
      if ( this->TechnoClass != (void *)-1 ) /*0x4a17f9*/
      {
        vtable2 = (char *)((unsigned int *)this)[0]; /*0x4a17fb*/
        if ( *(unsigned int * *)((char *)&stru_A8EB00 + 644) - (int)vtable0 >= (int)vtable2 ) /*0x4a180d*/
          v6 = 0; /*0x4a1813*/
        else
          v6 = &vtable2[-(*(unsigned int * *)((char *)&stru_A8EB00 + 644) - (unsigned int)vtable0)]; /*0x4a180f*/
        ((unsigned int *)this)[0] = v6; /*0x4a1815*/
        this->TechnoClass = (void *)-1; /*0x4a1818*/
      }
    }
    v12 = *(unsigned int *)a2; /*0x4a1828*/
    if ( !BuildingClass::CreateCraterAtCell((BuildingClass *)&v12) ) /*0x4a182c*/
      return 0; /*0x4a18e3*/
    v7 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2); /*0x4a183f*/
    Tactical::AddCellToDrawList((int *)g_TacticalClass_Instance, (int)v7); /*0x4a184b*/
    p_vtable3->mapCoords[0] = v12; /*0x4a1859*/
    v14 = *(double *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5752) * 1800.0; /*0x4a187a*/
    v13 = *(double *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5752) * 450.0; /*0x4a188a*/
    v15 = (short *)Random_Range((void *)&dword_A8B230[14].NeedsSaveOrLink, 0, 2147483646); /*0x4a189b*/
    v8 = *(void ** *)((char *)&stru_A8EB00 + 644); /*0x4a189f*/
    IDA_LOWORD(v9) = Math::RoundToInt((v14 - v13) * ((double)(int)v15 * 4.656612877414201e-10) + v13); /*0x4a18b5*/
    v10 = (void *)IDA_HIDWORD(v14); /*0x4a18ba*/
    this->TechnoClass = v8; /*0x4a18c0*/
    ((unsigned int *)this)[0] = v10; /*0x4a18c2*/
    ((unsigned int *)this)[0] = v9; /*0x4a18c5*/
    if ( this->TechnoClass == (void *)-1 ) /*0x4a18cd*/
      this->TechnoClass = *(void ** *)((char *)&stru_A8EB00 + 644); /*0x4a18d4*/
    return 1; /*0x4a18d6*/
}
} // namespace gamemd

// 0x4A18F0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::CreateCraterAtCell(int cell_x, int cell_y)
{
    int v1; // ebp
    BuildingClass *v3; // edi
    ObjectClass *v4; // eax
    ObjectClass *v5; // eax
    int *PlacementRect; // esi
    int *StartCoords; // eax
    int v8; // ebp
    int v9; // ecx
    int v10; // edi
    int v11; // edx
    int v12; // ebx
    int v13; // eax
    int v14; // esi
    int v15; // edi
    int v17; // [esp+10h] [ebp-30h]
    int v18; // [esp+1Ch] [ebp-24h]
    int v19[4]; // [esp+20h] [ebp-20h] BYREF
    unsigned int v20[4]; // [esp+30h] [ebp-10h] BYREF

    v1 = dword_A8E7AC; /*0x4a18f5*/
    v17 = dword_A8E7AC; /*0x4a1907*/
    dword_A8E7AC = 0; /*0x4a190b*/
    if ( (unsigned __int8)LayerClass::IsWithinUsableArea((LayerClass *)&dword_87F7E8, (short *)this, 1) /*0x4a1933*/
      && (v3 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (short *)this),
          v3->ambientSoundController[2] == -1) )
    {
      if ( *((unsigned int *)CellCoord::To_CellObj((CellCoord *)&dword_87F7E8, (short *)this) + 59) == 2 ) /*0x4a1952*/
      {
        v4 = (ObjectClass *)RA2_OPNEW(0xB0u); /*0x4a1954*/
        if ( v4 ) /*0x4a195e*/
          ObjectClass::SpawnAtCell(v4, dword_8871E0->GUIOpenSound, (short *)this, -1); /*0x4a196f*/
      }
      else
      {
        v5 = (ObjectClass *)RA2_OPNEW(0xB0u); /*0x4a1971*/
        if ( v5 ) /*0x4a197b*/
          ObjectClass::SpawnAtCell(v5, dword_8871E0->GUIBuildSound, (short *)this, -1); /*0x4a198f*/
      }
      PlacementRect = BuildingClass::GetPlacementRect(v3, v19); /*0x4a19a4*/
      StartCoords = House::GetStartCoords((House *)v3, v20); /*0x4a19a9*/
      if ( StartCoords[2] <= 0 || StartCoords[3] <= 0 ) /*0x4a19be*/
      {
        v9 = *PlacementRect; /*0x4a1a45*/
        v11 = PlacementRect[1]; /*0x4a1a47*/
        v15 = PlacementRect[2]; /*0x4a1a4a*/
        v13 = PlacementRect[3]; /*0x4a1a4d*/
      }
      else
      {
        v8 = PlacementRect[2]; /*0x4a19c4*/
        if ( v8 <= 0 || (v18 = PlacementRect[3], v18 <= 0) ) /*0x4a19d8*/
        {
          v9 = *StartCoords; /*0x4a1a34*/
          v11 = StartCoords[1]; /*0x4a1a36*/
          v15 = StartCoords[2]; /*0x4a1a39*/
          v13 = StartCoords[3]; /*0x4a1a3c*/
          v1 = v17; /*0x4a1a3f*/
        }
        else
        {
          v9 = *StartCoords; /*0x4a19da*/
          v10 = *PlacementRect; /*0x4a19dc*/
          v11 = StartCoords[1]; /*0x4a19de*/
          v12 = StartCoords[2]; /*0x4a19e1*/
          v13 = StartCoords[3]; /*0x4a19e4*/
          if ( v9 > *PlacementRect ) /*0x4a19e9*/
          {
            v12 += v9 - v10; /*0x4a19ed*/
            v9 = *PlacementRect; /*0x4a19ef*/
          }
          v14 = PlacementRect[1]; /*0x4a19f1*/
          if ( v11 > v14 ) /*0x4a19fa*/
          {
            v13 += v11 - v14; /*0x4a19fe*/
            v11 = v14; /*0x4a1a00*/
          }
          if ( v12 + v9 < v10 + v8 ) /*0x4a1a0a*/
            v12 = v10 - v9 + v8 + 1; /*0x4a1a12*/
          if ( v13 + v11 < v18 + v14 ) /*0x4a1a25*/
            v13 = v18 + v14 - v11 + 1; /*0x4a1a2a*/
          v1 = v17; /*0x4a1a2c*/
          v15 = v12; /*0x4a1a30*/
        }
      }
      Cell::CreateCrater(v9 - DSurface_ViewBounds.field_0, v11 - dword_886FA4, v15, v13, 0); /*0x4a1a78*/
      dword_A8E7AC = v1; /*0x4a1a7d*/
      return 1; /*0x4a1a83*/
    }
    else
    {
      dword_A8E7AC = v1; /*0x4a1a8e*/
      return 0; /*0x4a1a96*/
    }
}
} // namespace gamemd

// 0x4AC660
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::TogglePower()
{
    int result; // eax
    char v4; // bl
    int (__thiscall **vtable0)(BuildingClass *); // edx
    MapClass *v6; // [esp+0h] [ebp-8h]

    (result) = ((result) & ~0xFF) | ((unsigned int)(*((unsigned char *)this + 4529)) & 0xFF) /*0x4ac668*/
    v4 = result; /*0x4ac671*/
    if ( a2 == -1 ) /*0x4ac673*/
    {
      v4 = (unsigned char)result == 0; /*0x4ac688*/
    }
    else if ( a2 ) /*0x4ac677*/
    {
      if ( a2 == 1 ) /*0x4ac67c*/
        v4 = 1; /*0x4ac67e*/
    }
    else
    {
      v4 = 0; /*0x4ac682*/
    }
    if ( v4 != (unsigned char)result ) /*0x4ac68d*/
    {
      result = *((unsigned int *)this + 1130); /*0x4ac68f*/
      if ( !result ) /*0x4ac697*/
      {
        (*((void (__thiscall **)(BuildingClass *, unsigned int, unsigned int))this->vtable1 + 18))(this, 0, 0); /*0x4ac6a1*/
        *((unsigned char *)this + 4528) = 0; /*0x4ac6a6*/
        *((unsigned char *)this + 4530) = 0; /*0x4ac6ad*/
        *((unsigned char *)this + 4531) = 0; /*0x4ac6b4*/
        *((unsigned char *)this + 4532) = 0; /*0x4ac6bb*/
        if ( v4 && *(int *)&(&dword_A83D4C)[1].__pad_38[24] > 0 ) /*0x4ac6d2*/
        {
          *((unsigned char *)this + 4529) = 1; /*0x4ac6d4*/
          return MapClass::UnselectAll_ClearLimboLaunchers(v6); /*0x4ac6db*/
        }
        else
        {
          vtable0 = (int (__thiscall **)(BuildingClass *))this->TechnoClass; /*0x4ac6e5*/
          *((unsigned char *)this + 4529) = 0; /*0x4ac6e9*/
          return vtable0[20](this); /*0x4ac6f0*/
        }
      }
    }
    return result; /*0x4ac6e0*/
}
} // namespace gamemd

// 0x4DB9B0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::vt_entry_504()
{
    int Member; // eax
    int v3; // esi
    int v4; // ebx

    if ( this->movementDestination || ((unsigned int *)this)[0] ) /*0x4db9bd*/
      return 0; /*0x4dba1f*/
    Member = Team::GetMember((Team *)this, 0); /*0x4db9cb*/
    v3 = Member; /*0x4db9d0*/
    v4 = 0; /*0x4db9d2*/
    if ( Member ) /*0x4db9d6*/
    {
      Member = (*(int (__thiscall **)(int))(*(unsigned int *)Member + 44))(Member); /*0x4db9dc*/
      if ( Member == 6 ) /*0x4db9e2*/
        v4 = v3; /*0x4db9e4*/
    }
    (Member) = ((Member) & ~0xFF) | ((unsigned int)(((unsigned int *)this)[0] == 7 && v4 && *(unsigned char *)(*(unsigned int *)(v4 + 1312) + 5801)) & 0xFF) /*0x4dba03*/
    (Member) = ((Member) & ~0xFF) | ((unsigned int)((unsigned char)Member == 0) & 0xFF) /*0x4dba0f*/
    return (*((int (__thiscall **)(FootClass *, unsigned int, int))this->vtable1 + 289))(this, 0, Member); /*0x4dba1d*/
}
} // namespace gamemd

// 0x4DD890
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int* BuildingClass::Validate(int* a2, int a3)
{
    unsigned int *v4; // eax
    int v6; // ebx
    int v7; // ebp
    int i; // esi
    short v9[2]; // [esp+4h] [ebp-18h] BYREF
    int v10; // [esp+8h] [ebp-14h]
    short v11[2]; // [esp+Ch] [ebp-10h] BYREF
    char v12[12]; // [esp+10h] [ebp-Ch] BYREF

    v10 = g_FootClass_Pool; /*0x4dd89b*/
    v4 = (unsigned int *)(*((int (__thiscall **)(BuildingClass *, char *))this->vtable1 + 18))(this, v12); /*0x4dd8a6*/
    v9[0] = *v4 / 256; /*0x4dd8bd*/
    v9[1] = v4[1] / 256; /*0x4dd8d5*/
    *(unsigned int *)v11 = *(unsigned int *)v9; /*0x4dd8de*/
    if ( (unsigned __int8)BuildingClass::ValidateCell(this, v11, 0, 0) ) /*0x4dd8e5*/
    {
      *a2 = *(unsigned int *)v11; /*0x4dd8f7*/
      return a2; /*0x4dd8ee*/
    }
    else
    {
      v6 = 1; /*0x4dd904*/
      if ( a3 > 1 ) /*0x4dd90b*/
      {
        v7 = -1; /*0x4dd913*/
        do /*0x4dd9d5*/
        {
          for ( i = v7; i <= v6; ++i ) /*0x4dd91a*/
          {
            *(unsigned int *)v9 = *(unsigned int *)v11; /*0x4dd92d*/
            if ( (unsigned __int8)BuildingClass::ValidateCell(this, v9, i, v7) ) /*0x4dd931*/
              v10 = *(unsigned int *)v9; /*0x4dd93e*/
            *(unsigned int *)v9 = *(unsigned int *)v11; /*0x4dd94f*/
            if ( (unsigned __int8)BuildingClass::ValidateCell(this, v9, i, v6) ) /*0x4dd953*/
              v10 = *(unsigned int *)v9; /*0x4dd960*/
            *(unsigned int *)v9 = *(unsigned int *)v11; /*0x4dd971*/
            if ( (unsigned __int8)BuildingClass::ValidateCell(this, v9, v7, i) ) /*0x4dd975*/
              v10 = *(unsigned int *)v9; /*0x4dd982*/
            *(unsigned int *)v9 = *(unsigned int *)v11; /*0x4dd993*/
            if ( (unsigned __int8)BuildingClass::ValidateCell(this, v9, v6, i) ) /*0x4dd997*/
              v10 = *(unsigned int *)v9; /*0x4dd9a4*/
          }
          if ( v10 != g_FootClass_Pool ) /*0x4dd9bd*/
            break; /*0x4dd9bd*/
          ++v6; /*0x4dd9d1*/
          --v7; /*0x4dd9d2*/
        }
        while ( v6 < a3 ); /*0x4dd9d5*/
      }
      *a2 = v10; /*0x4dd9e7*/
      return a2; /*0x4dd9dd*/
    }
}
} // namespace gamemd

// 0x4DD9F0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::ValidateCell(int cell_x, int cell_y)
{
    short *v4; // edi
    short v6; // cx
    int result; // eax
    short v8; // cx
    int v9; // eax
    int GroundHeight; // eax
    int v11; // ecx
    unsigned int *v12; // eax
    int (__thiscall **vtable0)(BuildingClass *); // eax
    int v14; // eax
    int v15; // eax
    unsigned int *v16; // edi
    unsigned int v17[3]; // [esp+8h] [ebp-18h] BYREF
    unsigned int v18[3]; // [esp+14h] [ebp-Ch] BYREF

    v4 = a2; /*0x4dd9f5*/
    v6 = a2[1]; /*0x4dda00*/
    (a2) = ((a2) & ~0xFFFF) | ((unsigned int)(a3 + *a2) & 0xFFFF) /*0x4dda0e*/
    (a2) = ((a2) & ~(0xFFFFULL << 16)) | (((unsigned __int64)(unsigned int)(a4 + v6) & 0xFFFF) << 16) /*0x4dda13*/
    result = LayerClass::IsWithinUsableArea((LayerClass *)&stru_87F5F0.__pad_58[416], (short *)&a2, 1); /*0x4dda2a*/
    if ( !(unsigned char)result ) /*0x4dda31*/
      goto LABEL_10; /*0x4dda31*/
    v8 = (__int16)a2; /*0x4dda37*/
    *(unsigned int *)v4 = a2; /*0x4dda3b*/
    if ( !*(unsigned int *)&dword_A8B238 ) /*0x4dda44*/
    {
      if ( ((unsigned int *)this)[0] ) /*0x4dda46*/
      {
        v9 = (v4[1] << 8) + 128; /*0x4dda67*/
        v17[0] = (v8 << 8) + 128; /*0x4dda72*/
        v17[1] = v9; /*0x4dda76*/
        v17[2] = 0; /*0x4dda7a*/
        GroundHeight = Cell::GetGroundHeight(v17); /*0x4dda82*/
        v11 = *v4 << 8; /*0x4dda91*/
        v18[1] = (v4[1] << 8) + 128; /*0x4ddaa0*/
        v18[0] = v11 + 128; /*0x4ddaa8*/
        v18[2] = GroundHeight; /*0x4ddab2*/
        result = Cell::IsPassable(v18); /*0x4ddab6*/
        if ( (unsigned char)result ) /*0x4ddabd*/
          goto LABEL_10; /*0x4ddabd*/
      }
    }
    v12 = (unsigned int *)(*((int (__thiscall **)(BuildingClass *, unsigned int *, unsigned int))this->vtable1 + 19))(this, v18, 0); /*0x4ddace*/
    (a3) = ((a3) & ~0xFFFF) | ((unsigned int)(*v12 / 256) & 0xFFFF) /*0x4ddae7*/
    (a3) = ((a3) & ~(0xFFFFULL << 16)) | (((unsigned __int64)(unsigned int)(v12[1] / 256) & 0xFFFF) << 16) /*0x4ddafd*/
    vtable0 = (int (__thiscall **)(BuildingClass *))this->TechnoClass; /*0x4ddb06*/
    a4 = a3; /*0x4ddb08*/
    v14 = vtable0[47](this); /*0x4ddb0c*/
    v15 = (*((int (__thiscall **)(BuildingClass *, int))this->vtable1 + 33))(this, v14); /*0x4ddb17*/
    if ( !(/*0x4ddb2f*/
            (MapSeed *)&stru_87F5F0.__pad_58[416])->CheckTileMatch((short *)&a4, v4, *(unsigned int *)(v15 + 1460), 0, 0, 0) )
      goto LABEL_10; /*0x4ddb2f*/
    v16 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v4); /*0x4ddb49*/
    result = (*((int (__thiscall **)(BuildingClass *, unsigned int *, int, int, unsigned int, int))this->vtable1 + 107))( /*0x4ddb52*/
               this,
               v16,
               -1,
               -1,
               0,
               1);
    if ( !result && v16[59] == 11 && *((unsigned char *)v16 + 286) >= 0x30u ) /*0x4ddb6c*/
      (result) = ((result) & ~0xFF) | ((unsigned int)(1) & 0xFF) /*0x4ddb6f*/
    else
  LABEL_10:
      (result) = ((result) & ~0xFF) | ((unsigned int)(0) & 0xFF) /*0x4ddb79*/
    return result; /*0x4ddb6e*/
}
} // namespace gamemd

// 0x4DE750
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::vt_entry_4D4() {
    return false; /*0x4de750*/
}
} // namespace gamemd

// 0x4DE760
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::vt_entry_4D8() {
    return false; /*0x4de760*/
}
} // namespace gamemd

// 0x4DEE80
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::ValidatePlacementEx()
{
    int v6; // ebp
    int v7; // edi
    unsigned int *v8; // eax
    int v9; // eax
    int v10; // eax
    int v11; // eax
    int *v13; // [esp+18h] [ebp-28h]
    short v14; // [esp+1Ch] [ebp-24h] BYREF
    short v15; // [esp+20h] [ebp-20h] BYREF
    int bunkersCount; // [esp+24h] [ebp-1Ch]
    char v17; // [esp+28h] [ebp-18h] BYREF
    char v18; // [esp+30h] [ebp-10h] BYREF

    v13 = 0; /*0x4deea1*/
    if ( !((DynamicVector *)((unsigned int *)this)[0]->ownedBuildingTypes)->GetOrGrow(*(unsigned int *)(a2 + 3576)) ) /*0x4deea5*/
      return 0; /*0x4deea5*/
    v6 = 0; /*0x4deeb8*/
    bunkersCount = ((unsigned int *)this)[0]->bunkersCount; /*0x4deebf*/
    if ( bunkersCount <= 0 ) /*0x4deec3*/
      return 0; /*0x4df02f*/
    do /*0x4df01b*/
    {
      v7 = *(unsigned int *)(((unsigned int *)this)[0]->absorbersCount + 4 * v6); /*0x4deed7*/
      if ( v7 /*0x4def0c*/
        && !*(unsigned char *)(v7 + 129)
        && *(unsigned int *)(v7 + 1312) == a2
        && (a4 == (int *)1 || (unsigned __int8)Array::ContainsValue((Array *)v7, (int)this)) )
      {
        if ( (*((int (__thiscall **)(FootClass *))this->vtable1 + 11))(this) == 2 /*0x4defd6*/
          || (v8 = (unsigned int *)(*(int (__thiscall **)(int))(*(unsigned int *)v7 + 72))(v7),
              IDA_LOWORD(a4) = *v8 / 256,
              IDA_HIWORD(a4) = v8[1] / 256,
              v13 = a4,
              (*((void (__thiscall **)(FootClass *))this->vtable1 + 19))(this),
              v9 = (*((int (__thiscall **)(FootClass *, unsigned int, unsigned int, unsigned int))this->vtable1 + 47))(this, 0, 0, 0),
              v10 = (*((int (__thiscall **)(FootClass *, int))this->vtable1 + 33))(this, v9),
              ((MapSeed *)&stru_87F5F0.__pad_58[416])->CheckTileMatch(&v15, &v14, *(unsigned int *)(v10 + 1460), (char)&v18, 0, (char)&v17)) )
        {
          if ( (*((int (__thiscall **)(FootClass *, int, int))this->vtable1 + 158))(this, 15, v7) == 1 ) /*0x4defef*/
          {
            v11 = BuildingClass::SquaredDistanceTo((BuildingClass *)this, (int *)v7); /*0x4deff4*/
            if ( *a5 == -1 || v11 < *a5 || *(unsigned char *)(v7 + 979) ) /*0x4df004*/
            {
              v13 = (int *)v7; /*0x4df00e*/
              *a5 = v11; /*0x4df012*/
            }
          }
        }
      }
      ++v6; /*0x4df018*/
    }
    while ( v6 < bunkersCount ); /*0x4df01b*/
    return v13; /*0x4df026*/
}
} // namespace gamemd

// 0x4FD150
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
CoordStruct* BuildingClass::CalcExitCoords(CoordStruct* out, int dir) const
{
    double v1; // st7
    int v3; // ebx
    int v4; // ecx
    int result; // eax
    int spawnStatus; // edx
    int v7; // ebp
    int v8; // ecx
    unsigned int **v9; // esi
    int v10; // kr08_4
    int v11; // edx
    int v12; // edx
    int v13; // eax
    int v14; // ecx
    int v15; // eax
    int v16; // esi
    int v17; // ebp
    int v18; // ebx
    void *v19; // eax
    int *v20; // eax
    unsigned int *v21; // eax
    int v22; // esi
    int v23; // ebx
    int v24; // eax
    int v25; // ecx
    int v26; // eax
    int v27; // ebx
    int v28; // esi
    unsigned int *v29; // eax
    int Path; // eax
    int v31; // ebp
    char *v32; // ebx
    int v33; // [esp+2Ch] [ebp-40h]
    int v34; // [esp+30h] [ebp-3Ch]
    int v35; // [esp+30h] [ebp-3Ch]
    unsigned int v36[2]; // [esp+34h] [ebp-38h] BYREF
    int i; // [esp+3Ch] [ebp-30h] BYREF
    short v38[2]; // [esp+40h] [ebp-2Ch] BYREF
    int v39; // [esp+44h] [ebp-28h] BYREF
    int v40; // [esp+48h] [ebp-24h] BYREF
    int v41; // [esp+4Ch] [ebp-20h]
    int v42; // [esp+50h] [ebp-1Ch]
    unsigned char v43[12]; // [esp+54h] [ebp-18h] BYREF
    unsigned char v44[12]; // [esp+60h] [ebp-Ch] BYREF

    v3 = 0; /*0x4fd164*/
    v4 = 5; /*0x4fd166*/
    *((unsigned int *)this + 5412) = *(unsigned int * *)((char *)&stru_A8EB00 + 1176); /*0x4fd16b*/
    *((unsigned int *)this + 5414) = 0; /*0x4fd171*/
    result = (int)this + 21664; /*0x4fd177*/
    do /*0x4fd189*/
    {
      *(unsigned int *)(result - 4) = 0; /*0x4fd17d*/
      *(unsigned int *)result = 0; /*0x4fd180*/
      *(unsigned int *)(result + 4) = 0; /*0x4fd182*/
      result += 12; /*0x4fd185*/
      --v4; /*0x4fd188*/
    }
    while ( v4 ); /*0x4fd189*/
    if ( ((unsigned int *)this)[1] > 0 ) /*0x4fd191*/
    {
      spawnStatus = ((unsigned int *)this)[0]; /*0x4fd197*/
      v7 = 0; /*0x4fd19a*/
      v8 = 0; /*0x4fd19c*/
      result = 0; /*0x4fd19e*/
      v33 = 0; /*0x4fd1a2*/
      i = spawnStatus; /*0x4fd1a6*/
      v34 = 0; /*0x4fd1aa*/
      if ( spawnStatus <= 0 ) /*0x4fd1ae*/
        goto LABEL_40; /*0x4fd1ae*/
      do /*0x4fd242*/
      {
        v9 = *(unsigned int ***)(((unsigned int *)this)[0] + 4 * result); /*0x4fd1b7*/
        if ( v9 && !*((unsigned char *)v9 + 129) && (int)v9[27] > 0 ) /*0x4fd1cb*/
        {
          v10 = (*(int (__thiscall **)(unsigned int *, BuildingClass *))(*v9[328] + 132))(v9[328], this); /*0x4fd1dc*/
          v11 = v10 / 1000 + 1; /*0x4fd1ed*/
          if ( v11 > 0 ) /*0x4fd1f3*/
          {
            v36[0] = v10 / 1000 + 1; /*0x4fd1f9*/
            v33 += v11; /*0x4fd1ff*/
            do /*0x4fd22d*/
            {
              v7 += *(unsigned int *)((int (__thiscall *)(unsigned int **, int *))(*v9)[18])(v9, &v40); /*0x4fd215*/
              v3 += *(unsigned int *)(((int (__thiscall *)(unsigned int **, unsigned char *))(*v9)[18])(v9, v43) + 4); /*0x4fd226*/
              --v36[0]; /*0x4fd229*/
            }
            while ( v36[0] ); /*0x4fd22d*/
          }
          v8 = v33; /*0x4fd22f*/
          result = v34; /*0x4fd233*/
          spawnStatus = i; /*0x4fd237*/
        }
        v34 = ++result; /*0x4fd23e*/
      }
      while ( result < spawnStatus ); /*0x4fd242*/
      if ( v8 > 0 ) /*0x4fd24a*/
      {
        (v36[0]) = ((v36[0]) & ~0xFFFF) | ((unsigned int)(v7 / v8 / 256) & 0xFFFF) /*0x4fd270*/
        (v36[0]) = ((v36[0]) & ~(0xFFFFULL << 16)) | (((unsigned __int64)(unsigned int)(v3 / v8 / 256) & 0xFFFF) << 16) /*0x4fd285*/
        i = v36[0]; /*0x4fd297*/
        v36[0] = 0; /*0x4fd2a6*/
        result = *LayerClass::Pathfinding_Find( /*0x4fd2c5*/
                    &stru_87F5F0.__pad_58[416],
                    (int)&i,
                    &v39,
                    (short *)&i,
                    0,
                    -1,
                    0,
                    0,
                    1,
                    1,
                    0,
                    0,
                    0,
                    1,
                    (short *)v36,
                    0,
                    0);
        v8 = v33; /*0x4fd2c7*/
        *((unsigned int *)this + 5412) = result; /*0x4fd2cb*/
      }
      if ( v8 <= 1 ) /*0x4fd2d4*/
      {
  LABEL_40:
        *((unsigned int *)this + 5414) = 512; /*0x4fd4ee*/
      }
      else
      {
        v12 = ((unsigned int *)this)[0]; /*0x4fd2da*/
        v13 = 0; /*0x4fd2dd*/
        v35 = 0; /*0x4fd2e1*/
        v36[0] = v12; /*0x4fd2e5*/
        i = 0; /*0x4fd2e9*/
        if ( v12 > 0 ) /*0x4fd2ed*/
        {
          do /*0x4fd40c*/
          {
            v39 = *(unsigned int *)(((unsigned int *)this)[0] + 4 * v13); /*0x4fd2fb*/
            v14 = v39; /*0x4fd2f6*/
            if ( v39 && !*(unsigned char *)(v39 + 129) && *(int *)(v39 + 108) > 0 ) /*0x4fd318*/
            {
              if ( *((unsigned short *)this + 10826) == *(unsigned short * *)((char *)&stru_A8EB00 + 1176) /*0x4fd33b*/
                && *((unsigned short *)this + 10827) == *(unsigned short *)&((unsigned int *)&stru_A8EB00)[950] )
              {
                v15 = *((unsigned int *)this + 5412); /*0x4fd33d*/
              }
              else
              {
                v15 = *((unsigned int *)this + 5413); /*0x4fd345*/
              }
              v36[1] = v15; /*0x4fd34e*/
              *(unsigned int *)v38 = v15; /*0x4fd352*/
              if ( v15 == *(unsigned int * *)((char *)&stru_A8EB00 + 1176) ) /*0x4fd356*/
              {
                v16 = *(unsigned int * *)((char *)&stru_A8EB00 + 1272); /*0x4fd35f*/
                v17 = *(unsigned int * *)((char *)&stru_A8EB00 + 1276); /*0x4fd365*/
                v18 = *(unsigned int * *)((char *)&stru_A8EB00 + 1280); /*0x4fd36b*/
              }
              else
              {
                v19 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v38); /*0x4fd37d*/
                v20 = (int *)(*(int (__thiscall **)(void *, unsigned char *))(*(unsigned int *)v19 + 72))(v19, v43); /*0x4fd38b*/
                v16 = *v20; /*0x4fd38e*/
                v14 = v39; /*0x4fd390*/
                v17 = v20[1]; /*0x4fd394*/
                v18 = v20[2]; /*0x4fd397*/
              }
              v21 = (unsigned int *)(*(int (__thiscall **)(int, unsigned char *))(*(unsigned int *)v14 + 72))(v14, v44); /*0x4fd3a1*/
              v22 = v16 - *v21; /*0x4fd3ab*/
              v41 = v17 - v21[1]; /*0x4fd3ad*/
              v23 = v18 - v21[2]; /*0x4fd3b8*/
              v40 = v22; /*0x4fd3ba*/
              v42 = v23; /*0x4fd3be*/
              Math::Sqrt((double)v22 * (double)v22 + (double)v23 * (double)v23 + (double)v41 * (double)v41); /*0x4fd3e6*/
              IDA_LOWORD(v24) = Math::RoundToInt(v1); /*0x4fd3ee*/
              v12 = v36[0]; /*0x4fd3f7*/
              v25 = v24 + v35; /*0x4fd3fb*/
              v13 = i; /*0x4fd3fd*/
              v35 = v25; /*0x4fd401*/
            }
            i = ++v13; /*0x4fd408*/
          }
          while ( v13 < v12 ); /*0x4fd40c*/
          v8 = v33; /*0x4fd412*/
        }
        v26 = v35 / v8; /*0x4fd41b*/
        if ( v35 / v8 <= 512 ) /*0x4fd422*/
          v26 = 512; /*0x4fd424*/
        *((unsigned int *)this + 5414) = v26; /*0x4fd429*/
        result = ((unsigned int *)this)[0]; /*0x4fd42f*/
        v27 = 0; /*0x4fd432*/
        v36[0] = result; /*0x4fd434*/
        for ( i = 0; v27 < v36[0]; i = ++v27 ) /*0x4fd43e*/
        {
          v28 = *(unsigned int *)(((unsigned int *)this)[0] + 4 * v27); /*0x4fd447*/
          if ( v28 && !*(unsigned char *)(v28 + 129) && *(int *)(v28 + 108) > 0 ) /*0x4fd461*/
          {
            v29 = (unsigned int *)(*(int (__thiscall **)(int, unsigned char *))(*(unsigned int *)v28 + 72))(v28, v44); /*0x4fd46c*/
            Path = PathfindingClass::FindPath((PathfindingClass *)this, v29); /*0x4fd472*/
            v31 = Path; /*0x4fd477*/
            if ( Path != -1 ) /*0x4fd47c*/
            {
              v32 = (char *)this + 12 * Path; /*0x4fd484*/
              *((unsigned int *)v32 + 5416) += (*(int (__thiscall **)(int))(*(unsigned int *)v28 + 728))(v28); /*0x4fd49e*/
              *((unsigned int *)this + 3 * v31 + 5415) += (*(int (__thiscall **)(int))(*(unsigned int *)v28 + 724))(v28); /*0x4fd4b8*/
              *((unsigned int *)v32 + 5417) += (*(int (__thiscall **)(int))(*(unsigned int *)v28 + 732))(v28); /*0x4fd4cb*/
              v27 = i; /*0x4fd4d1*/
            }
          }
          result = v36[0]; /*0x4fd4d5*/
        }
      }
    }
    return result; /*0x4fd4e6*/
}
} // namespace gamemd

// 0x4FF700
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::PowerUpdate()
{
    int v3; // eax
    int result; // eax
    int v5; // eax
    int v6; // eax
    int v7; // esi
    int v8; // eax
    int v9; // esi
    int v10; // eax
    int v11; // ebp
    int v12; // eax
    int v13; // ebx

    v3 = *(unsigned int *)a2; /*0x4ff70b*/
    a2[972] = 1; /*0x4ff70f*/
    result = (*(int (__thiscall **)(unsigned char *))(v3 + 132))(a2); /*0x4ff715*/
    if ( !*(unsigned char *)(result + 562) ) /*0x4ff71b*/
    {
      result = (*(int (__thiscall **)(unsigned char *))(*(unsigned int *)a2 + 132))(a2); /*0x4ff72d*/
      if ( !*(unsigned char *)(result + 3231) ) /*0x4ff733*/
      {
        result = (*(int (__thiscall **)(unsigned char *))(*(unsigned int *)a2 + 44))(a2) - 1; /*0x4ff748*/
        switch ( result ) /*0x4ff75a*/
        {
          case 0: /*0x4ff75a*/
            ++((unsigned int)(((unsigned int *)this)[0])); /*0x4ff869*/
            v12 = (*(int (__thiscall **)(unsigned char *))(*(unsigned int *)a2 + 132))(a2); /*0x4ff871*/
            v13 = (*(int (__thiscall **)(int))(*(unsigned int *)v12 + 64))(v12); /*0x4ff87e*/
            RefCount::Increment((RefCount *)((char *)this + 21780), v13); /*0x4ff887*/
            HouseClass::IncrementStat((HouseClass *)((char *)this + 4920), v13); /*0x4ff893*/
            result = (*(int (__thiscall **)(unsigned char *))(*(unsigned int *)a2 + 132))(a2); /*0x4ff89c*/
            if ( *(unsigned char *)(result + 3278) ) /*0x4ff8a2*/
            {
              result = (*(int (__thiscall **)(unsigned char *))(*(unsigned int *)a2 + 132))(a2); /*0x4ff8b0*/
              if ( !*(unsigned int *)(result + 1504) ) /*0x4ff8b6*/
                ++*(unsigned int *)&this->slaveManager; /*0x4ff8c0*/
            }
            break; /*0x4ff8c0*/
          case 1: /*0x4ff75a*/
            ++((unsigned int *)this)[0]; /*0x4ff7d1*/
            v8 = (*(int (__thiscall **)(unsigned char *))(*(unsigned int *)a2 + 132))(a2); /*0x4ff7d9*/
            v9 = (*(int (__thiscall **)(int))(*(unsigned int *)v8 + 64))(v8); /*0x4ff7e6*/
            RefCount::Increment((RefCount *)((char *)this + 21820), v9); /*0x4ff7ef*/
            result = HouseClass::IncrementStat((HouseClass *)&((unsigned int *)this)[0], v9); /*0x4ff7fb*/
            break; /*0x4ff803*/
          case 5: /*0x4ff75a*/
            if ( (*(unsigned __int8 (__thiscall **)(unsigned char *))(*(unsigned int *)a2 + 128))(a2) /*0x4ff77f*/
              || (v5 = *(unsigned int *)(*((unsigned int *)a2 + 328) + 1032)) != 0 && *(unsigned char *)(v5 + 1516) )
            {
              ++((unsigned int)(((unsigned int *)this)[0])); /*0x4ff791*/
            }
            else
            {
              ++((unsigned int *)this)[1]; /*0x4ff789*/
            }
            v6 = (*(int (__thiscall **)(unsigned char *))(*(unsigned int *)a2 + 132))(a2); /*0x4ff79b*/
            v7 = (*(int (__thiscall **)(int))(*(unsigned int *)v6 + 64))(v6); /*0x4ff7a8*/
            RefCount::Increment((RefCount *)this + 2720, v7); /*0x4ff7b1*/
            result = HouseClass::IncrementStat((HouseClass *)((char *)this + 6976), v7); /*0x4ff7bd*/
            break; /*0x4ff7c5*/
          case 14: /*0x4ff75a*/
            v10 = (*(int (__thiscall **)(unsigned char *))(*(unsigned int *)a2 + 132))(a2); /*0x4ff80b*/
            v11 = (*(int (__thiscall **)(int))(*(unsigned int *)v10 + 64))(v10); /*0x4ff818*/
            if ( !a2[1080] && !a2[1081] ) /*0x4ff824*/
            {
              ++((unsigned int *)this)[2]; /*0x4ff835*/
              a2[1080] = 1; /*0x4ff83b*/
            }
            RefCount::Increment((RefCount *)this + 2725, v11); /*0x4ff848*/
            result = HouseClass::IncrementStat((HouseClass *)((char *)this + 2864), v11); /*0x4ff854*/
            break; /*0x4ff85d*/
          default:
            return result;
        }
      }
    }
    return result; /*0x4ff7c2*/
}
} // namespace gamemd

// 0x4FF980
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::DecrementTypeCounter()
{
    unsigned int *result; // eax
    int v4; // eax
    bool v5; // cl

    result = (unsigned int *)(*(int (__thiscall **)(unsigned int *))(*a2 + 44))(a2); /*0x4ff98c*/
    if ( result == (unsigned int *)6 ) /*0x4ff992*/
    {
      v4 = (*(int (__thiscall **)(unsigned int *))(*a2 + 132))(a2); /*0x4ff998*/
      v5 = v4 && *(unsigned char *)(v4 + 3278); /*0x4ff9ac*/
      result = (unsigned int *)(*(unsigned int *)(a2[328] + 3768) - 1); /*0x4ff9c1*/
      switch ( *(unsigned int *)(a2[328] + 3768) ) /*0x4ff9cf*/
      {
        case 1: /*0x4ff9cf*/
        case 0x28: /*0x4ff9cf*/
          if ( v5 ) /*0x4ff9d8*/
            result = (unsigned int *)((char *)this + 21384); /*0x4ff9da*/
          else
            result = (unsigned int *)((char *)this + 21376); /*0x4ff9e2*/
          goto LABEL_13; /*0x4ff9e0*/
        case 2: /*0x4ff9cf*/
        case 3: /*0x4ff9cf*/
          result = (unsigned int *)((char *)this + 21368); /*0x4ff9ea*/
          goto LABEL_13; /*0x4ff9f0*/
        case 6: /*0x4ff9cf*/
        case 7: /*0x4ff9cf*/
          result = (unsigned int *)((char *)this + 21380); /*0x4ff9fa*/
          goto LABEL_13; /*0x4ff9fa*/
        case 0xF: /*0x4ff9cf*/
        case 0x10: /*0x4ff9cf*/
          result = (unsigned int *)((char *)this + 21372); /*0x4ff9f2*/
  LABEL_13:
          if ( result ) /*0x4ffa02*/
            --*result; /*0x4ffa04*/
          break; /*0x4ffa04*/
        default:
          return result;
      }
    }
    return result; /*0x4ffa06*/
}
} // namespace gamemd

// 0x4FFA50
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::IncrementOccupantTypeCounter()
{
    unsigned int *result; // eax
    int v4; // eax
    bool v5; // cl

    result = (unsigned int *)(*(int (__thiscall **)(unsigned int *))(*a2 + 44))(a2); /*0x4ffa5c*/
    if ( result == (unsigned int *)6 ) /*0x4ffa62*/
    {
      v4 = (*(int (__thiscall **)(unsigned int *))(*a2 + 132))(a2); /*0x4ffa68*/
      v5 = v4 && *(unsigned char *)(v4 + 3278); /*0x4ffa7c*/
      result = (unsigned int *)(*(unsigned int *)(a2[328] + 3768) - 1); /*0x4ffa91*/
      switch ( *(unsigned int *)(a2[328] + 3768) ) /*0x4ffa9f*/
      {
        case 1: /*0x4ffa9f*/
        case 0x28: /*0x4ffa9f*/
          if ( v5 ) /*0x4ffaa8*/
            result = (unsigned int *)((char *)this + 21384); /*0x4ffaaa*/
          else
            result = (unsigned int *)((char *)this + 21376); /*0x4ffab2*/
          goto LABEL_13; /*0x4ffab0*/
        case 2: /*0x4ffa9f*/
        case 3: /*0x4ffa9f*/
          result = (unsigned int *)((char *)this + 21368); /*0x4ffaba*/
          goto LABEL_13; /*0x4ffac0*/
        case 6: /*0x4ffa9f*/
        case 7: /*0x4ffa9f*/
          result = (unsigned int *)((char *)this + 21380); /*0x4ffaca*/
          goto LABEL_13; /*0x4ffaca*/
        case 0xF: /*0x4ffa9f*/
        case 0x10: /*0x4ffa9f*/
          result = (unsigned int *)((char *)this + 21372); /*0x4ffac2*/
  LABEL_13:
          if ( result ) /*0x4ffad2*/
            ++*result; /*0x4ffad4*/
          break; /*0x4ffad4*/
        default:
          return result;
      }
    }
    return result; /*0x4ffad6*/
}
} // namespace gamemd

// 0x505310
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
BuildingClass* BuildingClass::FindBySWType(int sw_type)
{
    char v2; // cl
    int v3; // eax
    int v4; // edx
    int v5; // ecx
    int i; // esi

    v2 = SuperWeaponTypeClass::FindByName((SuperWeaponTypeClass *)((char *)this + 16).firstTrigger); /*0x50532a*/
    v3 = 0; /*0x50532c*/
    v4 = 1 << v2; /*0x50532e*/
    v5 = *(unsigned int *)(a2 + 16); /*0x505330*/
    if ( v5 <= 0 ) /*0x505335*/
      return 0; /*0x50534e*/
    for ( i = *(unsigned int *)(a2 + 4); (v4 & *(unsigned int *)(*(unsigned int *)i + 1740)) == 0; i += 4 ) /*0x50533a*/
    {
      if ( ++v3 >= v5 ) /*0x50534c*/
        return 0; /*0x50534c*/
    }
    return *(unsigned int *)(*(unsigned int *)(a2 + 4) + 4 * v3); /*0x50534e*/
}
} // namespace gamemd

// 0x5F5CD0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::IsHealthLow()
{
    double health; // [esp+4h] [ebp-8h]

    health = (double)((unsigned int *)this)[0]; /*0x5f5cdb*/
    return health / (double)*(int *)((*((int (__thiscall **)(BuildingClass *))this->vtable1 + 34))(this) + 160) <= *(double *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5896) /*0x5f5d0e*/
        && ((unsigned int *)this)[0] > 0;
}
} // namespace gamemd

// 0x62D2A0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::UpdateFloatPosition()
{
    int *location; // eax
    int currentMission; // ecx
    int v4; // ecx
    int v5; // eax
    int v6; // ecx
    int v7; // eax
    int v8; // eax
    int v9; // eax
    int GroundHeight; // eax
    int v11; // ecx
    int v12; // eax
    int v13; // eax
    int v14; // ebx
    int v15; // eax
    int v17; // [esp+8h] [ebp-Ch] BYREF
    int v18; // [esp+Ch] [ebp-8h]
    int v19; // [esp+10h] [ebp-4h]

    location = ((unsigned int *)this)[0]; /*0x62d2ad*/
    v17 = ((unsigned int *)this)[0]; /*0x62d2b9*/
    currentMission = ((unsigned int *)this)[0]; /*0x62d2bd*/
    v18 = location[1]; /*0x62d2c6*/
    v19 = location[2]; /*0x62d2cd*/
    v4 = *(unsigned int *)(currentMission + 760); /*0x62d2d1*/
    if ( v4 > 0 && !(*(unsigned int * *)((char *)&stru_A8EB00 + 644) % (10 / v4)) ) /*0x62d2e8*/
    {
      v5 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1964); /*0x62d2fe*/
      v6 = *(int *)((char *)&((char *)&stru_83665C) + v5 * 4); /*0x62d301*/
      v7 = ((unsigned int *)&stru_83665C)[v5]; /*0x62d307*/
      v17 += v6; /*0x62d315*/
      v18 += v7; /*0x62d319*/
    }
    if ( (*(unsigned int *)((char *)&stru_A8EB00 + 644) & 1) != 0 ) /*0x62d320*/
    {
      (v8) = ((v8) & ~0xFFFF) | ((unsigned int)(Math::RoundToInt((double)v17 + *(float *)&this->q0CC)) & 0xFFFF) /*0x62d330*/
      v17 = v8; /*0x62d339*/
      (v9) = ((v9) & ~0xFFFF) | ((unsigned int)(Math::RoundToInt((double)v18 + *(float *)&this->q0D0)) & 0xFFFF) /*0x62d343*/
      v18 = v9; /*0x62d348*/
      GroundHeight = Cell::GetGroundHeight(&v17); /*0x62d356*/
      v11 = v19; /*0x62d35b*/
      if ( v19 > GroundHeight + 5 ) /*0x62d364*/
      {
        v12 = v19 - GroundHeight - 5; /*0x62d36a*/
        if ( v12 >= 2 ) /*0x62d370*/
          v12 = 2; /*0x62d372*/
        v11 = v19 - v12; /*0x62d377*/
      }
      v13 = *(unsigned int *)&this->missionTimer; /*0x62d389*/
      v17 += ((unsigned int *)this)[0]; /*0x62d38f*/
      v14 = ((unsigned int *)this)[0] + v18; /*0x62d39f*/
      v19 = v13 + v11; /*0x62d3a1*/
      v18 = v14; /*0x62d3ab*/
      v15 = Cell::GetGroundHeight(&v17); /*0x62d3af*/
      if ( v19 < v15 + 5 ) /*0x62d3bd*/
        v19 = Cell::GetGroundHeight(&v17) + 5; /*0x62d3d1*/
    }
    return (*((int (__thiscall **)(BuildingClass *, int *))this->vtable1 + 109))(this, &v17); /*0x62d3e4*/
}
} // namespace gamemd

// 0x634310
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::CopyTypeDataForRender()
{
    int uniqueId; // edx
    int v4; // eax
    unsigned int **vtable1; // esi
    unsigned int **v6; // ecx
    unsigned int *v7; // eax
    unsigned char *v8; // esi

    uniqueId = ((unsigned int *)this)[0]; /*0x634310*/
    v4 = 0; /*0x634314*/
    if ( uniqueId <= 0 ) /*0x63431a*/
      goto LABEL_7; /*0x63431a*/
    vtable1 = (unsigned int **)((unsigned int *)this)[0]; /*0x63431c*/
    v6 = vtable1; /*0x634323*/
    while ( **v6 != a3 ) /*0x634329*/
    {
      ++v4; /*0x63432b*/
      ++v6; /*0x63432c*/
      if ( v4 >= uniqueId ) /*0x634331*/
      {
        v7 = 0; /*0x634333*/
        goto LABEL_9; /*0x634335*/
      }
    }
    if ( v4 == -1 ) /*0x63433a*/
  LABEL_7:
      v7 = 0; /*0x63433c*/
    else
      v7 = vtable1[v4]; /*0x634340*/
  LABEL_9:
    v8 = (unsigned char *)v7[1]; /*0x634343*/
    qmemcpy((void *)a2, v8, 0x6Cu); /*0x634351*/
    v8 += 108; /*0x634351*/
    *(unsigned short *)(a2 + 108) = *(unsigned short *)v8; /*0x634353*/
    *(unsigned char *)(a2 + 110) = v8[2]; /*0x634355*/
    return a2; /*0x634356*/
}
} // namespace gamemd

// 0x6347B0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::GetTypeEntry()
{
    int uniqueId; // esi
    int v3; // eax
    unsigned int **vtable1; // edx
    int v5; // eax
    int v6; // edx
    int result; // eax

    uniqueId = ((unsigned int *)this)[0]; /*0x6347b3*/
    v3 = 0; /*0x6347b6*/
    if ( uniqueId <= 0 ) /*0x6347bb*/
      goto LABEL_7; /*0x6347bb*/
    vtable1 = (unsigned int **)((unsigned int *)this)[0]; /*0x6347c4*/
    while ( **vtable1 != a2 ) /*0x6347cb*/
    {
      ++v3; /*0x6347cd*/
      ++vtable1; /*0x6347ce*/
      if ( v3 >= uniqueId ) /*0x6347d3*/
      {
        v5 = 0; /*0x6347d5*/
        goto LABEL_9; /*0x6347d7*/
      }
    }
    if ( v3 == -1 ) /*0x6347dc*/
  LABEL_7:
      v5 = 0; /*0x6347de*/
    else
      v5 = *((unsigned int *)((unsigned int *)this)[0] + v3); /*0x6347e2*/
  LABEL_9:
    v6 = *(unsigned int *)(v5 + 8); /*0x6347e5*/
    result = 0; /*0x6347e9*/
    if ( v6 != -1 ) /*0x6347f1*/
      return *(unsigned int *)(((unsigned int *)this)[0] + 4 * v6); /*0x6347f6*/
    return result; /*0x6347e8*/
}
} // namespace gamemd

// 0x6385C0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
int BuildingClass::GetObjectData()
{
    int Type; // eax
    int v3; // ebx
    int v4; // eax
    unsigned char *v5; // eax
    unsigned char *v6; // ebp
    int v7; // eax
    unsigned short v9[56]; // [esp+8h] [ebp-E0h] BYREF
    unsigned char v10[112]; // [esp+78h] [ebp-70h] BYREF

    Type = BuildingClass::GetType(this); /*0x6385ca*/
    v3 = Type; /*0x6385cf*/
    if ( !Type ) /*0x6385d3*/
      return 0; /*0x6385d3*/
    if ( *(int *)(Type + 20) <= 0 ) /*0x6385de*/
      return 0; /*0x6385de*/
    v4 = *(unsigned int *)(Type + 140); /*0x6385e4*/
    if ( v4 != -1 && v4 <= 0 ) /*0x6385f1*/
      return 0; /*0x6385f1*/
    if ( *(unsigned char *)(v3 + 28) ) /*0x6385f7*/
      return 0; /*0x6386ca*/
    (*((void (__thiscall **)(BuildingClass *, int, int))this->vtable1 + 122))(this, 28, 1); /*0x63860c*/
    qmemcpy(v9, (const void *)FactoryClass::CompleteCurrentItem(v3, (int)v10), 0x6Fu); /*0x63862e*/
    v5 = (unsigned char *)RA2_OPNEW(0x6Fu); /*0x638633*/
    if ( v5 ) /*0x63863d*/
    {
      *v5 = 0; /*0x63863f*/
      v6 = v5; /*0x638642*/
    }
    else
    {
      v6 = 0; /*0x638646*/
    }
    qmemcpy(v6, v9, 0x6Cu); /*0x638653*/
    *((unsigned short *)v6 + 54) = v9[54]; /*0x638655*/
    v6[110] = v9[55]; /*0x638657*/
    if ( *v6 == 4 ) /*0x63865c*/
      v6[29] = 2; /*0x63865e*/
    if ( *(int *)&stru_AC4B30.__pad_14[20] < *(int *)&stru_AC4B30.__pad_14[12] /*0x638699*/
      || (stru_AC4B30.__pad_14[17] || !*(unsigned int *)&stru_AC4B30.__pad_14[12])
      && (int)stru_AC4B30.Array_field_0x2C > 0
      && (*(unsigned __int8 (__thiscall **)(char *, char *, unsigned int))(*(unsigned int *)&stru_AC4B30.__pad_14[4] + 8))(
           &stru_AC4B30.__pad_14[4],
           (char *)stru_AC4B30.Array_field_0x2C + *(unsigned int *)&stru_AC4B30.__pad_14[12],
           0) )
    {
      v7 = (*(unsigned int *)&stru_AC4B30.__pad_14[20])++; /*0x6386a6*/
      *(unsigned int *)(*(unsigned int *)&stru_AC4B30.__pad_14[8] + 4 * v7) = v6; /*0x6386b5*/
    }
    *(unsigned char *)(v3 + 28) = 1; /*0x6386ba*/
    return 1; /*0x6386be*/
}
} // namespace gamemd

// 0x6395B0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::SetProduction(int type_index)
{
    ScriptAction *v2; // ebx
    int Type; // eax
    int v5; // eax
    int v6; // esi
    unsigned int *v7; // edi
    int v8; // edx
    int v9; // eax
    int v10; // edx
    int v11; // edi
    int v12; // esi
    int v13; // ecx
    int v14; // eax
    int v15; // edi
    int v16; // ebx
    int i; // esi
    unsigned char *v18; // ecx
    int v20; // [esp+10h] [ebp-Ch] BYREF
    ScriptAction *v21; // [esp+14h] [ebp-8h] BYREF
    int v22; // [esp+18h] [ebp-4h]

    v2 = a2; /*0x6395b6*/
    v22 = (int)a2; /*0x6395bb*/
    Type = BuildingClass::GetType((BuildingClass *)a1); /*0x6395bf*/
    if ( !Type ) /*0x6395c6*/
    {
      v5 = RA2_OPNEW(0x9Cu); /*0x6395d1*/
      v6 = v5; /*0x6395d6*/
      if ( v5 ) /*0x6395dd*/
      {
        v7 = (unsigned int *)(v5 + 4); /*0x6395df*/
        Object_Set((VectorClass *)(v5 + 4), 0, 0); /*0x6395e8*/
        *v7 = (void *)&vt_DynamicVectorClass_PlanningNodeClass; /*0x6395ed*/
        *(unsigned int *)(v6 + 24) = 10; /*0x6395f3*/
        *(unsigned int *)(v6 + 20) = 0; /*0x6395fa*/
        *(unsigned char *)(v6 + 28) = 0; /*0x639601*/
        *(unsigned char *)(v6 + 29) = 0; /*0x639608*/
        *(unsigned int *)(v6 + 140) = -1; /*0x63960c*/
        *(unsigned int *)(v6 + 144) = -1; /*0x639612*/
        *(unsigned int *)(v6 + 148) = -1; /*0x639618*/
        *(unsigned char *)(v6 + 152) = 0; /*0x63961e*/
        *(unsigned char *)(v6 + 153) = 0; /*0x639625*/
        *(unsigned int *)v6 = a1; /*0x63962c*/
        v20 = v6; /*0x63962e*/
      }
      else
      {
        v20 = 0; /*0x639634*/
      }
      ScriptActionVector::PushBack((ScriptActionVector *)&stru_AC4B30.__pad_EC[92], &v20); /*0x639646*/
      BuildingClass::SetType((BuildingClass *)a1, v20); /*0x639652*/
      Type = v20; /*0x639657*/
    }
    v8 = *(unsigned int *)(Type + 4); /*0x63965b*/
    v21 = v2; /*0x639665*/
    if ( (*(int (__thiscall **)(int, ScriptAction **))(v8 + 16))(Type + 4, &v21) == -1 ) /*0x639670*/
      return CompleteBuildingProduction((unsigned int *)a1, (int)v2); /*0x639727*/
    v9 = BuildingClass::GetType((BuildingClass *)a1); /*0x639678*/
    v10 = *(unsigned int *)(v9 + 4); /*0x63967d*/
    v21 = v2; /*0x639687*/
    v11 = (*(int (__thiscall **)(int, ScriptAction **))(v10 + 16))(v9 + 4, &v21); /*0x639691*/
    v12 = BuildingClass::GetType((BuildingClass *)a1); /*0x639698*/
    v13 = *(unsigned int *)(v12 + 20); /*0x63969a*/
    *(unsigned int *)(v12 + 148) = v11; /*0x63969d*/
    *(unsigned char *)(v12 + 152) = 1; /*0x6396a5*/
    *(unsigned int *)(v12 + 144) = v13 - v11; /*0x6396ac*/
    if ( !stru_AC4B30.__pad_EC[172] ) /*0x6396b9*/
    {
      if ( (unsigned __int8)House::IsHumanPlayer(*(House **)(a1 + 540)) ) /*0x6396c1*/
      {
        stru_AC4B30.__pad_EC[172] = 1; /*0x6396ca*/
        v14 = *(unsigned int *)(v12 + 20) - 1; /*0x6396d4*/
        if ( v14 >= 0 ) /*0x6396d5*/
          v15 = *(unsigned int *)(*(unsigned int *)(v12 + 8) + 4 * v14); /*0x6396de*/
        else
          v15 = 0; /*0x6396d7*/
        v16 = *(unsigned int *)(v15 + 16); /*0x6396e1*/
        for ( i = 0; i < v16; ++i ) /*0x6396e8*/
        {
          v18 = **(unsigned char ***)(*(unsigned int *)(v15 + 4) + 4 * i); /*0x6396f0*/
          if ( v18[131] ) /*0x6396f2*/
            (*(void (__thiscall **)(unsigned char *))(*(unsigned int *)v18 + 336))(v18); /*0x6396fe*/
        }
        v2 = (ScriptAction *)v22; /*0x639709*/
      }
      BuildingClass::CheckExitPath((BuildingClass *)a1); /*0x63970f*/
    }
    return ScriptAction::FindSquadMember(v2); /*0x63971b*/
}
} // namespace gamemd

// 0x63AC70
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::CheckBuildability()
{
    int v1; // ebp
    int v2; // edi
    int v4; // ecx
    int Type; // eax
    int v6; // esi
    int v7; // eax
    int v8; // eax
    int v9; // esi
    BuildingClass *v11; // [esp+14h] [ebp-4h] BYREF

    v1 = *(unsigned int * *)((char *)&stru_A8EB00 + 456); /*0x63ac75*/
    v2 = 0; /*0x63ac7d*/
    if ( *(int * *)((char *)&stru_A8EB00 + 456) <= 0 ) /*0x63ac83*/
      return -1; /*0x63ad1b*/
    while ( 1 ) /*0x63ac8e*/
    {
      v4 = *(unsigned int *)(*(unsigned int * *)((char *)&stru_A8EB00 + 444) + 4 * v2); /*0x63ac8e*/
      if ( v4 ) /*0x63ac93*/
      {
        if ( (*(unsigned char *)(v4 + 20) & 1) != 0 ) /*0x63ac9f*/
        {
          Type = BuildingClass::GetType((BuildingClass *)v4); /*0x63aca1*/
          v6 = Type; /*0x63aca6*/
          if ( Type ) /*0x63acaa*/
          {
            if ( *(int *)(Type + 148) >= 0 ) /*0x63acb4*/
              return 1; /*0x63acf3*/
            v7 = *(unsigned int *)(Type + 4); /*0x63acb8*/
            v11 = this; /*0x63acc2*/
            v8 = (*(int (__thiscall **)(int, BuildingClass **))(v7 + 16))(v6 + 4, &v11); /*0x63acc7*/
            if ( v8 == -1 ) /*0x63accd*/
              return 5; /*0x63ad00*/
            v9 = *(unsigned int *)(v6 + 20); /*0x63accf*/
            if ( v8 == v9 - 1 ) /*0x63acd7*/
              return 2; /*0x63ad0d*/
            if ( v8 == v9 - 2 ) /*0x63acde*/
              break; /*0x63acde*/
          }
        }
      }
      if ( ++v2 >= v1 ) /*0x63ace3*/
        return -1; /*0x63ace3*/
    }
    return 3; /*0x63ace7*/
}
} // namespace gamemd

// 0x63BE10
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::IsIdleWithNoCaptives()
{
    return (*((int (__thiscall **)(BuildingClass *))this->vtable1 + 97))(this) == 11 /*0x63be4a*/
        && (!this || (((unsigned int *)this)[0] & 4) == 0 || !this->Anims[18] && !((unsigned int *)this)[0]);
}
} // namespace gamemd

// 0x63D560
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::DrawSelectionBlip(Point2D* screen_pos) const
{
    double v5; // st7
    int result; // eax
    int *Viewport; // eax
    double v9; // [esp+0h] [ebp-48h]
    int v10; // [esp+18h] [ebp-30h] BYREF
    int v11; // [esp+1Ch] [ebp-2Ch]
    int v12; // [esp+20h] [ebp-28h]
    int v13; // [esp+24h] [ebp-24h]
    unsigned int v14[4]; // [esp+28h] [ebp-20h] BYREF
    int v15[4]; // [esp+38h] [ebp-10h] BYREF

    v10 = a2 - a4; /*0x63d57f*/
    __asm { fild [esp+40h+var_30] } /*0x63d585*/
    v11 = a3 - a5; /*0x63d589*/
    __asm /*0x63d590*/
    {
      fild [esp+48h+var_2C]
      fld st
      fmul st, st(1)
      fld st(2)
      fmul st, st(3)
      faddp st(1), st
      fstp [esp+48h+var_48]; double
      fstp st
      fstp st
    }
    Math::Sqrt(v9); /*0x63d5a5*/
    (result) = ((result) & ~0xFFFF) | ((unsigned int)(Math::RoundToInt(v5)) & 0xFFFF) /*0x63d5ad*/
    if ( result >= 37 ) /*0x63d5b5*/
    {
      Viewport = Display::GetViewport(v15); /*0x63d5bb*/
      v14[0] = *Viewport; /*0x63d5c2*/
      v14[1] = Viewport[1]; /*0x63d5ca*/
      v14[2] = Viewport[2]; /*0x63d5d5*/
      v14[3] = Viewport[3]; /*0x63d5dc*/
      v10 = (a4 + a2) / 2 - 10; /*0x63d5eb*/
      v11 = (a5 + a3) / 2 - 10; /*0x63d600*/
      v12 = 21; /*0x63d609*/
      v13 = 21; /*0x63d60d*/
      return (*(int (__thiscall **)(AudioStream *, unsigned int *, int *, BuildingClass *))(*(unsigned int *)DSurface_Composite->__pad_0 /*0x63d61d*/
                                                                                    + 84))(
               DSurface_Composite,
               v14,
               &v10,
               this);
    }
    return result; /*0x63d620*/
}
} // namespace gamemd

// 0x6B0690
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
CoordStruct* BuildingClass::GetRallyPointCoord(CoordStruct* out) const
{
    int occupant; // ecx
    int v4; // edi
    int v5; // esi
    int v6; // edi
    int v7; // esi
    unsigned short *v8; // eax
    int v10; // [esp+4h] [ebp-8h]
    unsigned char v11[4]; // [esp+8h] [ebp-4h] BYREF

    occupant = ((unsigned int *)this)[0]; /*0x6b0696*/
    if ( occupant && (*(int (__thiscall **)(int))(*(unsigned int *)occupant + 44))(occupant) == 6 )
    {
      v4 = ((unsigned int *)this)[0]; /*0x6b06ad*/
      if ( v4 )
        v5 = (*(int (__thiscall **)(int))(*(unsigned int *)v4 + 44))(((unsigned int *)this)[0]) == 6 ? v4 : 0;
      else
        v5 = 0; /*0x6b06b4*/
      v6 = BuildingTypeClass::GetFoundationWidth(*(BuildingTypeClass **)(v5 + 1312)) - 1; /*0x6b06df*/
      v7 = (*(int **)(v5 + 1312))->GetFoundationHeight(0) / 2; /*0x6b06f6*/
      v8 = (unsigned short *)(*(int (__thiscall **)(int, unsigned char *))(*(unsigned int *)((unsigned int *)this)[0] + 440))(((unsigned int *)this)[0], v11); /*0x6b06f8*/
      (v10) = ((v10) & ~(0xFFFFULL << 16)) | (((unsigned __int64)(unsigned int)(v7 + v8[1]) & 0xFFFF) << 16) /*0x6b0708*/
      (v10) = ((v10) & ~0xFFFF) | ((unsigned int)(*v8 + v6) & 0xFFFF) /*0x6b0711*/
      *a2 = v10; /*0x6b071c*/
      return a2; /*0x6b070d*/
    }
    else
    {
      *a2 = *(unsigned int *)(*(int (__thiscall **)(int, unsigned char *))(*(unsigned int *)((unsigned int *)this)[0] + 440))(((unsigned int *)this)[0], v11); /*0x6b073c*/
      return a2; /*0x6b0737*/
    }
}
} // namespace gamemd

// 0x6B0CC0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::InitBuildLimit()
{
    int *result; // eax
    int i; // edi
    int v4; // ecx

    result = (int *)*(unsigned int *)&this->q05C; /*0x6b0cc4*/
    if ( !result ) /*0x6b0cc9*/
    {
      ((unsigned int *)this)[3] = 1; /*0x6b0ccb*/
      ((unsigned int *)this)[4] = 0x7FFFFFFF; /*0x6b0cd2*/
      for ( i = ((unsigned int *)this)[3] - 1; i >= 0; --i ) /*0x6b0cdd*/
      {
        result = *(int **)(((unsigned int *)this)[0] + 4 * i); /*0x6b0ce2*/
        v4 = *result; /*0x6b0ce8*/
        if ( result[1] != 6 ) /*0x6b0ced*/
        {
          if ( v4 ) /*0x6b0cf1*/
            result = (int *)(*(int (__thiscall **)(int))(*(unsigned int *)v4 + 976))(v4); /*0x6b0cf5*/
        }
      }
    }
    return result; /*0x6b0cfe*/
}
} // namespace gamemd

// 0x6B0D60
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::RefreshOccupierCache()
{
    int *result; // eax
    int i; // edi
    int v4; // ecx

    result = (int *)*(unsigned int *)&this->q05C; /*0x6b0d64*/
    if ( !result ) /*0x6b0d69*/
    {
      ((unsigned int *)this)[3] = 4; /*0x6b0d6b*/
      ((unsigned int *)this)[4] = 0x7FFFFFFF; /*0x6b0d72*/
      for ( i = ((unsigned int *)this)[3] - 1; i >= 0; --i ) /*0x6b0d7d*/
      {
        result = *(int **)(((unsigned int *)this)[0] + 4 * i); /*0x6b0d82*/
        v4 = *result; /*0x6b0d88*/
        if ( result[1] != 6 ) /*0x6b0d8d*/
        {
          if ( v4 ) /*0x6b0d91*/
            result = (int *)(*(int (__thiscall **)(int))(*(unsigned int *)v4 + 976))(v4); /*0x6b0d95*/
        }
      }
    }
    return result; /*0x6b0d9e*/
}
} // namespace gamemd

// 0x6B0DB0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::ProcessEnterUnit()
{
    int occupant; // ecx
    int v3; // edi
    int v4; // eax
    int v5; // edi
    int v6; // eax
    unsigned int *v7; // eax
    int *v8; // eax
    unsigned int *result; // eax
    int v10; // edi
    void *v11; // eax
    int i; // edi
    int v13; // ecx
    int v14; // ecx
    int v15; // ecx
    unsigned int *v16; // eax
    int *v17; // eax
    void *v18; // eax
    int j; // edi
    int v20; // ecx
    short v21[2]; // [esp+Ch] [ebp-14h] BYREF
    int v22; // [esp+10h] [ebp-10h] BYREF
    unsigned char v23[12]; // [esp+14h] [ebp-Ch] BYREF

    occupant = ((unsigned int *)this)[0]; /*0x6b0db8*/
    if ( occupant
      && (*(int (__thiscall **)(int))(*(unsigned int *)occupant + 44))(occupant) == 1
      && ((v3 = ((unsigned int *)this)[0]) != 0 ? (v4 = (*(int (__thiscall **)(int))(*(unsigned int *)v3 + 44))(((unsigned int *)this)[0]) == 1 ? v3 : 0) : (v4 = 0),
          *(unsigned int *)(v4 + 1444)) )
    {
      v5 = ((unsigned int *)this)[0]; /*0x6b0dfa*/
      if ( v5 )
        v6 = (*(int (__thiscall **)(int))(*(unsigned int *)v5 + 44))(((unsigned int *)this)[0]) == 1 ? v5 : 0;
      else
        v6 = 0; /*0x6b0e01*/
      v7 = (unsigned int *)(*(int (__thiscall **)(unsigned int, unsigned char *))(**(unsigned int **)(v6 + 1444) + 72))(*(unsigned int *)(v6 + 1444), v23); /*0x6b0e24*/
      v8 = (int *)CellStruct::Set((CellStruct *)&v22, *v7 / 256, v7[1] / 256); /*0x6b0e4c*/
      *(unsigned int *)v21 = *BuildingClass_FindPlacementCells2(this, &v22, *v8); /*0x6b0e69*/
      if ( *(unsigned int *)v21 == dword_B0B5B8 ) /*0x6b0e6d*/
      {
        *(unsigned int *)&this->q05C = 0; /*0x6b0e7d*/
        *(unsigned int *)&this->q060 = *(unsigned int * *)((char *)&stru_A8EB00 + 644); /*0x6b0e8a*/
        return (*(unsigned int *(__thiscall **)(int, int, unsigned int))(*(unsigned int *)((unsigned int *)this)[0] + 488))(((unsigned int *)this)[0], 5, 0); /*0x6b0e96*/
      }
      else
      {
        v10 = *(unsigned int *)((unsigned int *)this)[0]; /*0x6b0ead*/
        v11 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v21); /*0x6b0eb4*/
        (*(void (__thiscall **)(int, void *, int))(v10 + 1152))(((unsigned int *)this)[0], v11, 1); /*0x6b0ebd*/
        result = (unsigned int *)(*(int (__thiscall **)(int, int, unsigned int))(*(unsigned int *)((unsigned int *)this)[0] + 488))(((unsigned int *)this)[0], 2, 0); /*0x6b0ecc*/
        ((unsigned int *)this)[3] = 2; /*0x6b0ed2*/
        *(unsigned int *)&this->q060 = 0x7FFFFFFF; /*0x6b0ed9*/
        for ( i = *(unsigned int *)&this->q048 - 1; i >= 0; --i ) /*0x6b0ee4*/
        {
          result = *(unsigned int **)(((unsigned int *)this)[0] + 4 * i); /*0x6b0ef2*/
          v13 = *result; /*0x6b0ef8*/
          if ( result[1] != 6 ) /*0x6b0efc*/
          {
            if ( v13 ) /*0x6b0f00*/
              result = (unsigned int *)(*(int (__thiscall **)(int))(*(unsigned int *)v13 + 976))(v13); /*0x6b0f04*/
          }
        }
      }
    }
    else
    {
      v14 = ((unsigned int *)this)[0]; /*0x6b0f14*/
      if ( v14 && (*(int (__thiscall **)(int))(*(unsigned int *)v14 + 44))(v14) == 6 && (v15 = *(unsigned int *)(((unsigned int *)this)[0] + 536)) != 0 ) /*0x6b0f3c*/
      {
        v16 = (unsigned int *)(*(int (__thiscall **)(int, unsigned char *))(*(unsigned int *)v15 + 72))(v15, v23); /*0x6b0f49*/
        v17 = (int *)CellStruct::Set((CellStruct *)&v22, *v16 / 256, v16[1] / 256); /*0x6b0f71*/
        result = (unsigned int *)*BuildingClass_FindPlacementCells2(this, &v22, *v17); /*0x6b0f85*/
        *(unsigned int *)v21 = result; /*0x6b0f8e*/
        if ( result != (unsigned int *)dword_B0B5B8 ) /*0x6b0f92*/
        {
          v18 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v21); /*0x6b0fac*/
          result = (unsigned int *)((TechnoClass *)((unsigned int *)this)[0])->SetFocus((int)v18); /*0x6b0fb5*/
          ((unsigned int *)this)[3] = 6; /*0x6b0fba*/
          *(unsigned int *)&this->q060 = 0x7FFFFFFF; /*0x6b0fbd*/
          for ( j = ((unsigned int *)this)[3] - 1; j >= 0; --j ) /*0x6b0fc8*/
          {
            result = *(unsigned int **)(((unsigned int *)this)[0] + 4 * j); /*0x6b0fcd*/
            v20 = *result; /*0x6b0fd3*/
            if ( result[1] != 6 && v20 ) /*0x6b0fdb*/
              result = (unsigned int *)(*(int (__thiscall **)(int))(*(unsigned int *)v20 + 976))(v20); /*0x6b0fdf*/
          }
        }
      }
      else
      {
        result = (unsigned int *)(*(int (__thiscall **)(int, int, unsigned int))(*(unsigned int *)((unsigned int *)this)[0] + 488))(((unsigned int *)this)[0], 5, 0); /*0x6b0ff8*/
        ((unsigned int *)this)[3] = 0; /*0x6b0ffe*/
        *(unsigned int *)&this->q060 = *(unsigned int * *)((char *)&stru_A8EB00 + 644); /*0x6b100b*/
      }
    }
    return result; /*0x6b0e9c*/
}
} // namespace gamemd

// 0x6B4BE0
namespace gamemd {
int UnitClass::UnloadPassengers(int placementType)
{
    int v2; // edi
    void (__thiscall **vtable0)(SmudgeClass *); // edx
    unsigned char v6[4]; // [esp+8h] [ebp-4h] BYREF

    v2 = a2; /*0x6b4be3*/
    if ( !(unsigned __int8)ObjectClass::UpdateProductionDisplay((ObjectClass *)this) || v2 != 1 && v2 != 3 ) /*0x6b4bfb*/
      return 0; /*0x6b4c61*/
    a2 = *(unsigned int *)(*((int (__thiscall **)(SmudgeClass *, unsigned char *))this->vtable1 + 110))(this, v6); /*0x6b4c0e*/
    if ( (int)dword_A8E7AC > 0 || *(unsigned int *)((char *)&stru_A8EB00 + 619) || (unsigned __int8)Cell::IsWalkable((Cell *)this->Type, &a2, 1) ) /*0x6b4c31*/
      UnitClass::CreateUnloadPlacementCraters((int *)this->Type, &a2); /*0x6b4c45*/
    vtable0 = (void (__thiscall **)(SmudgeClass *))this->ObjectClass; /*0x6b4c4a*/
    ((unsigned int *)this)[0] = 0; /*0x6b4c4e*/
    vtable0[62](this); /*0x6b4c52*/
    return 1; /*0x6b4c58*/
}
} // namespace gamemd

// 0x6B7230
namespace gamemd {
int UnitClass::ProcessExitQueue()
{
    int v2; // edx
    int SpawnManagerClass_field_58; // eax
    int v4; // ecx
    int v5; // ebx
    int spawnVectorCount; // edx
    int v7; // eax
    unsigned int **v8; // ebp
    unsigned int *v9; // edi
    int SpawnManagerClass_field_5C; // edx
    int SpawnManagerClass_field_64; // eax
    int *alignmentPadding154; // ebp
    int *v13; // ebp
    TechnoClass *owner; // ecx
    int v15; // edx
    int v16; // ecx
    int v17; // eax
    int v18; // eax
    BOOL v19; // ebp
    TechnoClass *v20; // ecx
    void *vtable0; // ebx
    unsigned int *v22; // eax
    int *v23; // eax
    int v24; // ecx
    int v25; // edx
    unsigned int *Value; // eax
    AnimClass *v27; // ebp
    int Index; // eax
    int SpawnManagerClass_field_6C; // eax
    short *v30; // eax
    Cell *v31; // eax
    int v32; // ebp
    void *NeighbourContent; // eax
    int v34; // edx
    int v35; // eax
    int v36; // eax
    short *v37; // eax
    Cell *v38; // eax
    int v39; // ebp
    void *v40; // eax
    int v41; // eax
    int v42; // eax
    int v43; // ecx
    unsigned short *v44; // ebp
    unsigned short *v45; // eax
    int *location; // ecx
    int v47; // eax
    int SpawnManagerClass_field_34; // ecx
    unsigned int *v49; // edx
    int v50; // ebp
    int v51; // edx
    int v52; // eax
    int v53; // eax
    int v54; // edx
    int v55; // eax
    int (__thiscall **v56)(HouseClass *, int); // edi
    int v57; // eax
    HouseClass *spawnOwner; // eax
    int v59; // ecx
    int SpawnManagerClass_field_70; // eax
    int v61; // ecx
    char v62; // bl
    int v63; // eax
    char v64; // bl
    int v65; // ecx
    int v66; // edx
    int v67; // eax
    int v68; // ebp
    int v69; // edx
    int v70; // eax
    int v71; // edi
    int v72; // ebp
    unsigned int *v73; // eax
    int *v74; // eax
    int v75; // ecx
    unsigned int *v76; // eax
    int v77; // ecx
    int v78; // eax
    char v79; // [esp+2Dh] [ebp-55h]
    int v80; // [esp+2Eh] [ebp-54h]
    int v81; // [esp+32h] [ebp-50h] BYREF
    int v82; // [esp+36h] [ebp-4Ch] BYREF
    int v83; // [esp+3Ah] [ebp-48h] BYREF
    int v84; // [esp+3Eh] [ebp-44h] BYREF
    char v85[4]; // [esp+42h] [ebp-40h] BYREF
    int v86; // [esp+46h] [ebp-3Ch] BYREF
    int v87; // [esp+4Ah] [ebp-38h]
    int v88; // [esp+4Eh] [ebp-34h]
    int v89[3]; // [esp+52h] [ebp-30h] BYREF
    int v90; // [esp+5Eh] [ebp-24h]
    int v91; // [esp+62h] [ebp-20h]
    char v92[12]; // [esp+6Ah] [ebp-18h] BYREF
    int v93; // [esp+76h] [ebp-Ch] BYREF
    int v94; // [esp+7Ah] [ebp-8h]

    v2 = *(unsigned int *)&this->__pad_48[8]; /*0x6b723f*/
    SpawnManagerClass_field_58 = this->SpawnManagerClass_field_58; /*0x6b7242*/
    if ( v2 != -1 ) /*0x6b7248*/
    {
      if ( *(unsigned int * *)((char *)&stru_A8EB00 + 644) - v2 >= SpawnManagerClass_field_58 ) /*0x6b7250*/
        goto LABEL_5; /*0x6b7250*/
      SpawnManagerClass_field_58 -= *(unsigned int * *)((char *)&stru_A8EB00 + 644) - v2; /*0x6b7252*/
    }
    if ( SpawnManagerClass_field_58 ) /*0x6b7256*/
      return; /*0x6b7256*/
  LABEL_5:
    v4 = v91; /*0x6b725c*/
    *(unsigned int *)&this->__pad_48[8] = *(unsigned int * *)((char *)&stru_A8EB00 + 644); /*0x6b7265*/
    this->SpawnManagerClass_field_54 = v4; /*0x6b7268*/
    this->SpawnManagerClass_field_58 = 10; /*0x6b726b*/
    v5 = 0; /*0x6b7271*/
    v80 = 0; /*0x6b7275*/
    if ( *(int *)this->__pad_48 > 0 )
    {
      while ( 1 )
      {
        spawnVectorCount = this->spawnVectorCount; /*0x6b727f*/
        v79 = 0; /*0x6b7282*/
        v7 = *(unsigned int *)(spawnVectorCount + 4 * v5); /*0x6b7287*/
        v8 = (unsigned int **)(spawnVectorCount + 4 * v5); /*0x6b728a*/
        v9 = *(unsigned int **)v7; /*0x6b7290*/
        switch ( *(unsigned int *)(v7 + 4) )
        {
          case 0:
            if ( !this->SpawnManagerClass_field_68 ) /*0x6b72a7*/
              goto LABEL_87; /*0x6b72a7*/
            SpawnManagerClass_field_5C = this->SpawnManagerClass_field_5C; /*0x6b72ad*/
            SpawnManagerClass_field_64 = this->SpawnManagerClass_field_64; /*0x6b72b0*/
            if ( SpawnManagerClass_field_5C == -1 ) /*0x6b72b6*/
              goto LABEL_11; /*0x6b72b6*/
            if ( *(unsigned int * *)((char *)&stru_A8EB00 + 644) - SpawnManagerClass_field_5C >= SpawnManagerClass_field_64 ) /*0x6b72c2*/
              goto LABEL_128; /*0x6b72c2*/
            SpawnManagerClass_field_64 -= *(unsigned int * *)((char *)&stru_A8EB00 + 644) - SpawnManagerClass_field_5C; /*0x6b72c4*/
  LABEL_11:
            if ( !SpawnManagerClass_field_64 )
            {
  LABEL_128:
              if ( this->SpawnManagerClass_field_70 != 2 && !HouseClass::IonSensitivesShouldBeOffline() )
              {
                if ( *(unsigned int *)(*(unsigned int *)(this->spawnVectorCount + 4 * v5) + 20) != 1 ) /*0x6b72fc*/
                  goto LABEL_21; /*0x6b72fc*/
                alignmentPadding154 = this->owner[1].alignmentPadding154; /*0x6b7301*/
                if ( !*alignmentPadding154 ) /*0x6b7307*/
                  sub_7DC720(-2147467261); /*0x6b7312*/
                if ( !(*(unsigned __int8 (__stdcall **)(int))(*(unsigned int *)*alignmentPadding154 + 16))(*alignmentPadding154) )
                {
                  v13 = this->owner[1].alignmentPadding154; /*0x6b732c*/
                  if ( !*v13 ) /*0x6b7332*/
                    sub_7DC720(-2147467261); /*0x6b733d*/
                  if ( !(*(unsigned __int8 (__stdcall **)(int))(*(unsigned int *)*v13 + 128))(*v13) )
                  {
  LABEL_21:
                    owner = this->owner; /*0x6b735c*/
                    if ( !owner || (((unsigned int *)owner)[0] & 4) == 0 || !*((((unsigned int *)owner)[0] & 4) != 0 ? &owner[1].__pad_18C[1] : (char *)1709) )
                    {
                      if ( *(unsigned char *)((*((int (__thiscall **)(TechnoClass *))owner->vtable1 + 33))(owner) + 3432) ) /*0x6b7392*/
                      {
                        v15 = v91; /*0x6b73a1*/
                        this->SpawnManagerClass_field_5C = *(unsigned int * *)((char *)&stru_A8EB00 + 644); /*0x6b73a5*/
                        v16 = 9; /*0x6b73a8*/
                        this->SpawnManagerClass_field_60 = v15; /*0x6b73ad*/
                      }
                      else
                      {
                        this->SpawnManagerClass_field_5C = *(unsigned int * *)((char *)&stru_A8EB00 + 644); /*0x6b73b2*/
                        v16 = 20; /*0x6b73b9*/
                        this->SpawnManagerClass_field_60 = v91; /*0x6b73be*/
                      }
                      this->SpawnManagerClass_field_64 = v16; /*0x6b73c1*/
                      if ( *(unsigned int *)(*(unsigned int *)(this->spawnVectorCount + 4 * v5) + 20) == 1 ) /*0x6b73cd*/
                      {
                        v17 = *(unsigned int *)(*((int (__thiscall **)(TechnoClass *, unsigned int))this->owner->vtable1 + 254))( /*0x6b73dc*/
                                           this->owner,
                                           0);
                        if ( v17 ) /*0x6b73e0*/
                        {
                          if ( *(int *)(v17 + 156) > 1 ) /*0x6b73e8*/
                          {
                            v79 = 1; /*0x6b73f1*/
                            this->owner->currentBurstIndex = v5 & 1; /*0x6b73f6*/
                          }
                        }
                      }
                      *(unsigned int *)(*(unsigned int *)(this->spawnVectorCount + 4 * v5) + 4) = 2; /*0x6b7404*/
                      v18 = (*((int (__thiscall **)(TechnoClass *, unsigned int))this->owner->vtable1 + 254))(this->owner, 0); /*0x6b7410*/
                      v86 = 0; /*0x6b741c*/
                      v87 = 0; /*0x6b7420*/
                      v88 = 0; /*0x6b7424*/
                      v19 = *(unsigned char *)(*(unsigned int *)&v18->q_4C4 == 0; /*0x6b7436*/
                      v20 = this->owner; /*0x6b743b*/
                      if ( v20->currentBurstIndex ) /*0x6b743e*/
                      {
                        vtable0 = v20->RadioClass; /*0x6b7448*/
                        v22 = (unsigned int *)(*((int (__thiscall **)(TechnoClass *))v20->vtable1 + 33))(v20); /*0x6b744a*/
                        v23 = (int *)(*((int (__thiscall **)(TechnoClass *, char *, BOOL, unsigned int, unsigned int, unsigned int))vtable0 /*0x6b7473*/
                                      + 44))(
                                       this->owner,
                                       v92,
                                       v19,
                                       v22[876],
                                       v22[877],
                                       v22[878]);
                      }
                      else
                      {
                        v23 = (int *)(*((int (__thiscall **)(TechnoClass *, int *, BOOL, unsigned int, unsigned int, unsigned int))v20->RadioClass /*0x6b7492*/
                                      + 44))(
                                       v20,
                                       &v93,
                                       v19,
                                       0,
                                       0,
                                       0);
                      }
                      v24 = *v23; /*0x6b7498*/
                      v86 = *v23; /*0x6b74a0*/
                      v5 = v80; /*0x6b74a4*/
                      v25 = v23[1]; /*0x6b74a8*/
                      v87 = v25; /*0x6b74ab*/
                      v88 = v23[2] + 10; /*0x6b74b5*/
                      if ( this->spawnOwner == *(HouseClass **)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1352) ) /*0x6b74c2*/
                      {
                        v86 = v24 - dword_84009C; /*0x6b74d3*/
                        v87 = v25 - dword_8400A0; /*0x6b74d7*/
                      }
                      Value = ProgressTimer::GetValue((ProgressTimer *)this->owner->primaryFacing, &v81); /*0x6b74e9*/
                      (*(void (__thiscall **)(unsigned int *, int *, unsigned int))(*v9 + 216))( /*0x6b7505*/
                        v9,
                        &v86,
                        (unsigned __int8)((unsigned int)((*Value >> 7) + 1) >> 1));
                      if ( this->spawnOwner == *(HouseClass **)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1352) ) /*0x6b7519*/
                      {
                        v27 = (AnimClass *)RA2_OPNEW(0x1C8u); /*0x6b7525*/
                        if ( v27 ) /*0x6b752c*/
                        {
                          v89[0] = v9[39]; /*0x6b753a*/
                          v89[1] = v9[40]; /*0x6b7541*/
                          v89[2] = v9[41]; /*0x6b7548*/
                          Index = AnimTypeClass::FindIndex(off_840098); /*0x6b7552*/
                          AnimClass::ctor( /*0x6b7575*/
                            v27,
                            *(void **)(((unsigned int *)&FootClass_Array)[3] + 4 * Index),
                            v89,
                            (void *)2,
                            1,
                            (void *)0x600,
                            (void *)0xFFFFFFF6,
                            0);
                        }
                      }
                      if ( v79 ) /*0x6b7580*/
                        this->owner->currentBurstIndex = 0; /*0x6b7585*/
                      if ( *(unsigned int *)(*(unsigned int *)(this->spawnVectorCount + 4 * v80) + 20) == 1 ) /*0x6b7599*/
                      {
                        SpawnManagerClass_field_6C = this->SpawnManagerClass_field_6C; /*0x6b759b*/
                        if ( SpawnManagerClass_field_6C ) /*0x6b75a0*/
                        {
                          this->SpawnManagerClass_field_68 = SpawnManagerClass_field_6C; /*0x6b75a2*/
                          this->SpawnManagerClass_field_6C = 0; /*0x6b75a5*/
                        }
                        (*(void (__thiscall **)(unsigned int *, int, int))(*v9 + 1152))(v9, this->SpawnManagerClass_field_68, 1); /*0x6b75b6*/
                        (*(void (__thiscall **)(unsigned int *, int, unsigned int))(*v9 + 488))(v9, 2, 0); /*0x6b75c4*/
                      }
                      else
                      {
                        v30 = (short *)(*((int (__thiscall **)(TechnoClass *, int *))this->owner->vtable1 + 110))( /*0x6b75d9*/
                                           this->owner,
                                           &v82);
                        v31 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v30); /*0x6b75e5*/
                        v32 = *v9; /*0x6b75ea*/
                        NeighbourContent = Cell::GetNeighbourContent(v31, 0); /*0x6b75f2*/
                        (*(void (__thiscall **)(unsigned int *, void *, int))(v32 + 1152))(v9, NeighbourContent, 1); /*0x6b75fa*/
                        (*(void (__thiscall **)(unsigned int *, int, unsigned int))(*v9 + 488))(v9, 2, 0); /*0x6b7608*/
                      }
                    }
                  }
                }
              }
            }
  LABEL_87:
            v80 = ++v5; /*0x6b7960*/
            if ( v5 >= *(unsigned int *)this->__pad_48 ) /*0x6b7964*/
              goto LABEL_88; /*0x6b7964*/
            break; /*0x6b7964*/
          case 1:
            v34 = *(unsigned int *)(v7 + 16); /*0x6b7613*/
            v35 = *(unsigned int *)(v7 + 8); /*0x6b7616*/
            if ( v35 == -1 ) /*0x6b761c*/
              goto LABEL_49; /*0x6b761c*/
            if ( *(unsigned int * *)((char *)&stru_A8EB00 + 644) - v35 >= v34 ) /*0x6b7628*/
              goto LABEL_50; /*0x6b7628*/
            v34 -= *(unsigned int * *)((char *)&stru_A8EB00 + 644) - v35; /*0x6b762a*/
  LABEL_49:
            if ( !v34 ) /*0x6b762e*/
  LABEL_50:
              UnitClass::ClearTargetRef((UnitClass *)this, (int)v9); /*0x6b7637*/
            goto LABEL_87; /*0x6b763c*/
          case 2:
            if ( *(unsigned int *)(v7 + 20) != 1 ) /*0x6b7645*/
            {
              v36 = this->SpawnManagerClass_field_6C; /*0x6b764b*/
              if ( v36 ) /*0x6b7650*/
              {
                this->SpawnManagerClass_field_68 = v36; /*0x6b7652*/
                this->SpawnManagerClass_field_6C = 0; /*0x6b7655*/
              }
              if ( !this->SpawnManagerClass_field_68 ) /*0x6b765c*/
                goto LABEL_55; /*0x6b7661*/
              v37 = (short *)(*((int (__thiscall **)(TechnoClass *, int *))this->owner->vtable1 + 110))( /*0x6b76a9*/
                                 this->owner,
                                 &v83);
              v38 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v37); /*0x6b76b5*/
              v39 = *v9; /*0x6b76ba*/
              v40 = Cell::GetNeighbourContent(v38, 4u); /*0x6b76c2*/
              (*(void (__thiscall **)(unsigned int *, void *, int))(v39 + 1152))(v9, v40, 1); /*0x6b76ca*/
              (*(void (__thiscall **)(unsigned int *, int, unsigned int))(*v9 + 488))(v9, 2, 0); /*0x6b76d8*/
            }
            goto LABEL_87; /*0x6b76de*/
          case 3:
            v41 = this->SpawnManagerClass_field_6C; /*0x6b76e3*/
            if ( v41 ) /*0x6b76e8*/
            {
              this->SpawnManagerClass_field_68 = v41; /*0x6b76ea*/
              this->SpawnManagerClass_field_6C = 0; /*0x6b76ed*/
            }
            if ( v9[191] && this->SpawnManagerClass_field_68 ) /*0x6b7702*/
            {
              (*(void (__thiscall **)(unsigned int, int))(***(unsigned int ***)(this->spawnVectorCount + 4 * v5) + 968))( /*0x6b7718*/
                **(unsigned int **)(this->spawnVectorCount + 4 * v5),
                this->SpawnManagerClass_field_68);
              (*(void (__thiscall **)(unsigned int, int, unsigned int))(***(unsigned int ***)(this->spawnVectorCount + 4 * v5) + 488))( /*0x6b772c*/
                **(unsigned int **)(this->spawnVectorCount + 4 * v5),
                1,
                0);
            }
            else
            {
  LABEL_55:
              (*(void (__thiscall **)(unsigned int *, TechnoClass *, int))(*v9 + 1152))(v9, this->owner, 1); /*0x6b7663*/
              (*(void (__thiscall **)(unsigned int *, unsigned int))(*v9 + 968))(v9, 0); /*0x6b7679*/
              (*(void (__thiscall **)(unsigned int *, int, unsigned int))(*v9 + 488))(v9, 2, 0); /*0x6b7687*/
              *(unsigned int *)(*(unsigned int *)(this->spawnVectorCount + 4 * v5) + 4) = 4; /*0x6b7693*/
            }
            goto LABEL_87; /*0x6b7732*/
          case 4:
            v42 = this->SpawnManagerClass_field_6C; /*0x6b7737*/
            if ( v42 ) /*0x6b773c*/
            {
              this->SpawnManagerClass_field_68 = v42; /*0x6b773e*/
              this->SpawnManagerClass_field_6C = 0; /*0x6b7741*/
            }
            if ( (int)v9[191] > 0 && this->SpawnManagerClass_field_68 ) /*0x6b7752*/
            {
              *(unsigned int *)(*(unsigned int *)(this->spawnVectorCount + 4 * v5) + 4) = 3; /*0x6b775f*/
              v43 = **(unsigned int **)(this->spawnVectorCount + 4 * v5); /*0x6b776c*/
              (*(void (__thiscall **)(int, int))(*(unsigned int *)v43 + 968))(v43, this->SpawnManagerClass_field_68); /*0x6b7774*/
              (*(void (__thiscall **)(unsigned int, int, unsigned int))(***(unsigned int ***)(this->spawnVectorCount + 4 * v5) + 488))( /*0x6b7788*/
                **(unsigned int **)(this->spawnVectorCount + 4 * v5),
                1,
                0);
            }
            else
            {
              v44 = (unsigned short *)(*((int (__thiscall **)(TechnoClass *, int *))this->owner->vtable1 + 110))( /*0x6b77a5*/
                               this->owner,
                               &v84);
              v45 = (unsigned short *)(*(int (__thiscall **)(unsigned int *, char *))(*v9 + 440))(v9, v85); /*0x6b77ae*/
              if ( *v45 == *v44 /*0x6b77fd*/
                && v45[1] == v44[1]
                && (v90 = v9[39],
                    location = ((unsigned int *)this->owner)[0],
                    v91 = v9[40],
                    v47 = v9[41],
                    v90 = *location,
                    v91 = location[1],
                    v47 - location[2] < 20) )
              {
                (*(void (__thiscall **)(unsigned int *))(*v9 + 212))(v9); /*0x6b7803*/
                *(unsigned int *)(*(unsigned int *)(this->spawnVectorCount + 4 * v5) + 4) = 6; /*0x6b780f*/
                SpawnManagerClass_field_34 = this->SpawnManagerClass_field_34; /*0x6b781e*/
                v49 = (unsigned int *)(*(unsigned int *)(this->spawnVectorCount + 4 * v5) + 8); /*0x6b7824*/
                *v49 = *(unsigned int * *)((char *)&stru_A8EB00 + 644); /*0x6b7827*/
                v49[1] = v94; /*0x6b782d*/
                v49[2] = SpawnManagerClass_field_34; /*0x6b7830*/
              }
              else
              {
                (*(void (__thiscall **)(unsigned int *, TechnoClass *, int))(*v9 + 1152))(v9, this->owner, 1); /*0x6b7842*/
                (*(void (__thiscall **)(unsigned int *, unsigned int))(*v9 + 968))(v9, 0); /*0x6b784e*/
                (*(void (__thiscall **)(unsigned int *, int, unsigned int))(*v9 + 488))(v9, 2, 0); /*0x6b785c*/
              }
            }
            goto LABEL_87; /*0x6b778e*/
          case 6:
            v50 = *(unsigned int *)(v7 + 8); /*0x6b7867*/
            v51 = *(unsigned int *)(v7 + 16); /*0x6b786a*/
            if ( v50 == -1 ) /*0x6b7870*/
              goto LABEL_75; /*0x6b7870*/
            if ( *(unsigned int * *)((char *)&stru_A8EB00 + 644) - v50 >= v51 ) /*0x6b787c*/
              goto LABEL_76; /*0x6b787c*/
            v51 -= *(unsigned int * *)((char *)&stru_A8EB00 + 644) - v50; /*0x6b787e*/
  LABEL_75:
            if ( !v51 ) /*0x6b7882*/
            {
  LABEL_76:
              *(unsigned int *)(v7 + 4) = 0; /*0x6b7888*/
              v52 = v9[433]; /*0x6b788f*/
              v9[191] = *(unsigned int *)(v52 + 1668); /*0x6b789b*/
              v53 = *(unsigned int *)(v52 + 160); /*0x6b78a1*/
              v9[27] = v53; /*0x6b78a7*/
              v9[28] = v53; /*0x6b78aa*/
            }
            goto LABEL_87; /*0x6b78ad*/
          case 7:
            v54 = *(unsigned int *)(v7 + 16); /*0x6b78b2*/
            v55 = *(unsigned int *)(v7 + 8); /*0x6b78b5*/
            if ( v55 == -1 ) /*0x6b78bb*/
              goto LABEL_80; /*0x6b78bb*/
            if ( *(unsigned int * *)((char *)&stru_A8EB00 + 644) - v55 >= v54 ) /*0x6b78c7*/
              goto LABEL_81; /*0x6b78c7*/
            v54 -= *(unsigned int * *)((char *)&stru_A8EB00 + 644) - v55; /*0x6b78c9*/
  LABEL_80:
            if ( !v54 ) /*0x6b78cd*/
            {
  LABEL_81:
              v56 = (int (__thiscall **)(HouseClass *, int))this->spawnOwner->AbstractClass; /*0x6b78db*/
              v57 = (*((int (__thiscall **)(TechnoClass *))this->owner->vtable1 + 15))(this->owner); /*0x6b78dd*/
              **v8 = v56[35](this->spawnOwner, v57); /*0x6b78ed*/
              spawnOwner = this->spawnOwner; /*0x6b78f5*/
              *(unsigned int *)(*(unsigned int *)(this->spawnVectorCount + 4 * v5) + 20) = spawnOwner == *(HouseClass **)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1248) /*0x6b7925*/
                                                                            || spawnOwner == *(HouseClass **)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1300)
                                                                            || spawnOwner == *(HouseClass **)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1352);
              v59 = **(unsigned int **)(this->spawnVectorCount + 4 * v5); /*0x6b7932*/
              (*(void (__thiscall **)(int))(*(unsigned int *)&v59->q_350)(v59); /*0x6b7936*/
              *(unsigned int *)(**(unsigned int **)(this->spawnVectorCount + 4 * v5) + 724) = this->owner; /*0x6b7947*/
              *(unsigned int *)(*(unsigned int *)(this->spawnVectorCount + 4 * v5) + 4) = 0; /*0x6b7953*/
            }
            goto LABEL_87; /*0x6b7953*/
          default:
            goto LABEL_87;
        }
      }
    }
  LABEL_88:
    SpawnManagerClass_field_70 = this->SpawnManagerClass_field_70; /*0x6b796a*/
    v61 = 0; /*0x6b796d*/
    v62 = 0; /*0x6b796f*/
    if ( SpawnManagerClass_field_70 ) /*0x6b7973*/
    {
      v63 = SpawnManagerClass_field_70 - 1; /*0x6b7979*/
      if ( v63 ) /*0x6b797a*/
      {
        if ( v63 == 1 ) /*0x6b797d*/
        {
          v64 = 1; /*0x6b7986*/
          if ( *(int *)this->__pad_48 <= 0 ) /*0x6b798a*/
            goto LABEL_98; /*0x6b798a*/
          v65 = this->spawnVectorCount; /*0x6b798c*/
          v66 = *(unsigned int *)this->__pad_48; /*0x6b798f*/
          do /*0x6b79a6*/
          {
            v67 = *(unsigned int *)(*(unsigned int *)v65 + 4); /*0x6b7993*/
            if ( v67 == 3 || v67 == 4 ) /*0x6b799e*/
              v64 = 0; /*0x6b79a0*/
            v65 += 4; /*0x6b79a2*/
            --v66; /*0x6b79a5*/
          }
          while ( v66 ); /*0x6b79a6*/
          if ( v64 ) /*0x6b79aa*/
  LABEL_98:
            this->SpawnManagerClass_field_70 = 0; /*0x6b79b0*/
        }
        return; /*0x6b79be*/
      }
      if ( !this->SpawnManagerClass_field_68 ) /*0x6b79bf*/
      {
  LABEL_100:
        UnitClass::ProcessIdleOrders((UnitClass *)this); /*0x6b79c4*/
        return; /*0x6b79d2*/
      }
      v68 = *(unsigned int *)this->__pad_48; /*0x6b79d3*/
      if ( v68 <= 0 ) /*0x6b79d8*/
      {
  LABEL_106:
        v71 = 0; /*0x6b79f8*/
        if ( v68 > 0 ) /*0x6b79fc*/
        {
          v72 = v94; /*0x6b7a02*/
          do /*0x6b7b09*/
          {
            v73 = *(unsigned int **)(this->spawnVectorCount + 4 * v71); /*0x6b7a09*/
            if ( v73[1] == 2 ) /*0x6b7a10*/
            {
              if ( *(unsigned char *)(*(unsigned int *)(*v73 + 1732) + 3432) ) /*0x6b7a1e*/
              {
                v62 = 1; /*0x6b7a2e*/
                UnitClass::GetExitCell( /*0x6b7a37*/
                  (int)&g_MissionQueueFrame,
                  (unsigned int *)*v73,
                  (unsigned int *)this->SpawnManagerClass_field_68);
                g_MissionQueueFrame.nextScenario[0] = *(unsigned int * *)((char *)&stru_A8EB00 + 644); /*0x6b7a46*/
                g_MissionQueueFrame.nextScenario[1] = v72; /*0x6b7a4b*/
                g_MissionQueueFrame.nextScenario[2] = 2; /*0x6b7a51*/
                v74 = *(int **)(this->spawnVectorCount + 4 * v71); /*0x6b7a5a*/
                if ( v74[5] == 1 ) /*0x6b7a65*/
                {
                  v74[1] = 1; /*0x6b7a67*/
                  if ( this->spawnOwner == *(HouseClass **)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1248) ) /*0x6b7a80*/
                    v75 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1200) /*0x6b7a88*/
                        + *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1204);
                  else
                    v75 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1252) /*0x6b7aab*/
                        + *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 1256);
                  v76 = (unsigned int *)(*(unsigned int *)(this->spawnVectorCount + 4 * v71) + 8); /*0x6b7a94*/
                  *v76 = *(unsigned int * *)((char *)&stru_A8EB00 + 644); /*0x6b7a97*/
                  v76[1] = v94; /*0x6b7a9d*/
                  v76[2] = v75; /*0x6b7aa0*/
                }
                else
                {
                  UnitClass::ClearTargetRef((UnitClass *)this, *v74); /*0x6b7acd*/
                }
              }
              else
              {
                v73[1] = 3; /*0x6b7ad4*/
                v77 = **(unsigned int **)(this->spawnVectorCount + 4 * v71); /*0x6b7ae1*/
                (*(void (__thiscall **)(int, int))(*(unsigned int *)v77 + 968))(v77, this->SpawnManagerClass_field_68); /*0x6b7ae9*/
                (*(void (__thiscall **)(unsigned int, int, unsigned int))(***(unsigned int ***)(this->spawnVectorCount + 4 * v71) + 488))( /*0x6b7afd*/
                  **(unsigned int **)(this->spawnVectorCount + 4 * v71),
                  1,
                  0);
              }
            }
            ++v71; /*0x6b7b06*/
          }
          while ( v71 < *(unsigned int *)this->__pad_48 ); /*0x6b7b09*/
          if ( v62 ) /*0x6b7b11*/
            UnitClass::ProcessIdleOrders((UnitClass *)this); /*0x6b7b15*/
        }
        this->SpawnManagerClass_field_70 = 2; /*0x6b7b1a*/
      }
      else
      {
        v69 = this->spawnVectorCount; /*0x6b79da*/
        while ( 1 ) /*0x6b79df*/
        {
          v70 = *(unsigned int *)(*(unsigned int *)v69 + 4); /*0x6b79df*/
          if ( v70 != 2 && v70 != 7 ) /*0x6b79ea*/
            break; /*0x6b79ea*/
          ++v61; /*0x6b79f0*/
          v69 += 4; /*0x6b79f1*/
          if ( v61 >= v68 ) /*0x6b79f6*/
            goto LABEL_106; /*0x6b79f6*/
        }
      }
    }
    else
    {
      v78 = this->SpawnManagerClass_field_6C; /*0x6b7b29*/
      if ( v78 ) /*0x6b7b2e*/
      {
        this->SpawnManagerClass_field_68 = v78; /*0x6b7b30*/
        this->SpawnManagerClass_field_6C = 0; /*0x6b7b33*/
      }
      if ( this->SpawnManagerClass_field_68 ) /*0x6b7b36*/
      {
        if ( (*((unsigned __int8 (__thiscall **)(TechnoClass *, int))this->owner->vtable1 + 235))( /*0x6b7b43*/
               this->owner,
               this->SpawnManagerClass_field_68) )
        {
          this->SpawnManagerClass_field_70 = 1; /*0x6b7b5c*/
          return; /*0x6b7b5c*/
        }
        goto LABEL_100; /*0x6b7b4b*/
      }
    }
}
} // namespace gamemd

// 0x6DA5C0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::ProcessOccupancy()
{
    int *v3; // ebx
    int result; // eax
    int *v6; // edi
    int v7; // esi
    int v8; // eax
    int v9; // ecx
    int v10; // eax
    int v11; // eax
    bool v12; // bl
    BuildingClass *v13; // ecx
    House *v14; // eax
    int v15; // [esp+8h] [ebp-4h]

    v3 = a2; /*0x6da5c2*/
    g_MoveFeedback = 1; /*0x6da5c6*/
    result = a2[2]; /*0x6da5ce*/
    if ( result <= 0 || (result = a2[3], result <= 0) || (result = *((unsigned int *)this + 876), v15 = 0, result <= 0) ) /*0x6da5f6*/
    {
      g_MoveFeedback = 1; /*0x6da730*/
    }
    else
    {
      v6 = dword_B0CEC8; /*0x6da5fe*/
      do /*0x6da714*/
      {
        v7 = *v6; /*0x6da603*/
        if ( *v6 ) /*0x6da603*/
        {
          if ( *(unsigned char *)(v7 + 144) ) /*0x6da60d*/
          {
            v8 = v6[1] - ((unsigned int *)this)[0]; /*0x6da62a*/
            v9 = v6[2] - ((unsigned int *)this)[0]; /*0x6da62f*/
            if ( v8 >= *v3 && v8 < v3[2] + *v3 ) /*0x6da640*/
            {
              v10 = v3[1]; /*0x6da646*/
              if ( v9 >= v10 && v9 < v3[3] + v10 ) /*0x6da656*/
              {
                if ( Selection::GetFlag() ) /*0x6da65c*/
                {
                  v11 = (*(int (__thiscall **)(int))(*(unsigned int *)v7 + 136))(v7); /*0x6da669*/
                  MoveFeedback::ProcessCommand((MoveFeedback *)(v11 + 36)); /*0x6da674*/
                }
                else if ( a3 ) /*0x6da684*/
                {
                  a3((unsigned char *)v7); /*0x6da72b*/
                }
                else
                {
                  v12 = 0; /*0x6da68e*/
                  if ( (*(int (__thiscall **)(int))(*(unsigned int *)v7 + 44))(v7) == 6 ) /*0x6da696*/
                  {
                    v13 = *(BuildingClass **)(v7 + 1312); /*0x6da698*/
                    if ( ((unsigned int *)v13)[4] ) /*0x6da69e*/
                      v12 = BuildingClass::Is1x1AndUndeployable_BuildingMassSelectable(v13); /*0x6da6b1*/
                  }
                  v14 = (House *)(*(int (__thiscall **)(int))(*(unsigned int *)v7 + 60))(v7); /*0x6da6b7*/
                  if ( v14 /*0x6da6e5*/
                    && (unsigned __int8)House::IsHumanPlayer(v14)
                    && (*(unsigned __int8 (__thiscall **)(int))(*(unsigned int *)v7 + 312))(v7)
                    && ((*(int (__thiscall **)(int))(*(unsigned int *)v7 + 44))(v7) != 6 || v12) )
                  {
                    if ( (*(unsigned __int8 (__thiscall **)(int))(*(unsigned int *)v7 + 332))(v7) ) /*0x6da6eb*/
                      g_MoveFeedback = 0; /*0x6da6f5*/
                  }
                  v3 = a2; /*0x6da6fc*/
                }
              }
            }
          }
        }
        result = v15 + 1; /*0x6da70a*/
        v6 += 3; /*0x6da70b*/
        ++v15; /*0x6da710*/
      }
      while ( v15 < *((unsigned int *)this + 876) ); /*0x6da714*/
      g_MoveFeedback = 1; /*0x6da71d*/
    }
    return result; /*0x6da71c*/
}
} // namespace gamemd

// 0x6F60D0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::DrawSelectionBox(Point2D* screen_pos, RectangleStruct* bounds) const
{
    int v1; // edi
    int result; // eax
    int v4; // edi
    int v5; // eax
    int *v6; // edx
    int v7; // eax
    int v8; // ecx
    int v9; // ebp
    int *v10; // eax
    int v11; // esi
    int v12; // ebp
    int v13; // edi
    int v14; // ebx
    int *v15; // eax
    int *v16; // eax
    int *v17; // eax
    int *v18; // eax
    int *v19; // eax
    int *v20; // eax
    int *v21; // eax
    int *v22; // eax
    int *v23; // eax
    int *v24; // eax
    int v25; // [esp-8h] [ebp-60h]
    int v26; // [esp+Ch] [ebp-4Ch]
    int v27; // [esp+10h] [ebp-48h]
    int v28; // [esp+14h] [ebp-44h]
    int v29; // [esp+18h] [ebp-40h]
    int v30; // [esp+1Ch] [ebp-3Ch] BYREF
    int v31; // [esp+20h] [ebp-38h]
    int v32; // [esp+24h] [ebp-34h]
    int v33; // [esp+28h] [ebp-30h] BYREF
    int v34; // [esp+2Ch] [ebp-2Ch]
    int v35; // [esp+30h] [ebp-28h]
    int v36; // [esp+34h] [ebp-24h] BYREF
    int v37; // [esp+38h] [ebp-20h]
    int v38; // [esp+3Ch] [ebp-1Ch]
    int v39; // [esp+40h] [ebp-18h] BYREF
    int v40; // [esp+44h] [ebp-14h] BYREF
    int v41; // [esp+48h] [ebp-10h] BYREF
    unsigned int v42[3]; // [esp+4Ch] [ebp-Ch] BYREF

    result = (*((int (__thiscall **)(TechnoClass *))this->vtable1 + 11))(this); /*0x6f60d8*/
    if ( result == 6 ) /*0x6f60de*/
    {
      (result) = ((result) & ~0xFF) | ((unsigned int)(((unsigned int *)this)[0]) & 0xFF) /*0x6f60e4*/
      if ( (unsigned char)result ) /*0x6f60ec*/
      {
        result = (*((int (__thiscall **)(TechnoClass *))this->vtable1 + 11))(this); /*0x6f60f6*/
        if ( result != 15 ) /*0x6f60fc*/
        {
          v25 = v1; /*0x6f6106*/
          v4 = 15; /*0x6f6109*/
          if ( (*((int (__thiscall **)(TechnoClass *, int))this->vtable1 + 114))(this, v25) < -4 ) /*0x6f6117*/
            v4 = 12; /*0x6f6119*/
          v5 = (*((int (__thiscall **)(TechnoClass *))this->vtable1 + 33))(this); /*0x6f6122*/
          v6 = (int *)(*(int (__thiscall **)(int, int *))(*(unsigned int *)v5 + 124))(v5, &v41); /*0x6f6134*/
          v7 = *v6; /*0x6f6136*/
          v8 = v6[1]; /*0x6f6138*/
          v30 = v6[2]; /*0x6f613e*/
          v28 = v7 / 2; /*0x6f6147*/
          v9 = v8 / 2; /*0x6f6157*/
          v29 = v8 / 2; /*0x6f615c*/
          if ( *(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[124] + 4) == 1 ) /*0x6f6163*/
            v27 = *(unsigned __int8 *)(*(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[124] + 372) + v4); /*0x6f6170*/
          else
            v27 = *(unsigned short *)(*(unsigned int *)(*(unsigned int *)&stru_87F5F0.__pad_58[124] + 372) + 2 * v4); /*0x6f6182*/
          v10 = (int *)(*((int (__thiscall **)(TechnoClass *, int *))this->vtable1 + 18))(this, &v40); /*0x6f618f*/
          v11 = *v10; /*0x6f6192*/
          v12 = -v9; /*0x6f6198*/
          v13 = v10[1]; /*0x6f619a*/
          v14 = v10[2]; /*0x6f61a3*/
          Coord::Subtract((Coord *)&v30, -v27, v12, v29); /*0x6f61b1*/
          v15 = Coord::Subtract((Coord *)v42, v11 + v30, v13 + v31, v14 + v32); /*0x6f61d1*/
          v36 = *v15; /*0x6f61da*/
          v37 = v15[1]; /*0x6f61e2*/
          v38 = v15[2]; /*0x6f61f2*/
          Coord::Subtract((Coord *)&v33, -v27, v12, 0); /*0x6f61f6*/
          v16 = Coord::Subtract((Coord *)v42, v11 + v33, v13 + v34, v14 + v35); /*0x6f6216*/
          v39 = *v16; /*0x6f621d*/
          v40 = v16[1]; /*0x6f6229*/
          v41 = v16[2]; /*0x6f6238*/
          DrawTacticalLine3D(&v39, &v36, v26); /*0x6f623c*/
          Coord::Subtract((Coord *)&v39, v27, v12, 0); /*0x6f624d*/
          v17 = Coord::Subtract((Coord *)v42, v11 + v39, v13 + v40, v14 + v41); /*0x6f626d*/
          v33 = *v17; /*0x6f6274*/
          v34 = v17[1]; /*0x6f627b*/
          v35 = v17[2]; /*0x6f628e*/
          Coord::Subtract((Coord *)&v36, -v27, v12, 0); /*0x6f6292*/
          v18 = Coord::Subtract((Coord *)v42, v11 + v36, v13 + v37, v14 + v38); /*0x6f62b2*/
          v30 = *v18; /*0x6f62b9*/
          v31 = v18[1]; /*0x6f62c5*/
          v32 = v18[2]; /*0x6f62d4*/
          DrawTacticalLine3D(&v30, &v33, v26); /*0x6f62d8*/
          Coord::Subtract((Coord *)&v39, -v27, v28, 0); /*0x6f62ed*/
          v19 = Coord::Subtract((Coord *)v42, v11 + v39, v13 + v40, v14 + v41); /*0x6f630d*/
          v33 = *v19; /*0x6f6316*/
          v34 = v19[1]; /*0x6f6322*/
          v35 = v19[2]; /*0x6f632e*/
          Coord::Subtract((Coord *)&v36, -v27, v12, 0); /*0x6f6332*/
          v20 = Coord::Subtract((Coord *)v42, v11 + v36, v13 + v37, v14 + v38); /*0x6f6352*/
          v30 = *v20; /*0x6f6359*/
          v31 = v20[1]; /*0x6f6364*/
          v32 = v20[2]; /*0x6f636b*/
          DrawTacticalLine3D(&v30, &v33, v26); /*0x6f6378*/
          v21 = Coord::Subtract((Coord *)v42, v11 - v27, v13 + v28, v14 + v29); /*0x6f6398*/
          v36 = *v21; /*0x6f639f*/
          v37 = v21[1]; /*0x6f63ab*/
          v38 = v21[2]; /*0x6f63bc*/
          Coord::Subtract((Coord *)&v39, -v27, v12, v29); /*0x6f63c0*/
          v22 = Coord::Subtract((Coord *)v42, v11 + v39, v13 + v40, v14 + v41); /*0x6f63e0*/
          v33 = *v22; /*0x6f63e7*/
          v34 = v22[1]; /*0x6f63ee*/
          v35 = v22[2]; /*0x6f63fd*/
          DrawTacticalLine3D(&v33, &v36, v26); /*0x6f6406*/
          v23 = Coord::Subtract((Coord *)v42, v11 + v27, v13 + v12, v14 + v29); /*0x6f6423*/
          v36 = *v23; /*0x6f642a*/
          v37 = v23[1]; /*0x6f6431*/
          v38 = v23[2]; /*0x6f6447*/
          Coord::Subtract((Coord *)&v39, -v27, v12, v29); /*0x6f644b*/
          v24 = Coord::Subtract((Coord *)v42, v11 + v39, v40 + v13, v41 + v14); /*0x6f6469*/
          v33 = *v24; /*0x6f6470*/
          v34 = v24[1]; /*0x6f6477*/
          v35 = v24[2]; /*0x6f6486*/
          return DrawTacticalLine3D(&v33, &v36, v26); /*0x6f648f*/
        }
      }
    }
    return result; /*0x6f6497*/
}
} // namespace gamemd

// 0x6F9E10
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::IsInvisible()
{
    int result; // eax

    result = (*((int (__thiscall **)(TechnoClass *))this->vtable1 + 33))(this); /*0x6f9e15*/
    if ( *(unsigned int *)(result + 176) ) /*0x6f9e1b*/
    {
      result = *(unsigned int *)((*((int (__thiscall **)(TechnoClass *))this->vtable1 + 33))(this) + 176); /*0x6f9e33*/
      (result) = ((result) & ~0xFF) | ((unsigned int)(*(unsigned char *)result == 0) & 0xFF) /*0x6f9e3d*/
    }
    else
    {
      (result) = ((result) & ~0xFF) | ((unsigned int)(0) & 0xFF) /*0x6f9e25*/
    }
    return result; /*0x6f9e27*/
}
} // namespace gamemd

// 0x6FB170
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::RevealShroud(int radius)
{
    int result; // eax
    int v3; // edi
    int v4; // ebp
    int v5; // ebx
    int v6; // eax
    unsigned int v7; // edi
    int v8; // eax
    int v9; // edx
    signed int v10; // eax
    int gapRadius; // ecx
    int v12; // edi
    int v13; // ebx
    int i; // eax
    int v15; // eax
    int v16; // ebp
    int (__thiscall **vtable0)(TechnoClass *); // edx
    House *v18; // eax
    unsigned int *v19; // eax
    unsigned int *v20; // eax
    unsigned int *v21; // eax
    unsigned int *v22; // eax
    House *v23; // eax
    unsigned int *v24; // eax
    short v25[2]; // [esp+4h] [ebp-20h] BYREF
    int v26; // [esp+8h] [ebp-1Ch]
    int v27; // [esp+Ch] [ebp-18h]
    int v28; // [esp+10h] [ebp-14h]
    int v29; // [esp+14h] [ebp-10h]
    int v30; // [esp+18h] [ebp-Ch]
    short v31; // [esp+1Ch] [ebp-8h]
    short v32; // [esp+1Eh] [ebp-6h]

    result = (int)dword_A83D4C; /*0x6fb170*/
    if ( dword_A83D4C ) /*0x6fb17d*/
    {
      (result) = ((result) & ~0xFF) | ((unsigned int)(this->isGeneratingGap) & 0xFF) /*0x6fb183*/
      if ( !(unsigned char)result ) /*0x6fb18b*/
      {
        result = (*((int (__thiscall **)(TechnoClass *))this->vtable1 + 212))(this); /*0x6fb193*/
        if ( (unsigned char)result ) /*0x6fb19b*/
        {
          if ( !this->gapRadius ) /*0x6fb1a1*/
            this->gapRadius = *(char *)((*((int (__thiscall **)(TechnoClass *))this->vtable1 + 33))(this) + 3282); /*0x6fb1bc*/
          v3 = ((unsigned int *)this)[0]; /*0x6fb1cb*/
          this->isGeneratingGap = 1; /*0x6fb1cd*/
          v4 = ((unsigned int *)this)[1]; /*0x6fb1d4*/
          v5 = ((unsigned int *)this)[2]; /*0x6fb1d7*/
          v6 = ZCoordToScreenY(v5); /*0x6fb1dc*/
          v7 = ((((unsigned int)(((unsigned __int64)(2004318071LL * v6) >> 32) - v6) >> 31) /*0x6fb1fb*/
               + ((int)(((unsigned __int64)(2004318071LL * v6) >> 32) - v6) >> 4)) << 8)
             + v3;
          v8 = ZCoordToScreenY(v5); /*0x6fb1fd*/
          v9 = ((unsigned __int64)(2004318071LL * v8) >> 32) - v8; /*0x6fb20b*/
          v10 = v7; /*0x6fb20d*/
          gapRadius = this->gapRadius; /*0x6fb21e*/
          v12 = -2 - gapRadius; /*0x6fb229*/
          v13 = -2 - gapRadius; /*0x6fb232*/
          v29 = gapRadius; /*0x6fb236*/
          v31 = v10 / 256; /*0x6fb23d*/
          v30 = -2 - gapRadius; /*0x6fb24b*/
          v32 = (int)(((((unsigned int)v9 >> 31) + (v9 >> 4)) << 8) + v4) / 256; /*0x6fb254*/
          for ( i = gapRadius + 2; v13 < i; ++v13 ) /*0x6fb25e*/
          {
            if ( v12 < i ) /*0x6fb266*/
            {
              v15 = v13 * v13; /*0x6fb271*/
              v16 = (gapRadius + 1) * (gapRadius + 1); /*0x6fb274*/
              v28 = v13 * v13; /*0x6fb277*/
              v27 = v16; /*0x6fb27b*/
              while ( 1 ) /*0x6fb285*/
              {
                if ( v15 + v12 * v12 < v16 ) /*0x6fb28e*/
                {
                  vtable0 = (int (__thiscall **)(TechnoClass *))this; /*0x6fb2a2*/
                  (v26) = ((v26) & ~0xFFFF) | ((unsigned int)(v13 + v31) & 0xFFFF) /*0x6fb2a4*/
                  (v26) = ((v26) & ~(0xFFFFULL << 16)) | (((unsigned __int64)(unsigned int)(v12 + v32) & 0xFFFF) << 16) /*0x6fb2a9*/
                  *(unsigned int *)v25 = v26; /*0x6fb2b2*/
                  v18 = (House *)vtable0[15](this); /*0x6fb2b8*/
                  if ( !(unsigned __int8)House::IsHumanPlayer(v18) /*0x6fb2e9*/
                    && !(unsigned __int8)HouseClass::IsAlliedWith((void *)this->owner, (void *)dword_A83D4C)
                    && !dword_A83D4C->__pad_140[181] )
                  {
                    if ( *((unsigned int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v25) + 76) != 1 /*0x6fb32c*/
                      && *((int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v25) + 76) >= 0 )
                    {
                      v19 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v25); /*0x6fb338*/
                      ++v19[76]; /*0x6fb349*/
                    }
                    v20 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v25); /*0x6fb355*/
                    ++v20[77]; /*0x6fb366*/
                    if ( *((int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v25) + 76) >= 1 ) /*0x6fb37d*/
                    {
                      v21 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v25); /*0x6fb389*/
                      v21[75] &= ~0x10u; /*0x6fb3a0*/
                      v22 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v25); /*0x6fb3a8*/
                      v22[75] &= ~8u; /*0x6fb3bb*/
                    }
                    v16 = v27; /*0x6fb3bd*/
                  }
                  v23 = (House *)(*((int (__thiscall **)(TechnoClass *))this->vtable1 + 15))(this); /*0x6fb3c5*/
                  if ( (unsigned __int8)House::IsHumanPlayer(v23) /*0x6fb3ef*/
                    || (unsigned __int8)HouseClass::IsAlliedWith((void *)this->owner, (void *)dword_A83D4C)
                    || dword_A83D4C->__pad_140[181] )
                  {
                    v24 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v25); /*0x6fb403*/
                    ++v24[79]; /*0x6fb414*/
                  }
                }
                gapRadius = v29; /*0x6fb416*/
                ++v12; /*0x6fb41a*/
                i = v29 + 2; /*0x6fb41b*/
                if ( v12 >= v29 + 2 ) /*0x6fb420*/
                  break; /*0x6fb420*/
                v15 = v28; /*0x6fb281*/
              }
              v12 = v30; /*0x6fb426*/
            }
          }
          if ( dword_A83D4C ) /*0x6fb43d*/
            dword_A83D4C->__pad_140[256] = 0; /*0x6fb43f*/
          FogOfWar::Render((FogOfWar *)&stru_87F5F0.__pad_58[416]); /*0x6fb44b*/
          return MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 2); /*0x6fb457*/
        }
      }
    }
    return result; /*0x6fb45c*/
}
} // namespace gamemd

// 0x6FB470
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::RemoveShroud()
{
    int result; // eax
    int v3; // edi
    int v4; // ebp
    int v5; // ebx
    int v6; // eax
    unsigned int v7; // edi
    int v8; // eax
    int v9; // edx
    signed int v10; // eax
    int gapRadius; // ecx
    int v12; // edi
    int v13; // ebx
    int i; // eax
    int v15; // eax
    int v16; // ebp
    int (__thiscall **vtable0)(TechnoClass *); // edx
    House *v18; // eax
    unsigned int *v19; // eax
    unsigned int *v20; // eax
    unsigned int *v21; // eax
    unsigned int *v22; // eax
    House *v23; // eax
    unsigned int *v24; // eax
    short v25[2]; // [esp+4h] [ebp-1Ch] BYREF
    int v26; // [esp+8h] [ebp-18h]
    int j; // [esp+Ch] [ebp-14h]
    int v28; // [esp+10h] [ebp-10h]
    int v29; // [esp+14h] [ebp-Ch]
    short v30; // [esp+18h] [ebp-8h]
    short v31; // [esp+1Ah] [ebp-6h]

    result = (int)dword_A83D4C; /*0x6fb470*/
    if ( dword_A83D4C ) /*0x6fb47d*/
    {
      (result) = ((result) & ~0xFF) | ((unsigned int)(this->isGeneratingGap) & 0xFF) /*0x6fb483*/
      if ( (unsigned char)result ) /*0x6fb48b*/
      {
        if ( !this->gapRadius ) /*0x6fb491*/
          this->gapRadius = *(char *)((*((int (__thiscall **)(TechnoClass *))this->vtable1 + 33))(this) + 3282); /*0x6fb4aa*/
        v3 = ((unsigned int *)this)[0]; /*0x6fb4b9*/
        this->isGeneratingGap = 0; /*0x6fb4bb*/
        v4 = ((unsigned int *)this)[1]; /*0x6fb4c2*/
        v5 = ((unsigned int *)this)[2]; /*0x6fb4c5*/
        v6 = ZCoordToScreenY(v5); /*0x6fb4ca*/
        v7 = ((((unsigned int)(((unsigned __int64)(2004318071LL * v6) >> 32) - v6) >> 31) /*0x6fb4e9*/
             + ((int)(((unsigned __int64)(2004318071LL * v6) >> 32) - v6) >> 4)) << 8)
           + v3;
        v8 = ZCoordToScreenY(v5); /*0x6fb4eb*/
        v9 = ((unsigned __int64)(2004318071LL * v8) >> 32) - v8; /*0x6fb4f9*/
        v10 = v7; /*0x6fb4fb*/
        gapRadius = this->gapRadius; /*0x6fb50c*/
        v12 = -2 - gapRadius; /*0x6fb517*/
        v13 = -2 - gapRadius; /*0x6fb520*/
        v28 = gapRadius; /*0x6fb524*/
        v30 = v10 / 256; /*0x6fb52b*/
        v29 = -2 - gapRadius; /*0x6fb539*/
        v31 = (int)(((((unsigned int)v9 >> 31) + (v9 >> 4)) << 8) + v4) / 256; /*0x6fb542*/
        for ( i = gapRadius + 2; v13 < i; ++v13 ) /*0x6fb54c*/
        {
          if ( v12 < i ) /*0x6fb554*/
          {
            v15 = v13 * v13; /*0x6fb55f*/
            v16 = (gapRadius + 1) * (gapRadius + 1); /*0x6fb562*/
            for ( j = v13 * v13; ; v15 = j ) /*0x6fb565*/
            {
              if ( v15 + v12 * v12 < v16 ) /*0x6fb578*/
              {
                vtable0 = (int (__thiscall **)(TechnoClass *))this; /*0x6fb58c*/
                (v26) = ((v26) & ~0xFFFF) | ((unsigned int)(v13 + v30) & 0xFFFF) /*0x6fb58e*/
                (v26) = ((v26) & ~(0xFFFFULL << 16)) | (((unsigned __int64)(unsigned int)(v12 + v31) & 0xFFFF) << 16) /*0x6fb593*/
                *(unsigned int *)v25 = v26; /*0x6fb59c*/
                v18 = (House *)vtable0[15](this); /*0x6fb5a2*/
                if ( !(unsigned __int8)House::IsHumanPlayer(v18) /*0x6fb5d3*/
                  && !(unsigned __int8)HouseClass::IsAlliedWith((void *)this->owner, (void *)dword_A83D4C)
                  && !dword_A83D4C->__pad_140[181] )
                {
                  v19 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v25); /*0x6fb5eb*/
                  --v19[77]; /*0x6fb5fc*/
                  if ( (&dword_A83D4C)[33].__pad_B0[42] ) /*0x6fb603*/
                  {
                    if ( *((int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v25) + 77) <= 0 ) /*0x6fb628*/
                    {
                      v20 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v25); /*0x6fb634*/
                      --v20[76]; /*0x6fb645*/
                      if ( *((int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v25) + 76) <= 0 ) /*0x6fb65e*/
                      {
                        v21 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v25); /*0x6fb66a*/
                        v21[75] |= 8u; /*0x6fb681*/
                        v22 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v25); /*0x6fb689*/
                        v22[75] |= 0x10u; /*0x6fb69c*/
                      }
                    }
                  }
                }
                v23 = (House *)(*((int (__thiscall **)(TechnoClass *))this->vtable1 + 15))(this); /*0x6fb6a2*/
                if ( (unsigned __int8)House::IsHumanPlayer(v23) /*0x6fb6cc*/
                  || (unsigned __int8)HouseClass::IsAlliedWith((void *)this->owner, (void *)dword_A83D4C)
                  || dword_A83D4C->__pad_140[181] )
                {
                  v24 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v25); /*0x6fb6e0*/
                  --v24[79]; /*0x6fb6f1*/
                }
              }
              gapRadius = v28; /*0x6fb6f3*/
              ++v12; /*0x6fb6f7*/
              i = v28 + 2; /*0x6fb6f8*/
              if ( v12 >= v28 + 2 ) /*0x6fb6fd*/
                break; /*0x6fb6fd*/
            }
            v12 = v29; /*0x6fb703*/
          }
        }
        if ( dword_A83D4C ) /*0x6fb71a*/
          dword_A83D4C->__pad_140[256] = 0; /*0x6fb71c*/
        FogOfWar::Render((FogOfWar *)&stru_87F5F0.__pad_58[416]); /*0x6fb728*/
        return MapClass::MarkForRedraw((GScreenClass *)&stru_87F5F0.__pad_58[416], 2); /*0x6fb734*/
      }
    }
    return result; /*0x6fb739*/
}
} // namespace gamemd

// 0x7013E0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::CheckOccupantState()
{
    int result; // eax

    if ( AbstractClass::COMStub_126((MissionClass *)this) ) /*0x7013e3*/
    {
      result = (*((int (__thiscall **)(TechnoClass *, AbstractClass *))this->vtable1 + 242))(this, this->lastTarget); /*0x7013f7*/
      (result) = ((result) & ~0xFF) | ((unsigned int)(1) & 0xFF) /*0x7013fd*/
    }
    else
    {
      (result) = ((result) & ~0xFF) | ((unsigned int)(0) & 0xFF) /*0x701401*/
    }
    return result; /*0x7013ff*/
}
} // namespace gamemd

// 0x705CA0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
CoordStruct* BuildingClass::GetBridgeAwareCoords(CoordStruct* out) const
{
    AbstractClass *target; // ecx
    int *v3; // ecx
    int *location; // esi
    unsigned char v6[12]; // [esp+4h] [ebp-Ch] BYREF
    int *v7; // [esp+14h] [ebp+4h]

    if ( (*((int (__thiscall **)(TechnoClass *))this->vtable1 + 97))(this) == 1 && (target = this->target) != 0 ) /*0x705cbb*/
    {
      v3 = (int *)(*((int (__thiscall **)(AbstractClass *, unsigned char *))target->vtable1 + 22))(target, v6); /*0x705cc7*/
      *v7 = *v3; /*0x705cd1*/
      v7[1] = v3[1]; /*0x705cd6*/
      v7[2] = v3[2]; /*0x705cdd*/
      return (int)v7; /*0x705cc9*/
    }
    else
    {
      location = ((unsigned int *)this)[0]; /*0x705cea*/
      *v7 = *location; /*0x705cf4*/
      v7[1] = location[1]; /*0x705cf9*/
      v7[2] = location[2]; /*0x705d00*/
      return (int)v7; /*0x705ce6*/
    }
}
} // namespace gamemd

// 0x705D60
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
BuildingTypeClass *BuildingClass::GetType_Thunk() {
    return this->GetTypePtr(); /*0x705d60*/
}
} // namespace gamemd

// 0x70C5A0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
bool BuildingClass::CheckCellPassability()
{
    int result; // eax

    (result) = ((result) & ~0xFF) | ((unsigned int)(this->isCloakableFlag != 0) & 0xFF) /*0x70c5a8*/
    return result; /*0x70c5ab*/
}
} // namespace gamemd

// 0x70F6E0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::UpdateThreatBounds()
{
    int v3; // eax
    int (__thiscall **vtable0)(BuildingClass *); // eax
    int v5; // eax
    int (__thiscall **v6)(BuildingClass *); // edx
    int v7; // eax
    int v8; // [esp-4h] [ebp-Ch]
    int v9; // [esp-4h] [ebp-Ch]

    if ( a2 ) /*0x70f6ea*/
    {
      v8 = -((unsigned int *)this)[0]; /*0x70f6f6*/
      v3 = (*((int (**)(void))this->vtable1 + 14))(); /*0x70f6f7*/
      CellClass::SetThreatBounds((CellClass *)a2, v3, v8); /*0x70f6fd*/
      vtable0 = (int (__thiscall **)(BuildingClass *))this->TechnoClass; /*0x70f702*/
      ((unsigned int *)this)[0] = 0; /*0x70f706*/
      v5 = vtable0[176](this); /*0x70f710*/
      v6 = (int (__thiscall **)(BuildingClass *))this->TechnoClass; /*0x70f716*/
      v9 = v5; /*0x70f718*/
      ((unsigned int *)this)[0] = v5; /*0x70f71b*/
      v7 = v6[14](this); /*0x70f721*/
      CellClass::SetThreatBounds((CellClass *)a2, v7, v9); /*0x70f727*/
    }
}
} // namespace gamemd

// 0x70F8F0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::FindBridgeCell()
{
    int (__thiscall **vtable0)(TechnoClass *, char *); // edx
    unsigned int *v2; // eax
    int v4; // ebx
    int v5; // edi
    int v6; // esi
    Cell *v7; // eax
    Building *v8; // eax
    int NthOfType; // eax
    Cell *v10; // eax
    Building *v11; // eax
    int v12; // eax
    Cell *v13; // eax
    Building *v14; // eax
    int v15; // eax
    Cell *v16; // eax
    Building *v17; // eax
    int v18; // eax
    short v19[2]; // [esp+4h] [ebp-34h] BYREF
    int v20; // [esp+8h] [ebp-30h]
    int v21; // [esp+Ch] [ebp-2Ch]
    int v22; // [esp+10h] [ebp-28h]
    int v23; // [esp+14h] [ebp-24h]
    int v24; // [esp+18h] [ebp-20h]
    int v25; // [esp+1Ch] [ebp-1Ch]
    int v26; // [esp+20h] [ebp-18h]
    short v27[3]; // [esp+24h] [ebp-14h] BYREF
    int v28; // [esp+2Ah] [ebp-Eh] BYREF
    int v29; // [esp+2Eh] [ebp-Ah]
    unsigned int *v30; // [esp+3Ch] [ebp+4h]
    int v31; // [esp+40h] [ebp+8h]

    vtable0 = (int (__thiscall **)(TechnoClass *, char *))this; /*0x70f8f8*/
    v20 = *(unsigned int * *)((char *)&g_BuildingLoadQueue_Array + 528); /*0x70f8fa*/
    v2 = (unsigned int *)vtable0[18](this, (char *)&v28 + 2); /*0x70f903*/
    v19[0] = *v2 / 256; /*0x70f916*/
    v19[1] = v2[1] / 256; /*0x70f92e*/
    *(unsigned int *)v27 = *(unsigned int *)v19; /*0x70f937*/
    if ( *((unsigned int *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v27) + 59) == 5 ) /*0x70f94d*/
    {
      *v30 = *(unsigned int *)v27; /*0x70f957*/
      return (int)v30; /*0x70f94f*/
    }
    else
    {
      v4 = 1; /*0x70f967*/
      v5 = -1; /*0x70f96c*/
      if ( v31 > 1 ) /*0x70f971*/
      {
        v6 = -1; /*0x70f977*/
        v25 = -1; /*0x70f97a*/
        do /*0x70f97e*/
        {
          if ( v6 <= v4 ) /*0x70f980*/
          {
            do /*0x70fb15*/
            {
              (v29) = ((v29) & ~0xFFFF) | ((unsigned int)(-(__int16)v4) & 0xFFFF) /*0x70f992*/
              (v21) = ((v21) & ~0xFFFF) | ((unsigned int)(v6 + v27[0]) & 0xFFFF) /*0x70f9a0*/
              (v21) = ((v21) & ~(0xFFFFULL << 16)) | (((unsigned __int64)(unsigned int)(v27[1] - v4) & 0xFFFF) << 16) /*0x70f9a5*/
              *(unsigned int *)v19 = v21; /*0x70f9b2*/
              v7 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v19); /*0x70f9bc*/
              if ( (unsigned __int8)Cell::IsBridge2(v7) ) /*0x70f9c3*/
              {
                v8 = (Building *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v19); /*0x70f9d6*/
                NthOfType = Building::GetNthOfType(v8); /*0x70f9dd*/
                if ( NthOfType > v5 ) /*0x70f9e4*/
                {
                  v5 = NthOfType; /*0x70f9e6*/
                  v20 = *(unsigned int *)v19; /*0x70f9ec*/
                }
              }
              (v22) = ((v22) & ~0xFFFF) | ((unsigned int)(v6 + v27[0]) & 0xFFFF) /*0x70f9fe*/
              (v22) = ((v22) & ~(0xFFFFULL << 16)) | (((unsigned __int64)(unsigned int)(v4 + v27[1]) & 0xFFFF) << 16) /*0x70fa03*/
              *(unsigned int *)v19 = v22; /*0x70fa16*/
              v10 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v19); /*0x70fa1a*/
              if ( (unsigned __int8)Cell::IsBridge2(v10) ) /*0x70fa21*/
              {
                v11 = (Building *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v19); /*0x70fa34*/
                v12 = Building::GetNthOfType(v11); /*0x70fa3b*/
                if ( v12 > v5 ) /*0x70fa42*/
                {
                  v5 = v12; /*0x70fa48*/
                  v20 = *(unsigned int *)v19; /*0x70fa4a*/
                }
              }
              (v26) = ((v26) & ~0xFFFF) | ((unsigned int)(-(__int16)v4) & 0xFFFF) /*0x70fa56*/
              (v23) = ((v23) & ~0xFFFF) | ((unsigned int)(v27[0] - v4) & 0xFFFF) /*0x70fa64*/
              (v23) = ((v23) & ~(0xFFFFULL << 16)) | (((unsigned __int64)(unsigned int)(v6 + v27[1]) & 0xFFFF) << 16) /*0x70fa69*/
              *(unsigned int *)v19 = v23; /*0x70fa76*/
              v13 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v19); /*0x70fa80*/
              if ( (unsigned __int8)Cell::IsBridge2(v13) ) /*0x70fa87*/
              {
                v14 = (Building *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v19); /*0x70fa9a*/
                v15 = Building::GetNthOfType(v14); /*0x70faa1*/
                if ( v15 > v5 ) /*0x70faa8*/
                {
                  v5 = v15; /*0x70faae*/
                  v20 = *(unsigned int *)v19; /*0x70fab0*/
                }
              }
              (v24) = ((v24) & ~0xFFFF) | ((unsigned int)(v4 + v27[0]) & 0xFFFF) /*0x70fac6*/
              (v24) = ((v24) & ~(0xFFFFULL << 16)) | (((unsigned __int64)(unsigned int)(v6 + v27[1]) & 0xFFFF) << 16) /*0x70facb*/
              *(unsigned int *)v19 = v24; /*0x70fada*/
              v16 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v19); /*0x70fade*/
              if ( (unsigned __int8)Cell::IsBridge2(v16) ) /*0x70fae5*/
              {
                v17 = (Building *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v19); /*0x70faf8*/
                v18 = Building::GetNthOfType(v17); /*0x70faff*/
                if ( v18 > v5 ) /*0x70fb06*/
                {
                  v5 = v18; /*0x70fb08*/
                  v20 = *(unsigned int *)v19; /*0x70fb0e*/
                }
              }
              ++v6; /*0x70fb12*/
            }
            while ( v6 <= v4 ); /*0x70fb15*/
            if ( v5 != -1 ) /*0x70fb1e*/
              break; /*0x70fb1e*/
            v6 = v25; /*0x70fb20*/
          }
          ++v4; /*0x70fb28*/
          v25 = --v6; /*0x70fb2c*/
        }
        while ( v4 < v31 ); /*0x70f97e*/
      }
      *v30 = v20; /*0x70fb36*/
      return (int)v30; /*0x70fb36*/
    }
}
} // namespace gamemd

// 0x722240
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::ClearFactoryData()
{
    int result; // eax
    int i; // ebp
    int v3; // edi
    unsigned int *v4; // eax
    int j; // ecx
    void **v6; // esi
    int v7; // esi
    int v8; // eax
    size_t v9; // eax
    unsigned int *v10; // esi
    int v11; // eax
    int v12; // eax
    int v13; // ecx
    int v14; // eax

    result = *(unsigned int *)((char *)&g_BuildingLoadQueue_Array + 504); /*0x722241*/
    for ( i = 0; i < *(unsigned int *)((char *)&g_BuildingLoadQueue_Array + 504); ++i ) /*0x72224e*/
    {
      v3 = *(unsigned int *)(((unsigned int *)&g_BuildingLoadQueue_Array)[2] + 4 * i); /*0x72225b*/
      v4 = *(unsigned int **)(v3 + 244); /*0x72225e*/
      if ( v4 ) /*0x722266*/
      {
        for ( j = 0; j <= *v4; *(unsigned int *)(v4[2] + 4 * j - 4) = 0 ) /*0x72226e*/
          ++j; /*0x722273*/
        *v4 = 0; /*0x72227e*/
        v6 = *(void ***)(v3 + 244); /*0x722280*/
        if ( v6 ) /*0x722288*/
        {
          RA2_OPDEL(v6[2]); /*0x72228e*/
          RA2_OPDEL(v6); /*0x722294*/
        }
        *(unsigned int *)(v3 + 244) = 0; /*0x72229c*/
      }
      if ( *(unsigned int *)(v3 + 252) ) /*0x7222a2*/
      {
        RA2_OPDEL(*(void **)(v3 + 252)); /*0x7222ad*/
        *(unsigned int *)(v3 + 252) = 0; /*0x7222b5*/
      }
      if ( *(unsigned int *)(v3 + 248) ) /*0x7222bb*/
      {
        RA2_OPDEL(*(void **)(v3 + 248)); /*0x7222c6*/
        *(unsigned int *)(v3 + 248) = 0; /*0x7222ce*/
      }
      *(unsigned int *)(v3 + 240) = 0; /*0x7222d4*/
      v7 = ObjectClass::ComputeAllocationSize(); /*0x7222df*/
      v8 = RA2_OPNEW(8 * v7); /*0x7222e9*/
      if ( !v8 ) /*0x7222f3*/
        v8 = 0; /*0x7222fc*/
      *(unsigned int *)(v3 + 252) = v8; /*0x7222fe*/
      v9 = ObjectClass::ComputeAllocationSize(); /*0x722304*/
      *(unsigned int *)(v3 + 248) = RA2_OPNEW(v9); /*0x722311*/
      v10 = (unsigned int *)RA2_OPNEW(0x14u); /*0x72231c*/
      if ( v10 ) /*0x722323*/
      {
        v11 = ObjectClass::ComputeAllocationSize(); /*0x722325*/
        v10[3] = 0; /*0x722331*/
        v10[4] = -1; /*0x722335*/
        *v10 = 0; /*0x72233c*/
        v10[1] = v11; /*0x72233e*/
        v12 = RA2_OPNEW(4 * v11 + 4); /*0x722341*/
        v13 = v10[1]; /*0x722346*/
        v10[2] = v12; /*0x722349*/
        v14 = 0; /*0x72234f*/
        if ( v13 >= 0 ) /*0x722353*/
        {
          do /*0x722362*/
          {
            ++v14; /*0x722358*/
            *(unsigned int *)(v10[2] + 4 * v14 - 4) = 0; /*0x722359*/
          }
          while ( v14 <= v10[1] ); /*0x722362*/
        }
      }
      else
      {
        v10 = 0; /*0x722366*/
      }
      *(unsigned int *)(v3 + 244) = v10; /*0x72236a*/
      AudioClass::ProcessEvent((AudioClass *)v3); /*0x722370*/
      result = ((unsigned int *)&g_BuildingLoadQueue_Array)[0]; /*0x722375*/
    }
    return result; /*0x722385*/
}
} // namespace gamemd

// 0x722770
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::RebuildOccupancyTracking()
{
    unsigned int *v2; // eax
    int i; // ecx
    void **v4; // esi
    int v5; // esi
    int v6; // eax
    size_t v7; // eax
    unsigned int *v8; // esi
    int v9; // eax
    int v10; // eax
    int v11; // ecx
    int v12; // eax

    v2 = (unsigned int *)*(unsigned int *)&this->u32_F4; /*0x722778*/
    if ( v2 ) /*0x722780*/
    {
      for ( i = 0; i <= *v2; *(unsigned int *)(v2[2] + 4 * i - 4) = 0 ) /*0x722788*/
        ++i; /*0x72278d*/
      *v2 = 0; /*0x722798*/
      v4 = (void **)(unsigned int *)&this->u32_F4; /*0x72279a*/
      if ( v4 ) /*0x7227a2*/
      {
        RA2_OPDEL(v4[2]); /*0x7227a8*/
        RA2_OPDEL(v4); /*0x7227ae*/
      }
      *(unsigned int *)&this->transporter = 0; /*0x7227b6*/
    }
    if ( *(unsigned int *)&this->transporter ) /*0x7227bc*/
    {
      RA2_OPDEL((void *)*(unsigned int *)&this->transporter); /*0x7227c7*/
      *(unsigned int *)&this->transporter = 0; /*0x7227cf*/
    }
    if ( *(unsigned int *)&this->q0F8 ) /*0x7227d5*/
    {
      RA2_OPDEL((void *)*(unsigned int *)&this->q0F8); /*0x7227e0*/
      *(unsigned int *)&this->q0F8 = 0; /*0x7227e8*/
    }
    *(unsigned int *)&this->q0F8 = 0; /*0x7227ee*/
    v5 = ObjectClass::ComputeAllocationSize(); /*0x7227f9*/
    v6 = RA2_OPNEW(8 * v5); /*0x722803*/
    if ( !v6 ) /*0x72280d*/
      v6 = 0; /*0x722816*/
    *(unsigned int *)&this->transporter = v6; /*0x722818*/
    v7 = ObjectClass::ComputeAllocationSize(); /*0x72281e*/
    *(unsigned int *)&this->q0F8 = RA2_OPNEW(v7); /*0x72282b*/
    v8 = (unsigned int *)RA2_OPNEW(0x14u); /*0x722836*/
    if ( v8 ) /*0x72283d*/
    {
      v9 = ObjectClass::ComputeAllocationSize(); /*0x72283f*/
      v8[3] = 0; /*0x72284b*/
      v8[4] = -1; /*0x72284f*/
      *v8 = 0; /*0x722856*/
      v8[1] = v9; /*0x722858*/
      v10 = RA2_OPNEW(4 * v9 + 4); /*0x72285b*/
      v11 = v8[1]; /*0x722860*/
      v8[2] = v10; /*0x722863*/
      v12 = 0; /*0x722869*/
      if ( v11 >= 0 ) /*0x72286d*/
      {
        do /*0x72287c*/
        {
          ++v12; /*0x722872*/
          *(unsigned int *)(v8[2] + 4 * v12 - 4) = 0; /*0x722873*/
        }
        while ( v12 <= v8[1] ); /*0x72287c*/
      }
    }
    else
    {
      v8 = 0; /*0x722890*/
    }
    *(unsigned int *)&this->u32_F4 = (int)v8; /*0x722894*/
    return AudioClass::ProcessEvent((AudioClass *)this); /*0x72288b*/
}
} // namespace gamemd

// 0x722AF0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::AddOccupancy()
{
    short *v2; // ebp
    int v4; // edi
    BuildingClass *v5; // eax
    int result; // eax
    int v7; // eax
    unsigned int *v8; // edi
    unsigned int v9; // ebx
    unsigned int v10; // ecx
    unsigned int v11; // edx
    int v12; // ebx
    int v13; // ebp
    unsigned int v14; // eax
    float v15; // [esp+Ch] [ebp-8h]
    unsigned int v16; // [esp+10h] [ebp-4h]

    v2 = a2; /*0x722af4*/
    v4 = Cell::PosToIndex((Cell *)a2); /*0x722b09*/
    v5 = (BuildingClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], a2); /*0x722b0b*/
    (result) = ((result) & ~0xFF) | ((unsigned int)(BuildingClass::IsTiberiumSiloEligible(v5)) & 0xFF) /*0x722b12*/
    if ( (unsigned char)result ) /*0x722b19*/
    {
      result = *(this + 62); /*0x722b1f*/
      if ( !*(unsigned char *)(result + v4) ) /*0x722b25*/
      {
        if ( *(this + 60) >= ObjectClass::ComputeAllocationSize() - 20 ) /*0x722b3f*/
          AudioClass::ProcessEvent((AudioClass *)this); /*0x722b43*/
        *(unsigned int *)(*(this + 63) + 8 * *(this + 60)) = *(unsigned int *)a2; /*0x722b58*/
        *(float *)(*(this + 63) + 8 * *(this + 60) + 4) = (float)(*(unsigned int * *)((char *)&stru_A8EB00 + 644) /*0x722b95*/
                                                                + (int)abs32(Random::State((Random *)&dword_A8B230[14].NeedsSaveOrLink))
                                                                % 50);
        v7 = *(this + 60); /*0x722b99*/
        v8 = (unsigned int *)*(this + 61); /*0x722ba5*/
        v9 = *(this + 63) + 8 * v7; /*0x722bab*/
        *(this + 60) = v7 + 1; /*0x722baf*/
        v10 = *v8 + 1; /*0x722bba*/
        v15 = *(float *)(v9 + 4); /*0x722bbd*/
        v16 = v9; /*0x722bc4*/
        v11 = v10 >> 1; /*0x722bc8*/
        if ( v10 < v8[1] ) /*0x722bcc*/
        {
          if ( v10 > 1 ) /*0x722bd1*/
          {
            do /*0x722bf1*/
            {
              v12 = v8[2]; /*0x722bd3*/
              v13 = *(unsigned int *)(v12 + 4 * v11); /*0x722bd6*/
              if ( *(float *)(v13 + 4) <= (double)v15 ) /*0x722be5*/
                break; /*0x722be5*/
              *(unsigned int *)(v12 + 4 * v10) = v13; /*0x722be7*/
              v10 = v11; /*0x722bea*/
              v11 >>= 1; /*0x722bec*/
            }
            while ( v10 > 1 ); /*0x722bf1*/
            v2 = a2; /*0x722bf3*/
            v9 = v16; /*0x722bf7*/
          }
          *(unsigned int *)(v8[2] + 4 * v10) = v9; /*0x722bfe*/
          v14 = v8[3]; /*0x722c03*/
          ++*v8; /*0x722c09*/
          if ( v9 > v14 ) /*0x722c0b*/
            v8[3] = v9; /*0x722c0d*/
          if ( v9 < v8[4] ) /*0x722c13*/
            v8[4] = v9; /*0x722c15*/
        }
        result = Cell::PosToIndex((Cell *)v2); /*0x722c1a*/
        *(unsigned char *)(result + *(this + 62)) = 1; /*0x722c26*/
      }
    }
    return result; /*0x722c2a*/
}
} // namespace gamemd

// 0x722D00
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::ClearOccupancyData()
{
    int result; // eax
    int i; // ebp
    int v3; // edi
    unsigned int *v4; // eax
    int j; // ecx
    void **v6; // esi
    int v7; // esi
    int v8; // eax
    size_t v9; // eax
    unsigned int *v10; // esi
    int v11; // eax
    int v12; // eax
    int v13; // ecx
    int v14; // eax

    result = *(unsigned int *)((char *)&g_BuildingLoadQueue_Array + 504); /*0x722d01*/
    for ( i = 0; i < *(unsigned int *)((char *)&g_BuildingLoadQueue_Array + 504); ++i ) /*0x722d0e*/
    {
      v3 = *(unsigned int *)(((unsigned int *)&g_BuildingLoadQueue_Array)[2] + 4 * i); /*0x722d1b*/
      v4 = *(unsigned int **)(v3 + 272); /*0x722d1e*/
      if ( v4 ) /*0x722d26*/
      {
        for ( j = 0; j <= *v4; *(unsigned int *)(v4[2] + 4 * j - 4) = 0 ) /*0x722d2e*/
          ++j; /*0x722d33*/
        *v4 = 0; /*0x722d3e*/
        v6 = *(void ***)(v3 + 272); /*0x722d40*/
        if ( v6 ) /*0x722d48*/
        {
          RA2_OPDEL(v6[2]); /*0x722d4e*/
          RA2_OPDEL(v6); /*0x722d54*/
        }
        *(unsigned int *)(v3 + 272) = 0; /*0x722d5c*/
      }
      if ( *(unsigned int *)(v3 + 280) ) /*0x722d62*/
      {
        RA2_OPDEL(*(void **)(v3 + 280)); /*0x722d6d*/
        *(unsigned int *)(v3 + 280) = 0; /*0x722d75*/
      }
      if ( *(unsigned int *)(v3 + 276) ) /*0x722d7b*/
      {
        RA2_OPDEL(*(void **)(v3 + 276)); /*0x722d86*/
        *(unsigned int *)(v3 + 276) = 0; /*0x722d8e*/
      }
      *(unsigned int *)(v3 + 268) = 0; /*0x722d94*/
      v7 = ObjectClass::ComputeAllocationSize(); /*0x722d9f*/
      v8 = RA2_OPNEW(8 * v7); /*0x722da9*/
      if ( !v8 ) /*0x722db3*/
        v8 = 0; /*0x722dbc*/
      *(unsigned int *)(v3 + 280) = v8; /*0x722dbe*/
      v9 = ObjectClass::ComputeAllocationSize(); /*0x722dc4*/
      *(unsigned int *)(v3 + 276) = RA2_OPNEW(v9); /*0x722dd1*/
      v10 = (unsigned int *)RA2_OPNEW(0x14u); /*0x722ddc*/
      if ( v10 ) /*0x722de3*/
      {
        v11 = ObjectClass::ComputeAllocationSize(); /*0x722de5*/
        v10[3] = 0; /*0x722df1*/
        v10[4] = -1; /*0x722df5*/
        *v10 = 0; /*0x722dfc*/
        v10[1] = v11; /*0x722dfe*/
        v12 = RA2_OPNEW(4 * v11 + 4); /*0x722e01*/
        v13 = v10[1]; /*0x722e06*/
        v10[2] = v12; /*0x722e09*/
        v14 = 0; /*0x722e0f*/
        if ( v13 >= 0 ) /*0x722e13*/
        {
          do /*0x722e22*/
          {
            ++v14; /*0x722e18*/
            *(unsigned int *)(v10[2] + 4 * v14 - 4) = 0; /*0x722e19*/
          }
          while ( v14 <= v10[1] ); /*0x722e22*/
        }
      }
      else
      {
        v10 = 0; /*0x722e26*/
      }
      *(unsigned int *)(v3 + 272) = v10; /*0x722e2a*/
      BuildingClass::RebuildOccupancy2((BuildingClass *)v3); /*0x722e30*/
      result = ((unsigned int *)&g_BuildingLoadQueue_Array)[0]; /*0x722e35*/
    }
    return result; /*0x722e45*/
}
} // namespace gamemd

// 0x723260
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::RebuildOccupancyTracking2()
{
    unsigned int *v2; // eax
    int i; // ecx
    void **v4; // esi
    int v5; // esi
    int v6; // eax
    size_t v7; // eax
    unsigned int *v8; // esi
    int v9; // eax
    int v10; // eax
    int v11; // ecx
    int v12; // eax

    v2 = (unsigned int *)*(unsigned int *)&this->deployAnim; /*0x723268*/
    if ( v2 ) /*0x723270*/
    {
      for ( i = 0; i <= *v2; *(unsigned int *)(v2[2] + 4 * i - 4) = 0 ) /*0x723278*/
        ++i; /*0x72327d*/
      *v2 = 0; /*0x723288*/
      v4 = (void **)(unsigned int *)&this->deployAnim; /*0x72328a*/
      if ( v4 ) /*0x723292*/
      {
        RA2_OPDEL(v4[2]); /*0x723298*/
        RA2_OPDEL(v4); /*0x72329e*/
      }
      *(unsigned int *)&this->deployAnim = 0; /*0x7232a6*/
    }
    if ( *(unsigned int *)&this->q118 ) /*0x7232ac*/
    {
      RA2_OPDEL((void *)*(unsigned int *)&this->q118); /*0x7232b7*/
      *(unsigned int *)&this->q118 = 0; /*0x7232bf*/
    }
    if ( *(unsigned int *)&this->inAirFlag ) /*0x7232c5*/
    {
      RA2_OPDEL((void *)*(unsigned int *)&this->inAirFlag); /*0x7232d0*/
      *(unsigned int *)&this->inAirFlag = 0; /*0x7232d8*/
    }
    *(unsigned int *)&this->behindAnim = 0; /*0x7232de*/
    v5 = ObjectClass::ComputeAllocationSize(); /*0x7232e9*/
    v6 = RA2_OPNEW(8 * v5); /*0x7232f3*/
    if ( !v6 ) /*0x7232fd*/
      v6 = 0; /*0x723306*/
    *(unsigned int *)&this->q118 = v6; /*0x723308*/
    v7 = ObjectClass::ComputeAllocationSize(); /*0x72330e*/
    *(unsigned int *)&this->inAirFlag = RA2_OPNEW(v7); /*0x72331b*/
    v8 = (unsigned int *)RA2_OPNEW(0x14u); /*0x723326*/
    if ( v8 ) /*0x72332d*/
    {
      v9 = ObjectClass::ComputeAllocationSize(); /*0x72332f*/
      v8[3] = 0; /*0x72333b*/
      v8[4] = -1; /*0x72333f*/
      *v8 = 0; /*0x723346*/
      v8[1] = v9; /*0x723348*/
      v10 = RA2_OPNEW(4 * v9 + 4); /*0x72334b*/
      v11 = v8[1]; /*0x723350*/
      v8[2] = v10; /*0x723353*/
      v12 = 0; /*0x723359*/
      if ( v11 >= 0 ) /*0x72335d*/
      {
        do /*0x72336c*/
        {
          ++v12; /*0x723362*/
          *(unsigned int *)(v8[2] + 4 * v12 - 4) = 0; /*0x723363*/
        }
        while ( v12 <= v8[1] ); /*0x72336c*/
      }
    }
    else
    {
      v8 = 0; /*0x723380*/
    }
    *(unsigned int *)&this->deployAnim = (int)v8; /*0x723384*/
    return BuildingClass::RebuildOccupancy2(this); /*0x72337b*/
}
} // namespace gamemd

// 0x7233A0
namespace gamemd {  // G42.35a: was gamemd::Math (generator namespace-chain bug)
void BuildingClass::RebuildOccupancy2()
{
    int v2; // ecx
    int *v3; // eax
    int i; // eax
    int result; // eax
    BuildingClass *j; // edi
    Cell *p_occupant; // ecx
    int v8; // eax
    unsigned int *v9; // ebp
    unsigned int v10; // ebx
    unsigned int v11; // edx
    unsigned int v12; // edi
    int v13; // ecx
    int v14; // ebx
    unsigned int v15; // eax
    float v16; // [esp+8h] [ebp-Ch]
    Cell *v17; // [esp+Ch] [ebp-8h]
    unsigned int v18; // [esp+10h] [ebp-4h]

    v2 = 0; /*0x7233a6*/
    v3 = (int *)*(unsigned int *)&this->deployAnim; /*0x7233a9*/
    *(unsigned int *)&this->behindAnim = 0; /*0x7233af*/
    if ( *v3 >= 0 ) /*0x7233bc*/
    {
      do /*0x7233ce*/
      {
        ++v2; /*0x7233c1*/
        *(unsigned int *)(v3[2] + 4 * v2 - 4) = 0; /*0x7233c2*/
      }
      while ( v2 <= *v3 ); /*0x7233ce*/
    }
    *v3 = 0; /*0x7233d0*/
    for ( i = ObjectClass::ComputeAllocationSize() - 1; i >= 0; *(unsigned char *)(*(unsigned int *)&this->inAirFlag + i + 1) = 0 ) /*0x7233dc*/
      --i; /*0x7233e4*/
    LayerClass::CellIteratorReset((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x7233f1*/
    result = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x7233fb*/
    for ( j = (BuildingClass *)result; result; j = (BuildingClass *)result ) /*0x723404*/
    {
      if ( BuildingClass::FindByCellHash(j) == *(unsigned int *)&((unsigned int *)this)[0] && BuildingClass::IsTiberiumCollectorEligible(j) ) /*0x723421*/
      {
        p_occupant = (Cell *)&((unsigned int *)j)[0]; /*0x72343a*/
        v17 = (Cell *)&((unsigned int *)j)[0]; /*0x72343d*/
        *(unsigned int *)(*(unsigned int *)&this->behindAnim + 8 * *(unsigned int *)&this->behindAnim) = ((unsigned int *)j)[0]; /*0x723443*/
        *(unsigned int *)(*(unsigned int *)&this->behindAnim + 8 * *(unsigned int *)&this->behindAnim + 4) = 0; /*0x723452*/
        v8 = *(unsigned int *)&this->behindAnim; /*0x72345a*/
        v9 = (unsigned int *)*(unsigned int *)&this->deployAnim; /*0x723466*/
        v10 = *(unsigned int *)&this->behindAnim + 8 * v8; /*0x72346c*/
        *(unsigned int *)&this->behindAnim = v8 + 1; /*0x723470*/
        v11 = *v9 + 1; /*0x72347c*/
        v16 = *(float *)(v10 + 4); /*0x72347f*/
        v18 = v10; /*0x723486*/
        v12 = v11 >> 1; /*0x72348a*/
        if ( v11 < v9[1] ) /*0x72348e*/
        {
          if ( v11 > 1 ) /*0x723493*/
          {
            do /*0x7234b3*/
            {
              v13 = v9[2]; /*0x723495*/
              v14 = *(unsigned int *)(v13 + 4 * v12); /*0x723498*/
              if ( *(float *)(v14 + 4) <= (double)v16 ) /*0x7234a7*/
                break; /*0x7234a7*/
              *(unsigned int *)(v13 + 4 * v11) = v14; /*0x7234a9*/
              v11 = v12; /*0x7234ac*/
              v12 >>= 1; /*0x7234ae*/
            }
            while ( v11 > 1 ); /*0x7234b3*/
            p_occupant = v17; /*0x7234b5*/
            v10 = v18; /*0x7234b9*/
          }
          *(unsigned int *)(v9[2] + 4 * v11) = v10; /*0x7234c0*/
          v15 = v9[3]; /*0x7234c6*/
          ++*v9; /*0x7234cc*/
          if ( v10 > v15 ) /*0x7234cf*/
            v9[3] = v10; /*0x7234d1*/
          if ( v10 < v9[4] ) /*0x7234d7*/
            v9[4] = v10; /*0x7234d9*/
        }
        *(unsigned char *)(Cell::PosToIndex(p_occupant) + *(unsigned int *)&this->inAirFlag) = 1; /*0x7234e7*/
      }
      result = LayerClass::CellIteratorNext((LayerClass *)&stru_87F5F0.__pad_58[416]); /*0x7234f0*/
    }
    return result; /*0x723501*/
}
} // namespace gamemd

// 0x73D450
namespace gamemd {
int UnitClass::ProcessResourceHarvesting()
{
    double v1; // st7
    ObjectClass *v3; // ebp
    int v6; // eax
    int v7; // eax
    int v9; // ebx
    int v12; // eax
    int v13; // eax
    int v14; // eax
    float v15; // [esp+0h] [ebp-28h]
    int v18; // [esp+18h] [ebp-10h]
    int v19; // [esp+1Ch] [ebp-Ch] BYREF
    int v20; // [esp+20h] [ebp-8h]
    int v21; // [esp+24h] [ebp-4h]

    v19 = ((unsigned int *)this)[0]; /*0x73d465*/
    v20 = *(unsigned int *)&this->vtable3; /*0x73d476*/
    v21 = *(unsigned int *)&this->vtable3; /*0x73d47d*/
    v3 = (ObjectClass *)Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v19); /*0x73d486*/
    if ( ((unsigned int *)this)[0] ) /*0x73d488*/
      return 1; /*0x73d49d*/
    if ( !this->Type->Harvester ) /*0x73d4a4*/
      goto LABEL_13; /*0x73d4a4*/
    (*((void (__thiscall **)(UnitClass *))this->vtable1 + 173))(this); /*0x73d4b6*/
    __asm /*0x73d4bc*/
    {
      fcomp ds:dbl_7E1718
      fnstsw ax
    }
    if ( (_AX & 0x100) == 0 ) /*0x73d4c7*/
      goto LABEL_13; /*0x73d4c7*/
    if ( v3[1].ambientSoundController[1] == 5 ) /*0x73d4d4*/
    {
      if ( this->Type->Weeder ) /*0x73d4e0*/
      {
        Helper_486E30(v3); /*0x73d4ec*/
        Float::Accumulate((int *)&((unsigned int *)this)[0], 1.0, 0); /*0x73d4fd*/
        *(unsigned int *)&this->radioContact = 0; /*0x73d502*/
        v6 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5408); /*0x73d515*/
        __asm { fstp st } /*0x73d521*/
        *(unsigned int *)&this->radioCommand = *(unsigned int * *)((char *)&stru_A8EB00 + 644); /*0x73d523*/
        v6 *= 3; /*0x73d529*/
        ((unsigned int *)this)[3] = v20; /*0x73d52c*/
        ((unsigned int *)this)[4] = v6; /*0x73d52f*/
        *(unsigned int *)&this->u32_10C = v6; /*0x73d532*/
        return 1; /*0x73d540*/
      }
      v7 = BuildingClass::FindByCellHash((BuildingClass *)v3); /*0x73d541*/
      _EDX = this->Type; /*0x73d546*/
      v9 = v7; /*0x73d554*/
      __asm /*0x73d556*/
      {
        fild dword ptr [edx+800h]
        fstp [esp+20h+var_10]
      }
      Float4::Sum((int *)&((unsigned int *)this)[0]); /*0x73d560*/
      __asm /*0x73d565*/
      {
        fsubr [esp+20h+var_10]
        fcomp ds:flt_7E2AC8
        fnstsw ax
      }
      if ( (_AX & 0x4100) != 0 ) /*0x73d574*/
      {
        _EAX = this->Type; /*0x73d57e*/
        __asm /*0x73d586*/
        {
          fild dword ptr [eax+800h]
          fstp [esp+20h+var_10]
        }
        Float4::Sum((int *)&((unsigned int *)this)[0]); /*0x73d590*/
        __asm { fsubr [esp+20h+var_10] } /*0x73d595*/
      }
      else
      {
        __asm { fld ds:flt_7E2AC8 } /*0x73d576*/
      }
      (v12) = ((v12) & ~0xFFFF) | ((unsigned int)(Math::RoundToInt(v1)) & 0xFFFF) /*0x73d599*/
      v18 = CellClass::ReduceTiberium((int *)v3, v12); /*0x73d5a8*/
      if ( v18 > 0 ) /*0x73d5ac*/
      {
        __asm { fild [esp+20h+var_10] } /*0x73d5ae*/
        __asm { fstp [esp+28h+var_28]; float }
        Float::Accumulate((int *)&((unsigned int *)this)[0], v15, v9); /*0x73d5b9*/
        *(unsigned int *)&this->radioContact = 0; /*0x73d5be*/
        v13 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5408); /*0x73d5d5*/
        *(unsigned int *)&this->vtable2 = *(unsigned int * *)((char *)&stru_A8EB00 + 644); /*0x73d5e1*/
        __asm { fstp st } /*0x73d5e7*/
        ((unsigned int *)this)[3] = v20; /*0x73d5e9*/
        ((unsigned int *)this)[4] = v13; /*0x73d5ec*/
        *(unsigned int *)&this->u32_10C = v13; /*0x73d5ef*/
        return 1; /*0x73d5fd*/
      }
    }
    else
    {
  LABEL_13:
      *(unsigned int *)&this->radioContact = 0; /*0x73d5fe*/
      v14 = *(unsigned int * *)((char *)&stru_A8EB00 + 644); /*0x73d604*/
      *(unsigned int *)&this->u32_10C = 0; /*0x73d611*/
      ((unsigned int *)this)[2] = v14; /*0x73d617*/
      ((unsigned int *)this)[3] = v20; /*0x73d61d*/
      ((unsigned int *)this)[4] = 0; /*0x73d620*/
    }
    return 0; /*0x73d494*/
}
} // namespace gamemd
