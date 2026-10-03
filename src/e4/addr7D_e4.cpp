// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_7D2E6E_e4.hpp"
#include "e4/classes/E4Recv_7D2E7F_e4.hpp"
#include "e4/classes/E4Recv_7D2E9B_e4.hpp"
#include "e4/classes/E4Recv_7D2ED8_e4.hpp"
#include "e4/classes/E4Recv_7D2F22_e4.hpp"
#include "e4/classes/E4Recv_7D2F57_e4.hpp"
#include "e4/classes/E4Recv_7DCDF2_e4.hpp"
#include "e4/classes/_com_error_e4.hpp"
#include "e4/classes/Voxel_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/WarheadTypeClass_e4.hpp"
#include "e4/classes/DSurface_e4.hpp"
#include "e4/classes/AudioStream_e4.hpp"
#include "e4/classes/Draw_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/File_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/E4Recv_7B9530_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"

// 0x7D038F
namespace gamemd {
int __sbh_heap_check()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D038F.json)
}
}
// 0x7D06BE
namespace gamemd {
int _set_new_handler_shape(int (__cdecl *a1)(unsigned int), unsigned int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D06BE.json)
}
}
// 0x7D0703
namespace gamemd {
int _filbuf(MouseClass * aP0)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D0703.json)
}
}
// 0x7D0844
namespace gamemd {
int _read_lk(int FileHandle, char * lpBuffer, DWORD nNumberOfBytesToRead)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D0844.json)
}
}
// 0x7D0A20
namespace gamemd {
exception * * memcpy_0(void * a0, CCINIClass * aP1, AbstractClass * aP2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7D0A20)
}
}
// 0x7D0DBA
namespace gamemd {
int _write_lk(int FileHandle, unsigned char * lpBuffer, DWORD nNumberOfBytesToWrite)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D0DBA.json)
}
}
// 0x7D0F45
namespace gamemd {
void * realloc(CCINIClass * aP0, size_t Size)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7D0F45)
}
}
// 0x7D10C2
namespace gamemd {
ControlClass * * __crtLCMapStringA(CampaignScore * aP0, DWORD dwMapFlags, ObjectClass * aP2, int cchSrc, LPSTR lpDestStr, int cchDest, UINT CodePage, int a8)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7D10C2)
}
}
// 0x7D1311
namespace gamemd {
int _isctype(int C, int Type)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D1311.json)
}
}
// 0x7D15A0
namespace gamemd {
int strlen(const char * Str)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D15A0.json)
}
}
// 0x7D170D
namespace gamemd {
ControlClass * * _input(FILE * Stream, char * a2, int a3)
{
  char *v3; // esi
  uint8_t v4; // al
  FILE *v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int i; // eax
  int v10; // eax
  int v11; // edi
  int v12; // ebx
  int v13; // eax
  int v14; // esi
  int v15; // eax
  int v16; // ebx
  int v17; // ebx
  char *v18; // esi
  FILE *v19; // edi
  int v26; // eax
  char *v30; // edi
  int v31; // eax
  unsigned int v32; // edx
  uint8_t v33; // al
  uint8_t v34; // cl
  uint8_t v35; // al
  int v36; // esi
  wchar_t *v37; // esi
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int64_t v42; // rax
  int v43; // eax
  int v44; // edi
  int v45; // eax
  int v46; // ebx
  int v47; // eax
  int v48; // eax
  int v49; // ecx
  int result; // eax
  int v51; // [esp-4h] [ebp-1D4h]
  char v52; // [esp+Ch] [ebp-1C4h] BYREF
  char v53; // [esp+Dh] [ebp-1C3h] BYREF
  unsigned char v54[32]; // [esp+16Ch] [ebp-64h] BYREF
  int v55; // [esp+18Ch] [ebp-44h]
  wchar_t DstCh; // [esp+192h] [ebp-3Eh] BYREF
  int v57; // [esp+194h] [ebp-3Ch]
  char SrcCh[3]; // [esp+198h] [ebp-38h] BYREF
  char v59; // [esp+19Bh] [ebp-35h]
  int v60; // [esp+19Ch] [ebp-34h]
  wchar_t *v61; // [esp+1A0h] [ebp-30h]
  wchar_t *v62; // [esp+1A4h] [ebp-2Ch]
  int64_t v63; // [esp+1A8h] [ebp-28h]
  int v64; // [esp+1B0h] [ebp-20h]
  int v65; // [esp+1B4h] [ebp-1Ch]
  char v66; // [esp+1B8h] [ebp-18h]
  char v67; // [esp+1B9h] [ebp-17h]
  char v68; // [esp+1BAh] [ebp-16h]
  char v69; // [esp+1BBh] [ebp-15h]
  int C; // [esp+1BCh] [ebp-14h]
  char v71; // [esp+1C1h] [ebp-Fh]
  char v72; // [esp+1C2h] [ebp-Eh]
  char v73; // [esp+1C3h] [ebp-Dh]
  int v74; // [esp+1C4h] [ebp-Ch]
  char v75; // [esp+1CBh] [ebp-5h]
  int v76; // [esp+1CCh] [ebp-4h] BYREF
  char *v77; // [esp+1DCh] [ebp+Ch]
  int v78; // [esp+1DCh] [ebp+Ch]

  v69 = 0; /*0x7d1716*/
  v3 = a2; /*0x7d171c*/
  v4 = *a2; /*0x7d1722*/
  v76 = 0; /*0x7d1724*/
  v60 = 0; /*0x7d1729*/
  if ( !v4 ) /*0x7d172c*/
    goto LABEL_256; /*0x7d172c*/
  v5 = Stream; /*0x7d1732*/
  while ( 2 )
  {
    if ( (int)SrcSizeInBytes <= 1 ) /*0x7d1743*/
      v6 = *((unsigned char *)off_87C590 + 2 * v4) & 8; /*0x7d1760*/
    else
      v6 = _isctype(v4, 8); /*0x7d174b*/
    if ( v6 ) /*0x7d1765*/
    {
      --v76; /*0x7d1767*/
      v7 = _whiteout((int)&v76, v5); /*0x7d1770*/
      _un_inc(v7, v5); /*0x7d1778*/
      v8 = (uint8_t)*++v3; /*0x7d177d*/
      for ( i = isspace(v8); i; i = isspace(v10) ) /*0x7d1783*/
        v10 = (uint8_t)*++v3; /*0x7d178f*/
    }
    if ( *v3 != 37 ) /*0x7d17a0*/
    {
      ++v76; /*0x7d207f*/
      v46 = fgetc_0((FILE *)(v5)); /*0x7d2088*/
      v47 = (uint8_t)*v3++; /*0x7d208b*/
      C = v46; /*0x7d2091*/
      v78 = (int)v3; /*0x7d2094*/
      if ( v47 == v46 ) /*0x7d2097*/
      {
        if ( *((char *)off_87C590 + 2 * (uint8_t)v46 + 1) >= 0 ) /*0x7d20a7*/
          goto LABEL_247; /*0x7d20a7*/
        ++v76; /*0x7d20a9*/
        v48 = fgetc_0((FILE *)(v5)); /*0x7d20ad*/
        v49 = (uint8_t)*v3++; /*0x7d20b3*/
        v78 = (int)v3; /*0x7d20b9*/
        if ( v49 == v48 ) /*0x7d20bc*/
        {
          --v76; /*0x7d20be*/
          goto LABEL_247; /*0x7d20be*/
        }
        --v76; /*0x7d20fc*/
        _un_inc(v48, v5); /*0x7d2101*/
        --v76; /*0x7d2106*/
        _un_inc(v46, v5); /*0x7d210b*/
      }
      else
      {
        --v76; /*0x7d20ee*/
        _un_inc(v46, v5); /*0x7d20f3*/
      }
      break; /*0x7d210b*/
    }
    v59 = 0; /*0x7d17a6*/
    v66 = 0; /*0x7d17aa*/
    v67 = 0; /*0x7d17ae*/
    v72 = 0; /*0x7d17b2*/
    v71 = 0; /*0x7d17b6*/
    v68 = 0; /*0x7d17ba*/
    v11 = 0; /*0x7d17be*/
    v75 = 0; /*0x7d17c0*/
    v65 = 0; /*0x7d17c4*/
    v64 = 0; /*0x7d17c7*/
    v74 = 0; /*0x7d17ca*/
    v73 = 1; /*0x7d17cd*/
    v61 = 0; /*0x7d17d1*/
    do /*0x7d187f*/
    {
      v12 = (uint8_t)*++v3; /*0x7d17d4*/
      if ( (int)SrcSizeInBytes <= 1 ) /*0x7d17e0*/
        v13 = *((unsigned char *)off_87C590 + 2 * (uint8_t)v12) & 4; /*0x7d17fd*/
      else
        v13 = _isctype((uint8_t)v12, 4); /*0x7d17e8*/
      if ( v13 ) /*0x7d1802*/
      {
        ++v64; /*0x7d1807*/
        v74 = v12 + 10 * v74 - 48; /*0x7d1811*/
        continue; /*0x7d1814*/
      }
      if ( v12 <= 78 ) /*0x7d1819*/
      {
        switch ( v12 ) /*0x7d181b*/
        {
          case 'N': /*0x7d181b*/
            continue; /*0x7d181b*/
          case '*': /*0x7d181b*/
            ++v72; /*0x7d1854*/
            continue; /*0x7d1857*/
          case 'F': /*0x7d181b*/
            continue; /*0x7d1825*/
          case 'I': /*0x7d181b*/
            if ( v3[1] == 54 && v3[2] == 52 ) /*0x7d1843*/
            {
              v61 = (wchar_t *)((char *)v61 + 1); /*0x7d1845*/
              v63 = 0; /*0x7d1848*/
              v3 += 2; /*0x7d1850*/
              continue; /*0x7d1852*/
            }
            break;
          case 'L': /*0x7d181b*/
            ++v73; /*0x7d1831*/
            continue; /*0x7d1834*/
        }
  LABEL_32:
        ++v71; /*0x7d1868*/
        continue; /*0x7d186b*/
      }
      if ( v12 == 104 ) /*0x7d185c*/
      {
        --v73; /*0x7d1875*/
        --v75; /*0x7d1878*/
      }
      else
      {
        if ( v12 == 108 ) /*0x7d1861*/
        {
          ++v73; /*0x7d186d*/
        }
        else if ( v12 != 119 ) /*0x7d1866*/
        {
          goto LABEL_32; /*0x7d1866*/
        }
        ++v75; /*0x7d1870*/
      }
    }
    while ( !v71 ); /*0x7d187f*/
    v77 = v3; /*0x7d1889*/
    if ( !v72 ) /*0x7d188c*/
    {
      v55 = a3; /*0x7d1891*/
      a3 += 4; /*0x7d1897*/
      v62 = *(wchar_t **)(a3 - 4); /*0x7d189d*/
    }
    v71 = 0; /*0x7d18a0*/
    if ( !v75 ) /*0x7d18a8*/
    {
      if ( *v3 == 83 || *v3 == 67 ) /*0x7d18b2*/
        v75 = 1; /*0x7d18ba*/
      else
        v75 = -1; /*0x7d18b4*/
    }
    v57 = (uint8_t)*v3 | 0x20; /*0x7d18ca*/
    v14 = v57; /*0x7d18c4*/
    if ( v57 != 110 ) /*0x7d18cd*/
    {
      if ( v57 == 99 || v57 == 123 ) /*0x7d18d7*/
      {
        ++v76; /*0x7d18eb*/
        v15 = fgetc_0((FILE *)(Stream)); /*0x7d18ee*/
      }
      else
      {
        v15 = _whiteout((int)&v76, Stream); /*0x7d18e0*/
      }
      C = v15; /*0x7d18f4*/
    }
    if ( v64 && !v74 ) /*0x7d1901*/
    {
  LABEL_253:
      --v76; /*0x7d20e3*/
      _un_inc(C, Stream); /*0x7d20ec*/
      break; /*0x7d20ec*/
    }
    if ( v14 > 111 ) /*0x7d190a*/
    {
      switch ( v14 ) /*0x7d1b73*/
      {
        case 'p': /*0x7d1b73*/
          v73 = 1; /*0x7d1e1c*/
          goto LABEL_181; /*0x7d1e1c*/
        case 's': /*0x7d1b73*/
          if ( v75 > 0 ) /*0x7d1c6e*/
            v68 = 1; /*0x7d1c70*/
          v30 = (char *)(asc_87C918); /*0x7d1c74*/
          break;
        case 'u': /*0x7d1b73*/
          goto LABEL_181; /*0x7d1b84*/
        case 'x': /*0x7d1b73*/
  LABEL_63:
          v16 = C; /*0x7d1956*/
          if ( C == 45 ) /*0x7d195c*/
          {
            v67 = 1; /*0x7d1962*/
          }
          else if ( C != 43 ) /*0x7d1be3*/
          {
  LABEL_129:
            if ( v16 != 48 ) /*0x7d1c0a*/
              goto LABEL_189; /*0x7d1c0a*/
            ++v76; /*0x7d1c13*/
            v31 = fgetc_0((FILE *)(Stream)); /*0x7d1c16*/
            v16 = v31; /*0x7d1c1b*/
            C = v31; /*0x7d1c21*/
            if ( (unsigned char)v31 == 120 || (unsigned char)v31 == 88 ) /*0x7d1c29*/
            {
              ++v76; /*0x7d1c58*/
              v16 = fgetc_0((FILE *)(Stream)); /*0x7d1c61*/
              C = v16; /*0x7d1c63*/
              v51 = 120; /*0x7d1c66*/
              goto LABEL_134; /*0x7d1c68*/
            }
            v65 = 1; /*0x7d1c2e*/
            if ( v14 != 120 ) /*0x7d1c35*/
            {
              v51 = 111; /*0x7d1c37*/
  LABEL_134:
              v14 = v51; /*0x7d1c39*/
              goto LABEL_189; /*0x7d1c3a*/
            }
            --v76; /*0x7d1c42*/
            _un_inc(v31, Stream); /*0x7d1c46*/
            v16 = 48; /*0x7d1c4f*/
            goto LABEL_188; /*0x7d1c50*/
          }
          if ( --v74 || !v64 ) /*0x7d1bee*/
          {
            ++v76; /*0x7d1bf9*/
            v16 = fgetc_0((FILE *)(Stream)); /*0x7d1c01*/
            C = v16; /*0x7d1c04*/
          }
          else
          {
            v71 = 1; /*0x7d1bf0*/
          }
          goto LABEL_129; /*0x7d1bf4*/
        case '{': /*0x7d1b73*/
          if ( v75 > 0 ) /*0x7d1bc0*/
            v68 = 1; /*0x7d1bc2*/
          v30 = v77 + 1; /*0x7d1bc9*/
          v77 = v30; /*0x7d1bca*/
          if ( *v30 != 94 ) /*0x7d1bd0*/
          {
  LABEL_141:
            memset(v54, 0, sizeof(v54)); /*0x7d1c7d*/
            if ( v57 == 123 && *v30 == 93 ) /*0x7d1c96*/
            {
              IDA_LOBYTE(v32) = 93; /*0x7d1c98*/
              ++v30; /*0x7d1c9a*/
              v54[11] = 32; /*0x7d1c9b*/
            }
            else
            {
              IDA_LOBYTE(v32) = v59; /*0x7d1ca1*/
            }
            while ( 1 ) /*0x7d1ca4*/
            {
              v33 = *v30; /*0x7d1ca4*/
              if ( *v30 == 93 ) /*0x7d1ca8*/
                break; /*0x7d1ca8*/
              ++v30; /*0x7d1caa*/
              if ( v33 == 45 && (unsigned char)v32 && (v34 = *v30, *v30 != 93) ) /*0x7d1cb8*/
              {
                ++v30; /*0x7d1cba*/
                if ( (uint8_t)v32 >= v34 ) /*0x7d1cbd*/
                {
                  v35 = v32; /*0x7d1cc3*/
                  IDA_LOBYTE(v32) = v34; /*0x7d1cc5*/
                }
                else
                {
                  v35 = v34; /*0x7d1cbf*/
                }
                if ( (uint8_t)v32 <= v35 ) /*0x7d1cc9*/
                {
                  v32 = (uint8_t)v32; /*0x7d1ccb*/
                  v36 = v35 - (uint8_t)v32 + 1; /*0x7d1cd3*/
                  do /*0x7d1cea*/
                  {
                    v54[v32 >> 3] |= 1 << (v32 & 7); /*0x7d1ce6*/
                    ++v32; /*0x7d1ce8*/
                    --v36; /*0x7d1ce9*/
                  }
                  while ( v36 ); /*0x7d1cea*/
                }
                IDA_LOBYTE(v32) = 0; /*0x7d1cec*/
              }
              else
              {
                IDA_LOBYTE(v32) = v33; /*0x7d1cf3*/
                v54[v33 >> 3] |= 1 << (v33 & 7); /*0x7d1d05*/
              }
            }
            if ( *v30 ) /*0x7d1d09*/
            {
              if ( v57 == 123 ) /*0x7d1d16*/
                v77 = v30; /*0x7d1d18*/
              v37 = v62; /*0x7d1d1e*/
              --v76; /*0x7d1d21*/
              v61 = v62; /*0x7d1d28*/
              _un_inc(C, Stream); /*0x7d1d2b*/
              while ( 1 ) /*0x7d1d36*/
              {
                if ( v64 ) /*0x7d1d36*/
                {
                  if ( !v74-- ) /*0x7d1d38*/
                    break; /*0x7d1d40*/
                }
                ++v76; /*0x7d1d46*/
                v39 = fgetc_0((FILE *)(Stream)); /*0x7d1d4a*/
                C = v39; /*0x7d1d53*/
                if ( v39 == -1 || ((1 << (v39 & 7)) & (v66 ^ (char)v54[v39 >> 3])) == 0 ) /*0x7d1d74*/
                {
                  --v76; /*0x7d1dd6*/
                  _un_inc(v39, Stream); /*0x7d1ddb*/
                  break; /*0x7d1ddb*/
                }
                if ( v72 ) /*0x7d1d7a*/
                {
                  v61 = (wchar_t *)((char *)v61 + 1); /*0x7d1dce*/
                }
                else
                {
                  if ( v68 ) /*0x7d1d80*/
                  {
                    SrcCh[0] = v39; /*0x7d1d88*/
                    if ( *((char *)off_87C590 + 2 * (uint8_t)v39 + 1) < 0 ) /*0x7d1d93*/
                    {
                      ++v76; /*0x7d1d95*/
                      SrcCh[1] = fgetc_0((FILE *)(Stream)); /*0x7d1d9f*/
                    }
                    mbtowc(&DstCh, SrcCh, SrcSizeInBytes); /*0x7d1db0*/
                    *v37++ = DstCh; /*0x7d1dbc*/
                  }
                  else
                  {
                    *(unsigned char *)v37 = v39; /*0x7d1dc3*/
                    v37 = (wchar_t *)((char *)v37 + 1); /*0x7d1dc5*/
                  }
                  v62 = v37; /*0x7d1dc6*/
                }
              }
              if ( v61 != v37 ) /*0x7d1de5*/
              {
                if ( !v72 ) /*0x7d1def*/
                {
                  ++v60; /*0x7d1df5*/
                  if ( v57 != 99 ) /*0x7d1dfc*/
                  {
                    if ( v68 ) /*0x7d1e09*/
                      *v62 = 0; /*0x7d1e0b*/
                    else
                      *(unsigned char *)v62 = 0; /*0x7d1e14*/
                  }
                }
                goto LABEL_242; /*0x7d1e0f*/
              }
            }
            goto LABEL_256; /*0x7d1de5*/
          }
          ++v30; /*0x7d1bd8*/
          break;
        default:
  LABEL_117:
          if ( (uint8_t)*v77 == C ) /*0x7d1b9e*/
          {
            --v69; /*0x7d1ba4*/
            if ( !v72 ) /*0x7d1bab*/
              a3 = v55; /*0x7d1bb4*/
            goto LABEL_242; /*0x7d1bb7*/
          }
          goto LABEL_253; /*0x7d1b9e*/
      }
  LABEL_140:
      v66 = -1; /*0x7d1c79*/
      goto LABEL_141; /*0x7d1c79*/
    }
    switch ( v14 ) /*0x7d1910*/
    {
      case 'o': /*0x7d1910*/
  LABEL_181:
        v16 = C; /*0x7d1e20*/
        if ( C == 45 ) /*0x7d1e26*/
        {
          v67 = 1; /*0x7d1e28*/
        }
        else if ( C != 43 ) /*0x7d1e31*/
        {
          goto LABEL_189; /*0x7d1e31*/
        }
        if ( !--v74 && v64 ) /*0x7d1e3c*/
        {
          v71 = 1; /*0x7d1e3e*/
          goto LABEL_189; /*0x7d1e42*/
        }
        ++v76; /*0x7d1e47*/
        v16 = fgetc_0((FILE *)(Stream)); /*0x7d1e50*/
  LABEL_188:
        C = v16; /*0x7d1e52*/
  LABEL_189:
        if ( v61 ) /*0x7d1e59*/
        {
          if ( !v71 ) /*0x7d1e63*/
          {
            while ( 1 ) /*0x7d1e69*/
            {
              if ( v14 == 120 ) /*0x7d1e6c*/
              {
                if ( (int)SrcSizeInBytes <= 1 ) /*0x7d1e75*/
                  v40 = *((unsigned char *)off_87C590 + 2 * v16) & 0x80; /*0x7d1e8e*/
                else
                  v40 = _isctype(v16, 128); /*0x7d1e7d*/
                if ( !v40 ) /*0x7d1e95*/
                  goto LABEL_209; /*0x7d1e95*/
                v63 *= 16; /*0x7d1eaa*/
                v16 = _hextodec(v16); /*0x7d1eb5*/
                C = v16; /*0x7d1eb8*/
              }
              else
              {
                if ( (int)SrcSizeInBytes <= 1 ) /*0x7d1ec4*/
                  v41 = *((unsigned char *)off_87C590 + 2 * v16) & 4; /*0x7d1eda*/
                else
                  v41 = _isctype(v16, 4); /*0x7d1ec9*/
                if ( !v41 ) /*0x7d1edf*/
                {
  LABEL_209:
                  --v76; /*0x7d1f3e*/
                  _un_inc(v16, Stream); /*0x7d1f45*/
                  break; /*0x7d1f45*/
                }
                if ( v14 == 111 ) /*0x7d1ee4*/
                {
                  if ( v16 >= 56 ) /*0x7d1ee9*/
                    goto LABEL_209; /*0x7d1ee9*/
                  v42 = 8 * v63; /*0x7d1ef4*/
                }
                else
                {
                  v42 = 10 * v63; /*0x7d1f05*/
                }
                v63 = v42; /*0x7d1f0a*/
              }
              ++v65; /*0x7d1f10*/
              v63 += v16 - 48; /*0x7d1f17*/
              if ( v64 ) /*0x7d1f21*/
              {
                if ( !--v74 ) /*0x7d1f26*/
                  break; /*0x7d1f26*/
              }
              ++v76; /*0x7d1f2b*/
              v16 = fgetc_0((FILE *)(Stream)); /*0x7d1f33*/
              C = v16; /*0x7d1f36*/
            }
          }
          if ( v67 ) /*0x7d1f50*/
            v63 = -v63; /*0x7d1f66*/
        }
        else
        {
          if ( !v71 ) /*0x7d1f72*/
          {
            while ( 1 ) /*0x7d1f78*/
            {
              if ( v14 == 120 || v14 == 112 ) /*0x7d1f80*/
              {
                if ( (int)SrcSizeInBytes <= 1 ) /*0x7d1fc3*/
                  v45 = *((unsigned char *)off_87C590 + 2 * v16) & 0x80; /*0x7d1fdc*/
                else
                  v45 = _isctype(v16, 128); /*0x7d1fcb*/
                if ( !v45 ) /*0x7d1fe3*/
                {
  LABEL_231:
                  --v76; /*0x7d201c*/
                  _un_inc(v16, Stream); /*0x7d2023*/
                  break; /*0x7d2023*/
                }
                v44 = 16 * v11; /*0x7d1fe6*/
                v16 = _hextodec(v16); /*0x7d1fee*/
                C = v16; /*0x7d1ff1*/
              }
              else
              {
                if ( (int)SrcSizeInBytes <= 1 ) /*0x7d1f89*/
                  v43 = *((unsigned char *)off_87C590 + 2 * v16) & 4; /*0x7d1f9f*/
                else
                  v43 = _isctype(v16, 4); /*0x7d1f8e*/
                if ( !v43 ) /*0x7d1fa4*/
                  goto LABEL_231; /*0x7d1fa4*/
                if ( v14 == 111 ) /*0x7d1fa9*/
                {
                  if ( v16 >= 56 ) /*0x7d1fae*/
                    goto LABEL_231; /*0x7d1fae*/
                  v44 = 8 * v11; /*0x7d1fb0*/
                }
                else
                {
                  v44 = 10 * v11; /*0x7d1fb8*/
                }
              }
              ++v65; /*0x7d1ff4*/
              v11 = v44 + v16 - 48; /*0x7d1ffb*/
              if ( v64 ) /*0x7d1fff*/
              {
                if ( !--v74 ) /*0x7d2004*/
                  break; /*0x7d2004*/
              }
              ++v76; /*0x7d2009*/
              v16 = fgetc_0((FILE *)(Stream)); /*0x7d2011*/
              C = v16; /*0x7d2014*/
            }
          }
          if ( v67 ) /*0x7d202e*/
            v11 = -v11; /*0x7d2030*/
        }
        if ( v65 ) /*0x7d203f*/
        {
          if ( v72 ) /*0x7d2049*/
            goto LABEL_242; /*0x7d2049*/
          ++v60; /*0x7d204b*/
          goto LABEL_237; /*0x7d204b*/
        }
        goto LABEL_256; /*0x7d203f*/
      case 'c': /*0x7d1910*/
        if ( !v64 ) /*0x7d1b4e*/
        {
          ++v74; /*0x7d1b50*/
          v64 = 1; /*0x7d1b53*/
        }
        if ( v75 > 0 ) /*0x7d1b5e*/
          v68 = 1; /*0x7d1b60*/
        v30 = (char *)(asc_87C920); /*0x7d1b64*/
        goto LABEL_140; /*0x7d1b69*/
      case 'd': /*0x7d1910*/
        goto LABEL_181; /*0x7d1922*/
    }
    if ( v14 <= 100 ) /*0x7d1928*/
      goto LABEL_117; /*0x7d1928*/
    if ( v14 <= 103 )
    {
      v17 = C; /*0x7d196b*/
      v18 = &v52; /*0x7d196e*/
      if ( C == 45 ) /*0x7d1977*/
      {
        v52 = 45; /*0x7d1979*/
        v18 = &v53; /*0x7d197f*/
      }
      else if ( C != 43 ) /*0x7d198a*/
      {
        v19 = Stream; /*0x7d19a3*/
        goto LABEL_70; /*0x7d19a3*/
      }
      v19 = Stream; /*0x7d198c*/
      --v74; /*0x7d198f*/
      ++v76; /*0x7d1992*/
      v17 = fgetc_0((FILE *)(Stream)); /*0x7d199b*/
      C = v17; /*0x7d199e*/
  LABEL_70:
      if ( !v64 || v74 > 349 ) /*0x7d19b3*/
        v74 = 349; /*0x7d19b5*/
      while ( (int)SrcSizeInBytes <= 1 ? *((unsigned char *)off_87C590 + 2 * v17) & 4 : _isctype(v17, 4) )
      {
        if ( !v74-- ) /*0x7d19e0*/
          break; /*0x7d19e8*/
        ++v65; /*0x7d19ea*/
        *v18++ = v17; /*0x7d19ed*/
        ++v76; /*0x7d19f0*/
        v17 = fgetc_0((FILE *)(v19)); /*0x7d19f9*/
        C = v17; /*0x7d19fc*/
      }
      if ( ::SrcCh == (unsigned char)v17 )
      {
        if ( v74-- )
        {
          ++v76; /*0x7d1a13*/
          v17 = fgetc_0((FILE *)(v19)); /*0x7d1a1c*/
          *v18 = ::SrcCh; /*0x7d1a23*/
          C = v17; /*0x7d1a26*/
          ++v18; /*0x7d1a29*/
          while ( (int)SrcSizeInBytes <= 1 ? *((unsigned char *)off_87C590 + 2 * v17) & 4 : _isctype(v17, 4) )
          {
            if ( !v74-- ) /*0x7d1a4e*/
              break; /*0x7d1a56*/
            ++v65; /*0x7d1a58*/
            *v18++ = v17; /*0x7d1a5b*/
            ++v76; /*0x7d1a5e*/
            v17 = fgetc_0((FILE *)(v19)); /*0x7d1a67*/
            C = v17; /*0x7d1a6a*/
          }
        }
      }
      if ( v65 && (v17 == 101 || v17 == 69) )
      {
        if ( v74-- )
        {
          *v18++ = 101; /*0x7d1a91*/
          ++v76; /*0x7d1a95*/
          v26 = fgetc_0((FILE *)(v19)); /*0x7d1a99*/
          v17 = v26; /*0x7d1a9e*/
          C = v26; /*0x7d1aa4*/
          if ( v26 == 45 ) /*0x7d1aa7*/
          {
            *v18++ = 45; /*0x7d1aa9*/
            goto LABEL_95; /*0x7d1aac*/
          }
          if ( v26 == 43 ) /*0x7d1ab1*/
          {
  LABEL_95:
            if ( !v74-- ) /*0x7d1ab3*/
            {
              v74 = 0; /*0x7d1abd*/
              goto LABEL_98; /*0x7d1ac0*/
            }
            goto LABEL_97; /*0x7d1abb*/
          }
  LABEL_98:
          while ( (int)SrcSizeInBytes <= 1 ? *((unsigned char *)off_87C590 + 2 * v17) & 4 : _isctype(v17, 4) )
          {
            if ( !v74-- ) /*0x7d1af5*/
              break; /*0x7d1afd*/
            ++v65; /*0x7d1aff*/
            *v18++ = v17; /*0x7d1b02*/
  LABEL_97:
            ++v76; /*0x7d1ac2*/
            v17 = fgetc_0((FILE *)(v19)); /*0x7d1acb*/
            C = v17; /*0x7d1ace*/
          }
        }
      }
      --v76; /*0x7d1b07*/
      _un_inc(v17, v19); /*0x7d1b0c*/
      if ( v65 ) /*0x7d1b17*/
      {
        if ( !v72 ) /*0x7d1b21*/
        {
          ++v60; /*0x7d1b27*/
          *v18 = 0; /*0x7d1b2a*/
          off_87C4D8[0](); /*0x7d1b3d*/
        }
        goto LABEL_242; /*0x7d1b21*/
      }
      break; /*0x7d1b17*/
    }
    if ( v14 == 105 ) /*0x7d1936*/
    {
      v14 = 100; /*0x7d1955*/
      goto LABEL_63; /*0x7d1955*/
    }
    if ( v14 != 110 ) /*0x7d193b*/
      goto LABEL_117; /*0x7d193b*/
    v11 = v76; /*0x7d1945*/
    if ( v72 ) /*0x7d1948*/
      goto LABEL_242; /*0x7d1948*/
  LABEL_237:
    if ( v61 ) /*0x7d2052*/
    {
      *(unsigned long long *)v62 = v63; /*0x7d205a*/
    }
    else if ( v73 ) /*0x7d206b*/
    {
      *(unsigned int *)v62 = v11; /*0x7d206d*/
    }
    else
    {
      *v62 = v11; /*0x7d2071*/
    }
  LABEL_242:
    ++v69; /*0x7d2074*/
    v78 = (int)(v77 + 1); /*0x7d2077*/
    v3 = (char *)v78; /*0x7d207a*/
  LABEL_247:
    if ( C == -1 ) /*0x7d20c5*/
    {
      if ( *v3 == 37 && *(unsigned char *)(v78 + 1) == 110 ) /*0x7d20d3*/
      {
        v3 = (char *)v78; /*0x7d20d5*/
        goto LABEL_251; /*0x7d20d5*/
      }
  LABEL_257:
      result = v60; /*0x7d2119*/
      if ( !v60 && !v69 ) /*0x7d2123*/
        return (ControlClass **)(-1); /*0x7d2125*/
      return (ControlClass **)(result); /*0x7d2128*/
    }
  LABEL_251:
    v4 = *v3; /*0x7d20d7*/
    if ( *v3 ) /*0x7d20d7*/
    {
      v5 = Stream; /*0x7d1737*/
      continue; /*0x7d1737*/
    }
    break;
  }
  LABEL_256:
  if ( C == -1 ) /*0x7d2117*/
    goto LABEL_257; /*0x7d2117*/
  return (ControlClass **)(v60); /*0x7d212d*/
}
}
// 0x7D2132
namespace gamemd {
int _hextodec(int C)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D2132.json)
}
}
// 0x7D21BE
namespace gamemd {
AbstractClass * * _woutput(FILE * File, CampaignScore * aP1, ObjectClass * aP2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7D21BE)
}
}
// 0x7D2C36
namespace gamemd {
unsigned int * _openfile(char * FileName, unsigned char * a2, int ShareFlag, unsigned int * a4)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7D2C36)
}
}
// 0x7D2DA6
namespace gamemd {
unsigned int * _getstream()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7D2DA6)
}
}
// 0x7D2FC8
namespace gamemd {
void _putwc_lk(wchar_t WCh, FILE * File)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D2FC8.json)
}
}
// 0x7D30D1
namespace gamemd {
void _commit(int FileHandle)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D30D1.json)
}
}
// 0x7D3164
namespace gamemd {
void _ioinit()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D3164.json)
}
}
// 0x7D3320
namespace gamemd {
void* _ioterm_0()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7D3320)
}
}
// 0x7D3482
namespace gamemd {
void _setmbcp(int CodePage)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D3482.json)
}
}
// 0x7D36AC
namespace gamemd {
void* setSBCS()
{
  memset(&unk_B78960, 0, 0x100u); /*0x7d36b7*/
  unk_B78A60 = 0; /*0x7d36b9*/
  dword_B78840 = 0; /*0x7d36c1*/
  dword_B7885C = 0; /*0x7d36c6*/
  dword_B78A64 = 0; /*0x7d36cb*/
  unk_B78850 = 0; /*0x7d36d0*/
  unk_B78854 = 0; /*0x7d36d1*/
  unk_B78858 = 0; /*0x7d36d2*/
  return 0; /*0x7d36d3*/
}
}
// 0x7D36D5
namespace gamemd {
int setSBUpLow()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7D36D5)
}
}
// 0x7D385A
namespace gamemd {
int _getmbcp()
{
  return dword_B7885C != 0 ? dword_B78840 : 0;
}
} // namespace gamemd

// 0x7D386A
namespace gamemd {
void* __initmbctable()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7D386A)
}
}
// 0x7D3886
namespace gamemd {
unsigned char * _mbsnbcpy(IUnknown * aP0, const unsigned char * Source, size_t Count)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7D3886)
}
}
// 0x7D3920
namespace gamemd {
void iswctype(wint_t C, wctype_t Type)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D3920.json)
}
}
// 0x7D3A6D
namespace gamemd {
ControlClass * * _winput(FILE * File, CampaignScore * aP1, int a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7D3A6D)
}
}
// 0x7D453C
namespace gamemd {
void _hextodec_0(wint_t C)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D453C.json)
}
}
// 0x7D482C
namespace gamemd {
void * signal_7D482C(int Signal, void * Function)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D482C.json)
}
}
// 0x7D4A10
namespace gamemd {
void raise(int Signal)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D4A10.json)
}
}
// 0x7D4C00
namespace gamemd {
ObjectClass * * strcat(CCINIClass * aP0, ObjectClass * aP1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7D4C00)
}
}
// 0x7D4CE0
namespace gamemd {
void* __tzset()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7D4CE0)
}
}
// 0x7D4D0E
namespace gamemd {
void _tzset()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D4D0E.json)
}
}
// 0x7D4D24
namespace gamemd {
void* _tzset_lk()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7D4D24)
}
}
// 0x7D4FCC
namespace gamemd {
void _isindst_0(unsigned int * a1)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D4FCC.json)
}
}
// 0x7D5178
namespace gamemd {
void cvtdate(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D5178.json)
}
}
// 0x7D544A
namespace gamemd {
void _sopen(const char * FileName, int OpenFlag, int ShareFlag, ...)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D544A.json)
}
}
// 0x7D571F
namespace gamemd {
unsigned char * _mbsrchr(const unsigned char * String, unsigned int C)
{
  uint8_t *v2; // esi
  const uint8_t *v4; // ecx
  uint8_t v5; // dl
  int v6; // eax
  bool v7; // zf

  v2 = 0; /*0x7d5723*/
  if ( !dword_B7885C ) /*0x7d572b*/
    return (uint8_t *)strrchr((const char *)String, C); /*0x7d573a*/
  _lock(25); /*0x7d573f*/
  v4 = String; /*0x7d5745*/
  do /*0x7d5781*/
  {
    v5 = *v4; /*0x7d5748*/
    v6 = *v4; /*0x7d574a*/
    if ( (byte_B78961[(uint8_t)v6] & 4) != 0 ) /*0x7d5757*/
    {
      v5 = *++v4; /*0x7d5759*/
      if ( v5 ) /*0x7d575f*/
      {
        if ( C == (v5 | (v6 << 8)) ) /*0x7d576c*/
          v2 = (uint8_t *)(v4 - 1); /*0x7d576e*/
        goto LABEL_12; /*0x7d5771*/
      }
      v7 = v2 == 0; /*0x7d5773*/
    }
    else
    {
      v7 = C == v6; /*0x7d5777*/
    }
    if ( v7 ) /*0x7d577a*/
      v2 = (uint8_t *)v4; /*0x7d577c*/
  LABEL_12:
    ++v4; /*0x7d577e*/
  }
  while ( v5 ); /*0x7d5781*/
  _unlock(25); /*0x7d5785*/
  return v2; /*0x7d578e*/
}
}
// 0x7D5791
namespace gamemd {
int _rmtmp()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D5791.json)
}
}
// 0x7D5A68
namespace gamemd {
unsigned char * _wincmdln()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7D5A68)
}
}
// 0x7D5AC0
namespace gamemd {
int _setenvp()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D5AC0.json)
}
}
// 0x7D5B79
namespace gamemd {
int _setargv()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D5B79.json)
}
}
// 0x7D5C12
namespace gamemd {
unsigned int * parse_cmdline(unsigned char * a1, unsigned char ** a2, unsigned char * a3, unsigned int * a4, unsigned int * a5)
{
  uint8_t *v6; // esi
  uint8_t **v7; // edi
  uint8_t *v8; // eax
  uint8_t v9; // dl
  uint8_t v10; // dl
  unsigned int v11; // ebx
  unsigned int v12; // edx
  unsigned int v13; // ebx
  unsigned int v14; // ebx
  uint8_t v15; // dl
  int v17; // [esp+14h] [ebp+8h]
  BOOL v18; // [esp+24h] [ebp+18h]

  *a5 = 0; /*0x7d5c1d*/
  v6 = a3; /*0x7d5c20*/
  v7 = a2; /*0x7d5c24*/
  *a4 = 1; /*0x7d5c27*/
  v8 = a1; /*0x7d5c2d*/
  if ( a2 ) /*0x7d5c32*/
  {
    *a2 = a3; /*0x7d5c34*/
    v7 = ++a2; /*0x7d5c36*/
  }
  if ( *a1 == 34 ) /*0x7d5c3f*/
  {
    while ( 1 ) /*0x7d5c41*/
    {
      v9 = *++v8; /*0x7d5c41*/
      if ( v9 == 34 || !v9 ) /*0x7d5c4c*/
        break; /*0x7d5c4c*/
      if ( (byte_B78961[v9] & 4) != 0 ) /*0x7d5c58*/
      {
        ++*a5; /*0x7d5c5a*/
        if ( v6 ) /*0x7d5c5e*/
          *v6++ = *v8++; /*0x7d5c62*/
      }
      ++*a5; /*0x7d5c66*/
      if ( v6 ) /*0x7d5c6a*/
        *v6++ = *v8; /*0x7d5c6e*/
    }
    ++*a5; /*0x7d5c73*/
    if ( v6 ) /*0x7d5c77*/
      *v6++ = 0; /*0x7d5c79*/
    if ( *v8 == 34 ) /*0x7d5c80*/
      ++v8; /*0x7d5c82*/
  }
  else
  {
    do /*0x7d5cb7*/
    {
      ++*a5; /*0x7d5c85*/
      if ( v6 ) /*0x7d5c89*/
        *v6++ = *v8; /*0x7d5c8d*/
      v10 = *v8++; /*0x7d5c90*/
      if ( (byte_B78961[v10] & 4) != 0 ) /*0x7d5c9d*/
      {
        ++*a5; /*0x7d5c9f*/
        if ( v6 ) /*0x7d5ca3*/
          *v6++ = *v8; /*0x7d5ca7*/
        ++v8; /*0x7d5caa*/
      }
      if ( v10 == 32 ) /*0x7d5cae*/
        break; /*0x7d5cae*/
      if ( !v10 ) /*0x7d5cb2*/
      {
        --v8; /*0x7d5cbd*/
        goto LABEL_28; /*0x7d5cbe*/
      }
    }
    while ( v10 != 9 ); /*0x7d5cb7*/
    if ( v6 ) /*0x7d5cc2*/
      *(v6 - 1) = 0; /*0x7d5cc4*/
  }
  LABEL_28:
  v18 = 0; /*0x7d5cc8*/
  while ( *v8 ) /*0x7d5ccc*/
  {
    while ( *v8 == 32 || *v8 == 9 ) /*0x7d5cdf*/
      ++v8; /*0x7d5ce1*/
    if ( !*v8 ) /*0x7d5ce4*/
      break; /*0x7d5ce4*/
    if ( v7 ) /*0x7d5cef*/
    {
      *v7++ = v6; /*0x7d5cf1*/
      a2 = v7; /*0x7d5cf6*/
    }
    ++*a4; /*0x7d5cfc*/
    while ( 1 ) /*0x7d5cfe*/
    {
      v17 = 1; /*0x7d5cfe*/
      v11 = 0; /*0x7d5d05*/
      while ( *v8 == 92 ) /*0x7d5d0a*/
      {
        ++v8; /*0x7d5d0c*/
        ++v11; /*0x7d5d0d*/
      }
      if ( *v8 == 34 ) /*0x7d5d13*/
      {
        if ( (v11 & 1) == 0 ) /*0x7d5d18*/
        {
          if ( v18 && v8[1] == 34 ) /*0x7d5d28*/
            ++v8; /*0x7d5d2a*/
          else
            v17 = 0; /*0x7d5d2e*/
          v7 = a2; /*0x7d5d31*/
          v18 = !v18; /*0x7d5d3c*/
        }
        v11 >>= 1; /*0x7d5d3f*/
      }
      v12 = v11; /*0x7d5d41*/
      v13 = v11 - 1; /*0x7d5d43*/
      if ( v12 ) /*0x7d5d46*/
      {
        v14 = v13 + 1; /*0x7d5d48*/
        do /*0x7d5d54*/
        {
          if ( v6 ) /*0x7d5d4b*/
            *v6++ = 92; /*0x7d5d4d*/
          ++*a5; /*0x7d5d51*/
          --v14; /*0x7d5d53*/
        }
        while ( v14 ); /*0x7d5d54*/
      }
      v15 = *v8; /*0x7d5d56*/
      if ( !*v8 || !v18 && (v15 == 32 || v15 == 9) ) /*0x7d5d6a*/
        break; /*0x7d5d6a*/
      if ( v17 ) /*0x7d5d70*/
      {
        if ( v6 ) /*0x7d5d74*/
        {
          if ( (byte_B78961[v15] & 4) != 0 ) /*0x7d5d80*/
          {
            *v6++ = v15; /*0x7d5d82*/
            ++v8; /*0x7d5d85*/
            ++*a5; /*0x7d5d86*/
          }
          *v6++ = *v8; /*0x7d5d8a*/
        }
        else if ( (byte_B78961[v15] & 4) != 0 ) /*0x7d5d99*/
        {
          ++v8; /*0x7d5d9b*/
          ++*a5; /*0x7d5d9c*/
        }
        ++*a5; /*0x7d5d9e*/
      }
      ++v8; /*0x7d5da0*/
    }
    if ( v6 ) /*0x7d5da8*/
      *v6++ = 0; /*0x7d5daa*/
    ++*a5; /*0x7d5dae*/
  }
  if ( v7 ) /*0x7d5db7*/
    *v7 = 0; /*0x7d5db9*/
  ++*a4; /*0x7d5dc2*/
  return a4; /*0x7d5dbf*/
}
}
// 0x7D5DC6
namespace gamemd {
int * __crtGetEnvironmentStringsA()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7D5DC6)
}
}
// 0x7D60B5
namespace gamemd {
void* __init_time()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7D60B5)
}
}
// 0x7D6624
namespace gamemd {
AbstractClass * * __init_numeric()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7D6624)
}
}
// 0x7D6AA2
namespace gamemd {
AbstractClass * * __init_ctype()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7D6AA2)
}
}
// 0x7D6D2A
namespace gamemd {
void __get_qualified_locale(char * a0, CCINIClass * aP1, int a3)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D6D2A.json)
}
}
// 0x7D6F86
namespace gamemd {
void LangCountryEnumProc_4(LPSTR)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D6F86.json)
}
}
// 0x7D71E0
namespace gamemd {
void LanguageEnumProc_4(LPSTR)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D71E0.json)
}
}
// 0x7D72D4
namespace gamemd {
int CountryEnumProc_4(LPSTR)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D72D4.json)
}
}
// 0x7D735A
namespace gamemd {
int GetLcidFromDefault()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D735A.json)
}
}
// 0x7D75E0
namespace gamemd {
void * memset(void * a0, int Val, AbstractClass * aP2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7D75E0)
}
}
// 0x7D77D6
namespace gamemd {
void _wctomb_lk(LPSTR lpMultiByteStr, WCHAR WideCharStr)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D77D6.json)
}
}
// 0x7D7AAF
namespace gamemd {
void _ld12cvt(unsigned short * a1, unsigned int * a2, int * a3)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D7AAF.json)
}
}
// 0x7D7EE0
namespace gamemd {
void unknown_libname_76()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D7EE0.json)
}
}
// 0x7D7FF7
namespace gamemd {
int unknown_libname_77()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D7FF7.json)
}
}
// 0x7D86E6
namespace gamemd {
void* unknown_libname_90()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7D86E6)
}
}
// 0x7D88EC
namespace gamemd {
void* unknown_libname_91()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7D88EC)
}
}
// 0x7D899E
namespace gamemd {
void* unknown_libname_92()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7D899E)
}
}
// 0x7D8BA4
namespace gamemd {
void* unknown_libname_93()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7D8BA4)
}
}
// 0x7D8C6B
namespace gamemd {
void _87except(int a1, int a2, unsigned short * a3)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D8C6B.json)
}
}
// 0x7D8E22
namespace gamemd {
void __decomp()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D8E22.json)
}
}
// 0x7D8EE3
namespace gamemd {
void _frnd(double a1)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D8EE3.json)
}
// 0x7D9038
namespace gamemd {
double _nextafter(double X, double Y)
{
    return 0.0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D9038.json)
}
}
}
// 0x7D93A1
namespace gamemd {
void _alloc_osfhnd()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D93A1.json)
}
}
// 0x7D9729
namespace gamemd {
void __crtGetStringTypeA(DWORD dwInfoType, CCINIClass * aP1, int cchSrc, LPWORD lpCharType, UINT CodePage, LCID Locale, int a7)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D9729.json)
}
}
// 0x7D9872
namespace gamemd {
ControlClass * * __strgtold12(int a1, char ** a2, char * a3, int a4, int a5, int a6, int a7)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7D9872)
}
}
// 0x7D9DDC
namespace gamemd {
int _mbtowc_lk(LPWSTR lpWideCharStr, unsigned char * lpMultiByteStr, unsigned int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D9DDC.json)
}
}
// 0x7D9FAC
namespace gamemd {
void * sub_7D9FAC()
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D9FAC.json)
}
}
// 0x7D9FCA
namespace gamemd {
void _flswbuf(unsigned short Buf, FILE * a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D9FCA.json)
}
}
// 0x7DA0F1
namespace gamemd {
void __crtGetStringTypeW(DWORD dwInfoType, CCINIClass * aP1, int cchSrc, CCINIClass * aP3, UINT CodePage, LCID Locale)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DA0F1.json)
}
}
// 0x7DA2B6
namespace gamemd {
ControlClass * * __crtLCMapStringW(CampaignScore * aP0, CampaignScore * aP1, CampaignScore * aP2, int cchSrc, CampaignScore * aP4, CampaignScore * aP5, CampaignScore * aP6)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DA2B6)
}
}
// 0x7DA512
namespace gamemd {
void _getwc_lk(FILE * File)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DA512.json)
}
}
// 0x7DA638
namespace gamemd {
void _ungetwc_lk(wchar_t MbCh, unsigned int * a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DA638.json)
}
}
// 0x7DA725
namespace gamemd {
void __crtCompareStringA(LCID Locale, DWORD dwCmpFlags, CHAR * lpString1, int cchCount1, CHAR * lpString2, int cchCount2, UINT CodePage)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DA725.json)
}
}
// 0x7DA9CD
namespace gamemd {
AbstractClass * * __crtsetenv(char * Str, int a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DA9CD)
}
}
// 0x7DAC6C
namespace gamemd {
void _chsize_lk(int FileHandle, LONG lDistanceToMove)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DAC6C.json)
}
}
// 0x7DAE6E
namespace gamemd {
void isctype_CRT(unsigned char a1, int a2, unsigned char a3)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DAE6E.json)
}
}
// 0x7DAE9F
namespace gamemd {
void __crtMessageBoxA(int a1, int a2, int a3)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DAE9F.json)
}
}
// 0x7DAF28
namespace gamemd {
void __getlocaleinfo(int a1, LCID Locale, LCTYPE LCType, CCINIClass * aP3)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DAF28.json)
}
}
// 0x7DB207
namespace gamemd {
AbstractClass * * _I10_OUTPUT(long long a1, int a2, int a3, char a4, int a5)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DB207)
}
}
// 0x7DB68B
namespace gamemd {
void _raise_exc(ULONG_PTR Arguments, unsigned int * a2, DWORD dwExceptionCode, short a4, double * a5, double * a6)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DB68B.json)
}
}
// 0x7DB93E
namespace gamemd {
void _handle_exc(char a1, double * a2, short a3)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DB93E.json)
}
}
// 0x7DBC68
namespace gamemd {
void* __clrfp()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DBC68)
}
}
// 0x7DBCF0
namespace gamemd {
void ldexp(double X, int Y)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DBCF0.json)
}
}
// 0x7DBED6
namespace gamemd {
void __ld12mul(int a1, int a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DBED6.json)
}
}
// 0x7DC291
namespace gamemd {
void _filwbuf(unsigned short ** a1)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DC291.json)
}
}
// 0x7DC378
namespace gamemd {
unsigned char * _mbschr(const unsigned char * Str, unsigned int C)
{
  const uint8_t *i; // esi
  uint16_t v4; // bx
  uint8_t v5; // al

  if ( !dword_B7885C ) /*0x7dc384*/
    return (uint8_t *)strchr((const char *)Str, C); /*0x7dc38c*/
  _lock(25); /*0x7dc397*/
  for ( i = Str; ; ++i ) /*0x7dc39c*/
  {
    v4 = *i; /*0x7dc3a0*/
    if ( !*i ) /*0x7dc3a0*/
      break; /*0x7dc3a0*/
    if ( (byte_B78961[(uint8_t)v4] & 4) != 0 ) /*0x7dc3b3*/
    {
      v5 = *++i; /*0x7dc3b5*/
      if ( !v5 ) /*0x7dc3bb*/
      {
        _unlock(25); /*0x7dc3dc*/
        return 0; /*0x7dc3e4*/
      }
      if ( C == (v5 | (v4 << 8)) ) /*0x7dc3cb*/
      {
        _unlock(25); /*0x7dc3e8*/
        return (uint8_t *)(i - 1); /*0x7dc3f1*/
      }
    }
    else if ( C == *i ) /*0x7dc3d5*/
    {
      break; /*0x7dc3d5*/
    }
  }
  _unlock(25); /*0x7dc3f3*/
  return v4 == C ? (uint8_t *)i : 0;
}
}
// 0x7DC468
namespace gamemd {
void _setmode_lk(int a1, int a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DC468.json)
}
}
// 0x7DC4C9
namespace gamemd {
void __crtGetLocaleInfoW(LCID Locale, LCTYPE LCType, LPWSTR lpLCData, int cchData, UINT CodePage)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DC4C9.json)
}
}
// 0x7DC5DC
namespace gamemd {
void __crtGetLocaleInfoA(LCID Locale, LCTYPE LCType, CCINIClass * aP2, int cchData, UINT CodePage)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DC5DC.json)
}
}
// 0x7DC7CB
namespace gamemd {
void HandleErrorCOM(int a1, int a2, int a3, VARTYPE vt, ICreateErrorInfo * pperrinfo, LPCWSTR lpString, int a7, void ** a8)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DC7CB.json)
}
}
// 0x7DCE0E
namespace gamemd {
unsigned int * _com_error::sub_7DCE0E(int a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DCE0E.json)
}
}
// 0x7DCE3B
namespace gamemd {
HLOCAL _com_error::sub_7DCE3B()
{
    return nullptr;
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DCE3B.json)
}
}
// 0x7DCFC4
namespace gamemd {
void * _strupr(char * String)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DCFC4)
}
}
// 0x7DD20F
namespace gamemd {
int _getch()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DD20F.json)
}
}
// 0x7DD505
namespace gamemd {
void output(char * a1, int a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DD505.json)
}
}
// 0x7DDCD6
namespace gamemd {
BlowStraw * * _wcsupr(CampaignScore * aP0)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DDCD6)
}
}
// 0x7DE200
namespace gamemd {
unsigned int ConvertRGB24to556(int a1, unsigned short * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DE200)
}
}
// 0x7DE53A
namespace gamemd {
unsigned int ConvertRGB24toRGB565(int a1, unsigned short * a2, __m64, __m64, int a5)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DE53A)
}
}
// 0x7DE87A
namespace gamemd {
unsigned int ConvertRGB24to655(int a1, unsigned short * a2, __m64, __m64, int a5)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DE87A)
}
}
// 0x7DEBBA
namespace gamemd {
unsigned int ConvertRGB24to565(int a1, unsigned short * a2, __m64, __m64, int a5)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DEBBA)
}
}
// 0x7D06E2
namespace gamemd {
int sub_7D06E2()
{
  return dword_B782C8; /*0x7d06e7*/
}
} // namespace gamemd

// 0x7D06E8
namespace gamemd {
int _callnewh(IUnknown * aP0)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7D06E8)
}
} // namespace gamemd

// 0x7D07DF
namespace gamemd {
int _read(int FileHandle, void * DstBuf, unsigned int MaxCharCount)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D07DF.json)
}
} // namespace gamemd

// 0x7D0D55
namespace gamemd {
int _write(int FileHandle, CCINIClass * aP1, unsigned int MaxCharCount)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D0D55.json)
}
} // namespace gamemd

// 0x7D107D
namespace gamemd {
size_t _msize(CCINIClass * aP0)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D107D.json)
}
} // namespace gamemd

// 0x7D12E6
namespace gamemd {
unsigned char * strncnt(const unsigned char * String, int Count)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7D12E6)
}
} // namespace gamemd

// 0x7D1386
namespace gamemd {
int _mtinit()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D1386.json)
}
} // namespace gamemd

// 0x7D13F8
namespace gamemd {
int _initptd(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D13F8.json)
}
} // namespace gamemd

// 0x7D140B
namespace gamemd {
unsigned int * _getptd()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7D140B)
}
} // namespace gamemd

// 0x7D1518
namespace gamemd {
int GetCurrentThread()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7D1518)
}
} // namespace gamemd

// 0x7D151E
namespace gamemd {
int _fltin2(int a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D151E.json)
}
} // namespace gamemd

// 0x7D161B
namespace gamemd {
int * _dosmaperr(unsigned int a1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7D161B)
}
} // namespace gamemd

// 0x7D168E
namespace gamemd {
int * _errno()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7D168E)
}
} // namespace gamemd

// 0x7D1697
namespace gamemd {
unsigned int * __doserrno()
{
  return _getptd() + 3; /*0x7d169f*/
}
} // namespace gamemd

// 0x7D16A0
namespace gamemd {
unsigned char * _mbsdec(const unsigned char * Start, const unsigned char * Pos)
{
  const uint8_t *v3; // esi

  if ( Start >= Pos ) /*0x7d16aa*/
    return 0; /*0x7d16ac*/
  if ( !dword_B7885C ) /*0x7d16b7*/
    return (uint8_t *)(Pos - 1); /*0x7d16b9*/
  _lock(25); /*0x7d16c0*/
  v3 = Pos - 1; /*0x7d16c9*/
  if ( (byte_B78961[*(Pos - 1)] & 4) != 0 ) /*0x7d16d4*/
  {
    _unlock(25); /*0x7d16d8*/
    return (uint8_t *)(Pos - 2); /*0x7d16de*/
  }
  else
  {
    do /*0x7d16f4*/
      --v3; /*0x7d16e3*/
    while ( Start <= v3 && (byte_B78961[*v3] & 4) != 0 ); /*0x7d16f4*/
    _unlock(25); /*0x7d16f8*/
    return (uint8_t *)&Pos[-(((unsigned char)Pos - (unsigned char)v3) & 1) - 1]; /*0x7d1709*/
  }
}
} // namespace gamemd

// 0x7D2169
namespace gamemd {
int fgetc_0(FILE * Stream)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D2169.json)
}
} // namespace gamemd

// 0x7D2183
namespace gamemd {
int _un_inc(int Character, FILE * Stream)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D2183.json)
}
} // namespace gamemd

// 0x7D219A
namespace gamemd {
int _whiteout(unsigned int * a1, FILE * Stream)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D219A.json)
}
} // namespace gamemd

// 0x7D290B
namespace gamemd {
unsigned int * write_char_0(wchar_t WCh, FILE * File, unsigned int * a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7D290B)
}
} // namespace gamemd

// 0x7D292B
namespace gamemd {
unsigned int * write_multi_char_0(wchar_t WCh, unsigned int * a2, FILE * File, unsigned int * a4)
{
  unsigned int *result; // eax
  unsigned int *i; // edi

  result = a2; /*0x7d2931*/
  for ( i = (unsigned int *)((char *)a2 - 1); (int)result > 0; i = (unsigned int *)((char *)i - 1) ) /*0x7d2936*/
  {
    result = write_char_0(WCh, File, a4); /*0x7d2945*/
    if ( *a4 == -1 ) /*0x7d2950*/
      break; /*0x7d2950*/
    result = i; /*0x7d2952*/
  }
  return result; /*0x7d2959*/
}
} // namespace gamemd

// 0x7D295C
namespace gamemd {
unsigned int * write_string_0(wchar_t * a1, unsigned int * a2, FILE * File, unsigned int * a4)
{
  unsigned int *result; // eax
  unsigned int *i; // ebx
  wchar_t v7; // ax

  result = a2; /*0x7d2961*/
  for ( i = (unsigned int *)((char *)a2 - 1); (int)result > 0; i = (unsigned int *)((char *)i - 1) ) /*0x7d2968*/
  {
    v7 = *a1++; /*0x7d2972*/
    result = write_char_0(v7, File, a4); /*0x7d297d*/
    if ( *a4 == -1 ) /*0x7d2988*/
      break; /*0x7d2988*/
    result = i; /*0x7d298a*/
  }
  return result; /*0x7d2991*/
}
} // namespace gamemd

// 0x7D2995
namespace gamemd {
int get_int_arg_0(ObjectClass * aP0)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D2995.json)
}
} // namespace gamemd

// 0x7D29A2
namespace gamemd {
long long get_int64_arg_0(ObjectClass * aP0)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7D29A2)
}
} // namespace gamemd

// 0x7D29B2
namespace gamemd {
long __loctotime_t(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D29B2.json)
}
} // namespace gamemd

// 0x7D2A74
namespace gamemd {
int _close(int FileHandle)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D2A74.json)
}
} // namespace gamemd

// 0x7D2AD1
namespace gamemd {
int _close_lk(int FileHandle)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D2AD1.json)
}
} // namespace gamemd

// 0x7D2B54
namespace gamemd {
int _freebuf(MouseClass * aP0)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D2B54.json)
}
} // namespace gamemd

// 0x7D2B7F
namespace gamemd {
int _stbuf(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D2B7F.json)
}
} // namespace gamemd

// 0x7D2C0C
namespace gamemd {
int _ftbuf(int a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D2C0C.json)
}
} // namespace gamemd

// 0x7D2E6E
namespace gamemd {
unsigned int * E4Recv_7D2E6E::sub_7D2E6E()
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D2E6E.json)
}
} // namespace gamemd

// 0x7D2E7F
namespace gamemd {
ObjectClass * E4Recv_7D2E7F::sub_7D2E7F(void * Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D2E7F.json)
}
} // namespace gamemd

// 0x7D2E9B
namespace gamemd {
exception * E4Recv_7D2E9B::__0exception_QAE_ABQBD_Z(const char ** a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D2E9B.json)
}
} // namespace gamemd

// 0x7D2ED8
namespace gamemd {
exception * E4Recv_7D2ED8::__0exception_QAE_ABV0__Z(const struct exception * a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D2ED8.json)
}
} // namespace gamemd

// 0x7D2F22
namespace gamemd {
ObjectClass * E4Recv_7D2F22::__4exception_QAEAAV0_ABV0__Z(struct exception * a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D2F22.json)
}
} // namespace gamemd

// 0x7D2F57
namespace gamemd {
const char * E4Recv_7D2F57::_what_exception__UBEPBDXZ()
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D2F57.json)
}
} // namespace gamemd

// 0x7D2F64
namespace gamemd {
void _CxxThrowException_8(void * pExceptionObject, _ThrowInfo * pThrowInfo)
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7D2F64)
}
} // namespace gamemd

// 0x7D2F9E
namespace gamemd {
short sub_7D2F9E(wchar_t WCh, FILE * Stream)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D2F9E.json)
}
} // namespace gamemd

// 0x7D3374
namespace gamemd {
void * calloc(size_t Count, size_t Size)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7D3374)
}
} // namespace gamemd

// 0x7D3401
namespace gamemd {
int _fcloseall()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D3401.json)
}
} // namespace gamemd

// 0x7D362F
namespace gamemd {
UINT getSystemCP(UINT)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D362F.json)
}
} // namespace gamemd

// 0x7D3679
namespace gamemd {
int CPtoLCID(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D3679.json)
}
} // namespace gamemd

// 0x7D3982
namespace gamemd {
wint_t towupper(wint_t C)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D3982.json)
}
} // namespace gamemd

// 0x7D39F6
namespace gamemd {
wint_t towupper_0(wint_t C)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D39F6.json)
}
} // namespace gamemd

// 0x7D4596
namespace gamemd {
int fgetwc(FILE * File)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7D4596)
}
} // namespace gamemd

// 0x7D45A1
namespace gamemd {
int _un_inc_0(short MbCh, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D45A1.json)
}
} // namespace gamemd

// 0x7D45BA
namespace gamemd {
wint_t _whiteout_0(unsigned int * a1, FILE * File)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D45BA.json)
}
} // namespace gamemd

// 0x7D45DF
namespace gamemd {
int _mbsnbicoll(const unsigned char * Str1, const unsigned char * Str2, size_t MaxCount)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D45DF.json)
}
} // namespace gamemd

// 0x7D461E
namespace gamemd {
int __wtomb_environ()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D461E.json)
}
} // namespace gamemd

// 0x7D468C
namespace gamemd {
char * _itoa(int Value, char * Buffer, int Radix)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7D468C)
}
} // namespace gamemd

// 0x7D46B9
namespace gamemd {
char xtoa(unsigned int a1, char * a2, unsigned int a3, int a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D46B9.json)
}
} // namespace gamemd

// 0x7D4715
namespace gamemd {
char * _ltoa(int Value, char * Buffer, int Radix)
{
  BOOL v3; // eax

  v3 = 0; /*0x7d4718*/
  if ( Radix == 10 ) /*0x7d471e*/
    v3 = Value < 0; /*0x7d4727*/
  xtoa(Value, Buffer, Radix, v3); /*0x7d4732*/
  return Buffer; /*0x7d473d*/
}
} // namespace gamemd

// 0x7D473F
namespace gamemd {
char * _ultoa(unsigned int Value, char * Buffer, int Radix)
{
  xtoa(Value, Buffer, Radix, 0); /*0x7d474d*/
  return Buffer; /*0x7d4759*/
}
} // namespace gamemd

// 0x7D475A
namespace gamemd {
char * _i64toa(long long Value, char * Buffer, int Radix)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7D475A)
}
} // namespace gamemd

// 0x7D478B
namespace gamemd {
char * x64toa_20(unsigned long long a1, char * a2, unsigned int a3, int a4)
{
  char *v4; // esi
  uint64_t v5; // kr00_8
  uint64_t v6; // rax
  char *v7; // esi
  char v8; // cl
  char *result; // eax
  char *v10; // [esp+1Ch] [ebp+10h]
  unsigned int v11; // [esp+24h] [ebp+18h]

  v4 = a2; /*0x7d4794*/
  if ( a4 ) /*0x7d4798*/
  {
    *a2 = 45; /*0x7d47a0*/
    v4 = a2 + 1; /*0x7d47a3*/
    v5 = -(int64_t)a1; /*0x7d47ab*/
  }
  else
  {
    v5 = a1; /*0x7d47b0*/
  }
  v10 = v4; /*0x7d47b3*/
  do /*0x7d47f0*/
  {
    v11 = v5 % a3; /*0x7d47c3*/
    v6 = v5 / a3; /*0x7d47ce*/
    v5 = v6; /*0x7d47db*/
    if ( v11 <= 9 ) /*0x7d47dd*/
      IDA_LOBYTE(v6) = v11 + 48; /*0x7d47e3*/
    else
      IDA_LOBYTE(v6) = v11 + 87; /*0x7d47df*/
    *v4++ = v6; /*0x7d47e5*/
  }
  while ( IDA_HIDWORD(v6) || (unsigned int)v5 ); /*0x7d47f0*/
  *v4 = 0; /*0x7d47f2*/
  v7 = v4 - 1; /*0x7d47f5*/
  do /*0x7d4808*/
  {
    v8 = *v7; /*0x7d47f9*/
    *v7 = *v10; /*0x7d47fd*/
    *v10 = v8; /*0x7d47ff*/
    --v7; /*0x7d4801*/
    result = v10 + 1; /*0x7d4802*/
    v10 = result; /*0x7d4805*/
  }
  while ( result < v7 ); /*0x7d4808*/
  return result; /*0x7d480a*/
}
} // namespace gamemd

// 0x7D4811
namespace gamemd {
char * _ui64toa(unsigned long long Value, char * Buffer, int Radix)
{
  x64toa_20(Value, Buffer, Radix, 0); /*0x7d4822*/
  return Buffer; /*0x7d482a*/
}
} // namespace gamemd

// 0x7D49AE
namespace gamemd {
bool ctrlevent_capture_4(DWORD CtrlType)
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D49AE.json)
}
} // namespace gamemd

// 0x7D4B92
namespace gamemd {
unsigned int siglookup(int a1, unsigned int a2)
{
  unsigned int result; // eax

  result = a2; /*0x7d4ba5*/
  if ( *(unsigned int *)(a2 + 4) != a1 ) /*0x7d4ba7*/
  {
    do /*0x7d4bb9*/
      result += 12; /*0x7d4baf*/
    while ( result < a2 + 12 * dword_87CBA4 && *(unsigned int *)(result + 4) != a1 ); /*0x7d4bb9*/
  }
  if ( result >= a2 + 12 * dword_87CBA4 || *(unsigned int *)(result + 4) != a1 ) /*0x7d4bc8*/
    return 0; /*0x7d4bca*/
  return result; /*0x7d4bcc*/
}
} // namespace gamemd

// 0x7D4BD8
namespace gamemd {
void ** __pxcptinfoptrs()
{
  return (void **)(_getptd() + 21); /*0x7d4be0*/
}
} // namespace gamemd

// 0x7D4BF0
namespace gamemd {
char * strcpy(IUnknown * aP0, const char * Source)
{
    (void)aP0; (void)Source; return nullptr; // TODO stub - quarantined G42 T9 (raw body; truth = 0x7D4BF0)
}
} // namespace gamemd

// 0x7D4FAB
namespace gamemd {
int _isindst(CampaignScore * aP0)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D4FAB.json)
}
} // namespace gamemd

// 0x7D52B8
namespace gamemd {
struct tm * gmtime(CampaignScore * aP0)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7D52B8)
}
} // namespace gamemd

// 0x7D53C2
namespace gamemd {
int _access(const char * FileName, int AccessMode)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D53C2.json)
}
} // namespace gamemd

// 0x7D5408
namespace gamemd {
char * _strdup(INIClass * aP0)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7D5408)
}
} // namespace gamemd

// 0x7D5433
namespace gamemd {
int _open(const char * FileName, int OpenFlag, ...)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D5433.json)
}
} // namespace gamemd

// 0x7D5719
namespace gamemd {
int GetCurrentProcessId()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7D5719)
}
} // namespace gamemd

// 0x7D57FE
namespace gamemd {
char * asctime(const struct tm * Tm)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7D57FE)
}
} // namespace gamemd

// 0x7D58C8
namespace gamemd {
unsigned char * store_dt(unsigned char * a1, int a2)
{
  *a1 = a2 / 10 + 48; /*0x7d58dc*/
  a1[1] = a2 % 10 + 48; /*0x7d58ed*/
  return a1 + 2; /*0x7d58e6*/
}
} // namespace gamemd

// 0x7D58F0
namespace gamemd {
LONG _XcptFilter(ObjectClass * aP0, struct _EXCEPTION_POINTERS * ExceptionInfo)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D58F0.json)
}
} // namespace gamemd

// 0x7D5A2E
namespace gamemd {
unsigned int * xcptlookup(ObjectClass * aP0, unsigned int * a1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7D5A2E)
}
} // namespace gamemd

// 0x7D5EF8
namespace gamemd {
int * _FF_MSGBANNER()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7D5EF8)
}
} // namespace gamemd

// 0x7D5F31
namespace gamemd {
int * _NMSG_WRITE(DWORD NumberOfBytesWritten)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7D5F31)
}
} // namespace gamemd

// 0x7D6146
namespace gamemd {
int _get_lc_time(CCINIClass * aP0)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D6146.json)
}
} // namespace gamemd

// 0x7D6494
namespace gamemd {
void _free_lc_time(CCINIClass * aP0)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D6494.json)
}
} // namespace gamemd

// 0x7D67F9
namespace gamemd {
char fix_grouping(CCINIClass * aP0)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D67F9.json)
}
} // namespace gamemd

// 0x7D6830
namespace gamemd {
int __init_monetary()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D6830.json)
}
} // namespace gamemd

// 0x7D68FB
namespace gamemd {
int _get_lc_lconv(CCINIClass * aP0)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D68FB.json)
}
} // namespace gamemd

// 0x7D6A1D
namespace gamemd {
char fix_grouping_0(char * a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D6A1D.json)
}
} // namespace gamemd

// 0x7D6A54
namespace gamemd {
void _free_lc_lconv(CCINIClass * aP0)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D6A54.json)
}
} // namespace gamemd

// 0x7D6CE7
namespace gamemd {
int ReturnNull4()
{
  return 0; /*0x7d6ce9*/
}
} // namespace gamemd

// 0x7D6CF0
namespace gamemd {
char * strpbrk(const char * Str, const char * Control)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7D6CF0)
}
} // namespace gamemd

// 0x7D6EA7
namespace gamemd {
int TranslateName(int a1, int a2, char ** a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D6EA7.json)
}
} // namespace gamemd

// 0x7D6EFF
namespace gamemd {
int GetLcidFromLangCountry()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D6EFF.json)
}
} // namespace gamemd

// 0x7D718A
namespace gamemd {
bool GetLcidFromLanguage()
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D718A.json)
}
} // namespace gamemd

// 0x7D729D
namespace gamemd {
bool GetLcidFromCountry()
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D729D.json)
}
} // namespace gamemd

// 0x7D7374
namespace gamemd {
int ProcessCodePage(char * String)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D7374.json)
}
} // namespace gamemd

// 0x7D73DA
namespace gamemd {
int TestDefaultCountry(short a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D73DA.json)
}
} // namespace gamemd

// 0x7D73F9
namespace gamemd {
bool TestDefaultLanguage(int a1, int a2)
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D73F9.json)
}
} // namespace gamemd

// 0x7D745B
namespace gamemd {
bool IsThisWindowsNT()
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D745B.json)
}
} // namespace gamemd

// 0x7D7491
namespace gamemd {
int crtGetLocaleInfoA_16(LCID Locale, LCTYPE LCType, LPSTR lpLCData, int cchData)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D7491.json)
}
} // namespace gamemd

// 0x7D7577
namespace gamemd {
int LcidFromHexString(char * a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D7577.json)
}
} // namespace gamemd

// 0x7D75B0
namespace gamemd {
int GetPrimaryLen(char * a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D75B0.json)
}
} // namespace gamemd

// 0x7D7638
namespace gamemd {
int _lseek(int FileHandle, int Offset, int Origin)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D7638.json)
}
} // namespace gamemd

// 0x7D769D
namespace gamemd {
DWORD _lseek_lk(int FileHandle, LONG lDistanceToMove, DWORD dwMoveMethod)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D769D.json)
}
} // namespace gamemd

// 0x7D7710
namespace gamemd {
int _getbuf(MouseClass * aP0)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D7710.json)
}
} // namespace gamemd

// 0x7D7754
namespace gamemd {
int _isatty(int FileHandle)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D7754.json)
}
} // namespace gamemd

// 0x7D777D
namespace gamemd {
int wctomb(char * MbCh, wchar_t WCh)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D777D.json)
}
} // namespace gamemd

// 0x7D7840
namespace gamemd {
unsigned long long _aullrem(unsigned long long a1, long long a2)
{
  uint64_t v2; // rtt
  unsigned int v4; // ecx
  unsigned int v5; // ebx
  uint64_t v6; // rax
  bool v7; // cf
  int v8; // ecx
  uint64_t v9; // rax

  if ( IDA_HIDWORD(a2) ) /*0x7d7847*/
  {
    v4 = IDA_HIDWORD(a2); /*0x7d7861*/
    v5 = a2; /*0x7d7863*/
    v6 = a1; /*0x7d786b*/
    do /*0x7d7879*/
    {
      v7 = v4 & 1; /*0x7d786f*/
      v4 >>= 1; /*0x7d786f*/
      v5 = (v5 >> 1) | (v7 << 31); /*0x7d7871*/
      v6 >>= 1; /*0x7d7873*/
    }
    while ( v4 ); /*0x7d7879*/
    v8 = IDA_HIDWORD(a2) * (v6 / v5); /*0x7d7883*/
    v9 = (unsigned int)a2 * (uint64_t)(unsigned int)(v6 / v5); /*0x7d7884*/
    v7 = __CFADD__(v8, IDA_HIDWORD(v9)); /*0x7d7888*/
    IDA_HIDWORD(v9) += v8; /*0x7d7888*/
    if ( v7 || v9 > a1 ) /*0x7d7898*/
      v9 -= a2; /*0x7d789e*/
    return a1 - v9; /*0x7d78ae*/
  }
  else
  {
    IDA_LODWORD(v2) = a1; /*0x7d7859*/
    IDA_HIDWORD(v2) = IDA_HIDWORD(a1) % (unsigned int)a2; /*0x7d7859*/
    return v2 % (unsigned int)a2; /*0x7d785d*/
  }
}
} // namespace gamemd

// 0x7D78B5
namespace gamemd {
int _ZeroTail(int a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D78B5.json)
}
} // namespace gamemd

// 0x7D78FE
namespace gamemd {
int _IncMan(int a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D78FE.json)
}
} // namespace gamemd

// 0x7D7954
namespace gamemd {
int _RoundMan(int a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D7954.json)
}
} // namespace gamemd

// 0x7D79E0
namespace gamemd {
unsigned int * _CopyMan(int a1, unsigned int * a2)
{
  unsigned int *result; // eax
  int v3; // edx

  result = a2; /*0x7d79e0*/
  v3 = 3; /*0x7d79ed*/
  do /*0x7d79f7*/
  {
    *(unsigned int *)((char *)result + a1 - (unsigned int)a2) = *result; /*0x7d79f0*/
    ++result; /*0x7d79f3*/
    --v3; /*0x7d79f6*/
  }
  while ( v3 ); /*0x7d79f7*/
  return result; /*0x7d79f9*/
}
} // namespace gamemd

// 0x7D79FB
namespace gamemd {
int _FillZeroMan(unsigned int * a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D79FB.json)
}
} // namespace gamemd

// 0x7D7A07
namespace gamemd {
int _IsZeroMan(unsigned int * a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D7A07.json)
}
} // namespace gamemd

// 0x7D7A22
namespace gamemd {
int * _ShrMan(int * a1, int a2)
{
  int *v2; // edi
  int v3; // edx
  bool v4; // zf
  int v5; // ebx
  int i; // ecx
  int *result; // eax
  int v8; // [esp+Ch] [ebp-Ch]
  int v9; // [esp+10h] [ebp-8h]
  int v10; // [esp+14h] [ebp-4h]
  int v11; // [esp+24h] [ebp+Ch]

  v2 = a1; /*0x7d7a30*/
  v10 = 3; /*0x7d7a3a*/
  v8 = a2 / 32; /*0x7d7a43*/
  v3 = a2 % 32; /*0x7d7a4a*/
  v11 = 0; /*0x7d7a4c*/
  do /*0x7d7a7a*/
  {
    v9 = ~(-1 << v3) & *v2; /*0x7d7a5e*/
    *v2 = v11 | ((unsigned int)*v2 >> v3); /*0x7d7a68*/
    ++v2; /*0x7d7a6f*/
    v4 = v10-- == 1; /*0x7d7a74*/
    v11 = v9 << (32 - v3); /*0x7d7a77*/
  }
  while ( !v4 ); /*0x7d7a7a*/
  v5 = 2; /*0x7d7a81*/
  for ( i = 2; i >= 0; --i ) /*0x7d7a86*/
  {
    if ( v5 < v8 ) /*0x7d7a8c*/
    {
      result = a1; /*0x7d7a9d*/
      a1[i] = 0; /*0x7d7aa0*/
    }
    else
    {
      result = *(int **)((char *)a1 + i * 4 - 4 * v8); /*0x7d7a95*/
      a1[i] = (int)result; /*0x7d7a98*/
    }
    --v5; /*0x7d7aa4*/
  }
  return result; /*0x7d7aaa*/
}
} // namespace gamemd

// 0x7D7C47
namespace gamemd {
int _ld12told(unsigned short * a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D7C47.json)
}
} // namespace gamemd

// 0x7D7CEE
namespace gamemd {
int _atoldbl(_LDOUBLE * Result, char * String)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D7CEE.json)
}
} // namespace gamemd

// 0x7D7D49
namespace gamemd {
char * _fptostr(BlowStraw * aP0, char * a1, int a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7D7D49)
}
} // namespace gamemd

// 0x7D7DC0
namespace gamemd {
unsigned int * _fltout2(char a1, int a2, unsigned int * a3, char * Destination)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7D7DC0)
}
} // namespace gamemd

// 0x7D7E1C
namespace gamemd {
int ___dtold()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D7E1C.json)
}
} // namespace gamemd

// 0x7D7ED2
namespace gamemd {
void _fptrap()
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7D7ED2)
}
} // namespace gamemd

// 0x7D8496
namespace gamemd {
int unknown_libname_78()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D8496.json)
}
} // namespace gamemd

// 0x7D84A9
namespace gamemd {
int unknown_libname_79()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D84A9.json)
}
} // namespace gamemd

// 0x7D86BC
namespace gamemd {
int unknown_libname_88()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D86BC.json)
}
} // namespace gamemd

// 0x7D86D1
namespace gamemd {
int unknown_libname_89()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D86D1.json)
}
} // namespace gamemd

// 0x7D8D3B
namespace gamemd {
double _set_exp(double a1, short a2)
{
    return 0.0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D8D3B.json)
}
} // namespace gamemd

// 0x7D8DA4
namespace gamemd {
double _set_bexp(double a1, short a2)
{
    return 0.0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D8DA4.json)
}
} // namespace gamemd

// 0x7D8DC8
namespace gamemd {
int _sptype(int a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D8DC8.json)
}
} // namespace gamemd

// 0x7D8EF5
namespace gamemd {
double _copysign(double Number, double Sign)
{
    return 0.0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D8EF5.json)
}
} // namespace gamemd

// 0x7D8F16
namespace gamemd {
double _chgsign(double X)
{
    return 0.0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D8F16.json)
}
} // namespace gamemd

// 0x7D8F3B
namespace gamemd {
double _scalb(double X, int Y)
{
    return 0.0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7D8F3B)
}
} // namespace gamemd

// 0x7D8F51
namespace gamemd {
double _logb(double X)
{
    return 0.0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D8F51.json)
}
} // namespace gamemd

// 0x7D92CD
namespace gamemd {
int _finite(double X)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D92CD.json)
}
} // namespace gamemd

// 0x7D92E1
namespace gamemd {
int _isnan(double X)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D92E1.json)
}
} // namespace gamemd

// 0x7D930F
namespace gamemd {
int _fpclass(double X)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D930F.json)
}
} // namespace gamemd

// 0x7D94C4
namespace gamemd {
int _set_osfhnd(int a1, HANDLE hHandle)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D94C4.json)
}
} // namespace gamemd

// 0x7D9540
namespace gamemd {
int _free_osfhnd(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D9540.json)
}
} // namespace gamemd

// 0x7D95BF
namespace gamemd {
intptr_t _get_osfhandle(int FileHandle)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D95BF.json)
}
} // namespace gamemd

// 0x7D9601
namespace gamemd {
int _open_osfhandle(intptr_t OSFileHandle, int Flags)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D9601.json)
}
} // namespace gamemd

// 0x7D96A8
namespace gamemd {
void _lock_fhandle(int a1)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D96A8.json)
}
} // namespace gamemd

// 0x7D9707
namespace gamemd {
void _unlock_fhandle(int a1)
{
  LeaveCriticalSection((LPCRITICAL_SECTION)(dword_B78A80[a1 >> 5] + 36 * (a1 & 0x1F) + 12)); /*0x7d9722*/
}
} // namespace gamemd

// 0x7D9D43
namespace gamemd {
int __STRINGTOLD(int a1, char ** a2, char * a3, int a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D9D43.json)
}
} // namespace gamemd

// 0x7D9D7F
namespace gamemd {
int mbtowc(wchar_t * DstCh, const char * SrcCh, size_t SrcSizeInBytes)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D9D7F.json)
}
} // namespace gamemd

// 0x7D9EB0
namespace gamemd {
int __allshl()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D9EB0.json)
}
} // namespace gamemd

// 0x7D9ECF
namespace gamemd {
int ungetc(int Character, FILE * Stream)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D9ECF.json)
}
} // namespace gamemd

// 0x7D9EF8
namespace gamemd {
int ungetc_0(int Character, FILE * Stream)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D9EF8.json)
}
} // namespace gamemd

// 0x7D9F66
namespace gamemd {
LONG ___CxxUnhandledExceptionFilter_YGJPAU_EXCEPTION_POINTERS___Z(struct _EXCEPTION_POINTERS * ExceptionInfo)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007D9F66.json)
}
} // namespace gamemd

// 0x7D9FBD
namespace gamemd {
LPTOP_LEVEL_EXCEPTION_FILTER sub_7D9FBD()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7D9FBD)
}
} // namespace gamemd

// 0x7DA4BF
namespace gamemd {
int wcsncnt_0(CampaignScore * aP0, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DA4BF.json)
}
} // namespace gamemd

// 0x7DA4EF
namespace gamemd {
wint_t fgetwc_0x7DA4EF(FILE * Stream)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DA4EF.json)
}
} // namespace gamemd

// 0x7DA9A2
namespace gamemd {
unsigned char * strncnt_0(unsigned char * a1, int a2)
{
  unsigned char *v2; // eax
  int v3; // ecx

  v2 = a1; /*0x7da9a6*/
  v3 = a2 - 1; /*0x7da9ad*/
  if ( a2 ) /*0x7da9b0*/
  {
    do /*0x7da9bd*/
    {
      if ( !*v2 ) /*0x7da9b2*/
        break; /*0x7da9b5*/
      ++v2; /*0x7da9b7*/
    }
    while ( v3-- ); /*0x7da9bd*/
  }
  if ( *v2 ) /*0x7da9bf*/
    return (unsigned char *)a2; /*0x7da9ca*/
  else
    return (unsigned char *)(v2 - a1); /*0x7da9c5*/
}
} // namespace gamemd

// 0x7DAB54
namespace gamemd {
int findenv(unsigned char * Str1, size_t MaxCount)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DAB54.json)
}
} // namespace gamemd

// 0x7DABAC
namespace gamemd {
unsigned int * copy_environ(unsigned int * a1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DABAC)
}
} // namespace gamemd

// 0x7DADA2
namespace gamemd {
int _ismbbkprint(unsigned int C)
{
  return CRTisctype(C, 0, 3u); /*0x7dadb2*/
}
} // namespace gamemd

// 0x7DADB3
namespace gamemd {
int _ismbbkpunct(unsigned int C)
{
  return CRTisctype(C, 0, 2u); /*0x7dadc3*/
}
} // namespace gamemd

// 0x7DADC4
namespace gamemd {
int _ismbbalnum(unsigned int C)
{
  return CRTisctype(C, 263, 1u); /*0x7dadd7*/
}
} // namespace gamemd

// 0x7DADD8
namespace gamemd {
int _ismbbalpha(unsigned int C)
{
  return CRTisctype(C, 259, 1u); /*0x7dadeb*/
}
} // namespace gamemd

// 0x7DADEC
namespace gamemd {
int _ismbbgraph(unsigned int C)
{
  return CRTisctype(C, 279, 3u); /*0x7dadff*/
}
} // namespace gamemd

// 0x7DAE00
namespace gamemd {
int _ismbbprint(unsigned int C)
{
  return CRTisctype(C, 343, 3u); /*0x7dae13*/
}
} // namespace gamemd

// 0x7DAE14
namespace gamemd {
int _ismbbpunct(unsigned int C)
{
  return CRTisctype(C, 16, 2u); /*0x7dae24*/
}
} // namespace gamemd

// 0x7DAE25
namespace gamemd {
int _ismbblead(unsigned int Ch)
{
  return CRTisctype(Ch, 0, 4u); /*0x7dae35*/
}
} // namespace gamemd

// 0x7DAE36
namespace gamemd {
int _ismbbtrail(unsigned int Ch)
{
  return CRTisctype(Ch, 0, 8u); /*0x7dae46*/
}
} // namespace gamemd

// 0x7DAE47
namespace gamemd {
int _ismbbkana(unsigned int C)
{
  return dword_B78840 == 932 && CRTisctype(C, 0, 3u); /*0x7dae6a*/
}
} // namespace gamemd

// 0x7DB060
namespace gamemd {
CCINIClass * sub_7DB060()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DB060)
}
} // namespace gamemd

// 0x7DB066
namespace gamemd {
int __addl(unsigned int a1, unsigned int a2, unsigned int * a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DB066.json)
}
} // namespace gamemd

// 0x7DB087
namespace gamemd {
int __add_12(unsigned int * a1, unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DB087.json)
}
} // namespace gamemd

// 0x7DB0E5
namespace gamemd {
unsigned int * __shl_12(unsigned int * a1)
{
  unsigned int v2; // edi
  unsigned int v3; // ecx
  int v4; // esi
  unsigned int v5; // ecx

  v2 = a1[1]; /*0x7db0ed*/
  v3 = *a1; /*0x7db0f0*/
  *a1 *= 2; /*0x7db0f4*/
  v4 = (v3 >> 31) | (2 * v2); /*0x7db0fc*/
  v5 = a1[2]; /*0x7db0fe*/
  a1[1] = v4; /*0x7db103*/
  a1[2] = (v2 >> 31) | (2 * v5); /*0x7db10e*/
  return a1; /*0x7db10d*/
}
} // namespace gamemd

// 0x7DB113
namespace gamemd {
int * __shr_12(int * a1)
{
  unsigned int v2; // edx
  int v3; // edi
  int v4; // ecx

  v2 = a1[2]; /*0x7db119*/
  v3 = a1[1]; /*0x7db121*/
  a1[1] = *(int64_t *)(a1 + 1) >> 1; /*0x7db12a*/
  v4 = (v3 << 31) | ((unsigned int)*a1 >> 1); /*0x7db136*/
  a1[2] = v2 >> 1; /*0x7db139*/
  *a1 = v4; /*0x7db13c*/
  return a1; /*0x7db138*/
}
} // namespace gamemd

// 0x7DB140
namespace gamemd {
short __mtold12(char * a1, int a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DB140.json)
}
} // namespace gamemd

// 0x7DB49A
namespace gamemd {
double _handle_qnan1(int a1, double a2, int a3)
{
    return 0.0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DB49A.json)
}
} // namespace gamemd

// 0x7DB4EE
namespace gamemd {
double _handle_qnan2(int a1, double a2, double a3, int a4)
{
    return 0.0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DB4EE.json)
}
} // namespace gamemd

// 0x7DB54E
namespace gamemd {
double _except1(DWORD dwExceptionCode, int a2, double a3, double a4, int a5)
{
    return 0.0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DB54E.json)
}
} // namespace gamemd

// 0x7DB5E6
namespace gamemd {
double _except2(DWORD dwExceptionCode, int a2, double a3, double a4, double a5, int a6)
{
    return 0.0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DB5E6.json)
}
} // namespace gamemd

// 0x7DBB55
namespace gamemd {
double _umatherr(int Value, int a2, int a3, int a4, int a5, int a6, double a7, int a8)
{
    return 0.0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DBB55.json)
}
} // namespace gamemd

// 0x7DBBDD
namespace gamemd {
errno_t _set_errno(int Value)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DBBDD.json)
}
} // namespace gamemd

// 0x7DBC05
namespace gamemd {
void ** _get_fname(int a1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DBC05)
}
} // namespace gamemd

// 0x7DBC2A
namespace gamemd {
int _errcode(char a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DBC2A.json)
}
} // namespace gamemd

// 0x7DBC57
namespace gamemd {
int ReturnNull5()
{
  return 0; /*0x7dbc59*/
}
} // namespace gamemd

// 0x7DBC5A
namespace gamemd {
void __statfp()
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DBC5A)
}
}
// 0x7DBC77
namespace gamemd {
int _ctrlfp(short a1)
{
  return a1; /*0x7dbc98*/
}
} // namespace gamemd

// 0x7DBC9A
namespace gamemd {
void _set_statfp()
{
  ; /*0x7dbc9a*/
}
} // namespace gamemd

// 0x7DC0F6
namespace gamemd {
void __multtenpow12(unsigned short * a1, int a2, int a3)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DC0F6.json)
}
} // namespace gamemd

// 0x7DC1AA
namespace gamemd {
bool __ValidateExecute_YAHP6GHXZ_Z(FARPROC lpfn)
{
  return !IsBadCodePtr(lpfn); /*0x7dc1c0*/
}
} // namespace gamemd

// 0x7DC1C2
namespace gamemd {
void _terminate_YAXXZ()
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DC1C2)
}
} // namespace gamemd

// 0x7DC223
namespace gamemd {
void _unexpected_YAXXZ()
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DC223)
}
} // namespace gamemd

// 0x7DC278
namespace gamemd {
int sub_7DC278()
{
  return 1; /*0x7dc27b*/
}
} // namespace gamemd

// 0x7DC72B
namespace gamemd {
void nullsub_271(int a1)
{
  ; /*0x7dc72b*/
}
} // namespace gamemd

// 0x7DC78F
namespace gamemd {
int sub_7DC78F(int a1, int a2, int a3, VARTYPE vt, ICreateErrorInfo * perrinfo, LPCWSTR lpString, int a7)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DC78F.json)
}
} // namespace gamemd

// 0x7DCC74
namespace gamemd {
int sub_7DCC74(int a1, int a2, int a3, VARTYPE vt, ICreateErrorInfo * pperrinfo, LPCWSTR lpString, int a7)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DCC74.json)
}
} // namespace gamemd

// 0x7DCD9C
namespace gamemd {
void COM_ThrowError(int a1, int a2, int a3)
{
    // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DCD9C)
}
} // namespace gamemd

// 0x7DCDF2
namespace gamemd {
ObjectClass * E4Recv_7DCDF2::sub_7DCDF2(unsigned int * Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DCDF2.json)
}
} // namespace gamemd

// 0x7DCE62
namespace gamemd {
int HeapFree()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DCE62)
}
} // namespace gamemd

// 0x7DCE68
namespace gamemd {
int HeapAlloc()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DCE68)
}
} // namespace gamemd

// 0x7DCE6E
namespace gamemd {
int GetTimeZoneInformation()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DCE6E)
}
} // namespace gamemd

// 0x7DCE74
namespace gamemd {
int GetLocalTime()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DCE74)
}
} // namespace gamemd

// 0x7DCE7A
namespace gamemd {
int RtlUnwind()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DCE7A)
}
} // namespace gamemd

// 0x7DCE80
namespace gamemd {
int GetCommandLineA()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DCE80)
}
} // namespace gamemd

// 0x7DCE86
namespace gamemd {
int GetVersion()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DCE86)
}
} // namespace gamemd

// 0x7DCE8C
namespace gamemd {
int FatalAppExitA()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DCE8C)
}
} // namespace gamemd

// 0x7DCE92
namespace gamemd {
int HeapCreate()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DCE92)
}
} // namespace gamemd

// 0x7DCE98
namespace gamemd {
int VirtualFree()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DCE98)
}
} // namespace gamemd

// 0x7DCE9E
namespace gamemd {
int VirtualAlloc()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DCE9E)
}
} // namespace gamemd

// 0x7DCEA4
namespace gamemd {
int HeapReAlloc()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DCEA4)
}
} // namespace gamemd

// 0x7DCEAA
namespace gamemd {
int IsBadWritePtr()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DCEAA)
}
} // namespace gamemd

// 0x7DCEB0
namespace gamemd {
int HeapSize()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DCEB0)
}
} // namespace gamemd

// 0x7DCEB6
namespace gamemd {
int LCMapStringA()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DCEB6)
}
} // namespace gamemd

// 0x7DCEBC
namespace gamemd {
int LCMapStringW()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DCEBC)
}
} // namespace gamemd

// 0x7DCEC2
namespace gamemd {
int TlsSetValue()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DCEC2)
}
} // namespace gamemd

// 0x7DCEC8
namespace gamemd {
int TlsAlloc()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DCEC8)
}
} // namespace gamemd

// 0x7DCECE
namespace gamemd {
int TlsFree()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DCECE)
}
} // namespace gamemd

// 0x7DCED4
namespace gamemd {
int SetLastError()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DCED4)
}
} // namespace gamemd

// 0x7DCEDA
namespace gamemd {
int TlsGetValue()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DCEDA)
}
} // namespace gamemd

// 0x7DCEE6
namespace gamemd {
int RaiseException()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DCEE6)
}
} // namespace gamemd

// 0x7DCEEC
namespace gamemd {
int FlushFileBuffers()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DCEEC)
}
} // namespace gamemd

// 0x7DCEF2
namespace gamemd {
int SetHandleCount()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DCEF2)
}
} // namespace gamemd

// 0x7DCEF8
namespace gamemd {
int GetStdHandle()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DCEF8)
}
} // namespace gamemd

// 0x7DCEFE
namespace gamemd {
int GetFileType()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DCEFE)
}
} // namespace gamemd

// 0x7DCF04
namespace gamemd {
int GetCPInfo()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DCF04)
}
} // namespace gamemd

// 0x7DCF0A
namespace gamemd {
int GetACP()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DCF0A)
}
} // namespace gamemd

// 0x7DCF10
namespace gamemd {
int GetOEMCP()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DCF10)
}
} // namespace gamemd

// 0x7DCF16
namespace gamemd {
int SetConsoleCtrlHandler()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DCF16)
}
} // namespace gamemd

// 0x7DCF1C
namespace gamemd {
int GetFileAttributesA()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DCF1C)
}
} // namespace gamemd

// 0x7DCF28
namespace gamemd {
int UnhandledExceptionFilter()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DCF28)
}
} // namespace gamemd

// 0x7DCF2E
namespace gamemd {
int FreeEnvironmentStringsA()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DCF2E)
}
} // namespace gamemd

// 0x7DCF34
namespace gamemd {
int FreeEnvironmentStringsW()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DCF34)
}
} // namespace gamemd

// 0x7DCF3A
namespace gamemd {
int GetEnvironmentStrings()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DCF3A)
}
} // namespace gamemd

// 0x7DCF40
namespace gamemd {
int GetEnvironmentStringsW()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DCF40)
}
} // namespace gamemd

// 0x7DCF46
namespace gamemd {
int IsValidLocale()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DCF46)
}
} // namespace gamemd

// 0x7DCF4C
namespace gamemd {
int IsValidCodePage()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DCF4C)
}
} // namespace gamemd

// 0x7DCF52
namespace gamemd {
int GetLocaleInfoA()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DCF52)
}
} // namespace gamemd

// 0x7DCF58
namespace gamemd {
int EnumSystemLocalesA()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DCF58)
}
} // namespace gamemd

// 0x7DCF5E
namespace gamemd {
int GetUserDefaultLCID()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DCF5E)
}
} // namespace gamemd

// 0x7DCF64
namespace gamemd {
int SetStdHandle()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DCF64)
}
} // namespace gamemd

// 0x7DCF6A
namespace gamemd {
int GetStringTypeA()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DCF6A)
}
} // namespace gamemd

// 0x7DCF70
namespace gamemd {
int GetStringTypeW()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DCF70)
}
} // namespace gamemd

// 0x7DCF76
namespace gamemd {
int CompareStringA()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DCF76)
}
} // namespace gamemd

// 0x7DCF7C
namespace gamemd {
int CompareStringW()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DCF7C)
}
} // namespace gamemd

// 0x7DCF82
namespace gamemd {
int SetEnvironmentVariableA()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DCF82)
}
} // namespace gamemd

// 0x7DCF88
namespace gamemd {
int SetEndOfFile()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DCF88)
}
} // namespace gamemd

// 0x7DCF8E
namespace gamemd {
int GetLocaleInfoW()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DCF8E)
}
} // namespace gamemd

// 0x7DCF94
namespace gamemd {
int lstrlenW()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DCF94)
}
} // namespace gamemd

// 0x7DCF9A
namespace gamemd {
int LocalFree()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DCF9A)
}
} // namespace gamemd

// 0x7DCFA0
namespace gamemd {
int GetErrorInfo()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DCFA0)
}
} // namespace gamemd

// 0x7DCFA6
namespace gamemd {
int SetErrorInfo()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DCFA6)
}
} // namespace gamemd

// 0x7DCFAC
namespace gamemd {
int VariantChangeType()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DCFAC)
}
} // namespace gamemd

// 0x7DCFB2
namespace gamemd {
int CreateErrorInfo()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DCFB2)
}
} // namespace gamemd

// 0x7DCFB8
namespace gamemd {
int VariantClear()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DCFB8)
}
} // namespace gamemd

// 0x7DCFBE
namespace gamemd {
int VariantInit()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DCFBE)
}
} // namespace gamemd

// 0x7DD0F8
namespace gamemd {
int _wcsicmp(const wchar_t * String1, const wchar_t * String2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DD0F8.json)
}
} // namespace gamemd

// 0x7DD1D7
namespace gamemd {
int sub_7DD1D7()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DD1D7.json)
}
} // namespace gamemd

// 0x7DD2E0
namespace gamemd {
int sub_7DD2E0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DD2E0.json)
}
} // namespace gamemd

// 0x7DD334
namespace gamemd {
int _kbhit()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DD334.json)
}
} // namespace gamemd

// 0x7DD413
namespace gamemd {
int _ungetch(int Ch)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DD413.json)
}
} // namespace gamemd

// 0x7DD434
namespace gamemd {
unsigned char * _getextendedkeycode(int a1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DD434)
}
} // namespace gamemd

// 0x7DD4F4
namespace gamemd {
int _cwprintf(const wchar_t *const Format, ...)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DD4F4.json)
}
} // namespace gamemd

// 0x7DDC32
namespace gamemd {
unsigned int * write_char_1(int a1, unsigned int * a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DDC32)
}
} // namespace gamemd

// 0x7DDC4C
namespace gamemd {
unsigned int * write_multi_char_1(int a1, unsigned int * a2, unsigned int * a3)
{
  unsigned int *result; // eax
  unsigned int *i; // edi

  result = a2; /*0x7ddc52*/
  for ( i = (unsigned int *)((char *)a2 - 1); (int)result > 0; i = (unsigned int *)((char *)i - 1) ) /*0x7ddc57*/
  {
    result = write_char_1(a1, a3); /*0x7ddc62*/
    if ( *a3 == -1 ) /*0x7ddc6c*/
      break; /*0x7ddc6c*/
    result = i; /*0x7ddc6e*/
  }
  return result; /*0x7ddc75*/
}
} // namespace gamemd

// 0x7DDC78
namespace gamemd {
unsigned int * write_string_1(char * a1, unsigned int * a2, unsigned int * a3)
{
  unsigned int *result; // eax
  unsigned int *i; // ebx
  int v6; // [esp-8h] [ebp-14h]

  result = a2; /*0x7ddc7d*/
  for ( i = (unsigned int *)((char *)a2 - 1); (int)result > 0; i = (unsigned int *)((char *)i - 1) ) /*0x7ddc84*/
  {
    v6 = *a1++; /*0x7ddc92*/
    result = write_char_1(v6, a3); /*0x7ddc94*/
    if ( *a3 == -1 ) /*0x7ddc9e*/
      break; /*0x7ddc9e*/
    result = i; /*0x7ddca0*/
  }
  return result; /*0x7ddca7*/
}
} // namespace gamemd

// 0x7DDCAB
namespace gamemd {
int get_int_arg_1(unsigned int * a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DDCAB.json)
}
} // namespace gamemd

// 0x7DDCB8
namespace gamemd {
long long get_int64_arg_1(unsigned int * a1)
{
  *a1 += 8; /*0x7ddcbc*/
  return *(unsigned long long *)(*a1 - 8); /*0x7ddcc7*/
}
} // namespace gamemd

// 0x7DDCC8
namespace gamemd {
short get_short_arg_0(unsigned int * a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DDCC8.json)
}
} // namespace gamemd

// 0x7DDE13
namespace gamemd {
wchar_t * _wcsdup(CampaignScore * aP0)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DDE13)
}
} // namespace gamemd

// 0x7DDE50
namespace gamemd {
char * _strrev(IUnknown * aP0)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DDE50)
}
} // namespace gamemd

// 0x7DDE80
namespace gamemd {
int _wcsnicmp(ObjectClass * aP0, const wchar_t * String2, size_t MaxCount)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DDE80.json)
}
} // namespace gamemd

// 0x7DDF78
namespace gamemd {
int _filelength(int FileHandle)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DDF78.json)
}
} // namespace gamemd

// 0x7DE002
namespace gamemd {
wint_t towlower(wint_t C)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DE002.json)
}
} // namespace gamemd

// 0x7DE07C
namespace gamemd {
wint_t towlower_0(wint_t C)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DE07C.json)
}
} // namespace gamemd

// 0x7DE0F1
namespace gamemd {
HANDLE __initconin()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DE0F1.json)
}
} // namespace gamemd

// 0x7DE110
namespace gamemd {
HANDLE __initconout()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DE110.json)
}
} // namespace gamemd

// 0x7DE12F
namespace gamemd {
HANDLE __termcon()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DE12F.json)
}
} // namespace gamemd

// 0x7DE17D
namespace gamemd {
int _putch(int Ch)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0007DE17D.json)
}
} // namespace gamemd

// 0x7DE1C2
namespace gamemd {
int ReadConsoleInputA()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DE1C2)
}
} // namespace gamemd

// 0x7DE1C8
namespace gamemd {
int SetConsoleMode()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DE1C8)
}
} // namespace gamemd

// 0x7DE1CE
namespace gamemd {
int GetConsoleMode()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DE1CE)
}
} // namespace gamemd

// 0x7DE1D4
namespace gamemd {
int PeekConsoleInputA()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DE1D4)
}
} // namespace gamemd

// 0x7DE1DA
namespace gamemd {
int GetNumberOfConsoleInputEvents()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DE1DA)
}
} // namespace gamemd

// 0x7DE1E0
namespace gamemd {
int WriteConsoleA()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DE1E0)
}
} // namespace gamemd

// 0x7DF9B7
namespace gamemd {
int sub_7DF9B7(int * a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7DF9B7)
}
} // namespace gamemd
