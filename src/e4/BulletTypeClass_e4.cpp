// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/TimerClass_e4.hpp"
#include "e4/classes/VoxelAnimType_e4.hpp"
#include "e4/classes/WalkLocomotion_e4.hpp"
#include "e4/classes/BulletTypeClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/e4_protos.h"

// 0x465450
namespace gamemd {
BuildingTypeClass * * BulletTypeClass::ReadArmor()
{
  int v1; // edi
  char *v2; // ecx
  _DWORD *v3; // esi
  int result; // eax
  int i; // edi
  int v6; // esi
  int v7; // eax
  char Destination[60]; // [esp+Ch] [ebp-3Ch] BYREF

  g_TriggerClassCount = g_TriggerClassCount; /*0x465450*/
  v1 = 0; /*0x46545e*/
  if ( g_TriggerClassCount > 0 ) /*0x465462*/
  {
    v2 = (char *)g_TriggerTypeCount; /*0x465464*/
    do /*0x46547d*/
    {
      if ( v1 <= *(char *)(v2->u32_1707 ) /*0x465475*/
        v1 = *(char *)(v2->u32_1707; /*0x465477*/
      v2 += 4; /*0x465479*/
      --g_TriggerClassCount; /*0x46547c*/
    }
    while ( g_TriggerClassCount ); /*0x46547d*/
    if ( v1 ) /*0x465481*/
    {
      if ( dword_89DDC0 ) /*0x46548b*/
        (**(void (__thiscall ***)(int, int))dword_89DDC0)(dword_89DDC0, 1); /*0x465491*/
      v3 = RA2_OPNEW(0x20u); /*0x46549a*/
      if ( v3 ) /*0x4654a1*/
      {
        v3[3] = 0; /*0x4654a6*/
        v3[1] = v1 + 16; /*0x4654ab*/
        v3[2] = v1 + 16; /*0x4654b6*/
        *v3 = &XSurface_Vtable; /*0x4654b9*/
        v3[4] = 1; /*0x4654bf*/
        Buffer::Init(v3 + 5, 0, (v1 + 16) * (v1 + 16)); /*0x4654c6*/
        *v3 = &BSurface_Vtable; /*0x4654cb*/
        dword_89DDC0 = (int)v3; /*0x4654d1*/
      }
      else
      {
        dword_89DDC0 = 0; /*0x4654d9*/
      }
    }
  }
  result = g_TriggerClassCount; /*0x4654df*/
  for ( i = 0; i < g_TriggerClassCount; ++i ) /*0x4654e8*/
  {
    v6 = *((_DWORD *)g_TriggerTypeCount + i); /*0x4654f7*/
    Destination[0] = 0; /*0x465500*/
    INIClass::GetString( /*0x46550e*/
      (unsigned __int8 ***)CCINIClass_INI_Rules,
      (unsigned __int8 *)(v6 + 36),
      (unsigned __int8 *)aTotile,
      0,
      Destination,
      60);
    v7 = Entity_Read(Destination); /*0x465517*/
    if ( v7 >= 0 && v7 < g_TechnoClassCount ) /*0x465526*/
      *(_DWORD *)(v6 + 3672) = *((_DWORD *)g_FrameCounter + v7); /*0x465531*/
    result = g_TriggerClassCount; /*0x465537*/
  }
  return result; /*0x465541*/
}
} // namespace gamemd
// 0x465CC0
namespace gamemd {
BuildingTypeClass * * BulletTypeClass::ReadTrailerAnim()
{
  int result; // eax
  int i; // edi
  int v2; // esi
  int v3; // eax
  char Destination[60]; // [esp+4h] [ebp-3Ch] BYREF

  result = g_TriggerClassCount; /*0x465cc0*/
  for ( i = 0; i < g_TriggerClassCount; ++i ) /*0x465ccd*/
  {
    v2 = *((_DWORD *)g_TriggerTypeCount + i); /*0x465cdc*/
    Destination[0] = 0; /*0x465cef*/
    INIClass::GetString( /*0x465cf5*/
      (unsigned __int8 ***)CCINIClass_INI_Rules,
      (unsigned __int8 *)(v2 + 36),
      (unsigned __int8 *)aTotile,
      0,
      Destination,
      60);
    v3 = Entity_Read(Destination); /*0x465cfe*/
    if ( v3 >= 0 && v3 < g_TechnoClassCount ) /*0x465d0d*/
      v2->u32_E58 = *((_DWORD *)g_FrameCounter + v3); /*0x465d18*/
    result = g_TriggerClassCount; /*0x465d1e*/
  }
  return result; /*0x465d29*/
}
} // namespace gamemd
// 0x46BBC0
namespace gamemd {
unsigned char * BulletTypeClass::Construct(ObjectClass * aP1)
{
  int v3; // eax
  int v4; // eax

  ObjectTypeClass::ConstructFull(aP1); /*0x46bbc9*/
  *(&this->q1080) = 0; /*0x46bbd5*/
  *(&this->q1081) = 0; /*0x46bbdb*/
  *(&this->q1082) = 0; /*0x46bbe1*/
  *(&this->q1083) = 0; /*0x46bbe7*/
  *(&this->q1084) = 0; /*0x46bbed*/
  *(&this->q1085) = 0; /*0x46bbf3*/
  *(&this->q1086) = 1; /*0x46bbf9*/
  *(&this->q1087) = 0; /*0x46bc00*/
  *(&this->q1088) = 0; /*0x46bc06*/
  *(&this->q1089) = 0; /*0x46bc0c*/
  *(&this->q10C0) = 0; /*0x46bc12*/
  *(&this->q10C1) = 0; /*0x46bc18*/
  *(&this->q10C2) = 0; /*0x46bc1e*/
  *(&this->q10C3) = 1; /*0x46bc24*/
  *(&this->q10C4) = 0; /*0x46bc2b*/
  *(&this->q10C5) = 0; /*0x46bc31*/
  *(&this->q10C6) = 0; /*0x46bc37*/
  *(&this->q10C7) = 1; /*0x46bc3d*/
  this->acceleration = 3; /*0x46bc44*/
  this->spawnDelay = 3; /*0x46bc4a*/
  *(&this->q10C8) = 0; /*0x46bc50*/
  *(&this->q10C9) = 0; /*0x46bc59*/
  *(&this->q1100) = 0; /*0x46bc5f*/
  this->elasticity = 0; /*0x46bc65*/
  *(&this->q1101) = 0; /*0x46bc6c*/
  this->cluster = 1; /*0x46bc72*/
  this->airburstWeapon = 0; /*0x46bc7c*/
  this->shrapnelWeapon = 0; /*0x46bc82*/
  this->shrapnelCount = 0; /*0x46bc88*/
  this->detonationAltitude = 0; /*0x46bc8e*/
  *(&this->q1184) = 0; /*0x46bc94*/
  this->Acceleration = 1072168960; /*0x46bc9a*/
  this->Color = 0; /*0x46bca4*/
  this->trailer = 0; /*0x46bcaa*/
  this->rot = 0; /*0x46bcb0*/
  this->courseLockDuration = 0; /*0x46bcb6*/
  this->scaledSpawnDelay = 0; /*0x46bcbc*/
  *(&this->q1288) = 0; /*0x46bcc2*/
  this->arm = 0; /*0x46bcc8*/
  *(&this->q12C6) = 0; /*0x46bcce*/
  *(&this->q12C7) = 0; /*0x46bcd4*/
  *(&this->q12C8) = 0; /*0x46bcda*/
  *(&this->q12C9) = 0; /*0x46bce0*/
  *(_DWORD *)this = &(void*)(void*)&BulletTypeClass_vftable; /*0x46bce6*/
  this->vtable2 = &(void*)(void*)&BulletTypeClass_vftable; /*0x46bcec*/
  this->vtable3 = &(void*)(void*)&BulletTypeClass_vftable; /*0x46bcf2*/
  this->vtable4 = &(void*)(void*)&BulletTypeClass_vftable; /*0x46bcf9*/
  AbstractClass::GenerateUniqueID((int)(this + 4)); /*0x46bd00*/
  *(&this->q0E04) = 1; /*0x46bd05*/
  *(&this->u32_DC9) = 1; /*0x46bd0c*/
  *(&this->q0E00) = 0; /*0x46bd13*/
  *(&this->q0E01) = 0; /*0x46bd19*/
  *(&this->q0E02) = 1; /*0x46bd1f*/
  *(&this->q0E03) = 1; /*0x46bd26*/
  *(&this->q0E05) = 0; /*0x46bd2d*/
  if ( g_BulletTypeInitState < dword_A83C88 /*0x46bd65*/
    || (byte_A83C8D || !dword_A83C88)
    && dword_A83C94 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(BulletTypeClass_Array + 8))(
         &BulletTypeClass_Array,
         dword_A83C88 + dword_A83C94,
         0) )
  {
    v3 = g_BulletTypeInitState++; /*0x46bd72*/
    *((_DWORD *)dword_A83C84 + v3) = this; /*0x46bd81*/
  }
  if ( g_AnimManager < g_AnimTypePool /*0x46bdb8*/
    || (g_AnimPoolLocked || !g_AnimTypePool)
    && g_AnimManagerConfig > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(g_AnimPoolManager + 8))(
         &g_AnimPoolManager,
         g_AnimTypePool + g_AnimManagerConfig,
         0) )
  {
    v4 = g_AnimManager++; /*0x46bdc5*/
    *((_DWORD *)g_AnimPoolCount + v4) = this; /*0x46bdd4*/
  }
  return this; /*0x46bdd9*/
}
} // namespace gamemd
// 0x46BEE0
namespace gamemd {
WeaponTypeClass * * BulletTypeClass::LoadFromINI(unsigned char *** a2)
{
  char Bool_Overwrite; // al
  char v5; // cl
  char v6; // al
  char v7; // al
  char v8; // cl
  char v9; // al
  char v10; // al
  char v11; // cl
  char v12; // al
  char v13; // al
  char v14; // cl
  char v15; // al
  char v16; // dl
  char v17; // al
  char v18; // cl
  char v19; // al
  int v20; // eax
  char v21; // al
  int v22; // eax
  int v23; // eax
  int Int_Overwrite; // eax
  char v25; // cl
  char v26; // al
  char v27; // al
  int v28; // edx
  char v30; // [esp-Ch] [ebp-98h]
  char v31; // [esp-Ch] [ebp-98h]
  char v32; // [esp-Ch] [ebp-98h]
  int v33; // [esp-Ch] [ebp-98h]
  char v34; // [esp-Ch] [ebp-98h]
  int v35; // [esp-Ch] [ebp-98h]
  char v36; // [esp-Ch] [ebp-98h]
  int v37; // [esp+8h] [ebp-84h]
  int v38; // [esp+8h] [ebp-84h]
  int v39; // [esp+8h] [ebp-84h]
  char Destination[128]; // [esp+Ch] [ebp-80h] BYREF

  INIClass::ResetSection(a2); /*0x46bef3*/
  if ( !ObjectTypeClass::LoadFromINI((char *)a1, a2) ) /*0x46befb*/
    return 0; /*0x46c42a*/
  *(_DWORD *)(a1 + 752) = INIClass::ReadInt_Overwrite(a1 + 36, &unk_81B168, *(_DWORD *)(a1 + 752)); /*0x46bf21*/
  *(_DWORD *)(a1 + 732) = INIClass::ReadInt_Overwrite(a1 + 36, &off_81B164, *(_DWORD *)(a1 + 732)); /*0x46bf3b*/
  *(_DWORD *)(a1 + 736) = INIClass::ReadInt_Overwrite(a1 + 36, aCourselockdura, *(_DWORD *)(a1 + 736)); /*0x46bf55*/
  INIClass::ReadDouble_Overwrite(a1 + 36, (int)g_INI_Key_Elasticity, *(double *)(a1 + 712)); /*0x46bf71*/
  *(double *)(a1 + 712) = a2; /*0x46bf76*/
  *(_DWORD *)(a1 + 720) = INIClass::ReadInt_Overwrite(a1 + 36, aAcceleration, *(_DWORD *)(a1 + 720)); /*0x46bf90*/
  *(_DWORD *)(a1 + 724) = BuildingTypeClass::FindAnimByName(a1 + 36, g_INI_Key_Color, *(_DWORD *)(a1 + 724)); /*0x46bfaa*/
  *(_BYTE *)(a1 + 667) = INIClass::ReadBool_Overwrite(a1 + 36, aArcing, *(_BYTE *)(a1 + 667)); /*0x46bfc4*/
  *(_BYTE *)(a1 + 661) = INIClass::ReadBool_Overwrite(a1 + 36, aFloater, *(_BYTE *)(a1 + 661)); /*0x46bfde*/
  *(_BYTE *)(a1 + 662) = INIClass::ReadBool_Overwrite(a1 + 36, aSubjecttocliff, *(_BYTE *)(a1 + 662)); /*0x46bff8*/
  *(_BYTE *)(a1 + 663) = INIClass::ReadBool_Overwrite(a1 + 36, aSubjecttoeleva, *(_BYTE *)(a1 + 663)); /*0x46c012*/
  *(_BYTE *)(a1 + 664) = INIClass::ReadBool_Overwrite(a1 + 36, aSubjecttowalls, *(_BYTE *)(a1 + 664)); /*0x46c02c*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite(a1 + 36, aVeryhigh, *(_BYTE *)(a1 + 665)); /*0x46c041*/
  v5 = *(_BYTE *)(a1 + 666); /*0x46c046*/
  *(_BYTE *)(a1 + 665) = Bool_Overwrite; /*0x46c04c*/
  v6 = INIClass::ReadBool_Overwrite(a1 + 36, aShadow, v5); /*0x46c05b*/
  v30 = *(_BYTE *)(a1 + 668); /*0x46c068*/
  *(_BYTE *)(a1 + 666) = v6; /*0x46c06f*/
  *(_BYTE *)(a1 + 668) = INIClass::ReadBool_Overwrite(a1 + 36, aDropping, v30); /*0x46c07a*/
  v7 = INIClass::ReadBool_Overwrite(a1 + 36, g_INI_Key_Level, *(_BYTE *)(a1 + 669)); /*0x46c08f*/
  v8 = *(_BYTE *)(a1 + 670); /*0x46c094*/
  *(_BYTE *)(a1 + 669) = v7; /*0x46c09a*/
  v9 = INIClass::ReadBool_Overwrite(a1 + 36, aInviso_0, v8); /*0x46c0a9*/
  v31 = *(_BYTE *)(a1 + 671); /*0x46c0b6*/
  *(_BYTE *)(a1 + 670) = v9; /*0x46c0bd*/
  *(_BYTE *)(a1 + 671) = INIClass::ReadBool_Overwrite(a1 + 36, aProximity, v31); /*0x46c0c8*/
  v10 = INIClass::ReadBool_Overwrite(a1 + 36, aRanged, *(_BYTE *)(a1 + 672)); /*0x46c0dd*/
  v11 = *(_BYTE *)(a1 + 674); /*0x46c0e2*/
  *(_BYTE *)(a1 + 672) = v10; /*0x46c0e8*/
  v12 = INIClass::ReadBool_Overwrite(a1 + 36, aInaccurate, v11); /*0x46c0f7*/
  v32 = *(_BYTE *)(a1 + 675); /*0x46c104*/
  *(_BYTE *)(a1 + 674) = v12; /*0x46c10b*/
  *(_BYTE *)(a1 + 675) = INIClass::ReadBool_Overwrite(a1 + 36, aFlakscatter, v32); /*0x46c116*/
  v13 = INIClass::ReadBool_Overwrite(a1 + 36, aAa, *(_BYTE *)(a1 + 676)); /*0x46c12b*/
  v14 = *(_BYTE *)(a1 + 677); /*0x46c130*/
  *(_BYTE *)(a1 + 676) = v13; /*0x46c136*/
  v15 = INIClass::ReadBool_Overwrite(a1 + 36, aAg, v14); /*0x46c145*/
  v16 = *(_BYTE *)(a1 + 678); /*0x46c14a*/
  *(_BYTE *)(a1 + 677) = v15; /*0x46c150*/
  *(_BYTE *)(a1 + 678) = INIClass::ReadBool_Overwrite(a1 + 36, aDegenerates, v16); /*0x46c164*/
  v17 = INIClass::ReadBool_Overwrite(a1 + 36, aBouncy, *(_BYTE *)(a1 + 679)); /*0x46c179*/
  v18 = *(_BYTE *)(a1 + 660); /*0x46c17e*/
  *(_BYTE *)(a1 + 679) = v17; /*0x46c184*/
  v19 = INIClass::ReadBool_Overwrite(a1 + 36, aAirburst, v18); /*0x46c193*/
  v33 = *(_DWORD *)(a1 + 684); /*0x46c1a0*/
  *(_BYTE *)(a1 + 660) = v19; /*0x46c1a7*/
  *(_DWORD *)(a1 + 684) = INIClass::ReadInt_Overwrite(a1 + 36, aCluster, v33); /*0x46c1b2*/
  *(_BYTE *)(a1 + 748) = INIClass::ReadBool_Overwrite(a1 + 36, aScalable, *(_BYTE *)(a1 + 748)); /*0x46c1e2*/
  if ( (int)INIClass::GetString( /*0x46c1ef*/
              a2,
              (unsigned __int8 *)(a1 + 36),
              (unsigned __int8 *)g_INI_Key_Image,
              &g_INI_DefaultBuffer,
              (char *)(a1 + 504),
              25) > 0 )
  {
    v37 = *(_DWORD *)(a1 + 728); /*0x46c20a*/
    if ( INIClass::GetString( /*0x46c219*/
           (unsigned __int8 ***)&CCINIClass_INI_Art,
           (unsigned __int8 *)(a1 + 504),
           (unsigned __int8 *)aTrailer,
           &g_INI_DefaultBuffer,
           Destination,
           128) )
    {
      v20 = AnimTypeClass::FindOrCreate(Destination); /*0x46c226*/
    }
    else
    {
      v20 = v37; /*0x46c22d*/
    }
    *(_DWORD *)(a1 + 728) = v20; /*0x46c231*/
    *(_DWORD *)(a1 + 740) = INIClass::ReadInt_Overwrite(a1 + 504, aSpawndelay, *(_DWORD *)(a1 + 740)); /*0x46c24e*/
    v21 = INIClass::ReadBool_Overwrite(a1 + 504, aRotates, *(_BYTE *)(a1 + 673) == 0); /*0x46c26b*/
    v34 = *(_BYTE *)(a1 + 759); /*0x46c27d*/
    *(_BYTE *)(a1 + 673) = v21 == 0; /*0x46c287*/
    *(_BYTE *)(a1 + 759) = INIClass::ReadBool_Overwrite(a1 + 504, g_INI_Key_Flat, v34); /*0x46c292*/
  }
  v38 = *(_DWORD *)(a1 + 688); /*0x46c2ad*/
  if ( INIClass::GetString( /*0x46c2b9*/
         a2,
         (unsigned __int8 *)(a1 + 36),
         (unsigned __int8 *)aAirburstweapon,
         &g_INI_DefaultBuffer,
         Destination,
         128) )
  {
    v22 = InfantryTypeClass::Find(Destination); /*0x46c2c6*/
  }
  else
  {
    v22 = v38; /*0x46c2cd*/
  }
  *(_DWORD *)(a1 + 688) = v22; /*0x46c2db*/
  v39 = *(_DWORD *)(a1 + 692); /*0x46c2f4*/
  if ( INIClass::GetString( /*0x46c2f8*/
         a2,
         (unsigned __int8 *)(a1 + 36),
         (unsigned __int8 *)aShrapnelweapon,
         &g_INI_DefaultBuffer,
         Destination,
         128) )
  {
    v23 = InfantryTypeClass::Find(Destination); /*0x46c305*/
  }
  else
  {
    v23 = v39; /*0x46c30c*/
  }
  v35 = *(_DWORD *)(a1 + 696); /*0x46c318*/
  *(_DWORD *)(a1 + 692) = v23; /*0x46c31f*/
  *(_DWORD *)(a1 + 696) = INIClass::ReadInt_Overwrite(a1 + 36, aShrapnelcount, v35); /*0x46c32a*/
  Int_Overwrite = INIClass::ReadInt_Overwrite(a1 + 36, aDetonationalti, *(_DWORD *)(a1 + 700)); /*0x46c33f*/
  v25 = *(_BYTE *)(a1 + 704); /*0x46c344*/
  *(_DWORD *)(a1 + 700) = Int_Overwrite; /*0x46c34a*/
  v26 = INIClass::ReadBool_Overwrite(a1 + 36, aVertical, v25); /*0x46c359*/
  v36 = *(_BYTE *)(a1 + 681); /*0x46c366*/
  *(_BYTE *)(a1 + 704) = v26; /*0x46c36d*/
  *(_BYTE *)(a1 + 681) = INIClass::ReadBool_Overwrite(a1 + 36, aFirerspalette, v36); /*0x46c378*/
  *(_BYTE *)(a1 + 756) = INIClass::ReadInt_Overwrite(a1 + 504, aAnimlow, *(unsigned __int8 *)(a1 + 756)); /*0x46c399*/
  v27 = INIClass::ReadInt_Overwrite(a1 + 504, aAnimhigh, *(unsigned __int8 *)(a1 + 757)); /*0x46c3b1*/
  v28 = *(unsigned __int8 *)(a1 + 758); /*0x46c3bd*/
  *(_BYTE *)(a1 + 757) = v27; /*0x46c3c3*/
  *(_BYTE *)(a1 + 758) = INIClass::ReadInt_Overwrite(a1 + 504, aAnimrate, v28); /*0x46c3d5*/
  *(_BYTE *)(a1 + 680) = INIClass::ReadBool_Overwrite(a1 + 504, aAnimpalette, *(_BYTE *)(a1 + 680)); /*0x46c3f2*/
  if ( !*(_BYTE *)(a1 + 670) ) /*0x46c3f8*/
    ObjectTypeClass::Load2DArt(a1); /*0x46c406*/
  if ( *(_BYTE *)(a1 + 566) ) /*0x46c40b*/
    VoxelAnimType::LoadAnim((char *)a1); /*0x46c417*/
  return 1; /*0x46c41c*/
}
} // namespace gamemd
// 0x46C560
namespace gamemd {
int BulletTypeClass::ProcessPower(int * a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  int v13; // ecx
  int v14; // edx
  int v15; // eax
  int v16; // ecx
  int v17; // edx
  int v18; // edx

  v3 = AbstractTypeClass::ProcessPower((char *)this, a2); /*0x46c569*/
  IDA_LOBYTE(v3) = this->airburst; /*0x46c56e*/
  Power::FlagProcess(a2, v3); /*0x46c577*/
  IDA_LOBYTE(v4) = this->shadow; /*0x46c57c*/
  Power::FlagProcess(a2, v4); /*0x46c585*/
  IDA_LOBYTE(v5) = this->arcing; /*0x46c58a*/
  v6 = Power::FlagProcess(a2, v5); /*0x46c593*/
  IDA_LOBYTE(v6) = this->dropping; /*0x46c598*/
  Power::FlagProcess(a2, v6); /*0x46c5a1*/
  IDA_LOBYTE(v7) = this->level; /*0x46c5a6*/
  Power::FlagProcess(a2, v7); /*0x46c5af*/
  IDA_LOBYTE(v8) = this->inviso; /*0x46c5b4*/
  v9 = Power::FlagProcess(a2, v8); /*0x46c5bd*/
  IDA_LOBYTE(v9) = this->proximity; /*0x46c5c2*/
  Power::FlagProcess(a2, v9); /*0x46c5cb*/
  IDA_LOBYTE(v10) = this->ranged; /*0x46c5d0*/
  Power::FlagProcess(a2, v10); /*0x46c5d9*/
  IDA_LOBYTE(v11) = this->noRotate; /*0x46c5de*/
  v12 = Power::FlagProcess(a2, v11); /*0x46c5e7*/
  IDA_LOBYTE(v12) = this->inaccurate; /*0x46c5ec*/
  Power::FlagProcess(a2, v12); /*0x46c5f5*/
  IDA_LOBYTE(v13) = this->flakScatter; /*0x46c5fa*/
  Power::FlagProcess(a2, v13); /*0x46c603*/
  IDA_LOBYTE(v14) = this->AA; /*0x46c608*/
  v15 = Power::FlagProcess(a2, v14); /*0x46c611*/
  IDA_LOBYTE(v15) = this->q2A5; /*0x46c616*/
  Power::FlagProcess(a2, v15); /*0x46c61f*/
  IDA_LOBYTE(v16) = this->degenerates; /*0x46c624*/
  Power::FlagProcess(a2, v16); /*0x46c62d*/
  IDA_LOBYTE(v17) = this->bouncy; /*0x46c632*/
  Power::FlagProcess(a2, v17); /*0x46c63b*/
  Checksummer::Add_double(this->elasticity, this->Acceleration); /*0x46c650*/
  Power::TimerProcess(this->acceleration); /*0x46c65e*/
  Power::TimerProcess(this->rot); /*0x46c66c*/
  Power::TimerProcess(this->arm); /*0x46c67a*/
  IDA_LOBYTE(v18) = this->flat; /*0x46c67f*/
  return Power::FlagProcess(a2, v18); /*0x46c68d*/
}
} // namespace gamemd
// 0x46C890
namespace gamemd {
BulletTypeClass * BulletTypeClass::ddtor(char a2)
{
  int v3; // eax
  int v4; // eax

  *this = &(void*)(void*)&BulletTypeClass_vftable; /*0x46c896*/
  this->vtable2 = &(void*)(void*)&BulletTypeClass_vftable; /*0x46c89c*/
  this->vtable3 = &(void*)(void*)&BulletTypeClass_vftable; /*0x46c8a3*/
  this->vtable4 = &(void*)(void*)&BulletTypeClass_vftable; /*0x46c8aa*/
  AbstractClass::AnnounceExpiredPointer(1); /*0x46c8b1*/
  v3 = (*(int (__thiscall **)(int *, void ***))(g_AnimPoolManager + 16))(&g_AnimPoolManager, &this); /*0x46c8ca*/
  if ( v3 != -1 && v3 < g_AnimManager && v3 < --g_AnimManager ) /*0x46c8e5*/
  {
    do /*0x46c8fd*/
    {
      ++v3; /*0x46c8ed*/
      *((_DWORD *)g_AnimPoolCount + v3 - 1) = *((_DWORD *)g_AnimPoolCount + v3); /*0x46c8f1*/
    }
    while ( v3 < g_AnimManager ); /*0x46c8fd*/
  }
  v4 = (*(int (__thiscall **)(int *, void ***))(BulletTypeClass_Array + 16))(&BulletTypeClass_Array, &this); /*0x46c913*/
  if ( v4 != -1 && v4 < g_BulletTypeInitState && v4 < --g_BulletTypeInitState ) /*0x46c92e*/
  {
    do /*0x46c946*/
    {
      ++v4; /*0x46c936*/
      *((_DWORD *)dword_A83C84 + v4 - 1) = *((_DWORD *)dword_A83C84 + v4); /*0x46c93a*/
    }
    while ( v4 < g_BulletTypeInitState ); /*0x46c946*/
  }
  ObjectTypeClass::Destruct(); /*0x46c94a*/
  if ( (a2 & 1) != 0 ) /*0x46c954*/
    RA2_OPDEL(); /*0x46c957*/
  return this; /*0x46c961*/
}
} // namespace gamemd
// 0x69FC10
namespace gamemd {
int BulletTypeClass::ProcessImpact(int a1)
{
  int v1; // esi
  int v2; // edi
  int v3; // eax
  int v4; // ecx
  int v5; // ecx
  _DWORD *v6; // ecx
  _WORD *v7; // ebp
  _WORD *v8; // eax
  _DWORD *v9; // ecx
  _DWORD *v11; // ecx
  _BYTE *v12; // ecx
  void **v13; // eax
  int *v14; // ecx
  int v15; // ecx
  _BYTE *v16; // eax
  int v17; // eax
  int v18; // ecx
  _DWORD *v19; // eax
  _BYTE *v20; // ecx
  _DWORD *v21; // ecx
  char v22; // [esp-4h] [ebp-24h]
  int v23; // [esp+10h] [ebp-10h] BYREF
  int v24; // [esp+14h] [ebp-Ch]
  int v25; // [esp+18h] [ebp-8h]

  v1 = a1; /*0x69fc16*/
  v2 = a1 - 4; /*0x69fc28*/
  v3 = *(unsigned __int8 *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 444))(*(_DWORD *)(a1 + 8)) + 284); /*0x69fc31*/
  v4 = *(_DWORD *)(v2 + 28); /*0x69fc33*/
  if ( v3 != v4 ) /*0x69fc38*/
  {
    *(_DWORD *)(v2 + 32) = v4; /*0x69fc3a*/
    *(_DWORD *)(v2 + 28) = v3; /*0x69fc43*/
    Timer::Start(&v23, 3); /*0x69fc46*/
    *(_DWORD *)(v2 + 36) = v23; /*0x69fc57*/
    *(_DWORD *)(v2 + 40) = v24; /*0x69fc5d*/
    *(_DWORD *)(v2 + 44) = v25; /*0x69fc64*/
    *(_DWORD *)(v2 + 48) = 3; /*0x69fc67*/
  }
  if ( *(_DWORD *)(v1 + 84) == -1 || !*(_BYTE *)(v1 + 95) ) /*0x69fc7a*/
  {
    v5 = *(_DWORD *)(*(_DWORD *)(v1 + 8) + 1444); /*0x69fd16*/
    if ( v5 /*0x69fd54*/
      && (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 44))(v5) == 11
      && (v6 = *(_DWORD **)(v1 + 8),
          v7 = (_WORD *)(v6[361] + 36),
          v8 = (_WORD *)(*(int (__thiscall **)(_DWORD *, int *))(*v6 + 440))(v6, &a1),
          *v8 == *v7)
      && v8[1] == v7[1] )
    {
      v9 = *(_DWORD **)(v2 + 12); /*0x69fd56*/
      if ( !v9[358] ) /*0x69fd59*/
        goto LABEL_20; /*0x69fd5f*/
    }
    else
    {
      v11 = *(_DWORD **)(v1 + 8); /*0x69fd7f*/
      if ( v11[43] != 5 /*0x69fddc*/
        || *(_BYTE *)(v1 + 95)
        || *(_DWORD *)(v1 + 48) == g_OverlayTypeConfig && *(_QWORD *)(v1 + 52) == qword_B077FC
        || v11[39] != *(_DWORD *)(v1 + 48)
        || v11[40] != *(_DWORD *)(v1 + 52)
        || v11[41] != *(_DWORD *)(v1 + 56) )
      {
        if ( TimerClass::Active((int)(v11 + 226)) ) /*0x69fe28*/
        {
          *(_BYTE *)(v1 + 94) = 1; /*0x69fe35*/
          goto LABEL_32; /*0x69fe35*/
        }
        if ( *(_BYTE *)(v1 + 94) ) /*0x69ff5d*/
        {
          *(_BYTE *)(v1 + 94) = 0; /*0x69ff62*/
          (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(v1 + 8) + 396))(*(_DWORD *)(v1 + 8), 0); /*0x69ff6b*/
          v16 = *(_BYTE **)(v1 + 8); /*0x69ff71*/
          if ( !v16[144] || v16[129] || v16[141] ) /*0x69ff84*/
            return 0; /*0x69ff95*/
        }
        if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v1 + 8) + 388))(*(_DWORD *)(v1 + 8)) == 5 /*0x69ffc4*/
          && !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v1 + 16))(v1)
          || (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v1 + 8) + 388))(*(_DWORD *)(v1 + 8)) == 16 )
        {
          goto LABEL_32; /*0x69ffc4*/
        }
        if ( !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v1 + 16))(v1) ) /*0x69ffcd*/
        {
          v17 = *(_DWORD *)(v1 + 8); /*0x69ffd8*/
          if ( *(_DWORD *)(v17 + 1504) == -1 ) /*0x69ffe1*/
          {
            if ( *(_BYTE *)(v17 + 973) ) /*0x69ffe7*/
            {
              if ( *(_DWORD *)(v2 + 64) != g_OverlayTypeConfig || *(_QWORD *)(v2 + 68) != qword_B077FC ) /*0x6a0006*/
              {
                *(_DWORD *)(v2 + 64) = g_OverlayTypeConfig; /*0x6a0015*/
                *(_QWORD *)(v2 + 68) = qword_B077FC; /*0x6a001d*/
                *(_BYTE *)(v2 + 99) = 0; /*0x6a0029*/
              }
              *(_DWORD *)(v1 + 76) = 0; /*0x6a002c*/
              *(_DWORD *)(v1 + 80) = 0; /*0x6a002f*/
            }
            else
            {
              v18 = *(_DWORD *)(v17 + 1444); /*0x6a0037*/
              if ( v18 ) /*0x6a003f*/
              {
                v19 = (_DWORD *)(*(int (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v18 + 76))( /*0x6a004d*/
                                  v18,
                                  &v23,
                                  *(_DWORD *)(v1 + 8));
                (*(void (__stdcall **)(int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v1 + 68))(v1, *v19, v19[1], v19[2]); /*0x6a0069*/
              }
            }
            goto LABEL_32; /*0x6a0032*/
          }
        }
        v20 = *(_BYTE **)(v1 + 8); /*0x6a0074*/
        if ( v20[981] /*0x6a00ab*/
          && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v20 + 388))(v20) != 7
          && (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v1 + 16))(v1)
          && !(*(unsigned __int8 (__thiscall **)(_DWORD, int))(**(_DWORD **)(v1 + 8) + 716))(
                *(_DWORD *)(v1 + 8),
                v1 + 48) )
        {
          if ( *(_DWORD *)(v2 + 64) != g_OverlayTypeConfig || *(_QWORD *)(v2 + 68) != qword_B077FC ) /*0x6a00cc*/
          {
            *(_DWORD *)(v2 + 64) = g_OverlayTypeConfig; /*0x6a00db*/
            *(_QWORD *)(v2 + 68) = qword_B077FC; /*0x6a00e3*/
            *(_BYTE *)(v2 + 99) = 0; /*0x6a00ef*/
          }
          v21 = *(_DWORD **)(v2 + 12); /*0x6a00f2*/
          if ( v21[358] ) /*0x6a00f5*/
          {
            FootClass::ClearPathIndex(v21); /*0x6a010d*/
            if ( (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(v2 + 12) + 1156))( /*0x6a011a*/
                   *(_DWORD *)(v2 + 12),
                   0,
                   1) )
            {
              return 0; /*0x6a0131*/
            }
          }
          else
          {
            (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v21 + 1152))(v21, 0, 1); /*0x6a0102*/
          }
          goto LABEL_32; /*0x6a0108*/
        }
        IDA_LOBYTE(a1) = 0; /*0x6a013e*/
        WalkLocomotion::Update(v1 - 4, &a1, 1, 0); /*0x6a0142*/
        if ( (_BYTE)a1 ) /*0x6a014b*/
          return 0; /*0x6a0156*/
        if ( !*(_BYTE *)(*(_DWORD *)(v1 + 8) + 144) ) /*0x6a015c*/
          return 0; /*0x6a016d*/
        v22 = 0; /*0x6a0170*/
        goto LABEL_81; /*0x6a0170*/
      }
      v9 = *(_DWORD **)(v2 + 12); /*0x69fdde*/
      if ( !v9[358] ) /*0x69fde7*/
      {
  LABEL_20:
        (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v9 + 1152))(v9, 0, 1); /*0x69fd65*/
        return 0; /*0x69fd79*/
      }
    }
    FootClass::ClearPathIndex(v9); /*0x69fe00*/
    (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(v2 + 12) + 1156))(*(_DWORD *)(v2 + 12), 0, 1); /*0x69fe0d*/
    return 0; /*0x69fe1c*/
  }
  if ( WalkLocomotion::ProcessCollision(v1 - 4, 0) || !*(_BYTE *)(*(_DWORD *)(v1 + 8) + 144) ) /*0x69fc96*/
    return 0; /*0x69fc9c*/
  if ( *(_DWORD *)(v1 + 84) != -1 /*0x69fcd4*/
    || !(*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v1 + 16))(v1)
    && *(_DWORD *)(*(_DWORD *)(v1 + 8) + 1504) == -1
    || (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v1 + 8) + 44))(*(_DWORD *)(v1 + 8)) == 1
    && *(_BYTE *)(*(_DWORD *)(v1 + 8) + 1745) )
  {
    goto LABEL_32; /*0x69fcda*/
  }
  IDA_LOBYTE(a1) = 0; /*0x69fcea*/
  WalkLocomotion::Update(v1 - 4, &a1, 1, 0); /*0x69fcee*/
  if ( (_BYTE)a1 || !*(_BYTE *)(*(_DWORD *)(v1 + 8) + 144) ) /*0x69fd00*/
    return 0; /*0x69fd06*/
  v22 = 1; /*0x69fd0c*/
  LABEL_81:
  WalkLocomotion::ProcessCollision(v1 - 4, v22); /*0x6a0171*/
  if ( !*(_BYTE *)(*(_DWORD *)(v1 + 8) + 144) ) /*0x6a017b*/
    return 0; /*0x6a018a*/
  LABEL_32:
  if ( (*(unsigned __int8 (__stdcall **)(int))(*(_DWORD *)v1 + 128))(v1) ) /*0x69fe3c*/
  {
    if ( !((int)g_CurrentFrame % 8) /*0x69fe6e*/
      && !*(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v1 + 8) + 132))(*(_DWORD *)(v1 + 8)) + 3433) )
    {
      v12 = *(_BYTE **)(v1 + 8); /*0x69fe76*/
      if ( !v12[140] && *(_DWORD *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v12 + 444))(v12) + 236) == 2 ) /*0x69fe90*/
      {
        if ( g_RulesClass_Instance->FlamingInfantry ) /*0x69fe97*/
        {
          v13 = (void **)RA2_OPNEW(0x1C8u); /*0x69fea4*/
          if ( v13 ) /*0x69feae*/
          {
            v14 = (int *)(*(_DWORD *)(v1 + 8) + 156); /*0x69feb4*/
            v23 = *v14; /*0x69fec5*/
            v24 = v14[1]; /*0x69fecc*/
            v25 = v14[2]; /*0x69fed8*/
            AnimClass::ctor(v13, (void *)g_RulesClass_Instance->FlamingInfantry, &v23, 0, 1, (void *)0x600, 0, 0); /*0x69feeb*/
          }
        }
      }
    }
  }
  if ( *(_DWORD *)(v1 + 48) == g_OverlayTypeConfig /*0x69ff1e*/
    && *(_DWORD *)(v1 + 52) == (_DWORD)qword_B077FC
    && *(_QWORD *)(v1 + 56) == IDA___PAIR64__(g_OverlayTypeConfig, IDA_HIDWORD(qword_B077FC))
    && *(_QWORD *)(v1 + 64) == qword_B077FC )
  {
    v15 = *(_DWORD *)(v1 + 8); /*0x69ff25*/
    if ( *(_DWORD *)(v15 + 1504) == -1 && *(double *)(v15 + 1400) > 0.0 ) /*0x69ff41*/
      (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v15 + 1348))(v15, 0, 0); /*0x69ff47*/
  }
  return (*(int (__stdcall **)(int))(*(_DWORD *)v1 + 16))(v1); /*0x69fd72*/
}
} // namespace gamemd
// 0x46C4F0
namespace gamemd {
unsigned int * BulletTypeClass::GetROF(unsigned int * a1, int * a2)
{
  int GroundHeight; // eax
  int v3; // ecx
  int v5; // [esp+0h] [ebp-Ch] BYREF
  int v6; // [esp+4h] [ebp-8h]
  int v7; // [esp+8h] [ebp-4h]

  v5 = *a2; /*0x46c4f9*/
  v6 = a2[1]; /*0x46c50a*/
  v7 = a2[2]; /*0x46c511*/
  GroundHeight = Cell::GetGroundHeight(&v5); /*0x46c515*/
  v3 = v7; /*0x46c51a*/
  if ( v7 <= GroundHeight ) /*0x46c520*/
    v3 = Cell::GetGroundHeight(&v5) + 1; /*0x46c533*/
  *a1 = v5; /*0x46c53f*/
  a1[1] = v6; /*0x46c545*/
  a1[2] = v3; /*0x46c549*/
  return a1; /*0x46c54c*/
}
} // namespace gamemd
// 0x46C6A0
namespace gamemd {
int BulletTypeClass::SaveLoad_Prefix(ObjectTypeClass * aP0, int aP1)
{
  int result; // eax

  result = ObjectTypeClass::LoadCleanup((int)aP0, aP1); /*0x46c6ab*/
  if ( result >= 0 ) /*0x46c6b2*/
  {
    if ( aP0 ) /*0x46c6b6*/
    {
      ObjectTypeClass::Construct(aP0, (int)&aP1); /*0x46c6bf*/
      *aP0 = &(void*)(void*)&BulletTypeClass_vftable; /*0x46c6c4*/
      aP0[1] = &(void*)(void*)&BulletTypeClass_vftable; /*0x46c6ca*/
      aP0[2] = &(void*)(void*)&BulletTypeClass_vftable; /*0x46c6d1*/
      aP0[3] = &(void*)(void*)&BulletTypeClass_vftable; /*0x46c6d8*/
    }
    VoxelAnimType::LoadAnim((char *)aP0); /*0x46c6e1*/
    ObjectTypeClass::Load2DArt((char *)aP0); /*0x46c6e8*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP0 + 182); /*0x46c6f9*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP0 + 172); /*0x46c70a*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, aP0 + 173); /*0x46c71b*/
    return 0; /*0x46c720*/
  }
  return result; /*0x46c722*/
}
} // namespace gamemd
// 0x46C730
namespace gamemd {
int BulletTypeClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, ObjectTypeClass * aP1, int aP2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_PrefixWrapper(aP0, aP1, aP2); /*0x46c73f*/
  if ( result >= 0 ) /*0x46c746*/
    return 0; /*0x46c748*/
  return result; /*0x46c74a*/
}
} // namespace gamemd
// 0x46C750
namespace gamemd {
int BulletTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x46c756*/
    return -2147467261; /*0x46c758*/
  *a2 = 1525862007; /*0x46c766*/
  a2[1] = 298976820; /*0x46c76e*/
  a2[2] = 1610654892; /*0x46c777*/
  a2[3] = -1252326136; /*0x46c780*/
  return 0; /*0x46c75d*/
}
} // namespace gamemd
// 0x46C820
namespace gamemd {
int BulletTypeClass::GetWarhead(int a2, int a3)
{
  int result; // eax

  a2 = a2; /*0x46c820*/
  if ( a2 == *(&this->CourseLockDuration2) ) /*0x46c82c*/
    *(&this->CourseLockDuration2) = 0; /*0x46c82e*/
}
} // namespace gamemd
// 0x46C850
namespace gamemd {
int BulletTypeClass::GetTypeIdentifier()
{
  return 9; /*0x46c855*/
}
} // namespace gamemd
// 0x46C860
namespace gamemd {
int BulletTypeClass::GetObjectSize()
{
  return 760; /*0x46c865*/
}
} // namespace gamemd
// 0x46C870
namespace gamemd {
char BulletTypeClass::Stub(int a1, int a2)
{
  return 0; /*0x46c872*/
}
} // namespace gamemd
// 0x46C880
namespace gamemd {
int BulletTypeClass::StubReturnFalse(int a1)
{
  return 0; /*0x46c882*/
}
} // namespace gamemd
// 0x475150
namespace gamemd {
char BulletTypeClass::ReadTrajectoryFlags(unsigned char * Block, char * a3, int a4)
{
  char v4; // bl
  char *v5; // ebp
  int v6; // edx
  int v8; // [esp+4h] [ebp-88h]
  char Source[128]; // [esp+Ch] [ebp-80h] BYREF

  v4 = 0; /*0x47515e*/
  Source[0] = 0; /*0x475166*/
  if ( !a4 || g_SuperWeaponTypeArray <= 0 ) /*0x475177*/
    return 1; /*0x475177*/
  v5 = (char *)g_SuperWeaponTypeCount; /*0x47517e*/
  v8 = g_SuperWeaponTypeArray; /*0x475186*/
  do /*0x475213*/
  {
    v6 = *(_DWORD *)v5; /*0x47518a*/
    if ( ((1 << *(_DWORD *)(*(_DWORD *)v5 + 184)) & a4) != 0 ) /*0x4751a3*/
    {
      if ( v4 ) /*0x4751a7*/
        strcat(Source, Delimiter); /*0x4751ce*/
      strcat(Source, (const char *)(v6 + 36)); /*0x4751fa*/
      v4 = Source[0]; /*0x475203*/
    }
    v5 += 4; /*0x47520b*/
    --v8; /*0x47520f*/
  }
  while ( v8 ); /*0x475213*/
  if ( v4 ) /*0x47521e*/
    return INIClass::SetString(Block, a3, Source); /*0x475239*/
  else
    return 1; /*0x475248*/
}
} // namespace gamemd