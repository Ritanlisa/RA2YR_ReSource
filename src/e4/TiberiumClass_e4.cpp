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
#include "e4/classes/AnimTypeVector_e4.hpp"
#include "e4/classes/AnimTypeClass_e4.hpp"
#include "e4/classes/ObjectPtr_e4.hpp"
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers
#include "e4/classes/TypeList_e4.hpp"  // G57w10 D supply (bare TypeList carrier)
#include "e4/classes/Scalar_e4.hpp"  // G57w10 D supply

// 0x5A0160
namespace gamemd {  // G42.18 ns repair
int TiberiumClass::Spread(int a1, int a2, int a3, int a4, int a5, int a6, char a7, char a8)
{

  unsigned int *v8; // eax
  unsigned int *v9; // esi
  unsigned int *v10; // ecx
  char v11; // dl
  unsigned short *v12; // eax
  unsigned short *v13; // edx
  __int16 v14; // cx
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
      /* X11: vtable install elided (X67 star-deref, RHS g_ptr_7E3890) */  /*0x5a01a0*/
      v9->u32_14 = 10; /*0x5a01a6*/
      v9->q010 = 0; /*0x5a01ad*/
      v29 = v9; /*0x5a01b0*/
    }
    else
    {
      v29 = 0; /*0x5a01b6*/
    }
    v10 = v28; /*0x5a01ba*/
    v31 = 0; /*0x5a01be*/
    v29->u32_14 = 3 * v28[4]; /*0x5a01cc*/
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
          LOWORD(v13) = v12[1] + v13[1]; /*0x5a020c*/
          (v32) = ((v32) & ~0xFFFF) | ((v14) & 0xFFFF); /*0x5a0210*/
          (v32) = ((v32) & ~(0xFFFF << 16)) | ((((unsigned short)v13) & 0xFFFF) << 16); /*0x5a0215*/
          v30 = v32; /*0x5a021e*/
          v15 = (__int16)v13; /*0x5a0225*/
          v16 = (__int16)v13 + v14; /*0x5a0228*/
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
            v20 = (int *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v30); /*0x5a02c6*/
            v21 = v20; /*0x5a02cd*/
            if ( (!v18 || v19) && (Cell::IsEmpty(v20) || v19 && Cell::IsGroundTypeRange(v21)) ) /*0x5a02e6*/
            {
              v22 = v29->Capacity; /*0x5a02ff*/
              if ( v29->q010 < v22 /*0x5a0324*/
                || (*(&v29->IsAllocated) || !v22)
                && (v23 = v29->u32_14, v23 > 0)
                && v29->Release(v22 + v23, 0) )
              {
                v24 = v29->q010; /*0x5a032b*/
                v25 = v29->Items; /*0x5a032e*/
                v29->q010 = v24 + 1; /*0x5a0334*/
                *(unsigned int *)(v25 + 4 * v24) = v30; /*0x5a033b*/
              }
              *((unsigned int *)v17 + 14) = a1; /*0x5a0348*/
              if ( a7 && Cell::IsEmpty(v21) ) /*0x5a034f*/
                *((unsigned char *)CellCoord::To_CellObj(&dword_87F7E8, (__int16 *)&v30) + 283) = a8; /*0x5a036b*/
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
        v26 = v28->q010; /*0x5a038c*/
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
}  // G42.18 ns repair
// 0x7216C0
namespace gamemd {
TiberiumClass::TiberiumClass(ObjectClass * aP1)
{


  AbstractTypeClass::Constructor((int *)this, aP1); /*0x7216ca*/
  this->u32_A0 = -1717986918; /*0x7216dc*/
  this->Spread = -1717986918; /*0x7216e7*/
  *&this->isInLogic = (void *)(-1); /*0x7216f1*/
  this->Spread = 0; /*0x7216fb*/
  this->q0A4 = 1069128089; /*0x721701*/
  this->Growth_d = 0; /*0x721707*/
  this->SpreadPercentage[0] = 1069128089; /*0x72170d*/
  this->SpreadPercentage[1] = 0; /*0x721713*/
  this->Growth = 0; /*0x721719*/
  this->GrowthPercentage[0] = 0; /*0x72171f*/
  AnimTypeVector::Constructor(&this->Power_d, 0, 0); /*0x721725*/
  this->Image = (OverlayTypeClass *)10; /*0x72172a*/
  this->Debris[0] = 0; /*0x721731*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_var_131447) */  /*0x721734*/
  this->NumImages = 0; /*0x72173a*/
  *(unsigned int *)this->Tactical_E4 = 0; /*0x721740*/
  *&this->q0E8 = 0; /*0x721746*/
  this->TiberiumClass_field_EC = 0; /*0x72174c*/
  this->TiberiumClass_field_F0 = 0; /*0x721752*/
  this->TiberiumClass_field_F4 = 0; /*0x721758*/
  this->TiberiumClass_field_F8 = 0; /*0x72175e*/
  this->TiberiumClass_field_FC = 0; /*0x721764*/
  this->SpreadTimer[0] = *(unsigned int *)&DataGlobal_A8EB00[644]; /*0x721770*/
  this->SpreadTimer[2] = 0; /*0x721776*/
  this->TiberiumClass_field_10C = 0; /*0x72177c*/
  this->TiberiumClass_field_110 = 0; /*0x721782*/
  this->TiberiumClass_field_114 = 0; /*0x721788*/
  this->TiberiumClass_field_118 = 0; /*0x72178e*/
  int v3; // edx
  v3 = *(unsigned int *)&DataGlobal_A8EB00[644]; /*0x721794*/
  this->GrowthTimer[2] = 0; /*0x72179a*/
  this->GrowthTimer[0] = v3; /*0x7217a0*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_ptr_7F56FC) */  /*0x7217a6*/
  /* X11: vtable install elided (implicit via TiberiumClass virtuals 0x7217ac) */
  /* X11: vtable install elided (implicit via TiberiumClass virtuals 0x7217b3) */
  /* X11: vtable install elided (implicit via TiberiumClass virtuals 0x7217ba) */
  *&this->isInLogic = g_BuildingLoadQueue_Array.?[0]; /*0x7217c6*/
  if ( g_BuildingLoadQueue_Array.?[0] < g_BuildingLoadQueue_Array.?[3] /*0x7217fe*/
    || (g_BuildingLoadQueue_Array || !g_BuildingLoadQueue_Array.?[3])
    && g_BuildingLoadQueue_Array.?[1] > 0
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(g_BuildingLoadQueue_Array.?[1] + 8))(
         &g_BuildingLoadQueue_Array.?[1],
         g_BuildingLoadQueue_Array.?[3] + g_BuildingLoadQueue_Array.?[1],
         0) )
  {
    int v4; // eax
    v4 = g_BuildingLoadQueue_Array.?[0]++; /*0x72180b*/
    *(unsigned int *)(g_BuildingLoadQueue_Array.?[2] + 4 * v4) = this; /*0x72181a*/
  }
  (*(void (**)(int *))(this->GrowthPercentage[1] + 12))(&this->GrowthPercentage[1]); /*0x721821*/
  if ( g_BuildingLoadQueue_Array.LightBlueTint < g_BuildingLoadQueue_Array.LightRedTint /*0x721857*/
    || (BYTE1(g_BuildingLoadQueue_Array.LightGreenTint) || !g_BuildingLoadQueue_Array.LightRedTint)
    && g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0] > 0
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(g_BuildingLoadQueue_Array.LightVisibility + 8))(
         &g_BuildingLoadQueue_Array.LightVisibility,
         g_BuildingLoadQueue_Array.LightRedTint + g_BuildingLoadQueue_Array.PrimaryFirePixelOffset[0],
         0) )
  {
    int v5; // eax
    v5 = g_BuildingLoadQueue_Array.LightBlueTint++; /*0x721864*/
    *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v5) = this; /*0x721873*/
  }
  return &this->ObjectClass; /*0x721878*/

}
}
// 0x721A50
namespace gamemd {
char TiberiumClass::LoadFromINI(uint8_t *** aP1, void *a2)
{

  int v4; // ecx
  int v5; // esi
  int Int_Overwrite; // eax
  int v7; // eax
  int v9; // eax
  int v10; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  char *i; // eax
  int CapacityIncrement; // ecx
  int unknown_18; // edx
  void *Items; // eax
  char result; // al
  double v20; // [esp-Ch] [ebp-D0h]
  double v21; // [esp-Ch] [ebp-D0h]
  int v22; // [esp-8h] [ebp-CCh]
  unsigned int *v23; // [esp+8h] [ebp-BCh] BYREF
  TypeList v24; // [esp+Ch] [ebp-B8h] BYREF
  DynamicVector v25; // [esp+28h] [ebp-9Ch] BYREF

  v5 = v4; /*0x721a5f*/
  INIClass::ResetSection((INIClass *)this); /*0x721a63*/
  if ( !(unsigned __int8)AbstractTypeClass::LoadFromINI((AbstractTypeClass *)v5, (unsigned __int8 ***)this) ) /*0x721a6b*/
    return 0; /*0x721cea*/
  Int_Overwrite = INIClass::ReadInt_Overwrite( /*0x721a8b*/
                    (bool *)this,
                    (unsigned __int8 *)(v5 + 36),
                    aSpread,
                    v5->Spread);
  v20 = v5->u32_A0; /*0x721a9d*/
  v5->Spread = Int_Overwrite; /*0x721aa6*/
  INIClass::ReadDouble_Overwrite(&this->ptr_0, (unsigned __int8 *)(v5 + 36), aSpreadpercenta, v20); /*0x721aac*/
  v7 = v5->Growth_d; /*0x721ab1*/
  __asm { fstp qword ptr [esi+0A0h] } /*0x721ab9*/
  v5->u32_A0 = _RT1; /*0x721ab9*/
  v9 = INIClass::ReadInt_Overwrite((bool *)this, (unsigned __int8 *)(v5 + 36), aGrowth, v7); /*0x721ac6*/
  v21 = v5->Spread_d; /*0x721ad8*/
  v5->Growth_d = v9; /*0x721ae1*/
  INIClass::ReadDouble_Overwrite(&this->ptr_0, (unsigned __int8 *)(v5 + 36), aGrowthpercenta, v21); /*0x721ae7*/
  v10 = v5->GrowthPercentage; /*0x721aec*/
  __asm { fstp qword ptr [esi+0B0h] } /*0x721af4*/
  v5->Spread_d = _RT1; /*0x721af4*/
  v12 = INIClass::ReadInt_Overwrite((bool *)this, (unsigned __int8 *)(v5 + 36), aValue, v10); /*0x721b01*/
  v13 = v5->Power_d; /*0x721b06*/
  v5->GrowthPercentage = v12; /*0x721b0c*/
  v14 = INIClass::ReadInt_Overwrite((bool *)this, (unsigned __int8 *)(v5 + 36), aPower_0, v13); /*0x721b1b*/
  v22 = v5->GrowthPercentage_d; /*0x721b28*/
  v5->Power_d = v14; /*0x721b2f*/
  v5->GrowthPercentage_d = BuildingTypeClass::FindAnimByName( /*0x721b3a*/
                            (BuildingTypeClass *)this,
                            (unsigned __int8 *)(v5 + 36),
                            (unsigned __int8 *)aColor,
                            v22);
  if ( INIClass::GetString( /*0x721b57*/
         (INIClass *)this,
         (unsigned __int8 *)(v5 + 36),
         aDebris,
         &g_INI_DefaultBuffer,
         (char *)&v25.DynamicVector_field_0x1C,
         128) )
  {
    DynamicVectorClass::AnimTypeConstructor((DynamicVectorClass *)&v25, 0, 0); /*0x721b6c*/
    /* X11: vtable install elided (X67 star-deref, RHS g_ptr_7EB6D4) */  /*0x721b7b*/
    for ( i = strtok((char *)&v25.DynamicVector_field_0x1C, Delimiter); i; i = strtok(0, Delimiter) ) /*0x721b8d*/
    {
      if ( !*i ) /*0x721b8f*/
        break; /*0x721b92*/
      v23 = AnimTypeClass::FindOrCreate(i); /*0x721b9d*/
      if ( v23 ) /*0x721ba1*/
        DynamicVector::Add_Alt4(&v25, &v23); /*0x721bac*/
    }
    TypeList::AnimTypeCopy(&v24, &v25); /*0x721bcd*/
    /* X11: vtable install elided (X67 star-deref, RHS g_ptr_7EB6F4) */  /*0x721bd6*/
    DynamicVectorClass::Destroy_Alt((_VectorClass_PBVAnimTypeClass *)&v25); /*0x721bde*/
  }
  else
  {
    TypeList::AnimTypeCopy(&v24, &v5->u32_C4); /*0x721bf0*/
  }
  VectorClass::CopyDefault(&v5->u32_C4, &v24); /*0x721c03*/
  CapacityIncrement = v24.CapacityIncrement; /*0x721c0c*/
  unknown_18 = v24.unknown_18; /*0x721c10*/
  *(unsigned int *)(v5 + 212) = v24.Count; /*0x721c14*/
  Items = (void *)v24.Items; /*0x721c17*/
  *(unsigned int *)(v5 + 216) = CapacityIncrement; /*0x721c1b*/
  *(unsigned int *)(v5 + 220) = unknown_18; /*0x721c1e*/
  /* X11: vtable install elided (X67 recv-slot, RHS g_ptr_7EB6F4) */  /*0x721c21*/
  if ( Items && v24.IsAllocated[0] ) /*0x721c34*/
    __3_YAXPAX_Z(Items); /*0x721c37*/
  switch ( INIClass::ReadInt_Overwrite( /*0x721c55*/
             (bool *)this,
             (unsigned __int8 *)(v5 + 36),
             (unsigned __int8 *)g_INI_Key_Image,
             -1) )
  {
    case -1: /*0x721c55*/
      goto LABEL_19;
    case 2: /*0x721c55*/
      v5->Image_d = *(unsigned int *)(*(int *)((char *)&stru_A83CD9.lineTrailer + 3) + 108); /*0x721c69*/
      v5->Tactical_E4 = 12; /*0x721c6f*/
      v5->u32_E8 = 12; /*0x721c75*/
      return 1; /*0x721c85*/
    case 3: /*0x721c55*/
      v5->Image_d = *(unsigned int *)(*(int *)((char *)&stru_A83CD9.lineTrailer + 3) + 508); /*0x721c94*/
      goto LABEL_18; /*0x721c9a*/
    case 4: /*0x721c55*/
      v5->Image_d = *(unsigned int *)(*(int *)((char *)&stru_A83CD9.lineTrailer + 3) + 588); /*0x721ca8*/
      goto LABEL_18; /*0x721cae*/
    default:
      v5->Image_d = *(unsigned int *)(*(int *)((char *)&stru_A83CD9.lineTrailer + 3) + 408); /*0x721cbb*/
LABEL_18:
      *(unsigned int *)(v5 + 236) = 8; /*0x721cc1*/
      v5->Tactical_E4 = 12; /*0x721cd0*/
      v5->u32_E8 = 12; /*0x721cd6*/
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
  v2 = (gamemd::TiberiumClass *)(a1); /*0x721e83*/
  int v3 = 0; // ebp /*0x721e87*/
  unsigned int *TiberiumClass_field_F4; // eax
  TiberiumClass_field_F4 = (unsigned int *)a1->TiberiumClass_field_F4; /*0x721e8a*/
  if ( TiberiumClass_field_F4 ) /*0x721e92*/
  {
    int i; // ecx
    for ( i = 0; i <= *TiberiumClass_field_F4; *(unsigned int *)(TiberiumClass_field_F4[2] + 4 * i - 4) = 0 ) /*0x721e9a*/
      ++i; /*0x721e9f*/
    *TiberiumClass_field_F4 = 0; /*0x721eaa*/
    Scalar *v6; // ecx
    v6 = (Scalar *)v2->TiberiumClass_field_F4; /*0x721eac*/
    if ( v6 ) /*0x721eb4*/
      Scalar::Dtor(v6, 1); /*0x721eb8*/
    v2->TiberiumClass_field_F4 = 0; /*0x721ebd*/
  }
  if ( v2->TiberiumClass_field_FC ) /*0x721ec3*/
  {
    __3_YAXPAX_Z((void *)v2->TiberiumClass_field_FC); /*0x721ece*/
    v2->TiberiumClass_field_FC = 0; /*0x721ed6*/
  }
  if ( v2->TiberiumClass_field_F8 ) /*0x721edc*/
  {
    __3_YAXPAX_Z((void *)v2->TiberiumClass_field_F8); /*0x721ee7*/
    v2->TiberiumClass_field_F8 = 0; /*0x721eef*/
  }
  unsigned int *TiberiumClass_field_110; // eax
  TiberiumClass_field_110 = (unsigned int *)v2->TiberiumClass_field_110; /*0x721ef5*/
  v2->TiberiumClass_field_F0 = 0; /*0x721efb*/
  if ( TiberiumClass_field_110 ) /*0x721f03*/
  {
    int j; // ecx
    for ( j = 0; j <= *TiberiumClass_field_110; *(unsigned int *)(TiberiumClass_field_110[2] + 4 * j - 4) = 0 ) /*0x721f0b*/
      ++j; /*0x721f10*/
    *TiberiumClass_field_110 = 0; /*0x721f1b*/
    Scalar *v9; // ecx
    v9 = (Scalar *)v2->TiberiumClass_field_110; /*0x721f1d*/
    if ( v9 ) /*0x721f25*/
      Scalar::Dtor(v9, 1); /*0x721f29*/
    v2->TiberiumClass_field_110 = 0; /*0x721f2e*/
  }
  if ( v2->TiberiumClass_field_118 ) /*0x721f34*/
  {
    __3_YAXPAX_Z(v2->TiberiumClass_field_118); /*0x721f3f*/
    v2->TiberiumClass_field_118 = 0; /*0x721f47*/
  }
  if ( v2->TiberiumClass_field_114 ) /*0x721f4d*/
  {
    __3_YAXPAX_Z((void *)v2->TiberiumClass_field_114); /*0x721f58*/
    v2->TiberiumClass_field_114 = 0; /*0x721f60*/
  }
  int v10; // eax
  v10 = v2->GrowthPercentage[1]; /*0x721f66*/
  v2->TiberiumClass_field_10C = 0; /*0x721f74*/
  (*(void (**)(int *))(v10 + 12))(&v2->GrowthPercentage[1]); /*0x721f7a*/
  int v11 = a2; // ebx /*0x721f7d*/
  int result; // eax
  result = AbstractClass::SaveLoad_Prefix_0(v2, a2); /*0x721f83*/
  if ( result >= 0 ) /*0x721f8a*/
  {
    if ( v2 ) /*0x721f92*/
    {
      AbstractTypeClass::Init((int)v2, (int)&a1); /*0x721f9b*/
      (&v2->u32_E8)->AnimTypeConstructor(0, 0); /*0x721fa4*/
      /* X11: vtable install elided (X67 recv-slot, RHS g_var_131447) */  /*0x721fb0*/
      Timer::Start((Timer *)v2->SpreadTimer, 0); /*0x721fb6*/
      Timer::Start((Timer *)v2->GrowthTimer, 0); /*0x721fc2*/
      /* X11: vtable install elided (X67 recv-slot, RHS g_ptr_7F56FC) */  /*0x721fc7*/
      /* X11: vtable install elided (implicit via TiberiumClass virtuals 0x721fcd) */
      /* X11: vtable install elided (implicit via TiberiumClass virtuals 0x721fd4) */
      /* X11: vtable install elided (implicit via TiberiumClass virtuals 0x721fdb) */
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &v2->NumImages); /*0x721fee*/
    if ( v2 != (TiberiumClass *)-196 ) /*0x721ff5*/
      AnimTypeList::Constructor(&v2->u32_C4); /*0x721ff9*/
    (*(void (**)(int, TiberiumClass **, int, unsigned int))(*(unsigned int *)v11 + 12))(v11, &a1, 4, 0); /*0x722009*/
    result = 0; /*0x72200c*/
    if ( (int)a1 > 0 ) /*0x722012*/
    {
      do /*0x722037*/
      {
        (*(void (**)(int, int *, int, unsigned int))(*(unsigned int *)v11 + 12))(v11, &a2, 4, 0); /*0x722023*/
        DynamicVector::Add_Alt4((DynamicVector *)&v2->GrowthPercentage[1], &a2); /*0x72202d*/
        ++v3; /*0x722032*/
      }
      while ( v3 < (int)a1 ); /*0x722037*/
      result = 0; /*0x722039*/
    }
    int v13 = 0; // edi /*0x722041*/
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
  result = AbstractClass::SaveLoad_Prefix((int *)aP0, a1, aP2); /*0x7220e1*/
  if ( result >= 0 ) /*0x7220e8*/
  {
    int v4 = *a1; // edx /*0x7220f0*/
    aP2 = aP0->Debris[0]; /*0x7220fd*/
    (*(void (**)(int *, int *, int, unsigned int))(v4 + 16))(a1, &aP2, 4, 0); /*0x722101*/
    int i; // esi
    for ( i = 0; i < aP2; ++i ) /*0x72210c*/
      (*(void (**)(int *, int, int, unsigned int))(*a1 + 16))(a1, aP0->Value + 4 * i, 4, 0); /*0x72211f*/
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
