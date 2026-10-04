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
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x624760)
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
    memset(v5, 0, v6); /*0x625004*/
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
        v14 = (int *)((unsigned int)(*(int **)this->__pad_0));
        v35 = (int *)((unsigned int)(*(int **)this->__pad_0));
        v15 = (unsigned int)(this->HashTable_field_0x0C - 1);
        this->HashTable_field_0x08 = (unsigned int)(HashTable_field_0x08 >> 1);
        this->HashTable_field_0x0C = (unsigned int)(v15);
        v16 = (void *)__2_YAPAXI_Z(4 * (HashTable_field_0x08 >> 1)); /*0x625188*/
        v17 = 4 * this->HashTable_field_0x08; /*0x62518d*/
        *(unsigned int *)this->__pad_0 = (unsigned int)(v16); /*0x625194*/
        memset(v16, 0, v17); /*0x625199*/
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
        v25 = (int *)((unsigned int)(*(int **)this->__pad_0));
        v36 = (int *)((unsigned int)(*(int **)this->__pad_0));
        this->HashTable_field_0x08 = (unsigned int)(v23 >> 1);
        this->HashTable_field_0x0C = (unsigned int)(HashTable_field_0x0C - 1);
        v26 = (void *)__2_YAPAXI_Z(4 * (v23 >> 1)); /*0x625282*/
        v27 = 4 * this->HashTable_field_0x08; /*0x625287*/
        *(unsigned int *)this->__pad_0 = (unsigned int)(v26); /*0x62528e*/
        memset(v26, 0, v27); /*0x625293*/
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
    v3 = (int *)((unsigned int)(*(int **)this->__pad_0));
    HashTable_field_0x0C = (unsigned int)(this->HashTable_field_0x0C);
    v13 = (int *)((unsigned int)(*(int **)this->__pad_0));
    this->HashTable_field_0x08 = (unsigned int)(HashTable_field_0x08 >> 1);
    this->HashTable_field_0x0C = (unsigned int)(HashTable_field_0x0C - 1);
    v5 = (void *)__2_YAPAXI_Z(4 * (HashTable_field_0x08 >> 1)); /*0x6257bf*/
    v6 = 4 * this->HashTable_field_0x08; /*0x6257c4*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(v5); /*0x6257cb*/
    memset(v5, 0, v6); /*0x6257d0*/
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
    v3 = (int *)((unsigned int)(*(int **)this->__pad_0));
    HashTable_field_0x0C = (unsigned int)(this->HashTable_field_0x0C);
    v13 = (int *)((unsigned int)(*(int **)this->__pad_0));
    this->HashTable_field_0x08 = (unsigned int)(HashTable_field_0x08 >> 1);
    this->HashTable_field_0x0C = (unsigned int)(HashTable_field_0x0C - 1);
    v5 = (void *)__2_YAPAXI_Z(4 * (HashTable_field_0x08 >> 1)); /*0x62586f*/
    v6 = 4 * this->HashTable_field_0x08; /*0x625874*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(v5); /*0x62587b*/
    memset(v5, 0, v6); /*0x625880*/
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
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x625FB0)
}
} // namespace gamemd
// 0x6B9530
namespace gamemd {
CampaignClass * * HashTable_flat::Clear(void *a1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6B9530)
}
} // namespace gamemd
// 0x6BA140
namespace gamemd {
int HashTable_flat::Find(const char * a1, ConvertClass * aP2)
{

  int v4; // esi
  const void *v6; // esi
  int v7; // esi

  ((String *)((String *)&a1))->Assign(a1); /*0x6ba14c*/
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
    while ( !(uint8_t)((String *)((String *)v4))->Compare(&a1) ) /*0x6ba1b8*/
    {
      v4 = *(unsigned int *)(v4 + 776); /*0x6ba1ba*/
      if ( !v4 ) /*0x6ba1c2*/
        goto LABEL_7; /*0x6ba1c2*/
    }
    v6 = (const void *)(v4 + 4); /*0x6ba1d7*/
    if ( v6 ) /*0x6ba1dd*/
      qmemcpy(&dword_B0B948, v6, 0x304u); /*0x6ba1e9*/
    if ( aP2 ) /*0x6ba1f1*/
      qmemcpy(aP2, &unk_B0B94C, 0x300u); /*0x6ba1fd*/
    v7 = dword_B0B948; /*0x6ba1ff*/
    j_DeleteAndZero((ObjectClass *)&a1); /*0x6ba209*/
    return v7; /*0x6ba20e*/
  }
  else
  {
LABEL_7:
    j_DeleteAndZero((ObjectClass *)&a1); /*0x6ba1c4*/
    return 0; /*0x6ba1cd*/
  }

}
} // namespace gamemd
// 0x6BA230
namespace gamemd {
CampaignClass * * HashTable_flat::RemoveEntry(const char * a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6BA230)
}
} // namespace gamemd
// 0x6BAC40
namespace gamemd {
AbstractClass * * HashTable_flat::RemoveHashTableEntry(ObjectClass * aP1, void * a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6BAC40)
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
    v3 = (int *)((unsigned int)(*(int **)this->__pad_0));
    HashTable_field_0x0C = (unsigned int)(this->HashTable_field_0x0C);
    v13 = (int *)((unsigned int)(*(int **)this->__pad_0));
    this->HashTable_field_0x08 = (unsigned int)(HashTable_field_0x08 >> 1);
    this->HashTable_field_0x0C = (unsigned int)(HashTable_field_0x0C - 1);
    v5 = (void *)__2_YAPAXI_Z(4 * (HashTable_field_0x08 >> 1)); /*0x6baf2f*/
    v6 = 4 * this->HashTable_field_0x08; /*0x6baf34*/
    *(unsigned int *)this->__pad_0 = (unsigned int)(v5); /*0x6baf3b*/
    memset(v5, 0, v6); /*0x6baf40*/
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
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x724730)
}
} // namespace gamemd
// 0x7ACE60
namespace gamemd {
unsigned int HashTable_flat::CleanupAndResize()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7ACE60)
}
} // namespace gamemd
// 0x7ACF70
namespace gamemd {
unsigned int HashTable_flat::Rebuild()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7ACF70)
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
        result = ((String *)((String *)v6))->Compare(a2); /*0x7adc9b*/
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
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7ADCD0)
}
} // namespace gamemd
// 0x7AE1F0
namespace gamemd {
AbstractClass * * HashTable_flat::Lookup(ObjectClass * aP1, TechnoTypeClass * aP2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7AE1F0)
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
    memset(v5, 0, v6); /*0x7ae554*/
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
  if ( (uint8_t)((String *)((String *)v8))->Compare(a2) ) /*0x7ae9c1*/
  {
    qmemcpy(a3, (const void *)(v8 + 4), 0x10Cu); /*0x7ae9da*/
    v9 = *(unsigned int **)(*(unsigned int *)this->__pad_0 + 4 * v7); /*0x7ae9df*/
    v10 = v9[68]; /*0x7ae9e4*/
    if ( v9 ) /*0x7ae9ea*/
    {
      j_DeleteAndZero(*(ObjectClass **)(*(unsigned int *)this->__pad_0 + 4 * v7)); /*0x7ae9ee*/
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
        memset(v16, 0, v17); /*0x7aea6a*/
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
      while ( !(uint8_t)((String *)((String *)v24))->Compare(a2) ) /*0x7aeae8*/
      {
        v36 = v24; /*0x7aeaea*/
        v24 = *(unsigned int *)(v24 + 272); /*0x7aeaee*/
        if ( !v24 ) /*0x7aeaf6*/
          goto LABEL_24; /*0x7aeaf6*/
      }
      qmemcpy(a3, (const void *)(v24 + 4), 0x10Cu); /*0x7aeb0a*/
      *(unsigned int *)(v36 + 272) = *(unsigned int *)(v24 + 272); /*0x7aeb12*/
      --this->HashTable_field_0x04; /*0x7aeb1e*/
      j_DeleteAndZero((ObjectClass *)v24); /*0x7aeb25*/
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
        memset(v28, 0, v29); /*0x7aeb95*/
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
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x625070)
}
} // namespace gamemd
