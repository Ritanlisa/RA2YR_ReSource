// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/HouseTypeClass_28_e4.hpp"
#include "e4/classes/HouseTypeClass_36_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/HouseTypeClass_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/AnimTypeClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/HashTable_flat_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/HoverLocomotionClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/InfantryTypeClass_e4.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/SortedArray_e4.hpp"

// 0x511650
namespace gamemd {
unsigned int * HouseTypeClass::loadVeteranWeapons(HouseTypeClass * aP1)
{

  AbstractTypeClass::Init((int)this, (AbstractTypeClass *)aP1); /*0x511658*/
  *((unsigned int *)this + 83) = &vt_TypeList_InfantryTypeClass_const; /*0x51165d*/
  *((unsigned int *)this + 90) = &vt_TypeList_UnitTypeClass_const; /*0x511667*/
  *((unsigned int *)this + 97) = &vt_TypeList_AircraftTypeClass_const; /*0x511671*/
  *this = &vt_HouseTypeClass; /*0x51167b*/
  *((unsigned int *)this + 1) = &vt_HouseTypeClass; /*0x511681*/
  *((unsigned int *)this + 2) = &vt_HouseTypeClass; /*0x511688*/
  *((unsigned int *)this + 3) = &vt_HouseTypeClass; /*0x51168f*/
  return this; /*0x511698*/

}
}
// 0x5116A0
namespace gamemd {
AbstractClass * HouseTypeClass::Dtor()
{

  int v2; // eax
  void *v3; // eax
  void *v4; // eax
  void *v5; // eax
  int v7; // [esp+8h] [ebp-4h] BYREF

  *(unsigned int *)this = &vt_HouseTypeClass; /*0x5116a7*/
  *((unsigned int *)this + 1) = &vt_HouseTypeClass; /*0x5116ad*/
  *((unsigned int *)this + 2) = &vt_HouseTypeClass; /*0x5116b4*/
  *((unsigned int *)this + 3) = &vt_HouseTypeClass; /*0x5116bb*/
  AbstractClass::AnnounceExpiredPointer((void **)this, 1); /*0x5116c2*/
  v7 = this; /*0x5116d7*/
  v2 = (*(int (**)(int *, int *))(dword_A83C98 + 16))(&dword_A83C98, &v7); /*0x5116db*/
  if ( v2 != -1 && v2 < g_SuperWeaponTypeArray && v2 < --g_SuperWeaponTypeArray ) /*0x5116f6*/
  {
    do /*0x51170e*/
    {
      ++v2; /*0x5116fe*/
      *((unsigned int *)g_SuperWeaponTypeCount + v2 - 1) = *((unsigned int *)g_SuperWeaponTypeCount + v2); /*0x511702*/
    }
    while ( v2 < g_SuperWeaponTypeArray ); /*0x51170e*/
  }
  v3 = *(void **)((char *)this + 392); /*0x511710*/
  *((unsigned int *)this + 97) = &vt_VectorClass_AircraftTypeClass_const; /*0x51171a*/
  if ( v3 && *((unsigned char *)this + 401) ) /*0x511726*/
  {
    RA2_OPDEL(v3); /*0x51172f*/
    *((unsigned int *)this + 98) = 0; /*0x511737*/
  }
  *((unsigned char *)this + 401) = 0; /*0x51173d*/
  *((unsigned int *)this + 99) = 0; /*0x511743*/
  v4 = *(void **)((char *)this + 364); /*0x511749*/
  *((unsigned int *)this + 90) = &vt_VectorClass_UnitTypeClass_const; /*0x51174f*/
  if ( v4 && *((unsigned char *)this + 373) ) /*0x51175d*/
  {
    RA2_OPDEL(v4); /*0x511766*/
    *((unsigned int *)this + 91) = 0; /*0x51176e*/
  }
  *((unsigned char *)this + 373) = 0; /*0x511774*/
  *((unsigned int *)this + 92) = 0; /*0x51177a*/
  v5 = *(void **)((char *)this + 336); /*0x511780*/
  *((unsigned int *)this + 83) = &vt_VectorClass_InfantryTypeClass_const; /*0x511786*/
  if ( v5 && *((unsigned char *)this + 345) ) /*0x511794*/
  {
    RA2_OPDEL(v5); /*0x51179d*/
    *((unsigned int *)this + 84) = 0; /*0x5117a5*/
  }
  *((unsigned char *)this + 345) = 0; /*0x5117ad*/
  *((unsigned int *)this + 85) = 0; /*0x5117b3*/
  return AbstractTypeClass::Dtor((unsigned int *)this); /*0x5117be*/

}
}
// 0x511850
namespace gamemd {
AbstractClass * HouseTypeClass::LoadFromINI( uint8_t *** aP1)
{

  CCINIClass *v3; // esi
  double Double_Overwrite; // st7
  INIClass *aP3; // edx
  double v7; // st7
  INIClass *v8; // ecx
  double v9; // st7
  INIClass *v10; // eax
  double v11; // st7
  INIClass *v12; // edx
  double v13; // st7
  INIClass *v14; // ecx
  double v15; // st7
  INIClass *v16; // eax
  double v17; // st7
  char v18; // cl
  char Bool_Overwrite; // al
  char v20; // al
  char v21; // cl
  char v22; // al
  double v23; // st7
  char *i; // eax
  int v25; // edx
  int v26; // ecx
  void *v27; // eax
  char *j; // eax
  CCINIClass *Alt; // edi
  int v30; // eax
  int v31; // edx
  int v32; // ecx
  CCINIClass *v48; // eax
  ObjectClass *k; // eax
  CCINIClass *v50; // edi
  int v36; // eax
  int v37; // edx
  int v38; // ecx
  CCINIClass *v54; // eax
  CCINIClass *v55; // edi
  CCINIClass *CountryData; // eax
  int v42; // ecx
  int v43; // eax
  int v44; // edx
  int v45; // eax
  int v46; // edx
  int v47; // eax
  int esi58a; // esi
  int v49; // eax
  int ecx58; // ecx
  int v51; // esi
  int v52; // ecx
  int v53; // eax
  int edx63; // edx
  char aP3_4; // [esp+4h] [ebp-F4h]
  char Destination[24]; // [esp+18h] [ebp-E0h] BYREF
  int v58; // [esp+30h] [ebp-C8h]
  INIClass aP4; // [esp+36h] [ebp-C2h] BYREF
  INIClass String[2]; // [esp+78h] [ebp-80h] BYREF

  v3 = (CCINIClass *)aP1; /*0x51185e*/
  INIClass::ResetSection(aP1); /*0x511866*/
  if ( !AbstractTypeClass::LoadFromINI(this, (AbstractTypeClass *)aP1) ) /*0x51186e*/
    return 0; /*0x51215c*/
  INIClass::GetString( /*0x511892*/
    aP1,
    (INIClass *)(this + 36),
    &unk_8254AC,
    (INIClass *)&g_abs_87F8E4,
    (INIClass *)&((unsigned int *)(aP4.__pad_20))[2],
    4);
  if ( strlen(&((unsigned int *)(aP4.__pad_20))[2]) ) /*0x51189b*/
  {
    strcpy((char *)(this + 416), &((unsigned int *)(aP4.__pad_20))[2]); /*0x5118c3*/
    v3 = (CCINIClass *)aP1; /*0x5118cc*/
  }
  INIClass::GetString( /*0x5118e2*/
    (uint8_t ***)v3,
    (INIClass *)(this + 36),
    &unk_82549C,
    (INIClass *)(this + 36),
    (INIClass *)&((unsigned int *)(aP4.__pad_20))[2],
    25);
  if ( &aP4 == (INIClass *)-34 ) /*0x5118ed*/
  {
    Destination[0] = (uint8_t)&((unsigned int *)(aP4.__pad_20))[2]; /*0x5118ef*/
  }
  else
  {
    strncpy(Destination, &((unsigned int *)(aP4.__pad_20))[2], 0x18u); /*0x511901*/
    IDA_LOBYTE(v58) = 0; /*0x511909*/
  }
  if ( Destination != (char *)(this + 152) ) /*0x51191a*/
  {
    qmemcpy((void *)(this + 152), Destination, 0x18u); /*0x511925*/
    *(unsigned char *)(this + 176) = v58; /*0x511927*/
    v3 = (CCINIClass *)aP1; /*0x511928*/
  }
  *(unsigned int *)(this + 192) = BuildingTypeClass::FindAnimByName( /*0x511942*/
                              (uint8_t ***)v3,
                              (uint8_t *)(this + 36),
                              (uint8_t *)&stru_81B138,
                              *(unsigned int *)(this + 192));
  ((unsigned int *)(aP4.__pad_20))[2] = *(unsigned char *)(this + 420); /*0x51195a*/
  ((unsigned int *)(aP4.__pad_20))[3] = 0; /*0x511966*/
  INIClass::GetString( /*0x51196b*/
    (uint8_t ***)v3,
    (INIClass *)(this + 36),
    &unk_825494,
    (INIClass *)&((unsigned int *)(aP4.__pad_20))[2],
    &aP4,
    2);
  *(unsigned char *)(this + 420) = ((unsigned int *)(aP4.__pad_0))[0]; /*0x511974*/
  Double_Overwrite = INIClass::ReadDouble_Overwrite( /*0x511990*/
                       (int)v3,
                       (INIClass *)(this + 36),
                       aFirepower,
                       (INIClass *)*(unsigned int *)(this + 200));
  aP3 = *(INIClass **)(this + 208); /*0x51199b*/
  *(double *)(this + 200) = Double_Overwrite; /*0x5119a1*/
  v7 = INIClass::ReadDouble_Overwrite((int)v3, (INIClass *)(this + 36), &unk_825488, aP3); /*0x5119b1*/
  v8 = *(INIClass **)(this + 216); /*0x5119bc*/
  *(double *)(this + 208) = v7; /*0x5119c2*/
  v9 = INIClass::ReadDouble_Overwrite( /*0x5119d2*/
         (int)v3,
         (INIClass *)(this + 36),
         (uint8_t *)&stru_825430.CCINIClass_field_4C,
         v8);
  v10 = *(INIClass **)(this + 224); /*0x5119dd*/
  *(double *)(this + 216) = v9; /*0x5119e3*/
  v11 = INIClass::ReadDouble_Overwrite( /*0x5119f3*/
          (int)v3,
          (INIClass *)(this + 36),
          (uint8_t *)&g_INI_Key_Speed.headNode[1],
          v10);
  v12 = *(INIClass **)(this + 232); /*0x5119fe*/
  *(double *)(this + 224) = v11; /*0x511a04*/
  v13 = INIClass::ReadDouble_Overwrite((int)v3, (INIClass *)(this + 36), (uint8_t *)stru_825430.__pad_48, v12); /*0x511a14*/
  v14 = *(INIClass **)(this + 240); /*0x511a1f*/
  *(double *)(this + 232) = v13; /*0x511a25*/
  v15 = INIClass::ReadDouble_Overwrite((int)v3, (INIClass *)(this + 36), (uint8_t *)&stru_825430.ownsFile, v14); /*0x511a35*/
  v16 = *(INIClass **)(this + 248); /*0x511a40*/
  *(double *)(this + 240) = v15; /*0x511a46*/
  v17 = INIClass::ReadDouble_Overwrite( /*0x511a56*/
          (int)v3,
          (INIClass *)(this + 36),
          (uint8_t *)&stru_825430.needsSave_flag,
          v16);
  v18 = *(unsigned char *)(this + 421); /*0x511a5b*/
  *(double *)(this + 248) = v17; /*0x511a61*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x511a70*/
                     (int)v3,
                     (uint8_t *)(this + 36),
                     (CCINIClass *)&stru_825430.__pad_20[8],
                     v18);
  aP3_4 = *(unsigned char *)(this + 422); /*0x511a7d*/
  *(unsigned char *)(this + 421) = Bool_Overwrite; /*0x511a84*/
  *(unsigned char *)(this + 422) = INIClass::ReadBool_Overwrite( /*0x511a8f*/
                             (int)v3,
                             (uint8_t *)(this + 36),
                             (CCINIClass *)&stru_825430.sectionHead[1],
                             aP3_4);
  v20 = INIClass::ReadBool_Overwrite( /*0x511aa4*/
          (int)v3,
          (uint8_t *)(this + 36),
          (CCINIClass *)&stru_825430.headNode[1],
          *(unsigned char *)(this + 423));
  v21 = *(unsigned char *)(this + 424); /*0x511aa9*/
  *(unsigned char *)(this + 423) = v20; /*0x511aaf*/
  v22 = INIClass::ReadBool_Overwrite((int)v3, (uint8_t *)(this + 36), &stru_825430, v21); /*0x511abe*/
  v23 = *(float *)(this + 256); /*0x511ac3*/
  *(unsigned char *)(this + 424) = v22; /*0x511ace*/
  *(float *)(this + 256) = INIClass::ReadDouble_Overwrite( /*0x511ae2*/
                             (int)v3,
                             (INIClass *)(this + 36),
                             aArmorinfantrym,
                             (INIClass *)IDA_LODWORD(v23));
  *(float *)(this + 260) = INIClass::ReadDouble_Overwrite( /*0x511b01*/
                             (int)v3,
                             (INIClass *)(this + 36),
                             aArmorunitsmult,
                             (INIClass *)COERCE_UNSIGNED_INT64(*(float *)(this + 260)));
  *(float *)(this + 264) = INIClass::ReadDouble_Overwrite( /*0x511b20*/
                             (int)v3,
                             (INIClass *)(this + 36),
                             aArmoraircraftm,
                             (INIClass *)COERCE_UNSIGNED_INT64(*(float *)(this + 264)));
  *(float *)(this + 268) = INIClass::ReadDouble_Overwrite( /*0x511b3f*/
                             (int)v3,
                             (INIClass *)(this + 36),
                             aArmorbuildings,
                             (INIClass *)COERCE_UNSIGNED_INT64(*(float *)(this + 268)));
  *(float *)(this + 272) = INIClass::ReadDouble_Overwrite( /*0x511b5e*/
                             (int)v3,
                             (INIClass *)(this + 36),
                             aArmordefensesm,
                             (INIClass *)COERCE_UNSIGNED_INT64(*(float *)(this + 272)));
  *(float *)(this + 276) = INIClass::ReadDouble_Overwrite( /*0x511b7d*/
                             (int)v3,
                             (INIClass *)(this + 36),
                             aCostinfantrymu,
                             (INIClass *)COERCE_UNSIGNED_INT64(*(float *)(this + 276)));
  *(float *)(this + 280) = INIClass::ReadDouble_Overwrite( /*0x511b9c*/
                             (int)v3,
                             (INIClass *)(this + 36),
                             aCostunitsmult,
                             (INIClass *)COERCE_UNSIGNED_INT64(*(float *)(this + 280)));
  *(float *)(this + 284) = INIClass::ReadDouble_Overwrite( /*0x511bbb*/
                             (int)v3,
                             (INIClass *)(this + 36),
                             aCostaircraftmu,
                             (INIClass *)COERCE_UNSIGNED_INT64(*(float *)(this + 284)));
  *(float *)(this + 288) = INIClass::ReadDouble_Overwrite( /*0x511bda*/
                             (int)v3,
                             (INIClass *)(this + 36),
                             aCostbuildingsm,
                             (INIClass *)COERCE_UNSIGNED_INT64(*(float *)(this + 288)));
  *(float *)(this + 292) = INIClass::ReadDouble_Overwrite( /*0x511bf9*/
                             (int)v3,
                             (INIClass *)(this + 36),
                             aCostdefensesmu,
                             (INIClass *)COERCE_UNSIGNED_INT64(*(float *)(this + 292)));
  *(float *)(this + 296) = INIClass::ReadDouble_Overwrite( /*0x511c18*/
                             (int)v3,
                             (INIClass *)(this + 36),
                             aSpeedinfantrym,
                             (INIClass *)COERCE_UNSIGNED_INT64(*(float *)(this + 296)));
  *(float *)(this + 300) = INIClass::ReadDouble_Overwrite( /*0x511c37*/
                             (int)v3,
                             (INIClass *)(this + 36),
                             aSpeedunitsmult,
                             (INIClass *)COERCE_UNSIGNED_INT64(*(float *)(this + 300)));
  *(float *)(this + 304) = INIClass::ReadDouble_Overwrite( /*0x511c56*/
                             (int)v3,
                             (INIClass *)(this + 36),
                             aSpeedaircraftm,
                             (INIClass *)COERCE_UNSIGNED_INT64(*(float *)(this + 304)));
  *(float *)(this + 308) = INIClass::ReadDouble_Overwrite( /*0x511c75*/
                             (int)v3,
                             (INIClass *)(this + 36),
                             aBuildtimeinfan,
                             (INIClass *)COERCE_UNSIGNED_INT64(*(float *)(this + 308)));
  *(float *)(this + 312) = INIClass::ReadDouble_Overwrite( /*0x511c94*/
                             (int)v3,
                             (INIClass *)(this + 36),
                             aBuildtimeunits,
                             (INIClass *)COERCE_UNSIGNED_INT64(*(float *)(this + 312)));
  *(float *)(this + 316) = INIClass::ReadDouble_Overwrite( /*0x511cb3*/
                             (int)v3,
                             (INIClass *)(this + 36),
                             aBuildtimeaircr,
                             (INIClass *)COERCE_UNSIGNED_INT64(*(float *)(this + 316)));
  *(float *)(this + 320) = INIClass::ReadDouble_Overwrite( /*0x511cd2*/
                             (int)v3,
                             (INIClass *)(this + 36),
                             aBuildtimebuild,
                             (INIClass *)COERCE_UNSIGNED_INT64(*(float *)(this + 320)));
  *(float *)(this + 324) = INIClass::ReadDouble_Overwrite( /*0x511cf1*/
                             (int)v3,
                             (INIClass *)(this + 36),
                             aBuildtimedefen,
                             (INIClass *)COERCE_UNSIGNED_INT64(*(float *)(this + 324)));
  *(float *)(this + 328) = INIClass::ReadDouble_Overwrite( /*0x511d10*/
                             (int)v3,
                             (INIClass *)(this + 36),
                             aIncomemult,
                             (INIClass *)COERCE_UNSIGNED_INT64(*(float *)(this + 328)));
  if ( INIClass::GetString( /*0x511d2d*/
         (uint8_t ***)v3,
         (INIClass *)(this + 36),
         aVeteraninfantr,
         (INIClass *)&g_abs_87F8E4,
         String,
         128) )
  {
    InfantryTypeVector::Construct(&aP4.__pad_0[2], 0, 0); /*0x511d42*/
    *(unsigned int *)&((unsigned int *)(aP4.__pad_0))[2] = &vt_TypeList_InfantryTypeClass_const; /*0x511d56*/
    for ( i = strtok(String[0].__pad_0, g_abs_817F70); i; i = strtok(0, g_abs_817F70) ) /*0x511d64*/
    {
      if ( !*i ) /*0x511d66*/
        break; /*0x511d69*/
      *(int *)((char *)&aP4.sectionCount + 2) = (int)KeywordType::FindOrCreate2(i); /*0x511d74*/
      if ( *(int *)((char *)&aP4.sectionCount + 2) ) /*0x511d78*/
        InfantryTypeVector::Add(&aP4.__pad_0[2], (InfantryTypeClass *)((char *)&aP4.sectionCount + 2)); /*0x511d83*/
    }
    HouseTypeClass::readAllowedUnits(Destination, (InfantryTypeClass *)&((unsigned int *)(aP4.__pad_0))[2]); /*0x511da4*/
    *(unsigned int *)Destination = &vt_TypeList_InfantryTypeClass_const; /*0x511dad*/
    *(unsigned int *)&((unsigned int *)(aP4.__pad_0))[2] = &vt_VectorClass_InfantryTypeClass_const; /*0x511db1*/
    Vector::Cleanup((int)&((unsigned int *)(aP4.__pad_0))[2]); /*0x511db9*/
  }
  else
  {
    HouseTypeClass::readAllowedUnits(Destination, (InfantryTypeClass *)(this + 332)); /*0x511dcb*/
    *(unsigned int *)Destination = &vt_TypeList_InfantryTypeClass_const; /*0x511dd0*/
  }
  HouseTypeClass::readStartInfantry((unsigned int *)(this + 332), (InfantryTypeClass *)Destination); /*0x511de5*/
  v25 = *(unsigned int *)&Destination[16]; /*0x511dee*/
  v26 = v58; /*0x511df2*/
  *(unsigned int *)(this + 352) = *(unsigned int *)&Destination[20]; /*0x511df6*/
  v27 = *(void **)&Destination[4]; /*0x511df9*/
  *(unsigned int *)(this + 348) = v25; /*0x511dfd*/
  *(unsigned int *)(this + 356) = v26; /*0x511e02*/
  *(unsigned int *)Destination = &vt_VectorClass_InfantryTypeClass_const; /*0x511e05*/
  if ( v27 && Destination[13] ) /*0x511e15*/
    RA2_OPDEL(v27); /*0x511e18*/
  if ( INIClass::GetString( /*0x511e3a*/
         (uint8_t ***)v3,
         (INIClass *)(this + 36),
         aVeteranunits,
         (INIClass *)&g_abs_87F8E4,
         String,
         128) )
  {
    UnitTypeVector::Construct(Destination, 0, 0); /*0x511e4f*/
    *(unsigned int *)Destination = &vt_TypeList_UnitTypeClass_const; /*0x511e5e*/
    for ( j = strtok(String[0].__pad_0, g_abs_817F70); j; j = strtok(0, g_abs_817F70) ) /*0x511e70*/
    {
      if ( !*j ) /*0x511e72*/
        break; /*0x511e75*/
      Alt = (CCINIClass *)BuildingTypeClass::FindOrCreateAlt(j); /*0x511e7e*/
      if ( Alt /*0x511eb1*/
        && (*(int *)&Destination[16] < *(int *)&Destination[8]
         || (Destination[13] || !*(unsigned int *)&Destination[8])
         && *(int *)&Destination[20] > 0
         && (*(uint8_t (**)(char *, int, unsigned int))(*(unsigned int *)Destination + 8))(
              Destination,
              *(unsigned int *)&Destination[8] + *(unsigned int *)&Destination[20],
              0)) )
      {
        v30 = (*(unsigned int *)&Destination[16])++; /*0x511ebc*/
        *(unsigned int *)(*(unsigned int *)&Destination[4] + 4 * v30) = Alt; /*0x511ec7*/
      }
    }
    TypeList::CopyConstructor(&aP4.__pad_0[2], (VectorClass *)Destination); /*0x511ee6*/
    *(unsigned int *)Destination = &vt_VectorClass_UnitTypeClass_const; /*0x511eef*/
    Vector::Destructor((int)Destination); /*0x511ef7*/
  }
  else
  {
    TypeList::CopyConstructor(&aP4.__pad_0[2], (VectorClass *)(this + 360)); /*0x511f09*/
  }
  VectorClass::CopyConstructor((unsigned int *)(this + 360), (InfantryTypeClass *)&aP4.__pad_0[2]); /*0x511f1b*/
  v31 = *(int *)((char *)aP4.sectionHead + 2); /*0x511f24*/
  v32 = *(int *)((char *)&aP4.sectionHead[2] + 2); /*0x511f28*/
  *(unsigned int *)(this + 380) = *(int *)((char *)&aP4.sectionHead[1] + 2); /*0x511f2c*/
  v48 = *(CCINIClass **)((char *)aP4.headNode + 2); /*0x511f2f*/
  *(unsigned int *)(this + 376) = v31; /*0x511f33*/
  *(unsigned int *)(this + 384) = v32; /*0x511f38*/
  *(unsigned int *)&aP4.__pad_0[2] = &vt_VectorClass_UnitTypeClass_const; /*0x511f3b*/
  if ( v48 && IDA_HIBYTE(aP4.headNode[2]) ) /*0x511f4b*/
    RA2_OPDEL(v48); /*0x511f4e*/
  if ( INIClass::GetString( /*0x511f70*/
         (uint8_t ***)v3,
         (INIClass *)(this + 36),
         aVeteranaircraf,
         (INIClass *)&g_abs_87F8E4,
         String,
         128) )
  {
    HouseTypeClass::readDefaultAlly(Destination, 0, 0); /*0x511f85*/
    *(unsigned int *)Destination = &vt_TypeList_AircraftTypeClass_const; /*0x511f94*/
    for ( k = (ObjectClass *)strtok(String[0].__pad_0, g_abs_817F70); /*0x511fa6*/
          k;
          k = (ObjectClass *)strtok(0, g_abs_817F70) )
    {
      if ( !k->__pad_0[0] ) /*0x511fa8*/
        break; /*0x511fab*/
      v50 = (CCINIClass *)KeywordClass::FindOrCreate(k); /*0x511fb4*/
      if ( v50 /*0x511fe7*/
        && (*(int *)&Destination[16] < *(int *)&Destination[8]
         || (Destination[13] || !*(unsigned int *)&Destination[8])
         && *(int *)&Destination[20] > 0
         && (*(uint8_t (**)(char *, int, unsigned int))(*(unsigned int *)Destination + 8))(
              Destination,
              *(unsigned int *)&Destination[8] + *(unsigned int *)&Destination[20],
              0)) )
      {
        v36 = (*(unsigned int *)&Destination[16])++; /*0x511ff2*/
        *(unsigned int *)(*(unsigned int *)&Destination[4] + 4 * v36) = v50; /*0x511ffd*/
      }
    }
    HouseTypeClass::readParaDropTypes(&aP4.__pad_0[2], (VectorClass *)Destination); /*0x51201c*/
    *(unsigned int *)Destination = &vt_VectorClass_AircraftTypeClass_const; /*0x512025*/
    VectorClass::ClearAndFree4((int)Destination); /*0x51202d*/
  }
  else
  {
    HouseTypeClass::readParaDropTypes(&aP4.__pad_0[2], (VectorClass *)(this + 388)); /*0x51203f*/
  }
  HouseTypeClass::readBaseDefense((unsigned int *)(this + 388), (VectorClass *)&aP4.__pad_0[2]); /*0x512051*/
  v37 = *(int *)((char *)aP4.sectionHead + 2); /*0x51205a*/
  v38 = *(int *)((char *)&aP4.sectionHead[2] + 2); /*0x51205e*/
  *(unsigned int *)(this + 408) = *(int *)((char *)&aP4.sectionHead[1] + 2); /*0x512062*/
  v54 = *(CCINIClass **)((char *)aP4.headNode + 2); /*0x512065*/
  *(unsigned int *)(this + 404) = v37; /*0x512069*/
  *(unsigned int *)(this + 412) = v38; /*0x51206e*/
  *(unsigned int *)&aP4.__pad_0[2] = &vt_VectorClass_AircraftTypeClass_const; /*0x512071*/
  if ( v54 && IDA_HIBYTE(aP4.headNode[2]) ) /*0x512081*/
    RA2_OPDEL(v54); /*0x512084*/
  v55 = *(CCINIClass **)(this + 188); /*0x51208c*/
  CountryData = (CCINIClass *)HouseTypeClass::loadCountryData( /*0x51209e*/
                                (uint8_t ***)v3,
                                (uint8_t *)(this + 36),
                                (uint8_t *)&stru_8172FC.unknown38,
                                (int)v55);
  *(unsigned int *)(this + 188) = CountryData; /*0x5120a5*/
  if ( CountryData != v55 ) /*0x5120ab*/
  {
    if ( v55 != (CCINIClass *)-1 ) /*0x5120b4*/
    {
      v42 = *(unsigned int *)(this + 184); /*0x5120bc*/
      v43 = *(unsigned int *)(*(unsigned int *)&g_abs_89F690 + 4 * (unsigned int)v55); /*0x5120c2*/
      v44 = *(unsigned int *)(v43 + 168); /*0x5120c5*/
      v45 = v43 + 152; /*0x5120cb*/
      if ( v42 < v44 ) /*0x5120d2*/
      {
        v46 = v44 - 1; /*0x5120d4*/
        for ( *(unsigned int *)(v45 + 16) = v46; /*0x5120da*/
              v42 < *(unsigned int *)(v45 + 16);
              *(unsigned int *)(*(unsigned int *)(v45 + 4) + 4 * v42 - 4) = *(unsigned int *)(*(unsigned int *)(v45 + 4) + 4 * v42) )
        {
          ++v42; /*0x5120df*/
        }
      }
    }
    v47 = *(unsigned int *)(this + 188); /*0x5120ee*/
    if ( v47 != -1 ) /*0x5120f7*/
    {
      esi58a = *(unsigned int *)(*(unsigned int *)&g_abs_89F690 + 4 * v47); /*0x5120ff*/
      v49 = *(unsigned int *)(esi58a + 160); /*0x512102*/
      ecx58 = *(unsigned int *)(esi58a + 168); /*0x512108*/
      v51 = esi58a + 152; /*0x51210e*/
      if ( ecx58 < v49 /*0x512133*/
        || (*(unsigned char *)(v51 + 13) || !v49)
        && (v52 = *(unsigned int *)(v51 + 20), v52 > 0)
        && (*(uint8_t (**)(int, int, unsigned int))(*(unsigned int *)v51 + 8))(v51, v52 + v49, 0) )
      {
        v53 = *(unsigned int *)(v51 + 16); /*0x51213a*/
        edx63 = *(unsigned int *)(v51 + 4); /*0x51213d*/
        *(unsigned int *)(v51 + 16) = v53 + 1; /*0x512143*/
        *(unsigned int *)(edx63 + 4 * v53) = *(unsigned int *)(this + 184); /*0x51214c*/
      }
    }
  }
  return 1; /*0x512151*/

}
}
// 0x512170
namespace gamemd {
AbstractClass * * HouseTypeClass::ProcessPower(int * a2)
{

  int v3; // edx
  int v4; // eax

  AbstractTypeClass::ProcessPower((char *)this, a2); /*0x51217a*/
  Power::TimerProcess(*((unsigned int *)this + 46)); /*0x512188*/
  Power::TimerProcess(*((unsigned int *)this + 47)); /*0x512196*/
  Power::TimerProcess(*((unsigned int *)this + 48)); /*0x5121a4*/
  Checksummer::Add_double(*((unsigned int *)this + 50), *((unsigned int *)this + 51)); /*0x5121b9*/
  Checksummer::Add_double(*((unsigned int *)this + 52), *((unsigned int *)this + 53)); /*0x5121ce*/
  Checksummer::Add_double(*((unsigned int *)this + 54), *((unsigned int *)this + 55)); /*0x5121e3*/
  Checksummer::Add_double(*((unsigned int *)this + 56), *((unsigned int *)this + 57)); /*0x5121f8*/
  Checksummer::Add_double(*((unsigned int *)this + 58), *((unsigned int *)this + 59)); /*0x51220d*/
  Checksummer::Add_double(*((unsigned int *)this + 60), *((unsigned int *)this + 61)); /*0x512222*/
  Checksummer::Add_double(*((unsigned int *)this + 62), *((unsigned int *)this + 63)); /*0x512237*/
  Checksummer::Add_Buffer((unsigned int *)a2, (uint8_t *)((char *)this + 416), strlen((const char *)((char *)this + 416))); /*0x512252*/
  IDA_LOBYTE(v3) = *((unsigned char *)this + 420); /*0x512257*/
  v4 = Power::FinalizeDrain(a2, v3); /*0x512260*/
  IDA_LOBYTE(v4) = *((unsigned char *)this + 421); /*0x512265*/
  return Power::FlagProcess(a2, v4); /*0x512273*/

}
}
// 0x512290
namespace gamemd {
int HouseTypeClass::SaveLoad_Prefix(unsigned int * i, int a2)
{

  unsigned int *v2; // edi
  unsigned int *v3; // ebx
  int v4; // esi
  int result; // eax
  int j; // ebx
  int k; // ebx
  int m; // esi
  int n; // esi
  int ii; // esi
  int v11; // [esp+58h] [ebp-4h] BYREF

  v2 = i; /*0x512295*/
  v3 = i + 83; /*0x51229f*/
  (*(void (**)(unsigned int *))(i[83] + 12))(i + 83); /*0x5122a7*/
  (*(void (**)(unsigned int *))(v2[90] + 12))(v2 + 90); /*0x5122b8*/
  (*(void (**)(unsigned int *))(v2[97] + 12))(v2 + 97); /*0x5122c7*/
  v4 = a2; /*0x5122ca*/
  result = AbstractClass::SaveLoad_Prefix_0(v2, a2); /*0x5122d0*/
  if ( result >= 0 ) /*0x5122d7*/
  {
    if ( v2 ) /*0x5122df*/
      HouseTypeClass::loadVeteranWeapons(v2, (int)&i); /*0x5122e8*/
    if ( v3 ) /*0x5122ef*/
    {
      InfantryTypeVector::Construct(v3, 0, 0); /*0x5122f7*/
      *v3 = &vt_TypeList_InfantryTypeClass_const; /*0x5122fc*/
    }
    (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)v4 + 12))(v4, &a2, 4, 0); /*0x51230e*/
    for ( i = 0; (int)i < a2; i = (unsigned int *)((char *)i + 1) ) /*0x51231f*/
    {
      (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)v4 + 12))(v4, &v11, 4, 0); /*0x51232d*/
      InfantryTypeVector::Add(v3, &v11); /*0x512337*/
    }
    if ( v2 != (unsigned int *)-360 ) /*0x51234f*/
    {
      UnitTypeVector::Construct(v2 + 90, 0, 0); /*0x512357*/
      v2[90] = &vt_TypeList_UnitTypeClass_const; /*0x51235c*/
    }
    (*(void (**)(int, unsigned int **, int, unsigned int))(*(unsigned int *)v4 + 12))(v4, &i, 4, 0); /*0x51236f*/
    for ( j = 0; j < (int)i; ++j ) /*0x51237a*/
    {
      (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)v4 + 12))(v4, &a2, 4, 0); /*0x512388*/
      VectorClass::PushBack(v2 + 90, &a2); /*0x512392*/
    }
    if ( v2 != (unsigned int *)-388 ) /*0x5123a6*/
      HouseTypeClass::readStartUnit(v2 + 97); /*0x5123aa*/
    (*(void (**)(int, unsigned int **, int, unsigned int))(*(unsigned int *)v4 + 12))(v4, &i, 4, 0); /*0x5123bb*/
    for ( k = 0; k < (int)i; ++k ) /*0x5123c6*/
    {
      (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)v4 + 12))(v4, &a2, 4, 0); /*0x5123d4*/
      HouseTypeClass::readPowerPlants(v2 + 97, &a2); /*0x5123de*/
    }
    for ( m = 0; m < v2[87]; ++m ) /*0x5123f4*/
      ObjectPtr::RegisterForTracking((int)&g_abs_B0C110, (int *)(v2[84] + 4 * m)); /*0x512405*/
    for ( n = 0; n < v2[94]; ++n ) /*0x51241f*/
      ObjectPtr::RegisterForTracking((int)&g_abs_B0C110, (int *)(v2[91] + 4 * n)); /*0x512430*/
    for ( ii = 0; ii < v2[101]; ++ii ) /*0x51244a*/
      ObjectPtr::RegisterForTracking((int)&g_abs_B0C110, (int *)(v2[98] + 4 * ii)); /*0x51245b*/
    return 0; /*0x51246b*/
  }
  return result; /*0x51246d*/

}
}
// 0x512480
namespace gamemd {
void HouseTypeClass_SaveLoad_Prefix_0(HouseTypeClass *aP0)
{
  int v5; // ebx
  int result; // eax
  int v7; // edx
  int i; // ebx
  int v9; // edx
  int j; // ebx
  int v11; // edx
  int k; // ebx

  result = AbstractClass::SaveLoad_Prefix((int *)aP0, a2, (int)a3); /*0x512491*/
  if ( result >= 0 ) /*0x512498*/
  {
    v7 = *a2; /*0x5124a4*/
    a3 = (int *)aP0->veteranAircraft[0]; /*0x5124b1*/
    (*(void (__stdcall **)(int *, int **, int, unsigned int, int))(v7 + 16))(a2, &a3, 4, 0, v5); /*0x5124b5*/
    for ( i = 0; i < a4; ++i ) /*0x5124c0*/
      (*(void (__stdcall **)(int *, int, int, unsigned int))(*a2 + 16))(a2, aP0->veteranInfantryCount + 4 * i, 4, 0); /*0x5124d3*/
    v9 = *a2; /*0x5124e3*/
    a4 = *(unsigned int *)&aP0->__pad_16D[11]; /*0x5124ef*/
    (*(void (__stdcall **)(int *, int *, int, unsigned int))(v9 + 16))(a2, &a4, 4, 0); /*0x5124f3*/
    for ( j = 0; j < a4; ++j ) /*0x5124fe*/
      (*(void (__stdcall **)(int *, int, int, unsigned int))(*a2 + 16))(a2, *(unsigned int *)&aP0->smartAi + 4 * j, 4, 0); /*0x512511*/
    v11 = *a2; /*0x512521*/
    a4 = *(unsigned int *)&aP0->__pad_16D[39]; /*0x51252d*/
    (*(void (__stdcall **)(int *, int *, int))(v11 + 16))(a2, &a4, 4); /*0x512531*/
    for ( k = 0; k < (int)a3; ++k ) /*0x51253c*/
      (*(void (__stdcall **)(int *, int, int, unsigned int))(*a2 + 16))(a2, *(unsigned int *)&aP0->__pad_16D[27] + 4 * k, 4, 0); /*0x51254f*/
    return 0; /*0x512559*/
  }
  return result; /*0x51255c*/
}
}
// 0x513370
namespace gamemd {
unsigned int * HouseTypeClass::readBaseDefense(VectorClass_flat * aP1)
{

  void *v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( this == (unsigned int *)aP1 ) /*0x51337a*/
    return this; /*0x51337a*/
  (*(void (**)(unsigned int *))(*(unsigned int *)this + 48))(this); /*0x51337e*/
  v3 = aP1->Capacity; /*0x513381*/
  *((unsigned int *)this + 2) = v3; /*0x513386*/
  if ( !v3 ) /*0x513389*/
  {
    *((unsigned int *)this + 1) = 0; /*0x5133ca*/
    *((unsigned char *)this + 13) = 0; /*0x5133d1*/
    return this; /*0x5133d5*/
  }
  v4 = RA2_OPNEW(4 * (unsigned int)v3); /*0x513393*/
  *((unsigned int *)this + 1) = v4; /*0x51339b*/
  if ( !v4 ) /*0x5133a0*/
    return this; /*0x5133a0*/
  v5 = *((unsigned int *)this + 2); /*0x5133a2*/
  v6 = 0; /*0x5133a5*/
  *((unsigned char *)this + 13) = 1; /*0x5133a9*/
  if ( v5 <= 0 ) /*0x5133ad*/
    return this; /*0x5133ad*/
  do /*0x5133c1*/
  {
    *(unsigned int *)(*((unsigned int *)this + 1) + 4 * v6) = *(unsigned int *)(*(unsigned int *)&aP1->?[3] + 4 * v6); /*0x5133b8*/
    ++v6; /*0x5133be*/
  }
  while ( v6 < *((unsigned int *)this + 2) ); /*0x5133c1*/
  return this; /*0x5133c5*/

}
}
// 0x67B8F0
namespace gamemd {
void * HouseTypeClass::ReadCountryName(int a1, unsigned char *** edx0, INIClass * aP1, unsigned char * a2, unsigned int * a5)
{

  ObjectClass *i; // eax
  INIClass *v7; // edi
  int v8; // eax
  VectorClass *v9; // ecx
  void *v10; // eax
  bool v11; // zf
  int v13; // eax
  int v14; // eax
  VectorClass *v15; // ecx
  int v16; // eax
  VectorClass *v17; // [esp+Ch] [ebp-9Ch] BYREF
  void *Block; // [esp+10h] [ebp-98h]
  int v19; // [esp+14h] [ebp-94h]
  char v20; // [esp+19h] [ebp-8Fh]
  int v21; // [esp+1Ch] [ebp-8Ch]
  int v22; // [esp+20h] [ebp-88h]
  INIClass String[2]; // [esp+28h] [ebp-80h] BYREF

  if ( INIClass::GetString(edx0, aP1, a2, (INIClass *)&g_abs_87F8E4, String, 128) ) /*0x67b91c*/
  {
    AircraftTypeVector::Constructor(&v17, 0, 0); /*0x67b931*/
    v22 = 10; /*0x67b93a*/
    v21 = 0; /*0x67b948*/
    v17 = (VectorClass *)&vt_TypeList_AircraftTypeClass_const; /*0x67b94c*/
    for ( i = (ObjectClass *)strtok(String[0].__pad_0, g_abs_817F70); /*0x67b95e*/
          i;
          i = (ObjectClass *)strtok(0, g_abs_817F70) )
    {
      if ( !i->__pad_0[0] ) /*0x67b960*/
        break; /*0x67b962*/
      v7 = (INIClass *)KeywordClass::FindOrCreate(i); /*0x67b96b*/
      if ( v7 /*0x67b99b*/
        && (v21 < v19
         || (v20 || !v19)
         && v22 > 0
         && ((uint8_t (*)(VectorClass **, int, unsigned int))v17->Capacity)(&v17, v22 + v19, 0)) )
      {
        v8 = v21++; /*0x67b9a6*/
        *((unsigned int *)Block + v8) = v7; /*0x67b9b1*/
      }
    }
    *(unsigned int *)(a1 + 4) = 0; /*0x67b9cd*/
    *(unsigned int *)(a1 + 8) = 0; /*0x67b9d0*/
    *(unsigned char *)(a1 + 12) = 1; /*0x67b9d3*/
    *(unsigned char *)(a1 + 13) = 0; /*0x67b9d7*/
    *(unsigned int *)a1 = &vt_VectorClass_AircraftTypeClass_const; /*0x67b9da*/
    HouseTypeClass::readBaseDefense((unsigned int *)a1, (VectorClass *)&v17); /*0x67b9e0*/
    *(unsigned int *)a1 = &vt_TypeList_AircraftTypeClass_const; /*0x67b9e5*/
    v17 = (VectorClass *)&vt_VectorClass_AircraftTypeClass_const; /*0x67b9eb*/
    v9 = (VectorClass *)v22; /*0x67b9f7*/
    *(unsigned int *)(a1 + 16) = v21; /*0x67b9fb*/
    v10 = Block; /*0x67b9fe*/
    v11 = Block == 0; /*0x67ba02*/
    *(unsigned int *)(a1 + 20) = v9; /*0x67ba04*/
    if ( !v11 && v20 ) /*0x67ba11*/
    {
      RA2_OPDEL(v10); /*0x67ba18*/
      return (VectorClass *)a1; /*0x67ba2b*/
    }
  }
  else
  {
    *(unsigned int *)(a1 + 4) = 0; /*0x67ba39*/
    *(unsigned int *)(a1 + 8) = 0; /*0x67ba3c*/
    *(unsigned char *)(a1 + 12) = 1; /*0x67ba3f*/
    *(unsigned char *)(a1 + 13) = 0; /*0x67ba43*/
    *(unsigned int *)a1 = &vt_VectorClass_AircraftTypeClass_const; /*0x67ba46*/
    if ( (unsigned int *)a1 != a5 ) /*0x67ba4c*/
    {
      VectorClass::ClearAndFree4(a1); /*0x67ba50*/
      v13 = a5[2]; /*0x67ba56*/
      *(unsigned int *)(a1 + 8) = v13; /*0x67ba5b*/
      if ( v13 ) /*0x67ba5e*/
      {
        v14 = RA2_OPNEW(4 * v13); /*0x67ba68*/
        *(unsigned int *)(a1 + 4) = v14; /*0x67ba72*/
        if ( v14 ) /*0x67ba75*/
        {
          v15 = *(VectorClass **)(a1 + 8); /*0x67ba77*/
          v16 = 0; /*0x67ba7a*/
          *(unsigned char *)(a1 + 13) = 1; /*0x67ba7e*/
          if ( (int)v15 > 0 ) /*0x67ba82*/
          {
            do /*0x67ba96*/
            {
              *(unsigned int *)(*(unsigned int *)(a1 + 4) + 4 * v16) = *(unsigned int *)(a5[1] + 4 * v16); /*0x67ba8d*/
              ++v16; /*0x67ba93*/
            }
            while ( v16 < *(unsigned int *)(a1 + 8) ); /*0x67ba96*/
          }
        }
      }
      else
      {
        *(unsigned int *)(a1 + 4) = 0; /*0x67ba9a*/
        *(unsigned char *)(a1 + 13) = 0; /*0x67ba9d*/
      }
    }
    *(unsigned int *)(a1 + 16) = a5[4]; /*0x67baa3*/
    *(unsigned int *)(a1 + 20) = a5[5]; /*0x67baa9*/
    *(unsigned int *)a1 = &vt_TypeList_AircraftTypeClass_const; /*0x67baac*/
  }
  return (VectorClass *)a1; /*0x67ba22*/

}
}
// 0x4756F0
namespace gamemd {
int HouseTypeClass::loadCountryData(unsigned char * a2, unsigned char * a3, int a4)
{

  int result; // eax
  unsigned int *v5; // eax
  unsigned int *v6; // eax
  int v7; // ecx
  unsigned int *i; // edx
  char Destination[128]; // [esp+0h] [ebp-80h] BYREF

  if ( !INIClass::GetString(this, a2, a3, &g_abs_889F64, Destination, 128) ) /*0x475712*/
    return a4; /*0x475782*/
  result = HouseTypeClass::Find(Destination); /*0x47571f*/
  if ( result == -1 ) /*0x475727*/
  {
    v5 = RA2_OPNEW(0xB4u); /*0x47572e*/
    if ( v5 ) /*0x475738*/
      v6 = SideClass::Construct(v5, Destination); /*0x475741*/
    else
      v6 = 0; /*0x475748*/
    v7 = 0; /*0x475751*/
    if ( g_abs_8B4130 <= 0 ) /*0x475755*/
    {
      return -1; /*0x475769*/
    }
    else
    {
      for ( i = g_abs_8B4124; (unsigned int *)*i != v6; ++i ) /*0x475757*/
      {
        if ( ++v7 >= g_abs_8B4130 ) /*0x475767*/
          return -1; /*0x475767*/
      }
      return v7; /*0x475776*/
    }
  }
  return result; /*0x47576d*/

}
} // namespace gamemd

// 0x512280
namespace gamemd {
int HouseTypeClass::StubReturnFalse(int a1)
{

  return 0; /*0x512282*/

}
} // namespace gamemd

// 0x512570
namespace gamemd {
int HouseTypeClass::LoadHouse(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x512576*/
    return -2147467261; /*0x512578*/
  a2[1] = 0; /*0x512580*/
  *a2 = 436; /*0x512587*/
  return 0; /*0x51257d*/

}
} // namespace gamemd

// 0x5125A0
namespace gamemd {
int HouseTypeClass::QueryInterface(int a1, const void * a2, unsigned int * a3)
{

  int v4; // ecx

  if ( !a3 ) /*0x5125a7*/
    return -2147467261; /*0x5125a9*/
  *a3 = 0; /*0x5125c6*/
  if ( !memcmp(a2, &IID_IUnknown, 0x10u) ) /*0x5125d0*/
    *a3 = a1; /*0x5125d4*/
  if ( !memcmp(a2, &IID_IPersist, 0x10u) ) /*0x5125e5*/
    *a3 = a1; /*0x5125e9*/
  if ( !memcmp(a2, &IID_IPersistStream, 0x10u) ) /*0x5125f9*/
    *a3 = a1; /*0x5125fe*/
  if ( !memcmp(a2, &IID_IRTTITypeInfo, 0x10u) ) /*0x51260e*/
  {
    if ( a1 ) /*0x512616*/
      v4 = a1 + 4; /*0x512618*/
    else
      v4 = 0; /*0x51261d*/
    *a3 = v4; /*0x51261f*/
  }
  if ( !*a3 ) /*0x512621*/
    return -2147467262; /*0x512626*/
  (*(void (**)(int))(*(unsigned int *)a1 + 4))(a1); /*0x512632*/
  return 0; /*0x5125ae*/

}
} // namespace gamemd

// 0x512640
namespace gamemd {
int HouseTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x512646*/
    return -2147467261; /*0x512648*/
  *a2 = 500447528; /*0x512656*/
  a2[1] = 298976363; /*0x51265e*/
  a2[2] = 1610654892; /*0x512667*/
  a2[3] = -1252326136; /*0x512670*/
  return 0; /*0x51264d*/

}
} // namespace gamemd

// 0x512710
namespace gamemd {
int HouseTypeClass::GetTypeIdentifier()
{

  return 14; /*0x512715*/

}
} // namespace gamemd

// 0x512720
namespace gamemd {
int HouseTypeClass::GetObjectSize()
{

  return 432; /*0x512725*/

}
} // namespace gamemd

// 0x512730
namespace gamemd {
unsigned int HouseTypeClass::loadBuildLimits()
{

  return *((unsigned int *)this + 45); /*0x512736*/

}
} // namespace gamemd

// 0x512740
namespace gamemd {
int HouseTypeClass::AddRef(int a1)
{

  return 1; /*0x512745*/

}
} // namespace gamemd

// 0x512750
namespace gamemd {
int HouseTypeClass::Release(int a1)
{

  return 1; /*0x512755*/

}
} // namespace gamemd

// 0x512760
namespace gamemd {
HouseTypeClass * HouseTypeClass::Destructor(void ** Block, char a2)
{

  int v3; // eax
  UnitTypeClass *v4; // eax
  void *v5; // eax
  void *v6; // eax
  void **v8; // [esp+4h] [ebp-4h] BYREF

  *Block = &vt_HouseTypeClass; /*0x512766*/
  *(Block + 1) = &vt_HouseTypeClass; /*0x51276c*/
  *(Block + 2) = &vt_HouseTypeClass; /*0x512773*/
  *(Block + 3) = &vt_HouseTypeClass; /*0x51277a*/
  AbstractClass::AnnounceExpiredPointer(Block, 1); /*0x512781*/
  v8 = Block; /*0x512796*/
  v3 = (*(int (**)(int *, void ***))(dword_A83C98 + 16))(&dword_A83C98, &v8); /*0x51279a*/
  if ( v3 != -1 && v3 < g_SuperWeaponTypeArray && v3 < --g_SuperWeaponTypeArray ) /*0x5127b5*/
  {
    do /*0x5127cd*/
    {
      ++v3; /*0x5127bd*/
      *((unsigned int *)g_SuperWeaponTypeCount + v3 - 1) = *((unsigned int *)g_SuperWeaponTypeCount + v3); /*0x5127c1*/
    }
    while ( v3 < g_SuperWeaponTypeArray ); /*0x5127cd*/
  }
  v4 = (UnitTypeClass *)*(Block + 98); /*0x5127cf*/
  *(Block + 97) = &vt_VectorClass_AircraftTypeClass_const; /*0x5127d8*/
  if ( v4 && *((unsigned char *)Block + 401) ) /*0x5127e6*/
  {
    RA2_OPDEL(v4); /*0x5127ef*/
    *(Block + 98) = 0; /*0x5127f7*/
  }
  *((unsigned char *)Block + 401) = 0; /*0x5127fd*/
  *(Block + 99) = 0; /*0x512803*/
  v5 = *(Block + 91); /*0x512809*/
  *(Block + 90) = &vt_VectorClass_UnitTypeClass_const; /*0x51280f*/
  if ( v5 && *((unsigned char *)Block + 373) ) /*0x51281d*/
  {
    RA2_OPDEL(v5); /*0x512826*/
    *(Block + 91) = 0; /*0x51282e*/
  }
  *((unsigned char *)Block + 373) = 0; /*0x512834*/
  *(Block + 92) = 0; /*0x51283a*/
  v6 = *(Block + 84); /*0x512840*/
  *(Block + 83) = &vt_VectorClass_InfantryTypeClass_const; /*0x512846*/
  if ( v6 && *((unsigned char *)Block + 345) ) /*0x512854*/
  {
    RA2_OPDEL(v6); /*0x51285d*/
    *(Block + 84) = 0; /*0x512865*/
  }
  *((unsigned char *)Block + 345) = 0; /*0x51286d*/
  *(Block + 85) = 0; /*0x512873*/
  AbstractTypeClass::Dtor(Block); /*0x512879*/
  if ( (Block & 1) != 0 ) /*0x512885*/
    RA2_OPDEL(Block); /*0x512888*/
  return (HouseTypeClass *)Block; /*0x512892*/

}
} // namespace gamemd

// 0x512900
namespace gamemd {
void HouseTypeClass_36::ddtor()
{

  void *v2; // eax

  v2 = *(void **)((char *)this + 4); /*0x512906*/
  *((unsigned int *)this + 4) = 0; /*0x512909*/
  if ( v2 && *((unsigned char *)this + 13) ) /*0x512910*/
  {
    RA2_OPDEL(v2); /*0x512916*/
    *((unsigned int *)this + 1) = 0; /*0x51291e*/
  }
  *((unsigned char *)this + 13) = 0; /*0x512921*/
  *((unsigned int *)this + 2) = 0; /*0x512924*/

}
} // namespace gamemd

// 0x512930
namespace gamemd {
unsigned int HouseTypeClass_36::Write(int a2)
{

  if ( *((unsigned char *)this + 12) ) /*0x512930*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 2; /*0x512945*/
  else
    return 0; /*0x512937*/

}
} // namespace gamemd

// 0x512950
namespace gamemd {
int HouseTypeClass_36::Seek(int a2)
{

  return *(unsigned int *)(*((unsigned int *)this + 1) + 4 * a2); /*0x51295a*/

}
} // namespace gamemd

// 0x512960
namespace gamemd {
unsigned int * HouseTypeClass::readStartUnit()
{

  *((unsigned int *)this + 1) = 0; /*0x512964*/
  *((unsigned int *)this + 2) = 0; /*0x512967*/
  *((unsigned char *)this + 12) = 1; /*0x51296a*/
  *((unsigned char *)this + 13) = 0; /*0x51296e*/
  *((unsigned int *)this + 5) = 10; /*0x512971*/
  *((unsigned int *)this + 4) = 0; /*0x512978*/
  *this = &vt_TypeList_AircraftTypeClass_const; /*0x51297b*/
  return this; /*0x512981*/

}
} // namespace gamemd

// 0x512990
namespace gamemd {
void HouseTypeClass_28::ddtor()
{

  void *v2; // eax

  v2 = *(void **)((char *)this + 4); /*0x512996*/
  *((unsigned int *)this + 4) = 0; /*0x512999*/
  if ( v2 && *((unsigned char *)this + 13) ) /*0x5129a0*/
  {
    RA2_OPDEL(v2); /*0x5129a6*/
    *((unsigned int *)this + 1) = 0; /*0x5129ae*/
  }
  *((unsigned char *)this + 13) = 0; /*0x5129b1*/
  *((unsigned int *)this + 2) = 0; /*0x5129b4*/

}
} // namespace gamemd

// 0x5129C0
namespace gamemd {
unsigned int HouseTypeClass_28::Write(int a2)
{

  if ( *((unsigned char *)this + 12) ) /*0x5129c0*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 2; /*0x5129d5*/
  else
    return 0; /*0x5129c7*/

}
} // namespace gamemd

// 0x5129E0
namespace gamemd {
int HouseTypeClass_28::Seek(int a2)
{

  return *(unsigned int *)(*((unsigned int *)this + 1) + 4 * a2); /*0x5129ea*/

}
} // namespace gamemd

// 0x512A40
namespace gamemd {
TypeList_flat * HouseTypeClass_36::QueryInterface(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x512a43*/
  *Block = &vt_VectorClass_UnitTypeClass_const; /*0x512a46*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x512a50*/
  {
    RA2_OPDEL(v3); /*0x512a58*/
    *(Block + 1) = 0; /*0x512a60*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x512a6b*/
  *(Block + 2) = 0; /*0x512a71*/
  if ( (Block & 1) != 0 ) /*0x512a78*/
    RA2_OPDEL(Block); /*0x512a7b*/
  return (TypeList *)Block; /*0x512a85*/

}
} // namespace gamemd

// 0x512A90
namespace gamemd {
TypeList_flat * HouseTypeClass_28::QueryInterface(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x512a93*/
  *Block = &vt_VectorClass_AircraftTypeClass_const; /*0x512a96*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x512aa0*/
  {
    RA2_OPDEL(v3); /*0x512aa8*/
    *(Block + 1) = 0; /*0x512ab0*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x512abb*/
  *(Block + 2) = 0; /*0x512ac1*/
  if ( (Block & 1) != 0 ) /*0x512ac8*/
    RA2_OPDEL(Block); /*0x512acb*/
  return (TypeList *)Block; /*0x512ad5*/

}
} // namespace gamemd

// 0x512B80
namespace gamemd {
VectorClass_flat * HouseTypeClass_36::Constructor(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = (void *)*(Block + 1); /*0x512b83*/
  *Block = &vt_VectorClass_AircraftTypeClass_const; /*0x512b86*/
  if ( v3 && *((unsigned char *)Block + 13) ) /*0x512b90*/
  {
    RA2_OPDEL(v3); /*0x512b98*/
    *(Block + 1) = 0; /*0x512ba0*/
  }
  *((unsigned char *)Block + 13) = 0; /*0x512bab*/
  *(Block + 2) = 0; /*0x512bb1*/
  if ( (Block & 1) != 0 ) /*0x512bb8*/
    RA2_OPDEL(Block); /*0x512bbb*/
  return (VectorClass *)Block; /*0x512bc5*/

}
} // namespace gamemd

// 0x512BD0
namespace gamemd {
unsigned int * HouseTypeClass::readStartInfantry(InfantryTypeClass * aP1)
{

  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( this == (unsigned int *)aP1 ) /*0x512bda*/
    return this; /*0x512bda*/
  (*(void (**)(unsigned int *))(*(unsigned int *)this + 48))(this); /*0x512bde*/
  v3 = *(unsigned int *)&aP1->vtable0[8]; /*0x512be1*/
  *((unsigned int *)this + 2) = v3; /*0x512be6*/
  if ( !v3 ) /*0x512be9*/
  {
    *((unsigned int *)this + 1) = 0; /*0x512c2a*/
    *((unsigned char *)this + 13) = 0; /*0x512c31*/
    return this; /*0x512c35*/
  }
  v4 = RA2_OPNEW(4 * v3); /*0x512bf3*/
  *((unsigned int *)this + 1) = v4; /*0x512bfb*/
  if ( !v4 ) /*0x512c00*/
    return this; /*0x512c00*/
  v5 = *((unsigned int *)this + 2); /*0x512c02*/
  v6 = 0; /*0x512c05*/
  *((unsigned char *)this + 13) = 1; /*0x512c09*/
  if ( v5 <= 0 ) /*0x512c0d*/
    return this; /*0x512c0d*/
  do /*0x512c21*/
  {
    *(unsigned int *)(*((unsigned int *)this + 1) + 4 * v6) = *(unsigned int *)(*(unsigned int *)&aP1->vtable0[4] + 4 * v6); /*0x512c18*/
    ++v6; /*0x512c1e*/
  }
  while ( v6 < *((unsigned int *)this + 2) ); /*0x512c21*/
  return this; /*0x512c25*/

}
} // namespace gamemd

// 0x513010
namespace gamemd {
char HouseTypeClass_36::AddRef(int a2)
{

  int v2; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  v2 = *((char *)this + 2); /*0x513012*/
  if ( v2 == *(unsigned int *)(a2 + 8) ) /*0x51301d*/
  {
    v3 = 0; /*0x51301f*/
    if ( v2 <= 0 ) /*0x513023*/
      return 1; /*0x513043*/
    v4 = (unsigned int *)*((char *)this + 1); /*0x513025*/
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x51302b*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x513034*/
    {
      ++v3; /*0x513036*/
      ++v4; /*0x513037*/
      if ( v3 >= v2 ) /*0x51303c*/
        return 1; /*0x51303c*/
    }
  }
  return 0; /*0x51303e*/

}
} // namespace gamemd

// 0x513240
namespace gamemd {
char HouseTypeClass_36::Release(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x51324c*/
  {
    *((unsigned char *)this + 12) = 0; /*0x513252*/
    if ( a3 ) /*0x513258*/
      v4 = a3; /*0x51326e*/
    else
      v4 = RA2_OPNEW(4 * a2); /*0x51326a*/
    *((unsigned char *)this + 12) = 1; /*0x513272*/
    if ( !v4 ) /*0x513276*/
      return 0; /*0x5132ea*/
    if ( *((unsigned int *)this + 1) ) /*0x513278*/
    {
      v5 = *((unsigned int *)this + 2); /*0x51327f*/
      if ( a2 < v5 ) /*0x513284*/
        v5 = a2; /*0x513286*/
      for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) ) /*0x51328c*/
        ++i; /*0x513291*/
      if ( *((unsigned char *)this + 13) ) /*0x51329e*/
      {
        RA2_OPDEL(*((void **)this + 1)); /*0x5132a9*/
        *((unsigned int *)this + 1) = 0; /*0x5132b1*/
      }
    }
    *((unsigned int *)this + 1) = v4; /*0x5132ba*/
    *((unsigned int *)this + 2) = a2; /*0x5132c2*/
    *((unsigned char *)this + 13) = a3 == 0; /*0x5132c5*/
  }
  else
  {
    (*(void (**)(void *))(*(unsigned int *)this + 12))(this); /*0x5132ce*/
  }
  v7 = *((unsigned int *)this + 2); /*0x5132d1*/
  if ( v7 < *((unsigned int *)this + 4) ) /*0x5132d9*/
    *((unsigned int *)this + 4) = v7; /*0x5132db*/
  return 1; /*0x5132de*/

}
} // namespace gamemd

// 0x513340
namespace gamemd {
int HouseTypeClass_36::Read(unsigned int * a2)
{

  int v2; // edx
  int result; // eax
  unsigned int *i; // ecx

  v2 = *((char *)this + 4); /*0x513340*/
  result = 0; /*0x513343*/
  if ( v2 <= 0 ) /*0x513348*/
    return -1; /*0x51335f*/
  for ( i = (unsigned int *)*((char *)this + 1); *i != *a2; ++i ) /*0x51334e*/
  {
    if ( ++result >= v2 ) /*0x51335d*/
      return -1; /*0x51335d*/
  }
  return result; /*0x513362*/

}
}
// 0x5133E0
namespace gamemd {
char HouseTypeClass_28::AddRef(int a2)
{

  int v2; // esi
  int v3; // edx
  unsigned int *v4; // eax
  int v5; // ecx

  v2 = *((char *)this + 2); /*0x5133e2*/
  if ( v2 == *(unsigned int *)(a2 + 8) ) /*0x5133ed*/
  {
    v3 = 0; /*0x5133ef*/
    if ( v2 <= 0 ) /*0x5133f3*/
      return 1; /*0x513413*/
    v4 = (unsigned int *)*((char *)this + 1); /*0x5133f5*/
    v5 = *(unsigned int *)(a2 + 4) - (unsigned int)v4; /*0x5133fb*/
    while ( *v4 == *(unsigned int *)((char *)v4 + v5) ) /*0x513404*/
    {
      ++v3; /*0x513406*/
      ++v4; /*0x513407*/
      if ( v3 >= v2 ) /*0x51340c*/
        return 1; /*0x51340c*/
    }
  }
  return 0; /*0x51340e*/

}
} // namespace gamemd

// 0x513420
namespace gamemd {
char HouseTypeClass_36::SetCapacity(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x51342c*/
  {
    *((unsigned char *)this + 12) = 0; /*0x513436*/
    if ( a3 ) /*0x51343c*/
      v4 = a3; /*0x513452*/
    else
      v4 = RA2_OPNEW(4 * a2); /*0x51344e*/
    *((unsigned char *)this + 12) = 1; /*0x513456*/
    if ( v4 ) /*0x51345a*/
    {
      if ( *((unsigned int *)this + 1) ) /*0x513465*/
      {
        v6 = *((unsigned int *)this + 2); /*0x51346c*/
        if ( a2 < v6 ) /*0x513471*/
          v6 = a2; /*0x513473*/
        for ( i = 0; i < v6; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) ) /*0x513479*/
          ++i; /*0x51347e*/
        if ( *((unsigned char *)this + 13) ) /*0x51348b*/
        {
          RA2_OPDEL(*((void **)this + 1)); /*0x513496*/
          *((unsigned int *)this + 1) = 0; /*0x51349e*/
        }
      }
      *((unsigned int *)this + 1) = v4; /*0x5134a7*/
      *((unsigned int *)this + 2) = a2; /*0x5134af*/
      *((unsigned char *)this + 13) = a3 == 0; /*0x5134b2*/
      return 1; /*0x5134b8*/
    }
    else
    {
      return 0; /*0x51345f*/
    }
  }
  else
  {
    (*(void (**)(void *))(*(unsigned int *)this + 12))(this); /*0x5134c2*/
    return 1; /*0x5134c8*/
  }

}
} // namespace gamemd

// 0x513500
namespace gamemd {
int HouseTypeClass_36::IndexOf(unsigned int * a2)
{

  int result; // eax
  int v3; // edx
  unsigned int *i; // ecx

  if ( !*((unsigned char *)this + 12) ) /*0x513500*/
    return 0; /*0x513508*/
  v3 = *((unsigned int *)this + 2); /*0x51350e*/
  result = 0; /*0x513511*/
  if ( v3 <= 0 ) /*0x513515*/
    return -1; /*0x51352c*/
  for ( i = *(unsigned int **)((char *)this + 4); *i != *a2; ++i ) /*0x51351b*/
  {
    if ( ++result >= v3 ) /*0x51352a*/
      return -1; /*0x51352a*/
  }
  return result; /*0x51350a*/

}
} // namespace gamemd

// 0x513540
namespace gamemd {
unsigned int HouseTypeClass_36::PointerToIndex(int a2)
{

  if ( *((unsigned char *)this + 12) ) /*0x513540*/
    return (unsigned int)(a2 - *((unsigned int *)this + 1)) >> 2; /*0x513555*/
  else
    return 0; /*0x513547*/

}
} // namespace gamemd

// 0x513560
namespace gamemd {
unsigned int * HouseTypeClass::readDefaultAlly(int a2, int a3)
{

  *((unsigned int *)this + 1) = 0; /*0x513569*/
  *((unsigned int *)this + 2) = a2; /*0x513570*/
  *((unsigned char *)this + 12) = 1; /*0x513573*/
  *((unsigned char *)this + 13) = 0; /*0x513577*/
  *this = &vt_VectorClass_AircraftTypeClass_const; /*0x51357b*/
  if ( a2 ) /*0x513581*/
  {
    if ( a3 ) /*0x513589*/
    {
      *((unsigned int *)this + 1) = a3; /*0x51358b*/
    }
    else
    {
      *((unsigned int *)this + 1) = RA2_OPNEW(4 * a2); /*0x51359c*/
      *((unsigned char *)this + 13) = 1; /*0x51359f*/
    }
  }
  *this = &vt_DynamicVectorClass_AircraftTypeClass_const; /*0x5135a3*/
  *((unsigned int *)this + 5) = 10; /*0x5135a9*/
  *((unsigned int *)this + 4) = 0; /*0x5135b0*/
  return this; /*0x5135b9*/

}
} // namespace gamemd

// 0x513610
namespace gamemd {
char HouseTypeClass_28::Release(int a2, unsigned int * a3)
{

  unsigned int *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x51361c*/
  {
    *((unsigned char *)this + 12) = 0; /*0x513622*/
    if ( a3 ) /*0x513628*/
      v4 = a3; /*0x51363e*/
    else
      v4 = RA2_OPNEW(4 * a2); /*0x51363a*/
    *((unsigned char *)this + 12) = 1; /*0x513642*/
    if ( !v4 ) /*0x513646*/
      return 0; /*0x5136ba*/
    if ( *((unsigned int *)this + 1) ) /*0x513648*/
    {
      v5 = *((unsigned int *)this + 2); /*0x51364f*/
      if ( a2 < v5 ) /*0x513654*/
        v5 = a2; /*0x513656*/
      for ( i = 0; i < v5; v4[i - 1] = *(unsigned int *)(*((unsigned int *)this + 1) + 4 * i - 4) ) /*0x51365c*/
        ++i; /*0x513661*/
      if ( *((unsigned char *)this + 13) ) /*0x51366e*/
      {
        RA2_OPDEL(*((void **)this + 1)); /*0x513679*/
        *((unsigned int *)this + 1) = 0; /*0x513681*/
      }
    }
    *((unsigned int *)this + 1) = v4; /*0x51368a*/
    *((unsigned int *)this + 2) = a2; /*0x513692*/
    *((unsigned char *)this + 13) = a3 == 0; /*0x513695*/
  }
  else
  {
    (*(void (**)(void *))(*(unsigned int *)this + 12))(this); /*0x51369e*/
  }
  v7 = *((unsigned int *)this + 2); /*0x5136a1*/
  if ( v7 < *((unsigned int *)this + 4) ) /*0x5136a9*/
    *((unsigned int *)this + 4) = v7; /*0x5136ab*/
  return 1; /*0x5136ae*/

}
} // namespace gamemd

// 0x5136C0
namespace gamemd {
char HouseTypeClass::readPowerPlants(TypeList_flat * aP1)
{

  int v3; // ecx
  int v4; // eax
  int v6; // eax
  int v7; // edx

  v3 = *((unsigned int *)this + 2); /*0x5136c3*/
  if ( *((unsigned int *)this + 4) >= v3 ) /*0x5136cb*/
  {
    if ( !*((unsigned char *)this + 13) && v3 ) /*0x5136d6*/
      return 0; /*0x5136d6*/
    v4 = *((unsigned int *)this + 5); /*0x5136d8*/
    if ( v4 <= 0 || !(*(uint8_t (**)(unsigned int *, int, unsigned int))(*(unsigned int *)this + 32))(this, v3 + v4, 0) ) /*0x5136e8*/
      return 0; /*0x5136ef*/
  }
  v6 = *((unsigned int *)this + 4); /*0x5136f5*/
  v7 = *((unsigned int *)this + 1); /*0x5136f8*/
  *((unsigned int *)this + 4) = v6 + 1; /*0x5136fe*/
  *(unsigned int *)(v7 + 4 * v6) = aP1->vtable0; /*0x513708*/
  return 1; /*0x5136f1*/

}
} // namespace gamemd

// 0x513710
namespace gamemd {
int HouseTypeClass_28::Read(unsigned int * a2)
{

  int v2; // edx
  int result; // eax
  unsigned int *i; // ecx

  v2 = *((char *)this + 4); /*0x513710*/
  result = 0; /*0x513713*/
  if ( v2 <= 0 ) /*0x513718*/
    return -1; /*0x51372f*/
  for ( i = (unsigned int *)*((char *)this + 1); *i != *a2; ++i ) /*0x51371e*/
  {
    if ( ++result >= v2 ) /*0x51372d*/
      return -1; /*0x51372d*/
  }
  return result; /*0x513732*/

}
}
// 0x5137D0
namespace gamemd {
unsigned int * HouseTypeClass::readParaDropTypes(VectorClass_flat * aP1)
{

  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  *((unsigned int *)this + 1) = 0; /*0x5137dd*/
  *((unsigned int *)this + 2) = 0; /*0x5137e0*/
  *((unsigned char *)this + 12) = 1; /*0x5137e3*/
  *((unsigned char *)this + 13) = 0; /*0x5137e7*/
  *this = &vt_VectorClass_AircraftTypeClass_const; /*0x5137ea*/
  if ( this != (unsigned int *)aP1 ) /*0x5137f0*/
  {
    VectorClass::ClearAndFree4((int)this); /*0x5137f2*/
    v3 = aP1->Capacity; /*0x5137f8*/
    *((unsigned int *)this + 2) = v3; /*0x5137fd*/
    if ( v3 ) /*0x513800*/
    {
      v4 = RA2_OPNEW(4 * v3); /*0x513806*/
      *((unsigned int *)this + 1) = v4; /*0x513810*/
      if ( v4 ) /*0x513813*/
      {
        v5 = *((unsigned int *)this + 2); /*0x513815*/
        v6 = 0; /*0x513818*/
        *((unsigned char *)this + 13) = 1; /*0x51381c*/
        if ( v5 > 0 ) /*0x513820*/
        {
          do /*0x513834*/
          {
            *(unsigned int *)(*((unsigned int *)this + 1) + 4 * v6) = *((unsigned int *)aP1->Items + v6); /*0x51382b*/
            ++v6; /*0x513831*/
          }
          while ( v6 < *((unsigned int *)this + 2) ); /*0x513834*/
        }
      }
    }
    else
    {
      *((unsigned int *)this + 1) = 0; /*0x513838*/
      *((unsigned char *)this + 13) = 0; /*0x51383b*/
    }
  }
  *((unsigned int *)this + 4) = aP1[1].vtable0; /*0x513841*/
  *((unsigned int *)this + 5) = aP1[1].Items; /*0x513847*/
  *this = &vt_TypeList_AircraftTypeClass_const; /*0x51384a*/
  return this; /*0x513852*/

}
} // namespace gamemd

// 0x513860
namespace gamemd {
unsigned int * HouseTypeClass::readAllowedUnits(InfantryTypeClass * aP1)
{

  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  *((unsigned int *)this + 1) = 0; /*0x51386d*/
  *((unsigned int *)this + 2) = 0; /*0x513870*/
  *((unsigned char *)this + 12) = 1; /*0x513873*/
  *((unsigned char *)this + 13) = 0; /*0x513877*/
  *this = &vt_VectorClass_InfantryTypeClass_const; /*0x51387a*/
  if ( this != (unsigned int *)aP1 ) /*0x513880*/
  {
    Vector::Cleanup((int)this); /*0x513882*/
    v3 = *(unsigned int *)&aP1->vtable0[8]; /*0x513888*/
    *((unsigned int *)this + 2) = v3; /*0x51388d*/
    if ( v3 ) /*0x513890*/
    {
      v4 = RA2_OPNEW(4 * v3); /*0x513896*/
      *((unsigned int *)this + 1) = v4; /*0x5138a0*/
      if ( v4 ) /*0x5138a3*/
      {
        v5 = *((unsigned int *)this + 2); /*0x5138a5*/
        v6 = 0; /*0x5138a8*/
        *((unsigned char *)this + 13) = 1; /*0x5138ac*/
        if ( v5 > 0 ) /*0x5138b0*/
        {
          do /*0x5138c4*/
          {
            *(unsigned int *)(*((unsigned int *)this + 1) + 4 * v6) = *(unsigned int *)(*(unsigned int *)&aP1->vtable0[4] + 4 * v6); /*0x5138bb*/
            ++v6; /*0x5138c1*/
          }
          while ( v6 < *((unsigned int *)this + 2) ); /*0x5138c4*/
        }
      }
    }
    else
    {
      *((unsigned int *)this + 1) = 0; /*0x5138c8*/
      *((unsigned char *)this + 13) = 0; /*0x5138cb*/
    }
  }
  *((unsigned int *)this + 4) = aP1->uniqueId; /*0x5138d1*/
  *((unsigned int *)this + 5) = aP1->abstractFlags; /*0x5138d7*/
  *this = &vt_DynamicVectorClass_InfantryTypeClass_const; /*0x5138da*/
  return this; /*0x5138e2*/

}
} // namespace gamemd

// 0x5139E0
namespace gamemd {
int HouseTypeClass::readBaseDefenses(int a1, const void * a2, unsigned int * a3)
{

  return HouseTypeClass::QueryInterface(a1 - 4, a2, a3);

}
} // namespace gamemd

// 0x5139F0
namespace gamemd {
int HouseTypeClass::readAiBuildLists(int a1)
{

  return HouseTypeClass::AddRef(a1 - 4);

}
} // namespace gamemd

// 0x513A00
namespace gamemd {
int HouseTypeClass::readLoadoutData(int a1)
{

  return HouseTypeClass::Release(a1 - 4);

}
} // namespace gamemd

// 0x6A46D0
namespace gamemd {
int HouseTypeClass::Find()
{

  int v1; // esi

  v1 = 0; /*0x6a46d6*/
  if ( g_abs_8B4130 <= 0 ) /*0x6a46dd*/
    return -1; /*0x6a4702*/
  while ( _strcmpi((const void *)(*((unsigned int *)g_abs_8B4124 + v1) + 36), this) ) /*0x6a46f6*/
  {
    if ( ++v1 >= g_abs_8B4130 ) /*0x6a4700*/
      return -1; /*0x6a4700*/
  }
  return v1; /*0x6a4702*/

}
}