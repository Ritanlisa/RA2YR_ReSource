// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_5B6CD0_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/Voxel_e4.hpp"
#include "e4/classes/Surface_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/SwizzleManagerClass_19_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Timer_e4.hpp"

// 0x411580
namespace gamemd {
int Surface::IsLocked()
{
  return this->q00C != 0; /*0x41158a*/
}
} // namespace gamemd
// 0x5D1FD0
namespace gamemd {
unsigned int * Surface::CopyRect(ObjectClass * aP1)
{
  _DWORD *result; // eax
  int v4; // ebx
  int v5; // ebp
  int v6; // edi
  int v7; // ecx
  int *v8; // eax
  int v9; // edx
  int v10; // edx
  int *v11; // ebp
  int v12; // esi
  int v13; // ebx
  int v14; // ebp
  int v15; // edx
  int v16; // eax
  int v18; // eax
  void * v19;
  _DWORD *v20; // edi
  _DWORD *v21; // edx
  int v22; // ecx
  int v23; // ebx
  int *v24; // ebp
  int v25; // edi
  int v26; // esi
  int v27; // edx
  int v28; // esi
  _DWORD *v29; // edx
  int v30; // edx
  _DWORD *v32; // ecx
  int v34; // [esp+10h] [ebp-2Ch]
  int v35; // [esp+10h] [ebp-2Ch]
  int v38; // [esp+18h] [ebp-24h]
  int v39; // [esp+1Ch] [ebp-20h]
  int v40; // [esp+1Ch] [ebp-20h]
  int v42; // [esp+24h] [ebp-18h]
  int v43; // [esp+28h] [ebp-14h]
  int v44; // [esp+2Ch] [ebp-10h] BYREF
  int v45; // [esp+30h] [ebp-Ch]
  int v46; // [esp+34h] [ebp-8h]
  _DWORD *v47; // [esp+38h] [ebp-4h]
  char v48; // [esp+40h] [ebp+4h]
  int v49; // [esp+40h] [ebp+4h]
  unsigned int v50; // [esp+40h] [ebp+4h]

  result = this; /*0x5d1fdc*/
  v4 = aP1[2]; /*0x5d1fde*/
  v4 = v4; /*0x5d1fe8*/
  if ( v4 <= 0 ) /*0x5d1fec*/
    return result; /*0x5d1fec*/
  v39 = aP1[3]; /*0x5d1ff7*/
  if ( v39 <= 0 ) /*0x5d1ffb*/
    return result; /*0x5d1ffb*/
  v5 = this->Width; /*0x5d2001*/
  v34 = 0; /*0x5d2004*/
  v5 = v5; /*0x5d200a*/
  if ( v5 <= 0 ) /*0x5d200e*/
  {
  LABEL_18:
    if ( v5 >= result[4] ) /*0x5d207c*/
    {
      v22 = 0; /*0x5d2165*/
      v50 = -1; /*0x5d2169*/
      v44 = 0; /*0x5d2171*/
      v45 = 0; /*0x5d2175*/
      v46 = 0; /*0x5d2179*/
      v47 = 0; /*0x5d217d*/
      v35 = 0; /*0x5d2181*/
      if ( v5 > 0 ) /*0x5d2185*/
      {
        v23 = *aP1; /*0x5d218b*/
        v42 = *aP1; /*0x5d2191*/
        v43 = *aP1 + v4; /*0x5d219b*/
        v38 = aP1[1]; /*0x5d21a3*/
        v40 = v39 + v38; /*0x5d21a9*/
        v24 = (int *)this->q00C; /*0x5d21b1*/
        while ( 1 ) /*0x5d21c0*/
        {
          v25 = v24[1]; /*0x5d21c0*/
          v26 = *v24 + v24[2]; /*0x5d21c6*/
          v27 = v25 + v24[3]; /*0x5d21c8*/
          if ( v23 >= *v24 ) /*0x5d21cc*/
            v23 = *v24; /*0x5d21ce*/
          if ( v38 < v25 ) /*0x5d21d6*/
            v25 = v38; /*0x5d21d8*/
          if ( v43 > v26 ) /*0x5d21e0*/
            v26 = v43; /*0x5d21e2*/
          v28 = v26 - v23; /*0x5d21e8*/
          if ( v40 > v27 ) /*0x5d21ec*/
            v27 = v40; /*0x5d21ee*/
          v29 = (_DWORD *)(v27 - v25); /*0x5d21f0*/
          if ( v28 * (int)v29 < v50 ) /*0x5d21fb*/
          {
            v22 = v35; /*0x5d21fd*/
            v50 = v28 * (_DWORD)v29; /*0x5d2201*/
            v44 = v23; /*0x5d2205*/
            v45 = v25; /*0x5d2209*/
            v46 = v28; /*0x5d220d*/
            v47 = v29; /*0x5d2211*/
          }
          v24 += 4; /*0x5d221e*/
          if ( ++v35 >= v5 ) /*0x5d2227*/
            break; /*0x5d2227*/
          v23 = v42; /*0x5d21b6*/
        }
        result = this; /*0x5d2229*/
      }
      v30 = result[3]; /*0x5d222d*/
      v45 = v45; /*0x5d2230*/
      v32 = (_DWORD *)(v30 + 16 * v22); /*0x5d2237*/
      *v32 = v44; /*0x5d223d*/
      v46 = v46; /*0x5d223f*/
      v32[1] = v45; /*0x5d2243*/
      result = v47; /*0x5d2246*/
      v32[2] = v46; /*0x5d224a*/
      v32[3] = result; /*0x5d224d*/
    }
    else
    {
      v11 = (int *)(result[3] + 16 * v5); /*0x5d208a*/
      *v11 = *aP1; /*0x5d208d*/
      v11[1] = aP1[1]; /*0x5d2093*/
      v11[2] = aP1[2]; /*0x5d2099*/
      v11[3] = aP1[3]; /*0x5d20a0*/
      ++result[1]; /*0x5d20a8*/
    }
    return result; /*0x5d20af*/
  }
  v6 = *aP1; /*0x5d2010*/
  v7 = aP1[1]; /*0x5d2012*/
  v8 = (int *)result[3]; /*0x5d2015*/
  while ( 1 ) /*0x5d2020*/
  {
    v48 = 0; /*0x5d2020*/
    v9 = *v8; /*0x5d2024*/
    if ( v6 >= *v8 ) /*0x5d2028*/
    {
      if ( v9 + v8[2] < v6 ) /*0x5d2039*/
        goto LABEL_11; /*0x5d2039*/
    }
    else if ( v6 + v4 < v9 ) /*0x5d202e*/
    {
      goto LABEL_11; /*0x5d202e*/
    }
    v48 = 1; /*0x5d203b*/
  LABEL_11:
    v10 = v8[1]; /*0x5d2040*/
    if ( v7 >= v10 ) /*0x5d2045*/
    {
      if ( v10 + v8[3] < v7 ) /*0x5d205a*/
        goto LABEL_16; /*0x5d205a*/
    }
    else if ( v7 + v39 < v10 ) /*0x5d204f*/
    {
      goto LABEL_16; /*0x5d204f*/
    }
    if ( v48 == 1 ) /*0x5d2061*/
      break; /*0x5d2061*/
  LABEL_16:
    v8 += 4; /*0x5d2063*/
    if ( ++v34 >= v5 ) /*0x5d2071*/
    {
      result = this; /*0x5d2073*/
      goto LABEL_18; /*0x5d2073*/
    }
    v4 = v4; /*0x5d201a*/
  }
  v12 = *v8; /*0x5d20b6*/
  v13 = v8[1]; /*0x5d20b8*/
  v14 = v6 + v4; /*0x5d20bb*/
  v49 = v7 + v39; /*0x5d20c4*/
  v15 = *v8 + v8[2]; /*0x5d20ce*/
  v16 = v13 + v8[3]; /*0x5d20d0*/
  if ( v6 < v12 ) /*0x5d20d4*/
    v12 = v6; /*0x5d20d6*/
  v44 = v12; /*0x5d20da*/
  if ( v7 < v13 ) /*0x5d20de*/
    v13 = v7; /*0x5d20e0*/
  v45 = v13; /*0x5d20e4*/
  if ( v14 <= v15 ) /*0x5d20e8*/
    v46 = v15 - v12; /*0x5d20f4*/
  else
    v46 = v14 - v12; /*0x5d20ec*/
  if ( v49 <= v16 ) /*0x5d20fe*/
    v47 = (_DWORD *)(v16 - v13); /*0x5d210a*/
  else
    v47 = (_DWORD *)(v49 - v13); /*0x5d2102*/
  v34 = v34; /*0x5d2116*/
  this->Width = v5 - 1; /*0x5d211d*/
  if ( v34 < v5 - 1 ) /*0x5d2120*/
  {
    v18 = 16 * v34; /*0x5d2124*/
    do /*0x5d214f*/
    {
      v19 = this->q00C; /*0x5d2127*/
      v20 = (_DWORD *)(v18 + v19 + 16); /*0x5d212a*/
      v21 = (_DWORD *)(v18 + v19); /*0x5d212e*/
      ++v34; /*0x5d2130*/
      v18 += 16; /*0x5d2131*/
      *v21 = *v20; /*0x5d2136*/
      v21[1] = v20[1]; /*0x5d213b*/
      v21[2] = v20[2]; /*0x5d2141*/
      v21[3] = v20[3]; /*0x5d2147*/
    }
    while ( v34 < this->Width ); /*0x5d214f*/
  }
  return (_DWORD *)Surface::CopyRect(&v44); /*0x5d208c*/
}
} // namespace gamemd
// 0x626C60
namespace gamemd {
void sub_626C60()
{
  _DWORD *v0; // eax
  _DWORD *v1; // ebx
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  _DWORD *v4; // eax
  _DWORD *v5; // esi
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  _DWORD *v8; // eax
  _DWORD *v9; // edi
  int v10; // ecx
  _DWORD * v11;
  int v12; // ecx

  if ( g_FileExtensionState ) /*0x626c68*/
    return *(_DWORD *)(*((_DWORD *)g_FileExtensionState + 1) + 16); /*0x626d93*/
  v0 = RA2_OPNEW(0x10u); /*0x626c70*/
  v1 = v0; /*0x626c75*/
  if ( v0 ) /*0x626c7c*/
  {
    *v0 = -1; /*0x626c86*/
    v2 = RA2_OPNEW(0x18u); /*0x626c8c*/
    v3 = v2; /*0x626c91*/
    if ( v2 ) /*0x626c98*/
    {
      StringVector::Construct(v2, 0, 0); /*0x626ca0*/
      *(void **)v3 = (void*)&DynamicVectorClass_char___vftable; /*0x626caa*/
      v3[5] = 10; /*0x626cb0*/
      v3[4] = 0; /*0x626cb3*/
    }
    else
    {
      v3 = 0; /*0x626cbc*/
    }
    v1[1] = v3; /*0x626cc5*/
    v4 = RA2_OPNEW(0x18u); /*0x626cc8*/
    v5 = v4; /*0x626ccd*/
    if ( v4 ) /*0x626cd4*/
    {
      VectorClass::ConstructHSV(v4, 0, 0); /*0x626cdc*/
      *(void **)v5 = (void*)&DynamicVectorClass_HSVClass_vftable; /*0x626ce1*/
      v5[5] = 10; /*0x626ce7*/
      v5[4] = 0; /*0x626cea*/
    }
    else
    {
      v5 = 0; /*0x626cf3*/
    }
    v1[2] = v5; /*0x626cf7*/
    v6 = RA2_OPNEW(0x10u); /*0x626cfa*/
    v7 = v6; /*0x626cff*/
    if ( v6 ) /*0x626d06*/
    {
      v6[1] = HashStringMod31; /*0x626d0d*/
      v6[2] = 31; /*0x626d14*/
      v6[3] = 10; /*0x626d1b*/
      v8 = RA2_OPNEW(0x2ECu); /*0x626d1e*/
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
      v10 = v7[2]; /*0x626d46*/
      v11 = 0; /*0x626d49*/
      *v7 = v9; /*0x626d4d*/
      if ( v10 > 0 ) /*0x626d4f*/
      {
        v12 = 0; /*0x626d51*/
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
// 0x641DB0
AbstractClass * * Surface::LoadToSurfaceSHP(char * Source)
{
  _DWORD *v3; // esi
  char *v4; // ebx
  int v5; // eax
  char *v6; // eax
  int v8; // [esp+0h] [ebp-84h]
  _DWORD v9[22]; // [esp+18h] [ebp-6Ch] BYREF
  _BYTE v10[12]; // [esp+70h] [ebp-14h] BYREF
  int v11; // [esp+7Ch] [ebp-8h]

  CCFileClass::Construct(v9, Source); /*0x641dc0*/
  if ( !CCFileClass::Open(v9, 0) ) /*0x641dcb*/
    goto LABEL_11; /*0x641dcb*/
  if ( *this ) /*0x641dd8*/
  {
    (**(void (__thiscall ***)(char *, int))*this)(*this, 1); /*0x641de2*/
    *this = 0; /*0x641de4*/
  }
  v3 = DecodeFrameSHP((int)v9, 0, 0, 0); /*0x641df9*/
  if ( v3 && (*(int (__thiscall **)(_DWORD *))(*v3 + 124))(v3) && (*(int (__thiscall **)(_DWORD *))(*v3 + 128))(v3) ) /*0x641e16*/
  {
    v4 = (char *)RA2_OPNEW(0x24u); /*0x641e2c*/
    if ( v4 ) /*0x641e33*/
    {
      v8 = (*(int (__thiscall **)(_DWORD *))(*v3 + 128))(v3); /*0x641e45*/
      v5 = (*(int (__thiscall **)(_DWORD *))(*v3 + 124))(v3); /*0x641e48*/
      v6 = DSurface::Construct(v4, v5, v8, 1, 0); /*0x641e4e*/
    }
    else
    {
      v6 = 0; /*0x641e55*/
    }
    *this = v6; /*0x641e57*/
    (*(void (__thiscall **)(char *, _DWORD))(v6->nextArrayIndex)(v6, 0); /*0x641e5f*/
    (*(void (__thiscall **)(char *, _DWORD *, _DWORD, int))(*(_DWORD *)*this + 4))(*this, v3, 0, 1); /*0x641e6b*/
    (*(void (__thiscall **)(_DWORD *, int))*v3)(v3, 1); /*0x641e74*/
    v9[0] = (void*)&CCFileClass_vftable; /*0x641e7a*/
    v11 = 0; /*0x641e82*/
    Vector::Clear((int)v10); /*0x641e8a*/
    v9[0] = &off_7E1668; /*0x641e93*/
    BufferIOFileClass::Dtor(v9); /*0x641e9b*/
    return 1; /*0x641ea2*/
  }
  else
  {
  LABEL_11:
    v9[0] = (void*)&CCFileClass_vftable; /*0x641eaf*/
    v11 = 0; /*0x641eb7*/
    Vector::Clear((int)v10); /*0x641ebf*/
    v9[0] = &off_7E1668; /*0x641ec8*/
    BufferIOFileClass::Dtor(v9); /*0x641ed0*/
    return 0; /*0x641ed6*/
  }
}
// 0x655250
int Surface::RenderRadar()
{
  int v2; // ebx
  int v3; // ebp
  int v4; // ebp
  int v5; // esi
  int v6; // ecx
  int v7; // ecx
  int v8; // edx
  int *v9; // eax
  int v10; // ecx
  void *v11; // eax
  int v12; // ebp
  int v13; // edx
  int v14; // ecx
  char v15; // dl
  int v16; // ecx
  int v17; // ecx
  int v18; // edx
  int *v19; // eax
  int v20; // ecx
  int v21; // edx
  int v22; // esi
  int v23; // esi
  int v24; // edx
  int v25; // eax
  int v26; // ecx
  int *v29; // edi
  __int16 v31; // [esp+Ch] [ebp-90h] BYREF
  char v32; // [esp+Eh] [ebp-8Eh]
  __int16 v33; // [esp+10h] [ebp-8Ch] BYREF
  char v34; // [esp+12h] [ebp-8Ah]
  int v35; // [esp+14h] [ebp-88h] BYREF
  int v36; // [esp+18h] [ebp-84h]
  int v37; // [esp+1Ch] [ebp-80h]
  int v38; // [esp+24h] [ebp-78h]
  int v39; // [esp+28h] [ebp-74h] BYREF
  int v40; // [esp+2Ch] [ebp-70h]
  int v41; // [esp+30h] [ebp-6Ch]
  int v42; // [esp+34h] [ebp-68h]
  int v43; // [esp+38h] [ebp-64h]
  int v44; // [esp+40h] [ebp-5Ch]
  int v47[4]; // [esp+4Ch] [ebp-50h] BYREF
  int v48[7]; // [esp+5Ch] [ebp-40h] BYREF
  int v50[4]; // [esp+7Ch] [ebp-20h] BYREF
  int v51[4]; // [esp+8Ch] [ebp-10h] BYREF

  v2 = 0; /*0x65525b*/
  v3 = *(&this->u32_1D05); /*0x65525d*/
  v36 = 0; /*0x655263*/
  v4 = v3 - 1; /*0x655267*/
  v37 = 0; /*0x655268*/
  v38 = 0; /*0x65526c*/
  v43 = v4; /*0x655270*/
  if ( v4 >= 0 ) /*0x655274*/
  {
    while ( 1 ) /*0x65528b*/
    {
      v35 = *(_DWORD *)(*(&this->u32_1D02) + 4 * v4); /*0x65528b*/
      if ( !LayerClass::IsWithinUsableArea(this, (__int16 *)&v35, 1) ) /*0x655298*/
        goto LABEL_32; /*0x655298*/
      v5 = (__int16)v35 + *(&this->u32_20C6) - IDA_SHIWORD(v35); /*0x6552b8*/
      v6 = 2; /*0x6552bf*/
      if ( v5 == -1 ) /*0x6552c4*/
        break; /*0x6552c4*/
      if ( v5 == 2 * *(&this->q0185) - 1 ) /*0x6552d6*/
        goto LABEL_6; /*0x6552d6*/
  LABEL_7:
      v40 = (__int16)v35 + IDA_SHIWORD(v35) - *(&this->u32_20C8); /*0x6552dd*/
      v41 = v6; /*0x6552e8*/
      v7 = *(&this->u32_1D08); /*0x6552ec*/
      v42 = 1; /*0x6552f2*/
      v8 = *(&this->u32_1D09); /*0x6552f6*/
      v47[0] = 0; /*0x6552fd*/
      v47[1] = 0; /*0x655301*/
      v47[2] = v7; /*0x65530a*/
      v47[3] = v8; /*0x65530e*/
      v39 = v5; /*0x65531e*/
      v9 = ClipRectIntersection(v50, &v39, v47, 0, 0); /*0x655322*/
      v39 = *v9; /*0x65532b*/
      v40 = v9[1]; /*0x655332*/
      v41 = v9[2]; /*0x655339*/
      v10 = v9[3]; /*0x65533d*/
      v42 = v10; /*0x655342*/
      if ( v41 > 0 && v10 > 0 ) /*0x65534e*/
      {
        v33 = 0; /*0x655358*/
        v34 = 0; /*0x655368*/
        v31 = 0; /*0x65536d*/
        v32 = 0; /*0x655377*/
        v11 = CellCoord::To_CellObj(&MapClass_Instance, (__int16 *)&v35); /*0x65537c*/
        v12 = v39 + v40 * *(&this->u32_1D08); /*0x655390*/
        GetCellRadarColors((int)v11, (int)&v33, (int)&v31); /*0x65539e*/
        if ( v5 ) /*0x6553ab*/
        {
          if ( v41 != 1 ) /*0x6553d2*/
            goto LABEL_14; /*0x6553d2*/
          v14 = 3 * v12 + *(&this->u32_1D07); /*0x6553de*/
          *(_WORD *)v14 = v33; /*0x6553e5*/
          v15 = v34; /*0x6553e8*/
        }
        else
        {
          if ( v41 == 1 ) /*0x6553b0*/
          {
            v13 = *(&this->u32_1D07) + 3 * v12 + 3; /*0x6553bc*/
            *(_WORD *)v13 = v31; /*0x6553c3*/
            *(_BYTE *)(v13 + 2) = v32; /*0x6553ca*/
            goto LABEL_16; /*0x6553cd*/
          }
  LABEL_14:
          v16 = *(&this->u32_1D07) + 3 * v12; /*0x6553ee*/
          *(_WORD *)v16 = v33; /*0x6553ff*/
          *(_BYTE *)(v16 + 2) = v34; /*0x655406*/
          v14 = *(&this->u32_1D07) + 3 * v12 + 3; /*0x655413*/
          *(_WORD *)v14 = v31; /*0x65541a*/
          v15 = v32; /*0x65541d*/
        }
        *(_BYTE *)(v14 + 2) = v15; /*0x655421*/
  LABEL_16:
        v17 = *(&this->u32_1D08); /*0x655424*/
        v18 = *(&this->u32_1D09); /*0x65542a*/
        v48[0] = 0; /*0x655430*/
        v48[1] = 0; /*0x655434*/
        v48[2] = v17; /*0x655439*/
        v48[3] = v18; /*0x655441*/
        v19 = GenerateImageThumbnail((float *)this, v51, v48, &v39, 0); /*0x655455*/
        v20 = *v19; /*0x65545e*/
        v44 = v19[1]; /*0x655463*/
        v21 = v19[2]; /*0x655467*/
        v21 = v21; /*0x65546a*/
        v22 = v19[3]; /*0x65546e*/
        v22 = v22; /*0x655471*/
        if ( v2 <= 0 || v38 <= 0 ) /*0x655481*/
        {
          v26 = *v19; /*0x655501*/
          v24 = v19[1]; /*0x655503*/
          v2 = v19[2]; /*0x655506*/
          v25 = v19[3]; /*0x655509*/
        }
        else if ( v21 <= 0 || v22 <= 0 ) /*0x655489*/
        {
          v26 = v36; /*0x6554f5*/
          v24 = v37; /*0x6554f9*/
          v25 = v38; /*0x6554fd*/
        }
        else
        {
          v23 = v36; /*0x65548b*/
          v24 = v37; /*0x65548f*/
          v38 = v38; /*0x655495*/
          if ( v36 > v20 ) /*0x655499*/
          {
            v2 = v36 + v2 - v20; /*0x65549d*/
            v23 = v20; /*0x65549f*/
          }
          if ( v37 > v44 ) /*0x6554a7*/
          {
            v24 = v44; /*0x6554b1*/
            v38 += v37 - v44; /*0x6554b3*/
          }
          if ( v2 + v23 < v20 + v21 ) /*0x6554c2*/
            v2 = v21 - v23 + v20 + 1; /*0x6554ca*/
          v25 = v38; /*0x6554d8*/
          if ( v38 + v24 < v44 + v22 ) /*0x6554e1*/
            v25 = v44 - v24 + v22 + 1; /*0x6554ed*/
          v26 = v23; /*0x6554f1*/
        }
        v4 = v43; /*0x65550c*/
        v36 = v26; /*0x655510*/
        v37 = v24; /*0x655514*/
        v38 = v25; /*0x655518*/
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
  (*(void (__thiscall **)(_DWORD *))(*(&this->u32_1D01) + 12))(&this->u32_1D01); /*0x655528*/
  v36 = v36; /*0x655537*/
  v37 = v37; /*0x65553b*/
  v29 = &this->q1248; /*0x65553f*/
  v38 = v38; /*0x655545*/
  *v29 = v36; /*0x655549*/
  v29[1] = v37; /*0x65554b*/
  v29[2] = v2; /*0x65554e*/
  v29[3] = v38; /*0x655551*/
}
// 0x6BA3E0
int Surface::TileBlit(INIClass * aP0, ObjectClass * aP1, int a3, int a4, int a5)
{
  int v5; // ebx
  int v7; // edi
  int v8; // eax
  int v10; // esi
  int v11; // ecx
  int v12; // eax
  int v13; // edx
  int v14; // ebx
  int v15; // ecx
  int v16; // [esp+18h] [ebp-48h]
  int v17; // [esp+1Ch] [ebp-44h]
  int v18; // [esp+20h] [ebp-40h]
  int v19; // [esp+24h] [ebp-3Ch]
  int v20; // [esp+28h] [ebp-38h]
  int v21; // [esp+2Ch] [ebp-34h]
  int v22; // [esp+38h] [ebp-28h]
  int v23; // [esp+3Ch] [ebp-24h]
  _BYTE v24[16]; // [esp+40h] [ebp-20h] BYREF
  _DWORD v25[4]; // [esp+50h] [ebp-10h] BYREF
  int v26; // [esp+64h] [ebp+4h]
  int v27; // [esp+74h] [ebp+14h]

  v5 = aP1; /*0x6ba3e4*/
  v20 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)aP1 + 92))(aP1, 0, 0); /*0x6ba3f8*/
  if ( !v20 ) /*0x6ba3fc*/
    return 0; /*0x6ba3ff*/
  v7 = a3; /*0x6ba408*/
  v21 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a3 + 92))(a3, 0, 0); /*0x6ba41b*/
  if ( v21 )
  {
    v17 = (*(int (__thiscall **)(int))(*(_DWORD *)aP1 + 116))(aP1) / 2; /*0x6ba442*/
    v18 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 116))(a3) / 2; /*0x6ba452*/
    v8 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a3 + 120))(a3, v24); /*0x6ba45d*/
    v22 = *(_DWORD *)(v8 + 8); /*0x6ba470*/
    v23 = *(_DWORD *)(v8 + 12); /*0x6ba480*/
    (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)aP1 + 120))(aP1, v25); /*0x6ba484*/
    v10 = aP0[2]; /*0x6ba48f*/
    v11 = aP0[3]; /*0x6ba492*/
    v19 = (v22 - v10) / 2 <= 0 ? 0 : (v22 - v10) / 2;
    v12 = 0; /*0x6ba4bf*/
    v16 = 0; /*0x6ba4c3*/
    if ( v11 > 0 )
    {
      v13 = a5 + ((v23 - v11) / 2 <= 0 ? 0 : (v23 - v11) / 2);
      v27 = v13; /*0x6ba4d3*/
      do /*0x6ba558*/
      {
        v26 = 0; /*0x6ba4d9*/
        if ( v10 > 0 ) /*0x6ba4ee*/
        {
          v14 = v19 + a4; /*0x6ba506*/
          v15 = v20 + 2 * (*aP0 + v17 * (aP0[1] + v12)); /*0x6ba50d*/
          do /*0x6ba537*/
          {
            v15 += 2; /*0x6ba512*/
            *(_WORD *)(v15 - 2) = *(_WORD *)(v21 + 2 * (v18 * (v13 % v23) + v14 % v22)); /*0x6ba528*/
            v10 = aP0[2]; /*0x6ba52c*/
            ++v14; /*0x6ba530*/
            ++v26; /*0x6ba533*/
          }
          while ( v26 < v10 ); /*0x6ba537*/
          v7 = a3; /*0x6ba539*/
          v12 = v16; /*0x6ba53d*/
          v5 = aP1; /*0x6ba541*/
        }
        ++v12; /*0x6ba54c*/
        v13 = v27 + 1; /*0x6ba54d*/
        v16 = v12; /*0x6ba550*/
        ++v27; /*0x6ba554*/
      }
      while ( v12 < aP0[3] ); /*0x6ba558*/
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 96))(v7); /*0x6ba562*/
    (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 96))(v5); /*0x6ba569*/
    return 1; /*0x6ba56f*/
  }
  else
  {
    (*(void (__thiscall **, unsigned int a3)(int))(*(_DWORD *)aP1 + 96))(aP1); /*0x6ba425*/
    return 0; /*0x6ba429*/
  }
}
// 0x6BA580
int Surface::BlitTransparent(int * a0, ObjectClass * aP1, int a3, ObjectClass * aP3)
{
  int v5; // ebp
  int v6; // ebx
  int v7; // esi
  int v8; // edi
  int v9; // eax
  int v10; // edx
  _WORD *v11; // ebx
  int v12; // esi
  _WORD *v13; // eax
  _WORD *v14; // ecx
  int v15; // [esp+10h] [ebp-14h]
  int v16; // [esp+1Ch] [ebp-8h]
  int v17; // [esp+28h] [ebp+4h]

  v15 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)aP1 + 92))(aP1, 0, 0); /*0x6ba599*/
  if ( !v15 ) /*0x6ba59d*/
    return 0; /*0x6ba5a1*/
  v5 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a3 + 92))(a3, 0, 0); /*0x6ba5bb*/
  if ( v5 ) /*0x6ba5bf*/
  {
    v6 = *a0; /*0x6ba5d8*/
    v7 = a0[1]; /*0x6ba5da*/
    v16 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 124))(a3); /*0x6ba5f2*/
    v8 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 128))(a3); /*0x6ba604*/
    v9 = (*(int (__thiscall **)(int))(*(_DWORD *)aP1 + 116))(aP1) / 2; /*0x6ba60e*/
    if ( v8 > 0 ) /*0x6ba612*/
    {
      v10 = v16; /*0x6ba617*/
      v17 = 2 * v9; /*0x6ba624*/
      v11 = (_WORD *)(v15 + 2 * (v6 + v9 * v7)); /*0x6ba628*/
      do /*0x6ba65a*/
      {
        if ( v10 > 0 ) /*0x6ba62d*/
        {
          v12 = v10; /*0x6ba62f*/
          v13 = (_WORD *)v5; /*0x6ba633*/
          v14 = v11; /*0x6ba635*/
          v5 += 2 * v10; /*0x6ba637*/
          do /*0x6ba64d*/
          {
            if ( *v13 != aP3 ) /*0x6ba641*/
              *v14 = *v13; /*0x6ba643*/
            ++v13; /*0x6ba646*/
            ++v14; /*0x6ba649*/
            --v12; /*0x6ba64c*/
          }
          while ( v12 ); /*0x6ba64d*/
          v10 = v16; /*0x6ba64f*/
        }
        v11 = (_WORD *)((char *)v11 + v17); /*0x6ba657*/
        --v8; /*0x6ba659*/
      }
      while (v8, unsigned int a3); /*0x6ba65a*/
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)aP1 + 96))(aP1); /*0x6ba662*/
    (*(void (__thiscall **)(int))(*(_DWORD *)a3 + 96))(a3); /*0x6ba66b*/
    return 1; /*0x6ba671*/
  }
  else
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)aP1 + 96))(aP1); /*0x6ba5c5*/
    return 0; /*0x6ba5ca*/
  }
}
// 0x6BA690
int Surface::AlphaBlend(unsigned int * a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8; // eax
  int v9; // esi
  int v10; // ebx
  int v11; // ecx
  int v12; // ebp
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  int v17; // ecx
  int v19; // edi
  char v20; // dl
  _WORD *v21; // esi
  int v22; // eax
  int v23; // edi
  int v24; // ebx
  int v25; // ebp
  unsigned int v26; // eax
  int v27; // edx
  int v28; // eax
  _BYTE *v29; // esi
  _WORD *v30; // edi
  int v31; // ecx
  _WORD *v32; // ecx
  __int16 v33; // cx
  __int16 v34; // ax
  unsigned int v35; // ebp
  unsigned int v36; // esi
  unsigned int v37; // edx
  bool v38; // zf
  _BYTE *v39; // eax
  int v40; // esi
  _WORD *v41; // edx
  __int16 v42; // dx
  __int16 v43; // cx
  int v44; // esi
  __int16 v45; // bp
  unsigned int v46; // ebx
  int v47; // edx
  unsigned int v48; // ecx
  __int16 v49; // bp
  bool v50; // cc
  int v51; // [esp+1Ch] [ebp-278h]
  __int16 *v52; // [esp+1Ch] [ebp-278h]
  int v53; // [esp+20h] [ebp-274h]
  _BYTE *v54; // [esp+20h] [ebp-274h]
  int v55; // [esp+24h] [ebp-270h]
  int v56; // [esp+28h] [ebp-26Ch]
  int v57; // [esp+2Ch] [ebp-268h]
  _WORD *v58; // [esp+30h] [ebp-264h]
  int v59; // [esp+30h] [ebp-264h]
  int v60; // [esp+34h] [ebp-260h]
  _WORD *v61; // [esp+34h] [ebp-260h]
  _BYTE *v62; // [esp+38h] [ebp-25Ch]
  _BYTE *v63; // [esp+38h] [ebp-25Ch]
  int v64; // [esp+40h] [ebp-254h]
  int v65; // [esp+44h] [ebp-250h]
  int v66; // [esp+48h] [ebp-24Ch]
  int v67; // [esp+4Ch] [ebp-248h]
  int v68; // [esp+50h] [ebp-244h]
  unsigned int v69; // [esp+54h] [ebp-240h]
  int v70; // [esp+58h] [ebp-23Ch]
  _WORD *v71; // [esp+5Ch] [ebp-238h]
  int v72; // [esp+60h] [ebp-234h]
  int v73; // [esp+64h] [ebp-230h]
  int v74; // [esp+7Ch] [ebp-218h]
  int v75; // [esp+80h] [ebp-214h]
  char v76[16]; // [esp+84h] [ebp-210h] BYREF
  _WORD v77[256]; // [esp+94h] [ebp-200h] BYREF

  v8 = (*(int (__thiscall **)(int, char *))(*(_DWORD *)a3 + 120))(a3, v76); /*0x6ba6a8*/
  v9 = 0; /*0x6ba6b8*/
  v10 = 0; /*0x6ba6bd*/
  v56 = 0; /*0x6ba6c3*/
  v11 = *(_DWORD *)(v8 + 8); /*0x6ba6c7*/
  v57 = 0; /*0x6ba6ca*/
  v74 = v11; /*0x6ba6ce*/
  v55 = 0; /*0x6ba6d2*/
  v12 = *(_DWORD *)(v8 + 12); /*0x6ba6d6*/
  v75 = v12; /*0x6ba6e0*/
  v51 = 0; /*0x6ba6e4*/
  v13 = a1[2]; /*0x6ba6e8*/
  v66 = 0; /*0x6ba6eb*/
  v68 = 0; /*0x6ba6f1*/
  if ( v11 <= v13 ) /*0x6ba6f5*/
  {
    if ( a6 ) /*0x6ba722*/
      v66 = (v13 - v11) / 2; /*0x6ba72b*/
  }
  else if ( a6 ) /*0x6ba6f9*/
  {
    v14 = v11 - v13; /*0x6ba6fb*/
    v10 = (v14 + 1) / 2; /*0x6ba70a*/
    v56 = v10; /*0x6ba70e*/
    v55 = v14 / 2; /*0x6ba712*/
  }
  else
  {
    v55 = v11 - v13; /*0x6ba71a*/
  }
  v15 = a1[3]; /*0x6ba736*/
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
    v16 = v10 - a7 + v55; /*0x6ba78a*/
    v10 = a7; /*0x6ba78c*/
    v55 = v16; /*0x6ba78e*/
    v56 = a7; /*0x6ba792*/
  }
  if ( a8 > v57 ) /*0x6ba7a3*/
  {
    v17 = v57 - a8; /*0x6ba7a5*/
    v57 = a8; /*0x6ba7a7*/
    v9 += v17; /*0x6ba7ab*/
    v51 = v9; /*0x6ba7ad*/
  }
  v70 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a2 + 92))(a2, 0, 0); /*0x6ba7c7*/
  if ( !v70 ) /*0x6ba7cd*/
    return 0; /*0x6ba7db*/
  v19 = 0; /*0x6ba7e5*/
  v53 = 0; /*0x6ba7e9*/
  v64 = 0; /*0x6ba7ed*/
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
  v65 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a4 + 92))(a4, 0, 0); /*0x6ba87d*/
  if ( a5 ) /*0x6ba88a*/
  {
    v20 = g_BitShift_Green_0; /*0x6ba88c*/
    v21 = v77; /*0x6ba892*/
    v22 = a5 + 1; /*0x6ba899*/
    v23 = 256; /*0x6ba89a*/
    do /*0x6ba8ef*/
    {
      IDA_LOBYTE(v10) = *(_BYTE *)(v22 + 1) >> g_BitMask_Red; /*0x6ba8a8*/
      v22 += 3; /*0x6ba8b0*/
      ++v21; /*0x6ba8b3*/
      IDA_LOWORD(v12) = (unsigned __int8)v10; /*0x6ba8b6*/
      IDA_LOWORD(v10) = (unsigned __int8)(*(_BYTE *)(v22 - 4) >> v20); /*0x6ba8c9*/
      v24 = v10 << g_BitShift_Red; /*0x6ba8cd*/
      v25 = v24 | (v12 << g_BitShift_Blue); /*0x6ba8d5*/
      IDA_LOWORD(v24) = (unsigned __int8)(*(_BYTE *)(v22 - 3) >> g_BitMask_Blue); /*0x6ba8e2*/
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
  v72 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 116))(a2) / 2; /*0x6ba91b*/
  v26 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 116))(a3); /*0x6ba91f*/
  v69 = v26; /*0x6ba929*/
  if ( !a5 ) /*0x6ba92f*/
  {
    v26 >>= 1; /*0x6ba931*/
    v69 = v26; /*0x6ba933*/
  }
  v27 = v57; /*0x6ba937*/
  v67 = v57; /*0x6ba93f*/
  v73 = v12 - v9; /*0x6ba943*/
  if ( v57 < v12 - v9 ) /*0x6ba947*/
  {
    v28 = v57 * v26; /*0x6ba94d*/
    v29 = (_BYTE *)(v10 + v28 + v65); /*0x6ba957*/
    v54 = v29; /*0x6ba95b*/
    v30 = (_WORD *)(v19 + 2 * (v10 + v28)); /*0x6ba95f*/
    v71 = v30; /*0x6ba962*/
    do /*0x6ba992*/
    {
      v31 = v66 + *a1 + v72 * (v68 + v27 + a1[1] - v57); /*0x6ba992*/
      if ( a5 ) /*0x6ba996*/
      {
        if ( v10 < v74 - v55 ) /*0x6baabe*/
        {
          v39 = v29; /*0x6baacc*/
          v40 = v64 - v65; /*0x6baad2*/
          v41 = (_WORD *)(v70 + 2 * v31); /*0x6baad4*/
          v63 = v39; /*0x6baad9*/
          v61 = v41; /*0x6baadd*/
          v59 = v74 - v55 - v10; /*0x6baae5*/
          do /*0x6babc8*/
          {
            if ( *v39 ) /*0x6baae9*/
            {
              v42 = *v41; /*0x6bab21*/
              v43 = v77[(unsigned __int8)v39[v40]]; /*0x6bab27*/
              v44 = 255 - (unsigned __int8)*v39; /*0x6bab48*/
              v45 = g_ScreenSaverState /*0x6bab5d*/
                  & ((v44 * (unsigned __int16)(g_ScreenSaverState & v42)
                    + (unsigned __int8)*v39 * (unsigned int)(unsigned __int16)(g_ScreenSaverState & v43)) >> 8);
              g_GameScreenFlags = (unsigned __int8)*v39; /*0x6bab64*/
              g_GameScreenConfig = 255 - g_GameScreenFlags; /*0x6bab6e*/
              v46 = v44 * (unsigned __int16)(IDA_HIWORD(g_ScreenSaverState) & v42) /*0x6bab79*/
                  + g_GameScreenFlags * (unsigned __int16)(IDA_HIWORD(g_ScreenSaverState) & v43);
              v47 = v44 * (unsigned __int16)(g_CreditsScreenState & v42); /*0x6bab8a*/
              v39 = v63; /*0x6bab97*/
              v40 = v64 - v65; /*0x6bab9b*/
              v48 = v47 + g_GameScreenFlags * (unsigned __int16)(g_CreditsScreenState & v43); /*0x6bab9f*/
              v41 = v61; /*0x6baba1*/
              v49 = IDA_HIWORD(g_ScreenSaverState) & (v46 >> 8) | v45; /*0x6baba5*/
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
        v62 = v29; /*0x6ba9b4*/
        v52 = v30; /*0x6ba9b8*/
        v32 = (_WORD *)(v70 + 2 * v31); /*0x6ba9bc*/
        v60 = v74 - v55 - v10; /*0x6ba9bf*/
        v58 = v32; /*0x6ba9c3*/
        do /*0x6baaa7*/
        {
          if ( *v29 ) /*0x6ba9c7*/
          {
            v33 = *v32; /*0x6ba9d1*/
            v34 = *v52; /*0x6ba9f4*/
            g_GameScreenFlags = (unsigned __int8)*v29; /*0x6baa06*/
            g_GameScreenConfig = 255 - g_GameScreenFlags; /*0x6baa45*/
            v35 = ((255 - g_GameScreenFlags) * (unsigned __int16)(v33 & g_ScreenSaverState) /*0x6baa4b*/
                 + g_GameScreenFlags * (unsigned int)(unsigned __int16)(v34 & g_ScreenSaverState)) >> 8;
            v36 = ((255 - g_GameScreenFlags) * (unsigned __int16)(v33 & IDA_HIWORD(g_ScreenSaverState)) /*0x6baa57*/
                 + g_GameScreenFlags * (unsigned int)(unsigned __int16)(IDA_HIWORD(g_ScreenSaverState) & v34)) >> 8;
            v10 = v56; /*0x6baa6e*/
            v37 = (255 - g_GameScreenFlags) * (unsigned __int16)(v33 & g_CreditsScreenState) /*0x6baa75*/
                + g_GameScreenFlags * (unsigned __int16)(v34 & g_CreditsScreenState);
            v32 = v58; /*0x6baa77*/
            *v58 = (v37 >> 8) | IDA_HIWORD(g_ScreenSaverState) & v36 | g_ScreenSaverState & v35; /*0x6baa80*/
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
// 0x707480
TechnoClass * * Surface::BlitTechnoTo(short * a1, TechnoClass * aP2, TechnoClass * aP3, TechnoClass * aP4, AbstractClass * aP5, TechnoClass * aP6)
{
  unsigned __int16 v8; // bp
  unsigned __int16 v9; // bx
  int v11; // edx
  unsigned int v12; // ebx
  int v13; // ebx
  int v14; // eax
  int v15; // edx
  int v16; // ebp
  int v17; // ecx
  int v18; // ebx
  int v19; // ebp
  int v20; // ecx
  int v21; // ebp
  unsigned __int16 v22; // ax
  int v23; // eax
  int v24; // eax
  int v25; // [esp-1Ch] [ebp-7Ch]
  int v26; // [esp+10h] [ebp-50h] BYREF
  int v27; // [esp+14h] [ebp-4Ch]
  int v28; // [esp+18h] [ebp-48h]
  int v29; // [esp+1Ch] [ebp-44h]
  int v30; // [esp+20h] [ebp-40h] BYREF
  int v31; // [esp+24h] [ebp-3Ch]
  int v33; // [esp+2Ch] [ebp-34h]
  int v34[4]; // [esp+30h] [ebp-30h] BYREF
  int (__thiscall **v35)(void *, char); // [esp+40h] [ebp-20h] BYREF
  int v36; // [esp+44h] [ebp-1Ch]
  int v37; // [esp+48h] [ebp-18h]
  int v38; // [esp+4Ch] [ebp-14h]
  int v39; // [esp+50h] [ebp-10h]
  _DWORD v40[3]; // [esp+54h] [ebp-Ch] BYREF
  int v41; // [esp+64h] [ebp+4h]
  int v42; // [esp+64h] [ebp+4h]
  int *v43; // [esp+70h] [ebp+10h]

  v8 = a1[3]; /*0x70748e*/
  v9 = a1[2]; /*0x707492*/
  v41 = *((_DWORD *)a1 + 2); /*0x7074a2*/
  Surface::Construct(&v35, v9, v8); /*0x7074a6*/
  v38 = 0; /*0x7074b8*/
  v35 = &XSurface_Vtable; /*0x7074c0*/
  v39 = 1; /*0x7074c8*/
  Buffer::Init(v40, v41, v8 * v9); /*0x7074d0*/
  v11 = *(_DWORD *)this; /*0x7074d9*/
  v35 = &BSurface_Vtable; /*0x7074dd*/
  v12 = aP4 & 0xFFFFFFEF; /*0x7074e5*/
  if ( (*(int (__thiscall **)(_BYTE *))(v11 + 44))(this) != 1 || !*(&this->lastTarget7) ) /*0x7074f0*/
    (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)&this->missionStartTime4))(this); /*0x707505*/
  v43 = (int *)LightConvertClass::SelectRLEBlitter(v12); /*0x707516*/
  v42 = 0; /*0x70751a*/
  if ( (v12 & 8) != 0 ) /*0x707522*/
  {
    v13 = (*(int (__stdcall **)(_BYTE *))(this->vtable2 + 16))(this + 4); /*0x707534*/
    v42 = (int)(v13 + Math::RoundToInt(this->q24C)) % 400; /*0x707545*/
  }
  if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)&this->uniqueId4))(this) == 1 ) /*0x707557*/
  {
    v14 = *aP2 + *a1; /*0x70756b*/
    v15 = aP2[1] + a1[1]; /*0x707571*/
    v16 = (unsigned __int16)a1[3]; /*0x707575*/
    v17 = (unsigned __int16)a1[2]; /*0x70757b*/
    v31 = v15; /*0x70757f*/
    v33 = (unsigned __int16)v16; /*0x707585*/
    if ( v17 > 0 && v16 > 0 ) /*0x707597*/
    {
      if ( v17 <= 0 || v16 <= 0 ) /*0x7075a7*/
      {
        v14 = v14; /*0x70764e*/
        v15 = v15; /*0x707653*/
        v17 = v17; /*0x707659*/
        v16 = v16; /*0x70765f*/
      }
      else
      {
        v18 = v14; /*0x7075b3*/
        v27 = v15; /*0x7075b9*/
        v28 = v17; /*0x7075c3*/
        v26 = v14; /*0x7075cf*/
        v29 = v16; /*0x7075d3*/
        if ( v14 > v14 ) /*0x7075d7*/
        {
          v18 = v14; /*0x7075e1*/
          v28 += v14 - v14; /*0x7075e3*/
          v26 = v14; /*0x7075e7*/
        }
        if ( v27 > v15 ) /*0x7075f1*/
        {
          v19 = v27 - v15; /*0x7075f7*/
          v27 = v15; /*0x7075fb*/
          v29 += v19; /*0x7075ff*/
          v18 = v26; /*0x707603*/
        }
        if ( v18 + v28 < v17 + v14 ) /*0x707612*/
          v28 = v17 - v18 + v14 + 1; /*0x70761a*/
        v16 = v29; /*0x707626*/
        v15 = v27; /*0x70762d*/
        if ( v27 + v29 < v33 + v31 ) /*0x707636*/
          v16 = v31 + v33 - v27 + 1; /*0x707642*/
        v17 = v28; /*0x707646*/
        v14 = v18; /*0x70764a*/
      }
    }
    v14 = v14; /*0x707661*/
    v15 = v15; /*0x707666*/
    v17 = v17; /*0x70766c*/
    v16 = v16; /*0x707672*/
  }
  if ( v43 ) /*0x70767e*/
  {
    v36 = v36; /*0x70768c*/
    v28 = v36; /*0x707690*/
    v33 = v37; /*0x70769a*/
    v29 = v37; /*0x70769e*/
    v20 = *a1; /*0x7076a2*/
    v30 = 0; /*0x7076a5*/
    v31 = 0; /*0x7076a9*/
    v26 = 0; /*0x7076ad*/
    v27 = 0; /*0x7076b1*/
    v21 = aP2[1]; /*0x7076bb*/
    v34[0] = *aP2 + v20; /*0x7076be*/
    v22 = a1[2]; /*0x7076c8*/
    v34[1] = v21 + a1[1]; /*0x7076ce*/
    v34[2] = v22; /*0x7076d2*/
    v23 = *(_DWORD *)this; /*0x7076e3*/
    v34[3] = (unsigned __int16)a1[3]; /*0x7076e5*/
    v25 = (*(int (__thiscall **)(_BYTE *))(v23 + 752))(this); /*0x707703*/
    v24 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)&this->q1288))(this); /*0x707706*/
    BlitterRLEBlitSHP(g_DSurface_Hidden_2, aP3, v34, (int)&v35, &v26, &v30, v43, v24, v25, aP5, v42, 0, 0, 0, aP6); /*0x707736*/
  }
  Vector::Clear((int)v40); /*0x70773f*/
}
// 0x7602E0
void Surface::RenderToSurfaceVoxel(unsigned int * a2, int * a3)
{
  int *v4; // edi
  int v5; // eax
  int v6; // ebp
  int v7; // ecx
  int v8; // ebx
  int v9; // ebp
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // eax
  _WORD *v14; // edi
  int v15; // edx
  _DWORD *v16; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  unsigned __int16 *v20; // ebx
  _WORD *v21; // edi
  __int64 v22; // rax
  int v24; // eax
  int m; // ebp
  int v26; // eax
  int v27; // ebx
  int v28; // eax
  _DWORD *v29; // eax
  int v30; // ecx
  int v31; // eax
  int v32; // edi
  int v33; // ecx
  int v34; // ebx
  int v35; // eax
  int v36; // ecx
  _WORD *v37; // edi
  unsigned int v38; // ecx
  int v39; // eax
  int v40; // ebp
  _WORD *v41; // edi
  unsigned __int16 *v42; // ecx
  __int64 v43; // rax
  int j; // ebx
  int v45; // ebp
  int v46; // eax
  int v47; // ecx
  int v48; // edx
  _DWORD *v49; // eax
  int v50; // ebx
  int v51; // ebp
  int i; // edi
  int k; // [esp+8h] [ebp-3Ch]
  int v54; // [esp+8h] [ebp-3Ch]
  int v55; // [esp+8h] [ebp-3Ch]
  int v56; // [esp+8h] [ebp-3Ch]
  int v57; // [esp+Ch] [ebp-38h]
  int v58; // [esp+10h] [ebp-34h]
  int v59; // [esp+10h] [ebp-34h]
  int v60; // [esp+10h] [ebp-34h]
  int v63; // [esp+14h] [ebp-30h]
  int v64; // [esp+18h] [ebp-2Ch]
  _WORD *v65; // [esp+18h] [ebp-2Ch]
  unsigned int SamplePosition; // [esp+18h] [ebp-2Ch]
  unsigned __int16 *v67; // [esp+18h] [ebp-2Ch]
  _WORD *v68; // [esp+18h] [ebp-2Ch]
  int v69; // [esp+1Ch] [ebp-28h]
  int v70; // [esp+20h] [ebp-24h]
  int v71; // [esp+20h] [ebp-24h]
  int v72; // [esp+20h] [ebp-24h]
  int v73; // [esp+20h] [ebp-24h]
  int v74; // [esp+24h] [ebp-20h]
  int v75; // [esp+24h] [ebp-20h]
  int v77; // [esp+2Ch] [ebp-18h]
  int v78; // [esp+30h] [ebp-14h]
  int v79; // [esp+34h] [ebp-10h]
  int v81; // [esp+38h] [ebp-Ch]
  int v83; // [esp+3Ch] [ebp-8h]
  int v85; // [esp+40h] [ebp-4h]
  unsigned __int16 v86; // [esp+48h] [ebp+4h]
  unsigned __int16 v87; // [esp+48h] [ebp+4h]
  int v88; // [esp+48h] [ebp+4h]
  _DWORD *v90; // [esp+4Ch] [ebp+8h]

  v58 = ZCoordToScreenY(this->WaveClass_field_168); /*0x7602f8*/
  v74 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)g_DSurface_Hidden_2 + 92))(g_DSurface_Hidden_2, 0, 0); /*0x760309*/
  if ( v74 ) /*0x76030d*/
  {
    v4 = a3; /*0x760313*/
    v5 = a3[1]; /*0x760319*/
    v78 = v5 + a3[3] - 3; /*0x760329*/
    v77 = v5 + 3; /*0x76032f*/
    v79 = *a3 + 3; /*0x760340*/
    v69 = *a3 + a3[2] - 3; /*0x760348*/
    v6 = a2[1] - this->WaveClass_field_17C; /*0x760359*/
    v57 = *a2 - this->WaveClass_field_178; /*0x760367*/
    v6 = v6; /*0x76036b*/
    ProcessVoxelVertexData((_DWORD *)(&this->WaveClass_field_12C8), (int *)(&this->WaveClass_field_1506)); /*0x76036f*/
    if ( this->q1A8 ) /*0x760374*/
    {
      v7 = this->q1A0; /*0x760398*/
      v8 = v6 + g_Map_VisibleRect + this->q1A4; /*0x76039e*/
      v8 = v8; /*0x7603a0*/
      v9 = v7 + v8 - 1; /*0x7603a4*/
      if ( v9 >= a3[3] + a3[1] ) /*0x7603aa*/
      {
        v64 = a3[3] + a3[1]; /*0x7603b2*/
        v9 = v64; /*0x7603b6*/
      }
      else
      {
        v64 = v7 + v8 - 1; /*0x7603ac*/
      }
      Voxel::loadSectionData(); /*0x7603ba*/
      v10 = this->q1CC; /*0x7603bf*/
      if ( v10 <= 1 || v10 >= 6 ) /*0x7603d1*/
      {
        SamplePosition = Audio::GetSamplePosition((int)g_ZBufferDescriptor, 0, v8 - g_Map_VisibleRect); /*0x7606be*/
        v35 = (*(int (__thiscall **)(int))(*(_DWORD *)g_DSurface_Hidden_2 + 124))(g_DSurface_Hidden_2); /*0x7606c4*/
        IDA_HIWORD(v36) = IDA_HIWORD(g_ZBufferDescriptor); /*0x7606c7*/
        v81 = v9 - v8; /*0x7606d8*/
        v72 = *((_DWORD *)g_ZBufferDescriptor + 10); /*0x7606e0*/
        if ( SamplePosition + 2 * (v35 + v72 * (v9 - v8 + 1)) >= *((_DWORD *)g_ZBufferDescriptor + 7) ) /*0x7606f6*/
        {
          IDA_LOWORD(v36) = *((_WORD *)g_ZBufferDescriptor + 18) - v9; /*0x76085b*/
          v46 = v9; /*0x76085e*/
          v56 = v9; /*0x760862*/
          v47 = v36 - v58 - 2; /*0x760866*/
          v88 = v47; /*0x76086b*/
          if ( v9 >= v8 ) /*0x76086f*/
          {
            v73 = 8 * v81; /*0x76087c*/
            do /*0x760999*/
            {
              v48 = v4[1]; /*0x760880*/
              if ( v46 >= v48 + 2 && v46 <= v48 + v4[3] - 2 ) /*0x760897*/
              {
                v49 = (_DWORD *)(this->q1A8 + v73); /*0x7608b0*/
                v50 = v49[1] + v57; /*0x7608ba*/
                if ( v50 >= *v4 + v4[2] - 2 ) /*0x7608be*/
                  v50 = *v4 + v4[2] - 2; /*0x7608c0*/
                v60 = v57 + *v49; /*0x7608cf*/
                if ( v60 <= *v4 + 2 ) /*0x7608d3*/
                  v60 = *v4 + 2; /*0x7608d5*/
                v68 = (_WORD *)(v74 /*0x760904*/
                              + 2
                              * (v50
                               + v56
                               * ((*(int (__thiscall **)(int))(*(_DWORD *)g_DSurface_Hidden_2 + 116))(g_DSurface_Hidden_2) >> 1)));
                v51 = v56 - g_Map_VisibleRect; /*0x760910*/
                v50 = v50; /*0x760914*/
                for ( i = abs32(v56 - v6 - this->WaveClass_field_17C); v50 >= v60; --v68 ) /*0x760925*/
                {
                  if ( *(_WORD *)Audio::GetSamplePosition((int)g_ZBufferDescriptor, v50, v51) > (unsigned __int16)v88 ) /*0x760940*/
                    Voxel::BlendColor(v50, v57, i, v68); /*0x760950*/
                  --v50; /*0x76095e*/
                  --v50; /*0x76095f*/
                }
                v47 = v88; /*0x760972*/
                v8 = v8; /*0x760976*/
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
          v83 = (*(int (__thiscall **)(int))(*(_DWORD *)g_DSurface_Hidden_2 + 116))(g_DSurface_Hidden_2) >> 1; /*0x760709*/
          v37 = (_WORD *)(v74 + 2 * v9 * v83); /*0x76071a*/
          v90 = (_DWORD *)(this->q1A8 + 8 * v81); /*0x760728*/
          v87 = *((_WORD *)g_ZBufferDescriptor + 18) - v9 - v58 - 2; /*0x760740*/
          v38 = Audio::GetSamplePosition((int)g_ZBufferDescriptor, 0, v9 - g_Map_VisibleRect); /*0x760753*/
          v39 = v9; /*0x760755*/
          v55 = v9; /*0x760759*/
          if ( v9 >= v8 ) /*0x76075d*/
          {
            while ( 1 ) /*0x760769*/
            {
              if ( v39 >= v77 && v39 <= v78 ) /*0x760777*/
              {
                v40 = v57 + v90[1]; /*0x760790*/
                if ( v40 >= v69 ) /*0x760792*/
                  v40 = v69; /*0x760794*/
                v59 = v57 + *v90; /*0x7607a6*/
                if ( v59 <= v79 ) /*0x7607aa*/
                  v59 = v79; /*0x7607ac*/
                v41 = &v37[v40]; /*0x7607b8*/
                v42 = (unsigned __int16 *)(2 * v40 + v38); /*0x7607ba*/
                v67 = v42; /*0x7607c6*/
                v43 = v39 - v6 - this->WaveClass_field_17C; /*0x7607ca*/
                for ( j = (IDA_HIDWORD(v43) ^ v43) - IDA_HIDWORD(v43); v40 >= v59; v67 = v42 ) /*0x7607d7*/
                {
                  if ( *v42 > v87 ) /*0x7607e1*/
                  {
                    Voxel::BlendColor(v40, v57, j, v41); /*0x7607ed*/
                    v42 = v67; /*0x7607f2*/
                  }
                  --v42; /*0x7607fa*/
                  --v41; /*0x7607fd*/
                  --v40; /*0x760800*/
                }
                v8 = v8; /*0x760809*/
                v39 = v55; /*0x76080d*/
                v45 = 2 * v40; /*0x760811*/
                v38 = (unsigned int)&v42[v45 / 0xFFFFFFFE]; /*0x760813*/
                v37 = &v41[v45 / 0xFFFFFFFE]; /*0x760815*/
              }
              --v39; /*0x760836*/
              v37 -= v83; /*0x760839*/
              ++v87; /*0x76083c*/
              v90 -= 2; /*0x760840*/
              v55 = v39; /*0x760844*/
              if ( v39 < v8 ) /*0x760848*/
                break; /*0x760848*/
              v38 -= 2 * v72; /*0x760765*/
            }
          }
        }
      }
      else
      {
        v86 = *((_WORD *)g_ZBufferDescriptor + 18) - v58 - v8 - 2; /*0x7603f4*/
        v11 = Audio::GetSamplePosition((int)g_ZBufferDescriptor, 0, v8 - g_Map_VisibleRect); /*0x760406*/
        v12 = (*(int (__thiscall **)(int))(*(_DWORD *)g_DSurface_Hidden_2 + 124))(g_DSurface_Hidden_2); /*0x76040a*/
        v70 = *((_DWORD *)g_ZBufferDescriptor + 10); /*0x760418*/
        if ( v11 + 2 * (v12 + v70 * (v9 - v8 + 1)) >= *((_DWORD *)g_ZBufferDescriptor + 7) ) /*0x760437*/
        {
          v27 = v8; /*0x760557*/
          v54 = v8; /*0x76055d*/
          if ( v8 <= v9 ) /*0x760561*/
          {
            v71 = 0; /*0x760567*/
            do /*0x760694*/
            {
              v28 = v4[1]; /*0x76056f*/
              if ( v27 >= v28 + 2 && v27 <= v28 + v4[3] - 2 ) /*0x760586*/
              {
                v29 = (_DWORD *)(this->q1A8 + v71); /*0x760599*/
                v30 = *v4; /*0x76059b*/
                v63 = v57 + v29[1]; /*0x7605b4*/
                if ( v63 >= *v4 + v4[2] - 2 ) /*0x7605b8*/
                  v63 = *v4 + v4[2] - 2; /*0x7605ba*/
                v31 = v57 + *v29; /*0x7605c4*/
                v32 = v30 + 2; /*0x7605c6*/
                if ( v31 > v30 + 2 ) /*0x7605cb*/
                  v32 = v31; /*0x7605cd*/
                v32 = v32; /*0x7605e5*/
                v65 = (_WORD *)(v74 /*0x7605f3*/
                              + 2
                              * (v32
                               + v27
                               * ((*(int (__thiscall **)(int))(*(_DWORD *)g_DSurface_Hidden_2 + 116))(g_DSurface_Hidden_2) >> 1)));
                v33 = v27 - g_Map_VisibleRect; /*0x7605fd*/
                v85 = v27 - g_Map_VisibleRect; /*0x760607*/
                v34 = abs32(v27 - v6 - this->WaveClass_field_17C); /*0x760616*/
                if ( v32 <= v63 ) /*0x76061a*/
                {
                  while ( 1 ) /*0x760622*/
                  {
                    if ( *(_WORD *)Audio::GetSamplePosition((int)g_ZBufferDescriptor, v32, v33) > v86 ) /*0x76063b*/
                      Voxel::BlendColor(v32, v57, v34, v65); /*0x76064b*/
                    ++v32; /*0x760659*/
                    ++v32; /*0x76065a*/
                    ++v65; /*0x760667*/
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
          v13 = (*(int (__thiscall **)(int))(*(_DWORD *)g_DSurface_Hidden_2 + 116))(g_DSurface_Hidden_2) >> 1; /*0x760448*/
          v13 = v13; /*0x760455*/
          v14 = (_WORD *)(v74 + 2 * v8 * v13); /*0x760459*/
          v15 = v8; /*0x76045c*/
          v16 = *(_DWORD **)(&this->WaveClass_field_1544); /*0x760460*/
          v16 = v16; /*0x760468*/
          for ( k = v8; v15 <= v9; k = v15 ) /*0x760470*/
          {
            if ( v15 >= v77 && v15 <= v78 ) /*0x760484*/
            {
              v17 = v57 + v16[1]; /*0x760491*/
              if ( v17 >= v69 ) /*0x760497*/
                v17 = v69; /*0x760499*/
              v17 = v17; /*0x76049f*/
              v18 = *v16 + v57; /*0x7604a3*/
              v19 = v79; /*0x7604a6*/
              if ( v18 > v79 ) /*0x7604ac*/
                v19 = v18; /*0x7604ae*/
              v20 = (unsigned __int16 *)(2 * v19 + v11); /*0x7604b7*/
              v21 = &v14[v19]; /*0x7604b9*/
              v22 = v15 - v6 - this->WaveClass_field_17C; /*0x7604cb*/
              v22 = v22; /*0x7604cc*/
              v24 = v19; /*0x7604ce*/
              v75 = v19; /*0x7604d2*/
              for ( m = (IDA_HIDWORD(v22) ^ v22) - IDA_HIDWORD(v22); v24 <= v17; v75 = v24 ) /*0x7604de*/
              {
                if ( *v20 > v86 ) /*0x7604e8*/
                {
                  Voxel::BlendColor(v24, v57, m, v21); /*0x7604f4*/
                  v24 = v75; /*0x7604f9*/
                }
                ++v20; /*0x760501*/
                ++v21; /*0x760504*/
                ++v24; /*0x760507*/
              }
              v9 = v64; /*0x760510*/
              v15 = k; /*0x760514*/
              v26 = 2 * v24; /*0x760518*/
              v11 = (unsigned int)&v20[v26 / 0xFFFFFFFE]; /*0x76051a*/
              v14 = &v21[v26 / 0xFFFFFFFE]; /*0x76051c*/
              v13 = v13; /*0x76051e*/
            }
            v14 += v13; /*0x760526*/
            v11 += 2 * v70; /*0x760529*/
            --v86; /*0x760536*/
            v16 = v16 + 2; /*0x76053e*/
            ++v15; /*0x760541*/
            v16 += 2; /*0x760544*/
          }
        }
      }
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)g_DSurface_Hidden_2 + 96))(g_DSurface_Hidden_2); /*0x7609a7*/
    if ( this->q1A8 ) /*0x7609aa*/
    {
      RA2_OPDEL(*(void **)(&this->WaveClass_field_1544)); /*0x7609b7*/
      this->q1A8 = 0; /*0x7609bf*/
    }
  }
}
// 0x769330
int Surface::PixelToIndex(unsigned int * a2)
{
  int v3; // eax
  int v4; // ecx
  int v6; // [esp+4h] [ebp-8h] BYREF
  int v7; // [esp+8h] [ebp-4h]

  v3 = *a2 - this->WaveClass_field_F0; /*0x769342*/
  v4 = a2[1] - this->WaveClass_field_F4; /*0x769347*/
  v6 = v3; /*0x769349*/
  v7 = v4; /*0x76934f*/
  if ( v3 < 0 /*0x76937a*/
    || v6 >= (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 36) + 124))(*(_DWORD *)(this + 36))
    || v7 < 0
    || v7 >= (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 36) + 128))(*(_DWORD *)(this + 36)) )
  {
    return -1; /*0x769390*/
  }
  else
  {
    return (*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)(this + 36) + 40))(*(_DWORD *)(this + 36), &v6); /*0x769386*/
  }
}
// 0x7BD690
int Surface::CommitSurfaceBuffersAudio()
{
  int v3; // eax
  char v4; // cl
  unsigned int v5; // eax
  unsigned int v6; // ecx
  int v7; // edi
  int v8; // eax
  int v9; // eax
  _WORD *v10; // ebp
  int v11; // ebx
  int v12; // ecx
  unsigned __int16 *v13; // edi
  int v14; // ecx
  unsigned __int16 *v15; // edi
  int v16; // edx
  int v17; // ecx
  _WORD *v18; // eax
  int v19; // ecx
  _WORD *v20; // eax
  _DWORD *v21; // ebx
  int v22; // eax
  int v23; // eax
  _DWORD *v24; // ebp
  int v25; // eax
  int v26; // ebx
  _DWORD *v27; // ebx
  unsigned int v28; // ecx
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

  if ( !this->q088 ) /*0x7bd699*/
    return -8; /*0x7bd6af*/
  v3 = *(unsigned __int8 *)(&this->u32_603) * *(unsigned __int8 *)(&this->u32_602) * *(unsigned __int16 *)(&this->u32_608) + 4; /*0x7bd6cf*/
  IDA_LOBYTE(v3) = v3 & 0xFC; /*0x7bd6d2*/
  this->q774 = v3; /*0x7bd6d4*/
  v4 = this->q108; /*0x7bd6da*/
  if ( v4 == 1 || v4 == 4 ) /*0x7bd6e8*/
    this->q774 = 2 * v3; /*0x7bd6ec*/
  v5 = this->u32_10A; /*0x7bd6f2*/
  v6 = this->q774; /*0x7bd6f8*/
  if ( v5 > v6 ) /*0x7bd700*/
    return -3; /*0x7bd70e*/
  if ( !v5 ) /*0x7bd711*/
    this->u32_10A = v6; /*0x7bd713*/
  if ( this->u32_8C > 0 ) /*0x7bd721*/
    goto LABEL_57; /*0x7bd721*/
  if ( this->u16_74C ) /*0x7bd727*/
    v7 = *(unsigned __int16 *)(&this->u32_2EC0); /*0x7bd735*/
  else
    v7 = *(unsigned __int8 *)(&this->u32_605); /*0x7bd746*/
  if ( v7 != this->u32_10 ) /*0x7bd74b*/
  {
    v8 = this->q088; /*0x7bd75c*/
    v52 = 0; /*0x7bd762*/
    if ( v8 <= 1 ) /*0x7bd76d*/
      goto LABEL_56; /*0x7bd76d*/
    v52 = (v8 - 2) / v7 + 1; /*0x7bd77a*/
    if ( (this->q084 & 0x20) == 0 ) /*0x7bd786*/
      goto LABEL_56; /*0x7bd786*/
    if ( !this->u16_714 ) /*0x7bd78c*/
    {
      v9 = (v8 - 2) / v7 + 3; /*0x7bd79c*/
      goto LABEL_55; /*0x7bd79f*/
    }
    v10 = *(_WORD **)(&this->u32_2D80); /*0x7bd7a4*/
    v11 = *(unsigned __int8 *)(&this->u32_605); /*0x7bd7ac*/
    v55 = *(unsigned __int16 *)(&this->u32_2D42); /*0x7bd7bb*/
    if ( this->u32_F5 ) /*0x7bd7ac*/
    {
      v12 = 0; /*0x7bd7c1*/
      v53 = 0; /*0x7bd7c5*/
      v54 = 0; /*0x7bd7c9*/
      if ( this->u16_714 ) /*0x7bd7b4*/
      {
        v13 = *(unsigned __int16 **)(&this->u32_2D80); /*0x7bd7cf*/
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
      v14 = 0; /*0x7bd7f3*/
      if ( this->u16_714 ) /*0x7bd7b4*/
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
      v16 = *(unsigned __int16 *)(&this->u32_2E88); /*0x7bd84b*/
      v58 = 0; /*0x7bd84d*/
      if ( this->u16_714 ) /*0x7bd7b4*/
      {
        while ( 1 ) /*0x7bd85b*/
        {
          if ( v53 ) /*0x7bd861*/
          {
            v17 = 0; /*0x7bd863*/
            if ( this->u16_74C ) /*0x7bd84b*/
            {
              v18 = *(_WORD **)(&this->u32_2EC6); /*0x7bd86d*/
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
            v19 = 0; /*0x7bd88e*/
            if ( this->u16_74C ) /*0x7bd84b*/
            {
              v20 = *(_WORD **)(&this->u32_2EC6); /*0x7bd898*/
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
      this->u32_8C = v52 + 2; /*0x7bd8f2*/
      goto LABEL_57; /*0x7bd8f9*/
    }
    v9 = v52 + 1; /*0x7bd8ed*/
  LABEL_55:
    v52 = v9; /*0x7bd8ee*/
    goto LABEL_56; /*0x7bd8ee*/
  }
  this->u32_8C = 1; /*0x7bd74d*/
  LABEL_57:
  v49 = this->q774; /*0x7bd8ff*/
  this->q154 |= 1u; /*0x7bd90f*/
  v21 = 0; /*0x7bd91b*/
  this->q768 = (this->u32_10A + 16) & 0xFFFFFFFC; /*0x7bd927*/
  v22 = (*(int (__cdecl **)(int, int, _DWORD, int))(&this->q0188))(this, 2, 0, v49); /*0x7bd92d*/
  this->u32_6F0 = v22; /*0x7bd935*/
  if ( !v22 ) /*0x7bd93b*/
    goto LABEL_103; /*0x7bd93b*/
  (*(void (__cdecl **)(int, int, int, _DWORD))(&this->q0188))(this, 4, v22, this->q774); /*0x7bd95c*/
  this->q030 += this->q774; /*0x7bd96d*/
  v56 = 0; /*0x7bd978*/
  if ( this->u32_8C > 0 ) /*0x7bd97c*/
  {
    while ( 1 ) /*0x7bd991*/
    {
      v23 = (*(int (__cdecl **)(int, int, _DWORD, int))(&this->q0188))(this, 2, 0, this->q768 + 24); /*0x7bd991*/
      v24 = (_DWORD *)v23; /*0x7bd994*/
      if ( !v23 ) /*0x7bd99b*/
        goto LABEL_103; /*0x7bd99b*/
      (*(void (__cdecl **)(int, int, int, int))(&this->q0188))(this, 4, v23, this->q768 + 24); /*0x7bd9af*/
      this->q030 += this->q768 + 24; /*0x7bd9c4*/
      memset(v24, 0, 0x18u); /*0x7bd9cc*/
      *v24 = v24 + 6; /*0x7bd9d6*/
      if ( v21 ) /*0x7bd9d9*/
      {
        v21[1] = v24; /*0x7bd9e3*/
        v24[2] = v21; /*0x7bd9e6*/
      }
      else
      {
        this->u32_6EC = v24; /*0x7bd9db*/
      }
      v21 = v24; /*0x7bd9f4*/
      if ( ++v56 >= this->u32_8C ) /*0x7bd9fc*/
      {
        if ( v24 ) /*0x7bda00*/
        {
          v24[1] = this->u32_6EC; /*0x7bda08*/
          *(_DWORD *)(this->u32_6EC + 8) = v24; /*0x7bda11*/
        }
        break; /*0x7bda11*/
      }
    }
  }
  v25 = this->u32_6EC; /*0x7bda14*/
  v26 = this->q768; /*0x7bda1a*/
  this->q164 = v25; /*0x7bda20*/
  this->q168 = v25; /*0x7bda26*/
  this->q768 = v26 - 4; /*0x7bda31*/
  this->u32_770 = 1020; /*0x7bda37*/
  v27 = 0; /*0x7bda69*/
  v28 = (2 /*0x7bda72*/
       * *(unsigned __int16 *)(&this->u32_600)
       / (int)*(unsigned __int8 *)(&this->u32_603)
       * (*(unsigned __int16 *)(&this->u32_5C8)
        / (int)*(unsigned __int8 *)(&this->u32_602))
       + 4)
      & 0xFFFFFFFC;
  this->q778 = v28; /*0x7bda75*/
  if ( this->u16_FE ) /*0x7bda7b*/
  {
    v29 = *(unsigned __int16 *)(&this->q0644); /*0x7bda8b*/
    if ( this->u16_E8 > 2u ) /*0x7bda98*/
      v29 <<= 8; /*0x7bda9a*/
  }
  else
  {
    v29 = v28; /*0x7bda87*/
  }
  v30 = v29 + 8; /*0x7bdaa9*/
  v50 = this->q778; /*0x7bdaac*/
  IDA_LOBYTE(v30) = v30 & 0xFC; /*0x7bdab1*/
  this->q154 |= 2u; /*0x7bdab6*/
  this->u32_76C = v30; /*0x7bdabc*/
  v31 = (*(int (__cdecl **)(int, int, _DWORD, int))(&this->q0188))(this, 2, 0, v50); /*0x7bdac2*/
  this->u32_6E8 = v31; /*0x7bdaca*/
  if ( !v31 ) /*0x7bdad0*/
  {
  LABEL_103:
    DSurface::CommitBuffers(); /*0x7bdf14*/
    return -8; /*0x7bdf27*/
  }
  (*(void (__cdecl **)(int, int, int, _DWORD))(&this->q0188))(this, 4, v31, this->q778); /*0x7bdaf1*/
  this->q030 += this->q778; /*0x7bdb02*/
  v57 = 0; /*0x7bdb0d*/
  if ( this->q088 > 0 ) /*0x7bdb11*/
  {
    while ( 1 ) /*0x7bdb30*/
    {
      v32 = (_DWORD *)(*(int (__cdecl **)(int, int, _DWORD, int))(&this->q0188))( /*0x7bdb30*/
                        this,
                        2,
                        0,
                        this->u32_770 + this->u32_76C + 44);
      if ( !v32 ) /*0x7bdb37*/
        goto LABEL_103; /*0x7bdb37*/
      (*(void (__cdecl **)(int, int, _DWORD *, int))(&this->q0188))( /*0x7bdb52*/
        this,
        4,
        v32,
        this->u32_770 + this->u32_76C + 44);
      this->q030 += this->u32_770 + this->u32_76C + 44; /*0x7bdb71*/
      memset(v32, 0, 0x2Cu); /*0x7bdb79*/
      *v32 = v32 + 11; /*0x7bdb7e*/
      v33 = (int)v32 + this->u32_76C + 44; /*0x7bdb89*/
      v32[1] = 0; /*0x7bdb8d*/
      v32[2] = v33; /*0x7bdb94*/
      if ( v27 ) /*0x7bdb97*/
      {
        v27[3] = v32; /*0x7bdba1*/
        v32[4] = v27; /*0x7bdba4*/
      }
      else
      {
        this->u32_6E4 = v32; /*0x7bdb99*/
      }
      v27 = v32; /*0x7bdbb2*/
      if ( ++v57 >= this->q088 ) /*0x7bdbba*/
      {
        v32[3] = this->u32_6E4; /*0x7bdbca*/
        *(_DWORD *)(this->u32_6E4 + 16) = v32; /*0x7bdbd3*/
        break; /*0x7bdbd3*/
      }
    }
  }
  v34 = this->u32_6E4; /*0x7bdbd6*/
  v35 = this->u32_770; /*0x7bdbdc*/
  v36 = this->u32_76C; /*0x7bdbe2*/
  this->u32_170 = v34; /*0x7bdbe8*/
  this->u32_1A0 = v34; /*0x7bdbee*/
  this->u32_6DC = v34; /*0x7bdbf4*/
  this->u32_770 = v35 - 4; /*0x7bdc03*/
  this->u32_76C = v36 - 4; /*0x7bdc09*/
  v37 = this->u16_EA; /*0x7bdc0f*/
  if ( (v37 & 1) != 0 ) /*0x7bdc18*/
  {
    v38 = this->q084; /*0x7bdc1e*/
    if ( (v38 & 1) != 0 ) /*0x7bdc27*/
    {
      if ( this->u16_E8 >= 2u ) /*0x7bdc35*/
      {
        if ( (v38 & 0x40) != 0 && (v37 & 2) != 0 ) /*0x7bdc57*/
        {
          this->u16_3C = this->q104; /*0x7bdc60*/
          this->u8_3E = this->u8_106; /*0x7bdc6a*/
          v39 = this->u8_107; /*0x7bdc6d*/
        }
        else
        {
          this->u16_3C = this->q100; /*0x7bdc7c*/
          this->u8_3E = this->u8_102; /*0x7bdc86*/
          v39 = this->u8_103; /*0x7bdc89*/
        }
        v40 = *(unsigned __int16 *)(&this->q0180) * (v39 >> 3); /*0x7bdc9c*/
        this->u8_3F = v39; /*0x7bdc9f*/
        this->u32_7CC = *(unsigned __int8 *)(&this->q0182) * v40; /*0x7bdcaa*/
      }
      else
      {
        this->u8_3E = 1; /*0x7bdc3c*/
        this->u16_3C = 22050; /*0x7bdc40*/
        this->u8_3F = 8; /*0x7bdc44*/
        this->u32_7CC = 22050; /*0x7bdc48*/
      }
      if ( this->q098 == -1 ) /*0x7bdcb7*/
        this->q098 = this->u32_9C /*0x7bdcd2*/
                                * ((unsigned int)(this->u32_7CC + (this->u32_7CC >> 1))
                                 / this->u32_9C);
      if ( this->q098 <= 0 ) /*0x7bdce0*/
      {
        DSurface::CommitBuffers(); /*0x7bdf2a*/
        return -18; /*0x7bdf3b*/
      }
      v41 = this->u32_94; /*0x7bdce6*/
      if ( v41 ) /*0x7bdcee*/
      {
        this->u32_78C = v41; /*0x7bdd3a*/
      }
      else
      {
        v42 = (*(int (__cdecl **)(int, int, _DWORD, _DWORD))(&this->q0188))(this, 2, 0, this->q098); /*0x7bdcf5*/
        this->u32_78C = v42; /*0x7bdcfb*/
        if ( !v42 ) /*0x7bdd03*/
          goto LABEL_103; /*0x7bdd03*/
        (*(void (__cdecl **)(int, int, int, _DWORD))(&this->q0188))(this, 4, v42, this->q098); /*0x7bdd24*/
        this->q030 += this->q098; /*0x7bdd35*/
      }
      v51 = this->q098 / this->u32_9C; /*0x7bdd4d*/
      this->u32_79C = v51; /*0x7bdd53*/
      v43 = (*(int (__cdecl **)(int, int, _DWORD, int))(&this->q0188))(this, 2, 0, v51); /*0x7bdd59*/
      this->q794 = v43; /*0x7bdd5f*/
      if ( !v43 ) /*0x7bdd67*/
        goto LABEL_103; /*0x7bdd67*/
      (*(void (__cdecl **)(int, int, int, _DWORD))(&this->q0188))(this, 4, v43, this->u32_79C); /*0x7bdd88*/
      this->q030 += this->u32_79C; /*0x7bdd96*/
      memset(*(void **)(&this->q3080), 0, this->u32_79C); /*0x7bddac*/
      v44 = (*(int (__cdecl **)(int, int, _DWORD, int))(&this->q0188))(this, 2, 0, 2 * this->u32_79C); /*0x7bddc3*/
      this->u32_798 = v44; /*0x7bddc9*/
      if ( !v44 ) /*0x7bddd1*/
        goto LABEL_103; /*0x7bddd1*/
      (*(void (__cdecl **)(int, int, int, int))(&this->q0188))(this, 4, v44, 2 * this->u32_79C); /*0x7bddf4*/
      this->q030 += 2 * this->u32_79C; /*0x7bde04*/
      memset(*(void **)(&this->q3084), 0, 2 * this->u32_79C); /*0x7bde1c*/
      v48 = 2 * (this->u32_7CC / (unsigned int)*(unsigned __int8 *)(&this->u32_604)) + 100; /*0x7bde3b*/
      this->u32_7B4 = v48; /*0x7bde41*/
      v45 = (*(int (__cdecl **)(int, int, _DWORD, unsigned int))(&this->q0188))(this, 2, 0, v48); /*0x7bde47*/
      this->u32_7A8 = v45; /*0x7bde4d*/
      if ( !v45 ) /*0x7bde55*/
        goto LABEL_103; /*0x7bde55*/
      (*(void (__cdecl **)(int, int, int, _DWORD))(&this->q0188))(this, 4, v45, this->u32_7B4); /*0x7bde76*/
      this->q030 += this->u32_7B4; /*0x7bde84*/
      v46 = (*(int (__cdecl **)(int, int, _DWORD, _DWORD))(&this->q0188))(this, 2, 0, this->u32_9C); /*0x7bde93*/
      this->u32_7B8 = v46; /*0x7bde99*/
      if ( !v46 ) /*0x7bdea1*/
        goto LABEL_103; /*0x7bdea1*/
      (*(void (__cdecl **)(int, int, int, _DWORD))(&this->q0188))(this, 4, v46, this->u32_9C); /*0x7bdec2*/
      memset(*(void **)(&this->q3146), 0, this->u32_9C); /*0x7bded8*/
      this->q030 += this->u32_9C; /*0x7bdeef*/
    }
  }
  v47 = (*(int (__cdecl **)(int, int, _DWORD, int))(&this->q0188))(this, 2, 0, 4 * *(unsigned __int16 *)(&this->u32_5C6)); /*0x7bdf04*/
  this->q764 = v47; /*0x7bdf0a*/
  if ( !v47 ) /*0x7bdf12*/
    goto LABEL_103; /*0x7bdf12*/
  (*(void (__cdecl **)(int, int, int, int))(&this->q0188))(this, 4, v47, 4 * *(unsigned __int16 *)(&this->u32_5C6)); /*0x7bdf4d*/
  this->q030 += 4 * *(unsigned __int16 *)(&this->u32_5C6); /*0x7bdf65*/
  return -1; /*0x7bd6a3*/
}
// 0x411510
unsigned int * Surface::GetRect(unsigned int * a2)
{
  int v3; // edi
  int v4; // ecx

  v3 = this->Width; /*0x411517*/
  v4 = this->Height; /*0x41151a*/
  *a2 = 0; /*0x411523*/
  a2[1] = 0; /*0x411525*/
  a2[2] = v3; /*0x411528*/
  a2[3] = v4; /*0x41152d*/
  return a2; /*0x41152b*/
}
// 0x411540
int Surface::GetWidth()
{
  return this->Width; /*0x411543*/
}
// 0x411550
int Surface::GetHeight()
{
  return this->Height; /*0x411553*/
}
// 0x4115C0
char Surface::StubReturnFalse()
{
  return 0; /*0x4115c2*/
}
// 0x4A4780
LPDIRECTDRAW Surface::CreateSurfacePalette()
{
  LPDIRECTDRAW result; // eax
  int v3; // edi
  char *v4; // eax
  char *v5; // ecx
  char v6; // dl
  char *v7; // eax
  char v8; // bl
  char v9; // [esp+8h] [ebp-4h]

  if ( Src != &unk_89F990 ) /*0x4a478b*/
    memcpy(&unk_89F990, Src, 0x300u); /*0x4a4798*/
  result = g_lpDirectDraw7; /*0x4a47a0*/
  if ( g_lpDirectDraw7 ) /*0x4a47a7*/
  {
    v3 = g_DDraw_PrimarySurface; /*0x4a47a9*/
    if ( g_DDraw_PrimarySurface ) /*0x4a47b1*/
    {
      v4 = (char *)Src; /*0x4a47b4*/
      v5 = (char *)&unk_89FC95; /*0x4a47b6*/
      do /*0x4a47e5*/
      {
        v6 = *v4; /*0x4a47bf*/
        v9 = v4[1]; /*0x4a47c5*/
        v7 = v4 + 2; /*0x4a47c9*/
        v5 += 4; /*0x4a47cc*/
        v8 = *v7; /*0x4a47cf*/
        *(v5 - 5) = v6; /*0x4a47d1*/
        v4 = v7 + 1; /*0x4a47d8*/
        *(v5 - 4) = v9; /*0x4a47d9*/
        *(v5 - 3) = v8; /*0x4a47dc*/
      }
      while ( (int)v5 < 9044117 ); /*0x4a47e5*/
      result = (LPDIRECTDRAW)g_DDraw_Palette; /*0x4a47e7*/
      if ( g_DDraw_Palette ) /*0x4a47ef*/
      {
        if ( !byte_8A0098 ) /*0x4a47f9*/
        {
          (*(void (__stdcall **)(int, int))(*(_DWORD *)v3 + 124))(v3, g_DDraw_Palette); /*0x4a47ff*/
          result = (LPDIRECTDRAW)g_DDraw_Palette; /*0x4a4802*/
          byte_8A0098 = 1; /*0x4a4807*/
        }
        return (LPDIRECTDRAW)((int (__stdcall *)(LPDIRECTDRAW, _DWORD, _DWORD, int, void *))result->lpVtbl->CreateSurface)( /*0x4a481f*/
                               result,
                               0,
                               0,
                               256,
                               &g_DDraw_PaletteEntries);
      }
    }
  }
  return result; /*0x4a4822*/
}
// 0x4AEC60
unsigned int * Surface::Construct(ObjectClass * aP1, IUnknown * aP2)
{
  this->vtable2 = aP1; /*0x4aec6a*/
  this->vtable3 = aP2; /*0x4aec6d*/
  *this = &Surface_Vtable; /*0x4aec70*/
  return this; /*0x4aec76*/
}
// 0x620F60
namespace gamemd {
int Surface_Render(ObjectClass * aP0, unsigned short * a1, int * yTop, unsigned char * a3, int aP1, int a6)
{
  _BYTE *v6; // edi
  int v8; // ebx
  int v9; // ebp
  int v10; // ebx
  int v12; // [esp+10h] [ebp-Ch]
  int yTopa; // [esp+20h] [ebp+4h]
  int v16; // [esp+28h] [ebp+Ch]

  v6 = a3; /*0x620fab*/
  v8 = yTop[2]; /*0x620fc5*/
  v9 = yTop[3] - yTop[1]; /*0x620fd0*/
  yTopa = yTop[1]; /*0x620fd2*/
  v10 = v8 - *yTop; /*0x620fda*/
  v16 = ((unsigned __int8)aP1 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x620fdc*/
      | (IDA_BYTE2(aP1) >> g_BitMask_Red << g_BitShift_Blue)
      | (IDA_BYTE1(aP1) >> g_BitMask_Blue << g_BitMask_Green);
  v12 = *yTop; /*0x620fe2*/
  if ( !a3 ) /*0x620fe6*/
    v6 = (_BYTE *)g_FogOfWarState; /*0x620fe8*/
  Char::Swap(v6, 1); /*0x620ff2*/
  TextGroup::SetRect(v6, yTop); /*0x620ffa*/
  Property::Set(v6, v16); /*0x621006*/
  Font::Print((int)v6, aP0, a1, v12, yTopa, v10, v9, 0, 0, 0); /*0x62102e*/
  return 0; /*0x621035*/
}
} // namespace gamemd
