// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x7BF740
namespace gamemd {
int DSP_AudioMixBuffers(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// (v3 export truncated pseudocode — commented out; live version via get_context)
// int __fastcall DSP_AudioMixBuffers(int a1, int a2)
// {
//   int v3; // eax
//   _DWORD *v4; // edi
//   int v5; // ecx
//   int v6; // esi
//   int v7; // ebx
//   _DWORD *v8; // eax
//   int v9; // eax
//   int v10; // ecx
//   DSurface *v11; // esi
//   int result; // eax
//   int v13; // eax
//   unsigned __int16 *v14; // edx
//   int v15; // ecx
//   int v16; // edx
//   int v17; // ecx
//   _DWORD *v18; // edx
//   int v19; // edx
//   int v20; // ecx
//   int v21; // edx
//   int v22; // ecx
//   int v23; // edx
//   int v24; // ecx
//   int v25; // eax
//   int v26; // eax
//   int v27; // eax
//   _DWORD *v28; // ebx
//   unsigned int v29; // eax
//   int v30; // ecx
//   _DWORD *v31; // esi
//   int v32; // edi
//   int v33; // eax
//   int v34; // eax
//   int v35; // eax
//   bool v36; // zf
//   int v37; // eax
//   unsigned int v38; // esi
//   int v39; // ebx
//   int v40; // ecx
//   int v41; // eax
//   int v42; // eax
//   int v43; // eax
//   int v44; // eax
//   int v45; // eax
//   int v46; // eax
//   unsigned int v47; // eax
//   __int16 v48; // cx
//   __int16 v49; // ax
//   _DWORD *v50; // esi
//   int v51;... [30469 chars total]
// end truncated pseudocode
}
} // namespace gamemd

// 0x7C0C80
namespace gamemd {
int DSP_AudioProcess(AudioStream * aP0, int a2, char a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall DSP_AudioProcess(AudioStream *aP0, int a2, char a3)
{
  int v4; // edi
  char *v5; // ebx
  unsigned int v6; // esi
  unsigned int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // edx
  int v10; // ebx
  int v11; // edx
  _DWORD *v12; // ebx
  _DWORD *v13; // esi
  int v14; // edx
  _DWORD *v15; // esi
  int v16; // edx
  _DWORD *v17; // esi
  int v18; // eax
  _DWORD *v19; // edi
  unsigned int v20; // ebx
  int v21; // ecx
  _DWORD *v22; // edi
  unsigned int v23; // ebx
  int v24; // ecx
  _DWORD *v25; // edi
  unsigned int v26; // ebx
  int v27; // ecx
  int v29; // [esp+10h] [ebp-10h]
  unsigned int v30; // [esp+14h] [ebp-Ch]
  unsigned int v31; // [esp+18h] [ebp-8h]
  unsigned int v32; // [esp+18h] [ebp-8h]
  unsigned int v33; // [esp+18h] [ebp-8h]
  unsigned int v34; // [esp+1Ch] [ebp-4h]

  v4 = 0; /*0x7c0c89*/
  v29 = *(_DWORD *)&aP0->__pad_D8[152]; /*0x7c0c91*/
  v34 = (a2 + 1) & 0xFFFFFFFE; /*0x7c0c9b*/
  if ( v34 ) /*0x7c0c9f*/
  {
    while ( 1 ) /*0x7c0ca5*/
    {
      v5 = &aP0->__pad_D8[192]; /*0x7c0ca5*/
      if ( ((int (__cdecl *)(AudioStream *, int, char *, int))aP0->field_40)(aP0, 5, &aP0->__pad_D8[192], 8) ) /*0x7c0cb1*/
        return -2; /*0x7c10fe*/
      v6 = ((*(_DWORD *)&aP0->__pad_D8[196] & 0xFF00 | (*(_DWORD *)&aP0->__pad_D8[196] << 16)) << 8) /*0x7c0ce3*/
         | ((((unsigned __int64)*(unsigned int *)&aP0->__pad_D8[196] >> 16) | *(_DWORD *)&aP0->__pad_D8[196] & 0xFF0000) >> 8);
      v7 = v6 + 1; /*0x7c0ce5*/
      v8 = (v6 + 1) & 0xFFFFFFFE; /*0x7c0cea*/
      v30 = v4 + v8 + 8; /*0x7c0cf1*/
      v9 = *(_DWORD *)v5; /*0x7c0cf5*/
      if ( *(_DWORD *)v5 > 0x5A445056u ) /*0x7c0cfd*/
      {
        if ( v9 > 0x5A504243 ) /*0x7c0f13*/
        {
          if ( v9 != 1515343958 ) /*0x7c1015*/
          {
            if ( v9 != 1515475030 ) /*0x7c101d*/
              return -4; /*0x7c101d*/
LABEL_54:
            if ( (a3 & 4) == 0 ) /*0x7c1028*/
            {
              v22 = *(_DWORD **)&aP0->__pad_D8[152]; /*0x7c102e*/
              v23 = *(_DWORD *)&aP0[3].__pad_D8[232] - v8; /*0x7c103a*/
              v32 = v23 + *v22; /*0x7c1045*/
              if ( ((int (__cdecl *)(AudioStream *, int, unsigned int, unsigned int))aP0->field_40)( /*0x7c1049*/
                     aP0,
                     5,
                     v32,
                     (v6 + 1) & 0xFFFFFFFE) )
              {
                return -4; /*0x7c1051*/
              }
              v24 = v22[5]; /*0x7c1057*/
              v22[8] = v23; /*0x7c105a*/
              v22[5] = v24 | 0x10; /*0x7c1060*/
              if ( *(_WORD *)&aP0->__pad_D8[16] < 3u ) /*0x7c106b*/
                *(_BYTE *)(v32 + v6 + 1) = 0x80; /*0x7c1071*/
              goto LABEL_64; /*0x7c1076*/
            }
            goto LABEL_63; /*0x7c1028*/
          }
          if ( (a3 & 4) == 0 ) /*0x7c107d*/
          {
            v25 = *(_DWORD **)&aP0->__pad_D8[152]; /*0x7c107f*/
            v26 = *(_DWORD *)&aP0[3].__pad_D8[232] - v8; /*0x7c108b*/
            v33 = v26 + *v25; /*0x7c1096*/
            if ( ((int (__cdecl *)(AudioStream *, int, unsigned int, unsigned int))aP0->field_40)( /*0x7c109a*/
                   aP0,
                   5,
                   v33,
                   (v6 + 1) & 0xFFFFFFFE) )
            {
              return -4; /*0x7c110d*/
            }
            v27 = v25[5]; /*0x7c10a4*/
            v25[8] = v26; /*0x7c10a7*/
            v25[5] = v27 | 0x10; /*0x7c10ad*/
            if ( *(_WORD *)&aP0->__pad_D8[16] < 3u ) /*0x7c10b8*/
              *(_BYTE *)(v33 + v6 + 1) = 0x80; /*0x7c10be*/
            *(_DWORD *)(v29 + 20) |= 0x20u; /*0x7c10c7*/
            goto LABEL_64; /*0x7c10cb*/
          }
        }
        else
        {
          switch ( v9 ) /*0x7c0f19*/
          {
            case 0x5A504243u: /*0x7c0f19*/
              if ( (a3 & 8) == 0 ) /*0x7c0ff2*/
              {
                if ( Audio_Helper_7C1F30((int)aP0, v6) != -1 ) /*0x7c1004*/
                  return -4; /*0x7c1004*/
                goto LABEL_64; /*0x7c1004*/
              }
              break;
            case 0x5A464243u: /*0x7c0f19*/
              if ( (a3 & 0x10) == 0 ) /*0x7c0fd0*/
              {
                if ( Audio_Helper_7C1D90((int)aP0, v6) != -1 ) /*0x7c0fe2*/
                  return -4; /*0x7c0fe2*/
                goto LABEL_64; /*0x7c0fe2*/
              }
              break;
            case 0x5A4B5056u: /*0x7c0f19*/
              if ( (a3 & 4) == 0 ) /*0x7c0f6e*/
              {
                v19 = *(_DWORD **)&aP0->__pad_D8[152]; /*0x7c0f7a*/
                v20 = *(_DWORD *)&aP0[3].__pad_D8[232] - v8; /*0x7c0f80*/
                v31 = *v19 + v20; /*0x7c0f8d*/
                if ( ((int (__cdecl *)(AudioStream *, int, unsigned int, unsigned int))aP0->field_40)( /*0x7c0f91*/
                       aP0,
                       5,
                       v31,
                       (v6 + 1) & 0xFFFFFFFE) )
                {
                  return -4; /*0x7c0f99*/
                }
                v21 = v19[5]; /*0x7c0f9f*/
                v19[8] = v20; /*0x7c0fa2*/
                v19[5] = v21 | 0x10; /*0x7c0fa8*/
                if ( *(_WORD *)&aP0->__pad_D8[16] < 3u ) /*0x7c0fb3*/
                  *(_BYTE *)(v31 + v6 + 1) = 0x80; /*0x7c0fb9*/
                *(_DWORD *)(v29 + 20) |= 2u; /*0x7c0fc2*/
                goto LABEL_64; /*0x7c0fc6*/
              }
              break;
            case 0x5A4C5043u: /*0x7c0f19*/
              if ( (a3 & 1) == 0 ) /*0x7c0f44*/
              {
                if ( Audio_Helper_7C20B0((int)aP0, v6) != -1 ) /*0x7c0f56*/
                  return -4; /*0x7c0f56*/
                *(_DWORD *)(v29 + 20) |= 4u; /*0x7c0f60*/
                goto LABEL_64; /*0x7c0f64*/
              }
              break;
            default:
              return -4; /*0x7c0f39*/
          }
        }
      }
      else
      {
        if ( *(_DWORD *)v5 == 1514426454 ) /*0x7c0d03*/
          goto LABEL_54; /*0x7c0d03*/
        if ( v9 > 0x30545056 ) /*0x7c0d0f*/
        {
          switch ( v9 ) /*0x7c0e35*/
          {
            case 0x44545056u: /*0x7c0e35*/
LABEL_30:
              if ( (a3 & 4) == 0 ) /*0x7c0ed6*/
              {
                v17 = *(_DWORD **)&aP0->__pad_D8[152]; /*0x7c0edc*/
                LOBYTE(v7) = v7 & 0xFE; /*0x7c0ee2*/
                if ( ((int (__cdecl *)(AudioStream *, int, _DWORD, unsigned int))aP0->field_40)(aP0, 5, *v17, v7) ) /*0x7c0eeb*/
                  return -4; /*0x7c0ef3*/
                v18 = v17[5]; /*0x7c0ef9*/
                v17[8] = 0; /*0x7c0efc*/
                LOBYTE(v18) = v18 & 0xEF; /*0x7c0f03*/
                v17[5] = v18; /*0x7c0f05*/
                goto LABEL_64; /*0x7c0f08*/
              }
              break; /*0x7c0ed6*/
            case 0x4B545056u: /*0x7c0e35*/
              if ( (a3 & 4) == 0 ) /*0x7c0e95*/
              {
                v15 = *(_DWORD **)&aP0->__pad_D8[152]; /*0x7c0e9b*/
                LOBYTE(v7) = v7 & 0xFE; /*0x7c0ea1*/
                if ( ((int (__cdecl *)(AudioStream *, int, _DWORD, unsigned int))aP0->field_40)(aP0, 5, *v15, v7) ) /*0x7c0eaa*/
                  return -4; /*0x7c0eb2*/
                v16 = v15[5]; /*0x7c0eb8*/
                v15[8] = 0; /*0x7c0ebb*/
                v15[5] = v16 & 0xFFFFFFEF; /*0x7c0ec5*/
                *(_DWORD *)(v29 + 20) |= 2u; /*0x7c0ec8*/
                goto LABEL_64; /*0x7c0ecc*/
              }
              break;
            case 0x52545056u: /*0x7c0e35*/
              if ( (a3 & 4) == 0 ) /*0x7c0e54*/
              {
                v13 = *(_DWORD **)&aP0->__pad_D8[152]; /*0x7c0e5a*/
                LOBYTE(v7) = v7 & 0xFE; /*0x7c0e60*/
                if ( ((int (__cdecl *)(AudioStream *, int, _DWORD, unsigned int))aP0->field_40)(aP0, 5, *v13, v7) ) /*0x7c0e69*/
                  return -4; /*0x7c0e71*/
                v14 = v13[5]; /*0x7c0e77*/
                v13[8] = 0; /*0x7c0e7a*/
                v13[5] = v14 & 0xFFFFFFEF; /*0x7c0e84*/
                *(_DWORD *)(v29 + 20) |= 0x20u; /*0x7c0e87*/
                goto LABEL_64; /*0x7c0e8b*/
              }
              break;
            default:
              return -4; /*0x7c0e49*/
          }
        }
        else
        {
          switch ( v9 ) /*0x7c0d15*/
          {
            case 0x30545056u: /*0x7c0d15*/
              goto LABEL_30; /*0x7c0d15*/
            case 0x30464243u: /*0x7c0d15*/
              if ( (a3 & 0x10) == 0 ) /*0x7c0de5*/
              {
                v12 = *(_DWORD **)&aP0->__pad_D8[140]; /*0x7c0deb*/
                LOBYTE(v7) = v7 & 0xFE; /*0x7c0df1*/
                if ( ((int (__cdecl *)(AudioStream *, int, _DWORD, unsigned int))aP0->field_40)(aP0, 5, *v12, v7) ) /*0x7c0dfa*/
                  return -4; /*0x7c0e02*/
                *(_DWORD *)&aP0->__pad_D8[156] = 0; /*0x7c0e08*/
                v12[4] = 0; /*0x7c0e0e*/
                v12[5] = v6; /*0x7c0e11*/
                v12[3] = 8; /*0x7c0e14*/
                *(_DWORD *)&aP0->__pad_D8[144] = v12; /*0x7c0e1b*/
                *(_DWORD *)&aP0->__pad_D8[140] = v12[1]; /*0x7c0e24*/
                goto LABEL_64; /*0x7c0e2a*/
              }
              break;
            case 0x304C5043u: /*0x7c0d15*/
              if ( (a3 & 1) == 0 ) /*0x7c0d62*/
              {
                v10 = *(_DWORD *)&aP0->__pad_D8[152]; /*0x7c0d68*/
                LOBYTE(v7) = v7 & 0xFE; /*0x7c0d6e*/
                if ( ((int (__cdecl *)(AudioStream *, int, _DWORD, unsigned int))aP0->field_40)( /*0x7c0d78*/
                       aP0,
                       5,
                       *(_DWORD *)(v10 + 8),
                       v7) )
                {
                  return -4; /*0x7c0d80*/
                }
                v11 = *(_DWORD *)(v10 + 20); /*0x7c0d86*/
                *(_DWORD *)(v10 + 36) = 0; /*0x7c0d89*/
                *(_DWORD *)(v10 + 20) = v11 & 0xFFFFFFF7; /*0x7c0d94*/
                *(_DWORD *)(v10 + 40) = v6; /*0x7c0d97*/
                if ( *(_WORD *)&aP0[3].__pad_D8[212] == 1 ) /*0x7c0da1*/
                {
                  qmemcpy(&aP0->__pad_D8[236], *(const void **)(v10 + 8), v6); /*0x7c0db3*/
                  *(_DWORD *)&aP0->__pad_D8[232] = *(_DWORD *)(v10 + 40); /*0x7c0dbf*/
                  *(_DWORD *)&aP0->__pad_D8[204] |= 1u; /*0x7c0dcd*/
                }
                *(_DWORD *)(v29 + 20) |= 4u; /*0x7c0dd7*/
                goto LABEL_64; /*0x7c0ddb*/
              }
              break;
            case 0x30504243u: /*0x7c0d15*/
              if ( (a3 & 8) == 0 ) /*0x7c0d40*/
              {
                if ( Audio_Helper_7C1E10((int)aP0, v6) != -1 ) /*0x7c0d52*/
                  return -4; /*0x7c0d52*/
                goto LABEL_64; /*0x7c0d52*/
              }
              break;
            default:
              return -4; /*0x7c0d35*/
          }
        }
      }
LABEL_63:
      LOBYTE(v7) = v7 & 0xFE; /*0x7c10cd*/
      if ( ((int (__cdecl *)(AudioStream *, int, int, unsigned int))aP0->field_40)(aP0, 7, 1, v7) ) /*0x7c10d5*/
        return -6; /*0x7c111c*/
LABEL_64:
      if ( v30 >= v34 ) /*0x7c10e9*/
        return -1; /*0x7c10e9*/
      v4 = v30; /*0x7c10eb*/
    }
  }
  return -1; /*0x7c10f2*/
}
}
} // namespace gamemd
