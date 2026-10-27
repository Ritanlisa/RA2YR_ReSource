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
#include "e4/classes/ObjectPtr_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"
// X129: fresh-render label declarations (auto, idempotent)
extern unsigned char aAcceleration[13];  // data: 0x81B140
extern unsigned char aAirburst[9];  // data: 0x81B078
extern unsigned char aAirburstweapon[15];  // data: 0x81B04C
extern unsigned char aAnimhigh[9];  // data: 0x81AFE8
extern unsigned char aAnimlow[8];  // data: 0x81AFF4
extern unsigned char aAnimpalette[12];  // data: 0x81AFD0
extern unsigned char aAnimrate[9];  // data: 0x81AFDC
extern unsigned char aArcing[7];  // data: 0x81B130
extern unsigned char aBouncy[7];  // data: 0x81B084
extern unsigned char aCluster[8];  // data: 0x81B070
extern unsigned char aCourselockdura[19];  // data: 0x81B150
extern unsigned char aDegenerates[12];  // data: 0x81B08C
extern unsigned char aDetonationalti[19];  // data: 0x81B018
extern unsigned char aDropping[9];  // data: 0x81B0DC
extern unsigned char aFirerspalette[14];  // data: 0x81AFFC
extern unsigned char aFlakscatter[12];  // data: 0x81B0A0
extern unsigned char aFloater[8];  // data: 0x81B128
extern unsigned char aInaccurate[11];  // data: 0x81B0AC
extern unsigned char aInviso_0[7];  // data: 0x81B0CC
extern unsigned char aProximity[10];  // data: 0x81B0C0
extern unsigned char aRanged[7];  // data: 0x81B0B8
extern unsigned char aRotates[8];  // data: 0x81B05C
extern unsigned char aScalable[9];  // data: 0x81B064
extern unsigned char aShrapnelcount[14];  // data: 0x81B02C
extern unsigned char aShrapnelweapon[15];  // data: 0x81B03C
extern unsigned char aSubjecttocliff[16];  // data: 0x81B118
extern unsigned char aSubjecttoeleva[19];  // data: 0x81B104
extern unsigned char aSubjecttowalls[15];  // data: 0x81B0F4
extern unsigned char aVertical[9];  // data: 0x81B00C
extern unsigned char aVeryhigh[9];  // data: 0x81B0E8

// [w20m5] fn vocab supply (g57b5-W5 variadic convention); evidence: raw_decomp fn_54.c 0x544CE0
namespace gamemd {
int Entity_Read(ObjectClass *p_this);  // x4:ida@0x544ce0
} // namespace gamemd
// 0x465450
namespace gamemd {  // G42.18 ns repair
BuildingTypeClass * * BulletTypeClass::ReadArmor()
{

  int v0; // edx
  int v1; // edi
  char *v2; // ecx
  int v3; // esi
  int result; // eax
  int i; // edi
  unsigned int *v6; // esi
  int v7; // eax
  char Destination[60]; // [esp+Ch] [ebp-3Ch] BYREF

  v0 = dword_A83C78; /*0x465450*/
  v1 = 0; /*0x46545e*/
  if ( dword_A83C78 > 0 ) /*0x465462*/
  {
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
        (*(void (**)(Draw *, int))dword_89DDC0->Draw_field_00)(dword_89DDC0, 1); /*0x465491*/
      v3 = __2_YAPAXI_Z(0x20u); /*0x46549a*/
      if ( v3 ) /*0x4654a1*/
      {
        *(unsigned int *)(v3 + 12) = 0; /*0x4654a6*/
        *(unsigned int *)(v3 + 4) = v1 + 16; /*0x4654ab*/
        *(unsigned int *)(v3 + 8) = v1 + 16; /*0x4654b6*/
        /* X11: ptr_0 install elided (X67 star-deref, RHS XSurface_Vtable) */  /*0x4654b9*/
        *(unsigned int *)(v3 + 16) = 1; /*0x4654bf*/
        ((Buffer *)(v3 + 20))->Init(0, (v1 + 16) * (v1 + 16)); /*0x4654c6*/
        /* X11: ptr_0 install elided (X67 star-deref, RHS BSurface_Vtable) */  /*0x4654cb*/
        dword_89DDC0 = (Draw *)v3; /*0x4654d1*/
      }
      else
      {
        dword_89DDC0 = 0; /*0x4654d9*/
      }
    }
  }
  result = dword_A83C78; /*0x4654df*/
  for ( i = 0; i < dword_A83C78; ++i ) /*0x4654e8*/
  {
    v6 = (unsigned int *)*((unsigned int *)dword_A83C6C + i); /*0x4654f7*/
    Destination[0] = 0; /*0x465500*/
    INIClass::GetString((INIClass *)dword_887048, (unsigned __int8 *)v6 + 36, aTotile, 0, Destination, 60); /*0x46550e*/
    v7 = Entity_Read((ObjectClass *)Destination); /*0x465517*/
    if ( v7 >= 0 && v7 < *(int *)&stru_A8E960.random[452] ) /*0x465526*/
      v6[918] = *(unsigned int *)(*(unsigned int *)&stru_A8E960.random[440] + 4 * v7); /*0x465531*/
    result = dword_A83C78; /*0x465537*/
  }
  return result; /*0x465541*/

}
} // namespace gamemd
// 0x465CC0
namespace gamemd {
BuildingTypeClass * * BulletTypeClass::ReadTrailerAnim()
{

  int result = dword_A83C78; // eax /*0x465cc0*/
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
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7E491C) */  /*0x46bce6*/
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7E491C) */  /*0x46bcec*/
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7E491C) */  /*0x46bcf2*/
  /* X11: ptr_0 install elided (implicit via BulletTypeClass virtuals 0x46bcf9) */
  ((int)(&this->Elasticity_d))->GenerateUniqueID(); /*0x46bd00*/
  this->Elasticity_d = 1; /*0x46bd05*/
  this->Elasticity_d = 1; /*0x46bd0c*/
  this->Elasticity_d = 0; /*0x46bd13*/
  this->Elasticity_d = 0; /*0x46bd19*/
  this->Insignificant_d = 1; /*0x46bd1f*/
  this->Elasticity_d = 1; /*0x46bd26*/
  this->Elasticity_d = 0; /*0x46bd2d*/
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
  unsigned int *v24; // eax
  unsigned int *v25; // eax
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
  unsigned int *v40; // [esp+8h] [ebp-84h]
  unsigned int *v41; // [esp+8h] [ebp-84h]
  char Destination[128]; // [esp+Ch] [ebp-80h] BYREF

  v4 = v3;  /*0x46beef*/
  INIClass::ResetSection((INIClass *)this);  /*0x46bef3*/
  if ( !((ObjectTypeClass *)v4)->LoadFromINI((unsigned __int8 ***)this) )
    return 0;  /*0x46c42a*/  /*0x46befb*/
  *(unsigned int *)(v4 + 752) = INIClass::ReadInt_Overwrite(
                            (bool *)this,
                            (unsigned __int8 *)(v4 + 36),
                            &unk_81B168,
                            *(unsigned int *)(v4 + 752));  /*0x46bf21*/
  *(unsigned int *)(v4 + 732) = INIClass::ReadInt_Overwrite(
                            (bool *)this,
                            (unsigned __int8 *)(v4 + 36),
                            &off_81B164,
                            *(unsigned int *)(v4 + 732));  /*0x46bf3b*/
  *(unsigned int *)(v4 + 736) = INIClass::ReadInt_Overwrite(
                            (bool *)this,
                            (unsigned __int8 *)(v4 + 36),
                            aCourselockdura,
                            *(unsigned int *)(v4 + 736));  /*0x46bf55*/
  INIClass::ReadDouble_Overwrite(
    (double *)&this->ObjectTypeClass,
    (unsigned __int8 *)(v4 + 36),
    g_INI_Key_Elasticity,
    *(double *)(v4 + 712));  /*0x46bf71*/
  __asm { fstp    qword ptr [esi+2C8h] }  /*0x46bf76*/
  *(double *)(v4 + 712) = _RT1;  /*0x46bf76*/
  *(unsigned int *)(v4 + 720) = INIClass::ReadInt_Overwrite(
                            (bool *)this,
                            (unsigned __int8 *)(v4 + 36),
                            aAcceleration,
                            *(unsigned int *)(v4 + 720));  /*0x46bf90*/
  *(unsigned int *)(v4 + 724) = BuildingTypeClass::FindAnimByName(
                            (BuildingTypeClass *)this,
                            (unsigned __int8 *)(v4 + 36),
                            (unsigned __int8 *)aColor,
                            *(unsigned int *)(v4 + 724));  /*0x46bfaa*/
  *(unsigned char *)(v4 + 667) = INIClass::ReadBool_Overwrite(
                           &this->ObjectTypeClass,
                           (unsigned __int8 *)(v4 + 36),
                           aArcing,
                           *(unsigned char *)(v4 + 667));  /*0x46bfc4*/
  *(unsigned char *)(v4 + 661) = INIClass::ReadBool_Overwrite(
                           &this->ObjectTypeClass,
                           (unsigned __int8 *)(v4 + 36),
                           aFloater,
                           *(unsigned char *)(v4 + 661));  /*0x46bfde*/
  *(unsigned char *)(v4 + 662) = INIClass::ReadBool_Overwrite(
                           &this->ObjectTypeClass,
                           (unsigned __int8 *)(v4 + 36),
                           aSubjecttocliff,
                           *(unsigned char *)(v4 + 662));  /*0x46bff8*/
  *(unsigned char *)(v4 + 663) = INIClass::ReadBool_Overwrite(
                           &this->ObjectTypeClass,
                           (unsigned __int8 *)(v4 + 36),
                           aSubjecttoeleva,
                           *(unsigned char *)(v4 + 663));  /*0x46c012*/
  *(unsigned char *)(v4 + 664) = INIClass::ReadBool_Overwrite(
                           &this->ObjectTypeClass,
                           (unsigned __int8 *)(v4 + 36),
                           aSubjecttowalls,
                           *(unsigned char *)(v4 + 664));  /*0x46c02c*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite(
                     &this->ObjectTypeClass,
                     (unsigned __int8 *)(v4 + 36),
                     aVeryhigh,
                     *(unsigned char *)(v4 + 665));  /*0x46c041*/
  v7 = *(unsigned char *)(v4 + 666);  /*0x46c046*/
  *(unsigned char *)(v4 + 665) = Bool_Overwrite;  /*0x46c04c*/
  v8 = INIClass::ReadBool_Overwrite(&this->ObjectTypeClass, (unsigned __int8 *)(v4 + 36), aShadow, v7);  /*0x46c05b*/
  v32 = *(unsigned char *)(v4 + 668);  /*0x46c068*/
  *(unsigned char *)(v4 + 666) = v8;  /*0x46c06f*/
  *(unsigned char *)(v4 + 668) = INIClass::ReadBool_Overwrite(&this->ObjectTypeClass, (unsigned __int8 *)(v4 + 36), aDropping, v32);  /*0x46c07a*/
  v9 = INIClass::ReadBool_Overwrite(
         &this->ObjectTypeClass,
         (unsigned __int8 *)(v4 + 36),
         (unsigned __int8 *)aLevel,
         *(unsigned char *)(v4 + 669));  /*0x46c08f*/
  v10 = *(unsigned char *)(v4 + 670);  /*0x46c094*/
  *(unsigned char *)(v4 + 669) = v9;  /*0x46c09a*/
  v11 = INIClass::ReadBool_Overwrite(&this->ObjectTypeClass, (unsigned __int8 *)(v4 + 36), aInviso_0, v10);  /*0x46c0a9*/
  v33 = *(unsigned char *)(v4 + 671);  /*0x46c0b6*/
  *(unsigned char *)(v4 + 670) = v11;  /*0x46c0bd*/
  *(unsigned char *)(v4 + 671) = INIClass::ReadBool_Overwrite(&this->ObjectTypeClass, (unsigned __int8 *)(v4 + 36), aProximity, v33);  /*0x46c0c8*/
  v12 = INIClass::ReadBool_Overwrite(&this->ObjectTypeClass, (unsigned __int8 *)(v4 + 36), aRanged, *(unsigned char *)(v4 + 672));  /*0x46c0dd*/
  v13 = *(unsigned char *)(v4 + 674);  /*0x46c0e2*/
  *(unsigned char *)(v4 + 672) = v12;  /*0x46c0e8*/
  v14 = INIClass::ReadBool_Overwrite(&this->ObjectTypeClass, (unsigned __int8 *)(v4 + 36), aInaccurate, v13);  /*0x46c0f7*/
  v34 = *(unsigned char *)(v4 + 675);  /*0x46c104*/
  *(unsigned char *)(v4 + 674) = v14;  /*0x46c10b*/
  *(unsigned char *)(v4 + 675) = INIClass::ReadBool_Overwrite(&this->ObjectTypeClass, (unsigned __int8 *)(v4 + 36), aFlakscatter, v34);  /*0x46c116*/
  v15 = INIClass::ReadBool_Overwrite(&this->ObjectTypeClass, (unsigned __int8 *)(v4 + 36), aAa, *(unsigned char *)(v4 + 676));  /*0x46c12b*/
  v16 = *(unsigned char *)(v4 + 677);  /*0x46c130*/
  *(unsigned char *)(v4 + 676) = v15;  /*0x46c136*/
  v17 = INIClass::ReadBool_Overwrite(&this->ObjectTypeClass, (unsigned __int8 *)(v4 + 36), aAg, v16);  /*0x46c145*/
  v18 = *(unsigned char *)(v4 + 678);  /*0x46c14a*/
  *(unsigned char *)(v4 + 677) = v17;  /*0x46c150*/
  *(unsigned char *)(v4 + 678) = INIClass::ReadBool_Overwrite(&this->ObjectTypeClass, (unsigned __int8 *)(v4 + 36), aDegenerates, v18);  /*0x46c164*/
  v19 = INIClass::ReadBool_Overwrite(&this->ObjectTypeClass, (unsigned __int8 *)(v4 + 36), aBouncy, *(unsigned char *)(v4 + 679));  /*0x46c179*/
  v20 = *(unsigned char *)(v4 + 660);  /*0x46c17e*/
  *(unsigned char *)(v4 + 679) = v19;  /*0x46c184*/
  v21 = INIClass::ReadBool_Overwrite(&this->ObjectTypeClass, (unsigned __int8 *)(v4 + 36), aAirburst, v20);  /*0x46c193*/
  v35 = *(unsigned int *)(v4 + 684);  /*0x46c1a0*/
  *(unsigned char *)(v4 + 660) = v21;  /*0x46c1a7*/
  *(unsigned int *)(v4 + 684) = INIClass::ReadInt_Overwrite((bool *)this, (unsigned __int8 *)(v4 + 36), aCluster, v35);  /*0x46c1b2*/
  *(unsigned char *)(v4 + 748) = INIClass::ReadBool_Overwrite(
                           &this->ObjectTypeClass,
                           (unsigned __int8 *)(v4 + 36),
                           aScalable,
                           *(unsigned char *)(v4 + 748));  /*0x46c1e2*/
  if ( INIClass::GetString(
         (INIClass *)this,
         (unsigned __int8 *)(v4 + 36),
         (unsigned __int8 *)g_INI_Key_Image,
         &g_INI_DefaultBuffer,
         (char *)(v4 + 504),
         25) > 0 )
  {  /*0x46c1ef*/
    v39 = *(unsigned int **)(v4 + 728);  /*0x46c20a*/
    if ( INIClass::GetString(
           &dword_887180,
           (unsigned __int8 *)(v4 + 504),
           aTrailer,
           &g_INI_DefaultBuffer,
           Destination,
           128) )
    {  /*0x46c219*/
      v22 = (Destination)->FindOrCreate();  /*0x46c226*/
    }
    else
    {
      v22 = v39;  /*0x46c22d*/
    }
    *(unsigned int *)(v4 + 728) = v22;  /*0x46c231*/
    *(unsigned int *)(v4 + 740) = INIClass::ReadInt_Overwrite(
                              (bool *)dword_887180.__pad_0,
                              (unsigned __int8 *)(v4 + 504),
                              aSpawndelay,
                              *(unsigned int *)(v4 + 740));  /*0x46c24e*/
    v23 = INIClass::ReadBool_Overwrite(
            (int *)dword_887180.__pad_0,
            (unsigned __int8 *)(v4 + 504),
            aRotates,
            *(unsigned char *)(v4 + 673) == 0);  /*0x46c26b*/
    v36 = *(unsigned char *)(v4 + 759);  /*0x46c27d*/
    *(unsigned char *)(v4 + 673) = v23 == 0;  /*0x46c287*/
    *(unsigned char *)(v4 + 759) = INIClass::ReadBool_Overwrite(
                             (int *)dword_887180.__pad_0,
                             (unsigned __int8 *)(v4 + 504),
                             g_INI_Key_Flat,
                             v36);  /*0x46c292*/
  }
  v40 = *(unsigned int **)(v4 + 688);  /*0x46c2ad*/
  if ( INIClass::GetString(
         (INIClass *)this,
         (unsigned __int8 *)(v4 + 36),
         aAirburstweapon,
         &g_INI_DefaultBuffer,
         Destination,
         128) )
  {  /*0x46c2b9*/
    v24 = InfantryTypeClass::Find(Destination);  /*0x46c2c6*/
  }
  else
  {
    v24 = v40;  /*0x46c2cd*/
  }
  *(unsigned int *)(v4 + 688) = v24;  /*0x46c2db*/
  v41 = *(unsigned int **)(v4 + 692);  /*0x46c2f4*/
  if ( INIClass::GetString(
         (INIClass *)this,
         (unsigned __int8 *)(v4 + 36),
         aShrapnelweapon,
         &g_INI_DefaultBuffer,
         Destination,
         128) )
  {  /*0x46c2f8*/
    v25 = InfantryTypeClass::Find(Destination);  /*0x46c305*/
  }
  else
  {
    v25 = v41;  /*0x46c30c*/
  }
  v37 = *(unsigned int *)(v4 + 696);  /*0x46c318*/
  *(unsigned int *)(v4 + 692) = v25;  /*0x46c31f*/
  *(unsigned int *)(v4 + 696) = INIClass::ReadInt_Overwrite((bool *)this, (unsigned __int8 *)(v4 + 36), aShrapnelcount, v37);  /*0x46c32a*/
  Int_Overwrite = INIClass::ReadInt_Overwrite(
                    (bool *)this,
                    (unsigned __int8 *)(v4 + 36),
                    aDetonationalti,
                    *(unsigned int *)(v4 + 700));  /*0x46c33f*/
  v27 = *(unsigned char *)(v4 + 704);  /*0x46c344*/
  *(unsigned int *)(v4 + 700) = Int_Overwrite;  /*0x46c34a*/
  v28 = INIClass::ReadBool_Overwrite(&this->ObjectTypeClass, (unsigned __int8 *)(v4 + 36), aVertical, v27);  /*0x46c359*/
  v38 = *(unsigned char *)(v4 + 681);  /*0x46c366*/
  *(unsigned char *)(v4 + 704) = v28;  /*0x46c36d*/
  *(unsigned char *)(v4 + 681) = INIClass::ReadBool_Overwrite(&this->ObjectTypeClass, (unsigned __int8 *)(v4 + 36), aFirerspalette, v38);  /*0x46c378*/
  *(unsigned char *)(v4 + 756) = INIClass::ReadInt_Overwrite(
                           (bool *)dword_887180.__pad_0,
                           (unsigned __int8 *)(v4 + 504),
                           aAnimlow,
                           *(unsigned __int8 *)(v4 + 756));  /*0x46c399*/
  v29 = INIClass::ReadInt_Overwrite(
          (bool *)dword_887180.__pad_0,
          (unsigned __int8 *)(v4 + 504),
          aAnimhigh,
          *(unsigned __int8 *)(v4 + 757));  /*0x46c3b1*/
  v30 = *(unsigned __int8 *)(v4 + 758);  /*0x46c3bd*/
  *(unsigned char *)(v4 + 757) = v29;  /*0x46c3c3*/
  *(unsigned char *)(v4 + 758) = INIClass::ReadInt_Overwrite(
                           (bool *)dword_887180.__pad_0,
                           (unsigned __int8 *)(v4 + 504),
                           aAnimrate,
                           v30);  /*0x46c3d5*/
  *(unsigned char *)(v4 + 680) = INIClass::ReadBool_Overwrite(
                           (int *)dword_887180.__pad_0,
                           (unsigned __int8 *)(v4 + 504),
                           aAnimpalette,
                           *(unsigned char *)(v4 + 680));  /*0x46c3f2*/
  if ( !*(unsigned char *)(v4 + 670) )
    ((char *)v4)->Load2DArt();  /*0x46c406*/  /*0x46c3f8*/
  if ( *(unsigned char *)(v4 + 566) )
    ((char *)v4)->LoadAnim();  /*0x46c417*/  /*0x46c40b*/
  return 1;  /*0x46c41c*/

}
} // namespace gamemd
// 0x46C560
namespace gamemd {
int BulletTypeClass::ProcessPower(int * a2, void *a2_2)
{

  unsigned __int8 *v3; // eax
  unsigned __int8 *v4; // ecx
  unsigned __int8 *v5; // edx
  unsigned __int8 *v6; // eax
  unsigned __int8 *v7; // ecx
  unsigned __int8 *v8; // edx
  unsigned __int8 *v9; // eax
  unsigned __int8 *v10; // ecx
  unsigned __int8 *v11; // edx
  unsigned __int8 *v12; // eax
  unsigned __int8 *v13; // ecx
  unsigned __int8 *v14; // edx
  unsigned __int8 *v15; // eax
  unsigned __int8 *v16; // ecx
  unsigned __int8 *v17; // edx
  unsigned __int8 *v18; // edx

  v3 = (unsigned __int8 *)((AbstractTypeClass *)this)->ProcessPower(a2); /*0x46c569*/
  LOBYTE(v3) = this->airburst[0]; /*0x46c56e*/
  ((Power *)a2)->FlagProcess((int)v3); /*0x46c577*/
  LOBYTE(v4) = this->shadow[0]; /*0x46c57c*/
  ((Power *)a2)->FlagProcess((int)v4); /*0x46c585*/
  LOBYTE(v5) = this->arcing[0]; /*0x46c58a*/
  v6 = (unsigned __int8 *)((Power *)a2)->FlagProcess((int)v5); /*0x46c593*/
  LOBYTE(v6) = this->dropping[0]; /*0x46c598*/
  ((Power *)a2)->FlagProcess((int)v6); /*0x46c5a1*/
  LOBYTE(v7) = this->level[0]; /*0x46c5a6*/
  ((Power *)a2)->FlagProcess((int)v7); /*0x46c5af*/
  LOBYTE(v8) = this->inviso[0]; /*0x46c5b4*/
  v9 = (unsigned __int8 *)((Power *)a2)->FlagProcess((int)v8); /*0x46c5bd*/
  LOBYTE(v9) = this->proximity[0]; /*0x46c5c2*/
  ((Power *)a2)->FlagProcess((int)v9); /*0x46c5cb*/
  LOBYTE(v10) = this->ranged[0]; /*0x46c5d0*/
  ((Power *)a2)->FlagProcess((int)v10); /*0x46c5d9*/
  LOBYTE(v11) = this->noRotate[0]; /*0x46c5de*/
  v12 = (unsigned __int8 *)((Power *)a2)->FlagProcess((int)v11); /*0x46c5e7*/
  LOBYTE(v12) = this->inaccurate[0]; /*0x46c5ec*/
  ((Power *)a2)->FlagProcess((int)v12); /*0x46c5f5*/
  LOBYTE(v13) = this->flakScatter[0]; /*0x46c5fa*/
  ((Power *)a2)->FlagProcess((int)v13); /*0x46c603*/
  LOBYTE(v14) = this->AA[0]; /*0x46c608*/
  v15 = (unsigned __int8 *)((Power *)a2)->FlagProcess((int)v14); /*0x46c611*/
  LOBYTE(v15) = this->AG[0]; /*0x46c616*/
  ((Power *)a2)->FlagProcess((int)v15); /*0x46c61f*/
  LOBYTE(v16) = this->degenerates[0]; /*0x46c624*/
  ((Power *)a2)->FlagProcess((int)v16); /*0x46c62d*/
  LOBYTE(v17) = this->bouncy[0]; /*0x46c632*/
  ((Power *)a2)->FlagProcess((int)v17); /*0x46c63b*/
  ((Checksummer *)a2)->Add_double(this->elasticity[0], this->elasticity[1]); /*0x46c650*/
  Power::TimerProcess(this->Elasticity_d); /*0x46c65e*/
  Power::TimerProcess(this->rot); /*0x46c66c*/
  Power::TimerProcess(this->arm); /*0x46c67a*/
  LOBYTE(v18) = this->flat_flag[0]; /*0x46c67f*/
  return ((Power *)a2)->FlagProcess((int)v18); /*0x46c68d*/

}
} // namespace gamemd
// 0x46C890
namespace gamemd {
BulletTypeClass * BulletTypeClass::ddtor(char a2, int a1, int aP0, int aP1, int aP2, int a3)
{


  /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7E491C) */  /*0x46c896*/
  /* X11: ptr_0 install elided (X68 star-amp-named, RHS g_ptr_7E491C) */  /*0x46c89c*/
  /* X11: ptr_0 install elided (X68 star-amp-named, RHS g_ptr_7E491C) */  /*0x46c8a3*/
  /* X11: ptr_0 install elided (X68 star-amp-named, RHS g_ptr_7E491C) */  /*0x46c8aa*/
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

  double v1; // st7
  ShipLocomotionClass *v2; // esi
  char *v3; // edi
  int v4; // eax
  int v5; // ecx
  char v6; // al
  int v7; // ecx
  unsigned int *v8; // ecx
  unsigned short *v9; // ebp
  unsigned short *v10; // eax
  FootClass *v11; // ecx
  unsigned int *Owner; // ecx
  unsigned char *v14; // ecx
  AnimClass *v15; // eax
  int *v16; // ecx
  int v17; // ecx
  unsigned char *v18; // eax
  int v19; // eax
  int v20; // ecx
  unsigned int *eax64; // eax
  unsigned char *v22; // ecx
  FootClass *v21; // ecx
  char v24; // [esp-4h] [ebp-24h]
  int v25; // [esp+10h] [ebp-10h] BYREF
  int v26; // [esp+14h] [ebp-Ch]
  int v27; // [esp+18h] [ebp-8h]

  v2 = this; /*0x69fc16*/
  v3 = (char *)this - 4; /*0x69fc28*/
  v4 = *(unsigned __int8 *)((*(int (**)(int))(*(unsigned int *)this->Owner + 444))(this->Owner) + 284); /*0x69fc31*/
  v5 = *((unsigned int *)v3 + 7); /*0x69fc33*/
  if ( v4 != v5 ) /*0x69fc38*/
  {
    *((unsigned int *)v3 + 8) = v5; /*0x69fc3a*/
    *((unsigned int *)v3 + 7) = v4; /*0x69fc43*/
    ((Timer *)&v25)->Start(3); /*0x69fc46*/
    *((unsigned int *)v3 + 9) = v25; /*0x69fc57*/
    *((unsigned int *)v3 + 10) = v26; /*0x69fc5d*/
    *((unsigned int *)v3 + 11) = v27; /*0x69fc64*/
    *((unsigned int *)v3 + 12) = 3; /*0x69fc67*/
  }
  if ( v2->MovementSpeed[1] == -1 || !HIBYTE(v2->TrackIndex) ) /*0x69fc7a*/
  {
    v7 = *(unsigned int *)(v2->Owner + 1444); /*0x69fd16*/
    if ( v7 /*0x69fd54*/
      && (*(int (**)(int))(*(unsigned int *)v7 + 44))(v7) == 11
      && (v8 = (unsigned int *)v2->Owner,
          v9 = (unsigned short *)(v8[361] + 36),
          v10 = (unsigned short *)(*(int (**)(unsigned int *, ShipLocomotionClass **))(*v8 + 440))(v8, &this),
          *v10 == *v9)
      && v10[1] == v9[1] )
    {
      v11 = (FootClass *)*((unsigned int *)v3 + 3); /*0x69fd56*/
      if ( !*&v11->q598 ) /*0x69fd59*/
        goto LABEL_20; /*0x69fd5f*/
    }
    else
    {
      Owner = (unsigned int *)v2->Owner; /*0x69fd7f*/
      if ( Owner[43] != 5 /*0x69fddc*/
        || HIBYTE(v2->TrackIndex)
        || v2->SlopeTimer[3] == g_OverlayTypeConfig && *(unsigned long long *)v2->Dest == qword_B077FC
        || Owner[39] != v2->SlopeTimer[3]
        || Owner[40] != v2->Dest[0]
        || Owner[41] != v2->Dest[1] )
      {
        if ( (unsigned __int8)((int)(Owner + 226))->Active() ) /*0x69fe28*/
        {
          BYTE2(v2->TrackIndex) = 1; /*0x69fe35*/
          goto LABEL_32; /*0x69fe35*/
        }
        if ( BYTE2(v2->TrackIndex) ) /*0x69ff5d*/
        {
          BYTE2(v2->TrackIndex) = 0; /*0x69ff62*/
          (*(void (**)(int, unsigned int))(*(unsigned int *)v2->Owner + 396))(v2->Owner, 0); /*0x69ff6b*/
          v18 = (unsigned char *)v2->Owner; /*0x69ff71*/
          if ( !v18[144] || v18[129] || v18[141] ) /*0x69ff84*/
            return 0; /*0x69ff95*/
        }
        if ( (*(int (**)(int))(*(unsigned int *)v2->Owner + 388))(v2->Owner) == 5 /*0x69ffc4*/
          && !(*(unsigned __int8 (**)(ShipLocomotionClass *))(*(unsigned int *)&v2->0 + 16))(v2)
          || (*(int (**)(int))(*(unsigned int *)v2->Owner + 388))(v2->Owner) == 16 )
        {
          goto LABEL_32; /*0x69ffc4*/
        }
        if ( !(*(unsigned __int8 (**)(ShipLocomotionClass *))(*&v2->uniqueId + 16))(v2) ) /*0x69ffcd*/
        {
          v19 = v2->Owner; /*0x69ffd8*/
          if ( *(unsigned int *)(v19 + 1504) == -1 ) /*0x69ffe1*/
          {
            if ( *(unsigned char *)(v19 + 973) ) /*0x69ffe7*/
            {
              if ( *((unsigned int *)v3 + 16) != g_OverlayTypeConfig || *(unsigned long long *)(v3 + 68) != qword_B077FC ) /*0x6a0006*/
              {
                *((unsigned int *)v3 + 16) = g_OverlayTypeConfig; /*0x6a0015*/
                *(unsigned long long *)(v3 + 68) = qword_B077FC; /*0x6a001d*/
                v3[99] = 0; /*0x6a0029*/
              }
              v2->SpeedAccum = 0; /*0x6a002c*/
              v2->MovementSpeed[0] = 0; /*0x6a002f*/
            }
            else
            {
              v20 = *(unsigned int *)(v19 + 1444); /*0x6a0037*/
              if ( v20 ) /*0x6a003f*/
              {
                eax64 = (unsigned int *)(*(int (**)(int, int *, int))(*(unsigned int *)v20 + 76))(v20, &v25, v2->Owner); /*0x6a004d*/
                (*(void (**)(ShipLocomotionClass *, unsigned int, unsigned int, unsigned int))(*&v2->ROT + 68))( /*0x6a0069*/
                  v2,
                  *eax64,
                  eax64[1],
                  eax64[2]);
              }
            }
            goto LABEL_32; /*0x6a0032*/
          }
        }
        v22 = (unsigned char *)v2->Owner; /*0x6a0074*/
        if ( v22[981] /*0x6a00ab*/
          && (*(int (**)(unsigned char *))(*(unsigned int *)v22 + 388))(v22) != 7
          && (*(unsigned __int8 (**)(ShipLocomotionClass *))(*(unsigned int *)&v2->0 + 16))(v2)
          && !(*(unsigned __int8 (**)(int, int *))(*(unsigned int *)v2->Owner + 716))(
                v2->Owner,
                &v2->SlopeTimer[3]) )
        {
          if ( *((unsigned int *)v3 + 16) != g_OverlayTypeConfig || *(unsigned long long *)(v3 + 68) != qword_B077FC ) /*0x6a00cc*/
          {
            *((unsigned int *)v3 + 16) = g_OverlayTypeConfig; /*0x6a00db*/
            *(unsigned long long *)(v3 + 68) = qword_B077FC; /*0x6a00e3*/
            v3[99] = 0; /*0x6a00ef*/
          }
          v21 = (FootClass *)*((unsigned int *)v3 + 3); /*0x6a00f2*/
          if ( *&v21->q598 ) /*0x6a00f5*/
          {
            (v21)->ClearPathIndex(); /*0x6a010d*/
            if ( (*(unsigned __int8 (**)(unsigned int, unsigned int, int))(**((unsigned int **)v3 + 3) + 1156))( /*0x6a011a*/
                   *((unsigned int *)v3 + 3),
                   0,
                   1) )
            {
              return 0; /*0x6a0131*/
            }
          }
          else
          {
            (*(void (**)(FootClass *, unsigned int, int))(v21->ptr_0 + 1152))(v21, 0, 1); /*0x6a0102*/
          }
          goto LABEL_32; /*0x6a0108*/
        }
        LOBYTE(this) = 0; /*0x6a013e*/
        ((int)&v2[-1].Piggybackee)->Update(v1, &this, 1, 0); /*0x6a0142*/
        if ( (unsigned char)this ) /*0x6a014b*/
          return 0; /*0x6a0156*/
        if ( !*(unsigned char *)(v2->Owner + 144) ) /*0x6a015c*/
          return 0; /*0x6a016d*/
        v24 = 0; /*0x6a0170*/
        goto LABEL_81; /*0x6a0170*/
      }
      v11 = (FootClass *)*((unsigned int *)v3 + 3); /*0x69fdde*/
      if ( !*&v11->q598 ) /*0x69fde7*/
      {
LABEL_20:
        (*(void (**)(FootClass *, unsigned int, int))(v11->ptr_0 + 1152))(v11, 0, 1); /*0x69fd65*/
        return 0; /*0x69fd79*/
      }
    }
    (v11)->ClearPathIndex(); /*0x69fe00*/
    (*(void (**)(unsigned int, unsigned int, int))(**((unsigned int **)v3 + 3) + 1156))(*((unsigned int *)v3 + 3), 0, 1); /*0x69fe0d*/
    return 0; /*0x69fe1c*/
  }
  v1 = ((int)&v2[-1].Piggybackee)->ProcessCollision(v1, 0); /*0x69fc86*/
  if ( v6 || !*(unsigned char *)(v2->Owner + 144) ) /*0x69fc96*/
    return 0; /*0x69fc9c*/
  if ( v2->MovementSpeed[1] != -1 /*0x69fcd4*/
    || !(*(unsigned __int8 (**)(ShipLocomotionClass *))(*(unsigned int *)&v2->0 + 16))(v2)
    && *(unsigned int *)(v2->Owner + 1504) == -1
    || (*(int (**)(int))(*(unsigned int *)v2->Owner + 44))(v2->Owner) == 1 && *(unsigned char *)(v2->Owner + 1745) )
  {
    goto LABEL_32; /*0x69fcda*/
  }
  LOBYTE(this) = 0; /*0x69fcea*/
  ((int)&v2[-1].Piggybackee)->Update(v1, &this, 1, 0); /*0x69fcee*/
  if ( (unsigned char)this || !*(unsigned char *)(v2->Owner + 144) ) /*0x69fd00*/
    return 0; /*0x69fd06*/
  v24 = 1; /*0x69fd0c*/
LABEL_81:
  ((int)&v2[-1].Piggybackee)->ProcessCollision(v1, v24); /*0x6a0171*/
  if ( !*(unsigned char *)(v2->Owner + 144) ) /*0x6a017b*/
    return 0; /*0x6a018a*/
LABEL_32:
  if ( (*(unsigned __int8 (**)(ShipLocomotionClass *))(*&v2->q080 + 128))(v2) ) /*0x69fe3c*/
  {
    if ( !(*(unsigned int *)&stru_A8E960.random[528] % 8) /*0x69fe6e*/
      && !*(unsigned char *)((*(int (**)(int))(*(unsigned int *)v2->Owner + 132))(v2->Owner) + 3433) )
    {
      v14 = (unsigned char *)v2->Owner; /*0x69fe76*/
      if ( !v14[140] && *(unsigned int *)((*(int (**)(unsigned char *))(*(unsigned int *)v14 + 444))(v14) + 236) == 2 ) /*0x69fe90*/
      {
        if ( dword_8871E0->InfantryBrute ) /*0x69fe97*/
        {
          v15 = (AnimClass *)__2_YAPAXI_Z(0x1C8u); /*0x69fea4*/
          if ( v15 ) /*0x69feae*/
          {
            v16 = (int *)(v2->Owner + 156); /*0x69feb4*/
            v25 = *v16; /*0x69fec5*/
            v26 = v16[1]; /*0x69fecc*/
            v27 = v16[2]; /*0x69fed8*/
            (v15)->ctor((void *)dword_8871E0->InfantryBrute, &v25, 0, 1, (void *)0x600, 0, 0); /*0x69feeb*/
          }
        }
      }
    }
  }
  if ( v2->SlopeTimer[3] == g_OverlayTypeConfig /*0x69ff1e*/
    && v2->Dest[0] == (unsigned int)qword_B077FC
    && *(unsigned long long *)&v2->Dest[1] == (((g_OverlayTypeConfig & 0xFFFFFFFFull)) << 32 | ((((qword_B077FC) >> 32) & 0xFFFFFFFFu) & 0xFFFFFFFFull))
    && *(unsigned long long *)v2->HeadToCoord == qword_B077FC )
  {
    v17 = v2->Owner; /*0x69ff25*/
    if ( *(unsigned int *)(v17 + 1504) == -1 && *(double *)(v17 + 1400) > 0.0 ) /*0x69ff41*/
      (*(void (**)(int, unsigned int, unsigned int))(*(unsigned int *)v17 + 1348))(v17, 0, 0); /*0x69ff47*/
  }
  return (*(char (**)(ShipLocomotionClass *))(*&v2->q598 + 16))(v2); /*0x69fd72*/

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
  int v3 = v7; // ecx /*0x46c51a*/
  if ( v7 <= GroundHeight ) /*0x46c520*/
    v3 = Cell::GetGroundHeight(&v5) + 1; /*0x46c533*/
  *(unsigned int *)a1->ptr_0 = v5; /*0x46c53f*/
  *(unsigned int *)&a1->ptr_0[4] = v6; /*0x46c545*/
  *(unsigned int *)&a1->ptr_0[8] = v3; /*0x46c549*/
  return a1->ptr_0; /*0x46c54c*/
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
      ((ObjectTypeClass *)aP0)->Construct((int)&aP1); /*0x46c6bf*/
      /* X11: ptr_0 install elided (implicit via BulletTypeClass virtuals 0x46c6c4) */
      /* X11: ptr_0 install elided (X68 star-amp-named, RHS g_ptr_7E491C) */  /*0x46c6ca*/
      /* X11: ptr_0 install elided (X68 star-amp-named, RHS g_ptr_7E491C) */  /*0x46c6d1*/
      /* X11: ptr_0 install elided (X68 star-amp-named, RHS g_ptr_7E491C) */  /*0x46c6d8*/
    }
    (aP0->vfptr)->LoadAnim(); /*0x46c6e1*/
    (aP0->vfptr)->Load2DArt(); /*0x46c6e8*/
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


  int result = a2; // eax /*0x46c820*/
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
  char **v5; // ebp
  char *v6; // edx
  int v8; // [esp+4h] [ebp-88h]
  char Source[128]; // [esp+Ch] [ebp-80h] BYREF

  v4 = 0; /*0x47515e*/
  Source[0] = 0; /*0x475166*/
  if ( !a4 || dword_A83CA8 <= 0 ) /*0x475177*/
    return 1; /*0x475177*/
  v5 = (char **)dword_A83C9C; /*0x47517e*/
  v8 = dword_A83CA8; /*0x475186*/
  do /*0x475213*/
  {
    v6 = *v5; /*0x47518a*/
    if ( ((1 << *((unsigned int *)*v5 + 46)) & a4) != 0 ) /*0x4751a3*/
    {
      if ( v4 ) /*0x4751a7*/
        strcat(Source, Delimiter); /*0x4751ce*/
      strcat(Source, v6 + 36); /*0x4751fa*/
      v4 = Source[0]; /*0x475203*/
    }
    ++v5; /*0x47520b*/
    --v8; /*0x47520f*/
  }
  while ( v8 ); /*0x475213*/
  if ( v4 ) /*0x47521e*/
    return ((char *)this)->SetString(Block, a3, Source); /*0x475239*/
  else
    return 1; /*0x475248*/

}
} // namespace gamemd
