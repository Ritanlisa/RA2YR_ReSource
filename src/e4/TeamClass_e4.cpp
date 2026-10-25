// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/TriggerClass_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Mission_e4.hpp"
#include "e4/classes/Movie_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/ScriptAction_e4.hpp"
#include "e4/classes/Team_e4.hpp"
#include "e4/classes/VectorClass_ptr_PlanningMemberClass_e4.hpp"
#include "e4/classes/TeamClass_e4.hpp"
#include "e4/classes/Frame_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/TeamTypeClass_e4.hpp"
#include "e4/classes/BuildingType_e4.hpp"
#include "e4/classes/TaskForceClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Process_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/E4Recv_634B20_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"
#include "e4/classes/Color_e4.hpp"
#include "e4/classes/FogOfWar_e4.hpp"
#include "e4/classes/Render_e4.hpp"
#include "e4/classes/FactoryClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/AITriggerTypeClass_e4.hpp"
#include "e4/classes/TagClass_e4.hpp"
#include "e4/classes/FootClass_e4.hpp"
#include "e4/classes/_w14_nocarrier_e4.hpp"
#include "e4/classes/Vector4_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/CellClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/CCINIClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/SessionClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers
#include "e4/classes/ScriptQueue_e4.hpp"  // G57w10 D supply
#include "e4/classes/ScriptClass_e4.hpp"  // w16g4 C3861 ScriptClass:: supply
#include "e4/classes/Checksummer_e4.hpp"  // w16g4 C3861 Checksummer:: supply
#include "e4/classes/IPersistStream_e4.hpp"  // w16g4 C3861 IPersistStream:: supply
#include "e4/classes/ObjectPtr_e4.hpp"  // w18j2 C3861 ObjectPtr:: supply
#include "e4/classes/MapClass_e4.hpp"
// [w18j2] C3861 supply (raw-evidenced)
namespace gamemd { int GetNextAction(int* p0); }  // x4:signals@0x691540
// [w18j2] C3861 supply (raw-evidenced)
namespace gamemd { int GetType(InfantryClass *p_this); }  // x4:ida@0x484f20
namespace gamemd { int checkPassability(AbstractClass *p_this); }  // x4:ida@0x50e370
namespace gamemd { int RegisterForTracking(int p0, int* p1); }  // x4:signals@0x6cf240
namespace TeknoClass { int GetType(InfantryClass *p_this); }  // x4:ida@0x484f20
// [w14e3] fn vocab supply (g57b5-W5 variadic convention); evidence: raw_decomp entries
namespace gamemd {
int Team_Destroy(int p0);  // x4:signals@0x63e5d0
} // namespace gamemd

// 0x4D9E70
namespace gamemd {  // G42.18 ns repair
char FootClass::TeamClass_CheckCohesion(double a2)
{

  ObjectClass *v2; // ecx
  ObjectClass *v3; // esi
  int v4; // eax
  int v5; // eax
  int v6; // eax
  unsigned int *v7; // edi
  unsigned int *v8; // eax
  unsigned __int16 *v9; // eax
  int v11; // [esp+20h] [ebp-1Ch]
  unsigned char v12[12]; // [esp+24h] [ebp-18h] BYREF
  unsigned char v13[12]; // [esp+30h] [ebp-Ch] BYREF

  v3 = v2; /*0x4d9e74*/
  v4 = (*(int (**)(ObjectClass *, double))(v2->ptr_0 + 44))(v2, a2); /*0x4d9e78*/
  if ( v4 > 0 /*0x4d9f52*/
    && v4 <= 2
    && (unsigned __int8)Team::AllMembersValid((Team *)v3)
    && (v5 = ((Array *)v3)->Get(0), (*(int (**)(int))(*(unsigned int *)v5 + 44))(v5) == 6)
    && *(unsigned char *)(*(unsigned int *)(((Array *)v3)->Get(0) + 1312) + 5801)
    && (v6 = ((Array *)v3)->Get(0),
        v7 = (unsigned int *)(*(int (**)(int, unsigned char *))(*(unsigned int *)v6 + 72))(v6, v12),
        v8 = (unsigned int *)(*(int (**)(ObjectClass *, unsigned char *))(v3->ptr_0 + 72))(v3, v13),
        v11 = v8[2] - v7[2],
        Math::Sqrt(
          (double)(*v8 - *v7) * (double)(*v8 - *v7)
        + (double)(v8[1] - v7[1]) * (double)(v8[1] - v7[1])
        + (double)v11 * (double)v11),
        LOWORD(v9) = Math::RoundToInt(a2),
        (int)v9 < 128) )
  {
    return 1; /*0x4d9f54*/
  }
  else
  {
    return AbstractClass::COMStub_Return0_38(v3); /*0x4d9f5d*/
  }

}
}  // G42.18 ns repair
// 0x4E0080
namespace gamemd {
int TeamClass::HasAnyMemberFlagged()
{
  return this->u32_68F || this->u32_690 || this->u32_691; /*0x4e00a0*/
}
}
// 0x577BB0
namespace gamemd {
int TeamClass::DisbandTeam(int a2)
{

  int result; // eax
  int v4; // eax
  int i; // eax
  unsigned int v6; // edx

  result = a2; /*0x577bb0*/
  if ( a2 ) /*0x577bb9*/
    *(unsigned char *)(*((unsigned int *)stru_A80220.? + *(unsigned int *)(a2 + 48)) + 577) = 0; /*0x577bc7*/
  if ( (Object *)a2 != dword_A83D4C ) /*0x577bd4*/
  {
    if ( a2 ) /*0x577bd8*/
      return result; /*0x577bd8*/
    goto LABEL_7; /*0x577bd8*/
  }
  if ( !a2 ) /*0x577be2*/
    LABEL_7:
  Debug::Log(); /*0x577be4*/
  v4 = this->u32_F4; /*0x577bf1*/
  this->q10C = 1; /*0x577bf7*/
  this->q110 = v4; /*0x577c01*/
  this->u32_114 = v4 - 1; /*0x577c0a*/
  this->u32_118 = (v4 << 11) + this->u32_13C + 4; /*0x577c1f*/
  for ( i = ((LayerClass *)this)->CellIteratorNext(); i; i = ((LayerClass *)this)->CellIteratorNext() ) /*0x577c2c*/
  {
    v6 = *(unsigned int *)(i + 320) & 0xFFFFFFFC; /*0x577c3d*/
    *(unsigned int *)(i + 300) &= 0xFFFFFFE7; /*0x577c40*/
    *(unsigned int *)(i + 320) = v6; /*0x577c48*/
  }
  HouseClass::RevealShroudForAllies(0, 0); /*0x577c60*/
  dword_A83D4C->visionary = 0; /*0x577c6f*/
  ((FogOfWar *)&DataGlobal_87F7E8)->Render(); /*0x577c76*/
  return (*((int (**)(TeamClass *, int))this->vfptr + 14))(this, 2); /*0x577c84*/

}
}
// 0x62A260
namespace gamemd {
int TeamClass::DeployUnit(int a2, int a3)
{

  char result; // al
  int creationFrame; // ecx
  int v6; // edi
  int ParasiteClass_field_34; // eax
  int v8; // ecx
  int *v9; // eax
  int v10; // ecx
  int v11; // edx
  unsigned int *Value; // eax
  unsigned __int8 *v13; // eax
  int v14; // eax
  int *v15; // ecx
  unsigned int *v16; // eax
  unsigned int v17[3]; // [esp+24h] [ebp-18h] BYREF
  int v18[3]; // [esp+30h] [ebp-Ch] BYREF

  result = a2; /*0x62a263*/
  creationFrame = this->creationFrame; /*0x62a26c*/
  if ( a2 == creationFrame ) /*0x62a271*/
  {
    this->creationFrame = 0; /*0x62a273*/
    return result; /*0x62a280*/
  }
  if ( a2 == *(unsigned int *)this->currentScript ) /*0x62a286*/
  {
    result = stru_A8E960.random[488]; /*0x62a28c*/
    if ( !stru_A8E960.random[488] ) /*0x62a295*/
    {
      *(unsigned int *)this->currentScript = 0; /*0x62a297*/
      return result; /*0x62a2a0*/
    }
    v6 = *&this->owner; /*0x62a2a3*/
    ParasiteClass_field_34 = this->ParasiteClass_field_34; /*0x62a2a6*/
    if ( v6 != -1 ) /*0x62a2ac*/
    {
      if ( *(unsigned int *)&stru_A8E960.random[528] - v6 >= ParasiteClass_field_34 ) /*0x62a2b8*/
      {
LABEL_12:
        v9 = Object::CalculateObjectPlacementPosition((Object *)this, v18); /*0x62a2ec*/
        v17[0] = *v9; /*0x62a303*/
        v10 = v9[1]; /*0x62a307*/
        v17[1] = v10; /*0x62a30a*/
        v11 = v9[2]; /*0x62a30e*/
        ++dword_A8E7AC; /*0x62a311*/
        v17[2] = v11; /*0x62a31d*/
        if ( v17[0] == dword_AC4948 && v10 == dword_AC494C && v11 == dword_AC4950 /*0x62a364*/
          || (Value = ProgressTimer::GetValue((ProgressTimer *)(*(unsigned int *)this->currentScript + 904), &a2),
              !(*(unsigned __int8 (**)(int, unsigned int *, unsigned int))(*(unsigned int *)this->creationFrame + 216))(
                 this->creationFrame,
                 v17,
                 (unsigned __int8)((unsigned int)((*Value >> 7) + 1) >> 1))) )
        {
          --dword_A8E7AC; /*0x62a462*/
          *(unsigned int *)(this->creationFrame + 108) = 0; /*0x62a46a*/
          result = (*(int (**)(int))(*(unsigned int *)this->creationFrame + 248))(this->creationFrame); /*0x62a472*/
          *(unsigned int *)this->currentScript = 0; /*0x62a478*/
        }
        else
        {
          --dword_A8E7AC; /*0x62a379*/
          v13 = (unsigned __int8 *)this->creationFrame; /*0x62a37f*/
          if ( v13[1074] && (unsigned __int8)House::IsHumanPlayer(*((House **)v13 + 135)) ) /*0x62a390*/
          {
            *(unsigned char *)(this->creationFrame + 1074) = 0; /*0x62a39c*/
            (*(void (**)(int))(*(unsigned int *)this->creationFrame + 332))(this->creationFrame); /*0x62a3a7*/
          }
          v14 = this->creationFrame; /*0x62a3ad*/
          v15 = *(int **)(v14 + 1076); /*0x62a3b0*/
          if ( v15 ) /*0x62a3b8*/
            TeamClass::AddMember(v15, v14, 0); /*0x62a3bc*/
          if ( !(*(unsigned __int8 (**)(int))(*(unsigned int *)this->creationFrame + 1196))(this->creationFrame) ) /*0x62a3c6*/
          {
            TechnoClass::SetFocus((TechnoClass *)this->creationFrame, 0); /*0x62a3d4*/
            (*(void (**)(int, unsigned int))(*(unsigned int *)this->creationFrame + 968))(this->creationFrame, 0); /*0x62a3df*/
            (*(void (**)(int, unsigned int, int))(*(unsigned int *)this->creationFrame + 1152))( /*0x62a3ed*/
              this->creationFrame,
              0,
              1);
          }
          (*(void (**)(int, unsigned int, int))(*(unsigned int *)this->creationFrame + 1156))(this->creationFrame, 0, 1); /*0x62a3fb*/
          (*(void (**)(int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int))(*(unsigned int *)this->creationFrame + 1160))( /*0x62a40b*/
            this->creationFrame,
            0,
            0,
            0,
            0,
            0);
          v16 = (unsigned int *)this->creationFrame; /*0x62a411*/
          v18[0] = v16[39]; /*0x62a421*/
          v18[1] = v16[40]; /*0x62a428*/
          v18[2] = v16[41]; /*0x62a42f*/
          result = MapClass::RevealArea2((MapClass *)&dword_87F7E8, v18, v16[152] - 3, v16[152] + 3, 0); /*0x62a44b*/
          *(unsigned int *)this->currentScript = 0; /*0x62a450*/
        }
        return result; /*0x62a459*/
      }
      ParasiteClass_field_34 -= *(unsigned int *)&stru_A8E960.random[528] - v6; /*0x62a2ba*/
    }
    if ( ParasiteClass_field_34 > 0 /*0x62a2c2*/
      && !(*(unsigned __int8 (**)(int))(*(unsigned int *)creationFrame + 352))(creationFrame) )
    {
      *(unsigned int *)(*(unsigned int *)this->currentScript + 1684) = 0; /*0x62a2cf*/
      v8 = this->creationFrame; /*0x62a2d5*/
      *(unsigned int *)this->currentScript = 0; /*0x62a2d8*/
      return (*(char (**)(int))(*(unsigned int *)v8 + 248))(v8); /*0x62a2e9*/
    }
    goto LABEL_12; /*0x62a2ca*/
  }
  if ( a2 == this->unknown44 ) /*0x62a487*/
  {
    this->unknown44 = 0; /*0x62a489*/
    this->firstUnit = 1; /*0x62a490*/
  }
  return result; /*0x62a27a*/

}
}
// 0x6339B0
namespace gamemd {
int TeamClass::GetLeaderIndex(void *a1)
{

  House *v1; // ecx
  int v2; // esi

  v1 = (House *)this->q21C; /*0x6339b0*/
  v2 = *&v1->u32_30; /*0x6339b7*/
  if ( (unsigned __int8)House::IsHumanPlayer(v1) && *(int *)((char *)&stru_A83CD9.estimatedHealth + 3) ) /*0x6339ca*/
    return *(unsigned int *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 48); /*0x6339cc*/
  else
    return v2; /*0x6339d1*/

}
}
// 0x6340B0
namespace gamemd {
AbstractClass * * TeamClass::DestroyAllMembers(unsigned int *p_vtable0, int aP1, int a2, int a1)
{

  int v3; // eax
  int uniqueId; // edx
  int ptr_4; // edi
  unsigned int ***v6; // ecx
  int v7; // ebp
  int v8; // eax
  int v9; // eax
  unsigned int *v10; // edi
  unsigned int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // ecx
  int v15; // eax
  void *v16; // eax
  void *Block; // [esp+10h] [ebp-4h] BYREF

  v3 = 0; /*0x6340b8*/
  uniqueId = this->uniqueId; /*0x6340ba*/
  if ( uniqueId <= 0 ) /*0x6340c0*/
    goto LABEL_7; /*0x6340c0*/
  ptr_4 = this->vfptr1; /*0x6340c2*/
  v6 = (unsigned int ***)ptr_4; /*0x6340c9*/
  while ( **v6 != p_vfptr ) /*0x6340d0*/
  {
    ++v3; /*0x6340d2*/
    ++v6; /*0x6340d3*/
    if ( v3 >= uniqueId ) /*0x6340d8*/
    {
      v7 = 0; /*0x6340dc*/
      goto LABEL_9; /*0x6340de*/
    }
  }
  if ( v3 == -1 ) /*0x6340e3*/
LABEL_7:
    v7 = 0; /*0x6340e7*/
  else
    v7 = *(unsigned int *)(ptr_4 + 4 * v3); /*0x6340eb*/
LABEL_9:
  Block = (void *)v7; /*0x6340f0*/
  if ( v7 ) /*0x6340f6*/
  {
    if ( *(unsigned char *)(v7 + 12) ) /*0x6340fc*/
    {
      *(unsigned char *)(v7 + 12) = 0; /*0x634101*/
      v8 = this->u32_A8 - 1; /*0x63410a*/
      this->u32_A8 = v8; /*0x63410b*/
      if ( !v8 ) /*0x634111*/
        this->u32_B0 = -1; /*0x634113*/
    }
    v9 = *(unsigned int *)(v7 + 8); /*0x63411d*/
    if ( v9 != -1 ) /*0x634123*/
    {
      v10 = *(unsigned int **)(this->buildingType + 4 * v9); /*0x634129*/
      v10[29] = -1; /*0x63412e*/
      (this)->Reset(0); /*0x634135*/
      v11 = v10[28] - 1; /*0x63413d*/
      v10[28] = v11; /*0x63413e*/
      if ( !v11 ) /*0x634141*/
      {
        p_vfptr = &this->vfptr; /*0x634145*/
        if ( this ) /*0x634149*/
        {
          if ( !((this->referenceCount) & 0xFF) ) /*0x63414b*/
          {
            (this->referenceCount) = ((this->referenceCount) & ~0xFF) | ((1) & 0xFF); /*0x63415a*/
            VectorClass::Append((DynamicVectorClass *)&stru_AC4B48.__pad_B8[152], &p_vfptr); /*0x63415e*/
          }
        }
      }
    }
    *(unsigned int *)(v7 + 8) = -1; /*0x634163*/
    __3_YAXPAX_Z(*((void **)Block + 1)); /*0x634172*/
    v12 = (*(int (**)(TeamClass *, void **))&this->vfptr->q010)(this, &Block); /*0x634183*/
    if ( v12 != -1 ) /*0x634189*/
    {
      v13 = this->uniqueId; /*0x63418b*/
      if ( v12 < v13 ) /*0x634190*/
      {
        v14 = v13 - 1; /*0x634192*/
        for ( this->uniqueId = v14; /*0x634198*/
              v12 < this->uniqueId;
              *(unsigned int *)(this->vfptr1 + 4 * v12 - 4) = *(unsigned int *)(this->vfptr1 + 4 * v12) )
        {
          ++v12; /*0x63419d*/
        }
      }
    }
    __3_YAXPAX_Z(Block); /*0x6341b1*/
    if ( !this->uniqueId && this ) /*0x6341c6*/
    {
      FactoryClass::ClearObjects((FactoryClass *)this); /*0x6341ce*/
      p_vfptr = &this->vfptr; /*0x6341e3*/
      v15 = (*(int (**)(char *, unsigned int **))(*(unsigned int *)&stru_AC4B48.__pad_B8[152] + 16))( /*0x6341e7*/
              &stru_AC4B48.__pad_B8[152],
              &p_vfptr);
      if ( v15 != -1 ) /*0x6341ed*/
        Array::RemoveAt((Array *)&stru_AC4B48.__pad_B8[152], v15); /*0x6341f5*/
      ((ObjectClass *)(ObjectClass *)&stru_AC4B30)->Team_Destroy((int)&p_vfptr); /*0x634204*/
      ((ObjectClass *)(ObjectClass *)&stru_AC4B48.__pad_B8[24])->Team_Destroy((int)&p_vfptr); /*0x634213*/
      if ( *(unsigned int **)&stru_AC4B48.__pad_B8[204] == p_vfptr ) /*0x634224*/
        *(unsigned int *)&stru_AC4B48.__pad_B8[204] = 0; /*0x634226*/
      if ( *(unsigned int **)&stru_AC4B48.__pad_B8[56] == p_vfptr ) /*0x634232*/
        *(unsigned int *)&stru_AC4B48.__pad_B8[56] = 0; /*0x634234*/
      if ( *(unsigned int **)&stru_AC4B48.__pad_9C[12] == p_vfptr ) /*0x634240*/
        *(unsigned int *)&stru_AC4B48.__pad_9C[12] = 0; /*0x634242*/
      /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7EFF24) */  /*0x63424b*/
      VectorClass::Cleanup2((int)&this->NeedsSaveOrLink); /*0x634251*/
      v16 = (void *)this->vfptr1; /*0x634256*/
      /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7EFF04) */  /*0x634259*/
      if ( v16 ) /*0x634261*/
      {
        if ( BYTE1(this->vfptr3) ) /*0x634263*/
        {
          __3_YAXPAX_Z(v16); /*0x634269*/
          this->vfptr1 = 0; /*0x634271*/
        }
      }
      BYTE1(this->vfptr3) = 0; /*0x634275*/
      this->vfptr2 = 0; /*0x634278*/
      __3_YAXPAX_Z(this); /*0x63427b*/
    }
  }

}
}
// 0x635A40
namespace gamemd {
int TeamClass::FindByMemberType(int a2)
{

  int result; // eax
  int uniqueId; // ecx
  BuildingClass *v5; // edi
  int v6; // ebp
  BuildingClass **v7; // eax
  int Type; // esi
  int v9; // eax
  int v10; // eax
  int v11; // esi
  House *owner; // ecx
  int v13; // esi
  int v14; // ecx
  int v15; // eax
  unsigned __int8 Color_field_00; // dl
  int v17; // ecx
  int v18; // esi
  int v19; // eax
  unsigned int *v20; // [esp+10h] [ebp-10h]
  TeamClass *v21; // [esp+14h] [ebp-Ch] BYREF
  Color v22[2]; // [esp+18h] [ebp-8h] BYREF

  v20 = *(unsigned int **)(this->buildingType + 4 * a2); /*0x635a53*/
  result = v20[29]; /*0x635a57*/
  if ( result == -1 ) /*0x635a5d*/
  {
    uniqueId = this->uniqueId; /*0x635a63*/
    v5 = 0; /*0x635a66*/
    v6 = 0; /*0x635a68*/
    v22[0].Color_field_00 = uniqueId; /*0x635a6a*/
    if ( uniqueId <= 0 ) /*0x635a70*/
    {
      return -1; /*0x635b54*/
    }
    else
    {
      do /*0x635abd*/
      {
        v7 = *(BuildingClass ***)(this->vfptr1 + 4 * v6); /*0x635a79*/
        if ( v7[2] == (BuildingClass *)a2 ) /*0x635a83*/
        {
          v5 = *v7; /*0x635a85*/
          Type = BuildingClass::GetType(*v7); /*0x635a8e*/
          v9 = *(unsigned int *)(Type + 4); /*0x635a90*/
          v21 = this; /*0x635a97*/
          v10 = (*(int (**)(int, TeamClass **))(v9 + 16))(Type + 4, &v21); /*0x635a9f*/
          v11 = *(unsigned int *)(Type + 140); /*0x635aa2*/
          if ( v11 == -1 || v10 < v11 ) /*0x635ab4*/
          {
            owner = v5->owner; /*0x635acb*/
            v13 = owner->u32_30; /*0x635acd*/
            if ( (unsigned __int8)House::IsHumanPlayer((House *)owner) /*0x635ae0*/
              && *(int *)((char *)&stru_A83CD9.estimatedHealth + 3) )
            {
              v13 = *(unsigned int *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 48); /*0x635ae2*/
            }
            v14 = *(&dword_A8022C->ptr_0 + v13) + 22265; /*0x635af4*/
            LOWORD(v22[0].Color_field_00) = *(unsigned short *)v14; /*0x635afd*/
            BYTE2(v22[0].Color_field_00) = *(unsigned char *)(v14 + 2); /*0x635b09*/
            Color::Lerp(v22, 0x50u, (unsigned __int8 *)&stru_A83CD9); /*0x635b0d*/
            v15 = (BYTE1(v22[0].Color_field_00) >> g_BitMask_Blue << g_BitMask_Green) /*0x635b45*/
                | (BYTE2(v22[0].Color_field_00) >> g_BitMask_Red << g_BitShift_Blue);
            Color_field_00 = v22[0].Color_field_00; /*0x635b47*/
            goto LABEL_19; /*0x635b4b*/
          }
          uniqueId = v22[0].Color_field_00; /*0x635ab6*/
        }
        ++v6; /*0x635aba*/
      }
      while ( v6 < uniqueId ); /*0x635abd*/
      if ( !v5 ) /*0x635b52*/
        return -1; /*0x635b52*/
      v17 = v5->owner; /*0x635b61*/
      v18 = *(unsigned int *)(v17 + 48); /*0x635b67*/
      if ( (unsigned __int8)House::IsHumanPlayer((House *)v17) ) /*0x635b6a*/
      {
        if ( *(int *)((char *)&stru_A83CD9.estimatedHealth + 3) ) /*0x635b7a*/
          v18 = *(unsigned int *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 48); /*0x635b7c*/
      }
      v19 = *(&dword_A8022C->ptr_0 + v18) + 22265; /*0x635b8f*/
      LOWORD(v22[0].Color_field_00) = *(unsigned short *)v19; /*0x635b97*/
      BYTE2(v22[0].Color_field_00) = *(unsigned char *)(v19 + 2); /*0x635ba3*/
      Color::Lerp(v22, 0x64u, (unsigned __int8 *)&stru_A80220); /*0x635ba7*/
      v15 = (BYTE1(v22[0].Color_field_00) >> g_BitMask_Blue << g_BitMask_Green) /*0x635bdf*/
          | (BYTE2(v22[0].Color_field_00) >> g_BitMask_Red << g_BitShift_Blue);
      Color_field_00 = v22[0].Color_field_00; /*0x635be1*/
LABEL_19:
      result = (Color_field_00 >> g_BitShift_Green_0 << g_BitShift_Red) | v15; /*0x635be5*/
      v20[29] = result; /*0x635c01*/
    }
  }
  return result; /*0x635b54*/

}
}
// 0x635C10
namespace gamemd {
int TeamClass::GetMember(void *a1, void *a2)
{

  int result; // eax
  int uniqueId; // ebp
  BuildingClass *v4; // esi
  int v5; // edi
  BuildingClass **v6; // eax
  House *owner; // ecx
  int v8; // edi
  int v9; // edx
  int v10; // eax
  unsigned __int8 Color_field_00; // dl
  int v12; // ecx
  int v13; // esi
  int v14; // ecx
  Color v15; // [esp+10h] [ebp-8h] BYREF

  result = this->u32_AC; /*0x635c18*/
  if ( result == -1 ) /*0x635c22*/
  {
    uniqueId = this->uniqueId; /*0x635c28*/
    v4 = 0; /*0x635c2b*/
    v5 = 0; /*0x635c2d*/
    if ( uniqueId <= 0 ) /*0x635c31*/
    {
      return -1; /*0x635c60*/
    }
    else
    {
      do /*0x635c56*/
      {
        v6 = *(BuildingClass ***)(this->vfptr1 + 4 * v5); /*0x635c36*/
        if ( *((unsigned char *)v6 + 12) ) /*0x635c39*/
        {
          v4 = *v6; /*0x635c40*/
          if ( !*(unsigned char *)(BuildingClass::GetType(*v6) + 152) ) /*0x635c51*/
          {
            owner = v4->owner; /*0x635c71*/
            v8 = owner->u32_30; /*0x635c73*/
            if ( (unsigned __int8)House::IsHumanPlayer((House *)owner) /*0x635c86*/
              && *(int *)((char *)&stru_A83CD9.estimatedHealth + 3) )
            {
              v8 = *(unsigned int *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 48); /*0x635c88*/
            }
            v9 = *(&dword_A8022C->ptr_0 + v8) + 22265; /*0x635c9b*/
            LOWORD(v15.Color_field_00) = *(unsigned short *)v9; /*0x635ca4*/
            BYTE2(v15.Color_field_00) = *(unsigned char *)(v9 + 2); /*0x635cac*/
            Color::Lerp(&v15, 0x50u, (unsigned __int8 *)&stru_A83CD9); /*0x635cb4*/
            v10 = (BYTE1(v15.Color_field_00) >> g_BitMask_Blue << g_BitMask_Green) /*0x635cec*/
                | (BYTE2(v15.Color_field_00) >> g_BitMask_Red << g_BitShift_Blue);
            Color_field_00 = v15.Color_field_00; /*0x635cee*/
            goto LABEL_16; /*0x635cf2*/
          }
        }
        ++v5; /*0x635c53*/
      }
      while ( v5 < uniqueId ); /*0x635c56*/
      if ( !v4 ) /*0x635c5a*/
        return -1; /*0x635c5a*/
      v12 = v4->owner; /*0x635cf7*/
      v13 = *(unsigned int *)(v12 + 48); /*0x635cfd*/
      if ( (unsigned __int8)House::IsHumanPlayer((House *)v12) ) /*0x635d00*/
      {
        if ( *(int *)((char *)&stru_A83CD9.estimatedHealth + 3) ) /*0x635d10*/
          v13 = *(unsigned int *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 48); /*0x635d12*/
      }
      v14 = *(&dword_A8022C->ptr_0 + v13) + 22265; /*0x635d24*/
      LOWORD(v15.Color_field_00) = *(unsigned short *)v14; /*0x635d2d*/
      BYTE2(v15.Color_field_00) = *(unsigned char *)(v14 + 2); /*0x635d39*/
      (&v15)->Lerp(0x64u, (unsigned __int8 *)&stru_A80220); /*0x635d3d*/
      v10 = (BYTE1(v15.Color_field_00) >> g_BitMask_Blue << g_BitMask_Green) /*0x635d75*/
          | (BYTE2(v15.Color_field_00) >> g_BitMask_Red << g_BitShift_Blue);
      Color_field_00 = v15.Color_field_00; /*0x635d77*/
LABEL_16:
      result = (Color_field_00 >> g_BitShift_Green_0 << g_BitShift_Red) | v10; /*0x635d7b*/
      this->u32_AC = result; /*0x635d93*/
    }
  }
  return result; /*0x635c60*/

}
}
// 0x635DB0
namespace gamemd {
int TeamClass::Reset(char aP1, void *a2)
{

  int result; // eax
  (*((unsigned char *)&(result))) = aP1; /*0x635db0*/
  this->u32_B4 = -1; /*0x635dba*/
  if ( aP1 ) /*0x635dc0*/
  {
    HouseClass *target; // edx
    target = this->target; /*0x635dc2*/
    for ( result = 0; result < (int)target; *(unsigned int *)(*((unsigned int *)this->buildingType + result - 1) + 116) = -1 ) /*0x635dc9*/
      ++result; /*0x635dcf*/
    this->u32_AC = -1; /*0x635ddc*/
  }
  return result; /*0x635de2*/
}
}
// 0x636120
namespace gamemd {
TechnoClass * * TeamClass::RemoveAllMembers()
{

  int abstractFlags; // ecx
  int v3; // eax
  int v4; // esi
  int Value; // eax
  int v6; // ebp
  int v7; // eax
  unsigned int *v8; // edi
  unsigned int v9; // eax
  int v10; // eax
  int v11; // ecx
  unsigned int v12; // esi
  int v13; // eax
  int result; // eax
  bool v15; // [esp+Bh] [ebp-Dh]
  void *Block; // [esp+Ch] [ebp-Ch] BYREF
  int i; // [esp+10h] [ebp-8h]
  int ptr_0; // [esp+14h] [ebp-4h] BYREF

  abstractFlags = this->abstractFlags; /*0x636127*/
  v15 = abstractFlags == 0; /*0x63612c*/
  v3 = 0; /*0x636131*/
  ptr_0 = abstractFlags; /*0x636133*/
  for ( i = 0; i < ptr_0; ++i ) /*0x63613d*/
  {
    v4 = *(unsigned int *)(this->vfptr2 + 4 * v3); /*0x636148*/
    Value = Array::FindValue((Array *)v4, this->vfptr); /*0x636150*/
    if ( Value == -1 ) /*0x636158*/
      v6 = 0; /*0x63615a*/
    else
      v6 = *(unsigned int *)(*(unsigned int *)(v4 + 4) + 4 * Value); /*0x636161*/
    Block = (void *)v6; /*0x636166*/
    if ( v6 ) /*0x63616a*/
    {
      if ( *(unsigned char *)(v6 + 12) ) /*0x636170*/
        ScriptAction::DecrementRefCount((ScriptAction *)v4, v6); /*0x63617a*/
      v7 = *(unsigned int *)(v6 + 8); /*0x63617f*/
      if ( v7 != -1 ) /*0x636185*/
      {
        v8 = *(unsigned int **)(*(unsigned int *)(v4 + 36) + 4 * v7); /*0x63618c*/
        v8[29] = -1; /*0x636191*/
        ((TeamClass *)v4)->Reset(0); /*0x636198*/
        v9 = v8[28] - 1; /*0x6361a0*/
        v8[28] = v9; /*0x6361a1*/
        if ( !v9 ) /*0x6361a4*/
          ScriptQueue::PushEntry((ScriptQueue *)v4); /*0x6361a8*/
      }
      *(unsigned int *)(v6 + 8) = -1; /*0x6361ad*/
      __3_YAXPAX_Z(*((void **)Block + 1)); /*0x6361bc*/
      v10 = (*(int (**)(int, void **))(*(unsigned int *)v4 + 16))(v4, &Block); /*0x6361cd*/
      if ( v10 != -1 ) /*0x6361d3*/
        Vector4::EraseAt_Copy((Vector4 *)v4, v10); /*0x6361d8*/
      __3_YAXPAX_Z(Block); /*0x6361e2*/
      if ( !*(unsigned int *)(v4 + 16) && v4 ) /*0x6361f3*/
      {
        FactoryClass::ClearObjects((FactoryClass *)v4); /*0x6361f7*/
        Team_Remove((ObjectClass *)v4); /*0x6361fe*/
        *(unsigned int *)(v4 + 32) = &g_ptr_7EFF24; /*0x636206*/
        VectorClass::Cleanup2(v4 + 32); /*0x63620c*/
        /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7EFF04) */  /*0x636213*/
        VectorClass_ptr_PlanningMemberClass::Remove((_VectorClass_PAVPlanningMemberClass *)v4); /*0x636219*/
        __3_YAXPAX_Z((void *)v4); /*0x63621f*/
      }
    }
    v3 = i + 1; /*0x63622f*/
  }
  if ( !v15 ) /*0x636244*/
  {
    ptr_0 = this->vfptr; /*0x63624c*/
    v11 = *(unsigned int *)(ptr_0 + 540); /*0x636250*/
    v12 = *(unsigned int *)(v11 + 48); /*0x636256*/
    if ( (unsigned __int8)House::IsHumanPlayer((House *)v11) && *(int *)((char *)&stru_A83CD9.estimatedHealth + 3) ) /*0x636269*/
      v12 = *(unsigned int *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 48); /*0x63626b*/
    if ( v12 < 0x18 ) /*0x636270*/
      *(&stru_AC4B48.SidebarClass_field_0x3C + v12) = (*(&stru_AC4B48.SidebarClass_field_0x3C + v12) - 1) /*0x63628a*/
                                                    & ((*(&stru_AC4B48.SidebarClass_field_0x3C + v12) - 1 < 0) - 1);
    v13 = (*(int (**)(char *, int *))(*(unsigned int *)&stru_AC4B48.__pad_B8[64] + 16))( /*0x6362a1*/
            &stru_AC4B48.__pad_B8[64],
            &ptr_0);
    if ( v13 != -1 && v13 < *(int *)&stru_AC4B48.__pad_B8[80] ) /*0x6362b3*/
    {
      --*(unsigned int *)&stru_AC4B48.__pad_B8[80]; /*0x6362b8*/
      for ( ; /*0x6362be*/
            v13 < *(int *)&stru_AC4B48.__pad_B8[80];
            *(unsigned int *)(*(unsigned int *)&stru_AC4B48.__pad_B8[68] + 4 * v13 - 4) = *(unsigned int *)(*(unsigned int *)&stru_AC4B48.__pad_B8[68]
                                                                                        + 4 * v13) )
      {
        ++v13; /*0x6362c6*/
      }
    }
  }
  result = (*(int (**)(int *))(this->vfptr1 + 12))(&this->vfptr1); /*0x6362e3*/
  this->countObjects[1] = -1; /*0x6362e6*/
  this->countObjects[2] = -1; /*0x6362ec*/
  this->countObjects[3] = -1; /*0x6362f2*/
  LOBYTE(this->countObjects[4]) = 0; /*0x6362f8*/
  BYTE1(this->countObjects[4]) = 0; /*0x6362ff*/
  return result; /*0x636306*/

}
}
// 0x6367B0
namespace gamemd {
int TeamClass::UpdateBuildQueue(AbstractClass * aP1, TechnoClass * aP2, TechnoClass * aP3)
{

  TeamClass *v4; // esi
  int result; // eax
  int ptr_8; // edx
  int ptr_0; // esi
  int v8; // ebp
  int v9; // eax
  int v10; // ecx
  unsigned int **v11; // edx
  unsigned __int8 **v12; // eax
  unsigned __int8 *v13; // esi
  unsigned char *WaypointCoords; // eax
  int v15; // eax
  unsigned int *v16; // ebx
  unsigned char *v17; // eax
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  unsigned int *v21; // edx
  int Type; // edi
  int v23; // eax
  int v24; // ecx
  int v25; // eax
  unsigned int *v26; // edx
  int v27; // [esp+10h] [ebp-84h]
  char v29[8]; // [esp+1Ch] [ebp-78h] BYREF
  unsigned char v30[108]; // [esp+24h] [ebp-70h] BYREF
  __int16 v31; // [esp+90h] [ebp-4h]
  unsigned __int8 v32; // [esp+92h] [ebp-2h]

  v4 = this; /*0x6367b7*/
  result = BuildingClass::GetType((BuildingClass *)aP1); /*0x6367c4*/
  if ( result ) /*0x6367cb*/
  {
    result = aP2; /*0x6367d1*/
    v27 = aP2; /*0x6367e1*/
    if ( aP2 < aP2 + aP3 ) /*0x6367eb*/
    {
      while ( 1 ) /*0x6367fa*/
      {
        ptr_8 = v4->vfptr2; /*0x6367fa*/
        ptr_0 = v4->vfptr; /*0x636801*/
        v8 = *(unsigned int *)(ptr_8 + 4 * v27); /*0x636803*/
        v9 = 0; /*0x636806*/
        v10 = *(unsigned int *)(v8 + 16); /*0x636808*/
        if ( v10 <= 0 ) /*0x63680d*/
          goto LABEL_11; /*0x63680d*/
        v11 = *(unsigned int ***)(v8 + 4); /*0x636812*/
        while ( **v11 != ptr_0 ) /*0x636818*/
        {
          ++v9; /*0x63681a*/
          ++v11; /*0x63681b*/
          if ( v9 >= v10 ) /*0x636820*/
          {
            v12 = 0; /*0x636822*/
            goto LABEL_13; /*0x636824*/
          }
        }
        if ( v9 == -1 ) /*0x636829*/
LABEL_11:
          v12 = 0; /*0x63682b*/
        else
          v12 = *(unsigned __int8 ***)(*(unsigned int *)(v8 + 4) + 4 * v9); /*0x63682f*/
LABEL_13:
        v13 = v12[1]; /*0x636832*/
        memcpy(v30, v13, sizeof(v30)); /*0x63683e*/
        v13 += 108; /*0x63683e*/
        v31 = *(unsigned short *)v13; /*0x636847*/
        v32 = v13[2]; /*0x63684e*/
        WaypointCoords = ScriptAction::GetWaypointCoords((ScriptAction *)v29, aP1); /*0x63684f*/
        *(unsigned int *)&v30[7] = *(unsigned int *)WaypointCoords; /*0x636858*/
        v30[11] = WaypointCoords[4]; /*0x63685f*/
        v15 = __2_YAPAXI_Z(0x10u); /*0x636863*/
        v16 = 0; /*0x636868*/
        if ( v15 ) /*0x63686f*/
        {
          *(unsigned int *)v15 = 0; /*0x636871*/
          *(unsigned int *)(v15 + 4) = 0; /*0x636873*/
          *(unsigned char *)(v15 + 12) = 0; /*0x636876*/
          *(unsigned int *)(v15 + 8) = -1; /*0x636879*/
          v16 = (unsigned int *)v15; /*0x636880*/
        }
        *v16 = aP1; /*0x63688b*/
        v17 = (unsigned char *)__2_YAPAXI_Z(0x6Fu); /*0x63688d*/
        if ( v17 ) /*0x636897*/
          *v17 = 0; /*0x636899*/
        else
          v17 = 0; /*0x63689e*/
        memcpy(v17, v30, 0x6Cu); /*0x6368ab*/
        *((unsigned short *)v17 + 54) = v31; /*0x6368ad*/
        v17[110] = v32; /*0x6368af*/
        v16->ptr_2 = v17; /*0x6368b0*/
        v18 = *(unsigned int *)(v8 + 8); /*0x6368b3*/
        if ( *(unsigned int *)(v8 + 16) < v18 /*0x6368d7*/
          || (*(unsigned char *)(v8 + 13) || !v18)
          && (v19 = *(unsigned int *)(v8 + 20), v19 > 0)
          && (*(unsigned __int8 (**)(int, int, unsigned int))(*(unsigned int *)v8 + 8))(v8, v18 + v19, 0) )
        {
          v20 = *(unsigned int *)(v8 + 16); /*0x6368de*/
          v21 = *(unsigned int **)(v8 + 4); /*0x6368e1*/
          *(unsigned int *)(v8 + 16) = v20 + 1; /*0x6368e7*/
          v21[v20] = (unsigned int)v16; /*0x6368ea*/
        }
        Type = BuildingClass::GetType((BuildingClass *)aP1); /*0x6368f9*/
        v23 = *(unsigned int *)(Type + 12); /*0x6368fb*/
        if ( *(unsigned int *)(Type + 20) < v23 /*0x636923*/
          || (*(unsigned char *)(Type + 17) || !v23)
          && (v24 = *(unsigned int *)(Type + 24), v24 > 0)
          && (*(unsigned __int8 (**)(int, int, unsigned int))(*(unsigned int *)(Type + 4) + 8))(Type + 4, v23 + v24, 0) )
        {
          v25 = *(unsigned int *)(Type + 20); /*0x63692a*/
          v26 = *(unsigned int **)(Type + 8); /*0x63692d*/
          *(unsigned int *)(Type + 20) = v25 + 1; /*0x636933*/
          v26[v25] = v8; /*0x636936*/
        }
        if ( *(unsigned int *)(Type + 140) == -1 ) /*0x636940*/
          *(unsigned int *)(Type + 140) = *(unsigned int *)(Type + 20) - 1; /*0x636946*/
        ScriptAction::PlaceObject(v8, v16); /*0x63694f*/
        result = ++v27; /*0x63695c*/
        if ( v27 >= aP2 + aP3 ) /*0x636963*/
          break; /*0x636963*/
        v4 = this; /*0x6367f6*/
      }
    }
  }
  return result; /*0x63696c*/

}
}
// 0x636980
namespace gamemd {
TeamClass * * TeamClass::ProcessScriptActions(unsigned int * a2, int a3)
{

  TeamClass *v3; // ebx
  int v4; // edi
  int result; // eax
  int v6; // ebp
  int v7; // eax
  int v8; // ecx
  unsigned int **v9; // edx
  int v10; // eax
  unsigned char *v11; // esi
  unsigned char *WaypointCoords; // eax
  unsigned int *v13; // eax
  unsigned int *v14; // ebx
  unsigned char *v15; // eax
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  unsigned int *v19; // edx
  int Type; // edi
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  unsigned int *v24; // edx
  int v25; // [esp+10h] [ebp-84h]
  int v27; // [esp+18h] [ebp-7Ch]
  unsigned char v28[8]; // [esp+1Ch] [ebp-78h] BYREF
  unsigned char v29[108]; // [esp+24h] [ebp-70h] BYREF
  __int16 v30; // [esp+90h] [ebp-4h]
  char v31; // [esp+92h] [ebp-2h]

  v3 = this; /*0x636987*/
  v4 = this->abstractFlags - a3; /*0x6369a0*/
  result = BuildingClass::GetType((BuildingClass *)a2); /*0x6369a2*/
  if ( result ) /*0x6369a9*/
  {
    v25 = a3; /*0x6369b1*/
    v27 = a3 + v4; /*0x6369b7*/
    if ( a3 < a3 + v4 ) /*0x6369bb*/
    {
      while ( 1 ) /*0x6369d1*/
      {
        v6 = *(unsigned int *)(v3->vfptr2 + 4 * v25); /*0x6369d1*/
        v7 = 0; /*0x6369d4*/
        v8 = *(unsigned int *)(v6 + 16); /*0x6369d6*/
        if ( v8 <= 0 ) /*0x6369db*/
          goto LABEL_11; /*0x6369db*/
        v9 = *(unsigned int ***)(v6 + 4); /*0x6369e0*/
        while ( **v9 != v3->vfptr ) /*0x6369e6*/
        {
          ++v7; /*0x6369e8*/
          ++v9; /*0x6369e9*/
          if ( v7 >= v8 ) /*0x6369ee*/
          {
            v10 = 0; /*0x6369f0*/
            goto LABEL_13; /*0x6369f2*/
          }
        }
        if ( v7 == -1 ) /*0x6369f7*/
LABEL_11:
          v10 = 0; /*0x6369f9*/
        else
          v10 = *(unsigned int *)(*(unsigned int *)(v6 + 4) + 4 * v7); /*0x6369fd*/
LABEL_13:
        v11 = *(unsigned char **)(v10 + 4); /*0x636a00*/
        memcpy(v29, v11, sizeof(v29)); /*0x636a13*/
        v11 += 108; /*0x636a13*/
        v30 = *(unsigned short *)v11; /*0x636a15*/
        v31 = v11[2]; /*0x636a1c*/
        WaypointCoords = ScriptAction::GetWaypointCoords((ScriptAction *)v28, a2); /*0x636a1d*/
        *(unsigned int *)&v29[7] = *(unsigned int *)WaypointCoords; /*0x636a26*/
        v29[11] = WaypointCoords[4]; /*0x636a2d*/
        v13 = (unsigned int *)__2_YAPAXI_Z(0x10u); /*0x636a31*/
        v14 = 0; /*0x636a36*/
        if ( v13 ) /*0x636a3d*/
        {
          *v13 = 0; /*0x636a3f*/
          v13->ptr_2 = 0; /*0x636a41*/
          v13->ptr_4 = 0; /*0x636a44*/
          v13->ptr_3 = -1; /*0x636a47*/
          v14 = v13; /*0x636a4e*/
        }
        *v14 = (unsigned int)a2; /*0x636a59*/
        v15 = (unsigned char *)__2_YAPAXI_Z(0x6Fu); /*0x636a5b*/
        if ( v15 ) /*0x636a65*/
          *v15 = 0; /*0x636a67*/
        else
          v15 = 0; /*0x636a6c*/
        memcpy(v15, v29, 0x6Cu); /*0x636a79*/
        *((unsigned short *)v15 + 54) = v30; /*0x636a7b*/
        v15[110] = v31; /*0x636a7d*/
        v14->ptr_2 = (unsigned int)v15; /*0x636a7e*/
        v16 = *(unsigned int *)(v6 + 8); /*0x636a81*/
        if ( *(unsigned int *)(v6 + 16) < v16 /*0x636aa5*/
          || (*(unsigned char *)(v6 + 13) || !v16)
          && (v17 = *(unsigned int *)(v6 + 20), v17 > 0)
          && (*(unsigned __int8 (**)(int, int, unsigned int))(*(unsigned int *)v6 + 8))(v6, v16 + v17, 0) )
        {
          v18 = *(unsigned int *)(v6 + 16); /*0x636aac*/
          v19 = *(unsigned int **)(v6 + 4); /*0x636aaf*/
          *(unsigned int *)(v6 + 16) = v18 + 1; /*0x636ab5*/
          v19[v18] = (unsigned int)v14; /*0x636ab8*/
        }
        Type = BuildingClass::GetType((BuildingClass *)a2); /*0x636ac7*/
        v21 = *(unsigned int *)(Type + 12); /*0x636ac9*/
        if ( *(unsigned int *)(Type + 20) < v21 /*0x636af1*/
          || (*(unsigned char *)(Type + 17) || !v21)
          && (v22 = *(unsigned int *)(Type + 24), v22 > 0)
          && (*(unsigned __int8 (**)(int, int, unsigned int))(*(unsigned int *)(Type + 4) + 8))(Type + 4, v21 + v22, 0) )
        {
          v23 = *(unsigned int *)(Type + 20); /*0x636af8*/
          v24 = *(unsigned int **)(Type + 8); /*0x636afb*/
          *(unsigned int *)(Type + 20) = v23 + 1; /*0x636b01*/
          v24[v23] = v6; /*0x636b04*/
        }
        if ( *(unsigned int *)(Type + 140) == -1 ) /*0x636b0e*/
          *(unsigned int *)(Type + 140) = *(unsigned int *)(Type + 20) - 1; /*0x636b14*/
        ScriptAction::PlaceObject(v6, v14); /*0x636b1d*/
        result = ++v25; /*0x636b2a*/
        if ( v25 >= v27 ) /*0x636b31*/
          break; /*0x636b31*/
        v3 = this; /*0x6369c4*/
      }
    }
  }
  return result; /*0x636b38*/

}
}
// 0x636B50
namespace gamemd {
CampaignClass * * TeamClass::Cleanup(int aP1, void *a2)
{

  int v3; // ebx
  int v4; // eax
  int v5; // ebp
  int v6; // eax
  int v7; // eax
  int v8; // esi
  int Value; // eax
  int v10; // eax
  unsigned int *v11; // ebx
  unsigned int v12; // eax
  int v13; // eax
  int result; // eax
  int v15; // ecx
  void *Block; // [esp+8h] [ebp-4h] BYREF

  if ( this->abstractFlags == 1 ) /*0x636b59*/
  {
    this->countObjects[1] = -1; /*0x636b5b*/
LABEL_3:
    v3 = a2; /*0x636b65*/
    goto LABEL_4; /*0x636b65*/
  }
  v6 = this->countObjects[1]; /*0x636b84*/
  if ( v6 <= 0 ) /*0x636b8c*/
    goto LABEL_3; /*0x636b8c*/
  v3 = a2; /*0x636b8e*/
  if ( a2 < v6 ) /*0x636b94*/
    this->countObjects[1] = v6 - 1; /*0x636b97*/
LABEL_4:
  v4 = this->countObjects[3]; /*0x636b69*/
  v5 = 0; /*0x636b70*/
  if ( v4 >= 0 ) /*0x636b75*/
  {
    if ( v3 >= v4 ) /*0x636b79*/
    {
      v7 = this->countObjects[2] - 1; /*0x636ba6*/
      this->countObjects[2] = v7; /*0x636ba8*/
      if ( v7 < 3 ) /*0x636bb1*/
      {
        this->countObjects[3] = -1; /*0x636bb3*/
        this->countObjects[2] = 0; /*0x636bbd*/
      }
    }
    else
    {
      this->countObjects[3] = v4 - 1; /*0x636b7c*/
    }
  }
  v8 = *(unsigned int *)(this->vfptr2 + 4 * v3); /*0x636bc6*/
  Value = Array::FindValue((Array *)v8, this->vfptr); /*0x636bce*/
  if ( Value != -1 ) /*0x636bd6*/
    v5 = *(unsigned int *)(*(unsigned int *)(v8 + 4) + 4 * Value); /*0x636bdb*/
  Block = (void *)v5; /*0x636be0*/
  if ( v5 ) /*0x636be4*/
  {
    if ( *(unsigned char *)(v5 + 12) ) /*0x636bea*/
      ScriptAction::DecrementRefCount((ScriptAction *)v8, v5); /*0x636bf4*/
    v10 = *(unsigned int *)(v5 + 8); /*0x636bf9*/
    if ( v10 != -1 ) /*0x636bff*/
    {
      v11 = *(unsigned int **)(*(unsigned int *)(v8 + 36) + 4 * v10); /*0x636c08*/
      v11[29] = -1; /*0x636c0b*/
      TeamClass::Reset((TeamClass *)v8, 0); /*0x636c12*/
      v12 = v11[28] - 1; /*0x636c1a*/
      v11[28] = v12; /*0x636c1b*/
      if ( !v12 ) /*0x636c1e*/
        ScriptQueue::PushEntry((ScriptQueue *)v8); /*0x636c22*/
      v3 = a2; /*0x636c27*/
    }
    *(unsigned int *)(v5 + 8) = -1; /*0x636c2b*/
    __3_YAXPAX_Z(*((void **)Block + 1)); /*0x636c3a*/
    v13 = (*(int (**)(int, void **))(*(unsigned int *)v8 + 16))(v8, &Block); /*0x636c4b*/
    if ( v13 != -1 ) /*0x636c51*/
      Vector4::EraseAt_Copy((Vector4 *)v8, v13); /*0x636c56*/
    __3_YAXPAX_Z(Block); /*0x636c60*/
    if ( !*(unsigned int *)(v8 + 16) && v8 ) /*0x636c71*/
    {
      FactoryClass::ClearObjects((FactoryClass *)v8); /*0x636c75*/
      Team_Remove((ObjectClass *)v8); /*0x636c7c*/
      *(unsigned int *)(v8 + 32) = &g_ptr_7EFF24; /*0x636c84*/
      VectorClass::Cleanup2(v8 + 32); /*0x636c8a*/
      /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7EFF04) */  /*0x636c91*/
      VectorClass_ptr_PlanningMemberClass::Remove((_VectorClass_PAVPlanningMemberClass *)v8); /*0x636c97*/
      __3_YAXPAX_Z((void *)v8); /*0x636c9d*/
    }
  }
  result = this->abstractFlags; /*0x636ca5*/
  if ( v3 < result ) /*0x636cac*/
  {
    v15 = result - 1; /*0x636cae*/
    result = v3; /*0x636cb1*/
    for ( this->abstractFlags = v15; /*0x636cb8*/
          result < this->abstractFlags;
          *(unsigned int *)(this->vfptr2 + 4 * result - 4) = *(unsigned int *)(this->vfptr2 + 4 * result) )
    {
      ++result; /*0x636cbd*/
    }
  }
  return result; /*0x636ccc*/

}
}
// 0x6E52A0
namespace gamemd {
void * TeamClass::FindOrCreate(void *a1)
{

  int v2; // ecx
  char *v3; // edx
  int result; // eax
  int v5; // eax

  v2 = 0; /*0x6e52aa*/
  if ( g_GameObjectCleanup <= 0 ) /*0x6e52ae*/
  {
LABEL_5:
    v5 = __2_YAPAXI_Z(0x38u); /*0x6e52c5*/
    if ( v5 ) /*0x6e52d1*/
      return TeknoClass::GetType(v5, (int)this); /*0x6e52d6*/
    else
      return 0; /*0x6e52de*/
  }
  else
  {
    v3 = (char *)g_TagClassCount; /*0x6e52b0*/
    while ( 1 ) /*0x6e52b6*/
    {
      result = *(unsigned int *)v3; /*0x6e52b6*/
      if ( *(TeamClass **)(*(unsigned int *)v3 + 36) == this ) /*0x6e52bb*/
        break; /*0x6e52bb*/
      ++v2; /*0x6e52bd*/
      v3 += 4; /*0x6e52be*/
      if ( v2 >= g_GameObjectCleanup ) /*0x6e52c3*/
        goto LABEL_5; /*0x6e52c3*/
    }
  }
  return result; /*0x6e52db*/

}
// 0x6E53A0
namespace gamemd {  // G42.18 ns repair
int TeamClass::Update_0(TeamClass *aP0, int aP1, int aP2, int aP3, char aP4, int aP5)  // G57w11: def 同步 hpp（raw 0x6E53A0）
{
  int result; // eax
  char v7; // bl
  TeamClass *currentScript; // esi
  int v10; // eax
  ObjectClass *v11; // eax
  char v12; // [esp+Ah] [ebp-2h]
  char v13; // [esp+Bh] [ebp-1h]

  v7 = 0; /*0x6e53a7*/
  v13 = 0; /*0x6e53ae*/
  v12 = 0; /*0x6e53b2*/
  if ( ((unsigned int *)&stru_A8EB00)[391] /*0x6e53d7*/
    || (aP0->spawnCell)
    || (aP0->spawnCell)
    || (result = (int)aP0->buildingType) == 0 )
  {
    (*((unsigned char *)&(result))) = 0; /*0x6e5552*/
  }
  else
  {
    currentScript = (TeamClass *)aP0->currentScript; /*0x6e53de*/
    for ( (aP0->spawnCell) = 1; currentScript; currentScript = (TeamClass *)currentScript->currentScript ) /*0x6e53ec*/
    {
      if ( TriggerClass::RegisterEvent( /*0x6e5414*/
             (int)currentScript,
             aP1,
             aP2,
             aP4,
             *&aP0->currentScript.buildingType == 2,
             aP5) )
      {
        v10 = *&aP0->currentScript.buildingType; /*0x6e5420*/
        if ( !v10 ) /*0x6e5429*/
        {
          BuildingClass::ExecuteTriggers((int)currentScript, aP2, aP3); /*0x6e546d*/
          result = TeamClass::AddToBuildQueue(currentScript); /*0x6e5474*/
          v7 = 1; /*0x6e5479*/
          v13 = 1; /*0x6e547b*/
          LABEL_14:
          v12 = 1; /*0x6e547f*/
          continue; /*0x6e547f*/
        }
        result = v10 - 1; /*0x6e542b*/
        if ( result ) /*0x6e542c*/
        {
          if ( !--result ) /*0x6e542f*/
          {
            result = BuildingClass::ExecuteTriggers((int)currentScript, aP2, aP3); /*0x6e5439*/
            v7 = 1; /*0x6e543e*/
          }
          continue; /*0x6e5440*/
        }
        if ( aP0->owner != 1 ) /*0x6e5446*/
          goto LABEL_14; /*0x6e5446*/
        BuildingClass::ExecuteTriggers((int)currentScript, aP2, aP3); /*0x6e5450*/
        result = TeamClass::AddToBuildQueue(currentScript); /*0x6e5457*/
        v13 = 1; /*0x6e545c*/
        v7 = 1; /*0x6e5461*/
      }
    }
    (aP0->spawnCell) = 0; /*0x6e548f*/
    if ( v12 ) /*0x6e5499*/
    {
      if ( aP2 && aP2->q034 == aP0 ) /*0x6e54a2*/
        ObjectClass::SetReference((ObjectClass *)aP2, 0); /*0x6e54a8*/
      (((unsigned char *)&(result))[1]) = (((unsigned char *)&(aP3))[1]); /*0x6e54ad*/
      if ( aP3 != dword_B0E700 ) /*0x6e54b9*/
      {
        v11 = (ObjectClass *)((CellCoord *)((CellCoord *)&DataGlobal_87F7E8))->To_CellObj((int16_t *)&aP3); /*0x6e54d5*/
        result = ObjectClass::SetTriggerTarget(v11, 0); /*0x6e54dc*/
      }
    }
    if ( v13 ) /*0x6e54e9*/
    {
      AbstractClass::AnnounceExpiredPointer(&aP0->vfptr, 1); /*0x6e54ef*/
      result = *(unsigned int *)&DataGlobal_B0F6A0; /*0x6e54f4*/
      if ( *(int *)&DataGlobal_B0F6A8 < *(int *)&DataGlobal_B0F6A0 /*0x6e552f*/
        || (DataGlobal_B0F6A5 || !*(unsigned int *)&DataGlobal_B0F6A0)
        && g_BuildingLoadQueue_Array.UnitExitSound > 0
        && (result = (*(int (**)(int *, int, unsigned int))(g_BuildingLoadQueue_Array.ToTile + 8))(
                       &g_BuildingLoadQueue_Array.ToTile,
                       *(unsigned int *)&DataGlobal_B0F6A0 + g_BuildingLoadQueue_Array.UnitExitSound,
                       0),
            (unsigned char)result) )
      {
        result = (*(unsigned int *)&DataGlobal_B0F6A8)++; /*0x6e5537*/
        *(unsigned int *)(*(unsigned int *)DataGlobal_B0F69C + 4 * result) = aP0; /*0x6e5546*/
      }
    }
    (*((unsigned char *)&(result))) = v7; /*0x6e5549*/
  }
  return result; /*0x6e554b*/
}
}  // G42.18 ns repair
}
// 0x6E8DE0
namespace gamemd {
void TeamClass::Destructor(void * a2)
{

  int v2; // edi
  AITriggerTypeClass *v3; // ecx
  HouseClass *owner; // ecx
  TeamTypeClass *buildingType; // eax
  int i; // eax
  TagClass *tag; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  TeamClass *v15; // [esp+10h] [ebp-4h] BYREF

  v2 = 0; /*0x6e8de5*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7F4730) */  /*0x6e8de7*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7F4730) */  /*0x6e8ded*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7F4730) */  /*0x6e8df4*/
  for ( this->vfptr3 = (int)&g_ptr_7F4730; v2 < dword_A8B210; ++v2 ) /*0x6e8e09*/
  {
    v3 = (AITriggerTypeClass *)*((unsigned int *)dword_A8B204 + v2); /*0x6e8e10*/
    if ( v3[3].q01C == this->buildingType ) /*0x6e8e1e*/
    {
      if ( this->achievedGreatSuccess[0] ) /*0x6e8e20*/
        AITriggerTypeClass::RegisterSuccess(v3); /*0x6e8e2a*/
      else
        AITriggerTypeClass::RegisterFailure(v3); /*0x6e8e31*/
    }
  }
  owner = this->owner; /*0x6e8e40*/
  if ( owner ) /*0x6e8e45*/
  {
    buildingType = this->buildingType; /*0x6e8e47*/
    if ( buildingType ) /*0x6e8e4c*/
    {
      if ( buildingType->u32_F6 ) /*0x6e8e4e*/
        --owner->u32_566C; /*0x6e8e58*/
    }
  }
  if ( stru_A8E960.nextScenario[64] && this->buildingType ) /*0x6e8e67*/
  {
    for ( i = this->firstUnit; i; i = this->firstUnit ) /*0x6e8e73*/
      TeamClass::LiberateMember_Start(&this->vfptr, i, 0xFFFFFFFF, 0); /*0x6e8e7c*/
    --*(unsigned int *)&this->buildingType->u32_DC; /*0x6e8e92*/
    tag = (TagClass *)this->tag; /*0x6e8e98*/
    if ( tag ) /*0x6e8e9d*/
    {
      if ( !tag->instanceCount ) /*0x6e8e9f*/
        TagClass::Destroy(tag); /*0x6e8ea6*/
      this->tag = 0; /*0x6e8eab*/
    }
  }
  AbstractClass::AnnounceExpiredPointer((AbstractClass *)this, 1); /*0x6e8eb6*/
  v15 = this; /*0x6e8ecb*/
  v8 = (*(int (**)(int *, TeamClass **))(stru_B0F6C8.DynamicVector_field_0x28 + 16))( /*0x6e8ecf*/
         &stru_B0F6C8.DynamicVector_field_0x28,
         &v15);
  if ( v8 != -1 && v8 < dword_B0F700 && v8 < --dword_B0F700 ) /*0x6e8eea*/
  {
    do /*0x6e8f02*/
    {
      ++v8; /*0x6e8ef2*/
      *((unsigned int *)dword_B0F6F4 + v8 - 1) = *((unsigned int *)dword_B0F6F4 + v8); /*0x6e8ef6*/
    }
    while ( v8 < dword_B0F700 ); /*0x6e8f02*/
  }
  v15 = this; /*0x6e8f14*/
  v9 = (*(int (**)(DynamicVector *, TeamClass **))(*(unsigned int *)stru_B0F720.__pad_0 + 16))(&stru_B0F720, &v15); /*0x6e8f18*/
  if ( v9 != -1 && v9 < stru_B0F720.DynamicVector_field_0x10 ) /*0x6e8f28*/
  {
    --stru_B0F720.DynamicVector_field_0x10; /*0x6e8f2d*/
    for ( ; /*0x6e8f33*/
          v9 < stru_B0F720.DynamicVector_field_0x10;
          *(unsigned int *)(*(unsigned int *)&stru_B0F720.DynamicVector_field_0x1[3] + 4 * v9 - 4) = *(unsigned int *)(*(unsigned int *)&stru_B0F720.DynamicVector_field_0x1[3] + 4 * v9) )
    {
      ++v9; /*0x6e8f3b*/
    }
  }
  v15 = this; /*0x6e8f5d*/
  v10 = (*(int (**)(DynamicVector *, TeamClass **))(*(unsigned int *)stru_B0F670.__pad_0 + 16))(&stru_B0F670, &v15); /*0x6e8f61*/
  if ( v10 != -1 && v10 < stru_B0F670.DynamicVector_field_0x10 ) /*0x6e8f71*/
  {
    --stru_B0F670.DynamicVector_field_0x10; /*0x6e8f76*/
    for ( ; /*0x6e8f7c*/
          v10 < stru_B0F670.DynamicVector_field_0x10;
          *(unsigned int *)(*(unsigned int *)&stru_B0F670.DynamicVector_field_0x1[3] + 4 * v10 - 4) = *(unsigned int *)(*(unsigned int *)&stru_B0F670.DynamicVector_field_0x1[3] + 4 * v10) )
    {
      ++v10; /*0x6e8f84*/
    }
  }
  v15 = this; /*0x6e8fa6*/
  v11 = (*(int (**)(DynamicVector *, TeamClass **))(*(unsigned int *)stru_B0F618.__pad_0 + 16))(&stru_B0F618, &v15); /*0x6e8faa*/
  if ( v11 != -1 && v11 < stru_B0F618.DynamicVector_field_0x10 ) /*0x6e8fba*/
  {
    --stru_B0F618.DynamicVector_field_0x10; /*0x6e8fbf*/
    for ( ; /*0x6e8fc5*/
          v11 < stru_B0F618.DynamicVector_field_0x10;
          *(unsigned int *)(*(unsigned int *)&stru_B0F618.DynamicVector_field_0x1[3] + 4 * v11 - 4) = *(unsigned int *)(*(unsigned int *)&stru_B0F618.DynamicVector_field_0x1[3] + 4 * v11) )
    {
      ++v11; /*0x6e8fcd*/
    }
  }
  v15 = this; /*0x6e8fef*/
  v12 = (*(int (**)(int *, TeamClass **))(dword_8B40E8 + 16))(&dword_8B40E8, &v15); /*0x6e8ff3*/
  if ( v12 != -1 && v12 < dword_8B40F8 && v12 < --dword_8B40F8 ) /*0x6e900e*/
  {
    do /*0x6e9026*/
    {
      ++v12; /*0x6e9016*/
      *((unsigned int *)dword_8B40EC + v12 - 1) = *((unsigned int *)dword_8B40EC + v12); /*0x6e901a*/
    }
    while ( v12 < dword_8B40F8 ); /*0x6e9026*/
  }
  if ( this->unknown74[0] ) /*0x6e9028*/
  {
    v13 = this->buildingType; /*0x6e902f*/
    if ( v13 ) /*0x6e9034*/
      (*(void (**)(int, int))(*(unsigned int *)v13 + 32))(v13, 1); /*0x6e903a*/
  }
  return AbstractClass::DTOR((AbstractClass *)this); /*0x6e9044*/

}
}
// 0x6E9140
namespace gamemd {
void TeamClass::Update(TechnoClass * aP0, unsigned int * a1, int j, void *a4)
{

  TeamClass *v3; // ecx
  int v4; // esi
  int v5; // edx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  int i; // edi
  char v11; // cl
  char v12; // al
  char v13; // bl
  TeamClass *v14; // ecx
  int *Entry; // eax
  signed int v16; // ecx
  unsigned int *n; // edi
  int v18; // eax
  unsigned int *ii; // edi
  int v20; // eax
  unsigned int *v21; // edi
  unsigned int *v22; // ebp
  int v23; // eax
  void *MapSpawnCell; // eax
  unsigned int *m; // edi
  int *v26; // edi
  int *v27; // ebp
  int v28; // ebx
  int Owner; // eax
  int v30; // eax
  int *v31; // ebp
  int k; // edi
  int v33; // ecx
  ScriptClass *v34; // eax
  AbstractClass *v35; // eax
  unsigned int *v36; // edi
  unsigned int *v37; // edi
  unsigned int *v38; // edi
  unsigned int *v39; // eax
  int *v40; // edi
  char v41; // cl
  int v42; // edx
  unsigned int *v43; // eax
  unsigned int *v44; // edi
  unsigned int *v45; // edi
  int v46; // eax
  unsigned int *v47; // edi
  // w15f4: v3-export truncated tail (RHS lost): char v4... ...
  // live body via get_context/0x6E9140 — w15f4 regrafted decls only
  char v48; // al
  unsigned int *v49; // ebp
  unsigned int *v50; // edi
  char v51; // al
  unsigned int *v52; // ebp
  unsigned int *v53; // edi
  char v54; // al
  unsigned int *v55; // ebp
  unsigned int *v56; // edi
  char v57; // al
  unsigned int *v58; // ebp
  unsigned int *v59; // edi
  char v60; // al
  unsigned int *v61; // ebp
  char v62[4]; // [esp+10h] [ebp-28h] BYREF
  unsigned int v63[2]; // [esp+14h] [ebp-24h] BYREF
  int GroundHeight; // [esp+1Ch] [ebp-1Ch]
  int v65; // [esp+20h] [ebp-18h] BYREF
  HouseClass *v66; // [esp+24h] [ebp-14h]
  unsigned char v67[12]; // [esp+2Ch] [ebp-Ch] BYREF
}
} // namespace gamemd

// 0x6EA3E0
namespace gamemd {
int TeamClass::UpdateReadinessState()
{

  int v2; // eax
  int totalObjects; // ecx
  TeamTypeClass *buildingType; // edi
  char spawnStatus; // al
  char *i; // edi
  char TeamClass_field_7A; // [esp+Fh] [ebp-1h]

  TeamClass_field_7A = this->TeamClass_field_7A; /*0x6ea3ec*/
  v2 = TeamClass::SumMemberCounts(*&this->currentScript.firstUnit); /*0x6ea3f6*/
  totalObjects = this->totalObjects; /*0x6ea3fb*/
  if ( totalObjects > 0 ) /*0x6ea404*/
  {
    this->unknown79 = totalObjects == v2; /*0x6ea40d*/
    if ( totalObjects == v2 ) /*0x6ea410*/
      this->spawnStatus = 1; /*0x6ea412*/
    buildingType = this->buildingType; /*0x6ea416*/
    if ( HIBYTE(buildingType[1].TeamTypeClass_field_34) ) /*0x6ea419*/
    {
      if ( v2 <= 2 ) /*0x6ea424*/
        this->TeamClass_field_7A = totalObjects < v2; /*0x6ea443*/
      else
        this->TeamClass_field_7A = totalObjects <= v2 / 3; /*0x6ea439*/
    }
    else
    {
      this->TeamClass_field_7A = this->spawnStatus == 0; /*0x6ea44e*/
    }
    if ( HIBYTE(buildingType[1].TeamTypeClass_field_30) ) /*0x6ea451*/
    {
      if ( this->TeamClass_field_7A ) /*0x6ea459*/
        this->unknown76 = 0; /*0x6ea45e*/
      else
        this->unknown76 = 1; /*0x6ea463*/
    }
    this->TeamClass_field_7E = 0; /*0x6ea467*/
    this->needsToDisappear = 0; /*0x6ea46a*/
    goto LABEL_14; /*0x6ea46a*/
  }
  spawnStatus = this->spawnStatus; /*0x6ea483*/
  this->unknown76 = 0; /*0x6ea486*/
  this->TeamClass_field_7A = 1; /*0x6ea48b*/
  this->unknown79 = 0; /*0x6ea48f*/
  this->spawnCell = 0; /*0x6ea492*/
  if ( !spawnStatus ) /*0x6ea495*/
  {
    LABEL_14:
    if ( TeamClass_field_7A != this->TeamClass_field_7A ) /*0x6ea476*/
      this->TeamClass_field_7B = 1; /*0x6ea478*/
    return 1; /*0x6ea482*/
  }
  if ( this->unknown82 ) /*0x6ea497*/
  {
    for ( i = (char *)&DataGlobal_8B3DC0[792][-1].OwnerHouse + 3; (int)i >= 0; --i ) /*0x6ea4aa*/
    {
      if ( (unsigned __int8)TeamClass::Update_0( /*0x6ea4cf*/
                              *((TeamClass **)&dword_8B40CC->ObjectClass + (unsigned int)i),
                              23,
                              0,
                              g_BuildingLoadQueue_Array.?[1],
                              0,
                              0)
        && !FootClass_Array.? )
      {
        break; /*0x6ea4cf*/
      }
    }
  }
  if ( this ) /*0x6ea4d6*/
    (*((void (**)(TeamClass *, int))this->vfptr + 8))(this, 1); /*0x6ea4de*/
  return 0; /*0x6ea47c*/

}
}
// 0x6EA870
namespace gamemd {
int TeamClass::LiberateMember_Start(int aP1, unsigned int a3, char aP3)
{
  int v10; // esi

  int result = aP1->u32_5D4; // eax /*0x6ea879*/
  aP1->u32_6B8 = 1; /*0x6ea87f*/
  if ( this == (int *)result ) /*0x6ea888*/
  {
    if ( aP1->ptr_34 == *(&this->unknown38) ) /*0x6ea89b*/
    {
      void *v6 = aP1->q21C; // ecx /*0x6ea89d*/
      if ( v6 ) /*0x6ea8a7*/
      {
        if ( !(uint8_t)((House *)(v6))->IsCurrentPlayer() ) /*0x6ea8a9*/
          ObjectClass::SetReference((unsigned int *)aP1, 0); /*0x6ea8b5*/
      }
    }
    if ( a3 == -1 ) /*0x6ea8c6*/
    {
      int v7 = this->q5A0; // eax /*0x6ea8c8*/
      if ( v7 ) /*0x6ea8cd*/
      {
        int v8 = v7->Tactical_E4; // eax /*0x6ea8cf*/
        if ( v8 ) /*0x6ea8d7*/
        {
          a3 = 0; /*0x6ea8df*/
          if ( this->target > 0 ) /*0x6ea8e5*/
          {
            int v9 = 168; // ebx /*0x6ea8e7*/
            do /*0x6ea919*/
            {
              v10 = *(unsigned int *)&this->q5A0->Tactical_E4; /*0x6ea8f2*/
              if ( *(unsigned int *)(v9 + v10) == (*(int (**)(int))(*(unsigned int *)aP1 + 136))(aP1) ) /*0x6ea903*/
                break; /*0x6ea903*/
              v9 += 8; /*0x6ea910*/
              ++a3; /*0x6ea915*/
            }
            while ( (signed int)a3 < *(unsigned int *)(v10 + 156) ); /*0x6ea919*/
          }
        }
      }
    }
    int v11 = this->q5A0; // eax /*0x6ea91d*/
    if ( v11 ) /*0x6ea922*/
    {
      int v12 = v11->Tactical_E4; // eax /*0x6ea924*/
      if ( v12 ) /*0x6ea92c*/
      {
        if ( a3 < this->target ) /*0x6ea93a*/
          --*(this + a3 + 34); /*0x6ea93c*/
      }
    }
    int v13; // esi
    v13 = *(&this->qD20); /*0x6ea943*/
    char v14 = 0; // cl /*0x6ea946*/
    int v15 = 0; // eax /*0x6ea948*/
    char v16 = 0; // dl /*0x6ea94a*/
    char v20; // [esp+14h] [ebp+8h]
    v20 = 0; /*0x6ea94e*/
    int v19; // [esp+8h] [ebp-4h]
    v19 = 0; /*0x6ea952*/
    if ( v13 ) /*0x6ea956*/
    {
      while ( !v16 || !v14 ) /*0x6ea96c*/
      {
        if ( v13 == aP1 ) /*0x6ea974*/
        {
          if ( v15 ) /*0x6ea978*/
            v15->FootClass_field_5D8 = v13->FootClass_field_5D8; /*0x6ea980*/
          else
            *(&this->qD20) = v13->FootClass_field_5D8; /*0x6ea98e*/
          int v17 = v13->FootClass_field_5D8; // eax /*0x6ea991*/
          v13->FootClass_field_5D8 = 0; /*0x6ea997*/
          v13->FootClass_field_5D4 = 0; /*0x6ea99d*/
          v13->suspendedMission = -1; /*0x6ea9a3*/
          v13->FootClass_field_5A8 = 0; /*0x6ea9ad*/
          v13->lastTarget = 0; /*0x6ea9b3*/
          v13 = v17; /*0x6ea9bc*/
          --*(&this->currentScript); /*0x6ea9c1*/
          int v18; // eax
          v18 = (*(int (**)(int))(*(unsigned int *)aP1 + 704))(aP1); /*0x6ea9cc*/
          v16 = 1; /*0x6ea9d5*/
          *(&this->qBE0) -= v18; /*0x6ea9db*/
        }
        else
        {
          if ( v14 || (v20 = 0, v13->isTeamLeader) ) /*0x6ea9e4*/
            v20 = 1; /*0x6ea9f2*/
          v19 = v13; /*0x6ea9f7*/
          v13 = v13->FootClass_field_5D8; /*0x6ea9fb*/
        }
        if ( !v13 ) /*0x6eaa03*/
        {
          v14 = v20; /*0x6eaa09*/
          break; /*0x6eaa09*/
        }
        v15 = v19; /*0x6ea95e*/
        v14 = v20; /*0x6ea962*/
      }
    }
    result = aP1->u32_5D4; /*0x6eaa0d*/
    if ( result ) /*0x6eaa16*/
      aP1->u32_5D4 = 0; /*0x6eaa18*/
    if ( !dword_A8E7AC && aP1->ptr_24 && !*(unsigned char *)(aP1 + 1061) && !*(unsigned char *)(aP1 + 129) && !aP3 ) /*0x6eaa4a*/
    {
      result = (*(int (**)(int, unsigned int, int))(*(unsigned int *)aP1 + 1156))(aP1, 0, 1); /*0x6eaa54*/
      v14 = v20; /*0x6eaa5a*/
    }
    if ( !v14 ) /*0x6eaa60*/
    {
      result = *(&this->qD20); /*0x6eaa62*/
      if ( result ) /*0x6eaa67*/
      {
        result->u8_689 = 1; /*0x6eaa69*/
        *(&this->q820) = 0; /*0x6eaa70*/
      }
    }
    this->TeamClass_field_7E = 1; /*0x6eaa73*/
    this->needsToDisappear = 1; /*0x6eaa77*/
    (*((unsigned char *)&(result))) = 1; /*0x6eaa7d*/
  }
  else
  {
    (*((unsigned char *)&(result))) = 1; /*0x6ea88b*/
  }
  return result; /*0x6ea88a*/
}
}
// 0x6EAA90
namespace gamemd {
TeamTypeClass * * TeamClass::RecruitMember(int a2)
{


  TeamClass *v2 = this; // edi /*0x6eaa97*/
  int v3 = 0; // ebx /*0x6eaa99*/
  CellClass *spawnCell; // ecx
  spawnCell = this->spawnCell; /*0x6eaa9f*/
  int *v5; // eax
  unsigned char v38[12]; // [esp+30h] [ebp-Ch] BYREF
  if ( spawnCell ) /*0x6eaaa4*/
    v5 = (int *)(*(int (**)(CellClass *, unsigned char *))(spawnCell->mapCoords[0] + 72))(spawnCell, v38); /*0x6eaaad*/
  else
    v5 = &DataGlobal_B0E840[296]; /*0x6eaab2*/
  int v35; // [esp+24h] [ebp-18h] BYREF
  v35 = *v5; /*0x6eaab9*/
  int v36; // [esp+28h] [ebp-14h]
  v36 = v5[1]; /*0x6eaac4*/
  TechnoClass *buildingType; // ecx
  buildingType = (TechnoClass *)v2->buildingType; /*0x6eaacc*/
  int v37; // [esp+2Ch] [ebp-10h]
  v37 = v5[2]; /*0x6eaacf*/
  int v34; // [esp+20h] [ebp-1Ch] BYREF
  if ( *TechnoClass::GetWaypointCoords(buildingType, &v34) != g_BuildingLoadQueue_Array.?[1] ) /*0x6eaae2*/
  {
    unsigned int *WaypointCoords; // eax
    WaypointCoords = TechnoClass::GetWaypointCoords((TechnoClass *)v2->buildingType, &v34); /*0x6eaaf9*/
    int v8; // ecx
    v8 = (*(__int16 *)WaypointCoords << 8) + 128; /*0x6eab0b*/
    int v9; // eax
    v9 = (*((__int16 *)WaypointCoords + 1) << 8) + 128; /*0x6eab11*/
    v35 = v8; /*0x6eab18*/
    v36 = v9; /*0x6eab1c*/
    v37 = 0; /*0x6eab20*/
  }
  TeamTypeClass *v10 = v2->buildingType; // ecx /*0x6eab24*/
  int v30; // [esp+18h] [ebp-24h]
  v30 = 0; /*0x6eab2b*/
  if ( *(unsigned int *)(*(unsigned int *)&v10[1].TeamTypeClass_field_70 + 8 * a2 + 164) <= v2->countObjects[a2] ) /*0x6eab45*/
    return v30; /*0x6eae19*/
  int Group; // [esp+14h] [ebp-28h]
  Group = TeamTypeClass::GetGroup(v10); /*0x6eab54*/
  int v11; // ecx
  v11 = *(unsigned int *)(*&v2->currentScript.firstUnit + 8 * a2 + 168); /*0x6eab61*/
  switch ( (*(int (**)(int))(*(unsigned int *)v11 + 44))(v11) ) /*0x6eab7f*/
  {
    int v23; // eax
    case 1: /*0x6eab7f*/
    case 40: /*0x6eab7f*/
      v23 = 0; /*0x6ead07*/
      int v33; // [esp+1Ch] [ebp-20h]
      v33 = -1; /*0x6ead0b*/
      v34 = 0; /*0x6ead13*/
      if ( FootClass_Array.?[2] > 0 ) /*0x6ead17*/
      {
      do /*0x6eadc8*/
      {
        int v24; // esi
        v24 = *(unsigned int *)(dword_8B410C+ 4 * v23); /*0x6ead23*/
        if ( Group == -2 || v24->controlGroup == Group || LOBYTE(v2->buildingType[1].TeamTypeClass_field_34) ) /*0x6ead3a*/
        {
          int v25; // eax
          v25 = Math::DistSq2D((Math *)v24, &v35); /*0x6ead4b*/
          int v26 = v25; // edi /*0x6ead54*/
          if ( v24->controlGroup != Group ) /*0x6ead5c*/
            v26 = v25 + 12800; /*0x6ead5e*/
          if ( v24->owner == this->owner /*0x6eada4*/
              && v24->u32_6C4 == *(unsigned int *)(*&this->currentScript.firstUnit
                + 8 * a2
              + 168)
              && (v26 < v33 || v33 == -1)
              && (unsigned __int8)TeamClass::ValidateMember(this, v24, &a2, 0) )
          {
            v3 = v24; /*0x6eadad*/
            v33 = v26; /*0x6eadaf*/
          }
          v2 = this; /*0x6eadb3*/
        }
        v23 = ++v34; /*0x6eadc1*/
      }
      while ( v34 < dword_8B4118 ); /*0x6eadc8*/
      if ( v3 ) /*0x6eadd0*/
      {
        (*(void (**)(int, unsigned int))(*(unsigned int *)v3 + 968))(v3, 0); /*0x6eadd8*/
        TeamClass::AddMember((int *)v2, v3, 0); /*0x6eade3*/
        v30 = 1; /*0x6eadee*/
        int DB; // esi
        DB = CCINIClass::GetDB(&v3->secondaryTurretIndex); /*0x6eadfb*/
        if ( DB ) /*0x6eadff*/
        {
          do /*0x6eae17*/
          {
            TeamClass::AddMember((int *)v2, DB, 0); /*0x6eae08*/
            DB = *(unsigned int *)(DB + 48); /*0x6eae0d*/
          }
          while ( DB && (*(unsigned char *)(DB + 20) & 4) != 0 ); /*0x6eae17*/
        }
      }
    }
      return v30; /*0x6eae17*/
      int v18; // ebp
    case 2: /*0x6eab7f*/
    case 3: /*0x6eab7f*/
      v18 = -1; /*0x6eac57*/
      int v19 = 0; // eax /*0x6eac5a*/
      int v32; // [esp+1Ch] [ebp-20h]
      v32 = 0; /*0x6eac5e*/
      if ( dword_A8E3A0 <= 0 ) /*0x6eac62*/
        return v30; /*0x6eac62*/
      do /*0x6eace6*/
      {
      Math *v20; // esi
      v20 = (Math *)*((unsigned int *)dword_A8E394 + v19); /*0x6eac6e*/
      if ( Group == -2 || v20[33].field_4 == (void *)Group || LOBYTE(v2->buildingType[1].TeamTypeClass_field_34) ) /*0x6eac85*/
      {
        int v21; // eax
        v21 = Math::DistSq2D(v20, &v35); /*0x6eac96*/
        int v22 = v21; // edi /*0x6eac9f*/
        if ( v20[33].field_4 != (void *)Group ) /*0x6eaca7*/
          v22 = v21 + 12800; /*0x6eaca9*/
        if ( (v22 < v18 || v18 == -1) && (unsigned __int8)TeamClass::ValidateMember(this, (int)v20, &a2, 0) ) /*0x6eacc4*/
        {
          v3 = (int)v20; /*0x6eaccd*/
          v18 = v22; /*0x6eaccf*/
        }
        v2 = this; /*0x6eacd1*/
      }
      v19 = ++v32; /*0x6eacdf*/
    }
      while ( v32 < dword_A8E3A0 ); /*0x6eace6*/
      if ( !v3 ) /*0x6eacea*/
        return v30; /*0x6eacea*/
      break; /*0x6eacea*/
      int v12; // ebp
    case 15: /*0x6eab7f*/
    case 16: /*0x6eab7f*/
      v12 = -1; /*0x6eab8c*/
      int v13 = 0; // eax /*0x6eab8f*/
      int v31; // [esp+1Ch] [ebp-20h]
      v31 = 0; /*0x6eab93*/
      if ( *(int *)&g_BuildingClass_Count <= 0 ) /*0x6eab97*/
        return v30; /*0x6eab97*/
      do /*0x6eac1b*/
      {
      Math *v14; // esi
      v14 = *(Math **)(*(unsigned int *)&g_InfantryClassLimit + 4 * v13); /*0x6eaba3*/
      if ( Group == -2 || v14[33].field_4 == (void *)Group || LOBYTE(v2->buildingType[1].TeamTypeClass_field_34) ) /*0x6eabba*/
      {
        int v15; // eax
        v15 = Math::DistSq2D(v14, &v35); /*0x6eabcb*/
        int v16 = v15; // edi /*0x6eabd4*/
        if ( v14[33].field_4 != (void *)Group ) /*0x6eabdc*/
          v16 = v15 + 12800; /*0x6eabde*/
        if ( (v16 < v12 || v12 == -1) && (unsigned __int8)TeamClass::ValidateMember(this, (int)v14, &a2, 0) ) /*0x6eabf9*/
        {
          v3 = (int)v14; /*0x6eac02*/
          v12 = v16; /*0x6eac04*/
        }
        v2 = this; /*0x6eac06*/
      }
      v13 = ++v31; /*0x6eac14*/
    }
      while ( v31 < *(int *)&g_BuildingClass_Count ); /*0x6eac1b*/
      if ( !v3 ) /*0x6eac1f*/
        return v30; /*0x6eac1f*/
      break; /*0x6eac1f*/
    default:
      return v30;
  }
  (*(void (**)(int, unsigned int))(*(unsigned int *)v3 + 968))(v3, 0); /*0x6eac2b*/
  TeamClass::AddMember((int *)v2, v3, 0); /*0x6eac36*/
  return 1; /*0x6eac3b*/

}
}
// 0x6EAEE0
namespace gamemd {
AbstractClass * * TeamClass::FindClosestEnemy(AbstractClass * aP1, AbstractClass * aP2)
{

  int v37; // [esp+38h] [ebp-2Ch]
  int v38; // [esp+3Ch] [ebp-28h]
  int v39; // [esp+40h] [ebp-24h] BYREF
  unsigned char v42[12]; // [esp+4Ch] [ebp-18h] BYREF
  unsigned int v43[3]; // [esp+58h] [ebp-Ch] BYREF

  int v3; // eax
  (v3) = ((v3) & ~0xFF) | (((unsigned char)aP2) & 0xFF); /*0x6eaee3*/
  int v4 = this; // esi /*0x6eaeea*/
  int v5 = 0; // ebx /*0x6eaeec*/
  *aP2 = 0; /*0x6eaef2*/
  *aP1 = 0; /*0x6eaef9*/
  int v6 = this->firstUnit; // edi /*0x6eaefb*/
  if ( v6 ) /*0x6eaf00*/
  {
    int v36; // [esp+34h] [ebp-30h] BYREF
    if ( *SessionClass::GetEntry(*&this->currentScript, &v36) == 10 ) /*0x6eaf16*/
    {
      char *v7 = 0; // ecx /*0x6eaf22*/
      int v8 = -1; // ebp /*0x6eaf24*/
      int v9 = 0; // eax /*0x6eaf27*/
      char *v34; // [esp+30h] [ebp-34h]
      v34 = 0; /*0x6eaf2b*/
      int v31; // [esp+2Ch] [ebp-38h]
      v31 = 0; /*0x6eaf2f*/
      if ( dword_8B4118 > 0 ) /*0x6eaf33*/
      {
        do /*0x6eb012*/
        {
          char *v10; // esi
          v10 = (char *)*((unsigned int *)dword_8B410C + v9); /*0x6eaf3f*/
          if ( v10 && v10[144] && *((unsigned int *)v10 + 27) && (dword_A8E7AC || !v10[129]) ) /*0x6eaf6c*/
          {
            if ( (unsigned __int8)HouseClass::IsAlliedWith(*((#375 **)v10 + 135), *(#375 **)(&this->owner)) ) /*0x6eaf88*/
            {
              if ( this != v10->u32_5D4 ) /*0x6eaf97*/
              {
                unsigned int *v11; // ebx
                v11 = (unsigned int *)(*(int (**)(char *, int *))(*(unsigned int *)v10 + 72))(v10, &v39); /*0x6eafa7*/
                unsigned int *v12; // eax
                v12 = (unsigned int *)(*(int (**)(int, unsigned char *))(*(unsigned int *)v6 + 72))(v6, v42); /*0x6eafb0*/
                int *v13; // eax
                v13 = Coord::Subtract(v43, *v12 - *v11, v12[1] - v11->ptr_4, v12[2] - v11->ptr_8); /*0x6eafd0*/
                v36 = *v13; /*0x6eafd7*/
                v37 = v13->u32_4; /*0x6eafe2*/
                v38 = v13->u32_8; /*0x6eafe9*/
                int v14; // eax
                v14 = Coord::Length(&v36); /*0x6eafed*/
                if ( v8 == -1 || v14 < v8 ) /*0x6eaff9*/
                {
                  v8 = v14; /*0x6eaffb*/
                  v34 = v10; /*0x6eaffd*/
                }
              }
            }
          }
          v9 = ++v31; /*0x6eb00b*/
        }
        while ( v31 < dword_8B4118 ); /*0x6eb012*/
        v4 = this; /*0x6eb018*/
        v7 = v34; /*0x6eb01c*/
      }
      v3 = 0; /*0x6eb026*/
      int v32; // [esp+2Ch] [ebp-38h]
      v32 = 0; /*0x6eb02a*/
      if ( dword_A83DF8 > 0 ) /*0x6eb02e*/
      {
        do /*0x6eb141*/
        {
          char *v15; // esi
          v15 = (char *)*((unsigned int *)dword_A83DEC + v3); /*0x6eb03a*/
          if ( v15 && v15[144] && *((unsigned int *)v15 + 27) && (dword_A8E7AC || !v15[129]) ) /*0x6eb067*/
          {
            if ( (unsigned __int8)HouseClass::IsAlliedWith(*((#375 **)v15 + 135), *(#375 **)(&this->owner)) ) /*0x6eb083*/
            {
              if ( this != v15->u32_5D4 ) /*0x6eb096*/
              {
                unsigned int *v16; // ebx
                v16 = (unsigned int *)(*(int (**)(char *, unsigned int *))(*(unsigned int *)v15 + 72))(v15, v43); /*0x6eb0aa*/
                unsigned int *v17; // eax
                v17 = (unsigned int *)(*(int (**)(int, unsigned char *))(*(unsigned int *)v6 + 72))(v6, v42); /*0x6eb0b3*/
                int *v18; // eax
                v18 = Coord::Subtract(&v39, *v17 - *v16, v17[1] - v16[1], v17[2] - v16[2]); /*0x6eb0d3*/
                v36 = *v18; /*0x6eb0dd*/
                v37 = v18->u32_4; /*0x6eb0e4*/
                v38 = v18->u32_8; /*0x6eb0ef*/
                double v19; // st7
                v19 = Math::Sqrt((double)v36 * (double)v36 + (double)v38 * (double)v38 + (double)v37 * (double)v37); /*0x6eb114*/
                int v20; // eax
                v20 = Math::RoundToInt(v19); /*0x6eb11c*/
                if ( v8 == -1 || v20 < v8 ) /*0x6eb128*/
                {
                  v8 = v20; /*0x6eb12a*/
                  v34 = v15; /*0x6eb12c*/
                }
              }
            }
          }
          v3 = ++v32; /*0x6eb13a*/
        }
        while ( v32 < dword_A83DF8 ); /*0x6eb141*/
        v4 = this; /*0x6eb147*/
        v7 = v34; /*0x6eb14b*/
      }
      if ( v7 ) /*0x6eb151*/
      {
        char v21; // al
        v21 = v7[1668]; /*0x6eb157*/
        if ( v21 < 0 ) /*0x6eb15f*/
        {
          *aP1 = v7; /*0x6eb1a1*/
        }
        else
        {
          v36 = *(unsigned int *)(*((unsigned int *)dword_8B413C + v21) + 40); /*0x6eb175*/
          *aP1 = CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v36); /*0x6eb188*/
        }
        v3 = v4->firstUnit; /*0x6eb18a*/
        *aP2 = v3; /*0x6eb194*/
      }
    }
    else
    {
      int v22 = 0; // ebp /*0x6eb1b5*/
      void *v23 = 0; // esi /*0x6eb1b7*/
      int v33; // [esp+2Ch] [ebp-38h]
      v33 = 0; /*0x6eb1bb*/
      v36 = 0; /*0x6eb1bf*/
      void *v35; // [esp+30h] [ebp-34h]
      v35 = 0; /*0x6eb1c3*/
      do /*0x6eb301*/
      {
        LOBYTE(v3) = v6->isAliveFlag; /*0x6eb1cd*/
        if ( (unsigned char)v3 ) /*0x6eb1d5*/
        {
          v3 = v6->health; /*0x6eb1db*/
          if ( v3 ) /*0x6eb1e0*/
          {
            if ( dword_A8E7AC || (LOBYTE(v3) = v6->inLimbo, !(unsigned char)v3) ) /*0x6eb1f7*/
            {
              if ( v6->isTeamLeader || (v3 = (*(int (**)(int))(*(unsigned int *)v6 + 44))(v6), v3 == 2) ) /*0x6eb211*/
              {
                LOBYTE(v3) = v6->isInPlayfield_d; /*0x6eb217*/
                if ( (unsigned char)v3 ) /*0x6eb21f*/
                {
                  int *v24 = &v6->location; // esi /*0x6eb225*/
                  v5 += v6->location; /*0x6eb22f*/
                  int v40; // [esp+44h] [ebp-20h]
                  v40 = *(unsigned int *)(v6 + 160); /*0x6eb234*/
                  int v25; // eax
                  v25 = *(unsigned int *)(v6 + 156); /*0x6eb23d*/
                  int v41; // [esp+48h] [ebp-1Ch]
                  v41 = *(unsigned int *)(v6 + 164); /*0x6eb23f*/
                  v39 = v25; /*0x6eb243*/
                  int v26; // eax
                  v26 = *(unsigned int *)(v6 + 160); /*0x6eb247*/
                  v41 = *(unsigned int *)(v6 + 164); /*0x6eb251*/
                  v33 += v26; /*0x6eb25e*/
                  ++v22; /*0x6eb262*/
                  if ( *(unsigned char *)&this->buildingType->u8_A7 /*0x6eb271*/
                    && (*(unsigned __int8 (**)(int))(*&v6->q1380))(v6) )
                  {
                    v5 += *v24; /*0x6eb27f*/
                    v40 = *&v6->locationY; /*0x6eb287*/
                    int v27; // ecx
                    v27 = *(unsigned int *)(v6 + 164); /*0x6eb28d*/
                    v39 = *v24; /*0x6eb290*/
                    v41 = v27; /*0x6eb294*/
                    v41 = *(unsigned int *)(v6 + 164); /*0x6eb29b*/
                    ++v22; /*0x6eb2a5*/
                    v33 += v40; /*0x6eb2a6*/
                  }
                  if ( *(int *)((*(int (**)(int))(*(unsigned int *)v6 + 132))(v6) + 1504) <= 0 /*0x6eb2c8*/
                    || (v3 = (*(int (**)(int))(*&v6->currentBarrelIndex))(v6), !v3->u8_CCE) )
                  {
                    v3 = BuildingClass::SquaredDistanceTo(this->focus); /*0x6eb2dc*/
                    if ( !v36 || v3 < v36 ) /*0x6eb2eb*/
                    {
                      v36 = v3; /*0x6eb2ed*/
                      v35 = (void *)v6; /*0x6eb2f1*/
                    }
                  }
                  v23 = v35; /*0x6eb2f5*/
                }
              }
            }
          }
        }
        v6 = v6->FootClass_field_5D8; /*0x6eb2f9*/
      }
      while ( v6 ); /*0x6eb301*/
      if ( v22 ) /*0x6eb309*/
      {
        v36 = v5 / v22; /*0x6eb31b*/
        v38 = 0; /*0x6eb324*/
        v37 = v33 / v22; /*0x6eb328*/
        void *v28; // eax
        v28 = Coord::To_Cell(&dword_87F7E8, &v36); /*0x6eb331*/
        *aP1 = v28; /*0x6eb33c*/
        if ( !v23 ) /*0x6eb33e*/
          v23 = *&this->firstUnit; /*0x6eb34b*/
        v3 = (*(int (**)(void *, void *, int, int, unsigned int, int))(*(unsigned int *)v23 + 428))( /*0x6eb35a*/
               v23,
               v28,
               -1,
               -1,
               0,
               1);
        if ( v3 ) /*0x6eb362*/
          *aP1 = v23; /*0x6eb364*/
      }
      if ( v23 ) /*0x6eb368*/
      {
        *aP2 = (int)v23; /*0x6eb36e*/
        (v3) = ((v3) & ~0xFF) | (((unsigned char)aP2) & 0xFF); /*0x6eb36a*/
      }
    }
  }
  return v3; /*0x6eb187*/

}
}
// 0x6EB490
namespace gamemd {
void* TeamClass::AttackCoordinator()
{

  TeamClass *v1; // edi
  unsigned int *firstUnit; // esi
  int v3; // ebp
  unsigned int *v4; // ebx
  int v5; // edi
  int focus; // ecx
  int v7; // edi
  Object *v8; // esi
  int v9; // esi
  int v10; // eax
  unsigned int *Entry; // eax
  int v12; // esi
  char v13; // bl
  int v14; // eax
  int v15; // edi
  int v16; // eax
  int v19; // [esp+14h] [ebp-10h] BYREF
  int v20; // [esp+18h] [ebp-Ch]
  unsigned int v21[2]; // [esp+1Ch] [ebp-8h] BYREF

  v1 = this;
  if ( !this->focus )
    this->focus = this->queuedFocus;
  firstUnit = (unsigned int *)this->firstUnit;
  v3 = -1;
  v4 = firstUnit;
  if ( firstUnit )
  {
    do
    {
      v5 = *(unsigned int *)((*(int (**)(unsigned int *))(*firstUnit + 132))(firstUnit) + 1532);
      if ( *((unsigned char *)firstUnit + 144)
        && firstUnit[27]
        && (dword_A8E7AC || !*((unsigned char *)firstUnit + 129))
        && (*((unsigned char *)firstUnit + 1673) || (*(int (**)(unsigned int *))(*firstUnit + 44))(firstUnit) == 2)
        && v5 > v3 )
      {
        v4 = firstUnit;
        v3 = v5;
      }
      firstUnit = (unsigned int *)firstUnit[374];
    }
    while ( firstUnit );
    v1 = this;
  }
  focus = v1->focus;
  if ( focus
    && (*(int (**)(int))(*(unsigned int *)focus + 44))(focus) == 11
    && v1->firstUnit
    && (*(int (**)(unsigned int *))(*v4 + 44))(v4) != 2 )
  {
    v7 = v1->focus;
    if ( v7 )
      v8 = (*(int (**)(int))(*(unsigned int *)v7 + 44))(v7) == 11 ? (Object *)v7 : 0;
    else
      v8 = 0;
    v19 = 0;
    v20 = 0;
    if ( Object::FindObjectCell(v8, &v19, 0) )
    {
      v19 = 0;
      v20 = 0;
      this->focus = Object::FindObjectCell(v8, &v19, 0);
    }
    v1 = this;
  }
  if ( *(unsigned int *)&stru_A8E960.random[528] % 8 == 4 )
  {
    v9 = *v4;
    v10 = (*(int (**)(unsigned int *, int, int))(*v4 + 740))(v4, v1->focus, 1);
    if ( (*(int (**)(unsigned int *, int, int))(v9 + 960))(v4, v1->focus, v10) == 5 )
      v1->unknown81[0] = 1;
  }
  Entry = (unsigned int *)v1->focus;
  if ( !Entry
    || (Entry = SessionClass::GetEntry((SessionClass *)v1->currentScript, v21),
        v12 = v1->firstUnit,
        v13 = 0,
        v19 = *Entry,
        v20 = Entry[1],
        !v12) )
  {
LABEL_72:
    v1->stepCompleted[0] = 1;
    return (char)Entry;
  }
  do
  {
    if ( !*(unsigned char *)(v12 + 144) )
      goto LABEL_67;
    if ( *(unsigned int *)(v12 + 108) && (dword_A8E7AC || !*(unsigned char *)(v12 + 129)) && !*(unsigned char *)(v12 + 1673) )
    {
      v14 = *SessionClass::GetEntry((SessionClass *)v1->currentScript, v21);
      if ( v14 == 54 || v14 == 53 )
        v15 = dword_8871E0->C4Delay[1];
      else
        v15 = dword_8871E0->C4Delay[0];
      if ( ObjectClass::DistanceTo((ObjectClass *)v12, this->spawnCell) <= v15 )
      {
        *(unsigned char *)(v12 + 1673) = 1;
      }
      else if ( !*(unsigned int *)(v12 + 1444) )
      {
        (*(void (**)(int, int, unsigned int))(*(unsigned int *)v12 + 488))(v12, 2, 0);
        (*(void (**)(int, unsigned int))(*(unsigned int *)v12 + 968))(v12, 0);
        (*(void (**)(int, int, int))(*(unsigned int *)v12 + 1152))(v12, this->spawnCell, 1);
      }
      v1 = this;
    }
    if ( *(unsigned char *)(v12 + 144)
      && *(unsigned int *)(v12 + 108)
      && (dword_A8E7AC || !*(unsigned char *)(v12 + 129))
      && (*(unsigned char *)(v12 + 1673) || (*(int (**)(int))(*(unsigned int *)v12 + 44))(v12) == 2) )
    {
      if ( v19 == 15
        && (*(int (**)(int))(*(unsigned int *)v12 + 44))(v12) == 15
        && *(unsigned char *)(*(unsigned int *)(v12 + 1728) + 3774) )
      {
        (*(void (**)(int, int, unsigned int))(*(unsigned int *)v12 + 488))(v12, 8, 0);
        (*(void (**)(int, int))(*(unsigned int *)v12 + 968))(v12, v1->focus);
      }
      else if ( (*(int (**)(int))(*(unsigned int *)v12 + 388))(v12) != 1
             && (*(int (**)(int))(*(unsigned int *)v12 + 388))(v12) != 7
             && (*(int (**)(int))(*(unsigned int *)v12 + 388))(v12) != 8
             && (*(int (**)(int))(*(unsigned int *)v12 + 388))(v12) != 17
             && ((*(int (**)(int))(*(unsigned int *)v12 + 388))(v12) != 16
              || !(*(unsigned __int8 (**)(int))(*(unsigned int *)v12 + 1252))(v12)) )
      {
        (*(void (**)(int, int))(*(unsigned int *)v12 + 628))(v12, 3);
        (*(void (**)(int, int, unsigned int))(*(unsigned int *)v12 + 488))(v12, 1, 0);
        (*(void (**)(int, unsigned int))(*(unsigned int *)v12 + 968))(v12, 0);
        (*(void (**)(int, unsigned int, int))(*(unsigned int *)v12 + 1152))(v12, 0, 1);
      }
      v16 = *(unsigned int *)(v12 + 692);
      if ( v16 != v1->focus && !v16 )
        (*(void (**)(int, int))(*(unsigned int *)v12 + 968))(v12, v1->focus);
      Entry = (unsigned int *)(*(int (**)(int))(*(unsigned int *)v12 + 44))(v12);
      if ( Entry != (unsigned int *)2
        || (Entry = (unsigned int *)(*(int (**)(int, unsigned int))(*(unsigned int *)v12 + 1016))(v12, 0), !*Entry)
        || (Entry = *(unsigned int **)(v12 + 764), (int)Entry > 0) )
      {
LABEL_69:
        v13 = 1;
      }
    }
    else
    {
LABEL_67:
      Entry = (unsigned int *)v1->buildingType;
      if ( *((unsigned char *)Entry + 176) )
      {
        LOBYTE(Entry) = *(unsigned char *)(v12 + 129);
        if ( (unsigned char)Entry )
          goto LABEL_69;
      }
    }
    v12 = *(unsigned int *)(v12 + 1496);
  }
  while ( v12 );
  if ( !v13 )
    goto LABEL_72;
  return (char)Entry;

}
}
// 0x6EBAD0
namespace gamemd {
AbstractClass * * TeamClass::UpdateMembers()
{

  FootClass *firstUnit; // esi
  AbstractClass *queuedFocus; // eax
  int v4; // eax
  int v5; // edi
  int v6; // eax
  unsigned int *v7; // eax
  AbstractClass *movementDestination; // edi
  bool v9; // bl
  bool v10; // al
  char v11; // [esp+30h] [ebp-36h]
  char v12; // [esp+31h] [ebp-35h]
  int v13; // [esp+32h] [ebp-34h]
  int v14; // [esp+36h] [ebp-30h]
  int v15; // [esp+3Ah] [ebp-2Ch] BYREF
  int v16; // [esp+42h] [ebp-24h] BYREF
  unsigned int v17[2]; // [esp+4Ah] [ebp-1Ch] BYREF
  unsigned int v18[2]; // [esp+52h] [ebp-14h] BYREF
  unsigned char v19[12]; // [esp+5Ah] [ebp-Ch] BYREF

  v11 = 1; /*0x6ebad7*/
  firstUnit = this->firstUnit; /*0x6ebadc*/
  v12 = 0; /*0x6ebadf*/
  if ( firstUnit ) /*0x6ebae6*/
  {
    if ( this->focus || (queuedFocus = this->queuedFocus, (this->focus = queuedFocus) != 0) ) /*0x6ebafb*/
    {
      if ( !TeamClass::ProcessMemberPositions(this) ) /*0x6ebb03*/
      {
        while ( 1 ) /*0x6ebb1a*/
        {
          if ( firstUnit->location && firstUnit->location && (dword_A8E7AC || !firstUnit->location) && !firstUnit->isTeamLeader ) /*0x6ebb4a*/
          {
            v4 = *SessionClass::GetEntry((SessionClass *)this->currentScript, &v15); /*0x6ebb61*/
            if ( v4 == 54 || v4 == 53 ) /*0x6ebb6b*/
              v5 = *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 5920); /*0x6ebb80*/
            else
              v5 = *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 5916); /*0x6ebb73*/
            if ( ObjectClass::DistanceTo((ObjectClass *)firstUnit, (int)this->spawnCell->mapCoords) <= v5 ) /*0x6ebb93*/
            {
              firstUnit->isTeamLeader = 1; /*0x6ebc8d*/
            }
            else
            {
              if ( !firstUnit->movementDestination ) /*0x6ebb99*/
              {
                (*((void (**)(FootClass *, int, unsigned int))firstUnit->TechnoClass + 122))(firstUnit, 2, 0); /*0x6ebbab*/
                (*((void (**)(FootClass *, unsigned int))firstUnit->TechnoClass + 242))(firstUnit, 0); /*0x6ebbb7*/
                (*((void (**)(FootClass *, CellClass *, int))firstUnit->TechnoClass + 288))( /*0x6ebbc7*/
                  firstUnit,
                  this->spawnCell,
                  1);
              }
              v11 = 0; /*0x6ebbcd*/
            }
          }
          if ( (*((int (**)(FootClass *))firstUnit->TechnoClass + 97))(firstUnit) == 16 || firstUnit->location == 16 ) /*0x6ebbeb*/
            v11 = 0; /*0x6ebbed*/
          if ( !firstUnit->location /*0x6ebc5c*/
            || !firstUnit->?
            || !dword_A8E7AC && firstUnit->?
            || !firstUnit->isTeamLeader
            && (*((int (**)(FootClass *))firstUnit->TechnoClass + 11))(firstUnit) != 2
            || (*((int (**)(FootClass *))firstUnit->TechnoClass + 97))(firstUnit) == 16
            || firstUnit->? == 16 )
          {
            goto LABEL_80; /*0x6ebc5c*/
          }
          v6 = *SessionClass::GetEntry((SessionClass *)this->currentScript, &v16); /*0x6ebc6f*/
          if ( v6 == 54 || v6 == 53 ) /*0x6ebc79*/
            v13 = *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 5920); /*0x6ebca4*/
          else
            v13 = *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 5916); /*0x6ebc87*/
          if ( (*((unsigned __int8 (**)(FootClass *))firstUnit->TechnoClass + 21))(firstUnit) ) /*0x6ebcac*/
            v13 *= 2; /*0x6ebcba*/
          v12 = 1; /*0x6ebcc4*/
          v14 = ObjectClass::DistanceTo((ObjectClass *)firstUnit, (int)this->focus); /*0x6ebcd2*/
          if ( v14 <= v13 /*0x6ebcfc*/
            && ((*((int (**)(FootClass *))firstUnit->TechnoClass + 114))(firstUnit) >= 0
             || *ScriptClass::GetNextAction(this->currentScript, v17) == 3) )
          {
            if ( (*((int (**)(FootClass *))firstUnit->TechnoClass + 11))(firstUnit) != 2 ) /*0x6ebd0c*/
              break; /*0x6ebd0c*/
            if ( (*((int (**)(FootClass *))firstUnit->TechnoClass + 116))(firstUnit) <= 0 ) /*0x6ebd1a*/
              break; /*0x6ebd1a*/
            v7 = (unsigned int *)(*((int (**)(FootClass *, unsigned char *))firstUnit->TechnoClass + 18))(firstUnit, v19); /*0x6ebd25*/
            if ( Coord::To_Cell((Coord *)&DataGlobal_87F7E8, v7) == (CellClass *)this->focus /*0x6ebd48*/
              || *ScriptClass::GetNextAction(this->currentScript, v18) == 3 )
            {
              break; /*0x6ebd48*/
            }
          }
          if ( !BYTE1(this->buildingType[1].TeamTypeClass_field_38) || !firstUnit->AbstractClass_2B4 ) /*0x6ebde9*/
            goto LABEL_55; /*0x6ebdf1*/
          if ( firstUnit->FootClass_field_bool_68E ) /*0x6ebdf3*/
          {
            (*((void (**)(FootClass *, unsigned int))firstUnit->TechnoClass + 242))(firstUnit, 0); /*0x6ebe07*/
            LABEL_55:
            if ( (*((int (**)(FootClass *))firstUnit->TechnoClass + 97))(firstUnit) != 2 ) /*0x6ebe1a*/
            {
              (*((void (**)(FootClass *, int, unsigned int))firstUnit->TechnoClass + 122))(firstUnit, 2, 0); /*0x6ebe24*/
              if ( (*((unsigned __int8 (**)(FootClass *))firstUnit->TechnoClass + 128))(firstUnit) ) /*0x6ebe2e*/
                (*((void (**)(FootClass *))firstUnit->TechnoClass + 123))(firstUnit); /*0x6ebe3c*/
            }
            if ( !firstUnit->movementDestination ) /*0x6ebe42*/
              (*((void (**)(FootClass *, AbstractClass *, int))firstUnit->TechnoClass + 288))( /*0x6ebe56*/
                firstUnit,
                this->focus,
                1);
            movementDestination = firstUnit->movementDestination; /*0x6ebe5c*/
            if ( movementDestination != this->focus /*0x6ebe9a*/
              && (*(unsigned char *)((*((int (**)(FootClass *))firstUnit->TechnoClass + 33))(firstUnit) + 3434)
               || movementDestination != this->focus
               && (*((int (**)(FootClass *))firstUnit->TechnoClass + 11))(firstUnit) == 2
               && movementDestination == (AbstractClass *)(*((int (**)(FootClass *))firstUnit->TechnoClass
                    + 111))(firstUnit)) )
            {
              (*((void (**)(FootClass *, AbstractClass *, int))firstUnit->TechnoClass + 288))( /*0x6ebea6*/
                firstUnit,
                this->focus,
                1);
            }
            v11 = 0; /*0x6ebeac*/
            LABEL_67:
            v9 = (*((int (**)(FootClass *))firstUnit->TechnoClass + 11))(firstUnit) == 2 /*0x6ebecf*/
            && firstUnit->movementDestination == (AbstractClass *)(*((int (**)(FootClass *))firstUnit->TechnoClass
                  + 111))(firstUnit);
            v10 = (firstUnit->location & 1) != 0 /*0x6ebefb*/
            && *(unsigned char *)((*((int (**)(FootClass *))firstUnit->TechnoClass + 33))(firstUnit) + 3434)
            && v14 < v13;
            if ( firstUnit->movementDestination && !v9 && !v10 ) /*0x6ebf11*/
              v11 = 0; /*0x6ebf13*/
          }
          LABEL_80:
          firstUnit = firstUnit->nextTeamMember; /*0x6ebf17*/
          if ( !firstUnit ) /*0x6ebf1f*/
          {
            if ( v12 && v11 ) /*0x6ebf35*/
            {
              if ( this->TeamClass_field_7F[0] ) /*0x6ebf37*/
                this->stepCompleted[0] = 1; /*0x6ebf3e*/
            }
            return; /*0x6ebf3e*/
          }
        }
        if ( (*((int (**)(FootClass *))firstUnit->TechnoClass + 97))(firstUnit) == 2 ) /*0x6ebd5b*/
        {
          if ( !firstUnit->movementDestination ) /*0x6ebd61*/
            goto LABEL_87; /*0x6ebd61*/
          if ( ObjectClass::DistanceTo((ObjectClass *)firstUnit, (int)firstUnit->movementDestination) <= *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 5912) ) /*0x6ebd7f*/
          {
            if ( !firstUnit->locomotor[0] ) /*0x6ebd85*/
              sub_7DC720(-2147467261); /*0x6ebd94*/
            if ( !(*(unsigned __int8 (**)(int))(*(unsigned int *)firstUnit->locomotor[0] + 16))(firstUnit->locomotor[0]) ) /*0x6ebda2*/
            {
              LABEL_87:
              if ( !firstUnit->AbstractClass_2B4 ) /*0x6ebdad*/
              {
                (*((void (**)(FootClass *, unsigned int, int))firstUnit->TechnoClass + 288))(firstUnit, 0, 1); /*0x6ebdc3*/
                (*((void (**)(FootClass *, unsigned int, int))firstUnit->TechnoClass + 289))(firstUnit, 0, 1); /*0x6ebdd1*/
              }
            }
          }
        }
        goto LABEL_67; /*0x6ebdd7*/
      }
    }
  }

}
}
// 0x6EBF50
namespace gamemd {
int TeamClass::ProcessMemberPositions()
{


  char result = 0; // al /*0x6ebf5d*/
  FootClass *firstUnit; // esi
  firstUnit = this->firstUnit; /*0x6ebf63*/
  char v14; // [esp+23h] [ebp-2Dh]
  v14 = 0; /*0x6ebf69*/
  if ( this->visibilityFlags ) /*0x6ebf5f*/
  {
    if ( firstUnit ) /*0x6ebf79*/
    {
      do /*0x6ec10e*/
      {
        if ( firstUnit->location /*0x6ebfc3*/
          && firstUnit->?
          && (dword_A8E7AC || !firstUnit->?)
          && (firstUnit->isTeamLeader
           || (*((int (**)(FootClass *))firstUnit->TechnoClass + 11))(firstUnit) == 2) )
        {
          int v5; // eax
          unsigned int v15[3]; // [esp+24h] [ebp-2Ch] BYREF
          v5 = *SessionClass::GetEntry((SessionClass *)this->currentScript, v15); /*0x6ebfd6*/
          int v6; // ebp
          if ( v5 == 54 || v5 == 53 ) /*0x6ebfe0*/
            v6 = *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 5920); /*0x6ebff5*/
          else
            v6 = *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 5916); /*0x6ebfe8*/
          if ( (*((int (**)(FootClass *))firstUnit->TechnoClass + 11))(firstUnit) == 2 ) /*0x6ec005*/
            v6 *= 3; /*0x6ec007*/
          if ( HIBYTE(this->buildingType[1].TeamTypeClass_field_30) /*0x6ec01c*/
            && !(*((unsigned __int8 (**)(FootClass *))firstUnit->TechnoClass + 312))(firstUnit) )
          {
            v6 /= 3; /*0x6ec034*/
          }
          unsigned int *v7; // edi
          unsigned char v18[12]; // [esp+38h] [ebp-18h] BYREF
          v7 = (unsigned int *)(*(int (**)(int, unsigned char *))(*(unsigned int *)this->unknown38 + 72))(this->unknown38, v18); /*0x6ec045*/
          unsigned int *v8; // eax
          unsigned char v19[12]; // [esp+44h] [ebp-Ch] BYREF
          v8 = (unsigned int *)(*((int (**)(FootClass *, unsigned char *))firstUnit->TechnoClass + 18))(firstUnit, v19); /*0x6ec04e*/
          int v9 = *v8 - *v7; // ecx /*0x6ec055*/
          int v10; // edx
          v10 = v8[1]; /*0x6ec057*/
          int v11; // eax
          v11 = v8[2]; /*0x6ec05a*/
          v15[2] = v9; /*0x6ec05d*/
          int v12; // eax
          v12 = v11 - v7[2]; /*0x6ec06c*/
          int v16; // [esp+30h] [ebp-20h]
          v16 = v10 - v7[1]; /*0x6ec06e*/
          int v17; // [esp+34h] [ebp-1Ch]
          v17 = v12; /*0x6ec072*/
          Math::Sqrt((double)v9 * (double)v9 + (double)v16 * (double)v16 + (double)v12 * (double)v12); /*0x6ec09b*/
          double v1; // st7
          int v13; // eax
          (v13) = ((v13) & ~0xFFFF) | ((Math::RoundToInt(v1)) & 0xFFFF); /*0x6ec0a3*/
          if ( v13 <= v6 ) /*0x6ec0aa*/
          {
            if ( (*((int (**)(FootClass *))firstUnit->TechnoClass + 97))(firstUnit) != 5 ) /*0x6ec0e8*/
            {
              (*((void (**)(FootClass *, int, unsigned int))firstUnit->TechnoClass + 122))(firstUnit, 5, 0); /*0x6ec0f2*/
              (*((void (**)(FootClass *, unsigned int, int))firstUnit->TechnoClass + 288))(firstUnit, 0, 1); /*0x6ec100*/
            }
          }
          else
          {
            if ( !firstUnit->movementDestination ) /*0x6ec0ac*/
            {
              (*((void (**)(FootClass *, int, unsigned int))firstUnit->TechnoClass + 122))(firstUnit, 2, 0); /*0x6ec0be*/
              (*((void (**)(FootClass *, int, int))firstUnit->TechnoClass + 288))( /*0x6ec0ce*/
                firstUnit,
                this->unknown38,
                1);
            }
            v14 = 1; /*0x6ec0d4*/
          }
        }
        firstUnit = firstUnit->nextTeamMember; /*0x6ec106*/
      }
      while ( firstUnit ); /*0x6ec10e*/
      result = v14; /*0x6ec114*/
    }
    this->visibilityFlags = result; /*0x6ec119*/
  }
  return result; /*0x6ebf6f*/

}
}
// 0x6EC5A0
namespace gamemd {
int TeamClass::PowerDrainUpdate(int * a2)
{


  AbstractClass::ProcessPower((AbstractClass *)this); /*0x6ec5a9*/
  int v3; // eax
  v3 = (*((int (**)(void **))this->buildingType->? + 4))(&*(_DWORD *)(this->buildingType + 4)); /*0x6ec5b7*/
  Power::TimerProcess(v3); /*0x6ec5bd*/
  int v4; // eax
  v4 = (*((int (**)(void **))this->owner->? + 4))(&*(_DWORD *)(this->owner + 4)); /*0x6ec5cb*/
  Power::TimerProcess(v4); /*0x6ec5d1*/
  int unknown38; // eax
  unknown38 = this->unknown38; /*0x6ec5d6*/
  if ( unknown38 ) /*0x6ec5db*/
  {
    int v6; // eax
    v6 = (*(int (**)(int))(*(unsigned int *)(unknown38 + 4) + 16))(unknown38 + 4); /*0x6ec5e4*/
    Power::TimerProcess(v6); /*0x6ec5ea*/
  }
  Power::TimerProcess(this->totalObjects); /*0x6ec5f5*/
  Power::TimerProcess(this->totalThreatValue); /*0x6ec600*/
  FootClass *firstUnit; // eax
  firstUnit = this->firstUnit; /*0x6ec605*/
  if ( firstUnit ) /*0x6ec60a*/
  {
    int v8; // eax
    v8 = (*((int (**)(void **))firstUnit->location + 4))(&firstUnit->location); /*0x6ec613*/
    Power::TimerProcess(v8); /*0x6ec619*/
  }
  int v9; // edx
  v9 = this->guardAreaTimer[0]; /*0x6ec61e*/
  int v10; // eax
  v10 = this->guardAreaTimer[2]; /*0x6ec621*/
  if ( v9 != -1 ) /*0x6ec627*/
  {
    if ( *(unsigned int *)&DataGlobal_A8EB00[644] - v9 >= v10 ) /*0x6ec633*/
      v10 = 0; /*0x6ec639*/
    else
      v10 -= *(unsigned int *)&DataGlobal_A8EB00[644] - v9; /*0x6ec635*/
  }
  Power::TimerProcess(v10); /*0x6ec63e*/
  int v11; // edx
  v11 = this->suspendTimer[0]; /*0x6ec643*/
  int v12; // eax
  v12 = this->suspendTimer[2]; /*0x6ec646*/
  if ( v11 != -1 ) /*0x6ec64c*/
  {
    if ( *(unsigned int *)&DataGlobal_A8EB00[644] - v11 >= v12 ) /*0x6ec658*/
      v12 = 0; /*0x6ec65e*/
    else
      v12 -= *(unsigned int *)&DataGlobal_A8EB00[644] - v11; /*0x6ec65a*/
  }
  Power::TimerProcess(v12); /*0x6ec663*/
  TagClass *tag; // eax
  tag = this->tag; /*0x6ec668*/
  if ( tag ) /*0x6ec66d*/
  {
    int v14; // eax
    v14 = (*((int (**)(void **))tag->Coord_9C + 4))(&tag->Coord_9C); /*0x6ec676*/
    tag = (TagClass *)Power::TimerProcess(v14); /*0x6ec67c*/
  }
  LOBYTE(tag) = this->unknown77; /*0x6ec681*/
  Power::FlagProcess((Power *)a2, (int)tag); /*0x6ec687*/
  int v15; // ecx
  LOBYTE(v15) = this->spawnStatus; /*0x6ec68c*/
  Power::FlagProcess((Power *)a2, v15); /*0x6ec692*/
  int v16; // edx
  LOBYTE(v16) = this->unknown79; /*0x6ec697*/
  int v17; // eax
  v17 = Power::FlagProcess((Power *)a2, v16); /*0x6ec69d*/
  LOBYTE(v17) = this->TeamClass_field_7A; /*0x6ec6a2*/
  Power::FlagProcess((Power *)a2, v17); /*0x6ec6a8*/
  int v18; // ecx
  LOBYTE(v18) = this->TeamClass_field_7B; /*0x6ec6ad*/
  Power::FlagProcess((Power *)a2, v18); /*0x6ec6b3*/
  int v19; // edx
  LOBYTE(v19) = this->visibilityFlags; /*0x6ec6b8*/
  int v20; // eax
  v20 = Power::FlagProcess((Power *)a2, v19); /*0x6ec6be*/
  LOBYTE(v20) = this->needsToDisappear; /*0x6ec6c3*/
  Power::FlagProcess((Power *)a2, v20); /*0x6ec6c9*/
  int v21; // ecx
  LOBYTE(v21) = this->TeamClass_field_7E; /*0x6ec6ce*/
  Power::FlagProcess((Power *)a2, v21); /*0x6ec6d4*/
  int v22; // edx
  LOBYTE(v22) = this->TeamClass_field_7F[0]; /*0x6ec6d9*/
  int v23; // eax
  v23 = Power::FlagProcess((Power *)a2, v22); /*0x6ec6df*/
  LOBYTE(v23) = this->stepCompleted[0]; /*0x6ec6e4*/
  Power::FlagProcess((Power *)a2, v23); /*0x6ec6ed*/
  int v24; // ecx
  LOBYTE(v24) = this->unknown82; /*0x6ec6f2*/
  Power::FlagProcess((Power *)a2, v24); /*0x6ec6fb*/
  int v25; // edx
  LOBYTE(v25) = this->isSuspended; /*0x6ec700*/
  Power::FlagProcess((Power *)a2, v25); /*0x6ec709*/
  return Checksummer::Add_Buffer((Checksummer *)a2, (unsigned __int8 *)this->countObjects[0], 24); /*0x6ec71e*/

}
}
// 0x6EC7D0
namespace gamemd {
void TeamClass::MoveTeamToWaypoint(ScriptClass * aP1, TeamClass * aP2)
{
  int (**v13)(FootClass *); // eax
  int v14; // eax
  void *v15; // [esp+Ch] [ebp-10h]
  unsigned int v16[2]; // [esp+14h] [ebp-8h] BYREF

  TeamClass *v3 = this; // ebp /*0x6ec7d8*/
  v16[0] = this; /*0x6ec7dc*/
  if ( (unsigned char)aP2 ) /*0x6ec7e0*/
  {
    FootClass *firstUnit; // esi
    firstUnit = this->firstUnit; /*0x6ec7e8*/
    int v5 = -1; // ebx /*0x6ec7eb*/
    FootClass *v6 = firstUnit; // edi /*0x6ec7ef*/
    if ( firstUnit ) /*0x6ec7f3*/
    {
      do /*0x6ec853*/
      {
        int v7; // ebp
        v7 = *(unsigned int *)((*((int (**)(FootClass *))firstUnit->ptr_0 + 33))(firstUnit) + 1532); /*0x6ec7ff*/
        if ( firstUnit->isAliveFlag /*0x6ec845*/
          && firstUnit->health
          && (dword_A8E7AC || !firstUnit->inLimbo)
          && (firstUnit->isTeamLeader || (*((int (**)(FootClass *))firstUnit->ptr_0 + 11))(firstUnit) == 2)
          && v7 > v5 )
        {
          v6 = firstUnit; /*0x6ec847*/
          v5 = v7; /*0x6ec849*/
        }
        firstUnit = firstUnit->nextTeamMember; /*0x6ec84b*/
      }
      while ( firstUnit ); /*0x6ec853*/
      v3 = (TeamClass *)v16[0]; /*0x6ec855*/
    }
    aP2 = *((ScenarioClass *)((char *)dword_A8B230))->Get_Waypoint_Location(&aP1, aP1->ptr_4); /*0x6ec87d*/
    void *v8; // eax
    v8 = ((CellCoord *)((CellCoord *)&DataGlobal_87F7E8))->To_CellObj((int16_t *)&aP2); /*0x6ec881*/
    TeamClass::SelectMember((int)v3, (int)v8); /*0x6ec889*/
    unsigned int *Entry; // eax
    int16_t *Waypoint_Location; // eax
    if ( !v3->TeamClass_field_7F /*0x6ec8d3*/
      || !(uint8_t)SessionClass::SetField((SessionClass *)v3->currentScript)
      || (Entry = SessionClass::GetEntry((SessionClass *)v3->currentScript, v16), *Entry != 3)
      || (Waypoint_Location = (int16_t *)((ScenarioClass *)((char *)dword_A8B230))->Get_Waypoint_Location(&aP1, Entry[1]),
          (uint8_t)LayerClass::IsWithinUsableArea(
                             (LayerClass *)&DataGlobal_87F7E8,
                             Waypoint_Location,
                             1)) )
    {
      void *ptr_0 = v6->ptr_0; // ebx /*0x6ec8dc*/
      void *v12; // eax
      v12 = ((CellCoord *)((CellCoord *)&DataGlobal_87F7E8))->To_CellObj((int16_t *)&aP2); /*0x6ec8f0*/
      if ( (*((int (**)(FootClass *, void *, int, int, unsigned int, unsigned int))ptr_0 + 107))(v6, v12, -1, -1, 0, 0) ) /*0x6ec8f8*/
      {
        v13 = (int (**)(FootClass *))v6->ptr_0; /*0x6ec916*/
        aP1 = 0; /*0x6ec91e*/
        v14 = v13[33](v6); /*0x6ec928*/
        aP2 = *LayerClass::Pathfinding_Find( /*0x6ec94b*/
                (Type *)&DataGlobal_87F7E8,
                (int)&aP2,
                v16,
                (int16_t *)&aP2,
                *(unsigned int *)(v14 + 1660),
                -1,
                0,
                0,
                1,
                1,
                0,
                0,
                0,
                1,
                (int16_t *)&aP1,
                0,
                0);
      }
    }
    if ( aP2 == g_BuildingLoadQueue_Array.ChargerBarrels[1] ) /*0x6ec95e*/
    {
      TeamClass::SelectMember((int)v3, 0); /*0x6ec984*/
    }
    else
    {
      v15 = ((CellCoord *)((CellCoord *)&DataGlobal_87F7E8))->To_CellObj((int16_t *)&aP2); /*0x6ec97d*/
      TeamClass::SelectMember((int)v3, (int)v15); /*0x6ec97e*/
    }
  }
  TeamClass::UpdateMembers(v3); /*0x6ec98b*/
}
}
// 0x5095D0
namespace gamemd {
int TeamClass::CountActiveTeamsForType(ObjectClass * aP1)
{

  int result = 0; // eax /*0x5095d6*/
  if ( (int)FootClass_Array.waveEffect[-1].Cells + 3 >= 0 ) /*0x5095db*/
  {
    WaveClass *waveEffect; // edi
    waveEffect = FootClass_Array.waveEffect; /*0x5095ea*/
    void **v4; // esi
    v4 = &FootClass_Array.auxParticles1->ptr_0 + (int)FootClass_Array.waveEffect[-1].Cells + 3; /*0x5095ed*/
    do /*0x509605*/
    {
      TeamClass **v5; // edx
      v5 = (TeamClass **)*v4; /*0x5095f0*/
      if ( *v4 && v5[11] == this && (TeamClass *)aP1 == v5[9] ) /*0x5095fe*/
        ++result; /*0x509600*/
      --v4; /*0x509601*/
      waveEffect = (WaveClass *)((char *)waveEffect - 1); /*0x509604*/
    }
    while ( waveEffect ); /*0x509605*/
  }
  return result; /*0x50960a*/
}
} // namespace gamemd

// 0x633EA0
namespace gamemd {
unsigned int * TeamClass::FindScriptAction(unsigned int * a2)
{


  unsigned int *Type; // esi
  Type = (unsigned int *)BuildingClass::GetType((BuildingClass *)a2); /*0x633eae*/
  int v4; // eax
  v4 = Type[1]; /*0x633eb0*/
  a2 = &this->vfptr; /*0x633eb7*/
  int v5; // eax
  v5 = (*(int (**)(unsigned int *, unsigned int **))(v4 + 16))(Type + 1, &a2); /*0x633ebf*/
  if ( v5 == -1 ) /*0x633ec5*/
    return 0; /*0x633ec5*/
  int v6; // edi
  v6 = Type[5]; /*0x633ec7*/
  if ( v6 == 1 ) /*0x633ecd*/
    return &this->vfptr; /*0x633ed4*/
  int v8 = v5 - 1; // eax /*0x633ed7*/
  if ( v8 < 0 ) /*0x633ed8*/
    v8 = v6 - 1; /*0x633eda*/
  int v9 = v8; // edx /*0x633edf*/
  if ( !v6 ) /*0x633ee1*/
    return 0; /*0x633ee1*/
  if ( v8 >= v6 ) /*0x633ee5*/
  {
    int v10; // ecx
    v10 = Type[37]; /*0x633ee7*/
    if ( v10 < 0 ) /*0x633eef*/
      return 0; /*0x633eef*/
    v9 = v10 + (v8 - v10) % Type[36]; /*0x633efc*/
  }
  if ( v9 >= 0 && v9 < v6 ) /*0x633f04*/
    return *(unsigned int **)(Type[2] + 4 * v9); /*0x633f0f*/
  return 0; /*0x633ecf*/

}
} // namespace gamemd

// 0x633F20
namespace gamemd {
unsigned int * TeamClass::GetNextScriptAction(unsigned int * a2)
{


  unsigned int *Type; // esi
  Type = (unsigned int *)BuildingClass::GetType((BuildingClass *)a2); /*0x633f2e*/
  int v4; // eax
  v4 = Type[1]; /*0x633f30*/
  a2 = &this->vfptr; /*0x633f37*/
  int v5; // eax
  v5 = (*(int (**)(unsigned int *, unsigned int **))(v4 + 16))(Type + 1, &a2); /*0x633f3f*/
  if ( v5 == -1 ) /*0x633f45*/
    return 0; /*0x633f45*/
  int v6; // edi
  v6 = Type[5]; /*0x633f47*/
  if ( v6 == 1 ) /*0x633f4d*/
    return &this->vfptr; /*0x633f54*/
  int v8 = v5 + 1; // eax /*0x633f57*/
  if ( v8 >= v6 ) /*0x633f5a*/
    v8 = 0; /*0x633f5c*/
  int v9 = v8; // edx /*0x633f60*/
  if ( !v6 ) /*0x633f62*/
    return 0; /*0x633f62*/
  if ( v8 >= v6 ) /*0x633f66*/
  {
    int v10; // ecx
    v10 = Type[37]; /*0x633f68*/
    if ( v10 < 0 ) /*0x633f70*/
      return 0; /*0x633f70*/
    v9 = v10 + (v8 - v10) % Type[36]; /*0x633f7d*/
  }
  if ( v9 >= 0 && v9 < v6 ) /*0x633f85*/
    return *(unsigned int **)(Type[2] + 4 * v9); /*0x633f90*/
  return 0; /*0x633f4f*/

}
} // namespace gamemd

// 0x6915A0
namespace gamemd {
char TeamClass::SetField11(ScriptClass * aP1)
{
  this->owner = (HouseClass *)aP1; /*0x6915a4*/
  return 1; /*0x6915a9*/
}
} // namespace gamemd

// 0x6915B0
namespace gamemd {
BOOL TeamClass::Check(void *a1, void *a2, void *a3)
{

  HouseClass *v1; // eax
  v1 = (HouseClass *)this->owner + 1); /*0x6915b3*/
  this->owner = v1; /*0x6915b4*/
  return (unsigned int)v1 < this->buildingType[1].TeamTypeClass_field_2C; /*0x6915c4*/
}
} // namespace gamemd

// 0x6E9050
namespace gamemd {
char TeamClass::SelectMember(AbstractClass * aP1, void *a2)
{

  int v4 = aP1->queuedFocus; // eax /*0x6e9059*/
  if ( a2 != v4 ) /*0x6e905e*/
  {
    unsigned int *v5 = aP1->firstUnit; // esi /*0x6e9060*/
    if ( v4 ) /*0x6e9065*/
    {
      for ( ; v5; v5 = v5->FootClass_field_5D8 ) /*0x6e9069*/
      {
        int v6 = aP1->queuedFocus; // eax /*0x6e906c*/
        int v7 = v5->FootClass_field_5A4; // edx /*0x6e9075*/
        bool v12; // [esp+10h] [ebp+4h]
        v12 = v5[173] == v6; /*0x6e9082*/
        bool v8; // bl
        v8 = v7 == v6; /*0x6e9086*/
        if ( v5[173] == v6 || v7 == v6 ) /*0x6e908f*/
        {
          v5->MissionDispatch(5, 0); /*0x6e9099*/
          if ( v8 ) /*0x6e90a1*/
            v5->AssignDestination(0, 1); /*0x6e90ab*/
          if ( v12 ) /*0x6e90b7*/
            v5->AssignTarget_SyncLog(0); /*0x6e90bf*/
        }
      }
    }
  }
  int v9 = aP1->uniqueId; // eax /*0x6e90d0*/
  if ( v9 == aP1->queuedFocus || !v9 ) /*0x6e90dc*/
    aP1->uniqueId = a2; /*0x6e90de*/
  aP1->queuedFocus = a2; /*0x6e90e3*/
  if ( a2 ) /*0x6e90e6*/
  {
    unsigned int *v10; // esi
    v9 = (*(int (**)(int))(a2->owner)(a2); /*0x6e90ed*/
    if ( v9 == 11 ) /*0x6e90f3*/
    {
      (*((unsigned char *)&(v9))) = Type::CheckAmbiguity(&dword_87F7E8, a2, 1); /*0x6e90fd*/
      if ( (unsigned char)v9 ) /*0x6e9104*/
      {
        aP1->unknown82 = 0; /*0x6e9132*/
      }
      else
      {
        v10 = aP1->firstUnit; /*0x6e9106*/
        for ( aP1->unknown82 = 1; v10; v10 = v10->unknown82 ) /*0x6e9112*/
          (*((unsigned char *)&(v9))) = v10->AssignDestination(0, 1); /*0x6e911c*/
      }
    }
  }
  return v9; /*0x6e912c*/
}
} // namespace gamemd

// 0x6EA500
namespace gamemd {
char TeamClass::AddMember(int aP1, char aP2)
{
  int result; // eax
  char v6; // bl
  int *v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // edx

  aP1 = aP1; /*0x6ea503*/
  if ( aP1 ) /*0x6ea50b*/
  {
    aP2 = aP2; /*0x6ea515*/
    result = ((TeamClass *)((TeamClass *)this))->ValidateMember(aP1, &aP1, aP2); /*0x6ea522*/
    if ( (unsigned char)result ) /*0x6ea529*/
    {
      v7 = aP1->u32_5D4; /*0x6ea531*/
      if ( v7 ) /*0x6ea539*/
        TeamClass::LiberateMember_Start(v7, aP1, 0xFFFFFFFF, 0); /*0x6ea540*/
      if ( !aP2 ) /*0x6ea547*/
        ++*(this + aP1 + 34); /*0x6ea54d*/
      aP1->u8_689 = *(&this->qD20) == 0; /*0x6ea55c*/
      aP1->q5D8 = *(&this->qD20); /*0x6ea565*/
      *(&this->qD20) = aP1; /*0x6ea56b*/
      aP1->u32_5D4 = this; /*0x6ea56e*/
      aP1->controlGroup = TeamTypeClass::GetGroup((TeamTypeClass *)this->q5A0); /*0x6ea57c*/
      if ( *(&this->unknown38) /*0x6ea5a8*/
        && (!*(unsigned char *)(this->q5A0 + 179) || *(int *)((*(int (**)(int))(aP1->hasParachute)(aP1) + 1504) > 0) )
      {
        ObjectClass::SetReference((ObjectClass *)aP1, *(&this->unknown38)); /*0x6ea5b0*/
      }
      ++*(&this->currentScript); /*0x6ea5bb*/
      v8 = (*(int (**)(int))(aP1->mindControlledBy)(aP1); /*0x6ea5c0*/
      v9 = *(&this->q820); /*0x6ea5c9*/
      v10 = v8 + *(&this->qBE0); /*0x6ea5cc*/
      result = (int)(&this->q820); /*0x6ea5ce*/
      *(&this->qBE0) = v10; /*0x6ea5d3*/
      if ( !v9 ) /*0x6ea5d6*/
        TeamClass::FindClosestEnemythis->Coord_9C, &this->buildingType); /*0x6ea5df*/
      v11 = this->q5A0; /*0x6ea5e4*/
      (*((unsigned char *)&(result))) = 1; /*0x6ea5e7*/
      this->TeamClass_field_7E = 1; /*0x6ea5e9*/
      this->needsToDisappear = 1; /*0x6ea5ec*/
      aP1->isRecruitableByEnemy_d = v11->u8_F5; /*0x6ea5f5*/
    }
  }
  else
  {
    (*((unsigned char *)&(result))) = 0; /*0x6ea50f*/
  }
  return result; /*0x6ea50d*/
}
} // namespace gamemd

// 0x6EA610
namespace gamemd {
bool TeamClass::ValidateMember(int aP1, int *a2, char a4)
{

  int result; // eax
  int v6; // edi
  int v7; // eax
  ScriptClass *currentScript; // ecx
  bool v9; // bl
  int v10; // eax
  int v11; // edx
  int v12; // [esp+10h] [ebp-8h] BYREF

  if ( this == aP1->u32_5D4 ) /*0x6ea623*/
    goto LABEL_39; /*0x6ea623*/
  if ( !aP1 ) /*0x6ea62b*/
    goto LABEL_39; /*0x6ea62b*/
  if ( !aP1->isAliveFlag ) /*0x6ea631*/
    goto LABEL_39; /*0x6ea631*/
  result = aP1->health; /*0x6ea63f*/
  if ( !result ) /*0x6ea644*/
    goto LABEL_39; /*0x6ea644*/
  if ( !dword_A8E7AC ) /*0x6ea651*/
  {
    result = *(unsigned __int8 *)(aP1 + 129); /*0x6ea653*/
    if ( (unsigned char)result ) /*0x6ea65b*/
      goto LABEL_39; /*0x6ea65b*/
  }
  result = aP1->owner; /*0x6ea661*/
  if ( (HouseClass *)result != this->owner ) /*0x6ea66c*/
    goto LABEL_39; /*0x6ea66c*/
  if ( (unsigned __int8)Team::AllMembersValid((Team *)aP1) ) /*0x6ea674*/
  {
    result = (*(int (**)(int))(*&aP1->suspendedMission))(aP1); /*0x6ea681*/
    if ( result != 2 ) /*0x6ea687*/
      goto LABEL_39; /*0x6ea687*/
    result = aP1->u32_6C4; /*0x6ea68d*/
    if ( !result->u8_E0D ) /*0x6ea693*/
      goto LABEL_39; /*0x6ea693*/
  }
  *a2 = 0; /*0x6ea6a5*/
  if ( *(int *)(*&this->currentScript.firstUnit + 156) > 0 ) /*0x6ea6bc*/
  {
    do /*0x6ea6f0*/
    {
      v6 = *a2; /*0x6ea6c0*/
      if ( *(unsigned int *)(*&this->spawnCell.TeamTypeClass_field_70 + 8 * v6 + 168) == (*(int (**)(int))(*(unsigned int *)aP1 + 136))(aP1) ) /*0x6ea6da*/
        break; /*0x6ea6da*/
      *a2 = v6 + 1; /*0x6ea6df*/
    }
    while ( v6 + 1 < *(unsigned int *)(*&this->currentScript.firstUnit + 156) ); /*0x6ea6f0*/
  }
  result = (int)this->buildingType; /*0x6ea6f2*/
  if ( *a2 == *(unsigned int *)(*(unsigned int *)(result + 228) + 156) && !a4 ) /*0x6ea70b*/
    goto LABEL_39; /*0x6ea70b*/
  if ( (*(int (**)(int))(*(unsigned int *)aP1 + 388))(aP1) != -1 ) /*0x6ea71e*/
  {
    v7 = (*(int (**)(int))(*(unsigned int *)aP1 + 388))(aP1); /*0x6ea724*/
    if ( !IPersistStream::SetField(v7) ) /*0x6ea72c*/
      goto LABEL_39; /*0x6ea72c*/
  }
  if ( !aP1->isRecruitableByAlly_d ) /*0x6ea739*/
  {
    result = (int)this->buildingType; /*0x6ea743*/
    if ( !result->u32_A9 ) /*0x6ea746*/
      goto LABEL_39; /*0x6ea746*/
  }
  currentScript = this->currentScript; /*0x6ea754*/
  v9 = 0; /*0x6ea757*/
  if ( currentScript ) /*0x6ea75b*/
    v9 = *SessionClass::GetEntry((SessionClass *)currentScript, &v12) == 8; /*0x6ea76c*/
  result = (*(int (**)(int))(*(unsigned int *)aP1 + 44))(aP1); /*0x6ea772*/
  if ( result == 2 ) /*0x6ea778*/
    v9 = 1; /*0x6ea77a*/
  if ( !aP1->isRecruitableByEnemy_d && BYTE1(this->buildingType[1].TeamTypeClass_field_34) && !v9 ) /*0x6ea795*/
    goto LABEL_39; /*0x6ea795*/
  result = TeamClass::HasAnyMemberFlagged((TeamClass *)aP1); /*0x6ea79d*/
  if ( (unsigned char)result ) /*0x6ea7a4*/
    goto LABEL_39; /*0x6ea7a4*/
  result = FootClass::checkPassability((FootClass *)aP1); /*0x6ea7ac*/
  if ( (unsigned char)result ) /*0x6ea7b3*/
    goto LABEL_39; /*0x6ea7b3*/
  result = aP1->bunkerLinkedUnit; /*0x6ea7b9*/
  if ( result ) /*0x6ea7c1*/
    goto LABEL_39; /*0x6ea7c1*/
  v10 = aP1->u32_5D4; /*0x6ea7c7*/
  if ( v10 ) /*0x6ea7cf*/
  {
    v11 = *(unsigned int *)(v10 + 36); /*0x6ea7d1*/
    result = (int)this->buildingType; /*0x6ea7d4*/
    if ( *(unsigned int *)(v11 + 180) >= result->u32_B4 ) /*0x6ea7e5*/
      goto LABEL_39; /*0x6ea7e5*/
  }
  if ( ((*(int (**)(int))(*(unsigned int *)aP1 + 44))(aP1) != 2 /*0x6ea83f*/
     || !*(unsigned int *)(*(int (**)(int, unsigned int))(*&aP1->u32_FE0))(aP1, 0)
     || (result = aP1->ammo) != 0)
    && ((result = *a2,
         this->countObjects[*a2] < *(unsigned int *)(*&this->currentScript.firstUnit + 8 * *a2 + 164))
     || a4)
    && (result = aP1->bunkerLinkedUnit) == 0 )
  {
    result = *&aP1->locomotorSource; /*0x6ea841*/
    (result) = ((result) & ~0xFF) | ((result == 0) & 0xFF); /*0x6ea84c*/
  }
  else
  {
LABEL_39:
    (result) = ((result) & ~0xFF) | ((0) & 0xFF); /*0x6ea859*/
  }
  return result; /*0x6ea847*/

}
} // namespace gamemd

// 0x6EAE60
namespace gamemd {
int TeamClass::ExecuteAction(int a2, char a3)
{
  int result; // eax
  FootClass *firstUnit; // edx

  result = a2; /*0x6eae60*/
  if ( (TagClass *)a2 == this->tag ) /*0x6eae6c*/
    this->tag = 0; /*0x6eae6e*/
  firstUnit = this->firstUnit; /*0x6eae71*/
  if ( (FootClass *)a2 == firstUnit && a3 ) /*0x6eae7c*/
    this->firstUnit = firstUnit->nextTeamMember; /*0x6eae84*/
  if ( (HouseClass *)a2 == this->owner ) /*0x6eae8a*/
    this->owner = 0; /*0x6eae8c*/
  if ( (ScriptClass *)a2 == this->currentScript ) /*0x6eae92*/
    this->currentScript = 0; /*0x6eae94*/
  if ( this->focus == (AbstractClass *)a2 ) /*0x6eae9a*/
    this->focus = 0; /*0x6eae9c*/
  if ( this->queuedFocus == (AbstractClass *)a2 ) /*0x6eaea2*/
    this->queuedFocus = 0; /*0x6eaea4*/
  if ( this->spawnCell == (CellClass *)a2 ) /*0x6eaeaa*/
    this->spawnCell = 0; /*0x6eaeac*/
  if ( this->buildingType == (TeamTypeClass *)a2 ) /*0x6eaeb2*/
    this->buildingType = 0; /*0x6eaeb4*/
  if ( this->unknown38 == a2 ) /*0x6eaeba*/
    this->unknown38 = 0; /*0x6eaebc*/
  if ( this->unknown44 == a2 ) /*0x6eaec2*/
    this->unknown44 = 0; /*0x6eaec4*/
  if ( this->target == (HouseClass *)a2 ) /*0x6eaeca*/
    this->target = 0; /*0x6eaecc*/
  return result; /*0x6eaecf*/
}
} // namespace gamemd

// 0x6EC3A0
namespace gamemd {
char TeamClass::WakeUpAllMembers()
{
  char result; // al
  FootClass *i; // esi

  result = TeamClass::SelectMember((int)this, 0); /*0x6ec3a5*/
  for ( i = this->firstUnit; i; i = i->nextTeamMember ) /*0x6ec3af*/
  {
    result = (*((int (**)(FootClass *, unsigned int))i->ptr_0 + 242))(i, 0); /*0x6ec3b7*/
    i->unknownBool688 = 1; /*0x6ec3bd*/
  }
  return result; /*0x6ec3ce*/
}
} // namespace gamemd

// 0x6EC450
namespace gamemd {
int TeamClass::SaveLoad_Prefix(AbstractClass * aP0, int aP1)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix_0(aP0, aP1); /*0x6ec45b*/
  if ( result >= 0 ) /*0x6ec462*/
  {
    if ( aP0 ) /*0x6ec46a*/
    {
      AbstractClass::InitVtables((AbstractClass *)aP0, (int)&aP1); /*0x6ec473*/
      __4type_info_AAEAAV0_ABV0__Z(aP0->suspendTimer, (int)&aP1); /*0x6ec480*/
      /* X11: ptr_0 install elided (implicit via TeamClass virtuals 0x6ec485) */
      /* X11: ptr_0 install elided (implicit via TeamClass virtuals 0x6ec48b) */
      /* X11: ptr_0 install elided (implicit via TeamClass virtuals 0x6ec492) */
      /* X11: ptr_0 install elided (implicit via TeamClass virtuals 0x6ec499) */
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->Coord_9C); /*0x6ec4a9*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->Coord_9C); /*0x6ec4b7*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->Coord_9C); /*0x6ec4c5*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->Coord_9C); /*0x6ec4d3*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->Coord_9C); /*0x6ec4e1*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->unknown38); /*0x6ec4ef*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->Coord_9C); /*0x6ec4fd*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->Coord_9C); /*0x6ec50b*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->Coord_9C); /*0x6ec519*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->Coord_9C); /*0x6ec527*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->unknown44); /*0x6ec535*/
    return 0; /*0x6ec53a*/
  }
  return result; /*0x6ec53c*/
}
} // namespace gamemd

// 0x6EC540
namespace gamemd {
int TeamClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((int *)aP0, a1, aP2); /*0x6ec54f*/
  if ( result >= 0 ) /*0x6ec556*/
    return 0; /*0x6ec558*/
  return result; /*0x6ec55a*/
}
} // namespace gamemd

// 0x6EC560
namespace gamemd {
int TeamClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x6ec566*/
    return -2147467261; /*0x6ec568*/
  *a2 = 237448655; /*0x6ec576*/
  a2[1] = 298949647; /*0x6ec57e*/
  a2[2] = -1610610249; /*0x6ec587*/
  a2[3] = unk_7E976C; /*0x6ec590*/
  return 0; /*0x6ec56d*/
}
} // namespace gamemd

// 0x6F0430
namespace gamemd {
int TeamClass::StubReturn160()
{
  return 160; /*0x6f0435*/
}
} // namespace gamemd

// 0x6F0440
namespace gamemd {
int TeamClass::StubReturn34()
{
  return 34; /*0x6f0445*/
}
} // namespace gamemd
