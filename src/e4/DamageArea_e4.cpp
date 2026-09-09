// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x4CD600
int DamageArea::ApplyScatter()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// (v3 export truncated pseudocode — commented out; live version via get_context)
// int __thiscall DamageArea_ApplyScatter(int this)
// {
//   int v2; // edi
//   _DWORD *v3; // eax
//   int v4; // edi
//   int v5; // eax
//   int v6; // ecx
//   int v7; // ecx
//   int v8; // eax
//   int v9; // edx
//   int *v10; // ecx
//   int v11; // edi
//   _DWORD *v12; // eax
//   int v13; // edx
//   int v14; // eax
//   int v15; // ecx
//   int result; // eax
//   void **v17; // esi
//   int v18; // ebx
//   void *VersusMultiplier; // eax
//   int *v20; // ecx
//   _DWORD *v21; // ecx
//   int v22; // eax
//   int v23; // ecx
//   int v24; // eax
//   int v25; // ebx
//   int v26; // edi
//   unsigned int v27; // ebx
//   unsigned int v28; // ebp
//   double v29; // st7
//   double v30; // st7
//   int v31; // eax
//   int v32; // ecx
//   int v33; // edi
//   int v34; // eax
//   int v35; // eax
//   int *v36; // eax
//   int v37; // ecx
//   int v38; // edi
//   int v39; // eax
//   int v40; // eax
//   int v41; // eax
//   int v42; // ecx
//   _DWORD *v43; // ebp
//   int v44; // ebx
//   int v45; // ebp
//   double v46; // st7
//   int v47; // eax
//   bool v48; // bl
//   int v49; // ebp
//   int v50; // eax
//   int v5... [24554 chars total]
// end truncated pseudocode
}

// 0x4D0180
char DamageArea::CheckOccupancyEligibility()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_4D0180(int this)
{
  _DWORD *v2; // esi
  int (__stdcall ***v3)(_DWORD, void *, int *); // ecx
  int v4; // eax
  int v5; // esi
  int v6; // edi
  int v8; // [esp+18h] [ebp-8h] BYREF
  int v9; // [esp+1Ch] [ebp-4h] BYREF

  v2 = *(_DWORD **)(this + 12); /*0x4d0187*/
  if ( v2 ) /*0x4d018c*/
  {
    if ( (*(int (__thiscall **)(_DWORD))(*v2 + 44))(*(_DWORD *)(this + 12)) == 2 ) /*0x4d0198*/
    {
      if ( (*(int (__stdcall **)(_DWORD *))(v2[432] + 32))(v2 + 432) ) /*0x4d01ab*/
        return 0; /*0x4d01b0*/
    }
    else
    {
      v2 = 0; /*0x4d019a*/
    }
  }
  if ( *(_BYTE *)(this + 81) || !*(_BYTE *)(this + 92) ) /*0x4d01c1*/
    return 1; /*0x4d01c6*/
  if ( !v2 || !*(_BYTE *)(v2[433] + 3595) ) /*0x4d01d6*/
  {
    v3 = *(int (__stdcall ****)(_DWORD, void *, int *))(this + 12); /*0x4d01e4*/
    v4 = 0; /*0x4d01e7*/
    v8 = 0; /*0x4d01eb*/
    if ( v3 ) /*0x4d01ef*/
    {
      v5 = (**v3)(v3, &unk_822410, &v9); /*0x4d0204*/
      if ( v5 >= 0 ) /*0x4d0208*/
      {
        v6 = v9; /*0x4d021c*/
        Release3COM(&v8); /*0x4d0224*/
        v4 = v6; /*0x4d0229*/
        v8 = v6; /*0x4d022c*/
      }
      else
      {
        Release3COM(&v8); /*0x4d020e*/
        v4 = 0; /*0x4d0213*/
        v8 = 0; /*0x4d0215*/
      }
      if ( v5 < 0 && v5 != -2147467262 ) /*0x4d023a*/
        WinAPI::Wrapper(v5); /*0x4d023d*/
      if ( v4 ) /*0x4d0248*/
      {
        if ( !(*(int (__stdcall **)(int))(*(_DWORD *)v4 + 24))(v4) ) /*0x4d024d*/
        {
          if ( !v8 ) /*0x4d025a*/
            WinAPI::Wrapper(-2147467261); /*0x4d0261*/
          if ( !(*(int (__stdcall **)(int))(*(_DWORD *)v8 + 28))(v8) ) /*0x4d026d*/
          {
            v4 = v8; /*0x4d0274*/
            goto LABEL_24; /*0x4d0278*/
          }
        }
        v4 = v8; /*0x4d027a*/
      }
    }
    if ( !*(_DWORD *)(*(_DWORD *)(this + 12) + 764) ) /*0x4d0281*/
    {
LABEL_24:
      if ( v4 ) /*0x4d028d*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v4 + 8))(v4); /*0x4d0292*/
      return 1; /*0x4d029c*/
    }
    if ( v4 ) /*0x4d029f*/
      (*(void (__stdcall **)(int))(*(_DWORD *)v4 + 8))(v4); /*0x4d02a4*/
  }
  return 0; /*0x4d0295*/
}
}

// 0x565660
unsigned int * DamageArea::CalcScatterOffset(unsigned int * a2, short * a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_565660(_DWORD *this, _DWORD *a2, __int16 *a3)
{
  int v3; // ebx
  int v4; // ebp
  int v5; // esi
  __int16 v6; // di
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  int v11; // [esp+20h] [ebp+8h]

  v3 = *(this + 61); /*0x565668*/
  v4 = *(this + 63); /*0x56566f*/
  v5 = a3[1]; /*0x565676*/
  v6 = *a3; /*0x56567b*/
  v7 = *(this + 64); /*0x56567e*/
  v8 = *a3; /*0x565684*/
  if ( (v3 & 1) != 0 ) /*0x56568d*/
    v9 = v8 - v5 + 1; /*0x565691*/
  else
    v9 = v8 - v5; /*0x565694*/
  LOWORD(v11) = v3 / 2 + (v9 >> 1) - v4; /*0x5656b1*/
  HIWORD(v11) = v6 + v5 - v3 - v7; /*0x5656b6*/
  *a2 = v11; /*0x5656c2*/
  return a2; /*0x5656bf*/
}
}
