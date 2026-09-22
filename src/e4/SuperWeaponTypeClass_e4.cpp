// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/BuildingType_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Power_e4.hpp"

// 0x4F6540
namespace gamemd {
AbstractClass * * SuperWeaponTypeClass::IsAvailable()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int v9; // ecx
  int v11; // ebp
  _DWORD *BuildableFromArray; // eax
  int v13; // edi
  AbstractClass *v14; // cl
  int v15; // eax
  int v16; // edx
  int v17; // ecx
  int v20; // ecx
  int v27; // edi
  _DWORD *v28; // eax
  AbstractClass *v29; // ebx
  _DWORD *v30; // eax
  int v31; // eax
  bool v32; // [esp+12h] [ebp-Ah]
  bool v33; // [esp+13h] [ebp-9h]
  bool v34; // [esp+14h] [ebp-8h]
  bool v35; // [esp+15h] [ebp-7h]
  bool v36; // [esp+16h] [ebp-6h]
  bool v37; // [esp+17h] [ebp-5h]
  int v38; // [esp+18h] [ebp-4h]
  v36 = this->q057 > 0; /*0x4f6565*/
  v33 = this->q056 > 0; /*0x4f656c*/
  v37 = this->q058 > 0; /*0x4f6573*/
  int v2 = *(_DWORD *)&DataGlobal_87F8E4[30972] + 2848; /*0x4f657d*/
  v32 = this->UIName > 0; /*0x4f6583*/
  char v3 = SuperWeaponTypeClass::FindByName((void *)(this->SidebarImageFile_0x18 + 152)); /*0x4f6598*/
  int v4 = *(_DWORD *)(v2 + 16); /*0x4f659a*/
  int v5 = 1 << v3; /*0x4f659d*/
  int v6 = 0; /*0x4f659f*/
  if ( v4 <= 0 ) /*0x4f65a3*/
  {
LABEL_5:
    v9 = 0; /*0x4f65bd*/
  }
  else
  {
    int v7 = *(_DWORD *)(v2 + 4); /*0x4f65a5*/
    int v8 = v7; /*0x4f65a8*/
    while ( (v5 & *(_DWORD *)(*(_DWORD *)v8 + 1740)) == 0 ) /*0x4f65b3*/
    {
      ++v6; /*0x4f65b5*/
      v8 += 4; /*0x4f65b6*/
      if ( v6 >= v4 ) /*0x4f65bb*/
        goto LABEL_5; /*0x4f65bb*/
    }
    v9 = *(_DWORD *)(v7 + 4 * v6); /*0x4f65f4*/
  }
  if ( this->DynamicVector_1559.GetOrGrow(*(DynamicVector **)(v9 + 3576)) ) /*0x4f65cc*/
    v32 = 1; /*0x4f65d5*/
  if ( v36 && v33 ) /*0x4f65e8*/
    return 1; /*0x4f65f3*/
  v11 = this->ActionValue->vt_slot_24(); /*0x4f6603*/
  v38 = v11; /*0x4f6612*/
  BuildableFromArray = HouseClass::FirstBuildableFromArray( /*0x4f6616*/
                         this,
                         (AbstractClass *)(*(_DWORD *)&DataGlobal_87F8E4[30972] + 2276));
  v13 = *(_DWORD *)&DataGlobal_87F8E4[30972] + 2876; /*0x4f6623*/
  v34 = BuildableFromArray != 0; /*0x4f662c*/
  v14 = SuperWeaponTypeClass::FindByName((void *)(this->SidebarImageFile_0x18 + 152)); /*0x4f6641*/
  v15 = *(_DWORD *)(v13 + 16); /*0x4f6643*/
  v16 = 1 << v14; /*0x4f6646*/
  v17 = 0; /*0x4f6648*/
  if ( v15 <= 0 ) /*0x4f664c*/
  {
LABEL_17:
    v20 = 0; /*0x4f666a*/
  }
  else
  {
    int v18 = *(_DWORD *)(v13 + 4); /*0x4f664e*/
    int v19 = v18; /*0x4f6651*/
    while ( (v16 & *(_DWORD *)(*(_DWORD *)v19 + 1740)) == 0 ) /*0x4f665c*/
    {
      ++v17; /*0x4f665e*/
      v19 += 4; /*0x4f665f*/
      if ( v17 >= v15 ) /*0x4f6664*/
      {
        v11 = v38; /*0x4f6666*/
        goto LABEL_17; /*0x4f6666*/
      }
    }
    v20 = *(_DWORD *)(v18 + 4 * v17); /*0x4f66d6*/
    v11 = v38; /*0x4f66d9*/
  }
  v35 = v20 != 0; /*0x4f6673*/
  if ( v20 ) /*0x4f6677*/
  {
    int v21 = *(_DWORD *)&DataGlobal_87F8E4[30972] + 2876; /*0x4f668c*/
    int v22 = 1 << SuperWeaponTypeClass::FindByName((void *)(this->SidebarImageFile_0x18 + 152)); /*0x4f669e*/
    int v23 = *(_DWORD *)(v21 + 16); /*0x4f66a0*/
    int v24 = 0; /*0x4f66a3*/
    if ( v23 <= 0 ) /*0x4f66a7*/
    {
      v27 = (*(int (__thiscall **)(_DWORD, _DWORD *))(0 + 132))(0, this); /*0x4f6702*/
    }
    else
    {
      int v25 = *(_DWORD *)(v21 + 4); /*0x4f66a9*/
      int v26 = v25; /*0x4f66ac*/
      while ( (v22 & *(_DWORD *)(*(_DWORD *)v26 + 1740)) == 0 ) /*0x4f66b7*/
      {
        ++v24; /*0x4f66b9*/
        v26 += 4; /*0x4f66ba*/
        if ( v24 >= v23 ) /*0x4f66bf*/
        {
          v11 = v38; /*0x4f66c1*/
          v27 = (*(int (__thiscall **)(_DWORD, _DWORD *))(0 + 132))(0, this); /*0x4f66d2*/
          goto LABEL_28; /*0x4f66d4*/
        }
      }
      v11 = v38; /*0x4f66e2*/
      v27 = (*(int (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(v25 + 4 * v24) + 132))( /*0x4f66f1*/
              *(_DWORD *)(v25 + 4 * v24),
              this);
    }
  }
  else
  {
    v27 = 0x7FFFFFFF; /*0x4f6706*/
  }
LABEL_28:
  v28 = HouseClass::FirstBuildableFromArray( /*0x4f670b*/
          this,
          (AbstractClass *)(*(_DWORD *)&DataGlobal_87F8E4[30972] + 2360));
  v29 = (AbstractClass *)(*(int (__thiscall **)(_DWORD *, _DWORD *))(*v28 + 132))(v28, this); /*0x4f6728*/
  if ( !v34 && v35 ) /*0x4f6738*/
  {
    if ( v33 ) /*0x4f6740*/
      return 1; /*0x4f674b*/
    if ( v37 && v11 >= v27 ) /*0x4f6756*/
      return 1; /*0x4f6761*/
    return v32 && v11 >= (int)&v29->__pad_0[v27]; /*0x4f6772*/
  }
  v30 = HouseClass::FirstBuildableFromArray( /*0x4f678f*/
          this,
          (AbstractClass *)(*(_DWORD *)&DataGlobal_87F8E4[30972] + 2276));
  v31 = (*(int (__thiscall **)(_DWORD *, _DWORD *))(*v30 + 132))(v30, this); /*0x4f6799*/
  if ( v34 && !v35 ) /*0x4f67ad*/
  {
    if ( v33 ) /*0x4f67b5*/
      return 1; /*0x4f67c0*/
    return v32 && v11 >= v31; /*0x4f67cb*/
  }
  if ( v36 ) /*0x4f67dd*/
  {
    if ( v37 && v11 >= v27 ) /*0x4f67e9*/
      return 1; /*0x4f67e9*/
    if ( v32 ) /*0x4f67f1*/
    {
      if ( v11 < (int)&v29->__pad_0[v27] ) /*0x4f67f7*/
        return v11 >= v31; /*0x4f67fb*/
      return 1; /*0x4f681c*/
    }
  }
  else if ( v32 && v11 > v31 ) /*0x4f6811*/
  {
    return 1; /*0x4f6811*/
  }
  return 0; /*0x4f65ea*/
}
}
} // namespace gamemd

// 0x5113F0
namespace gamemd {
unsigned char * SuperWeaponTypeClass::Construct(AbstractClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  CCINIClass *v7; // edx
  CCINIClass *v8; // ecx
  AbstractTypeClass::Constructor((int)this, aP1); /*0x5113fa*/
  int v3 = 0; /*0x5113ff*/
  this->ArrayIndex = 0; /*0x511404*/
  this->Type = -1; /*0x51140a*/
  this->SidebarImage = -1; /*0x511410*/
  this->ActionValue = -1; /*0x511416*/
  this->SpecialSound = 0; /*0x51141c*/
  this->AuxBuilding = 0; /*0x511427*/
  this->SidebarImageFile = 1072693248; /*0x51142d*/
  this->SidebarImageFile_0x18 = 0; /*0x511433*/
  this->zero_E4 = 1072693248; /*0x511439*/
  this->UseChargeDrain = 0; /*0x51143f*/
  this->IsPowered = 1072693248; /*0x511445*/
  this->DisableableFromShell = 0; /*0x51144b*/
  this->q0E4 = 1072693248; /*0x511451*/
  this->FlashSidebarTabFrames = 0; /*0x511457*/
  this->PreDependent = 0; /*0x51145d*/
  this->Range = 0; /*0x511463*/
  this->q03B = 1072693248; /*0x511469*/
  this->UINameLabel = 1072693248; /*0x51146f*/
  this->LineMultiplier = 1072693248; /*0x511475*/
  this->AIDefendAgainst = 1065353216; /*0x51148a*/
  this->PreClick = 1065353216; /*0x511490*/
  this->PostClick = 1065353216; /*0x511496*/
  this->q043 = 1065353216; /*0x51149c*/
  this->PreDependent = 1065353216; /*0x5114a2*/
  *((_DWORD *)this + 69) = 1065353216; /*0x5114a8*/
  *((_DWORD *)this + 70) = 1065353216; /*0x5114ae*/
  this->q11C = 1065353216; /*0x5114b4*/
  this->ShowTimer = 1065353216; /*0x5114ba*/
  this->ManualControl = 1065353216; /*0x5114c0*/
  this->q04A = 1065353216; /*0x5114c6*/
  this->q12C = 1065353216; /*0x5114cc*/
  this->Range = 1065353216; /*0x5114d2*/
  this->q134 = 1065353216; /*0x5114d8*/
  this->q138 = 1065353216; /*0x5114de*/
  this->q04F = 1065353216; /*0x5114e4*/
  this->LineMultiplier = 1065353216; /*0x5114ea*/
  this->q144 = 1065353216; /*0x5114f0*/
  this->q148 = 1065353216; /*0x5114f6*/
  InfantryTypeVector::Construct2((_DWORD *)this + 83, 0, 0); /*0x5114fc*/
  this->q058 = 10; /*0x511501*/
  this->q057 = 0; /*0x511508*/
  *((_DWORD *)this + 83) = &vt_TypeList_InfantryTypeClass_const; /*0x51150b*/
  UnitTypeVector::ConstructUnitTypeVectorClass((_DWORD *)this + 90, 0, 0); /*0x51151b*/
  *((_DWORD *)this + 95) = 10; /*0x511520*/
  *((_DWORD *)this + 94) = 0; /*0x511527*/
  *((_DWORD *)this + 90) = &vt_TypeList_UnitTypeClass_const; /*0x51152a*/
  AircraftTypeVector::Constructor((_DWORD *)this + 97, 0, 0); /*0x51153a*/
  this->q198 = 10; /*0x511542*/
  this->q194 = 0; /*0x511549*/
  *((_DWORD *)this + 97) = &vt_TypeList_AircraftTypeClass_const; /*0x51154c*/
  *(this + 420) = 65; /*0x511552*/
  this->q1A5 = 0; /*0x511559*/
  *(this + 422) = 0; /*0x51155f*/
  this->q1A7 = 1; /*0x511565*/
  *(this + 424) = 0; /*0x51156c*/
  *(_DWORD *)this = &HouseTypeClass::`vftable'; /*0x511572*/
  this->vtable1 = &HouseTypeClass::`vftable'; /*0x511578*/
  this->vtable2 = &HouseTypeClass::`vftable'; /*0x51157f*/
  this->vtable3 = &vt_HouseTypeClass; /*0x511586*/
  AbstractClass::GenerateUniqueID((int)(this + 4)); /*0x51158d*/
  *(this + 416) = 0; /*0x511592*/
  int v4 = g_SuperWeaponTypeArray; /*0x511598*/
  if ( g_SuperWeaponTypeArray < dword_A83CA0 /*0x5115d6*/
    || (byte_A83CA5 || !dword_A83CA0)
    && dword_A83CAC > 0
  bool v5; // zf
    && (v5 = ((unsigned __int8 (__thiscall *)(DynamicVector **, int, _DWORD))dword_A83C98->field_8)(
               &dword_A83C98,
               dword_A83CA0 + dword_A83CAC,
               0) == 0,
        v4 = g_SuperWeaponTypeArray,
        !v5) )
  {
    g_SuperWeaponTypeArray = v4 + 1; /*0x5115db*/
    *((_DWORD *)g_SuperWeaponTypeCount + v4) = this; /*0x5115e5*/
    v4 = g_SuperWeaponTypeArray; /*0x5115e8*/
  }
  int v6 = 0; /*0x5115ed*/
  if ( v4 <= 0 ) /*0x5115f1*/
  {
LABEL_11:
    v6 = -1; /*0x511605*/
  }
  else
  {
    v7 = (CCINIClass *)g_SuperWeaponTypeCount; /*0x5115f3*/
    while ( *(_BYTE **)v7->__pad_0 != this ) /*0x5115fb*/
    {
      ++v6; /*0x5115fd*/
      v7 = (CCINIClass *)((char *)v7 + 4); /*0x5115fe*/
      if ( v6 >= v4 ) /*0x511603*/
        goto LABEL_11; /*0x511603*/
    }
  }
  this->SidebarImage = v6; /*0x511608*/
  if ( g_SuperWeaponTypeArray <= 0 ) /*0x511615*/
  {
LABEL_16:
    this->Type = -1; /*0x511629*/
    return this; /*0x511633*/
  }
  else
  {
    v8 = (CCINIClass *)g_SuperWeaponTypeCount; /*0x511617*/
    while ( *(_BYTE **)v8->__pad_0 != this ) /*0x51161f*/
    {
      ++v3; /*0x511621*/
      v8 = (CCINIClass *)((char *)v8 + 4); /*0x511622*/
      if ( v3 >= g_SuperWeaponTypeArray ) /*0x511627*/
        goto LABEL_16; /*0x511627*/
    }
    this->Type = v3; /*0x51163a*/
    return this; /*0x511640*/
  }
}
}
} // namespace gamemd

// 0x6CEA20
namespace gamemd {
void* SuperWeaponTypeClass::SD_vt25(unsigned char *** aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  WeaponTypeClass *v3; // edi
  WeaponTypeClass *v4; // eax
  int SWProperties; // eax
  char Bool_Overwrite; // al
  INIClass *aP3; // ecx
  int Int_Overwrite; // eax
  int Index; // eax
  double Double_Overwrite; // st7
  CCINIClass *v20; // edx
  char **v21; // edi
  char **v22; // edi
  BuildingTypeClass *v23; // edi
  BuildingTypeClass *v24; // eax
  CCINIClass *v28; // edi
  char aP3_4; // [esp+4h] [ebp-404h]
  char aP3_4a; // [esp+4h] [ebp-404h]
  char aP3_4b; // [esp+4h] [ebp-404h]
  char aP3_4c; // [esp+4h] [ebp-404h]
  char Destination[24]; // [esp+1Ch] [ebp-3ECh] BYREF
  char v38; // [esp+34h] [ebp-3D4h]
  INIClass aP4; // [esp+38h] [ebp-3D0h] BYREF
  INIClass v40; // [esp+88h] [ebp-380h] BYREF
  INIClass Source[4]; // [esp+108h] [ebp-300h] BYREF
  char Buffer[512]; // [esp+208h] [ebp-200h] BYREF

  INIClass::ResetSection(aP1); /*0x6cea33*/
  if ( !AbstractTypeClass::LoadFromINI(this, (AbstractTypeClass *)aP1) ) /*0x6cea3b*/
    return 0; /*0x6cee51*/
  v3 = this->WeaponType; /*0x6cea4a*/
  if ( INIClass::GetString( /*0x6cea6d*/
         aP1,
         (INIClass *)(this + 36),
         (unsigned __int8 *)&stru_817244.sectionHead[2],
         (INIClass *)&DataGlobal_87F8E4[42624],
         &v40,
         128) )
  {
    v4 = InfantryTypeClass::Find(v40[0]); /*0x6cea7d*/
  }
  else
  {
    v4 = v3; /*0x6cea84*/
  }
  Action *v5 = this->ActionValue; /*0x6cea86*/
  this->WeaponType = v4; /*0x6cea8c*/
  SWProperties = SuperWeaponTypeClass::loadSWProperties( /*0x6cea9b*/
                   aP1,
                   (CCINIClass *)(this + 36),
                   (unsigned __int8 *)&stru_817244.INIClass_field_2C,
                   v5);
  aP3_4 = this->IsPowered; /*0x6ceaa8*/
  this->ActionValue = SWProperties; /*0x6ceaaf*/
  this->IsPowered = INIClass::ReadBool_Overwrite( /*0x6ceaba*/
                             (int)aP1,
                             (unsigned __int8 *)(this + 36),
                             (CCINIClass *)&stru_830620[73964],
                             aP3_4);
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x6ceacf*/
                     (int)aP1,
                     (unsigned __int8 *)(this + 36),
                     (CCINIClass *)&stru_830620[73940],
                     this->DisableableFromShell);
  aP3 = this->FlashSidebarTabFrames; /*0x6cead4*/
  this->DisableableFromShell = Bool_Overwrite; /*0x6ceada*/
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x6ceae9*/
                    (int)aP1,
                    (unsigned __int8 *)(this + 36),
                    (CCINIClass *)&stru_830620[73916],
                    aP3);
  aP3_4a = this->AIDefendAgainst; /*0x6ceaf6*/
  this->FlashSidebarTabFrames = Int_Overwrite; /*0x6ceafd*/
  this->AIDefendAgainst = INIClass::ReadBool_Overwrite( /*0x6ceb08*/
                             (int)aP1,
                             (unsigned __int8 *)(this + 36),
                             (CCINIClass *)&stru_830620[73900],
                             aP3_4a);
  char v10; // al
  v10 = INIClass::ReadBool_Overwrite( /*0x6ceb1d*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_830620[73888],
          this->PreClick);
  bool v11 = this->PostClick; /*0x6ceb22*/
  this->PreClick = v10; /*0x6ceb28*/
  char v12; // al
  v12 = INIClass::ReadBool_Overwrite( /*0x6ceb37*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_830620[73876],
          v11);
  aP3_4b = this->ShowTimer; /*0x6ceb44*/
  this->PostClick = v12; /*0x6ceb4b*/
  char v13; // al
  v13 = INIClass::ReadBool_Overwrite( /*0x6ceb51*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_830620[73864],
          aP3_4b);
  int v14 = this->SpecialSound; /*0x6ceb56*/
  this->ShowTimer = v13; /*0x6ceb5c*/
  if ( !INIClass::GetString( /*0x6ceb94*/
          aP1,
          (INIClass *)(this + 36),
          (unsigned __int8 *)&stru_830620[73848],
          (INIClass *)&DataGlobal_87F8E4[42624],
          &v40,
          128)
    || (Index = VocClass::FindIndex(&v40), Index == -1) )
  {
    Index = v14; /*0x6ceb96*/
  }
  int v16 = this->StartSound; /*0x6ceb98*/
  this->SpecialSound = Index; /*0x6cebb8*/
  if ( !INIClass::GetString( /*0x6cebd6*/
          aP1,
          (INIClass *)(this + 36),
          &unk_818418,
          (INIClass *)&DataGlobal_87F8E4[42624],
          &v40,
          128)
  int v17; // eax
    || (v17 = VocClass::FindIndex(&v40), v17 == -1) )
  {
    v17 = v16; /*0x6cebd8*/
  }
  double v18 = this->q0F8; /*0x6cebda*/
  this->StartSound = v17; /*0x6cebe5*/
  Double_Overwrite = INIClass::ReadDouble_Overwrite( /*0x6cebf4*/
                       (int)aP1,
                       (INIClass *)(this + 36),
                       (unsigned __int8 *)&stru_830620[73840],
                       (INIClass *)LODWORD(v18));
  v20 = this->q0FC; /*0x6cebf9*/
  this->q0F8 = Double_Overwrite; /*0x6cec01*/
  this->LineMultiplier = INIClass::ReadInt_Overwrite( /*0x6cec13*/
                              (int)aP1,
                              (unsigned __int8 *)(this + 36),
                              (CCINIClass *)&stru_830620[73824],
                              (INIClass *)v20);
  INIClass::GetString( /*0x6cec2d*/
    aP1,
    (INIClass *)(this + 36),
    (unsigned __int8 *)g_INI_Key_Type,
    (INIClass *)&DataGlobal_87F8E4[42624],
    (INIClass *)&aP4[40],
    40);
  if ( strlen(&aP4[40]) ) /*0x6cec36*/
  {
    int v35 = 0; /*0x6cec42*/
    v21 = (char **)&stru_830620[73632]; /*0x6cec46*/
    while ( _strcmpi(*v21, &aP4[40]) ) /*0x6cec5d*/
    {
      ++v21; /*0x6cec63*/
      ++v35; /*0x6cec6d*/
      if ( (int)v21 >= (int)&stru_830620[73680] ) /*0x6cec71*/
        goto LABEL_18; /*0x6cec71*/
    }
    if ( v35 != -1 ) /*0x6cec7c*/
      this->Type = v35; /*0x6cec7e*/
  }
LABEL_18:
  INIClass::GetString( /*0x6cec84*/
    aP1,
    (INIClass *)(this + 36),
    (unsigned __int8 *)&stru_830620[73808],
    (INIClass *)&DataGlobal_87F8E4[42624],
    &aP4,
    40);
  if ( strlen(aP4[0]) ) /*0x6ceca1*/
  {
    int v36 = 0; /*0x6cecad*/
    v22 = (char **)&stru_830620[73632]; /*0x6cecb1*/
    while ( _strcmpi(*v22, aP4[0]) ) /*0x6cecc8*/
    {
      ++v22; /*0x6cecce*/
      ++v36; /*0x6cecd8*/
      if ( (int)v22 >= (int)&stru_830620[73680] ) /*0x6cecdc*/
        goto LABEL_25; /*0x6cecdc*/
    }
    if ( v36 != -1 ) /*0x6cece7*/
      this->PreDependent = v36; /*0x6cece9*/
  }
LABEL_25:
  v23 = this->q0C8; /*0x6cecef*/
  if ( INIClass::GetString( /*0x6ced0f*/
         aP1,
         (INIClass *)(this + 36),
         (unsigned __int8 *)&stru_830620[73796],
         (INIClass *)&DataGlobal_87F8E4[42624],
         &v40,
         128) )
  {
    v24 = BuildingTypeClass::FindOrCreate(v40[0]); /*0x6ced1f*/
  }
  else
  {
    v24 = v23; /*0x6ced26*/
  }
  bool v25 = this->UseChargeDrain; /*0x6ced28*/
  this->AuxBuilding = v24; /*0x6ced2e*/
  char v26; // al
  v26 = INIClass::ReadBool_Overwrite( /*0x6ced3d*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_830620[73780],
          v25);
  aP3_4c = this->ManualControl; /*0x6ced4a*/
  this->UseChargeDrain = v26; /*0x6ced51*/
  this->ManualControl = INIClass::ReadBool_Overwrite( /*0x6ced68*/
                             (int)aP1,
                             (unsigned __int8 *)(this + 36),
                             (CCINIClass *)&stru_830620[73764],
                             aP3_4c);
  double v27; // st7
  v27 = INIClass::ReadDouble_Overwrite( /*0x6ced6e*/
          (int)aP1,
          (INIClass *)(this + 36),
          (unsigned __int8 *)&stru_830620[73748],
          0);
  if ( v27 != 0.0 ) /*0x6ced7e*/
    this->RechargeTime = Math::RoundToInt(v27 * 900.0); /*0x6ced8b*/
  v28 = (CCINIClass *)(this + 204); /*0x6ced9c*/
  INIClass::GetString( /*0x6cedb1*/
    aP1,
    (INIClass *)(this + 36),
    (unsigned __int8 *)&stru_830620[73732],
    (INIClass *)(this + 204),
    Source,
    256);
  if ( Source ) /*0x6cedbf*/
  {
    strncpy(Destination, Source[0].__pad_0, 0x18u); /*0x6cedd6*/
    v38 = 0; /*0x6cedde*/
  }
  else
  {
    Destination[0] = (unsigned __int8)Source; /*0x6cedc1*/
  }
  if ( Destination != (char *)v28 ) /*0x6cede9*/
  {
    qmemcpy(v28, Destination, 0x18u); /*0x6cedf4*/
    this->zero_E4 = v38; /*0x6cedf6*/
  }
  _makepath(Buffer, 0, 0, (const char *)(this + 204), Ext); /*0x6cee0f*/
  int v29 = SearchMIXFile(Buffer, 0); /*0x6cee20*/
  this->SidebarImage = v29; /*0x6cee26*/
  if ( !v29 ) /*0x6cee2f*/
    this->SidebarImage = SearchMIXFile(g_Str_File_XXICON_SHP, 0); /*0x6cee3d*/
  return 1; /*0x6cee43*/
}
}
} // namespace gamemd

// 0x6CEEB0
namespace gamemd {
int SuperWeaponTypeClass::FindFirstOfAction()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  char *i; // edx

  int v1 = 0; /*0x6ceeb8*/
  if ( g_HouseClassInitState <= 0 ) /*0x6ceebd*/
    return 0; /*0x6ceed9*/
  for ( i = (char *)g_SuperWeaponPool; *(void **)(*(_DWORD *)i + 188) != this; i += 4 ) /*0x6ceec5*/
  {
    if ( ++v1 >= g_HouseClassInitState ) /*0x6ceed7*/
      return 0; /*0x6ceed7*/
  }
  return *((_DWORD *)g_SuperWeaponPool + v1); /*0x6ceed9*/
}
}
} // namespace gamemd

// 0x6CEF80
namespace gamemd {
int SuperWeaponTypeClass::SD_vt27(int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  if ( this->Type != 10 ) /*0x6cef8b*/
    return this->q0BC; /*0x6cef8b*/
  if ( a3
    && (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 44))(a3) == 6
  int v4; // eax
    && (v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 44))(a3),
        (unsigned __int8)HouseClass::IsAlliedWith(*(#375 **)(v4 == 6 ? a3 + 0x21C : 540), HouseClass_Player)) )
  {
    return this->q0BC; /*0x6cefd3*/
  }
  else
  {
    return 70; /*0x6cefca*/
  }
}
}
} // namespace gamemd

// 0x6CEFE0
namespace gamemd {
SuperWeaponTypeClass * SuperWeaponTypeClass::SDDTOR(char a2)
{
    SuperWeaponTypeClass* v7 = this;
    DataGlobal_A8E330;
    int v2 = DataGlobal_A8E330.FindItemIndex(&v7);
    if ( v2 != -1 && v2 < DataGlobal_A8E340 && v2 < --DataGlobal_A8E340 )
    {
        do
        {
            ++v2;
            *(DataGlobal_A8E334 + v2 - 1) = *(DataGlobal_A8E334 + v2);
        }
        while ( v2 < DataGlobal_A8E340 );
    }
    AbstractTypeClass::Dtor(this);
    if ( a2 & 1 )
        OperatorDelete(this);
    return this;
}
}
} // namespace gamemd

// 0x474EE0
namespace gamemd {
int SuperWeaponTypeClass::loadSWProperties(CCINIClass * aP1, unsigned char * a2, int a4)
{
{
    int v4;
    ObjectClass *v5;
    char Destination[32];
    INIClass::GetString(this, (INIClass *)aP1, a2, *(&DataGlobal_7E4C50 + a4), (INIClass *)Destination, 32);
    v4 = 0;
    v5 = (ObjectClass *)&DataGlobal_7E4C50;
    while ( _strcmpi(Destination, *(char **)v5->__pad_0) )
  {
    v5 = (ObjectClass *)((char *)(v5) + 4);
    ++v4;
    if ( (int)v5 >= (int)&DataGlobal_7E4D74 )
    return 0;
  }
    return v4;
}
}
} // namespace gamemd

// 0x475540
namespace gamemd {
int SuperWeaponTypeClass::FindOrCreate(INIClass * aP1, unsigned char * a2, CCINIClass * aP3)
{
{
    void *v4;
    HouseTypeClass *result;
    char *eax5;
    HouseTypeClass *v6;
    int v8;
    CCINIClass *i;
    INIClass Destination[2];
    if ( !INIClass::GetString(this, aP1, a2, (INIClass *)&DataGlobal_87F8E4[42624], Destination, 128) )
    return (int)aP3->__pad_0;
    v4 = (void *)PlayerSlot::NameToDialogID(Destination[0].__pad_0);
    if ( BuildingType::IsSpecialType(v4) )
    return (int)v4;
    result = (HouseTypeClass *)SuperWeaponTypeClass::FindByName(Destination);
    if ( result == (HouseTypeClass *)-1 )
  {
    eax5 = (char *)__2_YAPAXI_Z(0x1B0u);
    if ( eax5 )
    v6 = (HouseTypeClass *)SuperWeaponTypeClass::Construct(eax5, Destination[0].__pad_0);
    else
    v6 = 0;
    v8 = 0;
    if ( g_SuperWeaponTypeArray <= 0 )
    {
    return -1;
    }
    else
    {
    for ( i = (CCINIClass *)g_SuperWeaponTypeCount;
    *(HouseTypeClass **)i->__pad_0 != v6;
    i = (CCINIClass *)((char *)(i) + 4) ) {
    if ( ++v8 >= g_SuperWeaponTypeArray )
    return -1;
      }
    return v8;
    }
  }
    return (int)result->__pad_0;
}
}
} // namespace gamemd

// 0x5117D0
namespace gamemd {
int SuperWeaponTypeClass::FindByName()
{
{
    int v3;
    int *v4;
    if ( !_strcmpi(this, &g_INI_Key_Digest[40]) )
    return -2;
    if ( !this )
    return -1;
    v3 = 0;
    if ( g_SuperWeaponTypeArray <= 0 )
    return -1;
    while ( 1 )
  {
    v4 = (int *)*((int *)(g_SuperWeaponTypeCount) + v3);
    if ( !_strcmpi(v4 + 25, this) || !_strcmpi(v4 + 9, this) )
    break;
    if ( ++v3 >= g_SuperWeaponTypeArray )
    return -1;
  }
    return v4[46];
}
}
} // namespace gamemd

// 0x6CE5B0
namespace gamemd {
int SuperWeaponTypeClass::SuperWeaponTypeClass(ObjectClass * aP1)
{
{
    int v3;
    AbstractTypeClass::Constructor(this, (AbstractClass *)aP1);
    this->WeaponType = 0;
    this->RechargeVoice = -1;
    this->ChargingVoice = -1;
    this->ImpatientVoice = -1;
    this->SuspendVoice = -1;
    this->RechargeTime = 4500;
    this->Type = -1;
    this->SidebarImage = 0;
    this->ActionValue = 0;
    this->SpecialSound = -1;
    this->StartSound = -1;
    this->AuxBuilding = 0;
    this->SidebarImageFile = 0;
    this->FlashSidebarTabFrames = -1;
    this->PreDependent = -1;
    this->UseChargeDrain = 0;
    this->IsPowered = 1;
    this->DisableableFromShell = 0;
    this->AIDefendAgainst = 0;
    this->PreClick = 0;
    this->PostClick = 0;
    this->ShowTimer = 0;
    this->ManualControl = 0;
    this->Range = 0;
    this->LineMultiplier = 0;
    *(void**)this = vt_SuperWeaponTypeClass;
    this->vtable1 = (unsigned int)vt_SuperWeaponTypeClass;
    this->vtable2 = (unsigned int)vt_SuperWeaponTypeClass;
    this->vtable3 = &vt_SuperWeaponTypeClass;
    AbstractClass::GenerateUniqueID(this + 4);
    this->ArrayIndex = *(int *)&g_NetworkPlayerBuffer[3332];
    if ( *(int *)&g_NetworkPlayerBuffer[3332] < *(int *)&g_NetworkPlayerBuffer[3324] || (g_NetworkPlayerBuffer[3329] || !*(int *)&g_NetworkPlayerBuffer[3324]) && *(int *)&g_NetworkPlayerBuffer[3336] > 0 && (*(unsigned char (__thiscall **)(char *, int, int))(*(int *)&g_NetworkPlayerBuffer[3316] + 8))( &g_NetworkPlayerBuffer[3316], *(int *)&g_NetworkPlayerBuffer[3324] + *(int *)&g_NetworkPlayerBuffer[3336], 0) )
  {
    v3 = (*(int *)&g_NetworkPlayerBuffer[3332])++;
    *(int *)(*(int *)&g_NetworkPlayerBuffer[3320] + 4 * v3) = this;
  }
    if ( this + 36 != this + 204 )
    qmemcpy((void *)(this + 204), (const void *)(this + 36), 0x19u);
    return this;
}
}
} // namespace gamemd

// 0x6CE7C0
namespace gamemd {
int SuperWeaponTypeClass::SD_vt03(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 217234663;
  a2[1] = 298989284;
  a2[2] = 1610668216;
  a2[3] = -318126072;
  return 0;
}
} // namespace gamemd

// 0x6CE800
namespace gamemd {
int SuperWeaponTypeClass::SaveLoad_Prefix(int a1, int a2)
{
{
    int result;
    int v3;
    char v4;
    char Buffer[512];
    result = AbstractClass::SaveLoad_Prefix_0((int *)a1, a2);
    if ( result >= 0 )
  {
    if ( a1 )
    {
    AbstractTypeClass::Init(a1, (int)&v4);
    *(int *)(a1 + 184) = 0;
    *(int *)a1 = (unsigned int)vt_SuperWeaponTypeClass;
    *(int *)(a1 + 4) = (unsigned int)vt_SuperWeaponTypeClass;
    *(int *)(a1 + 8) = (unsigned int)vt_SuperWeaponTypeClass;
    *(int *)(a1 + 12) = &vt_SuperWeaponTypeClass;
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a1 + 156));
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a1 + 200));
    _makepath(Buffer, 0, 0, (const char *)(a1 + 204), Ext);
    v3 = SearchMIXFile(Buffer, 0);
    *(int *)(a1 + 184) = v3;
    if ( !v3 )
    *(int *)(a1 + 184) = SearchMIXFile(g_Str_File_XXICON_SHP, 0);
    return 0;
  }
    return result;
}
}
} // namespace gamemd

// 0x6CE8D0
namespace gamemd {
int SuperWeaponTypeClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2)
{
{
    int result;
    result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2);
    if ( result >= 0 )
    return 0;
    return result;
}
}
} // namespace gamemd

// 0x6CE8F0
namespace gamemd {
int SuperWeaponTypeClass::SD_vt11()
{
return 32;
}
} // namespace gamemd

// 0x6CE900
namespace gamemd {
int SuperWeaponTypeClass::SD_vt12()
{
return 256;
}
} // namespace gamemd

// 0x6CE910
namespace gamemd {
int SuperWeaponTypeClass::SD_vt13(int * a2)
{
{
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    AbstractTypeClass::ProcessPower((char *)this, a2);
    Power::TimerProcess(this->ArrayIndex);
    Power::TimerProcess(this->ActionValue);
    Power::TimerProcess(this->RechargeVoice);
    Power::TimerProcess(this->ChargingVoice);
    Power::TimerProcess(this->ImpatientVoice);
    v3 = Power::TimerProcess(this->SuspendVoice);
    LOBYTE(v3) = this->IsPowered;
    Power::FlagProcess(a2, v3);
    LOBYTE(v4) = this->DisableableFromShell;
    Power::FlagProcess(a2, v4);
    LOBYTE(v5) = this->PreClick;
    v6 = Power::FlagProcess(a2, v5);
    LOBYTE(v6) = this->PostClick;
    Power::FlagProcess(a2, v6);
    Power::TimerProcess(this->PreDependent);
    LOBYTE(v7) = this->ShowTimer;
    Power::FlagProcess(a2, v7);
    Power::TimerProcess(this->RechargeTime);
    Power::TimerProcess(this->Type);
    LOBYTE(v8) = this->UseChargeDrain;
    v9 = Power::FlagProcess(a2, v8);
    LOBYTE(v9) = this->ManualControl;
    return Power::FlagProcess(a2, v9);
}
}
} // namespace gamemd

// 0x6CEA10
namespace gamemd {
int SuperWeaponTypeClass::SD_vt16()
{
{
    return this->ArrayIndex;
}
}
} // namespace gamemd
