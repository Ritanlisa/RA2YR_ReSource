// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x4F4780
int Frame::Present(IUnknown * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Frame::Present(Frame *this, IUnknown *aP1)
{
  int v2; // edx
  int v3; // esi
  int *v4; // eax
  int result; // eax
  int v6; // edi
  LONG v7; // eax
  TechnoTypeClass *v8; // edx
  char *v9; // edi
  int v10; // edi
  int v11; // eax
  int v12; // edi
  int v13; // eax
  char *v14; // ecx
  int v15; // ebp
  LONG v16; // edi
  LONG v17; // ebx
  int v18; // eax
  double v19; // st7
  AbstractClass *v25; // edi
  int v21; // eax
  double v22; // st7
  LONG v23; // ebx
  LONG v24; // eax
  char al44; // al
  int v26; // ecx
  int v27; // edi
  int v28; // eax
  unsigned int v29; // edi
  int v30; // edi
  int v31; // eax
  char v32; // [esp+31h] [ebp-4Dh]
  _BYTE v33[12]; // [esp+32h] [ebp-4Ch] BYREF
  int v34; // [esp+3Eh] [ebp-40h]
  char *v35; // [esp+42h] [ebp-3Ch]
  char *v36; // [esp+46h] [ebp-38h]
  double v37; // [esp+4Ah] [ebp-34h] BYREF
  int v38; // [esp+52h] [ebp-2Ch]
  unsigned int v39; // [esp+56h] [ebp-28h]
  char *v40; // [esp+5Ah] [ebp-24h] BYREF
  char *v41; // [esp+5Eh] [ebp-20h] BYREF
  LONG v42; // [esp+62h] [ebp-1Ch]
  LONG v43; // [esp+66h] [ebp-18h]
  int v44; // [esp+6Ah] [ebp-14h]
  struct tagRECT Rect; // [esp+6Eh] [ebp-10h] BYREF
  int *v46; // [esp+8Eh] [ebp+10h]
  int v47; // [esp+8Eh] [ebp+10h]

  v3 = v2; /*0x4f478a*/
  if ( !aP1 ) /*0x4f4790*/
  {
    v4 = (int *)(*(int (__thiscall **)(int, char **))(*(_DWORD *)v2 + 120))(v2, &v41); /*0x4f479b*/
    v34 = *v4; /*0x4f47a0*/
    v35 = (char *)v4[1]; /*0x4f47a7*/
    v36 = (char *)v4[2]; /*0x4f47b6*/
    LODWORD(v37) = v4[3]; /*0x4f47bd*/
  }
  result = GetClientRect((HWND)g_hWnd, &Rect); /*0x4f47cc*/
  if ( result ) /*0x4f47d4*/
  {
    *(double *)&v33[4] = *(double *)&Rect.left; /*0x4f47e2*/
    result = ClientToScreen((HWND)g_hWnd, (LPPOINT)&v33[4]); /*0x4f47f6*/
    if ( result ) /*0x4f47fe*/
    {
      v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 128))(v3); /*0x4f4811*/
      v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 124))(v3); /*0x4f4817*/
      v8 = MEMORY[0x87F7F0]; /*0x4f4828*/
      v40 = v35; /*0x4f4830*/
      v41 = v36; /*0x4f4834*/
      v42 = v7; /*0x4f4838*/
      v43 = v6; /*0x4f483c*/
      if ( !MEMORY[0x87F7EC] ) /*0x4f4840*/
      {
        if ( !MEMORY[0x87F7F0] ) /*0x4f4844*/
          goto LABEL_18; /*0x4f4844*/
        goto LABEL_13; /*0x4f4844*/
      }
      if ( (int)MEMORY[0x87F7EC] <= 0 ) /*0x4f484a*/
      {
        if ( (int)MEMORY[0x87F7EC] >= 0 ) /*0x4f4856*/
        {
LABEL_13:
          if ( (int)MEMORY[0x87F7F0] > 0 ) /*0x4f4860*/
          {
            v9 = (char *)(v6 - (_DWORD)MEMORY[0x87F7F0]); /*0x4f4865*/
            v41 = &v36[(_DWORD)MEMORY[0x87F7F0]]; /*0x4f4867*/
LABEL_17:
            v43 = (LONG)v9; /*0x4f4871*/
            goto LABEL_18; /*0x4f4871*/
          }
          if ( (int)MEMORY[0x87F7F0] < 0 ) /*0x4f486d*/
          {
            v9 = &MEMORY[0x87F7F0]->vtable0[v6]; /*0x4f486f*/
            goto LABEL_17; /*0x4f486f*/
          }
LABEL_18:
          if ( !MEMORY[0xA8D63C].__pad_14B0[144] && !MEMORY[0xA8D63C].__pad_14B0[639] ) /*0x4f4887*/
          {
            v10 = *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8556] - v7; /*0x4f4895*/
            if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9396] + 124))(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9396]) >= v10 ) /*0x4f489e*/
              v11 = v10; /*0x4f48ad*/
            else
              v11 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9396] + 124))(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9396]); /*0x4f48a8*/
            if ( v11 <= 0 ) /*0x4f48b1*/
            {
              v13 = 0; /*0x4f48df*/
            }
            else
            {
              v12 = *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[8556] - v42; /*0x4f48c3*/
              if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9396] + 124))(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9396]) >= v12 ) /*0x4f48cc*/
                v13 = v12; /*0x4f48db*/
              else
                v13 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9396] + 124))(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9396]); /*0x4f48d6*/
            }
            v8 = MEMORY[0x87F7F0]; /*0x4f48e5*/
            v14 = &v40[v13]; /*0x4f48eb*/
            v7 = v42; /*0x4f48ed*/
            v40 = v14; /*0x4f48f1*/
          }
          v15 = *v46; /*0x4f48f9*/
          v16 = v46[1]; /*0x4f48fb*/
          v17 = v46[2]; /*0x4f48fe*/
          Rect.right = v46[3]; /*0x4f4904*/
          v44 = v15; /*0x4f4910*/
          Rect.left = v16; /*0x4f4914*/
          Rect.top = v17; /*0x4f4918*/
          if ( *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9432] /*0x4f4934*/
            && (*(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9432] + 192)
             || *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9432] + 196) != 1072693248) )
          {
            v47 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 124))(v3); /*0x4f4941*/
            v18 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 128))(v3); /*0x4f4949*/
            v19 = (double)v47; /*0x4f494f*/
            v25 = *(AbstractClass **)&MEMORY[0x87F8E4].__pad_5568[9432]; /*0x4f4953*/
            *(_DWORD *)v33 = v18; /*0x4f4959*/
            v37 = v19 / *(double *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9432] + 192); /*0x4f4965*/
            v21 = Math::RoundToInt((v19 - v37) * 0.5); /*0x4f4973*/
            v22 = (double)*(int *)v33; /*0x4f4978*/
            v15 = v21; /*0x4f497c*/
            *(double *)v33 = v22 / *(double *)&v25[5].__pad_0[12]; /*0x4f4986*/
            v16 = Math::RoundToInt((v22 - *(double *)v33) * 0.5); /*0x4f499d*/
            v23 = Math::RoundToInt(v37); /*0x4f49a8*/
            v24 = Math::RoundToInt(*(double *)v33); /*0x4f49aa*/
            v8 = MEMORY[0x87F7F0]; /*0x4f49af*/
            v44 = v15; /*0x4f49b5*/
            Rect.left = v16; /*0x4f49b9*/
            Rect.top = v23; /*0x4f49bd*/
            Rect.right = v24; /*0x4f49c1*/
          }
          else
          {
            if ( v17 >= v7 ) /*0x4f49c9*/
              Rect.top = v7; /*0x4f49cb*/
            if ( Rect.right >= v43 ) /*0x4f49d9*/
              Rect.right = v43; /*0x4f49db*/
          }
          if ( (int)v8 < 0 ) /*0x4f49e1*/
            Rect.left = v16 - (_DWORD)v8; /*0x4f49e5*/
          if ( (int)MEMORY[0x87F7EC] < 0 ) /*0x4f49f0*/
            v44 = v15 - (_DWORD)MEMORY[0x87F7EC]; /*0x4f49f4*/
          if ( !MEMORY[0xA8D63C].__pad_BC0[380] ) /*0x4f49ff*/
            goto LABEL_51; /*0x4f49ff*/
          if ( *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9500] ) /*0x4f4a09*/
          {
            if ( Frame::Init(*(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9500]) ) /*0x4f4a0b*/
            {
              v8 = MEMORY[0x87F7F0]; /*0x4f4a14*/
              al44 = 1; /*0x4f4a1a*/
LABEL_47:
              if ( !MEMORY[0x87F8E4].__pad_125C[16878] && !v8 && !al44 ) /*0x4f4a36*/
              {
                v43 -= *(_DWORD *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[11460] + 12); /*0x4f4a4a*/
                Rect.right -= *(_DWORD *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[11460] + 12); /*0x4f4a53*/
              }
LABEL_51:
              if ( MEMORY[0x87F7EC] ) /*0x4f4a5e*/
              {
                v26 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 128))(v3) /*0x4f4a7c*/
                    - *(_DWORD *)(*(_DWORD *)&MEMORY[0xB077F8].__pad_579C[11460] + 12);
                HIDWORD(v37) = v36; /*0x4f4a82*/
                v39 = v26; /*0x4f4a86*/
                v38 = abs32((int)MEMORY[0x87F7EC]); /*0x4f4a91*/
                if ( (int)MEMORY[0x87F7EC] >= 0 ) /*0x4f4a95*/
                  LODWORD(v37) = v40 - (char *)MEMORY[0x87F7EC]; /*0x4f4aad*/
                else
                  LODWORD(v37) = &v40[v42]; /*0x4f4aa1*/
                v27 = **(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9404]; /*0x4f4ac1*/
                v28 = (*(int (__thiscall **)(_DWORD, _BYTE *, double *, _DWORD))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9404] /*0x4f4ac5*/
                                                                               + 120))(
                        *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9404],
                        v33,
                        &v37,
                        0);
                (*(void (__thiscall **)(_DWORD, int))(v27 + 16))(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9404], v28); /*0x4f4acf*/
                v8 = MEMORY[0x87F7F0]; /*0x4f4ad2*/
              }
              if ( v8 ) /*0x4f4ada*/
              {
                v29 = abs32((int)v8); /*0x4f4ae7*/
                v38 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 124))(v3); /*0x4f4af0*/
                LODWORD(v37) = v35; /*0x4f4af9*/
                v39 = v29; /*0x4f4aff*/
                if ( (int)MEMORY[0x87F7F0] >= 0 ) /*0x4f4b03*/
                  HIDWORD(v37) = v41 - (char *)MEMORY[0x87F7F0]; /*0x4f4b1b*/
                else
                  HIDWORD(v37) = &v41[v43]; /*0x4f4b0f*/
                v30 = **(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9404]; /*0x4f4b2f*/
                v31 = (*(int (__thiscall **)(_DWORD, _BYTE *, double *, _DWORD))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9404] /*0x4f4b33*/
                                                                               + 120))(
                        *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9404],
                        v33,
                        &v37,
                        0);
                (*(void (__thiscall **)(_DWORD, int))(v30 + 16))(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9404], v31); /*0x4f4b3d*/
              }
              if ( v32 && *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10228] ) /*0x4f4b50*/
                (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[10228] + 60))( /*0x4f4b57*/
                  *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10228],
                  v3,
                  0);
              result = (*(int (__thiscall **)(_DWORD, char **, int))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9404] + 8))( /*0x4f4b7b*/
                         *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9404],
                         &v40,
                         v3);
              if ( v32 ) /*0x4f4b83*/
              {
                result = *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10228]; /*0x4f4b85*/
                if ( *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10228] ) /*0x4f4b8c*/
                {
                  Sleep(0x32u); /*0x4f4b90*/
                  return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[10228] /*0x4f4ba1*/
                                                                    + 64))(
                           *(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[10228],
                           v3,
                           0);
                }
              }
              return result; /*0x4f4ba1*/
            }
            v8 = MEMORY[0x87F7F0]; /*0x4f4a1e*/
          }
          al44 = 0; /*0x4f4a24*/
          goto LABEL_47; /*0x4f4a24*/
        }
        v7 += (LONG)MEMORY[0x87F7EC]; /*0x4f4858*/
      }
      else
      {
        v7 -= (int)MEMORY[0x87F7EC]; /*0x4f484e*/
        v40 = &v35[(_DWORD)MEMORY[0x87F7EC]]; /*0x4f4850*/
      }
      v42 = v7; /*0x4f485a*/
      goto LABEL_13; /*0x4f485a*/
    }
  }
  return result; /*0x4f4ba4*/
}
}

// 0x724C00
BOOL Frame::Init()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
BOOL __thiscall sub_724C00(_DWORD *this)
{
  return this->q004 != 0; /*0x724c0a*/
}
}
