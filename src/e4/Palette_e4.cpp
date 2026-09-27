// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Palette_e4.hpp"
#include "e4/classes/DSurface_e4.hpp"
#include "e4/classes/XSurface_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ObjectTypeClass_e4.hpp"

// 0x4355B0
namespace gamemd {
unsigned char * Palette_6BitTo16Bit(char a2, char a3, char a4)
{
  *this = a2; /*0x4355ba*/
  *(this + 1) = a3; /*0x4355c0*/
  *(this + 2, unsigned int a1, unsigned int a2) = a4; /*0x4355c3*/
  return this; /*0x4355c6*/
}
}
// 0x642130
namespace gamemd {
AbstractClass * * Palette_Preview_Generate(void * a1, void * a2, void * a3, void * a4)
{
  int v6;
  int v7; // eax
  int v8; // eax
  int v9;
  int v10; // eax
  void *v11; // ebx
  int v12; // eax
  int v13; // ebp
  uint16_t Pixel; // ax
  int v15; // edi
  int v16; // ebx
  int v17; // esi
  int v18; // esi
  int v19; // eax
  void * v20;
  unsigned short *v21; // eax
  int v22; // ecx
  int v23; // ebp
  int v24; // eax
  int *v25; // esi
  int v26; // eax
  int v27; // ecx
  uint16_t v28; // ax
  int v29; // ebp
  unsigned short *v30; // edi
  int v31; // ecx
  int64_t v32; // rax
  int v33; // ecx
  int64_t v34; // rax
  int v35; // ecx
  int v36; // eax
  size_t v37; // ebx
  int *v38; // ebp
  int v39; // eax
  int v41; // [esp+8h] [ebp-70h]
  unsigned short *v42; // [esp+8h] [ebp-70h]
  int v43; // [esp+8h] [ebp-70h]
  int v44; // [esp+Ch] [ebp-6Ch]
  int v45; // [esp+Ch] [ebp-6Ch]
  char *Block; // [esp+10h] [ebp-68h]
  unsigned short *Blocka; // [esp+10h] [ebp-68h]
  unsigned int *v48; // [esp+14h] [ebp-64h]
  int v49; // [esp+18h] [ebp-60h]
  unsigned char *v50; // [esp+1Ch] [ebp-5Ch]
  int v51; // [esp+20h] [ebp-58h]
  unsigned char *v52; // [esp+24h] [ebp-54h]
  unsigned int v53[2]; // [esp+2Ch] [ebp-4Ch] BYREF
  int v54; // [esp+34h] [ebp-44h] BYREF
  int v55[3]; // [esp+38h] [ebp-40h] BYREF
  int v56; // [esp+44h] [ebp-34h] BYREF
  int v57; // [esp+48h] [ebp-30h]
  int v58; // [esp+4Ch] [ebp-2Ch]
  int v59; // [esp+50h] [ebp-28h]
  int v60; // [esp+54h] [ebp-24h] BYREF
  int v61; // [esp+58h] [ebp-20h] BYREF
  int v62; // [esp+5Ch] [ebp-1Ch]
  int v63; // [esp+60h] [ebp-18h]

  if ( !*a1 ) /*0x642139*/
    return 0; /*0x642146*/
  v6 = *a1; /*0x64214b*/
  v7 = (*(int (__thiscall **)(int))(*(unsigned int *)v6 + 128))(v6); /*0x642153*/
  v8 = (*(int (__thiscall **)(int, int))(*(unsigned int *)v6 + 124))(v6, v7 / 2); /*0x642163*/
  DSurface::Construct((char *)&v61, v8 / 2, 0, 0, a2); /*0x642170*/
  v58 = 0; /*0x642181*/
  v9 = *a1; /*0x642185*/
  v59 = v62; /*0x642187*/
  v57 = 0; /*0x64218b*/
  v60 = v63; /*0x64218f*/
  v10 = (*(int (__thiscall **)(int))(*(unsigned int *)v9 + 120))(v9); /*0x64219c*/
  DSurface::BlitPart(&v60, (int)&v56, *a1, v10, (int)v55, 0); /*0x6421ac*/
  v11 = operator new(0x4000u); /*0x6421bb*/
  memset(v11, 0, 0x4000u); /*0x6421c6*/
  v48 = v11; /*0x6421cd*/
  Block = 0; /*0x6421d1*/
  DSurface::Lock(&v60, 0, 0); /*0x6421db*/
  v41 = 0; /*0x6421e4*/
  if ( v62 > 0 ) /*0x6421ea*/
  {
    v12 = v61; /*0x6421f0*/
    do /*0x6422f7*/
    {
      v13 = 0; /*0x6421f4*/
      if ( v12 > 0 ) /*0x6421f8*/
      {
        do /*0x6422de*/
        {
          v54 = v13; /*0x64220b*/
          v55[0] = v41; /*0x64220f*/
          Pixel = XSurface::GetPixel(&v60, &v54); /*0x642213*/
          v53[0] = v13; /*0x64222c*/
          v15 = ((uint8_t)(Pixel >> g_BitShift_Red) << g_BitShift_Green_0) & 0xF0; /*0x642248*/
          v16 = ((uint8_t)(Pixel >> g_BitMask_Green) << g_BitMask_Blue) & 0xF0; /*0x64225c*/
          v53[1] = v41; /*0x642268*/
          v17 = ((uint8_t)(Pixel >> g_BitShift_Blue) << g_BitMask_Red) & 0xF0; /*0x64227f*/
          XSurface::SetPixel( /*0x6422b5*/
            &v60,
            v53,
            (v17 >> g_BitMask_Red << g_BitShift_Blue)
          | (v16 >> g_BitMask_Blue << g_BitMask_Green, void * a1, void * a2, void * a3)
          | (v15 >> g_BitShift_Green_0 << g_BitShift_Red));
          v18 = v16 | (16 * v15) | (v17 >> 4); /*0x6422c6*/
          v19 = v48[v18]; /*0x6422c8*/
          if ( !v19 ) /*0x6422cd*/
            ++Block; /*0x6422cf*/
          ++v13; /*0x6422d4*/
          v48[v18] = v19 + 1; /*0x6422d5*/
          v12 = v61; /*0x6422d8*/
        }
        while ( v13 < v61 ); /*0x6422de*/
        v11 = v48; /*0x6422e4*/
      }
      ++v41; /*0x6422f3*/
    }
    while (v41 < v62, unsigned int a3); /*0x6422f7*/
  }
  DSurface::Unlock(&v60); /*0x642301*/
  v20 = a3; /*0x642306*/
  v21 = operator new(2 * a3); /*0x642311*/
  Blocka = v21; /*0x642319*/
  v44 = 0; /*0x64231f*/
  if ( a3 > 0 ) /*0x642327*/
  {
    v42 = v21; /*0x642329*/
    do /*0x642370*/
    {
      v22 = -1; /*0x64232d*/
      v23 = 0; /*0x642330*/
      v24 = 0; /*0x642332*/
      v25 = (int *)v11; /*0x642334*/
      do /*0x642349*/
      {
        if ( *v25 > v23 ) /*0x64233a*/
        {
          v23 = *v25; /*0x64233c*/
          v22 = v24; /*0x64233e*/
        }
        ++v24; /*0x642340*/
        ++v25; /*0x642341*/
      }
      while ( v24 < 4096 ); /*0x642349*/
      if ( v22 == -1 ) /*0x64234e*/
        break; /*0x64234e*/
      *((unsigned int *, unsigned int a3)v11 + v22) = 0; /*0x642358*/
      *v42 = v22; /*0x642360*/
      ++v44; /*0x642368*/
      ++v42; /*0x64236c*/
    }
    while ( v44 < a3 ); /*0x642370*/
  }
  v52 = (unsigned char *)(operator new(v62 * v61));
  v50 = v52; /*0x642388*/
  DSurface::Lock(&v60, 0, 0); /*0x642396*/
  v43 = 0; /*0x64239f*/
  if ( v62 > 0 ) /*0x6423a9*/
  {
    v26 = v61; /*0x6423af*/
    while ( 1 ) /*0x6423b3*/
    {
      v27 = 0; /*0x6423b3*/
      v51 = 0; /*0x6423b7*/
      if ( v26 > 0 ) /*0x6423bb*/
        break; /*0x6423bb*/
  LABEL_37:
      if ( ++v43 >= v62 ) /*0x642529*/
        goto LABEL_38; /*0x642529*/
    }
    while ( 1 ) /*0x6423c1*/
    {
      v56 = v27; /*0x6423c1*/
      v57 = v43; /*0x6423cd*/
      v28 = XSurface::GetPixel(&v60, &v56); /*0x6423d6*/
      v29 = 0; /*0x6423ed*/
      v45 = -1; /*0x6423ef*/
      v49 = 0xFFFF; /*0x6423f7*/
      IDA_LOBYTE(v54) = (uint8_t)(v28 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x642408*/
      IDA_BYTE1(v54) = (uint8_t)(v28 >> g_BitMask_Green) << g_BitMask_Blue; /*0x642429*/
      IDA_BYTE2(v54) = (uint8_t)(v28 >> g_BitShift_Blue) << g_BitMask_Red; /*0x642431*/
      if ( v20 > 0 ) /*0x642435*/
      {
        v30 = Blocka; /*0x642447*/
        v31 = (uint8_t)v54; /*0x642451*/
        v53[0] = IDA_BYTE1(v54); /*0x642460*/
        while ( 1 ) /*0x642490*/
        {
          v32 = 16 * (*v30 & 0xF) - IDA_BYTE2(v54); /*0x642490*/
          v33 = (IDA_HIDWORD(v32) ^ v32) - IDA_HIDWORD(v32) + abs32((((uint16_t)*v30 >> 4) & 0xF0) - v31); /*0x642499*/
          v34 = (*v30 & 0xF0) - v53[0]; /*0x6424a4*/
          v35 = (IDA_HIDWORD(v34) ^ v34) - IDA_HIDWORD(v34) + v33; /*0x6424a9*/
          if ( !v35 ) /*0x6424ab*/
            break; /*0x6424ab*/
          if ( v35 < v49 ) /*0x6424b1*/
          {
            v49 = v35; /*0x6424b3*/
            v45 = v29; /*0x6424b7*/
          }
          ++v29; /*0x6424c2*/
          ++v30; /*0x6424c3*/
          if ( v29 >= a3 ) /*0x6424c8*/
          {
            v36 = v45; /*0x6424ca*/
            goto LABEL_31; /*0x6424ce*/
          }
          v31 = (uint8_t, unsigned int a3)v54; /*0x642466*/
        }
        v36 = v29; /*0x6424d0*/
  LABEL_31:
        if ( v36 != -1 && v36 < 256 ) /*0x6424dc*/
        {
          v20 = (void *)((int)(a3));
          goto LABEL_36; /*0x6424f3*/
        }
        v20 = (void *)((int)(a3));
      }
      IDA_LOBYTE(v36) = 0; /*0x6424ed*/
  LABEL_36:
      *v50 = v36; /*0x6424fa*/
      v26 = v61; /*0x642500*/
      ++v50; /*0x642505*/
      v27 = ++v51; /*0x64250d*/
      if (v51 >= v61, unsigned int a4) /*0x642514*/
        goto LABEL_37; /*0x642514*/
    }
  }
  LABEL_38:
  DSurface::Unlock(&v60); /*0x64252f*/
  v37 = 2 * v20 + 12 + v62 * v61; /*0x642545*/
  v53[0] = 2 * v20 + 12; /*0x642547*/
  v38 = (int *)operator new(v37); /*0x642551*/
  *v38 = v61; /*0x64255b*/
  v38[1] = v62; /*0x642562*/
  v38[2] = v20; /*0x64256a*/
  v39 = v53[0]; /*0x642570*/
  qmemcpy(v38 + 3, Blocka, 2 * v20); /*0x642577*/
  qmemcpy((char *)v38 + v39, v52, v62 * v61); /*0x642595*/
  RA2_OPDEL(Blocka); /*0x6425a3*/
  RA2_OPDEL(v52); /*0x6425ad*/
  RA2_OPDEL(v48); /*0x6425b7*/
  *a4 = v37; /*0x6425c9*/
  Debug::Log("Created paletted preview of size %d bytes\n", v37); /*0x6425cb*/
  DSurface::Destroy(&v60); /*0x6425d7*/
  return v38; /*0x64213f*/
}
}
// 0x661350
int Palette::CalcColorDistance(unsigned char * a2)
{
  int v2; // esi
  int v3; // edx
  int v4; // eax

  v2 = *this - *a2; /*0x661360*/
  if ( v2 < 0 ) /*0x661362*/
    v2 = *a2 - *this; /*0x661364*/
  v3 = this->u32_4 - a2[1]; /*0x661370*/
  if ( v3 < 0 ) /*0x661372*/
    v3 = a2[1] - this->u32_4; /*0x661374*/
  v4 = this->u32_8 - a2[2]; /*0x661382*/
  if ( v4 < 0 ) /*0x661384*/
    v4 = a2[2] - this->u32_8; /*0x661386*/
  return 3 * v4 + 2 * (v2 + 2 * v3); /*0x66138e*/
}
// 0x626200
int Palette::FindClosestColor(int a2)
{
  int v2; // ebx
  int v3; // esi
  int v5; // eax
  char *v7; // [esp-4h] [ebp-18h]
  int v8; // [esp+10h] [ebp-4h]

  v2 = 0; /*0x626208*/
  v8 = 0; /*0x62620b*/
  v3 = -1; /*0x62620f*/
  do /*0x626237*/
  {
    v7 = this; /*0x626218*/
    this += 3; /*0x626219*/
    v5 = Palette::CalcColorDistance(v7); /*0x62621c*/
    if ( v3 == -1 || v5 < v3 ) /*0x626228*/
    {
      v3 = v5; /*0x62622a*/
      v8 = v2; /*0x62622c*/
    }
    ++v2; /*0x626230*/
  }
  while ( v2 < 256 ); /*0x626237*/
  return v8; /*0x62623d*/
}
// 0x632BE0
unsigned char * Palette::ConvertIndices(int a2)
{
  int v3; // ebx
  int v4; // eax
  unsigned short *v5; // esi
  unsigned short *v6; // edi

  *this = 0; /*0x632be9*/
  v3 = Hash_Check_5C61E0(); /*0x632bf1*/
  v4 = Hash_Check(); /*0x632bf3*/
  if ( v3 <= 0 ) /*0x632bfa*/
    return this; /*0x632c31*/
  v5 = (unsigned short *)v4; /*0x632c02*/
  v6 = &this->u32_8; /*0x632c04*/
  do /*0x632c23*/
  {
    IDA_LOWORD(v4) = *v5; /*0x632c07*/
    v4 = ShiftBigIntAndScan(v4, 64); /*0x632c14*/
    *v6 = v4; /*0x632c19*/
    ++v5; /*0x632c1c*/
    ++v6; /*0x632c1f*/
    --v3; /*0x632c22*/
  }
  while ( v3 ); /*0x632c23*/
  return this; /*0x632c2b*/
}
// 0x72B820
int Palette::LoadFile()
{
  if ( dword_B0FBA0 ) /*0x72b82b*/
  {
    (**(void (__thiscall ***)(int, int))dword_B0FBA0)(dword_B0FBA0, 1); /*0x72b831*/
    dword_B0FBA0 = 0; /*0x72b833*/
  }
  if ( dword_B0FB9C ) /*0x72b844*/
  {
    RA2_OPDEL(dword_B0FB9C); /*0x72b847*/
    dword_B0FB9C = 0; /*0x72b84f*/
  }
  return LoadPaletteSimple(Source, &dword_B0FB9C, &dword_B0FBA0); /*0x72b86a*/
}