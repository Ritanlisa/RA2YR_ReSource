// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/BuildingType_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/SuperWeaponTypeClass_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"
#include "e4/classes/SuperClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/WeaponTypeClass_e4.hpp"
#include "e4/classes/Type_e4.hpp"

// 0x4F6540
namespace gamemd {
AbstractClass * * SuperWeaponTypeClass::IsAvailable()
{
  char *v2; // edi
  char v3; // cl
  int v4; // eax
  int v5; // edx
  int v6; // ecx
  int v7; // edi
  int v9; // ecx
  int v11; // ebp
  int BuildableFromArray; // eax
  char *v13; // edi
  char v14; // cl
  int v15; // eax
  int v16; // edx
  int v17; // ecx
  int v18; // edi
  int v20; // ecx
  char *v21; // edi
  int v22; // edx
  int v23; // ecx
  int v24; // eax
  int v25; // edi
  int v27; // edi
  int v28; // eax
  int v29; // ebx
  int v30; // eax
  int v31; // eax
  bool v32; // [esp+12h] [ebp-Ah]
  bool v33; // [esp+13h] [ebp-9h]
  bool v34; // [esp+14h] [ebp-8h]
  bool v35; // [esp+15h] [ebp-7h]
  bool v36; // [esp+16h] [ebp-6h]
  bool v37; // [esp+17h] [ebp-5h]

  v36 = *(&this->NeedsSaveOrLink7) > 0; /*0x4f6565*/
  v33 = *(&this->NeedsSaveOrLink6) > 0; /*0x4f656c*/
  v37 = *(&this->NeedsSaveOrLink8) > 0; /*0x4f6573*/
  v2 = (char *)g_RulesClass_Instance + 2848; /*0x4f657d*/
  v32 = *(&this->vtable34) > 0; /*0x4f6583*/
  v3 = SuperWeaponTypeClass::FindByName((void *)(*(&this->vtable23) + 152)); /*0x4f6598*/
  v4 = *((unsigned int *)v2 + 4); /*0x4f659a*/
  v5 = 1 << v3; /*0x4f659d*/
  v6 = 0; /*0x4f659f*/
  if ( v4 <= 0 ) /*0x4f65a3*/
  {
  LABEL_5:
    v9 = 0; /*0x4f65bd*/
  }
  else
  {
    v7 = *((unsigned int *)v2 + 1); /*0x4f65a5*/
    v7 = v7; /*0x4f65a8*/
    while ( (v5 & *(unsigned int *)(*(unsigned int *)v7 + 1740)) == 0 ) /*0x4f65b3*/
    {
      ++v6; /*0x4f65b5*/
      v7 += 4; /*0x4f65b6*/
      if ( v6 >= v4 ) /*0x4f65bb*/
        goto LABEL_5; /*0x4f65bb*/
    }
    v9 = *(unsigned int *)(v7 + 4 * v6); /*0x4f65f4*/
  }
  if ( this->DynamicVector_1559.GetOrGrow(*(unsigned int *)(v9 + 3576)) ) /*0x4f65cc*/
    v32 = 1; /*0x4f65d5*/
  if ( v36 && v33 ) /*0x4f65e8*/
    return 1; /*0x4f65f3*/
  v11 = (*(int (__stdcall **)(unsigned int *))(this->ActionValue + 24))&this->ActionValue; /*0x4f6603*/
  v11 = v11; /*0x4f6612*/
  BuildableFromArray = HouseClass::FirstBuildableFromArray((char *)g_RulesClass_Instance + 2276); /*0x4f6616*/
  v13 = (char *)g_RulesClass_Instance + 2876; /*0x4f6623*/
  v34 = BuildableFromArray != 0; /*0x4f662c*/
  v14 = SuperWeaponTypeClass::FindByName((void *)(*(&this->vtable23) + 152)); /*0x4f6641*/
  v15 = *((unsigned int *)v13 + 4); /*0x4f6643*/
  v16 = 1 << v14; /*0x4f6646*/
  v17 = 0; /*0x4f6648*/
  if ( v15 <= 0 ) /*0x4f664c*/
  {
  LABEL_17:
    v20 = 0; /*0x4f666a*/
  }
  else
  {
    v18 = *((unsigned int *)v13 + 1); /*0x4f664e*/
    v18 = v18; /*0x4f6651*/
    while ( (v16 & *(unsigned int *)(*(unsigned int *)v18 + 1740)) == 0 ) /*0x4f665c*/
    {
      ++v17; /*0x4f665e*/
      v18 += 4; /*0x4f665f*/
      if ( v17 >= v15 ) /*0x4f6664*/
      {
        v11 = v11; /*0x4f6666*/
        goto LABEL_17; /*0x4f6666*/
      }
    }
    v20 = *(unsigned int *)(v18 + 4 * v17); /*0x4f66d6*/
    v11 = v11; /*0x4f66d9*/
  }
  v35 = v20 != 0; /*0x4f6673*/
  if ( v20 ) /*0x4f6677*/
  {
    v21 = (char *)g_RulesClass_Instance + 2876; /*0x4f668c*/
    v22 = 1 << SuperWeaponTypeClass::FindByName((void *)(*(&this->vtable23) + 152)); /*0x4f669e*/
    v23 = *((unsigned int *)v21 + 4); /*0x4f66a0*/
    v24 = 0; /*0x4f66a3*/
    if ( v23 <= 0 ) /*0x4f66a7*/
    {
      v27 = (*(int (__thiscall **)(unsigned int, unsigned int *))(MEMORY[0] + 132))(0, this); /*0x4f6702*/
    }
    else
    {
      v25 = *((unsigned int *)v21 + 1); /*0x4f66a9*/
      v25 = v25; /*0x4f66ac*/
      while ( (v22 & *(unsigned int *)(*(unsigned int *)v25 + 1740)) == 0 ) /*0x4f66b7*/
      {
        ++v24; /*0x4f66b9*/
        v25 += 4; /*0x4f66ba*/
        if ( v24 >= v23 ) /*0x4f66bf*/
        {
          v11 = v11; /*0x4f66c1*/
          v27 = (*(int (__thiscall **)(unsigned int, unsigned int *))(MEMORY[0] + 132))(0, this); /*0x4f66d2*/
          goto LABEL_28; /*0x4f66d4*/
        }
      }
      v11 = v11; /*0x4f66e2*/
      v27 = (*(int (__thiscall **)(unsigned int, unsigned int *))(**(unsigned int **)(v25 + 4 * v24) + 132))( /*0x4f66f1*/
              *(unsigned int *)(v25 + 4 * v24),
              this);
    }
  }
  else
  {
    v27 = 0x7FFFFFFF; /*0x4f6706*/
  }
  LABEL_28:
  v28 = HouseClass::FirstBuildableFromArray((char *)g_RulesClass_Instance + 2360); /*0x4f670b*/
  v29 = (*(int (__thiscall **)(int, unsigned int *))(*(unsigned int *)v28 + 132))(v28, this); /*0x4f6728*/
  if ( !v34 && v35 ) /*0x4f6738*/
  {
    if ( v33 ) /*0x4f6740*/
      return 1; /*0x4f674b*/
    if ( v37 && v11 >= v27 ) /*0x4f6756*/
      return 1; /*0x4f6761*/
    return v32 && v11 >= v27 + v29; /*0x4f6772*/
  }
  v30 = HouseClass::FirstBuildableFromArray((char *)g_RulesClass_Instance + 2276); /*0x4f678f*/
  v31 = (*(int (__thiscall **)(int, unsigned int *))(*(unsigned int *)v30 + 132))(v30, this); /*0x4f6799*/
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
      if ( v11 < v27 + v29 ) /*0x4f67f7*/
        return v11 >= v31; /*0x4f67fb*/
      return 1; /*0x4f681c*/
    }
  }
  else if ( v32 && v11 > v31 ) /*0x4f6811*/
  {
    return (gamemd::AbstractClass **)(1);
  }
  return 0; /*0x4f65ea*/
}
}
// 0x5113F0
namespace gamemd {
unsigned char * SuperWeaponTypeClass::Construct(AbstractClass * aP1)
{
  int v3; // ebx
  int v4; // eax
  bool v5; // zf
  int v6; // ecx
  void **v7; // edx
  void **v8; // ecx

  AbstractTypeClass::Constructor(aP1); /*0x5113fa*/
  v3 = 0; /*0x5113ff*/
  *(&this->m_zero_3C2) = 0; /*0x511404*/
  this->veteranAircraft = -1; /*0x51140a*/
  this->veteranAircraftCount = -1; /*0x511410*/
  this->suffix_4 = -1; /*0x511416*/
  this->wallOwner = 0; /*0x51141c*/
  this->q0C8 = 0; /*0x511427*/
  this->q0CC = 1072693248; /*0x51142d*/
  this->q0D0 = 0; /*0x511433*/
  this->u32_D4 = 1072693248; /*0x511439*/
  this->q0D8 = 0; /*0x51143f*/
  this->q0DC = 1072693248; /*0x511445*/
  this->q0E0 = 0; /*0x51144b*/
  this->q0E4 = 1072693248; /*0x511451*/
  this->q0E8 = 0; /*0x511457*/
  this->q0F0 = 0; /*0x51145d*/
  this->q0F8 = 0; /*0x511463*/
  this->q0EC = 1072693248; /*0x511469*/
  this->q0F4 = 1072693248; /*0x51146f*/
  this->q0FC = 1072693248; /*0x511475*/
  this->q100 = 1065353216; /*0x51148a*/
  this->q104 = 1065353216; /*0x511490*/
  this->q108 = 1065353216; /*0x511496*/
  this->q10C = 1065353216; /*0x51149c*/
  this->q110 = 1065353216; /*0x5114a2*/
  this->q114 = 1065353216; /*0x5114a8*/
  this->q118 = 1065353216; /*0x5114ae*/
  this->q11C = 1065353216; /*0x5114b4*/
  this->q120 = 1065353216; /*0x5114ba*/
  this->q124 = 1065353216; /*0x5114c0*/
  this->q128 = 1065353216; /*0x5114c6*/
  this->q12C = 1065353216; /*0x5114cc*/
  this->q130 = 1065353216; /*0x5114d2*/
  this->q134 = 1065353216; /*0x5114d8*/
  this->q138 = 1065353216; /*0x5114de*/
  this->q13C = 1065353216; /*0x5114e4*/
  this->q140 = 1065353216; /*0x5114ea*/
  this->q144 = 1065353216; /*0x5114f0*/
  this->q148 = 1065353216; /*0x5114f6*/
  InfantryTypeVector::Construct2((unsigned int *)&this->q14C, 0, 0); /*0x5114fc*/
  this->q160 = 10; /*0x511501*/
  this->q15C = 0; /*0x511508*/
  UnitTypeVector::ConstructUnitTypeVectorClass((unsigned int *)&this->q168, 0, 0); /*0x51151b*/
  this->u32_17C = 10; /*0x511520*/
  this->u32_178 = 0; /*0x511527*/
  AircraftTypeVector::Constructor(0, 0); /*0x51153a*/
  this->q198 = 10; /*0x511542*/
  this->q194 = 0; /*0x511549*/
  *(&this->veteranInfantryCount0) = 65; /*0x511552*/
  *(&this->veteranInfantryCount1) = 0; /*0x511559*/
  *(&this->veteranInfantryCount2) = 0; /*0x51155f*/
  *(&this->veteranInfantryCount3) = 1; /*0x511565*/
  *(&this->veteranInfantryCount4) = 0; /*0x51156c*/
  AbstractClass::GenerateUniqueID((int)&this->uniqueId); /*0x51158d*/
  *(&this->veteranInfantry6) = 0; /*0x511592*/
  v4 = g_SuperWeaponTypeArray; /*0x511598*/
  if ( g_SuperWeaponTypeArray < dword_A83CA0 /*0x5115d6*/
    || (byte_A83CA5 || !dword_A83CA0)
    && dword_A83CAC > 0
    && (v5 = (*(uint8_t (__thiscall **)(int *, int, unsigned int))(dword_A83C98 + 8))(
               &dword_A83C98,
               dword_A83CA0 + dword_A83CAC,
               0) == 0,
        v4 = g_SuperWeaponTypeArray,
        !v5) )
  {
    g_SuperWeaponTypeArray = (unsigned int)(v4 + 1);
    *((unsigned int *)g_SuperWeaponTypeCount + v4) = this; /*0x5115e5*/
    v4 = g_SuperWeaponTypeArray; /*0x5115e8*/
  }
  v6 = 0; /*0x5115ed*/
  if ( v4 <= 0 ) /*0x5115f1*/
  {
  LABEL_11:
    v6 = -1; /*0x511605*/
  }
  else
  {
    v7 = (void **)g_SuperWeaponTypeCount; /*0x5115f3*/
    while ( *v7 != this ) /*0x5115fb*/
    {
      ++v6; /*0x5115fd*/
      ++v7; /*0x5115fe*/
      if ( v6 >= v4 ) /*0x511603*/
        goto LABEL_11; /*0x511603*/
    }
  }
  this->veteranAircraftCount = v6; /*0x511608*/
  if ( g_SuperWeaponTypeArray <= 0 ) /*0x511615*/
  {
  LABEL_16: this->veteranAircraft = (unsigned char *)(-1);
    return this; /*0x511633*/
  }
  else
  {
    v8 = (void **)g_SuperWeaponTypeCount; /*0x511617*/
    while ( *v8 != this ) /*0x51161f*/
    {
      ++v3; /*0x511621*/
      ++v8; /*0x511622*/
      if ( v3 >= g_SuperWeaponTypeArray ) /*0x511627*/
        goto LABEL_16; /*0x511627*/
    }
    this->veteranAircraft = (unsigned char *)(v3);
    return this; /*0x511640*/
  }
}
}
// 0x6CEA20
namespace gamemd {
void* SuperWeaponTypeClass::SD_vt25(unsigned char *** aP1)
{
  WeaponTypeClass * v3;
  WeaponTypeClass * v4;
  WeaponTypeClass * v5;
  int v6; // eax
  char Bool_Overwrite; // al
  int v8; // ecx
  int Int_Overwrite; // eax
  char v10; // al
  char v11; // cl
  char v12; // al
  char v13; // al
  int v14; // edi
  int Index; // eax
  int v16; // edi
  int v17; // eax
  double v18; // st7
  double Double_Overwrite; // st7
  int v20; // edx
  const void **v21; // edi
  const void **v22; // edi
  BuildingTypeClass * v23;
  int v24; // eax
  char v25; // cl
  char v26; // al
  double v27; // st7
  char *v28; // edi
  int v29; // eax
  char v31; // [esp+4h] [ebp-404h]
  char v32; // [esp+4h] [ebp-404h]
  char v33; // [esp+4h] [ebp-404h]
  char v34; // [esp+4h] [ebp-404h]
  int v35; // [esp+18h] [ebp-3F0h]
  int v36; // [esp+18h] [ebp-3F0h]
  char Destination[24]; // [esp+1Ch] [ebp-3ECh] BYREF
  char v38; // [esp+34h] [ebp-3D4h]
  char v39[40]; // [esp+38h] [ebp-3D0h] BYREF
  char v40[40]; // [esp+60h] [ebp-3A8h] BYREF
  char v41[128]; // [esp+88h] [ebp-380h] BYREF
  char Source[256]; // [esp+108h] [ebp-300h] BYREF
  char Buffer[512]; // [esp+208h] [ebp-200h] BYREF

  INIClass::ResetSection(aP1); /*0x6cea33*/
  if ( !AbstractTypeClass::LoadFromINI(this, aP1) ) /*0x6cea3b*/
    return 0; /*0x6cee51*/
  v3 = this->WeaponType; /*0x6cea4a*/
  if ( INIClass::GetString( /*0x6cea6d*/
         aP1,
         (uint8_t *)(&this->vtable46),
         (uint8_t *)aWeapontype,
         &g_INI_DefaultBuffer,
         v41,
         128) )
  {
    v4 = InfantryTypeClass::Find(v41); /*0x6cea7d*/
  }
  else
  {
    v4 = v3; /*0x6cea84*/
  }
  v5 = (unsigned int)(this->q0BC);
  this->WeaponType = v4; /*0x6cea8c*/
  v6 = SuperWeaponTypeClass::loadSWProperties( /*0x6cea9b*/
         aP1,
         (uint8_t *)(&this->vtable46),
         (uint8_t *)g_INI_Key_Action,
         v5);
  v31 = this->q0E6; /*0x6ceaa8*/
  this->q0BC = v6; /*0x6ceaaf*/
  this->q0E6 = INIClass::ReadBool_Overwrite( /*0x6ceaba*/
                             (int)aP1,
                             (uint8_t *)(&this->vtable46),
                             (uint8_t *)aIspowered,
                             v31);
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x6ceacf*/
                     (int)aP1,
                     (uint8_t *)(&this->vtable46),
                     (uint8_t *)aDisableablefro,
                     this->q0E7);
  v8 = (int)(this->FlashSidebarTabFrames);
  this->q0E7 = Bool_Overwrite; /*0x6ceada*/
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x6ceae9*/
                    (int)aP1,
                    (uint8_t *)(&this->vtable46),
                    (uint8_t *)aFlashsidebarta,
                    v8);
  v32 = this->q0EC; /*0x6ceaf6*/
  this->FlashSidebarTabFrames = Int_Overwrite; /*0x6ceafd*/
  this->q0EC = INIClass::ReadBool_Overwrite( /*0x6ceb08*/
                             (int)aP1,
                             (uint8_t *)(&this->vtable46),
                             (uint8_t *)aAidefendagains,
                             v32);
  v10 = INIClass::ReadBool_Overwrite( /*0x6ceb1d*/
          (int)aP1,
          (uint8_t *)(&this->vtable46),
          (uint8_t *)aPreclick,
          this->q0ED);
  v11 = (int)(this->q0EE);
  this->q0ED = v10; /*0x6ceb28*/
  v12 = INIClass::ReadBool_Overwrite((int)aP1, (uint8_t *)(&this->vtable46), (uint8_t *)aPostclick, v11); /*0x6ceb37*/
  v33 = this->q0F4; /*0x6ceb44*/
  this->q0EE = v12; /*0x6ceb4b*/
  v13 = INIClass::ReadBool_Overwrite((int)aP1, (uint8_t *)(&this->vtable46), (uint8_t *)aShowtimer, v33); /*0x6ceb51*/
  v14 = this->q0C0; /*0x6ceb56*/
  this->q0F4 = v13; /*0x6ceb5c*/
  if ( !INIClass::GetString( /*0x6ceb94*/
          aP1,
          (uint8_t *)(&this->vtable46),
          (uint8_t *)aSpecialsound,
          &g_INI_DefaultBuffer,
          v41,
          128)
    || (Index = VocClass::FindIndex(v41), Index == -1) )
  {
    Index = v14; /*0x6ceb96*/
  }
  v16 = (int)(this->q0C4);
  this->q0C0 = Index; /*0x6cebb8*/
  if ( !INIClass::GetString( /*0x6cebd6*/
          aP1,
          (uint8_t *)(&this->vtable46),
          (uint8_t *)g_INI_Key_StartSound,
          &g_INI_DefaultBuffer,
          v41,
          128)
    || (v17 = VocClass::FindIndex(v41), v17 == -1) )
  {
    v17 = v16; /*0x6cebd8*/
  }
  v18 = this->q0F8; /*0x6cebda*/
  this->q0C4 = v17; /*0x6cebe5*/
  Double_Overwrite = INIClass::ReadDouble_Overwrite( /*0x6cebf4*/
                       (int)aP1,
                       (uint8_t *)(&this->vtable46),
                       (uint8_t *)g_INI_Key_Range,
                       v18);
  v20 = this->q0FC; /*0x6cebf9*/
  this->q0F8 = Double_Overwrite; /*0x6cec01*/
  this->q0FC = INIClass::ReadInt_Overwrite( /*0x6cec13*/
                              (int)aP1,
                              (uint8_t *)(&this->vtable46),
                              (uint8_t *)aLinemultiplier,
                              v20);
  INIClass::GetString( /*0x6cec2d*/
    aP1,
    (uint8_t *)(&this->vtable46),
    (uint8_t *)g_INI_Key_Type,
    &g_INI_DefaultBuffer,
    v40,
    40);
  if ( strlen(v40) ) /*0x6cec36*/
  {
    v35 = 0; /*0x6cec42*/
    v21 = (const void **)off_8425C0; /*0x6cec46*/
    while ( _strcmpi(*v21, v40) ) /*0x6cec5d*/
    {
      ++v21; /*0x6cec63*/
      ++v35; /*0x6cec6d*/
      if ( (int)v21 >= (int)g_INI_Key_MultiMissile ) /*0x6cec71*/
        goto LABEL_18; /*0x6cec71*/
    }
    if ( v35 != -1 ) /*0x6cec7c*/
      this->Type = v35; /*0x6cec7e*/
  }
  LABEL_18:
  INIClass::GetString( /*0x6cec84*/
    aP1,
    (uint8_t *)(&this->vtable46),
    (uint8_t *)aPredependent,
    &g_INI_DefaultBuffer,
    v39,
    40);
  if ( strlen(v39) ) /*0x6ceca1*/
  {
    v36 = 0; /*0x6cecad*/
    v22 = (const void **)off_8425C0; /*0x6cecb1*/
    while ( _strcmpi(*v22, v39) ) /*0x6cecc8*/
    {
      ++v22; /*0x6cecce*/
      ++v36; /*0x6cecd8*/
      if ( (int)v22 >= (int)g_INI_Key_MultiMissile ) /*0x6cecdc*/
        goto LABEL_25; /*0x6cecdc*/
    }
    if ( v36 != -1 ) /*0x6cece7*/
      this->q0F0 = v36; /*0x6cece9*/
  }
  LABEL_25:
  v23 = this->q0C8; /*0x6cecef*/
  if ( INIClass::GetString( /*0x6ced0f*/
         aP1,
         (uint8_t *)(&this->vtable46),
         (uint8_t *)aAuxbuilding,
         &g_INI_DefaultBuffer,
         v41,
         128) )
  {
    v24 = BuildingTypeClass::FindOrCreate(v41); /*0x6ced1f*/
  }
  else
  {
    v24 = v23; /*0x6ced26*/
  }
  v25 = this->q0E5; /*0x6ced28*/
  this->q0C8 = v24; /*0x6ced2e*/
  v26 = INIClass::ReadBool_Overwrite((int)aP1, (uint8_t *)(&this->vtable46), (uint8_t *)aUsechargedrain, v25); /*0x6ced3d*/
  v34 = this->q0F5; /*0x6ced4a*/
  this->q0E5 = v26; /*0x6ced51*/
  this->q0F5 = INIClass::ReadBool_Overwrite( /*0x6ced68*/
                             (int)aP1,
                             (uint8_t *)(&this->vtable46),
                             (uint8_t *)aManualcontrol,
                             v34);
  v27 = INIClass::ReadDouble_Overwrite((int)aP1, (uint8_t *)(&this->vtable46), (uint8_t *)aRechargetime, 0.0); /*0x6ced6e*/
  if ( v27 != 0.0 ) /*0x6ced7e*/
    this->RechargeTime = Math::RoundToInt(v27 * 900.0); /*0x6ced8b*/
  v28 = (char *)(&this->LineMultiplier4); /*0x6ced9c*/
  INIClass::GetString( /*0x6cedb1*/
    aP1,
    (uint8_t *)(&this->vtable46),
    (uint8_t *)aSidebarimage,
    (char *)(&this->LineMultiplier4),
    Source,
    256);
  if ( Source ) /*0x6cedbf*/
  {
    strncpy(Destination, Source, 0x18u); /*0x6cedd6*/
    v38 = 0; /*0x6cedde*/
  }
  else
  {
    Destination[0] = (uint8_t)Source; /*0x6cedc1*/
  }
  if ( Destination != v28 ) /*0x6cede9*/
  {
    qmemcpy(v28, Destination, 0x18u); /*0x6cedf4*/
    this->q0E4 = v38; /*0x6cedf6*/
  }
  _makepath(Buffer, 0, 0, (const char *)(&this->LineMultiplier4), Ext); /*0x6cee0f*/
  v29 = SearchMIXFile(Buffer, 0); /*0x6cee20*/
  this->q0B8 = v29; /*0x6cee26*/
  if ( !v29 ) /*0x6cee2f*/
    this->q0B8 = SearchMIXFile(g_Str_File_XXICON_SHP, 0); /*0x6cee3d*/
  return 1; /*0x6cee43*/
}
}
// 0x6CEEB0
namespace gamemd {
int SuperWeaponTypeClass::FindFirstOfAction()
{
  int v1; // eax
  char *i; // edx

  v1 = 0; /*0x6ceeb8*/
  if ( g_HouseClassInitState <= 0 ) /*0x6ceebd*/
    return 0; /*0x6ceed9*/
  for ( i = (char *)g_SuperWeaponPool; *(void **)(i->u32_BC != this; i += 4 ) /*0x6ceec5*/
  {
    if ( ++v1 >= g_HouseClassInitState ) /*0x6ceed7*/
      return 0; /*0x6ceed7*/
  }
  return *((unsigned int *)g_SuperWeaponPool + v1); /*0x6ceed9*/
}
}
// 0x6CEF80
namespace gamemd {
int SuperWeaponTypeClass::SD_vt27(int a2, int a3)
{
  int v4; // eax

  if ( *(&this->uniqueId5) != 10 ) /*0x6cef8b*/
    return *(&this->uniqueId7); /*0x6cef8b*/
  if ( a3
    && (*(int (__thiscall **)(int))(*(unsigned int *)a3 + 44))(a3) == 6
    && (v4 = (*(int (__thiscall **)(int))(*(unsigned int *)a3 + 44))(a3),
        (uint8_t)HouseClass::IsAlliedWith(*(void **)(v4 == 6 ? a3 + 0x21C : 540), HouseClass_Player)) )
  {
    return *(&this->uniqueId7); /*0x6cefd3*/
  }
  else
  {
    return 70; /*0x6cefca*/
  }
}
}
// 0x6CEFE0
namespace gamemd {
SuperWeaponTypeClass * SuperWeaponTypeClass::SDDTOR(char a2)
{
  int v3; // eax
  unsigned int *v5; // [esp+4h] [ebp-4h] BYREF

  v3 = (*(int (__thiscall **)(int *, unsigned int **))(dword_A8E330 + 16))(&dword_A8E330, &this); /*0x6cf013*/
  if ( v3 != -1 && v3 < g_HouseClassInitState && v3 < --g_HouseClassInitState ) /*0x6cf02e*/
  {
    do /*0x6cf046*/
    {
      ++v3; /*0x6cf036*/
      *((unsigned int *)g_SuperWeaponPool + v3 - 1) = *((unsigned int *)g_SuperWeaponPool + v3); /*0x6cf03a*/
    }
    while ( v3 < g_HouseClassInitState ); /*0x6cf046*/
  }
  AbstractTypeClass::Dtor(); /*0x6cf04a*/
  if ( (a2 & 1) != 0 ) /*0x6cf054*/
    RA2_OPDEL(); /*0x6cf057*/
  return this; /*0x6cf061*/
}
} // namespace gamemd

// 0x474EE0
namespace gamemd {
int SuperWeaponTypeClass::loadSWProperties(CCINIClass * aP1, unsigned char * a2, int a4)
{
  int v4; // edi
  const void **v5; // esi
  char Destination[32]; // [esp+8h] [ebp-20h] BYREF

  INIClass::GetString(aP1, a2, (&off_7E4C50)[a4], Destination, 32); /*0x474f02*/
  v4 = 0; /*0x474f07*/
  v5 = (const void **)&off_7E4C50; /*0x474f09*/
  while ( _strcmpi(Destination, *v5) ) /*0x474f20*/
  {
    ++v5; /*0x474f22*/
    ++v4; /*0x474f25*/
    if ( (int)v5 >= (int)&off_7E4D74 ) /*0x474f2c*/
      return 0; /*0x474f35*/
  }
  return v4; /*0x474f2e*/
}
} // namespace gamemd

// 0x475540
namespace gamemd {
int SuperWeaponTypeClass::FindOrCreate(INIClass * aP1, unsigned char * a2, CCINIClass * aP3)
{
  void *v4; // esi
  int result; // eax
  int v6; // eax
  int v7; // ecx
  unsigned int *i; // edx
  char Destination[128]; // [esp+4h] [ebp-80h] BYREF

  if ( !INIClass::GetString(this, aP1, a2, &g_INI_DefaultBuffer, Destination, 128) ) /*0x475563*/
    return aP3; /*0x4755f8*/
  v4 = (void *)PlayerSlot::NameToDialogID(Destination); /*0x475579*/
  if ( BuildingType::IsSpecialType(v4) ) /*0x47557d*/
    return (int)v4; /*0x475586*/
  result = SuperWeaponTypeClass::FindByName(Destination); /*0x475596*/
  if ( result == -1 ) /*0x47559e*/
  {
    if ( operator new(0x1B0u) ) /*0x4755a5*/
      v6 = SuperWeaponTypeClass::Construct(Destination); /*0x4755b8*/
    else
      v6 = 0; /*0x4755bf*/
    v7 = 0; /*0x4755c7*/
    if ( g_SuperWeaponTypeArray <= 0 ) /*0x4755cb*/
    {
      return -1; /*0x4755df*/
    }
    else
    {
      for ( i = g_SuperWeaponTypeCount; *i != v6; ++i ) /*0x4755cd*/
      {
        if ( ++v7 >= g_SuperWeaponTypeArray ) /*0x4755dd*/
          return -1; /*0x4755dd*/
      }
      return v7; /*0x4755ec*/
    }
  }
  return result; /*0x475588*/
}
} // namespace gamemd

// 0x5117D0
namespace gamemd {
int SuperWeaponTypeClass::FindByName()
{
  int v3; // ebx
  unsigned int *v4; // esi

  if ( !_strcmpi(this, g_Str__random_) ) /*0x5117db*/
    return -2; /*0x5117e9*/
  if ( !this ) /*0x5117f2*/
    return -1; /*0x5117f2*/
  v3 = 0; /*0x5117f9*/
  if ( g_SuperWeaponTypeArray <= 0 ) /*0x5117fd*/
    return -1; /*0x511833*/
  while ( 1 ) /*0x511805*/
  {
    v4 = (unsigned int *)*((unsigned int *)g_SuperWeaponTypeCount + v3); /*0x511805*/
    if ( !_strcmpi(v4 + 25, this) || !_strcmpi(v4 + 9, this) ) /*0x51181d*/
      break; /*0x51181d*/
    if ( ++v3 >= g_SuperWeaponTypeArray ) /*0x511831*/
      return -1; /*0x511831*/
  }
  return v4[46]; /*0x5117e7*/
}
} // namespace gamemd

// 0x6CE5B0
namespace gamemd {
SuperWeaponTypeClass::SuperWeaponTypeClass(ObjectClass * aP1)
{
  int v3; // eax

  AbstractTypeClass::Constructor(aP1); /*0x6ce5bb*/
  this->q270 = 0; /*0x6ce5cb*/
  this->q280 = -1; /*0x6ce5d1*/
  *(unsigned int *)&this->q290 = -1; /*0x6ce5d7*/
  this->q2A0 = -1; /*0x6ce5dd*/
  this->q2B0 = -1; /*0x6ce5e3*/
  *(unsigned int *)&this->q2C0 = 4500; /*0x6ce5e9*/
  *(unsigned int *)((char *)&this->q2C0 + 16) = -1; /*0x6ce5f3*/
  *(unsigned int *)&this->q2E0 = 0; /*0x6ce5f9*/
  *(unsigned int *)((char *)&this->q2E0 + 16) = 0; /*0x6ce5ff*/
  this->q300 = -1; /*0x6ce605*/
  this->q310 = -1; /*0x6ce60b*/
  this->q320 = 0; /*0x6ce611*/
  *(unsigned char *)&this->SidebarImageFile = 0; /*0x6ce617*/
  *(unsigned int *)((char *)&this->q394 + 12) = -1; /*0x6ce619*/
  *(unsigned int *)&this->q3C0 = -1; /*0x6ce61f*/
  this->q0E5 = 0; /*0x6ce628*/
  this->q0E6 = 1; /*0x6ce62f*/
  this->q0E7 = 0; /*0x6ce636*/
  this->q0EC = 0; /*0x6ce63c*/
  this->q0ED = 0; /*0x6ce642*/
  this->q0EE = 0; /*0x6ce648*/
  this->q0F4 = 0; /*0x6ce64e*/
  this->q0F5 = 0; /*0x6ce654*/
  *(unsigned int *)((char *)&this->q3DB + 5) = 0; /*0x6ce65a*/
  *(unsigned int *)((char *)&this->q3E8 + 8) = 0; /*0x6ce660*/
  this->AbstractClass_4.GenerateUniqueID(); /*0x6ce681*/
  this->q260 = g_HouseClassInitState; /*0x6ce68c*/
  if ( g_HouseClassInitState < dword_A8E338 /*0x6ce6c4*/
    || (byte_A8E33D || !dword_A8E338)
    && dword_A8E344 > 0
    && (*(uint8_t (__thiscall **)(int *, int, unsigned int))(dword_A8E330 + 8))(
         &dword_A8E330,
         dword_A8E338 + dword_A8E344,
         0) )
  {
    v3 = g_HouseClassInitState++; /*0x6ce6d1*/
    *((unsigned int *)g_SuperWeaponPool + v3) = this; /*0x6ce6e0*/
  }
  if ( &this->ActionValue != &this->SidebarImageFile ) /*0x6ce6e8*/
    qmemcpy((void *)&this->q330, (const void *)&this->u32_90, 0x19u); /*0x6ce6ef*/
  return this; /*0x6ce6f2*/
}
} // namespace gamemd

// 0x6CE7C0
namespace gamemd {
int SuperWeaponTypeClass::SD_vt03(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x6ce7c6*/
    return -2147467261; /*0x6ce7c8*/
  *a2 = 217234663; /*0x6ce7d6*/
  a2[1] = 298989284; /*0x6ce7de*/
  a2[2] = 1610668216; /*0x6ce7e7*/
  a2[3] = -318126072; /*0x6ce7f0*/
  return 0; /*0x6ce7cd*/
}
} // namespace gamemd

// 0x6CE800
namespace gamemd {
int SuperWeaponTypeClass::SaveLoad_Prefix(int a1, int a2)
{
  int result; // eax
  int v3; // eax
  char v4; // [esp+7h] [ebp-201h] BYREF
  char Buffer[512]; // [esp+8h] [ebp-200h] BYREF

  result = AbstractClass::SaveLoad_Prefix_0((unsigned int *)a1, a2); /*0x6ce814*/
  if ( result >= 0 ) /*0x6ce81b*/
  {
    if ( a1 ) /*0x6ce823*/
    {
      AbstractTypeClass::Init(a1, (int)&v4); /*0x6ce82c*/
      *(unsigned int *)(a1 + 184) = 0; /*0x6ce831*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a1 + 156)); /*0x6ce862*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(a1 + 200)); /*0x6ce873*/
    _makepath(Buffer, 0, 0, (const char *)(a1 + 204), Ext); /*0x6ce88d*/
    v3 = SearchMIXFile(Buffer, 0); /*0x6ce89b*/
    *(unsigned int *)(a1 + 184) = v3; /*0x6ce8a2*/
    if ( !v3 ) /*0x6ce8a8*/
      *(unsigned int *)(a1 + 184) = SearchMIXFile(g_Str_File_XXICON_SHP, 0); /*0x6ce8b6*/
    return 0; /*0x6ce8bc*/
  }
  return result; /*0x6ce8be*/
}
} // namespace gamemd

// 0x6CE8D0
namespace gamemd {
int SuperWeaponTypeClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2)
{
  int result; // eax

  result = AbstractClass::SaveLoad_Prefix(aP0, a1, aP2); /*0x6ce8df*/
  if ( result >= 0 ) /*0x6ce8e6*/
    return 0; /*0x6ce8e8*/
  return result; /*0x6ce8ea*/
}
} // namespace gamemd

// 0x6CE8F0
namespace gamemd {
int SuperWeaponTypeClass::SD_vt11()
{
  return 32; /*0x6ce8f5*/
}
} // namespace gamemd

// 0x6CE900
namespace gamemd {
int SuperWeaponTypeClass::SD_vt12()
{
  return 256; /*0x6ce905*/
}
} // namespace gamemd

// 0x6CE910
namespace gamemd {
int SuperWeaponTypeClass::SD_vt13(int * a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  int v7; // edx
  int v8; // edx
  int v9; // eax

  AbstractTypeClass::ProcessPower(a2); /*0x6ce919*/
  Power::TimerProcess(this->ArrayIndex); /*0x6ce927*/
  Power::TimerProcess(this->q0BC); /*0x6ce935*/
  Power::TimerProcess(this->RechargeVoice); /*0x6ce943*/
  Power::TimerProcess(this->q0A4); /*0x6ce951*/
  Power::TimerProcess(this->q0A8); /*0x6ce95f*/
  v3 = Power::TimerProcess(this->SuspendVoice); /*0x6ce96d*/
  IDA_LOBYTE(v3) = this->q0E6; /*0x6ce972*/
  Power::FlagProcess(a2, v3); /*0x6ce97b*/
  IDA_LOBYTE(v4) = this->q0E7; /*0x6ce980*/
  Power::FlagProcess(a2, v4); /*0x6ce989*/
  IDA_LOBYTE(v5) = this->q0ED; /*0x6ce98e*/
  v6 = Power::FlagProcess(a2, v5); /*0x6ce997*/
  IDA_LOBYTE(v6) = this->q0EE; /*0x6ce99c*/
  Power::FlagProcess(a2, v6); /*0x6ce9a5*/
  Power::TimerProcess(this->q0F0); /*0x6ce9b3*/
  IDA_LOBYTE(v7) = this->q0F4; /*0x6ce9b8*/
  Power::FlagProcess(a2, v7); /*0x6ce9c1*/
  Power::TimerProcess(this->RechargeTime); /*0x6ce9cf*/
  Power::TimerProcess(this->Type); /*0x6ce9dd*/
  IDA_LOBYTE(v8) = this->q0E5; /*0x6ce9e2*/
  v9 = Power::FlagProcess(a2, v8); /*0x6ce9eb*/
  IDA_LOBYTE(v9) = this->q0F5; /*0x6ce9f0*/
  return Power::FlagProcess(a2, v9); /*0x6ce9fe*/
}
} // namespace gamemd

// 0x6CEA10
namespace gamemd {
int SuperWeaponTypeClass::SD_vt16()
{
  return *(&this->vtable48); /*0x6cea16*/
}
} // namespace gamemd
