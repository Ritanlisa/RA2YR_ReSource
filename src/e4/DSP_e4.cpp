// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AudioStream_e4.hpp"

// 0x7BF740
namespace gamemd {
int DSP_AudioMixBuffers(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  DSurface *v11; // esi
  int result; // eax
  unsigned __int16 *v14; // edx
  __int16 v48; // cx
  __int16 v49; // ax
  unsigned __int16 *v108; // edx
  int v117; // [esp+20h] [ebp-10h]
  __int16 v118; // [esp+24h] [ebp-Ch] BYREF
  int v119; // [esp+26h] [ebp-Ah]
  __int16 v120; // [esp+2Ah] [ebp-6h]
  int v121; // [esp+2Ch] [ebp-4h]

  int v3 = *(_DWORD *)(a1 + 132);
  _DWORD * v4 = *(_DWORD **)(a1 + 368);
  char v114[4]; // [esp+14h] [ebp-1Ch]
  *(_DWORD *)v114 = a2;
  int v116 = 0;
  char a5 = 0;
  _DWORD * v115 = v4;
  if ( (v3 & 0x20) != 0 )
  {
    int v5 = *(_DWORD *)(a1 + 292);
    if ( v5 > 0 || v5 == -1 )
    {
      int v6 = *(_DWORD *)(a1 + 384);
      v117 = *(_DWORD *)(a1 + 300);
      if ( v6 > v117 )
      {
        _DWORD * v8 = *(_DWORD **)(a1 + 284);
        v116 = *(_DWORD *)(a1 + 304);
        int v7 = v116;
        v115 = v8;
        if ( v116 != -1 )
        {
          *(_DWORD *)(a1 + 300) = v116;
          *(_DWORD *)(a1 + 304) = -1;
          *(_DWORD *)(a1 + 284) = v7;
        }
        int v9 = *(_DWORD *)(a1 + 296);
        if ( *(_DWORD *)(a1 + 384) == v9 )
        {
          result = -1;
          goto LABEL_34;
        }
        *(_DWORD *)(a1 + 384) = v9;
        int v10 = *(_DWORD *)(a1 + 368);
        v11 = *(DSurface **)(a1 + 296);
        a5 = 0;
        if ( (*(_BYTE *)(v10 + 20) & 1) != 0 )
        {
          result = -9;
LABEL_32:
          int v17 = v117;
          _DWORD * v18 = v115;
          *(_DWORD *)(a1 + 300) = v117;
          *(_DWORD *)(a1 + 304) = v7;
          *(_DWORD *)(a1 + 284) = v18;
          *(_DWORD *)(a1 + 384) = v17 + 1;
          return result;
        }
        if ( (int)v11 >= *(_DWORD *)(a1 + 284)
          || !*(_DWORD *)(a1 + 1892)
          || (*(_BYTE *)(a1 + 132) & 1) != 0 && (*(_BYTE *)(a1 + 234) & 8) == 0 )
        {
          result = -6;
          goto LABEL_32;
        }
        if ( !*(_BYTE *)(a1 + 264) && v11 )
        {
          int v13 = *(unsigned __int16 *)(a1 + 1812);
          if ( (_WORD)v13 && (*(_BYTE *)(a1 + 1814) & 3) != 0 )
          {
            v14 = *(unsigned __int16 **)(a1 + 1820);
            int v15 = 0;
            while ( v11 != (DSurface *)*v14 )
            {
              ++v15;
              v14 += 2;
              if ( v15 >= v13 )
              {
                v7 = v116;
                goto LABEL_23;
              }
            }
            v7 = v116;
          }
          else
          {
LABEL_23:
            result = Audio_Process_7C0530(a1, (int)v11, 1);
            if ( result != -1 )
              goto LABEL_27;
          }
        }
        result = ProcessAudioStreamPlayback(a1, v11, *(unsigned __int8 *)(a1 + 245), 0, 0, &a5);
LABEL_27:
        *(_DWORD *)(a1 + 384) = v11;
        if ( result != -1 )
          goto LABEL_31;
        int v16 = 32;
        if ( a5 )
          v16 = 48;
        result = FillAudioStreamBuffer(a1, v16);
        if ( result != -1 )
        {
LABEL_31:
          if ( result != -11 )
            goto LABEL_32;
        }
LABEL_34:
        int v19 = *(_DWORD *)(a1 + 336);
        LOBYTE(v19) = v19 | 0x80;
        *(_DWORD *)(a1 + 336) = v19;
        if ( v7 == -1 )
        {
          v4[5] |= 0x100u;
          int v20 = *(_DWORD *)(a1 + 292);
          if ( v20 != -1 )
            *(_DWORD *)(a1 + 292) = v20 - 1;
        }
        else
        {
          int v21 = v4[5];
          int v22 = v117;
          BYTE1(v21) |= 2u;
          v4[5] = v21;
          int v23 = *(_DWORD *)(a1 + 308);
          *(_DWORD *)(a1 + 320) = v22;
          int v24 = *(_DWORD *)(a1 + 336);
          BYTE1(v24) |= 1u;
          *(_DWORD *)(a1 + 292) = v23;
          *(_DWORD *)(a1 + 308) = -1;
          *(_DWORD *)(a1 + 336) = v24;
        }
        return result;
      }
    }
  }
  if ( *(_DWORD *)(a1 + 384) <= *(_DWORD *)(a1 + 284) )
  {
    int v27 = v4[5];
    if ( (v27 & 1) != 0 && (v27 & 0x800) == 0 )
    {
      ++*(_DWORD *)(a1 + 392);
      return -9;
    }
    if ( (*(_BYTE *)(a1 + 336) & 1) == 0 )
    {
      *(_DWORD *)(a1 + 400) = 0;
      v4[1] = *(_DWORD *)(a1 + 360);
    }
LABEL_51:
    _DWORD * v28 = v115;
    while ( 1 )
    {
  bool v36; // zf
  int v35; // eax
  int v30; // ecx
  unsigned int v29; // eax
      while ( 1 )
      {
        if ( (*(_BYTE *)(a1 + 336) & 1) == 0 )
        {
          if ( (*(int (__cdecl **)(int, int, int, int))(a1 + 64))(a1, 5, a1 + 408, 8) )
            return -2;
          g_AudioDSPState = ((*(_DWORD *)(a1 + 412) & 0xFF00 | (*(_DWORD *)(a1 + 412) << 16)) << 8)
                          | ((HIWORD(*(_DWORD *)(a1 + 412)) | *(_DWORD *)(a1 + 412) & 0xFF0000u) >> 8);
          *(_DWORD *)(a1 + 400) += g_AudioDSPState;
        }
        v29 = *(_DWORD *)(a1 + 408);
        v30 = 1;
        if ( v29 <= 0x4B465156 )
          break;
        if ( v29 > 0x5A464243 )
        {
  int v67; // edx
  _DWORD *v66; // eax
          if ( v29 > 0x5A504243 )
          {
            if ( v29 == 1515343958 )
            {
              if ( (v114[0] & 4) != 0 )
                goto LABEL_199;
              _DWORD * v98 = *(_DWORD **)(a1 + 368);
              int v99 = *(_DWORD *)(a1 + 1900);
              v117 = g_AudioDSPState;
              int v100 = g_AudioDSPState + 1;
              LOBYTE(v100) = (g_AudioDSPState + 1) & 0xFE;
              int v101 = v99 - v100;
              int v102 = v101 + *v98;
              if ( (*(int (__cdecl **)(int, int, int, int))(a1 + 64))(a1, 5, v102, v100) )
                return -4;
              int v103 = v98[5];
              v98[8] = v101;
              v98[5] = v103 | 0x10;
              if ( *(_WORD *)(a1 + 232) < 3u )
                *(_BYTE *)(v102 + v117 + 1) = 0x80;
              v66 = v115;
              v30 = 0;
              v67 = v115[5] | 0x20;
LABEL_197:
              v66[5] = v67;
              goto LABEL_198;
            }
            if ( v29 == 1515475030 )
            {
LABEL_187:
              if ( (v114[0] & 4) == 0 )
              {
                _DWORD * v92 = *(_DWORD **)(a1 + 368);
                int v93 = *(_DWORD *)(a1 + 1900);
                v117 = g_AudioDSPState;
                int v94 = g_AudioDSPState + 1;
                LOBYTE(v94) = (g_AudioDSPState + 1) & 0xFE;
                int v95 = v93 - v94;
                int v96 = v95 + *v92;
                if ( (*(int (__cdecl **)(int, int, int, int))(a1 + 64))(a1, 5, v96, v94) )
                  return -4;
                int v97 = v92[5];
                v92[8] = v95;
                v92[5] = v97 | 0x10;
                if ( *(_WORD *)(a1 + 232) < 3u )
                  *(_BYTE *)(v96 + v117 + 1) = 0x80;
                v30 = 0;
LABEL_198:
                v28 = v115;
              }
LABEL_199:
              v116 = 1;
              if ( v30 != 1 )
                goto LABEL_206;
              goto LABEL_200;
            }
            goto LABEL_170;
          }
          switch ( v29 )
          {
            case 0x5A504243u:
              if ( (v114[0] & 8) != 0 )
                goto LABEL_200;
              v35 = Audio_Helper_7C1F30(a1, g_AudioDSPState);
              goto LABEL_72;
            case 0x5A4B5056u:
              if ( (v114[0] & 4) != 0 )
                goto LABEL_199;
              int v60 = *(_DWORD *)(a1 + 1900);
              _DWORD * v61 = *(_DWORD **)(a1 + 368);
              v117 = g_AudioDSPState;
              int v62 = g_AudioDSPState + 1;
              LOBYTE(v62) = (g_AudioDSPState + 1) & 0xFE;
              int v63 = v60 - v62;
              int v64 = *v61 + v63;
              if ( (*(int (__cdecl **)(int, int, int, int))(a1 + 64))(a1, 5, v64, v62) )
                return -4;
              int v65 = v61[5];
              v61[8] = v63;
              v61[5] = v65 | 0x10;
              if ( *(_WORD *)(a1 + 232) < 3u )
                *(_BYTE *)(v64 + v117 + 1) = 0x80;
              v66 = v115;
              v30 = 0;
              v67 = v115[5] | 2;
              goto LABEL_197;
            case 0x5A4C5043u:
              if ( (v114[0] & 1) != 0 )
                goto LABEL_200;
              if ( Audio_Helper_7C20B0(a1, g_AudioDSPState) != -1 )
                return -4;
              int v59 = v28[5];
              LOBYTE(v59) = v59 | 4;
              v28[5] = v59;
              break;
            default:
LABEL_170:
              unsigned int v68 = *(_DWORD *)(a1 + 1828);
              _DWORD * v69 = *(_DWORD **)(a1 + 1844);
              int v70 = 0;
              if ( !v68 )
                goto LABEL_173;
              while ( v29 != *v69 )
              {
                ++v70;
                v69 += 4;
                if ( v70 >= v68 )
                  goto LABEL_173;
              }
              if ( v70 >= 0 )
              {
                int v74 = *(_DWORD *)(a1 + 1848);
                int v75 = 3 * v70;
                int v76 = *(_DWORD *)(v74 + 4 * v75 + 4);
                unsigned int * v77 = (unsigned int *)(v74 + 4 * v75);
                unsigned int v78 = (g_AudioDSPState + 1) & 0xFFFFFFFE;
                int v79 = 12 * v76;
                int * v80 = (int *)(12 * v76 + v77[2]);
                unsigned int v81 = v76 + 1;
                v117 = *v80;
                v80[1] = g_AudioDSPState;
                *(_DWORD *)(v77[2] + v79 + 8) = *(_DWORD *)(a1 + 384);
                if ( v81 >= *v77 )
                  v81 = 0;
                v77[1] = v81;
                if ( (*(int (__cdecl **)(int, int, int, unsigned int))(a1 + 64))(a1, 5, v117, v78) )
                  return -4;
                int v82 = *(_DWORD *)(a1 + 368);
                v28 = v115;
                int v83 = *(_DWORD *)(v82 + 20);
                BYTE1(v83) |= 4u;
                *(_DWORD *)(v82 + 20) = v83;
              }
              else
              {
LABEL_173:
                unsigned int v71 = *(_DWORD *)(a1 + 1852);
                _DWORD * v72 = *(_DWORD **)(a1 + 1860);
                int v73 = 0;
                if ( v71 )
                {
                  while ( v29 != *v72 )
                  {
                    ++v73;
                    v72 += 4;
                    if ( v73 >= v71 )
                      goto LABEL_200;
                  }
                  if ( v73 >= 0 )
                  {
                    unsigned int * v84 = (unsigned int *)(*(_DWORD *)(a1 + 1864) + 12 * v73);
                    unsigned int v85 = (g_AudioDSPState + 1) & 0xFFFFFFFE;
                    unsigned int v86 = v84[1];
                    int v87 = 12 * v86;
                    int * v88 = (int *)(12 * v86 + v84[2]);
                    unsigned int v89 = v86 + 1;
                    v117 = *v88;
                    v88[1] = g_AudioDSPState;
                    *(_DWORD *)(v84[2] + v87 + 8) = *(_DWORD *)(a1 + 384);
                    if ( v89 >= *v84 )
                      v89 = 0;
                    int v112 = v117;
                    v84[1] = v89;
                    if ( !(*(int (__cdecl **)(int, int, int, unsigned int))(a1 + 64))(a1, 5, v112, v85) )
                    {
                      int v90 = *(_DWORD *)(a1 + 368);
                      int v91 = *(_DWORD *)(v90 + 20);
                      BYTE1(v91) |= 4u;
                      *(_DWORD *)(v90 + 20) = v91;
                      goto LABEL_51;
                    }
                    return -4;
                  }
                }
LABEL_200:
                if ( (*(int (__cdecl **)(int, int, int, unsigned int))(a1 + 64))(
                       a1,
                       7,
                       1,
                       (g_AudioDSPState + 1) & 0xFFFFFFFE) )
                {
                  return -6;
                }
                if ( v116 )
                  goto LABEL_206;
              }
              break;
          }
        }
        else
        {
          if ( v29 == 1514553923 )
          {
            if ( (v114[0] & 0x10) != 0 )
              goto LABEL_200;
            v35 = Audio_Helper_7C1D90(a1, g_AudioDSPState);
            goto LABEL_72;
          }
          if ( v29 > 0x52465156 )
          {
            if ( v29 == 1381257302 )
            {
              if ( (v114[0] & 4) == 0 )
              {
                _DWORD * v56 = *(_DWORD **)(a1 + 368);
                int v57 = g_AudioDSPState + 1;
                LOBYTE(v57) = (g_AudioDSPState + 1) & 0xFE;
                if ( (*(int (__cdecl **)(int, int, _DWORD, int))(a1 + 64))(a1, 5, *v56, v57) )
                  return -4;
                v56[5] &= ~0x10u;
                v30 = 0;
                v56[8] = 0;
                int v58 = v28[5];
                LOBYTE(v58) = v58 | 0x20;
                v28[5] = v58;
              }
              goto LABEL_199;
            }
            if ( v29 == 1514426454 )
              goto LABEL_187;
            goto LABEL_170;
          }
          if ( v29 == 1380340054 )
          {
            if ( (v114[0] & 0x1D) != 0x1D )
            {
              if ( DSP_AudioProcess((AudioStream *)a1, g_AudioDSPState, v114[0]) != -1 )
                return -4;
              v30 = 0;
            }
            goto LABEL_199;
          }
          if ( v29 == 1263816790 )
          {
            if ( (v114[0] & 4) == 0 )
            {
              _DWORD * v54 = *(_DWORD **)(a1 + 368);
              if ( (*(int (__cdecl **)(int, int, _DWORD, unsigned int))(a1 + 64))(
                     a1,
                     5,
                     *v54,
                     (g_AudioDSPState + 1) & 0xFFFFFFFE) )
              {
                return -4;
              }
              v54[5] &= ~0x10u;
              v30 = 0;
              v54[8] = 0;
              int v55 = v28[5];
              LOBYTE(v55) = v55 | 2;
              v28[5] = v55;
            }
            goto LABEL_199;
          }
          if ( v29 != 1279676758 )
            goto LABEL_170;
          if ( (v114[0] & 0x20) != 0 )
            goto LABEL_200;
          if ( DSP_AudioProcess((AudioStream *)a1, g_AudioDSPState, v114[0]) != -1 )
            return -4;
          char v53 = *(_BYTE *)(a1 + 234);
          a5 = 1;
          if ( (v53 & 0x10) != 0 && (v114[0] & 4) != 0 )
          {
LABEL_206:
            int v104 = *(_DWORD *)(a1 + 384);
            bool v105 = v104 == 0;
            if ( v104 > 0 )
            {
              int v106 = *(_DWORD *)(a1 + 400);
              if ( v106 > *(_DWORD *)(a1 + 404) )
                *(_DWORD *)(a1 + 404) = v106;
              v105 = v104 == 0;
            }
            if ( v105 )
              goto LABEL_217;
            int v107 = *(unsigned __int16 *)(a1 + 1812);
            if ( (_WORD)v107 && (*(_BYTE *)(a1 + 1814) & 3) != 0 )
            {
              v108 = *(unsigned __int16 **)(a1 + 1820);
              int v109 = 0;
              while ( v104 != *v108 )
              {
                ++v109;
                v108 += 2;
                if ( v109 >= v107 )
                  goto LABEL_220;
              }
LABEL_217:
              if ( (v114[0] & 0x20) == 0 && !a5 )
              {
                int v110 = *(_DWORD *)(*(_DWORD *)(a1 + 356) + 8);
                *(_DWORD *)(a1 + 360) = v110;
                v28[1] = v110;
              }
            }
LABEL_220:
            if ( (v114[0] & 4) == 0 )
            {
              v28[7] = *(_DWORD *)(a1 + 384);
              *(_DWORD *)(a1 + 388) = *(_DWORD *)(a1 + 384);
              *(_DWORD *)(a1 + 364) = v28[1];
              int v111 = v28[3];
              v28[5] |= 1u;
              *(_DWORD *)(a1 + 368) = v111;
            }
            ++*(_DWORD *)(a1 + 384);
            return -1;
          }
        }
      }
      if ( v29 == 1262899542 )
      {
        if ( (v114[0] & 0x1D) != 0x1D )
        {
          if ( DSP_AudioProcess((AudioStream *)a1, g_AudioDSPState, v114[0]) != -1 )
            return -4;
          int v52 = v28[5];
          LOBYTE(v52) = v52 | 2;
          v30 = 0;
          v28[5] = v52;
        }
        goto LABEL_199;
      }
      if ( v29 > 0x31414E53 )
      {
        if ( v29 <= 0x32444E53 )
        {
          switch ( v29 )
          {
            case 0x32444E53u:
              if ( (v114[0] & 2) != 0 )
                goto LABEL_200;
              int v45 = *(_DWORD *)(a1 + 132);
              if ( (v45 & 1) == 0 || (v45 & 0x40) != 0 )
                goto LABEL_200;
              goto LABEL_109;
            case 0x31444E53u:
              if ( (v114[0] & 2) != 0 )
                goto LABEL_200;
              int v44 = *(_DWORD *)(a1 + 132);
              if ( (v44 & 1) == 0 || (v44 & 0x40) != 0 )
                goto LABEL_200;
              goto LABEL_104;
            case 0x32414E53u:
              if ( (v114[0] & 2) != 0 )
                goto LABEL_200;
              int v43 = *(_DWORD *)(a1 + 132);
              if ( (v43 & 1) == 0 || (v43 & 0x40) == 0 )
                goto LABEL_200;
LABEL_109:
              if ( AudioStream::CalcReadPos(a1) == -11 )
              {
LABEL_203:
                *(_DWORD *)(a1 + 336) |= 1u;
                return -11;
              }
              *(_DWORD *)(a1 + 336) &= ~1u;
              v35 = Audio_Render_7C2410(a1, g_AudioDSPState);
              goto LABEL_72;
          }
          goto LABEL_170;
        }
        if ( v29 == 1146376278 )
        {
LABEL_123:
          if ( (v114[0] & 4) == 0 )
          {
            _DWORD * v50 = *(_DWORD **)(a1 + 368);
            if ( (*(int (__cdecl **)(int, int, _DWORD, unsigned int))(a1 + 64))(
                   a1,
                   5,
                   *v50,
                   (g_AudioDSPState + 1) & 0xFFFFFFFE) )
            {
              return -4;
            }
            int v51 = v50[5];
            LOBYTE(v51) = v51 & 0xEF;
            v30 = 0;
            v50[5] = v51;
            v50[8] = 0;
          }
          goto LABEL_199;
        }
        if ( v29 != 1244810835 )
          goto LABEL_170;
        if ( (v114[0] & 2) != 0 )
          goto LABEL_200;
        int v46 = *(_DWORD *)(a1 + 132);
        if ( (v46 & 1) == 0 || (v46 & 0x40) != 0 )
          goto LABEL_200;
        unsigned int v47 = g_AudioDSPState + 1;
        LOBYTE(v47) = (g_AudioDSPState + 1) & 0xFE;
        if ( (*(_BYTE *)(a1 + 132) & 1) == 0 || !*(_DWORD *)(a1 + 1932) )
        {
          v36 = (*(int (__cdecl **)(int, int, int, unsigned int))(a1 + 64))(a1, 7, 1, v47) == 0;
          goto LABEL_73;
        }
        if ( v47 > 0xC || (*(int (__cdecl **)(int, int, __int16 *, unsigned int))(a1 + 64))(a1, 5, &v118, v47) )
          return -4;
        v48 = v118;
        *(_DWORD *)(a1 + 2000) = v119;
        *(_WORD *)(a1 + 2004) = v48;
        if ( *(_BYTE *)(a1 + 62) == 2 )
        {
          v49 = v120;
          *(_DWORD *)(a1 + 2006) = v121;
          *(_WORD *)(a1 + 2010) = v49;
        }
      }
      else
      {
        if ( v29 == 826363475 )
        {
          if ( (v114[0] & 2) != 0 )
            goto LABEL_200;
          int v42 = *(_DWORD *)(a1 + 132);
          if ( (v42 & 1) == 0 || (v42 & 0x40) == 0 )
            goto LABEL_200;
LABEL_104:
          if ( AudioStream::CalcReadPos(a1) == -11 )
            goto LABEL_203;
          *(_DWORD *)(a1 + 336) &= ~1u;
          v35 = Audio_Helper_7C2250(a1, g_AudioDSPState);
          goto LABEL_72;
        }
        if ( v29 > 0x304C5043 )
        {
          if ( v29 == 810566211 )
          {
            if ( (v114[0] & 8) != 0 )
              goto LABEL_200;
            v35 = Audio_Helper_7C1E10(a1, g_AudioDSPState);
            goto LABEL_72;
          }
          if ( v29 == 810831958 )
            goto LABEL_123;
          goto LABEL_170;
        }
        switch ( v29 )
        {
          case 0x304C5043u:
            if ( (v114[0] & 1) != 0 )
              goto LABEL_200;
            unsigned int v38 = g_AudioDSPState;
            int v39 = *(_DWORD *)(a1 + 368);
            if ( (*(int (__cdecl **)(int, int, _DWORD, unsigned int))(a1 + 64))(
                   a1,
                   5,
                   *(_DWORD *)(v39 + 8),
                   (g_AudioDSPState + 1) & 0xFFFFFFFE) )
            {
              return -4;
            }
            int v40 = *(_DWORD *)(v39 + 20);
            *(_DWORD *)(v39 + 36) = 0;
            *(_DWORD *)(v39 + 40) = v38;
            *(_DWORD *)(v39 + 20) = v40 & 0xFFFFFFF7;
            if ( *(_WORD *)(a1 + 1880) == 1 )
            {
              qmemcpy((void *)(a1 + 452), *(const void **)(v39 + 8), v38);
              *(_DWORD *)(a1 + 448) = *(_DWORD *)(v39 + 40);
              int v41 = *(_DWORD *)(a1 + 420);
              LOBYTE(v41) = v41 | 1;
              *(_DWORD *)(a1 + 420) = v41;
            }
            v28 = v115;
            v115[5] |= 4u;
            break;
          case 0x30414E53u:
            if ( (v114[0] & 2) != 0 )
              goto LABEL_200;
            int v37 = *(_DWORD *)(a1 + 132);
            if ( (v37 & 1) == 0 || (v37 & 0x40) == 0 )
              goto LABEL_200;
            goto LABEL_70;
          case 0x30444E53u:
            if ( (v114[0] & 2) != 0 )
              goto LABEL_200;
            int v34 = *(_DWORD *)(a1 + 132);
            if ( (v34 & 1) == 0 || (v34 & 0x40) != 0 )
              goto LABEL_200;
LABEL_70:
            if ( AudioStream::CalcReadPos(a1) == -11 )
              goto LABEL_203;
            *(_DWORD *)(a1 + 336) &= ~1u;
            v35 = Audio_Helper_7C2180(a1, g_AudioDSPState);
LABEL_72:
            v36 = v35 == -1;
LABEL_73:
            if ( !v36 )
              return -4;
            break;
          case 0x30464243u:
            if ( (v114[0] & 0x10) != 0 )
              goto LABEL_200;
            _DWORD * v31 = *(_DWORD **)(a1 + 356);
            int v32 = g_AudioDSPState;
            int v33 = g_AudioDSPState + 1;
            LOBYTE(v33) = (g_AudioDSPState + 1) & 0xFE;
            if ( (*(int (__cdecl **)(int, int, _DWORD, int))(a1 + 64))(a1, 5, *v31, v33) )
              return -4;
            *(_DWORD *)(a1 + 372) = 0;
            v31[4] = 0;
            v31[5] = v32;
            v31[3] = 8;
            *(_DWORD *)(a1 + 360) = v31;
            *(_DWORD *)(a1 + 356) = v31[1];
            break;
          default:
            goto LABEL_170;
        }
      }
    }
  }
  if ( (a2 & 2) == 0 && (v3 & 1) != 0 && (v3 & 0x40) == 0 )
  {
    if ( AudioStream::CalcReadPos(a1) == -11 )
    {
      int v25 = *(_DWORD *)(a1 + 336);
      LOBYTE(v25) = v25 | 1;
      *(_DWORD *)(a1 + 336) = v25;
      return -11;
    }
    int v26 = *(_DWORD *)(a1 + 1980);
    BYTE1(v26) |= 1u;
    *(_DWORD *)(a1 + 336) &= ~1u;
    *(_DWORD *)(a1 + 1980) = v26;
  }
  return -2;
}
}
} // namespace gamemd

// 0x7C0C80
namespace gamemd {
void DSP_AudioProcess(AudioStream * aP0, int a2, char a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{

  int v4 = 0; /*0x7c0c89*/
  int v29 = *(_DWORD *)&aP0->__pad_D8[152]; /*0x7c0c91*/
  unsigned int v34 = (a2 + 1) & 0xFFFFFFFE; /*0x7c0c9b*/
  if ( v34 ) /*0x7c0c9f*/
  {
    while ( 1 ) /*0x7c0ca5*/
    {
      char * v5 = &aP0->__pad_D8[192]; /*0x7c0ca5*/
      if ( ((int (__cdecl *)(AudioStream *, int, char *, int))aP0->field_40)(aP0, 5, &aP0->__pad_D8[192], 8) ) /*0x7c0cb1*/
        return -2; /*0x7c10fe*/
  unsigned int v6; // esi
      v6 = ((*(_DWORD *)&aP0->__pad_D8[196] & 0xFF00 | (*(_DWORD *)&aP0->__pad_D8[196] << 16)) << 8) /*0x7c0ce3*/
         | ((((unsigned __int64)*(unsigned int *)&aP0->__pad_D8[196] >> 16) | *(_DWORD *)&aP0->__pad_D8[196] & 0xFF0000) >> 8);
      unsigned int v7 = v6 + 1; /*0x7c0ce5*/
      unsigned int v8 = (v6 + 1) & 0xFFFFFFFE; /*0x7c0cea*/
      unsigned int v30 = v4 + v8 + 8; /*0x7c0cf1*/
      unsigned int v9 = *(_DWORD *)v5; /*0x7c0cf5*/
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
              _DWORD * v22 = *(_DWORD **)&aP0->__pad_D8[152]; /*0x7c102e*/
              unsigned int v23 = *(_DWORD *)&aP0[3].__pad_D8[232] - v8; /*0x7c103a*/
              unsigned int v32 = v23 + *v22; /*0x7c1045*/
              if ( ((int (__cdecl *)(AudioStream *, int, unsigned int, unsigned int))aP0->field_40)( /*0x7c1049*/
                     aP0,
                     5,
                     v32,
                     (v6 + 1) & 0xFFFFFFFE) )
              {
                return -4; /*0x7c1051*/
              }
              int v24 = v22[5]; /*0x7c1057*/
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
            _DWORD * v25 = *(_DWORD **)&aP0->__pad_D8[152]; /*0x7c107f*/
            unsigned int v26 = *(_DWORD *)&aP0[3].__pad_D8[232] - v8; /*0x7c108b*/
            unsigned int v33 = v26 + *v25; /*0x7c1096*/
            if ( ((int (__cdecl *)(AudioStream *, int, unsigned int, unsigned int))aP0->field_40)( /*0x7c109a*/
                   aP0,
                   5,
                   v33,
                   (v6 + 1) & 0xFFFFFFFE) )
            {
              return -4; /*0x7c110d*/
            }
            int v27 = v25[5]; /*0x7c10a4*/
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
                _DWORD * v19 = *(_DWORD **)&aP0->__pad_D8[152]; /*0x7c0f7a*/
                unsigned int v20 = *(_DWORD *)&aP0[3].__pad_D8[232] - v8; /*0x7c0f80*/
                unsigned int v31 = *v19 + v20; /*0x7c0f8d*/
                if ( ((int (__cdecl *)(AudioStream *, int, unsigned int, unsigned int))aP0->field_40)( /*0x7c0f91*/
                       aP0,
                       5,
                       v31,
                       (v6 + 1) & 0xFFFFFFFE) )
                {
                  return -4; /*0x7c0f99*/
                }
                int v21 = v19[5]; /*0x7c0f9f*/
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
                _DWORD * v17 = *(_DWORD **)&aP0->__pad_D8[152]; /*0x7c0edc*/
                LOBYTE(v7) = v7 & 0xFE; /*0x7c0ee2*/
                if ( ((int (__cdecl *)(AudioStream *, int, _DWORD, unsigned int))aP0->field_40)(aP0, 5, *v17, v7) ) /*0x7c0eeb*/
                  return -4; /*0x7c0ef3*/
                int v18 = v17[5]; /*0x7c0ef9*/
                v17[8] = 0; /*0x7c0efc*/
                LOBYTE(v18) = v18 & 0xEF; /*0x7c0f03*/
                v17[5] = v18; /*0x7c0f05*/
                goto LABEL_64; /*0x7c0f08*/
              }
              break; /*0x7c0ed6*/
            case 0x4B545056u: /*0x7c0e35*/
              if ( (a3 & 4) == 0 ) /*0x7c0e95*/
              {
                _DWORD * v15 = *(_DWORD **)&aP0->__pad_D8[152]; /*0x7c0e9b*/
                LOBYTE(v7) = v7 & 0xFE; /*0x7c0ea1*/
                if ( ((int (__cdecl *)(AudioStream *, int, _DWORD, unsigned int))aP0->field_40)(aP0, 5, *v15, v7) ) /*0x7c0eaa*/
                  return -4; /*0x7c0eb2*/
                int v16 = v15[5]; /*0x7c0eb8*/
                v15[8] = 0; /*0x7c0ebb*/
                v15[5] = v16 & 0xFFFFFFEF; /*0x7c0ec5*/
                *(_DWORD *)(v29 + 20) |= 2u; /*0x7c0ec8*/
                goto LABEL_64; /*0x7c0ecc*/
              }
              break;
            case 0x52545056u: /*0x7c0e35*/
              if ( (a3 & 4) == 0 ) /*0x7c0e54*/
              {
                _DWORD * v13 = *(_DWORD **)&aP0->__pad_D8[152]; /*0x7c0e5a*/
                LOBYTE(v7) = v7 & 0xFE; /*0x7c0e60*/
                if ( ((int (__cdecl *)(AudioStream *, int, _DWORD, unsigned int))aP0->field_40)(aP0, 5, *v13, v7) ) /*0x7c0e69*/
                  return -4; /*0x7c0e71*/
                int v14 = v13[5]; /*0x7c0e77*/
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
                _DWORD * v12 = *(_DWORD **)&aP0->__pad_D8[140]; /*0x7c0deb*/
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
                int v10 = *(_DWORD *)&aP0->__pad_D8[152]; /*0x7c0d68*/
                LOBYTE(v7) = v7 & 0xFE; /*0x7c0d6e*/
                if ( ((int (__cdecl *)(AudioStream *, int, _DWORD, unsigned int))aP0->field_40)( /*0x7c0d78*/
                       aP0,
                       5,
                       *(_DWORD *)(v10 + 8),
                       v7) )
                {
                  return -4; /*0x7c0d80*/
                }
                int v11 = *(_DWORD *)(v10 + 20); /*0x7c0d86*/
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
