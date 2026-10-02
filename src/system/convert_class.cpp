#include "system/convert_class.hpp"
#include "render/surface.hpp"
#include "render/palette.hpp"

namespace gamemd
{

DynamicVectorClass<ConvertClass*>& ConvertClass::Array = *(DynamicVectorClass<ConvertClass*>*)(nullptr);
DynamicVectorClass<LightConvertClass*>& LightConvertClass::Array = *(DynamicVectorClass<LightConvertClass*>*)(nullptr);

ConvertClass::ConvertClass(
    BytePalette const& palette,
    BytePalette const& palette2,
    DSurface* pSurface,
    std::size_t shadeCount,
    bool skipBlitters)
    : BytesPerPixel(0)
    , ShadeCount(shadeCount)
    , PaletteBuffer(nullptr)
    , PaletteMidpoint(nullptr)
    , SecondaryBuffer(nullptr)
    , CurrentZRemap(0)
    , HalfColorMask(0)
    , QuarterColorMask(0)
{
    (void)palette;
    (void)palette2;
    (void)pSurface;
    (void)skipBlitters;

    std::memset(Blitters, 0, sizeof(Blitters));
    std::memset(RLEBlitters, 0, sizeof(RLEBlitters));
    // TODO: build blitter lookup tables from palette
}

ConvertClass* ConvertClass::FindOrCreate(const char* pFilename)
{
    (void)pFilename;
    // TODO: search Array for matching convert, allocate if not found
    return nullptr;
}

void ConvertClass::CreateFromFile(const char* pFilename, BytePalette*& pPalette, ConvertClass*& pDestination)
{
    (void)pFilename;
    (void)pPalette;
    (void)pDestination;
    // TODO: load palette file, create ConvertClass
}

BlitterCore* ConvertClass::SelectPlainBlitter(BlitterFlags flags) const
{
    int idx = (int)((unsigned int)(flags));
    if (idx >= 0 && idx < 50)
        return Blitters[idx];
    return nullptr;
}

RLEBlitterCore* ConvertClass::SelectRLEBlitter(BlitterFlags flags) const
{
    int idx = (int)((unsigned int)(flags));
    if (idx >= 0 && idx < 39)
        return RLEBlitters[idx];
    return nullptr;
}

// --- LightConvertClass ---

LightConvertClass::LightConvertClass(
    BytePalette const& palette1,
    BytePalette const& palette2,
    DSurface* pSurface,
    int color_R,
    int color_G,
    int color_B,
    bool skipBlitters,
    uint8_t* pBuffer,
    std::size_t shadeCount)
    : ConvertClass(palette1, palette2, pSurface, shadeCount, skipBlitters)
    , UsedPalette1(&palette1)
    , UsedPalette2(&palette2)
    , LightConvertClass_field_buffer_190(nullptr)
    , UsageCount(0)
    , Color1((uint32_t)(color_R) | ((uint32_t)(color_G) << 8) | ((uint32_t)(color_B) << 16))
    , Color2(0)
    , Tinted(false)
{
    (void)color_B;
    (void)pBuffer;
    // TODO: initialize light-specific blitter data
}

} // namespace gamemd

#include "system/convert_class.hpp"
#include "core/ddraw_init.hpp"
#include "core/ddraw_init.hpp"
#include "core/ddraw_init.hpp"
#include "core/ddraw_init.hpp"
#include "e4/e4_globals_decls.hpp"
#include "core/ddraw_init.hpp"

namespace gamemd {

// --- ConvertClass ---

 ConvertClass::ConvertClass(const noinit_t&) noexcept {}

// --- LightConvertClass ---

// 0x556090
void LightConvertClass::UpdateColors(int red, int green, int blue, bool tinted) {
  int v6; // esi
  int v7; // eax
  int v8; // edi
  int v9; // edx
  int v10; // edi
  int v11; // ebp
  int v12; // edi
  int v13; // ebp
  unsigned short *v14; // edi
  int v15; // esi
  int v16; // ecx
  int v17; // edx
  int v18; // eax
  int v19; // ebp
  uint8_t *v20; // ecx
  int v21; // edi
  int v22; // esi
  int v23; // edx
  int v24; // edx
  unsigned short *v25; // ecx
  int v26; // [esp+10h] [ebp-28h]
  int v27; // [esp+14h] [ebp-24h]
  int v28; // [esp+18h] [ebp-20h]
  int v29; // [esp+1Ch] [ebp-1Ch]
  int v30; // [esp+20h] [ebp-18h]
  int v31; // [esp+24h] [ebp-14h]
  int v32; // [esp+28h] [ebp-10h]
  int v33; // [esp+2Ch] [ebp-Ch]
  int v34; // [esp+30h] [ebp-8h]
  int v35; // [esp+34h] [ebp-4h]
  unsigned short *v36; // [esp+3Ch] [ebp+4h]
  int v37; // [esp+40h] [ebp+8h]
  int v38; // [esp+44h] [ebp+Ch]
  int v39; // [esp+48h] [ebp+10h]

  v6 = (int)(((unsigned char *)(this) + 0x16C)); /*0x556098*/
  if ( v6 >= 1 )
  {
    if ( !((unsigned char *)(this) + 0x190) ) /*0x5560a8*/
      ((unsigned char *)(this) + 0x190) = &unk_829C20; /*0x5560b2*/
    v7 = red; /*0x5560bc*/
    if ( red == -1 )
    {
      v12 = blue; /*0x556115*/
      v11 = green; /*0x556119*/
    }
    else
    {
      if ( red >= 2000 ) /*0x5560ca*/
        v7 = 2000; /*0x5560cc*/
      v8 = green; /*0x5560d1*/
      v7 = v7 <= 0 ? 0 : v7;
      if ( green >= 2000 ) /*0x5560e5*/
        v8 = 2000; /*0x5560e7*/
      v9 = v8 <= 0 ? 0 : v8;
      v10 = blue; /*0x5560f6*/
      v11 = v9; /*0x556100*/
      if ( blue >= 2000 ) /*0x556102*/
        v10 = 2000; /*0x556104*/
      v12 = v10 <= 0 ? 0 : v10;
    }
    if ( tinted ) /*0x556123*/
    {
      if ( v7 == -1 ) /*0x556128*/
      {
        v7 = (int)(((unsigned char *)(this) + 0x1A4)); /*0x55612a*/
        v12 = this->u32_1AC; /*0x556130*/
        v11 = (int)(((unsigned char *)(this) + 0x1A8)); /*0x556136*/
      }
      else
      {
        ((unsigned char *)(this) + 0x1A4) = (unsigned char *)(v7); /*0x556145*/
        ((unsigned char *)(this) + 0x1A8) = (unsigned char *)(v11); /*0x55614b*/
        this->u32_1AC = v12; /*0x556151*/
      }
      this->u8_1B0 = 1; /*0x55613c*/
    }
    else
    {
      if ( v7 == -1 ) /*0x556163*/
      {
        v7 = (int)(((unsigned char *)(this) + 0x198)); /*0x556165*/
        v11 = (int)(((unsigned char *)(this) + 0x19C)); /*0x55616b*/
        v12 = this->u32_1A0; /*0x556171*/
      }
      else
      {
        ((unsigned char *)(this) + 0x198) = (unsigned char *)(v7); /*0x556179*/
        ((unsigned char *)(this) + 0x19C) = (unsigned char *)(v11); /*0x55617f*/
        this->u32_1A0 = v12; /*0x556185*/
      }
      this->u8_1B0 = 0; /*0x55618b*/
    }
    v32 = Math::RoundToInt((double)(1000 * v7) * 0.065536); /*0x5561b1*/
    v34 = Math::RoundToInt((double)(1000 * v11) * 0.065536); /*0x5561d5*/
    v35 = Math::RoundToInt((double)(1000 * v12) * 0.065536); /*0x5561f8*/
    v13 = 0; /*0x556202*/
    v30 = v6 - 1; /*0x55620e*/
    v14 = *(unsigned short **)(((unsigned char *)(this) + 0x0908)); /*0x55621e*/
    v31 = (30 * v6 / 200 - 1) & ((30 * v6 / 200 - 1 <= 0) - 1); /*0x55623a*/
    if ( v31 >= (v6 - 1) >> 1 ) /*0x55623e*/
      v31 = (v6 - 1) >> 1; /*0x556240*/
    v26 = 0; /*0x556246*/
    if ( v6 - 1 >= 0 ) /*0x55624a*/
    {
      v29 = 0; /*0x556250*/
      v28 = 0; /*0x556254*/
      v27 = 0; /*0x556258*/
      v33 = 0; /*0x55625c*/
      while ( v6 > 1 ) /*0x556263*/
      {
        v15 = v13 / v30; /*0x55626e*/
        v38 = v13 / v30; /*0x556277*/
        v16 = v27 / v30; /*0x55627b*/
        v37 = v27 / v30; /*0x556288*/
        v17 = v28 / v30; /*0x55628c*/
        v39 = v28 / v30; /*0x556294*/
        if ( v26 <= v31 ) /*0x556298*/
        {
          v18 = v29 / v31; /*0x5562a6*/
  LABEL_31:
          v17 = v39; /*0x5562cb*/
          goto LABEL_32; /*0x5562cb*/
        }
        v18 = 0x10000; /*0x55629a*/
  LABEL_32:
        switch ( dword_829D20 ) /*0x5562de*/
        {
          case 0: /*0x5562de*/
            ConvertRGB24toRGB565( /*0x5562f8*/
              ((unsigned char *)(this) + 0x188),
              v14,
              __SPAIR64__(v16, v15),
              __SPAIR64__(v18, v17),
              ((unsigned char *)(this) + 0x190));
            v14 += 256; /*0x556300*/
            break; /*0x556306*/
          case 1: /*0x5562de*/
            ConvertRGB24to655( /*0x55631e*/
              ((unsigned char *)(this) + 0x188),
              v14,
              __SPAIR64__(v16, v15),
              __SPAIR64__(v18, v17),
              ((unsigned char *)(this) + 0x190));
            v14 += 256; /*0x556326*/
            break; /*0x55632c*/
          case 2: /*0x5562de*/
            ConvertRGB24to556( /*0x556344*/
              ((unsigned char *)(this) + 0x188),
              v14,
              __SPAIR64__(v16, v15),
              __SPAIR64__(v18, v17),
              ((unsigned char *)(this) + 0x190));
            v14 += 256; /*0x55634c*/
            break; /*0x556352*/
          case 3: /*0x5562de*/
            ConvertRGB24to565( /*0x55636a*/
              ((unsigned char *)(this) + 0x188),
              v14,
              __SPAIR64__(v16, v15),
              __SPAIR64__(v18, v17),
              ((unsigned char *)(this) + 0x190));
            v14 += 256; /*0x556372*/
            break; /*0x556378*/
          default:
            *v14 = 0; /*0x55637d*/
            v36 = v14 + 1; /*0x556385*/
            v19 = 1; /*0x556389*/
            while ( 1 ) /*0x5563bb*/
            {
              v20 = (uint8_t *)(((unsigned char *)(this) + 0x188) + 3 * (v19 % 256)); /*0x5563bb*/
              if ( *(unsigned char *)(((unsigned char *)(this) + 0x190) + v19) ) /*0x55639a*/
              {
                v21 = (v15 * *v20) >> 16; /*0x5563d7*/
                v22 = (v37 * v20[1]) >> 16; /*0x5563da*/
                v23 = v39 * v20[2]; /*0x5563dd*/
              }
              else
              {
                v21 = (v18 * *v20) >> 16; /*0x556417*/
                v22 = (v18 * v20[1]) >> 16; /*0x55641a*/
                v23 = v18 * v20[2]; /*0x55641d*/
              }
              v24 = v23 >> 16; /*0x556420*/
              if ( v21 >= 255 ) /*0x556429*/
                v21 = 255; /*0x55642b*/
              if ( v22 >= 255 ) /*0x556436*/
                v22 = 255; /*0x556438*/
              if ( v24 >= 255 ) /*0x556443*/
                v24 = 255; /*0x556445*/
              v25 = v36 + 1; /*0x556480*/
              v36 = v25; /*0x556483*/
              ++v19; /*0x556489*/
              *(v25 - 1) = (v21 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x55648a*/
                         | (v22 >> g_BitMask_Blue << g_BitMask_Green)
                         | (v24 >> g_BitMask_Red << g_BitShift_Blue);
              if ( v19 >= 256 ) /*0x556494*/
                break; /*0x556494*/
              v15 = v38; /*0x556390*/
            }
            v14 = v25; /*0x55649a*/
            break; /*0x55649a*/
        }
        v13 = 2 * v32 + v33; /*0x5564ae*/
        v27 += 2 * v34; /*0x5564c3*/
        v28 += 2 * v35; /*0x5564d3*/
        v6 = (int)(((unsigned char *)(this) + 0x16C)); /*0x5564d7*/
        v29 += 0x10000; /*0x5564dd*/
        ++v26; /*0x5564e5*/
        v33 = v13; /*0x5564eb*/
        if ( v26 > v6 - 1 ) /*0x5564ef*/
          return; /*0x5564ef*/
      }
      v38 = v32; /*0x5562b6*/
      v39 = v35; /*0x5562ba*/
      v15 = v32; /*0x5562be*/
      v37 = v34; /*0x5562c0*/
      v18 = 0x10000; /*0x5562c4*/
      v16 = v34; /*0x5562c9*/
      goto LABEL_31; /*0x5562c9*/
    }
  }
}