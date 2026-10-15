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
#include "e4/classes/BombClass_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/E4Recv_7B6280_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/CaptureManager_e4.hpp"
#include "e4/classes/StaticString_e4.hpp"
#include "e4/classes/DeleteAndZero_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers

// 0x4549B0
namespace gamemd {  // G42.18 ns repair
BuildingClass * * Animation::UpdateBuildingAnimations(void *a1)
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

  v2 = (*(uint8_t (**)(Animation *))(*(unsigned int *)this->u32_9A4 + 924)))(this) == 0; /*0x4549bd*/
  v3 = this->u32_520; /*0x4549bf*/
  v4 = *(unsigned int *)(v3 + 1036); /*0x4549c5*/
  if ( !v2 ) /*0x4549cb*/
  {
    if ( v4 && !this->u32_662 ) /*0x4549d5*/
    {
      this->u32_662 = 1; /*0x4549df*/
      TechnoClass::Find(this->u32_21C, *(unsigned int *)(v3 + 1036)); /*0x4549f3*/
    }
    v5 = (unsigned char *)this->u32_520; /*0x4549f8*/
    if ( v5[5831] ) /*0x4549fe*/
    {
      if ( this->u32_6EB <= 0 ) /*0x454a10*/
      {
        v6 = this->u32_6EC; /*0x454a12*/
        if ( v6 != v5[5895] ) /*0x454a20*/
        {
          this->u32_6EB = 1; /*0x454a22*/
          if ( v6 == v5[5895] ) /*0x454a31*/
            this->u32_6EC = 0; /*0x454a33*/
          this->u32_80 = 1; /*0x454a3a*/
        }
      }
    }
    if ( v5[3281] && !this->u32_269 ) /*0x454a4b*/
      (*(void (**)(Animation *))(*(unsigned int *)this->q1046 + 10)))(this); /*0x454a59*/
    v7 = this->u32_520; /*0x454a5f*/
    if ( *(unsigned char *)(v7 + 5491) && *(int *)(v7 + 3812) > 0 ) /*0x454a77*/
      this->BuildingClass::ProcessAnimationStates(); /*0x454a7b*/
    if ( *(unsigned char *)(this->u32_520 + 5492) ) /*0x454a86*/
    {
      BuildingClass::ClearAnims(19); /*0x454a98*/
      v8 = 0; /*0x454a9d*/
      for ( i = 0; i < 1428; i += 68 ) /*0x454a9f*/
      {
        if ( *(unsigned char *)(i + this->u32_520 + 3983) ) /*0x454aa7*/
        {
          BuildingClass::GetHealthRatio(); /*0x454ab4*/
          _EDX = *(unsigned int *)&g_RulesClass_Instance; /*0x454ab9*/
          __asm /*0x454abf*/
          {
            fcomp qword ptr [edx+1700h]
            fnstsw ax
          }
          if ( (_AX & 0x4100) != 0 ) /*0x454aca*/
          {
            v12 = 1; /*0x454ad2*/
            v13 = (AnimTypeClass *)(i + this->u32_520 + 3932); /*0x454ad7*/
          }
          else
          {
            _EDX = this->u32_520; /*0x454ae0*/
            v12 = 0; /*0x454ae6*/
            v13 = (AnimTypeClass *)(i + _EDX + 3916); /*0x454ae8*/
          }
          if ( v13 ) /*0x454af1*/
          {
            if ( (v13->vtable1) ) /*0x454af3*/
              BuildingClass::PlayAnim(_EDX, v13, v8, v12, 0, 0); /*0x454b01*/
          }
        }
        ++v8; /*0x454b09*/
      }
    }
    return; /*0x454b10*/
  }
  if ( v4 && this->u32_662 ) /*0x454b1a*/
  {
    v14 = this->u32_21C; /*0x454b24*/
    this->u32_662 = 0; /*0x454b2a*/
    HouseClass::LostPoweredCenter(v14,(void *)(*(unsigned int *)(v3 + 1036))); /*0x454b38*/
  }
  v15 = (CaptureManager *)this->u32_2BC; /*0x454b3d*/
  if ( v15 ) /*0x454b45*/
    CaptureManager::FreeAll(v15); /*0x454b47*/
  if ( this->u32_2AC ) /*0x454b4c*/
    (1)->EjectPassengers(); /*0x454b5a*/
  v16 = this->u32_520; /*0x454b5f*/
  if ( *(unsigned char *)(v16 + 5831) && this->u32_6EB >= 0 && this->u32_6EC ) /*0x454b79*/
  {
    this->u32_6EB = -1; /*0x454b83*/
    this->u32_80 = 1; /*0x454b8a*/
  }
  if ( *(unsigned char *)(v16 + 3281) ) /*0x454b91*/
  {
    if ( this->u32_269 ) /*0x454b9b*/
    {
      (*(void (**)(Animation *))(*(unsigned int *)this->q1046 + 26)))(this); /*0x454ba9*/
      if ( this->u32_268 ) /*0x454baf*/
      {
        v17 = this->u32_21C; /*0x454bb9*/
        this->u32_268 = 0; /*0x454bbf*/
        this->u32_669 = 0; /*0x454bc6*/
        *(unsigned char *)(v17 + 22392) = 1; /*0x454bcd*/
        v18 = *(unsigned int *)this; /*0x454bda*/
        this->u32_26C = *(char *)(this->u32_520 + 3282); /*0x454be5*/
        (*(void (**)(Animation *))(v18 + 1044))(this); /*0x454beb*/
      }
    }
  }
  v19 = this->u32_520; /*0x454bf1*/
  if ( *(unsigned char *)(v19 + 5491) && *(int *)(v19 + 3812) > 0 ) /*0x454c09*/
    this->BuildingClass::UpdateAnimationSlots(); /*0x454c0d*/
  if ( *(unsigned char *)(this->u32_520 + 5492) ) /*0x454c18*/
  {
    v20 = this->u32_21C; /*0x454c26*/
    v21 = *(unsigned int *)(v20 + 676); /*0x454c2c*/
    v22 = *(unsigned int *)(v20 + 684); /*0x454c32*/
    if ( v21 != -1 ) /*0x454c3b*/
    {
      if ( *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - v21 >= v22 ) /*0x454c47*/
        goto LABEL_51; /*0x454c47*/
      v22 -= *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - v21; /*0x454c49*/
    }
    if ( v22 ) /*0x454c4d*/
    {
  LABEL_52:
      BuildingClass::GetHealthRatio(); /*0x454c59*/
      _EDX = *(unsigned int *)&g_RulesClass_Instance; /*0x454c60*/
      __asm /*0x454c66*/
      {
        fcomp qword ptr [edx+1700h]
        fnstsw ax
      }
      if ( (_AX & 0x4100) != 0 ) /*0x454c71*/
      {
        v25 = 1; /*0x454c79*/
        v26 = (AnimTypeClass *)(this->u32_520 + 5224); /*0x454c7e*/
      }
      else
      {
        v25 = 0; /*0x454c8b*/
        v26 = (AnimTypeClass *)(this->u32_520 + 5208); /*0x454c8d*/
      }
      if ( v26 && (v26->vtable1) ) /*0x454c96*/
        BuildingClass::PlayAnim(*(int *)&g_RulesClass_Instance, v26, 19, v25, 0, 0); /*0x454ca5*/
      v27 = 0; /*0x454caa*/
      for ( j = 0; j < 1428; j += 68 ) /*0x454cac*/
      {
        if ( *(unsigned char *)(j + this->u32_520 + 3983) ) /*0x454cb4*/
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
}  // G42.18 ns repair
} // namespace gamemd
// 0x4A52F0
namespace gamemd {
int Animation::GetProgress()
{
  int result; // eax
  int v2; // edx

  (*((unsigned char *)&(result))) = this->u32_60; /*0x4a52f0*/
  if ( (unsigned char)result ) /*0x4a52f8*/
  {
    if ( this->q014 ) /*0x4a52fb*/
    {
      v2 = (int)(this->q008); /*0x4a5311*/
      result = (int)(this->q010); /*0x4a5314*/
      if ( v2 != -1 ) /*0x4a531a*/
      {
        if ( *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - v2 >= result ) /*0x4a5326*/
          return 0; /*0x4a533d*/
        else
          result -= *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] - v2; /*0x4a5328*/
      }
    }
  }
  return result; /*0x4a530d*/
}
} // namespace gamemd
// 0x770550
namespace gamemd {
ObjectClass * * Animation::LoadSidebarAnimations(unsigned int * a1, ObjectClass * aP2)
{
  char **v3; // ebx
  INIClass *v4; // ebp
  INIClass *v5; // edi
  void *v6; // esi
  char **v7; // eax
  int i; // edi
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // edx
  char **v14; // eax
  int j; // edi
  int v16; // ecx
  int v17; // eax
  int v18; // ebx
  int v19; // eax
  int v20; // eax
  int v21; // edx
  Animation *v22; // [esp+10h] [ebp-10h]
  String v23; // [esp+14h] [ebp-Ch] BYREF
  int v24; // [esp+1Ch] [ebp-4h]

  v3 = (char **)aP2; /*0x770554*/
  v4 = (INIClass *)a1; /*0x770559*/
  v22 = this; /*0x77055f*/
  v5 = (gamemd::INIClass *)(&this->q010); /*0x770563*/
  *(unsigned int *)&v23.headNode = 6; /*0x770566*/
  while ( 1 ) /*0x770574*/
  {
    v6 = *(void **)this; /*0x770574*/
    ((String *)((String *)&aP2))->Assign((const char *)(off_83E188)); /*0x77057f*/
    INIClass::ReadTokenizedPair(v5,(unsigned int *)(v4), v3, v6, 0, (char **)&aP2); /*0x770590*/
    DeleteAndZero((ObjectClass *)&aP2); /*0x770599*/
    ((String *)((String *)&a1))->Assign((const char *)(g_INI_Key_Lose)); /*0x7705a7*/
    INIClass::ReadTokenizedPair(v5,(unsigned int *)(v4), v3, v6, 1, (char **)&a1); /*0x7705b8*/
    DeleteAndZero((ObjectClass *)&a1); /*0x7705c1*/
    ((String *)(&v23))->Assign((const char *)(aDraw)); /*0x7705cf*/
    INIClass::ReadTokenizedPair(v5,(unsigned int *)(v4), v3, v6, 2, (char **)&v23); /*0x7705e0*/
    DeleteAndZero((ObjectClass *)&v23); /*0x7705e9*/
    v5 = &v5->__pad_094; /*0x7705f2*/
    if ( !--*(unsigned int *)&v23.headNode ) /*0x7705fd*/
      break; /*0x7705fd*/
    this = v22; /*0x770570*/
  }
  ((String *)(&v23))->Assign((const char *)(aStartup)); /*0x77060c*/
  v7 = (*(StaticString **)v22)->Factory(); /*0x77061c*/
  ConcatStringAlloc((gamemd::ObjectClass *)((char **)&v23.headNode), (const char **)v7, (char **)&v23); /*0x770627*/
  unknown_libname_73(&a1); /*0x770630*/
  ((String *)((String *)&aP2))->Assign(&g_INI_DefaultBuffer); /*0x77063e*/
  ((INIClass *)(v4))->ReadString(v3, (char **)&v23.headNode, (char **)&aP2, (int)&a1); /*0x770655*/
  DeleteAndZero((ObjectClass *)&aP2); /*0x77065e*/
  (*(void (**)(Animation *))(*(unsigned int *)&v22[892] + 12))(v22 + 892); /*0x770671*/
  unknown_libname_73(&aP2); /*0x770678*/
  for ( i = String::Tokenize((String *)&a1, 0, Str, (void **)&aP2); /*0x770697*/
        i != -1;
        i = String::Tokenize((String *)&a1, i, Str, (void **)&aP2) )
  {
    __1_Timevec_std__QAE_XZ((const char **)&aP2); /*0x77069d*/
    v9 = *(unsigned int *)&v22[900]; /*0x7706a2*/
    v24 = v10; /*0x7706a5*/
    if ( *(unsigned int *)&v22[908] >= v9 ) /*0x7706ac*/
    {
      if ( !*(unsigned char *)&v22[905] && v9 ) /*0x7706b7*/
        continue; /*0x7706b7*/
      v11 = *(unsigned int *)&v22[912]; /*0x7706b9*/
      if ( v11 <= 0 /*0x7706c9*/
        || !(*(uint8_t (**)(Animation *, int, unsigned int))(*(unsigned int *)&v22[892] + 8))(
              v22 + 892,
              v9 + v11,
              0) )
      {
        continue; /*0x7706c9*/
      }
    }
    v12 = *(unsigned int *)&v22[908]; /*0x7706d0*/
    v13 = *(unsigned int *)&v22[896]; /*0x7706d3*/
    *(unsigned int *)&v22[908] = v12 + 1; /*0x7706d9*/
    *(unsigned int *)(v13 + 4 * v12) = v24; /*0x7706e0*/
  }
  DeleteAndZero((ObjectClass *)&aP2); /*0x770702*/
  DeleteAndZero((ObjectClass *)&a1); /*0x77070b*/
  DeleteAndZero((ObjectClass *)&v23.headNode); /*0x770714*/
  DeleteAndZero((ObjectClass *)&v23); /*0x77071d*/
  ((String *)(&v23))->Assign((const char *)(aTerritoryselec)); /*0x77072b*/
  v14 = (*(StaticString **)v22)->Factory(); /*0x77073b*/
  ConcatStringAlloc((gamemd::ObjectClass *)((char **)&v23.headNode), (const char **)v14, (char **)&v23); /*0x770746*/
  unknown_libname_73(&a1); /*0x77074f*/
  ((String *)((String *)&aP2))->Assign(&g_INI_DefaultBuffer); /*0x77075d*/
  ((INIClass *)(v4))->ReadString(v3, (char **)&v23.headNode, (char **)&aP2, (int)&a1); /*0x770774*/
  DeleteAndZero((ObjectClass *)&aP2); /*0x77077d*/
  (*(void (**)(Animation *))(*(unsigned int *)&v22[916] + 12))(v22 + 916); /*0x770790*/
  unknown_libname_73(&aP2); /*0x770797*/
  for ( j = String::Tokenize((String *)&a1, 0, Str, (void **)&aP2); /*0x7707b6*/
        j != -1;
        j = String::Tokenize((String *)&a1, j, Str, (void **)&aP2) )
  {
    __1_Timevec_std__QAE_XZ((const char **)&aP2); /*0x7707bc*/
    v16 = *(unsigned int *)&v22[924]; /*0x7707c1*/
    v18 = v17; /*0x7707c4*/
    if ( *(unsigned int *)&v22[932] >= v16 ) /*0x7707c9*/
    {
      if ( !*(unsigned char *)&v22[929] && v16 ) /*0x7707d4*/
        continue; /*0x7707d4*/
      v19 = *(unsigned int *)&v22[936]; /*0x7707d6*/
      if ( v19 <= 0 /*0x7707e6*/
        || !(*(uint8_t (**)(Animation *, int, unsigned int))(*(unsigned int *)&v22[916] + 8))(
              v22 + 916,
              v16 + v19,
              0) )
      {
        continue; /*0x7707e6*/
      }
    }
    v20 = *(unsigned int *)&v22[932]; /*0x7707ed*/
    v21 = *(unsigned int *)&v22[920]; /*0x7707f0*/
    *(unsigned int *)&v22[932] = v20 + 1; /*0x7707f6*/
    *(unsigned int *)(v21 + 4 * v20) = v18; /*0x7707f9*/
  }
  DeleteAndZero((ObjectClass *)&aP2); /*0x77081b*/
  DeleteAndZero((ObjectClass *)&a1); /*0x770824*/
  DeleteAndZero((ObjectClass *)&v23.headNode); /*0x77082d*/
  DeleteAndZero((ObjectClass *)&v23); /*0x770836*/
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