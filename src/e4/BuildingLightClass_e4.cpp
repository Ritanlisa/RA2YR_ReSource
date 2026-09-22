// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Object_e4.hpp"

// 0x436BE0
namespace gamemd {
unsigned int * BuildingLightClass::FindTarget(CCINIClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall BuildingLightClass::FindTarget(_DWORD *this, CCINIClass *aP1)
{
  CCINIClass *result; // eax
  BuildingLightClass *v3; // edi
  int v4; // edx
  ObjectClass *v5; // eax
  int v6; // ebx
  TechnoClass *v7; // esi
  int v8; // eax
  int *location; // ecx
  int v10; // edi
  int v11; // ebx
  _DWORD *v12; // eax
  int v13; // ecx
  int v14; // edx
  double v15; // st7
  TechnoClass *v16; // eax
  BuildingLightClass *v17; // [esp+1Ch] [ebp-4Ch]
  int v18; // [esp+20h] [ebp-48h]
  TechnoClass *v19; // [esp+24h] [ebp-44h]
  int v21; // [esp+2Ch] [ebp-3Ch]
  TechnoClass *v22; // [esp+30h] [ebp-38h]
  int v23; // [esp+34h] [ebp-34h] BYREF
  _DWORD *nextArrayIndex; // [esp+38h] [ebp-30h] BYREF
  int v25; // [esp+3Ch] [ebp-2Ch]
  int v26; // [esp+44h] [ebp-24h]
  int v27; // [esp+48h] [ebp-20h]
  int v28; // [esp+4Ch] [ebp-1Ch]
  int v29; // [esp+58h] [ebp-10h]
  char v30[12]; // [esp+5Ch] [ebp-Ch] BYREF

  result = aP1; /*0x436be9*/
  v3 = (BuildingLightClass *)this; /*0x436bef*/
  this->q0B0 = 0; /*0x436bfa*/
  this->BehaviourMode = aP1; /*0x436c00*/
  this->q0B4 = 0; /*0x436c06*/
  if ( aP1 == (CCINIClass *)3 ) /*0x436c0c*/
  {
    v4 = *(_DWORD *)(*(int (__thiscall **)(_DWORD *, _DWORD **))(*this + 440))(this, &nextArrayIndex); /*0x436c21*/
    v5 = (ObjectClass *)v3->FollowingObject; /*0x436c23*/
    v25 = v4; /*0x436c29*/
    v19 = (TechnoClass *)&unk_98967F; /*0x436c2d*/
    v22 = 0; /*0x436c3b*/
    nextArrayIndex = (_DWORD *)v5[3].nextArrayIndex; /*0x436c3f*/
    v17 = (BuildingLightClass *)-1; /*0x436c43*/
    do /*0x436d74*/
    {
      v6 = -1; /*0x436c53*/
      v21 = -1; /*0x436c58*/
      LOWORD(v18) = v25 + (_WORD)v17; /*0x436c5c*/
      do /*0x436d62*/
      {
        HIWORD(v18) = v6 + HIWORD(v25); /*0x436c6c*/
        v23 = v18; /*0x436c7b*/
        v7 = (TechnoClass *)*((_DWORD *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v23) + 57); /*0x436c84*/
        if ( v7 ) /*0x436c8c*/
        {
          while ( 1 ) /*0x436c98*/
          {
            if ( ((*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v7->__pad_0 + 44))(v7) == 15 /*0x436cb9*/
               || (*(int (__thiscall **)(TechnoClass *))(*(_DWORD *)v7->__pad_0 + 44))(v7) == 1)
              && !Object::IsAlliedWithObjectHouse(nextArrayIndex, (IUnknown *)v7) )
            {
              v8 = *(_DWORD *)v7->__pad_0; /*0x436ccc*/
              location = v3->location; /*0x436cce*/
              v10 = v3->location[0]; /*0x436cd0*/
              v11 = location[1]; /*0x436cd2*/
              v29 = location[2]; /*0x436cdf*/
              v12 = (_DWORD *)(*(int (__thiscall **)(TechnoClass *, char *))(v8 + 72))(v7, v30); /*0x436ce3*/
              v13 = v12[1] - v11; /*0x436ced*/
              v26 = *v12 - v10; /*0x436cf3*/
              v14 = v12[2]; /*0x436cf7*/
              v27 = v13; /*0x436cfa*/
              v28 = v14 - v29; /*0x436d07*/
              v15 = Math::Sqrt((double)v26 * (double)v26 + (double)(v14 - v29) * (double)(v14 - v29) + (double)v13 * (double)v13); /*0x436d2c*/
              v16 = (TechnoClass *)Math::RoundToInt(v15); /*0x436d34*/
              if ( (int)v16 < (int)v19 ) /*0x436d3d*/
              {
                v22 = v7; /*0x436d3f*/
                v19 = v16; /*0x436d43*/
              }
            }
            v7 = (TechnoClass *)v7->nextObject; /*0x436d47*/
            if ( !v7 ) /*0x436d4c*/
              break; /*0x436d4c*/
            v3 = (BuildingLightClass *)this; /*0x436c94*/
          }
          v6 = v21; /*0x436d52*/
          v3 = (BuildingLightClass *)this; /*0x436d56*/
        }
        v21 = ++v6; /*0x436d5e*/
      }
      while ( v6 < 2 ); /*0x436d62*/
      v17 = (BuildingLightClass *)((char *)v17 + 1); /*0x436d70*/
    }
    while ( (int)v17 < 2 ); /*0x436d74*/
    result = (CCINIClass *)v22; /*0x436d7a*/
    if ( v22 ) /*0x436d80*/
      v3->BuildingLightClass_field_E0 = (int)v22; /*0x436d82*/
  }
  return result->__pad_0; /*0x436d88*/
}
}
} // namespace gamemd

// 0x4370C0
namespace gamemd {
BuildingLightClass * BuildingLightClass::SDDTOR(char a2)
{
    BuildingLightClass* blk = this;
    if ( ObjectClass::Undeploy(this) )
        VectorClass::RemoveItem(&g_GameConfigManager, this);
    BuildingLightClass* v5 = this;
    int v3 = g_CellDirectionOffsets.FindItemIndex(&v5);
    if ( v3 != -1 && v3 < g_CellDirectionOffsets )
    {
        --g_CellDirectionOffsets;
        while ( v3 < g_CellDirectionOffsets )
        {
            ++v3;
            *(g_CellDirectionOffsets + v3 - 1) = *(g_CellDirectionOffsets + v3);
        }
    }
    ObjectClass::Dtor(this);
    if ( a2 & 1 )
        OperatorDelete(this);
    return this;
}
}
} // namespace gamemd

// 0x513D20
namespace gamemd {
signed int BuildingLightClass::UpdateOscillation()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
signed int __thiscall BuildingLightClass::UpdateOscillation(int this)
{
  int v2; // eax
  int *v3; // eax
  int GroundHeight; // edi
  int v5; // eax
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
  int v19; // ecx
  char v20; // bl
  signed int result; // eax
  RulesClass *v22; // ecx
  double v23; // st7
  int v24; // [esp+1Ch] [ebp-18h]
  int v25; // [esp+1Ch] [ebp-18h]
  int v26; // [esp+20h] [ebp-14h]
  int v27; // [esp+24h] [ebp-10h]
  int v28; // [esp+28h] [ebp-Ch] BYREF
  int v29; // [esp+2Ch] [ebp-8h]
  int v30; // [esp+30h] [ebp-4h]

  v24 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 456))(this->vtable3); /*0x513d3a*/
  v26 = v24; /*0x513d3e*/
  v2 = this->vtable3; /*0x513d42*/
  if ( *(_DWORD *)(v2 + 1504) != -1 ) /*0x513d4c*/
  {
    v3 = (int *)(v2 + 156); /*0x513d52*/
    v28 = *v3; /*0x513d59*/
    v29 = v3[1]; /*0x513d65*/
    v30 = v3[2]; /*0x513d71*/
    GroundHeight = Cell::GetGroundHeight(&v28); /*0x513d7a*/
    v5 = this->vtable3; /*0x513d7c*/
    v6 = (int *)(v5 + 156); /*0x513d8b*/
    v7 = *(_DWORD *)(v5 + 1504) & 7; /*0x513d8d*/
    v8 = *v6; /*0x513d90*/
    v9 = v6[1]; /*0x513d92*/
    v10 = v6[2]; /*0x513d95*/
    v11 = 8 * v7 + 9041624; /*0x513d98*/
    v12 = v8 + DataGlobal_89F6D8[2 * v7]; /*0x513dab*/
    v29 = v9 + *(_DWORD *)(v11 + 4); /*0x513dad*/
    v28 = v12; /*0x513dbb*/
    v30 = v10; /*0x513dbf*/
    if ( Cell::GetGroundHeight(&v28) > GroundHeight ) /*0x513dca*/
      v26 = v24 - HIDWORD(g_RulesClass_Instance->ShakeScreen); /*0x513ddc*/
  }
  v25 = Math::RoundToInt((double)v24 + *(double *)(this + 96)); /*0x513dec*/
  v13 = (*(int (__stdcall **)(int))(*(_DWORD *)(this->vtable3 + 4) + 16))(this->vtable3 + 4); /*0x513df9*/
  if ( (v13 & 1) != 0 ) /*0x513dfe*/
    v14 = 1.0; /*0x513e00*/
  else
    v14 = 1.1; /*0x513e08*/
  v15 = (int)&g_CurrentFrame[v13]; /*0x513e20*/
  v16 = v14 * *(double *)&g_RulesClass_Instance->HoverBob * 900.0; /*0x513e23*/
  v27 = v15 % (int)Math::RoundToInt(v16); /*0x513e3a*/
  v17 = Math::SinCos((double)v27 * 6.283185307179586 / v16); /*0x513e4f*/
  v18 = Math::RoundToInt(v17 + v17 + (double)v25); /*0x513e5d*/
  if ( v18 < 0 ) /*0x513e66*/
  {
    this->q060 = 0; /*0x513e68*/
    this->customSound = 0; /*0x513e6b*/
    v18 = 0; /*0x513e6e*/
  }
  v19 = this->vtable3; /*0x513e70*/
  v20 = *(_BYTE *)(v19 + 116); /*0x513e74*/
  *(_BYTE *)(v19 + 116) = 0; /*0x513e77*/
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 12) + 460))(this->vtable3, v18); /*0x513e7f*/
  result = this->vtable3; /*0x513e85*/
  *(_BYTE *)(result + 116) = v20; /*0x513e8c*/
  v22 = g_RulesClass_Instance; /*0x513e8f*/
  if ( v26 < SHIDWORD(g_RulesClass_Instance->ShakeScreen) ) /*0x513e9b*/
  {
    if ( StreamClass::GetDirty(this + 4) ) /*0x513ea1*/
      *(double *)(this + 96) = ((double)SHIDWORD(g_RulesClass_Instance->ShakeScreen) /*0x513ec8*/
                              + (double)SHIDWORD(g_RulesClass_Instance->ShakeScreen)
                              - (double)v26)
                             / (double)SHIDWORD(g_RulesClass_Instance->ShakeScreen)
                             * (double)g_RulesClass_Instance[1].?
                             + *(double *)(this + 96);
    v22 = g_RulesClass_Instance; /*0x513ecd*/
    result = SHIDWORD(g_RulesClass_Instance->ShakeScreen) / 4; /*0x513edf*/
    if ( v26 < result ) /*0x513ee4*/
    {
      result = (unsigned int)((unsigned __int64)(1431655766LL * g_RulesClass_Instance[1].?) >> 32) >> 31; /*0x513ef5*/
      *(double *)(this + 96) = (double)(g_RulesClass_Instance[1].? / 3) + *(double *)(this + 96); /*0x513f05*/
      v22 = g_RulesClass_Instance; /*0x513f08*/
    }
  }
  v23 = *(double *)(this + 96) - (double)v22[1].?; /*0x513f15*/
  *(double *)(this + 96) = v23; /*0x513f18*/
  *(double *)(this + 96) = v23 * *(double *)&g_RulesClass_Instance->HoverDampen; /*0x513f27*/
  return result; /*0x513f2a*/
}
}
} // namespace gamemd

// 0x436900
namespace gamemd {
int BuildingLightClass::SD_vt12()
{
return 232;
}
} // namespace gamemd

// 0x436910
namespace gamemd {
int BuildingLightClass::SD_vt03(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 1417814616;
  a2[1] = 298965160;
  a2[2] = 1610638004;
  a2[3] = 2041169559;
  return 0;
}
} // namespace gamemd

// 0x4369C0
namespace gamemd {
int BuildingLightClass::SD_vt06(TechnoTypeClass * aP0, int * a1, int aP2)
{
{
    return AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2);
}
}
} // namespace gamemd

// 0x4369E0
namespace gamemd {
int BuildingLightClass::SD_vt34()
{
return 0;
}
} // namespace gamemd

// 0x4369F0
namespace gamemd {
int BuildingLightClass::SD_vt30()
{
return 3;
}
} // namespace gamemd

// 0x4370B0
namespace gamemd {
int BuildingLightClass::SD_vt11()
{
return 19;
}
} // namespace gamemd
