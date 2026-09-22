// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_5B6CD0_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/Voxel_e4.hpp"

// 0x411580
void Surface::IsLocked()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  return this->q00C != 0; /*0x41158a*/
}
}

// 0x5D1FD0
unsigned int * Surface::CopyRect(ObjectClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  ObjectClass *result; // eax
  ObjectClass *v7; // ecx
  ObjectClass *v13; // ebx
  ObjectClass *v25; // edi
  ObjectClass *v29; // edx
  ObjectClass *v31; // eax
  ObjectClass *v38; // [esp+18h] [ebp-24h]
  int v44; // [esp+2Ch] [ebp-10h] BYREF
  ObjectClass *v45; // [esp+30h] [ebp-Ch]
  int v46; // [esp+34h] [ebp-8h]
  ObjectClass *v47; // [esp+38h] [ebp-4h]
  char aP1a; // [esp+40h] [ebp+4h]
  ObjectClass *aP1b; // [esp+40h] [ebp+4h]
  unsigned int aP1c; // [esp+40h] [ebp+4h]

  result = (ObjectClass *)this; /*0x5d1fdc*/
  int v4 = *(_DWORD *)&aP1->__pad_0[8]; /*0x5d1fde*/
  int v37 = v4; /*0x5d1fe8*/
  if ( v4 <= 0 ) /*0x5d1fec*/
    return result->__pad_0; /*0x5d1fec*/
  int v39 = *(_DWORD *)&aP1->__pad_0[12]; /*0x5d1ff7*/
  if ( v39 <= 0 ) /*0x5d1ffb*/
    return result->__pad_0; /*0x5d1ffb*/
  int v5 = this->Width; /*0x5d2001*/
  int v34 = 0; /*0x5d2004*/
  int v41 = v5; /*0x5d200a*/
  if ( v5 <= 0 ) /*0x5d200e*/
  {
LABEL_18:
    if ( v5 >= result->uniqueId ) /*0x5d207c*/
    {
      int v22 = 0; /*0x5d2165*/
      aP1c = -1; /*0x5d2169*/
      v44 = 0; /*0x5d2171*/
      v45 = 0; /*0x5d2175*/
      v46 = 0; /*0x5d2179*/
      v47 = 0; /*0x5d217d*/
      int v35 = 0; /*0x5d2181*/
      if ( v5 > 0 ) /*0x5d2185*/
      {
        int v23 = *(_DWORD *)aP1->__pad_0; /*0x5d218b*/
        int v42 = *(_DWORD *)aP1->__pad_0; /*0x5d2191*/
        int v43 = *(_DWORD *)aP1->__pad_0 + v37; /*0x5d219b*/
        v38 = *(ObjectClass **)&aP1->__pad_0[4]; /*0x5d21a3*/
        char * v40 = &v38->__pad_0[v39]; /*0x5d21a9*/
        int * v24 = (int *)this->q00C; /*0x5d21b1*/
        while ( 1 ) /*0x5d21c0*/
        {
          v25 = (ObjectClass *)v24[1]; /*0x5d21c0*/
          int v26 = *v24 + v24[2]; /*0x5d21c6*/
          char * v27 = &v25->__pad_0[v24[3]]; /*0x5d21c8*/
          if ( v23 >= *v24 ) /*0x5d21cc*/
            v23 = *v24; /*0x5d21ce*/
          if ( (int)v38 < (int)v25 ) /*0x5d21d6*/
            v25 = v38; /*0x5d21d8*/
          if ( v43 > v26 ) /*0x5d21e0*/
            v26 = v43; /*0x5d21e2*/
          int v28 = v26 - v23; /*0x5d21e8*/
          if ( (int)v40 > (int)v27 ) /*0x5d21ec*/
            v27 = v40; /*0x5d21ee*/
          v29 = (ObjectClass *)(v27 - (char *)v25); /*0x5d21f0*/
          if ( v28 * (int)v29 < aP1c ) /*0x5d21fb*/
          {
            v22 = v35; /*0x5d21fd*/
            aP1c = v28 * (_DWORD)v29; /*0x5d2201*/
            v44 = v23; /*0x5d2205*/
            v45 = v25; /*0x5d2209*/
            v46 = v28; /*0x5d220d*/
            v47 = v29; /*0x5d2211*/
          }
          v24 += 4; /*0x5d221e*/
          if ( ++v35 >= v41 ) /*0x5d2227*/
            break; /*0x5d2227*/
          v23 = v42; /*0x5d21b6*/
        }
        result = (ObjectClass *)this; /*0x5d2229*/
      }
      int v30 = *(_DWORD *)&result->__pad_0[12]; /*0x5d222d*/
      v31 = v45; /*0x5d2230*/
      _DWORD * v32 = (_DWORD *)(v30 + 16 * v22); /*0x5d2237*/
      *v32 = v44; /*0x5d223d*/
      int v33 = v46; /*0x5d223f*/
      v32[1] = v31; /*0x5d2243*/
      result = v47; /*0x5d2246*/
      v32[2] = v33; /*0x5d224a*/
      v32[3] = result; /*0x5d224d*/
    }
    else
    {
      _DWORD * v11 = (_DWORD *)(*(_DWORD *)&result->__pad_0[12] + 16 * v5); /*0x5d208a*/
      *v11 = *(_DWORD *)aP1->__pad_0; /*0x5d208d*/
      v11[1] = *(_DWORD *)&aP1->__pad_0[4]; /*0x5d2093*/
      v11[2] = *(_DWORD *)&aP1->__pad_0[8]; /*0x5d2099*/
      v11[3] = *(_DWORD *)&aP1->__pad_0[12]; /*0x5d20a0*/
      ++*(_DWORD *)&result->__pad_0[4]; /*0x5d20a8*/
    }
    return result->__pad_0; /*0x5d20af*/
  }
  int v6 = *(_DWORD *)aP1->__pad_0; /*0x5d2010*/
  v7 = *(ObjectClass **)&aP1->__pad_0[4]; /*0x5d2012*/
  int * v8 = *(int **)&result->__pad_0[12]; /*0x5d2015*/
  while ( 1 ) /*0x5d2020*/
  {
    aP1a = 0; /*0x5d2020*/
    int v9 = *v8; /*0x5d2024*/
    if ( v6 >= *v8 ) /*0x5d2028*/
    {
      if ( v9 + v8[2] < v6 ) /*0x5d2039*/
        goto LABEL_11; /*0x5d2039*/
    }
    else if ( v6 + v4 < v9 ) /*0x5d202e*/
    {
      goto LABEL_11; /*0x5d202e*/
    }
    aP1a = 1; /*0x5d203b*/
LABEL_11:
    int v10 = v8[1]; /*0x5d2040*/
    if ( (int)v7 >= v10 ) /*0x5d2045*/
    {
      if ( v10 + v8[3] < (int)v7 ) /*0x5d205a*/
        goto LABEL_16; /*0x5d205a*/
    }
    else if ( (int)&v7->__pad_0[v39] < v10 ) /*0x5d204f*/
    {
      goto LABEL_16; /*0x5d204f*/
    }
    if ( aP1a == 1 ) /*0x5d2061*/
      break; /*0x5d2061*/
LABEL_16:
    v8 += 4; /*0x5d2063*/
    if ( ++v34 >= v5 ) /*0x5d2071*/
    {
      result = (ObjectClass *)this; /*0x5d2073*/
      goto LABEL_18; /*0x5d2073*/
    }
    v4 = v37; /*0x5d201a*/
  }
  int v12 = *v8; /*0x5d20b6*/
  v13 = (ObjectClass *)v8[1]; /*0x5d20b8*/
  int v14 = v6 + v37; /*0x5d20bb*/
  aP1b = (ObjectClass *)((char *)v7 + v39); /*0x5d20c4*/
  int v15 = *v8 + v8[2]; /*0x5d20ce*/
  int v16 = (int)&v13->__pad_0[v8[3]]; /*0x5d20d0*/
  if ( v6 < v12 ) /*0x5d20d4*/
    v12 = v6; /*0x5d20d6*/
  v44 = v12; /*0x5d20da*/
  if ( (int)v7 < (int)v13 ) /*0x5d20de*/
    v13 = v7; /*0x5d20e0*/
  v45 = v13; /*0x5d20e4*/
  if ( v14 <= v15 ) /*0x5d20e8*/
    v46 = v15 - v12; /*0x5d20f4*/
  else
    v46 = v14 - v12; /*0x5d20ec*/
  if ( (int)aP1b <= v16 ) /*0x5d20fe*/
    v47 = (ObjectClass *)(v16 - (_DWORD)v13); /*0x5d210a*/
  ObjectClass *v47 = (ObjectClass *)((char *)aP1b - (char *)v13); /*0x5d2102*/
  int v17 = v34; /*0x5d2116*/
  this->Width = v41 - 1; /*0x5d211d*/
  if ( v34 < v41 - 1 ) /*0x5d2120*/
  {
    int v18 = 16 * v34; /*0x5d2124*/
    do /*0x5d214f*/
    {
      int v19 = this->q00C; /*0x5d2127*/
      _DWORD * v20 = (_DWORD *)(v18 + v19 + 16); /*0x5d212a*/
      _DWORD * v21 = (_DWORD *)(v18 + v19); /*0x5d212e*/
      ++v17; /*0x5d2130*/
      v18 += 16; /*0x5d2131*/
      *v21 = *v20; /*0x5d2136*/
      v21[1] = v20[1]; /*0x5d213b*/
      v21[2] = v20[2]; /*0x5d2141*/
      v21[3] = v20[3]; /*0x5d2147*/
    }
    while ( v17 < this->Width ); /*0x5d214f*/
  }
  return Surface::CopyRect(this, (ObjectClass *)&v44); /*0x5d208c*/
}
}

// 0x626C60
namespace gamemd {
void sub_626C60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  if ( g_FileExtensionState ) /*0x626c68*/
    return *(_DWORD *)(*((_DWORD *)g_FileExtensionState + 1) + 16); /*0x626d93*/
  _DWORD * v0 = __2_YAPAXI_Z(0x10u); /*0x626c70*/
  _DWORD * v1 = v0; /*0x626c75*/
  if ( v0 ) /*0x626c7c*/
  {
    *v0 = -1; /*0x626c86*/
    _DWORD * v2 = __2_YAPAXI_Z(0x18u); /*0x626c8c*/
    _DWORD * v3 = v2; /*0x626c91*/
    if ( v2 ) /*0x626c98*/
    {
      StringVector::Construct(v2, 0, 0); /*0x626ca0*/
      *v3 = &vt_DynamicVectorClass_char; /*0x626caa*/
      v3[5] = 10; /*0x626cb0*/
      v3[4] = 0; /*0x626cb3*/
    }
    else
    {
      v3 = 0; /*0x626cbc*/
    }
    v1[1] = v3; /*0x626cc5*/
    _DWORD * v4 = __2_YAPAXI_Z(0x18u); /*0x626cc8*/
    _DWORD * v5 = v4; /*0x626ccd*/
    if ( v4 ) /*0x626cd4*/
    {
  _DWORD *v9; // edi
      VectorClass::ConstructHSV(v4, 0, 0); /*0x626cdc*/
      *v5 = &vt_DynamicVectorClass_HSVClass; /*0x626ce1*/
      v5[5] = 10; /*0x626ce7*/
      v5[4] = 0; /*0x626cea*/
    }
    else
    {
      v5 = 0; /*0x626cf3*/
    }
    v1[2] = v5; /*0x626cf7*/
    _DWORD * v6 = __2_YAPAXI_Z(0x10u); /*0x626cfa*/
    _DWORD * v7 = v6; /*0x626cff*/
    if ( v6 ) /*0x626d06*/
    {
      v6[1] = HashStringMod31; /*0x626d0d*/
      v6[2] = 31; /*0x626d14*/
      v6[3] = 10; /*0x626d1b*/
      _DWORD * v8 = __2_YAPAXI_Z(0x2ECu); /*0x626d1e*/
      if ( v8 ) /*0x626d28*/
      {
        v9 = v8 + 1; /*0x626d2f*/
        *v8 = 31; /*0x626d37*/
        Array::ForEach((int)(v8 + 1), 24, 31, (int (__thiscall *)(int))FileSystem::readFile); /*0x626d3d*/
      }
      else
      {
        v9 = 0; /*0x626d44*/
      }
      int v10 = v7[2]; /*0x626d46*/
      int v11 = 0; /*0x626d49*/
      *v7 = v9; /*0x626d4d*/
      if ( v10 > 0 ) /*0x626d4f*/
      {
        int v12 = 0; /*0x626d51*/
        do /*0x626d66*/
        {
          ++v11; /*0x626d55*/
          *(_DWORD *)(*v7 + v12 + 20) = 10; /*0x626d56*/
          v12 += 24; /*0x626d61*/
        }
        while ( v11 < v7[2] ); /*0x626d66*/
      }
    }
    else
    {
      v7 = 0; /*0x626d6a*/
    }
    v1[3] = v7; /*0x626d6e*/
    g_FileExtensionState = v1; /*0x626d71*/
    return *(_DWORD *)(v1[1] + 16); /*0x626d7c*/
  }
  else
  {
    g_FileExtensionState = 0; /*0x626d83*/
    return *(_DWORD *)(MEMORY[4] + 16); /*0x626d8b*/
  }
}
}
} // namespace gamemd

// 0x641DB0
void Surface::LoadToSurfaceSHP(char * Source)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  _BYTE v10[12]; // [esp+70h] [ebp-14h] BYREF
  int v11; // [esp+7Ch] [ebp-8h]
  _DWORD v9[22]; // [esp+18h] [ebp-6Ch] BYREF
  CCFileClass::Construct(v9, Source); /*0x641dc0*/
  if ( !CCFileClass::Open(v9, 0) ) /*0x641dcb*/
    goto LABEL_11; /*0x641dcb*/
  if ( *this ) /*0x641dd8*/
  {
    (**(void (__thiscall ***)(char *, int))*this)(*this, 1); /*0x641de2*/
    *this = 0; /*0x641de4*/
  }
  _DWORD * v3 = DecodeFrameSHP((int)v9, 0, 0, 0); /*0x641df9*/
  if ( v3 && (*(int (__thiscall **)(_DWORD *))(*v3 + 124))(v3) && (*(int (__thiscall **)(_DWORD *))(*v3 + 128))(v3) ) /*0x641e16*/
  {
  char *v6; // eax
    char * v4 = (char *)__2_YAPAXI_Z(0x24u); /*0x641e2c*/
    if ( v4 ) /*0x641e33*/
    {
      int v8 = (*(int (__thiscall **)(_DWORD *))(*v3 + 128))(v3); /*0x641e45*/
      int v5 = (*(int (__thiscall **)(_DWORD *))(*v3 + 124))(v3); /*0x641e48*/
      v6 = DSurface::Construct(v4, v5, v8, 1, 0); /*0x641e4e*/
    }
    else
    {
      v6 = 0; /*0x641e55*/
    }
    *this = v6; /*0x641e57*/
    (*(void (__thiscall **)(char *, _DWORD))(*(_DWORD *)v6 + 24))(v6, 0); /*0x641e5f*/
    (*(void (__thiscall **)(char *, _DWORD *, _DWORD, int))(*(_DWORD *)*this + 4))(*this, v3, 0, 1); /*0x641e6b*/
    (*(void (__thiscall **)(_DWORD *, int))*v3)(v3, 1); /*0x641e74*/
    v9[0] = &vt_CCFileClass; /*0x641e7a*/
    v11 = 0; /*0x641e82*/
    Vector::Clear((int)v10); /*0x641e8a*/
    v9[0] = &off_7E1668; /*0x641e93*/
    BufferIOFileClass::Dtor(v9); /*0x641e9b*/
    return 1; /*0x641ea2*/
  }
  else
  {
LABEL_11:
    v9[0] = &vt_CCFileClass; /*0x641eaf*/
    v11 = 0; /*0x641eb7*/
    Vector::Clear((int)v10); /*0x641ebf*/
    v9[0] = &off_7E1668; /*0x641ec8*/
    BufferIOFileClass::Dtor(v9); /*0x641ed0*/
    return 0; /*0x641ed6*/
  }
}
}

// 0x655250
void Surface::RenderRadar()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  RadarClass *v7; // ecx
  RadarClass *v17; // ecx
  int *ImageThumbnail; // eax
  RadarClass *v24; // edx
  int result; // eax
  RadarClass *v28; // ecx
  __int16 v31; // [esp+Ch] [ebp-90h] BYREF
  __int16 v33; // [esp+10h] [ebp-8Ch] BYREF
  RadarClass *v37; // [esp+1Ch] [ebp-80h]
  IUnknown *v44; // [esp+40h] [ebp-5Ch]
  int v2 = 0; /*0x65525b*/
  int v3 = *(this + 1165); /*0x65525d*/
  int v36 = 0; /*0x655263*/
  int v4 = v3 - 1; /*0x655267*/
  v37 = 0; /*0x655268*/
  int v38 = 0; /*0x65526c*/
  int v43 = v4; /*0x655270*/
  if ( v4 >= 0 ) /*0x655274*/
  {
  int v6; // ecx
  int v5; // esi
    while ( 1 ) /*0x65528b*/
    {
      int v35 = *(_DWORD *)(*(this + 1162) + 4 * v4); /*0x65528b*/
      if ( !LayerClass::IsWithinUsableArea(this, (IUnknown *)&v35, (TechnoClass *)1) ) /*0x655298*/
        goto LABEL_32; /*0x655298*/
      v5 = (__int16)v35 + *(this + 1316) - SHIWORD(v35); /*0x6552b8*/
      v6 = 2; /*0x6552bf*/
      if ( v5 == -1 ) /*0x6552c4*/
        break; /*0x6552c4*/
      if ( v5 == 2 * *(this + 65) - 1 ) /*0x6552d6*/
        goto LABEL_6; /*0x6552d6*/
LABEL_7:
      int v40 = (__int16)v35 + SHIWORD(v35) - *(this + 1318); /*0x6552dd*/
      int v41 = v6; /*0x6552e8*/
      v7 = (RadarClass *)*(this + 1168); /*0x6552ec*/
      int v42 = 1; /*0x6552f2*/
      int v8 = *(this + 1169); /*0x6552f6*/
  int v47[4]; // [esp+4Ch] [ebp-50h] BYREF
      v47[0] = 0; /*0x6552fd*/
      v47[1] = 0; /*0x655301*/
      v47[2] = (int)v7; /*0x65530a*/
      v47[3] = v8; /*0x65530e*/
      int v39 = v5; /*0x65531e*/
  int v50[4]; // [esp+7Ch] [ebp-20h] BYREF
      int * v9 = ClipRectIntersection(v50, &v39, v47, 0, 0); /*0x655322*/
      v39 = *v9; /*0x65532b*/
      v40 = v9[1]; /*0x655332*/
      v41 = v9[2]; /*0x655339*/
      int v10 = v9[3]; /*0x65533d*/
      v42 = v10; /*0x655342*/
      if ( v41 > 0 && v10 > 0 ) /*0x65534e*/
      {
  int v26; // ecx
  char *v25; // eax
  char v15; // dl
  int v14; // ecx
        v33 = 0; /*0x655358*/
        char v34 = 0; /*0x655368*/
        v31 = 0; /*0x65536d*/
        char v32 = 0; /*0x655377*/
        void * v11 = CellCoord::To_CellObj(&DataGlobal_87F7E8, (__int16 *)&v35); /*0x65537c*/
        int v12 = v39 + v40 * *(this + 1168); /*0x655390*/
        GetCellRadarColors((int)v11, (int)&v33, (int)&v31); /*0x65539e*/
        if ( v5 ) /*0x6553ab*/
        {
          if ( v41 != 1 ) /*0x6553d2*/
            goto LABEL_14; /*0x6553d2*/
          v14 = 3 * v12 + *(this + 1167); /*0x6553de*/
          *(_WORD *)v14 = v33; /*0x6553e5*/
          v15 = v34; /*0x6553e8*/
        }
        else
        {
          if ( v41 == 1 ) /*0x6553b0*/
          {
            int v13 = *(this + 1167) + 3 * v12 + 3; /*0x6553bc*/
            *(_WORD *)v13 = v31; /*0x6553c3*/
            *(_BYTE *)(v13 + 2) = v32; /*0x6553ca*/
            goto LABEL_16; /*0x6553cd*/
          }
LABEL_14:
          int v16 = *(this + 1167) + 3 * v12; /*0x6553ee*/
          *(_WORD *)v16 = v33; /*0x6553ff*/
          *(_BYTE *)(v16 + 2) = v34; /*0x655406*/
          v14 = *(this + 1167) + 3 * v12 + 3; /*0x655413*/
          *(_WORD *)v14 = v31; /*0x65541a*/
          v15 = v32; /*0x65541d*/
        }
        *(_BYTE *)(v14 + 2) = v15; /*0x655421*/
LABEL_16:
        v17 = (RadarClass *)*(this + 1168); /*0x655424*/
        int v18 = *(this + 1169); /*0x65542a*/
  _DWORD v48[7]; // [esp+5Ch] [ebp-40h] BYREF
        v48[0] = 0; /*0x655430*/
        v48[1] = 0; /*0x655434*/
        v48[2] = v17; /*0x655439*/
        v48[3] = v18; /*0x655441*/
        ImageThumbnail = GenerateImageThumbnail( /*0x655455*/
                           (float *)this,
  int v51[4]; // [esp+8Ch] [ebp-10h] BYREF
                           (RadarClass *)v51,
                           (RadarClass *)v48,
                           (RadarClass *)&v39,
                           0);
        int v20 = *ImageThumbnail; /*0x65545e*/
        v44 = (IUnknown *)ImageThumbnail[1]; /*0x655463*/
        int v21 = ImageThumbnail[2]; /*0x655467*/
        int v45 = v21; /*0x65546a*/
        int v22 = ImageThumbnail[3]; /*0x65546e*/
        int v46 = v22; /*0x655471*/
        if ( v2 <= 0 || v38 <= 0 ) /*0x655481*/
        {
          v26 = *ImageThumbnail; /*0x655501*/
          v24 = (RadarClass *)ImageThumbnail[1]; /*0x655503*/
          v2 = ImageThumbnail[2]; /*0x655506*/
          v25 = (char *)ImageThumbnail[3]; /*0x655509*/
        }
        else if ( v21 <= 0 || v22 <= 0 ) /*0x655489*/
        {
          v26 = v36; /*0x6554f5*/
          v24 = v37; /*0x6554f9*/
          v25 = (char *)v38; /*0x6554fd*/
        }
        else
        {
          int v23 = v36; /*0x65548b*/
          v24 = v37; /*0x65548f*/
          char * v49 = (char *)v38; /*0x655495*/
          if ( v36 > v20 ) /*0x655499*/
          {
            v2 = v36 + v2 - v20; /*0x65549d*/
            v23 = v20; /*0x65549f*/
          }
          if ( (int)v37 > (int)v44 ) /*0x6554a7*/
          {
            v24 = (RadarClass *)v44; /*0x6554b1*/
            v49 += (char *)v37 - (char *)v44; /*0x6554b3*/
          }
          if ( v2 + v23 < v20 + v45 ) /*0x6554c2*/
            v2 = v45 - v23 + v20 + 1; /*0x6554ca*/
          v25 = v49; /*0x6554d8*/
          if ( (int)v24 + (int)v49 < (int)v44 + v46 ) /*0x6554e1*/
            v25 = (char *)((char *)v44 - (char *)v24 + v46 + 1); /*0x6554ed*/
          v26 = v23; /*0x6554f1*/
        }
        v4 = v43; /*0x65550c*/
        v36 = v26; /*0x655510*/
        v37 = v24; /*0x655514*/
        v38 = (int)v25; /*0x655518*/
      }
LABEL_32:
      v43 = --v4; /*0x65551d*/
      if ( v4 < 0 ) /*0x655521*/
        goto LABEL_33; /*0x655521*/
    }
    v5 = 0; /*0x6552c6*/
LABEL_6:
    v6 = 1; /*0x6552d8*/
    goto LABEL_7; /*0x6552d8*/
  }
LABEL_33:
  (*(void (__thiscall **)(_DWORD *))(*(this + 1161) + 12))(this + 1161); /*0x655528*/
  result = v36; /*0x655537*/
  v28 = v37; /*0x65553b*/
  int * v29 = this + 1170; /*0x65553f*/
  int v30 = v38; /*0x655545*/
  *v29 = v36; /*0x655549*/
  v29[1] = (int)v28; /*0x65554b*/
  v29[2] = v2; /*0x65554e*/
  v29[3] = v30; /*0x655551*/
  return result; /*0x655554*/
}
}

// 0x6BA3E0
void Surface::TileBlit(INIClass * aP0, ObjectClass * aP1, int a3, int a4, int a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  ObjectClass *v5; // ebx
  ObjectClass *v10; // esi
  INIClass *aP0a; // [esp+64h] [ebp+4h]

  v5 = aP1; /*0x6ba3e4*/
  int v20 = (*(int (__thiscall **)(ObjectClass *, _DWORD, _DWORD))(*(_DWORD *)aP1->__pad_0 + 92))(aP1, 0, 0); /*0x6ba3f8*/
  if ( !v20 ) /*0x6ba3fc*/
    return 0; /*0x6ba3ff*/
  int v7 = a3; /*0x6ba408*/
  int v21 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a3 + 92))(a3, 0, 0); /*0x6ba41b*/
  if ( v21 )
  {
    int v17 = (*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)aP1->__pad_0 + 116))(aP1) / 2; /*0x6ba442*/
    int v18 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 116))(a3) / 2; /*0x6ba452*/
  _BYTE v24[16]; // [esp+40h] [ebp-20h] BYREF
    int v8 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a3 + 120))(a3, v24); /*0x6ba45d*/
    int v22 = *(_DWORD *)(v8 + 8); /*0x6ba470*/
    int v23 = *(_DWORD *)(v8 + 12); /*0x6ba480*/
  _DWORD v25[4]; // [esp+50h] [ebp-10h] BYREF
    (*(void (__thiscall **)(ObjectClass *, _DWORD *))(*(_DWORD *)aP1->__pad_0 + 120))(aP1, v25); /*0x6ba484*/
    v10 = (ObjectClass *)aP0->headNode[1]; /*0x6ba48f*/
    int v11 = aP0->headNode[2]; /*0x6ba492*/
    int v19 = (v22 - (int)v10) / 2 <= 0 ? 0 : (v22 - (int)v10) / 2;
    int v12 = 0; /*0x6ba4bf*/
    int v16 = 0; /*0x6ba4c3*/
    if ( v11 > 0 )
    {
      int v13 = a5 + ((v23 - v11) / 2 <= 0 ? 0 : (v23 - v11) / 2);
      int v27 = v13; /*0x6ba4d3*/
      do /*0x6ba558*/
      {
        aP0a = 0; /*0x6ba4d9*/
        if ( (int)v10 > 0 ) /*0x6ba4ee*/
        {
          int v14 = v19 + a4; /*0x6ba506*/
          int v15 = v20 + 2 * (*(_DWORD *)aP0->__pad_0 + v17 * (aP0->headNode[0] + v12)); /*0x6ba50d*/
          do /*0x6ba537*/
          {
            v15 += 2; /*0x6ba512*/
            *(_WORD *)(v15 - 2) = *(_WORD *)(v21 + 2 * (v18 * (v13 % v23) + v14 % v22)); /*0x6ba528*/
            v10 = (ObjectClass *)aP0->headNode[1]; /*0x6ba52c*/
            ++v14; /*0x6ba530*/
            aP0a = (INIClass *)((char *)aP0a + 1); /*0x6ba533*/
          }
          while ( (int)aP0a < (int)v10 ); /*0x6ba537*/
          v7 = a3; /*0x6ba539*/
          v12 = v16; /*0x6ba53d*/
          v5 = aP1; /*0x6ba541*/
        }
        ++v12; /*0x6ba54c*/
        v13 = v27 + 1; /*0x6ba54d*/
        v16 = v12; /*0x6ba550*/
        ++v27; /*0x6ba554*/
      }
      while ( v12 < aP0->headNode[2] ); /*0x6ba558*/
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 96))(v7); /*0x6ba562*/
    (*(void (__thiscall **)(ObjectClass *))(*(_DWORD *)v5->__pad_0 + 96))(v5); /*0x6ba569*/
    return 1; /*0x6ba56f*/
  }
  else
  {
    (*(void (__thiscall **)(ObjectClass *))(*(_DWORD *)aP1->__pad_0 + 96))(aP1); /*0x6ba425*/
    return 0; /*0x6ba429*/
  }
}
}

// 0x6BA580
void Surface::BlitTransparent(int * a0, ObjectClass * aP1, int a3, ObjectClass * aP3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int *a0a; // [esp+28h] [ebp+4h]

  int v15 = (*(int (__thiscall **)(ObjectClass *, _DWORD, _DWORD))(*(_DWORD *)aP1->__pad_0 + 92))(aP1, 0, 0); /*0x6ba599*/
  if ( !v15 ) /*0x6ba59d*/
    return 0; /*0x6ba5a1*/
  int v5 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a3 + 92))(a3, 0, 0); /*0x6ba5bb*/
  if ( v5 ) /*0x6ba5bf*/
  {
    int v6 = *a0; /*0x6ba5d8*/
    int v7 = a0[1]; /*0x6ba5da*/
    int v16 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 124))(a3); /*0x6ba5f2*/
    int v8 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 128))(a3); /*0x6ba604*/
    int v9 = (*(int (__thiscall **)(ObjectClass *))(*(_DWORD *)aP1->__pad_0 + 116))(aP1) / 2; /*0x6ba60e*/
    if ( v8 > 0 ) /*0x6ba612*/
    {
      int v10 = v16; /*0x6ba617*/
      a0a = (int *)(2 * v9); /*0x6ba624*/
      _WORD * v11 = (_WORD *)(v15 + 2 * (v6 + v9 * v7)); /*0x6ba628*/
      do /*0x6ba65a*/
      {
        if ( v10 > 0 ) /*0x6ba62d*/
        {
          int v12 = v10; /*0x6ba62f*/
          _WORD * v13 = (_WORD *)v5; /*0x6ba633*/
          _WORD * v14 = v11; /*0x6ba635*/
          v5 += 2 * v10; /*0x6ba637*/
          do /*0x6ba64d*/
          {
            if ( *v13 != (_WORD)aP3 ) /*0x6ba641*/
              *v14 = *v13; /*0x6ba643*/
            ++v13; /*0x6ba646*/
            ++v14; /*0x6ba649*/
            --v12; /*0x6ba64c*/
          }
          while ( v12 ); /*0x6ba64d*/
          v10 = v16; /*0x6ba64f*/
        }
        v11 = (_WORD *)((char *)v11 + (_DWORD)a0a); /*0x6ba657*/
        --v8; /*0x6ba659*/
      }
      while ( v8 ); /*0x6ba65a*/
    }
    (*(void (__thiscall **)(ObjectClass *))(*(_DWORD *)aP1->__pad_0 + 96))(aP1); /*0x6ba662*/
    (*(void (__thiscall **)(int))(*(_DWORD *)a3 + 96))(a3); /*0x6ba66b*/
    return 1; /*0x6ba671*/
  }
  else
  {
    (*(void (__thiscall **)(ObjectClass *))(*(_DWORD *)aP1->__pad_0 + 96))(aP1); /*0x6ba5c5*/
    return 0; /*0x6ba5ca*/
  }
}
}

// 0x6BA690
void Surface::AlphaBlend(unsigned int * a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  __int16 v33; // cx
  __int16 v34; // ax
  __int16 v42; // dx
  __int16 v43; // cx
  __int16 v45; // bp
  __int16 v49; // bp
  __int16 *v52; // [esp+1Ch] [ebp-278h]
  _WORD v77[256]; // [esp+94h] [ebp-200h] BYREF

  char v76[16]; // [esp+84h] [ebp-210h] BYREF
  int v8 = (*(int (__thiscall **)(int, char *))(*(_DWORD *)a3 + 120))(a3, v76); /*0x6ba6a8*/
  int v9 = 0; /*0x6ba6b8*/
  int v10 = 0; /*0x6ba6bd*/
  int v56 = 0; /*0x6ba6c3*/
  int v11 = *(_DWORD *)(v8 + 8); /*0x6ba6c7*/
  int v57 = 0; /*0x6ba6ca*/
  int v74 = v11; /*0x6ba6ce*/
  int v55 = 0; /*0x6ba6d2*/
  int v12 = *(_DWORD *)(v8 + 12); /*0x6ba6d6*/
  int v75 = v12; /*0x6ba6e0*/
  int v51 = 0; /*0x6ba6e4*/
  int v13 = a1[2]; /*0x6ba6e8*/
  int v66 = 0; /*0x6ba6eb*/
  int v68 = 0; /*0x6ba6f1*/
  if ( v11 <= v13 ) /*0x6ba6f5*/
  {
    if ( a6 ) /*0x6ba722*/
      v66 = (v13 - v11) / 2; /*0x6ba72b*/
  }
  else if ( a6 ) /*0x6ba6f9*/
  {
    int v14 = v11 - v13; /*0x6ba6fb*/
    v10 = (v14 + 1) / 2; /*0x6ba70a*/
    v56 = v10; /*0x6ba70e*/
    v55 = v14 / 2; /*0x6ba712*/
  }
  else
  {
    v55 = v11 - v13; /*0x6ba71a*/
  }
  int v15 = a1[3]; /*0x6ba736*/
  if ( v12 <= v15 ) /*0x6ba73b*/
  {
    if ( a6 ) /*0x6ba76c*/
      v68 = (v15 - v12) / 2; /*0x6ba775*/
  }
  else if ( a6 ) /*0x6ba73f*/
  {
    v57 = (v12 - v15 + 1) / 2; /*0x6ba74d*/
    v9 = (v12 - v15) / 2; /*0x6ba758*/
    v51 = v9; /*0x6ba75a*/
  }
  else
  {
    v9 = v12 - v15; /*0x6ba762*/
    v51 = v12 - v15; /*0x6ba764*/
  }
  if ( a7 > v10 ) /*0x6ba782*/
  {
    int v16 = v10 - a7 + v55; /*0x6ba78a*/
    v10 = a7; /*0x6ba78c*/
    v55 = v16; /*0x6ba78e*/
    v56 = a7; /*0x6ba792*/
  }
  if ( a8 > v57 ) /*0x6ba7a3*/
  {
    int v17 = v57 - a8; /*0x6ba7a5*/
    v57 = a8; /*0x6ba7a7*/
    v9 += v17; /*0x6ba7ab*/
    v51 = v9; /*0x6ba7ad*/
  }
  int v70 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a2 + 92))(a2, 0, 0); /*0x6ba7c7*/
  if ( !v70 ) /*0x6ba7cd*/
    return 0; /*0x6ba7db*/
  int v19 = 0; /*0x6ba7e5*/
  int v53 = 0; /*0x6ba7e9*/
  int v64 = 0; /*0x6ba7ed*/
  if ( a5 ) /*0x6ba7f1*/
  {
    v64 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a3 + 92))(a3, 0, 0); /*0x6ba843*/
    if ( !v64 ) /*0x6ba847*/
      goto LABEL_21; /*0x6ba847*/
  }
  else
  {
    v19 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a3 + 92))(a3, 0, 0); /*0x6ba805*/
    v53 = v19; /*0x6ba809*/
    if ( !v19 ) /*0x6ba80d*/
    {
LABEL_21:
      (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 96))(a2); /*0x6ba80f*/
      return 0; /*0x6ba827*/
    }
  }
  int v65 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a4 + 92))(a4, 0, 0); /*0x6ba87d*/
  if ( a5 ) /*0x6ba88a*/
  {
    char v20 = g_BitShift_Green_0; /*0x6ba88c*/
    _WORD * v21 = v77; /*0x6ba892*/
    int v22 = a5 + 1; /*0x6ba899*/
    int v23 = 256; /*0x6ba89a*/
    do /*0x6ba8ef*/
    {
      LOBYTE(v10) = *(_BYTE *)(v22 + 1) >> g_BitShift_Blue; /*0x6ba8a8*/
      v22 += 3; /*0x6ba8b0*/
      ++v21; /*0x6ba8b3*/
      LOWORD(v12) = (unsigned __int8)v10; /*0x6ba8b6*/
      LOWORD(v10) = (unsigned __int8)(*(_BYTE *)(v22 - 4) >> v20); /*0x6ba8c9*/
      int v24 = v10 << g_DDraw_BlueMask; /*0x6ba8cd*/
      int v25 = v24 | (v12 << g_BitShift_Blue); /*0x6ba8d5*/
      LOWORD(v24) = (unsigned __int8)(*(_BYTE *)(v22 - 3) >> g_BitMask_Blue); /*0x6ba8e2*/
      v10 = v24 << g_BitMask_Green; /*0x6ba8e6*/
      v12 = v10 | v25; /*0x6ba8e8*/
      --v23; /*0x6ba8ea*/
      *(v21 - 1) = v12; /*0x6ba8eb*/
    }
    while ( v23 ); /*0x6ba8ef*/
    v9 = v51; /*0x6ba8f1*/
    v10 = v56; /*0x6ba8f5*/
    v19 = v53; /*0x6ba8f9*/
    v12 = v75; /*0x6ba8fd*/
  }
  int v72 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 116))(a2) / 2; /*0x6ba91b*/
  unsigned int v26 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 116))(a3); /*0x6ba91f*/
  unsigned int v69 = v26; /*0x6ba929*/
  if ( !a5 ) /*0x6ba92f*/
  {
    v26 >>= 1; /*0x6ba931*/
    v69 = v26; /*0x6ba933*/
  }
  int v27 = v57; /*0x6ba937*/
  int v67 = v57; /*0x6ba93f*/
  int v73 = v12 - v9; /*0x6ba943*/
  if ( v57 < v12 - v9 ) /*0x6ba947*/
  {
  bool v50; // cc
    int v28 = v57 * v26; /*0x6ba94d*/
    _BYTE * v29 = (_BYTE *)(v10 + v28 + v65); /*0x6ba957*/
    _BYTE * v54 = v29; /*0x6ba95b*/
    _WORD * v30 = (_WORD *)(v19 + 2 * (v10 + v28)); /*0x6ba95f*/
    _WORD * v71 = v30; /*0x6ba962*/
    do /*0x6ba992*/
    {
  bool v38; // zf
      int v31 = v66 + *a1 + v72 * (v68 + v27 + a1[1] - v57); /*0x6ba992*/
      if ( a5 ) /*0x6ba996*/
      {
        if ( v10 < v74 - v55 ) /*0x6baabe*/
        {
          _BYTE * v39 = v29; /*0x6baacc*/
          int v40 = v64 - v65; /*0x6baad2*/
          _WORD * v41 = (_WORD *)(v70 + 2 * v31); /*0x6baad4*/
          _BYTE * v63 = v39; /*0x6baad9*/
          _WORD * v61 = v41; /*0x6baadd*/
          int v59 = v74 - v55 - v10; /*0x6baae5*/
          do /*0x6babc8*/
          {
            if ( *v39 ) /*0x6baae9*/
            {
              v42 = *v41; /*0x6bab21*/
              v43 = v77[(unsigned __int8)v39[v40]]; /*0x6bab27*/
              int v44 = 255 - (unsigned __int8)*v39; /*0x6bab48*/
              v45 = g_ScreenSaverState /*0x6bab5d*/
                  & ((v44 * (unsigned __int16)(g_ScreenSaverState & v42)
                    + (unsigned __int8)*v39 * (unsigned int)(unsigned __int16)(g_ScreenSaverState & v43)) >> 8);
              g_GameScreenFlags = (unsigned __int8)*v39; /*0x6bab64*/
              g_GameScreenConfig = 255 - g_GameScreenFlags; /*0x6bab6e*/
  unsigned int v46; // ebx
              v46 = v44 * (unsigned __int16)(HIWORD(g_ScreenSaverState) & v42) /*0x6bab79*/
                  + g_GameScreenFlags * (unsigned __int16)(HIWORD(g_ScreenSaverState) & v43);
              int v47 = v44 * (unsigned __int16)(g_CreditsScreenState & v42); /*0x6bab8a*/
              v39 = v63; /*0x6bab97*/
              v40 = v64 - v65; /*0x6bab9b*/
              unsigned int v48 = v47 + g_GameScreenFlags * (unsigned __int16)(g_CreditsScreenState & v43); /*0x6bab9f*/
              v41 = v61; /*0x6baba1*/
              v49 = HIWORD(g_ScreenSaverState) & (v46 >> 8) | v45; /*0x6baba5*/
              v10 = v56; /*0x6baba7*/
              *v61 = (v48 >> 8) | v49; /*0x6babb0*/
            }
            ++v41; /*0x6babb7*/
            ++v39; /*0x6babba*/
            v38 = v59 == 1; /*0x6babbb*/
            v61 = v41; /*0x6babbc*/
            v63 = v39; /*0x6babc0*/
            --v59; /*0x6babc4*/
          }
          while ( !v38 ); /*0x6babc8*/
          goto LABEL_43; /*0x6babc8*/
        }
      }
      else if ( v10 < v74 - v55 ) /*0x6ba9a8*/
      {
        _BYTE * v62 = v29; /*0x6ba9b4*/
        v52 = v30; /*0x6ba9b8*/
        _WORD * v32 = (_WORD *)(v70 + 2 * v31); /*0x6ba9bc*/
        int v60 = v74 - v55 - v10; /*0x6ba9bf*/
        _WORD * v58 = v32; /*0x6ba9c3*/
        do /*0x6baaa7*/
        {
          if ( *v29 ) /*0x6ba9c7*/
          {
            v33 = *v32; /*0x6ba9d1*/
            v34 = *v52; /*0x6ba9f4*/
            g_GameScreenFlags = (unsigned __int8)*v29; /*0x6baa06*/
            g_GameScreenConfig = 255 - g_GameScreenFlags; /*0x6baa45*/
  unsigned int v35; // ebp
            v35 = ((255 - g_GameScreenFlags) * (unsigned __int16)(v33 & g_ScreenSaverState) /*0x6baa4b*/
                 + g_GameScreenFlags * (unsigned int)(unsigned __int16)(v34 & g_ScreenSaverState)) >> 8;
  unsigned int v36; // esi
            v36 = ((255 - g_GameScreenFlags) * (unsigned __int16)(v33 & HIWORD(g_ScreenSaverState)) /*0x6baa57*/
                 + g_GameScreenFlags * (unsigned int)(unsigned __int16)(HIWORD(g_ScreenSaverState) & v34)) >> 8;
            v10 = v56; /*0x6baa6e*/
  unsigned int v37; // edx
            v37 = (255 - g_GameScreenFlags) * (unsigned __int16)(v33 & g_CreditsScreenState) /*0x6baa75*/
                + g_GameScreenFlags * (unsigned __int16)(v34 & g_CreditsScreenState);
            v32 = v58; /*0x6baa77*/
            *v58 = (v37 >> 8) | HIWORD(g_ScreenSaverState) & v36 | g_ScreenSaverState & v35; /*0x6baa80*/
          }
          ++v32; /*0x6baa8f*/
          v29 = v62 + 1; /*0x6baa92*/
          v38 = v60 == 1; /*0x6baa96*/
          v58 = v32; /*0x6baa97*/
          ++v62; /*0x6baa9b*/
          ++v52; /*0x6baa9f*/
          --v60; /*0x6baaa3*/
        }
        while ( !v38 ); /*0x6baaa7*/
LABEL_43:
        v29 = v54; /*0x6babce*/
      }
      v29 += v69; /*0x6babd2*/
      v27 = v67 + 1; /*0x6babe3*/
      v30 = &v71[v69]; /*0x6babe4*/
      v50 = ++v67 < v73; /*0x6babea*/
      v71 = v30; /*0x6babf0*/
      v54 = v29; /*0x6babf4*/
    }
    while ( v50 ); /*0x6ba992*/
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 96))(a2); /*0x6babfe*/
  (*(void (__thiscall **)(int))(*(_DWORD *)a3 + 96))(a3); /*0x6bac13*/
  (*(void (__thiscall **)(int))(*(_DWORD *)a4 + 96))(a4); /*0x6bac1f*/
  return 1; /*0x6ba7cf*/
}
}

// 0x707480
void Surface::BlitTechnoTo(short * a1, TechnoClass * aP2, TechnoClass * aP3, TechnoClass * aP4, AbstractClass * aP5, TechnoClass * aP6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  unsigned __int16 v8; // bp
  unsigned __int16 v9; // bx
  TechnoClass *eax8; // eax
  TechnoClass *v15; // edx
  int ecx8; // ecx
  TechnoClass *v18; // ebx
  unsigned __int16 v23; // ax
  int eax24a; // eax
  AbstractClass *v25; // [esp-1Ch] [ebp-7Ch]
  TechnoClass *v26; // [esp+10h] [ebp-50h] BYREF
  TechnoClass *v27; // [esp+14h] [ebp-4Ch]
  int v29; // [esp+18h] [ebp-48h]
  int v30; // [esp+1Ch] [ebp-44h]
  int v31; // [esp+20h] [ebp-40h] BYREF
  TechnoClass *v32; // [esp+24h] [ebp-3Ch]
  int v33; // [esp+28h] [ebp-38h]
  int v34; // [esp+2Ch] [ebp-34h]
  int v35[4]; // [esp+30h] [ebp-30h] BYREF
  int (__thiscall **v36)(void *, char); // [esp+40h] [ebp-20h] BYREF
  int v37; // [esp+44h] [ebp-1Ch]
  int v38; // [esp+48h] [ebp-18h]
  int v39; // [esp+4Ch] [ebp-14h]
  int v40; // [esp+50h] [ebp-10h]
  _DWORD v41[3]; // [esp+54h] [ebp-Ch] BYREF
  __int16 *a1b; // [esp+64h] [ebp+4h]
  int a1a; // [esp+64h] [ebp+4h]
  int *aP4a; // [esp+70h] [ebp+10h]

  v8 = a1[3]; /*0x70748e*/
  v9 = a1[2]; /*0x707492*/
  a1b = (__int16 *)*((_DWORD *)a1 + 2); /*0x7074a2*/
  Surface::Construct(&v36, (ObjectClass *)v9, (IUnknown *)v8); /*0x7074a6*/
  v39 = 0; /*0x7074b8*/
  v36 = &XSurface_Vtable; /*0x7074c0*/
  v40 = 1; /*0x7074c8*/
  Buffer::Init(v41, (int)a1b, (AbstractClass *)(v8 * v9)); /*0x7074d0*/
  int v11 = *(_DWORD *)this; /*0x7074d9*/
  v36 = &BSurface_Vtable; /*0x7074dd*/
  unsigned int v12 = (unsigned int)aP4 & 0xFFFFFFEF; /*0x7074e5*/
  if ( (*(int (__thiscall **)(_BYTE *))(v11 + 44))(this) == 1 && *(this + 1747) ) /*0x7074f0*/
    _DWORD * v13 = *(_DWORD **)&g_OverlayTypeConfig[88392]; /*0x7074fa*/
  else
    v13 = (_DWORD *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 484))(this); /*0x707505*/
  aP4a = (int *)LightConvertClass::SelectRLEBlitter(v13, (IUnknown *)v12); /*0x707516*/
  a1a = 0; /*0x70751a*/
  if ( (v12 & 8) != 0 ) /*0x707522*/
  {
    int v14 = (*(int (__stdcall **)(_BYTE *))(this->Width + 16))(this + 4); /*0x707534*/
    a1a = (int)(v14 + Math::RoundToInt(*((float *)this + 147))) % 400; /*0x707545*/
  }
  if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 44))(this) == 1 ) /*0x707557*/
  {
    eax8 = (TechnoClass *)(*(_DWORD *)aP2->__pad_0 + *a1); /*0x70756b*/
    v15 = (TechnoClass *)(*(_DWORD *)&aP2->__pad_0[4] + a1[1]); /*0x707571*/
    int v17 = (unsigned __int16)a1[3]; /*0x707575*/
    ecx8 = (unsigned __int16)a1[2]; /*0x70757b*/
    v32 = v15; /*0x70757f*/
    v34 = (unsigned __int16)v17; /*0x707585*/
    if ( *(int *)&g_OverlayTypeConfig[88016] > 0 && *(int *)&g_OverlayTypeConfig[88020] > 0 ) /*0x707597*/
    {
      if ( ecx8 <= 0 || v17 <= 0 ) /*0x7075a7*/
      {
        eax8 = *(TechnoClass **)&g_OverlayTypeConfig[88008]; /*0x70764e*/
        v15 = *(TechnoClass **)&g_OverlayTypeConfig[88012]; /*0x707653*/
        ecx8 = *(_DWORD *)&g_OverlayTypeConfig[88016]; /*0x707659*/
        v17 = *(_DWORD *)&g_OverlayTypeConfig[88020]; /*0x70765f*/
      }
      else
      {
        v18 = *(TechnoClass **)&g_OverlayTypeConfig[88008]; /*0x7075b3*/
        v27 = *(TechnoClass **)&g_OverlayTypeConfig[88012]; /*0x7075b9*/
        v29 = *(_DWORD *)&g_OverlayTypeConfig[88016]; /*0x7075c3*/
        v26 = *(TechnoClass **)&g_OverlayTypeConfig[88008]; /*0x7075cf*/
        v30 = *(_DWORD *)&g_OverlayTypeConfig[88020]; /*0x7075d3*/
        if ( *(int *)&g_OverlayTypeConfig[88008] > (int)eax8 ) /*0x7075d7*/
        {
          v18 = eax8; /*0x7075e1*/
          v29 += *(_DWORD *)&g_OverlayTypeConfig[88008] - (_DWORD)eax8; /*0x7075e3*/
          v26 = eax8; /*0x7075e7*/
        }
        if ( (int)v27 > (int)v15 ) /*0x7075f1*/
        {
          int v20 = (char *)v27 - (char *)v15; /*0x7075f7*/
          v27 = v15; /*0x7075fb*/
          v30 += v20; /*0x7075ff*/
          v18 = v26; /*0x707603*/
        }
        if ( (int)&v18->__pad_0[v29] < (int)&eax8->__pad_0[ecx8] ) /*0x707612*/
          v29 = (int)&eax8->__pad_0[ecx8 - (_DWORD)v18 + 1]; /*0x70761a*/
        v17 = v30; /*0x707626*/
        v15 = v27; /*0x70762d*/
        if ( (int)&v27->__pad_0[v30] < (int)&v32->__pad_0[v34] ) /*0x707636*/
          v17 = (int)&v32->__pad_0[v34 - (_DWORD)v27 + 1]; /*0x707642*/
        ecx8 = v29; /*0x707646*/
        eax8 = v18; /*0x70764a*/
      }
    }
    *(_DWORD *)&g_OverlayTypeConfig[88008] = eax8; /*0x707661*/
    *(_DWORD *)&g_OverlayTypeConfig[88012] = v15; /*0x707666*/
    *(_DWORD *)&g_OverlayTypeConfig[88016] = ecx8; /*0x70766c*/
    *(_DWORD *)&g_OverlayTypeConfig[88020] = v17; /*0x707672*/
  }
  if ( aP4a ) /*0x70767e*/
  {
    v33 = v37; /*0x70768c*/
    v29 = v37; /*0x707690*/
    v34 = v38; /*0x70769a*/
    v30 = v38; /*0x70769e*/
    int v21 = *a1; /*0x7076a2*/
    v31 = 0; /*0x7076a5*/
    v32 = 0; /*0x7076a9*/
    v26 = 0; /*0x7076ad*/
    v27 = 0; /*0x7076b1*/
    int v22 = *(_DWORD *)&aP2->__pad_0[4]; /*0x7076bb*/
    v35[0] = *(_DWORD *)aP2->__pad_0 + v21; /*0x7076be*/
    v23 = a1[2]; /*0x7076c8*/
    v35[1] = v22 + a1[1]; /*0x7076ce*/
    v35[2] = v23; /*0x7076d2*/
    int v24 = *(_DWORD *)this; /*0x7076e3*/
    v35[3] = (unsigned __int16)a1[3]; /*0x7076e5*/
    v25 = (AbstractClass *)(*(int (__thiscall **)(_BYTE *))(v24 + 752))(this); /*0x707703*/
    eax24a = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 748))(this); /*0x707706*/
    BlitterRLEBlitSHP( /*0x707736*/
      *(int *)&DataGlobal_87F8E4[31280],
      (int *)aP3->__pad_0,
      v35,
      (int)&v36,
      &v26,
      &v31,
      aP4a,
      eax24a,
      (int)v25,
      (int)aP5,
      a1a,
      0,
      0,
      0,
      (int)aP6);
  }
  Vector::Clear((int)v41); /*0x70773f*/
}
}

// 0x7602E0
void Surface::RenderToSurfaceVoxel(unsigned int * a2, int * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  CCINIClass *v16; // ecx
  unsigned __int16 *v20; // ebx
  int m; // ebp
  MouseClass *v33; // ecx
  TacticalMap *v36; // ecx
  unsigned int SamplePosition; // ecx
  unsigned __int16 *v42; // ecx
  int j; // ebx
  MouseClass *v51; // ebp
  int i; // edi
  int k; // [esp+8h] [ebp-3Ch]
  WaveClass *aP2; // [esp+Ch] [ebp-38h]
  _WORD *a4a; // [esp+18h] [ebp-2Ch]
  _WORD *a4d; // [esp+18h] [ebp-2Ch]
  unsigned __int16 *a4b; // [esp+18h] [ebp-2Ch]
  _WORD *a4c; // [esp+18h] [ebp-2Ch]
  MouseClass *aP1; // [esp+3Ch] [ebp-8h]
  int aP1a; // [esp+3Ch] [ebp-8h]
  MouseClass *aP1b; // [esp+3Ch] [ebp-8h]
  MouseClass *v85; // [esp+40h] [ebp-4h]
  unsigned __int16 v86; // [esp+48h] [ebp+4h]
  unsigned __int16 v87; // [esp+48h] [ebp+4h]
  CCINIClass *v89; // [esp+4Ch] [ebp+8h]
  int v58 = ZCoordToScreenY(*(_DWORD *)(this + 188)); /*0x7602f8*/
  int v74; // [esp+24h] [ebp-20h]
  v74 = (*(int (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)&DataGlobal_87F8E4[31280] + 92))( /*0x760309*/
          *(_DWORD *)&DataGlobal_87F8E4[31280],
          0,
          0);
  if ( v74 ) /*0x76030d*/
  {
    int * v4 = a3; /*0x760313*/
    int v5 = a3[1]; /*0x760319*/
    int v78 = v5 + a3[3] - 3; /*0x760329*/
    int v77 = v5 + 3; /*0x76032f*/
    int v79 = *a3 + 3; /*0x760340*/
    int v69 = *a3 + a3[2] - 3; /*0x760348*/
    int v6 = a2[1] - *(_DWORD *)(this + 208); /*0x760359*/
    aP2 = (WaveClass *)(*a2 - *(_DWORD *)(this + 204)); /*0x760367*/
    int v76 = v6; /*0x76036b*/
    ProcessVoxelVertexData((_DWORD *)(this + 328), (int *)(this + 416)); /*0x76036f*/
    if ( *(_DWORD *)(this + 424) ) /*0x760374*/
    {
  _WORD *a4; // [esp+18h] [ebp-2Ch]
      int v7 = *(_DWORD *)(this + 416); /*0x760398*/
      int v8 = v6 + *(_DWORD *)&DataGlobal_87F8E4[30400] + *(_DWORD *)(this + 420); /*0x76039e*/
      int v61 = v8; /*0x7603a0*/
      int v9 = v7 + v8 - 1; /*0x7603a4*/
      if ( v9 >= a3[3] + a3[1] ) /*0x7603aa*/
      {
        a4 = (_WORD *)(a3[3] + a3[1]); /*0x7603b2*/
        v9 = (int)a4; /*0x7603b6*/
      }
      else
      {
        a4 = (_WORD *)(v7 + v8 - 1); /*0x7603ac*/
      }
      Voxel::loadSectionData((_DWORD *)this); /*0x7603ba*/
      int v10 = *(_DWORD *)(this + 460); /*0x7603bf*/
      if ( v10 <= 1 || v10 >= 6 ) /*0x7603d1*/
      {
        a4d = (_WORD *)Audio::GetSamplePosition( /*0x7606be*/
                         *(int *)&DataGlobal_87F8E4[32096],
                         0,
                         (MouseClass *)(v8 - *(_DWORD *)&DataGlobal_87F8E4[30400]));
        int v35 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&DataGlobal_87F8E4[31280] + 124))(*(_DWORD *)&DataGlobal_87F8E4[31280]); /*0x7606c4*/
        HIWORD(v36) = *(_WORD *)&DataGlobal_87F8E4[32098]; /*0x7606c7*/
        int v81 = v9 - v8; /*0x7606d8*/
        int v72 = *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[32096] + 40); /*0x7606e0*/
        if ( (unsigned int)&a4d[v35 + v72 * (v9 - v8 + 1)] >= *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[32096] /*0x7606f6*/
                                                                        + 28) )
        {
          LOWORD(v36) = *(_WORD *)(*(_DWORD *)&DataGlobal_87F8E4[32096] + 36) - v9; /*0x76085b*/
          int v46 = v9; /*0x76085e*/
          int v56 = v9; /*0x760862*/
          char * v47 = (char *)v36 - v58 - 2; /*0x760866*/
          char * v88 = v47; /*0x76086b*/
          if ( v9 >= v8 ) /*0x76086f*/
          {
            int v73 = 8 * v81; /*0x76087c*/
            do /*0x760999*/
            {
              int v48 = v4[1]; /*0x760880*/
              if ( v46 >= v48 + 2 && v46 <= v48 + v4[3] - 2 ) /*0x760897*/
              {
                _DWORD * v49 = (_DWORD *)(*(_DWORD *)(this + 424) + v73); /*0x7608b0*/
                int v50 = (int)&aP2->__pad_0[v49[1]]; /*0x7608ba*/
                if ( v50 >= *v4 + v4[2] - 2 ) /*0x7608be*/
                  v50 = *v4 + v4[2] - 2; /*0x7608c0*/
                int v60 = (int)&aP2->__pad_0[*v49]; /*0x7608cf*/
                if ( v60 <= *v4 + 2 ) /*0x7608d3*/
                  v60 = *v4 + 2; /*0x7608d5*/
                a4c = (_WORD *)(v74 /*0x760904*/
                              + 2
                              * (v50
                               + v56
                               * ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)&DataGlobal_87F8E4[31280] + 116))(*(_DWORD *)&DataGlobal_87F8E4[31280]) >> 1)));
                v51 = (MouseClass *)(v56 - *(_DWORD *)&DataGlobal_87F8E4[30400]); /*0x760910*/
                aP1b = (MouseClass *)v50; /*0x760914*/
                for ( i = abs32(v56 - v76 - *(_DWORD *)(this + 208)); v50 >= v60; --a4c ) /*0x760925*/
                {
                  if ( *(_WORD *)Audio::GetSamplePosition(*(int *)&DataGlobal_87F8E4[32096], aP1b, v51) > (unsigned __int16)v88 ) /*0x760940*/
                    Voxel::BlendColor((_DWORD *)this, v50, aP2, i, a4c); /*0x760950*/
                  --v50; /*0x76095e*/
                  aP1b = (MouseClass *)((char *)aP1b - 1); /*0x76095f*/
                }
                v47 = v88; /*0x760972*/
                v8 = v61; /*0x760976*/
                v4 = a3; /*0x76097a*/
                v46 = v56; /*0x76097e*/
              }
              ++v47; /*0x760986*/
              --v46; /*0x760987*/
              v88 = v47; /*0x76098d*/
              v56 = v46; /*0x760991*/
              v73 -= 8; /*0x760995*/
            }
            while ( v46 >= v8 ); /*0x760999*/
          }
        }
        else
        {
          aP1a = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&DataGlobal_87F8E4[31280] + 116))(*(_DWORD *)&DataGlobal_87F8E4[31280]) >> 1; /*0x760709*/
          _WORD * v37 = (_WORD *)(v74 + 2 * v9 * aP1a); /*0x76071a*/
          _DWORD * v90 = (_DWORD *)(*(_DWORD *)(this + 424) + 8 * v81); /*0x760728*/
          v87 = *(_WORD *)(*(_DWORD *)&DataGlobal_87F8E4[32096] + 36) - v9 - v58 - 2; /*0x760740*/
          SamplePosition = Audio::GetSamplePosition( /*0x760753*/
                             *(int *)&DataGlobal_87F8E4[32096],
                             0,
                             (MouseClass *)(v9 - *(_DWORD *)&DataGlobal_87F8E4[30400]));
          int v39 = v9; /*0x760755*/
          int v55 = v9; /*0x760759*/
          if ( v9 >= v8 ) /*0x76075d*/
          {
            while ( 1 ) /*0x760769*/
            {
              if ( v39 >= v77 && v39 <= v78 ) /*0x760777*/
              {
                int v40 = (int)&aP2->__pad_0[v90[1]]; /*0x760790*/
                if ( v40 >= v69 ) /*0x760792*/
                  v40 = v69; /*0x760794*/
                char * v59 = &aP2->__pad_0[*v90]; /*0x7607a6*/
                if ( (int)v59 <= v79 ) /*0x7607aa*/
                  v59 = (char *)v79; /*0x7607ac*/
                _WORD * v41 = &v37[v40]; /*0x7607b8*/
                v42 = (unsigned __int16 *)(2 * v40 + SamplePosition); /*0x7607ba*/
                a4b = v42; /*0x7607c6*/
                __int64 v43 = v39 - v76 - *(_DWORD *)(this + 208); /*0x7607ca*/
                for ( j = (HIDWORD(v43) ^ v43) - HIDWORD(v43); v40 >= (int)v59; a4b = v42 ) /*0x7607d7*/
                {
                  if ( *v42 > v87 ) /*0x7607e1*/
                  {
                    Voxel::BlendColor((_DWORD *)this, v40, aP2, j, v41); /*0x7607ed*/
                    v42 = a4b; /*0x7607f2*/
                  }
                  --v42; /*0x7607fa*/
                  --v41; /*0x7607fd*/
                  --v40; /*0x760800*/
                }
                v8 = v61; /*0x760809*/
                v39 = v55; /*0x76080d*/
                int v45 = 2 * v40; /*0x760811*/
                SamplePosition = (unsigned int)&v42[v45 / 0xFFFFFFFE]; /*0x760813*/
                v37 = &v41[v45 / 0xFFFFFFFE]; /*0x760815*/
              }
              --v39; /*0x760836*/
              v37 -= aP1a; /*0x760839*/
              ++v87; /*0x76083c*/
              v90 -= 2; /*0x760840*/
              v55 = v39; /*0x760844*/
              if ( v39 < v8 ) /*0x760848*/
                break; /*0x760848*/
              SamplePosition -= 2 * v72; /*0x760765*/
            }
          }
        }
      }
      else
      {
        v86 = *(_WORD *)(*(_DWORD *)&DataGlobal_87F8E4[32096] + 36) - v58 - v8 - 2; /*0x7603f4*/
  unsigned int v11; // ebx
        v11 = Audio::GetSamplePosition( /*0x760406*/
                *(int *)&DataGlobal_87F8E4[32096],
                0,
                (MouseClass *)(v8 - *(_DWORD *)&DataGlobal_87F8E4[30400]));
        int v12 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&DataGlobal_87F8E4[31280] + 124))(*(_DWORD *)&DataGlobal_87F8E4[31280]); /*0x76040a*/
        int v70 = *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[32096] + 40); /*0x760418*/
        if ( v11 + 2 * (v12 + v70 * (v9 - v61 + 1)) >= *(_DWORD *)(*(_DWORD *)&DataGlobal_87F8E4[32096] + 28) ) /*0x760437*/
        {
          int v27 = v61; /*0x760557*/
          int v54 = v61; /*0x76055d*/
          if ( v61 <= v9 ) /*0x760561*/
          {
            int v71 = 0; /*0x760567*/
            do /*0x760694*/
            {
              int v28 = v4[1]; /*0x76056f*/
              if ( v27 >= v28 + 2 && v27 <= v28 + v4[3] - 2 ) /*0x760586*/
              {
                _DWORD * v29 = (_DWORD *)(*(_DWORD *)(this + 424) + v71); /*0x760599*/
                int v30 = *v4; /*0x76059b*/
                int v63 = (int)&aP2->__pad_0[v29[1]]; /*0x7605b4*/
                if ( v63 >= *v4 + v4[2] - 2 ) /*0x7605b8*/
                  v63 = *v4 + v4[2] - 2; /*0x7605ba*/
                char * v31 = &aP2->__pad_0[*v29]; /*0x7605c4*/
                int v32 = v30 + 2; /*0x7605c6*/
                if ( (int)v31 > v30 + 2 ) /*0x7605cb*/
                  v32 = (int)v31; /*0x7605cd*/
                aP1 = (MouseClass *)v32; /*0x7605e5*/
                a4a = (_WORD *)(v74 /*0x7605f3*/
                              + 2
                              * (v32
                               + v27
                               * ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)&DataGlobal_87F8E4[31280] + 116))(*(_DWORD *)&DataGlobal_87F8E4[31280]) >> 1)));
                v33 = (MouseClass *)(v27 - *(_DWORD *)&DataGlobal_87F8E4[30400]); /*0x7605fd*/
                v85 = (MouseClass *)(v27 - *(_DWORD *)&DataGlobal_87F8E4[30400]); /*0x760607*/
                int v34 = abs32(v27 - v76 - *(_DWORD *)(this + 208)); /*0x760616*/
                if ( v32 <= v63 ) /*0x76061a*/
                {
                  while ( 1 ) /*0x760622*/
                  {
                    if ( *(_WORD *)Audio::GetSamplePosition(*(int *)&DataGlobal_87F8E4[32096], aP1, v33) > v86 ) /*0x76063b*/
                      Voxel::BlendColor((_DWORD *)this, v32, aP2, v34, a4a); /*0x76064b*/
                    ++v32; /*0x760659*/
                    aP1 = (MouseClass *)((char *)aP1 + 1); /*0x76065a*/
                    ++a4a; /*0x760667*/
                    if ( v32 > v63 ) /*0x76066b*/
                      break; /*0x76066b*/
                    v33 = v85; /*0x76061e*/
                  }
                }
                v27 = v54; /*0x76066d*/
                v4 = a3; /*0x760671*/
              }
              ++v27; /*0x760682*/
              --v86; /*0x760688*/
              v54 = v27; /*0x76068c*/
              v71 += 8; /*0x760690*/
            }
            while ( v27 <= v9 ); /*0x760694*/
          }
        }
        else
        {
          int v13 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&DataGlobal_87F8E4[31280] + 116))(*(_DWORD *)&DataGlobal_87F8E4[31280]) >> 1; /*0x760448*/
          int v80 = v13; /*0x760455*/
          _WORD * v14 = (_WORD *)(v74 + 2 * v61 * v13); /*0x760459*/
          int v15 = v61; /*0x76045c*/
          v16 = *(CCINIClass **)(this + 424); /*0x760460*/
          v89 = v16; /*0x760468*/
          for ( k = v61; v15 <= v9; k = v15 ) /*0x760470*/
          {
            if ( v15 >= v77 && v15 <= v78 ) /*0x760484*/
            {
              char * v17 = &aP2->__pad_0[v16->headNode[0]]; /*0x760491*/
              if ( (int)v17 >= v69 ) /*0x760497*/
                v17 = (char *)v69; /*0x760499*/
              int v62 = (int)v17; /*0x76049f*/
              char * v18 = &aP2->__pad_0[*(_DWORD *)v16->__pad_0]; /*0x7604a3*/
              int v19 = v79; /*0x7604a6*/
              if ( (int)v18 > v79 ) /*0x7604ac*/
                v19 = (int)v18; /*0x7604ae*/
              v20 = (unsigned __int16 *)(2 * v19 + v11); /*0x7604b7*/
              _WORD * v21 = &v14[v19]; /*0x7604b9*/
              __int64 v22 = v15 - v76 - *(_DWORD *)(this + 208); /*0x7604cb*/
              int v23 = v22; /*0x7604cc*/
              int v24 = v19; /*0x7604ce*/
              int v75 = v19; /*0x7604d2*/
              for ( m = (HIDWORD(v22) ^ v23) - HIDWORD(v22); v24 <= v62; v75 = v24 ) /*0x7604de*/
              {
                if ( *v20 > v86 ) /*0x7604e8*/
                {
                  Voxel::BlendColor((_DWORD *)this, v24, aP2, m, v21); /*0x7604f4*/
                  v24 = v75; /*0x7604f9*/
                }
                ++v20; /*0x760501*/
                ++v21; /*0x760504*/
                ++v24; /*0x760507*/
              }
              v9 = (int)a4; /*0x760510*/
              v15 = k; /*0x760514*/
              int v26 = 2 * v24; /*0x760518*/
              v11 = (unsigned int)&v20[v26 / 0xFFFFFFFE]; /*0x76051a*/
              v14 = &v21[v26 / 0xFFFFFFFE]; /*0x76051c*/
              v13 = v80; /*0x76051e*/
            }
            v14 += v13; /*0x760526*/
            v11 += 2 * v70; /*0x760529*/
            --v86; /*0x760536*/
            v16 = (CCINIClass *)&v89->headNode[1]; /*0x76053e*/
            ++v15; /*0x760541*/
            v89 = (CCINIClass *)((char *)v89 + 8); /*0x760544*/
          }
        }
      }
    }
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)&DataGlobal_87F8E4[31280] + 96))(*(_DWORD *)&DataGlobal_87F8E4[31280]); /*0x7609a7*/
    if ( *(_DWORD *)(this + 424) ) /*0x7609aa*/
    {
      __3_YAXPAX_Z(*(void **)(this + 424)); /*0x7609b7*/
      *(_DWORD *)(this + 424) = 0; /*0x7609bf*/
    }
  }
}
}

// 0x769330
void Surface::PixelToIndex(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  int v3 = *a2 - *(_DWORD *)(this + 68); /*0x769342*/
  int v4 = a2[1] - *(_DWORD *)(this + 72); /*0x769347*/
  int v6 = v3; /*0x769349*/
  int v7 = v4; /*0x76934f*/
  if ( v3 < 0 /*0x76937a*/
    || v6 >= (*(int (__thiscall **)(_DWORD))(*this->q024 + 124))(this->q024)
    || v7 < 0
    || v7 >= (*(int (__thiscall **)(_DWORD))(*this->q024 + 128))(this->q024) )
  {
    return -1; /*0x769390*/
  }
  else
  {
    return (*(int (__thiscall **)(_DWORD, int *))(*this->q024 + 40))(this->q024, &v6); /*0x769386*/
  }
}
}

// 0x7BD690
void Surface::CommitSurfaceBuffersAudio()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  unsigned __int16 *v13; // edi
  unsigned __int16 *v15; // edi
  unsigned int v29; // eax
  unsigned int v30; // eax
  int v31; // eax
  _DWORD *v32; // ebp
  int v33; // edx
  int v34; // eax
  int v35; // edi
  int v36; // edx
  __int16 v37; // ax
  int v38; // ecx
  unsigned __int8 v39; // cl
  int v40; // edx
  int v41; // ecx
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // eax
  int v46; // eax
  int v47; // eax
  unsigned int v48; // [esp-14h] [ebp-38h]
  int v49; // [esp-4h] [ebp-28h]
  int v50; // [esp-4h] [ebp-28h]
  int v51; // [esp-4h] [ebp-28h]
  int v52; // [esp+10h] [ebp-14h]
  int v53; // [esp+14h] [ebp-10h]
  int v54; // [esp+18h] [ebp-Ch]
  int v55; // [esp+1Ch] [ebp-8h]
  int v56; // [esp+1Ch] [ebp-8h]
  int v57; // [esp+1Ch] [ebp-8h]
  int v58; // [esp+20h] [ebp-4h]
  if ( !*(_DWORD *)(this + 136) ) /*0x7bd699*/
    return -8; /*0x7bd6af*/
  int v3 = *(unsigned __int8 *)(this + 243) * *(unsigned __int8 *)(this + 242) * *(unsigned __int16 *)(this + 248) + 4; /*0x7bd6cf*/
  LOBYTE(v3) = v3 & 0xFC; /*0x7bd6d2*/
  *(_DWORD *)(this + 1908) = v3; /*0x7bd6d4*/
  char v4 = *(_BYTE *)(this + 264); /*0x7bd6da*/
  if ( v4 == 1 || v4 == 4 ) /*0x7bd6e8*/
    *(_DWORD *)(this + 1908) = 2 * v3; /*0x7bd6ec*/
  unsigned int v5 = *(_DWORD *)(this + 266); /*0x7bd6f2*/
  unsigned int v6 = *(_DWORD *)(this + 1908); /*0x7bd6f8*/
  if ( v5 > v6 ) /*0x7bd700*/
    return -3; /*0x7bd70e*/
  if ( !v5 ) /*0x7bd711*/
    *(_DWORD *)(this + 266) = v6; /*0x7bd713*/
  if ( *(int *)(this + 140) > 0 ) /*0x7bd721*/
    goto LABEL_57; /*0x7bd721*/
  if ( *(_WORD *)(this + 1868) ) /*0x7bd727*/
    int v7 = *(unsigned __int16 *)(this + 1870); /*0x7bd735*/
  else
    v7 = *(unsigned __int8 *)(this + 245); /*0x7bd746*/
  if ( v7 != this->q010 ) /*0x7bd74b*/
  {
  int v9; // eax
    int v8 = *(_DWORD *)(this + 136); /*0x7bd75c*/
    v52 = 0; /*0x7bd762*/
    if ( v8 <= 1 ) /*0x7bd76d*/
      goto LABEL_56; /*0x7bd76d*/
    v52 = (v8 - 2) / v7 + 1; /*0x7bd77a*/
    if ( (*(_BYTE *)(this + 132) & 0x20) == 0 ) /*0x7bd786*/
      goto LABEL_56; /*0x7bd786*/
    if ( !*(_WORD *)(this + 1812) ) /*0x7bd78c*/
    {
      v9 = (v8 - 2) / v7 + 3; /*0x7bd79c*/
      goto LABEL_55; /*0x7bd79f*/
    }
    _WORD * v10 = *(_WORD **)(this + 1820); /*0x7bd7a4*/
    int v11 = *(unsigned __int8 *)(this + 245); /*0x7bd7ac*/
    v55 = *(unsigned __int16 *)(this + 1812); /*0x7bd7bb*/
    if ( *(_BYTE *)(this + 245) ) /*0x7bd7ac*/
    {
      int v12 = 0; /*0x7bd7c1*/
      v53 = 0; /*0x7bd7c5*/
      v54 = 0; /*0x7bd7c9*/
      if ( *(_WORD *)(this + 1812) ) /*0x7bd7b4*/
      {
        v13 = *(unsigned __int16 **)(this + 1820); /*0x7bd7cf*/
        while ( !(*v13 % v11) ) /*0x7bd7db*/
        {
          ++v12; /*0x7bd7e1*/
          v13 += 2; /*0x7bd7e2*/
          if ( v12 >= v55 ) /*0x7bd7e7*/
            goto LABEL_27; /*0x7bd7e7*/
        }
        v53 = 1; /*0x7bd7eb*/
      }
LABEL_27:
      int v14 = 0; /*0x7bd7f3*/
      if ( *(_WORD *)(this + 1812) ) /*0x7bd7b4*/
      {
        v15 = v10 + 1; /*0x7bd801*/
        while ( !(*v15 % v11) ) /*0x7bd810*/
        {
          ++v14; /*0x7bd812*/
          v15 += 2; /*0x7bd813*/
          if ( v14 >= v55 ) /*0x7bd818*/
            goto LABEL_51; /*0x7bd818*/
        }
        v54 = 1; /*0x7bd81f*/
      }
LABEL_51:
      if ( !v53 ) /*0x7bd8db*/
        goto LABEL_53; /*0x7bd8db*/
    }
    else
    {
      v53 = 1; /*0x7bd837*/
      v54 = 1; /*0x7bd83b*/
      int v16 = *(unsigned __int16 *)(this + 1868); /*0x7bd84b*/
      v58 = 0; /*0x7bd84d*/
      if ( *(_WORD *)(this + 1812) ) /*0x7bd7b4*/
      {
        while ( 1 ) /*0x7bd85b*/
        {
          if ( v53 ) /*0x7bd861*/
          {
            int v17 = 0; /*0x7bd863*/
            if ( *(_WORD *)(this + 1868) ) /*0x7bd84b*/
            {
              _WORD * v18 = *(_WORD **)(this + 1876); /*0x7bd86d*/
              while ( *v10 != *v18 ) /*0x7bd872*/
              {
                ++v17; /*0x7bd874*/
                v18 += 3; /*0x7bd875*/
                if ( v17 >= v16 ) /*0x7bd87a*/
                  goto LABEL_41; /*0x7bd87a*/
              }
              v53 = 0; /*0x7bd87e*/
            }
          }
LABEL_41:
          if ( v54 ) /*0x7bd88c*/
          {
            int v19 = 0; /*0x7bd88e*/
            if ( *(_WORD *)(this + 1868) ) /*0x7bd84b*/
            {
              _WORD * v20 = *(_WORD **)(this + 1876); /*0x7bd898*/
              while ( v10[1] != *v20 ) /*0x7bd89d*/
              {
                ++v19; /*0x7bd89f*/
                v20 += 3; /*0x7bd8a0*/
                if ( v19 >= v16 ) /*0x7bd8a5*/
                  goto LABEL_48; /*0x7bd8a5*/
              }
              v54 = 0; /*0x7bd8a9*/
            }
          }
LABEL_48:
          if ( !v53 && !v54 ) /*0x7bd8bf*/
            goto LABEL_56; /*0x7bd8bf*/
          v10 += 2; /*0x7bd8ca*/
          if ( ++v58 >= v55 ) /*0x7bd8d3*/
            goto LABEL_51; /*0x7bd8d3*/
        }
      }
    }
    ++v52; /*0x7bd8dd*/
LABEL_53:
    if ( !v54 ) /*0x7bd8e7*/
    {
LABEL_56:
      *(_DWORD *)(this + 140) = v52 + 2; /*0x7bd8f2*/
      goto LABEL_57; /*0x7bd8f9*/
    }
    v9 = v52 + 1; /*0x7bd8ed*/
LABEL_55:
    v52 = v9; /*0x7bd8ee*/
    goto LABEL_56; /*0x7bd8ee*/
  }
  *(_DWORD *)(this + 140) = 1; /*0x7bd74d*/
LABEL_57:
  v49 = *(_DWORD *)(this + 1908); /*0x7bd8ff*/
  *(_DWORD *)(this + 340) |= 1u; /*0x7bd90f*/
  _DWORD * v21 = 0; /*0x7bd91b*/
  *(_DWORD *)(this + 1896) = (*(_DWORD *)(this + 266) + 16) & 0xFFFFFFFC; /*0x7bd927*/
  int v22 = (*(int (__cdecl **)(int, int, _DWORD, int))(this + 68))(this, 2, 0, v49); /*0x7bd92d*/
  *(_DWORD *)(this + 1776) = v22; /*0x7bd935*/
  if ( !v22 ) /*0x7bd93b*/
    goto LABEL_103; /*0x7bd93b*/
  (*(void (__cdecl **)(int, int, int, _DWORD))(this + 68))(this, 4, v22, *(_DWORD *)(this + 1908)); /*0x7bd95c*/
  this->q00C += *(_DWORD *)(this + 1908); /*0x7bd96d*/
  v56 = 0; /*0x7bd978*/
  if ( *(int *)(this + 140) > 0 ) /*0x7bd97c*/
  {
    while ( 1 ) /*0x7bd991*/
    {
      int v23 = (*(int (__cdecl **)(int, int, _DWORD, int))(this + 68))(this, 2, 0, *(_DWORD *)(this + 1896) + 24); /*0x7bd991*/
      _DWORD * v24 = (_DWORD *)v23; /*0x7bd994*/
      if ( !v23 ) /*0x7bd99b*/
        goto LABEL_103; /*0x7bd99b*/
      (*(void (__cdecl **)(int, int, int, int))(this + 68))(this, 4, v23, *(_DWORD *)(this + 1896) + 24); /*0x7bd9af*/
      this->q00C += *(_DWORD *)(this + 1896) + 24; /*0x7bd9c4*/
      memset(v24, 0, 0x18u); /*0x7bd9cc*/
      *v24 = v24 + 6; /*0x7bd9d6*/
      if ( v21 ) /*0x7bd9d9*/
      {
        v21[1] = v24; /*0x7bd9e3*/
        v24[2] = v21; /*0x7bd9e6*/
      }
      else
      {
        *(_DWORD *)(this + 1772) = v24; /*0x7bd9db*/
      }
      v21 = v24; /*0x7bd9f4*/
      if ( ++v56 >= *(_DWORD *)(this + 140) ) /*0x7bd9fc*/
      {
        if ( v24 ) /*0x7bda00*/
        {
          v24[1] = *(_DWORD *)(this + 1772); /*0x7bda08*/
          *(_DWORD *)(*(_DWORD *)(this + 1772) + 8) = v24; /*0x7bda11*/
        }
        break; /*0x7bda11*/
      }
    }
  }
  int v25 = *(_DWORD *)(this + 1772); /*0x7bda14*/
  int v26 = *(_DWORD *)(this + 1896); /*0x7bda1a*/
  *(_DWORD *)(this + 356) = v25; /*0x7bda20*/
  *(_DWORD *)(this + 360) = v25; /*0x7bda26*/
  *(_DWORD *)(this + 1896) = v26 - 4; /*0x7bda31*/
  *(_DWORD *)(this + 1904) = 1020; /*0x7bda37*/
  _DWORD * v27 = 0; /*0x7bda69*/
  unsigned int v28; // ecx
  v28 = (2 /*0x7bda72*/
       * *(unsigned __int16 *)(this + 240)
       / (int)*(unsigned __int8 *)(this + 243)
       * (*(unsigned __int16 *)(this + 238)
        / (int)*(unsigned __int8 *)(this + 242))
       + 4)
      & 0xFFFFFFFC;
  *(_DWORD *)(this + 1912) = v28; /*0x7bda75*/
  if ( *(_WORD *)(this + 254) ) /*0x7bda7b*/
  {
    v29 = *(unsigned __int16 *)(this + 254); /*0x7bda8b*/
    if ( *(_WORD *)(this + 232) > 2u ) /*0x7bda98*/
      v29 <<= 8; /*0x7bda9a*/
  }
  else
  {
    v29 = v28; /*0x7bda87*/
  }
  v30 = v29 + 8; /*0x7bdaa9*/
  v50 = *(_DWORD *)(this + 1912); /*0x7bdaac*/
  LOBYTE(v30) = v30 & 0xFC; /*0x7bdab1*/
  *(_DWORD *)(this + 340) |= 2u; /*0x7bdab6*/
  *(_DWORD *)(this + 1900) = v30; /*0x7bdabc*/
  v31 = (*(int (__cdecl **)(int, int, _DWORD, int))(this + 68))(this, 2, 0, v50); /*0x7bdac2*/
  *(_DWORD *)(this + 1768) = v31; /*0x7bdaca*/
  if ( !v31 ) /*0x7bdad0*/
  {
LABEL_103:
    DSurface::CommitBuffers(this); /*0x7bdf14*/
    return -8; /*0x7bdf27*/
  }
  (*(void (__cdecl **)(int, int, int, _DWORD))(this + 68))(this, 4, v31, *(_DWORD *)(this + 1912)); /*0x7bdaf1*/
  this->q00C += *(_DWORD *)(this + 1912); /*0x7bdb02*/
  v57 = 0; /*0x7bdb0d*/
  if ( *(int *)(this + 136) > 0 ) /*0x7bdb11*/
  {
    while ( 1 ) /*0x7bdb30*/
    {
      v32 = (_DWORD *)(*(int (__cdecl **)(int, int, _DWORD, int))(this + 68))( /*0x7bdb30*/
                        this,
                        2,
                        0,
                        *(_DWORD *)(this + 1904) + *(_DWORD *)(this + 1900) + 44);
      if ( !v32 ) /*0x7bdb37*/
        goto LABEL_103; /*0x7bdb37*/
      (*(void (__cdecl **)(int, int, _DWORD *, int))(this + 68))( /*0x7bdb52*/
        this,
        4,
        v32,
        *(_DWORD *)(this + 1904) + *(_DWORD *)(this + 1900) + 44);
      this->q00C += *(_DWORD *)(this + 1904) + *(_DWORD *)(this + 1900) + 44; /*0x7bdb71*/
      memset(v32, 0, 0x2Cu); /*0x7bdb79*/
      *v32 = v32 + 11; /*0x7bdb7e*/
      v33 = (int)v32 + *(_DWORD *)(this + 1900) + 44; /*0x7bdb89*/
      v32[1] = 0; /*0x7bdb8d*/
      v32[2] = v33; /*0x7bdb94*/
      if ( v27 ) /*0x7bdb97*/
      {
        v27[3] = v32; /*0x7bdba1*/
        v32[4] = v27; /*0x7bdba4*/
      }
      else
      {
        *(_DWORD *)(this + 1764) = v32; /*0x7bdb99*/
      }
      v27 = v32; /*0x7bdbb2*/
      if ( ++v57 >= *(_DWORD *)(this + 136) ) /*0x7bdbba*/
      {
        v32[3] = *(_DWORD *)(this + 1764); /*0x7bdbca*/
        *(_DWORD *)(*(_DWORD *)(this + 1764) + 16) = v32; /*0x7bdbd3*/
        break; /*0x7bdbd3*/
      }
    }
  }
  v34 = *(_DWORD *)(this + 1764); /*0x7bdbd6*/
  v35 = *(_DWORD *)(this + 1904); /*0x7bdbdc*/
  v36 = *(_DWORD *)(this + 1900); /*0x7bdbe2*/
  *(_DWORD *)(this + 368) = v34; /*0x7bdbe8*/
  *(_DWORD *)(this + 416) = v34; /*0x7bdbee*/
  *(_DWORD *)(this + 1756) = v34; /*0x7bdbf4*/
  *(_DWORD *)(this + 1904) = v35 - 4; /*0x7bdc03*/
  *(_DWORD *)(this + 1900) = v36 - 4; /*0x7bdc09*/
  v37 = *(_WORD *)(this + 234); /*0x7bdc0f*/
  if ( (v37 & 1) != 0 ) /*0x7bdc18*/
  {
    v38 = *(_DWORD *)(this + 132); /*0x7bdc1e*/
    if ( (v38 & 1) != 0 ) /*0x7bdc27*/
    {
      if ( *(_WORD *)(this + 232) >= 2u ) /*0x7bdc35*/
      {
        if ( (v38 & 0x40) != 0 && (v37 & 2) != 0 ) /*0x7bdc57*/
        {
          *(_WORD *)(this + 60) = *(_WORD *)(this + 260); /*0x7bdc60*/
          *(_BYTE *)(this + 62) = *(_BYTE *)(this + 262); /*0x7bdc6a*/
          v39 = *(_BYTE *)(this + 263); /*0x7bdc6d*/
        }
        else
        {
          *(_WORD *)(this + 60) = *(_WORD *)(this + 256); /*0x7bdc7c*/
          *(_BYTE *)(this + 62) = *(_BYTE *)(this + 258); /*0x7bdc86*/
          v39 = *(_BYTE *)(this + 259); /*0x7bdc89*/
        }
        v40 = *(unsigned __int16 *)(this + 60) * (v39 >> 3); /*0x7bdc9c*/
        *(_BYTE *)(this + 63) = v39; /*0x7bdc9f*/
        *(_DWORD *)(this + 1996) = *(unsigned __int8 *)(this + 62) * v40; /*0x7bdcaa*/
      }
      else
      {
        *(_BYTE *)(this + 62) = 1; /*0x7bdc3c*/
        *(_WORD *)(this + 60) = 22050; /*0x7bdc40*/
        *(_BYTE *)(this + 63) = 8; /*0x7bdc44*/
        *(_DWORD *)(this + 1996) = 22050; /*0x7bdc48*/
      }
      if ( *(_DWORD *)(this + 152) == -1 ) /*0x7bdcb7*/
        *(_DWORD *)(this + 152) = *(_DWORD *)(this + 156) /*0x7bdcd2*/
                                * ((unsigned int)(*(_DWORD *)(this + 1996) + (*(_DWORD *)(this + 1996) >> 1))
                                 / *(_DWORD *)(this + 156));
      if ( *(int *)(this + 152) <= 0 ) /*0x7bdce0*/
      {
        DSurface::CommitBuffers(this); /*0x7bdf2a*/
        return -18; /*0x7bdf3b*/
      }
      v41 = *(_DWORD *)(this + 148); /*0x7bdce6*/
      if ( v41 ) /*0x7bdcee*/
      {
        *(_DWORD *)(this + 1932) = v41; /*0x7bdd3a*/
      }
      else
      {
        v42 = (*(int (__cdecl **)(int, int, _DWORD, _DWORD))(this + 68))(this, 2, 0, *(_DWORD *)(this + 152)); /*0x7bdcf5*/
        *(_DWORD *)(this + 1932) = v42; /*0x7bdcfb*/
        if ( !v42 ) /*0x7bdd03*/
          goto LABEL_103; /*0x7bdd03*/
        (*(void (__cdecl **)(int, int, int, _DWORD))(this + 68))(this, 4, v42, *(_DWORD *)(this + 152)); /*0x7bdd24*/
        this->q00C += *(_DWORD *)(this + 152); /*0x7bdd35*/
      }
      v51 = *(_DWORD *)(this + 152) / *(_DWORD *)(this + 156); /*0x7bdd4d*/
      *(_DWORD *)(this + 1948) = v51; /*0x7bdd53*/
      v43 = (*(int (__cdecl **)(int, int, _DWORD, int))(this + 68))(this, 2, 0, v51); /*0x7bdd59*/
      *(_DWORD *)(this + 1940) = v43; /*0x7bdd5f*/
      if ( !v43 ) /*0x7bdd67*/
        goto LABEL_103; /*0x7bdd67*/
      (*(void (__cdecl **)(int, int, int, _DWORD))(this + 68))(this, 4, v43, *(_DWORD *)(this + 1948)); /*0x7bdd88*/
      this->q00C += *(_DWORD *)(this + 1948); /*0x7bdd96*/
      memset(*(void **)(this + 1940), 0, *(_DWORD *)(this + 1948)); /*0x7bddac*/
      v44 = (*(int (__cdecl **)(int, int, _DWORD, int))(this + 68))(this, 2, 0, 2 * *(_DWORD *)(this + 1948)); /*0x7bddc3*/
      *(_DWORD *)(this + 1944) = v44; /*0x7bddc9*/
      if ( !v44 ) /*0x7bddd1*/
        goto LABEL_103; /*0x7bddd1*/
      (*(void (__cdecl **)(int, int, int, int))(this + 68))(this, 4, v44, 2 * *(_DWORD *)(this + 1948)); /*0x7bddf4*/
      this->q00C += 2 * *(_DWORD *)(this + 1948); /*0x7bde04*/
      memset(*(void **)(this + 1944), 0, 2 * *(_DWORD *)(this + 1948)); /*0x7bde1c*/
      v48 = 2 * (*(_DWORD *)(this + 1996) / (unsigned int)*(unsigned __int8 *)(this + 244)) + 100; /*0x7bde3b*/
      *(_DWORD *)(this + 1972) = v48; /*0x7bde41*/
      v45 = (*(int (__cdecl **)(int, int, _DWORD, unsigned int))(this + 68))(this, 2, 0, v48); /*0x7bde47*/
      *(_DWORD *)(this + 1960) = v45; /*0x7bde4d*/
      if ( !v45 ) /*0x7bde55*/
        goto LABEL_103; /*0x7bde55*/
      (*(void (__cdecl **)(int, int, int, _DWORD))(this + 68))(this, 4, v45, *(_DWORD *)(this + 1972)); /*0x7bde76*/
      this->q00C += *(_DWORD *)(this + 1972); /*0x7bde84*/
      v46 = (*(int (__cdecl **)(int, int, _DWORD, _DWORD))(this + 68))(this, 2, 0, *(_DWORD *)(this + 156)); /*0x7bde93*/
      *(_DWORD *)(this + 1976) = v46; /*0x7bde99*/
      if ( !v46 ) /*0x7bdea1*/
        goto LABEL_103; /*0x7bdea1*/
      (*(void (__cdecl **)(int, int, int, _DWORD))(this + 68))(this, 4, v46, *(_DWORD *)(this + 156)); /*0x7bdec2*/
      memset(*(void **)(this + 1976), 0, *(_DWORD *)(this + 156)); /*0x7bded8*/
      this->q00C += *(_DWORD *)(this + 156); /*0x7bdeef*/
    }
  }
  v47 = (*(int (__cdecl **)(int, int, _DWORD, int))(this + 68))(this, 2, 0, 4 * *(unsigned __int16 *)(this + 236)); /*0x7bdf04*/
  *(_DWORD *)(this + 1892) = v47; /*0x7bdf0a*/
  if ( !v47 ) /*0x7bdf12*/
    goto LABEL_103; /*0x7bdf12*/
  (*(void (__cdecl **)(int, int, int, int))(this + 68))(this, 4, v47, 4 * *(unsigned __int16 *)(this + 236)); /*0x7bdf4d*/
  this->q00C += 4 * *(unsigned __int16 *)(this + 236); /*0x7bdf65*/
  return -1; /*0x7bd6a3*/
}
}

// 0x411510
unsigned int * Surface::GetRect(unsigned int * a2)
{
{
    int v3;
    int v4;
    v3 = this->Width;
    v4 = this->Height;
    *a2 = 0;
    *((int*)(a2) + 1) = 0;
    *((int*)(a2) + 2) = v3;
    *((int*)(a2) + 3) = v4;
    return a2;
}
}

// 0x411540
int Surface::GetWidth()
{
{
    return this->Width;
}
}

// 0x411550
int Surface::GetHeight()
{
{
    return this->Height;
}
}

// 0x4115C0
char Surface::StubReturnFalse()
{
return 0;
}

// 0x4A4780
LPDIRECTDRAW Surface::CreateSurfacePalette()
{
{
    LPDIRECTDRAW result;
    int v3;
    BombClass *v4;
    char *v5;
    char v6;
    char *v7;
    char v8;
    char v9;
    if ( this != (AbstractClass *)&DataGlobal_89E138[6232] )
    memcpy(&DataGlobal_89E138[6232], this, 0x300u);
    result = *(LPDIRECTDRAW *)&DataGlobal_89E138[8028];
    if ( *(int *)&DataGlobal_89E138[8028] )
  {
    v3 = *(int *)&DataGlobal_89E138[8036];
    if ( *(int *)&DataGlobal_89E138[8036] )
    {
    v4 = (BombClass *)this;
    v5 = &DataGlobal_89E138[7005];
    do
      {
    v6 = v4->__pad_0[0];
    v9 = v4->__pad_0[1];
    v7 = &v4->__pad_0[2];
    v5 += 4;
    v8 = *v7;
    *(v5 - 5) = v6;
    v4 = (BombClass *)(v7 + 1);
    *(v5 - 4) = v9;
    *(v5 - 3) = v8;
      }
    while ( (int)v5 < 9044117 );
    result = *(LPDIRECTDRAW *)&DataGlobal_89E138[7000];
    if ( *(int *)&DataGlobal_89E138[7000] )
      {
    if ( !DataGlobal_89E138[8032] )
        {
    (*(void (__stdcall **)(int, int))(*(int *)(v3) + 124))(v3, *(int *)&DataGlobal_89E138[7000]);
    result = *(LPDIRECTDRAW *)&DataGlobal_89E138[7000];
    DataGlobal_89E138[8032] = 1;
        }
    return ((LPDIRECTDRAW (__stdcall *)(LPDIRECTDRAW, int, int, int, char *))result->lpVtbl->CreateSurface)( result, 0, 0, 256, &DataGlobal_89E138[7004]);
      }
    }
  }
    return result;
}
}

// 0x4AEC60
unsigned int * Surface::Construct(ObjectClass * aP1, IUnknown * aP2)
{
{
    this->Width = aP1;
    this->Height = aP2;
    *(void**)this = &Surface_Vtable;
    return this;
}
}

// 0x620F60
namespace gamemd {
int Surface_Render(ObjectClass * aP0, unsigned short * a1, int * yTop, unsigned char * a3, int aP1, int a6)
{
{
    AbstractClass *v6;
    int v8;
    AbstractClass *v9;
    AbstractClass *v10;
    int v12;
    int *yTopa;
    AbstractClass *aP1a;
    v6 = (AbstractClass *)a3;
    v8 = yTop[2];
    v9 = (AbstractClass *)(yTop[3] - yTop[1]);
    yTopa = (int *)yTop[1];
    v10 = (AbstractClass *)(v8 - *yTop);
    aP1a = (AbstractClass *)(((unsigned char)aP1 >> DataGlobal_89E138[11420] << DataGlobal_89E138[11416]) | (BYTE2(aP1) >> DataGlobal_89E138[11428] << DataGlobal_89E138[11424]) | (BYTE1(aP1) >> DataGlobal_89E138[11436] << DataGlobal_89E138[11432]));
    v12 = *yTop;
    if ( !a3 )
    v6 = ::aP0;
    Char::Swap(v6, (ObjectClass *)1);
    TextGroup::SetRect(v6, (AbstractClass *)yTop);
    Property::Set(v6, aP1a);
    Font::Print(v6, (AbstractClass *)aP0, (AbstractClass *)a1, v12, (AbstractClass *)yTopa, v10, v9, 0, 0, 0);
    return 0;
}
}
} // namespace gamemd
