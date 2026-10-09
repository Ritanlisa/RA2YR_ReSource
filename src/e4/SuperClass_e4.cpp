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
#include "e4/classes/PsyDom_e4.hpp"
#include "e4/classes/ObjectPtr_e4.hpp"
#include "e4/classes/VoxClass_e4.hpp"

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
  _DWORD v9[3]; // [esp+10h] [ebp-Ch] BYREF

  result = *(RulesClass **)&DSurface_ViewBounds.q0FC[324]; /*0x53ae50*/
  if ( *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.q0FC[324] + 764) /*0x53ae66*/
    && *(_DWORD *)(*(_DWORD *)&DSurface_ViewBounds.q0FC[324] + 768) )
  {
    PsyDom_Owner = (House *)this; /*0x53ae79*/
    *(_DWORD *)&PsyDom_Coords = a2; /*0x53ae7f*/
    v3 = *(void **)(*(_DWORD *)&DSurface_ViewBounds.q0FC[324] + 764); /*0x53ae85*/
    v4 = CellCoord::To_CellObj((CellCoord *)&stru_87F5F0.__pad_58[416], &PsyDom_Coords); /*0x53ae95*/
    v5 = (int *)(*(int (__thiscall **)(void *, _DWORD *))(*(_DWORD *)v4 + 72))(v4, v9); /*0x53aea3*/
    v8[0] = *v5; /*0x53aea8*/
    v8[1] = v5[1]; /*0x53aeb4*/
    v8[2] = v5[2] + 750; /*0x53aec0*/
    v6 = (AnimClass *)RA2_OPNEW(0x1C8u); /*0x53aec4*/
    if ( v6 ) /*0x53aece*/
      PsyDom_Anim = (int)AnimClass::ctor(v6, v3, v8, 0, 1, (void *)0x600, 0, 0); /*0x53aeea*/
    else
      PsyDom_Anim = 0; /*0x53aef1*/
    v7 = dword_A8B230 + 130; /*0x53af06*/
    PsyDom_Status = 1; /*0x53af0c*/
    dword_A8B230[130].vfptr = *(void **)&stru_A8EB00.?[416]; /*0x53af1b*/
    v7->vfptr1 = (void *)v9[1]; /*0x53af21*/
    v7->vfptr2 = (void *)1; /*0x53af24*/
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

  AbstractClass::Constructor(); /*0x6caec3*/
  this->q024 = (void *)-1; /*0x6caecd*/
  this->q028 = 0; /*0x6caed0*/
  this->q02C = 0; /*0x6caed3*/
  this->q030 = *(void **)&stru_A8EB00.?[416]; /*0x6caedc*/
  this->q038 = 0; /*0x6caedf*/
  *(_DWORD *)&this->q03C[12] = 0; /*0x6caee2*/
  this->q03C[4] = 0; /*0x6caee5*/
  *(_DWORD *)&this->q03C[16] = 0; /*0x6caee8*/
  *(_DWORD *)&this->q03C[20] = -1; /*0x6caeeb*/
  IDA_LOBYTE(this->q060) = 1; /*0x6caeee*/
  *(void **)((char *)&this->q060 + 2) = (void *)dword_B0C000; /*0x6caef8*/
  this->q068 = 0; /*0x6caefb*/
  IDA_LOBYTE(this->q06C) = 0; /*0x6caefe*/
  IDA_BYTE1(this->q06C) = 0; /*0x6caf01*/
  IDA_BYTE2(this->q06C) = 0; /*0x6caf04*/
  IDA_HIBYTE(this->q06C) = 0; /*0x6caf07*/
  IDA_LOBYTE(this->q070) = 0; /*0x6caf0a*/
  this->q07C = (void *)-1; /*0x6caf0d*/
  this->SuperClass_field_0x0 = &(void*)(void*)&SuperClass_vftable; /*0x6caf10*/
  this->SuperClass_field_0x4 = &(void*)(void*)&SuperClass_vftable; /*0x6caf16*/
  this->SuperClass_field_0x8 = &(void*)(void*)&SuperClass_vftable; /*0x6caf1d*/
  *(_DWORD *)this->q00C = &(void*)(void*)&SuperClass_vftable; /*0x6caf24*/
  *(_DWORD *)this->q03C = &g_TypeClass_DefaultString; /*0x6caf2b*/
  if ( dword_A83CC8 < dword_A83CC0 /*0x6caf64*/
    || (byte_A83CC5 || !dword_A83CC0)
    && dword_A83CCC > 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(dword_A83CB8 + 8))(
         &dword_A83CB8,
         dword_A83CC0 + dword_A83CCC,
         0) )
  {
    v2 = dword_A83CC8++; /*0x6caf71*/
    *((_DWORD *)dword_A83CBC + v2) = this; /*0x6caf80*/
  }
  return (int)this; /*0x6caf85*/
}
}
// 0x6CAF90
namespace gamemd {
int SuperClass::Construct(int a2, CCINIClass * aP2, void *a3, void *a4, void *a5, void *a6)
{
  int v5; // eax
  int v6; // eax
  int v7; // eax

  AbstractClass::Constructor(); /*0x6caf94*/
  this->q028 = a2; /*0x6cafa4*/
  this->q024 = -1; /*0x6cafa7*/
  this->q02C = a3; /*0x6cafaa*/
  this->q030 = dword_A8ED84; /*0x6cafb5*/
  this->q038 = 0; /*0x6cafb8*/
  this->BlinkTimer = 0; /*0x6cafbb*/
  this->BlinkState = 0; /*0x6cafbe*/
  this->q04C = 0; /*0x6cafc1*/
  this->SpecialSoundDuration = -1; /*0x6cafc4*/
  this->q060 = 1; /*0x6cafc7*/
  dword_B0C000 = dword_B0C000; /*0x6cafcb*/
  this->q078 = -1; /*0x6cafd1*/
  this->q07C = -1; /*0x6cafd4*/
  this->ChronoMapCoords = dword_B0C000; /*0x6cafda*/
  this->q068 = 0; /*0x6cafde*/
  this->q06C = 0; /*0x6cafe1*/
  this->Granted = 0; /*0x6cafe4*/
  this->OneTime = 0; /*0x6cafe7*/
  this->IsCharged = 0; /*0x6cafea*/
  this->q070 = 0; /*0x6cafed*/
  this->q074 = -100; /*0x6caff0*/
  *(_DWORD *)this = &(void*)(void*)&SuperClass_vftable; /*0x6caff7*/
  this->vtable2 = &(void*)(void*)&SuperClass_vftable; /*0x6caffd*/
  this->vtable3 = &(void*)(void*)&SuperClass_vftable; /*0x6cb003*/
  this->vtable4 = &(void*)(void*)&SuperClass_vftable; /*0x6cb00a*/
  this->vtable2.GenerateUniqueID(); /*0x6cb011*/
  if ( dword_A83CC8 < dword_A83CC0 /*0x6cb049*/
    || (byte_A83CC5 || !dword_A83CC0)
    && dword_A83CCC > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_A83CB8 + 8))(
         &dword_A83CB8,
         dword_A83CC0 + dword_A83CCC,
         0) )
  {
    v5 = dword_A83CC8++; /*0x6cb056*/
    *((_DWORD *)dword_A83CBC + v5) = this; /*0x6cb065*/
  }
  if ( dword_B0F680 < dword_B0F678 /*0x6cb09c*/
    || (byte_B0F67D || !dword_B0F678)
    && dword_B0F684 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B0F670 + 8))(
         &dword_B0F670,
         dword_B0F678 + dword_B0F684,
         0) )
  {
    v6 = dword_B0F680++; /*0x6cb0a9*/
    *((_DWORD *)dword_B0F674 + v6) = this; /*0x6cb0b8*/
  }
  if ( dword_B0F6D8 < dword_B0F6D0 /*0x6cb0ef*/
    || (byte_B0F6D5 || !dword_B0F6D0)
    && dword_B0F6DC > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(dword_B0F6C8 + 8))(
         &dword_B0F6C8,
         dword_B0F6D0 + dword_B0F6DC,
         0) )
  {
    v7 = dword_B0F6D8++; /*0x6cb0fc*/
    *((_DWORD *)dword_B0F6CC + v7) = this; /*0x6cb10b*/
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

  v2 = a1->q068; /*0x6cb124*/
  *(_DWORD *)a1 = &(void*)(void*)&SuperClass_vftable; /*0x6cb127*/
  a1->vtable2 = &(void*)(void*)&SuperClass_vftable; /*0x6cb12f*/
  a1->vtable3 = &(void*)(void*)&SuperClass_vftable; /*0x6cb136*/
  a1->vtable4 = &(void*)(void*)&SuperClass_vftable; /*0x6cb13d*/
  if ( v2 ) /*0x6cb144*/
  {
    *(_BYTE *)(v2 + 405) = 0; /*0x6cb146*/
    a1->q068 = 0; /*0x6cb14d*/
    v9 = a1; /*0x6cb164*/
    v3 = (*(int (__thiscall **)(int *, int *))(g_BuildingLoadQueue_Array.ForbiddenHouses[0] + 16))( /*0x6cb168*/
           g_BuildingLoadQueue_Array.ForbiddenHouses,
           &v9);
    if ( v3 != -1 ) /*0x6cb16e*/
      DynamicVector::RemoveItem((DynamicVector *)g_BuildingLoadQueue_Array.ForbiddenHouses, v3); /*0x6cb176*/
  }
  if ( a1->q06C ) /*0x6cb17b*/
  {
    v9 = a1; /*0x6cb192*/
    v4 = (*(int (__thiscall **)(int *, int *))(g_BuildingLoadQueue_Array.ForbiddenHouses[0] + 16))( /*0x6cb196*/
           g_BuildingLoadQueue_Array.ForbiddenHouses,
           &v9);
    if ( v4 != -1 ) /*0x6cb19c*/
      DynamicVector::RemoveItem((DynamicVector *)g_BuildingLoadQueue_Array.ForbiddenHouses, v4); /*0x6cb1a4*/
    a1->q06C = 0; /*0x6cb1a9*/
  }
  v9 = a1; /*0x6cb1bd*/
  v5 = (*((int (__thiscall **)(SuperClass *, int *))stru_A83D50.SuperClass_field_0x0 + 4))(&stru_A83D50, &v9); /*0x6cb1c1*/
  if ( v5 != -1 && v5 < (int)stru_A83D50.q010 ) /*0x6cb1d1*/
  {
    --stru_A83D50.q010; /*0x6cb1d6*/
    for ( ; /*0x6cb1dc*/
          v5 < (int)stru_A83D50.q010;
          *((_DWORD *)stru_A83D50.SuperClass_field_0x4 + v5 - 1) = *((_DWORD *)stru_A83D50.SuperClass_field_0x4 + v5) )
    {
      ++v5; /*0x6cb1e4*/
    }
  }
  v9 = a1; /*0x6cb206*/
  v6 = (*(int (__thiscall **)(_DWORD *, int *))(dword_A83CB8 + 16))(&dword_A83CB8, &v9); /*0x6cb20a*/
  if ( v6 != -1 && v6 < dword_A83CC8 && v6 < --dword_A83CC8 ) /*0x6cb225*/
  {
    do /*0x6cb23d*/
    {
      ++v6; /*0x6cb22d*/
      *((_DWORD *)dword_A83CBC + v6 - 1) = *((_DWORD *)dword_A83CBC + v6); /*0x6cb231*/
    }
    while ( v6 < dword_A83CC8 ); /*0x6cb23d*/
  }
  v9 = a1; /*0x6cb24f*/
  v7 = (*(int (__thiscall **)(int *, int *))(g_BuildingLoadQueue_Array.LightVisibility + 16))( /*0x6cb253*/
         &g_BuildingLoadQueue_Array.LightVisibility,
         &v9);
  if ( v7 != -1 && v7 < g_BuildingLoadQueue_Array.LightBlueTint ) /*0x6cb263*/
  {
    --g_BuildingLoadQueue_Array.LightBlueTint; /*0x6cb268*/
    for ( ; /*0x6cb26e*/
          v7 < g_BuildingLoadQueue_Array.LightBlueTint;
          *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v7 - 4) = *(_DWORD *)(g_BuildingLoadQueue_Array.LightIntensity
                                                                                         + 4 * v7) )
    {
      ++v7; /*0x6cb276*/
    }
  }
  v9 = a1; /*0x6cb298*/
  v8 = (*(int (__thiscall **)(char *, int *))(*(_DWORD *)g_BuildingLoadQueue_Array.qE88 + 16))( /*0x6cb29c*/
         g_BuildingLoadQueue_Array.qE88,
         &v9);
  if ( v8 != -1 && v8 < *(int *)&g_BuildingLoadQueue_Array.qE88[16] ) /*0x6cb2ac*/
  {
    --*(_DWORD *)&g_BuildingLoadQueue_Array.qE88[16]; /*0x6cb2b1*/
    for ( ; /*0x6cb2b7*/
          v8 < *(int *)&g_BuildingLoadQueue_Array.qE88[16];
          *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.qE88[4] + 4 * v8 - 4) = *(_DWORD *)(*(_DWORD *)&g_BuildingLoadQueue_Array.qE88[4] + 4 * v8) )
    {
      ++v8; /*0x6cb2bf*/
    }
  }
  AbstractClass::DTOR((AbstractClass *)a1); /*0x6cb2d3*/
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
  _DWORD *v11; // eax
  int v12; // ecx
  int v13; // edx
  int v14; // edi
  int v15; // eax
  int DefaultTimer; // eax
  int v19; // edx
  int v21; // [esp+8h] [ebp-Ch] BYREF
  int v22; // [esp+Ch] [ebp-8h]
  int v23; // [esp+10h] [ebp-4h]

  if ( !this->unknown_6D ) /*0x6cb569*/
  {
    v5 = this; /*0x6cb572*/
    v6 = this->Height; /*0x6cb576*/
    this->unknown_6D = 1; /*0x6cb579*/
    this->unknown_6E = v5; /*0x6cb57d*/
    this->DestinationCoords = 0; /*0x6cb580*/
    v7 = *(_DWORD *)(v6 + 96); /*0x6cb583*/
    IDA_LOBYTE(this) = 0; /*0x6cb589*/
    this->q03C = v7; /*0x6cb58d*/
    if ( !v5 && this->CurrentHeight && this->q060 ) /*0x6cb597*/
    {
      if ( *(_BYTE *)(v6 + 245) ) /*0x6cb59c*/
      {
        if ( this->Wobbles != -1 ) /*0x6cb5bd*/
        {
          this->NoWobbles = Locomotor::GetSpeed((Locomotor *)(&this->Powered8)); /*0x6cb5c6*/
          this->Wobbles = -1; /*0x6cb5c9*/
        }
      }
      else if ( this->Wobbles == -1 ) /*0x6cb5a8*/
      {
        this->Wobbles = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6cb5af*/
      }
      this->CurrentHeight = 0; /*0x6cb5cf*/
    }
    if ( *(_BYTE *)(this->Height + 244) /*0x6cb61f*/
      && !*(_BYTE *)(*(_DWORD *)(this->Accel + 52) + 422)
      && ((int)stru_A83D50.q010 < (int)stru_A83D50.SuperClass_field_0x8
       || (stru_A83D50.q00C[1] || !stru_A83D50.SuperClass_field_0x8)
       && *(int *)stru_A83D50.q014 > 0
       && (*((unsigned __int8 (__thiscall **)(SuperClass *, char *, _DWORD))stru_A83D50.SuperClass_field_0x0 + 2))(
            &stru_A83D50,
            (char *)stru_A83D50.SuperClass_field_0x8 + *(_DWORD *)stru_A83D50.q014,
            0)) )
    {
      v8 = stru_A83D50.q010++; /*0x6cb62c*/
      *((_DWORD *)stru_A83D50.SuperClass_field_0x4 + (_DWORD)v8) = this; /*0x6cb63b*/
    }
    v9 = this->Height; /*0x6cb63e*/
    if ( *(_BYTE *)(v9 + 245) ) /*0x6cb641*/
    {
      v10 = this->Crash; /*0x6cb649*/
      this->q078 = -1; /*0x6cb64c*/
      if ( v10 == -1 ) /*0x6cb656*/
        v10 = *(_DWORD *)(v9 + 176); /*0x6cb658*/
      v11 = (_DWORD *)(&this->Powered8); /*0x6cb664*/
      this->Wobbles = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6cb669*/
      this->Deviation = v22; /*0x6cb66f*/
      this->NoWobbles = v10; /*0x6cb672*/
      v12 = this->Wobbles; /*0x6cb675*/
      if ( v12 != -1 ) /*0x6cb67a*/
      {
        v13 = this->NoWobbles; /*0x6cb680*/
        v14 = *(_DWORD *)&stru_A8EB00.?[416] - v12; /*0x6cb68e*/
        if ( *(_DWORD *)&stru_A8EB00.?[416] - v12 >= v13 ) /*0x6cb692*/
        {
          this->NoWobbles = 0; /*0x6cb6a6*/
          *v11 = -1; /*0x6cb6a9*/
        }
        else
        {
          *v11 = -1; /*0x6cb696*/
          this->NoWobbles = v13 - v14; /*0x6cb69c*/
        }
      }
    }
    else
    {
      v15 = this->q068; /*0x6cb6b4*/
      if ( v15 ) /*0x6cb6b9*/
      {
        *(_BYTE *)(v15 + 405) = 0; /*0x6cb6bf*/
        this->q068 = 0; /*0x6cb6cb*/
        VectorClass::RemoveAt((VectorClass *)g_BuildingLoadQueue_Array.ForbiddenHouses, (int)&this); /*0x6cb6d2*/
      }
      if ( this->unknown_6C ) /*0x6cb6d7*/
      {
        VectorClass::RemoveAt((VectorClass *)g_BuildingLoadQueue_Array.ForbiddenHouses, (int)&this); /*0x6cb6ea*/
        this->unknown_6C = 0; /*0x6cb6ef*/
      }
      if ( !this->unknown_6D /*0x6cb704*/
        || this->unknown_6F
        || this->CurrentHeight && !*(_BYTE *)(this->Height + 237) )
      {
        IDA_LOBYTE(this) = 0; /*0x6cb757*/
      }
      else
      {
        this->q078 = -1; /*0x6cb70f*/
        SuperClass::SetCurrentFrame((SuperClass *)(&this->Powered8)); /*0x6cb718*/
        DefaultTimer = Super::GetDefaultTimer((Super *)this); /*0x6cb71f*/
        Timer::Start((Timer *)&v21, DefaultTimer); /*0x6cb729*/
        v22 = v22; /*0x6cb732*/
        v23 = v23; /*0x6cb736*/
        this->Wobbles = v21; /*0x6cb73a*/
        v19 = this->Height; /*0x6cb73c*/
        this->Deviation = v22; /*0x6cb73f*/
        this->NoWobbles = v23; /*0x6cb742*/
        if ( *(_BYTE *)(v19 + 229) ) /*0x6cb745*/
          this->u32_7C = 0; /*0x6cb74d*/
        IDA_LOBYTE(this) = 1; /*0x6cb750*/
      }
    }
    if ( aP3 && this->unknown_6D ) /*0x6cb764*/
    {
      if ( this->unknown_6E ) /*0x6cb769*/
        goto LABEL_45; /*0x6cb76c*/
      if ( this->CurrentHeight != 1 ) /*0x6cb772*/
      {
        if ( this->q060 ) /*0x6cb774*/
        {
          SuperClass::AdvanceCountdown((SuperClass *)(&this->Powered8)); /*0x6cb77c*/
          this->CurrentHeight = 1; /*0x6cb781*/
        }
      }
    }
    if ( !this->unknown_6E ) /*0x6cb788*/
  LABEL_45:
    SuperClass::AnnounceReady(aP2); /*0x6cb78a*/
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
  if ( !IDA_BYTE1(this->q06C) ) /*0x6cb7b1*/
    return 0; /*0x6cb80d*/
  IDA_HIBYTE(this->q06C) = 0; /*0x6cb7ba*/
  IDA_BYTE1(this->q06C) = 0; /*0x6cb7bd*/
  v3 = this; /*0x6cb7ca*/
  v1 = (*((int (__thiscall **)(SuperClass *, SuperClass **))stru_A83D50.SuperClass_field_0x0 + 4))(&stru_A83D50, &v3); /*0x6cb7d4*/
  if ( v1 != -1 && v1 < (int)stru_A83D50.q010 ) /*0x6cb7e4*/
  {
    --stru_A83D50.q010; /*0x6cb7e9*/
    for ( ; /*0x6cb7ef*/
          v1 < (int)stru_A83D50.q010;
          *((_DWORD *)stru_A83D50.SuperClass_field_0x4 + v1 - 1) = *((_DWORD *)stru_A83D50.SuperClass_field_0x4 + v1) )
    {
      ++v1; /*0x6cb7f7*/
    }
  }
  return 1; /*0x6cb80c*/
}
}
// 0x6CB830
namespace gamemd {
char SuperClass::StopPreclickAnim(int aP1)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  _DWORD v8[4]; // [esp+8h] [ebp-10h] BYREF

  v3 = this->q068; /*0x6cb839*/
  if ( v3 ) /*0x6cb83e*/
  {
    *(_BYTE *)(v3 + 405) = 0; /*0x6cb840*/
    this->q068 = 0; /*0x6cb846*/
    v8[0] = this; /*0x6cb859*/
    v4 = (*(int (__thiscall **)(int *, _DWORD *))(stru_B0F5B8 + 16))(&stru_B0F5B8, v8); /*0x6cb85d*/
    if ( v4 != -1 ) /*0x6cb863*/
      DynamicVector::RemoveItem(&stru_B0F5B8, v4); /*0x6cb86b*/
  }
  if ( this->q06C ) /*0x6cb870*/
  {
    v8[0] = this; /*0x6cb885*/
    v5 = (*(int (__thiscall **)(int *, _DWORD *))(stru_B0F5B8 + 16))(&stru_B0F5B8, v8); /*0x6cb889*/
    if ( v5 != -1 ) /*0x6cb88f*/
      DynamicVector::RemoveItem(&stru_B0F5B8, v5); /*0x6cb897*/
    this->q06C = 0; /*0x6cb89c*/
  }
  if ( !this->Granted /*0x6cb8b1*/
    || this->IsCharged
    || this->q070 && !*(_BYTE *)(this->q028 + 237) )
  {
    return 0; /*0x6cb90d*/
  }
  this->q078 = -1; /*0x6cb8b9*/
  if ( this->q030 == -1 ) /*0x6cb8c6*/
    this->q030 = dword_A8ED84; /*0x6cb8ce*/
  v6 = this->q024; /*0x6cb8d1*/
  if ( v6 == -1 ) /*0x6cb8d7*/
    v6 = *(_DWORD *)(this->q028 + 176); /*0x6cb8dc*/
  this->q030 = dword_A8ED84; /*0x6cb8e7*/
  this->u32_34 = v8[2]; /*0x6cb8ee*/
  this->q038 = v6; /*0x6cb8f1*/
  if ( *(_BYTE *)(this->q028 + 229) ) /*0x6cb8f7*/
    this->q07C = 0; /*0x6cb8ff*/
  return 1; /*0x6cb902*/
}
}
// 0x6CB920
namespace gamemd {
int SuperClass::ClickFire(int a2, short * a3)
{
  int v4; // eax
  int v5; // eax
  __int16 *v6; // eax
  int v7; // edx
  int v8; // ecx
  wchar_t **v10; // esi
  wchar_t *v11; // eax
  int v13; // edi
  int v14; // edx
  int v15; // eax
  int v17; // eax
  wchar_t **v19; // edi
  int v20; // eax
  char v21; // al
  int v22; // eax
  int v23; // ecx
  wchar_t *v25; // eax
  int v26; // ecx
  char *v27; // edx
  int v28; // eax
  int v29; // ecx
  wchar_t *v30; // [esp+14h] [ebp-8h]

  v4 = this->q028; /*0x6cb92a*/
  if ( *(_BYTE *)(v4 + 229) ) /*0x6cb92d*/
  {
    if ( (unsigned __int8)House::IsCurrentPlayer(*(void **)(&this->q0104)) ) /*0x6cb93c*/
    {
      v5 = this->q07C; /*0x6cb949*/
      if ( v5 == 2 ) /*0x6cb94f*/
      {
        v6 = *(__int16 **)(&this->vtable46); /*0x6cb951*/
        this->q07C = 1; /*0x6cb954*/
        if ( v6 == (__int16 *)-1 ) /*0x6cb95e*/
          a3 = *(__int16 **)(this->q028 + 176); /*0x6cb96f*/
        else
          a3 = v6; /*0x6cb960*/
        v7 = this->q030; /*0x6cb973*/
        v8 = this->q038; /*0x6cb976*/
        dword_A8ED84 = dword_A8ED84; /*0x6cb979*/
        v10 = (wchar_t **)(&this->q0108); /*0x6cb97f*/
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
        IDA_LOWORD(v11) = Math::RoundToInt((double)(int)a3 - (double)a2 / *(double *)dword_8871E0->ChargeToDrainRatio); /*0x6cb995*/
        *v10 = dword_A8ED84; /*0x6cb9b4*/
        v10[1] = v30; /*0x6cb9b6*/
        v10[2] = v11; /*0x6cb9b9*/
        return 0; /*0x6cb9c4*/
      }
      if ( v5 == 1 ) /*0x6cb9d0*/
      {
        v13 = this->q024; /*0x6cb9d6*/
        this->q07C = 2; /*0x6cb9d9*/
        if ( v13 == -1 ) /*0x6cb9e3*/
          v13 = *(_DWORD *)(this->q028 + 176); /*0x6cb9e8*/
        v14 = this->q030; /*0x6cb9ee*/
        v15 = this->q038; /*0x6cb9f1*/
        dword_A8ED84 = dword_A8ED84; /*0x6cb9f5*/
        if ( v14 != -1 ) /*0x6cb9fe*/
        {
          if ( (int)dword_A8ED84 - v14 >= v15 ) /*0x6cba06*/
            v15 = 0; /*0x6cba0c*/
          else
            v15 -= (int)dword_A8ED84 - v14; /*0x6cba08*/
        }
        IDA_LOWORD(v17) = Math::RoundToInt((double)(v13 - v15) * *(double *)dword_8871E0->ChargeToDrainRatio); /*0x6cba23*/
        a2 = a2; /*0x6cba2c*/
        this->q030 = dword_A8ED84; /*0x6cba30*/
        this->u32_34 = v30; /*0x6cba33*/
        this->q038 = v17; /*0x6cba36*/
        SuperClass::Launch(a2, a3, a2); /*0x6cba41*/
        return 0; /*0x6cba4f*/
      }
    }
    else if ( !*(_BYTE *)(this->q02C + 506) ) /*0x6cba55*/
    {
      SuperClass::Launch(a2, a3, a2); /*0x6cba6d*/
      return 0; /*0x6cba7a*/
    }
    return 0; /*0x6cbc96*/
  }
  v19 = (wchar_t **)(&this->q0108); /*0x6cba80*/
  if ( (this->q030 == -1 || !this->Granted || !this->IsCharged) && !*(_BYTE *)(v4 + 238) ) /*0x6cba98*/
    return 0; /*0x6cba98*/
  if ( *(_DWORD *)(v4 + 180) == 2 && Weapon_Helper() ) /*0x6cbaa7*/
  {
    if ( (_BYTE)a2 ) /*0x6cbab4*/
    {
      Weapon_Get(); /*0x6cbaba*/
      return 0; /*0x6cbac7*/
    }
    return 0; /*0x6cbab4*/
  }
  if ( *(_DWORD *)(this->q028 + 180) == 7 && (unsigned __int8)PsyDom::IsActive() ) /*0x6cbad6*/
  {
    if ( (_BYTE)a2 ) /*0x6cbae3*/
    {
      Weapon_Get_53B410(); /*0x6cbae9*/
      return 0; /*0x6cbaf6*/
    }
    return 0; /*0x6cbae3*/
  }
  SuperClass::Launch(a2, a3, a2); /*0x6cbb05*/
  v20 = this->q028; /*0x6cbb0a*/
  if ( !*(_BYTE *)(v20 + 238) ) /*0x6cbb0d*/
    this->IsCharged = 0; /*0x6cbb15*/
  if ( !this->OneTime ) /*0x6cbb1b*/
  {
    if ( *(_BYTE *)(v20 + 245) ) /*0x6cbb63*/
    {
      v23 = this->q024; /*0x6cbb6b*/
      if ( v23 == -1 ) /*0x6cbb71*/
        v23 = *(_DWORD *)(v20 + 176); /*0x6cbb73*/
      dword_A8ED84 = dword_A8ED84; /*0x6cbb79*/
      this->q078 = -1; /*0x6cbb80*/
      *v19 = dword_A8ED84; /*0x6cbb87*/
      this->u32_34 = v30; /*0x6cbb8d*/
      this->q038 = v23; /*0x6cbb90*/
      v25 = *v19; /*0x6cbb93*/
      if ( *v19 != (wchar_t *)-1 ) /*0x6cbb98*/
      {
        v26 = this->q038; /*0x6cbb9e*/
        v27 = (char *)((char *)dword_A8ED84 - (char *)v25); /*0x6cbbac*/
        if ( (char *)dword_A8ED84 - (char *)v25 >= v26 ) /*0x6cbbb0*/
        {
          this->q038 = 0; /*0x6cbbca*/
          *v19 = (wchar_t *)-1; /*0x6cbbcd*/
        }
        else
        {
          *v19 = (wchar_t *)-1; /*0x6cbbb4*/
          this->q038 = v26 - (_DWORD)v27; /*0x6cbbba*/
        }
        return 0; /*0x6cbbc5*/
      }
    }
    else if ( !*(_BYTE *)(v20 + 237) && !*(_BYTE *)(v20 + 238) ) /*0x6cbbea*/
    {
      v28 = this->q068; /*0x6cbbf6*/
      if ( v28 ) /*0x6cbbfb*/
      {
        *(_BYTE *)(v28 + 405) = 0; /*0x6cbc01*/
        this->q068 = 0; /*0x6cbc0d*/
        a2 = this; /*0x6cbc10*/
        VectorClass::RemoveAt(&stru_B0F5B8, (int)&a2); /*0x6cbc14*/
      }
      if ( this->q06C ) /*0x6cbc19*/
      {
        a2 = this; /*0x6cbc28*/
        VectorClass::RemoveAt(&stru_B0F5B8, (int)&a2); /*0x6cbc2c*/
        this->q06C = 0; /*0x6cbc31*/
      }
      if ( this->Granted /*0x6cbc46*/
        && !this->IsCharged
        && (!this->q070 || *(_BYTE *)(this->q028 + 237)) )
      {
        this->q078 = -1; /*0x6cbc4e*/
        if ( *v19 == (wchar_t *)-1 ) /*0x6cbc5a*/
          *v19 = dword_A8ED84; /*0x6cbc62*/
        v29 = this->q024; /*0x6cbc64*/
        if ( v29 == -1 ) /*0x6cbc6a*/
          v29 = *(_DWORD *)(this->q028 + 176); /*0x6cbc6f*/
        *v19 = dword_A8ED84; /*0x6cbc7a*/
        this->u32_34 = v30; /*0x6cbc80*/
        this->q038 = v29; /*0x6cbc83*/
        if ( *(_BYTE *)(this->q028 + 229) ) /*0x6cbc89*/
          this->q07C = 0; /*0x6cbc91*/
      }
    }
    return 0; /*0x6cbb98*/
  }
  v21 = this->Granted; /*0x6cbb1d*/
  this->OneTime = 0; /*0x6cbb20*/
  if ( !v21 ) /*0x6cbb25*/
    return 0; /*0x6cbb25*/
  this->IsCharged = 0; /*0x6cbb2f*/
  this->Granted = 0; /*0x6cbb32*/
  a2 = this; /*0x6cbb41*/
  v22 = (*(int (__thiscall **)(int *, int *))(stru_A83D50 + 16))(&stru_A83D50, &a2); /*0x6cbb45*/
  if ( v22 != -1 ) /*0x6cbb4b*/
    SuperClass::RemoveFromPointerArray(&stru_A83D50, v22); /*0x6cbb53*/
  return 1; /*0x6cb9bc*/
}
}
// 0x6CC080
namespace gamemd {
int SuperClass::AnnounceReady(DynamicVector * aP1, void *a2, void * aEvaForceshield, void * aEvaIroncurtain, void * aEvaNuclearmiss, void * aEvaPsychicdomi, void * aEvaReinforceme, void * aEvaSpyplanerea)
{
  char result; // al
  int v4; // edi
  int v5; // edi
  int v6; // edx
  int v7; // [esp+Ch] [ebp-8h]

  result = this->unknown_6D; /*0x6cc086*/
  if ( result ) /*0x6cc08b*/
  {
    v4 = this->Crash; /*0x6cc092*/
    this->unknown_6F = 1; /*0x6cc098*/
    if ( v4 == -1 ) /*0x6cc09c*/
      v4 = *(_DWORD *)(this->Height + 176); /*0x6cc0a1*/
    v5 = v4 - Math::RoundToInt((double)v4); /*0x6cc0b4*/
    if ( !v5 ) /*0x6cc0b6*/
      this->unknown_6F = 1; /*0x6cc0b8*/
    if ( this->Wobbles == -1 ) /*0x6cc0c0*/
      this->Wobbles = dword_A8ED84; /*0x6cc0c8*/
    this->Wobbles = dword_A8ED84; /*0x6cc0d4*/
    this->Deviation = v7; /*0x6cc0db*/
    this->NoWobbles = v5; /*0x6cc0de*/
    if ( a2 ) /*0x6cc0e4*/
    {
      switch ( *(_DWORD *)(this->Height + 180) ) /*0x6cc0fc*/
      {
        case 0: /*0x6cc0fc*/
          VoxClass::FindAndPlay(aEvaNuclearmiss, -1); /*0x6cc10d*/
          break; /*0x6cc10d*/
        case 1: /*0x6cc0fc*/
          VoxClass::FindAndPlay(aEvaIroncurtain, -1); /*0x6cc119*/
          break; /*0x6cc119*/
        case 2: /*0x6cc0fc*/
          VoxClass::FindAndPlay(aEvaLightningst, -1); /*0x6cc131*/
          break; /*0x6cc131*/
        case 3: /*0x6cc0fc*/
          VoxClass::FindAndPlay(g_Str_EVA_ChronosphereReady, -1); /*0x6cc149*/
          break; /*0x6cc149*/
        case 5: /*0x6cc0fc*/
        case 6: /*0x6cc0fc*/
          VoxClass::FindAndPlay(aEvaReinforceme, -1); /*0x6cc155*/
          break; /*0x6cc155*/
        case 7: /*0x6cc0fc*/
          VoxClass::FindAndPlay(aEvaPsychicdomi, -1); /*0x6cc13d*/
          break; /*0x6cc13d*/
        case 8: /*0x6cc0fc*/
          VoxClass::FindAndPlay(aEvaSpyplanerea, -1); /*0x6cc161*/
          break; /*0x6cc161*/
        case 9: /*0x6cc0fc*/
          VoxClass::FindAndPlay(unk_842414, -1); /*0x6cc16d*/
          break; /*0x6cc16d*/
        case 0xA: /*0x6cc0fc*/
          VoxClass::FindAndPlay(aEvaForceshield, -1); /*0x6cc125*/
          break; /*0x6cc125*/
        case 0xB: /*0x6cc0fc*/
          VoxClass::FindAndPlay(g_Str_EVA_PsychicRevealReady, -1); /*0x6cc179*/
          break; /*0x6cc179*/
        default:
          break;
      }
    }
    v6 = this->Height; /*0x6cc17e*/
    this->q074 = dword_A8ED84; /*0x6cc187*/
    result = *(_BYTE *)(v6 + 229); /*0x6cc18a*/
    if ( result ) /*0x6cc192*/
      this->u32_7C = 1; /*0x6cc194*/
  }
  return result; /*0x6cc19b*/
}
}
// 0x6CC1E0
namespace gamemd {
int SuperClass::SetCharge(int a2)
{
  _DWORD *v3; // eax
  int v4; // esi
  int v5; // esi
  int v7; // [esp+Ch] [ebp-8h]

  IDA_LOBYTE(v3) = this->Granted; /*0x6cc1e6*/
  if ( (_BYTE)v3 ) /*0x6cc1eb*/
  {
    IDA_LOBYTE(v3) = a2; /*0x6cc1ed*/
    if ( (unsigned int)a2 <= 0x64 ) /*0x6cc1f3*/
    {
      v4 = this->q024; /*0x6cc1fb*/
      if ( v4 == -1 ) /*0x6cc201*/
        v4 = *(_DWORD *)(this->q028 + 176); /*0x6cc206*/
      v5 = v4 - Math::RoundToInt((double)a2 * 0.0099999998 * (double)v4); /*0x6cc223*/
      if ( !v5 ) /*0x6cc225*/
        this->IsCharged = 1; /*0x6cc227*/
      v3 = (_DWORD *)(&this->q0108); /*0x6cc22e*/
      if ( this->q030 == -1 ) /*0x6cc234*/
        *v3 = dword_A8ED84; /*0x6cc23c*/
      *v3 = dword_A8ED84; /*0x6cc248*/
      this->u32_34 = v7; /*0x6cc24a*/
      this->q038 = v5; /*0x6cc24d*/
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
  int q008; // esi
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
  int v49; // edi
  void *v50; // eax
  unsigned int *v51; // ebp
  unsigned int *v52; // eax
  int v53; // ecx
  int v54; // edx
  int v55; // edi
  int v56; // ebx
  void *v57; // eax
  unsigned int *v58; // eax
  int v59; // edi
  int v60; // ecx
  int v61; // eax
  int v62; // edx
  int q004; // eax
  int v64; // edx
  int v65; // eax
  unsigned short *m_Data; // eax
  int16_t v67; // dx
  void *v68; // eax
  int v69; // eax
  int v70; // eax
  void *v71; // eax
  unsigned int *v72; // eax
  int v73; // eax
  void *v74; // eax
  int *v75; // eax
  int v76; // edi
  int v77; // esi
  AnimClass *v78; // eax
  int v79; // edx
  int *v80; // edi
  int16_t v81; // dx
  int16_t v82; // ax
  int v83; // esi
  int16_t v84; // cx
  int v85; // eax
  void *v86; // eax
  AnimClass *v87; // eax
  int v88; // eax
  int v89; // ecx
  int v90; // eax
  int v91; // ecx
  int v92; // ecx
  void *v93; // eax
  int *v94; // edx
  int v95; // ebp
  int v96; // ecx
  int v97; // edi
  void **v98; // esi
  unsigned int *v99; // eax
  unsigned int *v100; // eax
  int v101; // eax
  int v102; // esi
  int v103; // ebp
  ScenarioClass *v104; // eax
  ScenarioClass *v105; // edi
  int v106; // eax
  int v107; // ecx
  int v108; // edi
  int v109; // ecx
  int v110; // ecx
  int v111; // edi
  int v112; // ecx
  int i; // edi
  int v114; // ecx
  VocClass *v115; // ecx
  int v116; // eax
  int v117; // ebp
  int v118; // edi
  ScenarioClass *v119; // eax
  ScenarioClass *v120; // esi
  int v121; // ecx
  int v122; // esi
  int v123; // ecx
  int v124; // esi
  int v125; // edi
  int v126; // ecx
  int j; // ebp
  void *v128; // esi
  int *v129; // eax
  void *v130; // ecx
  unsigned int *v131; // eax
  int16_t *v132; // esi
  void *v133; // eax
  AnimClass *v134; // eax
  int v135; // edx
  int *v136; // edi
  int16_t v137; // dx
  int16_t v138; // ax
  unsigned int *v139; // esi
  int16_t v140; // cx
  unsigned int *v141; // ebp
  int v142; // ecx
  int v143; // eax
  int *v144; // esi
  CellClass *v145; // ebp
  int *UIObjectCOM; // edi
  int v147; // edx
  int v148; // eax
  int v149; // ecx
  char *v150; // esi
  int v151; // edx
  unsigned int *v152; // esi
  int v153; // eax
  int v154; // eax
  BuildingClass *v155; // [esp+48h] [ebp-1E4h]
  int v156; // [esp+54h] [ebp-1D8h] BYREF
  int16_t v158[2]; // [esp+64h] [ebp-1C8h] BYREF
  int v159; // [esp+68h] [ebp-1C4h]
  int v160; // [esp+6Ch] [ebp-1C0h]
  int v162; // [esp+84h] [ebp-1A8h]
  int v164; // [esp+9Ch] [ebp-190h]
  Coord v165; // [esp+A0h] [ebp-18Ch] BYREF
  char v166[8]; // [esp+1E4h] [ebp-48h] BYREF
  char v167[16]; // [esp+1ECh] [ebp-40h] BYREF
  char v168[12]; // [esp+1FCh] [ebp-30h] BYREF
  char v169[12]; // [esp+208h] [ebp-24h] BYREF
  int v171[3]; // [esp+220h] [ebp-Ch] BYREF
}

} // namespace gamemd

// 0x6CE0B0
namespace gamemd {
AbstractClass * * SuperClass::Reset(void *a1, void *a2)
{
  _BYTE *q068; // eax
  int v3; // eax
  int v4; // eax
  void *q024; // ecx
  int *result; // eax
  char *q030; // ebx
  bool v8; // bl
  int v9; // esi
  int v10; // ecx
  int v11; // edx
  _DWORD v12[4]; // [esp+4h] [ebp-10h] BYREF

  q068 = this->q068; /*0x6ce0b6*/
  if ( q068 ) /*0x6ce0bb*/
  {
    q068[405] = 0; /*0x6ce0bd*/
    this->q068 = 0; /*0x6ce0c4*/
    v12[0] = this; /*0x6ce0db*/
    v3 = (*(int (__thiscall **)(int *, _DWORD *))(g_BuildingLoadQueue_Array.ForbiddenHouses[0] + 16))( /*0x6ce0df*/
           g_BuildingLoadQueue_Array.ForbiddenHouses,
           v12);
    if ( v3 != -1 ) /*0x6ce0e5*/
      DynamicVector::RemoveItem((DynamicVector *)g_BuildingLoadQueue_Array.ForbiddenHouses, v3); /*0x6ce0ed*/
  }
  if ( IDA_LOBYTE(this->q06C) ) /*0x6ce0f2*/
  {
    v12[0] = this; /*0x6ce109*/
    v4 = (*(int (__thiscall **)(int *, _DWORD *))(g_BuildingLoadQueue_Array.ForbiddenHouses[0] + 16))( /*0x6ce10d*/
           g_BuildingLoadQueue_Array.ForbiddenHouses,
           v12);
    if ( v4 != -1 ) /*0x6ce113*/
      DynamicVector::RemoveItem((DynamicVector *)g_BuildingLoadQueue_Array.ForbiddenHouses, v4); /*0x6ce11b*/
    IDA_LOBYTE(this->q06C) = 0; /*0x6ce120*/
  }
  q024 = this->q024; /*0x6ce124*/
  result = (int *)&this->q030; /*0x6ce127*/
  IDA_HIBYTE(this->q06C) = 0; /*0x6ce12b*/
  q030 = (char *)this->q030; /*0x6ce12f*/
  this->q078 = -1; /*0x6ce131*/
  v8 = q030 + 1 != 0; /*0x6ce13b*/
  if ( q024 == (void *)-1 ) /*0x6ce141*/
    q024 = (void *)*((_DWORD *)this->q028 + 44); /*0x6ce146*/
  *result = *(_DWORD *)&stru_A8EB00.?[416]; /*0x6ce156*/
  *(_DWORD *)this->q034 = v12[2]; /*0x6ce15d*/
  this->q038 = q024; /*0x6ce160*/
  if ( !v8 ) /*0x6ce163*/
  {
    v9 = *result; /*0x6ce165*/
    if ( *result != -1 ) /*0x6ce16a*/
    {
      v10 = result[2]; /*0x6ce16c*/
      v11 = *(_DWORD *)&stru_A8EB00.?[416] - v9; /*0x6ce17a*/
      if ( *(_DWORD *)&stru_A8EB00.?[416] - v9 >= v10 ) /*0x6ce17e*/
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
  return result; /*0x6ce18b*/
}
}
// 0x6CB3A0
namespace gamemd {
void ** SuperClass::CreateChronoAnim(AbstractClass * aP1, SuperClass * aP2, int a4)
{
  _BYTE *q068; // eax
  int v6; // eax
  int v7; // eax
  void **result; // eax
  SuperClass *v9; // [esp+4h] [ebp-10h] BYREF
  int v10[3]; // [esp+8h] [ebp-Ch] BYREF

  q068 = this->q068; /*0x6cb3a6*/
  if ( q068 ) /*0x6cb3ab*/
  {
    q068[405] = 0; /*0x6cb3ad*/
    this->q068 = 0; /*0x6cb3b4*/
    v9 = this; /*0x6cb3cb*/
    v6 = (*(int (__thiscall **)(int *, SuperClass **))(g_BuildingLoadQueue_Array.ForbiddenHouses[0] + 16))( /*0x6cb3cf*/
           g_BuildingLoadQueue_Array.ForbiddenHouses,
           &v9);
    if ( v6 != -1 ) /*0x6cb3d5*/
      DynamicVector::RemoveItem((DynamicVector *)g_BuildingLoadQueue_Array.ForbiddenHouses, v6); /*0x6cb3dd*/
  }
  if ( IDA_LOBYTE(this->q06C) ) /*0x6cb3e2*/
  {
    v9 = this; /*0x6cb3f9*/
    v7 = (*(int (__thiscall **)(int *, SuperClass **))(g_BuildingLoadQueue_Array.ForbiddenHouses[0] + 16))( /*0x6cb3fd*/
           g_BuildingLoadQueue_Array.ForbiddenHouses,
           &v9);
    if ( v7 != -1 ) /*0x6cb403*/
      DynamicVector::RemoveItem((DynamicVector *)g_BuildingLoadQueue_Array.ForbiddenHouses, v7); /*0x6cb40b*/
    IDA_LOBYTE(this->q06C) = 0; /*0x6cb410*/
  }
  result = (void **)RA2_OPNEW(0x1C8u); /*0x6cb419*/
  if ( result ) /*0x6cb423*/
  {
    v10[0] = aP1; /*0x6cb444*/
    v10[1] = aP2; /*0x6cb455*/
    v10[2] = a4 + 5; /*0x6cb459*/
    result = AnimClass::ctor( /*0x6cb467*/
               (AnimClass *)result,
               *(void **)(*(_DWORD *)&DSurface_ViewBounds.q0FC[324] + 816),
               v10,
               0,
               1,
               (void *)0x600,
               0,
               0);
    if ( result ) /*0x6cb470*/
    {
      this->q068 = result; /*0x6cb472*/
      result = (void **)g_BuildingLoadQueue_Array.qD80; /*0x6cb475*/
      if ( g_BuildingLoadQueue_Array.SecondSpawnOffset[1] < g_BuildingLoadQueue_Array.qD80 /*0x6cb4ae*/
        || (IDA_BYTE1(g_BuildingLoadQueue_Array.SecondSpawnOffset[0]) || !g_BuildingLoadQueue_Array.qD80)
        && g_BuildingLoadQueue_Array.SecondSpawnOffset[2] > 0
        && (result = (void **)(*(int (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.ForbiddenHouses[0]
                                                                        + 8))(
                                g_BuildingLoadQueue_Array.ForbiddenHouses,
                                g_BuildingLoadQueue_Array.qD80 + g_BuildingLoadQueue_Array.SecondSpawnOffset[2],
                                0),
            (_BYTE)result) )
      {
        result = (void **)g_BuildingLoadQueue_Array.SecondSpawnOffset[1]++; /*0x6cb4b6*/
        *(_DWORD *)(g_BuildingLoadQueue_Array.SecretHouses[0] + 4 * (_DWORD)result) = this; /*0x6cb4c5*/
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

  if ( !this->Granted || this->OneTime || aP1 == this->q070 || !this->q060 ) /*0x6cb4ea*/
  {
    IDA_LOBYTE(result) = 0; /*0x6cb552*/
  }
  else
  {
    if ( aP1 || (result = this->q028, *(_BYTE *)(result + 245)) ) /*0x6cb4f9*/
    {
      v3 = this->q030; /*0x6cb51c*/
      if ( v3 != -1 ) /*0x6cb522*/
      {
        v4 = this->q038; /*0x6cb524*/
        if ( (int)dword_A8ED84 - v3 >= v4 ) /*0x6cb536*/
          result = 0; /*0x6cb53c*/
        else
          result = v4 - ((_DWORD)dword_A8ED84 - v3); /*0x6cb538*/
        this->q038 = result; /*0x6cb53e*/
        this->q030 = -1; /*0x6cb541*/
      }
    }
    else if ( this->q030 == -1 ) /*0x6cb507*/
    {
      this->q030 = dword_A8ED84; /*0x6cb510*/
      this->q070 = 0; /*0x6cb513*/
      IDA_LOBYTE(result) = 1; /*0x6cb516*/
      return result; /*0x6cb519*/
    }
    this->q070 = aP1; /*0x6cb548*/
    IDA_LOBYTE(result) = 1; /*0x6cb54c*/
  }
  return result; /*0x6cb518*/
}
} // namespace gamemd

// 0x6CB820
namespace gamemd {
char SuperClass::SetReadiness(char a2)
{
  IDA_HIBYTE(this->q06C) = a2; /*0x6cb824*/
  return a2; /*0x6cb827*/
}
} // namespace gamemd

// 0x6CC280
namespace gamemd {
int SuperClass::SetRechargeTime(int a2)
{
  this->q024 = (void *)a2; /*0x6cc284*/
  return a2; /*0x6cc287*/
}
} // namespace gamemd

// 0x6CC290
namespace gamemd {
void SuperClass::ResetRechargeTime()
{
  this->q024 = (void *)-1; /*0x6cc290*/
}
} // namespace gamemd

// 0x6CC2B0
namespace gamemd {
wchar_t * SuperClass::NameReadiness(void * aTxtHold)
{
  char *q07C; // ecx
  char *v2; // ecx

  if ( IDA_LOBYTE(aTxtHold->q070) ) /*0x6cc2b0*/
    return GetStringCSF(aTxtHold, 0, (const char *)&g_Str_EVA_ChronosphereReady.SampleIndex[1], 950); /*0x6cc34d*/
  if ( *((_BYTE *)aTxtHold->q028 + 229) ) /*0x6cc2be*/
  {
    q07C = (char *)aTxtHold->q07C; /*0x6cc2c8*/
    if ( q07C ) /*0x6cc2ce*/
    {
      v2 = q07C - 1; /*0x6cc2d0*/
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
        return GetStringCSF(g_Str_TXT_READY, 0, (const char *)&g_Str_EVA_ChronosphereReady.SampleIndex[1], 922); /*0x6cc301*/
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
    if ( !IDA_HIBYTE(aTxtHold->q06C) ) /*0x6cc323*/
      return 0; /*0x6cc323*/
    return GetStringCSF(g_Str_TXT_READY, 0, (const char *)&g_Str_EVA_ChronosphereReady.SampleIndex[1], 944); /*0x6cc336*/
  }
}
} // namespace gamemd

// 0x6CC360
namespace gamemd {
char SuperClass::CanFire()
{
  if ( IDA_LOBYTE(this->q070) ) /*0x6cc360*/
    return 0; /*0x6cc381*/
  if ( *((_BYTE *)this->q028 + 229) ) /*0x6cc36a*/
    return this->q07C != 0; /*0x6cc379*/
  return IDA_HIBYTE(this->q06C); /*0x6cc37c*/
}
} // namespace gamemd

// 0x6CDE90
namespace gamemd {
bool SuperClass::ShouldDrawProgress()
{
  return *((_BYTE *)this->q028 + 229) || IDA_HIBYTE(this->q06C) == 0; /*0x6cde9d*/
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

  result = AbstractClass::SaveLoad_Prefix_0(aP0, aP1); /*0x6cdefb*/
  if ( result >= 0 ) /*0x6cdf02*/
  {
    if ( aP0 ) /*0x6cdf0a*/
    {
      AbstractClass::Constructor((AbstractClass *)aP0); /*0x6cdf0e*/
      aP0->SuperClass_field_0x0 = &(void*)(void*)&SuperClass_vftable; /*0x6cdf13*/
      aP0->SuperClass_field_0x4 = &(void*)(void*)&SuperClass_vftable; /*0x6cdf19*/
      aP0->SuperClass_field_0x8 = &(void*)(void*)&SuperClass_vftable; /*0x6cdf20*/
      *(_DWORD *)aP0->q00C = &(void*)(void*)&SuperClass_vftable; /*0x6cdf27*/
    }
    if ( aP0->q068 /*0x6cdf70*/
      && (g_BuildingLoadQueue_Array.SecondSpawnOffset[1] < g_BuildingLoadQueue_Array.qD80
       || (IDA_BYTE1(g_BuildingLoadQueue_Array.SecondSpawnOffset[0]) || !g_BuildingLoadQueue_Array.qD80)
       && g_BuildingLoadQueue_Array.SecondSpawnOffset[2] > 0
       && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_BuildingLoadQueue_Array.ForbiddenHouses[0] + 8))(
            g_BuildingLoadQueue_Array.ForbiddenHouses,
            g_BuildingLoadQueue_Array.qD80 + g_BuildingLoadQueue_Array.SecondSpawnOffset[2],
            0)) )
    {
      v3 = g_BuildingLoadQueue_Array.SecondSpawnOffset[1]++; /*0x6cdf7d*/
      *(_DWORD *)(g_BuildingLoadQueue_Array.SecretHouses[0] + 4 * v3) = aP0; /*0x6cdf8c*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&aP0->q028); /*0x6cdf98*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&aP0->q02C); /*0x6cdfa6*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&aP0->q068); /*0x6cdfb1*/
    *(_DWORD *)&aP0->q03C[12] = 0; /*0x6cdfb6*/
    *(_DWORD *)&aP0->q03C[16] = 0; /*0x6cdfbd*/
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

  result = AbstractClass::SaveLoad_Prefix((int *)aP0, a1, aP2); /*0x6cdfdf*/
  if ( result >= 0 ) /*0x6cdfe6*/
    return 0; /*0x6cdfe8*/
  return result; /*0x6cdfea*/
}
} // namespace gamemd

// 0x6CDFF0
namespace gamemd {
long long SuperClass::ExecuteAction(unsigned int a2, int a3)
{
  __int64 result; // rax

  result = a2; /*0x6cdff0*/
  if ( (void *)a2 == this->q02C ) /*0x6cdffc*/
    this->q02C = 0; /*0x6cdffe*/
  if ( (void *)a2 == this->q028 ) /*0x6ce004*/
    this->q028 = 0; /*0x6ce006*/
  if ( (void *)a2 == this->q068 ) /*0x6ce00f*/
  {
    this->q068 = 0; /*0x6ce011*/
    IDA_LOBYTE(this->q06C) = 1; /*0x6ce014*/
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
  IDA_LOBYTE(v3) = IDA_BYTE1(this->q06C); /*0x6ce02e*/
  Power::FlagProcess((Power *)a2, v3); /*0x6ce034*/
  IDA_LOBYTE(v4) = IDA_BYTE2(this->q06C); /*0x6ce039*/
  Power::FlagProcess((Power *)a2, v4); /*0x6ce03f*/
  IDA_LOBYTE(v5) = IDA_HIBYTE(this->q06C); /*0x6ce044*/
  Power::FlagProcess((Power *)a2, v5); /*0x6ce04a*/
  Power::TimerProcess(this->q078); /*0x6ce055*/
  Power::TimerProcess((int)this->q07C); /*0x6ce060*/
  IDA_LOBYTE(v6) = this->q060; /*0x6ce065*/
  v7 = Power::FlagProcess((Power *)a2, v6); /*0x6ce06b*/
  IDA_LOBYTE(v7) = this->q06C; /*0x6ce070*/
  Power::FlagProcess((Power *)a2, v7); /*0x6ce076*/
  result = (int)this->q068; /*0x6ce07b*/
  if ( result ) /*0x6ce080*/
  {
    Power::TimerProcess(*(unsigned __int8 *)(result + 405)); /*0x6ce08d*/
    v9 = (*(int (__stdcall **)(char *))(*((_DWORD *)this->q068 + 1) + 16))((char *)this->q068 + 4); /*0x6ce09c*/
    return Power::TimerProcess(v9); /*0x6ce0a2*/
  }
  return result; /*0x6ce0a7*/
}
} // namespace gamemd

// 0x6CE1A0
namespace gamemd {
bool SuperClass::ShouldFlashTab()
{
  _BYTE *q028; // eax
  int v2; // eax

  if ( IDA_LOBYTE(this->q070) ) /*0x6ce1a0*/
    return 0; /*0x6ce1a5*/
  q028 = this->q028; /*0x6ce1a7*/
  if ( q028[229] ) /*0x6ce1aa*/
  {
    if ( !this->q07C ) /*0x6ce1b9*/
      return 0; /*0x6ce1b9*/
  }
  else if ( !IDA_HIBYTE(this->q06C) ) /*0x6ce1c2*/
  {
    return 0; /*0x6ce1c2*/
  }
  v2 = *((_DWORD *)q028 + 58); /*0x6ce1c4*/
  if ( v2 == -1 ) /*0x6ce1cd*/
    return 1; /*0x6ce1d1*/
  return v2 && (int)this->q074 + v2 > *(int *)&stru_A8EB00.?[416]; /*0x6ce1d1*/
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
