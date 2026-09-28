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
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x465450
namespace gamemd {
BuildingTypeClass * * BulletTypeClass::ReadArmor()
{
  int v1; // edi
  char *v2; // ecx
  unsigned int *v3; // esi
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
      v3 = operator new(0x20u); /*0x46549a*/
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
    v6 = *((unsigned int *)g_TriggerTypeCount + i); /*0x4654f7*/
    Destination[0] = 0; /*0x465500*/
    INIClass::GetString( /*0x46550e*/
      (uint8_t ***)CCINIClass_INI_Rules,
      (uint8_t *)(v6 + 36),
      (uint8_t *)aTotile,
      0,
      Destination,
      60);
    v7 = Entity_Read(Destination); /*0x465517*/
    if ( v7 >= 0 && v7 < g_TechnoClassCount ) /*0x465526*/
      *(unsigned int *)(v6 + 3672) = *((unsigned int *)g_FrameCounter + v7); /*0x465531*/
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
    v2 = *((unsigned int *)g_TriggerTypeCount + i); /*0x465cdc*/
    Destination[0] = 0; /*0x465cef*/
    INIClass::GetString( /*0x465cf5*/
      (uint8_t ***)CCINIClass_INI_Rules,
      (uint8_t *)(v2 + 36),
      (uint8_t *)aTotile,
      0,
      Destination,
      60);
    v3 = Entity_Read(Destination); /*0x465cfe*/
    if ( v3 >= 0 && v3 < g_TechnoClassCount ) /*0x465d0d*/
      v2->u32_E58 = *((unsigned int *)g_FrameCounter + v3); /*0x465d18*/
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

  ObjectTypeClass::ConstructFull((int *)this, aP1); /*0x46bbc9*/
  this->airburst = 0; /*0x46bbd5*/
  this->floater = 0; /*0x46bbdb*/
  this->subjectToCliffs = 0; /*0x46bbe1*/
  this->subjectToElevation = 0; /*0x46bbe7*/
  this->subjectToWalls = 0; /*0x46bbed*/
  this->veryHigh = 0; /*0x46bbf3*/
  this->shadow = 1; /*0x46bbf9*/
  this->arcing = 0; /*0x46bc00*/
  this->dropping = 0; /*0x46bc06*/
  this->level = 0; /*0x46bc0c*/
  this->inviso = 0; /*0x46bc12*/
  this->proximity = 0; /*0x46bc18*/
  this->ranged = 0; /*0x46bc1e*/
  this->noRotate = 1; /*0x46bc24*/
  this->inaccurate = 0; /*0x46bc2b*/
  this->flakScatter = 0; /*0x46bc31*/
  this->AA = 0; /*0x46bc37*/
  this->q2A5 = 1; /*0x46bc3d*/
  this->acceleration = 3; /*0x46bc44*/
  this->spawnDelay = 3; /*0x46bc4a*/
  this->degenerates = 0; /*0x46bc50*/
  this->bouncy = 0; /*0x46bc59*/
  this->animPalette = 0; /*0x46bc5f*/
  this->elasticity = 0; /*0x46bc65*/
  this->firersPalette = 0; /*0x46bc6c*/
  this->cluster = 1; /*0x46bc72*/
  this->airburstWeapon = 0; /*0x46bc7c*/
  this->shrapnelWeapon = 0; /*0x46bc82*/
  this->shrapnelCount = 0; /*0x46bc88*/
  this->detonationAltitude = 0; /*0x46bc8e*/
  this->vertical = 0; /*0x46bc94*/
  this->Acceleration = 1072168960; /*0x46bc9a*/
  this->Color = 0; /*0x46bca4*/
  this->trailer = 0; /*0x46bcaa*/
  this->rot = 0; /*0x46bcb0*/
  this->courseLockDuration = 0; /*0x46bcb6*/
  this->scaledSpawnDelay = 0; /*0x46bcbc*/
  this->scalable = 0; /*0x46bcc2*/
  this->arm = 0; /*0x46bcc8*/
  this->animLow = 0; /*0x46bcce*/
  this->animHigh = 0; /*0x46bcd4*/
  this->animRate = 0; /*0x46bcda*/
  this->flat = 0; /*0x46bce0*/
  *(unsigned int *)this->gap0 = (void*)&BulletTypeClass_vftable; /*0x46bce6*/
  *(unsigned int *)&this->gap0[4] = (void*)&BulletTypeClass_vftable; /*0x46bcec*/
  *(unsigned int *)&this->gap0[8] = (void*)&BulletTypeClass_vftable; /*0x46bcf2*/
  *(unsigned int *)&this->gap0[12] = (void*)&BulletTypeClass_vftable; /*0x46bcf9*/
  AbstractClass::GenerateUniqueID((AbstractClass *)&this->gap0[4]); /*0x46bd00*/
  this->q234 = 1; /*0x46bd05*/
  this->q22F = 1; /*0x46bd0c*/
  this->q230 = 0; /*0x46bd13*/
  this->q231 = 0; /*0x46bd19*/
  this->q232 = 1; /*0x46bd1f*/
  this->q233 = 1; /*0x46bd26*/
  this->q235 = 0; /*0x46bd2d*/
  if ( dword_A83C90 < dword_A83C88 /*0x46bd65*/
    || (unk_A83C8D || !dword_A83C88)
    && dword_A83C94 > 0
    && (*(uint8_t (__thiscall **)(unsigned int *, int, unsigned int))(dword_A83C80 + 8))(
         &dword_A83C80,
         dword_A83C88 + dword_A83C94,
         0) )
  {
    v3 = dword_A83C90++; /*0x46bd72*/
    *((unsigned int *)unk_A83C84 + v3) = this; /*0x46bd81*/
  }
  if ( g_BuildingLoadQueue_Array.LightBlueTint < g_BuildingLoadQueue_Array.LightRedTint /*0x46bdb8*/
    || (IDA_BYTE1(g_BuildingLoadQueue_Array.LightGreenTint) || !g_BuildingLoadQueue_Array.LightRedTint)
    && g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] > 0
    && (*(uint8_t (__thiscall **)(int *, int, unsigned int))(g_BuildingLoadQueue_Array.LightVisibility + 8))(
         &g_BuildingLoadQueue_Array.LightVisibility,
         g_BuildingLoadQueue_Array.LightRedTint + g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0],
         0) )
  {
    v4 = g_BuildingLoadQueue_Array.LightBlueTint++; /*0x46bdc5*/
    *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v4) = this; /*0x46bdd4*/
  }
  return this->gap0; /*0x46bdd9*/
}
} // namespace gamemd
// 0x46BEE0
namespace gamemd {
WeaponTypeClass * * BulletTypeClass::LoadFromINI(unsigned char *** a2)
{
  int v3; // ecx
  int v4; // esi
  char Bool_Overwrite; // al
  char v7; // cl
  char v8; // al
  char v9; // al
  char v10; // cl
  char v11; // al
  char v12; // al
  char v13; // cl
  char v14; // al
  char v15; // al
  char v16; // cl
  char v17; // al
  char v18; // dl
  char v19; // al
  char v20; // cl
  char v21; // al
  unsigned int *v22; // eax
  char v23; // al
  int v24; // eax
  int v25; // eax
  int Int_Overwrite; // eax
  char v27; // cl
  char v28; // al
  char v29; // al
  int v30; // edx
  char v32; // [esp-Ch] [ebp-98h]
  char v33; // [esp-Ch] [ebp-98h]
  char v34; // [esp-Ch] [ebp-98h]
  int v35; // [esp-Ch] [ebp-98h]
  char v36; // [esp-Ch] [ebp-98h]
  int v37; // [esp-Ch] [ebp-98h]
  char v38; // [esp-Ch] [ebp-98h]
  unsigned int *v39; // [esp+8h] [ebp-84h]
  int v40; // [esp+8h] [ebp-84h]
  int v41; // [esp+8h] [ebp-84h]
  char Destination[128]; // [esp+Ch] [ebp-80h] BYREF

  v4 = v3; /*0x46beef*/
  INIClass::ResetSection((INIClass *)this); /*0x46bef3*/
  if ( !ObjectTypeClass::LoadFromINI((ObjectTypeClass *)v4, (uint8_t ***)this) ) /*0x46befb*/
    return 0; /*0x46c42a*/
  *(unsigned int *)(v4 + 752) = INIClass::ReadInt_Overwrite( /*0x46bf21*/
                            this->gap0,
                            (uint8_t *)(v4 + 36),
                            (uint8_t *)&stru_81AF8C.__pad_14D[143],
                            *(unsigned int *)(v4 + 752));
  *(unsigned int *)(v4 + 732) = INIClass::ReadInt_Overwrite( /*0x46bf3b*/
                            this->gap0,
                            (uint8_t *)(v4 + 36),
                            (uint8_t *)&stru_81AF8C.__pad_14D[139],
                            *(unsigned int *)(v4 + 732));
  *(unsigned int *)(v4 + 736) = INIClass::ReadInt_Overwrite( /*0x46bf55*/
                            this->gap0,
                            (uint8_t *)(v4 + 36),
                            (uint8_t *)&stru_81AF8C.__pad_14D[119],
                            *(unsigned int *)(v4 + 736));
  INIClass::ReadDouble_Overwrite( /*0x46bf71*/
    (double *)this->gap0,
    (uint8_t *)(v4 + 36),
    g_INI_Key_Elasticity,
    *(double *)(v4 + 712));
  __asm { fstp qword ptr [esi+2C8h] } /*0x46bf76*/
  *(double *)(v4 + 712) = _RT1; /*0x46bf76*/
  *(unsigned int *)(v4 + 720) = INIClass::ReadInt_Overwrite( /*0x46bf90*/
                            this->gap0,
                            (uint8_t *)(v4 + 36),
                            (uint8_t *)&stru_81AF8C.__pad_14D[103],
                            *(unsigned int *)(v4 + 720));
  *(unsigned int *)(v4 + 724) = BuildingTypeClass::FindAnimByName( /*0x46bfaa*/
                            (BuildingTypeClass *)this,
                            (uint8_t *)(v4 + 36),
                            (uint8_t *)&stru_81AF8C.__pad_14D[95],
                            *(unsigned int *)(v4 + 724));
  *(unsigned char *)(v4 + 667) = INIClass::ReadBool_Overwrite( /*0x46bfc4*/
                           (int *)this,
                           (uint8_t *)(v4 + 36),
                           (uint8_t *)&stru_81AF8C.__pad_14D[87],
                           *(unsigned char *)(v4 + 667));
  *(unsigned char *)(v4 + 661) = INIClass::ReadBool_Overwrite( /*0x46bfde*/
                           (int *)this,
                           (uint8_t *)(v4 + 36),
                           (uint8_t *)&stru_81AF8C.__pad_14D[79],
                           *(unsigned char *)(v4 + 661));
  *(unsigned char *)(v4 + 662) = INIClass::ReadBool_Overwrite( /*0x46bff8*/
                           (int *)this,
                           (uint8_t *)(v4 + 36),
                           (uint8_t *)&stru_81AF8C.__pad_14D[63],
                           *(unsigned char *)(v4 + 662));
  *(unsigned char *)(v4 + 663) = INIClass::ReadBool_Overwrite( /*0x46c012*/
                           (int *)this,
                           (uint8_t *)(v4 + 36),
                           (uint8_t *)&stru_81AF8C.__pad_14D[43],
                           *(unsigned char *)(v4 + 663));
  *(unsigned char *)(v4 + 664) = INIClass::ReadBool_Overwrite( /*0x46c02c*/
                           (int *)this,
                           (uint8_t *)(v4 + 36),
                           (uint8_t *)&stru_81AF8C.__pad_14D[27],
                           *(unsigned char *)(v4 + 664));
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x46c041*/
                     (int *)this,
                     (uint8_t *)(v4 + 36),
                     (uint8_t *)&stru_81AF8C.__pad_14D[15],
                     *(unsigned char *)(v4 + 665));
  v7 = *(unsigned char *)(v4 + 666); /*0x46c046*/
  *(unsigned char *)(v4 + 665) = Bool_Overwrite; /*0x46c04c*/
  v8 = INIClass::ReadBool_Overwrite((int *)this, (uint8_t *)(v4 + 36), aShadow, v7); /*0x46c05b*/
  v32 = *(unsigned char *)(v4 + 668); /*0x46c068*/
  *(unsigned char *)(v4 + 666) = v8; /*0x46c06f*/
  *(unsigned char *)(v4 + 668) = INIClass::ReadBool_Overwrite( /*0x46c07a*/
                           (int *)this,
                           (uint8_t *)(v4 + 36),
                           (uint8_t *)&stru_81AF8C.__pad_14D[3],
                           v32);
  v9 = INIClass::ReadBool_Overwrite( /*0x46c08f*/
         (int *)this,
         (uint8_t *)(v4 + 36),
         (uint8_t *)&stru_81AF8C.ChargerBarrels[17],
         *(unsigned char *)(v4 + 669));
  v10 = *(unsigned char *)(v4 + 670); /*0x46c094*/
  *(unsigned char *)(v4 + 669) = v9; /*0x46c09a*/
  v11 = INIClass::ReadBool_Overwrite( /*0x46c0a9*/
          (int *)this,
          (uint8_t *)(v4 + 36),
          (uint8_t *)&stru_81AF8C.ChargerBarrels[15],
          v10);
  v33 = *(unsigned char *)(v4 + 671); /*0x46c0b6*/
  *(unsigned char *)(v4 + 670) = v11; /*0x46c0bd*/
  *(unsigned char *)(v4 + 671) = INIClass::ReadBool_Overwrite( /*0x46c0c8*/
                           (int *)this,
                           (uint8_t *)(v4 + 36),
                           (uint8_t *)&stru_81AF8C.ChargerBarrels[12],
                           v33);
  v12 = INIClass::ReadBool_Overwrite( /*0x46c0dd*/
          (int *)this,
          (uint8_t *)(v4 + 36),
          (uint8_t *)&stru_81AF8C.ChargerBarrels[10],
          *(unsigned char *)(v4 + 672));
  v13 = *(unsigned char *)(v4 + 674); /*0x46c0e2*/
  *(unsigned char *)(v4 + 672) = v12; /*0x46c0e8*/
  v14 = INIClass::ReadBool_Overwrite( /*0x46c0f7*/
          (int *)this,
          (uint8_t *)(v4 + 36),
          (uint8_t *)&stru_81AF8C.ChargerBarrels[7],
          v13);
  v34 = *(unsigned char *)(v4 + 675); /*0x46c104*/
  *(unsigned char *)(v4 + 674) = v14; /*0x46c10b*/
  *(unsigned char *)(v4 + 675) = INIClass::ReadBool_Overwrite( /*0x46c116*/
                           (int *)this,
                           (uint8_t *)(v4 + 36),
                           (uint8_t *)&stru_81AF8C.ChargerBarrels[4],
                           v34);
  v15 = INIClass::ReadBool_Overwrite( /*0x46c12b*/
          (int *)this,
          (uint8_t *)(v4 + 36),
          (uint8_t *)&stru_81AF8C.ChargerBarrels[3],
          *(unsigned char *)(v4 + 676));
  v16 = *(unsigned char *)(v4 + 677); /*0x46c130*/
  *(unsigned char *)(v4 + 676) = v15; /*0x46c136*/
  v17 = INIClass::ReadBool_Overwrite( /*0x46c145*/
          (int *)this,
          (uint8_t *)(v4 + 36),
          (uint8_t *)&stru_81AF8C.ChargerBarrels[2],
          v16);
  v18 = *(unsigned char *)(v4 + 678); /*0x46c14a*/
  *(unsigned char *)(v4 + 677) = v17; /*0x46c150*/
  *(unsigned char *)(v4 + 678) = INIClass::ReadBool_Overwrite( /*0x46c164*/
                           (int *)this,
                           (uint8_t *)(v4 + 36),
                           (uint8_t *)&stru_81AF8C.ChargerTurrets[17],
                           v18);
  v19 = INIClass::ReadBool_Overwrite( /*0x46c179*/
          (int *)this,
          (uint8_t *)(v4 + 36),
          (uint8_t *)&stru_81AF8C.ChargerTurrets[15],
          *(unsigned char *)(v4 + 679));
  v20 = *(unsigned char *)(v4 + 660); /*0x46c17e*/
  *(unsigned char *)(v4 + 679) = v19; /*0x46c184*/
  v21 = INIClass::ReadBool_Overwrite( /*0x46c193*/
          (int *)this,
          (uint8_t *)(v4 + 36),
          (uint8_t *)&stru_81AF8C.ChargerTurrets[12],
          v20);
  v35 = *(unsigned int *)(v4 + 684); /*0x46c1a0*/
  *(unsigned char *)(v4 + 660) = v21; /*0x46c1a7*/
  *(unsigned int *)(v4 + 684) = INIClass::ReadInt_Overwrite( /*0x46c1b2*/
                            this->gap0,
                            (uint8_t *)(v4 + 36),
                            (uint8_t *)&stru_81AF8C.ChargerTurrets[10],
                            v35);
  *(unsigned char *)(v4 + 748) = INIClass::ReadBool_Overwrite( /*0x46c1e2*/
                           (int *)this,
                           (uint8_t *)(v4 + 36),
                           (uint8_t *)&stru_81AF8C.ChargerTurrets[7],
                           *(unsigned char *)(v4 + 748));
  if ( INIClass::GetString( /*0x46c1ef*/
         (INIClass *)this,
         (uint8_t *)(v4 + 36),
         (uint8_t *)g_INI_Key_Image,
         &g_INI_DefaultBuffer,
         (char *)(v4 + 504),
         25) > 0 )
  {
    v39 = *(unsigned int **)(v4 + 728); /*0x46c20a*/
    if ( INIClass::GetString( /*0x46c219*/
           (INIClass *)&DSurface_ViewBounds.__pad_FC[228],
           (uint8_t *)(v4 + 504),
           aTrailer,
           &g_INI_DefaultBuffer,
           Destination,
           128) )
    {
      v22 = AnimTypeClass::FindOrCreate(Destination); /*0x46c226*/
    }
    else
    {
      v22 = v39; /*0x46c22d*/
    }
    *(unsigned int *)(v4 + 728) = v22; /*0x46c231*/
    *(unsigned int *)(v4 + 740) = INIClass::ReadInt_Overwrite( /*0x46c24e*/
                              (bool *)&DSurface_ViewBounds.__pad_FC[228],
                              (uint8_t *)(v4 + 504),
                              aSpawndelay,
                              *(unsigned int *)(v4 + 740));
    v23 = INIClass::ReadBool_Overwrite( /*0x46c26b*/
            (int *)&DSurface_ViewBounds.__pad_FC[228],
            (uint8_t *)(v4 + 504),
            (uint8_t *)&stru_81AF8C.ChargerTurrets[5],
            *(unsigned char *)(v4 + 673) == 0);
    v36 = *(unsigned char *)(v4 + 759); /*0x46c27d*/
    *(unsigned char *)(v4 + 673) = v23 == 0; /*0x46c287*/
    *(unsigned char *)(v4 + 759) = INIClass::ReadBool_Overwrite( /*0x46c292*/
                             (int *)&DSurface_ViewBounds.__pad_FC[228],
                             (uint8_t *)(v4 + 504),
                             g_INI_Key_Flat,
                             v36);
  }
  v40 = *(unsigned int *)(v4 + 688); /*0x46c2ad*/
  if ( INIClass::GetString( /*0x46c2b9*/
         (INIClass *)this,
         (uint8_t *)(v4 + 36),
         (uint8_t *)&stru_81AF8C.ChargerTurrets[1],
         &g_INI_DefaultBuffer,
         Destination,
         128) )
  {
    v24 = InfantryTypeClass::Find(Destination); /*0x46c2c6*/
  }
  else
  {
    v24 = v40; /*0x46c2cd*/
  }
  *(unsigned int *)(v4 + 688) = v24; /*0x46c2db*/
  v41 = *(unsigned int *)(v4 + 692); /*0x46c2f4*/
  if ( INIClass::GetString( /*0x46c2f8*/
         (INIClass *)this,
         (uint8_t *)(v4 + 36),
         (uint8_t *)stru_81AF8C.MainVoxel,
         &g_INI_DefaultBuffer,
         Destination,
         128) )
  {
    v25 = InfantryTypeClass::Find(Destination); /*0x46c305*/
  }
  else
  {
    v25 = v41; /*0x46c30c*/
  }
  v37 = *(unsigned int *)(v4 + 696); /*0x46c318*/
  *(unsigned int *)(v4 + 692) = v25; /*0x46c31f*/
  *(unsigned int *)(v4 + 696) = INIClass::ReadInt_Overwrite( /*0x46c32a*/
                            this->gap0,
                            (uint8_t *)(v4 + 36),
                            (uint8_t *)&stru_81AF8C.Strength,
                            v37);
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x46c33f*/
                    this->gap0,
                    (uint8_t *)(v4 + 36),
                    (uint8_t *)&stru_81AF8C.Name[40],
                    *(unsigned int *)(v4 + 700));
  v27 = *(unsigned char *)(v4 + 704); /*0x46c344*/
  *(unsigned int *)(v4 + 700) = Int_Overwrite; /*0x46c34a*/
  v28 = INIClass::ReadBool_Overwrite( /*0x46c359*/
          (int *)this,
          (uint8_t *)(v4 + 36),
          (uint8_t *)&stru_81AF8C.Name[28],
          v27);
  v38 = *(unsigned char *)(v4 + 681); /*0x46c366*/
  *(unsigned char *)(v4 + 704) = v28; /*0x46c36d*/
  *(unsigned char *)(v4 + 681) = INIClass::ReadBool_Overwrite( /*0x46c378*/
                           (int *)this,
                           (uint8_t *)(v4 + 36),
                           (uint8_t *)&stru_81AF8C.Name[12],
                           v38);
  *(unsigned char *)(v4 + 756) = INIClass::ReadInt_Overwrite( /*0x46c399*/
                           (bool *)&DSurface_ViewBounds.__pad_FC[228],
                           (uint8_t *)(v4 + 504),
                           (uint8_t *)&stru_81AF8C.Name[4],
                           *(uint8_t *)(v4 + 756));
  v29 = INIClass::ReadInt_Overwrite( /*0x46c3b1*/
          (bool *)&DSurface_ViewBounds.__pad_FC[228],
          (uint8_t *)(v4 + 504),
          (uint8_t *)&stru_81AF8C.UINameLabel[31],
          *(uint8_t *)(v4 + 757));
  v30 = *(uint8_t *)(v4 + 758); /*0x46c3bd*/
  *(unsigned char *)(v4 + 757) = v29; /*0x46c3c3*/
  *(unsigned char *)(v4 + 758) = INIClass::ReadInt_Overwrite( /*0x46c3d5*/
                           (bool *)&DSurface_ViewBounds.__pad_FC[228],
                           (uint8_t *)(v4 + 504),
                           (uint8_t *)&stru_81AF8C.UINameLabel[19],
                           v30);
  *(unsigned char *)(v4 + 680) = INIClass::ReadBool_Overwrite( /*0x46c3f2*/
                           (int *)&DSurface_ViewBounds.__pad_FC[228],
                           (uint8_t *)(v4 + 504),
                           (uint8_t *)&stru_81AF8C.UINameLabel[7],
                           *(unsigned char *)(v4 + 680));
  if ( !*(unsigned char *)(v4 + 670) ) /*0x46c3f8*/
    ObjectTypeClass::Load2DArt((char *)v4); /*0x46c406*/
  if ( *(unsigned char *)(v4 + 566) ) /*0x46c40b*/
    VoxelAnimType::LoadAnim((char *)v4); /*0x46c417*/
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

  v3 = AbstractTypeClass::ProcessPower((AbstractTypeClass *)this, a2); /*0x46c569*/
  IDA_LOBYTE(v3) = this->airburst; /*0x46c56e*/
  Power::FlagProcess((Power *)a2, v3); /*0x46c577*/
  IDA_LOBYTE(v4) = this->shadow; /*0x46c57c*/
  Power::FlagProcess((Power *)a2, v4); /*0x46c585*/
  IDA_LOBYTE(v5) = this->arcing; /*0x46c58a*/
  v6 = Power::FlagProcess((Power *)a2, v5); /*0x46c593*/
  IDA_LOBYTE(v6) = this->dropping; /*0x46c598*/
  Power::FlagProcess((Power *)a2, v6); /*0x46c5a1*/
  IDA_LOBYTE(v7) = this->level; /*0x46c5a6*/
  Power::FlagProcess((Power *)a2, v7); /*0x46c5af*/
  IDA_LOBYTE(v8) = this->inviso; /*0x46c5b4*/
  v9 = Power::FlagProcess((Power *)a2, v8); /*0x46c5bd*/
  IDA_LOBYTE(v9) = this->proximity; /*0x46c5c2*/
  Power::FlagProcess((Power *)a2, v9); /*0x46c5cb*/
  IDA_LOBYTE(v10) = this->ranged; /*0x46c5d0*/
  Power::FlagProcess((Power *)a2, v10); /*0x46c5d9*/
  IDA_LOBYTE(v11) = this->noRotate; /*0x46c5de*/
  v12 = Power::FlagProcess((Power *)a2, v11); /*0x46c5e7*/
  IDA_LOBYTE(v12) = this->inaccurate; /*0x46c5ec*/
  Power::FlagProcess((Power *)a2, v12); /*0x46c5f5*/
  IDA_LOBYTE(v13) = this->flakScatter; /*0x46c5fa*/
  Power::FlagProcess((Power *)a2, v13); /*0x46c603*/
  IDA_LOBYTE(v14) = this->AA; /*0x46c608*/
  v15 = Power::FlagProcess((Power *)a2, v14); /*0x46c611*/
  IDA_LOBYTE(v15) = this->q2A5; /*0x46c616*/
  Power::FlagProcess((Power *)a2, v15); /*0x46c61f*/
  IDA_LOBYTE(v16) = this->degenerates; /*0x46c624*/
  Power::FlagProcess((Power *)a2, v16); /*0x46c62d*/
  IDA_LOBYTE(v17) = this->bouncy; /*0x46c632*/
  Power::FlagProcess((Power *)a2, v17); /*0x46c63b*/
  Checksummer::Add_double((Checksummer *)a2, this->elasticity, this->Acceleration); /*0x46c650*/
  Power::TimerProcess(this->acceleration); /*0x46c65e*/
  Power::TimerProcess(this->rot); /*0x46c66c*/
  Power::TimerProcess(this->arm); /*0x46c67a*/
  IDA_LOBYTE(v18) = this->flat; /*0x46c67f*/
  return Power::FlagProcess((Power *)a2, v18); /*0x46c68d*/
}
} // namespace gamemd
// 0x46C890
namespace gamemd {
BulletTypeClass * BulletTypeClass::ddtor(char a2)
{
  int v3; // eax
  int v4; // eax
  BulletTypeClass *v6; // [esp+4h] [ebp-4h] BYREF

  *(unsigned int *)this->gap0 = (void*)&BulletTypeClass_vftable; /*0x46c896*/
  *(unsigned int *)&this->gap0[4] = (void*)&BulletTypeClass_vftable; /*0x46c89c*/
  *(unsigned int *)&this->gap0[8] = (void*)&BulletTypeClass_vftable; /*0x46c8a3*/
  *(unsigned int *)&this->gap0[12] = (void*)&BulletTypeClass_vftable; /*0x46c8aa*/
  AbstractClass::AnnounceExpiredPointer((void **)this, 1); /*0x46c8b1*/
  v6 = this; /*0x46c8c6*/
  v3 = (*(int (__thiscall **)(int *, BulletTypeClass **))(g_BuildingLoadQueue_Array.LightVisibility + 16))( /*0x46c8ca*/
         &g_BuildingLoadQueue_Array.LightVisibility,
         &v6);
  if ( v3 != -1 && v3 < g_BuildingLoadQueue_Array.LightBlueTint ) /*0x46c8da*/
  {
    --g_BuildingLoadQueue_Array.LightBlueTint; /*0x46c8df*/
    for ( ; /*0x46c8e5*/
          v3 < g_BuildingLoadQueue_Array.LightBlueTint;
          *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v3 - 4) = *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity
                                                                                         + 4 * v3) )
    {
      ++v3; /*0x46c8ed*/
    }
  }
  v6 = this; /*0x46c90f*/
  v4 = (*(int (__thiscall **)(unsigned int *, BulletTypeClass **))(dword_A83C80 + 16))(&dword_A83C80, &v6); /*0x46c913*/
  if ( v4 != -1 && v4 < dword_A83C90 && v4 < --dword_A83C90 ) /*0x46c92e*/
  {
    do /*0x46c946*/
    {
      ++v4; /*0x46c936*/
      *((unsigned int *)unk_A83C84 + v4 - 1) = *((unsigned int *)unk_A83C84 + v4); /*0x46c93a*/
    }
    while ( v4 < dword_A83C90 ); /*0x46c946*/
  }
  ObjectTypeClass::Destruct((int)this); /*0x46c94a*/
  if ( (a2 & 1) != 0 ) /*0x46c954*/
    RA2_OPDEL(this); /*0x46c957*/
  return (void **)this; /*0x46c961*/
}
} // namespace gamemd
// 0x69FC10
namespace gamemd {
int BulletTypeClass::ProcessImpact(int a1)
{
  ShipLocomotionClass *v1; // esi
  char *v2; // edi
  int v3; // eax
  int v4; // ecx
  AbstractClass *movementDestination; // ecx
  FootClass *v6; // ecx
  AbstractClass *v7; // ebp
  unsigned short *v8; // eax
  FootClass *v9; // ecx
  FootClass *Owner; // ecx
  FootClass *v12; // ecx
  AnimClass *v13; // eax
  int *location; // ecx
  FootClass *v15; // ecx
  FootClass *v16; // eax
  FootClass *v17; // eax
  AbstractClass *v18; // ecx
  unsigned int *v19; // eax
  FootClass *v20; // ecx
  int v21; // ecx
  char v22; // [esp-4h] [ebp-24h]
  int v23; // [esp+10h] [ebp-10h] BYREF
  int v24; // [esp+14h] [ebp-Ch]
  int v25; // [esp+18h] [ebp-8h]

  v1 = a1; /*0x69fc16*/
  v2 = (char *)a1 - 4; /*0x69fc28*/
  v3 = *(uint8_t *)((*((int (__thiscall **)(FootClass *))a1->Owner->vtable0 + 111))(a1->Owner) + 284); /*0x69fc31*/
  v4 = *((unsigned int *)v2 + 7); /*0x69fc33*/
  if ( v3 != v4 ) /*0x69fc38*/
  {
    *((unsigned int *)v2 + 8) = v4; /*0x69fc3a*/
    *((unsigned int *)v2 + 7) = v3; /*0x69fc43*/
    Timer::Start((Timer *)&v23, 3); /*0x69fc46*/
    *((unsigned int *)v2 + 9) = v23; /*0x69fc57*/
    *((unsigned int *)v2 + 10) = v24; /*0x69fc5d*/
    *((unsigned int *)v2 + 11) = v25; /*0x69fc64*/
    *((unsigned int *)v2 + 12) = 3; /*0x69fc67*/
  }
  if ( v1->MovementSpeed[1] == -1 || !IDA_HIBYTE(v1->TrackIndex) ) /*0x69fc7a*/
  {
    movementDestination = v1->Owner->movementDestination; /*0x69fd16*/
    if ( movementDestination /*0x69fd54*/
      && (*((int (__thiscall **)(AbstractClass *))movementDestination->vtable0 + 11))(movementDestination) == 11
      && (v6 = v1->Owner,
          v7 = v6->movementDestination + 1,
          v8 = (unsigned short *)(*((int (__thiscall **)(FootClass *, ShipLocomotionClass **))v6->vtable0 + 110))(v6, &a1),
          *v8 == IDA_LOWORD(v7->vtable0))
      && v8[1] == IDA_HIWORD(v7->vtable0) )
    {
      v9 = (FootClass *)*((unsigned int *)v2 + 3); /*0x69fd56*/
      if ( !*(unsigned int *)&v9->__pad_58C[12] ) /*0x69fd59*/
        goto LABEL_20; /*0x69fd5f*/
    }
    else
    {
      Owner = v1->Owner; /*0x69fd7f*/
      if ( Owner->currentMission != 5 /*0x69fddc*/
        || IDA_HIBYTE(v1->TrackIndex)
        || v1->SlopeTimer[3] == g_OverlayTypeConfig && *(unsigned long long *)v1->Dest == qword_B077FC
        || Owner->location[0] != v1->SlopeTimer[3]
        || Owner->location[1] != v1->Dest[0]
        || Owner->location[2] != v1->Dest[1] )
      {
        if ( (uint8_t)TimerClass::Active((int)Owner->primaryFacing) ) /*0x69fe28*/
        {
          IDA_BYTE2(v1->TrackIndex) = 1; /*0x69fe35*/
          goto LABEL_32; /*0x69fe35*/
        }
        if ( IDA_BYTE2(v1->TrackIndex) ) /*0x69ff5d*/
        {
          IDA_BYTE2(v1->TrackIndex) = 0; /*0x69ff62*/
          (*((void (__thiscall **)(FootClass *, unsigned int))v1->Owner->vtable0 + 99))(v1->Owner, 0); /*0x69ff6b*/
          v16 = v1->Owner; /*0x69ff71*/
          if ( !v16->isAliveFlag || v16->inLimbo || v16->isFallingDown ) /*0x69ff84*/
            return 0; /*0x69ff95*/
        }
        if ( (*((int (__thiscall **)(FootClass *))v1->Owner->vtable0 + 97))(v1->Owner) == 5 /*0x69ffc4*/
          && !(*(uint8_t (__stdcall **)(ShipLocomotionClass *))(*(unsigned int *)v1->__pad_0 + 16))(v1)
          || (*((int (__thiscall **)(FootClass *))v1->Owner->vtable0 + 97))(v1->Owner) == 16 )
        {
          goto LABEL_32; /*0x69ffc4*/
        }
        if ( !(*(uint8_t (__stdcall **)(ShipLocomotionClass *))(*(unsigned int *)v1->__pad_0 + 16))(v1) ) /*0x69ffcd*/
        {
          v17 = v1->Owner; /*0x69ffd8*/
          if ( v17->pathDirections[0] == -1 ) /*0x69ffe1*/
          {
            if ( v17->isSinking ) /*0x69ffe7*/
            {
              if ( *((unsigned int *)v2 + 16) != g_OverlayTypeConfig || *(unsigned long long *)(v2 + 68) != qword_B077FC ) /*0x6a0006*/
              {
                *((unsigned int *)v2 + 16) = g_OverlayTypeConfig; /*0x6a0015*/
                *(unsigned long long *)(v2 + 68) = qword_B077FC; /*0x6a001d*/
                v2[99] = 0; /*0x6a0029*/
              }
              v1->SpeedAccum = 0; /*0x6a002c*/
              v1->MovementSpeed[0] = 0; /*0x6a002f*/
            }
            else
            {
              v18 = v17->movementDestination; /*0x6a0037*/
              if ( v18 ) /*0x6a003f*/
              {
                v19 = (unsigned int *)(*((int (__thiscall **)(AbstractClass *, int *, FootClass *))v18->vtable0 + 19))( /*0x6a004d*/
                                  v18,
                                  &v23,
                                  v1->Owner);
                (*(void (__stdcall **)(ShipLocomotionClass *, unsigned int, unsigned int, unsigned int))(*(unsigned int *)v1->__pad_0 + 68))( /*0x6a0069*/
                  v1,
                  *v19,
                  v19[1],
                  v19[2]);
              }
            }
            goto LABEL_32; /*0x6a0032*/
          }
        }
        v20 = v1->Owner; /*0x6a0074*/
        if ( v20->isInPlayfield /*0x6a00ab*/
          && (*((int (__thiscall **)(FootClass *))v20->vtable0 + 97))(v20) != 7
          && (*(uint8_t (__stdcall **)(ShipLocomotionClass *))(*(unsigned int *)v1->__pad_0 + 16))(v1)
          && !(*((uint8_t (__thiscall **)(FootClass *, int *))v1->Owner->vtable0 + 179))(
                v1->Owner,
                &v1->SlopeTimer[3]) )
        {
          if ( *((unsigned int *)v2 + 16) != g_OverlayTypeConfig || *(unsigned long long *)(v2 + 68) != qword_B077FC ) /*0x6a00cc*/
          {
            *((unsigned int *)v2 + 16) = g_OverlayTypeConfig; /*0x6a00db*/
            *(unsigned long long *)(v2 + 68) = qword_B077FC; /*0x6a00e3*/
            v2[99] = 0; /*0x6a00ef*/
          }
          v21 = *((unsigned int *)v2 + 3); /*0x6a00f2*/
          if ( *(unsigned int *)(v21 + 1432) ) /*0x6a00f5*/
          {
            FootClass::ClearPathIndex((FootClass *)v21); /*0x6a010d*/
            if ( (*(uint8_t (__thiscall **)(unsigned int, unsigned int, int))(**((unsigned int **)v2 + 3) + 1156))( /*0x6a011a*/
                   *((unsigned int *)v2 + 3),
                   0,
                   1) )
            {
              return 0; /*0x6a0131*/
            }
          }
          else
          {
            (*(void (__thiscall **)(int, unsigned int, int))(*(unsigned int *)v21 + 1152))(v21, 0, 1); /*0x6a0102*/
          }
          goto LABEL_32; /*0x6a0108*/
        }
        IDA_LOBYTE(a1) = 0; /*0x6a013e*/
        WalkLocomotion::Update((int)&v1[-1].Piggybackee, &a1, 1, 0); /*0x6a0142*/
        if ( (unsigned char)a1 ) /*0x6a014b*/
          return 0; /*0x6a0156*/
        if ( !v1->Owner->isAliveFlag ) /*0x6a015c*/
          return 0; /*0x6a016d*/
        v22 = 0; /*0x6a0170*/
        goto LABEL_81; /*0x6a0170*/
      }
      v9 = (FootClass *)*((unsigned int *)v2 + 3); /*0x69fdde*/
      if ( !*(unsigned int *)&v9->__pad_58C[12] ) /*0x69fde7*/
      {
  LABEL_20:
        (*((void (__thiscall **)(FootClass *, unsigned int, int))v9->vtable0 + 288))(v9, 0, 1); /*0x69fd65*/
        return 0; /*0x69fd79*/
      }
    }
    FootClass::ClearPathIndex(v9); /*0x69fe00*/
    (*(void (__thiscall **)(unsigned int, unsigned int, int))(**((unsigned int **)v2 + 3) + 1156))(*((unsigned int *)v2 + 3), 0, 1); /*0x69fe0d*/
    return 0; /*0x69fe1c*/
  }
  if ( WalkLocomotion::ProcessCollision((int)&v1[-1].Piggybackee, 0) || !v1->Owner->isAliveFlag ) /*0x69fc96*/
    return 0; /*0x69fc9c*/
  if ( v1->MovementSpeed[1] != -1 /*0x69fcd4*/
    || !(*(uint8_t (__stdcall **)(ShipLocomotionClass *))(*(unsigned int *)v1->__pad_0 + 16))(v1)
    && v1->Owner->pathDirections[0] == -1
    || (*((int (__thiscall **)(FootClass *))v1->Owner->vtable0 + 11))(v1->Owner) == 1 && IDA_BYTE1(v1->Owner[1].uniqueId) )
  {
    goto LABEL_32; /*0x69fcda*/
  }
  IDA_LOBYTE(a1) = 0; /*0x69fcea*/
  WalkLocomotion::Update((int)&v1[-1].Piggybackee, &a1, 1, 0); /*0x69fcee*/
  if ( (unsigned char)a1 || !v1->Owner->isAliveFlag ) /*0x69fd00*/
    return 0; /*0x69fd06*/
  v22 = 1; /*0x69fd0c*/
  LABEL_81:
  WalkLocomotion::ProcessCollision((int)&v1[-1].Piggybackee, v22); /*0x6a0171*/
  if ( !v1->Owner->isAliveFlag ) /*0x6a017b*/
    return 0; /*0x6a018a*/
  LABEL_32:
  if ( (*(uint8_t (__stdcall **)(ShipLocomotionClass *))(*(unsigned int *)v1->__pad_0 + 128))(v1) ) /*0x69fe3c*/
  {
    if ( !(*(unsigned int *)&stru_A8EB00.gapE4[416] % 8) /*0x69fe6e*/
      && !*(unsigned char *)((*((int (__thiscall **)(FootClass *))v1->Owner->vtable0 + 33))(v1->Owner) + 3433) )
    {
      v12 = v1->Owner; /*0x69fe76*/
      if ( !v12->onBridge && *(unsigned int *)((*((int (__thiscall **)(FootClass *))v12->vtable0 + 111))(v12) + 236) == 2 ) /*0x69fe90*/
      {
        if ( *(unsigned int *)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 148) ) /*0x69fe97*/
        {
          v13 = (AnimClass *)RA2_OPNEW(0x1C8u); /*0x69fea4*/
          if ( v13 ) /*0x69feae*/
          {
            location = v1->Owner->location; /*0x69feb4*/
            v23 = *location; /*0x69fec5*/
            v24 = location[1]; /*0x69fecc*/
            v25 = location[2]; /*0x69fed8*/
            AnimClass::ctor( /*0x69feeb*/
              v13,
              *(void **)(*(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 148),
              &v23,
              0,
              1,
              (void *)0x600,
              0,
              0);
          }
        }
      }
    }
  }
  if ( v1->SlopeTimer[3] == g_OverlayTypeConfig /*0x69ff1e*/
    && v1->Dest[0] == (unsigned int)qword_B077FC
    && *(unsigned long long *)&v1->Dest[1] == IDA___PAIR64__(g_OverlayTypeConfig, IDA_HIDWORD(qword_B077FC))
    && *(unsigned long long *)v1->HeadToCoord == qword_B077FC )
  {
    v15 = v1->Owner; /*0x69ff25*/
    if ( v15->pathDirections[0] == -1 && *(double *)v15->currentSpeed_percentage > 0.0 ) /*0x69ff41*/
      (*((void (__thiscall **)(FootClass *, unsigned int, unsigned int))v15->vtable0 + 337))(v15, 0, 0); /*0x69ff47*/
  }
  return (*(char (__stdcall **)(ShipLocomotionClass *))(*(unsigned int *)v1->__pad_0 + 16))(v1); /*0x69fd72*/
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
  *(unsigned int *)a1->gap0 = v5; /*0x46c53f*/
  *(unsigned int *)&a1->gap0[4] = v6; /*0x46c545*/
  *(unsigned int *)&a1->gap0[8] = v3; /*0x46c549*/
  return a1->gap0; /*0x46c54c*/
}
} // namespace gamemd
// 0x46C6A0
namespace gamemd {
int BulletTypeClass::SaveLoad_Prefix(ObjectTypeClass * aP0, int aP1)
{
  int result; // eax

  result = ObjectTypeClass::LoadCleanup((ObjectTypeClass *)aP0, aP1); /*0x46c6ab*/
  if ( result >= 0 ) /*0x46c6b2*/
  {
    if ( aP0 ) /*0x46c6b6*/
    {
      ObjectTypeClass::Construct((ObjectTypeClass *)aP0, (int)&aP1); /*0x46c6bf*/
      *(unsigned int *)aP0->gap0 = (void*)&BulletTypeClass_vftable; /*0x46c6c4*/
      *(unsigned int *)&aP0->gap0[4] = (void*)&BulletTypeClass_vftable; /*0x46c6ca*/
      *(unsigned int *)&aP0->gap0[8] = (void*)&BulletTypeClass_vftable; /*0x46c6d1*/
      *(unsigned int *)&aP0->gap0[12] = (void*)&BulletTypeClass_vftable; /*0x46c6d8*/
    }
    VoxelAnimType::LoadAnim(aP0->gap0); /*0x46c6e1*/
    ObjectTypeClass::Load2DArt(aP0->gap0); /*0x46c6e8*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)aP0 + 182); /*0x46c6f9*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)aP0 + 172); /*0x46c70a*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)aP0 + 173); /*0x46c71b*/
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

  result = AbstractClass::SaveLoad_PrefixWrapper((AbstractClass *)aP0, aP1, aP2); /*0x46c73f*/
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
  a2[3] = unk_7E95DC; /*0x46c780*/
  return 0; /*0x46c75d*/
}
} // namespace gamemd
// 0x46C820
namespace gamemd {
int BulletTypeClass::GetWarhead(int a2, int a3)
{

  a2 = a2; /*0x46c820*/
  if ( a2 == this->trailer ) /*0x46c82c*/
    this->trailer = 0; /*0x46c82e*/
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
  if ( !a4 || dword_A83CA8 <= 0 ) /*0x475177*/
    return 1; /*0x475177*/
  v5 = (char *)unk_A83C9C; /*0x47517e*/
  v8 = dword_A83CA8; /*0x475186*/
  do /*0x475213*/
  {
    v6 = *(unsigned int *)v5; /*0x47518a*/
    if ( ((1 << *(unsigned int *)(*(unsigned int *)v5 + 184)) & a4) != 0 ) /*0x4751a3*/
    {
      if ( v4 ) /*0x4751a7*/
        strcat(Source, Str); /*0x4751ce*/
      strcat(Source, (const char *)(v6 + 36)); /*0x4751fa*/
      v4 = Source[0]; /*0x475203*/
    }
    v5 += 4; /*0x47520b*/
    --v8; /*0x47520f*/
  }
  while ( v8 ); /*0x475213*/
  if ( v4 ) /*0x47521e*/
    return INIClass::SetString(this->gap0, Block, a3, Source); /*0x475239*/
  else
    return 1; /*0x475248*/
}
} // namespace gamemd