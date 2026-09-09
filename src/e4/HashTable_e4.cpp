// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x624760
char HashTable::Get(IUnknown * aP1, IUnknown * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall HashTable::Get(_DWORD *this, IUnknown *aP1, IUnknown *aP2)
{
  _DWORD *v4; // eax

  if ( !*(this + 1) ) /*0x624764*/
    return 0; /*0x62476c*/
  v4 = *(_DWORD **)(*this + 4 * (((int (__thiscall *)(IUnknown *))*(this + 6))(aP1) & ((1 << *(this + 3)) - 1))); /*0x62478a*/
  if ( !v4 ) /*0x62478f*/
    return 0; /*0x624792*/
  while ( *v4 != aP1->field_0 ) /*0x62479c*/
  {
    v4 = (_DWORD *)v4[129]; /*0x62479e*/
    if ( !v4 ) /*0x6247a6*/
      return 0; /*0x6247ac*/
  }
  aP2->field_0 = (int)(v4 + 1); /*0x6247c3*/
  return 1; /*0x62476b*/
}
}

// 0x624FC0
void HashTable::Grow2()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall HashTable_Grow2(_DWORD *this)
{
  int v2; // esi
  _DWORD *v3; // ebp
  int v4; // edi
  void *v5; // edi
  unsigned int v6; // edx
  int *v7; // edi
  int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  _DWORD *v13; // [esp+4h] [ebp-4h]

  if ( (unsigned char)this->HashTable_field_0x14 != 1 ) /*0x624fc8*/
  {
    v2 = *(this + 2); /*0x624fd0*/
    v3 = (_DWORD *)*this; /*0x624fd3*/
    v4 = *(this + 3) + 1; /*0x624fdc*/
    *(this + 2) = 2 * v2; /*0x624fdd*/
    v13 = v3; /*0x624fe0*/
    *(this + 3) = v4; /*0x624fe8*/
    v5 = __2_YAPAXI_Z(8 * v2); /*0x624ff3*/
    v6 = 4 * *(this + 2); /*0x624ff8*/
    *this = v5; /*0x624fff*/
    memset(v5, 0, v6); /*0x625004*/
    if ( v2 > 0 ) /*0x62500f*/
    {
      v7 = v3; /*0x625011*/
      v8 = v2; /*0x625013*/
      do /*0x62504d*/
      {
        v9 = *v7; /*0x625015*/
        if ( *v7 ) /*0x625015*/
        {
          do /*0x625047*/
          {
            v10 = ((int (__thiscall *)(int))*(this + 6))(v9) & ((1 << *(this + 3)) - 1); /*0x62502b*/
            v11 = *(_DWORD *)(*this + 4 * v10); /*0x62502f*/
            *(_DWORD *)(*this + 4 * v10) = v9; /*0x625035*/
            v12 = *(_DWORD *)(v9 + 516); /*0x625037*/
            *(_DWORD *)(v9 + 516) = v11; /*0x62503d*/
            v9 = v12; /*0x625043*/
          }
          while ( v12 ); /*0x625047*/
        }
        ++v7; /*0x625049*/
        --v8; /*0x62504c*/
      }
      while ( v8 ); /*0x62504d*/
      v3 = v13; /*0x62504f*/
    }
    __3_YAXPAX_Z(v3); /*0x625054*/
  }
}
}

// 0x625070
int HashTable::ComputeHash(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall HashTable_ComputeHash(int this, int a2)
{
  return (*(int (__thiscall **)(int))(this + 24))(a2) & ((1 << this->HashTable_field_0x0C) - 1); /*0x625084*/
}
}

// 0x625090
char HashTable::RemoveAndResize(unsigned int * a2, unsigned char * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall HashTable::RemoveAndResize(_DWORD *this, _DWORD *a2, _BYTE *a3)
{
  int v4; // eax
  int v7; // edi
  _DWORD *v8; // ecx
  int v9; // edx
  int v10; // ebp
  bool v11; // c0
  bool v12; // c3
  unsigned int v13; // ebp
  int *v14; // ebx
  int v15; // ecx
  void *v16; // edi
  unsigned int v17; // edx
  int v18; // edi
  int v19; // edx
  int v20; // ecx
  int v21; // eax
  _DWORD *v22; // eax
  unsigned int v23; // ebp
  int v24; // edi
  int *v25; // ebx
  void *v26; // edi
  unsigned int v27; // edx
  int v28; // edi
  int v29; // edx
  int v30; // ecx
  int v31; // eax
  _DWORD *v32; // [esp-4h] [ebp-1Ch]
  float v33; // [esp+10h] [ebp-8h]
  char v34; // [esp+1Ch] [ebp+4h]
  int *v35; // [esp+20h] [ebp+8h]
  int *v36; // [esp+20h] [ebp+8h]

  v4 = *(this + 1); /*0x62509b*/
  if ( !v4 ) /*0x6250a0*/
    return 0; /*0x6250a5*/
  v33 = (double)(unsigned int)(v4 - 1) / (double)(int)*(this + 2); /*0x6250d0*/
  v7 = ((int (__thiscall *)(_DWORD *))*(this + 6))(a2) & ((1 << *(this + 3)) - 1); /*0x6250e4*/
  v8 = *(_DWORD **)(*this + 4 * v7); /*0x6250e6*/
  if ( !v8 ) /*0x6250eb*/
    return 0; /*0x6250f0*/
  v9 = a2[1]; /*0x6250f9*/
  if ( v9 == v8[1] && *a2 == *v8 ) /*0x62510e*/
  {
    *a3 = *((_BYTE *)v8 + 8); /*0x62511b*/
    v32 = *(_DWORD **)(*this + 4 * v7); /*0x625122*/
    v10 = v32[3]; /*0x625123*/
    __3_YAXPAX_Z(v32); /*0x625126*/
    *(_DWORD *)(*this + 4 * v7) = v10; /*0x625134*/
    v11 = v33 < *((double *)this + 4); /*0x62513a*/
    v12 = v33 == *((double *)this + 4); /*0x62513a*/
    --*(this + 1); /*0x62513e*/
    if ( v11 || v12 ) /*0x625143*/
    {
      v13 = *(this + 2); /*0x62514c*/
      if ( v13 > *(this + 12) && (unsigned char)this->HashTable_field_0x14 != 1 ) /*0x62515e*/
      {
        v14 = (int *)*this; /*0x625167*/
        v35 = (int *)*this; /*0x62516b*/
        v15 = *(this + 3) - 1; /*0x625171*/
        *(this + 2) = v13 >> 1; /*0x625172*/
        *(this + 3) = v15; /*0x62517c*/
        v16 = __2_YAPAXI_Z(4 * (v13 >> 1)); /*0x625188*/
        v17 = 4 * *(this + 2); /*0x62518d*/
        *this = v16; /*0x625194*/
        memset(v16, 0, v17); /*0x625199*/
        if ( (int)v13 > 0 ) /*0x6251a4*/
        {
          do /*0x6251d8*/
          {
            v18 = *v14; /*0x6251a6*/
            if ( *v14 ) /*0x6251a6*/
            {
              do /*0x6251d2*/
              {
                v19 = ((int (__thiscall *)(int))*(this + 6))(v18) & ((1 << *(this + 3)) - 1); /*0x6251bc*/
                v20 = *(_DWORD *)(*this + 4 * v19); /*0x6251c0*/
                *(_DWORD *)(*this + 4 * v19) = v18; /*0x6251c6*/
                v21 = *(_DWORD *)(v18 + 12); /*0x6251c8*/
                *(_DWORD *)(v18 + 12) = v20; /*0x6251cb*/
                v18 = v21; /*0x6251ce*/
              }
              while ( v21 ); /*0x6251d2*/
            }
            ++v14; /*0x6251d4*/
            --v13; /*0x6251d7*/
          }
          while ( v13 ); /*0x6251d8*/
          v14 = v35; /*0x6251da*/
        }
        __3_YAXPAX_Z(v14); /*0x6251df*/
      }
    }
    return 1; /*0x6251ea*/
  }
  else
  {
    v22 = (_DWORD *)v8[3]; /*0x6251f3*/
    v34 = 0; /*0x6251f6*/
    if ( v22 ) /*0x6251fd*/
    {
      while ( v9 != v22[1] || *a2 != *v22 ) /*0x62520b*/
      {
        v8 = v22; /*0x62520d*/
        v22 = (_DWORD *)v22[3]; /*0x62520f*/
        if ( !v22 ) /*0x625214*/
          goto LABEL_23; /*0x625214*/
      }
      *a3 = *((_BYTE *)v22 + 8); /*0x625220*/
      v8[3] = v22[3]; /*0x625225*/
      --*(this + 1); /*0x62522c*/
      __3_YAXPAX_Z(v22); /*0x62522f*/
      v34 = 1; /*0x625237*/
    }
LABEL_23:
    if ( v33 <= *((double *)this + 4) ) /*0x625248*/
    {
      v23 = *(this + 2); /*0x62524e*/
      if ( v23 > *(this + 12) && (unsigned char)this->HashTable_field_0x14 != 1 ) /*0x625260*/
      {
        v24 = *(this + 3); /*0x625262*/
        v25 = (int *)*this; /*0x625265*/
        v36 = (int *)*this; /*0x625269*/
        *(this + 2) = v23 >> 1; /*0x62526f*/
        *(this + 3) = v24 - 1; /*0x625277*/
        v26 = __2_YAPAXI_Z(4 * (v23 >> 1)); /*0x625282*/
        v27 = 4 * *(this + 2); /*0x625287*/
        *this = v26; /*0x62528e*/
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
                v29 = ((int (__thiscall *)(int))*(this + 6))(v28) & ((1 << *(this + 3)) - 1); /*0x6252b6*/
                v30 = *(_DWORD *)(*this + 4 * v29); /*0x6252ba*/
                *(_DWORD *)(*this + 4 * v29) = v28; /*0x6252c0*/
                v31 = *(_DWORD *)(v28 + 12); /*0x6252c2*/
                *(_DWORD *)(v28 + 12) = v30; /*0x6252c5*/
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
    return v34; /*0x6252e1*/
  }
}
}

// 0x625780
void HashTable::Shrink2()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall HashTable_Shrink2(_DWORD *this)
{
  unsigned int v2; // esi
  int *v3; // ebp
  int v4; // edi
  void *v5; // edi
  unsigned int v6; // edx
  int *v7; // edi
  unsigned int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  int *v13; // [esp+8h] [ebp-4h]

  v2 = *(this + 2); /*0x625785*/
  if ( v2 > *(this + 12) && (unsigned char)this->HashTable_field_0x14 != 1 ) /*0x625797*/
  {
    v3 = (int *)*this; /*0x6257a0*/
    v4 = *(this + 3); /*0x6257a3*/
    v13 = (int *)*this; /*0x6257a6*/
    *(this + 2) = v2 >> 1; /*0x6257ac*/
    *(this + 3) = v4 - 1; /*0x6257b4*/
    v5 = __2_YAPAXI_Z(4 * (v2 >> 1)); /*0x6257bf*/
    v6 = 4 * *(this + 2); /*0x6257c4*/
    *this = v5; /*0x6257cb*/
    memset(v5, 0, v6); /*0x6257d0*/
    if ( (int)v2 > 0 ) /*0x6257db*/
    {
      v7 = v3; /*0x6257dd*/
      v8 = v2; /*0x6257df*/
      do /*0x625813*/
      {
        v9 = *v7; /*0x6257e1*/
        if ( *v7 ) /*0x6257e1*/
        {
          do /*0x62580d*/
          {
            v10 = ((int (__thiscall *)(int))*(this + 6))(v9) & ((1 << *(this + 3)) - 1); /*0x6257f7*/
            v11 = *(_DWORD *)(*this + 4 * v10); /*0x6257fb*/
            *(_DWORD *)(*this + 4 * v10) = v9; /*0x625801*/
            v12 = *(_DWORD *)(v9 + 8); /*0x625803*/
            *(_DWORD *)(v9 + 8) = v11; /*0x625806*/
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
}

// 0x625830
void HashTable::Rebuild2()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall HashTable_Rebuild2(_DWORD *this)
{
  unsigned int v2; // esi
  int *v3; // ebp
  int v4; // edi
  void *v5; // edi
  unsigned int v6; // edx
  int *v7; // edi
  unsigned int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  int *v13; // [esp+8h] [ebp-4h]

  v2 = *(this + 2); /*0x625835*/
  if ( v2 > *(this + 12) && (unsigned char)this->HashTable_field_0x14 != 1 ) /*0x625847*/
  {
    v3 = (int *)*this; /*0x625850*/
    v4 = *(this + 3); /*0x625853*/
    v13 = (int *)*this; /*0x625856*/
    *(this + 2) = v2 >> 1; /*0x62585c*/
    *(this + 3) = v4 - 1; /*0x625864*/
    v5 = __2_YAPAXI_Z(4 * (v2 >> 1)); /*0x62586f*/
    v6 = 4 * *(this + 2); /*0x625874*/
    *this = v5; /*0x62587b*/
    memset(v5, 0, v6); /*0x625880*/
    if ( (int)v2 > 0 ) /*0x62588b*/
    {
      v7 = v3; /*0x62588d*/
      v8 = v2; /*0x62588f*/
      do /*0x6258c9*/
      {
        v9 = *v7; /*0x625891*/
        if ( *v7 ) /*0x625891*/
        {
          do /*0x6258c3*/
          {
            v10 = ((int (__thiscall *)(int))*(this + 6))(v9) & ((1 << *(this + 3)) - 1); /*0x6258a7*/
            v11 = *(_DWORD *)(*this + 4 * v10); /*0x6258ab*/
            *(_DWORD *)(*this + 4 * v10) = v9; /*0x6258b1*/
            v12 = *(_DWORD *)(v9 + 516); /*0x6258b3*/
            *(_DWORD *)(v9 + 516) = v11; /*0x6258b9*/
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
}

// 0x625F60
bool HashTable::FindString(char * Str1, IUnknown * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall HashTable::FindString(_DWORD *this, char *Str1, IUnknown *aP2)
{
  int v3; // esi
  BOOL v4; // eax

  v3 = *(this + 1); /*0x625f61*/
  if ( v3 ) /*0x625f67*/
  {
    while ( strncmp(Str1, (const char *)v3, 4u) ) /*0x625f7b*/
    {
      v3 = *(_DWORD *)(v3 + 12); /*0x625f7d*/
      if ( !v3 ) /*0x625f82*/
        return 0; /*0x625f82*/
    }
    aP2->field_0 = **(_DWORD **)(v3 + 8); /*0x625f9f*/
    LOBYTE(v4) = v3 != 0; /*0x625fa5*/
  }
  else
  {
    return 0; /*0x625f84*/
  }
  return v4; /*0x625f86*/
}
}

// 0x625FB0
bool HashTable::FindChunk(char * Str1, void * a2, CCINIClass * aP3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall HashTable::FindChunk(_DWORD *this, char *Str1, void *a2, CCINIClass *aP3)
{
  int v4; // ebx
  unsigned int v6; // ecx

  v4 = *(this + 1); /*0x625fb1*/
  if ( !v4 ) /*0x625fb7*/
    return 0; /*0x625fd4*/
  while ( strncmp(Str1, (const char *)v4, 4u) ) /*0x625fcb*/
  {
    v4 = *(_DWORD *)(v4 + 12); /*0x625fcd*/
    if ( !v4 ) /*0x625fd2*/
      return 0; /*0x625fd2*/
  }
  v6 = *(_DWORD *)aP3->__pad_0; /*0x625fee*/
  if ( *(unsigned __int16 *)(v4 + 6) < *(int *)aP3->__pad_0 ) /*0x625ff2*/
    v6 = *(unsigned __int16 *)(v4 + 6); /*0x625ff4*/
  qmemcpy(a2, *(const void **)(v4 + 8), v6); /*0x626003*/
  *(_DWORD *)aP3->__pad_0 = *(unsigned __int16 *)(v4 + 6); /*0x626013*/
  return v4 != 0; /*0x625fd6*/
}
}

// 0x6B9530
void HashTable::Clear()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall HashTable::Clear(int this)
{
  int v2; // ecx
  unsigned int v3; // edi
  int v4; // eax
  int v5; // ebx
  int *v6; // ecx
  const char **v7; // esi
  int *v8; // eax
  _DWORD *v9; // esi
  int v10; // edi
  bool v11; // c0
  bool v12; // c3
  unsigned int v13; // esi
  int v14; // ecx
  int *v15; // ebx
  void *v16; // edi
  unsigned int v17; // edx
  int *v18; // edi
  unsigned int v19; // ebx
  int v20; // esi
  int v21; // edx
  int v22; // ecx
  int v23; // eax
  int v24; // esi
  void **v25; // ebx
  unsigned int v26; // edx
  unsigned int v27; // eax
  float v28; // [esp+10h] [ebp-31Ch]
  int *v29; // [esp+10h] [ebp-31Ch]
  void *v30; // [esp+14h] [ebp-318h] BYREF
  __int64 v31; // [esp+18h] [ebp-314h]
  int v32; // [esp+20h] [ebp-30Ch]
  int v33; // [esp+24h] [ebp-308h]
  _DWORD v34[193]; // [esp+28h] [ebp-304h] BYREF

  unknown_libname_73(&v30); /*0x6b9540*/
  while ( 1 ) /*0x6b9545*/
  {
    v2 = this->HashTable_field_0x04; /*0x6b9545*/
    v3 = 0; /*0x6b9548*/
    if ( !v2 ) /*0x6b954c*/
      break; /*0x6b954c*/
    v4 = this->HashTable_field_0x08; /*0x6b9552*/
    v31 = (unsigned int)(v2 - 1); /*0x6b9556*/
    v32 = v4; /*0x6b9562*/
    v33 = 0; /*0x6b9566*/
    v5 = 0; /*0x6b956e*/
    v28 = (double)v31 / (double)v4; /*0x6b9572*/
    if ( v4 <= 0 ) /*0x6b9576*/
      break; /*0x6b9576*/
    v6 = *(int **)this; /*0x6b957f*/
    while ( !*v6 ) /*0x6b9583*/
    {
      ++v5; /*0x6b9585*/
      ++v6; /*0x6b9586*/
      if ( v5 >= v4 ) /*0x6b958b*/
        goto LABEL_23; /*0x6b958b*/
    }
    if ( v5 == -1 ) /*0x6b9596*/
      break; /*0x6b9596*/
    v7 = *(const char ***)(*(_DWORD *)this + 4 * v5); /*0x6b959c*/
    String::Reassign((char **)&v30, v7); /*0x6b95a4*/
    v8 = *(int **)this; /*0x6b95a9*/
    qmemcpy(v34, v7 + 1, sizeof(v34)); /*0x6b95b8*/
    v9 = (_DWORD *)v8[v5]; /*0x6b95ba*/
    v10 = v9[194]; /*0x6b95bf*/
    if ( v9 ) /*0x6b95c5*/
    {
      DeleteAndZero((void **)v8[v5]); /*0x6b95c9*/
      __3_YAXPAX_Z(v9); /*0x6b95cf*/
    }
    *(_DWORD *)(*(_DWORD *)this + 4 * v5) = v10; /*0x6b95de*/
    v11 = v28 < *(double *)(this + 32); /*0x6b95e4*/
    v12 = v28 == *(double *)(this + 32); /*0x6b95e4*/
    --this->HashTable_field_0x04; /*0x6b95e8*/
    if ( v11 || v12 ) /*0x6b95ed*/
    {
      v13 = this->HashTable_field_0x08; /*0x6b95f6*/
      if ( v13 > this->HashTable_field_0x30 && (unsigned char)this->HashTable_field_0x14 != 1 ) /*0x6b9608*/
      {
        v14 = this->HashTable_field_0x0C; /*0x6b960e*/
        v15 = *(int **)this; /*0x6b9611*/
        v29 = *(int **)this; /*0x6b9616*/
        this->HashTable_field_0x08 = v13 >> 1; /*0x6b961d*/
        this->HashTable_field_0x0C = v14 - 1; /*0x6b9627*/
        v16 = __2_YAPAXI_Z(4 * (v13 >> 1)); /*0x6b9633*/
        v17 = 4 * this->HashTable_field_0x08; /*0x6b9638*/
        *(_DWORD *)this = v16; /*0x6b963f*/
        memset(v16, 0, v17); /*0x6b9645*/
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
                v21 = (*(int (__thiscall **)(int))(this + 24))(v20) & ((1 << this->HashTable_field_0x0C) - 1); /*0x6b966c*/
                v22 = *(_DWORD *)(*(_DWORD *)this + 4 * v21); /*0x6b9671*/
                *(_DWORD *)(*(_DWORD *)this + 4 * v21) = v20; /*0x6b9677*/
                v23 = *(_DWORD *)(v20 + 776); /*0x6b9679*/
                *(_DWORD *)(v20 + 776) = v22; /*0x6b967f*/
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
    if ( v34[0] ) /*0x6b96a4*/
      (**(void (__thiscall ***)(_DWORD, int))v34[0])(v34[0], 1); /*0x6b96ae*/
  }
LABEL_23:
  DeleteAndZero(&v30); /*0x6b96b5*/
  if ( this->HashTable_field_0x08 ) /*0x6b96be*/
  {
    do /*0x6b96fe*/
    {
      v24 = *(_DWORD *)(*(_DWORD *)this + 4 * v3); /*0x6b96c6*/
      while ( v24 ) /*0x6b96cb*/
      {
        v25 = (void **)v24; /*0x6b96cd*/
        v24 = *(_DWORD *)(v24 + 776); /*0x6b96cf*/
        DeleteAndZero(v25); /*0x6b96db*/
        __3_YAXPAX_Z(v25); /*0x6b96e1*/
      }
      ++v3; /*0x6b96f0*/
      *(_DWORD *)(*(_DWORD *)this + 4 * v3 - 4) = 0; /*0x6b96f1*/
    }
    while ( v3 < this->HashTable_field_0x08 ); /*0x6b96fe*/
  }
  v26 = this->HashTable_field_0x08; /*0x6b9702*/
  v27 = this->HashTable_field_0x30; /*0x6b9705*/
  this->HashTable_field_0x04 = 0; /*0x6b970a*/
  if ( v26 > v27 ) /*0x6b970d*/
  {
    do /*0x6b9725*/
    {
      if ( (unsigned char)this->HashTable_field_0x14 ) /*0x6b970f*/
        break; /*0x6b9714*/
      HashTable::RebuildEx((_DWORD *)this); /*0x6b9718*/
    }
    while ( this->HashTable_field_0x08 > this->HashTable_field_0x30 ); /*0x6b9725*/
  }
  __3_YAXPAX_Z(*(void **)this); /*0x6b972b*/
}
}

// 0x6BA140
int HashTable::Find(const char * a1, ConvertClass * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall HashTable::Find(_DWORD *this, const char *a1, ConvertClass *aP2)
{
  ObjectClass *v4; // esi
  char *v6; // esi
  int v7; // esi

  String::Assign((char **)&a1, a1); /*0x6ba14c*/
  if ( (MEMORY[0xB077F8].__pad_14B0[11400] & 1) == 0 ) /*0x6ba158*/
  {
    *(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[11424] = 0; /*0x6ba164*/
    MEMORY[0xB077F8].__pad_14B0[11400] |= 1u; /*0x6ba16e*/
    atexit(nullsub_39); /*0x6ba174*/
  }
  *(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[11424] = 0; /*0x6ba17c*/
  if ( *(this + 1) /*0x6ba1a8*/
    && (v4 = *(ObjectClass **)(*this
                             + 4 * (((int (__thiscall *)(const char **))*(this + 6))(&a1) & ((1 << *(this + 3)) - 1)))) != 0 )
  {
    while ( !String::Compare((const char **)v4, &a1) ) /*0x6ba1b8*/
    {
      v4 = (ObjectClass *)v4[4].customSound_controller[2]; /*0x6ba1ba*/
      if ( !v4 ) /*0x6ba1c2*/
        goto LABEL_7; /*0x6ba1c2*/
    }
    v6 = &v4->__pad_0[4]; /*0x6ba1d7*/
    if ( v6 ) /*0x6ba1dd*/
      qmemcpy(&MEMORY[0xB077F8].__pad_14B0[11424], v6, 0x304u); /*0x6ba1e9*/
    if ( aP2 ) /*0x6ba1f1*/
      qmemcpy(aP2, &MEMORY[0xB077F8].__pad_14B0[11428], 0x300u); /*0x6ba1fd*/
    v7 = *(_DWORD *)&MEMORY[0xB077F8].__pad_14B0[11424]; /*0x6ba1ff*/
    DeleteAndZero((void **)&a1); /*0x6ba209*/
    return v7; /*0x6ba20e*/
  }
  else
  {
LABEL_7:
    DeleteAndZero((void **)&a1); /*0x6ba1c4*/
    return 0; /*0x6ba1cd*/
  }
}
}

// 0x6BA230
void HashTable::RemoveEntry(const char * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall HashTable::RemoveEntry(int this, const char *a2)
{
  int v3; // eax
  int v4; // esi
  const void *v5; // esi
  int v6; // eax
  int v7; // edx
  int v8; // esi
  int v9; // edi
  _DWORD *v10; // edi
  int v11; // ebp
  double v12; // st7
  bool v13; // c0
  bool v14; // c3
  int v15; // esi
  void *v16; // [esp+Ch] [ebp-310h] BYREF
  __int64 v17; // [esp+10h] [ebp-30Ch]
  _DWORD v18[193]; // [esp+18h] [ebp-304h] BYREF

  String::Assign((char **)&v16, a2); /*0x6ba247*/
  v3 = this->HashTable_field_0x04; /*0x6ba24c*/
  v18[0] = 0; /*0x6ba253*/
  if ( !v3 ) /*0x6ba257*/
    goto LABEL_24; /*0x6ba257*/
  v4 = *(_DWORD *)(*(_DWORD *)this /*0x6ba273*/
                 + 4 * ((*(int (__thiscall **)(void **))(this + 24))(&v16) & ((1 << this->HashTable_field_0x0C) - 1)));
  if ( !v4 ) /*0x6ba278*/
    goto LABEL_24; /*0x6ba278*/
  while ( !String::Compare((const char **)v4, (const char **)&v16) ) /*0x6ba28c*/
  {
    v4 = *(_DWORD *)(v4 + 776); /*0x6ba28e*/
    if ( !v4 ) /*0x6ba296*/
      goto LABEL_24; /*0x6ba296*/
  }
  v5 = (const void *)(v4 + 4); /*0x6ba2a5*/
  if ( v5 ) /*0x6ba2ab*/
    qmemcpy(v18, v5, sizeof(v18)); /*0x6ba2b6*/
  v6 = this->HashTable_field_0x04; /*0x6ba2b8*/
  if ( v6 ) /*0x6ba2bd*/
  {
    v7 = this->HashTable_field_0x08; /*0x6ba2c3*/
    v17 = (unsigned int)(v6 - 1); /*0x6ba2c7*/
    *(float *)&v17 = (double)v17 / (double)v7; /*0x6ba2e3*/
    v8 = (*(int (__thiscall **)(void **))(this + 24))(&v16) & ((1 << this->HashTable_field_0x0C) - 1); /*0x6ba2f5*/
    v9 = *(_DWORD *)(*(_DWORD *)this + 4 * v8); /*0x6ba2f9*/
    if ( v9 ) /*0x6ba2fe*/
    {
      if ( String::Compare((const char **)v9, (const char **)&v16) ) /*0x6ba30b*/
      {
        v10 = *(_DWORD **)(*(_DWORD *)this + 4 * v8); /*0x6ba316*/
        v11 = v10[194]; /*0x6ba31b*/
        if ( v10 ) /*0x6ba321*/
        {
          DeleteAndZero(*(void ***)(*(_DWORD *)this + 4 * v8)); /*0x6ba325*/
          __3_YAXPAX_Z(v10); /*0x6ba32b*/
        }
        v12 = *(float *)&v17; /*0x6ba335*/
        *(_DWORD *)(*(_DWORD *)this + 4 * v8) = v11; /*0x6ba339*/
        v13 = v12 < *(double *)(this + 32); /*0x6ba33f*/
        v14 = v12 == *(double *)(this + 32); /*0x6ba33f*/
        --this->HashTable_field_0x04; /*0x6ba343*/
        if ( !v13 && !v14 ) /*0x6ba348*/
          goto LABEL_22; /*0x6ba34b*/
      }
      else
      {
        v15 = *(_DWORD *)(v9 + 776); /*0x6ba34f*/
        if ( v15 ) /*0x6ba357*/
        {
          while ( !String::Compare((const char **)v15, (const char **)&v16) ) /*0x6ba367*/
          {
            v9 = v15; /*0x6ba369*/
            v15 = *(_DWORD *)(v15 + 776); /*0x6ba36b*/
            if ( !v15 ) /*0x6ba373*/
              goto LABEL_20; /*0x6ba373*/
          }
          *(_DWORD *)(v9 + 776) = *(_DWORD *)(v15 + 776); /*0x6ba37d*/
          --this->HashTable_field_0x04; /*0x6ba389*/
          DeleteAndZero((void **)v15); /*0x6ba390*/
          __3_YAXPAX_Z((void *)v15); /*0x6ba396*/
        }
LABEL_20:
        if ( *(float *)&v17 > *(double *)(this + 32) ) /*0x6ba3aa*/
          goto LABEL_22; /*0x6ba3aa*/
      }
      HashTable::RebuildEx((_DWORD *)this); /*0x6ba3ae*/
    }
  }
LABEL_22:
  if ( v18[0] ) /*0x6ba3ba*/
    (**(void (__thiscall ***)(_DWORD, int))v18[0])(v18[0], 1); /*0x6ba3c0*/
LABEL_24:
  DeleteAndZero(&v16); /*0x6ba3c2*/
}
}

// 0x6BAC40
char HashTable::RemoveHashTableEntry(ObjectClass * aP1, void * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall HashTable::RemoveHashTableEntry(_DWORD *this, ObjectClass *aP1, void *a2)
{
  int v4; // eax
  int v7; // ebx
  int v8; // esi
  SessionClass *v9; // esi
  int v10; // edi
  bool v11; // c0
  bool v12; // c3
  unsigned int v13; // esi
  AbstractClass *v14; // ebx
  int v15; // edi
  void *v16; // edi
  unsigned int v17; // edx
  AbstractClass *v18; // edi
  unsigned int v19; // ebx
  int v20; // esi
  int v21; // edx
  int v22; // ecx
  int v23; // eax
  ObjectClass *v24; // ebx
  unsigned int v25; // esi
  int v26; // edi
  AbstractClass *v27; // ebx
  AbstractClass *v28; // edi
  unsigned int v29; // edx
  AbstractClass *v30; // edi
  unsigned int v31; // ebx
  ObjectClass *v32; // esi
  int v33; // edx
  int v34; // ecx
  ObjectClass *v35; // eax
  ObjectClass *v36; // [esp+10h] [ebp-Ch]
  float v37; // [esp+14h] [ebp-8h]
  char aP1a; // [esp+20h] [ebp+4h]
  AbstractClass *a2a; // [esp+24h] [ebp+8h]
  AbstractClass *a2b; // [esp+24h] [ebp+8h]

  v4 = *(this + 1); /*0x6bac4b*/
  if ( !v4 ) /*0x6bac50*/
    return 0; /*0x6bac55*/
  v37 = (double)(unsigned int)(v4 - 1) / (double)(int)*(this + 2); /*0x6bac80*/
  v7 = ((int (__thiscall *)(ObjectClass *))*(this + 6))(aP1) & ((1 << *(this + 3)) - 1); /*0x6bac95*/
  v8 = *(_DWORD *)(*this + 4 * v7); /*0x6bac97*/
  v36 = (ObjectClass *)v8; /*0x6bac9c*/
  if ( !v8 ) /*0x6baca0*/
    return 0; /*0x6baca5*/
  if ( String::Compare((const char **)v8, (const char **)aP1) ) /*0x6bacb1*/
  {
    qmemcpy(a2, (const void *)(v8 + 4), 0x304u); /*0x6bacca*/
    v9 = *(SessionClass **)(*this + 4 * v7); /*0x6baccf*/
    v10 = *(_DWORD *)&v9->WOLLimitResolution; /*0x6bacd4*/
    if ( v9 ) /*0x6bacda*/
    {
      DeleteAndZero(*(void ***)(*this + 4 * v7)); /*0x6bacde*/
      __3_YAXPAX_Z(v9); /*0x6bace4*/
    }
    *(_DWORD *)(*this + 4 * v7) = v10; /*0x6bacf3*/
    v11 = v37 < *((double *)this + 4); /*0x6bacf9*/
    v12 = v37 == *((double *)this + 4); /*0x6bacf9*/
    --*(this + 1); /*0x6bacfd*/
    if ( v11 || v12 ) /*0x6bad02*/
    {
      v13 = *(this + 2); /*0x6bad0b*/
      if ( v13 > *(this + 12) && (unsigned char)this->HashTable_field_0x14 != 1 ) /*0x6bad1d*/
      {
        v14 = (AbstractClass *)*this; /*0x6bad26*/
        a2a = (AbstractClass *)*this; /*0x6bad2b*/
        v15 = *(this + 3) - 1; /*0x6bad31*/
        *(this + 2) = v13 >> 1; /*0x6bad32*/
        *(this + 3) = v15; /*0x6bad3c*/
        v16 = (void *)__2_YAPAXI_Z(4 * (v13 >> 1)); /*0x6bad48*/
        v17 = 4 * *(this + 2); /*0x6bad4d*/
        *this = v16; /*0x6bad54*/
        memset(v16, 0, v17); /*0x6bad5a*/
        if ( (int)v13 > 0 ) /*0x6bad65*/
        {
          v18 = v14; /*0x6bad67*/
          v19 = v13; /*0x6bad69*/
          do /*0x6bada4*/
          {
            v20 = *(_DWORD *)v18->__pad_0; /*0x6bad6b*/
            if ( *(_DWORD *)v18->__pad_0 ) /*0x6bad6b*/
            {
              do /*0x6bad9e*/
              {
                v21 = ((int (__thiscall *)(int))*(this + 6))(v20) & ((1 << *(this + 3)) - 1); /*0x6bad81*/
                v22 = *(_DWORD *)(*this + 4 * v21); /*0x6bad86*/
                *(_DWORD *)(*this + 4 * v21) = v20; /*0x6bad8c*/
                v23 = *(_DWORD *)(v20 + 776); /*0x6bad8e*/
                *(_DWORD *)(v20 + 776) = v22; /*0x6bad94*/
                v20 = v23; /*0x6bad9a*/
              }
              while ( v23 ); /*0x6bad9e*/
            }
            v18 = (AbstractClass *)((char *)v18 + 4); /*0x6bada0*/
            --v19; /*0x6bada3*/
          }
          while ( v19 ); /*0x6bada4*/
          v14 = a2a; /*0x6bada6*/
        }
        __3_YAXPAX_Z(v14); /*0x6badab*/
      }
    }
    return 1; /*0x6badb6*/
  }
  else
  {
    v24 = *(ObjectClass **)(v8 + 776); /*0x6badbf*/
    aP1a = 0; /*0x6badc5*/
    if ( v24 ) /*0x6badcc*/
    {
      while ( !String::Compare((const char **)v24, (const char **)aP1) ) /*0x6badd8*/
      {
        v36 = v24; /*0x6badda*/
        v24 = (ObjectClass *)v24[4].customSound_controller[2]; /*0x6badde*/
        if ( !v24 ) /*0x6bade6*/
          goto LABEL_24; /*0x6bade6*/
      }
      qmemcpy(a2, &v24->__pad_0[4], 0x304u); /*0x6badfa*/
      v36[4].customSound_controller[2] = v24[4].customSound_controller[2]; /*0x6bae02*/
      --*(this + 1); /*0x6bae0e*/
      DeleteAndZero((void **)v24); /*0x6bae15*/
      __3_YAXPAX_Z(v24); /*0x6bae1b*/
      aP1a = 1; /*0x6bae23*/
    }
LABEL_24:
    if ( v37 <= *((double *)this + 4) ) /*0x6bae34*/
    {
      v25 = *(this + 2); /*0x6bae3a*/
      if ( v25 > *(this + 12) && (unsigned char)this->HashTable_field_0x14 != 1 ) /*0x6bae4c*/
      {
        v26 = *(this + 3); /*0x6bae52*/
        v27 = (AbstractClass *)*this; /*0x6bae55*/
        a2b = (AbstractClass *)*this; /*0x6bae5a*/
        *(this + 2) = v25 >> 1; /*0x6bae60*/
        *(this + 3) = v26 - 1; /*0x6bae68*/
        v28 = (AbstractClass *)__2_YAPAXI_Z(4 * (v25 >> 1)); /*0x6bae73*/
        v29 = 4 * *(this + 2); /*0x6bae78*/
        *this = v28; /*0x6bae7f*/
        memset(v28, 0, v29); /*0x6bae85*/
        if ( (int)v25 > 0 ) /*0x6bae90*/
        {
          v30 = v27; /*0x6bae92*/
          v31 = v25; /*0x6bae94*/
          do /*0x6baecf*/
          {
            v32 = *(ObjectClass **)v30->__pad_0; /*0x6bae96*/
            if ( *(_DWORD *)v30->__pad_0 ) /*0x6bae96*/
            {
              do /*0x6baec9*/
              {
                v33 = ((int (__thiscall *)(ObjectClass *))*(this + 6))(v32) & ((1 << *(this + 3)) - 1); /*0x6baeac*/
                v34 = *(_DWORD *)(*this + 4 * v33); /*0x6baeb1*/
                *(_DWORD *)(*this + 4 * v33) = v32; /*0x6baeb7*/
                v35 = (ObjectClass *)v32[4].customSound_controller[2]; /*0x6baeb9*/
                v32[4].customSound_controller[2] = v34; /*0x6baebf*/
                v32 = v35; /*0x6baec5*/
              }
              while ( v35 ); /*0x6baec9*/
            }
            v30 = (AbstractClass *)((char *)v30 + 4); /*0x6baecb*/
            --v31; /*0x6baece*/
          }
          while ( v31 ); /*0x6baecf*/
          v27 = a2b; /*0x6baed1*/
        }
        __3_YAXPAX_Z(v27); /*0x6baed6*/
      }
    }
    return aP1a; /*0x6baede*/
  }
}
}

// 0x6BAEF0
void HashTable::RebuildEx()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall HashTable_RebuildEx(_DWORD *this)
{
  unsigned int v2; // esi
  int *v3; // ebp
  int v4; // edi
  void *v5; // edi
  unsigned int v6; // edx
  int *v7; // edi
  unsigned int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  int *v13; // [esp+8h] [ebp-4h]

  v2 = *(this + 2); /*0x6baef5*/
  if ( v2 > *(this + 12) && (unsigned char)this->HashTable_field_0x14 != 1 ) /*0x6baf07*/
  {
    v3 = (int *)*this; /*0x6baf10*/
    v4 = *(this + 3); /*0x6baf13*/
    v13 = (int *)*this; /*0x6baf16*/
    *(this + 2) = v2 >> 1; /*0x6baf1c*/
    *(this + 3) = v4 - 1; /*0x6baf24*/
    v5 = __2_YAPAXI_Z(4 * (v2 >> 1)); /*0x6baf2f*/
    v6 = 4 * *(this + 2); /*0x6baf34*/
    *this = v5; /*0x6baf3b*/
    memset(v5, 0, v6); /*0x6baf40*/
    if ( (int)v2 > 0 ) /*0x6baf4b*/
    {
      v7 = v3; /*0x6baf4d*/
      v8 = v2; /*0x6baf4f*/
      do /*0x6baf89*/
      {
        v9 = *v7; /*0x6baf51*/
        if ( *v7 ) /*0x6baf51*/
        {
          do /*0x6baf83*/
          {
            v10 = ((int (__thiscall *)(int))*(this + 6))(v9) & ((1 << *(this + 3)) - 1); /*0x6baf67*/
            v11 = *(_DWORD *)(*this + 4 * v10); /*0x6baf6b*/
            *(_DWORD *)(*this + 4 * v10) = v9; /*0x6baf71*/
            v12 = *(_DWORD *)(v9 + 776); /*0x6baf73*/
            *(_DWORD *)(v9 + 776) = v11; /*0x6baf79*/
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
}

// 0x724730
void HashTable::Remove(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall HashTable_Remove(int *this, int a2)
{
  _DWORD *v3; // esi
  _DWORD *v4; // eax
  int v5; // eax
  _DWORD *v6; // eax
  int v7; // eax
  void **v8; // eax
  void *v9; // eax
  void *v10; // ecx
  int *v11; // edi
  size_t v12; // eax
  int v13; // eax
  int v14; // eax
  int i; // ecx
  _DWORD *v16; // eax
  _DWORD *v17; // edi
  int v18; // eax
  int v19; // eax
  int v20; // ecx
  int v21; // ecx
  void *Block; // [esp+8h] [ebp-Ch] BYREF
  int v23; // [esp+Ch] [ebp-8h] BYREF

  v3 = this + 147; /*0x72473d*/
  if ( !*(this + 148) ) /*0x724745*/
    return; /*0x724745*/
  v4 = (_DWORD *)*(this + 151); /*0x72474b*/
  if ( !v4 || *v4 != a2 ) /*0x72475a*/
  {
    v5 = CommandClass::BinarySearchAction(&a2); /*0x724763*/
    if ( !v5 ) /*0x72476a*/
      return; /*0x72476a*/
    v3[4] = v5; /*0x724770*/
  }
  if ( v3[1] ) /*0x724773*/
  {
    v6 = (_DWORD *)v3[4]; /*0x72477a*/
    if ( v6 && *v6 == a2 ) /*0x724789*/
      goto LABEL_11; /*0x724789*/
    v7 = CommandClass::BinarySearchAction(&a2); /*0x724792*/
    if ( v7 ) /*0x724799*/
    {
      v3[4] = v7; /*0x72479b*/
LABEL_11:
      v8 = (void **)(v3[4] + 4); /*0x72479e*/
      goto LABEL_13; /*0x7247a4*/
    }
  }
  v8 = (void **)&unk_B78820; /*0x7247a6*/
LABEL_13:
  v9 = *v8; /*0x7247ab*/
  v10 = (void *)*(this + 1); /*0x7247ad*/
  Block = v9; /*0x7247b2*/
  if ( v10 == v9 && v10 ) /*0x7247ba*/
  {
    (*(void (__thiscall **)(int *, int *))(*this + 8))(this, this + 6); /*0x7247c5*/
    v9 = Block; /*0x7247c8*/
  }
  v11 = (int *)v9; /*0x7247cd*/
  v12 = v3[1]; /*0x7247cf*/
  if ( v12 ) /*0x7247d4*/
  {
    if ( !*((_BYTE *)v3 + 12) ) /*0x7247da*/
    {
      qsort((void *)*v3, v12, 8u, CompareFunc2Int); /*0x7247ec*/
      v3[4] = 0; /*0x7247f4*/
      *((_BYTE *)v3 + 12) = 1; /*0x7247fb*/
    }
    v23 = *v11; /*0x724807*/
    v13 = UI_Remove(&v23); /*0x72480f*/
    if ( v13 ) /*0x724816*/
    {
      v14 = (v13 - *v3) >> 3; /*0x72481a*/
      if ( v14 != -1 ) /*0x724820*/
      {
        for ( i = v14 + 1; i < v3[1]; *(v16 - 1) = v16[1] ) /*0x72482a*/
        {
          v16 = (_DWORD *)(*v3 + 8 * i++); /*0x72482e*/
          *(v16 - 2) = *v16; /*0x724834*/
        }
        v17 = (_DWORD *)*v3; /*0x724847*/
        v18 = v3[1] - 1; /*0x724849*/
        v3[1] = v18; /*0x72484c*/
        v17[2 * v18] = 0; /*0x724851*/
        v17[2 * v18 + 1] = 0; /*0x724854*/
        v3[4] = 0; /*0x724858*/
      }
    }
  }
  v19 = (*(int (__thiscall **)(int *, void **))(*(this + 141) + 16))(this + 141, &Block); /*0x72486e*/
  if ( v19 != -1 ) /*0x724875*/
  {
    v20 = *(this + 145); /*0x724877*/
    if ( v19 < v20 ) /*0x72487c*/
    {
      v21 = v20 - 1; /*0x72487e*/
      for ( *(this + 145) = v21; /*0x724884*/
            v19 < *(this + 145);
            *(_DWORD *)(*(this + 142) + 4 * v19 - 4) = *(_DWORD *)(*(this + 142) + 4 * v19) )
      {
        ++v19; /*0x724889*/
      }
    }
  }
  if ( Block ) /*0x72489e*/
    __3_YAXPAX_Z(Block); /*0x7248a1*/
}
}

// 0x7ACE60
unsigned int HashTable::CleanupAndResize()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __thiscall HashTable_CleanupAndResize(_DWORD *this)
{
  unsigned int i; // ebp
  int v3; // esi
  void **v4; // edi
  unsigned int result; // eax
  unsigned int v6; // esi
  int v7; // ecx
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

  for ( i = 0; i < *(this + 2); *(_DWORD *)(*this + 4 * i - 4) = 0 ) /*0x7ace67*/
  {
    v3 = *(_DWORD *)(*this + 4 * i); /*0x7ace72*/
    while ( v3 ) /*0x7ace77*/
    {
      v4 = (void **)v3; /*0x7ace79*/
      v3 = *(_DWORD *)(v3 + 8); /*0x7ace7b*/
      DeleteAndZero(v4); /*0x7ace84*/
      __3_YAXPAX_Z(v4); /*0x7ace8a*/
    }
    ++i; /*0x7ace98*/
  }
  result = *(this + 12); /*0x7acea8*/
  v6 = *(this + 2); /*0x7aceab*/
  for ( *(this + 1) = 0; v6 > result; v6 = *(this + 2) ) /*0x7aceb7*/
  {
    if ( (unsigned char)this->HashTable_field_0x14 ) /*0x7acebd*/
      break; /*0x7acec2*/
    if ( v6 > result ) /*0x7aceca*/
    {
      v7 = *(this + 3); /*0x7aced0*/
      v8 = (int *)*this; /*0x7aced3*/
      v17 = (int *)*this; /*0x7aced7*/
      *(this + 2) = v6 >> 1; /*0x7acede*/
      *(this + 3) = v7 - 1; /*0x7acee8*/
      v9 = __2_YAPAXI_Z(4 * (v6 >> 1)); /*0x7acef4*/
      v10 = 4 * *(this + 2); /*0x7acef9*/
      *this = v9; /*0x7acf00*/
      memset(v9, 0, v10); /*0x7acf05*/
      if ( (int)v6 > 0 ) /*0x7acf10*/
      {
        v11 = v8; /*0x7acf12*/
        v12 = v6; /*0x7acf14*/
        do /*0x7acf48*/
        {
          v13 = *v11; /*0x7acf16*/
          if ( *v11 ) /*0x7acf16*/
          {
            do /*0x7acf42*/
            {
              v14 = ((int (__thiscall *)(int))*(this + 6))(v13) & ((1 << *(this + 3)) - 1); /*0x7acf2c*/
              v15 = *(_DWORD *)(*this + 4 * v14); /*0x7acf30*/
              *(_DWORD *)(*this + 4 * v14) = v13; /*0x7acf36*/
              v16 = *(_DWORD *)(v13 + 8); /*0x7acf38*/
              *(_DWORD *)(v13 + 8) = v15; /*0x7acf3b*/
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
    result = *(this + 12); /*0x7acf57*/
  }
  return result; /*0x7acf65*/
}
}

// 0x7ACF70
unsigned int HashTable::Rebuild()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
unsigned int __thiscall HashTable_Rebuild(_DWORD *this)
{
  unsigned int i; // ebp
  int v3; // esi
  void **v4; // edi
  unsigned int result; // eax
  unsigned int v6; // esi
  int v7; // ecx
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

  for ( i = 0; i < *(this + 2); *(_DWORD *)(*this + 4 * i - 4) = 0 ) /*0x7acf77*/
  {
    v3 = *(_DWORD *)(*this + 4 * i); /*0x7acf82*/
    while ( v3 ) /*0x7acf87*/
    {
      v4 = (void **)v3; /*0x7acf89*/
      v3 = *(_DWORD *)(v3 + 272); /*0x7acf8b*/
      DeleteAndZero(v4); /*0x7acf97*/
      __3_YAXPAX_Z(v4); /*0x7acf9d*/
    }
    ++i; /*0x7acfab*/
  }
  result = *(this + 12); /*0x7acfbb*/
  v6 = *(this + 2); /*0x7acfbe*/
  for ( *(this + 1) = 0; v6 > result; v6 = *(this + 2) ) /*0x7acfca*/
  {
    if ( (unsigned char)this->HashTable_field_0x14 ) /*0x7acfd0*/
      break; /*0x7acfd5*/
    if ( v6 > result ) /*0x7acfdd*/
    {
      v7 = *(this + 3); /*0x7acfe3*/
      v8 = (int *)*this; /*0x7acfe6*/
      v17 = (int *)*this; /*0x7acfea*/
      *(this + 2) = v6 >> 1; /*0x7acff1*/
      *(this + 3) = v7 - 1; /*0x7acffb*/
      v9 = __2_YAPAXI_Z(4 * (v6 >> 1)); /*0x7ad007*/
      v10 = 4 * *(this + 2); /*0x7ad00c*/
      *this = v9; /*0x7ad013*/
      memset(v9, 0, v10); /*0x7ad018*/
      if ( (int)v6 > 0 ) /*0x7ad023*/
      {
        v11 = v8; /*0x7ad025*/
        v12 = v6; /*0x7ad027*/
        do /*0x7ad061*/
        {
          v13 = *v11; /*0x7ad029*/
          if ( *v11 ) /*0x7ad029*/
          {
            do /*0x7ad05b*/
            {
              v14 = ((int (__thiscall *)(int))*(this + 6))(v13) & ((1 << *(this + 3)) - 1); /*0x7ad03f*/
              v15 = *(_DWORD *)(*this + 4 * v14); /*0x7ad043*/
              *(_DWORD *)(*this + 4 * v14) = v13; /*0x7ad049*/
              v16 = *(_DWORD *)(v13 + 272); /*0x7ad04b*/
              *(_DWORD *)(v13 + 272) = v15; /*0x7ad051*/
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
    result = *(this + 12); /*0x7ad070*/
  }
  return result; /*0x7ad07e*/
}
}

// 0x7ADC60
bool HashTable::LookupString(const char ** a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __thiscall HashTable_LookupString(_DWORD *this, const char **a2, _DWORD *a3)
{
  bool result; // al
  int v4; // esi

  if ( !*(this + 1) ) /*0x7adc64*/
    return 0; /*0x7adc6c*/
  v4 = *(_DWORD *)(*this + 4 * (((int (__thiscall *)(const char **))*(this + 6))(a2) & ((1 << *(this + 3)) - 1))); /*0x7adc8a*/
  if ( !v4 ) /*0x7adc8f*/
    return 0; /*0x7adc92*/
  while ( 1 ) /*0x7adc9b*/
  {
    result = String::Compare((const char **)v4, a2); /*0x7adc9b*/
    if ( result ) /*0x7adca2*/
      break; /*0x7adca2*/
    v4 = *(_DWORD *)(v4 + 112); /*0x7adca4*/
    if ( !v4 ) /*0x7adca9*/
      return result; /*0x7adca9*/
  }
  *a3 = v4 + 4; /*0x7adcc5*/
  return 1; /*0x7adc6b*/
}
}

// 0x7ADCD0
char HashTable::Insert(ObjectClass * aP1, void * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall HashTable::Insert(_DWORD *this, ObjectClass *aP1, void *a2)
{
  int v4; // eax
  int v7; // ebx
  int v8; // esi
  SessionClass *v9; // esi
  int v10; // edi
  bool v11; // c0
  bool v12; // c3
  unsigned int v13; // esi
  AbstractClass *v14; // ebx
  int v15; // edi
  void *v16; // edi
  unsigned int v17; // edx
  AbstractClass *v18; // edi
  unsigned int v19; // ebx
  int v20; // esi
  int v21; // edx
  int v22; // ecx
  int v23; // eax
  ObjectClass *v24; // ebx
  unsigned int v25; // esi
  int v26; // edi
  AbstractClass *v27; // ebx
  AbstractClass *v28; // edi
  unsigned int v29; // edx
  AbstractClass *v30; // edi
  unsigned int v31; // ebx
  ObjectClass *v32; // esi
  int v33; // edx
  int v34; // ecx
  ObjectClass *v35; // eax
  ObjectClass *v36; // [esp+10h] [ebp-Ch]
  float v37; // [esp+14h] [ebp-8h]
  char aP1a; // [esp+20h] [ebp+4h]
  AbstractClass *a2a; // [esp+24h] [ebp+8h]
  AbstractClass *a2b; // [esp+24h] [ebp+8h]

  v4 = *(this + 1); /*0x7adcdb*/
  if ( !v4 ) /*0x7adce0*/
    return 0; /*0x7adce5*/
  v37 = (double)(unsigned int)(v4 - 1) / (double)(int)*(this + 2); /*0x7add10*/
  v7 = ((int (__thiscall *)(ObjectClass *))*(this + 6))(aP1) & ((1 << *(this + 3)) - 1); /*0x7add25*/
  v8 = *(_DWORD *)(*this + 4 * v7); /*0x7add27*/
  v36 = (ObjectClass *)v8; /*0x7add2c*/
  if ( !v8 ) /*0x7add30*/
    return 0; /*0x7add35*/
  if ( String::Compare((const char **)v8, (const char **)aP1) ) /*0x7add41*/
  {
    qmemcpy(a2, (const void *)(v8 + 4), 0x6Cu); /*0x7add5a*/
    v9 = *(SessionClass **)(*this + 4 * v7); /*0x7add5f*/
    v10 = *(_DWORD *)&v9->__pad_50[32]; /*0x7add64*/
    if ( v9 ) /*0x7add67*/
    {
      DeleteAndZero(*(void ***)(*this + 4 * v7)); /*0x7add6b*/
      __3_YAXPAX_Z(v9); /*0x7add71*/
    }
    *(_DWORD *)(*this + 4 * v7) = v10; /*0x7add80*/
    v11 = v37 < *((double *)this + 4); /*0x7add86*/
    v12 = v37 == *((double *)this + 4); /*0x7add86*/
    --*(this + 1); /*0x7add8a*/
    if ( v11 || v12 ) /*0x7add8f*/
    {
      v13 = *(this + 2); /*0x7add98*/
      if ( v13 > *(this + 12) && (unsigned char)this->HashTable_field_0x14 != 1 ) /*0x7addaa*/
      {
        v14 = (AbstractClass *)*this; /*0x7addb3*/
        a2a = (AbstractClass *)*this; /*0x7addb8*/
        v15 = *(this + 3) - 1; /*0x7addbe*/
        *(this + 2) = v13 >> 1; /*0x7addbf*/
        *(this + 3) = v15; /*0x7addc9*/
        v16 = (void *)__2_YAPAXI_Z(4 * (v13 >> 1)); /*0x7addd5*/
        v17 = 4 * *(this + 2); /*0x7addda*/
        *this = v16; /*0x7adde1*/
        memset(v16, 0, v17); /*0x7adde7*/
        if ( (int)v13 > 0 ) /*0x7addf2*/
        {
          v18 = v14; /*0x7addf4*/
          v19 = v13; /*0x7addf6*/
          do /*0x7ade2b*/
          {
            v20 = *(_DWORD *)v18->__pad_0; /*0x7addf8*/
            if ( *(_DWORD *)v18->__pad_0 ) /*0x7addf8*/
            {
              do /*0x7ade25*/
              {
                v21 = ((int (__thiscall *)(int))*(this + 6))(v20) & ((1 << *(this + 3)) - 1); /*0x7ade0e*/
                v22 = *(_DWORD *)(*this + 4 * v21); /*0x7ade13*/
                *(_DWORD *)(*this + 4 * v21) = v20; /*0x7ade19*/
                v23 = *(_DWORD *)(v20 + 112); /*0x7ade1b*/
                *(_DWORD *)(v20 + 112) = v22; /*0x7ade1e*/
                v20 = v23; /*0x7ade21*/
              }
              while ( v23 ); /*0x7ade25*/
            }
            v18 = (AbstractClass *)((char *)v18 + 4); /*0x7ade27*/
            --v19; /*0x7ade2a*/
          }
          while ( v19 ); /*0x7ade2b*/
          v14 = a2a; /*0x7ade2d*/
        }
        __3_YAXPAX_Z(v14); /*0x7ade32*/
      }
    }
    return 1; /*0x7ade3d*/
  }
  else
  {
    v24 = *(ObjectClass **)(v8 + 112); /*0x7ade46*/
    aP1a = 0; /*0x7ade49*/
    if ( v24 ) /*0x7ade50*/
    {
      while ( !String::Compare((const char **)v24, (const char **)aP1) ) /*0x7ade5c*/
      {
        v36 = v24; /*0x7ade5e*/
        v24 = (ObjectClass *)v24->estimatedHealth; /*0x7ade62*/
        if ( !v24 ) /*0x7ade67*/
          goto LABEL_24; /*0x7ade67*/
      }
      qmemcpy(a2, &v24->__pad_0[4], 0x6Cu); /*0x7ade7b*/
      v36->estimatedHealth = v24->estimatedHealth; /*0x7ade80*/
      --*(this + 1); /*0x7ade89*/
      DeleteAndZero((void **)v24); /*0x7ade90*/
      __3_YAXPAX_Z(v24); /*0x7ade96*/
      aP1a = 1; /*0x7ade9e*/
    }
LABEL_24:
    if ( v37 <= *((double *)this + 4) ) /*0x7adeaf*/
    {
      v25 = *(this + 2); /*0x7adeb5*/
      if ( v25 > *(this + 12) && (unsigned char)this->HashTable_field_0x14 != 1 ) /*0x7adec7*/
      {
        v26 = *(this + 3); /*0x7adecd*/
        v27 = (AbstractClass *)*this; /*0x7aded0*/
        a2b = (AbstractClass *)*this; /*0x7aded5*/
        *(this + 2) = v25 >> 1; /*0x7adedb*/
        *(this + 3) = v26 - 1; /*0x7adee3*/
        v28 = (AbstractClass *)__2_YAPAXI_Z(4 * (v25 >> 1)); /*0x7adeee*/
        v29 = 4 * *(this + 2); /*0x7adef3*/
        *this = v28; /*0x7adefa*/
        memset(v28, 0, v29); /*0x7adf00*/
        if ( (int)v25 > 0 ) /*0x7adf0b*/
        {
          v30 = v27; /*0x7adf0d*/
          v31 = v25; /*0x7adf0f*/
          do /*0x7adf44*/
          {
            v32 = *(ObjectClass **)v30->__pad_0; /*0x7adf11*/
            if ( *(_DWORD *)v30->__pad_0 ) /*0x7adf11*/
            {
              do /*0x7adf3e*/
              {
                v33 = ((int (__thiscall *)(ObjectClass *))*(this + 6))(v32) & ((1 << *(this + 3)) - 1); /*0x7adf27*/
                v34 = *(_DWORD *)(*this + 4 * v33); /*0x7adf2c*/
                *(_DWORD *)(*this + 4 * v33) = v32; /*0x7adf32*/
                v35 = (ObjectClass *)v32->estimatedHealth; /*0x7adf34*/
                v32->estimatedHealth = v34; /*0x7adf37*/
                v32 = v35; /*0x7adf3a*/
              }
              while ( v35 ); /*0x7adf3e*/
            }
            v30 = (AbstractClass *)((char *)v30 + 4); /*0x7adf40*/
            --v31; /*0x7adf43*/
          }
          while ( v31 ); /*0x7adf44*/
          v27 = a2b; /*0x7adf46*/
        }
        __3_YAXPAX_Z(v27); /*0x7adf4b*/
      }
    }
    return aP1a; /*0x7adf53*/
  }
}
}

// 0x7AE1F0
char HashTable::Lookup(ObjectClass * aP1, TechnoTypeClass * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall HashTable::Lookup(_DWORD *this, ObjectClass *aP1, TechnoTypeClass *aP2)
{
  int v4; // eax
  int v7; // edi
  ObjectClass *v8; // ebp
  TechnoTypeClass **v9; // ebp
  TechnoTypeClass *v10; // ebx
  bool v11; // c0
  bool v12; // c3
  unsigned int v13; // ebp
  int v14; // edi
  AbstractClass *v15; // ebx
  AbstractClass *v16; // edi
  unsigned int v17; // edx
  int v18; // edi
  int v19; // edx
  int v20; // ecx
  int v21; // eax
  ObjectClass *v22; // edi
  unsigned int v23; // ebp
  AbstractClass *v24; // ebx
  int v25; // edi
  void *v26; // edi
  unsigned int v27; // edx
  int v28; // edi
  int v29; // edx
  int v30; // ecx
  int v31; // eax
  float v32; // [esp+10h] [ebp-8h]
  char aP1a; // [esp+1Ch] [ebp+4h]
  AbstractClass *aP2a; // [esp+20h] [ebp+8h]
  AbstractClass *aP2b; // [esp+20h] [ebp+8h]

  v4 = *(this + 1); /*0x7ae1fb*/
  if ( !v4 ) /*0x7ae200*/
    return 0; /*0x7ae205*/
  v32 = (double)(unsigned int)(v4 - 1) / (double)(int)*(this + 2); /*0x7ae230*/
  v7 = ((int (__thiscall *)(ObjectClass *))*(this + 6))(aP1) & ((1 << *(this + 3)) - 1); /*0x7ae244*/
  v8 = *(ObjectClass **)(*this + 4 * v7); /*0x7ae246*/
  if ( !v8 ) /*0x7ae24b*/
    return 0; /*0x7ae250*/
  if ( String::Compare((const char **)v8, (const char **)aP1) ) /*0x7ae25c*/
  {
    *(_DWORD *)aP2->__pad_0 = *(_DWORD *)&v8->__pad_0[4]; /*0x7ae270*/
    v9 = *(TechnoTypeClass ***)(*this + 4 * v7); /*0x7ae274*/
    v10 = v9[2]; /*0x7ae279*/
    if ( v9 ) /*0x7ae27c*/
    {
      DeleteAndZero(*(void ***)(*this + 4 * v7)); /*0x7ae280*/
      __3_YAXPAX_Z(v9); /*0x7ae286*/
    }
    *(_DWORD *)(*this + 4 * v7) = v10; /*0x7ae294*/
    v11 = v32 < *((double *)this + 4); /*0x7ae29a*/
    v12 = v32 == *((double *)this + 4); /*0x7ae29a*/
    --*(this + 1); /*0x7ae29e*/
    if ( v11 || v12 ) /*0x7ae2a3*/
    {
      v13 = *(this + 2); /*0x7ae2ac*/
      if ( v13 > *(this + 12) && (unsigned char)this->HashTable_field_0x14 != 1 ) /*0x7ae2be*/
      {
        v14 = *(this + 3); /*0x7ae2c0*/
        v15 = (AbstractClass *)*this; /*0x7ae2c3*/
        aP2a = (AbstractClass *)*this; /*0x7ae2c7*/
        *(this + 2) = v13 >> 1; /*0x7ae2cd*/
        *(this + 3) = v14 - 1; /*0x7ae2d5*/
        v16 = (AbstractClass *)__2_YAPAXI_Z(4 * (v13 >> 1)); /*0x7ae2e0*/
        v17 = 4 * *(this + 2); /*0x7ae2e5*/
        *this = v16; /*0x7ae2ec*/
        memset(v16, 0, v17); /*0x7ae2f1*/
        if ( (int)v13 > 0 ) /*0x7ae2fc*/
        {
          do /*0x7ae330*/
          {
            v18 = *(_DWORD *)v15->__pad_0; /*0x7ae2fe*/
            if ( *(_DWORD *)v15->__pad_0 ) /*0x7ae2fe*/
            {
              do /*0x7ae32a*/
              {
                v19 = ((int (__thiscall *)(int))*(this + 6))(v18) & ((1 << *(this + 3)) - 1); /*0x7ae314*/
                v20 = *(_DWORD *)(*this + 4 * v19); /*0x7ae318*/
                *(_DWORD *)(*this + 4 * v19) = v18; /*0x7ae31e*/
                v21 = *(_DWORD *)(v18 + 8); /*0x7ae320*/
                *(_DWORD *)(v18 + 8) = v20; /*0x7ae323*/
                v18 = v21; /*0x7ae326*/
              }
              while ( v21 ); /*0x7ae32a*/
            }
            v15 = (AbstractClass *)((char *)v15 + 4); /*0x7ae32c*/
            --v13; /*0x7ae32f*/
          }
          while ( v13 ); /*0x7ae330*/
          v15 = aP2a; /*0x7ae332*/
        }
        __3_YAXPAX_Z(v15); /*0x7ae337*/
      }
    }
    return 1; /*0x7ae342*/
  }
  else
  {
    v22 = *(ObjectClass **)&v8->__pad_0[8]; /*0x7ae34b*/
    aP1a = 0; /*0x7ae34e*/
    if ( v22 ) /*0x7ae355*/
    {
      while ( !String::Compare((const char **)v22, (const char **)aP1) ) /*0x7ae361*/
      {
        v8 = v22; /*0x7ae363*/
        v22 = *(ObjectClass **)&v22->__pad_0[8]; /*0x7ae365*/
        if ( !v22 ) /*0x7ae36a*/
          goto LABEL_23; /*0x7ae36a*/
      }
      *(_DWORD *)aP2->__pad_0 = *(_DWORD *)&v22->__pad_0[4]; /*0x7ae375*/
      *(_DWORD *)&v8->__pad_0[8] = *(_DWORD *)&v22->__pad_0[8]; /*0x7ae37a*/
      --*(this + 1); /*0x7ae383*/
      DeleteAndZero((void **)v22); /*0x7ae38a*/
      __3_YAXPAX_Z(v22); /*0x7ae390*/
      aP1a = 1; /*0x7ae398*/
    }
LABEL_23:
    if ( v32 <= *((double *)this + 4) ) /*0x7ae3a9*/
    {
      v23 = *(this + 2); /*0x7ae3af*/
      if ( v23 > *(this + 12) && (unsigned char)this->HashTable_field_0x14 != 1 ) /*0x7ae3c1*/
      {
        v24 = (AbstractClass *)*this; /*0x7ae3ca*/
        aP2b = (AbstractClass *)*this; /*0x7ae3ce*/
        v25 = *(this + 3) - 1; /*0x7ae3d4*/
        *(this + 2) = v23 >> 1; /*0x7ae3d5*/
        *(this + 3) = v25; /*0x7ae3df*/
        v26 = (void *)__2_YAPAXI_Z(4 * (v23 >> 1)); /*0x7ae3eb*/
        v27 = 4 * *(this + 2); /*0x7ae3f0*/
        *this = v26; /*0x7ae3f7*/
        memset(v26, 0, v27); /*0x7ae3fc*/
        if ( (int)v23 > 0 ) /*0x7ae407*/
        {
          do /*0x7ae43b*/
          {
            v28 = *(_DWORD *)v24->__pad_0; /*0x7ae409*/
            if ( *(_DWORD *)v24->__pad_0 ) /*0x7ae409*/
            {
              do /*0x7ae435*/
              {
                v29 = ((int (__thiscall *)(int))*(this + 6))(v28) & ((1 << *(this + 3)) - 1); /*0x7ae41f*/
                v30 = *(_DWORD *)(*this + 4 * v29); /*0x7ae423*/
                *(_DWORD *)(*this + 4 * v29) = v28; /*0x7ae429*/
                v31 = *(_DWORD *)(v28 + 8); /*0x7ae42b*/
                *(_DWORD *)(v28 + 8) = v30; /*0x7ae42e*/
                v28 = v31; /*0x7ae431*/
              }
              while ( v31 ); /*0x7ae435*/
            }
            v24 = (AbstractClass *)((char *)v24 + 4); /*0x7ae437*/
            --v23; /*0x7ae43a*/
          }
          while ( v23 ); /*0x7ae43b*/
          v24 = aP2b; /*0x7ae43d*/
        }
        __3_YAXPAX_Z(v24); /*0x7ae442*/
      }
    }
    return aP1a; /*0x7ae44a*/
  }
}
}

// 0x7AE510
void HashTable::Grow()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall HashTable_Grow(_DWORD *this)
{
  int v2; // esi
  _DWORD *v3; // ebp
  int v4; // edi
  void *v5; // edi
  unsigned int v6; // edx
  int *v7; // edi
  int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  _DWORD *v13; // [esp+4h] [ebp-4h]

  if ( (unsigned char)this->HashTable_field_0x14 != 1 ) /*0x7ae518*/
  {
    v2 = *(this + 2); /*0x7ae520*/
    v3 = (_DWORD *)*this; /*0x7ae523*/
    v4 = *(this + 3) + 1; /*0x7ae52c*/
    *(this + 2) = 2 * v2; /*0x7ae52d*/
    v13 = v3; /*0x7ae530*/
    *(this + 3) = v4; /*0x7ae538*/
    v5 = __2_YAPAXI_Z(8 * v2); /*0x7ae543*/
    v6 = 4 * *(this + 2); /*0x7ae548*/
    *this = v5; /*0x7ae54f*/
    memset(v5, 0, v6); /*0x7ae554*/
    if ( v2 > 0 ) /*0x7ae55f*/
    {
      v7 = v3; /*0x7ae561*/
      v8 = v2; /*0x7ae563*/
      do /*0x7ae597*/
      {
        v9 = *v7; /*0x7ae565*/
        if ( *v7 ) /*0x7ae565*/
        {
          do /*0x7ae591*/
          {
            v10 = ((int (__thiscall *)(int))*(this + 6))(v9) & ((1 << *(this + 3)) - 1); /*0x7ae57b*/
            v11 = *(_DWORD *)(*this + 4 * v10); /*0x7ae57f*/
            *(_DWORD *)(*this + 4 * v10) = v9; /*0x7ae585*/
            v12 = *(_DWORD *)(v9 + 8); /*0x7ae587*/
            *(_DWORD *)(v9 + 8) = v11; /*0x7ae58a*/
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
}

// 0x7AE950
char HashTable::FindWOLHashTableEntry(const char ** a2, void * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall FindWOLHashTableEntry(_DWORD *this, const char **a2, void *a3)
{
  int v4; // eax
  int v7; // ebx
  int v8; // esi
  _DWORD *v9; // esi
  int v10; // edi
  bool v11; // c0
  bool v12; // c3
  unsigned int v13; // esi
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
  int v26; // edi
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

  v4 = *(this + 1); /*0x7ae95b*/
  if ( !v4 ) /*0x7ae960*/
    return 0; /*0x7ae965*/
  v37 = (double)(unsigned int)(v4 - 1) / (double)(int)*(this + 2); /*0x7ae990*/
  v7 = ((int (__thiscall *)(const char **))*(this + 6))(a2) & ((1 << *(this + 3)) - 1); /*0x7ae9a5*/
  v8 = *(_DWORD *)(*this + 4 * v7); /*0x7ae9a7*/
  v36 = v8; /*0x7ae9ac*/
  if ( !v8 ) /*0x7ae9b0*/
    return 0; /*0x7ae9b5*/
  if ( String::Compare((const char **)v8, a2) ) /*0x7ae9c1*/
  {
    qmemcpy(a3, (const void *)(v8 + 4), 0x10Cu); /*0x7ae9da*/
    v9 = *(_DWORD **)(*this + 4 * v7); /*0x7ae9df*/
    v10 = v9[68]; /*0x7ae9e4*/
    if ( v9 ) /*0x7ae9ea*/
    {
      DeleteAndZero(*(void ***)(*this + 4 * v7)); /*0x7ae9ee*/
      __3_YAXPAX_Z(v9); /*0x7ae9f4*/
    }
    *(_DWORD *)(*this + 4 * v7) = v10; /*0x7aea03*/
    v11 = v37 < *((double *)this + 4); /*0x7aea09*/
    v12 = v37 == *((double *)this + 4); /*0x7aea09*/
    --*(this + 1); /*0x7aea0d*/
    if ( v11 || v12 ) /*0x7aea12*/
    {
      v13 = *(this + 2); /*0x7aea1b*/
      if ( v13 > *(this + 12) && (unsigned char)this->HashTable_field_0x14 != 1 ) /*0x7aea2d*/
      {
        v14 = (int *)*this; /*0x7aea36*/
        v39 = (int *)*this; /*0x7aea3b*/
        v15 = *(this + 3) - 1; /*0x7aea41*/
        *(this + 2) = v13 >> 1; /*0x7aea42*/
        *(this + 3) = v15; /*0x7aea4c*/
        v16 = __2_YAPAXI_Z(4 * (v13 >> 1)); /*0x7aea58*/
        v17 = 4 * *(this + 2); /*0x7aea5d*/
        *this = v16; /*0x7aea64*/
        memset(v16, 0, v17); /*0x7aea6a*/
        if ( (int)v13 > 0 ) /*0x7aea75*/
        {
          v18 = v14; /*0x7aea77*/
          v19 = v13; /*0x7aea79*/
          do /*0x7aeab4*/
          {
            v20 = *v18; /*0x7aea7b*/
            if ( *v18 ) /*0x7aea7b*/
            {
              do /*0x7aeaae*/
              {
                v21 = ((int (__thiscall *)(int))*(this + 6))(v20) & ((1 << *(this + 3)) - 1); /*0x7aea91*/
                v22 = *(_DWORD *)(*this + 4 * v21); /*0x7aea96*/
                *(_DWORD *)(*this + 4 * v21) = v20; /*0x7aea9c*/
                v23 = *(_DWORD *)(v20 + 272); /*0x7aea9e*/
                *(_DWORD *)(v20 + 272) = v22; /*0x7aeaa4*/
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
    return 1; /*0x7aeac6*/
  }
  else
  {
    v24 = *(_DWORD *)(v8 + 272); /*0x7aeacf*/
    v38 = 0; /*0x7aead5*/
    if ( v24 ) /*0x7aeadc*/
    {
      while ( !String::Compare((const char **)v24, a2) ) /*0x7aeae8*/
      {
        v36 = v24; /*0x7aeaea*/
        v24 = *(_DWORD *)(v24 + 272); /*0x7aeaee*/
        if ( !v24 ) /*0x7aeaf6*/
          goto LABEL_24; /*0x7aeaf6*/
      }
      qmemcpy(a3, (const void *)(v24 + 4), 0x10Cu); /*0x7aeb0a*/
      *(_DWORD *)(v36 + 272) = *(_DWORD *)(v24 + 272); /*0x7aeb12*/
      --*(this + 1); /*0x7aeb1e*/
      DeleteAndZero((void **)v24); /*0x7aeb25*/
      __3_YAXPAX_Z((void *)v24); /*0x7aeb2b*/
      v38 = 1; /*0x7aeb33*/
    }
LABEL_24:
    if ( v37 <= *((double *)this + 4) ) /*0x7aeb44*/
    {
      v25 = *(this + 2); /*0x7aeb4a*/
      if ( v25 > *(this + 12) && (unsigned char)this->HashTable_field_0x14 != 1 ) /*0x7aeb5c*/
      {
        v26 = *(this + 3); /*0x7aeb62*/
        v27 = (int *)*this; /*0x7aeb65*/
        v40 = (int *)*this; /*0x7aeb6a*/
        *(this + 2) = v25 >> 1; /*0x7aeb70*/
        *(this + 3) = v26 - 1; /*0x7aeb78*/
        v28 = __2_YAPAXI_Z(4 * (v25 >> 1)); /*0x7aeb83*/
        v29 = 4 * *(this + 2); /*0x7aeb88*/
        *this = v28; /*0x7aeb8f*/
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
                v33 = ((int (__thiscall *)(int))*(this + 6))(v32) & ((1 << *(this + 3)) - 1); /*0x7aebbc*/
                v34 = *(_DWORD *)(*this + 4 * v33); /*0x7aebc1*/
                *(_DWORD *)(*this + 4 * v33) = v32; /*0x7aebc7*/
                v35 = *(_DWORD *)(v32 + 272); /*0x7aebc9*/
                *(_DWORD *)(v32 + 272) = v34; /*0x7aebcf*/
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
    return v38; /*0x7aebee*/
  }
}
}

// 0x7AEC00
void HashTable::Shrink()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_7AEC00(_DWORD *this)
{
  unsigned int v2; // esi
  int *v3; // ebp
  int v4; // edi
  void *v5; // edi
  unsigned int v6; // edx
  int *v7; // edi
  unsigned int v8; // ebp
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  int *v13; // [esp+8h] [ebp-4h]

  v2 = *(this + 2); /*0x7aec05*/
  if ( v2 > *(this + 12) && (unsigned char)this->HashTable_field_0x14 != 1 ) /*0x7aec17*/
  {
    v3 = (int *)*this; /*0x7aec20*/
    v4 = *(this + 3); /*0x7aec23*/
    v13 = (int *)*this; /*0x7aec26*/
    *(this + 2) = v2 >> 1; /*0x7aec2c*/
    *(this + 3) = v4 - 1; /*0x7aec34*/
    v5 = __2_YAPAXI_Z(4 * (v2 >> 1)); /*0x7aec3f*/
    v6 = 4 * *(this + 2); /*0x7aec44*/
    *this = v5; /*0x7aec4b*/
    memset(v5, 0, v6); /*0x7aec50*/
    if ( (int)v2 > 0 ) /*0x7aec5b*/
    {
      v7 = v3; /*0x7aec5d*/
      v8 = v2; /*0x7aec5f*/
      do /*0x7aec99*/
      {
        v9 = *v7; /*0x7aec61*/
        if ( *v7 ) /*0x7aec61*/
        {
          do /*0x7aec93*/
          {
            v10 = ((int (__thiscall *)(int))*(this + 6))(v9) & ((1 << *(this + 3)) - 1); /*0x7aec77*/
            v11 = *(_DWORD *)(*this + 4 * v10); /*0x7aec7b*/
            *(_DWORD *)(*this + 4 * v10) = v9; /*0x7aec81*/
            v12 = *(_DWORD *)(v9 + 272); /*0x7aec83*/
            *(_DWORD *)(v9 + 272) = v11; /*0x7aec89*/
            v9 = v12; /*0x7aec8f*/
          }
          while ( v12 ); /*0x7aec93*/
        }
        ++v7; /*0x7aec95*/
        --v8; /*0x7aec98*/
      }
      while ( v8 ); /*0x7aec99*/
      v3 = v13; /*0x7aec9b*/
    }
    __3_YAXPAX_Z(v3); /*0x7aeca0*/
  }
}
}
