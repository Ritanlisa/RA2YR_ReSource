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
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"

// 0x436BE0
namespace gamemd {
unsigned int * BuildingLightClass::FindTarget(CCINIClass * aP1)
{
  unsigned int * result;
  int v4; // edx
  ObjectClass * v5;
  int v6; // ebx
  unsigned int *v7; // esi
  unsigned int * v8;
  unsigned int *v9; // ecx
  int v10; // edi
  int v11; // ebx
  unsigned int *v12; // eax
  int v13; // ecx
  int v14; // edx
  double v15; // st7
  void *v16; // eax
  int v17; // [esp+1Ch] [ebp-4Ch]
  int v18; // [esp+20h] [ebp-48h]
  void *v19; // [esp+24h] [ebp-44h]
  int v21; // [esp+2Ch] [ebp-3Ch]
  unsigned int * v22;
  unsigned int *v24; // [esp+38h] [ebp-30h] BYREF
  int v26; // [esp+44h] [ebp-24h]
  int v28; // [esp+4Ch] [ebp-1Ch]
  int v29; // [esp+58h] [ebp-10h]
  char v30[12]; // [esp+5Ch] [ebp-Ch] BYREF

  result = (unsigned int)(aP1);
    *((unsigned int *)this + 176) = 0;
    *((unsigned int *)this + 220) = aP1;
    *((unsigned int *)this + 180) = 0;
  if ( aP1 == (gamemd::CCINIClass *)((unsigned int *))3 ) /*0x436c0c*/
  {
    v4 = (gamemd::ObjectClass *)(*(unsigned int *)this->GetCellCoords_Alt(&v24));
    v5 = (gamemd::ObjectClass *)(*(unsigned int *)&this->FollowingObject);
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
        v7 = (unsigned int *)*((unsigned int *)CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&v18) + 57); /*0x436c84*/
        if ( v7 ) /*0x436c8c*/
        {
          while ( 1 ) /*0x436c98*/
          {
            if ( ((*(int (**)(unsigned int *))(*v7 + 44))(v7) == 15 /*0x436cb9*/
               || (*(int (**)(unsigned int *))(*v7 + 44))(v7) == 1)
              && !Object::IsAlliedWithObjectHouse(v24, (int)v7) )
            {
              v8 = (int)((unsigned int *)(*v7));
              v9 = (unsigned int *)(&this->location);
              v10 = (unsigned int)(this->location);
              v11 = (unsigned int)(v9[1]);
              v29 = v9[2]; /*0x436cdf*/
              v12 = (unsigned int *)v7->GetInvalidCoord(v30); /*0x436ce3*/
              v13 = v12[1] - v11; /*0x436ced*/
              v26 = *v12 - v10; /*0x436cf3*/
              v14 = v12[2]; /*0x436cf7*/
              v13 = v13; /*0x436cfa*/
              v28 = v14 - v29; /*0x436d07*/
              v15 = Math::Sqrt((double)v26 * (double)v26 + (double)(v14 - v29) * (double)(v14 - v29) + (double)v13 * (double)v13); /*0x436d2c*/
              v16 = (void *)Math::RoundToInt(v15); /*0x436d34*/
              if ( (int)v16 < (int)v19 ) /*0x436d3d*/
              {
                v22 = (unsigned int)(v7);
                v19 = v16; /*0x436d43*/
              }
            }
            v7 = (unsigned int *)v7[12]; /*0x436d47*/
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
            v3->BuildingLightClass_field_E0 = (int)v22;
  }
  return (unsigned int *)(result);
}
}
// 0x4370C0
namespace gamemd {
BuildingLightClass * BuildingLightClass::SDDTOR(char a2)
{
  int v3; // eax
  BuildingLightClass *v5; // [esp+4h] [ebp-4h] BYREF

  this->vtable0 = (unsigned int)((void *)((int)&BuildingLightClass_vftable));
  this->vtable1 = (void *)((int)&BuildingLightClass_vftable);
    *((unsigned int *)Block + 2) = &BuildingLightClass::`vftable';
    *((unsigned int *)Block + 3) = &vt_BuildingLightClass;
  if ( (uint8_t)ObjectClass::Undeploy(this) ) /*0x4370df*/
    VectorClass::RemoveItem((DynamicVectorClass *)&dword_87F778, (int)this); /*0x4370ee*/
  v5 = this; /*0x437103*/
  v3 = (*(int (**)(int *, BuildingLightClass **))(dword_8B4190 + 16))(&dword_8B4190, &v5); /*0x437107*/
  if ( v3 != -1 && v3 < dword_8B41A0 && v3 < --dword_8B41A0 ) /*0x437122*/
  {
    do /*0x43713a*/
    {
      ++v3; /*0x43712a*/
      *((unsigned int *)dword_8B4194 + v3 - 1) = *((unsigned int *)dword_8B4194 + v3); /*0x43712e*/
    }
    while ( v3 < dword_8B41A0 ); /*0x43713a*/
  }
    ObjectClass::Dtor(Block);
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
  void * GroundHeight;
  void * v5;
  int *v6; // ecx
  void * v7;
  void * v8;
  void * v9;
  void * v10;
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  double v14; // st7
  int v15; // edi
  double v16; // st7
  double v17; // st7
  int v18; // eax
  void * v19;
  void * v20;
  void * result;
  unsigned int v22;
  double v23; // st7
  void * v24;
  int v25; // [esp+1Ch] [ebp-18h]
  void * v26;
  int v27; // [esp+24h] [ebp-10h]
  void * v28;
  void * v29;
  void * v30;

  v24 = (void *)((int)((void *)((*(int (**)(unsigned int))(**(unsigned int **)(&this->vtable22) + 456))(this->vtable4))));
  v26 = (void *)((int)((void *)(v24)));
  v2 = (void *)(this->vtable4);
  if ( *(unsigned int *)((unsigned int)(v2)+ 1504) != -1 ) /*0x513d4c*/
  {
    v3 = (int *)((void *)((int *)((unsigned int)(v2)+ 156)));
    v28 = (void *)((unsigned int)((void *)((unsigned int)((void *)((unsigned int)((void *)((unsigned int)((void *)((unsigned int)((void *)((int)((void *)(*v3)))))))))))));
    v29 = (void *)((int)((void *)(v3[1])));
    v30 = (void *)((unsigned int)((void *)((unsigned int)((void *)((unsigned int)((void *)((int)((void *)(v3[2])))))))));
    GroundHeight = (void *)((int)((void *)(Cell::GetGroundHeight(&v28))));
    v5 = (void *)(this->vtable4);
    v6 = (int *)((void *)((int *)((unsigned int)(v5)+ 156)));
    v7 = (void *)((int)((void *)(*(unsigned int *)((unsigned int)(v5)+ 1504) & 7)));
    v8 = (void *)((int)((void *)(*v6)));
    v9 = (void *)((int)((void *)(v6[1])));
    v10 = (void *)((int)((void *)(v6[2])));
    v11 = (void *)(8 * v7 + 9041624);
    v12 = (unsigned int)(v8 + dword_89F6D8[2 * v7]);
    v29 = (void *)((unsigned int)(v9)+ *(unsigned int *)(v11 + 4));
    v28 = (void *)(v12);
    v30 = v10; /*0x513dbf*/
    if ( Cell::GetGroundHeight(&v28) > (_T)(GroundHeight) ) /*0x513dca*/
      v26 = v24 - IDA_HIDWORD(g_RulesClass_Instance->VeteranROF); /*0x513ddc*/
  }
    v25 = Math::RoundToInt((double)v24 + *(double *)((char *)this + 384));
    v13 = (*(int (__stdcall **)(int))(*(unsigned int *)(*((unsigned int *)this + 48) + 4) + 16))(*((unsigned int *)this + 48) + 4);
  if ( (v13 & 1) != 0 ) /*0x513dfe*/
    v14 = 1.0; /*0x513e00*/
  else
    v14 = 1.1; /*0x513e08*/
  v15 = (int)&((unsigned int *)(g_CurrentFrame))[v13]; /*0x513e20*/
  v16 = v14 * *(double *)&g_RulesClass_Instance->VeteranCap * 900.0; /*0x513e23*/
  v27 = v15 % (int)Math::RoundToInt(v16); /*0x513e3a*/
  v17 = Math::SinCos((double)v27 * 6.283185307179586 / v16); /*0x513e4f*/
  v18 = Math::RoundToInt(v17 + v17 + (double)v25); /*0x513e5d*/
  if ( v18 < 0 ) /*0x513e66*/
  {
        *((unsigned int *)this + 384) = 0;
        *((unsigned int *)this + 400) = 0;
    v18 = 0; /*0x513e6e*/
  }
  v19 = (void *)(this->vtable4);
  v20 = (void *)((char)((void *)(*(unsigned char *)((unsigned int)(v19)+ 116))));
  *(unsigned char *)((unsigned int)(v19)+ 116) = 0; /*0x513e77*/
    (*(void (**)(unsigned int, int))(**(unsigned int **)((char *)this + 48) + 460))(*((unsigned int *)this + 48), v18);
    result = *((unsigned int *)this + 48);
  *(unsigned char *)((unsigned int)(result)+ 116) = v20; /*0x513e8c*/
  v22 = g_RulesClass_Instance; /*0x513e8f*/
  if ( v26 < IDA_SHIDWORD(g_RulesClass_Instance->VeteranROF) ) /*0x513e9b*/
  {
        if ( StreamClass::GetDirty((char *)this + 16) )
            *(double *)((char *)this + 384) = ((double)SHIDWORD(MEMORY[0x8871E0]->ShakeScreen)
                              + (double)IDA_SHIDWORD(g_RulesClass_Instance->VeteranROF)
                              - (double)v26)
                             / (double)IDA_SHIDWORD(g_RulesClass_Instance->VeteranROF)
                             * (double)((unsigned int *)(g_RulesClass_Instance))[1].WeatherConBoltExplosion
                             + *(double *)(&this->objectTypeFlags6);
    v22 = g_RulesClass_Instance; /*0x513ecd*/
    result = IDA_SHIDWORD(g_RulesClass_Instance->VeteranROF) / 4; /*0x513edf*/
    if ( v26 < result ) /*0x513ee4*/
    {
      result = (unsigned int)((uint64_t)(1431655766LL * ((unsigned int *)(g_RulesClass_Instance))[1].WeatherConBoltExplosion) >> 32) >> 31; /*0x513ef5*/
            *(double *)((char *)this + 384) = (double)(MEMORY[0x8871E0][1].? / 3) + *(double *)((char *)this + 384);
      v22 = g_RulesClass_Instance; /*0x513f08*/
    }
  }
  v23 = (int)(*(double *)(&this->objectTypeFlags6) - (double)((unsigned int *)(v22))[1].WeatherConBoltExplosion);
    *(double *)((char *)this + 384) = v23;
    *(double *)((char *)this + 384) = v23 * *(double *)&MEMORY[0x8871E0]->HoverDampen;
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
  a2[3] = unk_7E973C; /*0x436940*/
  return 0; /*0x43691d*/
}
} // namespace gamemd

// 0x4369C0
namespace gamemd {
int BuildingLightClass::SD_vt06(TechnoTypeClass * aP0, int * a1, int aP2)
{
// 0x410320
  return AbstractClass::SaveLoad_Prefix((int *)aP0, a1, aP2); /*0x4369d4*/
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
