// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AudioStream_e4.hpp"
#include "e4/classes/DDraw_e4.hpp"
#include "e4/classes/DSurface_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/XSurface_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Process_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"
#include "e4/classes/CursorPositionCommandClass_e4.hpp"

// 0x7BF740
namespace gamemd {  // G42.18 ns repair
int DSP_AudioMixBuffers(int a1, int a2)
{

  int v3; // eax
  unsigned int *v4; // edi
  int v5; // ecx
  int v6; // esi
  int v7; // ebx
  unsigned int *v8; // eax
  int v9; // eax
  unsigned __int8 *v10; // ecx
  int v11; // esi
  int result; // eax
  int v13; // eax
  unsigned __int16 *v14; // edx
  int v15; // ecx
  int v16; // edx
  int v17; // ecx
  unsigned int *v18; // edx
  int v19; // edx
  int v20; // ecx
  int v21; // edx
  int v22; // ecx
  int v23; // edx
  int v24; // ecx
  int v25; // eax
  int v26; // eax
  int v27; // eax
  unsigned int *v28; // ebx
  unsigned int v29; // eax
  int v30; // ecx
  unsigned int *v31; // esi
  int v32; // edi
  int v33; // eax
  int v34; // eax
  int v35; // eax
  bool v36; // zf
  int v37; // eax
  unsigned int v38; // esi
  unsigned int *v39; // ebx
  unsigned int v40; // ecx
  int v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // eax
  int v46; // eax
  unsigned int v47; // eax
  __int16 v48; // cx
  __int16 v49; // ax
  unsigned int *v50; // esi
  int v51; // eax
  int v52; // eax
  char v53; // al
  unsigned int *v54; // esi
  int v55; // eax
  unsigned int *v56; // esi
  int v57; // eax
  int v58; // eax
  int v59; // eax
  int v60; // esi
  unsigned int *v61; // edi
  int v62; // eax
  int v63; // esi
  int v64; // ebx
  int v65; // ecx
  unsigned int *v66; // eax
  int v67; // edx
  unsigned int v68; // edx
  unsigned int *v69; // esi
  int v70; // ecx
  unsigned int v71; // edx
  unsigned int *v72; // esi
  int v73; // ecx
  unsigned int *v74; // edx
  int v75; // ecx
  unsigned int v76; // eax
  unsigned int *v77; // ecx
  unsigned int v78; // esi
  int v79; // edx
  int *v80; // edi
  unsigned int v81; // eax
  unsigned int *v82; // eax
  unsigned int v83; // ecx
  unsigned int *v84; // ecx
  unsigned int v85; // esi
  unsigned int v86; // eax
  int v87; // edx
  int *v88; // edi
  unsigned int v89; // eax
  unsigned int *v90; // eax
  unsigned int v91; // ecx
  unsigned int *v92; // edi
  int v93; // esi
  int v94; // eax
  int v95; // esi
  int v96; // ebx
  int v97; // ecx
  unsigned int *v98; // edi
  int v99; // esi
  int v100; // eax
  int v101; // esi
  int v102; // ebx
  int v103; // ecx
  int v104; // esi
  bool v105; // zf
  int v106; // eax
  int v107; // eax
  unsigned __int16 *v108; // edx
  int v109; // ecx
  int v110; // eax
  int v111; // ecx
  int v112; // [esp-8h] [ebp-38h]
  char v113; // [esp+13h] [ebp-1Dh] BYREF
  int v114; // [esp+14h] [ebp-1Ch]
  unsigned int *v115; // [esp+18h] [ebp-18h]
  int v116; // [esp+1Ch] [ebp-14h]
  int v117; // [esp+20h] [ebp-10h]
  __int16 v118; // [esp+24h] [ebp-Ch] BYREF
  int v119; // [esp+26h] [ebp-Ah]
  __int16 v120; // [esp+2Ah] [ebp-6h]
  int v121; // [esp+2Ch] [ebp-4h]

  v3 = *(unsigned int *)(a1 + 132); /*0x7bf74b*/
  v4 = *(unsigned int **)(a1 + 368); /*0x7bf751*/
  v114 = a2; /*0x7bf759*/
  v116 = 0; /*0x7bf75f*/
  v113 = 0; /*0x7bf763*/
  v115 = v4; /*0x7bf767*/
  if ( (v3 & 0x20) != 0 ) /*0x7bf76b*/
  {
    v5 = *(unsigned int *)(a1 + 292); /*0x7bf771*/
    if ( v5 > 0 || v5 == -1 ) /*0x7bf77e*/
    {
      v6 = *(unsigned int *)(a1 + 384); /*0x7bf78a*/
      v117 = *(unsigned int *)(a1 + 300); /*0x7bf792*/
      if ( v6 > v117 ) /*0x7bf796*/
      {
        v8 = *(unsigned int **)(a1 + 284); /*0x7bf7a2*/
        v116 = *(unsigned int *)(a1 + 304); /*0x7bf7ab*/
        v7 = v116; /*0x7bf79c*/
        v115 = v8; /*0x7bf7af*/
        if ( v116 != -1 ) /*0x7bf7b3*/
        {
          *(unsigned int *)(a1 + 300) = v116; /*0x7bf7b5*/
          *(unsigned int *)(a1 + 304) = -1; /*0x7bf7bb*/
          *(unsigned int *)(a1 + 284) = v7; /*0x7bf7c5*/
        }
        v9 = *(unsigned int *)(a1 + 296); /*0x7bf7cb*/
        if ( *(unsigned int *)(a1 + 384) == v9 ) /*0x7bf7d9*/
        {
          result = -1; /*0x7bf901*/
          goto LABEL_34; /*0x7bf901*/
        }
        *(unsigned int *)(a1 + 384) = v9; /*0x7bf7df*/
        v10 = *(unsigned __int8 **)(a1 + 368); /*0x7bf7e5*/
        v11 = *(unsigned int *)(a1 + 296); /*0x7bf7eb*/
        v113 = 0; /*0x7bf7f1*/
        if ( (v10[20] & 1) != 0 ) /*0x7bf7fa*/
        {
          result = -9; /*0x7bf7fc*/
LABEL_32:
          v17 = v117; /*0x7bf8d8*/
          v18 = v115; /*0x7bf8dc*/
          *(unsigned int *)(a1 + 300) = v117; /*0x7bf8e0*/
          *(unsigned int *)(a1 + 304) = v7; /*0x7bf8e7*/
          *(unsigned int *)(a1 + 284) = v18; /*0x7bf8ed*/
          *(unsigned int *)(a1 + 384) = v17 + 1; /*0x7bf8f4*/
          return result; /*0x7bf900*/
        }
        if ( v11 >= *(unsigned int *)(a1 + 284) /*0x7bf828*/
          || !*(unsigned int *)(a1 + 1892)
          || (*(unsigned char *)(a1 + 132) & 1) != 0 && (*(unsigned char *)(a1 + 234) & 8) == 0 )
        {
          result = -6; /*0x7bf82a*/
          goto LABEL_32; /*0x7bf82f*/
        }
        if ( !*(unsigned char *)(a1 + 264) && v11 ) /*0x7bf840*/
        {
          v13 = *(unsigned __int16 *)(a1 + 1812); /*0x7bf844*/
          if ( (unsigned short)v13 && (*(unsigned char *)(a1 + 1814) & 3) != 0 ) /*0x7bf856*/
          {
            v14 = *(unsigned __int16 **)(a1 + 1820); /*0x7bf858*/
            v15 = 0; /*0x7bf85e*/
            while ( v11 != *v14 ) /*0x7bf86b*/
            {
              ++v15; /*0x7bf86d*/
              v14 += 2; /*0x7bf86e*/
              if ( v15 >= v13 ) /*0x7bf873*/
              {
                v7 = v116; /*0x7bf875*/
                goto LABEL_23; /*0x7bf875*/
              }
            }
            v7 = v116; /*0x7bf88b*/
          }
          else
          {
LABEL_23:
            result = Audio_Process_7C0530(a1, v11, 1); /*0x7bf879*/
            if ( result != -1 ) /*0x7bf887*/
              goto LABEL_27; /*0x7bf887*/
          }
        }
        result = ProcessAudioStreamPlayback(a1, v11, *(unsigned __int8 *)(a1 + 245), 0, 0, &v113); /*0x7bf8a5*/
LABEL_27:
        *(unsigned int *)(a1 + 384) = v11; /*0x7bf8aa*/
        if ( result != -1 ) /*0x7bf8b3*/
          goto LABEL_31; /*0x7bf8b3*/
        v16 = 32; /*0x7bf8b9*/
        if ( v113 ) /*0x7bf8c0*/
          v16 = 48; /*0x7bf8c2*/
        result = FillAudioStreamBuffer(a1, v16); /*0x7bf8c9*/
        if ( result != -1 ) /*0x7bf8d1*/
        {
LABEL_31:
          if ( result != -11 ) /*0x7bf8d6*/
            goto LABEL_32; /*0x7bf8d6*/
        }
LABEL_34:
        v19 = *(unsigned int *)(a1 + 336); /*0x7bf904*/
        (v19) = ((v19) & ~0xFF) | ((v19 | 0x80) & 0xFF); /*0x7bf90a*/
        *(unsigned int *)(a1 + 336) = v19; /*0x7bf910*/
        if ( v7 == -1 ) /*0x7bf916*/
        {
          v4[5] |= 0x100u; /*0x7bf921*/
          v20 = *(unsigned int *)(a1 + 292); /*0x7bf924*/
          if ( v20 != -1 ) /*0x7bf92c*/
            *(unsigned int *)(a1 + 292) = v20 - 1; /*0x7bf934*/
        }
        else
        {
          v21 = v4[5]; /*0x7bf941*/
          v22 = v117; /*0x7bf944*/
          (v21) |= ((((2u)) & 0xFF) << 8); /*0x7bf948*/
          v4[5] = v21; /*0x7bf94b*/
          v23 = *(unsigned int *)(a1 + 308); /*0x7bf94e*/
          *(unsigned int *)(a1 + 320) = v22; /*0x7bf954*/
          v24 = *(unsigned int *)(a1 + 336); /*0x7bf95a*/
          (v24) |= ((((1u)) & 0xFF) << 8); /*0x7bf960*/
          *(unsigned int *)(a1 + 292) = v23; /*0x7bf964*/
          *(unsigned int *)(a1 + 308) = -1; /*0x7bf96a*/
          *(unsigned int *)(a1 + 336) = v24; /*0x7bf974*/
        }
        return result; /*0x7bf940*/
      }
    }
  }
  if ( *(unsigned int *)(a1 + 384) <= *(unsigned int *)(a1 + 284) ) /*0x7bf98f*/
  {
    v27 = v4[5]; /*0x7bf9f0*/
    if ( (v27 & 1) != 0 && (v27 & 0x800) == 0 ) /*0x7bf9fa*/
    {
      ++*(unsigned int *)(a1 + 392); /*0x7bfa05*/
      return -9; /*0x7bfa15*/
    }
    if ( (*(unsigned char *)(a1 + 336) & 1) == 0 ) /*0x7bfa1d*/
    {
      *(unsigned int *)(a1 + 400) = 0; /*0x7bfa1f*/
      v4[1] = *(unsigned int *)(a1 + 360); /*0x7bfa2b*/
    }
LABEL_51:
    v28 = v115; /*0x7bfa2e*/
    while ( 1 ) /*0x7bfa9d*/
    {
      while ( 1 ) /*0x7bfa37*/
      {
        if ( (*(unsigned char *)(a1 + 336) & 1) == 0 ) /*0x7bfa3e*/
        {
          if ( (*(int (__cdecl **)(int, int, int, int))(a1 + 64))(a1, 5, a1 + 408, 8) ) /*0x7bfa4c*/
            return -2; /*0x7bfa54*/
          g_AudioDSPState = ((*(unsigned int *)(a1 + 412) & 0xFF00 | (*(unsigned int *)(a1 + 412) << 16)) << 8) /*0x7bfa7c*/
                          | ((HIWORD(*(unsigned int *)(a1 + 412)) | *(unsigned int *)(a1 + 412) & 0xFF0000u) >> 8);
          *(unsigned int *)(a1 + 400) += g_AudioDSPState; /*0x7bfa8a*/
        }
        v29 = *(unsigned int *)(a1 + 408); /*0x7bfa90*/
        v30 = 1; /*0x7bfa96*/
        if ( v29 <= 0x4B465156 ) /*0x7bfa9d*/
          break; /*0x7bfa9d*/
        if ( v29 > 0x5A464243 ) /*0x7bfed0*/
        {
          if ( v29 > 0x5A504243 ) /*0x7c0045*/
          {
            if ( v29 == 1515343958 ) /*0x7c0121*/
            {
              if ( (v114 & 4) != 0 ) /*0x7c02e6*/
                goto LABEL_199; /*0x7c02e6*/
              v98 = *(unsigned int **)(a1 + 368); /*0x7c02ed*/
              v99 = *(unsigned int *)(a1 + 1900); /*0x7c02f3*/
              v117 = g_AudioDSPState; /*0x7c02f9*/
              v100 = g_AudioDSPState + 1; /*0x7c02ff*/
              LOBYTE(v100) = (g_AudioDSPState + 1) & 0xFE; /*0x7c0300*/
              v101 = v99 - v100; /*0x7c0302*/
              v102 = v101 + *v98; /*0x7c0305*/
              if ( (*(int (__cdecl **)(int, int, int, int))(a1 + 64))(a1, 5, v102, v100) ) /*0x7c030b*/
                return -4; /*0x7c0313*/
              v103 = v98[5]; /*0x7c0319*/
              v98[8] = v101; /*0x7c031c*/
              v98[5] = v103 | 0x10; /*0x7c0322*/
              if ( *(unsigned short *)(a1 + 232) < 3u ) /*0x7c032d*/
                *(unsigned char *)(v102 + v117 + 1) = 0x80; /*0x7c0333*/
              v66 = v115; /*0x7c0338*/
              v30 = 0; /*0x7c033c*/
              v67 = v115[5] | 0x20; /*0x7c0341*/
LABEL_197:
              v66[5] = v67; /*0x7c0344*/
              goto LABEL_198; /*0x7c0344*/
            }
            if ( v29 == 1515475030 ) /*0x7c012c*/
            {
LABEL_187:
              if ( (v114 & 4) == 0 ) /*0x7c0287*/
              {
                v92 = *(unsigned int **)(a1 + 368); /*0x7c0292*/
                v93 = *(unsigned int *)(a1 + 1900); /*0x7c0298*/
                v117 = g_AudioDSPState; /*0x7c029e*/
                v94 = g_AudioDSPState + 1; /*0x7c02a4*/
                LOBYTE(v94) = (g_AudioDSPState + 1) & 0xFE; /*0x7c02a5*/
                v95 = v93 - v94; /*0x7c02a7*/
                v96 = v95 + *v92; /*0x7c02aa*/
                if ( (*(int (__cdecl **)(int, int, int, int))(a1 + 64))(a1, 5, v96, v94) ) /*0x7c02b0*/
                  return -4; /*0x7c02b8*/
                v97 = v92[5]; /*0x7c02be*/
                v92[8] = v95; /*0x7c02c1*/
                v92[5] = v97 | 0x10; /*0x7c02c7*/
                if ( *(unsigned short *)(a1 + 232) < 3u ) /*0x7c02d2*/
                  *(unsigned char *)(v96 + v117 + 1) = 0x80; /*0x7c02d8*/
                v30 = 0; /*0x7c02dd*/
LABEL_198:
                v28 = v115; /*0x7c0347*/
              }
LABEL_199:
              v116 = 1; /*0x7c0350*/
              if ( v30 != 1 ) /*0x7c0356*/
                goto LABEL_206; /*0x7c0356*/
              goto LABEL_200; /*0x7c0356*/
            }
            goto LABEL_170; /*0x7c012c*/
          }
          switch ( v29 ) /*0x7c004b*/
          {
            case 0x5A504243u: /*0x7c004b*/
              if ( (v114 & 8) != 0 ) /*0x7c0104*/
                goto LABEL_200; /*0x7c0104*/
              v35 = Audio_Helper_7C1F30(a1, g_AudioDSPState); /*0x7c0112*/
              goto LABEL_72; /*0x7c0117*/
            case 0x5A4B5056u: /*0x7c004b*/
              if ( (v114 & 4) != 0 ) /*0x7c0096*/
                goto LABEL_199; /*0x7c0096*/
              v60 = *(unsigned int *)(a1 + 1900); /*0x7c00a1*/
              v61 = *(unsigned int **)(a1 + 368); /*0x7c00a7*/
              v117 = g_AudioDSPState; /*0x7c00ad*/
              v62 = g_AudioDSPState + 1; /*0x7c00b1*/
              LOBYTE(v62) = (g_AudioDSPState + 1) & 0xFE; /*0x7c00b4*/
              v63 = v60 - v62; /*0x7c00b6*/
              v64 = *v61 + v63; /*0x7c00bb*/
              if ( (*(int (__cdecl **)(int, int, int, int))(a1 + 64))(a1, 5, v64, v62) ) /*0x7c00c1*/
                return -4; /*0x7c00c9*/
              v65 = v61[5]; /*0x7c00cf*/
              v61[8] = v63; /*0x7c00d2*/
              v61[5] = v65 | 0x10; /*0x7c00d8*/
              if ( *(unsigned short *)(a1 + 232) < 3u ) /*0x7c00e3*/
                *(unsigned char *)(v64 + v117 + 1) = 0x80; /*0x7c00e9*/
              v66 = v115; /*0x7c00ee*/
              v30 = 0; /*0x7c00f2*/
              v67 = v115[5] | 2; /*0x7c00f7*/
              goto LABEL_197; /*0x7c00fa*/
            case 0x5A4C5043u: /*0x7c004b*/
              if ( (v114 & 1) != 0 ) /*0x7c0068*/
                goto LABEL_200; /*0x7c0068*/
              if ( Audio_Helper_7C20B0(a1, g_AudioDSPState) != -1 ) /*0x7c007e*/
                return -4; /*0x7c007e*/
              v59 = v28[5]; /*0x7c0084*/
              (v59) = ((v59) & ~0xFF) | ((v59 | 4) & 0xFF); /*0x7c0087*/
              v28[5] = v59; /*0x7c0089*/
              break;
            default:
LABEL_170:
              v68 = *(unsigned int *)(a1 + 1828); /*0x7c0132*/
              v69 = *(unsigned int **)(a1 + 1844); /*0x7c0138*/
              v70 = 0; /*0x7c013e*/
              if ( !v68 ) /*0x7c0142*/
                goto LABEL_173; /*0x7c0142*/
              while ( v29 != *v69 ) /*0x7c0146*/
              {
                ++v70; /*0x7c0148*/
                v69 += 4; /*0x7c0149*/
                if ( v70 >= v68 ) /*0x7c014e*/
                  goto LABEL_173; /*0x7c014e*/
              }
              if ( v70 >= 0 ) /*0x7c017d*/
              {
                v74 = *(unsigned int **)(a1 + 1848); /*0x7c017f*/
                v75 = 3 * v70; /*0x7c018a*/
                v76 = v74[v75 + 1]; /*0x7c0190*/
                v77 = &v74[v75]; /*0x7c0194*/
                v78 = (g_AudioDSPState + 1) & 0xFFFFFFFE; /*0x7c0197*/
                v79 = 12 * v76; /*0x7c01a0*/
                v80 = (int *)(12 * v76 + v77[2]); /*0x7c01a3*/
                v81 = v76 + 1; /*0x7c01a5*/
                v117 = *v80; /*0x7c01a8*/
                v80[1] = g_AudioDSPState; /*0x7c01b2*/
                *(unsigned int *)(v77[2] + v79 + 8) = *(unsigned int *)(a1 + 384); /*0x7c01be*/
                if ( v81 >= *v77 ) /*0x7c01c6*/
                  v81 = 0; /*0x7c01c8*/
                v77[1] = v81; /*0x7c01ca*/
                if ( (*(int (__cdecl **)(int, int, int, unsigned int))(a1 + 64))(a1, 5, v117, v78) ) /*0x7c01d6*/
                  return -4; /*0x7c01de*/
                v82 = *(unsigned int **)(a1 + 368); /*0x7c01e4*/
                v28 = v115; /*0x7c01ea*/
                v83 = v82[5]; /*0x7c01f3*/
                (v83) |= ((((4u)) & 0xFF) << 8); /*0x7c01f6*/
                v82[5] = v83; /*0x7c01f9*/
              }
              else
              {
LABEL_173:
                v71 = *(unsigned int *)(a1 + 1852); /*0x7c0150*/
                v72 = *(unsigned int **)(a1 + 1860); /*0x7c0156*/
                v73 = 0; /*0x7c015c*/
                if ( v71 ) /*0x7c0160*/
                {
                  while ( v29 != *v72 ) /*0x7c0168*/
                  {
                    ++v73; /*0x7c016e*/
                    v72 += 4; /*0x7c016f*/
                    if ( v73 >= v71 ) /*0x7c0174*/
                      goto LABEL_200; /*0x7c0174*/
                  }
                  if ( v73 >= 0 ) /*0x7c0203*/
                  {
                    v84 = (unsigned int *)(*(unsigned int *)(a1 + 1864) + 12 * v73); /*0x7c021b*/
                    v85 = (g_AudioDSPState + 1) & 0xFFFFFFFE; /*0x7c021e*/
                    v86 = v84[1]; /*0x7c0221*/
                    v87 = 12 * v86; /*0x7c022a*/
                    v88 = (int *)(12 * v86 + v84[2]); /*0x7c022d*/
                    v89 = v86 + 1; /*0x7c022f*/
                    v117 = *v88; /*0x7c0232*/
                    v88[1] = g_AudioDSPState; /*0x7c023c*/
                    *(unsigned int *)(v84[2] + v87 + 8) = *(unsigned int *)(a1 + 384); /*0x7c0248*/
                    if ( v89 >= *v84 ) /*0x7c0250*/
                      v89 = 0; /*0x7c0252*/
                    v112 = v117; /*0x7c0259*/
                    v84[1] = v89; /*0x7c025d*/
                    if ( !(*(int (__cdecl **)(int, int, int, unsigned int))(a1 + 64))(a1, 5, v112, v85) ) /*0x7c0260*/
                    {
                      v90 = *(unsigned int **)(a1 + 368); /*0x7c026e*/
                      v91 = v90[5]; /*0x7c0274*/
                      (v91) |= ((((4u)) & 0xFF) << 8); /*0x7c0277*/
                      v90[5] = v91; /*0x7c027a*/
                      goto LABEL_51; /*0x7c027d*/
                    }
                    return -4; /*0x7c03a5*/
                  }
                }
LABEL_200:
                if ( (*(int (__cdecl **)(int, int, int, unsigned int))(a1 + 64))( /*0x7c0367*/
                       a1,
                       7,
                       1,
                       (g_AudioDSPState + 1) & 0xFFFFFFFE) )
                {
                  return -6; /*0x7c03b2*/
                }
                if ( v116 ) /*0x7c0377*/
                  goto LABEL_206; /*0x7c0377*/
              }
              break;
          }
        }
        else
        {
          if ( v29 == 1514553923 ) /*0x7bfed6*/
          {
            if ( (v114 & 0x10) != 0 ) /*0x7c0028*/
              goto LABEL_200; /*0x7c0028*/
            v35 = Audio_Helper_7C1D90(a1, g_AudioDSPState); /*0x7c0036*/
            goto LABEL_72; /*0x7c003b*/
          }
          if ( v29 > 0x52465156 ) /*0x7bfee1*/
          {
            if ( v29 == 1381257302 ) /*0x7bffc8*/
            {
              if ( (v114 & 4) == 0 ) /*0x7bffdf*/
              {
                v56 = *(unsigned int **)(a1 + 368); /*0x7bffea*/
                v57 = g_AudioDSPState + 1; /*0x7bfff0*/
                LOBYTE(v57) = (g_AudioDSPState + 1) & 0xFE; /*0x7bfff3*/
                if ( (*(int (__cdecl **)(int, int, unsigned int, int))(a1 + 64))(a1, 5, *v56, v57) ) /*0x7bfffa*/
                  return -4; /*0x7c0002*/
                v56[5] &= ~0x10u; /*0x7c000e*/
                v30 = 0; /*0x7c0011*/
                v56[8] = 0; /*0x7c0013*/
                v58 = v28[5]; /*0x7c0016*/
                (v58) = ((v58) & ~0xFF) | ((v58 | 0x20) & 0xFF); /*0x7c0019*/
                v28[5] = v58; /*0x7c001b*/
              }
              goto LABEL_199; /*0x7c001e*/
            }
            if ( v29 == 1514426454 ) /*0x7bffcf*/
              goto LABEL_187; /*0x7bffcf*/
            goto LABEL_170; /*0x7bffcf*/
          }
          if ( v29 == 1380340054 ) /*0x7bfee7*/
          {
            if ( (v114 & 0x1D) != 0x1D ) /*0x7bff9f*/
            {
              if ( DSP_AudioProcess(a1, g_AudioDSPState, v114) != -1 ) /*0x7bffb6*/
                return -4; /*0x7bffb6*/
              v30 = 0; /*0x7bffbc*/
            }
            goto LABEL_199; /*0x7bffbe*/
          }
          if ( v29 == 1263816790 ) /*0x7bfef2*/
          {
            if ( (v114 & 4) == 0 ) /*0x7bff4d*/
            {
              v54 = *(unsigned int **)(a1 + 368); /*0x7bff59*/
              if ( (*(int (__cdecl **)(int, int, unsigned int, unsigned int))(a1 + 64))( /*0x7bff6a*/
                     a1,
                     5,
                     *v54,
                     (g_AudioDSPState + 1) & 0xFFFFFFFE) )
              {
                return -4; /*0x7bff72*/
              }
              v54[5] &= ~0x10u; /*0x7bff7e*/
              v30 = 0; /*0x7bff81*/
              v54[8] = 0; /*0x7bff83*/
              v55 = v28[5]; /*0x7bff86*/
              (v55) = ((v55) & ~0xFF) | ((v55 | 2) & 0xFF); /*0x7bff89*/
              v28[5] = v55; /*0x7bff8b*/
            }
            goto LABEL_199; /*0x7bff8e*/
          }
          if ( v29 != 1279676758 ) /*0x7bfef9*/
            goto LABEL_170; /*0x7bfef9*/
          if ( (v114 & 0x20) != 0 ) /*0x7bff04*/
            goto LABEL_200; /*0x7bff04*/
          if ( DSP_AudioProcess(a1, g_AudioDSPState, v114) != -1 ) /*0x7bff1f*/
            return -4; /*0x7bff1f*/
          v53 = *(unsigned char *)(a1 + 234); /*0x7bff25*/
          v113 = 1; /*0x7bff2b*/
          if ( (v53 & 0x10) != 0 && (v114 & 4) != 0 ) /*0x7bff3d*/
          {
LABEL_206:
            v104 = *(unsigned int *)(a1 + 384); /*0x7c03b3*/
            v105 = v104 == 0; /*0x7c03b9*/
            if ( v104 > 0 ) /*0x7c03bb*/
            {
              v106 = *(unsigned int *)(a1 + 400); /*0x7c03bd*/
              if ( v106 > *(unsigned int *)(a1 + 404) ) /*0x7c03cb*/
                *(unsigned int *)(a1 + 404) = v106; /*0x7c03cd*/
              v105 = v104 == 0; /*0x7c03d3*/
            }
            if ( v105 ) /*0x7c03d5*/
              goto LABEL_217; /*0x7c03d5*/
            v107 = *(unsigned __int16 *)(a1 + 1812); /*0x7c03d9*/
            if ( (unsigned short)v107 && (*(unsigned char *)(a1 + 1814) & 3) != 0 ) /*0x7c03eb*/
            {
              v108 = *(unsigned __int16 **)(a1 + 1820); /*0x7c03ed*/
              v109 = 0; /*0x7c03f3*/
              while ( v104 != *v108 ) /*0x7c0400*/
              {
                ++v109; /*0x7c0402*/
                v108 += 2; /*0x7c0403*/
                if ( v109 >= v107 ) /*0x7c0408*/
                  goto LABEL_220; /*0x7c0408*/
              }
LABEL_217:
              if ( (v114 & 0x20) == 0 && !v113 ) /*0x7c0423*/
              {
                v110 = *(unsigned int *)(*(unsigned int *)(a1 + 356) + 8); /*0x7c042b*/
                *(unsigned int *)(a1 + 360) = v110; /*0x7c042e*/
                v28[1] = v110; /*0x7c0434*/
              }
            }
LABEL_220:
            if ( (v114 & 4) == 0 ) /*0x7c043c*/
            {
              v28[7] = *(unsigned int *)(a1 + 384); /*0x7c0444*/
              *(unsigned int *)(a1 + 388) = *(unsigned int *)(a1 + 384); /*0x7c044d*/
              *(unsigned int *)(a1 + 364) = v28[1]; /*0x7c0456*/
              v111 = v28[3]; /*0x7c045f*/
              v28[5] |= 1u; /*0x7c0464*/
              *(unsigned int *)(a1 + 368) = v111; /*0x7c0467*/
            }
            ++*(unsigned int *)(a1 + 384); /*0x7c0474*/
            return -1; /*0x7c047a*/
          }
        }
      }
      if ( v29 == 1262899542 ) /*0x7bfaa3*/
      {
        if ( (v114 & 0x1D) != 0x1D ) /*0x7bfe9f*/
        {
          if ( DSP_AudioProcess(a1, g_AudioDSPState, v114) != -1 ) /*0x7bfeb6*/
            return -4; /*0x7bfeb6*/
          v52 = v28[5]; /*0x7bfebc*/
          (v52) = ((v52) & ~0xFF) | ((v52 | 2) & 0xFF); /*0x7bfebf*/
          v30 = 0; /*0x7bfec1*/
          v28[5] = v52; /*0x7bfec3*/
        }
        goto LABEL_199; /*0x7bfec6*/
      }
      if ( v29 > 0x31414E53 ) /*0x7bfaae*/
      {
        if ( v29 <= 0x32444E53 ) /*0x7bfca9*/
        {
          switch ( v29 ) /*0x7bfcaf*/
          {
            case 0x32444E53u: /*0x7bfcaf*/
              if ( (v114 & 2) != 0 ) /*0x7bfd41*/
                goto LABEL_200; /*0x7bfd41*/
              v45 = *(unsigned int *)(a1 + 132); /*0x7bfd47*/
              if ( (v45 & 1) == 0 || (v45 & 0x40) != 0 ) /*0x7bfd57*/
                goto LABEL_200; /*0x7bfd57*/
              goto LABEL_109; /*0x7bfd57*/
            case 0x31444E53u: /*0x7bfcaf*/
              if ( (v114 & 2) != 0 ) /*0x7bfcef*/
                goto LABEL_200; /*0x7bfcef*/
              v44 = *(unsigned int *)(a1 + 132); /*0x7bfcf5*/
              if ( (v44 & 1) == 0 || (v44 & 0x40) != 0 ) /*0x7bfd05*/
                goto LABEL_200; /*0x7bfd05*/
              goto LABEL_104; /*0x7bfd05*/
            case 0x32414E53u: /*0x7bfcaf*/
              if ( (v114 & 2) != 0 ) /*0x7bfccc*/
                goto LABEL_200; /*0x7bfccc*/
              v43 = *(unsigned int *)(a1 + 132); /*0x7bfcd2*/
              if ( (v43 & 1) == 0 || (v43 & 0x40) == 0 ) /*0x7bfce2*/
                goto LABEL_200; /*0x7bfce2*/
LABEL_109:
              if ( AudioStream::CalcReadPos((AudioStream *)a1) == -11 ) /*0x7bfd67*/
              {
LABEL_203:
                *(unsigned int *)(a1 + 336) |= 1u; /*0x7c037e*/
                return -11; /*0x7c0398*/
              }
              *(unsigned int *)(a1 + 336) &= ~1u; /*0x7bfd78*/
              v35 = Audio_Render_7C2410(a1, g_AudioDSPState); /*0x7bfd84*/
              goto LABEL_72; /*0x7bfd89*/
          }
          goto LABEL_170; /*0x7bfcc1*/
        }
        if ( v29 == 1146376278 ) /*0x7bfd93*/
        {
LABEL_123:
          if ( (v114 & 4) == 0 ) /*0x7bfe57*/
          {
            v50 = *(unsigned int **)(a1 + 368); /*0x7bfe63*/
            if ( (*(int (__cdecl **)(int, int, unsigned int, unsigned int))(a1 + 64))( /*0x7bfe74*/
                   a1,
                   5,
                   *v50,
                   (g_AudioDSPState + 1) & 0xFFFFFFFE) )
            {
              return -4; /*0x7bfe7c*/
            }
            v51 = v50[5]; /*0x7bfe82*/
            (v51) = ((v51) & ~0xFF) | ((v51 & 0xEF) & 0xFF); /*0x7bfe85*/
            v30 = 0; /*0x7bfe87*/
            v50[5] = v51; /*0x7bfe89*/
            v50[8] = 0; /*0x7bfe8c*/
          }
          goto LABEL_199; /*0x7bfe8f*/
        }
        if ( v29 != 1244810835 ) /*0x7bfd9e*/
          goto LABEL_170; /*0x7bfd9e*/
        if ( (v114 & 2) != 0 ) /*0x7bfda9*/
          goto LABEL_200; /*0x7bfda9*/
        v46 = *(unsigned int *)(a1 + 132); /*0x7bfdaf*/
        if ( (v46 & 1) == 0 || (v46 & 0x40) != 0 ) /*0x7bfdbf*/
          goto LABEL_200; /*0x7bfdbf*/
        v47 = g_AudioDSPState + 1; /*0x7bfdcb*/
        LOBYTE(v47) = (g_AudioDSPState + 1) & 0xFE; /*0x7bfdd4*/
        if ( (*(unsigned char *)(a1 + 132) & 1) == 0 || !*(unsigned int *)(a1 + 1932) ) /*0x7bfddb*/
        {
          v36 = (*(int (__cdecl **)(int, int, int, unsigned int))(a1 + 64))(a1, 7, 1, v47) == 0; /*0x7bfe4b*/
          goto LABEL_73; /*0x7bfe4d*/
        }
        if ( v47 > 0xC || (*(int (__cdecl **)(int, int, __int16 *, unsigned int))(a1 + 64))(a1, 5, &v118, v47) ) /*0x7bfdf7*/
          return -4; /*0x7bfdff*/
        v48 = v118; /*0x7bfe09*/
        *(unsigned int *)(a1 + 2000) = v119; /*0x7bfe0e*/
        *(unsigned short *)(a1 + 2004) = v48; /*0x7bfe14*/
        if ( *(unsigned char *)(a1 + 62) == 2 ) /*0x7bfe1f*/
        {
          v49 = v120; /*0x7bfe29*/
          *(unsigned int *)(a1 + 2006) = v121; /*0x7bfe2e*/
          *(unsigned short *)(a1 + 2010) = v49; /*0x7bfe34*/
        }
      }
      else
      {
        if ( v29 == 826363475 ) /*0x7bfab4*/
        {
          if ( (v114 & 2) != 0 ) /*0x7bfc86*/
            goto LABEL_200; /*0x7bfc86*/
          v42 = *(unsigned int *)(a1 + 132); /*0x7bfc8c*/
          if ( (v42 & 1) == 0 || (v42 & 0x40) == 0 ) /*0x7bfc9c*/
            goto LABEL_200; /*0x7bfc9c*/
LABEL_104:
          if ( AudioStream::CalcReadPos((AudioStream *)a1) == -11 ) /*0x7bfd15*/
            goto LABEL_203; /*0x7bfd15*/
          *(unsigned int *)(a1 + 336) &= ~1u; /*0x7bfd26*/
          v35 = Audio_Helper_7C2250(a1, g_AudioDSPState); /*0x7bfd32*/
          goto LABEL_72; /*0x7bfd37*/
        }
        if ( v29 > 0x304C5043 ) /*0x7bfabf*/
        {
          if ( v29 == 810566211 ) /*0x7bfc52*/
          {
            if ( (v114 & 8) != 0 ) /*0x7bfc69*/
              goto LABEL_200; /*0x7bfc69*/
            v35 = Audio_Helper_7C1E10(a1, g_AudioDSPState); /*0x7bfc77*/
            goto LABEL_72; /*0x7bfc7c*/
          }
          if ( v29 == 810831958 ) /*0x7bfc59*/
            goto LABEL_123; /*0x7bfc59*/
          goto LABEL_170; /*0x7bfc59*/
        }
        switch ( v29 ) /*0x7bfac5*/
        {
          case 0x304C5043u: /*0x7bfac5*/
            if ( (v114 & 1) != 0 ) /*0x7bfbc2*/
              goto LABEL_200; /*0x7bfbc2*/
            v38 = g_AudioDSPState; /*0x7bfbc8*/
            v39 = *(unsigned int **)(a1 + 368); /*0x7bfbce*/
            if ( (*(int (__cdecl **)(int, int, unsigned int, unsigned int))(a1 + 64))( /*0x7bfbe2*/
                   a1,
                   5,
                   v39[2],
                   (g_AudioDSPState + 1) & 0xFFFFFFFE) )
            {
              return -4; /*0x7bfbea*/
            }
            v40 = v39[5]; /*0x7bfbf0*/
            v39[9] = 0; /*0x7bfbf3*/
            v39[10] = v38; /*0x7bfbf9*/
            v39[5] = v40 & 0xFFFFFFF7; /*0x7bfbfc*/
            if ( *(unsigned short *)(a1 + 1880) == 1 ) /*0x7bfc07*/
            {
              memcpy((void *)(a1 + 452), (const void *)v39[2], v38); /*0x7bfc19*/
              *(unsigned int *)(a1 + 448) = v39[10]; /*0x7bfc25*/
              v41 = *(unsigned int *)(a1 + 420); /*0x7bfc2b*/
              (v41) = ((v41) & ~0xFF) | ((v41 | 1) & 0xFF); /*0x7bfc31*/
              *(unsigned int *)(a1 + 420) = v41; /*0x7bfc33*/
            }
            v28 = v115; /*0x7bfc42*/
            v115[5] |= 4u; /*0x7bfc44*/
            break;
          case 0x30414E53u: /*0x7bfac5*/
            if ( (v114 & 2) != 0 ) /*0x7bfb9f*/
              goto LABEL_200; /*0x7bfb9f*/
            v37 = *(unsigned int *)(a1 + 132); /*0x7bfba5*/
            if ( (v37 & 1) == 0 || (v37 & 0x40) == 0 ) /*0x7bfbb5*/
              goto LABEL_200; /*0x7bfbb5*/
            goto LABEL_70; /*0x7bfbb5*/
          case 0x30444E53u: /*0x7bfac5*/
            if ( (v114 & 2) != 0 ) /*0x7bfb44*/
              goto LABEL_200; /*0x7bfb44*/
            v34 = *(unsigned int *)(a1 + 132); /*0x7bfb4a*/
            if ( (v34 & 1) == 0 || (v34 & 0x40) != 0 ) /*0x7bfb5a*/
              goto LABEL_200; /*0x7bfb5a*/
LABEL_70:
            if ( AudioStream::CalcReadPos((AudioStream *)a1) == -11 ) /*0x7bfb6a*/
              goto LABEL_203; /*0x7bfb6a*/
            *(unsigned int *)(a1 + 336) &= ~1u; /*0x7bfb7b*/
            v35 = Audio_Helper_7C2180(a1, g_AudioDSPState); /*0x7bfb87*/
LABEL_72:
            v36 = v35 == -1; /*0x7bfb8c*/
LABEL_73:
            if ( !v36 ) /*0x7bfb8f*/
              return -4; /*0x7bfb8f*/
            break;
          case 0x30464243u: /*0x7bfac5*/
            if ( (v114 & 0x10) != 0 ) /*0x7bfaed*/
              goto LABEL_200; /*0x7bfaed*/
            v31 = *(unsigned int **)(a1 + 356); /*0x7bfaf8*/
            v32 = g_AudioDSPState; /*0x7bfafe*/
            v33 = g_AudioDSPState + 1; /*0x7bfb00*/
            LOBYTE(v33) = (g_AudioDSPState + 1) & 0xFE; /*0x7bfb01*/
            if ( (*(int (__cdecl **)(int, int, unsigned int, int))(a1 + 64))(a1, 5, *v31, v33) ) /*0x7bfb0a*/
              return -4; /*0x7bfb12*/
            *(unsigned int *)(a1 + 372) = 0; /*0x7bfb18*/
            v31[4] = 0; /*0x7bfb1e*/
            v31[5] = v32; /*0x7bfb21*/
            v31[3] = 8; /*0x7bfb24*/
            *(unsigned int *)(a1 + 360) = v31; /*0x7bfb2b*/
            *(unsigned int *)(a1 + 356) = v31[1]; /*0x7bfb34*/
            break;
          default:
            goto LABEL_170; /*0x7bfae2*/
        }
      }
    }
  }
  if ( (a2 & 2) == 0 && (v3 & 1) != 0 && (v3 & 0x40) == 0 ) /*0x7bf99c*/
  {
    if ( AudioStream::CalcReadPos((AudioStream *)a1) == -11 ) /*0x7bf9a8*/
    {
      v25 = *(unsigned int *)(a1 + 336); /*0x7bf9aa*/
      (v25) = ((v25) & ~0xFF) | ((v25 | 1) & 0xFF); /*0x7bf9b1*/
      *(unsigned int *)(a1 + 336) = v25; /*0x7bf9b4*/
      return -11; /*0x7bf9c4*/
    }
    v26 = *(unsigned int *)(a1 + 1980); /*0x7bf9cb*/
    (v26) |= ((((1u)) & 0xFF) << 8); /*0x7bf9d4*/
    *(unsigned int *)(a1 + 336) &= ~1u; /*0x7bf9d7*/
    *(unsigned int *)(a1 + 1980) = v26; /*0x7bf9dd*/
  }
  return -2; /*0x7bf8f3*/

}
} // namespace gamemd

// 0x7C0C80
namespace gamemd {
void DSP_AudioProcess(AudioStream * aP0, int a2, char a3)
{

  int v4; // edi
  unsigned int *v5; // ebx
  unsigned int v6; // esi
  unsigned int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // edx
  int v10; // ebx
  int v11; // edx
  unsigned int *v12; // ebx
  unsigned int *v13; // esi
  int v14; // edx
  unsigned int *v15; // esi
  int v16; // edx
  unsigned int *v17; // esi
  int v18; // eax
  unsigned int *v19; // edi
  unsigned int v20; // ebx
  int v21; // ecx
  unsigned int *v22; // edi
  unsigned int v23; // ebx
  int v24; // ecx
  unsigned int *v25; // edi
  unsigned int v26; // ebx
  int v27; // ecx
  unsigned int *v29; // [esp+10h] [ebp-10h]
  unsigned int v30; // [esp+14h] [ebp-Ch]
  unsigned int v31; // [esp+18h] [ebp-8h]
  unsigned int v32; // [esp+18h] [ebp-8h]
  unsigned int v33; // [esp+18h] [ebp-8h]
  unsigned int v34; // [esp+1Ch] [ebp-4h]

  v4 = 0; /*0x7c0c89*/
  v29 = aP0->u32_170; /*0x7c0c91*/
  v34 = (a2 + 1) & 0xFFFFFFFE; /*0x7c0c9b*/
  if ( v34 ) /*0x7c0c9f*/
  {
    while ( 1 ) /*0x7c0ca5*/
    {
      v5 = &aP0->u32_198; /*0x7c0ca5*/
      if ( (*(int (__cdecl **)(int, int, int, int))(aP0 + 64))(aP0, 5, aP0 + 408, 8) ) /*0x7c0cb1*/
        return -2; /*0x7c10fe*/
      v6 = ((*(unsigned int *)(aP0 + 412) & 0xFF00 | (*(unsigned int *)(aP0 + 412) << 16)) << 8) /*0x7c0ce3*/
         | ((((unsigned __int64)aP0->u32_19C >> 16) | *(unsigned int *)(aP0 + 412) & 0xFF0000) >> 8);
      v7 = v6 + 1; /*0x7c0ce5*/
      v8 = (v6 + 1) & 0xFFFFFFFE; /*0x7c0cea*/
      v30 = v4 + v8 + 8; /*0x7c0cf1*/
      v9 = *v5; /*0x7c0cf5*/
      if ( *v5 > 0x5A445056 ) /*0x7c0cfd*/
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
              v22 = aP0->u32_170; /*0x7c102e*/
              v23 = *(unsigned int *)(aP0 + 1900) - v8; /*0x7c103a*/
              v32 = v23 + *v22; /*0x7c1045*/
              if ( (*(int (__cdecl **)(int, int, unsigned int, unsigned int))(aP0 + 64))( /*0x7c1049*/
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
              if ( *(unsigned short *)(aP0 + 232) < 3u ) /*0x7c106b*/
                *(unsigned char *)(v32 + v6 + 1) = 0x80; /*0x7c1071*/
              goto LABEL_64; /*0x7c1076*/
            }
            goto LABEL_63; /*0x7c1028*/
          }
          if ( (a3 & 4) == 0 ) /*0x7c107d*/
          {
            v25 = aP0->u32_170; /*0x7c107f*/
            v26 = *(unsigned int *)(aP0 + 1900) - v8; /*0x7c108b*/
            v33 = v26 + *v25; /*0x7c1096*/
            if ( (*(int (__cdecl **)(int, int, unsigned int, unsigned int))(aP0 + 64))(aP0, 5, v33, (v6 + 1) & 0xFFFFFFFE) ) /*0x7c109a*/
              return -4; /*0x7c110d*/
            v27 = v25[5]; /*0x7c10a4*/
            v25[8] = v26; /*0x7c10a7*/
            v25[5] = v27 | 0x10; /*0x7c10ad*/
            if ( *(unsigned short *)(aP0 + 232) < 3u ) /*0x7c10b8*/
              *(unsigned char *)(v33 + v6 + 1) = 0x80; /*0x7c10be*/
            v29[5] |= 0x20u; /*0x7c10c7*/
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
                if ( Audio_Helper_7C1F30(aP0, v6) != -1 ) /*0x7c1004*/
                  return -4; /*0x7c1004*/
                goto LABEL_64; /*0x7c1004*/
              }
              break;
            case 0x5A464243u: /*0x7c0f19*/
              if ( (a3 & 0x10) == 0 ) /*0x7c0fd0*/
              {
                if ( Audio_Helper_7C1D90(aP0, v6) != -1 ) /*0x7c0fe2*/
                  return -4; /*0x7c0fe2*/
                goto LABEL_64; /*0x7c0fe2*/
              }
              break;
            case 0x5A4B5056u: /*0x7c0f19*/
              if ( (a3 & 4) == 0 ) /*0x7c0f6e*/
              {
                v19 = aP0->u32_170; /*0x7c0f7a*/
                v20 = *(unsigned int *)(aP0 + 1900) - v8; /*0x7c0f80*/
                v31 = *v19 + v20; /*0x7c0f8d*/
                if ( (*(int (__cdecl **)(int, int, unsigned int, unsigned int))(aP0 + 64))( /*0x7c0f91*/
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
                if ( *(unsigned short *)(aP0 + 232) < 3u ) /*0x7c0fb3*/
                  *(unsigned char *)(v31 + v6 + 1) = 0x80; /*0x7c0fb9*/
                v29[5] |= 2u; /*0x7c0fc2*/
                goto LABEL_64; /*0x7c0fc6*/
              }
              break;
            case 0x5A4C5043u: /*0x7c0f19*/
              if ( (a3 & 1) == 0 ) /*0x7c0f44*/
              {
                if ( Audio_Helper_7C20B0(aP0, v6) != -1 ) /*0x7c0f56*/
                  return -4; /*0x7c0f56*/
                v29[5] |= 4u; /*0x7c0f60*/
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
        if ( *v5 == 1514426454 ) /*0x7c0d03*/
          goto LABEL_54; /*0x7c0d03*/
        if ( v9 > 0x30545056 ) /*0x7c0d0f*/
        {
          switch ( v9 ) /*0x7c0e35*/
          {
            case 0x44545056u: /*0x7c0e35*/
LABEL_30:
              if ( (a3 & 4) == 0 ) /*0x7c0ed6*/
              {
                v17 = aP0->u32_170; /*0x7c0edc*/
                (v7) = ((v7) & ~0xFF) | ((v7 & 0xFE) & 0xFF); /*0x7c0ee2*/
                if ( (*(int (__cdecl **)(int, int, unsigned int, unsigned int))(aP0 + 64))(aP0, 5, *v17, v7) ) /*0x7c0eeb*/
                  return -4; /*0x7c0ef3*/
                v18 = v17[5]; /*0x7c0ef9*/
                v17[8] = 0; /*0x7c0efc*/
                (v18) = ((v18) & ~0xFF) | ((v18 & 0xEF) & 0xFF); /*0x7c0f03*/
                v17[5] = v18; /*0x7c0f05*/
                goto LABEL_64; /*0x7c0f08*/
              }
              break; /*0x7c0ed6*/
            case 0x4B545056u: /*0x7c0e35*/
              if ( (a3 & 4) == 0 ) /*0x7c0e95*/
              {
                v15 = aP0->u32_170; /*0x7c0e9b*/
                (v7) = ((v7) & ~0xFF) | ((v7 & 0xFE) & 0xFF); /*0x7c0ea1*/
                if ( (*(int (__cdecl **)(int, int, unsigned int, unsigned int))(aP0 + 64))(aP0, 5, *v15, v7) ) /*0x7c0eaa*/
                  return -4; /*0x7c0eb2*/
                v16 = v15[5]; /*0x7c0eb8*/
                v15[8] = 0; /*0x7c0ebb*/
                v15[5] = v16 & 0xFFFFFFEF; /*0x7c0ec5*/
                v29[5] |= 2u; /*0x7c0ec8*/
                goto LABEL_64; /*0x7c0ecc*/
              }
              break;
            case 0x52545056u: /*0x7c0e35*/
              if ( (a3 & 4) == 0 ) /*0x7c0e54*/
              {
                v13 = aP0->u32_170; /*0x7c0e5a*/
                (v7) = ((v7) & ~0xFF) | ((v7 & 0xFE) & 0xFF); /*0x7c0e60*/
                if ( (*(int (__cdecl **)(int, int, unsigned int, unsigned int))(aP0 + 64))(aP0, 5, *v13, v7) ) /*0x7c0e69*/
                  return -4; /*0x7c0e71*/
                v14 = v13[5]; /*0x7c0e77*/
                v13[8] = 0; /*0x7c0e7a*/
                v13[5] = v14 & 0xFFFFFFEF; /*0x7c0e84*/
                v29[5] |= 0x20u; /*0x7c0e87*/
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
                v12 = aP0->q164; /*0x7c0deb*/
                (v7) = ((v7) & ~0xFF) | ((v7 & 0xFE) & 0xFF); /*0x7c0df1*/
                if ( (*(int (__cdecl **)(int, int, unsigned int, unsigned int))(aP0 + 64))(aP0, 5, *v12, v7) ) /*0x7c0dfa*/
                  return -4; /*0x7c0e02*/
                aP0->u32_174 = 0; /*0x7c0e08*/
                v12[4] = 0; /*0x7c0e0e*/
                v12[5] = v6; /*0x7c0e11*/
                v12[3] = 8; /*0x7c0e14*/
                aP0->q168 = v12; /*0x7c0e1b*/
                aP0->q164 = v12[1]; /*0x7c0e24*/
                goto LABEL_64; /*0x7c0e2a*/
              }
              break;
            case 0x304C5043u: /*0x7c0d15*/
              if ( (a3 & 1) == 0 ) /*0x7c0d62*/
              {
                v10 = aP0->u32_170; /*0x7c0d68*/
                (v7) = ((v7) & ~0xFF) | ((v7 & 0xFE) & 0xFF); /*0x7c0d6e*/
                if ( (*(int (__cdecl **)(int, int, unsigned int, unsigned int))(aP0 + 64))(aP0, 5, *(unsigned int *)(v10 + 8), v7) ) /*0x7c0d78*/
                  return -4; /*0x7c0d80*/
                v11 = *(unsigned int *)(v10 + 20); /*0x7c0d86*/
                *(unsigned int *)(v10 + 36) = 0; /*0x7c0d89*/
                *(unsigned int *)(v10 + 20) = v11 & 0xFFFFFFF7; /*0x7c0d94*/
                *(unsigned int *)(v10 + 40) = v6; /*0x7c0d97*/
                if ( *(unsigned short *)(aP0 + 1880) == 1 ) /*0x7c0da1*/
                {
                  memcpy((void *)(aP0 + 452), *(const void **)(v10 + 8), v6); /*0x7c0db3*/
                  aP0->u32_1C0 = *(unsigned int *)(v10 + 40); /*0x7c0dbf*/
                  *(unsigned int *)(aP0 + 420) |= 1u; /*0x7c0dcd*/
                }
                v29[5] |= 4u; /*0x7c0dd7*/
                goto LABEL_64; /*0x7c0ddb*/
              }
              break;
            case 0x30504243u: /*0x7c0d15*/
              if ( (a3 & 8) == 0 ) /*0x7c0d40*/
              {
                if ( Audio_Helper_7C1E10(aP0, v6) != -1 ) /*0x7c0d52*/
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
      (v7) = ((v7) & ~0xFF) | ((v7 & 0xFE) & 0xFF); /*0x7c10cd*/
      if ( (*(int (__cdecl **)(int, int, int, unsigned int))(aP0 + 64))(aP0, 7, 1, v7) ) /*0x7c10d5*/
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