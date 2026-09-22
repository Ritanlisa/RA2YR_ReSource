// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x4549B0
void Animation::UpdateBuildingAnimations()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall Animation::UpdateBuildingAnimations(int *this)
{
  bool v2; // zf
  int v3; // eax
  int v4; // ecx
  _BYTE *v5; // eax
  char v6; // cl
  int v7; // eax
  IUnknown *v8; // ebp
  int i; // edi
  double HealthRatio; // st7
  int v11; // edx
  int v12; // ecx
  _BYTE *v13; // eax
  int v14; // ecx
  _DWORD *v15; // ecx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // edi
  int v21; // edx
  int v22; // eax
  int v23; // ecx
  _BYTE *v24; // eax
  TechnoClass *v25; // ebp
  int j; // edi

  v2 = (*(unsigned __int8 (__thiscall **)(int *))(*this + 848))(this) == 0; /*0x4549bd*/
  v3 = this->q148; /*0x4549bf*/
  v4 = *(_DWORD *)(v3 + 1036); /*0x4549c5*/
  if ( !v2 ) /*0x4549cb*/
  {
    if ( v4 && !*((_BYTE *)this + 1634) ) /*0x4549d5*/
    {
      *((_BYTE *)this + 1634) = 1; /*0x4549df*/
      TechnoClass::Find(this->q087, *(_DWORD *)(v3 + 1036)); /*0x4549f3*/
    }
    v5 = (_BYTE *)this->q148; /*0x4549f8*/
    if ( v5[5831] ) /*0x4549fe*/
    {
      if ( *((char *)this + 1771) <= 0 ) /*0x454a10*/
      {
        v6 = *((_BYTE *)this + 1772); /*0x454a12*/
        if ( v6 != v5[5895] ) /*0x454a20*/
        {
          *((_BYTE *)this + 1771) = 1; /*0x454a22*/
          if ( v6 == v5[5895] ) /*0x454a31*/
            *((_BYTE *)this + 1772) = 0; /*0x454a33*/
          *((_BYTE *)this + 128) = 1; /*0x454a3a*/
        }
      }
    }
    if ( v5[3281] && !*((_BYTE *)this + 617) ) /*0x454a4b*/
      (*(void (__thiscall **)(int *))(*this + 1044))(this); /*0x454a59*/
    v7 = this->q148; /*0x454a5f*/
    if ( *(_BYTE *)(v7 + 5491) && *(int *)(v7 + 3812) > 0 ) /*0x454a77*/
      BuildingClass::ProcessAnimationStates((int)this); /*0x454a7b*/
    if ( *(_BYTE *)(this->q148 + 5492) ) /*0x454a86*/
    {
      BuildingClass::ClearAnims(this, (TechnoClass *)0x13); /*0x454a98*/
      v8 = 0; /*0x454a9d*/
      for ( i = 0; i < 1428; i += 68 ) /*0x454a9f*/
      {
        if ( *(_BYTE *)(i + this->q148 + 3983) ) /*0x454aa7*/
        {
          HealthRatio = BuildingClass::GetHealthRatio(this); /*0x454ab4*/
          v11 = *(_DWORD *)&stru_87C374.__pad_579C[22224]; /*0x454ab9*/
          if ( HealthRatio > *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5888) ) /*0x454aca*/
          {
            v11 = this->q148; /*0x454ae0*/
            v12 = 0; /*0x454ae6*/
            v13 = (_BYTE *)(i + v11 + 3916); /*0x454ae8*/
          }
          else
          {
            v12 = 1; /*0x454ad2*/
            v13 = (_BYTE *)(i + this->q148 + 3932); /*0x454ad7*/
          }
          if ( v13 ) /*0x454af1*/
          {
            if ( *v13 ) /*0x454af3*/
              BuildingClass::PlayAnim((ObjectClass *)this, v11, v13, v8, (IUnknown *)v12, 0, 0); /*0x454b01*/
          }
        }
        v8 = (IUnknown *)((char *)v8 + 1); /*0x454b09*/
      }
    }
    return; /*0x454b10*/
  }
  if ( v4 && *((_BYTE *)this + 1634) ) /*0x454b1a*/
  {
    v14 = this->q087; /*0x454b24*/
    *((_BYTE *)this + 1634) = 0; /*0x454b2a*/
    HouseClass::LostPoweredCenter(v14, *(_DWORD *)(v3 + 1036)); /*0x454b38*/
  }
  v15 = (_DWORD *)this->q0AF; /*0x454b3d*/
  if ( v15 ) /*0x454b45*/
    CaptureManager::FreeAll(v15); /*0x454b47*/
  if ( this->q0AB ) /*0x454b4c*/
    TechnoClass::EjectPassengers(this, 1); /*0x454b5a*/
  v16 = this->q148; /*0x454b5f*/
  if ( *(_BYTE *)(v16 + 5831) && *((char *)this + 1771) >= 0 && *((_BYTE *)this + 1772) ) /*0x454b79*/
  {
    *((_BYTE *)this + 1771) = -1; /*0x454b83*/
    *((_BYTE *)this + 128) = 1; /*0x454b8a*/
  }
  if ( *(_BYTE *)(v16 + 3281) ) /*0x454b91*/
  {
    if ( *((_BYTE *)this + 617) ) /*0x454b9b*/
    {
      (*(void (__thiscall **)(int *))(*this + 1048))(this); /*0x454ba9*/
      if ( *((_BYTE *)this + 616) ) /*0x454baf*/
      {
        v17 = this->q087; /*0x454bb9*/
        *((_BYTE *)this + 616) = 0; /*0x454bbf*/
        *((_BYTE *)this + 1641) = 0; /*0x454bc6*/
        *(_BYTE *)(v17 + 22392) = 1; /*0x454bcd*/
        v18 = *this; /*0x454bda*/
        this->q09B = *(char *)(this->q148 + 3282); /*0x454be5*/
        (*(void (__thiscall **)(int *))(v18 + 1044))(this); /*0x454beb*/
      }
    }
  }
  v19 = this->q148; /*0x454bf1*/
  if ( *(_BYTE *)(v19 + 5491) && *(int *)(v19 + 3812) > 0 ) /*0x454c09*/
    BuildingClass::UpdateAnimationSlots(this); /*0x454c0d*/
  if ( *(_BYTE *)(this->q148 + 5492) ) /*0x454c18*/
  {
    v20 = this->q087; /*0x454c26*/
    v21 = *(_DWORD *)(v20 + 676); /*0x454c2c*/
    v22 = *(_DWORD *)(v20 + 684); /*0x454c32*/
    if ( v21 != -1 ) /*0x454c3b*/
    {
      if ( *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - v21 >= v22 ) /*0x454c47*/
        goto LABEL_51; /*0x454c47*/
      v22 -= *(_DWORD *)&HouseClass_Player.__pad_5568[23248] - v21; /*0x454c49*/
    }
    if ( v22 ) /*0x454c4d*/
    {
LABEL_52:
      if ( BuildingClass::GetHealthRatio(this) > *(double *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 5888) ) /*0x454c71*/
      {
        v23 = 0; /*0x454c8b*/
        v24 = (_BYTE *)(this->q148 + 5208); /*0x454c8d*/
      }
      else
      {
        v23 = 1; /*0x454c79*/
        v24 = (_BYTE *)(this->q148 + 5224); /*0x454c7e*/
      }
      if ( v24 && *v24 ) /*0x454c96*/
        BuildingClass::PlayAnim( /*0x454ca5*/
          (ObjectClass *)this,
          *(int *)&stru_87C374.__pad_579C[22224],
          v24,
          (IUnknown *)0x13,
          (IUnknown *)v23,
          0,
          0);
      v25 = 0; /*0x454caa*/
      for ( j = 0; j < 1428; j += 68 ) /*0x454cac*/
      {
        if ( *(_BYTE *)(j + this->q148 + 3983) ) /*0x454cb4*/
          BuildingClass::ClearAnims(this, v25); /*0x454cc2*/
        v25 = (TechnoClass *)((char *)v25 + 1); /*0x454cca*/
      }
      return; /*0x454cd1*/
    }
LABEL_51:
    if ( !*(_BYTE *)(v20 + 22395) ) /*0x454c57*/
      return; /*0x454c57*/
    goto LABEL_52; /*0x454c57*/
  }
}
}

// 0x4A52F0
double Animation::GetProgress()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
double __thiscall Animation::GetProgress(int this)
{
  int v1; // esi
  int v3; // edx
  int v4; // eax

  if ( !this->q018 ) /*0x4a52f0*/
    return 1.0; /*0x4a5352*/
  v1 = this->q014; /*0x4a52fb*/
  if ( !v1 ) /*0x4a5304*/
    return 1.0; /*0x4a5310*/
  v3 = this->q008; /*0x4a5311*/
  v4 = this->q010; /*0x4a5314*/
  if ( v3 != -1 ) /*0x4a531a*/
  {
    if ( (int)g_CurrentFrame - v3 < v4 ) /*0x4a5326*/
      return (double)(v1 - (v4 - ((int)g_CurrentFrame - v3))) / (double)v1; /*0x4a533c*/
    v4 = 0; /*0x4a533d*/
  }
  return (double)(v1 - v4) / (double)v1; /*0x4a530d*/
}
}

// 0x770550
void Animation::LoadSidebarAnimations(unsigned int * a1, ObjectClass * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall Animation::LoadSidebarAnimations(ObjectClass *this, _DWORD *a1, ObjectClass *aP2)
{
  ObjectClass *v3; // ebx
  ObjectClass *v4; // ebp
  ObjectClass *v5; // edi
  ObjectClass *v6; // esi
  Selection_WorldDominationTour *v7; // eax
  ObjectClass *i; // edi
  int owningHouseIndex; // ecx
  int v10; // eax
  int attachedTag; // eax
  void *nextObject; // eax
  int objectTypeFlags; // edx
  Selection_WorldDominationTour *v14; // eax
  ObjectClass *j; // edi
  int v16; // ecx
  ObjectClass *v17; // eax
  ObjectClass *v18; // ebx
  int v19; // eax
  int v20; // eax
  int v21; // edx
  ObjectClass *v22; // [esp+10h] [ebp-10h]
  void *v23; // [esp+14h] [ebp-Ch] BYREF
  ObjectClass *v24; // [esp+18h] [ebp-8h] BYREF
  int v25; // [esp+1Ch] [ebp-4h]

  v3 = aP2; /*0x770554*/
  v4 = (ObjectClass *)a1; /*0x770559*/
  v22 = this; /*0x77055f*/
  v5 = (ObjectClass *)&this->__pad_0[4]; /*0x770563*/
  v24 = (ObjectClass *)6; /*0x770566*/
  while ( 1 ) /*0x770574*/
  {
    v6 = *(ObjectClass **)this->__pad_0; /*0x770574*/
    String::Assign((char **)&aP2, &stru_830620.__pad_579C[33740]); /*0x77057f*/
    INIClass::ReadTokenizedPair((char **)v5, v4, v3, v6, 0, (ObjectClass *)&aP2); /*0x770590*/
    DeleteAndZero((void **)&aP2); /*0x770599*/
    String::Assign((char **)&a1, &stru_830620.__pad_579C[33732]); /*0x7705a7*/
    INIClass::ReadTokenizedPair((char **)v5, v4, v3, v6, 1, (ObjectClass *)&a1); /*0x7705b8*/
    DeleteAndZero((void **)&a1); /*0x7705c1*/
    String::Assign((char **)&v23, aDraw); /*0x7705cf*/
    INIClass::ReadTokenizedPair((char **)v5, v4, v3, v6, 2, (ObjectClass *)&v23); /*0x7705e0*/
    DeleteAndZero(&v23); /*0x7705e9*/
    v5 = (ObjectClass *)((char *)v5 + 148); /*0x7705f2*/
    v24 = (ObjectClass *)((char *)v24 - 1); /*0x7705f9*/
    if ( !v24 ) /*0x7705fd*/
      break; /*0x7705fd*/
    this = v22; /*0x770570*/
  }
  String::Assign((char **)&v23, aStartup); /*0x77060c*/
  v7 = StaticString::Factory(*(void **)v22->__pad_0); /*0x77061c*/
  ConcatStringAlloc((char **)&v24, (const char **)v7, (char **)&v23); /*0x770627*/
  unknown_libname_73(&a1); /*0x770630*/
  String::Assign((char **)&aP2, &MEMORY[0x87F8E4].__pad_5568[20760]); /*0x77063e*/
  INIClass::ReadString(v4, v3, (ObjectClass *)&v24, (ReferenceCounted *)&aP2, (int)&a1); /*0x770655*/
  DeleteAndZero((void **)&aP2); /*0x77065e*/
  (*((void (__thiscall **)(void **))v22[5].NeedsSaveOrLink + 3))(&v22[5].NeedsSaveOrLink); /*0x770671*/
  unknown_libname_73(&aP2); /*0x770678*/
  for ( i = (ObjectClass *)String::Tokenize((const char **)&a1, 0, &MEMORY[0x817F70], (ObjectClass *)&aP2); /*0x770697*/
        i != (ObjectClass *)-1;
        i = (ObjectClass *)String::Tokenize((const char **)&a1, (int)i, &MEMORY[0x817F70], (ObjectClass *)&aP2) )
  {
    __1_Timevec_std__QAE_XZ((std::_Timevec *)&aP2); /*0x77069d*/
    owningHouseIndex = v22[5].owningHouseIndex; /*0x7706a2*/
    v25 = v10; /*0x7706a5*/
    if ( (int)v22[5].nextObject >= owningHouseIndex ) /*0x7706ac*/
    {
      if ( !BYTE1(v22[5].fallRate) && owningHouseIndex ) /*0x7706b7*/
        continue; /*0x7706b7*/
      attachedTag = (int)v22[5].attachedTag; /*0x7706b9*/
      if ( attachedTag <= 0 /*0x7706c9*/
        || !(*((unsigned __int8 (__thiscall **)(void **, int, _DWORD))v22[5].NeedsSaveOrLink + 2))(
              &v22[5].NeedsSaveOrLink,
              owningHouseIndex + attachedTag,
              0) )
      {
        continue; /*0x7706c9*/
      }
    }
    nextObject = v22[5].nextObject; /*0x7706d0*/
    objectTypeFlags = v22[5].objectTypeFlags; /*0x7706d3*/
    v22[5].nextObject = (char *)nextObject + 1; /*0x7706d9*/
    *(_DWORD *)(objectTypeFlags + 4 * (_DWORD)nextObject) = v25; /*0x7706e0*/
  }
  DeleteAndZero((void **)&aP2); /*0x770702*/
  DeleteAndZero((void **)&a1); /*0x77070b*/
  DeleteAndZero((void **)&v24); /*0x770714*/
  DeleteAndZero(&v23); /*0x77071d*/
  String::Assign((char **)&v23, aTerritoryselec); /*0x77072b*/
  v14 = StaticString::Factory(*(void **)v22->__pad_0); /*0x77073b*/
  ConcatStringAlloc((char **)&v24, (const char **)v14, (char **)&v23); /*0x770746*/
  unknown_libname_73(&a1); /*0x77074f*/
  String::Assign((char **)&aP2, &MEMORY[0x87F8E4].__pad_5568[20760]); /*0x77075d*/
  INIClass::ReadString(v4, v3, (ObjectClass *)&v24, (ReferenceCounted *)&aP2, (int)&a1); /*0x770774*/
  DeleteAndZero((void **)&aP2); /*0x77077d*/
  (*((void (__thiscall **)(void **))v22[5].attachedBomb + 3))(&v22[5].attachedBomb); /*0x770790*/
  unknown_libname_73(&aP2); /*0x770797*/
  for ( j = (ObjectClass *)String::Tokenize((const char **)&a1, 0, &MEMORY[0x817F70], (ObjectClass *)&aP2); /*0x7707b6*/
        j != (ObjectClass *)-1;
        j = (ObjectClass *)String::Tokenize((const char **)&a1, (int)j, &MEMORY[0x817F70], (ObjectClass *)&aP2) )
  {
    __1_Timevec_std__QAE_XZ((std::_Timevec *)&aP2); /*0x7707bc*/
    v16 = v22[5].ambientSoundController[1]; /*0x7707c1*/
    v18 = v17; /*0x7707c4*/
    if ( v22[5].ambientSoundController[3] >= v16 ) /*0x7707c9*/
    {
      if ( !BYTE1(v22[5].ambientSoundController[2]) && v16 ) /*0x7707d4*/
        continue; /*0x7707d4*/
      v19 = v22[5].ambientSoundController[4]; /*0x7707d6*/
      if ( v19 <= 0 /*0x7707e6*/
        || !(*((unsigned __int8 (__thiscall **)(void **, int, _DWORD))v22[5].attachedBomb + 2))(
              &v22[5].attachedBomb,
              v16 + v19,
              0) )
      {
        continue; /*0x7707e6*/
      }
    }
    v20 = v22[5].ambientSoundController[3]; /*0x7707ed*/
    v21 = v22[5].ambientSoundController[0]; /*0x7707f0*/
    v22[5].ambientSoundController[3] = v20 + 1; /*0x7707f6*/
    *(_DWORD *)(v21 + 4 * v20) = v18; /*0x7707f9*/
  }
  DeleteAndZero((void **)&aP2); /*0x77081b*/
  DeleteAndZero((void **)&a1); /*0x770824*/
  DeleteAndZero((void **)&v24); /*0x77082d*/
  DeleteAndZero(&v23); /*0x770836*/
}
}

// 0x661D80
long long Animation::UpdateBobOffset()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B04E00 - DataGlobal_B04E28);
    result = Math::RoundToInt(v0 * DataGlobal_B04E20 * 0.5);
    DataGlobal_B04E78 = result;
    return result;
}
}
