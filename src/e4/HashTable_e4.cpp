// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/HashTable_flat_e4.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/Compare_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/Buffer_e4.hpp"
#include "e4/classes/TacticalClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/HouseTypeClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/AnimTypeClass_e4.hpp"
#include "e4/classes/SkirmishDialog_e4.hpp"
#include "e4/classes/TeamTypeClass_e4.hpp"
#include "e4/classes/SortedArray_e4.hpp"
#include "e4/classes/InfantryTypeClass_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/CommandClass_e4.hpp"
#include "e4/classes/DeleteAndZero_e4.hpp"

// 0x624760
namespace gamemd {
int HashTable_flat::Get(IUnknown * aP1, IUnknown * aP2)
{

  int result; // eax

  result = this->HashTable_field_0x04; /*0x624764*/
  if ( result ) /*0x624769*/
  {
    result = *(unsigned int *)((unsigned int *)*(unsigned int *)this->__pad_0 /*0x62478a*/
                       + 4
                       * (((int (__thiscall *)(unsigned int *))this->HashTable_field_0x18)(aP1)
                        & ((1 << this->HashTable_field_0x0C) - 1)));
    if ( result ) /*0x62478f*/
    {
      while ( *(unsigned int *)result != *(unsigned int *)aP1 ) /*0x62479c*/
      {
        result = *(unsigned int *)(result + 516); /*0x62479e*/
        if ( !result ) /*0x6247a6*/
        {
          LOBYTE(result) = 0; /*0x6247a9*/
          return result; /*0x6247ac*/
        }
      }
      result += 4; /*0x6247be*/
      *(unsigned int *)aP2 = result; /*0x6247c3*/
      LOBYTE(result) = 1; /*0x6247c5*/
    }
    else
    {
      LOBYTE(result) = 0; /*0x624792*/
    }
  }
  else
  {
    LOBYTE(result) = 0; /*0x62476c*/
  }
  return result; /*0x62476b*/

}
} // namespace gamemd
// 0x624FC0
namespace gamemd {
AbstractClass * * HashTable_flat::Grow2()
{

  int HashTable_field_0x08; // esi
  unsigned int *v3; // ebp
  int v4; // edi
  void *v5; // edi
  unsigned int v6; // edx
  int *v7; // edi
  int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  unsigned int v13;

  if ( LOBYTE(this->HashTable_field_0x14) != 1 ) /*0x624fc8*/
  {
    HashTable_field_0x08 = (unsigned int)(this->HashTable_field_0x08);
    v3 =(unsigned int *)(unsigned int)(*(unsigned int **)this->__pad_0); /*0x624fd3*/
    v4 = this->HashTable_field_0x0C + 1; /*0x624fdc*/
    this->HashTable_field_0x08 = 2 * HashTable_field_0x08; /*0x624fdd*/
    v13 =(unsigned int)v3; /*0x624fe0*/
    this->HashTable_field_0x0C = v4; /*0x624fe8*/
    v5 = (void *)__2_YAPAXI_Z(8 * HashTable_field_0x08); /*0x624ff3*/
    v6 = 4 * this->HashTable_field_0x08; /*0x624ff8*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(v5); /*0x624fff*/
    memset( (void *)(v5), 0, v6); /*0x625004*/
    if ( HashTable_field_0x08 > 0 ) /*0x62500f*/
    {
      v7 = (int *)(v3);
      v8 = HashTable_field_0x08; /*0x625013*/
      do /*0x62504d*/
      {
        v9 = *v7; /*0x625015*/
        if ( *v7 ) /*0x625015*/
        {
          do /*0x625047*/
          {
            v10 = ((int (*)(int))this->HashTable_field_0x18)(v9) & ((1 << this->HashTable_field_0x0C) - 1); /*0x62502b*/
            v11 = *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v10); /*0x62502f*/
            *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v10) = v9; /*0x625035*/
            v12 = *(unsigned int *)(v9 + 516); /*0x625037*/
            *(unsigned int *)(v9 + 516) = v11; /*0x62503d*/
            v9 = v12; /*0x625043*/
          }
          while ( v12 ); /*0x625047*/
        }
        ++v7; /*0x625049*/
        --v8; /*0x62504c*/
      }
      while ( v8 ); /*0x62504d*/
      v3 =(unsigned int *)v13; /*0x62504f*/
    }
    __3_YAXPAX_Z(v3); /*0x625054*/
  }

}
} // namespace gamemd
// 0x625090
namespace gamemd {
AbstractClass * * HashTable_flat::RemoveAndResize(unsigned int * a2, unsigned char * a3)
{

  int HashTable_field_0x04; // eax
  int v7; // edi
  unsigned char *v8; // ecx
  int v9; // edx
  int v10; // ebp
  bool v11; // c0
  bool v12; // c3
  unsigned int HashTable_field_0x08; // ebp
  int *v14; // ebx
  int v15; // ecx
  void *v16; // edi
  unsigned int v17; // edx
  int v18; // edi
  int v19; // edx
  int v20; // ecx
  int v21; // eax
  unsigned char *v22; // eax
  unsigned int v23; // ebp
  int HashTable_field_0x0C; // edi
  int *v25; // ebx
  void *v26; // edi
  unsigned int v27; // edx
  int v28; // edi
  int v29; // edx
  int v30; // ecx
  int v31; // eax
  unsigned int *v32; // [esp-4h] [ebp-1Ch]
  float v33; // [esp+10h] [ebp-8h]
  char v34; // [esp+1Ch] [ebp+4h]
  int *v35; // [esp+20h] [ebp+8h]
  int *v36; // [esp+20h] [ebp+8h]

  HashTable_field_0x04 = this->HashTable_field_0x04; /*0x62509b*/
  if ( !HashTable_field_0x04 ) /*0x6250a0*/
    return 0; /*0x6250a5*/
  v33 = (double)(unsigned int)(HashTable_field_0x04 - 1) / (double)this->HashTable_field_0x08; /*0x6250d0*/
  v7 = ((int (*)(unsigned int *))this->HashTable_field_0x18)(a2) & ((1 << this->HashTable_field_0x0C) - 1); /*0x6250e4*/
  v8 = *(unsigned char **)(*(unsigned int *)this->__pad_0 + 4 * v7); /*0x6250e6*/
  if ( !v8 ) /*0x6250eb*/
    return 0; /*0x6250f0*/
  v9 = a2[1]; /*0x6250f9*/
  if ( v9 == *((unsigned int *)v8 + 1) && *a2 == *(unsigned int *)v8 ) /*0x62510e*/
  {
    *a3 = v8[8]; /*0x62511b*/
    v32 = *(unsigned int **)(*(unsigned int *)this->__pad_0 + 4 * v7); /*0x625122*/
    v10 = v32[3]; /*0x625123*/
    __3_YAXPAX_Z(v32); /*0x625126*/
    *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v7) = v10; /*0x625134*/
    v11 = v33 < *(double *)&this->HashTable_field_0x20; /*0x62513a*/
    v12 = v33 == *(double *)&this->HashTable_field_0x20; /*0x62513a*/
    --this->HashTable_field_0x04; /*0x62513e*/
    if ( v11 || v12 ) /*0x625143*/
    {
      HashTable_field_0x08 = this->HashTable_field_0x08; /*0x62514c*/
      if ( HashTable_field_0x08 > this->HashTable_field_0x30 && LOBYTE(this->HashTable_field_0x14) != 1 ) /*0x62515e*/
      {
        v14 = (int *)((*(int **)this->__pad_0));
        v35 = (int *)((*(int **)this->__pad_0));
        v15 = (unsigned int)(this->HashTable_field_0x0C - 1);
        this->HashTable_field_0x08 = (unsigned int)(HashTable_field_0x08 >> 1);
        this->HashTable_field_0x0C = (unsigned int)(v15);
        v16 = (void *)__2_YAPAXI_Z(4 * (HashTable_field_0x08 >> 1)); /*0x625188*/
        v17 = 4 * this->HashTable_field_0x08; /*0x62518d*/
        *(unsigned int *)this->__pad_0 = (unsigned int)(v16); /*0x625194*/
        memset( (void *)(v16), 0, v17); /*0x625199*/
        if ( (int)HashTable_field_0x08 > 0 ) /*0x6251a4*/
        {
          do /*0x6251d8*/
          {
            v18 = *v14; /*0x6251a6*/
            if ( *v14 ) /*0x6251a6*/
            {
              do /*0x6251d2*/
              {
                v19 = ((int (*)(int))this->HashTable_field_0x18)(v18) /*0x6251bc*/
                    & ((1 << this->HashTable_field_0x0C) - 1);
                v20 = *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v19); /*0x6251c0*/
                *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v19) = v18; /*0x6251c6*/
                v21 = *(unsigned int *)(v18 + 12); /*0x6251c8*/
                *(unsigned int *)(v18 + 12) = v20; /*0x6251cb*/
                v18 = v21; /*0x6251ce*/
              }
              while ( v21 ); /*0x6251d2*/
            }
            ++v14; /*0x6251d4*/
            --HashTable_field_0x08; /*0x6251d7*/
          }
          while ( HashTable_field_0x08 ); /*0x6251d8*/
          v14 = v35; /*0x6251da*/
        }
        __3_YAXPAX_Z(v14); /*0x6251df*/
      }
    }
    return (gamemd::AbstractClass **)(1);
  }
  else
  {
    v22 = (unsigned char *)*((unsigned int *)v8 + 3); /*0x6251f3*/
    v34 = 0; /*0x6251f6*/
    if ( v22 ) /*0x6251fd*/
    {
      while ( v9 != *((unsigned int *)v22 + 1) || *a2 != *(unsigned int *)v22 ) /*0x62520b*/
      {
        v8 = v22; /*0x62520d*/
        v22 = (unsigned char *)*((unsigned int *)v22 + 3); /*0x62520f*/
        if ( !v22 ) /*0x625214*/
          goto LABEL_23; /*0x625214*/
      }
      *a3 = v22[8]; /*0x625220*/
      *((unsigned int *)v8 + 3) = *((unsigned int *)v22 + 3); /*0x625225*/
      --this->HashTable_field_0x04; /*0x62522c*/
      __3_YAXPAX_Z(v22); /*0x62522f*/
      v34 = 1; /*0x625237*/
    }
LABEL_23:
    if ( v33 <= *(double *)&this->HashTable_field_0x20 ) /*0x625248*/
    {
      v23 = this->HashTable_field_0x08; /*0x62524e*/
      if ( v23 > this->HashTable_field_0x30 && LOBYTE(this->HashTable_field_0x14) != 1 ) /*0x625260*/
      {
        HashTable_field_0x0C = (unsigned int)(this->HashTable_field_0x0C);
        v25 = (int *)((*(int **)this->__pad_0));
        v36 = (int *)((*(int **)this->__pad_0));
        this->HashTable_field_0x08 = (unsigned int)(v23 >> 1);
        this->HashTable_field_0x0C = (unsigned int)(HashTable_field_0x0C - 1);
        v26 = (void *)__2_YAPAXI_Z(4 * (v23 >> 1)); /*0x625282*/
        v27 = 4 * this->HashTable_field_0x08; /*0x625287*/
        *(unsigned int *)this->__pad_0 = (unsigned int)(v26); /*0x62528e*/
        memset( (void *)(v26), 0, v27); /*0x625293*/
        if ( (int)v23 > 0 ) /*0x62529e*/
        {
          do /*0x6252d2*/
          {
            v28 = *v25; /*0x6252a0*/
            if ( *v25 ) /*0x6252a0*/
            {
              do /*0x6252cc*/
              {
                v29 = ((int (*)(int))this->HashTable_field_0x18)(v28) /*0x6252b6*/
                    & ((1 << this->HashTable_field_0x0C) - 1);
                v30 = *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v29); /*0x6252ba*/
                *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v29) = v28; /*0x6252c0*/
                v31 = *(unsigned int *)(v28 + 12); /*0x6252c2*/
                *(unsigned int *)(v28 + 12) = v30; /*0x6252c5*/
                v28 = v31; /*0x6252c8*/
              }
              while ( v31 ); /*0x6252cc*/
            }
            ++v25; /*0x6252ce*/
            --v23; /*0x6252d1*/
          }
          while ( v23 ); /*0x6252d2*/
          v25 = v36; /*0x6252d4*/
        }
        __3_YAXPAX_Z(v25); /*0x6252d9*/
      }
    }
    return (gamemd::AbstractClass **)(v34);
  }

}
} // namespace gamemd
// 0x625780
namespace gamemd {
void HashTable_flat::Shrink2()
{

  unsigned int HashTable_field_0x08; // esi
  int *v3; // ebp
  int HashTable_field_0x0C; // edi
  void *v5; // edi
  unsigned int v6; // edx
  int *v7; // edi
  unsigned int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  int *v13; // [esp+8h] [ebp-4h]

  HashTable_field_0x08 = this->HashTable_field_0x08; /*0x625785*/
  if ( HashTable_field_0x08 > this->HashTable_field_0x30 && LOBYTE(this->HashTable_field_0x14) != 1 ) /*0x625797*/
  {
    v3 = (int *)((*(int **)this->__pad_0));
    HashTable_field_0x0C = (unsigned int)(this->HashTable_field_0x0C);
    v13 = (int *)((*(int **)this->__pad_0));
    this->HashTable_field_0x08 = (unsigned int)(HashTable_field_0x08 >> 1);
    this->HashTable_field_0x0C = (unsigned int)(HashTable_field_0x0C - 1);
    v5 = (void *)__2_YAPAXI_Z(4 * (HashTable_field_0x08 >> 1)); /*0x6257bf*/
    v6 = 4 * this->HashTable_field_0x08; /*0x6257c4*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(v5); /*0x6257cb*/
    memset( (void *)(v5), 0, v6); /*0x6257d0*/
    if ( (int)HashTable_field_0x08 > 0 ) /*0x6257db*/
    {
      v7 = v3; /*0x6257dd*/
      v8 = HashTable_field_0x08; /*0x6257df*/
      do /*0x625813*/
      {
        v9 = *v7; /*0x6257e1*/
        if ( *v7 ) /*0x6257e1*/
        {
          do /*0x62580d*/
          {
            v10 = ((int (*)(int))this->HashTable_field_0x18)(v9) & ((1 << this->HashTable_field_0x0C) - 1); /*0x6257f7*/
            v11 = *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v10); /*0x6257fb*/
            *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v10) = v9; /*0x625801*/
            v12 = *(unsigned int *)(v9 + 8); /*0x625803*/
            *(unsigned int *)(v9 + 8) = v11; /*0x625806*/
            v9 = v12; /*0x625809*/
          }
          while ( v12 ); /*0x62580d*/
        }
        ++v7; /*0x62580f*/
        --v8; /*0x625812*/
      }
      while ( v8 ); /*0x625813*/
      v3 = v13; /*0x625815*/
    }
    __3_YAXPAX_Z(v3); /*0x62581a*/
  }

}
} // namespace gamemd
// 0x625830
namespace gamemd {
void HashTable_flat::Rebuild2()
{

  unsigned int HashTable_field_0x08; // esi
  int *v3; // ebp
  int HashTable_field_0x0C; // edi
  void *v5; // edi
  unsigned int v6; // edx
  int *v7; // edi
  unsigned int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  int *v13; // [esp+8h] [ebp-4h]

  HashTable_field_0x08 = this->HashTable_field_0x08; /*0x625835*/
  if ( HashTable_field_0x08 > this->HashTable_field_0x30 && LOBYTE(this->HashTable_field_0x14) != 1 ) /*0x625847*/
  {
    v3 = (int *)((*(int **)this->__pad_0));
    HashTable_field_0x0C = (unsigned int)(this->HashTable_field_0x0C);
    v13 = (int *)((*(int **)this->__pad_0));
    this->HashTable_field_0x08 = (unsigned int)(HashTable_field_0x08 >> 1);
    this->HashTable_field_0x0C = (unsigned int)(HashTable_field_0x0C - 1);
    v5 = (void *)__2_YAPAXI_Z(4 * (HashTable_field_0x08 >> 1)); /*0x62586f*/
    v6 = 4 * this->HashTable_field_0x08; /*0x625874*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(v5); /*0x62587b*/
    memset( (void *)(v5), 0, v6); /*0x625880*/
    if ( (int)HashTable_field_0x08 > 0 ) /*0x62588b*/
    {
      v7 = v3; /*0x62588d*/
      v8 = HashTable_field_0x08; /*0x62588f*/
      do /*0x6258c9*/
      {
        v9 = *v7; /*0x625891*/
        if ( *v7 ) /*0x625891*/
        {
          do /*0x6258c3*/
          {
            v10 = ((int (*)(int))this->HashTable_field_0x18)(v9) & ((1 << this->HashTable_field_0x0C) - 1); /*0x6258a7*/
            v11 = *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v10); /*0x6258ab*/
            *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v10) = v9; /*0x6258b1*/
            v12 = *(unsigned int *)(v9 + 516); /*0x6258b3*/
            *(unsigned int *)(v9 + 516) = v11; /*0x6258b9*/
            v9 = v12; /*0x6258bf*/
          }
          while ( v12 ); /*0x6258c3*/
        }
        ++v7; /*0x6258c5*/
        --v8; /*0x6258c8*/
      }
      while ( v8 ); /*0x6258c9*/
      v3 = v13; /*0x6258cb*/
    }
    __3_YAXPAX_Z(v3); /*0x6258d0*/
  }

}
} // namespace gamemd
// 0x625F60
namespace gamemd {
int HashTable_flat::FindString(char * Str1, IUnknown * aP2)
{

  int HashTable_field_0x04; // esi
  int result; // eax

  HashTable_field_0x04 = this->HashTable_field_0x04; /*0x625f61*/
  if ( !HashTable_field_0x04 ) /*0x625f67*/
    return 0; /*0x625f84*/
  while ( strncmp(Str1, (const char *)HashTable_field_0x04, 4u) ) /*0x625f7b*/
  {
    HashTable_field_0x04 = *(unsigned int *)(HashTable_field_0x04 + 12); /*0x625f7d*/
    if ( !HashTable_field_0x04 ) /*0x625f82*/
      return 0; /*0x625f82*/
  }
  result = HashTable_field_0x04; /*0x625f92*/
  *(unsigned int *)aP2 = **(unsigned int **)(HashTable_field_0x04 + 8); /*0x625f9f*/
  LOBYTE(result) = HashTable_field_0x04 != 0; /*0x625fa5*/
  return result; /*0x625f86*/

}
} // namespace gamemd
// 0x625FB0
namespace gamemd {
int HashTable_flat::FindChunk(char * Str1, void * a2, CCINIClass * aP3)
{

  int HashTable_field_0x04; // ebx
  int result; // eax
  int v6; // ecx

  HashTable_field_0x04 = this->HashTable_field_0x04; /*0x625fb1*/
  if ( HashTable_field_0x04 ) /*0x625fb7*/
  {
    while ( 1 ) /*0x625fc1*/
    {
      result = strncmp(Str1, (const char *)HashTable_field_0x04, 4u); /*0x625fc1*/
      if ( !result ) /*0x625fcb*/
        break; /*0x625fcb*/
      HashTable_field_0x04 = *(unsigned int *)(HashTable_field_0x04 + 12); /*0x625fcd*/
      if ( !HashTable_field_0x04 ) /*0x625fd2*/
        goto LABEL_4; /*0x625fd2*/
    }
    v6 = *(int *)aP3;
    if ( *(uint16_t *)(HashTable_field_0x04 + 6) < (int)*aP3 ) /*0x625ff2*/
      v6 = *(uint16_t *)(HashTable_field_0x04 + 6); /*0x625ff4*/
    result = v6; /*0x625ff9*/
    qmemcpy( (void *)(a2), *(const void **)(HashTable_field_0x04 + 8), v6); /*0x626003*/
    *(unsigned int *)aP3 = *(uint16_t *)(HashTable_field_0x04 + 6); /*0x626013*/
    LOBYTE(result) = HashTable_field_0x04 != 0; /*0x626019*/
  }
  else
  {
LABEL_4:
    LOBYTE(result) = 0; /*0x625fd4*/
  }
  return result; /*0x625fd6*/

}
} // namespace gamemd
// 0x6B9530
namespace gamemd {
CampaignClass * * HashTable_flat::Clear(void *a1)
{

  int HashTable_field_0x04; // ecx
  unsigned int v3; // edi
  int HashTable_field_0x08; // eax
  int v5; // ebx
  unsigned int *v6; // ecx
  const char **v7; // esi
  int v8; // eax
  unsigned int *v9; // esi
  int v10; // edi
  bool v11; // c0
  bool v12; // c3
  unsigned int v13; // esi
  int HashTable_field_0x0C; // ecx
  int *v15; // ebx
  void *v16; // edi
  unsigned int v17; // edx
  int *v18; // edi
  unsigned int v19; // ebx
  int v20; // esi
  int v21; // edx
  int v22; // ecx
  int v23; // eax
  ObjectClass *v24; // esi
  ObjectClass *v25; // ebx
  unsigned int v26; // edx
  unsigned int HashTable_field_0x30; // eax
  float v28; // [esp+10h] [ebp-31Ch]
  int *v29; // [esp+10h] [ebp-31Ch]
  unsigned char v30[792]; // [esp+14h] [ebp-318h] BYREF

  unknown_libname_73( (void *)(v30)); /*0x6b9540*/
  while ( 1 ) /*0x6b9545*/
  {
    HashTable_field_0x04 = this->HashTable_field_0x04; /*0x6b9545*/
    v3 = 0; /*0x6b9548*/
    if ( !HashTable_field_0x04 ) /*0x6b954c*/
      break; /*0x6b954c*/
    HashTable_field_0x08 = this->HashTable_field_0x08; /*0x6b9552*/
    *(unsigned long long *)&v30[4] = (unsigned int)(HashTable_field_0x04 - 1); /*0x6b9556*/
    *(unsigned int *)&v30[12] = HashTable_field_0x08; /*0x6b9562*/
    *(unsigned int *)&v30[16] = 0; /*0x6b9566*/
    v5 = 0; /*0x6b956e*/
    v28 = (double)*(int64_t *)&v30[4] / (double)HashTable_field_0x08; /*0x6b9572*/
    if ( HashTable_field_0x08 <= 0 ) /*0x6b9576*/
      break; /*0x6b9576*/
    v6 = *(unsigned int **)this->__pad_0; /*0x6b957f*/
    while ( !*v6 ) /*0x6b9583*/
    {
      ++v5; /*0x6b9585*/
      ++v6; /*0x6b9586*/
      if ( v5 >= HashTable_field_0x08 ) /*0x6b958b*/
        goto LABEL_23; /*0x6b958b*/
    }
    if ( v5 == -1 ) /*0x6b9596*/
      break; /*0x6b9596*/
    v7 = *(const char ***)(*(unsigned int *)this->__pad_0 + 4 * v5); /*0x6b959c*/
    ((String *)((String *)v30))->Reassign( (const char **)(v7)); /*0x6b95a4*/
    v8 = *(unsigned int *)this->__pad_0; /*0x6b95a9*/
    qmemcpy( (void *)(&v30[20]), v7 + 1, 0x304u); /*0x6b95b8*/
    v9 = *(unsigned int **)(v8 + 4 * v5); /*0x6b95ba*/
    v10 = v9[194]; /*0x6b95bf*/
    if ( v9 ) /*0x6b95c5*/
    {
      j_DeleteAndZero( (void *)(*(ObjectClass **)(v8 + 4 * v5))); /*0x6b95c9*/
      __3_YAXPAX_Z(v9); /*0x6b95cf*/
    }
    *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v5) = v10; /*0x6b95de*/
    v11 = v28 < *(double *)&this->HashTable_field_0x20; /*0x6b95e4*/
    v12 = v28 == *(double *)&this->HashTable_field_0x20; /*0x6b95e4*/
    --this->HashTable_field_0x04; /*0x6b95e8*/
    if ( v11 || v12 ) /*0x6b95ed*/
    {
      v13 = this->HashTable_field_0x08; /*0x6b95f6*/
      if ( v13 > this->HashTable_field_0x30 && LOBYTE(this->HashTable_field_0x14) != 1 ) /*0x6b9608*/
      {
        HashTable_field_0x0C = (unsigned int)(this->HashTable_field_0x0C);
        v15 = (int *)((*(int **)this->__pad_0));
        v29 = (int *)((*(int **)this->__pad_0));
        this->HashTable_field_0x08 = (unsigned int)(v13 >> 1);
        this->HashTable_field_0x0C = (unsigned int)(HashTable_field_0x0C - 1);
        v16 = (void *)__2_YAPAXI_Z(4 * (v13 >> 1)); /*0x6b9633*/
        v17 = 4 * this->HashTable_field_0x08; /*0x6b9638*/
        *(unsigned int *)this->__pad_0 = (unsigned int)(v16); /*0x6b963f*/
        memset( (void *)(v16), 0, v17); /*0x6b9645*/
        if ( (int)v13 > 0 ) /*0x6b9650*/
        {
          v18 = v15; /*0x6b9652*/
          v19 = v13; /*0x6b9654*/
          do /*0x6b968f*/
          {
            v20 = *v18; /*0x6b9656*/
            if ( *v18 ) /*0x6b9656*/
            {
              do /*0x6b9689*/
              {
                v21 = ((int (*)(int))this->HashTable_field_0x18)(v20) /*0x6b966c*/
                    & ((1 << this->HashTable_field_0x0C) - 1);
                v22 = *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v21); /*0x6b9671*/
                *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v21) = v20; /*0x6b9677*/
                v23 = *(unsigned int *)(v20 + 776); /*0x6b9679*/
                *(unsigned int *)(v20 + 776) = v22; /*0x6b967f*/
                v20 = v23; /*0x6b9685*/
              }
              while ( v23 ); /*0x6b9689*/
            }
            ++v18; /*0x6b968b*/
            --v19; /*0x6b968e*/
          }
          while ( v19 ); /*0x6b968f*/
          v15 = v29; /*0x6b9691*/
        }
        __3_YAXPAX_Z(v15); /*0x6b9696*/
      }
    }
    if ( *(unsigned int *)&v30[20] ) /*0x6b96a4*/
      (***(void (****)(unsigned int, int))&v30[20])(*(unsigned int *)&v30[20], 1); /*0x6b96ae*/
  }
LABEL_23:
  j_DeleteAndZero( (void *)((ObjectClass *)v30)); /*0x6b96b5*/
  if ( this->HashTable_field_0x08 ) /*0x6b96be*/
  {
    do /*0x6b96fe*/
    {
      v24 = *(ObjectClass **)(*(unsigned int *)this->__pad_0 + 4 * v3); /*0x6b96c6*/
      while ( v24 ) /*0x6b96cb*/
      {
        v25 = v24; /*0x6b96cd*/
        v24 = (ObjectClass *)v24[4].customSound_controller[2]; /*0x6b96cf*/
        j_DeleteAndZero( (void *)(v25)); /*0x6b96db*/
        __3_YAXPAX_Z((void *)(v25)); /*0x6b96e1*/
      }
      ++v3; /*0x6b96f0*/
      *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v3 - 4) = 0; /*0x6b96f1*/
    }
    while ( v3 < this->HashTable_field_0x08 ); /*0x6b96fe*/
  }
  v26 = this->HashTable_field_0x08; /*0x6b9702*/
  HashTable_field_0x30 = this->HashTable_field_0x30; /*0x6b9705*/
  this->HashTable_field_0x04 = 0; /*0x6b970a*/
  if ( v26 > HashTable_field_0x30 ) /*0x6b970d*/
  {
    do /*0x6b9725*/
    {
      if ( LOBYTE(this->HashTable_field_0x14) ) /*0x6b970f*/
        break; /*0x6b9714*/
      HashTable::RebuildEx(this); /*0x6b9718*/
    }
    while ( this->HashTable_field_0x08 > (unsigned int)this->HashTable_field_0x30 ); /*0x6b9725*/
  }
  __3_YAXPAX_Z(*(void **)this->__pad_0); /*0x6b972b*/

}
} // namespace gamemd
// 0x6BA140
namespace gamemd {
int HashTable_flat::Find(const char * a1, ConvertClass * aP2)
{

  int v4; // esi
  const void *v6; // esi
  int v7; // esi

  ((String *)((String *)&a1))->Assign( (const char *)(a1)); /*0x6ba14c*/
  if ( (byte_B0B930 & 1) == 0 ) /*0x6ba158*/
  {
    dword_B0B948 = 0; /*0x6ba164*/
    byte_B0B930 |= 1u; /*0x6ba16e*/
    atexit(nullsub_39); /*0x6ba174*/
  }
  dword_B0B948 = 0; /*0x6ba17c*/
  if ( this->HashTable_field_0x04 /*0x6ba1a8*/
    && (v4 = *(unsigned int *)(*(unsigned int *)this->__pad_0
                       + 4
                       * (((int (*)(const char **))this->HashTable_field_0x18)(&a1)
                        & ((1 << this->HashTable_field_0x0C) - 1)))) != 0 )
  {
    while ( !(uint8_t)((String *)((String *)v4))->Compare( (const char **)(&a1)) ) /*0x6ba1b8*/
    {
      v4 = *(unsigned int *)(v4 + 776); /*0x6ba1ba*/
      if ( !v4 ) /*0x6ba1c2*/
        goto LABEL_7; /*0x6ba1c2*/
    }
    v6 = (const void *)(v4 + 4); /*0x6ba1d7*/
    if ( v6 ) /*0x6ba1dd*/
      qmemcpy( (void *)(&dword_B0B948), (const void *)(v6), 0x304u); /*0x6ba1e9*/
    if ( aP2 ) /*0x6ba1f1*/
      qmemcpy( (void *)(aP2), (const void *)(&unk_B0B94C), 0x300u); /*0x6ba1fd*/
    v7 = dword_B0B948; /*0x6ba1ff*/
    j_DeleteAndZero( (void *)((ObjectClass *)&a1)); /*0x6ba209*/
    return v7; /*0x6ba20e*/
  }
  else
  {
LABEL_7:
    j_DeleteAndZero( (void *)((ObjectClass *)&a1)); /*0x6ba1c4*/
    return 0; /*0x6ba1cd*/
  }

}
} // namespace gamemd
// 0x6BA230
namespace gamemd {
CampaignClass * * HashTable_flat::RemoveEntry(const char * a2)
{

  int HashTable_field_0x04; // eax
  int v4; // esi
  const void *v5; // esi
  int v6; // eax
  int HashTable_field_0x08; // edx
  int v8; // esi
  int v9; // edi
  unsigned int *v10; // edi
  int v11; // ebp
  double v12; // st7
  bool v13; // c0
  bool v14; // c3
  int v15; // esi
  unsigned char v16[784]; // [esp+Ch] [ebp-310h] BYREF

  ((String *)((String *)v16))->Assign( (const char *)(a2)); /*0x6ba247*/
  HashTable_field_0x04 = this->HashTable_field_0x04; /*0x6ba24c*/
  *(unsigned int *)&v16[12] = 0; /*0x6ba253*/
  if ( !HashTable_field_0x04 ) /*0x6ba257*/
    goto LABEL_24; /*0x6ba257*/
  v4 = *(unsigned int *)(*(unsigned int *)this->__pad_0 /*0x6ba273*/
                 + 4
                 * (((int (*)(unsigned char *))this->HashTable_field_0x18)(v16)
                  & ((1 << this->HashTable_field_0x0C) - 1)));
  if ( !v4 ) /*0x6ba278*/
    goto LABEL_24; /*0x6ba278*/
  while ( !(uint8_t)((String *)((String *)v4))->Compare((const char **)v16) ) /*0x6ba28c*/
  {
    v4 = *(unsigned int *)(v4 + 776); /*0x6ba28e*/
    if ( !v4 ) /*0x6ba296*/
      goto LABEL_24; /*0x6ba296*/
  }
  v5 = (const void *)(v4 + 4); /*0x6ba2a5*/
  if ( v5 ) /*0x6ba2ab*/
    qmemcpy( (void *)(&v16[12]), (const void *)(v5), 0x304u); /*0x6ba2b6*/
  v6 = this->HashTable_field_0x04; /*0x6ba2b8*/
  if ( v6 ) /*0x6ba2bd*/
  {
    HashTable_field_0x08 = this->HashTable_field_0x08; /*0x6ba2c3*/
    *(unsigned long long *)&v16[4] = (unsigned int)(v6 - 1); /*0x6ba2c7*/
    *(float *)&v16[4] = (double)*(int64_t *)&v16[4] / (double)HashTable_field_0x08; /*0x6ba2e3*/
    v8 = ((int (*)(unsigned char *))this->HashTable_field_0x18)(v16) & ((1 << this->HashTable_field_0x0C) - 1); /*0x6ba2f5*/
    v9 = *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v8); /*0x6ba2f9*/
    if ( v9 ) /*0x6ba2fe*/
    {
      if ( (uint8_t)((String *)((String *)v9))->Compare((const char **)v16) ) /*0x6ba30b*/
      {
        v10 = *(unsigned int **)(*(unsigned int *)this->__pad_0 + 4 * v8); /*0x6ba316*/
        v11 = v10[194]; /*0x6ba31b*/
        if ( v10 ) /*0x6ba321*/
        {
          j_DeleteAndZero( (void *)(*(ObjectClass **)(*(unsigned int *)this->__pad_0 + 4 * v8))); /*0x6ba325*/
          __3_YAXPAX_Z(v10); /*0x6ba32b*/
        }
        v12 = *(float *)&v16[4]; /*0x6ba335*/
        *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v8) = v11; /*0x6ba339*/
        v13 = v12 < *(double *)&this->HashTable_field_0x20; /*0x6ba33f*/
        v14 = v12 == *(double *)&this->HashTable_field_0x20; /*0x6ba33f*/
        --this->HashTable_field_0x04; /*0x6ba343*/
        if ( !v13 && !v14 ) /*0x6ba348*/
          goto LABEL_22; /*0x6ba34b*/
      }
      else
      {
        v15 = *(unsigned int *)(v9 + 776); /*0x6ba34f*/
        if ( v15 ) /*0x6ba357*/
        {
          while ( !(uint8_t)((String *)((String *)v15))->Compare((const char **)v16) ) /*0x6ba367*/
          {
            v9 = v15; /*0x6ba369*/
            v15 = *(unsigned int *)(v15 + 776); /*0x6ba36b*/
            if ( !v15 ) /*0x6ba373*/
              goto LABEL_20; /*0x6ba373*/
          }
          *(unsigned int *)(v9 + 776) = *(unsigned int *)(v15 + 776); /*0x6ba37d*/
          --this->HashTable_field_0x04; /*0x6ba389*/
          j_DeleteAndZero( (void *)((ObjectClass *)v15)); /*0x6ba390*/
          __3_YAXPAX_Z((void *)v15); /*0x6ba396*/
        }
LABEL_20:
        if ( *(float *)&v16[4] > *(double *)&this->HashTable_field_0x20 ) /*0x6ba3aa*/
          goto LABEL_22; /*0x6ba3aa*/
      }
      HashTable::RebuildEx(this); /*0x6ba3ae*/
    }
  }
LABEL_22:
  if ( *(unsigned int *)&v16[12] ) /*0x6ba3ba*/
    (***(void (****)(unsigned int, int))&v16[12])(*(unsigned int *)&v16[12], 1); /*0x6ba3c0*/
LABEL_24:
  j_DeleteAndZero( (void *)((ObjectClass *)v16)); /*0x6ba3c2*/

}
} // namespace gamemd
// 0x6BAC40
namespace gamemd {
AbstractClass * * HashTable_flat::RemoveHashTableEntry(ObjectClass * aP1, void * a2)
{

  int HashTable_field_0x04; // eax
  int v7; // ebx
  int v8; // esi
  unsigned int *v9; // esi
  int v10; // edi
  bool v11; // c0
  bool v12; // c3
  unsigned int HashTable_field_0x08; // esi
  int *v14; // ebx
  int v15; // edi
  void *v16; // edi
  unsigned int v17; // edx
  int *v18; // edi
  unsigned int v19; // ebx
  int v20; // esi
  int v21; // edx
  int v22; // ecx
  int v23; // eax
  int v24; // ebx
  unsigned int v25; // esi
  int HashTable_field_0x0C; // edi
  int *v27; // ebx
  void *v28; // edi
  unsigned int v29; // edx
  int *v30; // edi
  unsigned int v31; // ebx
  int v32; // esi
  int v33; // edx
  int v34; // ecx
  int v35; // eax
  int v36; // [esp+10h] [ebp-Ch]
  float v37; // [esp+14h] [ebp-8h]
  char v38; // [esp+20h] [ebp+4h]
  int *v39; // [esp+24h] [ebp+8h]
  int *v40; // [esp+24h] [ebp+8h]

  HashTable_field_0x04 = this->HashTable_field_0x04; /*0x6bac4b*/
  if ( !HashTable_field_0x04 ) /*0x6bac50*/
    return 0; /*0x6bac55*/
  v37 = (double)(unsigned int)(HashTable_field_0x04 - 1) / (double)this->HashTable_field_0x08; /*0x6bac80*/
  v7 = ((int (*)(const char **))this->HashTable_field_0x18)(aP1) & ((1 << this->HashTable_field_0x0C) - 1); /*0x6bac95*/
  v8 = *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v7); /*0x6bac97*/
  v36 = v8; /*0x6bac9c*/
  if ( !v8 ) /*0x6baca0*/
    return 0; /*0x6baca5*/
  if ( (uint8_t)((String *)((String *)v8))->Compare((const char **)(aP1)) ) /*0x6bacb1*/
  {
    qmemcpy( (void *)(a2), (const void *)(v8 + 4), 0x304u); /*0x6bacca*/
    v9 = *(unsigned int **)(*(unsigned int *)this->__pad_0 + 4 * v7); /*0x6baccf*/
    v10 = v9[194]; /*0x6bacd4*/
    if ( v9 ) /*0x6bacda*/
    {
      j_DeleteAndZero( (void *)(*(ObjectClass **)(*(unsigned int *)this->__pad_0 + 4 * v7))); /*0x6bacde*/
      __3_YAXPAX_Z(v9); /*0x6bace4*/
    }
    *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v7) = v10; /*0x6bacf3*/
    v11 = v37 < *(double *)&this->HashTable_field_0x20; /*0x6bacf9*/
    v12 = v37 == *(double *)&this->HashTable_field_0x20; /*0x6bacf9*/
    --this->HashTable_field_0x04; /*0x6bacfd*/
    if ( v11 || v12 ) /*0x6bad02*/
    {
      HashTable_field_0x08 = this->HashTable_field_0x08; /*0x6bad0b*/
      if ( HashTable_field_0x08 > this->HashTable_field_0x30 && LOBYTE(this->HashTable_field_0x14) != 1 ) /*0x6bad1d*/
      {
        v14 = (int *)((*(int **)this->__pad_0));
        v39 = (int *)((*(int **)this->__pad_0));
        v15 = (unsigned int)(this->HashTable_field_0x0C - 1);
        this->HashTable_field_0x08 = (unsigned int)(HashTable_field_0x08 >> 1);
        this->HashTable_field_0x0C = (unsigned int)(v15);
        v16 = (void *)__2_YAPAXI_Z(4 * (HashTable_field_0x08 >> 1)); /*0x6bad48*/
        v17 = 4 * this->HashTable_field_0x08; /*0x6bad4d*/
        *(unsigned int *)this->__pad_0 = (unsigned int)(v16); /*0x6bad54*/
        memset( (void *)(v16), 0, v17); /*0x6bad5a*/
        if ( (int)HashTable_field_0x08 > 0 ) /*0x6bad65*/
        {
          v18 = v14; /*0x6bad67*/
          v19 = HashTable_field_0x08; /*0x6bad69*/
          do /*0x6bada4*/
          {
            v20 = *v18; /*0x6bad6b*/
            if ( *v18 ) /*0x6bad6b*/
            {
              do /*0x6bad9e*/
              {
                v21 = ((int (*)(int))this->HashTable_field_0x18)(v20) /*0x6bad81*/
                    & ((1 << this->HashTable_field_0x0C) - 1);
                v22 = *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v21); /*0x6bad86*/
                *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v21) = v20; /*0x6bad8c*/
                v23 = *(unsigned int *)(v20 + 776); /*0x6bad8e*/
                *(unsigned int *)(v20 + 776) = v22; /*0x6bad94*/
                v20 = v23; /*0x6bad9a*/
              }
              while ( v23 ); /*0x6bad9e*/
            }
            ++v18; /*0x6bada0*/
            --v19; /*0x6bada3*/
          }
          while ( v19 ); /*0x6bada4*/
          v14 = v39; /*0x6bada6*/
        }
        __3_YAXPAX_Z(v14); /*0x6badab*/
      }
    }
    return (gamemd::AbstractClass **)(1);
  }
  else
  {
    v24 = *(unsigned int *)(v8 + 776); /*0x6badbf*/
    v38 = 0; /*0x6badc5*/
    if ( v24 ) /*0x6badcc*/
    {
      while ( !(uint8_t)((String *)((String *)v24))->Compare((const char **)(aP1)) ) /*0x6badd8*/
      {
        v36 = v24; /*0x6badda*/
        v24 = *(unsigned int *)(v24 + 776); /*0x6badde*/
        if ( !v24 ) /*0x6bade6*/
          goto LABEL_24; /*0x6bade6*/
      }
      qmemcpy( (void *)(a2), (const void *)(v24 + 4), 0x304u); /*0x6badfa*/
      *(unsigned int *)(v36 + 776) = *(unsigned int *)(v24 + 776); /*0x6bae02*/
      --this->HashTable_field_0x04; /*0x6bae0e*/
      j_DeleteAndZero( (void *)((ObjectClass *)v24)); /*0x6bae15*/
      __3_YAXPAX_Z((void *)v24); /*0x6bae1b*/
      v38 = 1; /*0x6bae23*/
    }
LABEL_24:
    if ( v37 <= *(double *)&this->HashTable_field_0x20 ) /*0x6bae34*/
    {
      v25 = this->HashTable_field_0x08; /*0x6bae3a*/
      if ( v25 > this->HashTable_field_0x30 && LOBYTE(this->HashTable_field_0x14) != 1 ) /*0x6bae4c*/
      {
        HashTable_field_0x0C = (unsigned int)(this->HashTable_field_0x0C);
        v27 = (int *)((*(int **)this->__pad_0));
        v40 = (int *)((*(int **)this->__pad_0));
        this->HashTable_field_0x08 = (unsigned int)(v25 >> 1);
        this->HashTable_field_0x0C = (unsigned int)(HashTable_field_0x0C - 1);
        v28 = (void *)__2_YAPAXI_Z(4 * (v25 >> 1)); /*0x6bae73*/
        v29 = 4 * this->HashTable_field_0x08; /*0x6bae78*/
        *(unsigned int *)this->__pad_0 = (unsigned int)(v28); /*0x6bae7f*/
        memset( (void *)(v28), 0, v29); /*0x6bae85*/
        if ( (int)v25 > 0 ) /*0x6bae90*/
        {
          v30 = v27; /*0x6bae92*/
          v31 = v25; /*0x6bae94*/
          do /*0x6baecf*/
          {
            v32 = *v30; /*0x6bae96*/
            if ( *v30 ) /*0x6bae96*/
            {
              do /*0x6baec9*/
              {
                v33 = ((int (*)(int))this->HashTable_field_0x18)(v32) /*0x6baeac*/
                    & ((1 << this->HashTable_field_0x0C) - 1);
                v34 = *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v33); /*0x6baeb1*/
                *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v33) = v32; /*0x6baeb7*/
                v35 = *(unsigned int *)(v32 + 776); /*0x6baeb9*/
                *(unsigned int *)(v32 + 776) = v34; /*0x6baebf*/
                v32 = v35; /*0x6baec5*/
              }
              while ( v35 ); /*0x6baec9*/
            }
            ++v30; /*0x6baecb*/
            --v31; /*0x6baece*/
          }
          while ( v31 ); /*0x6baecf*/
          v27 = v40; /*0x6baed1*/
        }
        __3_YAXPAX_Z(v27); /*0x6baed6*/
      }
    }
    return (gamemd::AbstractClass **)(v38);
  }

}
} // namespace gamemd
// 0x6BAEF0
namespace gamemd {
AbstractClass * * HashTable_flat::RebuildEx(void *a1)
{

  unsigned int HashTable_field_0x08; // esi
  int *v3; // ebp
  int HashTable_field_0x0C; // edi
  void *v5; // edi
  unsigned int v6; // edx
  int *v7; // edi
  unsigned int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  int *v13; // [esp+8h] [ebp-4h]

  HashTable_field_0x08 = this->HashTable_field_0x08; /*0x6baef5*/
  if ( HashTable_field_0x08 > this->HashTable_field_0x30 && LOBYTE(this->HashTable_field_0x14) != 1 ) /*0x6baf07*/
  {
    v3 = (int *)((*(int **)this->__pad_0));
    HashTable_field_0x0C = (unsigned int)(this->HashTable_field_0x0C);
    v13 = (int *)((*(int **)this->__pad_0));
    this->HashTable_field_0x08 = (unsigned int)(HashTable_field_0x08 >> 1);
    this->HashTable_field_0x0C = (unsigned int)(HashTable_field_0x0C - 1);
    v5 = (void *)__2_YAPAXI_Z(4 * (HashTable_field_0x08 >> 1)); /*0x6baf2f*/
    v6 = 4 * this->HashTable_field_0x08; /*0x6baf34*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(v5); /*0x6baf3b*/
    memset( (void *)(v5), 0, v6); /*0x6baf40*/
    if ( (int)HashTable_field_0x08 > 0 ) /*0x6baf4b*/
    {
      v7 = v3; /*0x6baf4d*/
      v8 = HashTable_field_0x08; /*0x6baf4f*/
      do /*0x6baf89*/
      {
        v9 = *v7; /*0x6baf51*/
        if ( *v7 ) /*0x6baf51*/
        {
          do /*0x6baf83*/
          {
            v10 = ((int (*)(int))this->HashTable_field_0x18)(v9) & ((1 << this->HashTable_field_0x0C) - 1); /*0x6baf67*/
            v11 = *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v10); /*0x6baf6b*/
            *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v10) = v9; /*0x6baf71*/
            v12 = *(unsigned int *)(v9 + 776); /*0x6baf73*/
            *(unsigned int *)(v9 + 776) = v11; /*0x6baf79*/
            v9 = v12; /*0x6baf7f*/
          }
          while ( v12 ); /*0x6baf83*/
        }
        ++v7; /*0x6baf85*/
        --v8; /*0x6baf88*/
      }
      while ( v8 ); /*0x6baf89*/
      v3 = v13; /*0x6baf8b*/
    }
    __3_YAXPAX_Z(v3); /*0x6baf90*/
  }

}
} // namespace gamemd
// 0x724730
namespace gamemd {
ObjectClass * * HashTable_flat::Remove(int a2)
{

  HashTable *v3; // esi
  unsigned int *v4; // eax
  int v5; // eax
  unsigned int *HashTable_field_0x10; // eax
  int v7; // eax
  void **v8; // eax
  void *v9; // eax
  int HashTable_field_0x04; // ecx
  unsigned int *v11; // edi
  size_t v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  int i; // ecx
  unsigned int *v17; // eax
  CommandClass v18; // edi
  int v19; // eax
  int v20; // eax
  int v21; // ecx
  int v22; // ecx
  void *Block; // [esp+8h] [ebp-Ch] BYREF
  unsigned int v24; // [esp+Ch] [ebp-8h] BYREF

  v3 = (HashTable *)((unsigned int *)this + 7); /*0x72473d*/
  if ( !*((unsigned int *)this + 148) ) /*0x724745*/
    return; /*0x724745*/
  v4 = (unsigned int *)*((unsigned int *)this + 151); /*0x72474b*/
  if ( !v4 || *v4 != a2 ) /*0x72475a*/
  {
    v5 = ((CommandClass *)v3)->BinarySearchAction( (unsigned int *)&a2); /*0x724763*/
    if ( !v5 ) /*0x72476a*/
      return; /*0x72476a*/
    v3->u32_10 = v5; /*0x724770*/
  }
  if ( v3->HashTable_field_0x04 ) /*0x724773*/
  {
    HashTable_field_0x10 = (unsigned int *)v3->u32_10; /*0x72477a*/
    if ( HashTable_field_0x10 && *HashTable_field_0x10 == a2 ) /*0x724789*/
      goto LABEL_11; /*0x724789*/
    v7 = ((CommandClass *)v3)->BinarySearchAction( (unsigned int *)&a2); /*0x724792*/
    if ( v7 ) /*0x724799*/
    {
      v3->u32_10 = v7; /*0x72479b*/
LABEL_11:
      v8 = (void **)(v3->u32_10 + 4); /*0x72479e*/
      goto LABEL_13; /*0x7247a4*/
    }
  }
  v8 = (void **)&unk_B78820; /*0x7247a6*/
LABEL_13:
  v9 = *v8; /*0x7247ab*/
  HashTable_field_0x04 = this->HashTable_field_0x04; /*0x7247ad*/
  Block = v9; /*0x7247b2*/
  if ( (void *)HashTable_field_0x04 == v9 && HashTable_field_0x04 ) /*0x7247ba*/
  {
    (*(void (**)(HashTable *, int *))(*(unsigned int *)this->__pad_0 + 8))((HashTable *)this, (int *)&this->HashTable_field_0x18); /*0x7247c5*/
    v9 = Block; /*0x7247c8*/
  }
  v11 = (unsigned int *)v9; /*0x7247cd*/
  v12 = v3->HashTable_field_0x04; /*0x7247cf*/
  if ( v12 ) /*0x7247d4*/
  {
    if ( !LOBYTE(v3->q00C) ) /*0x7247da*/
    {
      qsort(*(void **)v3->__pad_0, v12, 8u, (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunc2Int); /*0x7247ec*/
      v3->u32_10 = 0; /*0x7247f4*/
      LOBYTE(v3->q00C) = 1; /*0x7247fb*/
    }
    v13 = *(unsigned int *)v3->__pad_0; /*0x724801*/
    v24 = *v11; /*0x724807*/
    v14 = UI_Remove( v13, v3->HashTable_field_0x04, (unsigned int *)(&v24)); /*0x72480f*/
    if ( v14 ) /*0x724816*/
    {
      v15 = (v14 - *(unsigned int *)v3->__pad_0) >> 3; /*0x72481a*/
      if ( v15 != -1 ) /*0x724820*/
      {
        for ( i = v15 + 1; i < v3->HashTable_field_0x04; *(v17 - 1) = v17[1] ) /*0x72482a*/
        {
          v17 = (unsigned int *)(*(unsigned int *)v3->__pad_0 + 8 * i++); /*0x72482e*/
          *(v17 - 2) = *v17; /*0x724834*/
        }
        v18 = *(CommandClass *)v3->__pad_0; /*0x724847*/
        v19 = v3->HashTable_field_0x04 - 1; /*0x724849*/
        v3->HashTable_field_0x04 = v19; /*0x72484c*/
        *(unsigned int *)(*(unsigned int *)&v18 + 8 * v19) = 0; /*0x724851*/
        *(unsigned int *)(*(unsigned int *)&v18 + 8 * v19 + 4) = 0; /*0x724854*/
        v3->u32_10 = 0; /*0x724858*/
      }
    }
  }
  v20 = (*(int (**)(char *, void **))(*((unsigned int *)this + 141) + 16))( (char *)this + 564, (void **)(&Block)); /*0x72486e*/
  if ( v20 != -1 ) /*0x724875*/
  {
    v21 = *((unsigned int *)this + 145); /*0x724877*/
    if ( v20 < v21 ) /*0x72487c*/
    {
      v22 = v21 - 1; /*0x72487e*/
      for ( *((unsigned int *)this + 145) = v22; /*0x724884*/
            v20 < *((unsigned int *)this + 145);
            *(unsigned int *)(*((unsigned int *)this + 142) + 4 * v20 - 4) = *(unsigned int *)(*((unsigned int *)this + 142) + 4 * v20) )
      {
        ++v20; /*0x724889*/
      }
    }
  }
  if ( Block ) /*0x72489e*/
    __3_YAXPAX_Z(Block); /*0x7248a1*/

}
} // namespace gamemd
// 0x7ACE60
namespace gamemd {
unsigned int HashTable_flat::CleanupAndResize()
{

  unsigned int i; // ebp
  ObjectClass *v3; // esi
  ObjectClass *v4; // edi
  int result; // eax
  unsigned int HashTable_field_0x08; // esi
  int HashTable_field_0x0C; // ecx
  int *v8; // ebp
  void *v9; // edi
  unsigned int v10; // edx
  int *v11; // edi
  unsigned int v12; // ebp
  int v13; // esi
  int v14; // edx
  int v15; // ecx
  int v16; // eax
  int *v17; // [esp+10h] [ebp-4h]

  for ( i = 0; i < this->HashTable_field_0x08; *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * i - 4) = 0 ) /*0x7ace67*/
  {
    v3 = *(ObjectClass **)(*(unsigned int *)this->__pad_0 + 4 * i); /*0x7ace72*/
    while ( v3 ) /*0x7ace77*/
    {
      v4 = v3; /*0x7ace79*/
      v3 = (ObjectClass *)((unsigned int *)v3)[0]; /*0x7ace7b*/
      j_DeleteAndZero( (void *)(v4)); /*0x7ace84*/
      __3_YAXPAX_Z((void *)(v4)); /*0x7ace8a*/
    }
    ++i; /*0x7ace98*/
  }
  result = this->HashTable_field_0x30; /*0x7acea8*/
  HashTable_field_0x08 = this->HashTable_field_0x08; /*0x7aceab*/
  for ( this->HashTable_field_0x04 = 0; HashTable_field_0x08 > result; HashTable_field_0x08 = this->HashTable_field_0x08 ) /*0x7aceb7*/
  {
    if ( LOBYTE(this->HashTable_field_0x14) ) /*0x7acebd*/
      break; /*0x7acec2*/
    if ( HashTable_field_0x08 > result ) /*0x7aceca*/
    {
      HashTable_field_0x0C = this->HashTable_field_0x0C; /*0x7aced0*/
      v8 = *(int **)this->__pad_0; /*0x7aced3*/
      v17 = *(int **)this->__pad_0; /*0x7aced7*/
      this->HashTable_field_0x08 = HashTable_field_0x08 >> 1; /*0x7acede*/
      this->HashTable_field_0x0C = HashTable_field_0x0C - 1; /*0x7acee8*/
      v9 = (void *)__2_YAPAXI_Z(4 * (HashTable_field_0x08 >> 1)); /*0x7acef4*/
      v10 = 4 * this->HashTable_field_0x08; /*0x7acef9*/
      *(unsigned int *)this->__pad_0 = (unsigned int)(v9); /*0x7acf00*/
      memset( (void *)(v9), 0, v10); /*0x7acf05*/
      if ( (int)HashTable_field_0x08 > 0 ) /*0x7acf10*/
      {
        v11 = v8; /*0x7acf12*/
        v12 = HashTable_field_0x08; /*0x7acf14*/
        do /*0x7acf48*/
        {
          v13 = *v11; /*0x7acf16*/
          if ( *v11 ) /*0x7acf16*/
          {
            do /*0x7acf42*/
            {
              v14 = ((int (*)(int))this->HashTable_field_0x18)(v13) & ((1 << this->HashTable_field_0x0C) - 1); /*0x7acf2c*/
              v15 = *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v14); /*0x7acf30*/
              *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v14) = v13; /*0x7acf36*/
              v16 = *(unsigned int *)(v13 + 8); /*0x7acf38*/
              *(unsigned int *)(v13 + 8) = v15; /*0x7acf3b*/
              v13 = v16; /*0x7acf3e*/
            }
            while ( v16 ); /*0x7acf42*/
          }
          ++v11; /*0x7acf44*/
          --v12; /*0x7acf47*/
        }
        while ( v12 ); /*0x7acf48*/
        v8 = v17; /*0x7acf4a*/
      }
      __3_YAXPAX_Z(v8); /*0x7acf4f*/
    }
    result = this->HashTable_field_0x30; /*0x7acf57*/
  }
  return result; /*0x7acf65*/

}
} // namespace gamemd
// 0x7ACF70
namespace gamemd {
unsigned int HashTable_flat::Rebuild()
{

  unsigned int i; // ebp
  ObjectClass *customSound; // esi
  ObjectClass *v4; // edi
  int result; // eax
  unsigned int HashTable_field_0x08; // esi
  int HashTable_field_0x0C; // ecx
  int *v8; // ebp
  void *v9; // edi
  unsigned int v10; // edx
  int *v11; // edi
  unsigned int v12; // ebp
  int v13; // esi
  int v14; // edx
  int v15; // ecx
  int v16; // eax
  int *v17; // [esp+10h] [ebp-4h]

  for ( i = 0; i < this->HashTable_field_0x08; *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * i - 4) = 0 ) /*0x7acf77*/
  {
    customSound = *(ObjectClass **)(*(unsigned int *)this->__pad_0 + 4 * i); /*0x7acf82*/
    while ( customSound ) /*0x7acf87*/
    {
      v4 = customSound; /*0x7acf89*/
      customSound = (ObjectClass *)customSound[1].customSound; /*0x7acf8b*/
      j_DeleteAndZero( (void *)(v4)); /*0x7acf97*/
      __3_YAXPAX_Z((void *)(v4)); /*0x7acf9d*/
    }
    ++i; /*0x7acfab*/
  }
  result = this->HashTable_field_0x30; /*0x7acfbb*/
  HashTable_field_0x08 = this->HashTable_field_0x08; /*0x7acfbe*/
  for ( this->HashTable_field_0x04 = 0; HashTable_field_0x08 > result; HashTable_field_0x08 = this->HashTable_field_0x08 ) /*0x7acfca*/
  {
    if ( LOBYTE(this->HashTable_field_0x14) ) /*0x7acfd0*/
      break; /*0x7acfd5*/
    if ( HashTable_field_0x08 > result ) /*0x7acfdd*/
    {
      HashTable_field_0x0C = this->HashTable_field_0x0C; /*0x7acfe3*/
      v8 = *(int **)this->__pad_0; /*0x7acfe6*/
      v17 = *(int **)this->__pad_0; /*0x7acfea*/
      this->HashTable_field_0x08 = HashTable_field_0x08 >> 1; /*0x7acff1*/
      this->HashTable_field_0x0C = HashTable_field_0x0C - 1; /*0x7acffb*/
      v9 = (void *)__2_YAPAXI_Z(4 * (HashTable_field_0x08 >> 1)); /*0x7ad007*/
      v10 = 4 * this->HashTable_field_0x08; /*0x7ad00c*/
      *(unsigned int *)this->__pad_0 = (unsigned int)(v9); /*0x7ad013*/
      memset( (void *)(v9), 0, v10); /*0x7ad018*/
      if ( (int)HashTable_field_0x08 > 0 ) /*0x7ad023*/
      {
        v11 = v8; /*0x7ad025*/
        v12 = HashTable_field_0x08; /*0x7ad027*/
        do /*0x7ad061*/
        {
          v13 = *v11; /*0x7ad029*/
          if ( *v11 ) /*0x7ad029*/
          {
            do /*0x7ad05b*/
            {
              v14 = ((int (*)(int))this->HashTable_field_0x18)(v13) & ((1 << this->HashTable_field_0x0C) - 1); /*0x7ad03f*/
              v15 = *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v14); /*0x7ad043*/
              *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v14) = v13; /*0x7ad049*/
              v16 = *(unsigned int *)(v13 + 272); /*0x7ad04b*/
              *(unsigned int *)(v13 + 272) = v15; /*0x7ad051*/
              v13 = v16; /*0x7ad057*/
            }
            while ( v16 ); /*0x7ad05b*/
          }
          ++v11; /*0x7ad05d*/
          --v12; /*0x7ad060*/
        }
        while ( v12 ); /*0x7ad061*/
        v8 = v17; /*0x7ad063*/
      }
      __3_YAXPAX_Z(v8); /*0x7ad068*/
    }
    result = this->HashTable_field_0x30; /*0x7ad070*/
  }
  return result; /*0x7ad07e*/

}
} // namespace gamemd
// 0x7ADC60
namespace gamemd {
int HashTable_flat::LookupString(const char ** a2, unsigned int * a3)
{

  int result; // eax
  int v5; // edx
  int v6; // esi

  result = this->HashTable_field_0x04; /*0x7adc64*/
  if ( result ) /*0x7adc69*/
  {
    v5 = ((int (*)(const char **))this->HashTable_field_0x18)(a2) & ((1 << this->HashTable_field_0x0C) - 1); /*0x7adc86*/
    result = *(unsigned int *)this->__pad_0; /*0x7adc88*/
    v6 = *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v5); /*0x7adc8a*/
    if ( v6 ) /*0x7adc8f*/
    {
      while ( 1 ) /*0x7adc9b*/
      {
        result = ((String *)((String *)v6))->Compare( (const char **)(a2)); /*0x7adc9b*/
        if ( (unsigned char)result ) /*0x7adca2*/
          break; /*0x7adca2*/
        v6 = *(unsigned int *)(v6 + 112); /*0x7adca4*/
        if ( !v6 ) /*0x7adca9*/
          return result; /*0x7adca9*/
      }
      LOBYTE(result) = 1; /*0x7adcc3*/
      *a3 = v6 + 4; /*0x7adcc5*/
    }
    else
    {
      LOBYTE(result) = 0; /*0x7adc92*/
    }
  }
  else
  {
    LOBYTE(result) = 0; /*0x7adc6c*/
  }
  return result; /*0x7adc6b*/

}
} // namespace gamemd
// 0x7ADCD0
namespace gamemd {
AbstractClass * * HashTable_flat::Insert(ObjectClass * aP1, void * a2)
{

  int HashTable_field_0x04; // eax
  int v7; // ebx
  int v8; // esi
  unsigned int *v9; // esi
  int v10; // edi
  bool v11; // c0
  bool v12; // c3
  unsigned int HashTable_field_0x08; // esi
  int *v14; // ebx
  int v15; // edi
  void *v16; // edi
  unsigned int v17; // edx
  int *v18; // edi
  unsigned int v19; // ebx
  int v20; // esi
  int v21; // edx
  int v22; // ecx
  int v23; // eax
  int v24; // ebx
  unsigned int v25; // esi
  int HashTable_field_0x0C; // edi
  int *v27; // ebx
  void *v28; // edi
  unsigned int v29; // edx
  int *v30; // edi
  unsigned int v31; // ebx
  int v32; // esi
  int v33; // edx
  int v34; // ecx
  int v35; // eax
  int v36; // [esp+10h] [ebp-Ch]
  float v37; // [esp+14h] [ebp-8h]
  char v38; // [esp+20h] [ebp+4h]
  int *v39; // [esp+24h] [ebp+8h]
  int *v40; // [esp+24h] [ebp+8h]

  HashTable_field_0x04 = this->HashTable_field_0x04; /*0x7adcdb*/
  if ( !HashTable_field_0x04 ) /*0x7adce0*/
    return 0; /*0x7adce5*/
  v37 = (double)(unsigned int)(HashTable_field_0x04 - 1) / (double)this->HashTable_field_0x08; /*0x7add10*/
  v7 = ((int (*)(const char **))this->HashTable_field_0x18)(aP1) & ((1 << this->HashTable_field_0x0C) - 1); /*0x7add25*/
  v8 = *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v7); /*0x7add27*/
  v36 = v8; /*0x7add2c*/
  if ( !v8 ) /*0x7add30*/
    return 0; /*0x7add35*/
  if ( (uint8_t)((String *)((String *)v8))->Compare((const char **)(aP1)) ) /*0x7add41*/
  {
    qmemcpy( (void *)(a2), (const void *)(v8 + 4), 0x6Cu); /*0x7add5a*/
    v9 = *(unsigned int **)(*(unsigned int *)this->__pad_0 + 4 * v7); /*0x7add5f*/
    v10 = v9[28]; /*0x7add64*/
    if ( v9 ) /*0x7add67*/
    {
      j_DeleteAndZero( (void *)(*(ObjectClass **)(*(unsigned int *)this->__pad_0 + 4 * v7))); /*0x7add6b*/
      __3_YAXPAX_Z(v9); /*0x7add71*/
    }
    *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v7) = v10; /*0x7add80*/
    v11 = v37 < *(double *)&this->HashTable_field_0x20; /*0x7add86*/
    v12 = v37 == *(double *)&this->HashTable_field_0x20; /*0x7add86*/
    --this->HashTable_field_0x04; /*0x7add8a*/
    if ( v11 || v12 ) /*0x7add8f*/
    {
      HashTable_field_0x08 = this->HashTable_field_0x08; /*0x7add98*/
      if ( HashTable_field_0x08 > this->HashTable_field_0x30 && LOBYTE(this->HashTable_field_0x14) != 1 ) /*0x7addaa*/
      {
        v14 = *(int **)this->__pad_0; /*0x7addb3*/
        v39 = *(int **)this->__pad_0; /*0x7addb8*/
        v15 = this->HashTable_field_0x0C - 1; /*0x7addbe*/
        this->HashTable_field_0x08 = HashTable_field_0x08 >> 1; /*0x7addbf*/
        this->HashTable_field_0x0C = v15; /*0x7addc9*/
        v16 = (void *)__2_YAPAXI_Z(4 * (HashTable_field_0x08 >> 1)); /*0x7addd5*/
        v17 = 4 * this->HashTable_field_0x08; /*0x7addda*/
        *(unsigned int *)this->__pad_0 = (unsigned int)(v16); /*0x7adde1*/
        memset( (void *)(v16), 0, v17); /*0x7adde7*/
        if ( (int)HashTable_field_0x08 > 0 ) /*0x7addf2*/
        {
          v18 = v14; /*0x7addf4*/
          v19 = HashTable_field_0x08; /*0x7addf6*/
          do /*0x7ade2b*/
          {
            v20 = *v18; /*0x7addf8*/
            if ( *v18 ) /*0x7addf8*/
            {
              do /*0x7ade25*/
              {
                v21 = ((int (*)(int))this->HashTable_field_0x18)(v20) /*0x7ade0e*/
                    & ((1 << this->HashTable_field_0x0C) - 1);
                v22 = *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v21); /*0x7ade13*/
                *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v21) = v20; /*0x7ade19*/
                v23 = *(unsigned int *)(v20 + 112); /*0x7ade1b*/
                *(unsigned int *)(v20 + 112) = v22; /*0x7ade1e*/
                v20 = v23; /*0x7ade21*/
              }
              while ( v23 ); /*0x7ade25*/
            }
            ++v18; /*0x7ade27*/
            --v19; /*0x7ade2a*/
          }
          while ( v19 ); /*0x7ade2b*/
          v14 = v39; /*0x7ade2d*/
        }
        __3_YAXPAX_Z(v14); /*0x7ade32*/
      }
    }
    return (gamemd::AbstractClass **)(1); /*0x7ade3d*/
  }
  else
  {
    v24 = *(unsigned int *)(v8 + 112); /*0x7ade46*/
    v38 = 0; /*0x7ade49*/
    if ( v24 ) /*0x7ade50*/
    {
      while ( !(uint8_t)((String *)((String *)v24))->Compare((const char **)(aP1)) ) /*0x7ade5c*/
      {
        v36 = v24; /*0x7ade5e*/
        v24 = *(unsigned int *)(v24 + 112); /*0x7ade62*/
        if ( !v24 ) /*0x7ade67*/
          goto LABEL_24; /*0x7ade67*/
      }
      qmemcpy( (void *)(a2), (const void *)(v24 + 4), 0x6Cu); /*0x7ade7b*/
      *(unsigned int *)(v36 + 112) = *(unsigned int *)(v24 + 112); /*0x7ade80*/
      --this->HashTable_field_0x04; /*0x7ade89*/
      j_DeleteAndZero( (void *)((ObjectClass *)v24)); /*0x7ade90*/
      __3_YAXPAX_Z((void *)v24); /*0x7ade96*/
      v38 = 1; /*0x7ade9e*/
    }
LABEL_24:
    if ( v37 <= *(double *)&this->HashTable_field_0x20 ) /*0x7adeaf*/
    {
      v25 = this->HashTable_field_0x08; /*0x7adeb5*/
      if ( v25 > this->HashTable_field_0x30 && LOBYTE(this->HashTable_field_0x14) != 1 ) /*0x7adec7*/
      {
        HashTable_field_0x0C = this->HashTable_field_0x0C; /*0x7adecd*/
        v27 = *(int **)this->__pad_0; /*0x7aded0*/
        v40 = *(int **)this->__pad_0; /*0x7aded5*/
        this->HashTable_field_0x08 = v25 >> 1; /*0x7adedb*/
        this->HashTable_field_0x0C = HashTable_field_0x0C - 1; /*0x7adee3*/
        v28 = (void *)__2_YAPAXI_Z(4 * (v25 >> 1)); /*0x7adeee*/
        v29 = 4 * this->HashTable_field_0x08; /*0x7adef3*/
        *(unsigned int *)this->__pad_0 = (unsigned int)(v28); /*0x7adefa*/
        memset( (void *)(v28), 0, v29); /*0x7adf00*/
        if ( (int)v25 > 0 ) /*0x7adf0b*/
        {
          v30 = v27; /*0x7adf0d*/
          v31 = v25; /*0x7adf0f*/
          do /*0x7adf44*/
          {
            v32 = *v30; /*0x7adf11*/
            if ( *v30 ) /*0x7adf11*/
            {
              do /*0x7adf3e*/
              {
                v33 = ((int (*)(int))this->HashTable_field_0x18)(v32) /*0x7adf27*/
                    & ((1 << this->HashTable_field_0x0C) - 1);
                v34 = *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v33); /*0x7adf2c*/
                *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v33) = v32; /*0x7adf32*/
                v35 = *(unsigned int *)(v32 + 112); /*0x7adf34*/
                *(unsigned int *)(v32 + 112) = v34; /*0x7adf37*/
                v32 = v35; /*0x7adf3a*/
              }
              while ( v35 ); /*0x7adf3e*/
            }
            ++v30; /*0x7adf40*/
            --v31; /*0x7adf43*/
          }
          while ( v31 ); /*0x7adf44*/
          v27 = v40; /*0x7adf46*/
        }
        __3_YAXPAX_Z(v27); /*0x7adf4b*/
      }
    }
    return (gamemd::AbstractClass **)(v38); /*0x7adf53*/
  }

}
} // namespace gamemd
// 0x7AE1F0
namespace gamemd {
AbstractClass * * HashTable_flat::Lookup(ObjectClass * aP1, TechnoTypeClass * aP2)
{

  int HashTable_field_0x04; // eax
  int v7; // edi
  int v8; // ebp
  unsigned int *v9; // ebp
  int v10; // ebx
  bool v11; // c0
  bool v12; // c3
  unsigned int HashTable_field_0x08; // ebp
  int HashTable_field_0x0C; // edi
  int *v15; // ebx
  void *v16; // edi
  unsigned int v17; // edx
  int v18; // edi
  int v19; // edx
  int v20; // ecx
  int v21; // eax
  int v22; // edi
  unsigned int v23; // ebp
  int *v24; // ebx
  int v25; // edi
  void *v26; // edi
  unsigned int v27; // edx
  int v28; // edi
  int v29; // edx
  int v30; // ecx
  int v31; // eax
  float v32; // [esp+10h] [ebp-8h]
  char v33; // [esp+1Ch] [ebp+4h]
  int *v34; // [esp+20h] [ebp+8h]
  int *v35; // [esp+20h] [ebp+8h]

  HashTable_field_0x04 = this->HashTable_field_0x04; /*0x7ae1fb*/
  if ( !HashTable_field_0x04 ) /*0x7ae200*/
    return 0; /*0x7ae205*/
  v32 = (double)(unsigned int)(HashTable_field_0x04 - 1) / (double)this->HashTable_field_0x08; /*0x7ae230*/
  v7 = ((int (*)(const char **))this->HashTable_field_0x18)(aP1) & ((1 << this->HashTable_field_0x0C) - 1); /*0x7ae244*/
  v8 = *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v7); /*0x7ae246*/
  if ( !v8 ) /*0x7ae24b*/
    return 0; /*0x7ae250*/
  if ( (uint8_t)((String *)((String *)v8))->Compare((const char **)(aP1)) ) /*0x7ae25c*/
  {
    *aP2 = *(unsigned int *)(v8 + 4); /*0x7ae270*/
    v9 = *(unsigned int **)(*(unsigned int *)this->__pad_0 + 4 * v7); /*0x7ae274*/
    v10 = v9[2]; /*0x7ae279*/
    if ( v9 ) /*0x7ae27c*/
    {
      j_DeleteAndZero( (void *)(*(ObjectClass **)(*(unsigned int *)this->__pad_0 + 4 * v7))); /*0x7ae280*/
      __3_YAXPAX_Z(v9); /*0x7ae286*/
    }
    *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v7) = v10; /*0x7ae294*/
    v11 = v32 < *(double *)&this->HashTable_field_0x20; /*0x7ae29a*/
    v12 = v32 == *(double *)&this->HashTable_field_0x20; /*0x7ae29a*/
    --this->HashTable_field_0x04; /*0x7ae29e*/
    if ( v11 || v12 ) /*0x7ae2a3*/
    {
      HashTable_field_0x08 = this->HashTable_field_0x08; /*0x7ae2ac*/
      if ( HashTable_field_0x08 > this->HashTable_field_0x30 && LOBYTE(this->HashTable_field_0x14) != 1 ) /*0x7ae2be*/
      {
        HashTable_field_0x0C = this->HashTable_field_0x0C; /*0x7ae2c0*/
        v15 = *(int **)this->__pad_0; /*0x7ae2c3*/
        v34 = *(int **)this->__pad_0; /*0x7ae2c7*/
        this->HashTable_field_0x08 = HashTable_field_0x08 >> 1; /*0x7ae2cd*/
        this->HashTable_field_0x0C = HashTable_field_0x0C - 1; /*0x7ae2d5*/
        v16 = (void *)__2_YAPAXI_Z(4 * (HashTable_field_0x08 >> 1)); /*0x7ae2e0*/
        v17 = 4 * this->HashTable_field_0x08; /*0x7ae2e5*/
        *(unsigned int *)this->__pad_0 = (unsigned int)(v16); /*0x7ae2ec*/
        memset( (void *)(v16), 0, v17); /*0x7ae2f1*/
        if ( (int)HashTable_field_0x08 > 0 ) /*0x7ae2fc*/
        {
          do /*0x7ae330*/
          {
            v18 = *v15; /*0x7ae2fe*/
            if ( *v15 ) /*0x7ae2fe*/
            {
              do /*0x7ae32a*/
              {
                v19 = ((int (*)(int))this->HashTable_field_0x18)(v18) /*0x7ae314*/
                    & ((1 << this->HashTable_field_0x0C) - 1);
                v20 = *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v19); /*0x7ae318*/
                *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v19) = v18; /*0x7ae31e*/
                v21 = *(unsigned int *)(v18 + 8); /*0x7ae320*/
                *(unsigned int *)(v18 + 8) = v20; /*0x7ae323*/
                v18 = v21; /*0x7ae326*/
              }
              while ( v21 ); /*0x7ae32a*/
            }
            ++v15; /*0x7ae32c*/
            --HashTable_field_0x08; /*0x7ae32f*/
          }
          while ( HashTable_field_0x08 ); /*0x7ae330*/
          v15 = v34; /*0x7ae332*/
        }
        __3_YAXPAX_Z(v15); /*0x7ae337*/
      }
    }
    return (gamemd::AbstractClass **)(1); /*0x7ae342*/
  }
  else
  {
    v22 = *(unsigned int *)(v8 + 8); /*0x7ae34b*/
    v33 = 0; /*0x7ae34e*/
    if ( v22 ) /*0x7ae355*/
    {
      while ( !(uint8_t)((String *)((String *)v22))->Compare((const char **)(aP1)) ) /*0x7ae361*/
      {
        v8 = v22; /*0x7ae363*/
        v22 = *(unsigned int *)(v22 + 8); /*0x7ae365*/
        if ( !v22 ) /*0x7ae36a*/
          goto LABEL_23; /*0x7ae36a*/
      }
      *aP2 = *(unsigned int *)(v22 + 4); /*0x7ae375*/
      *(unsigned int *)(v8 + 8) = *(unsigned int *)(v22 + 8); /*0x7ae37a*/
      --this->HashTable_field_0x04; /*0x7ae383*/
      j_DeleteAndZero( (void *)((ObjectClass *)v22)); /*0x7ae38a*/
      __3_YAXPAX_Z((void *)v22); /*0x7ae390*/
      v33 = 1; /*0x7ae398*/
    }
LABEL_23:
    if ( v32 <= *(double *)&this->HashTable_field_0x20 ) /*0x7ae3a9*/
    {
      v23 = this->HashTable_field_0x08; /*0x7ae3af*/
      if ( v23 > this->HashTable_field_0x30 && LOBYTE(this->HashTable_field_0x14) != 1 ) /*0x7ae3c1*/
      {
        v24 = *(int **)this->__pad_0; /*0x7ae3ca*/
        v35 = *(int **)this->__pad_0; /*0x7ae3ce*/
        v25 = this->HashTable_field_0x0C - 1; /*0x7ae3d4*/
        this->HashTable_field_0x08 = v23 >> 1; /*0x7ae3d5*/
        this->HashTable_field_0x0C = v25; /*0x7ae3df*/
        v26 = (void *)__2_YAPAXI_Z(4 * (v23 >> 1)); /*0x7ae3eb*/
        v27 = 4 * this->HashTable_field_0x08; /*0x7ae3f0*/
        *(unsigned int *)this->__pad_0 = (unsigned int)(v26); /*0x7ae3f7*/
        memset( (void *)(v26), 0, v27); /*0x7ae3fc*/
        if ( (int)v23 > 0 ) /*0x7ae407*/
        {
          do /*0x7ae43b*/
          {
            v28 = *v24; /*0x7ae409*/
            if ( *v24 ) /*0x7ae409*/
            {
              do /*0x7ae435*/
              {
                v29 = ((int (*)(int))this->HashTable_field_0x18)(v28) /*0x7ae41f*/
                    & ((1 << this->HashTable_field_0x0C) - 1);
                v30 = *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v29); /*0x7ae423*/
                *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v29) = v28; /*0x7ae429*/
                v31 = *(unsigned int *)(v28 + 8); /*0x7ae42b*/
                *(unsigned int *)(v28 + 8) = v30; /*0x7ae42e*/
                v28 = v31; /*0x7ae431*/
              }
              while ( v31 ); /*0x7ae435*/
            }
            ++v24; /*0x7ae437*/
            --v23; /*0x7ae43a*/
          }
          while ( v23 ); /*0x7ae43b*/
          v24 = v35; /*0x7ae43d*/
        }
        __3_YAXPAX_Z(v24); /*0x7ae442*/
      }
    }
    return (gamemd::AbstractClass **)(v33); /*0x7ae44a*/
  }

}
} // namespace gamemd
// 0x7AE510
namespace gamemd {
AbstractClass * * HashTable_flat::Grow()
{

  int HashTable_field_0x08; // esi
  unsigned int *v3; // ebp
  int v4; // edi
  void *v5; // edi
  unsigned int v6; // edx
  int *v7; // edi
  int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  unsigned int *v13; // [esp+4h] [ebp-4h]

  if ( LOBYTE(this->HashTable_field_0x14) != 1 ) /*0x7ae518*/
  {
    HashTable_field_0x08 = this->HashTable_field_0x08; /*0x7ae520*/
    v3 = *(unsigned int **)this->__pad_0; /*0x7ae523*/
    v4 = this->HashTable_field_0x0C + 1; /*0x7ae52c*/
    this->HashTable_field_0x08 = 2 * HashTable_field_0x08; /*0x7ae52d*/
    v13 = v3; /*0x7ae530*/
    this->HashTable_field_0x0C = v4; /*0x7ae538*/
    v5 = (void *)__2_YAPAXI_Z(8 * HashTable_field_0x08); /*0x7ae543*/
    v6 = 4 * this->HashTable_field_0x08; /*0x7ae548*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(v5); /*0x7ae54f*/
    memset( (void *)(v5), 0, v6); /*0x7ae554*/
    if ( HashTable_field_0x08 > 0 ) /*0x7ae55f*/
    {
      v7 = (int *)(v3); /*0x7ae561*/
      v8 = HashTable_field_0x08; /*0x7ae563*/
      do /*0x7ae597*/
      {
        v9 = *v7; /*0x7ae565*/
        if ( *v7 ) /*0x7ae565*/
        {
          do /*0x7ae591*/
          {
            v10 = ((int (*)(int))this->HashTable_field_0x18)(v9) & ((1 << this->HashTable_field_0x0C) - 1); /*0x7ae57b*/
            v11 = *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v10); /*0x7ae57f*/
            *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v10) = v9; /*0x7ae585*/
            v12 = *(unsigned int *)(v9 + 8); /*0x7ae587*/
            *(unsigned int *)(v9 + 8) = v11; /*0x7ae58a*/
            v9 = v12; /*0x7ae58d*/
          }
          while ( v12 ); /*0x7ae591*/
        }
        ++v7; /*0x7ae593*/
        --v8; /*0x7ae596*/
      }
      while ( v8 ); /*0x7ae597*/
      v3 = v13; /*0x7ae599*/
    }
    __3_YAXPAX_Z(v3); /*0x7ae59e*/
  }

}
} // namespace gamemd
// 0x7AE950
namespace gamemd {
AbstractClass * * HashTable_flat::FindWOLHashTableEntry(const char ** a2, void * a3)
{

  int HashTable_field_0x04; // eax
  int v7; // ebx
  int v8; // esi
  unsigned int *v9; // esi
  int v10; // edi
  bool v11; // c0
  bool v12; // c3
  unsigned int HashTable_field_0x08; // esi
  int *v14; // ebx
  int v15; // edi
  void *v16; // edi
  unsigned int v17; // edx
  int *v18; // edi
  unsigned int v19; // ebx
  int v20; // esi
  int v21; // edx
  int v22; // ecx
  int v23; // eax
  int v24; // ebx
  unsigned int v25; // esi
  int HashTable_field_0x0C; // edi
  int *v27; // ebx
  void *v28; // edi
  unsigned int v29; // edx
  int *v30; // edi
  unsigned int v31; // ebx
  int v32; // esi
  int v33; // edx
  int v34; // ecx
  int v35; // eax
  int v36; // [esp+10h] [ebp-Ch]
  float v37; // [esp+14h] [ebp-8h]
  char v38; // [esp+20h] [ebp+4h]
  int *v39; // [esp+24h] [ebp+8h]
  int *v40; // [esp+24h] [ebp+8h]

  HashTable_field_0x04 = this->HashTable_field_0x04; /*0x7ae95b*/
  if ( !HashTable_field_0x04 ) /*0x7ae960*/
    return 0; /*0x7ae965*/
  v37 = (double)(unsigned int)(HashTable_field_0x04 - 1) / (double)this->HashTable_field_0x08; /*0x7ae990*/
  v7 = ((int (*)(const char **))this->HashTable_field_0x18)(a2) & ((1 << this->HashTable_field_0x0C) - 1); /*0x7ae9a5*/
  v8 = *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v7); /*0x7ae9a7*/
  v36 = v8; /*0x7ae9ac*/
  if ( !v8 ) /*0x7ae9b0*/
    return 0; /*0x7ae9b5*/
  if ( (uint8_t)((String *)((String *)v8))->Compare( (const char **)(a2)) ) /*0x7ae9c1*/
  {
    qmemcpy( (void *)(a3), (const void *)(v8 + 4), 0x10Cu); /*0x7ae9da*/
    v9 = *(unsigned int **)(*(unsigned int *)this->__pad_0 + 4 * v7); /*0x7ae9df*/
    v10 = v9[68]; /*0x7ae9e4*/
    if ( v9 ) /*0x7ae9ea*/
    {
      j_DeleteAndZero( (void *)(*(ObjectClass **)(*(unsigned int *)this->__pad_0 + 4 * v7))); /*0x7ae9ee*/
      __3_YAXPAX_Z(v9); /*0x7ae9f4*/
    }
    *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v7) = v10; /*0x7aea03*/
    v11 = v37 < *(double *)&this->HashTable_field_0x20; /*0x7aea09*/
    v12 = v37 == *(double *)&this->HashTable_field_0x20; /*0x7aea09*/
    --this->HashTable_field_0x04; /*0x7aea0d*/
    if ( v11 || v12 ) /*0x7aea12*/
    {
      HashTable_field_0x08 = this->HashTable_field_0x08; /*0x7aea1b*/
      if ( HashTable_field_0x08 > this->HashTable_field_0x30 && LOBYTE(this->HashTable_field_0x14) != 1 ) /*0x7aea2d*/
      {
        v14 = *(int **)this->__pad_0; /*0x7aea36*/
        v39 = *(int **)this->__pad_0; /*0x7aea3b*/
        v15 = this->HashTable_field_0x0C - 1; /*0x7aea41*/
        this->HashTable_field_0x08 = HashTable_field_0x08 >> 1; /*0x7aea42*/
        this->HashTable_field_0x0C = v15; /*0x7aea4c*/
        v16 = (void *)__2_YAPAXI_Z(4 * (HashTable_field_0x08 >> 1)); /*0x7aea58*/
        v17 = 4 * this->HashTable_field_0x08; /*0x7aea5d*/
        *(unsigned int *)this->__pad_0 = (unsigned int)(v16); /*0x7aea64*/
        memset( (void *)(v16), 0, v17); /*0x7aea6a*/
        if ( (int)HashTable_field_0x08 > 0 ) /*0x7aea75*/
        {
          v18 = v14; /*0x7aea77*/
          v19 = HashTable_field_0x08; /*0x7aea79*/
          do /*0x7aeab4*/
          {
            v20 = *v18; /*0x7aea7b*/
            if ( *v18 ) /*0x7aea7b*/
            {
              do /*0x7aeaae*/
              {
                v21 = ((int (*)(int))this->HashTable_field_0x18)(v20) /*0x7aea91*/
                    & ((1 << this->HashTable_field_0x0C) - 1);
                v22 = *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v21); /*0x7aea96*/
                *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v21) = v20; /*0x7aea9c*/
                v23 = *(unsigned int *)(v20 + 272); /*0x7aea9e*/
                *(unsigned int *)(v20 + 272) = v22; /*0x7aeaa4*/
                v20 = v23; /*0x7aeaaa*/
              }
              while ( v23 ); /*0x7aeaae*/
            }
            ++v18; /*0x7aeab0*/
            --v19; /*0x7aeab3*/
          }
          while ( v19 ); /*0x7aeab4*/
          v14 = v39; /*0x7aeab6*/
        }
        __3_YAXPAX_Z(v14); /*0x7aeabb*/
      }
    }
    return (gamemd::AbstractClass **)(1); /*0x7aeac6*/
  }
  else
  {
    v24 = *(unsigned int *)(v8 + 272); /*0x7aeacf*/
    v38 = 0; /*0x7aead5*/
    if ( v24 ) /*0x7aeadc*/
    {
      while ( !(uint8_t)((String *)((String *)v24))->Compare( (const char **)(a2)) ) /*0x7aeae8*/
      {
        v36 = v24; /*0x7aeaea*/
        v24 = *(unsigned int *)(v24 + 272); /*0x7aeaee*/
        if ( !v24 ) /*0x7aeaf6*/
          goto LABEL_24; /*0x7aeaf6*/
      }
      qmemcpy( (void *)(a3), (const void *)(v24 + 4), 0x10Cu); /*0x7aeb0a*/
      *(unsigned int *)(v36 + 272) = *(unsigned int *)(v24 + 272); /*0x7aeb12*/
      --this->HashTable_field_0x04; /*0x7aeb1e*/
      j_DeleteAndZero( (void *)((ObjectClass *)v24)); /*0x7aeb25*/
      __3_YAXPAX_Z((void *)v24); /*0x7aeb2b*/
      v38 = 1; /*0x7aeb33*/
    }
LABEL_24:
    if ( v37 <= *(double *)&this->HashTable_field_0x20 ) /*0x7aeb44*/
    {
      v25 = this->HashTable_field_0x08; /*0x7aeb4a*/
      if ( v25 > this->HashTable_field_0x30 && LOBYTE(this->HashTable_field_0x14) != 1 ) /*0x7aeb5c*/
      {
        HashTable_field_0x0C = this->HashTable_field_0x0C; /*0x7aeb62*/
        v27 = *(int **)this->__pad_0; /*0x7aeb65*/
        v40 = *(int **)this->__pad_0; /*0x7aeb6a*/
        this->HashTable_field_0x08 = v25 >> 1; /*0x7aeb70*/
        this->HashTable_field_0x0C = HashTable_field_0x0C - 1; /*0x7aeb78*/
        v28 = (void *)__2_YAPAXI_Z(4 * (v25 >> 1)); /*0x7aeb83*/
        v29 = 4 * this->HashTable_field_0x08; /*0x7aeb88*/
        *(unsigned int *)this->__pad_0 = (unsigned int)(v28); /*0x7aeb8f*/
        memset( (void *)(v28), 0, v29); /*0x7aeb95*/
        if ( (int)v25 > 0 ) /*0x7aeba0*/
        {
          v30 = v27; /*0x7aeba2*/
          v31 = v25; /*0x7aeba4*/
          do /*0x7aebdf*/
          {
            v32 = *v30; /*0x7aeba6*/
            if ( *v30 ) /*0x7aeba6*/
            {
              do /*0x7aebd9*/
              {
                v33 = ((int (*)(int))this->HashTable_field_0x18)(v32) /*0x7aebbc*/
                    & ((1 << this->HashTable_field_0x0C) - 1);
                v34 = *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v33); /*0x7aebc1*/
                *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v33) = v32; /*0x7aebc7*/
                v35 = *(unsigned int *)(v32 + 272); /*0x7aebc9*/
                *(unsigned int *)(v32 + 272) = v34; /*0x7aebcf*/
                v32 = v35; /*0x7aebd5*/
              }
              while ( v35 ); /*0x7aebd9*/
            }
            ++v30; /*0x7aebdb*/
            --v31; /*0x7aebde*/
          }
          while ( v31 ); /*0x7aebdf*/
          v27 = v40; /*0x7aebe1*/
        }
        __3_YAXPAX_Z(v27); /*0x7aebe6*/
      }
    }
    return (gamemd::AbstractClass **)(v38); /*0x7aebee*/
  }

}
} // namespace gamemd
// 0x7AEC00
namespace gamemd {
int HashTable_flat::Shrink()
{

  unsigned int HashTable_field_0x08; // esi
  int result; // eax
  int *v4; // ebp
  int HashTable_field_0x0C; // edi
  void *v6; // edi
  unsigned int v7; // edx
  int *v8; // edi
  unsigned int v9; // ebp
  int v10; // esi
  int v11; // edx
  int v12; // ecx
  int v13; // eax
  int *v14; // [esp+8h] [ebp-4h]

  HashTable_field_0x08 = this->HashTable_field_0x08; /*0x7aec05*/
  result = this->HashTable_field_0x30; /*0x7aec08*/
  if ( HashTable_field_0x08 > result && LOBYTE(this->HashTable_field_0x14) != 1 ) /*0x7aec17*/
  {
    v4 = *(int **)this->__pad_0; /*0x7aec20*/
    HashTable_field_0x0C = this->HashTable_field_0x0C; /*0x7aec23*/
    v14 = *(int **)this->__pad_0; /*0x7aec26*/
    this->HashTable_field_0x08 = HashTable_field_0x08 >> 1; /*0x7aec2c*/
    this->HashTable_field_0x0C = HashTable_field_0x0C - 1; /*0x7aec34*/
    v6 = (void *)__2_YAPAXI_Z(4 * (HashTable_field_0x08 >> 1)); /*0x7aec3f*/
    v7 = 4 * this->HashTable_field_0x08; /*0x7aec44*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(v6); /*0x7aec4b*/
    memset(v6, 0, v7); /*0x7aec50*/
    if ( (int)HashTable_field_0x08 > 0 ) /*0x7aec5b*/
    {
      v8 = v4; /*0x7aec5d*/
      v9 = HashTable_field_0x08; /*0x7aec5f*/
      do /*0x7aec99*/
      {
        v10 = *v8; /*0x7aec61*/
        if ( *v8 ) /*0x7aec61*/
        {
          do /*0x7aec93*/
          {
            v11 = ((int (*)(int))this->HashTable_field_0x18)(v10) & ((1 << this->HashTable_field_0x0C) - 1); /*0x7aec77*/
            v12 = *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v11); /*0x7aec7b*/
            *(unsigned int *)(*(unsigned int *)this->__pad_0 + 4 * v11) = v10; /*0x7aec81*/
            v13 = *(unsigned int *)(v10 + 272); /*0x7aec83*/
            *(unsigned int *)(v10 + 272) = v12; /*0x7aec89*/
            v10 = v13; /*0x7aec8f*/
          }
          while ( v13 ); /*0x7aec93*/
        }
        ++v8; /*0x7aec95*/
        --v9; /*0x7aec98*/
      }
      while ( v9 ); /*0x7aec99*/
      v4 = v14; /*0x7aec9b*/
    }
    __3_YAXPAX_Z(v4); /*0x7aeca0*/
  }
  return result; /*0x7aecaa*/

}
} // namespace gamemd
// 0x625070
namespace gamemd {
int HashTable_flat::ComputeHash(int a2)
{

  return ((int (*)(int))*((char *)this + 6))(a2) & ((1 << *((char *)this + 3)) - 1); /*0x625084*/

}
} // namespace gamemd
