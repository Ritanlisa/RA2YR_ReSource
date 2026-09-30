// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Animation_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/AnimTypeClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/RulesClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/AsyncIO_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Factory_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/ArrayClass_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/CheckListClass_e4.hpp"
#include "e4/classes/AudioStream_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"

// 0x4549B0
namespace gamemd {
BuildingClass * * Animation::UpdateBuildingAnimations()
{
  bool v2; // zf
  int v3; // eax
  int v4; // ecx
  unsigned char *v5; // eax
  char v6; // cl
  int v7; // eax
  int v8; // ebp
  int i; // edi
  int v12; // ecx
  AnimTypeClass *v13; // eax
  int v14; // ecx
  CaptureManager *v15; // ecx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // edi
  int v21; // edx
  int v22; // eax
  int v25; // ecx
  AnimTypeClass *v26; // eax
  int v27; // ebp
  int j; // edi

  // edi

  v2 = (*(unsigned __int8 (**)(int *))(*this + 848))(this) == 0;
    v3 = *((unsigned int *)this + 1312);
  v4 = *(unsigned int *)(v3 + 1036); /*0x4549c5*/
  if ( !v2 ) /*0x4549cb*/
  {
        if ( v4 && !*((unsigned char *)this + 1634) )
    {
            *((unsigned char *)this + 1634) = 1;
            TechnoClass::Find(*((unsigned int *)this + 540), *(unsigned int *)(v3 + 1036));
    }
        v5 = (unsigned char *)*((unsigned int *)this + 1312);
    if ( v5[5831] ) /*0x4549fe*/
    {
            if ( *((char *)this + 1771) <= 0 )
      {
                v6 = *((unsigned char *)this + 1772);
        if ( v6 != v5[5895] ) /*0x454a20*/
        {
          this->u8_6EB = (unsigned char)((void *)(1));
          if ( v6 == v5[5895] ) /*0x454a31*/
                        *((unsigned char *)this + 1772) = 0;
                    *((unsigned char *)this + 128) = 1;
        }
      }
    }
        if ( v5[3281] && !*((unsigned char *)this + 617) )
      if ( v5[3281] && !*((unsigned char *)this + 617) ) /*0x454a4b*/
      (*(void (**)(int *))(*this + 1044))(this);
        v7 = *((unsigned int *)this + 1312);
    if ( *(unsigned char *)(v7 + 5491) && *(int *)(v7 + 3812) > 0 ) /*0x454a77*/
      BuildingClass::ProcessAnimationStates(); /*0x454a7b*/
        if ( *(unsigned char *)(*((unsigned int *)this + 1312) + 5492) )
    {
      BuildingClass::ClearAnims(19); /*0x454a98*/
      v8 = 0; /*0x454a9d*/
      for ( i = 0; i < 1428; i += 68 ) /*0x454a9f*/
      {
                if ( *(unsigned char *)(i + *((unsigned int *)this + 1312) + 3983) )
        {
          BuildingClass::GetHealthRatio(); /*0x454ab4*/
          _EDX = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x454ab9*/
          __asm /*0x454abf*/
          {
            fcomp qword ptr [edx+1700h]
            fnstsw ax
          }
          if ( (_AX & 0x4100) != 0 ) /*0x454aca*/
          {
            v12 = 1; /*0x454ad2*/
                        v13 = (unsigned char *)(i + *((unsigned int *)this + 1312) + 3932);
          }
          else
          {
                        v11 = *((unsigned int *)this + 1312);
            v12 = 0; /*0x454ae6*/
            v13 = (AnimTypeClass *)(i + _EDX + 3916); /*0x454ae8*/
          }
          if ( v13 ) /*0x454af1*/
          {
            if ( IDA_LOBYTE(v13->ObjectTypeClass) ) /*0x454af3*/
              BuildingClass::PlayAnim(_EDX, v13, v8, v12, 0, 0); /*0x454b01*/
          }
        }
        ++v8; /*0x454b09*/
      }
    }
    return; /*0x454b10*/
  }
    if ( v4 && *((unsigned char *)this + 1634) )
  {
        v14 = *((unsigned int *)this + 540);
        *((unsigned char *)this + 1634) = 0;
    HouseClass::LostPoweredCenter(v14, *(unsigned int *)(v3 + 1036)); /*0x454b38*/
  }
    v15 = (unsigned int *)*((unsigned int *)this + 700);
  if ( v15 ) /*0x454b45*/
    CaptureManager::FreeAll(v15); /*0x454b47*/
    if ( *((unsigned int *)this + 684) )
    TechnoClass::EjectPassengers(1); /*0x454b5a*/
    v16 = *((unsigned int *)this + 1312);
    if ( *(unsigned char *)(v16 + 5831) && *((char *)this + 1771) >= 0 && *((unsigned char *)this + 1772) )
  {
    this->u8_6EB = (unsigned char)((void *)(-1));
        *((unsigned char *)this + 128) = 1;
  }
  if ( *(unsigned char *)(v16 + 3281) ) /*0x454b91*/
  {
        if ( *((unsigned char *)this + 617) )
    {
      (*(void (**)(int *))(*this + 1048))(this);
            if ( *((unsigned char *)this + 616) )
      {
                v17 = *((unsigned int *)this + 540);
                *((unsigned char *)this + 616) = 0;
                *((unsigned char *)this + 1641) = 0;
        *(unsigned char *)(v17 + 22392) = 1; /*0x454bcd*/
        v18 = *(unsigned int *)this; /*0x454bda*/
                *((unsigned int *)this + 620) = *(char *)(*((unsigned int *)this + 1312) + 3282);
        (*(void (**)(Animation *))(v18 + 1044))(this); /*0x454beb*/
      }
    }
  }
    v19 = *((unsigned int *)this + 1312);
  if ( *(unsigned char *)(v19 + 5491) && *(int *)(v19 + 3812) > 0 ) /*0x454c09*/
    BuildingClass::UpdateAnimationSlots(); /*0x454c0d*/
    if ( *(unsigned char *)(*((unsigned int *)this + 1312) + 5492) )
  {
        v20 = *((unsigned int *)this + 540);
    v21 = *(unsigned int *)(v20 + 676); /*0x454c2c*/
    v22 = *(unsigned int *)(v20 + 684); /*0x454c32*/
    if ( v21 != -1 ) /*0x454c3b*/
    {
      if ( *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - v21 >= v22 ) /*0x454c47*/
        goto LABEL_51; /*0x454c47*/
      v22 -= *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - v21; /*0x454c49*/
    }
    if ( v22 ) /*0x454c4d*/
    {
  LABEL_52:
      BuildingClass::GetHealthRatio(); /*0x454c59*/
      _EDX = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324]; /*0x454c60*/
      __asm /*0x454c66*/
      {
        fcomp qword ptr [edx+1700h]
        fnstsw ax
      }
      if ( (_AX & 0x4100) != 0 ) /*0x454c71*/
      {
        v25 = 1; /*0x454c79*/
                v24 = (unsigned char *)(*((unsigned int *)this + 1312) + 5224);
      }
      else
      {
        v25 = 0; /*0x454c8b*/
                v24 = (unsigned char *)(*((unsigned int *)this + 1312) + 5208);
      }
      if ( v26 && IDA_LOBYTE(v26->ObjectTypeClass) ) /*0x454c96*/
        BuildingClass::PlayAnim(*(int *)&DSurface_ViewBounds.__pad_FC[324], v26, 19, v25, 0, 0); /*0x454ca5*/
      v27 = 0; /*0x454caa*/
      for ( j = 0; j < 1428; j += 68 ) /*0x454cac*/
      {
                if ( *(unsigned char *)(j + *((unsigned int *)this + 1312) + 3983) )
          BuildingClass::ClearAnims(v27); /*0x454cc2*/
        ++v27; /*0x454cca*/
      }
      return; /*0x454cd1*/
    }
  LABEL_51:
    if ( !*(unsigned char *)(v20 + 22395) ) /*0x454c57*/
      return; /*0x454c57*/
    goto LABEL_52; /*0x454c57*/
  }
}
} // namespace gamemd
// 0x4A52F0
namespace gamemd {
int Animation::GetProgress()
{
  void * result;
  void * v2;

    if ( !*((unsigned char *)this + 96) )
  if ( (unsigned char)result ) /*0x4a52f8*/
  {
      v1 = *((unsigned int *)this + 80);
    {
      v2 = (void *)((int)(this->q008));
      result = (void *)(*(unsigned int *)&this->q010);
      if ( v2 != (void *)(-1) ) /*0x4a531a*/
      {
        if ( *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - v2 >= result ) /*0x4a5326*/
          return 0; /*0x4a533d*/
        else
          result -= *(unsigned int *)&(unsigned int *)((char *)&stru_A8EB00 + 416) - v2; /*0x4a5328*/
      }
    }
  }
  return (int)(result);
}
} // namespace gamemd
// 0x770550
namespace gamemd {
ObjectClass * * Animation::LoadSidebarAnimations(unsigned int * a1, ObjectClass * aP2)
{
    unsigned int v24 = 0;  /* G37 hoist */
    unsigned int v24 = 0;  /* G37 hoist */
  char **v3; // ebx
  char **v5; // edi
  void *v6; // esi
  char **v7; // eax
  void * i;
  void *v9; // ecx
  int v10; // eax
  int v11; // eax
  void *v12; // eax
  char * v13;
  char **v14; // eax
  int j; // edi
  void *v16; // ecx
  int v17; // eax
  int v19; // eax
  void *v20; // eax
  char * v21;
  void *v23; // [esp+14h] [ebp-Ch] BYREF
  int v24; // [esp+18h] [ebp-8h] BYREF

  v3 = (char **)aP2; /*0x770554*/
  a1 = a1; /*0x770559*/
  v5 = (char **)(this + 1); /*0x770563*/
  v24 = 6; /*0x770566*/
  while ( 1 ) /*0x770574*/
  {
    v6 = (void *)(*this);
    String::Assign((char **)&aP2, off_83E188); /*0x77057f*/
    INIClass::ReadTokenizedPair(v5, a1, v3, v6, 0, (char **)&aP2); /*0x770590*/
    DeleteAndZero((void **)&aP2); /*0x770599*/
    String::Assign((char **)&a1, g_INI_Key_Lose); /*0x7705a7*/
    INIClass::ReadTokenizedPair(v5, a1, v3, v6, 1, (char **)&a1); /*0x7705b8*/
    DeleteAndZero((void **)&a1); /*0x7705c1*/
    String::Assign((char **)&v23, aDraw); /*0x7705cf*/
    INIClass::ReadTokenizedPair(v5, a1, v3, v6, 2, (char **)&v23); /*0x7705e0*/
    DeleteAndZero(&v23); /*0x7705e9*/
    v5 += 37; /*0x7705f2*/
    if ( !--v24 ) /*0x7705fd*/
      break; /*0x7705fd*/
    this = this; /*0x770570*/
  }
  String::Assign((char **)&v23, aStartup); /*0x77060c*/
  v7 = StaticString::Factory(*this); /*0x77061c*/
  ConcatStringAlloc((char **)&v24, (const char **)v7, (char **)&v23); /*0x770627*/
  unknown_libname_73(&a1); /*0x770630*/
  String::Assign((char **)&aP2, &g_INI_DefaultBuffer); /*0x77063e*/
  INIClass::ReadString(a1, v3, (char **)&v24, (char **)&aP2, (int)&a1); /*0x770655*/
  DeleteAndZero((void **)&aP2); /*0x77065e*/
    (*((void (**)(void **))v22[5].NeedsSaveOrLink + 3))(&v22[5].NeedsSaveOrLink);
  unknown_libname_73(&aP2); /*0x770678*/
  for ( i = String::Tokenize((const char **)&a1, 0, Delimiter, (void **)&aP2); /*0x770697*/
        i != (void *)(-1);
        i = (void *)((int)((void *)(String::Tokenize((const char **)&a1, i, Delimiter, (void **)&aP2) ) { __1_Timevec_std__QAE_XZ((std::_Timevec *)&aP2))));
    v9 = (void *)(this->u32_384);
    v10 = v10; /*0x7706a5*/
        if ( (int)v22[5].nextObject >= owningHouseIndex )
    {
            if ( !BYTE1(v22[5].fallRate) && owningHouseIndex )
        continue; /*0x7706b7*/
            attachedTag = (int)v22[5].attachedTag;
      if ( v11 <= 0 /*0x7706c9*/
        || !(*((uint8_t (**, void * a1)(void **, int, unsigned int))this->u32_37C + 2))(&this->u32_37C, (int)v9 + v11, 0) )
      {
        continue; /*0x7706c9*/
      }
    }
    v12 = (void *)((unsigned int)(this->u32_38C));
    v13 = (char *)((unsigned int)(this->u32_380));
    this->u32_38C = (unsigned int)((char *)v12 + 1);
    v13[(unsigned int, unsigned int a1)v12] = v10; /*0x7706e0*/
  }
  DeleteAndZero((void **)&aP2); /*0x770702*/
  DeleteAndZero((void **)&a1); /*0x77070b*/
  DeleteAndZero((void **)&v24); /*0x770714*/
  DeleteAndZero(&v23); /*0x77071d*/
  String::Assign((char **)&v23, aTerritoryselec); /*0x77072b*/
  v14 = StaticString::Factory(*this); /*0x77073b*/
  ConcatStringAlloc((char **)&v24, (const char **)v14, (char **)&v23); /*0x770746*/
  unknown_libname_73(&a1); /*0x77074f*/
  String::Assign((char **)&aP2, &g_INI_DefaultBuffer); /*0x77075d*/
  INIClass::ReadString(a1, v3, (char **)&v24, (char **)&aP2, (int)&a1); /*0x770774*/
  DeleteAndZero((void **)&aP2); /*0x77077d*/
    (*((void (**)(void **))v22[5].attachedBomb + 3))(&v22[5].attachedBomb);
  unknown_libname_73(&aP2); /*0x770797*/
  for ( j = String::Tokenize((const char **)&a1, 0, Delimiter, (void **)&aP2); /*0x7707b6*/
        j != -1;
        j = (void *)(String::Tokenize((const char **)&a1, j, Delimiter, (void **)&aP2) ) { __1_Timevec_std__QAE_XZ((std::_Timevec *)&aP2));
        v16 = v22[5].ambientSoundController[1];
    v17 = v17; /*0x7707c4*/
        if ( v22[5].ambientSoundController[3] >= v16 )
    {
            if ( !BYTE1(v22[5].ambientSoundController[2]) && v16 )
        continue; /*0x7707d4*/
            v19 = v22[5].ambientSoundController[4];
      if ( v19 <= 0 /*0x7707e6*/
        || !(*((uint8_t (**)(void **, int, unsigned int))this->u32_394 + 2))(&this->u32_394, (int)v16 + v19, 0) )
      {
        continue; /*0x7707e6*/
      }
    }
    v20 = (void *)((unsigned int)(this->u32_3A4));
    v21 = (char *)((unsigned int)(this->u32_398));
    this->u32_3A4 = (unsigned int)((char *)v20 + 1);
    v21[(unsigned int)v20] = v17; /*0x7707f9*/
  }
  DeleteAndZero((void **)&aP2); /*0x77081b*/
  DeleteAndZero((void **)&a1); /*0x770824*/
  DeleteAndZero((void **)&v24); /*0x77082d*/
  DeleteAndZero(&v23); /*0x770836*/
}
} // namespace gamemd
// 0x661D80
namespace gamemd {
long long Animation::UpdateBobOffset()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B04E00 - dbl_B04E28); /*0x661d92*/
  result = Math::RoundToInt(v0 * dbl_B04E20 * 0.5); /*0x661da6*/
  dword_B04E78 = result; /*0x661dab*/
  return result; /*0x661db0*/
}
} // namespace gamemd