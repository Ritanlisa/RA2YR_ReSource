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

// 0x53AE50
namespace gamemd {
void * SuperClass::LaunchPsychicDominator(int a2)
{

  void *result; // eax
  void *v3; // esi
  void *v4; // eax
  int *v5; // eax
  void **v6; // eax
  int v7; // edx
  int v8[3]; // [esp+4h] [ebp-18h] BYREF
  unsigned int v9[3]; // [esp+10h] [ebp-Ch] BYREF

  result = (void *)g_abs_87F7E8[7806]; /*0x53ae50*/
  if ( *(unsigned int *)(g_abs_87F7E8[7806] + 764) && *(unsigned int *)(g_abs_87F7E8[7806] + 768) ) /*0x53ae66*/
  {
    ((unsigned int *)(dword_A8ED54))[17245] = (int)this; /*0x53ae79*/
    ((unsigned int *)(dword_A8ED54))[17213] = a2; /*0x53ae7f*/
    v3 = *(void **)(g_abs_87F7E8[7806] + 764); /*0x53ae85*/
    v4 = CellCoord::To_CellObj(g_abs_87F7E8, (int16_t *)&((unsigned int *)(dword_A8ED54))[17213]); /*0x53ae95*/
    v5 = (int *)(*(int (**)(void *, unsigned int *))(*(unsigned int *)v4 + 72))(v4, v9); /*0x53aea3*/
    v8[0] = *v5; /*0x53aea8*/
    v8[1] = v5[1]; /*0x53aeb4*/
    v8[2] = v5[2] + 750; /*0x53aec0*/
    v6 = (void **)RA2_OPNEW(456); /*0x53aec4*/
    if ( v6 ) /*0x53aece*/
      ((unsigned int *)(dword_A8ED54))[17244] = (int)AnimClass::ctor(v6, v3, v8, 0, 1, (void *)0x600, 0, 0); /*0x53aeea*/
    else
      ((unsigned int *)(dword_A8ED54))[17244] = 0; /*0x53aef1*/
    v7 = g_abs_87F7E8[536210] + 4680; /*0x53af06*/
    ((unsigned int *)(dword_A8ED54))[17243] = 1; /*0x53af0c*/
    *(unsigned int *)(g_abs_87F7E8[536210] + 4680) = ((unsigned int *)(dword_A8ED54))[12]; /*0x53af1b*/
    *(unsigned int *)(v7 + 4) = v9[1]; /*0x53af21*/
    *(unsigned int *)(v7 + 8) = 1; /*0x53af24*/
    return (void *)ScenarioClass::UpdateLighting(); /*0x53af27*/
  }
  return result; /*0x53af2d*/

}
}
// 0x6CAEC0
namespace gamemd {
void SuperClass::Constructor()
{

  int v2; // eax

  ((AbstractClass *)((AbstractClass *)this))->Constructor(); /*0x6caec3*/
  *((unsigned int *)this + 9) = -1; /*0x6caecd*/
  *((unsigned int *)this + 10) = 0; /*0x6caed0*/
  *((unsigned int *)this + 11) = 0; /*0x6caed3*/
  *((unsigned int *)this + 12) = g_abs_A8ED84; /*0x6caedc*/
  *((unsigned int *)this + 14) = 0; /*0x6caedf*/
  *((unsigned int *)this + 18) = 0; /*0x6caee2*/
  *((unsigned char *)this + 64) = 0; /*0x6caee5*/
  *((unsigned int *)this + 19) = 0; /*0x6caee8*/
  *((unsigned int *)this + 20) = -1; /*0x6caeeb*/
  *((unsigned char *)this + 96) = 1; /*0x6caeee*/
  *(unsigned int *)((char *)this + 98) = g_abs_B0C000; /*0x6caef8*/
  *((unsigned int *)this + 26) = 0; /*0x6caefb*/
  *((unsigned char *)this + 108) = 0; /*0x6caefe*/
  *((unsigned char *)this + 109) = 0; /*0x6caf01*/
  *((unsigned char *)this + 110) = 0; /*0x6caf04*/
  *((unsigned char *)this + 111) = 0; /*0x6caf07*/
  *((unsigned char *)this + 112) = 0; /*0x6caf0a*/
  *((unsigned int *)this + 31) = -1; /*0x6caf0d*/
  *(unsigned int *)this = &vt_SuperClass; /*0x6caf10*/
  *((unsigned int *)this + 1) = &vt_SuperClass; /*0x6caf16*/
  *((unsigned int *)this + 2) = &vt_SuperClass; /*0x6caf1d*/
  *((unsigned int *)this + 3) = &vt_SuperClass; /*0x6caf24*/
  *((unsigned int *)this + 15) = &g_abs_887734; /*0x6caf2b*/
  if ( dword_A83CC8 < dword_A83CC0 /*0x6caf64*/
    || (byte_A83CC5 || !dword_A83CC0)
    && dword_A83CCC > 0
    && (*(uint8_t (**)(int *, int, unsigned int))(dword_A83CB8 + 8))(
         &dword_A83CB8,
         dword_A83CC0 + dword_A83CCC,
         0) )
  {
    v2 = (unsigned int)(dword_A83CC8++);
    *((unsigned int *)dword_A83CBC + v2) = this; /*0x6caf80*/
  }
  return this; /*0x6caf85*/

}
}
// 0x6CAF90
namespace gamemd {
void SuperClass::Construct( int a2, CCINIClass * aP2)
{

  int v4; // edx
  int v5; // eax
  int v6; // eax
  int v7; // eax

  ((AbstractClass *)((AbstractClass *)this))->Constructor(); /*0x6caf94*/
  *(unsigned int *)(this + 40) = a2; /*0x6cafa4*/
  *(unsigned int *)(this + 36) = -1; /*0x6cafa7*/
  *(unsigned int *)(this + 44) = aP2; /*0x6cafaa*/
  *(unsigned int *)(this + 48) = *(unsigned int *)&HouseClass_Player.__pad_5568[23248]; /*0x6cafb5*/
  *(unsigned int *)(this + 56) = 0; /*0x6cafb8*/
  *(unsigned int *)(this + 72) = 0; /*0x6cafbb*/
  *(unsigned char *)(this + 64) = 0; /*0x6cafbe*/
  *(unsigned int *)(this + 76) = 0; /*0x6cafc1*/
  *(unsigned int *)(this + 80) = -1; /*0x6cafc4*/
  *(unsigned char *)(this + 96) = 1; /*0x6cafc7*/
  v4 = *(unsigned int *)&stru_B05488.__pad_579C[5084]; /*0x6cafcb*/
  *(unsigned int *)(this + 120) = -1; /*0x6cafd1*/
  *(unsigned int *)(this + 124) = -1; /*0x6cafd4*/
  *(unsigned int *)(this + 98) = v4; /*0x6cafda*/
  *(unsigned int *)(this + 104) = 0; /*0x6cafde*/
  *(unsigned char *)(this + 108) = 0; /*0x6cafe1*/
  *(unsigned char *)(this + 109) = 0; /*0x6cafe4*/
  *(unsigned char *)(this + 110) = 0; /*0x6cafe7*/
  *(unsigned char *)(this + 111) = 0; /*0x6cafea*/
  *(unsigned char *)(this + 112) = 0; /*0x6cafed*/
  *(unsigned int *)(this + 116) = -100; /*0x6caff0*/
  *(unsigned int *)this = &vt_SuperClass; /*0x6caff7*/
  *(unsigned int *)(this + 4) = &vt_SuperClass; /*0x6caffd*/
  *(unsigned int *)(this + 8) = &vt_SuperClass; /*0x6cb003*/
  *(unsigned int *)(this + 12) = &vt_SuperClass; /*0x6cb00a*/
  AbstractClass::GenerateUniqueID(this + 4); /*0x6cb011*/
  if ( dword_A83CC8 < dword_A83CC0 /*0x6cb049*/
    || (byte_A83CC5 || !dword_A83CC0)
    && dword_A83CCC > 0
    && ((uint8_t (*)(DynamicVector **, int, unsigned int))dword_A83CB8->field_8)(
         &dword_A83CB8,
         dword_A83CC0 + dword_A83CCC,
         0) )
  {
    v5 = dword_A83CC8++; /*0x6cb056*/
    *(unsigned int *)&dword_A83CBC->__pad_0[4 * v5] = this; /*0x6cb065*/
  }
  if ( *(int *)&stru_B05488.__pad_579C[19036] < *(int *)&stru_B05488.__pad_579C[19028] /*0x6cb09c*/
    || (stru_B05488.__pad_579C[19033] || !*(unsigned int *)&stru_B05488.__pad_579C[19028])
    && *(int *)&stru_B05488.__pad_579C[19040] > 0
    && (*(uint8_t (**)(char *, int, unsigned int))(*(unsigned int *)&stru_B05488.__pad_579C[19020] + 8))(
         &stru_B05488.__pad_579C[19020],
         *(unsigned int *)&stru_B05488.__pad_579C[19028] + *(unsigned int *)&stru_B05488.__pad_579C[19040],
         0) )
  {
    v6 = (*(unsigned int *)&stru_B05488.__pad_579C[19036])++; /*0x6cb0a9*/
    *(unsigned int *)(*(unsigned int *)&stru_B05488.__pad_579C[19024] + 4 * v6) = this; /*0x6cb0b8*/
  }
  if ( *(int *)&stru_B05488.__pad_579C[19124] < *(int *)&stru_B05488.__pad_579C[19116] /*0x6cb0ef*/
    || (stru_B05488.__pad_579C[19121] || !*(unsigned int *)&stru_B05488.__pad_579C[19116])
    && *(int *)&stru_B05488.__pad_579C[19128] > 0
    && (*(uint8_t (**)(char *, int, unsigned int))(*(unsigned int *)&stru_B05488.__pad_579C[19108] + 8))(
         &stru_B05488.__pad_579C[19108],
         *(unsigned int *)&stru_B05488.__pad_579C[19116] + *(unsigned int *)&stru_B05488.__pad_579C[19128],
         0) )
  {
    v7 = (*(unsigned int *)&stru_B05488.__pad_579C[19124])++; /*0x6cb0fc*/
    *(unsigned int *)(*(unsigned int *)&stru_B05488.__pad_579C[19112] + 4 * v7) = this; /*0x6cb10b*/
  }
  return this; /*0x6cb110*/

}
}
// 0x6CB120
namespace gamemd {
SuperClass * * SuperClass::CleanupMembers()
{

  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  SuperClass * v9;

  v2 = *((unsigned int *)this + 26); /*0x6cb124*/
  *(unsigned int *)this = &vt_SuperClass; /*0x6cb127*/
  *((unsigned int *)this + 1) = &vt_SuperClass; /*0x6cb12f*/
  *((unsigned int *)this + 2) = &vt_SuperClass; /*0x6cb136*/
  *((unsigned int *)this + 3) = &vt_SuperClass; /*0x6cb13d*/
  if ( v2 ) /*0x6cb144*/
  {
    *(unsigned char *)(v2 + 405) = 0; /*0x6cb146*/
    *((unsigned int *)this + 26) = 0; /*0x6cb14d*/
    v9 = this; /*0x6cb164*/
    v3 = (*(int (**)(int *, int *))(g_abs_B0F5B8 + 16))(&g_abs_B0F5B8, &v9); /*0x6cb168*/
    if ( v3 != -1 ) /*0x6cb16e*/
      DynamicVector::RemoveItem(&g_abs_B0F5B8, v3); /*0x6cb176*/
  }
  if ( *((unsigned char *)this + 108) ) /*0x6cb17b*/
  {
    v9 = this; /*0x6cb192*/
    v4 = (*(int (**)(int *, int *))(g_abs_B0F5B8 + 16))(&g_abs_B0F5B8, &v9); /*0x6cb196*/
    if ( v4 != -1 ) /*0x6cb19c*/
      DynamicVector::RemoveItem(&g_abs_B0F5B8, v4); /*0x6cb1a4*/
    *((unsigned char *)this + 108) = 0; /*0x6cb1a9*/
  }
  v9 = this; /*0x6cb1bd*/
  v5 = (*(int (**)(int *, int *))(g_abs_A83D50 + 16))(&g_abs_A83D50, &v9); /*0x6cb1c1*/
  if ( v5 != -1 && v5 < (int)((int))((int))(g_abs_A83D60) && v5 < --g_abs_A83D60 ) /*0x6cb1dc*/
  {
    do /*0x6cb1f4*/
    {
      ++v5; /*0x6cb1e4*/
      *((unsigned int *)g_abs_A83D54 + v5 - 1) = *((unsigned int *)g_abs_A83D54 + v5); /*0x6cb1e8*/
    }
    while ( v5 < (int)((int))((int))(g_abs_A83D60) ); /*0x6cb1f4*/
  }
  v9 = this; /*0x6cb206*/
  v6 = (*(int (**)(int *, int *))(dword_A83CB8 + 16))(&dword_A83CB8, &v9); /*0x6cb20a*/
  if ( v6 != -1 && v6 < dword_A83CC8 && v6 < --dword_A83CC8 ) /*0x6cb225*/
  {
    do /*0x6cb23d*/
    {
      ++v6; /*0x6cb22d*/
      *((unsigned int *)dword_A83CBC + v6 - 1) = *((unsigned int *)dword_A83CBC + v6); /*0x6cb231*/
    }
    while ( v6 < dword_A83CC8 ); /*0x6cb23d*/
  }
  v9 = this; /*0x6cb24f*/
  v7 = (*(int (**)(int *, int *))(g_abs_B0F670 + 16))(&g_abs_B0F670, &v9); /*0x6cb253*/
  if ( v7 != -1 && v7 < (int)(g_abs_B0F680) && v7 < (int)((int))(--g_abs_B0F680) ) /*0x6cb26e*/
  {
    do /*0x6cb286*/
    {
      ++v7; /*0x6cb276*/
      *((unsigned int *)g_abs_B0F674 + v7 - 1) = *((unsigned int *)g_abs_B0F674 + v7); /*0x6cb27a*/
    }
    while ( v7 < (int)(g_abs_B0F680) ); /*0x6cb286*/
  }
  v9 = this; /*0x6cb298*/
  v8 = (*(int (**)(int *, int *))(g_abs_B0F6C8 + 16))(&g_abs_B0F6C8, &v9); /*0x6cb29c*/
  if ( v8 != -1 && v8 < (int)((int))(g_abs_B0F6D8) && v8 < --g_abs_B0F6D8 ) /*0x6cb2b7*/
  {
    do /*0x6cb2cf*/
    {
      ++v8; /*0x6cb2bf*/
      *((unsigned int *)g_abs_B0F6CC + v8 - 1) = *((unsigned int *)g_abs_B0F6CC + v8); /*0x6cb2c3*/
    }
    while ( v8 < (int)(g_abs_B0F6D8) ); /*0x6cb2cf*/
  }
  AbstractClass::DTOR((unsigned int *)this); /*0x6cb2d3*/

}
}
// 0x6CB560
namespace gamemd {
AbstractClass * * SuperClass::StartTimer(IUnknown * aP1, IUnknown * aP2, IUnknown * aP3)
{

  char v5; // al
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  int v9; // eax
  int v10; // edx
  TerrainTypeClass *v11; // eax
  IUnknown *v12; // ecx
  int v13; // edx
  int v14; // edi
  int v15; // eax
  DynamicVector *DefaultTimer; // eax
  int v17; // eax
  DynamicVector *v18; // ecx
  int v19; // edx
  int v21; // [esp+8h] [ebp-Ch] BYREF
  int v22; // [esp+Ch] [ebp-8h]
  DynamicVector *v23; // [esp+10h] [ebp-4h]

  if ( !*((unsigned char *)this + 109) ) /*0x6cb569*/
  {
    v5 = (char)aP1; /*0x6cb572*/
    v6 = *((unsigned int *)this + 10); /*0x6cb576*/
    *((unsigned char *)this + 109) = 1; /*0x6cb579*/
    *((unsigned char *)this + 110) = v5; /*0x6cb57d*/
    *((unsigned char *)this + 64) = 0; /*0x6cb580*/
    v7 = *(unsigned int *)(v6 + 96); /*0x6cb583*/
    IDA_LOBYTE(aP1) = 0; /*0x6cb589*/
    *((unsigned int *)this + 15) = v7; /*0x6cb58d*/
    if ( !v5 && *((unsigned char *)this + 112) && *((unsigned char *)this + 96) ) /*0x6cb597*/
    {
      if ( *(unsigned char *)(v6 + 245) ) /*0x6cb59c*/
      {
        if ( *((unsigned int *)this + 12) != -1 ) /*0x6cb5bd*/
        {
          *((unsigned int *)this + 14) = CDTimerClass::TimeRemaining((int *)((char *)this + 48)); /*0x6cb5c6*/
          *((unsigned int *)this + 12) = -1; /*0x6cb5c9*/
        }
      }
      else if ( *((unsigned int *)this + 12) == -1 ) /*0x6cb5a8*/
      {
        *((unsigned int *)this + 12) = *(unsigned int *)&g_abs_A8D63C; /*0x6cb5af*/
      }
      *((unsigned char *)this + 112) = 0; /*0x6cb5cf*/
    }
    if ( *(unsigned char *)(*((unsigned int *)this + 10) + 244) /*0x6cb61f*/
      && !*(unsigned char *)(*(unsigned int *)(*((unsigned int *)this + 11) + 52) + 422)
      && (g_abs_A83D60 < g_abs_A83D58
       || (g_abs_A83D5D || !g_abs_A83D58)
       && g_abs_A83D64 > (unsigned char [1])(0)
       && ((uint8_t (*)(DynamicVector **, int, unsigned int))g_abs_A83D50->field_8)(
            &g_abs_A83D50,
            (unsigned int)(g_abs_A83D58)+ g_abs_A83D64,
            0)) )
    {
      v8 = (int)(g_abs_A83D60++);
      *(unsigned int *)&g_abs_A83D54->__pad_0[4 * v8] = this; /*0x6cb63b*/
    }
    v9 = *((unsigned int *)this + 10); /*0x6cb63e*/
    if ( *(unsigned char *)(v9 + 245) ) /*0x6cb641*/
    {
      v10 = *((unsigned int *)this + 9); /*0x6cb649*/
      *((unsigned int *)this + 30) = -1; /*0x6cb64c*/
      if ( v10 == -1 ) /*0x6cb656*/
        v10 = *(unsigned int *)(v9 + 176); /*0x6cb658*/
      v11 = (TerrainTypeClass *)((char *)this + 48); /*0x6cb664*/
      *((unsigned int *)this + 12) = *(unsigned int *)&g_abs_A8D63C; /*0x6cb669*/
      *((unsigned int *)this + 13) = v22; /*0x6cb66f*/
      *((unsigned int *)this + 14) = v10; /*0x6cb672*/
      v12 = *(IUnknown **)((char *)this + 48); /*0x6cb675*/
      if ( v12 != (IUnknown *)-1 ) /*0x6cb67a*/
      {
        v13 = *((unsigned int *)this + 14); /*0x6cb680*/
        v14 = *(unsigned int *)&g_abs_A8D63C - (unsigned int)v12; /*0x6cb68e*/
        if ( *(unsigned int *)&g_abs_A8D63C - (int)v12 >= v13 ) /*0x6cb692*/
        {
          *((unsigned int *)this + 14) = 0; /*0x6cb6a6*/
          *(unsigned int *)v11->__pad_0 = -1; /*0x6cb6a9*/
        }
        else
        {
          *(unsigned int *)v11->__pad_0 = -1; /*0x6cb696*/
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
        aP1 = (IUnknown *)this; /*0x6cb6ce*/
        VectorClass::RemoveAt((int *)&g_abs_B077F8, (int)&aP1); /*0x6cb6d2*/
      }
      if ( *((unsigned char *)this + 108) ) /*0x6cb6d7*/
      {
        aP1 = (IUnknown *)this; /*0x6cb6e6*/
        VectorClass::RemoveAt((int *)&g_abs_B077F8, (int)&aP1); /*0x6cb6ea*/
        *((unsigned char *)this + 108) = 0; /*0x6cb6ef*/
      }
      if ( !*((unsigned char *)this + 109) /*0x6cb704*/
        || *((unsigned char *)this + 111)
        || *((unsigned char *)this + 112) && !*(unsigned char *)(*((unsigned int *)this + 10) + 237) )
      {
        IDA_LOBYTE(aP1) = 0; /*0x6cb757*/
      }
      else
      {
        *((unsigned int *)this + 30) = -1; /*0x6cb70f*/
        SuperClass::SetCurrentFrame((unsigned int *)((char *)this + 48)); /*0x6cb718*/
        DefaultTimer = (DynamicVector *)Super::GetDefaultTimer((unsigned int *)this); /*0x6cb71f*/
        Timer::Start(&v21, DefaultTimer); /*0x6cb729*/
        v17 = v22; /*0x6cb732*/
        v18 = v23; /*0x6cb736*/
        *((unsigned int *)this + 12) = v21; /*0x6cb73a*/
        v19 = *((unsigned int *)this + 10); /*0x6cb73c*/
        *((unsigned int *)this + 13) = v17; /*0x6cb73f*/
        *((unsigned int *)this + 14) = v18; /*0x6cb742*/
        if ( *(unsigned char *)(v19 + 229) ) /*0x6cb745*/
          *((unsigned int *)this + 31) = 0; /*0x6cb74d*/
        IDA_LOBYTE(aP1) = 1; /*0x6cb750*/
      }
    }
    if ( (unsigned char)aP3 && *((unsigned char *)this + 109) ) /*0x6cb764*/
    {
      if ( *((unsigned char *)this + 110) ) /*0x6cb769*/
        goto LABEL_45; /*0x6cb76c*/
      if ( *((unsigned char *)this + 112) != 1 ) /*0x6cb772*/
      {
        if ( *((unsigned char *)this + 96) ) /*0x6cb774*/
        {
          SuperClass::AdvanceCountdown((int *)((char *)this + 48)); /*0x6cb77c*/
          *((unsigned char *)this + 112) = 1; /*0x6cb781*/
        }
      }
    }
    if ( !*((unsigned char *)this + 110) ) /*0x6cb788*/
      return (char)aP1; /*0x6cb79f*/
LABEL_45:
    SuperClass::AnnounceReady(this, (DynamicVector *)aP2); /*0x6cb78a*/
    return (char)aP1; /*0x6cb791*/
  }
  return 0; /*0x6cb79a*/

}
}
// 0x6CB7B0
namespace gamemd {
int SuperClass::Lose()
{

  int v1; // eax
  unsigned char *v3; // [esp+0h] [ebp-4h] BYREF

  v3 = (unsigned char *)(this);
  if ( !*((unsigned char *)this + 109) ) /*0x6cb7b1*/
    return 0; /*0x6cb80d*/
  *((unsigned char *)this + 111) = 0; /*0x6cb7ba*/
  *((unsigned char *)this + 109) = 0; /*0x6cb7bd*/
  v3 = this; /*0x6cb7ca*/
  v1 = (*(int (**)(int *, unsigned char **))(g_abs_A83D50 + 16))(&g_abs_A83D50, &v3); /*0x6cb7d4*/
  if ( v1 != -1 && v1 < (int)(g_abs_A83D60) && v1 < (int)(--g_abs_A83D60) ) /*0x6cb7ef*/
  {
    do /*0x6cb807*/
    {
      ++v1; /*0x6cb7f7*/
      *((unsigned int *)g_abs_A83D54 + v1 - 1) = *((unsigned int *)g_abs_A83D54 + v1); /*0x6cb7fb*/
    }
    while ( v1 < (int)(g_abs_A83D60) ); /*0x6cb807*/
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
    v8[0] = this; /*0x6cb859*/
    v4 = (*(int (**)(char *, unsigned int *))(*(unsigned int *)&g_abs_B077F8 + 16))( /*0x6cb85d*/
           &g_abs_B077F8,
           v8);
    if ( v4 != -1 ) /*0x6cb863*/
      DynamicVector::RemoveItem(&g_abs_B077F8, v4); /*0x6cb86b*/
  }
  if ( *((unsigned char *)this + 108) ) /*0x6cb870*/
  {
    v8[0] = this; /*0x6cb885*/
    v5 = (*(int (**)(char *, unsigned int *))(*(unsigned int *)&g_abs_B077F8 + 16))( /*0x6cb889*/
           &g_abs_B077F8,
           v8);
    if ( v5 != -1 ) /*0x6cb88f*/
      DynamicVector::RemoveItem(&g_abs_B077F8, v5); /*0x6cb897*/
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
    *((unsigned int *)this + 12) = *(unsigned int *)&g_abs_A8D63C; /*0x6cb8ce*/
  v6 = *((unsigned int *)this + 9); /*0x6cb8d1*/
  if ( v6 == -1 ) /*0x6cb8d7*/
    v6 = *(unsigned int *)(*((unsigned int *)this + 10) + 176); /*0x6cb8dc*/
  *((unsigned int *)this + 12) = *(unsigned int *)&g_abs_A8D63C; /*0x6cb8e7*/
  *((unsigned int *)this + 13) = v8[2]; /*0x6cb8ee*/
  *((unsigned int *)this + 14) = v6; /*0x6cb8f1*/
  if ( *(unsigned char *)(*((unsigned int *)this + 10) + 229) ) /*0x6cb8f7*/
    *((unsigned int *)this + 31) = 0; /*0x6cb8ff*/
  return 1; /*0x6cb902*/

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
    if ( (uint8_t)House::IsCurrentPlayer(*(void **)((char *)this + 44)) ) /*0x6cb93c*/
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
        v9 = g_abs_A8ED84; /*0x6cb979*/
        v10 = (wchar_t **)((char *)this + 48); /*0x6cb97f*/
        if ( v7 != -1 ) /*0x6cb985*/
        {
          if ( (int)g_abs_A8ED84 - v7 >= v8 ) /*0x6cb98d*/
          {
            a2 = 0; /*0x6cb9c7*/
            goto LABEL_11; /*0x6cb9cb*/
          }
          v8 -= (int)g_abs_A8ED84 - v7; /*0x6cb98f*/
        }
        a2 = v8; /*0x6cb991*/
LABEL_11:
        v11 = (wchar_t *)Math::RoundToInt((double)(int)a3 - (double)a2 /*0x6cb995*/
                                                          / *(double *)&g_abs_8871E0->WallBuildSpeedCoefficient[2]);
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
        v16 = g_abs_A8ED84; /*0x6cb9f5*/
        if ( v14 != -1 ) /*0x6cb9fe*/
        {
          if ( (int)g_abs_A8ED84 - v14 >= v15 ) /*0x6cba06*/
            v15 = 0; /*0x6cba0c*/
          else
            v15 -= (int)g_abs_A8ED84 - v14; /*0x6cba08*/
        }
        v17 = Math::RoundToInt((double)(v13 - v15) * *(double *)&g_abs_8871E0->WallBuildSpeedCoefficient[2]); /*0x6cba23*/
        v18 = a2; /*0x6cba2c*/
        *((unsigned int *)this + 12) = v16; /*0x6cba30*/
        *((unsigned int *)this + 13) = v30; /*0x6cba33*/
        *((unsigned int *)this + 14) = v17; /*0x6cba36*/
        SuperClass::Launch(this, v18, a3, v18); /*0x6cba41*/
        return 0; /*0x6cba4f*/
      }
    }
    else if ( !*(unsigned char *)(*((unsigned int *)this + 11) + 506) ) /*0x6cba55*/
    {
      SuperClass::Launch(this, a2, a3, a2); /*0x6cba6d*/
      return 0; /*0x6cba7a*/
    }
    return 0; /*0x6cbc96*/
  }
  v19 = (wchar_t **)((char *)this + 48); /*0x6cba80*/
  if ( (*((unsigned int *)this + 12) == -1 || !*((unsigned char *)this + 109) || !*((unsigned char *)this + 111)) && !*(unsigned char *)(v4 + 238) ) /*0x6cba98*/
    return 0; /*0x6cba98*/
  if ( *(unsigned int *)(v4 + 180) == 2 && (uint8_t)Weapon_Helper() ) /*0x6cbaa7*/
  {
    if ( (unsigned char)a2 ) /*0x6cbab4*/
    {
      Weapon_Get(); /*0x6cbaba*/
      return 0; /*0x6cbac7*/
    }
    return 0; /*0x6cbab4*/
  }
  if ( *(unsigned int *)(*((unsigned int *)this + 10) + 180) == 7 && PsyDom::IsActive() ) /*0x6cbad6*/
  {
    if ( (unsigned char)a2 ) /*0x6cbae3*/
    {
      Weapon_Get_53B410(); /*0x6cbae9*/
      return 0; /*0x6cbaf6*/
    }
    return 0; /*0x6cbae3*/
  }
  SuperClass::Launch(this, a2, a3, a2); /*0x6cbb05*/
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
      v24 = g_abs_A8ED84; /*0x6cbb79*/
      *((unsigned int *)this + 30) = -1; /*0x6cbb80*/
      *v19 = v24; /*0x6cbb87*/
      *((unsigned int *)this + 13) = v30; /*0x6cbb8d*/
      *((unsigned int *)this + 14) = v23; /*0x6cbb90*/
      v25 = *v19; /*0x6cbb93*/
      if ( *v19 != (wchar_t *)-1 ) /*0x6cbb98*/
      {
        v26 = *((unsigned int *)this + 14); /*0x6cbb9e*/
        v27 = (char *)((char *)g_abs_A8ED84 - (char *)v25); /*0x6cbbac*/
        if ( (char *)g_abs_A8ED84 - (char *)v25 >= v26 ) /*0x6cbbb0*/
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
        a2 = this; /*0x6cbc10*/
        VectorClass::RemoveAt(&g_abs_B0F5B8, (int)&a2); /*0x6cbc14*/
      }
      if ( *((unsigned char *)this + 108) ) /*0x6cbc19*/
      {
        a2 = this; /*0x6cbc28*/
        VectorClass::RemoveAt(&g_abs_B0F5B8, (int)&a2); /*0x6cbc2c*/
        *((unsigned char *)this + 108) = 0; /*0x6cbc31*/
      }
      if ( *((unsigned char *)this + 109) /*0x6cbc46*/
        && !*((unsigned char *)this + 111)
        && (!*((unsigned char *)this + 112) || *(unsigned char *)(*((unsigned int *)this + 10) + 237)) )
      {
        *((unsigned int *)this + 30) = -1; /*0x6cbc4e*/
        if ( *v19 == (wchar_t *)-1 ) /*0x6cbc5a*/
          *v19 = g_abs_A8ED84; /*0x6cbc62*/
        v29 = *((unsigned int *)this + 9); /*0x6cbc64*/
        if ( v29 == -1 ) /*0x6cbc6a*/
          v29 = *(unsigned int *)(*((unsigned int *)this + 10) + 176); /*0x6cbc6f*/
        *v19 = g_abs_A8ED84; /*0x6cbc7a*/
        *((unsigned int *)this + 13) = v30; /*0x6cbc80*/
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
  a2 = this; /*0x6cbb41*/
  v22 = (*(int (**)(int *, int *))(g_abs_A83D50 + 16))(&g_abs_A83D50, &a2); /*0x6cbb45*/
  if ( v22 != -1 ) /*0x6cbb4b*/
    SuperClass::RemoveFromPointerArray(v22); /*0x6cbb53*/
  return 1; /*0x6cb9bc*/

}
}
// 0x6CC080
namespace gamemd {
int SuperClass::AnnounceReady(DynamicVector * aP1)
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
      *((unsigned int *)this + 12) = *(unsigned int *)&g_abs_A8D63C; /*0x6cc0c8*/
    *((unsigned int *)this + 12) = *(unsigned int *)&g_abs_A8D63C; /*0x6cc0d4*/
    *((unsigned int *)this + 13) = v7; /*0x6cc0db*/
    *((unsigned int *)this + 14) = v5; /*0x6cc0de*/
    if ( (unsigned char)aP1 ) /*0x6cc0e4*/
    {
      switch ( *(unsigned int *)(*((unsigned int *)this + 10) + 180) ) /*0x6cc0fc*/
      {
        case 0: /*0x6cc0fc*/
          VoxClass::FindAndPlay(&stru_830620.__pad_579C[50968], -1, -1); /*0x6cc10d*/
          break; /*0x6cc10d*/
        case 1: /*0x6cc0fc*/
          VoxClass::FindAndPlay(&stru_830620.__pad_579C[50944], -1, -1); /*0x6cc119*/
          break; /*0x6cc119*/
        case 2: /*0x6cc0fc*/
          VoxClass::FindAndPlay(&stru_830620.__pad_579C[50896], -1, -1); /*0x6cc131*/
          break; /*0x6cc131*/
        case 3: /*0x6cc0fc*/
          VoxClass::FindAndPlay(&stru_830620.__pad_579C[50844], -1, -1); /*0x6cc149*/
          break; /*0x6cc149*/
        case 5: /*0x6cc0fc*/
        case 6: /*0x6cc0fc*/
          VoxClass::FindAndPlay(&stru_830620.__pad_579C[50820], -1, -1); /*0x6cc155*/
          break; /*0x6cc155*/
        case 7: /*0x6cc0fc*/
          VoxClass::FindAndPlay(&stru_830620.__pad_579C[50868], -1, -1); /*0x6cc13d*/
          break; /*0x6cc13d*/
        case 8: /*0x6cc0fc*/
          VoxClass::FindAndPlay(&stru_830620.__pad_579C[50800], -1, -1); /*0x6cc161*/
          break; /*0x6cc161*/
        case 9: /*0x6cc0fc*/
          VoxClass::FindAndPlay(&stru_830620.__pad_579C[50776], -1, -1); /*0x6cc16d*/
          break; /*0x6cc16d*/
        case 0xA: /*0x6cc0fc*/
          VoxClass::FindAndPlay(&stru_830620.__pad_579C[50920], -1, -1); /*0x6cc125*/
          break; /*0x6cc125*/
        case 0xB: /*0x6cc0fc*/
          VoxClass::FindAndPlay(&stru_830620.__pad_579C[50752], -1, -1); /*0x6cc179*/
          break; /*0x6cc179*/
        default:
          break;
      }
    }
    v6 = *((unsigned int *)this + 10); /*0x6cc17e*/
    *((unsigned int *)this + 29) = *(unsigned int *)&g_abs_A8D63C; /*0x6cc187*/
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

  IDA_LOBYTE(v3) = *((unsigned char *)this + 109); /*0x6cc1e6*/
  if ( (unsigned char)v3 ) /*0x6cc1eb*/
  {
    IDA_LOBYTE(v3) = a2; /*0x6cc1ed*/
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
        *v3 = g_abs_A8ED84; /*0x6cc23c*/
      *v3 = g_abs_A8ED84; /*0x6cc248*/
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

  SuperClass *v4; // ebx
  int v5; // ebp
  void *v6; // eax
  int v7; // eax
  AnimClass *v8; // eax
  AbstractClass **v9; // eax
  unsigned char *v10; // eax
  void *v11; // eax
  int v12; // eax
  int16_t *v13; // ebp
  void *v14; // eax
  int v15; // eax
  IUnknown *v16; // esi
  unsigned char *v17; // eax
  IUnknown *v18; // eax
  void **v19; // eax
  void **v20; // eax
  char *v21; // edi
  int16_t v22; // cx
  int16_t v23; // dx
  int *v24; // esi
  int16_t v25; // ax
  bool v26; // zf
  int v27; // ecx
  int v28; // edx
  unsigned int *v29; // edx
  bool v30; // bl
  int v31; // eax
  int Member; // eax
  int *v33; // eax
  unsigned int *v34; // eax
  int v35; // ecx
  int v36; // edi
  int *v37; // eax
  int v38; // eax
  IUnknown **v39; // ebx
  int v40; // eax
  int InstanceCOM; // eax
  int v42; // edi
  int16_t v43; // ax
  int v44; // edi
  void *v45; // eax
  int v46; // eax
  SuperClass *v47; // ecx
  int v48; // eax
  SuperClass *v49; // eax
  SuperClass *v50; // edi
  IUnknown *v51; // edi
  void *v52; // eax
  unsigned int *v53; // ebp
  unsigned int *v54; // eax
  int v55; // ecx
  int v56; // edx
  int v57; // edi
  int v58; // ebx
  void *v59; // eax
  unsigned int *v60; // eax
  IUnknown *v61; // edi
  int v62; // ecx
  int v63; // eax
  IUnknown *v64; // edx
  int v65; // eax
  IUnknown *v66; // edx
  int v67; // eax
  unsigned short *v68; // eax
  int16_t v69; // dx
  void *v70; // eax
  AnimClass *v71; // eax
  AnimClass *v72; // eax
  void *v73; // eax
  unsigned int *v74; // eax
  AnimClass *v75; // eax
  void *v76; // eax
  int *v77; // eax
  int v78; // edi
  int v79; // esi
  void **v80; // eax
  int v81; // edx
  char *v82; // edi
  int16_t v83; // dx
  int16_t v84; // ax
  int v85; // esi
  int16_t v86; // cx
  AnimClass *v87; // eax
  void *v88; // eax
  int v89; // eax
  void **v90; // eax
  IUnknown *v91; // eax
  int v92; // ecx
  IUnknown *v93; // eax
  void *v94; // ecx
  AudioController *v95; // ecx
  void *v96; // eax
  int v97; // edx
  int v98; // ebp
  int v99; // eax
  IUnknown *v100; // ecx
  int v101; // edi
  void **v102; // esi
  unsigned int *v103; // eax
  IUnknown *v104; // eax
  int eax143a; // eax
  AnimClass *v105; // eax
  int v107; // esi
  int *v108; // eax
  IUnknown *v109; // ebp
  IUnknown *eax153; // eax
  IUnknown *v110; // edi
  int v112; // eax
  unsigned int *v113; // eax
  int v114; // ecx
  int v115; // edi
  int v116; // ecx
  unsigned int *v117; // eax
  int v118; // ecx
  int v119; // edi
  int v120; // ecx
  unsigned int *v121; // eax
  int i; // edi
  int v123; // ecx
  char *ecx179; // ecx
  AnimClass *v124; // eax
  int v126; // ebp
  int *v127; // eax
  IUnknown *v128; // edi
  IUnknown *eax186; // eax
  IUnknown *v129; // esi
  unsigned int *v131; // eax
  int v132; // ecx
  int v133; // esi
  int v134; // ecx
  int v135; // esi
  IUnknown *eax198; // eax
  IUnknown *v136; // edi
  int v138; // ecx
  int v139; // eax
  int v140; // ebp
  void *v141; // esi
  int *v142; // eax
  IUnknown *v143; // ecx
  unsigned int *eax208a; // eax
  IUnknown *v144; // esi
  void *v146; // eax
  int v147; // eax
  void **v148; // eax
  int v149; // edx
  char *v150; // edi
  int16_t v151; // dx
  int16_t v152; // ax
  unsigned int *v153; // esi
  int16_t v154; // cx
  unsigned int *v155; // ebp
  int v156; // ecx
  void *v157; // eax
  int v158; // esi
  AbstractClass *v159; // ebp
  BulletClass *UIObject; // edi
  double v161; // st7
  double st7_238a; // st7
  double st7_238b; // st7
  IUnknown *v162; // edx
  AnimClass *v163; // eax
  DynamicVector *ecx244; // ecx
  ObjectClass *v165; // esi
  IUnknown *v166; // eax
  int edx247; // edx
  IUnknown *v168; // esi
  IUnknown *v169; // eax
  AnimClass *v170; // eax
  int v173; // [esp+54h] [ebp-1D8h] BYREF
  IUnknown *a1; // [esp+58h] [ebp-1D4h] BYREF
  int v175; // [esp+5Ch] [ebp-1D0h]
  IUnknown *GroundHeight; // [esp+60h] [ebp-1CCh]
  SuperClass *var1C8; // [esp+64h] [ebp-1C8h] BYREF
  BuildingTypeClass *v178; // [esp+68h] [ebp-1C4h]
  MouseClass *v177; // [esp+6Ch] [ebp-1C0h]
  SuperClass *v180; // [esp+70h] [ebp-1BCh] BYREF
  int j; // [esp+74h] [ebp-1B8h]
  IUnknown *ppv; // [esp+78h] [ebp-1B4h] BYREF
  double v183; // [esp+7Ch] [ebp-1B0h] BYREF
  IUnknown *var1A8; // [esp+84h] [ebp-1A8h]
  SuperClass *var1A4; // [esp+88h] [ebp-1A4h] BYREF
  IUnknown *v184; // [esp+8Ch] [ebp-1A0h]
  IUnknown *v185; // [esp+90h] [ebp-19Ch] BYREF
  int v188; // [esp+94h] [ebp-198h]
  IUnknown *v189; // [esp+98h] [ebp-194h]
  int v190; // [esp+9Ch] [ebp-190h]
  double v191; // [esp+A0h] [ebp-18Ch] BYREF
  double v192; // [esp+A8h] [ebp-184h]
  int v193; // [esp+B0h] [ebp-17Ch] BYREF
  int v194; // [esp+B4h] [ebp-178h] BYREF
  int v195; // [esp+B8h] [ebp-174h]
  IUnknown *var170; // [esp+BCh] [ebp-170h]
  MouseClass *v197; // [esp+C0h] [ebp-16Ch] BYREF
  IUnknown *v196; // [esp+C4h] [ebp-168h] BYREF
  BuildingTypeClass *v199; // [esp+C8h] [ebp-164h] BYREF
  int var160; // [esp+CCh] [ebp-160h] BYREF
  SuperClass *v201; // [esp+D0h] [ebp-15Ch] BYREF
  BuildingTypeClass *v200; // [esp+D4h] [ebp-158h] BYREF
  unsigned int v203[2]; // [esp+D8h] [ebp-154h] BYREF
  char *v204; // [esp+E0h] [ebp-14Ch]
  SuperClass *var148; // [esp+E4h] [ebp-148h] BYREF
  MouseClass *v206; // [esp+E8h] [ebp-144h] BYREF
  IUnknown *v205; // [esp+ECh] [ebp-140h] BYREF
  SuperClass *v208; // [esp+F0h] [ebp-13Ch] BYREF
  BuildingTypeClass *v209; // [esp+F4h] [ebp-138h] BYREF
  CoordStruct aP2; // [esp+F8h] [ebp-134h] BYREF
  CoordStruct v211; // [esp+104h] [ebp-128h] BYREF
  unsigned int v212[3]; // [esp+110h] [ebp-11Ch] BYREF
  CoordStruct v213; // [esp+11Ch] [ebp-110h] BYREF
  CoordStruct v214; // [esp+128h] [ebp-104h] BYREF
  CoordStruct v215; // [esp+134h] [ebp-F8h] BYREF
  int v216; // [esp+140h] [ebp-ECh] BYREF
  int v217; // [esp+144h] [ebp-E8h] BYREF
  unsigned long long v218[3]; // [esp+148h] [ebp-E4h] BYREF
  char v219[4]; // [esp+160h] [ebp-CCh] BYREF
  int v220; // [esp+164h] [ebp-C8h]
  char v221[12]; // [esp+16Ch] [ebp-C0h] BYREF
  char v222[12]; // [esp+178h] [ebp-B4h] BYREF
  char v223[12]; // [esp+184h] [ebp-A8h] BYREF
  char v224[12]; // [esp+190h] [ebp-9Ch] BYREF
  char v225[12]; // [esp+19Ch] [ebp-90h] BYREF
  char v226[12]; // [esp+1A8h] [ebp-84h] BYREF
  char v227[12]; // [esp+1B4h] [ebp-78h] BYREF
  char v228[12]; // [esp+1C0h] [ebp-6Ch] BYREF
  char v229[12]; // [esp+1CCh] [ebp-60h] BYREF
  char v230[12]; // [esp+1D8h] [ebp-54h] BYREF
  char v231[8]; // [esp+1E4h] [ebp-48h] BYREF
  char v232[16]; // [esp+1ECh] [ebp-40h] BYREF
  char v233[12]; // [esp+1FCh] [ebp-30h] BYREF
  char v234[12]; // [esp+208h] [ebp-24h] BYREF
  int v235[3]; // [esp+214h] [ebp-18h] BYREF
  int v236[3]; // [esp+220h] [ebp-Ch] BYREF

  v4 = (SuperClass *)ecx0;
  v5 = *(unsigned int *)(ecx0 + 40);
  v184 = (IUnknown *)ecx0;
  switch ( *(unsigned int *)(v5 + 180) )
  {
    case 0:
      if ( *(unsigned char *)(ecx0 + 111) )
      {
        if ( *(unsigned char *)(ecx0 + 110) && *(unsigned char *)(ecx0 + 109) )
        {
          var1C8 = *(SuperClass **)aP3;
          GroundHeight = 0;
          a1 = (IUnknown *)(((int16_t)var1C8 << 8) + 128);
          v175 = (IDA_SHIWORD(var1C8) << 8) + 128;
          GroundHeight = (IUnknown *)Cell::GetGroundHeight((IUnknown *)&a1);
          if ( (*((unsigned int *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (int16_t *)&var1C8) + 80) & 0x100) != 0 )
            GroundHeight = (IUnknown *)((char *)GroundHeight + *(unsigned int *)&stru_B05488.__pad_579C[5208]);
          v158 = *(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[23132]
                           + 4 * SuperWeaponClass::FindByName(g_INI_Key_NukePayload));
          v159 = (AbstractClass *)Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)&a1);
          v189 = GroundHeight;
          v185 = a1;
          v188 = v175;
          v203[0] = a1;
          v203[1] = v175;
          v204 = &GroundHeight->__pad_14B0[14704];
          UIObject = (BulletClass *)CreateUIObjectCOM(
                                      *(IUnknown **)(v158 + 160),
                                      v159,
                                      0,
                                      *(AbstractClass **)(v158 + 164),
                                      *(AbstractClass **)(v158 + 172),
                                      *(unsigned int *)(v158 + 168),
                                      0);
          Function::Method_46B260(UIObject, v158);
          HouseClass::PsiWarn((InfantryClass *)v4->field_2C, (int)v159, (int)UIObject, aPsiwarn);
          if ( UIObject )
          {
            v183 = Math::SinCos((IUnknown *)0xFE8FBDA);
            v161 = Math::ArcTan2((IUnknown *)0xFE8FBDA);
            v183 = v161 * v183 * -100.0;
            v191 = Math::ArcTan2((IUnknown *)0xFE8FBDA);
            st7_238a = Math::ArcTan2((IUnknown *)0xFE8FBDA);
            v192 = v183;
            *(double *)&v218[1] = v183;
            v191 = st7_238a * v191 * -100.0;
            *(double *)v218 = v191;
            st7_238b = Math::SinCos((IUnknown *)0xFE8FBDA);
            v162 = *(IUnknown **)UIObject->__pad_0;
            *(double *)&v218[2] = st7_238b * -100.0;
            (*(void (**)(BulletClass *, unsigned int *, unsigned long long *))&v162->__pad_1D8[24])(UIObject, v203, v218);
            if ( !*(unsigned int *)&HouseClass_Player.__pad_5568[8836] )
              VoxClass::FindAndPlay(&stru_830620.__pad_579C[51052], -1, -1);
            PlayAudioAt2(*(IUnknown **)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 372), &v185, 0);
          }
          if ( a4 )
          {
            *(unsigned int *)&stru_87C374.__pad_14B0[12668] = -1;
            v163 = (AnimClass *)VocClass::FindByName(&stru_830620.__pad_579C[50968]);
            ClearThemeQueuePlaylist((int)v163);
          }
          *((unsigned char *)v4->field_2C + 508) = 1;
        }
        else
        {
          ecx244 = 0;
          if ( (int)g_TriggerClassCount > 0 )
          {
            v165 = (ObjectClass *)g_TriggerTypeCount;
            while ( 1 )
            {
              v166 = *(IUnknown **)v165->__pad_0;
              if ( *(unsigned char *)(*(unsigned int *)v165->__pad_0 + 5818) )
              {
                edx247 = *(unsigned int *)(v5 + 152);
                if ( *(unsigned int *)&v166->__pad_14B0[576] == edx247 || *(unsigned int *)&v166->__pad_14B0[580] == edx247 )
                  break;
              }
              ecx244 = (DynamicVector *)((char *)ecx244 + 1);
              v165 = (ObjectClass *)((char *)v165 + 4);
              if ( (int)ecx244 >= (int)g_TriggerClassCount )
                goto LABEL_254;
            }
            v168 = (IUnknown *)HouseClass::FindBuildingOfType((int *)v4->field_2C, ecx244, -1);
            if ( v168 )
            {
              GroundHeight = 0;
              IDA_LODWORD(v183) = *(unsigned int *)aP3;
              v175 = (SWORD1(v183) << 8) + 128;
              a1 = (IUnknown *)((IDA_SLOWORD(v183) << 8) + 128);
              GroundHeight = (IUnknown *)Cell::GetGroundHeight((IUnknown *)&a1);
              v189 = GroundHeight;
              v169 = (IUnknown *)v168->field_0;
              v185 = a1;
              v188 = v175;
              (*(void (**)(IUnknown *, int, unsigned int))&v169->__pad_1D8[16])(v168, 22, 0);
              (*(void (**)(IUnknown *))(v168->field_0 + 492))(v168);
              *((unsigned int *)v4->field_2C + 5601) = *(unsigned int *)aP3;
              *(unsigned int *)&v168->__pad_524[212] = *((unsigned int *)v4->field_28 + 45);
              PlayAudioAt2(*(IUnknown **)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 372), &v185, 0);
              if ( !*(unsigned int *)&HouseClass_Player.__pad_5568[8836] )
                VoxClass::FindAndPlay(&stru_830620.__pad_579C[51052], -1, -1);
            }
          }
LABEL_254:
          if ( a4 )
          {
            *(unsigned int *)&stru_87C374.__pad_14B0[12668] = -1;
            v170 = (AnimClass *)VocClass::FindByName(&stru_830620.__pad_579C[50968]);
            ClearThemeQueuePlaylist((int)v170);
          }
          *((unsigned char *)v4->field_2C + 508) = 1;
        }
      }
      break;
    case 1:
      if ( *(unsigned char *)(ecx0 + 111) )
      {
        v76 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], aP3);
        v77 = (int *)(*(int (**)(void *, char *))(*(unsigned int *)v76 + 72))(v76, v222);
        v78 = *v77;
        v188 = v77[1];
        v79 = v77[2];
        if ( (*((unsigned int *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], aP3) + 80) & 0x100) != 0 )
          v79 += *(unsigned int *)&stru_B05488.__pad_579C[5208];
        v80 = (void **)RA2_OPNEW(0x1C8u);
        if ( v80 )
        {
          v214.Y = v188;
          v214.Z = v79 + 5;
          v214.X = v78;
          AnimClass::ctor(
            v80,
            *(CoordStruct **)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 840),
            &v214,
            0,
            (CoordStruct *)1,
            (void *)0x600,
            0,
            0);
        }
        if ( !*(unsigned int *)&HouseClass_Player.__pad_5568[8836] )
          VoxClass::FindAndPlay(&stru_830620.__pad_579C[51116], -1, -1);
        CreateTriggerClassIfFarEnough((IUnknown *)0xD, v81, *(IUnknown **)aP3);
        v82 = &stru_B05488.__pad_579C[5140];
        do
        {
          v83 = aP3[1] + *((unsigned short *)v82 + 1);
          IDA_LOWORD(var1C8) = *(unsigned short *)v82 + *aP3;
          IDA_HIWORD(var1C8) = v83;
          v201 = var1C8;
          if ( (*((unsigned int *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (int16_t *)&v201) + 80) & 0x100) != 0 )
          {
            v84 = aP3[1] + *((unsigned short *)v82 + 1);
            IDA_LOWORD(v177) = *(unsigned short *)v82 + *aP3;
            IDA_HIWORD(v177) = v84;
            v205 = (IUnknown *)v177;
            v85 = *((unsigned int *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (int16_t *)&v205) + 58);
          }
          else
          {
            v86 = aP3[1] + *((unsigned short *)v82 + 1);
            IDA_LOWORD(v178) = *(unsigned short *)v82 + *aP3;
            IDA_HIWORD(v178) = v86;
            v209 = v178;
            v85 = *((unsigned int *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (int16_t *)&v209) + 57);
          }
          for ( ; v85; v85 = *(unsigned int *)(v85 + 48) )
          {
            if ( (*(unsigned char *)(v85 + 20) & 4) == 0 || !*(unsigned char *)(v85 + 636) )
              (*(void (**)(int, unsigned int, void *, unsigned int))(*(unsigned int *)v85 + 340))(
                v85,
                *(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 4072),
                v4->field_2C,
                0);
          }
          v82 += 4;
        }
        while ( (int)v82 < (int)&stru_B05488.__pad_579C[5176] );
        if ( a4 )
        {
          *(unsigned int *)&stru_87C374.__pad_14B0[12668] = -1;
          v87 = (AnimClass *)VocClass::FindByName(&stru_830620.__pad_579C[50944]);
          ClearThemeQueuePlaylist((int)v87);
        }
      }
      break;
    case 2:
      if ( *(unsigned char *)(ecx0 + 111) )
      {
        LightningStorm::Start(
          *(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 6044),
          *(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 6036),
          *(unsigned int *)aP3,
          *(void **)(ecx0 + 44));
        if ( !*(unsigned int *)&HouseClass_Player.__pad_5568[8836] )
          VoxClass::FindAndPlay(aEvaLightningst, -1, -1);
        if ( a4 )
        {
          *(unsigned int *)&stru_87C374.__pad_14B0[12668] = -1;
          v72 = (AnimClass *)VocClass::FindByName(&stru_830620.__pad_579C[50896]);
          ClearThemeQueuePlaylist((int)v72);
        }
      }
      break;
    case 3:
      if ( *(unsigned char *)(ecx0 + 111) )
      {
        *(unsigned int *)(ecx0 + 98) = *(unsigned int *)aP3;
        v6 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], aP3);
        v7 = (*(int (**)(void *, char *))(*(unsigned int *)v6 + 72))(v6, v233);
        a1 = *(IUnknown **)v7;
        v175 = *(unsigned int *)(v7 + 4);
        GroundHeight = *(IUnknown **)(v7 + 8);
        if ( (*((unsigned int *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], aP3) + 80) & 0x100) != 0 )
          GroundHeight = (IUnknown *)((char *)GroundHeight + *(unsigned int *)&stru_B05488.__pad_579C[5208]);
        v8 = (AnimClass *)Coord3D::Set(v235, 0, 0, 5);
        v9 = (AbstractClass **)Coord3D::Add(&a1, (IUnknown *)v236, v8);
        SuperClass::CreateChronoAnim((int)v4, *v9, (SuperClass *)v9[1], (int)v9[2]);
        if ( a4 )
        {
          *(unsigned int *)&stru_87C374.__pad_14B0[12668] = 4;
        }
        else
        {
          v10 = v4->field_68;
          if ( v10 )
          {
            v10[413] = 1;
            AudioController::Stop((unsigned int *)v4->field_68 + 104);
          }
        }
      }
      break;
    case 4:
      CreateTriggerClassIfFarEnough((IUnknown *)0xD, a2, *(IUnknown **)(ecx0 + 98));
      CreateTriggerClassIfFarEnough((IUnknown *)0xD, *(unsigned int *)aP3, *(IUnknown **)aP3);
      v11 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], aP3);
      v12 = (*(int (**)(void *, char *))(*(unsigned int *)v11 + 72))(v11, v223);
      v183 = *(double *)v12;
      v13 = *(int16_t **)(v12 + 8);
      v14 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (int16_t *)&v4->field_60 + 1);
      v15 = (*(int (**)(void *, char *))(*(unsigned int *)v14 + 72))(v14, v219);
      a1 = *(IUnknown **)v15;
      v175 = *(unsigned int *)(v15 + 4);
      GroundHeight = *(IUnknown **)(v15 + 8);
      if ( (*((unsigned int *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], aP3) + 80) & 0x100) != 0 )
        v13 = (int16_t *)((char *)v13 + *(unsigned int *)&stru_B05488.__pad_579C[5208]);
      v16 = GroundHeight;
      if ( (*((unsigned int *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (int16_t *)&v4->field_60 + 1) + 80) & 0x100) != 0 )
        v16 = (IUnknown *)((char *)GroundHeight + *(unsigned int *)&stru_B05488.__pad_579C[5208]);
      v17 = v4->field_68;
      if ( v17 )
      {
        v17[405] = 0;
        v4->field_68 = 0;
        var1C8 = v4;
        v18 = (IUnknown *)(*(int (**)(char *, SuperClass **))(*(unsigned int *)&stru_B05488.__pad_579C[18836] + 16))(
                            &stru_B05488.__pad_579C[18836],
                            &var1C8);
        if ( v18 != (IUnknown *)-1 )
          DynamicVector::RemoveItem(&stru_B05488.__pad_579C[18836], v18);
      }
      if ( IDA_LOBYTE(v4->field_6C) )
      {
        var1C8 = v4;
        VectorClass::RemoveAt((int *)&stru_B05488.__pad_579C[18836], (int)&var1C8);
        IDA_LOBYTE(v4->field_6C) = 0;
      }
      v19 = (void **)RA2_OPNEW(0x1C8u);
      if ( v19 )
      {
        *(double *)&aP2.X = v183;
        aP2.Z = (int)v13 + 5;
        AnimClass::ctor(
          v19,
          *(CoordStruct **)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 812),
          &aP2,
          0,
          (CoordStruct *)1,
          (void *)0x600,
          0,
          0);
      }
      v20 = (void **)RA2_OPNEW(0x1C8u);
      if ( v20 )
      {
        v215.X = (int)a1;
        v215.Y = v175;
        v215.Z = (int)&v16->field_4 + 1;
        AnimClass::ctor(
          v20,
          *(CoordStruct **)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 808),
          &v215,
          0,
          (CoordStruct *)1,
          (void *)0x600,
          0,
          0);
      }
      v21 = &stru_B05488.__pad_579C[5140];
      j = (int)&stru_B05488.__pad_579C[5140];
      do
      {
        v22 = *((unsigned short *)v21 + 1) + *(unsigned short *)v4->__pad_64;
        IDA_LOWORD(var170) = *(unsigned short *)v21 + IDA_HIWORD(v4->field_60);
        IDA_HIWORD(var170) = v22;
        v196 = var170;
        if ( (*((unsigned int *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (int16_t *)&v196) + 80) & 0x100) != 0 )
        {
          v23 = *((unsigned short *)v21 + 1) + *(unsigned short *)v4->__pad_64;
          IDA_LOWORD(v195) = IDA_HIWORD(v4->field_60) + *(unsigned short *)v21;
          IDA_HIWORD(v195) = v23;
          var160 = v195;
          v24 = (int *)*((unsigned int *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (int16_t *)&var160) + 58);
        }
        else
        {
          v25 = *((unsigned short *)v21 + 1) + *(unsigned short *)v4->__pad_64;
          IDA_LOWORD(v178) = IDA_HIWORD(v4->field_60) + *(unsigned short *)v21;
          IDA_HIWORD(v178) = v25;
          v199 = v178;
          v24 = (int *)*((unsigned int *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (int16_t *)&v199) + 57);
        }
        if ( v24 )
        {
          do
          {
            v26 = (v24[5] & 4) == 0;
            IDA_HIBYTE(v190) = (v24[5] & 4) != 0;
            if ( !v26 && !(*(uint8_t (**)(int *))(*v24 + 84))(v24) )
            {
              v27 = v24[421];
              if ( v27 )
              {
                if ( *(unsigned char *)((*(int (**)(int))(*(unsigned int *)v27 + 132))(v27) + 3278) )
                {
                  v28 = *(unsigned int *)(v24[421] + 1692);
                  if ( v28 )
                  {
                    v29 = (unsigned int *)(v28 + 44);
                    *v29 = *(unsigned int *)&HouseClass_Player.__pad_5568[23248];
                    v29[1] = v220;
                    v29[2] = 500;
                    BuildingClass::Deploy(*(unsigned int *)(v24[421] + 1692), (int)v13, (int)v21);
                  }
                }
              }
              v30 = 0;
              if ( (*(int (**)(int *))(*v24 + 44))(v24) == 1 )
              {
                v31 = (*(int (**)(int *))(*v24 + 44))(v24);
                Member = Team::GetMember(v31 == 1 ? v24 : 0, 0);
                v21 = (char *)Member;
                if ( Member )
                {
                  if ( (*(int (**)(int))(*(unsigned int *)Member + 44))(Member) == 6
                    && *(unsigned char *)(*((unsigned int *)v21 + 328) + 5821) )
                  {
                    v33 = (*(int (**)(int *))(*v24 + 44))(v24) == 1 ? v24 + 39 : (int *)156;
                    v212[0] = *v33;
                    v212[1] = v33[1];
                    v212[2] = v33[2];
                    v34 = Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)v212);
                    v30 = Cell::IsBridge(v34) == (unsigned int *)v21;
                  }
                }
              }
              if ( !*(unsigned char *)((*(int (**)(int *))(*v24 + 132))(v24) + 3479)
                || *(unsigned char *)((*(int (**)(int *))(*v24 + 132))(v24) + 3284)
                || (*(uint8_t (**)(int *))(*v24 + 84))(v24) )
              {
                if ( !(*(uint8_t (**)(int *))(*v24 + 352))(v24)
                  && !*((unsigned char *)v24 + 636)
                  && !(*(uint8_t (**)(int *))(*v24 + 468))(v24)
                  && !(*(uint8_t (**)(int *))(*v24 + 472))(v24)
                  && !v30 )
                {
                  v35 = v24[185];
                  if ( v35 && (*(int (**)(int))(*(unsigned int *)v35 + 44))(v35) == 6 )
                  {
                    v36 = v24[185];
                    if ( v36 )
                      v37 = (*(int (**)(int))(*(unsigned int *)v36 + 44))(v24[185]) == 6 ? (int *)v36 : 0;
                    else
                      v37 = 0;
                    BuildingClass::UpdateDamageAnim(v37);
                  }
                  v38 = v24[413];
                  v39 = (IUnknown **)(v24 + 413);
                  v180 = 0;
                  if ( v38 )
                  {
                    v40 = StreamClass::Set(&v180, (IUnknown *)(v24 + 413));
                    if ( v40 < 0 && v40 != -2147467262 )
                      WinAPI::Wrapper(v40);
                  }
                  ppv = 0;
                  InstanceCOM = CreateInstanceCOM((LPVOID *)&ppv, (IID *)&g_CLSID_HoverLocomotion, 0, 7u);
                  if ( InstanceCOM < 0 && InstanceCOM != -2147467262 )
                    WinAPI::Wrapper(InstanceCOM);
                  v42 = (*(int (**)(int *))(*v24 + 44))(v24);
                  v43 = aP3[1] + *(unsigned short *)(j + 2);
                  IDA_LOWORD(v177) = *aP3 + *(unsigned short *)j;
                  IDA_HIWORD(v177) = v43;
                  v44 = v42 == 1 ? (unsigned int)v24 : 0;
                  v197 = v177;
                  IDA_LODWORD(v183) = v44;
                  v45 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (int16_t *)&v197);
                  v46 = (*(int (**)(void *, char *))(*(unsigned int *)v45 + 72))(v45, v225);
                  a1 = *(IUnknown **)v46;
                  v175 = *(unsigned int *)(v46 + 4);
                  GroundHeight = *(IUnknown **)(v46 + 8);
                  if ( (*((unsigned int *)Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)&a1) + 80) & 0x100) != 0 )
                    GroundHeight = (IUnknown *)((char *)GroundHeight + *(unsigned int *)&stru_B05488.__pad_579C[5208]);
                  if ( v44 )
                  {
                    if ( !*v39 )
                      WinAPI::Wrapper(-2147467261);
                    (*(void (**)(IUnknown *, unsigned int))((*v39)->field_0 + 156))(*v39, 0);
                    v189 = GroundHeight;
                    if ( !*v39 )
                      WinAPI::Wrapper(-2147467261);
                    (*(void (**)(IUnknown *, int, IUnknown *, int, IUnknown *))((*v39)->field_0 + 112))(
                      *v39,
                      -1,
                      a1,
                      v175,
                      v189);
                    (*(void (**)(int *, IUnknown **))(*v24 + 244))(v24, &a1);
                    *((unsigned char *)v24 + 1718) = 1;
                  }
                  if ( !ppv )
                    WinAPI::Wrapper(-2147467261);
                  (*(void (**)(IUnknown *, int *))(ppv->field_0 + 12))(ppv, v24);
                  v47 = 0;
                  var1A4 = 0;
                  if ( ppv )
                  {
                    v48 = StreamClass::Set(&var1A4, (IUnknown *)&ppv);
                    if ( v48 < 0 && v48 != -2147467262 )
                      WinAPI::Wrapper(v48);
                    v47 = var1A4;
                  }
                  v49 = v180;
                  if ( v180 != v47 )
                  {
                    v180 = v47;
                    v50 = v49;
                    CellClass::SetField2C((int *)&v180);
                    if ( v50 )
                      (*(void (**)(SuperClass *))(v50->field_0 + 8))(v50);
                    v49 = v180;
                    v47 = var1A4;
                  }
                  if ( v47 )
                  {
                    (*(void (**)(SuperClass *))(v47->field_0 + 8))(v47);
                    v49 = v180;
                  }
                  if ( v49 )
                  {
                    (*(void (**)(SuperClass *, IUnknown *))(v49->field_0 + 12))(v49, *v39);
                    v51 = *v39;
                    if ( *v39 != ppv )
                    {
                      *v39 = ppv;
                      SuperClass::SetFieldX(v24 + 413);
                      if ( v51 )
                        (*(void (**)(IUnknown *))(v51->field_0 + 8))(v51);
                    }
                  }
                  v52 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (int16_t *)&v184->field_60 + 1);
                  v53 = (unsigned int *)(*(int (**)(void *, char *))(*(unsigned int *)v52 + 72))(v52, v231);
                  v54 = (unsigned int *)(*(int (**)(int *, char *))(*v24 + 72))(v24, v227);
                  v55 = v53[2];
                  v56 = v53[1];
                  v57 = *v54 - *v53;
                  v13 = aP3;
                  v58 = v54[1] - v56;
                  v204 = (char *)(v54[2] - v55);
                  if ( !IDA_LODWORD(v183) )
                  {
                    v59 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], aP3);
                    v60 = (unsigned int *)(*(int (**)(void *, char *))(*(unsigned int *)v59 + 72))(v59, v221);
                    v61 = (IUnknown *)(*v60 + v57);
                    v62 = v60[1];
                    v63 = v60[2];
                    v175 = v58 + v62;
                    a1 = v61;
                    GroundHeight = (IUnknown *)&v204[v63];
                    if ( (*((unsigned int *)Coord::To_Cell(&stru_87C374.__pad_14B0[8132], (IUnknown *)&a1) + 80) & 0x100) != 0 )
                      GroundHeight = (IUnknown *)((char *)GroundHeight + *(unsigned int *)&stru_B05488.__pad_579C[5208]);
                  }
                  v64 = a1;
                  v65 = v175;
                  *((unsigned char *)v24 + 636) = 1;
                  v24[162] = (int)v64;
                  v66 = GroundHeight;
                  v24[163] = v65;
                  v67 = *v24;
                  v24[164] = (int)v66;
                  (*(void (**)(int *, int))(v67 + 640))(v24, 3);
                  v68 = (unsigned short *)j;
                  v24[267] = *(unsigned int *)&v184->__pad_28[4];
                  v69 = aP3[1] + v68[1];
                  IDA_LOWORD(var1C8) = *aP3 + *v68;
                  IDA_HIWORD(var1C8) = v69;
                  var148 = var1C8;
                  v21 = (char *)*v24;
                  v70 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (int16_t *)&var148);
                  (*((void (**)(int *, void *, int))v21 + 288))(v24, v70, 1);
                  if ( ppv )
                    (*(void (**)(IUnknown *))(ppv->field_0 + 8))(ppv);
                  if ( v180 )
                    (*(void (**)(SuperClass *))(v180->field_0 + 8))(v180);
                }
              }
              else
              {
                IDA_LODWORD(v191) = *(unsigned int *)((*(int (**)(int *))(*v24 + 132))(v24) + 160);
                (*(void (**)(int *, double *, unsigned int, unsigned int, unsigned int, int, unsigned int, unsigned int))(*v24 + 364))(
                  v24,
                  &v191,
                  0,
                  *(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 4008),
                  0,
                  1,
                  0,
                  *(unsigned int *)&v184->__pad_28[4]);
              }
            }
            v24 = (int *)v24[12];
          }
          while ( v24 );
          v4 = (SuperClass *)v184;
          v21 = (char *)j;
        }
        v21 += 4;
        j = (int)v21;
      }
      while ( (int)v21 < (int)&stru_B05488.__pad_579C[5176] );
      if ( !*(unsigned int *)&HouseClass_Player.__pad_5568[8836] )
        VoxClass::FindAndPlay(&stru_830620.__pad_579C[51176], -1, -1);
      if ( a4 )
      {
        *(unsigned int *)&stru_87C374.__pad_14B0[12668] = -1;
        v71 = (AnimClass *)VocClass::FindByName(&stru_830620.__pad_579C[50844]);
        ClearThemeQueuePlaylist((int)v71);
      }
      break;
    case 5:
      if ( *(unsigned char *)(ecx0 + 111) )
      {
        v107 = TypeClass::FindByName(&stru_830620.__pad_579C[14668]);
        v108 = (int *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], aP3);
        v109 = (IUnknown *)v108;
        if ( v108 && v108 != g_CellClassArray )
        {
          if ( Cell::IsValidHeight(v108) )
          {
            v193 = 0;
            var1C8 = (SuperClass *)*LayerClass::Pathfinding_Find(
                                      (IUnknown *)&stru_87C374.__pad_14B0[8132],
                                      (IUnknown *)&v193,
                                      (IUnknown *)&v217,
                                      (IUnknown *)aP3,
                                      0,
                                      (IUnknown *)0xFFFFFFFF,
                                      0,
                                      0,
                                      (IUnknown *)1,
                                      (IUnknown *)1,
                                      0,
                                      0,
                                      0,
                                      (IUnknown *)1,
                                      (IUnknown *)&v193,
                                      0,
                                      0);
            if ( var1C8 != *(SuperClass **)&stru_B05488.__pad_579C[5084] )
            {
              eax153 = (IUnknown *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (int16_t *)&var1C8);
              v110 = eax153;
              if ( eax153 )
              {
                if ( eax153 != (IUnknown *)g_CellClassArray && !Cell::IsValidHeight(&eax153->field_0) )
                  v109 = v110;
              }
            }
          }
          v112 = *((unsigned int *)v4->field_2C + 122);
          if ( v112 )
          {
            if ( v112 == 2 )
            {
              v117 = *(unsigned int **)&stru_87C374.__pad_579C[22224];
              v118 = *(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 3260);
              if ( v118 == *(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 3288) )
              {
                v119 = 0;
                if ( v118 > 0 )
                {
                  do
                  {
                    v120 = *(unsigned int *)(*(unsigned int *)(v117[812] + 4 * v119) + 3576);
                    if ( v107 != -1 && v120 != -1 )
                    {
                      SpawnSuperWeaponUnits(
                        (unsigned int *)v4->field_2C,
                        v107,
                        (IUnknown *)1,
                        26,
                        (int)v109,
                        0,
                        v120,
                        *(unsigned int *)(v117[819] + 4 * v119));
                      v117 = *(unsigned int **)&stru_87C374.__pad_579C[22224];
                    }
                    ++v119;
                  }
                  while ( v119 < v117[815] );
                }
              }
            }
            else
            {
              v121 = *(unsigned int **)&stru_87C374.__pad_579C[22224];
              for ( i = 0; i < v121[801]; ++i )
              {
                v123 = *(unsigned int *)(*(unsigned int *)(v121[798] + 4 * i) + 3576);
                if ( v107 != -1 && v123 != -1 )
                {
                  SpawnSuperWeaponUnits(
                    (unsigned int *)v4->field_2C,
                    v107,
                    (IUnknown *)1,
                    26,
                    (int)v109,
                    0,
                    v123,
                    *(unsigned int *)(v121[805] + 4 * i));
                  v121 = *(unsigned int **)&stru_87C374.__pad_579C[22224];
                }
              }
            }
          }
          else
          {
            v113 = *(unsigned int **)&stru_87C374.__pad_579C[22224];
            v114 = *(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 3148);
            if ( v114 == *(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 3176) )
            {
              v115 = 0;
              if ( v114 > 0 )
              {
                do
                {
                  v116 = *(unsigned int *)(*(unsigned int *)(v113[784] + 4 * v115) + 3576);
                  if ( v107 != -1 && v116 != -1 )
                  {
                    SpawnSuperWeaponUnits(
                      (unsigned int *)v4->field_2C,
                      v107,
                      (IUnknown *)1,
                      26,
                      (int)v109,
                      0,
                      v116,
                      *(unsigned int *)(v113[791] + 4 * v115));
                    v113 = *(unsigned int **)&stru_87C374.__pad_579C[22224];
                  }
                  ++v115;
                }
                while ( v115 < v113[787] );
              }
            }
          }
        }
        goto LABEL_178;
      }
      break;
    case 6:
      if ( *(unsigned char *)(ecx0 + 111) )
      {
        v126 = TypeClass::FindByName(&stru_830620.__pad_579C[14668]);
        v127 = (int *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], aP3);
        v128 = (IUnknown *)v127;
        if ( v127 && v127 != g_CellClassArray )
        {
          if ( Cell::IsValidHeight(v127) )
          {
            v194 = 0;
            var1C8 = (SuperClass *)*LayerClass::Pathfinding_Find(
                                      (IUnknown *)&stru_87C374.__pad_14B0[8132],
                                      (IUnknown *)&v194,
                                      (IUnknown *)&v216,
                                      (IUnknown *)aP3,
                                      0,
                                      (IUnknown *)0xFFFFFFFF,
                                      0,
                                      0,
                                      (IUnknown *)1,
                                      (IUnknown *)1,
                                      0,
                                      0,
                                      0,
                                      (IUnknown *)1,
                                      (IUnknown *)&v194,
                                      0,
                                      0);
            if ( var1C8 != *(SuperClass **)&stru_B05488.__pad_579C[5084] )
            {
              eax186 = (IUnknown *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (int16_t *)&var1C8);
              v129 = eax186;
              if ( eax186 )
              {
                if ( eax186 != (IUnknown *)g_CellClassArray && !Cell::IsValidHeight(&eax186->field_0) )
                  v128 = v129;
              }
            }
          }
          v131 = *(unsigned int **)&stru_87C374.__pad_579C[22224];
          v132 = *(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 3092);
          if ( v132 == *(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 3120) )
          {
            v133 = 0;
            if ( v132 > 0 )
            {
              do
              {
                v134 = *(unsigned int *)(*(unsigned int *)(v131[770] + 4 * v133) + 3576);
                if ( v126 != -1 && v134 != -1 )
                {
                  SpawnSuperWeaponUnits(
                    (unsigned int *)v4->field_2C,
                    v126,
                    (IUnknown *)1,
                    26,
                    (int)v128,
                    0,
                    v134,
                    *(unsigned int *)(v131[777] + 4 * v133));
                  v131 = *(unsigned int **)&stru_87C374.__pad_579C[22224];
                }
                ++v133;
              }
              while ( v133 < v131[773] );
            }
          }
        }
LABEL_178:
        if ( a4 )
        {
          *(unsigned int *)&stru_87C374.__pad_14B0[12668] = -1;
          ecx179 = &stru_830620.__pad_579C[50820];
          goto LABEL_180;
        }
      }
      break;
    case 7:
      if ( *(unsigned char *)(ecx0 + 111) )
      {
        CreateTriggerClassIfFarEnough((IUnknown *)0xD, *(unsigned int *)aP3, *(IUnknown **)aP3);
        SuperClass::LaunchPsychicDominator((void *)v4->field_2C, *(unsigned int *)aP3);
        if ( !*(unsigned int *)&HouseClass_Player.__pad_5568[8836] )
          VoxClass::FindAndPlay(&stru_830620.__pad_579C[51144], -1, -1);
        v73 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], aP3);
        v74 = (unsigned int *)(*(int (**)(void *, char *))(*(unsigned int *)v73 + 72))(v73, v229);
        PlayAudioAt2(*(IUnknown **)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 588), v74, 0);
        if ( a4 )
        {
          *(unsigned int *)&stru_87C374.__pad_14B0[12668] = -1;
          v75 = (AnimClass *)VocClass::FindByName(&stru_830620.__pad_579C[50868]);
          ClearThemeQueuePlaylist((int)v75);
        }
      }
      break;
    case 8:
      if ( *(unsigned char *)(ecx0 + 111) )
      {
        v135 = TypeClass::FindByName(&stru_830620.__pad_579C[51108]);
        eax198 = (IUnknown *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], aP3);
        v136 = eax198;
        if ( eax198 )
        {
          if ( eax198 != (IUnknown *)g_CellClassArray )
          {
            v138 = *(unsigned int *)&stru_87C374.__pad_579C[22224];
            v139 = *(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 3148);
            if ( v139 == *(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 3176) )
            {
              v140 = 0;
              if ( v139 > 0 )
              {
                do
                {
                  if ( v135 != -1 )
                  {
                    globalHelper_05EAB0((unsigned int *)v4->field_2C, v135, (IUnknown *)1, 30, (int)v136, 0);
                    v138 = *(unsigned int *)&stru_87C374.__pad_579C[22224];
                  }
                  ++v140;
                }
                while ( v140 < *(unsigned int *)(v138 + 3148) );
              }
            }
          }
        }
        if ( a4 )
        {
          *(unsigned int *)&stru_87C374.__pad_14B0[12668] = -1;
          ecx179 = &stru_830620.__pad_579C[50800];
          goto LABEL_180;
        }
      }
      break;
    case 9:
      if ( *(unsigned char *)(ecx0 + 111) )
      {
        v144 = (IUnknown *)aP3;
        v146 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], aP3);
        v147 = (*(int (**)(void *, char *))(*(unsigned int *)v146 + 72))(v146, v234);
        a1 = *(IUnknown **)v147;
        v175 = *(unsigned int *)(v147 + 4);
        GroundHeight = *(IUnknown **)(v147 + 8);
        if ( (*((unsigned int *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], aP3) + 80) & 0x100) != 0 )
          GroundHeight = (IUnknown *)((char *)GroundHeight + *(unsigned int *)&stru_B05488.__pad_579C[5208]);
        v148 = (void **)RA2_OPNEW(0x1C8u);
        if ( v148 )
        {
          v213.X = (int)a1;
          v213.Y = v175;
          v213.Z = (int)&GroundHeight->field_4 + 1;
          AnimClass::ctor(
            v148,
            *(CoordStruct **)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 664),
            &v213,
            0,
            (CoordStruct *)1,
            (void *)0x600,
            0,
            0);
        }
        if ( !*(unsigned int *)&HouseClass_Player.__pad_5568[8836] )
          VoxClass::FindAndPlay(&stru_830620.__pad_579C[51080], -1, -1);
        PlayAudioAt2(*(IUnknown **)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 592), &a1, 0);
        CreateTriggerClassIfFarEnough((IUnknown *)0xD, v149, *(IUnknown **)aP3);
        if ( *(unsigned char *)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 6088) )
        {
          PlaySoundEffectAt(
            (TechnoClass *)&a1,
            (IUnknown *)0x2710,
            0,
            *(ObjectClass **)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 3996),
            0,
            (int)v4->field_2C);
        }
        else
        {
          v150 = &stru_B05488.__pad_579C[5140];
          while ( 1 )
          {
            v151 = IDA_HIWORD(v144->field_0) + *((unsigned short *)v150 + 1);
            IDA_LOWORD(var1C8) = *(unsigned short *)v150 + IDA_LOWORD(v144->field_0);
            IDA_HIWORD(var1C8) = v151;
            v208 = var1C8;
            if ( (*((unsigned int *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (int16_t *)&v208) + 80) & 0x100) != 0 )
            {
              v152 = IDA_HIWORD(v144->field_0) + *((unsigned short *)v150 + 1);
              IDA_LOWORD(v177) = *(unsigned short *)v150 + IDA_LOWORD(v144->field_0);
              IDA_HIWORD(v177) = v152;
              v206 = v177;
              v153 = (unsigned int *)*((unsigned int *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (int16_t *)&v206) + 58);
            }
            else
            {
              v154 = IDA_HIWORD(v144->field_0) + *((unsigned short *)v150 + 1);
              IDA_LOWORD(v178) = *(unsigned short *)v150 + IDA_LOWORD(v144->field_0);
              IDA_HIWORD(v178) = v154;
              v200 = v178;
              v153 = (unsigned int *)*((unsigned int *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], (int16_t *)&v200) + 57);
            }
            if ( v153 )
            {
              do
              {
                v155 = (unsigned int *)v153[12];
                if ( v153 && (*(int (**)(unsigned int *))(*v153 + 44))(v153) == 15 )
                {
                  v156 = *(unsigned int *)((*(int (**)(unsigned int *))(*v153 + 132))(v153) + 160);
                  v157 = v4->field_2C;
                  IDA_LODWORD(v183) = v156;
                  (*(void (**)(unsigned int *, double *, unsigned int, unsigned int, unsigned int, int, unsigned int, void *))(*v153 + 364))(
                    v153,
                    &v183,
                    0,
                    *(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 3992),
                    0,
                    1,
                    0,
                    v157);
                }
                v153 = v155;
              }
              while ( v155 );
            }
            v150 += 4;
            if ( (int)v150 >= (int)&stru_B05488.__pad_579C[5176] )
              break;
            v144 = (IUnknown *)aP3;
          }
        }
        if ( a4 )
        {
          *(unsigned int *)&stru_87C374.__pad_14B0[12668] = -1;
          ecx179 = &stru_830620.__pad_579C[50776];
          goto LABEL_180;
        }
      }
      break;
    case 0xA:
      if ( *(unsigned char *)(ecx0 + 111) )
      {
        v88 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], aP3);
        v89 = (*(int (**)(void *, char *))(*(unsigned int *)v88 + 72))(v88, v224);
        a1 = *(IUnknown **)v89;
        v175 = *(unsigned int *)(v89 + 4);
        GroundHeight = *(IUnknown **)(v89 + 8);
        if ( (*((unsigned int *)CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], aP3) + 80) & 0x100) != 0 )
          GroundHeight = (IUnknown *)((char *)GroundHeight + *(unsigned int *)&stru_B05488.__pad_579C[5208]);
        v90 = (void **)RA2_OPNEW(0x1C8u);
        if ( v90 )
        {
          v211.X = (int)a1;
          v211.Y = v175;
          v211.Z = (int)&GroundHeight->field_4 + 1;
          AnimClass::ctor(
            v90,
            *(CoordStruct **)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 844),
            &v211,
            0,
            (CoordStruct *)1,
            (void *)0x600,
            0,
            0);
        }
        v91 = a1;
        *(unsigned int *)&v4->__pad_3C[20] = *(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 6076)
                                     - *(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 6084);
        v92 = v175;
        *(unsigned int *)&v4->__pad_3C[24] = v91;
        v93 = GroundHeight;
        *(unsigned int *)&v4->__pad_3C[28] = v92;
        v94 = v4->field_28;
        *(unsigned int *)&v4->__pad_3C[32] = v93;
        v95 = (AudioController *)*((unsigned int *)v94 + 49);
        if ( v95 != (AudioController *)-1 )
          StartAudioControllerAt(v95, (int)&a1, 0);
        HouseClass::CreatePowerOutage((int)v4->field_2C, *(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 6080));
        v96 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], aP3);
        v97 = (*(int (**)(void *, char *))(*(unsigned int *)v96 + 72))(v96, v226);
        v98 = *(unsigned int *)v97;
        v99 = *(unsigned int *)(v97 + 4);
        IDA_HIDWORD(v183) = v99;
        v100 = *(IUnknown **)(v97 + 8);
        var1A8 = v100;
        v101 = *(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 6072) << 8;
        if ( (v98 != *(unsigned int *)&stru_B05488.__pad_579C[5116]
           || v99 != *(unsigned int *)&stru_B05488.__pad_579C[5120]
           || v100 != *(IUnknown **)&stru_B05488.__pad_579C[5124])
          && (v98 != *(unsigned int *)&stru_B05488.__pad_579C[5196]
           || v99 != *(unsigned int *)&stru_B05488.__pad_579C[5200]
           || v100 != *(IUnknown **)&stru_B05488.__pad_579C[5204]) )
        {
          for ( j = *(unsigned int *)&HouseClass_Player.__pad_5568[22684] - 1; j >= 0; --j )
          {
            v102 = *(void ***)(*(unsigned int *)&HouseClass_Player.__pad_5568[22672] + 4 * j);
            if ( (uint8_t)HouseClass::IsAlliedWith(v102[135], (IUnknown *)v4->field_2C) )
            {
              v103 = (unsigned int *)(*((int (**)(void **, char *))*v102 + 18))(v102, v228);
              v104 = Coord::Subtract(
                       &v185,
                       (IUnknown *)(v98 - *v103),
                       (IUnknown *)(IDA_HIDWORD(v183) - v103[1]),
                       (IUnknown *)((char *)var1A8 - v103[2]));
              v191 = *(double *)&v104->field_0;
              IDA_LODWORD(v192) = v104->field_8;
              Coord::Length((int *)&v191);
              if ( eax143a < v101 )
                (*((void (**)(void **, unsigned int, void *, int))*v102 + 85))(
                  v102,
                  *(unsigned int *)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 6076),
                  v4->field_2C,
                  1);
            }
          }
        }
        if ( a4 )
        {
          *(unsigned int *)&stru_87C374.__pad_14B0[12668] = -1;
          v105 = (AnimClass *)VocClass::FindByName(&stru_830620.__pad_579C[50920]);
          ClearThemeQueuePlaylist((int)v105);
        }
      }
      break;
    case 0xB:
      if ( *(unsigned char *)(ecx0 + 111) )
      {
        v141 = CellCoord::To_CellObj(&stru_87C374.__pad_14B0[8132], aP3);
        v142 = (int *)(*(int (**)(void *))(*(unsigned int *)v141 + 72))(v141);
        v173 = *v142;
        v143 = (IUnknown *)v4->field_2C;
        a1 = (IUnknown *)v142[1];
        v175 = v142[2];
        MapClass::RevealArea1(
          (int *)&stru_87C374.__pad_14B0[8132],
          (IUnknown *)&v173,
          *(IUnknown **)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 4076),
          v143,
          0,
          0,
          0,
          0,
          0);
        MapClass::RevealArea1(
          (int *)&stru_87C374.__pad_14B0[8132],
          (IUnknown *)&v173,
          *(IUnknown **)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 4076),
          (IUnknown *)v4->field_2C,
          0,
          0,
          0,
          0,
          (IUnknown *)1);
        eax208a = (unsigned int *)(*(int (**)(void *, char *, unsigned int))(*(unsigned int *)v141 + 72))(v141, v232, 0);
        PlayAudioAt2(*(IUnknown **)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 596), eax208a, (int)v230);
        if ( a4 )
        {
          *(unsigned int *)&stru_87C374.__pad_14B0[12668] = -1;
          ecx179 = &stru_830620.__pad_579C[50752];
LABEL_180:
          v124 = (AnimClass *)VocClass::FindByName(ecx179);
          ClearThemeQueuePlaylist((int)v124);
        }
      }
      break;
    default:
      return;
  }

}

} // namespace gamemd

// 0x6CE0B0
namespace gamemd {
AbstractClass * * SuperClass::Reset()
{

  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int *result; // eax
  int v7; // ebx
  bool v8; // bl
  int v9; // esi
  int v10; // ecx
  char *v11; // edx
  unsigned int v12[4]; // [esp+4h] [ebp-10h] BYREF

  v2 = *((unsigned int *)this + 26); /*0x6ce0b6*/
  if ( v2 ) /*0x6ce0bb*/
  {
    *(unsigned char *)(v2 + 405) = 0; /*0x6ce0bd*/
    *((unsigned int *)this + 26) = 0; /*0x6ce0c4*/
    v12[0] = this; /*0x6ce0db*/
    v3 = (*(int (**)(int *, unsigned int *))(g_abs_B0F5B8 + 16))(&g_abs_B0F5B8, v12); /*0x6ce0df*/
    if ( v3 != -1 ) /*0x6ce0e5*/
      DynamicVector::RemoveItem(&g_abs_B0F5B8, v3); /*0x6ce0ed*/
  }
  if ( *((unsigned char *)this + 108) ) /*0x6ce0f2*/
  {
    v12[0] = this; /*0x6ce109*/
    v4 = (*(int (**)(int *, unsigned int *))(g_abs_B0F5B8 + 16))(&g_abs_B0F5B8, v12); /*0x6ce10d*/
    if ( v4 != -1 ) /*0x6ce113*/
      DynamicVector::RemoveItem(&g_abs_B0F5B8, v4); /*0x6ce11b*/
    *((unsigned char *)this + 108) = 0; /*0x6ce120*/
  }
  v5 = *((unsigned int *)this + 9); /*0x6ce124*/
  result = (int *)((char *)this + 48); /*0x6ce127*/
  *((unsigned char *)this + 111) = 0; /*0x6ce12b*/
  v7 = *((unsigned int *)this + 12); /*0x6ce12f*/
  *((unsigned int *)this + 30) = -1; /*0x6ce131*/
  v8 = v7 != -1; /*0x6ce13b*/
  if ( v5 == -1 ) /*0x6ce141*/
    v5 = *(unsigned int *)(*((unsigned int *)this + 10) + 176); /*0x6ce146*/
  *result = (int)g_abs_A8ED84; /*0x6ce156*/
  *((unsigned int *)this + 13) = v12[2]; /*0x6ce15d*/
  *((unsigned int *)this + 14) = v5; /*0x6ce160*/
  if ( !v8 ) /*0x6ce163*/
  {
    v9 = *result; /*0x6ce165*/
    if ( *result != -1 ) /*0x6ce16a*/
    {
      v10 = result[2]; /*0x6ce16c*/
      v11 = (char *)g_abs_A8ED84 - v9; /*0x6ce17a*/
      if ( (int)g_abs_A8ED84 - v9 >= v10 ) /*0x6ce17e*/
      {
        result[2] = 0; /*0x6ce192*/
        *result = -1; /*0x6ce195*/
      }
      else
      {
        *result = -1; /*0x6ce182*/
        result[2] = v10 - (unsigned int)v11; /*0x6ce188*/
      }
    }
  }
  return result; /*0x6ce18b*/

}
}
// 0x6CB3A0
namespace gamemd {
void ** SuperClass::CreateChronoAnim(AbstractClass * aP1, SuperClass * aP2, int a4)
{

  AnimClass *v5; // eax
  IUnknown *v6; // eax
  IUnknown *v7; // eax
  void **result; // eax
  int v9; // [esp+4h] [ebp-10h] BYREF
  CoordStruct aP2a; // [esp+8h] [ebp-Ch] BYREF

  v5 = *(AnimClass **)((char *)this + 104); /*0x6cb3a6*/
  if ( v5 ) /*0x6cb3ab*/
  {
    v5->__pad_194[1] = 0; /*0x6cb3ad*/
    *((unsigned int *)this + 26) = 0; /*0x6cb3b4*/
    v9 = this; /*0x6cb3cb*/
    v6 = (IUnknown *)(*(int (**)(char *, int *))(*(unsigned int *)&stru_B05488.__pad_579C[18836] + 16))( /*0x6cb3cf*/
                       &stru_B05488.__pad_579C[18836],
                       &v9);
    if ( v6 != (IUnknown *)-1 ) /*0x6cb3d5*/
      DynamicVector::RemoveItem(&stru_B05488.__pad_579C[18836], v6); /*0x6cb3dd*/
  }
  if ( *((unsigned char *)this + 108) ) /*0x6cb3e2*/
  {
    v9 = this; /*0x6cb3f9*/
    v7 = (IUnknown *)(*(int (**)(char *, int *))(*(unsigned int *)&stru_B05488.__pad_579C[18836] + 16))( /*0x6cb3fd*/
                       &stru_B05488.__pad_579C[18836],
                       &v9);
    if ( v7 != (IUnknown *)-1 ) /*0x6cb403*/
      DynamicVector::RemoveItem(&stru_B05488.__pad_579C[18836], v7); /*0x6cb40b*/
    *((unsigned char *)this + 108) = 0; /*0x6cb410*/
  }
  result = (void **)RA2_OPNEW(0x1C8u); /*0x6cb419*/
  if ( result ) /*0x6cb423*/
  {
    aP2a.X = (int)aP1; /*0x6cb444*/
    aP2a.Y = (int)aP2; /*0x6cb455*/
    aP2a.Z = a4 + 5; /*0x6cb459*/
    result = (void **)AnimClass::ctor( /*0x6cb467*/
                        result,
                        *(CoordStruct **)(*(unsigned int *)&stru_87C374.__pad_579C[22224] + 816),
                        &aP2a,
                        0,
                        (CoordStruct *)1,
                        (void *)0x600,
                        0,
                        0);
    if ( result ) /*0x6cb470*/
    {
      *((unsigned int *)this + 26) = result; /*0x6cb472*/
      result = *(void ***)&stru_B05488.__pad_579C[18844]; /*0x6cb475*/
      if ( *(int *)&stru_B05488.__pad_579C[18852] < *(int *)&stru_B05488.__pad_579C[18844] /*0x6cb4ae*/
        || (stru_B05488.__pad_579C[18849] || !*(unsigned int *)&stru_B05488.__pad_579C[18844])
        && *(int *)&stru_B05488.__pad_579C[18856] > 0
        && (result = (void **)(*(int (**)(char *, int, unsigned int))(*(unsigned int *)&stru_B05488.__pad_579C[18836] + 8))(
                                &stru_B05488.__pad_579C[18836],
                                *(unsigned int *)&stru_B05488.__pad_579C[18844] + *(unsigned int *)&stru_B05488.__pad_579C[18856],
                                0),
            (unsigned char)result) )
      {
        result = (void **)(*(unsigned int *)&stru_B05488.__pad_579C[18852])++; /*0x6cb4b6*/
        *(unsigned int *)(*(unsigned int *)&stru_B05488.__pad_579C[18840] + 4 * (unsigned int)result) = this; /*0x6cb4c5*/
      }
    }
  }
  return result; /*0x6cb4c8*/

}
} // namespace gamemd

// 0x6CB4D0
namespace gamemd {
char SuperClass::SetOnHold(CoordStruct * aP1)
{

  IUnknown *v3; // esi
  int v4; // eax
  int v5; // eax

  if ( !*((unsigned char *)this + 109) /*0x6cb4ea*/
    || *((unsigned char *)this + 110)
    || (unsigned char)aP1 == *((unsigned char *)this + 112)
    || !*((unsigned char *)this + 96) )
  {
    return 0; /*0x6cb552*/
  }
  if ( (unsigned char)aP1 || *(unsigned char *)(*((unsigned int *)this + 10) + 245) ) /*0x6cb4f9*/
  {
    v3 = *(IUnknown **)((char *)this + 48); /*0x6cb51c*/
    if ( v3 != (IUnknown *)-1 ) /*0x6cb522*/
    {
      v4 = *((unsigned int *)this + 14); /*0x6cb524*/
      if ( *(unsigned int *)&g_abs_A8D63C - (int)v3 >= v4 ) /*0x6cb536*/
        v5 = 0; /*0x6cb53c*/
      else
        v5 = v4 - (*(unsigned int *)&g_abs_A8D63C - (unsigned int)v3); /*0x6cb538*/
      *((unsigned int *)this + 14) = v5; /*0x6cb53e*/
      *((unsigned int *)this + 12) = -1; /*0x6cb541*/
    }
  }
  else if ( *((unsigned int *)this + 12) == -1 ) /*0x6cb507*/
  {
    *((unsigned int *)this + 12) = *(unsigned int *)&g_abs_A8D63C; /*0x6cb510*/
    *((unsigned char *)this + 112) = 0; /*0x6cb513*/
    return 1; /*0x6cb519*/
  }
  *((unsigned char *)this + 112) = (unsigned char)aP1; /*0x6cb548*/
  return 1; /*0x6cb518*/

}
} // namespace gamemd

// 0x6CB820
namespace gamemd {
char SuperClass::SetReadiness(char a2)
{

  *((unsigned char *)this + 111) = a2; /*0x6cb824*/
  return a2; /*0x6cb827*/

}
} // namespace gamemd

// 0x6CC280
namespace gamemd {
int SuperClass::SetRechargeTime(int a2)
{

  *((unsigned int *)this + 9) = a2; /*0x6cc284*/
  return a2; /*0x6cc287*/

}
} // namespace gamemd

// 0x6CC290
namespace gamemd {
void SuperClass::ResetRechargeTime()
{

  *((unsigned int *)this + 9) = -1; /*0x6cc290*/

}
} // namespace gamemd

// 0x6CC2B0
namespace gamemd {
wchar_t * SuperClass::NameReadiness()
{

  int v1; // ecx
  int v2; // ecx

  if ( *((unsigned char *)this + 112) ) /*0x6cc2b0*/
    return GetStringCSF(g_abs_83FB2C, 0, g_abs_842510, 950); /*0x6cc34d*/
  if ( *(unsigned char *)(*((unsigned int *)this + 10) + 229) ) /*0x6cc2be*/
  {
    v1 = *((unsigned int *)this + 31); /*0x6cc2c8*/
    if ( v1 ) /*0x6cc2ce*/
    {
      v2 = v1 - 1; /*0x6cc2d0*/
      if ( v2 ) /*0x6cc2d1*/
      {
        if ( v2 != 1 ) /*0x6cc2d4*/
          return 0; /*0x6cc2d8*/
        return GetStringCSF(g_abs_8424FC, 0, g_abs_842510, 925); /*0x6cc2ea*/
      }
      else
      {
        return GetStringCSF(g_Str_TXT_READY, 0, g_abs_842510, 922); /*0x6cc301*/
      }
    }
    else
    {
      return GetStringCSF(g_abs_8424EC, 0, g_abs_842510, 919); /*0x6cc318*/
    }
  }
  else
  {
    if ( !*((unsigned char *)this + 111) ) /*0x6cc323*/
      return 0; /*0x6cc323*/
    return GetStringCSF(g_Str_TXT_READY, 0, g_abs_842510, 944); /*0x6cc336*/
  }

}
} // namespace gamemd

// 0x6CC360
namespace gamemd {
char SuperClass::CanFire()
{

  if ( *((unsigned char *)this + 112) ) /*0x6cc360*/
    return 0; /*0x6cc381*/
  if ( *(unsigned char *)(*((unsigned int *)this + 10) + 229) ) /*0x6cc36a*/
    return *((unsigned int *)this + 31) != 0; /*0x6cc379*/
  return *((unsigned char *)this + 111); /*0x6cc37c*/

}
} // namespace gamemd

// 0x6CDE90
namespace gamemd {
bool SuperClass::ShouldDrawProgress()
{

  return *(unsigned char *)(*((unsigned int *)this + 10) + 229) || *((unsigned char *)this + 111) == 0; /*0x6cde9d*/

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
  a2[3] = -399534261; /*0x6cdee0*/
  return 0; /*0x6cdebd*/

}
} // namespace gamemd

// 0x6CDEF0
namespace gamemd {
int SuperClass::LoadFromStream(AbstractClass * aP0, int aP1)
{

  int result; // eax
  int v3; // eax

  result = AbstractClass::SaveLoad_Prefix_0(aP0, (AbstractClass *)aP1); /*0x6cdefb*/
  if ( result >= 0 ) /*0x6cdf02*/
  {
    if ( aP0 ) /*0x6cdf0a*/
    {
      AbstractClass::Constructor(aP0); /*0x6cdf0e*/
      *(unsigned int *)aP0->__pad_0 = &vt_SuperClass; /*0x6cdf13*/
      *(unsigned int *)&aP0->__pad_0[4] = &vt_SuperClass; /*0x6cdf19*/
      *(unsigned int *)&aP0->__pad_0[8] = &vt_SuperClass; /*0x6cdf20*/
      *(unsigned int *)&aP0->__pad_0[12] = &vt_SuperClass; /*0x6cdf27*/
    }
    if ( aP0[2].NeedsSaveOrLink /*0x6cdf70*/
      && (*(int *)&stru_B05488.__pad_579C[18852] < *(int *)&stru_B05488.__pad_579C[18844]
       || (stru_B05488.__pad_579C[18849] || !*(unsigned int *)&stru_B05488.__pad_579C[18844])
       && *(int *)&stru_B05488.__pad_579C[18856] > 0
       && (*(uint8_t (**)(char *, int, unsigned int))(*(unsigned int *)&stru_B05488.__pad_579C[18836] + 8))(
            &stru_B05488.__pad_579C[18836],
            *(unsigned int *)&stru_B05488.__pad_579C[18844] + *(unsigned int *)&stru_B05488.__pad_579C[18856],
            0)) )
    {
      v3 = (*(unsigned int *)&stru_B05488.__pad_579C[18852])++; /*0x6cdf7d*/
      *(unsigned int *)(*(unsigned int *)&stru_B05488.__pad_579C[18840] + 4 * v3) = aP0; /*0x6cdf8c*/
    }
    ObjectPtr::RegisterForTracking( /*0x6cdf98*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].__pad_0[4]);
    ObjectPtr::RegisterForTracking( /*0x6cdfa6*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[1].__pad_0[8]);
    ObjectPtr::RegisterForTracking( /*0x6cdfb1*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP0[2].NeedsSaveOrLink);
    *(unsigned int *)aP0[2].__pad_0 = 0; /*0x6cdfb6*/
    *(unsigned int *)&aP0[2].__pad_0[4] = 0; /*0x6cdfbd*/
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

  result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x6cdfdf*/
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

  result = a2; /*0x6cdff8*/
  if ( a2 == *((unsigned int *)this + 11) ) /*0x6cdffc*/
    *((unsigned int *)this + 11) = 0; /*0x6cdffe*/
  if ( a2 == *((unsigned int *)this + 10) ) /*0x6ce004*/
    *((unsigned int *)this + 10) = 0; /*0x6ce006*/
  if ( a2 == *((unsigned int *)this + 26) ) /*0x6ce00f*/
  {
    *((unsigned int *)this + 26) = 0; /*0x6ce011*/
    *((unsigned char *)this + 108) = 1; /*0x6ce014*/
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

  v3 = AbstractClass::ProcessPower((void *)this); /*0x6ce029*/
  IDA_LOBYTE(v3) = *((unsigned char *)this + 109); /*0x6ce02e*/
  Power::FlagProcess(a2, v3); /*0x6ce034*/
  IDA_LOBYTE(v4) = *((unsigned char *)this + 110); /*0x6ce039*/
  Power::FlagProcess(a2, v4); /*0x6ce03f*/
  IDA_LOBYTE(v5) = *((unsigned char *)this + 111); /*0x6ce044*/
  Power::FlagProcess(a2, v5); /*0x6ce04a*/
  Power::TimerProcess(*((unsigned int *)this + 30)); /*0x6ce055*/
  Power::TimerProcess(*((unsigned int *)this + 31)); /*0x6ce060*/
  IDA_LOBYTE(v6) = *((unsigned char *)this + 96); /*0x6ce065*/
  v7 = Power::FlagProcess(a2, v6); /*0x6ce06b*/
  IDA_LOBYTE(v7) = *((unsigned char *)this + 108); /*0x6ce070*/
  Power::FlagProcess(a2, v7); /*0x6ce076*/
  result = *((unsigned int *)this + 26); /*0x6ce07b*/
  if ( result ) /*0x6ce080*/
  {
    Power::TimerProcess(*(uint8_t *)(result + 405)); /*0x6ce08d*/
    v9 = (*(int (**)(int))(*(unsigned int *)(*((unsigned int *)this + 26) + 4) + 16))(*((unsigned int *)this + 26) + 4); /*0x6ce09c*/
    return Power::TimerProcess(v9); /*0x6ce0a2*/
  }
  return result; /*0x6ce0a7*/

}
} // namespace gamemd

// 0x6CE1A0
namespace gamemd {
bool SuperClass::ShouldFlashTab()
{

  int v1; // eax
  int v2; // eax

  if ( *((unsigned char *)this + 112) ) /*0x6ce1a0*/
    return 0; /*0x6ce1a5*/
  v1 = *((unsigned int *)this + 10); /*0x6ce1a7*/
  if ( *(unsigned char *)(v1 + 229) ) /*0x6ce1aa*/
  {
    if ( !*((unsigned int *)this + 31) ) /*0x6ce1b9*/
      return 0; /*0x6ce1b9*/
  }
  else if ( !*((unsigned char *)this + 111) ) /*0x6ce1c2*/
  {
    return 0; /*0x6ce1c2*/
  }
  v2 = *(unsigned int *)(v1 + 232); /*0x6ce1c4*/
  if ( v2 == -1 ) /*0x6ce1cd*/
    return 1; /*0x6ce1d1*/
  return v2 && v2 + *((unsigned int *)this + 29) > (int)g_abs_A8ED84; /*0x6ce1d1*/

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
