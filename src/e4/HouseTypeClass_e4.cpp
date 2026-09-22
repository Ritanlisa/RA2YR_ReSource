// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/HouseTypeClass_28_e4.hpp"
#include "e4/classes/HouseTypeClass_36_e4.hpp"

// 0x511650
namespace gamemd {
unsigned int * HouseTypeClass::loadVeteranWeapons(HouseTypeClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall HouseTypeClass::loadVeteranWeapons(_DWORD *this, HouseTypeClass *aP1)
{
  AbstractTypeClass::Init((int)this, (AbstractTypeClass *)aP1); /*0x511658*/
  this->q14C = &vt_TypeList_InfantryTypeClass_const; /*0x51165d*/
  this->q168 = &vt_TypeList_UnitTypeClass_const; /*0x511667*/
  this->q184 = &vt_TypeList_AircraftTypeClass_const; /*0x511671*/
  *this = &HouseTypeClass::`vftable'; /*0x51167b*/
  this->vtable2 = &HouseTypeClass::`vftable'; /*0x511681*/
  this->vtable3 = &HouseTypeClass::`vftable'; /*0x511688*/
  this->vtable4 = &vt_HouseTypeClass; /*0x51168f*/
  return this; /*0x511698*/
}
}
} // namespace gamemd

// 0x5116A0
namespace gamemd {
int HouseTypeClass::Dtor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_5116A0(int this)
{
  int v2; // eax
  void *v3; // eax
  void *v4; // eax
  void *v5; // eax
  int v7; // [esp+8h] [ebp-4h] BYREF

  *(_DWORD *)this = &HouseTypeClass::`vftable'; /*0x5116a7*/
  this->vtable1 = &HouseTypeClass::`vftable'; /*0x5116ad*/
  this->vtable2 = &HouseTypeClass::`vftable'; /*0x5116b4*/
  this->vtable3 = &vt_HouseTypeClass; /*0x5116bb*/
  AbstractClass::AnnounceExpiredPointer((void **)this, 1); /*0x5116c2*/
  v7 = this; /*0x5116d7*/
  v2 = (*(int (__thiscall **)(int *, int *))(dword_A83C98 + 16))(&dword_A83C98, &v7); /*0x5116db*/
  if ( v2 != -1 && v2 < g_SuperWeaponTypeArray && v2 < --g_SuperWeaponTypeArray ) /*0x5116f6*/
  {
    do /*0x51170e*/
    {
      ++v2; /*0x5116fe*/
      *((_DWORD *)g_SuperWeaponTypeCount + v2 - 1) = *((_DWORD *)g_SuperWeaponTypeCount + v2); /*0x511702*/
    }
    while ( v2 < g_SuperWeaponTypeArray ); /*0x51170e*/
  }
  v3 = *(void **)(this + 392); /*0x511710*/
  this->q184 = &vt_VectorClass_AircraftTypeClass_const; /*0x51171a*/
  if ( v3 && *(_BYTE *)(this + 401) ) /*0x511726*/
  {
    __3_YAXPAX_Z(v3); /*0x51172f*/
    this->q188 = 0; /*0x511737*/
  }
  *(_BYTE *)(this + 401) = 0; /*0x51173d*/
  this->q18C = 0; /*0x511743*/
  v4 = *(void **)(this + 364); /*0x511749*/
  this->q168 = &vt_VectorClass_UnitTypeClass_const; /*0x51174f*/
  if ( v4 && *(_BYTE *)(this + 373) ) /*0x51175d*/
  {
    __3_YAXPAX_Z(v4); /*0x511766*/
    this->q16C = 0; /*0x51176e*/
  }
  *(_BYTE *)(this + 373) = 0; /*0x511774*/
  this->q170 = 0; /*0x51177a*/
  v5 = *(void **)(this + 336); /*0x511780*/
  this->veteranInfantry = &vt_VectorClass_InfantryTypeClass_const; /*0x511786*/
  if ( v5 && *(_BYTE *)(this + 345) ) /*0x511794*/
  {
    __3_YAXPAX_Z(v5); /*0x51179d*/
    this->veteranInfantryCount = 0; /*0x5117a5*/
  }
  *(_BYTE *)(this + 345) = 0; /*0x5117ad*/
  this->veteranUnits = 0; /*0x5117b3*/
  return AbstractTypeClass::Dtor((_DWORD *)this); /*0x5117be*/
}
}
} // namespace gamemd

// 0x511850
namespace gamemd {
char HouseTypeClass::LoadFromINI(unsigned char *** aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall HouseTypeClass::LoadFromINI(int this, unsigned __int8 ***aP1)
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
    (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
    (INIClass *)&aP4.__pad_20[2],
    4);
  if ( strlen(&aP4.__pad_20[2]) ) /*0x51189b*/
  {
    strcpy((char *)(this + 416), &aP4.__pad_20[2]); /*0x5118c3*/
    v3 = (CCINIClass *)aP1; /*0x5118cc*/
  }
  INIClass::GetString( /*0x5118e2*/
    (unsigned __int8 ***)v3,
    (INIClass *)(this + 36),
    &unk_82549C,
    (INIClass *)(this + 36),
    (INIClass *)&aP4.__pad_20[2],
    25);
  if ( &aP4 == (INIClass *)-34 ) /*0x5118ed*/
  {
    Destination[0] = (unsigned __int8)&aP4.__pad_20[2]; /*0x5118ef*/
  }
  else
  {
    strncpy(Destination, &aP4.__pad_20[2], 0x18u); /*0x511901*/
    LOBYTE(v58) = 0; /*0x511909*/
  }
  if ( Destination != (char *)(this + 152) ) /*0x51191a*/
  {
    qmemcpy((void *)(this + 152), Destination, 0x18u); /*0x511925*/
    this->veteranUnitsCount = v58; /*0x511927*/
    v3 = (CCINIClass *)aP1; /*0x511928*/
  }
  this->colorSchemeIndex = BuildingTypeClass::FindAnimByName( /*0x511942*/
                              (unsigned __int8 ***)v3,
                              (unsigned __int8 *)(this + 36),
                              (unsigned __int8 *)&stru_81B138,
                              this->colorSchemeIndex);
  aP4.__pad_20[2] = this->q1A4; /*0x51195a*/
  aP4.__pad_20[3] = 0; /*0x511966*/
  INIClass::GetString( /*0x51196b*/
    (unsigned __int8 ***)v3,
    (INIClass *)(this + 36),
    &unk_825494,
    (INIClass *)&aP4.__pad_20[2],
    &aP4,
    2);
  this->q1A4 = aP4.__pad_0[0]; /*0x511974*/
  Double_Overwrite = INIClass::ReadDouble_Overwrite( /*0x511990*/
                       (int)v3,
                       (INIClass *)(this + 36),
                       aFirepower,
                       (INIClass *)this->firepowerMult);
  aP3 = *(INIClass **)(this + 208); /*0x51199b*/
  *(double *)(this + 200) = Double_Overwrite; /*0x5119a1*/
  v7 = INIClass::ReadDouble_Overwrite((int)v3, (INIClass *)(this + 36), &unk_825488, aP3); /*0x5119b1*/
  v8 = *(INIClass **)(this + 216); /*0x5119bc*/
  *(double *)(this + 208) = v7; /*0x5119c2*/
  v9 = INIClass::ReadDouble_Overwrite( /*0x5119d2*/
         (int)v3,
         (INIClass *)(this + 36),
         (unsigned __int8 *)&stru_825430.CCINIClass_field_4C,
         v8);
  v10 = *(INIClass **)(this + 224); /*0x5119dd*/
  *(double *)(this + 216) = v9; /*0x5119e3*/
  v11 = INIClass::ReadDouble_Overwrite( /*0x5119f3*/
          (int)v3,
          (INIClass *)(this + 36),
          (unsigned __int8 *)&g_INI_Key_Speed.headNode[1],
          v10);
  v12 = *(INIClass **)(this + 232); /*0x5119fe*/
  *(double *)(this + 224) = v11; /*0x511a04*/
  v13 = INIClass::ReadDouble_Overwrite((int)v3, (INIClass *)(this + 36), (unsigned __int8 *)stru_825430.__pad_48, v12); /*0x511a14*/
  v14 = *(INIClass **)(this + 240); /*0x511a1f*/
  *(double *)(this + 232) = v13; /*0x511a25*/
  v15 = INIClass::ReadDouble_Overwrite((int)v3, (INIClass *)(this + 36), (unsigned __int8 *)&stru_825430.ownsFile, v14); /*0x511a35*/
  v16 = *(INIClass **)(this + 248); /*0x511a40*/
  *(double *)(this + 240) = v15; /*0x511a46*/
  v17 = INIClass::ReadDouble_Overwrite( /*0x511a56*/
          (int)v3,
          (INIClass *)(this + 36),
          (unsigned __int8 *)&stru_825430.needsSave_flag,
          v16);
  v18 = this->q1A5; /*0x511a5b*/
  *(double *)(this + 248) = v17; /*0x511a61*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x511a70*/
                     (int)v3,
                     (unsigned __int8 *)(this + 36),
                     (CCINIClass *)&stru_825430.__pad_20[8],
                     v18);
  aP3_4 = this->q1A6; /*0x511a7d*/
  this->q1A5 = Bool_Overwrite; /*0x511a84*/
  this->q1A6 = INIClass::ReadBool_Overwrite( /*0x511a8f*/
                             (int)v3,
                             (unsigned __int8 *)(this + 36),
                             (CCINIClass *)&stru_825430.sectionHead[1],
                             aP3_4);
  v20 = INIClass::ReadBool_Overwrite( /*0x511aa4*/
          (int)v3,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_825430.headNode[1],
          this->q1A7);
  v21 = this->q1A8; /*0x511aa9*/
  this->q1A7 = v20; /*0x511aaf*/
  v22 = INIClass::ReadBool_Overwrite((int)v3, (unsigned __int8 *)(this + 36), &stru_825430, v21); /*0x511abe*/
  v23 = this->q100; /*0x511ac3*/
  this->q1A8 = v22; /*0x511ace*/
  this->q100 = INIClass::ReadDouble_Overwrite( /*0x511ae2*/
                             (int)v3,
                             (INIClass *)(this + 36),
                             aArmorinfantrym,
                             (INIClass *)LODWORD(v23));
  this->q104 = INIClass::ReadDouble_Overwrite( /*0x511b01*/
                             (int)v3,
                             (INIClass *)(this + 36),
                             aArmorunitsmult,
                             (INIClass *)COERCE_UNSIGNED_INT64(this->q104));
  this->q108 = INIClass::ReadDouble_Overwrite( /*0x511b20*/
                             (int)v3,
                             (INIClass *)(this + 36),
                             aArmoraircraftm,
                             (INIClass *)COERCE_UNSIGNED_INT64(this->q108));
  this->q10C = INIClass::ReadDouble_Overwrite( /*0x511b3f*/
                             (int)v3,
                             (INIClass *)(this + 36),
                             aArmorbuildings,
                             (INIClass *)COERCE_UNSIGNED_INT64(this->q10C));
  this->q110 = INIClass::ReadDouble_Overwrite( /*0x511b5e*/
                             (int)v3,
                             (INIClass *)(this + 36),
                             aArmordefensesm,
                             (INIClass *)COERCE_UNSIGNED_INT64(this->q110));
  this->q114 = INIClass::ReadDouble_Overwrite( /*0x511b7d*/
                             (int)v3,
                             (INIClass *)(this + 36),
                             aCostinfantrymu,
                             (INIClass *)COERCE_UNSIGNED_INT64(this->q114));
  this->q118 = INIClass::ReadDouble_Overwrite( /*0x511b9c*/
                             (int)v3,
                             (INIClass *)(this + 36),
                             aCostunitsmult,
                             (INIClass *)COERCE_UNSIGNED_INT64(this->q118));
  this->q11C = INIClass::ReadDouble_Overwrite( /*0x511bbb*/
                             (int)v3,
                             (INIClass *)(this + 36),
                             aCostaircraftmu,
                             (INIClass *)COERCE_UNSIGNED_INT64(this->q11C));
  this->q120 = INIClass::ReadDouble_Overwrite( /*0x511bda*/
                             (int)v3,
                             (INIClass *)(this + 36),
                             aCostbuildingsm,
                             (INIClass *)COERCE_UNSIGNED_INT64(this->q120));
  this->q124 = INIClass::ReadDouble_Overwrite( /*0x511bf9*/
                             (int)v3,
                             (INIClass *)(this + 36),
                             aCostdefensesmu,
                             (INIClass *)COERCE_UNSIGNED_INT64(this->q124));
  this->q128 = INIClass::ReadDouble_Overwrite( /*0x511c18*/
                             (int)v3,
                             (INIClass *)(this + 36),
                             aSpeedinfantrym,
                             (INIClass *)COERCE_UNSIGNED_INT64(this->q128));
  this->q12C = INIClass::ReadDouble_Overwrite( /*0x511c37*/
                             (int)v3,
                             (INIClass *)(this + 36),
                             aSpeedunitsmult,
                             (INIClass *)COERCE_UNSIGNED_INT64(this->q12C));
  this->q130 = INIClass::ReadDouble_Overwrite( /*0x511c56*/
                             (int)v3,
                             (INIClass *)(this + 36),
                             aSpeedaircraftm,
                             (INIClass *)COERCE_UNSIGNED_INT64(this->q130));
  this->q134 = INIClass::ReadDouble_Overwrite( /*0x511c75*/
                             (int)v3,
                             (INIClass *)(this + 36),
                             aBuildtimeinfan,
                             (INIClass *)COERCE_UNSIGNED_INT64(this->q134));
  this->q138 = INIClass::ReadDouble_Overwrite( /*0x511c94*/
                             (int)v3,
                             (INIClass *)(this + 36),
                             aBuildtimeunits,
                             (INIClass *)COERCE_UNSIGNED_INT64(this->q138));
  this->q13C = INIClass::ReadDouble_Overwrite( /*0x511cb3*/
                             (int)v3,
                             (INIClass *)(this + 36),
                             aBuildtimeaircr,
                             (INIClass *)COERCE_UNSIGNED_INT64(this->q13C));
  this->q140 = INIClass::ReadDouble_Overwrite( /*0x511cd2*/
                             (int)v3,
                             (INIClass *)(this + 36),
                             aBuildtimebuild,
                             (INIClass *)COERCE_UNSIGNED_INT64(this->q140));
  this->q144 = INIClass::ReadDouble_Overwrite( /*0x511cf1*/
                             (int)v3,
                             (INIClass *)(this + 36),
                             aBuildtimedefen,
                             (INIClass *)COERCE_UNSIGNED_INT64(this->q144));
  this->q148 = INIClass::ReadDouble_Overwrite( /*0x511d10*/
                             (int)v3,
                             (INIClass *)(this + 36),
                             aIncomemult,
                             (INIClass *)COERCE_UNSIGNED_INT64(this->q148));
  if ( INIClass::GetString( /*0x511d2d*/
         (unsigned __int8 ***)v3,
         (INIClass *)(this + 36),
         aVeteraninfantr,
         (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
         String,
         128) )
  {
    InfantryTypeVector::Construct(&aP4.__pad_0[2], 0, 0); /*0x511d42*/
    *(_DWORD *)&aP4.__pad_0[2] = &vt_TypeList_InfantryTypeClass_const; /*0x511d56*/
    for ( i = strtok(String[0].__pad_0, MEMORY[0x817F70].__pad_0); i; i = strtok(0, MEMORY[0x817F70].__pad_0) ) /*0x511d64*/
    {
      if ( !*i ) /*0x511d66*/
        break; /*0x511d69*/
      *(int *)((char *)&aP4.sectionCount + 2) = (int)KeywordType::FindOrCreate2(i); /*0x511d74*/
      if ( *(int *)((char *)&aP4.sectionCount + 2) ) /*0x511d78*/
        InfantryTypeVector::Add(&aP4.__pad_0[2], (InfantryTypeClass *)((char *)&aP4.sectionCount + 2)); /*0x511d83*/
    }
    HouseTypeClass::readAllowedUnits(Destination, (InfantryTypeClass *)&aP4.__pad_0[2]); /*0x511da4*/
    *(_DWORD *)Destination = &vt_TypeList_InfantryTypeClass_const; /*0x511dad*/
    *(_DWORD *)&aP4.__pad_0[2] = &vt_VectorClass_InfantryTypeClass_const; /*0x511db1*/
    Vector::Cleanup((int)&aP4.__pad_0[2]); /*0x511db9*/
  }
  else
  {
    HouseTypeClass::readAllowedUnits(Destination, (InfantryTypeClass *)(this + 332)); /*0x511dcb*/
    *(_DWORD *)Destination = &vt_TypeList_InfantryTypeClass_const; /*0x511dd0*/
  }
  HouseTypeClass::readStartInfantry((_DWORD *)(this + 332), (InfantryTypeClass *)Destination); /*0x511de5*/
  v25 = *(_DWORD *)&Destination[16]; /*0x511dee*/
  v26 = v58; /*0x511df2*/
  this->veteranAircraftCount = *(_DWORD *)&Destination[20]; /*0x511df6*/
  v27 = *(void **)&Destination[4]; /*0x511df9*/
  this->veteranAircraft = v25; /*0x511dfd*/
  this->suffix = v26; /*0x511e02*/
  *(_DWORD *)Destination = &vt_VectorClass_InfantryTypeClass_const; /*0x511e05*/
  if ( v27 && Destination[13] ) /*0x511e15*/
    __3_YAXPAX_Z(v27); /*0x511e18*/
  if ( INIClass::GetString( /*0x511e3a*/
         (unsigned __int8 ***)v3,
         (INIClass *)(this + 36),
         aVeteranunits,
         (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
         String,
         128) )
  {
    UnitTypeVector::Construct(Destination, 0, 0); /*0x511e4f*/
    *(_DWORD *)Destination = &vt_TypeList_UnitTypeClass_const; /*0x511e5e*/
    for ( j = strtok(String[0].__pad_0, MEMORY[0x817F70].__pad_0); j; j = strtok(0, MEMORY[0x817F70].__pad_0) ) /*0x511e70*/
    {
      if ( !*j ) /*0x511e72*/
        break; /*0x511e75*/
      Alt = (CCINIClass *)BuildingTypeClass::FindOrCreateAlt(j); /*0x511e7e*/
      if ( Alt /*0x511eb1*/
        && (*(int *)&Destination[16] < *(int *)&Destination[8]
         || (Destination[13] || !*(_DWORD *)&Destination[8])
         && *(int *)&Destination[20] > 0
         && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)Destination + 8))(
              Destination,
              *(_DWORD *)&Destination[8] + *(_DWORD *)&Destination[20],
              0)) )
      {
        v30 = (*(_DWORD *)&Destination[16])++; /*0x511ebc*/
        *(_DWORD *)(*(_DWORD *)&Destination[4] + 4 * v30) = Alt; /*0x511ec7*/
      }
    }
    TypeList::CopyConstructor(&aP4.__pad_0[2], (VectorClass *)Destination); /*0x511ee6*/
    *(_DWORD *)Destination = &vt_VectorClass_UnitTypeClass_const; /*0x511eef*/
    Vector::Destructor((int)Destination); /*0x511ef7*/
  }
  else
  {
    TypeList::CopyConstructor(&aP4.__pad_0[2], (VectorClass *)(this + 360)); /*0x511f09*/
  }
  VectorClass::CopyConstructor((_DWORD *)(this + 360), (InfantryTypeClass *)&aP4.__pad_0[2]); /*0x511f1b*/
  v31 = *(int *)((char *)aP4.sectionHead + 2); /*0x511f24*/
  v32 = *(int *)((char *)&aP4.sectionHead[2] + 2); /*0x511f28*/
  *(_DWORD *)(this + 380) = *(int *)((char *)&aP4.sectionHead[1] + 2); /*0x511f2c*/
  v48 = *(CCINIClass **)((char *)aP4.headNode + 2); /*0x511f2f*/
  *(_DWORD *)(this + 376) = v31; /*0x511f33*/
  this->armorAircraftMult = v32; /*0x511f38*/
  *(_DWORD *)&aP4.__pad_0[2] = &vt_VectorClass_UnitTypeClass_const; /*0x511f3b*/
  if ( v48 && HIBYTE(aP4.headNode[2]) ) /*0x511f4b*/
    __3_YAXPAX_Z(v48); /*0x511f4e*/
  if ( INIClass::GetString( /*0x511f70*/
         (unsigned __int8 ***)v3,
         (INIClass *)(this + 36),
         aVeteranaircraf,
         (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
         String,
         128) )
  {
    HouseTypeClass::readDefaultAlly(Destination, 0, 0); /*0x511f85*/
    *(_DWORD *)Destination = &vt_TypeList_AircraftTypeClass_const; /*0x511f94*/
    for ( k = (ObjectClass *)strtok(String[0].__pad_0, MEMORY[0x817F70].__pad_0); /*0x511fa6*/
          k;
          k = (ObjectClass *)strtok(0, MEMORY[0x817F70].__pad_0) )
    {
      if ( !k->__pad_0[0] ) /*0x511fa8*/
        break; /*0x511fab*/
      v50 = (CCINIClass *)KeywordClass::FindOrCreate(k); /*0x511fb4*/
      if ( v50 /*0x511fe7*/
        && (*(int *)&Destination[16] < *(int *)&Destination[8]
         || (Destination[13] || !*(_DWORD *)&Destination[8])
         && *(int *)&Destination[20] > 0
         && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)Destination + 8))(
              Destination,
              *(_DWORD *)&Destination[8] + *(_DWORD *)&Destination[20],
              0)) )
      {
        v36 = (*(_DWORD *)&Destination[16])++; /*0x511ff2*/
        *(_DWORD *)(*(_DWORD *)&Destination[4] + 4 * v36) = v50; /*0x511ffd*/
      }
    }
    HouseTypeClass::readParaDropTypes(&aP4.__pad_0[2], (VectorClass *)Destination); /*0x51201c*/
    *(_DWORD *)Destination = &vt_VectorClass_AircraftTypeClass_const; /*0x512025*/
    VectorClass::ClearAndFree4((int)Destination); /*0x51202d*/
  }
  else
  {
    HouseTypeClass::readParaDropTypes(&aP4.__pad_0[2], (VectorClass *)(this + 388)); /*0x51203f*/
  }
  HouseTypeClass::readBaseDefense((_DWORD *)(this + 388), (VectorClass *)&aP4.__pad_0[2]); /*0x512051*/
  v37 = *(int *)((char *)aP4.sectionHead + 2); /*0x51205a*/
  v38 = *(int *)((char *)&aP4.sectionHead[2] + 2); /*0x51205e*/
  this->q198 = *(int *)((char *)&aP4.sectionHead[1] + 2); /*0x512062*/
  v54 = *(CCINIClass **)((char *)aP4.headNode + 2); /*0x512065*/
  this->q194 = v37; /*0x512069*/
  *(_DWORD *)(this + 412) = v38; /*0x51206e*/
  *(_DWORD *)&aP4.__pad_0[2] = &vt_VectorClass_AircraftTypeClass_const; /*0x512071*/
  if ( v54 && HIBYTE(aP4.headNode[2]) ) /*0x512081*/
    __3_YAXPAX_Z(v54); /*0x512084*/
  v55 = *(CCINIClass **)(this + 188); /*0x51208c*/
  CountryData = (CCINIClass *)HouseTypeClass::loadCountryData( /*0x51209e*/
                                (unsigned __int8 ***)v3,
                                (unsigned __int8 *)(this + 36),
                                (unsigned __int8 *)&stru_8172FC.unknown38,
                                (int)v55);
  this->sideIndex = CountryData; /*0x5120a5*/
  if ( CountryData != v55 ) /*0x5120ab*/
  {
    if ( v55 != (CCINIClass *)-1 ) /*0x5120b4*/
    {
      v42 = this->arrayIndex2; /*0x5120bc*/
      v43 = *(_DWORD *)(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62200] + 4 * (_DWORD)v55); /*0x5120c2*/
      v44 = *(_DWORD *)(v43 + 168); /*0x5120c5*/
      v45 = v43 + 152; /*0x5120cb*/
      if ( v42 < v44 ) /*0x5120d2*/
      {
        v46 = v44 - 1; /*0x5120d4*/
        for ( *(_DWORD *)(v45 + 16) = v46; /*0x5120da*/
              v42 < *(_DWORD *)(v45 + 16);
              *(_DWORD *)(*(_DWORD *)(v45 + 4) + 4 * v42 - 4) = *(_DWORD *)(*(_DWORD *)(v45 + 4) + 4 * v42) )
        {
          ++v42; /*0x5120df*/
        }
      }
    }
    v47 = this->sideIndex; /*0x5120ee*/
    if ( v47 != -1 ) /*0x5120f7*/
    {
      esi58a = *(_DWORD *)(*(_DWORD *)&MEMORY[0x89F690].__pad_579C[62200] + 4 * v47); /*0x5120ff*/
      v49 = *(_DWORD *)(esi58a + 160); /*0x512102*/
      ecx58 = *(_DWORD *)(esi58a + 168); /*0x512108*/
      v51 = esi58a + 152; /*0x51210e*/
      if ( ecx58 < v49 /*0x512133*/
        || (*(_BYTE *)(v51 + 13) || !v49)
        && (v52 = *(_DWORD *)(v51 + 20), v52 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v51 + 8))(v51, v52 + v49, 0) )
      {
        v53 = *(_DWORD *)(v51 + 16); /*0x51213a*/
        edx63 = *(_DWORD *)(v51 + 4); /*0x51213d*/
        *(_DWORD *)(v51 + 16) = v53 + 1; /*0x512143*/
        *(_DWORD *)(edx63 + 4 * v53) = this->arrayIndex2; /*0x51214c*/
      }
    }
  }
  return 1; /*0x512151*/
}
}
} // namespace gamemd

// 0x512170
namespace gamemd {
int HouseTypeClass::ProcessPower(int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall HouseTypeClass::ProcessPower(int this, int *a2)
{
  int v3; // edx
  int v4; // eax

  AbstractTypeClass::ProcessPower((char *)this, a2); /*0x51217a*/
  Power::TimerProcess(this->arrayIndex2); /*0x512188*/
  Power::TimerProcess(this->sideIndex); /*0x512196*/
  Power::TimerProcess(this->colorSchemeIndex); /*0x5121a4*/
  Checksummer::Add_double(this->firepowerMult, this->q0CC); /*0x5121b9*/
  Checksummer::Add_double(this->groundspeedMult, *(_DWORD *)(this + 212)); /*0x5121ce*/
  Checksummer::Add_double(this->airspeedMult, this->q0DC); /*0x5121e3*/
  Checksummer::Add_double(this->armorMult, this->q0E4); /*0x5121f8*/
  Checksummer::Add_double(this->rofMult, this->q0EC); /*0x51220d*/
  Checksummer::Add_double(this->costMult, this->q0F4); /*0x512222*/
  Checksummer::Add_double(this->buildtimeMult, this->q0FC); /*0x512237*/
  Checksummer::Add_Buffer((unsigned int *)a2, (unsigned __int8 *)(this + 416), strlen((const char *)(this + 416))); /*0x512252*/
  LOBYTE(v3) = this->q1A4; /*0x512257*/
  v4 = Power::FinalizeDrain(a2, v3); /*0x512260*/
  LOBYTE(v4) = this->q1A5; /*0x512265*/
  return Power::FlagProcess(a2, v4); /*0x512273*/
}
}
} // namespace gamemd

// 0x512290
namespace gamemd {
int HouseTypeClass::SaveLoad_Prefix(unsigned int * i, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall HouseTypeClass::SaveLoad_Prefix(_DWORD *i, int a2)
{
  _DWORD *v2; // edi
  _DWORD *v3; // ebx
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
  (*(void (__thiscall **)(_DWORD *))(i[83] + 12))(i + 83); /*0x5122a7*/
  (*(void (__thiscall **)(_DWORD *))(v2[90] + 12))(v2 + 90); /*0x5122b8*/
  (*(void (__thiscall **)(_DWORD *))(v2[97] + 12))(v2 + 97); /*0x5122c7*/
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
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &a2, 4, 0); /*0x51230e*/
    for ( i = 0; (int)i < a2; i = (_DWORD *)((char *)i + 1) ) /*0x51231f*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &v11, 4, 0); /*0x51232d*/
      InfantryTypeVector::Add(v3, &v11); /*0x512337*/
    }
    if ( v2 != (_DWORD *)-360 ) /*0x51234f*/
    {
      UnitTypeVector::Construct(v2 + 90, 0, 0); /*0x512357*/
      v2[90] = &vt_TypeList_UnitTypeClass_const; /*0x51235c*/
    }
    (*(void (__stdcall **)(int, _DWORD **, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0); /*0x51236f*/
    for ( j = 0; j < (int)i; ++j ) /*0x51237a*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &a2, 4, 0); /*0x512388*/
      VectorClass::PushBack(v2 + 90, &a2); /*0x512392*/
    }
    if ( v2 != (_DWORD *)-388 ) /*0x5123a6*/
      HouseTypeClass::readStartUnit(v2 + 97); /*0x5123aa*/
    (*(void (__stdcall **)(int, _DWORD **, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &i, 4, 0); /*0x5123bb*/
    for ( k = 0; k < (int)i; ++k ) /*0x5123c6*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v4 + 12))(v4, &a2, 4, 0); /*0x5123d4*/
      HouseTypeClass::readPowerPlants(v2 + 97, &a2); /*0x5123de*/
    }
    for ( m = 0; m < v2[87]; ++m ) /*0x5123f4*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v2[84] + 4 * m)); /*0x512405*/
    for ( n = 0; n < v2[94]; ++n ) /*0x51241f*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v2[91] + 4 * n)); /*0x512430*/
    for ( ii = 0; ii < v2[101]; ++ii ) /*0x51244a*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v2[98] + 4 * ii)); /*0x51245b*/
    return 0; /*0x51246b*/
  }
  return result; /*0x51246d*/
}
}
} // namespace gamemd

// 0x512480
namespace gamemd {
int HouseTypeClass_SaveLoad_Prefix_0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __userpurge HouseTypeClass::SaveLoad_Prefix_0@<eax>(int a1@<ebx>, int *a2, int *a3, int a4, int a5)
{
  int result; // eax
  int v6; // edx
  int i; // ebx
  int v8; // edx
  int j; // ebx
  int v10; // edx
  int k; // ebx

  result = AbstractClass::SaveLoad_Prefix(a2, a3, a4); /*0x512491*/
  if ( result >= 0 ) /*0x512498*/
  {
    v6 = *a3; /*0x5124a4*/
    a4 = a2[87]; /*0x5124b1*/
    (*(void (__stdcall **)(int *, int *, int, _DWORD, int))(v6 + 16))(a3, &a4, 4, 0, a1); /*0x5124b5*/
    for ( i = 0; i < a5; ++i ) /*0x5124c0*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a3 + 16))(a3, a2[84] + 4 * i, 4, 0); /*0x5124d3*/
    v8 = *a3; /*0x5124e3*/
    a5 = a2[94]; /*0x5124ef*/
    (*(void (__stdcall **)(int *, int *, int, _DWORD))(v8 + 16))(a3, &a5, 4, 0); /*0x5124f3*/
    for ( j = 0; j < a5; ++j ) /*0x5124fe*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a3 + 16))(a3, a2[91] + 4 * j, 4, 0); /*0x512511*/
    v10 = *a3; /*0x512521*/
    a5 = a2[101]; /*0x51252d*/
    (*(void (__stdcall **)(int *, int *, int))(v10 + 16))(a3, &a5, 4); /*0x512531*/
    for ( k = 0; k < a4; ++k ) /*0x51253c*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a3 + 16))(a3, a2[98] + 4 * k, 4, 0); /*0x51254f*/
    return 0; /*0x512559*/
  }
  return result; /*0x51255c*/
}
}
} // namespace gamemd

// 0x513370
namespace gamemd {
unsigned int * HouseTypeClass::readBaseDefense(VectorClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall HouseTypeClass::readBaseDefense(_DWORD *this, VectorClass *aP1)
{
  void *v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( this == (_DWORD *)aP1 ) /*0x51337a*/
    return this; /*0x51337a*/
  (*(void (__thiscall **)(_DWORD *))(*this + 12))(this); /*0x51337e*/
  v3 = aP1->Capacity; /*0x513381*/
  this->vtable3 = v3; /*0x513386*/
  if ( !v3 ) /*0x513389*/
  {
    this->vtable2 = 0; /*0x5133ca*/
    this->q0D0 = 0; /*0x5133d1*/
    return this; /*0x5133d5*/
  }
  v4 = __2_YAPAXI_Z(4 * (_DWORD)v3); /*0x513393*/
  this->vtable2 = v4; /*0x51339b*/
  if ( !v4 ) /*0x5133a0*/
    return this; /*0x5133a0*/
  v5 = this->vtable3; /*0x5133a2*/
  v6 = 0; /*0x5133a5*/
  this->q0D0 = 1; /*0x5133a9*/
  if ( v5 <= 0 ) /*0x5133ad*/
    return this; /*0x5133ad*/
  do /*0x5133c1*/
  {
    *(_DWORD *)(this->vtable2 + 4 * v6) = *(_DWORD *)(*(_DWORD *)&aP1->?[3] + 4 * v6); /*0x5133b8*/
    ++v6; /*0x5133be*/
  }
  while ( v6 < this->vtable3 ); /*0x5133c1*/
  return this; /*0x5133c5*/
}
}
} // namespace gamemd

// 0x67B8F0
namespace gamemd {
VectorClass * HouseTypeClass::ReadCountryName(int a1, unsigned char *** edx0, INIClass * aP1, unsigned char * a2, unsigned int * a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
VectorClass *__fastcall HouseTypeClass::ReadCountryName(
        int a1,
        unsigned __int8 ***edx0,
        INIClass *aP1,
        unsigned __int8 *a2,
        _DWORD *a5)
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

  if ( INIClass::GetString(edx0, aP1, a2, (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760], String, 128) ) /*0x67b91c*/
  {
    AircraftTypeVector::Constructor(&v17, 0, 0); /*0x67b931*/
    v22 = 10; /*0x67b93a*/
    v21 = 0; /*0x67b948*/
    v17 = (VectorClass *)&vt_TypeList_AircraftTypeClass_const; /*0x67b94c*/
    for ( i = (ObjectClass *)strtok(String[0].__pad_0, MEMORY[0x817F70].__pad_0); /*0x67b95e*/
          i;
          i = (ObjectClass *)strtok(0, MEMORY[0x817F70].__pad_0) )
    {
      if ( !i->__pad_0[0] ) /*0x67b960*/
        break; /*0x67b962*/
      v7 = (INIClass *)KeywordClass::FindOrCreate(i); /*0x67b96b*/
      if ( v7 /*0x67b99b*/
        && (v21 < v19
         || (v20 || !v19)
         && v22 > 0
         && ((unsigned __int8 (__thiscall *)(VectorClass **, int, _DWORD))v17->Capacity)(&v17, v22 + v19, 0)) )
      {
        v8 = v21++; /*0x67b9a6*/
        *((_DWORD *)Block + v8) = v7; /*0x67b9b1*/
      }
    }
    *(_DWORD *)(a1 + 4) = 0; /*0x67b9cd*/
    *(_DWORD *)(a1 + 8) = 0; /*0x67b9d0*/
    *(_BYTE *)(a1 + 12) = 1; /*0x67b9d3*/
    *(_BYTE *)(a1 + 13) = 0; /*0x67b9d7*/
    *(_DWORD *)a1 = &vt_VectorClass_AircraftTypeClass_const; /*0x67b9da*/
    HouseTypeClass::readBaseDefense((_DWORD *)a1, (VectorClass *)&v17); /*0x67b9e0*/
    *(_DWORD *)a1 = &vt_TypeList_AircraftTypeClass_const; /*0x67b9e5*/
    v17 = (VectorClass *)&vt_VectorClass_AircraftTypeClass_const; /*0x67b9eb*/
    v9 = (VectorClass *)v22; /*0x67b9f7*/
    *(_DWORD *)(a1 + 16) = v21; /*0x67b9fb*/
    v10 = Block; /*0x67b9fe*/
    v11 = Block == 0; /*0x67ba02*/
    *(_DWORD *)(a1 + 20) = v9; /*0x67ba04*/
    if ( !v11 && v20 ) /*0x67ba11*/
    {
      __3_YAXPAX_Z(v10); /*0x67ba18*/
      return (VectorClass *)a1; /*0x67ba2b*/
    }
  }
  else
  {
    *(_DWORD *)(a1 + 4) = 0; /*0x67ba39*/
    *(_DWORD *)(a1 + 8) = 0; /*0x67ba3c*/
    *(_BYTE *)(a1 + 12) = 1; /*0x67ba3f*/
    *(_BYTE *)(a1 + 13) = 0; /*0x67ba43*/
    *(_DWORD *)a1 = &vt_VectorClass_AircraftTypeClass_const; /*0x67ba46*/
    if ( (_DWORD *)a1 != a5 ) /*0x67ba4c*/
    {
      VectorClass::ClearAndFree4(a1); /*0x67ba50*/
      v13 = a5[2]; /*0x67ba56*/
      *(_DWORD *)(a1 + 8) = v13; /*0x67ba5b*/
      if ( v13 ) /*0x67ba5e*/
      {
        v14 = __2_YAPAXI_Z(4 * v13); /*0x67ba68*/
        *(_DWORD *)(a1 + 4) = v14; /*0x67ba72*/
        if ( v14 ) /*0x67ba75*/
        {
          v15 = *(VectorClass **)(a1 + 8); /*0x67ba77*/
          v16 = 0; /*0x67ba7a*/
          *(_BYTE *)(a1 + 13) = 1; /*0x67ba7e*/
          if ( (int)v15 > 0 ) /*0x67ba82*/
          {
            do /*0x67ba96*/
            {
              *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * v16) = *(_DWORD *)(a5[1] + 4 * v16); /*0x67ba8d*/
              ++v16; /*0x67ba93*/
            }
            while ( v16 < *(_DWORD *)(a1 + 8) ); /*0x67ba96*/
          }
        }
      }
      else
      {
        *(_DWORD *)(a1 + 4) = 0; /*0x67ba9a*/
        *(_BYTE *)(a1 + 13) = 0; /*0x67ba9d*/
      }
    }
    *(_DWORD *)(a1 + 16) = a5[4]; /*0x67baa3*/
    *(_DWORD *)(a1 + 20) = a5[5]; /*0x67baa9*/
    *(_DWORD *)a1 = &vt_TypeList_AircraftTypeClass_const; /*0x67baac*/
  }
  return (VectorClass *)a1; /*0x67ba22*/
}
}
} // namespace gamemd

// 0x4756F0
namespace gamemd {
int HouseTypeClass::loadCountryData(unsigned char * a2, unsigned char * a3, int a4)
{
{
    int result;
    int *v5;
    int *v6;
    int v7;
    int *i;
    char Destination[128];
    if ( !INIClass::GetString(this, a2, a3, &g_INI_DefaultBuffer, Destination, 128) )
    return a4;
    result = HouseTypeClass::Find(Destination);
    if ( result == -1 )
  {
    v5 = __2_YAPAXI_Z(0xB4u);
    if ( v5 )
    v6 = SideClass::Construct(v5, Destination);
    else
    v6 = 0;
    v7 = 0;
    if ( g_ObjectTypeList <= 0 )
    {
    return -1;
    }
    else
    {
    for ( i = DataGlobal_8B4124; (int *)*i != v6; ++i )
      {
    if ( ++v7 >= g_ObjectTypeList )
    return -1;
      }
    return v7;
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x512280
namespace gamemd {
int HouseTypeClass::StubReturnFalse(int a1)
{
return 0;
}
} // namespace gamemd

// 0x512570
namespace gamemd {
int HouseTypeClass::LoadHouse(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  a2[1] = 0;
  *a2 = 436;
  return 0;
}
} // namespace gamemd

// 0x5125A0
namespace gamemd {
int HouseTypeClass::QueryInterface(int a1, const void * a2, unsigned int * a3)
{
{
    int v4;
    if ( !a3 )
    return -2147467261;
    *a3 = 0;
    if ( !memcmp(a2, &IID_IUnknown, 0x10u) )
    *a3 = a1;
    if ( !memcmp(a2, &IID_IPersist, 0x10u) )
    *a3 = a1;
    if ( !memcmp(a2, &IID_IPersistStream, 0x10u) )
    *a3 = a1;
    if ( !memcmp(a2, &IID_IRTTITypeInfo, 0x10u) )
  {
    if ( a1 )
    v4 = a1 + 4;
    else
    v4 = 0;
    *a3 = v4;
  }
    if ( !*a3 )
    return -2147467262;
    (*(void (__stdcall **)(int))(*(int *)(a1) + 4))(a1);
    return 0;
}
}
} // namespace gamemd

// 0x512640
namespace gamemd {
int HouseTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 500447528;
  a2[1] = 298976363;
  a2[2] = 1610654892;
  a2[3] = -1252326136;
  return 0;
}
} // namespace gamemd

// 0x512710
namespace gamemd {
int HouseTypeClass::GetTypeIdentifier()
{
return 14;
}
} // namespace gamemd

// 0x512720
namespace gamemd {
int HouseTypeClass::GetObjectSize()
{
return 432;
}
} // namespace gamemd

// 0x512730
namespace gamemd {
unsigned int HouseTypeClass::loadBuildLimits()
{
{
    return this->arrayIndex;
}
}
} // namespace gamemd

// 0x512740
namespace gamemd {
int HouseTypeClass::AddRef(int a1)
{
return 1;
}
} // namespace gamemd

// 0x512750
namespace gamemd {
int HouseTypeClass::Release(int a1)
{
return 1;
}
} // namespace gamemd

// 0x512760
namespace gamemd {
HouseTypeClass * HouseTypeClass::Destructor(char a2)
{
{
    int v3;
    UnitTypeClass *v4;
    void *v5;
    void *v6;
    void **v8;
    *(void**)this = vt_HouseTypeClass;
    *(this + 1) = (unsigned int)vt_HouseTypeClass;
    *(this + 2) = (unsigned int)vt_HouseTypeClass;
    *(this + 3) = &vt_HouseTypeClass;
    AbstractClass::AnnounceExpiredPointer(this, 1);
    v8 = this;
    v3 = (*(int (__thiscall **)(int *, void ***))(DataGlobal_A83C98 + 16))(&DataGlobal_A83C98, &v8);
    if ( v3 != -1 && v3 < g_SuperWeaponTypeArray && v3 < --g_SuperWeaponTypeArray )
  {
    do
    {
    ++v3;
    *((int *)(g_SuperWeaponTypeCount) + v3 - 1) = *((int *)(g_SuperWeaponTypeCount) + v3);
    }
    while ( v3 < g_SuperWeaponTypeArray );
  }
    v4 = (UnitTypeClass *)*(this + 98);
    *(this + 97) = &vt_VectorClass_AircraftTypeClass_const;
    if ( v4 && *((char *)(this) + 401) )
  {
    __3_YAXPAX_Z(v4);
    *(this + 98) = 0;
  }
    *((char *)(this) + 401) = 0;
    *(this + 99) = 0;
    v5 = *(this + 91);
    *(this + 90) = &vt_VectorClass_UnitTypeClass_const;
    if ( v5 && *((char *)(this) + 373) )
  {
    __3_YAXPAX_Z(v5);
    *(this + 91) = 0;
  }
    *((char *)(this) + 373) = 0;
    *(this + 92) = 0;
    v6 = *(this + 84);
    *(this + 83) = &vt_VectorClass_InfantryTypeClass_const;
    if ( v6 && *((char *)(this) + 345) )
  {
    __3_YAXPAX_Z(v6);
    *(this + 84) = 0;
  }
    *((char *)(this) + 345) = 0;
    *(this + 85) = 0;
    AbstractTypeClass::Dtor(this);
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (HouseTypeClass *)this;
}
}
} // namespace gamemd

// 0x512900
namespace gamemd {
void HouseTypeClass_36::ddtor()
{
{
    void *v2;
    v2 = *(void **)(this + 4);
    this->HouseTypeClass_36_field_0x10 = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->HouseTypeClass_36_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->HouseTypeClass_36_field_0x8 = 0;
}
}
} // namespace gamemd

// 0x512930
namespace gamemd {
unsigned int HouseTypeClass_36::Write(int a2)
{
{
    if ( (unsigned char)this->HouseTypeClass_36_field_0xC )
    return (unsigned int)(a2 - this->HouseTypeClass_36_field_0x4) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x512950
namespace gamemd {
int HouseTypeClass_36::Seek(int a2)
{
{
    return *(int *)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x512960
namespace gamemd {
unsigned int * HouseTypeClass::readStartUnit()
{
{
    this->vtable1 = 0;
    this->vtable2 = 0;
    this->vtable3 = 1;
    this->IsAllocated = 0;
    this->abstractFlags = 10;
    this->uniqueId = 0;
    *(void**)this = &vt_TypeList_AircraftTypeClass_const;
    return this;
}
}
} // namespace gamemd

// 0x512990
namespace gamemd {
void HouseTypeClass_28::ddtor()
{
{
    void *v2;
    v2 = *(void **)(this + 4);
    this->HouseTypeClass_28_field_0x10 = 0;
    if ( v2 && this->IsAllocated )
  {
    __3_YAXPAX_Z(v2);
    this->HouseTypeClass_28_field_0x4 = 0;
  }
    this->IsAllocated = 0;
    this->HouseTypeClass_28_field_0x8 = 0;
}
}
} // namespace gamemd

// 0x5129C0
namespace gamemd {
unsigned int HouseTypeClass_28::Write(int a2)
{
{
    if ( (unsigned char)this->HouseTypeClass_28_field_0xC )
    return (unsigned int)(a2 - this->HouseTypeClass_28_field_0x4) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x5129E0
namespace gamemd {
int HouseTypeClass_28::Seek(int a2)
{
{
    return *(int *)(this->Items + 4 * a2);
}
}
} // namespace gamemd

// 0x512A40
namespace gamemd {
TypeList * HouseTypeClass_36::QueryInterface(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_UnitTypeClass_const;
    if ( v3 && *((char *)(this) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *((char *)(this) + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (TypeList *)this;
}
}
} // namespace gamemd

// 0x512A90
namespace gamemd {
TypeList * HouseTypeClass_28::QueryInterface(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_AircraftTypeClass_const;
    if ( v3 && *((char *)(this) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *((char *)(this) + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (TypeList *)this;
}
}
} // namespace gamemd

// 0x512B80
namespace gamemd {
VectorClass * HouseTypeClass_36::Constructor(char a2)
{
{
    void *v3;
    v3 = (void *)*(this + 1);
    *(void**)this = &vt_VectorClass_AircraftTypeClass_const;
    if ( v3 && *((char *)(this) + 13) )
  {
    __3_YAXPAX_Z(v3);
    *(this + 1) = 0;
  }
    *((char *)(this) + 13) = 0;
    *(this + 2) = 0;
    if ( (a2 & 1) != 0 )
    __3_YAXPAX_Z(this);
    return (VectorClass *)this;
}
}
} // namespace gamemd

// 0x512BD0
namespace gamemd {
unsigned int * HouseTypeClass::readStartInfantry(InfantryTypeClass * aP1)
{
{
    int v3;
    int v4;
    int v5;
    int v6;
    if ( this == (int *)aP1 )
    return this;
    this->GetClassIdentifier();
    v3 = *(int *)&aP1->vtable0[8];
    this->vtable2 = v3;
    if ( !v3 )
  {
    this->vtable1 = 0;
    this->IsAllocated = 0;
    return this;
  }
    v4 = __2_YAPAXI_Z(4 * v3);
    this->vtable1 = v4;
    if ( !v4 )
    return this;
    v5 = this->vtable2;
    v6 = 0;
    this->IsAllocated = 1;
    if ( v5 <= 0 )
    return this;
    do
  {
    *(int *)(this->vtable1 + 4 * v6) = *(int *)(*(int *)&aP1->vtable0[4] + 4 * v6);
    ++v6;
  }
    while ( v6 < this->vtable2 );
    return this;
}
}
} // namespace gamemd

// 0x513010
namespace gamemd {
char HouseTypeClass_36::AddRef(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int *)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int *)this->Items;
    v5 = *(int *)(a2 + 4) - (int)v4;
    while ( *v4 == *(int *)((char *)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x513240
namespace gamemd {
char HouseTypeClass_36::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->HouseTypeClass_36_field_0x4 )
    {
    v5 = this->HouseTypeClass_36_field_0x8;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int *)(this->HouseTypeClass_36_field_0x4 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->HouseTypeClass_36_field_0x4 = 0;
      }
    }
    this->HouseTypeClass_36_field_0x4 = v4;
    this->HouseTypeClass_36_field_0x8 = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->ddtor();
  }
    v7 = this->HouseTypeClass_36_field_0x8;
    if ( v7 < this->HouseTypeClass_36_field_0x10 )
    this->HouseTypeClass_36_field_0x10 = v7;
    return 1;
}
}
} // namespace gamemd

// 0x513340
namespace gamemd {
int HouseTypeClass_36::Read(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int *)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
} // namespace gamemd

}
// 0x5133E0
namespace gamemd {
char HouseTypeClass_28::AddRef(int a2)
{
{
    int v2;
    int v3;
    int *v4;
    int v5;
    v2 = this->Capacity;
    if ( v2 == *(int *)(a2 + 8) )
  {
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    v4 = (int *)this->Items;
    v5 = *(int *)(a2 + 4) - (int)v4;
    while ( *v4 == *(int *)((char *)(v4) + v5) )
    {
    ++v3;
    ++v4;
    if ( v3 >= v2 )
    return 1;
    }
  }
    return 0;
}
}
} // namespace gamemd

// 0x513420
namespace gamemd {
char HouseTypeClass_36::SetCapacity(int a2, unsigned int * a3)
{
{
    int *v4;
    int v6;
    int i;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( v4 )
    {
    if ( this->HouseTypeClass_36_field_0x4 )
      {
    v6 = this->HouseTypeClass_36_field_0x8;
    if ( a2 < v6 )
    v6 = a2;
    for ( i = 0; i < v6; v4[i - 1] = *(int *)(this->HouseTypeClass_36_field_0x4 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
        {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->HouseTypeClass_36_field_0x4 = 0;
        }
      }
    this->HouseTypeClass_36_field_0x4 = v4;
    this->HouseTypeClass_36_field_0x8 = a2;
    this->IsAllocated = a3 == 0;
    return 1;
    }
    else
    {
    return 0;
    }
  }
    else
  {
    this->ddtor();
    return 1;
  }
}
}
} // namespace gamemd

// 0x513500
namespace gamemd {
int HouseTypeClass_36::IndexOf(unsigned int * a2)
{
{
    int result;
    int v3;
    int *i;
    if ( !(unsigned char)this->HouseTypeClass_36_field_0xC )
    return 0;
    v3 = this->HouseTypeClass_36_field_0x8;
    result = 0;
    if ( v3 <= 0 )
    return -1;
    for ( i = *(int **)(this + 4); *i != *a2; ++i )
  {
    if ( ++result >= v3 )
    return -1;
  }
    return result;
}
}
} // namespace gamemd

// 0x513540
namespace gamemd {
unsigned int HouseTypeClass_36::PointerToIndex(int a2)
{
{
    if ( (unsigned char)this->HouseTypeClass_36_field_0xC )
    return (unsigned int)(a2 - this->HouseTypeClass_36_field_0x4) >> 2;
    else
    return 0;
}
}
} // namespace gamemd

// 0x513560
namespace gamemd {
unsigned int * HouseTypeClass::readDefaultAlly(int a2, int a3)
{
{
    this->vtable1 = 0;
    this->vtable2 = a2;
    this->vtable3 = 1;
    this->IsAllocated = 0;
    *(void**)this = &vt_VectorClass_AircraftTypeClass_const;
    if ( a2 )
  {
    if ( a3 )
    {
    this->vtable1 = a3;
    }
    else
    {
    this->vtable1 = __2_YAPAXI_Z(4 * a2);
    this->IsAllocated = 1;
    }
  }
    *(void**)this = &vt_DynamicVectorClass_AircraftTypeClass_const;
    this->abstractFlags = 10;
    this->uniqueId = 0;
    return this;
}
}
} // namespace gamemd

// 0x513610
namespace gamemd {
char HouseTypeClass_28::Release(int a2, unsigned int * a3)
{
{
    int *v4;
    int v5;
    int i;
    int v7;
    if ( a2 )
  {
    this->IsInitialized = 0;
    if ( a3 )
    v4 = a3;
    else
    v4 = __2_YAPAXI_Z(4 * a2);
    this->IsInitialized = 1;
    if ( !v4 )
    return 0;
    if ( this->HouseTypeClass_28_field_0x4 )
    {
    v5 = this->HouseTypeClass_28_field_0x8;
    if ( a2 < v5 )
    v5 = a2;
    for ( i = 0; i < v5; v4[i - 1] = *(int *)(this->HouseTypeClass_28_field_0x4 + 4 * i - 4) )
    ++i;
    if ( this->IsAllocated )
      {
    __3_YAXPAX_Z(*((void **)(this) + 1));
    this->HouseTypeClass_28_field_0x4 = 0;
      }
    }
    this->HouseTypeClass_28_field_0x4 = v4;
    this->HouseTypeClass_28_field_0x8 = a2;
    this->IsAllocated = a3 == 0;
  }
    else
  {
    this->ddtor();
  }
    v7 = this->HouseTypeClass_28_field_0x8;
    if ( v7 < this->HouseTypeClass_28_field_0x10 )
    this->HouseTypeClass_28_field_0x10 = v7;
    return 1;
}
}
} // namespace gamemd

// 0x5136C0
namespace gamemd {
char HouseTypeClass::readPowerPlants(TypeList * aP1)
{
{
    int v3;
    int v4;
    int v6;
    int v7;
    v3 = this->vtable2;
    if ( this->uniqueId >= v3 )
  {
    if ( !this->IsAllocated && v3 )
    return 0;
    v4 = this->abstractFlags;
    if ( v4 <= 0 || !this->Release(v3 + v4, 0) )
    return 0;
  }
    v6 = this->uniqueId;
    v7 = this->vtable1;
    this->uniqueId = v6 + 1;
    *(int *)(v7 + 4 * v6) = aP1->vtable0;
    return 1;
}
}
} // namespace gamemd

// 0x513710
namespace gamemd {
int HouseTypeClass_28::Read(unsigned int * a2)
{
{
    int v2;
    int result;
    int *i;
    v2 = this->Count;
    result = 0;
    if ( v2 <= 0 )
    return -1;
    for ( i = (int *)this->Items; *i != *a2; ++i )
  {
    if ( ++result >= v2 )
    return -1;
  }
    return result;
}
} // namespace gamemd
}

// 0x5137D0
namespace gamemd {
unsigned int * HouseTypeClass::readParaDropTypes(VectorClass * aP1)
{
{
    int v3;
    int v4;
    int v5;
    int v6;
    this->vtable1 = 0;
    this->vtable2 = 0;
    this->vtable3 = 1;
    this->IsAllocated = 0;
    *(void**)this = &vt_VectorClass_AircraftTypeClass_const;
    if ( this != (int *)aP1 )
  {
    VectorClass::ClearAndFree4((int)this);
    v3 = aP1->Capacity;
    this->vtable2 = v3;
    if ( v3 )
    {
    v4 = __2_YAPAXI_Z(4 * v3);
    this->vtable1 = v4;
    if ( v4 )
      {
    v5 = this->vtable2;
    v6 = 0;
    this->IsAllocated = 1;
    if ( v5 > 0 )
        {
    do
          {
    *(int *)(this->vtable1 + 4 * v6) = *((int *)aP1->Items + v6);
    ++v6;
          }
    while ( v6 < this->vtable2 );
        }
      }
    }
    else
    {
    this->vtable1 = 0;
    this->IsAllocated = 0;
    }
  }
    this->uniqueId = aP1[1].vtable0;
    this->abstractFlags = aP1[1].Items;
    *(void**)this = &vt_TypeList_AircraftTypeClass_const;
    return this;
}
}
} // namespace gamemd

// 0x513860
namespace gamemd {
unsigned int * HouseTypeClass::readAllowedUnits(InfantryTypeClass * aP1)
{
{
    int v3;
    int v4;
    int v5;
    int v6;
    this->vtable1 = 0;
    this->vtable2 = 0;
    this->vtable3 = 1;
    this->IsAllocated = 0;
    *(void**)this = &vt_VectorClass_InfantryTypeClass_const;
    if ( this != (int *)aP1 )
  {
    Vector::Cleanup((int)this);
    v3 = *(int *)&aP1->vtable0[8];
    this->vtable2 = v3;
    if ( v3 )
    {
    v4 = __2_YAPAXI_Z(4 * v3);
    this->vtable1 = v4;
    if ( v4 )
      {
    v5 = this->vtable2;
    v6 = 0;
    this->IsAllocated = 1;
    if ( v5 > 0 )
        {
    do
          {
    *(int *)(this->vtable1 + 4 * v6) = *(int *)(*(int *)&aP1->vtable0[4] + 4 * v6);
    ++v6;
          }
    while ( v6 < this->vtable2 );
        }
      }
    }
    else
    {
    this->vtable1 = 0;
    this->IsAllocated = 0;
    }
  }
    this->uniqueId = aP1->uniqueId;
    this->abstractFlags = aP1->abstractFlags;
    *(void**)this = &vt_DynamicVectorClass_InfantryTypeClass_const;
    return this;
}
}
} // namespace gamemd

// 0x5139E0
namespace gamemd {
int HouseTypeClass::readBaseDefenses(int a1, const void * a2, unsigned int * a3)
{
{
    return HouseTypeClass::QueryInterface(a1 - 4, a2, a3);
}
}
} // namespace gamemd

// 0x5139F0
namespace gamemd {
int HouseTypeClass::readAiBuildLists(int a1)
{
{
    return HouseTypeClass::AddRef(a1 - 4);
}
}
} // namespace gamemd

// 0x513A00
namespace gamemd {
int HouseTypeClass::readLoadoutData(int a1)
{
{
    return HouseTypeClass::Release(a1 - 4);
}
}
} // namespace gamemd

// 0x6A46D0
namespace gamemd {
int HouseTypeClass::Find()
 {
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall HouseTypeClass_Find(void *this)
{
  int v1; // esi

  v1 = 0; /*0x6a46d6*/
  if ( MEMORY[0x8B4130] <= 0 ) /*0x6a46dd*/
    return -1; /*0x6a4702*/
  while ( _strcmpi((const void *)(*((_DWORD *)MEMORY[0x8B4124] + v1) + 36), this) ) /*0x6a46f6*/
  {
    if ( ++v1 >= MEMORY[0x8B4130] ) /*0x6a4700*/
      return -1; /*0x6a4700*/
  }
  return v1; /*0x6a4702*/
}
}
} // namespace gamemd
