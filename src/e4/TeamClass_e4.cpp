// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
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

// 0x4D9E70
namespace gamemd {
int TeamClass::CheckCohesion()
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  _DWORD *v5; // edi
  _DWORD *v6; // eax
  double v7; // st7
  int v9; // [esp+20h] [ebp-1Ch]
  _BYTE v10[12]; // [esp+24h] [ebp-18h] BYREF
  _BYTE v11[12]; // [esp+30h] [ebp-Ch] BYREF

  v2 = (*(int (__thiscall **)(#374 *))(*(_DWORD *)this + 44))(this); /*0x4d9e78*/
  if ( v2 > 0 /*0x4d9f52*/
    && v2 <= 2
    && Team::AllMembersValid((int *)this)
    && (v3 = Array::Get(this, 0), (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 44))(v3) == 6)
    && *(_BYTE *)(*(_DWORD *)(Array::Get(this, 0) + 1312) + 5801)
    && (v4 = Array::Get(this, 0),
        v5 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v4 + 72))(v4, v10),
        v6 = (_DWORD *)(*(int (__thiscall **)(#374 *, _BYTE *))(*(_DWORD *)this + 72))(this, v11),
        v9 = v6[2] - v5[2],
        v7 = Math::Sqrt(
               (double)(*v6 - *v5) * (double)(*v6 - *v5)
             + (double)(v6[1] - v5[1]) * (double)(v6[1] - v5[1])
             + (double)v9 * (double)v9),
        (int)Math::RoundToInt(v7) < 128) )
  {
    return 1; /*0x4d9f54*/
  }
  else
  {
    return AbstractClass::COMStub_Return0_38(this); /*0x4d9f5d*/
  }
}
}
// 0x4E0080
namespace gamemd {
int TeamClass::HasAnyMemberFlagged()
{
  return *(this + 1679) || *(this + 1680) || *(this + 1681); /*0x4e00a0*/
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
    *(_BYTE *)(*(_DWORD *)&HouseClass_Array->gap0[4 * *(_DWORD *)(a2 + 48)] + 577) = 0; /*0x577bc7*/
  if ( (#375 *)a2 != HouseClass_Player ) /*0x577bd4*/
  {
    if ( a2 ) /*0x577bd8*/
      return result; /*0x577bd8*/
    goto LABEL_7; /*0x577bd8*/
  }
  if ( !a2 ) /*0x577be2*/
  LABEL_7:
    Debug::Log(); /*0x577be4*/
  v4 = *(this + 61); /*0x577bf1*/
  *(this + 67) = 1; /*0x577bf7*/
  *(this + 68) = v4; /*0x577c01*/
  *(this + 69) = v4 - 1; /*0x577c0a*/
  *(this + 70) = (v4 << 11) + *(this + 79) + 4; /*0x577c1f*/
  for ( i = LayerClass::CellIteratorNext(this); i; i = LayerClass::CellIteratorNext(this) ) /*0x577c2c*/
  {
    v6 = *(_DWORD *)(i + 320) & 0xFFFFFFFC; /*0x577c3d*/
    *(_DWORD *)(i + 300) &= 0xFFFFFFE7; /*0x577c40*/
    *(_DWORD *)(i + 320) = v6; /*0x577c48*/
  }
  HouseClass::RevealShroudForAllies(0, 0); /*0x577c60*/
  *((_BYTE *)HouseClass_Player + 576) = 0; /*0x577c6f*/
  FogOfWar::Render((int **)&MapClass_Instance); /*0x577c76*/
  return (*(int (__thiscall **)(_DWORD *, int))(*this + 56))(this, 2); /*0x577c84*/
}
}
// 0x62A260
namespace gamemd {
int TeamClass::DeployUnit(int a2, int a3)
{
  char result; // al
  int v5; // ecx
  int v6; // edi
  int v7; // eax
  int v8; // ecx
  _DWORD *v9; // eax
  int v10; // ecx
  int v11; // edx
  _DWORD *Value; // eax
  int v13; // eax
  int v14; // eax
  int v15; // ecx
  _DWORD *v16; // eax
  _DWORD v17[3]; // [esp+24h] [ebp-18h] BYREF
  _DWORD v18[3]; // [esp+30h] [ebp-Ch] BYREF

  result = a2; /*0x62a263*/
  v5 = *(_DWORD *)(this + 36); /*0x62a26c*/
  if ( a2 == v5 ) /*0x62a271*/
  {
    *(_DWORD *)(this + 36) = 0; /*0x62a273*/
    return result; /*0x62a280*/
  }
  if ( a2 == *(_DWORD *)(this + 40) ) /*0x62a286*/
  {
    result = g_BounceClassInit; /*0x62a28c*/
    if ( !g_BounceClassInit ) /*0x62a295*/
    {
      *(_DWORD *)(this + 40) = 0; /*0x62a297*/
      return result; /*0x62a2a0*/
    }
    v6 = *(_DWORD *)(this + 44); /*0x62a2a3*/
    v7 = *(_DWORD *)(this + 52); /*0x62a2a6*/
    if ( v6 != -1 ) /*0x62a2ac*/
    {
      if ( (int)g_CurrentFrame - v6 >= v7 ) /*0x62a2b8*/
      {
  LABEL_12:
        v9 = (_DWORD *)Object::CalculateObjectPlacementPosition(v18); /*0x62a2ec*/
        v17[0] = *v9; /*0x62a303*/
        v10 = v9[1]; /*0x62a307*/
        v17[1] = v10; /*0x62a30a*/
        v11 = v9[2]; /*0x62a30e*/
        ++g_IKnowWhatImDoing; /*0x62a311*/
        v17[2] = v11; /*0x62a31d*/
        if ( v17[0] == dword_AC4948 && v10 == dword_AC494C && v11 == dword_AC4950 /*0x62a364*/
          || (Value = ProgressTimer::GetValue((_WORD *)(*(_DWORD *)(this + 40) + 904), &a2),
              !(*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD *, _DWORD))(**(_DWORD **)(this + 36) + 216))(
                 *(_DWORD *)(this + 36),
                 v17,
                 (unsigned __int8)((unsigned int)((*Value >> 7) + 1) >> 1))) )
        {
          --g_IKnowWhatImDoing; /*0x62a462*/
          *(_DWORD *)(*(_DWORD *)(this + 36) + 108) = 0; /*0x62a46a*/
          result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 36) + 248))(*(_DWORD *)(this + 36)); /*0x62a472*/
          *(_DWORD *)(this + 40) = 0; /*0x62a478*/
        }
        else
        {
          --g_IKnowWhatImDoing; /*0x62a379*/
          v13 = *(_DWORD *)(this + 36); /*0x62a37f*/
          if ( *(_BYTE *)(v13 + 1074) && (unsigned __int8)House::IsHumanPlayer(*(#375 **)(v13 + 540)) ) /*0x62a390*/
          {
            *(_BYTE *)(*(_DWORD *)(this + 36) + 1074) = 0; /*0x62a39c*/
            (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 36) + 332))(*(_DWORD *)(this + 36)); /*0x62a3a7*/
          }
          v14 = *(_DWORD *)(this + 36); /*0x62a3ad*/
          v15 = *(_DWORD *)(v14 + 1076); /*0x62a3b0*/
          if ( v15 ) /*0x62a3b8*/
            TeamClass::AddMember(v15, v14, 0); /*0x62a3bc*/
          if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 36) + 1196))(*(_DWORD *)(this + 36)) ) /*0x62a3c6*/
          {
            TechnoClass::SetFocus(*(_DWORD **)(this + 36), 0); /*0x62a3d4*/
            (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 36) + 968))(*(_DWORD *)(this + 36), 0); /*0x62a3df*/
            (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 36) + 1152))( /*0x62a3ed*/
              *(_DWORD *)(this + 36),
              0,
              1);
          }
          (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 36) + 1156))(*(_DWORD *)(this + 36), 0, 1); /*0x62a3fb*/
          (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 36) + 1160))( /*0x62a40b*/
            *(_DWORD *)(this + 36),
            0,
            0,
            0,
            0,
            0);
          v16 = *(_DWORD **)(this + 36); /*0x62a411*/
          v18[0] = v16[39]; /*0x62a421*/
          v18[1] = v16[40]; /*0x62a428*/
          v18[2] = v16[41]; /*0x62a42f*/
          result = MapClass::RevealArea2(v18, v16[152] - 3, v16[152] + 3, 0); /*0x62a44b*/
          *(_DWORD *)(this + 40) = 0; /*0x62a450*/
        }
        return result; /*0x62a459*/
      }
      v7 -= (int)g_CurrentFrame - v6; /*0x62a2ba*/
    }
    if ( v7 > 0 && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 352))(v5) ) /*0x62a2c2*/
    {
      *(_DWORD *)(*(_DWORD *)(this + 40) + 1684) = 0; /*0x62a2cf*/
      v8 = *(_DWORD *)(this + 36); /*0x62a2d5*/
      *(_DWORD *)(this + 40) = 0; /*0x62a2d8*/
      return (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 248))(v8); /*0x62a2e9*/
    }
    goto LABEL_12; /*0x62a2ca*/
  }
  if ( a2 == *(_DWORD *)(this + 68) ) /*0x62a487*/
  {
    *(_DWORD *)(this + 68) = 0; /*0x62a489*/
    *(_BYTE *)(this + 84) = 1; /*0x62a490*/
  }
  return result; /*0x62a27a*/
}
}
// 0x6339B0
namespace gamemd {
int TeamClass::GetLeaderIndex()
{
  int v1; // ecx
  int v2; // esi

  v1 = *(this + 135); /*0x6339b0*/
  v2 = *(_DWORD *)(v1 + 48); /*0x6339b7*/
  if ( (unsigned __int8)House::IsHumanPlayer((#375 *)v1) && HouseClass_Player ) /*0x6339ca*/
    return *((_DWORD *)HouseClass_Player + 12); /*0x6339cc*/
  else
    return v2; /*0x6339d1*/
}
}
// 0x6340B0
namespace gamemd {
AbstractClass * * TeamClass::DestroyAllMembers(TechnoClass * aP1)
{
  int v3; // eax
  int v4; // edx
  _DWORD **v5; // edi
  _DWORD **v6; // ecx
  _DWORD *v7; // ebp
  int v8; // eax
  int v9; // eax
  int v10; // edi
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // ecx
  int v15; // eax
  void *v16; // eax
  void *Blocka; // [esp+10h] [ebp-4h] BYREF

  v3 = 0; /*0x6340b8*/
  v4 = *(this + 4); /*0x6340ba*/
  if ( v4 <= 0 ) /*0x6340c0*/
    goto LABEL_7; /*0x6340c0*/
  v5 = (_DWORD **)*(this + 1); /*0x6340c2*/
  v6 = v5; /*0x6340c9*/
  while ( (_DWORD *)**v6 != aP1 ) /*0x6340d0*/
  {
    ++v3; /*0x6340d2*/
    ++v6; /*0x6340d3*/
    if ( v3 >= v4 ) /*0x6340d8*/
    {
      v7 = 0; /*0x6340dc*/
      goto LABEL_9; /*0x6340de*/
    }
  }
  if ( v3 == -1 ) /*0x6340e3*/
  LABEL_7:
    v7 = 0; /*0x6340e7*/
  else
    v7 = v5[v3]; /*0x6340eb*/
  LABEL_9:
  Blocka = v7; /*0x6340f0*/
  if ( v7 ) /*0x6340f6*/
  {
    if ( *((_BYTE *)v7 + 12) ) /*0x6340fc*/
    {
      *((_BYTE *)v7 + 12) = 0; /*0x634101*/
      v8 = *(this + 42) - 1; /*0x63410a*/
      *(this + 42) = v8; /*0x63410b*/
      if ( !v8 ) /*0x634111*/
        *(this + 44) = -1; /*0x634113*/
    }
    v9 = v7[2]; /*0x63411d*/
    if ( v9 != -1 ) /*0x634123*/
    {
      v10 = *(_DWORD *)(*(this + 9) + 4 * v9); /*0x634129*/
      *(_DWORD *)(v10 + 116) = -1; /*0x63412e*/
      TeamClass::Reset(this, 0); /*0x634135*/
      v11 = *(_DWORD *)(v10 + 112) - 1; /*0x63413d*/
      *(_DWORD *)(v10 + 112) = v11; /*0x63413e*/
      if ( !v11 ) /*0x634141*/
      {
        aP1 = this; /*0x634145*/
        if ( this ) /*0x634149*/
        {
          if ( !*((_BYTE *)this + 28) ) /*0x63414b*/
          {
            *((_BYTE *)this + 28) = 1; /*0x63415a*/
            VectorClass::Append(&g_ScriptConfig, &aP1); /*0x63415e*/
          }
        }
      }
    }
    v7[2] = -1; /*0x634163*/
    __3_YAXPAX_Z(*((void **)Blocka + 1)); /*0x634172*/
    v12 = (*(int (__thiscall **)(_DWORD *, void **))(*this + 16))(this, &Blocka); /*0x634183*/
    if ( v12 != -1 ) /*0x634189*/
    {
      v13 = *(this + 4); /*0x63418b*/
      if ( v12 < v13 ) /*0x634190*/
      {
        v14 = v13 - 1; /*0x634192*/
        for ( *(this + 4) = v14; /*0x634198*/
              v12 < *(this + 4);
              *(_DWORD *)(*(this + 1) + 4 * v12 - 4) = *(_DWORD *)(*(this + 1) + 4 * v12) )
        {
          ++v12; /*0x63419d*/
        }
      }
    }
    __3_YAXPAX_Z(Blocka); /*0x6341b1*/
    if ( !*(this + 4) && this ) /*0x6341c6*/
    {
      FactoryClass::ClearObjects(this); /*0x6341ce*/
      aP1 = this; /*0x6341e3*/
      v15 = (*(int (__thiscall **)(int *, _DWORD **))(g_ScriptConfig + 16))(&g_ScriptConfig, &aP1); /*0x6341e7*/
      if ( v15 != -1 ) /*0x6341ed*/
        Array::RemoveAt(&g_ScriptConfig, v15); /*0x6341f5*/
      Team_Destroy(&dword_AC4B30, (int)&aP1); /*0x634204*/
      Team_Destroy(&dword_AC4C18, (int)&aP1); /*0x634213*/
      if ( (_DWORD *)g_ScriptPool == aP1 ) /*0x634224*/
        g_ScriptPool = 0; /*0x634226*/
      if ( (_DWORD *)g_ScriptState == aP1 ) /*0x634232*/
        g_ScriptState = 0; /*0x634234*/
      if ( (_DWORD *)g_ScriptActionPool == aP1 ) /*0x634240*/
        g_ScriptActionPool = 0; /*0x634242*/
      *(this + 8) = &VectorClass<PlanningBranchClass *>::`vftable'; /*0x63424b*/
      VectorClass::Cleanup2((int)(this + 8)); /*0x634251*/
      v16 = (void *)*(this + 1); /*0x634256*/
      *this = &VectorClass<PlanningMemberClass *>::`vftable'; /*0x634259*/
      if ( v16 ) /*0x634261*/
      {
        if ( *((_BYTE *)this + 13) ) /*0x634263*/
        {
          __3_YAXPAX_Z(v16); /*0x634269*/
          *(this + 1) = 0; /*0x634271*/
        }
      }
      *((_BYTE *)this + 13) = 0; /*0x634275*/
      *(this + 2) = 0; /*0x634278*/
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
  int v4; // ecx
  _DWORD *v5; // edi
  int v6; // ebp
  int *v7; // eax
  int Type; // esi
  int v9; // eax
  int v10; // eax
  int v11; // esi
  int v12; // ecx
  int v13; // esi
  int v14; // ecx
  int v15; // eax
  unsigned __int8 v16; // dl
  int v17; // ecx
  int v18; // esi
  int v19; // eax
  int v20; // [esp+10h] [ebp-10h]
  int *v21; // [esp+14h] [ebp-Ch] BYREF
  unsigned __int8 v22[8]; // [esp+18h] [ebp-8h] BYREF

  v20 = *(_DWORD *)(*(this + 9) + 4 * a2); /*0x635a53*/
  result = *(_DWORD *)(v20 + 116); /*0x635a57*/
  if ( result == -1 ) /*0x635a5d*/
  {
    v4 = *(this + 4); /*0x635a63*/
    v5 = 0; /*0x635a66*/
    v6 = 0; /*0x635a68*/
    *(_DWORD *)v22 = v4; /*0x635a6a*/
    if ( v4 <= 0 ) /*0x635a70*/
    {
      return -1; /*0x635b54*/
    }
    else
    {
      do /*0x635abd*/
      {
        v7 = *(int **)(*(this + 1) + 4 * v6); /*0x635a79*/
        if ( v7[2] == a2 ) /*0x635a83*/
        {
          v5 = (_DWORD *)*v7; /*0x635a85*/
          Type = BuildingClass::GetType((_DWORD *)*v7); /*0x635a8e*/
          v9 = *(_DWORD *)(Type + 4); /*0x635a90*/
          v21 = this; /*0x635a97*/
          v10 = (*(int (__thiscall **)(int, int **))(v9 + 16))(Type + 4, &v21); /*0x635a9f*/
          v11 = *(_DWORD *)(Type + 140); /*0x635aa2*/
          if ( v11 == -1 || v10 < v11 ) /*0x635ab4*/
          {
            v12 = v5[135]; /*0x635acb*/
            v13 = *(_DWORD *)(v12 + 48); /*0x635acd*/
            if ( (unsigned __int8)House::IsHumanPlayer((#375 *)v12) && HouseClass_Player ) /*0x635ae0*/
              v13 = *((_DWORD *)HouseClass_Player + 12); /*0x635ae2*/
            v14 = *(_DWORD *)&HouseClass_Array->gap0[4 * v13] + 22265; /*0x635af4*/
            *(_WORD *)v22 = *(_WORD *)v14; /*0x635afd*/
            v22[2] = *(_BYTE *)(v14 + 2); /*0x635b09*/
            Color::Lerp(v22, 0x50u, (unsigned __int8 *)&byte_A83CD9); /*0x635b0d*/
            v15 = (v22[1] >> g_BitMask_Blue << g_BitMask_Green) | (v22[2] >> g_BitMask_Red << g_BitShift_Blue); /*0x635b45*/
            v16 = v22[0]; /*0x635b47*/
            goto LABEL_19; /*0x635b4b*/
          }
          v4 = *(_DWORD *)v22; /*0x635ab6*/
        }
        ++v6; /*0x635aba*/
      }
      while ( v6 < v4 ); /*0x635abd*/
      if ( !v5 ) /*0x635b52*/
        return -1; /*0x635b52*/
      v17 = v5[135]; /*0x635b61*/
      v18 = *(_DWORD *)(v17 + 48); /*0x635b67*/
      if ( (unsigned __int8)House::IsHumanPlayer((#375 *)v17) ) /*0x635b6a*/
      {
        if ( HouseClass_Player ) /*0x635b7a*/
          v18 = *((_DWORD *)HouseClass_Player + 12); /*0x635b7c*/
      }
      v19 = *(_DWORD *)&HouseClass_Array->gap0[4 * v18] + 22265; /*0x635b8f*/
      *(_WORD *)v22 = *(_WORD *)v19; /*0x635b97*/
      v22[2] = *(_BYTE *)(v19 + 2); /*0x635ba3*/
      Color::Lerp(v22, 0x64u, (unsigned __int8 *)&byte_A80220); /*0x635ba7*/
      v15 = (v22[1] >> g_BitMask_Blue << g_BitMask_Green) | (v22[2] >> g_BitMask_Red << g_BitShift_Blue); /*0x635bdf*/
      v16 = v22[0]; /*0x635be1*/
  LABEL_19:
      result = (v16 >> g_BitShift_Green_0 << g_BitShift_Red) | v15; /*0x635be5*/
      *(_DWORD *)(v20 + 116) = result; /*0x635c01*/
    }
  }
  return result; /*0x635b54*/
}
}
// 0x635C10
namespace gamemd {
int TeamClass::GetMember()
{
  int result; // eax
  int v3; // ebp
  _DWORD *v4; // esi
  int v5; // edi
  int *v6; // eax
  int v7; // ecx
  int v8; // edi
  int v9; // edx
  int v10; // eax
  unsigned __int8 v11; // dl
  int v12; // ecx
  int v13; // esi
  int v14; // ecx
  __int16 v15; // [esp+10h] [ebp-8h] BYREF
  unsigned __int8 v16; // [esp+12h] [ebp-6h]

  result = *(this + 43); /*0x635c18*/
  if ( result == -1 ) /*0x635c22*/
  {
    v3 = *(this + 4); /*0x635c28*/
    v4 = 0; /*0x635c2b*/
    v5 = 0; /*0x635c2d*/
    if ( v3 <= 0 ) /*0x635c31*/
    {
      return -1; /*0x635c60*/
    }
    else
    {
      do /*0x635c56*/
      {
        v6 = *(int **)(*(this + 1) + 4 * v5); /*0x635c36*/
        if ( *((_BYTE *)v6 + 12) ) /*0x635c39*/
        {
          v4 = (_DWORD *)*v6; /*0x635c40*/
          if ( !*(_BYTE *)(BuildingClass::GetType((_DWORD *)*v6) + 152) ) /*0x635c51*/
          {
            v7 = v4[135]; /*0x635c71*/
            v8 = *(_DWORD *)(v7 + 48); /*0x635c73*/
            if ( (unsigned __int8)House::IsHumanPlayer((#375 *)v7) && HouseClass_Player ) /*0x635c86*/
              v8 = *((_DWORD *)HouseClass_Player + 12); /*0x635c88*/
            v9 = *(_DWORD *)&HouseClass_Array->gap0[4 * v8] + 22265; /*0x635c9b*/
            v15 = *(_WORD *)v9; /*0x635ca4*/
            v16 = *(_BYTE *)(v9 + 2); /*0x635cac*/
            Color::Lerp((unsigned __int8 *)&v15, 0x50u, (unsigned __int8 *)&byte_A83CD9); /*0x635cb4*/
            v10 = (HIBYTE(v15) >> g_BitMask_Blue << g_BitMask_Green) | (v16 >> g_BitMask_Red << g_BitShift_Blue); /*0x635cec*/
            v11 = v15; /*0x635cee*/
            goto LABEL_16; /*0x635cf2*/
          }
        }
        ++v5; /*0x635c53*/
      }
      while ( v5 < v3 ); /*0x635c56*/
      if ( !v4 ) /*0x635c5a*/
        return -1; /*0x635c5a*/
      v12 = v4[135]; /*0x635cf7*/
      v13 = *(_DWORD *)(v12 + 48); /*0x635cfd*/
      if ( (unsigned __int8)House::IsHumanPlayer((#375 *)v12) ) /*0x635d00*/
      {
        if ( HouseClass_Player ) /*0x635d10*/
          v13 = *((_DWORD *)HouseClass_Player + 12); /*0x635d12*/
      }
      v14 = *(_DWORD *)&HouseClass_Array->gap0[4 * v13] + 22265; /*0x635d24*/
      v15 = *(_WORD *)v14; /*0x635d2d*/
      v16 = *(_BYTE *)(v14 + 2); /*0x635d39*/
      Color::Lerp((unsigned __int8 *)&v15, 0x64u, (unsigned __int8 *)&byte_A80220); /*0x635d3d*/
      v10 = (HIBYTE(v15) >> g_BitMask_Blue << g_BitMask_Green) | (v16 >> g_BitMask_Red << g_BitShift_Blue); /*0x635d75*/
      v11 = v15; /*0x635d77*/
  LABEL_16:
      result = (v11 >> g_BitShift_Green_0 << g_BitShift_Red) | v10; /*0x635d7b*/
      *(this + 43) = result; /*0x635d93*/
    }
  }
  return result; /*0x635c60*/
}
}
// 0x635DB0
namespace gamemd {
int TeamClass::Reset(ObjectClass * aP1)
{
  int i; // eax
  int v3; // edx

  LOBYTE(i) = aP1; /*0x635db0*/
  *(this + 45) = -1; /*0x635dba*/
  if ( aP1 ) /*0x635dc0*/
  {
    v3 = *(this + 12); /*0x635dc2*/
    for ( i = 0; i < v3; *(_DWORD *)(*(_DWORD *)(*(this + 9) + 4 * i - 4) + 116) = -1 ) /*0x635dc9*/
      ++i; /*0x635dcf*/
    *(this + 43) = -1; /*0x635ddc*/
  }
  return i; /*0x635de2*/
}
}
// 0x636120
namespace gamemd {
TechnoClass * * TeamClass::RemoveAllMembers()
{
  int v2; // ecx
  int v3; // eax
  int *v4; // esi
  int Value; // eax
  int v6; // ebp
  int v7; // eax
  int v8; // edi
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  unsigned int v12; // esi
  int v13; // eax
  int result; // eax
  bool v15; // [esp+Bh] [ebp-Dh]
  void *Block; // [esp+Ch] [ebp-Ch] BYREF
  int i; // [esp+10h] [ebp-8h]
  int v18; // [esp+14h] [ebp-4h] BYREF

  v2 = *(_DWORD *)(this + 20); /*0x636127*/
  v15 = v2 == 0; /*0x63612c*/
  v3 = 0; /*0x636131*/
  v18 = v2; /*0x636133*/
  for ( i = 0; i < v18; ++i ) /*0x63613d*/
  {
    v4 = *(int **)(*(_DWORD *)(this + 8) + 4 * v3); /*0x636148*/
    Value = Array::FindValue(v4, *(_DWORD *)this); /*0x636150*/
    if ( Value == -1 ) /*0x636158*/
      v6 = 0; /*0x63615a*/
    else
      v6 = *(_DWORD *)(v4[1] + 4 * Value); /*0x636161*/
    Block = (void *)v6; /*0x636166*/
    if ( v6 ) /*0x63616a*/
    {
      if ( *(_BYTE *)(v6 + 12) ) /*0x636170*/
        ScriptAction::DecrementRefCount(v4, v6); /*0x63617a*/
      v7 = *(_DWORD *)(v6 + 8); /*0x63617f*/
      if ( v7 != -1 ) /*0x636185*/
      {
        v8 = *(_DWORD *)(v4[9] + 4 * v7); /*0x63618c*/
        *(_DWORD *)(v8 + 116) = -1; /*0x636191*/
        TeamClass::Reset(v4, 0); /*0x636198*/
        v9 = *(_DWORD *)(v8 + 112) - 1; /*0x6361a0*/
        *(_DWORD *)(v8 + 112) = v9; /*0x6361a1*/
        if ( !v9 ) /*0x6361a4*/
          ScriptQueue::PushEntry(v4); /*0x6361a8*/
      }
      *(_DWORD *)(v6 + 8) = -1; /*0x6361ad*/
      __3_YAXPAX_Z(*((void **)Block + 1)); /*0x6361bc*/
      v10 = (*(int (__thiscall **)(int *, void **))(*v4 + 16))(v4, &Block); /*0x6361cd*/
      if ( v10 != -1 ) /*0x6361d3*/
        Vector4::EraseAt_Copy(v4, v10); /*0x6361d8*/
      __3_YAXPAX_Z(Block); /*0x6361e2*/
      if ( !v4[4] && v4 ) /*0x6361f3*/
      {
        FactoryClass::ClearObjects(v4); /*0x6361f7*/
        Team_Remove((_UNKNOWN **)v4); /*0x6361fe*/
        v4[8] = (int)&VectorClass<PlanningBranchClass *>::`vftable'; /*0x636206*/
        VectorClass::Cleanup2((int)(v4 + 8)); /*0x63620c*/
        *v4 = (int)&VectorClass<PlanningMemberClass *>::`vftable'; /*0x636213*/
        VectorClass_ptr_PlanningMemberClass::Remove((int)v4); /*0x636219*/
        __3_YAXPAX_Z(v4); /*0x63621f*/
      }
    }
    v3 = i + 1; /*0x63622f*/
  }
  if ( !v15 ) /*0x636244*/
  {
    v18 = *(_DWORD *)this; /*0x63624c*/
    v11 = *(_DWORD *)(v18 + 540); /*0x636250*/
    v12 = *(_DWORD *)(v11 + 48); /*0x636256*/
    if ( (unsigned __int8)House::IsHumanPlayer((#375 *)v11) && HouseClass_Player ) /*0x636269*/
      v12 = *((_DWORD *)HouseClass_Player + 12); /*0x63626b*/
    if ( v12 < 0x18 ) /*0x636270*/
      dword_AC4B84[v12] = (dword_AC4B84[v12] - 1) & ((dword_AC4B84[v12] - 1 < 0) - 1); /*0x63628a*/
    v13 = (*(int (__thiscall **)(int *, int *))(dword_AC4C40 + 16))(&dword_AC4C40, &v18); /*0x6362a1*/
    if ( v13 != -1 && v13 < dword_AC4C50 && v13 < --dword_AC4C50 ) /*0x6362be*/
    {
      do /*0x6362d6*/
      {
        ++v13; /*0x6362c6*/
        *((_DWORD *)dword_AC4C44 + v13 - 1) = *((_DWORD *)dword_AC4C44 + v13); /*0x6362ca*/
      }
      while ( v13 < dword_AC4C50 ); /*0x6362d6*/
    }
  }
  result = (*(int (__thiscall **)(int))(*(_DWORD *)(this + 4) + 12))(this + 4); /*0x6362e3*/
  *(_DWORD *)(this + 140) = -1; /*0x6362e6*/
  *(_DWORD *)(this + 144) = -1; /*0x6362ec*/
  *(_DWORD *)(this + 148) = -1; /*0x6362f2*/
  *(_BYTE *)(this + 152) = 0; /*0x6362f8*/
  *(_BYTE *)(this + 153) = 0; /*0x6362ff*/
  return result; /*0x636306*/
}
}
// 0x6367B0
namespace gamemd {
int TeamClass::UpdateBuildQueue(AbstractClass * aP1, TechnoClass * aP2, TechnoClass * aP3)
{
  int *v4; // esi
  int result; // eax
  int v6; // edx
  int v7; // esi
  int v8; // ebp
  int v9; // eax
  int v10; // ecx
  _DWORD **v11; // edx
  int v12; // eax
  _BYTE *v13; // esi
  _BYTE *WaypointCoords; // eax
  _DWORD *v15; // eax
  _DWORD *v16; // ebx
  _BYTE *v17; // eax
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // edx
  int Type; // edi
  int v23; // eax
  int v24; // ecx
  int v25; // eax
  int v26; // edx
  int v27; // [esp+10h] [ebp-84h]
  char v29[8]; // [esp+1Ch] [ebp-78h] BYREF
  _BYTE v30[108]; // [esp+24h] [ebp-70h] BYREF
  __int16 v31; // [esp+90h] [ebp-4h]
  char v32; // [esp+92h] [ebp-2h]

  v4 = this; /*0x6367b7*/
  result = BuildingClass::GetType(aP1); /*0x6367c4*/
  if ( result ) /*0x6367cb*/
  {
    result = aP2; /*0x6367d1*/
    v27 = aP2; /*0x6367e1*/
    if ( aP2 < aP2 + aP3 ) /*0x6367eb*/
    {
      while ( 1 ) /*0x6367fa*/
      {
        v6 = v4[2]; /*0x6367fa*/
        v7 = *v4; /*0x636801*/
        v8 = *(_DWORD *)(v6 + 4 * v27); /*0x636803*/
        v9 = 0; /*0x636806*/
        v10 = *(_DWORD *)(v8 + 16); /*0x636808*/
        if ( v10 <= 0 ) /*0x63680d*/
          goto LABEL_11; /*0x63680d*/
        v11 = *(_DWORD ***)(v8 + 4); /*0x636812*/
        while ( **v11 != v7 ) /*0x636818*/
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
          v12 = *(_DWORD *)(*(_DWORD *)(v8 + 4) + 4 * v9); /*0x63682f*/
  LABEL_13:
        v13 = *(_BYTE **)(v12 + 4); /*0x636832*/
        qmemcpy(v30, v13, sizeof(v30)); /*0x63683e*/
        v13 += 108; /*0x63683e*/
        v31 = *(_WORD *)v13; /*0x636847*/
        v32 = v13[2]; /*0x63684e*/
        WaypointCoords = ScriptAction::GetWaypointCoords(v29, aP1); /*0x63684f*/
        *(_DWORD *)&v30[7] = *(_DWORD *)WaypointCoords; /*0x636858*/
        v30[11] = WaypointCoords[4]; /*0x63685f*/
        v15 = __2_YAPAXI_Z(0x10u); /*0x636863*/
        v16 = 0; /*0x636868*/
        if ( v15 ) /*0x63686f*/
        {
          *v15 = 0; /*0x636871*/
          v15[1] = 0; /*0x636873*/
          *((_BYTE *)v15 + 12) = 0; /*0x636876*/
          v15[2] = -1; /*0x636879*/
          v16 = v15; /*0x636880*/
        }
        *v16 = aP1; /*0x63688b*/
        v17 = __2_YAPAXI_Z(0x6Fu); /*0x63688d*/
        if ( v17 ) /*0x636897*/
          *v17 = 0; /*0x636899*/
        else
          v17 = 0; /*0x63689e*/
        qmemcpy(v17, v30, 0x6Cu); /*0x6368ab*/
        *((_WORD *)v17 + 54) = v31; /*0x6368ad*/
        v17[110] = v32; /*0x6368af*/
        v16[1] = v17; /*0x6368b0*/
        v18 = *(_DWORD *)(v8 + 8); /*0x6368b3*/
        if ( *(_DWORD *)(v8 + 16) < v18 /*0x6368d7*/
          || (*(_BYTE *)(v8 + 13) || !v18)
          && (v19 = *(_DWORD *)(v8 + 20), v19 > 0)
          && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v8 + 8))(v8, v18 + v19, 0) )
        {
          v20 = *(_DWORD *)(v8 + 16); /*0x6368de*/
          v21 = *(_DWORD *)(v8 + 4); /*0x6368e1*/
          *(_DWORD *)(v8 + 16) = v20 + 1; /*0x6368e7*/
          *(_DWORD *)(v21 + 4 * v20) = v16; /*0x6368ea*/
        }
        Type = BuildingClass::GetType(aP1); /*0x6368f9*/
        v23 = *(_DWORD *)(Type + 12); /*0x6368fb*/
        if ( *(_DWORD *)(Type + 20) < v23 /*0x636923*/
          || (*(_BYTE *)(Type + 17) || !v23)
          && (v24 = *(_DWORD *)(Type + 24), v24 > 0)
          && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(Type + 4) + 8))(Type + 4, v23 + v24, 0) )
        {
          v25 = *(_DWORD *)(Type + 20); /*0x63692a*/
          v26 = *(_DWORD *)(Type + 8); /*0x63692d*/
          *(_DWORD *)(Type + 20) = v25 + 1; /*0x636933*/
          *(_DWORD *)(v26 + 4 * v25) = v8; /*0x636936*/
        }
        if ( *(_DWORD *)(Type + 140) == -1 ) /*0x636940*/
          *(_DWORD *)(Type + 140) = *(_DWORD *)(Type + 20) - 1; /*0x636946*/
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
  _DWORD *v3; // ebx
  int v4; // edi
  int result; // eax
  int v6; // ebp
  int v7; // eax
  int v8; // ecx
  _DWORD **v9; // edx
  int v10; // eax
  _BYTE *v11; // esi
  _BYTE *WaypointCoords; // eax
  _DWORD *v13; // eax
  _DWORD *v14; // ebx
  _BYTE *v15; // eax
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // edx
  int Type; // edi
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  int v24; // edx
  int v25; // [esp+10h] [ebp-84h]
  int v27; // [esp+18h] [ebp-7Ch]
  _BYTE v28[8]; // [esp+1Ch] [ebp-78h] BYREF
  _BYTE v29[108]; // [esp+24h] [ebp-70h] BYREF
  __int16 v30; // [esp+90h] [ebp-4h]
  char v31; // [esp+92h] [ebp-2h]

  v3 = this; /*0x636987*/
  v4 = *(this + 5) - a3; /*0x6369a0*/
  result = BuildingClass::GetType(a2); /*0x6369a2*/
  if ( result ) /*0x6369a9*/
  {
    v25 = a3; /*0x6369b1*/
    v27 = a3 + v4; /*0x6369b7*/
    if ( a3 < a3 + v4 ) /*0x6369bb*/
    {
      while ( 1 ) /*0x6369d1*/
      {
        v6 = *(_DWORD *)(v3[2] + 4 * v25); /*0x6369d1*/
        v7 = 0; /*0x6369d4*/
        v8 = *(_DWORD *)(v6 + 16); /*0x6369d6*/
        if ( v8 <= 0 ) /*0x6369db*/
          goto LABEL_11; /*0x6369db*/
        v9 = *(_DWORD ***)(v6 + 4); /*0x6369e0*/
        while ( **v9 != *v3 ) /*0x6369e6*/
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
          v10 = *(_DWORD *)(*(_DWORD *)(v6 + 4) + 4 * v7); /*0x6369fd*/
  LABEL_13:
        v11 = *(_BYTE **)(v10 + 4); /*0x636a00*/
        qmemcpy(v29, v11, sizeof(v29)); /*0x636a13*/
        v11 += 108; /*0x636a13*/
        v30 = *(_WORD *)v11; /*0x636a15*/
        v31 = v11[2]; /*0x636a1c*/
        WaypointCoords = ScriptAction::GetWaypointCoords(v28, a2); /*0x636a1d*/
        *(_DWORD *)&v29[7] = *(_DWORD *)WaypointCoords; /*0x636a26*/
        v29[11] = WaypointCoords[4]; /*0x636a2d*/
        v13 = __2_YAPAXI_Z(0x10u); /*0x636a31*/
        v14 = 0; /*0x636a36*/
        if ( v13 ) /*0x636a3d*/
        {
          *v13 = 0; /*0x636a3f*/
          v13[1] = 0; /*0x636a41*/
          *((_BYTE *)v13 + 12) = 0; /*0x636a44*/
          v13[2] = -1; /*0x636a47*/
          v14 = v13; /*0x636a4e*/
        }
        *v14 = a2; /*0x636a59*/
        v15 = __2_YAPAXI_Z(0x6Fu); /*0x636a5b*/
        if ( v15 ) /*0x636a65*/
          *v15 = 0; /*0x636a67*/
        else
          v15 = 0; /*0x636a6c*/
        qmemcpy(v15, v29, 0x6Cu); /*0x636a79*/
        *((_WORD *)v15 + 54) = v30; /*0x636a7b*/
        v15[110] = v31; /*0x636a7d*/
        v14[1] = v15; /*0x636a7e*/
        v16 = *(_DWORD *)(v6 + 8); /*0x636a81*/
        if ( *(_DWORD *)(v6 + 16) < v16 /*0x636aa5*/
          || (*(_BYTE *)(v6 + 13) || !v16)
          && (v17 = *(_DWORD *)(v6 + 20), v17 > 0)
          && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v6 + 8))(v6, v16 + v17, 0) )
        {
          v18 = *(_DWORD *)(v6 + 16); /*0x636aac*/
          v19 = *(_DWORD *)(v6 + 4); /*0x636aaf*/
          *(_DWORD *)(v6 + 16) = v18 + 1; /*0x636ab5*/
          *(_DWORD *)(v19 + 4 * v18) = v14; /*0x636ab8*/
        }
        Type = BuildingClass::GetType(a2); /*0x636ac7*/
        v21 = *(_DWORD *)(Type + 12); /*0x636ac9*/
        if ( *(_DWORD *)(Type + 20) < v21 /*0x636af1*/
          || (*(_BYTE *)(Type + 17) || !v21)
          && (v22 = *(_DWORD *)(Type + 24), v22 > 0)
          && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)(Type + 4) + 8))(Type + 4, v21 + v22, 0) )
        {
          v23 = *(_DWORD *)(Type + 20); /*0x636af8*/
          v24 = *(_DWORD *)(Type + 8); /*0x636afb*/
          *(_DWORD *)(Type + 20) = v23 + 1; /*0x636b01*/
          *(_DWORD *)(v24 + 4 * v23) = v6; /*0x636b04*/
        }
        if ( *(_DWORD *)(Type + 140) == -1 ) /*0x636b0e*/
          *(_DWORD *)(Type + 140) = *(_DWORD *)(Type + 20) - 1; /*0x636b14*/
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
CampaignClass * * TeamClass::Cleanup(BuildingClass * aP1)
{
  int v3; // ebx
  int v4; // eax
  int v5; // ebp
  int v6; // eax
  int v7; // eax
  int *v8; // esi
  int Value; // eax
  int v10; // eax
  int v11; // ebx
  int v12; // eax
  int v13; // eax
  int result; // eax
  int v15; // ecx
  void *Block; // [esp+8h] [ebp-4h] BYREF

  if ( *(this + 5) == 1 ) /*0x636b59*/
  {
    *(this + 35) = -1; /*0x636b5b*/
  LABEL_3:
    v3 = aP1; /*0x636b65*/
    goto LABEL_4; /*0x636b65*/
  }
  v6 = *(this + 35); /*0x636b84*/
  if ( v6 <= 0 ) /*0x636b8c*/
    goto LABEL_3; /*0x636b8c*/
  v3 = aP1; /*0x636b8e*/
  if ( aP1 < v6 ) /*0x636b94*/
    *(this + 35) = v6 - 1; /*0x636b97*/
  LABEL_4:
  v4 = *(this + 37); /*0x636b69*/
  v5 = 0; /*0x636b70*/
  if ( v4 >= 0 ) /*0x636b75*/
  {
    if ( v3 >= v4 ) /*0x636b79*/
    {
      v7 = *(this + 36) - 1; /*0x636ba6*/
      *(this + 36) = v7; /*0x636ba8*/
      if ( v7 < 3 ) /*0x636bb1*/
      {
        *(this + 37) = -1; /*0x636bb3*/
        *(this + 36) = 0; /*0x636bbd*/
      }
    }
    else
    {
      *(this + 37) = v4 - 1; /*0x636b7c*/
    }
  }
  v8 = *(int **)(*(this + 2) + 4 * v3); /*0x636bc6*/
  Value = Array::FindValue(v8, *this); /*0x636bce*/
  if ( Value != -1 ) /*0x636bd6*/
    v5 = *(_DWORD *)(v8[1] + 4 * Value); /*0x636bdb*/
  Block = (void *)v5; /*0x636be0*/
  if ( v5 ) /*0x636be4*/
  {
    if ( *(_BYTE *)(v5 + 12) ) /*0x636bea*/
      ScriptAction::DecrementRefCount(v8, v5); /*0x636bf4*/
    v10 = *(_DWORD *)(v5 + 8); /*0x636bf9*/
    if ( v10 != -1 ) /*0x636bff*/
    {
      v11 = *(_DWORD *)(v8[9] + 4 * v10); /*0x636c08*/
      *(_DWORD *)(v11 + 116) = -1; /*0x636c0b*/
      TeamClass::Reset(v8, 0); /*0x636c12*/
      v12 = *(_DWORD *)(v11 + 112) - 1; /*0x636c1a*/
      *(_DWORD *)(v11 + 112) = v12; /*0x636c1b*/
      if ( !v12 ) /*0x636c1e*/
        ScriptQueue::PushEntry(v8); /*0x636c22*/
      v3 = aP1; /*0x636c27*/
    }
    *(_DWORD *)(v5 + 8) = -1; /*0x636c2b*/
    __3_YAXPAX_Z(*((void **)Block + 1)); /*0x636c3a*/
    v13 = (*(int (__thiscall **)(int *, void **))(*v8 + 16))(v8, &Block); /*0x636c4b*/
    if ( v13 != -1 ) /*0x636c51*/
      Vector4::EraseAt_Copy(v8, v13); /*0x636c56*/
    __3_YAXPAX_Z(Block); /*0x636c60*/
    if ( !v8[4] && v8 ) /*0x636c71*/
    {
      FactoryClass::ClearObjects(v8); /*0x636c75*/
      Team_Remove((_UNKNOWN **)v8); /*0x636c7c*/
      v8[8] = (int)&VectorClass<PlanningBranchClass *>::`vftable'; /*0x636c84*/
      VectorClass::Cleanup2((int)(v8 + 8)); /*0x636c8a*/
      *v8 = (int)&VectorClass<PlanningMemberClass *>::`vftable'; /*0x636c91*/
      VectorClass_ptr_PlanningMemberClass::Remove((int)v8); /*0x636c97*/
      __3_YAXPAX_Z(v8); /*0x636c9d*/
    }
  }
  result = *(this + 5); /*0x636ca5*/
  if ( v3 < result ) /*0x636cac*/
  {
    v15 = result - 1; /*0x636cae*/
    result = v3; /*0x636cb1*/
    for ( *(this + 5) = v15; /*0x636cb8*/
          result < *(this + 5);
          *(_DWORD *)(*(this + 2) + 4 * result - 4) = *(_DWORD *)(*(this + 2) + 4 * result) )
    {
      ++result; /*0x636cbd*/
    }
  }
  return result; /*0x636ccc*/
}
}
// 0x6E52A0
namespace gamemd {
void * TeamClass::FindOrCreate()
{
  int v2; // ecx
  char *v3; // edx
  int result; // eax

  v2 = 0; /*0x6e52aa*/
  if ( g_GameObjectCleanup <= 0 ) /*0x6e52ae*/
  {
  LABEL_5:
    if ( __2_YAPAXI_Z(0x38u) ) /*0x6e52c7*/
      return TeknoClass::GetType(this); /*0x6e52d6*/
    else
      return 0; /*0x6e52de*/
  }
  else
  {
    v3 = (char *)g_TagClassCount; /*0x6e52b0*/
    while ( 1 ) /*0x6e52b6*/
    {
      result = *(_DWORD *)v3; /*0x6e52b6*/
      if ( *(void **)(*(_DWORD *)v3 + 36) == this ) /*0x6e52bb*/
        break; /*0x6e52bb*/
      ++v2; /*0x6e52bd*/
      v3 += 4; /*0x6e52be*/
      if ( v2 >= g_GameObjectCleanup ) /*0x6e52c3*/
        goto LABEL_5; /*0x6e52c3*/
    }
  }
  return result; /*0x6e52db*/
}
}
// 0x6E53A0
namespace gamemd {
int TeamClass::Update_0(int aP1, AbstractClass * aP2, IUnknown * aP3, AbstractClass * aP4, AbstractClass * aP5)
{
  char v6; // bl
  int v8; // esi
  int v9; // eax
  int v10; // eax
  int v11; // eax
  char v13; // [esp+Ah] [ebp-2h]
  char v14; // [esp+Bh] [ebp-1h]

  v6 = 0; /*0x6e53a7*/
  v14 = 0; /*0x6e53ae*/
  v13 = 0; /*0x6e53b2*/
  if ( g_ArmageddonMode || *((_BYTE *)this + 53) || *((_BYTE *)this + 52) || !*(this + 9) ) /*0x6e53d2*/
    return 0; /*0x6e5552*/
  v8 = (int)*(this + 10); /*0x6e53de*/
  for ( *((_BYTE *)this + 53) = 1; v8; v8 = *(_DWORD *)(v8 + 40) ) /*0x6e53ec*/
  {
    if ( (unsigned __int8)TriggerClass::RegisterEvent(aP1, aP2, aP4, *((_DWORD *)*(this + 9) + 39) == 2, aP5) ) /*0x6e5414*/
    {
      v9 = *((_DWORD *)*(this + 9) + 39); /*0x6e5420*/
      if ( !v9 ) /*0x6e5429*/
      {
        BuildingClass::ExecuteTriggers(aP2, aP3); /*0x6e546d*/
        TeamClass::AddToBuildQueue(v8); /*0x6e5474*/
        v6 = 1; /*0x6e5479*/
        v14 = 1; /*0x6e547b*/
  LABEL_14:
        v13 = 1; /*0x6e547f*/
        continue; /*0x6e547f*/
      }
      v10 = v9 - 1; /*0x6e542b*/
      if ( v10 ) /*0x6e542c*/
      {
        if ( v10 == 1 ) /*0x6e542f*/
        {
          BuildingClass::ExecuteTriggers(aP2, aP3); /*0x6e5439*/
          v6 = 1; /*0x6e543e*/
        }
        continue; /*0x6e5440*/
      }
      if ( *(this + 11) != (void *)1 ) /*0x6e5446*/
        goto LABEL_14; /*0x6e5446*/
      BuildingClass::ExecuteTriggers(aP2, aP3); /*0x6e5450*/
      TeamClass::AddToBuildQueue(v8); /*0x6e5457*/
      v14 = 1; /*0x6e545c*/
      v6 = 1; /*0x6e5461*/
    }
  }
  *((_BYTE *)this + 53) = 0; /*0x6e548f*/
  if ( v13 ) /*0x6e5499*/
  {
    if ( aP2 && *(void ***)(aP2 + 52) == this ) /*0x6e54a2*/
      ObjectClass::SetReference(0); /*0x6e54a8*/
    if ( aP3 != dword_B0E700 ) /*0x6e54b9*/
    {
      CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&aP3); /*0x6e54d5*/
      ObjectClass::SetTriggerTarget(0); /*0x6e54dc*/
    }
  }
  if ( v14 ) /*0x6e54e9*/
  {
    AbstractClass::AnnounceExpiredPointer(this); /*0x6e54ef*/
    if ( g_LaserDrawConfig < dword_B0F6A0 /*0x6e552a*/
      || (byte_B0F6A5 || !dword_B0F6A0)
      && dword_B0F6AC > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_DiskLaserManager + 8))(
           &g_DiskLaserManager,
           dword_B0F6A0 + dword_B0F6AC,
           0) )
    {
      v11 = g_LaserDrawConfig++; /*0x6e5537*/
      *((_DWORD *)dword_B0F69C + v11) = this; /*0x6e5546*/
    }
  }
  return v6; /*0x6e554b*/
}
}
// 0x6E8DE0
namespace gamemd {
void TeamClass::Destructor(void ** this, AbstractClass * a2)
{
  int v2; // edi
  int v3; // ecx
  int v4; // eax
  int i; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  void **v14; // [esp+10h] [ebp-4h] BYREF

  v2 = 0; /*0x6e8de5*/
  *this = &TeamClass::`vftable'; /*0x6e8de7*/
  *(this + 1) = &TeamClass::`vftable'; /*0x6e8ded*/
  *(this + 2) = &TeamClass::`vftable'; /*0x6e8df4*/
  for ( *(this + 3) = &TeamClass::`vftable'; v2 < g_AnimTypeInitQueue; ++v2 ) /*0x6e8e09*/
  {
    if ( *(void **)(*((_DWORD *)dword_A8B204 + v2) + 220) == *(this + 9) ) /*0x6e8e1e*/
    {
      if ( *((_BYTE *)this + 132) ) /*0x6e8e20*/
        AITriggerTypeClass::RegisterSuccess(); /*0x6e8e2a*/
      else
        AITriggerTypeClass::RegisterFailure(); /*0x6e8e31*/
    }
  }
  v3 = (int)*(this + 11); /*0x6e8e40*/
  if ( v3 ) /*0x6e8e45*/
  {
    v4 = (int)*(this + 9); /*0x6e8e47*/
    if ( v4 ) /*0x6e8e4c*/
    {
      if ( *(_BYTE *)(v4 + 246) ) /*0x6e8e4e*/
        --*(_DWORD *)(v3 + 22124); /*0x6e8e58*/
    }
  }
  if ( g_WTFMode && *(this + 9) ) /*0x6e8e67*/
  {
    for ( i = (int)*(this + 21); i; i = (int)*(this + 21) ) /*0x6e8e73*/
      TeamClass::LiberateMember_Start(i, -1, 0); /*0x6e8e7c*/
    --*((_DWORD *)*(this + 9) + 55); /*0x6e8e92*/
    v6 = (int)*(this + 28); /*0x6e8e98*/
    if ( v6 ) /*0x6e8e9d*/
    {
      if ( !*(_DWORD *)(v6 + 44) ) /*0x6e8e9f*/
        TagClass::Destroy(); /*0x6e8ea6*/
      *(this + 28) = 0; /*0x6e8eab*/
    }
  }
  AbstractClass::AnnounceExpiredPointer(this); /*0x6e8eb6*/
  v14 = this; /*0x6e8ecb*/
  v7 = (*(int (__thiscall **)(int *, void ***))(dword_B0F6F0 + 16))(&dword_B0F6F0, &v14); /*0x6e8ecf*/
  if ( v7 != -1 && v7 < dword_B0F700 && v7 < --dword_B0F700 ) /*0x6e8eea*/
  {
    do /*0x6e8f02*/
    {
      ++v7; /*0x6e8ef2*/
      *((_DWORD *)dword_B0F6F4 + v7 - 1) = *((_DWORD *)dword_B0F6F4 + v7); /*0x6e8ef6*/
    }
    while ( v7 < dword_B0F700 ); /*0x6e8f02*/
  }
  v14 = this; /*0x6e8f14*/
  v8 = (*(int (__thiscall **)(int *, void ***))(AbstractClass_Array + 16))(&AbstractClass_Array, &v14); /*0x6e8f18*/
  if ( v8 != -1 && v8 < g_AlphaShapePool && v8 < --g_AlphaShapePool ) /*0x6e8f33*/
  {
    do /*0x6e8f4b*/
    {
      ++v8; /*0x6e8f3b*/
      *((_DWORD *)dword_B0F724 + v8 - 1) = *((_DWORD *)dword_B0F724 + v8); /*0x6e8f3f*/
    }
    while ( v8 < g_AlphaShapePool ); /*0x6e8f4b*/
  }
  v14 = this; /*0x6e8f5d*/
  v9 = (*(int (__thiscall **)(int *, void ***))(g_AnimPoolManager + 16))(&g_AnimPoolManager, &v14); /*0x6e8f61*/
  if ( v9 != -1 && v9 < g_AnimManager && v9 < --g_AnimManager ) /*0x6e8f7c*/
  {
    do /*0x6e8f94*/
    {
      ++v9; /*0x6e8f84*/
      *((_DWORD *)g_AnimPoolCount + v9 - 1) = *((_DWORD *)g_AnimPoolCount + v9); /*0x6e8f88*/
    }
    while ( v9 < g_AnimManager ); /*0x6e8f94*/
  }
  v14 = this; /*0x6e8fa6*/
  v10 = (*(int (__thiscall **)(int *, void ***))(dword_B0F618 + 16))(&dword_B0F618, &v14); /*0x6e8faa*/
  if ( v10 != -1 && v10 < dword_B0F628 && v10 < --dword_B0F628 ) /*0x6e8fc5*/
  {
    do /*0x6e8fdd*/
    {
      ++v10; /*0x6e8fcd*/
      *((_DWORD *)dword_B0F61C + v10 - 1) = *((_DWORD *)dword_B0F61C + v10); /*0x6e8fd1*/
    }
    while ( v10 < dword_B0F628 ); /*0x6e8fdd*/
  }
  v14 = this; /*0x6e8fef*/
  v11 = (*(int (__thiscall **)(int *, void ***))(TeamClass_Array + 16))(&TeamClass_Array, &v14); /*0x6e8ff3*/
  if ( v11 != -1 && v11 < g_HouseClass_AIProductionState && v11 < --g_HouseClass_AIProductionState ) /*0x6e900e*/
  {
    do /*0x6e9026*/
    {
      ++v11; /*0x6e9016*/
      *((_DWORD *)g_TeamClassPool + v11 - 1) = *((_DWORD *)g_TeamClassPool + v11); /*0x6e901a*/
    }
    while ( v11 < g_HouseClass_AIProductionState ); /*0x6e9026*/
  }
  if ( *((_BYTE *)this + 116) ) /*0x6e9028*/
  {
    v12 = (int)*(this + 9); /*0x6e902f*/
    if ( v12 ) /*0x6e9034*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v12 + 32))(v12, 1); /*0x6e903a*/
  }
  return AbstractClass::DTOR(this); /*0x6e9044*/
}
}
// 0x6E9140
namespace gamemd {
void TeamClass::Update(TechnoClass * aP0, unsigned int * a1, int j)
{
{
  int *countObjects; // ebp
  int jj; // edi
  TeamClass *esi1; // esi
  TimerStruct *v4; // edx
  int eax2; // eax
  FootClass *v6; // eax
  FootClass *v8; // ecx
  int i; // edi
  char cl48; // cl
  char stepCompleted; // al
  ScriptClass *v13; // ecx
  int *Entry; // eax
  FootClass *n; // edi
  int eax71; // eax
  FootClass *ii; // edi
  int eax77; // eax
  FootClass *v20; // edi
  FootClass *v24; // ebp
  CellClass *v22; // eax
  AbstractClass *MapSpawnCell; // eax
  FootClass *m; // edi
  FootClass *v25; // edi
  FootClass *nextTeamMember; // ebp
  int Owner; // eax
  int eax107; // eax
  FootClass *k; // edi
  ScriptClass *v32; // ecx
  AbstractClass *eax116; // eax
  AbstractClass *eax117; // eax
  FootClass *v35; // edi
  FootClass *v36; // edi
  FootClass *v37; // edi
  FootClass *v39; // edi
  char cl148; // cl
  int edx153; // edx
  _DWORD *eax161; // eax
  FootClass *v43; // edi
  FootClass *v44; // edi
  FootClass *v45; // eax
  FootClass *v46; // edi
  FootClass *v51; // ebp
  FootClass *v49; // edi
  FootClass *v54; // ebp
  FootClass *v52; // edi
  FootClass *v57; // ebp
  FootClass *v55; // edi
  FootClass *v60; // ebp
  FootClass *v58; // edi
  FootClass *v63; // ebp
  TeamClass *aP2; // [esp+10h] [ebp-28h] BYREF
  int GroundHeight; // [esp+1Ch] [ebp-1Ch]
  AbstractClass *v68; // [esp+24h] [ebp-14h]
  int v3; // ecx
  esi1 = (TeamClass *)v3;
  if ( *(_BYTE *)(v3 + 131) )
  {
    v4 = *(TimerStruct **)(v3 + 100);
    eax2 = *(_DWORD *)(v3 + 108);
    if ( v4 != (TimerStruct *)-1 )
    {
      if ( *(_DWORD *)&HouseClass_Player[45112] - (int)v4 >= eax2 )
      {
LABEL_6:
        *(_BYTE *)(v3 + 131) = 0;
        goto LABEL_7;
      }
      eax2 -= *(_DWORD *)&HouseClass_Player[45112] - (_DWORD)v4;
    }
    if ( eax2 )
      return;
    goto LABEL_6;
  }
LABEL_7:
  if ( *(_BYTE *)(v3 + 125) && !TeamClass::UpdateReadinessState((void *)v3) )
    return;
  if ( !esi1->TeamClass_field_7F )
    goto LABEL_224;
  if ( esi1->TeamClass_field_7A )
    SelectTeamProductionBuilding((int)esi1);
  if ( !esi1->TeamClass_field_7F )
  {
LABEL_224:
    if ( esi1->unknown79 || esi1->unknown77 )
    {
      v6 = (FootClass *)esi1->firstUnit;
      esi1->TeamClass_field_7F = 1;
      esi1->spawnStatus = 1;
      for ( esi1->TeamClass_field_7A = 0; v6; v6 = (FootClass *)v6->nextTeamMember )
      {
        if ( esi1->TeamClass_field_7B || esi1->unknown77 )
          v6->isTeamLeader = 1;
      }
      SetLandTypeMap((_DWORD *)esi1->currentScript);
      esi1->stepCompleted = 1;
    }
  }
  if ( esi1->TeamClass_field_7B || esi1->TeamClass_field_7F || !esi1->spawnCell || !esi1->unknown38 )
    TeamClass::FindClosestEnemy((int)esi1, (AbstractClass *)&esi1->spawnCell, (AbstractClass *)&esi1->unknown38);
  if ( (!esi1->TeamClass_field_7F || !esi1->unknown79 && *((_BYTE *)esi1->buildingType + 171))
    && (!(unsigned __int8)House::IsCurrentPlayer((#375 *)esi1->owner) || !esi1->spawnStatus) )
  {
    jj = 0;
    int v10 = *((_DWORD *)esi1->buildingType + 57);
    if ( *(int *)(v10 + 156) > 0 )
    {
      countObjects = esi1->countObjects;
      do
      {
        if ( *countObjects < *(_DWORD *)(v10 + 8 * jj + 164) )
          TeamClass::RecruitMember(esi1, jj);
        ++jj;
        ++countObjects;
        v10 = *((_DWORD *)esi1->buildingType + 57);
      }
      while ( jj < *(_DWORD *)(v10 + 156) );
    }
  }
  v8 = (FootClass *)esi1->firstUnit;
  if ( !v8 )
  {
    if ( esi1->spawnStatus
      || *(_DWORD *)&HouseClass_Player[29932]
      && (jj = *(_DWORD *)(*(_DWORD *)&stru_87C374[44652] + 4496),
          *(_DWORD *)&HouseClass_Player[45112] - esi1->creationFrame > jj) )
    {
      if ( esi1->unknown82 )
      {
        for ( i = 0; i < *(int *)&stru_89E138[90016]; ++i )
        {
          if ( TeamClass::Update_0(
                 *(void ***)(*(_DWORD *)&stru_89E138[90004] + 4 * i),
                 23,
                 0,
                 *(IUnknown **)&stru_B05488[38080],
                 0,
                 0) )
          {
            --i;
            if ( !*(_DWORD *)&stru_89E138[90016] )
              break;
          }
        }
      }
LABEL_112:
      if ( esi1 )
        (*(void (__thiscall **)(TeamClass *, int))(*(_DWORD *)esi1->__pad_0 + 32))(esi1, 1);
      return;
    }
    goto LABEL_49;
  }
  if ( !(*(unsigned __int8 (__thiscall **)(FootClass *))(*(_DWORD *)v8->__pad_0 + 472))(v8) )
  {
LABEL_49:
    cl48 = 0;
    goto LABEL_50;
  }
  cl48 = 1;
LABEL_50:
  if ( !esi1->TeamClass_field_7F )
  {
LABEL_91:
    TeamClass::UpdateMembers((int)esi1);
    return;
  }
  if ( esi1->TeamClass_field_7B || esi1->TeamClass_field_7A || cl48 )
  {
    esi1->TeamClass_field_7B = HouseClass::EvaluateTarget((int)esi1) == 0;
    return;
  }
  stepCompleted = esi1->stepCompleted;
  char v15 = 0;
  LOBYTE(aP2) = 0;
  if ( stepCompleted )
  {
    v15 = 1;
    esi1->stepCompleted = 0;
    v13 = (ScriptClass *)esi1->currentScript;
    LOBYTE(aP2) = 1;
    TeamClass::Check(v13);
    for ( jj = (int)esi1->firstUnit; jj; jj = *(_DWORD *)(jj + 1496) )
    {
      if ( *((_BYTE *)esi1->buildingType + 244)
        && *(int *)((*(int (__thiscall **)(int))(*(_DWORD *)jj + 132))(jj) + 1504) > 0 )
      {
        if ( *(_DWORD *)(jj + 536) )
          Debug::Log();
      }
      else
      {
        TechnoClass::SetFocus((_DWORD *)jj, 0);
      }
    }
    if ( !SessionClass::SetField((_DWORD *)esi1->currentScript) )
      goto LABEL_112;
    TeamClass::SelectMember((int)esi1, 0);
    esi1->focus = 0;
  }
  else if ( !esi1->focus )
  {
    esi1->focus = esi1->queuedFocus;
  }
  if ( esi1->unknown81 )
  {
    v15 = 1;
    LOBYTE(aP2) = 1;
    esi1->unknown81 = 0;
    TeamClass::SelectMember((int)esi1, 0);
    esi1->focus = 0;
  }
  _DWORD v65[2]; // [esp+14h] [ebp-24h] BYREF
  Entry = SessionClass::GetEntry((_DWORD *)esi1->currentScript, (IUnknown *)v65);
  int v67 = *Entry;
  int v18 = Entry[1];
  v68 = (AbstractClass *)v18;
  switch ( v67 )
  {
  _BYTE v69[12]; // [esp+2Ch] [ebp-Ch] BYREF
    case 0:
      TeamClass::CoordinateSuperWeaponAttack((int)esi1, (ScriptClass *)&v67, (int)aP2);
      return;
    case 1:
      TeamClass::SelectWaypointTarget((int)esi1, (TeamClass *)&v67, (char)aP2);
      return;
    case 3:
      TeamClass::MoveTeamToWaypoint((int **)esi1, (ScriptClass *)&v67, aP2);
      return;
    case 4:
      if ( !v15 )
        goto LABEL_91;
      LOWORD(aP2) = v18 % 128;
      HIWORD(aP2) = v18 / 128;
      MapSpawnCell = (AbstractClass *)CellCoord::To_CellObj(&stru_87C374[13428], (__int16 *)&aP2);
      goto LABEL_90;
    case 5:
      if ( v15 )
      {
        esi1->guardAreaTimer[0] = *(_DWORD *)&HouseClass_Player[45112];
        esi1->guardAreaTimer[1] = (int)v68;
        esi1->guardAreaTimer[2] = 15 * v18;
      }
      HouseClass::EvaluateTarget((int)esi1);
      if ( !CDTimerClass::TimeRemaining(esi1->guardAreaTimer) )
        esi1->stepCompleted = 1;
      return;
    case 6:
      TeamClass::SetField11((_DWORD *)esi1->currentScript, (ScriptClass *)(v18 - 2));
      esi1->stepCompleted = 1;
      return;
    case 7:
      HouseClass::CheckWinCondition(HouseClass_Player.field_0, 0);
      esi1->stepCompleted = 1;
      return;
    case 8:
      DispatchTeamOrders((ObjectClass **)esi1, (int)&v67, (int)aP2);
      return;
    case 9:
      TechnoClass::ProcessBorderTower((int)esi1, v15, jj, (int)&v67, (int)aP2);
      return;
    case 10:
      TeamClass::AssignAttackTarget((int)esi1, (TeamClass *)&v67, (IUnknown *)aP2);
      return;
    case 11:
      Mission::AssignTeamMemberMissions((int)esi1, (ScriptClass *)&v67, (int)aP2);
      return;
    case 12:
      ScenarioClass::SetGlobalToByID(*(_BYTE **)&HouseClass_Player[29924], v18, 1);
      goto LABEL_82;
    case 13:
      v36 = (FootClass *)esi1->firstUnit;
      if ( !v36 )
        goto LABEL_82;
      while ( 1 )
      {
        (*(void (__thiscall **)(FootClass *, int))(*(_DWORD *)v36->__pad_0 + 1312))(v36, v18);
        v36 = (FootClass *)v36->nextTeamMember;
        if ( !v36 )
          break;
        v18 = (int)v68;
      }
      esi1->stepCompleted = 1;
      return;
    case 14:
      AssignTeamProductionFacilities((int **)esi1, (ScriptClass *)&v67, (int)aP2);
      return;
    case 15:
      TeamClass::AssignMemberToCoordinator((int)esi1, (ScriptClass *)&v67, aP2);
      return;
    case 16:
      TeamClass::MoveToCellAndAttack(esi1, (ScriptClass *)&v67, (char)aP2);
      return;
    case 17:
      v32 = (ScriptClass *)esi1->currentScript;
      if ( v32 )
        (*(void (__thiscall **)(ScriptClass *, int))(*(_DWORD *)v32->__pad_0 + 32))(v32, 1);
      eax116 = (AbstractClass *)__2_YAPAXI_Z(0x30u);
      if ( eax116 )
      {
        eax117 = ScriptClass::Construct(eax116, *((AbstractClass **)unk_8B41CC + (_DWORD)v68));
        esi1->currentScript = eax117;
        SetLandTypeMap(eax117);
      }
      else
      {
        esi1->currentScript = 0;
        SetLandTypeMap(0);
      }
      return;
    case 18:
      eax107 = __2_YAPAXI_Z(0xA0u);
      if ( eax107 )
  int v33; // ebp
        v33 = MissionClass::Construct(
                eax107,
                *(AbstractClass **)(*(_DWORD *)&HouseClass_Player[44888] + 4 * (_DWORD)v68),
                (AbstractClass *)esi1->owner,
                0);
      else
        v33 = 0;
      for ( k = (FootClass *)esi1->firstUnit; k; k = (FootClass *)esi1->firstUnit )
      {
        TeamClass::LiberateMember_Start((int)esi1, (IUnknown *)k, 0xFFFFFFFF, 0);
        TeamClass::AddMember(v33, (IUnknown *)k, 0);
      }
      goto LABEL_112;
    case 19:
      v35 = (FootClass *)esi1->firstUnit;
      if ( !v35 )
        goto LABEL_82;
      do
      {
        (*(void (__thiscall **)(FootClass *))(*(_DWORD *)v35->__pad_0 + 1304))(v35);
        v35 = (FootClass *)v35->nextTeamMember;
      }
      while ( v35 );
      esi1->stepCompleted = 1;
      return;
    case 20:
      v25 = (FootClass *)esi1->firstUnit;
      if ( v25 )
      {
        while ( 1 )
        {
          nextTeamMember = (FootClass *)v25->nextTeamMember;
          int v30 = *(_DWORD *)v25->__pad_0;
          Owner = HouseClass::FindOwner((void *)v18);
          (*(void (__thiscall **)(FootClass *, int, int))(v30 + 980))(v25, Owner, 1);
          v25 = nextTeamMember;
          if ( !nextTeamMember )
            break;
          v18 = (int)v68;
        }
      }
      esi1->stepCompleted = 1;
      return;
    case 21:
      for ( m = (FootClass *)esi1->firstUnit; m; m = (FootClass *)m->nextTeamMember )
        (*(void (__thiscall **)(FootClass *, char *, int, _DWORD))(*(_DWORD *)m->__pad_0 + 372))(
          m,
          &stru_B05488[38112],
          1,
          0);
      esi1->stepCompleted = 1;
      return;
    case 22:
      if ( !v15 )
        goto LABEL_91;
      v22 = (CellClass *)esi1->spawnCell;
      if ( !v22 )
        v22 = (CellClass *)esi1->firstUnit;
      MapSpawnCell = (AbstractClass *)FindMapSpawnCell(&stru_87C374[13428], (FootClass *)v22);
LABEL_90:
      TeamClass::SelectMember((int)esi1, MapSpawnCell);
      goto LABEL_91;
    case 23:
      HouseClass::CheckDefeat(HouseClass_Player.field_0, 0);
      esi1->stepCompleted = 1;
      return;
    case 24:
      goto LABEL_74;
    case 25:
      PlayVocClass(v18, 0x2000, 1.0, 0);
      esi1->stepCompleted = 1;
      return;
    case 26:
      Movie::PlayWrapper(v18, (int)countObjects, jj, 1, 1, 1);
      esi1->stepCompleted = 1;
      return;
    case 27:
      Theme::QueueSong((int)&g_BuildingTypeClass_Count, (IUnknown *)v18);
      esi1->stepCompleted = 1;
      return;
    case 28:
      v37 = (FootClass *)esi1->firstUnit;
      if ( !v37 )
        goto LABEL_82;
      do
      {
        _DWORD * v41 = (_DWORD *)(*(int (__thiscall **)(FootClass *, _BYTE *))(*(_DWORD *)v37->__pad_0 + 72))(v37, v69);
        LOWORD(aP2) = *v41 / 256;
        HIWORD(aP2) = v41[1] / 256;
        v65[0] = aP2;
        MapClass::TriggerEVA((IUnknown *)v65);
        v37 = (FootClass *)v37->nextTeamMember;
      }
      while ( v37 );
      esi1->stepCompleted = 1;
      return;
    case 29:
      *((_BYTE *)esi1->owner + 494) = 1;
      esi1->stepCompleted = 1;
      return;
    case 30:
      *((_DWORD *)esi1->owner + 148) = 4;
      esi1->stepCompleted = 1;
      return;
    case 31:
      do
      {
        v39 = (FootClass *)esi1->firstUnit;
        cl148 = 0;
        if ( !v39 )
        {
LABEL_82:
          esi1->stepCompleted = 1;
          return;
        }
        do
        {
          if ( v39->health > 0 && v39->isAliveFlag && v39->isOnMap && !v39->inLimbo )
          {
            edx153 = *(_DWORD *)v39->__pad_0;
            v65[0] = v39->health;
            (*(void (__thiscall **)(FootClass *, _DWORD *, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD))(edx153 + 364))(
              v39,
              v65,
              0,
              *(_DWORD *)(*(_DWORD *)&stru_87C374[44652] + 4008),
              0,
              1,
              0,
              0);
            cl148 = 1;
          }
          v39 = (FootClass *)v39->nextTeamMember;
        }
        while ( v39 );
      }
      while ( cl148 );
      esi1->stepCompleted = 1;
      return;
    case 32:
      if ( LightningStorm::IsActive() )
        goto LABEL_82;
      LightningStorm::Start(
        (int)v68,
        *(_DWORD *)(*(_DWORD *)&stru_87C374[44652] + 6036),
        *(int *)&stru_B05488[38080],
        0);
      esi1->stepCompleted = 1;
      return;
    case 33:
      if ( !LightningStorm::IsActive() )
        goto LABEL_82;
      LightningStorm::End();
      esi1->stepCompleted = 1;
      return;
    case 34:
      eax161 = (_DWORD *)(*(int (__thiscall **)(void *, _BYTE *))(esi1->spawnCell->q048)(
                           esi1->spawnCell,
                           v69);
      v65[0] = *eax161;
      v65[1] = eax161[1];
      GroundHeight = eax161[2];
      GroundHeight = Cell::GetGroundHeight((IUnknown *)v65);
      if ( (*((_DWORD *)Coord::To_Cell(&stru_87C374[13428], (IUnknown *)v65) + 80) & 0x100) != 0
        || (*((_DWORD *)Coord::To_Cell(&stru_87C374[13428], (IUnknown *)v65) + 80) & 0x400) != 0 )
      {
        GroundHeight += *(_DWORD *)&stru_B05488[38164];
      }
      TacticalClass::SetPosition(*(_DWORD **)&stru_87C374[44976], (IUnknown *)v65, v68);
      esi1->stepCompleted = 1;
      return;
    case 35:
      TeamClass::DisbandTeam(&stru_87C374[13428], 0);
      esi1->stepCompleted = 1;
      return;
    case 36:
      MapClass::ClearShroud(&stru_87C374[13428], 0);
      esi1->stepCompleted = 1;
      return;
    case 37:
      v20 = (FootClass *)esi1->firstUnit;
      if ( v20 )
      {
        do
        {
          v24 = (FootClass *)v20->nextTeamMember;
          (*(void (__thiscall **)(FootClass *))(*(_DWORD *)v20->__pad_0 + 212))(v20);
          (*(void (__thiscall **)(FootClass *))(*(_DWORD *)v20->__pad_0 + 248))(v20);
          v20 = v24;
        }
        while ( v24 );
      }
      esi1->stepCompleted = 1;
      return;
    case 38:
      ScenarioClass::SetGlobalToByID(*(_BYTE **)&HouseClass_Player[29924], v18, 0);
      goto LABEL_82;
    case 39:
      ScenarioClass::SetLocalToByID(*(_BYTE **)&HouseClass_Player[29924], v18, 1);
      esi1->stepCompleted = 1;
      return;
    case 40:
      ScenarioClass::SetLocalToByID(*(_BYTE **)&HouseClass_Player[29924], v18, 0);
      esi1->stepCompleted = 1;
      return;
    case 41:
      v43 = (FootClass *)esi1->firstUnit;
      if ( !v43 )
        goto LABEL_82;
      do
      {
        (*(void (__thiscall **)(FootClass *))(*(_DWORD *)v43->__pad_0 + 1308))(v43);
        v43 = (FootClass *)v43->nextTeamMember;
      }
      while ( v43 );
      esi1->stepCompleted = 1;
      return;
    case 42:
      TeamClass::SyncMemberFacing((int)esi1, (int)&v67, (int)aP2);
      return;
    case 43:
      v44 = (FootClass *)esi1->firstUnit;
      if ( !v44 )
        goto LABEL_82;
      break;
    case 44:
      for ( n = (FootClass *)esi1->firstUnit; n; n = (FootClass *)n->nextTeamMember )
      {
        if ( (*(int (__thiscall **)(FootClass *))(*(_DWORD *)n->__pad_0 + 44))(n) == 1 )
        {
          eax71 = (*(int (__thiscall **)(FootClass *))(*(_DWORD *)n->__pad_0 + 132))(n);
          if ( !_strcmpi((const void *)(eax71 + 36), &stru_830620[75700]) )
            *(_DWORD *)&n[1].__pad_0[4] = *(_DWORD *)&g_UnitTypeCount2->__pad_0[4
                                                                              * BuildingTypeClass::FindIndex(&stru_830620[75692])];
        }
      }
LABEL_74:
      esi1->stepCompleted = 1;
      return;
    case 45:
      for ( ii = (FootClass *)esi1->firstUnit; ii; ii = (FootClass *)ii->nextTeamMember )
      {
        if ( (*(int (__thiscall **)(FootClass *))(*(_DWORD *)ii->__pad_0 + 44))(ii) == 1 )
        {
          eax77 = (*(int (__thiscall **)(FootClass *))(*(_DWORD *)ii->__pad_0 + 132))(ii);
          if ( !_strcmpi((const void *)(eax77 + 36), &stru_830620[75692]) )
            *(_DWORD *)&ii[1].__pad_0[4] = *(_DWORD *)&g_UnitTypeCount2->__pad_0[4
                                                                               * BuildingTypeClass::FindIndex(&stru_830620[75700])];
        }
      }
      esi1->stepCompleted = 1;
      return;
    case 46:
      TeamClass::SelectAreaAttackTarget((int)esi1, (ScriptClass *)&v67, aP2);
      return;
    case 47:
      TeamClass::ProcessTeamMovement((int *)esi1->__pad_0, (int)&v67, (int)aP2);
      return;
    case 48:
      SelectTeamMembers(esi1, (ScriptClass *)&v67, (int)aP2);
      return;
    case 49:
      esi1->stepCompleted = 1;
      esi1->achievedGreatSuccess = 1;
      return;
    case 50:
      if ( !v15 )
        return;
      v45 = (FootClass *)esi1->firstUnit;
      if ( !v45 )
        goto LABEL_82;
      do
      {
        v45->animation[1] = v18;
        v45 = (FootClass *)v45->nextTeamMember;
      }
      while ( v45 );
      esi1->stepCompleted = 1;
      return;
    case 51:
      TeamClass::PlayMemberAnimation((int)esi1, (ScriptClass *)&v67, (char)aP2);
      return;
    case 52:
      if ( v15 )
      {
        RevealTechnoClassRadarEvent((int)esi1->firstUnit, v18);
        esi1->stepCompleted = 1;
      }
      return;
    case 53:
      DeployTeamMembersAtStart((int)esi1, (ScriptClass *)&v67, (char)aP2);
      return;
    case 54:
      TeamClass::SelectDeploymentTarget((int *)esi1->__pad_0, (int)&v67, (char)aP2);
      return;
    case 55:
      ProcessAISuperWeaponSelection((int *)esi1->__pad_0, (ScriptClass *)&v67, (int)aP2);
      return;
    case 56:
      SuperWeapon::DispatchTeam((int)esi1, (ScriptClass *)&v67, (int)aP2);
      return;
    case 57:
      TeamClass::CheckMemberSuperWeapon((int)esi1, (int)&v67, (int)aP2);
      return;
    case 58:
      TeamClass::SelectBestMember(esi1, (ScriptClass *)&v67, (int)aP2);
      return;
    case 59:
      TeamClass::SelectAttackTarget((int)esi1, (ScriptClass *)&v67, (char)aP2);
      return;
    case 60:
      v46 = (FootClass *)esi1->firstUnit;
      if ( !v46 )
        goto LABEL_82;
      do
      {
        char v50 = (*(int (__thiscall **)(FootClass *))(*(_DWORD *)v46->__pad_0 + 828))(v46);
        v51 = (FootClass *)v46->nextTeamMember;
        if ( v50 )
          TeamClass::LiberateMember_Start((int)esi1, (IUnknown *)v46, 0xFFFFFFFF, (AbstractClass *)1);
        v46 = v51;
      }
      while ( v51 );
      esi1->stepCompleted = 1;
      return;
    case 61:
      v49 = (FootClass *)esi1->firstUnit;
      if ( !v49 )
        goto LABEL_82;
      do
      {
        char v53 = (*(int (__thiscall **)(FootClass *))(*(_DWORD *)v49->__pad_0 + 836))(v49);
        v54 = (FootClass *)v49->nextTeamMember;
        if ( v53 )
          TeamClass::LiberateMember_Start((int)esi1, (IUnknown *)v49, 0xFFFFFFFF, (AbstractClass *)1);
        v49 = v54;
      }
      while ( v54 );
      esi1->stepCompleted = 1;
      return;
    case 62:
      v52 = (FootClass *)esi1->firstUnit;
      if ( !v52 )
        goto LABEL_82;
      do
      {
        char v56 = (*(int (__thiscall **)(FootClass *))(*(_DWORD *)v52->__pad_0 + 832))(v52);
        v57 = (FootClass *)v52->nextTeamMember;
        if ( v56 )
          TeamClass::LiberateMember_Start((int)esi1, (IUnknown *)v52, 0xFFFFFFFF, (AbstractClass *)1);
        v52 = v57;
      }
      while ( v57 );
      esi1->stepCompleted = 1;
      return;
    case 63:
      v55 = (FootClass *)esi1->firstUnit;
      if ( !v55 )
        goto LABEL_82;
      do
      {
        char v59 = (*(int (__thiscall **)(FootClass *))(*(_DWORD *)v55->__pad_0 + 840))(v55);
        v60 = (FootClass *)v55->nextTeamMember;
        if ( v59 )
          TeamClass::LiberateMember_Start((int)esi1, (IUnknown *)v55, 0xFFFFFFFF, (AbstractClass *)1);
        v55 = v60;
      }
      while ( v60 );
      esi1->stepCompleted = 1;
      return;
    case 64:
      v58 = (FootClass *)esi1->firstUnit;
      if ( !v58 )
        goto LABEL_82;
      do
      {
        char v62 = (*(int (__thiscall **)(FootClass *))(*(_DWORD *)v58->__pad_0 + 844))(v58);
        v63 = (FootClass *)v58->nextTeamMember;
        if ( v62 )
          TeamClass::LiberateMember_Start((int)esi1, (IUnknown *)v58, 0xFFFFFFFF, (AbstractClass *)1);
        v58 = v63;
      }
      while ( v63 );
      esi1->stepCompleted = 1;
      return;
    default:
      return;
  }
  while ( *(_DWORD *)((*(int (__thiscall **)(FootClass *))(*(_DWORD *)v44->__pad_0 + 132))(v44) + 1504) <= *(_DWORD *)&v44->inAirFlag )
  {
    v44 = (FootClass *)v44->nextTeamMember;
    if ( !v44 )
    {
      esi1->stepCompleted = 1;
      return;
    }
  }
}
} // namespace gamemd
}

// 0x6EA3E0
namespace gamemd {
int TeamClass::UpdateReadinessState()
{
  int v2; // eax
  int v3; // ecx
  int v4; // edi
  char v6; // al
  int i; // edi
  char v8; // [esp+Fh] [ebp-1h]

  v8 = *((_BYTE *)this + 122); /*0x6ea3ec*/
  v2 = TeamClass::SumMemberCounts(*(int **)(*((_DWORD *)this + 9) + 228)); /*0x6ea3f6*/
  v3 = *((_DWORD *)this + 18); /*0x6ea3fb*/
  if ( v3 > 0 ) /*0x6ea404*/
  {
    *((_BYTE *)this + 121) = v3 == v2; /*0x6ea40d*/
    if ( v3 == v2 ) /*0x6ea410*/
      *((_BYTE *)this + 120) = 1; /*0x6ea412*/
    v4 = *((_DWORD *)this + 9); /*0x6ea416*/
    if ( *(_BYTE *)(v4 + 171) ) /*0x6ea419*/
    {
      if ( v2 <= 2 ) /*0x6ea424*/
        *((_BYTE *)this + 122) = v3 < v2; /*0x6ea443*/
      else
        *((_BYTE *)this + 122) = v3 <= v2 / 3; /*0x6ea439*/
    }
    else
    {
      *((_BYTE *)this + 122) = *((_BYTE *)this + 120) == 0; /*0x6ea44e*/
    }
    if ( *(_BYTE *)(v4 + 167) ) /*0x6ea451*/
    {
      if ( *((_BYTE *)this + 122) ) /*0x6ea459*/
        *((_BYTE *)this + 118) = 0; /*0x6ea45e*/
      else
        *((_BYTE *)this + 118) = 1; /*0x6ea463*/
    }
    *((_BYTE *)this + 126) = 0; /*0x6ea467*/
    *((_BYTE *)this + 125) = 0; /*0x6ea46a*/
    goto LABEL_14; /*0x6ea46a*/
  }
  v6 = *((_BYTE *)this + 120); /*0x6ea483*/
  *((_BYTE *)this + 118) = 0; /*0x6ea486*/
  *((_BYTE *)this + 122) = 1; /*0x6ea48b*/
  *((_BYTE *)this + 121) = 0; /*0x6ea48f*/
  *((_DWORD *)this + 13) = 0; /*0x6ea492*/
  if ( !v6 ) /*0x6ea495*/
  {
  LABEL_14:
    if ( v8 != *((_BYTE *)this + 122) ) /*0x6ea476*/
      *((_BYTE *)this + 123) = 1; /*0x6ea478*/
    return 1; /*0x6ea482*/
  }
  if ( *((_BYTE *)this + 130) ) /*0x6ea497*/
  {
    for ( i = g_ScenarioUpdateState - 1; i >= 0; --i ) /*0x6ea4aa*/
    {
      if ( TeamClass::Update_0(*((void ***)dword_8B40CC + i), 23, 0, dword_B0E948, 0, 0) && !g_ScenarioUpdateState ) /*0x6ea4cf*/
        break; /*0x6ea4cf*/
    }
  }
  if ( this ) /*0x6ea4d6*/
    (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 32))(this, 1); /*0x6ea4de*/
  return 0; /*0x6ea47c*/
}
}
// 0x6EA870
namespace gamemd {
int TeamClass::LiberateMember_Start(IUnknown * aP1, unsigned int a3, AbstractClass * aP3)
{
  int v5; // eax
  #375 *v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // ebx
  int v11; // esi
  int v12; // eax
  int v13; // eax
  int v14; // esi
  char v15; // cl
  int v16; // eax
  char v17; // dl
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // [esp+8h] [ebp-4h]
  char v22; // [esp+14h] [ebp+8h]

  v5 = *(_DWORD *)(aP1 + 1492); /*0x6ea879*/
  *(_BYTE *)(aP1 + 1720) = 1; /*0x6ea87f*/
  if ( this != v5 ) /*0x6ea888*/
    return 1; /*0x6ea88b*/
  if ( *(_DWORD *)(aP1 + 52) == *(_DWORD *)(this + 112) ) /*0x6ea89b*/
  {
    v7 = *(#375 **)(aP1 + 540); /*0x6ea89d*/
    if ( v7 ) /*0x6ea8a7*/
    {
      if ( !(unsigned __int8)House::IsCurrentPlayer(v7) ) /*0x6ea8a9*/
        ObjectClass::SetReference((_DWORD *)aP1, 0); /*0x6ea8b5*/
    }
  }
  if ( a3 == -1 ) /*0x6ea8c6*/
  {
    v8 = *(_DWORD *)(this + 36); /*0x6ea8c8*/
    if ( v8 ) /*0x6ea8cd*/
    {
      v9 = *(_DWORD *)(v8 + 228); /*0x6ea8cf*/
      if ( v9 ) /*0x6ea8d7*/
      {
        a3 = 0; /*0x6ea8df*/
        if ( *(int *)(v9 + 156) > 0 ) /*0x6ea8e5*/
        {
          v10 = 168; /*0x6ea8e7*/
          do /*0x6ea919*/
          {
            v11 = *(_DWORD *)(*(_DWORD *)(this + 36) + 228); /*0x6ea8f2*/
            if ( *(_DWORD *)(v10 + v11) == (*(int (__thiscall **)(int))(*(_DWORD *)aP1 + 136))(aP1) ) /*0x6ea903*/
              break; /*0x6ea903*/
            v10 += 8; /*0x6ea910*/
            ++a3; /*0x6ea915*/
          }
          while ( (signed int)a3 < *(_DWORD *)(v11 + 156) ); /*0x6ea919*/
        }
      }
    }
  }
  v12 = *(_DWORD *)(this + 36); /*0x6ea91d*/
  if ( v12 ) /*0x6ea922*/
  {
    v13 = *(_DWORD *)(v12 + 228); /*0x6ea924*/
    if ( v13 ) /*0x6ea92c*/
    {
      if ( a3 < *(_DWORD *)(v13 + 156) ) /*0x6ea93a*/
        --*(_DWORD *)(this + 4 * a3 + 136); /*0x6ea93c*/
    }
  }
  v14 = *(_DWORD *)(this + 84); /*0x6ea943*/
  v15 = 0; /*0x6ea946*/
  v16 = 0; /*0x6ea948*/
  v17 = 0; /*0x6ea94a*/
  v22 = 0; /*0x6ea94e*/
  v21 = 0; /*0x6ea952*/
  if ( v14 ) /*0x6ea956*/
  {
    while ( !v17 || !v15 ) /*0x6ea96c*/
    {
      if ( v14 == aP1 ) /*0x6ea974*/
      {
        if ( v16 ) /*0x6ea978*/
          *(_DWORD *)(v16 + 1496) = *(_DWORD *)(v14 + 1496); /*0x6ea980*/
        else
          *(_DWORD *)(this + 84) = *(_DWORD *)(v14 + 1496); /*0x6ea98e*/
        v18 = *(_DWORD *)(v14 + 1496); /*0x6ea991*/
        *(_DWORD *)(v14 + 1496) = 0; /*0x6ea997*/
        *(_DWORD *)(v14 + 1492) = 0; /*0x6ea99d*/
        *(_DWORD *)(v14 + 176) = -1; /*0x6ea9a3*/
        *(_DWORD *)(v14 + 1448) = 0; /*0x6ea9ad*/
        *(_DWORD *)(v14 + 696) = 0; /*0x6ea9b3*/
        v14 = v18; /*0x6ea9bc*/
        --*(_DWORD *)(this + 72); /*0x6ea9c1*/
        v19 = (*(int (__thiscall **)(int))(*(_DWORD *)aP1 + 704))(aP1); /*0x6ea9cc*/
        v17 = 1; /*0x6ea9d5*/
        *(_DWORD *)(this + 76) -= v19; /*0x6ea9db*/
      }
      else
      {
        if ( v15 || (v22 = 0, *(_BYTE *)(v14 + 1673)) ) /*0x6ea9e4*/
          v22 = 1; /*0x6ea9f2*/
        v21 = v14; /*0x6ea9f7*/
        v14 = *(_DWORD *)(v14 + 1496); /*0x6ea9fb*/
      }
      if ( !v14 ) /*0x6eaa03*/
      {
        v15 = v22; /*0x6eaa09*/
        break; /*0x6eaa09*/
      }
      v16 = v21; /*0x6ea95e*/
      v15 = v22; /*0x6ea962*/
    }
  }
  if ( *(_DWORD *)(aP1 + 1492) ) /*0x6eaa0d*/
    *(_DWORD *)(aP1 + 1492) = 0; /*0x6eaa18*/
  if ( !g_IKnowWhatImDoing && *(_BYTE *)(aP1 + 144) && !*(_BYTE *)(aP1 + 1061) && !*(_BYTE *)(aP1 + 129) && !aP3 ) /*0x6eaa4a*/
  {
    (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)aP1 + 1156))(aP1, 0, 1); /*0x6eaa54*/
    v15 = v22; /*0x6eaa5a*/
  }
  if ( !v15 ) /*0x6eaa60*/
  {
    v20 = *(_DWORD *)(this + 84); /*0x6eaa62*/
    if ( v20 ) /*0x6eaa67*/
    {
      *(_BYTE *)(v20 + 1673) = 1; /*0x6eaa69*/
      *(_DWORD *)(this + 52) = 0; /*0x6eaa70*/
    }
  }
  *(_BYTE *)(this + 126) = 1; /*0x6eaa73*/
  *(_BYTE *)(this + 125) = 1; /*0x6eaa77*/
  return 1; /*0x6ea88a*/
}
}
// 0x6EAA90
namespace gamemd {
TeamTypeClass * * TeamClass::RecruitMember(int a2)
{
  int v2; // edi
  _DWORD *v3; // ebx
  int v4; // ecx
  int *v5; // eax
  _DWORD *v6; // ecx
  _DWORD *WaypointCoords; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // ecx
  int v12; // ebp
  int v13; // eax
  _DWORD *v14; // esi
  int v15; // eax
  int v16; // edi
  int v18; // ebp
  int v19; // eax
  _DWORD *v20; // esi
  int v21; // eax
  int v22; // edi
  int v23; // eax
  _DWORD *v24; // esi
  int v25; // eax
  int v26; // edi
  int DB; // esi
  int v29; // [esp+14h] [ebp-28h]
  int v30; // [esp+18h] [ebp-24h]
  int v31; // [esp+1Ch] [ebp-20h]
  int v32; // [esp+1Ch] [ebp-20h]
  int v33; // [esp+1Ch] [ebp-20h]
  int v34; // [esp+20h] [ebp-1Ch] BYREF
  int v35; // [esp+24h] [ebp-18h] BYREF
  int v36; // [esp+28h] [ebp-14h]
  int v37; // [esp+2Ch] [ebp-10h]
  _BYTE v38[12]; // [esp+30h] [ebp-Ch] BYREF

  v2 = (int)this; /*0x6eaa97*/
  v3 = 0; /*0x6eaa99*/
  v4 = *(this + 13); /*0x6eaa9f*/
  if ( v4 ) /*0x6eaaa4*/
    v5 = (int *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v4 + 72))(v4, v38); /*0x6eaaad*/
  else
    v5 = &dword_B0E968; /*0x6eaab2*/
  v35 = *v5; /*0x6eaab9*/
  v36 = v5[1]; /*0x6eaac4*/
  v6 = *(_DWORD **)(v2 + 36); /*0x6eaacc*/
  v37 = v5[2]; /*0x6eaacf*/
  if ( *TechnoClass::GetWaypointCoords(v6, &v34) != dword_B0E948 ) /*0x6eaae2*/
  {
    WaypointCoords = TechnoClass::GetWaypointCoords(*(_DWORD **)(v2 + 36), &v34); /*0x6eaaf9*/
    v8 = (*(__int16 *)WaypointCoords << 8) + 128; /*0x6eab0b*/
    v9 = (*((__int16 *)WaypointCoords + 1) << 8) + 128; /*0x6eab11*/
    v35 = v8; /*0x6eab18*/
    v36 = v9; /*0x6eab1c*/
    v37 = 0; /*0x6eab20*/
  }
  v10 = *(_DWORD *)(v2 + 36); /*0x6eab24*/
  v30 = 0; /*0x6eab2b*/
  if ( *(_DWORD *)(*(_DWORD *)(v10 + 228) + 8 * a2 + 164) <= *(_DWORD *)(v2 + 4 * a2 + 136) ) /*0x6eab45*/
    return v30; /*0x6eae19*/
  v29 = TeamTypeClass::GetGroup(v10); /*0x6eab54*/
  v11 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v2 + 36) + 228) + 8 * a2 + 168); /*0x6eab61*/
  switch ( (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 44))(v11) ) /*0x6eab7f*/
  {
    case 1: /*0x6eab7f*/
    case 40: /*0x6eab7f*/
      v23 = 0; /*0x6ead07*/
      v33 = -1; /*0x6ead0b*/
      v34 = 0; /*0x6ead13*/
      if ( g_HouseClass_BuildState > 0 ) /*0x6ead17*/
      {
        do /*0x6eadc8*/
        {
          v24 = (_DWORD *)*((_DWORD *)g_UnitClassPool + v23); /*0x6ead23*/
          if ( v29 == -2 || v24[133] == v29 || *(_BYTE *)(*(_DWORD *)(v2 + 36) + 168) ) /*0x6ead3a*/
          {
            v25 = Math::DistSq2D(v24, &v35); /*0x6ead4b*/
            v26 = v25; /*0x6ead54*/
            if ( v24[133] != v29 ) /*0x6ead5c*/
              v26 = v25 + 12800; /*0x6ead5e*/
            if ( v24[135] == *(this + 11) /*0x6eada4*/
              && v24[433] == *(_DWORD *)(*(_DWORD *)(*(this + 9) + 228) + 8 * a2 + 168)
              && (v26 < v33 || v33 == -1)
              && TeamClass::ValidateMember(this, (int)v24, &a2, 0) )
            {
              v3 = v24; /*0x6eadad*/
              v33 = v26; /*0x6eadaf*/
            }
            v2 = (int)this; /*0x6eadb3*/
          }
          v23 = ++v34; /*0x6eadc1*/
        }
        while ( v34 < g_HouseClass_BuildState ); /*0x6eadc8*/
        if ( v3 ) /*0x6eadd0*/
        {
          (*(void (__thiscall **)(_DWORD *, _DWORD))(*v3 + 968))(v3, 0); /*0x6eadd8*/
          TeamClass::AddMember(v2, (int)v3, 0); /*0x6eade3*/
          v30 = 1; /*0x6eadee*/
          DB = CCINIClass::GetDB(v3 + 69); /*0x6eadfb*/
          if ( DB ) /*0x6eadff*/
          {
            do /*0x6eae17*/
            {
              TeamClass::AddMember(v2, DB, 0); /*0x6eae08*/
              DB = *(_DWORD *)(DB + 48); /*0x6eae0d*/
            }
            while ( DB && (*(_BYTE *)(DB + 20) & 4) != 0 ); /*0x6eae17*/
          }
        }
      }
      return v30; /*0x6eae17*/
    case 2: /*0x6eab7f*/
    case 3: /*0x6eab7f*/
      v18 = -1; /*0x6eac57*/
      v19 = 0; /*0x6eac5a*/
      v32 = 0; /*0x6eac5e*/
      if ( g_AircraftClassCount <= 0 ) /*0x6eac62*/
        return v30; /*0x6eac62*/
      do /*0x6eace6*/
      {
        v20 = (_DWORD *)*((_DWORD *)dword_A8E394 + v19); /*0x6eac6e*/
        if ( v29 == -2 || v20[133] == v29 || *(_BYTE *)(*(_DWORD *)(v2 + 36) + 168) ) /*0x6eac85*/
        {
          v21 = Math::DistSq2D(v20, &v35); /*0x6eac96*/
          v22 = v21; /*0x6eac9f*/
          if ( v20[133] != v29 ) /*0x6eaca7*/
            v22 = v21 + 12800; /*0x6eaca9*/
          if ( (v22 < v18 || v18 == -1) && TeamClass::ValidateMember(this, (int)v20, &a2, 0) ) /*0x6eacc4*/
          {
            v3 = v20; /*0x6eaccd*/
            v18 = v22; /*0x6eaccf*/
          }
          v2 = (int)this; /*0x6eacd1*/
        }
        v19 = ++v32; /*0x6eacdf*/
      }
      while ( v32 < g_AircraftClassCount ); /*0x6eace6*/
      if ( !v3 ) /*0x6eacea*/
        return v30; /*0x6eacea*/
      break; /*0x6eacea*/
    case 15: /*0x6eab7f*/
    case 16: /*0x6eab7f*/
      v12 = -1; /*0x6eab8c*/
      v13 = 0; /*0x6eab8f*/
      v31 = 0; /*0x6eab93*/
      if ( g_BuildingClass_Count <= 0 ) /*0x6eab97*/
        return v30; /*0x6eab97*/
      do /*0x6eac1b*/
      {
        v14 = (_DWORD *)*((_DWORD *)g_InfantryClassLimit + v13); /*0x6eaba3*/
        if ( v29 == -2 || v14[133] == v29 || *(_BYTE *)(*(_DWORD *)(v2 + 36) + 168) ) /*0x6eabba*/
        {
          v15 = Math::DistSq2D(v14, &v35); /*0x6eabcb*/
          v16 = v15; /*0x6eabd4*/
          if ( v14[133] != v29 ) /*0x6eabdc*/
            v16 = v15 + 12800; /*0x6eabde*/
          if ( (v16 < v12 || v12 == -1) && TeamClass::ValidateMember(this, (int)v14, &a2, 0) ) /*0x6eabf9*/
          {
            v3 = v14; /*0x6eac02*/
            v12 = v16; /*0x6eac04*/
          }
          v2 = (int)this; /*0x6eac06*/
        }
        v13 = ++v31; /*0x6eac14*/
      }
      while ( v31 < g_BuildingClass_Count ); /*0x6eac1b*/
      if ( !v3 ) /*0x6eac1f*/
        return v30; /*0x6eac1f*/
      break; /*0x6eac1f*/
    default:
      return v30;
  }
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*v3 + 968))(v3, 0); /*0x6eac2b*/
  TeamClass::AddMember(v2, (int)v3, 0); /*0x6eac36*/
  return 1; /*0x6eac3b*/
}
}
// 0x6EAEE0
namespace gamemd {
AbstractClass * * TeamClass::FindClosestEnemy(AbstractClass * aP1, AbstractClass * aP2)
{
  int v3; // eax
  int v4; // esi
  int v5; // ebx
  int v6; // edi
  char *v7; // ecx
  int v8; // ebp
  int v9; // eax
  char *v10; // esi
  _DWORD *v11; // ebx
  _DWORD *v12; // eax
  int *v13; // eax
  int v14; // eax
  char *v15; // esi
  _DWORD *v16; // ebx
  _DWORD *v17; // eax
  int *v18; // eax
  double v19; // st7
  int v20; // eax
  char v21; // al
  int v22; // ebp
  void *v23; // esi
  int *v24; // esi
  int v25; // eax
  int v26; // eax
  int v27; // ecx
  void *v28; // eax
  int v31; // [esp+2Ch] [ebp-38h]
  int v32; // [esp+2Ch] [ebp-38h]
  int v33; // [esp+2Ch] [ebp-38h]
  char *v34; // [esp+30h] [ebp-34h]
  void *v35; // [esp+30h] [ebp-34h]
  int v36; // [esp+34h] [ebp-30h] BYREF
  int v37; // [esp+38h] [ebp-2Ch]
  int v38; // [esp+3Ch] [ebp-28h]
  int v39; // [esp+40h] [ebp-24h] BYREF
  int v40; // [esp+44h] [ebp-20h]
  int v41; // [esp+48h] [ebp-1Ch]
  _BYTE v42[12]; // [esp+4Ch] [ebp-18h] BYREF
  _DWORD v43[3]; // [esp+58h] [ebp-Ch] BYREF

  LOBYTE(v3) = (_BYTE)aP2; /*0x6eaee3*/
  v4 = this; /*0x6eaeea*/
  v5 = 0; /*0x6eaeec*/
  *aP2 = 0; /*0x6eaef2*/
  *aP1 = 0; /*0x6eaef9*/
  v6 = *(_DWORD *)(this + 84); /*0x6eaefb*/
  if ( v6 ) /*0x6eaf00*/
  {
    if ( *SessionClass::GetEntry(*(_DWORD **)(this + 40), &v36) == 10 ) /*0x6eaf16*/
    {
      v7 = 0; /*0x6eaf22*/
      v8 = -1; /*0x6eaf24*/
      v9 = 0; /*0x6eaf27*/
      v34 = 0; /*0x6eaf2b*/
      v31 = 0; /*0x6eaf2f*/
      if ( g_HouseClass_BuildState > 0 ) /*0x6eaf33*/
      {
        do /*0x6eb012*/
        {
          v10 = (char *)*((_DWORD *)g_UnitClassPool + v9); /*0x6eaf3f*/
          if ( v10 && v10[144] && *((_DWORD *)v10 + 27) && (g_IKnowWhatImDoing || !v10[129]) ) /*0x6eaf6c*/
          {
            if ( (unsigned __int8)HouseClass::IsAlliedWith(*((#375 **)v10 + 135), *(#375 **)(this + 44)) ) /*0x6eaf88*/
            {
              if ( this != *((_DWORD *)v10 + 373) ) /*0x6eaf97*/
              {
                v11 = (_DWORD *)(*(int (__thiscall **)(char *, int *))(*(_DWORD *)v10 + 72))(v10, &v39); /*0x6eafa7*/
                v12 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v6 + 72))(v6, v42); /*0x6eafb0*/
                v13 = Coord::Subtract(v43, *v12 - *v11, v12[1] - v11[1], v12[2] - v11[2]); /*0x6eafd0*/
                v36 = *v13; /*0x6eafd7*/
                v37 = v13[1]; /*0x6eafe2*/
                v38 = v13[2]; /*0x6eafe9*/
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
        while ( v31 < g_HouseClass_BuildState ); /*0x6eb012*/
        v4 = this; /*0x6eb018*/
        v7 = v34; /*0x6eb01c*/
      }
      v3 = 0; /*0x6eb026*/
      v32 = 0; /*0x6eb02a*/
      if ( g_BuildingClass_Count > 0 ) /*0x6eb02e*/
      {
        do /*0x6eb141*/
        {
          v15 = (char *)*((_DWORD *)g_InfantryClassLimit + v3); /*0x6eb03a*/
          if ( v15 && v15[144] && *((_DWORD *)v15 + 27) && (g_IKnowWhatImDoing || !v15[129]) ) /*0x6eb067*/
          {
            if ( (unsigned __int8)HouseClass::IsAlliedWith(*((#375 **)v15 + 135), *(#375 **)(this + 44)) ) /*0x6eb083*/
            {
              if ( this != *((_DWORD *)v15 + 373) ) /*0x6eb096*/
              {
                v16 = (_DWORD *)(*(int (__thiscall **)(char *, _DWORD *))(*(_DWORD *)v15 + 72))(v15, v43); /*0x6eb0aa*/
                v17 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v6 + 72))(v6, v42); /*0x6eb0b3*/
                v18 = Coord::Subtract(&v39, *v17 - *v16, v17[1] - v16[1], v17[2] - v16[2]); /*0x6eb0d3*/
                v36 = *v18; /*0x6eb0dd*/
                v37 = v18[1]; /*0x6eb0e4*/
                v38 = v18[2]; /*0x6eb0ef*/
                v19 = Math::Sqrt((double)v36 * (double)v36 + (double)v38 * (double)v38 + (double)v37 * (double)v37); /*0x6eb114*/
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
        while ( v32 < g_BuildingClass_Count ); /*0x6eb141*/
        v4 = this; /*0x6eb147*/
        v7 = v34; /*0x6eb14b*/
      }
      if ( v7 ) /*0x6eb151*/
      {
        v21 = v7[1668]; /*0x6eb157*/
        if ( v21 < 0 ) /*0x6eb15f*/
        {
          *aP1 = v7; /*0x6eb1a1*/
        }
        else
        {
          v36 = *(_DWORD *)(*((_DWORD *)g_PathClass_State + v21) + 40); /*0x6eb175*/
          *aP1 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v36); /*0x6eb188*/
        }
        v3 = *(_DWORD *)(v4 + 84); /*0x6eb18a*/
        *aP2 = v3; /*0x6eb194*/
      }
    }
    else
    {
      v22 = 0; /*0x6eb1b5*/
      v23 = 0; /*0x6eb1b7*/
      v33 = 0; /*0x6eb1bb*/
      v36 = 0; /*0x6eb1bf*/
      v35 = 0; /*0x6eb1c3*/
      do /*0x6eb301*/
      {
        LOBYTE(v3) = *(_BYTE *)(v6 + 144); /*0x6eb1cd*/
        if ( (_BYTE)v3 ) /*0x6eb1d5*/
        {
          v3 = *(_DWORD *)(v6 + 108); /*0x6eb1db*/
          if ( v3 ) /*0x6eb1e0*/
          {
            if ( g_IKnowWhatImDoing || (LOBYTE(v3) = *(_BYTE *)(v6 + 129), !(_BYTE)v3) ) /*0x6eb1f7*/
            {
              if ( *(_BYTE *)(v6 + 1673) || (v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 44))(v6), v3 == 2) ) /*0x6eb211*/
              {
                LOBYTE(v3) = *(_BYTE *)(v6 + 981); /*0x6eb217*/
                if ( (_BYTE)v3 ) /*0x6eb21f*/
                {
                  v24 = (int *)(v6 + 156); /*0x6eb225*/
                  v5 += *(_DWORD *)(v6 + 156); /*0x6eb22f*/
                  v40 = *(_DWORD *)(v6 + 160); /*0x6eb234*/
                  v25 = *(_DWORD *)(v6 + 156); /*0x6eb23d*/
                  v41 = *(_DWORD *)(v6 + 164); /*0x6eb23f*/
                  v39 = v25; /*0x6eb243*/
                  v26 = *(_DWORD *)(v6 + 160); /*0x6eb247*/
                  v41 = *(_DWORD *)(v6 + 164); /*0x6eb251*/
                  v33 += v26; /*0x6eb25e*/
                  ++v22; /*0x6eb262*/
                  if ( *(_BYTE *)(*(_DWORD *)(this + 36) + 167) /*0x6eb271*/
                    && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 1248))(v6) )
                  {
                    v5 += *v24; /*0x6eb27f*/
                    v40 = *(_DWORD *)(v6 + 160); /*0x6eb287*/
                    v27 = *(_DWORD *)(v6 + 164); /*0x6eb28d*/
                    v39 = *v24; /*0x6eb290*/
                    v41 = v27; /*0x6eb294*/
                    v41 = *(_DWORD *)(v6 + 164); /*0x6eb29b*/
                    ++v22; /*0x6eb2a5*/
                    v33 += v40; /*0x6eb2a6*/
                  }
                  if ( *(int *)((*(int (__thiscall **)(int))(*(_DWORD *)v6 + 132))(v6) + 1504) <= 0 /*0x6eb2c8*/
                    || (v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 132))(v6), !*(_BYTE *)(v3 + 3278)) )
                  {
                    v3 = BuildingClass::SquaredDistanceTo(*(_DWORD *)(this + 64)); /*0x6eb2dc*/
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
        v6 = *(_DWORD *)(v6 + 1496); /*0x6eb2f9*/
      }
      while ( v6 ); /*0x6eb301*/
      if ( v22 ) /*0x6eb309*/
      {
        v36 = v5 / v22; /*0x6eb31b*/
        v38 = 0; /*0x6eb324*/
        v37 = v33 / v22; /*0x6eb328*/
        v28 = Coord::To_Cell(&MapClass_Instance, &v36); /*0x6eb331*/
        *aP1 = v28; /*0x6eb33c*/
        if ( !v23 ) /*0x6eb33e*/
          v23 = *(void **)(this + 84); /*0x6eb34b*/
        v3 = (*(int (__thiscall **)(void *, void *, int, int, _DWORD, int))(*(_DWORD *)v23 + 428))( /*0x6eb35a*/
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
        LOBYTE(v3) = (_BYTE)aP2; /*0x6eb36a*/
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
  int *v1; // edi
  _DWORD *v2; // esi
  int v3; // ebp
  _DWORD *v4; // ebx
  int v5; // edi
  int v6; // ecx
  int v7; // edi
  _DWORD *v8; // esi
  int v9; // esi
  int v10; // eax
  _DWORD *Entry; // eax
  int v12; // esi
  char v13; // bl
  int v14; // eax
  int v15; // edi
  int v16; // eax
  int v19; // [esp+14h] [ebp-10h] BYREF
  int v20; // [esp+18h] [ebp-Ch]
  _DWORD v21[2]; // [esp+1Ch] [ebp-8h] BYREF

  v1 = this; /*0x6eb497*/
  if ( !*(this + 16) ) /*0x6eb49d*/
    *(this + 16) = *(this + 15); /*0x6eb4a7*/
  v2 = (_DWORD *)*(this + 21); /*0x6eb4aa*/
  v3 = -1; /*0x6eb4ad*/
  v4 = v2; /*0x6eb4b2*/
  if ( v2 ) /*0x6eb4b4*/
  {
    do /*0x6eb514*/
    {
      v5 = *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*v2 + 132))(v2) + 1532); /*0x6eb4c0*/
      if ( *((_BYTE *)v2 + 144) /*0x6eb506*/
        && v2[27]
        && (g_IKnowWhatImDoing || !*((_BYTE *)v2 + 129))
        && (*((_BYTE *)v2 + 1673) || (*(int (__thiscall **)(_DWORD *))(*v2 + 44))(v2) == 2)
        && v5 > v3 )
      {
        v4 = v2; /*0x6eb508*/
        v3 = v5; /*0x6eb50a*/
      }
      v2 = (_DWORD *)v2[374]; /*0x6eb50c*/
    }
    while ( v2 ); /*0x6eb514*/
    v1 = this; /*0x6eb516*/
  }
  v6 = v1[16]; /*0x6eb51a*/
  if ( v6
    && (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 44))(v6) == 11
    && v1[21]
    && (*(int (__thiscall **)(_DWORD *))(*v4 + 44))(v4) != 2 )
  {
    v7 = v1[16]; /*0x6eb53e*/
    if ( v7 )
      v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 44))(v7) == 11 ? (_DWORD *)v7 : 0;
    else
      v8 = 0; /*0x6eb547*/
    v19 = 0; /*0x6eb567*/
    v20 = 0; /*0x6eb56b*/
    if ( Object::FindObjectCell(v8, &v19, 0) ) /*0x6eb56f*/
    {
      v19 = 0; /*0x6eb582*/
      v20 = 0; /*0x6eb586*/
      *(this + 16) = Object::FindObjectCell(v8, &v19, 0); /*0x6eb593*/
    }
    v1 = this; /*0x6eb596*/
  }
  if ( (int)g_CurrentFrame % 8 == 4 ) /*0x6eb5ae*/
  {
    v9 = *v4; /*0x6eb5b3*/
    v10 = (*(int (__thiscall **)(_DWORD *, int, int))(*v4 + 740))(v4, v1[16], 1); /*0x6eb5ba*/
    if ( (*(int (__thiscall **)(_DWORD *, int, int))(v9 + 960))(v4, v1[16], v10) == 5 ) /*0x6eb5d0*/
      *((_BYTE *)v1 + 129) = 1; /*0x6eb5d2*/
  }
  Entry = (_DWORD *)v1[16]; /*0x6eb5d9*/
  if ( !Entry /*0x6eb605*/
    || (Entry = SessionClass::GetEntry((_DWORD *)v1[10], v21), v12 = v1[21], v13 = 0, v19 = *Entry, v20 = Entry[1], !v12) )
  {
  LABEL_72:
    *((_BYTE *)v1 + 128) = 1; /*0x6eb85b*/
    return (char)Entry; /*0x6eb85b*/
  }
  do /*0x6eb851*/
  {
    if ( !*(_BYTE *)(v12 + 144) ) /*0x6eb60b*/
      goto LABEL_67; /*0x6eb60b*/
    if ( *(_DWORD *)(v12 + 108) && (g_IKnowWhatImDoing || !*(_BYTE *)(v12 + 129)) && !*(_BYTE *)(v12 + 1673) ) /*0x6eb63b*/
    {
      v14 = *SessionClass::GetEntry((_DWORD *)v1[10], v21); /*0x6eb656*/
      if ( v14 == 54 || v14 == 53 ) /*0x6eb660*/
        v15 = *((_DWORD *)g_RulesClass_Instance + 1480); /*0x6eb676*/
      else
        v15 = *((_DWORD *)g_RulesClass_Instance + 1479); /*0x6eb668*/
      if ( ObjectClass::DistanceTo((void *)v12, *(this + 13)) <= v15 ) /*0x6eb68d*/
      {
        *(_BYTE *)(v12 + 1673) = 1; /*0x6eb6c5*/
      }
      else if ( !*(_DWORD *)(v12 + 1444) ) /*0x6eb68f*/
      {
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v12 + 488))(v12, 2, 0); /*0x6eb6a1*/
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v12 + 968))(v12, 0); /*0x6eb6ad*/
        (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v12 + 1152))(v12, *(this + 13), 1); /*0x6eb6bd*/
      }
      v1 = this; /*0x6eb6cc*/
    }
    if ( *(_BYTE *)(v12 + 144) /*0x6eb714*/
      && *(_DWORD *)(v12 + 108)
      && (g_IKnowWhatImDoing || !*(_BYTE *)(v12 + 129))
      && (*(_BYTE *)(v12 + 1673) || (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 44))(v12) == 2) )
    {
      if ( v19 == 15 /*0x6eb733*/
        && (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 44))(v12) == 15
        && *(_BYTE *)(*(_DWORD *)(v12 + 1728) + 3774) )
      {
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v12 + 488))(v12, 8, 0); /*0x6eb745*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v12 + 968))(v12, v1[16]); /*0x6eb753*/
      }
      else if ( (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 388))(v12) != 1 /*0x6eb7ad*/
             && (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 388))(v12) != 7
             && (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 388))(v12) != 8
             && (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 388))(v12) != 17
             && ((*(int (__thiscall **)(int))(*(_DWORD *)v12 + 388))(v12) != 16
              || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v12 + 1252))(v12)) )
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v12 + 628))(v12, 3); /*0x6eb7bd*/
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v12 + 488))(v12, 1, 0); /*0x6eb7cb*/
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v12 + 968))(v12, 0); /*0x6eb7d7*/
        (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v12 + 1152))(v12, 0, 1); /*0x6eb7e5*/
      }
      v16 = *(_DWORD *)(v12 + 692); /*0x6eb7eb*/
      if ( v16 != v1[16] && !v16 ) /*0x6eb7fa*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v12 + 968))(v12, v1[16]); /*0x6eb801*/
      Entry = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v12 + 44))(v12); /*0x6eb80b*/
      if ( Entry != (_DWORD *)2 /*0x6eb82c*/
        || (Entry = (_DWORD *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v12 + 1016))(v12, 0), !*Entry)
        || (Entry = *(_DWORD **)(v12 + 764), (int)Entry > 0) )
      {
  LABEL_69:
        v13 = 1; /*0x6eb847*/
      }
    }
    else
    {
  LABEL_67:
      Entry = (_DWORD *)v1[9]; /*0x6eb830*/
      if ( *((_BYTE *)Entry + 176) ) /*0x6eb833*/
      {
        LOBYTE(Entry) = *(_BYTE *)(v12 + 129); /*0x6eb83d*/
        if ( (_BYTE)Entry ) /*0x6eb845*/
          goto LABEL_69; /*0x6eb845*/
      }
    }
    v12 = *(_DWORD *)(v12 + 1496); /*0x6eb849*/
  }
  while ( v12 ); /*0x6eb851*/
  if ( !v13 ) /*0x6eb859*/
    goto LABEL_72; /*0x6eb859*/
  return (char)Entry; /*0x6eb862*/
}
}
// 0x6EBAD0
namespace gamemd {
AbstractClass * * TeamClass::UpdateMembers()
{
  int v2; // esi
  int v3; // eax
  int v4; // eax
  int v5; // edi
  int v6; // eax
  _DWORD *v7; // eax
  int v8; // edi
  bool v9; // bl
  bool v10; // al
  char v11; // [esp+30h] [ebp-36h]
  char v12; // [esp+31h] [ebp-35h]
  int v13; // [esp+32h] [ebp-34h]
  int v14; // [esp+36h] [ebp-30h]
  int v15; // [esp+3Ah] [ebp-2Ch] BYREF
  int v16; // [esp+42h] [ebp-24h] BYREF
  _BYTE v17[8]; // [esp+4Ah] [ebp-1Ch] BYREF
  _BYTE v18[8]; // [esp+52h] [ebp-14h] BYREF
  _BYTE v19[12]; // [esp+5Ah] [ebp-Ch] BYREF

  v11 = 1; /*0x6ebad7*/
  v2 = *(_DWORD *)(this + 84); /*0x6ebadc*/
  v12 = 0; /*0x6ebadf*/
  if ( v2 ) /*0x6ebae6*/
  {
    if ( *(_DWORD *)(this + 64) || (v3 = *(_DWORD *)(this + 60), (*(_DWORD *)(this + 64) = v3) != 0) ) /*0x6ebafb*/
    {
      if ( !(unsigned __int8)TeamClass::ProcessMemberPositions(this) ) /*0x6ebb03*/
      {
        while ( 1 ) /*0x6ebb1a*/
        {
          if ( *(_BYTE *)(v2 + 144) /*0x6ebb4a*/
            && *(_DWORD *)(v2 + 108)
            && (g_IKnowWhatImDoing || !*(_BYTE *)(v2 + 129))
            && !*(_BYTE *)(v2 + 1673) )
          {
            v4 = *SessionClass::GetEntry(*(_DWORD **)(this + 40), &v15); /*0x6ebb61*/
            if ( v4 == 54 || v4 == 53 ) /*0x6ebb6b*/
              v5 = *((_DWORD *)g_RulesClass_Instance + 1480); /*0x6ebb80*/
            else
              v5 = *((_DWORD *)g_RulesClass_Instance + 1479); /*0x6ebb73*/
            if ( ObjectClass::DistanceTo((void *)v2, *(_DWORD *)(this + 52)) <= v5 ) /*0x6ebb93*/
            {
              *(_BYTE *)(v2 + 1673) = 1; /*0x6ebc8d*/
            }
            else
            {
              if ( !*(_DWORD *)(v2 + 1444) ) /*0x6ebb99*/
              {
                (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v2 + 488))(v2, 2, 0); /*0x6ebbab*/
                (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v2 + 968))(v2, 0); /*0x6ebbb7*/
                (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v2 + 1152))(v2, *(_DWORD *)(this + 52), 1); /*0x6ebbc7*/
              }
              v11 = 0; /*0x6ebbcd*/
            }
          }
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 388))(v2) == 16 || *(_DWORD *)(v2 + 180) == 16 ) /*0x6ebbeb*/
            v11 = 0; /*0x6ebbed*/
          if ( !*(_BYTE *)(v2 + 144) /*0x6ebc5c*/
            || !*(_DWORD *)(v2 + 108)
            || !g_IKnowWhatImDoing && *(_BYTE *)(v2 + 129)
            || !*(_BYTE *)(v2 + 1673) && (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 44))(v2) != 2
            || (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 388))(v2) == 16
            || *(_DWORD *)(v2 + 180) == 16 )
          {
            goto LABEL_80; /*0x6ebc5c*/
          }
          v6 = *SessionClass::GetEntry(*(_DWORD **)(this + 40), &v16); /*0x6ebc6f*/
          if ( v6 == 54 || v6 == 53 ) /*0x6ebc79*/
            v13 = *((_DWORD *)g_RulesClass_Instance + 1480); /*0x6ebca4*/
          else
            v13 = *((_DWORD *)g_RulesClass_Instance + 1479); /*0x6ebc87*/
          if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 84))(v2) ) /*0x6ebcac*/
            v13 *= 2; /*0x6ebcba*/
          v12 = 1; /*0x6ebcc4*/
          v14 = ObjectClass::DistanceTo((void *)v2, *(_DWORD *)(this + 64)); /*0x6ebcd2*/
          if ( v14 <= v13 /*0x6ebcfc*/
            && ((*(int (__thiscall **)(int))(*(_DWORD *)v2 + 456))(v2) >= 0
             || *(_DWORD *)ScriptClass::GetNextAction(v17) == 3) )
          {
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 44))(v2) != 2 ) /*0x6ebd0c*/
              break; /*0x6ebd0c*/
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 464))(v2) <= 0 ) /*0x6ebd1a*/
              break; /*0x6ebd1a*/
            v7 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v2 + 72))(v2, v19); /*0x6ebd25*/
            if ( Coord::To_Cell(&MapClass_Instance, v7) == *(void **)(this + 64) /*0x6ebd48*/
              || *(_DWORD *)ScriptClass::GetNextAction(v18) == 3 )
            {
              break; /*0x6ebd48*/
            }
          }
          if ( !*(_BYTE *)(*(_DWORD *)(this + 36) + 173) || !*(_DWORD *)(v2 + 692) ) /*0x6ebde9*/
            goto LABEL_55; /*0x6ebdf1*/
          if ( *(_BYTE *)(v2 + 1678) ) /*0x6ebdf3*/
          {
            (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v2 + 968))(v2, 0); /*0x6ebe07*/
  LABEL_55:
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 388))(v2) != 2 ) /*0x6ebe1a*/
            {
              (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v2 + 488))(v2, 2, 0); /*0x6ebe24*/
              if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 512))(v2) ) /*0x6ebe2e*/
                (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 492))(v2); /*0x6ebe3c*/
            }
            if ( !*(_DWORD *)(v2 + 1444) ) /*0x6ebe42*/
              (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v2 + 1152))(v2, *(_DWORD *)(this + 64), 1); /*0x6ebe56*/
            v8 = *(_DWORD *)(v2 + 1444); /*0x6ebe5c*/
            if ( v8 != *(_DWORD *)(this + 64) /*0x6ebe9a*/
              && (*(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v2 + 132))(v2) + 3434)
               || v8 != *(_DWORD *)(this + 64)
               && (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 44))(v2) == 2
               && v8 == (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 444))(v2)) )
            {
              (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v2 + 1152))(v2, *(_DWORD *)(this + 64), 1); /*0x6ebea6*/
            }
            v11 = 0; /*0x6ebeac*/
  LABEL_67:
            v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 44))(v2) == 2 /*0x6ebecf*/
              && *(_DWORD *)(v2 + 1444) == (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 444))(v2);
            v10 = (*(_BYTE *)(v2 + 20) & 1) != 0 /*0x6ebefb*/
               && *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v2 + 132))(v2) + 3434)
               && v14 < v13;
            if ( *(_DWORD *)(v2 + 1444) && !v9 && !v10 ) /*0x6ebf11*/
              v11 = 0; /*0x6ebf13*/
          }
  LABEL_80:
          v2 = *(_DWORD *)(v2 + 1496); /*0x6ebf17*/
          if ( !v2 ) /*0x6ebf1f*/
          {
            if ( v12 && v11 ) /*0x6ebf35*/
            {
              if ( *(_BYTE *)(this + 127) ) /*0x6ebf37*/
                *(_BYTE *)(this + 128) = 1; /*0x6ebf3e*/
            }
            return; /*0x6ebf3e*/
          }
        }
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 388))(v2) == 2 ) /*0x6ebd5b*/
        {
          if ( !*(_DWORD *)(v2 + 1444) ) /*0x6ebd61*/
            goto LABEL_87; /*0x6ebd61*/
          if ( ObjectClass::DistanceTo((void *)v2, *(_DWORD *)(v2 + 1444)) <= *((_DWORD *)g_RulesClass_Instance + 1478) ) /*0x6ebd7f*/
          {
            if ( !*(_DWORD *)(v2 + 1652) ) /*0x6ebd85*/
              WinAPI::Wrapper(-2147467261); /*0x6ebd94*/
            if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(**(_DWORD **)(v2 + 1652) + 16))(*(_DWORD *)(v2 + 1652)) ) /*0x6ebda2*/
            {
  LABEL_87:
              if ( !*(_DWORD *)(v2 + 692) ) /*0x6ebdad*/
              {
                (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v2 + 1152))(v2, 0, 1); /*0x6ebdc3*/
                (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v2 + 1156))(v2, 0, 1); /*0x6ebdd1*/
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
  char result; // al
  int v3; // esi
  int v4; // eax
  int v5; // ebp
  _DWORD *v6; // edi
  _DWORD *v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // eax
  double v12; // st7
  char v13; // [esp+23h] [ebp-2Dh]
  _DWORD v14[3]; // [esp+24h] [ebp-2Ch] BYREF
  int v15; // [esp+30h] [ebp-20h]
  int v16; // [esp+34h] [ebp-1Ch]
  _BYTE v17[12]; // [esp+38h] [ebp-18h] BYREF
  _BYTE v18[12]; // [esp+44h] [ebp-Ch] BYREF

  result = 0; /*0x6ebf5d*/
  v3 = *(_DWORD *)(this + 84); /*0x6ebf63*/
  v13 = 0; /*0x6ebf69*/
  if ( *(_BYTE *)(this + 124) ) /*0x6ebf5f*/
  {
    if ( v3 ) /*0x6ebf79*/
    {
      do /*0x6ec10e*/
      {
        if ( *(_BYTE *)(v3 + 144) /*0x6ebfc3*/
          && *(_DWORD *)(v3 + 108)
          && (g_IKnowWhatImDoing || !*(_BYTE *)(v3 + 129))
          && (*(_BYTE *)(v3 + 1673) || (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 44))(v3) == 2) )
        {
          v4 = *SessionClass::GetEntry(*(_DWORD **)(this + 40), v14); /*0x6ebfd6*/
          if ( v4 == 54 || v4 == 53 ) /*0x6ebfe0*/
            v5 = g_RulesClass_Instance[1].PrerequisitePower[1]; /*0x6ebff5*/
          else
            v5 = g_RulesClass_Instance[1].PrerequisitePower[0]; /*0x6ebfe8*/
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 44))(v3) == 2 ) /*0x6ec005*/
            v5 *= 3; /*0x6ec007*/
          if ( *(_BYTE *)(*(_DWORD *)(this + 36) + 167) /*0x6ec01c*/
            && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 1248))(v3) )
          {
            v5 /= 3; /*0x6ec034*/
          }
          v6 = (_DWORD *)(*(int (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(this + 56) + 72))( /*0x6ec045*/
                           *(_DWORD *)(this + 56),
                           v17);
          v7 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v3 + 72))(v3, v18); /*0x6ec04e*/
          v8 = *v7 - *v6; /*0x6ec055*/
          v9 = v7[1]; /*0x6ec057*/
          v10 = v7[2]; /*0x6ec05a*/
          v14[2] = v8; /*0x6ec05d*/
          v11 = v10 - v6[2]; /*0x6ec06c*/
          v15 = v9 - v6[1]; /*0x6ec06e*/
          v16 = v11; /*0x6ec072*/
          v12 = Math::Sqrt((double)v8 * (double)v8 + (double)v15 * (double)v15 + (double)v11 * (double)v11); /*0x6ec09b*/
          if ( (int)Math::RoundToInt(v12) <= v5 ) /*0x6ec0aa*/
          {
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 388))(v3) != 5 ) /*0x6ec0e8*/
            {
              (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v3 + 488))(v3, 5, 0); /*0x6ec0f2*/
              (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v3 + 1152))(v3, 0, 1); /*0x6ec100*/
            }
          }
          else
          {
            if ( !*(_DWORD *)(v3 + 1444) ) /*0x6ec0ac*/
            {
              (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v3 + 488))(v3, 2, 0); /*0x6ec0be*/
              (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v3 + 1152))(v3, *(_DWORD *)(this + 56), 1); /*0x6ec0ce*/
            }
            v13 = 1; /*0x6ec0d4*/
          }
        }
        v3 = *(_DWORD *)(v3 + 1496); /*0x6ec106*/
      }
      while ( v3 ); /*0x6ec10e*/
      result = v13; /*0x6ec114*/
    }
    *(_BYTE *)(this + 124) = result; /*0x6ec119*/
  }
  return result; /*0x6ebf6f*/
}
}
// 0x6EC5A0
namespace gamemd {
int TeamClass::PowerDrainUpdate(int * a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // edx
  int v10; // eax
  int v11; // edx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // ecx
  int v16; // edx
  int v17; // eax
  int v18; // ecx
  int v19; // edx
  int v20; // eax
  int v21; // ecx
  int v22; // edx
  int v23; // eax
  int v24; // ecx
  int v25; // edx

  AbstractClass::ProcessPower((#378 *)this); /*0x6ec5a9*/
  v3 = (*(int (__stdcall **)(int))(*(_DWORD *)(*(_DWORD *)(this + 36) + 4) + 16))(*(_DWORD *)(this + 36) + 4); /*0x6ec5b7*/
  Power::TimerProcess(v3); /*0x6ec5bd*/
  v4 = (*(int (__stdcall **)(int))(*(_DWORD *)(*(_DWORD *)(this + 44) + 4) + 16))(*(_DWORD *)(this + 44) + 4); /*0x6ec5cb*/
  Power::TimerProcess(v4); /*0x6ec5d1*/
  v5 = *(_DWORD *)(this + 56); /*0x6ec5d6*/
  if ( v5 ) /*0x6ec5db*/
  {
    v6 = (*(int (__stdcall **)(int))(*(_DWORD *)(v5 + 4) + 16))(v5 + 4); /*0x6ec5e4*/
    Power::TimerProcess(v6); /*0x6ec5ea*/
  }
  Power::TimerProcess(*(_DWORD *)(this + 72)); /*0x6ec5f5*/
  Power::TimerProcess(*(_DWORD *)(this + 76)); /*0x6ec600*/
  v7 = *(_DWORD *)(this + 84); /*0x6ec605*/
  if ( v7 ) /*0x6ec60a*/
  {
    v8 = (*(int (__stdcall **)(int))(*(_DWORD *)(v7 + 4) + 16))(v7 + 4); /*0x6ec613*/
    Power::TimerProcess(v8); /*0x6ec619*/
  }
  v9 = *(_DWORD *)(this + 88); /*0x6ec61e*/
  v10 = *(_DWORD *)(this + 96); /*0x6ec621*/
  if ( v9 != -1 ) /*0x6ec627*/
  {
    if ( (int)g_CurrentFrame - v9 >= v10 ) /*0x6ec633*/
      v10 = 0; /*0x6ec639*/
    else
      v10 -= (int)g_CurrentFrame - v9; /*0x6ec635*/
  }
  Power::TimerProcess(v10); /*0x6ec63e*/
  v11 = *(_DWORD *)(this + 100); /*0x6ec643*/
  v12 = *(_DWORD *)(this + 108); /*0x6ec646*/
  if ( v11 != -1 ) /*0x6ec64c*/
  {
    if ( (int)g_CurrentFrame - v11 >= v12 ) /*0x6ec658*/
      v12 = 0; /*0x6ec65e*/
    else
      v12 -= (int)g_CurrentFrame - v11; /*0x6ec65a*/
  }
  Power::TimerProcess(v12); /*0x6ec663*/
  v13 = *(_DWORD *)(this + 112); /*0x6ec668*/
  if ( v13 ) /*0x6ec66d*/
  {
    v14 = (*(int (__stdcall **)(int))(*(_DWORD *)(v13 + 4) + 16))(v13 + 4); /*0x6ec676*/
    v13 = Power::TimerProcess(v14); /*0x6ec67c*/
  }
  LOBYTE(v13) = *(_BYTE *)(this + 119); /*0x6ec681*/
  Power::FlagProcess(a2, v13); /*0x6ec687*/
  LOBYTE(v15) = *(_BYTE *)(this + 120); /*0x6ec68c*/
  Power::FlagProcess(a2, v15); /*0x6ec692*/
  LOBYTE(v16) = *(_BYTE *)(this + 121); /*0x6ec697*/
  v17 = Power::FlagProcess(a2, v16); /*0x6ec69d*/
  LOBYTE(v17) = *(_BYTE *)(this + 122); /*0x6ec6a2*/
  Power::FlagProcess(a2, v17); /*0x6ec6a8*/
  LOBYTE(v18) = *(_BYTE *)(this + 123); /*0x6ec6ad*/
  Power::FlagProcess(a2, v18); /*0x6ec6b3*/
  LOBYTE(v19) = *(_BYTE *)(this + 124); /*0x6ec6b8*/
  v20 = Power::FlagProcess(a2, v19); /*0x6ec6be*/
  LOBYTE(v20) = *(_BYTE *)(this + 125); /*0x6ec6c3*/
  Power::FlagProcess(a2, v20); /*0x6ec6c9*/
  LOBYTE(v21) = *(_BYTE *)(this + 126); /*0x6ec6ce*/
  Power::FlagProcess(a2, v21); /*0x6ec6d4*/
  LOBYTE(v22) = *(_BYTE *)(this + 127); /*0x6ec6d9*/
  v23 = Power::FlagProcess(a2, v22); /*0x6ec6df*/
  LOBYTE(v23) = *(_BYTE *)(this + 128); /*0x6ec6e4*/
  Power::FlagProcess(a2, v23); /*0x6ec6ed*/
  LOBYTE(v24) = *(_BYTE *)(this + 130); /*0x6ec6f2*/
  Power::FlagProcess(a2, v24); /*0x6ec6fb*/
  LOBYTE(v25) = *(_BYTE *)(this + 131); /*0x6ec700*/
  Power::FlagProcess(a2, v25); /*0x6ec709*/
  return Checksummer::Add_Buffer((unsigned int *)a2, (unsigned __int8 *)(this + 136), 24); /*0x6ec71e*/
}
}
// 0x6EC7D0
namespace gamemd {
void TeamClass::MoveTeamToWaypoint(ScriptClass * aP1, TeamClass * aP2)
{
  int v3; // ebp
  int *v4; // esi
  int v5; // ebx
  int *v6; // edi
  int v7; // ebp
  void *v8; // eax
  _DWORD *Entry; // eax
  __int16 *Waypoint_Location; // eax
  int v11; // ebx
  void *v12; // eax
  int v13; // eax
  int v14; // eax
  void *v15; // [esp+Ch] [ebp-10h]
  _DWORD v16[2]; // [esp+14h] [ebp-8h] BYREF

  v3 = (int)this; /*0x6ec7d8*/
  v16[0] = this; /*0x6ec7dc*/
  if ( (_BYTE)aP2 ) /*0x6ec7e0*/
  {
    v4 = *(this + 21); /*0x6ec7e8*/
    v5 = -1; /*0x6ec7eb*/
    v6 = v4; /*0x6ec7ef*/
    if ( v4 ) /*0x6ec7f3*/
    {
      do /*0x6ec853*/
      {
        v7 = *(_DWORD *)((*(int (__thiscall **)(int *))(*v4 + 132))(v4) + 1532); /*0x6ec7ff*/
        if ( *((_BYTE *)v4 + 144) /*0x6ec845*/
          && v4[27]
          && (g_IKnowWhatImDoing || !*((_BYTE *)v4 + 129))
          && (*((_BYTE *)v4 + 1673) || (*(int (__thiscall **)(int *))(*v4 + 44))(v4) == 2)
          && v7 > v5 )
        {
          v6 = v4; /*0x6ec847*/
          v5 = v7; /*0x6ec849*/
        }
        v4 = (int *)v4[374]; /*0x6ec84b*/
      }
      while ( v4 ); /*0x6ec853*/
      v3 = v16[0]; /*0x6ec855*/
    }
    aP2 = *ScenarioClass::Get_Waypoint_Location((char *)g_ScenarioClass_Instance, &aP1, *(_DWORD *)(aP1 + 4)); /*0x6ec87d*/
    v8 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&aP2); /*0x6ec881*/
    TeamClass::SelectMember(v3, (int)v8); /*0x6ec889*/
    if ( !*(_BYTE *)(v3 + 127) /*0x6ec8d3*/
      || !SessionClass::SetField(*(_DWORD **)(v3 + 40))
      || (Entry = SessionClass::GetEntry(*(_DWORD **)(v3 + 40), v16), *Entry != 3)
      || (Waypoint_Location = (__int16 *)ScenarioClass::Get_Waypoint_Location(
                                           (char *)g_ScenarioClass_Instance,
                                           &aP1,
                                           Entry[1]),
          LayerClass::IsWithinUsableArea(&MapClass_Instance, Waypoint_Location, 1)) )
    {
      v11 = *v6; /*0x6ec8dc*/
      v12 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&aP2); /*0x6ec8f0*/
      if ( (*(int (__thiscall **)(int *, void *, int, int, _DWORD, _DWORD))(v11 + 428))(v6, v12, -1, -1, 0, 0) ) /*0x6ec8f8*/
      {
        v13 = *v6; /*0x6ec916*/
        aP1 = 0; /*0x6ec91e*/
        v14 = (*(int (__thiscall **)(int *))(v13 + 132))(v6); /*0x6ec928*/
        aP2 = *LayerClass::Pathfinding_Find( /*0x6ec94b*/
                &MapClass_Instance,
                (int)&aP2,
                v16,
                (__int16 *)&aP2,
                *(_DWORD *)(v14 + 1660),
                -1,
                0,
                0,
                1,
                1,
                0,
                0,
                0,
                1,
                (__int16 *)&aP1,
                0,
                0);
      }
    }
    if ( aP2 == dword_B0E948 ) /*0x6ec95e*/
    {
      TeamClass::SelectMember(v3, 0); /*0x6ec984*/
    }
    else
    {
      v15 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&aP2); /*0x6ec97d*/
      TeamClass::SelectMember(v3, (int)v15); /*0x6ec97e*/
    }
  }
  TeamClass::UpdateMembers(v3); /*0x6ec98b*/
}
}
// 0x5095D0
namespace gamemd {
int TeamClass::CountActiveTeamsForType(ObjectClass * aP1)
{
  int result; // eax
  int v3; // edi
  int *v4; // esi
  int v5; // edx

  result = 0; /*0x5095d6*/
  if ( g_HouseClass_AIProductionState - 1 >= 0 ) /*0x5095db*/
  {
    v3 = g_HouseClass_AIProductionState; /*0x5095ea*/
    v4 = (int *)((char *)g_TeamClassPool + 4 * g_HouseClass_AIProductionState - 4); /*0x5095ed*/
    do /*0x509605*/
    {
      v5 = *v4; /*0x5095f0*/
      if ( *v4 && *(void **)(v5 + 44) == this && aP1 == *(_DWORD *)(v5 + 36) ) /*0x5095fe*/
        ++result; /*0x509600*/
      --v4; /*0x509601*/
      --v3; /*0x509604*/
    }
    while ( v3 ); /*0x509605*/
  }
  return result; /*0x50960a*/
}
} // namespace gamemd

// 0x633EA0
namespace gamemd {
unsigned int * TeamClass::FindScriptAction(unsigned int * a2)
{
  _DWORD *Type; // esi
  int v4; // eax
  int v5; // eax
  int v6; // edi
  int v8; // eax
  int v9; // edx
  int v10; // ecx

  Type = (_DWORD *)BuildingClass::GetType(a2); /*0x633eae*/
  v4 = Type[1]; /*0x633eb0*/
  a2 = this; /*0x633eb7*/
  v5 = (*(int (__thiscall **)(_DWORD *, _DWORD **))(v4 + 16))(Type + 1, &a2); /*0x633ebf*/
  if ( v5 == -1 ) /*0x633ec5*/
    return 0; /*0x633ec5*/
  v6 = Type[5]; /*0x633ec7*/
  if ( v6 == 1 ) /*0x633ecd*/
    return this; /*0x633ed4*/
  v8 = v5 - 1; /*0x633ed7*/
  if ( v8 < 0 ) /*0x633ed8*/
    v8 = v6 - 1; /*0x633eda*/
  v9 = v8; /*0x633edf*/
  if ( !v6 ) /*0x633ee1*/
    return 0; /*0x633ee1*/
  if ( v8 >= v6 ) /*0x633ee5*/
  {
    v10 = Type[37]; /*0x633ee7*/
    if ( v10 < 0 ) /*0x633eef*/
      return 0; /*0x633eef*/
    v9 = v10 + (v8 - v10) % Type[36]; /*0x633efc*/
  }
  if ( v9 >= 0 && v9 < v6 ) /*0x633f04*/
    return *(_DWORD **)(Type[2] + 4 * v9); /*0x633f0f*/
  return 0; /*0x633ecf*/
}
} // namespace gamemd

// 0x633F20
namespace gamemd {
unsigned int * TeamClass::GetNextScriptAction(unsigned int * a2)
{
  _DWORD *Type; // esi
  int v4; // eax
  int v5; // eax
  int v6; // edi
  int v8; // eax
  int v9; // edx
  int v10; // ecx

  Type = (_DWORD *)BuildingClass::GetType(a2); /*0x633f2e*/
  v4 = Type[1]; /*0x633f30*/
  a2 = this; /*0x633f37*/
  v5 = (*(int (__thiscall **)(_DWORD *, _DWORD **))(v4 + 16))(Type + 1, &a2); /*0x633f3f*/
  if ( v5 == -1 ) /*0x633f45*/
    return 0; /*0x633f45*/
  v6 = Type[5]; /*0x633f47*/
  if ( v6 == 1 ) /*0x633f4d*/
    return this; /*0x633f54*/
  v8 = v5 + 1; /*0x633f57*/
  if ( v8 >= v6 ) /*0x633f5a*/
    v8 = 0; /*0x633f5c*/
  v9 = v8; /*0x633f60*/
  if ( !v6 ) /*0x633f62*/
    return 0; /*0x633f62*/
  if ( v8 >= v6 ) /*0x633f66*/
  {
    v10 = Type[37]; /*0x633f68*/
    if ( v10 < 0 ) /*0x633f70*/
      return 0; /*0x633f70*/
    v9 = v10 + (v8 - v10) % Type[36]; /*0x633f7d*/
  }
  if ( v9 >= 0 && v9 < v6 ) /*0x633f85*/
    return *(_DWORD **)(Type[2] + 4 * v9); /*0x633f90*/
  return 0; /*0x633f4f*/
}
} // namespace gamemd

// 0x6915A0
namespace gamemd {
char TeamClass::SetField11(ScriptClass * aP1)
{
  *(this + 11) = aP1; /*0x6915a4*/
  return 1; /*0x6915a9*/
}
} // namespace gamemd

// 0x6915B0
namespace gamemd {
BOOL TeamClass::Check()
{
  unsigned int v1; // eax

  v1 = *(this + 11) + 1; /*0x6915b3*/
  *(this + 11) = v1; /*0x6915b4*/
  return v1 < *(_DWORD *)(*(this + 9) + 160); /*0x6915c4*/
}
} // namespace gamemd

// 0x6E9050
namespace gamemd {
char TeamClass::SelectMember(AbstractClass * aP1)
{
  int v4; // eax
  _DWORD *v5; // esi
  int v6; // eax
  int v7; // edx
  bool v8; // bl
  int v9; // eax
  _DWORD *v10; // esi
  bool v12; // [esp+10h] [ebp+4h]

  v4 = *(_DWORD *)(this + 60); /*0x6e9059*/
  if ( aP1 != v4 ) /*0x6e905e*/
  {
    v5 = *(_DWORD **)(this + 84); /*0x6e9060*/
    if ( v4 ) /*0x6e9065*/
    {
      for ( ; v5; v5 = (_DWORD *)v5[374] ) /*0x6e9069*/
      {
        v6 = *(_DWORD *)(this + 60); /*0x6e906c*/
        v7 = v5[361]; /*0x6e9075*/
        v12 = v5[173] == v6; /*0x6e9082*/
        v8 = v7 == v6; /*0x6e9086*/
        if ( v5[173] == v6 || v7 == v6 ) /*0x6e908f*/
        {
          (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*v5 + 488))(v5, 5, 0); /*0x6e9099*/
          if ( v8 ) /*0x6e90a1*/
            (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v5 + 1152))(v5, 0, 1); /*0x6e90ab*/
          if ( v12 ) /*0x6e90b7*/
            (*(void (__thiscall **)(_DWORD *, _DWORD))(*v5 + 968))(v5, 0); /*0x6e90bf*/
        }
      }
    }
  }
  v9 = *(_DWORD *)(this + 64); /*0x6e90d0*/
  if ( v9 == *(_DWORD *)(this + 60) || !v9 ) /*0x6e90dc*/
    *(_DWORD *)(this + 64) = aP1; /*0x6e90de*/
  *(_DWORD *)(this + 60) = aP1; /*0x6e90e3*/
  if ( aP1 ) /*0x6e90e6*/
  {
    v9 = (*(int (__thiscall **)(int))(*(_DWORD *)aP1 + 44))(aP1); /*0x6e90ed*/
    if ( v9 == 11 ) /*0x6e90f3*/
    {
      LOBYTE(v9) = Type::CheckAmbiguity(&MapClass_Instance, aP1, 1); /*0x6e90fd*/
      if ( (_BYTE)v9 ) /*0x6e9104*/
      {
        *(_BYTE *)(this + 130) = 0; /*0x6e9132*/
      }
      else
      {
        v10 = *(_DWORD **)(this + 84); /*0x6e9106*/
        for ( *(_BYTE *)(this + 130) = 1; v10; v10 = (_DWORD *)v10[374] ) /*0x6e9112*/
          LOBYTE(v9) = (*(int (__thiscall **)(_DWORD *, _DWORD, int))(*v10 + 1152))(v10, 0, 1); /*0x6e911c*/
      }
    }
  }
  return v9; /*0x6e912c*/
}
} // namespace gamemd

// 0x6EA500
namespace gamemd {
char TeamClass::AddMember(IUnknown * aP1, IUnknown * aP2)
{
  int v3; // edi
  char result; // al
  char v6; // bl
  int v7; // eax
  int v8; // ecx
  int v9; // edx

  v3 = aP1; /*0x6ea503*/
  if ( !aP1 ) /*0x6ea50b*/
    return 0; /*0x6ea50f*/
  v6 = aP2; /*0x6ea515*/
  result = TeamClass::ValidateMember(aP1, &aP1, aP2); /*0x6ea522*/
  if ( result ) /*0x6ea529*/
  {
    if ( *(_DWORD *)(v3 + 1492) ) /*0x6ea531*/
      TeamClass::LiberateMember_Start(v3, -1, 0); /*0x6ea540*/
    if ( !v6 ) /*0x6ea547*/
      ++*(_DWORD *)(this + 4 * aP1 + 136); /*0x6ea54d*/
    *(_BYTE *)(v3 + 1673) = *(_DWORD *)(this + 84) == 0; /*0x6ea55c*/
    *(_DWORD *)(v3 + 1496) = *(_DWORD *)(this + 84); /*0x6ea565*/
    *(_DWORD *)(this + 84) = v3; /*0x6ea56b*/
    *(_DWORD *)(v3 + 1492) = this; /*0x6ea56e*/
    *(_DWORD *)(v3 + 532) = TeamTypeClass::GetGroup(*(_DWORD *)(this + 36)); /*0x6ea57c*/
    if ( *(_DWORD *)(this + 112) /*0x6ea5a8*/
      && (!*(_BYTE *)(*(_DWORD *)(this + 36) + 179)
       || *(int *)((*(int (__thiscall **)(int))(*(_DWORD *)v3 + 132))(v3) + 1504) > 0) )
    {
      ObjectClass::SetReference((_DWORD *)v3, *(_DWORD *)(this + 112)); /*0x6ea5b0*/
    }
    ++*(_DWORD *)(this + 72); /*0x6ea5bb*/
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 704))(v3); /*0x6ea5c0*/
    v8 = *(_DWORD *)(this + 52); /*0x6ea5c9*/
    *(_DWORD *)(this + 76) += v7; /*0x6ea5d3*/
    if ( !v8 ) /*0x6ea5d6*/
      TeamClass::FindClosestEnemy(this + 52, this + 56); /*0x6ea5df*/
    v9 = *(_DWORD *)(this + 36); /*0x6ea5e4*/
    *(_BYTE *)(this + 126) = 1; /*0x6ea5e9*/
    *(_BYTE *)(this + 125) = 1; /*0x6ea5ec*/
    *(_BYTE *)(v3 + 1058) = *(_BYTE *)(v9 + 245); /*0x6ea5f5*/
    return 1; /*0x6ea5e7*/
  }
  return result; /*0x6ea50d*/
}
} // namespace gamemd

// 0x6EA610
namespace gamemd {
bool TeamClass::ValidateMember(TechnoClass * aP1, int * a2, char a4)
{
  int v5; // edi
  int v6; // eax
  _DWORD *v7; // ecx
  bool v8; // bl
  int v9; // eax
  int v11; // [esp+10h] [ebp-8h] BYREF

  if ( this == *(_DWORD **)(aP1 + 1492) /*0x6ea693*/
    || !aP1
    || !*(_BYTE *)(aP1 + 144)
    || !*(_DWORD *)(aP1 + 108)
    || !g_IKnowWhatImDoing && *(_BYTE *)(aP1 + 129)
    || *(_DWORD *)(aP1 + 540) != *(this + 11)
    || Team::AllMembersValid((int *)aP1)
    && ((*(int (__thiscall **)(int))(*(_DWORD *)aP1 + 44))(aP1) != 2 || !*(_BYTE *)(*(_DWORD *)(aP1 + 1732) + 3597)) )
  {
    return 0; /*0x6ea693*/
  }
  *a2 = 0; /*0x6ea6a5*/
  if ( *(int *)(*(_DWORD *)(*(this + 9) + 228) + 156) > 0 ) /*0x6ea6bc*/
  {
    do /*0x6ea6f0*/
    {
      v5 = *a2; /*0x6ea6c0*/
      if ( *(_DWORD *)(*(_DWORD *)(*(this + 9) + 228) + 8 * v5 + 168) == (*(int (__thiscall **)(int))(*(_DWORD *)aP1 + 136))(aP1) ) /*0x6ea6da*/
        break; /*0x6ea6da*/
      *a2 = v5 + 1; /*0x6ea6df*/
    }
    while ( v5 + 1 < *(_DWORD *)(*(_DWORD *)(*(this + 9) + 228) + 156) ); /*0x6ea6f0*/
  }
  if ( *a2 == *(_DWORD *)(*(_DWORD *)(*(this + 9) + 228) + 156) && !a4 ) /*0x6ea70b*/
    return 0; /*0x6ea70b*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)aP1 + 388))(aP1) != -1 ) /*0x6ea71e*/
  {
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)aP1 + 388))(aP1); /*0x6ea724*/
    if ( !(unsigned __int8)IPersistStream::SetField(v6) ) /*0x6ea72c*/
      return 0; /*0x6ea72c*/
  }
  if ( !*(_BYTE *)(aP1 + 1057) && !*(_BYTE *)(*(this + 9) + 169) ) /*0x6ea746*/
    return 0; /*0x6ea746*/
  v7 = (_DWORD *)*(this + 10); /*0x6ea754*/
  v8 = 0; /*0x6ea757*/
  if ( v7 ) /*0x6ea75b*/
    v8 = *SessionClass::GetEntry(v7, &v11) == 8; /*0x6ea76c*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)aP1 + 44))(aP1) == 2 ) /*0x6ea778*/
    v8 = 1; /*0x6ea77a*/
  return (*(_BYTE *)(aP1 + 1058) || !*(_BYTE *)(*(this + 9) + 169) || v8) /*0x6ea84c*/
      && !(unsigned __int8)TeamClass::HasAnyMemberFlagged(aP1)
      && !(unsigned __int8)FootClass::checkPassability(aP1)
      && !*(_DWORD *)(aP1 + 740)
      && ((v9 = *(_DWORD *)(aP1 + 1492)) == 0 || *(_DWORD *)(*(_DWORD *)(v9 + 36) + 180) < *(_DWORD *)(*(this + 9) + 180))
      && ((*(int (__thiscall **)(int))(*(_DWORD *)aP1 + 44))(aP1) != 2
       || !*(_DWORD *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)aP1 + 1016))(aP1, 0)
       || *(_DWORD *)(aP1 + 764))
      && (*(this + *a2 + 34) < *(_DWORD *)(*(_DWORD *)(*(this + 9) + 228) + 8 * *a2 + 164) || a4)
      && !*(_DWORD *)(aP1 + 740)
      && *(_DWORD *)(aP1 + 688) == 0;
}
} // namespace gamemd

// 0x6EAE60
namespace gamemd {
int TeamClass::ExecuteAction(int a2, char a3)
{
  int result; // eax
  int v4; // edx

  result = a2; /*0x6eae60*/
  if ( a2 == *(this + 28) ) /*0x6eae6c*/
    *(this + 28) = 0; /*0x6eae6e*/
  v4 = *(this + 21); /*0x6eae71*/
  if ( a2 == v4 && a3 ) /*0x6eae7c*/
    *(this + 21) = *(_DWORD *)(v4 + 1496); /*0x6eae84*/
  if ( a2 == *(this + 11) ) /*0x6eae8a*/
    *(this + 11) = 0; /*0x6eae8c*/
  if ( a2 == *(this + 10) ) /*0x6eae92*/
    *(this + 10) = 0; /*0x6eae94*/
  if ( *(this + 16) == a2 ) /*0x6eae9a*/
    *(this + 16) = 0; /*0x6eae9c*/
  if ( *(this + 15) == a2 ) /*0x6eaea2*/
    *(this + 15) = 0; /*0x6eaea4*/
  if ( *(this + 13) == a2 ) /*0x6eaeaa*/
    *(this + 13) = 0; /*0x6eaeac*/
  if ( *(this + 9) == a2 ) /*0x6eaeb2*/
    *(this + 9) = 0; /*0x6eaeb4*/
  if ( *(this + 14) == a2 ) /*0x6eaeba*/
    *(this + 14) = 0; /*0x6eaebc*/
  if ( *(this + 17) == a2 ) /*0x6eaec2*/
    *(this + 17) = 0; /*0x6eaec4*/
  if ( *(this + 12) == a2 ) /*0x6eaeca*/
    *(this + 12) = 0; /*0x6eaecc*/
  return result; /*0x6eaecf*/
}
} // namespace gamemd

// 0x6EC3A0
namespace gamemd {
char TeamClass::WakeUpAllMembers()
{
  char result; // al
  int i; // esi

  result = TeamClass::SelectMember((int)this, 0); /*0x6ec3a5*/
  for ( i = *(this + 21); i; i = *(_DWORD *)(i + 1496) ) /*0x6ec3af*/
  {
    result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)i + 968))(i, 0); /*0x6ec3b7*/
    *(_BYTE *)(i + 1672) = 1; /*0x6ec3bd*/
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
      AbstractClass::InitVtables(aP0, (int)&aP1); /*0x6ec473*/
      __4type_info_AAEAAV0_ABV0__Z(&aP1); /*0x6ec480*/
      *aP0 = (int)&TeamClass::`vftable'; /*0x6ec485*/
      aP0[1] = (int)&TeamClass::`vftable'; /*0x6ec48b*/
      aP0[2] = (int)&TeamClass::`vftable'; /*0x6ec492*/
      aP0[3] = (int)&TeamClass::`vftable'; /*0x6ec499*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP0 + 9); /*0x6ec4a9*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP0 + 10); /*0x6ec4b7*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP0 + 11); /*0x6ec4c5*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP0 + 28); /*0x6ec4d3*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP0 + 21); /*0x6ec4e1*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP0 + 14); /*0x6ec4ef*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP0 + 16); /*0x6ec4fd*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP0 + 13); /*0x6ec50b*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP0 + 15); /*0x6ec519*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP0 + 12); /*0x6ec527*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP0 + 17); /*0x6ec535*/
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

  result = AbstractClass::SaveLoad_Prefix(aP0, a1, aP2); /*0x6ec54f*/
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
  a2[3] = -777003740; /*0x6ec590*/
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
