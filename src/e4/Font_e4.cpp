// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x4346C0
int Font::GetGlyphDataForChar(AbstractClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Font::GetGlyphDataForChar(_DWORD *this, AbstractClass *aP1)
{
  AbstractClass *v2; // ecx
  int result; // eax
  int v4; // edx

  v2 = (AbstractClass *)this->Font_field_04; /*0x4346c0*/
  result = 0; /*0x4346c3*/
  if ( v2 ) /*0x4346c7*/
  {
    v4 = *(unsigned __int16 *)(v2->nextArrayIndex + 2 * (unsigned __int16)aP1); /*0x4346da*/
    if ( (_WORD)v4 ) /*0x4346e2*/
      return v2->referenceCount + (v4 - 1) * v2->abstractFlags; /*0x4346eb*/
  }
  return result; /*0x4346ee*/
}
}

// 0x434CD0
char Font::Print(AbstractClass * aP0, AbstractClass * aP1, AbstractClass * aP2, int aP1a, AbstractClass * aP4, AbstractClass * aP5, AbstractClass * aP6, AbstractClass * aP7, AbstractClass * aP8, AbstractClass * aP9)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall Font::Print(
        AbstractClass *aP0,
        AbstractClass *aP1,
        AbstractClass *aP2,
        int aP1a,
        AbstractClass *aP4,
        AbstractClass *aP5,
        AbstractClass *aP6,
        AbstractClass *aP7,
        AbstractClass *aP8,
        AbstractClass *aP9)
{
  int v10; // edi
  AbstractClass *v11; // ebp
  __int16 v12; // ax
  int v13; // ebx
  ObjectClass *v14; // esi
  AbstractClass *v15; // edx
  AbstractClass *v16; // ecx
  int v17; // eax
  AbstractClass *v18; // ecx
  int v19; // edi
  char *v20; // ebx
  ObjectClass *v21; // eax
  ObjectClass *v22; // eax
  AbstractClass *v23; // ecx
  int referenceCount; // eax
  unsigned __int8 *GlyphDataForChar; // eax
  int eax28; // eax
  AbstractClass *v26; // ecx
  int v28; // eax
  AbstractClass *edx41; // edx
  AbstractClass *v29; // ecx
  int v31; // ebx
  char *v32; // edi
  AbstractClass *ecx43; // ecx
  ObjectClass *v33; // eax
  int v35; // eax
  AbstractClass *v36; // ecx
  int v38; // eax
  AbstractClass *v39; // edx
  char *v40; // ebx
  char *v41; // edi
  AbstractClass *v42; // ecx
  AbstractClass *v43; // eax
  __int16 var30; // [esp+10h] [ebp-30h]
  AbstractClass *v44; // [esp+14h] [ebp-2Ch] BYREF
  AbstractClass *v45; // [esp+18h] [ebp-28h]
  AbstractClass *xLeft; // [esp+1Ch] [ebp-24h]
  int v48; // [esp+20h] [ebp-20h]
  AbstractClass *v49; // [esp+24h] [ebp-1Ch]
  AbstractClass *v50; // [esp+28h] [ebp-18h]
  int v51; // [esp+2Ch] [ebp-14h]
  unsigned __int8 v52[8]; // [esp+30h] [ebp-10h] BYREF
  unsigned __int8 v53[8]; // [esp+38h] [ebp-8h] BYREF
  __int16 aP5a; // [esp+58h] [ebp+18h]

  v10 = 0; /*0x434cdb*/
  if ( !aP0 ) /*0x434cdf*/
    return 0; /*0x434cdf*/
  v11 = aP2; /*0x434ce5*/
  if ( !aP2 ) /*0x434ceb*/
    return 0; /*0x43530a*/
  FontRenderer::InitContext(aP0, (int *)aP1->__pad_0); /*0x434cf8*/
  Field::Int_Set(aP0, (AbstractClass *)aP1a); /*0x434d04*/
  v12 = 0; /*0x434d0f*/
  v13 = 0; /*0x434d11*/
  v14 = (ObjectClass *)*(unsigned __int16 *)aP0[1].__pad_0; /*0x434d13*/
  HIWORD(v15) = HIWORD(aP2); /*0x434d17*/
  v16 = 0; /*0x434d19*/
  v48 = 0; /*0x434d1b*/
  LOWORD(v15) = *(_WORD *)aP2->__pad_0; /*0x434d1f*/
  v51 = 0; /*0x434d22*/
  v49 = 0; /*0x434d29*/
  v45 = 0; /*0x434d2d*/
  v50 = v15; /*0x434d31*/
  if ( (_WORD)v15 ) /*0x434d35*/
  {
LABEL_4:
    switch ( (__int16)v50 ) /*0x434d59*/
    {
      case 9: /*0x434d59*/
        v10 = *(_DWORD *)&aP0[1].__pad_0[4] /*0x434ef7*/
            + v10
            - (*(_DWORD *)&aP0[1].__pad_0[4] + v10) % *(_DWORD *)&aP0[1].__pad_0[4];
        goto LABEL_55; /*0x434ef9*/
      case 10: /*0x434d59*/
      case 13: /*0x434d59*/
        if ( v12 == 13 ) /*0x434d64*/
          goto LABEL_23; /*0x434d64*/
        v17 = 0; /*0x434d6e*/
        if ( (int)aP5 > v10 ) /*0x434d72*/
        {
          if ( ((unsigned __int8)aP7 & 1) != 0 ) /*0x434d7b*/
          {
            v17 = (int)&aP5->__pad_0[-v10] / 2; /*0x434d84*/
          }
          else if ( ((unsigned __int8)aP7 & 2) != 0 ) /*0x434d8b*/
          {
            v17 = (int)&aP5->__pad_0[-v10]; /*0x434d8f*/
          }
        }
        xLeft = (AbstractClass *)(aP1a + v17); /*0x434d97*/
        if ( v11 >= aP2 ) /*0x434da1*/
          goto LABEL_20; /*0x434da1*/
        v18 = aP8; /*0x434da7*/
        v19 = (char *)aP8 - (char *)v45 - 1; /*0x434db7*/
        v20 = &aP9->__pad_0[(char *)v45 - (char *)aP8 + 1]; /*0x434dba*/
        while ( 2 ) /*0x434dc4*/
        {
          ++v20; /*0x434dc4*/
          --v19; /*0x434dca*/
          v45 = (AbstractClass *)((char *)v45 + 1); /*0x434dcb*/
          v21 = v14; /*0x434dd1*/
          if ( !v18 ) /*0x434dd3*/
            goto LABEL_18; /*0x434dd3*/
          if ( (int)v45 >= (int)v18 ) /*0x434ddd*/
            goto LABEL_73; /*0x434ddd*/
          if ( v19 < (int)aP9 ) /*0x434de7*/
          {
            v22 = (ObjectClass *)Palette::SixBitTo16Bit( /*0x434e2e*/
                                   &v44,
                                   (unsigned __int8)((unsigned __int16)v14 >> stru_89E138.__pad_14B0[6120]) << stru_89E138.__pad_14B0[6124],
                                   (unsigned __int8)((unsigned __int16)v14 >> stru_89E138.__pad_14B0[6136]) << stru_89E138.__pad_14B0[6140],
                                   (unsigned __int8)((unsigned __int16)v14 >> stru_89E138.__pad_14B0[6128]) << stru_89E138.__pad_14B0[6132]);
            *(_WORD *)v52 = *(_WORD *)v22->__pad_0; /*0x434e3b*/
            v52[2] = v22->__pad_0[2]; /*0x434e4c*/
            Color::Lerp(v52, (ObjectClass *)((_DWORD)v20 * (255 / (int)aP9)), &byte_A80220); /*0x434e59*/
            v21 = (ObjectClass *)PackRGB565(v52[0], v52[1], v52[2]); /*0x434e7c*/
          }
LABEL_18:
          if ( v21 == (ObjectClass *)-1 ) /*0x434e84*/
            goto LABEL_73; /*0x434e84*/
          LOWORD(v18) = *(_WORD *)v11->__pad_0; /*0x434e8e*/
          v11 = (AbstractClass *)((char *)v11 + 2); /*0x434e9e*/
          xLeft = (AbstractClass *)FontClass::RenderGlyph((int)aP0, v18, xLeft, aP4, (AbstractClass *)v21); /*0x434ea6*/
          if ( v11 < aP2 ) /*0x434eb0*/
          {
            v18 = aP8; /*0x434dc0*/
            continue; /*0x434dc0*/
          }
          break;
        }
LABEL_20:
        v23 = aP0; /*0x434eb6*/
        v10 = 0; /*0x434ebe*/
        v13 = 0; /*0x434ec0*/
        referenceCount = aP0->referenceCount; /*0x434ec2*/
        v48 += referenceCount; /*0x434ec7*/
        if ( aP6 && v48 >= (int)aP6 ) /*0x434ed7*/
          goto LABEL_57; /*0x434ed7*/
        aP4 = (AbstractClass *)((char *)aP4 + referenceCount); /*0x434edd*/
LABEL_23:
        v11 = (AbstractClass *)((char *)v11 + 2); /*0x434ee1*/
        goto LABEL_55; /*0x434ee4*/
      case 32: /*0x434d59*/
        v51 = v10; /*0x434f02*/
        v49 = aP2; /*0x434f06*/
        goto LABEL_26; /*0x434f06*/
      default:
LABEL_26:
        GlyphDataForChar = (unsigned __int8 *)Font::GetGlyphDataForChar(aP0, v50); /*0x434f0a*/
        if ( !GlyphDataForChar ) /*0x434f1a*/
        {
          GlyphDataForChar = (unsigned __int8 *)Font::GetGlyphDataForChar(aP0, (AbstractClass *)0x3F); /*0x434f22*/
          if ( !GlyphDataForChar ) /*0x434f29*/
            goto LABEL_55; /*0x434f29*/
        }
        ++v13; /*0x434f37*/
        eax28 = *GlyphDataForChar + *(_DWORD *)&aP0[1].__pad_0[8]; /*0x434f3b*/
        v10 += eax28; /*0x434f41*/
        if ( !aP5 || v10 <= (int)aP5 ) /*0x434f4d*/
          goto LABEL_55; /*0x434f4d*/
        v26 = v49; /*0x434f53*/
        if ( v49 ) /*0x434f59*/
        {
          if ( v13 > 1 ) /*0x434f5e*/
          {
            v10 = v51; /*0x434f60*/
            aP2 = v49; /*0x434f64*/
          }
        }
        else if ( v13 > 1 ) /*0x434f6d*/
        {
          v10 -= eax28; /*0x434f6f*/
          aP2 = (AbstractClass *)((char *)aP2 - 2); /*0x434f78*/
        }
        v28 = 0; /*0x434f80*/
        if ( (int)aP5 > v10 ) /*0x434f84*/
        {
          if ( ((unsigned __int8)aP7 & 1) != 0 ) /*0x434f8d*/
          {
            v28 = (int)&aP5->__pad_0[-v10] / 2; /*0x434f96*/
          }
          else if ( ((unsigned __int8)aP7 & 2) != 0 ) /*0x434f9d*/
          {
            v28 = (int)&aP5->__pad_0[-v10]; /*0x434fa1*/
          }
        }
        xLeft = (AbstractClass *)(aP1a + v28); /*0x434fa9*/
        if ( v11 >= aP2 ) /*0x434fb3*/
          goto LABEL_50; /*0x434fb3*/
        edx41 = aP8; /*0x434fb9*/
        v29 = v45; /*0x434fbd*/
        v31 = (char *)aP8 - (char *)v45 - 1; /*0x434fcb*/
        v32 = &aP9->__pad_0[(char *)v45 - (char *)aP8 + 1]; /*0x434fce*/
        break; /*0x434fd2*/
    }
    while ( 1 ) /*0x434fdc*/
    {
      ecx43 = (AbstractClass *)&v29->__pad_0[1]; /*0x434fdc*/
      ++v32; /*0x434fdd*/
      --v31; /*0x434fde*/
      v45 = ecx43; /*0x434fdf*/
      v33 = v14; /*0x434fe5*/
      if ( edx41 ) /*0x434fe7*/
      {
        if ( (int)ecx43 >= (int)edx41 ) /*0x434fef*/
          break; /*0x434fef*/
        if ( v31 < (int)aP9 ) /*0x434ff9*/
        {
          LOBYTE(var30) = (unsigned __int8)((unsigned __int16)v14 >> stru_89E138.__pad_14B0[6120]) << stru_89E138.__pad_14B0[6124]; /*0x435028*/
          HIBYTE(var30) = (unsigned __int8)((unsigned __int16)v14 >> stru_89E138.__pad_14B0[6136]) << stru_89E138.__pad_14B0[6140]; /*0x435035*/
          *(_WORD *)v53 = var30; /*0x43504b*/
          v53[2] = (unsigned __int8)((unsigned __int16)v14 >> stru_89E138.__pad_14B0[6128]) << stru_89E138.__pad_14B0[6132]; /*0x435054*/
          Color::Lerp(v53, (ObjectClass *)((_DWORD)v32 * (255 / (int)aP9)), &byte_A80220); /*0x435066*/
          HIWORD(ecx43) = *(_WORD *)&stru_89E138.__pad_14B0[6122]; /*0x4350b2*/
          v33 = (ObjectClass *)((v53[0] >> stru_89E138.__pad_14B0[6124] << stru_89E138.__pad_14B0[6120]) /*0x4350ba*/
                              | (v53[2] >> stru_89E138.__pad_14B0[6132] << stru_89E138.__pad_14B0[6128])
                              | (v53[1] >> stru_89E138.__pad_14B0[6140] << stru_89E138.__pad_14B0[6136]));
        }
      }
      if ( v33 == (ObjectClass *)-1 ) /*0x4350bf*/
        break; /*0x4350bf*/
      LOWORD(ecx43) = *(_WORD *)v11->__pad_0; /*0x4350c9*/
      v11 = (AbstractClass *)((char *)v11 + 2); /*0x4350d9*/
      xLeft = (AbstractClass *)FontClass::RenderGlyph((int)aP0, ecx43, xLeft, aP4, (AbstractClass *)v33); /*0x4350e1*/
      if ( v11 >= aP2 ) /*0x4350eb*/
      {
        v26 = v49; /*0x4350f1*/
LABEL_50:
        if ( aP2 == v26 ) /*0x4350f9*/
        {
          v49 = 0; /*0x4350fb*/
          v11 = (AbstractClass *)((char *)v11 + 2); /*0x435103*/
        }
        v23 = aP0; /*0x435106*/
        v10 = 0; /*0x43510e*/
        v13 = 0; /*0x435110*/
        v35 = aP0->referenceCount; /*0x435112*/
        v48 += v35; /*0x435117*/
        if ( aP6 && v48 >= (int)aP6 ) /*0x435127*/
        {
LABEL_57:
          BufferIO::Cleanup(v23, aP1); /*0x43514d*/
          return 1; /*0x435160*/
        }
        aP4 = (AbstractClass *)((char *)aP4 + v35); /*0x435129*/
LABEL_55:
        v12 = (__int16)v50; /*0x43512d*/
        v36 = (AbstractClass *)&aP2->__pad_0[2]; /*0x435135*/
        aP2 = v36; /*0x435138*/
        LOWORD(v36) = *(_WORD *)v36->__pad_0; /*0x43513c*/
        v50 = v36; /*0x435142*/
        if ( !(_WORD)v36 ) /*0x435146*/
        {
          v16 = v45; /*0x435163*/
          goto LABEL_59; /*0x435163*/
        }
        goto LABEL_4; /*0x435146*/
      }
      edx41 = aP8; /*0x434fd4*/
      v29 = v45; /*0x434fd8*/
    }
  }
  else
  {
LABEL_59:
    v38 = 0; /*0x435167*/
    if ( (int)aP5 > v10 ) /*0x43516f*/
    {
      if ( ((unsigned __int8)aP7 & 1) != 0 ) /*0x435178*/
      {
        v38 = (int)&aP5->__pad_0[-v10] / 2; /*0x435181*/
      }
      else if ( ((unsigned __int8)aP7 & 2) != 0 ) /*0x435188*/
      {
        v38 = (int)&aP5->__pad_0[-v10]; /*0x43518c*/
      }
    }
    xLeft = (AbstractClass *)(aP1a + v38); /*0x435194*/
    if ( v11 < aP2 ) /*0x43519e*/
    {
      v39 = aP8; /*0x4351a4*/
      v40 = (char *)((char *)aP8 - (char *)v16 - 1); /*0x4351b2*/
      v41 = &aP9->__pad_0[(char *)v16 - (char *)aP8 + 1]; /*0x4351b5*/
      while ( 1 ) /*0x4351b9*/
      {
        v42 = (AbstractClass *)&v16->__pad_0[1]; /*0x4351b9*/
        ++v41; /*0x4351ba*/
        --v40; /*0x4351bb*/
        v45 = v42; /*0x4351bc*/
        v43 = (AbstractClass *)v14; /*0x4351c2*/
        if ( v39 ) /*0x4351c4*/
        {
          if ( (int)v42 >= (int)v39 ) /*0x4351cc*/
            break; /*0x4351cc*/
          if ( (int)v40 < (int)aP9 ) /*0x4351d6*/
          {
            LOBYTE(aP5a) = (unsigned __int8)((unsigned __int16)v14 >> stru_89E138.__pad_14B0[6120]) << stru_89E138.__pad_14B0[6124]; /*0x435205*/
            HIBYTE(aP5a) = (unsigned __int8)((unsigned __int16)v14 >> stru_89E138.__pad_14B0[6136]) << stru_89E138.__pad_14B0[6140]; /*0x435212*/
            *(_WORD *)v53 = aP5a; /*0x435228*/
            v53[2] = (unsigned __int8)((unsigned __int16)v14 >> stru_89E138.__pad_14B0[6128]) << stru_89E138.__pad_14B0[6132]; /*0x435231*/
            Color::Lerp(v53, (ObjectClass *)((_DWORD)v41 * (255 / (int)aP9)), &byte_A80220); /*0x435243*/
            HIWORD(v42) = *(_WORD *)&stru_89E138.__pad_14B0[6122]; /*0x43528f*/
            v43 = (AbstractClass *)((v53[0] >> stru_89E138.__pad_14B0[6124] << stru_89E138.__pad_14B0[6120]) /*0x435297*/
                                  | (v53[2] >> stru_89E138.__pad_14B0[6132] << stru_89E138.__pad_14B0[6128])
                                  | (v53[1] >> stru_89E138.__pad_14B0[6140] << stru_89E138.__pad_14B0[6136]));
          }
        }
        if ( v43 == (AbstractClass *)-1 ) /*0x43529c*/
          break; /*0x43529c*/
        LOWORD(v42) = *(_WORD *)v11->__pad_0; /*0x4352a2*/
        v11 = (AbstractClass *)((char *)v11 + 2); /*0x4352b2*/
        xLeft = (AbstractClass *)FontClass::RenderGlyph((int)aP0, v42, xLeft, aP4, v43); /*0x4352ba*/
        if ( v11 >= aP2 ) /*0x4352c4*/
          break; /*0x4352c4*/
        v16 = v45; /*0x4352c6*/
        v39 = aP8; /*0x4352ca*/
      }
    }
  }
LABEL_73:
  BufferIO::Cleanup(aP0, aP1); /*0x4352ed*/
  return 1; /*0x435157*/
}
}
