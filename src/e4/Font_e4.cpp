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
#include "e4/classes/RadarClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/Color_e4.hpp"
#include "e4/classes/BufferIO_e4.hpp"
#include "e4/classes/Field_e4.hpp"
#include "e4/classes/FontClass_e4.hpp"
#include "e4/classes/FontRenderer_e4.hpp"
#include "e4/classes/Palette_e4.hpp"

// 0x4346C0
namespace gamemd {  // G42.18 ns repair
int Font::GetGlyphDataForChar(uint16_t aP1)
{

  unsigned int *Font_field_04; // ecx
  Font_field_04 = (unsigned int *)this->Font_field_04; /*0x4346c0*/
  int result = 0; // eax /*0x4346c3*/
  if ( Font_field_04 ) /*0x4346c7*/
  {
    int v4; // edx
    v4 = *(uint16_t *)(Font_field_04[6] + 2 * aP1); /*0x4346da*/
    if ( (unsigned short)v4 ) /*0x4346e2*/
      return Font_field_04[7] + (v4 - 1) * Font_field_04[5]; /*0x4346eb*/
  }
  return result; /*0x4346ee*/
}  // G42.18 ns repair
} // namespace gamemd
// 0x434CD0
namespace gamemd {
int Font::Print(AbstractClass * aP0, AbstractClass * aP1, AbstractClass * aP2, int aP1a, AbstractClass * aP4, AbstractClass * aP5, AbstractClass * aP6, AbstractClass * aP7, AbstractClass * aP8, AbstractClass * aP9)
{

  int result; // eax
  int v11; // edi
  unsigned __int16 *v12; // ebp
  __int16 v13; // ax
  int v14; // ebx
  int v15; // esi
  unsigned short *v16; // edx
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  int v20; // edi
  char v21; // bl
  int v22; // eax
  unsigned char *v23; // eax
  unsigned int *v24; // ecx
  int v25; // eax
  unsigned __int8 *GlyphDataForChar; // eax
  int v27; // eax
  unsigned short *v28; // ecx
  int v29; // eax
  int v30; // edx
  int v31; // ecx
  int v32; // ebx
  char v33; // di
  int v34; // ecx
  int v35; // eax
  int v36; // eax
  unsigned short *v37; // ecx
  int v38; // eax
  int v39; // edx
  int v40; // ebx
  char v41; // di
  int v42; // ecx
  int v43; // eax
  unsigned __int16 v44; // [esp-10h] [ebp-50h]
  unsigned __int16 v45; // [esp-10h] [ebp-50h]
  unsigned __int16 v46; // [esp-10h] [ebp-50h]
  __int16 v47; // [esp+10h] [ebp-30h]
  char v48[4]; // [esp+14h] [ebp-2Ch] BYREF
  int v49; // [esp+18h] [ebp-28h]
  int xLeft; // [esp+1Ch] [ebp-24h]
  int v51; // [esp+20h] [ebp-20h]
  unsigned short *v52; // [esp+24h] [ebp-1Ch]
  unsigned short *v53; // [esp+28h] [ebp-18h]
  int v54; // [esp+2Ch] [ebp-14h]
  __int16 v55; // [esp+30h] [ebp-10h] BYREF
  unsigned __int8 v56; // [esp+32h] [ebp-Eh]
  __int16 v57; // [esp+38h] [ebp-8h] BYREF
  unsigned __int8 v58; // [esp+3Ah] [ebp-6h]
  __int16 v59; // [esp+58h] [ebp+18h]

  v11 = 0; /*0x434cdb*/
  if ( aP0 && (v12 = aP2) != 0 ) /*0x434ceb*/
  {
    FontRenderer::InitContext((unsigned int *)aP0, (int *)aP1); /*0x434cf8*/
    Field::Int_Set((unsigned int *)aP0, aP1a); /*0x434d04*/
    v13 = 0; /*0x434d0f*/
    v14 = 0; /*0x434d11*/
    v15 = *(unsigned __int16 *)(aP0 + 36); /*0x434d13*/
    HIWORD(v16) = HIWORD(aP2); /*0x434d17*/
    v17 = 0; /*0x434d19*/
    v51 = 0; /*0x434d1b*/
    LOWORD(v16) = *aP2; /*0x434d1f*/
    v54 = 0; /*0x434d22*/
    v52 = 0; /*0x434d29*/
    v49 = 0; /*0x434d2d*/
    v53 = v16; /*0x434d31*/
    if ( (unsigned short)v16 ) /*0x434d35*/
    {
LABEL_4:
      switch ( (__int16)v53 ) /*0x434d59*/
      {
        case 9: /*0x434d59*/
          v11 = aP0->q028 + v11 - (aP0->q028 + v11) % aP0->q028; /*0x434ef7*/
          goto LABEL_55; /*0x434ef9*/
        case 10: /*0x434d59*/
        case 13: /*0x434d59*/
          if ( v13 == 13 ) /*0x434d64*/
            goto LABEL_23; /*0x434d64*/
          v18 = 0; /*0x434d6e*/
          if ( aP5 > v11 ) /*0x434d72*/
          {
            if ( (aP7 & 1) != 0 ) /*0x434d7b*/
            {
              v18 = (aP5 - v11) / 2; /*0x434d84*/
            }
            else if ( (aP7 & 2) != 0 ) /*0x434d8b*/
            {
              v18 = aP5 - v11; /*0x434d8f*/
            }
          }
          xLeft = aP1a + v18; /*0x434d97*/
          if ( v12 >= aP2 ) /*0x434da1*/
            goto LABEL_20; /*0x434da1*/
          v19 = aP8; /*0x434da7*/
          v20 = aP8 - v49 - 1; /*0x434db7*/
          v21 = v49 - aP8 + aP9 + 1; /*0x434dba*/
          while ( 2 ) /*0x434dc4*/
          {
            ++v21; /*0x434dc4*/
            --v20; /*0x434dca*/
            ++v49; /*0x434dcb*/
            v22 = v15; /*0x434dd1*/
            if ( !v19 ) /*0x434dd3*/
              goto LABEL_18; /*0x434dd3*/
            if ( v49 >= v19 ) /*0x434ddd*/
              goto LABEL_73; /*0x434ddd*/
            if ( v20 < aP9 ) /*0x434de7*/
            {
              v23 = Palette::SixBitTo16Bit( /*0x434e2e*/
                      v48,
                      (unsigned __int8)((unsigned __int16)v15 >> g_BitShift_Red) << g_BitShift_Green_0,
                      (unsigned __int8)((unsigned __int16)v15 >> g_BitMask_Green) << g_BitMask_Blue,
                      (unsigned __int8)((unsigned __int16)v15 >> g_BitShift_Blue) << g_BitMask_Red);
              v55 = *(unsigned short *)v23; /*0x434e3b*/
              v56 = v23[2]; /*0x434e4c*/
              Color::Lerp((unsigned __int8 *)&v55, v21 * (255 / aP9), (unsigned __int8 *)&stru_A80220); /*0x434e59*/
              v22 = PackRGB565((unsigned __int8)v55, (((v55) >> 8) & 0xFF), v56); /*0x434e7c*/
            }
LABEL_18:
            if ( v22 == -1 ) /*0x434e84*/
              goto LABEL_73; /*0x434e84*/
            v44 = *v12++; /*0x434e99*/
            xLeft = (aP0)->RenderGlyph(v44, xLeft, aP4, v22); /*0x434ea6*/
            if ( v12 < aP2 ) /*0x434eb0*/
            {
              v19 = aP8; /*0x434dc0*/
              continue; /*0x434dc0*/
            }
            break;
          }
LABEL_20:
          v24 = (unsigned int *)aP0; /*0x434eb6*/
          v11 = 0; /*0x434ebe*/
          v14 = 0; /*0x434ec0*/
          v25 = aP0->referenceCount; /*0x434ec2*/
          v51 += v25; /*0x434ec7*/
          if ( aP6 && v51 >= aP6 ) /*0x434ed7*/
            goto LABEL_57; /*0x434ed7*/
          aP4 += v25; /*0x434edd*/
LABEL_23:
          ++v12; /*0x434ee1*/
          goto LABEL_55; /*0x434ee4*/
        case 32: /*0x434d59*/
          v54 = v11; /*0x434f02*/
          v52 = aP2; /*0x434f06*/
          goto LABEL_26; /*0x434f06*/
        default:
LABEL_26:
          GlyphDataForChar = (unsigned __int8 *)Font::GetGlyphDataForChar((unsigned int *)aP0, (unsigned __int16)v53); /*0x434f0a*/
          if ( !GlyphDataForChar ) /*0x434f1a*/
          {
            GlyphDataForChar = (unsigned __int8 *)Font::GetGlyphDataForChar((unsigned int *)aP0, 0x3Fu); /*0x434f22*/
            if ( !GlyphDataForChar ) /*0x434f29*/
              goto LABEL_55; /*0x434f29*/
          }
          ++v14; /*0x434f37*/
          v27 = *GlyphDataForChar + aP0->SuperClass_field_0x2C; /*0x434f3b*/
          v11 += v27; /*0x434f41*/
          if ( !aP5 || v11 <= aP5 ) /*0x434f4d*/
            goto LABEL_55; /*0x434f4d*/
          v28 = v52; /*0x434f53*/
          if ( v52 ) /*0x434f59*/
          {
            if ( v14 > 1 ) /*0x434f5e*/
            {
              v11 = v54; /*0x434f60*/
              aP2 = v52; /*0x434f64*/
            }
          }
          else if ( v14 > 1 ) /*0x434f6d*/
          {
            v11 -= v27; /*0x434f6f*/
            --aP2; /*0x434f78*/
          }
          v29 = 0; /*0x434f80*/
          if ( aP5 > v11 ) /*0x434f84*/
          {
            if ( (aP7 & 1) != 0 ) /*0x434f8d*/
            {
              v29 = (aP5 - v11) / 2; /*0x434f96*/
            }
            else if ( (aP7 & 2) != 0 ) /*0x434f9d*/
            {
              v29 = aP5 - v11; /*0x434fa1*/
            }
          }
          xLeft = aP1a + v29; /*0x434fa9*/
          if ( v12 >= aP2 ) /*0x434fb3*/
            goto LABEL_50; /*0x434fb3*/
          v30 = aP8; /*0x434fb9*/
          v31 = v49; /*0x434fbd*/
          v32 = aP8 - v49 - 1; /*0x434fcb*/
          v33 = v49 - aP8 + aP9 + 1; /*0x434fce*/
          break; /*0x434fd2*/
      }
      while ( 1 ) /*0x434fdc*/
      {
        v34 = v31 + 1; /*0x434fdc*/
        ++v33; /*0x434fdd*/
        --v32; /*0x434fde*/
        v49 = v34; /*0x434fdf*/
        v35 = v15; /*0x434fe5*/
        if ( v30 ) /*0x434fe7*/
        {
          if ( v34 >= v30 ) /*0x434fef*/
            break; /*0x434fef*/
          if ( v32 < aP9 ) /*0x434ff9*/
          {
            (v47) = ((v47) & ~0xFF) | (((unsigned __int8)((unsigned __int16)v15 >> g_BitShift_Red) << g_BitShift_Green_0) & 0xFF); /*0x435028*/
            (v47) = ((v47) & ~(0xFF << 8)) | ((((unsigned __int8)((unsigned __int16)v15 >> g_BitMask_Green) << g_BitMask_Blue) & 0xFF) << 8); /*0x435035*/
            v57 = v47; /*0x43504b*/
            v58 = (unsigned __int8)((unsigned __int16)v15 >> g_BitShift_Blue) << g_BitMask_Red; /*0x435054*/
            Color::Lerp((unsigned __int8 *)&v57, v33 * (255 / aP9), (unsigned __int8 *)&stru_A80220); /*0x435066*/
            v35 = ((unsigned __int8)v57 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x4350ba*/
                | (v58 >> g_BitMask_Red << g_BitShift_Blue)
                | ((((v57) >> 8) & 0xFF) >> g_BitMask_Blue << g_BitMask_Green);
          }
        }
        if ( v35 == -1 ) /*0x4350bf*/
          break; /*0x4350bf*/
        v45 = *v12++; /*0x4350d4*/
        xLeft = (aP0)->RenderGlyph(v45, xLeft, aP4, v35); /*0x4350e1*/
        if ( v12 >= aP2 ) /*0x4350eb*/
        {
          v28 = v52; /*0x4350f1*/
LABEL_50:
          if ( aP2 == v28 ) /*0x4350f9*/
          {
            v52 = 0; /*0x4350fb*/
            ++v12; /*0x435103*/
          }
          v24 = (unsigned int *)aP0; /*0x435106*/
          v11 = 0; /*0x43510e*/
          v14 = 0; /*0x435110*/
          v36 = aP0->referenceCount; /*0x435112*/
          v51 += v36; /*0x435117*/
          if ( aP6 && v51 >= aP6 ) /*0x435127*/
          {
LABEL_57:
            result = BufferIO::Cleanup(v24, aP1); /*0x43514d*/
            (result) = ((result) & ~0xFF) | ((1) & 0xFF); /*0x43515a*/
            return result; /*0x435160*/
          }
          aP4 += v36; /*0x435129*/
LABEL_55:
          v13 = (__int16)v53; /*0x43512d*/
          v37 = aP2 + 1; /*0x435135*/
          aP2 = v37; /*0x435138*/
          LOWORD(v37) = *v37; /*0x43513c*/
          v53 = v37; /*0x435142*/
          if ( !(unsigned short)v37 ) /*0x435146*/
          {
            v17 = v49; /*0x435163*/
            goto LABEL_59; /*0x435163*/
          }
          goto LABEL_4; /*0x435146*/
        }
        v30 = aP8; /*0x434fd4*/
        v31 = v49; /*0x434fd8*/
      }
    }
    else
    {
LABEL_59:
      v38 = 0; /*0x435167*/
      if ( aP5 > v11 ) /*0x43516f*/
      {
        if ( (aP7 & 1) != 0 ) /*0x435178*/
        {
          v38 = (aP5 - v11) / 2; /*0x435181*/
        }
        else if ( (aP7 & 2) != 0 ) /*0x435188*/
        {
          v38 = aP5 - v11; /*0x43518c*/
        }
      }
      xLeft = aP1a + v38; /*0x435194*/
      if ( v12 < aP2 ) /*0x43519e*/
      {
        v39 = aP8; /*0x4351a4*/
        v40 = aP8 - v17 - 1; /*0x4351b2*/
        v41 = v17 - aP8 + aP9 + 1; /*0x4351b5*/
        while ( 1 ) /*0x4351b9*/
        {
          v42 = v17 + 1; /*0x4351b9*/
          ++v41; /*0x4351ba*/
          --v40; /*0x4351bb*/
          v49 = v42; /*0x4351bc*/
          v43 = v15; /*0x4351c2*/
          if ( v39 ) /*0x4351c4*/
          {
            if ( v42 >= v39 ) /*0x4351cc*/
              break; /*0x4351cc*/
            if ( v40 < aP9 ) /*0x4351d6*/
            {
              (v59) = ((v59) & ~0xFF) | (((unsigned __int8)((unsigned __int16)v15 >> g_BitShift_Red) << g_BitShift_Green_0) & 0xFF); /*0x435205*/
              (v59) = ((v59) & ~(0xFF << 8)) | ((((unsigned __int8)((unsigned __int16)v15 >> g_BitMask_Green) << g_BitMask_Blue) & 0xFF) << 8); /*0x435212*/
              v57 = v59; /*0x435228*/
              v58 = (unsigned __int8)((unsigned __int16)v15 >> g_BitShift_Blue) << g_BitMask_Red; /*0x435231*/
              Color::Lerp((unsigned __int8 *)&v57, v41 * (255 / aP9), (unsigned __int8 *)&stru_A80220); /*0x435243*/
              v43 = ((unsigned __int8)v57 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x435297*/
                  | (v58 >> g_BitMask_Red << g_BitShift_Blue)
                  | ((((v57) >> 8) & 0xFF) >> g_BitMask_Blue << g_BitMask_Green);
            }
          }
          if ( v43 == -1 ) /*0x43529c*/
            break; /*0x43529c*/
          v46 = *v12++; /*0x4352ad*/
          xLeft = (aP0)->RenderGlyph(v46, xLeft, aP4, v43); /*0x4352ba*/
          if ( v12 >= aP2 ) /*0x4352c4*/
            break; /*0x4352c4*/
          v17 = v49; /*0x4352c6*/
          v39 = aP8; /*0x4352ca*/
        }
      }
    }
LABEL_73:
    result = BufferIO::Cleanup((unsigned int *)aP0, aP1); /*0x4352ed*/
    (result) = ((result) & ~0xFF) | ((1) & 0xFF); /*0x4352fe*/
  }
  else
  {
    (result) = ((result) & ~0xFF) | ((0) & 0xFF); /*0x43530a*/
  }
  return result; /*0x435157*/

}
} // namespace gamemd