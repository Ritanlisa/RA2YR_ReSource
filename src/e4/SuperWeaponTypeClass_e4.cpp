// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/VocClass_e4.hpp"
#include "e4/e4_globals.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"  // G42.35f: C2027 supply
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
#include "e4/classes/AnimTypeClass_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/InfantryTypeVector_e4.hpp"
#include "e4/classes/UnitTypeVector_e4.hpp"
#include "e4/classes/AircraftTypeVector_e4.hpp"
#include "e4/classes/InfantryTypeClass_e4.hpp"
#include "e4/classes/HouseTypeClass_e4.hpp"  // G42.36 C2027 supply

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
    int v29; // ebx
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
    v2 = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 2848; /*0x4f657d*/
    v32 = (int)this->? > 0; /*0x4f6583*/
    v3 = ((SuperWeaponTypeClass *)(this->? + 152))->FindByName(); /*0x4f6598*/
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
    if ( ((DynamicVector *)((char *)this + 21860))->GetOrGrow( *(unsigned int *)(v9 + 3576)) ) /*0x4f65cc*/
      v32 = 1; /*0x4f65d5*/
    if ( v36 && v33 ) /*0x4f65e8*/
      return 1; /*0x4f65f3*/
    v11 = (*(int (__stdcall **)(int *))(*(unsigned int *)&this->nextArrayIndex + 24))(this->?); /*0x4f6603*/
    v38 = v11; /*0x4f6612*/
    BuildableFromArray = HouseClass::FirstBuildableFromArray( /*0x4f6616*/
                           (HouseClass *)this,
                           *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 2276);
    v13 = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 2876; /*0x4f6623*/
    v34 = BuildableFromArray != 0; /*0x4f662c*/
    v14 = ((SuperWeaponTypeClass *)(this->? + 152))->FindByName(); /*0x4f6641*/
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
      v21 = *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 2876; /*0x4f668c*/
      v22 = 1 << ((SuperWeaponTypeClass *)(this->? + 152))->FindByName(); /*0x4f669e*/
      v23 = *(unsigned int *)(v21 + 16); /*0x4f66a0*/
      v24 = 0; /*0x4f66a3*/
      if ( v23 <= 0 ) /*0x4f66a7*/
      {
        v27 = (*(int (**)(unsigned int, SuperWeaponTypeClass *))(MEMORY[0] + 132))(0, this); /*0x4f6702*/
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
            v27 = (*(int (**)(unsigned int, SuperWeaponTypeClass *))(MEMORY[0] + 132))(0, this); /*0x4f66d2*/
            goto LABEL_28; /*0x4f66d4*/
          }
        }
        v11 = v38; /*0x4f66e2*/
        v27 = (*(int (**)(unsigned int, SuperWeaponTypeClass *))(**(unsigned int **)(v25 + 4 * v24) + 132))( /*0x4f66f1*/
                *(unsigned int *)(v25 + 4 * v24),
                this);
      }
    }
    else
    {
      v27 = 0x7FFFFFFF; /*0x4f6706*/
    }
  LABEL_28:
    v28 = ((HouseClass *)this)->FirstBuildableFromArray( *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 2360); /*0x4f670b*/
    v29 = (*(int (**)(unsigned int *, SuperWeaponTypeClass *))(*v28 + 132))( (unsigned int *)(v28), this); /*0x4f6728*/
    if ( !v34 && v35 ) /*0x4f6738*/
    {
      if ( v33 ) /*0x4f6740*/
        return 1; /*0x4f674b*/
      if ( v37 && v11 >= v27 ) /*0x4f6756*/
        return 1; /*0x4f6761*/
      return v32 && v11 >= v27 + v29; /*0x4f6772*/
    }
    v30 = ((HouseClass *)this)->FirstBuildableFromArray( *(unsigned int *)&DSurface_ViewBounds.__pad_FC[324] + 2276); /*0x4f678f*/
    v31 = (*(int (**)(unsigned int *, SuperWeaponTypeClass *))(*v30 + 132))( (unsigned int *)(v30), this); /*0x4f6799*/
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
      return 1; /*0x4f6811*/
    }
    return 0; /*0x4f65ea*/
}
}
// 0x5113F0
namespace gamemd {
int SuperWeaponTypeClass::Construct(char *aP1)
{
    BuildingTypeClass *v3; // ebx
    int v4; // eax
    bool v5; // zf
    int v6; // ecx
    SuperWeaponTypeClass **v7; // edx
    SuperWeaponTypeClass **v8; // ecx

    ((gamemd::AbstractTypeClass*)(int *)this)->Constructor( Source); /*0x5113fa*/
    v3 = (BuildingTypeClass *)(0); /*0x5113ff*/
    IDA_LOBYTE(this->ArrayIndex) = 0; /*0x511404*/
    this->Type = (BuildingTypeClass *)-1; /*0x51140a*/
    this->SidebarImage = (SHPStruct *)-1; /*0x511410*/
    this->ActionValue[0] = -1; /*0x511416*/
    this->SpecialSound = 0; /*0x51141c*/
    this->AuxBuilding = 0; /*0x511427*/
    ((unsigned int *)&this->SidebarImageFile)[0] = 1072693248; /*0x51142d*/
    ((unsigned int *)&this->SidebarImageFile)[1] = 0; /*0x511433*/
    ((unsigned int *)&this->SidebarImageFile)[2] = 1072693248; /*0x511439*/
    ((unsigned int *)&this->SidebarImageFile)[3] = 0; /*0x51143f*/
    ((unsigned int *)&this->SidebarImageFile)[4] = 1072693248; /*0x511445*/
    ((unsigned int *)&this->SidebarImageFile)[5] = 0; /*0x51144b*/
    *(unsigned int *)&this->zero_E4 = 1072693248; /*0x511451*/
    this->FlashSidebarTabFrames = 0; /*0x511457*/
    this->PreDependent = 0; /*0x51145d*/
    this->Range = 0.0; /*0x511463*/
    *(unsigned int *)&this->AIDefendAgainst = 1072693248; /*0x511469*/
    *(unsigned int *)&this->ShowTimer = 1072693248; /*0x51146f*/
    this->LineMultiplier = 1072693248; /*0x511475*/
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
    ((InfantryTypeVector *)((char *)this + 332))->Construct2( 0, 0); /*0x5114fc*/
    *((unsigned int *)this + 88) = 10; /*0x511501*/
    *((unsigned int *)this + 87) = 0; /*0x511508*/
    *((unsigned int *)this + 83) = (unsigned int)(void*)&TypeList_InfantryTypeClass_const___vftable; /*0x51150b*/
    ((UnitTypeVector *)((char *)this + 360))->ConstructUnitTypeVectorClass( 0, 0); /*0x51151b*/
    *((unsigned int *)this + 95) = 10; /*0x511520*/
    *((unsigned int *)this + 94) = 0; /*0x511527*/
    *((unsigned int *)this + 90) = (unsigned int)(void*)&TypeList_UnitTypeClass_const___vftable; /*0x51152a*/
    ((AircraftTypeVector *)((int)((AircraftTypeVector *)this + 97)))->Constructor((int)((AircraftTypeVector *)((int)((AircraftTypeVector *)this + 97))), 0, 0); /*0x51153a*/
    *((unsigned int *)this + 102) = 10; /*0x511542*/
    *((unsigned int *)this + 101) = 0; /*0x511549*/
    *((unsigned int *)this + 97) = (unsigned int)(void*)&TypeList_AircraftTypeClass_const___vftable; /*0x51154c*/
    *((unsigned int *)this + 105) = 16777281; /*0x511552*/
    *((unsigned char *)this + 424) = 0; /*0x51156c*/
    this->AbstractTypeClass = (void*)&HouseTypeClass_vftable; /*0x511572*/
    ((void **)this)[1] = (unsigned int)(void*)&HouseTypeClass_vftable;
    ((void **)this)[2] = (unsigned int)(void*)&HouseTypeClass_vftable;
    ((void **)this)[3] = (unsigned int)(void*)&HouseTypeClass_vftable;
    AbstractClass::GenerateUniqueID( (int)((AbstractClass *)&this->?)); /*0x51158d*/
    *((unsigned char *)this + 416) = 0; /*0x511592*/
    v4 = dword_A83CA8; /*0x511598*/
    if ( dword_A83CA8 < dword_A83CA0 /*0x5115d6*/
      || (byte_A83CA5 || !dword_A83CA0)
      && (&dword_A83CAC)[0 > 0
&& (v5 = (*(unsigned __int8 (**)(unsigned int *, int, unsigned int))(dword_A83C98 + 8))( (unsigned int *)(&dword_A83C98), dword_A83CA0 + (&dword_A83CAC)[0], 0) == 0, v4 = dword_A83CA8, !v5) )





    {
      dword_A83CA8 = v4 + 1; /*0x5115db*/
      *((unsigned int *)dword_A83C9C + v4) = (unsigned int)this;
      v4 = dword_A83CA8; /*0x5115e8*/
    }
    v6 = 0; /*0x5115ed*/
    if ( v4 <= 0 ) /*0x5115f1*/
    {
  LABEL_11:
      v6 = -1; /*0x511605*/
    }
    else
    {
      v7 = (SuperWeaponTypeClass **)dword_A83C9C; /*0x5115f3*/
      while ( *v7 != this ) /*0x5115fb*/
      {
        ++v6; /*0x5115fd*/
        ++v7; /*0x5115fe*/
        if ( v6 >= v4 ) /*0x511603*/
          goto LABEL_11; /*0x511603*/
      }
    }
    this->SidebarImage = (SHPStruct *)v6; /*0x511608*/
    if ( dword_A83CA8 <= 0 ) /*0x511615*/
    {
  LABEL_16:
      this->Type = (BuildingTypeClass *)-1; /*0x511629*/
      return this; /*0x511633*/
    }
    else
    {
      v8 = (SuperWeaponTypeClass **)dword_A83C9C; /*0x511617*/
      while ( *v8 != this ) /*0x51161f*/
      {
        v3 = (BuildingTypeClass *)((char *)v3 + 1); /*0x511621*/
        ++v8; /*0x511622*/
        if ( (int)v3 >= dword_A83CA8 ) /*0x511627*/
          goto LABEL_16; /*0x511627*/
      }
      this->Type = v3; /*0x51163a*/
      return this; /*0x511640*/
    }
}
}
// 0x6CEA20
namespace gamemd {
void* SuperWeaponTypeClass::SD_vt25(unsigned char *** aP1)
{
    int v4; // ecx
    int v6; // edi
    int v7; // eax
    int v8; // ecx
    int SWProperties; // eax
    char Bool_Overwrite; // al
    int v11; // ecx
    int Int_Overwrite; // eax
    char v13; // al
    char v14; // cl
    char v15; // al
    char v16; // al
    int v17; // edi
    int Index; // eax
    int v19; // edi
    int v20; // eax
    int v21; // edx
    char **v23; // edi
    char **v24; // edi
    int v25; // edi
    int v26; // eax
    char v27; // cl
    char v28; // al
    int v30; // eax
    char *v31; // edi
    void *v32; // eax
    double v34; // [esp+0h] [ebp-408h]
    char v35; // [esp+4h] [ebp-404h]
    char v36; // [esp+4h] [ebp-404h]
    char v37; // [esp+4h] [ebp-404h]
    char v38; // [esp+4h] [ebp-404h]
    int v39; // [esp+18h] [ebp-3F0h]
    int v40; // [esp+18h] [ebp-3F0h]
    char Destination[24]; // [esp+1Ch] [ebp-3ECh] BYREF
    char v42; // [esp+34h] [ebp-3D4h]
    char v43[40]; // [esp+38h] [ebp-3D0h] BYREF
    char v44[40]; // [esp+60h] [ebp-3A8h] BYREF
    VocClass v45; // [esp+88h] [ebp-380h] BYREF
    char Buffer[512]; // [esp+208h] [ebp-200h] BYREF

    _EBP = v4; /*0x6cea2f*/
    INIClass::ResetSection( (INIClass *)this); /*0x6cea33*/
    if ( !(unsigned __int8)((AbstractTypeClass *)_EBP)->LoadFromINI( (unsigned __int8 ***)this) ) /*0x6cea3b*/
      return 0; /*0x6cee51*/
    v6 = *(unsigned int *)(_EBP + 156); /*0x6cea4a*/
    if ( INIClass::GetString( /*0x6cea6d*/
           (INIClass *)this,
           (unsigned __int8 *)(_EBP + 36),
           aWeapontype,
           &g_INI_DefaultBuffer,
           (char *)&v45,
           128) )
    {
      v7 = InfantryTypeClass::Find( (char *)((char)((char *)&v45))); /*0x6cea7d*/
    }
    else
    {
      v7 = v6; /*0x6cea84*/
    }
    v8 = *(unsigned int *)(_EBP + 188); /*0x6cea86*/
    *(unsigned int *)(_EBP + 156) = v7; /*0x6cea8c*/
    SWProperties = SuperWeaponTypeClass::loadSWProperties( /*0x6cea9b*/
                     this,
                     (unsigned __int8 *)(_EBP + 36),
                     (unsigned __int8 *)g_INI_Key_Action,
                     v8);
    v35 = *(unsigned char *)(_EBP + 230); /*0x6ceaa8*/
    *(unsigned int *)(_EBP + 188) = SWProperties; /*0x6ceaaf*/
    *(unsigned char *)(_EBP + 230) = INIClass::ReadBool_Overwrite((int *)this, (unsigned __int8 *)(_EBP + 36), aIspowered, v35); /*0x6ceaba*/
    Bool_Overwrite = INIClass::ReadBool_Overwrite( /*0x6ceacf*/
                       (int *)this,
                       (unsigned __int8 *)(_EBP + 36),
                       aDisableablefro,
                       *(unsigned char *)(_EBP + 231));
    v11 = *(unsigned int *)(_EBP + 232); /*0x6cead4*/
    *(unsigned char *)(_EBP + 231) = Bool_Overwrite; /*0x6ceada*/
    Int_Overwrite = INIClass::ReadInt_Overwrite((bool *)this, (unsigned __int8 *)(_EBP + 36), aFlashsidebarta, v11); /*0x6ceae9*/
    v36 = *(unsigned char *)(_EBP + 236); /*0x6ceaf6*/
    *(unsigned int *)(_EBP + 232) = Int_Overwrite; /*0x6ceafd*/
    *(unsigned char *)(_EBP + 236) = INIClass::ReadBool_Overwrite( /*0x6ceb08*/
                               (int *)this,
                               (unsigned __int8 *)(_EBP + 36),
                               aAidefendagains,
                               v36);
    v13 = INIClass::ReadBool_Overwrite((int *)this, (unsigned __int8 *)(_EBP + 36), aPreclick, *(unsigned char *)(_EBP + 237)); /*0x6ceb1d*/
    v14 = *(unsigned char *)(_EBP + 238); /*0x6ceb22*/
    *(unsigned char *)(_EBP + 237) = v13; /*0x6ceb28*/
    v15 = INIClass::ReadBool_Overwrite((int *)this, (unsigned __int8 *)(_EBP + 36), aPostclick, v14); /*0x6ceb37*/
    v37 = *(unsigned char *)(_EBP + 244); /*0x6ceb44*/
    *(unsigned char *)(_EBP + 238) = v15; /*0x6ceb4b*/
    v16 = INIClass::ReadBool_Overwrite((int *)this, (unsigned __int8 *)(_EBP + 36), aShowtimer, v37); /*0x6ceb51*/
    v17 = *(unsigned int *)(_EBP + 192); /*0x6ceb56*/
    *(unsigned char *)(_EBP + 244) = v16; /*0x6ceb5c*/
    if ( !INIClass::GetString( /*0x6ceb94*/
            (INIClass *)this,
            (unsigned __int8 *)(_EBP + 36),
            aSpecialsound,
            &g_INI_DefaultBuffer,
            (char *)&v45,
            128)
      || (Index = VocClass::FindIndex( &v45), Index == -1) )
    {
      Index = v17; /*0x6ceb96*/
    }
    v19 = *(unsigned int *)(_EBP + 196); /*0x6ceb98*/
    *(unsigned int *)(_EBP + 192) = Index; /*0x6cebb8*/
    if ( !INIClass::GetString( /*0x6cebd6*/
            (INIClass *)this,
            (unsigned __int8 *)(_EBP + 36),
            g_INI_Key_StartSound,
            &g_INI_DefaultBuffer,
            (char *)&v45,
            128)
      || (v20 = VocClass::FindIndex( &v45), v20 == -1) )
    {
      v20 = v19; /*0x6cebd8*/
    }
    v34 = (double)*(float *)(_EBP + 248); /*0x6cebda G57c4 x87c4: fld dword [ebp+0F8h] + fstp var_408@0x6cebeb*/
    *(unsigned int *)(_EBP + 196) = v20; /*0x6cebe5*/
    *(float *)(_EBP + 248) = (float)INIClass::ReadDouble_Overwrite((double *)this, (unsigned __int8 *)(_EBP + 36), g_INI_Key_Range, v34); /*0x6cebf4 G57c4 x87c4: merged fstp dword [ebp+0F8h]@0x6cec01*/
    v21 = *(unsigned int *)(_EBP + 252); /*0x6cebf9*/
    *(unsigned int *)(_EBP + 252) = INIClass::ReadInt_Overwrite( /*0x6cec13*/
                                (bool *)this,
                                (unsigned __int8 *)(_EBP + 36),
                                aLinemultiplier,
                                v21);
    INIClass::GetString( /*0x6cec2d*/
      (INIClass *)this,
      (unsigned __int8 *)(_EBP + 36),
      (unsigned __int8 *)g_INI_Key_Type,
      &g_INI_DefaultBuffer,
      v44,
      40);
    if ( strlen( (const char *)(v44)) ) /*0x6cec36*/
    {
      v39 = 0; /*0x6cec42*/
      v23 = (char **)&stru_8425A4.Name[7]; /*0x6cec46*/
      while ( _strcmpi(*v23, v44) ) /*0x6cec5d*/
      {
        ++v23; /*0x6cec63*/
        ++v39; /*0x6cec6d*/
        if ( (int)v23 >= (int)stru_8425A4.Type ) /*0x6cec71*/
          goto LABEL_18; /*0x6cec71*/
      }
      if ( v39 != -1 ) /*0x6cec7c*/
        *(unsigned int *)(_EBP + 180) = v39; /*0x6cec7e*/
    }
  LABEL_18:
    INIClass::GetString((INIClass *)this, (unsigned __int8 *)(_EBP + 36), aPredependent, &g_INI_DefaultBuffer, v43, 40); /*0x6cec84*/
    if ( strlen( (const char *)(v43)) ) /*0x6ceca1*/
    {
      v40 = 0; /*0x6cecad*/
      v24 = (char **)&stru_8425A4.Name[7]; /*0x6cecb1*/
      while ( _strcmpi(*v24, v43) ) /*0x6cecc8*/
      {
        ++v24; /*0x6cecce*/
        ++v40; /*0x6cecd8*/
        if ( (int)v24 >= (int)stru_8425A4.Type ) /*0x6cecdc*/
          goto LABEL_25; /*0x6cecdc*/
      }
      if ( v40 != -1 ) /*0x6cece7*/
        *(unsigned int *)(_EBP + 240) = v40; /*0x6cece9*/
    }
  LABEL_25:
    v25 = *(unsigned int *)(_EBP + 200); /*0x6cecef*/
    if ( INIClass::GetString( /*0x6ced0f*/
           (INIClass *)this,
           (unsigned __int8 *)(_EBP + 36),
           aAuxbuilding,
           &g_INI_DefaultBuffer,
           (char *)&v45,
           128) )
    {
      v26 = ((BuildingTypeClass *)((char)((char *)&v45)))->FindOrCreate(); /*0x6ced1f*/
    }
    else
    {
      v26 = v25; /*0x6ced26*/
    }
    v27 = *(unsigned char *)(_EBP + 229); /*0x6ced28*/
    *(unsigned int *)(_EBP + 200) = v26; /*0x6ced2e*/
    v28 = INIClass::ReadBool_Overwrite((int *)this, (unsigned __int8 *)(_EBP + 36), aUsechargedrain, v27); /*0x6ced3d*/
    v38 = *(unsigned char *)(_EBP + 245); /*0x6ced4a*/
    *(unsigned char *)(_EBP + 229) = v28; /*0x6ced51*/
    *(unsigned char *)(_EBP + 245) = INIClass::ReadBool_Overwrite( /*0x6ced68*/
                               (int *)this,
                               (unsigned __int8 *)(_EBP + 36),
                               aManualcontrol,
                               v38);
    v34 = INIClass::ReadDouble_Overwrite((double *)this, (unsigned __int8 *)(_EBP + 36), aRechargetime, 0.0); /*0x6ced6e*/
    if ( v34 != dbl_7E2800 ) /*0x6ced7e G57c4 x87c4: fcom/fnstsw@0x6CED73 C3!=0 -> st0==0.0 -> discard; else scale*/
    {
      IDA_LOWORD(v30) = Math::RoundToInt(v34 * flt_7F4100); /*0x6ced86 G57c4 x87c4: fmul ds:flt_7F4100@0x6ced80*/
      *(unsigned int *)(_EBP + 176) = v30; /*0x6ced8b*/
    }
    v31 = (char *)(_EBP + 204); /*0x6ced9c*/
    INIClass::GetString( /*0x6cedb1*/
      (INIClass *)this,
      (unsigned __int8 *)(_EBP + 36),
      aSidebarimage,
      (char *)(_EBP + 204),
      (char *)&v45.Name[5],
      256);
    if ( &v45 == (VocClass *)-128 ) /*0x6cedbf*/
    {
      Destination[0] = (unsigned __int8)&v45.Name[5]; /*0x6cedc1*/
    }
    else
    {
      strncpy( (char *)(Destination), (const char *)&v45.Name[5], 0x18u); /*0x6cedd6*/
      v42 = 0; /*0x6cedde*/
    }
    if ( Destination != v31 ) /*0x6cede9*/
    {
      qmemcpy( (void *)(v31), (const void *)(Destination), 0x18u); /*0x6cedf4*/
      *(unsigned char *)(_EBP + 228) = v42; /*0x6cedf6*/
    }
    _makepath(Buffer, 0, 0, (const char *)(_EBP + 204), Ext); /*0x6cee0f*/
    v32 = (void *)SearchMIXFile( (char *)(Buffer), 0); /*0x6cee20*/
    *(unsigned int *)(_EBP + 184) = (unsigned int)v32; /*0x6cee26*/
    if ( !v32 ) /*0x6cee2f*/
      *(unsigned int *)(_EBP + 184) = SearchMIXFile(((char *)&stru_820320 + 184), 0); /*0x6cee3d*/
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
    if ( dword_A8E340 <= 0 ) /*0x6ceebd*/
      return 0; /*0x6ceed9*/
    for ( i = (char *)dword_A8E334; *(SuperWeaponTypeClass **)(*(unsigned int *)i + 188) != this; i += 4 ) /*0x6ceec5*/
    {
      if ( ++v1 >= dword_A8E340 ) /*0x6ceed7*/
        return 0; /*0x6ceed7*/
    }
    return *((unsigned int *)dword_A8E334 + v1); /*0x6ceed9*/
}
}
// 0x6CEF80
namespace gamemd {
int SuperWeaponTypeClass::SD_vt27(int a2, int a3)
{
    int v4; // eax

    if ( this->Type != (BuildingTypeClass *)10 ) /*0x6cef8b*/
      return this->ActionValue[0]; /*0x6cef8b*/
    if ( a3
      && (*(int (**)(int))(*(unsigned int *)a3 + 44))(a3) == 6
      && (v4 = (*(int (**)(int))(*(unsigned int *)a3 + 44))(a3),
          (unsigned __int8)(((HouseClass *)(*(void **)(v4 == 6 ? a3 + 0x21C : 540)))->IsAlliedWith( (HouseClass *)((void *)dword_A83D4C)))) )
    {
      return this->ActionValue[0]; /*0x6cefd3*/
    }
    else
    {
      return 70; /*0x6cefca*/
    }
}
}
// 0x6CEFE0
namespace gamemd {
unsigned int * SuperWeaponTypeClass::SDDTOR(char a2)
{
    int v3; // eax
    SuperWeaponTypeClass *v5; // [esp+4h] [ebp-4h] BYREF

    this->AbstractTypeClass = (void*)&SuperWeaponTypeClass_vftable; /*0x6cefed*/
    ((void **)this)[1] = (unsigned int)(void*)&SuperWeaponTypeClass_vftable;
    ((void **)this)[2] = (unsigned int)(void*)&SuperWeaponTypeClass_vftable;
    ((void **)this)[3] = (unsigned int)(void*)&SuperWeaponTypeClass_vftable;
    v5 = this; /*0x6cf00f*/
    v3 = (*(int (**)(unsigned int *, SuperWeaponTypeClass **))(dword_A8E330 + 16))( (unsigned int *)(&dword_A8E330), (SuperWeaponTypeClass **)(&v5)); /*0x6cf013*/
    if ( v3 != -1 && v3 < dword_A8E340 && v3 < --dword_A8E340 ) /*0x6cf02e*/
    {
      do /*0x6cf046*/
      {
        ++v3; /*0x6cf036*/
        *((unsigned int *)dword_A8E334 + v3 - 1) = *((unsigned int *)dword_A8E334 + v3); /*0x6cf03a*/
      }
      while ( v3 < dword_A8E340 ); /*0x6cf046*/
    }
    ((gamemd::AbstractTypeClass*)this)->Dtor(); /*0x6cf04a*/
    if ( (a2 & 1) != 0 ) /*0x6cf054*/
      RA2_OPDEL(this); /*0x6cf057*/
    return &this->AbstractTypeClass; /*0x6cf061*/
}
} // namespace gamemd

// 0x474EE0
namespace gamemd {
int SuperWeaponTypeClass::loadSWProperties(uint8_t * a2, uint8_t * a3, int a4)
{
    int v4; // edi
    char **v5; // esi
    char Destination[32]; // [esp+8h] [ebp-20h] BYREF

    INIClass::GetString((INIClass *)this, a2, a3, (&off_7E4C50)[a4], Destination, 32); /*0x474f02*/
    v4 = 0; /*0x474f07*/
    v5 = (char **)&off_7E4C50; /*0x474f09*/
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
int SuperWeaponTypeClass::FindOrCreate(INIClass * a2, unsigned char * a3, CCINIClass * a4)
{
    void *v4; // esi
    int result; // eax
    SuperWeaponTypeClass *v6; // eax
    unsigned char *v7; // eax
    int v8; // ecx
    unsigned int *i; // edx
    char Destination[128]; // [esp+4h] [ebp-80h] BYREF

    if ( !INIClass::GetString((INIClass *)this, a2, a3, &g_INI_DefaultBuffer, Destination, 128) ) /*0x475563*/
      return a4; /*0x4755f8*/
    v4 = (void *)PlayerSlot::NameToDialogID(Destination); /*0x475579*/
    if ( (unsigned __int8)((BuildingType *)v4)->IsSpecialType() ) /*0x47557d*/
      return (int)v4; /*0x475586*/
    result = ((SuperWeaponTypeClass *)Destination)->FindByName(); /*0x475596*/
    if ( result == -1 ) /*0x47559e*/
    {
      v6 = (SuperWeaponTypeClass *)RA2_OPNEW(0x1B0u); /*0x4755a5*/
      if ( v6 ) /*0x4755af*/
        v7 = (unsigned char *)((SuperWeaponTypeClass *)v6)->Construct( (char *)(Destination)); /*0x4755b8*/
      else
        v7 = (unsigned char *)(0); /*0x4755bf*/
      v8 = 0; /*0x4755c7*/
      if ( dword_A83CA8 <= 0 ) /*0x4755cb*/
      {
        return -1; /*0x4755df*/
      }
      else
      {
        for ( i = dword_A83C9C; (unsigned char *)*i != v7; ++i ) /*0x4755cd*/
        {
          if ( ++v8 >= dword_A83CA8 ) /*0x4755dd*/
            return -1; /*0x4755dd*/
        }
        return v8; /*0x4755ec*/
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
    int v4; // esi

    if ( !_strcmpi((char *)this, g_Str__random_) ) /*0x5117db*/
      return -2; /*0x5117e9*/
    if ( !this ) /*0x5117f2*/
      return -1; /*0x5117f2*/
    v3 = 0; /*0x5117f9*/
    if ( dword_A83CA8 <= 0 ) /*0x5117fd*/
      return -1; /*0x511833*/
    while ( 1 ) /*0x511805*/
    {
      v4 = *((unsigned int *)dword_A83C9C + v3); /*0x511805*/
      if ( !_strcmpi((char *)(v4 + 100), (char *)this) || !_strcmpi((char *)(v4 + 36), (char *)this) ) /*0x51181d*/
        break; /*0x51181d*/
      if ( ++v3 >= dword_A83CA8 ) /*0x511831*/
        return -1; /*0x511831*/
    }
    return *(unsigned int *)(v4 + 184); /*0x5117e7*/
}
} // namespace gamemd

// 0x6CE5B0
namespace gamemd {
SuperWeaponTypeClass::SuperWeaponTypeClass(void * aP1)
{
    int v3; // eax

    ((AbstractTypeClass *)this)->Constructor( (char *)(Source)); /*0x6ce5bb*/
    *(unsigned int *)(this + 156) = 0; /*0x6ce5cb*/
    *(unsigned int *)(this + 160) = -1; /*0x6ce5d1*/
    *(unsigned int *)(this + 164) = -1; /*0x6ce5d7*/
    *(unsigned int *)(this + 168) = -1; /*0x6ce5dd*/
    *(unsigned int *)(this + 172) = -1; /*0x6ce5e3*/
    *(unsigned int *)(this + 176) = 4500; /*0x6ce5e9*/
    *(unsigned int *)(this + 180) = -1; /*0x6ce5f3*/
    *(unsigned int *)(this + 184) = 0; /*0x6ce5f9*/
    *(unsigned int *)(this + 188) = 0; /*0x6ce5ff*/
    *(unsigned int *)(this + 192) = -1; /*0x6ce605*/
    *(unsigned int *)(this + 196) = -1; /*0x6ce60b*/
    *(unsigned int *)(this + 200) = 0; /*0x6ce611*/
    *(unsigned char *)(this + 204) = 0; /*0x6ce617*/
    *(unsigned int *)(this + 232) = -1; /*0x6ce619*/
    *(unsigned int *)(this + 240) = -1; /*0x6ce61f*/
    *(unsigned char *)(this + 229) = 0; /*0x6ce628*/
    *(unsigned char *)(this + 230) = 1; /*0x6ce62f*/
    *(unsigned char *)(this + 231) = 0; /*0x6ce636*/
    *(unsigned char *)(this + 236) = 0; /*0x6ce63c*/
    *(unsigned char *)(this + 237) = 0; /*0x6ce642*/
    *(unsigned char *)(this + 238) = 0; /*0x6ce648*/
    *(unsigned char *)(this + 244) = 0; /*0x6ce64e*/
    *(unsigned char *)(this + 245) = 0; /*0x6ce654*/
    *(unsigned int *)(this + 248) = 0; /*0x6ce65a*/
    *(unsigned int *)(this + 252) = 0; /*0x6ce660*/
    *(unsigned int *)this = (unsigned int)(void*)&SuperWeaponTypeClass_vftable; /*0x6ce666*/
    *(unsigned int *)(this + 4) = (unsigned int)(void*)&SuperWeaponTypeClass_vftable; /*0x6ce66d*/
    *(unsigned int *)(this + 8) = (unsigned int)(void*)&SuperWeaponTypeClass_vftable; /*0x6ce673*/
    *(unsigned int *)(this + 12) = (unsigned int)(void*)&SuperWeaponTypeClass_vftable; /*0x6ce67a*/
    AbstractClass::GenerateUniqueID(this + 4); /*0x6ce681*/
    *(unsigned int *)(this + 152) = dword_A8E340; /*0x6ce68c*/
    if ( dword_A8E340 < dword_A8E338 /*0x6ce6c4*/
      || (byte_A8E33D || !dword_A8E338)
      && dword_A8E344 > 0
&& (*(unsigned __int8 (**)(int *, int, unsigned int))(dword_A8E330 + 8))( (int *)(&dword_A8E330), dword_A8E338 + dword_A8E344, 0) )



    {
      v3 = dword_A8E340++; /*0x6ce6d1*/
      *((unsigned int *)dword_A8E334 + v3) = (unsigned int)this;
    }
    if ( this + 36 != this + 204 ) /*0x6ce6e8*/
      qmemcpy((void *)(this + 204), (const void *)(this + 36), 0x19u); /*0x6ce6ef*/
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
    a2[3] = unk_7E957C; /*0x6ce7f0*/
    return 0; /*0x6ce7cd*/
}
} // namespace gamemd

// 0x6CE800
namespace gamemd {
int SuperWeaponTypeClass::SaveLoad_Prefix(int a1, int a2)
{
    int result; // eax
    SHPStruct *v3; // eax
    char v4; // [esp+7h] [ebp-201h] BYREF
    char Buffer[512]; // [esp+8h] [ebp-200h] BYREF

    result = AbstractClass::SaveLoad_Prefix_0(this, (AbstractClass *)(a2)); /*0x6ce814*/
    if ( result >= 0 ) /*0x6ce81b*/
    {
      if ( this ) /*0x6ce823*/
      {
        ((gamemd::AbstractTypeClass*)(int)this)->Init( (int)&v4); /*0x6ce82c*/
        this->SidebarImage = 0; /*0x6ce831*/
        this->AbstractTypeClass = (void*)&SuperWeaponTypeClass_vftable; /*0x6ce83b*/
        ((void **)this)[1] = (unsigned int)(void*)&SuperWeaponTypeClass_vftable;
        ((void **)this)[2] = (unsigned int)(void*)&SuperWeaponTypeClass_vftable;
        ((void **)this)[3] = (unsigned int)(void*)&SuperWeaponTypeClass_vftable;
      }
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->WeaponType); /*0x6ce862*/
      ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)&this->AuxBuilding); /*0x6ce873*/
      _makepath(Buffer, 0, 0, (const char *)this->SidebarImageFile, Ext); /*0x6ce88d*/
      v3 = (SHPStruct *)SearchMIXFile( (char *)(Buffer), 0); /*0x6ce89b*/
      this->SidebarImage = v3; /*0x6ce8a2*/
      if ( !v3 ) /*0x6ce8a8*/
        this->SidebarImage = (SHPStruct *)SearchMIXFile(((char *)&stru_820320 + 184), 0); /*0x6ce8b6*/
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

    result = AbstractClass::SaveLoad_Prefix( (ObjectTypeClass *)((int *)this), a2, a3); /*0x6ce8df*/
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

    ((gamemd::AbstractTypeClass*)this)->ProcessPower( a2); /*0x6ce919*/
    Power::TimerProcess(this->ArrayIndex); /*0x6ce927*/
    Power::TimerProcess(this->ActionValue[0]); /*0x6ce935*/
    Power::TimerProcess(this->RechargeVoice); /*0x6ce943*/
    Power::TimerProcess(this->ChargingVoice); /*0x6ce951*/
    Power::TimerProcess(this->ImpatientVoice); /*0x6ce95f*/
    v3 = Power::TimerProcess(this->SuspendVoice); /*0x6ce96d*/
    IDA_LOBYTE(v3) = this->IsPowered; /*0x6ce972*/
    Power::FlagProcess((Power *)a2, v3); /*0x6ce97b*/
    IDA_LOBYTE(v4) = this->DisableableFromShell; /*0x6ce980*/
    Power::FlagProcess((Power *)a2, v4); /*0x6ce989*/
    IDA_LOBYTE(v5) = this->PreClick; /*0x6ce98e*/
    v6 = Power::FlagProcess((Power *)a2, v5); /*0x6ce997*/
    IDA_LOBYTE(v6) = this->PostClick; /*0x6ce99c*/
    Power::FlagProcess((Power *)a2, v6); /*0x6ce9a5*/
    Power::TimerProcess(this->PreDependent); /*0x6ce9b3*/
    IDA_LOBYTE(v7) = this->ShowTimer; /*0x6ce9b8*/
    Power::FlagProcess((Power *)a2, v7); /*0x6ce9c1*/
    Power::TimerProcess(this->RechargeTime); /*0x6ce9cf*/
    Power::TimerProcess((int)this->Type); /*0x6ce9dd*/
    IDA_LOBYTE(v8) = this->UseChargeDrain; /*0x6ce9e2*/
    v9 = Power::FlagProcess((Power *)a2, v8); /*0x6ce9eb*/
    IDA_LOBYTE(v9) = this->ManualControl; /*0x6ce9f0*/
    return Power::FlagProcess((Power *)a2, v9); /*0x6ce9fe*/
}
} // namespace gamemd

// 0x6CEA10
namespace gamemd {
int SuperWeaponTypeClass::SD_vt16()
{

  return this->ArrayIndex; /*0x6cea16*/

}
} // namespace gamemd
