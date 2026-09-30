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

// 0x4D9E70
namespace gamemd {
int TeamClass::CheckCohesion()
{
  ObjectClass *v2; // ecx
  ObjectClass *v3; // esi
  int v4; // eax
  int v5; // eax
  int v6; // eax
  unsigned int *v7; // edi
  unsigned int *v8; // eax
  int v9; // eax
  int v11; // [esp+20h] [ebp-1Ch]
  unsigned char v12[12]; // [esp+24h] [ebp-18h] BYREF
  unsigned char v13[12]; // [esp+30h] [ebp-Ch] BYREF

  v3 = v2; /*0x4d9e74*/
    v2 = (*(int (**)(#374 *))(*(unsigned int *)this + 44))(this);
  if ( v4 > 0 /*0x4d9f52*/
    && v4 <= 2
    && (uint8_t)Team::AllMembersValid((Team *)v3)
    && (v5 = Array::Get((Array *)v3, 0), (*(int (**)(int))(*(unsigned int *)v5 + 44))(v5) == 6)
    && *(unsigned char *)(*(unsigned int *)(Array::Get((Array *)v3, 0) + 1312) + 5801)
    && (v6 = Array::Get((Array *)v3, 0),
        v7 = (unsigned int *)(*(int (**)(int, unsigned char *))(*(unsigned int *)v6 + 72))(v6, v12),
        v8 = (unsigned int *)(*((int (**)(ObjectClass *, unsigned char *))v3->AbstractClass + 18))(v3, v13),
        v11 = v8[2] - v7[2],
        Math::Sqrt(
          (double)(*v8 - *v7) * (double)(*v8 - *v7)
        + (double, void * a1, void * a2)(v8[1] - v7[1]) * (double)(v8[1] - v7[1])
        + (double)v11 * (double)v11),
        IDA_LOWORD(v9) = Math::RoundToInt(a2),
        v9 < 128) )
  {
    return 1; /*0x4d9f54*/
  }
  else
  {
// 0x5f42c0
    return AbstractClass::COMStub_Return0_38(v3); /*0x4d9f5d*/
  }
}
}
// 0x4E0080
namespace gamemd {
int TeamClass::HasAnyMemberFlagged()
{
    return *((unsigned int *)this + 6716) || *((unsigned int *)this + 6720) || *((unsigned int *)this + 6724);
}
}
// 0x577BB0
namespace gamemd {
int TeamClass::DisbandTeam(int a2)
{
  int v4; // eax
  int i; // eax
  unsigned int v6; // edx

  a2 = a2; /*0x577bb0*/
  if ( a2 ) /*0x577bb9*/
    *(unsigned char *)(*((unsigned int *)stru_A80220.? + *(unsigned int *)(a2 + 48)) + 577) = 0; /*0x577bc7*/
  if ( (Object *)a2 != (gamemd::Object *)(dword_A83D4C) ) /*0x577bd4*/
  {
    if ( a2 ) /*0x577bd8*/
    goto LABEL_7; /*0x577bd8*/
  }
  if ( !a2 ) /*0x577be2*/
  LABEL_7:
        Debug::Log();
    v4 = *((unsigned int *)this + 244);
    *((unsigned int *)this + 268) = 1;
    *((unsigned int *)this + 272) = v4;
    *((unsigned int *)this + 276) = v4 - 1;
    *((unsigned int *)this + 280) = (v4 << 11) + *((unsigned int *)this + 316) + 4;
  for (); i; i = LayerClass::CellIteratorNext((LayerClass *)this) ) /*0x577c2c*/
  {
    v6 = (int)(*(unsigned int *)(i + 320) & 0xFFFFFFFC);
    *(unsigned int *)(i + 300) &= 0xFFFFFFE7; /*0x577c40*/
    *(unsigned int *)(i + 320) = v6; /*0x577c48*/
  }
  HouseClass::RevealShroudForAllies(0, 0); /*0x577c60*/
  dword_A83D4C->__pad_140[256] = 0; /*0x577c6f*/
  FogOfWar::Render((FogOfWar *)&stru_87F5F0.__pad_58[416]); /*0x577c76*/
    return (*(int (**)(unsigned int *, int))(*(char *)this + 224))(this, 2);
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
  int v13; // eax
  int v14; // eax
  int *v15; // ecx
  unsigned int *v16; // eax
  unsigned int v17[3]; // [esp+24h] [ebp-18h] BYREF
  int v18[3]; // [esp+30h] [ebp-Ch] BYREF

  result = a2; /*0x62a263*/
    v5 = *((unsigned int *)this + 144);
  if ( a2 == creationFrame ) /*0x62a271*/
  {
        *((unsigned int *)this + 144) = 0;
    return result; /*0x62a280*/
  }
    if ( a2 == *((unsigned int *)this + 160) )
  {
    result = *((unsigned int *)((char *)&stru_A8EB00 + 376)); /*0x62a28c*/
    if ( !stru_A8EB00.?[376] ) /*0x62a295*/
    {
            *((unsigned int *)this + 160) = 0;
      return result; /*0x62a2a0*/
    }
        v6 = *((unsigned int *)this + 176);
        v7 = *((unsigned int *)this + 208);
    if ( v6 != -1 ) /*0x62a2ac*/
    {
      if ( *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - v6 >= ParasiteClass_field_34 ) /*0x62a2b8*/
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
          || (Value = ProgressTimer::GetValue((ProgressTimer *)(*(unsigned int *)this->__pad_28 + 904), &a2),
              !(*(uint8_t (**)(int, unsigned int *, unsigned int))(*(unsigned int *)this->creationFrame + 216))(
                 this->creationFrame,
                 v17,
                 (uint8_t)((unsigned int)((*Value >> 7) + 1) >> 1))) )
        {
          --dword_A8E7AC; /*0x62a462*/
                    *(unsigned int *)(*((unsigned int *)this + 144) + 108) = 0;
                    result = (*(int (**)(unsigned int))(**(unsigned int **)((char *)this + 144) + 248))(*((unsigned int *)this + 144));
                    *((unsigned int *)this + 160) = 0;
        }
        else
        {
          --dword_A8E7AC; /*0x62a379*/
                    v13 = *((unsigned int *)this + 144);
                    if ( *(unsigned char *)(v13 + 1074) && (unsigned __int8)House::IsHumanPlayer(*(#375 **)(v13 + 540)) )
          {
                        *(unsigned char *)(*((unsigned int *)this + 144) + 1074) = 0;
                        (*(void (**)(unsigned int))(**(unsigned int **)((char *)this + 144) + 332))(*((unsigned int *)this + 144));
          }
                    v14 = *((unsigned int *)this + 144);
                    v15 = *(unsigned int *)(v14 + 1076);
          if ( v15 ) /*0x62a3b8*/
            TeamClass::AddMember(v15, v14, 0); /*0x62a3bc*/
                    if ( !(*(unsigned __int8 (**)(unsigned int))(**(unsigned int **)((char *)this + 144) + 1196))(*((unsigned int *)this + 144)) )
          {
                        TechnoClass::SetFocus(*(unsigned int **)((char *)this + 144), 0);
                        (*(void (**)(unsigned int, unsigned int))(**(unsigned int **)((char *)this + 144) + 968))(*((unsigned int *)this + 144), 0);
                        (*(void (**)(unsigned int, unsigned int, int))(**(unsigned int **)((char *)this + 144) + 1152))(
              this->creationFrame,
              0,
              1);
          }
                    (*(void (**)(unsigned int, unsigned int, int))(**(unsigned int **)((char *)this + 144) + 1156))(*((unsigned int *)this + 144), 0, 1);
                    (*(void (**)(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int))(**(unsigned int **)((char *)this + 144) + 1160))(
            this->creationFrame,
            0,
            0,
            0,
            0,
            0);
                    v16 = *(unsigned int **)((char *)this + 144);
          v18[0] = v16[39]; /*0x62a421*/
          v18[1] = v16[40]; /*0x62a428*/
          v18[2] = v16[41]; /*0x62a42f*/
          result = MapClass::RevealArea2((MapClass *)&stru_87F5F0.__pad_58[416], v18, v16[152] - 3, v16[152] + 3, 0); /*0x62a44b*/
                    *((unsigned int *)this + 160) = 0;
        }
        return result; /*0x62a459*/
      }
      ParasiteClass_field_34 -= *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - v6; /*0x62a2ba*/
    }
    if ( ParasiteClass_field_34 > 0 /*0x62a2c2*/
      && !(*(uint8_t (**)(int))(this->u32_184)(creationFrame) )
    {
            *(unsigned int *)(*((unsigned int *)this + 160) + 1684) = 0;
            v8 = *((unsigned int *)this + 144);
            *((unsigned int *)this + 160) = 0;
            return (*(int (**)(int))(*(unsigned int *)v8 + 248))(v8);
    }
    goto LABEL_12; /*0x62a2ca*/
  }
    if ( a2 == *((unsigned int *)this + 272) )
  {
        *((unsigned int *)this + 272) = 0;
        *((unsigned char *)this + 336) = 1;
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

    v1 = *((unsigned int *)this + 540);
  v2 = *(unsigned int *)&v1->target; /*0x6339b7*/
  if ( (uint8_t)House::IsHumanPlayer((House *)v1) && dword_A83D4C ) /*0x6339ca*/
    return (int)dword_A83D4C->Object_field_0x30; /*0x6339cc*/
  else
    return v2; /*0x6339d1*/
}
}
// 0x6340B0
namespace gamemd {
AbstractClass * * TeamClass::DestroyAllMembers(TechnoClass * aP1)
{
  int v3; // eax
  int uniqueId; // edx
  unsigned int ***vtable1; // edi
  unsigned int **v7; // ebp
  int v8; // eax
  unsigned int *v9; // eax
  int v10; // edi
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // ecx
  int v15; // eax
  void *v16; // eax
  void *Block; // [esp+10h] [ebp-4h] BYREF

  v3 = 0; /*0x6340b8*/
    v4 = *(Block + 4);
  if ( uniqueId <= 0 ) /*0x6340c0*/
    goto LABEL_7; /*0x6340c0*/
    v5 = (ObjectClass *)*(Block + 1);
  vtable1 = vtable1; /*0x6340c9*/
  while ( **vtable1 != (unsigned int *)(aP1) ) /*0x6340d0*/
  {
    ++v3; /*0x6340d2*/
    ++vtable1; /*0x6340d3*/
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
    v7 = vtable1[v3]; /*0x6340eb*/
  LABEL_9:
  Block = v7; /*0x6340f0*/
  if ( v7 ) /*0x6340f6*/
  {
    if ( *((unsigned char *)v7 + 12) ) /*0x6340fc*/
    {
      *((unsigned char *)v7 + 12) = 0; /*0x634101*/
            v8 = *(Block + 42) - 1;
            *(Block + 42) = v8;
      if ( !v8 ) /*0x634111*/
                *(Block + 44) = -1;
    }
    v9 = v7[2]; /*0x63411d*/
    if ( v9 != (unsigned int *)-1 ) /*0x634123*/
    {
            v10 = *(unsigned int *)(*(Block + 9) + 4 * v9);
      *(unsigned int *)(v10 + 116) = -1; /*0x63412e*/
      TeamClass::Reset(0); /*0x634135*/
      v11 = *(unsigned int *)(v10 + 112) - 1; /*0x63413d*/
      *(unsigned int *)(v10 + 112) = v11; /*0x63413e*/
      if ( !v11 ) /*0x634141*/
      {
                aP1 = (TechnoClass *)Block;
        if ( this ) /*0x634149*/
        {
          if ( !IDA_LOBYTE(this->referenceCount) ) /*0x63414b*/
          {
            IDA_LOBYTE(this->referenceCount) = 1; /*0x63415a*/
            VectorClass::Append((VectorClass *)&stru_AC4B30.__pad_EC[124], &aP1); /*0x63415e*/
          }
        }
      }
    }
    v7[2] = (unsigned int *)-1; /*0x634163*/
    RA2_OPDEL(*((void **)Block + 1)); /*0x634172*/
        v12 = (*(int (**)(unsigned int *, void **))(*Block + 16))(Block, &Blocka);
    if ( v12 != -1 ) /*0x634189*/
    {
      v13 = this->uniqueId; /*0x63418b*/
      if ( v12 < v13 ) /*0x634190*/
      {
        v14 = v13 - 1; /*0x634192*/
        for ( this->? = v14; v12 < this->?; *((unsigned int *)this->? + v12 - 1) = *((unsigned int *)this->? + v12) ) /*0x634198*/
          ++v12; /*0x63419d*/
      }
    }
    RA2_OPDEL(Block); /*0x6341b1*/
    if ( !this->? && this ) /*0x6341c6*/
    {
      FactoryClass::ClearObjects(); /*0x6341ce*/
            aP1 = (TechnoClass *)Block;
      v15 = (*(int (**)(char *, unsigned int **))(*(unsigned int *)&stru_AC4B30.__pad_EC[124] + 16))( /*0x6341e7*/
              &stru_AC4B30.__pad_EC[124],
              &aP1);
      if ( v15 != -1 ) /*0x6341ed*/
        Array::RemoveAt((Array *)&stru_AC4B30.__pad_EC[124], v15); /*0x6341f5*/
      Team_Destroy((ObjectClass *)&stru_AC4B30, (int)&aP1); /*0x634204*/
      Team_Destroy((ObjectClass *)&stru_AC4B30.Array_field_0xE8, (int)&aP1); /*0x634213*/
      if ( *(unsigned int **)&stru_AC4B30.__pad_EC[176] == aP1 ) /*0x634224*/
        *(unsigned int *)&stru_AC4B30.__pad_EC[176] = 0; /*0x634226*/
      if ( *(unsigned int **)&stru_AC4B30.__pad_EC[28] == aP1 ) /*0x634232*/
        *(unsigned int *)&stru_AC4B30.__pad_EC[28] = 0; /*0x634234*/
      if ( *(unsigned int **)&stru_AC4B30.__pad_70[80] == aP1 ) /*0x634240*/
        *(unsigned int *)&stru_AC4B30.__pad_70[80] = 0; /*0x634242*/
            *(Block + 8) = &vt_VectorClass_PlanningBranchClass;
      VectorClass::Cleanup2((int)&this->NeedsSaveOrLink); /*0x634251*/
      v16 = *(unsigned int *)&this->vtable2; /*0x634256*/
            *Block = &vt_VectorClass_PlanningMemberClass;
      if ( v16 ) /*0x634261*/
      {
        if ( IDA_BYTE1(this->vtable4) ) /*0x634263*/
        {
          RA2_OPDEL(v16); /*0x634269*/
          *(unsigned int *)&this->vtable2 = 0; /*0x634271*/
        }
      }
      IDA_BYTE1(this->vtable4) = 0; /*0x634275*/
      *(unsigned int *)&this->vtable3 = 0; /*0x634278*/
      RA2_OPDEL(); /*0x63427b*/
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
  int v7; // eax
  int Type; // esi
  int v9; // eax
  int v10; // eax
  int v11; // esi
  HouseClass *owner; // ecx
  void *relatedTagsCount; // esi
  int v14; // ecx
  int v15; // eax
  uint8_t Color_field_00; // dl
  HouseClass *v17; // ecx
  void *Object_field_0x30; // esi
  int v19; // eax
  int v20; // [esp+10h] [ebp-10h]
  TeamClass *v21; // [esp+14h] [ebp-Ch] BYREF
  Color v22[2]; // [esp+18h] [ebp-8h] BYREF

    v20 = *(unsigned int *)(*((unsigned int *)this + 36) + 4 * a2);
  result = *(unsigned int *)(v20 + 116); /*0x635a57*/
  if ( result == -1 ) /*0x635a5d*/
  {
        v4 = *((unsigned int *)this + 16);
    v5 = 0; /*0x635a66*/
    v6 = 0; /*0x635a68*/
    ((unsigned int *)(v22))[0].Color_field_00 = uniqueId; /*0x635a6a*/
    if ( uniqueId <= 0 ) /*0x635a70*/
    {
      return -1; /*0x635b54*/
    }
    else
    {
      do /*0x635abd*/
      {
                v7 = *(int **)(*((unsigned int *)this + 4) + 4 * v6);
        if ( *(unsigned int *)(v7 + 8) == a2 ) /*0x635a83*/
        {
          v5 = *(BuildingClass **)v7; /*0x635a85*/
          Type = BuildingClass::GetType(*(BuildingClass **)v7); /*0x635a8e*/
          v9 = *(unsigned int *)(Type + 4); /*0x635a90*/
          v21 = this; /*0x635a97*/
          v10 = (*(int (**)(int, TeamClass **))(v9 + 16))(Type + 4, &v21); /*0x635a9f*/
          v11 = *(unsigned int *)(Type + 140); /*0x635aa2*/
          if ( v11 == -1 || v10 < v11 ) /*0x635ab4*/
          {
            owner = *(unsigned int *)&v5->owner; /*0x635acb*/
            relatedTagsCount = (void *)owner->relatedTagsCount; /*0x635acd*/
            if ( (uint8_t)House::IsHumanPlayer((House *)owner) && dword_A83D4C ) /*0x635ae0*/
              relatedTagsCount = dword_A83D4C->Object_field_0x30; /*0x635ae2*/
            v14 = *((unsigned int *)stru_A80220.? + (unsigned int)relatedTagsCount) + 22265; /*0x635af4*/
            IDA_LOWORD(v22[0].Color_field_00) = *(unsigned short *)v14; /*0x635afd*/
            IDA_BYTE2(v22[0].Color_field_00) = *(unsigned char *)(v14 + 2); /*0x635b09*/
            Color::Lerp(v22, 0x50u, &byte_A83CD9); /*0x635b0d*/
            v15 = (IDA_BYTE1(v22[0].Color_field_00) >> g_BitMask_Blue << g_BitMask_Green) /*0x635b45*/
                | (IDA_BYTE2(v22[0].Color_field_00) >> g_BitMask_Red << g_BitShift_Blue);
            Color_field_00 = ((unsigned int *)(v22))[0].Color_field_00; /*0x635b47*/
            goto LABEL_19; /*0x635b4b*/
          }
          uniqueId = ((unsigned int *)(v22))[0].Color_field_00; /*0x635ab6*/
        }
        ++v6; /*0x635aba*/
      }
      while ( v6 < uniqueId ); /*0x635abd*/
      if ( !v5 ) /*0x635b52*/
        return -1; /*0x635b52*/
      v17 = *(unsigned int *)&v5->owner; /*0x635b61*/
      Object_field_0x30 = (void *)v17->relatedTagsCount; /*0x635b67*/
      if ( (uint8_t)House::IsHumanPlayer((House *)v17) ) /*0x635b6a*/
      {
        if ( dword_A83D4C ) /*0x635b7a*/
          Object_field_0x30 = dword_A83D4C->Object_field_0x30; /*0x635b7c*/
      }
      v19 = *((unsigned int *)stru_A80220.? + (unsigned int)Object_field_0x30) + 22265; /*0x635b8f*/
      IDA_LOWORD(v22[0].Color_field_00) = *(unsigned short *)v19; /*0x635b97*/
      IDA_BYTE2(v22[0].Color_field_00) = *(unsigned char *)(v19 + 2); /*0x635ba3*/
      Color::Lerp(v22, 0x64u, (uint8_t *)&stru_A80220); /*0x635ba7*/
      v15 = (IDA_BYTE1(v22[0].Color_field_00) >> g_BitMask_Blue << g_BitMask_Green) /*0x635bdf*/
          | (IDA_BYTE2(v22[0].Color_field_00) >> g_BitMask_Red << g_BitShift_Blue);
      Color_field_00 = ((unsigned int *)(v22))[0].Color_field_00; /*0x635be1*/
  LABEL_19:
      result = (Color_field_00 >> g_BitShift_Green_0 << g_BitShift_Red) | v15; /*0x635be5*/
      *(unsigned int *)(v20 + 116) = result; /*0x635c01*/
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
  int uniqueId; // ebp
  BuildingClass *v4; // esi
  int v5; // edi
  int v6; // eax
  HouseClass *owner; // ecx
  void *relatedTagsCount; // edi
  int v9; // edx
  int v10; // eax
  uint8_t Color_field_00; // dl
  HouseClass *v12; // ecx
  void *Object_field_0x30; // esi
  int v14; // ecx
  Color v15; // [esp+10h] [ebp-8h] BYREF

    result = *((unsigned int *)this + 172);
  if ( result == -1 ) /*0x635c22*/
  {
        v3 = *((unsigned int *)this + 16);
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
                v6 = *(int **)(*((unsigned int *)this + 4) + 4 * v5);
        if ( *(unsigned char *)(v6 + 12) ) /*0x635c39*/
        {
          v4 = *(BuildingClass **)v6; /*0x635c40*/
          if ( !*(unsigned char *)(BuildingClass::GetType(*(BuildingClass **)v6) + 152) ) /*0x635c51*/
          {
            owner = *(unsigned int *)&v4->owner; /*0x635c71*/
            relatedTagsCount = (void *)owner->relatedTagsCount; /*0x635c73*/
            if ( (uint8_t)House::IsHumanPlayer((House *)owner) && dword_A83D4C ) /*0x635c86*/
              relatedTagsCount = dword_A83D4C->Object_field_0x30; /*0x635c88*/
            v9 = *((unsigned int *)stru_A80220.? + (unsigned int)relatedTagsCount) + 22265; /*0x635c9b*/
            IDA_LOWORD(v15.Color_field_00) = *(unsigned short *)v9; /*0x635ca4*/
            IDA_BYTE2(v15.Color_field_00) = *(unsigned char *)(v9 + 2); /*0x635cac*/
            Color::Lerp(&v15, 0x50u, &byte_A83CD9); /*0x635cb4*/
            v10 = (IDA_BYTE1(v15.Color_field_00) >> g_BitMask_Blue << g_BitMask_Green) /*0x635cec*/
                | (IDA_BYTE2(v15.Color_field_00) >> g_BitMask_Red << g_BitShift_Blue);
            Color_field_00 = v15.Color_field_00; /*0x635cee*/
            goto LABEL_16; /*0x635cf2*/
          }
        }
        ++v5; /*0x635c53*/
      }
      while ( v5 < uniqueId ); /*0x635c56*/
      if ( !v4 ) /*0x635c5a*/
        return -1; /*0x635c5a*/
      v12 = *(unsigned int *)&v4->owner; /*0x635cf7*/
      Object_field_0x30 = (void *)v12->relatedTagsCount; /*0x635cfd*/
      if ( (uint8_t)House::IsHumanPlayer((House *)v12) ) /*0x635d00*/
      {
        if ( dword_A83D4C ) /*0x635d10*/
          Object_field_0x30 = dword_A83D4C->Object_field_0x30; /*0x635d12*/
      }
      v14 = *((unsigned int *)stru_A80220.? + (unsigned int)Object_field_0x30) + 22265; /*0x635d24*/
      IDA_LOWORD(v15.Color_field_00) = *(unsigned short *)v14; /*0x635d2d*/
      IDA_BYTE2(v15.Color_field_00) = *(unsigned char *)(v14 + 2); /*0x635d39*/
      Color::Lerp(&v15, 0x64u, (uint8_t *)&stru_A80220); /*0x635d3d*/
      v10 = (IDA_BYTE1(v15.Color_field_00) >> g_BitMask_Blue << g_BitMask_Green) /*0x635d75*/
          | (IDA_BYTE2(v15.Color_field_00) >> g_BitMask_Red << g_BitShift_Blue);
      Color_field_00 = v15.Color_field_00; /*0x635d77*/
  LABEL_16:
      result = (Color_field_00 >> g_BitShift_Green_0 << g_BitShift_Red) | v10; /*0x635d7b*/
            *((unsigned int *)this + 172) = result;
    }
  }
  return result; /*0x635c60*/
}
}
// 0x635DB0
namespace gamemd {
int TeamClass::Reset(ObjectClass * aP1)
{
  int result; // eax
  HouseClass *target; // edx

  IDA_LOBYTE(result) = aP1; /*0x635db0*/
    *((unsigned int *)this + 180) = -1;
  if ( aP1 ) /*0x635dc0*/
  {
        v3 = *((unsigned int *)this + 48);
        for ( i = 0; i < v3; *(unsigned int *)(*(unsigned int *)(*((unsigned int *)this + 36) + 4 * i - 4) + 116) = -1 )
      ++result; /*0x635dcf*/
        *((unsigned int *)this + 172) = -1;
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
  int v8; // edi
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  unsigned int Object_field_0x30; // esi
  int v13; // eax
  int result; // eax
  bool v15; // [esp+Bh] [ebp-Dh]
  void *Block; // [esp+Ch] [ebp-Ch] BYREF
  int i; // [esp+10h] [ebp-8h]
  unsigned int *vtable0; // [esp+14h] [ebp-4h] BYREF

    v2 = *((unsigned int *)this + 80);
  v15 = abstractFlags == 0; /*0x63612c*/
  v3 = 0; /*0x636131*/
  vtable0 = (unsigned int *)abstractFlags; /*0x636133*/
  for ( i = 0; i < (int)vtable0; ++i ) /*0x63613d*/
  {
        v4 = *(int **)(*((unsigned int *)this + 32) + 4 * v3);
        Value = Array::FindValue(v4, *(unsigned int *)this);
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
        v8 = *(unsigned int *)(*(unsigned int *)(v4 + 36) + 4 * v7); /*0x63618c*/
        *(unsigned int *)(v8 + 116) = -1; /*0x636191*/
        TeamClass::Reset((TeamClass *)v4, 0); /*0x636198*/
        v9 = *(unsigned int *)(v8 + 112) - 1; /*0x6361a0*/
        *(unsigned int *)(v8 + 112) = v9; /*0x6361a1*/
        if ( !v9 ) /*0x6361a4*/
          ScriptQueue::PushEntry((ScriptQueue *)v4); /*0x6361a8*/
      }
      *(unsigned int *)(v6 + 8) = -1; /*0x6361ad*/
      RA2_OPDEL(*((void **)Block + 1)); /*0x6361bc*/
      v10 = (*(int (**)(int, void **))(*(unsigned int *)v4 + 16))(v4, &Block); /*0x6361cd*/
      if ( v10 != -1 ) /*0x6361d3*/
        Vector4::EraseAt_Copy((Vector4 *)v4, v10); /*0x6361d8*/
      RA2_OPDEL(Block); /*0x6361e2*/
      if ( !*(unsigned int *)(v4 + 16) && v4 ) /*0x6361f3*/
      {
        FactoryClass::ClearObjects((FactoryClass *)v4); /*0x6361f7*/
        Team_Remove((ObjectClass *)v4); /*0x6361fe*/
        *(unsigned int *)(v4 + 32) = (void*)&VectorClass_PlanningBranchClass___vftable; /*0x636206*/
        VectorClass::Cleanup2(v4 + 32); /*0x63620c*/
        *(unsigned int *)v4 = (void*)&VectorClass_PlanningMemberClass___vftable; /*0x636213*/
        VectorClass_ptr_PlanningMemberClass::Remove((_VectorClass_PAVPlanningMemberClass *)v4); /*0x636219*/
        RA2_OPDEL((void *)v4); /*0x63621f*/
      }
    }
    v3 = i + 1; /*0x63622f*/
  }
  if ( !v15 ) /*0x636244*/
  {
        v18 = *(unsigned int *)this;
    v11 = vtable0[135]; /*0x636250*/
    Object_field_0x30 = *(unsigned int *)(v11 + 48); /*0x636256*/
    if ( (uint8_t)House::IsHumanPlayer((House *)v11) && dword_A83D4C ) /*0x636269*/
      Object_field_0x30 = (unsigned int)dword_A83D4C->Object_field_0x30; /*0x63626b*/
    if ( Object_field_0x30 < 0x18 ) /*0x636270*/
      *(unsigned int *)&stru_AC4B30.__pad_48[4 * Object_field_0x30 + 12] = (*(unsigned int *)&stru_AC4B30.__pad_48[4 * Object_field_0x30 + 12] /*0x63628a*/
                                                                    - 1)
                                                                   & ((*(unsigned int *)&stru_AC4B30.__pad_48[4 * Object_field_0x30 + 12]
                                                                     - 1 < 0)
                                                                    - 1);
    v13 = (*(int (**)(char *, unsigned int **))(*(unsigned int *)&stru_AC4B30.__pad_EC[36] + 16))( /*0x6362a1*/
            &stru_AC4B30.__pad_EC[36],
            &vtable0);
    if ( v13 != -1 && v13 < *(int *)&stru_AC4B30.__pad_EC[52] ) /*0x6362b3*/
    {
      --*(unsigned int *)&stru_AC4B30.__pad_EC[52]; /*0x6362b8*/
      for ( ; /*0x6362be*/
            v13 < *(int *)&stru_AC4B30.__pad_EC[52];
            *(unsigned int *)(*(unsigned int *)&stru_AC4B30.__pad_EC[40] + 4 * v13 - 4) = *(unsigned int *)(*(unsigned int *)&stru_AC4B30.__pad_EC[40]
                                                                                        + 4 * v13) )
      {
        ++v13; /*0x6362c6*/
      }
    }
  }
    result = (*(int (**)(int))(*((unsigned int *)this + 16) + 12))((char *)this + 16);
    *((unsigned int *)this + 560) = -1;
    *((unsigned int *)this + 576) = -1;
    *((unsigned int *)this + 592) = -1;
    *((unsigned char *)this + 608) = 0;
    *((unsigned char *)this + 612) = 0;
  return result; /*0x636306*/
}
}
// 0x6367B0
namespace gamemd {
int TeamClass::UpdateBuildQueue(AbstractClass * aP1, TechnoClass * aP2, TechnoClass * aP3)
{
  TeamClass *v4; // esi
  int result; // eax
  unsigned int *vtable2; // edx
  void *vtable0; // esi
  int v8; // ebp
  int v9; // eax
  int v10; // ecx
  void ***v11; // edx
  int v12; // eax
  unsigned char *v13; // esi
  unsigned char *WaypointCoords; // eax
  int v15; // eax
  unsigned int *v16; // ebx
  unsigned char *v17; // eax
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
  unsigned char v30[108]; // [esp+24h] [ebp-70h] BYREF
  int16_t v31; // [esp+90h] [ebp-4h]
  char v32; // [esp+92h] [ebp-2h]

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
        vtable2 = *(unsigned int *)&v4->vtable3; /*0x6367fa*/
        vtable0 = v4->AbstractClass; /*0x636801*/
        v8 = vtable2[v27]; /*0x636803*/
        v9 = 0; /*0x636806*/
        v10 = *(unsigned int *)(v8 + 16); /*0x636808*/
        if ( v10 <= 0 ) /*0x63680d*/
          goto LABEL_11; /*0x63680d*/
        v11 = *(void ****)(v8 + 4); /*0x636812*/
        while ( **v11 != vtable0 ) /*0x636818*/
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
          v12 = *(unsigned int *)(*(unsigned int *)(v8 + 4) + 4 * v9); /*0x63682f*/
  LABEL_13:
        v13 = *(unsigned char **)(v12 + 4); /*0x636832*/
        qmemcpy(v30, v13, sizeof(v30)); /*0x63683e*/
        v13 += 108; /*0x63683e*/
        v31 = *(unsigned short *)v13; /*0x636847*/
        v32 = v13[2]; /*0x63684e*/
        WaypointCoords = ScriptAction::GetWaypointCoords((ScriptAction *)v29, aP1); /*0x63684f*/
        *(unsigned int *)&v30[7] = *(unsigned int *)WaypointCoords; /*0x636858*/
        v30[11] = WaypointCoords[4]; /*0x63685f*/
        v15 = RA2_OPNEW(0x10u); /*0x636863*/
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
        v17 = (unsigned char *)RA2_OPNEW(0x6Fu); /*0x63688d*/
        if ( v17 ) /*0x636897*/
          *v17 = 0; /*0x636899*/
        else
          v17 = 0; /*0x63689e*/
        qmemcpy(v17, v30, 0x6Cu); /*0x6368ab*/
        *((unsigned short *)v17 + 54) = v31; /*0x6368ad*/
        v17[110] = v32; /*0x6368af*/
        v16[1] = v17; /*0x6368b0*/
        v18 = *(unsigned int *)(v8 + 8); /*0x6368b3*/
        if ( *(unsigned int *)(v8 + 16) < v18 /*0x6368d7*/
          || (*(unsigned char *)(v8 + 13) || !v18)
          && (v19 = *(unsigned int *)(v8 + 20), v19 > 0)
          && (*(uint8_t (**)(int, int, unsigned int))(*(unsigned int *)v8 + 8))(v8, v18 + v19, 0) )
        {
          v20 = *(unsigned int *)(v8 + 16); /*0x6368de*/
          v21 = *(unsigned int *)(v8 + 4); /*0x6368e1*/
          *(unsigned int *)(v8 + 16) = v20 + 1; /*0x6368e7*/
          *(unsigned int *)(v21 + 4 * v20) = v16; /*0x6368ea*/
        }
        Type = BuildingClass::GetType((BuildingClass *)aP1); /*0x6368f9*/
        v23 = *(unsigned int *)(Type + 12); /*0x6368fb*/
        if ( *(unsigned int *)(Type + 20) < v23 /*0x636923*/
          || (*(unsigned char *)(Type + 17) || !v23)
          && (v24 = *(unsigned int *)(Type + 24), v24 > 0)
          && (*(uint8_t (**)(int, int, unsigned int))(*(unsigned int *)(Type + 4) + 8))(Type + 4, v23 + v24, 0) )
        {
          v25 = *(unsigned int *)(Type + 20); /*0x63692a*/
          v26 = *(unsigned int *)(Type + 8); /*0x63692d*/
          *(unsigned int *)(Type + 20) = v25 + 1; /*0x636933*/
          *(unsigned int *)(v26 + 4 * v25) = v8; /*0x636936*/
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
  void ***v9; // edx
  int v10; // eax
  unsigned char *v11; // esi
  unsigned char *WaypointCoords; // eax
  int v13; // eax
  unsigned int *v14; // ebx
  unsigned char *v15; // eax
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // edx
  int Type; // edi
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  int v24; // edx
  int v27; // [esp+18h] [ebp-7Ch]
  unsigned char v28[8]; // [esp+1Ch] [ebp-78h] BYREF
  unsigned char v29[108]; // [esp+24h] [ebp-70h] BYREF
  int16_t v30; // [esp+90h] [ebp-4h]
  char v31; // [esp+92h] [ebp-2h]

    v4 = *((unsigned int *)this + 20) - a3;
  result = BuildingClass::GetType((BuildingClass *)a2); /*0x6369a2*/
  if ( result ) /*0x6369a9*/
  {
    a3 = a3; /*0x6369b1*/
    v27 = a3 + v4; /*0x6369b7*/
    if ( a3 < a3 + v4 ) /*0x6369bb*/
    {
      while ( 1 ) /*0x6369d1*/
      {
        v6 = *((unsigned int *)this->? + a3); /*0x6369d1*/
        v7 = 0; /*0x6369d4*/
        v8 = *(unsigned int *)(v6 + 16); /*0x6369d6*/
        if ( v8 <= 0 ) /*0x6369db*/
          goto LABEL_11; /*0x6369db*/
        v9 = *(void ****)(v6 + 4); /*0x6369e0*/
                while ( **v9 != *v3 )
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
        v11 = *(unsigned int *)&v10->vtable2; /*0x636a00*/
        qmemcpy(v29, v11, sizeof(v29)); /*0x636a13*/
        v11 += 108; /*0x636a13*/
        v30 = *(unsigned short *)v11; /*0x636a15*/
        v31 = v11[2]; /*0x636a1c*/
        WaypointCoords = ScriptAction::GetWaypointCoords((ScriptAction *)v28, a2); /*0x636a1d*/
        *(unsigned int *)&v29[7] = *(unsigned int *)WaypointCoords; /*0x636a26*/
        v29[11] = WaypointCoords[4]; /*0x636a2d*/
        v13 = RA2_OPNEW(0x10u); /*0x636a31*/
        v14 = 0; /*0x636a36*/
        if ( v13 ) /*0x636a3d*/
        {
          *(unsigned int *)v13 = 0; /*0x636a3f*/
          *(unsigned int *)(v13 + 4) = 0; /*0x636a41*/
          *(unsigned char *)(v13 + 12) = 0; /*0x636a44*/
          *(unsigned int *)(v13 + 8) = -1; /*0x636a47*/
          v14 = (unsigned int *)v13; /*0x636a4e*/
        }
        *v14 = a2; /*0x636a59*/
        v15 = (unsigned char *)RA2_OPNEW(0x6Fu); /*0x636a5b*/
        if ( v15 ) /*0x636a65*/
          *v15 = 0; /*0x636a67*/
        else
          v15 = 0; /*0x636a6c*/
        qmemcpy(v15, v29, 0x6Cu); /*0x636a79*/
        *((unsigned short *)v15 + 54) = v30; /*0x636a7b*/
        v15[110] = v31; /*0x636a7d*/
        v14[1] = v15; /*0x636a7e*/
        v16 = *(unsigned int *)(v6 + 8); /*0x636a81*/
        if ( *(unsigned int *)(v6 + 16) < v16 /*0x636aa5*/
          || (*(unsigned char *)(v6 + 13) || !v16)
          && (v17 = *(unsigned int *)(v6 + 20), v17 > 0)
          && (*(uint8_t (**)(int, int, unsigned int))(*(unsigned int *)v6 + 8))(v6, v16 + v17, 0) )
        {
          v18 = *(unsigned int *)(v6 + 16); /*0x636aac*/
          v19 = *(unsigned int *)(v6 + 4); /*0x636aaf*/
          *(unsigned int *)(v6 + 16) = v18 + 1; /*0x636ab5*/
          *(unsigned int *)(v19 + 4 * v18) = v14; /*0x636ab8*/
        }
        Type = BuildingClass::GetType((BuildingClass *)a2); /*0x636ac7*/
        v21 = *(unsigned int *)(Type + 12); /*0x636ac9*/
        if ( *(unsigned int *)(Type + 20) < v21 /*0x636af1*/
          || (*(unsigned char *)(Type + 17) || !v21)
          && (v22 = *(unsigned int *)(Type + 24), v22 > 0)
          && (*(uint8_t (**)(int, int, unsigned int))(*(unsigned int *)(Type + 4) + 8))(Type + 4, v21 + v22, 0) )
        {
          v23 = *(unsigned int *)(Type + 20); /*0x636af8*/
          v24 = *(unsigned int *)(Type + 8); /*0x636afb*/
          *(unsigned int *)(Type + 20) = v23 + 1; /*0x636b01*/
          *(unsigned int *)(v24 + 4 * v23) = v6; /*0x636b04*/
        }
        if ( *(unsigned int *)(Type + 140) == -1 ) /*0x636b0e*/
          *(unsigned int *)(Type + 140) = *(unsigned int *)(Type + 20) - 1; /*0x636b14*/
        ScriptAction::PlaceObject(v6, v14); /*0x636b1d*/
        result = ++a3; /*0x636b2a*/
        if ( a3 >= v27 ) /*0x636b31*/
          break; /*0x636b31*/
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
  int v8; // esi
  int Value; // eax
  int v10; // eax
  int v11; // ebx
  int v12; // eax
  int v13; // eax
  int result; // eax
  int v15; // ecx
  void *Block; // [esp+8h] [ebp-4h] BYREF

    if ( *((unsigned int *)this + 20) == 1 )
  {
        *((unsigned int *)this + 140) = -1;
  LABEL_3:
    v3 = aP1; /*0x636b65*/
    goto LABEL_4; /*0x636b65*/
  }
    v6 = *((unsigned int *)this + 140);
  if ( v6 <= 0 ) /*0x636b8c*/
    goto LABEL_3; /*0x636b8c*/
  v3 = aP1; /*0x636b8e*/
  if ( aP1 < v6 ) /*0x636b94*/
        *((unsigned int *)this + 140) = v6 - 1;
  LABEL_4:
    v4 = *((unsigned int *)this + 148);
  v5 = 0; /*0x636b70*/
  if ( v4 >= 0 ) /*0x636b75*/
  {
    if ( v3 >= v4 ) /*0x636b79*/
    {
            v7 = *((unsigned int *)this + 144) - 1;
            *((unsigned int *)this + 144) = v7;
      if ( v7 < 3 ) /*0x636bb1*/
      {
                *((unsigned int *)this + 148) = -1;
                *((unsigned int *)this + 144) = 0;
      }
    }
    else
    {
            *((unsigned int *)this + 148) = v4 - 1;
    }
  }
    v8 = *(VectorClass **)(*((unsigned int *)this + 8) + 4 * v3);
    Value = Array::FindValue((int *)v8, (IUnknown *)*this);
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
      v11 = *(unsigned int *)(*(unsigned int *)(v8 + 36) + 4 * v10); /*0x636c08*/
      *(unsigned int *)(v11 + 116) = -1; /*0x636c0b*/
      TeamClass::Reset((TeamClass *)v8, 0); /*0x636c12*/
      v12 = *(unsigned int *)(v11 + 112) - 1; /*0x636c1a*/
      *(unsigned int *)(v11 + 112) = v12; /*0x636c1b*/
      if ( !v12 ) /*0x636c1e*/
        ScriptQueue::PushEntry((ScriptQueue *)v8); /*0x636c22*/
      v3 = aP1; /*0x636c27*/
    }
    *(unsigned int *)(v5 + 8) = -1; /*0x636c2b*/
    RA2_OPDEL(*((void **)Block + 1)); /*0x636c3a*/
    v13 = (*(int (**)(int, void **))(*(unsigned int *)v8 + 16))(v8, &Block); /*0x636c4b*/
    if ( v13 != -1 ) /*0x636c51*/
      Vector4::EraseAt_Copy((Vector4 *)v8, v13); /*0x636c56*/
    RA2_OPDEL(Block); /*0x636c60*/
    if ( !*(unsigned int *)(v8 + 16) && v8 ) /*0x636c71*/
    {
      FactoryClass::ClearObjects((FactoryClass *)v8); /*0x636c75*/
      Team_Remove((ObjectClass *)v8); /*0x636c7c*/
      *(unsigned int *)(v8 + 32) = (void*)&VectorClass_PlanningBranchClass___vftable; /*0x636c84*/
      VectorClass::Cleanup2(v8 + 32); /*0x636c8a*/
      *(unsigned int *)v8 = (void*)&VectorClass_PlanningMemberClass___vftable; /*0x636c91*/
      VectorClass_ptr_PlanningMemberClass::Remove((_VectorClass_PAVPlanningMemberClass *)v8); /*0x636c97*/
      RA2_OPDEL((void *)v8); /*0x636c9d*/
    }
  }
    result = *((unsigned int *)this + 20);
  if ( v3 < result ) /*0x636cac*/
  {
    v15 = result - 1; /*0x636cae*/
    result = v3; /*0x636cb1*/
    for ( this->? = v15; result < this->?; *((unsigned int *)this->? + result - 1) = *((unsigned int *)this->? + result) ) /*0x636cb8*/
      ++result; /*0x636cbd*/
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
    if ( operator new(0x38u) ) /*0x6e52c7*/
// 0x6e4de0
      return TeknoClass::GetType(); /*0x6e52d6*/
    else
      return 0; /*0x6e52de*/
  }
  else
  {
    v3 = (char *)g_TagClassCount; /*0x6e52b0*/
    while ( 1 ) /*0x6e52b6*/
    {
      result = *(unsigned int *)v3; /*0x6e52b6*/
      if ( *(void **)(v3->q024 == this ) /*0x6e52bb*/
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
  if ( *((unsigned int *)((char *)&stru_A8EB00 + 391)) /*0x6e53d7*/
    || IDA_BYTE1(this->spawnCell)
    || IDA_LOBYTE(this->spawnCell)
    || (result = (int)this->buildingType) == 0 )
  {
    IDA_LOBYTE(result) = 0; /*0x6e5552*/
  }
  else
  {
      v8 = (TriggerClass *)*((unsigned int *)this + 40);
      for ( *((unsigned char *)this + 53) = 1; v8; v8 = (TriggerClass *)v8->nextTrigger )
    {
      if ( TriggerClass::RegisterEvent( /*0x6e5414*/
             (int)currentScript,
             aP1,
             aP2,
             aP4,
             *(unsigned int *)&this->buildingType[1].TeamTypeClass_field_28 == 2,
             aP5) )
      {
        v10 = *(unsigned int *)&this->buildingType[1].TeamTypeClass_field_28; /*0x6e5420*/
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
              if ( *((unsigned int *)this + 44) != (void *)1 )
          goto LABEL_14; /*0x6e5446*/
        BuildingClass::ExecuteTriggers((int)currentScript, aP2, aP3); /*0x6e5450*/
        result = TeamClass::AddToBuildQueue(currentScript); /*0x6e5457*/
        v13 = 1; /*0x6e545c*/
        v7 = 1; /*0x6e5461*/
      }
    }
      *((unsigned char *)this + 53) = 0;
    if ( v12 ) /*0x6e5499*/
    {
      if ( aP2 && *(TeamClass **)(aP2 + 52) == this ) /*0x6e54a2*/
        ObjectClass::SetReference((ObjectClass *)aP2, 0); /*0x6e54a8*/
      IDA_BYTE1(result) = IDA_BYTE1(aP3); /*0x6e54ad*/
      if ( aP3 != dword_B0E700 ) /*0x6e54b9*/
      {
        v11 = (ObjectClass *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)&aP3); /*0x6e54d5*/
        result = ObjectClass::SetTriggerTarget(v11, 0); /*0x6e54dc*/
      }
    }
    if ( v13 ) /*0x6e54e9*/
    {
          AbstractClass::AnnounceExpiredPointer((AbstractClass *)this, (AbstractClass *)v6);
      result = *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_E5C[4]; /*0x6e54f4*/
      if ( *(int *)&g_BuildingLoadQueue_Array.__pad_E5C[12] < *(int *)&g_BuildingLoadQueue_Array.__pad_E5C[4] /*0x6e552f*/
        || (g_BuildingLoadQueue_Array.__pad_E5C[9] || !*(unsigned int *)&g_BuildingLoadQueue_Array.__pad_E5C[4])
        && g_BuildingLoadQueue_Array.UnitExitSound > 0
        && (result = (*(int (**)(int *, int, unsigned int))(g_BuildingLoadQueue_Array.ToTile + 8))(
                       &g_BuildingLoadQueue_Array.ToTile,
                       *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_E5C[4] + g_BuildingLoadQueue_Array.UnitExitSound,
                       0),
            (unsigned char)result) )
      {
        result = (*(unsigned int *)&g_BuildingLoadQueue_Array.__pad_E5C[12])++; /*0x6e5537*/
        *(unsigned int *)(*(unsigned int *)g_BuildingLoadQueue_Array.__pad_E5C + 4 * result) = this; /*0x6e5546*/
      }
    }
    IDA_LOBYTE(result) = v7; /*0x6e5549*/
  }
  return result; /*0x6e554b*/
}
}
// 0x6E8DE0
namespace gamemd {
void TeamClass::Destructor(AbstractClass * a2)
{
  int v2; // edi
  int v3; // ecx
  HouseClass *owner; // ecx
  TeamTypeClass *buildingType; // eax
  FootClass *i; // eax
  TagClass *tag; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  TeamTypeClass *v13; // ecx
  TeamClass *v15; // [esp+10h] [ebp-4h] BYREF

  v2 = 0; /*0x6e8de5*/
  a2->AbstractClass = (void*)&TeamClass_vftable; /*0x6e8de7*/
    *((unsigned int *)this + 4) = &TeamClass::`vftable';
    *((unsigned int *)this + 8) = &TeamClass::`vftable';
  for ( a2->? = (void*)&TeamClass_vftable; v2 < dword_A8B210; ++v2 ) /*0x6e8e09*/
  {
    v3 = *((unsigned int *)dword_A8B204 + v2); /*0x6e8e10*/
        if ( a2 == *((unsigned int *)this + 36) )
    {
            if ( *((unsigned char *)this + 132) )
        AITriggerTypeClass::RegisterSuccess((AITriggerTypeClass *)v3); /*0x6e8e2a*/
      else
        AITriggerTypeClass::RegisterFailure((AITriggerTypeClass *)v3); /*0x6e8e31*/
    }
  }
    v3 = (HouseClass *)*((unsigned int *)this + 44);
  if ( owner ) /*0x6e8e45*/
  {
        v4 = (TeamTypeClass *)*((unsigned int *)this + 36);
    if ( buildingType ) /*0x6e8e4c*/
    {
      if ( IDA_BYTE2(buildingType[2].?) ) /*0x6e8e4e*/
        --owner->dropshipData[5]; /*0x6e8e58*/
    }
  }
    if ( HouseClass_Player.__pad_5568[22252] && *((unsigned int *)this + 36) )
  {
        for ( i = (FootClass *)*((unsigned int *)this + 84); i; i = (FootClass *)*((unsigned int *)this + 84) )
      TeamClass::LiberateMember_Start((int *)a2, (int)i, 0xFFFFFFFF, 0); /*0x6e8e7c*/
        --*((unsigned int *)*((unsigned int *)this + 36) + 55);
        v6 = (TagClass *)*((unsigned int *)this + 112);
    if ( tag ) /*0x6e8e9d*/
    {
      if ( !tag->instanceCount ) /*0x6e8e9f*/
        TagClass::Destroy(tag); /*0x6e8ea6*/
            *((unsigned int *)this + 112) = 0;
    }
  }
  AbstractClass::AnnounceExpiredPointer(&a2->AbstractClass, 1); /*0x6e8eb6*/
  v15 = a2; /*0x6e8ecb*/
  v8 = (*(int (**)(int *, TeamClass **))(g_BuildingLoadQueue_Array.unknown__ + 16))( /*0x6e8ecf*/
         &g_BuildingLoadQueue_Array.unknown__,
         &v15);
  if ( v8 != -1 && v8 < g_BuildingLoadQueue_Array.TargetCoordOffset[1] ) /*0x6e8edf*/
  {
    --g_BuildingLoadQueue_Array.TargetCoordOffset[1]; /*0x6e8ee4*/
    for ( ; /*0x6e8eea*/
          v8 < g_BuildingLoadQueue_Array.TargetCoordOffset[1];
          *(unsigned int *)(g_BuildingLoadQueue_Array.Adjacent + 4 * v8 - 4) = *(unsigned int *)(g_BuildingLoadQueue_Array.Adjacent
                                                                                   + 4 * v8) )
    {
      ++v8; /*0x6e8ef2*/
    }
  }
  v15 = a2; /*0x6e8f14*/
  v9 = (*(int (**)(int *, TeamClass **))(g_BuildingLoadQueue_Array.PowerBonus + 16))( /*0x6e8f18*/
         &g_BuildingLoadQueue_Array.PowerBonus,
         &v15);
  if ( v9 != -1 && v9 < g_BuildingLoadQueue_Array.Foundation[0] ) /*0x6e8f28*/
  {
    --g_BuildingLoadQueue_Array.Foundation[0]; /*0x6e8f2d*/
    for ( ; /*0x6e8f33*/
          v9 < g_BuildingLoadQueue_Array.Foundation[0];
          *(unsigned int *)(g_BuildingLoadQueue_Array.PowerDrain + 4 * v9 - 4) = *(unsigned int *)(g_BuildingLoadQueue_Array.PowerDrain
                                                                                     + 4 * v9) )
    {
      ++v9; /*0x6e8f3b*/
    }
  }
  v15 = a2; /*0x6e8f5d*/
  v10 = (*(int (**)(int *, TeamClass **))(g_BuildingLoadQueue_Array.LightVisibility + 16))( /*0x6e8f61*/
          &g_BuildingLoadQueue_Array.LightVisibility,
          &v15);
  if ( v10 != -1 && v10 < g_BuildingLoadQueue_Array.LightBlueTint ) /*0x6e8f71*/
  {
    --g_BuildingLoadQueue_Array.LightBlueTint; /*0x6e8f76*/
    for ( ; /*0x6e8f7c*/
          v10 < g_BuildingLoadQueue_Array.LightBlueTint;
          *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v10 - 4) = *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity
                                                                                          + 4 * v10) )
    {
      ++v10; /*0x6e8f84*/
    }
  }
  v15 = a2; /*0x6e8fa6*/
  v11 = (*(int (**)(char *, TeamClass **))(*(unsigned int *)&(unsigned int *)((char *)&g_BuildingLoadQueue_Array + 16) + 16))( /*0x6e8faa*/
          &(unsigned int *)((char *)&g_BuildingLoadQueue_Array + 16),
          &v15);
  if ( v11 != -1 && v11 < *(int *)&(unsigned int *)((char *)&g_BuildingLoadQueue_Array + 32) ) /*0x6e8fba*/
  {
    --*(unsigned int *)&(unsigned int *)((char *)&g_BuildingLoadQueue_Array + 32); /*0x6e8fbf*/
    for ( ; /*0x6e8fc5*/
          v11 < *(int *)&(unsigned int *)((char *)&g_BuildingLoadQueue_Array + 32);
          *(unsigned int *)(*(unsigned int *)&(unsigned int *)((char *)&g_BuildingLoadQueue_Array + 20) + 4 * v11 - 4) = *(unsigned int *)(*(unsigned int *)&(unsigned int *)((char *)&g_BuildingLoadQueue_Array + 20)
                                                                                             + 4 * v11) )
    {
      ++v11; /*0x6e8fcd*/
    }
  }
  v15 = a2; /*0x6e8fef*/
  v12 = ((int (__thiscall *)(ParticleSystemClass **, TeamClass **))FootClass_Array.?->?)(&FootClass_Array.?, &v15); /*0x6e8ff3*/
  if ( v12 != -1 && v12 < (int)FootClass_Array.? ) /*0x6e9003*/
  {
    --FootClass_Array.?; /*0x6e9008*/
    for ( ; /*0x6e900e*/
          v12 < (int)FootClass_Array.?;
          *((unsigned int *)FootClass_Array.? + v12 - 1) = *((unsigned int *)&FootClass_Array.?->ObjectClass + v12) )
    {
      ++v12; /*0x6e9016*/
    }
  }
    if ( *((unsigned char *)this + 116) )
  {
        v12 = (TeamTypeClass *)*((unsigned int *)this + 36);
    if ( v13 ) /*0x6e9034*/
      (*((void (**)(TeamTypeClass *, int))v13->AbstractClass + 8))(v13, 1); /*0x6e903a*/
  }
// 0x4101f0
  return AbstractClass::DTOR((AbstractClass *)a2); /*0x6e9044*/
}
}
// 0x6E9140
namespace gamemd {
void TeamClass::Update(TechnoClass * aP0, unsigned int * a1, int j)
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
  unsigned int *eax161; // eax
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
  if ( *(unsigned char *)(v3 + 131) )
  {
    v4 = *(TimerStruct **)(v3 + 100);
    eax2 = *(unsigned int *)(v3 + 108);
    if ( v4 != (TimerStruct *)-1 )
    {
      if ( *(unsigned int *)&HouseClass_Player[45112] - (int)v4 >= eax2 )
      {
LABEL_6:
        *(unsigned char *)(v3 + 131) = 0;
        goto LABEL_7;
      }
      eax2 -= *(unsigned int *)&HouseClass_Player[45112] - (unsigned int)v4;
    }
    if ( eax2 )
      return;
    goto LABEL_6;
  }
LABEL_7:
  if ( *(unsigned char *)(v3 + 125) && !TeamClass::UpdateReadinessState((void *)v3) )
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
      SetLandTypeMap((unsigned int *)esi1->currentScript);
      esi1->stepCompleted = 1;
    }
  }
  if ( esi1->TeamClass_field_7B || esi1->TeamClass_field_7F || !esi1->spawnCell || !esi1->unknown38 )
    TeamClass::FindClosestEnemy((int)esi1, (AbstractClass *)&esi1->spawnCell, (AbstractClass *)&esi1->unknown38);
  if ( (!esi1->TeamClass_field_7F || !esi1->unknown79 && *((unsigned char *)esi1->buildingType + 171))
    && (!(uint8_t)House::IsCurrentPlayer((void *)esi1->owner) || !esi1->spawnStatus) )
  {
    jj = 0;
    int v10 = *((unsigned int *)esi1->buildingType + 57);
    if ( *(int *)(v10 + 156) > 0 )
    {
      countObjects = esi1->countObjects;
      do
      {
        if ( *countObjects < *(unsigned int *)(v10 + 8 * jj + 164) )
          TeamClass::RecruitMember(esi1, jj);
        ++jj;
        ++countObjects;
        v10 = *((unsigned int *)esi1->buildingType + 57);
      }
      while ( jj < *(unsigned int *)(v10 + 156) );
    }
  }
  v8 = (FootClass *)esi1->firstUnit;
  if ( !v8 )
  {
    if ( esi1->spawnStatus
      || *(unsigned int *)&HouseClass_Player[29932]
      && (jj = *(unsigned int *)(*(unsigned int *)&stru_87C374[44652] + 4496),
          *(unsigned int *)&HouseClass_Player[45112] - esi1->creationFrame > jj) )
    {
      if ( esi1->unknown82 )
      {
        for ( i = 0; i < *(int *)&stru_89E138[90016]; ++i )
        {
          if ( TeamClass::Update_0(
                 *(void ***)(*(unsigned int *)&stru_89E138[90004] + 4 * i),
                 23,
                 0,
                 *(IUnknown **)&stru_B05488[38080],
                 0,
                 0) )
          {
            --i;
            if ( !*(unsigned int *)&stru_89E138[90016] )
              break;
          }
        }
      }
LABEL_112:
      if ( esi1 )
        (*(void (**)(TeamClass *, int))(*(unsigned int *)esi1->__pad_0 + 32))(esi1, 1);
      return;
    }
    goto LABEL_49;
  }
  if ( !(*(uint8_t (**)(FootClass *))(*(unsigned int *)v8->__pad_0 + 472))(v8) )
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
  IDA_LOBYTE(aP2) = 0;
  if ( stepCompleted )
  {
    v15 = 1;
    esi1->stepCompleted = 0;
    v13 = (ScriptClass *)esi1->currentScript;
    IDA_LOBYTE(aP2) = 1;
    TeamClass::Check(v13);
    for ( jj = (int)esi1->firstUnit; jj; jj = *(unsigned int *)(jj + 1496) )
    {
      if ( *((unsigned char *)esi1->buildingType + 244)
        && *(int *)((*(int (**)(int))(*(unsigned int *)jj + 132))(jj) + 1504) > 0 )
      {
        if ( *(unsigned int *)(jj + 536) )
          Debug::Log();
      }
      else
      {
        TechnoClass::SetFocus((unsigned int *)jj, 0);
      }
    }
    if ( !SessionClass::SetField((unsigned int *)esi1->currentScript) )
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
    IDA_LOBYTE(aP2) = 1;
    esi1->unknown81 = 0;
    TeamClass::SelectMember((int)esi1, 0);
    esi1->focus = 0;
  }
  unsigned int v65[2]; // [esp+14h] [ebp-24h] BYREF
  Entry = SessionClass::GetEntry((unsigned int *)esi1->currentScript, (IUnknown *)v65);
  int v67 = *Entry;
  int v18 = Entry[1];
  v68 = (AbstractClass *)v18;
  switch ( v67 )
  {
  unsigned char v69[12]; // [esp+2Ch] [ebp-Ch] BYREF
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
      IDA_LOWORD(aP2) = v18 % 128;
      IDA_HIWORD(aP2) = v18 / 128;
      MapSpawnCell = (AbstractClass *)CellCoord::To_CellObj(&stru_87C374[13428], (int16_t *)&aP2);
      goto LABEL_90;
    case 5:
      if ( v15 )
      {
        esi1->guardAreaTimer[0] = *(unsigned int *)&HouseClass_Player[45112];
        esi1->guardAreaTimer[1] = (int)v68;
        esi1->guardAreaTimer[2] = 15 * v18;
      }
      HouseClass::EvaluateTarget((int)esi1);
      if ( !CDTimerClass::TimeRemaining(esi1->guardAreaTimer) )
        esi1->stepCompleted = 1;
      return;
    case 6:
      TeamClass::SetField11((unsigned int *)esi1->currentScript, (ScriptClass *)(v18 - 2));
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
      ScenarioClass::SetGlobalToByID(*(unsigned char **)&HouseClass_Player[29924], v18, 1);
      goto LABEL_82;
    case 13:
      v36 = (FootClass *)esi1->firstUnit;
      if ( !v36 )
        goto LABEL_82;
      while ( 1 )
      {
        (*(void (**)(FootClass *, int))(*(unsigned int *)v36->__pad_0 + 1312))(v36, v18);
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
        (*(void (**)(ScriptClass *, int))(*(unsigned int *)v32->__pad_0 + 32))(v32, 1);
      eax116 = (AbstractClass *)new AbstractClass;
      if ( eax116 )
      {
        eax117 = ScriptClass::Construct(eax116, *((AbstractClass **)unk_8B41CC + (unsigned int)v68));
        *(void **)&esi1->currentScript = eax117;
        SetLandTypeMap(eax117);
      }
      else
      {
        esi1->currentScript = 0;
        SetLandTypeMap(0);
      }
      return;
    case 18:
      eax107 = operator new(0xA0u);
      if ( eax107 )
  int v33; // ebp
        v33 = MissionClass::Construct(
                eax107,
                *(AbstractClass **)(*(unsigned int *)&HouseClass_Player[44888] + 4 * (unsigned int)v68),
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
        (*(void (**)(FootClass *))(*(unsigned int *)v35->__pad_0 + 1304))(v35);
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
          int v30 = *(unsigned int *)v25->__pad_0;
          Owner = HouseClass::FindOwner((void *)v18);
          (*(void (**)(FootClass *, int, int))(v30 + 980))(v25, Owner, 1);
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
        (*(void (**)(FootClass *, char *, int, unsigned int))(*(unsigned int *)m->__pad_0 + 372))(
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
        unsigned int * v41 = (unsigned int *)(*(int (**)(FootClass *, unsigned char *))(*(unsigned int *)v37->__pad_0 + 72))(v37, v69);
        IDA_LOWORD(aP2) = *v41 / 256;
        IDA_HIWORD(aP2) = v41[1] / 256;
        v65[0] = aP2;
        MapClass::TriggerEVA((IUnknown *)v65);
        v37 = (FootClass *)v37->nextTeamMember;
      }
      while ( v37 );
      esi1->stepCompleted = 1;
      return;
    case 29:
      *((unsigned char *)esi1->owner + 494) = 1;
      esi1->stepCompleted = 1;
      return;
    case 30:
      *((unsigned int *)esi1->owner + 148) = 4;
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
            edx153 = *(unsigned int *)v39->__pad_0;
            v65[0] = v39->health;
            (*(void (**)(FootClass *, unsigned int *, unsigned int, unsigned int, unsigned int, int, unsigned int, unsigned int))(edx153 + 364))(
              v39,
              v65,
              0,
              *(unsigned int *)(*(unsigned int *)&stru_87C374[44652] + 4008),
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
        *(unsigned int *)(*(unsigned int *)&stru_87C374[44652] + 6036),
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
      eax161 = (unsigned int *)(*(int (**)(void *, unsigned char *))(esi1->spawnCell->q048)(
                           esi1->spawnCell,
                           v69);
      v65[0] = *eax161;
      v65[1] = eax161[1];
      GroundHeight = eax161[2];
      GroundHeight = Cell::GetGroundHeight((IUnknown *)v65);
      if ( (*((unsigned int *)Coord::To_Cell(&stru_87C374[13428], (IUnknown *)v65) + 80) & 0x100) != 0
        || (*((unsigned int *)Coord::To_Cell(&stru_87C374[13428], (IUnknown *)v65) + 80) & 0x400) != 0 )
      {
        GroundHeight += *(unsigned int *)&stru_B05488[38164];
      }
      TacticalClass::SetPosition(*(unsigned int **)&stru_87C374[44976], (IUnknown *)v65, v68);
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
          (*(void (**)(FootClass *))(*(unsigned int *)v20->__pad_0 + 212))(v20);
          (*(void (**)(FootClass *))(*(unsigned int *)v20->__pad_0 + 248))(v20);
          v20 = v24;
        }
        while ( v24 );
      }
      esi1->stepCompleted = 1;
      return;
    case 38:
      ScenarioClass::SetGlobalToByID(*(unsigned char **)&HouseClass_Player[29924], v18, 0);
      goto LABEL_82;
    case 39:
      ScenarioClass::SetLocalToByID(*(unsigned char **)&HouseClass_Player[29924], v18, 1);
      esi1->stepCompleted = 1;
      return;
    case 40:
      ScenarioClass::SetLocalToByID(*(unsigned char **)&HouseClass_Player[29924], v18, 0);
      esi1->stepCompleted = 1;
      return;
    case 41:
      v43 = (FootClass *)esi1->firstUnit;
      if ( !v43 )
        goto LABEL_82;
      do
      {
        (*(void (**)(FootClass *))(*(unsigned int *)v43->__pad_0 + 1308))(v43);
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
        if ( (*(int (**)(FootClass *))(*(unsigned int *)n->__pad_0 + 44))(n) == 1 )
        {
          eax71 = (*(int (**)(FootClass *))(*(unsigned int *)n->__pad_0 + 132))(n);
          if ( !_strcmpi((const void *)(eax71 + 36), &stru_830620[75700]) )
            *(unsigned int *)&n[1].__pad_0[4] = *(unsigned int *)&g_UnitTypeCount2->__pad_0[4
                                                                              * BuildingTypeClass::FindIndex(&stru_830620[75692])];
        }
      }
LABEL_74:
      esi1->stepCompleted = 1;
      return;
    case 45:
      for ( ii = (FootClass *)esi1->firstUnit; ii; ii = (FootClass *)ii->nextTeamMember )
      {
        if ( (*(int (**)(FootClass *))(*(unsigned int *)ii->__pad_0 + 44))(ii) == 1 )
        {
          eax77 = (*(int (**)(FootClass *))(*(unsigned int *)ii->__pad_0 + 132))(ii);
          if ( !_strcmpi((const void *)(eax77 + 36), &stru_830620[75692]) )
            *(unsigned int *)&ii[1].__pad_0[4] = *(unsigned int *)&g_UnitTypeCount2->__pad_0[4
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
        char v50 = (*(int (**)(FootClass *))(*(unsigned int *)v46->__pad_0 + 828))(v46);
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
        char v53 = (*(int (**)(FootClass *))(*(unsigned int *)v49->__pad_0 + 836))(v49);
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
        char v56 = (*(int (**)(FootClass *))(*(unsigned int *)v52->__pad_0 + 832))(v52);
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
        char v59 = (*(int (**)(FootClass *))(*(unsigned int *)v55->__pad_0 + 840))(v55);
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
        char v62 = (*(int (**)(FootClass *))(*(unsigned int *)v58->__pad_0 + 844))(v58);
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
  while ( *(unsigned int *)((*(int (**)(FootClass *))(*(unsigned int *)v44->__pad_0 + 132))(v44) + 1504) <= *(unsigned int *)&v44->inAirFlag )
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

    v8 = *((unsigned char *)this + 122);
    v2 = TeamClass::SumMemberCounts(*(int **)(*((unsigned int *)this + 9) + 228));
    v3 = *((unsigned int *)this + 18);
  if ( v3 > 0 ) /*0x6ea404*/
  {
        *((unsigned char *)this + 121) = v3 == v2;
    if ( v3 == v2 ) /*0x6ea410*/
            *((unsigned char *)this + 120) = 1;
        v4 = *((unsigned int *)this + 9);
    if ( v4->q0AB ) /*0x6ea419*/
    {
      if ( v2 <= 2 ) /*0x6ea424*/
                *((unsigned char *)this + 122) = v3 < v2;
      else
                *((unsigned char *)this + 122) = v3 <= v2 / 3;
    }
    else
    {
            *((unsigned char *)this + 122) = *((unsigned char *)this + 120) == 0;
    }
    if ( v4->u8_A7 ) /*0x6ea451*/
    {
            if ( *((unsigned char *)this + 122) )
                *((unsigned char *)this + 118) = 0;
      else
                *((unsigned char *)this + 118) = 1;
    }
        *((unsigned char *)this + 126) = 0;
        *((unsigned char *)this + 125) = 0;
    goto LABEL_14; /*0x6ea46a*/
  }
    v6 = *((unsigned char *)this + 120);
    *((unsigned char *)this + 118) = 0;
    *((unsigned char *)this + 122) = 1;
    *((unsigned char *)this + 121) = 0;
    *((unsigned int *)this + 13) = 0;
  if ( !v6 ) /*0x6ea495*/
  {
  LABEL_14:
        if ( v8 != *((unsigned char *)this + 122) )
            *((unsigned char *)this + 123) = 1;
    return 1; /*0x6ea482*/
  }
    if ( *((unsigned char *)this + 130) )
  {
    for ( i = g_ScenarioUpdateState - 1; i >= 0; --i ) /*0x6ea4aa*/
    {
      if ( TeamClass::Update_0(*((void ***)dword_8B40CC + i), 23, 0, dword_B0E948, 0, 0) && !g_ScenarioUpdateState ) /*0x6ea4cf*/
        break; /*0x6ea4cf*/
    }
  }
  if ( this ) /*0x6ea4d6*/
        (*(void (**)(void *, int))(*(unsigned int *)this + 32))(this, 1);
  return 0; /*0x6ea47c*/
}
}
// 0x6EA870
namespace gamemd {
int TeamClass::LiberateMember_Start(IUnknown * aP1, unsigned int a3, AbstractClass * aP3)
{
  int v5; // eax
  void *v7; // ecx
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

  v5 = *(unsigned int *)(aP1 + 1492); /*0x6ea879*/
  *(unsigned char *)(aP1 + 1720) = 1; /*0x6ea87f*/
  if ( this != v5 ) /*0x6ea888*/
    return 1; /*0x6ea88b*/
    if ( aP1->field_34 == *((unsigned int *)this + 448) )
  {
    v7 = *(void **)(aP1 + 540); /*0x6ea89d*/
    if ( v7 ) /*0x6ea8a7*/
    {
      if ( !(uint8_t)House::IsCurrentPlayer(v7) ) /*0x6ea8a9*/
        ObjectClass::SetReference((unsigned int *)aP1, 0); /*0x6ea8b5*/
    }
  }
  if ( a3 == -1 ) /*0x6ea8c6*/
  {
        v8 = *(TeamTypeClass **)((char *)this + 144);
    if ( v8 ) /*0x6ea8cd*/
    {
      v9 = v8->q0E4; /*0x6ea8cf*/
      if ( v9 ) /*0x6ea8d7*/
      {
        a3 = 0; /*0x6ea8df*/
        if ( *(int *)(v9 + 156) > 0 ) /*0x6ea8e5*/
        {
          v10 = 168; /*0x6ea8e7*/
          do /*0x6ea919*/
          {
                        v11 = *(unsigned int *)(*((unsigned int *)this + 144) + 228);
            if ( *(unsigned int *)(v10 + v11) == (*(int (**)(int))(*(unsigned int *)aP1 + 136))(aP1) ) /*0x6ea903*/
              break; /*0x6ea903*/
            v10 += 8; /*0x6ea910*/
            ++a3; /*0x6ea915*/
          }
          while ( (signed int)a3 < *(unsigned int *)(v11 + 156) ); /*0x6ea919*/
        }
      }
    }
  }
    v12 = *(TeamTypeClass **)((char *)this + 144);
  if ( v12 ) /*0x6ea922*/
  {
    v13 = v12->q0E4; /*0x6ea924*/
    if ( v13 ) /*0x6ea92c*/
    {
      if ( a3 < *(unsigned int *)(v13 + 156) ) /*0x6ea93a*/
                --*(unsigned int *)((char *)this + 16 * a3 + 136);
    }
  }
    v14 = *(FootClass **)((char *)this + 336);
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
          v16->FootClass_field_5D8 = v14->FootClass_field_5D8; /*0x6ea980*/
        else
                    *((unsigned int *)this + 336) = v14->nextTeamMember;
        v18 = v14->FootClass_field_5D8; /*0x6ea991*/
        v14->FootClass_field_5D8 = 0; /*0x6ea997*/
        v14->FootClass_field_5D4 = 0; /*0x6ea99d*/
        v14->suspendedMission = -1; /*0x6ea9a3*/
        v14->FootClass_field_5A8 = 0; /*0x6ea9ad*/
        v14->q2B8 = 0; /*0x6ea9b3*/
        v14 = v18; /*0x6ea9bc*/
                --*((unsigned int *)this + 288);
        v19 = (*(int (**)(int))(*(unsigned int *)aP1 + 704))(aP1); /*0x6ea9cc*/
        v17 = 1; /*0x6ea9d5*/
                *((unsigned int *)this + 304) -= v19;
      }
      else
      {
        if ( v15 || (v22 = 0, v14->isTeamLeader) ) /*0x6ea9e4*/
          v22 = 1; /*0x6ea9f2*/
        v21 = v14; /*0x6ea9f7*/
        v14 = v14->FootClass_field_5D8; /*0x6ea9fb*/
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
  if ( *(unsigned int *)(aP1 + 1492) ) /*0x6eaa0d*/
    *(unsigned int *)(aP1 + 1492) = 0; /*0x6eaa18*/
  if ( !g_IKnowWhatImDoing && *(unsigned char *)(aP1 + 144) && !*(unsigned char *)(aP1 + 1061) && !*(unsigned char *)(aP1 + 129) && !aP3 ) /*0x6eaa4a*/
  {
    (*(void (**)(int, unsigned int, int))(*(unsigned int *)aP1 + 1156))(aP1, 0, 1); /*0x6eaa54*/
    v15 = v22; /*0x6eaa5a*/
  }
  if ( !v15 ) /*0x6eaa60*/
  {
        v20 = *(FootClass **)((char *)this + 336);
    if ( v20 ) /*0x6eaa67*/
    {
      v20->isTeamLeader = 1; /*0x6eaa69*/
            *((unsigned int *)this + 208) = 0;
    }
  }
    *((unsigned char *)this + 504) = 1;
    *((unsigned char *)this + 500) = 1;
  return 1; /*0x6ea88a*/
}
}
// 0x6EAA90
namespace gamemd {
TeamTypeClass * * TeamClass::RecruitMember(int a2)
{
  TeamClass *v2; // edi
  int v3; // ebx
  CellClass *spawnCell; // ecx
  int *v5; // eax
  TechnoClass *buildingType; // ecx
  unsigned int *WaypointCoords; // eax
  int v8; // ecx
  int v9; // eax
  TeamTypeClass *v10; // ecx
  int v11; // ecx
  int v12; // ebp
  int v13; // eax
  Math *v14; // esi
  int v15; // eax
  int v16; // edi
  int v18; // ebp
  int v19; // eax
  Math *v20; // esi
  int v21; // eax
  int v22; // edi
  int v23; // eax
  int v24; // esi
  int v25; // eax
  int v26; // edi
  int DB; // esi
  int Group; // [esp+14h] [ebp-28h]
  int v30; // [esp+18h] [ebp-24h]
  int v31; // [esp+1Ch] [ebp-20h]
  int v32; // [esp+1Ch] [ebp-20h]
  int v33; // [esp+1Ch] [ebp-20h]
  int v34; // [esp+20h] [ebp-1Ch] BYREF
  int v35; // [esp+24h] [ebp-18h] BYREF
  int v36; // [esp+28h] [ebp-14h]
  int v37; // [esp+2Ch] [ebp-10h]
  unsigned char v38[12]; // [esp+30h] [ebp-Ch] BYREF

  v3 = 0; /*0x6eaa99*/
    v4 = (CellClass *)*((unsigned int *)this + 52);
  if ( spawnCell ) /*0x6eaaa4*/
    v5 = (int *)(*(int (**)(CellClass *, unsigned char *))(spawnCell->mapCoords[0] + 72))(spawnCell, v38); /*0x6eaaad*/
  else
    v5 = &(unsigned int *)((char *)&g_BuildingLoadQueue_Array + 9); /*0x6eaab2*/
  v35 = *v5; /*0x6eaab9*/
  v36 = v5[1]; /*0x6eaac4*/
  buildingType = (TechnoClass *)this->buildingType; /*0x6eaacc*/
  v37 = v5[2]; /*0x6eaacf*/
  if ( *TechnoClass::GetWaypointCoords(buildingType, &v34) != *((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 1)) ) /*0x6eaae2*/
  {
        WaypointCoords = (CellClass *)TechnoClass::GetWaypointCoords((unsigned int *)v2->buildingType, &v35);
    v8 = (*(int16_t *)WaypointCoords << 8) + 128; /*0x6eab0b*/
    v9 = (*((int16_t *)WaypointCoords + 1) << 8) + 128; /*0x6eab11*/
    v35 = v8; /*0x6eab18*/
    v36 = v9; /*0x6eab1c*/
    v37 = 0; /*0x6eab20*/
  }
    v10 = (TeamTypeClass *)v2->buildingType;
  v30 = 0; /*0x6eab2b*/
    if ( *(unsigned int *)(*(unsigned int *)&v10[1].TeamTypeClass_field_70 + 8 * a2 + 164) <= v2->countObjects[a2] )
    return v30; /*0x6eae19*/
  Group = TeamTypeClass::GetGroup(v10); /*0x6eab54*/
    v12 = *(unsigned int *)(*((unsigned int *)v2->buildingType + 57) + 8 * a2 + 168);
  switch ( (*(int (**)(int))(*(unsigned int *)v11 + 44))(v11) ) /*0x6eab7f*/
  {
    case 1: /*0x6eab7f*/
    case 40: /*0x6eab7f*/
      v23 = 0; /*0x6ead07*/
      v33 = -1; /*0x6ead0b*/
      v34 = 0; /*0x6ead13*/
      if ( *((unsigned int *)((char *)&FootClass_Array + 2)) > 0 ) /*0x6ead17*/
      {
        do /*0x6eadc8*/
        {
          v24 = *(unsigned int *)(FootClass_Array.? + 4 * v23); /*0x6ead23*/
                    if ( Group == -2 || v24->displayProductionTo[0] == Group || *((unsigned char *)v2->buildingType + 168) )
          {
            v25 = Math::DistSq2D((Math *)v24, &v35); /*0x6ead4b*/
            v26 = v25; /*0x6ead54*/
            if ( v24->controlGroup != Group ) /*0x6ead5c*/
              v26 = v25 + 12800; /*0x6ead5e*/
                        if ( v24->focus == (void *)*((unsigned int *)this + 44)
              && v24->u32_6C4 == *(unsigned int *)(*(unsigned int *)&this->buildingType[1].TeamTypeClass_field_70
                                                      + 8 * a2
                                                      + 168)
              && (v26 < v33 || v33 == -1)
              && (uint8_t)TeamClass::ValidateMember(this, v24, &a2, 0) )
            {
              v3 = v24; /*0x6eadad*/
              v33 = v26; /*0x6eadaf*/
            }
          }
          v23 = ++v34; /*0x6eadc1*/
        }
        while ( v34 < *((unsigned int *)((char *)&FootClass_Array + 2)) ); /*0x6eadc8*/
        if ( v3 ) /*0x6eadd0*/
        {
          (*(void (**)(int, unsigned int))(v3->unknown_short_3C8)(v3, 0); /*0x6eadd8*/
          TeamClass::AddMember((int *)this, v3, 0); /*0x6eade3*/
          v30 = 1; /*0x6eadee*/
          DB = CCINIClass::GetDB((CCINIClass *)(v3 + 276)); /*0x6eadfb*/
          if ( DB ) /*0x6eadff*/
          {
            do /*0x6eae17*/
            {
              TeamClass::AddMember((int *)this, DB, 0); /*0x6eae08*/
              DB = *(unsigned int *)(DB + 48); /*0x6eae0d*/
            }
            while ( DB && (*(unsigned char *)(DB + 20) & 4) != 0 ); /*0x6eae17*/
          }
        }
      }
      return v30; /*0x6eae17*/
    case 2: /*0x6eab7f*/
    case 3: /*0x6eab7f*/
      v18 = -1; /*0x6eac57*/
      v19 = 0; /*0x6eac5a*/
      v32 = 0; /*0x6eac5e*/
      if ( dword_A8E3A0 <= 0 ) /*0x6eac62*/
        return v30; /*0x6eac62*/
      do /*0x6eace6*/
      {
        v20 = (Math *)*((unsigned int *)dword_A8E394 + v19); /*0x6eac6e*/
        if ( Group == -2 || v20[33].field_4 == (void *)Group || IDA_LOBYTE(this->buildingType[1].TeamTypeClass_field_34) ) /*0x6eac85*/
        {
          v21 = Math::DistSq2D(v20, &v35); /*0x6eac96*/
          v22 = v21; /*0x6eac9f*/
          if ( v20[33].field_4 != (void *)Group ) /*0x6eaca7*/
            v22 = v21 + 12800; /*0x6eaca9*/
          if ( (v22 < v18 || v18 == -1) && (uint8_t)TeamClass::ValidateMember(this, (int)v20, &a2, 0) ) /*0x6eacc4*/
          {
            v3 = (int)v20; /*0x6eaccd*/
            v18 = v22; /*0x6eaccf*/
          }
        }
        v19 = ++v32; /*0x6eacdf*/
      }
      while ( v32 < dword_A8E3A0 ); /*0x6eace6*/
      if ( !v3 ) /*0x6eacea*/
        return v30; /*0x6eacea*/
      break; /*0x6eacea*/
    case 15: /*0x6eab7f*/
    case 16: /*0x6eab7f*/
      v12 = -1; /*0x6eab8c*/
      v13 = 0; /*0x6eab8f*/
      v31 = 0; /*0x6eab93*/
      if ( *(int *)&stru_A83D50.__pad_80[40] <= 0 ) /*0x6eab97*/
        return v30; /*0x6eab97*/
      do /*0x6eac1b*/
      {
        v14 = *(Math **)(*(unsigned int *)&stru_A83D50.__pad_80[28] + 4 * v13); /*0x6eaba3*/
        if ( Group == -2 || v14[33].field_4 == (void *)Group || IDA_LOBYTE(this->buildingType[1].TeamTypeClass_field_34) ) /*0x6eabba*/
        {
          v15 = Math::DistSq2D(v14, &v35); /*0x6eabcb*/
          v16 = v15; /*0x6eabd4*/
          if ( v14[33].field_4 != (void *)Group ) /*0x6eabdc*/
            v16 = v15 + 12800; /*0x6eabde*/
          if ( (v16 < v12 || v12 == -1) && (uint8_t)TeamClass::ValidateMember(this, (int)v14, &a2, 0) ) /*0x6eabf9*/
          {
            v3 = (int)v14; /*0x6eac02*/
            v12 = v16; /*0x6eac04*/
          }
        }
        v13 = ++v31; /*0x6eac14*/
      }
      while ( v31 < *(int *)&stru_A83D50.__pad_80[40] ); /*0x6eac1b*/
      if ( !v3 ) /*0x6eac1f*/
        return v30; /*0x6eac1f*/
      break; /*0x6eac1f*/
    default:
      return v30;
  }
  (*(void (**)(int, unsigned int))(v3->unknown_short_3C8)(v3, 0); /*0x6eac2b*/
  TeamClass::AddMember((int *)this, v3, 0); /*0x6eac36*/
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
  unsigned int *v11; // ebx
  unsigned int *v12; // eax
  int *v13; // eax
  int v14; // eax
  char *v15; // esi
  unsigned int *v16; // ebx
  unsigned int *v17; // eax
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
  unsigned char v42[12]; // [esp+4Ch] [ebp-18h] BYREF
  unsigned int v43[3]; // [esp+58h] [ebp-Ch] BYREF

  IDA_LOBYTE(v3) = (unsigned char)aP2; /*0x6eaee3*/
  v5 = 0; /*0x6eaeec*/
  *aP2 = 0; /*0x6eaef2*/
  *aP1 = 0; /*0x6eaef9*/
    v6 = *((unsigned int *)this + 336);
  if ( v6 ) /*0x6eaf00*/
  {
        if ( *SessionClass::GetEntry(*(unsigned int **)((char *)this + 160), (IUnknown *)&v36) == 10 )
    {
      v7 = 0; /*0x6eaf22*/
      v8 = -1; /*0x6eaf24*/
      v9 = 0; /*0x6eaf27*/
      v34 = 0; /*0x6eaf2b*/
      v31 = 0; /*0x6eaf2f*/
      if ( dword_8B4118 > 0 ) /*0x6eaf33*/
      {
        do /*0x6eb012*/
        {
          v10 = (char *)*((unsigned int *)dword_8B410C + v9); /*0x6eaf3f*/
          if ( v10 && v10[144] && *((unsigned int *)v10 + 27) && (dword_A8E7AC || !v10[129]) ) /*0x6eaf6c*/
          {
                        if ( (unsigned __int8)HouseClass::IsAlliedWith(*(void **)(v10 + 540), *(IUnknown **)((char *)this + 176)) )
            {
              if ( this != *((unsigned int *)v10 + 373) ) /*0x6eaf97*/
              {
                v11 = (unsigned int *)(*(int (**)(char *, int *))(*(unsigned int *)v10 + 72))(v10, &v39); /*0x6eafa7*/
                v12 = (unsigned int *)(*(int (**)(int, unsigned char *))(*(unsigned int *)v6 + 72))(v6, v42); /*0x6eafb0*/
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
        while ( v31 < dword_8B4118 ); /*0x6eb012*/
        v7 = v34; /*0x6eb01c*/
      }
      v3 = 0; /*0x6eb026*/
      v32 = 0; /*0x6eb02a*/
      if ( dword_A83DF8 > 0 ) /*0x6eb02e*/
      {
        do /*0x6eb141*/
        {
          v15 = (char *)*((unsigned int *)dword_A83DEC + v3); /*0x6eb03a*/
          if ( v15 && v15[144] && *((unsigned int *)v15 + 27) && (dword_A8E7AC || !v15[129]) ) /*0x6eb067*/
          {
                        if ( (unsigned __int8)HouseClass::IsAlliedWith(*(void **)(v15 + 540), *(IUnknown **)((char *)this + 176)) )
            {
              if ( this != *((unsigned int *)v15 + 373) ) /*0x6eb096*/
              {
                v16 = (unsigned int *)(*(int (**)(char *, unsigned int *))(*(unsigned int *)v15 + 72))(v15, v43); /*0x6eb0aa*/
                v17 = (unsigned int *)(*(int (**)(int, unsigned char *))(*(unsigned int *)v6 + 72))(v6, v42); /*0x6eb0b3*/
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
        while ( v32 < dword_A83DF8 ); /*0x6eb141*/
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
          v36 = *(unsigned int *)(*((unsigned int *)dword_8B413C + v21) + 40); /*0x6eb175*/
          *aP1 = CellCoord::To_CellObj(&dword_87F7E8, (int16_t *)&v36); /*0x6eb188*/
        }
        v3 = this->u8_15; /*0x6eb18a*/
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
        IDA_LOBYTE(v3) = *(unsigned char *)(v6 + 144); /*0x6eb1cd*/
        if ( (unsigned char)v3 ) /*0x6eb1d5*/
        {
          v3 = *(unsigned int *)(v6 + 108); /*0x6eb1db*/
          if ( v3 ) /*0x6eb1e0*/
          {
            if ( dword_A8E7AC || (IDA_LOBYTE(v3) = *(unsigned char *)(v6 + 129), !(unsigned char)v3) ) /*0x6eb1f7*/
            {
              if ( *(unsigned char *)(v6 + 1673) || (v3 = (*(int (**)(int))(*(unsigned int *)v6 + 44))(v6), v3 == 2) ) /*0x6eb211*/
              {
                IDA_LOBYTE(v3) = *(unsigned char *)(v6 + 981); /*0x6eb217*/
                if ( (unsigned char)v3 ) /*0x6eb21f*/
                {
                  v24 = (int *)(v6 + 156); /*0x6eb225*/
                  v5 += *(unsigned int *)(v6 + 156); /*0x6eb22f*/
                  v40 = *(unsigned int *)(v6 + 160); /*0x6eb234*/
                  v25 = *(unsigned int *)(v6 + 156); /*0x6eb23d*/
                  v41 = *(unsigned int *)(v6 + 164); /*0x6eb23f*/
                  v39 = v25; /*0x6eb243*/
                  v26 = *(unsigned int *)(v6 + 160); /*0x6eb247*/
                  v41 = *(unsigned int *)(v6 + 164); /*0x6eb251*/
                  v33 += v26; /*0x6eb25e*/
                  ++v22; /*0x6eb262*/
                                    if ( *(unsigned char *)(*((unsigned int *)this + 144) + 167)
                    && (*(uint8_t (**)(int))(*(unsigned int *)v6 + 1248))(v6) )
                  {
                    v5 += *v24; /*0x6eb27f*/
                    v40 = *(unsigned int *)(v6 + 160); /*0x6eb287*/
                    v27 = *(unsigned int *)(v6 + 164); /*0x6eb28d*/
                    v39 = *v24; /*0x6eb290*/
                    v41 = v27; /*0x6eb294*/
                    v41 = *(unsigned int *)(v6 + 164); /*0x6eb29b*/
                    ++v22; /*0x6eb2a5*/
                    v33 += v40; /*0x6eb2a6*/
                  }
                  if ( *(int *)((*(int (**)(int))(*(unsigned int *)v6 + 132))(v6) + 1504) <= 0 /*0x6eb2c8*/
                    || (v3 = (*(int (**)(int))(*(unsigned int *)v6 + 132))(v6), !*(unsigned char *)(v3 + 3278)) )
                  {
                    v3 = BuildingClass::SquaredDistanceTo(this->uniqueId); /*0x6eb2dc*/
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
        v6 = *(unsigned int *)(v6 + 1496); /*0x6eb2f9*/
      }
      while ( v6 ); /*0x6eb301*/
      if ( v22 ) /*0x6eb309*/
      {
        v36 = v5 / v22; /*0x6eb31b*/
        v38 = 0; /*0x6eb324*/
        v37 = v33 / v22; /*0x6eb328*/
        v28 = Coord::To_Cell(&dword_87F7E8, &v36); /*0x6eb331*/
        *aP1 = v28; /*0x6eb33c*/
        if ( !v23 ) /*0x6eb33e*/
                    v23 = *((unsigned int *)this + 336);
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
        IDA_LOBYTE(v3) = (unsigned char)aP2; /*0x6eb36a*/
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
  FootClass *firstUnit; // esi
  int v3; // ebp
  int v5; // edi
  AbstractClass *focus; // ecx
  AbstractClass *v7; // edi
  Object *v8; // esi
  int (**vtable0)(FootClass *, AbstractClass *, int); // esi
  int v10; // eax
  unsigned int *p_vtable0; // eax
  FootClass *v12; // esi
  char v13; // bl
  int v14; // eax
  int v15; // edi
  AbstractClass *target; // eax
  int v19; // [esp+14h] [ebp-10h] BYREF
  int v20; // [esp+18h] [ebp-Ch]
  unsigned int v21[2]; // [esp+1Ch] [ebp-8h] BYREF

  v1 = this; /*0x6eb497*/
    if ( !*((unsigned int *)this + 64) )
        *((unsigned int *)this + 64) = *((unsigned int *)this + 60);
    v2 = (unsigned int *)*((unsigned int *)this + 84);
  v3 = -1; /*0x6eb4ad*/
  v4 = firstUnit; /*0x6eb4b2*/
  if ( firstUnit ) /*0x6eb4b4*/
  {
    do /*0x6eb514*/
    {
      v5 = *(unsigned int *)((*((int (**)(FootClass *))firstUnit->TechnoClass + 33))(firstUnit) + 1532); /*0x6eb4c0*/
      if ( firstUnit->? /*0x6eb506*/
        && firstUnit->?
        && (dword_A8E7AC || !firstUnit->?)
        && (firstUnit->isTeamLeader || (*((int (**)(FootClass *))firstUnit->TechnoClass + 11))(firstUnit) == 2)
        && v5 > v3 )
      {
        v4 = firstUnit; /*0x6eb508*/
        v3 = v5; /*0x6eb50a*/
      }
      firstUnit = firstUnit->nextTeamMember; /*0x6eb50c*/
    }
    while ( firstUnit ); /*0x6eb514*/
    v1 = this; /*0x6eb516*/
  }
  focus = *(unsigned int *)&v1->focus; /*0x6eb51a*/
  if ( focus
    && (*((int (**)(AbstractClass *))focus->vtable0 + 11))(focus) == 11
    && v1->firstUnit
    && (*((int (**)(FootClass *))v4->TechnoClass + 11))(v4) != 2 )
  {
    v7 = *(unsigned int *)&v1->focus; /*0x6eb53e*/
    if ( v7 )
      v8 = (*((int (**)(AbstractClass *))v7->vtable0 + 11))(v7) == 11 ? (Object *)v7 : 0;
    else
      v8 = 0; /*0x6eb547*/
    v19 = 0; /*0x6eb567*/
    v20 = 0; /*0x6eb56b*/
    if ( Object::FindObjectCell(v8, &v19, 0) ) /*0x6eb56f*/
    {
      v19 = 0; /*0x6eb582*/
      v20 = 0; /*0x6eb586*/
            *((unsigned int *)this + 64) = Object::FindObjectCell(v8, &v19, 0);
    }
    v1 = this; /*0x6eb596*/
  }
  if ( *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) % 8 == 4 ) /*0x6eb5ae*/
  {
    vtable0 = (int (**)(FootClass *, AbstractClass *, int))v4->TechnoClass; /*0x6eb5b3*/
    v10 = (*((int (**)(FootClass *, AbstractClass *, int))v4->TechnoClass + 185))(v4, v1->focus, 1); /*0x6eb5ba*/
    if ( vtable0[240](v4, v1->focus, v10) == 5 ) /*0x6eb5d0*/
      v1->unknown81 = 1; /*0x6eb5d2*/
  }
  p_vtable0 = &v1->focus->vtable0; /*0x6eb5d9*/
  if ( !p_vtable0 /*0x6eb605*/
    || (p_vtable0 = SessionClass::GetEntry((SessionClass *)v1->currentScript, v21),
        v12 = v1->firstUnit,
        v13 = 0,
        v19 = *p_vtable0,
        v20 = p_vtable0[1],
        !v12) )
  {
  LABEL_72:
    v1->stepCompleted = 1; /*0x6eb85b*/
    return (char)p_vtable0; /*0x6eb85b*/
  }
  do /*0x6eb851*/
  {
    if ( !v12->? ) /*0x6eb60b*/
      goto LABEL_67; /*0x6eb60b*/
    if ( *(unsigned int *)&v12->isTeamLeader && (dword_A8E7AC || !*(unsigned int *)&v12->isTeamLeader) && !v12->isTeamLeader ) /*0x6eb63b*/
    {
      v14 = *SessionClass::GetEntry((SessionClass *)v1->currentScript, v21); /*0x6eb656*/
      if ( v14 == 54 || v14 == 53 ) /*0x6eb660*/
        v15 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5920); /*0x6eb676*/
      else
        v15 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5916); /*0x6eb668*/
            if ( ObjectClass::DistanceTo((void *)v12, *((unsigned int *)this + 52)) <= v15 )
      {
        v12->isTeamLeader = 1; /*0x6eb6c5*/
      }
      else if ( !v12->movementDestination ) /*0x6eb68f*/
      {
        (*((void (**)(FootClass *, int, unsigned int))v12->TechnoClass + 122))(v12, 2, 0); /*0x6eb6a1*/
        (*((void (**)(FootClass *, unsigned int))v12->TechnoClass + 242))(v12, 0); /*0x6eb6ad*/
                (*(void (**)(int, unsigned int, int))(*(unsigned int *)v12 + 1152))(v12, *((unsigned int *)this + 52), 1);
      }
      v1 = this; /*0x6eb6cc*/
    }
    if ( v12->? /*0x6eb714*/
      && v12->?
      && (dword_A8E7AC || !v12->?)
      && (v12->isTeamLeader || (*((int (**)(FootClass *))v12->TechnoClass + 11))(v12) == 2) )
    {
      if ( v19 == 15 /*0x6eb733*/
        && (*((int (**)(FootClass *))v12->TechnoClass + 11))(v12) == 15
        && *((unsigned char *)v12[1].TechnoClass + 3774) )
      {
        (*((void (**)(FootClass *, int, unsigned int))v12->TechnoClass + 122))(v12, 8, 0); /*0x6eb745*/
        (*((void (**)(FootClass *, AbstractClass *))v12->TechnoClass + 242))(v12, v1->focus); /*0x6eb753*/
      }
      else if ( (*((int (**)(FootClass *))v12->TechnoClass + 97))(v12) != 1 /*0x6eb7ad*/
             && (*((int (**)(FootClass *))v12->TechnoClass + 97))(v12) != 7
             && (*((int (**)(FootClass *))v12->TechnoClass + 97))(v12) != 8
             && (*((int (**)(FootClass *))v12->TechnoClass + 97))(v12) != 17
             && ((*((int (**)(FootClass *))v12->TechnoClass + 97))(v12) != 16
              || !(*((uint8_t (**)(FootClass *))v12->TechnoClass + 313))(v12)) )
      {
        (*((void (**)(FootClass *, int))v12->TechnoClass + 157))(v12, 3); /*0x6eb7bd*/
        (*((void (**)(FootClass *, int, unsigned int))v12->TechnoClass + 122))(v12, 1, 0); /*0x6eb7cb*/
        (*((void (**)(FootClass *, unsigned int))v12->TechnoClass + 242))(v12, 0); /*0x6eb7d7*/
        (*((void (**)(FootClass *, unsigned int, int))v12->TechnoClass + 288))(v12, 0, 1); /*0x6eb7e5*/
      }
      target = v12->q2B4; /*0x6eb7eb*/
      if ( target != v1->focus && !target ) /*0x6eb7fa*/
        (*((void (**)(FootClass *, AbstractClass *))v12->TechnoClass + 242))(v12, v1->focus); /*0x6eb801*/
      p_vtable0 = (unsigned int *)(*((int (**)(FootClass *))v12->TechnoClass + 11))(v12); /*0x6eb80b*/
      if ( p_vtable0 != (unsigned int *)2 /*0x6eb82c*/
        || (p_vtable0 = (unsigned int *)(*((int (**)(FootClass *, unsigned int))v12->TechnoClass + 254))(v12, 0),
            !*p_vtable0)
        || (p_vtable0 = (unsigned int *)v12->?, (int)p_vtable0 > 0) )
      {
  LABEL_69:
        v13 = 1; /*0x6eb847*/
      }
    }
    else
    {
  LABEL_67:
      p_vtable0 = &v1->buildingType->AbstractClass; /*0x6eb830*/
      if ( *((unsigned char *)p_vtable0 + 176) ) /*0x6eb833*/
      {
        IDA_LOBYTE(p_vtable0) = v12->inLimbo; /*0x6eb83d*/
        if ( (unsigned char)p_vtable0 ) /*0x6eb845*/
          goto LABEL_69; /*0x6eb845*/
      }
    }
    v12 = v12->nextTeamMember; /*0x6eb849*/
  }
  while ( v12 ); /*0x6eb851*/
  if ( !v13 ) /*0x6eb859*/
    goto LABEL_72; /*0x6eb859*/
  return (char)p_vtable0; /*0x6eb862*/
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
    v2 = *((unsigned int *)this + 336);
  v12 = 0; /*0x6ebadf*/
  if ( firstUnit ) /*0x6ebae6*/
  {
        if ( *((unsigned int *)this + 256) || (v3 = *((unsigned int *)this + 240), (*((unsigned int *)this + 256) = v3) != 0) )
    {
      if ( !TeamClass::ProcessMemberPositions(this) ) /*0x6ebb03*/
      {
        while ( 1 ) /*0x6ebb1a*/
        {
          if ( *(unsigned int *)&firstUnit->isTeamLeader && firstUnit->isTeamLeader && (dword_A8E7AC || !*(unsigned int *)&firstUnit->isTeamLeader) && !firstUnit->isTeamLeader ) /*0x6ebb4a*/
          {
                        v4 = *SessionClass::GetEntry(*(unsigned int **)((char *)this + 160), &v15);
            if ( v4 == 54 || v4 == 53 ) /*0x6ebb6b*/
              v5 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5920); /*0x6ebb80*/
            else
              v5 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5916); /*0x6ebb73*/
                        if ( ObjectClass::DistanceTo((void *)v2, *((unsigned int *)this + 208)) <= v5 )
            {
              firstUnit->isTeamLeader = 1; /*0x6ebc8d*/
            }
            else
            {
              if ( !firstUnit->movementDestination ) /*0x6ebb99*/
              {
                (*((void (**)(FootClass *, int, unsigned int))firstUnit->TechnoClass + 122))(firstUnit, 2, 0); /*0x6ebbab*/
                (*((void (**)(FootClass *, unsigned int))firstUnit->TechnoClass + 242))(firstUnit, 0); /*0x6ebbb7*/
                                (*(void (**)(int, unsigned int, int))(*(unsigned int *)v2 + 1152))(v2, *((unsigned int *)this + 208), 1);
                  firstUnit,
                  this->spawnCell,
                  1);
              }
              v11 = 0; /*0x6ebbcd*/
            }
          }
          if ( (*((int (**)(FootClass *))firstUnit->TechnoClass + 97))(firstUnit) == 16 || firstUnit->? == 16 ) /*0x6ebbeb*/
            v11 = 0; /*0x6ebbed*/
          if ( !firstUnit->? /*0x6ebc5c*/
            || !firstUnit->?
            || !dword_A8E7AC && firstUnit->?
            || !firstUnit->isTeamLeader
            && (*((int (**)(FootClass *))firstUnit->TechnoClass + 11))(firstUnit) != 2
            || (*((int (**)(FootClass *))firstUnit->TechnoClass + 97))(firstUnit) == 16
            || firstUnit->? == 16 )
          {
            goto LABEL_80; /*0x6ebc5c*/
          }
                    v6 = *SessionClass::GetEntry(*(unsigned int **)((char *)this + 160), &v16);
          if ( v6 == 54 || v6 == 53 ) /*0x6ebc79*/
            v13 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5920); /*0x6ebca4*/
          else
            v13 = *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5916); /*0x6ebc87*/
          if ( (*((uint8_t (**)(FootClass *))firstUnit->TechnoClass + 21))(firstUnit) ) /*0x6ebcac*/
            v13 *= 2; /*0x6ebcba*/
          v12 = 1; /*0x6ebcc4*/
                    v14 = ObjectClass::DistanceTo((void *)v2, *((unsigned int *)this + 256));
          if ( v14 <= v13 /*0x6ebcfc*/
            && ((*((int (**)(FootClass *))firstUnit->TechnoClass + 114))(firstUnit) >= 0
             || *ScriptClass::GetNextAction(this->currentScript, v17) == 3) )
          {
            if ( (*((int (**)(FootClass *))firstUnit->TechnoClass + 11))(firstUnit) != 2 ) /*0x6ebd0c*/
              break; /*0x6ebd0c*/
            if ( (*((int (**)(FootClass *))firstUnit->TechnoClass + 116))(firstUnit) <= 0 ) /*0x6ebd1a*/
              break; /*0x6ebd1a*/
            v7 = (unsigned int *)(*((int (**)(FootClass *, unsigned char *))firstUnit->TechnoClass + 18))(firstUnit, v19); /*0x6ebd25*/
                        if ( Coord::To_Cell(&MEMORY[0x87F7E8], v7) == *(void **)((char *)this + 256)
              || *ScriptClass::GetNextAction(this->currentScript, v18) == 3 )
            {
              break; /*0x6ebd48*/
            }
          }
                    if ( !*(unsigned char *)(*((unsigned int *)this + 144) + 173) || !*(unsigned int *)(v2 + 692) )
            goto LABEL_55; /*0x6ebdf1*/
          if ( firstUnit->FootClass_field_bool_68E ) /*0x6ebdf3*/
          {
            (*((void (**)(FootClass *, unsigned int))firstUnit->TechnoClass + 242))(firstUnit, 0); /*0x6ebe07*/
  LABEL_55:
            if ( (*((int (**)(FootClass *))firstUnit->TechnoClass + 97))(firstUnit) != 2 ) /*0x6ebe1a*/
            {
              (*((void (**)(FootClass *, int, unsigned int))firstUnit->TechnoClass + 122))(firstUnit, 2, 0); /*0x6ebe24*/
              if ( (*((uint8_t (**)(FootClass *))firstUnit->TechnoClass + 128))(firstUnit) ) /*0x6ebe2e*/
                (*((void (**)(FootClass *))firstUnit->TechnoClass + 123))(firstUnit); /*0x6ebe3c*/
            }
            if ( !firstUnit->movementDestination ) /*0x6ebe42*/
                            (*(void (**)(int, unsigned int, int))(*(unsigned int *)v2 + 1152))(v2, *((unsigned int *)this + 256), 1);
                firstUnit,
                this->focus,
                1);
            movementDestination = firstUnit->movementDestination; /*0x6ebe5c*/
                        if ( v8 != *((unsigned int *)this + 256)
              && (*(unsigned char *)((*((int (**)(FootClass *))firstUnit->TechnoClass + 33))(firstUnit) + 3434)
               || movementDestination != this->focus
               && (*((int (**)(FootClass *))firstUnit->TechnoClass + 11))(firstUnit) == 2
               && movementDestination == (AbstractClass *)(*((int (**)(FootClass *))firstUnit->TechnoClass
                                                           + 111))(firstUnit)) )
            {
                            (*(void (**)(int, unsigned int, int))(*(unsigned int *)v2 + 1152))(v2, *((unsigned int *)this + 256), 1);
                firstUnit,
                this->focus,
                1);
            }
            v11 = 0; /*0x6ebeac*/
  LABEL_67:
            v9 = (*((int (**)(FootClass *))firstUnit->TechnoClass + 11))(firstUnit) == 2 /*0x6ebecf*/
              && firstUnit->movementDestination == (AbstractClass *)(*((int (**)(FootClass *))firstUnit->TechnoClass
                                                                     + 111))(firstUnit);
            v10 = (firstUnit->? & 1) != 0 /*0x6ebefb*/
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
                            if ( *((unsigned char *)this + 508) )
                                *((unsigned char *)this + 512) = 1;
            }
            return; /*0x6ebf3e*/
          }
        }
        if ( (*((int (**)(FootClass *))firstUnit->TechnoClass + 97))(firstUnit) == 2 ) /*0x6ebd5b*/
        {
          if ( !firstUnit->movementDestination ) /*0x6ebd61*/
            goto LABEL_87; /*0x6ebd61*/
          if ( ObjectClass::DistanceTo((ObjectClass *)firstUnit, (int)firstUnit->movementDestination) <= *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5912) ) /*0x6ebd7f*/
          {
            if ( !firstUnit->locomotor[0] ) /*0x6ebd85*/
              WinAPI::Wrapper(-2147467261); /*0x6ebd94*/
            if ( !(*(uint8_t (__stdcall **)(int))(*(unsigned int *)firstUnit->locomotor[0] + 16))(firstUnit->locomotor[0]) ) /*0x6ebda2*/
            {
  LABEL_87:
              if ( !firstUnit->q2B4 ) /*0x6ebdad*/
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
  char result; // al
  int v3; // esi
  int v4; // eax
  int v5; // ebp
  unsigned int *v6; // edi
  unsigned int *v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // eax
  double v12; // st7
  char v13; // [esp+23h] [ebp-2Dh]
  unsigned int v14[3]; // [esp+24h] [ebp-2Ch] BYREF
  int v15; // [esp+30h] [ebp-20h]
  int v16; // [esp+34h] [ebp-1Ch]
  unsigned char v17[12]; // [esp+38h] [ebp-18h] BYREF
  unsigned char v18[12]; // [esp+44h] [ebp-Ch] BYREF

  result = 0; /*0x6ebf5d*/
    v3 = *((unsigned int *)this + 336);
  v13 = 0; /*0x6ebf69*/
    if ( *((unsigned char *)this + 496) )
  {
    if ( v3 ) /*0x6ebf79*/
    {
      do /*0x6ec10e*/
      {
        if ( v3->isAliveFlag /*0x6ebfc3*/
          && v3->health
          && (g_IKnowWhatImDoing || !v3->inLimbo)
          && (v3->isTeamLeader || (*(int (**)(int))(v3->fallRate)(v3) == 2) )
        {
                    v4 = *SessionClass::GetEntry(*(unsigned int **)((char *)this + 160), v14);
          if ( v4 == 54 || v4 == 53 ) /*0x6ebfe0*/
            v5 = g_RulesClass_Instance[1].PrerequisitePower[1]; /*0x6ebff5*/
          else
            v5 = g_RulesClass_Instance[1].PrerequisitePower[0]; /*0x6ebfe8*/
          if ( (*(int (**)(int))(v3->fallRate)(v3) == 2 ) /*0x6ec005*/
            v5 *= 3; /*0x6ec007*/
                    if ( *(unsigned char *)(*((unsigned int *)this + 144) + 167)
            && !(*(uint8_t (**)(int))(v3->u32_4E0)(v3) )
          {
            v5 /= 3; /*0x6ec034*/
          }
                    v6 = (unsigned int *)(*(int (**)(unsigned int, unsigned char *))(**(unsigned int **)((char *)this + 224) + 72))(
                           this->unknown38,
                           v17);
          v7 = (unsigned int *)(*(int (**)(int, unsigned char *))(v3->q048)(v3, v18); /*0x6ec04e*/
          v8 = *v7 - *v6; /*0x6ec055*/
          v9 = v7[1]; /*0x6ec057*/
          v10 = v7[2]; /*0x6ec05a*/
          v14[2] = v8; /*0x6ec05d*/
          v11 = v10 - v6[2]; /*0x6ec06c*/
          v15 = v9 - v6[1]; /*0x6ec06e*/
          v11 = v11; /*0x6ec072*/
          v12 = Math::Sqrt((double)v8 * (double)v8 + (double)v15 * (double)v15 + (double)v11 * (double)v11); /*0x6ec09b*/
          if ( (int)Math::RoundToInt(v12) <= v5 ) /*0x6ec0aa*/
          {
            if ( (*(int (**)(int))(v3->q184)(v3) != 5 ) /*0x6ec0e8*/
            {
              (*(void (**)(int, int, unsigned int))(v3->q1E8)(v3, 5, 0); /*0x6ec0f2*/
              (*(void (**)(int, unsigned int, int))(v3->q480)(v3, 0, 1); /*0x6ec100*/
            }
          }
          else
          {
            if ( !v3->FootClass_field_5A4 ) /*0x6ec0ac*/
            {
              (*(void (**)(int, int, unsigned int))(v3->q1E8)(v3, 2, 0); /*0x6ec0be*/
                            (*(void (**)(int, unsigned int, int))(*(unsigned int *)v3 + 1152))(v3, *((unsigned int *)this + 224), 1);
            }
            v13 = 1; /*0x6ec0d4*/
          }
        }
        v3 = v3->FootClass_field_5D8; /*0x6ec106*/
      }
      while ( v3 ); /*0x6ec10e*/
      result = v13; /*0x6ec114*/
    }
        *((unsigned char *)this + 496) = result;
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
  int unknown38; // eax
  int v6; // eax
  FootClass *firstUnit; // eax
  int v8; // eax
  int v9; // edx
  int v10; // eax
  int v11; // edx
  int v12; // eax
  TagClass *tag; // eax
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

  AbstractClass::ProcessPower(); /*0x6ec5a9*/
    v3 = (*(int (__stdcall **)(int))(*(unsigned int *)(*((unsigned int *)this + 144) + 4) + 16))(*((unsigned int *)this + 144) + 4);
  Power::TimerProcess(v3); /*0x6ec5bd*/
    v4 = (*(int (__stdcall **)(int))(*(unsigned int *)(*((unsigned int *)this + 176) + 4) + 16))(*((unsigned int *)this + 176) + 4);
  Power::TimerProcess(v4); /*0x6ec5d1*/
    v5 = *((unsigned int *)this + 224);
  if ( unknown38 ) /*0x6ec5db*/
  {
    v6 = (*(int (__stdcall **)(int))(*(unsigned int *)(unknown38 + 4) + 16))(unknown38 + 4); /*0x6ec5e4*/
    Power::TimerProcess(v6); /*0x6ec5ea*/
  }
    Power::TimerProcess(*((unsigned int *)this + 288));
    Power::TimerProcess(*((unsigned int *)this + 304));
    v7 = *((unsigned int *)this + 336);
  if ( firstUnit ) /*0x6ec60a*/
  {
    v8 = (*((int (__stdcall **)(void **))*(unsigned short *)&firstUnit->uniqueId + 4))(&firstUnit->uniqueId); /*0x6ec613*/
    Power::TimerProcess(v8); /*0x6ec619*/
  }
    v9 = *((unsigned int *)this + 352);
    v10 = *((unsigned int *)this + 384);
  if ( v9 != -1 ) /*0x6ec627*/
  {
    if ( *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - v9 >= v10 ) /*0x6ec633*/
      v10 = 0; /*0x6ec639*/
    else
      v10 -= *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - v9; /*0x6ec635*/
  }
  Power::TimerProcess(v10); /*0x6ec63e*/
    v11 = *((unsigned int *)this + 400);
    v12 = *((unsigned int *)this + 432);
  if ( v11 != -1 ) /*0x6ec64c*/
  {
    if ( *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - v11 >= v12 ) /*0x6ec658*/
      v12 = 0; /*0x6ec65e*/
    else
      v12 -= *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - v11; /*0x6ec65a*/
  }
  Power::TimerProcess(v12); /*0x6ec663*/
    v13 = *((unsigned int *)this + 448);
  if ( tag ) /*0x6ec66d*/
  {
    v14 = (*((int (__stdcall **)(void **))*(unsigned short *)&tag->uniqueId + 4))(&tag->uniqueId); /*0x6ec676*/
    tag = (TagClass *)Power::TimerProcess(v14); /*0x6ec67c*/
  }
    LOBYTE(v13) = *((unsigned char *)this + 476);
  Power::FlagProcess((Power *)a2, (int)tag); /*0x6ec687*/
    LOBYTE(v15) = *((unsigned char *)this + 480);
  Power::FlagProcess((Power *)a2, v15); /*0x6ec692*/
    LOBYTE(v16) = *((unsigned char *)this + 484);
  v17 = Power::FlagProcess((Power *)a2, v16); /*0x6ec69d*/
    LOBYTE(v17) = *((unsigned char *)this + 488);
  Power::FlagProcess((Power *)a2, v17); /*0x6ec6a8*/
    LOBYTE(v18) = *((unsigned char *)this + 492);
  Power::FlagProcess((Power *)a2, v18); /*0x6ec6b3*/
    LOBYTE(v19) = *((unsigned char *)this + 496);
  v20 = Power::FlagProcess((Power *)a2, v19); /*0x6ec6be*/
    LOBYTE(v20) = *((unsigned char *)this + 500);
  Power::FlagProcess((Power *)a2, v20); /*0x6ec6c9*/
    LOBYTE(v21) = *((unsigned char *)this + 504);
  Power::FlagProcess((Power *)a2, v21); /*0x6ec6d4*/
    LOBYTE(v22) = *((unsigned char *)this + 508);
  v23 = Power::FlagProcess((Power *)a2, v22); /*0x6ec6df*/
    LOBYTE(v23) = *((unsigned char *)this + 512);
  Power::FlagProcess((Power *)a2, v23); /*0x6ec6ed*/
    LOBYTE(v24) = *((unsigned char *)this + 520);
  Power::FlagProcess((Power *)a2, v24); /*0x6ec6fb*/
    LOBYTE(v25) = *((unsigned char *)this + 524);
  Power::FlagProcess((Power *)a2, v25); /*0x6ec709*/
// 0x4a1de0
  return Checksummer::Add_Buffer((Checksummer *)a2, (uint8_t *)this->countObjects, 24); /*0x6ec71e*/
}
}
// 0x6EC7D0
namespace gamemd {
void TeamClass::MoveTeamToWaypoint(ScriptClass * aP1, TeamClass * aP2)
{
  TeamClass *v3; // ebp
  FootClass *firstUnit; // esi
  int v5; // ebx
  FootClass *v6; // edi
  int v7; // ebp
  void *v8; // eax
  unsigned int *Entry; // eax
  int16_t *Waypoint_Location; // eax
  void *vtable0; // ebx
  void *v12; // eax
  int (**v13)(FootClass *); // eax
  int v14; // eax
  void *v15; // [esp+Ch] [ebp-10h]
  unsigned int v16[2]; // [esp+14h] [ebp-8h] BYREF

  v3 = this; /*0x6ec7d8*/
  v16[0] = this; /*0x6ec7dc*/
  if ( (unsigned char)aP2 ) /*0x6ec7e0*/
  {
        v4 = (FootClass *)*((unsigned int *)this + 84);
    v5 = -1; /*0x6ec7eb*/
    v6 = firstUnit; /*0x6ec7ef*/
    if ( firstUnit ) /*0x6ec7f3*/
    {
      do /*0x6ec853*/
      {
        v7 = *(unsigned int *)((*((int (**)(FootClass *))firstUnit->TechnoClass + 33))(firstUnit) + 1532); /*0x6ec7ff*/
        if ( firstUnit->? /*0x6ec845*/
          && firstUnit->?
          && (dword_A8E7AC || !firstUnit->?)
          && (firstUnit->isTeamLeader
           || (*((int (**)(FootClass *))firstUnit->TechnoClass + 11))(firstUnit) == 2)
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
    aP2 = *ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &aP1, *(unsigned int *)(aP1 + 4)); /*0x6ec87d*/
    v8 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)&aP2); /*0x6ec881*/
    TeamClass::SelectMember((int)v3, (int)v8); /*0x6ec889*/
    if ( !v3->TeamClass_field_7F /*0x6ec8d3*/
      || !(uint8_t)SessionClass::SetField((SessionClass *)v3->currentScript)
      || (Entry = SessionClass::GetEntry((SessionClass *)v3->currentScript, v16), *Entry != 3)
      || (Waypoint_Location = (int16_t *)ScenarioClass::Get_Waypoint_Location((char *)dword_A8B230, &aP1, Entry[1]),
          (uint8_t)LayerClass::IsWithinUsableArea(
                             (LayerClass *)&stru_87F5F0.__pad_58[416],
                             Waypoint_Location,
                             1)) )
    {
      vtable0 = v6->TechnoClass; /*0x6ec8dc*/
      v12 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)&aP2); /*0x6ec8f0*/
      if ( (*((int (**)(FootClass *, void *, int, int, unsigned int, unsigned int))vtable0 + 107))(v6, v12, -1, -1, 0, 0) ) /*0x6ec8f8*/
      {
        v13 = (int (**)(FootClass *))v6->TechnoClass; /*0x6ec916*/
        aP1 = 0; /*0x6ec91e*/
        v14 = v13[33](v6); /*0x6ec928*/
        aP2 = *LayerClass::Pathfinding_Find( /*0x6ec94b*/
                (Type *)&stru_87F5F0.__pad_58[416],
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
    if ( aP2 == *((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 1)) ) /*0x6ec95e*/
    {
      TeamClass::SelectMember((int)v3, 0); /*0x6ec984*/
    }
    else
    {
      v15 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], (int16_t *)&aP2); /*0x6ec97d*/
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
  int result; // eax
  WaveClass *waveEffect; // edi
  void **v4; // esi
  TeamClass **v5; // edx

  result = 0; /*0x5095d6*/
  if ( (int)FootClass_Array.?[-1].Cells + 3 >= 0 ) /*0x5095db*/
  {
    waveEffect = FootClass_Array.?; /*0x5095ea*/
    v4 = &FootClass_Array.?->ObjectClass + (int)FootClass_Array.?[-1].Cells + 3; /*0x5095ed*/
    do /*0x509605*/
    {
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
  int v4; // eax
  int v5; // eax
  int v6; // edi
  int v8; // eax
  int v9; // edx
  int v10; // ecx

  Type = (unsigned int *)BuildingClass::GetType((BuildingClass *)a2); /*0x633eae*/
  v4 = Type[1]; /*0x633eb0*/
    a2 = this;
  v5 = (*(int (**)(unsigned int *, unsigned int **))(v4 + 16))(Type + 1, &a2); /*0x633ebf*/
  if ( v5 == -1 ) /*0x633ec5*/
    return 0; /*0x633ec5*/
  v6 = Type[5]; /*0x633ec7*/
  if ( v6 == 1 ) /*0x633ecd*/
        return this;
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
    return *(unsigned int **)(Type[2] + 4 * v9); /*0x633f0f*/
  return 0; /*0x633ecf*/
}
} // namespace gamemd

// 0x633F20
namespace gamemd {
unsigned int * TeamClass::GetNextScriptAction(unsigned int * a2)
{
  unsigned int *Type; // esi
  int v4; // eax
  int v5; // eax
  int v6; // edi
  int v8; // eax
  int v9; // edx
  int v10; // ecx

  Type = (unsigned int *)BuildingClass::GetType((BuildingClass *)a2); /*0x633f2e*/
  v4 = Type[1]; /*0x633f30*/
    a2 = this;
  v5 = (*(int (**)(unsigned int *, unsigned int **))(v4 + 16))(Type + 1, &a2); /*0x633f3f*/
  if ( v5 == -1 ) /*0x633f45*/
    return 0; /*0x633f45*/
  v6 = Type[5]; /*0x633f47*/
  if ( v6 == 1 ) /*0x633f4d*/
        return this;
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
    return *(unsigned int **)(Type[2] + 4 * v9); /*0x633f90*/
  return 0; /*0x633f4f*/
}
} // namespace gamemd

// 0x6915A0
namespace gamemd {
char TeamClass::SetField11(ScriptClass * aP1)
{
    *((unsigned int *)this + 44) = aP1;
  return 1; /*0x6915a9*/
}
} // namespace gamemd

// 0x6915B0
namespace gamemd {
BOOL TeamClass::Check()
{
  HouseClass *v1; // eax

    v1 = *((unsigned int *)this + 44) + 1;
    *((unsigned int *)this + 44) = v1;
    return v1 < *(unsigned int *)(*((unsigned int *)this + 36) + 160);
}
} // namespace gamemd

// 0x6E9050
namespace gamemd {
char TeamClass::SelectMember(AbstractClass * aP1)
{
  int v4; // eax
  unsigned int *v5; // esi
  int v6; // eax
  int v7; // edx
  bool v8; // bl
  int v9; // eax
  unsigned int *v10; // esi
  bool v12; // [esp+10h] [ebp+4h]

    v4 = *(AbstractClass **)((char *)this + 240);
  if ( aP1 != v4 ) /*0x6e905e*/
  {
        v5 = *(FootClass **)((char *)this + 336);
    if ( v4 ) /*0x6e9065*/
    {
      for ( ; v5; v5 = (unsigned int *)v5[374] ) /*0x6e9069*/
      {
                v6 = *(AbstractClass **)((char *)this + 240);
        v7 = v5[361]; /*0x6e9075*/
        v12 = v5[173] == v6; /*0x6e9082*/
        v8 = v7 == v6; /*0x6e9086*/
        if ( v5[173] == v6 || v7 == v6 ) /*0x6e908f*/
        {
          (*(void (**)(unsigned int *, int, unsigned int))(*v5 + 488))(v5, 5, 0); /*0x6e9099*/
          if ( v8 ) /*0x6e90a1*/
            (*(void (**)(unsigned int *, unsigned int, int))(*v5 + 1152))(v5, 0, 1); /*0x6e90ab*/
          if ( v12 ) /*0x6e90b7*/
            (*(void (**)(unsigned int *, unsigned int))(*v5 + 968))(v5, 0); /*0x6e90bf*/
        }
      }
    }
  }
  v9 = this->uniqueId; /*0x6e90d0*/
    if ( v9 == *(AbstractClass **)((char *)this + 240) || !v9 )
        *((unsigned int *)this + 256) = aP1;
    *((unsigned int *)this + 240) = aP1;
  if ( aP1 ) /*0x6e90e6*/
  {
    v9 = (*(int (**)(int))(*(unsigned int *)aP1 + 44))(aP1); /*0x6e90ed*/
    if ( v9 == 11 ) /*0x6e90f3*/
    {
      IDA_LOBYTE(v9) = Type::CheckAmbiguity(&dword_87F7E8, aP1, 1); /*0x6e90fd*/
      if ( (unsigned char)v9 ) /*0x6e9104*/
      {
                *((unsigned char *)this + 520) = 0;
      }
      else
      {
                v10 = *(FootClass **)((char *)this + 336);
                for ( *((unsigned char *)this + 520) = 1; v10; v10 = (FootClass *)v10->nextTeamMember )
          IDA_LOBYTE(v9) = (*(int (**)(unsigned int *, unsigned int, int))(*v10 + 1152))(v10, 0, 1); /*0x6e911c*/
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
    v6 = aP2; /*0x6ea515*/
    result = TeamClass::ValidateMember((TeamClass *)this, aP1, &aP1, aP2); /*0x6ea522*/
    if ( (unsigned char)result ) /*0x6ea529*/
    {
      v7 = *(int **)(v3 + 1492); /*0x6ea531*/
      if ( v7 ) /*0x6ea539*/
        TeamClass::LiberateMember_Start(v7, v3, 0xFFFFFFFF, 0); /*0x6ea540*/
      if ( !v6 ) /*0x6ea547*/
        ++*(this + aP1 + 34); /*0x6ea54d*/
          v3->__pad_524[357] = *((unsigned int *)this + 336) == 0;
          *(unsigned int *)&v3->__pad_524[180] = *((unsigned int *)this + 336);
          *((unsigned int *)this + 336) = v3;
      *(unsigned int *)(v3 + 1492) = this; /*0x6ea56e*/
          *(unsigned int *)&v3->__pad_1D8[60] = TeamTypeClass::GetGroup(*(unsigned int **)((char *)this + 144));
          if ( *((unsigned int *)this + 448)
        && (!*(unsigned char *)(this->buildingType + 179) || *(int *)((*(int (**)(int))(*(unsigned int *)v3 + 132))(v3) + 1504) > 0) )
      {
              ObjectClass::SetReference(v3, *((unsigned int *)this + 448));
      }
          ++*((unsigned int *)this + 288);
      v8 = (*(int (**)(int))(*(unsigned int *)v3 + 704))(v3); /*0x6ea5c0*/
          v8 = *(AbstractClass **)((char *)this + 208);
      v10 = v8 + *(&this->vtable29); /*0x6ea5cc*/
      result = (int)(&this->vtable23); /*0x6ea5ce*/
          *((unsigned int *)this + 304) += eax12;
      if ( !v9 ) /*0x6ea5d6*/
              TeamClass::FindClosestEnemy(this, (AbstractClass *)((char *)this + 208), (AbstractClass *)((char *)this + 224));
          v10 = *((unsigned int *)this + 144);
      IDA_LOBYTE(result) = 1; /*0x6ea5e7*/
          *((unsigned char *)this + 504) = 1;
          *((unsigned char *)this + 500) = 1;
      *(unsigned char *)(v3 + 1058) = *(unsigned char *)(v11 + 245); /*0x6ea5f5*/
    }
  }
  else
  {
    IDA_LOBYTE(result) = 0; /*0x6ea50f*/
  }
  return result; /*0x6ea50d*/
}
} // namespace gamemd

// 0x6EA610
namespace gamemd {
bool TeamClass::ValidateMember(TechnoClass * aP1, int * a2, char a4)
{
  int result; // eax
  int v6; // edi
  int v7; // eax
  ScriptClass *currentScript; // ecx
  bool v9; // bl
  int v10; // eax
  int v11; // edx
  int v12; // [esp+10h] [ebp-8h] BYREF

  if ( this == *(TeamClass **)(aP1 + 1492) ) /*0x6ea623*/
    goto LABEL_39; /*0x6ea623*/
  if ( !aP1 ) /*0x6ea62b*/
    goto LABEL_39; /*0x6ea62b*/
  if ( !*(unsigned char *)(aP1 + 144) ) /*0x6ea631*/
    goto LABEL_39; /*0x6ea631*/
  result = *(unsigned int *)(aP1 + 108); /*0x6ea63f*/
  if ( !result ) /*0x6ea644*/
    goto LABEL_39; /*0x6ea644*/
  if ( !dword_A8E7AC ) /*0x6ea651*/
  {
    result = *(uint8_t *)(aP1 + 129); /*0x6ea653*/
    if ( (unsigned char)result ) /*0x6ea65b*/
      goto LABEL_39; /*0x6ea65b*/
  }
  result = *(unsigned int *)(aP1 + 540); /*0x6ea661*/
  if ( (HouseClass *)result != this->owner ) /*0x6ea66c*/
    goto LABEL_39; /*0x6ea66c*/
  if ( (uint8_t)Team::AllMembersValid((Team *)aP1) ) /*0x6ea674*/
  {
    result = (*(int (**)(int))(*(unsigned int *)aP1 + 44))(aP1); /*0x6ea681*/
    if ( result != 2 ) /*0x6ea687*/
      goto LABEL_39; /*0x6ea687*/
    result = *(unsigned int *)(aP1 + 1732); /*0x6ea68d*/
    if ( !*(unsigned char *)(result + 3597) ) /*0x6ea693*/
      goto LABEL_39; /*0x6ea693*/
  }
  *a2 = 0; /*0x6ea6a5*/
    if ( *(int *)(*(unsigned int *)(*((unsigned int *)this + 36) + 228) + 156) > 0 )
  {
    do /*0x6ea6f0*/
    {
      v6 = *a2; /*0x6ea6c0*/
            if ( *(unsigned int *)(*(unsigned int *)(*((unsigned int *)this + 36) + 228) + 8 * v5 + 168) == (*(int (**)(TechnoClass *))(*(unsigned int *)aP1->__pad_0 + 136))(aP1) )
        break; /*0x6ea6da*/
      *a2 = v6 + 1; /*0x6ea6df*/
    }
        do
  }
  result = (int)this->buildingType; /*0x6ea6f2*/
    if ( *a2 == *(unsigned int *)(*(unsigned int *)(*((unsigned int *)this + 36) + 228) + 156) && !a4 )
    goto LABEL_39; /*0x6ea70b*/
  if ( (*(int (**)(int))(*(unsigned int *)aP1 + 388))(aP1) != -1 ) /*0x6ea71e*/
  {
    v7 = (*(int (**)(int))(*(unsigned int *)aP1 + 388))(aP1); /*0x6ea724*/
    if ( !IPersistStream::SetField(v7) ) /*0x6ea72c*/
      goto LABEL_39; /*0x6ea72c*/
  }
  if ( !*(unsigned char *)(aP1 + 1057) ) /*0x6ea739*/
  {
    result = (int)this->buildingType; /*0x6ea743*/
      if ( !aP1->__pad_3F7[42] && !*(unsigned char *)(*((unsigned int *)this + 36) + 169) )
      goto LABEL_39; /*0x6ea746*/
  }
    v7 = (unsigned int *)*((unsigned int *)this + 40);
  v9 = 0; /*0x6ea757*/
  if ( currentScript ) /*0x6ea75b*/
    v9 = *SessionClass::GetEntry((SessionClass *)currentScript, &v12) == 8; /*0x6ea76c*/
  result = (*(int (**)(int))(*(unsigned int *)aP1 + 44))(aP1); /*0x6ea772*/
  if ( result == 2 ) /*0x6ea778*/
    v9 = 1; /*0x6ea77a*/
  if ( !*(unsigned char *)(aP1 + 1058) && IDA_BYTE1(this->buildingType[1].TeamTypeClass_field_34) && !v9 ) /*0x6ea795*/
    goto LABEL_39; /*0x6ea795*/
  result = TeamClass::HasAnyMemberFlagged((TeamClass *)aP1); /*0x6ea79d*/
  if ( (unsigned char)result ) /*0x6ea7a4*/
    goto LABEL_39; /*0x6ea7a4*/
  result = FootClass::checkPassability((FootClass *)aP1); /*0x6ea7ac*/
  if ( (unsigned char)result ) /*0x6ea7b3*/
    goto LABEL_39; /*0x6ea7b3*/
  result = *(unsigned int *)(aP1 + 740); /*0x6ea7b9*/
  if ( result ) /*0x6ea7c1*/
    goto LABEL_39; /*0x6ea7c1*/
  v10 = *(unsigned int *)(aP1 + 1492); /*0x6ea7c7*/
  if ( v10 ) /*0x6ea7cf*/
  {
    v11 = *(unsigned int *)(v10 + 36); /*0x6ea7d1*/
    result = (int)this->buildingType; /*0x6ea7d4*/
    if ( *(unsigned int *)(v11 + 180) >= result->u32_B4 ) /*0x6ea7e5*/
      goto LABEL_39; /*0x6ea7e5*/
  }
  if ( ((*(int (**)(int))(*(unsigned int *)aP1 + 44))(aP1) != 2 /*0x6ea83f*/
     || !*(unsigned int *)(*(int (**)(int, unsigned int))(*(unsigned int *)aP1 + 1016))(aP1, 0)
     || (result = *(unsigned int *)(aP1 + 764)) != 0)
    && ((result = *a2,
         this->countObjects[*a2] < *(unsigned int *)(*(unsigned int *)&this->buildingType[1].TeamTypeClass_field_70 + 8 * *a2 + 164))
     || a4)
    && (result = *(unsigned int *)(aP1 + 740)) == 0 )
  {
    result = *(unsigned int *)(aP1 + 688); /*0x6ea841*/
    IDA_LOBYTE(result) = result == 0; /*0x6ea84c*/
  }
  else
  {
  LABEL_39:
    IDA_LOBYTE(result) = 0; /*0x6ea859*/
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
    if ( a2 == *((unsigned int *)this + 112) )
        *((unsigned int *)this + 112) = 0;
    v4 = *((unsigned int *)this + 84);
  if ( (FootClass *)a2 == firstUnit && a3 ) /*0x6eae7c*/
        *((unsigned int *)this + 84) = *(unsigned int *)(v4 + 1496);
    if ( a2 == *((unsigned int *)this + 44) )
        *((unsigned int *)this + 44) = 0;
    if ( a2 == *((unsigned int *)this + 40) )
        *((unsigned int *)this + 40) = 0;
    if ( *((unsigned int *)this + 64) == a2 )
        *((unsigned int *)this + 64) = 0;
    if ( *((unsigned int *)this + 60) == a2 )
        *((unsigned int *)this + 60) = 0;
    if ( *((unsigned int *)this + 52) == a2 )
        *((unsigned int *)this + 52) = 0;
    if ( *((unsigned int *)this + 36) == a2 )
        *((unsigned int *)this + 36) = 0;
    if ( *((unsigned int *)this + 56) == a2 )
        *((unsigned int *)this + 56) = 0;
    if ( *((unsigned int *)this + 68) == a2 )
        *((unsigned int *)this + 68) = 0;
    if ( *((unsigned int *)this + 48) == a2 )
        *((unsigned int *)this + 48) = 0;
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
    for ( i = *((unsigned int *)this + 84); i; i = *(unsigned int *)(i + 1496) )
  {
    result = (*((int (**)(FootClass *, unsigned int))i->TechnoClass + 242))(i, 0); /*0x6ec3b7*/
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
      aP0->AbstractClass = (void*)&TeamClass_vftable; /*0x6ec485*/
      *(void **)&aP0->vtable2 = (void*)&TeamClass_vftable; /*0x6ec48b*/
      *(void **)&aP0->vtable3 = (void*)&TeamClass_vftable; /*0x6ec492*/
      *(void **)&aP0->vtable4 = (void*)&TeamClass_vftable; /*0x6ec499*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&aP0->buildingType); /*0x6ec4a9*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&aP0->currentScript); /*0x6ec4b7*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&aP0->owner); /*0x6ec4c5*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&aP0->tag); /*0x6ec4d3*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&aP0->firstUnit); /*0x6ec4e1*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->unknown38); /*0x6ec4ef*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&aP0->focus); /*0x6ec4fd*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&aP0->spawnCell); /*0x6ec50b*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&aP0->queuedFocus); /*0x6ec519*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&aP0->target); /*0x6ec527*/
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
