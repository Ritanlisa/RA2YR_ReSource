// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/Super_e4.hpp"
#include "e4/classes/Team_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/SuperClass_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/RulesClass_e4.hpp"
#include "e4/classes/SuperWeaponTypeClass_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Stream_e4.hpp"
#include "e4/classes/WeaponTypeClass_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/Vector_e4.hpp"

// 0x53AE50
namespace gamemd {
void * SuperClass::LaunchPsychicDominator(int a2)
{

  RulesClass *result; // eax
  void *v3; // esi
  void *v4; // eax
  int *v5; // eax
  AnimClass *v6; // eax
  AbstractClass *v7; // edx
  int v8[3]; // [esp+4h] [ebp-18h] BYREF
  unsigned int v9[3]; // [esp+10h] [ebp-Ch] BYREF

  result = *(RulesClass **)&DSurface_ViewBounds.__pad_FC[324]; /*0x53ae50*/
  if ( *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 764) /*0x53ae66*/
    && *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 768) )
  {
    PsyDom_Owner = (int)((House *)this); /*0x53ae79*/
    *(unsigned int *)&PsyDom_Coords = a2; /*0x53ae7f*/
    v3 = *(void **)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 764); /*0x53ae85*/
    v4 = ((CellCoord *)((CellCoord *)&stru_87F5F0.__pad_58[416]))->To_CellObj(&PsyDom_Coords); /*0x53ae95*/
    v5 = (int *)(*(int (**)(void *, unsigned int *))(*(unsigned int *)v4 + 72))(v4, v9); /*0x53aea3*/
    v8[0] = *v5; /*0x53aea8*/
    v8[1] = v5[1]; /*0x53aeb4*/
    v8[2] = v5[2] + 750; /*0x53aec0*/
    v6 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x53aec4*/
    if ( v6 ) /*0x53aece*/
      PsyDom_Anim = (int)((AnimClass *)(v6))->ctor(v3, v8, 0, 1, (void *)0x600, 0, 0); /*0x53aeea*/
    else
      PsyDom_Anim = 0; /*0x53aef1*/
    v7 = (gamemd::AbstractClass *)(dword_A8B230 + 130); /*0x53af06*/
    PsyDom_Status = 1; /*0x53af0c*/
    (&dword_A8B230)[130].vtable0 = *(void **)(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x53af1b*/
    v7->vtable1 = (void *)v9[1]; /*0x53af21*/
    v7->vtable2 = (void *)1; /*0x53af24*/
    return (RulesClass *)ScenarioClass::UpdateLighting(); /*0x53af27*/
  }
  return result; /*0x53af2d*/

}
}
// 0x6CAEC0
namespace gamemd {
int SuperClass::Constructor(void *a1, void *a2, void *a3)
{

  int v2; // eax

  ((AbstractClass*)(AbstractClass *)this)->Constructor(); /*0x6caec3*/
  this->SuperClass_field_0x24 = (unsigned int)((void *)-1); /*0x6caecd*/
  this->SuperClass_field_0x28 = 0; /*0x6caed0*/
  this->SuperClass_field_0x2C = 0; /*0x6caed3*/
  this->SuperClass_field_0x30 = (unsigned int)(*(void **)(unsigned int *)((char *)&stru_A8EB00 + 416)); /*0x6caedc*/
  this->SuperClass_field_0x38 = 0; /*0x6caedf*/
  *(unsigned int *)&this->__pad_3C[12] = 0; /*0x6caee2*/
  this->__pad_3C[4] = 0; /*0x6caee5*/
  *(unsigned int *)&this->__pad_3C[16] = 0; /*0x6caee8*/
  *(unsigned int *)&this->__pad_3C[20] = -1; /*0x6caeeb*/
  LOBYTE(this->SuperClass_field_0x60) = 1; /*0x6caeee*/
  *(void **)((char *)&this->SuperClass_field_0x60 + 2) = (void *)dword_B0C000; /*0x6caef8*/
  this->SuperClass_field_0x68 = 0; /*0x6caefb*/
  LOBYTE(this->SuperClass_field_0x6C) = 0; /*0x6caefe*/
  BYTE1(this->SuperClass_field_0x6C) = 0; /*0x6caf01*/
  BYTE2(this->SuperClass_field_0x6C) = 0; /*0x6caf04*/
  HIBYTE(this->SuperClass_field_0x6C) = 0; /*0x6caf07*/
  LOBYTE(this->SuperClass_field_0x70) = 0; /*0x6caf0a*/
  this->SuperClass_field_0x7C = (unsigned int)((void *)-1); /*0x6caf0d*/
  this->SuperClass_field_0x0 = (unsigned int)(&vt_SuperClass); /*0x6caf10*/
  this->SuperClass_field_0x4 = (unsigned int)(&vt_SuperClass); /*0x6caf16*/
  this->SuperClass_field_0x8 = (unsigned int)(&vt_SuperClass); /*0x6caf1d*/
  *(unsigned int *)this->__pad_C = (unsigned int)(&vt_SuperClass); /*0x6caf24*/
  *(unsigned int *)this->__pad_3C = (unsigned int)(&g_TypeClass_DefaultString); /*0x6caf2b*/
  if ( dword_A83CC8 < dword_A83CC0 /*0x6caf64*/
    || (byte_A83CC5 || !dword_A83CC0)
    && dword_A83CCC > 0
    && (*(uint8_t (**)(unsigned int *, int, unsigned int))(dword_A83CB8 + 8))(
         &dword_A83CB8,
         dword_A83CC0 + dword_A83CCC,
         0) )
  {
    v2 = dword_A83CC8++; /*0x6caf71*/
    *((unsigned int *)dword_A83CBC + v2) = (unsigned int)(this); /*0x6caf80*/
  }
  return (int)this; /*0x6caf85*/

}
}
// 0x6CAF90
namespace gamemd {
int SuperClass::Construct(int a2, CCINIClass * aP2, void *a3, void *a4, void *a5, void *a6)
{

  int v4; // edx
  int v5; // eax
  int v6; // eax
  int v7; // eax

  ((AbstractClass*)(AbstractClass *)this)->Constructor(); /*0x6caf94*/
  *((unsigned int *)this + 10) = a2; /*0x6cafa4*/
  *((unsigned int *)this + 9) = -1; /*0x6cafa7*/
  *((unsigned int *)this + 11) = (unsigned int)(aP2); /*0x6cafaa*/
  *((unsigned int *)this + 12) = dword_A8ED84; /*0x6cafb5*/
  *((unsigned int *)this + 14) = 0; /*0x6cafb8*/
  *((unsigned int *)this + 18) = 0; /*0x6cafbb*/
  *((unsigned char *)this + 64) = 0; /*0x6cafbe*/
  *((unsigned int *)this + 19) = 0; /*0x6cafc1*/
  *((unsigned int *)this + 20) = -1; /*0x6cafc4*/
  *((unsigned char *)this + 96) = 1; /*0x6cafc7*/
  v4 = dword_B0C000; /*0x6cafcb*/
  *((unsigned int *)this + 30) = -1; /*0x6cafd1*/
  *((unsigned int *)this + 31) = -1; /*0x6cafd4*/
  *(unsigned int *)((char *)this + 98) = v4; /*0x6cafda*/
  *((unsigned int *)this + 26) = 0; /*0x6cafde*/
  *((unsigned char *)this + 108) = 0; /*0x6cafe1*/
  *((unsigned char *)this + 109) = 0; /*0x6cafe4*/
  *((unsigned char *)this + 110) = 0; /*0x6cafe7*/
  *((unsigned char *)this + 111) = 0; /*0x6cafea*/
  *((unsigned char *)this + 112) = 0; /*0x6cafed*/
  *((unsigned int *)this + 29) = -100; /*0x6caff0*/
  *(unsigned int *)this = (unsigned int)(&vt_SuperClass); /*0x6caff7*/
  *((unsigned int *)this + 1) = (unsigned int)(&vt_SuperClass); /*0x6caffd*/
  *((unsigned int *)this + 2) = (unsigned int)(&vt_SuperClass); /*0x6cb003*/
  *((unsigned int *)this + 3) = (unsigned int)(&vt_SuperClass); /*0x6cb00a*/
  AbstractClass::GenerateUniqueID((int)((char *)this + 4)); /*0x6cb011*/
  if ( dword_A83CC8 < dword_A83CC0 /*0x6cb049*/
    || (byte_A83CC5 || !dword_A83CC0)
    && dword_A83CCC > 0
    && (*(uint8_t (**)(int *, int, unsigned int))(dword_A83CB8 + 8))(
         &dword_A83CB8,
         dword_A83CC0 + dword_A83CCC,
         0) )
  {
    v5 = dword_A83CC8++; /*0x6cb056*/
    *((unsigned int *)dword_A83CBC + v5) = (unsigned int)(this); /*0x6cb065*/
  }
  if ( dword_B0F680 < dword_B0F678 /*0x6cb09c*/
    || (byte_B0F67D || !dword_B0F678)
    && dword_B0F684 > 0
    && (*(uint8_t (**)(int *, int, unsigned int))(dword_B0F670 + 8))(
         &dword_B0F670,
         dword_B0F678 + dword_B0F684,
         0) )
  {
    v6 = dword_B0F680++; /*0x6cb0a9*/
    *((unsigned int *)dword_B0F674 + v6) = (unsigned int)(this); /*0x6cb0b8*/
  }
  if ( dword_B0F6D8 < dword_B0F6D0 /*0x6cb0ef*/
    || (byte_B0F6D5 || !dword_B0F6D0)
    && dword_B0F6DC > 0
    && (*(uint8_t (**)(int *, int, unsigned int))(dword_B0F6C8 + 8))(
         &dword_B0F6C8,
         dword_B0F6D0 + dword_B0F6DC,
         0) )
  {
    v7 = dword_B0F6D8++; /*0x6cb0fc*/
    *((unsigned int *)dword_B0F6CC + v7) = (unsigned int)(this); /*0x6cb10b*/
  }
  return this; /*0x6cb110*/

}
}
// 0x6CB120
namespace gamemd {
SuperClass * * SuperClass::CleanupMembers(void *a1)
{

  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // [esp+14h] [ebp-4h] BYREF

  v2 = *((unsigned int *)this + 26); /*0x6cb124*/
  *(unsigned int *)this = (unsigned int)(&vt_SuperClass); /*0x6cb127*/
  *((unsigned int *)this + 1) = (unsigned int)(&vt_SuperClass); /*0x6cb12f*/
  *((unsigned int *)this + 2) = (unsigned int)(&vt_SuperClass); /*0x6cb136*/
  *((unsigned int *)this + 3) = (unsigned int)(&vt_SuperClass); /*0x6cb13d*/
  if ( v2 ) /*0x6cb144*/
  {
    *(unsigned char *)(v2 + 405) = 0; /*0x6cb146*/
    *((unsigned int *)this + 26) = 0; /*0x6cb14d*/
    v9 = (int)(this); /*0x6cb164*/
    v3 = (*(int ((int *)(**))(int *, int *))(*((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 0)) + 16))(((char *)&g_BuildingLoadQueue_Array), &v9); /*0x6cb168*/
    if ( v3 != -1 ) /*0x6cb16e*/
      ((DynamicVector *)((DynamicVector *)((char *)&g_BuildingLoadQueue_Array)))->RemoveItem(v3); /*0x6cb176*/
  }
  if ( *((unsigned char *)this + 108) ) /*0x6cb17b*/
  {
    v9 = (int)(this); /*0x6cb192*/
    v4 = (*(int ((int *)(**))(int *, int *))(*((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 0)) + 16))(((char *)&g_BuildingLoadQueue_Array), &v9); /*0x6cb196*/
    if ( v4 != -1 ) /*0x6cb19c*/
      ((DynamicVector *)((DynamicVector *)((char *)&g_BuildingLoadQueue_Array)))->RemoveItem(v4); /*0x6cb1a4*/
    *((unsigned char *)this + 108) = 0; /*0x6cb1a9*/
  }
  v9 = (int)(this); /*0x6cb1bd*/
  v5 = (*((int (**)(SuperClass *, int *))stru_A83D50.SuperClass_field_0x0 + 4))(&stru_A83D50, &v9); /*0x6cb1c1*/
  if ( v5 != -1 && v5 < (int)stru_A83D50.SuperClass_field_0x10 ) /*0x6cb1d1*/
  {
    --stru_A83D50.SuperClass_field_0x10; /*0x6cb1d6*/
    for ( ; /*0x6cb1dc*/
          v5 < (int)stru_A83D50.SuperClass_field_0x10;
          *((unsigned int *)stru_A83D50.SuperClass_field_0x4 + v5 - 1) = *((unsigned int *)stru_A83D50.SuperClass_field_0x4 + v5) )
    {
      ++v5; /*0x6cb1e4*/
    }
  }
  v9 = (int)(this); /*0x6cb206*/
  v6 = (*(int (**)(unsigned int *, int *))(dword_A83CB8 + 16))(&dword_A83CB8, &v9); /*0x6cb20a*/
  if ( v6 != -1 && v6 < dword_A83CC8 && v6 < --dword_A83CC8 ) /*0x6cb225*/
  {
    do /*0x6cb23d*/
    {
      ++v6; /*0x6cb22d*/
      *((unsigned int *)dword_A83CBC + v6 - 1) = *((unsigned int *)dword_A83CBC + v6); /*0x6cb231*/
    }
    while ( v6 < dword_A83CC8 ); /*0x6cb23d*/
  }
  v9 = (int)(this); /*0x6cb24f*/
  v7 = (*(int (**)(int *, int *))(g_BuildingLoadQueue_Array.LightVisibility + 16))( /*0x6cb253*/
         &g_BuildingLoadQueue_Array.LightVisibility,
         &v9);
  if ( v7 != -1 && v7 < g_BuildingLoadQueue_Array.LightBlueTint ) /*0x6cb263*/
  {
    --g_BuildingLoadQueue_Array.LightBlueTint; /*0x6cb268*/
    for ( ; /*0x6cb26e*/
          v7 < g_BuildingLoadQueue_Array.LightBlueTint;
          *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v7 - 4) = *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity
                                                                                         + 4 * v7) )
    {
      ++v7; /*0x6cb276*/
    }
  }
  v9 = (int)(this); /*0x6cb298*/
  v8 = (*(int (**)(char *, int *))(*(unsigned int *)g_BuildingLoadQueue_Array.__pad_E88 + 16))( /*0x6cb29c*/
         g_BuildingLoadQueue_Array.__pad_E88,
         &v9);
  if ( v8 != -1 && v8 < *(int *)&g_BuildingLoadQueue_Array.__pad_E88[16] ) /*0x6cb2ac*/
  {
    --*(unsigned int *)&g_BuildingLoadQueue_Array.__pad_E88[16]; /*0x6cb2b1*/
    for ( ; /*0x6cb2b7*/
          v8 < *(int *)&g_BuildingLoadQueue_Array.__pad_E88[16];
          *(unsigned int *)(*(unsigned int *)&g_BuildingLoadQueue_Array.__pad_E88[4] + 4 * v8 - 4) = *(unsigned int *)(*(unsigned int *)&g_BuildingLoadQueue_Array.__pad_E88[4] + 4 * v8) )
    {
      ++v8; /*0x6cb2bf*/
    }
  }
  ((AbstractClass*)(AbstractClass *)this)->DTOR(); /*0x6cb2d3*/

}
}
// 0x6CB560
namespace gamemd {
AbstractClass * * SuperClass::StartTimer(int aP1, char aP2, char aP3)
{

  char v5; // al
  int v6; // ecx
  int v7; // edx
  void *v8; // eax
  int v9; // eax
  int v10; // edx
  unsigned int *v11; // eax
  int v12; // ecx
  int v13; // edx
  int v14; // edi
  int v15; // eax
  int DefaultTimer; // eax
  int v17; // eax
  int v18; // ecx
  int v19; // edx
  int v21; // [esp+8h] [ebp-Ch] BYREF
  int v22; // [esp+Ch] [ebp-8h]
  int v23; // [esp+10h] [ebp-4h]

  if ( !*((unsigned char *)this + 109) ) /*0x6cb569*/
  {
    v5 = (char)(aP1); /*0x6cb572*/
    v6 = *((unsigned int *)this + 10); /*0x6cb576*/
    *((unsigned char *)this + 109) = 1; /*0x6cb579*/
    *((unsigned char *)this + 110) = v5; /*0x6cb57d*/
    *((unsigned char *)this + 64) = 0; /*0x6cb580*/
    v7 = *(unsigned int *)(v6 + 96); /*0x6cb583*/
    LOBYTE(aP1) = 0; /*0x6cb589*/
    *((unsigned int *)this + 15) = v7; /*0x6cb58d*/
    if ( !v5 && *((unsigned char *)this + 112) && *((unsigned char *)this + 96) ) /*0x6cb597*/
    {
      if ( *(unsigned char *)(v6 + 245) ) /*0x6cb59c*/
      {
        if ( *((unsigned int *)this + 12) != -1 ) /*0x6cb5bd*/
        {
          *((unsigned int *)this + 14) = Locomotor::GetSpeed((Locomotor *)((char *)this + 48)); /*0x6cb5c6*/
          *((unsigned int *)this + 12) = -1; /*0x6cb5c9*/
        }
      }
      else if ( *((unsigned int *)this + 12) == -1 ) /*0x6cb5a8*/
      {
        *((unsigned int *)this + 12) = *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x6cb5af*/
      }
      *((unsigned char *)this + 112) = 0; /*0x6cb5cf*/
    }
    if ( *(unsigned char *)(*((unsigned int *)this + 10) + 244) /*0x6cb61f*/
      && !*(unsigned char *)(*(unsigned int *)(*((unsigned int *)this + 11) + 52) + 422)
      && ((int)stru_A83D50.SuperClass_field_0x10 < (int)stru_A83D50.SuperClass_field_0x8
       || (stru_A83D50.__pad_C[1] || !stru_A83D50.SuperClass_field_0x8)
       && *(int *)stru_A83D50.__pad_14 > 0
       && (*((uint8_t (**)(SuperClass *, char *, unsigned int))stru_A83D50.SuperClass_field_0x0 + 2))(
            &stru_A83D50,
            (char *)stru_A83D50.SuperClass_field_0x8 + *(unsigned int *)stru_A83D50.__pad_14,
            0)) )
    {
      v8 = stru_A83D50.SuperClass_field_0x10++; /*0x6cb62c*/
      *((unsigned int *)stru_A83D50.SuperClass_field_0x4 + (unsigned int)v8) = this; /*0x6cb63b*/
    }
    v9 = *((unsigned int *)this + 10); /*0x6cb63e*/
    if ( *(unsigned char *)(v9 + 245) ) /*0x6cb641*/
    {
      v10 = *((unsigned int *)this + 9); /*0x6cb649*/
      *((unsigned int *)this + 30) = -1; /*0x6cb64c*/
      if ( v10 == -1 ) /*0x6cb656*/
        v10 = *(unsigned int *)(v9 + 176); /*0x6cb658*/
      v11 = (unsigned int *)((char *)this + 48); /*0x6cb664*/
      *((unsigned int *)this + 12) = *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x6cb669*/
      *((unsigned int *)this + 13) = v22; /*0x6cb66f*/
      *((unsigned int *)this + 14) = v10; /*0x6cb672*/
      v12 = *((unsigned int *)this + 12); /*0x6cb675*/
      if ( v12 != -1 ) /*0x6cb67a*/
      {
        v13 = *((unsigned int *)this + 14); /*0x6cb680*/
        v14 = *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 416) - v12; /*0x6cb68e*/
        if ( *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 416) - v12 >= v13 ) /*0x6cb692*/
        {
          *((unsigned int *)this + 14) = 0; /*0x6cb6a6*/
          *v11 = -1; /*0x6cb6a9*/
        }
        else
        {
          *v11 = -1; /*0x6cb696*/
          *((unsigned int *)this + 14) = v13 - v14; /*0x6cb69c*/
        }
      }
    }
    else
    {
      v15 = *((unsigned int *)this + 26); /*0x6cb6b4*/
      if ( v15 ) /*0x6cb6b9*/
      {
        *(unsigned char *)(v15 + 405) = 0; /*0x6cb6bf*/
        *((unsigned int *)this + 26) = 0; /*0x6cb6cb*/
        aP1 = (int)((IUnknown *)(this)); /*0x6cb6ce*/
        ((VectorClass *)((VectorClass *)((char *)&g_BuildingLoadQueue_Array)))->RemoveAt((int)&aP1); /*0x6cb6d2*/
      }
      if ( *((unsigned char *)this + 108) ) /*0x6cb6d7*/
      {
        aP1 = (int)((IUnknown *)(this)); /*0x6cb6e6*/
        ((VectorClass *)((VectorClass *)((char *)&g_BuildingLoadQueue_Array)))->RemoveAt((int)&aP1); /*0x6cb6ea*/
        *((unsigned char *)this + 108) = 0; /*0x6cb6ef*/
      }
      if ( !*((unsigned char *)this + 109) /*0x6cb704*/
        || *((unsigned char *)this + 111)
        || *((unsigned char *)this + 112) && !*(unsigned char *)(*((unsigned int *)this + 10) + 237) )
      {
        LOBYTE(aP1) = 0; /*0x6cb757*/
      }
      else
      {
        *((unsigned int *)this + 30) = -1; /*0x6cb70f*/
        SuperClass::SetCurrentFrame((SuperClass *)((char *)this + 48)); /*0x6cb718*/
        DefaultTimer = ((Super*)(Super *)this)->GetDefaultTimer(); /*0x6cb71f*/
        ((Timer *)((Timer *)&v21))->Start(DefaultTimer); /*0x6cb729*/
        v17 = v22; /*0x6cb732*/
        v18 = v23; /*0x6cb736*/
        *((unsigned int *)this + 12) = v21; /*0x6cb73a*/
        v19 = *((unsigned int *)this + 10); /*0x6cb73c*/
        *((unsigned int *)this + 13) = v17; /*0x6cb73f*/
        *((unsigned int *)this + 14) = v18; /*0x6cb742*/
        if ( *(unsigned char *)(v19 + 229) ) /*0x6cb745*/
          *((unsigned int *)this + 31) = 0; /*0x6cb74d*/
        LOBYTE(aP1) = 1; /*0x6cb750*/
      }
    }
    if ( aP3 && *((unsigned char *)this + 109) ) /*0x6cb764*/
    {
      if ( *((unsigned char *)this + 110) ) /*0x6cb769*/
        goto LABEL_45; /*0x6cb76c*/
      if ( *((unsigned char *)this + 112) != 1 ) /*0x6cb772*/
      {
        if ( *((unsigned char *)this + 96) ) /*0x6cb774*/
        {
          SuperClass::AdvanceCountdown((SuperClass *)((char *)this + 48)); /*0x6cb77c*/
          *((unsigned char *)this + 112) = 1; /*0x6cb781*/
        }
      }
    }
    if ( !*((unsigned char *)this + 110) ) /*0x6cb788*/
      return (gamemd::AbstractClass **)(aP1); /*0x6cb79f*/
LABEL_45:
    SuperClass::AnnounceReady((gamemd::DynamicVector *)(this),(void *)(aP2)); /*0x6cb78a*/
    return (gamemd::AbstractClass **)(aP1); /*0x6cb791*/
  }
  return 0; /*0x6cb79a*/

}
}
// 0x6CB7B0
namespace gamemd {
int SuperClass::Lose()
{

  int v1; // eax
  SuperClass *v3; // [esp+0h] [ebp-4h] BYREF

  v3 = this; /*0x6cb7b0*/
  if ( !BYTE1(this->SuperClass_field_0x6C) ) /*0x6cb7b1*/
    return 0; /*0x6cb80d*/
  HIBYTE(this->SuperClass_field_0x6C) = 0; /*0x6cb7ba*/
  BYTE1(this->SuperClass_field_0x6C) = 0; /*0x6cb7bd*/
  v3 = this; /*0x6cb7ca*/
  v1 = (*((int (**)(SuperClass *, SuperClass **))stru_A83D50.SuperClass_field_0x0 + 4))(&stru_A83D50, &v3); /*0x6cb7d4*/
  if ( v1 != -1 && v1 < (int)stru_A83D50.SuperClass_field_0x10 ) /*0x6cb7e4*/
  {
    --stru_A83D50.SuperClass_field_0x10; /*0x6cb7e9*/
    for ( ; /*0x6cb7ef*/
          v1 < (int)stru_A83D50.SuperClass_field_0x10;
          *((unsigned int *)stru_A83D50.SuperClass_field_0x4 + v1 - 1) = *((unsigned int *)stru_A83D50.SuperClass_field_0x4 + v1) )
    {
      ++v1; /*0x6cb7f7*/
    }
  }
  return 1; /*0x6cb80c*/

}
}
// 0x6CB830
namespace gamemd {
AbstractClass * * SuperClass::StopPreclickAnim(IUnknown * aP1)
{

  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  unsigned int v8[4]; // [esp+8h] [ebp-10h] BYREF

  v3 = *((unsigned int *)this + 26); /*0x6cb839*/
  if ( v3 ) /*0x6cb83e*/
  {
    *(unsigned char *)(v3 + 405) = 0; /*0x6cb840*/
    *((unsigned int *)this + 26) = 0; /*0x6cb846*/
    v8[0] = (unsigned int)(this); /*0x6cb859*/
    v4 = (*(int ((int *)(**))(int *, unsigned int *))(stru_B0F5B8 + 16))(&stru_B0F5B8, v8); /*0x6cb85d*/
    if ( v4 != -1 ) /*0x6cb863*/
      ((DynamicVector *)(&stru_B0F5B8))->RemoveItem(v4); /*0x6cb86b*/
  }
  if ( *((unsigned char *)this + 108) ) /*0x6cb870*/
  {
    v8[0] = (unsigned int)(this); /*0x6cb885*/
    v5 = (*(int ((int *)(**))(int *, unsigned int *))(stru_B0F5B8 + 16))(&stru_B0F5B8, v8); /*0x6cb889*/
    if ( v5 != -1 ) /*0x6cb88f*/
      ((DynamicVector *)(&stru_B0F5B8))->RemoveItem(v5); /*0x6cb897*/
    *((unsigned char *)this + 108) = 0; /*0x6cb89c*/
  }
  if ( !*((unsigned char *)this + 109) /*0x6cb8b1*/
    || *((unsigned char *)this + 111)
    || *((unsigned char *)this + 112) && !*(unsigned char *)(*((unsigned int *)this + 10) + 237) )
  {
    return 0; /*0x6cb90d*/
  }
  *((unsigned int *)this + 30) = -1; /*0x6cb8b9*/
  if ( *((unsigned int *)this + 12) == -1 ) /*0x6cb8c6*/
    *((unsigned int *)this + 12) = dword_A8ED84; /*0x6cb8ce*/
  v6 = *((unsigned int *)this + 9); /*0x6cb8d1*/
  if ( v6 == -1 ) /*0x6cb8d7*/
    v6 = *(unsigned int *)(*((unsigned int *)this + 10) + 176); /*0x6cb8dc*/
  *((unsigned int *)this + 12) = dword_A8ED84; /*0x6cb8e7*/
  *((unsigned int *)this + 13) = v8[2]; /*0x6cb8ee*/
  *((unsigned int *)this + 14) = v6; /*0x6cb8f1*/
  if ( *(unsigned char *)(*((unsigned int *)this + 10) + 229) ) /*0x6cb8f7*/
    *((unsigned int *)this + 31) = 0; /*0x6cb8ff*/
  return (gamemd::AbstractClass **)(1); /*0x6cb902*/

}
}
// 0x6CB920
namespace gamemd {
int SuperClass::ClickFire(int a2, short * a3)
{

  int v4; // eax
  int v5; // eax
  int16_t *v6; // eax
  int v7; // edx
  int v8; // ecx
  wchar_t *v9; // edi
  wchar_t **v10; // esi
  wchar_t *v11; // eax
  int v13; // edi
  int v14; // edx
  int v15; // eax
  wchar_t *v16; // ebp
  int v17; // eax
  int v18; // edx
  wchar_t **v19; // edi
  int v20; // eax
  char v21; // al
  int v22; // eax
  int v23; // ecx
  wchar_t *v24; // eax
  wchar_t *v25; // eax
  int v26; // ecx
  char *v27; // edx
  int v28; // eax
  int v29; // ecx
  wchar_t *v30; // [esp+14h] [ebp-8h]

  v4 = *((unsigned int *)this + 10); /*0x6cb92a*/
  if ( *(unsigned char *)(v4 + 229) ) /*0x6cb92d*/
  {
    if ( (uint8_t)((House *)(*(void **)((char *)this + 44)))->IsCurrentPlayer() ) /*0x6cb93c*/
    {
      v5 = *((unsigned int *)this + 31); /*0x6cb949*/
      if ( v5 == 2 ) /*0x6cb94f*/
      {
        v6 = *(int16_t **)((char *)this + 36); /*0x6cb951*/
        *((unsigned int *)this + 31) = 1; /*0x6cb954*/
        if ( v6 == (int16_t *)-1 ) /*0x6cb95e*/
          a3 = *(int16_t **)(*((unsigned int *)this + 10) + 176); /*0x6cb96f*/
        else
          a3 = v6; /*0x6cb960*/
        v7 = *((unsigned int *)this + 12); /*0x6cb973*/
        v8 = *((unsigned int *)this + 14); /*0x6cb976*/
        v9 = (wchar_t *)(dword_A8ED84); /*0x6cb979*/
        v10 = (wchar_t **)((char *)this + 48); /*0x6cb97f*/
        if ( v7 != -1 ) /*0x6cb985*/
        {
          if ( (int)dword_A8ED84 - v7 >= v8 ) /*0x6cb98d*/
          {
            a2 = 0; /*0x6cb9c7*/
            goto LABEL_11; /*0x6cb9cb*/
          }
          v8 -= (int)dword_A8ED84 - v7; /*0x6cb98f*/
        }
        a2 = v8; /*0x6cb991*/
LABEL_11:
        LOWORD(v11) = Math::RoundToInt((double)(int)a3 - (double)a2 / *(double *)dword_8871E0->ChargeToDrainRatio); /*0x6cb995*/
        *v10 = v9; /*0x6cb9b4*/
        v10[1] = v30; /*0x6cb9b6*/
        v10[2] = v11; /*0x6cb9b9*/
        return 0; /*0x6cb9c4*/
      }
      if ( v5 == 1 ) /*0x6cb9d0*/
      {
        v13 = *((unsigned int *)this + 9); /*0x6cb9d6*/
        *((unsigned int *)this + 31) = 2; /*0x6cb9d9*/
        if ( v13 == -1 ) /*0x6cb9e3*/
          v13 = *(unsigned int *)(*((unsigned int *)this + 10) + 176); /*0x6cb9e8*/
        v14 = *((unsigned int *)this + 12); /*0x6cb9ee*/
        v15 = *((unsigned int *)this + 14); /*0x6cb9f1*/
        v16 = (wchar_t *)(dword_A8ED84); /*0x6cb9f5*/
        if ( v14 != -1 ) /*0x6cb9fe*/
        {
          if ( (int)dword_A8ED84 - v14 >= v15 ) /*0x6cba06*/
            v15 = 0; /*0x6cba0c*/
          else
            v15 -= (int)dword_A8ED84 - v14; /*0x6cba08*/
        }
        LOWORD(v17) = Math::RoundToInt((double)(v13 - v15) * *(double *)dword_8871E0->ChargeToDrainRatio); /*0x6cba23*/
        v18 = a2; /*0x6cba2c*/
        *((unsigned int *)this + 12) = (unsigned int)(v16); /*0x6cba30*/
        *((unsigned int *)this + 13) = (unsigned int)(v30); /*0x6cba33*/
        *((unsigned int *)this + 14) = v17; /*0x6cba36*/
        SuperClass::Launch((int)(this), v18, a3, v18); /*0x6cba41*/
        return 0; /*0x6cba4f*/
      }
    }
    else if ( !*(unsigned char *)(*((unsigned int *)this + 11) + 506) ) /*0x6cba55*/
    {
      SuperClass::Launch((int)(this), a2, a3, a2); /*0x6cba6d*/
      return 0; /*0x6cba7a*/
    }
    return 0; /*0x6cbc96*/
  }
  v19 = (wchar_t **)((char *)this + 48); /*0x6cba80*/
  if ( (*((unsigned int *)this + 12) == -1 || !*((unsigned char *)this + 109) || !*((unsigned char *)this + 111)) && !*(unsigned char *)(v4 + 238) ) /*0x6cba98*/
    return 0; /*0x6cba98*/
  if ( *(unsigned int *)(v4 + 180) == 2 && Weapon_Helper() ) /*0x6cbaa7*/
  {
    if ( (unsigned char)a2 ) /*0x6cbab4*/
    {
      Weapon_Get(); /*0x6cbaba*/
      return 0; /*0x6cbac7*/
    }
    return 0; /*0x6cbab4*/
  }
  if ( *(unsigned int *)(*((unsigned int *)this + 10) + 180) == 7 && (uint8_t)PsyDom::IsActive() ) /*0x6cbad6*/
  {
    if ( (unsigned char)a2 ) /*0x6cbae3*/
    {
      Weapon_Get_53B410(); /*0x6cbae9*/
      return 0; /*0x6cbaf6*/
    }
    return 0; /*0x6cbae3*/
  }
  SuperClass::Launch((int)(this), a2, a3, a2); /*0x6cbb05*/
  v20 = *((unsigned int *)this + 10); /*0x6cbb0a*/
  if ( !*(unsigned char *)(v20 + 238) ) /*0x6cbb0d*/
    *((unsigned char *)this + 111) = 0; /*0x6cbb15*/
  if ( !*((unsigned char *)this + 110) ) /*0x6cbb1b*/
  {
    if ( *(unsigned char *)(v20 + 245) ) /*0x6cbb63*/
    {
      v23 = *((unsigned int *)this + 9); /*0x6cbb6b*/
      if ( v23 == -1 ) /*0x6cbb71*/
        v23 = *(unsigned int *)(v20 + 176); /*0x6cbb73*/
      v24 = (wchar_t *)(dword_A8ED84); /*0x6cbb79*/
      *((unsigned int *)this + 30) = -1; /*0x6cbb80*/
      *v19 = v24; /*0x6cbb87*/
      *((unsigned int *)this + 13) = (unsigned int)(v30); /*0x6cbb8d*/
      *((unsigned int *)this + 14) = v23; /*0x6cbb90*/
      v25 = *v19; /*0x6cbb93*/
      if ( *v19 != (wchar_t *)-1 ) /*0x6cbb98*/
      {
        v26 = *((unsigned int *)this + 14); /*0x6cbb9e*/
        v27 = (char *)((char *)dword_A8ED84 - (char *)v25); /*0x6cbbac*/
        if ( (char *)dword_A8ED84 - (char *)v25 >= v26 ) /*0x6cbbb0*/
        {
          *((unsigned int *)this + 14) = 0; /*0x6cbbca*/
          *v19 = (wchar_t *)-1; /*0x6cbbcd*/
        }
        else
        {
          *v19 = (wchar_t *)-1; /*0x6cbbb4*/
          *((unsigned int *)this + 14) = v26 - (unsigned int)v27; /*0x6cbbba*/
        }
        return 0; /*0x6cbbc5*/
      }
    }
    else if ( !*(unsigned char *)(v20 + 237) && !*(unsigned char *)(v20 + 238) ) /*0x6cbbea*/
    {
      v28 = *((unsigned int *)this + 26); /*0x6cbbf6*/
      if ( v28 ) /*0x6cbbfb*/
      {
        *(unsigned char *)(v28 + 405) = 0; /*0x6cbc01*/
        *((unsigned int *)this + 26) = 0; /*0x6cbc0d*/
        a2 = (int)(this); /*0x6cbc10*/
        ((VectorClass *)(&stru_B0F5B8))->RemoveAt((int)&a2); /*0x6cbc14*/
      }
      if ( *((unsigned char *)this + 108) ) /*0x6cbc19*/
      {
        a2 = (int)(this); /*0x6cbc28*/
        ((VectorClass *)(&stru_B0F5B8))->RemoveAt((int)&a2); /*0x6cbc2c*/
        *((unsigned char *)this + 108) = 0; /*0x6cbc31*/
      }
      if ( *((unsigned char *)this + 109) /*0x6cbc46*/
        && !*((unsigned char *)this + 111)
        && (!*((unsigned char *)this + 112) || *(unsigned char *)(*((unsigned int *)this + 10) + 237)) )
      {
        *((unsigned int *)this + 30) = -1; /*0x6cbc4e*/
        if ( *v19 == (wchar_t *)-1 ) /*0x6cbc5a*/
          *v19 = (wchar_t *)(dword_A8ED84); /*0x6cbc62*/
        v29 = *((unsigned int *)this + 9); /*0x6cbc64*/
        if ( v29 == -1 ) /*0x6cbc6a*/
          v29 = *(unsigned int *)(*((unsigned int *)this + 10) + 176); /*0x6cbc6f*/
        *v19 = (wchar_t *)(dword_A8ED84); /*0x6cbc7a*/
        *((unsigned int *)this + 13) = (unsigned int)(v30); /*0x6cbc80*/
        *((unsigned int *)this + 14) = v29; /*0x6cbc83*/
        if ( *(unsigned char *)(*((unsigned int *)this + 10) + 229) ) /*0x6cbc89*/
          *((unsigned int *)this + 31) = 0; /*0x6cbc91*/
      }
    }
    return 0; /*0x6cbb98*/
  }
  v21 = *((unsigned char *)this + 109); /*0x6cbb1d*/
  *((unsigned char *)this + 110) = 0; /*0x6cbb20*/
  if ( !v21 ) /*0x6cbb25*/
    return 0; /*0x6cbb25*/
  *((unsigned char *)this + 111) = 0; /*0x6cbb2f*/
  *((unsigned char *)this + 109) = 0; /*0x6cbb32*/
  a2 = (int)(this); /*0x6cbb41*/
  v22 = (*(int (**)(int *, int *))(stru_A83D50 + 16))(&stru_A83D50, &a2); /*0x6cbb45*/
  if ( v22 != -1 ) /*0x6cbb4b*/
    ((SuperClass *)(&stru_A83D50))->RemoveFromPointerArray(v22); /*0x6cbb53*/
  return 1; /*0x6cb9bc*/

}
}
// 0x6CC080
namespace gamemd {
int SuperClass::AnnounceReady(DynamicVector * aP1, void *a2)
{

  char result; // al
  int v4; // edi
  int v5; // edi
  int v6; // edx
  int v7; // [esp+Ch] [ebp-8h]

  result = *((unsigned char *)this + 109); /*0x6cc086*/
  if ( result ) /*0x6cc08b*/
  {
    v4 = *((unsigned int *)this + 9); /*0x6cc092*/
    *((unsigned char *)this + 111) = 1; /*0x6cc098*/
    if ( v4 == -1 ) /*0x6cc09c*/
      v4 = *(unsigned int *)(*((unsigned int *)this + 10) + 176); /*0x6cc0a1*/
    v5 = v4 - Math::RoundToInt((double)v4); /*0x6cc0b4*/
    if ( !v5 ) /*0x6cc0b6*/
      *((unsigned char *)this + 111) = 1; /*0x6cc0b8*/
    if ( *((unsigned int *)this + 12) == -1 ) /*0x6cc0c0*/
      *((unsigned int *)this + 12) = dword_A8ED84; /*0x6cc0c8*/
    *((unsigned int *)this + 12) = dword_A8ED84; /*0x6cc0d4*/
    *((unsigned int *)this + 13) = v7; /*0x6cc0db*/
    *((unsigned int *)this + 14) = v5; /*0x6cc0de*/
    if ( aP1 ) /*0x6cc0e4*/
    {
      switch ( *(unsigned int *)(*((unsigned int *)this + 10) + 180) ) /*0x6cc0fc*/
      {
        case 0: /*0x6cc0fc*/
          ((VoxClass *)(aEvaNuclearmiss))->FindAndPlay(-1); /*0x6cc10d*/
          break; /*0x6cc10d*/
        case 1: /*0x6cc0fc*/
          ((VoxClass *)(aEvaIroncurtain))->FindAndPlay(-1); /*0x6cc119*/
          break; /*0x6cc119*/
        case 2: /*0x6cc0fc*/
          ((VoxClass *)(aEvaLightningst))->FindAndPlay(-1); /*0x6cc131*/
          break; /*0x6cc131*/
        case 3: /*0x6cc0fc*/
          ((VoxClass *)(g_Str_EVA_ChronosphereReady))->FindAndPlay(-1); /*0x6cc149*/
          break; /*0x6cc149*/
        case 5: /*0x6cc0fc*/
        case 6: /*0x6cc0fc*/
          ((VoxClass *)(aEvaReinforceme))->FindAndPlay(-1); /*0x6cc155*/
          break; /*0x6cc155*/
        case 7: /*0x6cc0fc*/
          ((VoxClass *)(aEvaPsychicdomi))->FindAndPlay(-1); /*0x6cc13d*/
          break; /*0x6cc13d*/
        case 8: /*0x6cc0fc*/
          ((VoxClass *)(aEvaSpyplanerea))->FindAndPlay(-1); /*0x6cc161*/
          break; /*0x6cc161*/
        case 9: /*0x6cc0fc*/
          ((VoxClass *)(unk_842414))->FindAndPlay(-1); /*0x6cc16d*/
          break; /*0x6cc16d*/
        case 0xA: /*0x6cc0fc*/
          ((VoxClass *)(aEvaForceshield))->FindAndPlay(-1); /*0x6cc125*/
          break; /*0x6cc125*/
        case 0xB: /*0x6cc0fc*/
          ((VoxClass *)(g_Str_EVA_PsychicRevealReady))->FindAndPlay(-1); /*0x6cc179*/
          break; /*0x6cc179*/
        default:
          break;
      }
    }
    v6 = *((unsigned int *)this + 10); /*0x6cc17e*/
    *((unsigned int *)this + 29) = dword_A8ED84; /*0x6cc187*/
    result = *(unsigned char *)(v6 + 229); /*0x6cc18a*/
    if ( result ) /*0x6cc192*/
      *((unsigned int *)this + 31) = 1; /*0x6cc194*/
  }
  return result; /*0x6cc19b*/

}
}
// 0x6CC1E0
namespace gamemd {
int SuperClass::SetCharge(int a2)
{

  unsigned int *v3; // eax
  int v4; // esi
  int v5; // esi
  int v7; // [esp+Ch] [ebp-8h]

  LOBYTE(v3) = *((unsigned char *)this + 109); /*0x6cc1e6*/
  if ( (unsigned char)v3 ) /*0x6cc1eb*/
  {
    LOBYTE(v3) = a2; /*0x6cc1ed*/
    if ( (unsigned int)a2 <= 0x64 ) /*0x6cc1f3*/
    {
      v4 = *((unsigned int *)this + 9); /*0x6cc1fb*/
      if ( v4 == -1 ) /*0x6cc201*/
        v4 = *(unsigned int *)(*((unsigned int *)this + 10) + 176); /*0x6cc206*/
      v5 = v4 - Math::RoundToInt((double)a2 * 0.0099999998 * (double)v4); /*0x6cc223*/
      if ( !v5 ) /*0x6cc225*/
        *((unsigned char *)this + 111) = 1; /*0x6cc227*/
      v3 = (unsigned int *)((char *)this + 48); /*0x6cc22e*/
      if ( *((unsigned int *)this + 12) == -1 ) /*0x6cc234*/
        *v3 = dword_A8ED84; /*0x6cc23c*/
      *v3 = dword_A8ED84; /*0x6cc248*/
      *((unsigned int *)this + 13) = v7; /*0x6cc24a*/
      *((unsigned int *)this + 14) = v5; /*0x6cc24d*/
    }
  }
  return (char)v3; /*0x6cc251*/

}
}
// 0x6CC390
namespace gamemd {
void SuperClass::Launch(int ecx0, int a2, short * aP3, char a4)
{

  double v4; // st7
  void *v5; // ebx
  int v6; // ebp
  int result; // eax
  void *v8; // eax
  unsigned int *v9; // eax
  int *v10; // eax
  void *v11; // eax
  int *v12; // eax
  int16_t *v13; // ebp
  void *v14; // eax
  int Coord3D_field_0x08; // esi
  int v16; // eax
  int v17; // eax
  AnimClass *v18; // eax
  AnimClass *v19; // eax
  int *v20; // edi
  int16_t v21; // cx
  int16_t v22; // dx
  int *v23; // esi
  int16_t v24; // ax
  bool v25; // zf
  int v26; // ecx
  int v27; // edx
  unsigned int *v28; // edx
  bool v29; // bl
  int v30; // eax
  int Member; // eax
  int *v32; // eax
  CellClass *v33; // eax
  int v34; // ecx
  int v35; // edi
  BuildingClass *v36; // eax
  int v37; // eax
  int *v38; // ebx
  int v39; // eax
  int InstanceCOM; // eax
  int v41; // edi
  int16_t v42; // ax
  int v43; // edi
  void *v44; // eax
  int v45; // ecx
  int v46; // eax
  int v47; // eax
  int v48; // edi
  int v49; // ed... [58141 chars total]
}

} // namespace gamemd

// 0x6CE0B0
namespace gamemd {
AbstractClass * * SuperClass::Reset(void *a1, void *a2)
{

  unsigned char *SuperClass_field_0x68; // eax
  int v3; // eax
  int v4; // eax
  void *SuperClass_field_0x24; // ecx
  int *result; // eax
  char *SuperClass_field_0x30; // ebx
  bool v8; // bl
  int v9; // esi
  int v10; // ecx
  int v11; // edx
  unsigned int v12[4]; // [esp+4h] [ebp-10h] BYREF

  SuperClass_field_0x68 = (unsigned char *)(this->SuperClass_field_0x68); /*0x6ce0b6*/
  if ( SuperClass_field_0x68 ) /*0x6ce0bb*/
  {
    SuperClass_field_0x68[405] = 0; /*0x6ce0bd*/
    this->SuperClass_field_0x68 = 0; /*0x6ce0c4*/
    v12[0] = (unsigned int)(this); /*0x6ce0db*/
    v3 = (*(int (**)(int *, unsigned int *))(*((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 0)) + 16))( /*0x6ce0df*/
           ((char *)&g_BuildingLoadQueue_Array),
           v12);
    if ( v3 != -1 ) /*0x6ce0e5*/
      ((DynamicVector *)((DynamicVector *)((char *)&g_BuildingLoadQueue_Array)))->RemoveItem(v3); /*0x6ce0ed*/
  }
  if ( LOBYTE(this->SuperClass_field_0x6C) ) /*0x6ce0f2*/
  {
    v12[0] = (unsigned int)(this); /*0x6ce109*/
    v4 = (*(int (**)(int *, unsigned int *))(*((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 0)) + 16))( /*0x6ce10d*/
           ((char *)&g_BuildingLoadQueue_Array),
           v12);
    if ( v4 != -1 ) /*0x6ce113*/
      ((DynamicVector *)((DynamicVector *)((char *)&g_BuildingLoadQueue_Array)))->RemoveItem(v4); /*0x6ce11b*/
    LOBYTE(this->SuperClass_field_0x6C) = 0; /*0x6ce120*/
  }
  SuperClass_field_0x24 = (void *)(this->SuperClass_field_0x24); /*0x6ce124*/
  result = (int *)&this->SuperClass_field_0x30; /*0x6ce127*/
  HIBYTE(this->SuperClass_field_0x6C) = 0; /*0x6ce12b*/
  SuperClass_field_0x30 = (char *)this->SuperClass_field_0x30; /*0x6ce12f*/
  this->SuperClass_field_0x78 = -1; /*0x6ce131*/
  v8 = SuperClass_field_0x30 + 1 != 0; /*0x6ce13b*/
  if ( SuperClass_field_0x24 == (void *)-1 ) /*0x6ce141*/
    SuperClass_field_0x24 = (void *)*((unsigned int *)this->SuperClass_field_0x28 + 44); /*0x6ce146*/
  *result = *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x6ce156*/
  *(unsigned int *)this->__pad_34 = v12[2]; /*0x6ce15d*/
  this->SuperClass_field_0x38 = (unsigned int)(SuperClass_field_0x24); /*0x6ce160*/
  if ( !v8 ) /*0x6ce163*/
  {
    v9 = *result; /*0x6ce165*/
    if ( *result != -1 ) /*0x6ce16a*/
    {
      v10 = result[2]; /*0x6ce16c*/
      v11 = *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 416) - v9; /*0x6ce17a*/
      if ( *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 416) - v9 >= v10 ) /*0x6ce17e*/
      {
        result[2] = 0; /*0x6ce192*/
        *result = -1; /*0x6ce195*/
      }
      else
      {
        *result = -1; /*0x6ce182*/
        result[2] = v10 - v11; /*0x6ce188*/
      }
    }
  }
  return (gamemd::AbstractClass **)(result); /*0x6ce18b*/

}
}
// 0x6CB3A0
namespace gamemd {
void ** SuperClass::CreateChronoAnim(AbstractClass * aP1, SuperClass * aP2, int a4)
{

  unsigned char *SuperClass_field_0x68; // eax
  int v6; // eax
  int v7; // eax
  void **result; // eax
  SuperClass *v9; // [esp+4h] [ebp-10h] BYREF
  int v10[3]; // [esp+8h] [ebp-Ch] BYREF

  SuperClass_field_0x68 = (unsigned char *)(this->SuperClass_field_0x68); /*0x6cb3a6*/
  if ( SuperClass_field_0x68 ) /*0x6cb3ab*/
  {
    SuperClass_field_0x68[405] = 0; /*0x6cb3ad*/
    this->SuperClass_field_0x68 = 0; /*0x6cb3b4*/
    v9 = this; /*0x6cb3cb*/
    v6 = (*(int (**)(int *, SuperClass **))(*((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 0)) + 16))( /*0x6cb3cf*/
           ((char *)&g_BuildingLoadQueue_Array),
           &v9);
    if ( v6 != -1 ) /*0x6cb3d5*/
      ((DynamicVector *)((DynamicVector *)((char *)&g_BuildingLoadQueue_Array)))->RemoveItem(v6); /*0x6cb3dd*/
  }
  if ( LOBYTE(this->SuperClass_field_0x6C) ) /*0x6cb3e2*/
  {
    v9 = this; /*0x6cb3f9*/
    v7 = (*(int (**)(int *, SuperClass **))(*((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 0)) + 16))( /*0x6cb3fd*/
           ((char *)&g_BuildingLoadQueue_Array),
           &v9);
    if ( v7 != -1 ) /*0x6cb403*/
      ((DynamicVector *)((DynamicVector *)((char *)&g_BuildingLoadQueue_Array)))->RemoveItem(v7); /*0x6cb40b*/
    LOBYTE(this->SuperClass_field_0x6C) = 0; /*0x6cb410*/
  }
  result = (void **)__2_YAPAXI_Z(0x1C8u); /*0x6cb419*/
  if ( result ) /*0x6cb423*/
  {
    v10[0] = (int)(aP1); /*0x6cb444*/
    v10[1] = (int)(aP2); /*0x6cb455*/
    v10[2] = a4 + 5; /*0x6cb459*/
    result = AnimClass::ctor( /*0x6cb467*/
               (AnimClass *)result,
               *(void **)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 816),
               v10,
               0,
               1,
               (void *)0x600,
               0,
               0);
    if ( result ) /*0x6cb470*/
    {
      this->SuperClass_field_0x68 = (unsigned int)(result); /*0x6cb472*/
      result = (void **)((char *)&g_BuildingLoadQueue_Array); /*0x6cb475*/
      if ( *((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 1)) < ((char *)&g_BuildingLoadQueue_Array) /*0x6cb4ae*/
        || (BYTE1(*((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 0))) || !((char *)&g_BuildingLoadQueue_Array))
        && *((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 2)) > 0
        && (result = (void **)(*(int (**)(int *, int, unsigned int))(*((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 0)) + 8))(
                                ((char *)&g_BuildingLoadQueue_Array),
                                ((char *)&g_BuildingLoadQueue_Array) + *((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 2)),
                                0),
            (unsigned char)result) )
      {
        result = (void **)((unsigned int *)&g_BuildingLoadQueue_Array)[1]++; /*0x6cb4b6*/
        *(unsigned int *)(*((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 0)) + 4 * (unsigned int)result) = (unsigned int)(this); /*0x6cb4c5*/
      }
    }
  }
  return result; /*0x6cb4c8*/

}
} // namespace gamemd

// 0x6CB4D0
namespace gamemd {
char SuperClass::SetOnHold(char aP1)
{

  int result; // eax
  int v3; // esi
  int v4; // eax

  if ( !*((unsigned char *)this + 109) || *((unsigned char *)this + 110) || aP1 == *((unsigned char *)this + 112) || !*((unsigned char *)this + 96) ) /*0x6cb4ea*/
  {
    LOBYTE(result) = 0; /*0x6cb552*/
  }
  else
  {
    if ( aP1 || (result = *((unsigned int *)this + 10), *(unsigned char *)(result + 245)) ) /*0x6cb4f9*/
    {
      v3 = *((unsigned int *)this + 12); /*0x6cb51c*/
      if ( v3 != -1 ) /*0x6cb522*/
      {
        v4 = *((unsigned int *)this + 14); /*0x6cb524*/
        if ( (int)dword_A8ED84 - v3 >= v4 ) /*0x6cb536*/
          result = 0; /*0x6cb53c*/
        else
          result = v4 - ((unsigned int)dword_A8ED84 - v3); /*0x6cb538*/
        *((unsigned int *)this + 14) = result; /*0x6cb53e*/
        *((unsigned int *)this + 12) = -1; /*0x6cb541*/
      }
    }
    else if ( *((unsigned int *)this + 12) == -1 ) /*0x6cb507*/
    {
      *((unsigned int *)this + 12) = dword_A8ED84; /*0x6cb510*/
      *((unsigned char *)this + 112) = 0; /*0x6cb513*/
      LOBYTE(result) = 1; /*0x6cb516*/
      return result; /*0x6cb519*/
    }
    *((unsigned char *)this + 112) = aP1; /*0x6cb548*/
    LOBYTE(result) = 1; /*0x6cb54c*/
  }
  return result; /*0x6cb518*/

}
} // namespace gamemd

// 0x6CB820
namespace gamemd {
char SuperClass::SetReadiness(char a2)
{

  HIBYTE(this->SuperClass_field_0x6C) = a2; /*0x6cb824*/
  return a2; /*0x6cb827*/

}
} // namespace gamemd

// 0x6CC280
namespace gamemd {
int SuperClass::SetRechargeTime(int a2)
{

  this->SuperClass_field_0x24 = (unsigned int)((void *)a2); /*0x6cc284*/
  return a2; /*0x6cc287*/

}
} // namespace gamemd

// 0x6CC290
namespace gamemd {
void SuperClass::ResetRechargeTime()
{

  this->SuperClass_field_0x24 = (unsigned int)((void *)-1); /*0x6cc290*/

}
} // namespace gamemd

// 0x6CC2B0
namespace gamemd {
wchar_t * SuperClass::NameReadiness()
{

  char *SuperClass_field_0x7C; // ecx
  char *v2; // ecx

  if ( LOBYTE(this->SuperClass_field_0x70) ) /*0x6cc2b0*/
    return GetStringCSF(aTxtHold, 0, (const char *)&g_Str_EVA_ChronosphereReady.SampleIndex[1], 950); /*0x6cc34d*/
  if ( *((unsigned char *)this->SuperClass_field_0x28 + 229) ) /*0x6cc2be*/
  {
    SuperClass_field_0x7C = (char *)this->SuperClass_field_0x7C; /*0x6cc2c8*/
    if ( SuperClass_field_0x7C ) /*0x6cc2ce*/
    {
      v2 = SuperClass_field_0x7C - 1; /*0x6cc2d0*/
      if ( v2 ) /*0x6cc2d1*/
      {
        if ( v2 != (char *)1 ) /*0x6cc2d4*/
          return 0; /*0x6cc2d8*/
        return GetStringCSF( /*0x6cc2ea*/
                 (wchar_t *)&g_Str_EVA_ChronosphereReady.VocClass_field_A4,
                 0,
                 (const char *)&g_Str_EVA_ChronosphereReady.SampleIndex[1],
                 925);
      }
      else
      {
        return GetStringCSF((wchar_t *)(g_Str_TXT_READY), 0, (const char *)&g_Str_EVA_ChronosphereReady.SampleIndex[1], 922); /*0x6cc301*/
      }
    }
    else
    {
      return GetStringCSF( /*0x6cc318*/
               (wchar_t *)&g_Str_EVA_ChronosphereReady.VocClass_field_94,
               0,
               (const char *)&g_Str_EVA_ChronosphereReady.SampleIndex[1],
               919);
    }
  }
  else
  {
    if ( !HIBYTE(this->SuperClass_field_0x6C) ) /*0x6cc323*/
      return 0; /*0x6cc323*/
    return GetStringCSF((wchar_t *)(g_Str_TXT_READY), 0, (const char *)&g_Str_EVA_ChronosphereReady.SampleIndex[1], 944); /*0x6cc336*/
  }

}
} // namespace gamemd

// 0x6CC360
namespace gamemd {
char SuperClass::CanFire()
{

  if ( LOBYTE(this->SuperClass_field_0x70) ) /*0x6cc360*/
    return 0; /*0x6cc381*/
  if ( *((unsigned char *)this->SuperClass_field_0x28 + 229) ) /*0x6cc36a*/
    return this->SuperClass_field_0x7C != 0; /*0x6cc379*/
  return HIBYTE(this->SuperClass_field_0x6C); /*0x6cc37c*/

}
} // namespace gamemd

// 0x6CDE90
namespace gamemd {
bool SuperClass::ShouldDrawProgress()
{

  return *((unsigned char *)this->SuperClass_field_0x28 + 229) || HIBYTE(this->SuperClass_field_0x6C) == 0; /*0x6cde9d*/

}
} // namespace gamemd

// 0x6CDEB0
namespace gamemd {
int SuperClass::ddtor(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x6cdeb6*/
    return -2147467261; /*0x6cdeb8*/
  *a2 = -671656762; /*0x6cdec6*/
  a2[1] = 298989852; /*0x6cdece*/
  a2[2] = 268461211; /*0x6cded7*/
  a2[3] = unk_7E958C; /*0x6cdee0*/
  return 0; /*0x6cdebd*/

}
} // namespace gamemd

// 0x6CDEF0
namespace gamemd {
int SuperClass::LoadFromStream(AbstractClass * aP0, int aP1)
{

  int result; // eax
  int v3; // eax

  result = AbstractClass::SaveLoad_Prefix_0(aP0,(gamemd::AbstractClass *)(aP1)); /*0x6cdefb*/
  if ( result >= 0 ) /*0x6cdf02*/
  {
    if ( aP0 ) /*0x6cdf0a*/
    {
      ((AbstractClass*)(AbstractClass *)aP0)->Constructor(); /*0x6cdf0e*/
      aP0->SuperClass_field_0x0 = &vt_SuperClass; /*0x6cdf13*/
      aP0->SuperClass_field_0x4 = &vt_SuperClass; /*0x6cdf19*/
      aP0->SuperClass_field_0x8 = &vt_SuperClass; /*0x6cdf20*/
      *(unsigned int *)aP0->__pad_C = (unsigned int)(&vt_SuperClass); /*0x6cdf27*/
    }
    if ( aP0->SuperClass_field_0x68 /*0x6cdf70*/
      && (*((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 1)) < ((char *)&g_BuildingLoadQueue_Array)
       || (BYTE1(*((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 0))) || !((char *)&g_BuildingLoadQueue_Array))
       && *((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 2)) > 0
       && (*(uint8_t (**)(int *, int, unsigned int))(*((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 0)) + 8))(
            ((char *)&g_BuildingLoadQueue_Array),
            ((char *)&g_BuildingLoadQueue_Array) + *((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 2)),
            0)) )
    {
      v3 = *((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 1))++; /*0x6cdf7d*/
      *(unsigned int *)(*((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 0)) + 4 * v3) = (unsigned int)(aP0); /*0x6cdf8c*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&aP0->SuperClass_field_0x28); /*0x6cdf98*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&aP0->SuperClass_field_0x2C); /*0x6cdfa6*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&aP0->SuperClass_field_0x68); /*0x6cdfb1*/
    *(unsigned int *)&aP0->__pad_3C[12] = 0; /*0x6cdfb6*/
    *(unsigned int *)&aP0->__pad_3C[16] = 0; /*0x6cdfbd*/
    return 0; /*0x6cdfc4*/
  }
  return result; /*0x6cdfc7*/

}
} // namespace gamemd

// 0x6CDFD0
namespace gamemd {
int SuperClass::SaveState(TechnoTypeClass * aP0, int * a1, int aP2)
{

  int result; // eax

  result = AbstractClass::SaveLoad_Prefix((gamemd::ObjectTypeClass *)((int *)aP0), a1, aP2); /*0x6cdfdf*/
  if ( result >= 0 ) /*0x6cdfe6*/
    return 0; /*0x6cdfe8*/
  return result; /*0x6cdfea*/

}
} // namespace gamemd

// 0x6CDFF0
namespace gamemd {
long long SuperClass::ExecuteAction(unsigned int a2, int a3)
{

  int64_t result; // rax

  result = a2; /*0x6cdff0*/
  if ( (void *)a2 == this->SuperClass_field_0x2C ) /*0x6cdffc*/
    this->SuperClass_field_0x2C = 0; /*0x6cdffe*/
  if ( (void *)a2 == this->SuperClass_field_0x28 ) /*0x6ce004*/
    this->SuperClass_field_0x28 = 0; /*0x6ce006*/
  if ( (void *)a2 == this->SuperClass_field_0x68 ) /*0x6ce00f*/
  {
    this->SuperClass_field_0x68 = 0; /*0x6ce011*/
    LOBYTE(this->SuperClass_field_0x6C) = 1; /*0x6ce014*/
  }
  return result; /*0x6ce00e*/

}
} // namespace gamemd

// 0x6CE020
namespace gamemd {
int SuperClass::PowerDrainUpdate(int * a2)
{

  int v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // edx
  int v7; // eax
  int result; // eax
  int v9; // eax

  v3 = AbstractClass::ProcessPower((AbstractClass *)this); /*0x6ce029*/
  LOBYTE(v3) = BYTE1(this->SuperClass_field_0x6C); /*0x6ce02e*/
  ((Power *)((Power *)a2))->FlagProcess(v3); /*0x6ce034*/
  LOBYTE(v4) = BYTE2(this->SuperClass_field_0x6C); /*0x6ce039*/
  ((Power *)((Power *)a2))->FlagProcess(v4); /*0x6ce03f*/
  LOBYTE(v5) = HIBYTE(this->SuperClass_field_0x6C); /*0x6ce044*/
  ((Power *)((Power *)a2))->FlagProcess(v5); /*0x6ce04a*/
  Power::TimerProcess(this->SuperClass_field_0x78); /*0x6ce055*/
  Power::TimerProcess((int)this->SuperClass_field_0x7C); /*0x6ce060*/
  LOBYTE(v6) = this->SuperClass_field_0x60; /*0x6ce065*/
  v7 = ((Power *)((Power *)a2))->FlagProcess(v6); /*0x6ce06b*/
  LOBYTE(v7) = this->SuperClass_field_0x6C; /*0x6ce070*/
  ((Power *)((Power *)a2))->FlagProcess(v7); /*0x6ce076*/
  result = (int)this->SuperClass_field_0x68; /*0x6ce07b*/
  if ( result ) /*0x6ce080*/
  {
    Power::TimerProcess(*(uint8_t *)(result + 405)); /*0x6ce08d*/
    v9 = (*(int (**)(char *))(*((unsigned int *)this->SuperClass_field_0x68 + 1) + 16))((char *)this->SuperClass_field_0x68 + 4); /*0x6ce09c*/
    return Power::TimerProcess(v9); /*0x6ce0a2*/
  }
  return result; /*0x6ce0a7*/

}
} // namespace gamemd

// 0x6CE1A0
namespace gamemd {
bool SuperClass::ShouldFlashTab()
{

  unsigned char *SuperClass_field_0x28; // eax
  int v2; // eax

  if ( LOBYTE(this->SuperClass_field_0x70) ) /*0x6ce1a0*/
    return 0; /*0x6ce1a5*/
  SuperClass_field_0x28 = (unsigned char *)(this->SuperClass_field_0x28); /*0x6ce1a7*/
  if ( SuperClass_field_0x28[229] ) /*0x6ce1aa*/
  {
    if ( !this->SuperClass_field_0x7C ) /*0x6ce1b9*/
      return 0; /*0x6ce1b9*/
  }
  else if ( !HIBYTE(this->SuperClass_field_0x6C) ) /*0x6ce1c2*/
  {
    return 0; /*0x6ce1c2*/
  }
  v2 = *((unsigned int *)SuperClass_field_0x28 + 58); /*0x6ce1c4*/
  if ( v2 == -1 ) /*0x6ce1cd*/
    return 1; /*0x6ce1d1*/
  return v2 && (int)this->SuperClass_field_0x74 + v2 > *(int *)&(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x6ce1d1*/

}
} // namespace gamemd

// 0x6CE200
namespace gamemd {
int SuperClass::StubReturn57()
{

  return 57; /*0x6ce205*/

}
} // namespace gamemd

// 0x6CE210
namespace gamemd {
int SuperClass::StubReturn128()
{

  return 128; /*0x6ce215*/

}
} // namespace gamemd
