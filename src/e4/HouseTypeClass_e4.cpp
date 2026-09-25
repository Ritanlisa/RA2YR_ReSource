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
#include "e4/e4_protos.h"

// 0x511650
namespace gamemd {
unsigned int * HouseTypeClass::loadVeteranWeapons(HouseTypeClass * aP1)
{
  AbstractTypeClass::Init(aP1); /*0x511658*/
  *(&this->NeedsSaveOrLink3) = &(void*)(void*)&TypeList_InfantryTypeClass_const___vftable; /*0x51165d*/
  *(&this->id0) = &(void*)(void*)&TypeList_UnitTypeClass_const___vftable; /*0x511667*/
  *(&this->id7) = &(void*)(void*)&TypeList_AircraftTypeClass_const___vftable; /*0x511671*/
  *this = &(void*)(void*)&HouseTypeClass_vftable; /*0x51167b*/
  this->vtable2 = &(void*)(void*)&HouseTypeClass_vftable; /*0x511681*/
  this->vtable3 = &(void*)(void*)&HouseTypeClass_vftable; /*0x511688*/
  this->vtable4 = &(void*)(void*)&HouseTypeClass_vftable; /*0x51168f*/
  return this; /*0x511698*/
}
}
// 0x5116A0
namespace gamemd {
AbstractClass * * HouseTypeClass::Dtor()
{
  int v2; // eax
  void *v3; // eax
  void *v4; // eax
  void *v5; // eax

  *(_DWORD *)this = &(void*)(void*)&HouseTypeClass_vftable; /*0x5116a7*/
  this->vtable2 = &(void*)(void*)&HouseTypeClass_vftable; /*0x5116ad*/
  this->vtable3 = &(void*)(void*)&HouseTypeClass_vftable; /*0x5116b4*/
  this->vtable4 = &(void*)(void*)&HouseTypeClass_vftable; /*0x5116bb*/
  AbstractClass::AnnounceExpiredPointer(1); /*0x5116c2*/
  v2 = (*(int (__thiscall **)(int *, int *))(dword_A83C98 + 16))(&dword_A83C98, &this); /*0x5116db*/
  if ( v2 != -1 && v2 < g_SuperWeaponTypeArray && v2 < --g_SuperWeaponTypeArray ) /*0x5116f6*/
  {
    do /*0x51170e*/
    {
      ++v2; /*0x5116fe*/
      *((_DWORD *)g_SuperWeaponTypeCount + v2 - 1) = *((_DWORD *)g_SuperWeaponTypeCount + v2); /*0x511702*/
    }
    while ( v2 < g_SuperWeaponTypeArray ); /*0x51170e*/
  }
  v3 = *(void **)(&this->buildtimeDefensesMult2); /*0x511710*/
  this->q184 = &(void*)(void*)&VectorClass_AircraftTypeClass_const___vftable; /*0x51171a*/
  if ( v3 && this->q644 ) /*0x511726*/
  {
    RA2_OPDEL(v3); /*0x51172f*/
    this->q188 = 0; /*0x511737*/
  }
  this->q644 = 0; /*0x51173d*/
  this->u32_18C = 0; /*0x511743*/
  v4 = *(void **)(&this->buildtimeUnitsMult4); /*0x511749*/
  this->q168 = &(void*)(void*)&VectorClass_UnitTypeClass_const___vftable; /*0x51174f*/
  if ( v4 && this->u8_175 ) /*0x51175d*/
  {
    RA2_OPDEL(v4); /*0x511766*/
    this->q16C = 0; /*0x51176e*/
  }
  this->u8_175 = 0; /*0x511774*/
  this->q170 = 0; /*0x51177a*/
  v5 = *(void **)(&this->currentSpeed_units_mult6); /*0x511780*/
  this->q14C = &(void*)(void*)&VectorClass_InfantryTypeClass_const___vftable; /*0x511786*/
  if ( v5 && this->u8_159 ) /*0x511794*/
  {
    RA2_OPDEL(v5); /*0x51179d*/
    this->q150 = 0; /*0x5117a5*/
  }
  this->u8_159 = 0; /*0x5117ad*/
  this->q154 = 0; /*0x5117b3*/
  return AbstractTypeClass::Dtor(unsigned int a1); /*0x5117be*/
}
}
// 0x511850
namespace gamemd {
void* HouseTypeClass::LoadFromINI(unsigned char *** aP1)
{
  unsigned __int8 ***v3; // esi
  unsigned int v5; // ecx
  unsigned int v6; // edx
  unsigned int v7; // eax
  unsigned int v8; // ecx
  double v9; // rax
  unsigned int v10; // ecx
  unsigned int v11; // edx
  unsigned int v12; // eax
  unsigned int v13; // ecx
  double v14; // rax
  char v15; // cl
  char Bool_Overwrite; // al
  char v17; // al
  char v18; // cl
  char v19; // al
  double v20; // st7
  double v21; // st7
  double v22; // st7
  double v23; // st7
  double v24; // st7
  double v25; // st7
  double v26; // st7
  double v27; // st7
  double v28; // st7
  double v29; // st7
  double v30; // st7
  double v31; // st7
  double v32; // st7
  double v33; // st7
  double v34; // st7
  double v35; // st7
  double v36; // st7
  double v37; // st7
  double v38; // st7
  char *i; // eax
  int v40; // edx
  int v41; // ecx
  void *v42; // eax
  char *j; // eax
  int Alt; // edi
  int v45; // eax
  int v46; // edx
  int v47; // ecx
  void *v48; // eax
  char *k; // eax
  int v50; // edi
  int v51; // eax
  int v52; // edx
  int v53; // ecx
  void *v54; // eax
  int v55; // edi
  int v56; // eax
  int v57; // ecx
  int v58; // eax
  int v59; // edx
  int v60; // eax
  int v61; // edx
  int v62; // eax
  int v63; // esi
  int v64; // eax
  int v65; // ecx
  int v66; // esi
  int v67; // ecx
  int v68; // eax
  int v69; // edx
  char v71; // [esp+4h] [ebp-F4h]
  char Destination[24]; // [esp+18h] [ebp-E0h] BYREF
  int v73; // [esp+30h] [ebp-C8h]
  char v74[2]; // [esp+36h] [ebp-C2h] BYREF
  void **v75; // [esp+38h] [ebp-C0h] BYREF
  void *v76; // [esp+3Ch] [ebp-BCh]
  char v77; // [esp+45h] [ebp-B3h]
  int v78; // [esp+48h] [ebp-B0h]
  int v79; // [esp+4Ch] [ebp-ACh]
  int v80; // [esp+50h] [ebp-A8h]
  int v81; // [esp+54h] [ebp-A4h] BYREF
  char Source[32]; // [esp+58h] [ebp-A0h] BYREF
  char String[128]; // [esp+78h] [ebp-80h] BYREF

  v3 = aP1; /*0x51185e*/
  INIClass::ResetSection(aP1); /*0x511866*/
  if ( !AbstractTypeClass::LoadFromINI(a1, aP1) ) /*0x51186e*/
    return 0; /*0x51215c*/
  INIClass::GetString(aP1, (unsigned __int8 *)(a1 + 36), (unsigned __int8 *)aSuffix, &g_INI_DefaultBuffer, Source, 4); /*0x511892*/
  if ( strlen(Source) ) /*0x51189b*/
  {
    strcpy((char *, unsigned int a1)(a1 + 416), Source); /*0x5118c3*/
    v3 = aP1; /*0x5118cc*/
  }
  INIClass::GetString( /*0x5118e2*/
    v3,
    (unsigned __int8 *)(a1 + 36),
    (unsigned __int8 *)aParentcountry,
    (char *)(a1 + 36),
    Source,
    25);
  if ( Source ) /*0x5118ed*/
  {
    strncpy(Destination, Source, 0x18u); /*0x511901*/
    IDA_LOBYTE(v73) = 0; /*0x511909*/
  }
  else
  {
    Destination[0] = (unsigned __int8, unsigned int a1)Source; /*0x5118ef*/
  }
  if ( Destination != (char *)(a1 + 152) ) /*0x51191a*/
  {
    qmemcpy((void *)(a1 + 152), Destination, 0x18u); /*0x511925*/
    *(_BYTE *, unsigned int a1, unsigned int a2)(a1 + 176) = v73; /*0x511927*/
    v3 = aP1; /*0x511928*/
  }
  *(_DWORD *)(a1 + 192) = BuildingTypeClass::FindAnimByName( /*0x511942*/
                            v3,
                            (unsigned __int8 *)(a1 + 36),
                            (unsigned __int8 *)g_INI_Key_Color,
                            *(_DWORD *)(a1 + 192));
  Source[0] = *(_BYTE *)(a1 + 420); /*0x51195a*/
  Source[1] = 0; /*0x511966*/
  INIClass::GetString(v3, (unsigned __int8 *)(a1 + 36), (unsigned __int8 *)aPrefix, Source, v74, 2); /*0x51196b*/
  *(_BYTE *)(a1 + 420) = v74[0]; /*0x511974*/
  INIClass::ReadDouble_Overwrite(a1 + 36, (int)aFirepower, *(double *)(a1 + 200)); /*0x511990*/
  v5 = *(_DWORD *)(a1 + 212); /*0x511995*/
  v6 = *(_DWORD *)(a1 + 208); /*0x51199b*/
  *(double *)(a1 + 200) = a2; /*0x5119a1*/
  INIClass::ReadDouble_Overwrite(a1 + 36, (int)aGroundspeed, COERCE_DOUBLE(IDA___PAIR64__(v5, v6))); /*0x5119b1*/
  v7 = *(_DWORD *)(a1 + 220); /*0x5119b6*/
  v8 = *(_DWORD *)(a1 + 216); /*0x5119bc*/
  *(double *)(a1 + 208) = a2; /*0x5119c2*/
  INIClass::ReadDouble_Overwrite(a1 + 36, (int)aAirspeed, COERCE_DOUBLE(IDA___PAIR64__(v7, v8))); /*0x5119d2*/
  v9 = *(double *)(a1 + 224); /*0x5119dd*/
  *(double *)(a1 + 216) = a2; /*0x5119e3*/
  INIClass::ReadDouble_Overwrite(a1 + 36, (int)g_INI_Key_Armor, v9); /*0x5119f3*/
  v10 = *(_DWORD *)(a1 + 236); /*0x5119f8*/
  v11 = *(_DWORD *)(a1 + 232); /*0x5119fe*/
  *(double *)(a1 + 224) = a2; /*0x511a04*/
  INIClass::ReadDouble_Overwrite(a1 + 36, (int)&off_825478, COERCE_DOUBLE(IDA___PAIR64__(v10, v11))); /*0x511a14*/
  v12 = *(_DWORD *)(a1 + 244); /*0x511a19*/
  v13 = *(_DWORD *)(a1 + 240); /*0x511a1f*/
  *(double *)(a1 + 232) = a2; /*0x511a25*/
  INIClass::ReadDouble_Overwrite(a1 + 36, (int)g_INI_Key_Cost, COERCE_DOUBLE(IDA___PAIR64__(v12, v13))); /*0x511a35*/
  v14 = *(double *)(a1 + 248); /*0x511a40*/
  *(double *)(a1 + 240) = a2; /*0x511a46*/
  INIClass::ReadDouble_Overwrite(a1 + 36, (int)aBuildtime, v14); /*0x511a56*/
  v15 = *(_BYTE *)(a1 + 421); /*0x511a5b*/
  *(double *)(a1 + 248) = a2; /*0x511a61*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite(a1 + 36, aMultiplay, v15); /*0x511a70*/
  v71 = *(_BYTE *)(a1 + 422); /*0x511a7d*/
  *(_BYTE *)(a1 + 421) = Bool_Overwrite; /*0x511a84*/
  *(_BYTE *)(a1 + 422) = INIClass::ReadBool_Overwrite(a1 + 36, aMultiplaypassi, v71); /*0x511a8f*/
  v17 = INIClass::ReadBool_Overwrite(a1 + 36, aWallowner, *(_BYTE *)(a1 + 423)); /*0x511aa4*/
  v18 = *(_BYTE *)(a1 + 424); /*0x511aa9*/
  *(_BYTE *)(a1 + 423) = v17; /*0x511aaf*/
  v19 = INIClass::ReadBool_Overwrite(a1 + 36, aSmartai, v18); /*0x511abe*/
  v20 = *(float *)(a1 + 256); /*0x511ac3*/
  *(_BYTE *)(a1 + 424) = v19; /*0x511ace*/
  INIClass::ReadDouble_Overwrite(a1 + 36, (int)aArmorinfantrym, v20); /*0x511add*/
  *(float *)(a1 + 256) = v20; /*0x511ae2*/
  v21 = *(float *)(a1 + 260); /*0x511ae8*/
  INIClass::ReadDouble_Overwrite(a1 + 36, (int)aArmorunitsmult, v21); /*0x511afc*/
  *(float *)(a1 + 260) = v21; /*0x511b01*/
  v22 = *(float *)(a1 + 264); /*0x511b07*/
  INIClass::ReadDouble_Overwrite(a1 + 36, (int)aArmoraircraftm, v22); /*0x511b1b*/
  *(float *)(a1 + 264) = v22; /*0x511b20*/
  v23 = *(float *)(a1 + 268); /*0x511b26*/
  INIClass::ReadDouble_Overwrite(a1 + 36, (int)aArmorbuildings, v23); /*0x511b3a*/
  *(float *)(a1 + 268) = v23; /*0x511b3f*/
  v24 = *(float *)(a1 + 272); /*0x511b45*/
  INIClass::ReadDouble_Overwrite(a1 + 36, (int)aArmordefensesm, v24); /*0x511b59*/
  *(float *)(a1 + 272) = v24; /*0x511b5e*/
  v25 = *(float *)(a1 + 276); /*0x511b64*/
  INIClass::ReadDouble_Overwrite(a1 + 36, (int)aCostinfantrymu, v25); /*0x511b78*/
  *(float *)(a1 + 276) = v25; /*0x511b7d*/
  v26 = *(float *)(a1 + 280); /*0x511b83*/
  INIClass::ReadDouble_Overwrite(a1 + 36, (int)aCostunitsmult, v26); /*0x511b97*/
  *(float *)(a1 + 280) = v26; /*0x511b9c*/
  v27 = *(float *)(a1 + 284); /*0x511ba2*/
  INIClass::ReadDouble_Overwrite(a1 + 36, (int)aCostaircraftmu, v27); /*0x511bb6*/
  *(float *)(a1 + 284) = v27; /*0x511bbb*/
  v28 = *(float *)(a1 + 288); /*0x511bc1*/
  INIClass::ReadDouble_Overwrite(a1 + 36, (int)aCostbuildingsm, v28); /*0x511bd5*/
  *(float *)(a1 + 288) = v28; /*0x511bda*/
  v29 = *(float *)(a1 + 292); /*0x511be0*/
  INIClass::ReadDouble_Overwrite(a1 + 36, (int)aCostdefensesmu, v29); /*0x511bf4*/
  *(float *)(a1 + 292) = v29; /*0x511bf9*/
  v30 = *(float *)(a1 + 296); /*0x511bff*/
  INIClass::ReadDouble_Overwrite(a1 + 36, (int)aSpeedinfantrym, v30); /*0x511c13*/
  *(float *)(a1 + 296) = v30; /*0x511c18*/
  v31 = *(float *)(a1 + 300); /*0x511c1e*/
  INIClass::ReadDouble_Overwrite(a1 + 36, (int)aSpeedunitsmult, v31); /*0x511c32*/
  *(float *)(a1 + 300) = v31; /*0x511c37*/
  v32 = *(float *)(a1 + 304); /*0x511c3d*/
  INIClass::ReadDouble_Overwrite(a1 + 36, (int)aSpeedaircraftm, v32); /*0x511c51*/
  *(float *)(a1 + 304) = v32; /*0x511c56*/
  v33 = *(float *)(a1 + 308); /*0x511c5c*/
  INIClass::ReadDouble_Overwrite(a1 + 36, (int)aBuildtimeinfan, v33); /*0x511c70*/
  *(float *)(a1 + 308) = v33; /*0x511c75*/
  v34 = *(float *)(a1 + 312); /*0x511c7b*/
  INIClass::ReadDouble_Overwrite(a1 + 36, (int)aBuildtimeunits, v34); /*0x511c8f*/
  *(float *)(a1 + 312) = v34; /*0x511c94*/
  v35 = *(float *)(a1 + 316); /*0x511c9a*/
  INIClass::ReadDouble_Overwrite(a1 + 36, (int)aBuildtimeaircr, v35); /*0x511cae*/
  *(float *)(a1 + 316) = v35; /*0x511cb3*/
  v36 = *(float *)(a1 + 320); /*0x511cb9*/
  INIClass::ReadDouble_Overwrite(a1 + 36, (int)aBuildtimebuild, v36); /*0x511ccd*/
  *(float *)(a1 + 320) = v36; /*0x511cd2*/
  v37 = *(float *)(a1 + 324); /*0x511cd8*/
  INIClass::ReadDouble_Overwrite(a1 + 36, (int)aBuildtimedefen, v37); /*0x511cec*/
  *(float *)(a1 + 324) = v37; /*0x511cf1*/
  v38 = *(float *)(a1 + 328); /*0x511cf7*/
  INIClass::ReadDouble_Overwrite(a1 + 36, (int)aIncomemult, v38); /*0x511d0b*/
  *(float *)(a1 + 328) = v38; /*0x511d10*/
  if ( INIClass::GetString( /*0x511d2d*/
         v3,
         (unsigned __int8 *)(a1 + 36),
         (unsigned __int8 *)aVeteraninfantr,
         &g_INI_DefaultBuffer,
         String,
         128) )
  {
    InfantryTypeVector::Construct(&v75, 0, 0); /*0x511d42*/
    v75 = &(void*)(void*)&TypeList_InfantryTypeClass_const___vftable; /*0x511d56*/
    for ( i = strtok(String, Delimiter); i; i = strtok(0, Delimiter) ) /*0x511d64*/
    {
      if ( !*i ) /*0x511d66*/
        break; /*0x511d69*/
      v81 = KeywordType::FindOrCreate2(i); /*0x511d74*/
      if ( v81 ) /*0x511d78*/
        InfantryTypeVector::Add(&v75, &v81); /*0x511d83*/
    }
    HouseTypeClass::readAllowedUnits(&v75); /*0x511da4*/
    *(_DWORD *)Destination = &(void*)(void*)&TypeList_InfantryTypeClass_const___vftable; /*0x511dad*/
    v75 = &(void*)(void*)&VectorClass_InfantryTypeClass_const___vftable; /*0x511db1*/
    Vector::Cleanup((int)&v75); /*0x511db9*/
  }
  else
  {
    HouseTypeClass::readAllowedUnits(a1 + 332); /*0x511dcb*/
    *(_DWORD *)Destination = &(void*)(void*)&TypeList_InfantryTypeClass_const___vftable; /*0x511dd0*/
  }
  HouseTypeClass::readStartInfantry(Destination); /*0x511de5*/
  v40 = *(_DWORD *)&Destination[16]; /*0x511dee*/
  v41 = v73; /*0x511df2*/
  *(_DWORD *)(a1 + 352) = *(_DWORD *)&Destination[20]; /*0x511df6*/
  v42 = *(void **)&Destination[4]; /*0x511df9*/
  *(_DWORD *)(a1 + 348) = v40; /*0x511dfd*/
  *(_DWORD *)(a1 + 356) = v41; /*0x511e02*/
  *(_DWORD *)Destination = &(void*)(void*)&VectorClass_InfantryTypeClass_const___vftable; /*0x511e05*/
  if ( v42 && Destination[13] ) /*0x511e15*/
    RA2_OPDEL(v42); /*0x511e18*/
  if ( INIClass::GetString( /*0x511e3a*/
         v3,
         (unsigned __int8 *)(a1 + 36),
         (unsigned __int8 *)aVeteranunits,
         &g_INI_DefaultBuffer,
         String,
         128) )
  {
    UnitTypeVector::Construct(Destination, 0, 0); /*0x511e4f*/
    *(_DWORD *)Destination = &(void*)(void*)&TypeList_UnitTypeClass_const___vftable; /*0x511e5e*/
    for ( j = strtok(String, Delimiter); j; j = strtok(0, Delimiter) ) /*0x511e70*/
    {
      if ( !*j ) /*0x511e72*/
        break; /*0x511e75*/
      Alt = BuildingTypeClass::FindOrCreateAlt(j); /*0x511e7e*/
      if ( Alt /*0x511eb1*/
        && (*(int *)&Destination[16] < *(int *)&Destination[8]
         || (Destination[13] || !*(_DWORD *)&Destination[8])
         && *(int *)&Destination[20] > 0
         && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)Destination + 8))(
              Destination,
              *(_DWORD *)&Destination[8] + *(_DWORD *)&Destination[20],
              0)) )
      {
        v45 = (*(_DWORD *)&Destination[16])++; /*0x511ebc*/
        *(_DWORD *)(*(_DWORD *)&Destination[4] + 4 * v45) = Alt; /*0x511ec7*/
      }
    }
    TypeList::CopyConstructor(&v75, Destination); /*0x511ee6*/
    *(_DWORD *)Destination = &(void*)(void*)&VectorClass_UnitTypeClass_const___vftable; /*0x511eef*/
    Vector::Destructor((int)Destination); /*0x511ef7*/
  }
  else
  {
    TypeList::CopyConstructor(&v75, (_DWORD *)(a1 + 360)); /*0x511f09*/
  }
  VectorClass::CopyConstructor((_DWORD *)(a1 + 360), &v75); /*0x511f1b*/
  v46 = v78; /*0x511f24*/
  v47 = v80; /*0x511f28*/
  *(_DWORD *)(a1 + 380) = v79; /*0x511f2c*/
  v48 = v76; /*0x511f2f*/
  *(_DWORD *)(a1 + 376) = v46; /*0x511f33*/
  *(_DWORD *)(a1 + 384) = v47; /*0x511f38*/
  v75 = &(void*)(void*)&VectorClass_UnitTypeClass_const___vftable; /*0x511f3b*/
  if ( v48 && v77 ) /*0x511f4b*/
    RA2_OPDEL(v48); /*0x511f4e*/
  if ( INIClass::GetString( /*0x511f70*/
         v3,
         (unsigned __int8 *)(a1 + 36),
         (unsigned __int8 *)aVeteranaircraf,
         &g_INI_DefaultBuffer,
         String,
         128) )
  {
    HouseTypeClass::readDefaultAlly(0, 0); /*0x511f85*/
    *(_DWORD *)Destination = &(void*)(void*)&TypeList_AircraftTypeClass_const___vftable; /*0x511f94*/
    for ( k = strtok(String, Delimiter); k; k = strtok(0, Delimiter) ) /*0x511fa6*/
    {
      if ( !*k ) /*0x511fa8*/
        break; /*0x511fab*/
      v50 = KeywordClass::FindOrCreate(k); /*0x511fb4*/
      if ( v50 /*0x511fe7*/
        && (*(int *)&Destination[16] < *(int *)&Destination[8]
         || (Destination[13] || !*(_DWORD *)&Destination[8])
         && *(int *)&Destination[20] > 0
         && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)Destination + 8))(
              Destination,
              *(_DWORD *)&Destination[8] + *(_DWORD *)&Destination[20],
              0)) )
      {
        v51 = (*(_DWORD *)&Destination[16])++; /*0x511ff2*/
        *(_DWORD *)(*(_DWORD *)&Destination[4] + 4 * v51) = v50; /*0x511ffd*/
      }
    }
    HouseTypeClass::readParaDropTypes(Destination); /*0x51201c*/
    *(_DWORD *)Destination = &(void*)(void*)&VectorClass_AircraftTypeClass_const___vftable; /*0x512025*/
    VectorClass::ClearAndFree4((int)Destination); /*0x51202d*/
  }
  else
  {
    HouseTypeClass::readParaDropTypes(a1 + 388); /*0x51203f*/
  }
  HouseTypeClass::readBaseDefense(&v75); /*0x512051*/
  v52 = v78; /*0x51205a*/
  v53 = v80; /*0x51205e*/
  *(_DWORD *)(a1 + 408) = v79; /*0x512062*/
  v54 = v76; /*0x512065*/
  *(_DWORD *)(a1 + 404) = v52; /*0x512069*/
  *(_DWORD *)(a1 + 412) = v53; /*0x51206e*/
  v75 = &(void*)(void*)&VectorClass_AircraftTypeClass_const___vftable; /*0x512071*/
  if ( v54 && v77 ) /*0x512081*/
    RA2_OPDEL(v54); /*0x512084*/
  v55 = *(_DWORD *)(a1 + 188); /*0x51208c*/
  v56 = HouseTypeClass::loadCountryData(a1 + 36, g_INI_Key_Side, v55); /*0x51209e*/
  *(_DWORD *)(a1 + 188) = v56; /*0x5120a5*/
  if ( v56 != v55 ) /*0x5120ab*/
  {
    if ( v55 != -1 ) /*0x5120b4*/
    {
      v57 = *(_DWORD *)(a1 + 184); /*0x5120bc*/
      v58 = *((_DWORD *)dword_8B4124 + v55); /*0x5120c2*/
      v59 = *(_DWORD *)(v58 + 168); /*0x5120c5*/
      v60 = v58 + 152; /*0x5120cb*/
      if ( v57 < v59 ) /*0x5120d2*/
      {
        v61 = v59 - 1; /*0x5120d4*/
        for ( *(_DWORD *)(v60 + 16) = v61; /*0x5120da*/
              v57 < *(_DWORD *)(v60 + 16);
              *(_DWORD *)(*(_DWORD *)(v60 + 4) + 4 * v57 - 4) = *(_DWORD *)(*(_DWORD *)(v60 + 4) + 4 * v57) )
        {
          ++v57; /*0x5120df*/
        }
      }
    }
    v62 = *(_DWORD *)(a1 + 188); /*0x5120ee*/
    if ( v62 != -1 ) /*0x5120f7*/
    {
      v63 = *((_DWORD *)dword_8B4124 + v62); /*0x5120ff*/
      v64 = *(_DWORD *)(v63 + 160); /*0x512102*/
      v65 = *(_DWORD *)(v63 + 168); /*0x512108*/
      v66 = v63 + 152; /*0x51210e*/
      if ( v65 < v64 /*0x512133*/
        || (*(_BYTE *)(v66 + 13) || !v64)
        && (v67 = *(_DWORD *)(v66 + 20), v67 > 0)
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v66 + 8))(v66, v67 + v64, 0) )
      {
        v68 = *(_DWORD *)(v66 + 16); /*0x51213a*/
        v69 = *(_DWORD *)(v66 + 4); /*0x51213d*/
        *(_DWORD *)(v66 + 16) = v68 + 1; /*0x512143*/
        *(_DWORD *)(v69 + 4 * v68) = *(_DWORD *)(a1 + 184); /*0x51214c*/
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

  AbstractTypeClass::ProcessPower(a2); /*0x51217a*/
  Power::TimerProcess(this->veteranAircraftCount); /*0x512188*/
  Power::TimerProcess(this->suffix_4); /*0x512196*/
  Power::TimerProcess(this->wallOwner); /*0x5121a4*/
  Checksummer::Add_double(this->q0C8, this->q0CC); /*0x5121b9*/
  Checksummer::Add_double(this->q0D0, this->u32_D4); /*0x5121ce*/
  Checksummer::Add_double(this->q0D8, this->q0DC); /*0x5121e3*/
  Checksummer::Add_double(this->q0E0, this->q0E4); /*0x5121f8*/
  Checksummer::Add_double(this->q0E8, this->q0EC); /*0x51220d*/
  Checksummer::Add_double(this->q0F0, this->q0F4); /*0x512222*/
  Checksummer::Add_double(this->q0F8, this->q0FC); /*0x512237*/
  Checksummer::Add_Buffer((unsigned int *)a2, (unsigned __int8 *)(&this->veteranInfantry6), strlen((const char *)(&this->veteranInfantry6))); /*0x512252*/
  IDA_LOBYTE(v3) = this->q1A4; /*0x512257*/
  v4 = Power::FinalizeDrain(a2, v3); /*0x512260*/
  IDA_LOBYTE(v4) = this->q1A5; /*0x512265*/
  return Power::FlagProcess(a2, v4); /*0x512273*/
}
}
// 0x512290
namespace gamemd {
int HouseTypeClass::SaveLoad_Prefix(unsigned int * i, int a2)
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
      *v3 = &(void*)(void*)&TypeList_InfantryTypeClass_const___vftable; /*0x5122fc*/
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
      v2[90] = &(void*)(void*)&TypeList_UnitTypeClass_const___vftable; /*0x51235c*/
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
// 0x512480
namespace gamemd {
void HouseTypeClass_SaveLoad_Prefix_0()
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
// 0x513370
namespace gamemd {
unsigned int * HouseTypeClass::readBaseDefense(VectorClass_flat * aP1)
{
  int v3; // eax
  void *v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( this == aP1 ) /*0x51337a*/
    return this; /*0x51337a*/
  this->Cleanup5(); /*0x51337e*/
  v3 = aP1[2]; /*0x513381*/
  this->Capacity = v3; /*0x513386*/
  if ( !v3 ) /*0x513389*/
  {
    this->Items = 0; /*0x5133ca*/
    this->IsAllocated = 0; /*0x5133d1*/
    return this; /*0x5133d5*/
  }
  v4 = RA2_OPNEW(4 * v3); /*0x513393*/
  this->Items = v4; /*0x51339b*/
  if ( !v4 ) /*0x5133a0*/
    return this; /*0x5133a0*/
  v5 = this->Capacity; /*0x5133a2*/
  v6 = 0; /*0x5133a5*/
  this->IsAllocated = 1; /*0x5133a9*/
  if ( v5 <= 0 ) /*0x5133ad*/
    return this; /*0x5133ad*/
  do /*0x5133c1*/
  {
    *(_DWORD *)(this->Items + 4 * v6) = *(_DWORD *)(aP1[1] + 4 * v6); /*0x5133b8*/
    ++v6; /*0x5133be*/
  }
  while ( v6 < this->Capacity ); /*0x5133c1*/
  return this; /*0x5133c5*/
}
}
// 0x67B8F0
namespace gamemd {
void * HouseTypeClass::ReadCountryName(int a1, unsigned char *** edx0, INIClass * aP1, unsigned char * a2, unsigned int * a5)
{
  char *i; // eax
  int v7; // edi
  int v8; // eax
  int v9; // ecx
  void *v10; // eax
  bool v11; // zf
  int v13; // eax
  void *v14; // eax
  int v15; // ecx
  int v16; // eax
  void **v17; // [esp+Ch] [ebp-9Ch] BYREF
  void *Block; // [esp+10h] [ebp-98h]
  int v19; // [esp+14h] [ebp-94h]
  char v20; // [esp+19h] [ebp-8Fh]
  int v21; // [esp+1Ch] [ebp-8Ch]
  int v22; // [esp+20h] [ebp-88h]
  char String[128]; // [esp+28h] [ebp-80h] BYREF

  if ( INIClass::GetString(edx0, aP1, a2, &g_INI_DefaultBuffer, String, 128) ) /*0x67b91c*/
  {
    AircraftTypeVector::Constructor(&v17, 0, 0); /*0x67b931*/
    v22 = 10; /*0x67b93a*/
    v21 = 0; /*0x67b948*/
    v17 = &(void*)(void*)&TypeList_AircraftTypeClass_const___vftable; /*0x67b94c*/
    for ( i = strtok(String, Delimiter); i; i = strtok(0, Delimiter) ) /*0x67b95e*/
    {
      if ( !*i ) /*0x67b960*/
        break; /*0x67b962*/
      v7 = KeywordClass::FindOrCreate(i); /*0x67b96b*/
      if ( v7 /*0x67b99b*/
        && (v21 < v19
         || (v20 || !v19)
         && v22 > 0
         && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v17[2])(&v17, v22 + v19, 0)) )
      {
        v8 = v21++; /*0x67b9a6*/
        *((_DWORD *)Block + v8) = v7; /*0x67b9b1*/
      }
    }
    *(_DWORD *)(a1 + 4) = 0; /*0x67b9cd*/
    *(_DWORD *)(a1 + 8) = 0; /*0x67b9d0*/
    *(_BYTE *)(a1 + 12) = 1; /*0x67b9d3*/
    *(_BYTE *)(a1 + 13) = 0; /*0x67b9d7*/
    *(_DWORD *)a1 = &(void*)(void*)&VectorClass_AircraftTypeClass_const___vftable; /*0x67b9da*/
    HouseTypeClass::readBaseDefense((_DWORD *)a1, &v17); /*0x67b9e0*/
    *(_DWORD *)a1 = &(void*)(void*)&TypeList_AircraftTypeClass_const___vftable; /*0x67b9e5*/
    v17 = &(void*)(void*)&VectorClass_AircraftTypeClass_const___vftable; /*0x67b9eb*/
    v9 = v22; /*0x67b9f7*/
    *(_DWORD *)(a1 + 16) = v21; /*0x67b9fb*/
    v10 = Block; /*0x67b9fe*/
    v11 = Block == 0; /*0x67ba02*/
    *(_DWORD *)(a1 + 20) = v9; /*0x67ba04*/
    if ( !v11 && v20 ) /*0x67ba11*/
    {
      RA2_OPDEL(v10); /*0x67ba18*/
      return a1; /*0x67ba2b*/
    }
  }
  else
  {
    *(_DWORD *)(a1 + 4) = 0; /*0x67ba39*/
    *(_DWORD *)(a1 + 8) = 0; /*0x67ba3c*/
    *(_BYTE *)(a1 + 12) = 1; /*0x67ba3f*/
    *(_BYTE *)(a1 + 13) = 0; /*0x67ba43*/
    *(_DWORD *)a1 = &(void*)(void*)&VectorClass_AircraftTypeClass_const___vftable; /*0x67ba46*/
    if ( (_DWORD *)a1 != a5 ) /*0x67ba4c*/
    {
      VectorClass::ClearAndFree4(a1); /*0x67ba50*/
      v13 = a5[2]; /*0x67ba56*/
      *(_DWORD *)(a1 + 8) = v13; /*0x67ba5b*/
      if ( v13 ) /*0x67ba5e*/
      {
        v14 = RA2_OPNEW(4 * v13); /*0x67ba68*/
        *(_DWORD *)(a1 + 4) = v14; /*0x67ba72*/
        if ( v14 ) /*0x67ba75*/
        {
          v15 = *(_DWORD *)(a1 + 8); /*0x67ba77*/
          v16 = 0; /*0x67ba7a*/
          *(_BYTE *)(a1 + 13) = 1; /*0x67ba7e*/
          if ( v15 > 0 ) /*0x67ba82*/
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
    *(_DWORD *)a1 = &(void*)(void*)&TypeList_AircraftTypeClass_const___vftable; /*0x67baac*/
  }
  return a1; /*0x67ba22*/
}
}
// 0x4756F0
namespace gamemd {
int HouseTypeClass::loadCountryData(unsigned char * a2, unsigned char * a3, int a4)
{
  int result; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  int v7; // ecx
  _DWORD *i; // edx
  char Destination[128]; // [esp+0h] [ebp-80h] BYREF

  if ( !INIClass::GetString(this, a2, a3, &g_INI_DefaultBuffer, Destination, 128) ) /*0x475712*/
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
    if ( g_ObjectTypeList <= 0 ) /*0x475755*/
    {
      return -1; /*0x475769*/
    }
    else
    {
      for ( i = dword_8B4124; (_DWORD *)*i != v6; ++i ) /*0x475757*/
      {
        if ( ++v7 >= g_ObjectTypeList ) /*0x475767*/
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
  (*(void (__stdcall **)(int))(*(_DWORD *)a1 + 4))(a1); /*0x512632*/
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
  return this->veteranAircraft; /*0x512736*/
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
HouseTypeClass * HouseTypeClass::Destructor(char a2)
{
  int v3; // eax
  void *v4; // eax
  void *v5; // eax
  void *v6; // eax

  *this = &(void*)(void*)&HouseTypeClass_vftable; /*0x512766*/
  this->vtable2 = &(void*)(void*)&HouseTypeClass_vftable; /*0x51276c*/
  this->vtable3 = &(void*)(void*)&HouseTypeClass_vftable; /*0x512773*/
  this->vtable4 = &(void*)(void*)&HouseTypeClass_vftable; /*0x51277a*/
  AbstractClass::AnnounceExpiredPointer(); /*0x512781*/
  v3 = (*(int (__thiscall **)(int *, void ***))(dword_A83C98 + 16))(&dword_A83C98, &this); /*0x51279a*/
  if ( v3 != -1 && v3 < g_SuperWeaponTypeArray && v3 < --g_SuperWeaponTypeArray ) /*0x5127b5*/
  {
    do /*0x5127cd*/
    {
      ++v3; /*0x5127bd*/
      *((_DWORD *)g_SuperWeaponTypeCount + v3 - 1) = *((_DWORD *)g_SuperWeaponTypeCount + v3); /*0x5127c1*/
    }
    while ( v3 < g_SuperWeaponTypeArray ); /*0x5127cd*/
  }
  v4 = *(&this->id8); /*0x5127cf*/
  *(&this->id7) = &(void*)(void*)&VectorClass_AircraftTypeClass_const___vftable; /*0x5127d8*/
  if ( v4 && this->q644 ) /*0x5127e6*/
  {
    RA2_OPDEL(v4); /*0x5127ef*/
    *(&this->id8) = 0; /*0x5127f7*/
  }
  this->q644 = 0; /*0x5127fd*/
  *(&this->id9) = 0; /*0x512803*/
  v5 = *(&this->id1); /*0x512809*/
  *(&this->id0) = &(void*)(void*)&VectorClass_UnitTypeClass_const___vftable; /*0x51280f*/
  if ( v5 && this->u8_175 ) /*0x51281d*/
  {
    RA2_OPDEL(v5); /*0x512826*/
    *(&this->id1) = 0; /*0x51282e*/
  }
  this->u8_175 = 0; /*0x512834*/
  *(&this->id2) = 0; /*0x51283a*/
  v6 = *(&this->NeedsSaveOrLink4); /*0x512840*/
  *(&this->NeedsSaveOrLink3) = &(void*)(void*)&VectorClass_InfantryTypeClass_const___vftable; /*0x512846*/
  if ( v6 && this->u8_159 ) /*0x512854*/
  {
    RA2_OPDEL(v6); /*0x51285d*/
    *(&this->NeedsSaveOrLink4) = 0; /*0x512865*/
  }
  this->u8_159 = 0; /*0x51286d*/
  *(&this->NeedsSaveOrLink5) = 0; /*0x512873*/
  AbstractTypeClass::Dtor(); /*0x512879*/
  if ( (a2 & 1) != 0 ) /*0x512885*/
    RA2_OPDEL(); /*0x512888*/
  return this; /*0x512892*/
}
} // namespace gamemd

// 0x512900
namespace gamemd {
void HouseTypeClass_36::ddtor()
{
  void *v2; // eax

  v2 = this->Items; /*0x512906*/
  this->q010 = 0; /*0x512909*/
  if ( v2 && this->IsAllocated ) /*0x512910*/
  {
    RA2_OPDEL(v2); /*0x512916*/
    this->Items = 0; /*0x51291e*/
  }
  this->IsAllocated = 0; /*0x512921*/
  this->q008 = 0; /*0x512924*/
}
} // namespace gamemd

// 0x512930
namespace gamemd {
unsigned int HouseTypeClass_36::Write(int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x512930*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x512945*/
  else
    return 0; /*0x512937*/
}
} // namespace gamemd

// 0x512950
namespace gamemd {
int HouseTypeClass_36::Seek(int a2)
{
  return *(_DWORD *)(*(this + 1) + 4 * a2); /*0x51295a*/
}
} // namespace gamemd

// 0x512960
namespace gamemd {
unsigned int * HouseTypeClass::readStartUnit()
{
  *(this + 1) = 0; /*0x512964*/
  *(this + 2) = 0; /*0x512967*/
  this->IsInitialized = 1; /*0x51296a*/
  this->IsAllocated = 0; /*0x51296e*/
  this->CapacityIncrement = 10; /*0x512971*/
  this->Count = 0; /*0x512978*/
  *this = &(void*)(void*)&TypeList_AircraftTypeClass_const___vftable; /*0x51297b*/
  return this; /*0x512981*/
}
} // namespace gamemd

// 0x512990
namespace gamemd {
void HouseTypeClass_28::ddtor()
{
  void *v2; // eax

  v2 = this->Items; /*0x512996*/
  this->q010 = 0; /*0x512999*/
  if ( v2 && this->IsAllocated ) /*0x5129a0*/
  {
    RA2_OPDEL(v2); /*0x5129a6*/
    this->Items = 0; /*0x5129ae*/
  }
  this->IsAllocated = 0; /*0x5129b1*/
  this->q008 = 0; /*0x5129b4*/
}
} // namespace gamemd

// 0x5129C0
namespace gamemd {
unsigned int HouseTypeClass_28::Write(int a2)
{
  if ( *(_BYTE *)(this + 12) ) /*0x5129c0*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x5129d5*/
  else
    return 0; /*0x5129c7*/
}
} // namespace gamemd

// 0x5129E0
namespace gamemd {
int HouseTypeClass_28::Seek(int a2)
{
  return *(_DWORD *)(*(this + 1) + 4 * a2); /*0x5129ea*/
}
} // namespace gamemd

// 0x512A40
namespace gamemd {
TypeList_flat * HouseTypeClass_36::QueryInterface(char a2)
{
  void *v3; // eax

  v3 = (void *)this->Items; /*0x512a43*/
  *this = &(void*)(void*)&VectorClass_UnitTypeClass_const___vftable; /*0x512a46*/
  if ( v3 && this->IsAllocated ) /*0x512a50*/
  {
    RA2_OPDEL(v3); /*0x512a58*/
    this->Items = 0; /*0x512a60*/
  }
  this->IsAllocated = 0; /*0x512a6b*/
  this->Capacity = 0; /*0x512a71*/
  if ( (a2 & 1) != 0 ) /*0x512a78*/
    RA2_OPDEL(); /*0x512a7b*/
  return this; /*0x512a85*/
}
} // namespace gamemd

// 0x512A90
namespace gamemd {
TypeList_flat * HouseTypeClass_28::QueryInterface(char a2)
{
  void *v3; // eax

  v3 = (void *)this->Items; /*0x512a93*/
  *this = &(void*)(void*)&VectorClass_AircraftTypeClass_const___vftable; /*0x512a96*/
  if ( v3 && this->IsAllocated ) /*0x512aa0*/
  {
    RA2_OPDEL(v3); /*0x512aa8*/
    this->Items = 0; /*0x512ab0*/
  }
  this->IsAllocated = 0; /*0x512abb*/
  this->Capacity = 0; /*0x512ac1*/
  if ( (a2 & 1) != 0 ) /*0x512ac8*/
    RA2_OPDEL(); /*0x512acb*/
  return this; /*0x512ad5*/
}
} // namespace gamemd

// 0x512B80
namespace gamemd {
VectorClass_flat * HouseTypeClass_36::Constructor(char a2)
{
  void *v3; // eax

  v3 = (void *)this->Items; /*0x512b83*/
  *this = &(void*)(void*)&VectorClass_AircraftTypeClass_const___vftable; /*0x512b86*/
  if ( v3 && this->IsAllocated ) /*0x512b90*/
  {
    RA2_OPDEL(v3); /*0x512b98*/
    this->Items = 0; /*0x512ba0*/
  }
  this->IsAllocated = 0; /*0x512bab*/
  this->Capacity = 0; /*0x512bb1*/
  if ( (a2 & 1) != 0 ) /*0x512bb8*/
    RA2_OPDEL(); /*0x512bbb*/
  return this; /*0x512bc5*/
}
} // namespace gamemd

// 0x512BD0
namespace gamemd {
unsigned int * HouseTypeClass::readStartInfantry(InfantryTypeClass * aP1)
{
  int v3; // eax
  void *v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( this == aP1 ) /*0x512bda*/
    return this; /*0x512bda*/
  this->GetClassIdentifier(); /*0x512bde*/
  v3 = aP1[2]; /*0x512be1*/
  this->vtable3 = v3; /*0x512be6*/
  if ( !v3 ) /*0x512be9*/
  {
    this->vtable2 = 0; /*0x512c2a*/
    this->q034 = 0; /*0x512c31*/
    return this; /*0x512c35*/
  }
  v4 = RA2_OPNEW(4 * v3); /*0x512bf3*/
  this->vtable2 = v4; /*0x512bfb*/
  if ( !v4 ) /*0x512c00*/
    return this; /*0x512c00*/
  v5 = this->vtable3; /*0x512c02*/
  v6 = 0; /*0x512c05*/
  this->q034 = 1; /*0x512c09*/
  if ( v5 <= 0 ) /*0x512c0d*/
    return this; /*0x512c0d*/
  do /*0x512c21*/
  {
    *(_DWORD *)(this->vtable2 + 4 * v6) = *(_DWORD *)(aP1[1] + 4 * v6); /*0x512c18*/
    ++v6; /*0x512c1e*/
  }
  while ( v6 < this->vtable3 ); /*0x512c21*/
  return this; /*0x512c25*/
}
} // namespace gamemd

// 0x513010
namespace gamemd {
char HouseTypeClass_36::AddRef(int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x513012*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x51301d*/
  {
    v3 = 0; /*0x51301f*/
    if ( v2 <= 0 ) /*0x513023*/
      return 1; /*0x513043*/
    v4 = (_DWORD *)this->Items; /*0x513025*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x51302b*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x513034*/
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
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x51324c*/
  {
    this->IsInitialized = 0; /*0x513252*/
    if ( a3 ) /*0x513258*/
      v4 = a3; /*0x51326e*/
    else
      v4 = RA2_OPNEW(4 * a2); /*0x51326a*/
    this->IsInitialized = 1; /*0x513272*/
    if ( !v4 ) /*0x513276*/
      return 0; /*0x5132ea*/
    if ( this->Items ) /*0x513278*/
    {
      v5 = this->q008; /*0x51327f*/
      if ( a2 < v5 ) /*0x513284*/
        v5 = a2; /*0x513286*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x51328c*/
        ++i; /*0x513291*/
      if ( this->IsAllocated ) /*0x51329e*/
      {
        RA2_OPDEL(*((void **)this + 1)); /*0x5132a9*/
        this->Items = 0; /*0x5132b1*/
      }
    }
    this->Items = v4; /*0x5132ba*/
    this->q008 = a2; /*0x5132c2*/
    this->IsAllocated = a3 == 0; /*0x5132c5*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)&this->Items2))(this); /*0x5132ce*/
  }
  v7 = this->q008; /*0x5132d1*/
  if ( v7 < this->q010 ) /*0x5132d9*/
    this->q010 = v7; /*0x5132db*/
  return 1; /*0x5132de*/
}
} // namespace gamemd

// 0x513340
namespace gamemd {
int HouseTypeClass_36::Read(unsigned int * a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->q010; /*0x513340*/
  result = 0; /*0x513343*/
  if ( v2 <= 0 ) /*0x513348*/
    return -1; /*0x51335f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x51334e*/
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
  _DWORD *v4; // eax
  int v5; // ecx

  v2 = this->Capacity; /*0x5133e2*/
  if ( v2 == *(_DWORD *)(a2 + 8) ) /*0x5133ed*/
  {
    v3 = 0; /*0x5133ef*/
    if ( v2 <= 0 ) /*0x5133f3*/
      return 1; /*0x513413*/
    v4 = (_DWORD *)this->Items; /*0x5133f5*/
    v5 = *(_DWORD *)(a2 + 4) - (_DWORD)v4; /*0x5133fb*/
    while ( *v4 == *(_DWORD *)((char *)v4 + v5) ) /*0x513404*/
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
  _DWORD *v4; // edi
  int v6; // ecx
  int i; // eax

  if ( a2 ) /*0x51342c*/
  {
    this->IsInitialized = 0; /*0x513436*/
    if ( a3 ) /*0x51343c*/
      v4 = a3; /*0x513452*/
    else
      v4 = RA2_OPNEW(4 * a2); /*0x51344e*/
    this->IsInitialized = 1; /*0x513456*/
    if ( v4 ) /*0x51345a*/
    {
      if ( this->Items ) /*0x513465*/
      {
        v6 = this->Capacity; /*0x51346c*/
        if ( a2 < v6 ) /*0x513471*/
          v6 = a2; /*0x513473*/
        for ( i = 0; i < v6; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x513479*/
          ++i; /*0x51347e*/
        if ( this->IsAllocated ) /*0x51348b*/
        {
          RA2_OPDEL(*((void **)this + 1)); /*0x513496*/
          this->Items = 0; /*0x51349e*/
        }
      }
      this->Items = v4; /*0x5134a7*/
      this->Capacity = a2; /*0x5134af*/
      this->IsAllocated = a3 == 0; /*0x5134b2*/
      return 1; /*0x5134b8*/
    }
    else
    {
      return 0; /*0x51345f*/
    }
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)&this->Items2))(this); /*0x5134c2*/
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
  _DWORD *i; // ecx

  if ( !this->IsInitialized ) /*0x513500*/
    return 0; /*0x513508*/
  v3 = this->Capacity; /*0x51350e*/
  result = 0; /*0x513511*/
  if ( v3 <= 0 ) /*0x513515*/
    return -1; /*0x51352c*/
  for ( i = this->Items; *i != *a2; ++i ) /*0x51351b*/
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
  if ( *(_BYTE *)(this + 12) ) /*0x513540*/
    return (unsigned int)(a2 - *(_DWORD *)(this + 4)) >> 2; /*0x513555*/
  else
    return 0; /*0x513547*/
}
} // namespace gamemd

// 0x513560
namespace gamemd {
unsigned int * HouseTypeClass::readDefaultAlly(int a2, int a3)
{
  *(this + 1) = 0; /*0x513569*/
  *(this + 2) = a2; /*0x513570*/
  this->IsInitialized = 1; /*0x513573*/
  this->IsAllocated = 0; /*0x513577*/
  *this = &(void*)(void*)&VectorClass_AircraftTypeClass_const___vftable; /*0x51357b*/
  if ( a2 ) /*0x513581*/
  {
    if ( a3 ) /*0x513589*/
    {
      this->Items = a3; /*0x51358b*/
    }
    else
    {
      this->Items = RA2_OPNEW(4 * a2); /*0x51359c*/
      this->IsAllocated = 1; /*0x51359f*/
    }
  }
  *this = &(void*)(void*)&DynamicVectorClass_AircraftTypeClass_const___vftable; /*0x5135a3*/
  this->u32_14 = 10; /*0x5135a9*/
  this->q010 = 0; /*0x5135b0*/
  return this; /*0x5135b9*/
}
} // namespace gamemd

// 0x513610
namespace gamemd {
char HouseTypeClass_28::Release(int a2, unsigned int * a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  int i; // eax
  int v7; // eax

  if ( a2 ) /*0x51361c*/
  {
    this->IsInitialized = 0; /*0x513622*/
    if ( a3 ) /*0x513628*/
      v4 = a3; /*0x51363e*/
    else
      v4 = RA2_OPNEW(4 * a2); /*0x51363a*/
    this->IsInitialized = 1; /*0x513642*/
    if ( !v4 ) /*0x513646*/
      return 0; /*0x5136ba*/
    if ( this->Items ) /*0x513648*/
    {
      v5 = this->q008; /*0x51364f*/
      if ( a2 < v5 ) /*0x513654*/
        v5 = a2; /*0x513656*/
      for ( i = 0; i < v5; v4[i - 1] = *(_DWORD *)(this->Items + 4 * i - 4) ) /*0x51365c*/
        ++i; /*0x513661*/
      if ( this->IsAllocated ) /*0x51366e*/
      {
        RA2_OPDEL(*((void **)this + 1)); /*0x513679*/
        this->Items = 0; /*0x513681*/
      }
    }
    this->Items = v4; /*0x51368a*/
    this->q008 = a2; /*0x513692*/
    this->IsAllocated = a3 == 0; /*0x513695*/
  }
  else
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)&this->Items2))(this); /*0x51369e*/
  }
  v7 = this->q008; /*0x5136a1*/
  if ( v7 < this->q010 ) /*0x5136a9*/
    this->q010 = v7; /*0x5136ab*/
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

  v3 = this->Capacity; /*0x5136c3*/
  if ( this->Count >= v3 ) /*0x5136cb*/
  {
    if ( !this->IsAllocated && v3 ) /*0x5136d6*/
      return 0; /*0x5136d6*/
    v4 = this->CapacityIncrement; /*0x5136d8*/
    if ( v4 <= 0 || !this->Resize(v3 + v4, 0) ) /*0x5136e8*/
      return 0; /*0x5136ef*/
  }
  v6 = this->Count; /*0x5136f5*/
  v7 = this->Items; /*0x5136f8*/
  this->Count = v6 + 1; /*0x5136fe*/
  *(_DWORD *)(v7 + 4 * v6) = *aP1; /*0x513708*/
  return 1; /*0x5136f1*/
}
} // namespace gamemd

// 0x513710
namespace gamemd {
int HouseTypeClass_28::Read(unsigned int * a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = this->q010; /*0x513710*/
  result = 0; /*0x513713*/
  if ( v2 <= 0 ) /*0x513718*/
    return -1; /*0x51372f*/
  for ( i = (_DWORD *)this->Items; *i != *a2; ++i ) /*0x51371e*/
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
  void *v4; // eax
  int v5; // ecx
  int v6; // eax

  this->Items = 0; /*0x5137dd*/
  this->Capacity = 0; /*0x5137e0*/
  this->IsInitialized = 1; /*0x5137e3*/
  this->IsAllocated = 0; /*0x5137e7*/
  *this = &(void*)(void*)&VectorClass_AircraftTypeClass_const___vftable; /*0x5137ea*/
  if ( this != aP1 ) /*0x5137f0*/
  {
    VectorClass::ClearAndFree4(); /*0x5137f2*/
    v3 = aP1[2]; /*0x5137f8*/
    this->Capacity = v3; /*0x5137fd*/
    if ( v3 ) /*0x513800*/
    {
      v4 = RA2_OPNEW(4 * v3); /*0x513806*/
      this->Items = v4; /*0x513810*/
      if ( v4 ) /*0x513813*/
      {
        v5 = this->Capacity; /*0x513815*/
        v6 = 0; /*0x513818*/
        this->IsAllocated = 1; /*0x51381c*/
        if ( v5 > 0 ) /*0x513820*/
        {
          do /*0x513834*/
          {
            *(_DWORD *)(this->Items + 4 * v6) = *(_DWORD *)(aP1[1] + 4 * v6); /*0x51382b*/
            ++v6; /*0x513831*/
          }
          while ( v6 < this->Capacity ); /*0x513834*/
        }
      }
    }
    else
    {
      this->Items = 0; /*0x513838*/
      this->IsAllocated = 0; /*0x51383b*/
    }
  }
  this->q010 = aP1[4]; /*0x513841*/
  this->u32_14 = aP1[5]; /*0x513847*/
  *this = &(void*)(void*)&TypeList_AircraftTypeClass_const___vftable; /*0x51384a*/
  return this; /*0x513852*/
}
} // namespace gamemd

// 0x513860
namespace gamemd {
unsigned int * HouseTypeClass::readAllowedUnits(InfantryTypeClass * aP1)
{
  int v3; // eax
  void *v4; // eax
  int v5; // ecx
  int v6; // eax

  this->Items = 0; /*0x51386d*/
  this->Capacity = 0; /*0x513870*/
  this->IsInitialized = 1; /*0x513873*/
  this->IsAllocated = 0; /*0x513877*/
  *this = &(void*)(void*)&VectorClass_InfantryTypeClass_const___vftable; /*0x51387a*/
  if ( this != aP1 ) /*0x513880*/
  {
    Vector::Cleanup(); /*0x513882*/
    v3 = aP1[2]; /*0x513888*/
    this->Capacity = v3; /*0x51388d*/
    if ( v3 ) /*0x513890*/
    {
      v4 = RA2_OPNEW(4 * v3); /*0x513896*/
      this->Items = v4; /*0x5138a0*/
      if ( v4 ) /*0x5138a3*/
      {
        v5 = this->Capacity; /*0x5138a5*/
        v6 = 0; /*0x5138a8*/
        this->IsAllocated = 1; /*0x5138ac*/
        if ( v5 > 0 ) /*0x5138b0*/
        {
          do /*0x5138c4*/
          {
            *(_DWORD *)(this->Items + 4 * v6) = *(_DWORD *)(aP1[1] + 4 * v6); /*0x5138bb*/
            ++v6; /*0x5138c1*/
          }
          while ( v6 < this->Capacity ); /*0x5138c4*/
        }
      }
    }
    else
    {
      this->Items = 0; /*0x5138c8*/
      this->IsAllocated = 0; /*0x5138cb*/
    }
  }
  this->q010 = aP1[4]; /*0x5138d1*/
  this->u32_14 = aP1[5]; /*0x5138d7*/
  *this = &(void*)(void*)&DynamicVectorClass_InfantryTypeClass_const___vftable; /*0x5138da*/
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
  if ( g_ObjectTypeList <= 0 ) /*0x6a46dd*/
    return -1; /*0x6a4702*/
  while ( _strcmpi((const void *)(*((_DWORD *)dword_8B4124 + v1) + 36), this) ) /*0x6a46f6*/
  {
    if ( ++v1 >= g_ObjectTypeList ) /*0x6a4700*/
      return -1; /*0x6a4700*/
  }
  return v1; /*0x6a4702*/
}
}