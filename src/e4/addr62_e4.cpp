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
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/E4Recv_645D60_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/RandomMap_e4.hpp"
#include "e4/classes/SuperWeaponTypeClass_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/SkirmishDialog_e4.hpp"
#include "e4/classes/Buffer_e4.hpp"
#include "e4/classes/E4Recv_635560_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/Char_e4.hpp"
#include "e4/classes/FontRenderer_e4.hpp"
#include "e4/classes/Property_e4.hpp"
#include "e4/classes/TextGroup_e4.hpp"
#include "e4/classes/Text_e4.hpp"
#include "e4/classes/Font_e4.hpp"
#include "e4/classes/DialogClass_e4.hpp"
#include "e4/classes/Control_e4.hpp"
#include "e4/classes/GadgetClass_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/classes/DeleteAndZero_e4.hpp"
#include "e4/classes/DialogQueue_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/MessageListClass_e4.hpp"  // w18j2 C3861 MessageListClass:: supply
#include "e4/classes/VtableStub_e4.hpp"  // w18j2 C3861 VtableStub:: supply
// [w18j2] C2065 function supply (raw-evidenced)
namespace gamemd { BOOL RepositionDialogControls(HWND hWnd, HWND a2); }  // w18j2 raw 0x0060C0C0
// [w18j2] C3861 supply (raw-evidenced)
namespace gamemd { int CountCharsInWidth(uint16_t* p0, int p1, int p2, int p3); }  // x4:signals@0x433f50
// [w16g4] C3861 supply (raw call-form evidence)
namespace gamemd { int CreateDialog(unsigned __int16 a1, INT_PTR (__stdcall *a2)(HWND, UINT, WPARAM, LPARAM), LPARAM a3); }  // x4:ida@0x622650
// [w14e3] fn vocab supply (g57b5-W5 variadic convention); evidence: raw_decomp entries
namespace gamemd {
    int InitializeDialogControls(HWND a1, LPARAM a2);  // x4:ida@0x60f4b0
} // namespace gamemd

// 0x620050
namespace gamemd {  // G42.18 ns repair
int Surface_DrawLineAlpha(int a1, int * a2, int * a3, short a4, unsigned char a5)
{
  int v5; // ebp
  int v6; // ebx
  int v7; // esi
  int result; // eax
  int16_t *v10; // edi
  unsigned int v11; // edx
  int v12; // eax
  int v13; // esi
  int v14; // ebx
  int v15; // eax
  int16_t v16; // bp
  int16_t v17; // si
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  int v20; // ecx
  int v21; // eax
  int16_t v22; // bx
  int16_t v23; // ax
  int16_t v24; // bp
  int v25; // esi
  int v26; // ebx
  int v27; // eax
  int v28; // ebp
  int v29; // eax
  int v30; // ecx
  int v31; // eax
  int16_t v32; // bx
  int16_t v33; // ax
  int v34; // esi
  unsigned int v35; // ebp
  unsigned int v36; // ebx
  int v37; // ebp
  unsigned int v38; // ebp
  int v39; // ecx
  int v40; // edx
  int16_t v41; // bx
  int16_t v42; // ax
  int16_t v43; // bp
  bool v44; // zf
  int v45; // [esp+14h] [ebp-24h]
  int v47; // [esp+1Ch] [ebp-1Ch]
  int v48; // [esp+1Ch] [ebp-1Ch]
  int v49; // [esp+20h] [ebp-18h]
  int v50; // [esp+20h] [ebp-18h]
  int v51; // [esp+20h] [ebp-18h]
  int v52; // [esp+24h] [ebp-14h]
  int v53; // [esp+24h] [ebp-14h]
  int v54; // [esp+28h] [ebp-10h]
  int v55; // [esp+2Ch] [ebp-Ch]
  int v56; // [esp+2Ch] [ebp-Ch]
  int v57; // [esp+30h] [ebp-8h]
  int v58; // [esp+30h] [ebp-8h]
  int v59; // [esp+30h] [ebp-8h]
  int v60; // [esp+34h] [ebp-4h]
  int16_t v62; // [esp+3Ch] [ebp+4h]
  int16_t v63; // [esp+3Ch] [ebp+4h]
  int16_t v64; // [esp+3Ch] [ebp+4h]
  int16_t *v65; // [esp+40h] [ebp+8h]
  int v66; // [esp+44h] [ebp+Ch]

  v60 = a2[1]; /*0x620057*/
  v5 = *a2; /*0x620060*/
  v6 = a3[1]; /*0x620062*/
  v7 = *a3; /*0x620066*/
  if ( *a2 > *a3 ) /*0x620071*/
  {
    v6 = a2[1]; /*0x620075*/
    v5 = *a3; /*0x620078*/
    v7 = *a2; /*0x62007a*/
    v60 = a3[1]; /*0x62007c*/
  }
  v45 = (*(int (**)(int))(*(unsigned int *)a1 + 112))(a1); /*0x62008b*/
  result = (*(int (**)(int, int, int))(*(unsigned int *)a1 + 92))(a1, v5, v60); /*0x620095*/
  v10 = (int16_t *)result; /*0x620098*/
  if ( result ) /*0x62009c*/
  {
    if ( v60 == v6 ) /*0x6200a8*/
    {
      if ( v45 == 1 ) /*0x6200b3*/
      {
        (*((unsigned char *)&(v6))) = a4; /*0x6200bb*/
        (((unsigned char *)&(v6))[1]) = a4; /*0x6200bf*/
        v11 = v7 - v5 + 1; /*0x6200c4*/
        v12 = v6 << 16; /*0x6200c6*/
        (*((unsigned short *)&(v12))) = v6; /*0x6200c9*/
        memset32(v10, v12, v11 >> 2); /*0x6200cf*/
        memset(&v10[2 * (v11 >> 2)], a4, v11 & 3); /*0x6200d6*/
        result = (*(int (**)(int))(*(unsigned int *)a1 + 96))(a1); /*0x6200de*/
        (*((unsigned char *)&(result))) = 1; /*0x6200e1*/
        return result; /*0x6200ea*/
      }
      v13 = v7 - v5; /*0x6200ed*/
      if ( v13 >= 0 ) /*0x6200ef*/
      {
        v14 = a5; /*0x6200fd*/
        v15 = 255 - a5; /*0x620108*/
        v16 = a4; /*0x62010a*/
        v55 = a5; /*0x620111*/
        v57 = v15; /*0x620115*/
        v65 = v10; /*0x62011d*/
        v66 = v13 + 1; /*0x620121*/
        while ( 1 ) /*0x620142*/
        {
          v17 = *v10; /*0x620142*/
          g_GameScreenConfig = v15; /*0x62014a*/
          v18 = (v15 * (uint16_t)(v17 & (*(((unsigned short *)&(g_ScreenSaverState)) + 1))) /*0x62018a*/
               + v14 * (unsigned int)(uint16_t)((*(((unsigned short *)&(g_ScreenSaverState)) + 1)) & a4)) >> 8;
          (*((unsigned short *)&(v18))) = (*(((unsigned short *)&(g_ScreenSaverState)) + 1)) & v18; /*0x62018d*/
          v19 = v18 /*0x6201a3*/
              | g_ScreenSaverState
              & ((v15 * (uint16_t)(v17 & g_ScreenSaverState)
                + v14 * (unsigned int)(uint16_t)(v16 & g_ScreenSaverState)) >> 8);
          v16 = a4; /*0x6201a5*/
          g_GameScreenFlags = v14; /*0x6201bd*/
          *v65 = ((v15 * (uint16_t)(v17 & g_CreditsScreenState) /*0x6201c3*/
                 + v14 * (unsigned int)(uint16_t)(a4 & g_CreditsScreenState)) >> 8)
               | v19;
          v10 = ++v65; /*0x6201c6*/
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
        v20 = (*(int (**)(int))(*(unsigned int *)a1 + 116))(a1); /*0x62020d*/
      else
        v20 = -(*(int (**)(int))(*(unsigned int *)a1 + 116))(a1); /*0x620204*/
      v47 = v20; /*0x620217*/
      v21 = abs32(v6 - v60); /*0x62021e*/
      if ( v21 >= 0 ) /*0x620220*/
      {
        v22 = a4; /*0x620226*/
        v49 = v21 + 1; /*0x62022b*/
        do /*0x620305*/
        {
          if ( v45 == 1 ) /*0x620234*/
          {
            *(unsigned char *)v10 = v22; /*0x620236*/
          }
          else
          {
            v23 = *v10; /*0x620241*/
            g_GameScreenFlags = a5; /*0x62024f*/
            v62 = v22; /*0x620291*/
            g_GameScreenConfig = 255 - a5; /*0x6202a4*/
            v24 = (*(((unsigned short *)&(g_ScreenSaverState)) + 1)) /*0x6202dd*/
                & ((a5 * (uint16_t)((*(((unsigned short *)&(g_ScreenSaverState)) + 1)) & v22)
                  + (255 - a5) * (unsigned int)(uint16_t)((*(((unsigned short *)&(g_ScreenSaverState)) + 1)) & v23)) >> 8)
                | g_ScreenSaverState
                & ((a5 * (uint16_t)(v22 & g_ScreenSaverState)
                  + (255 - a5) * (unsigned int)(uint16_t)(g_ScreenSaverState & v23)) >> 8);
            v22 = a4; /*0x6202e5*/
            v20 = v47; /*0x6202ec*/
            *v10 = ((a5 * (uint16_t)(v62 & g_CreditsScreenState) /*0x6202f7*/
                   + g_GameScreenConfig * (unsigned int)(uint16_t)(g_CreditsScreenState & v23)) >> 8)
                 | v24;
          }
          v10 = (int16_t *)((char *)v10 + v20); /*0x6202fe*/
          --v49; /*0x620301*/
        }
        while ( v49 ); /*0x620305*/
      }
    }
    else
    {
      v25 = v7 - v5; /*0x620324*/
      v58 = v25; /*0x620326*/
      v26 = v6 - v60; /*0x62032a*/
      v27 = (*(int (**)(int))(*(unsigned int *)a1 + 116))(a1); /*0x62032e*/
      v48 = v27; /*0x620333*/
      if ( v26 < 0 ) /*0x620337*/
        v48 = -v27; /*0x62033b*/
      v28 = 2 * v25; /*0x620341*/
      v54 = 2 * v25; /*0x620347*/
      v29 = abs32(v26); /*0x62034b*/
      v56 = 2 * v29; /*0x620352*/
      if ( v25 <= v29 ) /*0x620356*/
      {
        v39 = 0; /*0x620488*/
        v40 = v28 - v29; /*0x62048a*/
        v53 = 0; /*0x62048c*/
        v51 = v28 - v29; /*0x620492*/
        if ( v29 > 0 ) /*0x620496*/
        {
          v41 = a4; /*0x62049c*/
          v59 = v29; /*0x6204a0*/
          do /*0x62059e*/
          {
            if ( v45 == 1 ) /*0x6204a9*/
            {
              *((unsigned char *)v10 + v39) = v41; /*0x6204ab*/
            }
            else
            {
              v42 = v10[v39]; /*0x6204b3*/
              g_GameScreenFlags = a5; /*0x6204c6*/
              v64 = v41; /*0x620508*/
              g_GameScreenConfig = 255 - a5; /*0x62051b*/
              v43 = (*(((unsigned short *)&(g_ScreenSaverState)) + 1)) /*0x620554*/
                  & ((a5 * (uint16_t)((*(((unsigned short *)&(g_ScreenSaverState)) + 1)) & v41)
                    + (255 - a5) * (unsigned int)(uint16_t)((*(((unsigned short *)&(g_ScreenSaverState)) + 1)) & v42)) >> 8)
                  | g_ScreenSaverState
                  & ((a5 * (uint16_t)(v41 & g_ScreenSaverState)
                    + (255 - a5) * (unsigned int)(uint16_t)(g_ScreenSaverState & v42)) >> 8);
              v41 = a4; /*0x62055c*/
              v39 = v53; /*0x620563*/
              v40 = v51; /*0x620569*/
              v10[v53] = ((a5 * (uint16_t)(v64 & g_CreditsScreenState) /*0x620572*/
                         + g_GameScreenConfig * (unsigned int)(uint16_t)(g_CreditsScreenState & v42)) >> 8)
                       | v43;
              v28 = 2 * v25; /*0x620576*/
            }
            if ( v40 > 0 ) /*0x62057c*/
            {
              v53 = ++v39; /*0x620583*/
              v40 -= v56; /*0x620587*/
            }
            v40 += v28; /*0x620591*/
            v10 = (int16_t *)((char *)v10 + v48); /*0x620593*/
            v44 = v59 == 1; /*0x620595*/
            v51 = v40; /*0x620596*/
            --v59; /*0x62059a*/
          }
          while ( !v44 ); /*0x62059e*/
        }
      }
      else
      {
        v30 = 2 * v29 - v25; /*0x62035c*/
        v31 = 0; /*0x62035e*/
        v50 = v30; /*0x620362*/
        v52 = 0; /*0x620366*/
        if ( v25 > 0 ) /*0x62036a*/
        {
          v32 = a4; /*0x620370*/
          do /*0x62046b*/
          {
            if ( v45 == 1 ) /*0x620379*/
            {
              *((unsigned char *)v10 + v31) = v32; /*0x62037b*/
            }
            else
            {
              v33 = v10[v31]; /*0x620387*/
              g_GameScreenFlags = a5; /*0x620396*/
              v34 = 255 - a5; /*0x62039c*/
              v63 = v32; /*0x6203d8*/
              v35 = g_ScreenSaverState /*0x6203e5*/
                  & ((a5 * (uint16_t)(v32 & g_ScreenSaverState)
                    + v34 * (unsigned int)(uint16_t)(g_ScreenSaverState & v33)) >> 8);
              g_GameScreenConfig = v34; /*0x6203eb*/
              v36 = (a5 * (uint16_t)((*(((unsigned short *)&(g_ScreenSaverState)) + 1)) & v32) /*0x620411*/
                   + v34 * (unsigned int)(uint16_t)((*(((unsigned short *)&(g_ScreenSaverState)) + 1)) & v33)) >> 8;
              (*((unsigned short *)&(v36))) = (*(((unsigned short *)&(g_ScreenSaverState)) + 1)) & v36; /*0x620414*/
              v37 = v36 | v35; /*0x620424*/
              v32 = a4; /*0x62042c*/
              v25 = v58; /*0x620435*/
              v30 = v50; /*0x620439*/
              v38 = ((a5 * (uint16_t)(v63 & g_CreditsScreenState) /*0x620440*/
                    + g_GameScreenConfig * (unsigned int)(uint16_t)(g_CreditsScreenState & v33)) >> 8)
                  | v37;
              v31 = v52; /*0x620442*/
              v10[v52] = v38; /*0x620446*/
              v28 = v54; /*0x62044a*/
            }
            if ( v30 > 0 ) /*0x620450*/
            {
              v10 = (int16_t *)((char *)v10 + v48); /*0x620456*/
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
    result = (*(int (**)(int))(*(unsigned int *)a1 + 96))(a1); /*0x620311*/
    (*((unsigned char *)&(result))) = 1; /*0x620314*/
  }
  else
  {
    (*((unsigned char *)&(result))) = 0; /*0x6205bc*/
  }
  return result; /*0x6200e3*/
}
}  // G42.18 ns repair
// 0x6208F0
namespace gamemd {
int Dialog_DrawGradient(int * a1, int * a2, int a3, int a4)
{
  int v4; // ebp
  int v7; // edx
  int v8; // eax
  int v9; // edx
  int v10; // ebx
  int v11; // ecx
  int result; // eax
  int v13; // edx
  int v14; // edi
  int v15; // ebx
  int v16; // edx
  int v17; // ebx
  int v18; // edx
  int v19; // edx
  int v20; // edx
  int v21; // eax
  int64_t v22; // rax
  int v23; // ebx
  int v24; // edx
  int v25; // edx
  bool v26; // zf
  int v27; // [esp+40h] [ebp-8Ch]
  int v28; // [esp+44h] [ebp-88h]
  int v29; // [esp+48h] [ebp-84h]
  int v30; // [esp+4Ch] [ebp-80h]
  int *v31; // [esp+50h] [ebp-7Ch]
  int *v32; // [esp+54h] [ebp-78h]
  int v33; // [esp+58h] [ebp-74h] BYREF
  int v34; // [esp+5Ch] [ebp-70h] BYREF
  int v35; // [esp+60h] [ebp-6Ch]
  int v36; // [esp+64h] [ebp-68h]
  unsigned int v37[2]; // [esp+68h] [ebp-64h] BYREF
  int v38; // [esp+70h] [ebp-5Ch]
  int v39; // [esp+74h] [ebp-58h]
  int v40; // [esp+78h] [ebp-54h]
  int v41; // [esp+7Ch] [ebp-50h]
  int v42; // [esp+80h] [ebp-4Ch]
  unsigned int v43[2]; // [esp+84h] [ebp-48h] BYREF
  unsigned int v44[2]; // [esp+8Ch] [ebp-40h] BYREF
  unsigned int v45[2]; // [esp+94h] [ebp-38h] BYREF
  unsigned int v46[2]; // [esp+9Ch] [ebp-30h] BYREF
  unsigned int v47[2]; // [esp+A4h] [ebp-28h] BYREF
  unsigned int v48[2]; // [esp+ACh] [ebp-20h] BYREF
  unsigned int v49[2]; // [esp+B4h] [ebp-18h] BYREF
  unsigned int v50[2]; // [esp+BCh] [ebp-10h] BYREF
  unsigned int v51[2]; // [esp+C4h] [ebp-8h] BYREF

  v4 = a4; /*0x6208f8*/
  if ( a4 == -1 && dword_AC4624 != -1 ) /*0x620911*/
    v4 = ((int)(uint8_t)dword_AC4624 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x62095c*/
       | ((((unsigned char *)&(dword_AC4624))[1]) >> g_BitMask_Blue << g_BitMask_Green)
       | ((((unsigned char *)&(dword_AC4624))[2]) >> g_BitMask_Red << g_BitShift_Blue);
  v7 = dword_AC1B94; /*0x620963*/
  v29 = dword_AC1B98; /*0x62096c*/
  v30 = dword_AC1B94; /*0x620970*/
  if ( dword_AC1B98 == -1 ) /*0x620974*/
  {
    v33 = -1; /*0x620976*/
  }
  else
  {
    v33 = ((int)(uint8_t)dword_AC1B98 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x6209bf*/
        | ((((unsigned char *)&(dword_AC1B98))[1]) >> g_BitMask_Blue << g_BitMask_Green)
        | ((((unsigned char *)&(dword_AC1B98))[2]) >> g_BitMask_Red << g_BitShift_Blue);
    v7 = dword_AC1B94; /*0x6209c3*/
  }
  if ( v7 == -1 ) /*0x6209ca*/
    v34 = -1; /*0x6209cc*/
  else
    v34 = ((int)(uint8_t)v7 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x620a16*/
        | ((((unsigned char *)&(v7))[1]) >> g_BitMask_Blue << g_BitMask_Green)
        | ((((unsigned char *)&(dword_AC1B94))[2]) >> g_BitMask_Red << g_BitShift_Blue);
  v8 = *a2; /*0x620a1d*/
  v9 = a2[1]; /*0x620a1f*/
  v10 = a2[2]; /*0x620a22*/
  v39 = a2[3]; /*0x620a25*/
  v11 = a3; /*0x620a29*/
  result = v8 - a3; /*0x620a30*/
  v13 = v9 - a3; /*0x620a32*/
  v38 = 2 * a3 + v10; /*0x620a39*/
  v39 += 2 * a3; /*0x620a45*/
  if ( a3 > 0 ) /*0x620a49*/
  {
    v14 = result; /*0x620a53*/
    v31 = &v33; /*0x620a55*/
    v36 = a3; /*0x620a5d*/
    v15 = v39 + v13 - 1; /*0x620a61*/
    v16 = v13 - result; /*0x620a65*/
    v27 = v15; /*0x620a67*/
    v35 = v16; /*0x620a6f*/
    v28 = v38 + result - 1; /*0x620a77*/
    v32 = &v34; /*0x620a7f*/
    while ( 1 ) /*0x620a90*/
    {
      if ( v11 == 2 ) /*0x620a93*/
        v4 = *v31; /*0x620a99*/
      v17 = v16 + v14; /*0x620aa0*/
      v18 = *a1; /*0x620aa3*/
      v41 = v28 - 1; /*0x620aaf*/
      v48[0] = v28 - 1; /*0x620ab3*/
      v48[1] = v17; /*0x620ac1*/
      v51[0] = v14; /*0x620acc*/
      v51[1] = v17; /*0x620ad3*/
      (*(void (**)(int *, unsigned int *, unsigned int *, int))(v18 + 48))(a1, v51, v48, v4); /*0x620ada*/
      v46[1] = v17 + 1; /*0x620ae8*/
      v43[1] = v27; /*0x620af1*/
      v19 = *a1; /*0x620af5*/
      v43[0] = v14; /*0x620afb*/
      v46[0] = v14; /*0x620aff*/
      (*(void (**)(int *, unsigned int *, unsigned int *, int))(v19 + 48))(a1, v46, v43, v4); /*0x620b03*/
      if ( a3 == 2 ) /*0x620b0e*/
        v4 = *v32; /*0x620b14*/
      v20 = *a1; /*0x620b1a*/
      v50[0] = v28; /*0x620b1c*/
      v50[1] = v27; /*0x620b27*/
      v44[1] = v27; /*0x620b2e*/
      v44[0] = v14; /*0x620b42*/
      (*(void (**)(int *, unsigned int *, unsigned int *, int))(v20 + 48))(a1, v44, v50, v4); /*0x620b46*/
      v45[0] = v28; /*0x620b51*/
      v47[0] = v28; /*0x620b55*/
      v21 = *a1; /*0x620b59*/
      v40 = v27 - 1; /*0x620b5e*/
      v45[1] = v27 - 1; /*0x620b62*/
      v47[1] = v17; /*0x620b73*/
      (*(void (**)(int *, unsigned int *, unsigned int *, int))(v21 + 48))(a1, v47, v45, v4); /*0x620b7a*/
      if ( a3 == 2 ) /*0x620b85*/
      {
        v22 = (v29 & 0xFF00) + (v30 & 0xFF00); /*0x620ba8*/
        v23 = (uint8_t)(((uint8_t)v29 + (uint8_t)v30) / 2) /*0x620beb*/
            + ((((v29 & 0xFF0000) + (v30 & 0xFF0000)) / 2) & 0xFF0000)
            + ((((int)v22 - (*(((unsigned int *)&(v22)) + 1))) >> 1) & 0xFF00);
        v42 = v23; /*0x620bf0*/
        if ( v23 == -1 ) /*0x620bf4*/
          v4 = -1; /*0x620bf6*/
        else
          v4 = ((int)(uint8_t)v23 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x620c3e*/
             | ((((unsigned char *)&(v23))[1]) >> g_BitMask_Blue << g_BitMask_Green)
             | ((((unsigned char *)&(v42))[2]) >> g_BitMask_Red << g_BitShift_Blue);
        v24 = *a1; /*0x620c48*/
        v49[0] = v28; /*0x620c4a*/
        v49[1] = v35 + v14; /*0x620c55*/
        (*(void (**)(int *, unsigned int *, int))(v24 + 36))(a1, v49, v4); /*0x620c66*/
        v25 = *a1; /*0x620c69*/
        v37[1] = v27; /*0x620c74*/
        v37[0] = v14; /*0x620c7b*/
        (*(void (**)(int *, unsigned int *, int))(v25 + 36))(a1, v37, v4); /*0x620c7f*/
      }
      ++v14; /*0x620c9b*/
      --v32; /*0x620c9c*/
      result = v36 - 1; /*0x620ca4*/
      v26 = v36 == 1; /*0x620ca4*/
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
// 0x620CD0
namespace gamemd {
int ComputeHashModPrime(int * a1, int * a2, int a3)
{
  int v5; // ecx
  int v6; // edx
  int v7; // ecx
  int v8; // edx
  int v9; // ebx
  int v10; // ebp
  int result; // eax
  int v12; // edi
  int v13; // ecx
  int v14; // edx
  int v15; // eax
  int v16; // edx
  int v17; // eax
  int v18; // edx
  bool v19; // cc
  int v20; // [esp+30h] [ebp-68h]
  int v21; // [esp+34h] [ebp-64h]
  int v22; // [esp+38h] [ebp-60h]
  int i; // [esp+3Ch] [ebp-5Ch]
  int v24; // [esp+40h] [ebp-58h]
  int v25; // [esp+44h] [ebp-54h]
  unsigned int v26[2]; // [esp+48h] [ebp-50h] BYREF
  unsigned int v27[2]; // [esp+50h] [ebp-48h] BYREF
  unsigned int v28[2]; // [esp+58h] [ebp-40h] BYREF
  unsigned int v29[2]; // [esp+60h] [ebp-38h] BYREF
  unsigned int v30[2]; // [esp+68h] [ebp-30h] BYREF
  unsigned int v31[2]; // [esp+70h] [ebp-28h] BYREF
  unsigned int v32[2]; // [esp+78h] [ebp-20h] BYREF
  unsigned int v33[2]; // [esp+80h] [ebp-18h] BYREF
  int v34; // [esp+88h] [ebp-10h]
  int v35; // [esp+8Ch] [ebp-Ch]
  int v36; // [esp+90h] [ebp-8h]
  int v37; // [esp+94h] [ebp-4h]

  v5 = *a2; /*0x620cdb*/
  v6 = a2[1]; /*0x620cdd*/
  v34 = v5; /*0x620ce6*/
  v7 = a2[2]; /*0x620cea*/
  v35 = v6; /*0x620ced*/
  v8 = a2[3]; /*0x620cf1*/
  v36 = v7; /*0x620cf9*/
  v37 = v8; /*0x620d04*/
  v9 = (39 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x620d3e*/
     | (248 >> g_BitMask_Blue << g_BitMask_Green)
     | (116 >> g_BitMask_Red << g_BitShift_Blue);
  v10 = (19 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x620d7d*/
      | (123 >> g_BitMask_Blue << g_BitMask_Green)
      | (57 >> g_BitMask_Red << g_BitShift_Blue);
  v24 = (30 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x620dbf*/
      | (186 >> g_BitMask_Blue << g_BitMask_Green)
      | (87 >> g_BitMask_Red << g_BitShift_Blue);
  v22 = 0; /*0x620dfb*/
  v25 = (24 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x620e0d*/
      | (153 >> g_BitMask_Blue << g_BitMask_Green)
      | (71 >> g_BitMask_Red << g_BitShift_Blue);
  result = a3; /*0x620e11*/
  v12 = -1 - a3 + v34; /*0x620e19*/
  v35 += -1 - a3; /*0x620e25*/
  v13 = 2 * a3 + 2; /*0x620e29*/
  v36 += v13; /*0x620e2f*/
  v14 = v13 + v8; /*0x620e37*/
  if ( a3 > 0 ) /*0x620e3b*/
  {
    v21 = v36 + v12 - 1; /*0x620e4d*/
    v15 = v35 - v12; /*0x620e55*/
    v20 = v14 + v35 - 1; /*0x620e57*/
    for ( i = v35 - v12; ; v15 = i ) /*0x620e5b*/
    {
      v16 = *a1; /*0x620e69*/
      v26[1] = v12 + v15; /*0x620e6e*/
      v27[1] = v12 + v15; /*0x620e72*/
      v26[0] = v21 - 1; /*0x620e76*/
      v27[0] = v12; /*0x620e87*/
      (*(void (**)(int *, unsigned int *, unsigned int *, int))(v16 + 48))(a1, v27, v26, v9); /*0x620e8b*/
      v28[0] = v21; /*0x620e9a*/
      v28[1] = v20; /*0x620e9e*/
      v29[1] = v20; /*0x620ea2*/
      v17 = *a1; /*0x620ea6*/
      v29[0] = v12; /*0x620eb1*/
      (*(void (**)(int *, unsigned int *, unsigned int *, int))(v17 + 48))(a1, v29, v28, v10); /*0x620eb5*/
      v30[1] = v20; /*0x620ec4*/
      v30[0] = v12; /*0x620ec8*/
      v31[0] = v12; /*0x620ecc*/
      v18 = *a1; /*0x620ed4*/
      v31[1] = v35 + v22 + 1; /*0x620ed6*/
      (*(void (**)(int *, unsigned int *, unsigned int *, int))(v18 + 48))(a1, v31, v30, v24); /*0x620eeb*/
      v32[1] = v20 - 1; /*0x620efb*/
      v32[0] = v21; /*0x620f03*/
      v33[0] = v21; /*0x620f07*/
      v33[1] = i + v12; /*0x620f17*/
      (*(void (**)(int *, unsigned int *, unsigned int *, int))(*a1 + 48))(a1, v33, v32, v25); /*0x620f21*/
      result = v22 + 1; /*0x620f30*/
      ++v12; /*0x620f31*/
      --v20; /*0x620f33*/
      v19 = ++v22 < a3; /*0x620f3c*/
      --v21; /*0x620f42*/
      if ( !v19 ) /*0x620f46*/
        break; /*0x620f46*/
    }
  }
  return result; /*0x620f4c*/
}
}
// 0x621040
namespace gamemd {
int PrintFontLayout(AbstractClass * aP0, AbstractClass * aP1, AbstractClass, void * a1, void * a2, void * a3, void * a4, void * a5, void * a6, void * a7, void * a8, void * a9, void * a10)
{
  int *v10; // esi
  int v11; // ebp
  int v12; // edi
  int v13; // ebx
  int v14; // ebp
  Char *v15; // ebx
  int16_t v17; // [esp+10h] [ebp-10h]
  void * v18;

  v10 = (int *)((int)(a3));
  v11 = a3[3]; /*0x6210a1*/
  v12 = a3[2] - *(unsigned int *)(a3); /*0x6210ab*/
  v18 = (void *)((int)(*(unsigned int *)(a3))); /*0x6210ad*/
  v13 = ((uint8_t)yTop >> g_BitShift_Green_0 << g_BitShift_Red) /*0x6210b1*/
      | ((((unsigned char *)&(yTop))[2]) >> g_BitMask_Red << g_BitShift_Blue)
      | ((((unsigned char *)&(yTop))[1]) >> g_BitMask_Blue << g_BitMask_Green);
  yTop = (int)(a3[1]);
  v14 = v11 - yTop; /*0x6210ba*/
  v17 = v13; /*0x6210c0*/
  v15 = (Char *)a4; /*0x6210c4*/
  if ( ((unsigned int)(a6)& 4) != 0 ) /*0x6210ca*/
  {
    Text::Layout(a4, a2, (int *)&a4, &a3, v12); /*0x6210da*/
    yTop += (v14 - (int)a3) / 2; /*0x6210f2*/
  }
  Char::Swap(v15, 1); /*0x6210fa*/
  ((TextGroup *)((TextGroup *)v15))->SetRect((unsigned int *)(v10)); /*0x621102*/
  ((Property *)((Property *)v15))->Set(v17); /*0x62110e*/
  Font::Print((gamemd::AbstractClass *)((int)v15), a1, a2, v18, yTop, v12, v14, a6, a9, a10); /*0x62113f*/
  return 0; /*0x621146*/
}
}
// 0x621150
namespace gamemd {  // G42.18 ns repair
double sub_621150(int a1)
{
  double result; // st7
  int *v2; // edx
  int v3; // esi
  int v4; // eax
  double v5; // st7
  unsigned int v6[3]; // [esp+Ch] [ebp-Ch] BYREF

  result = (int *)(1.0);
  v6[0] = 43; /*0x62115b*/
  v6[1] = 128; /*0x621163*/
  v6[2] = 213; /*0x62116b*/
  v2 = (int *)(v6); /*0x621173*/
  v3 = 3; /*0x621177*/
  do /*0x6211c6*/
  {
    v4 = *v2; /*0x62117c*/
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
}  // G42.18 ns repair
// 0x6211D0
namespace gamemd {
int DrawTextRendererTextAligned(int ecx0, unsigned int * a1, ObjectClass * aP2, unsigned short * a3, int a5, int a6, int arg10, int * a7, int a9)
{
  Text *v9; // edi
  int v12; // ebp
  int v13; // esi
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // ebx
  int v18; // [esp+4h] [ebp-20h] BYREF
  int v19; // [esp+8h] [ebp-1Ch] BYREF
  int v20; // [esp+Ch] [ebp-18h]
  int v21; // [esp+10h] [ebp-14h]
  unsigned int v22[4]; // [esp+14h] [ebp-10h] BYREF
  int yTopa; // [esp+28h] [ebp+4h]

  v9 = (gamemd::Text *)(a1); /*0x6211dc*/
  if ( !((unsigned int *)&stru_A8EB00)[412] ) /*0x6211e0*/
    return 0; /*0x6211e8*/
  if ( !a7 ) /*0x6211f1*/
    a7 = (int *)DSurface_Alternate; /*0x6211f9*/
  v12 = (int)(*aP2); /*0x621234*/
  v21 = (int)(aP2[3]); /*0x621255*/
  v13 = ((uint8_t)ecx0 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x621259*/
      | ((((unsigned char *)&(ecx0))[1]) >> g_BitMask_Blue << g_BitMask_Green)
      | ((((unsigned char *)&(ecx0))[2]) >> g_BitMask_Red << g_BitShift_Blue);
  yTopa = (int)(aP2[1]); /*0x62125e*/
  v14 = (int)(aP2[2]); /*0x621262*/
  v20 = v14; /*0x621267*/
  if ( !a1 ) /*0x62126b*/
    v9 = (gamemd::Text *)(g_FogOfWarState); /*0x62126d*/
  Text::Layout(v9, a3, &v18, &v19, v14); /*0x621285*/
  switch ( a6 ) /*0x621291*/
  {
    case 1: /*0x621291*/
      v12 += (v20 - v18 + 1) / 2; /*0x6212a3*/
      break;
    case 2: /*0x621291*/
      v12 += (v18 + 1) / -2; /*0x6212ba*/
      break;
    case 3: /*0x621291*/
      v12 += -1 - v18; /*0x6212cc*/
      break;
    case 4: /*0x621291*/
      v12 = v20 - v18 + v12 - 1; /*0x6212df*/
      break;
  }
  switch ( arg10 ) /*0x6212ea*/
  {
    case 1: /*0x6212ea*/
      v15 = (v21 - v19 + 1) / 2; /*0x6212fa*/
  LABEL_21:
      yTopa += v15; /*0x621321*/
      break; /*0x621321*/
    case 2: /*0x6212ea*/
      v15 = (v19 + 1) / -2; /*0x62130f*/
      goto LABEL_21; /*0x621311*/
    case 3: /*0x6212ea*/
      v15 = -1 - v19; /*0x62131f*/
      goto LABEL_21; /*0x62131f*/
  }
  v16 = (int)(*aP2); /*0x621325*/
  v17 = (int)(aP2[1]); /*0x621327*/
  v22[0] = v16; /*0x621332*/
  v22[1] = v17; /*0x621336*/
  v22[2] = v20 + v16; /*0x621342*/
  v22[3] = v21 + v17; /*0x621346*/
  Char::Swap((Char *)v9, 1); /*0x62134a*/
  ((TextGroup *)((TextGroup *)v9))->SetRect(v22); /*0x621356*/
  ((Property *)((Property *)v9))->Set(v13); /*0x62135e*/
  return FontRenderer::DrawText(v9, a7, a3, v12, yTopa, a5, a9) - v12; /*0x6211e4*/
}
}
// 0x6214B0
namespace gamemd {
int SetupDialogRenderBuffer(int *a1, HWND a2, uint8_t a3)
{
  int *v3; // ebx
  int v4; // edi
  unsigned int *v5; // ebp
  int v6; // eax
  unsigned int *v7; // esi
  int v8; // eax
  int v9; // ecx
  HWND Parent; // eax
  unsigned int *v11; // edx
  int v12; // edi
  int16_t *v13; // edi
  int v14; // ebx
  int v15; // ebp
  int v16; // edx
  int v17; // ecx
  int16_t v18; // ax
  int v19; // ebp
  int v20; // ecx
  int v21; // eax
  HWND hWnd; // [esp+14h] [ebp-74h] BYREF
  HWND v24; // [esp+18h] [ebp-70h] BYREF
  int *v25; // [esp+1Ch] [ebp-6Ch]
  int v26; // [esp+20h] [ebp-68h]
  int v27; // [esp+24h] [ebp-64h]
  struct tagRECT v28; // [esp+28h] [ebp-60h] BYREF
  unsigned int v29[4]; // [esp+38h] [ebp-50h] BYREF
  struct tagRECT Rect; // [esp+48h] [ebp-40h] BYREF
  LONG left; // [esp+58h] [ebp-30h] BYREF
  LONG top; // [esp+5Ch] [ebp-2Ch]
  int v33; // [esp+60h] [ebp-28h]
  int v34; // [esp+64h] [ebp-24h]
  unsigned int v35[4]; // [esp+68h] [ebp-20h] BYREF
  struct tagRECT v36; // [esp+78h] [ebp-10h] BYREF

  v3 = a1; /*0x6214bc*/
  v4 = 0; /*0x6214be*/
  v5 = 0; /*0x6214c0*/
  hWnd = a2; /*0x6214c4*/
  v25 = a1; /*0x6214c8*/
  if ( dword_AC1B04 ) /*0x6214cc*/
  {
    v6 = *((unsigned int *)dword_AC1B00 + (dword_AC1B18(&hWnd) & ((1 << dword_AC1B0C) - 1))); /*0x6214ed*/
    a2 = hWnd; /*0x6214f0*/
    if ( v6 ) /*0x6214f6*/
    {
      while ( *(HWND *)v6 != hWnd ) /*0x6214fa*/
      {
        v6 = *(unsigned int *)(v6 + 516); /*0x6214fc*/
        if ( !v6 ) /*0x621504*/
          goto LABEL_7; /*0x621504*/
      }
      v4 = v6 + 4; /*0x62150c*/
    }
  }
  LABEL_7:
  GetClientRect(a2, &Rect); /*0x62150f*/
  ScreenDialogToClient(hWnd, &v28); /*0x621523*/
  v7 = *(unsigned int **)(v4 + 16); /*0x621528*/
  if ( !v7 ) /*0x62152d*/
  {
    v7 = (unsigned int *)(operator new(0x20u));
    if ( v7 ) /*0x621543*/
    {
      v8 = (unsigned int)(Rect.bottom + 1);
      v9 = Rect.right + 1; /*0x62154e*/
      v7[2] = Rect.bottom + 1; /*0x62154f*/
      v7[1] = v9; /*0x621557*/
      v7[3] = 0; /*0x62155f*/
      *v7 = (unsigned int)(&XSurface_Vtable); /*0x621562*/
      v7[4] = 2; /*0x621568*/
      Buffer::Init(v7 + 5, 0, 2 * v9 * v8); /*0x62156f*/
      *v7 = (unsigned int)(&BSurface_Vtable); /*0x621574*/
    }
    else
    {
      v7 = 0; /*0x62157e*/
    }
    *(unsigned int *)(v4 + 16) = (unsigned int)(v7); /*0x621580*/
    v29[0] = 0; /*0x621591*/
    v29[1] = 0; /*0x621595*/
    ++g_GameScreenState; /*0x6215a1*/
    v29[2] = Rect.right + 1; /*0x6215a7*/
    v29[3] = Rect.bottom + 1; /*0x6215ab*/
    Parent = GetParent(hWnd); /*0x6215af*/
    v24 = Parent; /*0x6215bd*/
    if ( dword_AC1B04 ) /*0x6215c1*/
    {
      v11 = (unsigned int *)*((unsigned int *)dword_AC1B00 + (dword_AC1B18(&v24) & ((1 << dword_AC1B0C) - 1))); /*0x6215e2*/
      Parent = v24; /*0x6215e5*/
      if ( v11 ) /*0x6215eb*/
      {
        while ( (HWND)*v11 != v24 ) /*0x6215ef*/
        {
          v11 = (unsigned int *)v11[129]; /*0x6215f1*/
          if ( !v11 ) /*0x6215f9*/
            goto LABEL_17; /*0x6215f9*/
        }
        v5 = v11 + 1; /*0x621601*/
      }
    }
  LABEL_17:
    v12 = v5[4]; /*0x621604*/
    if ( v12 ) /*0x621609*/
    {
      ScreenDialogToClient(Parent, &v36); /*0x621611*/
      left = v28.left - v36.left; /*0x621628*/
      top = v28.top - v36.top; /*0x621636*/
      v34 = v28.bottom - v28.top + 1; /*0x62164c*/
      v33 = v28.right - v28.left + 1; /*0x621655*/
      (*(void (**)(unsigned int *, unsigned int *, int, LONG *, unsigned int, int))(*v7 + 8))(v7, v29, v12, &left, 0, 1); /*0x62165d*/
    }
    else
    {
      left = v28.left; /*0x621670*/
      top = v28.top; /*0x62167d*/
      v33 = v28.right - v28.left + 1; /*0x621682*/
      v34 = v28.bottom - v28.top + 1; /*0x621688*/
      if ( g_DSurface_Primary ) /*0x62168c*/
        (*(void (**)(unsigned int *, unsigned int *, int, LONG *, unsigned int, int))(*v7 + 8))( /*0x6216a1*/
          v7,
          v29,
          g_DSurface_Primary,
          &left,
          0,
          1);
    }
    v13 = (int16_t *)(*(int (**)(unsigned int *, unsigned int, unsigned int))(*v7 + 92))(v7, 0, 0); /*0x6216b1*/
    if ( v13 ) /*0x6216b5*/
    {
      v14 = 0; /*0x6216bf*/
      v15 = (*(int (**)(unsigned int *))(*v7 + 128))(v7); /*0x6216cb*/
      if ( (*(int (**)(unsigned int *))(*v7 + 124))(v7) * v15 > 0 ) /*0x6216d5*/
      {
        v16 = a3; /*0x6216e7*/
        v17 = 255 - a3; /*0x6216ed*/
        v27 = a3; /*0x6216ef*/
        v26 = v17; /*0x6216f3*/
        while ( 1 ) /*0x621701*/
        {
          v18 = *v13; /*0x621701*/
          g_GameScreenFlags = v16; /*0x621704*/
          g_GameScreenConfig = v17; /*0x62171d*/
          *v13++ = ((v17 * (unsigned int)(uint16_t)(v18 & g_CreditsScreenState)) >> 8) /*0x621763*/
                 | g_ScreenSaverState & ((v17 * (unsigned int)(uint16_t)(v18 & g_ScreenSaverState)) >> 8)
                 | (*(((unsigned short *)&(g_ScreenSaverState)) + 1))
                 & ((v17 * (unsigned int)(uint16_t)(v18 & (*(((unsigned short *)&(g_ScreenSaverState)) + 1)))) >> 8);
          ++v14; /*0x621769*/
          v19 = (*(int (**)(unsigned int *))(*v7 + 128))(v7); /*0x621774*/
          if ( v14 >= (*(int (**)(unsigned int *))(*v7 + 124))(v7) * v19 ) /*0x62177e*/
            break; /*0x62177e*/
          v17 = v26; /*0x6216f9*/
          v16 = v27; /*0x6216fd*/
        }
      }
      v3 = v25; /*0x621786*/
      (*(void (**)(unsigned int *))(*v7 + 96))(v7); /*0x62178c*/
    }
  }
  v20 = v3[1]; /*0x621792*/
  v21 = *v3; /*0x621799*/
  v35[2] = v3[2]; /*0x62179b*/
  v35[3] = v3[3]; /*0x6217a2*/
  v35[1] = v20 - v28.top; /*0x6217ae*/
  v35[0] = v21 - v28.left; /*0x6217c0*/
  return (*(int (**)(int, int *, unsigned int *, unsigned int *, unsigned int, int))(*(unsigned int *)DSurface_Alternate + 8))( /*0x6217cc*/
           DSurface_Alternate,
           v3,
           v7,
           v35,
           0,
           1);
}
}
// 0x6223C0
namespace gamemd {
unsigned int * E4Recv_6223C0::DestroyDialog(void *a1_1)
{

  unsigned int *result; // eax
  unsigned int *v2; // esi
  void (***v3)(unsigned int, int); // ecx
  ObjectClass *v4; // [esp+4h] [ebp-4h] BYREF

  result = *(unsigned int **)&g_DialogHashMap_Count; /*0x6223c1*/
  v4 = (gamemd::ObjectClass *)(a1_1); /*0x6223c9*/
  if ( *(unsigned int *)&g_DialogHashMap_Count ) /*0x6223cd*/
  {
    result = *(unsigned int **)(*(unsigned int *)&g_DialogHashMap_Base /*0x6223ee*/
                        + 4
                        * ((*(int (**)(ObjectClass **))&g_DialogHashMap_Hasher)(&v4)
                         & ((1 << g_DialogHashMap_Buckets) - 1)));
    if ( result ) /*0x6223f3*/
    {
      while ( (ObjectClass *)*result != v4 ) /*0x6223fb*/
      {
        result = result->u32_204; /*0x6223fd*/
        if ( !result ) /*0x622405*/
          return result; /*0x622405*/
      }
      v2 = result + 1; /*0x62240e*/
      if ( result != (unsigned int *)-4 ) /*0x622413*/
      {
        v3 = (void (***)(unsigned int, int))result[5]; /*0x622415*/
        if ( v3 ) /*0x62241a*/
        {
          (**v3)(v3, 1); /*0x622420*/
          v2[4] = 0; /*0x622422*/
          return (unsigned int *)--g_GameScreenState; /*0x62242e*/
        }
      }
    }
  }
  return result; /*0x622407*/

}
}
// 0x622470
namespace gamemd {
int AddDynamicVector(HWND a1, int * a2)
{
  int v3; // ebp
  int v4; // eax
  unsigned int v5; // edi
  void *v6; // edx
  const void *v7; // esi
  int v8; // eax
  unsigned int v9; // esi
  void *v10; // ebp
  const void *v11; // esi
  unsigned int *v12; // ebp
  int v14; // [esp+4h] [ebp-8h]
  int v15; // [esp+8h] [ebp-4h]
  LPARAM v16; // [esp+14h] [ebp+8h]
  LPARAM v17; // [esp+14h] [ebp+8h]

  if ( !a2 ) /*0x62247a*/
    return 1; /*0x6225d1*/
  v3 = *a2; /*0x622484*/
  v15 = *a2; /*0x62248a*/
  if ( *a2 >= a2[1] ) /*0x62248e*/
  {
    v4 = 2 * v3; /*0x622490*/
    v16 = 2 * v3; /*0x622497*/
    if ( 2 * v3 < 10 ) /*0x62249b*/
    {
      v16 = 10; /*0x62249d*/
      v4 = 10; /*0x6224a5*/
    }
    v5 = 4 * v4; /*0x6224a9*/
    v6 = operator new(4 * v4); /*0x6224b8*/
    memset(v6, 0, v5); /*0x6224c6*/
    v14 = (int)v6; /*0x6224ca*/
    v7 = (const void *)a2[2]; /*0x6224d3*/
    if ( v7 ) /*0x6224d8*/
      memcpy(v6, v7, 4 * *a2); /*0x6224e6*/
    operator delete((void *)((void *)a2[2])); /*0x6224f3*/
    a2[2] = v14; /*0x622503*/
    a2[1] = v16; /*0x622506*/
  }
  if ( *a2 >= a2[1] ) /*0x622510*/
  {
    v8 = 2 * *a2; /*0x622512*/
    v17 = v8; /*0x622517*/
    if ( v8 < 10 ) /*0x62251b*/
    {
      v17 = 10; /*0x62251d*/
      v8 = 10; /*0x622525*/
    }
    v9 = 4 * v8; /*0x622529*/
    v10 = operator new(4 * v8); /*0x622538*/
    memset(v10, 0, v9); /*0x622546*/
    v11 = (const void *)a2[2]; /*0x62254f*/
    if ( v11 ) /*0x622554*/
      memcpy(v10, v11, 4 * *a2); /*0x622562*/
    operator delete((void *)((void *)a2[2])); /*0x62256f*/
    a2[2] = (int)v10; /*0x622578*/
    v3 = v15; /*0x62257b*/
    a2[1] = v17; /*0x622582*/
  }
  if ( v3 < *a2 ) /*0x622589*/
    memcpy((void *)(a2[2] + 4 * v3 + 4), (const void *)(a2[2] + 4 * v3), 4 * (*a2 + 0x3FFFFFFF * v3)); /*0x6225a4*/
  v12 = (unsigned int *)(a2[2] + 4 * v3); /*0x6225af*/
  if ( v12 ) /*0x6225b4*/
    *v12 = (unsigned int)(a1); /*0x6225ba*/
  ++*a2; /*0x6225c2*/
  return 1; /*0x6225ca*/
}
// 0x622650
namespace gamemd {
int sub_622650(unsigned short a1, INT_PTR (__stdcall *a2)(HWND, UINT, WPARAM, LPARAM), LPARAM)  /*W20L4: raw fn_62.c:2008 __fastcall(ushort, INT_PTR (__stdcall*)(HWND,UINT,WPARAM,LPARAM), LPARAM)*/
{
  int v4; // ebp
  int result; // eax
  HWND *v6; // edi
  int *v7; // ebx
  HINSTANCE v8; // eax
  HWND DialogIndirectParamA; // eax
  HWND v10; // esi
  const DLGTEMPLATE *v11; // [esp-10h] [ebp-2Ch]
  HWND v12; // [esp-Ch] [ebp-28h]
  LPARAM dwInitParam[2]; // [esp+14h] [ebp-8h] BYREF

  v4 = a1; /*0x62265e*/
  result = FindResource(a1, 5); /*0x62266c*/
  if ( result ) /*0x622673*/
  {
    v6 = (HWND *)((HINSTANCE)((HWND *)(8 * g_DialogTrackingList + 12004648)));
    v7 = (int *)(8 * g_DialogTrackingList + 12004652); /*0x622697*/
    (*((unsigned short *)&(dwInitParam[0]))) = a1; /*0x62269f*/
    ++g_DialogTrackingList; /*0x6226a4*/
    dwInitParam[1] = a3; /*0x6226ae*/
    v12 = (HWND)(g_hWnd); /*0x6226b7*/
    v11 = (const DLGTEMPLATE *)result; /*0x6226b8*/
    v8 = (HINSTANCE)(g_hInstance); /*0x6226b9*/
    *v6 = 0; /*0x6226be*/
    *v7 = 0; /*0x6226c5*/
    DialogIndirectParamA = CreateDialogIndirectParamA(v8, v11, v12, a2, (LPARAM)dwInitParam); /*0x6226cb*/
    v10 = DialogIndirectParamA; /*0x6226d1*/
    if ( DialogIndirectParamA ) /*0x6226d5*/
    {
      *v6 = DialogIndirectParamA; /*0x6226ee*/
      *v7 = v4; /*0x6226f2*/
      ((DialogQueue *)(DialogIndirectParamA))->PushEntry(); /*0x6226f4*/
      hWnd = v10; /*0x6226f9*/
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
}
// 0x622820
namespace gamemd {
int SetupDialog(Dialog *hWnd, int a2)
{
  int v4; // eax
  bool v5; // al
  int v6; // eax
  bool v7; // al
  int v8; // eax
  bool v9; // al
  int v10; // eax
  bool v11; // al
  int v12; // eax
  int v14; // [esp+10h] [ebp-Ch] BYREF
  LPARAM lParam[2]; // [esp+14h] [ebp-8h] BYREF

  DialogClass::RegisterWinClasses(); /*0x62282b*/
  dword_AC48A8 = (int)hWnd; /*0x622836*/
  EnumChildWindows((HWND)hWnd, Dialog::InitWindow, 1); /*0x622844*/
  Dialog::InitWindow((HWND)hWnd, 1); /*0x622849*/
  EnumChildWindows((HWND)hWnd, Dialog::SubclassEditControl, 1); /*0x622856*/
  EnumChildWindows((HWND)hWnd, Dialog::InitializeControls, 0); /*0x622861*/
  Dialog::InitializeControls((HWND)hWnd, 0); /*0x622865*/
  EnumChildWindows((HWND)hWnd, Dialog::InitWindow, 0); /*0x622871*/
  Dialog::InitWindow((HWND)hWnd, 0); /*0x622875*/
  ((Dialog *)(hWnd))->GetField(); /*0x62287c*/
  lParam[0] = (LPARAM)hWnd; /*0x622890*/
  v14 = 0; /*0x622894*/
  HashTable::Get((HashTable *)&g_DialogHashMap_Base, lParam, &v14); /*0x622898*/
  if ( v14 ) /*0x6228a3*/
    *(unsigned int *)(v14 + 108) = a2; /*0x6228a5*/
  if ( !(uint8_t)SessionClass::GetGameSpeed((SessionClass *)&dword_A8B238) ) /*0x6228ad*/
    Control::CreateControlDialog((Control *)hWnd); /*0x6228b8*/
  lParam[0] = (LPARAM)hWnd; /*0x6228cc*/
  v14 = 0; /*0x6228d0*/
  HashTable::Get((HashTable *)&g_DialogHashMap_Base, lParam, &v14); /*0x6228d4*/
  if ( v14 ) /*0x6228df*/
  {
    v4 = *(unsigned int *)(v14 + 108); /*0x6228e1*/
    v5 = v4 == 188 /*0x622925*/
      || v4 == 189
      || v4 == 258
      || v4 == 194
      || v4 == 201
      || v4 == 3014
      || v4 == 261
      || v4 == 107
      || v4 == 275;
    *(unsigned char *)(v14 + 213) = v5; /*0x62292a*/
  }
  lParam[0] = (LPARAM)hWnd; /*0x62293f*/
  v14 = 0; /*0x622943*/
  HashTable::Get((HashTable *)&g_DialogHashMap_Base, lParam, &v14); /*0x622947*/
  if ( v14 ) /*0x622952*/
  {
    v6 = *(unsigned int *)(v14 + 108); /*0x622954*/
    v7 = v6 == 188 || v6 == 189 || v6 == 258 || v6 == 194 || v6 == 201 || v6 == 3014; /*0x622985*/
    *(unsigned char *)(v14 + 214) = v7; /*0x62298a*/
  }
  lParam[0] = (LPARAM)hWnd; /*0x62299f*/
  v14 = 0; /*0x6229a3*/
  HashTable::Get((HashTable *)&g_DialogHashMap_Base, lParam, &v14); /*0x6229a7*/
  if ( v14 ) /*0x6229b2*/
  {
    v8 = *(unsigned int *)(v14 + 108); /*0x6229b4*/
    v9 = v8 == 259 || v8 == 3015; /*0x6229c9*/
    *(unsigned char *)(v14 + 215) = v9; /*0x6229ce*/
  }
  lParam[0] = (LPARAM)hWnd; /*0x6229e3*/
  v14 = 0; /*0x6229e7*/
  HashTable::Get((HashTable *)&g_DialogHashMap_Base, lParam, &v14); /*0x6229eb*/
  if ( v14 ) /*0x6229f6*/
  {
    v10 = *(unsigned int *)(v14 + 108); /*0x6229f8*/
    v11 = v10 == 264 || v10 == 3014; /*0x622a0d*/
    *(unsigned char *)(v14 + 216) = v11; /*0x622a12*/
  }
  EnumChildWindows((HWND)hWnd, GadgetClass::FindByWindow, 0); /*0x622a1f*/
  if ( (uint8_t)((Control *)((Control *)hWnd))->CheckControlTypeDialog() ) /*0x622a23*/
  {
    lParam[0] = 640; /*0x622a3d*/
    lParam[1] = 480; /*0x622a4d*/
    MoveWindow((HWND)hWnd, 0, 0, (int)g_DisplayWidth, (int)*(&g_DisplayWidth + 1), 0); /*0x622a51*/
    dword_AC48A8 = (int)hWnd; /*0x622a5b*/
    EnumChildWindows((HWND)hWnd, (WNDENUMPROC)RepositionDialogControls, (LPARAM)lParam); /*0x622a68*/
  }
  else
  {
    lParam[0] = (LPARAM)hWnd; /*0x622a7e*/
    v14 = 0; /*0x622a82*/
    HashTable::Get((HashTable *)&g_DialogHashMap_Base, lParam, &v14); /*0x622a86*/
    if ( v14 ) /*0x622a91*/
    {
      v12 = *(unsigned int *)(v14 + 108); /*0x622a97*/
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
        *(unsigned int *)(v14 + 176) = 2; /*0x622b1f*/
      }
    }
  }
  EnumChildWindows((HWND)hWnd, Dialog::HandleTabKey, 0); /*0x622b30*/
  EnumChildWindows((HWND)hWnd, Dialog::DispatchEvent, 0); /*0x622b39*/
  return (int)(((Dialog *)(hWnd))->RestoreParent()); /*0x622b42*/
}
}
// 0x622B50
namespace gamemd {
CampaignScore * * BaseDialogProc(SkirmishDialog * aP0, unsigned int a2, int a3, unsigned int aP2)
{
  int result; // eax
  int v6; // eax
  int v7; // edi
  HWND DlgItem; // eax
  int v9; // edi
  int v10; // ebp
  unsigned int v11; // ebx
  HWND v12; // eax
  HWND v13; // ebx
  LPARAM v14; // ebp
  void (__stdcall *v15)(HWND, UINT, WPARAM, LPARAM); // edi
  LRESULT v16; // eax
  wchar_t *v17; // eax
  wchar_t *v18; // eax
  char *v19; // eax
  wchar_t *v20; // eax
  uint16_t v21; // bx
  void (__stdcall *v22)(HWND, WNDENUMPROC, LPARAM); // edi
  wchar_t *StringCSF; // [esp-4h] [ebp-44h]
  DeleteAndZero v24; // [esp+10h] [ebp-30h] BYREF
  DeleteAndZero v25; // [esp+1Ch] [ebp-24h] BYREF
  HWND v26[2]; // [esp+28h] [ebp-18h] BYREF
  struct tagRECT Rect; // [esp+30h] [ebp-10h] BYREF

  if ( a2 > 0x84 ) /*0x622b5f*/
  {
    if ( a2 > 0x497 ) /*0x622ea0*/
    {
      if ( a2 == 1260 ) /*0x6230be*/
        EnumChildWindows(hWnd, sub_60AA60, 0); /*0x6230c8*/
      return 0; /*0x6230c8*/
    }
    if ( a2 == 1175 ) /*0x622ea6*/
    {
      SendMessageA(hWnd, 0x4A9u, (WPARAM)hWnd, 1); /*0x6230a6*/
      return 0; /*0x6230b5*/
    }
    if ( a2 != 272 ) /*0x622eb2*/
    {
      if ( a2 > 0x131 && a2 <= 0x138 ) /*0x622ec6*/
        return (int)GetStockObject(4); /*0x622edb*/
      return 0; /*0x622ec6*/
    }
    ++*(unsigned int *)&((unsigned int *)&stru_A8EB00)[424]; /*0x622eed*/
    if ( *(unsigned int *)a4.__pad_0 ) /*0x622ef3*/
    {
      v21 = **(unsigned short **)a4.__pad_0; /*0x622efb*/
      DialogClass::RegisterWinClasses(); /*0x622efe*/
      v22 = (void (__stdcall *)(HWND, WNDENUMPROC, LPARAM))EnumChildWindows; /*0x622f03*/
      dword_AC48A8 = (int)hWnd; /*0x622f09*/
      EnumChildWindows(hWnd, Dialog::InitWindow, 1); /*0x622f17*/
      Dialog::InitWindow(hWnd, 1); /*0x622f1c*/
      EnumChildWindows(hWnd, Dialog::SubclassEditControl, 1); /*0x622f29*/
      EnumChildWindows(hWnd, Dialog::InitializeControls, 0); /*0x622f32*/
      Dialog::InitializeControls(hWnd, 0); /*0x622f36*/
      EnumChildWindows(hWnd, Dialog::InitWindow, 0); /*0x622f42*/
      Dialog::InitWindow(hWnd, 0); /*0x622f46*/
      ((Dialog *)((Dialog *)hWnd))->GetField(); /*0x622f4d*/
      UI_Helper_60D2C0((int)hWnd, v21); /*0x622f56*/
      if ( !(uint8_t)SessionClass::GetGameSpeed((SessionClass *)&dword_A8B238) ) /*0x622f60*/
        Control::CreateControlDialog((Control *)hWnd); /*0x622f6b*/
      UI_Helper_60CAF0((ObjectClass *)hWnd); /*0x622f72*/
      UI_Helper_60C930((ObjectClass *)hWnd); /*0x622f79*/
      UI_Helper_60CCC0((ObjectClass *)hWnd); /*0x622f80*/
      UI_Helper_60CDB0((ObjectClass *)hWnd); /*0x622f87*/
      EnumChildWindows(hWnd, GadgetClass::FindByWindow, 0); /*0x622f93*/
      if ( (uint8_t)((Control *)((Control *)hWnd))->CheckControlTypeDialog() ) /*0x622f97*/
      {
  LABEL_41:
        v26[0] = (HWND)640; /*0x622fa4*/
        v26[1] = (HWND)480; /*0x622fb4*/
        ResizeDialogAndEnum(hWnd, (LPARAM)v26); /*0x622fbe*/
  LABEL_48:
        v22(hWnd, Dialog::HandleTabKey, 0); /*0x623071*/
        v22(hWnd, Dialog::DispatchEvent, 0); /*0x623081*/
        ((Dialog *)((Dialog *)hWnd))->RestoreParent(); /*0x623085*/
        SetFocus(hWnd); /*0x62308b*/
        return 0; /*0x62309a*/
      }
    }
    else
    {
      InitializeDialogControls(hWnd, 0); /*0x622fcc*/
      ((Dialog *)((Dialog *)hWnd))->GetField(); /*0x622fd3*/
      v26[0] = hWnd; /*0x622fe7*/
      *(unsigned int *)a4.__pad_0 = 0; /*0x622feb*/
      HashTable::Get((HashTable *)&g_DialogHashMap_Base, v26, &a4); /*0x622fef*/
      if ( *(unsigned int *)a4.__pad_0 ) /*0x622ffa*/
        *(unsigned int *)(*(unsigned int *)a4.__pad_0 + 108) = 0; /*0x622ffc*/
      if ( !(uint8_t)SessionClass::GetGameSpeed((SessionClass *)&dword_A8B238) ) /*0x623004*/
        Control::CreateControlDialog((Control *)hWnd); /*0x62300f*/
      UI_Helper_60CAF0((ObjectClass *)hWnd); /*0x623016*/
      UI_Helper_60C930((ObjectClass *)hWnd); /*0x62301d*/
      UI_Helper_60CCC0((ObjectClass *)hWnd); /*0x623024*/
      UI_Helper_60CDB0((ObjectClass *)hWnd); /*0x62302b*/
      v22 = (void (__stdcall *)(HWND, WNDENUMPROC, LPARAM))EnumChildWindows; /*0x623030*/
      EnumChildWindows(hWnd, GadgetClass::FindByWindow, 0); /*0x62303d*/
      if ( (uint8_t)((Control *)((Control *)hWnd))->CheckControlTypeDialog() ) /*0x623041*/
        goto LABEL_41; /*0x623048*/
    }
    UI_Helper_60C7D0((ObjectClass *)hWnd); /*0x62306c*/
    goto LABEL_48; /*0x62306c*/
  }
  if ( a2 != 132 ) /*0x622b65*/
  {
    switch ( a2 ) /*0x622b7f*/
    {
      case 2u: /*0x622b7f*/
        DialogQueue::RemoveEntry((DialogQueue *)hWnd); /*0x622b88*/
        --*(unsigned int *)&((unsigned int *)&stru_A8EB00)[424]; /*0x622b9b*/
        SetFocus(g_hWnd); /*0x622ba1*/
        return 0; /*0x622bb0*/
      case 0xFu: /*0x622b7f*/
        *(unsigned int *)a4.__pad_0 = hWnd; /*0x622bd0*/
        if ( !*(unsigned int *)&g_DialogHashMap_Count ) /*0x622bd6*/
          return 0; /*0x622bd6*/
        result = *(unsigned int *)(*(unsigned int *)&g_DialogHashMap_Base /*0x622bf1*/
                           + 4 * HashTable::ComputeHash((int *)&g_DialogHashMap_Base, (int)&a4));
        if ( !result ) /*0x622bf6*/
          return 0; /*0x622bf6*/
        break; /*0x622bf6*/
      case 0x14u: /*0x622b7f*/
        return 1;
      case 0x2Bu: /*0x622b7f*/
        Dialog::Resize(*(char **)a4.__pad_0); /*0x622bb7*/
        return 1; /*0x622bc8*/
      default:
        return 0;
    }
    while ( *(unsigned int *)result != *(unsigned int *)a4.__pad_0 ) /*0x622c02*/
    {
      result = result->u32_204; /*0x622c04*/
      if ( !result ) /*0x622c0c*/
        return result; /*0x622c0c*/
    }
    v6 = result + 4; /*0x622c20*/
    if ( v6 ) /*0x622c25*/
    {
      if ( *(unsigned char *)(v6 + 188) ) /*0x622c2b*/
      {
        ValidateRect(hWnd, 0); /*0x622c38*/
        return 1; /*0x622c3e*/
      }
      else
      {
        Dialog::DrawBackground((Dialog *)hWnd); /*0x622c4f*/
        v24.q004 = (int)hWnd; /*0x622c63*/
        *(unsigned int *)a4.__pad_0 = 0; /*0x622c67*/
        HashTable::Get((HashTable *)&g_DialogHashMap_Base, &v24.q004, &a4); /*0x622c6f*/
        v7 = *(unsigned int *)a4.__pad_0; /*0x622c74*/
        if ( *(unsigned int *)a4.__pad_0 && *(unsigned char *)(*(unsigned int *)a4.__pad_0 + 190) ) /*0x622c7c*/
        {
          DlgItem = GetDlgItem(hWnd, 1818); /*0x622c8c*/
          if ( DlgItem ) /*0x622c94*/
            SendMessageA(DlgItem, 0x4E2u, 0, 0); /*0x622ca0*/
          RenderGadgetClassAnimation(hWnd, 0); /*0x622caa*/
          *(unsigned char *)(v7 + 190) = 0; /*0x622caf*/
        }
        ValidateRect(hWnd, 0); /*0x622cb9*/
        return 0; /*0x622cbf*/
      }
    }
    return 0; /*0x6230d1*/
  }
  v26[0] = GetDlgItem(hWnd, 1685); /*0x622cd9*/
  if ( !v26[0] ) /*0x622cdd*/
    return 0; /*0x622cdd*/
  v9 = *(uint16_t *)a4.__pad_0; /*0x622cef*/
  v10 = *(uint16_t *)&a4.__pad_0[2]; /*0x622cf5*/
  GetWindowRect(hWnd, &Rect); /*0x622cf8*/
  v11 = v9 - Rect.left; /*0x622d0c*/
  v24.u32_8 = v10 - Rect.top; /*0x622d12*/
  unknown_libname_74(&a4); /*0x622d16*/
  v12 = ChildWindowFromPointEx(hWnd, (POINT)(((unsigned long)(unsigned int)(v11)) | ((unsigned long)(unsigned int)(v24.u32_8) << 32)), 1u); /*0x622d24*/
  v13 = v12; /*0x622d2a*/
  if ( v12 ) /*0x622d2e*/
  {
    v14 = (uint16_t)v9 | ((uint16_t)v10 << 16); /*0x622d43*/
    v15 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x622d45*/
    v16 = SendMessageA(v12, 0x4E8u, 0, v14); /*0x622d54*/
    UI_Assign((wchar_t **)&v24.q004, hWnd, (LPARAM)v13, v16); /*0x622d5e*/
    WideString::AssignFromPtr( /*0x622d6c*/
      (wchar_t **)&v25.q004,
      (const wchar_t **)&v24.q004);
    DeleteAndZero::Alt((DeleteAndZero *)&v24.q004); /*0x622d75*/
    WideString::Reassign_Alt((void **)&a4, (const wchar_t **)&v25.q004); /*0x622d83*/
    DeleteAndZero::Alt((DeleteAndZero *)&v25.q004); /*0x622d8c*/
    v17 = ((WideString *)((wchar_t **)&a4))->GetOrEmpty(); /*0x622d9a*/
    if ( !wcscmp(v17, &g_TypeClass_DefaultString) ) /*0x622da0*/
    {
      unknown_libname_74(&v25); /*0x622db4*/
      v24.q004 = (int)v13; /*0x622dbd*/
      v24.u32_8 = -1; /*0x622dca*/
      SendMessageA(hWnd, 0x4E9u, 0, (LPARAM)&v24.q004); /*0x622dd2*/
      WideString::AssignFromPtr((wchar_t **)&v25.u32_8, (const wchar_t **)&v25); /*0x622ddd*/
      DeleteAndZero::Alt(&v25); /*0x622de6*/
      WideString::Reassign_Alt((void **)&a4, (const wchar_t **)&v25.u32_8); /*0x622df4*/
      DeleteAndZero::Alt((DeleteAndZero *)&v25.u32_8); /*0x622dfd*/
      v18 = ((WideString *)((wchar_t **)&a4))->GetOrEmpty(); /*0x622e0b*/
      if ( !wcscmp(v18, &g_TypeClass_DefaultString) ) /*0x622e11*/
      {
        v19 = DlgSkirmishMenuProc(hWnd, v13); /*0x622e21*/
        if ( v19 ) /*0x622e28*/
        {
          StringCSF = GetStringCSF((wchar_t *)v19, 0, g_Str_File_ownrdraw_cpp, 1957); /*0x622e3d*/
          ((WideString *)((wchar_t **)&v24))->Assign(StringCSF); /*0x622e3e*/
        }
        else
        {
          ((WideString *)((wchar_t **)&v24))->Assign(&g_TypeClass_DefaultString); /*0x622e49*/
        }
        WideString::Reassign_Alt((void **)&a4, (const wchar_t **)&v24); /*0x622e57*/
        DeleteAndZero::Alt(&v24); /*0x622e60*/
      }
    }
  }
  else
  {
    v15 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x622e67*/
  }
  v20 = WideString::GetOrEmpty_Alt((wchar_t **)&a4); /*0x622e71*/
  v15(v26[0], 0x4B2u, 0, (LPARAM)v20); /*0x622e83*/
  DeleteAndZero::Alt(&a4); /*0x622e89*/
  return 0; /*0x622ba9*/
}
}
// 0x623230
namespace gamemd {
void* CreateMessageBox(LPARAM lParam, LPARAM, LONG dwNewLong)
{
  HWND v5; // esi
  HWND DlgItem; // eax
  HWND v7; // edi

  v5 = (HWND)CreateDialog(0xF0u, (INT_PTR (__stdcall *)(HWND, UINT, WPARAM, LPARAM))sub_6232B0, 0); /*0x623249*/
  if ( v5 ) /*0x62324d*/
  {
    SetWindowLongA(v5, 8, dwNewLong); /*0x623257*/
    DlgItem = GetDlgItem(v5, 1456); /*0x623269*/
    SendMessageA(DlgItem, 0x4B2u, 0, lParam); /*0x62327a*/
    if ( a2 ) /*0x62327e*/
    {
      v7 = GetDlgItem(v5, 1472); /*0x623288*/
      SendMessageA(v7, 0x4B2u, 0, a2); /*0x623293*/
      EnableWindow(v7, 1); /*0x623298*/
      ShowWindow(v7, 5); /*0x6232a1*/
    }
  }
  return v5; /*0x6232a9*/
}
}
// 0x623730
namespace gamemd {
unsigned int ObjectClass::sub_623730(unsigned int * a2)
{
  TagClass *attachedTag; // edx
  void *owningHouseIndex; // eax
  int v5; // ebp
  const wchar_t *v6; // esi
  int v7; // eax
  wchar_t *v8; // eax
  TagClass *v9; // ecx
  int **i; // esi
  TagClass **v11; // eax
  TagClass **v12; // edx
  int v13; // eax
  int v14; // eax

  attachedTag = this->attachedTag; /*0x623741*/
  owningHouseIndex = (void *)this->owningHouseIndex; /*0x623744*/
  v5 = this->ambientSoundController[0]; /*0x623747*/
  memcpy(this, a2, 0x200u); /*0x62374a*/
  this->ambientSoundController[0] = v5; /*0x623750*/
  this->owningHouseIndex = (int)owningHouseIndex; /*0x623755*/
  this->attachedTag = attachedTag; /*0x623758*/
  v6 = (const wchar_t *)a2[10]; /*0x62375b*/
  if ( owningHouseIndex ) /*0x623760*/
  {
    operator delete((void *)(owningHouseIndex)); /*0x623763*/
    this->owningHouseIndex = 0; /*0x62376b*/
  }
  if ( v6 && *v6 ) /*0x623772*/
  {
    v7 = wcslen(v6); /*0x623778*/
    v8 = (wchar_t *)operator new(2 * v7 + 2); /*0x623782*/
    this->owningHouseIndex = (int)v8; /*0x623789*/
    wcscpy(v8, v6); /*0x62378c*/
  }
  v9 = this->attachedTag; /*0x623794*/
  for ( i = (int **)a2[13]; v9; v9 = this->attachedTag ) /*0x62379c*/
  {
    v11 = (TagClass **)v9; /*0x62379e*/
    v12 = 0; /*0x6237a0*/
    while ( v9 != (TagClass *)v11 ) /*0x6237a8*/
    {
      v12 = v11; /*0x6237aa*/
      v11 = (TagClass **)*v11; /*0x6237ac*/
      if ( !v11 ) /*0x6237b0*/
        goto LABEL_15; /*0x6237b0*/
    }
    if ( v12 ) /*0x6237ba*/
      *v12 = *v11; /*0x6237be*/
    else
      this->attachedTag = *v11; /*0x6237c4*/
    operator delete((void *)(v11)); /*0x6237c8*/
  LABEL_15:
    ; /*0x6237d0*/
  }
  for ( ; i; i = (int **)*i ) /*0x6237d9*/
  {
    v13 = wcslen((const wchar_t *)i[2]); /*0x6237df*/
    v14 = operator new(2 * v13 + 18); /*0x6237e9*/
    if ( v14 ) /*0x6237f3*/
    {
      v14->vtable3 = v14 + 16; /*0x6237f8*/
      *(unsigned int *)v14 = this->attachedTag; /*0x6237fe*/
      v14->vtable2 = 0; /*0x623800*/
      this->attachedTag = (TagClass *)v14; /*0x623803*/
    }
    v14->vtable4 = i[3]; /*0x623809*/
    v14->vtable2 = i[1]; /*0x62380f*/
    wcscpy(v14->vtable3, (const wchar_t *)i[2]); /*0x62381a*/
  }
  return &this->vfptr; /*0x623828*/
}
}
// 0x623880
namespace gamemd {
CampaignScore * * DrawTextRendererMultiline(IUnknown * aP0, int * a1, wchar_t * String, ObjectClass * aP3, unsigned int * a4, int ecx0, signed int * a6, int a8, int a9, int a10, int a11)
{
  const wchar_t *v11; // edi
  int v12; // ebx
  signed int v14; // eax
  int v15; // ebp
  signed int v16; // edx
  wchar_t *v17; // edi
  int i; // ecx
  int v19; // eax
  signed int v20; // edi
  signed int v21; // edi
  int v22; // eax
  int v24; // ecx
  bool v25; // sf
  int v26; // edx
  uint16_t *v27; // edi
  int v28; // ebp
  int v29; // eax
  int v30; // edx
  int v31; // ecx
  int v32; // edx
  unsigned int *v33; // ebp
  int v34; // eax
  int v35; // ecx
  int v36; // edx
  int v37; // eax
  int v38; // ebx
  int v39; // eax
  int v40; // ecx
  int v41; // eax
  int v42; // ecx
  int v43; // eax
  int v44; // ecx
  char result; // al
  int v46; // edi
  int v47; // ecx
  int v48; // edx
  int v49; // [esp+10h] [ebp-1030h]
  int v51; // [esp+14h] [ebp-102Ch]
  int v52; // [esp+18h] [ebp-1028h] BYREF
  int v53; // [esp+1Ch] [ebp-1024h]
  int v54; // [esp+20h] [ebp-1020h] BYREF
  int v55; // [esp+24h] [ebp-101Ch]
  int v56; // [esp+28h] [ebp-1018h]
  unsigned int v58[4]; // [esp+30h] [ebp-1010h] BYREF
  wchar_t Destination[2048]; // [esp+40h] [ebp-1000h] BYREF

  aP0 = aP0; /*0x62388a*/
  v54 = -1; /*0x62388e*/
  v11 = String; /*0x62389a*/
  v12 = 0; /*0x6238a1*/
  v49 = 0; /*0x6238a7*/
  v52 = 0; /*0x6238ab*/
  if ( !String ) /*0x6238af*/
    v11 = &g_TypeClass_DefaultString; /*0x6238b1*/
  v14 = wcslen(v11); /*0x6238b7*/
  v15 = aP3; /*0x6238bc*/
  if ( aP3 < 0 || aP3 > v14 ) /*0x6238cc*/
    v15 = 0; /*0x6238ce*/
  if ( a8 ) /*0x6238d9*/
  {
    ProcessCompositionIME(); /*0x6238db*/
    v49 = dword_B73564; /*0x6238eb*/
    v52 = dword_B7356C; /*0x6238ef*/
    v12 = dword_B73564; /*0x6238f3*/
  }
  Destination[0] = 0; /*0x623900*/
  wcsncpy(Destination, v11, 0x800u); /*0x623907*/
  if ( v12 ) /*0x623911*/
  {
    wcsncpy(&Destination[v15], WideCharStr, 2048 - v15); /*0x623925*/
    wcsncpy(&Destination[v12 + v15], &v11[v15], 2048 - v12 - v15); /*0x623940*/
  }
  Destination[2047] = 0; /*0x62394c*/
  v16 = wcslen(Destination); /*0x62395c*/
  v16 = v16; /*0x623968*/
  if ( a9 && v16 > 0 ) /*0x623972*/
  {
    memset32(Destination, 2752554, (unsigned int)v16 >> 1); /*0x623981*/
    v17 = &Destination[2 * ((unsigned int)v16 >> 1)]; /*0x623981*/
    for ( i = v16 & 1; i; --i ) /*0x623983*/
      *v17++ = 42; /*0x623985*/
  }
  if ( v52 || v12 ) /*0x623992*/
  {
    v56 = v15 + MaxCount; /*0x6239a4*/
    v19 = v15 + MaxCount; /*0x6239a8*/
  }
  else
  {
    v19 = v15; /*0x623994*/
    v56 = v15; /*0x623996*/
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
    do /*0x623a03*/
    {
      v20 = *a6; /*0x6239d0*/
      if ( MessageListClass::CountCharsInWidth(&Destination[*a6], a1[2] - 5, 0, 0) >= v56 - v20 ) /*0x6239f8*/
        break; /*0x6239f8*/
      v21 = v20 + 1; /*0x6239fe*/
      *a6 = v21; /*0x623a01*/
    }
    while ( v21 < v16 ); /*0x623a03*/
    v16 = v16; /*0x623a05*/
  }
  v22 = v15 - *a6; /*0x623a0d*/
  v49 = v49; /*0x623a0f*/
  v51 = v22 < 0 ? 0 : v22;
  v24 = v49; /*0x623a22*/
  if ( v22 < 0 )
  {
    v25 = v49 + v22 < 0; /*0x623a2c*/
    v22 += v49; /*0x623a2c*/
    v24 = v25 ? 0 : v22;
    v49 = v24; /*0x623a39*/
  }
  v26 = v16 - v49 - v15; /*0x623a3f*/
  v52 = v26; /*0x623a43*/
  if ( v22 < 0 ) /*0x623a47*/
  {
    v26 += v22; /*0x623a49*/
    v52 = v26; /*0x623a4b*/
  }
  if ( v26 < 0 ) /*0x623a51*/
    v52 = 0; /*0x623a53*/
  v27 = &Destination[*a6]; /*0x623a5d*/
  if ( a10 ) /*0x623a6a*/
  {
    v28 = a1[3] + 2; /*0x623a79*/
    v29 = Text::MeasureWidth((int)v27, 0); /*0x623a7c*/
    v30 = *a1 - 1; /*0x623a89*/
    v31 = a1[1] - 1; /*0x623a8a*/
    v58[2] = v29 + 5; /*0x623a8b*/
    v58[1] = v31; /*0x623a8f*/
    v58[0] = v30; /*0x623a97*/
    v32 = *aP0; /*0x623a9f*/
    v58[3] = v28; /*0x623aa4*/
    aP0->vt_slot_20(v58, 0); /*0x623aa8*/
    v24 = v49; /*0x623aab*/
  }
  if ( v51 ) /*0x623ab5*/
  {
    v33 = aP0; /*0x623abe*/
    v34 = DrawTextRendererTextAligned(ecx0, a4, a1, v27, v51, 0, 0, (int)aP0, a11); /*0x623ad9*/
    v35 = a1[2] - v34; /*0x623ae5*/
    *a1 += v34; /*0x623ae7*/
    a1[2] = v35; /*0x623ae9*/
    if ( v35 < 0 ) /*0x623aec*/
      a1[2] = 0; /*0x623aee*/
    v24 = v49; /*0x623af9*/
    v27 += v51; /*0x623afd*/
  }
  else
  {
    v33 = aP0; /*0x623b02*/
  }
  if ( v24 ) /*0x623b08*/
  {
    v36 = v51 + *a6; /*0x623b14*/
    v37 = v56 - v36; /*0x623b1a*/
    if ( v56 - v36 < 0 || v37 > v24 ) /*0x623b20*/
    {
      v38 = -1; /*0x623b2e*/
    }
    else
    {
      v38 = v24 - v37; /*0x623b24*/
      v24 = v56 - v36; /*0x623b26*/
      v49 = v56 - v36; /*0x623b28*/
    }
    if ( v24 > 0 ) /*0x623b33*/
    {
      v39 = DrawTextRendererTextAligned(dword_AC4618, a4, a1, v27, v24, 0, 0, (int)v33, a11); /*0x623b52*/
      v40 = a1[2] - v39; /*0x623b5e*/
      *a1 += v39; /*0x623b60*/
      a1[2] = v40; /*0x623b62*/
      if ( v40 < 0 ) /*0x623b65*/
        a1[2] = 0; /*0x623b67*/
      v27 += v49; /*0x623b72*/
    }
    if ( v38 >= 0 ) /*0x623b77*/
    {
      v54 = *a1; /*0x623b7b*/
      if ( v38 ) /*0x623b7f*/
      {
        v41 = DrawTextRendererTextAligned(dword_AC4618, a4, a1, v27, v38, 0, 0, (int)v33, a11); /*0x623b9e*/
        v42 = a1[2] - v41; /*0x623baa*/
        *a1 += v41; /*0x623bac*/
        a1[2] = v42; /*0x623bae*/
        if ( v42 < 0 ) /*0x623bb1*/
          a1[2] = 0; /*0x623bb3*/
        v27 += v38; /*0x623bba*/
      }
    }
  }
  else
  {
    v54 = *a1; /*0x623bc1*/
  }
  if ( v52 ) /*0x623bcb*/
  {
    v43 = DrawTextRendererTextAligned(ecx0, a4, a1, v27, v52, 0, 0, (int)v33, a11); /*0x623beb*/
    v44 = a1[2] - v43; /*0x623bf7*/
    *a1 += v43; /*0x623bf9*/
    a1[2] = v44; /*0x623bfb*/
    if ( v44 < 0 ) /*0x623bfe*/
      a1[2] = 0; /*0x623c00*/
  }
  result = 0; /*0x623c0e*/
  if ( !a8 || (v46 = v54, v54 <= 0) || dword_AC48C8 ) /*0x623c2a*/
  {
    dword_AC48C8 = 0; /*0x623cb7*/
  }
  else
  {
    v47 = a1[3]; /*0x623c33*/
    v53 = a1[1]; /*0x623c36*/
    v55 = v53 + v47 - 2; /*0x623c4d*/
    v52 = v54; /*0x623c5c*/
    DrawSurfaceLineAlpha((int)v33, &v52, &v54, dword_AC184C, 0xFFu); /*0x623c60*/
    v48 = a1[3]; /*0x623c68*/
    v53 = a1[1]; /*0x623c6e*/
    v54 = v46 + 1; /*0x623c72*/
    v52 = v46 + 1; /*0x623c76*/
    v55 = v53 + v48 - 2; /*0x623c8d*/
    result = DrawSurfaceLineAlpha((int)v33, &v52, &v54, dword_AC184C, 0xFFu); /*0x623c98*/
    dword_AC48C8 = 0; /*0x623c9d*/
  }
  return result; /*0x623ca7*/
}
}
// 0x623E40
namespace gamemd {
AbstractClass * * GetDialogText(HWND hWnd, void ** a2)
{
  LRESULT v4; // edi
  char *v6; // esi
  LRESULT v7; // edi

  v4 = SendMessageA(hWnd, 0xEu, 0, 0); /*0x623e54*/
  if ( v4 > 0 ) /*0x623e58*/
  {
    v6 = (char *)operator new(v4 + 2); /*0x623e74*/
    v7 = SendMessageA(hWnd, 0x4B5u, v4 + 1, (LPARAM)v6); /*0x623e87*/
    ((String *)(a2))->Assign_Alt(v6); /*0x623e8a*/
    operator delete((void *)(v6)); /*0x623e90*/
    return v7; /*0x623e98*/
  }
  else
  {
    DeleteAndZero::Alt2((DeleteAndZero *)a2); /*0x623e5c*/
    return 0; /*0x623e61*/
  }
}
}
// 0x6241F0
namespace gamemd {
int Dialog_Run(uint16_t a1, INT_PTR (__stdcall *a2)(HWND, UINT, WPARAM, LPARAM), LPARAM)
{
  HWND Dialog; // eax
  Dialog *v4; // edi
  TechnoTypeClass *v6; // ecx
  ObjectClass *v7; // [esp+0h] [ebp-8h]

  Dialog = (HWND)CreateDialog(a1, a2, a3); /*0x6241f7*/
  v4 = (Dialog *)Dialog; /*0x6241fc*/
  if ( Dialog ) /*0x624200*/
  {
    ShowWindow(Dialog, 1); /*0x624215*/
    SetForegroundWindow((HWND)v4); /*0x62421c*/
    Timer::PumpMessages(*(Timer **)&g_BinkMoviePlayer); /*0x624228*/
    if ( !(*(uint8_t (**)(LPARAM))(*(unsigned int *)a3 + 8))(a3) ) /*0x624231*/
    {
      while ( !(*(uint8_t (**)(LPARAM))(*(unsigned int *)a3 + 16))(a3) ) /*0x624241*/
      {
        MessageLoop(); /*0x624243*/
        if ( !*(unsigned int *)&dword_A8B238 /*0x624266*/
          || *(unsigned int *)&dword_A8B238 == 5
          || (((unsigned char *)&(DataGlobal_A8D60C))[2])
          || dword_A8DAB4 )
        {
          Event::Dispatch(); /*0x62427c*/
        }
        else if ( !VtableStub::sub_55CBF0() && (uint8_t)GameFrameLoop(v7) ) /*0x624271*/
        {
          break; /*0x624278*/
        }
        (*((unsigned char *)&(v6))) = 0; /*0x624281*/
        ScreenSaver::Process(v6, v7); /*0x624283*/
        if ( (*(uint8_t (**)(LPARAM))(*(unsigned int *)a3 + 8))(a3) ) /*0x62428c*/
          break; /*0x624291*/
      }
    }
    ((Dialog *)(v4))->Destroy(); /*0x624293*/
    return (*(int (**)(LPARAM))(*(unsigned int *)a3 + 12))(a3); /*0x62429e*/
  }
  else
  {
    (*(void (**)(LPARAM, unsigned int, unsigned int))(*(unsigned int *)a3 + 4))(a3, 0, 0); /*0x624208*/
    return 0; /*0x62420b*/
  }
}
}
// 0x6242B0
namespace gamemd {
int E4Recv_6242B0::sub_6242B0(HWND hWnd)
{
  int v2; // eax
  HWND v3; // edi
  HWND hWnd; // [esp+Ch] [ebp-84h] BYREF
  CHAR ClassName[128]; // [esp+10h] [ebp-80h] BYREF

  hWnd = (HWND)hWnd; /*0x6242c4*/
  GetClassNameA((HWND)hWnd, ClassName, 128); /*0x6242c8*/
  if ( !strcmp(ClassName, g_INI_Key_Edit) ) /*0x6242df*/
    return 1; /*0x62430a*/
  if ( !strcmp(ClassName, g_INI_Key_NewEdit) ) /*0x624325*/
    return 1; /*0x624350*/
  if ( !strcmp(ClassName, g_INI_Key_ListBox) /*0x6243c1*/
    && *(unsigned int *)&g_DialogHashMap_Count
    && (v2 = *(unsigned int *)(*(unsigned int *)&g_DialogHashMap_Base
                       + 4
                       * ((*(int (**)(HWND *))&g_DialogHashMap_Hasher)(&hWnd)
                        & ((1 << g_DialogHashMap_Buckets) - 1)))) != 0 )
  {
    v3 = hWnd; /*0x6243c3*/
    while ( *(HWND *)v2 != hWnd ) /*0x6243c9*/
    {
      v2 = *(unsigned int *)(v2 + 516); /*0x6243cb*/
      if ( !v2 ) /*0x6243d3*/
        return !strcmp(ClassName, g_INI_Key_ComboBox) && (GetWindowLongA(v3, -16) & 3) != 3; /*0x6243d3*/
    }
    return *(unsigned int *)(v2 + 108) == 1; /*0x6243e8*/
  }
  else
  {
    v3 = hWnd; /*0x6243f2*/
    return !strcmp(ClassName, g_INI_Key_ComboBox) && (GetWindowLongA(v3, -16) & 3) != 3; /*0x624445*/
  }
}
}
// 0x627020
namespace gamemd {
unsigned int * sub_627020()
{
  unsigned int *result; // eax
  unsigned int *v1; // edi
  unsigned int *v2; // eax
  unsigned int *v3; // eax
  unsigned int *v4; // esi
  int v5; // ebp
  unsigned int *v6; // eax
  unsigned int *v7; // edi
  unsigned int *v8; // eax
  int v9; // ecx
  int v10; // ecx
  unsigned int *v11; // [esp+8h] [ebp-8h]
  unsigned int *v12; // [esp+Ch] [ebp-4h]

  result = g_FileExtensionState; /*0x627020*/
  if ( !g_FileExtensionState ) /*0x62702e*/
  {
    result = operator new(0x10u); /*0x627036*/
    v1 = result; /*0x62703b*/
    v12 = result; /*0x627042*/
    if ( !result ) /*0x627046*/
    {
      g_FileExtensionState = 0; /*0x62715e*/
      return result; /*0x62715e*/
    }
    *result = -1; /*0x62704e*/
    v2 = operator new(0x18u); /*0x627054*/
    if ( v2 ) /*0x62705e*/
    {
      v2[1] = 0; /*0x627060*/
      v2[2] = 0; /*0x627063*/
      *((unsigned char *)v2 + 12) = 1; /*0x627066*/
      *((unsigned char *)v2 + 13) = 0; /*0x62706a*/
      *v2 = &vt_DynamicVectorClass; /*0x62706d*/
      v2[5] = 10; /*0x627073*/
      v2[4] = 0; /*0x62707a*/
    }
    else
    {
      v2 = 0; /*0x62707f*/
    }
    v1[1] = v2; /*0x627083*/
    v3 = operator new(0x18u); /*0x627086*/
    if ( v3 ) /*0x627090*/
    {
      v3[1] = 0; /*0x627092*/
      v3[2] = 0; /*0x627095*/
      *((unsigned char *)v3 + 12) = 1; /*0x627098*/
      *((unsigned char *)v3 + 13) = 0; /*0x62709c*/
      *v3 = &vt_DynamicVectorClass; /*0x62709f*/
      v3[5] = 10; /*0x6270a5*/
      v3[4] = 0; /*0x6270ac*/
    }
    else
    {
      v3 = 0; /*0x6270b1*/
    }
    v1[2] = v3; /*0x6270b6*/
    result = operator new(0x10u); /*0x6270b9*/
    v4 = result; /*0x6270be*/
    if ( result ) /*0x6270c5*/
    {
      v5 = 31; /*0x6270cc*/
      result[1] = HashStringMod31; /*0x6270d6*/
      result[2] = 31; /*0x6270dd*/
      result[3] = 10; /*0x6270e0*/
      v6 = operator new(0x2ECu); /*0x6270e7*/
      if ( v6 ) /*0x6270f1*/
      {
        *v6 = 31; /*0x6270f3*/
        v11 = v6 + 1; /*0x6270f8*/
        v7 = v6 + 1; /*0x6270fc*/
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
      v9 = v4[2]; /*0x627119*/
      *v4 = v8; /*0x62711c*/
      result = 0; /*0x62711e*/
      if ( v9 > 0 ) /*0x627123*/
      {
        v10 = 0; /*0x627125*/
        do /*0x62713a*/
        {
          result = &result->q001; /*0x627129*/
          *(unsigned int *)(*v4 + v10 + 20) = 10; /*0x62712a*/
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
// 0x6278C0
namespace gamemd {
int E4Recv_6278C0::sub_6278C0(const char * a2)
{

  int v3; // edx
  unsigned int *v4; // ecx
  int (**vtable3)(char *); // esi
  int v6; // eax
  int v7; // edi
  int v8; // esi
  int v9; // edi
  int v10; // ebx
  int v11; // eax
  int v12; // ecx
  int v13; // edx
  int v14; // eax
  int v15; // esi
  unsigned int *v17; // [esp+10h] [ebp-208h]
  int v18; // [esp+10h] [ebp-208h]
  char String[256]; // [esp+14h] [ebp-204h] BYREF
  char v20[256]; // [esp+114h] [ebp-104h] BYREF
  int v21; // [esp+214h] [ebp-4h]

  v17 = MIXFile::Load((MIXFile *)this, a2); /*0x6278de*/
  v3 = __2_YAPAXI_Z(0x104u); /*0x6278e7*/
  if ( v3 ) /*0x6278ee*/
  {
    strcpy((char *)v3, a2); /*0x627906*/
    v4 = v17; /*0x62790f*/
    v18 = v3; /*0x627913*/
    *(unsigned int *)(v3 + 256) = v4; /*0x627917*/
  }
  else
  {
    v18 = 0; /*0x62791f*/
  }
  String::CopyUpper(String, a2); /*0x62792c*/
  vtable3 = (int (**)(char *))this->M12; /*0x627931*/
  v6 = vtable3[1](String); /*0x627938*/
  v7 = *((unsigned int *)*vtable3 + 6 * (v6 % (int)vtable3[2]) + 4); /*0x627944*/
  v8 = (int)*vtable3 + 24 * (v6 % (int)vtable3[2]); /*0x627948*/
  v9 = v7 - 1; /*0x62794b*/
  if ( v9 < 0 ) /*0x62794c*/
  {
LABEL_8:
    String::Copy(v20, String); /*0x62797a*/
    v12 = *(unsigned int *)(v8 + 8); /*0x62798f*/
    v21 = v18; /*0x627992*/
    if ( *(unsigned int *)(v8 + 16) < v12 /*0x6279c0*/
      || ((LOBYTE(v11) = *(unsigned char *)(v8 + 13), (unsigned char)v11) || !v12)
      && (v11 = *(unsigned int *)(v8 + 20), v11 > 0)
      && (LOBYTE(v11) = (*(int (**)(int, int, unsigned int))(*(unsigned int *)v8 + 8))(v8, v12 + v11, 0), (unsigned char)v11) )
    {
      v13 = 65 * *(unsigned int *)(v8 + 16); /*0x6279cd*/
      v14 = *(unsigned int *)(v8 + 4); /*0x6279cf*/
      ++*(unsigned int *)(v8 + 16); /*0x6279d2*/
      v15 = v14 + 4 * v13; /*0x6279dc*/
      LOBYTE(v11) = (unsigned __int8)String::CopyChecked((char *)v15, v20); /*0x6279e2*/
      *(unsigned int *)(v15 + 256) = v21; /*0x6279ee*/
    }
  }
  else
  {
    v10 = 260 * v9; /*0x627955*/
    while ( 1 ) /*0x627962*/
    {
      LOBYTE(v11) = String::Equals((const char *)(v10 + *(unsigned int *)(v8 + 4)), String); /*0x627962*/
      if ( (unsigned char)v11 ) /*0x627969*/
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
// 0x627A10
namespace gamemd {
unsigned int * E4Recv_627A10::sub_627A10(ObjectClass * aP1)
{

  int (**vtable3)(char *); // esi
  int v4; // ebp
  int v5; // esi
  int v6; // ebx
  const char *v7; // edi
  int *v8; // edi
  int v9; // esi
  MIXFile *v10; // ecx
  unsigned int *result; // eax
  int v12; // ebp
  int i; // ebx
  int v14; // eax
  void *v15; // edi
  void (***v16)(unsigned int, int); // ecx
  MIXFile *v18; // [esp+10h] [ebp-104h]
  char String[256]; // [esp+14h] [ebp-100h] BYREF

  String::CopyUpper(String, aP1); /*0x627a2c*/
  vtable3 = (int (**)(char *))this->M12; /*0x627a31*/
  v4 = (int)*vtable3 + 24 * (vtable3[1](String) % (int)vtable3[2]); /*0x627a48*/
  v5 = *(unsigned int *)(v4 + 16) - 1; /*0x627a4b*/
  if ( v5 < 0 ) /*0x627a4c*/
  {
LABEL_5:
    v8 = 0; /*0x627a7e*/
  }
  else
  {
    v6 = 260 * v5; /*0x627a55*/
    while ( 1 ) /*0x627a5d*/
    {
      v7 = (const char *)(*(unsigned int *)(v4 + 4) + v6); /*0x627a5d*/
      if ( (unsigned __int8)String::Equals(v7, String) ) /*0x627a66*/
        break; /*0x627a66*/
      --v5; /*0x627a73*/
      v6 -= 260; /*0x627a74*/
      if ( v5 < 0 ) /*0x627a7c*/
        goto LABEL_5; /*0x627a7c*/
    }
    v8 = (int *)(v7 + 256); /*0x627b02*/
  }
  v9 = *v8; /*0x627a87*/
  v10 = (MIXFile *)MIXFile::Load((MIXFile *)this, aP1); /*0x627a93*/
  result = *(unsigned int **)(v9 + 256); /*0x627a95*/
  v18 = v10; /*0x627a9d*/
  if ( result ) /*0x627aa1*/
  {
    v12 = result[4]; /*0x627aa3*/
    for ( i = 0; i < v12; ++i ) /*0x627aaa*/
    {
      v14 = *(unsigned int *)(*(unsigned int *)(v9 + 256) + 4); /*0x627ab2*/
      v15 = *(void **)(v14 + 4 * i); /*0x627ab5*/
      if ( v15 ) /*0x627aba*/
      {
        ColorScheme::Destructor(*(ColorScheme **)(v14 + 4 * i)); /*0x627abe*/
        __3_YAXPAX_Z(v15); /*0x627ac4*/
      }
    }
    v16 = *(void (****)(unsigned int, int))(v9 + 256); /*0x627ad1*/
    if ( v16 ) /*0x627ad9*/
      (**v16)(v16, 1); /*0x627adf*/
    *(unsigned int *)(v9 + 256) = 0; /*0x627ae5*/
    *(unsigned int *)(v9 + 256) = v18; /*0x627aef*/
    return v18->__pad_000; /*0x627ae1*/
  }
  else
  {
    *(unsigned int *)(v9 + 256) = v10; /*0x627b0d*/
  }
  return result; /*0x627af5*/

}
}
// 0x629530
namespace gamemd {
void E4Recv_629530::sub_629530()
{

  int v2; // ecx
  int v3; // eax
  ObjectClass *v4; // [esp+8h] [ebp-4h] BYREF

  v2 = this->ambientSoundController[2]; /*0x629537*/
  this->ambientSoundController[4] = 0; /*0x62953a*/
  this->customSound_controller[0] = 0; /*0x62953f*/
  this->ambientSoundController[3] = 0; /*0x629542*/
  if ( v2 ) /*0x629545*/
  {
    (*(void (**)(int))(*(unsigned int *)v2 + 248))(v2); /*0x629549*/
    this->ambientSoundController[2] = 0; /*0x62954f*/
  }
  if ( LOBYTE(this->customSound_controller[1]) ) /*0x629552*/
  {
    v4 = this; /*0x629567*/
    v3 = (*(int (**)(int *, ObjectClass **))(g_BuildingLoadQueue_Array.?[0] + 16))( /*0x62956b*/
           g_BuildingLoadQueue_Array.?,
           &v4);
    if ( v3 != -1 && v3 < g_BuildingLoadQueue_Array.?[1] ) /*0x62957b*/
    {
      --g_BuildingLoadQueue_Array.?[1]; /*0x629580*/
      for ( ; /*0x629586*/
            v3 < g_BuildingLoadQueue_Array.?[1];
            *(unsigned int *)(g_BuildingLoadQueue_Array + 4 * v3 - 4) = *(unsigned int *)(g_BuildingLoadQueue_Array
                                                                                 + 4 * v3) )
      {
        ++v3; /*0x62958e*/
      }
    }
    LOBYTE(this->customSound_controller[1]) = 0; /*0x6295a0*/
  }

}
}
// 0x62E070
namespace gamemd {
AbstractClass * * DestructParticleSystemClass(ParticleSystemClass * aP0, int a2)
{
  int v2; // ecx
  int v3; // edi
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  void *v12; // eax
  int v15; // [esp+14h] [ebp-4h] BYREF

  v3 = v2; /*0x62e073*/
  *(unsigned int *)v2 = &vt_ParticleSystemClass; /*0x62e077*/
  *(unsigned int *)(v2 + 4) = &vt_ParticleSystemClass; /*0x62e07d*/
  *(unsigned int *)(v2 + 8) = &vt_ParticleSystemClass; /*0x62e084*/
  *(unsigned int *)(v2 + 12) = &off_7EFB70; /*0x62e08b*/
  AbstractClass::AnnounceExpiredPointer((void **)v2, 1); /*0x62e092*/
  ObjectClass::Undeploy((ObjectClass *)v3); /*0x62e099*/
  while ( v3->Owner ) /*0x62e09e*/
  {
    v4 = *v3->TargetCoords; /*0x62e0b5*/
    if ( v4 ) /*0x62e0b9*/
      (*(void (**)(int, int))(*(unsigned int *)v4 + 32))(v4, 1); /*0x62e0bf*/
    v15 = *v3->TargetCoords; /*0x62e0d4*/
    v5 = (*(int (**)(int *, int *, int))(g_BuildingLoadQueue_Array.ToTile + 16))( /*0x62e0dd*/
           &g_BuildingLoadQueue_Array.ToTile,
           &v15,
           a2);
    if ( v5 != -1 && v5 < *(int *)&DataGlobal_B0F6A8 ) /*0x62e0ed*/
    {
      --*(unsigned int *)&DataGlobal_B0F6A8; /*0x62e0f2*/
      for ( ; /*0x62e0f8*/
            v5 < *(int *)&DataGlobal_B0F6A8;
            *(unsigned int *)(*(unsigned int *)DataGlobal_B0F69C + 4 * v5 - 4) = *(unsigned int *)(*(unsigned int *)DataGlobal_B0F69C
                                                                                                 + 4 * v5) )
      {
        ++v5; /*0x62e100*/
      }
    }
    a2 = v3->TargetCoords; /*0x62e124*/
    v6 = (*(int (**)(int))(v3->Particles + 16))(v3 + 188); /*0x62e127*/
    if ( v6 != -1 ) /*0x62e12d*/
    {
      v7 = v3->Owner; /*0x62e12f*/
      if ( v6 < v7 ) /*0x62e134*/
      {
        v8 = v7 - 1; /*0x62e136*/
        for ( v3->Owner = v8; /*0x62e13c*/
              v6 < v3->Owner;
              *(unsigned int *)(v3->TargetCoords + 4 * v6 - 4) = *(unsigned int *)(v3->TargetCoords + 4 * v6) )
        {
          ++v6; /*0x62e141*/
        }
      }
    }
  }
  v3->Type = 0; /*0x62e15d*/
  v15 = v3; /*0x62e173*/
  v9 = (*(int (**)(int *, int *))(dword_A80208 + 16))(&dword_A80208, &v15); /*0x62e177*/
  if ( v9 != -1 && v9 < g_GameCleanupState && v9 < --g_GameCleanupState ) /*0x62e192*/
  {
    do /*0x62e1aa*/
    {
      ++v9; /*0x62e19a*/
      *((unsigned int *)dword_A8020C + v9 - 1) = *((unsigned int *)dword_A8020C + v9); /*0x62e19e*/
    }
    while ( v9 < g_GameCleanupState ); /*0x62e1aa*/
  }
  v15 = v3; /*0x62e1bc*/
  v10 = (*(int (**)(int *, int *))(g_BuildingLoadQueue_Array.LightVisibility + 16))( /*0x62e1c0*/
          &g_BuildingLoadQueue_Array.LightVisibility,
          &v15);
  if ( v10 != -1 && v10 < g_BuildingLoadQueue_Array.LightBlueTint ) /*0x62e1d0*/
  {
    --g_BuildingLoadQueue_Array.LightBlueTint; /*0x62e1d5*/
    for ( ; /*0x62e1db*/
          v10 < g_BuildingLoadQueue_Array.LightBlueTint;
          *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity + 4 * v10 - 4) = *(unsigned int *)(g_BuildingLoadQueue_Array.LightIntensity
                                                                                          + 4 * v10) )
    {
      ++v10; /*0x62e1e3*/
    }
  }
  v15 = v3; /*0x62e205*/
  v11 = (*(int (**)(int *, int *))(g_BuildingLoadQueue_Array.PowerBonus + 16))( /*0x62e209*/
          &g_BuildingLoadQueue_Array.PowerBonus,
          &v15);
  if ( v11 != -1 && v11 < g_BuildingLoadQueue_Array.Foundation[0] ) /*0x62e219*/
  {
    --g_BuildingLoadQueue_Array.Foundation[0]; /*0x62e21e*/
    for ( ; /*0x62e224*/
          v11 < g_BuildingLoadQueue_Array.Foundation[0];
          *(unsigned int *)(g_BuildingLoadQueue_Array.PowerDrain + 4 * v11 - 4) = *(unsigned int *)(g_BuildingLoadQueue_Array.PowerDrain
                                                                                      + 4 * v11) )
    {
      ++v11; /*0x62e22c*/
    }
  }
  v12 = v3->TargetCoords; /*0x62e23e*/
  v3->Particles = &vt_VectorClass; /*0x62e244*/
  if ( v12 && v3->u32_C9 ) /*0x62e252*/
  {
    operator delete((void *)(v12)); /*0x62e25b*/
    v3->TargetCoords = 0; /*0x62e263*/
  }
  v3->u32_C9 = 0; /*0x62e26b*/
  v3->u32_C4 = 0; /*0x62e271*/
  return ObjectClass::Dtor((ObjectClass *)v3); /*0x62e27c*/
}
}
// 0x620720
namespace gamemd {
void DrawScrollArrowUI(int * a0, unsigned int * a1, ObjectClass * aP2, int a4, char a5)
{
  char v7; // al
  int v8; // esi
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // eax
  int v13; // edx
  unsigned int v14[2]; // [esp+Ch] [ebp-40h] BYREF
  int v15; // [esp+14h] [ebp-38h]
  int v16; // [esp+18h] [ebp-34h]
  unsigned int v17[4]; // [esp+1Ch] [ebp-30h] BYREF
  char Buffer[32]; // [esp+2Ch] [ebp-20h] BYREF

  if ( a0 ) /*0x62072c*/
  {
    v7 = 114; /*0x620736*/
    if ( a4 ) /*0x62073a*/
      v7 = 112; /*0x62073c*/
    if ( aP2 ) /*0x620744*/
      sprintf(Buffer, "guparrow%c.pcx", v7); /*0x620754*/
    else
      sprintf(Buffer, "gdnarrow%c.pcx", v7); /*0x620764*/
    v8 = HashTable::Find(g_DialogHashTable, &Buffer[a5 == 0], 0); /*0x620788*/
    if ( v8 ) /*0x62078c*/
    {
      v9 = a1[1]; /*0x620790*/
      v10 = a1[2]; /*0x620793*/
      v14[0] = *a1; /*0x620796*/
      v11 = a1[3]; /*0x62079a*/
      v14[1] = v9; /*0x62079d*/
      v15 = v10; /*0x6207a1*/
      v16 = v11; /*0x6207a5*/
      v15 = (*(int (**)(int))(*&v8->u32_1F0))(v8); /*0x6207b0*/
      v16 = (*(int (**)(int))(v8->needsSave)(v8); /*0x6207be*/
      v17[1] = 0; /*0x6207c2*/
      v17[0] = 0; /*0x6207ca*/
      v17[2] = (*(int (**)(int))(*&v8->u32_1F0))(v8); /*0x6207d9*/
      v12 = (*(int (**)(int))(v8->needsSave)(v8); /*0x6207e1*/
      v13 = *a0; /*0x6207e7*/
      v17[3] = v12; /*0x6207ea*/
      a0->vt_slot_8(v14, v8, v17, 0, 1); /*0x6207ff*/
    }
  }
}
} // namespace gamemd

// 0x620870
namespace gamemd {
int sub_620870(unsigned short a1)
{
  int v1; // eax

  v1 = (uint8_t)((uint8_t)(a1 >> g_BitShift_Blue) << g_BitMask_Red); /*0x6208c7*/
  (((unsigned char *)&(v1))[1]) = 2; /*0x6208d2*/
  return (uint8_t)((uint8_t)(a1 >> g_BitShift_Red) << g_BitShift_Green_0) /*0x6208e5*/
       | (((uint8_t)((uint8_t)(a1 >> g_BitMask_Green) << g_BitMask_Blue) | (v1 << 8)) << 8);
}
} // namespace gamemd

// 0x621D30
namespace gamemd {
int sub_621D30(int * a1, int a2)
{
  int v4; // ebx
  int v5; // edi
  int result; // eax
  int v7; // eax
  int v8; // edx
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // [esp+10h] [ebp-318h] BYREF
  int v13; // [esp+14h] [ebp-314h]
  int v14; // [esp+18h] [ebp-310h]
  int v15; // [esp+1Ch] [ebp-30Ch]
  int v16; // [esp+20h] [ebp-308h]
  int v17; // [esp+24h] [ebp-304h]
  ObjectClass v18[4]; // [esp+28h] [ebp-300h] BYREF

  v16 = HashTable::Find(&g_DialogHashTable, aBitsIPcx, v18); /*0x621d5e*/
  v4 = 0; /*0x621d6b*/
  v17 = HashTable::Find(&g_DialogHashTable, aBitsAPcx, 0); /*0x621d6d*/
  sub_6B93E0(v18); /*0x621d71*/
  v5 = 0; /*0x621d78*/
  v12 = *a1; /*0x621d7c*/
  v13 = a1[1]; /*0x621d83*/
  v14 = a1[2]; /*0x621d8a*/
  v15 = a1[3]; /*0x621d91*/
  result = a1[2]; /*0x621d95*/
  if ( result > 0 ) /*0x621d9a*/
  {
    do /*0x621e74*/
    {
      v7 = rand() % 8; /*0x621db0*/
      v8 = a1[1] + 1; /*0x621dbb*/
      v12 = v5 + *a1; /*0x621dbc*/
      v13 = v8; /*0x621dc4*/
      v14 = 10; /*0x621de5*/
      v15 = 12; /*0x621ded*/
      Surface::AlphaBlend(&v12, a2, v16, v17, (int)v18, 0, 10 * v7, 0); /*0x621df5*/
      v9 = rand() % 8; /*0x621e0a*/
      v10 = a1[1]; /*0x621e0d*/
      v12 = v5 + *a1; /*0x621e14*/
      v11 = a1[3]; /*0x621e18*/
      v14 = 10; /*0x621e1b*/
      v15 = 12; /*0x621e23*/
      v13 = v10 + v11 - 16; /*0x621e34*/
      Surface::AlphaBlend(&v12, a2, v16, v17, (int)v18, 0, 10 * v9, 0); /*0x621e55*/
      if ( !(++v4 % 6) ) /*0x621e63*/
        v5 += 10; /*0x621e69*/
      result = a1[2]; /*0x621e6c*/
      v5 += 10; /*0x621e6f*/
    }
    while ( v5 < result ); /*0x621e74*/
  }
  return result; /*0x621e7a*/
}
} // namespace gamemd

// 0x6232B0
namespace gamemd {
int sub_6232B0(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
  int result; // eax
  unsigned char *WindowLongA; // esi

  result = BaseDialogProc(hWnd, a2, a3, a4); /*0x6232c9*/
  if ( !result ) /*0x6232d0*/
  {
    if ( a2 == 273 && a3 == 1472 ) /*0x6232e0*/
    {
      WindowLongA = (unsigned char *)GetWindowLongA(hWnd, 8); /*0x6232eb*/
      if ( WindowLongA ) /*0x6232ef*/
      {
        EventBuffer::Enqueue(dword_87F770, 27); /*0x6232f9*/
        *WindowLongA = 1; /*0x6232fe*/
      }
    }
    return 0; /*0x623301*/
  }
  return result; /*0x623303*/
}
} // namespace gamemd

// 0x6235B0
namespace gamemd {
void E4Recv_6235B0::sub_6235B0(wchar_t * Format)
{

  wchar_t *v3; // eax

  if ( this->owningHouseIndex ) /*0x6235b4*/
  {
    __3_YAXPAX_Z((void *)this->owningHouseIndex); /*0x6235bc*/
    this->owningHouseIndex = 0; /*0x6235c4*/
  }
  if ( Format ) /*0x6235d1*/
  {
    if ( *(unsigned char *)Format ) /*0x6235d3*/
    {
      v3 = (wchar_t *)__2_YAPAXI_Z(2 * strlen((const char *)Format) + 2); /*0x6235ea*/
      this->owningHouseIndex = (int)v3; /*0x6235f6*/
      swprintf(v3, (const size_t)g_Str_Trace__hs, Format); /*0x6235f9*/
    }
  }

}
} // namespace gamemd

// 0x623DA0
namespace gamemd {
int sub_623DA0(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
  int result; // eax
  unsigned int *WindowLongA; // eax

  result = BaseDialogProc(hWnd, a2, a3, a4); /*0x623db9*/
  if ( !result ) /*0x623dc0*/
  {
    WindowLongA = (unsigned int *)GetWindowLongA(hWnd, 8); /*0x623dc5*/
    if ( a2 == 273 && (uint16_t)a3 >= 0x5C0u && (uint16_t)a3 <= 0x5C1u ) /*0x623de7*/
      *WindowLongA = (uint16_t)a3; /*0x623de9*/
    return 0; /*0x623deb*/
  }
  return result; /*0x623ded*/
}
} // namespace gamemd

// 0x623EA0
namespace gamemd {
LRESULT GetEditControlText(HWND hWnd, void ** a2)
{
  LRESULT v4; // edi
  wchar_t *v6; // esi
  LRESULT v7; // edi

  v4 = SendMessageA(hWnd, 0xEu, 0, 0); /*0x623eb4*/
  if ( v4 > 0 ) /*0x623eb8*/
  {
    v6 = (wchar_t *)operator new(2 * v4 + 4); /*0x623ed5*/
    v7 = SendMessageA(hWnd, 0x4B3u, v4 + 1, (LPARAM)v6); /*0x623ee8*/
    WideString::Assign_Alt(a2, v6); /*0x623eeb*/
    operator delete((void *)(v6)); /*0x623ef1*/
    return v7; /*0x623ef9*/
  }
  else
  {
    SafeDelete::Ptr((SafeDelete *)a2); /*0x623ebc*/
    return 0; /*0x623ec1*/
  }
}
} // namespace gamemd

// 0x623F00
namespace gamemd {
LRESULT GetListBoxItemText(ObjectClass * aP0, WPARAM wParam, void ** a2)
{
  LRESULT v5; // esi
  char *v6; // esi
  LRESULT v7; // edi

  v5 = SendMessageA(aP0, 0x18Au, wParam, 0); /*0x623f19*/
  if ( v5 <= 0 ) /*0x623f1d*/
    DeleteAndZero::Alt2(a2); /*0x623f23*/
  v6 = (char *)operator new(v5 + 2); /*0x623f34*/
  v7 = SendMessageA(aP0, 0x4B7u, wParam, (LPARAM)v6); /*0x623f40*/
  ((String *)(a2))->Assign_Alt(v6); /*0x623f47*/
  operator delete((void *)(v6)); /*0x623f4d*/
  return v7; /*0x623f57*/
}
} // namespace gamemd

// 0x624080
namespace gamemd {
unsigned int * E4Recv_624080::sub_624080()
{
  /* X11: vtable install elided (implicit via OwnerDrawDialogControl virtuals 0x624082) */
  return &this->vfptr; /*0x624088*/
}
} // namespace gamemd

// 0x624090
namespace gamemd {
void E4Recv_624090::sub_624090()
{
  *this = &vt_OwnerDrawDialogControl; /*0x624090*/
}
} // namespace gamemd

// 0x626020
namespace gamemd {
char * E4Recv_626020::sub_626020(int a2)
{
  char *result; // eax
  unsigned char *v3; // edx
  int v4; // esi
  char *v5; // edx
  int v6; // esi
  char *v7; // ebx

  result = this; /*0x626021*/
  v3 = this + 2; /*0x626026*/
  v4 = 256; /*0x626029*/
  do /*0x62603c*/
  {
    *(v3 - 2) = 0; /*0x626030*/
    *(v3 - 1) = 0; /*0x626033*/
    *v3 = 0; /*0x626036*/
    v3 += 3; /*0x626038*/
    --v4; /*0x62603b*/
  }
  while ( v4 ); /*0x62603c*/
  v5 = this; /*0x626042*/
  v6 = 256; /*0x626044*/
  do /*0x62605d*/
  {
    v7 = v5; /*0x62604b*/
    v5 += 3; /*0x62604d*/
    --v6; /*0x626050*/
    *(unsigned short *)v7 = *(unsigned short *)a2; /*0x626054*/
    v7[2] = *(unsigned char *)(a2 + 2); /*0x62605a*/
  }
  while ( v6 ); /*0x62605d*/
  return result; /*0x62605f*/
}
} // namespace gamemd

// 0x626070
namespace gamemd {
void * E4Recv_626070::sub_626070(const void * a2)
{

  void *result; // eax
  unsigned char *v3; // ecx
  int v4; // edx

  result = this; /*0x626070*/
  v3 = &this->u8_2 + 2; /*0x626075*/
  v4 = 256; /*0x626078*/
  do /*0x62608b*/
  {
    *(v3 - 2) = 0; /*0x62607f*/
    *(v3 - 1) = 0; /*0x626082*/
    *v3 = 0; /*0x626085*/
    v3 += 3; /*0x626087*/
    --v4; /*0x62608a*/
  }
  while ( v4 ); /*0x62608b*/
  memcpy(result, a2, 0x300u); /*0x626098*/
  return result; /*0x62609a*/

}
} // namespace gamemd

// 0x6260A0
namespace gamemd {
bool E4Recv_6260A0::sub_6260A0(const void * a2)
{
  return this == a2 || memcmp(this, a2, 0x300u) == 0; /*0x6260ac*/
}
} // namespace gamemd

// 0x6260F0
namespace gamemd {
unsigned char E4Recv_6260F0::sub_6260F0(ObjectClass * aP1)
{
  int v3; // edi
  unsigned int result; // eax

  v3 = 256; /*0x6260f9*/
  do /*0x62610f*/
  {
    result = Color::Lerp((Color *)this, aP1, &byte_A83CD9); /*0x626106*/
    this = &this->u32_3; /*0x62610b*/
    --v3; /*0x62610e*/
  }
  while ( v3 ); /*0x62610f*/
  return result; /*0x626111*/
}
} // namespace gamemd

// 0x626170
namespace gamemd {
unsigned char E4Recv_626170::sub_626170(ObjectClass * aP1, int a3)
{
  int i; // esi
  unsigned int result; // eax

  for ( i = 0; i < 256; ++i ) /*0x62617c*/
  {
    if ( *(unsigned char *)(i + a3) ) /*0x626180*/
      result = Color::Lerp((Color *)this, aP1, &byte_A83CD9); /*0x62618e*/
    this = &this->u32_3; /*0x626194*/
  }
  return result; /*0x62619f*/
}
} // namespace gamemd

// 0x6261B0
namespace gamemd {
unsigned char E4Recv_6261B0::sub_6261B0(ObjectClass * aP1, int a3, int a4)
{
  int i; // esi
  unsigned int result; // eax

  for ( i = 0; i < 256; ++i ) /*0x6261bc*/
  {
    result = a4; /*0x6261c0*/
    if ( *(unsigned char *)(i + a4) ) /*0x6261c4*/
      result = Color::Lerp((Color *)this, aP1, (uint8_t *)(a3 + 2 * (i % 256) + i % 256)); /*0x6261e3*/
    this = &this->u32_3; /*0x6261e9*/
  }
  return result; /*0x6261f4*/
}
} // namespace gamemd

// 0x626250
namespace gamemd {
int E4Recv_626250::sub_626250(const char * a2, int a3)
{
  strcpy(a2); /*0x62626c*/
  this->u32_100 = a3; /*0x62627c*/
  return (int)this; /*0x62627b*/
}
} // namespace gamemd

// 0x626290
namespace gamemd {
void E4Recv_626290::sub_626290()
{
  int v2; // eax
  int v3; // ebp
  int i; // edi
  int v5; // ecx
  void *v6; // esi
  void (***v7)(unsigned int, int); // ecx

  v2 = this->M256; /*0x626293*/
  if ( v2 ) /*0x62629b*/
  {
    v3 = *(unsigned int *)(v2 + 16); /*0x62629e*/
    for ( i = 0; i < v3; ++i ) /*0x6262a6*/
    {
      v5 = *(unsigned int *)(this->M256 + 4); /*0x6262af*/
      v6 = *(void **)(v5 + 4 * i); /*0x6262b2*/
      if ( v6 ) /*0x6262b7*/
      {
        ColorScheme::Destructor(*(ColorScheme **)(v5 + 4 * i)); /*0x6262bb*/
        operator delete((void *)(v6)); /*0x6262c1*/
      }
    }
    v7 = (void (***)(unsigned int, int))this->M256; /*0x6262cf*/
    if ( v7 ) /*0x6262d9*/
      (**v7)(v7, 1); /*0x6262df*/
    this->M256 = 0; /*0x6262e1*/
  }
}
} // namespace gamemd

// 0x6262F0
namespace gamemd {
int E4Recv_6262F0::sub_6262F0(int a2)
{
  int result; // eax
  int v4; // ebp
  int i; // edi
  int v6; // ecx
  void *v7; // esi
  void (***v8)(unsigned int, int); // ecx

  result = this->M256; /*0x6262f3*/
  if ( result ) /*0x6262fb*/
  {
    v4 = result->u32_10; /*0x6262fe*/
    for ( i = 0; i < v4; ++i ) /*0x626306*/
    {
      v6 = *(unsigned int *)(this->M256 + 4); /*0x62630f*/
      v7 = *(void **)(v6 + 4 * i); /*0x626312*/
      if ( v7 ) /*0x626317*/
      {
        ColorScheme::Destructor(*(unsigned int *)(v6 + 4 * i)); /*0x62631b*/
        operator delete((void *)(v7)); /*0x626321*/
      }
    }
    v8 = (void (***)(unsigned int, int))this->M256; /*0x62632f*/
    if ( v8 ) /*0x626339*/
      (**v8)(v8, 1); /*0x62633f*/
    this->M256 = 0; /*0x626345*/
    this->M256 = a2; /*0x62634f*/
    return a2; /*0x626341*/
  }
  else
  {
    this->M256 = a2; /*0x62635d*/
  }
  return result; /*0x626355*/
}
} // namespace gamemd

// 0x626660
namespace gamemd {
int String_HashMod31(char * a1)
{
  char v1; // dl
  int result; // eax

  v1 = *a1; /*0x626660*/
  for ( result = 0; *a1; v1 = *a1 ) /*0x626660*/
  {
    ++a1; /*0x62667d*/
    result = (v1 + 26 * result) % 31; /*0x62667e*/
  }
  return result; /*0x626687*/
}
} // namespace gamemd

// 0x6274F0
namespace gamemd {
int E4Recv_6274F0::sub_6274F0(ObjectClass * aP1)
{

  int (**vtable3)(char *); // esi
  int v4; // ebp
  int v5; // esi
  int i; // ebx
  int v7; // edi
  char String[256]; // [esp+10h] [ebp-100h] BYREF

  String::CopyUpper(String, aP1); /*0x627505*/
  vtable3 = (int (**)(char *))this->M12; /*0x62750a*/
  v4 = (int)*vtable3 + 24 * (vtable3[1](String) % (int)vtable3[2]); /*0x627521*/
  v5 = *(unsigned int *)(v4 + 16) - 1; /*0x627524*/
  if ( v5 < 0 ) /*0x627525*/
    return 0; /*0x627525*/
  for ( i = 260 * v5; ; i -= 260 ) /*0x62752e*/
  {
    v7 = *(unsigned int *)(v4 + 4) + i; /*0x627536*/
    if ( (unsigned __int8)String::Equals((const char *)v7, String) ) /*0x62753f*/
      break; /*0x62753f*/
    if ( --v5 < 0 ) /*0x627551*/
      return 0; /*0x62755f*/
  }
  if ( v7 == -256 ) /*0x62756a*/
    return 0; /*0x62756f*/
  else
    return *(unsigned int *)(*(unsigned int *)(v7 + 256) + 256); /*0x627580*/

}
} // namespace gamemd

// 0x628B00
namespace gamemd {
unsigned int * E4Recv_628B00::sub_628B00(int a2, unsigned char * a3)
{

  int v3; // esi
  Byte *v5; // ebp
  Byte *v6; // ebx
  Byte *v7; // ebp

  v3 = a2; /*0x628b03*/
  this->Items = 0; /*0x628b0c*/
  this->Capacity = a2; /*0x628b13*/
  this->IsInitialized = 1; /*0x628b16*/
  this->IsAllocated = 0; /*0x628b1a*/
  /* X11: vtable install elided (implicit via VectorClass virtuals 0x628b1e) */
  if ( a2 ) /*0x628b24*/
  {
    if ( a3 ) /*0x628b2c*/
    {
      v5 = (Byte *)a3; /*0x628b31*/
      if ( a2 - 1 >= 0 ) /*0x628b35*/
      {
        do /*0x628b48*/
        {
          Byte::Zero(v5); /*0x628b3c*/
          v5 += 65; /*0x628b41*/
          --v3; /*0x628b47*/
        }
        while ( v3 ); /*0x628b48*/
      }
      this->Items = a3; /*0x628b4a*/
    }
    else
    {
      v6 = (Byte *)__2_YAPAXI_Z(260 * a2); /*0x628b5f*/
      if ( v6 ) /*0x628b66*/
      {
        v7 = v6; /*0x628b6b*/
        if ( a2 - 1 >= 0 ) /*0x628b6f*/
        {
          do /*0x628b82*/
          {
            Byte::Zero(v7); /*0x628b76*/
            v7 += 65; /*0x628b7b*/
            --v3; /*0x628b81*/
          }
          while ( v3 ); /*0x628b82*/
        }
      }
      else
      {
        v6 = 0; /*0x628b86*/
      }
      this->Items = v6; /*0x628b88*/
      this->IsAllocated = 1; /*0x628b8b*/
    }
  }
  /* X11: vtable install elided (implicit via DynamicVectorClass virtuals 0x628b8f) */
  this->M20 = 10; /*0x628b95*/
  this->M16 = 0; /*0x628b9c*/
  return &this->vtable0; /*0x628ba5*/

}
} // namespace gamemd

// 0x628F80
namespace gamemd {
void sub_628F80()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x628f8c*/
  dbl_AC4930 = Math::Sqrt(v0 + v0); /*0x628f9e*/
}
} // namespace gamemd

// 0x628FB0
namespace gamemd {
void sub_628FB0()
{
  dbl_AC4980 = dbl_AC4930 / 60.0; /*0x628fbc*/
}
} // namespace gamemd

// 0x628FD0
namespace gamemd {
void sub_628FD0()
{
  dbl_AC4968 = 1.0 / dbl_AC4980; /*0x628fdc*/
}
} // namespace gamemd

// 0x628FF0
namespace gamemd {
void sub_628FF0()
{
  dbl_AC4960 = 0.0174532925199433 * 45.0; /*0x628ffc*/
}
} // namespace gamemd

// 0x629010
namespace gamemd {
void sub_629010()
{
  dbl_AC4938 = 0.0174532925199433 * 60.0; /*0x62901c*/
}
} // namespace gamemd

// 0x629030
namespace gamemd {
void sub_629030()
{
  dbl_AC48F8 = 0.0174532925199433 * 90.0; /*0x62903c*/
}
} // namespace gamemd

// 0x629050
namespace gamemd {
long long sub_629050()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_AC48F8 - dbl_AC4938); /*0x629062*/
  result = Math::RoundToInt(v0 * dbl_AC4930 * 0.5); /*0x629076*/
  dword_AC4988 = result; /*0x62907b*/
  return result; /*0x629080*/
}
} // namespace gamemd

// 0x629090
namespace gamemd {
void sub_629090()
{
  dbl_AC4940 = Math::ArcTan((double)dword_AC4988 * 0.00390625); /*0x6290a7*/
}
} // namespace gamemd

// 0x6290C0
namespace gamemd {
void sub_6290C0()
{
  dbl_AC4958 = Math::ArcTan((double)(2 * dword_AC4988) / dbl_AC4930); /*0x6290e2*/
}
} // namespace gamemd

// 0x6290F0
namespace gamemd {
long long sub_6290F0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC4988) + 0.5); /*0x62910b*/
  dword_AC497C = result; /*0x629110*/
  return result; /*0x629116*/
}
} // namespace gamemd

// 0x629120
namespace gamemd {
int sub_629120()
{
  dword_AC4928 = 0; /*0x629122*/
  return 0; /*0x62912e*/
}
} // namespace gamemd

// 0x629130
namespace gamemd {
int sub_629130()
{
  dword_AC4948 = 0; /*0x629132*/
  dword_AC494C = 0; /*0x629137*/
  dword_AC4950 = 0; /*0x62913c*/
  return 0; /*0x629141*/
}
} // namespace gamemd

// 0x629150
namespace gamemd {
int sub_629150()
{
  dword_AC4978 = 0; /*0x629155*/
  dword_AC4970 = 128; /*0x62915f*/
  dword_AC4974 = 128; /*0x629164*/
  return 128; /*0x629169*/
}
} // namespace gamemd

// 0x629170
namespace gamemd {
int sub_629170()
{
  dword_AC4900 = 0; /*0x629172*/
  dword_AC4904 = 0; /*0x629177*/
  dword_AC4908 = 0; /*0x62917c*/
  dword_AC490C = 0; /*0x629181*/
  return 0; /*0x629186*/
}
} // namespace gamemd

// 0x629190
namespace gamemd {
int sub_629190()
{
  dword_AC4914 = 0; /*0x629197*/
  dword_AC4918 = 0; /*0x62919c*/
  byte_AC491C = 1; /*0x6291a1*/
  byte_AC491D = 0; /*0x6291a8*/
  dword_AC4910 = (int)&vt_DynamicVectorClass; /*0x6291ad*/
  dword_AC4924 = 10; /*0x6291b7*/
  dword_AC4920 = 0; /*0x6291c1*/
  return atexit(sub_6291D0); /*0x6291cc*/
}
} // namespace gamemd

// 0x6291D0
namespace gamemd {
void sub_6291D0()
{
  dword_AC4910 = (int)&vt_VectorClass; /*0x6291d8*/
  if ( dword_AC4914 && byte_AC491D ) /*0x6291ec*/
  {
    operator delete((void *)(dword_AC4914)); /*0x6291ef*/
    dword_AC4914 = 0; /*0x6291f7*/
  }
  byte_AC491D = 0; /*0x6291fd*/
  dword_AC4918 = 0; /*0x629203*/
}
} // namespace gamemd

// 0x629710
namespace gamemd {
int E4Recv_629710::sub_629710()
{

  this->customSound_controller[0] = 0; /*0x629712*/
  this->ambientSoundController[4] = 0; /*0x629715*/
  return 0; /*0x629718*/

}
} // namespace gamemd

// 0x62B3D0
namespace gamemd {
void sub_62B3D0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x62b3dc*/
  dbl_AC49B8 = Math::Sqrt(v0 + v0); /*0x62b3ee*/
}
} // namespace gamemd

// 0x62B400
namespace gamemd {
void sub_62B400()
{
  dbl_AC4A10 = dbl_AC49B8 / 60.0; /*0x62b40c*/
}
} // namespace gamemd

// 0x62B420
namespace gamemd {
void sub_62B420()
{
  dbl_AC49F8 = 1.0 / dbl_AC4A10; /*0x62b42c*/
}
} // namespace gamemd

// 0x62B440
namespace gamemd {
void sub_62B440()
{
  dbl_AC49F0 = 0.0174532925199433 * 45.0; /*0x62b44c*/
}
} // namespace gamemd

// 0x62B460
namespace gamemd {
void sub_62B460()
{
  dbl_AC49C0 = 0.0174532925199433 * 60.0; /*0x62b46c*/
}
} // namespace gamemd

// 0x62B480
namespace gamemd {
void sub_62B480()
{
  dbl_AC4990 = 0.0174532925199433 * 90.0; /*0x62b48c*/
}
} // namespace gamemd

// 0x62B4A0
namespace gamemd {
long long sub_62B4A0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_AC4990 - dbl_AC49C0); /*0x62b4b2*/
  result = Math::RoundToInt(v0 * dbl_AC49B8 * 0.5); /*0x62b4c6*/
  dword_AC4A18 = result; /*0x62b4cb*/
  return result; /*0x62b4d0*/
}
} // namespace gamemd

// 0x62B4E0
namespace gamemd {
void sub_62B4E0()
{
  dbl_AC49C8 = Math::ArcTan((double)dword_AC4A18 * 0.00390625); /*0x62b4f7*/
}
} // namespace gamemd

// 0x62B510
namespace gamemd {
void sub_62B510()
{
  dbl_AC49E8 = Math::ArcTan((double)(2 * dword_AC4A18) / dbl_AC49B8); /*0x62b532*/
}
} // namespace gamemd

// 0x62B540
namespace gamemd {
long long sub_62B540()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC4A18) + 0.5); /*0x62b55b*/
  dword_AC4A0C = result; /*0x62b560*/
  return result; /*0x62b566*/
}
} // namespace gamemd

// 0x62B570
namespace gamemd {
int sub_62B570()
{
  word_AC49B0 = 0; /*0x62b572*/
  word_AC49B2 = 0; /*0x62b578*/
  return 0; /*0x62b57e*/
}
} // namespace gamemd

// 0x62B580
namespace gamemd {
int sub_62B580()
{
  dword_AC49D8 = 0; /*0x62b582*/
  dword_AC49DC = 0; /*0x62b587*/
  dword_AC49E0 = 0; /*0x62b58c*/
  return 0; /*0x62b591*/
}
} // namespace gamemd

// 0x62B5A0
namespace gamemd {
int sub_62B5A0()
{
  dword_AC4A08 = 0; /*0x62b5a5*/
  dword_AC4A00 = 128; /*0x62b5af*/
  dword_AC4A04 = 128; /*0x62b5b4*/
  return 128; /*0x62b5b9*/
}
} // namespace gamemd

// 0x62B5C0
namespace gamemd {
int sub_62B5C0()
{
  dword_AC49A0 = 0; /*0x62b5c2*/
  dword_AC49A4 = 0; /*0x62b5c7*/
  dword_AC49A8 = 0; /*0x62b5cc*/
  dword_AC49AC = 0; /*0x62b5d1*/
  return 0; /*0x62b5d6*/
}
} // namespace gamemd

// 0x62D510
namespace gamemd {
int E4Recv_62D510::sub_62D510()
{

  double v2; // st7
  int *location; // edi
  int v4; // ebx
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // edi
  int v9; // eax
  int GroundHeight; // edi
  int v12; // [esp+Ch] [ebp-18h] BYREF
  int v13; // [esp+10h] [ebp-14h]
  int v14; // [esp+14h] [ebp-10h]
  unsigned int v15[3]; // [esp+18h] [ebp-Ch] BYREF

  v2 = this->M228; /*0x62d524*/
  location = this->location; /*0x62d530*/
  v15[0] = this->location[0]; /*0x62d532*/
  v4 = this->location[1]; /*0x62d536*/
  v5 = this->location[2]; /*0x62d539*/
  v6 = this->location[0]; /*0x62d53c*/
  v15[2] = v5; /*0x62d53e*/
  v7 = location->u32_4; /*0x62d544*/
  v12 = v6; /*0x62d547*/
  v8 = location->u32_8; /*0x62d54e*/
  v13 = v7; /*0x62d551*/
  v14 = v8; /*0x62d555*/
  v15[1] = v4; /*0x62d559*/
  if ( v2 > 0.0 ) /*0x62d55d*/
  {
    v9 = this->M264; /*0x62d565*/
    v12 = this->M256 + v6; /*0x62d56d*/
    v13 = this->M260 + v7; /*0x62d57b*/
    v14 = v9 + v8; /*0x62d57f*/
  }
  if ( this->M228 > 0.0 ) /*0x62d594*/
  {
    GroundHeight = Cell::GetGroundHeight(v15); /*0x62d5af*/
    if ( (int)Cell::GetGroundHeight(&v12) > GroundHeight ) /*0x62d5b8*/
    {
      this->M301 = 1; /*0x62d5bc*/
      this->M305 = 1; /*0x62d5c2*/
    }
  }
  return (*((int (**)(ObjectClass *, int *))this->AbstractClass + 109))(this, &v12); /*0x62d5d7*/

}
} // namespace gamemd

// 0x62D760
namespace gamemd {
void nullsub_214()
{
  ; /*0x62d760*/
}
} // namespace gamemd

// 0x62DA40
namespace gamemd {
void sub_62DA40()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x62da4c*/
  dbl_AC4A40 = Math::Sqrt(v0 + v0); /*0x62da5e*/
}
} // namespace gamemd

// 0x62DA70
namespace gamemd {
void sub_62DA70()
{
  dbl_AC4A90 = dbl_AC4A40 / 60.0; /*0x62da7c*/
}
} // namespace gamemd

// 0x62DA90
namespace gamemd {
void sub_62DA90()
{
  dbl_AC4A78 = 1.0 / dbl_AC4A90; /*0x62da9c*/
}
} // namespace gamemd

// 0x62DAB0
namespace gamemd {
void sub_62DAB0()
{
  dbl_AC4A70 = 0.0174532925199433 * 45.0; /*0x62dabc*/
}
} // namespace gamemd

// 0x62DAD0
namespace gamemd {
void sub_62DAD0()
{
  dbl_AC4A48 = 0.0174532925199433 * 60.0; /*0x62dadc*/
}
} // namespace gamemd

// 0x62DAF0
namespace gamemd {
void sub_62DAF0()
{
  dbl_AC4A20 = 0.0174532925199433 * 90.0; /*0x62dafc*/
}
} // namespace gamemd

// 0x62DB10
namespace gamemd {
long long sub_62DB10()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_AC4A20 - dbl_AC4A48); /*0x62db22*/
  result = Math::RoundToInt(v0 * dbl_AC4A40 * 0.5); /*0x62db36*/
  dword_AC4A98 = result; /*0x62db3b*/
  return result; /*0x62db40*/
}
} // namespace gamemd

// 0x62DB50
namespace gamemd {
void sub_62DB50()
{
  dbl_AC4A50 = Math::ArcTan((double)dword_AC4A98 * 0.00390625); /*0x62db67*/
}
} // namespace gamemd

// 0x62DB80
namespace gamemd {
void sub_62DB80()
{
  dbl_AC4A68 = Math::ArcTan((double)(2 * dword_AC4A98) / dbl_AC4A40); /*0x62dba2*/
}
} // namespace gamemd

// 0x62DBB0
namespace gamemd {
long long sub_62DBB0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_AC4A98) + 0.5); /*0x62dbcb*/
  dword_AC4A8C = result; /*0x62dbd0*/
  return result; /*0x62dbd6*/
}
} // namespace gamemd

// 0x62DBE0
namespace gamemd {
int sub_62DBE0()
{
  word_AC4A38 = 0; /*0x62dbe2*/
  word_AC4A3A = 0; /*0x62dbe8*/
  return 0; /*0x62dbee*/
}
} // namespace gamemd

// 0x62DBF0
namespace gamemd {
int sub_62DBF0()
{
  dword_AC4A58 = 0; /*0x62dbf2*/
  dword_AC4A5C = 0; /*0x62dbf7*/
  dword_AC4A60 = 0; /*0x62dbfc*/
  return 0; /*0x62dc01*/
}
} // namespace gamemd

// 0x62DC10
namespace gamemd {
int sub_62DC10()
{
  dword_AC4A88 = 0; /*0x62dc15*/
  dword_AC4A80 = 128; /*0x62dc1f*/
  dword_AC4A84 = 128; /*0x62dc24*/
  return 128; /*0x62dc29*/
}
} // namespace gamemd

// 0x62DC30
namespace gamemd {
int sub_62DC30()
{
  dword_AC4A28 = 0; /*0x62dc32*/
  dword_AC4A2C = 0; /*0x62dc37*/
  dword_AC4A30 = 0; /*0x62dc3c*/
  dword_AC4A34 = 0; /*0x62dc41*/
  return 0; /*0x62dc46*/
}
} // namespace gamemd
