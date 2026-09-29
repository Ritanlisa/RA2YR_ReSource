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

// 0x5A0160
namespace gamemd {
int TiberiumClass::Spread(int a1, int a2, int a3, int a4, int a5, int a6, char a7, char a8)
{
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
    v8 = (unsigned int *)(RA2_OPNEW(0x18u));
    v9 = v8; /*0x5a018e*/
    if ( v8 ) /*0x5a0195*/
    {
      VectorClass::CellConstructor(v8, 0, 0); /*0x5a019b*/
      *(void **)v9 = (void*)&DynamicVectorClass_Cell_vftable; /*0x5a01a0*/
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
          v14 = *v13 + *v12; /*0x5a0205*/
          IDA_LOWORD(v13) = v12[1] + v13[1]; /*0x5a020c*/
          IDA_LOWORD(v32) = v14; /*0x5a0210*/
          IDA_HIWORD(v32) = (unsigned short)v13; /*0x5a0215*/
          v30 = v32; /*0x5a021e*/
          v15 = (int16_t)v13; /*0x5a0225*/
          v16 = (int16_t)v13 + v14; /*0x5a0228*/
          if ( v16 > dword_ABED04 /*0x5a0285*/
            && v14 - v15 < dword_ABED04
            && v15 - v14 < dword_ABED04
            && v16 <= dword_ABED08
            && v14 >= a3
            && v14 < a3 + a5
            && v15 >= a4
            && v15 < a6 + a4 )
          {
            v17 = (char *)dword_ABED10 + 80 * v14 + 80 * g_MapCellWidth * v15; /*0x5a02a4*/
            v18 = *((unsigned int *)v17 + 14); /*0x5a02a8*/
            v19 = a7 && v18 == a1 - 1; /*0x5a02b6*/
            v20 = (int *)CellCoord::To_CellObj(&dword_87F7E8, (int16_t *)&v30); /*0x5a02c6*/
            v21 = v20; /*0x5a02cd*/
            if ( (!v18 || v19) && (Cell::IsEmpty(v20) || v19 && Cell::IsGroundTypeRange(v21)) ) /*0x5a02e6*/
            {
              v22 = v29[2]; /*0x5a02ff*/
              if ( v29[4] < v22 /*0x5a0324*/
                || (*((unsigned char *)v29 + 13) || !v22)
                && (v23 = v29[5], v23 > 0)
                && (*(uint8_t (__thiscall **)(unsigned int *, int, unsigned int))(*v29 + 8))(v29, v22 + v23, 0) )
              {
                v24 = v29[4]; /*0x5a032b*/
                v25 = v29[1]; /*0x5a032e*/
                v29[4] = v24 + 1; /*0x5a0334*/
                *(unsigned int *)(v25 + 4 * v24) = v30; /*0x5a033b*/
              }
              *((unsigned int *)v17 + 14) = a1; /*0x5a0348*/
              if ( a7 && Cell::IsEmpty(v21) ) /*0x5a034f*/
                *((unsigned char *)CellCoord::To_CellObj(&dword_87F7E8, (int16_t *)&v30) + 283) = a8; /*0x5a036b*/
            }
            else if ( v18 != a1 ) /*0x5a02f3*/
            {
              if ( v28 ) /*0x5a03e4*/
                (*(void (__thiscall **)(unsigned int *, int))*v28)(v28, 1); /*0x5a03ea*/
              if ( v29 ) /*0x5a03f2*/
                (*(void (__thiscall **)(unsigned int *, int))*v29)(v29, 1); /*0x5a03f8*/
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
      (*(void (__thiscall **)(unsigned int *, int))*v10)(v10, 1); /*0x5a03a5*/
    v28 = v29; /*0x5a03af*/
  }
  if ( v28 ) /*0x5a03ca*/
    (*(void (__thiscall **)(unsigned int *, int))*v28)(v28, 1); /*0x5a03d0*/
  return 1; /*0x5a03d2*/
}
}
// 0x7216C0
namespace gamemd {
TiberiumClass::TiberiumClass(ObjectClass * aP1)
{
  int v3; // edx
  int v4; // eax
  int v5; // eax

  AbstractTypeClass::Constructor(aP1); /*0x7216ca*/
  this->?[1] = -1717986918; /*0x7216dc*/
  this->Spread = -1717986918; /*0x7216e7*/
  *(unsigned int *)&this->? = -1; /*0x7216f1*/
  this->?[0] = 0; /*0x7216fb*/
  this->?[2] = 1069128089; /*0x721701*/
  this->? = 0; /*0x721707*/
  this->SpreadPercentage[0] = 1069128089; /*0x72170d*/
  this->SpreadPercentage[1] = 0; /*0x721713*/
  this->Growth = 0; /*0x721719*/
  this->GrowthPercentage[0] = 0; /*0x72171f*/
  AnimTypeVector::Constructor((AnimTypeVector *)&this->GrowthPercentage[1], 0, 0); /*0x721725*/
  this->Image = (OverlayTypeClass *)10; /*0x72172a*/
  this->Debris[0] = 0; /*0x721731*/
  this->GrowthPercentage[1] = (int)&TypeList_AnimTypeClass_const___vftable; /*0x721734*/
  this->NumImages = 0; /*0x72173a*/
  *(unsigned int *)this->__pad_E4 = 0; /*0x721740*/
  *(unsigned int *)&this->__pad_E4[4] = 0; /*0x721746*/
  this->TiberiumClass_field_EC = 0; /*0x72174c*/
  this->TiberiumClass_field_F0 = 0; /*0x721752*/
  this->TiberiumClass_field_F4 = 0; /*0x721758*/
  this->TiberiumClass_field_F8 = 0; /*0x72175e*/
  this->TiberiumClass_field_FC = 0; /*0x721764*/
  this->SpreadTimer[0] = *(unsigned int *)&stru_A8EB00.?[416]; /*0x721770*/
  this->SpreadTimer[2] = 0; /*0x721776*/
  this->TiberiumClass_field_10C = 0; /*0x72177c*/
  this->TiberiumClass_field_110 = 0; /*0x721782*/
  this->TiberiumClass_field_114 = 0; /*0x721788*/
  this->TiberiumClass_field_118 = 0; /*0x72178e*/
  v3 = *(unsigned int *)&stru_A8EB00.?[416]; /*0x721794*/
  this->GrowthTimer[2] = 0; /*0x72179a*/
  this->GrowthTimer[0] = v3; /*0x7217a0*/
  this->ObjectClass = (void*)&TiberiumClass_vftable; /*0x7217a6*/
  this->? = (void*)&TiberiumClass_vftable; /*0x7217ac*/
  this->? = (void*)&TiberiumClass_vftable; /*0x7217b3*/
  this->? = (void*)&TiberiumClass_vftable; /*0x7217ba*/
  *(unsigned int *)&this->? = g_BuildingLoadQueue_Array.?[0]; /*0x7217c6*/
  if ( g_BuildingLoadQueue_Array.?[0] < g_BuildingLoadQueue_Array.?[3] /*0x7217fe*/
    || (g_BuildingLoadQueue_Array.?[0] || !g_BuildingLoadQueue_Array.?[3])
    && g_BuildingLoadQueue_Array.?[1] > 0
    && (*(uint8_t (__thiscall **)(int *, int, unsigned int))(g_BuildingLoadQueue_Array.?[1] + 8))(
         &g_BuildingLoadQueue_Array.?[1],
         g_BuildingLoadQueue_Array.?[3] + g_BuildingLoadQueue_Array.?[1],
         0) )
  {
    v4 = g_BuildingLoadQueue_Array.?[0]++; /*0x72180b*/
    *(unsigned int *)(g_BuildingLoadQueue_Array.?[2] + 4 * v4) = this; /*0x72181a*/
  }
  (*(void (__thiscall **)(int *))(this->GrowthPercentage[1] + 12))(&this->GrowthPercentage[1]); /*0x721821*/
  if ( g_BuildingLoadQueue_Array.LightBlueTint < g_BuildingLoadQueue_Array.LightRedTint /*0x721857*/
    || (IDA_BYTE1(g_BuildingLoadQueue_Array.LightGreenTint) || !g_BuildingLoadQueue_Array.LightRedTint)
    && g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] > 0
    && (*(uint8_t (__thiscall **)(int *, int, unsigned int))(g_BuildingLoadQueue_Array.LightVisibility + 8))(
         &g_BuildingLoadQueue_Array.LightVisibility,
         g_BuildingLoadQueue_Array.LightRedTint + g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0],
         0) )
  {
    v5 = g_BuildingLoadQueue_Array.LightBlueTint++; /*0x721864*/
    *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v5) = this; /*0x721873*/
  }
  return &this->ObjectClass; /*0x721878*/
}
}
// 0x721A50
namespace gamemd {
int TiberiumClass::LoadFromINI(unsigned char *** aP1, void * a1, void * a2)
{
  int Int_Overwrite; // eax
  void * v5;
  int v6; // eax
  void * v7;
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  char *i; // eax
  int v12; // ecx
  int v13; // edx
  void *v14; // eax
  char result; // al
  double v16; // [esp-Ch] [ebp-D0h]
  double v17; // [esp-Ch] [ebp-D0h]
  int v18; // [esp-8h] [ebp-CCh]
  int v19; // [esp+8h] [ebp-BCh] BYREF
  unsigned int v20[3]; // [esp+Ch] [ebp-B8h] BYREF
  char v21; // [esp+19h] [ebp-ABh]
  int v22; // [esp+1Ch] [ebp-A8h]
  int v23; // [esp+20h] [ebp-A4h]
  int v24; // [esp+24h] [ebp-A0h]
  unsigned int v25[7]; // [esp+28h] [ebp-9Ch] BYREF
  char String[128]; // [esp+44h] [ebp-80h] BYREF

  INIClass::ResetSection(aP1); /*0x721a63*/
  if ( !AbstractTypeClass::LoadFromINI(a1, aP1) ) /*0x721a6b*/
    return 0; /*0x721cea*/
  Int_Overwrite = INIClass::ReadInt_Overwrite(a1 + 36, aSpread, *(unsigned int *)(a1 + 156)); /*0x721a8b*/
  v16 = *(double *)(a1 + 160); /*0x721a9d*/
  *(unsigned int *)(a1 + 156) = Int_Overwrite; /*0x721aa6*/
  INIClass::ReadDouble_Overwrite(a1 + 36, (int)aSpreadpercenta, v16); /*0x721aac*/
  v5 = *(unsigned int *)(a1 + 168); /*0x721ab1*/
  *(double *)(a1 + 160) = a2; /*0x721ab9*/
  v6 = INIClass::ReadInt_Overwrite(a1 + 36, aGrowth, v5); /*0x721ac6*/
  v17 = *(double *)(a1 + 176); /*0x721ad8*/
  *(unsigned int *)(a1 + 168) = v6; /*0x721ae1*/
  INIClass::ReadDouble_Overwrite(a1 + 36, (int)aGrowthpercenta, v17); /*0x721ae7*/
  v7 = *(unsigned int *)(a1 + 184); /*0x721aec*/
  *(double *)(a1 + 176) = a2; /*0x721af4*/
  v8 = INIClass::ReadInt_Overwrite(a1 + 36, aValue, v7); /*0x721b01*/
  v9 = *(unsigned int *)(a1 + 188); /*0x721b06*/
  *(unsigned int *)(a1 + 184) = v8; /*0x721b0c*/
  v10 = INIClass::ReadInt_Overwrite(a1 + 36, aPower_0, v9); /*0x721b1b*/
  v18 = *(unsigned int *)(a1 + 192); /*0x721b28*/
  *(unsigned int *)(a1 + 188) = v10; /*0x721b2f*/
  *(unsigned int *)(a1 + 192) = BuildingTypeClass::FindAnimByName( /*0x721b3a*/
                            aP1,
                            (uint8_t *)(a1 + 36),
                            (uint8_t *)g_INI_Key_Color,
                            v18);
  if ( INIClass::GetString( /*0x721b57*/
         aP1,
         (uint8_t *)(a1 + 36),
         (uint8_t *)aDebris,
         &g_INI_DefaultBuffer,
         String,
         128) )
  {
    DynamicVectorClass::AnimTypeConstructor(v25, 0, 0); /*0x721b6c*/
    for ( i = strtok(String, Delimiter); i; i = strtok(0, Delimiter) ) /*0x721b8d*/
    {
      if ( !*i ) /*0x721b8f*/
        break; /*0x721b92*/
      v19 = AnimTypeClass::FindOrCreate(i); /*0x721b9d*/
      if ( v19 ) /*0x721ba1*/
        DynamicVector::Add_Alt4(v25, &v19); /*0x721bac*/
    }
    TypeList::AnimTypeCopy(v20, v25); /*0x721bcd*/
    DynamicVectorClass::Destroy_Alt((int, unsigned int a1)v25); /*0x721bde*/
  }
  else
  {
    TypeList::AnimTypeCopy(v20, (unsigned int *, unsigned int a1)(a1 + 196)); /*0x721bf0*/
  }
  VectorClass::CopyDefault((unsigned int *)(a1 + 196), v20); /*0x721c03*/
  v12 = v23; /*0x721c0c*/
  v13 = v24; /*0x721c10*/
  *(unsigned int *)(a1 + 212) = v22; /*0x721c14*/
  v14 = (void *)v20[1]; /*0x721c17*/
  *(unsigned int *)(a1 + 216) = v12; /*0x721c1b*/
  *(unsigned int *)(a1 + 220) = v13; /*0x721c1e*/
  if ( v14 && v21 ) /*0x721c34*/
    RA2_OPDEL(v14); /*0x721c37*/
  switch ( INIClass::ReadInt_Overwrite(a1 + 36, g_INI_Key_Image, -1) ) /*0x721c55*/
  {
    case 0xFFFFFFFF: /*0x721c55*/
      goto LABEL_19;
    case 2: /*0x721c55*/
      *(unsigned int *)(a1 + 224) = *(unsigned int *)&g_BuildingTypeClass_Array->gap0[108]; /*0x721c69*/
      *(unsigned int *)(a1 + 228) = 12; /*0x721c6f*/
      *(unsigned int *)(a1 + 232) = 12; /*0x721c75*/
      return 1; /*0x721c85*/
    case 3: /*0x721c55*/
      *(unsigned int *)(a1 + 224) = *(unsigned int *)g_BuildingTypeClass_Array->?; /*0x721c94*/
      goto LABEL_18; /*0x721c9a*/
    case 4: /*0x721c55*/
      *(unsigned int *)(a1 + 224) = g_BuildingTypeClass_Array->?; /*0x721ca8*/
      goto LABEL_18; /*0x721cae*/
    default:
      *(unsigned int *)(a1 + 224) = *(unsigned int *)&g_BuildingTypeClass_Array->gap0[408]; /*0x721cbb*/
  LABEL_18:
      *(unsigned int *)(a1 + 236) = 8; /*0x721cc1*/
      *(unsigned int *)(a1 + 228) = 12; /*0x721cd0*/
      *(unsigned int *)(a1 + 232) = 12; /*0x721cd6*/
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
  TiberiumClass *v2; // esi
  int v3; // ebp
  unsigned int *TiberiumClass_field_F4; // eax
  int i; // ecx
  Scalar *v6; // ecx
  unsigned int *TiberiumClass_field_110; // eax
  int j; // ecx
  Scalar *v9; // ecx
  int v10; // eax
  int v11; // ebx
  int result; // eax
  int v13; // edi

  v2 = a1; /*0x721e83*/
  v3 = 0; /*0x721e87*/
  TiberiumClass_field_F4 = (unsigned int *)a1->TiberiumClass_field_F4; /*0x721e8a*/
  if ( TiberiumClass_field_F4 ) /*0x721e92*/
  {
    for ( i = 0; i <= *TiberiumClass_field_F4; *(unsigned int *)(TiberiumClass_field_F4[2] + 4 * i - 4) = 0 ) /*0x721e9a*/
      ++i; /*0x721e9f*/
    *TiberiumClass_field_F4 = 0; /*0x721eaa*/
    v6 = (Scalar *)v2->TiberiumClass_field_F4; /*0x721eac*/
    if ( v6 ) /*0x721eb4*/
      Scalar::Dtor(v6, 1); /*0x721eb8*/
    v2->TiberiumClass_field_F4 = 0; /*0x721ebd*/
  }
  if ( v2->TiberiumClass_field_FC ) /*0x721ec3*/
  {
    RA2_OPDEL((void *)v2->TiberiumClass_field_FC); /*0x721ece*/
    v2->TiberiumClass_field_FC = 0; /*0x721ed6*/
  }
  if ( v2->TiberiumClass_field_F8 ) /*0x721edc*/
  {
    RA2_OPDEL((void *)v2->TiberiumClass_field_F8); /*0x721ee7*/
    v2->TiberiumClass_field_F8 = 0; /*0x721eef*/
  }
  TiberiumClass_field_110 = (unsigned int *)v2->TiberiumClass_field_110; /*0x721ef5*/
  v2->TiberiumClass_field_F0 = 0; /*0x721efb*/
  if ( TiberiumClass_field_110 ) /*0x721f03*/
  {
    for ( j = 0; j <= *TiberiumClass_field_110; *(unsigned int *)(TiberiumClass_field_110[2] + 4 * j - 4) = 0 ) /*0x721f0b*/
      ++j; /*0x721f10*/
    *TiberiumClass_field_110 = 0; /*0x721f1b*/
    v9 = (Scalar *)v2->TiberiumClass_field_110; /*0x721f1d*/
    if ( v9 ) /*0x721f25*/
      Scalar::Dtor(v9, 1); /*0x721f29*/
    v2->TiberiumClass_field_110 = 0; /*0x721f2e*/
  }
  if ( v2->TiberiumClass_field_118 ) /*0x721f34*/
  {
    RA2_OPDEL((void *)v2->TiberiumClass_field_118); /*0x721f3f*/
    v2->TiberiumClass_field_118 = 0; /*0x721f47*/
  }
  if ( v2->TiberiumClass_field_114 ) /*0x721f4d*/
  {
    RA2_OPDEL((void *)v2->TiberiumClass_field_114); /*0x721f58*/
    v2->TiberiumClass_field_114 = 0; /*0x721f60*/
  }
  v10 = v2->GrowthPercentage[1]; /*0x721f66*/
  v2->TiberiumClass_field_10C = 0; /*0x721f74*/
  (*(void (__thiscall **)(int *))(v10 + 12))(&v2->GrowthPercentage[1]); /*0x721f7a*/
  v11 = a2; /*0x721f7d*/
  result = AbstractClass::SaveLoad_Prefix_0(v2, a2); /*0x721f83*/
  if ( result >= 0 ) /*0x721f8a*/
  {
    if ( v2 ) /*0x721f92*/
    {
      AbstractTypeClass::Init((int)v2, (int)&a1); /*0x721f9b*/
      DynamicVectorClass::AnimTypeConstructor((DynamicVectorClass *)&v2->GrowthPercentage[1], 0, 0); /*0x721fa4*/
      v2->GrowthPercentage[1] = (int)&TypeList_AnimTypeClass_const___vftable; /*0x721fb0*/
      Timer::Start((Timer *)v2->SpreadTimer, 0); /*0x721fb6*/
      Timer::Start((Timer *)v2->GrowthTimer, 0); /*0x721fc2*/
      v2->ObjectClass = (void*)&TiberiumClass_vftable; /*0x721fc7*/
      *(void **)&v2->vtable2 = (void*)&TiberiumClass_vftable; /*0x721fcd*/
      *(void **)&v2->vtable3 = (void*)&TiberiumClass_vftable; /*0x721fd4*/
      *(void **)&v2->vtable4 = (void*)&TiberiumClass_vftable; /*0x721fdb*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v2->NumImages); /*0x721fee*/
    if ( v2 != (TiberiumClass *)-196 ) /*0x721ff5*/
      AnimTypeList::Constructor((AnimTypeList *)&v2->GrowthPercentage[1]); /*0x721ff9*/
    (*(void (__stdcall **)(int, TiberiumClass **, int, unsigned int))(*(unsigned int *)v11 + 12))(v11, &a1, 4, 0); /*0x722009*/
    result = 0; /*0x72200c*/
    if ( (int)a1 > 0 ) /*0x722012*/
    {
      do /*0x722037*/
      {
        (*(void (__stdcall **)(int, int *, int, unsigned int))(*(unsigned int *)v11 + 12))(v11, &a2, 4, 0); /*0x722023*/
        DynamicVector::Add_Alt4((DynamicVector *)&v2->GrowthPercentage[1], &a2); /*0x72202d*/
        ++v3; /*0x722032*/
      }
      while ( v3 < (int)a1 ); /*0x722037*/
      result = 0; /*0x722039*/
    }
    v13 = 0; /*0x722041*/
    if ( v2->Debris[0] > 0 ) /*0x722045*/
    {
      do /*0x722064*/
        ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)(v2->Value + 4 * v13++)); /*0x722056*/
      while ( v13 < v2->Debris[0] ); /*0x722064*/
      result = 0; /*0x722066*/
    }
    v2->TiberiumClass_field_110 = 0; /*0x722068*/
    v2->TiberiumClass_field_114 = 0; /*0x72206e*/
    v2->TiberiumClass_field_118 = 0; /*0x722074*/
    v2->TiberiumClass_field_F4 = 0; /*0x72207a*/
    v2->TiberiumClass_field_F8 = 0; /*0x722080*/
    v2->TiberiumClass_field_FC = 0; /*0x722086*/
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
  a2[3] = unk_7E992C; /*0x721e70*/
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

  result = AbstractClass::SaveLoad_Prefix((int *)aP0, a1, aP2); /*0x7220e1*/
  if ( result >= 0 ) /*0x7220e8*/
  {
    v4 = *a1; /*0x7220f0*/
    aP2 = aP0->Debris[0]; /*0x7220fd*/
    (*(void (__stdcall **)(int *, int *, int, unsigned int))(v4 + 16))(a1, &aP2, 4, 0); /*0x722101*/
    for ( i = 0; i < aP2; ++i ) /*0x72210c*/
      (*(void (__stdcall **)(int *, int, int, unsigned int))(*a1 + 16))(a1, aP0->Value + 4 * i, 4, 0); /*0x72211f*/
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
