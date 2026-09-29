// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Font_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/FogOfWar_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/FoggedObject_e4.hpp"
#include "e4/classes/FoggedObjectClass_e4.hpp"
#include "e4/classes/FootClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/TeamClass_e4.hpp"
#include "e4/classes/Frame_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/Team_e4.hpp"

// 0x4346C0
namespace gamemd {
int Font::GetGlyphDataForChar(AbstractClass * aP1)
{
  unsigned int *Font_field_04; // ecx
  int result; // eax
  int v4; // edx

  Font_field_04 = (unsigned int *)this->Font_field_04; /*0x4346c0*/
  result = 0; /*0x4346c3*/
  if ( Font_field_04 ) /*0x4346c7*/
  {
    v4 = *(uint16_t *)(Font_field_04[6] + 2 * aP1); /*0x4346da*/
    if ( (unsigned short)v4 ) /*0x4346e2*/
      return Font_field_04[7] + (v4 - 1) * Font_field_04[5]; /*0x4346eb*/
  }
  return result; /*0x4346ee*/
}
} // namespace gamemd
// 0x434CD0
namespace gamemd {
int Font::Print(AbstractClass * aP0, AbstractClass * aP1, AbstractClass * aP2, int aP1a, AbstractClass * aP4, AbstractClass * aP5, AbstractClass * aP6, AbstractClass * aP7, AbstractClass * aP8, AbstractClass * aP9)
{
  AbstractClass * v10;
  int16_t v12; // ax
  AbstractClass * v13;
  int v14; // esi
  unsigned short *v15; // edx
  int v16; // ecx
  AbstractClass * v17;
  AbstractClass * v18;
  AbstractClass * v19;
  char v20; // bl
  int v21; // eax
  unsigned char *v22; // eax
  int v23; // eax
  uint8_t *v24; // eax
  int v25; // eax
  unsigned short *v26; // ecx
  AbstractClass * v27;
  AbstractClass * v28;
  int v29; // ecx
  AbstractClass * v30;
  char v31; // di
  int v32; // ecx
  int v33; // eax
  AbstractClass * v34;
  unsigned short *v35; // ecx
  AbstractClass * v36;
  AbstractClass * v37;
  AbstractClass * v38;
  char v39; // di
  int v40; // ecx
  int v41; // eax
  int16_t v43; // [esp+10h] [ebp-30h]
  char v44[4]; // [esp+14h] [ebp-2Ch] BYREF
  int v45; // [esp+18h] [ebp-28h]
  AbstractClass * xLeft;
  int v47; // [esp+20h] [ebp-20h]
  unsigned short *v48; // [esp+24h] [ebp-1Ch]
  unsigned short *v49; // [esp+28h] [ebp-18h]
  AbstractClass * v50;
  int16_t v51; // [esp+30h] [ebp-10h] BYREF
  uint8_t v52; // [esp+32h] [ebp-Eh]
  int16_t v53; // [esp+38h] [ebp-8h] BYREF
  uint8_t v54; // [esp+3Ah] [ebp-6h]
  int16_t v55; // [esp+58h] [ebp+18h]

  v10 = (gamemd::AbstractClass *)((unsigned short)(0));
  if ( !aP0 ) /*0x434cdf*/
    return 0; /*0x434cdf*/
  aP2 = aP2; /*0x434ce5*/
  if ( !aP2 ) /*0x434ceb*/
    return 0; /*0x43530a*/
  FontRenderer::InitContext(aP1); /*0x434cf8*/
  Field::Int_Set(aP1a); /*0x434d04*/
  v12 = 0; /*0x434d0f*/
  v13 = 0; /*0x434d11*/
  v14 = aP0->u32_24; /*0x434d13*/
  IDA_HIWORD(v15) = IDA_HIWORD(aP2); /*0x434d17*/
  v16 = 0; /*0x434d19*/
  v47 = 0; /*0x434d1b*/
  IDA_LOWORD(v15) = *aP2; /*0x434d1f*/
  v50 = 0; /*0x434d22*/
  v48 = 0; /*0x434d29*/
  v45 = 0; /*0x434d2d*/
  v49 = v15; /*0x434d31*/
  if ( (unsigned short)v15 ) /*0x434d35*/
  {
  LABEL_4:
    switch ( (int16_t)v49 ) /*0x434d59*/
    {
      case 9: /*0x434d59*/
        v10 = aP0->q028 + v10 - (aP0->q028 + v10) % aP0->q028; /*0x434ef7*/
        goto LABEL_55; /*0x434ef9*/
      case 10: /*0x434d59*/
      case 13: /*0x434d59*/
        if ( v12 == 13 ) /*0x434d64*/
          goto LABEL_23; /*0x434d64*/
        v17 = 0; /*0x434d6e*/
        if ( aP5 > v10 ) /*0x434d72*/
        {
          if ( (aP7 & 1) != 0 ) /*0x434d7b*/
          {
            v17 = (gamemd::AbstractClass *)((aP5 - v10) / 2);
          }
          else if ( (aP7 & 2) != 0 ) /*0x434d8b*/
          {
            v17 = (gamemd::AbstractClass *)(aP5 - v10);
          }
        }
        xLeft = aP1a + v17; /*0x434d97*/
        if ( aP2 >= aP2 ) /*0x434da1*/
          goto LABEL_20; /*0x434da1*/
        v18 = aP8; /*0x434da7*/
        v19 = aP8 - v45 - 1; /*0x434db7*/
        v20 = v45 - aP8 + aP9 + 1; /*0x434dba*/
        while ( 2 ) /*0x434dc4*/
        {
          ++v20; /*0x434dc4*/
          --v19; /*0x434dca*/
          ++v45; /*0x434dcb*/
          v21 = v14; /*0x434dd1*/
          if ( !v18 ) /*0x434dd3*/
            goto LABEL_18; /*0x434dd3*/
          if ( v45 >= v18 ) /*0x434ddd*/
            goto LABEL_73; /*0x434ddd*/
          if ( v19 < aP9 ) /*0x434de7*/
          {
            v22 = Palette::6BitTo16Bit( /*0x434e2e*/
                    v44,
                    (uint8_t)((uint16_t)v14 >> g_BitShift_Red) << g_BitShift_Green_0,
                    (uint8_t)((uint16_t)v14 >> g_BitMask_Green) << g_BitMask_Blue,
                    (uint8_t)((uint16_t)v14 >> g_BitShift_Blue) << g_BitMask_Red);
            v51 = *(unsigned short *)v22; /*0x434e3b*/
            v52 = v22[2]; /*0x434e4c*/
            Color::Lerp((uint8_t *)&v51, v20 * (255 / aP9), (uint8_t *)&byte_A80220); /*0x434e59*/
            v21 = PackRGB565(v52); /*0x434e7c*/
          }
  LABEL_18:
          if ( v21 == -1 ) /*0x434e84*/
            goto LABEL_73; /*0x434e84*/
          IDA_LOWORD(v18) = *aP2++; /*0x434e8e*/
          xLeft = FontClass::RenderGlyph(v18, xLeft, aP4, v21); /*0x434ea6*/
          if ( aP2 < aP2 ) /*0x434eb0*/
          {
            v18 = aP8; /*0x434dc0*/
            continue; /*0x434dc0*/
          }
          break;
        }
  LABEL_20:
        v10 = 0; /*0x434ebe*/
        v13 = 0; /*0x434ec0*/
        v23 = aP0->u32_1C; /*0x434ec2*/
        v47 += v23; /*0x434ec7*/
        if ( aP6 ) /*0x434ed1*/
        {
          if ( v47 >= aP6 ) /*0x434ed7*/
            goto LABEL_73; /*0x434ed7*/
        }
        aP4 += v23; /*0x434edd*/
  LABEL_23:
        ++aP2; /*0x434ee1*/
        goto LABEL_55; /*0x434ee4*/
      case 32: /*0x434d59*/
        v50 = v10; /*0x434f02*/
        v48 = aP2; /*0x434f06*/
        goto LABEL_26; /*0x434f06*/
      default:
  LABEL_26:
        v24 = (uint8_t *)Font::GetGlyphDataForChar(v49); /*0x434f0a*/
        if ( !v24 ) /*0x434f1a*/
        {
          v24 = (uint8_t *)Font::GetGlyphDataForChar(63); /*0x434f22*/
          if ( !v24 ) /*0x434f29*/
            goto LABEL_55; /*0x434f29*/
        }
        ++v13; /*0x434f37*/
        v25 = *v24 + aP0->u32_2C; /*0x434f3b*/
        v10 += v25; /*0x434f41*/
        if ( !aP5 || v10 <= aP5 ) /*0x434f4d*/
          goto LABEL_55; /*0x434f4d*/
        v26 = v48; /*0x434f53*/
        if ( v48 ) /*0x434f59*/
        {
          if ( v13 > 1 ) /*0x434f5e*/
          {
            v10 = (gamemd::AbstractClass *)((int)((gamemd::AbstractClass *)(v50)));
            aP2 = (gamemd::AbstractClass *)(v48);
          }
        }
        else if ( v13 > 1 ) /*0x434f6d*/
        {
          v10 -= v25; /*0x434f6f*/
          --aP2; /*0x434f78*/
        }
        v27 = 0; /*0x434f80*/
        if ( aP5 > v10 ) /*0x434f84*/
        {
          if ( (aP7 & 1) != 0 ) /*0x434f8d*/
          {
            v27 = (gamemd::AbstractClass *)((aP5 - v10) / 2);
          }
          else if ( (aP7 & 2) != 0 ) /*0x434f9d*/
          {
            v27 = (gamemd::AbstractClass *)(aP5 - v10);
          }
        }
        xLeft = aP1a + v27; /*0x434fa9*/
        if ( aP2 >= aP2 ) /*0x434fb3*/
          goto LABEL_50; /*0x434fb3*/
        v28 = aP8; /*0x434fb9*/
        v29 = v45; /*0x434fbd*/
        v30 = aP8 - v45 - 1; /*0x434fcb*/
        v31 = v45 - aP8 + aP9 + 1; /*0x434fce*/
        break; /*0x434fd2*/
    }
    while ( 1 ) /*0x434fdc*/
    {
      v32 = v29 + 1; /*0x434fdc*/
      ++v31; /*0x434fdd*/
      --v30; /*0x434fde*/
      v45 = v32; /*0x434fdf*/
      v33 = v14; /*0x434fe5*/
      if ( v28 ) /*0x434fe7*/
      {
        if ( v32 >= v28 ) /*0x434fef*/
          break; /*0x434fef*/
        if ( v30 < aP9 ) /*0x434ff9*/
        {
          IDA_LOBYTE(v43) = (uint8_t)((uint16_t)v14 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x435028*/
          IDA_HIBYTE(v43) = (uint8_t)((uint16_t)v14 >> g_BitMask_Green) << g_BitMask_Blue; /*0x435035*/
          v53 = v43; /*0x43504b*/
          v54 = (uint8_t)((uint16_t)v14 >> g_BitShift_Blue) << g_BitMask_Red; /*0x435054*/
          Color::Lerp((uint8_t *)&v53, v31 * (255 / aP9), (uint8_t *)&byte_A80220); /*0x435066*/
          IDA_HIWORD(v32) = IDA_HIWORD(g_BitShift_Red); /*0x4350b2*/
          v33 = ((uint8_t)v53 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x4350ba*/
              | (v54 >> g_BitMask_Red << g_BitShift_Blue)
              | (IDA_HIBYTE(v53) >> g_BitMask_Blue << g_BitMask_Green);
        }
      }
      if ( v33 == -1 ) /*0x4350bf*/
        break; /*0x4350bf*/
      IDA_LOWORD(v32) = *aP2++; /*0x4350c9*/
      xLeft = FontClass::RenderGlyph(v32, xLeft, aP4, v33); /*0x4350e1*/
      if ( aP2 >= aP2 ) /*0x4350eb*/
      {
        v26 = (unsigned short *)(v48);
  LABEL_50:
        if ( aP2 == v26 ) /*0x4350f9*/
        {
          v48 = (unsigned short *)((gamemd::AbstractClass *)(0));
          ++aP2; /*0x435103*/
        }
        v10 = (gamemd::AbstractClass *)((int)((gamemd::AbstractClass *)(0)));
        v13 = (gamemd::AbstractClass *)((int)((gamemd::AbstractClass *)(0)));
        v34 = (gamemd::AbstractClass *)((int)((gamemd::AbstractClass *)(aP0->u32_1C)));
        v47 += v34; /*0x435117*/
        if ( aP6 && v47 >= aP6 ) /*0x435127*/
          break; /*0x435127*/
        aP4 += v34; /*0x435129*/
  LABEL_55:
        v12 = (int16_t)v49; /*0x43512d*/
        v35 = aP2 + 1; /*0x435135*/
        aP2 = v35; /*0x435138*/
        IDA_LOWORD(v35) = *v35; /*0x43513c*/
        v49 = v35; /*0x435142*/
        if ( !(unsigned short)v35 ) /*0x435146*/
        {
          v16 = v45; /*0x435163*/
          goto LABEL_59; /*0x435163*/
        }
        goto LABEL_4; /*0x435146*/
      }
      v28 = aP8; /*0x434fd4*/
      v29 = v45; /*0x434fd8*/
    }
  }
  else
  {
  LABEL_59:
    v36 = 0; /*0x435167*/
    if ( aP5 > v10 ) /*0x43516f*/
    {
      if ( (aP7 & 1) != 0 ) /*0x435178*/
      {
        v36 = (gamemd::AbstractClass *)((aP5 - v10) / 2);
      }
      else if ( (aP7 & 2) != 0 ) /*0x435188*/
      {
        v36 = (gamemd::AbstractClass *)(aP5 - v10);
      }
    }
    xLeft = aP1a + v36; /*0x435194*/
    if ( aP2 < aP2 ) /*0x43519e*/
    {
      v37 = aP8; /*0x4351a4*/
      v38 = aP8 - v16 - 1; /*0x4351b2*/
      v39 = v16 - aP8 + aP9 + 1; /*0x4351b5*/
      while ( 1 ) /*0x4351b9*/
      {
        v40 = v16 + 1; /*0x4351b9*/
        ++v39; /*0x4351ba*/
        --v38; /*0x4351bb*/
        v45 = v40; /*0x4351bc*/
        v41 = v14; /*0x4351c2*/
        if ( v37 ) /*0x4351c4*/
        {
          if ( v40 >= v37 ) /*0x4351cc*/
            break; /*0x4351cc*/
          if ( v38 < aP9 ) /*0x4351d6*/
          {
            IDA_LOBYTE(v55) = (uint8_t)((uint16_t)v14 >> g_BitShift_Red) << g_BitShift_Green_0; /*0x435205*/
            IDA_HIBYTE(v55) = (uint8_t)((uint16_t)v14 >> g_BitMask_Green) << g_BitMask_Blue; /*0x435212*/
            v53 = v55; /*0x435228*/
            v54 = (uint8_t)((uint16_t)v14 >> g_BitShift_Blue) << g_BitMask_Red; /*0x435231*/
            Color::Lerp((uint8_t *)&v53, v39 * (255 / aP9), (uint8_t *)&byte_A80220); /*0x435243*/
            IDA_HIWORD(v40) = IDA_HIWORD(g_BitShift_Red); /*0x43528f*/
            v41 = ((uint8_t)v53 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x435297*/
                | (v54 >> g_BitMask_Red << g_BitShift_Blue)
                | (IDA_HIBYTE(v53) >> g_BitMask_Blue << g_BitMask_Green);
          }
        }
        if ( v41 == -1 ) /*0x43529c*/
          break; /*0x43529c*/
        IDA_LOWORD(v40) = *aP2++; /*0x4352a2*/
        xLeft = FontClass::RenderGlyph(v40, xLeft, aP4, v41); /*0x4352ba*/
        if ( aP2 >= aP2 ) /*0x4352c4*/
          break; /*0x4352c4*/
        v16 = v45; /*0x4352c6*/
        v37 = aP8; /*0x4352ca*/
      }
    }
  }
  LABEL_73:
  BufferIO::Cleanup(aP1); /*0x4352ed*/
  return 1; /*0x435157*/
}
} // namespace gamemd