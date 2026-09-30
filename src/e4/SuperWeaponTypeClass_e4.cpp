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
#include "e4/classes/Super_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/SuperWeapon_e4.hpp"

// 0x4F6540
namespace gamemd {
AbstractClass * * SuperWeaponTypeClass::IsAvailable()
{

  int v2; // edi
  char v3; // cl
  int v4; // eax
  int v5; // edx
  int v6; // ecx
  int v7; // edi
  int v8; // ebp
  int v9; // ecx
  int v11; // ebp
  unsigned int *BuildableFromArray; // eax
  int v13; // edi
  char v14; // cl
  int v15; // eax
  int v16; // edx
  int v17; // ecx
  int v18; // edi
  int v19; // ebp
  int v20; // ecx
  int v21; // edi
  int v22; // edx
  int v23; // ecx
  int v24; // eax
  int v25; // edi
  int v26; // ebp
  int v27; // edi
  unsigned int *v28; // eax
  AbstractClass *v29; // ebx
  unsigned int *v30; // eax
  int v31; // eax
  bool v32; // [esp+12h] [ebp-Ah]
  bool v33; // [esp+13h] [ebp-9h]
  bool v34; // [esp+14h] [ebp-8h]
  bool v35; // [esp+15h] [ebp-7h]
  bool v36; // [esp+16h] [ebp-6h]
  bool v37; // [esp+17h] [ebp-5h]
  int v38; // [esp+18h] [ebp-4h]

  v36 = *((unsigned int *)this + 87) > 0; /*0x4f6565*/
  v33 = *((unsigned int *)this + 86) > 0; /*0x4f656c*/
  v37 = *((unsigned int *)this + 88) > 0; /*0x4f6573*/
  v2 = *(unsigned int *)&MEMORY[0x87F8E4].__pad_5568[9108] + 2848; /*0x4f657d*/
  v32 = *((unsigned int *)this + 24) > 0; /*0x4f6583*/
  v3 = SuperWeaponTypeClass::FindByName((void *)(*((unsigned int *)this + 13) + 152)); /*0x4f6598*/
  v4 = *(unsigned int *)(v2 + 16); /*0x4f659a*/
  v5 = 1 << v3; /*0x4f659d*/
  v6 = 0; /*0x4f659f*/
  if ( v4 <= 0 ) /*0x4f65a3*/
  {
LABEL_5:
    v9 = 0; /*0x4f65bd*/
  }
  else
  {
    v7 = *(unsigned int *)(v2 + 4); /*0x4f65a5*/
    v8 = v7; /*0x4f65a8*/
    while ( (v5 & *(unsigned int *)(*(unsigned int *)v8 + 1740)) == 0 ) /*0x4f65b3*/
    {
      ++v6; /*0x4f65b5*/
      v8 += 4; /*0x4f65b6*/
      if ( v6 >= v4 ) /*0x4f65bb*/
        goto LABEL_5; /*0x4f65bb*/
    }
    v9 = *(unsigned int *)(v7 + 4 * v6); /*0x4f65f4*/
  }
  if ( DynamicVector::GetOrGrow((unsigned int *)this + 5465, *(DynamicVector **)(v9 + 3576)) ) /*0x4f65cc*/
    v32 = 1; /*0x4f65d5*/
  if ( v36 && v33 ) /*0x4f65e8*/
    return 1; /*0x4f65f3*/
  v11 = (*(int (**)(unsigned int *))(*((unsigned int *)this + 9) + 24))((unsigned int *)this + 9); /*0x4f6603*/
  v38 = v11; /*0x4f6612*/
  BuildableFromArray = HouseClass::FirstBuildableFromArray( /*0x4f6616*/
                         this,
                         (AbstractClass *)(*(unsigned int *)&MEMORY[0x87F8E4].__pad_5568[9108] + 2276));
  v13 = *(unsigned int *)&MEMORY[0x87F8E4].__pad_5568[9108] + 2876; /*0x4f6623*/
  v34 = BuildableFromArray != 0; /*0x4f662c*/
  v14 = SuperWeaponTypeClass::FindByName((void *)(*((unsigned int *)this + 13) + 152)); /*0x4f6641*/
  v15 = *(unsigned int *)(v13 + 16); /*0x4f6643*/
  v16 = 1 << v14; /*0x4f6646*/
  v17 = 0; /*0x4f6648*/
  if ( v15 <= 0 ) /*0x4f664c*/
  {
LABEL_17:
    v20 = 0; /*0x4f666a*/
  }
  else
  {
    v18 = *(unsigned int *)(v13 + 4); /*0x4f664e*/
    v19 = v18; /*0x4f6651*/
    while ( (v16 & *(unsigned int *)(*(unsigned int *)v19 + 1740)) == 0 ) /*0x4f665c*/
    {
      ++v17; /*0x4f665e*/
      v19 += 4; /*0x4f665f*/
      if ( v17 >= v15 ) /*0x4f6664*/
      {
        v11 = v38; /*0x4f6666*/
        goto LABEL_17; /*0x4f6666*/
      }
    }
    v20 = *(unsigned int *)(v18 + 4 * v17); /*0x4f66d6*/
    v11 = v38; /*0x4f66d9*/
  }
  v35 = v20 != 0; /*0x4f6673*/
  if ( v20 ) /*0x4f6677*/
  {
    v21 = *(unsigned int *)&MEMORY[0x87F8E4].__pad_5568[9108] + 2876; /*0x4f668c*/
    v22 = 1 << SuperWeaponTypeClass::FindByName((void *)(*((unsigned int *)this + 13) + 152)); /*0x4f669e*/
    v23 = *(unsigned int *)(v21 + 16); /*0x4f66a0*/
    v24 = 0; /*0x4f66a3*/
    if ( v23 <= 0 ) /*0x4f66a7*/
    {
      v27 = (*(int (**)(unsigned int, unsigned int *))(MEMORY[0] + 132))(0, this); /*0x4f6702*/
    }
    else
    {
      v25 = *(unsigned int *)(v21 + 4); /*0x4f66a9*/
      v26 = v25; /*0x4f66ac*/
      while ( (v22 & *(unsigned int *)(*(unsigned int *)v26 + 1740)) == 0 ) /*0x4f66b7*/
      {
        ++v24; /*0x4f66b9*/
        v26 += 4; /*0x4f66ba*/
        if ( v24 >= v23 ) /*0x4f66bf*/
        {
          v11 = v38; /*0x4f66c1*/
          v27 = (*(int (**)(unsigned int, unsigned int *))(MEMORY[0] + 132))(0, this); /*0x4f66d2*/
          goto LABEL_28; /*0x4f66d4*/
        }
      }
      v11 = v38; /*0x4f66e2*/
      v27 = (*(int (**)(unsigned int, unsigned int *))(**(unsigned int **)(v25 + 4 * v24) + 132))( /*0x4f66f1*/
              *(unsigned int *)(v25 + 4 * v24),
              this);
    }
  }
  else
  {
    v27 = 0x7FFFFFFF; /*0x4f6706*/
  }
LABEL_28: v28 = (unsigned int *)(HouseClass::FirstBuildableFromArray( /*0x4f670b*/ this, (AbstractClass *)(*(unsigned int *)&MEMORY[0x87F8E4].__pad_5568[9108] + 2360)));
  v29 = (AbstractClass *)(*(int (**)(unsigned int *, unsigned int *))(*v28 + 132))(v28, this); /*0x4f6728*/
  if ( !v34 && v35 ) /*0x4f6738*/
  {
    if ( v33 ) /*0x4f6740*/
      return 1; /*0x4f674b*/
    if ( v37 && v11 >= v27 ) /*0x4f6756*/
      return 1; /*0x4f6761*/
    return v32 && v11 >= (int)&v29->__pad_0[v27]; /*0x4f6772*/
  }
  v30 = (unsigned int *)(HouseClass::FirstBuildableFromArray( /*0x4f678f*/ this, (AbstractClass *)(*(unsigned int *)&MEMORY[0x87F8E4].__pad_5568[9108] + 2276)));
  v31 = (*(int (**)(unsigned int *, unsigned int *))(*v30 + 132))(v30, this); /*0x4f6799*/
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
    return (gamemd::AbstractClass **)(1);
  }
  return 0; /*0x4f65ea*/

}
}
// 0x5113F0
namespace gamemd {
int SuperWeaponTypeClass::Construct(AbstractClass * aP1)
{

  int v3; // ebx
  int v4; // eax
  bool v5; // zf
  int v6; // ecx
  CCINIClass *v7; // edx
  CCINIClass *v8; // ecx

  AbstractTypeClass::Constructor((int)this, aP1); /*0x5113fa*/
  v3 = 0; /*0x5113ff*/
  *((unsigned char *)this + 152) = 0; /*0x511404*/
  *((unsigned int *)this + 45) = -1; /*0x51140a*/
  *((unsigned int *)this + 46) = -1; /*0x511410*/
  *((unsigned int *)this + 47) = -1; /*0x511416*/
  *((unsigned int *)this + 48) = 0; /*0x51141c*/
  *((unsigned int *)this + 50) = 0; /*0x511427*/
  *((unsigned int *)this + 51) = 1072693248; /*0x51142d*/
  *((unsigned int *)this + 52) = 0; /*0x511433*/
  *((unsigned int *)this + 53) = 1072693248; /*0x511439*/
  *((unsigned int *)this + 54) = 0; /*0x51143f*/
  *((unsigned int *)this + 55) = 1072693248; /*0x511445*/
  *((unsigned int *)this + 56) = 0; /*0x51144b*/
  *((unsigned int *)this + 57) = 1072693248; /*0x511451*/
  *((unsigned int *)this + 58) = 0; /*0x511457*/
  *((unsigned int *)this + 60) = 0; /*0x51145d*/
  *((unsigned int *)this + 62) = 0; /*0x511463*/
  *((unsigned int *)this + 59) = 1072693248; /*0x511469*/
  *((unsigned int *)this + 61) = 1072693248; /*0x51146f*/
  *((unsigned int *)this + 63) = 1072693248; /*0x511475*/
  *((unsigned int *)this + 64) = 1065353216; /*0x51148a*/
  *((unsigned int *)this + 65) = 1065353216; /*0x511490*/
  *((unsigned int *)this + 66) = 1065353216; /*0x511496*/
  *((unsigned int *)this + 67) = 1065353216; /*0x51149c*/
  *((unsigned int *)this + 68) = 1065353216; /*0x5114a2*/
  *((unsigned int *)this + 69) = 1065353216; /*0x5114a8*/
  *((unsigned int *)this + 70) = 1065353216; /*0x5114ae*/
  *((unsigned int *)this + 71) = 1065353216; /*0x5114b4*/
  *((unsigned int *)this + 72) = 1065353216; /*0x5114ba*/
  *((unsigned int *)this + 73) = 1065353216; /*0x5114c0*/
  *((unsigned int *)this + 74) = 1065353216; /*0x5114c6*/
  *((unsigned int *)this + 75) = 1065353216; /*0x5114cc*/
  *((unsigned int *)this + 76) = 1065353216; /*0x5114d2*/
  *((unsigned int *)this + 77) = 1065353216; /*0x5114d8*/
  *((unsigned int *)this + 78) = 1065353216; /*0x5114de*/
  *((unsigned int *)this + 79) = 1065353216; /*0x5114e4*/
  *((unsigned int *)this + 80) = 1065353216; /*0x5114ea*/
  *((unsigned int *)this + 81) = 1065353216; /*0x5114f0*/
  *((unsigned int *)this + 82) = 1065353216; /*0x5114f6*/
  InfantryTypeVector::Construct2((unsigned int *)this + 83, 0, 0); /*0x5114fc*/
  *((unsigned int *)this + 88) = 10; /*0x511501*/
  *((unsigned int *)this + 87) = 0; /*0x511508*/
  *((unsigned int *)this + 83) = &vt_TypeList_InfantryTypeClass_const; /*0x51150b*/
  UnitTypeVector::ConstructUnitTypeVectorClass((unsigned int *)this + 90, 0, 0); /*0x51151b*/
  *((unsigned int *)this + 95) = 10; /*0x511520*/
  *((unsigned int *)this + 94) = 0; /*0x511527*/
  *((unsigned int *)this + 90) = &vt_TypeList_UnitTypeClass_const; /*0x51152a*/
  AircraftTypeVector::Constructor((unsigned int *)this + 97, 0, 0); /*0x51153a*/
  *((unsigned int *)this + 102) = 10; /*0x511542*/
  *((unsigned int *)this + 101) = 0; /*0x511549*/
  *((unsigned int *)this + 97) = &vt_TypeList_AircraftTypeClass_const; /*0x51154c*/
  *((unsigned char *)this + 420) = 65; /*0x511552*/
  *((unsigned char *)this + 421) = 0; /*0x511559*/
  *((unsigned char *)this + 422) = 0; /*0x51155f*/
  *((unsigned char *)this + 423) = 1; /*0x511565*/
  *((unsigned char *)this + 424) = 0; /*0x51156c*/
  *(unsigned int *)this = &HouseTypeClass::`vftable'; /*0x511572*/
  *((unsigned int *)this + 1) = &HouseTypeClass::`vftable'; /*0x511578*/
  *((unsigned int *)this + 2) = &HouseTypeClass::`vftable'; /*0x51157f*/
  *((unsigned int *)this + 3) = &vt_HouseTypeClass; /*0x511586*/
  AbstractClass::GenerateUniqueID((int)((unsigned char *)this + 4)); /*0x51158d*/
  *((unsigned char *)this + 416) = 0; /*0x511592*/
  v4 = g_SuperWeaponTypeArray; /*0x511598*/
  if ( g_SuperWeaponTypeArray < dword_A83CA0 /*0x5115d6*/
    || (byte_A83CA5 || !dword_A83CA0)
    && dword_A83CAC > 0
    && (v5 = ((uint8_t (*)(DynamicVector **, int, unsigned int))dword_A83C98->field_8)(
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
    v7 = (CCINIClass *)g_SuperWeaponTypeCount; /*0x5115f3*/
    while ( *(unsigned char **)v7->__pad_0 != this ) /*0x5115fb*/
    {
      ++v6; /*0x5115fd*/
      v7 = (CCINIClass *)((char *)v7 + 4); /*0x5115fe*/
      if ( v6 >= v4 ) /*0x511603*/
        goto LABEL_11; /*0x511603*/
    }
  }
  *((unsigned int *)this + 46) = v6; /*0x511608*/
  if ( g_SuperWeaponTypeArray <= 0 ) /*0x511615*/
  {
LABEL_16:
    *((unsigned int *)this + 45) = -1; /*0x511629*/
    return this; /*0x511633*/
  }
  else
  {
    v8 = (CCINIClass *)g_SuperWeaponTypeCount; /*0x511617*/
    while ( *(unsigned char **)v8->__pad_0 != this ) /*0x51161f*/
    {
      ++v3; /*0x511621*/
      v8 = (CCINIClass *)((char *)v8 + 4); /*0x511622*/
      if ( v3 >= g_SuperWeaponTypeArray ) /*0x511627*/
        goto LABEL_16; /*0x511627*/
    }
    *((unsigned int *)this + 45) = v3; /*0x51163a*/
    return this; /*0x511640*/
  }

}
}
// 0x6CEA20
namespace gamemd {
void* SuperWeaponTypeClass::SD_vt25(unsigned char *** aP1)
{

  WeaponTypeClass *v3; // edi
  WeaponTypeClass *v4; // eax
  int v5; // ecx
  int SWProperties; // eax
  char Bool_Overwrite; // al
  INIClass *aP3; // ecx
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
  CCINIClass *v20; // edx
  char **v21; // edi
  char **v22; // edi
  BuildingTypeClass *v23; // edi
  BuildingTypeClass *v24; // eax
  char v25; // cl
  char v26; // al
  double v27; // st7
  CCINIClass *v28; // edi
  int v29; // eax
  char aP3_4; // [esp+4h] [ebp-404h]
  char aP3_4a; // [esp+4h] [ebp-404h]
  char aP3_4b; // [esp+4h] [ebp-404h]
  char aP3_4c; // [esp+4h] [ebp-404h]
  int v35; // [esp+18h] [ebp-3F0h]
  int v36; // [esp+18h] [ebp-3F0h]
  char Destination[24]; // [esp+1Ch] [ebp-3ECh] BYREF
  char v38; // [esp+34h] [ebp-3D4h]
  INIClass aP4; // [esp+38h] [ebp-3D0h] BYREF
  INIClass v40; // [esp+88h] [ebp-380h] BYREF
  INIClass Source[4]; // [esp+108h] [ebp-300h] BYREF
  char Buffer[512]; // [esp+208h] [ebp-200h] BYREF

  INIClass::ResetSection(aP1); /*0x6cea33*/
  if ( !AbstractTypeClass::LoadFromINI(this, (AbstractTypeClass *)aP1) ) /*0x6cea3b*/
    return 0; /*0x6cee51*/
  v3 = *(WeaponTypeClass **)((char *)this + 156); /*0x6cea4a*/
  if ( INIClass::GetString( /*0x6cea6d*/
         aP1,
         (INIClass *)((char *)this + 36),
         (uint8_t *)&stru_817244.sectionHead[2],
         (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
         &v40,
         128) )
  {
    v4 = InfantryTypeClass::Find(v40.__pad_0); /*0x6cea7d*/
  }
  else
  {
    v4 = v3; /*0x6cea84*/
  }
  v5 = *((unsigned int *)this + 47); /*0x6cea86*/
  *((unsigned int *)this + 39) = v4; /*0x6cea8c*/
  SWProperties = SuperWeaponTypeClass::loadSWProperties( /*0x6cea9b*/
                   aP1,
                   (CCINIClass *)((char *)this + 36),
                   (uint8_t *)&stru_817244.INIClass_field_2C,
                   v5);
  aP3_4 = *((unsigned char *)this + 230); /*0x6ceaa8*/
  *((unsigned int *)this + 47) = SWProperties; /*0x6ceaaf*/
  *((unsigned char *)this + 230) = INIClass::ReadBool_Overwrite( /*0x6ceaba*/
                             (int)aP1,
                             (uint8_t *)((char *)this + 36),
                             (CCINIClass *)&stru_830620.__pad_579C[51536],
                             aP3_4);
  Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x6ceacf*/
                     (int)aP1,
                     (uint8_t *)((char *)this + 36),
                     (CCINIClass *)&stru_830620.__pad_579C[51512],
                     *((unsigned char *)this + 231));
  aP3 = *(INIClass **)((char *)this + 232); /*0x6cead4*/
  *((unsigned char *)this + 231) = Bool_Overwrite; /*0x6ceada*/
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x6ceae9*/
                    (int)aP1,
                    (uint8_t *)((char *)this + 36),
                    (CCINIClass *)&stru_830620.__pad_579C[51488],
                    aP3);
  aP3_4a = *((unsigned char *)this + 236); /*0x6ceaf6*/
  *((unsigned int *)this + 58) = Int_Overwrite; /*0x6ceafd*/
  *((unsigned char *)this + 236) = INIClass::ReadBool_Overwrite( /*0x6ceb08*/
                             (int)aP1,
                             (uint8_t *)((char *)this + 36),
                             (CCINIClass *)&stru_830620.__pad_579C[51472],
                             aP3_4a);
  v10 = INIClass::ReadBool_Overwrite( /*0x6ceb1d*/
          (int)aP1,
          (uint8_t *)((char *)this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[51460],
          *((unsigned char *)this + 237));
  v11 = *((unsigned char *)this + 238); /*0x6ceb22*/
  *((unsigned char *)this + 237) = v10; /*0x6ceb28*/
  v12 = INIClass::ReadBool_Overwrite( /*0x6ceb37*/
          (int)aP1,
          (uint8_t *)((char *)this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[51448],
          v11);
  aP3_4b = *((unsigned char *)this + 244); /*0x6ceb44*/
  *((unsigned char *)this + 238) = v12; /*0x6ceb4b*/
  v13 = INIClass::ReadBool_Overwrite( /*0x6ceb51*/
          (int)aP1,
          (uint8_t *)((char *)this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[51436],
          aP3_4b);
  v14 = *((unsigned int *)this + 48); /*0x6ceb56*/
  *((unsigned char *)this + 244) = v13; /*0x6ceb5c*/
  if ( !INIClass::GetString( /*0x6ceb94*/
          aP1,
          (INIClass *)((char *)this + 36),
          (uint8_t *)&stru_830620.__pad_579C[51420],
          (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
          &v40,
          128)
    || (Index = VocClass::FindIndex(&v40), Index == -1) )
  {
    Index = v14; /*0x6ceb96*/
  }
  v16 = *((unsigned int *)this + 49); /*0x6ceb98*/
  *((unsigned int *)this + 48) = Index; /*0x6cebb8*/
  if ( !INIClass::GetString( /*0x6cebd6*/
          aP1,
          (INIClass *)((char *)this + 36),
          &unk_818418,
          (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
          &v40,
          128)
    || (v17 = VocClass::FindIndex(&v40), v17 == -1) )
  {
    v17 = v16; /*0x6cebd8*/
  }
  v18 = *(float *)((char *)this + 248); /*0x6cebda*/
  *((unsigned int *)this + 49) = v17; /*0x6cebe5*/
  Double_Overwrite = INIClass::ReadDouble_Overwrite( /*0x6cebf4*/
                       (int)aP1,
                       (INIClass *)((char *)this + 36),
                       (uint8_t *)&stru_830620.__pad_579C[51412],
                       (INIClass *)LODWORD(v18));
  v20 = *(CCINIClass **)((char *)this + 252); /*0x6cebf9*/
  *(float *)((char *)this + 248) = Double_Overwrite; /*0x6cec01*/
  *((unsigned int *)this + 63) = INIClass::ReadInt_Overwrite( /*0x6cec13*/
                              (int)aP1,
                              (uint8_t *)((char *)this + 36),
                              (CCINIClass *)&stru_830620.__pad_579C[51396],
                              (INIClass *)v20);
  INIClass::GetString( /*0x6cec2d*/
    aP1,
    (INIClass *)((char *)this + 36),
    (uint8_t *)g_INI_Key_Type,
    (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
    (INIClass *)&aP4.__pad_20[8],
    40);
  if ( strlen(&aP4.__pad_20[8]) ) /*0x6cec36*/
  {
    v35 = 0; /*0x6cec42*/
    v21 = (char **)&stru_830620.__pad_579C[51204]; /*0x6cec46*/
    while ( _strcmpi(*v21, &aP4.__pad_20[8]) ) /*0x6cec5d*/
    {
      ++v21; /*0x6cec63*/
      ++v35; /*0x6cec6d*/
      if ( (int)v21 >= (int)&stru_830620.__pad_579C[51252] ) /*0x6cec71*/
        goto LABEL_18; /*0x6cec71*/
    }
    if ( v35 != -1 ) /*0x6cec7c*/
      *((unsigned int *)this + 45) = v35; /*0x6cec7e*/
  }
LABEL_18:
  INIClass::GetString( /*0x6cec84*/
    aP1,
    (INIClass *)((char *)this + 36),
    (uint8_t *)&stru_830620.__pad_579C[51380],
    (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
    &aP4,
    40);
  if ( strlen(aP4.__pad_0) ) /*0x6ceca1*/
  {
    v36 = 0; /*0x6cecad*/
    v22 = (char **)&stru_830620.__pad_579C[51204]; /*0x6cecb1*/
    while ( _strcmpi(*v22, aP4.__pad_0) ) /*0x6cecc8*/
    {
      ++v22; /*0x6cecce*/
      ++v36; /*0x6cecd8*/
      if ( (int)v22 >= (int)&stru_830620.__pad_579C[51252] ) /*0x6cecdc*/
        goto LABEL_25; /*0x6cecdc*/
    }
    if ( v36 != -1 ) /*0x6cece7*/
      *((unsigned int *)this + 60) = v36; /*0x6cece9*/
  }
LABEL_25:
  v23 = *(BuildingTypeClass **)((char *)this + 200); /*0x6cecef*/
  if ( INIClass::GetString( /*0x6ced0f*/
         aP1,
         (INIClass *)((char *)this + 36),
         (uint8_t *)&stru_830620.__pad_579C[51368],
         (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
         &v40,
         128) )
  {
    v24 = BuildingTypeClass::FindOrCreate(v40.__pad_0); /*0x6ced1f*/
  }
  else
  {
    v24 = v23; /*0x6ced26*/
  }
  v25 = *((unsigned char *)this + 229); /*0x6ced28*/
  *((unsigned int *)this + 50) = v24; /*0x6ced2e*/
  v26 = INIClass::ReadBool_Overwrite( /*0x6ced3d*/
          (int)aP1,
          (uint8_t *)((char *)this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[51352],
          v25);
  aP3_4c = *((unsigned char *)this + 245); /*0x6ced4a*/
  *((unsigned char *)this + 229) = v26; /*0x6ced51*/
  *((unsigned char *)this + 245) = INIClass::ReadBool_Overwrite( /*0x6ced68*/
                             (int)aP1,
                             (uint8_t *)((char *)this + 36),
                             (CCINIClass *)&stru_830620.__pad_579C[51336],
                             aP3_4c);
  v27 = INIClass::ReadDouble_Overwrite( /*0x6ced6e*/
          (int)aP1,
          (INIClass *)((char *)this + 36),
          (uint8_t *)&stru_830620.__pad_579C[51320],
          0);
  if ( v27 != 0.0 ) /*0x6ced7e*/
    *((unsigned int *)this + 44) = Math::RoundToInt(v27 * 900.0); /*0x6ced8b*/
  v28 = (CCINIClass *)((char *)this + 204); /*0x6ced9c*/
  INIClass::GetString( /*0x6cedb1*/
    aP1,
    (INIClass *)((char *)this + 36),
    (uint8_t *)&stru_830620.__pad_579C[51304],
    (INIClass *)((char *)this + 204),
    Source,
    256);
  if ( Source ) /*0x6cedbf*/
  {
    strncpy(Destination, Source[0].__pad_0, 0x18u); /*0x6cedd6*/
    v38 = 0; /*0x6cedde*/
  }
  else
  {
    Destination[0] = (uint8_t)Source; /*0x6cedc1*/
  }
  if ( Destination != (char *)v28 ) /*0x6cede9*/
  {
    qmemcpy(v28, Destination, 0x18u); /*0x6cedf4*/
    *((unsigned char *)this + 228) = v38; /*0x6cedf6*/
  }
  _makepath(Buffer, 0, 0, (const char *)((char *)this + 204), Ext); /*0x6cee0f*/
  v29 = SearchMIXFile(Buffer, 0); /*0x6cee20*/
  *((unsigned int *)this + 46) = v29; /*0x6cee26*/
  if ( !v29 ) /*0x6cee2f*/
    *((unsigned int *)this + 46) = SearchMIXFile(g_Str_File_XXICON_SHP, 0); /*0x6cee3d*/
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
  if ( g_abs_A8E340 <= 0 ) /*0x6ceebd*/
    return 0; /*0x6ceed9*/
  for ( i = (char *)g_abs_A8E334; *(void **)(*(unsigned int *)i + 188) != this; i += 4 ) /*0x6ceec5*/
  {
    if ( ++v1 >= g_abs_A8E340 ) /*0x6ceed7*/
      return 0; /*0x6ceed7*/
  }
  return *((unsigned int *)g_abs_A8E334 + v1); /*0x6ceed9*/

}
}
// 0x6CEF80
namespace gamemd {
int SuperWeaponTypeClass::SD_vt27(int a2, int a3)
{

  int v4; // eax

  if ( *((unsigned int *)this + 45) != 10 ) /*0x6cef8b*/
    return *((unsigned int *)this + 47); /*0x6cef8b*/
  if ( a3
    && (*(int (**)(int))(*(unsigned int *)a3 + 44))(a3) == 6
    && (v4 = (*(int (**)(int))(*(unsigned int *)a3 + 44))(a3),
        (uint8_t)HouseClass::IsAlliedWith(*(void **)(v4 == 6 ? a3 + 0x21C : 540), HouseClass_Player)) )
  {
    return *((unsigned int *)this + 47); /*0x6cefd3*/
  }
  else
  {
    return 70; /*0x6cefca*/
  }

}
}
// 0x6CEFE0
namespace gamemd {
SuperWeaponTypeClass * SuperWeaponTypeClass::SDDTOR(unsigned int * Block, char a2)
{

  int v3; // eax
  unsigned int *v5; // [esp+4h] [ebp-4h] BYREF

  *Block = &vt_SuperWeaponTypeClass; /*0x6cefed*/
  *(Block + 1) = &vt_SuperWeaponTypeClass; /*0x6ceff3*/
  *(Block + 2) = &vt_SuperWeaponTypeClass; /*0x6ceffa*/
  *(Block + 3) = &vt_SuperWeaponTypeClass; /*0x6cf001*/
  v5 = Block; /*0x6cf00f*/
  v3 = (*(int (**)(int *, unsigned int **))(g_abs_A8E330 + 16))(&g_abs_A8E330, &v5); /*0x6cf013*/
  if ( v3 != -1 && v3 < g_abs_A8E340 && v3 < --g_abs_A8E340 ) /*0x6cf02e*/
  {
    do /*0x6cf046*/
    {
      ++v3; /*0x6cf036*/
      *((unsigned int *)g_abs_A8E334 + v3 - 1) = *((unsigned int *)g_abs_A8E334 + v3); /*0x6cf03a*/
    }
    while ( v3 < g_abs_A8E340 ); /*0x6cf046*/
  }
  AbstractTypeClass::Dtor(Block); /*0x6cf04a*/
  if ( (Block & 1) != 0 ) /*0x6cf054*/
    OperatorDelete(Block); /*0x6cf057*/
  return (SuperWeaponTypeClass *)Block; /*0x6cf061*/

}
} // namespace gamemd

// 0x474EE0
namespace gamemd {
int SuperWeaponTypeClass::loadSWProperties(uint8_t * a2, uint8_t * a3, int a4)
{

  int v4; // edi
  const void **v5; // esi
  char Destination[32]; // [esp+8h] [ebp-20h] BYREF

  INIClass::GetString(this, a3, a3, (&off_7E4C50)[a4], Destination, 32); /*0x474f02*/
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
  HouseTypeClass *result; // eax
  unsigned char *eax5; // eax
  HouseTypeClass *v6; // eax
  int v8; // ecx
  CCINIClass *i; // edx
  INIClass Destination[2]; // [esp+4h] [ebp-80h] BYREF

  if ( !INIClass::GetString(this, aP1, a2, (INIClass *)&g_abs_87F8E4, Destination, 128) ) /*0x475563*/
    return (int)aP3->__pad_0; /*0x4755f8*/
  v4 = (void *)PlayerSlot::NameToDialogID(Destination[0].__pad_0); /*0x475579*/
  if ( BuildingType::IsSpecialType(v4) ) /*0x47557d*/
    return (int)v4; /*0x475586*/
  result = (HouseTypeClass *)SuperWeaponTypeClass::FindByName(Destination); /*0x475596*/
  if ( result == (HouseTypeClass *)-1 ) /*0x47559e*/
  {
    eax5 = (unsigned char *)RA2_OPNEW(0x1B0u); /*0x4755a5*/
    if ( eax5 ) /*0x4755af*/
      v6 = (HouseTypeClass *)SuperWeaponTypeClass::Construct(eax5, Destination[0].__pad_0); /*0x4755b8*/
    else
      v6 = 0; /*0x4755bf*/
    v8 = 0; /*0x4755c7*/
    if ( g_SuperWeaponTypeArray <= 0 ) /*0x4755cb*/
    {
      return -1; /*0x4755df*/
    }
    else
    {
      for ( i = (CCINIClass *)g_SuperWeaponTypeCount; /*0x4755cd*/
            *(HouseTypeClass **)i->__pad_0 != v6;
            i = (CCINIClass *)((char *)i + 4) )
      {
        if ( ++v8 >= g_SuperWeaponTypeArray ) /*0x4755dd*/
          return -1; /*0x4755dd*/
      }
      return v8; /*0x4755ec*/
    }
  }
  return (int)result->__pad_0; /*0x475588*/

}
} // namespace gamemd

// 0x5117D0
namespace gamemd {
int SuperWeaponTypeClass::FindByName()
{

  int v3; // ebx
  unsigned int *v4; // esi

  if ( !_strcmpi(this, &g_INI_Key_Digest.__pad_20[8]) ) /*0x5117db*/
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

  AbstractTypeClass::Constructor(this, (AbstractClass *)aP1); /*0x6ce5bb*/
  *((unsigned int *)this + 39) = 0; /*0x6ce5cb*/
  *((unsigned int *)this + 40) = -1; /*0x6ce5d1*/
  *((unsigned int *)this + 41) = -1; /*0x6ce5d7*/
  *((unsigned int *)this + 42) = -1; /*0x6ce5dd*/
  *((unsigned int *)this + 43) = -1; /*0x6ce5e3*/
  *((unsigned int *)this + 44) = 4500; /*0x6ce5e9*/
  *((unsigned int *)this + 45) = -1; /*0x6ce5f3*/
  *((unsigned int *)this + 46) = 0; /*0x6ce5f9*/
  *((unsigned int *)this + 47) = 0; /*0x6ce5ff*/
  *((unsigned int *)this + 48) = -1; /*0x6ce605*/
  *((unsigned int *)this + 49) = -1; /*0x6ce60b*/
  *((unsigned int *)this + 50) = 0; /*0x6ce611*/
  *((unsigned char *)this + 204) = 0; /*0x6ce617*/
  *((unsigned int *)this + 58) = -1; /*0x6ce619*/
  *((unsigned int *)this + 60) = -1; /*0x6ce61f*/
  *((unsigned char *)this + 229) = 0; /*0x6ce628*/
  *((unsigned char *)this + 230) = 1; /*0x6ce62f*/
  *((unsigned char *)this + 231) = 0; /*0x6ce636*/
  *((unsigned char *)this + 236) = 0; /*0x6ce63c*/
  *((unsigned char *)this + 237) = 0; /*0x6ce642*/
  *((unsigned char *)this + 238) = 0; /*0x6ce648*/
  *((unsigned char *)this + 244) = 0; /*0x6ce64e*/
  *((unsigned char *)this + 245) = 0; /*0x6ce654*/
  *((unsigned int *)this + 62) = 0; /*0x6ce65a*/
  *((unsigned int *)this + 63) = 0; /*0x6ce660*/
  *(unsigned int *)this = &vt_SuperWeaponTypeClass; /*0x6ce666*/
  *((unsigned int *)this + 1) = &vt_SuperWeaponTypeClass; /*0x6ce66d*/
  *((unsigned int *)this + 2) = &vt_SuperWeaponTypeClass; /*0x6ce673*/
  *((unsigned int *)this + 3) = &vt_SuperWeaponTypeClass; /*0x6ce67a*/
  AbstractClass::GenerateUniqueID((char *)this + 4); /*0x6ce681*/
  *((unsigned int *)this + 38) = *(unsigned int *)&g_abs_A8D63C; /*0x6ce68c*/
  if ( *(int *)&g_abs_A8D63C < *(int *)&g_abs_A8D63C /*0x6ce6c4*/
    || (g_abs_A8D63C || !*(unsigned int *)&g_abs_A8D63C)
    && *(int *)&g_abs_A8D63C > 0
    && (*(uint8_t (**)(char *, int, unsigned int))(*(unsigned int *)&g_abs_A8D63C + 8))(
         &g_abs_A8D63C,
         *(unsigned int *)&g_abs_A8D63C + *(unsigned int *)&g_abs_A8D63C,
         0) )
  {
    v3 = (*(unsigned int *)&g_abs_A8D63C)++; /*0x6ce6d1*/
    *(unsigned int *)(*(unsigned int *)&g_abs_A8D63C + 4 * v3) = this; /*0x6ce6e0*/
  }
  if ( (char *)this + 36 != (char *)this + 204 ) /*0x6ce6e8*/
    qmemcpy((void *)((char *)this + 204), (const void *)((char *)this + 36), 0x19u); /*0x6ce6ef*/
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
      *(unsigned int *)a1 = &vt_SuperWeaponTypeClass; /*0x6ce83b*/
      *(unsigned int *)(a1 + 4) = &vt_SuperWeaponTypeClass; /*0x6ce841*/
      *(unsigned int *)(a1 + 8) = &vt_SuperWeaponTypeClass; /*0x6ce848*/
      *(unsigned int *)(a1 + 12) = &vt_SuperWeaponTypeClass; /*0x6ce84f*/
    }
    ObjectPtr::RegisterForTracking((int)&g_abs_B0C110, (int *)(a1 + 156)); /*0x6ce862*/
    ObjectPtr::RegisterForTracking((int)&g_abs_B0C110, (int *)(a1 + 200)); /*0x6ce873*/
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

  result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x6ce8df*/
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

  AbstractTypeClass::ProcessPower((char *)this, a2); /*0x6ce919*/
  Power::TimerProcess(*((unsigned int *)this + 38)); /*0x6ce927*/
  Power::TimerProcess(*((unsigned int *)this + 47)); /*0x6ce935*/
  Power::TimerProcess(*((unsigned int *)this + 40)); /*0x6ce943*/
  Power::TimerProcess(*((unsigned int *)this + 41)); /*0x6ce951*/
  Power::TimerProcess(*((unsigned int *)this + 42)); /*0x6ce95f*/
  v3 = Power::TimerProcess(*((unsigned int *)this + 43)); /*0x6ce96d*/
  IDA_LOBYTE(v3) = *((unsigned char *)this + 230); /*0x6ce972*/
  Power::FlagProcess(a2, v3); /*0x6ce97b*/
  IDA_LOBYTE(v4) = *((unsigned char *)this + 231); /*0x6ce980*/
  Power::FlagProcess(a2, v4); /*0x6ce989*/
  IDA_LOBYTE(v5) = *((unsigned char *)this + 237); /*0x6ce98e*/
  v6 = Power::FlagProcess(a2, v5); /*0x6ce997*/
  IDA_LOBYTE(v6) = *((unsigned char *)this + 238); /*0x6ce99c*/
  Power::FlagProcess(a2, v6); /*0x6ce9a5*/
  Power::TimerProcess(*((unsigned int *)this + 60)); /*0x6ce9b3*/
  IDA_LOBYTE(v7) = *((unsigned char *)this + 244); /*0x6ce9b8*/
  Power::FlagProcess(a2, v7); /*0x6ce9c1*/
  Power::TimerProcess(*((unsigned int *)this + 44)); /*0x6ce9cf*/
  Power::TimerProcess(*((unsigned int *)this + 45)); /*0x6ce9dd*/
  IDA_LOBYTE(v8) = *((unsigned char *)this + 229); /*0x6ce9e2*/
  v9 = Power::FlagProcess(a2, v8); /*0x6ce9eb*/
  IDA_LOBYTE(v9) = *((unsigned char *)this + 245); /*0x6ce9f0*/
  return Power::FlagProcess(a2, v9); /*0x6ce9fe*/

}
} // namespace gamemd

// 0x6CEA10
namespace gamemd {
int SuperWeaponTypeClass::SD_vt16()
{

  return *((unsigned int *)this + 38); /*0x6cea16*/

}
} // namespace gamemd
