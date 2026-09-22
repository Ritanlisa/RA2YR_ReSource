// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_6223C0_e4.hpp"
#include "e4/classes/E4Recv_6235B0_e4.hpp"
#include "e4/classes/E4Recv_623730_e4.hpp"
#include "e4/classes/E4Recv_624080_e4.hpp"
#include "e4/classes/E4Recv_624090_e4.hpp"
#include "e4/classes/E4Recv_6242B0_e4.hpp"
#include "e4/classes/E4Recv_626020_e4.hpp"
#include "e4/classes/E4Recv_626070_e4.hpp"
#include "e4/classes/E4Recv_6260A0_e4.hpp"
#include "e4/classes/E4Recv_6260F0_e4.hpp"
#include "e4/classes/E4Recv_626170_e4.hpp"
#include "e4/classes/E4Recv_6261B0_e4.hpp"
#include "e4/classes/E4Recv_626250_e4.hpp"
#include "e4/classes/E4Recv_626290_e4.hpp"
#include "e4/classes/E4Recv_6262F0_e4.hpp"
#include "e4/classes/E4Recv_6274F0_e4.hpp"
#include "e4/classes/E4Recv_6278C0_e4.hpp"
#include "e4/classes/E4Recv_627A10_e4.hpp"
#include "e4/classes/E4Recv_628B00_e4.hpp"
#include "e4/classes/E4Recv_629530_e4.hpp"
#include "e4/classes/E4Recv_629710_e4.hpp"
#include "e4/classes/E4Recv_62C6E0_e4.hpp"
#include "e4/classes/E4Recv_62CB10_e4.hpp"
#include "e4/classes/E4Recv_62D510_e4.hpp"
#include "e4/classes/E4Recv_62E430_e4.hpp"
#include "e4/classes/E4Recv_62E840_e4.hpp"
#include "e4/classes/E4Recv_62ED40_e4.hpp"
#include "e4/classes/E4Recv_62F9A0_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/MIXFile_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/WideString_e4.hpp"

// 0x620050
namespace gamemd {
void Surface_DrawLineAlpha(int a1, int * a2, int * a3, short a4, unsigned char a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  __int16 *v9; // edi
  __int16 v16; // bp
  __int16 v17; // si
  __int16 v22; // bx
  __int16 v23; // ax
  __int16 v24; // bp
  __int16 v32; // bx
  __int16 v33; // ax
  __int16 v41; // bx
  __int16 v42; // ax
  __int16 v43; // bp
  __int16 v62; // [esp+3Ch] [ebp+4h]
  __int16 v63; // [esp+3Ch] [ebp+4h]
  __int16 v64; // [esp+3Ch] [ebp+4h]
  __int16 *v65; // [esp+40h] [ebp+8h]
  int v60 = a2[1]; /*0x620057*/
  int v5 = *a2; /*0x620060*/
  int v6 = a3[1]; /*0x620062*/
  int v7 = *a3; /*0x620066*/
  if ( *a2 > *a3 ) /*0x620071*/
  {
    v6 = a2[1]; /*0x620075*/
    v5 = *a3; /*0x620078*/
    v7 = *a2; /*0x62007a*/
    v60 = a3[1]; /*0x62007c*/
  }
  int v45 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 112))(a1); /*0x62008b*/
  v9 = (__int16 *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 92))(a1, v5, v60); /*0x620098*/
  if ( !v9 ) /*0x62009c*/
    return 0; /*0x6205bc*/
  if ( v60 == v6 ) /*0x6200a8*/
  {
    if ( v45 == 1 ) /*0x6200b3*/
    {
      LOBYTE(v6) = a4; /*0x6200bb*/
      BYTE1(v6) = a4; /*0x6200bf*/
      unsigned int v10 = v7 - v5 + 1; /*0x6200c4*/
      int v11 = v6 << 16; /*0x6200c6*/
      LOWORD(v11) = v6; /*0x6200c9*/
      memset32(v9, v11, v10 >> 2); /*0x6200cf*/
      memset(&v9[2 * (v10 >> 2)], a4, v10 & 3); /*0x6200d6*/
      (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 96))(a1); /*0x6200de*/
      return 1; /*0x6200ea*/
    }
    int v13 = v7 - v5; /*0x6200ed*/
    if ( v13 >= 0 ) /*0x6200ef*/
    {
      int v14 = a5; /*0x6200fd*/
      int v15 = 255 - a5; /*0x620108*/
      v16 = a4; /*0x62010a*/
      int v55 = a5; /*0x620111*/
      int v57 = v15; /*0x620115*/
      v65 = v9; /*0x62011d*/
      int v66 = v13 + 1; /*0x620121*/
      while ( 1 ) /*0x620142*/
      {
        v17 = *v9; /*0x620142*/
        g_GameScreenConfig = v15; /*0x62014a*/
  unsigned int v18; // ecx
        v18 = (v15 * (unsigned __int16)(v17 & HIWORD(g_ScreenSaverState)) /*0x62018a*/
             + v14 * (unsigned int)(unsigned __int16)(HIWORD(g_ScreenSaverState) & a4)) >> 8;
        LOWORD(v18) = HIWORD(g_ScreenSaverState) & v18; /*0x62018d*/
  unsigned int v19; // ecx
        v19 = v18 /*0x6201a3*/
            | g_ScreenSaverState
            & ((v15 * (unsigned __int16)(v17 & g_ScreenSaverState)
              + v14 * (unsigned int)(unsigned __int16)(v16 & g_ScreenSaverState)) >> 8);
        v16 = a4; /*0x6201a5*/
        g_GameScreenFlags = v14; /*0x6201bd*/
        *v65 = ((v15 * (unsigned __int16)(v17 & g_CreditsScreenState) /*0x6201c3*/
               + v14 * (unsigned int)(unsigned __int16)(a4 & g_CreditsScreenState)) >> 8)
             | v19;
        v9 = ++v65; /*0x6201c6*/
        if ( !--v66 ) /*0x6201d2*/
          break; /*0x6201d2*/
        v15 = v57; /*0x620127*/
        v14 = v55; /*0x62012b*/
      }
    }
  }
  else if ( v5 == v7 ) /*0x6201ef*/
  {
    if ( v60 <= v6 ) /*0x6201fb*/
      int v20 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 116))(a1); /*0x62020d*/
    else
      v20 = -(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 116))(a1); /*0x620204*/
    int v47 = v20; /*0x620217*/
    int v21 = abs32(v6 - v60); /*0x62021e*/
    if ( v21 >= 0 ) /*0x620220*/
    {
      v22 = a4; /*0x620226*/
      int v49 = v21 + 1; /*0x62022b*/
      do /*0x620305*/
      {
        if ( v45 == 1 ) /*0x620234*/
        {
          *(_BYTE *)v9 = v22; /*0x620236*/
        }
        else
        {
          v23 = *v9; /*0x620241*/
          g_GameScreenFlags = a5; /*0x62024f*/
          v62 = v22; /*0x620291*/
          g_GameScreenConfig = 255 - a5; /*0x6202a4*/
          v24 = HIWORD(g_ScreenSaverState) /*0x6202dd*/
              & ((a5 * (unsigned __int16)(HIWORD(g_ScreenSaverState) & v22)
                + (255 - a5) * (unsigned int)(unsigned __int16)(HIWORD(g_ScreenSaverState) & v23)) >> 8)
              | g_ScreenSaverState
              & ((a5 * (unsigned __int16)(v22 & g_ScreenSaverState)
                + (255 - a5) * (unsigned int)(unsigned __int16)(g_ScreenSaverState & v23)) >> 8);
          v22 = a4; /*0x6202e5*/
          v20 = v47; /*0x6202ec*/
          *v9 = ((a5 * (unsigned __int16)(v62 & g_CreditsScreenState) /*0x6202f7*/
                + g_GameScreenConfig * (unsigned int)(unsigned __int16)(g_CreditsScreenState & v23)) >> 8)
              | v24;
        }
        v9 = (__int16 *)((char *)v9 + v20); /*0x6202fe*/
        --v49; /*0x620301*/
      }
      while ( v49 ); /*0x620305*/
    }
  }
  else
  {
    int v25 = v7 - v5; /*0x620324*/
    int v58 = v25; /*0x620326*/
    int v26 = v6 - v60; /*0x62032a*/
    int v27 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 116))(a1); /*0x62032e*/
    int v48 = v27; /*0x620333*/
    if ( v26 < 0 ) /*0x620337*/
      v48 = -v27; /*0x62033b*/
    int v28 = 2 * v25; /*0x620341*/
    int v54 = 2 * v25; /*0x620347*/
    int v29 = abs32(v26); /*0x62034b*/
    int v56 = 2 * v29; /*0x620352*/
    if ( v25 <= v29 ) /*0x620356*/
    {
      int v39 = 0; /*0x620488*/
      int v40 = v28 - v29; /*0x62048a*/
      int v53 = 0; /*0x62048c*/
      int v51 = v28 - v29; /*0x620492*/
      if ( v29 > 0 ) /*0x620496*/
      {
  bool v44; // zf
        v41 = a4; /*0x62049c*/
        int v59 = v29; /*0x6204a0*/
        do /*0x62059e*/
        {
          if ( v45 == 1 ) /*0x6204a9*/
          {
            *((_BYTE *)v9 + v39) = v41; /*0x6204ab*/
          }
          else
          {
            v42 = v9[v39]; /*0x6204b3*/
            g_GameScreenFlags = a5; /*0x6204c6*/
            v64 = v41; /*0x620508*/
            g_GameScreenConfig = 255 - a5; /*0x62051b*/
            v43 = HIWORD(g_ScreenSaverState) /*0x620554*/
                & ((a5 * (unsigned __int16)(HIWORD(g_ScreenSaverState) & v41)
                  + (255 - a5) * (unsigned int)(unsigned __int16)(HIWORD(g_ScreenSaverState) & v42)) >> 8)
                | g_ScreenSaverState
                & ((a5 * (unsigned __int16)(v41 & g_ScreenSaverState)
                  + (255 - a5) * (unsigned int)(unsigned __int16)(g_ScreenSaverState & v42)) >> 8);
            v41 = a4; /*0x62055c*/
            v39 = v53; /*0x620563*/
            v40 = v51; /*0x620569*/
            v9[v53] = ((a5 * (unsigned __int16)(v64 & g_CreditsScreenState) /*0x620572*/
                      + g_GameScreenConfig * (unsigned int)(unsigned __int16)(g_CreditsScreenState & v42)) >> 8)
                    | v43;
            v28 = 2 * v25; /*0x620576*/
          }
          if ( v40 > 0 ) /*0x62057c*/
          {
            v53 = ++v39; /*0x620583*/
            v40 -= v56; /*0x620587*/
          }
          v40 += v28; /*0x620591*/
          v9 = (__int16 *)((char *)v9 + v48); /*0x620593*/
          v44 = v59 == 1; /*0x620595*/
          v51 = v40; /*0x620596*/
          --v59; /*0x62059a*/
        }
        while ( !v44 ); /*0x62059e*/
      }
    }
    else
    {
      int v30 = 2 * v29 - v25; /*0x62035c*/
      int v31 = 0; /*0x62035e*/
      int v50 = v30; /*0x620362*/
      int v52 = 0; /*0x620366*/
      if ( v25 > 0 ) /*0x62036a*/
      {
        v32 = a4; /*0x620370*/
        do /*0x62046b*/
        {
          if ( v45 == 1 ) /*0x620379*/
          {
            *((_BYTE *)v9 + v31) = v32; /*0x62037b*/
          }
          else
          {
            v33 = v9[v31]; /*0x620387*/
            g_GameScreenFlags = a5; /*0x620396*/
            int v34 = 255 - a5; /*0x62039c*/
            v63 = v32; /*0x6203d8*/
  unsigned int v35; // ebp
            v35 = g_ScreenSaverState /*0x6203e5*/
                & ((a5 * (unsigned __int16)(v32 & g_ScreenSaverState)
                  + v34 * (unsigned int)(unsigned __int16)(g_ScreenSaverState & v33)) >> 8);
            g_GameScreenConfig = v34; /*0x6203eb*/
  unsigned int v36; // ebx
            v36 = (a5 * (unsigned __int16)(HIWORD(g_ScreenSaverState) & v32) /*0x620411*/
                 + v34 * (unsigned int)(unsigned __int16)(HIWORD(g_ScreenSaverState) & v33)) >> 8;
            LOWORD(v36) = HIWORD(g_ScreenSaverState) & v36; /*0x620414*/
            int v37 = v36 | v35; /*0x620424*/
            v32 = a4; /*0x62042c*/
            v25 = v58; /*0x620435*/
            v30 = v50; /*0x620439*/
  unsigned int v38; // ebp
            v38 = ((a5 * (unsigned __int16)(v63 & g_CreditsScreenState) /*0x620440*/
                  + g_GameScreenConfig * (unsigned int)(unsigned __int16)(g_CreditsScreenState & v33)) >> 8)
                | v37;
            v31 = v52; /*0x620442*/
            v9[v52] = v38; /*0x620446*/
            v28 = v54; /*0x62044a*/
          }
          if ( v30 > 0 ) /*0x620450*/
          {
            v9 = (__int16 *)((char *)v9 + v48); /*0x620456*/
            v30 -= v28; /*0x620458*/
          }
          v30 += v56; /*0x62045e*/
          ++v31; /*0x620460*/
          v50 = v30; /*0x620463*/
          v52 = v31; /*0x620467*/
        }
        while ( v31 < v25 ); /*0x62046b*/
      }
    }
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 96))(a1); /*0x620311*/
  return 1; /*0x6200e3*/
}
}
} // namespace gamemd

// 0x6208F0
namespace gamemd {
void Dialog_DrawGradient(int * a1, int * a2, int a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax
  int v33; // [esp+58h] [ebp-74h] BYREF
  int v34; // [esp+5Ch] [ebp-70h] BYREF
  int v38; // [esp+70h] [ebp-5Ch]
  int v39; // [esp+74h] [ebp-58h]

  int v4 = a4; /*0x6208f8*/
  if ( a4 == -1 && DataGlobal_AC4624 != -1 ) /*0x620911*/
    v4 = ((int)(unsigned __int8)DataGlobal_AC4624 >> g_BitShift_Green_0 << g_DDraw_BlueMask) /*0x62095c*/
       | (BYTE1(DataGlobal_AC4624) >> g_BitMask_Blue << g_BitMask_Green)
       | (BYTE2(DataGlobal_AC4624) >> g_BitShift_Blue << g_BitShift_Blue);
  int v7 = DataGlobal_AC1B94; /*0x620963*/
  int v29 = DataGlobal_AC1B98; /*0x62096c*/
  int v30 = DataGlobal_AC1B94; /*0x620970*/
  if ( DataGlobal_AC1B98 == -1 ) /*0x620974*/
  {
    v33 = -1; /*0x620976*/
  }
  else
  {
    v33 = ((int)(unsigned __int8)DataGlobal_AC1B98 >> g_BitShift_Green_0 << g_DDraw_BlueMask) /*0x6209bf*/
        | (BYTE1(DataGlobal_AC1B98) >> g_BitMask_Blue << g_BitMask_Green)
        | (BYTE2(DataGlobal_AC1B98) >> g_BitShift_Blue << g_BitShift_Blue);
    v7 = DataGlobal_AC1B94; /*0x6209c3*/
  }
  if ( v7 == -1 ) /*0x6209ca*/
    v34 = -1; /*0x6209cc*/
  else
    v34 = ((int)(unsigned __int8)v7 >> g_BitShift_Green_0 << g_DDraw_BlueMask) /*0x620a16*/
        | (BYTE1(v7) >> g_BitMask_Blue << g_BitMask_Green)
        | (BYTE2(DataGlobal_AC1B94) >> g_BitShift_Blue << g_BitShift_Blue);
  int v8 = *a2; /*0x620a1d*/
  int v9 = a2[1]; /*0x620a1f*/
  int v10 = a2[2]; /*0x620a22*/
  v39 = a2[3]; /*0x620a25*/
  int v11 = a3; /*0x620a29*/
  result = v8 - a3; /*0x620a30*/
  int v13 = v9 - a3; /*0x620a32*/
  v38 = 2 * a3 + v10; /*0x620a39*/
  v39 += 2 * a3; /*0x620a45*/
  if ( a3 > 0 ) /*0x620a49*/
  {
    int v14 = result; /*0x620a53*/
    int * v31 = &v33; /*0x620a55*/
    int v36 = a3; /*0x620a5d*/
    int v15 = v39 + v13 - 1; /*0x620a61*/
    int v16 = v13 - result; /*0x620a65*/
    int v27 = v15; /*0x620a67*/
    int v35 = v16; /*0x620a6f*/
    int v28 = v38 + result - 1; /*0x620a77*/
    int * v32 = &v34; /*0x620a7f*/
    while ( 1 ) /*0x620a90*/
    {
      if ( v11 == 2 ) /*0x620a93*/
        v4 = *v31; /*0x620a99*/
      int v17 = v16 + v14; /*0x620aa0*/
      int v18 = *a1; /*0x620aa3*/
      int v41 = v28 - 1; /*0x620aaf*/
  _DWORD v48[2]; // [esp+ACh] [ebp-20h] BYREF
      v48[0] = v28 - 1; /*0x620ab3*/
      v48[1] = v17; /*0x620ac1*/
  _DWORD v51[2]; // [esp+C4h] [ebp-8h] BYREF
      v51[0] = v14; /*0x620acc*/
      v51[1] = v17; /*0x620ad3*/
      (*(void (__thiscall **)(int *, _DWORD *, _DWORD *, int))(v18 + 48))(a1, v51, v48, v4); /*0x620ada*/
  _DWORD v46[2]; // [esp+9Ch] [ebp-30h] BYREF
      v46[1] = v17 + 1; /*0x620ae8*/
  _DWORD v43[2]; // [esp+84h] [ebp-48h] BYREF
      v43[1] = v27; /*0x620af1*/
      int v19 = *a1; /*0x620af5*/
      v43[0] = v14; /*0x620afb*/
      v46[0] = v14; /*0x620aff*/
      (*(void (__thiscall **)(int *, _DWORD *, _DWORD *, int))(v19 + 48))(a1, v46, v43, v4); /*0x620b03*/
      if ( a3 == 2 ) /*0x620b0e*/
        v4 = *v32; /*0x620b14*/
      int v20 = *a1; /*0x620b1a*/
  _DWORD v50[2]; // [esp+BCh] [ebp-10h] BYREF
      v50[0] = v28; /*0x620b1c*/
      v50[1] = v27; /*0x620b27*/
  _DWORD v44[2]; // [esp+8Ch] [ebp-40h] BYREF
      v44[1] = v27; /*0x620b2e*/
      v44[0] = v14; /*0x620b42*/
      (*(void (__thiscall **)(int *, _DWORD *, _DWORD *, int))(v20 + 48))(a1, v44, v50, v4); /*0x620b46*/
  _DWORD v45[2]; // [esp+94h] [ebp-38h] BYREF
      v45[0] = v28; /*0x620b51*/
  _DWORD v47[2]; // [esp+A4h] [ebp-28h] BYREF
      v47[0] = v28; /*0x620b55*/
      int v21 = *a1; /*0x620b59*/
      int v40 = v27 - 1; /*0x620b5e*/
      v45[1] = v27 - 1; /*0x620b62*/
      v47[1] = v17; /*0x620b73*/
      (*(void (__thiscall **)(int *, _DWORD *, _DWORD *, int))(v21 + 48))(a1, v47, v45, v4); /*0x620b7a*/
      if ( a3 == 2 ) /*0x620b85*/
      {
        __int64 v22 = (v29 & 0xFF00) + (v30 & 0xFF00); /*0x620ba8*/
  int v23; // ebx
        v23 = (unsigned __int8)(((unsigned __int8)v29 + (unsigned __int8)v30) / 2) /*0x620beb*/
            + ((((v29 & 0xFF0000) + (v30 & 0xFF0000)) / 2) & 0xFF0000)
            + ((((int)v22 - HIDWORD(v22)) >> 1) & 0xFF00);
        int v42 = v23; /*0x620bf0*/
        if ( v23 == -1 ) /*0x620bf4*/
          v4 = -1; /*0x620bf6*/
        else
          v4 = ((int)(unsigned __int8)v23 >> g_BitShift_Green_0 << g_DDraw_BlueMask) /*0x620c3e*/
             | (BYTE1(v23) >> g_BitMask_Blue << g_BitMask_Green)
             | (BYTE2(v42) >> g_BitShift_Blue << g_BitShift_Blue);
        int v24 = *a1; /*0x620c48*/
  _DWORD v49[2]; // [esp+B4h] [ebp-18h] BYREF
        v49[0] = v28; /*0x620c4a*/
        v49[1] = v35 + v14; /*0x620c55*/
        (*(void (__thiscall **)(int *, _DWORD *, int))(v24 + 36))(a1, v49, v4); /*0x620c66*/
        int v25 = *a1; /*0x620c69*/
  _DWORD v37[2]; // [esp+68h] [ebp-64h] BYREF
        v37[1] = v27; /*0x620c74*/
        v37[0] = v14; /*0x620c7b*/
        (*(void (__thiscall **)(int *, _DWORD *, int))(v25 + 36))(a1, v37, v4); /*0x620c7f*/
      }
      ++v14; /*0x620c9b*/
      --v32; /*0x620c9c*/
      result = v36 - 1; /*0x620ca4*/
      bool v26 = v36 == 1; /*0x620ca4*/
      ++v31; /*0x620ca5*/
      v28 = v41; /*0x620ca9*/
      v27 = v40; /*0x620cad*/
      --v36; /*0x620cb1*/
      if ( v26 ) /*0x620cb5*/
        break; /*0x620cb5*/
      v16 = v35; /*0x620a85*/
      v11 = a3; /*0x620a89*/
    }
  }
  return result; /*0x620cbb*/
}
}
} // namespace gamemd

// 0x620CD0
namespace gamemd {
int ComputeHashModPrime(int * a1, int * a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax
  int i; // [esp+3Ch] [ebp-5Ch]

  int v5 = *a2; /*0x620cdb*/
  int v6 = a2[1]; /*0x620cdd*/
  int v34 = v5; /*0x620ce6*/
  int v7 = a2[2]; /*0x620cea*/
  int v35 = v6; /*0x620ced*/
  int v8 = a2[3]; /*0x620cf1*/
  int v36 = v7; /*0x620cf9*/
  int v37 = v8; /*0x620d04*/
  int v9; // ebx
  v9 = (39 >> g_BitShift_Green_0 << g_DDraw_BlueMask) /*0x620d3e*/
     | (248 >> g_BitMask_Blue << g_BitMask_Green)
     | (116 >> g_BitShift_Blue << g_BitShift_Blue);
  int v10; // ebp
  v10 = (19 >> g_BitShift_Green_0 << g_DDraw_BlueMask) /*0x620d7d*/
      | (123 >> g_BitMask_Blue << g_BitMask_Green)
      | (57 >> g_BitShift_Blue << g_BitShift_Blue);
  int v24; // [esp+40h] [ebp-58h]
  v24 = (30 >> g_BitShift_Green_0 << g_DDraw_BlueMask) /*0x620dbf*/
      | (186 >> g_BitMask_Blue << g_BitMask_Green)
      | (87 >> g_BitShift_Blue << g_BitShift_Blue);
  int v22 = 0; /*0x620dfb*/
  int v25; // [esp+44h] [ebp-54h]
  v25 = (24 >> g_BitShift_Green_0 << g_DDraw_BlueMask) /*0x620e0d*/
      | (153 >> g_BitMask_Blue << g_BitMask_Green)
      | (71 >> g_BitShift_Blue << g_BitShift_Blue);
  result = a3; /*0x620e11*/
  int v12 = -1 - a3 + v34; /*0x620e19*/
  v35 += -1 - a3; /*0x620e25*/
  int v13 = 2 * a3 + 2; /*0x620e29*/
  v36 += v13; /*0x620e2f*/
  int v14 = v13 + v8; /*0x620e37*/
  if ( a3 > 0 ) /*0x620e3b*/
  {
    int v21 = v36 + v12 - 1; /*0x620e4d*/
    int v15 = v35 - v12; /*0x620e55*/
    int v20 = v14 + v35 - 1; /*0x620e57*/
    for ( i = v35 - v12; ; v15 = i ) /*0x620e5b*/
    {
      int v16 = *a1; /*0x620e69*/
  _DWORD v26[2]; // [esp+48h] [ebp-50h] BYREF
      v26[1] = v12 + v15; /*0x620e6e*/
  _DWORD v27[2]; // [esp+50h] [ebp-48h] BYREF
      v27[1] = v12 + v15; /*0x620e72*/
      v26[0] = v21 - 1; /*0x620e76*/
      v27[0] = v12; /*0x620e87*/
      (*(void (__thiscall **)(int *, _DWORD *, _DWORD *, int))(v16 + 48))(a1, v27, v26, v9); /*0x620e8b*/
  _DWORD v28[2]; // [esp+58h] [ebp-40h] BYREF
      v28[0] = v21; /*0x620e9a*/
      v28[1] = v20; /*0x620e9e*/
  _DWORD v29[2]; // [esp+60h] [ebp-38h] BYREF
      v29[1] = v20; /*0x620ea2*/
      int v17 = *a1; /*0x620ea6*/
      v29[0] = v12; /*0x620eb1*/
      (*(void (__thiscall **)(int *, _DWORD *, _DWORD *, int))(v17 + 48))(a1, v29, v28, v10); /*0x620eb5*/
  _DWORD v30[2]; // [esp+68h] [ebp-30h] BYREF
      v30[1] = v20; /*0x620ec4*/
      v30[0] = v12; /*0x620ec8*/
  _DWORD v31[2]; // [esp+70h] [ebp-28h] BYREF
      v31[0] = v12; /*0x620ecc*/
      int v18 = *a1; /*0x620ed4*/
      v31[1] = v35 + v22 + 1; /*0x620ed6*/
      (*(void (__thiscall **)(int *, _DWORD *, _DWORD *, int))(v18 + 48))(a1, v31, v30, v24); /*0x620eeb*/
  _DWORD v32[2]; // [esp+78h] [ebp-20h] BYREF
      v32[1] = v20 - 1; /*0x620efb*/
      v32[0] = v21; /*0x620f03*/
  _DWORD v33[2]; // [esp+80h] [ebp-18h] BYREF
      v33[0] = v21; /*0x620f07*/
      v33[1] = i + v12; /*0x620f17*/
      (*(void (__thiscall **)(int *, _DWORD *, _DWORD *, int))(*a1 + 48))(a1, v33, v32, v25); /*0x620f21*/
      result = v22 + 1; /*0x620f30*/
      ++v12; /*0x620f31*/
      --v20; /*0x620f33*/
      bool v19 = ++v22 < a3; /*0x620f3c*/
      --v21; /*0x620f42*/
      if ( !v19 ) /*0x620f46*/
        break; /*0x620f46*/
    }
  }
  return result; /*0x620f4c*/
}
}
} // namespace gamemd

// 0x621040
namespace gamemd {
void PrintFontLayout(AbstractClass * aP0, AbstractClass * aP1, AbstractClass aP3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  unsigned __int16 *v3; // edx
  AbstractClass *v4; // ecx
  AbstractClass *v10; // esi
  AbstractClass *v12; // edi
  AbstractClass *v9; // ebp
  BitFont *v15; // ebx
  AbstractClass *aP1a; // [esp+10h] [ebp-10h]
  AbstractClass *aP2; // [esp+18h] [ebp-8h]
  AbstractClass *var4; // [esp+1Ch] [ebp-4h]

  var4 = v4; /*0x62104a*/
  aP2 = (AbstractClass *)v3; /*0x621087*/
  v10 = aP0; /*0x62109d*/
  int v6 = *(_DWORD *)&aP0->__pad_0[12]; /*0x6210a1*/
  v12 = (AbstractClass *)(*(_DWORD *)&aP0->__pad_0[8] - *(_DWORD *)aP0->__pad_0); /*0x6210ab*/
  int v13 = *(_DWORD *)aP0->__pad_0; /*0x6210ad*/
  int v8; // ebx
  v8 = ((unsigned __int8)aP3[0] >> stru_89E138[11420] << stru_89E138[11416]) /*0x6210b1*/
     | ((unsigned __int8)aP3[2] >> stru_89E138[11428] << stru_89E138[11424])
     | ((unsigned __int8)aP3[1] >> stru_89E138[11436] << stru_89E138[11432]);
  *(_DWORD *)aP3[0] = *(_DWORD *)&aP0->__pad_0[4]; /*0x6210b6*/
  v9 = (AbstractClass *)(v6 - *(_DWORD *)aP3[0]); /*0x6210ba*/
  aP1a = (AbstractClass *)v8; /*0x6210c0*/
  v15 = (BitFont *)aP1; /*0x6210c4*/
  if ( (aP3[4] & 4) != 0 ) /*0x6210ca*/
  {
    Text::Layout(aP1, v3, (AbstractClass *)&aP1, (AbstractClass *)&aP0, v12); /*0x6210da*/
    *(_DWORD *)aP3[0] += ((char *)v9 - (char *)aP0) / 2; /*0x6210f2*/
  }
  Char::Swap(v15, (ObjectClass *)1); /*0x6210fa*/
  TextGroup::SetRect(v15, v10); /*0x621102*/
  Property::Set(v15, aP1a); /*0x62110e*/
  Font::Print( /*0x62113f*/
    (AbstractClass *)v15,
    var4,
    aP2,
    v13,
    *(AbstractClass **)aP3[0],
    v12,
    v9,
    *(AbstractClass **)&aP3[4],
    (AbstractClass *)aP3.uniqueId,
    (AbstractClass *)aP3.abstractFlags);
  return 0; /*0x621146*/
}
}
} // namespace gamemd

// 0x621150
namespace gamemd {
double sub_621150(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  double result; // st7

  result = 1.0; /*0x621153*/
  _DWORD v6[3]; // [esp+Ch] [ebp-Ch] BYREF
  v6[0] = 43; /*0x62115b*/
  v6[1] = 128; /*0x621163*/
  v6[2] = 213; /*0x62116b*/
  int * v2 = v6; /*0x621173*/
  int v3 = 3; /*0x621177*/
  do /*0x6211c6*/
  {
  double v5; // st7
    int v4 = *v2; /*0x62117c*/
    if ( a1 <= *v2 - 16 ) /*0x621183*/
    {
      if ( a1 <= v4 ) /*0x621199*/
        goto LABEL_9; /*0x621199*/
    }
    else if ( a1 <= v4 ) /*0x621187*/
    {
      v5 = (double)(v4 - a1); /*0x621191*/
      goto LABEL_8; /*0x621195*/
    }
    if ( a1 > v4 + 16 ) /*0x6211a0*/
      goto LABEL_9; /*0x6211a0*/
    v5 = (double)(a1 - v4); /*0x6211ac*/
LABEL_8:
    result = v5 * 0.0625 * 0.60000002 + 0.40000001; /*0x6211b0*/
LABEL_9:
    ++v2; /*0x6211c2*/
    --v3; /*0x6211c5*/
  }
  while ( v3 ); /*0x6211c6*/
  return result; /*0x6211c8*/
}
}
} // namespace gamemd

// 0x6211D0
namespace gamemd {
void DrawTextRendererTextAligned(int ecx0, unsigned int * a1, ObjectClass * aP2, unsigned short * a3, int a5, int a6, int arg10, int * a7, int a9)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  AbstractClass *v9; // edi
  AbstractClass *v13; // esi
  AbstractClass *v14; // eax
  int yTop; // [esp+28h] [ebp+4h]

  v9 = (AbstractClass *)a1; /*0x6211dc*/
  if ( !HouseClass_Player[45108] ) /*0x6211e0*/
    return 0; /*0x6211e8*/
  if ( !a7 ) /*0x6211f1*/
    a7 = *(int **)&stru_87C374[44956]; /*0x6211f9*/
  int v12 = *(_DWORD *)aP2->__pad_0; /*0x621234*/
  _BYTE v18[32]; // [esp+4h] [ebp-20h] BYREF
  *(_DWORD *)&v18[12] = *(_DWORD *)&aP2->__pad_0[12]; /*0x621255*/
  v13 = (AbstractClass *)(((unsigned __int8)ecx0 >> stru_89E138[11420] << stru_89E138[11416]) /*0x621259*/
                        | (BYTE1(ecx0) >> stru_89E138[11436] << stru_89E138[11432])
                        | (BYTE2(ecx0) >> stru_89E138[11428] << stru_89E138[11424]));
  yTop = *(_DWORD *)&aP2->__pad_0[4]; /*0x62125e*/
  v14 = *(AbstractClass **)&aP2->__pad_0[8]; /*0x621262*/
  *(_DWORD *)&v18[8] = v14; /*0x621267*/
  if ( !a1 ) /*0x62126b*/
    v9 = aP0; /*0x62126d*/
  Text::Layout(v9, a3, (AbstractClass *)v18, (AbstractClass *)&v18[4], v14); /*0x621285*/
  switch ( a6 ) /*0x621291*/
  {
    case 1: /*0x621291*/
      v12 += (*(_DWORD *)&v18[8] - *(_DWORD *)v18 + 1) / 2; /*0x6212a3*/
      break;
    case 2: /*0x621291*/
      v12 += (*(_DWORD *)v18 + 1) / -2; /*0x6212ba*/
      break;
    case 3: /*0x621291*/
      v12 += -1 - *(_DWORD *)v18; /*0x6212cc*/
      break;
    case 4: /*0x621291*/
      v12 = *(_DWORD *)&v18[8] - *(_DWORD *)v18 + v12 - 1; /*0x6212df*/
      break;
  }
  switch ( arg10 ) /*0x6212ea*/
  {
    case 1: /*0x6212ea*/
      int v15 = (*(_DWORD *)&v18[12] - *(_DWORD *)&v18[4] + 1) / 2; /*0x6212fa*/
LABEL_21:
      yTop += v15; /*0x621321*/
      break; /*0x621321*/
    case 2: /*0x6212ea*/
      v15 = (*(_DWORD *)&v18[4] + 1) / -2; /*0x62130f*/
      goto LABEL_21; /*0x621311*/
    case 3: /*0x6212ea*/
      v15 = -1 - *(_DWORD *)&v18[4]; /*0x62131f*/
      goto LABEL_21; /*0x62131f*/
  }
  int v16 = *(_DWORD *)aP2->__pad_0; /*0x621325*/
  int v17 = *(_DWORD *)&aP2->__pad_0[4]; /*0x621327*/
  *(_DWORD *)&v18[16] = v16; /*0x621332*/
  *(_DWORD *)&v18[20] = v17; /*0x621336*/
  *(_DWORD *)&v18[24] = *(_DWORD *)&v18[8] + v16; /*0x621342*/
  *(_DWORD *)&v18[28] = *(_DWORD *)&v18[12] + v17; /*0x621346*/
  Char::Swap(v9, (ObjectClass *)1); /*0x62134a*/
  TextGroup::SetRect(v9, (AbstractClass *)&v18[16]); /*0x621356*/
  Property::Set(v9, v13); /*0x62135e*/
  return FontRenderer::DrawText(v9, a7, a3, v12, yTop, a5, a9) - v12; /*0x6211e4*/
}
}
} // namespace gamemd

// 0x6214B0
namespace gamemd {
void SetupDialogRenderBuffer(int * a1, HWND a2, unsigned char a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  HWND Parent; // eax
  __int16 *v13; // edi
  __int16 v18; // ax
  HWND hWnd; // [esp+14h] [ebp-74h] BYREF
  HWND v24; // [esp+18h] [ebp-70h] BYREF
  struct tagRECT v28; // [esp+28h] [ebp-60h] BYREF
  struct tagRECT Rect; // [esp+48h] [ebp-40h] BYREF
  LONG left; // [esp+58h] [ebp-30h] BYREF
  LONG top; // [esp+5Ch] [ebp-2Ch]
  struct tagRECT v36; // [esp+78h] [ebp-10h] BYREF

  int * v3 = a1; /*0x6214bc*/
  int v4 = 0; /*0x6214be*/
  _DWORD * v5 = 0; /*0x6214c0*/
  hWnd = a2; /*0x6214c4*/
  int * v25 = a1; /*0x6214c8*/
  if ( g_DialogHashMap_Count ) /*0x6214cc*/
  {
    int v6 = *((_DWORD *)g_DialogHashMap_Base + (g_DialogHashMap_Buckets(&hWnd) & ((1 << g_DialogHashMap_Buckets) - 1))); /*0x6214ed*/
    a2 = hWnd; /*0x6214f0*/
    if ( v6 ) /*0x6214f6*/
    {
      while ( *(HWND *)v6 != hWnd ) /*0x6214fa*/
      {
        v6 = *(_DWORD *)(v6 + 516); /*0x6214fc*/
        if ( !v6 ) /*0x621504*/
          goto LABEL_7; /*0x621504*/
      }
      v4 = v6 + 4; /*0x62150c*/
    }
  }
LABEL_7:
  GetClientRect(a2, &Rect); /*0x62150f*/
  ScreenDialogToClient(hWnd, &v28); /*0x621523*/
  _DWORD * v7 = *(_DWORD **)(v4 + 16); /*0x621528*/
  if ( !v7 ) /*0x62152d*/
  {
  int v34; // [esp+64h] [ebp-24h]
  int v33; // [esp+60h] [ebp-28h]
    v7 = __2_YAPAXI_Z(0x20u); /*0x62153a*/
    if ( v7 ) /*0x621543*/
    {
      int v8 = Rect.bottom + 1; /*0x62154d*/
      int v9 = Rect.right + 1; /*0x62154e*/
      v7[2] = Rect.bottom + 1; /*0x62154f*/
      v7[1] = v9; /*0x621557*/
      v7[3] = 0; /*0x62155f*/
      *v7 = &XSurface_Vtable; /*0x621562*/
      v7[4] = 2; /*0x621568*/
      Buffer::Init(v7 + 5, 0, 2 * v9 * v8); /*0x62156f*/
      *v7 = &BSurface_Vtable; /*0x621574*/
    }
    else
    {
      v7 = 0; /*0x62157e*/
    }
    *(_DWORD *)(v4 + 16) = v7; /*0x621580*/
  _DWORD v29[4]; // [esp+38h] [ebp-50h] BYREF
    v29[0] = 0; /*0x621591*/
    v29[1] = 0; /*0x621595*/
    ++g_GameScreenState; /*0x6215a1*/
    v29[2] = Rect.right + 1; /*0x6215a7*/
    v29[3] = Rect.bottom + 1; /*0x6215ab*/
    Parent = GetParent(hWnd); /*0x6215af*/
    v24 = Parent; /*0x6215bd*/
    if ( g_DialogHashMap_Count ) /*0x6215c1*/
    {
      _DWORD * v11 = (_DWORD *)*((_DWORD *)g_DialogHashMap_Base + (g_DialogHashMap_Buckets(&v24) & ((1 << g_DialogHashMap_Buckets) - 1))); /*0x6215e2*/
      Parent = v24; /*0x6215e5*/
      if ( v11 ) /*0x6215eb*/
      {
        while ( (HWND)*v11 != v24 ) /*0x6215ef*/
        {
          v11 = (_DWORD *)v11[129]; /*0x6215f1*/
          if ( !v11 ) /*0x6215f9*/
            goto LABEL_17; /*0x6215f9*/
        }
        v5 = v11 + 1; /*0x621601*/
      }
    }
LABEL_17:
    int v12 = v5[4]; /*0x621604*/
    if ( v12 ) /*0x621609*/
    {
      ScreenDialogToClient(Parent, &v36); /*0x621611*/
      left = v28.left - v36.left; /*0x621628*/
      top = v28.top - v36.top; /*0x621636*/
      v34 = v28.bottom - v28.top + 1; /*0x62164c*/
      v33 = v28.right - v28.left + 1; /*0x621655*/
      (*(void (__thiscall **)(_DWORD *, _DWORD *, int, LONG *, _DWORD, int))(*v7 + 8))(v7, v29, v12, &left, 0, 1); /*0x62165d*/
    }
    else
    {
      left = v28.left; /*0x621670*/
      top = v28.top; /*0x62167d*/
      v33 = v28.right - v28.left + 1; /*0x621682*/
      v34 = v28.bottom - v28.top + 1; /*0x621688*/
      if ( g_DSurface_Primary ) /*0x62168c*/
        (*(void (__thiscall **)(_DWORD *, _DWORD *, int, LONG *, _DWORD, int))(*v7 + 8))( /*0x6216a1*/
          v7,
          v29,
          g_DSurface_Primary,
          &left,
          0,
          1);
    }
    v13 = (__int16 *)(*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*v7 + 92))(v7, 0, 0); /*0x6216b1*/
    if ( v13 ) /*0x6216b5*/
    {
      int v14 = 0; /*0x6216bf*/
      int v15 = (*(int (__thiscall **)(_DWORD *))(*v7 + 128))(v7); /*0x6216cb*/
      if ( (*(int (__thiscall **)(_DWORD *))(*v7 + 124))(v7) * v15 > 0 ) /*0x6216d5*/
      {
        int v16 = a3; /*0x6216e7*/
        int v17 = 255 - a3; /*0x6216ed*/
        int v27 = a3; /*0x6216ef*/
        int v26 = v17; /*0x6216f3*/
        while ( 1 ) /*0x621701*/
        {
          v18 = *v13; /*0x621701*/
          g_GameScreenFlags = v16; /*0x621704*/
          g_GameScreenConfig = v17; /*0x62171d*/
          *v13++ = ((v17 * (unsigned int)(unsigned __int16)(v18 & g_CreditsScreenState)) >> 8) /*0x621763*/
                 | g_ScreenSaverState & ((v17 * (unsigned int)(unsigned __int16)(v18 & g_ScreenSaverState)) >> 8)
                 | HIWORD(g_ScreenSaverState)
                 & ((v17 * (unsigned int)(unsigned __int16)(v18 & HIWORD(g_ScreenSaverState))) >> 8);
          ++v14; /*0x621769*/
          int v19 = (*(int (__thiscall **)(_DWORD *))(*v7 + 128))(v7); /*0x621774*/
          if ( v14 >= (*(int (__thiscall **)(_DWORD *))(*v7 + 124))(v7) * v19 ) /*0x62177e*/
            break; /*0x62177e*/
          v17 = v26; /*0x6216f9*/
          v16 = v27; /*0x6216fd*/
        }
      }
      v3 = v25; /*0x621786*/
      (*(void (__thiscall **)(_DWORD *))(*v7 + 96))(v7); /*0x62178c*/
    }
  }
  int v20 = v3[1]; /*0x621792*/
  int v21 = *v3; /*0x621799*/
  _DWORD v35[4]; // [esp+68h] [ebp-20h] BYREF
  v35[2] = v3[2]; /*0x62179b*/
  v35[3] = v3[3]; /*0x6217a2*/
  v35[1] = v20 - v28.top; /*0x6217ae*/
  v35[0] = v21 - v28.left; /*0x6217c0*/
  return (*(int (__thiscall **)(int, int *, _DWORD *, _DWORD *, _DWORD, int))(*(_DWORD *)DSurface_Alternate + 8))( /*0x6217cc*/
           DSurface_Alternate,
           v3,
           v7,
           v35,
           0,
           1);
}
}
} // namespace gamemd

// 0x6223C0
namespace gamemd {
unsigned int * E4Recv_6223C0::DestroyDialog()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  _DWORD *result; // eax
  void (__thiscall ***v3)(_DWORD, int); // ecx

  result = (_DWORD *)g_DialogHashMap_Count; /*0x6223c1*/
  E4Recv_6223C0 *v4 = this; /*0x6223c9*/
  if ( g_DialogHashMap_Count ) /*0x6223cd*/
  {
    result = (_DWORD *)*((_DWORD *)g_DialogHashMap_Base + (g_DialogHashMap_Buckets(&v4) & ((1 << g_DialogHashMap_Buckets) - 1))); /*0x6223ee*/
    if ( result ) /*0x6223f3*/
    {
      while ( (void *)*result != v4 ) /*0x6223fb*/
      {
        result = (_DWORD *)result[129]; /*0x6223fd*/
        if ( !result ) /*0x622405*/
          return result; /*0x622405*/
      }
      _DWORD * v2 = result + 1; /*0x62240e*/
      if ( result != (_DWORD *)-4 ) /*0x622413*/
      {
        v3 = (void (__thiscall ***)(_DWORD, int))result[5]; /*0x622415*/
        if ( v3 ) /*0x62241a*/
        {
          (**v3)(v3, 1); /*0x622420*/
          v2[4] = 0; /*0x622422*/
          return (_DWORD *)--g_GameScreenState; /*0x62242e*/
        }
      }
    }
  }
  return result; /*0x622407*/
}
}
} // namespace gamemd

// 0x622470
namespace gamemd {
void AddDynamicVector(HWND a1, int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  LPARAM v16; // [esp+14h] [ebp+8h]
  LPARAM v17; // [esp+14h] [ebp+8h]
  if ( !a2 ) /*0x62247a*/
    return 1; /*0x6225d1*/
  int v3 = *a2; /*0x622484*/
  int v15 = *a2; /*0x62248a*/
  if ( *a2 >= a2[1] ) /*0x62248e*/
  {
    int v4 = 2 * v3; /*0x622490*/
    v16 = 2 * v3; /*0x622497*/
    if ( 2 * v3 < 10 ) /*0x62249b*/
    {
      v16 = 10; /*0x62249d*/
      v4 = 10; /*0x6224a5*/
    }
    unsigned int v5 = 4 * v4; /*0x6224a9*/
    void * v6 = __2_YAPAXI_Z(4 * v4); /*0x6224b8*/
    memset(v6, 0, v5); /*0x6224c6*/
    int v14 = (int)v6; /*0x6224ca*/
    const void * v7 = (const void *)a2[2]; /*0x6224d3*/
    if ( v7 ) /*0x6224d8*/
      qmemcpy(v6, v7, 4 * *a2); /*0x6224e6*/
    __3_YAXPAX_Z((void *)a2[2]); /*0x6224f3*/
    a2[2] = v14; /*0x622503*/
    a2[1] = v16; /*0x622506*/
  }
  if ( *a2 >= a2[1] ) /*0x622510*/
  {
    int v8 = 2 * *a2; /*0x622512*/
    v17 = v8; /*0x622517*/
    if ( v8 < 10 ) /*0x62251b*/
    {
      v17 = 10; /*0x62251d*/
      v8 = 10; /*0x622525*/
    }
    unsigned int v9 = 4 * v8; /*0x622529*/
    void * v10 = __2_YAPAXI_Z(4 * v8); /*0x622538*/
    memset(v10, 0, v9); /*0x622546*/
    const void * v11 = (const void *)a2[2]; /*0x62254f*/
    if ( v11 ) /*0x622554*/
      qmemcpy(v10, v11, 4 * *a2); /*0x622562*/
    __3_YAXPAX_Z((void *)a2[2]); /*0x62256f*/
    a2[2] = (int)v10; /*0x622578*/
    v3 = v15; /*0x62257b*/
    a2[1] = v17; /*0x622582*/
  }
  if ( v3 < *a2 ) /*0x622589*/
    memcpy((void *)(a2[2] + 4 * v3 + 4), (const void *)(a2[2] + 4 * v3), 4 * (*a2 + 0x3FFFFFFF * v3)); /*0x6225a4*/
  _DWORD * v12 = (_DWORD *)(a2[2] + 4 * v3); /*0x6225af*/
  if ( v12 ) /*0x6225b4*/
    *v12 = a1; /*0x6225ba*/
  ++*a2; /*0x6225c2*/
  return 1; /*0x6225ca*/
}
}
} // namespace gamemd

// 0x622650
namespace gamemd {
void sub_622650(unsigned short a1, INT_PTR (__stdcall *a2)(HWND, UINT, WPARAM, LPARAM) a2, LPARAM a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax
  HWND *v6; // edi
  HINSTANCE v8; // eax
  HWND DialogIndirectParamA; // eax
  HWND v10; // esi
  const DLGTEMPLATE *v11; // [esp-10h] [ebp-2Ch]
  HWND v12; // [esp-Ch] [ebp-28h]
  LPARAM dwInitParam[2]; // [esp+14h] [ebp-8h] BYREF

  int v4 = a1; /*0x62265e*/
  result = FindResource(a1, 5); /*0x62266c*/
  if ( result ) /*0x622673*/
  {
    v6 = (HWND *)(8 * g_DialogTrackingList + 12004648); /*0x622690*/
    int * v7 = (int *)(8 * g_DialogTrackingList + 12004652); /*0x622697*/
    LOWORD(dwInitParam[0]) = a1; /*0x62269f*/
    ++g_DialogTrackingList; /*0x6226a4*/
    dwInitParam[1] = a3; /*0x6226ae*/
    v12 = g_hWnd; /*0x6226b7*/
    v11 = (const DLGTEMPLATE *)result; /*0x6226b8*/
    v8 = g_hInstance; /*0x6226b9*/
    *v6 = 0; /*0x6226be*/
    *v7 = 0; /*0x6226c5*/
    DialogIndirectParamA = CreateDialogIndirectParamA(v8, v11, v12, a2, (LPARAM)dwInitParam); /*0x6226cb*/
    v10 = DialogIndirectParamA; /*0x6226d1*/
    if ( DialogIndirectParamA ) /*0x6226d5*/
    {
      *v6 = DialogIndirectParamA; /*0x6226ee*/
      *v7 = v4; /*0x6226f2*/
      DialogQueue::PushEntry(DialogIndirectParamA); /*0x6226f4*/
      dword_B72F44 = v10; /*0x6226f9*/
      dword_B72F48 = v4; /*0x622702*/
      return (int)v10; /*0x6226ff*/
    }
    else
    {
      --g_DialogTrackingList; /*0x6226df*/
      return 0; /*0x6226e5*/
    }
  }
  return result; /*0x622675*/
}
}
} // namespace gamemd

// 0x622820
namespace gamemd {
void SetupDialog(CoordStruct * hWnd, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  LPARAM lParam[2]; // [esp+14h] [ebp-8h] BYREF

  DialogClass::RegisterWinClasses(); /*0x62282b*/
  *(&g_MatrixTransformState + 5798) = hWnd; /*0x622836*/
  EnumChildWindows((HWND)hWnd, (WNDENUMPROC)Dialog::InitWindow, 1); /*0x622844*/
  Dialog::InitWindow((SkirmishDialog *)hWnd, 1); /*0x622849*/
  EnumChildWindows((HWND)hWnd, Dialog::SubclassEditControl, 1); /*0x622856*/
  EnumChildWindows((HWND)hWnd, Dialog::InitializeControls, 0); /*0x622861*/
  Dialog::InitializeControls((HWND)hWnd, 0); /*0x622865*/
  EnumChildWindows((HWND)hWnd, (WNDENUMPROC)Dialog::InitWindow, 0); /*0x622871*/
  Dialog::InitWindow((SkirmishDialog *)hWnd, 0); /*0x622875*/
  Dialog::GetField((HWND)hWnd); /*0x62287c*/
  lParam[0] = (LPARAM)hWnd; /*0x622890*/
  int v14 = 0; /*0x622894*/
  HashTable::Get(&g_MatrixTransformState + 2876, (IUnknown *)lParam, (IUnknown *)&v14); /*0x622898*/
  if ( v14 ) /*0x6228a3*/
    *(_DWORD *)(v14 + 108) = a2; /*0x6228a5*/
  if ( !SessionClass::GetGameSpeed(&HouseClass_Player[29932]) ) /*0x6228ad*/
    Control::CreateControlDialog(hWnd); /*0x6228b8*/
  lParam[0] = (LPARAM)hWnd; /*0x6228cc*/
  v14 = 0; /*0x6228d0*/
  HashTable::Get(&g_MatrixTransformState + 2876, (IUnknown *)lParam, (IUnknown *)&v14); /*0x6228d4*/
  if ( v14 ) /*0x6228df*/
  {
    int v4 = *(_DWORD *)(v14 + 108); /*0x6228e1*/
  bool v5; // al
    v5 = v4 == 188 /*0x622925*/
      || v4 == 189
      || v4 == 258
      || v4 == 194
      || v4 == 201
      || v4 == 3014
      || v4 == 261
      || v4 == 107
      || v4 == 275;
    *(_BYTE *)(v14 + 213) = v5; /*0x62292a*/
  }
  lParam[0] = (LPARAM)hWnd; /*0x62293f*/
  v14 = 0; /*0x622943*/
  HashTable::Get(&g_MatrixTransformState + 2876, (IUnknown *)lParam, (IUnknown *)&v14); /*0x622947*/
  if ( v14 ) /*0x622952*/
  {
    int v6 = *(_DWORD *)(v14 + 108); /*0x622954*/
    bool v7 = v6 == 188 || v6 == 189 || v6 == 258 || v6 == 194 || v6 == 201 || v6 == 3014; /*0x622985*/
    *(_BYTE *)(v14 + 214) = v7; /*0x62298a*/
  }
  lParam[0] = (LPARAM)hWnd; /*0x62299f*/
  v14 = 0; /*0x6229a3*/
  HashTable::Get(&g_MatrixTransformState + 2876, (IUnknown *)lParam, (IUnknown *)&v14); /*0x6229a7*/
  if ( v14 ) /*0x6229b2*/
  {
    int v8 = *(_DWORD *)(v14 + 108); /*0x6229b4*/
    bool v9 = v8 == 259 || v8 == 3015; /*0x6229c9*/
    *(_BYTE *)(v14 + 215) = v9; /*0x6229ce*/
  }
  lParam[0] = (LPARAM)hWnd; /*0x6229e3*/
  v14 = 0; /*0x6229e7*/
  HashTable::Get(&g_MatrixTransformState + 2876, (IUnknown *)lParam, (IUnknown *)&v14); /*0x6229eb*/
  if ( v14 ) /*0x6229f6*/
  {
    int v10 = *(_DWORD *)(v14 + 108); /*0x6229f8*/
    bool v11 = v10 == 264 || v10 == 3014; /*0x622a0d*/
    *(_BYTE *)(v14 + 216) = v11; /*0x622a12*/
  }
  EnumChildWindows((HWND)hWnd, GadgetClass::FindByWindow, 0); /*0x622a1f*/
  if ( Control::CheckControlTypeDialog(hWnd) ) /*0x622a23*/
  {
    lParam[0] = 640; /*0x622a3d*/
    lParam[1] = 480; /*0x622a4d*/
    MoveWindow((HWND)hWnd, 0, 0, *(int *)&stru_89E138[8044], *(int *)&stru_89E138[8048], 0); /*0x622a51*/
    *(&g_MatrixTransformState + 5798) = hWnd; /*0x622a5b*/
    EnumChildWindows((HWND)hWnd, (WNDENUMPROC)RepositionDialogControls, (LPARAM)lParam); /*0x622a68*/
  }
  else
  {
    lParam[0] = (LPARAM)hWnd; /*0x622a7e*/
    v14 = 0; /*0x622a82*/
    HashTable::Get(&g_MatrixTransformState + 2876, (IUnknown *)lParam, (IUnknown *)&v14); /*0x622a86*/
    if ( v14 ) /*0x622a91*/
    {
      int v12 = *(_DWORD *)(v14 + 108); /*0x622a97*/
      if ( v12 == 269 /*0x622b1d*/
        || v12 == 217
        || v12 == 240
        || v12 == 206
        || v12 == 288
        || v12 == 289
        || v12 == 277
        || v12 == 211
        || v12 == 207
        || v12 == 287
        || v12 == 195
        || v12 == 283
        || v12 == 225
        || v12 == 286
        || v12 == 196
        || v12 == 304
        || v12 == 208
        || v12 == 252
        || v12 == 294 )
      {
        *(_DWORD *)(v14 + 176) = 2; /*0x622b1f*/
      }
    }
  }
  EnumChildWindows((HWND)hWnd, Dialog::HandleTabKey, 0); /*0x622b30*/
  EnumChildWindows((HWND)hWnd, Dialog::DispatchEvent, 0); /*0x622b39*/
  return Dialog::RestoreParent((HWND)hWnd); /*0x622b42*/
}
}
} // namespace gamemd

// 0x622B50
namespace gamemd {
void BaseDialogProc(SkirmishDialog * aP0, unsigned int a2, int a3, unsigned int aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int result; // eax
  HWND DlgItem; // eax
  HWND v12; // eax
  HWND v13; // ebx
  LPARAM v14; // ebp
  void (__stdcall *v15)(HWND, UINT, WPARAM, LPARAM); // edi
  LRESULT v16; // eax
  CampaignScore *v17; // eax
  CampaignScore *v18; // eax
  CampaignScore *v20; // eax
  unsigned __int16 v21; // bx
  void (__stdcall *v22)(HWND, WNDENUMPROC, LPARAM); // edi
  wchar_t *StringCSF; // [esp-4h] [ebp-44h]
  wchar_t *v24; // [esp+10h] [ebp-30h] BYREF
  LPARAM lParam; // [esp+14h] [ebp-2Ch] BYREF
  rc_ptr_base *v26; // [esp+18h] [ebp-28h]
  MultiplayerGameMode *v27; // [esp+1Ch] [ebp-24h] BYREF
  SkirmishDialog *v28; // [esp+20h] [ebp-20h] BYREF
  HWND hWnd; // [esp+28h] [ebp-18h] BYREF
  struct tagRECT Rect; // [esp+30h] [ebp-10h] BYREF

  if ( a2 > 0x84 ) /*0x622b5f*/
  {
  int v31; // [esp+2Ch] [ebp-14h]
    if ( a2 > 0x497 ) /*0x622ea0*/
    {
      if ( a2 == 1260 ) /*0x6230be*/
        EnumChildWindows((HWND)aP0, sub_60AA60, 0); /*0x6230c8*/
      return 0; /*0x6230c8*/
    }
    if ( a2 == 1175 ) /*0x622ea6*/
    {
      SendMessageA((HWND)aP0, 0x4A9u, (WPARAM)aP0, 1); /*0x6230a6*/
      return 0; /*0x6230b5*/
    }
    if ( a2 != 272 ) /*0x622eb2*/
    {
      if ( a2 > 0x131 && a2 <= 0x138 ) /*0x622ec6*/
        return (int)GetStockObject(4); /*0x622edb*/
      return 0; /*0x622ec6*/
    }
    ++*(_DWORD *)&HouseClass_Player[45120]; /*0x622eed*/
    if ( aP2 ) /*0x622ef3*/
    {
      v21 = *(_WORD *)aP2; /*0x622efb*/
      DialogClass::RegisterWinClasses(); /*0x622efe*/
      v22 = (void (__stdcall *)(HWND, WNDENUMPROC, LPARAM))EnumChildWindows; /*0x622f03*/
      *(&g_MatrixTransformState + 5798) = (CoordStruct *)aP0; /*0x622f09*/
      EnumChildWindows((HWND)aP0, (WNDENUMPROC)Dialog::InitWindow, 1); /*0x622f17*/
      Dialog::InitWindow(aP0, 1); /*0x622f1c*/
      EnumChildWindows((HWND)aP0, Dialog::SubclassEditControl, 1); /*0x622f29*/
      EnumChildWindows((HWND)aP0, Dialog::InitializeControls, 0); /*0x622f32*/
      Dialog::InitializeControls((HWND)aP0, 0); /*0x622f36*/
      EnumChildWindows((HWND)aP0, (WNDENUMPROC)Dialog::InitWindow, 0); /*0x622f42*/
      Dialog::InitWindow(aP0, 0); /*0x622f46*/
      Dialog::GetField((HWND)aP0); /*0x622f4d*/
      UI_Helper_60D2C0((int)aP0, v21); /*0x622f56*/
      if ( !SessionClass::GetGameSpeed(&HouseClass_Player[29932]) ) /*0x622f60*/
        Control::CreateControlDialog(aP0); /*0x622f6b*/
      UI_Helper_60CAF0(aP0); /*0x622f72*/
      UI_Helper_60C930(aP0); /*0x622f79*/
      UI_Helper_60CCC0(aP0); /*0x622f80*/
      UI_Helper_60CDB0(aP0); /*0x622f87*/
      EnumChildWindows((HWND)aP0, GadgetClass::FindByWindow, 0); /*0x622f93*/
      if ( Control::CheckControlTypeDialog(aP0) ) /*0x622f97*/
      {
        hWnd = (HWND)640; /*0x622fb0*/
        v31 = 480; /*0x622fb4*/
        ResizeDialogAndEnum(aP0); /*0x622fbe*/
LABEL_49:
        v22((HWND)aP0, Dialog::HandleTabKey, 0); /*0x623071*/
        v22((HWND)aP0, Dialog::DispatchEvent, 0); /*0x623081*/
        Dialog::RestoreParent((HWND)aP0); /*0x623085*/
        SetFocus((HWND)aP0); /*0x62308b*/
        return 0; /*0x62309a*/
      }
    }
    else
    {
      InitializeDialogControls((HWND)aP0, 0); /*0x622fcc*/
      Dialog::GetField((HWND)aP0); /*0x622fd3*/
      hWnd = (HWND)aP0; /*0x622fe7*/
      aP2 = 0; /*0x622feb*/
      HashTable::Get(&g_MatrixTransformState + 2876, (IUnknown *)&hWnd, (IUnknown *)&aP2); /*0x622fef*/
      if ( aP2 ) /*0x622ffa*/
        *(_DWORD *)(aP2 + 108) = 0; /*0x622ffc*/
      if ( !SessionClass::GetGameSpeed(&HouseClass_Player[29932]) ) /*0x623004*/
        Control::CreateControlDialog(aP0); /*0x62300f*/
      UI_Helper_60CAF0(aP0); /*0x623016*/
      UI_Helper_60C930(aP0); /*0x62301d*/
      UI_Helper_60CCC0(aP0); /*0x623024*/
      UI_Helper_60CDB0(aP0); /*0x62302b*/
      v22 = (void (__stdcall *)(HWND, WNDENUMPROC, LPARAM))EnumChildWindows; /*0x623030*/
      EnumChildWindows((HWND)aP0, GadgetClass::FindByWindow, 0); /*0x62303d*/
      if ( Control::CheckControlTypeDialog(aP0) ) /*0x623041*/
      {
        hWnd = (HWND)640; /*0x623055*/
        v31 = 480; /*0x62305f*/
        ResizeDialogAndEnum(aP0); /*0x623063*/
        goto LABEL_49; /*0x623068*/
      }
    }
    UI_Helper_60C7D0(aP0); /*0x62306c*/
    goto LABEL_49; /*0x62306c*/
  }
  if ( a2 != 132 ) /*0x622b65*/
  {
    switch ( a2 ) /*0x622b7f*/
    {
      case 2u: /*0x622b7f*/
        DialogQueue::RemoveEntry(aP0); /*0x622b88*/
        --*(_DWORD *)&HouseClass_Player[45120]; /*0x622b9b*/
        SetFocus(g_hWnd); /*0x622ba1*/
        return 0; /*0x622bb0*/
      case 0xFu: /*0x622b7f*/
        aP2 = (unsigned int)aP0; /*0x622bd0*/
        if ( !*(&g_MatrixTransformState + 2877) ) /*0x622bd6*/
          return 0; /*0x622bd6*/
        result = *(&(*(&g_MatrixTransformState + 2876))->X /*0x622bf1*/
                 + HashTable::ComputeHash((int)(&g_MatrixTransformState + 2876), (int)&aP2));
        if ( !result ) /*0x622bf6*/
          return 0; /*0x622bf6*/
        break; /*0x622bf6*/
      case 0x14u: /*0x622b7f*/
        return 1;
      case 0x2Bu: /*0x622b7f*/
        Dialog::Resize((char *)aP2); /*0x622bb7*/
        return 1; /*0x622bc8*/
      default:
        return 0;
    }
    while ( *(_DWORD *)result != aP2 ) /*0x622c02*/
    {
      result = *(_DWORD *)(result + 516); /*0x622c04*/
      if ( !result ) /*0x622c0c*/
        return result; /*0x622c0c*/
    }
    int v6 = result + 4; /*0x622c20*/
    if ( v6 ) /*0x622c25*/
    {
      if ( *(_BYTE *)(v6 + 188) ) /*0x622c2b*/
      {
        ValidateRect((HWND)aP0, 0); /*0x622c38*/
        return 1; /*0x622c3e*/
      }
      else
      {
        Dialog::DrawBackground((HWND)aP0); /*0x622c4f*/
        lParam = (LPARAM)aP0; /*0x622c63*/
        aP2 = 0; /*0x622c67*/
        HashTable::Get(&g_MatrixTransformState + 2876, (IUnknown *)&lParam, (IUnknown *)&aP2); /*0x622c6f*/
        unsigned int v7 = aP2; /*0x622c74*/
        if ( aP2 && *(_BYTE *)(aP2 + 190) ) /*0x622c7c*/
        {
          DlgItem = GetDlgItem((HWND)aP0, 1818); /*0x622c8c*/
          if ( DlgItem ) /*0x622c94*/
            SendMessageA(DlgItem, 0x4E2u, 0, 0); /*0x622ca0*/
          RenderGadgetClassAnimation((HWND)aP0, 0); /*0x622caa*/
          *(_BYTE *)(v7 + 190) = 0; /*0x622caf*/
        }
        ValidateRect((HWND)aP0, 0); /*0x622cb9*/
        return 0; /*0x622cbf*/
      }
    }
    return 0; /*0x6230d1*/
  }
  hWnd = GetDlgItem((HWND)aP0, 1685); /*0x622cd9*/
  if ( !hWnd ) /*0x622cdd*/
    return 0; /*0x622cdd*/
  int v9 = (unsigned __int16)aP2; /*0x622cef*/
  unsigned int v10 = HIWORD(aP2); /*0x622cf5*/
  GetWindowRect((HWND)aP0, &Rect); /*0x622cf8*/
  unsigned int v11 = v9 - Rect.left; /*0x622d0c*/
  v26 = (rc_ptr_base *)(v10 - Rect.top); /*0x622d12*/
  unknown_libname_74(&aP2); /*0x622d16*/
  v12 = ChildWindowFromPointEx((HWND)aP0, (POINT)__PAIR64__((unsigned int)v26, v11), 1u); /*0x622d24*/
  v13 = v12; /*0x622d2a*/
  if ( v12 ) /*0x622d2e*/
  {
    v14 = (unsigned __int16)v9 | ((unsigned __int16)v10 << 16); /*0x622d43*/
    v15 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x622d45*/
    v16 = SendMessageA(v12, 0x4E8u, 0, v14); /*0x622d54*/
    UI_Assign((wchar_t **)&lParam, (HWND)aP0, (LPARAM)v13, v16); /*0x622d5e*/
    WideString::AssignFromPtr((wchar_t **)&v28, (const wchar_t **)&lParam); /*0x622d6c*/
    DeleteAndZero::Alt((void **)&lParam); /*0x622d75*/
    WideString::Reassign_Alt((void **)&aP2, (const wchar_t **)&v28); /*0x622d83*/
    DeleteAndZero::Alt((void **)&v28); /*0x622d8c*/
    v17 = WideString::GetOrEmpty((wchar_t **)&aP2); /*0x622d9a*/
    if ( !wcscmp((const wchar_t *)v17, (const wchar_t *)&stru_87C374[46016]) ) /*0x622da0*/
    {
      unknown_libname_74(&v27); /*0x622db4*/
      lParam = (LPARAM)v13; /*0x622dbd*/
      v26 = (rc_ptr_base *)-1; /*0x622dca*/
      SendMessageA((HWND)aP0, 0x4E9u, 0, (LPARAM)&lParam); /*0x622dd2*/
  void *v29; // [esp+24h] [ebp-1Ch] BYREF
      WideString::AssignFromPtr((wchar_t **)&v29, (const wchar_t **)&v27); /*0x622ddd*/
      DeleteAndZero::Alt((void **)&v27); /*0x622de6*/
      WideString::Reassign_Alt((void **)&aP2, (const wchar_t **)&v29); /*0x622df4*/
      DeleteAndZero::Alt(&v29); /*0x622dfd*/
      v18 = WideString::GetOrEmpty((wchar_t **)&aP2); /*0x622e0b*/
      if ( !wcscmp((const wchar_t *)v18, (const wchar_t *)&stru_87C374[46016]) ) /*0x622e11*/
      {
        char * v19 = DlgSkirmishMenuProc((HWND)aP0, v13); /*0x622e21*/
        if ( v19 ) /*0x622e28*/
        {
          StringCSF = GetStringCSF((wchar_t *)v19, 0, &stru_830620[12560], 1957); /*0x622e3d*/
          WideString::Assign(&v24, (CampaignScore *)StringCSF); /*0x622e3e*/
        }
        else
        {
          WideString::Assign(&v24, (CampaignScore *)&stru_87C374[46016]); /*0x622e49*/
        }
        WideString::Reassign_Alt((void **)&aP2, (const wchar_t **)&v24); /*0x622e57*/
        DeleteAndZero::Alt((void **)&v24); /*0x622e60*/
      }
    }
  }
  else
  {
    v15 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x622e67*/
  }
  v20 = WideString::GetOrEmpty_Alt((wchar_t **)&aP2); /*0x622e71*/
  v15(hWnd, 0x4B2u, 0, (LPARAM)v20); /*0x622e83*/
  DeleteAndZero::Alt((void **)&aP2); /*0x622e89*/
  return 0; /*0x622ba9*/
}
}
} // namespace gamemd

// 0x623230
namespace gamemd {
void* CreateMessageBox(LPARAM lParam, LPARAM a2, LONG dwNewLong)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  HWND Dialog; // esi
  HWND DlgItem; // eax
  HWND v7; // edi

  Dialog = (HWND)CreateDialog(0xF0u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))sub_6232B0, 0); /*0x623249*/
  if ( Dialog ) /*0x62324d*/
  {
    SetWindowLongA(Dialog, 8, dwNewLong); /*0x623257*/
    DlgItem = GetDlgItem(Dialog, 1456); /*0x623269*/
    SendMessageA(DlgItem, 0x4B2u, 0, lParam); /*0x62327a*/
    if ( a2 ) /*0x62327e*/
    {
      v7 = GetDlgItem(Dialog, 1472); /*0x623288*/
      SendMessageA(v7, 0x4B2u, 0, a2); /*0x623293*/
      EnableWindow(v7, 1); /*0x623298*/
      ShowWindow(v7, 5); /*0x6232a1*/
    }
  }
  return Dialog; /*0x6232a9*/
}
}
} // namespace gamemd

// 0x623730
namespace gamemd {
unsigned int * E4Recv_623730::sub_623730(unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  const wchar_t *v6; // esi
  size_t v7; // eax
  wchar_t *v8; // eax
  int **i; // esi
  size_t v13; // eax
  int v3 = *(this + 13); /*0x623741*/
  void * v4 = (void *)*(this + 10); /*0x623744*/
  int v5 = *(this + 15); /*0x623747*/
  qmemcpy(this, a2, 0x200u); /*0x62374a*/
  *(this + 15) = v5; /*0x623750*/
  *(this + 10) = v4; /*0x623755*/
  *(this + 13) = v3; /*0x623758*/
  v6 = (const wchar_t *)a2[10]; /*0x62375b*/
  if ( v4 ) /*0x623760*/
  {
    __3_YAXPAX_Z(v4); /*0x623763*/
    *(this + 10) = 0; /*0x62376b*/
  }
  if ( v6 && *v6 ) /*0x623772*/
  {
    v7 = wcslen(v6); /*0x623778*/
    v8 = (wchar_t *)__2_YAPAXI_Z(2 * v7 + 2); /*0x623782*/
    *(this + 10) = v8; /*0x623789*/
    wcscpy(v8, v6); /*0x62378c*/
  }
  _DWORD * v9 = (_DWORD *)*(this + 13); /*0x623794*/
  for ( i = (int **)a2[13]; v9; v9 = (_DWORD *)*(this + 13) ) /*0x62379c*/
  {
    _DWORD * v11 = v9; /*0x62379e*/
    _DWORD * v12 = 0; /*0x6237a0*/
    while ( v9 != v11 ) /*0x6237a8*/
    {
      v12 = v11; /*0x6237aa*/
      v11 = (_DWORD *)*v11; /*0x6237ac*/
      if ( !v11 ) /*0x6237b0*/
        goto LABEL_15; /*0x6237b0*/
    }
    if ( v12 ) /*0x6237ba*/
      *v12 = *v11; /*0x6237be*/
    else
      *(this + 13) = *v11; /*0x6237c4*/
    __3_YAXPAX_Z(v11); /*0x6237c8*/
LABEL_15:
    ; /*0x6237d0*/
  }
  for ( ; i; i = (int **)*i ) /*0x6237d9*/
  {
    v13 = wcslen((const wchar_t *)i[2]); /*0x6237df*/
    char * v14 = (char *)__2_YAPAXI_Z(2 * v13 + 18); /*0x6237e9*/
    if ( v14 ) /*0x6237f3*/
    {
      *((_DWORD *)v14 + 2) = v14 + 16; /*0x6237f8*/
      *(_DWORD *)v14 = *(this + 13); /*0x6237fe*/
      *((_DWORD *)v14 + 1) = 0; /*0x623800*/
      *(this + 13) = v14; /*0x623803*/
    }
    *((_DWORD *)v14 + 3) = i[3]; /*0x623809*/
    *((_DWORD *)v14 + 1) = i[1]; /*0x62380f*/
    wcscpy(*((wchar_t **)v14 + 2), (const wchar_t *)i[2]); /*0x62381a*/
  }
  return this; /*0x623828*/
}
}
} // namespace gamemd

// 0x623880
namespace gamemd {
void DrawTextRendererMultiline(IUnknown * aP0, int * a1, wchar_t * String, ObjectClass * aP3, unsigned int * a4, int ecx0, signed int * a6, int a8, int a9, int a10, int a11)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  wchar_t *v11; // edi
  wchar_t *v17; // edi
  int i; // ecx
  int v19; // eax
  int v22; // eax
  int v23; // edi
  int v24; // ecx
  int v26; // edx
  CampaignScore *v27; // edi
  int *v33; // ebp
  char result; // al
  int v46; // edi
  int v49; // [esp+10h] [ebp-1030h]
  int v50; // [esp+14h] [ebp-102Ch]
  int v51; // [esp+14h] [ebp-102Ch]
  int v52; // [esp+18h] [ebp-1028h] BYREF
  int v54; // [esp+20h] [ebp-1020h] BYREF
  ObjectClass *v55; // [esp+24h] [ebp-101Ch]
  char *v56; // [esp+28h] [ebp-1018h]
  int *a7; // [esp+2Ch] [ebp-1014h]
  wchar_t Destination[2048]; // [esp+40h] [ebp-1000h] BYREF

  a7 = &aP0->field_0; /*0x62388a*/
  v54 = -1; /*0x62388e*/
  v11 = String; /*0x62389a*/
  int v12 = 0; /*0x6238a1*/
  v49 = 0; /*0x6238a7*/
  v52 = 0; /*0x6238ab*/
  if ( !String ) /*0x6238af*/
    v11 = (wchar_t *)&stru_87C374[46016]; /*0x6238b1*/
  signed int v14 = wcslen(v11); /*0x6238b7*/
  int v15 = (int)aP3; /*0x6238bc*/
  if ( (int)aP3 < 0 || (int)aP3 > v14 ) /*0x6238cc*/
    v15 = 0; /*0x6238ce*/
  if ( a8 ) /*0x6238d9*/
  {
    ProcessCompositionIME(); /*0x6238db*/
    v49 = dword_B73564; /*0x6238eb*/
    v52 = dword_B7356C; /*0x6238ef*/
    v12 = dword_B73564; /*0x6238f3*/
  }
  Destination[0] = 0; /*0x623900*/
  wcsncpy(Destination, v11, (DropListClass *)0x800); /*0x623907*/
  if ( v12 ) /*0x623911*/
  {
    wcsncpy(&Destination[v15], WideCharStr, (DropListClass *)(2048 - v15)); /*0x623925*/
    wcsncpy(&Destination[v12 + v15], &v11[v15], (DropListClass *)(2048 - v12 - v15)); /*0x623940*/
  }
  Destination[2047] = 0; /*0x62394c*/
  signed int v16 = wcslen(Destination); /*0x62395c*/
  v50 = v16; /*0x623968*/
  if ( a9 && v16 > 0 ) /*0x623972*/
  {
    memset32(Destination, 2752554, (unsigned int)v16 >> 1); /*0x623981*/
    v17 = &Destination[2 * ((unsigned int)v16 >> 1)]; /*0x623981*/
    for ( i = v16 & 1; i; --i ) /*0x623983*/
      *v17++ = 42; /*0x623985*/
  }
  if ( v52 || v12 ) /*0x623992*/
  {
    v56 = (char *)(v15 + MaxCount); /*0x6239a4*/
    v19 = v15 + MaxCount; /*0x6239a8*/
  }
  else
  {
    v19 = v15; /*0x623994*/
    v56 = (char *)v15; /*0x623996*/
  }
  if ( v19 < *a6 + 5 ) /*0x6239b8*/
  {
    if ( v19 < 5 ) /*0x6239bd*/
      *a6 = 0; /*0x6239c6*/
    else
      *a6 = v19 - 5; /*0x6239c2*/
  }
  if ( *a6 < v16 ) /*0x6239ce*/
  {
  signed int v21; // edi
    do /*0x623a03*/
    {
      signed int v20 = *a6; /*0x6239d0*/
      if ( MessageListClass::CountCharsInWidth(a4, &Destination[*a6], a1[2] - 5, 0, 0) >= (int)&v56[-v20] ) /*0x6239f8*/
        break; /*0x6239f8*/
      v21 = v20 + 1; /*0x6239fe*/
      *a6 = v21; /*0x623a01*/
    }
    while ( v21 < v50 ); /*0x623a03*/
    v16 = v50; /*0x623a05*/
  }
  v22 = v15 - *a6; /*0x623a0d*/
  v23 = v49; /*0x623a0f*/
  v51 = v22 < 0 ? 0 : v22;
  v24 = v49; /*0x623a22*/
  if ( v22 < 0 )
  {
    bool v25 = v49 + v22 < 0; /*0x623a2c*/
    v22 += v49; /*0x623a2c*/
    v24 = v25 ? 0 : v22;
    v49 = v24; /*0x623a39*/
  }
  v26 = v16 - v23 - v15; /*0x623a3f*/
  v52 = v26; /*0x623a43*/
  if ( v22 < 0 ) /*0x623a47*/
  {
    v26 += v22; /*0x623a49*/
    v52 = v26; /*0x623a4b*/
  }
  if ( v26 < 0 ) /*0x623a51*/
    v52 = 0; /*0x623a53*/
  v27 = (CampaignScore *)&Destination[*a6]; /*0x623a5d*/
  if ( a10 ) /*0x623a6a*/
  {
    int v28 = a1[3] + 2; /*0x623a79*/
    int v29 = Text::MeasureWidth(v27, 0); /*0x623a7c*/
    int v30 = *a1 - 1; /*0x623a89*/
    int v31 = a1[1] - 1; /*0x623a8a*/
  _DWORD v58[4]; // [esp+30h] [ebp-1010h] BYREF
    v58[2] = v29 + 5; /*0x623a8b*/
    v58[1] = v31; /*0x623a8f*/
    v58[0] = v30; /*0x623a97*/
    int v32 = *a7; /*0x623a9f*/
    v58[3] = v28; /*0x623aa4*/
    (*(void (__thiscall **)(int *, _DWORD *, _DWORD))(v32 + 20))(a7, v58, 0); /*0x623aa8*/
    v24 = v49; /*0x623aab*/
  }
  if ( v51 ) /*0x623ab5*/
  {
    v33 = a7; /*0x623abe*/
    int v34 = DrawTextRendererTextAligned(ecx0, a4, (ObjectClass *)a1, (unsigned __int16 *)v27, v51, 0, 0, a7, a11); /*0x623ad9*/
    int v35 = a1[2] - v34; /*0x623ae5*/
    *a1 += v34; /*0x623ae7*/
    a1[2] = v35; /*0x623ae9*/
    if ( v35 < 0 ) /*0x623aec*/
      a1[2] = 0; /*0x623aee*/
    v24 = v49; /*0x623af9*/
    v27 = (CampaignScore *)((char *)v27 + 2 * v51); /*0x623afd*/
  }
  else
  {
    v33 = a7; /*0x623b02*/
  }
  if ( v24 ) /*0x623b08*/
  {
  int v38; // ebx
    int v36 = v51 + *a6; /*0x623b14*/
    int v37 = (int)&v56[-v36]; /*0x623b1a*/
    if ( (int)&v56[-v36] < 0 || v37 > v24 ) /*0x623b20*/
    {
      v38 = -1; /*0x623b2e*/
    }
    else
    {
      v38 = v24 - v37; /*0x623b24*/
      v24 = (int)&v56[-v36]; /*0x623b26*/
      v49 = (int)&v56[-v36]; /*0x623b28*/
    }
    if ( v24 > 0 ) /*0x623b33*/
    {
  int v39; // eax
      v39 = DrawTextRendererTextAligned( /*0x623b52*/
              (int)*(&g_MatrixTransformState + 5634),
              a4,
              (ObjectClass *)a1,
              (unsigned __int16 *)v27,
              v24,
              0,
              0,
              v33,
              a11);
      int v40 = a1[2] - v39; /*0x623b5e*/
      *a1 += v39; /*0x623b60*/
      a1[2] = v40; /*0x623b62*/
      if ( v40 < 0 ) /*0x623b65*/
        a1[2] = 0; /*0x623b67*/
      v27 = (CampaignScore *)((char *)v27 + 2 * v49); /*0x623b72*/
    }
    if ( v38 >= 0 ) /*0x623b77*/
    {
      v54 = *a1; /*0x623b7b*/
      if ( v38 ) /*0x623b7f*/
      {
  int v41; // eax
        v41 = DrawTextRendererTextAligned( /*0x623b9e*/
                (int)*(&g_MatrixTransformState + 5634),
                a4,
                (ObjectClass *)a1,
                (unsigned __int16 *)v27,
                v38,
                0,
                0,
                v33,
                a11);
        int v42 = a1[2] - v41; /*0x623baa*/
        *a1 += v41; /*0x623bac*/
        a1[2] = v42; /*0x623bae*/
        if ( v42 < 0 ) /*0x623bb1*/
          a1[2] = 0; /*0x623bb3*/
        v27 = (CampaignScore *)((char *)v27 + 2 * v38); /*0x623bba*/
      }
    }
  }
  else
  {
    v54 = *a1; /*0x623bc1*/
  }
  if ( v52 ) /*0x623bcb*/
  {
    int v43 = DrawTextRendererTextAligned(ecx0, a4, (ObjectClass *)a1, (unsigned __int16 *)v27, v52, 0, 0, v33, a11); /*0x623beb*/
    int v44 = a1[2] - v43; /*0x623bf7*/
    *a1 += v43; /*0x623bf9*/
    a1[2] = v44; /*0x623bfb*/
    if ( v44 < 0 ) /*0x623bfe*/
      a1[2] = 0; /*0x623c00*/
  }
  result = 0; /*0x623c0e*/
  if ( !a8 || (v46 = v54, v54 <= 0) || *(&g_MatrixTransformState + 5806) ) /*0x623c2a*/
  {
    *(&g_MatrixTransformState + 5806) = 0; /*0x623cb7*/
  }
  else
  {
    int v47 = a1[3]; /*0x623c33*/
    int v53 = a1[1]; /*0x623c36*/
    v55 = (ObjectClass *)(v53 + v47 - 2); /*0x623c4d*/
    v52 = v54; /*0x623c5c*/
    DrawSurfaceLineAlpha((int)v33, &v52, &v54, *((__int16 *)&g_MatrixTransformState + 5406), 0xFFu); /*0x623c60*/
    int v48 = a1[3]; /*0x623c68*/
    v53 = a1[1]; /*0x623c6e*/
    v54 = v46 + 1; /*0x623c72*/
    v52 = v46 + 1; /*0x623c76*/
    v55 = (ObjectClass *)(v53 + v48 - 2); /*0x623c8d*/
    result = DrawSurfaceLineAlpha((int)v33, &v52, &v54, *((__int16 *)&g_MatrixTransformState + 5406), 0xFFu); /*0x623c98*/
    *(&g_MatrixTransformState + 5806) = 0; /*0x623c9d*/
  }
  return result; /*0x623ca7*/
}
}
} // namespace gamemd

// 0x623E40
namespace gamemd {
void * GetDialogText(HWND hWnd, void ** a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  LRESULT v4; // edi
  CCINIClass *v6; // esi
  AbstractClass *v7; // edi
  v4 = SendMessageA(hWnd, 0xEu, 0, 0); /*0x623e54*/
  if ( v4 > 0 ) /*0x623e58*/
  {
    v6 = (CCINIClass *)__2_YAPAXI_Z(v4 + 2); /*0x623e74*/
    v7 = (AbstractClass *)SendMessageA(hWnd, 0x4B5u, v4 + 1, (LPARAM)v6); /*0x623e87*/
    String::Assign_Alt(a2, v6); /*0x623e8a*/
    __3_YAXPAX_Z(v6); /*0x623e90*/
    return v7; /*0x623e98*/
  }
  else
  {
    DeleteAndZero::Alt2(a2); /*0x623e5c*/
    return 0; /*0x623e61*/
  }
}
}
} // namespace gamemd

// 0x6241F0
namespace gamemd {
void Dialog_Run(unsigned short a1, INT_PTR (__stdcall *a2)(HWND, UINT, WPARAM, LPARAM) a2, LPARAM a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  HWND v3; // eax
  HWND v4; // edi

  v3 = (HWND)CreateDialog(a1, a2, a3); /*0x6241f7*/
  v4 = v3; /*0x6241fc*/
  if ( v3 ) /*0x624200*/
  {
    ShowWindow(v3, 1); /*0x624215*/
    SetForegroundWindow(v4); /*0x62421c*/
    Timer::PumpMessages((HWND *)g_BinkMoviePlayer); /*0x624228*/
    if ( !(*(unsigned __int8 (__thiscall **)(LPARAM))(*(_DWORD *)a3 + 8))(a3) ) /*0x624231*/
    {
      while ( !(*(unsigned __int8 (__thiscall **)(LPARAM))(*(_DWORD *)a3 + 16))(a3) ) /*0x624241*/
      {
        MessageLoop(); /*0x624243*/
        if ( !g_GameMode_Current || g_GameMode_Current == 5 || g_NetworkQuitFlag || g_GameFlags_Campaign ) /*0x624266*/
        {
          Event::Dispatch(); /*0x62427c*/
        }
        else if ( !(unsigned __int8)VtableStub::Method_55CBF0() && GameFrameLoop() ) /*0x624271*/
        {
          break; /*0x624278*/
        }
  int v6; // ecx
        LOBYTE(v6) = 0; /*0x624281*/
        ScreenSaver::Process(v6); /*0x624283*/
        if ( (*(unsigned __int8 (__thiscall **)(LPARAM))(*(_DWORD *)a3 + 8))(a3) ) /*0x62428c*/
          break; /*0x624291*/
      }
    }
    Dialog::Destroy(v4); /*0x624293*/
    return (*(int (__thiscall **)(LPARAM))(*(_DWORD *)a3 + 12))(a3); /*0x62429e*/
  }
  else
  {
    (*(void (__thiscall **)(LPARAM, _DWORD, _DWORD))(*(_DWORD *)a3 + 4))(a3, 0, 0); /*0x624208*/
    return 0; /*0x62420b*/
  }
}
}
} // namespace gamemd

// 0x6242B0
namespace gamemd {
int E4Recv_6242B0::sub_6242B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  E4Recv_6242B0 *v3; // edi
  HWND hWnda; // [esp+Ch] [ebp-84h] BYREF
  CHAR ClassName[128]; // [esp+10h] [ebp-80h] BYREF

  hWnda = this; /*0x6242c4*/
  GetClassNameA(this, ClassName, 128); /*0x6242c8*/
  if ( !strcmp(ClassName, g_INI_Key_Edit) ) /*0x6242df*/
    return 1; /*0x62430a*/
  if ( !strcmp(ClassName, g_INI_Key_NewEdit) ) /*0x624325*/
    return 1; /*0x624350*/
  if ( !strcmp(ClassName, g_INI_Key_ListBox) /*0x6243c1*/
    && g_DialogHashMap_Count
  int v2; // eax
    && (v2 = *((_DWORD *)g_DialogHashMap_Base + (g_DialogHashMap_Buckets(&hWnda) & ((1 << g_DialogHashMap_Buckets) - 1)))) != 0 )
  {
    v3 = hWnda; /*0x6243c3*/
    while ( *(HWND *)v2 != hWnda ) /*0x6243c9*/
    {
      v2 = *(_DWORD *)(v2 + 516); /*0x6243cb*/
      if ( !v2 ) /*0x6243d3*/
        return !strcmp(ClassName, g_INI_Key_ComboBox) && (GetWindowLongA(v3, -16) & 3) != 3; /*0x6243d3*/
    }
    return *(_DWORD *)(v2 + 108) == 1; /*0x6243e8*/
  }
  else
  {
    v3 = hWnda; /*0x6243f2*/
    return !strcmp(ClassName, g_INI_Key_ComboBox) && (GetWindowLongA(v3, -16) & 3) != 3; /*0x624445*/
  }
}
}
} // namespace gamemd

// 0x627020
namespace gamemd {
unsigned int * sub_627020()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  _DWORD *result; // eax

  result = g_FileExtensionState; /*0x627020*/
  if ( !g_FileExtensionState ) /*0x62702e*/
  {
    result = __2_YAPAXI_Z(0x10u); /*0x627036*/
    _DWORD * v1 = result; /*0x62703b*/
    _DWORD * v12 = result; /*0x627042*/
    if ( !result ) /*0x627046*/
    {
      g_FileExtensionState = 0; /*0x62715e*/
      return result; /*0x62715e*/
    }
    *result = -1; /*0x62704e*/
    _DWORD * v2 = __2_YAPAXI_Z(0x18u); /*0x627054*/
    if ( v2 ) /*0x62705e*/
    {
      v2[1] = 0; /*0x627060*/
      v2[2] = 0; /*0x627063*/
      *((_BYTE *)v2 + 12) = 1; /*0x627066*/
      *((_BYTE *)v2 + 13) = 0; /*0x62706a*/
      *v2 = &vt_DynamicVectorClass_char; /*0x62706d*/
      v2[5] = 10; /*0x627073*/
      v2[4] = 0; /*0x62707a*/
    }
    else
    {
      v2 = 0; /*0x62707f*/
    }
    v1[1] = v2; /*0x627083*/
    _DWORD * v3 = __2_YAPAXI_Z(0x18u); /*0x627086*/
    if ( v3 ) /*0x627090*/
    {
      v3[1] = 0; /*0x627092*/
      v3[2] = 0; /*0x627095*/
      *((_BYTE *)v3 + 12) = 1; /*0x627098*/
      *((_BYTE *)v3 + 13) = 0; /*0x62709c*/
      *v3 = &vt_DynamicVectorClass_HSVClass; /*0x62709f*/
      v3[5] = 10; /*0x6270a5*/
      v3[4] = 0; /*0x6270ac*/
    }
    else
    {
      v3 = 0; /*0x6270b1*/
    }
    v1[2] = v3; /*0x6270b6*/
    result = __2_YAPAXI_Z(0x10u); /*0x6270b9*/
    _DWORD * v4 = result; /*0x6270be*/
    if ( result ) /*0x6270c5*/
    {
  _DWORD *v8; // eax
      int v5 = 31; /*0x6270cc*/
      result[1] = HashStringMod31; /*0x6270d6*/
      result[2] = 31; /*0x6270dd*/
      result[3] = 10; /*0x6270e0*/
      _DWORD * v6 = __2_YAPAXI_Z(0x2ECu); /*0x6270e7*/
      if ( v6 ) /*0x6270f1*/
      {
        *v6 = 31; /*0x6270f3*/
        _DWORD * v11 = v6 + 1; /*0x6270f8*/
        _DWORD * v7 = v6 + 1; /*0x6270fc*/
        do /*0x62710b*/
        {
          sub_628B00(v7, 0, 0); /*0x627102*/
          v7 += 6; /*0x627107*/
          --v5; /*0x62710a*/
        }
        while ( v5 ); /*0x62710b*/
        v8 = v11; /*0x62710d*/
        v1 = v12; /*0x627111*/
      }
      else
      {
        v8 = 0; /*0x627117*/
      }
      int v9 = v4[2]; /*0x627119*/
      *v4 = v8; /*0x62711c*/
      result = 0; /*0x62711e*/
      if ( v9 > 0 ) /*0x627123*/
      {
        int v10 = 0; /*0x627125*/
        do /*0x62713a*/
        {
          result = (_DWORD *)((char *)result + 1); /*0x627129*/
          *(_DWORD *)(*v4 + v10 + 20) = 10; /*0x62712a*/
          v10 += 24; /*0x627135*/
        }
        while ( (int)result < v4[2] ); /*0x62713a*/
        v1[3] = v4; /*0x62713c*/
        g_FileExtensionState = v1; /*0x62713f*/
        return result; /*0x62714b*/
      }
    }
    else
    {
      v4 = 0; /*0x62714c*/
    }
    v1[3] = v4; /*0x62714e*/
    g_FileExtensionState = v1; /*0x627151*/
  }
  return result; /*0x627146*/
}
}
} // namespace gamemd

// 0x6278C0
namespace gamemd {
int E4Recv_6278C0::sub_6278C0(const char * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int v11; // eax
  _DWORD *v17; // [esp+10h] [ebp-208h]
  char *v18; // [esp+10h] [ebp-208h]
  char String[256]; // [esp+14h] [ebp-204h] BYREF
  v17 = MIXFile::Load(this, a2); /*0x6278de*/
  char * v3 = (char *)__2_YAPAXI_Z(0x104u); /*0x6278e7*/
  if ( v3 ) /*0x6278ee*/
  {
    strcpy(v3, a2); /*0x627906*/
    _DWORD * v4 = v17; /*0x62790f*/
    v18 = v3; /*0x627913*/
    *((_DWORD *)v3 + 64) = v4; /*0x627917*/
  }
  else
  {
    v18 = 0; /*0x62791f*/
  }
  String::CopyUpper(String, a2); /*0x62792c*/
  int v5 = *(this + 3); /*0x627931*/
  int v6 = (*(int (__thiscall **)(char *))(v5 + 4))(String); /*0x627938*/
  int v7 = *(_DWORD *)(*(_DWORD *)v5 + 24 * (v6 % *(_DWORD *)(v5 + 8)) + 16); /*0x627944*/
  int v8 = *(_DWORD *)v5 + 24 * (v6 % *(_DWORD *)(v5 + 8)); /*0x627948*/
  int v9 = v7 - 1; /*0x62794b*/
  if ( v9 < 0 ) /*0x62794c*/
  {
LABEL_8:
  char v20[256]; // [esp+114h] [ebp-104h] BYREF
    String::Copy(v20, String); /*0x62797a*/
    int v12 = *(_DWORD *)(v8 + 8); /*0x62798f*/
    char * v21 = v18; /*0x627992*/
    if ( *(_DWORD *)(v8 + 16) < v12 /*0x6279c0*/
      || ((LOBYTE(v11) = *(_BYTE *)(v8 + 13), (_BYTE)v11) || !v12)
      && (v11 = *(_DWORD *)(v8 + 20), v11 > 0)
      && (LOBYTE(v11) = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v8 + 8))(v8, v12 + v11, 0), (_BYTE)v11) )
    {
      int v13 = 65 * *(_DWORD *)(v8 + 16); /*0x6279cd*/
      int v14 = *(_DWORD *)(v8 + 4); /*0x6279cf*/
      ++*(_DWORD *)(v8 + 16); /*0x6279d2*/
      int v15 = v14 + 4 * v13; /*0x6279dc*/
      LOBYTE(v11) = (unsigned __int8)String::CopyChecked((char *)v15, v20); /*0x6279e2*/
      *(_DWORD *)(v15 + 256) = v21; /*0x6279ee*/
    }
  }
  else
  {
    int v10 = 260 * v9; /*0x627955*/
    while ( 1 ) /*0x627962*/
    {
      LOBYTE(v11) = String::Equals((const char *)(v10 + *(_DWORD *)(v8 + 4)), String); /*0x627962*/
      if ( (_BYTE)v11 ) /*0x627969*/
        break; /*0x627969*/
      --v9; /*0x62796f*/
      v10 -= 260; /*0x627970*/
      if ( v9 < 0 ) /*0x627978*/
        goto LABEL_8; /*0x627978*/
    }
  }
  return v11; /*0x6279f4*/
}
}
} // namespace gamemd

// 0x627A10
namespace gamemd {
unsigned int * E4Recv_627A10::sub_627A10(ObjectClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  int *v8; // edi
  int v9; // esi
  ObjectClass *v10; // ecx
  ObjectClass *result; // eax
  int uniqueId; // ebp
  int i; // ebx
  ColorScheme *v15; // edi
  ObjectClass *v16; // ecx
  ObjectClass *v18; // [esp+10h] [ebp-104h]
  ObjectClass String; // [esp+14h] [ebp-100h] BYREF

  String::CopyUpper(String[0], aP1); /*0x627a2c*/
  int v3 = *(this + 3); /*0x627a31*/
  int v4 = *(_DWORD *)v3 + 24 * ((*(int (__thiscall **)(ObjectClass *))(v3 + 4))(&String) % *(_DWORD *)(v3 + 8)); /*0x627a48*/
  int v5 = *(_DWORD *)(v4 + 16) - 1; /*0x627a4b*/
  if ( v5 < 0 ) /*0x627a4c*/
  {
LABEL_5:
    v8 = 0; /*0x627a7e*/
  }
  else
  {
  const char *v7; // edi
    int v6 = 260 * v5; /*0x627a55*/
    while ( 1 ) /*0x627a5d*/
    {
      v7 = (const char *)(*(_DWORD *)(v4 + 4) + v6); /*0x627a5d*/
      if ( String::Equals(v7, &String) ) /*0x627a66*/
        break; /*0x627a66*/
      --v5; /*0x627a73*/
      v6 -= 260; /*0x627a74*/
      if ( v5 < 0 ) /*0x627a7c*/
        goto LABEL_5; /*0x627a7c*/
    }
    v8 = (int *)(v7 + 256); /*0x627b02*/
  }
  v9 = *v8; /*0x627a87*/
  v10 = (ObjectClass *)MIXFile::Load(this, aP1); /*0x627a93*/
  result = *(ObjectClass **)(v9 + 256); /*0x627a95*/
  v18 = v10; /*0x627a9d*/
  if ( result ) /*0x627aa1*/
  {
    uniqueId = result->uniqueId; /*0x627aa3*/
    for ( i = 0; i < uniqueId; ++i ) /*0x627aaa*/
    {
      int v14 = *(_DWORD *)(*(_DWORD *)(v9 + 256) + 4); /*0x627ab2*/
      v15 = *(ColorScheme **)(v14 + 4 * i); /*0x627ab5*/
      if ( v15 ) /*0x627aba*/
      {
        ColorScheme::Destructor(*(_DWORD *)(v14 + 4 * i)); /*0x627abe*/
        __3_YAXPAX_Z(v15); /*0x627ac4*/
      }
    }
    v16 = *(ObjectClass **)(v9 + 256); /*0x627ad1*/
    if ( v16 ) /*0x627ad9*/
      (**(void (__thiscall ***)(ObjectClass *, int))v16->__pad_0)(v16, 1); /*0x627adf*/
    *(_DWORD *)(v9 + 256) = 0; /*0x627ae5*/
    *(_DWORD *)(v9 + 256) = v18; /*0x627aef*/
    return v18->__pad_0; /*0x627ae1*/
  }
  else
  {
    *(_DWORD *)(v9 + 256) = v10; /*0x627b0d*/
  }
  return result->__pad_0; /*0x627af5*/
}
}
} // namespace gamemd

// 0x629530
namespace gamemd {
void E4Recv_629530::sub_629530()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  E4Recv_629530 *v4; // [esp+8h] [ebp-4h] BYREF
  int v2 = this->M68; /*0x629537*/
  this->M76 = 0; /*0x62953a*/
  this->M80 = 0; /*0x62953f*/
  this->M72 = 0; /*0x629542*/
  if ( v2 ) /*0x629545*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 248))(v2); /*0x629549*/
    this->M68 = 0; /*0x62954f*/
  }
  if ( (unsigned char)this->M84 ) /*0x629552*/
  {
    v4 = this; /*0x629567*/
    int v3 = (*(int (__thiscall **)(int *, int *))(g_BuildingInstanceCount + 16))(&g_BuildingInstanceCount, &v4); /*0x62956b*/
    if ( v3 != -1 && v3 < g_BuildingTypeInstanceCount && v3 < --g_BuildingTypeInstanceCount ) /*0x629586*/
    {
      do /*0x62959e*/
      {
        ++v3; /*0x62958e*/
        *((_DWORD *)g_BuildingClassPoolManager + v3 - 1) = *((_DWORD *)g_BuildingClassPoolManager + v3); /*0x629592*/
      }
      while ( v3 < g_BuildingTypeInstanceCount ); /*0x62959e*/
    }
    *(_BYTE *)(this + 84) = 0; /*0x6295a0*/
  }
}
}
} // namespace gamemd

// 0x62E070
namespace gamemd {
void DestructParticleSystemClass(ParticleSystemClass * aP0, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  AbstractClass *v2; // edx
  ParticleSystemClass *v4; // esi
  ParticleSystemClass *v5; // edi
  char *Owner; // ecx
  int eax14; // eax
  CCINIClass *v11; // eax
  int result; // eax
  ParticleSystemClass *v16; // [esp+8h] [ebp-10h]
  ParticleSystemClass *v17; // [esp+14h] [ebp-4h] BYREF
  ParticleSystemClass *v3 = (ParticleSystemClass *)v3; /*0x62e073*/
  LOBYTE(v2) = 1; /*0x62e075*/
  *(_DWORD *)v3 = &ParticleSystemClass::`vftable'; /*0x62e077*/
  v3->vtable2 = &ParticleSystemClass::`vftable'; /*0x62e07d*/
  v3->vtable3 = &vt_ParticleSystemClass; /*0x62e084*/
  v3->vtable4 = &off_7EFB70; /*0x62e08b*/
  AbstractClass::AnnounceExpiredPointer((AbstractClass *)v3, v2); /*0x62e092*/
  ObjectClass::Undeploy((#374 *)v5); /*0x62e099*/
  if ( v5->Owner ) /*0x62e09e*/
  {
    v16 = v4; /*0x62e0ae*/
    do /*0x62e150*/
    {
      int v6 = *(_DWORD *)v5->TargetCoords[0]; /*0x62e0b5*/
      if ( v6 ) /*0x62e0b9*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 32))(v6, 1); /*0x62e0bf*/
      v17 = *(ParticleSystemClass **)v5->TargetCoords[0]; /*0x62e0d4*/
  int v7; // eax
      v7 = (*(int (__thiscall **)(char *, ParticleSystemClass **, ParticleSystemClass *))(*(_DWORD *)&stru_B05488[41488] /*0x62e0dd*/
                                                                                        + 16))(
             &stru_B05488[41488],
             &v17,
             v16);
      if ( v7 != -1 && v7 < *(int *)&stru_B05488[41504] ) /*0x62e0ed*/
      {
        --*(_DWORD *)&stru_B05488[41504]; /*0x62e0f2*/
        for ( ; /*0x62e0f8*/
              v7 < *(int *)&stru_B05488[41504];
              *(_DWORD *)(*(_DWORD *)&stru_B05488[41492] + 4 * v7 - 4) = *(_DWORD *)(*(_DWORD *)&stru_B05488[41492]
                                                                                              + 4 * v7) )
        {
          ++v7; /*0x62e100*/
        }
      }
      v16 = (ParticleSystemClass *)v5->TargetCoords[0]; /*0x62e124*/
      int v8 = (*(int (__thiscall **)(int *))(v5->Particles[0] + 16))(v5->Particles); /*0x62e127*/
      if ( v8 != -1 ) /*0x62e12d*/
      {
        Owner = (char *)v5->Owner; /*0x62e12f*/
        if ( v8 < (int)Owner ) /*0x62e134*/
        {
          char * v10 = Owner - 1; /*0x62e136*/
          for ( v5->Owner = v10; /*0x62e13c*/
                v8 < (int)v5->Owner;
                *(_DWORD *)(v5->TargetCoords[0] + 4 * v8 - 4) = *(_DWORD *)(v5->TargetCoords[0] + 4 * v8) )
          {
            ++v8; /*0x62e141*/
          }
        }
      }
    }
    while ( v5->Owner ); /*0x62e150*/
  }
  v5->Type = 0; /*0x62e15d*/
  v17 = v5; /*0x62e173*/
  eax14 = ((int (__thiscall *)(DynamicVector **, ParticleSystemClass **))dword_A80208->field_10)(&dword_A80208, &v17); /*0x62e177*/
  if ( eax14 != -1 && eax14 < g_GameCleanupState && eax14 < --g_GameCleanupState ) /*0x62e192*/
  {
    do /*0x62e1aa*/
    {
      ++eax14; /*0x62e19a*/
      *(_DWORD *)&dword_A8020C->__pad_0[4 * eax14 - 4] = *(_DWORD *)&dword_A8020C->__pad_0[4 * eax14]; /*0x62e19e*/
    }
    while ( eax14 < g_GameCleanupState ); /*0x62e1aa*/
  }
  v17 = v5; /*0x62e1bc*/
  int v12; // eax
  v12 = (*(int (__thiscall **)(char *, ParticleSystemClass **))(*(_DWORD *)&stru_B05488[41448] + 16))( /*0x62e1c0*/
          &stru_B05488[41448],
          &v17);
  if ( v12 != -1 && v12 < *(int *)&stru_B05488[41464] ) /*0x62e1d0*/
  {
    --*(_DWORD *)&stru_B05488[41464]; /*0x62e1d5*/
    for ( ; /*0x62e1db*/
          v12 < *(int *)&stru_B05488[41464];
          *(_DWORD *)(*(_DWORD *)&stru_B05488[41452] + 4 * v12 - 4) = *(_DWORD *)(*(_DWORD *)&stru_B05488[41452]
                                                                                           + 4 * v12) )
    {
      ++v12; /*0x62e1e3*/
    }
  }
  v17 = v5; /*0x62e205*/
  int v13; // eax
  v13 = (*(int (__thiscall **)(char *, ParticleSystemClass **))(*(_DWORD *)&stru_B05488[41624] + 16))( /*0x62e209*/
          &stru_B05488[41624],
          &v17);
  if ( v13 != -1 && v13 < *(int *)&stru_B05488[41640] ) /*0x62e219*/
  {
    --*(_DWORD *)&stru_B05488[41640]; /*0x62e21e*/
    for ( ; /*0x62e224*/
          v13 < *(int *)&stru_B05488[41640];
          *(_DWORD *)(*(_DWORD *)&stru_B05488[41628] + 4 * v13 - 4) = *(_DWORD *)(*(_DWORD *)&stru_B05488[41628]
                                                                                           + 4 * v13) )
    {
      ++v13; /*0x62e22c*/
    }
  }
  v11 = (CCINIClass *)v5->TargetCoords[0]; /*0x62e23e*/
  v5->Particles[0] = (int)&vt_VectorClass_ParticleClass; /*0x62e244*/
  if ( v11 && BYTE1(v5->TargetCoords[2]) ) /*0x62e252*/
  {
    __3_YAXPAX_Z(v11); /*0x62e25b*/
    v5->TargetCoords[0] = 0; /*0x62e263*/
  }
  BYTE1(v5->TargetCoords[2]) = 0; /*0x62e26b*/
  v5->TargetCoords[1] = 0; /*0x62e271*/
  ObjectClass::Dtor(v5); /*0x62e277*/
  return result; /*0x62e27c*/
}
}
} // namespace gamemd

// 0x620720
namespace gamemd {
void DrawScrollArrowUI(int * a0, unsigned int * a1, ObjectClass * aP2, int a4, char a5)
{
{
    char v7;
    ObjectClass *v8;
    int v9;
    int v10;
    ObjectClass *v11;
    int v12;
    int v13;
    int v14[2];
    int v15;
    ObjectClass *v16;
    int v17[4];
    char Buffer[32];
    if ( a0 )
  {
    v7 = 114;
    if ( a4 )
    v7 = 112;
    if ( aP2 )
    sprintf(Buffer, (ObjectClass *)&DataGlobal_830620[24000], (INIClass *)v7);
    else
    sprintf(Buffer, (ObjectClass *)&DataGlobal_830620[23984], (INIClass *)v7);
    v8 = (ObjectClass *)HashTable::Find(&g_MatrixTransformState + 5774, &Buffer[a5 == 0], 0);
    if ( v8 )
    {
    v9 = *((int*)(a1) + 1);
    v10 = *((int*)(a1) + 2);
    v14[0] = *a1;
    v11 = (ObjectClass *)*((int*)(a1) + 3);
    v14[1] = v9;
    v15 = v10;
    v16 = v11;
    v15 = (*(int (__thiscall **)(ObjectClass *))(*(int *)v8->__pad_0 + 124))(v8);
    v16 = (ObjectClass *)(*(int (__thiscall **)(ObjectClass *))(*(int *)v8->__pad_0 + 128))(v8);
    v17[1] = 0;
    v17[0] = 0;
    v17[2] = (*(int (__thiscall **)(ObjectClass *))(*(int *)v8->__pad_0 + 124))(v8);
    v12 = (*(int (__thiscall **)(ObjectClass *))(*(int *)v8->__pad_0 + 128))(v8);
    v13 = *a0;
    v17[3] = v12;
    (*(void (__thiscall **)(int *, int *, ObjectClass *, int *, int, int))(v13 + 8))(a0, v14, v8, v17, 0, 1);
    }
  }
}
}
} // namespace gamemd

// 0x620870
namespace gamemd {
int sub_620870(unsigned short a1)
{
{
    int v1;
    v1 = (unsigned char)((unsigned char)(a1 >> g_BitShift_Blue) << g_BitMask_Red);
    BYTE1(v1) = 2;
    return (unsigned char)((unsigned char)(a1 >> g_BitShift_Red) << g_BitShift_Green_0)
    | (((unsigned char)((unsigned char)(a1 >> g_BitMask_Green) << g_BitMask_Blue) | (v1 << 8)) << 8);
}
}
} // namespace gamemd

// 0x621D30
namespace gamemd {
int sub_621D30(int * a1, int a2)
{
{
    int v4;
    int v5;
    int result;
    int v7;
    int v8;
    int v9;
    int v10;
    int v11;
    int v12;
    int v13;
    int v14;
    int v15;
    int v16;
    int v17;
    unsigned char v18[768];
    v16 = HashTable::Find(g_DialogHashTable, DataGlobal_8363FC, v18);
    v4 = 0;
    v17 = HashTable::Find(g_DialogHashTable, DataGlobal_8363F0, 0);
    sub_6B93E0(v18);
    v5 = 0;
    v12 = *a1;
    v13 = *((int*)(a1) + 1);
    v14 = *((int*)(a1) + 2);
    v15 = *((int*)(a1) + 3);
    result = *((int*)(a1) + 2);
    if ( result > 0 )
  {
    do
    {
    v7 = rand() % 8;
    v8 = *((int*)(a1) + 1) + 1;
    v12 = v5 + *a1;
    v13 = v8;
    v14 = 10;
    v15 = 12;
    Surface::AlphaBlend(&v12, a2, v16, v17, (int)v18, 0, 10 * v7, 0);
    v9 = rand() % 8;
    v10 = *((int*)(a1) + 1);
    v12 = v5 + *a1;
    v11 = *((int*)(a1) + 3);
    v14 = 10;
    v15 = 12;
    v13 = v10 + v11 - 16;
    Surface::AlphaBlend(&v12, a2, v16, v17, (int)v18, 0, 10 * v9, 0);
    if ( !(++v4 % 6) )
    v5 += 10;
    result = *((int*)(a1) + 2);
    v5 += 10;
    }
    while ( v5 < result );
  }
    return result;
}
}
} // namespace gamemd

// 0x6232B0
namespace gamemd {
int sub_6232B0(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
{
    int result;
    char *WindowLongA;
    result = BaseDialogProc(hWnd, a2, a3, a4);
    if ( !result )
  {
    if ( a2 == 273 && a3 == 1472 )
    {
    WindowLongA = (char *)GetWindowLongA(hWnd, 8);
    if ( WindowLongA )
      {
    EventBuffer::Enqueue(g_BinkMoviePlayer, 27);
    *WindowLongA = 1;
      }
    }
    return 0;
  }
    return result;
}
}
} // namespace gamemd

// 0x6235B0
namespace gamemd {
void E4Recv_6235B0::sub_6235B0(wchar_t * Format)
{
{
    wchar_t *v3;
    if ( this->M40 )
  {
    __3_YAXPAX_Z(this->M40);
    this->M40 = 0;
  }
    if ( Format )
  {
    if ( *(char *)Format )
    {
    v3 = (wchar_t *)__2_YAPAXI_Z(2 * strlen((const char *)Format) + 2);
    this->M40 = v3;
    swprintf(v3, (const size_t)g_Str_Trace__hs, Format);
    }
  }
}
}
} // namespace gamemd

// 0x623DA0
namespace gamemd {
int sub_623DA0(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
{
    int result;
    int *WindowLongA;
    result = BaseDialogProc(hWnd, a2, a3, a4);
    if ( !result )
  {
    WindowLongA = (int *)GetWindowLongA(hWnd, 8);
    if ( a2 == 273 && (unsigned short)a3 >= 0x5C0u && (unsigned short)a3 <= 0x5C1u )
    *WindowLongA = (unsigned short)a3;
    return 0;
  }
    return result;
}
}
} // namespace gamemd

// 0x623EA0
namespace gamemd {
LRESULT GetEditControlText(HWND hWnd, void ** a2)
{
{
    LRESULT v4;
    wchar_t *v6;
    LRESULT v7;
    v4 = SendMessageA(hWnd, 0xEu, 0, 0);
    if ( v4 > 0 )
  {
    v6 = (wchar_t *)__2_YAPAXI_Z(2 * v4 + 4);
    v7 = SendMessageA(hWnd, 0x4B3u, v4 + 1, (LPARAM)v6);
    WideString::Assign_Alt(a2, v6);
    __3_YAXPAX_Z(v6);
    return v7;
  }
    else
  {
    SafeDelete::Ptr(a2);
    return 0;
  }
}
}
} // namespace gamemd

// 0x623F00
namespace gamemd {
LRESULT GetListBoxItemText(ObjectClass * aP0, WPARAM wParam, void ** a2)
{
{
    LRESULT v5;
    CCINIClass *v6;
    LRESULT v7;
    v5 = SendMessageA((HWND)aP0, 0x18Au, wParam, 0);
    if ( v5 <= 0 )
    DeleteAndZero::Alt2(a2);
    v6 = (CCINIClass *)__2_YAPAXI_Z(v5 + 2);
    v7 = SendMessageA((HWND)aP0, 0x4B7u, wParam, (LPARAM)v6);
    String::Assign_Alt(a2, v6);
    __3_YAXPAX_Z(v6);
    return v7;
}
}
} // namespace gamemd

// 0x624080
namespace gamemd {
unsigned int * E4Recv_624080::sub_624080()
{
{
    this->vfptr = &vt_OwnerDraw_DialogControl;
    return &this->vfptr;
}
}
} // namespace gamemd

// 0x624090
namespace gamemd {
void E4Recv_624090::sub_624090()
{
{
    this->vfptr = &vt_OwnerDraw_DialogControl;
}
}
} // namespace gamemd

// 0x626020
namespace gamemd {
char * E4Recv_626020::sub_626020(int a2)
{
{
    char *result;
    char *v3;
    int v4;
    char *v5;
    int v6;
    char *v7;
    result = this;
    v3 = this + 2;
    v4 = 256;
    do
  {
    *(v3 - 2) = 0;
    *(v3 - 1) = 0;
    *v3 = 0;
    v3 += 3;
    --v4;
  }
    while ( v4 );
    v5 = this;
    v6 = 256;
    do
  {
    v7 = v5;
    v5 += 3;
    --v6;
    *(short *)v7 = *(short *)a2;
    v7[2] = *(char *)(a2 + 2);
  }
    while ( v6 );
    return result;
}
}
} // namespace gamemd

// 0x626070
namespace gamemd {
void * E4Recv_626070::sub_626070(const void * a2)
{
{
    void *result;
    char *v3;
    int v4;
    result = this;
    v3 = this + 2;
    v4 = 256;
    do
  {
    *(v3 - 2) = 0;
    *(v3 - 1) = 0;
    *v3 = 0;
    v3 += 3;
    --v4;
  }
    while ( v4 );
    qmemcpy(result, a2, 0x300u);
    return result;
}
}
} // namespace gamemd

// 0x6260A0
namespace gamemd {
bool E4Recv_6260A0::sub_6260A0(const void * a2)
{
{
    return this == a2 || memcmp(this, a2, 0x300u) == 0;
}
}
} // namespace gamemd

// 0x6260F0
namespace gamemd {
unsigned char E4Recv_6260F0::sub_6260F0(ObjectClass * aP1)
{
{
    int v3;
    unsigned char result;
    v3 = 256;
    do
  {
    result = Color::Lerp(this, aP1, &DataGlobal_A83CD9);
    this += 3;
    --v3;
  }
    while ( v3 );
    return result;
}
}
} // namespace gamemd

// 0x626170
namespace gamemd {
unsigned char E4Recv_626170::sub_626170(ObjectClass * aP1, int a3)
{
{
    int i;
    unsigned char result;
    for ( i = 0; i < 256; ++i )
  {
    if ( *(char *)(i + a3) )
    result = Color::Lerp(this, aP1, &DataGlobal_A83CD9);
    this += 3;
  }
    return result;
}
}
} // namespace gamemd

// 0x6261B0
namespace gamemd {
unsigned char E4Recv_6261B0::sub_6261B0(ObjectClass * aP1, int a3, int a4)
{
{
    int i;
    unsigned char result;
    for ( i = 0; i < 256; ++i )
  {
    result = a4;
    if ( *(char *)(i + a4) )
    result = Color::Lerp(this, aP1, (unsigned char *)(a3 + 2 * (i % 256) + i % 256));
    this += 3;
  }
    return result;
}
}
} // namespace gamemd

// 0x626250
namespace gamemd {
int E4Recv_626250::sub_626250(const char * a2, int a3)
{
{
    strcpy((char *)this, a2);
    this->M256 = a3;
    return this;
}
}
} // namespace gamemd

// 0x626290
namespace gamemd {
void E4Recv_626290::sub_626290()
{
{
    int v2;
    int v3;
    int i;
    int v5;
    void *v6;
    void (__thiscall ***v7)(int, int);
    v2 = this->M256;
    if ( v2 )
  {
    v3 = *(int *)(v2 + 16);
    for ( i = 0; i < v3; ++i )
    {
    v5 = *(int *)(this->M256 + 4);
    v6 = *(void **)(v5 + 4 * i);
    if ( v6 )
      {
    ColorScheme::Destructor(*(int *)(v5 + 4 * i));
    __3_YAXPAX_Z(v6);
      }
    }
    v7 = (void (__thiscall ***)(int, int))this->M256;
    if ( v7 )
    (**v7)(v7, 1);
    this->M256 = 0;
  }
}
}
} // namespace gamemd

// 0x6262F0
namespace gamemd {
int E4Recv_6262F0::sub_6262F0(int a2)
{
{
    int result;
    int v4;
    int i;
    int v6;
    void *v7;
    void (__thiscall ***v8)(int, int);
    result = this->M256;
    if ( result )
  {
    v4 = *(int *)(result + 16);
    for ( i = 0; i < v4; ++i )
    {
    v6 = *(int *)(this->M256 + 4);
    v7 = *(void **)(v6 + 4 * i);
    if ( v7 )
      {
    ColorScheme::Destructor(*(int *)(v6 + 4 * i));
    __3_YAXPAX_Z(v7);
      }
    }
    v8 = (void (__thiscall ***)(int, int))this->M256;
    if ( v8 )
    (**v8)(v8, 1);
    this->M256 = 0;
    this->M256 = a2;
    return a2;
  }
    else
  {
    this->M256 = a2;
  }
    return result;
}
}
} // namespace gamemd

// 0x626660
namespace gamemd {
int String_HashMod31(char * a1)
{
{
    char v1;
    int result;
    v1 = *a1;
    for ( result = 0; *a1; v1 = *a1 )
  {
    ++a1;
    result = (v1 + 26 * result) % 31;
  }
    return result;
}
}
} // namespace gamemd

// 0x6274F0
namespace gamemd {
int E4Recv_6274F0::sub_6274F0(ObjectClass * aP1)
{
{
    int v3;
    int v4;
    int v5;
    int i;
    int v7;
    ObjectClass String;
    String::CopyUpper(String[0], aP1);
    v3 = this->M12;
    v4 = *(int *)(v3) + 24 * ((*(int (__thiscall **)(ObjectClass *))(v3 + 4))(&String) % *(int *)(v3 + 8));
    v5 = *(int *)(v4 + 16) - 1;
    if ( v5 < 0 )
    return 0;
    for ( i = 260 * v5; ; i -= 260 )
  {
    v7 = *(int *)(v4 + 4) + i;
    if ( String::Equals((const char *)v7, &String) )
    break;
    if ( --v5 < 0 )
    return 0;
  }
    if ( v7 == -256 )
    return 0;
    else
    return *(int *)(*(int *)(v7 + 256) + 256);
}
}
} // namespace gamemd

// 0x628B00
namespace gamemd {
unsigned int * E4Recv_628B00::sub_628B00(int a2, unsigned char * a3)
{
{
    int v3;
    char *v5;
    char *v6;
    char *v7;
    v3 = a2;
    this->M4 = 0;
    this->M8 = a2;
    this->M12 = 1;
    this->M13 = 0;
    *(void**)this = &vt_VectorClass_HashObject_HashString_SchemeNode;
    if ( a2 )
  {
    if ( a3 )
    {
    v5 = a3;
    if ( a2 - 1 >= 0 )
      {
    do
        {
    Byte::Zero(v5);
    v5 += 260;
    --v3;
        }
    while ( v3 );
      }
    this->M4 = a3;
    }
    else
    {
    v6 = __2_YAPAXI_Z(260 * a2);
    if ( v6 )
      {
    v7 = v6;
    if ( a2 - 1 >= 0 )
        {
    do
          {
    Byte::Zero(v7);
    v7 += 260;
    --v3;
          }
    while ( v3 );
        }
      }
    else
      {
    v6 = 0;
      }
    this->M4 = v6;
    this->M13 = 1;
    }
  }
    *(void**)this = &vt_DynamicVectorClass_HashObject_HashString_SchemeNode;
    this->M20 = 10;
    this->M16 = 0;
    return this;
}
}
} // namespace gamemd

// 0x628F80
namespace gamemd {
void sub_628F80()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_AC4930 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x628FB0
namespace gamemd {
void sub_628FB0()
{
{
    DataGlobal_AC4980 = DataGlobal_AC4930 / 60.0;
}
}
} // namespace gamemd

// 0x628FD0
namespace gamemd {
void sub_628FD0()
{
{
    DataGlobal_AC4968 = 1.0 / DataGlobal_AC4980;
}
}
} // namespace gamemd

// 0x628FF0
namespace gamemd {
void sub_628FF0()
{
{
    DataGlobal_AC4960 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x629010
namespace gamemd {
void sub_629010()
{
{
    DataGlobal_AC4938 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x629030
namespace gamemd {
void sub_629030()
{
{
    DataGlobal_AC48F8 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x629050
namespace gamemd {
long long sub_629050()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_AC48F8 - DataGlobal_AC4938);
    result = Math::RoundToInt(v0 * DataGlobal_AC4930 * 0.5);
    DataGlobal_AC4988 = result;
    return result;
}
}
} // namespace gamemd

// 0x629090
namespace gamemd {
void sub_629090()
{
{
    DataGlobal_AC4940 = Math::ArcTan((double)DataGlobal_AC4988 * 0.00390625);
}
}
} // namespace gamemd

// 0x6290C0
namespace gamemd {
void sub_6290C0()
{
{
    DataGlobal_AC4958 = Math::ArcTan((double)(2 * DataGlobal_AC4988) / DataGlobal_AC4930);
}
}
} // namespace gamemd

// 0x6290F0
namespace gamemd {
long long sub_6290F0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_AC4988) + 0.5);
    DataGlobal_AC497C = result;
    return result;
}
}
} // namespace gamemd

// 0x629120
namespace gamemd {
int sub_629120()
{
{
    DataGlobal_AC4928 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x629130
namespace gamemd {
int sub_629130()
{
{
    DataGlobal_AC4948 = 0;
    DataGlobal_AC494C = 0;
    DataGlobal_AC4950 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x629150
namespace gamemd {
int sub_629150()
{
{
    DataGlobal_AC4978 = 0;
    DataGlobal_AC4970 = 128;
    DataGlobal_AC4974 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x629170
namespace gamemd {
int sub_629170()
{
{
    DataGlobal_AC4900 = 0;
    DataGlobal_AC4904 = 0;
    DataGlobal_AC4908 = 0;
    DataGlobal_AC490C = 0;
    return 0;
}
}
} // namespace gamemd

// 0x629190
namespace gamemd {
int sub_629190()
{
{
    DataGlobal_AC4914 = 0;
    DataGlobal_AC4918 = 0;
    DataGlobal_AC491C = 1;
    DataGlobal_AC491D = 0;
    DataGlobal_AC4910 = (int)&vt_DynamicVectorClass_ParasiteClass;
    DataGlobal_AC4924 = 10;
    DataGlobal_AC4920 = 0;
    return atexit(sub_6291D0);
}
}
} // namespace gamemd

// 0x6291D0
namespace gamemd {
void sub_6291D0()
{
{
    DataGlobal_AC4910 = (int)&vt_VectorClass_ParasiteClass;
    if ( DataGlobal_AC4914 && DataGlobal_AC491D )
  {
    __3_YAXPAX_Z(DataGlobal_AC4914);
    DataGlobal_AC4914 = 0;
  }
    DataGlobal_AC491D = 0;
    DataGlobal_AC4918 = 0;
}
}
} // namespace gamemd

// 0x629710
namespace gamemd {
int E4Recv_629710::sub_629710()
{
{
    this->M80 = 0;
    this->M76 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x62B3D0
namespace gamemd {
void sub_62B3D0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_AC49B8 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x62B400
namespace gamemd {
void sub_62B400()
{
{
    DataGlobal_AC4A10 = DataGlobal_AC49B8 / 60.0;
}
}
} // namespace gamemd

// 0x62B420
namespace gamemd {
void sub_62B420()
{
{
    DataGlobal_AC49F8 = 1.0 / DataGlobal_AC4A10;
}
}
} // namespace gamemd

// 0x62B440
namespace gamemd {
void sub_62B440()
{
{
    DataGlobal_AC49F0 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x62B460
namespace gamemd {
void sub_62B460()
{
{
    DataGlobal_AC49C0 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x62B480
namespace gamemd {
void sub_62B480()
{
{
    DataGlobal_AC4990 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x62B4A0
namespace gamemd {
long long sub_62B4A0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_AC4990 - DataGlobal_AC49C0);
    result = Math::RoundToInt(v0 * DataGlobal_AC49B8 * 0.5);
    DataGlobal_AC4A18 = result;
    return result;
}
}
} // namespace gamemd

// 0x62B4E0
namespace gamemd {
void sub_62B4E0()
{
{
    DataGlobal_AC49C8 = Math::ArcTan((double)DataGlobal_AC4A18 * 0.00390625);
}
}
} // namespace gamemd

// 0x62B510
namespace gamemd {
void sub_62B510()
{
{
    DataGlobal_AC49E8 = Math::ArcTan((double)(2 * DataGlobal_AC4A18) / DataGlobal_AC49B8);
}
}
} // namespace gamemd

// 0x62B540
namespace gamemd {
long long sub_62B540()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_AC4A18) + 0.5);
    DataGlobal_AC4A0C = result;
    return result;
}
}
} // namespace gamemd

// 0x62B570
namespace gamemd {
int sub_62B570()
{
{
    DataGlobal_AC49B0 = 0;
    DataGlobal_AC49B2 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x62B580
namespace gamemd {
int sub_62B580()
{
{
    DataGlobal_AC49D8 = 0;
    DataGlobal_AC49DC = 0;
    DataGlobal_AC49E0 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x62B5A0
namespace gamemd {
int sub_62B5A0()
{
{
    DataGlobal_AC4A08 = 0;
    DataGlobal_AC4A00 = 128;
    DataGlobal_AC4A04 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x62B5C0
namespace gamemd {
int sub_62B5C0()
{
{
    DataGlobal_AC49A0 = 0;
    DataGlobal_AC49A4 = 0;
    DataGlobal_AC49A8 = 0;
    DataGlobal_AC49AC = 0;
    return 0;
}
}
} // namespace gamemd

// 0x62D510
namespace gamemd {
int E4Recv_62D510::sub_62D510()
{
{
    double v2;
    char *v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int GroundHeight;
    int v12;
    int v13;
    int v14;
    int v15[3];
    v2 = this->M228;
    v3 = (char *)(this + 39);
    *(float *)v15 = this->M156;
    v4 = this->M160;
    v5 = this->M164;
    v6 = this->M156;
    v15[2] = v5;
    v7 = *((int *)(v3) + 1);
    v12 = v6;
    v8 = *((int *)(v3) + 2);
    v13 = v7;
    v14 = v8;
    v15[1] = v4;
    if ( v2 > 0.0 )
  {
    v9 = this->M264;
    v12 = this->M256 + v6;
    v13 = this->M260 + v7;
    v14 = v9 + v8;
  }
    if ( this->M228 > 0.0 )
  {
    GroundHeight = Cell::GetGroundHeight(v15);
    if ( Cell::GetGroundHeight(&v12) > GroundHeight )
    {
    this->M301 = 1;
    this->M305 = 1;
    }
  }
    return this->Vf436(&v12);
}
}
} // namespace gamemd

// 0x62D760
namespace gamemd {
void nullsub_214()
{
  ;
}
} // namespace gamemd

// 0x62DA40
namespace gamemd {
void sub_62DA40()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_AC4A40 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x62DA70
namespace gamemd {
void sub_62DA70()
{
{
    DataGlobal_AC4A90 = DataGlobal_AC4A40 / 60.0;
}
}
} // namespace gamemd

// 0x62DA90
namespace gamemd {
void sub_62DA90()
{
{
    DataGlobal_AC4A78 = 1.0 / DataGlobal_AC4A90;
}
}
} // namespace gamemd

// 0x62DAB0
namespace gamemd {
void sub_62DAB0()
{
{
    DataGlobal_AC4A70 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x62DAD0
namespace gamemd {
void sub_62DAD0()
{
{
    DataGlobal_AC4A48 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x62DAF0
namespace gamemd {
void sub_62DAF0()
{
{
    DataGlobal_AC4A20 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x62DB10
namespace gamemd {
long long sub_62DB10()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_AC4A20 - DataGlobal_AC4A48);
    result = Math::RoundToInt(v0 * DataGlobal_AC4A40 * 0.5);
    DataGlobal_AC4A98 = result;
    return result;
}
}
} // namespace gamemd

// 0x62DB50
namespace gamemd {
void sub_62DB50()
{
{
    DataGlobal_AC4A50 = Math::ArcTan((double)DataGlobal_AC4A98 * 0.00390625);
}
}
} // namespace gamemd

// 0x62DB80
namespace gamemd {
void sub_62DB80()
{
{
    DataGlobal_AC4A68 = Math::ArcTan((double)(2 * DataGlobal_AC4A98) / DataGlobal_AC4A40);
}
}
} // namespace gamemd

// 0x62DBB0
namespace gamemd {
long long sub_62DBB0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_AC4A98) + 0.5);
    DataGlobal_AC4A8C = result;
    return result;
}
}
} // namespace gamemd

// 0x62DBE0
namespace gamemd {
int sub_62DBE0()
{
{
    DataGlobal_AC4A38 = 0;
    DataGlobal_AC4A3A = 0;
    return 0;
}
}
} // namespace gamemd

// 0x62DBF0
namespace gamemd {
int sub_62DBF0()
{
{
    DataGlobal_AC4A58 = 0;
    DataGlobal_AC4A5C = 0;
    DataGlobal_AC4A60 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x62DC10
namespace gamemd {
int sub_62DC10()
{
{
    DataGlobal_AC4A88 = 0;
    DataGlobal_AC4A80 = 128;
    DataGlobal_AC4A84 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x62DC30
namespace gamemd {
int sub_62DC30()
{
{
    DataGlobal_AC4A28 = 0;
    DataGlobal_AC4A2C = 0;
    DataGlobal_AC4A30 = 0;
    DataGlobal_AC4A34 = 0;
    return 0;
}
}
} // namespace gamemd
