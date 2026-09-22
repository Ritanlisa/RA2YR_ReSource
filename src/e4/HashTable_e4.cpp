// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/String_e4.hpp"

// 0x624760
void HashTable::Get(IUnknown * aP1, IUnknown * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  if ( !this->q004 ) /*0x624764*/
    return 0; /*0x62476c*/
  _DWORD * v4 = *(_DWORD **)(*this + 4 * (((int (__thiscall *)(IUnknown *))this->q018)(aP1) & ((1 << this->q00C) - 1))); /*0x62478a*/
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
{

  if ( (unsigned char)this->HashTable_field_0x14 != 1 ) /*0x624fc8*/
  {
    rc_ptr_base *v2 = this->q008; /*0x624fd0*/
    _DWORD * v3 = (_DWORD *)*this; /*0x624fd3*/
    int v4 = this->q00C + 1; /*0x624fdc*/
    this->q008 = 2 * v2; /*0x624fdd*/
    _DWORD * v13 = v3; /*0x624fe0*/
    this->q00C = v4; /*0x624fe8*/
    void * v5 = __2_YAPAXI_Z(8 * v2); /*0x624ff3*/
    unsigned int v6 = 4 * this->q008; /*0x624ff8*/
    *this = v5; /*0x624fff*/
    memset(v5, 0, v6); /*0x625004*/
    if ( v2 > 0 ) /*0x62500f*/
    {
      int * v7 = v3; /*0x625011*/
      rc_ptr_base *v8 = v2; /*0x625013*/
      do /*0x62504d*/
      {
        int v9 = *v7; /*0x625015*/
        if ( *v7 ) /*0x625015*/
        {
  int v12; // eax
          do /*0x625047*/
          {
            int v10 = ((int (__thiscall *)(int))this->q018)(v9) & ((1 << this->q00C) - 1); /*0x62502b*/
            int v11 = *(_DWORD *)(*this + 4 * v10); /*0x62502f*/
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

// 0x625090
void HashTable::RemoveAndResize(unsigned int * a2, unsigned char * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  int v4 = this->q004; /*0x62509b*/
  if ( !v4 ) /*0x6250a0*/
    return 0; /*0x6250a5*/
  float v33 = (double)(unsigned int)(v4 - 1) / (double)(int)this->q008; /*0x6250d0*/
  int v7 = ((int (__thiscall *)(_DWORD *))this->q018)(a2) & ((1 << this->q00C) - 1); /*0x6250e4*/
  _DWORD * v8 = *(_DWORD **)(*this + 4 * v7); /*0x6250e6*/
  if ( !v8 ) /*0x6250eb*/
    return 0; /*0x6250f0*/
  int v9 = a2[1]; /*0x6250f9*/
  if ( v9 == v8[1] && *a2 == *v8 ) /*0x62510e*/
  {
    *a3 = *((_BYTE *)v8 + 8); /*0x62511b*/
    _DWORD * v32 = *(_DWORD **)(*this + 4 * v7); /*0x625122*/
    int v10 = v32[3]; /*0x625123*/
    __3_YAXPAX_Z(v32); /*0x625126*/
    *(_DWORD *)(*this + 4 * v7) = v10; /*0x625134*/
    bool v11 = v33 < this->q010; /*0x62513a*/
    bool v12 = v33 == this->q010; /*0x62513a*/
    --this->q004; /*0x62513e*/
    if ( v11 || v12 ) /*0x625143*/
    {
      unsigned int v13 = this->q008; /*0x62514c*/
      if ( v13 > this->q030 && (unsigned char)this->HashTable_field_0x14 != 1 ) /*0x62515e*/
      {
        int * v14 = (int *)*this; /*0x625167*/
        int * v35 = (int *)*this; /*0x62516b*/
        int v15 = this->q00C - 1; /*0x625171*/
        this->q008 = v13 >> 1; /*0x625172*/
        this->q00C = v15; /*0x62517c*/
        void * v16 = __2_YAPAXI_Z(4 * (v13 >> 1)); /*0x625188*/
        unsigned int v17 = 4 * this->q008; /*0x62518d*/
        *this = v16; /*0x625194*/
        memset(v16, 0, v17); /*0x625199*/
        if ( (int)v13 > 0 ) /*0x6251a4*/
        {
          do /*0x6251d8*/
          {
            int v18 = *v14; /*0x6251a6*/
            if ( *v14 ) /*0x6251a6*/
            {
  int v21; // eax
              do /*0x6251d2*/
              {
                int v19 = ((int (__thiscall *)(int))this->q018)(v18) & ((1 << this->q00C) - 1); /*0x6251bc*/
                int v20 = *(_DWORD *)(*this + 4 * v19); /*0x6251c0*/
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
    _DWORD * v22 = (_DWORD *)v8[3]; /*0x6251f3*/
    char v34 = 0; /*0x6251f6*/
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
      --this->q004; /*0x62522c*/
      __3_YAXPAX_Z(v22); /*0x62522f*/
      v34 = 1; /*0x625237*/
    }
LABEL_23:
    if ( v33 <= this->q010 ) /*0x625248*/
    {
      unsigned int v23 = this->q008; /*0x62524e*/
      if ( v23 > this->q030 && (unsigned char)this->HashTable_field_0x14 != 1 ) /*0x625260*/
      {
        int v24 = this->q00C; /*0x625262*/
        int * v25 = (int *)*this; /*0x625265*/
        int * v36 = (int *)*this; /*0x625269*/
        this->q008 = v23 >> 1; /*0x62526f*/
        this->q00C = v24 - 1; /*0x625277*/
        void * v26 = __2_YAPAXI_Z(4 * (v23 >> 1)); /*0x625282*/
        unsigned int v27 = 4 * this->q008; /*0x625287*/
        *this = v26; /*0x62528e*/
        memset(v26, 0, v27); /*0x625293*/
        if ( (int)v23 > 0 ) /*0x62529e*/
        {
          do /*0x6252d2*/
          {
            int v28 = *v25; /*0x6252a0*/
            if ( *v25 ) /*0x6252a0*/
            {
  int v31; // eax
              do /*0x6252cc*/
              {
                int v29 = ((int (__thiscall *)(int))this->q018)(v28) & ((1 << this->q00C) - 1); /*0x6252b6*/
                int v30 = *(_DWORD *)(*this + 4 * v29); /*0x6252ba*/
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
{

  unsigned int v2 = this->q008; /*0x625785*/
  if ( v2 > this->q030 && (unsigned char)this->HashTable_field_0x14 != 1 ) /*0x625797*/
  {
    int * v3 = (int *)*this; /*0x6257a0*/
    int v4 = this->q00C; /*0x6257a3*/
    int * v13 = (int *)*this; /*0x6257a6*/
    this->q008 = v2 >> 1; /*0x6257ac*/
    this->q00C = v4 - 1; /*0x6257b4*/
    void * v5 = __2_YAPAXI_Z(4 * (v2 >> 1)); /*0x6257bf*/
    unsigned int v6 = 4 * this->q008; /*0x6257c4*/
    *this = v5; /*0x6257cb*/
    memset(v5, 0, v6); /*0x6257d0*/
    if ( (int)v2 > 0 ) /*0x6257db*/
    {
      int * v7 = v3; /*0x6257dd*/
      unsigned int v8 = v2; /*0x6257df*/
      do /*0x625813*/
      {
        int v9 = *v7; /*0x6257e1*/
        if ( *v7 ) /*0x6257e1*/
        {
  int v12; // eax
          do /*0x62580d*/
          {
            int v10 = ((int (__thiscall *)(int))this->q018)(v9) & ((1 << this->q00C) - 1); /*0x6257f7*/
            int v11 = *(_DWORD *)(*this + 4 * v10); /*0x6257fb*/
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
{

  unsigned int v2 = this->q008; /*0x625835*/
  if ( v2 > this->q030 && (unsigned char)this->HashTable_field_0x14 != 1 ) /*0x625847*/
  {
    int * v3 = (int *)*this; /*0x625850*/
    int v4 = this->q00C; /*0x625853*/
    int * v13 = (int *)*this; /*0x625856*/
    this->q008 = v2 >> 1; /*0x62585c*/
    this->q00C = v4 - 1; /*0x625864*/
    void * v5 = __2_YAPAXI_Z(4 * (v2 >> 1)); /*0x62586f*/
    unsigned int v6 = 4 * this->q008; /*0x625874*/
    *this = v5; /*0x62587b*/
    memset(v5, 0, v6); /*0x625880*/
    if ( (int)v2 > 0 ) /*0x62588b*/
    {
      int * v7 = v3; /*0x62588d*/
      unsigned int v8 = v2; /*0x62588f*/
      do /*0x6258c9*/
      {
        int v9 = *v7; /*0x625891*/
        if ( *v7 ) /*0x625891*/
        {
  int v12; // eax
          do /*0x6258c3*/
          {
            int v10 = ((int (__thiscall *)(int))this->q018)(v9) & ((1 << this->q00C) - 1); /*0x6258a7*/
            int v11 = *(_DWORD *)(*this + 4 * v10); /*0x6258ab*/
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
void HashTable::FindString(char * Str1, IUnknown * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  BOOL v4; // eax
  int v3 = this->q004; /*0x625f61*/
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
void HashTable::FindChunk(char * Str1, void * a2, CCINIClass * aP3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  int v4 = this->q004; /*0x625fb1*/
  if ( !v4 ) /*0x625fb7*/
    return 0; /*0x625fd4*/
  while ( strncmp(Str1, (const char *)v4, 4u) ) /*0x625fcb*/
  {
    v4 = *(_DWORD *)(v4 + 12); /*0x625fcd*/
    if ( !v4 ) /*0x625fd2*/
      return 0; /*0x625fd2*/
  }
  unsigned int v6 = *(_DWORD *)aP3->__pad_0; /*0x625fee*/
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
{
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
    int v2 = this->HashTable_field_0x04; /*0x6b9545*/
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
    v11 = v28 < this->q020; /*0x6b95e4*/
    v12 = v28 == this->q020; /*0x6b95e4*/
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
void HashTable::Find(const char * a1, ConvertClass * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  ObjectClass *v4; // esi
  String::Assign((char **)&a1, a1); /*0x6ba14c*/
  if ( (g_OverlayTypeConfig[16696] & 1) == 0 ) /*0x6ba158*/
  {
    *(_DWORD *)&g_OverlayTypeConfig[16720] = 0; /*0x6ba164*/
    g_OverlayTypeConfig[16696] |= 1u; /*0x6ba16e*/
    atexit(nullsub_39); /*0x6ba174*/
  }
  *(_DWORD *)&g_OverlayTypeConfig[16720] = 0; /*0x6ba17c*/
  if ( this->q004 /*0x6ba1a8*/
    && (v4 = *(ObjectClass **)(*this
                             + 4 * (((int (__thiscall *)(const char **))this->q018)(&a1) & ((1 << this->q00C) - 1)))) != 0 )
  {
    while ( !String::Compare((const char **)v4, &a1) ) /*0x6ba1b8*/
    {
      v4 = (ObjectClass *)v4[4].customSound_controller[2]; /*0x6ba1ba*/
      if ( !v4 ) /*0x6ba1c2*/
        goto LABEL_7; /*0x6ba1c2*/
    }
    char * v6 = &v4->__pad_0[4]; /*0x6ba1d7*/
    if ( v6 ) /*0x6ba1dd*/
      qmemcpy(&g_OverlayTypeConfig[16720], v6, 0x304u); /*0x6ba1e9*/
    if ( aP2 ) /*0x6ba1f1*/
      qmemcpy(aP2, &g_OverlayTypeConfig[16724], 0x300u); /*0x6ba1fd*/
    int v7 = *(_DWORD *)&g_OverlayTypeConfig[16720]; /*0x6ba1ff*/
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
{

  void *v16; // [esp+Ch] [ebp-310h] BYREF
  String::Assign((char **)&v16, a2); /*0x6ba247*/
  int v3 = this->HashTable_field_0x04; /*0x6ba24c*/
  _DWORD v18[193]; // [esp+18h] [ebp-304h] BYREF
  v18[0] = 0; /*0x6ba253*/
  if ( !v3 ) /*0x6ba257*/
    goto LABEL_24; /*0x6ba257*/
  int v4; // esi
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
  const void * v5 = (const void *)(v4 + 4); /*0x6ba2a5*/
  if ( v5 ) /*0x6ba2ab*/
    qmemcpy(v18, v5, sizeof(v18)); /*0x6ba2b6*/
  int v6 = this->HashTable_field_0x04; /*0x6ba2b8*/
  if ( v6 ) /*0x6ba2bd*/
  {
    int v7 = this->HashTable_field_0x08; /*0x6ba2c3*/
    __int64 v17 = (unsigned int)(v6 - 1); /*0x6ba2c7*/
    *(float *)&v17 = (double)v17 / (double)v7; /*0x6ba2e3*/
    int v8 = (*(int (__thiscall **)(void **))(this + 24))(&v16) & ((1 << this->HashTable_field_0x0C) - 1); /*0x6ba2f5*/
    int v9 = *(_DWORD *)(*(_DWORD *)this + 4 * v8); /*0x6ba2f9*/
    if ( v9 ) /*0x6ba2fe*/
    {
      if ( String::Compare((const char **)v9, (const char **)&v16) ) /*0x6ba30b*/
      {
        _DWORD * v10 = *(_DWORD **)(*(_DWORD *)this + 4 * v8); /*0x6ba316*/
        int v11 = v10[194]; /*0x6ba31b*/
        if ( v10 ) /*0x6ba321*/
        {
          DeleteAndZero(*(void ***)(*(_DWORD *)this + 4 * v8)); /*0x6ba325*/
          __3_YAXPAX_Z(v10); /*0x6ba32b*/
        }
        double v12 = *(float *)&v17; /*0x6ba335*/
        *(_DWORD *)(*(_DWORD *)this + 4 * v8) = v11; /*0x6ba339*/
        bool v13 = v12 < this->q020; /*0x6ba33f*/
        bool v14 = v12 == this->q020; /*0x6ba33f*/
        --this->HashTable_field_0x04; /*0x6ba343*/
        if ( !v13 && !v14 ) /*0x6ba348*/
          goto LABEL_22; /*0x6ba34b*/
      }
      else
      {
        int v15 = *(_DWORD *)(v9 + 776); /*0x6ba34f*/
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
        if ( *(float *)&v17 > this->q020 ) /*0x6ba3aa*/
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
void HashTable::RemoveHashTableEntry(ObjectClass * aP1, void * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  SessionClass *v9; // esi
  AbstractClass *v14; // ebx
  AbstractClass *v18; // edi
  ObjectClass *v24; // ebx
  AbstractClass *v27; // ebx
  AbstractClass *v28; // edi
  AbstractClass *v30; // edi
  ObjectClass *v32; // esi
  ObjectClass *v35; // eax
  ObjectClass *v36; // [esp+10h] [ebp-Ch]
  char aP1a; // [esp+20h] [ebp+4h]
  AbstractClass *a2a; // [esp+24h] [ebp+8h]
  AbstractClass *a2b; // [esp+24h] [ebp+8h]

  int v4 = this->q004; /*0x6bac4b*/
  if ( !v4 ) /*0x6bac50*/
    return 0; /*0x6bac55*/
  float v37 = (double)(unsigned int)(v4 - 1) / (double)(int)this->q008; /*0x6bac80*/
  int v7 = ((int (__thiscall *)(ObjectClass *))this->q018)(aP1) & ((1 << this->q00C) - 1); /*0x6bac95*/
  int v8 = *(_DWORD *)(*this + 4 * v7); /*0x6bac97*/
  v36 = (ObjectClass *)v8; /*0x6bac9c*/
  if ( !v8 ) /*0x6baca0*/
    return 0; /*0x6baca5*/
  if ( String::Compare((const char **)v8, (const char **)aP1) ) /*0x6bacb1*/
  {
    qmemcpy(a2, (const void *)(v8 + 4), 0x304u); /*0x6bacca*/
    v9 = *(SessionClass **)(*this + 4 * v7); /*0x6baccf*/
    int v10 = *(_DWORD *)&v9->WOLLimitResolution; /*0x6bacd4*/
    if ( v9 ) /*0x6bacda*/
    {
      DeleteAndZero(*(void ***)(*this + 4 * v7)); /*0x6bacde*/
      __3_YAXPAX_Z(v9); /*0x6bace4*/
    }
    *(_DWORD *)(*this + 4 * v7) = v10; /*0x6bacf3*/
    bool v11 = v37 < this->q010; /*0x6bacf9*/
    bool v12 = v37 == this->q010; /*0x6bacf9*/
    --this->q004; /*0x6bacfd*/
    if ( v11 || v12 ) /*0x6bad02*/
    {
      unsigned int v13 = this->q008; /*0x6bad0b*/
      if ( v13 > this->q030 && (unsigned char)this->HashTable_field_0x14 != 1 ) /*0x6bad1d*/
      {
        v14 = (AbstractClass *)*this; /*0x6bad26*/
        a2a = (AbstractClass *)*this; /*0x6bad2b*/
        int v15 = this->q00C - 1; /*0x6bad31*/
        this->q008 = v13 >> 1; /*0x6bad32*/
        this->q00C = v15; /*0x6bad3c*/
        void * v16 = (void *)__2_YAPAXI_Z(4 * (v13 >> 1)); /*0x6bad48*/
        unsigned int v17 = 4 * this->q008; /*0x6bad4d*/
        *this = v16; /*0x6bad54*/
        memset(v16, 0, v17); /*0x6bad5a*/
        if ( (int)v13 > 0 ) /*0x6bad65*/
        {
          v18 = v14; /*0x6bad67*/
          unsigned int v19 = v13; /*0x6bad69*/
          do /*0x6bada4*/
          {
            int v20 = *(_DWORD *)v18->__pad_0; /*0x6bad6b*/
            if ( *(_DWORD *)v18->__pad_0 ) /*0x6bad6b*/
            {
  int v23; // eax
              do /*0x6bad9e*/
              {
                int v21 = ((int (__thiscall *)(int))this->q018)(v20) & ((1 << this->q00C) - 1); /*0x6bad81*/
                int v22 = *(_DWORD *)(*this + 4 * v21); /*0x6bad86*/
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
      --this->q004; /*0x6bae0e*/
      DeleteAndZero((void **)v24); /*0x6bae15*/
      __3_YAXPAX_Z(v24); /*0x6bae1b*/
      aP1a = 1; /*0x6bae23*/
    }
LABEL_24:
    if ( v37 <= this->q010 ) /*0x6bae34*/
    {
      unsigned int v25 = this->q008; /*0x6bae3a*/
      if ( v25 > this->q030 && (unsigned char)this->HashTable_field_0x14 != 1 ) /*0x6bae4c*/
      {
        int v26 = this->q00C; /*0x6bae52*/
        v27 = (AbstractClass *)*this; /*0x6bae55*/
        a2b = (AbstractClass *)*this; /*0x6bae5a*/
        this->q008 = v25 >> 1; /*0x6bae60*/
        this->q00C = v26 - 1; /*0x6bae68*/
        v28 = (AbstractClass *)__2_YAPAXI_Z(4 * (v25 >> 1)); /*0x6bae73*/
        unsigned int v29 = 4 * this->q008; /*0x6bae78*/
        *this = v28; /*0x6bae7f*/
        memset(v28, 0, v29); /*0x6bae85*/
        if ( (int)v25 > 0 ) /*0x6bae90*/
        {
          v30 = v27; /*0x6bae92*/
          unsigned int v31 = v25; /*0x6bae94*/
          do /*0x6baecf*/
          {
            v32 = *(ObjectClass **)v30->__pad_0; /*0x6bae96*/
            if ( *(_DWORD *)v30->__pad_0 ) /*0x6bae96*/
            {
              do /*0x6baec9*/
              {
                int v33 = ((int (__thiscall *)(ObjectClass *))this->q018)(v32) & ((1 << this->q00C) - 1); /*0x6baeac*/
                int v34 = *(_DWORD *)(*this + 4 * v33); /*0x6baeb1*/
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
{

  unsigned int v2 = this->q008; /*0x6baef5*/
  if ( v2 > this->q030 && (unsigned char)this->HashTable_field_0x14 != 1 ) /*0x6baf07*/
  {
    int * v3 = (int *)*this; /*0x6baf10*/
    int v4 = this->q00C; /*0x6baf13*/
    int * v13 = (int *)*this; /*0x6baf16*/
    this->q008 = v2 >> 1; /*0x6baf1c*/
    this->q00C = v4 - 1; /*0x6baf24*/
    void * v5 = __2_YAPAXI_Z(4 * (v2 >> 1)); /*0x6baf2f*/
    unsigned int v6 = 4 * this->q008; /*0x6baf34*/
    *this = v5; /*0x6baf3b*/
    memset(v5, 0, v6); /*0x6baf40*/
    if ( (int)v2 > 0 ) /*0x6baf4b*/
    {
      int * v7 = v3; /*0x6baf4d*/
      unsigned int v8 = v2; /*0x6baf4f*/
      do /*0x6baf89*/
      {
        int v9 = *v7; /*0x6baf51*/
        if ( *v7 ) /*0x6baf51*/
        {
  int v12; // eax
          do /*0x6baf83*/
          {
            int v10 = ((int (__thiscall *)(int))this->q018)(v9) & ((1 << this->q00C) - 1); /*0x6baf67*/
            int v11 = *(_DWORD *)(*this + 4 * v10); /*0x6baf6b*/
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
{
  void **v8; // eax
  size_t v12; // eax
  int i; // ecx
  void *Block; // [esp+8h] [ebp-Ch] BYREF

  _DWORD * v3 = this + 147; /*0x72473d*/
  if ( !*(this + 148) ) /*0x724745*/
    return; /*0x724745*/
  _DWORD * v4 = (_DWORD *)*(this + 151); /*0x72474b*/
  if ( !v4 || *v4 != a2 ) /*0x72475a*/
  {
    int v5 = CommandClass::BinarySearchAction(&a2); /*0x724763*/
    if ( !v5 ) /*0x72476a*/
      return; /*0x72476a*/
    v3[4] = v5; /*0x724770*/
  }
  if ( v3[1] ) /*0x724773*/
  {
    _DWORD * v6 = (_DWORD *)v3[4]; /*0x72477a*/
    if ( v6 && *v6 == a2 ) /*0x724789*/
      goto LABEL_11; /*0x724789*/
    int v7 = CommandClass::BinarySearchAction(&a2); /*0x724792*/
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
  void * v9 = *v8; /*0x7247ab*/
  void * v10 = (void *)this->q004; /*0x7247ad*/
  Block = v9; /*0x7247b2*/
  if ( v10 == v9 && v10 ) /*0x7247ba*/
  {
    (*(void (__thiscall **)(int *, int *))(*this + 8))(this, this + 6); /*0x7247c5*/
    v9 = Block; /*0x7247c8*/
  }
  int * v11 = (int *)v9; /*0x7247cd*/
  v12 = v3[1]; /*0x7247cf*/
  if ( v12 ) /*0x7247d4*/
  {
    if ( !*((_BYTE *)v3 + 12) ) /*0x7247da*/
    {
      qsort((void *)*v3, v12, 8u, CompareFunc2Int); /*0x7247ec*/
      v3[4] = 0; /*0x7247f4*/
      *((_BYTE *)v3 + 12) = 1; /*0x7247fb*/
    }
    int v23 = *v11; /*0x724807*/
    int v13 = UI_Remove(&v23); /*0x72480f*/
    if ( v13 ) /*0x724816*/
    {
      int v14 = (v13 - *v3) >> 3; /*0x72481a*/
      if ( v14 != -1 ) /*0x724820*/
      {
  _DWORD *v16; // eax
        for ( i = v14 + 1; i < v3[1]; *(v16 - 1) = v16[1] ) /*0x72482a*/
        {
          v16 = (_DWORD *)(*v3 + 8 * i++); /*0x72482e*/
          *(v16 - 2) = *v16; /*0x724834*/
        }
        _DWORD * v17 = (_DWORD *)*v3; /*0x724847*/
        int v18 = v3[1] - 1; /*0x724849*/
        v3[1] = v18; /*0x72484c*/
        v17[2 * v18] = 0; /*0x724851*/
        v17[2 * v18 + 1] = 0; /*0x724854*/
        v3[4] = 0; /*0x724858*/
      }
    }
  }
  int v19 = (*(int (__thiscall **)(int *, void **))(*(this + 141) + 16))(this + 141, &Block); /*0x72486e*/
  if ( v19 != -1 ) /*0x724875*/
  {
    int v20 = *(this + 145); /*0x724877*/
    if ( v19 < v20 ) /*0x72487c*/
    {
      int v21 = v20 - 1; /*0x72487e*/
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
{
  unsigned int i; // ebp
  void **v4; // edi
  unsigned int result; // eax

  for ( i = 0; i < this->q008; *(_DWORD *)(*this + 4 * i - 4) = 0 ) /*0x7ace67*/
  {
    int v3 = *(_DWORD *)(*this + 4 * i); /*0x7ace72*/
    while ( v3 ) /*0x7ace77*/
    {
      v4 = (void **)v3; /*0x7ace79*/
      v3 = *(_DWORD *)(v3 + 8); /*0x7ace7b*/
      DeleteAndZero(v4); /*0x7ace84*/
      __3_YAXPAX_Z(v4); /*0x7ace8a*/
    }
    ++i; /*0x7ace98*/
  }
  result = this->q030; /*0x7acea8*/
  unsigned int v6 = this->q008; /*0x7aceab*/
  for ( this->q004 = 0; v6 > result; v6 = this->q008 ) /*0x7aceb7*/
  {
    if ( (unsigned char)this->HashTable_field_0x14 ) /*0x7acebd*/
      break; /*0x7acec2*/
    if ( v6 > result ) /*0x7aceca*/
    {
      int v7 = this->q00C; /*0x7aced0*/
      int * v8 = (int *)*this; /*0x7aced3*/
      int * v17 = (int *)*this; /*0x7aced7*/
      this->q008 = v6 >> 1; /*0x7acede*/
      this->q00C = v7 - 1; /*0x7acee8*/
      void * v9 = __2_YAPAXI_Z(4 * (v6 >> 1)); /*0x7acef4*/
      unsigned int v10 = 4 * this->q008; /*0x7acef9*/
      *this = v9; /*0x7acf00*/
      memset(v9, 0, v10); /*0x7acf05*/
      if ( (int)v6 > 0 ) /*0x7acf10*/
      {
        int * v11 = v8; /*0x7acf12*/
        unsigned int v12 = v6; /*0x7acf14*/
        do /*0x7acf48*/
        {
          int v13 = *v11; /*0x7acf16*/
          if ( *v11 ) /*0x7acf16*/
          {
  int v16; // eax
            do /*0x7acf42*/
            {
              int v14 = ((int (__thiscall *)(int))this->q018)(v13) & ((1 << this->q00C) - 1); /*0x7acf2c*/
              int v15 = *(_DWORD *)(*this + 4 * v14); /*0x7acf30*/
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
    result = this->q030; /*0x7acf57*/
  }
  return result; /*0x7acf65*/
}
}

// 0x7ACF70
unsigned int HashTable::Rebuild()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  unsigned int i; // ebp
  void **v4; // edi
  unsigned int result; // eax

  for ( i = 0; i < this->q008; *(_DWORD *)(*this + 4 * i - 4) = 0 ) /*0x7acf77*/
  {
    int v3 = *(_DWORD *)(*this + 4 * i); /*0x7acf82*/
    while ( v3 ) /*0x7acf87*/
    {
      v4 = (void **)v3; /*0x7acf89*/
      v3 = *(_DWORD *)(v3 + 272); /*0x7acf8b*/
      DeleteAndZero(v4); /*0x7acf97*/
      __3_YAXPAX_Z(v4); /*0x7acf9d*/
    }
    ++i; /*0x7acfab*/
  }
  result = this->q030; /*0x7acfbb*/
  unsigned int v6 = this->q008; /*0x7acfbe*/
  for ( this->q004 = 0; v6 > result; v6 = this->q008 ) /*0x7acfca*/
  {
    if ( (unsigned char)this->HashTable_field_0x14 ) /*0x7acfd0*/
      break; /*0x7acfd5*/
    if ( v6 > result ) /*0x7acfdd*/
    {
      int v7 = this->q00C; /*0x7acfe3*/
      int * v8 = (int *)*this; /*0x7acfe6*/
      int * v17 = (int *)*this; /*0x7acfea*/
      this->q008 = v6 >> 1; /*0x7acff1*/
      this->q00C = v7 - 1; /*0x7acffb*/
      void * v9 = __2_YAPAXI_Z(4 * (v6 >> 1)); /*0x7ad007*/
      unsigned int v10 = 4 * this->q008; /*0x7ad00c*/
      *this = v9; /*0x7ad013*/
      memset(v9, 0, v10); /*0x7ad018*/
      if ( (int)v6 > 0 ) /*0x7ad023*/
      {
        int * v11 = v8; /*0x7ad025*/
        unsigned int v12 = v6; /*0x7ad027*/
        do /*0x7ad061*/
        {
          int v13 = *v11; /*0x7ad029*/
          if ( *v11 ) /*0x7ad029*/
          {
  int v16; // eax
            do /*0x7ad05b*/
            {
              int v14 = ((int (__thiscall *)(int))this->q018)(v13) & ((1 << this->q00C) - 1); /*0x7ad03f*/
              int v15 = *(_DWORD *)(*this + 4 * v14); /*0x7ad043*/
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
    result = this->q030; /*0x7ad070*/
  }
  return result; /*0x7ad07e*/
}
}

// 0x7ADC60
void HashTable::LookupString(const char ** a2, unsigned int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  bool result; // al

  if ( !this->q004 ) /*0x7adc64*/
    return 0; /*0x7adc6c*/
  int v4 = *(_DWORD *)(*this + 4 * (((int (__thiscall *)(const char **))this->q018)(a2) & ((1 << this->q00C) - 1))); /*0x7adc8a*/
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
void HashTable::Insert(ObjectClass * aP1, void * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  SessionClass *v9; // esi
  AbstractClass *v14; // ebx
  AbstractClass *v18; // edi
  ObjectClass *v24; // ebx
  AbstractClass *v27; // ebx
  AbstractClass *v28; // edi
  AbstractClass *v30; // edi
  ObjectClass *v32; // esi
  ObjectClass *v35; // eax
  ObjectClass *v36; // [esp+10h] [ebp-Ch]
  char aP1a; // [esp+20h] [ebp+4h]
  AbstractClass *a2a; // [esp+24h] [ebp+8h]
  AbstractClass *a2b; // [esp+24h] [ebp+8h]

  int v4 = this->q004; /*0x7adcdb*/
  if ( !v4 ) /*0x7adce0*/
    return 0; /*0x7adce5*/
  float v37 = (double)(unsigned int)(v4 - 1) / (double)(int)this->q008; /*0x7add10*/
  int v7 = ((int (__thiscall *)(ObjectClass *))this->q018)(aP1) & ((1 << this->q00C) - 1); /*0x7add25*/
  int v8 = *(_DWORD *)(*this + 4 * v7); /*0x7add27*/
  v36 = (ObjectClass *)v8; /*0x7add2c*/
  if ( !v8 ) /*0x7add30*/
    return 0; /*0x7add35*/
  if ( String::Compare((const char **)v8, (const char **)aP1) ) /*0x7add41*/
  {
    qmemcpy(a2, (const void *)(v8 + 4), 0x6Cu); /*0x7add5a*/
    v9 = *(SessionClass **)(*this + 4 * v7); /*0x7add5f*/
    int v10 = *(_DWORD *)&v9->__pad_50[32]; /*0x7add64*/
    if ( v9 ) /*0x7add67*/
    {
      DeleteAndZero(*(void ***)(*this + 4 * v7)); /*0x7add6b*/
      __3_YAXPAX_Z(v9); /*0x7add71*/
    }
    *(_DWORD *)(*this + 4 * v7) = v10; /*0x7add80*/
    bool v11 = v37 < this->q010; /*0x7add86*/
    bool v12 = v37 == this->q010; /*0x7add86*/
    --this->q004; /*0x7add8a*/
    if ( v11 || v12 ) /*0x7add8f*/
    {
      unsigned int v13 = this->q008; /*0x7add98*/
      if ( v13 > this->q030 && (unsigned char)this->HashTable_field_0x14 != 1 ) /*0x7addaa*/
      {
        v14 = (AbstractClass *)*this; /*0x7addb3*/
        a2a = (AbstractClass *)*this; /*0x7addb8*/
        int v15 = this->q00C - 1; /*0x7addbe*/
        this->q008 = v13 >> 1; /*0x7addbf*/
        this->q00C = v15; /*0x7addc9*/
        void * v16 = (void *)__2_YAPAXI_Z(4 * (v13 >> 1)); /*0x7addd5*/
        unsigned int v17 = 4 * this->q008; /*0x7addda*/
        *this = v16; /*0x7adde1*/
        memset(v16, 0, v17); /*0x7adde7*/
        if ( (int)v13 > 0 ) /*0x7addf2*/
        {
          v18 = v14; /*0x7addf4*/
          unsigned int v19 = v13; /*0x7addf6*/
          do /*0x7ade2b*/
          {
            int v20 = *(_DWORD *)v18->__pad_0; /*0x7addf8*/
            if ( *(_DWORD *)v18->__pad_0 ) /*0x7addf8*/
            {
  int v23; // eax
              do /*0x7ade25*/
              {
                int v21 = ((int (__thiscall *)(int))this->q018)(v20) & ((1 << this->q00C) - 1); /*0x7ade0e*/
                int v22 = *(_DWORD *)(*this + 4 * v21); /*0x7ade13*/
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
      --this->q004; /*0x7ade89*/
      DeleteAndZero((void **)v24); /*0x7ade90*/
      __3_YAXPAX_Z(v24); /*0x7ade96*/
      aP1a = 1; /*0x7ade9e*/
    }
LABEL_24:
    if ( v37 <= this->q010 ) /*0x7adeaf*/
    {
      unsigned int v25 = this->q008; /*0x7adeb5*/
      if ( v25 > this->q030 && (unsigned char)this->HashTable_field_0x14 != 1 ) /*0x7adec7*/
      {
        int v26 = this->q00C; /*0x7adecd*/
        v27 = (AbstractClass *)*this; /*0x7aded0*/
        a2b = (AbstractClass *)*this; /*0x7aded5*/
        this->q008 = v25 >> 1; /*0x7adedb*/
        this->q00C = v26 - 1; /*0x7adee3*/
        v28 = (AbstractClass *)__2_YAPAXI_Z(4 * (v25 >> 1)); /*0x7adeee*/
        unsigned int v29 = 4 * this->q008; /*0x7adef3*/
        *this = v28; /*0x7adefa*/
        memset(v28, 0, v29); /*0x7adf00*/
        if ( (int)v25 > 0 ) /*0x7adf0b*/
        {
          v30 = v27; /*0x7adf0d*/
          unsigned int v31 = v25; /*0x7adf0f*/
          do /*0x7adf44*/
          {
            v32 = *(ObjectClass **)v30->__pad_0; /*0x7adf11*/
            if ( *(_DWORD *)v30->__pad_0 ) /*0x7adf11*/
            {
              do /*0x7adf3e*/
              {
                int v33 = ((int (__thiscall *)(ObjectClass *))this->q018)(v32) & ((1 << this->q00C) - 1); /*0x7adf27*/
                int v34 = *(_DWORD *)(*this + 4 * v33); /*0x7adf2c*/
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
void HashTable::Lookup(ObjectClass * aP1, TechnoTypeClass * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  ObjectClass *v8; // ebp
  TechnoTypeClass **v9; // ebp
  TechnoTypeClass *v10; // ebx
  AbstractClass *v15; // ebx
  AbstractClass *v16; // edi
  ObjectClass *v22; // edi
  AbstractClass *v24; // ebx
  char aP1a; // [esp+1Ch] [ebp+4h]
  AbstractClass *aP2a; // [esp+20h] [ebp+8h]
  AbstractClass *aP2b; // [esp+20h] [ebp+8h]

  int v4 = this->q004; /*0x7ae1fb*/
  if ( !v4 ) /*0x7ae200*/
    return 0; /*0x7ae205*/
  float v32 = (double)(unsigned int)(v4 - 1) / (double)(int)this->q008; /*0x7ae230*/
  int v7 = ((int (__thiscall *)(ObjectClass *))this->q018)(aP1) & ((1 << this->q00C) - 1); /*0x7ae244*/
  v8 = *(ObjectClass **)(*this + 4 * v7); /*0x7ae246*/
  if ( !v8 ) /*0x7ae24b*/
    return 0; /*0x7ae250*/
  if ( String::Compare((const char **)v8, (const char **)aP1) ) /*0x7ae25c*/
  {
    *(_DWORD *)aP2->vtable0 = *(_DWORD *)&v8->__pad_0[4]; /*0x7ae270*/
    v9 = *(TechnoTypeClass ***)(*this + 4 * v7); /*0x7ae274*/
    v10 = v9[2]; /*0x7ae279*/
    if ( v9 ) /*0x7ae27c*/
    {
      DeleteAndZero(*(void ***)(*this + 4 * v7)); /*0x7ae280*/
      __3_YAXPAX_Z(v9); /*0x7ae286*/
    }
    *(_DWORD *)(*this + 4 * v7) = v10; /*0x7ae294*/
    bool v11 = v32 < this->q010; /*0x7ae29a*/
    bool v12 = v32 == this->q010; /*0x7ae29a*/
    --this->q004; /*0x7ae29e*/
    if ( v11 || v12 ) /*0x7ae2a3*/
    {
      unsigned int v13 = this->q008; /*0x7ae2ac*/
      if ( v13 > this->q030 && (unsigned char)this->HashTable_field_0x14 != 1 ) /*0x7ae2be*/
      {
        int v14 = this->q00C; /*0x7ae2c0*/
        v15 = (AbstractClass *)*this; /*0x7ae2c3*/
        aP2a = (AbstractClass *)*this; /*0x7ae2c7*/
        this->q008 = v13 >> 1; /*0x7ae2cd*/
        this->q00C = v14 - 1; /*0x7ae2d5*/
        v16 = (AbstractClass *)__2_YAPAXI_Z(4 * (v13 >> 1)); /*0x7ae2e0*/
        unsigned int v17 = 4 * this->q008; /*0x7ae2e5*/
        *this = v16; /*0x7ae2ec*/
        memset(v16, 0, v17); /*0x7ae2f1*/
        if ( (int)v13 > 0 ) /*0x7ae2fc*/
        {
          do /*0x7ae330*/
          {
            int v18 = *(_DWORD *)v15->__pad_0; /*0x7ae2fe*/
            if ( *(_DWORD *)v15->__pad_0 ) /*0x7ae2fe*/
            {
  int v21; // eax
              do /*0x7ae32a*/
              {
                int v19 = ((int (__thiscall *)(int))this->q018)(v18) & ((1 << this->q00C) - 1); /*0x7ae314*/
                int v20 = *(_DWORD *)(*this + 4 * v19); /*0x7ae318*/
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
      *(_DWORD *)aP2->vtable0 = *(_DWORD *)&v22->__pad_0[4]; /*0x7ae375*/
      *(_DWORD *)&v8->__pad_0[8] = *(_DWORD *)&v22->__pad_0[8]; /*0x7ae37a*/
      --this->q004; /*0x7ae383*/
      DeleteAndZero((void **)v22); /*0x7ae38a*/
      __3_YAXPAX_Z(v22); /*0x7ae390*/
      aP1a = 1; /*0x7ae398*/
    }
LABEL_23:
    if ( v32 <= this->q010 ) /*0x7ae3a9*/
    {
      unsigned int v23 = this->q008; /*0x7ae3af*/
      if ( v23 > this->q030 && (unsigned char)this->HashTable_field_0x14 != 1 ) /*0x7ae3c1*/
      {
        v24 = (AbstractClass *)*this; /*0x7ae3ca*/
        aP2b = (AbstractClass *)*this; /*0x7ae3ce*/
        int v25 = this->q00C - 1; /*0x7ae3d4*/
        this->q008 = v23 >> 1; /*0x7ae3d5*/
        this->q00C = v25; /*0x7ae3df*/
        void * v26 = (void *)__2_YAPAXI_Z(4 * (v23 >> 1)); /*0x7ae3eb*/
        unsigned int v27 = 4 * this->q008; /*0x7ae3f0*/
        *this = v26; /*0x7ae3f7*/
        memset(v26, 0, v27); /*0x7ae3fc*/
        if ( (int)v23 > 0 ) /*0x7ae407*/
        {
          do /*0x7ae43b*/
          {
            int v28 = *(_DWORD *)v24->__pad_0; /*0x7ae409*/
            if ( *(_DWORD *)v24->__pad_0 ) /*0x7ae409*/
            {
  int v31; // eax
              do /*0x7ae435*/
              {
                int v29 = ((int (__thiscall *)(int))this->q018)(v28) & ((1 << this->q00C) - 1); /*0x7ae41f*/
                int v30 = *(_DWORD *)(*this + 4 * v29); /*0x7ae423*/
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
{

  if ( (unsigned char)this->HashTable_field_0x14 != 1 ) /*0x7ae518*/
  {
    rc_ptr_base *v2 = this->q008; /*0x7ae520*/
    _DWORD * v3 = (_DWORD *)*this; /*0x7ae523*/
    int v4 = this->q00C + 1; /*0x7ae52c*/
    this->q008 = 2 * v2; /*0x7ae52d*/
    _DWORD * v13 = v3; /*0x7ae530*/
    this->q00C = v4; /*0x7ae538*/
    void * v5 = __2_YAPAXI_Z(8 * v2); /*0x7ae543*/
    unsigned int v6 = 4 * this->q008; /*0x7ae548*/
    *this = v5; /*0x7ae54f*/
    memset(v5, 0, v6); /*0x7ae554*/
    if ( v2 > 0 ) /*0x7ae55f*/
    {
      int * v7 = v3; /*0x7ae561*/
      rc_ptr_base *v8 = v2; /*0x7ae563*/
      do /*0x7ae597*/
      {
        int v9 = *v7; /*0x7ae565*/
        if ( *v7 ) /*0x7ae565*/
        {
  int v12; // eax
          do /*0x7ae591*/
          {
            int v10 = ((int (__thiscall *)(int))this->q018)(v9) & ((1 << this->q00C) - 1); /*0x7ae57b*/
            int v11 = *(_DWORD *)(*this + 4 * v10); /*0x7ae57f*/
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
void HashTable::FindWOLHashTableEntry(const char ** a2, void * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  int v4 = this->q004; /*0x7ae95b*/
  if ( !v4 ) /*0x7ae960*/
    return 0; /*0x7ae965*/
  float v37 = (double)(unsigned int)(v4 - 1) / (double)(int)this->q008; /*0x7ae990*/
  int v7 = ((int (__thiscall *)(const char **))this->q018)(a2) & ((1 << this->q00C) - 1); /*0x7ae9a5*/
  int v8 = *(_DWORD *)(*this + 4 * v7); /*0x7ae9a7*/
  int v36 = v8; /*0x7ae9ac*/
  if ( !v8 ) /*0x7ae9b0*/
    return 0; /*0x7ae9b5*/
  if ( String::Compare((const char **)v8, a2) ) /*0x7ae9c1*/
  {
    qmemcpy(a3, (const void *)(v8 + 4), 0x10Cu); /*0x7ae9da*/
    _DWORD * v9 = *(_DWORD **)(*this + 4 * v7); /*0x7ae9df*/
    int v10 = v9[68]; /*0x7ae9e4*/
    if ( v9 ) /*0x7ae9ea*/
    {
      DeleteAndZero(*(void ***)(*this + 4 * v7)); /*0x7ae9ee*/
      __3_YAXPAX_Z(v9); /*0x7ae9f4*/
    }
    *(_DWORD *)(*this + 4 * v7) = v10; /*0x7aea03*/
    bool v11 = v37 < this->q010; /*0x7aea09*/
    bool v12 = v37 == this->q010; /*0x7aea09*/
    --this->q004; /*0x7aea0d*/
    if ( v11 || v12 ) /*0x7aea12*/
    {
      unsigned int v13 = this->q008; /*0x7aea1b*/
      if ( v13 > this->q030 && (unsigned char)this->HashTable_field_0x14 != 1 ) /*0x7aea2d*/
      {
        int * v14 = (int *)*this; /*0x7aea36*/
        int * v39 = (int *)*this; /*0x7aea3b*/
        int v15 = this->q00C - 1; /*0x7aea41*/
        this->q008 = v13 >> 1; /*0x7aea42*/
        this->q00C = v15; /*0x7aea4c*/
        void * v16 = __2_YAPAXI_Z(4 * (v13 >> 1)); /*0x7aea58*/
        unsigned int v17 = 4 * this->q008; /*0x7aea5d*/
        *this = v16; /*0x7aea64*/
        memset(v16, 0, v17); /*0x7aea6a*/
        if ( (int)v13 > 0 ) /*0x7aea75*/
        {
          int * v18 = v14; /*0x7aea77*/
          unsigned int v19 = v13; /*0x7aea79*/
          do /*0x7aeab4*/
          {
            int v20 = *v18; /*0x7aea7b*/
            if ( *v18 ) /*0x7aea7b*/
            {
  int v23; // eax
              do /*0x7aeaae*/
              {
                int v21 = ((int (__thiscall *)(int))this->q018)(v20) & ((1 << this->q00C) - 1); /*0x7aea91*/
                int v22 = *(_DWORD *)(*this + 4 * v21); /*0x7aea96*/
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
    int v24 = *(_DWORD *)(v8 + 272); /*0x7aeacf*/
    char v38 = 0; /*0x7aead5*/
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
      --this->q004; /*0x7aeb1e*/
      DeleteAndZero((void **)v24); /*0x7aeb25*/
      __3_YAXPAX_Z((void *)v24); /*0x7aeb2b*/
      v38 = 1; /*0x7aeb33*/
    }
LABEL_24:
    if ( v37 <= this->q010 ) /*0x7aeb44*/
    {
      unsigned int v25 = this->q008; /*0x7aeb4a*/
      if ( v25 > this->q030 && (unsigned char)this->HashTable_field_0x14 != 1 ) /*0x7aeb5c*/
      {
        int v26 = this->q00C; /*0x7aeb62*/
        int * v27 = (int *)*this; /*0x7aeb65*/
        int * v40 = (int *)*this; /*0x7aeb6a*/
        this->q008 = v25 >> 1; /*0x7aeb70*/
        this->q00C = v26 - 1; /*0x7aeb78*/
        void * v28 = __2_YAPAXI_Z(4 * (v25 >> 1)); /*0x7aeb83*/
        unsigned int v29 = 4 * this->q008; /*0x7aeb88*/
        *this = v28; /*0x7aeb8f*/
        memset(v28, 0, v29); /*0x7aeb95*/
        if ( (int)v25 > 0 ) /*0x7aeba0*/
        {
          int * v30 = v27; /*0x7aeba2*/
          unsigned int v31 = v25; /*0x7aeba4*/
          do /*0x7aebdf*/
          {
            int v32 = *v30; /*0x7aeba6*/
            if ( *v30 ) /*0x7aeba6*/
            {
  int v35; // eax
              do /*0x7aebd9*/
              {
                int v33 = ((int (__thiscall *)(int))this->q018)(v32) & ((1 << this->q00C) - 1); /*0x7aebbc*/
                int v34 = *(_DWORD *)(*this + 4 * v33); /*0x7aebc1*/
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
{

  unsigned int v2 = this->q008; /*0x7aec05*/
  if ( v2 > this->q030 && (unsigned char)this->HashTable_field_0x14 != 1 ) /*0x7aec17*/
  {
    int * v3 = (int *)*this; /*0x7aec20*/
    int v4 = this->q00C; /*0x7aec23*/
    int * v13 = (int *)*this; /*0x7aec26*/
    this->q008 = v2 >> 1; /*0x7aec2c*/
    this->q00C = v4 - 1; /*0x7aec34*/
    void * v5 = __2_YAPAXI_Z(4 * (v2 >> 1)); /*0x7aec3f*/
    unsigned int v6 = 4 * this->q008; /*0x7aec44*/
    *this = v5; /*0x7aec4b*/
    memset(v5, 0, v6); /*0x7aec50*/
    if ( (int)v2 > 0 ) /*0x7aec5b*/
    {
      int * v7 = v3; /*0x7aec5d*/
      unsigned int v8 = v2; /*0x7aec5f*/
      do /*0x7aec99*/
      {
        int v9 = *v7; /*0x7aec61*/
        if ( *v7 ) /*0x7aec61*/
        {
  int v12; // eax
          do /*0x7aec93*/
          {
            int v10 = ((int (__thiscall *)(int))this->q018)(v9) & ((1 << this->q00C) - 1); /*0x7aec77*/
            int v11 = *(_DWORD *)(*this + 4 * v10); /*0x7aec7b*/
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

// 0x625070
int HashTable::ComputeHash(int a2)
{
{
    return (*(int (__thiscall **)(int))(this + 24))(a2) & ((1 << this->HashTable_field_0x0C) - 1);
}
}
