// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/RandomMap_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/TiberiumClass_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/Tiberium_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/TimerClass_e4.hpp"
#include "e4/classes/OverlayTypeClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/DynamicVectorClass_flat_e4.hpp"

// 0x5A0160
namespace gamemd {
int TiberiumClass::Spread(int a1, int a2, int a3, int a4, int a5, int a6, char a7, char a8)
{
    unsigned int v26 = 0;  /* G37 hoist */
    unsigned int v14 = 0;  /* G37 hoist */
    unsigned int v13 = 0;  /* G37 hoist */
    unsigned int v26 = 0;  /* G37 hoist */
    unsigned int v14 = 0;  /* G37 hoist */
    unsigned int v13 = 0;  /* G37 hoist */

  unsigned int *v8; // eax
  unsigned int *v9; // esi
  unsigned int *v10; // ecx
  char v11; // dl
  unsigned short *v12; // eax
  unsigned short *v13; // edx
  int16_t v14; // cx
  int v15; // eax
  int v16; // edx
  char *v17; // esi
  int v18; // edi
  bool v19; // bl
  int *v20; // eax
  int *v21; // ebp
  int v22; // ecx
  int v23; // eax
  int v24; // eax
  int v25; // edx
  int v26; // edx
  unsigned int *v28; // [esp+10h] [ebp-1Ch]
  unsigned int *v29; // [esp+14h] [ebp-18h]
  int v30; // [esp+18h] [ebp-14h] BYREF
  int v31; // [esp+1Ch] [ebp-10h]
  int v32; // [esp+20h] [ebp-Ch]
  int v33; // [esp+24h] [ebp-8h]
  int i; // [esp+28h] [ebp-4h]

  v28 = (unsigned int *)RandomMap::CellListAlloc(a1); /*0x5a0171*/
  for ( i = 0; i < a2; ++i ) /*0x5a0181*/
  {
    v8 = __2_YAPAXI_Z(0x18u); /*0x5a0189*/
    v9 = v8; /*0x5a018e*/
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
    v10 = v28; /*0x5a01ba*/
    v31 = 0; /*0x5a01be*/
    v29[5] = 3 * v28[4]; /*0x5a01cc*/
    if ( (int)v28[4] > 0 ) /*0x5a01d4*/
    {
      while ( 2 ) /*0x5a01da*/
      {
        v11 = 0; /*0x5a01da*/
        v33 = 0; /*0x5a01dc*/
        while ( 1 ) /*0x5a01f3*/
        {
          v12 = (unsigned short *)(v10[1] + 4 * v31); /*0x5a01f3*/
          v13 = (unsigned short *)(4 * (v11 & 7) + 9041544); /*0x5a01fe*/
          v14 = *(unsigned int *)(v13) + *v12; /*0x5a0205*/
          LOWORD(v13) = v12[1] + ((unsigned int *)(v13))[1]; /*0x5a020c*/
          LOWORD(v32) = v14; /*0x5a0210*/
          HIWORD(v32) = (unsigned short)v13; /*0x5a0215*/
          v30 = v32; /*0x5a021e*/
          v15 = (int16_t)v13; /*0x5a0225*/
          v16 = (int16_t)v13 + v14; /*0x5a0228*/
          if ( v16 > g_MapCellHeight_Value /*0x5a0285*/
            && v14 - v15 < g_MapCellHeight_Value
            && v15 - v14 < g_MapCellHeight_Value
            && v16 <= g_MapCellCount
            && v14 >= a3
            && v14 < a3 + a5
            && v15 >= a4
            && v15 < a6 + a4 )
          {
            v17 = (char *)g_MapTileArray + 80 * v14 + 80 * unk_89C2DC * v15; /*0x5a02a4*/
            v18 = *((unsigned int *)v17 + 14); /*0x5a02a8*/
            v19 = a7 && v18 == a1 - 1; /*0x5a02b6*/
            v20 = (int *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (int16_t *)&v30); /*0x5a02c6*/
            v21 = v20; /*0x5a02cd*/
            if ( (!v18 || v19) && (Cell::IsEmpty(v20) || v19 && Cell::IsGroundTypeRange(v21)) ) /*0x5a02e6*/
            {
              v22 = v29[2]; /*0x5a02ff*/
              if ( v29[4] < v22 /*0x5a0324*/
                || (*((unsigned char *)v29 + 13) || !v22)
                && (v23 = v29[5], v23 > 0)
                && (*(uint8_t (**)(unsigned int *, int, unsigned int))(*v29 + 8))(v29, v22 + v23, 0) )
              {
                v24 = v29[4]; /*0x5a032b*/
                v25 = v29[1]; /*0x5a032e*/
                v29[4] = v24 + 1; /*0x5a0334*/
                *(unsigned int *)(v25 + 4 * v24) = v30; /*0x5a033b*/
              }
              *((unsigned int *)v17 + 14) = a1; /*0x5a0348*/
              if ( a7 && Cell::IsEmpty(v21) ) /*0x5a034f*/
                *((unsigned char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (int16_t *)&v30) + 283) = a8; /*0x5a036b*/
            }
            else if ( v18 != a1 ) /*0x5a02f3*/
            {
              if ( v28 ) /*0x5a03e4*/
                (*(void (**)(unsigned int *, int))*v28)(v28, 1); /*0x5a03ea*/
              if ( v29 ) /*0x5a03f2*/
                (*(void (**)(unsigned int *, int))*v29)(v29, 1); /*0x5a03f8*/
              return 0; /*0x5a03fd*/
            }
          }
          v11 = ++v33; /*0x5a0375*/
          if ( v33 >= 8 ) /*0x5a037d*/
            break; /*0x5a037d*/
          v10 = v28; /*0x5a01e2*/
        }
        v10 = v28; /*0x5a0383*/
        v26 = v28[4]; /*0x5a038c*/
        if ( ++v31 < v26 ) /*0x5a0395*/
          continue; /*0x5a0395*/
        break;
      }
    }
    if ( v10 ) /*0x5a039f*/
      (*(void (**)(unsigned int *, int))*v10)(v10, 1); /*0x5a03a5*/
    v28 = v29; /*0x5a03af*/
  }
  if ( v28 ) /*0x5a03ca*/
    (*(void (**)(unsigned int *, int))*v28)(v28, 1); /*0x5a03d0*/
  return 1; /*0x5a03d2*/

}
}
// 0x7216C0
namespace gamemd {
TiberiumClass::TiberiumClass(ObjectClass * aP1)
{

  IUnknown *v3; // edx
  int v4; // eax
  int v5; // eax

  AbstractTypeClass::Constructor((int)this, (AbstractClass *)aP1); /*0x7216ca*/
  *((unsigned int *)this + 40) = -1717986918; /*0x7216dc*/
  *((unsigned int *)this + 44) = -1717986918; /*0x7216e7*/
  *((unsigned int *)this + 38) = -1; /*0x7216f1*/
  *((unsigned int *)this + 39) = 0; /*0x7216fb*/
  *((unsigned int *)this + 41) = 1069128089; /*0x721701*/
  *((unsigned int *)this + 42) = 0; /*0x721707*/
  *((unsigned int *)this + 45) = 1069128089; /*0x72170d*/
  *((unsigned int *)this + 46) = 0; /*0x721713*/
  *((unsigned int *)this + 47) = 0; /*0x721719*/
  *((unsigned int *)this + 48) = 0; /*0x72171f*/
  AnimTypeVector::Constructor((unsigned int *)this + 49, 0, 0); /*0x721725*/
  *((unsigned int *)this + 54) = 10; /*0x72172a*/
  *((unsigned int *)this + 53) = 0; /*0x721731*/
  *((unsigned int *)this + 49) = &vt_TypeList_AnimTypeClass_const; /*0x721734*/
  *((unsigned int *)this + 56) = 0; /*0x72173a*/
  *((unsigned int *)this + 57) = 0; /*0x721740*/
  *((unsigned int *)this + 58) = 0; /*0x721746*/
  *((unsigned int *)this + 59) = 0; /*0x72174c*/
  *((unsigned int *)this + 60) = 0; /*0x721752*/
  *((unsigned int *)this + 61) = 0; /*0x721758*/
  *((unsigned int *)this + 62) = 0; /*0x72175e*/
  *((unsigned int *)this + 63) = 0; /*0x721764*/
  *((unsigned int *)this + 64) = *(unsigned int *)&HouseClass_Player.__pad_5568[23248]; /*0x721770*/
  *((unsigned int *)this + 66) = 0; /*0x721776*/
  *((unsigned int *)this + 67) = 0; /*0x72177c*/
  *((unsigned int *)this + 68) = 0; /*0x721782*/
  *((unsigned int *)this + 69) = 0; /*0x721788*/
  *((unsigned int *)this + 70) = 0; /*0x72178e*/
  v3 = *(IUnknown **)&HouseClass_Player.__pad_5568[23248]; /*0x721794*/
  *((unsigned int *)this + 73) = 0; /*0x72179a*/
  *((unsigned int *)this + 71) = v3; /*0x7217a0*/
  *this = &vt_TiberiumClass; /*0x7217a6*/
  *((unsigned int *)this + 1) = &vt_TiberiumClass; /*0x7217ac*/
  *((unsigned int *)this + 2) = &vt_TiberiumClass; /*0x7217b3*/
  *((unsigned int *)this + 3) = &vt_TiberiumClass; /*0x7217ba*/
  *((unsigned int *)this + 38) = *(unsigned int *)&stru_B05488.__pad_579C[18644]; /*0x7217c6*/
  if ( *(int *)&stru_B05488.__pad_579C[18644] < *(int *)&stru_B05488.__pad_579C[18636] /*0x7217fe*/
    || (stru_B05488.__pad_579C[18641] || !*(unsigned int *)&stru_B05488.__pad_579C[18636])
    && *(int *)&stru_B05488.__pad_579C[18648] > 0
    && (*(uint8_t (**)(char *, int, unsigned int))(*(unsigned int *)&stru_B05488.__pad_579C[18628] + 8))(
         &stru_B05488.__pad_579C[18628],
         *(unsigned int *)&stru_B05488.__pad_579C[18636] + *(unsigned int *)&stru_B05488.__pad_579C[18648],
         0) )
  {
    v4 = (*(unsigned int *)&stru_B05488.__pad_579C[18644])++; /*0x72180b*/
    *(unsigned int *)(*(unsigned int *)&stru_B05488.__pad_579C[18632] + 4 * v4) = this; /*0x72181a*/
  }
  (*(void (**)(unsigned int *))(*((unsigned int *)this + 49) + 12))((unsigned int *)this + 49); /*0x721821*/
  if ( *(int *)&stru_B05488.__pad_579C[19036] < *(int *)&stru_B05488.__pad_579C[19028] /*0x721857*/
    || (stru_B05488.__pad_579C[19033] || !*(unsigned int *)&stru_B05488.__pad_579C[19028])
    && *(int *)&stru_B05488.__pad_579C[19040] > 0
    && (*(uint8_t (**)(char *, int, unsigned int))(*(unsigned int *)&stru_B05488.__pad_579C[19020] + 8))(
         &stru_B05488.__pad_579C[19020],
         *(unsigned int *)&stru_B05488.__pad_579C[19028] + *(unsigned int *)&stru_B05488.__pad_579C[19040],
         0) )
  {
    v5 = (*(unsigned int *)&stru_B05488.__pad_579C[19036])++; /*0x721864*/
    *(unsigned int *)(*(unsigned int *)&stru_B05488.__pad_579C[19024] + 4 * v5) = this; /*0x721873*/
  }
  return this; /*0x721878*/

}
}
// 0x721A50
namespace gamemd {
void TiberiumClass::LoadFromINI( uint8_t *** aP1)
{

  int Int_Overwrite; // eax
  double Double_Overwrite; // st7
  CCINIClass *v5; // eax
  int eax2a; // eax
  double v8; // st7
  CCINIClass *v7; // eax
  int v10; // eax
  INIClass *v11; // ecx
  int v12; // eax
  AbstractClass *i; // eax
  int ecx10; // ecx
  VectorClass *v13; // edx
  VectorClass *v14; // eax
  char result; // al
  INIClass *_FFFFFFF4; // [esp-Ch] [ebp-D0h]
  INIClass *v19; // [esp-Ch] [ebp-D0h]
  DynamicVector *v18; // [esp-8h] [ebp-CCh]
  AnimTypeClass *v21; // [esp+8h] [ebp-BCh] BYREF
  unsigned int v22[3]; // [esp+Ch] [ebp-B8h] BYREF
  char v23; // [esp+19h] [ebp-ABh]
  int v24; // [esp+1Ch] [ebp-A8h]
  int v25; // [esp+20h] [ebp-A4h]
  VectorClass *v26; // [esp+24h] [ebp-A0h]
  unsigned int v27[7]; // [esp+28h] [ebp-9Ch] BYREF
  INIClass String[2]; // [esp+44h] [ebp-80h] BYREF

  INIClass::ResetSection(aP1); /*0x721a63*/
  if ( !AbstractTypeClass::LoadFromINI(this, (AbstractTypeClass *)aP1) ) /*0x721a6b*/
    return 0; /*0x721cea*/
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x721a8b*/
                    (int)aP1,
                    (uint8_t *)(this + 36),
                    (CCINIClass *)&stru_830620.__pad_579C[60264],
                    *(INIClass **)(this + 156));
  _FFFFFFF4 = *(INIClass **)(this + 160); /*0x721a9d*/
  *(unsigned int *)(this + 156) = Int_Overwrite; /*0x721aa6*/
  Double_Overwrite = INIClass::ReadDouble_Overwrite( /*0x721aac*/
                       (int)aP1,
                       (INIClass *)(this + 36),
                       (uint8_t *)&stru_830620.__pad_579C[60244],
                       _FFFFFFF4);
  v5 = *(CCINIClass **)(this + 168); /*0x721ab1*/
  *(double *)(this + 160) = Double_Overwrite; /*0x721ab9*/
  eax2a = INIClass::ReadInt_Overwrite( /*0x721ac6*/
            (int)aP1,
            (uint8_t *)(this + 36),
            (CCINIClass *)&stru_830620.__pad_579C[60236],
            (INIClass *)v5);
  v19 = *(INIClass **)(this + 176); /*0x721ad8*/
  *(unsigned int *)(this + 168) = eax2a; /*0x721ae1*/
  v8 = INIClass::ReadDouble_Overwrite( /*0x721ae7*/
         (int)aP1,
         (INIClass *)(this + 36),
         (uint8_t *)&stru_830620.__pad_579C[60216],
         v19);
  v7 = *(CCINIClass **)(this + 184); /*0x721aec*/
  *(double *)(this + 176) = v8; /*0x721af4*/
  v10 = INIClass::ReadInt_Overwrite( /*0x721b01*/
          (int)aP1,
          (uint8_t *)(this + 36),
          (CCINIClass *)&stru_830620.__pad_579C[60208],
          (INIClass *)v7);
  v11 = *(INIClass **)(this + 188); /*0x721b06*/
  *(unsigned int *)(this + 184) = v10; /*0x721b0c*/
  v12 = INIClass::ReadInt_Overwrite((int)aP1, (uint8_t *)(this + 36), &stru_81938C, v11); /*0x721b1b*/
  v18 = *(DynamicVector **)(this + 192); /*0x721b28*/
  *(unsigned int *)(this + 188) = v12; /*0x721b2f*/
  *(unsigned int *)(this + 192) = BuildingTypeClass::FindAnimByName( /*0x721b3a*/
                              aP1,
                              (uint8_t *)(this + 36),
                              (uint8_t *)&stru_81B138,
                              (int)v18);
  if ( INIClass::GetString( /*0x721b57*/
         aP1,
         (INIClass *)(this + 36),
         (uint8_t *)&stru_830620.__pad_579C[60200],
         (INIClass *)&g_abs_87F8E4,
         String,
         128) )
  {
    DynamicVectorClass::AnimTypeConstructor(v27, 0, 0); /*0x721b6c*/
    v27[0] = &vt_TypeList_AnimTypeClass_const; /*0x721b7b*/
    for ( i = (AbstractClass *)strtok(String[0].__pad_0, g_abs_817F70); /*0x721b8d*/
          i;
          i = (AbstractClass *)strtok(0, g_abs_817F70) )
    {
      if ( !i-((unsigned int *)(>__pad_0))[0] ) /*0x721b8f*/
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
  VectorClass::CopyDefault((unsigned int *)(this + 196), (VectorClass *)v22); /*0x721c03*/
  ecx10 = v25; /*0x721c0c*/
  v13 = v26; /*0x721c10*/
  *(unsigned int *)(this + 212) = v24; /*0x721c14*/
  v14 = (VectorClass *)v22[1]; /*0x721c17*/
  *(unsigned int *)(this + 216) = ecx10; /*0x721c1b*/
  *(unsigned int *)(this + 220) = v13; /*0x721c1e*/
  v22[0] = &vt_VectorClass_AnimTypeClass_const; /*0x721c21*/
  if ( v14 && v23 ) /*0x721c34*/
    RA2_OPDEL(v14); /*0x721c37*/
  switch ( INIClass::ReadInt_Overwrite( /*0x721c55*/
             (int)aP1,
             (uint8_t *)(this + 36),
             &g_INI_Key_Image,
             (INIClass *)0xFFFFFFFF) )
  {
    case -1: /*0x721c55*/
      goto LABEL_19;
    case 2: /*0x721c55*/
      *(unsigned int *)(this + 224) = g_abs_A83D84[1].sectionHead[1]; /*0x721c69*/
      *(unsigned int *)(this + 228) = 12; /*0x721c6f*/
      *(unsigned int *)(this + 232) = 12; /*0x721c75*/
      return 1; /*0x721c85*/
    case 3: /*0x721c55*/
      *(unsigned int *)(this + 224) = *(unsigned int *)&g_abs_A83D84[5].__pad_41[3]; /*0x721c94*/
      goto LABEL_18; /*0x721c9a*/
    case 4: /*0x721c55*/
      *(unsigned int *)(this + 224) = g_abs_A83D84[6].INIClass_field_3C; /*0x721ca8*/
      goto LABEL_18; /*0x721cae*/
    default:
      *(unsigned int *)(this + 224) = g_abs_A83D84[4].unknown38; /*0x721cbb*/
LABEL_18:
      *(unsigned int *)(this + 236) = 8; /*0x721cc1*/
      *(unsigned int *)(this + 228) = 12; /*0x721cd0*/
      *(unsigned int *)(this + 232) = 12; /*0x721cd6*/
LABEL_19:
      result = 1; /*0x721cdc*/
      break; /*0x721ce6*/
  }
  return result; /*0x721c7b*/

}
}
// 0x721E80
namespace gamemd {
AbstractClass * * TiberiumClass::SaveLoad_Prefix(int a1, int a2)
{

  int v2; // esi
  int v3; // ebp
  unsigned int *v4; // eax
  int i; // ecx
  void **v6; // ecx
  unsigned int *v7; // eax
  int j; // ecx
  void **v9; // ecx
  int v10; // eax
  int v11; // ebx
  int result; // eax
  int v13; // edi

  v2 = a1; /*0x721e83*/
  v3 = 0; /*0x721e87*/
  v4 = *(unsigned int **)(a1 + 244); /*0x721e8a*/
  if ( v4 ) /*0x721e92*/
  {
    for ( i = 0; i <= *v4; *(unsigned int *)(v4[2] + 4 * i - 4) = 0 ) /*0x721e9a*/
      ++i; /*0x721e9f*/
    *v4 = 0; /*0x721eaa*/
    v6 = *(void ***)(v2 + 244); /*0x721eac*/
    if ( v6 ) /*0x721eb4*/
      Scalar::Dtor(v6, 1); /*0x721eb8*/
    *(unsigned int *)(v2 + 244) = 0; /*0x721ebd*/
  }
  if ( *(unsigned int *)(v2 + 252) ) /*0x721ec3*/
  {
    RA2_OPDEL(*(void **)(v2 + 252)); /*0x721ece*/
    *(unsigned int *)(v2 + 252) = 0; /*0x721ed6*/
  }
  if ( *(unsigned int *)(v2 + 248) ) /*0x721edc*/
  {
    RA2_OPDEL(*(void **)(v2 + 248)); /*0x721ee7*/
    *(unsigned int *)(v2 + 248) = 0; /*0x721eef*/
  }
  v7 = *(unsigned int **)(v2 + 272); /*0x721ef5*/
  *(unsigned int *)(v2 + 240) = 0; /*0x721efb*/
  if ( v7 ) /*0x721f03*/
  {
    for ( j = 0; j <= *v7; *(unsigned int *)(v7[2] + 4 * j - 4) = 0 ) /*0x721f0b*/
      ++j; /*0x721f10*/
    *v7 = 0; /*0x721f1b*/
    v9 = *(void ***)(v2 + 272); /*0x721f1d*/
    if ( v9 ) /*0x721f25*/
      Scalar::Dtor(v9, 1); /*0x721f29*/
    *(unsigned int *)(v2 + 272) = 0; /*0x721f2e*/
  }
  if ( *(unsigned int *)(v2 + 280) ) /*0x721f34*/
  {
    RA2_OPDEL(*(void **)(v2 + 280)); /*0x721f3f*/
    *(unsigned int *)(v2 + 280) = 0; /*0x721f47*/
  }
  if ( *(unsigned int *)(v2 + 276) ) /*0x721f4d*/
  {
    RA2_OPDEL(*(void **)(v2 + 276)); /*0x721f58*/
    *(unsigned int *)(v2 + 276) = 0; /*0x721f60*/
  }
  v10 = *(unsigned int *)(v2 + 196); /*0x721f66*/
  *(unsigned int *)(v2 + 268) = 0; /*0x721f74*/
  (*(void (**)(int))(v10 + 12))(v2 + 196); /*0x721f7a*/
  v11 = a2; /*0x721f7d*/
  result = AbstractClass::SaveLoad_Prefix_0((unsigned int *)v2, a2); /*0x721f83*/
  if ( result >= 0 ) /*0x721f8a*/
  {
    if ( v2 ) /*0x721f92*/
    {
      AbstractTypeClass::Init(v2, (int)&a1); /*0x721f9b*/
      DynamicVectorClass::AnimTypeConstructor((unsigned int *)(v2 + 196), 0, 0); /*0x721fa4*/
      *(unsigned int *)(v2 + 196) = &vt_TypeList_AnimTypeClass_const; /*0x721fb0*/
      Timer::Start((unsigned int *)(v2 + 256), 0); /*0x721fb6*/
      Timer::Start((unsigned int *)(v2 + 284), 0); /*0x721fc2*/
      *(unsigned int *)v2 = &vt_TiberiumClass; /*0x721fc7*/
      *(unsigned int *)(v2 + 4) = &vt_TiberiumClass; /*0x721fcd*/
      *(unsigned int *)(v2 + 8) = &vt_TiberiumClass; /*0x721fd4*/
      *(unsigned int *)(v2 + 12) = &vt_TiberiumClass; /*0x721fdb*/
    }
    ObjectPtr::RegisterForTracking((int)&g_abs_B0C110, (int *)(v2 + 224)); /*0x721fee*/
    if ( v2 != -196 ) /*0x721ff5*/
      AnimTypeList::Constructor((unsigned int *)(v2 + 196)); /*0x721ff9*/
    (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)v11 + 12))(v11, &a1, 4, 0); /*0x722009*/
    result = 0; /*0x72200c*/
    if ( a1 > 0 ) /*0x722012*/
    {
      do /*0x722037*/
      {
        (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)v11 + 12))(v11, &a2, 4, 0); /*0x722023*/
        DynamicVector::Add_Alt4((unsigned int *)(v2 + 196), &a2); /*0x72202d*/
        ++v3; /*0x722032*/
      }
      while ( v3 < a1 ); /*0x722037*/
      result = 0; /*0x722039*/
    }
    v13 = 0; /*0x722041*/
    if ( *(int *)(v2 + 212) > 0 ) /*0x722045*/
    {
      do /*0x722064*/
        ObjectPtr::RegisterForTracking((int)&g_abs_B0C110, (int *)(*(unsigned int *)(v2 + 200) + 4 * v13++)); /*0x722056*/
      while ( v13 < *(unsigned int *)(v2 + 212) ); /*0x722064*/
      result = 0; /*0x722066*/
    }
    *(unsigned int *)(v2 + 272) = 0; /*0x722068*/
    *(unsigned int *)(v2 + 276) = 0; /*0x72206e*/
    *(unsigned int *)(v2 + 280) = 0; /*0x722074*/
    *(unsigned int *)(v2 + 244) = 0; /*0x72207a*/
    *(unsigned int *)(v2 + 248) = 0; /*0x722080*/
    *(unsigned int *)(v2 + 252) = 0; /*0x722086*/
  }
  return result; /*0x72208c*/

}
}
// 0x721E40
namespace gamemd {
int TiberiumClass::ddtor(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x721e46*/
    return -2147467261; /*0x721e48*/
  *a2 = -985803917; /*0x721e56*/
  a2[1] = 298980638; /*0x721e5e*/
  a2[2] = 1610642817; /*0x721e67*/
  a2[3] = -1252326136; /*0x721e70*/
  return 0; /*0x721e4d*/

}
} // namespace gamemd

// 0x7220D0
namespace gamemd {
int TiberiumClass::SaveLoad_Prefix_0(TechnoTypeClass * aP0, int * a1, int aP2)
{

  int result; // eax
  int v4; // edx
  int i; // esi

  result = AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x7220e1*/
  if ( result >= 0 ) /*0x7220e8*/
  {
    v4 = *a1; /*0x7220f0*/
    aP2 = aP0->ChargerTurrets[6]; /*0x7220fd*/
    (*(void (**)(int *, int *, int, unsigned int))(v4 + 16))(a1, &aP2, 4, 0); /*0x722101*/
    for ( i = 0; i < aP2; ++i ) /*0x72210c*/
      (*(void (**)(int *, int, int, unsigned int))(*a1 + 16))(a1, aP0->ChargerTurrets[3] + 4 * i, 4, 0); /*0x72211f*/
    return 0; /*0x722129*/
  }
  return result; /*0x72212c*/

}
} // namespace gamemd

// 0x7236E0
namespace gamemd {
int TiberiumClass::StubReturn296()
{

  return 296; /*0x7236e5*/

}
} // namespace gamemd

// 0x7236F0
namespace gamemd {
int TiberiumClass::StubReturn46()
{

  return 46; /*0x7236f5*/

}
} // namespace gamemd
