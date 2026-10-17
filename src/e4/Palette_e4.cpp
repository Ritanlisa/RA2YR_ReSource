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
#include "e4/classes/ParasiteClass_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Options_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/CommandClass_e4.hpp"
#include "e4/classes/OverlayTypeClass_e4.hpp"

// 0x4355B0
namespace gamemd {  // G42.18 ns repair
unsigned char * Palette::Palette_6BitTo16Bit(char a2, char a3, char a4)
{
  this->m_Colors[0] = a2; /*0x4355ba*/
  this->m_Colors[1] = a3; /*0x4355c0*/
  this->m_Colors[2] = a4; /*0x4355c3*/
  return (unsigned char *)(this->m_Colors); /*0x4355c6*/
}
}  // G42.18 ns repair
// 0x642130
namespace gamemd {
AbstractClass * * Palette_Preview_Generate(void * a1, void * a2, void * a3, void * a4)
{

  char v4; // si
  int v7; // esi
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  void *v12; // ebx
  int Width; // eax
  int v14; // ebp
  unsigned __int16 Pixel; // ax
  int v16; // edi
  int v17; // ebx
  int v18; // esi
  int v19; // esi
  int v20; // eax
  int v21; // edi
  int v22; // eax
  int v23; // ecx
  int v24; // ebp
  int v25; // eax
  int *v26; // esi
  int v27; // eax
  int v28; // ecx
  unsigned __int16 v29; // ax
  int v30; // ebp
  unsigned short *v31; // edi
  int v32; // ecx
  __int64 v33; // rax
  int v34; // ecx
  __int64 v35; // rax
  int v36; // ecx
  int v37; // eax
  size_t v38; // ebx
  int *v39; // ebp
  int v40; // eax
  char v41; // [esp-8h] [ebp-80h]
  int v42; // [esp+8h] [ebp-70h]
  unsigned short *v43; // [esp+8h] [ebp-70h]
  int v44; // [esp+8h] [ebp-70h]
  int v45; // [esp+Ch] [ebp-6Ch]
  int v46; // [esp+Ch] [ebp-6Ch]
  char *Block; // [esp+10h] [ebp-68h]
  unsigned short *Blocka; // [esp+10h] [ebp-68h]
  unsigned int *v49; // [esp+14h] [ebp-64h]
  int v50; // [esp+18h] [ebp-60h]
  unsigned char *v51; // [esp+1Ch] [ebp-5Ch]
  int v52; // [esp+20h] [ebp-58h]
  unsigned char *v53; // [esp+24h] [ebp-54h]
  unsigned int v54[2]; // [esp+2Ch] [ebp-4Ch] BYREF
  int v55; // [esp+34h] [ebp-44h] BYREF
  int v56[3]; // [esp+38h] [ebp-40h] BYREF
  int v57; // [esp+44h] [ebp-34h] BYREF
  int v58; // [esp+48h] [ebp-30h]
  int v59; // [esp+4Ch] [ebp-2Ch]
  int Height; // [esp+50h] [ebp-28h]
  XSurface v61; // [esp+54h] [ebp-24h] BYREF

  if ( !*(unsigned int *)this->m_Colors ) /*0x642139*/
    return 0; /*0x642146*/
  v41 = v4; /*0x64214a*/
  v7 = *(unsigned int *)this->m_Colors; /*0x64214b*/
  v8 = (*(int (**)(int))(*(unsigned int *)v7 + 128))(v7); /*0x642153*/
  v9 = (*(int (**)(int, int))(*(unsigned int *)v7 + 124))(v7, v8 / 2); /*0x642163*/
  DSurface::Construct((char *)&v61.Width, v9 / 2, 0, 0, v41); /*0x642170*/
  v59 = 0; /*0x642181*/
  v10 = *(unsigned int *)this->m_Colors; /*0x642185*/
  Height = v61.Height; /*0x642187*/
  v58 = 0; /*0x64218b*/
  *(unsigned int *)v61.__pad_0 = v61.LockCount; /*0x64218f*/
  v11 = (*(int (**)(int))(*(unsigned int *)v10 + 120))(v10); /*0x64219c*/
  DSurface::BlitPart((DSurface *)&v61, (int)&v57, *(unsigned int *)this->m_Colors, v11, (int)v56, 0); /*0x6421ac*/
  v12 = (void *)__2_YAPAXI_Z(0x4000u); /*0x6421bb*/
  memset(v12, 0, 0x4000u); /*0x6421c6*/
  v49 = v12; /*0x6421cd*/
  Block = 0; /*0x6421d1*/
  DSurface::Lock((DSurface *)&v61, 0, 0); /*0x6421db*/
  v42 = 0; /*0x6421e4*/
  if ( v61.Height > 0 ) /*0x6421ea*/
  {
    Width = v61.Width; /*0x6421f0*/
    do /*0x6422f7*/
    {
      v14 = 0; /*0x6421f4*/
      if ( Width > 0 ) /*0x6421f8*/
      {
        do /*0x6422de*/
        {
          v55 = v14; /*0x64220b*/
          v56[0] = v42; /*0x64220f*/
          Pixel = XSurface::GetPixel(&v61, &v55); /*0x642213*/
          v54[0] = v14; /*0x64222c*/
          v16 = ((unsigned __int8)(Pixel >> g_BitShift_Red) << g_BitShift_Green_0) & 0xF0; /*0x642248*/
          v17 = ((unsigned __int8)(Pixel >> g_BitMask_Green) << g_BitMask_Blue) & 0xF0; /*0x64225c*/
          v54[1] = v42; /*0x642268*/
          v18 = ((unsigned __int8)(Pixel >> g_BitShift_Blue) << g_BitMask_Red) & 0xF0; /*0x64227f*/
          XSurface::SetPixel( /*0x6422b5*/
            &v61,
            v54,
            (v18 >> g_BitMask_Red << g_BitShift_Blue)
          | (v17 >> g_BitMask_Blue << g_BitMask_Green)
          | (v16 >> g_BitShift_Green_0 << g_BitShift_Red));
          v19 = v17 | (16 * v16) | (v18 >> 4); /*0x6422c6*/
          v20 = v49[v19]; /*0x6422c8*/
          if ( !v20 ) /*0x6422cd*/
            ++Block; /*0x6422cf*/
          ++v14; /*0x6422d4*/
          v49[v19] = v20 + 1; /*0x6422d5*/
          Width = v61.Width; /*0x6422d8*/
        }
        while ( v14 < v61.Width ); /*0x6422de*/
        v12 = v49; /*0x6422e4*/
      }
      ++v42; /*0x6422f3*/
    }
    while ( v42 < v61.Height ); /*0x6422f7*/
  }
  DSurface::Unlock((DSurface *)&v61); /*0x642301*/
  v21 = a2; /*0x642306*/
  v22 = __2_YAPAXI_Z(2 * a2); /*0x642311*/
  Blocka = (unsigned short *)v22; /*0x642319*/
  v45 = 0; /*0x64231f*/
  if ( a2 > 0 ) /*0x642327*/
  {
    v43 = (unsigned short *)v22; /*0x642329*/
    do /*0x642370*/
    {
      v23 = -1; /*0x64232d*/
      v24 = 0; /*0x642330*/
      v25 = 0; /*0x642332*/
      v26 = (int *)v12; /*0x642334*/
      do /*0x642349*/
      {
        if ( *v26 > v24 ) /*0x64233a*/
        {
          v24 = *v26; /*0x64233c*/
          v23 = v25; /*0x64233e*/
        }
        ++v25; /*0x642340*/
        ++v26; /*0x642341*/
      }
      while ( v25 < 4096 ); /*0x642349*/
      if ( v23 == -1 ) /*0x64234e*/
        break; /*0x64234e*/
      *((unsigned int *)v12 + v23) = 0; /*0x642358*/
      *v43 = v23; /*0x642360*/
      ++v45; /*0x642368*/
      ++v43; /*0x64236c*/
    }
    while ( v45 < a2 ); /*0x642370*/
  }
  v53 = (unsigned char *)__2_YAPAXI_Z(v61.Height * v61.Width); /*0x642384*/
  v51 = v53; /*0x642388*/
  DSurface::Lock((DSurface *)&v61, 0, 0); /*0x642396*/
  v44 = 0; /*0x64239f*/
  if ( v61.Height > 0 ) /*0x6423a9*/
  {
    v27 = v61.Width; /*0x6423af*/
    while ( 1 ) /*0x6423b3*/
    {
      v28 = 0; /*0x6423b3*/
      v52 = 0; /*0x6423b7*/
      if ( v27 > 0 ) /*0x6423bb*/
        break; /*0x6423bb*/
LABEL_37:
      if ( ++v44 >= v61.Height ) /*0x642529*/
        goto LABEL_38; /*0x642529*/
    }
    while ( 1 ) /*0x6423c1*/
    {
      v57 = v28; /*0x6423c1*/
      v58 = v44; /*0x6423cd*/
      v29 = XSurface::GetPixel(&v61, &v57); /*0x6423d6*/
      v30 = 0; /*0x6423ed*/
      v46 = -1; /*0x6423ef*/
      v50 = 0xFFFF; /*0x6423f7*/
      LOBYTE(v55) = (unsigned __int8)(v29 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x642408*/
      BYTE1(v55) = (unsigned __int8)(v29 >> g_BitMask_Green) << g_BitMask_Blue; /*0x642429*/
      BYTE2(v55) = (unsigned __int8)(v29 >> g_BitShift_Blue) << g_BitMask_Red; /*0x642431*/
      if ( v21 > 0 ) /*0x642435*/
      {
        v31 = Blocka; /*0x642447*/
        v32 = (unsigned __int8)v55; /*0x642451*/
        v54[0] = (((v55) >> 8) & 0xFF); /*0x642460*/
        while ( 1 ) /*0x642490*/
        {
          v33 = 16 * (*v31 & 0xF) - (((v55) >> 16) & 0xFF); /*0x642490*/
          v34 = ((((v33) >> 32) & 0xFFFFFFFFu) ^ v33) - (((v33) >> 32) & 0xFFFFFFFFu) + abs32((((unsigned __int16)*v31 >> 4) & 0xF0) - v32); /*0x642499*/
          v35 = (*v31 & 0xF0) - v54[0]; /*0x6424a4*/
          v36 = ((((v35) >> 32) & 0xFFFFFFFFu) ^ v35) - (((v35) >> 32) & 0xFFFFFFFFu) + v34; /*0x6424a9*/
          if ( !v36 ) /*0x6424ab*/
            break; /*0x6424ab*/
          if ( v36 < v50 ) /*0x6424b1*/
          {
            v50 = v36; /*0x6424b3*/
            v46 = v30; /*0x6424b7*/
          }
          ++v30; /*0x6424c2*/
          ++v31; /*0x6424c3*/
          if ( v30 >= a2 ) /*0x6424c8*/
          {
            v37 = v46; /*0x6424ca*/
            goto LABEL_31; /*0x6424ce*/
          }
          v32 = (unsigned __int8)v55; /*0x642466*/
        }
        v37 = v30; /*0x6424d0*/
LABEL_31:
        if ( v37 != -1 && v37 < 256 ) /*0x6424dc*/
        {
          v21 = a2; /*0x6424f3*/
          goto LABEL_36; /*0x6424f3*/
        }
        v21 = a2; /*0x6424de*/
      }
      (v37) = ((v37) & ~0xFF) | ((0) & 0xFF); /*0x6424ed*/
LABEL_36:
      *v51 = v37; /*0x6424fa*/
      v27 = v61.Width; /*0x642500*/
      ++v51; /*0x642505*/
      v28 = ++v52; /*0x64250d*/
      if ( v52 >= v61.Width ) /*0x642514*/
        goto LABEL_37; /*0x642514*/
    }
  }
LABEL_38:
  DSurface::Unlock((DSurface *)&v61); /*0x64252f*/
  v38 = 2 * v21 + 12 + v61.Height * v61.Width; /*0x642545*/
  v54[0] = 2 * v21 + 12; /*0x642547*/
  v39 = (int *)__2_YAPAXI_Z(v38); /*0x642551*/
  *v39 = v61.Width; /*0x64255b*/
  v39[1] = v61.Height; /*0x642562*/
  v39[2] = v21; /*0x64256a*/
  v40 = v54[0]; /*0x642570*/
  qmemcpy(v39 + 3, Blocka, 2 * v21); /*0x642577*/
  qmemcpy((char *)v39 + v40, v53, v61.Height * v61.Width); /*0x642595*/
  __3_YAXPAX_Z(Blocka); /*0x6425a3*/
  __3_YAXPAX_Z(v53); /*0x6425ad*/
  __3_YAXPAX_Z(v49); /*0x6425b7*/
  *(unsigned int *)a3 = v38; /*0x6425c9*/
  Debug::Log(); /*0x6425cb*/
  DSurface::Destroy((DSurface *)&v61); /*0x6425d7*/
  return (int)v39; /*0x64213f*/

}
}
// 0x661350
namespace gamemd {  // G42.18c ns repair
int Palette::CalcColorDistance(unsigned char * a2, void *a2_2)
{

  int v2; // esi
  v2 = (*((unsigned char *)&(a2_2->u32_8))) - *(unsigned int *)(a2_2); /*0x661360*/
  if ( v2 < 0 ) /*0x661362*/
    v2 = *(unsigned int *)(a2_2) - (*((unsigned char *)&((&a2_2->m_Colors)[0]))); /*0x661364*/
  int v3; // edx
  v3 = (((unsigned char *)&(a2_2->m_Colors[0]))[1]) - a2_2[1]; /*0x661370*/
  if ( v3 < 0 ) /*0x661372*/
    v3 = a2_2[1] - (((unsigned char *)&((&a2_2->m_Colors)[0]))[1]); /*0x661374*/
  int v4; // eax
  v4 = (((unsigned char *)&(a2_2->m_Colors[0]))[2]) - a2_2[2]; /*0x661382*/
  if ( v4 < 0 ) /*0x661384*/
    v4 = a2_2[2] - (((unsigned char *)&((&a2_2->m_Colors)[0]))[2]); /*0x661386*/
  return 3 * v4 + 2 * (v2 + 2 * v3); /*0x66138e*/
}
}  // G42.18c ns repair
// 0x626200
namespace gamemd {  // G42.18c ns repair
int Palette::FindClosestColor(Palette *a2, void *a2_1)
{

  int v2 = 0; // ebx /*0x626208*/
  int v8; // [esp+10h] [ebp-4h]
  v8 = 0; /*0x62620b*/
  int v3 = -1; // esi /*0x62620f*/
  do /*0x626237*/
  {
    uint8_t *v7; // [esp-4h] [ebp-18h]
    v7 = (uint8_t *)this; /*0x626218*/
    this += 3; /*0x626219*/
    int v5; // eax
    v5 = Palette::CalcColorDistance((unsigned char *)(a2), v7); /*0x62621c*/
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
}  // G42.18c ns repair
// 0x632BE0
namespace gamemd {  // G42.18c ns repair
unsigned char * Palette::ConvertIndices(int a2)
{

  int v3; // ebx
  unsigned short *v4; // eax
  unsigned short *v5; // esi
  __int16 *v6; // edi

  LOBYTE(this->m_Colors[0]) = 0; /*0x632be9*/
  v3 = Hash_Check_5C61E0(); /*0x632bf1*/
  v4 = Hash_Check(); /*0x632bf3*/
  if ( v3 <= 0 ) /*0x632bfa*/
    return this; /*0x632c31*/
  v5 = v4; /*0x632c02*/
  v6 = (__int16 *)this->m_Colors + 1; /*0x632c04*/
  do /*0x632c23*/
  {
    LOWORD(v4) = *v5; /*0x632c07*/
    *v6 = ShiftBigIntAndScan(&MEMORY[0xA8EB00].?[1], a2, (int)v4, 64); /*0x632c19*/
    ++v5; /*0x632c1c*/
    ++v6; /*0x632c1f*/
    --v3; /*0x632c22*/
  }
  while ( v3 ); /*0x632c23*/
  return this; /*0x632c2b*/

}
}
// 0x72B820
int Palette::LoadFile(char * Source)
{
  if ( dword_B0FBA0 ) /*0x72b82b*/
  {
    (**(void (***)(int, int))dword_B0FBA0)(dword_B0FBA0, 1); /*0x72b831*/
    dword_B0FBA0 = 0; /*0x72b833*/
  }
  if ( dword_B0FB9C ) /*0x72b844*/
  {
    operator delete((void *)(dword_B0FB9C)); /*0x72b847*/
    dword_B0FB9C = 0; /*0x72b84f*/
  }
  return LoadPaletteSimple(Source, &dword_B0FB9C, &dword_B0FBA0); /*0x72b86a*/
}