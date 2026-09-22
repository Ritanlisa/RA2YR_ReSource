// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_631300_e4.hpp"
#include "e4/classes/E4Recv_631640_e4.hpp"
#include "e4/classes/E4Recv_631F10_e4.hpp"
#include "e4/classes/E4Recv_631F30_e4.hpp"
#include "e4/classes/E4Recv_631FC0_e4.hpp"
#include "e4/classes/E4Recv_631FE0_e4.hpp"
#include "e4/classes/E4Recv_6329C0_e4.hpp"
#include "e4/classes/E4Recv_632A20_e4.hpp"
#include "e4/classes/E4Recv_632AC0_e4.hpp"
#include "e4/classes/E4Recv_632B20_e4.hpp"
#include "e4/classes/E4Recv_632D60_e4.hpp"
#include "e4/classes/E4Recv_633A20_e4.hpp"
#include "e4/classes/E4Recv_633A40_e4.hpp"
#include "e4/classes/E4Recv_633A50_e4.hpp"
#include "e4/classes/E4Recv_633A60_e4.hpp"
#include "e4/classes/E4Recv_633A70_e4.hpp"
#include "e4/classes/E4Recv_633A90_e4.hpp"
#include "e4/classes/E4Recv_633AA0_e4.hpp"
#include "e4/classes/E4Recv_633AE0_e4.hpp"
#include "e4/classes/E4Recv_633B00_e4.hpp"
#include "e4/classes/E4Recv_633B10_e4.hpp"
#include "e4/classes/E4Recv_633B20_e4.hpp"
#include "e4/classes/E4Recv_633B30_e4.hpp"
#include "e4/classes/E4Recv_633B40_e4.hpp"
#include "e4/classes/E4Recv_633B70_e4.hpp"
#include "e4/classes/E4Recv_633B80_e4.hpp"
#include "e4/classes/E4Recv_633C60_e4.hpp"
#include "e4/classes/E4Recv_633E50_e4.hpp"
#include "e4/classes/E4Recv_633E60_e4.hpp"
#include "e4/classes/E4Recv_634360_e4.hpp"
#include "e4/classes/E4Recv_6343B0_e4.hpp"
#include "e4/classes/E4Recv_634470_e4.hpp"
#include "e4/classes/E4Recv_634700_e4.hpp"
#include "e4/classes/E4Recv_6347A0_e4.hpp"
#include "e4/classes/E4Recv_634800_e4.hpp"
#include "e4/classes/E4Recv_634810_e4.hpp"
#include "e4/classes/E4Recv_634850_e4.hpp"
#include "e4/classes/E4Recv_634880_e4.hpp"
#include "e4/classes/E4Recv_6348F0_e4.hpp"
#include "e4/classes/E4Recv_634950_e4.hpp"
#include "e4/classes/E4Recv_634960_e4.hpp"
#include "e4/classes/E4Recv_635210_e4.hpp"
#include "e4/classes/E4Recv_6352D0_e4.hpp"
#include "e4/classes/E4Recv_635310_e4.hpp"
#include "e4/classes/E4Recv_635560_e4.hpp"
#include "e4/classes/E4Recv_635680_e4.hpp"
#include "e4/classes/E4Recv_635DF0_e4.hpp"
#include "e4/classes/E4Recv_635E90_e4.hpp"
#include "e4/classes/E4Recv_636110_e4.hpp"
#include "e4/classes/E4Recv_636520_e4.hpp"
#include "e4/classes/E4Recv_636530_e4.hpp"
#include "e4/classes/E4Recv_636540_e4.hpp"
#include "e4/classes/E4Recv_636D90_e4.hpp"
#include "e4/classes/E4Recv_636F00_e4.hpp"
#include "e4/classes/E4Recv_636FA0_e4.hpp"
#include "e4/classes/E4Recv_636FC0_e4.hpp"
#include "e4/classes/E4Recv_636FD0_e4.hpp"
#include "e4/classes/E4Recv_637020_e4.hpp"
#include "e4/classes/E4Recv_637030_e4.hpp"
#include "e4/classes/E4Recv_6375B0_e4.hpp"
#include "e4/classes/E4Recv_63A4A0_e4.hpp"
#include "e4/classes/E4Recv_63AD30_e4.hpp"
#include "e4/classes/E4Recv_63B080_e4.hpp"
#include "e4/classes/E4Recv_63C690_e4.hpp"
#include "e4/classes/E4Recv_63CAE0_e4.hpp"
#include "e4/classes/E4Recv_63CF10_e4.hpp"
#include "e4/classes/E4Recv_63CFC0_e4.hpp"
#include "e4/classes/E4Recv_63D2D0_e4.hpp"
#include "e4/classes/E4Recv_63D480_e4.hpp"
#include "e4/classes/E4Recv_63DAD0_e4.hpp"
#include "e4/classes/E4Recv_63F810_e4.hpp"
#include "e4/classes/E4Recv_63F8F0_e4.hpp"
#include "e4/classes/E4Recv_63FDC0_e4.hpp"
#include "e4/classes/E4Recv_63FE30_e4.hpp"

// 0x630310
namespace gamemd {
unsigned int * SHP_DecodeFrame(int a1, int a2, int a3, size_t Size)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__fastcall SHP_DecodeFrame(int a1, int a2, int a3, size_t Size)
{
  size_t v6; // ebp
  unsigned int v7; // ecx
  int v8; // edi
  int v9; // esi
  _DWORD *v10; // eax
  _DWORD *v11; // ebx
  _DWORD *v12; // esi
  _DWORD *v13; // eax
  _DWORD *v14; // ebx
  int v15; // ebx
  _BYTE *v16; // ebp
  size_t v17; // esi
  unsigned __int8 v18; // bl
  char *v19; // ecx
  char v20; // al
  char v21; // bl
  unsigned int v22; // edi
  unsigned __int8 *v23; // ebp
  unsigned __int8 *v24; // ebx
  int v25; // esi
  int v26; // edx
  int v27; // eax
  int v28; // edi
  unsigned int v29; // edx
  int v30; // eax
  unsigned int v31; // esi
  int v32; // ebp
  unsigned __int8 v33; // bl
  _BYTE *v34; // eax
  bool v35; // cf
  unsigned __int8 *v36; // eax
  char v37; // bl
  unsigned int i; // eax
  unsigned __int8 *v39; // eax
  unsigned int v40; // edi
  unsigned int v41; // ebp
  unsigned __int8 v42; // cl
  _BYTE *v43; // eax
  unsigned __int8 *v44; // eax
  char *v45; // edi
  int v46; // eax
  unsigned int v47; // ecx
  unsigned __int8 *v48; // [esp+30h] [ebp-8B4h]
  _BYTE *v50; // [esp+38h] [ebp-8ACh]
  unsigned __int8 v51; // [esp+38h] [ebp-8ACh]
  unsigned __int8 v52; // [esp+38h] [ebp-8ACh]
  unsigned __int8 v53; // [esp+38h] [ebp-8ACh]
  unsigned int v54; // [esp+3Ch] [ebp-8A8h]
  _DWORD *v55; // [esp+40h] [ebp-8A4h]
  int v56; // [esp+44h] [ebp-8A0h]
  int v57; // [esp+44h] [ebp-8A0h]
  int v58; // [esp+44h] [ebp-8A0h]
  char v59; // [esp+48h] [ebp-89Ch]
  char v60; // [esp+48h] [ebp-89Ch]
  size_t v61; // [esp+4Ch] [ebp-898h]
  unsigned int v62; // [esp+4Ch] [ebp-898h]
  int v63; // [esp+50h] [ebp-894h]
  int v65[3]; // [esp+58h] [ebp-88Ch] BYREF
  _BYTE v66[4]; // [esp+64h] [ebp-880h] BYREF
  unsigned __int16 v67; // [esp+68h] [ebp-87Ch]
  unsigned __int16 v68; // [esp+6Ah] [ebp-87Ah]
  unsigned __int16 v69; // [esp+6Ch] [ebp-878h]
  int v70; // [esp+6Eh] [ebp-876h]
  unsigned __int8 v71; // [esp+A5h] [ebp-83Fh]
  int v72; // [esp+A6h] [ebp-83Eh]
  _BYTE v73[2048]; // [esp+E4h] [ebp-800h] BYREF
  _UNKNOWN *retaddr; // [esp+8E4h] [ebp+0h] BYREF

  if ( !(*(unsigned __int8 (__stdcall **)(_DWORD))(*(_DWORD *)a1 + 20))(0) ) /*0x630328*/
    return 0; /*0x63033b*/
  (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 28))(a1, 1); /*0x630344*/
  (*(void (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)a1 + 36))(a1, v66, 128); /*0x630355*/
  if ( v66[0] != 10 && v66[1] != 5 && v66[3] != 8 ) /*0x63036b*/
    return 0; /*0x630379*/
  v6 = v71 * (unsigned __int16)v72; /*0x6303ca*/
  v7 = v69 - v67 + 1; /*0x6303cd*/
  v8 = (unsigned __int16)v70 - v68 + 1; /*0x6303ce*/
  v54 = v7; /*0x6303d7*/
  v61 = v6; /*0x6303dd*/
  v9 = (v71 != 1) + 1; /*0x6303e1*/
  if ( a3 ) /*0x6303e3*/
  {
    if ( (int)(Size / v7 - 1) < v8 ) /*0x6303f7*/
      v8 = Size / v7 - 1; /*0x6303f9*/
    Buffer::Init(v65, a3, Size); /*0x630408*/
    v10 = __2_YAPAXI_Z(0x20u); /*0x63040f*/
    v11 = v10; /*0x630414*/
    if ( v10 ) /*0x63041d*/
    {
      v10[4] = v9; /*0x63041f*/
      v10[3] = 0; /*0x630429*/
      v10[1] = v54; /*0x630438*/
      v10[2] = v8; /*0x63043b*/
      *v10 = &XSurface_Vtable; /*0x63043e*/
      Buffer::Init(v10 + 5, (int)v65, v54 * v8 * v9); /*0x630444*/
      v12 = v11; /*0x630449*/
      *v11 = &BSurface_Vtable; /*0x63044f*/
      v55 = v11; /*0x630455*/
    }
    else
    {
      v55 = 0; /*0x630460*/
      v12 = 0; /*0x630464*/
    }
    Vector::Clear((int)v65); /*0x630459*/
  }
  else
  {
    v13 = __2_YAPAXI_Z(0x20u); /*0x630473*/
    v14 = v13; /*0x630478*/
    if ( !v13 ) /*0x63047f*/
      return 0; /*0x6304c8*/
    v13[4] = v9; /*0x630481*/
    v13[1] = v54; /*0x630494*/
    v13[2] = v8; /*0x630497*/
    v13[3] = 0; /*0x63049a*/
    *v13 = &XSurface_Vtable; /*0x6304a1*/
    Buffer::Init(v13 + 5, 0, v54 * v8 * v9); /*0x6304a7*/
    *v14 = &BSurface_Vtable; /*0x6304ac*/
    v12 = v14; /*0x6304b2*/
    v55 = v14; /*0x6304b4*/
  }
  if ( !v12 ) /*0x6304ba*/
    return 0; /*0x6304ba*/
  v15 = (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*v12 + 92))(v12, 0, 0); /*0x6304d8*/
  v56 = v15; /*0x6304dc*/
  if ( v15 ) /*0x6304e0*/
  {
    v48 = v73; /*0x6304f1*/
    (*(void (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)a1 + 36))(a1, v73, 2048); /*0x630504*/
    v63 = v15; /*0x63050e*/
    if ( v71 == 3 ) /*0x630514*/
    {
      v16 = __2_YAPAXI_Z(v6); /*0x630520*/
      v50 = v16; /*0x630527*/
      if ( !v16 ) /*0x63052b*/
      {
        (*(void (__thiscall **)(_DWORD *))(*v12 + 96))(v12); /*0x630531*/
        (*(void (__thiscall **)(_DWORD *, int))*v12)(v12, 1); /*0x63053a*/
        return 0; /*0x630548*/
      }
      if ( v8 ) /*0x63054d*/
      {
        v57 = v8; /*0x630553*/
        do /*0x63067e*/
        {
          v17 = 0; /*0x630557*/
          do /*0x6305ea*/
          {
            v18 = *v48; /*0x630568*/
            v19 = (char *)++v48; /*0x63056a*/
            if ( v48 >= (unsigned __int8 *)&retaddr ) /*0x630571*/
            {
              (*(void (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)a1 + 36))(a1, v73, 2048); /*0x630584*/
              v48 = v73; /*0x63058e*/
              v19 = v73; /*0x630592*/
            }
            if ( (v18 & 0xC0) == 0xC0 ) /*0x63059a*/
            {
              v20 = *v19; /*0x63059c*/
              v21 = v18 & 0x3F; /*0x63059e*/
              v59 = *v19; /*0x6305ab*/
              v48 = (unsigned __int8 *)(v19 + 1); /*0x6305af*/
              if ( v19 + 1 >= (char *)&retaddr ) /*0x6305b3*/
              {
                (*(void (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)a1 + 36))(a1, v73, 2048); /*0x6305c6*/
                v20 = v59; /*0x6305d0*/
                v48 = v73; /*0x6305d4*/
              }
              do /*0x6305de*/
              {
                v16[v17++] = v20; /*0x6305d8*/
                --v21; /*0x6305dc*/
              }
              while ( v21 ); /*0x6305de*/
            }
            else
            {
              v16[v17++] = v18; /*0x6305e2*/
            }
          }
          while ( v17 < v61 ); /*0x6305ea*/
          v22 = 0; /*0x6305fb*/
          if ( v54 ) /*0x630604*/
          {
            v23 = &v16[(unsigned __int16)v72]; /*0x63060a*/
            v24 = &v50[2 * (unsigned __int16)v72]; /*0x63060c*/
            do /*0x63066f*/
            {
              v25 = (unsigned __int8)v50[v22]; /*0x63061e*/
              v26 = *v23; /*0x630626*/
              ++v22; /*0x630629*/
              v27 = (int)*v24 >> MEMORY[0x8A0DDC]; /*0x63062a*/
              ++v23; /*0x630632*/
              ++v24; /*0x630633*/
              v63 += 2; /*0x63065f*/
              *(_WORD *)(v63 - 2) = (v25 >> g_BitShift_Green_0 << MEMORY[0x8A0DD0]) /*0x630665*/
                                  | (v26 >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
                                  | (v27 << MEMORY[0x8A0DD8]);
            }
            while ( v22 < v54 ); /*0x63066f*/
            v16 = v50; /*0x630671*/
          }
          --v57; /*0x63067a*/
        }
        while ( v57 ); /*0x63067e*/
        v12 = v55; /*0x630684*/
      }
      __3_YAXPAX_Z(v16); /*0x630689*/
      v28 = a1; /*0x630690*/
      (*(void (__thiscall **)(_DWORD *))(*v12 + 96))(v12); /*0x630699*/
    }
    else
    {
      v29 = v54; /*0x6306a8*/
      v30 = (unsigned __int16)v72; /*0x6306ac*/
      if ( (unsigned __int16)v72 == v54 ) /*0x6306b3*/
      {
        v40 = v54 * v8; /*0x630834*/
        v41 = 0; /*0x630839*/
        v62 = v40; /*0x63083b*/
        while ( v41 < v40 ) /*0x630841*/
        {
          v42 = *v48; /*0x630856*/
          v43 = v48 + 1; /*0x630858*/
          v35 = v48 + 1 < (unsigned __int8 *)&retaddr; /*0x630859*/
          v52 = *v48++; /*0x63085b*/
          if ( !v35 ) /*0x630863*/
          {
            (*(void (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)a1 + 36))(a1, v73, 2048); /*0x630876*/
            v42 = v52; /*0x630880*/
            v48 = v73; /*0x630884*/
            v43 = v73; /*0x630888*/
          }
          if ( (v42 & 0xC0) == 0xC0 ) /*0x630892*/
          {
            v44 = v43 + 1; /*0x630897*/
            v53 = v42 & 0x3F; /*0x630898*/
            v60 = *(v44 - 1); /*0x6308a6*/
            v48 = v44; /*0x6308ac*/
            if ( v44 >= (unsigned __int8 *)&retaddr ) /*0x6308b0*/
            {
              (*(void (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)a1 + 36))(a1, v73, 2048); /*0x6308c3*/
              v48 = v73; /*0x6308cd*/
            }
            v45 = (char *)(v15 + v41); /*0x6308de*/
            LOBYTE(v15) = v60; /*0x6308e1*/
            BYTE1(v15) = v60; /*0x6308e9*/
            v46 = v15 << 16; /*0x6308f1*/
            LOWORD(v46) = v15; /*0x6308f4*/
            v15 = v56; /*0x6308f7*/
            v47 = v53 >> 2; /*0x6308fb*/
            memset32(v45, v46, v47); /*0x6308fe*/
            v41 += v53; /*0x630905*/
            memset(&v45[4 * v47], v46, v53 & 3); /*0x630907*/
            v40 = v62; /*0x630909*/
          }
          else
          {
            *(_BYTE *)(v15 + v41++) = v42; /*0x63090f*/
          }
        }
        v12 = v55; /*0x63091b*/
        v28 = a1; /*0x63091f*/
        (*(void (__thiscall **)(_DWORD *))(*v55 + 96))(v55); /*0x630927*/
      }
      else
      {
        v31 = 0; /*0x6306b9*/
        v51 = 0; /*0x6306bb*/
        if ( v8 ) /*0x6306c2*/
        {
          v32 = v15; /*0x6306c8*/
          v58 = v8; /*0x6306ca*/
          do /*0x6307ad*/
          {
            v31 = 0; /*0x6306ce*/
            if ( v30 ) /*0x6306d2*/
            {
              do /*0x63079c*/
              {
                v33 = *v48; /*0x6306e7*/
                v34 = v48 + 1; /*0x6306e9*/
                v35 = v48 + 1 < (unsigned __int8 *)&retaddr; /*0x6306ea*/
                v51 = *v48++; /*0x6306ec*/
                if ( !v35 ) /*0x6306f4*/
                {
                  (*(void (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)a1 + 36))(a1, v73, 2048); /*0x630707*/
                  v29 = v54; /*0x630711*/
                  v48 = v73; /*0x630715*/
                  v34 = v73; /*0x630719*/
                }
                if ( (v33 & 0xC0) == 0xC0 ) /*0x630723*/
                {
                  v36 = v34 + 1; /*0x630728*/
                  v51 = v33 & 0x3F; /*0x630729*/
                  v37 = *(v36 - 1); /*0x63072d*/
                  v48 = v36; /*0x630737*/
                  if ( v36 >= (unsigned __int8 *)&retaddr ) /*0x63073d*/
                  {
                    (*(void (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)a1 + 36))(a1, v73, 2048); /*0x630750*/
                    v29 = v54; /*0x63075a*/
                    v48 = v73; /*0x63075e*/
                  }
                  for ( i = 0; i < v51; ++i ) /*0x63076e*/
                  {
                    if ( i + v31 < v29 ) /*0x630775*/
                      *(_BYTE *)(i + v32 + v31) = v37; /*0x63077a*/
                  }
                  v31 += v51; /*0x630782*/
                }
                else if ( v31 < v29 ) /*0x630788*/
                {
                  *(_BYTE *)(v31 + v32) = v33; /*0x63078a*/
                  ++v31; /*0x63078d*/
                }
                v30 = (unsigned __int16)v72; /*0x630795*/
              }
              while ( v31 < (unsigned __int16)v72 ); /*0x63079c*/
            }
            v32 += v29; /*0x6307a6*/
            --v58; /*0x6307a9*/
          }
          while ( v58 ); /*0x6307ad*/
        }
        v39 = v48; /*0x6307b3*/
        if ( v31 == v29 ) /*0x6307b9*/
        {
          v28 = a1; /*0x6307bd*/
          v39 = v48 + 1; /*0x6307c1*/
          v51 = *v48; /*0x6307cb*/
          if ( v48 + 1 >= (unsigned __int8 *)&retaddr ) /*0x6307cf*/
          {
            (*(void (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)a1 + 36))(a1, v73, 2048); /*0x6307e2*/
            v39 = v73; /*0x6307f0*/
          }
        }
        else
        {
          v28 = a1; /*0x6307f4*/
        }
        if ( (v51 & 0xC0) == 0xC0 && v39 + 1 >= (unsigned __int8 *)&retaddr ) /*0x63080e*/
          (*(void (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)v28 + 36))(v28, v73, 2048); /*0x630821*/
        v12 = v55; /*0x630824*/
        (*(void (__thiscall **)(_DWORD *))(*v55 + 96))(v55); /*0x63082c*/
      }
    }
  }
  else
  {
    v28 = a1; /*0x63092c*/
  }
  if ( a2 ) /*0x630936*/
  {
    if ( v71 == 1 ) /*0x630940*/
    {
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v28 + 40))(v28, -768, 2); /*0x63094d*/
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v28 + 36))(v28, a2, 768); /*0x63095a*/
    }
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)v28 + 52))(v28); /*0x630961*/
  return v12; /*0x63032f*/
}
}
} // namespace gamemd

// 0x630C10
namespace gamemd {
int PhoneEditorDialogProc(HWND hWnd, unsigned int a2, unsigned int a3, unsigned int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall PhoneEditorDialogProc(HWND hWnd, unsigned int a2, unsigned int a3, unsigned int a4)
{
  int result; // eax
  LONG WindowLongA; // ebx
  HWND v6; // eax
  LRESULT v7; // eax
  HWND v8; // eax
  HWND DlgItem; // eax
  HWND v10; // esi
  HWND v11; // esi

  result = BaseDialogProc(hWnd, a2, a3, a4); /*0x630c29*/
  if ( !result ) /*0x630c30*/
  {
    WindowLongA = GetWindowLongA(hWnd, 8); /*0x630c46*/
    if ( a2 == 273 ) /*0x630c48*/
    {
      if ( (unsigned __int16)a3 > 0x5E0u ) /*0x630cbe*/
      {
        if ( (unsigned __int16)a3 == 1508 ) /*0x630e66*/
        {
          if ( !HIWORD(a3) ) /*0x630e82*/
            UI_Pop_631500(WindowLongA); /*0x630e89*/
        }
        else if ( (unsigned __int16)a3 == 1633 && !HIWORD(a3) ) /*0x630e6d*/
        {
          UI_Pop(WindowLongA); /*0x630e74*/
          return 0; /*0x630e7f*/
        }
      }
      else
      {
        switch ( (unsigned __int16)a3 ) /*0x630cc4*/
        {
          case 0x5E0u: /*0x630cc4*/
            if ( HIWORD(a3) == 1 ) /*0x630dda*/
            {
              DlgItem = GetDlgItem(*(HWND *)WindowLongA, 1504); /*0x630dee*/
              v10 = DlgItem; /*0x630df0*/
              if ( DlgItem ) /*0x630df4*/
              {
                if ( SendMessageA(DlgItem, 0x18Bu, 0, 0) > 0 ) /*0x630e0e*/
                {
                  MEMORY[0xA8DABC] = SendMessageA(v10, 0x188u, 0, 0); /*0x630e1f*/
                  if ( (int)MEMORY[0xA8DABC] > -1 ) /*0x630e24*/
                  {
                    v11 = GetDlgItem(*(HWND *)WindowLongA, 1509); /*0x630e36*/
                    SendMessageA(v11, 0x4B4u, 0, *((_DWORD *)MEMORY[0xA8DB38] + MEMORY[0xA8DABC]) + 154); /*0x630e4f*/
                    SetFocus(v11); /*0x630e52*/
                    return 0; /*0x630e5e*/
                  }
                }
              }
            }
            break;
          case 1u: /*0x630cc4*/
            if ( !HIWORD(a3) && (unsigned __int8)UI_Get_630EA0(WindowLongA) == 1 ) /*0x630dbe*/
            {
              *(_DWORD *)(WindowLongA + 4) = 1; /*0x630dc4*/
              return 0; /*0x630dd1*/
            }
            break;
          case 2u: /*0x630cc4*/
            if ( !HIWORD(a3) ) /*0x630d93*/
            {
              *(_DWORD *)(WindowLongA + 4) = 2; /*0x630d9c*/
              return 0; /*0x630da9*/
            }
            break;
          default:
            if ( (unsigned __int16)a3 == 1339 && !HIWORD(a3) ) /*0x630ce3*/
            {
              v6 = GetDlgItem(*(HWND *)WindowLongA, 1504); /*0x630cfa*/
              if ( v6 ) /*0x630cfe*/
              {
                v7 = SendMessageA(v6, 0x188u, 0, 0); /*0x630d14*/
                MEMORY[0xA8DABC] = v7; /*0x630d19*/
                if ( v7 > -1 ) /*0x630d1e*/
                {
                  if ( v7 < (int)DataGlobal_A8DB44 && v7 < (int)--DataGlobal_A8DB44 ) /*0x630d37*/
                  {
                    do /*0x630d4f*/
                    {
                      ++v7; /*0x630d3f*/
                      *((_DWORD *)MEMORY[0xA8DB38] + v7 - 1) = *((_DWORD *)MEMORY[0xA8DB38] + v7); /*0x630d43*/
                    }
                    while ( v7 < (int)DataGlobal_A8DB44 ); /*0x630d4f*/
                  }
                  *(_BYTE *)(WindowLongA + 8) = 1; /*0x630d53*/
                  PhoneEditor::PopulateList((HWND *)WindowLongA); /*0x630d57*/
                  if ( MEMORY[0xA8DABC] == -1 ) /*0x630d63*/
                  {
                    v8 = GetDlgItem(*(HWND *)WindowLongA, 1509); /*0x630d71*/
                    if ( v8 ) /*0x630d75*/
                    {
                      SendMessageA(v8, 0x4B4u, 0, (LPARAM)&g_INI_DefaultBuffer); /*0x630d88*/
                      return 0; /*0x630d90*/
                    }
                  }
                }
              }
            }
            break;
        }
      }
    }
    else if ( a2 == 1175 ) /*0x630c50*/
    {
      SendDlgItemMessageA(hWnd, 1509, 0xC5u, 0x14u, 0); /*0x630c6b*/
      SendDlgItemMessageA(hWnd, 1504, 0x4A6u, 0x90u, 2); /*0x630c7f*/
      SendDlgItemMessageA(hWnd, 1504, 0x4A6u, 0x79u, 150); /*0x630c93*/
      SendDlgItemMessageA(hWnd, 1504, 0x4A6u, 0, 275); /*0x630ca7*/
      return 0; /*0x630caf*/
    }
    return 0; /*0x630e8e*/
  }
  return result; /*0x630caa*/
}
}
} // namespace gamemd

// 0x631300
namespace gamemd {
HWND E4Recv_631300::sub_631300()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
HWND __thiscall sub_631300(HWND *this)
{
  HWND result; // eax
  HWND v3; // esi
  HWND DlgItem; // esi

  result = GetDlgItem(*this, 1504); /*0x631314*/
  v3 = result; /*0x631316*/
  if ( result ) /*0x63131a*/
  {
    result = (HWND)SendMessageA(result, 0x18Bu, 0, 0); /*0x63132c*/
    if ( (int)result > 0 ) /*0x631330*/
    {
      result = (HWND)SendMessageA(v3, 0x188u, 0, 0); /*0x63133c*/
      MEMORY[0xA8DABC] = (WPARAM)result; /*0x631341*/
      if ( (int)result > -1 ) /*0x631346*/
      {
        DlgItem = GetDlgItem(*this, 1509); /*0x631358*/
        SendMessageA(DlgItem, 0x4B4u, 0, *((_DWORD *)MEMORY[0xA8DB38] + MEMORY[0xA8DABC]) + 154); /*0x631371*/
        return SetFocus(DlgItem); /*0x631374*/
      }
    }
  }
  return result; /*0x63137a*/
}
}
} // namespace gamemd

// 0x631640
namespace gamemd {
void E4Recv_631640::sub_631640()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_631640(int this)
{
  HWND DlgItem; // eax
  LRESULT v3; // eax
  HWND v4; // eax

  DlgItem = GetDlgItem(*(HWND *)this, 1504); /*0x631653*/
  if ( DlgItem ) /*0x631657*/
  {
    v3 = SendMessageA(DlgItem, 0x188u, 0, 0); /*0x631669*/
    MEMORY[0xA8DABC] = v3; /*0x63166e*/
    if ( v3 > -1 ) /*0x631673*/
    {
      if ( v3 < (int)DataGlobal_A8DB44 && v3 < (int)--DataGlobal_A8DB44 ) /*0x631688*/
      {
        do /*0x6316a0*/
        {
          ++v3; /*0x631690*/
          *((_DWORD *)MEMORY[0xA8DB38] + v3 - 1) = *((_DWORD *)MEMORY[0xA8DB38] + v3); /*0x631694*/
        }
        while ( v3 < (int)DataGlobal_A8DB44 ); /*0x6316a0*/
      }
      *(_BYTE *)(this + 8) = 1; /*0x6316a4*/
      PhoneEditor::PopulateList((HWND *)this); /*0x6316a8*/
      if ( MEMORY[0xA8DABC] == -1 ) /*0x6316b4*/
      {
        v4 = GetDlgItem(*(HWND *)this, 1509); /*0x6316be*/
        if ( v4 ) /*0x6316c2*/
          SendMessageA(v4, 0x4B4u, 0, (LPARAM)&g_INI_DefaultBuffer); /*0x6316d1*/
      }
    }
  }
}
}
} // namespace gamemd

// 0x631760
namespace gamemd {
int NetworkSettingsDlgProc(HWND hWnd, unsigned int a2, unsigned int a3, HWND a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall NetworkSettingsDlgProc(HWND hWnd, unsigned int a2, unsigned int a3, HWND a4)
{
  int result; // eax
  LONG WindowLongA; // ecx
  int v6; // [esp+0h] [ebp-408h]
  _DWORD *v7; // [esp+4h] [ebp-404h]
  LONG v8; // [esp+10h] [ebp-3F8h]
  wchar_t lParam[64]; // [esp+14h] [ebp-3F4h] BYREF

  result = BaseDialogProc((SkirmishDialog *)hWnd, a2, a3, (unsigned int)a4); /*0x63178c*/
  if ( !result ) /*0x631793*/
  {
    WindowLongA = GetWindowLongA(hWnd, 8); /*0x6317a2*/
    v8 = WindowLongA; /*0x6317aa*/
    if ( a2 == 273 ) /*0x6317ae*/
    {
      if ( (unsigned __int16)a3 > 0x5E5u ) /*0x6317ff*/
      {
        if ( (unsigned __int16)a3 == 1635 ) /*0x63190a*/
        {
          if ( HIWORD(a3) ) /*0x631986*/
          {
            SendMessageA(a4, 0xF1u, 1u, 0); /*0x631995*/
            SendDlgItemMessageA(hWnd, 1636, 0xF1u, 0, 0); /*0x6319aa*/
          }
        }
        else if ( (unsigned __int16)a3 == 1636 && HIWORD(a3) ) /*0x631913*/
        {
          SendMessageA(a4, 0xF1u, 1u, 0); /*0x631926*/
          SendDlgItemMessageA(hWnd, 1635, 0xF1u, 0, 0); /*0x63193b*/
          UpdateWindow(hWnd); /*0x631948*/
          ShowWindow(hWnd, 0); /*0x631953*/
          UpdateWindow(g_hWnd); /*0x63195c*/
          Network::sendGameEvent((Modem *)(v8 + 12), v6, v7); /*0x63196d*/
          ShowWindow(hWnd, 5); /*0x631975*/
          return 0; /*0x631983*/
        }
      }
      else
      {
        switch ( (unsigned __int16)a3 ) /*0x631805*/
        {
          case 0x5E5u: /*0x631805*/
            if ( HIWORD(a3) == 1281 || HIWORD(a3) == 512 ) /*0x6318c3*/
            {
              SendMessageA(a4, 0x4B3u, 0x40u, (LPARAM)lParam); /*0x6318dc*/
              WideString::Trim(lParam); /*0x6318e2*/
              SendMessageA(a4, 0x4B2u, 0, (LPARAM)lParam); /*0x6318f4*/
              return 0; /*0x631902*/
            }
            break;
          case 1u: /*0x631805*/
            if ( !HIWORD(a3) ) /*0x63188c*/
            {
              Network_Set(WindowLongA); /*0x631895*/
              *(_DWORD *)(v8 + 4) = 1; /*0x6318a1*/
              return 0; /*0x6318b1*/
            }
            break;
          case 2u: /*0x631805*/
            if ( !HIWORD(a3) ) /*0x63186d*/
            {
              *(_DWORD *)(WindowLongA + 4) = 2; /*0x631879*/
              return 0; /*0x631889*/
            }
            break;
          default:
            if ( (unsigned __int16)a3 == 1503 && (HIWORD(a3) == 1281 || HIWORD(a3) == 512) ) /*0x63182b*/
            {
              SendMessageA(a4, 0x4B5u, 0x40u, (LPARAM)lParam); /*0x631844*/
              String::Trim((char *)lParam); /*0x63184a*/
              SendMessageA(a4, 0x4B4u, 0, (LPARAM)lParam); /*0x63185c*/
              return 0; /*0x63186a*/
            }
            break;
        }
      }
    }
    else if ( a2 == 1175 ) /*0x6317b6*/
    {
      SendDlgItemMessageA(hWnd, 1509, 0xC5u, 0x14u, 0); /*0x6317d1*/
      SendDlgItemMessageA(hWnd, 1503, 0xC5u, 0x14u, 0); /*0x6317e2*/
      return 0; /*0x6317f0*/
    }
    return 0; /*0x6319b0*/
  }
  return result; /*0x6317e4*/
}
}
} // namespace gamemd

// 0x633AB0
namespace gamemd {
int sub_633AB0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// ?do_decimal_point@?$_Mpunct@D@std@@MBEDXZ
// doubtful name
char __thiscall sub_633AB0(_BYTE *this)
{
  return this->vtable4; /*0x633ab3*/
}
}
} // namespace gamemd

// 0x633BC0
namespace gamemd {
unsigned int * ScenarioClass_GetActionCoords(unsigned int * a1, unsigned char * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__fastcall ScenarioClass_GetActionCoords(_DWORD *a1, _BYTE *a2)
{
  int *v3; // eax
  int v4; // edx
  _DWORD *v5; // eax
  _BYTE v7[12]; // [esp+4h] [ebp-Ch] BYREF

  if ( *a2 == 4 ) /*0x633bca*/
  {
    if ( a2[18] ) /*0x633bcc*/
    {
      v3 = (int *)BuildingLoadQueue::GetNext(a2 + 14); /*0x633bd6*/
      if ( v3 ) /*0x633bdd*/
      {
        v4 = *v3; /*0x633bdf*/
LABEL_11:
        v5 = (_DWORD *)(*(int (__thiscall **)(int *, _BYTE *))(v4 + 88))(v3, v7); /*0x633c1b*/
        *a1 = *v5; /*0x633c25*/
        a1[1] = v5[1]; /*0x633c2a*/
        a1[2] = v5[2]; /*0x633c30*/
        return a1; /*0x633c39*/
      }
    }
    else if ( a2[28] ) /*0x633be7*/
    {
      v3 = (int *)BuildingLoadQueue::GetNext(a2 + 24); /*0x633bf1*/
      if ( v3 ) /*0x633bf8*/
      {
        v4 = *v3; /*0x633bfa*/
        goto LABEL_11; /*0x633c00*/
      }
    }
    else if ( a2[23] ) /*0x633c02*/
    {
      v3 = (int *)BuildingLoadQueue::GetNext(a2 + 19); /*0x633c0c*/
      if ( v3 ) /*0x633c13*/
      {
        v4 = *v3; /*0x633c15*/
        goto LABEL_11; /*0x633c15*/
      }
    }
  }
  *a1 = -1; /*0x633c43*/
  a1[1] = -1; /*0x633c4a*/
  a1[2] = -1; /*0x633c4d*/
  return a1; /*0x633c35*/
}
}
} // namespace gamemd

// 0x635560
namespace gamemd {
int E4Recv_635560::sub_635560(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_635560(_DWORD *this, int a2)
{
  int *Viewport; // eax
  int v4; // edx
  int v5; // eax
  _DWORD *ScenarioClassActionCoords; // eax
  int *v7; // eax
  _DWORD *v8; // eax
  int v9; // edi
  int v10; // ecx
  int v11; // edx
  int v12; // esi
  int result; // eax
  int v14; // [esp+10h] [ebp-54h] BYREF
  _DWORD v15[3]; // [esp+18h] [ebp-4Ch] BYREF
  int v16[4]; // [esp+24h] [ebp-40h] BYREF
  int v17; // [esp+34h] [ebp-30h] BYREF
  int v18; // [esp+38h] [ebp-2Ch]
  int v19; // [esp+3Ch] [ebp-28h]
  int v20; // [esp+40h] [ebp-24h]
  _DWORD v21[4]; // [esp+44h] [ebp-20h] BYREF
  _DWORD v22[4]; // [esp+54h] [ebp-10h] BYREF

  Viewport = Display::GetViewport(v16); /*0x63556d*/
  v21[0] = *Viewport; /*0x635574*/
  v21[1] = Viewport[1]; /*0x63557b*/
  v21[2] = Viewport[2]; /*0x635582*/
  v4 = Viewport[3]; /*0x635586*/
  v5 = *(this + 1); /*0x635589*/
  v21[3] = v4; /*0x63558c*/
  ScenarioClassActionCoords = GetScenarioClassActionCoords(v16, *(_BYTE **)(*(_DWORD *)v5 + 4)); /*0x635599*/
  v15[0] = *ScenarioClassActionCoords; /*0x6355a0*/
  v15[1] = ScenarioClassActionCoords[1]; /*0x6355a7*/
  v15[2] = ScenarioClassActionCoords[2]; /*0x6355b2*/
  v7 = ToCoordPixel(&v14, v15); /*0x6355ba*/
  v8 = ComputeBounds(v22, 8, *v7, v7[1]); /*0x6355cf*/
  v9 = 3; /*0x6355d6*/
  v10 = v8[1] - 4; /*0x6355e8*/
  v11 = v8[2] + 8; /*0x6355ee*/
  v12 = v8[3]; /*0x6355f1*/
  v17 = *v8 - 4; /*0x6355f4*/
  v18 = v10; /*0x6355fb*/
  v20 = v12 + 8; /*0x6355ff*/
  v19 = v11; /*0x635607*/
  do /*0x63566d*/
  {
    result = (*(int (__thiscall **)(int, _DWORD *, int *, int))(*(_DWORD *)DSurface_Composite + 84))( /*0x635620*/
               DSurface_Composite,
               v21,
               &v17,
               a2);
    if ( v19 > -2 && v20 > -2 ) /*0x63562d*/
    {
      ++v17; /*0x63564f*/
      ++v18; /*0x635657*/
      result = 2; /*0x63565b*/
      v19 -= 2; /*0x635664*/
      v20 -= 2; /*0x635668*/
    }
    else
    {
      v17 = 0; /*0x63562f*/
      v18 = 0; /*0x635633*/
      v19 = 0; /*0x635637*/
      v20 = 0; /*0x63563b*/
    }
    --v9; /*0x63566c*/
  }
  while ( v9 ); /*0x63566d*/
  return result; /*0x63566f*/
}
}
} // namespace gamemd

// 0x635680
namespace gamemd {
int E4Recv_635680::sub_635680(int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_635680(_DWORD **this, int a2)
{
  int *Viewport; // eax
  _DWORD *Coords; // eax
  int *v5; // eax
  int *v6; // eax
  int v7; // edi
  int result; // eax
  int v9; // [esp+10h] [ebp-60h] BYREF
  _DWORD v10[3]; // [esp+18h] [ebp-58h] BYREF
  int v11[3]; // [esp+24h] [ebp-4Ch] BYREF
  int v12; // [esp+30h] [ebp-40h] BYREF
  int v13; // [esp+34h] [ebp-3Ch]
  int v14; // [esp+38h] [ebp-38h]
  int v15; // [esp+3Ch] [ebp-34h]
  int v16; // [esp+40h] [ebp-30h] BYREF
  int v17; // [esp+44h] [ebp-2Ch]
  int v18; // [esp+48h] [ebp-28h]
  int v19; // [esp+4Ch] [ebp-24h]
  _DWORD v20[4]; // [esp+50h] [ebp-20h] BYREF
  int v21[4]; // [esp+60h] [ebp-10h] BYREF

  Viewport = Display::GetViewport(&v16); /*0x63568d*/
  v20[0] = *Viewport; /*0x635694*/
  v20[1] = Viewport[1]; /*0x63569b*/
  v20[2] = Viewport[2]; /*0x6356a2*/
  v20[3] = Viewport[3]; /*0x6356b0*/
  Coords = ScriptAction::GetCoords(this, v11); /*0x6356b4*/
  v10[0] = *Coords; /*0x6356bb*/
  v10[1] = Coords[1]; /*0x6356c6*/
  v10[2] = Coords[2]; /*0x6356d1*/
  v5 = ToCoordPixel(&v9, v10); /*0x6356d5*/
  v6 = ComputeBounds(v21, 8, *v5, v5[1]); /*0x6356ea*/
  v16 = *v6; /*0x6356f1*/
  v17 = v6[1]; /*0x6356f8*/
  v18 = v6[2]; /*0x6356ff*/
  v19 = v6[3]; /*0x63570a*/
  ShrinkRect(&v16, 4); /*0x635713*/
  v21[0] = v16; /*0x635728*/
  v12 = v16 - 4; /*0x635738*/
  v13 = v17 - 4; /*0x635740*/
  v14 = v18 + 8; /*0x635744*/
  v15 = v19 + 8; /*0x635748*/
  v7 = 3; /*0x63574c*/
  do /*0x6357b8*/
  {
    result = (*(int (__thiscall **)(int, _DWORD *, int *, int))(*(_DWORD *)DSurface_Composite + 84))( /*0x63576b*/
               DSurface_Composite,
               v20,
               &v12,
               a2);
    if ( v14 > -2 && v15 > -2 ) /*0x635778*/
    {
      ++v12; /*0x63579a*/
      ++v13; /*0x6357a2*/
      result = 2; /*0x6357a6*/
      v14 -= 2; /*0x6357af*/
      v15 -= 2; /*0x6357b3*/
    }
    else
    {
      v12 = 0; /*0x63577a*/
      v13 = 0; /*0x63577e*/
      v14 = 0; /*0x635782*/
      v15 = 0; /*0x635786*/
    }
    --v7; /*0x6357b7*/
  }
  while ( v7 ); /*0x6357b8*/
  return result; /*0x6357ba*/
}
}
} // namespace gamemd

// 0x636F00
namespace gamemd {
int E4Recv_636F00::sub_636F00(int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_636F00(int *this, int a2, int a3)
{
  int v3; // eax
  int v4; // ecx
  int v5; // esi
  int v6; // eax
  int v7; // edx
  _DWORD **v8; // esi
  _DWORD **v9; // edi
  _DWORD *v10; // eax
  _BYTE *v11; // esi

  v3 = *(this + 2); /*0x636f00*/
  v4 = *this; /*0x636f08*/
  v5 = *(_DWORD *)(v3 + 4 * a3); /*0x636f0b*/
  v6 = 0; /*0x636f0e*/
  v7 = *(_DWORD *)(v5 + 16); /*0x636f11*/
  if ( v7 <= 0 ) /*0x636f16*/
    goto LABEL_7; /*0x636f16*/
  v8 = *(_DWORD ***)(v5 + 4); /*0x636f18*/
  v9 = v8; /*0x636f1b*/
  while ( **v9 != v4 ) /*0x636f21*/
  {
    ++v6; /*0x636f23*/
    ++v9; /*0x636f24*/
    if ( v6 >= v7 ) /*0x636f29*/
    {
      v10 = 0; /*0x636f2b*/
      goto LABEL_9; /*0x636f2d*/
    }
  }
  if ( v6 == -1 ) /*0x636f32*/
LABEL_7:
    v10 = 0; /*0x636f34*/
  else
    v10 = v8[v6]; /*0x636f38*/
LABEL_9:
  v11 = (_BYTE *)v10[1]; /*0x636f3b*/
  qmemcpy((void *)a2, v11, 0x6Cu); /*0x636f49*/
  v11 += 108; /*0x636f49*/
  *(_WORD *)(a2 + 108) = *(_WORD *)v11; /*0x636f4b*/
  *(_BYTE *)(a2 + 110) = v11[2]; /*0x636f4d*/
  return a2; /*0x636f4e*/
}
}
} // namespace gamemd

// 0x637270
namespace gamemd {
char ExecutePlanningQueue()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char ExecutePlanningQueue()
{
  int v0; // eax
  int v1; // ecx
  int *v2; // ebp
  int v3; // ebx
  int *v4; // esi
  int ValueArray; // eax
  int v6; // eax
  _BYTE *v7; // esi
  _BYTE *v8; // ecx
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // edi
  int *TypeBuildingClass; // esi
  int v14; // eax
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // ebx
  int v19; // esi
  int v20; // ebp
  int i; // edi
  bool v22; // cc
  char result; // al
  int v24; // esi
  wchar_t *v25; // eax
  wchar_t *StringCSF; // eax
  int v27; // [esp+4h] [ebp-80h]
  _DWORD *v28; // [esp+8h] [ebp-7Ch]
  int v29; // [esp+Ch] [ebp-78h] BYREF
  int v30; // [esp+10h] [ebp-74h]
  _BYTE v31[108]; // [esp+14h] [ebp-70h] BYREF
  __int16 v32; // [esp+80h] [ebp-4h]
  char v33; // [esp+82h] [ebp-2h]

  SelectScriptNode(); /*0x637276*/
  v0 = 0; /*0x637281*/
  if ( g_ScriptActionPool && (int)g_SelectionManager > 0 ) /*0x63728d*/
    g_ScriptActionPool = 0; /*0x63728f*/
  v1 = MEMORY[0xAC4C88]; /*0x637294*/
  v30 = MEMORY[0xAC4C88]; /*0x6372a0*/
  v27 = 0; /*0x6372a4*/
  if ( MEMORY[0xAC4C88] <= 0 ) /*0x6372a8*/
    goto LABEL_37; /*0x6372a8*/
  do /*0x6373e5*/
  {
    v2 = (int *)*((_DWORD *)MEMORY[0xAC4C7C] + v0); /*0x6372b4*/
    v3 = v2[5] - 1; /*0x6372bd*/
    v28 = (_DWORD *)*v2; /*0x6372be*/
    if ( v3 < 0 ) /*0x6372c2*/
      goto LABEL_36; /*0x6372c2*/
    do /*0x6373d0*/
    {
      v4 = *(int **)(v2[2] + 4 * v3); /*0x6372cb*/
      ValueArray = Array::FindValue(v4, *v2); /*0x6372d4*/
      if ( ValueArray == -1 ) /*0x6372dc*/
        v6 = 0; /*0x6372de*/
      else
        v6 = *(_DWORD *)(v4[1] + 4 * ValueArray); /*0x6372e5*/
      v7 = *(_BYTE **)(v6 + 4); /*0x6372e8*/
      qmemcpy(v31, v7, sizeof(v31)); /*0x6372f4*/
      v7 += 108; /*0x6372f4*/
      v32 = *(_WORD *)v7; /*0x6372f6*/
      v33 = v7[2]; /*0x6372f8*/
      if ( v31[0] == 4 ) /*0x6372fe*/
      {
        if ( v31[18] ) /*0x637306*/
        {
          v8 = &v31[14]; /*0x637308*/
        }
        else
        {
          if ( !v31[23] ) /*0x637314*/
            goto LABEL_15; /*0x637314*/
          v8 = &v31[19]; /*0x637316*/
        }
        if ( BuildingLoadQueue::GetNext(v8) ) /*0x63731a*/
          goto LABEL_34; /*0x637326*/
      }
LABEL_15:
      v9 = v2[5]; /*0x63732c*/
      v10 = v3; /*0x63732f*/
      if ( !v9 ) /*0x637333*/
        goto LABEL_22; /*0x637333*/
      if ( v3 >= v9 ) /*0x637337*/
      {
        v11 = v2[37]; /*0x637339*/
        if ( v11 < 0 ) /*0x637341*/
          goto LABEL_22; /*0x637341*/
        v10 = v11 + (v3 - v11) % v2[36]; /*0x637350*/
      }
      if ( v10 < 0 || v10 >= v9 ) /*0x637358*/
      {
LABEL_22:
        v12 = 0; /*0x637362*/
        goto LABEL_23; /*0x637362*/
      }
      v12 = *(_DWORD *)(v2[2] + 4 * v10); /*0x63735d*/
LABEL_23:
      TypeBuildingClass = (int *)BuildingClass::GetPlanningToken(v28); /*0x637364*/
      v29 = v12; /*0x637374*/
      v14 = (*(int (__thiscall **)(int *, int *))(TypeBuildingClass[1] + 16))(TypeBuildingClass + 1, &v29); /*0x63737e*/
      if ( v14 == -1 ) /*0x637384*/
      {
        v15 = 0; /*0x637386*/
      }
      else
      {
        v16 = TypeBuildingClass[5]; /*0x63738a*/
        if ( v16 == 1 ) /*0x637390*/
        {
          v15 = v12; /*0x637392*/
        }
        else
        {
          v17 = v14 + 1; /*0x637396*/
          if ( v17 >= v16 ) /*0x637399*/
            v17 = 0; /*0x63739b*/
          v15 = ArrayClass::GetAt_Wrap(TypeBuildingClass, v17); /*0x6373a0*/
        }
      }
      v29 = v15; /*0x6373a7*/
      if ( v15 && !*(_BYTE *)(v15 + 28) ) /*0x6373ad*/
      {
        *(_BYTE *)(v15 + 28) = 1; /*0x6373b8*/
        VectorClass::Append(&g_ScriptConfig, &v29); /*0x6373c2*/
      }
      TeamClass::Cleanup(v3); /*0x6373ca*/
LABEL_34:
      --v3; /*0x6373cf*/
    }
    while ( v3 >= 0 ); /*0x6373d0*/
    v1 = v30; /*0x6373d6*/
    v0 = v27; /*0x6373da*/
LABEL_36:
    v27 = ++v0; /*0x6373e1*/
  }
  while ( v0 < v1 ); /*0x6373e5*/
LABEL_37:
  v18 = 0; /*0x6373eb*/
  v30 = MEMORY[0xAC4CA8]; /*0x6373f4*/
  if ( MEMORY[0xAC4CA8] > 0 ) /*0x6373f8*/
  {
    do /*0x637438*/
    {
      v19 = *((_DWORD *)MEMORY[0xAC4C9C] + v18); /*0x637400*/
      FactoryClass::ClearObjects((int *)v19); /*0x637405*/
      v20 = *(_DWORD *)(v19 + 16); /*0x63740a*/
      for ( i = 0; i < v20; ++i ) /*0x637411*/
        ScriptAction::PlaceObject(v19, *(_DWORD **)(*(_DWORD *)(v19 + 4) + 4 * i)); /*0x63741c*/
      ScriptAction::FindSquadMember(v19); /*0x637428*/
      v22 = ++v18 < v30; /*0x637432*/
      *(_BYTE *)(v19 + 28) = 0; /*0x637434*/
    }
    while ( v22 ); /*0x637438*/
  }
  MEMORY[0xAC4CA8] = 0; /*0x63743f*/
  result = BlowPipe_23::Clear_1(&g_ScriptConfig); /*0x637449*/
  v24 = MEMORY[0xAC4C90]; /*0x63744e*/
  if ( MEMORY[0xAC4C90] != -1 ) /*0x637457*/
  {
    result = SuperWeaponClass::UpdateAll(); /*0x637463*/
    if ( v24 ) /*0x63746a*/
    {
      if ( v24 == 1 ) /*0x6374c2*/
      {
        result = MEMORY[0xAC4C08]; /*0x6374c4*/
        if ( !MEMORY[0xAC4C08] ) /*0x6374cb*/
        {
          MEMORY[0xAC4C08] = 1; /*0x6374de*/
          StringCSF = GetStringCSF(MEMORY[0x836B9C], 0, MEMORY[0x836BD4], 3233); /*0x6374e5*/
          AddMessageListPlayerMessage(StringCSF, 480); /*0x6374f1*/
          result = PlayVocClass(g_RulesClass_Instance->?[3], 0x2000, 1.0, 0); /*0x63750e*/
        }
      }
      else if ( v24 == 2 ) /*0x637518*/
      {
        result = PlanManager::Notify(MEMORY[0x836B8C]); /*0x63751f*/
      }
    }
    else
    {
      result = MEMORY[0xAC4C08]; /*0x63746c*/
      if ( !MEMORY[0xAC4C08] ) /*0x637473*/
      {
        MEMORY[0xAC4C08] = 1; /*0x63748a*/
        v25 = GetStringCSF(MEMORY[0x836BB8], 0, MEMORY[0x836BD4], 3233); /*0x637491*/
        AddMessageListPlayerMessage(v25, 480); /*0x63749d*/
        result = PlayVocClass(g_RulesClass_Instance->?[3], 0x2000, 1.0, 0); /*0x6374b8*/
      }
    }
    MEMORY[0xAC4C90] = -1; /*0x637524*/
  }
  MEMORY[0xAC4CD0] = 0; /*0x637531*/
  MEMORY[0xAC4CC8] = 0; /*0x637538*/
  MEMORY[0xAC4C08] = 0; /*0x63753f*/
  return result; /*0x637547*/
}
}
} // namespace gamemd

// 0x6375B0
namespace gamemd {
int E4Recv_6375B0::sub_6375B0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_6375B0(char *this)
{
  _BYTE *v2; // eax
  _BYTE *v3; // ebx
  char *v4; // esi
  int result; // eax

  v2 = __2_YAPAXI_Z(0x6Fu); /*0x6375b6*/
  if ( v2 ) /*0x6375c0*/
  {
    *v2 = 0; /*0x6375c2*/
    v3 = v2; /*0x6375c5*/
  }
  else
  {
    v3 = 0; /*0x6375c9*/
  }
  qmemcpy(v3, this, 0x6Cu); /*0x6375d3*/
  v4 = this + 108; /*0x6375d3*/
  *((_WORD *)v3 + 54) = *(_WORD *)v4; /*0x6375d5*/
  v3[110] = v4[2]; /*0x6375d7*/
  if ( *v3 == 4 ) /*0x6375dd*/
    v3[29] = 2; /*0x6375df*/
  result = MEMORY[0xAC4B50]; /*0x6375e3*/
  if ( MEMORY[0xAC4B58] < MEMORY[0xAC4B50] /*0x63761e*/
    || (MEMORY[0xAC4B55] || !MEMORY[0xAC4B50])
    && MEMORY[0xAC4B5C] > 0
    && (result = (*(int (__thiscall **)(int *, int, _DWORD))(MEMORY[0xAC4B48] + 8))(
                   &MEMORY[0xAC4B48],
                   MEMORY[0xAC4B50] + MEMORY[0xAC4B5C],
                   0),
        (_BYTE)result) )
  {
    result = MEMORY[0xAC4B58]++; /*0x637626*/
    *((_DWORD *)MEMORY[0xAC4B4C] + result) = v3; /*0x637635*/
  }
  return result; /*0x637638*/
}
}
} // namespace gamemd

// 0x637920
namespace gamemd {
void sub_637920()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_637920()
{
  int v0; // edi
  int v1; // ebx
  int v2; // esi
  int v3; // ebp
  int v4; // [esp+8h] [ebp-4h]

  v0 = 0; /*0x637928*/
  v1 = 0; /*0x63792a*/
  v4 = MEMORY[0xAC4CA8]; /*0x63792e*/
  if ( MEMORY[0xAC4CA8] > 0 ) /*0x637932*/
  {
    while ( 1 ) /*0x63793f*/
    {
      v2 = *((_DWORD *)MEMORY[0xAC4C9C] + v1); /*0x63793f*/
      FactoryClass::ClearObjects((int *)v2); /*0x637944*/
      v3 = *(_DWORD *)(v2 + 16); /*0x637949*/
      if ( v3 > 0 ) /*0x63794e*/
      {
        do /*0x637961*/
          ScriptAction::PlaceObject(v2, *(_DWORD **)(*(_DWORD *)(v2 + 4) + 4 * v0++)); /*0x637959*/
        while ( v0 < v3 ); /*0x637961*/
      }
      ScriptAction::FindSquadMember(v2); /*0x637965*/
      ++v1; /*0x63796e*/
      *(_BYTE *)(v2 + 28) = 0; /*0x637971*/
      if ( v1 >= v4 ) /*0x637975*/
        break; /*0x637975*/
      v0 = 0; /*0x637938*/
    }
  }
  MEMORY[0xAC4CA8] = 0; /*0x637980*/
  if ( MEMORY[0xAC4C9C] && MEMORY[0xAC4CA5] ) /*0x637992*/
  {
    __3_YAXPAX_Z(MEMORY[0xAC4C9C]); /*0x637995*/
    MEMORY[0xAC4C9C] = 0; /*0x63799d*/
  }
  MEMORY[0xAC4CA0] = 0; /*0x6379a3*/
  MEMORY[0xAC4CA5] = 0; /*0x6379aa*/
}
}
} // namespace gamemd

// 0x638120
namespace gamemd {
char ExecuteActionPlanManager(IUnknown * a1, char * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall ExecuteActionPlanManager(IUnknown *a1, char *a2)
{
  char *v2; // edi
  int *ScenarioClassActionCoords; // eax
  int v4; // ecx
  AbstractClass *v5; // ebx
  int v6; // edx
  int v7; // eax
  BuildingClass *v8; // esi
  int v9; // ebp
  ObjectClass *v10; // edi
  _DWORD *v11; // eax
  BuildingClass *LeaderIndex; // eax
  ObjectClass *v13; // ecx
  BuildingClass *v14; // esi
  int v15; // eax
  char v16; // al
  wchar_t *StringCSF; // eax
  char *v19; // ecx
  AbstractClass *Type; // ebp
  _DWORD *v21; // eax
  bool v22; // bl
  void *v23; // ecx
  int v24; // eax
  int abstractFlags; // eax
  AbstractClass *v25; // eax
  unsigned int eax58; // eax
  VectorClass *v28; // eax
  VectorClass *v27; // edi
  int v30; // esi
  wchar_t *v31; // eax
  int v32; // eax
  _BYTE v33[112]; // [esp-70h] [ebp-ACh] BYREF
  bool v34; // [esp+13h] [ebp-29h]
  _DWORD *pad_0; // [esp+14h] [ebp-28h] BYREF
  AbstractClass *v36; // [esp+18h] [ebp-24h] BYREF
  char *v37; // [esp+1Ch] [ebp-20h]
  IUnknown *aP1; // [esp+20h] [ebp-1Ch]
  int v39; // [esp+24h] [ebp-18h]
  int v40; // [esp+28h] [ebp-14h]
  int v41; // [esp+2Ch] [ebp-10h]
  _DWORD v42[3]; // [esp+30h] [ebp-Ch] BYREF

  v2 = a2; /*0x638127*/
  aP1 = a1; /*0x638129*/
  v37 = a2; /*0x63812f*/
  if ( !a1 ) /*0x638133*/
    return 0; /*0x638133*/
  v34 = a2[2] == *(_DWORD *)(HouseClass_Player.field_0 + 48); /*0x63814c*/
  ScenarioClassActionCoords = GetScenarioClassActionCoords(v42, a2); /*0x638151*/
  if ( *ScenarioClassActionCoords == -1 && ScenarioClassActionCoords[1] == -1 && ScenarioClassActionCoords[2] == -1 ) /*0x63816b*/
    return 0; /*0x63816b*/
  v4 = *ScenarioClassActionCoords; /*0x638174*/
  v5 = (AbstractClass *)*(&g_MatrixTransformState + 5964); /*0x638176*/
  v36 = *(AbstractClass **)(v2 + 3); /*0x63817c*/
  v6 = ScenarioClassActionCoords[1]; /*0x638180*/
  v7 = ScenarioClassActionCoords[2]; /*0x638183*/
  v8 = (BuildingClass *)v2[2]; /*0x638186*/
  v9 = 0; /*0x63818a*/
  v39 = v4; /*0x63818c*/
  v40 = v6; /*0x638192*/
  v41 = v7; /*0x638196*/
  if ( (int)*(&g_MatrixTransformState + 5964) <= 0 ) /*0x63819a*/
  {
LABEL_13:
    v13 = 0; /*0x6381f9*/
  }
  else
  {
    while ( 1 ) /*0x6381a9*/
    {
      v10 = (ObjectClass *)*(&(*(&g_MatrixTransformState + 5961))->X + v9); /*0x6381a9*/
      if ( ScriptAction::GetActionCoordinates(v10, v39, v40, v41) /*0x6381d5*/
        && (v36 == (AbstractClass *)-1 || v36 == (AbstractClass *)v10->nextArrayIndex) )
      {
        v11 = (_DWORD *)Function::Method_6342D0(v10, 0); /*0x6381db*/
        LeaderIndex = (BuildingClass *)TeamClass::GetLeaderIndex(v11); /*0x6381e2*/
        if ( v8 == (BuildingClass *)-1 || v8 == LeaderIndex ) /*0x6381ee*/
          break; /*0x6381ee*/
      }
      if ( ++v9 >= (int)v5 ) /*0x6381f3*/
      {
        v2 = v37; /*0x6381f5*/
        goto LABEL_13; /*0x6381f5*/
      }
    }
    v13 = v10; /*0x638252*/
    v2 = v37; /*0x638254*/
  }
  v14 = (BuildingClass *)aP1; /*0x6381fb*/
  pad_0 = v13->__pad_0; /*0x6381ff*/
  if ( v13 && Array::FindValue((int *)v13->__pad_0, aP1) != -1 ) /*0x638210*/
    return 1; /*0x638210*/
  v15 = ScriptAction::ClassifyAction(&aP1->field_0, v2); /*0x63821a*/
  if ( v15 != -1 ) /*0x638222*/
  {
    if ( !v34 ) /*0x63822e*/
      return 0; /*0x63822e*/
    if ( !v15 ) /*0x638236*/
    {
      v16 = *v2; /*0x638238*/
      if ( *v2 == 9 ) /*0x63823c*/
      {
        PlanManager::Notify((wchar_t *)&stru_830620.__pad_579C[3704]); /*0x638243*/
        return 0; /*0x638251*/
      }
      if ( v16 == 6 ) /*0x63825c*/
      {
        PlanManager::Notify((wchar_t *)&stru_830620.__pad_579C[3680]); /*0x638263*/
        return 0; /*0x638271*/
      }
      if ( v16 == 7 ) /*0x638274*/
      {
        PlanManager::Notify((wchar_t *)&stru_830620.__pad_579C[3652]); /*0x63827f*/
        return 0; /*0x63828d*/
      }
      return 0; /*0x638274*/
    }
    if ( v15 == 1 ) /*0x638295*/
    {
      if ( !*((_BYTE *)&(&g_MatrixTransformState)[501] + 8) ) /*0x63829e*/
      {
        *((_BYTE *)&(&g_MatrixTransformState)[501] + 8) = 1; /*0x6382a4*/
        StringCSF = GetStringCSF( /*0x6382bb*/
                      (wchar_t *)&stru_830620.__pad_579C[3580],
                      0,
                      (CampaignScore *)&stru_830620.__pad_579C[3608],
                      3233);
        AddMessageListPlayerMessage((CellStruct *)StringCSF, 480); /*0x6382c7*/
        PlayVocClass(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 1792), 0x2000, 1.0, 0); /*0x6382e4*/
        return 0; /*0x6382f2*/
      }
      return 0; /*0x63829e*/
    }
    if ( v15 != 2 || *((_BYTE *)&(&g_MatrixTransformState)[501] + 8) ) /*0x638303*/
      return 0; /*0x63853c*/
    *((_BYTE *)&(&g_MatrixTransformState)[501] + 8) = 1; /*0x638309*/
    *(_DWORD *)&v33[108] = 3233; /*0x63830f*/
    *(_DWORD *)&v33[104] = &stru_830620.__pad_579C[3608]; /*0x638314*/
    v19 = &stru_830620.__pad_579C[3552]; /*0x63831b*/
LABEL_67:
    v31 = GetStringCSF((wchar_t *)v19, 0, *(CampaignScore **)&v33[104], *(int *)&v33[108]); /*0x638506*/
    AddMessageListPlayerMessage((CellStruct *)v31, 480); /*0x638512*/
    PlayVocClass(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 1792), 0x2000, 1.0, 0); /*0x63852e*/
    return 0; /*0x63852e*/
  }
  Type = (AbstractClass *)BuildingClass::GetPlanningToken(aP1); /*0x63832c*/
  if ( !Type ) /*0x638330*/
  {
    v21 = (_DWORD *)__2_YAPAXI_Z(0x9Cu); /*0x638337*/
    if ( v21 ) /*0x638341*/
      v36 = ScriptAction::Constructor(v21, (AbstractClass *)aP1); /*0x63834b*/
    else
      v36 = 0; /*0x638351*/
    ScriptActionVector::PushBack(&g_MatrixTransformState + 6042, (DynamicVector *)&v36); /*0x638363*/
    BuildingClass::SetPlanningToken(v14, v36); /*0x63836f*/
    Type = v36; /*0x638374*/
  }
  v22 = v34; /*0x638378*/
  if ( v34 ) /*0x63837e*/
  {
    v23 = (void *)v2[12]; /*0x638380*/
    if ( v23 == (void *)7 || v23 == (void *)8 || v23 == (void *)9 ) /*0x638391*/
    {
      v24 = 0; /*0x638393*/
LABEL_46:
      *(&g_MatrixTransformState + 6048) = (CoordStruct *)v24; /*0x6383bf*/
      goto LABEL_47; /*0x6383bf*/
    }
    if ( ExecuteActionPlanManager_Helper_638C40(v23, *(_DWORD *)(v2 + 14), v2[18]) ) /*0x6383a7*/
    {
      v24 = 0; /*0x6383b0*/
      goto LABEL_46; /*0x6383b2*/
    }
    if ( Type->abstractFlags == 15 ) /*0x6383b8*/
    {
      v24 = 2; /*0x6383ba*/
      goto LABEL_46; /*0x6383ba*/
    }
  }
LABEL_47:
  if ( *(int *)&Type[4].__pad_0[4] >= 0 ) /*0x6383cc*/
  {
    if ( !v34 || *((_BYTE *)&(&g_MatrixTransformState)[501] + 8) ) /*0x6383df*/
      return 0; /*0x6383df*/
    *(_DWORD *)&v33[108] = 3233; /*0x6383e5*/
    *((_BYTE *)&(&g_MatrixTransformState)[501] + 8) = 1; /*0x6383ea*/
    *(_DWORD *)&v33[104] = &stru_830620.__pad_579C[3608]; /*0x6383f1*/
    v19 = &stru_830620.__pad_579C[3636]; /*0x6383f8*/
    goto LABEL_67; /*0x6383fd*/
  }
  abstractFlags = Type->abstractFlags; /*0x638402*/
  if ( abstractFlags ) /*0x638407*/
  {
    if ( abstractFlags == 16 ) /*0x6384df*/
    {
      if ( !v34 || *((_BYTE *)&(&g_MatrixTransformState)[501] + 8) ) /*0x6384ec*/
        return 0; /*0x6384ec*/
      *(_DWORD *)&v33[108] = 3233; /*0x6384ee*/
      *((_BYTE *)&(&g_MatrixTransformState)[501] + 8) = 1; /*0x6384f3*/
      *(_DWORD *)&v33[104] = &stru_830620.__pad_579C[3608]; /*0x6384fa*/
      v19 = &stru_830620.__pad_579C[3536]; /*0x638501*/
      goto LABEL_67; /*0x638501*/
    }
  }
  else
  {
    if ( (int)*(&g_MatrixTransformState + 6032) < (int)*(&g_MatrixTransformState + 6030) /*0x638444*/
      || (*((_BYTE *)&g_MatrixTransformState + 24125) || !*(&g_MatrixTransformState + 6030))
      && (int)*(&g_MatrixTransformState + 6033) > 0
      && ((unsigned __int8 (__thiscall *)(CoordStruct **, char *, _DWORD))(*(&g_MatrixTransformState + 6028))->Z)(
           &g_MatrixTransformState + 6028,
           (char *)*(&g_MatrixTransformState + 6030) + (_DWORD)*(&g_MatrixTransformState + 6033),
           0) )
    {
      v25 = (AbstractClass *)*(&g_MatrixTransformState + 6032); /*0x638451*/
      *(&g_MatrixTransformState + 6032) = (CoordStruct *)((char *)*(&g_MatrixTransformState + 6032) + 1); /*0x638454*/
      *(&(*(&g_MatrixTransformState + 6029))->X + (_DWORD)v25) = (int)v14; /*0x638460*/
    }
    eax58 = v2[2]; /*0x638463*/
    if ( eax58 < 0x18 ) /*0x638469*/
      *(&g_MatrixTransformState + eax58 + 5981) = (CoordStruct *)((char *)*(&g_MatrixTransformState + eax58 + 5981) + 1); /*0x638470*/
  }
  if ( !pad_0 ) /*0x63847d*/
  {
    v28 = (VectorClass *)__2_YAPAXI_Z(0xB8u); /*0x638488*/
    v27 = v28; /*0x63848d*/
    if ( v28 ) /*0x638494*/
    {
      *(_DWORD *)&v33[108] = 0; /*0x63849e*/
      *(_DWORD *)&v33[104] = 0; /*0x6384a0*/
      v30 = *(_DWORD *)(v37 + 3); /*0x6384a2*/
      ExecuteActionPlanManager_Helper_63DEC0(v28, 0, 0); /*0x6384a7*/
      v27[1].Capacity = v30; /*0x6384af*/
      *(_DWORD *)&v33[108] = 0; /*0x6384b2*/
      *(_DWORD *)&v33[104] = 0; /*0x6384b4*/
      v27[1].IsInitialized = 0; /*0x6384b6*/
      ExecuteActionPlanManager_Helper_63E1D0(&v27[2].vtable0, *(int *)&v33[104], *(int *)&v33[108]); /*0x6384ba*/
      ExecuteActionPlanManager_Helper(&v27[3].Capacity); /*0x6384c2*/
      v27[11].vtable0 = (void *)-1; /*0x6384ca*/
      v27[11].Items = (void *)-1; /*0x6384d0*/
      pad_0 = &v27->vtable0; /*0x6384d6*/
    }
    else
    {
      pad_0 = 0; /*0x63853d*/
    }
    VectorClass::Append(&g_MatrixTransformState + 5960, (VectorClass *)&pad_0); /*0x63854f*/
    v2 = v37; /*0x638554*/
    v14 = (BuildingClass *)aP1; /*0x638558*/
  }
  v32 = ExecuteActionPlanManager_Helper_636EB0(Type); /*0x63855e*/
  if ( v32 ) /*0x638565*/
  {
    qmemcpy(v33, v2, 0x6Fu); /*0x638573*/
    ScriptAction::ExecutePlacement( /*0x638581*/
      (int)pad_0,
      v32,
      *(int *)v33,
      *(__int64 *)&v33[4],
      *(int *)&v33[12],
      *(int *)&v33[16],
      *(int *)&v33[20],
      *(int *)&v33[24],
      *(int *)&v33[28],
      *(int *)&v33[32],
      *(int *)&v33[36],
      *(int *)&v33[40],
      *(int *)&v33[44],
      *(int *)&v33[48],
      *(int *)&v33[52],
      *(int *)&v33[56],
      *(int *)&v33[60],
      *(int *)&v33[64],
      *(int *)&v33[68],
      *(int *)&v33[72],
      *(int *)&v33[76],
      *(int *)&v33[80],
      *(int *)&v33[84],
      *(int *)&v33[88],
      *(int *)&v33[92],
      *(int *)&v33[96],
      *(int *)&v33[100],
      *(int *)&v33[104],
      *(int *)&v33[108]);
  }
  else
  {
    ScriptAction::CreatePlacementAction(pad_0, (AbstractClass *)v14, v2); /*0x63858e*/
  }
  if ( v22 ) /*0x638595*/
    PlayVocClass(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 472), 0x2000, 1.0, 0); /*0x6385ae*/
  return 1; /*0x63824a*/
}
}
} // namespace gamemd

// 0x6386E0
namespace gamemd {
void FactoryClass_ClearProduction(unsigned int * a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __fastcall FactoryClass_ClearProduction(_DWORD *a1, int a2)
{
  int Type; // ebx
  int v5; // eax
  int v6; // edi
  int v7; // ebx
  int i; // ebp
  int *v9; // esi
  int Value; // eax
  void *v11; // eax
  int v12; // ecx
  int v13; // esi
  void *Block; // [esp+10h] [ebp-8h] BYREF
  int v15; // [esp+14h] [ebp-4h]

  if ( a1 ) /*0x6386ec*/
  {
    Type = BuildingClass::GetPlanningToken(a1); /*0x6386f7*/
    v15 = Type; /*0x6386fb*/
    if ( Type ) /*0x6386ff*/
    {
      if ( (!a2 || !*(_BYTE *)(a2 + 29)) && *(int *)(Type + 20) > 0 ) /*0x63871a*/
      {
        v5 = BuildingClass::GetPlanningToken(a1); /*0x638722*/
        v6 = v5; /*0x638727*/
        if ( v5 ) /*0x63872b*/
        {
          v7 = *(_DWORD *)(v5 + 20); /*0x638731*/
          for ( i = 0; i < v7; ++i ) /*0x638740*/
          {
            v9 = *(int **)(*(_DWORD *)(v6 + 8) + 4 * i); /*0x638745*/
            Value = Array::FindValue(v9, *(_DWORD *)v6); /*0x63874d*/
            if ( Value == -1 ) /*0x638755*/
              v11 = 0; /*0x638757*/
            else
              v11 = *(void **)(v9[1] + 4 * Value); /*0x63875e*/
            Block = v11; /*0x638763*/
            if ( v11 ) /*0x638767*/
            {
              ((void (__stdcall *)(void *))FactoryClass::FinishProduction)(v11); /*0x63876c*/
              __3_YAXPAX_Z(*((void **)Block + 1)); /*0x638779*/
              ((void (__stdcall *)(void **))FactoryClass::RemoveItemAt)(&Block); /*0x638788*/
              __3_YAXPAX_Z(Block); /*0x638792*/
              if ( !v9[4] ) /*0x638797*/
              {
                if ( v9 ) /*0x6387a3*/
                  FactoryClass::RemoveFromArrays(v9, 1); /*0x6387a9*/
              }
            }
          }
          if ( v7 ) /*0x6387ba*/
          {
            Block = *(void **)v6; /*0x6387be*/
            v12 = *((_DWORD *)Block + 135); /*0x6387c2*/
            v13 = *(_DWORD *)(v12 + 48); /*0x6387c8*/
            if ( (unsigned __int8)House::IsHumanPlayer((#375 *)v12) ) /*0x6387cb*/
            {
              if ( HouseClass_Player ) /*0x6387db*/
                v13 = *((_DWORD *)HouseClass_Player + 12); /*0x6387dd*/
            }
            ((void (__thiscall *)(int))DecFactoryClassCounter)(v13); /*0x6387e2*/
            ((void (__stdcall *)(void **))VectorClass::EraseAt)(&Block); /*0x6387f1*/
          }
          (*(void (__thiscall **)(int))(*(_DWORD *)(v6 + 4) + 12))(v6 + 4); /*0x6387fc*/
          Type = v15; /*0x6387ff*/
          *(_DWORD *)(v6 + 140) = -1; /*0x638806*/
          *(_DWORD *)(v6 + 144) = -1; /*0x63880c*/
          *(_DWORD *)(v6 + 148) = -1; /*0x638812*/
          *(_BYTE *)(v6 + 152) = 0; /*0x638818*/
          *(_BYTE *)(v6 + 153) = 0; /*0x63881f*/
        }
      }
      *(_BYTE *)(Type + 28) = 0; /*0x638826*/
    }
  }
}
}
} // namespace gamemd

// 0x638E60
namespace gamemd {
void sub_638E60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_638E60()
{
  int v0; // ebx
  int v1; // ebp
  int v2; // edi
  int v3; // esi
  int *ScreenPos; // eax
  int *v5; // eax
  int v6; // [esp+4h] [ebp-2Ch]
  int v7; // [esp+8h] [ebp-28h] BYREF
  int v8; // [esp+10h] [ebp-20h] BYREF
  int v9; // [esp+14h] [ebp-1Ch]
  int v10; // [esp+18h] [ebp-18h]
  int v11; // [esp+1Ch] [ebp-14h]
  int v12[4]; // [esp+20h] [ebp-10h] BYREF

  if ( !MEMORY[0xAC4CB0] ) /*0x638e6b*/
  {
    v0 = (*(int (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 44))(g_WWMouseClass_Instance); /*0x638e85*/
    v1 = (*(int (__thiscall **)(int))(*(_DWORD *)g_WWMouseClass_Instance + 48))(g_WWMouseClass_Instance); /*0x638e8c*/
    v2 = 0; /*0x638e93*/
    v6 = MEMORY[0xAC4C28]; /*0x638e95*/
    if ( MEMORY[0xAC4C28] <= 0 ) /*0x638e9b*/
    {
LABEL_8:
      v3 = 0; /*0x638f1c*/
    }
    else
    {
      while ( 1 ) /*0x638ea7*/
      {
        v3 = *((_DWORD *)MEMORY[0xAC4C1C] + v2); /*0x638ea7*/
        ScreenPos = ScriptAction::GetScreenPos((_DWORD **)v3, &v7); /*0x638eac*/
        v5 = ComputeBounds(v12, 8, *ScreenPos, ScreenPos[1]); /*0x638ec1*/
        v8 = *v5; /*0x638ec8*/
        v9 = v5[1]; /*0x638ecf*/
        v10 = v5[2]; /*0x638ed6*/
        v11 = v5[3]; /*0x638ee1*/
        ShrinkRect(&v8, 4); /*0x638eea*/
        if ( v0 >= v8 && v0 < v8 + v10 && v1 >= v9 && v1 < v9 + v11 ) /*0x638f11*/
          break; /*0x638f11*/
        if ( ++v2 >= v6 ) /*0x638f1a*/
          goto LABEL_8; /*0x638f1a*/
      }
    }
    if ( v3 != g_ScriptPool ) /*0x638f28*/
    {
      MEMORY[0xAC4C3C] = 0; /*0x638f2c*/
      if ( v3 /*0x638f66*/
        && (*(#375 **)(***(_DWORD ***)(v3 + 4) + 540) != HouseClass_Player
         || g_ScriptState && g_ScriptState != v3
         || BuildingClass::CheckBuildability((void *)v3) != -1) )
      {
        MEMORY[0xAC4C3C] = v3; /*0x638f68*/
        v3 = 0; /*0x638f6e*/
      }
      g_ScriptPool = v3; /*0x638f72*/
      if ( v3 ) /*0x638f78*/
        Team_Get((int *)v3); /*0x638f7c*/
    }
  }
}
}
} // namespace gamemd

// 0x639040
namespace gamemd {
char sub_639040()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char sub_639040()
{
  wchar_t *v1; // ebp
  int v2; // eax
  int *i; // esi
  int v4; // ecx
  int *Type; // edi
  int v6; // esi
  int v7; // ecx
  _DWORD *v8; // eax
  wchar_t *StringCSF; // eax

  if ( !MEMORY[0xAC4CF4] ) /*0x63904b*/
    return 1; /*0x63904f*/
  v1 = g_SelectionManager; /*0x639054*/
  if ( !g_SelectionManager ) /*0x63905c*/
    return 1; /*0x63905e*/
  v2 = 0; /*0x639065*/
  if ( (int)g_SelectionManager > 0 ) /*0x639069*/
  {
    for ( i = (int *)g_ObjectClass_CurrentCount; ; ++i ) /*0x63906f*/
    {
      v4 = *i; /*0x639075*/
      if ( *i ) /*0x639075*/
      {
        if ( (*(_BYTE *)(v4 + 20) & 1) != 0 ) /*0x639085*/
          break; /*0x639085*/
      }
      if ( ++v2 >= (int)g_SelectionManager ) /*0x63908d*/
        return 0; /*0x639095*/
    }
    Type = (int *)BuildingClass::GetPlanningToken((_DWORD *)v4); /*0x63909b*/
    v6 = 0; /*0x63909d*/
    while ( 1 ) /*0x6390a4*/
    {
      v7 = *((_DWORD *)g_ObjectClass_CurrentCount + v6); /*0x6390a4*/
      if ( !v7 ) /*0x6390a9*/
        break; /*0x6390a9*/
      if ( (*(_BYTE *)(v7 + 20) & 1) == 0 ) /*0x6390b5*/
        break; /*0x6390b5*/
      v8 = (_DWORD *)BuildingClass::GetPlanningToken((_DWORD *)v7); /*0x6390b7*/
      if ( !Object_Read(Type, v8) ) /*0x6390c0*/
        break; /*0x6390c0*/
      if ( ++v6 >= (int)v1 ) /*0x6390cc*/
        return 1; /*0x6390cc*/
    }
    if ( !MEMORY[0xAC4C08] ) /*0x6390d7*/
    {
      MEMORY[0xAC4C08] = 1; /*0x6390ea*/
      StringCSF = GetStringCSF(MEMORY[0x836C50], 0, MEMORY[0x836BD4], 3233); /*0x6390f1*/
      AddMessageListPlayerMessage(StringCSF, 480); /*0x6390fd*/
      PlayVocClass(g_RulesClass_Instance->?[3], 0x2000, 1.0, 0); /*0x639119*/
    }
  }
  return 0; /*0x63904d*/
}
}
} // namespace gamemd

// 0x639130
namespace gamemd {
char sub_639130()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char sub_639130()
{
  unsigned int v0; // ecx
  int v1; // ebp
  wchar_t *v2; // ebx
  int v3; // edi
  int i; // esi
  int v5; // ecx
  int Type; // eax
  wchar_t *StringCSF; // eax

  if ( !MEMORY[0xAC4CF4] ) /*0x639138*/
    return 1; /*0x639138*/
  v0 = *((_DWORD *)HouseClass_Player + 12); /*0x639143*/
  v1 = 0; /*0x639157*/
  if ( v0 < 0x18 ) /*0x63915d*/
    v1 = MEMORY[0xAC4B84][v0]; /*0x63915f*/
  v2 = g_SelectionManager; /*0x639166*/
  v3 = 0; /*0x63916c*/
  for ( i = 0; i < (int)v2; ++i ) /*0x639172*/
  {
    v5 = *((_DWORD *)g_ObjectClass_CurrentCount + i); /*0x63917a*/
    if ( v5 ) /*0x63917f*/
    {
      if ( (*(_BYTE *)(v5 + 20) & 1) != 0 ) /*0x63918b*/
      {
        Type = BuildingClass::GetPlanningToken((_DWORD *)v5); /*0x63918d*/
        if ( !Type || !*(_DWORD *)(Type + 20) ) /*0x639196*/
          ++v3; /*0x63919d*/
      }
    }
  }
  if ( v3 + v1 <= 128 ) /*0x6391af*/
    return 1; /*0x639203*/
  if ( !MEMORY[0xAC4C08] ) /*0x6391b8*/
  {
    MEMORY[0xAC4C08] = 1; /*0x6391cb*/
    StringCSF = GetStringCSF(MEMORY[0x836C6C], 0, MEMORY[0x836BD4], 3233); /*0x6391d2*/
    AddMessageListPlayerMessage(StringCSF, 480); /*0x6391de*/
    PlayVocClass(g_RulesClass_Instance->?[3], 0x2000, 1.0, 0); /*0x6391fa*/
  }
  return 0; /*0x639202*/
}
}
} // namespace gamemd

// 0x639210
namespace gamemd {
int sub_639210(int a1, int a2, int a3, int a4, int a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_639210(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // edi
  int v6; // ebx
  int v7; // esi
  _DWORD *ScenarioClassActionCoords; // eax
  int v9; // ecx
  int v10; // edi
  int v14; // [esp+18h] [ebp-10h]
  _DWORD v15[3]; // [esp+1Ch] [ebp-Ch] BYREF

  v5 = MEMORY[0xAC4B40]; /*0x639217*/
  v6 = 0; /*0x63921d*/
  v14 = MEMORY[0xAC4B40]; /*0x639229*/
  if ( MEMORY[0xAC4B40] <= 0 ) /*0x63922d*/
    return 0; /*0x6392bc*/
  while ( 1 ) /*0x63923c*/
  {
    v7 = *((_DWORD *)MEMORY[0xAC4B34] + v6); /*0x63923c*/
    ScenarioClassActionCoords = GetScenarioClassActionCoords(v15, *(_BYTE **)(**(_DWORD **)(v7 + 4) + 4)); /*0x63924b*/
    if ( *ScenarioClassActionCoords != a3 /*0x639276*/
      || ScenarioClassActionCoords[1] != a4
      || ScenarioClassActionCoords[2] != a5
      || a2 != -1 && a2 != *(_DWORD *)(v7 + 24) )
    {
      goto LABEL_13; /*0x639276*/
    }
    v9 = *(_DWORD *)(***(_DWORD ***)(v7 + 4) + 540); /*0x63927f*/
    v10 = *(_DWORD *)(v9 + 48); /*0x639285*/
    if ( (unsigned __int8)House::IsHumanPlayer((#375 *)v9) && HouseClass_Player ) /*0x639298*/
      v10 = *((_DWORD *)HouseClass_Player + 12); /*0x63929a*/
    if ( a1 == -1 || a1 == v10 ) /*0x6392a8*/
      return v7; /*0x6392b3*/
    v5 = v14; /*0x6392aa*/
LABEL_13:
    if ( ++v6 >= v5 ) /*0x6392b1*/
      return 0; /*0x6392b1*/
  }
}
}
} // namespace gamemd

// 0x6392D0
namespace gamemd {
unsigned int ** sub_6392D0(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD **__stdcall sub_6392D0(int a1, int a2)
{
  int v2; // ebx
  _DWORD **v3; // edi
  _DWORD *Coords; // eax
  _DWORD *v5; // eax
  int v6; // eax
  int v8; // [esp+10h] [ebp-44h]
  int v9; // [esp+14h] [ebp-40h] BYREF
  _DWORD v10[3]; // [esp+1Ch] [ebp-38h] BYREF
  _DWORD v11[3]; // [esp+28h] [ebp-2Ch] BYREF
  _DWORD v12[8]; // [esp+34h] [ebp-20h] BYREF

  v2 = 0; /*0x6392da*/
  v8 = MEMORY[0xAC4B40]; /*0x6392e0*/
  if ( MEMORY[0xAC4B40] <= 0 ) /*0x6392e4*/
    return 0; /*0x639393*/
  while ( 1 ) /*0x6392f8*/
  {
    v3 = (_DWORD **)*((_DWORD *)MEMORY[0xAC4B34] + v2); /*0x6392f8*/
    Coords = ScriptAction::GetCoords(v3, v11); /*0x6392fd*/
    v10[0] = *Coords; /*0x639304*/
    v10[1] = Coords[1]; /*0x63930b*/
    v10[2] = Coords[2]; /*0x639316*/
    v5 = ToCoordPixel(&v9, v10); /*0x63931e*/
    Rect::Set(v12, *v5 - 4, v5[1] - 4, 8, 8); /*0x63933a*/
    v12[4] = v12[0]; /*0x63934f*/
    v6 = v12[1] - 4; /*0x639356*/
    if ( a1 >= v12[0] - 4 && a1 < v12[2] + 8 + v12[0] - 4 && a2 >= v6 && a2 < v12[3] + 8 + v6 ) /*0x639377*/
      break; /*0x639377*/
    if ( ++v2 >= v8 ) /*0x639380*/
      return 0; /*0x639380*/
  }
  return v3; /*0x639389*/
}
}
} // namespace gamemd

// 0x6393A0
namespace gamemd {
unsigned int ** sub_6393A0(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD **__stdcall sub_6393A0(int a1, int a2)
{
  int v2; // ebx
  _DWORD **v3; // edi
  _DWORD *Coords; // eax
  _DWORD *v5; // eax
  int v6; // eax
  int v8; // [esp+10h] [ebp-44h]
  int v9; // [esp+14h] [ebp-40h] BYREF
  _DWORD v10[3]; // [esp+1Ch] [ebp-38h] BYREF
  _DWORD v11[3]; // [esp+28h] [ebp-2Ch] BYREF
  _DWORD v12[8]; // [esp+34h] [ebp-20h] BYREF

  v2 = 0; /*0x6393aa*/
  v8 = MEMORY[0xAC4C28]; /*0x6393b0*/
  if ( MEMORY[0xAC4C28] <= 0 ) /*0x6393b4*/
    return 0; /*0x639463*/
  while ( 1 ) /*0x6393c8*/
  {
    v3 = (_DWORD **)*((_DWORD *)MEMORY[0xAC4C1C] + v2); /*0x6393c8*/
    Coords = ScriptAction::GetCoords(v3, v11); /*0x6393cd*/
    v10[0] = *Coords; /*0x6393d4*/
    v10[1] = Coords[1]; /*0x6393db*/
    v10[2] = Coords[2]; /*0x6393e6*/
    v5 = ToCoordPixel(&v9, v10); /*0x6393ee*/
    Rect::Set(v12, *v5 - 4, v5[1] - 4, 8, 8); /*0x63940a*/
    v12[4] = v12[0]; /*0x63941f*/
    v6 = v12[1] - 4; /*0x639426*/
    if ( a1 >= v12[0] - 4 && a1 < v12[2] + 8 + v12[0] - 4 && a2 >= v6 && a2 < v12[3] + 8 + v6 ) /*0x639447*/
      break; /*0x639447*/
    if ( ++v2 >= v8 ) /*0x639450*/
      return 0; /*0x639450*/
  }
  return v3; /*0x639459*/
}
}
} // namespace gamemd

// 0x639470
namespace gamemd {
int sub_639470(int a1, int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall sub_639470(int a1, int a2, int a3)
{
  int v3; // ebp
  int v4; // edi
  int v5; // esi
  _DWORD *ScenarioClassActionCoords; // eax
  _DWORD v8[3]; // [esp+10h] [ebp-Ch] BYREF

  v3 = MEMORY[0xAC4C28]; /*0x639475*/
  v4 = 0; /*0x63947d*/
  if ( MEMORY[0xAC4C28] <= 0 ) /*0x639481*/
    return 0; /*0x6394cd*/
  while ( 1 ) /*0x63948c*/
  {
    v5 = *((_DWORD *)MEMORY[0xAC4C1C] + v4); /*0x63948c*/
    ScenarioClassActionCoords = GetScenarioClassActionCoords(v8, *(_BYTE **)(**(_DWORD **)(v5 + 4) + 4)); /*0x63949b*/
    if ( *ScenarioClassActionCoords == a1 && ScenarioClassActionCoords[1] == a2 && ScenarioClassActionCoords[2] == a3 ) /*0x6394b8*/
      break; /*0x6394b8*/
    if ( ++v4 >= v3 ) /*0x6394bd*/
      return 0; /*0x6394bd*/
  }
  return v5; /*0x6394c3*/
}
}
} // namespace gamemd

// 0x639800
namespace gamemd {
char CompleteBuildingProduction(IUnknown * a1, int edx0)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall CompleteBuildingProduction(IUnknown *a1, int edx0)
{
  TechnoClass *v2; // edi
  AbstractClass *v4; // ebx
  int Type; // eax
  int v6; // edx
  TechnoClass *v7; // ebp
  TechnoClass *v8; // ebx
  int v9; // eax
  TechnoClass *lastLayer; // esi
  _DWORD *v11; // ecx
  int abstractFlags; // edi
  int v13; // edx
  _DWORD *v14; // esi
  int v15; // edx
  _DWORD *v16; // eax
  TechnoClass *v17; // eax
  _BYTE *v18; // esi
  AbstractClass *v19; // esi
  _BYTE *WaypointCoords; // eax
  _DWORD *v21; // eax
  ObjectClass *v22; // edx
  int v23; // eax
  int v24; // esi
  int v25; // ebx
  int j; // edi
  int v27; // ecx
  int i; // edi
  AbstractClass *v29; // ecx
  int v31; // [esp-4h] [ebp-A4h]
  _DWORD *v32; // [esp+10h] [ebp-90h] BYREF
  TechnoClass *v33; // [esp+14h] [ebp-8Ch]
  AbstractClass *v34; // [esp+18h] [ebp-88h] BYREF
  _DWORD *v35; // [esp+1Ch] [ebp-84h]
  TechnoClass *v36; // [esp+20h] [ebp-80h] BYREF
  IUnknown *aP1; // [esp+24h] [ebp-7Ch]
  _BYTE v38[8]; // [esp+28h] [ebp-78h] BYREF
  _BYTE a2[108]; // [esp+30h] [ebp-70h] BYREF
  __int16 v40; // [esp+9Ch] [ebp-4h]
  char v41; // [esp+9Eh] [ebp-2h]

  v2 = (TechnoClass *)edx0; /*0x63980a*/
  v36 = (TechnoClass *)edx0; /*0x63980e*/
  aP1 = a1; /*0x639812*/
  v4 = ***(AbstractClass ****)(edx0 + 4); /*0x63981b*/
  Type = BuildingClass::GetPlanningToken(v4); /*0x63981f*/
  v6 = *(_DWORD *)(Type + 4); /*0x639824*/
  v34 = (AbstractClass *)v2; /*0x63982e*/
  v7 = (TechnoClass *)(*(int (__thiscall **)(int, AbstractClass **))(v6 + 16))(Type + 4, &v34); /*0x639838*/
  v8 = (TechnoClass *)BuildingClass::GetPlanningToken(v4); /*0x63983f*/
  TeamClass::UpdateBuildQueue( /*0x63984b*/
    (int *)v8->__pad_0,
    (AbstractClass *)a1,
    v7,
    (TechnoClass *)(v8->abstractFlags - (_DWORD)v7));
  v32 = (_DWORD *)-1; /*0x639855*/
  v34 = (AbstractClass *)-1; /*0x639859*/
  v33 = 0; /*0x63985d*/
  v9 = BuildingClass::GetPlanningToken(a1); /*0x639865*/
  lastLayer = (TechnoClass *)v8->lastLayer; /*0x63986a*/
  v11 = (_DWORD *)v9; /*0x639870*/
  v35 = (_DWORD *)v9; /*0x639874*/
  if ( (int)lastLayer < 0 ) /*0x639878*/
  {
    v2 = v33; /*0x63997f*/
    v17 = (TechnoClass *)v34; /*0x639983*/
  }
  else
  {
    v34 = *(AbstractClass **)&v8->isAliveFlag; /*0x639888*/
    if ( (int)lastLayer <= 0 || (int)v7 >= (int)lastLayer ) /*0x639890*/
    {
      if ( BuildingClass::GetPlanningToken(aP1) ) /*0x6398e5*/
      {
        v33 = lastLayer; /*0x6398f0*/
        if ( (int)lastLayer < (int)v7 ) /*0x6398f4*/
        {
          do /*0x639952*/
          {
            v31 = *(_DWORD *)v8->__pad_0; /*0x639902*/
            v32 = *(_DWORD **)(*(_DWORD *)&v8->__pad_0[8] + 4 * (_DWORD)v33); /*0x639903*/
            v18 = (_BYTE *)ScriptAction::FindItemByValue(v32, v31)[1]; /*0x63990c*/
            qmemcpy(a2, v18, sizeof(a2)); /*0x639918*/
            v18 += 108; /*0x639918*/
            v40 = *(_WORD *)v18; /*0x63991a*/
            v41 = v18[2]; /*0x63991c*/
            v19 = (AbstractClass *)aP1; /*0x63991d*/
            WaypointCoords = ScriptAction::GetWaypointCoords(v38, aP1); /*0x639926*/
            *(_DWORD *)&a2[7] = *(_DWORD *)WaypointCoords; /*0x63992d*/
            a2[11] = WaypointCoords[4]; /*0x63993e*/
            ScriptAction::CreatePlacementAction(v32, v19, a2); /*0x639942*/
            v33 = (TechnoClass *)((char *)v33 + 1); /*0x63994e*/
          }
          while ( (int)v33 < (int)v7 ); /*0x639952*/
          v2 = v36; /*0x639954*/
        }
      }
      v36 = v2; /*0x639964*/
      v21 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, TechnoClass **))(v35[1] + 16))(v35 + 1, &v36); /*0x63996a*/
      v11 = v35; /*0x63996d*/
      v32 = v21; /*0x639971*/
      v17 = (TechnoClass *)v34; /*0x639975*/
      v33 = v2; /*0x639979*/
    }
    else
    {
      abstractFlags = v8->abstractFlags; /*0x639892*/
      v13 = (int)lastLayer; /*0x639895*/
      if ( !abstractFlags ) /*0x639899*/
        goto LABEL_10; /*0x639899*/
      if ( (int)lastLayer >= abstractFlags ) /*0x63989d*/
        v13 = (int)&lastLayer->__pad_0[0 % (int)v34]; /*0x6398a8*/
      if ( v13 >= 0 && v13 < abstractFlags ) /*0x6398b0*/
        v14 = *(_DWORD **)(*(_DWORD *)&v8->__pad_0[8] + 4 * v13); /*0x6398b5*/
      else
LABEL_10:
        v14 = 0; /*0x6398ba*/
      v15 = *(_DWORD *)(v9 + 4); /*0x6398bc*/
      v32 = v14; /*0x6398c6*/
      v16 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD **))(v15 + 16))(v9 + 4, &v32); /*0x6398cb*/
      v2 = (TechnoClass *)v14; /*0x6398ce*/
      v11 = v35; /*0x6398d0*/
      v32 = v16; /*0x6398d4*/
      v17 = (TechnoClass *)v34; /*0x6398d8*/
    }
  }
  v22 = (ObjectClass *)v32; /*0x639987*/
  v11[36] = v17; /*0x63998f*/
  v11[37] = v22; /*0x639995*/
  *((_BYTE *)v11 + 152) = 1; /*0x63999b*/
  if ( v2 ) /*0x6399a1*/
    ScriptAction::FindSquadMember((int)v2); /*0x6399a5*/
  LOBYTE(v23) = *((_BYTE *)&g_MatrixTransformState + 24256); /*0x6399aa*/
  if ( !*((_BYTE *)&g_MatrixTransformState + 24256) ) /*0x6399b1*/
  {
    LOBYTE(v23) = House::IsHumanPlayer((#375 *)aP1->field_21C); /*0x6399c1*/
    if ( (_BYTE)v23 ) /*0x6399c8*/
    {
      *((_BYTE *)&g_MatrixTransformState + 24256) = 1; /*0x6399ce*/
      v23 = v35[5] - 1; /*0x6399d7*/
      if ( v23 >= 0 ) /*0x6399d8*/
        v24 = *(_DWORD *)(v35[2] + 4 * v23); /*0x6399e1*/
      else
        v24 = 0; /*0x6399da*/
      v25 = *(_DWORD *)(v24 + 16); /*0x6399e4*/
      if ( v2 ) /*0x6399e9*/
      {
        for ( i = 0; i < v25; ++i ) /*0x639a1f*/
        {
          v29 = **(AbstractClass ***)(*(_DWORD *)(v24 + 4) + 4 * i); /*0x639a27*/
          LOBYTE(v23) = HIBYTE(v29[3].abstractFlags); /*0x639a29*/
          if ( (_BYTE)v23 ) /*0x639a31*/
            LOBYTE(v23) = (*(int (__thiscall **)(AbstractClass *))(*(_DWORD *)v29->__pad_0 + 336))(v29); /*0x639a35*/
        }
      }
      else
      {
        for ( j = 0; j < v25; ++j ) /*0x6399ef*/
        {
          v23 = *(_DWORD *)(*(_DWORD *)(v24 + 4) + 4 * j); /*0x6399f4*/
          v27 = *(_DWORD *)v23; /*0x6399f7*/
          LOBYTE(v23) = *(_BYTE *)(*(_DWORD *)v23 + 131); /*0x6399f9*/
          if ( !(_BYTE)v23 ) /*0x639a01*/
            LOBYTE(v23) = (*(int (__thiscall **)(int))(*(_DWORD *)v27 + 332))(v27); /*0x639a05*/
        }
      }
    }
  }
  return v23; /*0x639a10*/
}
}
} // namespace gamemd

// 0x639F80
namespace gamemd {
int FactoryClass_DecCounter(unsigned int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall FactoryClass_DecCounter(unsigned int a1)
{
  int result; // eax

  if ( a1 < 0x18 )
  {
    result = MEMORY[0xAC4B84][a1] - 1; /*0x639f95*/
    MEMORY[0xAC4B84][a1] = result < 0 ? 0 : result;
  }
  return result; /*0x639fa3*/
}
}
} // namespace gamemd

// 0x63A5A0
namespace gamemd {
bool HandlePlanningModeClick(MouseClass * aP0, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __stdcall HandlePlanningModeClick(MouseClass *aP0, int a2)
{
  ObjectClass *v3; // esi
  int v4; // ebp
  ObjectClass *v5; // ebx
  int v6; // edi
  _DWORD **v7; // esi
  int *ScreenPos; // eax
  int *v9; // eax
  int *v10; // eax
  wchar_t *v11; // eax
  int v12; // eax
  wchar_t *v13; // eax
  wchar_t *StringCSF; // eax
  ObjectClass *v15; // [esp+10h] [ebp-50h]
  int v16; // [esp+14h] [ebp-4Ch]
  _DWORD v17[2]; // [esp+18h] [ebp-48h] BYREF
  int v18; // [esp+20h] [ebp-40h] BYREF
  int v19; // [esp+24h] [ebp-3Ch]
  int v20; // [esp+28h] [ebp-38h]
  int v21; // [esp+2Ch] [ebp-34h]
  int v22; // [esp+30h] [ebp-30h] BYREF
  int v23; // [esp+34h] [ebp-2Ch]
  int v24; // [esp+38h] [ebp-28h]
  int v25; // [esp+3Ch] [ebp-24h]
  _DWORD v26[4]; // [esp+40h] [ebp-20h] BYREF
  _DWORD v27[4]; // [esp+50h] [ebp-10h] BYREF

  if ( !*((_BYTE *)&(&g_MatrixTransformState)[506] + 4) ) /*0x63a5ae*/
    return 0; /*0x63a5b9*/
  v3 = (ObjectClass *)*(&g_MatrixTransformState + 6026); /*0x63a5c2*/
  v4 = a2; /*0x63a5c8*/
  v5 = (ObjectClass *)aP0; /*0x63a5cc*/
  v6 = 0; /*0x63a5d0*/
  v16 = (int)*(&g_MatrixTransformState + 6026); /*0x63a5d2*/
  if ( !*(&g_MatrixTransformState + 6063) ) /*0x63a5d8*/
    goto LABEL_4; /*0x63a5d8*/
  v10 = Render_Render_6345A0((_DWORD **)*(&g_MatrixTransformState + 6063), v26); /*0x63a6a2*/
  v18 = *v10; /*0x63a6a9*/
  v19 = v10[1]; /*0x63a6b0*/
  v20 = v10[2]; /*0x63a6b7*/
  v21 = v10[3]; /*0x63a6c2*/
  ShrinkRect(&v18, 4); /*0x63a6cb*/
  v23 = v19; /*0x63a6dc*/
  v22 = v18; /*0x63a6e4*/
  v24 = v20; /*0x63a6f1*/
  v25 = v21; /*0x63a6f5*/
  if ( HandlePlanningModeClick_Handle(&v22, &aP0) ) /*0x63a6f9*/
  {
    aP0 = (MouseClass *)*(&g_MatrixTransformState + 6063); /*0x63a70d*/
    if ( *(&g_MatrixTransformState + 6063) && *(&g_MatrixTransformState + 6063) != (CoordStruct *)v3 ) /*0x63a719*/
    {
      Mission::SetAndCall((int *)&stru_87C374.__pad_14B0[8132], 0, (IUnknown *)1); /*0x63a727*/
      *(&g_MatrixTransformState + 6026) = (CoordStruct *)aP0; /*0x63a730*/
      return v16 || aP0; /*0x63a757*/
    }
  }
  else
  {
LABEL_4:
    aP0 = 0; /*0x63a5de*/
  }
  v15 = (ObjectClass *)*(&g_MatrixTransformState + 5964); /*0x63a5e9*/
  if ( (int)*(&g_MatrixTransformState + 5964) <= 0 ) /*0x63a5ed*/
    goto LABEL_21; /*0x63a5ed*/
  while ( 1 ) /*0x63a5fd*/
  {
    v17[0] = v5; /*0x63a5fd*/
    v7 = (_DWORD **)*(&(*(&g_MatrixTransformState + 5961))->X + v6); /*0x63a601*/
    v17[1] = v4; /*0x63a604*/
    ScreenPos = ScriptAction::GetScreenPos(v7, &v18); /*0x63a60a*/
    v9 = ComputeBounds((AbstractClass *)v27, (ObjectClass *)8, *ScreenPos, ScreenPos[1]); /*0x63a61f*/
    v22 = *v9; /*0x63a626*/
    v23 = v9[1]; /*0x63a62d*/
    v24 = v9[2]; /*0x63a634*/
    v25 = v9[3]; /*0x63a63f*/
    ShrinkRect(&v22, 4); /*0x63a648*/
    v26[1] = v23; /*0x63a659*/
    v26[0] = v22; /*0x63a661*/
    v26[2] = v24; /*0x63a66e*/
    v26[3] = v25; /*0x63a672*/
    if ( HandlePlanningModeClick_Handle(v26, v17) ) /*0x63a676*/
      break; /*0x63a676*/
    if ( ++v6 >= (int)v15 ) /*0x63a68a*/
      goto LABEL_21; /*0x63a68a*/
  }
  if ( !v7 ) /*0x63a75c*/
  {
LABEL_21:
    v12 = UI_Process_639DA0(); /*0x63a7c4*/
    if ( v12 == -1 ) /*0x63a7cc*/
      return v16 || aP0; /*0x63a7cc*/
    if ( v12 ) /*0x63a7d4*/
    {
      if ( v12 == 1 ) /*0x63a803*/
      {
        if ( !*((_BYTE *)&(&g_MatrixTransformState)[501] + 8) ) /*0x63a80c*/
        {
          *((_BYTE *)&(&g_MatrixTransformState)[501] + 8) = 1; /*0x63a823*/
          StringCSF = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[3976], 0, &stru_830620.__pad_579C[3608], 3233); /*0x63a82a*/
          AddMessageListPlayerMessage((CellStruct *)StringCSF, 480); /*0x63a836*/
          PlayVocClass(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 1792), 0x2000, 1.0, 0); /*0x63a852*/
          return 1; /*0x63a860*/
        }
        return 1; /*0x63a80c*/
      }
      if ( v12 == 2 && !*((_BYTE *)&(&g_MatrixTransformState)[501] + 8) ) /*0x63a86f*/
      {
        *((_BYTE *)&(&g_MatrixTransformState)[501] + 8) = 1; /*0x63a876*/
        v13 = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[3948], 0, &stru_830620.__pad_579C[3608], 3233); /*0x63a889*/
        goto LABEL_31; /*0x63a889*/
      }
    }
    else if ( !*((_BYTE *)&(&g_MatrixTransformState)[501] + 8) ) /*0x63a7dd*/
    {
      *((_BYTE *)&(&g_MatrixTransformState)[501] + 8) = 1; /*0x63a7e8*/
      v13 = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[4004], 0, &stru_830620.__pad_579C[3608], 3233); /*0x63a7fb*/
LABEL_31:
      AddMessageListPlayerMessage((CellStruct *)v13, 480); /*0x63a88e*/
      PlayVocClass(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 1792), 0x2000, 1.0, 0); /*0x63a8b2*/
    }
    return 1; /*0x63a8c0*/
  }
  if ( BuildingClass::CheckBuildability(v7) == -1 ) /*0x63a768*/
    return v16 || aP0; /*0x63a768*/
  if ( !*((_BYTE *)&(&g_MatrixTransformState)[501] + 8) ) /*0x63a771*/
  {
    *((_BYTE *)&(&g_MatrixTransformState)[501] + 8) = 1; /*0x63a784*/
    v11 = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[4032], 0, &stru_830620.__pad_579C[3608], 3233); /*0x63a78b*/
    AddMessageListPlayerMessage((CellStruct *)v11, 480); /*0x63a797*/
    PlayVocClass(*(_DWORD *)(*(_DWORD *)&stru_87C374.__pad_579C[22224] + 1792), 0x2000, 1.0, 0); /*0x63a7b3*/
  }
  return 1; /*0x63a5b0*/
}
}
} // namespace gamemd

// 0x63AD50
namespace gamemd {
int ExportSelectionAsScriptAction()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int ExportSelectionAsScriptAction()
{
  int v0; // eax
  int v1; // eax
  int v2; // esi
  int TypeBuildingClass; // eax
  int v4; // ecx
  int v5; // ebp
  int v6; // edi
  int v7; // ebx
  int v8; // edx
  int v9; // eax
  int v10; // esi
  _DWORD *v11; // ecx
  int v12; // eax
  int v13; // eax
  int v14; // ebp
  _DWORD *v15; // ebx
  _DWORD *v16; // eax
  _BYTE *WaypointCoordsScriptAction; // eax
  int v18; // edx
  _BYTE *v19; // eax
  wchar_t *StringCSF; // eax
  _BYTE v22[108]; // [esp-70h] [ebp-204h] BYREF
  int v23; // [esp-4h] [ebp-198h]
  void **v24; // [esp+10h] [ebp-184h] BYREF
  _DWORD *v25; // [esp+14h] [ebp-180h]
  int v26; // [esp+18h] [ebp-17Ch]
  char v27; // [esp+1Dh] [ebp-177h]
  int v28; // [esp+20h] [ebp-174h]
  int v29; // [esp+24h] [ebp-170h]
  int v30; // [esp+28h] [ebp-16Ch]
  _DWORD v32[3]; // [esp+30h] [ebp-164h] BYREF
  _BYTE v33[8]; // [esp+3Ch] [ebp-158h] BYREF
  char v34[108]; // [esp+44h] [ebp-150h] BYREF
  __int16 v35; // [esp+B0h] [ebp-E4h]
  char v36; // [esp+B2h] [ebp-E2h]
  _BYTE v37[112]; // [esp+B4h] [ebp-E0h] BYREF
  _BYTE v38[112]; // [esp+124h] [ebp-70h] BYREF

  v0 = g_ScriptState; /*0x63ad56*/
  v32[2] = g_ScriptState; /*0x63ad67*/
  g_ScriptState = 0; /*0x63ad6b*/
  v32[0] = g_SelectionManager; /*0x63ad75*/
  if ( (int)g_SelectionManager <= 0 ) /*0x63ad79*/
  {
    g_ScriptActionPool = v0; /*0x63b02f*/
    return Team_Get_63A1B0(4); /*0x63b034*/
  }
  EventClass::resetEvent(&v24, 0, 0); /*0x63ad87*/
  v1 = 0; /*0x63ad8e*/
  v24 = &vt_DynamicVectorClass_TechnoClass; /*0x63ad92*/
  v29 = 10; /*0x63ad9a*/
  v28 = 0; /*0x63ada2*/
  v30 = 0; /*0x63ada6*/
  do /*0x63af15*/
  {
    v2 = *((_DWORD *)g_ObjectClass_CurrentCount + v1); /*0x63adb6*/
    if ( v2 ) /*0x63adbb*/
    {
      if ( *(_BYTE *)(v2 + 20) & 1 ) /*0x63adc7*/
      {
        TypeBuildingClass = BuildingClass::GetPlanningToken((_DWORD *)v2); /*0x63add3*/
        if ( TypeBuildingClass ) /*0x63adda*/
        {
          v4 = *(_DWORD *)(TypeBuildingClass + 20) - 1; /*0x63ade3*/
          if ( v4 >= 0 ) /*0x63ade4*/
          {
            v5 = *(_DWORD *)(*(_DWORD *)(TypeBuildingClass + 8) + 4 * v4); /*0x63ade9*/
            if ( v5 ) /*0x63adee*/
            {
              v6 = *(_DWORD *)(v5 + 16); /*0x63ae39*/
              v7 = 0; /*0x63ae3c*/
              if ( v6 <= 0 ) /*0x63ae40*/
                goto LABEL_37; /*0x63ae40*/
              v8 = v26; /*0x63ae46*/
              while ( 2 ) /*0x63ae4a*/
              {
                v9 = 0; /*0x63ae4a*/
                v10 = **(_DWORD **)(*(_DWORD *)(v5 + 4) + 4 * v7); /*0x63ae52*/
                if ( v28 <= 0 ) /*0x63ae5a*/
                  goto LABEL_22; /*0x63ae5a*/
                v11 = v25; /*0x63ae5c*/
                while ( *v11 != v10 ) /*0x63ae62*/
                {
                  ++v9; /*0x63ae64*/
                  ++v11; /*0x63ae65*/
                  if ( v9 >= v28 ) /*0x63ae6c*/
                    goto LABEL_22; /*0x63ae6c*/
                }
                if ( v9 == -1 ) /*0x63ae73*/
                {
LABEL_22:
                  if ( v28 < v8 ) /*0x63ae79*/
                    goto LABEL_27; /*0x63ae79*/
                  if ( (v27 || !v8) && v29 > 0 ) /*0x63ae8d*/
                  {
                    if ( ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v24[2])(&v24, v29 + v8, 0) ) /*0x63ae9c*/
                    {
LABEL_27:
                      v12 = v28++; /*0x63aea3*/
                      v25[v12] = v10; /*0x63aeb2*/
                    }
                    v8 = v26; /*0x63aeb5*/
                  }
                }
                if ( ++v7 >= v6 ) /*0x63aebc*/
                  goto LABEL_37; /*0x63aebc*/
                continue; /*0x63aebc*/
              }
            }
          }
          if ( v28 < v26 /*0x63ae29*/
            || (v27 || !v26)
            && v29 > 0
            && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v24[2])(&v24, v29 + v26, 0) )
          {
LABEL_36:
            v13 = v28++; /*0x63aef4*/
            v25[v13] = v2; /*0x63af03*/
          }
        }
        else if ( v28 < v26 /*0x63aeed*/
               || (v27 || !v26)
               && v29 > 0
               && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v24[2])(&v24, v29 + v26, 0) )
        {
          goto LABEL_36; /*0x63aef2*/
        }
      }
    }
LABEL_37:
    v1 = ++v30; /*0x63af06*/
  }
  while ( v30 < v32[0] ); /*0x63af15*/
  v14 = 0; /*0x63af1f*/
  v30 = v28; /*0x63af21*/
  if ( v28 > 0 ) /*0x63af27*/
  {
    do /*0x63afd3*/
    {
      v23 = 0; /*0x63af3c*/
      v15 = (_DWORD *)v25[v14]; /*0x63af3e*/
      qmemcpy(v37, (const void *)Team_Helper_6342E0(v38, 0), 0x6Fu); /*0x63af55*/
      v16 = (_DWORD *)Team_Load_63B050(v37); /*0x63af61*/
      if ( v16 ) /*0x63af68*/
      {
        WaypointCoordsScriptAction = ScriptAction::GetWaypointCoords(v32, v16); /*0x63af6f*/
        v18 = *(_DWORD *)WaypointCoordsScriptAction; /*0x63af74*/
        LOBYTE(WaypointCoordsScriptAction) = WaypointCoordsScriptAction[4]; /*0x63af7b*/
        *(_DWORD *)&v22[104] = v18; /*0x63af7f*/
        LOBYTE(v23) = (_BYTE)WaypointCoordsScriptAction; /*0x63af81*/
        v19 = ScriptAction::GetWaypointCoords(v33, v15); /*0x63af88*/
        ScenarioClass::SetEvent( /*0x63afac*/
          v34,
          *((_DWORD *)HouseClass_Player + 12),
          42,
          *(_DWORD *)v19,
          v19[4],
          *(int *)&v22[104],
          v23);
        qmemcpy(v22, v34, sizeof(v22)); /*0x63afc2*/
        LOWORD(v23) = v35; /*0x63afc4*/
        BYTE2(v23) = v36; /*0x63afc6*/
        Network::RecordEvent( /*0x63afc7*/
          *(__int64 *)v22,
          *(int *)&v22[8],
          *(int *)&v22[12],
          *(int *)&v22[16],
          *(int *)&v22[20],
          *(int *)&v22[24],
          *(int *)&v22[28],
          *(int *)&v22[32],
          *(int *)&v22[36],
          *(int *)&v22[40],
          *(int *)&v22[44],
          *(int *)&v22[48],
          *(int *)&v22[52],
          *(int *)&v22[56],
          *(int *)&v22[60],
          *(int *)&v22[64],
          *(int *)&v22[68],
          *(int *)&v22[72],
          *(int *)&v22[76],
          *(int *)&v22[80],
          *(int *)&v22[84],
          *(int *)&v22[88],
          *(int *)&v22[92],
          *(int *)&v22[96],
          *(int *)&v22[100],
          *(int *)&v22[104],
          v23);
      }
      ++v14; /*0x63afd0*/
    }
    while ( v14 < v30 ); /*0x63afd3*/
    if ( v30 > 0 && MEMORY[0xAC4C00] < 1 ) /*0x63afe4*/
    {
      StringCSF = GetStringCSF(MEMORY[0x836D0C], 0, MEMORY[0x836BD4], 3233); /*0x63aff7*/
      AddMessageListPlayerMessage(StringCSF, 480); /*0x63b003*/
      ++MEMORY[0xAC4C00]; /*0x63b008*/
    }
  }
  v24 = &vt_VectorClass_TechnoClass; /*0x63b012*/
  return VectorClass_Techno::ddtor(&v24); /*0x63b01f*/
}
}
} // namespace gamemd

// 0x63B080
namespace gamemd {
void E4Recv_63B080::sub_63B080()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_63B080(void *this)
{
  g_ScriptActionPool = (int)this; /*0x63b080*/
}
}
} // namespace gamemd

// 0x63B150
namespace gamemd {
void sub_63B150()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_63B150()
{
  int v0; // ebp
  int i; // esi
  int v2; // edi
  int j; // ebx
  int v4; // esi
  int DrawColor; // edi
  int *Viewport; // eax
  _DWORD *Coords; // eax
  int *v8; // eax
  int *v9; // ecx
  int v10; // eax
  int v11; // ecx
  int v12; // ebx
  int k; // esi
  int v14; // edi
  int v15; // [esp+10h] [ebp-60h] BYREF
  _DWORD v16[3]; // [esp+18h] [ebp-58h] BYREF
  _DWORD v17[3]; // [esp+24h] [ebp-4Ch] BYREF
  int v18; // [esp+30h] [ebp-40h] BYREF
  int v19; // [esp+34h] [ebp-3Ch]
  int v20; // [esp+38h] [ebp-38h]
  int v21; // [esp+3Ch] [ebp-34h]
  _DWORD v22[4]; // [esp+40h] [ebp-30h] BYREF
  int v23[4]; // [esp+50h] [ebp-20h] BYREF
  _DWORD v24[4]; // [esp+60h] [ebp-10h] BYREF

  v0 = MEMORY[0xAC4B40]; /*0x63b155*/
  for ( i = 0; i < v0; ++i ) /*0x63b161*/
  {
    v2 = *((_DWORD *)MEMORY[0xAC4B34] + i); /*0x63b168*/
    if ( (unsigned __int8)HouseClass::IsAlliedWith(*(#375 **)(***(_DWORD ***)(v2 + 4) + 540), HouseClass_Player) ) /*0x63b17f*/
      RenderScenarioActionLines2(v2); /*0x63b18a*/
  }
  for ( j = 0; j < v0; ++j ) /*0x63b198*/
  {
    v4 = *((_DWORD *)MEMORY[0xAC4B34] + j); /*0x63b1a3*/
    if ( (unsigned __int8)HouseClass::IsAlliedWith(*(#375 **)(***(_DWORD ***)(v4 + 4) + 540), HouseClass_Player) ) /*0x63b1ba*/
    {
      DrawColor = BuildingClass::GetDrawColor(v4); /*0x63b1d2*/
      Viewport = Display::GetViewport(v23); /*0x63b1d4*/
      v22[0] = *Viewport; /*0x63b1db*/
      v22[1] = Viewport[1]; /*0x63b1e2*/
      v22[2] = Viewport[2]; /*0x63b1e9*/
      v22[3] = Viewport[3]; /*0x63b1f7*/
      Coords = ScriptAction::GetCoords((_DWORD **)v4, v17); /*0x63b1fb*/
      v16[0] = *Coords; /*0x63b202*/
      v16[1] = Coords[1]; /*0x63b20d*/
      v16[2] = Coords[2]; /*0x63b218*/
      v8 = ToCoordPixel(&v15, v16); /*0x63b21c*/
      v9 = ComputeBounds(v24, 8, *v8, v8[1]); /*0x63b236*/
      v18 = *v9; /*0x63b23a*/
      v19 = v9[1]; /*0x63b241*/
      v10 = v9[2]; /*0x63b245*/
      v20 = v10; /*0x63b248*/
      v11 = v9[3]; /*0x63b24f*/
      if ( v10 > -2 && v11 > -2 ) /*0x63b257*/
      {
        ++v18; /*0x63b27d*/
        ++v19; /*0x63b281*/
        v20 = v10 - 2; /*0x63b285*/
        v21 = v11 - 2; /*0x63b289*/
      }
      else
      {
        v18 = 0; /*0x63b25b*/
        v19 = 0; /*0x63b25f*/
        v20 = 0; /*0x63b263*/
        v21 = 0; /*0x63b267*/
      }
      (*(void (__thiscall **)(int, _DWORD *, int *, int))(*(_DWORD *)DSurface_Composite + 16))( /*0x63b2a0*/
        DSurface_Composite,
        v22,
        &v18,
        DrawColor);
    }
  }
  v12 = MEMORY[0xA8EC88]; /*0x63b2ac*/
  for ( k = 0; k < v12; ++k ) /*0x63b2b6*/
  {
    v14 = *((_DWORD *)MEMORY[0xA8EC7C] + k); /*0x63b2c5*/
    if ( (unsigned __int8)HouseClass::IsAlliedWith(*(#375 **)(v14 + 540), HouseClass_Player) ) /*0x63b2ce*/
      BuildingClass::DrawActionLines(v14); /*0x63b2d9*/
  }
}
}
} // namespace gamemd

// 0x63B2F0
namespace gamemd {
int RenderScriptActionHighlight()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int RenderScriptActionHighlight()
{
  _DWORD **v0; // edi
  int result; // eax
  int v2; // esi
  int *Viewport; // eax
  int *ScreenPos; // eax
  _DWORD *v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // edi
  int v9; // edi
  int *v10; // eax
  int *v11; // eax
  int v12; // edi
  int v13; // [esp+10h] [ebp-50h] BYREF
  int v14; // [esp+14h] [ebp-4Ch]
  int v15; // [esp+18h] [ebp-48h]
  int v16; // [esp+1Ch] [ebp-44h]
  int v17; // [esp+20h] [ebp-40h] BYREF
  int v18; // [esp+24h] [ebp-3Ch]
  int v19; // [esp+28h] [ebp-38h]
  int v20; // [esp+2Ch] [ebp-34h]
  int v21; // [esp+30h] [ebp-30h] BYREF
  int v22; // [esp+34h] [ebp-2Ch]
  int v23; // [esp+38h] [ebp-28h]
  int v24; // [esp+3Ch] [ebp-24h]
  int v25[4]; // [esp+40h] [ebp-20h] BYREF
  char v26[16]; // [esp+50h] [ebp-10h] BYREF

  v0 = (_DWORD **)g_ScriptPool; /*0x63b31c*/
  result = (unsigned __int8)byte_A80220 >> g_BitShift_Green_0 << MEMORY[0x8A0DD0]; /*0x63b34b*/
  v2 = result /*0x63b34d*/
     | ((unsigned __int8)word_A80221 >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0])
     | (HIBYTE(word_A80221) >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]);
  if ( g_ScriptPool ) /*0x63b351*/
  {
    Viewport = Display::GetViewport(v25); /*0x63b35b*/
    v21 = *Viewport; /*0x63b362*/
    v22 = Viewport[1]; /*0x63b369*/
    v23 = Viewport[2]; /*0x63b370*/
    v24 = Viewport[3]; /*0x63b37e*/
    ScreenPos = ScriptAction::GetScreenPos(v0, &v13); /*0x63b382*/
    v5 = ComputeBounds(v25, 8, *ScreenPos, ScreenPos[1]); /*0x63b397*/
    v6 = v5[1] - 4; /*0x63b3a6*/
    v7 = v5[2] + 8; /*0x63b3ac*/
    v8 = v5[3]; /*0x63b3af*/
    v17 = *v5 - 4; /*0x63b3b2*/
    v18 = v6; /*0x63b3b9*/
    v20 = v8 + 8; /*0x63b3bd*/
    v19 = v7; /*0x63b3c1*/
    v9 = 3; /*0x63b3c5*/
    do /*0x63b42a*/
    {
      result = (*(int (__thiscall **)(int, int *, int *, int))(*(_DWORD *)DSurface_Composite + 84))( /*0x63b3dd*/
                 DSurface_Composite,
                 &v21,
                 &v17,
                 v2);
      if ( v19 > -2 && v20 > -2 ) /*0x63b3ea*/
      {
        ++v17; /*0x63b40c*/
        ++v18; /*0x63b414*/
        result = 2; /*0x63b418*/
        v19 -= 2; /*0x63b421*/
        v20 -= 2; /*0x63b425*/
      }
      else
      {
        v17 = 0; /*0x63b3ec*/
        v18 = 0; /*0x63b3f0*/
        v19 = 0; /*0x63b3f4*/
        v20 = 0; /*0x63b3f8*/
      }
      --v9; /*0x63b429*/
    }
    while ( v9 ); /*0x63b42a*/
  }
  if ( g_ScriptActionPool ) /*0x63b434*/
  {
    v10 = Display::GetViewport(&v21); /*0x63b43e*/
    v25[0] = *v10; /*0x63b445*/
    v25[1] = v10[1]; /*0x63b44c*/
    v25[2] = v10[2]; /*0x63b453*/
    v25[3] = v10[3]; /*0x63b461*/
    v11 = (int *)Render_Render_6345A0(v26); /*0x63b465*/
    v13 = *v11; /*0x63b46c*/
    v14 = v11[1]; /*0x63b473*/
    v15 = v11[2]; /*0x63b47a*/
    v16 = v11[3]; /*0x63b485*/
    ShrinkRect(&v13, 4); /*0x63b48e*/
    v21 = v13; /*0x63b49f*/
    v22 = v14; /*0x63b4a7*/
    v23 = v15; /*0x63b4ab*/
    v24 = v16; /*0x63b4b8*/
    ShrinkRect(&v21, 4); /*0x63b4bc*/
    v17 = v21; /*0x63b4cd*/
    v18 = v22; /*0x63b4d5*/
    v19 = v23; /*0x63b4d9*/
    v20 = v24; /*0x63b4dd*/
    v12 = 3; /*0x63b4e1*/
    do /*0x63b546*/
    {
      result = (*(int (__thiscall **)(int, int *, int *, int))(*(_DWORD *)DSurface_Composite + 84))( /*0x63b4f9*/
                 DSurface_Composite,
                 v25,
                 &v17,
                 v2);
      if ( v19 > -2 && v20 > -2 ) /*0x63b506*/
      {
        ++v17; /*0x63b528*/
        ++v18; /*0x63b530*/
        result = 2; /*0x63b534*/
        v19 -= 2; /*0x63b53d*/
        v20 -= 2; /*0x63b541*/
      }
      else
      {
        v17 = 0; /*0x63b508*/
        v18 = 0; /*0x63b50c*/
        v19 = 0; /*0x63b510*/
        v20 = 0; /*0x63b514*/
      }
      --v12; /*0x63b545*/
    }
    while ( v12 ); /*0x63b546*/
  }
  return result; /*0x63b548*/
}
}
} // namespace gamemd

// 0x63CF10
namespace gamemd {
int E4Recv_63CF10::sub_63CF10()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_63CF10(_DWORD *this)
{
  int v1; // ecx
  int v2; // esi
  int v3; // ecx
  __int16 v5; // [esp+4h] [ebp-8h] BYREF
  unsigned __int8 v6; // [esp+6h] [ebp-6h]

  v1 = *(this + 135); /*0x63cf10*/
  v2 = *(_DWORD *)(v1 + 48); /*0x63cf1a*/
  if ( (unsigned __int8)House::IsHumanPlayer((#375 *)v1) && HouseClass_Player ) /*0x63cf2d*/
    v2 = *((_DWORD *)HouseClass_Player + 12); /*0x63cf2f*/
  v3 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * v2] + 22265; /*0x63cf41*/
  v5 = *(_WORD *)v3; /*0x63cf4a*/
  v6 = *(_BYTE *)(v3 + 2); /*0x63cf56*/
  Color::Lerp((unsigned __int8 *)&v5, 0x50u, (unsigned __int8 *)&byte_A83CD9); /*0x63cf5a*/
  return (HIBYTE(v5) >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0]) /*0x63cf80*/
       | ((unsigned __int8)v5 >> g_BitShift_Green_0 << MEMORY[0x8A0DD0])
       | (v6 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]);
}
}
} // namespace gamemd

// 0x63CFC0
namespace gamemd {
int E4Recv_63CFC0::sub_63CFC0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_63CFC0(_DWORD *this)
{
  int v1; // ecx
  int v2; // esi
  int v3; // ecx
  __int16 v5; // [esp+4h] [ebp-8h] BYREF
  unsigned __int8 v6; // [esp+6h] [ebp-6h]

  v1 = *(this + 135); /*0x63cfc0*/
  v2 = *(_DWORD *)(v1 + 48); /*0x63cfca*/
  if ( (unsigned __int8)House::IsHumanPlayer((#375 *)v1) && HouseClass_Player ) /*0x63cfdd*/
    v2 = *((_DWORD *)HouseClass_Player + 12); /*0x63cfdf*/
  v3 = *(_DWORD *)&HouseClass_Array->__pad_0[4 * v2] + 22265; /*0x63cff1*/
  v5 = *(_WORD *)v3; /*0x63cffa*/
  v6 = *(_BYTE *)(v3 + 2); /*0x63d006*/
  Color::Lerp((unsigned __int8 *)&v5, 0x64u, (unsigned __int8 *)&byte_A80220); /*0x63d00a*/
  return (HIBYTE(v5) >> MEMORY[0x8A0DE4] << MEMORY[0x8A0DE0]) /*0x63d030*/
       | ((unsigned __int8)v5 >> g_BitShift_Green_0 << MEMORY[0x8A0DD0])
       | (v6 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]);
}
}
} // namespace gamemd

// 0x63D630
namespace gamemd {
void Tactical_DrawWaypoint(int a1, int a2, int a3, int a4, int a5, int a6, unsigned int a7)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __fastcall Tactical_DrawWaypoint(int a1, int a2, int a3, int a4, int a5, int a6, unsigned int a7)
{
  int v7; // ebx
  int v8; // ebp
  int v9; // esi
  int v10; // edi
  double v11; // st7
  int v12; // esi
  int v13; // edi
  int *Viewport; // eax
  int v15; // eax
  int v16; // edi
  int v19; // [esp+20h] [ebp-40h] BYREF
  int v20; // [esp+24h] [ebp-3Ch]
  int v21; // [esp+28h] [ebp-38h]
  int v22; // [esp+2Ch] [ebp-34h]
  int v23; // [esp+30h] [ebp-30h] BYREF
  int v24; // [esp+34h] [ebp-2Ch]
  int v25; // [esp+38h] [ebp-28h]
  int v26; // [esp+3Ch] [ebp-24h]
  int v27[4]; // [esp+40h] [ebp-20h] BYREF
  int v28[4]; // [esp+50h] [ebp-10h] BYREF

  v7 = a4; /*0x63d634*/
  v8 = a6; /*0x63d639*/
  v9 = a3; /*0x63d63e*/
  v10 = a5; /*0x63d643*/
  v19 = a3 - a5; /*0x63d651*/
  v20 = a4 - a6; /*0x63d65b*/
  v11 = Math::Sqrt((double)(a4 - a6) * (double)(a4 - a6) + (double)(a3 - a5) * (double)(a3 - a5)); /*0x63d67b*/
  if ( (int)Math::RoundToInt(v11) >= 37 ) /*0x63d68b*/
  {
    v12 = (v10 + v9) / 2; /*0x63d6a5*/
    v13 = (v7 + v8) / 2; /*0x63d6a7*/
    Viewport = Display::GetViewport(v28); /*0x63d6af*/
    v23 = *Viewport; /*0x63d6b6*/
    v24 = Viewport[1]; /*0x63d6bd*/
    v25 = Viewport[2]; /*0x63d6c7*/
    v15 = Viewport[3]; /*0x63d6ce*/
    v20 = v13 - 10 + 1; /*0x63d6d1*/
    v26 = v15; /*0x63d6d9*/
    v19 = v12 - 10 + 1; /*0x63d6de*/
    v21 = 19; /*0x63d6f2*/
    v22 = 19; /*0x63d6f6*/
    (*(void (__thiscall **)(int, int *, int *, int))(*(_DWORD *)DSurface_Composite + 84))( /*0x63d701*/
      DSurface_Composite,
      &v23,
      &v19,
      a1);
    if ( v21 > -2 && v22 > -2 ) /*0x63d713*/
    {
      ++v19; /*0x63d737*/
      ++v20; /*0x63d73f*/
      v21 -= 2; /*0x63d74c*/
      v22 -= 2; /*0x63d750*/
    }
    else
    {
      v19 = 0; /*0x63d717*/
      v20 = 0; /*0x63d71b*/
      v21 = 0; /*0x63d71f*/
      v22 = 0; /*0x63d723*/
    }
    (*(void (__thiscall **)(int, int *, int *, int))(*(_DWORD *)DSurface_Composite + 16))( /*0x63d76b*/
      DSurface_Composite,
      &v23,
      &v19,
      a2);
    a3 = v12 - 10; /*0x63d76e*/
    a4 = v13 - 10; /*0x63d772*/
    v27[0] = v23; /*0x63d782*/
    v27[1] = v24; /*0x63d78a*/
    v27[2] = v25; /*0x63d794*/
    v27[3] = v26; /*0x63d798*/
    v16 = v13 - *((__int16 *)MEMORY[0xABF294] + 2) / 2; /*0x63d7b4*/
    a3 = v12 - *((__int16 *)MEMORY[0xABF294] + 1) / 2 - 1; /*0x63d7ed*/
    a4 = v16; /*0x63d7f4*/
    DrawToSurfaceSHP( /*0x63d7fb*/
      DSurface_Composite,
      MEMORY[0x87F6C8],
      (int)MEMORY[0xABF294],
      a7,
      &a3,
      v27,
      1024,
      0,
      0,
      0,
      1000,
      0,
      0,
      0,
      0,
      0);
  }
}
}
} // namespace gamemd

// 0x63D810
namespace gamemd {
char DrawTacticalLine2D(int a1, ObjectClass * aP1, int aP0, int aP0_4, int aP0_8, int aP0_12, char aP0_16)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall DrawTacticalLine2D(int a1, ObjectClass *aP1, int aP0, int aP0_4, int aP0_8, int aP0_12, char aP0_16)
{
  signed int v7; // ebx
  signed int v8; // eax
  int v9; // edx
  int v10; // eax
  char result; // al
  DWORD Time; // eax
  int a2[4]; // [esp+14h] [ebp-10h] BYREF

  v7 = abs32(aP0_12 - aP0_4); /*0x63d832*/
  v8 = abs32(aP0_8 - aP0); /*0x63d83d*/
  v9 = v8 <= v7 ? a1 : 0;
  v10 = v8 > v7 ? a1 : 0;
  a2[1] = *(_DWORD *)&stru_87C374.__pad_579C[21652]; /*0x63d871*/
  a2[0] = *(_DWORD *)&stru_87C374.__pad_579C[21648]; /*0x63d879*/
  a2[2] = *(_DWORD *)&stru_87C374.__pad_579C[21656]; /*0x63d882*/
  aP0 += v9; /*0x63d88f*/
  aP0_4 += v10; /*0x63d893*/
  aP0_8 += v9; /*0x63d897*/
  aP0_12 += v10; /*0x63d89b*/
  a2[3] = *(_DWORD *)&stru_87C374.__pad_579C[21660]; /*0x63d89f*/
  result = ClipLine((IUnknown *)&aP0, &aP0_8, a2); /*0x63d8a3*/
  if ( result ) /*0x63d8ae*/
  {
    if ( aP0_16 ) /*0x63d8b6*/
    {
      Time = timeGetTime(); /*0x63d8b8*/
      return (*(char (__thiscall **)(_DWORD, int *, int *, ObjectClass *, char *, int))(**(_DWORD **)&stru_87C374.__pad_579C[22540] /*0x63d8e3*/
                                                                                      + 72))(
               *(_DWORD *)&stru_87C374.__pad_579C[22540],
               &aP0,
               &aP0_8,
               aP1,
               &stru_830620.__pad_579C[2756],
               ((signed int)-Time >> 5) & 0xF);
    }
    else
    {
      return (*(char (__thiscall **)(_DWORD, int *, int *, ObjectClass *))(**(_DWORD **)&stru_87C374.__pad_579C[22540] /*0x63d903*/
                                                                         + 48))(
               *(_DWORD *)&stru_87C374.__pad_579C[22540],
               &aP0,
               &aP0_8,
               aP1);
    }
  }
  return result; /*0x63d8aa*/
}
}
} // namespace gamemd

// 0x63F080
namespace gamemd {
void Voxel_ProcessVertexData(unsigned int * a1, int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __fastcall Voxel_ProcessVertexData(_DWORD *a1, int *a2)
{
  int v2; // esi
  int v3; // ecx
  int v4; // edi
  int v5; // ebx
  int v6; // eax
  int *v7; // ebp
  int v8; // edx
  int v9; // ebp
  int v10; // edx
  int v11; // edi
  int v12; // edx
  int v13; // ebp
  BOOL v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // eax
  int *v18; // ebp
  int v19; // ecx
  bool v20; // zf
  int v21; // edx
  BOOL v22; // ebx
  int v23; // ebx
  int v24; // ebp
  int v25; // edi
  int v26; // [esp+10h] [ebp-24h]
  int v27; // [esp+14h] [ebp-20h] BYREF
  int v28; // [esp+18h] [ebp-1Ch]
  _DWORD *v29; // [esp+1Ch] [ebp-18h]
  BOOL v30; // [esp+20h] [ebp-14h]
  int v31; // [esp+24h] [ebp-10h]
  int v32; // [esp+28h] [ebp-Ch]
  int *v33; // [esp+2Ch] [ebp-8h]
  int v34; // [esp+30h] [ebp-4h]

  v2 = a1[1]; /*0x63f086*/
  v29 = a1; /*0x63f08a*/
  v3 = *a1; /*0x63f08e*/
  v4 = 0; /*0x63f090*/
  v33 = a2; /*0x63f094*/
  if ( v3 ) /*0x63f098*/
  {
    v5 = *(_DWORD *)(v2 + 4); /*0x63f09e*/
    v6 = 1; /*0x63f0a1*/
    v31 = 0; /*0x63f0a8*/
    v27 = v5; /*0x63f0ac*/
    if ( v3 > 1 ) /*0x63f0b0*/
    {
      v7 = (int *)(v2 + 12); /*0x63f0b6*/
      do /*0x63f0da*/
      {
        v8 = *v7; /*0x63f0b9*/
        if ( *v7 >= v5 ) /*0x63f0be*/
        {
          if ( v8 > v27 ) /*0x63f0ca*/
          {
            v31 = v6; /*0x63f0cc*/
            v27 = v8; /*0x63f0d0*/
          }
        }
        else
        {
          v4 = v6; /*0x63f0c0*/
          v5 = *v7; /*0x63f0c2*/
        }
        ++v6; /*0x63f0d4*/
        v7 += 2; /*0x63f0d5*/
      }
      while ( v6 < v3 ); /*0x63f0da*/
      if ( v5 != v27 ) /*0x63f0e0*/
      {
        v9 = *(_DWORD *)(v2 + 8 * v4 + 4); /*0x63f0e6*/
        v10 = v4; /*0x63f0ea*/
        if ( v9 == v5 ) /*0x63f0ee*/
        {
          do /*0x63f0fa*/
            v10 = (v10 + 1) % v3; /*0x63f0f4*/
          while ( *(_DWORD *)(v2 + 8 * v10 + 4) == v5 ); /*0x63f0fa*/
        }
        v26 = (v3 + v10 - 1) % v3; /*0x63f105*/
        if ( v9 == v5 ) /*0x63f109*/
        {
          do /*0x63f118*/
            v4 = (v3 + v4 - 1) % v3; /*0x63f112*/
          while ( *(_DWORD *)(v2 + 8 * v4 + 4) == v5 ); /*0x63f118*/
        }
        v28 = -1; /*0x63f11d*/
        v11 = (v4 + 1) % v3; /*0x63f12c*/
        v12 = *(_DWORD *)(v2 + 8 * v26); /*0x63f12e*/
        v13 = *(_DWORD *)(v2 + 8 * v11); /*0x63f133*/
        v14 = v13 != v12; /*0x63f138*/
        v30 = v14; /*0x63f13e*/
        if ( v14 ) /*0x63f142*/
        {
          if ( v13 > v12 ) /*0x63f146*/
          {
            v15 = v11; /*0x63f148*/
            v11 = v26; /*0x63f14a*/
            v28 = v13 != v12; /*0x63f14e*/
            v26 = v15; /*0x63f152*/
          }
        }
        else
        {
          v32 = (v26 + 1) % v3; /*0x63f166*/
          v16 = *(_DWORD *)(v2 + 8 * v11 + 4); /*0x63f16d*/
          v34 = (v3 + v11 - 1) % v3; /*0x63f171*/
          if ( (*(_DWORD *)(v2 + 8 * v32) - v13) * (*(_DWORD *)(v2 + 8 * v34 + 4) - v16) /*0x63f19f*/
             - (*(_DWORD *)(v2 + 8 * v34) - v13) * (*(_DWORD *)(v2 + 8 * v32 + 4) - v16) < 0 )
          {
            v17 = v11; /*0x63f1a1*/
            v11 = v26; /*0x63f1a3*/
            v28 = 1; /*0x63f1a7*/
            v26 = v17; /*0x63f1af*/
          }
          v14 = v30; /*0x63f1b3*/
        }
        v18 = v33; /*0x63f1bb*/
        v19 = v14 - v5 + v27 - 1; /*0x63f1c3*/
        v20 = v14 - v5 + v27 == 1; /*0x63f1c7*/
        *v33 = v19; /*0x63f1c9*/
        if ( v19 >= 0 && !v20 ) /*0x63f1cc*/
        {
          v21 = v18[2]; /*0x63f1d2*/
          v18[1] = v5 - v14 + 1; /*0x63f1da*/
          if ( !v21 ) /*0x63f1dd*/
          {
            v18[2] = (int)__2_YAPAXI_Z(8 * v19 + 1600); /*0x63f1ec*/
            v14 = v30; /*0x63f1ef*/
          }
          if ( v18[2] ) /*0x63f1f6*/
          {
            v27 = v18[2]; /*0x63f20a*/
            v22 = !v14; /*0x63f210*/
            v34 = v22; /*0x63f215*/
            do /*0x63f267*/
            {
              if ( v28 <= 0 ) /*0x63f21f*/
              {
                v18 = v33; /*0x63f23c*/
                v11 = (v11 + *v29 - 1) % *v29; /*0x63f240*/
              }
              else
              {
                v11 = (v11 + 1) % *v29; /*0x63f22b*/
              }
              Audio_Process(*(_DWORD *)(v2 + 8 * v11), *(_DWORD *)(v2 + 8 * v11 + 4), 1, v22, &v27); /*0x63f25a*/
              v22 = 0; /*0x63f25f*/
            }
            while ( v11 != v31 ); /*0x63f267*/
            v23 = v34; /*0x63f270*/
            v27 = v18[2]; /*0x63f274*/
            v24 = -v28; /*0x63f27c*/
            v25 = v26; /*0x63f27e*/
            v34 = -v28; /*0x63f280*/
            do /*0x63f2d0*/
            {
              if ( v24 <= 0 ) /*0x63f286*/
              {
                v24 = v34; /*0x63f2a3*/
                v25 = (v25 + *v29 - 1) % *v29; /*0x63f2a7*/
              }
              else
              {
                v25 = (v25 + 1) % *v29; /*0x63f292*/
              }
              Audio_Process(*(_DWORD *)(v2 + 8 * v25) - 1, *(_DWORD *)(v2 + 8 * v25 + 4), 0, v23, &v27); /*0x63f2c3*/
              v23 = 0; /*0x63f2c8*/
            }
            while ( v25 != v31 ); /*0x63f2d0*/
          }
          else
          {
            *v18 = 0; /*0x63f1fe*/
          }
        }
      }
    }
  }
}
}
} // namespace gamemd

// 0x630090
namespace gamemd {
int ParticleSystemClass__vt_06_(int * a1, int * a2, int a3)
{
{
    int result;
    int v4;
    int i;
    result = AbstractClass::SaveLoad_Prefix(a1, a2, a3);
    if ( result >= 0 )
  {
    v4 = *a2;
    a3 = *((int*)(a1) + 51);
    result = (*(int (__stdcall **)(int *, int *, int, int))(v4 + 16))(a2, &a3, 4, 0);
    if ( result >= 0 )
    {
    for ( i = 0; i < a3; ++i )
      {
    result = (*(int (__stdcall **)(int *, int, int, int))(*a2 + 16))(a2, *((int*)(a1) + 48) + 4 * i, 4, 0);
    if ( result < 0 )
    break;
      }
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x6302F0
namespace gamemd {
int sub_6302F0()
{
{
    DataGlobal_AC4AA0 = 0;
    DataGlobal_AC4AA4 = 0;
    DataGlobal_AC4AA8 = 0;
    DataGlobal_AC4AAC = 0;
    return 0;
}
}
} // namespace gamemd

// 0x630980
namespace gamemd {
int sub_630980()
{
{
    DataGlobal_AC4AB8 = 0;
    DataGlobal_AC4ABC = 0;
    DataGlobal_AC4AC0 = 0;
    DataGlobal_AC4AC4 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6309A0
namespace gamemd {
void sub_6309A0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_AC4AD0 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x6309D0
namespace gamemd {
void sub_6309D0()
{
{
    DataGlobal_AC4B20 = DataGlobal_AC4AD0 / 60.0;
}
}
} // namespace gamemd

// 0x6309F0
namespace gamemd {
void sub_6309F0()
{
{
    DataGlobal_AC4B08 = 1.0 / DataGlobal_AC4B20;
}
}
} // namespace gamemd

// 0x630A10
namespace gamemd {
void sub_630A10()
{
{
    DataGlobal_AC4B00 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x630A30
namespace gamemd {
void sub_630A30()
{
{
    DataGlobal_AC4AD8 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x630A50
namespace gamemd {
void sub_630A50()
{
{
    DataGlobal_AC4AB0 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x630A70
namespace gamemd {
long long sub_630A70()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_AC4AB0 - DataGlobal_AC4AD8);
    result = Math::RoundToInt(v0 * DataGlobal_AC4AD0 * 0.5);
    DataGlobal_AC4B28 = result;
    return result;
}
}
} // namespace gamemd

// 0x630AB0
namespace gamemd {
void sub_630AB0()
{
{
    DataGlobal_AC4AE0 = Math::ArcTan((double)DataGlobal_AC4B28 * 0.00390625);
}
}
} // namespace gamemd

// 0x630AE0
namespace gamemd {
void sub_630AE0()
{
{
    DataGlobal_AC4AF8 = Math::ArcTan((double)(2 * DataGlobal_AC4B28) / DataGlobal_AC4AD0);
}
}
} // namespace gamemd

// 0x630B10
namespace gamemd {
long long sub_630B10()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_AC4B28) + 0.5);
    DataGlobal_AC4B1C = result;
    return result;
}
}
} // namespace gamemd

// 0x630B40
namespace gamemd {
int sub_630B40()
{
{
    DataGlobal_AC4AC8 = 0;
    DataGlobal_AC4ACA = 0;
    return 0;
}
}
} // namespace gamemd

// 0x630B50
namespace gamemd {
int sub_630B50()
{
{
    DataGlobal_AC4AE8 = 0;
    DataGlobal_AC4AEC = 0;
    DataGlobal_AC4AF0 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x630B70
namespace gamemd {
int sub_630B70()
{
{
    DataGlobal_AC4B18 = 0;
    DataGlobal_AC4B10 = 128;
    DataGlobal_AC4B14 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x631C10
namespace gamemd {
int sub_631C10(int * a1, int * a2)
{
{
    int v2;
    int v3;
    int result;
    v2 = *a2;
    v3 = *a1;
    result = wcscmp((const wchar_t *)(*a1 + 112), (const wchar_t *)(*a2 + 112));
    if ( !result )
    return strcmp((const char *)(v3 + 154), (const char *)(v2 + 154));
    return result;
}
}
} // namespace gamemd

// 0x631F10
namespace gamemd {
int E4Recv_631F10::sub_631F10(int a2, int a3)
{
{
    this->M48 = a2;
    this->M52 = a3;
    return a2;
}
}
} // namespace gamemd

// 0x631F30
namespace gamemd {
void E4Recv_631F30::sub_631F30()
{
{
    this->vfptr = &vt_PixelFXClass;
}
}
} // namespace gamemd

// 0x631FC0
namespace gamemd {
int E4Recv_631FC0::sub_631FC0(ObjectClass * aP1)
{
{
    if ( aP1 )
    return EncodeVarInt((int)this, aP1, 64);
    else
    return 0;
}
}
} // namespace gamemd

// 0x631FE0
namespace gamemd {
int E4Recv_631FE0::sub_631FE0(unsigned char * a2)
{
{
    if ( a2 )
    return EncodeVarInt((int)this + 256, a2, 64);
    else
    return 0;
}
}
} // namespace gamemd

// 0x6329C0
namespace gamemd {
void * E4Recv_6329C0::sub_6329C0(void * a2, unsigned short a3)
{
{
    int v5[64];
    InitArrayWithValue(v5, 0, 64);
    DataGlobal_A8F8FD = DecodeAudioSampleWord((int)v5, this, a3, 0, 64);
    qmemcpy(a2, v5, 0x100u);
    return a2;
}
}
} // namespace gamemd

// 0x632A20
namespace gamemd {
void * E4Recv_632A20::sub_632A20(void * a2, const void * a3)
{
{
    int v5[64];
    InitArrayWithValue(v5, 0, 64);
    ModInverseBigInteger((char *)v5, this, a3, 64);
    qmemcpy(a2, v5, 0x100u);
    return a2;
}
}
} // namespace gamemd

// 0x632A70
namespace ra2 {
namespace game {
int ObjectClass::sub_632A70(int a2, int a3, ObjectClass * aP3)
{
{
    int result;
    sub_5C8E40(this, a2, a3, aP3, 64);
    result = *(int *)this->__pad_0;
    LOBYTE(result) = *(int *)this->__pad_0 | 1;
    *(int *)this->__pad_0 = result;
    return result;
}
}
} // namespace game
} // namespace ra2

// 0x632AC0
namespace gamemd {
unsigned int * E4Recv_632AC0::sub_632AC0(unsigned int * a2, unsigned short a3)
{
{
    unsigned int v5[64];
    InitArrayWithValue(v5, 0, 64);
    DataGlobal_A8F8FC = sub_5C6AA0(v5, this, a3, 0, 64);
    qmemcpy(a2, v5, 0x100u);
    return a2;
}
}
} // namespace gamemd

// 0x632B20
namespace gamemd {
void * E4Recv_632B20::sub_632B20(void * a2, short a3)
{
{
    int v5[64];
    InitArrayWithValue(v5, 0, 64);
    DataGlobal_A8F8F8 = sub_5C6D90((int)v5, this, a3, 64);
    qmemcpy(a2, v5, 0x100u);
    return a2;
}
}
} // namespace gamemd

// 0x632D60
namespace gamemd {
int E4Recv_632D60::sub_632D60(int a2)
{
{
    int result;
    int v4;
    if ( !a2 )
  {
    result = this->Vf4();
    this->M12 = 0;
  }
    this->M56 = a2;
    if ( a2 )
  {
    v4 = this->M52;
    result = 1;
    this->M12 = 1;
    if ( v4 == 1 )
    {
    result = ((*(int *)(a2 + 512) - 1) / 8 + 1) * (55 / ((*(int *)(a2 + 512) - 1) / 8) + 1);
    this->M320 = result;
    this->M316 = result;
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x6333D0
namespace gamemd {
void sub_6333D0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_AC4BE8 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x633400
namespace gamemd {
void sub_633400()
{
{
    DataGlobal_AC4CE8 = DataGlobal_AC4BE8 / 60.0;
}
}
} // namespace gamemd

// 0x633420
namespace gamemd {
void sub_633420()
{
{
    DataGlobal_AC4CC0 = 1.0 / DataGlobal_AC4CE8;
}
}
} // namespace gamemd

// 0x633440
namespace gamemd {
void sub_633440()
{
{
    DataGlobal_AC4CB8 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x633460
namespace gamemd {
void sub_633460()
{
{
    DataGlobal_AC4C10 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x633480
namespace gamemd {
void sub_633480()
{
{
    DataGlobal_AC4B68 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x6334A0
namespace gamemd {
long long sub_6334A0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_AC4B68 - DataGlobal_AC4C10);
    result = Math::RoundToInt(v0 * DataGlobal_AC4BE8 * 0.5);
    DataGlobal_AC4CF0 = result;
    return result;
}
}
} // namespace gamemd

// 0x6334E0
namespace gamemd {
void sub_6334E0()
{
{
    DataGlobal_AC4C30 = Math::ArcTan((double)DataGlobal_AC4CF0 * 0.00390625);
}
}
} // namespace gamemd

// 0x633510
namespace gamemd {
void sub_633510()
{
{
    DataGlobal_AC4C70 = Math::ArcTan((double)(2 * DataGlobal_AC4CF0) / DataGlobal_AC4BE8);
}
}
} // namespace gamemd

// 0x633540
namespace gamemd {
long long sub_633540()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_AC4CF0) + 0.5);
    DataGlobal_AC4CE4 = result;
    return result;
}
}
} // namespace gamemd

// 0x633570
namespace gamemd {
int sub_633570()
{
{
    DataGlobal_AC4BE4 = 0;
    DataGlobal_AC4BE6 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x633580
namespace gamemd {
int sub_633580()
{
{
    DataGlobal_AC4C58 = 0;
    DataGlobal_AC4C5C = 0;
    DataGlobal_AC4C60 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6335A0
namespace gamemd {
int sub_6335A0()
{
{
    DataGlobal_AC4CE0 = 0;
    DataGlobal_AC4CD8 = 128;
    DataGlobal_AC4CDC = 128;
    return 128;
}
}
} // namespace gamemd

// 0x6335C0
namespace gamemd {
int sub_6335C0()
{
{
    DataGlobal_AC4B70 = 0;
    DataGlobal_AC4B74 = 0;
    DataGlobal_AC4B78 = 0;
    DataGlobal_AC4B7C = 0;
    return 0;
}
}
} // namespace gamemd

// 0x6335E0
namespace gamemd {
int sub_6335E0()
{
{
    DataGlobal_AC4B4C = 0;
    DataGlobal_AC4B50 = 0;
    DataGlobal_AC4B54 = 1;
    DataGlobal_AC4B55 = 0;
    DataGlobal_AC4B48 = (int)&vt_DynamicVectorClass_EventClass;
    DataGlobal_AC4B5C = 10;
    DataGlobal_AC4B58 = 0;
    return atexit(sub_633620);
}
}
} // namespace gamemd

// 0x633620
namespace gamemd {
void sub_633620()
{
{
    if ( (DataGlobal_AC4B61 & 1) == 0 )
  {
    DataGlobal_AC4B48 = (int)&vt_VectorClass_EventClass;
    DataGlobal_AC4B61 |= 1u;
    if ( DataGlobal_AC4B4C )
    {
    if ( DataGlobal_AC4B55 )
      {
    __3_YAXPAX_Z(DataGlobal_AC4B4C);
    DataGlobal_AC4B4C = 0;
      }
    }
    DataGlobal_AC4B55 = 0;
    DataGlobal_AC4B50 = 0;
  }
}
}
} // namespace gamemd

// 0x633680
namespace gamemd {
int sub_633680()
{
{
    DataGlobal_AC4C9C = 0;
    DataGlobal_AC4CA0 = 0;
    DataGlobal_AC4CA4 = 1;
    DataGlobal_AC4CA5 = 0;
    g_ScriptConfig = (int)&vt_DynamicVectorClass_PlanningNodeClass;
    DataGlobal_AC4CAC = 10;
    DataGlobal_AC4CA8 = 0;
    return atexit(sub_6336C0);
}
}
} // namespace gamemd

// 0x6336C0
namespace gamemd {
void sub_6336C0()
{
{
    if ( (DataGlobal_AC4B60 & 1) == 0 )
  {
    g_ScriptConfig = (int)&vt_VectorClass_PlanningNodeClass;
    DataGlobal_AC4B60 |= 1u;
    if ( DataGlobal_AC4C9C )
    {
    if ( DataGlobal_AC4CA5 )
      {
    __3_YAXPAX_Z(DataGlobal_AC4C9C);
    DataGlobal_AC4C9C = 0;
      }
    }
    DataGlobal_AC4CA5 = 0;
    DataGlobal_AC4CA0 = 0;
  }
}
}
} // namespace gamemd

// 0x633720
namespace gamemd {
int sub_633720()
{
{
    DataGlobal_AC4C44 = 0;
    DataGlobal_AC4C48 = 0;
    DataGlobal_AC4C4C = 1;
    DataGlobal_AC4C4D = 0;
    DataGlobal_AC4C40 = (int)&vt_DynamicVectorClass_TechnoClass;
    DataGlobal_AC4C54 = 10;
    DataGlobal_AC4C50 = 0;
    return atexit(sub_633760);
}
}
} // namespace gamemd

// 0x633760
namespace gamemd {
void sub_633760()
{
{
    if ( (DataGlobal_AC4B63 & 1) == 0 )
  {
    DataGlobal_AC4C40 = (int)&vt_VectorClass_TechnoClass;
    DataGlobal_AC4B63 |= 1u;
    if ( DataGlobal_AC4C44 )
    {
    if ( DataGlobal_AC4C4D )
      {
    __3_YAXPAX_Z(DataGlobal_AC4C44);
    DataGlobal_AC4C44 = 0;
      }
    }
    DataGlobal_AC4C4D = 0;
    DataGlobal_AC4C48 = 0;
  }
}
}
} // namespace gamemd

// 0x6337C0
namespace gamemd {
int sub_6337C0()
{
{
    DataGlobal_AC4B34 = 0;
    DataGlobal_AC4B38 = 0;
    DataGlobal_AC4B3C = 1;
    DataGlobal_AC4B3D = 0;
    DataGlobal_AC4B30 = (int)&vt_DynamicVectorClass_PlanningNodeClass;
    DataGlobal_AC4B44 = 10;
    DataGlobal_AC4B40 = 0;
    return atexit(sub_633800);
}
}
} // namespace gamemd

// 0x633800
namespace gamemd {
void sub_633800()
{
{
    if ( (DataGlobal_AC4B62 & 1) == 0 )
  {
    DataGlobal_AC4B30 = (int)&vt_VectorClass_PlanningNodeClass;
    DataGlobal_AC4B62 |= 1u;
    if ( DataGlobal_AC4B34 )
    {
    if ( DataGlobal_AC4B3D )
      {
    __3_YAXPAX_Z(DataGlobal_AC4B34);
    DataGlobal_AC4B34 = 0;
      }
    }
    DataGlobal_AC4B3D = 0;
    DataGlobal_AC4B38 = 0;
  }
}
}
} // namespace gamemd

// 0x633860
namespace gamemd {
int sub_633860()
{
{
    DataGlobal_AC4C1C = 0;
    DataGlobal_AC4C20 = 0;
    DataGlobal_AC4C24 = 1;
    DataGlobal_AC4C25 = 0;
    DataGlobal_AC4C18 = (int)&vt_DynamicVectorClass_PlanningNodeClass;
    DataGlobal_AC4C2C = 10;
    DataGlobal_AC4C28 = 0;
    return atexit(sub_6338A0);
}
}
} // namespace gamemd

// 0x6338A0
namespace gamemd {
void sub_6338A0()
{
{
    if ( (DataGlobal_AC4B62 & 2) == 0 )
  {
    DataGlobal_AC4C18 = (int)&vt_VectorClass_PlanningNodeClass;
    DataGlobal_AC4B62 |= 2u;
    if ( DataGlobal_AC4C1C )
    {
    if ( DataGlobal_AC4C25 )
      {
    __3_YAXPAX_Z(DataGlobal_AC4C1C);
    DataGlobal_AC4C1C = 0;
      }
    }
    DataGlobal_AC4C25 = 0;
    DataGlobal_AC4C20 = 0;
  }
}
}
} // namespace gamemd

// 0x633900
namespace gamemd {
int sub_633900()
{
{
    DataGlobal_AC4C7C = 0;
    DataGlobal_AC4C80 = 0;
    DataGlobal_AC4C84 = 1;
    DataGlobal_AC4C85 = 0;
    DataGlobal_AC4C78 = (int)&vt_DynamicVectorClass_PlanningTokenClass;
    DataGlobal_AC4C8C = 10;
    DataGlobal_AC4C88 = 0;
    return atexit(sub_633940);
}
}
} // namespace gamemd

// 0x633940
namespace gamemd {
void sub_633940()
{
{
    if ( (DataGlobal_AC4B62 & 4) == 0 )
  {
    DataGlobal_AC4C78 = (int)&vt_VectorClass_PlanningTokenClass;
    DataGlobal_AC4B62 |= 4u;
    if ( DataGlobal_AC4C7C )
    {
    if ( DataGlobal_AC4C85 )
      {
    __3_YAXPAX_Z(DataGlobal_AC4C7C);
    DataGlobal_AC4C7C = 0;
      }
    }
    DataGlobal_AC4C85 = 0;
    DataGlobal_AC4C80 = 0;
  }
}
}
} // namespace gamemd

// 0x6339E0
namespace gamemd {
BuildingClass * ToCoordPixel(unsigned int * a1, unsigned int * a2)
{
{
    int v3;
    int v5[2];
    Coord::To_Screen(*(int **)&DataGlobal_87F8E4.__pad_5568[9432], a2, (IUnknown *)v5);
    v3 = *(int *)&DataGlobal_87F8E4.__pad_5568[8536] + v5[1];
    *a1 = *(int *)&DataGlobal_87F8E4.__pad_5568[8532] + v5[0];
    *((int*)(a1) + 1) = v3;
    return (BuildingClass *)a1;
}
}
} // namespace gamemd

// 0x633A20
namespace gamemd {
unsigned int * E4Recv_633A20::sub_633A20()
{
{
    *(void**)this = 0;
    this->M4 = 0;
    this->M8 = -1;
    this->M12 = 0;
    return this;
}
}
} // namespace gamemd

// 0x633A40
namespace gamemd {
int E4Recv_633A40::sub_633A40(int a2)
{
{
    *(void**)this = a2;
    return a2;
}
}
} // namespace gamemd

// 0x633A50
namespace gamemd {
int E4Recv_633A50::sub_633A50(int a2)
{
{
    this->M4 = a2;
    return a2;
}
}
} // namespace gamemd

// 0x633A60
namespace gamemd {
int E4Recv_633A60::sub_633A60(int a2)
{
{
    this->M8 = a2;
    return a2;
}
}
} // namespace gamemd

// 0x633A70
namespace gamemd {
char E4Recv_633A70::sub_633A70(char a2)
{
{
    this->M12 = a2;
    return a2;
}
}
} // namespace gamemd

// 0x633A90
namespace gamemd {
int E4Recv_633A90::sub_633A90()
{
{
    return this->M4;
}
}
} // namespace gamemd

// 0x633AA0
namespace gamemd {
int E4Recv_633AA0::sub_633AA0()
{
{
    return this->M8;
}
}
} // namespace gamemd

// 0x633AE0
namespace gamemd {
void E4Recv_633AE0::sub_633AE0(const void * a2)
{
{
    qmemcpy(this, a2, 0x6Fu);
}
}
} // namespace gamemd

// 0x633B00
namespace gamemd {
int E4Recv_633B00::sub_633B00(int a2)
{
{
    this->M112 = a2;
    return a2;
}
}
} // namespace gamemd

// 0x633B10
namespace gamemd {
int E4Recv_633B10::sub_633B10(int a2)
{
{
    this->M116 = a2;
    return a2;
}
}
} // namespace gamemd

// 0x633B20
namespace gamemd {
void E4Recv_633B20::sub_633B20()
{
{
    this->M112 = 0;
}
}
} // namespace gamemd

// 0x633B30
namespace gamemd {
int E4Recv_633B30::sub_633B30()
{
{
    int result;
    result = this->M112 + 1;
    this->M112 = result;
    return result;
}
}
} // namespace gamemd

// 0x633B40
namespace gamemd {
int E4Recv_633B40::sub_633B40()
{
{
    int result;
    result = this->M112 - 1;
    this->M112 = result;
    return result;
}
}
} // namespace gamemd

// 0x633B70
namespace gamemd {
int E4Recv_633B70::sub_633B70()
{
{
    return this->M112;
}
}
} // namespace gamemd

// 0x633B80
namespace gamemd {
int E4Recv_633B80::sub_633B80()
{
{
    return this->M116;
}
}
} // namespace gamemd

// 0x633C60
namespace gamemd {
unsigned int * E4Recv_633C60::sub_633C60(unsigned int * a2)
{
{
    int *ScenarioClassActionCoords;
    int v3;
    int v5[3];
    int v6[3];
    ScenarioClassActionCoords = GetScenarioClassActionCoords(v5, this);
    v6[0] = *ScenarioClassActionCoords;
    v6[1] = ScenarioClassActionCoords[1];
    v6[2] = ScenarioClassActionCoords[2];
    Coord::To_Screen(g_TacticalClass_Instance, v6, v5);
    v3 = g_Map_VisibleRect + v5[1];
    *a2 = DSurface_ViewBounds + v5[0];
    *((int*)(a2) + 1) = v3;
    return a2;
}
}
} // namespace gamemd

// 0x633E50
namespace gamemd {
int E4Recv_633E50::sub_633E50()
{
{
    return this->M24;
}
}
} // namespace gamemd

// 0x633E60
namespace gamemd {
int E4Recv_633E60::sub_633E60()
{
{
    return this->M16;
}
}
} // namespace gamemd

// 0x634360
namespace gamemd {
BOOL E4Recv_634360::sub_634360(int a2)
{
{
    int v2;
    int v3;
    int v4;
    int **i;
    v2 = this->M16;
    v3 = -1;
    v4 = 0;
    if ( v2 > 0 )
  {
    i = (int **)this->M4;
    for ( ; **i != a2; ++i )
    {
    if ( ++v4 >= v2 )
    return 0;
    }
    v3 = v4;
  }
    return v3 != -1;
}
}
} // namespace gamemd

// 0x6343B0
namespace gamemd {
int E4Recv_6343B0::sub_6343B0()
{
{
    return *(int *)(**(void**)this->M4 + 540);
}
}
} // namespace gamemd

// 0x634470
namespace gamemd {
BOOL E4Recv_634470::sub_634470(int a2, int a3)
{
{
    int *ScenarioClassActionCoords;
    int *v4;
    int *v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v11;
    int v12[3];
    int v13[3];
    int v14[4];
    ScenarioClassActionCoords = GetScenarioClassActionCoords(v13, *(char **)(*(void**)this->M4 + 4));
    v12[0] = *ScenarioClassActionCoords;
    v12[1] = ScenarioClassActionCoords[1];
    v12[2] = ScenarioClassActionCoords[2];
    v4 = ToCoordPixel(&v11, v12);
    v5 = ComputeBounds(v14, 8, *v4, v4[1]);
    v6 = *v5 - 4;
    v7 = v5[1] - 4;
    v8 = v5[2] + 8;
    v9 = v5[3] + 8;
    return a2 >= v6 && a2 < v8 + v6 && a3 >= v7 && a3 < v9 + v7;
}
}
} // namespace gamemd

// 0x634510
namespace gamemd {
unsigned int * ComputeBounds(AbstractClass * aP0, ObjectClass * aP1, int a3, int a4)
{
{
    *(int *)aP0->__pad_0 = (int)aP1 / -2 + a3;
    *(int *)&aP0->__pad_0[4] = (int)aP1 / -2 + a4;
    *(int *)&aP0->__pad_0[8] = aP1;
    *(int *)&aP0->__pad_0[12] = aP1;
    return aP0->__pad_0;
}
}
} // namespace gamemd

// 0x634700
namespace gamemd {
int E4Recv_634700::sub_634700()
{
{
    return this->M48;
}
}
} // namespace gamemd

// 0x6347A0
namespace gamemd {
int E4Recv_6347A0::sub_6347A0(int a2)
{
{
    return *(int *)(this->M36 + 4 * a2);
}
}
} // namespace gamemd

// 0x634800
namespace gamemd {
char * E4Recv_634800::sub_634800()
{
{
    return this + 56;
}
}
} // namespace gamemd

// 0x634810
namespace gamemd {
unsigned int * E4Recv_634810::sub_634810(unsigned int * a2, int a3)
{
{
    int *ScenarioClassActionCoords;
    int v4;
    int v5;
    int v6;
    int v8[3];
    ScenarioClassActionCoords = GetScenarioClassActionCoords(v8, *(char **)(this->M36 + 4 * a3));
    v4 = *ScenarioClassActionCoords;
    v5 = ScenarioClassActionCoords[1];
    v6 = ScenarioClassActionCoords[2];
    *a2 = v4;
    *((int*)(a2) + 1) = v5;
    *((int*)(a2) + 2) = v6;
    return a2;
}
}
} // namespace gamemd

// 0x634850
namespace gamemd {
unsigned int * E4Recv_634850::sub_634850(unsigned int * a2)
{
{
    int *ScenarioClassActionCoords;
    int v3;
    int v4;
    int v5;
    int v7[3];
    ScenarioClassActionCoords = GetScenarioClassActionCoords(v7, this + 56);
    v3 = *ScenarioClassActionCoords;
    v4 = ScenarioClassActionCoords[1];
    v5 = ScenarioClassActionCoords[2];
    *a2 = v3;
    *((int*)(a2) + 1) = v4;
    *((int*)(a2) + 2) = v5;
    return a2;
}
}
} // namespace gamemd

// 0x634880
namespace gamemd {
unsigned int * E4Recv_634880::sub_634880(unsigned int * a2, int a3)
{
{
    int *ScenarioClassActionCoords;
    int v4;
    int v6[2];
    int v7[3];
    int v8[3];
    ScenarioClassActionCoords = GetScenarioClassActionCoords(v8, *(char **)(this->M36 + 4 * a3));
    v7[0] = *ScenarioClassActionCoords;
    v7[1] = ScenarioClassActionCoords[1];
    v7[2] = ScenarioClassActionCoords[2];
    Coord::To_Screen(g_TacticalClass_Instance, v7, v6);
    v4 = g_Map_VisibleRect + v6[1];
    *a2 = DSurface_ViewBounds + v6[0];
    *((int*)(a2) + 1) = v4;
    return a2;
}
}
} // namespace gamemd

// 0x6348F0
namespace gamemd {
unsigned int * E4Recv_6348F0::sub_6348F0(unsigned int * a2)
{
{
    int *ScenarioClassActionCoords;
    int v3;
    int v5[2];
    int v6[3];
    int v7[3];
    ScenarioClassActionCoords = GetScenarioClassActionCoords(v7, this + 56);
    v6[0] = *ScenarioClassActionCoords;
    v6[1] = ScenarioClassActionCoords[1];
    v6[2] = ScenarioClassActionCoords[2];
    Coord::To_Screen(g_TacticalClass_Instance, v6, v5);
    v3 = g_Map_VisibleRect + v5[1];
    *a2 = DSurface_ViewBounds + v5[0];
    *((int*)(a2) + 1) = v3;
    return a2;
}
}
} // namespace gamemd

// 0x634950
namespace gamemd {
void E4Recv_634950::sub_634950()
{
{
    this->M28 = 1;
}
}
} // namespace gamemd

// 0x634960
namespace gamemd {
char E4Recv_634960::sub_634960()
{
{
    return this->M28;
}
}
} // namespace gamemd

// 0x635210
namespace gamemd {
int E4Recv_635210::sub_635210()
{
{
    int result;
    int v3;
    char *v4;
    int *ScenarioClassActionCoords;
    int v6;
    int v7;
    int *v8;
    int v9;
    int v10;
    int v11;
    int v12;
    int v13[3];
    int v14[3];
    char v15[112];
    char v16[108];
    short v17;
    char v18;
    this->M176 = -1;
    result = this->M168;
    if ( result )
  {
    result = this->M48;
    qmemcpy(v15, (const void *)(this + 56), 0x6Eu);
    v3 = 0;
    v11 = result;
    v15[110] = (unsigned char)this->M166;
    if ( result > 0 )
    {
    while ( 1 )
      {
    v4 = *(char **)(this->M36 + 4 * v3);
    qmemcpy(v16, v4, sizeof(v16));
    v4 += 108;
    v17 = *(short *)v4;
    v18 = v4[2];
    ScenarioClassActionCoords = GetScenarioClassActionCoords(v13, v15);
    v6 = *ScenarioClassActionCoords;
    v7 = ScenarioClassActionCoords[1];
    v12 = ScenarioClassActionCoords[2];
    v8 = GetScenarioClassActionCoords(v14, v16);
    result = *v8;
    v9 = v8[1];
    v10 = v8[2];
    if ( v6 == result && v7 == v9 && v12 == v10 )
    break;
    result = v11;
    if ( ++v3 >= v11 )
    return result;
      }
    this->M176 = v3;
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x6352D0
namespace gamemd {
char E4Recv_6352D0::sub_6352D0()
{
{
    int v2;
    int v3;
    char *v4;
    char result;
    v2 = 0;
    v3 = this->M16;
    if ( v3 > 0 )
  {
    do
    {
    v4 = **(char ***)(this->M4 + 4 * v2);
    result = v4[131];
    if ( !result )
    result = (*(int (__thiscall **)(char *))(*(int *)(v4) + 332))(v4);
    ++v2;
    }
    while ( v2 < v3 );
  }
    return result;
}
}
} // namespace gamemd

// 0x635310
namespace gamemd {
char E4Recv_635310::sub_635310()
{
{
    int v2;
    int v3;
    char *v4;
    char result;
    v2 = 0;
    v3 = this->M16;
    if ( v3 > 0 )
  {
    do
    {
    v4 = **(char ***)(this->M4 + 4 * v2);
    result = v4[131];
    if ( result )
    result = (*(int (__thiscall **)(char *))(*(int *)(v4) + 336))(v4);
    ++v2;
    }
    while ( v2 < v3 );
  }
    return result;
}
}
} // namespace gamemd

// 0x6357D0
namespace gamemd {
int Rect_Shrink(unsigned int * a1, int a2)
{
{
    int result;
    int v3;
    int v4;
    int v5;
    int v6;
    result = 2 * a2;
    if ( (a2 & 0x40000000) != 0 && (result >= *((int*)(a1) + 2) || result >= *((int*)(a1) + 3)) )
  {
    *a1 = 0;
    *((int*)(a1) + 1) = 0;
    *((int*)(a1) + 2) = 0;
    *((int*)(a1) + 3) = 0;
  }
    else
  {
    v3 = *((int*)(a1) + 1);
    *a1 -= a2;
    v4 = v3 - a2;
    v5 = *((int*)(a1) + 3);
    v6 = result + *((int*)(a1) + 2);
    *((int*)(a1) + 1) = v4;
    *((int*)(a1) + 2) = v6;
    *((int*)(a1) + 3) = result + v5;
  }
    return result;
}
}
} // namespace gamemd

// 0x635DF0
namespace gamemd {
unsigned int * E4Recv_635DF0::sub_635DF0(unsigned int * a2)
{
{
    int *ScenarioClassActionCoords;
    int v4;
    int v5[2];
    int v6[3];
    int v7[4];
    ScenarioClassActionCoords = GetScenarioClassActionCoords(v7, *(char **)(*(void**)this->M4 + 4));
    v6[0] = *ScenarioClassActionCoords;
    v6[1] = ScenarioClassActionCoords[1];
    v6[2] = ScenarioClassActionCoords[2];
    Coord::To_Screen(g_TacticalClass_Instance, v6, v5);
    v5[0] += DSurface_ViewBounds;
    v4 = g_Map_VisibleRect + v5[1] - 8;
    *a2 = v5[0] - 8;
    *((int*)(a2) + 1) = v4;
    *((int*)(a2) + 2) = 16;
    *((int*)(a2) + 3) = 16;
    return a2;
}
}
} // namespace gamemd

// 0x635E90
namespace gamemd {
int * E4Recv_635E90::sub_635E90(int * a2)
{
{
    int *ScenarioClassActionCoords;
    int *v3;
    int *v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v10;
    int v11[3];
    int v12[3];
    int v13[4];
    ScenarioClassActionCoords = GetScenarioClassActionCoords(v12, *(char **)(*(void**)this->M4 + 4));
    v11[0] = *ScenarioClassActionCoords;
    v11[1] = ScenarioClassActionCoords[1];
    v11[2] = ScenarioClassActionCoords[2];
    v3 = ToCoordPixel(&v10, v11);
    v4 = ComputeBounds(v13, 8, *v3, v3[1]);
    v5 = *v4 - 8;
    v6 = v4[1] - 8;
    v7 = v4[2] + 8;
    v8 = v4[3];
    *a2 = v5;
    *((int*)(a2) + 1) = v6;
    *((int*)(a2) + 2) = v7 + 8;
    *((int*)(a2) + 3) = v8 + 16;
    return a2;
}
}
} // namespace gamemd

// 0x636110
namespace gamemd {
ObjectClass * E4Recv_636110::ReadPointerFromECX2()
{
{
    return *(ObjectClass **)this;
}
}
} // namespace gamemd

// 0x636520
namespace gamemd {
void E4Recv_636520::sub_636520()
{
{
    this->M28 = 1;
}
}
} // namespace gamemd

// 0x636530
namespace gamemd {
void E4Recv_636530::sub_636530()
{
{
    this->M28 = 0;
}
}
} // namespace gamemd

// 0x636540
namespace gamemd {
char E4Recv_636540::sub_636540()
{
{
    return this->M28;
}
}
} // namespace gamemd

// 0x636D90
namespace gamemd {
unsigned int E4Recv_636D90::_GetExecutionResourceId_irtualProcessor_details_Concurrency__QBEIXZ()
{
{
    return this->M140;
}
}
} // namespace gamemd

// 0x636FA0
namespace gamemd {
int E4Recv_636FA0::sub_636FA0(int a2, int a3)
{
{
    this->M144 = a2;
    this->M148 = a3;
    this->M152 = 1;
    return a2;
}
}
} // namespace gamemd

// 0x636FC0
namespace gamemd {
unsigned int E4Recv_636FC0::_GetMaskId_irtualProcessor_details_Concurrency__QBEIXZ()
{
{
    return this->M144;
}
}
} // namespace gamemd

// 0x636FD0
namespace gamemd {
int E4Recv_636FD0::sub_636FD0()
{
{
    return this->M148;
}
}
} // namespace gamemd

// 0x637020
namespace gamemd {
bool E4Recv_637020::_WasExplicitlyAttached_ExternalContextBase_details_Concurrency__QBE_NXZ()
{
{
    return (unsigned char)this->M152;
}
}
} // namespace gamemd

// 0x637030
namespace gamemd {
char E4Recv_637030::sub_637030()
{
{
    return this->M153;
}
}
} // namespace gamemd

// 0x6370A0
namespace gamemd {
int j_PlanningNodeClass_CleanupAll()
{
    void *j_PlanningNodeClass_CleanupAll()
{
    return PlanningNodeClass::CleanupAll();
}
}
} // namespace gamemd

// 0x637550
namespace gamemd {
void __usercall FlushPlanningQueue(CCINIClass *a1@<edi> a1)
{
{
    char *esi1;
    CCINIClass *v2;
    int v4;
    CCINIClass *v5;
    int v6;
    esi1 = (char *)&(*(&g_MatrixTransformState + 5970))[-1].Z + 3;
    if ( (int)&(*(&g_MatrixTransformState + 5970))[-1].Z + 3 >= 0 )
  {
    v5 = a1;
    do
    {
    v2 = (CCINIClass *)*(&(*(&g_MatrixTransformState + 5967))->X + (int)esi1);
    Render_Show(v5, v6);
    if ( (int)esi1 < (int)*(&g_MatrixTransformState + 5970) )
      {
    v4 = (int)esi1;
    *(&g_MatrixTransformState + 5970) = (CoordStruct *)((char *)*(&g_MatrixTransformState + 5970) - 1);
    if ( (int)esi1 < (int)*(&g_MatrixTransformState + 5970) )
        {
    do
          {
    ++v4;
    *((int *)*(&g_MatrixTransformState + 5967) + v4 - 1) = *(&(*(&g_MatrixTransformState + 5967))->X + v4);
          }
    while ( v4 < (int)*(&g_MatrixTransformState + 5970) );
        }
      }
    __3_YAXPAX_Z(v2);
    --esi1;
    }
    while ( (int)esi1 >= 0 );
  }
}
}
} // namespace gamemd

// 0x638F90
namespace gamemd {
int sub_638F90(int a1, int a2)
{
{
    int *Coords;
    int *v3;
    int v4;
    int v6;
    int v7[3];
    int v8[4];
    int v9[4];
    if ( !g_ScriptPool )
    return 0;
    Coords = ScriptAction::GetCoords((int **)g_ScriptPool, v8);
    v7[0] = *Coords;
    v7[1] = Coords[1];
    v7[2] = Coords[2];
    v3 = ToCoordPixel(&v6, v7);
    Rect::Set(v9, *v3 - 4, v3[1] - 4, 8, 8);
    v8[0] = v9[0];
    v4 = v9[1] - 4;
    if ( a1 < v9[0] - 4 )
    return 0;
    if ( a1 < v9[2] + 8 + v9[0] - 4 && a2 >= v4 && a2 < v9[3] + 8 + v4 )
    return g_ScriptPool;
    else
    return 0;
}
}
} // namespace gamemd

// 0x6394E0
namespace gamemd {
char sub_6394E0(IUnknown * a1, int a2)
{
{
    char *v3;
    char *v4;
    IUnknown *Next;
    char *WaypointCoords;
    int v7;
    char *v8;
    char v10[108];
    int v11;
    char v12[8];
    char v13[8];
    char v14[108];
    short v15;
    char v16;
    char v17[108];
    short v18;
    char v19;
    v3 = *(char **)(**(int **)(a2 + 4) + 4);
    qmemcpy(v14, v3, sizeof(v14));
    v3 += 108;
    v15 = *(short *)v3;
    v16 = v3[2];
    if ( v14[18] )
  {
    v4 = &v14[14];
  }
    else if ( v14[28] )
  {
    v4 = &v14[24];
  }
    else
  {
    LOBYTE(Next) = v14[23];
    if ( !v14[23] )
    return (char)Next;
    v4 = &v14[19];
  }
    Next = (IUnknown *)BuildingLoadQueue::GetNext(v4);
    if ( Next )
  {
    WaypointCoords = ScriptAction::GetWaypointCoords(v13, Next);
    v7 = *(int *)WaypointCoords;
    LOBYTE(WaypointCoords) = WaypointCoords[4];
    *(int *)&v10[104] = v7;
    LOBYTE(v11) = (char)WaypointCoords;
    v8 = ScriptAction::GetWaypointCoords(v12, a1);
    ScenarioClass::SetEvent( v17, *(IUnknown **)&HouseClass_Player->__pad_28[8], 42, *(int *)v8, v8[4], *(int *)&v10[104], v11);
    qmemcpy(v10, v17, sizeof(v10));
    LOWORD(v11) = v18;
    BYTE2(v11) = v19;
    LOBYTE(Next) = Network::RecordEvent( *(__int64 *)v10, *(int *)&v10[8], *(int *)&v10[12], *(int *)&v10[16], *(int *)&v10[20], *(int *)&v10[24], *(int *)&v10[28], *(int *)&v10[32], *(int *)&v10[36], *(int *)&v10[40], *(int *)&v10[44], *(int *)&v10[48], *(int *)&v10[52], *(int *)&v10[56], *(int *)&v10[60], *(int *)&v10[64], *(int *)&v10[68], *(int *)&v10[72], *(int *)&v10[76], *(int *)&v10[80], *(int *)&v10[84], *(int *)&v10[88], *(int *)&v10[92], *(int *)&v10[96], *(int *)&v10[100], *(int *)&v10[104], v11);
  }
    return (char)Next;
}
}
} // namespace gamemd

// 0x63A440
namespace gamemd {
int sub_63A440(int a1, int a2)
{
{
    int v2;
    int v3;
    char v5;
    int v6;
    v2 = *(char *)(a2 + 12);
    v3 = a2 + 14;
    if ( v2 == 7 || v2 == 8 || v2 == 9 )
    return 0;
    v5 = *(char *)(v3 + 4);
    if ( (v2 == 1 || v2 == 11) && (v5 == 11 || v2 == 11 && !v5) )
    return 0;
    v6 = -(*(int *)(a1 + 20) != 15);
    LOBYTE(v6) = v6 & 0xFD;
    return v6 + 2;
}
}
} // namespace gamemd

// 0x63A4A0
namespace gamemd {
void E4Recv_63A4A0::sub_63A4A0()
{
{
    DataGlobal_AC4C90 = (int)this;
}
}
} // namespace gamemd

// 0x63AD30
namespace gamemd {
void E4Recv_63AD30::sub_63AD30()
{
{
    g_ScriptState = (int)this;
}
}
} // namespace gamemd

// 0x63AD40
namespace gamemd {
IUnknown * sub_63AD40()
{
{
    return (IUnknown *)*(&g_MatrixTransformState + 6026);
}
}
} // namespace gamemd

// 0x63B090
namespace gamemd {
void sub_63B090()
{
{
    g_ScriptActionPool = 0;
}
}
} // namespace gamemd

// 0x63D070
namespace gamemd {
int ColorLerpAndPack(short * a1, unsigned char * a2, ObjectClass * aP1)
{
{
    short v3;
    unsigned char v5[8];
    v3 = *a1;
    v5[2] = *((char *)(a1) + 2);
    *(short *)v5 = v3;
    Color::Lerp(v5, aP1, a2);
    return (v5[0] >> g_CellDirectionOffsets.__pad_14B0[660] << g_CellDirectionOffsets.__pad_14B0[656])
    | (v5[1] >> g_CellDirectionOffsets.__pad_14B0[676] << g_CellDirectionOffsets.__pad_14B0[672])
    | (v5[2] >> g_CellDirectionOffsets.__pad_14B0[668] << g_CellDirectionOffsets.__pad_14B0[664]);
}
}
} // namespace gamemd

// 0x63D210
namespace gamemd {
int * ActionScenarioClassCoordToScreen(BuildingClass * aP0, const void * a1, int a3)
{
{
    int v3;
    int v5;
    int *ScenarioClassActionCoords;
    int v7;
    int v8;
    Tactical *v9;
    int v10;
    int a1a[3];
    int v13[3];
    char v14[12];
    char v15[112];
    v3 = -1;
    v5 = -1;
    if ( a1 )
  {
    qmemcpy(v15, a1, 0x6Fu);
    ScenarioClassActionCoords = GetScenarioClassActionCoords(v13, v15);
    v7 = *ScenarioClassActionCoords;
    v8 = ScenarioClassActionCoords[1];
    v9 = (Tactical *)ScenarioClassActionCoords[2];
    if ( *ScenarioClassActionCoords == -1 && v8 == -1 && v9 == (Tactical *)-1 && a3 )
    {
    v10 = (*(int (__thiscall **)(int, char *))(*(int *)(a3) + 88))(a3, v14);
    v7 = *(int *)v10;
    v8 = *(int *)(v10 + 4);
    v9 = *(Tactical **)(v10 + 8);
    }
    a1a[1] = v8;
    a1a[0] = v7;
    a1a[2] = v9;
    Coord::To_Screen(*(int **)&DataGlobal_87C374.__pad_579C[22548], a1a, (IUnknown *)v13);
    v3 = *(int *)&DataGlobal_87C374.__pad_579C[21648] + v13[0];
    v5 = *(int *)&DataGlobal_87C374.__pad_579C[21652] + v13[1];
  }
    *(int *)aP0->__pad_0 = v3;
    *(int *)&aP0->__pad_0[4] = v5;
    return (int *)aP0->__pad_0;
}
}
} // namespace gamemd

// 0x63D2D0
namespace gamemd {
int E4Recv_63D2D0::sub_63D2D0()
{
{
    int result;
    int v2;
    int v3;
    int **i;
    int v5;
    v5 = **(void**)this->M4;
    result = (HIBYTE(DataGlobal_A83CDA) >> g_BitMask_Red << g_BitShift_Blue)
    | ((unsigned char)DataGlobal_A83CDA >> g_BitMask_Blue << g_BitMask_Green)
    | ((unsigned char)DataGlobal_A83CD9 >> g_BitShift_Green_0 << g_BitShift_Red);
    if ( v5 )
  {
    if ( g_ScriptActionPool )
    {
    v2 = *(int *)(g_ScriptActionPool + 16);
    v3 = 0;
    if ( v2 > 0 )
      {
    for ( i = *(int ***)(g_ScriptActionPool + 4); **i != v5; ++i )
        {
    if ( ++v3 >= v2 )
    return result;
        }
    if ( v3 != -1 )
    return (HIBYTE(DataGlobal_A80221) >> g_BitMask_Red << g_BitShift_Blue)
    | ((unsigned char)DataGlobal_A80221 >> g_BitMask_Blue << g_BitMask_Green)
    | ((unsigned char)DataGlobal_A80220 >> g_BitShift_Green_0 << g_BitShift_Red);
      }
    }
    else if ( *(char *)(v5 + 131) )
    {
    return (HIBYTE(DataGlobal_A80221) >> g_BitMask_Red << g_BitShift_Blue)
    | ((unsigned char)DataGlobal_A80221 >> g_BitMask_Blue << g_BitMask_Green)
    | ((unsigned char)DataGlobal_A80220 >> g_BitShift_Green_0 << g_BitShift_Red);
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x63D910
namespace gamemd {
char DrawTacticalFillScanline(AbstractClass * aP0, BuildingClass * aP1, int a3, BuildingClass * aP3, int a5, int a6)
{
{
    char *v7;
    int v8;
    int v9;
    v7 = &aP0->__pad_0[-((int)aP0 >> 31)];
    v8 = (int)aP0 / 2;
    v9 = (int)aP0 / 2 - (int)aP0 + 1;
    if ( v9 <= (int)aP0 / 2 )
  {
    do
    LOBYTE(v7) = DrawTacticalLine2D(v9++, (ObjectClass *)aP1, a3, (int)aP3, a5, a6, 0);
    while ( v9 <= v8 );
  }
    return (char)v7;
}
}
} // namespace gamemd

// 0x63D960
namespace gamemd {
char globalHelper_03D960(Tactical * aP0, int a2, int a3, int a4, int a5, int a6)
{
{
    int v6;
    int v7;
    int v8;
    int v9;
    v6 = (int)&aP0[-1].field_539C + 2;
    if ( v6 > 0 )
  {
    v9 = v6 - (v6 >> 31);
    v8 = v6 / 2;
    v7 = v6 / 2 - v6 + 1;
  }
    else
  {
    v7 = 0;
    v8 = 0;
  }
    for ( ; v7 <= v8; ++v7 )
    LOBYTE(v9) = DrawTacticalLine2D(v7, (ObjectClass *)a2, a3, a4, a5, a6, 1);
    return v9;
}
}
} // namespace gamemd

// 0x63F4A0
namespace gamemd {
int sub_63F4A0()
{
{
    DataGlobal_AC4D00 = 0;
    DataGlobal_AC4D04 = 0;
    DataGlobal_AC4D08 = 0;
    DataGlobal_AC4D0C = 0;
    return 0;
}
}
} // namespace gamemd

// 0x63F4C0
namespace gamemd {
void sub_63F4C0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_AC4D18 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x63F4F0
namespace gamemd {
void sub_63F4F0()
{
{
    DataGlobal_AC4E68 = DataGlobal_AC4D18 / 60.0;
}
}
} // namespace gamemd

// 0x63F510
namespace gamemd {
void sub_63F510()
{
{
    DataGlobal_AC4E50 = 1.0 / DataGlobal_AC4E68;
}
}
} // namespace gamemd

// 0x63F530
namespace gamemd {
void sub_63F530()
{
{
    DataGlobal_AC4E48 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x63F550
namespace gamemd {
void sub_63F550()
{
{
    DataGlobal_AC4D20 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x63F570
namespace gamemd {
void sub_63F570()
{
{
    DataGlobal_AC4CF8 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x63F590
namespace gamemd {
long long sub_63F590()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_AC4CF8 - DataGlobal_AC4D20);
    result = Math::RoundToInt(v0 * DataGlobal_AC4D18 * 0.5);
    DataGlobal_AC4E70 = result;
    return result;
}
}
} // namespace gamemd

// 0x63F5D0
namespace gamemd {
void sub_63F5D0()
{
{
    DataGlobal_AC4D28 = Math::ArcTan((double)DataGlobal_AC4E70 * 0.00390625);
}
}
} // namespace gamemd

// 0x63F600
namespace gamemd {
void sub_63F600()
{
{
    DataGlobal_AC4E40 = Math::ArcTan((double)(2 * DataGlobal_AC4E70) / DataGlobal_AC4D18);
}
}
} // namespace gamemd

// 0x63F630
namespace gamemd {
long long sub_63F630()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_AC4E70) + 0.5);
    DataGlobal_AC4E64 = result;
    return result;
}
}
} // namespace gamemd

// 0x63F660
namespace gamemd {
int sub_63F660()
{
{
    DataGlobal_AC4D10 = 0;
    DataGlobal_AC4D12 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x63F670
namespace gamemd {
int sub_63F670()
{
{
    DataGlobal_AC4E30 = 0;
    DataGlobal_AC4E34 = 0;
    DataGlobal_AC4E38 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x63F690
namespace gamemd {
int sub_63F690()
{
{
    DataGlobal_AC4E60 = 0;
    DataGlobal_AC4E58 = 128;
    DataGlobal_AC4E5C = 128;
    return 128;
}
}
} // namespace gamemd

// 0x63F810
namespace gamemd {
int E4Recv_63F810::sub_63F810()
{
{
    int *v1;
    int v3;
    this->M5404 = 10;
    v1 = this + 1348;
    this->M5392 = Timer::GetTicks();
    v1[1] = v3;
    v1[2] = 3;
    return v3;
}
}
} // namespace gamemd

// 0x63F8F0
namespace gamemd {
long long E4Recv_63F8F0::sub_63F8F0()
{
{
    int v2;
    int v4;
    v2 = PowerBar::CalcFill();
    v4 = this->M5420 + this->M5424 + this->M5428;
    if ( v4 > v2 )
    v4 = v2;
    return Math::RoundToInt((double)v4 / (double)v2 * 5.0);
}
}
} // namespace gamemd

// 0x63FDC0
namespace gamemd {
int E4Recv_63FDC0::sub_63FDC0()
{
{
    int v2;
    int result;
    int v4;
    int v5;
    int v6;
    int v7;
    PowerBar::ComputeFill(&v5, &v7, &v6);
    v2 = this->M5420;
    if ( v2 <= v5 )
  {
    v4 = this->M5428;
    if ( v4 <= v6 )
    {
    result = this->M5424;
    if ( result > v7 )
    this->M5424 = --result;
    }
    else
    {
    result = v4 - 1;
    this->M5428 = result;
    }
  }
    else
  {
    result = v2 - 1;
    this->M5420 = result;
  }
    return result;
}
}
} // namespace gamemd

// 0x63FE30
namespace gamemd {
int E4Recv_63FE30::sub_63FE30()
{
{
    int v2;
    int result;
    int v4;
    int v5;
    int v6;
    int v7;
    PowerBar::ComputeFill(&v6, &v7, &v5);
    v2 = this->M5428;
    if ( v2 >= v5 )
  {
    v4 = this->M5420;
    if ( v4 >= v6 )
    {
    result = this->M5424;
    if ( result < v7 )
    this->M5424 = ++result;
    }
    else
    {
    result = v4 + 1;
    this->M5420 = result;
    }
  }
    else
  {
    result = v2 + 1;
    this->M5428 = result;
  }
    return result;
}
}
} // namespace gamemd
