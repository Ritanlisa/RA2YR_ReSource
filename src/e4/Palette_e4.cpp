// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x4355B0
namespace gamemd {
unsigned char * Palette_6BitTo16Bit(char a2, char a3, char a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_BYTE *__thiscall Palette_6BitTo16Bit(_BYTE *this, char a2, char a3, char a4)
{
  *this = a2; /*0x4355ba*/
  *(this + 1) = a3; /*0x4355c0*/
  *(this + 2) = a4; /*0x4355c3*/
  return this; /*0x4355c6*/
}
}
} // namespace gamemd

// 0x626200
int Palette::FindClosestColor(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Palette_FindClosestColor(char *this, int a2)
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
}

// 0x632BE0
unsigned char * Palette::ConvertIndices(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_BYTE *__thiscall Palette_ConvertIndices(_BYTE *this, int a2)
{
  int v3; // ebx
  int v4; // eax
  _WORD *v5; // esi
  _WORD *v6; // edi

  *this = 0; /*0x632be9*/
  v3 = Hash_Check_5C61E0(); /*0x632bf1*/
  v4 = Hash_Check(); /*0x632bf3*/
  if ( v3 <= 0 ) /*0x632bfa*/
    return this; /*0x632c31*/
  v5 = (_WORD *)v4; /*0x632c02*/
  v6 = this + 2; /*0x632c04*/
  do /*0x632c23*/
  {
    LOWORD(v4) = *v5; /*0x632c07*/
    v4 = ShiftBigIntAndScan(v4, 64); /*0x632c14*/
    *v6 = v4; /*0x632c19*/
    ++v5; /*0x632c1c*/
    ++v6; /*0x632c1f*/
    --v3; /*0x632c22*/
  }
  while ( v3 ); /*0x632c23*/
  return this; /*0x632c2b*/
}
}

// 0x642130
namespace gamemd {
int Palette_Preview_Generate()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int *__userpurge Palette::Preview_Generate@<eax>(int *a1@<ecx>, char a2@<sil>, int a3, AbstractClass **a4)
{
  int v6; // esi
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  CCINIClass *v11; // ebx
  int v12; // eax
  int v13; // ebp
  unsigned __int16 Pixel; // ax
  int v15; // edi
  int v16; // ebx
  int v17; // esi
  int v18; // esi
  int v19; // eax
  int v20; // edi
  AbstractClass *v21; // eax
  int v22; // ecx
  int v23; // ebp
  int v24; // eax
  CCINIClass *v25; // esi
  int v26; // eax
  int v27; // ecx
  unsigned __int16 v28; // ax
  int v29; // ebp
  AbstractClass *v30; // edi
  int v31; // ecx
  __int64 v32; // rax
  int v33; // ecx
  __int64 v34; // rax
  XSurface *v35; // ecx
  int v36; // eax
  AbstractClass *v37; // ebx
  int v38; // ebp
  XSurface *v39; // eax
  int v41; // [esp+8h] [ebp-70h]
  AbstractClass *v42; // [esp+8h] [ebp-70h]
  int v43; // [esp+8h] [ebp-70h]
  int v44; // [esp+Ch] [ebp-6Ch]
  int v45; // [esp+Ch] [ebp-6Ch]
  AbstractClass *Block; // [esp+10h] [ebp-68h]
  AbstractClass *Blocka; // [esp+10h] [ebp-68h]
  CCINIClass *v48; // [esp+14h] [ebp-64h]
  XSurface *v49; // [esp+18h] [ebp-60h]
  XSurface *v50; // [esp+1Ch] [ebp-5Ch]
  int v51; // [esp+20h] [ebp-58h]
  XSurface *v52; // [esp+24h] [ebp-54h]
  _DWORD v53[2]; // [esp+2Ch] [ebp-4Ch] BYREF
  int v54; // [esp+34h] [ebp-44h] BYREF
  int v55[3]; // [esp+38h] [ebp-40h] BYREF
  int v56; // [esp+44h] [ebp-34h] BYREF
  int v57; // [esp+48h] [ebp-30h]
  int v58; // [esp+4Ch] [ebp-2Ch]
  int v59; // [esp+50h] [ebp-28h]
  int v60; // [esp+54h] [ebp-24h] BYREF
  char v61[4]; // [esp+58h] [ebp-20h] BYREF
  int v62; // [esp+5Ch] [ebp-1Ch]
  int v63; // [esp+60h] [ebp-18h]

  if ( !*a1 ) /*0x642139*/
    return 0; /*0x642146*/
  v6 = *a1; /*0x64214b*/
  v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 128))(v6); /*0x642153*/
  v8 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v6 + 124))(v6, v7 / 2); /*0x642163*/
  DSurface::Construct(v61, (IUnknown *)(v8 / 2), 0, 0, a2); /*0x642170*/
  v58 = 0; /*0x642181*/
  v9 = *a1; /*0x642185*/
  v59 = v62; /*0x642187*/
  v57 = 0; /*0x64218b*/
  v60 = v63; /*0x64218f*/
  v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 120))(v9); /*0x64219c*/
  DSurface::BlitPart(&v60, (int)&v56, *a1, v10, (int)v55, 0); /*0x6421ac*/
  v11 = (CCINIClass *)__2_YAPAXI_Z(0x4000u); /*0x6421bb*/
  memset(v11, 0, 0x4000u); /*0x6421c6*/
  v48 = v11; /*0x6421cd*/
  Block = 0; /*0x6421d1*/
  DSurface::Lock(&v60, 0, 0); /*0x6421db*/
  v41 = 0; /*0x6421e4*/
  if ( v62 > 0 ) /*0x6421ea*/
  {
    v12 = *(_DWORD *)v61; /*0x6421f0*/
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
          v15 = ((unsigned __int8)(Pixel >> MEMORY[0x89F690].__pad_14B0[656]) << MEMORY[0x89F690].__pad_14B0[660]) /*0x642248*/
              & 0xF0;
          v16 = ((unsigned __int8)(Pixel >> MEMORY[0x89F690].__pad_14B0[672]) << MEMORY[0x89F690].__pad_14B0[676]) /*0x64225c*/
              & 0xF0;
          v53[1] = v41; /*0x642268*/
          v17 = ((unsigned __int8)(Pixel >> MEMORY[0x89F690].__pad_14B0[664]) << MEMORY[0x89F690].__pad_14B0[668]) /*0x64227f*/
              & 0xF0;
          XSurface::SetPixel( /*0x6422b5*/
            &v60,
            v53,
            (v17 >> MEMORY[0x89F690].__pad_14B0[668] << MEMORY[0x89F690].__pad_14B0[664])
          | (v16 >> MEMORY[0x89F690].__pad_14B0[676] << MEMORY[0x89F690].__pad_14B0[672])
          | (v15 >> MEMORY[0x89F690].__pad_14B0[660] << MEMORY[0x89F690].__pad_14B0[656]));
          v18 = v16 | (16 * v15) | (v17 >> 4); /*0x6422c6*/
          v19 = *(_DWORD *)&v48->__pad_0[4 * v18]; /*0x6422c8*/
          if ( !v19 ) /*0x6422cd*/
            Block = (AbstractClass *)((char *)Block + 1); /*0x6422cf*/
          ++v13; /*0x6422d4*/
          *(_DWORD *)&v48->__pad_0[4 * v18] = v19 + 1; /*0x6422d5*/
          v12 = *(_DWORD *)v61; /*0x6422d8*/
        }
        while ( v13 < *(int *)v61 ); /*0x6422de*/
        v11 = v48; /*0x6422e4*/
      }
      ++v41; /*0x6422f3*/
    }
    while ( v41 < v62 ); /*0x6422f7*/
  }
  DSurface::Unlock(&v60); /*0x642301*/
  v20 = a3; /*0x642306*/
  v21 = (AbstractClass *)__2_YAPAXI_Z(2 * a3); /*0x642311*/
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
      v25 = v11; /*0x642334*/
      do /*0x642349*/
      {
        if ( *(_DWORD *)v25->__pad_0 > v23 ) /*0x64233a*/
        {
          v23 = *(_DWORD *)v25->__pad_0; /*0x64233c*/
          v22 = v24; /*0x64233e*/
        }
        ++v24; /*0x642340*/
        v25 = (CCINIClass *)((char *)v25 + 4); /*0x642341*/
      }
      while ( v24 < 4096 ); /*0x642349*/
      if ( v22 == -1 ) /*0x64234e*/
        break; /*0x64234e*/
      *(_DWORD *)&v11->__pad_0[4 * v22] = 0; /*0x642358*/
      *(_WORD *)v42->__pad_0 = v22; /*0x642360*/
      ++v44; /*0x642368*/
      v42 = (AbstractClass *)((char *)v42 + 2); /*0x64236c*/
    }
    while ( v44 < a3 ); /*0x642370*/
  }
  v52 = (XSurface *)__2_YAPAXI_Z(v62 * *(_DWORD *)v61); /*0x642384*/
  v50 = v52; /*0x642388*/
  DSurface::Lock(&v60, 0, 0); /*0x642396*/
  v43 = 0; /*0x64239f*/
  if ( v62 > 0 ) /*0x6423a9*/
  {
    v26 = *(_DWORD *)v61; /*0x6423af*/
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
      v49 = (XSurface *)0xFFFF; /*0x6423f7*/
      LOBYTE(v54) = (unsigned __int8)(v28 >> MEMORY[0x89F690].__pad_14B0[656]) << MEMORY[0x89F690].__pad_14B0[660]; /*0x642408*/
      BYTE1(v54) = (unsigned __int8)(v28 >> MEMORY[0x89F690].__pad_14B0[672]) << MEMORY[0x89F690].__pad_14B0[676]; /*0x642429*/
      BYTE2(v54) = (unsigned __int8)(v28 >> MEMORY[0x89F690].__pad_14B0[664]) << MEMORY[0x89F690].__pad_14B0[668]; /*0x642431*/
      if ( v20 > 0 ) /*0x642435*/
      {
        v30 = Blocka; /*0x642447*/
        v31 = (unsigned __int8)v54; /*0x642451*/
        v53[0] = BYTE1(v54); /*0x642460*/
        while ( 1 ) /*0x642490*/
        {
          v32 = 16 * (*(_WORD *)v30->__pad_0 & 0xF) - BYTE2(v54); /*0x642490*/
          v33 = (HIDWORD(v32) ^ v32) - HIDWORD(v32) + abs32(((*(unsigned __int16 *)v30->__pad_0 >> 4) & 0xF0) - v31); /*0x642499*/
          v34 = (*(_WORD *)v30->__pad_0 & 0xF0) - v53[0]; /*0x6424a4*/
          v35 = (XSurface *)((HIDWORD(v34) ^ v34) - HIDWORD(v34) + v33); /*0x6424a9*/
          if ( !v35 ) /*0x6424ab*/
            break; /*0x6424ab*/
          if ( (int)v35 < (int)v49 ) /*0x6424b1*/
          {
            v49 = v35; /*0x6424b3*/
            v45 = v29; /*0x6424b7*/
          }
          ++v29; /*0x6424c2*/
          v30 = (AbstractClass *)((char *)v30 + 2); /*0x6424c3*/
          if ( v29 >= a3 ) /*0x6424c8*/
          {
            v36 = v45; /*0x6424ca*/
            goto LABEL_31; /*0x6424ce*/
          }
          v31 = (unsigned __int8)v54; /*0x642466*/
        }
        v36 = v29; /*0x6424d0*/
LABEL_31:
        if ( v36 != -1 && v36 < 256 ) /*0x6424dc*/
        {
          v20 = a3; /*0x6424f3*/
          goto LABEL_36; /*0x6424f3*/
        }
        v20 = a3; /*0x6424de*/
      }
      LOBYTE(v36) = 0; /*0x6424ed*/
LABEL_36:
      v50->__pad_0[0] = v36; /*0x6424fa*/
      v26 = *(_DWORD *)v61; /*0x642500*/
      v50 = (XSurface *)((char *)v50 + 1); /*0x642505*/
      v27 = ++v51; /*0x64250d*/
      if ( v51 >= *(int *)v61 ) /*0x642514*/
        goto LABEL_37; /*0x642514*/
    }
  }
LABEL_38:
  DSurface::Unlock(&v60); /*0x64252f*/
  v37 = (AbstractClass *)(2 * v20 + 12 + v62 * *(_DWORD *)v61); /*0x642545*/
  v53[0] = 2 * v20 + 12; /*0x642547*/
  v38 = __2_YAPAXI_Z((size_t)v37); /*0x642551*/
  *(_DWORD *)v38 = *(_DWORD *)v61; /*0x64255b*/
  *(_DWORD *)(v38 + 4) = v62; /*0x642562*/
  *(_DWORD *)(v38 + 8) = v20; /*0x64256a*/
  v39 = (XSurface *)v53[0]; /*0x642570*/
  qmemcpy((void *)(v38 + 12), Blocka, 2 * v20); /*0x642577*/
  qmemcpy(&v39->__pad_0[v38], v52, v62 * *(_DWORD *)v61); /*0x642595*/
  __3_YAXPAX_Z(Blocka); /*0x6425a3*/
  __3_YAXPAX_Z(v52); /*0x6425ad*/
  __3_YAXPAX_Z(v48); /*0x6425b7*/
  *a4 = v37; /*0x6425c9*/
  Debug::Log(); /*0x6425cb*/
  DSurface::Destroy(&v60); /*0x6425d7*/
  return (int *)v38; /*0x64213f*/
}
}
} // namespace gamemd

// 0x661350
int Palette::CalcColorDistance(unsigned char * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_661350(unsigned __int8 *this, unsigned __int8 *a2)
{
  int v2; // esi
  int v3; // edx
  int v4; // eax

  v2 = *this - *a2; /*0x661360*/
  if ( v2 < 0 ) /*0x661362*/
    v2 = *a2 - *this; /*0x661364*/
  v3 = *(this + 1) - a2[1]; /*0x661370*/
  if ( v3 < 0 ) /*0x661372*/
    v3 = a2[1] - *(this + 1); /*0x661374*/
  v4 = *(this + 2) - a2[2]; /*0x661382*/
  if ( v4 < 0 ) /*0x661384*/
    v4 = a2[2] - *(this + 2); /*0x661386*/
  return 3 * v4 + 2 * (v2 + 2 * v3); /*0x66138e*/
}
}

// 0x72B820
int Palette::LoadFile()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Palette_LoadFile(char *this)
{
  if ( MEMORY[0xB0FBA0] ) /*0x72b82b*/
  {
    (**(void (__thiscall ***)(int, int))MEMORY[0xB0FBA0])(MEMORY[0xB0FBA0], 1); /*0x72b831*/
    MEMORY[0xB0FBA0] = 0; /*0x72b833*/
  }
  if ( MEMORY[0xB0FB9C] ) /*0x72b844*/
  {
    __3_YAXPAX_Z(MEMORY[0xB0FB9C]); /*0x72b847*/
    MEMORY[0xB0FB9C] = 0; /*0x72b84f*/
  }
  return LoadPaletteSimple(this, &MEMORY[0xB0FB9C], &MEMORY[0xB0FBA0]); /*0x72b86a*/
}
}
