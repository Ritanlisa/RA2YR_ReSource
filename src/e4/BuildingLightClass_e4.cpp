// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/BuildingLightClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/BuildingLight_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/BulletTypeClass_e4.hpp"
#include "e4/classes/MixFileClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Building_e4.hpp"

// 0x436BE0
namespace gamemd {
unsigned int * BuildingLightClass::FindTarget(CCINIClass * aP1)
{
  _DWORD *result; // eax
  int v4; // edx
  ObjectClass * v5;
  int v6; // ebx
  _DWORD *v7; // esi
  int v8; // eax
  _DWORD *v9; // ecx
  int v10; // edi
  int v11; // ebx
  _DWORD *v12; // eax
  int v13; // ecx
  int v14; // edx
  double v15; // st7
  void *v16; // eax
  int v17; // [esp+1Ch] [ebp-4Ch]
  int v18; // [esp+20h] [ebp-48h]
  void *v19; // [esp+24h] [ebp-44h]
  int v21; // [esp+2Ch] [ebp-3Ch]
  _DWORD *v22; // [esp+30h] [ebp-38h]
  _DWORD *v24; // [esp+38h] [ebp-30h] BYREF
  int v26; // [esp+44h] [ebp-24h]
  int v28; // [esp+4Ch] [ebp-1Ch]
  int v29; // [esp+58h] [ebp-10h]
  char v30[12]; // [esp+5Ch] [ebp-Ch] BYREF

  result = aP1; /*0x436be9*/
  *(&this->uniqueId4) = 0; /*0x436bfa*/
  *(&this->abstractFlags5) = aP1; /*0x436c00*/
  *(&this->uniqueId5) = 0; /*0x436c06*/
  if ( aP1 == (_DWORD *)3 ) /*0x436c0c*/
  {
    v4 = *(_DWORD *)this->GetCellCoords_Alt(&v24); /*0x436c21*/
    v5 = this->FollowingObject; /*0x436c23*/
    v4 = v4; /*0x436c29*/
    v19 = &unk_98967F; /*0x436c2d*/
    v22 = 0; /*0x436c3b*/
    v24 = v5->q21C; /*0x436c3f*/
    v17 = -1; /*0x436c43*/
    do /*0x436d74*/
    {
      v6 = -1; /*0x436c53*/
      v21 = -1; /*0x436c58*/
      IDA_LOWORD(v18) = v4 + v17; /*0x436c5c*/
      do /*0x436d62*/
      {
        IDA_HIWORD(v18) = v6 + IDA_HIWORD(v4); /*0x436c6c*/
        v18 = v18; /*0x436c7b*/
        v7 = (_DWORD *)*((_DWORD *)CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v18) + 57); /*0x436c84*/
        if ( v7 ) /*0x436c8c*/
        {
          while ( 1 ) /*0x436c98*/
          {
            if ( ((*(int (__thiscall **)(_DWORD *))(*v7 + 44))(v7) == 15 /*0x436cb9*/
               || (*(int (__thiscall **)(_DWORD *))(*v7 + 44))(v7) == 1)
              && !Object::IsAlliedWithObjectHouse(v24, (int)v7) )
            {
              v8 = *v7; /*0x436ccc*/
              v9 = &this->location; /*0x436cce*/
              v10 = this->location; /*0x436cd0*/
              v11 = v9[1]; /*0x436cd2*/
              v29 = v9[2]; /*0x436cdf*/
              v12 = (_DWORD *)v7->GetInvalidCoord(v30); /*0x436ce3*/
              v13 = v12[1] - v11; /*0x436ced*/
              v26 = *v12 - v10; /*0x436cf3*/
              v14 = v12[2]; /*0x436cf7*/
              v13 = v13; /*0x436cfa*/
              v28 = v14 - v29; /*0x436d07*/
              v15 = Math::Sqrt((double)v26 * (double)v26 + (double)(v14 - v29) * (double)(v14 - v29) + (double)v13 * (double)v13); /*0x436d2c*/
              v16 = (void *)Math::RoundToInt(v15); /*0x436d34*/
              if ( (int)v16 < (int)v19 ) /*0x436d3d*/
              {
                v22 = v7; /*0x436d3f*/
                v19 = v16; /*0x436d43*/
              }
            }
            v7 = (_DWORD *)v7[12]; /*0x436d47*/
            if ( !v7 ) /*0x436d4c*/
              break; /*0x436d4c*/
          }
          v6 = v21; /*0x436d52*/
        }
        v21 = ++v6; /*0x436d5e*/
      }
      while ( v6 < 2 ); /*0x436d62*/
      ++v17; /*0x436d70*/
    }
    while ( v17 < 2 ); /*0x436d74*/
    result = v22; /*0x436d7a*/
    if ( v22 ) /*0x436d80*/
      this->BuildingLightClass_field_E0 = v22; /*0x436d82*/
  }
  return result; /*0x436d88*/
}
}
// 0x4370C0
namespace gamemd {
BuildingLightClass * BuildingLightClass::SDDTOR(char a2)
{
  int v3; // eax
  void *v5; // [esp+4h] [ebp-4h] BYREF

  *(void **)this = (void*)&BuildingLightClass_vftable; /*0x4370c4*/
  *((_DWORD *)this + 1) = (void*)&BuildingLightClass_vftable; /*0x4370ca*/
  this->vtable3 = (void*)&BuildingLightClass_vftable; /*0x4370d1*/
  this->vtable4 = (void*)&BuildingLightClass_vftable; /*0x4370d8*/
  if ( (unsigned __int8)ObjectClass::Undeploy(this) ) /*0x4370df*/
    VectorClass::RemoveItem(&g_GameConfigManager, (int)this); /*0x4370ee*/
  v3 = (*(int (__thiscall **)(int *, void **))(dword_8B4190 + 16))(&dword_8B4190, &this); /*0x437107*/
  if ( v3 != -1 && v3 < dword_8B41A0 && v3 < --dword_8B41A0 ) /*0x437122*/
  {
    do /*0x43713a*/
    {
      ++v3; /*0x43712a*/
      *((_DWORD *)dword_8B4194 + v3 - 1) = *((_DWORD *)dword_8B4194 + v3); /*0x43712e*/
    }
    while ( v3 < dword_8B41A0 ); /*0x43713a*/
  }
  ObjectClass::Dtor(); /*0x43713e*/
  if ( (a2 & 1) != 0 ) /*0x437148*/
    RA2_OPDEL(); /*0x43714b*/
  return this; /*0x437155*/
}
} // namespace gamemd

// 0x513D20
namespace gamemd {
signed int BuildingLightClass::UpdateOscillation()
{
  void * v2;
  int *v3; // eax
  int GroundHeight; // edi
  void * v5;
  int *v6; // ecx
  int v7; // eax
  int v8; // edx
  int v9; // ebx
  int v10; // ebp
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  double v14; // st7
  int v15; // edi
  double v16; // st7
  double v17; // st7
  int v18; // eax
  void * v19;
  char v20; // bl
  void * result;
  unsigned int v22;
  double v23; // st7
  int v24; // [esp+1Ch] [ebp-18h]
  int v25; // [esp+1Ch] [ebp-18h]
  int v26; // [esp+20h] [ebp-14h]
  int v27; // [esp+24h] [ebp-10h]
  int v28; // [esp+28h] [ebp-Ch] BYREF
  int v29; // [esp+2Ch] [ebp-8h]
  int v30; // [esp+30h] [ebp-4h]

  v24 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(&this->vtable22) + 456))(this->vtable4); /*0x513d3a*/
  v26 = v24; /*0x513d3e*/
  v2 = this->vtable4; /*0x513d42*/
  if ( *(_DWORD *)(v2 + 1504) != -1 ) /*0x513d4c*/
  {
    v3 = (int *)(v2 + 156); /*0x513d52*/
    v28 = *v3; /*0x513d59*/
    v29 = v3[1]; /*0x513d65*/
    v30 = v3[2]; /*0x513d71*/
    GroundHeight = Cell::GetGroundHeight(&v28); /*0x513d7a*/
    v5 = this->vtable4; /*0x513d7c*/
    v6 = (int *)(v5 + 156); /*0x513d8b*/
    v7 = *(_DWORD *)(v5 + 1504) & 7; /*0x513d8d*/
    v8 = *v6; /*0x513d90*/
    v9 = v6[1]; /*0x513d92*/
    v10 = v6[2]; /*0x513d95*/
    v11 = 8 * v7 + 9041624; /*0x513d98*/
    v12 = v8 + dword_89F6D8[2 * v7]; /*0x513dab*/
    v29 = v9 + *(_DWORD *)(v11 + 4); /*0x513dad*/
    v28 = v12; /*0x513dbb*/
    v30 = v10; /*0x513dbf*/
    if ( Cell::GetGroundHeight(&v28) > GroundHeight ) /*0x513dca*/
      v26 = v24 - IDA_HIDWORD(g_RulesClass_Instance->VeteranROF); /*0x513ddc*/
  }
  v25 = Math::RoundToInt((double)v24 + *(double *)(&this->objectTypeFlags6)); /*0x513dec*/
  v13 = (*(int (__stdcall **)(int))(*(_DWORD *)(this->vtable4 + 4) + 16))(this->vtable4 + 4); /*0x513df9*/
  if ( (v13 & 1) != 0 ) /*0x513dfe*/
    v14 = 1.0; /*0x513e00*/
  else
    v14 = 1.1; /*0x513e08*/
  v15 = (int)&g_CurrentFrame[v13]; /*0x513e20*/
  v16 = v14 * *(double *)&g_RulesClass_Instance->VeteranCap * 900.0; /*0x513e23*/
  v27 = v15 % (int)Math::RoundToInt(v16); /*0x513e3a*/
  v17 = Math::SinCos((double)v27 * 6.283185307179586 / v16); /*0x513e4f*/
  v18 = Math::RoundToInt(v17 + v17 + (double)v25); /*0x513e5d*/
  if ( v18 < 0 ) /*0x513e66*/
  {
    this->q060 = 0; /*0x513e68*/
    this->customSound = 0; /*0x513e6b*/
    v18 = 0; /*0x513e6e*/
  }
  v19 = this->vtable4; /*0x513e70*/
  v20 = *(_BYTE *)(v19 + 116); /*0x513e74*/
  *(_BYTE *)(v19 + 116) = 0; /*0x513e77*/
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(&this->vtable22) + 460))(this->vtable4, v18); /*0x513e7f*/
  result = this->vtable4; /*0x513e85*/
  *(_BYTE *)(result + 116) = v20; /*0x513e8c*/
  v22 = g_RulesClass_Instance; /*0x513e8f*/
  if ( v26 < IDA_SHIDWORD(g_RulesClass_Instance->VeteranROF) ) /*0x513e9b*/
  {
    if ( this->vtable2.GetDirty() ) /*0x513ea1*/
      *(double *)(&this->objectTypeFlags6) = ((double)IDA_SHIDWORD(g_RulesClass_Instance->VeteranROF) /*0x513ec8*/
                              + (double)IDA_SHIDWORD(g_RulesClass_Instance->VeteranROF)
                              - (double)v26)
                             / (double)IDA_SHIDWORD(g_RulesClass_Instance->VeteranROF)
                             * (double)g_RulesClass_Instance[1].WeatherConBoltExplosion
                             + *(double *)(&this->objectTypeFlags6);
    v22 = g_RulesClass_Instance; /*0x513ecd*/
    result = IDA_SHIDWORD(g_RulesClass_Instance->VeteranROF) / 4; /*0x513edf*/
    if ( v26 < result ) /*0x513ee4*/
    {
      result = (unsigned int)((unsigned __int64)(1431655766LL * g_RulesClass_Instance[1].WeatherConBoltExplosion) >> 32) >> 31; /*0x513ef5*/
      *(double *)(&this->objectTypeFlags6) = (double)(g_RulesClass_Instance[1].WeatherConBoltExplosion / 3) + *(double *)(&this->objectTypeFlags6); /*0x513f05*/
      v22 = g_RulesClass_Instance; /*0x513f08*/
    }
  }
  v23 = *(double *)(&this->objectTypeFlags6) - (double)v22[1].WeatherConBoltExplosion; /*0x513f15*/
  *(double *)(&this->objectTypeFlags6) = v23; /*0x513f18*/
  *(double *)(&this->objectTypeFlags6) = v23 * *(double *)&g_RulesClass_Instance->GameForming; /*0x513f27*/
  return result; /*0x513f2a*/
}
}
// 0x436900
namespace gamemd {
int BuildingLightClass::SD_vt12()
{
  return 232; /*0x436905*/
}
} // namespace gamemd

// 0x436910
namespace gamemd {
int BuildingLightClass::SD_vt03(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x436916*/
    return -2147467261; /*0x436918*/
  *a2 = 1417814616; /*0x436926*/
  a2[1] = 298965160; /*0x43692e*/
  a2[2] = 1610638004; /*0x436937*/
  a2[3] = 2041169559; /*0x436940*/
  return 0; /*0x43691d*/
}
} // namespace gamemd

// 0x4369C0
namespace gamemd {
int BuildingLightClass::SD_vt06(TechnoTypeClass * aP0, int * a1, int aP2)
{
  return AbstractClass::SaveLoad_Prefix(aP0, a1, aP2); /*0x4369d4*/
}
} // namespace gamemd

// 0x4369E0
namespace gamemd {
int BuildingLightClass::SD_vt34()
{
  return 0; /*0x4369e2*/
}
} // namespace gamemd

// 0x4369F0
namespace gamemd {
int BuildingLightClass::SD_vt30()
{
  return 3; /*0x4369f5*/
}
} // namespace gamemd

// 0x4370B0
namespace gamemd {
int BuildingLightClass::SD_vt11()
{
  return 19; /*0x4370b5*/
}
} // namespace gamemd
