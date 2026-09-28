// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/HouseClass_24_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/AnimTypeClass_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/HashTable_flat_e4.hpp"

// 0x43B5E0
namespace gamemd {
void ** HouseClass::PsiWarn(InfantryClass * aP0, int a2, int arg0, void * a3)
{
  void *v6; // edi
  int *v7; // eax
  AnimClass *v8; // eax
  void **v9; // esi
  int v11[3]; // [esp+Ch] [ebp-18h] BYREF
  unsigned char v12[12]; // [esp+18h] [ebp-Ch] BYREF

  v6 = (void *)*((unsigned int *)dword_8B4154 + AnimTypeClass::FindIndex(a3)); /*0x43b5fb*/
  v7 = (int *)(*(int (__thiscall **)(int, unsigned char *))(*(unsigned int *)a2 + 72))(a2, v12); /*0x43b605*/
  v11[0] = *v7; /*0x43b60a*/
  v11[1] = v7[1]; /*0x43b616*/
  v11[2] = v7[2]; /*0x43b61d*/
  v8 = (AnimClass *)RA2_OPNEW(0x1C8u); /*0x43b621*/
  if ( v8 ) /*0x43b62b*/
    v9 = AnimClass::ctor(v8, v6, v11, 0, 1, (void *)0x600, 0, 0); /*0x43b647*/
  else
    v9 = 0; /*0x43b64b*/
  BuildingClass::SetField95((BuildingClass *)v9, arg0); /*0x43b654*/
  Function::Method_424CA0((Function *)v9, aP0); /*0x43b65c*/
  *((unsigned char *)v9 + 413) = 1; /*0x43b661*/
  return v9; /*0x43b66a*/
}
}
// 0x459840
namespace gamemd {
int HouseClass::GetRepairStepAmount()
{
  unsigned int *v1; // edx
  int result; // eax

  v1 = (unsigned int *)this->builtInfantryTypes[126]; /*0x459840*/
  result = v1[937]; /*0x459846*/
  if ( !result ) /*0x45984e*/
  {
    result = v1[938]; /*0x459850*/
    if ( !result ) /*0x459858*/
    {
      result = v1[939]; /*0x45985a*/
      if ( !result ) /*0x459862*/
        return this->builtInfantryTypes[243]; /*0x459864*/
    }
  }
  return result; /*0x45986a*/
}
}
// 0x4ADEE0
namespace gamemd {
void HouseClass::ResetObjectOrders(char a1, int a2)
{
  int v2; // ebx
  int v3; // edi
  int result; // eax
  int v5; // esi

  v2 = g_SidebarState; /*0x4adee1*/
  v3 = 0; /*0x4adee8*/
  if ( g_SidebarState > 0 ) /*0x4adeec*/
  {
    while ( 1 ) /*0x4adef8*/
    {
      result = (int)g_TechnoClass_Count; /*0x4adef8*/
      v5 = *((unsigned int *)g_TechnoClass_Count + v3); /*0x4adefd*/
      if ( !v5 ) /*0x4adf02*/
        goto LABEL_16; /*0x4adf02*/
      IDA_LOBYTE(result) = *(unsigned char *)(v5 + 129); /*0x4adf08*/
      if ( (unsigned char)result ) /*0x4adf10*/
        goto LABEL_16; /*0x4adf10*/
      result = (*(int (__thiscall **)(unsigned int))(*(unsigned int *)v5 + 44))(*((unsigned int *)g_TechnoClass_Count + v3)); /*0x4adf1a*/
      if ( result == 6 ) /*0x4adf20*/
      {
        IDA_LOBYTE(result) = a1; /*0x4adf22*/
        if ( a1 ) /*0x4adf28*/
          goto LABEL_16; /*0x4adf28*/
      }
      result = House::IsHumanPlayer(*(void **)(v5 + 540)); /*0x4adf34*/
      if ( (unsigned char)result ) /*0x4adf3b*/
        break; /*0x4adf3b*/
      if ( (*(int (__thiscall **)(int))(*(unsigned int *)v5 + 44))(v5) == 6 /*0x4adfa5*/
        && IDA_HIBYTE(g_RulesClass_Instance[1].?[2])
        && (uint8_t)HouseClass::IsAlliedWith(*(void **)(v5 + 540), HouseClass_Player) )
      {
        result = (*(int (__thiscall **)(int, unsigned int, int, unsigned int, unsigned int))(*(unsigned int *)v5 + 1164))(v5, 0, a2, 0, 0); /*0x4adfb9*/
      }
      else
      {
        result = (*(int (__thiscall **)(int))(*(unsigned int *)v5 + 132))(v5); /*0x4adfc5*/
        if ( *(unsigned char *)(result + 3281) ) /*0x4adfcb*/
          goto LABEL_15; /*0x4adfd3*/
      }
  LABEL_16:
      if ( ++v3 >= v2 ) /*0x4adfe2*/
        return result; /*0x4adfe2*/
    }
    IDA_LOBYTE(result) = *(unsigned char *)(v5 + 1051); /*0x4adf3d*/
    if ( !(unsigned char)result ) /*0x4adf45*/
      goto LABEL_16; /*0x4adf45*/
    (*(void (__thiscall **)(int, unsigned int, unsigned int, unsigned int, unsigned int))(*(unsigned int *)v5 + 1164))(v5, 0, 0, 0, 0); /*0x4adf57*/
    result = (*(int (__thiscall **)(int))(*(unsigned int *)v5 + 132))(v5); /*0x4adf61*/
    if ( !*(unsigned char *)(result + 3281) ) /*0x4adf67*/
      goto LABEL_16; /*0x4adf6f*/
  LABEL_15:
    result = (*(int (__thiscall **)(int))(*(unsigned int *)v5 + 1048))(v5); /*0x4adfd5*/
    goto LABEL_16; /*0x4adfd9*/
  }
  return result; /*0x4adfea*/
}
}
// 0x4ADFF0
namespace gamemd {
int HouseClass::RevealShroudForAllies(char a1, int a2)
{
  int result; // eax
  int i; // ebp
  void **v4; // esi

  result = dword_8A03A0; /*0x4adff0*/
  for ( i = 0; i < dword_8A03A0; ++i ) /*0x4adffa*/
  {
    v4 = *(void ***)(dword_8A0394 + 4 * i); /*0x4ae010*/
    if ( v4 /*0x4ae02b*/
      && ((unsigned char)v4[5] & 1) != 0
      && ((*((int (__thiscall **)(unsigned int))*v4 + 11))(*(unsigned int *)(dword_8A0394 + 4 * i)) != 6 || !a1) )
    {
      if ( (uint8_t)House::IsHumanPlayer(v4[135]) ) /*0x4ae033*/
      {
        if ( *((unsigned char *)v4 + 1051) ) /*0x4ae03c*/
          (*((void (__thiscall **)(void **, unsigned int, int))*v4 + 72))(v4, 0, a2); /*0x4ae04d*/
      }
      else if ( (*((int (__thiscall **)(void **))*v4 + 11))(v4) == 6 /*0x4ae07d*/
             && IDA_HIBYTE(g_RulesClass_Instance[1].?[2])
             && (uint8_t)HouseClass::IsAlliedWith(v4[135], HouseClass_Player) )
      {
        (*((void (__thiscall **)(void **, int, unsigned int))*v4 + 72))(v4, a2, 0); /*0x4ae08d*/
      }
    }
    result = dword_8A03A0; /*0x4ae093*/
  }
  return result; /*0x4ae0a4*/
}
}
// 0x4F54A0
namespace gamemd {
void HouseClass::Construct(CCINIClass * aP1)
{
// (v3 export truncated pseudocode — commented out; live version via get_context)
// int __thiscall HouseClass::Construct(int this, CCINIClass *aP1)
// {
//   IUnknown *v3; // edx
//   IUnknown *v4; // ecx
//   IUnknown *v5; // ecx
//   unsigned int *v6; // esi
//   int v7; // eax
//   IUnknown *v8; // ecx
//   IUnknown *v9; // edx
//   IUnknown *v10; // edx
//   int v11; // eax
//   int v12; // eax
//   int v13; // eax
//   int v14; // eax
//   int v15; // eax
//   int v16; // eax
//   int v17; // edi
//   int v18; // eax
//   int v19; // ecx
//   int v20; // edi
//   int v21; // ecx
//   int v22; // eax
//   int v23; // edx
//   int v24; // esi
//   int v25; // eax
//   int v26; // ecx
//   int v27; // eax
//   int v28; // edx
//   int v29; // edi
//   int v30; // eax
//   int v31; // ecx
//   int v32; // edi
//   int v33; // ecx
//   int v34; // eax
//   int v35; // edx
//   int v36; // ecx
//   int v37; // esi
//   int v38; // eax
//   int v39; // ecx
//   int v40; // eax
//   int v41; // edx
//   int v42; // ecx
//   IUnknown *v43; // eax
//   int eax75; // eax
//   SuperClass *v44; // esi
//   int v46; // ecx
//   int v47; // eax
//   int v48; // eax
//   int v49; // edx
//   CCINIClass *v50; // esi
//   int v51; //... [33044 chars total]
// end truncated pseudocode
}
}

// 0x4F9A50
namespace gamemd {
int HouseClass::IsAlliedWith(IUnknown * aP1)
{
  int result; // eax
  int relatedTagsCount; // ecx
  HouseClass *other; // [esp+4h] [ebp+4h]

  result = (int)aP1; /*0x4f9a50*/
  if ( !other ) /*0x4f9a58*/
    goto LABEL_8; /*0x4f9a58*/
  if ( other == aP1 ) /*0x4f9a5c*/
  {
    IDA_LOBYTE(result) = 1; /*0x4f9a5e*/
    return result; /*0x4f9a60*/
  }
  relatedTagsCount = (int)(other->relatedTagsCount);
  if ( relatedTagsCount == result->relatedTagsCount ) /*0x4f9a6b*/
  {
    IDA_LOBYTE(result) = 1; /*0x4f9a6d*/
    return result; /*0x4f9a6f*/
  }
  if ( relatedTagsCount == -1 ) /*0x4f9a75*/
  LABEL_8:
    IDA_LOBYTE(result) = 0; /*0x4f9a8a*/
  else
    IDA_LOBYTE(result) = ((1 << relatedTagsCount) & result->HouseClass_field_timer_D) != 0; /*0x4f9a84*/
  return result; /*0x4f9a60*/
}
}
// 0x4FBE40
namespace gamemd {
int HouseClass::IsCellOccupied(IUnknown * aP1, char a3)
{
  char v4; // bl
  int result; // eax
  unsigned int *v7; // eax
  unsigned int *v8; // eax
  int16_t v11[2]; // [esp+Ch] [ebp-10h] BYREF
  unsigned char v10[12]; // [esp+10h] [ebp-Ch] BYREF
  int v11; // [esp+20h] [ebp+4h]

  v4 = 0; /*0x4fbe49*/
  if ( !aP1 ) /*0x4fbe50*/
  {
    IDA_LOBYTE(result) = 0; /*0x4fbf50*/
    return result; /*0x4fbf50*/
  }
  if ( (*(int (__thiscall **)(int))(aP1->vtable7)(aP1) == 1 ) /*0x4fbe60*/
  {
    v4 = HouseClass::ClearPrimaryFactory((unsigned int *)aP1); /*0x4fbe69*/
    if ( !v4 || *(&this->q8607) != aP1 ) /*0x4fbe79*/
      goto LABEL_10; /*0x4fbe79*/
  }
  else
  {
    v7 = (unsigned int *)(*(int (__thiscall **)(int, unsigned char *))(aP1->buildingsCount)(aP1, v10); /*0x4fbe8a*/
    IDA_LOWORD(v11) = *v7 / 256; /*0x4fbe9d*/
    IDA_HIWORD(v11) = v7[1] / 256; /*0x4fbeb5*/
    *(unsigned int *)v11 = v11; /*0x4fbebe*/
    result = LayerClass::CoordinatesLegal(&MapClass_Instance, v11); /*0x4fbec8*/
    if ( !(unsigned char)result ) /*0x4fbecf*/
      goto LABEL_10; /*0x4fbecf*/
    v8 = CellCoord::To_CellObj(&MapClass_Instance, v11); /*0x4fbedb*/
    v4 = HouseClass::checkAutoProduction(v8); /*0x4fbee7*/
    if ( !v4 || *(&this->q8607) != aP1 ) /*0x4fbef3*/
      goto LABEL_10; /*0x4fbef3*/
  }
  *(&this->q8607) = 0; /*0x4fbef5*/
  LABEL_10:
  if ( a3 ) /*0x4fbf05*/
  {
    if ( *(&this->q8608) != g_ControlGroupState ) /*0x4fbf1b*/
    {
      *((unsigned int *)CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&this->u32_10C46) + 17) = -1; /*0x4fbf35*/
      result = g_ControlGroupState; /*0x4fbf3c*/
      *(&this->q8608) = g_ControlGroupState; /*0x4fbf41*/
    }
  }
  IDA_LOBYTE(result) = v4; /*0x4fbf44*/
  return result; /*0x4fbf43*/
}
}
// 0x4FC790
namespace gamemd {
int HouseClass::DestroyAllBuildings()
{
  HouseClass *PriorityTarget; // eax
  int v2; // ebx
  int v3; // edi
  int v5; // esi
  TriggerClass *v6; // ecx
  int v8; // [esp+Ch] [ebp-4h] BYREF

  IDA_LOBYTE(PriorityTarget) = stru_A8EB00.gapE4[164]; /*0x4fc791*/
  v2 = 0; /*0x4fc799*/
  v3 = 0; /*0x4fc79b*/
  while ( v2 < *(int *)&stru_A8EB00.gapE4[164] ) /*0x4fc7a1*/
  {
    v5 = *(unsigned int *)(*(unsigned int *)&stru_A8EB00.gapE4[152] + 4 * v2); /*0x4fc7a9*/
    PriorityTarget = (HouseClass *)ObjectClass::GetPriorityTarget((ObjectClass *)v5); /*0x4fc7ae*/
    if ( PriorityTarget != this /*0x4fc7cf*/
      || (PriorityTarget = (HouseClass *)(*(int (__thiscall **)(int))(v5->fallRate)(v5),
          PriorityTarget != (HouseClass *)6)
      || (IDA_LOBYTE(PriorityTarget) = v5->inLimbo, (unsigned char)PriorityTarget)
      || v5 == v3 )
    {
      ++v2; /*0x4fc810*/
    }
    else
    {
      v8 = v5->health; /*0x4fc7d4*/
      v6 = *(TriggerClass **)(v5 + 632); /*0x4fc7d8*/
      if ( v6 ) /*0x4fc7e0*/
        TriggerClass::UnlinkTags(v6); /*0x4fc7e2*/
      IDA_LOBYTE(PriorityTarget) = (*(int (__thiscall **)(int, int *, unsigned int, unsigned int, unsigned int, int, int, unsigned int))(*(unsigned int *)v5 + 364))( /*0x4fc806*/
                                 v5,
                                 &v8,
                                 0,
                                 *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
                                 0,
                                 1,
                                 1,
                                 0);
      v3 = v5; /*0x4fc80c*/
    }
  }
  return (char)PriorityTarget; /*0x4fc81a*/
}
}
// 0x4FC820
namespace gamemd {
int HouseClass::DestroyAllNonBuildingsNonNaval()
{
  int PriorityTarget; // eax
  int v2; // ebx
  int v3; // edi
  int v5; // esi
  TriggerClass *v6; // ecx
  int v8; // [esp+Ch] [ebp-4h] BYREF

  IDA_LOBYTE(PriorityTarget) = stru_A8EB00.gapE4[164]; /*0x4fc821*/
  v2 = 0; /*0x4fc829*/
  v3 = 0; /*0x4fc82b*/
  while ( v2 < *(int *)&stru_A8EB00.gapE4[164] ) /*0x4fc831*/
  {
    v5 = *(unsigned int *)(*(unsigned int *)&stru_A8EB00.gapE4[152] + 4 * v2); /*0x4fc83d*/
    PriorityTarget = ObjectClass::GetPriorityTarget((ObjectClass *)v5); /*0x4fc842*/
    if ( (HouseClass *)PriorityTarget != this /*0x4fc877*/
      || (PriorityTarget = (*(int (__thiscall **)(int))(v5->fallRate)(v5), PriorityTarget == 6)
      || (IDA_LOBYTE(PriorityTarget) = v5->inLimbo, (unsigned char)PriorityTarget)
      || (PriorityTarget = (*(int (__thiscall **)(int))(v5->hasParachute)(v5), *(unsigned char *)(PriorityTarget + 3278))
      || v5 == v3 )
    {
      ++v2; /*0x4fc8b8*/
    }
    else
    {
      v8 = v5->health; /*0x4fc87c*/
      v6 = *(TriggerClass **)(v5 + 632); /*0x4fc880*/
      if ( v6 ) /*0x4fc888*/
        TriggerClass::UnlinkTags(v6); /*0x4fc88a*/
      IDA_LOBYTE(PriorityTarget) = (*(int (__thiscall **)(int, int *, unsigned int, unsigned int, unsigned int, int, int, unsigned int))(*(unsigned int *)v5 + 364))( /*0x4fc8ae*/
                                 v5,
                                 &v8,
                                 0,
                                 *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
                                 0,
                                 1,
                                 1,
                                 0);
      v3 = v5; /*0x4fc8b4*/
    }
  }
  return PriorityTarget; /*0x4fc8c6*/
}
}
// 0x4FC8D0
namespace gamemd {
int HouseClass::DestroyAllNonBuildingsNaval()
{
  int PriorityTarget; // eax
  int v2; // ebx
  int v3; // edi
  int v5; // esi
  TriggerClass *v6; // ecx
  int v8; // [esp+Ch] [ebp-4h] BYREF

  IDA_LOBYTE(PriorityTarget) = stru_A8EB00.gapE4[164]; /*0x4fc8d1*/
  v2 = 0; /*0x4fc8d9*/
  v3 = 0; /*0x4fc8db*/
  while ( v2 < *(int *)&stru_A8EB00.gapE4[164] ) /*0x4fc8e1*/
  {
    v5 = *(unsigned int *)(*(unsigned int *)&stru_A8EB00.gapE4[152] + 4 * v2); /*0x4fc8ed*/
    PriorityTarget = ObjectClass::GetPriorityTarget((ObjectClass *)v5); /*0x4fc8f2*/
    if ( (HouseClass *)PriorityTarget != this /*0x4fc927*/
      || (PriorityTarget = (*(int (__thiscall **)(int))(v5->fallRate)(v5), PriorityTarget == 6)
      || (IDA_LOBYTE(PriorityTarget) = v5->inLimbo, (unsigned char)PriorityTarget)
      || (PriorityTarget = (*(int (__thiscall **)(int))(v5->hasParachute)(v5), !*(unsigned char *)(PriorityTarget + 3278))
      || v5 == v3 )
    {
      ++v2; /*0x4fc968*/
    }
    else
    {
      v8 = v5->health; /*0x4fc92c*/
      v6 = *(TriggerClass **)(v5 + 632); /*0x4fc930*/
      if ( v6 ) /*0x4fc938*/
        TriggerClass::UnlinkTags(v6); /*0x4fc93a*/
      IDA_LOBYTE(PriorityTarget) = (*(int (__thiscall **)(int, int *, unsigned int, unsigned int, unsigned int, int, int, unsigned int))(*(unsigned int *)v5 + 364))( /*0x4fc95e*/
                                 v5,
                                 &v8,
                                 0,
                                 *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
                                 0,
                                 1,
                                 1,
                                 0);
      v3 = v5; /*0x4fc964*/
    }
  }
  return PriorityTarget; /*0x4fc976*/
}
}
// 0x501540
namespace gamemd {
int HouseClass::CanAlly(HouseClass * aP1)
{
  int v3; // ecx
  int v5; // edi
  int v6; // ebp
  HouseClass *v7; // edx
  int v8; // ebx
  int v9; // eax
  int v10; // eax

  if ( aP1 ) /*0x50154a*/
  {
    if ( aP1 == this ) /*0x50154e*/
      return 0; /*0x50154e*/
    v3 = aP1->relatedTagsCount; /*0x501550*/
    if ( v3 == this->relatedTagsCount || v3 != -1 && (this->HouseClass_field_timer_D & (1 << v3)) != 0 ) /*0x501573*/
      return 0; /*0x501576*/
  }
  if ( *(unsigned int *)(aP1->relatedTagsCapacity + 188) == HouseTypeClass::Find(g_INI_Key_Civilian) && g_GameMode_Current[0] ) /*0x501598*/
    return 0; /*0x50159b*/
  if ( g_IKnowWhatImDoing ) /*0x5015a8*/
    return 1; /*0x5015ab*/
  if ( this->defeated ) /*0x5015b1*/
    return 0; /*0x5015bc*/
  v5 = 0; /*0x5015c8*/
  v6 = 0; /*0x5015ca*/
  if ( HouseClass_Count > 0 ) /*0x5015ce*/
  {
    v7 = HouseClass_Array; /*0x5015d0*/
    v8 = HouseClass_Count; /*0x5015d7*/
    do /*0x50162c*/
    {
      v9 = *(unsigned int *)v7->vtable0; /*0x5015d9*/
      if ( !*(unsigned char *)(*(unsigned int *)v7->vtable0 + 501) && !*(unsigned char *)(*(unsigned int *)(v9 + 52) + 422) ) /*0x5015e8*/
      {
        ++v5; /*0x5015f1*/
        if ( v9 ) /*0x5015f4*/
        {
          if ( v9 == this /*0x501625*/
            || (v10 = *(unsigned int *)(v9 + 48), v10 == this->relatedTagsCount)
            || v10 != -1 && ((1 << v10) & this->HouseClass_field_timer_D) != 0 )
          {
            ++v6; /*0x501627*/
          }
        }
      }
      v7 = (HouseClass *)((char *)v7 + 4); /*0x501628*/
      --v8; /*0x50162b*/
    }
    while ( v8 ); /*0x50162c*/
  }
  return v5 != v6 + 1; /*0x501575*/
}
}
// 0x501640
namespace gamemd {
int HouseClass::CanDetect()
{
  int result; // eax
  char v2; // bl
  int nextArrayIndex; // ecx
  int i; // ebp
  unsigned int v5; // esi
  int j; // edi
  char v7; // cl

  result = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x501640*/
  v2 = *(unsigned char *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 5301); /*0x50164d*/
  if ( dword_A8B23C /*0x501662*/
    && (result = (*((int (__thiscall **)(ObjectClass *))dword_A8B23C->vtable0 + 1))(dword_A8B23C), (unsigned char)result)
    || v2 )
  {
    result = (int)unk_A8B230; /*0x501668*/
    if ( !IDA_LOBYTE(unk_A8B230[127].vtable1) ) /*0x50166d*/
    {
      nextArrayIndex = stru_A80220.nextArrayIndex; /*0x50167b*/
      for ( i = 0; i < nextArrayIndex; ++i ) /*0x501685*/
      {
        v5 = *((unsigned int *)stru_A80220.vtable3 + i); /*0x501695*/
        if ( v5 ) /*0x50169a*/
        {
          IDA_LOBYTE(result) = *(unsigned char *)(v5 + 501); /*0x5016a0*/
          if ( !(unsigned char)result ) /*0x5016a8*/
          {
            result = *(unsigned int *)&unk_A8B238; /*0x5016ae*/
            IDA_LOBYTE(result) = *(unsigned char *)(v5 + 492); /*0x5016b5*/
            if ( !*(unsigned int *)&unk_A8B238 ) /*0x5016bb*/
              IDA_LOBYTE(result) = (unsigned char)result || *(unsigned char *)(v5 + 493); /*0x5016cf*/
            if ( !(unsigned char)result ) /*0x5016d3*/
            {
              *(unsigned char *)(v5 + 586) = 1; /*0x5016d5*/
              nextArrayIndex = stru_A80220.nextArrayIndex; /*0x5016db*/
              for ( j = 0; j < stru_A80220.nextArrayIndex; ++j ) /*0x5016e5*/
              {
                result = *((unsigned int *)stru_A80220.vtable3 + j); /*0x5016ec*/
                if ( result && !result->MaximumBaseDefenseValue ) /*0x5016f3*/
                {
                  v7 = result->DeactivateSound; /*0x501705*/
                  if ( !*(unsigned int *)&unk_A8B238 ) /*0x50170b*/
                    v7 = v7 || *(unsigned char *)(result + 493); /*0x50171f*/
                  if ( v7 ) /*0x501728*/
                    IDA_LOBYTE(result) = HouseClass::SetAlliance(v5, (HouseClass *)result, 0); /*0x50172a*/
                  else
                    result = HouseClass::HandleAlliance((int *)v5, result, 0); /*0x501731*/
                }
                nextArrayIndex = stru_A80220.nextArrayIndex; /*0x501736*/
              }
            }
          }
        }
      }
    }
  }
  return result; /*0x50174c*/
}
}
// 0x503040
namespace gamemd {
AbstractClass * * HouseClass::SaveLoad_Prefix(int a1, LPSTREAM pStm)
{
  int i; // edi
  int j; // edi
  LPSTREAM v9; // edi
  HRESULT result; // eax
  int k; // ebp
  int m; // ebp
  int n; // ebp
  int ii; // ebp
  int jj; // ebp
  int kk; // ebp
  int mm; // ebp
  int nn; // ebp
  int i1; // ebp
  int i2; // ebp
  int i3; // ebp
  int i4; // ebp
  int i5; // ebp
  int i6; // ebp
  int i7; // ebp
  int i8; // ebp

  int v2 = a1;
  (*(void (__thiscall **)(int))(*(unsigned int *)(a1 + 80) + 12))(a1 + 80);
  (*(void (__thiscall **)(int))(*(unsigned int *)(v2 + 104) + 12))(v2 + 104);
  (*(void (__thiscall **)(int))(*(unsigned int *)(v2 + 128) + 12))(v2 + 128);
  (*(void (__thiscall **)(int))(*(unsigned int *)(v2 + 152) + 12))(v2 + 152);
  (*(void (__thiscall **)(int))(*(unsigned int *)(v2 + 176) + 12))(v2 + 176);
  (*(void (__thiscall **)(int))(*(unsigned int *)(v2 + 200) + 12))(v2 + 200);
  (*(void (__thiscall **)(int))(*(unsigned int *)(v2 + 224) + 12))(v2 + 224);
  (*(void (__thiscall **)(int))(*(unsigned int *)(v2 + 248) + 12))(v2 + 248);
  (*(void (__thiscall **)(int))(*(unsigned int *)(v2 + 272) + 12))(v2 + 272);
  (*(void (__thiscall **)(int))(*(unsigned int *)(v2 + 296) + 12))(v2 + 296);
  (*(void (__thiscall **)(int))(*(unsigned int *)(v2 + 320) + 12))(v2 + 320);
  for ( i = *(unsigned int *)(v2 + 380) - 1; i >= 0; --i )
    RA2_OPDEL(*(void **)(*(unsigned int *)(v2 + 368) + 4 * i));
  (*(void (__thiscall **)(int))(*(unsigned int *)(v2 + 364) + 12))(v2 + 364);
  for ( j = 0; j < *(unsigned int *)(v2 + 90228); *(unsigned int *)(*(unsigned int *)(v2 + 90216) + 4 * j - 4) = 0 )
  {
    int v131 = *(unsigned int *)(*(unsigned int *)(v2 + 90216) + 4 * j);
    if ( (*(int (__stdcall **)(int))(*(unsigned int *)v131 + 8))(v131) )
    {
      do
        int v132 = *(unsigned int *)(*(unsigned int *)(v2 + 90216) + 4 * j);
      while ( (*(int (__stdcall **)(int))(*(unsigned int *)v132 + 8))(v132) );
    }
    ++j;
  }
  (*(void (__thiscall **)(int))(*(unsigned int *)(v2 + 90212) + 12))(v2 + 90212);
  while ( *(unsigned int *)(v2 + 612) )
  {
    int v5 = **(unsigned int **)(v2 + 600);
    if ( v5 )
      (*(void (__thiscall **)(int, int))(*(unsigned int *)v5 + 32))(v5, 1);
    int v6 = *(unsigned int *)(v2 + 612);
    if ( v6 > 0 )
    {
      int v7 = v6 - 1;
      int v8 = 0;
      for ( *(unsigned int *)(v2 + 612) = v7;
            v8 < *(unsigned int *)(v2 + 612);
            *(unsigned int *)(*(unsigned int *)(v2 + 600) + 4 * v8 - 4) = *(unsigned int *)(*(unsigned int *)(v2 + 600) + 4 * v8) )
      {
        ++v8;
      }
    }
  }
  v9 = pStm;
  result = AbstractClass::SaveLoad_Prefix_0((unsigned int *)v2, (int)pStm);
  if ( result >= 0 )
  {
    if ( v2 )
      HouseClass::Constructor(v2, (int)&a1);
    (**(void (__stdcall ***)(int, LPSTREAM))(v2 + 22272))(v2 + 22272, v9);
    CounterClass::Load((unsigned int *)(v2 + 21760), (int)v9);
    CounterClass::Load((unsigned int *)(v2 + 21780), (int)v9);
    CounterClass::Load((unsigned int *)(v2 + 21800), (int)v9);
    CounterClass::Load((unsigned int *)(v2 + 21820), (int)v9);
    CounterClass::Load((unsigned int *)(v2 + 21840), (int)v9);
    CounterClass::Load((unsigned int *)(v2 + 21860), (int)v9);
    CounterClass::Load((unsigned int *)(v2 + 21880), (int)v9);
    CounterClass::Load((unsigned int *)(v2 + 21900), (int)v9);
    CounterClass::Load((unsigned int *)(v2 + 21920), (int)v9);
    CounterClass::Load((unsigned int *)(v2 + 21940), (int)v9);
    CounterClass::Load((unsigned int *)(v2 + 21960), (int)v9);
    CounterClass::Load((unsigned int *)(v2 + 21980), (int)v9);
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v2 + 52));
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v2 + 21424));
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v2 + 21428));
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v2 + 21420));
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v2 + 21432));
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v2 + 21436));
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v2 + 21440));
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v2 + 21444));
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v2 + 21448));
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v2 + 21452));
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v2 + 21728));
    int * v11 = (int *)(v2 + 528);
    int v12 = 12;
    do
    {
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v11++);
      --v12;
    }
    while ( v12 );
    int * v13 = (int *)(v2 + 22128);
    int v14 = 3;
    do
    {
      HouseClass::RegisterForSwizzleTracking(v13);
      v13 += 11;
      --v14;
    }
    while ( v14 );
    int v15 = *(unsigned int *)v9->__pad_0;
    int v133 = 0;
    result = (*(int (__stdcall **)(LPSTREAM, int *, int, unsigned int))(v15 + 12))(v9, &v133, 4, 0);
    if ( result >= 0 )
    {
      bool v16 = v133-- == 0;
      if ( v16 )
      {
LABEL_31:
        int v22 = *(unsigned int *)v9->__pad_0;
        v133 = 0;
        result = (*(int (__stdcall **)(LPSTREAM, int *, int, unsigned int))(v22 + 12))(v9, &v133, 4, 0);
        if ( result >= 0 )
        {
          v16 = v133-- == 0;
          if ( v16 )
          {
LABEL_41:
            int v28 = *(unsigned int *)v9->__pad_0;
            v133 = 0;
            result = (*(int (__stdcall **)(LPSTREAM, int *, int, unsigned int))(v28 + 12))(v9, &v133, 4, 0);
            if ( result >= 0 )
            {
  int v135; // [esp+2C0h] [ebp-8h]
  int v134; // [esp+2BCh] [ebp-Ch] BYREF
              v16 = v133-- == 0;
              if ( v16 )
              {
LABEL_51:
                for ( k = 0; k < *(unsigned int *)(v2 + 22036); ++k )
                  ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(unsigned int *)(v2 + 22024) + 8 * k));
                int v35 = *(unsigned int *)v9->__pad_0;
                v133 = 0;
                result = (*(int (__stdcall **)(LPSTREAM, int *, int, unsigned int))(v35 + 12))(v9, &v133, 4, 0);
                if ( result >= 0 )
                {
                  v16 = v133-- == 0;
                  if ( v16 )
                  {
LABEL_63:
                    int v41 = *(unsigned int *)(v2 + 22060);
                    for ( m = 0; m < v41; ++m )
                    {
                      ObjectPtr::RegisterForTracking(
                        (int)&SwizzleManagerClass_Instance,
                        (int *)(*(unsigned int *)(v2 + 22048) + 8 * v41 - 8));
                      v41 = *(unsigned int *)(v2 + 22060);
                    }
                    int v43 = *(unsigned int *)v9->__pad_0;
                    v133 = 0;
                    result = (*(int (__stdcall **)(LPSTREAM, int *, int, unsigned int))(v43 + 12))(v9, &v133, 4, 0);
                    if ( result >= 0 )
                    {
                      v16 = v133-- == 0;
                      if ( v16 )
                      {
LABEL_75:
                        int v49 = *(unsigned int *)v9->__pad_0;
                        v133 = 0;
                        result = (*(int (__stdcall **)(LPSTREAM, int *, int, unsigned int))(v49 + 12))(v9, &v133, 4, 0);
                        if ( result >= 0 )
                        {
                          v16 = v133-- == 0;
                          if ( v16 )
                          {
LABEL_85:
                            int v55 = *(unsigned int *)v9->__pad_0;
                            v133 = 0;
                            result = (*(int (__stdcall **)(LPSTREAM, int *, int, unsigned int))(v55 + 12))(v9, &v133, 4, 0);
                            if ( result >= 0 )
                            {
                              v16 = v133-- == 0;
                              if ( v16 )
                              {
LABEL_95:
                                int v61 = *(unsigned int *)v9->__pad_0;
                                v133 = 0;
                                result = (*(int (__stdcall **)(LPSTREAM, int *, int, unsigned int))(v61 + 12))(
                                           v9,
                                           &v133,
                                           4,
                                           0);
                                if ( result >= 0 )
                                {
                                  v16 = v133-- == 0;
                                  if ( v16 )
                                  {
LABEL_105:
                                    int v67 = *(unsigned int *)v9->__pad_0;
                                    v133 = 0;
                                    result = (*(int (__stdcall **)(LPSTREAM, int *, int, unsigned int))(v67 + 12))(
                                               v9,
                                               &v133,
                                               4,
                                               0);
                                    if ( result >= 0 )
                                    {
                                      v16 = v133-- == 0;
                                      if ( v16 )
                                      {
LABEL_115:
                                        int v73 = *(unsigned int *)v9->__pad_0;
                                        v133 = 0;
                                        result = (*(int (__stdcall **)(LPSTREAM, int *, int, unsigned int))(v73 + 12))(
                                                   v9,
                                                   &v133,
                                                   4,
                                                   0);
                                        if ( result >= 0 )
                                        {
                                          v16 = v133-- == 0;
                                          if ( v16 )
                                          {
LABEL_125:
                                            int v79 = *(unsigned int *)v9->__pad_0;
                                            v133 = 0;
                                            result = (*(int (__stdcall **)(LPSTREAM, int *, int, unsigned int))(v79 + 12))(
                                                       v9,
                                                       &v133,
                                                       4,
                                                       0);
                                            if ( result >= 0 )
                                            {
                                              v16 = v133-- == 0;
                                              if ( v16 )
                                              {
LABEL_135:
                                                int v85 = *(unsigned int *)v9->__pad_0;
                                                v133 = 0;
                                                result = (*(int (__stdcall **)(LPSTREAM, int *, int, unsigned int))(v85 + 12))(
                                                           v9,
                                                           &v133,
                                                           4,
                                                           0);
                                                if ( result >= 0 )
                                                {
                                                  v16 = v133-- == 0;
                                                  if ( v16 )
                                                  {
LABEL_145:
                                                    int v91 = *(unsigned int *)v9->__pad_0;
                                                    v133 = 0;
                                                    result = (*(int (__stdcall **)(LPSTREAM, int *, int, unsigned int))(v91 + 12))(
                                                               v9,
                                                               &v133,
                                                               4,
                                                               0);
                                                    if ( result >= 0 )
                                                    {
                                                      v16 = v133-- == 0;
                                                      if ( v16 )
                                                      {
LABEL_155:
                                                        int v97 = *(unsigned int *)v9->__pad_0;
                                                        v133 = 0;
                                                        result = (*(int (__stdcall **)(LPSTREAM, int *, int, unsigned int))(v97 + 12))(
                                                                   v9,
                                                                   &v133,
                                                                   4,
                                                                   0);
                                                        if ( result >= 0 )
                                                        {
                                                          v16 = v133-- == 0;
                                                          if ( v16 )
                                                          {
LABEL_165:
                                                            int v103 = *(unsigned int *)v9->__pad_0;
                                                            v133 = 0;
                                                            result = (*(int (__stdcall **)(LPSTREAM, int *, int, unsigned int))(v103 + 12))(
                                                                       v9,
                                                                       &v133,
                                                                       4,
                                                                       0);
                                                            if ( result >= 0 )
                                                            {
                                                              v16 = v133-- == 0;
                                                              if ( v16 )
                                                              {
LABEL_175:
                                                                int v109 = *(unsigned int *)v9->__pad_0;
                                                                v133 = 0;
                                                                result = (*(int (__stdcall **)(LPSTREAM, int *, int, unsigned int))(v109 + 12))(
                                                                           v9,
                                                                           &v133,
                                                                           4,
                                                                           0);
                                                                if ( result >= 0 )
                                                                {
                                                                  v16 = v133-- == 0;
                                                                  if ( v16 )
                                                                  {
LABEL_187:
                                                                    for ( n = 0; n < *(unsigned int *)(v2 + 612); ++n )
                                                                      ObjectPtr::RegisterForTracking(
                                                                        (int)&SwizzleManagerClass_Instance,
                                                                        (int *)(*(unsigned int *)(v2 + 600) + 4 * n));
                                                                    for ( ii = 0; ii < *(unsigned int *)(v2 + 72); ++ii )
                                                                      ObjectPtr::RegisterForTracking(
                                                                        (int)&SwizzleManagerClass_Instance,
                                                                        (int *)(*(unsigned int *)(v2 + 60) + 4 * ii));
                                                                    for ( jj = 0; jj < *(unsigned int *)(v2 + 96); ++jj )
                                                                      ObjectPtr::RegisterForTracking(
                                                                        (int)&SwizzleManagerClass_Instance,
                                                                        (int *)(*(unsigned int *)(v2 + 84) + 4 * jj));
                                                                    for ( kk = 0; kk < *(unsigned int *)(v2 + 120); ++kk )
                                                                      ObjectPtr::RegisterForTracking(
                                                                        (int)&SwizzleManagerClass_Instance,
                                                                        (int *)(*(unsigned int *)(v2 + 108) + 4 * kk));
                                                                    for ( mm = 0; mm < *(unsigned int *)(v2 + 144); ++mm )
                                                                      ObjectPtr::RegisterForTracking(
                                                                        (int)&SwizzleManagerClass_Instance,
                                                                        (int *)(*(unsigned int *)(v2 + 132) + 4 * mm));
                                                                    for ( nn = 0; nn < *(unsigned int *)(v2 + 168); ++nn )
                                                                      ObjectPtr::RegisterForTracking(
                                                                        (int)&SwizzleManagerClass_Instance,
                                                                        (int *)(*(unsigned int *)(v2 + 156) + 4 * nn));
                                                                    for ( i1 = 0; i1 < *(unsigned int *)(v2 + 192); ++i1 )
                                                                      ObjectPtr::RegisterForTracking(
                                                                        (int)&SwizzleManagerClass_Instance,
                                                                        (int *)(*(unsigned int *)(v2 + 180) + 4 * i1));
                                                                    for ( i2 = 0; i2 < *(unsigned int *)(v2 + 216); ++i2 )
                                                                      ObjectPtr::RegisterForTracking(
                                                                        (int)&SwizzleManagerClass_Instance,
                                                                        (int *)(*(unsigned int *)(v2 + 204) + 4 * i2));
                                                                    for ( i3 = 0; i3 < *(unsigned int *)(v2 + 240); ++i3 )
                                                                      ObjectPtr::RegisterForTracking(
                                                                        (int)&SwizzleManagerClass_Instance,
                                                                        (int *)(*(unsigned int *)(v2 + 228) + 4 * i3));
                                                                    for ( i4 = 0; i4 < *(unsigned int *)(v2 + 264); ++i4 )
                                                                      ObjectPtr::RegisterForTracking(
                                                                        (int)&SwizzleManagerClass_Instance,
                                                                        (int *)(*(unsigned int *)(v2 + 252) + 4 * i4));
                                                                    for ( i5 = 0; i5 < *(unsigned int *)(v2 + 288); ++i5 )
                                                                      ObjectPtr::RegisterForTracking(
                                                                        (int)&SwizzleManagerClass_Instance,
                                                                        (int *)(*(unsigned int *)(v2 + 276) + 4 * i5));
                                                                    for ( i6 = 0; i6 < *(unsigned int *)(v2 + 312); ++i6 )
                                                                      ObjectPtr::RegisterForTracking(
                                                                        (int)&SwizzleManagerClass_Instance,
                                                                        (int *)(*(unsigned int *)(v2 + 300) + 4 * i6));
                                                                    for ( i7 = 0; i7 < *(unsigned int *)(v2 + 336); ++i7 )
                                                                      ObjectPtr::RegisterForTracking(
                                                                        (int)&SwizzleManagerClass_Instance,
                                                                        (int *)(*(unsigned int *)(v2 + 324) + 4 * i7));
                                                                    for ( i8 = 0; i8 < *(unsigned int *)(v2 + 380); ++i8 )
                                                                      ObjectPtr::RegisterForTracking(
                                                                        (int)&SwizzleManagerClass_Instance,
                                                                        *(int **)(*(unsigned int *)(v2 + 368) + 4 * i8));
                                                                    int v130 = *(unsigned int *)v9->__pad_0;
                                                                    int v136 = 0;
                                                                    result = (*(int (__stdcall **)(LPSTREAM, int *, int, unsigned int))(v130 + 12))(
                                                                               v9,
                                                                               &v136,
                                                                               4,
                                                                               0);
                                                                    if ( result >= 0 )
                                                                    {
                                                                      if ( v136 )
                                                                        return OleLoadFromStream(
                                                                                 v9,
                                                                                 &iidInterface,
                                                                                 (LPVOID *)(v2 + 22496));
                                                                    }
                                                                  }
                                                                  else
                                                                  {
                                                                    while ( 1 )
                                                                    {
                                                                      unsigned short * v110 = operator new(8u);
                                                                      int v111 = *(unsigned int *)v9->__pad_0;
                                                                      v134 = 0;
                                                                      result = (*(int (__stdcall **)(LPSTREAM, int *, int, unsigned int))(v111 + 12))(
                                                                                 v9,
                                                                                 &v134,
                                                                                 4,
                                                                                 0);
                                                                      if ( result < 0 )
                                                                        break;
                                                                      result = (*(int (__stdcall **)(LPSTREAM, int *, int, unsigned int))(*(unsigned int *)v9->__pad_0 + 12))(
                                                                                 v9,
                                                                                 &a1,
                                                                                 2,
                                                                                 0);
                                                                      if ( result < 0 )
                                                                        break;
                                                                      result = (*(int (__stdcall **)(LPSTREAM, LPSTREAM *, int, unsigned int))(*(unsigned int *)v9->__pad_0 + 12))(
                                                                                 v9,
                                                                                 &pStm,
                                                                                 2,
                                                                                 0);
                                                                      if ( result < 0 )
                                                                        break;
                                                                      *(unsigned int *)v110 = v134;
                                                                      v110[2] = a1;
                                                                      v110[3] = (unsigned short)pStm;
                                                                      int v112 = *(unsigned int *)(v2 + 372);
                                                                      if ( *(unsigned int *)(v2 + 380) < v112
                                                                        || (*(unsigned char *)(v2 + 377) || !v112)
  int v113; // eax
                                                                        && (v113 = *(unsigned int *)(v2 + 384), v113 > 0)
                                                                        && (*(uint8_t (__thiscall **)(int, int, unsigned int))(*(unsigned int *)(v2 + 364) + 8))(
                                                                             v2 + 364,
                                                                             v113 + v112,
                                                                             0) )
                                                                      {
                                                                        int v114 = *(unsigned int *)(v2 + 380);
                                                                        int v115 = *(unsigned int *)(v2 + 368);
                                                                        *(unsigned int *)(v2 + 380) = v114 + 1;
                                                                        *(unsigned int *)(v115 + 4 * v114) = v110;
                                                                      }
                                                                      v16 = v133-- == 0;
                                                                      if ( v16 )
                                                                        goto LABEL_187;
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                              else
                                                              {
                                                                while ( 1 )
                                                                {
                                                                  int v104 = *(unsigned int *)v9->__pad_0;
                                                                  a1 = 0;
                                                                  result = (*(int (__stdcall **)(LPSTREAM, int *, int, unsigned int))(v104 + 12))(
                                                                             v9,
                                                                             &a1,
                                                                             4,
                                                                             0);
                                                                  if ( result < 0 )
                                                                    break;
                                                                  int v105 = *(unsigned int *)(v2 + 328);
                                                                  if ( *(unsigned int *)(v2 + 336) < v105
                                                                    || (*(unsigned char *)(v2 + 333) || !v105)
  int v106; // eax
                                                                    && (v106 = *(unsigned int *)(v2 + 340), v106 > 0)
                                                                    && (*(uint8_t (__thiscall **)(int, int, unsigned int))(*(unsigned int *)(v2 + 320) + 8))(
                                                                         v2 + 320,
                                                                         v106 + v105,
                                                                         0) )
                                                                  {
                                                                    int v107 = *(unsigned int *)(v2 + 336);
                                                                    int v108 = *(unsigned int *)(v2 + 324);
                                                                    *(unsigned int *)(v2 + 336) = v107 + 1;
                                                                    *(unsigned int *)(v108 + 4 * v107) = a1;
                                                                  }
                                                                  v16 = v133-- == 0;
                                                                  if ( v16 )
                                                                    goto LABEL_175;
                                                                }
                                                              }
                                                            }
                                                          }
                                                          else
                                                          {
                                                            while ( 1 )
                                                            {
                                                              int v98 = *(unsigned int *)v9->__pad_0;
                                                              a1 = 0;
                                                              result = (*(int (__stdcall **)(LPSTREAM, int *, int, unsigned int))(v98 + 12))(
                                                                         v9,
                                                                         &a1,
                                                                         4,
                                                                         0);
                                                              if ( result < 0 )
                                                                break;
                                                              int v99 = *(unsigned int *)(v2 + 304);
                                                              if ( *(unsigned int *)(v2 + 312) < v99
                                                                || (*(unsigned char *)(v2 + 309) || !v99)
  int v100; // eax
                                                                && (v100 = *(unsigned int *)(v2 + 316), v100 > 0)
                                                                && (*(uint8_t (__thiscall **)(int, int, unsigned int))(*(unsigned int *)(v2 + 296) + 8))(
                                                                     v2 + 296,
                                                                     v100 + v99,
                                                                     0) )
                                                              {
                                                                int v101 = *(unsigned int *)(v2 + 312);
                                                                int v102 = *(unsigned int *)(v2 + 300);
                                                                *(unsigned int *)(v2 + 312) = v101 + 1;
                                                                *(unsigned int *)(v102 + 4 * v101) = a1;
                                                              }
                                                              v16 = v133-- == 0;
                                                              if ( v16 )
                                                                goto LABEL_165;
                                                            }
                                                          }
                                                        }
                                                      }
                                                      else
                                                      {
                                                        while ( 1 )
                                                        {
                                                          int v92 = *(unsigned int *)v9->__pad_0;
                                                          a1 = 0;
                                                          result = (*(int (__stdcall **)(LPSTREAM, int *, int, unsigned int))(v92 + 12))(
                                                                     v9,
                                                                     &a1,
                                                                     4,
                                                                     0);
                                                          if ( result < 0 )
                                                            break;
                                                          int v93 = *(unsigned int *)(v2 + 280);
                                                          if ( *(unsigned int *)(v2 + 288) < v93
                                                            || (*(unsigned char *)(v2 + 285) || !v93)
  int v94; // eax
                                                            && (v94 = *(unsigned int *)(v2 + 292), v94 > 0)
                                                            && (*(uint8_t (__thiscall **)(int, int, unsigned int))(*(unsigned int *)(v2 + 272) + 8))(
                                                                 v2 + 272,
                                                                 v94 + v93,
                                                                 0) )
                                                          {
                                                            int v95 = *(unsigned int *)(v2 + 288);
                                                            int v96 = *(unsigned int *)(v2 + 276);
                                                            *(unsigned int *)(v2 + 288) = v95 + 1;
                                                            *(unsigned int *)(v96 + 4 * v95) = a1;
                                                          }
                                                          v16 = v133-- == 0;
                                                          if ( v16 )
                                                            goto LABEL_155;
                                                        }
                                                      }
                                                    }
                                                  }
                                                  else
                                                  {
                                                    while ( 1 )
                                                    {
                                                      int v86 = *(unsigned int *)v9->__pad_0;
                                                      a1 = 0;
                                                      result = (*(int (__stdcall **)(LPSTREAM, int *, int, unsigned int))(v86 + 12))(
                                                                 v9,
                                                                 &a1,
                                                                 4,
                                                                 0);
                                                      if ( result < 0 )
                                                        break;
                                                      int v87 = *(unsigned int *)(v2 + 256);
                                                      if ( *(unsigned int *)(v2 + 264) < v87
                                                        || (*(unsigned char *)(v2 + 261) || !v87)
  int v88; // eax
                                                        && (v88 = *(unsigned int *)(v2 + 268), v88 > 0)
                                                        && (*(uint8_t (__thiscall **)(int, int, unsigned int))(*(unsigned int *)(v2 + 248) + 8))(
                                                             v2 + 248,
                                                             v88 + v87,
                                                             0) )
                                                      {
                                                        int v89 = *(unsigned int *)(v2 + 264);
                                                        int v90 = *(unsigned int *)(v2 + 252);
                                                        *(unsigned int *)(v2 + 264) = v89 + 1;
                                                        *(unsigned int *)(v90 + 4 * v89) = a1;
                                                      }
                                                      v16 = v133-- == 0;
                                                      if ( v16 )
                                                        goto LABEL_145;
                                                    }
                                                  }
                                                }
                                              }
                                              else
                                              {
                                                while ( 1 )
                                                {
                                                  int v80 = *(unsigned int *)v9->__pad_0;
                                                  a1 = 0;
                                                  result = (*(int (__stdcall **)(LPSTREAM, int *, int, unsigned int))(v80 + 12))(
                                                             v9,
                                                             &a1,
                                                             4,
                                                             0);
                                                  if ( result < 0 )
                                                    break;
                                                  int v81 = *(unsigned int *)(v2 + 232);
                                                  if ( *(unsigned int *)(v2 + 240) < v81
                                                    || (*(unsigned char *)(v2 + 237) || !v81)
  int v82; // eax
                                                    && (v82 = *(unsigned int *)(v2 + 244), v82 > 0)
                                                    && (*(uint8_t (__thiscall **)(int, int, unsigned int))(*(unsigned int *)(v2 + 224) + 8))(
                                                         v2 + 224,
                                                         v82 + v81,
                                                         0) )
                                                  {
                                                    int v83 = *(unsigned int *)(v2 + 240);
                                                    int v84 = *(unsigned int *)(v2 + 228);
                                                    *(unsigned int *)(v2 + 240) = v83 + 1;
                                                    *(unsigned int *)(v84 + 4 * v83) = a1;
                                                  }
                                                  v16 = v133-- == 0;
                                                  if ( v16 )
                                                    goto LABEL_135;
                                                }
                                              }
                                            }
                                          }
                                          else
                                          {
                                            while ( 1 )
                                            {
                                              int v74 = *(unsigned int *)v9->__pad_0;
                                              a1 = 0;
                                              result = (*(int (__stdcall **)(LPSTREAM, int *, int, unsigned int))(v74 + 12))(
                                                         v9,
                                                         &a1,
                                                         4,
                                                         0);
                                              if ( result < 0 )
                                                break;
                                              int v75 = *(unsigned int *)(v2 + 208);
                                              if ( *(unsigned int *)(v2 + 216) < v75
                                                || (*(unsigned char *)(v2 + 213) || !v75)
  int v76; // eax
                                                && (v76 = *(unsigned int *)(v2 + 220), v76 > 0)
                                                && (*(uint8_t (__thiscall **)(int, int, unsigned int))(*(unsigned int *)(v2 + 200) + 8))(
                                                     v2 + 200,
                                                     v76 + v75,
                                                     0) )
                                              {
                                                int v77 = *(unsigned int *)(v2 + 216);
                                                int v78 = *(unsigned int *)(v2 + 204);
                                                *(unsigned int *)(v2 + 216) = v77 + 1;
                                                *(unsigned int *)(v78 + 4 * v77) = a1;
                                              }
                                              v16 = v133-- == 0;
                                              if ( v16 )
                                                goto LABEL_125;
                                            }
                                          }
                                        }
                                      }
                                      else
                                      {
                                        while ( 1 )
                                        {
                                          int v68 = *(unsigned int *)v9->__pad_0;
                                          a1 = 0;
                                          result = (*(int (__stdcall **)(LPSTREAM, int *, int, unsigned int))(v68 + 12))(
                                                     v9,
                                                     &a1,
                                                     4,
                                                     0);
                                          if ( result < 0 )
                                            break;
                                          int v69 = *(unsigned int *)(v2 + 184);
                                          if ( *(unsigned int *)(v2 + 192) < v69
                                            || (*(unsigned char *)(v2 + 189) || !v69)
  int v70; // eax
                                            && (v70 = *(unsigned int *)(v2 + 196), v70 > 0)
                                            && (*(uint8_t (__thiscall **)(int, int, unsigned int))(*(unsigned int *)(v2 + 176) + 8))(
                                                 v2 + 176,
                                                 v70 + v69,
                                                 0) )
                                          {
                                            int v71 = *(unsigned int *)(v2 + 192);
                                            int v72 = *(unsigned int *)(v2 + 180);
                                            *(unsigned int *)(v2 + 192) = v71 + 1;
                                            *(unsigned int *)(v72 + 4 * v71) = a1;
                                          }
                                          v16 = v133-- == 0;
                                          if ( v16 )
                                            goto LABEL_115;
                                        }
                                      }
                                    }
                                  }
                                  else
                                  {
                                    while ( 1 )
                                    {
                                      int v62 = *(unsigned int *)v9->__pad_0;
                                      a1 = 0;
                                      result = (*(int (__stdcall **)(LPSTREAM, int *, int, unsigned int))(v62 + 12))(
                                                 v9,
                                                 &a1,
                                                 4,
                                                 0);
                                      if ( result < 0 )
                                        break;
                                      int v63 = *(unsigned int *)(v2 + 160);
                                      if ( *(unsigned int *)(v2 + 168) < v63
                                        || (*(unsigned char *)(v2 + 165) || !v63)
  int v64; // eax
                                        && (v64 = *(unsigned int *)(v2 + 172), v64 > 0)
                                        && (*(uint8_t (__thiscall **)(int, int, unsigned int))(*(unsigned int *)(v2 + 152)
                                                                                               + 8))(
                                             v2 + 152,
                                             v64 + v63,
                                             0) )
                                      {
                                        int v65 = *(unsigned int *)(v2 + 168);
                                        int v66 = *(unsigned int *)(v2 + 156);
                                        *(unsigned int *)(v2 + 168) = v65 + 1;
                                        *(unsigned int *)(v66 + 4 * v65) = a1;
                                      }
                                      v16 = v133-- == 0;
                                      if ( v16 )
                                        goto LABEL_105;
                                    }
                                  }
                                }
                              }
                              else
                              {
                                while ( 1 )
                                {
                                  int v56 = *(unsigned int *)v9->__pad_0;
                                  a1 = 0;
                                  result = (*(int (__stdcall **)(LPSTREAM, int *, int, unsigned int))(v56 + 12))(
                                             v9,
                                             &a1,
                                             4,
                                             0);
                                  if ( result < 0 )
                                    break;
                                  int v57 = *(unsigned int *)(v2 + 136);
                                  if ( *(unsigned int *)(v2 + 144) < v57
                                    || (*(unsigned char *)(v2 + 141) || !v57)
  int v58; // eax
                                    && (v58 = *(unsigned int *)(v2 + 148), v58 > 0)
                                    && (*(uint8_t (__thiscall **)(int, int, unsigned int))(*(unsigned int *)(v2 + 128) + 8))(
                                         v2 + 128,
                                         v58 + v57,
                                         0) )
                                  {
                                    int v59 = *(unsigned int *)(v2 + 144);
                                    int v60 = *(unsigned int *)(v2 + 132);
                                    *(unsigned int *)(v2 + 144) = v59 + 1;
                                    *(unsigned int *)(v60 + 4 * v59) = a1;
                                  }
                                  v16 = v133-- == 0;
                                  if ( v16 )
                                    goto LABEL_95;
                                }
                              }
                            }
                          }
                          else
                          {
                            while ( 1 )
                            {
                              int v50 = *(unsigned int *)v9->__pad_0;
                              a1 = 0;
                              result = (*(int (__stdcall **)(LPSTREAM, int *, int, unsigned int))(v50 + 12))(v9, &a1, 4, 0);
                              if ( result < 0 )
                                break;
                              int v51 = *(unsigned int *)(v2 + 112);
                              if ( *(unsigned int *)(v2 + 120) < v51
                                || (*(unsigned char *)(v2 + 117) || !v51)
  int v52; // eax
                                && (v52 = *(unsigned int *)(v2 + 124), v52 > 0)
                                && (*(uint8_t (__thiscall **)(int, int, unsigned int))(*(unsigned int *)(v2 + 104) + 8))(
                                     v2 + 104,
                                     v52 + v51,
                                     0) )
                              {
                                int v53 = *(unsigned int *)(v2 + 120);
                                int v54 = *(unsigned int *)(v2 + 108);
                                *(unsigned int *)(v2 + 120) = v53 + 1;
                                *(unsigned int *)(v54 + 4 * v53) = a1;
                              }
                              v16 = v133-- == 0;
                              if ( v16 )
                                goto LABEL_85;
                            }
                          }
                        }
                      }
                      else
                      {
                        while ( 1 )
                        {
                          int v44 = *(unsigned int *)v9->__pad_0;
                          a1 = 0;
                          result = (*(int (__stdcall **)(LPSTREAM, int *, int, unsigned int))(v44 + 12))(v9, &a1, 4, 0);
                          if ( result < 0 )
                            break;
                          int v45 = *(unsigned int *)(v2 + 88);
                          if ( *(unsigned int *)(v2 + 96) < v45
                            || (*(unsigned char *)(v2 + 93) || !v45)
  int v46; // eax
                            && (v46 = *(unsigned int *)(v2 + 100), v46 > 0)
                            && (*(uint8_t (__thiscall **)(int, int, unsigned int))(*(unsigned int *)(v2 + 80) + 8))(
                                 v2 + 80,
                                 v46 + v45,
                                 0) )
                          {
                            int v47 = *(unsigned int *)(v2 + 96);
                            int v48 = *(unsigned int *)(v2 + 84);
                            *(unsigned int *)(v2 + 96) = v47 + 1;
                            *(unsigned int *)(v48 + 4 * v47) = a1;
                          }
                          v16 = v133-- == 0;
                          if ( v16 )
                            goto LABEL_75;
                        }
                      }
                    }
                  }
                  else
                  {
                    while ( 1 )
                    {
                      int v36 = *(unsigned int *)v9->__pad_0;
                      v134 = 0;
                      IDA_LOBYTE(v135) = 0;
                      result = (*(int (__stdcall **)(LPSTREAM, int *, int, unsigned int))(v36 + 12))(v9, &v134, 8, 0);
                      if ( result < 0 )
                        break;
                      int v37 = *(unsigned int *)(v2 + 22052);
                      if ( *(unsigned int *)(v2 + 22060) < v37
                        || (*(unsigned char *)(v2 + 22057) || !v37)
  int v38; // eax
                        && (v38 = *(unsigned int *)(v2 + 22064), v38 > 0)
                        && (*(uint8_t (__thiscall **)(int, int, unsigned int))(*(unsigned int *)(v2 + 22044) + 8))(
                             v2 + 22044,
                             v37 + v38,
                             0) )
                      {
                        int v39 = *(unsigned int *)(v2 + 22060);
                        int v40 = *(unsigned int *)(v2 + 22048);
                        *(unsigned int *)(v2 + 22060) = v39 + 1;
                        *(unsigned int *)(v40 + 8 * v39) = v134;
                        *(unsigned int *)(v40 + 8 * v39 + 4) = v135;
                      }
                      v16 = v133-- == 0;
                      if ( v16 )
                        goto LABEL_63;
                    }
                  }
                }
              }
              else
              {
                while ( 1 )
                {
                  int v29 = *(unsigned int *)v9->__pad_0;
                  v134 = 0;
                  v135 = 0;
                  result = (*(int (__stdcall **)(LPSTREAM, int *, int, unsigned int))(v29 + 12))(v9, &v134, 8, 0);
                  if ( result < 0 )
                    break;
                  int v30 = *(unsigned int *)(v2 + 22028);
                  if ( *(unsigned int *)(v2 + 22036) < v30
                    || (*(unsigned char *)(v2 + 22033) || !v30)
  int v31; // eax
                    && (v31 = *(unsigned int *)(v2 + 22040), v31 > 0)
                    && (*(uint8_t (__thiscall **)(int, int, unsigned int))(*(unsigned int *)(v2 + 22020) + 8))(
                         v2 + 22020,
                         v30 + v31,
                         0) )
                  {
                    int v32 = *(unsigned int *)(v2 + 22036);
                    int v33 = *(unsigned int *)(v2 + 22024);
                    *(unsigned int *)(v2 + 22036) = v32 + 1;
                    *(unsigned int *)(v33 + 8 * v32) = v134;
                    *(unsigned int *)(v33 + 8 * v32 + 4) = v135;
                  }
                  v16 = v133-- == 0;
                  if ( v16 )
                    goto LABEL_51;
                }
              }
            }
          }
          else
          {
            while ( 1 )
            {
              int v23 = *(unsigned int *)v9->__pad_0;
              a1 = 0;
              result = (*(int (__stdcall **)(LPSTREAM, int *, int, unsigned int))(v23 + 12))(v9, &a1, 4, 0);
              if ( result < 0 )
                break;
              int v24 = *(unsigned int *)(v2 + 64);
              if ( *(unsigned int *)(v2 + 72) < v24
                || (*(unsigned char *)(v2 + 69) || !v24)
  int v25; // eax
                && (v25 = *(unsigned int *)(v2 + 76), v25 > 0)
                && (*(uint8_t (__thiscall **)(int, int, unsigned int))(*(unsigned int *)(v2 + 56) + 8))(
                     v2 + 56,
                     v24 + v25,
                     0) )
              {
                int v26 = *(unsigned int *)(v2 + 72);
                int v27 = *(unsigned int *)(v2 + 60);
                *(unsigned int *)(v2 + 72) = v26 + 1;
                *(unsigned int *)(v27 + 4 * v26) = a1;
              }
              v16 = v133-- == 0;
              if ( v16 )
                goto LABEL_41;
            }
          }
        }
      }
      else
      {
        while ( 1 )
        {
          int v17 = *(unsigned int *)v9->__pad_0;
          a1 = 0;
          result = (*(int (__stdcall **)(LPSTREAM, int *, int, unsigned int))(v17 + 12))(v9, &a1, 4, 0);
          if ( result < 0 )
            break;
          int v18 = *(unsigned int *)(v2 + 604);
          if ( *(unsigned int *)(v2 + 612) < v18
            || (*(unsigned char *)(v2 + 609) || !v18)
  int v19; // eax
            && (v19 = *(unsigned int *)(v2 + 616), v19 > 0)
            && (*(uint8_t (__thiscall **)(int, int, unsigned int))(*(unsigned int *)(v2 + 596) + 8))(v2 + 596, v18 + v19, 0) )
          {
            int v20 = *(unsigned int *)(v2 + 612);
            int v21 = *(unsigned int *)(v2 + 600);
            *(unsigned int *)(v2 + 612) = v20 + 1;
            *(unsigned int *)(v21 + 4 * v20) = a1;
          }
          v16 = v133-- == 0;
          if ( v16 )
            goto LABEL_31;
        }
      }
    }
  }
  return result;
}

} // namespace gamemd

// 0x505360
namespace gamemd {
int HouseClass::PrerequisitesForTechnoTypeAreListed(int a1, VectorClass_flat * aP1, TechnoTypeClass * aP2)
{
  int result; // eax
  int v4; // ecx
  int v5; // edx
  int *HarvesterUnit; // esi
  int v7; // ebx
  int v8; // eax
  int v9; // ecx
  unsigned int *v10; // edx
  int v11; // [esp+10h] [ebp-4h]

  result = a1; /*0x505361*/
  v11 = 0; /*0x505371*/
  if ( *(int *)(a1 + 1608) > 0 ) /*0x505379*/
  {
    do /*0x505395*/
    {
      result = *(unsigned int *)(*(unsigned int *)(a1 + 1596) + 4 * v11); /*0x505395*/
      if ( result < 0 ) /*0x50539a*/
      {
        HarvesterUnit = 0; /*0x5053cb*/
        switch ( result ) /*0x5053d2*/
        {
          case -6: /*0x5053d2*/
            HarvesterUnit = (int *)&g_RulesClass_Instance->? + 1; /*0x505423*/
            break; /*0x505423*/
          case -5: /*0x5053d2*/
            HarvesterUnit = &g_RulesClass_Instance->?[3]; /*0x505415*/
            break; /*0x50541b*/
          case -4: /*0x5053d2*/
            HarvesterUnit = &g_RulesClass_Instance->InfantryBaseMult[2]; /*0x505407*/
            break; /*0x50540d*/
          case -3: /*0x5053d2*/
            HarvesterUnit = g_RulesClass_Instance->?; /*0x5053fa*/
            break; /*0x505400*/
          case -2: /*0x5053d2*/
            HarvesterUnit = &g_RulesClass_Instance->?[2]; /*0x5053ec*/
            break; /*0x5053f2*/
          case -1: /*0x5053d2*/
            HarvesterUnit = (int *)&g_RulesClass_Instance->CHRONOSK_SHP; /*0x5053de*/
            break; /*0x5053e4*/
          default:
            break;
        }
        result = HarvesterUnit[4]; /*0x505429*/
        v7 = 0; /*0x50542c*/
        if ( result <= 0 ) /*0x505430*/
        {
  LABEL_24:
          IDA_LOBYTE(result) = 0; /*0x505475*/
          return result; /*0x50547c*/
        }
        while ( 1 ) /*0x505437*/
        {
          v8 = (*(int (__thiscall **)(int *, int))(*HarvesterUnit + 24))(HarvesterUnit, v7); /*0x505437*/
          v9 = 0; /*0x50543a*/
          if ( aP2 > 0 ) /*0x50543e*/
            break; /*0x50543e*/
  LABEL_20:
          result = HarvesterUnit[4]; /*0x50544f*/
          if ( ++v7 >= result ) /*0x505455*/
            goto LABEL_24; /*0x505455*/
        }
        v10 = aP1->vtable2; /*0x505440*/
        while ( *v10 != v8 ) /*0x505445*/
        {
          ++v9; /*0x505447*/
          ++v10; /*0x505448*/
          if ( v9 >= aP2 ) /*0x50544d*/
            goto LABEL_20; /*0x50544d*/
        }
      }
      else
      {
        v4 = 0; /*0x50539c*/
        if ( aP2 <= 0 ) /*0x5053a0*/
          goto LABEL_24; /*0x5053a0*/
        v5 = *((unsigned int *)g_TriggerTypeCount + result); /*0x5053ac*/
        result = aP1->vtable2; /*0x5053af*/
        while ( *(unsigned int *)result != v5 ) /*0x5053b4*/
        {
          ++v4; /*0x5053ba*/
          result += 4; /*0x5053bb*/
          if ( v4 >= aP2 ) /*0x5053c0*/
            goto LABEL_24; /*0x5053c0*/
        }
      }
      result = v11 + 1; /*0x505461*/
      v11 = result; /*0x505468*/
    }
    while ( result < *(unsigned int *)(a1 + 1608) ); /*0x505395*/
  }
  IDA_LOBYTE(result) = 1; /*0x50547f*/
  return result; /*0x505475*/
}
}
// 0x506EF0
namespace gamemd {
AbstractClass * * HouseClass::AutoBuildScanAndSort(int a2, unsigned int * a3)
{
// (v3 export truncated pseudocode — commented out; live version via get_context)
// char __thiscall HouseClass::AutoBuildScanAndSort(int this, int a2, unsigned int *a3)
// {
//   VectorClass_flat *v4; // edi
//   int v5; // ebx
//   AbstractClass *v6; // esi
//   unsigned int *v7; // ebx
//   int v8; // eax
//   unsigned short *v9; // eax
//   int v10; // ecx
//   int v11; // eax
//   double v12; // st7
//   int16_t v13; // ax
//   int v14; // edi
//   unsigned int *v15; // edi
//   int v16; // eax
//   unsigned int *v17; // esi
//   int v18; // ecx
//   int v19; // eax
//   int v20; // edx
//   int v21; // ecx
//   char *v22; // eax
//   int v23; // esi
//   unsigned short *v24; // eax
//   int16_t v25; // cx
//   int16_t v26; // ax
//   double v27; // st7
//   int64_t v28; // rax
//   unsigned int v29; // edi
//   int v30; // ebx
//   void **v31; // eax
//   int v32; // edx
//   CCINIClass *v33; // ecx
//   CCINIClass *v34; // edx
//   int v35; // eax
//   int *v36; // esi
//   char *v37; // ecx
//   bool v38; // cc
//   int v39; // ecx
//   void **v40; // eax
//   ObjectClass *v41; // edx
//   int v42; // edi
//   int v43; // ebx
//   ObjectClass *v44; // ecx
//   int v45; // esi
//   int v46; // eax
//   int v47; // eax
//   int v48; // ecx
//   do... [24279 chars total]
// end truncated pseudocode
}
}

// 0x508C30
namespace gamemd {
int HouseClass::UpdatePower()
{
  int v2; // ecx
  int v3; // eax
  int v4; // ebp
  int v5; // edi
  int v6; // edx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  char v12; // [esp+Bh] [ebp-Dh]
  int v13; // [esp+10h] [ebp-8h]
  bool v14; // [esp+14h] [ebp-4h]

  v2 = this->powerOutput; /*0x508c39*/
  v3 = this->powerDrain; /*0x508c3f*/
  v14 = v2 < v3 && v3 && (!v2 || (double)v2 / (double)this->powerDrain < 1.0); /*0x508c75*/
  this->q5778 = 0; /*0x508c79*/
  this->powerOutput = 0; /*0x508c7f*/
  this->powerDrain = 0; /*0x508c85*/
  v4 = 0; /*0x508c8f*/
  v12 = 0; /*0x508c93*/
  v13 = this->bunkersCount; /*0x508c97*/
  if ( v13 > 0 ) /*0x508c9b*/
  {
    do /*0x508ca5*/
    {
      v5 = *(unsigned int *)(this->absorbersCount + 4 * v4); /*0x508ca5*/
      if ( v5 && !v5->inLimbo && v5->isOnMap ) /*0x508cb8*/
      {
        if ( g_GameMode_Current[0] ) /*0x508cc5*/
        {
          if ( (void *)this != HouseClass_Player ) /*0x508ce4*/
            goto LABEL_18; /*0x508ce4*/
        }
        else if ( !this->currentPlayer && !this->playerControl ) /*0x508cd5*/
        {
  LABEL_18:
          this->powerOutput += BuildingClass::GetPowerOutput((int *)v5); /*0x508cf2*/
          this->powerDrain += BuildingClass::GetPowerDrain((unsigned char *)v5); /*0x508d18*/
          if ( ObjectClass::HasLocation((unsigned int *)v5) && BuildingClass::GetPowerOutput((int *)v5) > 0 ) /*0x508d30*/
            v12 = 1; /*0x508d32*/
          goto LABEL_21; /*0x508d32*/
        }
        if ( v5->isDiscoveredByCurrentPlayer || g_GameMode_Current[0] ) /*0x508cf0*/
          goto LABEL_18; /*0x508cf0*/
      }
  LABEL_21:
      ++v4; /*0x508d37*/
    }
    while ( v4 < v13 ); /*0x508ca5*/
  }
  this->u8_577B = v12; /*0x508d45*/
  v6 = this->powerBlackoutTimer; /*0x508d50*/
  v7 = this->u32_2AC; /*0x508d56*/
  if ( v6 != -1 ) /*0x508d5f*/
  {
    if ( (int)g_CurrentFrame - v6 >= v7 ) /*0x508d6b*/
      goto LABEL_26; /*0x508d6b*/
    v7 -= (int)g_CurrentFrame - v6; /*0x508d6d*/
  }
  if ( v7 ) /*0x508d71*/
  {
  LABEL_27:
    this->powerOutput = 0; /*0x508d79*/
    goto LABEL_28; /*0x508d79*/
  }
  LABEL_26:
  if ( v12 ) /*0x508d77*/
    goto LABEL_27; /*0x508d77*/
  LABEL_28:
  nullsub_5(); /*0x508d7f*/
  HouseClass::UpdateTeamProductionSpeed(); /*0x508d88*/
  v8 = this->powerOutput; /*0x508d8d*/
  v9 = this->powerDrain; /*0x508d93*/
  v10 = v8 < v9 && v9 && (!v8 || (double)this->powerOutput / (double)this->powerDrain < 1.0); /*0x508dc9*/
  if ( v14 != v10 ) /*0x508dd7*/
    IDA_LOBYTE(); /*0x508ddb*/
  this->u8_5779 = 1; /*0x508de0*/
  return v10; /*0x508de7*/
}
}
// 0x508DF0
namespace gamemd {
void * HouseClass::CanTogglePower()
{
  void *result; // eax
  int v2; // eax
  int v3; // esi
  int powerOutput; // edx
  int powerDrain; // eax
  int bunkersCount; // edi
  int v7; // edx
  unsigned int *absorbersCount; // esi
  int v9; // eax
  char v10; // [esp+0h] [ebp-Ch]

  IDA_BYTE1(this->HouseClass_field_timer_B[2]) = 0; /*0x508df0*/
  result = dword_A83D4C; /*0x508df7*/
  if ( this == (HouseClass *)dword_A83D4C ) /*0x508e01*/
  {
    v2 = this->radarBlackoutTimer[2]; /*0x508e07*/
    v3 = this->radarBlackoutTimer[0]; /*0x508e10*/
    v10 = 0; /*0x508e1a*/
    if ( v3 != -1 ) /*0x508e1f*/
    {
      if ( (int)dword_A8ED84 - v3 >= v2 ) /*0x508e2b*/
        goto LABEL_6; /*0x508e2b*/
      v2 -= (int)dword_A8ED84 - v3; /*0x508e2d*/
    }
    if ( v2 ) /*0x508e31*/
    {
  LABEL_30:
      IDA_LOBYTE(result) = HouseClass::updateAlliedStatus((HouseClass *)&dword_87F7E8); /*0x508f2f*/
      if ( (unsigned char)result != v10 ) /*0x508f43*/
        HouseClass::SetRadarVisibility((int)&dword_87F7E8, v10); /*0x508f4f*/
      return result; /*0x508f4f*/
    }
  LABEL_6:
    if ( IDA_LOBYTE(dword_A8B230[374].vtable3) ) /*0x508e3c*/
      goto LABEL_29; /*0x508e3c*/
    powerOutput = this->powerOutput; /*0x508e4a*/
    powerDrain = this->powerDrain; /*0x508e50*/
    if ( powerOutput >= powerDrain /*0x508e81*/
      || !powerDrain
      || powerOutput && (double)this->powerOutput / (double)this->powerDrain >= 1.0 )
    {
      bunkersCount = this->bunkersCount; /*0x508e87*/
      v7 = 0; /*0x508e8a*/
      if ( bunkersCount > 0 ) /*0x508e8e*/
      {
        absorbersCount = (unsigned int *)this->absorbersCount; /*0x508e94*/
        while ( 1 ) /*0x508e9d*/
        {
          v9 = *absorbersCount; /*0x508e9d*/
          if ( *absorbersCount /*0x508f06*/
            && *(unsigned char *)(v9 + 1632)
            && *(unsigned char *)(*(unsigned int *)(v9 + 1312) + 5796)
            && !*(unsigned char *)(v9 + 129)
            && *(unsigned char *)(v9 + 116)
            && (!*(unsigned int *)&dword_A8B238 && !this->currentPlayer[0] && !this->playerControl[0]
             || *(unsigned char *)(v9 + 1051)
             || *(unsigned int *)&dword_A8B238)
            && *(unsigned int *)(v9 + 172) != 19
            && *(unsigned int *)(v9 + 180) != 19 )
          {
            break; /*0x508f06*/
          }
          ++v7; /*0x508f08*/
          ++absorbersCount; /*0x508f09*/
          if ( v7 >= bunkersCount ) /*0x508f0e*/
            goto LABEL_30; /*0x508f0e*/
        }
        if ( !*(unsigned int *)(v9 + 1284) /*0x508f20*/
          && !(*(uint8_t (__thiscall **)(unsigned int))(*(unsigned int *)v9 + 468))(*absorbersCount) )
        {
  LABEL_29:
          v10 = 1; /*0x508f2a*/
        }
      }
    }
    goto LABEL_30; /*0x508f2a*/
  }
  return result; /*0x508f54*/
}
}
// 0x5098F0
namespace gamemd {
CellStruct * * HouseClass::UpdateAITryFireSW()
{
  int lastBuiltInfantryType; // eax
  int i; // edi
  int v4; // eax
  bool v5; // zf
  int v6; // eax
  int *v7; // eax
  int v8; // eax
  int v9; // eax
  int v11; // [esp+8h] [ebp-10h] BYREF
  int v12; // [esp+Ch] [ebp-Ch] BYREF
  int v13; // [esp+10h] [ebp-8h] BYREF
  int v14; // [esp+14h] [ebp-4h] BYREF

  IDA_LOBYTE(lastBuiltInfantryType) = this->currentPlayer; /*0x5098fe*/
  if ( !*(unsigned int *)&unk_A8B238 ) /*0x509904*/
    IDA_LOBYTE(lastBuiltInfantryType) = (unsigned char)lastBuiltInfantryType || this->playerControl; /*0x509918*/
  if ( !(unsigned char)lastBuiltInfantryType )
  {
    lastBuiltInfantryType = this->lastBuiltInfantryType; /*0x509922*/
    for ( i = 0; i < lastBuiltInfantryType; ++i )
    {
      v4 = *(unsigned int *)(this->supersCount + 4 * i); /*0x509939*/
      if ( v4 && *(unsigned char *)(v4 + 111) )
      {
        switch ( *(unsigned int *)(*(unsigned int *)(v4 + 40) + 180) )
        {
          case 0:
            v12 = *(unsigned int *)(this->supersCount + 4 * i); /*0x509968*/
            if ( this->enemyHouseIndex != -1 )
            {
              v5 = IDA_LOWORD(this->preferredTargetCell[0]) == *(unsigned short *)&stru_A8EB00.gapE4[948]; /*0x509980*/
              v11 = *(unsigned int *)&stru_A8EB00.gapE4[948]; /*0x509987*/
              if ( v5 && IDA_HIWORD(this->preferredTargetCell[0]) == *(unsigned short *)&stru_A8EB00.gapE4[950] )
              {
                v7 = this->preferredTargetType == 1
                   ? HouseClass::FindSWBuilding(this, &v13)
                   : HouseClass::FindSWTarget(this, &v14, this->preferredTargetType);
                v6 = *v7; /*0x5099cb*/
              }
              else
              {
                v6 = this->preferredTargetCell[0]; /*0x50999d*/
              }
              v11 = v6; /*0x5099d4*/
              if ( v6 != *(unsigned int *)&stru_A8EB00.gapE4[948] ) /*0x5099d8*/
                goto LABEL_33; /*0x5099d8*/
            }
            break; /*0x5099d8*/
          case 2:
            HouseClass::Fire_LightningStorm(*(unsigned int *)(this->supersCount + 4 * i)); /*0x509a0d*/
            break; /*0x509a12*/
          case 5:
          case 6:
          case 8:
          case 0xB:
            HouseClass::Fire_ParaDrop(*(unsigned int *)(this->supersCount + 4 * i)); /*0x509a34*/
            break; /*0x509a39*/
          case 7:
            HouseClass::Fire_PsyDom(*(unsigned int *)(this->supersCount + 4 * i)); /*0x509a1a*/
            break; /*0x509a1f*/
          case 9:
            HouseClass::Fire_GenMutator(*(unsigned int *)(this->supersCount + 4 * i)); /*0x509a27*/
            break; /*0x509a2c*/
          case 0xA:
            v5 = IDA_LOWORD(this->preferredDefensiveCell2[0]) == *(unsigned short *)&stru_A8EB00.gapE4[948]; /*0x509a4b*/
            v12 = *(unsigned int *)(this->supersCount + 4 * i); /*0x509a52*/
            v11 = *(unsigned int *)&stru_A8EB00.gapE4[948]; /*0x509a56*/
            if ( !v5 || IDA_HIWORD(this->preferredDefensiveCell2[0]) != *(unsigned short *)&stru_A8EB00.gapE4[950] ) /*0x509a63*/
            {
              v8 = this->preferredDefensiveCell2[0]; /*0x509a65*/
              goto LABEL_32; /*0x509a6b*/
            }
            if ( (IDA_LOWORD(this->preferredDefensiveCell[0]) != *(unsigned short *)&stru_A8EB00.gapE4[948] /*0x509a99*/
               || IDA_HIWORD(this->preferredDefensiveCell[0]) != *(unsigned short *)&stru_A8EB00.gapE4[950])
              && *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 3808)
               + this->preferredDefensiveCellStartTime > *(int *)&stru_A8EB00.gapE4[416] )
            {
              v8 = this->preferredDefensiveCell[0]; /*0x509a9b*/
  LABEL_32:
              v11 = v8; /*0x509aa1*/
              if ( v8 != *(unsigned int *)&stru_A8EB00.gapE4[948] ) /*0x509aa8*/
              {
  LABEL_33:
                v9 = (*(int (__thiscall **)(int *, int *))(this->supers[0] + 16))(this->supers, &v12); /*0x509aca*/
                SuperWeapon::FireSuperWeaponHouseClass(v9, (int)&v11); /*0x509acd*/
              }
              break; /*0x509acd*/
            }
            break; /*0x509acd*/
          default:
            break;
        }
      }
      lastBuiltInfantryType = this->lastBuiltInfantryType; /*0x509ad2*/
    }
  }
  return lastBuiltInfantryType; /*0x509ae2*/
}
}
// 0x50BC90
namespace gamemd {
int HouseClass::CreatePowerOutage(int a2)
{
  int v4; // [esp+8h] [ebp-8h]

  g_CurrentFrame = g_CurrentFrame; /*0x50bc90*/
  this->q5778 = 1; /*0x50bc9c*/
  this->powerBlackoutTimer = g_CurrentFrame; /*0x50bcaa*/
  this->q2A8 = v4; /*0x50bcb4*/
  this->u32_2AC = a2; /*0x50bcb7*/
  return v4; /*0x50bcba*/
}
}
// 0x50BCD0
namespace gamemd {
int HouseClass::CreateRadarOutage(int a2)
{
  wchar_t *v2; // eax
  int v4; // [esp+8h] [ebp-8h]

  v2 = g_CurrentFrame; /*0x50bcd0*/
  this->u8_5779 = 1; /*0x50bcdc*/
  this->u32_AC0 = v2; /*0x50bcea*/
  *(unsigned int *)((char *)&this->qAC4 + 12) = v4; /*0x50bcf4*/
  this->qAE0 = a2; /*0x50bcf7*/
  return v4; /*0x50bcfa*/
}
}
// 0x50D320
namespace gamemd {
void HouseClass_RespawnStartingBuildings()
{
  int v4; // ecx
  int result; // eax
  int16_t *v7; // edi
  int v8; // esi
  int16_t *v9; // ebx
  Cell *v10; // eax
  int *v11; // eax
  int v12; // ecx
  int v13; // edx
  int v14; // edi
  int v15; // esi
  void *v16; // eax
  unsigned int *v17; // eax
  int v22[3]; // [esp+14h] [ebp-1Ch] BYREF
  unsigned int v23[4]; // [esp+20h] [ebp-10h] BYREF
  void *retaddr; // [esp+30h] [ebp+0h] BYREF

  v4 = v4; /*0x50d324*/
  result = *(unsigned int *)(v4 + 380) - 1; /*0x50d32c*/
  for ( result = result; result >= 0; --result )
  {
    v7 = *(int16_t **)(*(unsigned int *)(v4 + 368) + 4 * result); /*0x50d340*/
    v8 = *(unsigned int *)v7; /*0x50d343*/
    if ( (*(int (__thiscall **)(unsigned int))(**(unsigned int **)v7 + 44))(*(unsigned int *)v7) == 7 )
    {
      v9 = v7 + 2; /*0x50d355*/
      v10 = (Cell *)CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v7 + 2); /*0x50d35e*/
      v11 = Cell::IsBridge(v10); /*0x50d365*/
      if ( v11 && (v12 = v11[328], v12 == v8) && v11[135] == v4 )
      {
        v13 = *v11; /*0x50d386*/
        v22[0] = -*(unsigned int *)(v12 + 160); /*0x50d38a*/
        (*(void (__thiscall **)(int *, int *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int))(v13 + 364))( /*0x50d3ac*/
          v11,
          v22,
          0,
          *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 4008),
          0,
          0,
          0,
          0);
      }
      else
      {
        v14 = (*(int (__thiscall **)(int, int, unsigned int *, int, void **))(*(unsigned int *)v8 + 140))(v8, v4, v23, a4, a2); /*0x50d3bf*/
        if ( v14 )
          v15 = (*(int (__thiscall **)(int))(v14->q02C)(v14) == 6 ? v14 : 0;
        else
          v15 = 0; /*0x50d3c5*/
        v16 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v9); /*0x50d3e3*/
        a2 = &retaddr; /*0x50d3ee*/
        v17 = (unsigned int *)(*(int (__thiscall **)(void *))(*(unsigned int *)v16 + 72))(v16); /*0x50d3f1*/
        a4 = 0; /*0x50d3f6*/
        v23[0] = *v17; /*0x50d3f8*/
        v23[1] = v17[1]; /*0x50d3ff*/
        v23 = v23; /*0x50d40a*/
        v23[2] = v17[2]; /*0x50d40b*/
        if ( !(*(uint8_t (__thiscall **)(int))(*(unsigned int *)v15 + 1168))(v15) ) /*0x50d413*/
          (*(void (__thiscall **)(int))(*(unsigned int *)v15 + 248))(v15); /*0x50d421*/
      }
    }
    result = result - 1; /*0x50d42b*/
  }
  return result; /*0x50d439*/
}
}
// 0x50D440
namespace gamemd {
int HouseClass::RespawnStartingForces(TechnoClass * aP0, void ** a1, unsigned int * a2, int a4)
{
  int v4; // ecx
  int v5; // ebx
  int result; // eax
  int v7; // edi
  int16_t *v8; // ebp
  int v9; // esi
  int v10; // eax
  void *v11; // eax
  unsigned int *v12; // eax
  int v16; // [esp+10h] [ebp-1Ch]
  unsigned int v17[4]; // [esp+1Ch] [ebp-10h] BYREF
  void *retaddr; // [esp+2Ch] [ebp+0h] BYREF

  v5 = v4; /*0x50d444*/
  result = *(unsigned int *)(v4 + 380) - 1; /*0x50d44c*/
  v16 = result; /*0x50d44d*/
  if ( result >= 0 )
  {
    while ( 1 )
    {
      v7 = 0; /*0x50d466*/
      v8 = *(int16_t **)(*(unsigned int *)(v5 + 368) + 4 * result); /*0x50d468*/
      v9 = *(unsigned int *)v8; /*0x50d46b*/
      switch ( (*(int (__thiscall **)(unsigned int, unsigned int *, int, void **))(**(unsigned int **)v8 + 44))(
                 *(unsigned int *)v8,
                 a3,
                 a4,
                 a2) )
      {
        case 3:
        case 7:
        case 40:
          v10 = (*(int (__thiscall **)(int, int))(*(unsigned int *)v9 + 140))(v9, v5); /*0x50d491*/
          if ( v10 ) /*0x50d499*/
            goto LABEL_9; /*0x50d499*/
          v7 = 0; /*0x50d49b*/
          break; /*0x50d49d*/
        case 16:
          v10 = (*(int (__thiscall **)(int, int))(*(unsigned int *)v9 + 140))(v9, v5); /*0x50d4a4*/
          if ( v10 )
  LABEL_9:
            v7 = (*(unsigned char *)(v10 + 20) & 1) != 0 ? v10 : 0;
          else
            v7 = 0; /*0x50d4ae*/
          break; /*0x50d4b0*/
        default:
          break;
      }
      v11 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], v8 + 2); /*0x50d4c0*/
      a2 = &retaddr; /*0x50d4d4*/
      v12 = (unsigned int *)(*(int (__thiscall **)(void *))(*(unsigned int *)v11 + 72))(v11); /*0x50d4d7*/
      a4 = 0; /*0x50d4dc*/
      v17[0] = *v12; /*0x50d4de*/
      v17[1] = v12[1]; /*0x50d4e5*/
      a3 = v17; /*0x50d4f0*/
      v17[2] = v12[2]; /*0x50d4f1*/
      if ( !(*(uint8_t (__thiscall **)(int))(*(unsigned int *)v7 + 1168))(v7) ) /*0x50d4f9*/
        (*(void (__thiscall **)(int))(*(unsigned int *)v7 + 248))(v7); /*0x50d507*/
      result = --v16; /*0x50d511*/
      if ( v16 < 0 ) /*0x50d516*/
        break; /*0x50d516*/
      result = v16; /*0x50d45c*/
    }
  }
  return result; /*0x50d51f*/
}
}
// 0x50D9E0
namespace gamemd {
int HouseClass::GetInfSelfHealStep()
{
  return *(unsigned int *)&this->techInfiltrationFlags * g_RulesClass_Instance->SelfHealInfantryAmount; /*0x50d9ef*/
}
}
// 0x50D9F0
namespace gamemd {
int HouseClass::GetUnitSelfHealStep()
{
  return *(unsigned int *)&this->productionInfiltrationFlags * g_RulesClass_Instance->SelfHealUnitAmount; /*0x50d9ff*/
}
}
// 0x50E0E0
namespace gamemd {
void HouseClass::LostPoweredCenter(int a2)
{
  int v3; // eax
  char v4; // bl
  int v5; // edi
  int v6; // esi

  v3 = *(unsigned int *)&this->qB60 - 1; /*0x50e0eb*/
  *(unsigned int *)&this->qB60 = v3; /*0x50e0ec*/
  if ( !v3 ) /*0x50e0f2*/
  {
    if ( a2 ) /*0x50e0fe*/
    {
      v4 = 0; /*0x50e109*/
      v5 = g_SidebarState - 1; /*0x50e10b*/
      if ( g_SidebarState - 1 >= 0 ) /*0x50e110*/
      {
        do /*0x50e14c*/
        {
          v6 = *((unsigned int *)g_TechnoClass_Count + v5); /*0x50e11d*/
          if ( v6->owner == this /*0x50e138*/
            && (*(int (__thiscall **)(unsigned int))(v6->hasParachute)(*((unsigned int *)g_TechnoClass_Count + v5)) == a2
            && !v6->inLimbo )
          {
            TechnoClass::Deactivate((unsigned int *)v6); /*0x50e144*/
            v4 = 1; /*0x50e149*/
          }
          --v5; /*0x50e14b*/
        }
        while ( v5 >= 0 ); /*0x50e14c*/
        if ( v4 && g_WTFMode ) /*0x50e15a*/
        {
          if ( g_GameMode_Current[0] ) /*0x50e163*/
          {
            if ( (void *)this != HouseClass_Player ) /*0x50e186*/
              return; /*0x50e186*/
            goto LABEL_16; /*0x50e186*/
          }
          if ( this->currentPlayer || this->playerControl ) /*0x50e16f*/
          {
  LABEL_16:
            if ( !g_IKnowWhatImDoing ) /*0x50e18f*/
              VoxClass::FindAndPlay(g_Str_EVA_RobotTanksOffline, -1); /*0x50e19b*/
          }
        }
      }
    }
  }
}
}
// 0x5471B0
namespace gamemd {
int HouseClass::GetCameoTypeIndex(int a2)
{
  unsigned int *v2; // eax
  int v3; // ecx

  v2 = (unsigned int *)(*((int (__thiscall **)(HouseClass *))this->vtable0 + 39))(this); /*0x5471b2*/
  if ( v2 && (v3 = v2[a2 % (*v2 * v2[1]) + 4]) != 0 ) /*0x5471d3*/
    return *(char *)(v3 + 42); /*0x5471d5*/
  else
    return 0; /*0x5471dc*/
}
}
// 0x5D70F0
namespace gamemd {
AbstractClass * * HouseClass::AIDecision(ObjectClass * aP0, int * a1)
{
  int v2; // ebp
  int v3; // edx
  int v4; // eax
  int v5; // ebx
  int v6; // edi
  int v7; // esi
  int v8; // eax
  int v9; // edx
  unsigned int *v10; // ecx
  int v11; // eax
  int v12; // edi
  int v13; // eax
  int v14; // esi
  int v15; // eax
  int v16; // esi
  int v18; // ebp
  int v19; // ecx
  int v20; // eax
  unsigned int *v21; // edx
  int v22; // esi
  void **v23; // eax
  int *v24; // edi
  int16_t *CurrentOption; // eax
  int *v26; // esi
  int v27; // eax
  int v28; // [esp+10h] [ebp-38h]
  int v29; // [esp+14h] [ebp-34h] BYREF
  void **v30; // [esp+18h] [ebp-30h] BYREF
  void *Block; // [esp+1Ch] [ebp-2Ch]
  int v32; // [esp+20h] [ebp-28h]
  int v33; // [esp+24h] [ebp-24h]
  int v34; // [esp+28h] [ebp-20h]
  int v35; // [esp+2Ch] [ebp-1Ch]
  void **v36; // [esp+30h] [ebp-18h] BYREF
  void *v37; // [esp+34h] [ebp-14h]
  int v38; // [esp+38h] [ebp-10h]
  char v39; // [esp+3Dh] [ebp-Bh]
  int v40; // [esp+40h] [ebp-8h]
  int v41; // [esp+44h] [ebp-4h]

  v2 = 0; /*0x5d70fb*/
  if ( *a1 <= 0 ) /*0x5d7101*/
    return 1; /*0x5d7492*/
  v28 = *a1; /*0x5d710d*/
  ((void (__stdcall *)(unsigned int, unsigned int))UnitTypeVector::Construct2)(0, 0); /*0x5d7111*/
  v41 = 10; /*0x5d7124*/
  v40 = 0; /*0x5d712c*/
  ((void (__stdcall *)(unsigned int, unsigned int))InfantryTypeVector::ConstructFromData)(0, 0); /*0x5d7130*/
  v3 = 10; /*0x5d7139*/
  v35 = 10; /*0x5d7146*/
  v4 = *((unsigned int *)aP0 + 13); /*0x5d714a*/
  v34 = 0; /*0x5d714d*/
  v5 = 1 << *(unsigned int *)(v4 + 180); /*0x5d7161*/
  if ( g_CrateCount <= 0 ) /*0x5d7165*/
    goto LABEL_20; /*0x5d7165*/
  v6 = v38; /*0x5d716b*/
  do /*0x5d7210*/
  {
    v7 = *((unsigned int *)g_UnitTypeCount2 + v2); /*0x5d7175*/
    if ( *(unsigned char *)(v7 + 1749) && (v5 & *(unsigned int *)(v7 + 1740)) != 0 && *(unsigned int *)(v7 + 1588) <= *((unsigned int *)aP0 + 117) ) /*0x5d719e*/
    {
      v8 = 0; /*0x5d71a6*/
      v9 = g_RulesClass_Instance->AICaptureLowMoney[1]; /*0x5d71a8*/
      if ( v9 <= 0 ) /*0x5d71b0*/
      {
  LABEL_11:
        if ( v40 < v6 ) /*0x5d71c8*/
          goto LABEL_16; /*0x5d71c8*/
        if ( (v39 || !v6) && v41 > 0 ) /*0x5d71dc*/
        {
          if ( ((uint8_t (__thiscall *)(void ***, int, unsigned int))v36[2])(&v36, v41 + v6, 0) ) /*0x5d71eb*/
          {
  LABEL_16:
            v11 = v40++; /*0x5d71f2*/
            *((unsigned int *)v37 + v11) = v7; /*0x5d7201*/
          }
          v6 = v38; /*0x5d7204*/
        }
      }
      else
      {
        v10 = (unsigned int *)g_RulesClass_Instance->AICaptureLowPower[2]; /*0x5d71b2*/
        while ( *v10 != v7 ) /*0x5d71ba*/
        {
          ++v8; /*0x5d71bc*/
          ++v10; /*0x5d71bd*/
          if ( v8 >= v9 ) /*0x5d71c2*/
            goto LABEL_11; /*0x5d71c2*/
        }
      }
    }
    ++v2; /*0x5d7208*/
  }
  while ( v2 < g_CrateCount ); /*0x5d7210*/
  v3 = v35; /*0x5d7216*/
  LABEL_20:
  v12 = 0; /*0x5d721a*/
  if ( g_LoadScreenProgress > 0 ) /*0x5d7223*/
  {
    v13 = v32; /*0x5d7229*/
    while ( 1 ) /*0x5d7239*/
    {
      v14 = *((unsigned int *)Factory_ExitCellTable + v12); /*0x5d7239*/
      if ( *(unsigned char *)(v14 + 1749) /*0x5d725e*/
        && (v5 & *(unsigned int *)(v14 + 1740)) != 0
        && *(unsigned int *)(v14 + 1588) <= *((unsigned int *)aP0 + 117) )
      {
        if ( v34 < v13 ) /*0x5d7264*/
          goto LABEL_31; /*0x5d7264*/
        if ( (IDA_BYTE1(v33) || !v13) && v3 > 0 ) /*0x5d7274*/
          break; /*0x5d7274*/
      }
  LABEL_33:
      if ( ++v12 >= g_LoadScreenProgress ) /*0x5d72a9*/
        goto LABEL_34; /*0x5d72a9*/
      v3 = v35; /*0x5d722f*/
    }
    if ( ((uint8_t (__thiscall *)(void ***, int, unsigned int))v30[2])(&v30, v3 + v13, 0) ) /*0x5d7283*/
    {
  LABEL_31:
      v15 = v34++; /*0x5d728a*/
      *((unsigned int *)Block + v15) = v14; /*0x5d7299*/
    }
    v13 = v32; /*0x5d729c*/
    goto LABEL_33; /*0x5d729c*/
  }
  LABEL_34:
  v16 = v40; /*0x5d72ab*/
  if ( v40 || v34 ) /*0x5d72b9*/
  {
    v18 = 20; /*0x5d731a*/
    v19 = *a1; /*0x5d731f*/
    if ( *a1 > 0 ) /*0x5d7323*/
    {
      while ( v18 > 0 ) /*0x5d7331*/
      {
        if ( v19 > v28 / 3 && v16 ) /*0x5d734d*/
        {
          v20 = Random::Range((unsigned int *)g_ScenarioClass_Instance + 134, 0, v16 - 1); /*0x5d735f*/
          v21 = v37; /*0x5d7364*/
        }
        else
        {
          v20 = Random::Range((unsigned int *)g_ScenarioClass_Instance + 134, 0, v34 - 1); /*0x5d737e*/
          v21 = Block; /*0x5d7383*/
        }
        v22 = v21[v20]; /*0x5d7387*/
        v23 = (void **)(*(int (__thiscall **)(int, void *))(*(unsigned int *)v22 + 140))(v22, aP0); /*0x5d7393*/
        v24 = (int *)__RTDynamicCast( /*0x5d73b4*/
                       v23,
                       0,
                       &ObjectClass `RTTI Type Descriptor',
                       &TechnoClass `RTTI Type Descriptor',
                       0);
        CurrentOption = (int16_t *)HouseClass::GetCurrentOption(aP0, &v29); /*0x5d73bb*/
        if ( FindInfantryDeployPosition(v24, CurrentOption, 4) ) /*0x5d73c4*/
        {
          v27 = (*(int (__thiscall **)(int))(*(unsigned int *)v22 + 172))(v22); /*0x5d73e5*/
          v26 = a1; /*0x5d73eb*/
          *a1 -= v27; /*0x5d73f3*/
          if ( (*(unsigned int *)g_ScenarioClass_Instance & 0x200) != 0 ) /*0x5d7400*/
            Timer::SetFlag(v24 + 84, 1); /*0x5d740a*/
          if ( (uint8_t)House::IsCurrentPlayer(aP0) ) /*0x5d7411*/
            (*(void (__thiscall **)(int *, int))(*v24 + 496))(v24, 5); /*0x5d7420*/
          else
            (*(void (__thiscall **)(int *, int))(*v24 + 496))(v24, 11); /*0x5d742e*/
        }
        else
        {
          if ( v24 ) /*0x5d73cf*/
            (*(void (__thiscall **)(int *, int))(*v24 + 32))(v24, 1); /*0x5d73d7*/
          v26 = a1; /*0x5d73da*/
          --v18; /*0x5d73de*/
        }
        v19 = *v26; /*0x5d7434*/
        if ( *v26 <= 0 ) /*0x5d7438*/
          break; /*0x5d7438*/
        v16 = v40; /*0x5d732b*/
      }
    }
    if ( Block && IDA_BYTE1(v33) ) /*0x5d7456*/
    {
      RA2_OPDEL(Block); /*0x5d7459*/
      Block = 0; /*0x5d7461*/
    }
    IDA_BYTE1(v33) = 0; /*0x5d7469*/
    v32 = 0; /*0x5d7470*/
    if ( v37 && v39 ) /*0x5d7484*/
      RA2_OPDEL(v37); /*0x5d7487*/
    return 1; /*0x5d7487*/
  }
  if ( Block && IDA_BYTE1(v33) ) /*0x5d72d1*/
  {
    RA2_OPDEL(Block); /*0x5d72d4*/
    Block = 0; /*0x5d72dc*/
  }
  IDA_BYTE1(v33) = 0; /*0x5d72e4*/
  v32 = 0; /*0x5d72eb*/
  if ( v37 ) /*0x5d72f7*/
  {
    if ( v39 ) /*0x5d72ff*/
      RA2_OPDEL(v37); /*0x5d7302*/
  }
  return 0; /*0x5d730a*/
}
}
// 0x5D74A0
namespace gamemd {
int HouseClass::InitAlliances()
{
  int nextArrayIndex; // edx
  unsigned int *vtable3; // eax
  int v3; // edi
  int v4; // ebp
  int *v5; // ebx
  int v6; // ecx
  int *v7; // esi
  int v9; // [esp+0h] [ebp-4h]

  nextArrayIndex = stru_A80220.nextArrayIndex; /*0x5d74a1*/
  if ( stru_A80220.nextArrayIndex <= 0 ) /*0x5d74a9*/
    return 1; /*0x5d754a*/
  vtable3 = stru_A80220.vtable3; /*0x5d74af*/
  v3 = 1; /*0x5d74b8*/
  v4 = 0; /*0x5d74bd*/
  v9 = 1; /*0x5d74bf*/
  do /*0x5d7540*/
  {
    v5 = (int *)vtable3[v4]; /*0x5d74c3*/
    if ( !*(unsigned char *)(v5[13] + 422) ) /*0x5d74c9*/
    {
      v6 = v5[22551]; /*0x5d74d4*/
      if ( v6 != -2 && v6 != -1 && v3 < nextArrayIndex ) /*0x5d74e6*/
      {
        do /*0x5d752d*/
        {
          v7 = (int *)vtable3[v3]; /*0x5d74e8*/
          if ( !*(unsigned char *)(v7[13] + 422) && *(unsigned int *)(vtable3[v4] + 90204) == v7[22551] ) /*0x5d7509*/
          {
            HouseClass::HandleAlliance(v5, (int)v7, 0); /*0x5d7510*/
            HouseClass::HandleAlliance(v7, (int)v5, 0); /*0x5d751a*/
            vtable3 = stru_A80220.vtable3; /*0x5d751f*/
          }
          nextArrayIndex = stru_A80220.nextArrayIndex; /*0x5d7524*/
          ++v3; /*0x5d752a*/
        }
        while ( v3 < stru_A80220.nextArrayIndex ); /*0x5d752d*/
        v3 = v9; /*0x5d752f*/
      }
    }
    ++v3; /*0x5d7533*/
    ++v4; /*0x5d7534*/
    v9 = v3; /*0x5d7537*/
  }
  while ( v3 - 1 < nextArrayIndex ); /*0x5d7540*/
  return 1; /*0x5d7549*/
}
}
// 0x5EE9D0
namespace gamemd {
AbstractClass * * HouseClass::FindStartPositions()
{
  int v0; // eax
  unsigned int *v1; // ecx
  int v2; // eax
  int i; // edi
  int v4; // esi
  char v5; // bl
  int v6; // edx
  int v7; // eax
  unsigned int *v8; // ecx
  int *started; // eax
  int v10; // edi
  int v11; // esi
  int *v12; // eax
  int v13; // [esp+0h] [ebp-34h] BYREF
  int v14; // [esp+4h] [ebp-30h] BYREF
  int v15; // [esp+8h] [ebp-2Ch] BYREF
  unsigned char v16[16]; // [esp+Ch] [ebp-28h] BYREF
  void **v17; // [esp+1Ch] [ebp-18h] BYREF
  void *Block; // [esp+20h] [ebp-14h]
  char v19; // [esp+29h] [ebp-Bh]

  Multiplayer::FindStartPositions(&v17); /*0x5ee9d9*/
  v0 = 0; /*0x5ee9e4*/
  v1 = (char *)g_ScenarioClass_Instance + 4480; /*0x5ee9e6*/
  do /*0x5eea04*/
    v16[v0++] = *v1++ != -1; /*0x5ee9f1*/
  while ( v0 < 16 ); /*0x5eea04*/
  v2 = HouseClass_Count; /*0x5eea06*/
  for ( i = 0; i < HouseClass_Count; ++i ) /*0x5eea11*/
  {
    v4 = *(unsigned int *)&HouseClass_Array->gap0[4 * i]; /*0x5eea1f*/
    if ( !v4->attachedTag->q698 && v4->q1EC ) /*0x5eea33*/
    {
      v5 = 0; /*0x5eea47*/
      v6 = -1; /*0x5eea49*/
      v7 = 0; /*0x5eea4c*/
      v8 = (char *)g_ScenarioClass_Instance + 4480; /*0x5eea4e*/
      do /*0x5eea63*/
      {
        if ( *v8 == i ) /*0x5eea56*/
        {
          v5 = 1; /*0x5eea58*/
          v6 = v7; /*0x5eea5a*/
        }
        ++v7; /*0x5eea5c*/
        ++v8; /*0x5eea5d*/
      }
      while ( v7 < 16 ); /*0x5eea63*/
      if ( v5 ) /*0x5eea67*/
      {
        HouseClass::SetMapSeed((unsigned int *)v4, *((unsigned int *)Block + v6)); /*0x5eead6*/
      }
      else
      {
        Debug::Log(); /*0x5eea73*/
        started = AssignRandomMapStartPositions(&v13, i, (int)&v17, (int)v16, 1); /*0x5eea8d*/
        HouseClass::SetMapSeed((unsigned int *)v4, *started); /*0x5eea97*/
        HouseClass::GetCurrentOption((unsigned int *)v4, &v14); /*0x5eeaa3*/
        HouseClass::GetCurrentOption((unsigned int *)v4, &v15); /*0x5eeab4*/
        Debug::Log(); /*0x5eeac2*/
      }
    }
    v2 = HouseClass_Count; /*0x5eeadb*/
  }
  v10 = 0; /*0x5eeaeb*/
  if ( v2 > 0 ) /*0x5eeaef*/
  {
    do /*0x5eeb7e*/
    {
      v11 = *(unsigned int *)&HouseClass_Array->gap0[4 * v10]; /*0x5eeafb*/
      if ( !v11->attachedTag->q698 && !v11->q1EC ) /*0x5eeb0b*/
      {
        Debug::Log(); /*0x5eeb1f*/
        v12 = AssignRandomMapStartPositions(&v15, v10, (int)&v17, (int)v16, 0); /*0x5eeb39*/
        HouseClass::SetMapSeed((unsigned int *)v11, *v12); /*0x5eeb43*/
        HouseClass::GetCurrentOption((unsigned int *)v11, &v14); /*0x5eeb4f*/
        HouseClass::GetCurrentOption((unsigned int *)v11, &v13); /*0x5eeb60*/
        Debug::Log(); /*0x5eeb6e*/
      }
      ++v10; /*0x5eeb7b*/
    }
    while ( v10 < HouseClass_Count ); /*0x5eeb7e*/
  }
  if ( Block ) /*0x5eeb94*/
  {
    if ( v19 ) /*0x5eeb9c*/
      RA2_OPDEL(Block); /*0x5eeb9f*/
  }
}
}
// 0x740DF0
namespace gamemd {
int HouseClass::SetPrimaryFactory(int a2)
{
  if ( a2 == -1 || this->builtInfantryTypes[233] != -1 ) /*0x740e00*/
    return 0; /*0x740e17*/
  this->builtInfantryTypes[233] = a2; /*0x740e02*/
  (*((void (__thiscall **)(HouseClass *, int))this->vtable0 + 73))(this, 2); /*0x740e0c*/
  return 1; /*0x740e14*/
}
}
// 0x429210
namespace gamemd {
int HouseClass::QueryInterface_Helper()
{
  const void **v4; // [esp+14h] [ebp+Ch]

  if ( !v4 ) /*0x429218*/
    return -2147467261; /*0x42921b*/
  if ( memcmp(a3, &unk_7F7CA0, 0x10u) && memcmp(a3, &IID_IUnknown, 0x10u) ) /*0x42924a*/
    return -2147467262; /*0x42924f*/
  *v4 = a2; /*0x42925c*/
  (*(void (__stdcall **)(const void *))(*(unsigned int *)a2 + 4))(a2); /*0x429261*/
  return 0; /*0x42921a*/
}
} // namespace gamemd

// 0x429270
namespace gamemd {
int HouseClass::QueryInterface_Dispatch()
{
  void **v4; // eax
  int v6; // ebx

  v4 = a4; /*0x429270*/
  if ( !a4 ) /*0x42927a*/
    return -2147024809; /*0x429285*/
  *a4 = 0; /*0x42928c*/
  if ( a2 ) /*0x429294*/
    return -2147221232; /*0x42929f*/
  v6 = -2147467262; /*0x4292b4*/
  if ( !memcmp(a3, &unk_7E36C0, 0x10u) || !memcmp(a3, &IID_IUnknown, 0x10u) ) /*0x4292cb*/
  {
    if ( !&punk ) /*0x4292d6*/
      return -2147024882; /*0x4292e1*/
    v6 = punk.field_0->QueryInterface(&punk, a3, a4); /*0x4292f3*/
    if ( v6 < 0 ) /*0x4292f7*/
      RA2_OPDEL(&punk); /*0x4292fe*/
    v4 = a4; /*0x429306*/
  }
  if ( !memcmp(a3, &unk_7EA6E8, 0x10u) ) /*0x429318*/
  {
    if ( !&MapClass_Instance ) /*0x429323*/
      return -2147024882; /*0x42932e*/
    v6 = MapClass_Instance.field_0->QueryInterface(&MapClass_Instance, a3, v4); /*0x429340*/
    if ( v6 < 0 ) /*0x429344*/
      RA2_OPDEL(&MapClass_Instance); /*0x42934b*/
  }
  return v6; /*0x42927c*/
}
} // namespace gamemd

// 0x42F380
namespace gamemd {
int HouseClass::FailedToPlaceNode(int a1)
{
  int result; // eax
  int v2; // ecx

  result = a1; /*0x42f380*/
  if ( a1 ) /*0x42f386*/
  {
    v2 = *(unsigned int *)(a1 + 12) + 1; /*0x42f38e*/
    *(unsigned int *)(a1 + 12) = v2; /*0x42f38f*/
    return v2; /*0x42f392*/
  }
  return result; /*0x42f388*/
}
} // namespace gamemd

// 0x4E8240
namespace gamemd {
int HouseClass::vt_placeholder_00()
{
  return 1; /*0x4e8245*/
}
} // namespace gamemd

// 0x4E8250
namespace gamemd {
int HouseClass::vt_placeholder_01()
{
  return 1; /*0x4e8255*/
}
} // namespace gamemd

// 0x4E8260
namespace gamemd {
int HouseClass::vt_placeholder_02()
{
  return 0; /*0x4e8262*/
}
} // namespace gamemd

// 0x4E8270
namespace gamemd {
std::locale::facet * HouseClass::initAngerStruct(char a2)
{
  this->vtable0 = (void*)&VersionClass_vftable; /*0x4e8279*/
  if ( (a2 & 1) != 0 ) /*0x4e827f*/
    RA2_OPDEL(); /*0x4e8282*/
  return (std::locale::facet *)this; /*0x4e828c*/
}
} // namespace gamemd

// 0x4F28A0
namespace gamemd {
int HouseClass_24::Seek(int a2)
{
  return *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * a2); /*0x4f28aa*/
}
} // namespace gamemd

// 0x4F28C0
namespace gamemd {
VectorCursor * HouseClass::vt_placeholder_07(char a2)
{
  *(unsigned int *)this = (void*)&VectorCursor_GraphicMenuItem___DynamicVectorClass_GraphicMenuItem___vftable; /*0x4f28c9*/
  if ( (a2 & 1) != 0 ) /*0x4f28cf*/
    RA2_OPDEL(); /*0x4f28d2*/
  return this; /*0x4f28dc*/
}
} // namespace gamemd

// 0x4F28E0
namespace gamemd {
char HouseClass_24::AddRef(int a2)
{
  int m_8; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  m_8 = this->m_8; /*0x4f28e2*/
  if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x4f28ed*/
  {
    v3 = 0; /*0x4f28ef*/
    if ( m_8 <= 0 ) /*0x4f28f3*/
      return 1; /*0x4f2913*/
    v4 = *(unsigned int **)&this->m_1[3]; /*0x4f28f5*/
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x4f28fb*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x4f2904*/
    {
      ++v3; /*0x4f2906*/
      ++v4; /*0x4f2907*/
      if ( v3 >= m_8 ) /*0x4f290c*/
        return 1; /*0x4f290c*/
    }
  }
  return 0; /*0x4f290e*/
}
} // namespace gamemd

// 0x4F2920
namespace gamemd {
char HouseClass_24::Release(int a2, unsigned int * a3)
{
  unsigned int *v4; // edi
  int m_8; // ecx
  int i; // eax

  if ( a2 ) /*0x4f292c*/
  {
    IDA_LOBYTE(this->m_C) = 0; /*0x4f2936*/
    if ( a3 ) /*0x4f293c*/
      v4 = a3; /*0x4f2952*/
    else
      v4 = (unsigned int *)RA2_OPNEW(4 * a2); /*0x4f294e*/
    IDA_LOBYTE(this->m_C) = 1; /*0x4f2956*/
    if ( v4 ) /*0x4f295a*/
    {
      if ( *(unsigned int *)&this->m_1[3] ) /*0x4f2965*/
      {
        m_8 = this->m_8; /*0x4f296c*/
        if ( a2 < m_8 ) /*0x4f2971*/
          m_8 = a2; /*0x4f2973*/
        for ( i = 0; i < m_8; v4[i - 1] = *(unsigned int *)(*(unsigned int *)&this->m_1[3] + 4 * i - 4) ) /*0x4f2979*/
          ++i; /*0x4f297e*/
        if ( IDA_BYTE1(this->m_C) ) /*0x4f298b*/
        {
          RA2_OPDEL(*(void **)&this->m_1[3]); /*0x4f2996*/
          *(unsigned int *)&this->m_1[3] = 0; /*0x4f299e*/
        }
      }
      *(unsigned int *)&this->m_1[3] = v4; /*0x4f29a7*/
      this->m_8 = a2; /*0x4f29af*/
      IDA_BYTE1(this->m_C) = a3 == 0; /*0x4f29b2*/
      return 1; /*0x4f29b8*/
    }
    else
    {
      return 0; /*0x4f295f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(_VectorClass_PAVGraphicMenuItem *))(*(unsigned int *)this->__pad_0 + 12))(this); /*0x4f29c2*/
    return 1; /*0x4f29c8*/
  }
}
} // namespace gamemd

// 0x4F29D0
namespace gamemd {
void HouseClass_24::ddtor()
{
  if ( *(unsigned int *)&this->m_1[3] && IDA_BYTE1(this->m_C) ) /*0x4f29dd*/
  {
    RA2_OPDEL(*(void **)&this->m_1[3]); /*0x4f29e3*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x4f29eb*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x4f29ee*/
  this->m_8 = 0; /*0x4f29f1*/
}
} // namespace gamemd

// 0x4F2A00
namespace gamemd {
int HouseClass_24::Read(unsigned int * a2)
{
  int result; // eax
  int m_8; // edx
  unsigned int *i; // ecx

  if ( !IDA_LOBYTE(this->m_C) ) /*0x4f2a00*/
    return 0; /*0x4f2a08*/
  m_8 = this->m_8; /*0x4f2a0e*/
  result = 0; /*0x4f2a11*/
  if ( m_8 <= 0 ) /*0x4f2a15*/
    return -1; /*0x4f2a2c*/
  for ( i = *(unsigned int **)&this->m_1[3]; *i != *a2; ++i ) /*0x4f2a1b*/
  {
    if ( ++result >= m_8 ) /*0x4f2a2a*/
      return -1; /*0x4f2a2a*/
  }
  return result; /*0x4f2a0a*/
}
} // namespace gamemd

// 0x4F2A40
namespace gamemd {
unsigned int HouseClass_24::Write(int a2)
{
  if ( IDA_LOBYTE(this->m_C) ) /*0x4f2a40*/
    return (unsigned int)(a2 - *(unsigned int *)&this->m_1[3]) >> 2; /*0x4f2a55*/
  else
    return 0; /*0x4f2a47*/
}
} // namespace gamemd

// 0x4F2B40
namespace gamemd {
unsigned int * HouseClass::vt_placeholder_09()
{
  ++this->q008; /*0x4f2b42*/
  return this; /*0x4f2b45*/
}
} // namespace gamemd

// 0x4F2B50
namespace gamemd {
unsigned int * HouseClass::vt_placeholder_10()
{
  --this->q008; /*0x4f2b52*/
  return this; /*0x4f2b55*/
}
} // namespace gamemd

// 0x4F2B60
namespace gamemd {
VectorClass_flat * HouseClass_24::QueryInterface(char a2)
{
  void *v3; // eax

  v3 = *(void **)&this->m_1[3]; /*0x4f2b63*/
  *(unsigned int *)this->__pad_0 = (void*)&VectorClass_GraphicMenuItem___vftable; /*0x4f2b66*/
  if ( v3 && IDA_BYTE1(this->m_C) ) /*0x4f2b70*/
  {
    RA2_OPDEL(v3); /*0x4f2b78*/
    *(unsigned int *)&this->m_1[3] = 0; /*0x4f2b80*/
  }
  IDA_BYTE1(this->m_C) = 0; /*0x4f2b8b*/
  this->m_8 = 0; /*0x4f2b91*/
  if ( (a2 & 1) != 0 ) /*0x4f2b98*/
    RA2_OPDEL(); /*0x4f2b9b*/
  return this->__pad_0; /*0x4f2ba5*/
}
} // namespace gamemd

// 0x4F6830
namespace gamemd {
int HouseClass::QueryInterface(CCINIClass * aP0, const void * a1, unsigned int * a2)
{
  int *p_arrayIndex; // ecx
  HouseTypeClass **p_buildingType; // ecx
  int *relatedTags; // ecx

  if ( !a2 ) /*0x4f6836*/
    return -2147467261; /*0x4f6838*/
  *a2 = 0; /*0x4f6859*/
  if ( !memcmp(a1, &IID_IUnknown, 0x10u) ) /*0x4f685f*/
    *a2 = aP0; /*0x4f6863*/
  if ( !memcmp(a1, &IID_IHouse, 0x10u) ) /*0x4f6874*/
  {
    if ( aP0 ) /*0x4f687a*/
      p_arrayIndex = &aP0->arrayIndex; /*0x4f687c*/
    else
      p_arrayIndex = 0; /*0x4f6881*/
    *a2 = p_arrayIndex; /*0x4f6883*/
  }
  if ( !memcmp(a1, &IID_IPublicHouse, 0x10u) ) /*0x4f6893*/
  {
    if ( aP0 ) /*0x4f6899*/
      p_buildingType = &aP0->buildingType; /*0x4f689b*/
    else
      p_buildingType = 0; /*0x4f68a0*/
    *a2 = p_buildingType; /*0x4f68a2*/
  }
  if ( !memcmp(a1, &unk_7F7CD0, 0x10u) ) /*0x4f68b2*/
  {
    if ( aP0 ) /*0x4f68b8*/
      relatedTags = aP0->relatedTags; /*0x4f68ba*/
    else
      relatedTags = 0; /*0x4f68bf*/
    *a2 = relatedTags; /*0x4f68c1*/
  }
  if ( !memcmp(a1, &IID_IPersist, 0x10u) ) /*0x4f68d1*/
    *a2 = aP0; /*0x4f68d6*/
  if ( !memcmp(a1, &IID_IPersistStream, 0x10u) ) /*0x4f68e6*/
    *a2 = aP0; /*0x4f68ed*/
  if ( !*a2 ) /*0x4f68ef*/
    return -2147467262; /*0x4f68f4*/
  (*((void (__stdcall **)(HouseClass *))aP0->vtable0 + 1))(aP0); /*0x4f68ff*/
  return 0; /*0x4f683d*/
}
} // namespace gamemd

// 0x4F9610
namespace gamemd {
double HouseClass::GiveTiberium_Storage(AbstractClass * aP1, BuildingClass * aP2)
{
  this->siloMoney = Math::RoundToInt(aP1 * 5.0 + (double)(int)this->siloMoney); /*0x4f9628*/
  *(unsigned int *)&this->balance = Math::RoundToInt( /*0x4f965d*/
                    (double)*(int *)(*(unsigned int *)&BuildingClass_InstanceArray->gap0[4 * aP2] + 184)
                  * *(float *)(*(unsigned int *)&this->relatedTagsCapacity + 328)
                  * aP1
                  + (double)(int)*(unsigned int *)&this->balance);
  return aP1; /*0x4f9664*/
}
} // namespace gamemd

// 0x4F9970
namespace gamemd {
char HouseClass::UpdateAllSilos(int a2, int a3)
{
  int v3; // esi
  int v5; // eax
  double v6; // st7
  int v7; // ebx
  int i; // esi
  int v9; // ecx

  v3 = 0; /*0x4f9976*/
  if ( a3 ) /*0x4f997d*/
    v3 = Math::RoundToInt((double)a2 / (double)a3 * 4.0 + 0.5); /*0x4f9998*/
  v5 = 0; /*0x4f99a0*/
  if ( this->totalStorage ) /*0x4f999a*/
  {
    v6 = Float4::Sum((float *)(&this->altAllies4)); /*0x4f99ac*/
    v5 = Math::RoundToInt(v6 / (double)this->totalStorage * 4.0 + 0.5); /*0x4f99c3*/
  }
  if ( v3 != v5 ) /*0x4f99ca*/
  {
    v7 = this->bunkersCount; /*0x4f99cc*/
    for ( i = 0; i < v7; ++i ) /*0x4f99d3*/
    {
      v5 = this->absorbersCount; /*0x4f99d5*/
      v9 = *(unsigned int *)(v5 + 4 * i); /*0x4f99d8*/
      if ( v9 ) /*0x4f99dd*/
      {
        IDA_LOBYTE(v5) = *(unsigned char *)(v9 + 129); /*0x4f99df*/
        if ( !(unsigned char)v5 ) /*0x4f99e7*/
        {
          IDA_LOBYTE(v5) = *(unsigned char *)(*(unsigned int *)(v9 + 1312) + 5800); /*0x4f99ef*/
          if ( (unsigned char)v5 ) /*0x4f99f7*/
            IDA_LOBYTE(v5) = (*(int (__thiscall **)(int, int))(*(unsigned int *)v9 + 292))(v9, 2); /*0x4f99fd*/
        }
      }
    }
  }
  return v5; /*0x4f9a08*/
}
} // namespace gamemd

// 0x4F9B50
namespace gamemd {
int HouseClass::MakeAlly(int a2, char a3)
{
  return HouseClass::HandleAlliance(*(unsigned int *)&HouseClass_Array->gap0[4 * a2], a3); /*0x4f9b67*/
}
} // namespace gamemd

// 0x4FB920
namespace gamemd {
unsigned int * HouseClass::SDDTORAllAndTriggers()
{
  int v1; // esi
  int v3; // eax
  HouseClass **v4; // ecx
  unsigned int *result; // eax
  int v6; // esi
  int v7; // ecx

  v1 = 0; /*0x4fb926*/
  if ( *(int *)&stru_A8EB00.gapE4[164] > 0 ) /*0x4fb92d*/
  {
    v3 = *(unsigned int *)&stru_A8EB00.gapE4[152]; /*0x4fb92f*/
    do /*0x4fb959*/
    {
      v4 = *(HouseClass ***)(v3 + 4 * v1); /*0x4fb934*/
      if ( v4[135] == this ) /*0x4fb93d*/
      {
        if ( v4 ) /*0x4fb941*/
        {
          ((void (__thiscall *)(HouseClass **, int))(*v4)->NeedsSaveOrLink)(v4, 1); /*0x4fb947*/
          v3 = *(unsigned int *)&stru_A8EB00.gapE4[152]; /*0x4fb94a*/
        }
        --v1; /*0x4fb94f*/
      }
      ++v1; /*0x4fb956*/
    }
    while ( v1 < *(int *)&stru_A8EB00.gapE4[164] ); /*0x4fb959*/
  }
  result = (unsigned int *)dword_A8EAF8; /*0x4fb95b*/
  v6 = 0; /*0x4fb960*/
  if ( dword_A8EAF8 > 0 ) /*0x4fb964*/
  {
    result = unk_A8EAEC; /*0x4fb966*/
    do /*0x4fb99b*/
    {
      if ( *(unsigned int *)(*(unsigned int *)(result[v6] + 36) + 164) == this->relatedTagsCapacity ) /*0x4fb97c*/
      {
        v7 = result[v6]; /*0x4fb97e*/
        if ( v7 ) /*0x4fb983*/
        {
          (*(void (__thiscall **)(int, int))(*(unsigned int *)v7 + 32))(v7, 1); /*0x4fb989*/
          result = unk_A8EAEC; /*0x4fb98c*/
        }
        --v6; /*0x4fb991*/
      }
      ++v6; /*0x4fb998*/
    }
    while ( v6 < dword_A8EAF8 ); /*0x4fb99b*/
  }
  if ( this ) /*0x4fb99f*/
    return (*((unsigned int *(__thiscall **)(HouseClass *, int))this->vtable0 + 8))(this, 1); /*0x4fb9a7*/
  return result; /*0x4fb9aa*/
}
} // namespace gamemd

// 0x4FBF60
namespace gamemd {
char HouseClass::DroppedFlag(UnitClass * aP1, int a3)
{
  int v5; // eax
  void *v6; // eax
  char v7; // bl
  void *v8; // eax
  int v10; // [esp-8h] [ebp-14h]
  int v11; // [esp-8h] [ebp-14h]
  int v12; // [esp+8h] [ebp-4h] BYREF

  aP1 = aP1; /*0x4fbf63*/
  if ( !LayerClass::CoordinatesLegal(&MapClass_Instance, aP1) ) /*0x4fbf6f*/
    return 0; /*0x4fc055*/
  HouseClass::IsCellOccupied(*(&this->q8607), a3); /*0x4fbf8b*/
  v5 = *(&this->vtable23); /*0x4fbf92*/
  aP1 = *(int16_t **)aP1; /*0x4fbf95*/
  v10 = v5->productionFactory_plants_capacity; /*0x4fbfa3*/
  v6 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&aP1); /*0x4fbfaa*/
  v7 = HouseClass::MarkCellBuildable((int)v6, v10); /*0x4fbfb6*/
  if ( v7 /*0x4fc034*/
    || (a3 = 0,
        aP1 = (int16_t *)*LayerClass::Pathfinding_Find(
                           &MapClass_Instance,
                           0,
                           &v12,
                           aP1,
                           1,
                           -1,
                           0,
                           0,
                           1,
                           1,
                           0,
                           0,
                           0,
                           1,
                           (int16_t *)&a3,
                           0,
                           0),
        aP1 != (int16_t *)g_ControlGroupState)
    && (v11 = *(unsigned int *)(*(&this->vtable23) + 184),
        v8 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&aP1),
        (v7 = HouseClass::MarkCellBuildable((int)v8, v11)) != 0) )
  {
    *(&this->q8607) = (int)CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&aP1); /*0x4fc045*/
  }
  return v7; /*0x4fc04e*/
}
} // namespace gamemd

// 0x4FC060
namespace gamemd {
char HouseClass::PickedUpFlag(ObjectClass * aP1, char a3)
{
  if ( !aP1 || *(unsigned char *)(aP1 + 129) ) /*0x4fc06c*/
    return 0; /*0x4fc0a8*/
  HouseClass::IsCellOccupied(this->ourFlagCoords[0], a3); /*0x4fc084*/
  HouseClass::SetPrimaryFactory((HouseClass *)aP1, *(unsigned int *)(this->relatedTagsCapacity + 184)); /*0x4fc095*/
  this->ourFlagCoords[0] = aP1; /*0x4fc09a*/
  return 1; /*0x4fc0a0*/
}
} // namespace gamemd

// 0x509130
namespace gamemd {
void HouseClass::AcquiredThreatNode()
{
  this->hasThreatNode = 1; /*0x509130*/
}
} // namespace gamemd

// 0x50BD10
namespace gamemd {
char HouseClass::ReshroudMap()
{
  char result; // al

  result = IDA_BYTE2(this->HouseClass_field_timer_B[2]); /*0x50bd10*/
  if ( !result ) /*0x50bd18*/
    return ShroudClass::Reset((ShroudClass *)&stru_87F5F0.__pad_58[416], (int)this); /*0x50bd20*/
  return result; /*0x50bd25*/
}
} // namespace gamemd

// 0x50E1B0
namespace gamemd {
BOOL HouseClass::GainedPoweredCenter(int a2)
{
  return this->poweredUnitCenters > 0; /*0x50e1bd*/
}
} // namespace gamemd

// 0x50E340
namespace gamemd {
int HouseClass::COMStub_Ret1_1(int a1)
{
  return 1; /*0x50e345*/
}
} // namespace gamemd

// 0x50E350
namespace gamemd {
int HouseClass::COMStub_Ret1_2(int a1)
{
  return 1; /*0x50e355*/
}
} // namespace gamemd

// 0x53A130
namespace gamemd {
char HouseClass::IonSensitivesShouldBeOffline()
{
  return 0; /*0x53a132*/
}
} // namespace gamemd

// 0x54B980
namespace gamemd {
char HouseClass::Set()
{
  unsigned int *v2; // eax
  unsigned int *Value; // eax
  int v4; // ecx
  int v6; // [esp+Ch] [ebp-4h] BYREF

  IDA_LOBYTE(v2) = (*((int (__stdcall **)(void **))this->vtable1 + 4))(&this->vtable1); /*0x54b98b*/
  if ( (unsigned char)v2 ) /*0x54b990*/
  {
    (*(void (__thiscall **)(void *, unsigned int, int))(*(unsigned int *)this->vtable3 + 1348))(this->vtable3, 0, 1072693248); /*0x54b9a4*/
    Value = ProgressTimer::GetValue((ProgressTimer *)((char *)this->vtable3 + 904), &v6); /*0x54b9b8*/
    FacingClass::Set_SyncLog((char *)&this->repairStationsCount, Value); /*0x54b9c1*/
    v4 = this->relatedTags[0]; /*0x54b9c6*/
    this->absorbersCapacity = 0; /*0x54b9cc*/
    this->bunkersCount = 0; /*0x54b9cf*/
    this->bunkers[0] = 0; /*0x54b9d2*/
    this->bunkersCapacity = 0; /*0x54b9d5*/
    this->occupiables[0] = v4; /*0x54b9d8*/
    IDA_LOBYTE(v2) = HouseClass::IonSensitivesShouldBeOffline(); /*0x54b9e4*/
    if ( !(unsigned char)v2 ) /*0x54b9ec*/
    {
      v2 = (unsigned int *)(*(int (__thiscall **)(void *, int *))(*(unsigned int *)this->vtable3 + 756))(this->vtable3, &v6); /*0x54b9f8*/
      if ( *v2 == dword_ABC588 ) /*0x54ba08*/
        IDA_LOBYTE(v2) = GadgetGrid::InsertItem((GadgetGrid *)&g_CellClassManager, (int)this->vtable3); /*0x54ba20*/
      this->unitRepairStations[0] = 1; /*0x54ba25*/
    }
  }
  return (char)v2; /*0x54ba2c*/
}
} // namespace gamemd

// 0x6ABC60
namespace gamemd {
int HouseClass::GetStatus(IUnknown * aP1)
{
  int v2; // edx

  if ( this == (HouseClass *)15 || this == (HouseClass *)16 ) /*0x6abc68*/
    return 2; /*0x6abcbf*/
  if ( this == (HouseClass *)1 || this == (HouseClass *)40 || this == (HouseClass *)2 || this == (HouseClass *)3 ) /*0x6abc7c*/
    return 3; /*0x6abcb7*/
  if ( this == (HouseClass *)6 || this == (HouseClass *)7 ) /*0x6abc86*/
    return GetHouseTechLevel((int)this, v2) == 5; /*0x6abcb2*/
  if ( this == (HouseClass *)57 || this == (HouseClass *)32 || this == (HouseClass *)31 ) /*0x6abc95*/
    return 1; /*0x6abc9d*/
  return -1; /*0x6abc9a*/
}
} // namespace gamemd
