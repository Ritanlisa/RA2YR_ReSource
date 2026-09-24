// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/VoxelAnimType_e4.hpp"

// 0x5236A0
InfantryTypeClass * * InfantryTypeClass::Constructor(ObjectClass * aP1)
{
  int v3; // eax
  bool v4; // zf
  int v5; // ecx
  _DWORD *v6; // edx
  int i; // eax

  TechnoTypeClass::ReadINI((char *)this, aP1, 0); /*0x5236ae*/
  *(_DWORD *)(this + 3576) = -1; /*0x5236b3*/
  *(_DWORD *)(this + 3580) = 1; /*0x5236bd*/
  *(_DWORD *)(this + 3584) = 7; /*0x5236c7*/
  *(_DWORD *)(this + 3644) = 0; /*0x5236d1*/
  *(_DWORD *)(this + 3648) = 0; /*0x5236d7*/
  *(_DWORD *)(this + 3652) = 0; /*0x5236e3*/
  *(_DWORD *)(this + 3656) = 0; /*0x5236ea*/
  *(_DWORD *)(this + 3660) = 0; /*0x5236f3*/
  AnimTypeVector::Constructor((_DWORD *)(this + 3664), 0, 0); /*0x5236f9*/
  *(_DWORD *)(this + 3680) = 0; /*0x523703*/
  *(_DWORD *)(this + 3684) = 10; /*0x523706*/
  *(_DWORD *)(this + 3664) = &TypeList<AnimTypeClass const *>::`vftable'; /*0x523709*/
  AnimTypeVector::Constructor((_DWORD *)(this + 3692), 0, 0); /*0x523719*/
  *(_DWORD *)(this + 3712) = 10; /*0x52371e*/
  *(_DWORD *)(this + 3708) = 0; /*0x523721*/
  *(_DWORD *)(this + 3692) = &TypeList<AnimTypeClass const *>::`vftable'; /*0x523724*/
  VectorClass::Construct((_DWORD *)(this + 3720), 0, 0); /*0x523734*/
  *(_DWORD *)(this + 3740) = 10; /*0x523739*/
  *(_DWORD *)(this + 3736) = 0; /*0x52373c*/
  *(_DWORD *)(this + 3720) = &TypeList<int>::`vftable'; /*0x52373f*/
  *(_DWORD *)(this + 3748) = -1; /*0x523748*/
  *(_DWORD *)(this + 3752) = -1; /*0x52374e*/
  *(_BYTE *)(this + 3756) = 0; /*0x523754*/
  *(_BYTE *)(this + 3757) = 0; /*0x52375a*/
  *(_BYTE *)(this + 3758) = 0; /*0x523760*/
  *(_DWORD *)(this + 3760) = 0; /*0x523766*/
  *(_BYTE *)(this + 3764) = 0; /*0x52376c*/
  *(_BYTE *)(this + 3765) = 0; /*0x523772*/
  *(_DWORD *)(this + 3768) = 1; /*0x523778*/
  *(_BYTE *)(this + 3772) = 0; /*0x523782*/
  *(_BYTE *)(this + 3773) = 1; /*0x523788*/
  *(_BYTE *)(this + 3774) = 0; /*0x52378f*/
  *(_BYTE *)(this + 3775) = 0; /*0x523795*/
  *(_BYTE *)(this + 3776) = 0; /*0x52379b*/
  *(_BYTE *)(this + 3777) = 0; /*0x5237a1*/
  *(_BYTE *)(this + 3778) = 0; /*0x5237a7*/
  *(_BYTE *)(this + 3779) = 0; /*0x5237ad*/
  *(_BYTE *)(this + 3780) = 0; /*0x5237b6*/
  *(_BYTE *)(this + 3781) = 0; /*0x5237bc*/
  *(_BYTE *)(this + 3782) = 0; /*0x5237c3*/
  *(_BYTE *)(this + 3783) = 0; /*0x5237c9*/
  *(_BYTE *)(this + 3784) = 0; /*0x5237cf*/
  *(_BYTE *)(this + 3785) = 1; /*0x5237d5*/
  *(_BYTE *)(this + 3786) = 0; /*0x5237dc*/
  *(_BYTE *)(this + 3787) = 0; /*0x5237e2*/
  *(_DWORD *)this = &InfantryTypeClass::`vftable'; /*0x5237e8*/
  *(_DWORD *)(this + 4) = &InfantryTypeClass::`vftable'; /*0x5237ee*/
  *(_DWORD *)(this + 8) = &InfantryTypeClass::`vftable'; /*0x5237f4*/
  *(_DWORD *)(this + 12) = &InfantryTypeClass::`vftable'; /*0x5237fb*/
  AbstractClass::GenerateUniqueID(this + 4); /*0x523802*/
  v3 = g_LoadScreenProgress; /*0x523807*/
  if ( g_LoadScreenProgress < dword_A8E350 /*0x523845*/
    || (byte_A8E355 || !dword_A8E350)
    && dword_A8E35C > 0
    && (v4 = (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(InfantryTypeClass_Array + 8))(
               &InfantryTypeClass_Array,
               dword_A8E350 + dword_A8E35C,
               0) == 0,
        v3 = g_LoadScreenProgress,
        !v4) )
  {
    g_LoadScreenProgress = v3 + 1; /*0x52384a*/
    *((_DWORD *)Factory_ExitCellTable + v3) = this; /*0x523854*/
    v3 = g_LoadScreenProgress; /*0x523857*/
  }
  v5 = 0; /*0x52385c*/
  if ( v3 <= 0 ) /*0x523860*/
  {
  LABEL_11:
    v5 = -1; /*0x523874*/
  }
  else
  {
    v6 = Factory_ExitCellTable; /*0x523862*/
    while ( *v6 != this ) /*0x52386a*/
    {
      ++v5; /*0x52386c*/
      ++v6; /*0x52386d*/
      if ( v5 >= v3 ) /*0x523872*/
        goto LABEL_11; /*0x523872*/
    }
  }
  *(_DWORD *)(this + 3576) = v5; /*0x52387e*/
  *(_DWORD *)(this + 3592) = 0; /*0x523886*/
  *(_DWORD *)(this + 3588) = 0; /*0x523890*/
  *(_DWORD *)(this + 3596) = 0; /*0x523896*/
  *(_DWORD *)(this + 3604) = 0; /*0x523899*/
  *(_DWORD *)(this + 3608) = 0; /*0x52389f*/
  *(_BYTE *)(this + 3612) = 0; /*0x5238a5*/
  *(_DWORD *)(this + 3600) = 0; /*0x5238ab*/
  *(_DWORD *)(this + 3616) = 0; /*0x5238b4*/
  *(_DWORD *)(this + 3632) = 0; /*0x5238ba*/
  *(_DWORD *)(this + 3620) = 0; /*0x5238c0*/
  *(_DWORD *)(this + 3636) = 0; /*0x5238c3*/
  *(_BYTE *)(this + 3640) = 0; /*0x5238c9*/
  *(_DWORD *)(this + 1816) = 8; /*0x5238cf*/
  *(_DWORD *)(this + 3624) = 0; /*0x5238d9*/
  *(_BYTE *)(this + 3227) = 0; /*0x5238dc*/
  *(_BYTE *)(this + 557) = 1; /*0x5238e2*/
  *(_BYTE *)(this + 3276) = 0; /*0x5238e9*/
  *(_DWORD *)(this + 3628) = 0; /*0x5238ef*/
  *(_BYTE *)(this + 3277) = 0; /*0x5238f2*/
  *(_BYTE *)(this + 3381) = 0; /*0x5238f8*/
  *(_BYTE *)(this + 3382) = 0; /*0x5238fe*/
  *(_BYTE *)(this + 3387) = 0; /*0x523904*/
  *(_BYTE *)(this + 3384) = 1; /*0x52390a*/
  *(_BYTE *)(this + 3479) = 1; /*0x523911*/
  *(_BYTE *)(this + 3478) = 0; /*0x523918*/
  *(_BYTE *)(this + 3374) = 0; /*0x52391e*/
  *(_DWORD *)(this + 3644) = __2_YAPAXI_Z(0x5E8u); /*0x52392c*/
  for ( i = 0; i < 1512; *(_DWORD *)(i + *(_DWORD *)(this + 3644) - 20) = 0 ) /*0x523932*/
  {
    i += 36; /*0x52393a*/
    *(_DWORD *)(i + *(_DWORD *)(this + 3644) - 36) = 0; /*0x523942*/
    *(_DWORD *)(i + *(_DWORD *)(this + 3644) - 32) = 0; /*0x52394c*/
    *(_DWORD *)(i + *(_DWORD *)(this + 3644) - 28) = 0; /*0x523956*/
    *(_DWORD *)(i + *(_DWORD *)(this + 3644) - 24) = -1; /*0x523960*/
  }
  return this; /*0x523972*/
}
// 0x523980
unsigned int * InfantryTypeClass::Constructor_523980(ObjectTypeClass * aP1)
{
  TechnoTypeClass::Construct((int)this, aP1); /*0x523988*/
  *(this + 916) = &TypeList<AnimTypeClass const *>::`vftable'; /*0x523992*/
  *(this + 923) = &TypeList<AnimTypeClass const *>::`vftable'; /*0x523998*/
  *(this + 930) = &TypeList<int>::`vftable'; /*0x52399e*/
  *this = &InfantryTypeClass::`vftable'; /*0x5239a8*/
  *(this + 1) = &InfantryTypeClass::`vftable'; /*0x5239ae*/
  *(this + 2) = &InfantryTypeClass::`vftable'; /*0x5239b5*/
  *(this + 3) = &InfantryTypeClass::`vftable'; /*0x5239bc*/
  return this; /*0x5239c5*/
}
// 0x523B40
int InfantryTypeClass::CreateInfantry(short * a2, AbstractClass * ppv)
{
  void *v4; // eax
  int v5; // esi
  int v6; // eax
  _DWORD *v7; // eax
  int *v8; // eax
  int v9; // ecx
  int v10; // edx
  _DWORD v12[3]; // [esp+4h] [ebp-24h] BYREF
  _DWORD v13[3]; // [esp+10h] [ebp-18h] BYREF
  int v14[3]; // [esp+1Ch] [ebp-Ch] BYREF

  v4 = __2_YAPAXI_Z(0x6F0u); /*0x523b4b*/
  if ( v4 ) /*0x523b55*/
  {
    v5 = InfantryClass::Construct((int)v4, (int)this, ppv); /*0x523b68*/
    if ( v5 ) /*0x523b6c*/
    {
      v6 = a2[1] << 8; /*0x523b85*/
      v12[0] = (*a2 << 8) + 128; /*0x523b93*/
      v12[1] = v6 + 128; /*0x523b9b*/
      v12[2] = 0; /*0x523bb1*/
      v7 = Coord::To_Cell(&MapClass_Instance, v12); /*0x523bb9*/
      v8 = ObjectPlacement::CalcPosition(v7, v14, v12, 0, 0, 0); /*0x523bc0*/
      v13[0] = *v8; /*0x523bcf*/
      v9 = v8[1]; /*0x523bd5*/
      v13[1] = v9; /*0x523bd9*/
      v10 = v8[2]; /*0x523bdd*/
      v13[2] = v10; /*0x523be0*/
      if ( v13[0] != dword_A8F280 || v9 != dword_A8F284 || v10 != dword_A8F288 ) /*0x523bf4*/
        return (*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)v5 + 216))(v5, v13, 64); /*0x523c0b*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 32))(v5, 1); /*0x523c14*/
    }
  }
  return 0; /*0x523c07*/
}
// 0x5240A0
int InfantryTypeClass::LoadFromINI(unsigned char *** a2)
{
  int PipIdx; // eax
  int v5; // ebx
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  unsigned __int8 *inited; // eax
  void ***v10; // eax
  char *i; // eax
  int v12; // ecx
  int v13; // edx
  char *j; // eax
  char Bool_Overwrite; // al
  int v16; // ebx
  int Index; // eax
  int v18; // ebx
  int v19; // eax
  char v20; // al
  char v21; // cl
  char v22; // al
  char v23; // al
  char v24; // cl
  char v25; // al
  int Int_Overwrite; // eax
  char v27; // cl
  char v28; // al
  char v29; // al
  char v30; // cl
  char v31; // al
  char v32; // al
  char v33; // cl
  char v34; // al
  char v35; // al
  char v36; // cl
  char v37; // al
  char v38; // al
  int v39; // eax
  int v40; // ecx
  int v41; // eax
  void **v43[2]; // [esp-1Ch] [ebp-E8h] BYREF
  unsigned __int8 *v44; // [esp-14h] [ebp-E0h]
  char *v45; // [esp-10h] [ebp-DCh]
  char *v46; // [esp-Ch] [ebp-D8h]
  char *v47; // [esp-8h] [ebp-D4h]
  int v48; // [esp-4h] [ebp-D0h]
  void ***IntList; // [esp+10h] [ebp-BCh] BYREF
  _DWORD v50[7]; // [esp+14h] [ebp-B8h] BYREF
  _DWORD v51[6]; // [esp+30h] [ebp-9Ch] BYREF
  int v52; // [esp+48h] [ebp-84h]
  char String[128]; // [esp+4Ch] [ebp-80h] BYREF

  INIClass::ResetSection(a2); /*0x5240b5*/
  v48 = (int)a2; /*0x5240ba*/
  *(_BYTE *)(a1 + 3215) = 0; /*0x5240bd*/
  if ( !ObjectTypeClass::LoadExtras(a1, a2, (unsigned __int8 ***)v48) ) /*0x5240c4*/
    return 0; /*0x524751*/
  *(_DWORD *)(a1 + 3580) = INIClass::GetPipIdx(a1 + 36, aPip, *(_DWORD *)(a1 + 3580)); /*0x5240e8*/
  PipIdx = INIClass::GetPipIdx(a1 + 36, aOccupypip, *(_DWORD *)(a1 + 3584)); /*0x5240fd*/
  v5 = *(_DWORD *)(a1 + 3588); /*0x524102*/
  v48 = 128; /*0x52410c*/
  v47 = String; /*0x524111*/
  v46 = &g_INI_DefaultBuffer; /*0x524112*/
  v45 = aOccupyweapon; /*0x524117*/
  v44 = (unsigned __int8 *)(a1 + 36); /*0x52411c*/
  *(_DWORD *)(a1 + 3584) = PipIdx; /*0x52411f*/
  if ( INIClass::GetString(a2, v44, (unsigned __int8 *)v45, v46, v47, v48) ) /*0x524125*/
    v6 = InfantryTypeClass::Find(String); /*0x524132*/
  else
    v6 = v5; /*0x524139*/
  v7 = *(_DWORD *)(a1 + 3616); /*0x52413b*/
  *(_DWORD *)(a1 + 3588) = v6; /*0x524141*/
  if ( INIClass::GetString( /*0x52415e*/
         a2,
         (unsigned __int8 *)(a1 + 36),
         (unsigned __int8 *)aEliteoccupywea,
         &g_INI_DefaultBuffer,
         String,
         128) )
  {
    v8 = InfantryTypeClass::Find(String); /*0x52416b*/
  }
  else
  {
    v8 = v7; /*0x524172*/
  }
  *(_DWORD *)(a1 + 3616) = v8; /*0x52417f*/
  IntList = v43; /*0x524186*/
  DynamicVectorClass::Copy(v43, (_DWORD *)(a1 + 3720)); /*0x52418a*/
  *IntList = &TypeList<int>::`vftable'; /*0x524198*/
  inited = (unsigned __int8 *)__0Iostream_init_QAE_XZ_4((Iostream_init *)(a1 + 36)); /*0x5241a0*/
  IntList = (void ***)GetINIClassIntList( /*0x5241b4*/
                        (int)v50,
                        a2,
                        inited,
                        (unsigned __int8 *)aVoicecomment,
                        v43[0],
                        v43[1],
                        (int)v44,
                        (__int16)v45,
                        (int)v46,
                        (int)v47,
                        v48);
  TypeList::Copy((_DWORD *)(a1 + 3720), IntList); /*0x5241b8*/
  v10 = IntList; /*0x5241bd*/
  *(_DWORD *)(a1 + 3736) = IntList[4]; /*0x5241c4*/
  *(_DWORD *)(a1 + 3740) = v10[5]; /*0x5241ca*/
  *(_DWORD *)(a1 + 3744) = v10[6]; /*0x5241d4*/
  v50[0] = &VectorClass<int>::`vftable'; /*0x5241d7*/
  VectorClass::Destroy((int)v50); /*0x5241df*/
  if ( INIClass::GetString( /*0x5241fb*/
         a2,
         (unsigned __int8 *)(a1 + 36),
         (unsigned __int8 *)aDeadbodies,
         &g_INI_DefaultBuffer,
         String,
         128) )
  {
    DynamicVectorClass::AnimTypeConstructor(v50, 0, 0); /*0x524210*/
    v50[0] = &TypeList<AnimTypeClass const *>::`vftable'; /*0x52421f*/
    for ( i = strtok(String, Delimiter); i; i = strtok(0, Delimiter) ) /*0x524231*/
    {
      if ( !*i ) /*0x524233*/
        break; /*0x524236*/
      IntList = (void ***)AnimTypeClass::FindOrCreate(i); /*0x524241*/
      if ( IntList ) /*0x524245*/
        DynamicVector::Add_Alt4(v50, &IntList); /*0x524250*/
    }
    TypeList::AnimTypeCopy(v51, v50); /*0x524271*/
    v50[0] = &VectorClass<AnimTypeClass const *>::`vftable'; /*0x52427a*/
    DynamicVectorClass::Destroy_Alt((int)v50); /*0x524282*/
  }
  else
  {
    TypeList::AnimTypeCopy(v51, (_DWORD *)(a1 + 3664)); /*0x524294*/
  }
  VectorClass::CopyDefault((_DWORD *)(a1 + 3664), v51); /*0x5242a6*/
  v12 = v51[5]; /*0x5242af*/
  v13 = v52; /*0x5242b3*/
  *(_DWORD *)(a1 + 3680) = v51[4]; /*0x5242b7*/
  *(_DWORD *)(a1 + 3684) = v12; /*0x5242ba*/
  *(_DWORD *)(a1 + 3688) = v13; /*0x5242bd*/
  v51[0] = &VectorClass<AnimTypeClass const *>::`vftable'; /*0x5242c9*/
  DynamicVectorClass::Destroy_Alt((int)v51); /*0x5242cd*/
  if ( INIClass::GetString( /*0x5242e9*/
         a2,
         (unsigned __int8 *)(a1 + 36),
         (unsigned __int8 *)aDeathanims,
         &g_INI_DefaultBuffer,
         String,
         128) )
  {
    DynamicVectorClass::AnimTypeConstructor(v50, 0, 0); /*0x5242fa*/
    v50[0] = &TypeList<AnimTypeClass const *>::`vftable'; /*0x524309*/
    for ( j = strtok(String, Delimiter); j; j = strtok(0, Delimiter) ) /*0x52431b*/
    {
      if ( !*j ) /*0x52431d*/
        break; /*0x524320*/
      IntList = (void ***)AnimTypeClass::FindOrCreate(j); /*0x52432b*/
      if ( IntList ) /*0x52432f*/
        DynamicVector::Add_Alt4(v50, &IntList); /*0x52433a*/
    }
    TypeList::AnimTypeCopy(v51, v50); /*0x52435b*/
    v50[0] = &VectorClass<AnimTypeClass const *>::`vftable'; /*0x524364*/
    DynamicVectorClass::Destroy_Alt((int)v50); /*0x524368*/
  }
  else
  {
    TypeList::AnimTypeCopy(v51, (_DWORD *)(a1 + 3692)); /*0x52437a*/
  }
  InfantryTypeClass::CopyDataArray(v51); /*0x52438c*/
  *(_DWORD *)(a1 + 3716) = v52; /*0x524399*/
  v51[0] = &VectorClass<AnimTypeClass const *>::`vftable'; /*0x52439c*/
  DynamicVectorClass::Destroy_Alt((int)v51); /*0x5243a4*/
  Bool_Overwrite = INIClass::ReadBool_Overwrite(a1 + 36, aCyborg, *(_BYTE *)(a1 + 3756)); /*0x5243b8*/
  LOBYTE(v48) = *(_BYTE *)(a1 + 3757); /*0x5243c5*/
  v47 = aNothuman; /*0x5243c6*/
  v46 = (char *)(a1 + 36); /*0x5243cb*/
  *(_BYTE *)(a1 + 3756) = Bool_Overwrite; /*0x5243cc*/
  *(_BYTE *)(a1 + 3757) = INIClass::ReadBool_Overwrite(v46, v47, v48); /*0x5243d7*/
  if ( *(_BYTE *)(a1 + 3756) ) /*0x5243dd*/
    *(_BYTE *)(a1 + 3215) = 1; /*0x5243e7*/
  v16 = *(_DWORD *)(a1 + 3748); /*0x5243ee*/
  if ( !INIClass::GetString( /*0x524420*/
          a2,
          (unsigned __int8 *)(a1 + 36),
          (unsigned __int8 *)aEnterwatersoun,
          &g_INI_DefaultBuffer,
          String,
          128)
    || (Index = VocClass::FindIndex(String), Index == -1) )
  {
    Index = v16; /*0x524422*/
  }
  v18 = *(_DWORD *)(a1 + 3752); /*0x524424*/
  v48 = 128; /*0x52442e*/
  v47 = String; /*0x524433*/
  v46 = &g_INI_DefaultBuffer; /*0x524434*/
  v45 = aLeavewatersoun; /*0x524439*/
  v44 = (unsigned __int8 *)(a1 + 36); /*0x52443e*/
  *(_DWORD *)(a1 + 3748) = Index; /*0x524441*/
  if ( !INIClass::GetString(a2, v44, (unsigned __int8 *)v45, v46, v47, v48) /*0x52445c*/
    || (v19 = VocClass::FindIndex(String), v19 == -1) )
  {
    v19 = v18; /*0x52445e*/
  }
  LOBYTE(v48) = *(_BYTE *)(a1 + 3772); /*0x524468*/
  v47 = aFearless; /*0x524469*/
  v46 = (char *)(a1 + 36); /*0x52446e*/
  *(_DWORD *)(a1 + 3752) = v19; /*0x52446f*/
  *(_BYTE *)(a1 + 3772) = INIClass::ReadBool_Overwrite(v46, v47, v48); /*0x52447a*/
  v20 = INIClass::ReadBool_Overwrite(a1 + 36, aFraidycat, *(_BYTE *)(a1 + 3775)); /*0x52448f*/
  v21 = *(_BYTE *)(a1 + 3774); /*0x524494*/
  *(_BYTE *)(a1 + 3775) = v20; /*0x52449a*/
  v22 = INIClass::ReadBool_Overwrite(a1 + 36, aInfiltrate, v21); /*0x5244a9*/
  LOBYTE(v48) = *(_BYTE *)(a1 + 3758); /*0x5244b6*/
  v47 = aIvan; /*0x5244b7*/
  v46 = (char *)(a1 + 36); /*0x5244bc*/
  *(_BYTE *)(a1 + 3774) = v22; /*0x5244bd*/
  *(_BYTE *)(a1 + 3758) = INIClass::ReadBool_Overwrite(v46, v47, v48); /*0x5244c8*/
  v23 = INIClass::ReadBool_Overwrite(a1 + 36, aOccupier, *(_BYTE *)(a1 + 3764)); /*0x5244dd*/
  v24 = *(_BYTE *)(a1 + 3765); /*0x5244e2*/
  *(_BYTE *)(a1 + 3764) = v23; /*0x5244e8*/
  v25 = INIClass::ReadBool_Overwrite(a1 + 36, aAssaulter, v24); /*0x5244f7*/
  v48 = *(_DWORD *)(a1 + 3760); /*0x524504*/
  v47 = aDetectiondista; /*0x524505*/
  v46 = (char *)(a1 + 36); /*0x52450a*/
  *(_BYTE *)(a1 + 3765) = v25; /*0x52450b*/
  *(_DWORD *)(a1 + 3760) = INIClass::ReadInt_Overwrite(v46, v47, v48); /*0x524516*/
  Int_Overwrite = INIClass::ReadInt_Overwrite(a1 + 36, aHarvestrate, *(_DWORD *)(a1 + 3768)); /*0x52452b*/
  v27 = *(_BYTE *)(a1 + 3778); /*0x524530*/
  *(_DWORD *)(a1 + 3768) = Int_Overwrite; /*0x524536*/
  v28 = INIClass::ReadBool_Overwrite(a1 + 36, aC4, v27); /*0x524545*/
  LOBYTE(v48) = *(_BYTE *)(a1 + 3777); /*0x524552*/
  v47 = g_INI_Key_Civilian; /*0x524553*/
  v46 = (char *)(a1 + 36); /*0x524558*/
  *(_BYTE *)(a1 + 3778) = v28; /*0x524559*/
  *(_BYTE *)(a1 + 3777) = INIClass::ReadBool_Overwrite(v46, v47, v48); /*0x524564*/
  v29 = INIClass::ReadBool_Overwrite(a1 + 36, aEngineer, *(_BYTE *)(a1 + 3779)); /*0x524579*/
  v30 = *(_BYTE *)(a1 + 3776); /*0x52457e*/
  *(_BYTE *)(a1 + 3779) = v29; /*0x524584*/
  v31 = INIClass::ReadBool_Overwrite(a1 + 36, aTiberiumproof, v30); /*0x524593*/
  LOBYTE(v48) = *(_BYTE *)(a1 + 3780); /*0x5245a0*/
  v47 = aAgent; /*0x5245a1*/
  v46 = (char *)(a1 + 36); /*0x5245a6*/
  *(_BYTE *)(a1 + 3776) = v31; /*0x5245a7*/
  *(_BYTE *)(a1 + 3780) = INIClass::ReadBool_Overwrite(v46, v47, v48); /*0x5245b2*/
  v32 = INIClass::ReadBool_Overwrite(a1 + 36, aThief, *(_BYTE *)(a1 + 3781)); /*0x5245c7*/
  v33 = *(_BYTE *)(a1 + 3782); /*0x5245cc*/
  *(_BYTE *)(a1 + 3781) = v32; /*0x5245d2*/
  v34 = INIClass::ReadBool_Overwrite(a1 + 36, aVehiclethief, v33); /*0x5245e1*/
  LOBYTE(v48) = *(_BYTE *)(a1 + 3783); /*0x5245ee*/
  v47 = aDoggie; /*0x5245ef*/
  v46 = (char *)(a1 + 36); /*0x5245f4*/
  *(_BYTE *)(a1 + 3782) = v34; /*0x5245f5*/
  *(_BYTE *)(a1 + 3783) = INIClass::ReadBool_Overwrite(v46, v47, v48); /*0x524600*/
  v35 = INIClass::ReadBool_Overwrite(a1 + 36, aDeployer, *(_BYTE *)(a1 + 3784)); /*0x524615*/
  v36 = *(_BYTE *)(a1 + 3785); /*0x52461a*/
  *(_BYTE *)(a1 + 3784) = v35; /*0x524620*/
  v37 = INIClass::ReadBool_Overwrite(a1 + 36, aDeployedcrusha, v36); /*0x52462f*/
  LOBYTE(v48) = *(_BYTE *)(a1 + 3786); /*0x52463c*/
  v47 = aUseownname; /*0x52463d*/
  v46 = (char *)(a1 + 36); /*0x524642*/
  *(_BYTE *)(a1 + 3785) = v37; /*0x524643*/
  *(_BYTE *)(a1 + 3786) = INIClass::ReadBool_Overwrite(v46, v47, v48); /*0x52464e*/
  *(_BYTE *)(a1 + 3787) = INIClass::ReadBool_Overwrite(a1 + 36, aJumpjetturn, *(_BYTE *)(a1 + 3787)); /*0x524668*/
  if ( *(_BYTE *)(a1 + 3778) ) /*0x52466e*/
    *(_BYTE *)(a1 + 3774) = 1; /*0x524678*/
  if ( *(_BYTE *)(a1 + 3779) ) /*0x52467f*/
    *(_BYTE *)(a1 + 3774) = 1; /*0x524689*/
  if ( *(_BYTE *)(a1 + 3780) ) /*0x524690*/
    *(_BYTE *)(a1 + 3774) = 1; /*0x52469a*/
  v38 = INIClass::ReadBool_Overwrite(a1 + 504, aCrawls, *(_BYTE *)(a1 + 3773)); /*0x5246b9*/
  v48 = *(_DWORD *)(a1 + 3648); /*0x5246c9*/
  v47 = aFireup; /*0x5246ca*/
  v46 = (char *)(a1 + 504); /*0x5246cf*/
  *(_BYTE *)(a1 + 3773) = v38; /*0x5246d0*/
  *(_DWORD *)(a1 + 3648) = INIClass::ReadInt_Overwrite(v46, v47, v48); /*0x5246db*/
  v39 = INIClass::ReadInt_Overwrite(a1 + 504, aFireprone, *(_DWORD *)(a1 + 3652)); /*0x5246f3*/
  v40 = *(_DWORD *)(a1 + 3656); /*0x5246f8*/
  *(_DWORD *)(a1 + 3652) = v39; /*0x5246fe*/
  v41 = INIClass::ReadInt_Overwrite(a1 + 504, aSecondaryfire, v40); /*0x524710*/
  v48 = *(_DWORD *)(a1 + 3660); /*0x524720*/
  v47 = g_INI_Key_SecondaryProne; /*0x524721*/
  v46 = (char *)(a1 + 504); /*0x524726*/
  *(_DWORD *)(a1 + 3656) = v41; /*0x524727*/
  *(_DWORD *)(a1 + 3660) = INIClass::ReadInt_Overwrite(v46, v47, v48); /*0x524734*/
  AnimSequence::Parse(a1); /*0x52473a*/
  return 1; /*0x524741*/
}
// 0x524960
namespace gamemd {
ObjectTypeClass * * InfantryTypeClass_LoadTypeData()
{
  _DWORD *v4; // edi
  int v5; // ebx
  int v6; // esi
  int result; // eax
  int i; // ebx
  int j; // ebx
  int k; // ebx
  int m; // ebx
  void *v12; // eax
  int v13; // [esp+70h] [ebp-4h]

  v4 = (_DWORD *)a2; /*0x524964*/
  v5 = 0; /*0x524968*/
  if ( *(_DWORD *)(a2 + 3644) ) /*0x52496a*/
  {
    __3_YAXPAX_Z(*(void **)(a2 + 3644)); /*0x524975*/
    v4[911] = 0; /*0x52497d*/
  }
  v6 = a3; /*0x524983*/
  result = TechnoTypeClass::SaveLoad_Prefix((int)v4, a3); /*0x524989*/
  v13 = result; /*0x524990*/
  if ( result >= 0 ) /*0x524994*/
  {
    if ( v4 ) /*0x52499c*/
      InfantryTypeClass::Constructor_523980(v4, (int)&a2); /*0x5249a5*/
    VoxelAnimType::LoadAnim((char *)v4); /*0x5249ad*/
    ObjectTypeClass::Load2DArt((char *)v4); /*0x5249b4*/
    if ( v4 != (_DWORD *)-3720 ) /*0x5249c1*/
    {
      DynamicVectorClass::Construct(v4 + 930, 0, 0); /*0x5249c7*/
      v4[930] = &TypeList<int>::`vftable'; /*0x5249cc*/
    }
    (*(void (__stdcall **)(int, int *, int, _DWORD, int))(*(_DWORD *)v6 + 12))(v6, &a2, 4, 0, a1); /*0x5249de*/
    if ( a3 > 0 ) /*0x5249e7*/
    {
      do /*0x524a09*/
      {
        (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v6 + 12))(v6, &a4, 4, 0); /*0x5249f5*/
        DynamicVector::Add_Alt(v4 + 930, &a4); /*0x5249ff*/
        ++v5; /*0x524a04*/
      }
      while ( v5 < a3 ); /*0x524a09*/
    }
    if ( v4 != (_DWORD *)-3664 ) /*0x524a13*/
    {
      DynamicVectorClass::AnimTypeConstructor(v4 + 916, 0, 0); /*0x524a1b*/
      v4[916] = &TypeList<AnimTypeClass const *>::`vftable'; /*0x524a20*/
    }
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v6 + 12))(v6, &a3, 4, 0); /*0x524a33*/
    for ( i = 0; i < a3; ++i ) /*0x524a3e*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v6 + 12))(v6, &a4, 4, 0); /*0x524a4c*/
      DynamicVector::Add_Alt4(v4 + 916, &a4); /*0x524a56*/
    }
    for ( j = 0; j < v4[920]; ++j ) /*0x524a6c*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v4[917] + 4 * j)); /*0x524a7d*/
    if ( v4 != (_DWORD *)-3692 ) /*0x524a95*/
    {
      DynamicVectorClass::AnimTypeConstructor(v4 + 923, 0, 0); /*0x524a9d*/
      v4[923] = &TypeList<AnimTypeClass const *>::`vftable'; /*0x524aa2*/
    }
    (*(void (__stdcall **)(int, int *, int))(*(_DWORD *)v6 + 12))(v6, &a3, 4); /*0x524ab5*/
    for ( k = 0; k < a2; ++k ) /*0x524ac0*/
    {
      (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v6 + 12))(v6, &a3, 4, 0); /*0x524ace*/
      DynamicVector::Add_Alt4(v4 + 923, &a3); /*0x524ad8*/
    }
    for ( m = 0; m < v4[927]; ++m ) /*0x524aef*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v4[924] + 4 * m)); /*0x524b00*/
    v12 = __2_YAPAXI_Z(0x5E8u); /*0x524b15*/
    v4[911] = v12; /*0x524b1d*/
    (*(void (__stdcall **)(int, void *, int, _DWORD))(*(_DWORD *)v6 + 12))(v6, v12, 1512, 0); /*0x524b2e*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v4 + 897); /*0x524b3d*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, v4 + 904); /*0x524b4e*/
    return v13; /*0x524b53*/
  }
  return result; /*0x524b57*/
}
}
// 0x524B60
namespace gamemd {
TechnoTypeClass * * InfantryTypeClass_SaveLoad_Prefix()
{
  int result; // eax
  int v6; // ebp
  int v7; // edx
  int i; // ebx
  int v9; // edx
  int j; // ebx
  int v11; // edx
  int k; // ebx

  result = TechnoTypeClass::SaveLoad_Prefix_0(a2, a3, a4); /*0x524b72*/
  v6 = result; /*0x524b77*/
  if ( result >= 0 ) /*0x524b7b*/
  {
    v7 = *a3; /*0x524b87*/
    a4 = a2[934]; /*0x524b94*/
    (*(void (__stdcall **)(int *, int *, int, _DWORD, int))(v7 + 16))(a3, &a4, 4, 0, a1); /*0x524b98*/
    for ( i = 0; i < a5; ++i ) /*0x524ba3*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a3 + 16))(a3, a2[931] + 4 * i, 4, 0); /*0x524bb6*/
    v9 = *a3; /*0x524bc6*/
    a5 = a2[920]; /*0x524bd2*/
    (*(void (__stdcall **)(int *, int *, int, _DWORD))(v9 + 16))(a3, &a5, 4, 0); /*0x524bd6*/
    for ( j = 0; j < a5; ++j ) /*0x524be1*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a3 + 16))(a3, a2[917] + 4 * j, 4, 0); /*0x524bf4*/
    v11 = *a3; /*0x524c04*/
    a5 = a2[927]; /*0x524c10*/
    (*(void (__stdcall **)(int *, int *, int, _DWORD))(v11 + 16))(a3, &a5, 4, 0); /*0x524c14*/
    for ( k = 0; k < a5; ++k ) /*0x524c1f*/
      (*(void (__stdcall **)(int *, int, int, _DWORD))(*a3 + 16))(a3, a2[924] + 4 * k, 4, 0); /*0x524c32*/
    (*(void (__stdcall **)(int *, _DWORD, int))(*a3 + 16))(a3, a2[911], 1512); /*0x524c4d*/
    return v6; /*0x524c52*/
  }
  return result; /*0x524c51*/
}
}
// 0x524D70
InfantryTypeClass * InfantryTypeClass::ddtor(char a2)
{
  int v3; // eax
  void *v4; // eax
  void *v5; // eax
  void *v6; // eax
  int v8; // [esp+4h] [ebp-4h] BYREF

  *(_DWORD *)this = &InfantryTypeClass::`vftable'; /*0x524d76*/
  *(_DWORD *)(this + 4) = &InfantryTypeClass::`vftable'; /*0x524d7c*/
  *(_DWORD *)(this + 8) = &InfantryTypeClass::`vftable'; /*0x524d83*/
  *(_DWORD *)(this + 12) = &InfantryTypeClass::`vftable'; /*0x524d8a*/
  AbstractClass::AnnounceExpiredPointer((void **)this, 1); /*0x524d91*/
  v8 = this; /*0x524da6*/
  v3 = (*(int (__thiscall **)(int *, int *))(InfantryTypeClass_Array + 16))(&InfantryTypeClass_Array, &v8); /*0x524daa*/
  if ( v3 != -1 && v3 < g_LoadScreenProgress && v3 < --g_LoadScreenProgress ) /*0x524dc5*/
  {
    do /*0x524ddd*/
    {
      ++v3; /*0x524dcd*/
      *((_DWORD *)Factory_ExitCellTable + v3 - 1) = *((_DWORD *)Factory_ExitCellTable + v3); /*0x524dd1*/
    }
    while ( v3 < g_LoadScreenProgress ); /*0x524ddd*/
  }
  __3_YAXPAX_Z(*(void **)(this + 3644)); /*0x524de7*/
  *(_DWORD *)(this + 3644) = 0; /*0x524df1*/
  v4 = *(void **)(this + 3724); /*0x524df7*/
  *(_DWORD *)(this + 3720) = &VectorClass<int>::`vftable'; /*0x524dff*/
  if ( v4 && *(_BYTE *)(this + 3733) ) /*0x524e0b*/
  {
    __3_YAXPAX_Z(v4); /*0x524e14*/
    *(_DWORD *)(this + 3724) = 0; /*0x524e1c*/
  }
  *(_BYTE *)(this + 3733) = 0; /*0x524e22*/
  *(_DWORD *)(this + 3728) = 0; /*0x524e28*/
  v5 = *(void **)(this + 3696); /*0x524e2e*/
  *(_DWORD *)(this + 3692) = &VectorClass<AnimTypeClass const *>::`vftable'; /*0x524e34*/
  if ( v5 && *(_BYTE *)(this + 3705) ) /*0x524e42*/
  {
    __3_YAXPAX_Z(v5); /*0x524e4b*/
    *(_DWORD *)(this + 3696) = 0; /*0x524e53*/
  }
  *(_BYTE *)(this + 3705) = 0; /*0x524e59*/
  *(_DWORD *)(this + 3700) = 0; /*0x524e5f*/
  v6 = *(void **)(this + 3668); /*0x524e65*/
  *(_DWORD *)(this + 3664) = &VectorClass<AnimTypeClass const *>::`vftable'; /*0x524e6b*/
  if ( v6 && *(_BYTE *)(this + 3677) ) /*0x524e79*/
  {
    __3_YAXPAX_Z(v6); /*0x524e82*/
    *(_DWORD *)(this + 3668) = 0; /*0x524e8a*/
  }
  *(_BYTE *)(this + 3677) = 0; /*0x524e92*/
  *(_DWORD *)(this + 3672) = 0; /*0x524e98*/
  TechnoTypeClass::DTOR(this); /*0x524e9e*/
  if ( (a2 & 1) != 0 ) /*0x524eaa*/
    __3_YAXPAX_Z((void *)this); /*0x524ead*/
  return this; /*0x524eb7*/
}
// 0x524F20
unsigned int * InfantryTypeClass::CopyDataArray(DynamicVector * aP1)
{
  int v3; // eax
  void *v4; // eax
  int v5; // ecx
  int v6; // eax

  if ( this == aP1 ) /*0x524f2a*/
    goto LABEL_8; /*0x524f2a*/
  (*(void (__thiscall **)(_DWORD *))(*this + 12))(this); /*0x524f2e*/
  v3 = aP1[2]; /*0x524f31*/
  *(this + 2) = v3; /*0x524f36*/
  if ( !v3 ) /*0x524f39*/
  {
    *(this + 1) = 0; /*0x524f86*/
    *((_BYTE *)this + 13) = 0; /*0x524f8d*/
  LABEL_8:
    *(this + 4) = aP1[4]; /*0x524f91*/
    *(this + 5) = aP1[5]; /*0x524f9a*/
    return this; /*0x524f9d*/
  }
  v4 = __2_YAPAXI_Z(4 * v3); /*0x524f43*/
  *(this + 1) = v4; /*0x524f4b*/
  if ( !v4 ) /*0x524f50*/
    goto LABEL_8; /*0x524f50*/
  v5 = *(this + 2); /*0x524f52*/
  v6 = 0; /*0x524f55*/
  *((_BYTE *)this + 13) = 1; /*0x524f59*/
  if ( v5 <= 0 ) /*0x524f5d*/
    goto LABEL_8; /*0x524f5d*/
  do /*0x524f71*/
  {
    *(_DWORD *)(*(this + 1) + 4 * v6) = *(_DWORD *)(aP1[1] + 4 * v6); /*0x524f68*/
    ++v6; /*0x524f6e*/
  }
  while ( v6 < *(this + 2) ); /*0x524f71*/
  *(this + 4) = aP1[4]; /*0x524f76*/
  *(this + 5) = aP1[5]; /*0x524f7c*/
  return this; /*0x524f81*/
}
// 0x772FA0
WeaponTypeClass * * InfantryTypeClass::Find()
{
  int v2; // esi

  if ( !_strcmpi(g_Str__none_, Source) || !_strcmpi(g_Str_none, Source) ) /*0x772fbc*/
    return 0; /*0x77301f*/
  v2 = 0; /*0x772fcd*/
  if ( g_WeaponTypePool <= 0 ) /*0x772fd1*/
  {
  LABEL_6:
    if ( __2_YAPAXI_Z(0x160u) ) /*0x772ffb*/
      return WeaponTypeClass::Constructor(Source); /*0x773011*/
    return 0; /*0x773005*/
  }
  while ( _strcmpi((const void *)(*((_DWORD *)g_WeaponTypeConfig + v2) + 36), Source) ) /*0x772fea*/
  {
    if ( ++v2 >= g_WeaponTypePool ) /*0x772ff4*/
      goto LABEL_6; /*0x772ff4*/
  }
  return *((_DWORD *)g_WeaponTypeConfig + v2); /*0x77300f*/
}
// 0x523B10
InfantryClass * InfantryTypeClass::ConstructInfantry(AbstractClass * ppv)
{
  void *v3; // eax

  v3 = __2_YAPAXI_Z(0x6F0u); /*0x523b18*/
  if ( v3 ) /*0x523b22*/
    return InfantryClass::Construct((int)v3, (int)this, ppv); /*0x523b2c*/
  else
    return 0; /*0x523b35*/
}
// 0x523C20
int * InfantryTypeClass::GetDimensions(int a1)
{
  if ( (byte_A8F2C8 & 1) == 0 ) /*0x523c2b*/
  {
    byte_A8F2C8 |= 1u; /*0x523c46*/
    dword_A8F28C = 0; /*0x523c4c*/
    dword_A8F290 = 2147450879; /*0x523c64*/
    atexit(nullsub_147); /*0x523c6a*/
  }
  return &dword_A8F28C; /*0x523c78*/
}
// 0x524760
unsigned int * InfantryTypeClass::GetDefaultDimensions(unsigned int * a1)
{
  int v1; // esi

  v1 = 2 * dword_A8F2CC; /*0x52476c*/
  *a1 = 85; /*0x524777*/
  a1[1] = 85; /*0x524779*/
  a1[2] = v1; /*0x52477c*/
  return a1; /*0x52477f*/
}
// 0x524790
int InfantryTypeClass::GetGameplayValue()
{
  return g_RulesClass_Instance[1].DrainMoneyFrameDelay; /*0x52479b*/
}
// 0x5247A0
int InfantryTypeClass::StubReturnFalse()
{
  return 0; /*0x5247a2*/
}
// 0x5247D0
unsigned int * InfantryTypeClass::ClampToGroundHeight(unsigned int * a1, int * a2)
{
  int GroundHeight; // eax
  int v3; // ecx
  int v5; // [esp+0h] [ebp-Ch] BYREF
  int v6; // [esp+4h] [ebp-8h]
  int v7; // [esp+8h] [ebp-4h]

  v5 = *a2; /*0x5247d9*/
  v6 = a2[1]; /*0x5247ea*/
  v7 = a2[2]; /*0x5247f1*/
  GroundHeight = Cell::GetGroundHeight(&v5); /*0x5247f5*/
  v3 = v7; /*0x5247fa*/
  if ( v7 < GroundHeight ) /*0x524800*/
    v3 = Cell::GetGroundHeight(&v5); /*0x524811*/
  *a1 = v5; /*0x52481e*/
  a1[1] = v6; /*0x524824*/
  a1[2] = v3; /*0x524828*/
  return a1; /*0x52482b*/
}
// 0x524840
int InfantryTypeClass::PowerDrainUpdate(int * a2)
{
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  int v13; // edx

  BuildingTypeClass::ProcessPower(this, a2); /*0x524849*/
  Power::TimerProcess(*(_DWORD *)(this + 3580)); /*0x524857*/
  Checksummer::Add_Buffer((unsigned int *)a2, *(unsigned __int8 **)(this + 3644), 1512); /*0x52486a*/
  Power::TimerProcess(*(_DWORD *)(this + 3648)); /*0x524878*/
  Power::TimerProcess(*(_DWORD *)(this + 3652)); /*0x524886*/
  Power::TimerProcess(*(_DWORD *)(this + 3736)); /*0x524894*/
  Power::TimerProcess(*(_DWORD *)(this + 3680)); /*0x5248a2*/
  Power::TimerProcess(*(_DWORD *)(this + 3708)); /*0x5248b0*/
  LOBYTE(v3) = *(_BYTE *)(this + 3772); /*0x5248b5*/
  Power::FlagProcess(a2, v3); /*0x5248be*/
  LOBYTE(v4) = *(_BYTE *)(this + 3773); /*0x5248c3*/
  v5 = Power::FlagProcess(a2, v4); /*0x5248cc*/
  LOBYTE(v5) = *(_BYTE *)(this + 3774); /*0x5248d1*/
  Power::FlagProcess(a2, v5); /*0x5248da*/
  LOBYTE(v6) = *(_BYTE *)(this + 3775); /*0x5248df*/
  Power::FlagProcess(a2, v6); /*0x5248e8*/
  LOBYTE(v7) = *(_BYTE *)(this + 3776); /*0x5248ed*/
  v8 = Power::FlagProcess(a2, v7); /*0x5248f6*/
  LOBYTE(v8) = *(_BYTE *)(this + 3777); /*0x5248fb*/
  Power::FlagProcess(a2, v8); /*0x524904*/
  LOBYTE(v9) = *(_BYTE *)(this + 3778); /*0x524909*/
  Power::FlagProcess(a2, v9); /*0x524912*/
  LOBYTE(v10) = *(_BYTE *)(this + 3779); /*0x524917*/
  v11 = Power::FlagProcess(a2, v10); /*0x524920*/
  LOBYTE(v11) = *(_BYTE *)(this + 3780); /*0x524925*/
  Power::FlagProcess(a2, v11); /*0x52492e*/
  LOBYTE(v12) = *(_BYTE *)(this + 3781); /*0x524933*/
  Power::FlagProcess(a2, v12); /*0x52493c*/
  LOBYTE(v13) = *(_BYTE *)(this + 3782); /*0x524941*/
  return Power::FlagProcess(a2, v13); /*0x52494f*/
}
// 0x524C70
int InfantryTypeClass::GetClassIdentifier(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x524c76*/
    return -2147467261; /*0x524c78*/
  *a2 = -1366608936; /*0x524c86*/
  a2[1] = 298976796; /*0x524c8e*/
  a2[2] = 1610654892; /*0x524c97*/
  a2[3] = -1252326136; /*0x524ca0*/
  return 0; /*0x524c7d*/
}
// 0x524D40
int InfantryTypeClass::GetTypeIdentifier()
{
  return 16; /*0x524d45*/
}
// 0x524D50
int InfantryTypeClass::GetObjectSize()
{
  return 3792; /*0x524d55*/
}
// 0x524D60
int InfantryTypeClass::GetAuxField()
{
  return *(this + 894); /*0x524d66*/
}