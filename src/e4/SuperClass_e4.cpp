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
    unsigned int v3 = 0;  /* G37 hoist */
    unsigned int v3 = 0;  /* G37 hoist */
    unsigned int v3 = 0;  /* G37 hoist */
  unsigned int result;
  void *v3; // esi
  void *v4; // eax
  int *v5; // eax
  void **v6; // eax
  char *v7; // edx
  int v8[3]; // [esp+4h] [ebp-18h] BYREF
  unsigned int v9[3]; // [esp+10h] [ebp-Ch] BYREF

  result = g_RulesClass_Instance; /*0x53ae50*/
  if ( g_RulesClass_Instance->PrerequisitePower[0] && g_RulesClass_Instance->PrerequisitePower[1] ) /*0x53ae66*/
  {
    PsyDom_Owner = (int)((void **)(this));
    PsyDom_Coords = (int)((void **)(a2));
    v3 = (void *)g_RulesClass_Instance->PrerequisitePower[0]; /*0x53ae85*/
    v4 = CellCoord::To_CellObj(&MapClass_Instance, (int16_t *)&PsyDom_Coords); /*0x53ae95*/
    v5 = (int *)(*(int (**)(void *, unsigned int *))(*(unsigned int *)v4 + 72))(v4, v9); /*0x53aea3*/
    v8[0] = *v5; /*0x53aea8*/
    v8[1] = v5[1]; /*0x53aeb4*/
    v8[2] = v5[2] + 750; /*0x53aec0*/
    v6 = (void *)operator new(0x1C8u); /*0x53aec4*/
    if ( v6 ) /*0x53aece*/
      PsyDom_Anim = (int)AnimClass::ctor(v6, v3, v8, 0, 1, (void *)0x600, 0, 0); /*0x53aeea*/
    else
      PsyDom_Anim = 0; /*0x53aef1*/
    v7 = (char *)g_ScenarioClass_Instance + 4680; /*0x53af06*/
    PsyDom_Status = 1; /*0x53af0c*/
    *((unsigned int *)g_ScenarioClass_Instance + 1170) = g_CurrentFrame; /*0x53af1b*/
    *((unsigned int *)v7 + 1) = v9[1]; /*0x53af21*/
    *((unsigned int *)v7 + 2) = 1; /*0x53af24*/
    return (RulesClass *)ScenarioClass::UpdateLighting(); /*0x53af27*/
  }
  return (void *)(result);
}
}
// 0x6CAEC0
namespace gamemd {
void SuperClass::Constructor()
{
  SuperClass * v2;

  AbstractClass::Constructor(); /*0x6caec3*/
  this->SuperClass_field_0x24 = (unsigned int)((void *)-1);
  this->SuperClass_field_0x28 = (unsigned int)(0);
  this->SuperClass_field_0x2C = (unsigned int)(0);
  this->SuperClass_field_0x30 = (unsigned int)(*(void **)&(unsigned int *)((char *)&stru_A8EB00 + 416));
  this->SuperClass_field_0x38 = (unsigned int)(0);
  *(unsigned int *)&this-((unsigned int *)(>__pad_3C))[12] = 0; /*0x6caee2*/
  this-((unsigned int *)(>__pad_3C))[4] = 0; /*0x6caee5*/
  *(unsigned int *)&this-((unsigned int *)(>__pad_3C))[16] = 0; /*0x6caee8*/
  *(unsigned int *)&this-((unsigned int *)(>__pad_3C))[20] = -1; /*0x6caeeb*/
    *((unsigned char *)this + 384) = 1;
    *((unsigned int *)this + 392) = MEMORY[0xB0C000];
    *((unsigned int *)this + 416) = 0;
    *((unsigned char *)this + 432) = 0;
    *((unsigned char *)this + 436) = 0;
    *((unsigned char *)this + 440) = 0;
    *((unsigned char *)this + 444) = 0;
    *((unsigned char *)this + 448) = 0;
    *((unsigned int *)this + 496) = -1;
    *(unsigned int *)this = &SuperClass::`vftable';
    *((unsigned int *)this + 16) = &SuperClass::`vftable';
    *((unsigned int *)this + 32) = &SuperClass::`vftable';
    *((unsigned int *)this + 48) = &vt_SuperClass;
    *((unsigned int *)this + 240) = &MEMORY[0x887734];
  if ( dword_A83CC8 < dword_A83CC0 /*0x6caf64*/
    || (byte_A83CC5 || !dword_A83CC0)
    && dword_A83CCC > 0
    && (*(uint8_t (**)(unsigned int *, int, unsigned int))(dword_A83CB8 + 8))(
         &dword_A83CB8,
         dword_A83CC0 + dword_A83CCC,
         0) )
  {
    v2 = (gamemd::SuperClass *)((unsigned int)((unsigned int)(dword_A83CC8)++));
    *((unsigned int *)(unsigned int)(dword_A83CBC)+ v2) = this; /*0x6caf80*/
  }
  return (int)this; /*0x6caf85*/
}
}
// 0x6CAF90
namespace gamemd {
void SuperClass::Construct()
{
  SuperClass * v5;
  SuperClass * v6;
  SuperClass * v7;

  AbstractClass::Constructor(); /*0x6caf94*/
  this->q028 = (void *)(a2);
  this->q024 = (void *)((unsigned int)(-1));
  this->q02C = (void *)((unsigned int)(aP2));
  this->q030 = (unsigned int)(dword_A8ED84);
    *((unsigned int *)this + 224) = 0;
    *((unsigned int *)this + 288) = 0;
    *((unsigned char *)this + 256) = 0;
    *((unsigned int *)this + 304) = 0;
    *((unsigned int *)this + 320) = -1;
    *((unsigned char *)this + 384) = 1;
  dword_B0C000 = dword_B0C000; /*0x6cafcb*/
    *((unsigned int *)this + 480) = -1;
    *((unsigned int *)this + 496) = -1;
  this->ChronoMapCoords = (gamemd::SuperClass *)(dword_B0C000);
    *((unsigned int *)this + 416) = 0;
    *((unsigned char *)this + 432) = 0;
    *((unsigned char *)this + 436) = 0;
    *((unsigned char *)this + 440) = 0;
    *((unsigned char *)this + 444) = 0;
    *((unsigned char *)this + 448) = 0;
    *((unsigned int *)this + 464) = -100;
  *(unsigned int *)this = (void*)&SuperClass_vftable; /*0x6caff7*/
    *((unsigned int *)this + 16) = &SuperClass::`vftable';
    *((unsigned int *)this + 32) = &SuperClass::`vftable';
    *((unsigned int *)this + 48) = &vt_SuperClass;
  this->vtable2.GenerateUniqueID(); /*0x6cb011*/
  if ( dword_A83CC8 < dword_A83CC0 /*0x6cb049*/
    || (byte_A83CC5 || !dword_A83CC0)
    && dword_A83CCC > 0
    && (*(uint8_t (**)(int *, int, unsigned int))(dword_A83CB8 + 8))(
         &dword_A83CB8,
         dword_A83CC0 + dword_A83CCC,
         0) )
  {
    v5 = (gamemd::SuperClass *)((unsigned int)((unsigned int)(dword_A83CC8)++));
    *((unsigned int *)(unsigned int)(dword_A83CBC)+ v5) = this; /*0x6cb065*/
  }
  if ( dword_B0F680 < dword_B0F678 /*0x6cb09c*/
    || (byte_B0F67D || !dword_B0F678)
    && dword_B0F684 > 0
    && (*(uint8_t (**)(int *, int, unsigned int))(dword_B0F670 + 8))(
         &dword_B0F670,
         dword_B0F678 + dword_B0F684,
         0) )
  {
    v6 = (gamemd::SuperClass *)((unsigned int)((unsigned int)(dword_B0F680)++));
    *((unsigned int *)(unsigned int)(dword_B0F674)+ v6) = this; /*0x6cb0b8*/
  }
  if ( dword_B0F6D8 < dword_B0F6D0 /*0x6cb0ef*/
    || (byte_B0F6D5 || !dword_B0F6D0)
    && dword_B0F6DC > 0
    && (*(uint8_t (**)(int *, int, unsigned int))(dword_B0F6C8 + 8))(
         &dword_B0F6C8,
         dword_B0F6D0 + dword_B0F6DC,
         0) )
  {
    v7 = (gamemd::SuperClass *)((unsigned int)((unsigned int)(dword_B0F6D8)++));
    *((unsigned int *)(unsigned int)(dword_B0F6CC)+ v7) = this; /*0x6cb10b*/
  }
  return (int)(this);
}
}
// 0x6CB120
namespace gamemd {
SuperClass * * SuperClass::CleanupMembers()
{
  void * v2;
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
v2 = (void *)((unsigned int)((void *)((unsigned int)(this->q068))));
  *(unsigned int *)this = (void*)&SuperClass_vftable; /*0x6cb127*/
    *((unsigned int *)this + 16) = &SuperClass::`vftable';
    *((unsigned int *)this + 32) = &SuperClass::`vftable';
    *((unsigned int *)this + 48) = &vt_SuperClass;
  if ( v2 ) /*0x6cb144*/
  {
    *(unsigned char *)((unsigned int)(v2)+ 405) = 0; /*0x6cb146*/
        *((unsigned int *)this + 416) = 0;
    v3 = (*(int (**)(int *, int *))(*((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 0)) + 16))(g_BuildingLoadQueue_Array.?, &this); /*0x6cb168*/
    if ( v3 != -1 ) /*0x6cb16e*/
      DynamicVector::RemoveItem((DynamicVector *)g_BuildingLoadQueue_Array.?, v3); /*0x6cb176*/
  }
    if ( *((unsigned char *)this + 432) )
  {
    v4 = (*(int (**)(int *, int *))(*((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 0)) + 16))(g_BuildingLoadQueue_Array.?, &this); /*0x6cb196*/
    if ( v4 != -1 ) /*0x6cb19c*/
      DynamicVector::RemoveItem((DynamicVector *)g_BuildingLoadQueue_Array.?, v4); /*0x6cb1a4*/
        *((unsigned char *)this + 432) = 0;
  }
  v5 = (*((int (**)(SuperClass *, int *))stru_A83D50.SuperClass_field_0x0 + 4))(&stru_A83D50, &this); /*0x6cb1c1*/
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
  v6 = (*(int (**)(unsigned int *, int *))(dword_A83CB8 + 16))(&dword_A83CB8, &this); /*0x6cb20a*/
  if ( v6 != -1 && v6 < dword_A83CC8 && v6 < --dword_A83CC8 ) /*0x6cb225*/
  {
    do /*0x6cb23d*/
    {
      ++v6; /*0x6cb22d*/
      *((unsigned int *)dword_A83CBC + v6 - 1) = *((unsigned int *)dword_A83CBC + v6); /*0x6cb231*/
    }
    while ( v6 < dword_A83CC8 ); /*0x6cb23d*/
  }
  v7 = (*(int (**)(int *, int *))(g_BuildingLoadQueue_Array.LightVisibility + 16))( /*0x6cb253*/
         &g_BuildingLoadQueue_Array.LightVisibility,
         &this);
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
  v8 = (*(int (**)(char *, int *))(*(unsigned int *)g_BuildingLoadQueue_Array.__pad_E88 + 16))( /*0x6cb29c*/
         g_BuildingLoadQueue_Array.__pad_E88,
         &this);
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
    AbstractClass::DTOR((unsigned int *)this);
}
}
// 0x6CB560
namespace gamemd {
AbstractClass * * SuperClass::StartTimer(IUnknown * aP1, IUnknown * aP2, IUnknown * aP3)
{
  SuperClass * v5;
  int v6; // ecx
  int v7; // edx
  void *v8; // eax
  int v9; // eax
  int v10; // edx
  unsigned int *v11; // eax
  int v12; // ecx
  int v13; // edx
  int v14; // edi
  void * v15;
  int DefaultTimer; // eax
  int v19; // edx
  int v21; // [esp+8h] [ebp-Ch] BYREF
  int v22; // [esp+Ch] [ebp-8h]
  int v23; // [esp+10h] [ebp-4h]

    if ( !*((unsigned char *)this + 436) )
  {
    v5 = (gamemd::SuperClass *)((char)(this));
    v6 = (unsigned int)(this->Height);
    this->unknown_6D = (unsigned int)(1);
    this->unknown_6E = (unsigned int)(v5);
        *((unsigned char *)this + 256) = 0;
    v7 = *(unsigned int *)(v6 + 96); /*0x6cb583*/
    IDA_LOBYTE(this) = 0; /*0x6cb589*/
        *((unsigned int *)this + 240) = v7;
        if ( !v5 && *((unsigned char *)this + 448) && *((unsigned char *)this + 384) )
    {
      if ( *(unsigned char *)(v6 + 245) ) /*0x6cb59c*/
      {
                if ( *((unsigned int *)this + 192) != -1 )
        {
                    *((unsigned int *)this + 224) = CDTimerClass::TimeRemaining((int *)((char *)this + 192));
                    *((unsigned int *)this + 192) = -1;
        }
      }
            else if ( *((unsigned int *)this + 192) == -1 )
      {
                *((unsigned int *)this + 192) = *(unsigned int *)&MEMORY[0xA8D63C].__pad_14B0[664];
      }
            *((unsigned char *)this + 448) = 0;
    }
        if ( *(unsigned char *)(*((unsigned int *)this + 160) + 244)
      && !*(unsigned char *)(*(unsigned int *)(this->Accel + 52) + 422)
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
        v9 = *((unsigned int *)this + 160);
    if ( *(unsigned char *)(v9 + 245) ) /*0x6cb641*/
    {
            v10 = *((unsigned int *)this + 144);
            *((unsigned int *)this + 480) = -1;
      if ( v10 == -1 ) /*0x6cb656*/
        v10 = *(unsigned int *)(v9 + 176); /*0x6cb658*/
      v11 = (unsigned int *)(&this->Powered8); /*0x6cb664*/
            *((unsigned int *)this + 192) = *(unsigned int *)&MEMORY[0xA8D63C].__pad_14B0[664];
            *((unsigned int *)this + 208) = v22;
            *((unsigned int *)this + 224) = v10;
      v12 = this->Wobbles; /*0x6cb675*/
      if ( v12 != -1 ) /*0x6cb67a*/
      {
                v13 = *((unsigned int *)this + 224);
        v14 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - v12; /*0x6cb68e*/
        if ( *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - v12 >= v13 ) /*0x6cb692*/
        {
                    *((unsigned int *)this + 224) = 0;
          *v11 = -1; /*0x6cb6a9*/
        }
        else
        {
          *v11 = -1; /*0x6cb696*/
                    *((unsigned int *)this + 224) = v13 - v14;
        }
      }
    }
    else
    {
      v15 = (void *)((int)(this->q068));
      if ( v15 ) /*0x6cb6b9*/
      {
        *(unsigned char *)((unsigned int)(v15)+ 405) = 0; /*0x6cb6bf*/
                *((unsigned int *)this + 416) = 0;
        VectorClass::RemoveAt((VectorClass *)g_BuildingLoadQueue_Array.?, (int)&this); /*0x6cb6d2*/
      }
            if ( *((unsigned char *)this + 432) )
      {
        VectorClass::RemoveAt((VectorClass *)g_BuildingLoadQueue_Array.?, (int)&this); /*0x6cb6ea*/
                *((unsigned char *)this + 432) = 0;
      }
            if ( !*((unsigned char *)this + 436)
        || this->unknown_6F
        || this->CurrentHeight && !*(unsigned char *)(this->Height + 237) )
      {
        IDA_LOBYTE(this) = 0; /*0x6cb757*/
      }
      else
      {
                *((unsigned int *)this + 480) = -1;
        SuperClass::SetCurrentFrame((SuperClass *)(&this->Powered8)); /*0x6cb718*/
        DefaultTimer = Super::GetDefaultTimer((Super *)this); /*0x6cb71f*/
        Timer::Start((Timer *)&v21, DefaultTimer); /*0x6cb729*/
        v22 = v22; /*0x6cb732*/
        v23 = v23; /*0x6cb736*/
                *((unsigned int *)this + 192) = v21;
                v19 = *((unsigned int *)this + 160);
                *((unsigned int *)this + 208) = v17;
                *((unsigned int *)this + 224) = v18;
        if ( *(unsigned char *)(v19 + 229) ) /*0x6cb745*/
                    *((unsigned int *)this + 496) = 0;
        IDA_LOBYTE(this) = 1; /*0x6cb750*/
      }
    }
        if ( (unsigned char)aP3 && *((unsigned char *)this + 436) )
    {
            if ( *((unsigned char *)this + 440) )
        goto LABEL_45; /*0x6cb76c*/
            if ( *((unsigned char *)this + 448) != 1 )
      {
                if ( *((unsigned char *)this + 384) )
        {
          SuperClass::AdvanceCountdown((SuperClass *)(&this->Powered8)); /*0x6cb77c*/
                    *((unsigned char *)this + 448) = 1;
        }
      }
    }
        if ( !*((unsigned char *)this + 440) )
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

  this = this; /*0x6cb7b0*/
    if ( !*((unsigned int *)this + 436) )
    return 0; /*0x6cb80d*/
    *((unsigned int *)this + 444) = 0;
    *((unsigned int *)this + 436) = 0;
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
  void * v3;
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  unsigned int v8[4]; // [esp+8h] [ebp-10h] BYREF

  v3 = (void *)((int)(this->q068));
  if ( v3 ) /*0x6cb83e*/
  {
    *(unsigned char *)((unsigned int)(v3)+ 405) = 0; /*0x6cb840*/
        *((unsigned int *)this + 416) = 0;
    v8[0] = this; /*0x6cb859*/
    v4 = (*(int (**)(int *, unsigned int *))(stru_B0F5B8 + 16))(&stru_B0F5B8, v8); /*0x6cb85d*/
    if ( v4 != -1 ) /*0x6cb863*/
      DynamicVector::RemoveItem(&stru_B0F5B8, v4); /*0x6cb86b*/
  }
    if ( *((unsigned char *)this + 432) )
  {
    v8[0] = (unsigned int)(this);
    v5 = (*(int (**)(int *, unsigned int *))(stru_B0F5B8 + 16))(&stru_B0F5B8, v8); /*0x6cb889*/
    if ( v5 != -1 ) /*0x6cb88f*/
      DynamicVector::RemoveItem(&stru_B0F5B8, v5); /*0x6cb897*/
        *((unsigned char *)this + 432) = 0;
  }
    if ( !*((unsigned char *)this + 436)
    || this->IsCharged
    || this->q070 && !*(unsigned char *)((unsigned int)(this->q028)+ 237) )
  {
    return 0; /*0x6cb90d*/
  }
  this->q078 = (int)((gamemd::AbstractClass **)(-1));
    if ( *((unsigned int *)this + 192) == -1 )
        *((unsigned int *)this + 192) = *(unsigned int *)&MEMORY[0xA8D63C].__pad_14B0[664];
    v6 = *((unsigned int *)this + 144);
  if ( v6 == -1 ) /*0x6cb8d7*/
        v6 = *(unsigned int *)(*((unsigned int *)this + 160) + 176);
    *((unsigned int *)this + 192) = *(unsigned int *)&MEMORY[0xA8D63C].__pad_14B0[664];
    *((unsigned int *)this + 208) = v8[2];
    *((unsigned int *)this + 224) = v6;
    if ( *(unsigned char *)(*((unsigned int *)this + 160) + 229) )
        *((unsigned int *)this + 496) = 0;
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
  unsigned int v9;
  wchar_t **v10; // esi
  wchar_t *v11; // eax
  wchar_t * v13;
  int v14; // edx
  int v15; // eax
  unsigned int v16;
  int v17; // eax
  int v18; // edx
  wchar_t **v19; // edi
  int v20; // eax
  char v21; // al
  int v22; // eax
  int v23; // ecx
  unsigned int v24;
  wchar_t *v25; // eax
  int v26; // ecx
  char *v27; // edx
  int v28; // eax
  int v29; // ecx
  wchar_t *v30; // [esp+14h] [ebp-8h]

    v4 = *((unsigned int *)this + 160);
  if ( *(unsigned char *)(v4 + 229) ) /*0x6cb92d*/
  {
        if ( (unsigned __int8)House::IsCurrentPlayer(*(#375 **)((char *)this + 176)) )
    {
            v5 = *((unsigned int *)this + 496);
      if ( v5 == 2 ) /*0x6cb94f*/
      {
        v6 = (int16_t *)(this->q090);
                *((unsigned int *)this + 496) = 1;
        if ( v6 == (int16_t *)-1 ) /*0x6cb95e*/
                    a3 = *(__int16 **)(*((unsigned int *)this + 160) + 176);
        else
          a3 = v6; /*0x6cb960*/
                v7 = *((unsigned int *)this + 192);
                v8 = *((unsigned int *)this + 224);
        v9 = g_CurrentFrame; /*0x6cb979*/
                v10 = (wchar_t **)((char *)this + 192);
        if ( v7 != -1 ) /*0x6cb985*/
        {
          if ( (int)g_CurrentFrame - v7 >= v8 ) /*0x6cb98d*/
          {
            a2 = 0; /*0x6cb9c7*/
            goto LABEL_11; /*0x6cb9cb*/
          }
          v8 -= (int)g_CurrentFrame - v7; /*0x6cb98f*/
        }
        a2 = (int)((wchar_t *)(v8));
  LABEL_11:
        v11 = (wchar_t *)Math::RoundToInt((double)(int)a3 - (double)a2 / *(double *)&g_RulesClass_Instance->Shipyard[2]); /*0x6cb995*/
        *v10 = v9; /*0x6cb9b4*/
        v10[1] = v30; /*0x6cb9b6*/
        v10[2] = v11; /*0x6cb9b9*/
        return 0; /*0x6cb9c4*/
      }
      if ( v5 == 1 ) /*0x6cb9d0*/
      {
        v13 = (int)((wchar_t *)(*(unsigned int *)&this->q090));
                *((unsigned int *)this + 496) = 2;
        if ( v13 == -1 ) /*0x6cb9e3*/
                    v13 = *(unsigned int *)(*((unsigned int *)this + 160) + 176);
                v14 = *((unsigned int *)this + 192);
                v15 = *((unsigned int *)this + 224);
        v16 = g_CurrentFrame; /*0x6cb9f5*/
        if ( v14 != -1 ) /*0x6cb9fe*/
        {
          if ( (int)g_CurrentFrame - v14 >= v15 ) /*0x6cba06*/
            v15 = 0; /*0x6cba0c*/
          else
            v15 -= (int)g_CurrentFrame - v14; /*0x6cba08*/
        }
        v17 = Math::RoundToInt((double)(v13 - v15) * *(double *)&g_RulesClass_Instance->Shipyard[2]); /*0x6cba23*/
        v18 = a2; /*0x6cba2c*/
                *((unsigned int *)this + 192) = v16;
                *((unsigned int *)this + 208) = v30;
                *((unsigned int *)this + 224) = v17;
        SuperClass::Launch(v18, a3, v18); /*0x6cba41*/
        return 0; /*0x6cba4f*/
      }
    }
        else if ( !*(unsigned char *)(*((unsigned int *)this + 176) + 506) )
    {
      SuperClass::Launch(a2, a3, a2); /*0x6cba6d*/
      return 0; /*0x6cba7a*/
    }
    return 0; /*0x6cbc96*/
  }
  v19 = (wchar_t **)&this->u32_C0; /*0x6cba80*/
    if ( (*((unsigned int *)this + 192) == -1 || !*((unsigned char *)this + 436) || !*((unsigned char *)this + 444)) && !*(unsigned char *)(v4 + 238) )
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
    if ( *(unsigned int *)(*((unsigned int *)this + 160) + 180) == 7 && PsyDom::IsActive() )
  {
    if ( (unsigned char)a2 ) /*0x6cbae3*/
    {
      Weapon_Get_53B410(); /*0x6cbae9*/
      return 0; /*0x6cbaf6*/
    }
    return 0; /*0x6cbae3*/
  }
  SuperClass::Launch(a2, a3, a2); /*0x6cbb05*/
    v20 = *((unsigned int *)this + 160);
  if ( !*(unsigned char *)(v20 + 238) ) /*0x6cbb0d*/
        *((unsigned char *)this + 444) = 0;
    if ( !*((unsigned char *)this + 440) )
  {
    if ( *(unsigned char *)(v20 + 245) ) /*0x6cbb63*/
    {
      v23 = (wchar_t *)(*(unsigned int *)&this->q090);
      if ( v23 == -1 ) /*0x6cbb71*/
        v23 = *(unsigned int *)(v20 + 176); /*0x6cbb73*/
      v24 = g_CurrentFrame; /*0x6cbb79*/
            *((unsigned int *)this + 480) = -1;
      *v19 = v24; /*0x6cbb87*/
            *((unsigned int *)this + 208) = v30;
            *((unsigned int *)this + 224) = v23;
      v25 = *v19; /*0x6cbb93*/
      if ( *v19 != (wchar_t *)-1 ) /*0x6cbb98*/
      {
                v26 = *((unsigned int *)this + 224);
        v27 = (char *)((char *)g_CurrentFrame - (char *)v25); /*0x6cbbac*/
        if ( (char *)g_CurrentFrame - (char *)v25 >= v26 ) /*0x6cbbb0*/
        {
                    *((unsigned int *)this + 224) = 0;
          *v19 = (wchar_t *)-1; /*0x6cbbcd*/
        }
        else
        {
          *v19 = (wchar_t *)-1; /*0x6cbbb4*/
                    *((unsigned int *)this + 224) = v26 - (unsigned int)v27;
        }
        return 0; /*0x6cbbc5*/
      }
    }
    else if ( !*(unsigned char *)(v20 + 237) && !*(unsigned char *)(v20 + 238) ) /*0x6cbbea*/
    {
            v28 = *((unsigned int *)this + 416);
      if ( v28 ) /*0x6cbbfb*/
      {
        *(unsigned char *)(v28 + 405) = 0; /*0x6cbc01*/
                *((unsigned int *)this + 416) = 0;
        a2 = this; /*0x6cbc10*/
        VectorClass::RemoveAt(&g_BuildingInstanceCount, (int)&a2); /*0x6cbc14*/
      }
            if ( *((unsigned char *)this + 432) )
      {
        a2 = this; /*0x6cbc28*/
        VectorClass::RemoveAt(&g_BuildingInstanceCount, (int)&a2); /*0x6cbc2c*/
                *((unsigned char *)this + 432) = 0;
      }
            if ( *((unsigned char *)this + 436)
        && !*(unsigned char *)&this->IsCharged
        && (!*(unsigned char *)&this->q070 || *(unsigned char *)(this->u32_A0 + 237)) )
      {
                *((unsigned int *)this + 480) = -1;
        if ( *v19 == (wchar_t *)-1 ) /*0x6cbc5a*/
          *v19 = g_CurrentFrame; /*0x6cbc62*/
                v29 = *((unsigned int *)this + 144);
        if ( v29 == -1 ) /*0x6cbc6a*/
                    v29 = *(unsigned int *)(*((unsigned int *)this + 160) + 176);
        *v19 = g_CurrentFrame; /*0x6cbc7a*/
                *((unsigned int *)this + 208) = v30;
                *((unsigned int *)this + 224) = v29;
                if ( *(unsigned char *)(*((unsigned int *)this + 160) + 229) )
                    *((unsigned int *)this + 496) = 0;
      }
    }
    return 0; /*0x6cbb98*/
  }
    v21 = *((unsigned char *)this + 436);
    *((unsigned char *)this + 440) = 0;
  if ( !v21 ) /*0x6cbb25*/
    return 0; /*0x6cbb25*/
    *((unsigned char *)this + 444) = 0;
    *((unsigned char *)this + 436) = 0;
  a2 = this; /*0x6cbb41*/
  v22 = (*(int (**)(int *, int *))(SuperClass_ShowTimers + 16))(&SuperClass_ShowTimers, &a2); /*0x6cbb45*/
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

    result = *((unsigned char *)this + 436);
  if ( result ) /*0x6cc08b*/
  {
        v4 = *((unsigned int *)this + 144);
        *((unsigned char *)this + 444) = 1;
    if ( v4 == -1 ) /*0x6cc09c*/
            v4 = *(unsigned int *)(*((unsigned int *)this + 160) + 176);
    v5 = v4 - Math::RoundToInt((double)v4); /*0x6cc0b4*/
    if ( !v5 ) /*0x6cc0b6*/
            *((unsigned char *)this + 444) = 1;
        if ( *((unsigned int *)this + 192) == -1 )
            *((unsigned int *)this + 192) = *(unsigned int *)&MEMORY[0xA8D63C].__pad_14B0[664];
        *((unsigned int *)this + 192) = *(unsigned int *)&MEMORY[0xA8D63C].__pad_14B0[664];
        *((unsigned int *)this + 208) = v7;
        *((unsigned int *)this + 224) = v5;
    if ( aP1 ) /*0x6cc0e4*/
    {
            switch ( *(unsigned int *)(*((unsigned int *)this + 160) + 180) )
      {
        case 0: /*0x6cc0fc*/
          VoxClass::FindAndPlay(g_Str_EVA_NuclearMissileReady, -1); /*0x6cc10d*/
          break; /*0x6cc10d*/
        case 1: /*0x6cc0fc*/
          VoxClass::FindAndPlay(g_Str_EVA_IronCurtainReady, -1); /*0x6cc119*/
          break; /*0x6cc119*/
        case 2: /*0x6cc0fc*/
          VoxClass::FindAndPlay(g_Str_EVA_LightningStormReady, -1); /*0x6cc131*/
          break; /*0x6cc131*/
        case 3: /*0x6cc0fc*/
          VoxClass::FindAndPlay(g_Str_EVA_ChronosphereReady, -1); /*0x6cc149*/
          break; /*0x6cc149*/
        case 5: /*0x6cc0fc*/
        case 6: /*0x6cc0fc*/
          VoxClass::FindAndPlay(g_Str_EVA_ReinforcementsReady, -1); /*0x6cc155*/
          break; /*0x6cc155*/
        case 7: /*0x6cc0fc*/
          VoxClass::FindAndPlay(g_Str_EVA_PsychicDominatorReady, -1); /*0x6cc13d*/
          break; /*0x6cc13d*/
        case 8: /*0x6cc0fc*/
          VoxClass::FindAndPlay(g_Str_EVA_SpyPlaneReady, -1); /*0x6cc161*/
          break; /*0x6cc161*/
        case 9: /*0x6cc0fc*/
          VoxClass::FindAndPlay(g_Str_EVA_GeneticMutatorReady, -1); /*0x6cc16d*/
          break; /*0x6cc16d*/
        case 0xA: /*0x6cc0fc*/
          VoxClass::FindAndPlay(g_Str_EVA_ForceShieldReady, -1); /*0x6cc125*/
          break; /*0x6cc125*/
        case 0xB: /*0x6cc0fc*/
          VoxClass::FindAndPlay(g_Str_EVA_PsychicRevealReady, -1); /*0x6cc179*/
          break; /*0x6cc179*/
        default:
          break;
      }
    }
        v6 = *((unsigned int *)this + 160);
        *((unsigned int *)this + 464) = *(unsigned int *)&MEMORY[0xA8D63C].__pad_14B0[664];
    result = *(unsigned char *)(v6 + 229); /*0x6cc18a*/
    if ( result ) /*0x6cc192*/
            *((unsigned int *)this + 496) = 1;
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

    LOBYTE(v3) = *((unsigned char *)this + 436);
  if ( (unsigned char)v3 ) /*0x6cc1eb*/
  {
    IDA_LOBYTE(v3) = a2; /*0x6cc1ed*/
    if ( (unsigned int)a2 <= 0x64 ) /*0x6cc1f3*/
    {
            v4 = *((unsigned int *)this + 144);
      if ( v4 == -1 ) /*0x6cc201*/
                v4 = *(unsigned int *)(*((unsigned int *)this + 160) + 176);
      v5 = v4 - Math::RoundToInt((double)a2 * 0.0099999998 * (double)v4); /*0x6cc223*/
      if ( !v5 ) /*0x6cc225*/
                *((unsigned char *)this + 444) = 1;
            v3 = (unsigned int *)((char *)this + 192);
            if ( *((unsigned int *)this + 192) == -1 )
        *v3 = g_CurrentFrame; /*0x6cc23c*/
      *v3 = g_CurrentFrame; /*0x6cc248*/
            *((unsigned int *)this + 208) = v7;
            *((unsigned int *)this + 224) = v5;
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
  AnimClass *v8; // eax
  AbstractClass **v9; // eax
  int16_t *v13; // ebp
  IUnknown *v16; // esi
  IUnknown *v18; // eax
  void **v19; // eax
  void **v20; // eax
  int16_t v22; // cx
  int16_t v23; // dx
  int16_t v25; // ax
  int Member; // eax
  IUnknown **v39; // ebx
  int InstanceCOM; // eax
  int16_t v43; // ax
  SuperClass *v47; // ecx
  SuperClass *v49; // eax
  SuperClass *v50; // edi
  IUnknown *v51; // edi
  IUnknown *v61; // edi
  IUnknown *v64; // edx
  IUnknown *v66; // edx
  int16_t v69; // dx
  AnimClass *v71; // eax
  AnimClass *v72; // eax
  AnimClass *v75; // eax
  void **v80; // eax
  int16_t v83; // dx
  int16_t v84; // ax
  int16_t v86; // cx
  AnimClass *v87; // eax
  void **v90; // eax
  IUnknown *v91; // eax
  IUnknown *v93; // eax
  AudioController *v95; // ecx
  IUnknown *v100; // ecx
  void **v102; // esi
  IUnknown *v104; // eax
  int eax143a; // eax
  AnimClass *v105; // eax
  IUnknown *v109; // ebp
  IUnknown *eax153; // eax
  IUnknown *v110; // edi
  int i; // edi
  char *ecx179; // ecx
  AnimClass *v124; // eax
  IUnknown *v128; // edi
  IUnknown *eax186; // eax
  IUnknown *v129; // esi
  IUnknown *eax198; // eax
  IUnknown *v136; // edi
  IUnknown *v143; // ecx
  unsigned int *eax208a; // eax
  IUnknown *v144; // esi
  void **v148; // eax
  int16_t v151; // dx
  int16_t v152; // ax
  int16_t v154; // cx
  AbstractClass *v159; // ebp
  BulletClass *UIObject; // edi
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
  IUnknown *a1; // [esp+58h] [ebp-1D4h] BYREF
  IUnknown *GroundHeight; // [esp+60h] [ebp-1CCh]
  SuperClass *var1C8; // [esp+64h] [ebp-1C8h] BYREF
  BuildingTypeClass *v178; // [esp+68h] [ebp-1C4h]
  MouseClass *v177; // [esp+6Ch] [ebp-1C0h]
  SuperClass *v180; // [esp+70h] [ebp-1BCh] BYREF
  int j; // [esp+74h] [ebp-1B8h]
  IUnknown *ppv; // [esp+78h] [ebp-1B4h] BYREF
  IUnknown *var1A8; // [esp+84h] [ebp-1A8h]
  SuperClass *var1A4; // [esp+88h] [ebp-1A4h] BYREF
  IUnknown *v184; // [esp+8Ch] [ebp-1A0h]
  IUnknown *v185; // [esp+90h] [ebp-19Ch] BYREF
  IUnknown *v189; // [esp+98h] [ebp-194h]
  IUnknown *var170; // [esp+BCh] [ebp-170h]
  MouseClass *v197; // [esp+C0h] [ebp-16Ch] BYREF
  IUnknown *v196; // [esp+C4h] [ebp-168h] BYREF
  BuildingTypeClass *v199; // [esp+C8h] [ebp-164h] BYREF
  int var160; // [esp+CCh] [ebp-160h] BYREF
  SuperClass *v201; // [esp+D0h] [ebp-15Ch] BYREF
  BuildingTypeClass *v200; // [esp+D4h] [ebp-158h] BYREF
  SuperClass *var148; // [esp+E4h] [ebp-148h] BYREF
  MouseClass *v206; // [esp+E8h] [ebp-144h] BYREF
  IUnknown *v205; // [esp+ECh] [ebp-140h] BYREF
  SuperClass *v208; // [esp+F0h] [ebp-13Ch] BYREF
  BuildingTypeClass *v209; // [esp+F4h] [ebp-138h] BYREF
  CoordStruct aP2; // [esp+F8h] [ebp-134h] BYREF
  CoordStruct v211; // [esp+104h] [ebp-128h] BYREF
  CoordStruct v213; // [esp+11Ch] [ebp-110h] BYREF
  CoordStruct v214; // [esp+128h] [ebp-104h] BYREF
  CoordStruct v215; // [esp+134h] [ebp-F8h] BYREF
  v4 = (SuperClass *)ecx0;
  int v5 = *(unsigned int *)(ecx0 + 40);
  v184 = (IUnknown *)ecx0;
  switch ( *(unsigned int *)(v5 + 180) )
  {
  char *v204; // [esp+E0h] [ebp-14Ch]
  double v192; // [esp+A8h] [ebp-184h]
  double v191; // [esp+A0h] [ebp-18Ch] BYREF
  int v188; // [esp+94h] [ebp-198h]
  double v183; // [esp+7Ch] [ebp-1B0h] BYREF
  int v175; // [esp+5Ch] [ebp-1D0h]
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
          if ( (*((unsigned int *)CellCoord::To_CellObj(&stru_87C374[13428], (int16_t *)&var1C8) + 80) & 0x100) != 0 )
            GroundHeight = (IUnknown *)((char *)GroundHeight + *(unsigned int *)&stru_B05488[27636]);
  int v158; // esi
          v158 = *(unsigned int *)(*(unsigned int *)&stru_87C374[45560]
                           + 4 * SuperWeaponClass::FindByName(g_INI_Key_NukePayload));
          v159 = (AbstractClass *)Coord::To_Cell(&stru_87C374[13428], (IUnknown *)&a1);
          v189 = GroundHeight;
          v185 = a1;
          v188 = v175;
  unsigned int v203[2]; // [esp+D8h] [ebp-154h] BYREF
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
            double v161 = Math::ArcTan2((IUnknown *)0xFE8FBDA);
            v183 = v161 * v183 * -100.0;
            v191 = Math::ArcTan2((IUnknown *)0xFE8FBDA);
            st7_238a = Math::ArcTan2((IUnknown *)0xFE8FBDA);
            v192 = v183;
  unsigned long long v218[3]; // [esp+148h] [ebp-E4h] BYREF
            *(double *)&v218[1] = v183;
            v191 = st7_238a * v191 * -100.0;
            *(double *)v218 = v191;
            st7_238b = Math::SinCos((IUnknown *)0xFE8FBDA);
            v162 = *(IUnknown **)UIObject->__pad_0;
            *(double *)&v218[2] = st7_238b * -100.0;
            (*(void (**)(BulletClass *, unsigned int *, unsigned long long *))&v162->__pad_1D8[24])(UIObject, v203, v218);
            if ( !*(unsigned int *)&HouseClass_Player[30700] )
              VoxClass::FindAndPlay(&stru_830620[73480], -1, -1);
            PlayAudioAt2(*(IUnknown **)(*(unsigned int *)&stru_87C374[44652] + 372), &v185, 0);
          }
          if ( a4 )
          {
            *(unsigned int *)&stru_87C374[17964] = -1;
            v163 = (AnimClass *)VocClass::FindByName(&stru_830620[73396]);
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
              v175 = (IDA_SWORD1(v183) << 8) + 128;
              a1 = (IUnknown *)((SLOWORD(v183) << 8) + 128);
              GroundHeight = (IUnknown *)Cell::GetGroundHeight((IUnknown *)&a1);
              v189 = GroundHeight;
              v169 = (IUnknown *)v168->field_0;
              v185 = a1;
              v188 = v175;
              (*(void (**)(IUnknown *, int, unsigned int))&v169->__pad_1D8[16])(v168, 22, 0);
              (*(void (**)(IUnknown *))(v168->field_0 + 492))(v168);
              *((unsigned int *)v4->field_2C + 5601) = *(unsigned int *)aP3;
              *(unsigned int *)&v168->__pad_524[212] = *((unsigned int *)v4->field_28 + 45);
              PlayAudioAt2(*(IUnknown **)(*(unsigned int *)&stru_87C374[44652] + 372), &v185, 0);
              if ( !*(unsigned int *)&HouseClass_Player[30700] )
                VoxClass::FindAndPlay(&stru_830620[73480], -1, -1);
            }
          }
LABEL_254:
          if ( a4 )
          {
            *(unsigned int *)&stru_87C374[17964] = -1;
            v170 = (AnimClass *)VocClass::FindByName(&stru_830620[73396]);
            ClearThemeQueuePlaylist((int)v170);
          }
          *((unsigned char *)v4->field_2C + 508) = 1;
        }
      }
      break;
    case 1:
      if ( *(unsigned char *)(ecx0 + 111) )
      {
        void * v76 = CellCoord::To_CellObj(&stru_87C374[13428], aP3);
  char v222[12]; // [esp+178h] [ebp-B4h] BYREF
        int * v77 = (int *)(*(int (**)(void *, char *))(*(unsigned int *)v76 + 72))(v76, v222);
        int v78 = *v77;
        v188 = v77[1];
        int v79 = v77[2];
        if ( (*((unsigned int *)CellCoord::To_CellObj(&stru_87C374[13428], aP3) + 80) & 0x100) != 0 )
          v79 += *(unsigned int *)&stru_B05488[27636];
        v80 = (void *)operator new(0x1C8u);
        if ( v80 )
        {
          v214.Y = v188;
          v214.Z = v79 + 5;
          v214.X = v78;
          AnimClass::ctor(
            v80,
            *(CoordStruct **)(*(unsigned int *)&stru_87C374[44652] + 840),
            &v214,
            0,
            (CoordStruct *)1,
            (void *)0x600,
            0,
            0);
        }
        if ( !*(unsigned int *)&HouseClass_Player[30700] )
          VoxClass::FindAndPlay(&stru_830620[73544], -1, -1);
  int v81; // edx
        CreateTriggerClassIfFarEnough((IUnknown *)0xD, v81, *(IUnknown **)aP3);
        char * v82 = &stru_B05488[27568];
        do
        {
  int v85; // esi
          v83 = aP3[1] + *((unsigned short *)v82 + 1);
          IDA_LOWORD(var1C8) = *(unsigned short *)v82 + *aP3;
          IDA_HIWORD(var1C8) = v83;
          v201 = var1C8;
          if ( (*((unsigned int *)CellCoord::To_CellObj(&stru_87C374[13428], (int16_t *)&v201) + 80) & 0x100) != 0 )
          {
            v84 = aP3[1] + *((unsigned short *)v82 + 1);
            IDA_LOWORD(v177) = *(unsigned short *)v82 + *aP3;
            IDA_HIWORD(v177) = v84;
            v205 = (IUnknown *)v177;
            v85 = *((unsigned int *)CellCoord::To_CellObj(&stru_87C374[13428], (int16_t *)&v205) + 58);
          }
          else
          {
            v86 = aP3[1] + *((unsigned short *)v82 + 1);
            IDA_LOWORD(v178) = *(unsigned short *)v82 + *aP3;
            IDA_HIWORD(v178) = v86;
            v209 = v178;
            v85 = *((unsigned int *)CellCoord::To_CellObj(&stru_87C374[13428], (int16_t *)&v209) + 57);
          }
          for ( ; v85; v85 = *(unsigned int *)(v85 + 48) )
          {
            if ( (*(unsigned char *)(v85 + 20) & 4) == 0 || !*(unsigned char *)(v85 + 636) )
              (*(void (**)(int, unsigned int, void *, unsigned int))(*(unsigned int *)v85 + 340))(
                v85,
                *(unsigned int *)(*(unsigned int *)&stru_87C374[44652] + 4072),
                v4->field_2C,
                0);
          }
          v82 += 4;
        }
        while ( (int)v82 < (int)&stru_B05488[27604] );
        if ( a4 )
        {
          *(unsigned int *)&stru_87C374[17964] = -1;
          v87 = (AnimClass *)VocClass::FindByName(&stru_830620[73372]);
          ClearThemeQueuePlaylist((int)v87);
        }
      }
      break;
    case 2:
      if ( *(unsigned char *)(ecx0 + 111) )
      {
        LightningStorm::Start(
          *(unsigned int *)(*(unsigned int *)&stru_87C374[44652] + 6044),
          *(unsigned int *)(*(unsigned int *)&stru_87C374[44652] + 6036),
          *(unsigned int *)aP3,
          *(void **)(ecx0 + 44));
        if ( !*(unsigned int *)&HouseClass_Player[30700] )
          VoxClass::FindAndPlay(aEvaLightningst, -1, -1);
        if ( a4 )
        {
          *(unsigned int *)&stru_87C374[17964] = -1;
          v72 = (AnimClass *)VocClass::FindByName(&stru_830620[73324]);
          ClearThemeQueuePlaylist((int)v72);
        }
      }
      break;
    case 3:
      if ( *(unsigned char *)(ecx0 + 111) )
      {
        *(unsigned int *)(ecx0 + 98) = *(unsigned int *)aP3;
        void * v6 = CellCoord::To_CellObj(&stru_87C374[13428], aP3);
  char v233[12]; // [esp+1FCh] [ebp-30h] BYREF
        int v7 = (*(int (**)(void *, char *))(*(unsigned int *)v6 + 72))(v6, v233);
        a1 = *(IUnknown **)v7;
        v175 = *(unsigned int *)(v7 + 4);
        GroundHeight = *(IUnknown **)(v7 + 8);
        if ( (*((unsigned int *)CellCoord::To_CellObj(&stru_87C374[13428], aP3) + 80) & 0x100) != 0 )
          GroundHeight = (IUnknown *)((char *)GroundHeight + *(unsigned int *)&stru_B05488[27636]);
  int v235[3]; // [esp+214h] [ebp-18h] BYREF
        v8 = (AnimClass *)Coord3D::Set(v235, 0, 0, 5);
  int v236[3]; // [esp+220h] [ebp-Ch] BYREF
        v9 = (AbstractClass **)Coord3D::Add(&a1, (IUnknown *)v236, v8);
        SuperClass::CreateChronoAnim((int)v4, *v9, (SuperClass *)v9[1], (int)v9[2]);
        if ( a4 )
        {
          *(unsigned int *)&stru_87C374[17964] = 4;
        }
        else
        {
          unsigned char * v10 = v4->field_68;
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
      void * v11 = CellCoord::To_CellObj(&stru_87C374[13428], aP3);
  char v223[12]; // [esp+184h] [ebp-A8h] BYREF
      int v12 = (*(int (**)(void *, char *))(*(unsigned int *)v11 + 72))(v11, v223);
      v183 = *(double *)v12;
      v13 = *(int16_t **)(v12 + 8);
      void * v14 = CellCoord::To_CellObj(&stru_87C374[13428], (int16_t *)&v4->field_60 + 1);
  char v219[4]; // [esp+160h] [ebp-CCh] BYREF
      int v15 = (*(int (**)(void *, char *))(*(unsigned int *)v14 + 72))(v14, v219);
      a1 = *(IUnknown **)v15;
      v175 = *(unsigned int *)(v15 + 4);
      GroundHeight = *(IUnknown **)(v15 + 8);
      if ( (*((unsigned int *)CellCoord::To_CellObj(&stru_87C374[13428], aP3) + 80) & 0x100) != 0 )
        v13 = (int16_t *)((char *)v13 + *(unsigned int *)&stru_B05488[27636]);
      v16 = GroundHeight;
      if ( (*((unsigned int *)CellCoord::To_CellObj(&stru_87C374[13428], (int16_t *)&v4->field_60 + 1) + 80) & 0x100) != 0 )
        v16 = (IUnknown *)((char *)GroundHeight + *(unsigned int *)&stru_B05488[27636]);
      unsigned char * v17 = v4->field_68;
      if ( v17 )
      {
        v17[405] = 0;
        v4->field_68 = 0;
        var1C8 = v4;
        v18 = (IUnknown *)(*(int (**)(char *, SuperClass **))(*(unsigned int *)&stru_B05488[41264] + 16))(
                            &stru_B05488[41264],
                            &var1C8);
        if ( v18 != (IUnknown *)-1 )
          DynamicVector::RemoveItem(&stru_B05488[41264], v18);
      }
      if ( IDA_LOBYTE(v4->field_6C) )
      {
        var1C8 = v4;
        VectorClass_flat::RemoveAt((int *)&stru_B05488[41264], (int)&var1C8);
        IDA_LOBYTE(v4->field_6C) = 0;
      }
      v19 = (void *)operator new(0x1C8u);
      if ( v19 )
      {
        *(double *)&aP2.X = v183;
        aP2.Z = (int)v13 + 5;
        AnimClass::ctor(
          v19,
          *(CoordStruct **)(*(unsigned int *)&stru_87C374[44652] + 812),
          &aP2,
          0,
          (CoordStruct *)1,
          (void *)0x600,
          0,
          0);
      }
      v20 = (void *)operator new(0x1C8u);
      if ( v20 )
      {
        v215.X = (int)a1;
        v215.Y = v175;
        v215.Z = (int)&v16->field_4 + 1;
        AnimClass::ctor(
          v20,
          *(CoordStruct **)(*(unsigned int *)&stru_87C374[44652] + 808),
          &v215,
          0,
          (CoordStruct *)1,
          (void *)0x600,
          0,
          0);
      }
      char * v21 = &stru_B05488[27568];
      j = (int)&stru_B05488[27568];
      do
      {
  int *v24; // esi
        v22 = *((unsigned short *)v21 + 1) + *(unsigned short *)v4->__pad_64;
        IDA_LOWORD(var170) = *(unsigned short *)v21 + IDA_HIWORD(v4->field_60);
        IDA_HIWORD(var170) = v22;
        v196 = var170;
        if ( (*((unsigned int *)CellCoord::To_CellObj(&stru_87C374[13428], (int16_t *)&v196) + 80) & 0x100) != 0 )
        {
          v23 = *((unsigned short *)v21 + 1) + *(unsigned short *)v4->__pad_64;
  int v195; // [esp+B8h] [ebp-174h]
          IDA_LOWORD(v195) = IDA_HIWORD(v4->field_60) + *(unsigned short *)v21;
          IDA_HIWORD(v195) = v23;
          var160 = v195;
          v24 = (int *)*((unsigned int *)CellCoord::To_CellObj(&stru_87C374[13428], (int16_t *)&var160) + 58);
        }
        else
        {
          v25 = *((unsigned short *)v21 + 1) + *(unsigned short *)v4->__pad_64;
          IDA_LOWORD(v178) = IDA_HIWORD(v4->field_60) + *(unsigned short *)v21;
          IDA_HIWORD(v178) = v25;
          v199 = v178;
          v24 = (int *)*((unsigned int *)CellCoord::To_CellObj(&stru_87C374[13428], (int16_t *)&v199) + 57);
        }
        if ( v24 )
        {
          do
          {
            bool v26 = (v24[5] & 4) == 0;
  int v190; // [esp+9Ch] [ebp-190h]
            IDA_HIBYTE(v190) = (v24[5] & 4) != 0;
            if ( !v26 && !(*(uint8_t (**)(int *))(*v24 + 84))(v24) )
            {
              int v27 = v24[421];
              if ( v27 )
              {
                if ( *(unsigned char *)((*(int (**)(int))(*(unsigned int *)v27 + 132))(v27) + 3278) )
                {
                  int v28 = *(unsigned int *)(v24[421] + 1692);
                  if ( v28 )
                  {
                    unsigned int * v29 = (unsigned int *)(v28 + 44);
                    *v29 = *(unsigned int *)&HouseClass_Player[45112];
                    int v220 = v220;
                    v29[2] = 500;
                    BuildingClass::Deploy(*(unsigned int *)(v24[421] + 1692), (int)v13, (int)v21);
                  }
                }
              }
              bool v30 = 0;
              if ( (*(int (**)(int *))(*v24 + 44))(v24) == 1 )
              {
                int v31 = (*(int (**)(int *))(*v24 + 44))(v24);
                Member = Team::GetMember(v31 == 1 ? v24 : 0, 0);
                v21 = (char *)Member;
                if ( Member )
                {
                  if ( (*(int (**)(int))(*(unsigned int *)Member + 44))(Member) == 6
                    && *(unsigned char *)(*((unsigned int *)v21 + 328) + 5821) )
                  {
                    int * v33 = (*(int (**)(int *))(*v24 + 44))(v24) == 1 ? v24 + 39 : (int *)156;
  unsigned int v212[3]; // [esp+110h] [ebp-11Ch] BYREF
                    v212[0] = *v33;
                    v212[1] = v33[1];
                    v212[2] = v33[2];
                    unsigned int * v34 = Coord::To_Cell(&stru_87C374[13428], (IUnknown *)v212);
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
                  int v35 = v24[185];
                  if ( v35 && (*(int (**)(int))(*(unsigned int *)v35 + 44))(v35) == 6 )
                  {
                    int v36 = v24[185];
                    if ( v36 )
                      int * v37 = (*(int (**)(int))(*(unsigned int *)v36 + 44))(v24[185]) == 6 ? (int *)v36 : 0;
                    else
                      v37 = 0;
                    BuildingClass::UpdateDamageAnim(v37);
                  }
                  int v38 = v24[413];
                  v39 = (IUnknown **)(v24 + 413);
                  v180 = 0;
                  if ( v38 )
                  {
                    int v40 = StreamClass::Set(&v180, (IUnknown *)(v24 + 413));
                    if ( v40 < 0 && v40 != -2147467262 )
                      WinAPI::Wrapper(v40);
                  }
                  ppv = 0;
                  InstanceCOM = CreateInstanceCOM((LPVOID *)&ppv, (IID *)&g_CLSID_HoverLocomotion, 0, 7u);
                  if ( InstanceCOM < 0 && InstanceCOM != -2147467262 )
                    WinAPI::Wrapper(InstanceCOM);
                  int v42 = (*(int (**)(int *))(*v24 + 44))(v24);
                  v43 = aP3[1] + *(unsigned short *)(j + 2);
                  IDA_LOWORD(v177) = *aP3 + *(unsigned short *)j;
                  IDA_HIWORD(v177) = v43;
                  int v44 = v42 == 1 ? (unsigned int)v24 : 0;
                  v197 = v177;
                  IDA_LODWORD(v183) = v44;
                  void * v45 = CellCoord::To_CellObj(&stru_87C374[13428], (int16_t *)&v197);
  char v225[12]; // [esp+19Ch] [ebp-90h] BYREF
                  int v46 = (*(int (**)(void *, char *))(*(unsigned int *)v45 + 72))(v45, v225);
                  a1 = *(IUnknown **)v46;
                  v175 = *(unsigned int *)(v46 + 4);
                  GroundHeight = *(IUnknown **)(v46 + 8);
                  if ( (*((unsigned int *)Coord::To_Cell(&stru_87C374[13428], (IUnknown *)&a1) + 80) & 0x100) != 0 )
                    GroundHeight = (IUnknown *)((char *)GroundHeight + *(unsigned int *)&stru_B05488[27636]);
                  if ( v44 )
                  {
                    if ( !*v39 )
                      WinAPI::Wrapper(-2147467261);
                    (*(void (__stdcall **)(IUnknown *, unsigned int))((*v39)->field_0 + 156))(*v39, 0);
                    v189 = GroundHeight;
                    if ( !*v39 )
                      WinAPI::Wrapper(-2147467261);
                    (*(void (__stdcall **)(IUnknown *, int, IUnknown *, int, IUnknown *))((*v39)->field_0 + 112))(
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
                  (*(void (__stdcall **)(IUnknown *, int *))(ppv->field_0 + 12))(ppv, v24);
                  v47 = 0;
                  var1A4 = 0;
                  if ( ppv )
                  {
                    int v48 = StreamClass::Set(&var1A4, (IUnknown *)&ppv);
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
                      (*(void (__stdcall **)(SuperClass *))(v50->field_0 + 8))(v50);
                    v49 = v180;
                    v47 = var1A4;
                  }
                  if ( v47 )
                  {
                    (*(void (__stdcall **)(SuperClass *))(v47->field_0 + 8))(v47);
                    v49 = v180;
                  }
                  if ( v49 )
                  {
                    (*(void (__stdcall **)(SuperClass *, IUnknown *))(v49->field_0 + 12))(v49, *v39);
                    v51 = *v39;
                    if ( *v39 != ppv )
                    {
                      *v39 = ppv;
                      SuperClass::SetFieldX(v24 + 413);
                      if ( v51 )
                        (*(void (__stdcall **)(IUnknown *))(v51->field_0 + 8))(v51);
                    }
                  }
                  void * v52 = CellCoord::To_CellObj(&stru_87C374[13428], (int16_t *)&v184->field_60 + 1);
  char v231[8]; // [esp+1E4h] [ebp-48h] BYREF
                  unsigned int * v53 = (unsigned int *)(*(int (**)(void *, char *))(*(unsigned int *)v52 + 72))(v52, v231);
  char v227[12]; // [esp+1B4h] [ebp-78h] BYREF
                  unsigned int * v54 = (unsigned int *)(*(int (**)(int *, char *))(*v24 + 72))(v24, v227);
                  int v55 = v53[2];
                  int v56 = v53[1];
                  int v57 = *v54 - *v53;
                  v13 = aP3;
                  int v58 = v54[1] - v56;
                  v204 = (char *)(v54[2] - v55);
                  if ( !IDA_LODWORD(v183) )
                  {
                    void * v59 = CellCoord::To_CellObj(&stru_87C374[13428], aP3);
  char v221[12]; // [esp+16Ch] [ebp-C0h] BYREF
                    unsigned int * v60 = (unsigned int *)(*(int (**)(void *, char *))(*(unsigned int *)v59 + 72))(v59, v221);
                    v61 = (IUnknown *)(*v60 + v57);
                    int v62 = v60[1];
                    int v63 = v60[2];
                    v175 = v58 + v62;
                    a1 = v61;
                    GroundHeight = (IUnknown *)&v204[v63];
                    if ( (*((unsigned int *)Coord::To_Cell(&stru_87C374[13428], (IUnknown *)&a1) + 80) & 0x100) != 0 )
                      GroundHeight = (IUnknown *)((char *)GroundHeight + *(unsigned int *)&stru_B05488[27636]);
                  }
                  v64 = a1;
                  int v65 = v175;
                  *((unsigned char *)v24 + 636) = 1;
                  v24[162] = (int)v64;
                  v66 = GroundHeight;
                  v24[163] = v65;
                  int v67 = *v24;
                  v24[164] = (int)v66;
                  (*(void (**)(int *, int))(v67 + 640))(v24, 3);
                  unsigned short * v68 = (unsigned short *)j;
                  v24[267] = *(unsigned int *)&v184->__pad_28[4];
                  v69 = aP3[1] + v68[1];
                  IDA_LOWORD(var1C8) = *aP3 + *v68;
                  IDA_HIWORD(var1C8) = v69;
                  var148 = var1C8;
                  v21 = (char *)*v24;
                  void * v70 = CellCoord::To_CellObj(&stru_87C374[13428], (int16_t *)&var148);
                  (*((void (**)(int *, void *, int))v21 + 288))(v24, v70, 1);
                  if ( ppv )
                    (*(void (__stdcall **)(IUnknown *))(ppv->field_0 + 8))(ppv);
                  if ( v180 )
                    (*(void (__stdcall **)(SuperClass *))(v180->field_0 + 8))(v180);
                }
              }
              else
              {
                IDA_LODWORD(v191) = *(unsigned int *)((*(int (**)(int *))(*v24 + 132))(v24) + 160);
                (*(void (**)(int *, double *, unsigned int, unsigned int, unsigned int, int, unsigned int, unsigned int))(*v24 + 364))(
                  v24,
                  &v191,
                  0,
                  *(unsigned int *)(*(unsigned int *)&stru_87C374[44652] + 4008),
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
      while ( (int)v21 < (int)&stru_B05488[27604] );
      if ( !*(unsigned int *)&HouseClass_Player[30700] )
        VoxClass::FindAndPlay(&stru_830620[73604], -1, -1);
      if ( a4 )
      {
        *(unsigned int *)&stru_87C374[17964] = -1;
        v71 = (AnimClass *)VocClass::FindByName(&stru_830620[73272]);
        ClearThemeQueuePlaylist((int)v71);
      }
      break;
    case 5:
      if ( *(unsigned char *)(ecx0 + 111) )
      {
        int v107 = TypeClass::FindByName(&stru_830620[37096]);
        int * v108 = (int *)CellCoord::To_CellObj(&stru_87C374[13428], aP3);
        v109 = (IUnknown *)v108;
        if ( v108 && v108 != g_CellClassArray )
        {
          if ( Cell::IsValidHeight(v108) )
          {
            int v193 = 0;
            var1C8 = (SuperClass *)*LayerClass::Pathfinding_Find(
                                      (IUnknown *)&stru_87C374[13428],
                                      (IUnknown *)&v193,
  int v217; // [esp+144h] [ebp-E8h] BYREF
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
            if ( var1C8 != *(SuperClass **)&stru_B05488[27512] )
            {
              eax153 = (IUnknown *)CellCoord::To_CellObj(&stru_87C374[13428], (int16_t *)&var1C8);
              v110 = eax153;
              if ( eax153 )
              {
                if ( eax153 != (IUnknown *)g_CellClassArray && !Cell::IsValidHeight(&eax153->field_0) )
                  v109 = v110;
              }
            }
          }
          int v112 = *((unsigned int *)v4->field_2C + 122);
          if ( v112 )
          {
            if ( v112 == 2 )
            {
              unsigned int * v117 = *(unsigned int **)&stru_87C374[44652];
              int v118 = *(unsigned int *)(*(unsigned int *)&stru_87C374[44652] + 3260);
              if ( v118 == *(unsigned int *)(*(unsigned int *)&stru_87C374[44652] + 3288) )
              {
                int v119 = 0;
                if ( v118 > 0 )
                {
                  do
                  {
                    int v120 = *(unsigned int *)(*(unsigned int *)(v117[812] + 4 * v119) + 3576);
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
                      v117 = *(unsigned int **)&stru_87C374[44652];
                    }
                    ++v119;
                  }
                  while ( v119 < v117[815] );
                }
              }
            }
            else
            {
              unsigned int * v121 = *(unsigned int **)&stru_87C374[44652];
              for ( i = 0; i < v121[801]; ++i )
              {
                int v123 = *(unsigned int *)(*(unsigned int *)(v121[798] + 4 * i) + 3576);
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
                  v121 = *(unsigned int **)&stru_87C374[44652];
                }
              }
            }
          }
          else
          {
            unsigned int * v113 = *(unsigned int **)&stru_87C374[44652];
            int v114 = *(unsigned int *)(*(unsigned int *)&stru_87C374[44652] + 3148);
            if ( v114 == *(unsigned int *)(*(unsigned int *)&stru_87C374[44652] + 3176) )
            {
              int v115 = 0;
              if ( v114 > 0 )
              {
                do
                {
                  int v116 = *(unsigned int *)(*(unsigned int *)(v113[784] + 4 * v115) + 3576);
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
                    v113 = *(unsigned int **)&stru_87C374[44652];
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
        int v126 = TypeClass::FindByName(&stru_830620[37096]);
        int * v127 = (int *)CellCoord::To_CellObj(&stru_87C374[13428], aP3);
        v128 = (IUnknown *)v127;
        if ( v127 && v127 != g_CellClassArray )
        {
          if ( Cell::IsValidHeight(v127) )
          {
            int v194 = 0;
            var1C8 = (SuperClass *)*LayerClass::Pathfinding_Find(
                                      (IUnknown *)&stru_87C374[13428],
                                      (IUnknown *)&v194,
  int v216; // [esp+140h] [ebp-ECh] BYREF
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
            if ( var1C8 != *(SuperClass **)&stru_B05488[27512] )
            {
              eax186 = (IUnknown *)CellCoord::To_CellObj(&stru_87C374[13428], (int16_t *)&var1C8);
              v129 = eax186;
              if ( eax186 )
              {
                if ( eax186 != (IUnknown *)g_CellClassArray && !Cell::IsValidHeight(&eax186->field_0) )
                  v128 = v129;
              }
            }
          }
          unsigned int * v131 = *(unsigned int **)&stru_87C374[44652];
          int v132 = *(unsigned int *)(*(unsigned int *)&stru_87C374[44652] + 3092);
          if ( v132 == *(unsigned int *)(*(unsigned int *)&stru_87C374[44652] + 3120) )
          {
            int v133 = 0;
            if ( v132 > 0 )
            {
              do
              {
                int v134 = *(unsigned int *)(*(unsigned int *)(v131[770] + 4 * v133) + 3576);
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
                  v131 = *(unsigned int **)&stru_87C374[44652];
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
          *(unsigned int *)&stru_87C374[17964] = -1;
          ecx179 = &stru_830620[73248];
          goto LABEL_180;
        }
      }
      break;
    case 7:
      if ( *(unsigned char *)(ecx0 + 111) )
      {
        CreateTriggerClassIfFarEnough((IUnknown *)0xD, *(unsigned int *)aP3, *(IUnknown **)aP3);
        SuperClass::LaunchPsychicDominator((void *)v4->field_2C, *(unsigned int *)aP3);
        if ( !*(unsigned int *)&HouseClass_Player[30700] )
          VoxClass::FindAndPlay(&stru_830620[73572], -1, -1);
        void * v73 = CellCoord::To_CellObj(&stru_87C374[13428], aP3);
  char v229[12]; // [esp+1CCh] [ebp-60h] BYREF
        unsigned int * v74 = (unsigned int *)(*(int (**)(void *, char *))(*(unsigned int *)v73 + 72))(v73, v229);
        PlayAudioAt2(*(IUnknown **)(*(unsigned int *)&stru_87C374[44652] + 588), v74, 0);
        if ( a4 )
        {
          *(unsigned int *)&stru_87C374[17964] = -1;
          v75 = (AnimClass *)VocClass::FindByName(&stru_830620[73296]);
          ClearThemeQueuePlaylist((int)v75);
        }
      }
      break;
    case 8:
      if ( *(unsigned char *)(ecx0 + 111) )
      {
        int v135 = TypeClass::FindByName(&stru_830620[73536]);
        eax198 = (IUnknown *)CellCoord::To_CellObj(&stru_87C374[13428], aP3);
        v136 = eax198;
        if ( eax198 )
        {
          if ( eax198 != (IUnknown *)g_CellClassArray )
          {
            int v138 = *(unsigned int *)&stru_87C374[44652];
            int v139 = *(unsigned int *)(*(unsigned int *)&stru_87C374[44652] + 3148);
            if ( v139 == *(unsigned int *)(*(unsigned int *)&stru_87C374[44652] + 3176) )
            {
              int v140 = 0;
              if ( v139 > 0 )
              {
                do
                {
                  if ( v135 != -1 )
                  {
                    globalHelper_05EAB0((unsigned int *)v4->field_2C, v135, (IUnknown *)1, 30, (int)v136, 0);
                    v138 = *(unsigned int *)&stru_87C374[44652];
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
          *(unsigned int *)&stru_87C374[17964] = -1;
          ecx179 = &stru_830620[73228];
          goto LABEL_180;
        }
      }
      break;
    case 9:
      if ( *(unsigned char *)(ecx0 + 111) )
      {
        v144 = (IUnknown *)aP3;
        void * v146 = CellCoord::To_CellObj(&stru_87C374[13428], aP3);
  char v234[12]; // [esp+208h] [ebp-24h] BYREF
        int v147 = (*(int (**)(void *, char *))(*(unsigned int *)v146 + 72))(v146, v234);
        a1 = *(IUnknown **)v147;
        v175 = *(unsigned int *)(v147 + 4);
        GroundHeight = *(IUnknown **)(v147 + 8);
        if ( (*((unsigned int *)CellCoord::To_CellObj(&stru_87C374[13428], aP3) + 80) & 0x100) != 0 )
          GroundHeight = (IUnknown *)((char *)GroundHeight + *(unsigned int *)&stru_B05488[27636]);
        v148 = (void *)operator new(0x1C8u);
        if ( v148 )
        {
          v213.X = (int)a1;
          v213.Y = v175;
          v213.Z = (int)&GroundHeight->field_4 + 1;
          AnimClass::ctor(
            v148,
            *(CoordStruct **)(*(unsigned int *)&stru_87C374[44652] + 664),
            &v213,
            0,
            (CoordStruct *)1,
            (void *)0x600,
            0,
            0);
        }
        if ( !*(unsigned int *)&HouseClass_Player[30700] )
          VoxClass::FindAndPlay(&stru_830620[73508], -1, -1);
        PlayAudioAt2(*(IUnknown **)(*(unsigned int *)&stru_87C374[44652] + 592), &a1, 0);
  int v149; // edx
        CreateTriggerClassIfFarEnough((IUnknown *)0xD, v149, *(IUnknown **)aP3);
        if ( *(unsigned char *)(*(unsigned int *)&stru_87C374[44652] + 6088) )
        {
          PlaySoundEffectAt(
            (TechnoClass *)&a1,
            (IUnknown *)0x2710,
            0,
            *(ObjectClass **)(*(unsigned int *)&stru_87C374[44652] + 3996),
            0,
            (int)v4->field_2C);
        }
        else
        {
          char * v150 = &stru_B05488[27568];
          while ( 1 )
          {
  unsigned int *v153; // esi
            v151 = IDA_HIWORD(v144->field_0) + *((unsigned short *)v150 + 1);
            IDA_LOWORD(var1C8) = *(unsigned short *)v150 + IDA_LOWORD(v144->field_0);
            IDA_HIWORD(var1C8) = v151;
            v208 = var1C8;
            if ( (*((unsigned int *)CellCoord::To_CellObj(&stru_87C374[13428], (int16_t *)&v208) + 80) & 0x100) != 0 )
            {
              v152 = IDA_HIWORD(v144->field_0) + *((unsigned short *)v150 + 1);
              IDA_LOWORD(v177) = *(unsigned short *)v150 + IDA_LOWORD(v144->field_0);
              IDA_HIWORD(v177) = v152;
              v206 = v177;
              v153 = (unsigned int *)*((unsigned int *)CellCoord::To_CellObj(&stru_87C374[13428], (int16_t *)&v206) + 58);
            }
            else
            {
              v154 = IDA_HIWORD(v144->field_0) + *((unsigned short *)v150 + 1);
              IDA_LOWORD(v178) = *(unsigned short *)v150 + IDA_LOWORD(v144->field_0);
              IDA_HIWORD(v178) = v154;
              v200 = v178;
              v153 = (unsigned int *)*((unsigned int *)CellCoord::To_CellObj(&stru_87C374[13428], (int16_t *)&v200) + 57);
            }
            if ( v153 )
            {
  unsigned int *v155; // ebp
              do
              {
                v155 = (unsigned int *)v153[12];
                if ( v153 && (*(int (**)(unsigned int *))(*v153 + 44))(v153) == 15 )
                {
                  int v156 = *(unsigned int *)((*(int (**)(unsigned int *))(*v153 + 132))(v153) + 160);
                  void * v157 = v4->field_2C;
                  IDA_LODWORD(v183) = v156;
                  (*(void (**)(unsigned int *, double *, unsigned int, unsigned int, unsigned int, int, unsigned int, void *))(*v153 + 364))(
                    v153,
                    &v183,
                    0,
                    *(unsigned int *)(*(unsigned int *)&stru_87C374[44652] + 3992),
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
            if ( (int)v150 >= (int)&stru_B05488[27604] )
              break;
            v144 = (IUnknown *)aP3;
          }
        }
        if ( a4 )
        {
          *(unsigned int *)&stru_87C374[17964] = -1;
          ecx179 = &stru_830620[73204];
          goto LABEL_180;
        }
      }
      break;
    case 0xA:
      if ( *(unsigned char *)(ecx0 + 111) )
      {
        void * v88 = CellCoord::To_CellObj(&stru_87C374[13428], aP3);
  char v224[12]; // [esp+190h] [ebp-9Ch] BYREF
        int v89 = (*(int (**)(void *, char *))(*(unsigned int *)v88 + 72))(v88, v224);
        a1 = *(IUnknown **)v89;
        v175 = *(unsigned int *)(v89 + 4);
        GroundHeight = *(IUnknown **)(v89 + 8);
        if ( (*((unsigned int *)CellCoord::To_CellObj(&stru_87C374[13428], aP3) + 80) & 0x100) != 0 )
          GroundHeight = (IUnknown *)((char *)GroundHeight + *(unsigned int *)&stru_B05488[27636]);
        v90 = (void *)operator new(0x1C8u);
        if ( v90 )
        {
          v211.X = (int)a1;
          v211.Y = v175;
          v211.Z = (int)&GroundHeight->field_4 + 1;
          AnimClass::ctor(
            v90,
            *(CoordStruct **)(*(unsigned int *)&stru_87C374[44652] + 844),
            &v211,
            0,
            (CoordStruct *)1,
            (void *)0x600,
            0,
            0);
        }
        v91 = a1;
        *(unsigned int *)&v4->__pad_3C[20] = *(unsigned int *)(*(unsigned int *)&stru_87C374[44652] + 6076)
                                     - *(unsigned int *)(*(unsigned int *)&stru_87C374[44652] + 6084);
        int v92 = v175;
        *(unsigned int *)&v4->__pad_3C[24] = v91;
        v93 = GroundHeight;
        *(unsigned int *)&v4->__pad_3C[28] = v92;
        void * v94 = v4->field_28;
        *(unsigned int *)&v4->__pad_3C[32] = v93;
        v95 = (AudioController *)*((unsigned int *)v94 + 49);
        if ( v95 != (AudioController *)-1 )
          StartAudioControllerAt(v95, (int)&a1, 0);
        HouseClass::CreatePowerOutage((int)v4->field_2C, *(unsigned int *)(*(unsigned int *)&stru_87C374[44652] + 6080));
        void * v96 = CellCoord::To_CellObj(&stru_87C374[13428], aP3);
  char v226[12]; // [esp+1A8h] [ebp-84h] BYREF
        int v97 = (*(int (**)(void *, char *))(*(unsigned int *)v96 + 72))(v96, v226);
        int v98 = *(unsigned int *)v97;
        int v99 = *(unsigned int *)(v97 + 4);
        IDA_HIDWORD(v183) = v99;
        v100 = *(IUnknown **)(v97 + 8);
        var1A8 = v100;
        int v101 = *(unsigned int *)(*(unsigned int *)&stru_87C374[44652] + 6072) << 8;
        if ( (v98 != *(unsigned int *)&stru_B05488[27544]
           || v99 != *(unsigned int *)&stru_B05488[27548]
           || v100 != *(IUnknown **)&stru_B05488[27552])
          && (v98 != *(unsigned int *)&stru_B05488[27624]
           || v99 != *(unsigned int *)&stru_B05488[27628]
           || v100 != *(IUnknown **)&stru_B05488[27632]) )
        {
          for ( j = *(unsigned int *)&HouseClass_Player[44548] - 1; j >= 0; --j )
          {
            v102 = *(void ***)(*(unsigned int *)&HouseClass_Player[44536] + 4 * j);
            if ( (uint8_t)HouseClass::IsAlliedWith(v102[135], (IUnknown *)v4->field_2C) )
            {
  char v228[12]; // [esp+1C0h] [ebp-6Ch] BYREF
              unsigned int * v103 = (unsigned int *)(*((int (**)(void **, char *))*v102 + 18))(v102, v228);
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
                  *(unsigned int *)(*(unsigned int *)&stru_87C374[44652] + 6076),
                  v4->field_2C,
                  1);
            }
          }
        }
        if ( a4 )
        {
          *(unsigned int *)&stru_87C374[17964] = -1;
          v105 = (AnimClass *)VocClass::FindByName(&stru_830620[73348]);
          ClearThemeQueuePlaylist((int)v105);
        }
      }
      break;
    case 0xB:
      if ( *(unsigned char *)(ecx0 + 111) )
      {
        void * v141 = CellCoord::To_CellObj(&stru_87C374[13428], aP3);
        int * v142 = (int *)(*(int (**)(void *))(*(unsigned int *)v141 + 72))(v141);
        int v173 = *v142;
        v143 = (IUnknown *)v4->field_2C;
        a1 = (IUnknown *)v142[1];
        v175 = v142[2];
        MapClass::RevealArea1(
          (int *)&stru_87C374[13428],
          (IUnknown *)&v173,
          *(IUnknown **)(*(unsigned int *)&stru_87C374[44652] + 4076),
          v143,
          0,
          0,
          0,
          0,
          0);
        MapClass::RevealArea1(
          (int *)&stru_87C374[13428],
          (IUnknown *)&v173,
          *(IUnknown **)(*(unsigned int *)&stru_87C374[44652] + 4076),
          (IUnknown *)v4->field_2C,
          0,
          0,
          0,
          0,
          (IUnknown *)1);
  char v232[16]; // [esp+1ECh] [ebp-40h] BYREF
        eax208a = (unsigned int *)(*(int (**)(void *, char *, unsigned int))(*(unsigned int *)v141 + 72))(v141, v232, 0);
  char v230[12]; // [esp+1D8h] [ebp-54h] BYREF
        PlayAudioAt2(*(IUnknown **)(*(unsigned int *)&stru_87C374[44652] + 596), eax208a, (int)v230);
        if ( a4 )
        {
          *(unsigned int *)&stru_87C374[17964] = -1;
          ecx179 = &stru_830620[73180];
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

    v2 = *((unsigned int *)this + 416);
  if ( SuperClass_field_0x68 ) /*0x6ce0bb*/
  {
    SuperClass_field_0x68[405] = 0; /*0x6ce0bd*/
        *((unsigned int *)this + 416) = 0;
    v12[0] = this; /*0x6ce0db*/
    v3 = (*(int (**)(int *, unsigned int *))(*((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 0)) + 16))( /*0x6ce0df*/
           g_BuildingLoadQueue_Array.?,
           v12);
    if ( v3 != -1 ) /*0x6ce0e5*/
      DynamicVector::RemoveItem((DynamicVector *)g_BuildingLoadQueue_Array.?, v3); /*0x6ce0ed*/
  }
    if ( *((unsigned char *)this + 432) )
  {
    v12[0] = this; /*0x6ce109*/
    v4 = (*(int (**)(int *, unsigned int *))(*((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 0)) + 16))( /*0x6ce10d*/
           g_BuildingLoadQueue_Array.?,
           v12);
    if ( v4 != -1 ) /*0x6ce113*/
      DynamicVector::RemoveItem((DynamicVector *)g_BuildingLoadQueue_Array.?, v4); /*0x6ce11b*/
        *((unsigned char *)this + 432) = 0;
  }
    v5 = *((unsigned int *)this + 144);
    result = (int *)((char *)this + 192);
    *((unsigned char *)this + 444) = 0;
    v7 = *((unsigned int *)this + 192);
    *((unsigned int *)this + 480) = -1;
  v8 = SuperClass_field_0x30 + 1 != 0; /*0x6ce13b*/
  if ( SuperClass_field_0x24 == (void *)-1 ) /*0x6ce141*/
        v5 = *(unsigned int *)(*((unsigned int *)this + 160) + 176);
  *result = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x6ce156*/
    *((unsigned int *)this + 208) = v12[2];
    *((unsigned int *)this + 224) = v5;
  if ( !v8 ) /*0x6ce163*/
  {
    v9 = *result; /*0x6ce165*/
    if ( *result != -1 ) /*0x6ce16a*/
    {
      v10 = result[2]; /*0x6ce16c*/
      v11 = *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - v9; /*0x6ce17a*/
      if ( *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - v9 >= v10 ) /*0x6ce17e*/
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
  int v5; // eax
  int v6; // eax
  int v7; // eax
  void **result; // eax
  int v9; // [esp+4h] [ebp-10h] BYREF
  int v10[3]; // [esp+8h] [ebp-Ch] BYREF

  v5 = *(unsigned int *)&this->q068; /*0x6cb3a6*/
  if ( v5 ) /*0x6cb3ab*/
  {
    *(unsigned char *)(v5 + 405) = 0; /*0x6cb3ad*/
        *((unsigned int *)this + 416) = 0;
    v9 = this; /*0x6cb3cb*/
    v6 = (*(int (**)(int *, int *))(g_BuildingInstanceCount + 16))(&g_BuildingInstanceCount, &this); /*0x6cb3cf*/
    if ( v6 != -1 ) /*0x6cb3d5*/
      DynamicVector::RemoveItem(&g_BuildingInstanceCount, v6); /*0x6cb3dd*/
  }
    if ( *((unsigned char *)this + 432) )
  {
    v7 = (*(int (**)(int *, int *))(g_BuildingInstanceCount + 16))(&g_BuildingInstanceCount, &this); /*0x6cb3fd*/
    if ( v7 != -1 ) /*0x6cb403*/
      DynamicVector::RemoveItem(&g_BuildingInstanceCount, v7); /*0x6cb40b*/
        *((unsigned char *)this + 432) = 0;
  }
  result = (void *)operator new(0x1C8u); /*0x6cb419*/
  if ( result ) /*0x6cb423*/
  {
    v10[0] = aP1; /*0x6cb444*/
    v10[1] = aP2; /*0x6cb455*/
    v10[2] = a4 + 5; /*0x6cb459*/
    result = AnimClass::ctor( /*0x6cb467*/
               result,
               (void *)g_RulesClass_Instance->PrerequisiteRadar[1],
               v10,
               0,
               1,
               (void *)0x600,
               0,
               0);
    if ( result ) /*0x6cb470*/
    {
            *((unsigned int *)this + 416) = result;
      result = (void **)dword_B0F5C0; /*0x6cb475*/
      if ( g_BuildingTypeInstanceCount < dword_B0F5C0 /*0x6cb4ae*/
        || (byte_B0F5C5 || !dword_B0F5C0)
        && dword_B0F5CC > 0
        && (result = (void **)(*(int (**)(int *, int, unsigned int))(g_BuildingInstanceCount + 8))(
                                &g_BuildingInstanceCount,
                                dword_B0F5C0 + dword_B0F5CC,
                                0),
            (unsigned char)result) )
      {
        result = (void **)g_BuildingTypeInstanceCount++; /*0x6cb4b6*/
        *((unsigned int *)g_BuildingClassPoolManager + (unsigned int)result) = this; /*0x6cb4c5*/
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
  int v3; // esi
  int v4; // eax
  int v5; // eax

    if ( !*((unsigned char *)this + 436)
    return 0; /*0x6cb552*/
    if ( (unsigned char)aP1 || *(unsigned char *)(*((unsigned int *)this + 160) + 245) )
  {
    v3 = this->q030; /*0x6cb51c*/
    if ( v3 != -1 ) /*0x6cb522*/
    {
            v4 = *((unsigned int *)this + 224);
      if ( (int)g_CurrentFrame - v3 >= v4 ) /*0x6cb536*/
        v5 = 0; /*0x6cb53c*/
      else
        v5 = v4 - ((unsigned int)g_CurrentFrame - v3); /*0x6cb538*/
            *((unsigned int *)this + 224) = v5;
            *((unsigned int *)this + 192) = -1;
    }
  }
    else if ( *((unsigned int *)this + 192) == -1 )
  {
        *((unsigned int *)this + 192) = *(unsigned int *)&MEMORY[0xA8D63C].__pad_14B0[664];
        *((unsigned char *)this + 448) = 0;
    return 1; /*0x6cb519*/
  }
    *((unsigned char *)this + 448) = (unsigned char)aP1;
  return 1; /*0x6cb518*/
}
} // namespace gamemd

// 0x6CB820
namespace gamemd {
char SuperClass::SetReadiness(char a2)
{
    *((unsigned int *)this + 444) = a2;
  return a2; /*0x6cb827*/
}
} // namespace gamemd

// 0x6CC280
namespace gamemd {
int SuperClass::SetRechargeTime(int a2)
{
    *((unsigned int *)this + 36) = a2;
  return a2; /*0x6cc287*/
}
} // namespace gamemd

// 0x6CC290
namespace gamemd {
void SuperClass::ResetRechargeTime()
{
    *((unsigned int *)this + 36) = -1;
}
} // namespace gamemd

// 0x6CC2B0
namespace gamemd {
wchar_t * SuperClass::NameReadiness()
{
  char *SuperClass_field_0x7C; // ecx
  char *v2; // ecx

    if ( *((unsigned char *)this + 448) )
    return GetStringCSF(aTxtHold, 0, (const char *)&g_Str_EVA_ChronosphereReady.SampleIndex[1], 950); /*0x6cc34d*/
    if ( *(unsigned char *)(*((unsigned int *)this + 160) + 229) )
  {
        v1 = *((unsigned int *)this + 496);
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
        if ( !*((unsigned char *)this + 444) )
      return 0; /*0x6cc323*/
    return GetStringCSF(g_Str_TXT_READY, 0, (const char *)&g_Str_EVA_ChronosphereReady.SampleIndex[1], 944); /*0x6cc336*/
  }
}
} // namespace gamemd

// 0x6CC360
namespace gamemd {
char SuperClass::CanFire()
{
    if ( *((unsigned char *)this + 448) )
    return 0; /*0x6cc381*/
    if ( *(unsigned char *)(*((unsigned int *)this + 160) + 229) )
        return *((unsigned int *)this + 496) != 0;
    return *((unsigned char *)this + 444);
}
} // namespace gamemd

// 0x6CDE90
namespace gamemd {
bool SuperClass::ShouldDrawProgress()
{
    return *(unsigned char *)(*((unsigned int *)this + 160) + 229) || *((unsigned char *)this + 444) == 0;
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
      aP0->SuperClass_field_0x0 = (void*)&SuperClass_vftable; /*0x6cdf13*/
      aP0->SuperClass_field_0x4 = (void*)&SuperClass_vftable; /*0x6cdf19*/
      aP0->SuperClass_field_0x8 = (void*)&SuperClass_vftable; /*0x6cdf20*/
      *(unsigned int *)aP0->__pad_C = (void*)&SuperClass_vftable; /*0x6cdf27*/
    }
    if ( aP0->SuperClass_field_0x68 /*0x6cdf70*/
      && (*((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 1)) < g_BuildingLoadQueue_Array.?
       || (IDA_BYTE1(*((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 0))) || !g_BuildingLoadQueue_Array.?)
       && *((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 2)) > 0
       && (*(uint8_t (**)(int *, int, unsigned int))(*((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 0)) + 8))(
            g_BuildingLoadQueue_Array.?,
            g_BuildingLoadQueue_Array.? + *((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 2)),
            0)) )
    {
      v3 = *((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 1))++; /*0x6cdf7d*/
      *(unsigned int *)(*((unsigned int *)((char *)&g_BuildingLoadQueue_Array + 0)) + 4 * v3) = aP0; /*0x6cdf8c*/
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
  int64_t result; // rax

  result = a2; /*0x6cdff0*/
    if ( a2 == *((unsigned int *)this + 176) )
        *((unsigned int *)this + 176) = 0;
    if ( a2 == *((unsigned int *)this + 160) )
        *((unsigned int *)this + 160) = 0;
    if ( a2 == *((unsigned int *)this + 416) )
  {
        *((unsigned int *)this + 416) = 0;
        *((unsigned char *)this + 432) = 1;
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
    LOBYTE(v3) = *((unsigned char *)this + 436);
  Power::FlagProcess((Power *)a2, v3); /*0x6ce034*/
    LOBYTE(v4) = *((unsigned char *)this + 440);
  Power::FlagProcess((Power *)a2, v4); /*0x6ce03f*/
    LOBYTE(v5) = *((unsigned char *)this + 444);
  Power::FlagProcess((Power *)a2, v5); /*0x6ce04a*/
    Power::TimerProcess(*((unsigned int *)this + 480));
    Power::TimerProcess(*((unsigned int *)this + 496));
    LOBYTE(v6) = *((unsigned char *)this + 384);
  v7 = Power::FlagProcess((Power *)a2, v6); /*0x6ce06b*/
    LOBYTE(v7) = *((unsigned char *)this + 432);
  Power::FlagProcess((Power *)a2, v7); /*0x6ce076*/
    result = *((unsigned int *)this + 416);
  if ( result ) /*0x6ce080*/
  {
    Power::TimerProcess(*(uint8_t *)(result + 405)); /*0x6ce08d*/
        v9 = (*(int (__stdcall **)(int))(*(unsigned int *)(*((unsigned int *)this + 416) + 4) + 16))(*((unsigned int *)this + 416) + 4);
// 0x4a1d50
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

    if ( *((unsigned char *)this + 448) )
    return 0; /*0x6ce1a5*/
    v1 = *((unsigned int *)this + 160);
  if ( SuperClass_field_0x28[229] ) /*0x6ce1aa*/
  {
        if ( !*((unsigned int *)this + 496) )
      return 0; /*0x6ce1b9*/
  }
    else if ( !*((unsigned char *)this + 444) )
  {
    return 0; /*0x6ce1c2*/
  }
  v2 = *((unsigned int *)SuperClass_field_0x28 + 58); /*0x6ce1c4*/
  if ( v2 == -1 ) /*0x6ce1cd*/
    return 1; /*0x6ce1d1*/
      return 1;
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
