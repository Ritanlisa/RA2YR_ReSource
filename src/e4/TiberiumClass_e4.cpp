// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/RandomMap_e4.hpp"
#include "e4/classes/Timer_e4.hpp"

// 0x5A0160
namespace gamemd {
int TiberiumClass::Spread(int a1, int a2, int a3, int a4, int a5, int a6, char a7, char a8)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  __int16 v14; // cx
  int i; // [esp+28h] [ebp-4h]

  _DWORD * v28 = (_DWORD *)RandomMap::CellListAlloc(a1); /*0x5a0171*/
  for ( i = 0; i < a2; ++i ) /*0x5a0181*/
  {
  _DWORD *v29; // [esp+14h] [ebp-18h]
    _DWORD * v8 = __2_YAPAXI_Z(0x18u); /*0x5a0189*/
    _DWORD * v9 = v8; /*0x5a018e*/
    if ( v8 ) /*0x5a0195*/
    {
      VectorClass::CellConstructor(v8, 0, 0); /*0x5a019b*/
      *v9 = &vt_DynamicVectorClass_Cell; /*0x5a01a0*/
      v9[5] = 10; /*0x5a01a6*/
      v9[4] = 0; /*0x5a01ad*/
      v29 = v9; /*0x5a01b0*/
    }
    else
    {
      v29 = 0; /*0x5a01b6*/
    }
    _DWORD * v10 = v28; /*0x5a01ba*/
    int v31 = 0; /*0x5a01be*/
    v29[5] = 3 * v28[4]; /*0x5a01cc*/
    if ( (int)v28[4] > 0 ) /*0x5a01d4*/
    {
      while ( 2 ) /*0x5a01da*/
      {
        char v11 = 0; /*0x5a01da*/
        int v33 = 0; /*0x5a01dc*/
        while ( 1 ) /*0x5a01f3*/
        {
          _WORD * v12 = (_WORD *)(v10[1] + 4 * v31); /*0x5a01f3*/
          _WORD * v13 = (_WORD *)(4 * (v11 & 7) + 9041544); /*0x5a01fe*/
          v14 = *v13 + *v12; /*0x5a0205*/
          LOWORD(v13) = v12[1] + v13[1]; /*0x5a020c*/
  int v32; // [esp+20h] [ebp-Ch]
          LOWORD(v32) = v14; /*0x5a0210*/
          HIWORD(v32) = (_WORD)v13; /*0x5a0215*/
          int v30 = v32; /*0x5a021e*/
          int v15 = (__int16)v13; /*0x5a0225*/
          int v16 = (__int16)v13 + v14; /*0x5a0228*/
          if ( v16 > g_MapCellHeight_Value /*0x5a0285*/
            && v14 - v15 < g_MapCellHeight_Value
            && v15 - v14 < g_MapCellHeight_Value
            && v16 <= g_MapCellCount
            && v14 >= a3
            && v14 < a3 + a5
            && v15 >= a4
            && v15 < a6 + a4 )
          {
            char * v17 = (char *)g_MapTileArray + 80 * v14 + 80 * unk_89C2DC * v15; /*0x5a02a4*/
            int v18 = *((_DWORD *)v17 + 14); /*0x5a02a8*/
            bool v19 = a7 && v18 == a1 - 1; /*0x5a02b6*/
            int * v20 = (int *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v30); /*0x5a02c6*/
            int * v21 = v20; /*0x5a02cd*/
            if ( (!v18 || v19) && (Cell::IsEmpty(v20) || v19 && Cell::IsGroundTypeRange(v21)) ) /*0x5a02e6*/
            {
              int v22 = v29[2]; /*0x5a02ff*/
              if ( v29[4] < v22 /*0x5a0324*/
                || (*((_BYTE *)v29 + 13) || !v22)
  int v23; // eax
                && (v23 = v29[5], v23 > 0)
                && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v29 + 8))(v29, v22 + v23, 0) )
              {
                int v24 = v29[4]; /*0x5a032b*/
                int v25 = v29[1]; /*0x5a032e*/
                v29[4] = v24 + 1; /*0x5a0334*/
                *(_DWORD *)(v25 + 4 * v24) = v30; /*0x5a033b*/
              }
              *((_DWORD *)v17 + 14) = a1; /*0x5a0348*/
              if ( a7 && Cell::IsEmpty(v21) ) /*0x5a034f*/
                *((_BYTE *)CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v30) + 283) = a8; /*0x5a036b*/
            }
            else if ( v18 != a1 ) /*0x5a02f3*/
            {
              if ( v28 ) /*0x5a03e4*/
                (*(void (__thiscall **)(_DWORD *, int))*v28)(v28, 1); /*0x5a03ea*/
              if ( v29 ) /*0x5a03f2*/
                (*(void (__thiscall **)(_DWORD *, int))*v29)(v29, 1); /*0x5a03f8*/
              return 0; /*0x5a03fd*/
            }
          }
          v11 = ++v33; /*0x5a0375*/
          if ( v33 >= 8 ) /*0x5a037d*/
            break; /*0x5a037d*/
          v10 = v28; /*0x5a01e2*/
        }
        v10 = v28; /*0x5a0383*/
        int v26 = v28[4]; /*0x5a038c*/
        if ( ++v31 < v26 ) /*0x5a0395*/
          continue; /*0x5a0395*/
        break;
      }
    }
    if ( v10 ) /*0x5a039f*/
      (*(void (__thiscall **)(_DWORD *, int))*v10)(v10, 1); /*0x5a03a5*/
    v28 = v29; /*0x5a03af*/
  }
  if ( v28 ) /*0x5a03ca*/
    (*(void (__thiscall **)(_DWORD *, int))*v28)(v28, 1); /*0x5a03d0*/
  return 1; /*0x5a03d2*/
}
}
} // namespace gamemd

// 0x7216C0
namespace gamemd {
unsigned int * TiberiumClass::TiberiumClass(ObjectClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  IUnknown *v3; // edx

  AbstractTypeClass::Constructor((int)this, (AbstractClass *)aP1); /*0x7216ca*/
  this->owningHouseIndex = -1717986918; /*0x7216dc*/
  this->Spread = -1717986918; /*0x7216e7*/
  this->isInLogic = -1; /*0x7216f1*/
  this->location = 0; /*0x7216fb*/
  this->q0A4 = 1069128089; /*0x721701*/
  this->lineTrailer = 0; /*0x721707*/
  this->SpreadPercentage = 1069128089; /*0x72170d*/
  this->q0B8 = 0; /*0x721713*/
  this->Growth = 0; /*0x721719*/
  this->GrowthPercentage = 0; /*0x72171f*/
  AnimTypeVector::Constructor(this + 49, 0, 0); /*0x721725*/
  this->Image = 10; /*0x72172a*/
  this->Debris = 0; /*0x721731*/
  this->q0C4 = &vt_TypeList_AnimTypeClass_const; /*0x721734*/
  this->NumImages = 0; /*0x72173a*/
  this->q0E4 = 0; /*0x721740*/
  this->q0E8 = 0; /*0x721746*/
  this->TiberiumClass_field_EC = 0; /*0x72174c*/
  this->TiberiumClass_field_F0 = 0; /*0x721752*/
  this->q0F4 = 0; /*0x721758*/
  this->q0F8 = 0; /*0x72175e*/
  this->q0FC = 0; /*0x721764*/
  this->q100 = *(_DWORD *)&HouseClass_Player[45112]; /*0x721770*/
  this->q108 = 0; /*0x721776*/
  this->q10C = 0; /*0x72177c*/
  this->q110 = 0; /*0x721782*/
  this->q114 = 0; /*0x721788*/
  this->TiberiumClass_field_118 = 0; /*0x72178e*/
  v3 = *(IUnknown **)&HouseClass_Player[45112]; /*0x721794*/
  this->q124 = 0; /*0x72179a*/
  this->GrowthTimer = v3; /*0x7217a0*/
  *this = &TiberiumClass::`vftable'; /*0x7217a6*/
  this->vtable2 = &TiberiumClass::`vftable'; /*0x7217ac*/
  this->vtable3 = &TiberiumClass::`vftable'; /*0x7217b3*/
  this->vtable4 = &vt_TiberiumClass; /*0x7217ba*/
  this->isInLogic = *(_DWORD *)&stru_B05488[41072]; /*0x7217c6*/
  if ( *(int *)&stru_B05488[41072] < *(int *)&stru_B05488[41064] /*0x7217fe*/
    || (stru_B05488[41069] || !*(_DWORD *)&stru_B05488[41064])
    && *(int *)&stru_B05488[41076] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_B05488[41056] + 8))(
         &stru_B05488[41056],
         *(_DWORD *)&stru_B05488[41064] + *(_DWORD *)&stru_B05488[41076],
         0) )
  {
    int v4 = (*(_DWORD *)&stru_B05488[41072])++; /*0x72180b*/
    *(_DWORD *)(*(_DWORD *)&stru_B05488[41060] + 4 * v4) = this; /*0x72181a*/
  }
  (*(void (__thiscall **)(_DWORD *))(this->q0C4 + 12))(this + 49); /*0x721821*/
  if ( *(int *)&stru_B05488[41464] < *(int *)&stru_B05488[41456] /*0x721857*/
    || (stru_B05488[41461] || !*(_DWORD *)&stru_B05488[41456])
    && *(int *)&stru_B05488[41468] > 0
    && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&stru_B05488[41448] + 8))(
         &stru_B05488[41448],
         *(_DWORD *)&stru_B05488[41456] + *(_DWORD *)&stru_B05488[41468],
         0) )
  {
    int v5 = (*(_DWORD *)&stru_B05488[41464])++; /*0x721864*/
    *(_DWORD *)(*(_DWORD *)&stru_B05488[41452] + 4 * v5) = this; /*0x721873*/
  }
  return this; /*0x721878*/
}
}
} // namespace gamemd

// 0x721A50
namespace gamemd {
int TiberiumClass::LoadFromINI(unsigned char *** aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int Int_Overwrite; // eax
  double Double_Overwrite; // st7
  CCINIClass *v5; // eax
  int eax2a; // eax
  CCINIClass *v7; // eax
  INIClass *v11; // ecx
  AbstractClass *i; // eax
  int ecx10; // ecx
  VectorClass *v13; // edx
  VectorClass *v14; // eax
  char result; // al
  INIClass *_FFFFFFF4; // [esp-Ch] [ebp-D0h]
  INIClass *v19; // [esp-Ch] [ebp-D0h]
  DynamicVector *v18; // [esp-8h] [ebp-CCh]
  AnimTypeClass *v21; // [esp+8h] [ebp-BCh] BYREF
  _DWORD v22[3]; // [esp+Ch] [ebp-B8h] BYREF
  char v23; // [esp+19h] [ebp-ABh]
  int v24; // [esp+1Ch] [ebp-A8h]
  int v25; // [esp+20h] [ebp-A4h]
  VectorClass *v26; // [esp+24h] [ebp-A0h]
  _DWORD v27[7]; // [esp+28h] [ebp-9Ch] BYREF
  INIClass String[2]; // [esp+44h] [ebp-80h] BYREF

  INIClass::ResetSection(aP1); /*0x721a63*/
  if ( !AbstractTypeClass::LoadFromINI(this, (AbstractTypeClass *)aP1) ) /*0x721a6b*/
    return 0; /*0x721cea*/
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x721a8b*/
                    (int)aP1,
                    (unsigned __int8 *)(this + 36),
                    (CCINIClass *)&stru_830620[82692],
                    this->location);
  _FFFFFFF4 = this->owningHouseIndex; /*0x721a9d*/
  this->location = Int_Overwrite; /*0x721aa6*/
  Double_Overwrite = INIClass::ReadDouble_Overwrite( /*0x721aac*/
                       (int)aP1,
                       (INIClass *)(this + 36),
                       (unsigned __int8 *)&stru_830620[82672],
                       _FFFFFFF4);
  v5 = this->lineTrailer; /*0x721ab1*/
  this->owningHouseIndex = Double_Overwrite; /*0x721ab9*/
  eax2a = INIClass::ReadInt_Overwrite( /*0x721ac6*/
            (int)aP1,
            (unsigned __int8 *)(this + 36),
            (CCINIClass *)&stru_830620[82664],
            (INIClass *)v5);
  v19 = this->Spread; /*0x721ad8*/
  this->lineTrailer = eax2a; /*0x721ae1*/
  double v8; // st7
  v8 = INIClass::ReadDouble_Overwrite( /*0x721ae7*/
         (int)aP1,
         (INIClass *)(this + 36),
         (unsigned __int8 *)&stru_830620[82644],
         v19);
  v7 = this->q0B8; /*0x721aec*/
  this->Spread = v8; /*0x721af4*/
  int v10; // eax
  v10 = INIClass::ReadInt_Overwrite( /*0x721b01*/
          (int)aP1,
          (unsigned __int8 *)(this + 36),
          (CCINIClass *)&stru_830620[82636],
          (INIClass *)v7);
  v11 = this->Growth; /*0x721b06*/
  this->q0B8 = v10; /*0x721b0c*/
  int v12 = INIClass::ReadInt_Overwrite((int)aP1, (unsigned __int8 *)(this + 36), &stru_81938C, v11); /*0x721b1b*/
  v18 = this->GrowthPercentage; /*0x721b28*/
  this->Growth = v12; /*0x721b2f*/
  this->GrowthPercentage = BuildingTypeClass::FindAnimByName( /*0x721b3a*/
                              aP1,
                              (unsigned __int8 *)(this + 36),
                              (unsigned __int8 *)&stru_81B138,
                              (int)v18);
  if ( INIClass::GetString( /*0x721b57*/
         aP1,
         (INIClass *)(this + 36),
         (unsigned __int8 *)&stru_830620[82628],
         (INIClass *)&DataGlobal_87F8E4[42624],
         String,
         128) )
  {
    DynamicVectorClass::AnimTypeConstructor(v27, 0, 0); /*0x721b6c*/
    v27[0] = &vt_TypeList_AnimTypeClass_const; /*0x721b7b*/
    for ( i = (AbstractClass *)strtok(String[0].__pad_0, Delimiter[0]); /*0x721b8d*/
          i;
          i = (AbstractClass *)strtok(0, Delimiter[0]) )
    {
      if ( !i->__pad_0[0] ) /*0x721b8f*/
        break; /*0x721b92*/
      v21 = AnimTypeClass::FindOrCreate(i); /*0x721b9d*/
      if ( v21 ) /*0x721ba1*/
        DynamicVector::Add_Alt4(v27, (VectorClass *)&v21); /*0x721bac*/
    }
    TypeList::AnimTypeCopy(v22, (VectorClass *)v27); /*0x721bcd*/
    v27[0] = &vt_VectorClass_AnimTypeClass_const; /*0x721bd6*/
    DynamicVectorClass::Destroy_Alt((int)v27); /*0x721bde*/
  }
  else
  {
    TypeList::AnimTypeCopy(v22, (VectorClass *)(this + 196)); /*0x721bf0*/
  }
  VectorClass::CopyDefault((_DWORD *)(this + 196), (VectorClass *)v22); /*0x721c03*/
  ecx10 = v25; /*0x721c0c*/
  v13 = v26; /*0x721c10*/
  this->Debris = v24; /*0x721c14*/
  v14 = (VectorClass *)v22[1]; /*0x721c17*/
  this->Image = ecx10; /*0x721c1b*/
  this->NumFrames = v13; /*0x721c1e*/
  v22[0] = &vt_VectorClass_AnimTypeClass_const; /*0x721c21*/
  if ( v14 && v23 ) /*0x721c34*/
    __3_YAXPAX_Z(v14); /*0x721c37*/
  switch ( INIClass::ReadInt_Overwrite( /*0x721c55*/
             (int)aP1,
             (unsigned __int8 *)(this + 36),
             &g_INI_Key_Image,
             (INIClass *)0xFFFFFFFF) )
  {
    case -1: /*0x721c55*/
      goto LABEL_19;
    case 2: /*0x721c55*/
      this->NumImages = g_BuildingTypeClass_Array[1].sectionHead[1]; /*0x721c69*/
      this->q0E4 = 12; /*0x721c6f*/
      this->q0E8 = 12; /*0x721c75*/
      return 1; /*0x721c85*/
    case 3: /*0x721c55*/
      this->NumImages = *(_DWORD *)&g_BuildingTypeClass_Array[5].__pad_41[3]; /*0x721c94*/
      goto LABEL_18; /*0x721c9a*/
    case 4: /*0x721c55*/
      this->NumImages = g_BuildingTypeClass_Array[6].INIClass_field_3C; /*0x721ca8*/
      goto LABEL_18; /*0x721cae*/
    default:
      this->NumImages = g_BuildingTypeClass_Array[4].unknown38; /*0x721cbb*/
LABEL_18:
      this->TiberiumClass_field_EC = 8; /*0x721cc1*/
      this->q0E4 = 12; /*0x721cd0*/
      this->q0E8 = 12; /*0x721cd6*/
LABEL_19:
      result = 1; /*0x721cdc*/
      break; /*0x721ce6*/
  }
  return result; /*0x721c7b*/
}
}
} // namespace gamemd

// 0x721E80
namespace gamemd {
int TiberiumClass::SaveLoad_Prefix(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int i; // ecx
  void **v6; // ecx
  int j; // ecx
  void **v9; // ecx
  int result; // eax

  int v2 = a1; /*0x721e83*/
  int v3 = 0; /*0x721e87*/
  _DWORD * v4 = *(_DWORD **)(a1 + 244); /*0x721e8a*/
  if ( v4 ) /*0x721e92*/
  {
    for ( i = 0; i <= *v4; *(_DWORD *)(v4[2] + 4 * i - 4) = 0 ) /*0x721e9a*/
      ++i; /*0x721e9f*/
    *v4 = 0; /*0x721eaa*/
    v6 = *(void ***)(v2 + 244); /*0x721eac*/
    if ( v6 ) /*0x721eb4*/
      Scalar::Dtor(v6, 1); /*0x721eb8*/
    *(_DWORD *)(v2 + 244) = 0; /*0x721ebd*/
  }
  if ( *(_DWORD *)(v2 + 252) ) /*0x721ec3*/
  {
    __3_YAXPAX_Z(*(void **)(v2 + 252)); /*0x721ece*/
    *(_DWORD *)(v2 + 252) = 0; /*0x721ed6*/
  }
  if ( *(_DWORD *)(v2 + 248) ) /*0x721edc*/
  {
    __3_YAXPAX_Z(*(void **)(v2 + 248)); /*0x721ee7*/
    *(_DWORD *)(v2 + 248) = 0; /*0x721eef*/
  }
  _DWORD * v7 = *(_DWORD **)(v2 + 272); /*0x721ef5*/
  *(_DWORD *)(v2 + 240) = 0; /*0x721efb*/
  if ( v7 ) /*0x721f03*/
  {
    for ( j = 0; j <= *v7; *(_DWORD *)(v7[2] + 4 * j - 4) = 0 ) /*0x721f0b*/
      ++j; /*0x721f10*/
    *v7 = 0; /*0x721f1b*/
    v9 = *(void ***)(v2 + 272); /*0x721f1d*/
    if ( v9 ) /*0x721f25*/
      Scalar::Dtor(v9, 1); /*0x721f29*/
    *(_DWORD *)(v2 + 272) = 0; /*0x721f2e*/
  }
  if ( *(_DWORD *)(v2 + 280) ) /*0x721f34*/
  {
    __3_YAXPAX_Z(*(void **)(v2 + 280)); /*0x721f3f*/
    *(_DWORD *)(v2 + 280) = 0; /*0x721f47*/
  }
  if ( *(_DWORD *)(v2 + 276) ) /*0x721f4d*/
  {
    __3_YAXPAX_Z(*(void **)(v2 + 276)); /*0x721f58*/
    *(_DWORD *)(v2 + 276) = 0; /*0x721f60*/
  }
  int v10 = *(_DWORD *)(v2 + 196); /*0x721f66*/
  *(_DWORD *)(v2 + 268) = 0; /*0x721f74*/
  (*(void (__thiscall **)(int))(v10 + 12))(v2 + 196); /*0x721f7a*/
  int v11 = a2; /*0x721f7d*/
  result = AbstractClass::SaveLoad_Prefix_0((_DWORD *)v2, a2); /*0x721f83*/
  if ( result >= 0 ) /*0x721f8a*/
  {
    if ( v2 ) /*0x721f92*/
    {
      AbstractTypeClass::Init(v2, (int)&a1); /*0x721f9b*/
      DynamicVectorClass::AnimTypeConstructor((_DWORD *)(v2 + 196), 0, 0); /*0x721fa4*/
      *(_DWORD *)(v2 + 196) = &vt_TypeList_AnimTypeClass_const; /*0x721fb0*/
      Timer::Start((_DWORD *)(v2 + 256), 0); /*0x721fb6*/
      Timer::Start((_DWORD *)(v2 + 284), 0); /*0x721fc2*/
      *(_DWORD *)v2 = &TiberiumClass::`vftable'; /*0x721fc7*/
      *(_DWORD *)(v2 + 4) = &TiberiumClass::`vftable'; /*0x721fcd*/
      *(_DWORD *)(v2 + 8) = &TiberiumClass::`vftable'; /*0x721fd4*/
      *(_DWORD *)(v2 + 12) = &vt_TiberiumClass; /*0x721fdb*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v2 + 224)); /*0x721fee*/
    if ( v2 != -196 ) /*0x721ff5*/
      AnimTypeList::Constructor((_DWORD *)(v2 + 196)); /*0x721ff9*/
    (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v11 + 12))(v11, &a1, 4, 0); /*0x722009*/
    result = 0; /*0x72200c*/
    if ( a1 > 0 ) /*0x722012*/
    {
      do /*0x722037*/
      {
        (*(void (__stdcall **)(int, int *, int, _DWORD))(*(_DWORD *)v11 + 12))(v11, &a2, 4, 0); /*0x722023*/
        DynamicVector::Add_Alt4((_DWORD *)(v2 + 196), &a2); /*0x72202d*/
        ++v3; /*0x722032*/
      }
      while ( v3 < a1 ); /*0x722037*/
      result = 0; /*0x722039*/
    }
    int v13 = 0; /*0x722041*/
    if ( *(int *)(v2 + 212) > 0 ) /*0x722045*/
    {
      do /*0x722064*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(*(_DWORD *)(v2 + 200) + 4 * v13++)); /*0x722056*/
      while ( v13 < *(_DWORD *)(v2 + 212) ); /*0x722064*/
      result = 0; /*0x722066*/
    }
    *(_DWORD *)(v2 + 272) = 0; /*0x722068*/
    *(_DWORD *)(v2 + 276) = 0; /*0x72206e*/
    *(_DWORD *)(v2 + 280) = 0; /*0x722074*/
    *(_DWORD *)(v2 + 244) = 0; /*0x72207a*/
    *(_DWORD *)(v2 + 248) = 0; /*0x722080*/
    *(_DWORD *)(v2 + 252) = 0; /*0x722086*/
  }
  return result; /*0x72208c*/
}
}
} // namespace gamemd

// 0x721E40
namespace gamemd {
int TiberiumClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = -985803917;
  a2[1] = 298980638;
  a2[2] = 1610642817;
  a2[3] = -1252326136;
  return 0;
}
} // namespace gamemd

// 0x7220D0
namespace gamemd {
int TiberiumClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2)
{
{
    int result;
    int v4;
    int i;
    result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2);
    if ( result >= 0 )
  {
    v4 = *a1;
    aP2 = aP0->ChargerTurrets[6];
    (*(void (__stdcall **)(int *, int *, int, int))(v4 + 16))(a1, &aP2, 4, 0);
    for ( i = 0; i < aP2; ++i )
    (*(void (__stdcall **)(int *, int, int, int))(*a1 + 16))(a1, aP0->ChargerTurrets[3] + 4 * i, 4, 0);
    return 0;
  }
    return result;
}
}
} // namespace gamemd

// 0x7236E0
namespace gamemd {
int TiberiumClass::StubReturn296()
{
return 296;
}
} // namespace gamemd

// 0x7236F0
namespace gamemd {
int TiberiumClass::StubReturn46()
{
return 46;
}
} // namespace gamemd
