// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/TeamClass_e4.hpp"
#include "e4/classes/FactoryClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/Sidebar_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/TeamTypeClass_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/Draw_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/VectorClass_ptr_ConvertClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Skirmish_e4.hpp"
#include "e4/classes/MultiplayerGameMode_e4.hpp"
#include "e4/classes/SideClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/GadgetClass_e4.hpp"
#include "e4/classes/SidebarClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/SuperClass_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/RadarClass_e4.hpp"
#include "e4/classes/_w14_nocarrier_e4.hpp"
#include "e4/classes/CreateTeamCommand_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/Vector4_e4.hpp"  // G42.36 C2027 supply
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers
// ==== G42.57w9 data-label supply (IDA truth; e4_globals pending) ====
extern unsigned int a2;  // data: 0x822bc0 truth(IDA G42.57w9)


// 0x4FA350
namespace gamemd {  // G42.18 ns repair
AbstractClass * * Sidebar::StartSidebarProduction(HouseClass *a1, int aP2, char aP3, char a5)
{
  HouseClass *v6; // ebx
  int v7; // esi
  int v8; // eax
  int v9; // ebp
  int v10; // esi
  TeamTypeClass *v11; // eax
  int result; // eax
  char v13; // bl
  int v14; // ecx
  int Status; // eax
  char v16; // bl
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  int v20; // ecx
  char v21; // [esp+23h] [ebp-11h]
  int v22; // [esp+24h] [ebp-10h]
  char *v23; // [esp+28h] [ebp-Ch]
  char v24; // [esp+2Ch] [ebp-8h]

  if ( aP2 >= 0 ) /*0x4fa35f*/
  {
    v6 = a1; /*0x4fa36d*/
    v8 = TechnoTypeClass::GetByTypeAndIndex((int)a1, aP2); /*0x4fa375*/
    if ( a1 == 6 || a1 == 7 ) /*0x4fa382*/
      v22 = v8->qE08; /*0x4fa394*/
    else
      v22 = 0; /*0x4fa384*/
    v7 = v22; /*0x4fa398*/
  }
  else
  {
    v6 = a1; /*0x4fa361*/
    v7 = 0; /*0x4fa365*/
    v22 = 0; /*0x4fa367*/
  }
  v23 = (char *)&v6[-1].HouseClass_field_160B4 + 3; /*0x4fa3a2*/
  switch ( (unsigned int)v6 ) /*0x4fa3b0*/
  {
    case 1u: /*0x4fa3b0*/
    case 0x28u: /*0x4fa3b0*/
      if ( aP3 ) /*0x4fa3c9*/
        v21 = this->u32_53D3; /*0x4fa3d1*/
      else
        v21 = this->u32_53D2; /*0x4fa3dd*/
      break; /*0x4fa3d5*/
    case 2u: /*0x4fa3b0*/
    case 3u: /*0x4fa3b0*/
      v21 = this->u32_53D0; /*0x4fa406*/
      break; /*0x4fa40a*/
    case 6u: /*0x4fa3b0*/
    case 7u: /*0x4fa3b0*/
      if ( v7 == 5 ) /*0x4fa3e6*/
        v21 = this->u32_53D8; /*0x4fa3ee*/
      else
        v21 = this->u32_53D4; /*0x4fa3fa*/
      break; /*0x4fa3f2*/
    case 0xFu: /*0x4fa3b0*/
    case 0x10u: /*0x4fa3b0*/
      v21 = this->u32_53D1; /*0x4fa3bd*/
      break; /*0x4fa3c1*/
    default:
      v21 = 0; /*0x4fa40c*/
      break; /*0x4fa40c*/
  }
  ((int)v6)->Dispatch(aP3, v7, 0); /*0x4fa41c*/
  v9 = TechnoTypeClass::GetByTypeAndIndex((int)v6, aP2); /*0x4fa42a*/
  v24 = 0; /*0x4fa440*/
  if ( !(*(int (**)(int, unsigned int, int, int, int))(*(unsigned int *)v9 + 148))(v9, 0, 1, 1, this) ) /*0x4fa438*/
  {
    if ( !a5 || !(*(int (**)(int, int, unsigned int, int, int))(*(unsigned int *)v9 + 148))(v9, 1, 0, 1, this) ) /*0x4fa45b*/
    {
      LABEL_40:
      Debug::Log(); /*0x4fa533*/
      return (gamemd::AbstractClass **)(3); /*0x4fa550*/
    }
    v24 = 1; /*0x4fa465*/
  }
  switch ( (unsigned int)v6 ) /*0x4fa47b*/
  {
    case 1u: /*0x4fa47b*/
    case 0x28u: /*0x4fa47b*/
      if ( aP3 ) /*0x4fa4b0*/
        v10 = this->u32_53B8; /*0x4fa4b2*/
      else
        v10 = this->u32_53B4; /*0x4fa4ba*/
      break; /*0x4fa4b8*/
    case 2u: /*0x4fa47b*/
    case 3u: /*0x4fa47b*/
      v10 = this->u32_53AC; /*0x4fa4d7*/
      break; /*0x4fa4dd*/
    case 6u: /*0x4fa47b*/
    case 7u: /*0x4fa47b*/
      if ( v7 == 5 ) /*0x4fa4c5*/
        v10 = this->u32_53CC; /*0x4fa4c7*/
      else
        v10 = this->u32_53BC; /*0x4fa4cf*/
      break; /*0x4fa4cd*/
    case 0xFu: /*0x4fa47b*/
    case 0x10u: /*0x4fa47b*/
      v10 = this->u32_53B0; /*0x4fa482*/
      break; /*0x4fa488*/
    default:
      v10 = 0; /*0x4fa4df*/
      break; /*0x4fa4df*/
  }
  if ( !v10 ) /*0x4fa4e3*/
  {
    v11 = (TeamTypeClass *)operator new(0x74u); /*0x4fa4e7*/
    if ( !v11 ) /*0x4fa4f1*/
      goto LABEL_40; /*0x4fa4f1*/
    v10 = (v11)->Construct(); /*0x4fa4fa*/
    if ( !v10 ) /*0x4fa4fe*/
      goto LABEL_40; /*0x4fa4fe*/
  }
  if ( v10->queuedCapacity && !v10->isSuspended && v6 == 7 ) /*0x4fa531*/
    goto LABEL_40; /*0x4fa531*/
  switch ( (unsigned int)v6 ) /*0x4fa564*/
  {
    case 1u: /*0x4fa564*/
    case 0x28u: /*0x4fa564*/
      if ( aP3 ) /*0x4fa571*/
        this->u32_53B8 = v10; /*0x4fa573*/
      else
        this->u32_53B4 = v10; /*0x4fa57b*/
      break; /*0x4fa579*/
    case 2u: /*0x4fa564*/
    case 3u: /*0x4fa564*/
      this->u32_53AC = v10; /*0x4fa5a2*/
      break; /*0x4fa5a2*/
    case 6u: /*0x4fa564*/
    case 7u: /*0x4fa564*/
      if ( v22 == 5 ) /*0x4fa590*/
        this->u32_53CC = v10; /*0x4fa592*/
      else
        this->u32_53BC = v10; /*0x4fa59a*/
      break; /*0x4fa598*/
    case 0xFu: /*0x4fa564*/
    case 0x10u: /*0x4fa564*/
      this->u32_53B0 = v10; /*0x4fa583*/
      break; /*0x4fa589*/
    default:
      break;
  }
  v13 = 0; /*0x4fa5a8*/
  if ( v10->isSuspended ) /*0x4fa5a8*/
  {
    v14 = v10->q058; /*0x4fa5b1*/
    if ( v14 ) /*0x4fa5b6*/
    {
      if ( (*(int (**)(int))(*(unsigned int *)v14 + 132))(v14) == v9 ) /*0x4fa5c2*/
      {
        v13 = 1; /*0x4fa5c4*/
        LABEL_55:
        if ( !v10->abstractFlags || a5 || v13 ) /*0x4fa5f6*/
        {
          v16 = v10->isSuspended; /*0x4fa622*/
          ProductionClass::StartTimer(v10, v24); /*0x4fa628*/
          if ( !v16 && *(unsigned int *)&dword_A8B238 && this->u32_1EC ) /*0x4fa63a*/
          {
            v17 = (*(int (**)(unsigned int))(*v10->q058 + 132))(v10->q058); /*0x4fa649*/
            v18 = (int)(54 * ((int)dword_A8B558 * (int)dword_A8B550 / 0x3Cu)) /*0x4fa67b*/
            / (*(int (**)(int))(*(unsigned int *)v17 + 136))(v17);
            if ( v18 >= 53 ) /*0x4fa680*/
              v18 = 53; /*0x4fa682*/
            if ( v21 ) /*0x4fa68d*/
              v10->production = v18; /*0x4fa68f*/
          }
          if ( dword_A83D4C == (Object *)this ) /*0x4fa698*/
            Sidebar::FindProductionType((Sidebar *)&DataGlobal_87F7E8, v10, (int)a1, aP2); /*0x4fa6aa*/
          return 0; /*0x4fa6b2*/
        }
        else
        {
          Status = (a1)->GetStatus(0); /*0x4fa602*/
          ((Sidebar *)((int *)&DataGlobal_87F7E8))->ActivateTab(Status); /*0x4fa60d*/
          return 0; /*0x4fa615*/
        }
      }
    }
  }
  if ( ((FactoryClass *)(v10))->DemandProduction(v9, this, a5) ) /*0x4fa5d1*/
    goto LABEL_55; /*0x4fa5df*/
  Debug::Log(); /*0x4fa6c4*/
  if ( v10->abstractFlags || v10->q058 ) /*0x4fa6d9*/
    return (gamemd::AbstractClass **)(3); /*0x4fa807*/
  Debug::Log(); /*0x4fa6ec*/
  Debug::Log(); /*0x4fa6fc*/
  Debug::Log(); /*0x4fa70a*/
  v19 = v10->q058; /*0x4fa70f*/
  if ( v19 ) /*0x4fa717*/
    (*(void (**)(int))(*(unsigned int *)v19 + 44))(v19); /*0x4fa71b*/
  Debug::Log(); /*0x4fa729*/
  v20 = v10->q058; /*0x4fa72e*/
  if ( v20 ) /*0x4fa736*/
    (*(void (**)(int))(*(unsigned int *)v20 + 64))(v20); /*0x4fa73a*/
  Debug::Log(); /*0x4fa748*/
  Debug::Log(); /*0x4fa758*/
  (*(void (**)(int, int))(v10->NeedsSaveOrLink)(v10, 1); /*0x4fa76a*/
  switch ( (unsigned int)v23 ) /*0x4fa782*/
  {
    case 0u: /*0x4fa782*/
    case 0x27u: /*0x4fa782*/
      if ( aP3 ) /*0x4fa78f*/
      this->u32_53B8 = 0; /*0x4fa791*/
      else
        this->u32_53B4 = 0; /*0x4fa7a6*/
      result = 3; /*0x4fa79a*/
      break; /*0x4fa7a3*/
    case 1u: /*0x4fa782*/
    case 2u: /*0x4fa782*/
      this->u32_53AC = 0; /*0x4fa801*/
      return (gamemd::AbstractClass **)(3); /*0x4fa801*/
    case 5u: /*0x4fa782*/
    case 6u: /*0x4fa782*/
      if ( v22 == 5 ) /*0x4fa7d5*/
      this->u32_53CC = 0; /*0x4fa7d7*/
      else
        this->u32_53BC = 0; /*0x4fa7ec*/
      result = 3; /*0x4fa7e0*/
      break; /*0x4fa7e9*/
    case 0xEu: /*0x4fa782*/
    case 0xFu: /*0x4fa782*/
      this->u32_53B0 = 0; /*0x4fa7bb*/
      result = 3; /*0x4fa7c4*/
      break; /*0x4fa7cd*/
    default:
      return (gamemd::AbstractClass **)(3);
  }
  return (gamemd::AbstractClass **)(result); /*0x4fa4a0*/
}
}  // G42.18 ns repair
// 0x5007A0
namespace gamemd {
int Sidebar::Dispatch(IUnknown * aP1, char a3, int a4, char a5, void *a5_2)
{
  char result; // al

  result = (char)(a5_2 - 1); /*0x5007a5*/
  switch ( a5_2 ) /*0x5007b7*/
  {
    case 1: /*0x5007b7*/
    case 40: /*0x5007b7*/
      goto LABEL_3;
    case 2: /*0x5007b7*/
    case 3: /*0x5007b7*/
      aP1->HouseClass_field_53D0 = a5_2; /*0x500807*/
      break; /*0x500807*/
    case 6: /*0x5007b7*/
    case 7: /*0x5007b7*/
      if ( a5_2 == 5 ) /*0x5007e5*/
    {
        aP1->u32_53D8 = a5_2; /*0x5007ec*/
    }
      else
    {
        aP1->u32_53D4 = a5_2; /*0x5007fa*/
        result = (char)(a5_2); /*0x5007f5*/
    }
      break; /*0x5007f2*/
    case 15: /*0x5007b7*/
    case 16: /*0x5007b7*/
      aP1->u32_53D1 = a5_2; /*0x5007be*/
    LABEL_3:
      result = (char)(a5_2); /*0x5007c4*/
      if ( a5_2 ) /*0x5007ca*/
        aP1->u32_53D3 = a5_2; /*0x5007cc*/
      else
        aP1->u32_53D2 = a5_2; /*0x5007d6*/
      break; /*0x5007d3*/
    default:
      return result;
  }
  return result; /*0x5007d2*/
}
}
// 0x533F50
namespace gamemd {
CreateTeamCommand * * Sidebar::ScrollSidebarSkipGame(void *a1)
{

  int result; // eax
  int v2; // edi

  result = dword_87F668; /*0x533f50*/
  v2 = 0; /*0x533f59*/
  if ( dword_87F668 > 0 ) /*0x533f5f*/
  {
    while ( strcmp( /*0x533f9f*/
              (const char *)(*(int (**)(unsigned int))(**((unsigned int **)dword_87F65C + v2) + 4))(*((unsigned int *)dword_87F65C + v2)),
              this) )
    {
      result = dword_87F668; /*0x533fa1*/
      if ( ++v2 >= dword_87F668 ) /*0x533fa9*/
        return result; /*0x533fa9*/
    }
    return (*(int (**)(unsigned int, unsigned int))(**((unsigned int **)dword_87F65C + v2) + 32))( /*0x533fbc*/
             *((unsigned int *)dword_87F65C + v2),
             0);
  }
  return result; /*0x533fab*/

}
}
// 0x636310
namespace gamemd {
TechnoClass * * Sidebar::CancelSidebarProductionQueue(int * Block)
{

  int v2; // ebx
  int i; // ebp
  Array *v4; // edi
  int Value; // eax
  void *v6; // eax
  int v7; // eax
  House *v8; // ecx
  unsigned int v9; // edi
  int *p_Sidebar_field_0x4; // edi
  int v11; // eax
  int v12; // ebx
  int j; // ebp
  unsigned int LeaderIndex; // eax
  void *Sidebar_field_0x8; // eax
  void *Block; // [esp+14h] [ebp-8h] BYREF
  int v17; // [esp+18h] [ebp-4h] BYREF

  v2 = *(unsigned int *)this->__pad_14; /*0x636319*/
  for ( i = 0; i < v2; ++i ) /*0x636327*/
  {
    v4 = *(Array **)(this->Sidebar_field_0x8 + 4 * i); /*0x63632c*/
    Value = Array::FindValue(v4, *(unsigned int *)this->__pad_0); /*0x636334*/
    if ( Value == -1 ) /*0x63633c*/
      v6 = 0; /*0x63633e*/
    else
      v6 = *(void **)(v4->Array_field_0x4 + 4 * Value); /*0x636345*/
    Block = v6; /*0x63634a*/
    if ( v6 ) /*0x63634e*/
    {
      FactoryClass::FinishProduction((int *)v4->__pad_0, (int)v6); /*0x636353*/
      __3_YAXPAX_Z(*((void **)Block + 1)); /*0x636360*/
      v7 = (*(int (**)(Array *, void **))(*(unsigned int *)v4->__pad_0 + 16))(v4, &Block); /*0x636371*/
      if ( v7 != -1 ) /*0x636377*/
        Vector4::EraseAt_Copy((Vector4 *)v4, v7); /*0x63637c*/
      __3_YAXPAX_Z(Block); /*0x636386*/
      if ( !v4->Array_field_0x10 && v4 ) /*0x636397*/
        FactoryClass::RemoveFromArrays((FactoryClass *)v4, 1); /*0x63639d*/
    }
  }
  if ( v2 ) /*0x6363ad*/
  {
    Block = *(void **)this->__pad_0; /*0x6363b1*/
    v8 = (House *)*((unsigned int *)Block + 135); /*0x6363b5*/
    v9 = *&v8->u32_30; /*0x6363bb*/
    if ( (unsigned __int8)House::IsHumanPlayer(v8) && *(int *)((char *)&stru_A83CD9.estimatedHealth + 3) ) /*0x6363ce*/
      v9 = *(unsigned int *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) + 48); /*0x6363d0*/
    DecFactoryClassCounter(v9); /*0x6363d5*/
    VectorClass::EraseAt((DynamicVectorClass *)&stru_AC4B48.__pad_B8[64], (int)&Block); /*0x6363e4*/
  }
  p_Sidebar_field_0x4 = &this->Sidebar_field_0x4; /*0x6363ec*/
  (*(void (**)(int *))(this->Sidebar_field_0x4 + 12))(&this->Sidebar_field_0x4); /*0x6363f1*/
  this->u8_98 = 0; /*0x6363f7*/
  *&this->u32_8C = -1; /*0x636400*/
  *&this->u32_90 = -1; /*0x636406*/
  *&this->u32_94 = -1; /*0x63640c*/
  this->u8_99 = 0; /*0x636412*/
  *(unsigned int *)this->__pad_0 = 0; /*0x636419*/
  if ( this ) /*0x63641f*/
  {
    if ( *(unsigned int *)this->__pad_0 ) /*0x636425*/
      BuildingClass::SetType(*(BuildingClass **)this->__pad_0, 0); /*0x63642d*/
    Block = this; /*0x636437*/
    if ( !stru_AC4B48.__pad_194[25] ) /*0x63643d*/
    {
      v11 = (*(int (**)(char *, void **))(*(unsigned int *)&stru_AC4B48.__pad_B8[120] + 16))( /*0x63644f*/
              &stru_AC4B48.__pad_B8[120],
              &Block);
      if ( v11 != -1 ) /*0x636454*/
        Sidebar::RemoveItem((Sidebar *)&stru_AC4B48.__pad_B8[120], v11); /*0x63645c*/
    }
    v12 = *(unsigned int *)this->__pad_14; /*0x636461*/
    for ( j = 0; j < v12; ++j ) /*0x63646f*/
      TeamClass::DestroyAllMembers(*(TeamClass **)(this->Sidebar_field_0x8 + 4 * j), *(unsigned int **)this->__pad_0); /*0x63647a*/
    if ( v12 ) /*0x63648a*/
    {
      v17 = *(unsigned int *)this->__pad_0; /*0x63648e*/
      LeaderIndex = TeamClass::GetLeaderIndex((TeamClass *)v17); /*0x636492*/
      DecFactoryClassCounter(LeaderIndex); /*0x636499*/
      VectorClass::EraseAt((DynamicVectorClass *)&stru_AC4B48.__pad_B8[64], (int)&v17); /*0x6364a8*/
    }
    (*(void (**)(int *))(*p_Sidebar_field_0x4 + 12))(&this->Sidebar_field_0x4); /*0x6364b1*/
    this->u8_98 = 0; /*0x6364b7*/
    *&this->u32_8C = -1; /*0x6364be*/
    *&this->u32_90 = -1; /*0x6364c4*/
    *&this->u32_94 = -1; /*0x6364ca*/
    this->u8_99 = 0; /*0x6364d0*/
    Sidebar_field_0x8 = (void *)this->Sidebar_field_0x8; /*0x6364d7*/
    *p_Sidebar_field_0x4 = (int)&vt_VectorClass_PlanningNodeClass; /*0x6364de*/
    if ( Sidebar_field_0x8 ) /*0x6364e4*/
    {
      if ( BYTE1(this->Sidebar_field_0x10) ) /*0x6364e6*/
      {
        __3_YAXPAX_Z(Sidebar_field_0x8); /*0x6364ee*/
        this->Sidebar_field_0x8 = 0; /*0x6364f6*/
      }
    }
    BYTE1(this->Sidebar_field_0x10) = 0; /*0x6364fa*/
    this->Sidebar_field_0xC = 0; /*0x6364fe*/
    __3_YAXPAX_Z(this); /*0x636501*/
  }

}
}
// 0x63F040
namespace gamemd {
char Sidebar::RemoveItem(int a2, void *a2_2)
{

  char *Sidebar_field_0x10; // edx
  int v3; // eax
  char *v4; // edx

  Sidebar_field_0x10 = (char *)a2_2->Sidebar_field_0x10; /*0x63f040*/
  v3 = (int)(a2_2); /*0x63f043*/
  if ( a2_2 >= (int)Sidebar_field_0x10 ) /*0x63f049*/
    return 0; /*0x63f06c*/
  v4 = Sidebar_field_0x10 - 1; /*0x63f04b*/
  a2_2->Sidebar_field_0x10 = v4; /*0x63f04e*/
  if ( a2_2 < (int)v4 ) /*0x63f051*/
  {
    do /*0x63f064*/
    {
      ++v3; /*0x63f057*/
      *(unsigned int *)(a2_2->Sidebar_field_0x4[0] + 4 * v3 - 4) = *(unsigned int *)(a2_2->Sidebar_field_0x4[0] + 4 * v3); /*0x63f05b*/
    }
    while ( v3 < (int)a2_2->Sidebar_field_0x10 ); /*0x63f064*/
  }
  return 1; /*0x63f069*/

}
}
// 0x63FB20
namespace gamemd {
ObjectClass * * Sidebar::Render(char a2, void *a2_1, void *a3, void *a4)
{

  int v3; // ebx
  int v4; // esi
  int *v5; // eax
  int v6; // edi
  int v7; // ecx
  int v8; // edx
  int v9; // edi
  int v10; // eax
  int v11; // edi
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int result; // eax
  int NeedsSaveOrLink; // [esp+4h] [ebp-20h] BYREF
  int v17; // [esp+8h] [ebp-1Ch]
  int v18[4]; // [esp+14h] [ebp-10h] BYREF

  if ( (a2 || ((this->field_150C) & 0xFF)) && byte_884B8D ) /*0x63fb43*/
  {
    (this->field_150C) = ((this->field_150C) & ~0xFF) | ((0) & 0xFF); /*0x63fb49*/
    g_TooltipActive = 1; /*0x63fb55*/
    if ( dword_A8B230[374].NeedsSaveOrLink ) /*0x63fb5d*/
      v3 = 0; /*0x63fb70*/
    else
      v3 = 5; /*0x63fb69*/
    NeedsSaveOrLink = (int)dword_A8B230[374].NeedsSaveOrLink; /*0x63fb78*/
    v4 = g_DSurface_SidebarBounds + 69; /*0x63fb80*/
    v5 = (int *)(*((int (**)(DSurface *, int *))DSurface_Sidebar + 30))( /*0x63fb8c*/
                  DSurface_Sidebar,
                  &NeedsSaveOrLink);
    v6 = this->field_1530; /*0x63fb91*/
    v18[0] = *v5; /*0x63fb97*/
    v18[1] = v5[1]; /*0x63fb9e*/
    v18[2] = v5[2]; /*0x63fba5*/
    v18[3] = v5[3]; /*0x63fbb1*/
    v7 = *(unsigned int *)this->__pad_1534; /*0x63fbc6*/
    v8 = *(unsigned int *)this->__pad_152C; /*0x63fbce*/
    if ( (dword_B0B504 + 3) / 3 - v7 - v6 - v8 > 0 ) /*0x63fbdc*/
    {
      v9 = (dword_B0B504 + 3) / 3 - v7 - v6 - v8; /*0x63fbde*/
      do /*0x63fc24*/
      {
          NeedsSaveOrLink = v3; /*0x63fc13*/
          v17 = v4; /*0x63fc17*/
          DrawToSurfaceSHP( /*0x63fc1b*/
          (int)DSurface_Sidebar,
          *(int *)&g_SidebarConfig,
          *(int *)&dword_AC4E74,
          0,
          &NeedsSaveOrLink,
          v18,
          1024,
          0,
          0,
          0,
          1000,
          0,
          0,
          0,
          0,
          0);
          v4 += 3; /*0x63fc20*/
          --v9; /*0x63fc23*/
      }
      while ( v9 ); /*0x63fc24*/
    }
    v10 = *&this->u32_151C; /*0x63fc26*/
    v11 = 0; /*0x63fc2c*/
    if ( v10 > 0 && (v10 & 1) == 0 ) /*0x63fc3e*/
    {
        NeedsSaveOrLink = v3; /*0x63fc75*/
        v17 = v4; /*0x63fc79*/
        DrawToSurfaceSHP( /*0x63fc7d*/
        (int)DSurface_Sidebar,
        *(int *)&g_SidebarConfig,
        *(int *)&dword_AC4E74,
        4u,
        &NeedsSaveOrLink,
        v18,
        1024,
        0,
        0,
        0,
        1000,
        0,
        0,
        0,
        0,
        0);
        v4 += 3; /*0x63fc82*/
        v11 = 1; /*0x63fc85*/
    }
    v12 = *(unsigned int *)this->__pad_152C; /*0x63fc8a*/
    if ( v12 > 0 ) /*0x63fc92*/
    {
      if ( v11 < v12 ) /*0x63fc96*/
      {
        do /*0x63fce4*/
        {
            NeedsSaveOrLink = v3; /*0x63fccb*/
            v17 = v4; /*0x63fccf*/
            DrawToSurfaceSHP( /*0x63fcd3*/
            (int)DSurface_Sidebar,
            *(int *)&g_SidebarConfig,
            *(int *)&dword_AC4E74,
            1u,
            &NeedsSaveOrLink,
            v18,
            1024,
            0,
            0,
            0,
            1000,
            0,
            0,
            0,
            0,
            0);
            v4 += 3; /*0x63fcde*/
            ++v11; /*0x63fce1*/
        }
        while ( v11 < *(unsigned int *)this->__pad_152C ); /*0x63fce4*/
      }
      v11 = 0; /*0x63fce6*/
    }
    v13 = this->field_1530; /*0x63fce8*/
    if ( v13 > 0 ) /*0x63fcf0*/
    {
      if ( v11 < v13 ) /*0x63fcf4*/
      {
        do /*0x63fd42*/
        {
            NeedsSaveOrLink = v3; /*0x63fd29*/
            v17 = v4; /*0x63fd2d*/
            DrawToSurfaceSHP( /*0x63fd31*/
            (int)DSurface_Sidebar,
            *(int *)&g_SidebarConfig,
            *(int *)&dword_AC4E74,
            2u,
            &NeedsSaveOrLink,
            v18,
            1024,
            0,
            0,
            0,
            1000,
            0,
            0,
            0,
            0,
            0);
            v4 += 3; /*0x63fd3c*/
            ++v11; /*0x63fd3f*/
        }
        while ( v11 < this->field_1530 ); /*0x63fd42*/
      }
      v11 = 0; /*0x63fd44*/
    }
    v14 = *(unsigned int *)this->__pad_1534; /*0x63fd46*/
    if ( v14 > 0 && v11 < v14 ) /*0x63fd52*/
    {
      do /*0x63fda0*/
      {
          NeedsSaveOrLink = v3; /*0x63fd87*/
          v17 = v4; /*0x63fd8b*/
          DrawToSurfaceSHP( /*0x63fd8f*/
          (int)DSurface_Sidebar,
          *(int *)&g_SidebarConfig,
          *(int *)&dword_AC4E74,
          3u,
          &NeedsSaveOrLink,
          v18,
          1024,
          0,
          0,
          0,
          1000,
          0,
          0,
          0,
          0,
          0);
          v4 += 3; /*0x63fd9a*/
          ++v11; /*0x63fd9d*/
      }
      while ( v11 < *(unsigned int *)this->__pad_1534 ); /*0x63fda0*/
    }
  }
  LOBYTE(result) = ((RadarClass *)this)->Destru_vt16(a2); /*0x63fdac*/
  return (gamemd::ObjectClass **)(result); /*0x63fdb1*/

}
}
// 0x6A60A0
namespace gamemd {
int Sidebar::ActivateTab(int aP1)
{

  int v2; // esi
  int result = aP1; // eax /*0x6a60a0*/
  if ( aP1 == this->u32_14E7 ) /*0x6a60ac*/
  {
    this->u32_53A6 = 1; /*0x6a60b8*/
    *(&this->u8_F94 * aP1 + 5504) = 1; /*0x6a60c6*/
    return (int)(&dword_87F7E8)->MarkForRedraw(0, v2); /*0x6a60d2*/
  }
  return result; /*0x6a60d8*/

}
}
// 0x6A70E0
namespace gamemd {
AbstractClass * * Sidebar::FlushSidebarTooltip(char a2, void *a2_1)
{

  int v3; // esi
  int v4; // ebp
  int v5; // edi
  int v6; // eax
  unsigned int *v7; // eax
  unsigned int v8; // esi
  struct tagPOINT Point; // [esp+1Ch] [ebp-38h] BYREF
  int v10; // [esp+24h] [ebp-30h] BYREF
  LONG y; // [esp+28h] [ebp-2Ch]
  int v12; // [esp+2Ch] [ebp-28h]
  int v13; // [esp+30h] [ebp-24h]
  int v14; // [esp+34h] [ebp-20h] BYREF
  LONG v15; // [esp+38h] [ebp-1Ch]
  unsigned int v16; // [esp+3Ch] [ebp-18h]
  int v17; // [esp+40h] [ebp-14h]
  struct tagRECT Rect; // [esp+44h] [ebp-10h] BYREF

  if ( !this->u32_53A5 || !stru_A8E960.nextScenario[64] || !stru_A8E960.random[488] ) /*0x6a7109*/
    goto LABEL_25; /*0x6a7109*/
  GetClientRect(g_hWnd, &Rect); /*0x6a711b*/
  Point.x = Rect.left; /*0x6a7129*/
  Point.y = Rect.top; /*0x6a7137*/
  ClientToScreen(g_hWnd, &Point); /*0x6a713d*/
  if ( g_TooltipActive || a2 ) /*0x6a7153*/
  {
    g_TooltipActive = 1; /*0x6a723a*/
    goto LABEL_13; /*0x6a723a*/
  }
  g_TooltipActive = 0; /*0x6a7166*/
  if ( dword_8809F4 != dword_B07DC8
    || dword_8809F8 != dword_B07DCC
    || dword_8809FC != dword_B07DD0
    || dword_880A00 != dword_B07DD4 )
  {
LABEL_13:
    (*(void (**)(MouseClass *, DSurface *, int))(dword_887640->HandleClick_ph + 60))( /*0x6a7241*/
      dword_887640,
      DSurface_Sidebar,
      1);
    if ( dword_8809F4 == dword_B07DC8
      && dword_8809F8 == dword_B07DCC
      && dword_8809FC == dword_B07DD0
      && dword_880A00 == dword_B07DD4
      && !a2 )
    {
      if ( this->u32_53A8 )
      {
        y = Point.y; /*0x6a72d1*/
        v10 = Point.x + (stru_A8E960.random[8] != 0 ? dword_886FA8 : 0);
        v14 = 0; /*0x6a72f3*/
        v15 = 0; /*0x6a72f7*/
        v16 = dword_886F98; /*0x6a72fb*/
        v17 = 16; /*0x6a72ff*/
        v12 = dword_886F98; /*0x6a7303*/
        v13 = 16; /*0x6a7307*/
        (*(void (**)(DSurface *, int *, DSurface *, int *, unsigned int, int))(g_DSurface_Primary->DSurface_field_0x0 /*0x6a7312*/
                                                                                  + 8))(
          g_DSurface_Primary,
          &v10,
          DSurface_Sidebar,
          &v14,
          0,
          1);
        this->u32_53A8 = 0; /*0x6a7315*/
      }
      v3 = dword_886F98; /*0x6a7332*/
      v17 = g_DSurface_ViewBounds; /*0x6a733e*/
      v14 = 0; /*0x6a7348*/
      v4 = g_DSurface_SidebarBounds + Point.y; /*0x6a734e*/
      v15 = g_DSurface_SidebarBounds; /*0x6a7357*/
      v16 = dword_886F98; /*0x6a735b*/
      v5 = (stru_A8E960.random[8] != 0 ? dword_886FA8 : 0) + Point.x;
      v6 = (*(int (**)(DSurface *))(DSurface_Sidebar->DSurface_field_0x0 + 128))(DSurface_Sidebar); /*0x6a7363*/
      v10 = v5; /*0x6a7386*/
      y = v4; /*0x6a738a*/
      v12 = v3; /*0x6a738e*/
      v13 = v6 - g_DSurface_SidebarBounds; /*0x6a7392*/
      (*(void (**)(DSurface *, int *, DSurface *, int *, unsigned int, int))(g_DSurface_Primary->DSurface_field_0x0 /*0x6a739d*/
                                                                                + 8))(
        g_DSurface_Primary,
        &v10,
        DSurface_Sidebar,
        &v14,
        0,
        1);
    }
    else if ( g_TooltipActive )
    {
      v7 = (unsigned int *)(*(int (**)(DSurface *, int *))(DSurface_Sidebar->DSurface_field_0x0 + 120))( /*0x6a73be*/
                             DSurface_Sidebar,
                             &v10);
      v14 = 0; /*0x6a73dd*/
      v15 = 0; /*0x6a73e5*/
      v16 = v7[2]; /*0x6a73ec*/
      v8 = v7[3]; /*0x6a73f0*/
      y = Point.y; /*0x6a73fd*/
      v10 = Point.x + (stru_A8E960.random[8] != 0 ? dword_886FA8 : 0);
      v17 = v8; /*0x6a741b*/
      v12 = v16; /*0x6a741f*/
      v13 = v8; /*0x6a7423*/
      (*(void (**)(DSurface *, int *, DSurface *, int *, unsigned int, int))(g_DSurface_Primary->DSurface_field_0x0 /*0x6a742e*/
                                                                                + 8))(
        g_DSurface_Primary,
        &v10,
        DSurface_Sidebar,
        &v14,
        0,
        1);
    }
    else
    {
      v15 = Point.y + dword_8809F8; /*0x6a7458*/
      v14 = Point.x + dword_8809F4 + (stru_A8E960.random[8] != 0 ? dword_886FA8 : 0);
      v16 = dword_8809FC; /*0x6a746f*/
      v17 = dword_880A00; /*0x6a7473*/
      (*(void (**)(DSurface *, int *, DSurface *, int *, unsigned int, int))(g_DSurface_Primary->DSurface_field_0x0 /*0x6a747e*/
                                                                                + 8))(
        g_DSurface_Primary,
        &v14,
        DSurface_Sidebar,
        &dword_8809F4,
        0,
        1);
    }
    goto LABEL_24; /*0x6a73a0*/
  }
  if ( this->u32_53A8 )
  {
    (*(void (**)(MouseClass *, DSurface *, int))(dword_887640->HandleClick_ph + 60))( /*0x6a71c7*/
      dword_887640,
      DSurface_Sidebar,
      1);
    v15 = Point.y; /*0x6a71eb*/
    v14 = Point.x + (stru_A8E960.random[8] != 0 ? dword_886FA8 : 0);
    v10 = 0; /*0x6a720d*/
    y = 0; /*0x6a7211*/
    v12 = dword_886F98; /*0x6a7215*/
    v13 = 16; /*0x6a7219*/
    v16 = dword_886F98; /*0x6a721d*/
    v17 = 16; /*0x6a7221*/
    (*(void (**)(DSurface *, int *, DSurface *, int *, unsigned int, int))(g_DSurface_Primary->DSurface_field_0x0 /*0x6a722c*/
                                                                              + 8))(
      g_DSurface_Primary,
      &v14,
      DSurface_Sidebar,
      &v10,
      0,
      1);
    this->u32_53A8 = 0; /*0x6a722f*/
LABEL_24:
    byte_B0B519 = 1; /*0x6a7481*/
  }
LABEL_25:
  g_TooltipActive = 0; /*0x6a7488*/

}
}
// 0x6A9540
namespace gamemd {
int Sidebar_UpdateProductionDisplay(void * a1, void * a3)
{

  char result; // al
  int v5; // eax
  int v6; // ebx
  int v7; // ebp
  int v8; // eax
  int v9; // edi
  unsigned int *v10; // edx
  int v11; // eax
  int v12; // eax
  int v13; // edx
  int v14; // ebp
  int v15; // esi
  char v16; // bl
  int v17; // ebp
  int v18; // eax
  int v19; // eax
  int v20; // edx
  int v21; // ecx
  int v22; // eax
  unsigned int *v23; // ebx
  char ShouldDisableCameo; // al
  int Member09; // eax
  ObjectClass *v26; // ecx
  int v27; // ecx
  unsigned int *v28; // edi
  int v29; // eax
  int v30; // ecx
  unsigned int v31; // edi
  ConvertClass **v32; // eax
  int DSurface_field_0x0; // edx
  int v34; // edi
  int v35; // eax
  int v36; // eax
  const wchar_t *v37; // ebx
  int v38; // ecx
  int *TextBoundingRect; // eax
  int *v40; // eax
  wchar_t *StringCSF; // ebp
  int *v42; // eax
  int *v43; // eax
  int v44; // ebp
  int v45; // ebx
  int v46; // edi
  int v47; // esi
  unsigned int *v48; // eax
  unsigned int v49; // eax
  unsigned int v50; // eax
  __int16 *v51; // eax
  int v52; // edx
  int v53; // edx
  int v54; // eax
  int v55; // eax
  __int16 *v56; // esi
  int updated; // eax
  int v58; // edx
  int v59; // edx
  int v60; // ecx
  int v61; // esi
  int v62; // eax
  wchar_t *v63; // eax
  wchar_t *v64; // eax
  wchar_t *v65; // eax
  wchar_t *v66; // eax
  wchar_t *v67; // eax
  char v68; // [esp-Ah] [ebp-494h]
  wchar_t v69; // [esp-2h] [ebp-48Ch]
  __int16 v70; // [esp+10h] [ebp-47Ah]
  bool v71; // [esp+10h] [ebp-47Ah]
  char v72; // [esp+11h] [ebp-479h]
  char IsCliffWall; // [esp+12h] [ebp-478h]
  char v74; // [esp+13h] [ebp-477h]
  char v75; // [esp+14h] [ebp-476h]
  char v76; // [esp+15h] [ebp-475h]
  FactoryClass *v77; // [esp+16h] [ebp-474h]
  FactoryClass *BuildLimit; // [esp+16h] [ebp-474h]
  int v79; // [esp+1Ah] [ebp-470h] BYREF
  int v80; // [esp+1Eh] [ebp-46Ch]
  int v81; // [esp+22h] [ebp-468h]
  int v82; // [esp+26h] [ebp-464h]
  int v83; // [esp+2Ah] [ebp-460h]
  int *v84; // [esp+2Eh] [ebp-45Ch]
  int v85; // [esp+32h] [ebp-458h]
  int ProductionState; // [esp+36h] [ebp-454h]
  int v87; // [esp+3Ah] [ebp-450h]
  size_t BufferCount; // [esp+3Eh] [ebp-44Ch]
  int v89; // [esp+42h] [ebp-448h]
  int v90; // [esp+46h] [ebp-444h]
  int v91; // [esp+4Ah] [ebp-440h]
  int i; // [esp+4Eh] [ebp-43Ch]
  int v93[4]; // [esp+52h] [ebp-438h] BYREF
  int v94; // [esp+62h] [ebp-428h] BYREF
  int v95; // [esp+66h] [ebp-424h]
  int v96; // [esp+6Ah] [ebp-420h] BYREF
  int v97; // [esp+6Eh] [ebp-41Ch]
  int v98; // [esp+72h] [ebp-418h] BYREF
  int v99; // [esp+76h] [ebp-414h]
  int v100; // [esp+7Ah] [ebp-410h] BYREF
  int v101; // [esp+7Eh] [ebp-40Ch]
  int v102; // [esp+82h] [ebp-408h]
  int v103; // [esp+86h] [ebp-404h]
  int v104; // [esp+8Ah] [ebp-400h] BYREF
  int v105; // [esp+8Eh] [ebp-3FCh]
  int v106; // [esp+92h] [ebp-3F8h]
  int v107; // [esp+96h] [ebp-3F4h]
  int v108; // [esp+9Ah] [ebp-3F0h] BYREF
  int v109; // [esp+9Eh] [ebp-3ECh]
  int v110; // [esp+A2h] [ebp-3E8h]
  int v111; // [esp+A6h] [ebp-3E4h]
  int v112[4]; // [esp+AAh] [ebp-3E0h] BYREF
  int v113[2]; // [esp+BAh] [ebp-3D0h] BYREF
  int v114[2]; // [esp+C2h] [ebp-3C8h] BYREF
  int v115[2]; // [esp+CAh] [ebp-3C0h] BYREF
  int v116[2]; // [esp+D2h] [ebp-3B8h] BYREF
  int v117[2]; // [esp+DAh] [ebp-3B0h] BYREF
  int v118[2]; // [esp+E2h] [ebp-3A8h] BYREF
  unsigned int v119[4]; // [esp+EAh] [ebp-3A0h] BYREF
  int v120[4]; // [esp+FAh] [ebp-390h] BYREF
  int v121[2]; // [esp+10Ah] [ebp-380h] BYREF
  int v122[2]; // [esp+112h] [ebp-378h] BYREF
  int v123[2]; // [esp+11Ah] [ebp-370h] BYREF
  int v124[2]; // [esp+122h] [ebp-368h] BYREF
  wchar_t Destination[64]; // [esp+12Ah] [ebp-360h] BYREF
  int v126[4]; // [esp+1AAh] [ebp-2E0h] BYREF
  int v127[4]; // [esp+1BAh] [ebp-2D0h] BYREF
  int v128[4]; // [esp+1CAh] [ebp-2C0h] BYREF
  int v129[4]; // [esp+1DAh] [ebp-2B0h] BYREF
  wchar_t v130[20]; // [esp+1EAh] [ebp-2A0h] BYREF
  wchar_t v131[20]; // [esp+212h] [ebp-278h] BYREF
  wchar_t Format[20]; // [esp+23Ah] [ebp-250h] BYREF
  wchar_t v133[20]; // [esp+262h] [ebp-228h] BYREF
  wchar_t Buffer[256]; // [esp+28Ah] [ebp-200h] BYREF

  v81 = a1; /*0x6a9549*/
  result = *(unsigned char *)(a1 + 28); /*0x6a954d*/
  if ( result ) /*0x6a9552*/
  {
    if ( *(unsigned char *)(a1 + 60) || (result = a3) != 0 ) /*0x6a9568*/
    {
      v69 = a2; /*0x6a9570*/
      *(unsigned char *)(a1 + 60) = 0; /*0x6a9571*/
      g_TooltipActive = 1; /*0x6a957d*/
      v93[0] = 0; /*0x6a9584*/
      v93[1] = 0; /*0x6a9588*/
      v93[2] = (*(int (**)(DSurface *))(DSurface_Sidebar->DSurface_field_0x0 + 124))(DSurface_Sidebar); /*0x6a9597*/
      v5 = (*(int (**)(DSurface *))(DSurface_Sidebar->DSurface_field_0x0 + 128))(DSurface_Sidebar); /*0x6a959d*/
      v6 = *(int *)((char *)&stru_A83CD9.estimatedHealth + 3); /*0x6a95a3*/
      v7 = HouseClass_Observer; /*0x6a95a9*/
      v93[3] = v5; /*0x6a95af*/
      v8 = 0; /*0x6a95b3*/
      v76 = 0; /*0x6a95b7*/
      if ( *(int *)((char *)&stru_A83CD9.estimatedHealth + 3) == HouseClass_Observer ) /*0x6a95bc*/
        v8 = *(unsigned int *)(a1 + 84); /*0x6a95be*/
      v9 = *(unsigned int *)(a1 + 84); /*0x6a95c1*/
      if ( v8 < v9 ) /*0x6a95c6*/
      {
        v10 = (unsigned int *)(a1 + 4 * (v8 + 4 * (3 * v8 + 6) + 2)); /*0x6a95d0*/
        while ( *v10 != 1 && *v10 != 2 ) /*0x6a95dd*/
        {
          ++v8; /*0x6a95df*/
          v10 += 13; /*0x6a95e0*/
          if ( v8 >= v9 ) /*0x6a95e5*/
            goto LABEL_13; /*0x6a95e5*/
        }
        v76 = 1; /*0x6a95e9*/
      }
LABEL_13:
      v11 = 26; /*0x6a95ee*/
      if ( dword_A8B230[374].NeedsSaveOrLink ) /*0x6a95f3*/
        v11 = 18; /*0x6a9602*/
      v82 = 0; /*0x6a9622*/
      v12 = (*(unsigned char *)(a1 + 63) != 0) /*0x6a9648*/
          + (g_DSurface_ViewBounds - g_SidebarBounds - v11 + g_DSurface_SidebarBounds - 7) / 50;
      v89 = v12; /*0x6a964a*/
      if ( *(int *)((char *)&stru_A83CD9.estimatedHealth + 3) != HouseClass_Observer ) /*0x6a964e*/
      {
        if ( v12 > 0 ) /*0x6a9656*/
        {
          do /*0x6aa03d*/
          {
            for ( i = 0; i < 2; ++i ) /*0x6a965c*/
            {
              v75 = a3; /*0x6a967b*/
              v13 = *(unsigned int *)(v81 + 68); /*0x6a967f*/
              ProductionState = 0; /*0x6a9682*/
              v90 = 0; /*0x6a9686*/
              v83 = 0; /*0x6a968a*/
              BufferCount = 0; /*0x6a968e*/
              v14 = *(unsigned int *)(v81 + 32); /*0x6a96a0*/
              v87 = i + 2 * (v13 + v82); /*0x6a96a3*/
              v15 = v14 + i * dword_B0B4FC - DSurface_SidebarBounds; /*0x6a96b6*/
              v16 = 0; /*0x6a96bb*/
              v70 = 0; /*0x6a96bd*/
              v17 = v82 * dword_B0B500 + *(unsigned int *)(v81 + 36) + 1; /*0x6a96c2*/
              v18 = *(unsigned int *)(v81 + 56); /*0x6a96c6*/
              IsCliffWall = 0; /*0x6a96c9*/
              v91 = v17; /*0x6a96ce*/
              v19 = 56 * (i + 2 * v82 + 60 * v18) + 11566720; /*0x6a96fa*/
              if ( *(unsigned char *)(v81 + 63) ) /*0x6a96ea*/
              {
                v17 += *(unsigned int *)(v81 + 76) - dword_B0B500; /*0x6a970e*/
                v91 = v17; /*0x6a9710*/
              }
              v20 = *(unsigned int *)(v81 + 84); /*0x6a9714*/
              v77 = 0; /*0x6a9719*/
              v85 = 0; /*0x6a971d*/
              if ( v87 >= v20 ) /*0x6a9727*/
              {
                LOBYTE(v70) = 0; /*0x6a99be*/
              }
              else
              {
                if ( !*(unsigned char *)(v19 + 52) || (HIBYTE(v70) = 1, stru_A8E960.random[552]) ) /*0x6a9740*/
                  HIBYTE(v70) = 0; /*0x6a9742*/
                v21 = *(unsigned int *)(v81 + 52 * v87 + 92); /*0x6a974d*/
                v22 = v81 + 52 * v87; /*0x6a9754*/
                v84 = (int *)v22; /*0x6a9757*/
                if ( v21 == 31 ) /*0x6a975b*/
                {
                  v31 = *(unsigned int *)(v22 + 88); /*0x6a9936*/
                  v32 = (ConvertClass **)*((unsigned int *)dword_A8E334 + v31); /*0x6a993e*/
                  v77 = v32->q060; /*0x6a9944*/
                  if ( v31 >= dword_A8E340 ) /*0x6a9950*/
                    v90 = 0; /*0x6a995e*/
                  else
                    v90 = (int)v32[46]; /*0x6a9958*/
                  LOBYTE(v70) = 1; /*0x6a996b*/
                  IsCliffWall = !SuperClass::ShouldDrawProgress(*(SuperClass **)(*(unsigned int *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) /*0x6a998c*/
                                                                                           + 600)
                                                                               + 4 * v31));
                  BufferCount = (size_t)SuperClass::NameReadiness(*(SuperClass **)(*(unsigned int *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) /*0x6a999f*/
                                                                                             + 600)
                                                                                 + 4 * v31));
                  ProductionState = SidebarClass::GetProductionState(*(SidebarClass **)(*(unsigned int *)(*(int *)((char *)&stru_A83CD9.estimatedHealth + 3) /*0x6a99b1*/
                                                                                                  + 600)
                                                                                      + 4 * v31));
                  v16 = 0; /*0x6a99b5*/
                  v75 = 1; /*0x6a99b7*/
                }
                else
                {
                  v23 = (unsigned int *)TechnoTypeClass::GetByTypeAndIndex(v21, *(unsigned int *)(v22 + 88)); /*0x6a976b*/
                  v85 = (int)v23; /*0x6a976f*/
                  if ( v23 ) /*0x6a9773*/
                  {
                    v77 = v23->q060; /*0x6a9780*/
                    v74 = 0; /*0x6a9784*/
                    if ( v23->getAltitude() == 7 && v76 /*0x6a97f9*/
                      || !v23->Stub3(1, 1, 1, *(int *)((char *)&stru_A83CD9.estimatedHealth + 3))
                      || (v83 = TechnoTypeClass::GetByTypeAndIndex(v84[23], v84[22]),
                          v71 = HouseClass::CanBuild(
                                  *(HouseClass **)((char *)&stru_A83CD9.estimatedHealth + 3),
                                  v83,
                                  0,
                                  0) == -1,
                          ShouldDisableCameo = HouseClass::ShouldDisableCameo(
                                                 *(HouseClass **)((char *)&stru_A83CD9.estimatedHealth + 3),
                                                 v83),
                          v71)
                      || ShouldDisableCameo )
                    {
                      v74 = 1; /*0x6a97fb*/
                    }
                    v90 = v23->MissionStub7(); /*0x6a980e*/
                    v83 = v84[25]; /*0x6a9817*/
                    if ( !v83 ) /*0x6a981b*/
                    {
                      v16 = v74; /*0x6a987d*/
                      LOBYTE(v70) = 0; /*0x6a9881*/
                      v28 = (unsigned int *)(v81 + 4 * (v87 + 4 * (3 * v87 + 6) + 2)); /*0x6a988e*/
                      switch ( *v28 ) /*0x6a989c*/
                      {
                        case 0: /*0x6a989c*/
                          if ( a3 ) /*0x6a992b*/
                            goto LABEL_59; /*0x6a992b*/
                          continue; /*0x6a992b*/
                        case 1: /*0x6a989c*/
                          Member09 = 0; /*0x6a98a3*/
                          v75 = 1; /*0x6a98a5*/
                          LOBYTE(v70) = 1; /*0x6a98ac*/
                          if ( *v28 != 1 ) /*0x6a98bb*/
                            goto LABEL_45; /*0x6a98bb*/
                          v27 = v84[27]; /*0x6a98c1*/
                          goto LABEL_43; /*0x6a98c1*/
                        case 2: /*0x6a989c*/
                          v29 = 0; /*0x6a98eb*/
                          LOBYTE(v70) = 1; /*0x6a98ed*/
                          IsCliffWall = 0; /*0x6a98f4*/
                          v16 = 1; /*0x6a98f9*/
                          if ( *v28 == 1 ) /*0x6a9905*/
                          {
                            v30 = v84[27]; /*0x6a990b*/
                            if ( v30 > 0 ) /*0x6a9910*/
                              v29 = v30 / 2; /*0x6a9917*/
                          }
                          ProductionState = v29; /*0x6a9919*/
                          goto LABEL_59; /*0x6a991d*/
                        case 3: /*0x6a989c*/
                          LOBYTE(v70) = 1; /*0x6a98da*/
                          IsCliffWall = 1; /*0x6a98df*/
                          v16 = 0; /*0x6a98e4*/
                          goto LABEL_59; /*0x6a98e6*/
                        default:
                          goto LABEL_59;
                      }
                    }
                    LOBYTE(v70) = 1; /*0x6a981d*/
                    IsCliffWall = ObjectClass::IsCliffWall((ObjectClass *)v83); /*0x6a9829*/
                    if ( IsCliffWall ) /*0x6a982d*/
                      BufferCount = (size_t)GetStringCSF(g_Str_TXT_READY, 0, &stru_83FA80.AlliedVoice[6], 3411); /*0x6a9845*/
                    else
                      v75 = 1; /*0x6a984b*/
                    Member09 = 0; /*0x6a9854*/
                    v26 = (ObjectClass *)v84[25]; /*0x6a9856*/
                    if ( v26 ) /*0x6a985b*/
                      Member09 = ObjectClass::GetMember09(v26); /*0x6a985d*/
                    if ( *(unsigned int *)(v81 + 4 * (v87 + 4 * (3 * v87 + 6) + 2)) == 1 ) /*0x6a9872*/
                    {
                      v27 = v84[27]; /*0x6a9874*/
LABEL_43:
                      if ( v27 > Member09 ) /*0x6a98c6*/
                        Member09 = (v27 + Member09) / 2; /*0x6a98cd*/
                    }
LABEL_45:
                    ProductionState = Member09; /*0x6a98cf*/
                  }
                  v16 = 0; /*0x6a98d3*/
                }
              }
LABEL_59:
              v112[0] = 0; /*0x6a99c3*/
              v112[1] = 0; /*0x6a99cc*/
              v112[2] = v15 + 60; /*0x6a99d6*/
              v112[3] = v17 + 48; /*0x6a99e0*/
              if ( v75 ) /*0x6a99ed*/
              {
                if ( v90 ) /*0x6a99f9*/
                {
                  v116[0] = v15; /*0x6a9a30*/
                  v116[1] = v17; /*0x6a9a37*/
                  DrawToSurfaceSHP( /*0x6a9a3e*/
                    (int)DSurface_Sidebar,
                    dword_87F6B0,
                    v90,
                    0,
                    v116,
                    v112,
                    1024,
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
                if ( HIBYTE(v70) ) /*0x6a9a49*/
                {
                  v119[0] = v15; /*0x6a9a61*/
                  v119[1] = v17; /*0x6a9a68*/
                  v119[2] = 60; /*0x6a9a6f*/
                  v119[3] = 48; /*0x6a9a7a*/
                  (v79) = ((v79) & ~(0xFF << 16)) | ((((((dword_B0FA1C) >> 16) & 0xFF)) & 0xFF) << 16); /*0x6a9a85*/
                  DSurface_field_0x0 = DSurface_Sidebar->DSurface_field_0x0; /*0x6a9a89*/
                  (v79) = ((v79) & ~0xFFFF) | ((dword_B0FA1C) & 0xFFFF); /*0x6a9a8f*/
                  (*(void (**)(DSurface *, int *, unsigned int *, int))(DSurface_field_0x0 + 84))( /*0x6a9af8*/
                    DSurface_Sidebar,
                    v112,
                    v119,
                    ((unsigned __int8)dword_B0FA1C >> g_BitShift_Green_0 << g_BitShift_Red)
                  | ((((dword_B0FA1C) >> 8) & 0xFF) >> g_BitMask_Blue << g_BitMask_Green)
                  | ((((dword_B0FA1C) >> 16) & 0xFF) >> g_BitMask_Red << g_BitShift_Blue));
                }
                if ( v16 ) /*0x6a9afd*/
                {
                  v118[0] = v15; /*0x6a9b38*/
                  v118[1] = v17; /*0x6a9b3f*/
                  DrawToSurfaceSHP( /*0x6a9b46*/
                    (int)DSurface_Sidebar,
                    dword_87F6CC,
                    dword_B07BC0,
                    0,
                    v118,
                    v112,
                    1025,
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
                if ( *(unsigned int *)(v81 + 52 * v87 + 136) > *(int *)&stru_A8E960.random[528] /*0x6a9b76*/
                  && *(unsigned int *)&stru_A8E960.random[528] % 16 > 8 )
                {
                  v115[0] = v15; /*0x6a9bab*/
                  v115[1] = v17; /*0x6a9bb9*/
                  DrawToSurfaceSHP( /*0x6a9bc0*/
                    (int)DSurface_Sidebar,
                    dword_87F6CC,
                    dword_B07BC0,
                    0,
                    v115,
                    v112,
                    1028,
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
                if ( v77 ) /*0x6a9bcb*/
                {
                  v117[1] = v17 + 36; /*0x6a9bd4*/
                  v117[0] = v15; /*0x6a9be5*/
                  UI_Update_6AC480((int)v77, v117, v93, 60); /*0x6a9bec*/
                }
                v72 = 0; /*0x6a9c13*/
                v34 = ((unsigned __int8)dword_B0FA1C >> g_BitShift_Green_0 << g_BitShift_Red) /*0x6a9c46*/
                    | ((((dword_B0FA1C) >> 8) & 0xFF) >> g_BitMask_Blue << g_BitMask_Green)
                    | ((((dword_B0FA1C) >> 16) & 0xFF) >> g_BitMask_Red << g_BitShift_Blue);
                if ( v85 ) /*0x6a9c4a*/
                {
                  v68 = *(unsigned char *)(v85 + 3278); /*0x6a9c5c*/
                  v35 = (*(int (**)(int))(*(unsigned int *)v85 + 44))(v85); /*0x6a9c5d*/
                  BuildLimit = (FactoryClass *)HouseClass::GetBuildLimit( /*0x6a9c6e*/
                                                 *(HouseClass **)((char *)&stru_A83CD9.estimatedHealth + 3),
                                                 v35,
                                                 v68,
                                                 0);
                  if ( BuildLimit ) /*0x6a9c72*/
                  {
                    v36 = FactoryClass::CountType(BuildLimit, v85); /*0x6a9c81*/
                    v37 = (const wchar_t *)v36; /*0x6a9c86*/
                    if ( v36 > 1 /*0x6a9cc3*/
                      || v36 > 0
                      && ((v38 = *&BuildLimit->q058) == 0
                       || (*(int (**)(int))(*(unsigned int *)v38 + 132))(v38)
                       && (*(int (**)(unsigned int))(**&BuildLimit->q058 + 132))(*&BuildLimit->q058) != v85) )
                    {
                      swprintf(Buffer, (const size_t)g_Str_Fmt_PctD, v37); /*0x6a9cd7*/
                      v114[1] = v17 + 1; /*0x6a9ce5*/
                      v114[0] = v15 + 60; /*0x6a9d05*/
                      TextBoundingRect = GetTextBoundingRect(v127, (int)Buffer, v15 + 60, v17 + 1, 578, 2, 1); /*0x6a9d0c*/
                      v120[0] = *TextBoundingRect; /*0x6a9d18*/
                      v120[1] = TextBoundingRect[1]; /*0x6a9d24*/
                      v120[2] = TextBoundingRect[2]; /*0x6a9d2e*/
                      v120[3] = TextBoundingRect[3]; /*0x6a9d3f*/
                      DSurface::FillRectWithColor(v120, (int)DSurface_Sidebar, 0, 0xAFu); /*0x6a9d4c*/
                      TextRenderer::Printf( /*0x6a9d7b*/
                        v121,
                        (size_t)g_Str_Fmt_PctD,
                        (int)DSurface_Sidebar,
                        (int)v93,
                        (int)v114,
                        v34,
                        0,
                        578,
                        (wchar_t)v37);
                      v72 = 1; /*0x6a9d83*/
                    }
                  }
                }
                if ( (unsigned char)v70 ) /*0x6a9d8e*/
                {
                  if ( BufferCount ) /*0x6a9d9a*/
                  {
                    v113[1] = v17 + 1; /*0x6a9db3*/
                    v113[0] = v15 + 30; /*0x6a9dc5*/
                    v40 = GetTextBoundingRect(v128, BufferCount, v15 + 30, v17 + 1, 322, 2, 1); /*0x6a9dcc*/
                    v104 = *v40; /*0x6a9dd8*/
                    v105 = v40[1]; /*0x6a9de4*/
                    v106 = v40[2]; /*0x6a9dee*/
                    v107 = v40[3]; /*0x6a9dff*/
                    DSurface::FillRectWithColor(&v104, (int)DSurface_Sidebar, 0, 0xAFu); /*0x6a9e0c*/
                    TextRenderer::Printf( /*0x6a9e36*/
                      v123,
                      BufferCount,
                      (int)DSurface_Sidebar,
                      (int)v93,
                      (int)v113,
                      v34,
                      0,
                      322,
                      v69);
                  }
                  if ( !IsCliffWall ) /*0x6a9e44*/
                  {
                    if ( (v94 = v15, /*0x6a9ec6*/
                          v95 = v17,
                          DrawToSurfaceSHP(
                            (int)DSurface_Sidebar,
                            dword_87F6CC,
                            (int)dword_B0B484,
                            ProductionState + 1,
                            &v94,
                            v112,
                            1028,
                            0,
                            0,
                            0,
                            1000,
                            0,
                            0,
                            0,
                            0,
                            0),
                          v83)
                      && (!*(unsigned int *)(v83 + 56) || *(unsigned char *)(v83 + 112))
                      || *(unsigned int *)(v81 + 4 * (v87 + 4 * (3 * v87 + 6) + 2)) == 2 )
                    {
                      StringCSF = GetStringCSF(aTxtHold, 0, &stru_83FA80.AlliedVoice[6], 3636); /*0x6a9ee2*/
                      if ( v72 ) /*0x6a9eea*/
                      {
                        v96 = v15 + 2; /*0x6a9f0b*/
                        v97 = v91 + 1; /*0x6a9f12*/
                        v42 = GetTextBoundingRect(v129, (int)StringCSF, v15 + 2, v91 + 1, 66, 2, 1); /*0x6a9f19*/
                        v108 = *v42; /*0x6a9f25*/
                        v109 = v42[1]; /*0x6a9f31*/
                        v110 = v42[2]; /*0x6a9f3b*/
                        v111 = v42[3]; /*0x6a9f4c*/
                        DSurface::FillRectWithColor(&v108, (int)DSurface_Sidebar, 0, 0xAFu); /*0x6a9f59*/
                        TextRenderer::Printf( /*0x6a9f7d*/
                          v124,
                          (size_t)StringCSF,
                          (int)DSurface_Sidebar,
                          (int)v93,
                          (int)&v96,
                          v34,
                          0,
                          66,
                          v69);
                      }
                      else
                      {
                        v98 = v15 + 30; /*0x6a9fa0*/
                        v99 = v91 + 1; /*0x6a9fa7*/
                        v43 = GetTextBoundingRect(v126, (int)StringCSF, v15 + 30, v91 + 1, 322, 2, 1); /*0x6a9fae*/
                        v100 = *v43; /*0x6a9fba*/
                        v101 = v43[1]; /*0x6a9fc6*/
                        v102 = v43[2]; /*0x6a9fd7*/
                        v103 = v43[3]; /*0x6a9fe7*/
                        DSurface::FillRectWithColor(&v100, (int)DSurface_Sidebar, 0, 0xAFu); /*0x6a9fee*/
                        TextRenderer::Printf( /*0x6aa014*/
                          v122,
                          (size_t)StringCSF,
                          (int)DSurface_Sidebar,
                          (int)v93,
                          (int)&v98,
                          v34,
                          0,
                          322,
                          v69);
                      }
                    }
                  }
                }
              }
            }
            ++v82; /*0x6aa039*/
          }
          while ( v82 < v89 ); /*0x6aa03d*/
          v7 = HouseClass_Observer; /*0x6aa043*/
          v6 = *(int *)((char *)&stru_A83CD9.estimatedHealth + 3); /*0x6aa049*/
        }
        if ( v6 != v7 ) /*0x6aa051*/
        {
LABEL_135:
          result = v81; /*0x6aa59b*/
          *(unsigned int *)(v81 + 80) = *(unsigned int *)(v81 + 76); /*0x6aa5a5*/
          return result; /*0x6aa5a5*/
        }
        v12 = v89; /*0x6aa057*/
      }
      v82 = 0; /*0x6aa05e*/
      v83 = v12 / 2; /*0x6aa06a*/
      if ( v12 / 2 > 0 ) /*0x6aa06e*/
      {
        while ( 1 ) /*0x6aa092*/
        {
          v44 = *(unsigned int *)(v81 + 68) + v82; /*0x6aa092*/
          v45 = *(unsigned int *)(v81 + 36) + 2 * v82 * dword_B0B500 + 1; /*0x6aa097*/
          v46 = *(unsigned int *)(v81 + 32) - DSurface_SidebarBounds; /*0x6aa0a0*/
          if ( v44 >= dword_884CF8 ) /*0x6aa0a4*/
            goto LABEL_135; /*0x6aa0a4*/
          v89 = dword_884B94[v44]; /*0x6aa0b5*/
          v47 = v89; /*0x6aa0aa*/
          if ( !v89 ) /*0x6aa0b9*/
            goto LABEL_135; /*0x6aa0b9*/
          v48 = *(unsigned int **)(v89 + 52); /*0x6aa0bf*/
          if ( v48 ) /*0x6aa0c4*/
          {
            v49 = v48[47]; /*0x6aa0ca*/
            if ( !v49 ) /*0x6aa0d2*/
            {
              v51 = (__int16 *)dword_B0B490; /*0x6aa0e8*/
LABEL_105:
              if ( v51 ) /*0x6aa0ef*/
              {
                v52 = v46 + v51[1]; /*0x6aa0f5*/
                v100 = 0; /*0x6aa0f7*/
                v102 = v52; /*0x6aa0fb*/
                v101 = 0; /*0x6aa102*/
                v53 = v45 + v51[2]; /*0x6aa10d*/
                v98 = v46; /*0x6aa10f*/
                v103 = v53; /*0x6aa113*/
                v99 = v45; /*0x6aa14d*/
                DrawToSurfaceSHP( /*0x6aa154*/
                  (int)DSurface_Sidebar,
                  dword_87F6D0,
                  (int)v51,
                  0,
                  &v98,
                  &v100,
                  1024,
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
              goto LABEL_107; /*0x6aa154*/
            }
            v50 = v49 - 1; /*0x6aa0d4*/
            if ( !v50 ) /*0x6aa0d5*/
            {
              v51 = (__int16 *)dword_B0B494; /*0x6aa0e1*/
              goto LABEL_105; /*0x6aa0e6*/
            }
            if ( v50 == 1 ) /*0x6aa0d8*/
            {
              v51 = (__int16 *)dword_B0B498; /*0x6aa0da*/
              goto LABEL_105; /*0x6aa0df*/
            }
          }
LABEL_107:
          v54 = *(unsigned int *)(v47 + 52); /*0x6aa159*/
          if ( v54 ) /*0x6aa15e*/
          {
            v55 = *(unsigned int *)(v54 + 184); /*0x6aa164*/
            switch ( v55 ) /*0x6aa176*/
            {
              case -3: /*0x6aa176*/
                v56 = (__int16 *)dword_B0B4A0; /*0x6aa1cd*/
                goto LABEL_121; /*0x6aa1d3*/
              case -2: /*0x6aa176*/
                v56 = (__int16 *)dword_B0B49C; /*0x6aa17d*/
                goto LABEL_121; /*0x6aa183*/
              case 0: /*0x6aa176*/
                v56 = (__int16 *)dword_B0B4A4; /*0x6aa185*/
                goto LABEL_121; /*0x6aa18b*/
              case 1: /*0x6aa176*/
                v56 = (__int16 *)dword_B0B4A8; /*0x6aa18d*/
                goto LABEL_121; /*0x6aa193*/
              case 2: /*0x6aa176*/
                v56 = (__int16 *)dword_B0B4AC; /*0x6aa195*/
                goto LABEL_121; /*0x6aa19b*/
              case 3: /*0x6aa176*/
                v56 = (__int16 *)dword_B0B4B0; /*0x6aa19d*/
                goto LABEL_121; /*0x6aa1a3*/
              case 4: /*0x6aa176*/
                v56 = (__int16 *)dword_B0B4B4; /*0x6aa1a5*/
                goto LABEL_121; /*0x6aa1ab*/
              case 5: /*0x6aa176*/
                v56 = (__int16 *)dword_B0B4B8; /*0x6aa1ad*/
                goto LABEL_121; /*0x6aa1b3*/
              case 6: /*0x6aa176*/
                v56 = (__int16 *)dword_B0B4BC; /*0x6aa1b5*/
                goto LABEL_121; /*0x6aa1bb*/
              case 7: /*0x6aa176*/
                v56 = (__int16 *)dword_B0B4C0; /*0x6aa1bd*/
                goto LABEL_121; /*0x6aa1c3*/
              case 8: /*0x6aa176*/
                v56 = (__int16 *)dword_B0B4C4; /*0x6aa1c5*/
                goto LABEL_121; /*0x6aa1cb*/
              case 9: /*0x6aa176*/
                v56 = (__int16 *)dword_B0B4C8; /*0x6aa1d5*/
LABEL_121:
                if ( v56 ) /*0x6aa1dd*/
                {
                  if ( v55 == 9 ) /*0x6aa1e6*/
                  {
                    updated = UI_Update_72F4D0(); /*0x6aa1e8*/
                    v58 = v56[1] + v46 + 70; /*0x6aa1f3*/
                    v108 = 0; /*0x6aa1f7*/
                    v110 = v58; /*0x6aa1fe*/
                    v109 = 0; /*0x6aa205*/
                    v111 = v56[2] + v45 + 70; /*0x6aa214*/
                    v96 = v46 + 70; /*0x6aa21e*/
                    v97 = v45 + 70; /*0x6aa225*/
                    DrawToSurfaceSHP( /*0x6aa252*/
                      (int)DSurface_Sidebar,
                      updated,
                      (int)v56,
                      0,
                      &v96,
                      &v108,
                      1024,
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
                  else
                  {
                    v59 = v56[1] + v46 + 70; /*0x6aa25a*/
                    v104 = 0; /*0x6aa25e*/
                    v60 = v56[2]; /*0x6aa265*/
                    v106 = v59; /*0x6aa269*/
                    v105 = 0; /*0x6aa270*/
                    v107 = v60 + v45 + 70; /*0x6aa287*/
                    v94 = v46 + 70; /*0x6aa29b*/
                    v95 = v45 + 70; /*0x6aa2b3*/
                    DrawToSurfaceSHP( /*0x6aa2c9*/
                      (int)DSurface_Sidebar,
                      dword_87F6D0,
                      (int)v56,
                      0,
                      &v94,
                      &v104,
                      1024,
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
                break; /*0x6aa252*/
              default:
                break;
            }
          }
          wcscpy(&word_B078B0, (const wchar_t *)(v89 + 90154)); /*0x6aa2ce*/
          if ( *(unsigned int *)&dword_A8B238 == 4 ) /*0x6aa2ee*/
            _itow(Value[v44], Format, 10); /*0x6aa302*/
          _itow(dword_884BB4[v44], v130, 10); /*0x6aa31c*/
          _itow(dword_884BD4[v44], v133, 10); /*0x6aa333*/
          _itow(dword_884BF4[v44], v131, 10); /*0x6aa34a*/
          v61 = dword_884C14[v44]; /*0x6aa353*/
          if ( *(unsigned char *)(v81 + 63) ) /*0x6aa35d*/
            v45 += *(unsigned int *)(v81 + 76) - dword_B0B500; /*0x6aa371*/
          v79 = v46 + 8; /*0x6aa39c*/
          v80 = v45 + 4; /*0x6aa3a0*/
          TextRenderer::DrawText(v122, (size_t)&word_B078B0, (int)DSurface_Sidebar, v93, (int)&v79, v61, 0, 66); /*0x6aa3a4*/
          if ( *(unsigned int *)&dword_A8B238 == 4 ) /*0x6aa3b9*/
          {
            v62 = Value[v44]; /*0x6aa3c3*/
            v80 += 17; /*0x6aa3cf*/
            if ( v62 >= 1 ) /*0x6aa3d3*/
            {
              v64 = GetStringCSF(aGuiObsrank, 0, &stru_83FA80.AlliedVoice[6], 3785); /*0x6aa417*/
              swprintf(Destination, (const size_t)v64, Format); /*0x6aa425*/
            }
            else
            {
              v63 = GetStringCSF(g_Str_TXT_UNRANKED, 0, &stru_83FA80.AlliedVoice[6], 3781); /*0x6aa3e6*/
              wcscpy(Destination, v63); /*0x6aa3f4*/
            }
            TextRenderer::DrawText(v124, (size_t)Destination, (int)DSurface_Sidebar, v93, (int)&v79, v61, 0, 66); /*0x6aa453*/
          }
          v80 += 17; /*0x6aa469*/
          v65 = GetStringCSF(aGuiObskills, 0, &stru_83FA80.AlliedVoice[6], 3807); /*0x6aa47e*/
          swprintf(Destination, (const size_t)v65, v130); /*0x6aa48c*/
          TextRenderer::DrawText(v123, (size_t)Destination, (int)DSurface_Sidebar, v93, (int)&v79, v61, 0, 66); /*0x6aa4b6*/
          v80 += 17; /*0x6aa4dd*/
          v66 = GetStringCSF(aGuiObsunits, 0, &stru_83FA80.AlliedVoice[6], 3822); /*0x6aa4e1*/
          swprintf(Destination, (const size_t)v66, v133); /*0x6aa4ef*/
          TextRenderer::DrawText(v121, (size_t)Destination, (int)DSurface_Sidebar, v93, (int)&v79, v61, 0, 66); /*0x6aa51a*/
          v80 += 17; /*0x6aa541*/
          v67 = GetStringCSF(aGuiObscredits, 0, &stru_83FA80.AlliedVoice[6], 3835); /*0x6aa545*/
          swprintf(Destination, (const size_t)v67, v131); /*0x6aa553*/
          TextRenderer::DrawText(v113, (size_t)Destination, (int)DSurface_Sidebar, v93, (int)&v79, v61, 0, 66); /*0x6aa57e*/
          if ( ++v82 >= v83 ) /*0x6aa595*/
            goto LABEL_135; /*0x6aa595*/
        }
      }
      goto LABEL_135; /*0x6aa06e*/
    }
  }
  return result; /*0x6aa5a8*/

}
} // namespace gamemd

// 0x6A6140
namespace gamemd {
char Sidebar::FindProductionType(FactoryClass * aP1, MouseClass * aP2, int a4, void *a4_2)
{
  int v5; // eax
  int v6; // edx
  int v7; // eax
  char *v8; // ecx
  int v9; // esi
  unsigned int *i; // edx

  switch ( a4_2 ) /*0x6a6155*/
  {
    case 15: /*0x6a6155*/
    case 16: /*0x6a6155*/
      v5 = 2; /*0x6a61ac*/
      break;
    case 1: /*0x6a6155*/
    case 40: /*0x6a6155*/
    case 2: /*0x6a6155*/
    case 3: /*0x6a6155*/
      v5 = 3; /*0x6a61a5*/
      break;
    case 6: /*0x6a6155*/
    case 7: /*0x6a6155*/
      v5 = GetHouseTechLevel(a4_2, a4_2) == 5; /*0x6a61a1*/
      break;
    case 57: /*0x6a6155*/
    case 32: /*0x6a6155*/
    case 31: /*0x6a6155*/
      v5 = 1; /*0x6a6189*/
      break;
    default:
      v5 = -1; /*0x6a6184*/
      break;
  }
  v6 = 997 * v5; /*0x6a61bb*/
  v7 = 0; /*0x6a61be*/
  v8 = &aP1->vtable2 * v6 + 5444; /*0x6a61c0*/
  v9 = *((unsigned int *)aP1 + v6 + 1382); /*0x6a61c7*/
  if ( v9 <= 0 ) /*0x6a61d0*/
    return 0; /*0x6a61e6*/
  for ( i = v8 + 88; i[1] != a4_2 || *i != a4_2; i += 13 ) /*0x6a61d2*/
  {
    if ( ++v7 >= v9 ) /*0x6a61e4*/
      return 0; /*0x6a61e4*/
  }
  *(unsigned int *)&v8[52 * v7 + 100] = aP2; /*0x6a61fa*/
  v8[61] = 1; /*0x6a61fe*/
  v8[60] = 1; /*0x6a6202*/
  MapClass::MarkForRedraw((GScreenClass *)&DataGlobal_87F7E8, 0); /*0x6a620b*/
  return 1; /*0x6a61e6*/
}
} // namespace gamemd
