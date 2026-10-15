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
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/AudioController_e4.hpp"
#include "e4/classes/Byte_e4.hpp"
#include "e4/classes/WeaponTypeClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/Buffer_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/AnimTypeClass_e4.hpp"
#include "e4/classes/InfantryTypeClass_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/Checksummer_e4.hpp"
#include "e4/classes/FootClass_e4.hpp"
#include "e4/classes/ShipLocomotionClass_e4.hpp"
#include "e4/classes/Block_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/AnimClass_e4.hpp"  // G42.36 C2027 supply

// [w20m5] fn vocab supply (g57b5-W5 variadic convention); evidence: raw_decomp fn_54.c 0x544CE0
namespace gamemd {
    int Entity_Read(ObjectClass *p_this);  // x4:ida@0x544ce0
} // namespace gamemd
// 0x465450
namespace gamemd {  // G42.18 ns repair
BuildingTypeClass * * BulletTypeClass::ReadArmor()
{


  int v0; // edx
  v0 = dword_A83C78; /*0x465450*/
  int v1; // edi
  v1 = 0; /*0x46545e*/
  if ( dword_A83C78 > 0 ) /*0x465462*/
  {
  char *v2; // ecx
    v2 = (char *)dword_A83C6C; /*0x465464*/
    do /*0x46547d*/
    {
      if ( v1 <= *(char *)(*(unsigned int *)v2 + 5895) ) /*0x465475*/
        v1 = *(char *)(*(unsigned int *)v2 + 5895); /*0x465477*/
      v2 += 4; /*0x465479*/
      --v0; /*0x46547c*/
    }
    while ( v0 ); /*0x46547d*/
    if ( v1 ) /*0x465481*/
    {
      if ( dword_89DDC0 ) /*0x46548b*/
        (**(void (***)(int, int))dword_89DDC0)(dword_89DDC0, 1); /*0x465491*/
  unsigned int *v3; // esi
      v3 = (unsigned int *)(__2_YAPAXI_Z(0x20u)); /*0x46549a*/
      if ( v3 ) /*0x4654a1*/
      {
        v3[3] = 0; /*0x4654a6*/
        v3[1] = v1 + 16; /*0x4654ab*/
        v3[2] = v1 + 16; /*0x4654b6*/
        *v3 = (unsigned int)(&XSurface_Vtable); /*0x4654b9*/
        v3[4] = 1; /*0x4654bf*/
        Buffer::Init(v3 + 5, 0, (v1 + 16) * (v1 + 16)); /*0x4654c6*/
        *v3 = (unsigned int)(&BSurface_Vtable); /*0x4654cb*/
        dword_89DDC0 = (int)v3; /*0x4654d1*/
      }
      else
      {
        dword_89DDC0 = 0; /*0x4654d9*/
      }
    }
  }
  int result; // eax
  result = dword_A83C78; /*0x4654df*/
  int i; // edi
  for ( i = 0; i < dword_A83C78; ++i ) /*0x4654e8*/
  {
  int v6; // esi
    v6 = *((unsigned int *)dword_A83C6C + i); /*0x4654f7*/
  char Destination[60]; // [esp+Ch] [ebp-3Ch] BYREF
    Destination[0] = 0; /*0x465500*/
    (/*0x46550e*/ (unsigned __int8 ***)dword_887048)->GetString((unsigned __int8 *)(v6 + 36), (unsigned __int8 *)aTotile, 0, Destination, 60);
  int v7; // eax
    v7 = Entity_Read(Destination); /*0x465517*/
    if ( v7 >= 0 && v7 < dword_A8ED38 ) /*0x465526*/
      *(unsigned int *)(v6 + 3672) = *((unsigned int *)dword_A8ED2C + v7); /*0x465531*/
    result = dword_A83C78; /*0x465537*/
  }
  return (gamemd::BuildingTypeClass **)(result); /*0x465541*/

}
} // namespace gamemd
// 0x465CC0
namespace gamemd {
BuildingTypeClass * * BulletTypeClass::ReadTrailerAnim()
{

  int result; // eax
  result = dword_A83C78; /*0x465cc0*/
  int i; // edi
  for ( i = 0; i < dword_A83C78; ++i ) /*0x465ccd*/
  {
  int v3; // esi
    v3 = *((unsigned int *)dword_A83C6C + i); /*0x465cdc*/
  char Destination[60]; // [esp+4h] [ebp-3Ch] BYREF
    Destination[0] = 0; /*0x465cef*/
    INIClass::GetString( /*0x465cf5*/
      *(INIClass **)&DataGlobal_887048,
      &v3->__pad_024,
      aTotile,
      0,
      Destination,
      60);
  int v4; // eax
    v4 = Entity_Read((ObjectClass *)Destination); /*0x465cfe*/
    if ( v4 >= 0 && v4 < *(int *)&((unsigned int *)&stru_A8EB00)[340] ) /*0x465d0d*/
      v3->u32_E58 = *(unsigned int *)(*(unsigned int *)&((unsigned int *)&stru_A8EB00)[328] + 4 * v4); /*0x465d18*/
    result = dword_A83C78; /*0x465d1e*/
  }
  return (gamemd::BuildingTypeClass **)(result); /*0x465d29*/
}
} // namespace gamemd
// 0x46BBC0
namespace gamemd {
unsigned char * BulletTypeClass::Construct(char *aP1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8, void *a9)
{


  ((int *)this)->ConstructFull(aP1); /*0x46bbc9*/
  this->Airburst = 0; /*0x46bbd5*/
  this->Floater = 0; /*0x46bbdb*/
  this->SubjectToCliffs = 0; /*0x46bbe1*/
  this->SubjectToElevation = 0; /*0x46bbe7*/
  this->SubjectToWalls = 0; /*0x46bbed*/
  this->VeryHigh = 0; /*0x46bbf3*/
  this->Shadow = 1; /*0x46bbf9*/
  this->Arcing = 0; /*0x46bc00*/
  this->Dropping = 0; /*0x46bc06*/
  this->Level = 0; /*0x46bc0c*/
  this->Inviso = 0; /*0x46bc12*/
  this->Proximity = 0; /*0x46bc18*/
  this->Ranged = 0; /*0x46bc1e*/
  this->Rotates = 1; /*0x46bc24*/
  this->Inaccurate = 0; /*0x46bc2b*/
  this->FlakScatter = 0; /*0x46bc31*/
  this->AA = 0; /*0x46bc37*/
  this->Degenerates_d = 1; /*0x46bc3d*/
  this->Elasticity_d = (gamemd::ColorScheme *)(3); /*0x46bc44*/
  this->SpawnDelay_d = 3; /*0x46bc4a*/
  this->Degenerates_2 = 0; /*0x46bc50*/
  this->Bouncy_d = 0; /*0x46bc59*/
  this->AnimPalette = 0; /*0x46bc5f*/
  this->elasticity = 0; /*0x46bc65*/
  this->FirersPalette_d = 0; /*0x46bc6c*/
  this->cluster = 1; /*0x46bc72*/
  this->airburstWeapon = 0; /*0x46bc7c*/
  this->shrapnelWeapon = 0; /*0x46bc82*/
  this->shrapnelCount = 0; /*0x46bc88*/
  this->detonationAltitude = 0; /*0x46bc8e*/
  this->Vertical = 0; /*0x46bc94*/
  this->Acceleration = 1072168960; /*0x46bc9a*/
  this->Color = 0; /*0x46bca4*/
  this->Trailer_d = 0; /*0x46bcaa*/
  this->rot = 0; /*0x46bcb0*/
  this->courseLockDuration = 0; /*0x46bcb6*/
  this->scaledSpawnDelay = 0; /*0x46bcbc*/
  this->Scalable_d = 0; /*0x46bcc2*/
  this->arm = 0; /*0x46bcc8*/
  this->animLow = 0; /*0x46bcce*/
  this->animHigh = 0; /*0x46bcd4*/
  this->animRate = 0; /*0x46bcda*/
  this->Flat_d = 0; /*0x46bce0*/
  *(unsigned int *)this->ObjectTypeClass = (unsigned int)(&vt_BulletTypeClass); /*0x46bce6*/
  *&this->Flat_d = &vt_BulletTypeClass; /*0x46bcec*/
  *&this->AbstractClass_E58 = &vt_BulletTypeClass; /*0x46bcf2*/
  /* X11: vtable install elided (implicit via BulletTypeClass virtuals 0x46bcf9) */
  ((int)(&this->AbstractClass_E58))->GenerateUniqueID(); /*0x46bd00*/
  this->IsLogic_d = 1; /*0x46bd05*/
  this->RadarInvisible_d = 1; /*0x46bd0c*/
  this->Selectable_d = 0; /*0x46bd13*/
  this->LegalTarget_d = 0; /*0x46bd19*/
  this->Insignificant_d = 1; /*0x46bd1f*/
  this->Immune_d = 1; /*0x46bd26*/
  this->AllowCellContent_d = 0; /*0x46bd2d*/
  if ( dword_A83C90 < dword_A83C88 /*0x46bd65*/
    || (byte_A83C8D || !dword_A83C88)
    && dword_A83C94 > 0
    && (*(unsigned __int8 (**)(unsigned int *, int, unsigned int))(dword_A83C80 + 8))(
         &dword_A83C80,
         dword_A83C88 + dword_A83C94,
         0) )
  {
  int v3; // eax
    v3 = dword_A83C90++; /*0x46bd72*/
    *((unsigned int *)dword_A83C84 + v3) = (unsigned int)(this); /*0x46bd81*/
  }
  if ( g_BuildingLoadQueue_Array.LightBlueTint < g_BuildingLoadQueue_Array.LightRedTint /*0x46bdb8*/
    || (BYTE1(g_BuildingLoadQueue_Array.LightGreenTint) || !g_BuildingLoadQueue_Array.LightRedTint)
    && g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] > 0
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(g_BuildingLoadQueue_Array.LightVisibility + 8))(
         &g_BuildingLoadQueue_Array.LightVisibility,
         g_BuildingLoadQueue_Array.LightRedTint + g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0],
         0) )
  {
  int v4; // eax
    v4 = g_BuildingLoadQueue_Array.LightBlueTint++; /*0x46bdc5*/
    *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v4) = this; /*0x46bdd4*/
  }
  return (unsigned char *)(this->ObjectTypeClass); /*0x46bdd9*/

}
} // namespace gamemd
// 0x46BEE0
namespace gamemd {
WeaponTypeClass * * BulletTypeClass::LoadFromINI(unsigned char *** a2, void *a2_2)
{

  unsigned int *v22; // eax
  int v24; // eax
  int v25; // eax
  char Destination[128]; // [esp+Ch] [ebp-80h] BYREF

  int v3; // ecx
  int v4; // esi
  v4 = v3; /*0x46beef*/
  INIClass::ResetSection((INIClass *)a2); /*0x46bef3*/
  if ( !ObjectTypeClass::LoadFromINI((ObjectTypeClass *)v4, (unsigned __int8 ***)a2) ) /*0x46befb*/
    return 0; /*0x46c42a*/
  v4->arm = INIClass::ReadInt_Overwrite( /*0x46bf21*/
                            a2->ObjectTypeClass,
                            (unsigned __int8 *)(v4 + 36),
                            (unsigned __int8 *)&DataGlobal_81AF8C[476],
                            v4->arm);
  *&v4->rot = INIClass::ReadInt_Overwrite( /*0x46bf3b*/
                            a2->ObjectTypeClass,
                            (unsigned __int8 *)(v4 + 36),
                            (unsigned __int8 *)&DataGlobal_81AF8C[472],
                            v4->rot);
  *&v4->courseLockDuration = INIClass::ReadInt_Overwrite( /*0x46bf55*/
                            a2->ObjectTypeClass,
                            (unsigned __int8 *)(v4 + 36),
                            (unsigned __int8 *)&DataGlobal_81AF8C[452],
                            v4->courseLockDuration);
  INIClass::ReadDouble_Overwrite( /*0x46bf71*/
    (double *)a2->ObjectTypeClass,
    (unsigned __int8 *)(v4 + 36),
    g_INI_Key_Elasticity,
    v4->elasticity);
  __asm { fstp qword ptr [esi+2C8h] } /*0x46bf76*/
  v4->elasticity = _RT1; /*0x46bf76*/
  v4->Elasticity_d = INIClass::ReadInt_Overwrite( /*0x46bf90*/
                            a2->ObjectTypeClass,
                            (unsigned __int8 *)(v4 + 36),
                            (unsigned __int8 *)&DataGlobal_81AF8C[436],
                            v4->Elasticity_d);
  *&v4->Color = BuildingTypeClass::FindAnimByName( /*0x46bfaa*/
                            (BuildingTypeClass *)a2,
                            (unsigned __int8 *)(v4 + 36),
                            (unsigned __int8 *)&DataGlobal_81AF8C[428],
                            v4->Color);
  *&v4->Arcing = INIClass::ReadBool_Overwrite( /*0x46bfc4*/
                           (int *)a2,
                           (unsigned __int8 *)(v4 + 36),
                           (unsigned __int8 *)&DataGlobal_81AF8C[420],
                           v4->Arcing);
  *&v4->Floater = INIClass::ReadBool_Overwrite( /*0x46bfde*/
                           (int *)a2,
                           (unsigned __int8 *)(v4 + 36),
                           (unsigned __int8 *)&DataGlobal_81AF8C[412],
                           v4->Floater);
  *&v4->SubjectToCliffs = INIClass::ReadBool_Overwrite( /*0x46bff8*/
                           (int *)a2,
                           (unsigned __int8 *)(v4 + 36),
                           (unsigned __int8 *)&DataGlobal_81AF8C[396],
                           v4->SubjectToCliffs);
  *&v4->SubjectToElevation = INIClass::ReadBool_Overwrite( /*0x46c012*/
                           (int *)a2,
                           (unsigned __int8 *)(v4 + 36),
                           (unsigned __int8 *)&DataGlobal_81AF8C[376],
                           v4->SubjectToElevation);
  *&v4->SubjectToWalls = INIClass::ReadBool_Overwrite( /*0x46c02c*/
                           (int *)a2,
                           (unsigned __int8 *)(v4 + 36),
                           (unsigned __int8 *)&DataGlobal_81AF8C[360],
                           v4->SubjectToWalls);
  char Bool_Overwrite; // al
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x46c041*/
                     (int *)a2,
                     (unsigned __int8 *)(v4 + 36),
                     (unsigned __int8 *)&DataGlobal_81AF8C[348],
                     v4->VeryHigh);
  char v7; // cl
  v7 = *&v4->Shadow; /*0x46c046*/
  *&v4->VeryHigh = Bool_Overwrite; /*0x46c04c*/
  char v8; // al
  v8 = INIClass::ReadBool_Overwrite((int *)a2, (unsigned __int8 *)(v4 + 36),(uint8_t *)(aShadow), v7); /*0x46c05b*/
  char v32; // [esp-Ch] [ebp-98h]
  v32 = v4->Dropping; /*0x46c068*/
  v4->Shadow = v8; /*0x46c06f*/
  v4->Dropping = INIClass::ReadBool_Overwrite( /*0x46c07a*/
                           (int *)a2,
                           (unsigned __int8 *)(v4 + 36),
                           (unsigned __int8 *)&DataGlobal_81AF8C[336],
                           v32);
  char v9; // al
  v9 = INIClass::ReadBool_Overwrite( /*0x46c08f*/
         (int *)a2,
         (unsigned __int8 *)(v4 + 36),
         (unsigned __int8 *)&DataGlobal_81AF8C[328],
         v4->Level);
  char v10; // cl
  v10 = v4->Inviso; /*0x46c094*/
  *&v4->Level = v9; /*0x46c09a*/
  char v11; // al
  v11 = INIClass::ReadBool_Overwrite( /*0x46c0a9*/
          (int *)a2,
          (unsigned __int8 *)(v4 + 36),
          (unsigned __int8 *)&DataGlobal_81AF8C[320],
          v10);
  char v33; // [esp-Ch] [ebp-98h]
  v33 = v4->Proximity; /*0x46c0b6*/
  *&v4->Inviso = v11; /*0x46c0bd*/
  *&v4->Proximity = INIClass::ReadBool_Overwrite( /*0x46c0c8*/
                           (int *)a2,
                           (unsigned __int8 *)(v4 + 36),
                           (unsigned __int8 *)&DataGlobal_81AF8C[308],
                           v33);
  char v12; // al
  v12 = INIClass::ReadBool_Overwrite( /*0x46c0dd*/
          (int *)a2,
          (unsigned __int8 *)(v4 + 36),
          (unsigned __int8 *)&DataGlobal_81AF8C[300],
          v4->Ranged);
  char v13; // cl
  v13 = v4->Inaccurate; /*0x46c0e2*/
  *&v4->Ranged = v12; /*0x46c0e8*/
  char v14; // al
  v14 = INIClass::ReadBool_Overwrite( /*0x46c0f7*/
          (int *)a2,
          (unsigned __int8 *)(v4 + 36),
          (unsigned __int8 *)&DataGlobal_81AF8C[288],
          v13);
  char v34; // [esp-Ch] [ebp-98h]
  v34 = v4->FlakScatter; /*0x46c104*/
  v4->Inaccurate = v14; /*0x46c10b*/
  *&v4->FlakScatter = INIClass::ReadBool_Overwrite( /*0x46c116*/
                           (int *)a2,
                           (unsigned __int8 *)(v4 + 36),
                           (unsigned __int8 *)&DataGlobal_81AF8C[276],
                           v34);
  char v15; // al
  v15 = INIClass::ReadBool_Overwrite( /*0x46c12b*/
          (int *)a2,
          (unsigned __int8 *)(v4 + 36),
          (unsigned __int8 *)&DataGlobal_81AF8C[272],
          v4->AA);
  char v16; // cl
  v16 = *&v4->Degenerates_d; /*0x46c130*/
  v4->AA = v15; /*0x46c136*/
  char v17; // al
  v17 = INIClass::ReadBool_Overwrite( /*0x46c145*/
          (int *)a2,
          (unsigned __int8 *)(v4 + 36),
          (unsigned __int8 *)&DataGlobal_81AF8C[268],
          v16);
  char v18; // dl
  v18 = v4->Degenerates_2; /*0x46c14a*/
  v4->Degenerates_d = v17; /*0x46c150*/
  *&v4->Degenerates_2 = INIClass::ReadBool_Overwrite( /*0x46c164*/
                           (int *)a2,
                           (unsigned __int8 *)(v4 + 36),
                           (unsigned __int8 *)&DataGlobal_81AF8C[256],
                           v18);
  char v19; // al
  v19 = INIClass::ReadBool_Overwrite( /*0x46c179*/
          (int *)a2,
          (unsigned __int8 *)(v4 + 36),
          (unsigned __int8 *)&DataGlobal_81AF8C[248],
          v4->Bouncy_d);
  char v20; // cl
  v20 = *&v4->Airburst; /*0x46c17e*/
  v4->Bouncy_d = v19; /*0x46c184*/
  char v21; // al
  v21 = INIClass::ReadBool_Overwrite( /*0x46c193*/
          (int *)a2,
          (unsigned __int8 *)(v4 + 36),
          (unsigned __int8 *)&DataGlobal_81AF8C[236],
          v20);
  int v35; // [esp-Ch] [ebp-98h]
  v35 = v4->cluster; /*0x46c1a0*/
  v4->Airburst = v21; /*0x46c1a7*/
  v4->cluster = INIClass::ReadInt_Overwrite( /*0x46c1b2*/
                            a2->ObjectTypeClass,
                            (unsigned __int8 *)(v4 + 36),
                            (unsigned __int8 *)&DataGlobal_81AF8C[228],
                            v35);
  v4->Scalable_d = INIClass::ReadBool_Overwrite( /*0x46c1e2*/
                           (int *)a2,
                           (unsigned __int8 *)(v4 + 36),
                           (unsigned __int8 *)&DataGlobal_81AF8C[216],
                           v4->Scalable_d);
  if ( INIClass::GetString( /*0x46c1ef*/
         (INIClass *)a2,
         (unsigned __int8 *)(v4 + 36),
         (unsigned __int8 *)g_INI_Key_Image,
         &g_INI_DefaultBuffer,
         &v4->ImageFile,
         25) > 0 )
  {
  unsigned int *v39; // [esp+8h] [ebp-84h]
    v39 = *&v4->Trailer_d; /*0x46c20a*/
    if ( (/*0x46c219*/ (INIClass *)&DataGlobal_887180)->GetString((unsigned __int8 *)(v4 + 504), aTrailer, &g_INI_DefaultBuffer, Destination, 128) )
    {
      v22 = (Destination)->FindOrCreate(); /*0x46c226*/
    }
    else
    {
      v22 = v39; /*0x46c22d*/
    }
    *&v4->Trailer_d = v22; /*0x46c231*/
    *&v4->SpawnDelay_d = INIClass::ReadInt_Overwrite( /*0x46c24e*/
                              (bool *)&DataGlobal_887180,
                              (unsigned __int8 *)(v4 + 504),
                              aSpawndelay,
                              v4->SpawnDelay_d);
  char v23; // al
    v23 = INIClass::ReadBool_Overwrite( /*0x46c26b*/
            (int *)&DataGlobal_887180,
            (unsigned __int8 *)(v4 + 504),
            (unsigned __int8 *)&DataGlobal_81AF8C[208],
            v4->Rotates == 0);
  char v36; // [esp-Ch] [ebp-98h]
    v36 = *&v4->Flat_d; /*0x46c27d*/
    v4->Rotates = v23 == 0; /*0x46c287*/
        *&v4->Flat_d = INIClass::ReadBool_Overwrite( /*0x46c292*/                              (int *)&DataGlobal_887180,                              (unsigned __int8 *)(v4 + 504),(uint8_t *)(g_INI_Key_Flat),                              v36);
  }
  int v40; // [esp+8h] [ebp-84h]
  v40 = v4->airburstWeapon; /*0x46c2ad*/
  if ( (/*0x46c2b9*/ (INIClass *)a2)->GetString((unsigned __int8 *)(v4 + 36), (unsigned __int8 *)&DataGlobal_81AF8C[192], &g_INI_DefaultBuffer, Destination, 128) )
  {
    v24 = (int)(InfantryTypeClass::Find(Destination)); /*0x46c2c6*/
  }
  else
  {
    v24 = v40; /*0x46c2cd*/
  }
  *&v4->airburstWeapon = v24; /*0x46c2db*/
  int v41; // [esp+8h] [ebp-84h]
  v41 = *&v4->shrapnelWeapon; /*0x46c2f4*/
  if ( INIClass::GetString( /*0x46c2f8*/
         (INIClass *)a2,
         (unsigned __int8 *)(v4 + 36),
         (unsigned __int8 *)stru_81AF8C.?,
         &g_INI_DefaultBuffer,
         Destination,
         128) )
  {
    v25 = (int)(InfantryTypeClass::Find(Destination)); /*0x46c305*/
  }
  else
  {
    v25 = v41; /*0x46c30c*/
  }
  int v37; // [esp-Ch] [ebp-98h]
  v37 = *&v4->shrapnelCount; /*0x46c318*/
  *&v4->shrapnelWeapon = v25; /*0x46c31f*/
  *&v4->shrapnelCount = INIClass::ReadInt_Overwrite( /*0x46c32a*/
                            a2->ObjectTypeClass,
                            (unsigned __int8 *)(v4 + 36),
                            (unsigned __int8 *)&DataGlobal_81AF8C[160],
                            v37);
  int Int_Overwrite; // eax
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x46c33f*/
                    a2->ObjectTypeClass,
                    (unsigned __int8 *)(v4 + 36),
                    (unsigned __int8 *)&DataGlobal_81AF8C[140],
                    v4->detonationAltitude);
  char v27; // cl
  v27 = *&v4->Vertical; /*0x46c344*/
  v4->detonationAltitude = Int_Overwrite; /*0x46c34a*/
  char v28; // al
  v28 = INIClass::ReadBool_Overwrite( /*0x46c359*/
          (int *)a2,
          (unsigned __int8 *)(v4 + 36),
          (unsigned __int8 *)&DataGlobal_81AF8C[128],
          v27);
  char v38; // [esp-Ch] [ebp-98h]
  v38 = v4->FirersPalette_d; /*0x46c366*/
  v4->Vertical = v28; /*0x46c36d*/
  v4->FirersPalette_d = INIClass::ReadBool_Overwrite( /*0x46c378*/
                           (int *)a2,
                           (unsigned __int8 *)(v4 + 36),
                           (unsigned __int8 *)&DataGlobal_81AF8C[112],
                           v38);
  v4->animLow = INIClass::ReadInt_Overwrite( /*0x46c399*/
                           (bool *)&DataGlobal_887180,
                           (unsigned __int8 *)(v4 + 504),
                           (unsigned __int8 *)&DataGlobal_81AF8C[104],
                           *(unsigned __int8 *)(v4 + 756));
  char v29; // al
  v29 = INIClass::ReadInt_Overwrite( /*0x46c3b1*/
          (bool *)&DataGlobal_887180,
          (unsigned __int8 *)(v4 + 504),
          (unsigned __int8 *)&DataGlobal_81AF8C[92],
          *(unsigned __int8 *)(v4 + 757));
  int v30; // edx
  v30 = *(unsigned __int8 *)(v4 + 758); /*0x46c3bd*/
  *&v4->animHigh = v29; /*0x46c3c3*/
  v4->animRate = INIClass::ReadInt_Overwrite( /*0x46c3d5*/
                           (bool *)&DataGlobal_887180,
                           (unsigned __int8 *)(v4 + 504),
                           (unsigned __int8 *)&DataGlobal_81AF8C[80],
                           v30);
  v4->AnimPalette = INIClass::ReadBool_Overwrite( /*0x46c3f2*/
                           (int *)&DataGlobal_887180,
                           (unsigned __int8 *)(v4 + 504),
                           (unsigned __int8 *)&DataGlobal_81AF8C[68],
                           v4->AnimPalette);
  if ( !v4->Inviso ) /*0x46c3f8*/
    ((char *)v4)->Load2DArt(); /*0x46c406*/
  if ( *&v4->Voxel_d ) /*0x46c40b*/
    ((char *)v4)->LoadAnim(); /*0x46c417*/
  return 1; /*0x46c41c*/

}
} // namespace gamemd
// 0x46C560
namespace gamemd {
int BulletTypeClass::ProcessPower(int * a2, void *a2_2)
{

  int v3; // eax
  v3 = ((AbstractTypeClass *)((AbstractTypeClass *)a2_2))->ProcessPower((int *)(a2_2)); /*0x46c569*/
  (*((unsigned char *)&(v3))) = *((unsigned char *)a2_2 + 660); /*0x46c56e*/
  ((Power *)a2_2)->FlagProcess(v3); /*0x46c577*/
  int v4; // ecx
  (*((unsigned char *)&(v4))) = *((unsigned char *)a2_2 + 666); /*0x46c57c*/
  ((Power *)a2_2)->FlagProcess(v4); /*0x46c585*/
  int v5; // edx
  (*((unsigned char *)&(v5))) = *((unsigned char *)a2_2 + 667); /*0x46c58a*/
  int v6; // eax
  v6 = ((Power *)a2_2)->FlagProcess(v5); /*0x46c593*/
  (*((unsigned char *)&(v6))) = *((unsigned char *)a2_2 + 668); /*0x46c598*/
  ((Power *)a2_2)->FlagProcess(v6); /*0x46c5a1*/
  int v7; // ecx
  (*((unsigned char *)&(v7))) = *((unsigned char *)a2_2 + 669); /*0x46c5a6*/
  ((Power *)a2_2)->FlagProcess(v7); /*0x46c5af*/
  int v8; // edx
  (*((unsigned char *)&(v8))) = *((unsigned char *)a2_2 + 670); /*0x46c5b4*/
  int v9; // eax
  v9 = ((Power *)a2_2)->FlagProcess(v8); /*0x46c5bd*/
  (*((unsigned char *)&(v9))) = *((unsigned char *)a2_2 + 671); /*0x46c5c2*/
  ((Power *)a2_2)->FlagProcess(v9); /*0x46c5cb*/
  int v10; // ecx
  (*((unsigned char *)&(v10))) = *((unsigned char *)a2_2 + 672); /*0x46c5d0*/
  ((Power *)a2_2)->FlagProcess(v10); /*0x46c5d9*/
  int v11; // edx
  (*((unsigned char *)&(v11))) = *((unsigned char *)a2_2 + 673); /*0x46c5de*/
  int v12; // eax
  v12 = ((Power *)a2_2)->FlagProcess(v11); /*0x46c5e7*/
  (*((unsigned char *)&(v12))) = *((unsigned char *)a2_2 + 674); /*0x46c5ec*/
  ((Power *)a2_2)->FlagProcess(v12); /*0x46c5f5*/
  int v13; // ecx
  (*((unsigned char *)&(v13))) = *((unsigned char *)a2_2 + 675); /*0x46c5fa*/
  ((Power *)a2_2)->FlagProcess(v13); /*0x46c603*/
  int v14; // edx
  (*((unsigned char *)&(v14))) = *((unsigned char *)a2_2 + 676); /*0x46c608*/
  int v15; // eax
  v15 = ((Power *)a2_2)->FlagProcess(v14); /*0x46c611*/
  (*((unsigned char *)&(v15))) = *((unsigned char *)a2_2 + 677); /*0x46c616*/
  ((Power *)a2_2)->FlagProcess(v15); /*0x46c61f*/
  int v16; // ecx
  (*((unsigned char *)&(v16))) = *((unsigned char *)a2_2 + 678); /*0x46c624*/
  ((Power *)a2_2)->FlagProcess(v16); /*0x46c62d*/
  int v17; // edx
  (*((unsigned char *)&(v17))) = *((unsigned char *)a2_2 + 679); /*0x46c632*/
  ((Power *)a2_2)->FlagProcess(v17); /*0x46c63b*/
  ((Checksummer *)((Checksummer *)a2_2))->Add_double(*((unsigned int *)a2_2 + 178), *((unsigned int *)a2_2 + 179)); /*0x46c650*/
  Power::TimerProcess(*((unsigned int *)a2_2 + 180)); /*0x46c65e*/
  Power::TimerProcess(*((unsigned int *)a2_2 + 183)); /*0x46c66c*/
  Power::TimerProcess(*((unsigned int *)a2_2 + 188)); /*0x46c67a*/
  int v18; // edx
  (*((unsigned char *)&(v18))) = *((unsigned char *)a2_2 + 759); /*0x46c67f*/
  return ((Power *)a2_2)->FlagProcess(v18); /*0x46c68d*/
}
} // namespace gamemd
// 0x46C890
namespace gamemd {
BulletTypeClass * BulletTypeClass::ddtor(char a2, int a1, int aP0, int aP1, int aP2, int a3)
{


  *(unsigned int *)a1->ObjectTypeClass = &vt_BulletTypeClass; /*0x46c896*/
  *(unsigned int *)&a1->ObjectTypeClass[4] = &vt_BulletTypeClass; /*0x46c89c*/
  *(unsigned int *)&a1->ObjectTypeClass[8] = &vt_BulletTypeClass; /*0x46c8a3*/
  *(unsigned int *)&a1->ObjectTypeClass[12] = &vt_BulletTypeClass; /*0x46c8aa*/
  AbstractClass::AnnounceExpiredPointer((void **)a1, 1); /*0x46c8b1*/
  BulletTypeClass *v6; // [esp+4h] [ebp-4h] BYREF
  v6 = (gamemd::BulletTypeClass *)(a1); /*0x46c8c6*/
  int v3; // eax
  v3 = (*(int (**)(int *, BulletTypeClass **))(g_BuildingLoadQueue_Array.LightVisibility + 16))( /*0x46c8ca*/
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
  v6 = (gamemd::BulletTypeClass *)(a1); /*0x46c90f*/
  int v4; // eax
  v4 = (*(int (**)(unsigned int *, BulletTypeClass **))(dword_A83C80 + 16))(&dword_A83C80, &v6); /*0x46c913*/
  if ( v4 != -1 && v4 < dword_A83C90 && v4 < --dword_A83C90 ) /*0x46c92e*/
  {
    do /*0x46c946*/
    {
      ++v4; /*0x46c936*/
      *((unsigned int *)dword_A83C84 + v4 - 1) = *((unsigned int *)dword_A83C84 + v4); /*0x46c93a*/
    }
    while ( v4 < dword_A83C90 ); /*0x46c946*/
  }
  ((void *)((int)a1))->Destruct(); /*0x46c94a*/
  if ( (a1 & 1) != 0 ) /*0x46c954*/
    __3_YAXPAX_Z((void *)(a1)); /*0x46c957*/
  return (void **)a1; /*0x46c961*/

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
  v3 = *(uint8_t *)((*((int (**)(FootClass *))a1->Owner->vfptr + 111))(a1->Owner) + 284); /*0x69fc31*/
  v4 = v2->u32_1C; /*0x69fc33*/
  if ( v3 != v4 ) /*0x69fc38*/
  {
    v2->COMObject_20 = v4; /*0x69fc3a*/
    v2->u32_1C = v3; /*0x69fc43*/
    Timer::Start((int)((Timer *)&v23), 3); /*0x69fc46*/
    v2->u32_24 = v23; /*0x69fc57*/
    *((unsigned int *)v2 + 10) = v24; /*0x69fc5d*/
    *((unsigned int *)v2 + 11) = v25; /*0x69fc64*/
    *((unsigned int *)v2 + 12) = 3; /*0x69fc67*/
  }
  if ( v1->MovementSpeed[1] == -1 || !(*(((unsigned char *)&(v1->TrackIndex)) + (sizeof(v1->TrackIndex) - 1))) ) /*0x69fc7a*/
  {
    movementDestination = v1->Owner->movementDestination; /*0x69fd16*/
    if ( movementDestination /*0x69fd54*/
      && (*((int (**)(AbstractClass *))movementDestination->vfptr + 11))(movementDestination) == 11
      && (v6 = v1->Owner,
          v7 = v6->movementDestination + 1,
          v8 = (unsigned short *)(*((int (**)(FootClass *, ShipLocomotionClass **))v6->vfptr + 110))(v6, &a1),
          *v8 == (*((unsigned short *)&(v7->vfptr))))
      && v8[1] == (*(((unsigned short *)&(v7->vfptr)) + 1)) )
    {
      v9 = (FootClass *)v2->u32_C; /*0x69fd56*/
      if ( !*&v9->q598 ) /*0x69fd59*/
        goto LABEL_20; /*0x69fd5f*/
    }
    else
    {
      Owner = v1->Owner; /*0x69fd7f*/
      if ( Owner->currentMission != 5 /*0x69fddc*/
        || (*(((unsigned char *)&(v1->TrackIndex)) + (sizeof(v1->TrackIndex) - 1)))
        || v1->SlopeTimer[3] == g_OverlayTypeConfig && *(unsigned long long *)v1->Dest == qword_B077FC
        || Owner->location[0] != v1->SlopeTimer[3]
        || Owner->location[1] != v1->Dest[0]
        || Owner->location[2] != v1->Dest[1] )
      {
        if ( (uint8_t)TimerClass::Active((int)Owner->primaryFacing) ) /*0x69fe28*/
        {
          (((unsigned char *)&(v1->TrackIndex))[2]) = 1; /*0x69fe35*/
          goto LABEL_32; /*0x69fe35*/
        }
        if ( (((unsigned char *)&(v1->TrackIndex))[2]) ) /*0x69ff5d*/
        {
          (((unsigned char *)&(v1->TrackIndex))[2]) = 0; /*0x69ff62*/
          (*((void (**)(FootClass *, unsigned int))v1->Owner->vfptr + 99))(v1->Owner, 0); /*0x69ff6b*/
          v16 = v1->Owner; /*0x69ff71*/
          if ( !v16->isAliveFlag || v16->inLimbo || v16->isFallingDown ) /*0x69ff84*/
            return 0; /*0x69ff95*/
        }
        if ( (*((int (**)(FootClass *))v1->Owner->vfptr + 97))(v1->Owner) == 5 /*0x69ffc4*/
          && !(*(uint8_t (__stdcall **)(ShipLocomotionClass *))(*(unsigned int *)v1->0 + 16))(v1)
          || (*((int (**)(FootClass *))v1->Owner->vfptr + 97))(v1->Owner) == 16 )
        {
          goto LABEL_32; /*0x69ffc4*/
        }
        if ( !(*(uint8_t (__stdcall **)(ShipLocomotionClass *))(*(unsigned int *)v1->0 + 16))(v1) ) /*0x69ffcd*/
        {
          v17 = v1->Owner; /*0x69ffd8*/
          if ( v17->pathDirections[0] == -1 ) /*0x69ffe1*/
          {
            if ( v17->isSinking ) /*0x69ffe7*/
            {
              if ( *((unsigned int *)v2 + 16) != g_OverlayTypeConfig || *(unsigned long long *)(v2 + 68) != qword_B077FC ) /*0x6a0006*/
              {
                v2->u32_40 = g_OverlayTypeConfig; /*0x6a0015*/
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
                v19 = (unsigned int *)(*((int (**)(AbstractClass *, int *, FootClass *))v18->vfptr + 19))( /*0x6a004d*/
                                  v18,
                                  &v23,
                                  v1->Owner);
                (*(void (__stdcall **)(ShipLocomotionClass *, unsigned int, unsigned int, unsigned int))(*(unsigned int *)v1->0 + 68))( /*0x6a0069*/
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
          && (*((int (**)(FootClass *))v20->vfptr + 97))(v20) != 7
          && (*(uint8_t (__stdcall **)(ShipLocomotionClass *))(*(unsigned int *)v1->0 + 16))(v1)
          && !(*((uint8_t (**)(FootClass *, int *))v1->Owner->vfptr + 179))(
                v1->Owner,
                &v1->SlopeTimer[3]) )
        {
          if ( *(&v2->u32_40) != g_OverlayTypeConfig || *(unsigned long long *)(v2 + 68) != qword_B077FC ) /*0x6a00cc*/
          {
            v2->u32_40 = g_OverlayTypeConfig; /*0x6a00db*/
            *(unsigned long long *)(v2 + 68) = qword_B077FC; /*0x6a00e3*/
            v2[99] = 0; /*0x6a00ef*/
          }
          v21 = v2->u32_C; /*0x6a00f2*/
          if ( *(unsigned int *)(v21 + 1432) ) /*0x6a00f5*/
          {
            ((FootClass *)v21)->ClearPathIndex(); /*0x6a010d*/
            if ( (*(uint8_t (**)(unsigned int, unsigned int, int))(*v2->u32_C + 1156))( /*0x6a011a*/
                   v2->u32_C,
                   0,
                   1) )
            {
              return 0; /*0x6a0131*/
            }
          }
          else
          {
            (*(void (**)(int, unsigned int, int))(*(unsigned int *)v21 + 1152))(v21, 0, 1); /*0x6a0102*/
          }
          goto LABEL_32; /*0x6a0108*/
        }
        (*((unsigned char *)&(a1))) = 0; /*0x6a013e*/
        WalkLocomotion::Update((int)&v1[-1].Piggybackee, &a1, 1, 0); /*0x6a0142*/
        if ( (unsigned char)a1 ) /*0x6a014b*/
          return 0; /*0x6a0156*/
        if ( !v1->Owner->isAliveFlag ) /*0x6a015c*/
          return 0; /*0x6a016d*/
        v22 = 0; /*0x6a0170*/
        goto LABEL_81; /*0x6a0170*/
      }
      v9 = (FootClass *)v2->u32_C; /*0x69fdde*/
      if ( !*&v9->q598 ) /*0x69fde7*/
      {
  LABEL_20:
        (*((void (**)(FootClass *, unsigned int, int))v9->vfptr + 288))(v9, 0, 1); /*0x69fd65*/
        return 0; /*0x69fd79*/
      }
    }
    (v9)->ClearPathIndex(); /*0x69fe00*/
    (*(void (**)(unsigned int, unsigned int, int))(**((unsigned int **)v2 + 3) + 1156))(*(&v2->u32_C), 0, 1); /*0x69fe0d*/
    return 0; /*0x69fe1c*/
  }
  if ( WalkLocomotion::ProcessCollision((int)&v1[-1].Piggybackee, 0) || !v1->Owner->isAliveFlag ) /*0x69fc96*/
    return 0; /*0x69fc9c*/
  if ( v1->MovementSpeed[1] != -1 /*0x69fcd4*/
    || !(*(uint8_t (__stdcall **)(ShipLocomotionClass *))(*(unsigned int *)v1->0 + 16))(v1)
    && v1->Owner->pathDirections[0] == -1
    || (*((int (**)(FootClass *))v1->Owner->vfptr + 11))(v1->Owner) == 1 && (((unsigned char *)&(v1->Owner[1].uniqueId))[1]) )
  {
    goto LABEL_32; /*0x69fcda*/
  }
  (*((unsigned char *)&(a1))) = 0; /*0x69fcea*/
  WalkLocomotion::Update((int)&v1[-1].Piggybackee, &a1, 1, 0); /*0x69fcee*/
  if ( (unsigned char)a1 || !v1->Owner->isAliveFlag ) /*0x69fd00*/
    return 0; /*0x69fd06*/
  v22 = 1; /*0x69fd0c*/
  LABEL_81:
  WalkLocomotion::ProcessCollision((int)&v1[-1].Piggybackee, v22); /*0x6a0171*/
  if ( !v1->Owner->isAliveFlag ) /*0x6a017b*/
    return 0; /*0x6a018a*/
  LABEL_32:
  if ( (*(uint8_t (__stdcall **)(ShipLocomotionClass *))(*(unsigned int *)v1->0 + 128))(v1) ) /*0x69fe3c*/
  {
    if ( !(*(unsigned int *)&((unsigned int *)&stru_A8EB00)[416] % 8) /*0x69fe6e*/
      && !*(unsigned char *)((*((int (**)(FootClass *))v1->Owner->vfptr + 33))(v1->Owner) + 3433) )
    {
      v12 = v1->Owner; /*0x69fe76*/
      if ( !v12->onBridge && *(unsigned int *)((*((int (**)(FootClass *))v12->vfptr + 111))(v12) + 236) == 2 ) /*0x69fe90*/
      {
        if ( *(unsigned int *)(*(unsigned int *)&g_RulesClass_Instance + 148) ) /*0x69fe97*/
        {
          v13 = (AnimClass *)operator new(0x1C8u); /*0x69fea4*/
          if ( v13 ) /*0x69feae*/
          {
            location = v1->Owner->location; /*0x69feb4*/
            v23 = *location; /*0x69fec5*/
            v24 = location[1]; /*0x69fecc*/
            v25 = location[2]; /*0x69fed8*/
            AnimClass::ctor( /*0x69feeb*/
              v13,
              *(void **)(*(unsigned int *)&g_RulesClass_Instance + 148),
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
    && *(unsigned long long *)&v1->Dest[1] == (((unsigned long)(unsigned int)((*(((unsigned int *)&(qword_B077FC)) + 1)))) | ((unsigned long)(unsigned int)(g_OverlayTypeConfig) << 32))
    && *(unsigned long long *)v1->HeadToCoord == qword_B077FC )
  {
    v15 = v1->Owner; /*0x69ff25*/
    if ( v15->pathDirections[0] == -1 && *(double *)v15->currentSpeed_percentage > 0.0 ) /*0x69ff41*/
      (*((void (**)(FootClass *, unsigned int, unsigned int))v15->vfptr + 337))(v15, 0, 0); /*0x69ff47*/
  }
  return (*(char (__stdcall **)(ShipLocomotionClass *))(*(unsigned int *)v1->0 + 16))(v1); /*0x69fd72*/
}
} // namespace gamemd
// 0x46C4F0
namespace gamemd {
unsigned int * BulletTypeClass::GetROF(unsigned int * a1, int * a2)
{

  int v5; // [esp+0h] [ebp-Ch] BYREF
  v5 = *a2; /*0x46c4f9*/
  int v6; // [esp+4h] [ebp-8h]
  v6 = a2[1]; /*0x46c50a*/
  int v7; // [esp+8h] [ebp-4h]
  v7 = a2[2]; /*0x46c511*/
  int GroundHeight; // eax
  GroundHeight = Cell::GetGroundHeight(&v5); /*0x46c515*/
  int v3; // ecx
  v3 = v7; /*0x46c51a*/
  if ( v7 <= GroundHeight ) /*0x46c520*/
    v3 = Cell::GetGroundHeight(&v5) + 1; /*0x46c533*/
  *(unsigned int *)a1->vfptr = v5; /*0x46c53f*/
  *(unsigned int *)&a1->vfptr[4] = v6; /*0x46c545*/
  *(unsigned int *)&a1->vfptr[8] = v3; /*0x46c549*/
  return a1->vfptr; /*0x46c54c*/
}
} // namespace gamemd
// 0x46C6A0
namespace gamemd {
int BulletTypeClass::SaveLoad_Prefix(gamemd::ObjectTypeClass* aP0, int aP1)
{

  int result; // eax
  result = ObjectTypeClass::LoadCleanup((ObjectTypeClass *)aP0, aP1); /*0x46c6ab*/
  if ( result >= 0 ) /*0x46c6b2*/
  {
    if ( aP0 ) /*0x46c6b6*/
    {
      ObjectTypeClass::Construct((ObjectTypeClass *)aP0, (int)&aP1); /*0x46c6bf*/
      /* X11: vtable install elided (implicit via BulletTypeClass virtuals 0x46c6c4) */
      *(unsigned int *)&aP0->vfptr[4] = &vt_BulletTypeClass; /*0x46c6ca*/
      *(unsigned int *)&aP0->vfptr[8] = &vt_BulletTypeClass; /*0x46c6d1*/
      *(unsigned int *)&aP0->vfptr[12] = &vt_BulletTypeClass; /*0x46c6d8*/
    }
    VoxelAnimType::LoadAnim(aP0->vfptr); /*0x46c6e1*/
    ObjectTypeClass::Load2DArt(aP0->vfptr); /*0x46c6e8*/
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
int BulletTypeClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, gamemd::ObjectTypeClass * aP1, int aP2)
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


  int result; // eax
  result = a2; /*0x46c820*/
  if ( a2 == this->Trailer_d ) /*0x46c82c*/
    this->Trailer_d = 0; /*0x46c82e*/
  return result; /*0x46c838*/

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
  v4 = 0; /*0x47515e*/
  char Source[128]; // [esp+Ch] [ebp-80h] BYREF
  Source[0] = 0; /*0x475166*/
  if ( !a4 || dword_A83CA8 <= 0 ) /*0x475177*/
    return 1; /*0x475177*/
  char *v5; // ebp
  v5 = (char *)dword_A83C9C; /*0x47517e*/
  int v8; // [esp+4h] [ebp-88h]
  v8 = dword_A83CA8; /*0x475186*/
  do /*0x475213*/
  {
  int v6; // edx
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
    return INIClass::SetString(this->ObjectTypeClass, Block, a3, Source); /*0x475239*/
  else
    return 1; /*0x475248*/

}
} // namespace gamemd