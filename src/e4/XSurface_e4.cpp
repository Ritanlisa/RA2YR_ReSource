// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x410600
int XSurface::vt_entry_40(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall INoticeSource_Stub1(int a1)
{
  return AbstractClass::COMStub_Release(a1 - 4);
}
}

// 0x411560
int XSurface::Lock(int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall XSurface_Lock(_DWORD *this, int a2, int a3)
{
  ++*(this + 3); /*0x411564*/
  return 0; /*0x411569*/
}
}

// 0x411570
char XSurface::Unlock()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall XSurface_Unlock(_DWORD *this)
{
  --*(this + 3); /*0x411574*/
  return 1; /*0x411579*/
}
}

// 0x4115A0
XSurface * XSurface::ScalarDtor(char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
XSurface *__thiscall XSurface::ScalarDtor(std::locale::facet *this, char a2)
{
  *(_DWORD *)this = &Surface_Vtable; /*0x4115a9*/
  if ( (a2 & 1) != 0 ) /*0x4115af*/
    __3_YAXPAX_Z(this); /*0x4115b2*/
  return (XSurface *)this; /*0x4115bc*/
}
}

// 0x7BA8C0
int XSurface::DrawDashedLine(int * a1, int * a2, XSurface * aP3, int a5, int a6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall XSurface::DrawDashedLine(void *this, int *a1, int *a2, XSurface *aP3, int a5, int a6)
{
  int v7; // ebx
  int v8; // edi
  int v9; // ebp
  bool v10; // cc
  signed int v11; // esi
  signed int v12; // eax
  int v13; // esi
  _WORD *v14; // eax
  int v15; // edi
  int v16; // ecx
  int v17; // esi
  int v18; // ecx
  int v19; // eax
  int v20; // eax
  int v21; // esi
  int v22; // ebp
  int v23; // edi
  int v24; // eax
  int v25; // ebx
  int v26; // eax
  int v27; // ebp
  int v28; // eax
  int v29; // ecx
  int i; // eax
  int v31; // esi
  int v32; // edx
  int v33; // ecx
  int v34; // edi
  int v35; // esi
  int v38; // [esp+14h] [ebp-Ch]
  int v39; // [esp+18h] [ebp-8h]
  int v40; // [esp+1Ch] [ebp-4h]
  int a1a; // [esp+24h] [ebp+4h]
  int *a2a; // [esp+28h] [ebp+8h]
  _BYTE *v43; // [esp+34h] [ebp+14h]

  v7 = *a1; /*0x7ba8cd*/
  v40 = a1[1]; /*0x7ba8cf*/
  v8 = *a2; /*0x7ba8dc*/
  v9 = a2[1]; /*0x7ba8de*/
  v10 = *a1 <= *a2; /*0x7ba8e1*/
  a1a = 1; /*0x7ba8e3*/
  if ( v10 ) /*0x7ba8eb*/
  {
    v13 = a6; /*0x7ba936*/
  }
  else
  {
    v7 = *a2; /*0x7ba8ed*/
    v8 = *a1; /*0x7ba8ef*/
    v9 = a1[1]; /*0x7ba8f3*/
    v40 = a2[1]; /*0x7ba8f8*/
    v11 = abs32(*a2 - *a1); /*0x7ba907*/
    v12 = abs32(v40 - v9) + 1; /*0x7ba90e*/
    if ( v11 < v12 ) /*0x7ba911*/
      v11 = v12; /*0x7ba913*/
    v13 = (a6 + v11) % 16; /*0x7ba927*/
    a1a = -1; /*0x7ba92c*/
  }
  a2a = (int *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 112))(this); /*0x7ba947*/
  v14 = (_WORD *)(*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 92))(this, v7, v40); /*0x7ba94f*/
  v43 = v14; /*0x7ba954*/
  if ( v14 )
  {
    if ( v40 == v9 )
    {
      v15 = v8 - v7; /*0x7ba966*/
      if ( v15 >= 0 )
      {
        v16 = v15 + 1; /*0x7ba972*/
        do
        {
          v17 = v13 + (v13 < 0 ? 0x10 : 0);
          if ( v17 >= 16 ) /*0x7ba983*/
            v17 -= 16; /*0x7ba985*/
          if ( *(_BYTE *)(a5 + v17) ) /*0x7ba988*/
            *v14 = (_WORD)aP3; /*0x7ba98e*/
          ++v14; /*0x7ba995*/
          v13 = a1a + v17; /*0x7ba998*/
          --v16; /*0x7ba99a*/
        }
        while ( v16 );
      }
    }
    else if ( v7 == v8 )
    {
      if ( v40 <= v9 ) /*0x7ba9ac*/
        v18 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 116))(this); /*0x7ba9be*/
      else
        v18 = -(*(int (__thiscall **)(void *))(*(_DWORD *)this + 116))(this); /*0x7ba9b5*/
      v19 = abs32(v9 - v40); /*0x7ba9cb*/
      if ( v19 >= 0 )
      {
        v20 = v19 + 1; /*0x7ba9db*/
        do
        {
          v21 = v13 + (v13 < 0 ? 0x10 : 0);
          if ( v21 >= 16 ) /*0x7ba9e6*/
            v21 -= 16; /*0x7ba9e8*/
          if ( *(_BYTE *)(a5 + v21) ) /*0x7ba9eb*/
          {
            if ( a2a == (int *)1 ) /*0x7ba9fc*/
              *v43 = (_BYTE)aP3; /*0x7ba9fe*/
            else
              *(_WORD *)v43 = (_WORD)aP3; /*0x7baa02*/
          }
          v13 = a1a + v21; /*0x7baa0f*/
          --v20; /*0x7baa11*/
          v43 += v18; /*0x7baa12*/
        }
        while ( v20 );
      }
    }
    else
    {
      v22 = v9 - v40; /*0x7baa1d*/
      v23 = v8 - v7; /*0x7baa23*/
      v24 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 116))(this); /*0x7baa27*/
      v25 = v24; /*0x7baa2a*/
      v39 = v24; /*0x7baa2e*/
      if ( v22 < 0 ) /*0x7baa32*/
      {
        v25 = -v24; /*0x7baa34*/
        v39 = -v24; /*0x7baa36*/
      }
      v26 = v22; /*0x7baa3a*/
      v27 = 2 * v23; /*0x7baa3c*/
      v28 = abs32(v26); /*0x7baa42*/
      v38 = 2 * v28; /*0x7baa49*/
      if ( v23 <= v28 )
      {
        v32 = 0; /*0x7baabd*/
        v33 = v27 - v28; /*0x7baabf*/
        if ( v28 > 0 )
        {
          v34 = v28; /*0x7baac5*/
          do
          {
            v35 = v13 + (v13 < 0 ? 0x10 : 0);
            if ( v35 >= 16 ) /*0x7baad5*/
              v35 -= 16; /*0x7baad7*/
            if ( *(_BYTE *)(a5 + v35) ) /*0x7baade*/
            {
              if ( a2a == (int *)1 ) /*0x7baaef*/
                v43[v32] = (_BYTE)aP3; /*0x7baaf1*/
              else
                *(_WORD *)&v43[2 * v32] = (_WORD)aP3; /*0x7baaf6*/
            }
            if ( v33 > 0 ) /*0x7baafc*/
            {
              ++v32; /*0x7bab02*/
              v33 -= v38; /*0x7bab03*/
            }
            v33 += v27; /*0x7bab09*/
            v43 += v39; /*0x7bab0b*/
            v13 = a1a + v35; /*0x7bab13*/
            --v34; /*0x7bab15*/
          }
          while ( v34 );
        }
      }
      else
      {
        v29 = 2 * v28 - v23; /*0x7baa4f*/
        for ( i = 0; i < v23; v13 = a1a + v31 )
        {
          v31 = v13 + (v13 < 0 ? 0x10 : 0);
          if ( v31 >= 16 ) /*0x7baa65*/
            v31 -= 16; /*0x7baa67*/
          if ( *(_BYTE *)(a5 + v31) ) /*0x7baa6e*/
          {
            if ( a2a == (int *)1 ) /*0x7baa79*/
              v43[i] = (_BYTE)aP3; /*0x7baa83*/
            else
              *(_WORD *)&v43[2 * i] = (_WORD)aP3; /*0x7baa91*/
          }
          if ( v29 > 0 ) /*0x7baa97*/
          {
            v43 += v25; /*0x7baa9f*/
            v29 -= 2 * v23; /*0x7baaa6*/
          }
          v29 += v38; /*0x7baaac*/
          ++i; /*0x7baab2*/
        }
      }
    }
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 96))(this); /*0x7bab1e*/
  }
  return v13; /*0x7bab23*/
}
}

// 0x7BAB90
char XSurface::WalkLine(int a2, unsigned int * a3, unsigned int * a4, void (__thiscall *a5)(int *) a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall XSurface_WalkLine(_DWORD *this, int a2, _DWORD *a3, _DWORD *a4, void (__thiscall *a5)(int *))
{
  int v5; // eax
  int v6; // eax
  int *v7; // eax
  int v8; // ecx
  int v9; // eax
  char result; // al
  int v11; // ecx
  int v12; // edi
  int v13; // esi
  int v14; // ebp
  int v15; // edi
  int v16; // ebp
  int v17; // ebx
  int v18; // edi
  int v19; // ebx
  int v20; // esi
  int v21; // eax
  int v22; // esi
  int i; // ebx
  int v24; // esi
  int v25; // edi
  int v26; // [esp+4h] [ebp-44h] BYREF
  int v27; // [esp+8h] [ebp-40h]
  _DWORD *v28; // [esp+14h] [ebp-34h]
  int v29; // [esp+18h] [ebp-30h]
  int v30; // [esp+1Ch] [ebp-2Ch]
  int v31; // [esp+20h] [ebp-28h]
  int v32; // [esp+24h] [ebp-24h]
  int v33; // [esp+28h] [ebp-20h] BYREF
  int v34; // [esp+2Ch] [ebp-1Ch]
  int v35; // [esp+38h] [ebp-10h] BYREF
  int v36; // [esp+3Ch] [ebp-Ch]
  int v37; // [esp+40h] [ebp-8h]
  int v38; // [esp+44h] [ebp-4h]
  int v39; // [esp+4Ch] [ebp+4h]
  int v40; // [esp+50h] [ebp+8h]
  int v41; // [esp+54h] [ebp+Ch]

  v5 = *this; /*0x7bab93*/
  v28 = this; /*0x7bab9b*/
  v6 = (*(int (__stdcall **)(int *))(v5 + 120))(&v33); /*0x7bab9f*/
  v7 = (int *)ClipRectIntersection(v6, 0, 0); /*0x7babaf*/
  v35 = *v7; /*0x7babb6*/
  v36 = v7[1]; /*0x7babbd*/
  v37 = v7[2]; /*0x7babc4*/
  v38 = v7[3]; /*0x7babcf*/
  v8 = v36 + a3[1]; /*0x7babda*/
  v29 = v35 + *a3; /*0x7babdc*/
  v30 = v8; /*0x7babe0*/
  v9 = v35 + *a4; /*0x7babef*/
  v32 = v36 + a4[1]; /*0x7babf1*/
  v31 = v9; /*0x7bac02*/
  result = ClipLine(&v35); /*0x7bac06*/
  if ( result ) /*0x7bac0d*/
  {
    v11 = v29; /*0x7bac16*/
    v12 = v31; /*0x7bac1d*/
    if ( v29 <= v31 ) /*0x7bac23*/
    {
      v14 = v30; /*0x7bac45*/
      v13 = v32; /*0x7bac49*/
    }
    else
    {
      v13 = v30; /*0x7bac25*/
      v14 = v32; /*0x7bac29*/
      v11 = v31; /*0x7bac2f*/
      v12 = v29; /*0x7bac31*/
      v29 = v31; /*0x7bac33*/
      v30 = v32; /*0x7bac37*/
      v31 = v12; /*0x7bac3b*/
      v32 = v13; /*0x7bac3f*/
    }
    if ( v14 == v13 ) /*0x7bac4f*/
    {
      v15 = v12 - v11; /*0x7bac51*/
      v16 = 0; /*0x7bac53*/
      if ( v15 >= 0 ) /*0x7bac58*/
      {
        while ( 1 ) /*0x7bac73*/
        {
          v26 = v11 + v16; /*0x7bac73*/
          v27 = v13; /*0x7bac77*/
          a5(&v26); /*0x7bac7b*/
          if ( ++v16 > v15 ) /*0x7bac80*/
            break; /*0x7bac80*/
          v11 = v29; /*0x7bac64*/
          v13 = v32; /*0x7bac68*/
        }
      }
    }
    else if ( v11 == v12 ) /*0x7bac89*/
    {
      v17 = abs32(v14 - v13); /*0x7bac94*/
      if ( v14 <= v13 ) /*0x7bac98*/
        v13 = v14; /*0x7bac9a*/
      v18 = 0; /*0x7bac9c*/
      if ( v17 >= 0 ) /*0x7baca0*/
      {
        while ( 1 ) /*0x7bacb0*/
        {
          v26 = v11; /*0x7bacb0*/
          v27 = v18 + v13; /*0x7bacbb*/
          a5(&v26); /*0x7bacbf*/
          if ( ++v18 > v17 ) /*0x7bacc4*/
            break; /*0x7bacc4*/
          v11 = v29; /*0x7bacac*/
        }
      }
    }
    else
    {
      v39 = v11; /*0x7baccd*/
      v19 = v12 - v11; /*0x7bacd1*/
      v20 = v13 - v14; /*0x7bacd3*/
      v41 = 1; /*0x7bacd7*/
      if ( v20 < 0 ) /*0x7bacdf*/
        v41 = -1; /*0x7bace1*/
      v21 = abs32(v20); /*0x7bacec*/
      v40 = 2 * v19; /*0x7bacf3*/
      v26 = 2 * v21; /*0x7bacfa*/
      if ( v19 <= v21 ) /*0x7bacfe*/
      {
        v24 = v40 - v21; /*0x7bad39*/
        if ( v21 >= 0 ) /*0x7bad3d*/
        {
          v25 = v21 + 1; /*0x7bad43*/
          do /*0x7bad78*/
          {
            v33 = v39; /*0x7bad4e*/
            v34 = v14; /*0x7bad52*/
            a5(&v33); /*0x7bad56*/
            if ( v24 > 0 ) /*0x7bad5a*/
            {
              v24 -= v26; /*0x7bad65*/
              ++v39; /*0x7bad67*/
            }
            v24 += v40; /*0x7bad73*/
            v14 += v41; /*0x7bad75*/
            --v25; /*0x7bad77*/
          }
          while ( v25 ); /*0x7bad78*/
        }
      }
      else
      {
        v22 = 2 * v21 - v19; /*0x7bad00*/
        for ( i = v11; i <= v12; ++i ) /*0x7bad06*/
        {
          v33 = i; /*0x7bad0c*/
          v34 = v14; /*0x7bad10*/
          a5(&v33); /*0x7bad14*/
          if ( v22 > 0 ) /*0x7bad1a*/
          {
            v22 -= v40; /*0x7bad24*/
            v14 += v41; /*0x7bad26*/
          }
          v22 += v26; /*0x7bad2c*/
        }
      }
    }
    (*(void (__thiscall **)(_DWORD *))(*v28 + 96))(v28); /*0x7bad80*/
    return 1; /*0x7bad86*/
  }
  return result; /*0x7bac0f*/
}
}

// 0x7BADC0
char XSurface::DrawRectEx(int a2, unsigned int * a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall XSurface_DrawRectEx(void *this, int a2, _DWORD *a3, int a4)
{
  int v5; // edx
  int v6; // eax
  int v7; // edi
  _DWORD v9[2]; // [esp+20h] [ebp-20h] BYREF
  _DWORD v10[2]; // [esp+28h] [ebp-18h] BYREF
  _DWORD v11[2]; // [esp+30h] [ebp-10h] BYREF
  int v12; // [esp+38h] [ebp-8h] BYREF
  int v13; // [esp+3Ch] [ebp-4h]

  v5 = a3[1]; /*0x7badcd*/
  v6 = a3[3]; /*0x7badd4*/
  v7 = a3[2] + *a3 - 1; /*0x7baddb*/
  v9[0] = *a3; /*0x7baddf*/
  v10[0] = v7; /*0x7bade7*/
  v11[0] = v7; /*0x7badeb*/
  v13 = v6 + v5 - 1; /*0x7badf3*/
  v11[1] = v13; /*0x7badf7*/
  v12 = v9[0]; /*0x7badfb*/
  v9[1] = v5; /*0x7bae08*/
  v10[1] = v5; /*0x7bae0c*/
  (*(void (__thiscall **)(void *, int, _DWORD *, _DWORD *, int))(*(_DWORD *)this + 44))(this, a2, v9, v10, a4); /*0x7bae17*/
  (*(void (__thiscall **)(void *, int, _DWORD *, int *, int))(*(_DWORD *)this + 44))(this, a2, v9, &v12, a4); /*0x7bae2a*/
  (*(void (__thiscall **)(void *, int, _DWORD *, _DWORD *, int))(*(_DWORD *)this + 44))(this, a2, v10, v11, a4); /*0x7bae3d*/
  (*(void (__thiscall **)(void *, int, int *, _DWORD *, int))(*(_DWORD *)this + 44))(this, a2, &v12, v11, a4); /*0x7bae50*/
  return 1; /*0x7bae53*/
}
}

// 0x7BB050
char XSurface::FillRectEx(XSurface * aP1, int * a2, XSurface * aP3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall XSurface::FillRectEx(void *this, XSurface *aP1, int *a2, XSurface *aP3)
{
  XSurface *v4; // edi
  int v5; // eax
  int *v6; // eax
  int *v7; // eax
  int v8; // ecx
  int v9; // edx
  int Width; // ebx
  unsigned int v11; // ecx
  AbstractClass *v12; // edx
  AbstractClass *v13; // eax
  int *v14; // eax
  int v15; // ebx
  XSurface *v16; // eax
  _DWORD *v17; // eax
  int v18; // esi
  int v19; // edx
  char v20; // dl
  int v21; // eax
  unsigned int v22; // ecx
  _WORD *v24; // edi
  int i; // ecx
  XSurface *v26; // eax
  int v27; // ebx
  char v28; // dl
  __int16 v29; // bx
  int v30; // edx
  signed int v31; // ecx
  XSurface *v32; // edi
  XSurface *v33; // eax
  char v34; // dl
  __int16 v35; // bx
  int v36; // edx
  signed int v37; // ecx
  char *v38; // edi
  _WORD *v39; // eax
  bool v40; // zf
  XSurface *v41; // [esp-4h] [ebp-7Ch]
  XSurface *v42; // [esp-4h] [ebp-7Ch]
  int v43[4]; // [esp+Ch] [ebp-6Ch] BYREF
  _DWORD v44[4]; // [esp+1Ch] [ebp-5Ch] BYREF
  int v45[4]; // [esp+2Ch] [ebp-4Ch] BYREF
  int v46[4]; // [esp+3Ch] [ebp-3Ch] BYREF
  int v47[2]; // [esp+4Ch] [ebp-2Ch] BYREF
  unsigned int v48; // [esp+54h] [ebp-24h]
  XSurface *v49; // [esp+58h] [ebp-20h]
  int v50; // [esp+5Ch] [ebp-1Ch] BYREF
  int v51; // [esp+64h] [ebp-14h] BYREF
  unsigned int v52; // [esp+68h] [ebp-10h]
  char *v53; // [esp+6Ch] [ebp-Ch]
  signed int v54; // [esp+70h] [ebp-8h]
  XSurface *v55; // [esp+74h] [ebp-4h]
  XSurface *aP1a; // [esp+80h] [ebp+8h]
  XSurface *aP1b; // [esp+80h] [ebp+8h]
  int *a2a; // [esp+84h] [ebp+Ch]
  XSurface *aP3a; // [esp+88h] [ebp+10h]
  XSurface *aP3b; // [esp+88h] [ebp+10h]

  v4 = (XSurface *)this; /*0x7bb05c*/
  v5 = a2[2]; /*0x7bb05e*/
  v55 = (XSurface *)this; /*0x7bb061*/
  if ( v5 <= 0 ) /*0x7bb066*/
    return 0; /*0x7bb066*/
  if ( a2[3] <= 0 ) /*0x7bb071*/
    return 0; /*0x7bb071*/
  v6 = (int *)(*(int (__thiscall **)(void *, int *))(*(_DWORD *)this + 120))(this, v45); /*0x7bb07f*/
  v7 = ClipRectIntersection(&v50, (int *)aP1->__pad_0, v6, 0, 0); /*0x7bb08f*/
  v46[0] = *v7; /*0x7bb096*/
  v46[1] = v7[1]; /*0x7bb09c*/
  v8 = *a2; /*0x7bb09f*/
  v46[2] = v7[2]; /*0x7bb0a4*/
  v9 = a2[1]; /*0x7bb0a7*/
  v46[3] = v7[3]; /*0x7bb0ad*/
  Width = aP1->Width; /*0x7bb0b2*/
  v51 = v8 + *(_DWORD *)aP1->__pad_0; /*0x7bb0b7*/
  v11 = v9 + Width; /*0x7bb0bd*/
  v12 = (AbstractClass *)a2[2]; /*0x7bb0c0*/
  v52 = v11; /*0x7bb0c3*/
  v13 = Rect::Construct(v44, (IUnknown *)&v51, v12, (AbstractClass *)a2[3]); /*0x7bb0cf*/
  v45[0] = *(_DWORD *)v13->__pad_0; /*0x7bb0d8*/
  v45[1] = *(_DWORD *)&v13->__pad_0[4]; /*0x7bb0e0*/
  v45[2] = *(_DWORD *)&v13->__pad_0[8]; /*0x7bb0e6*/
  v45[3] = *(_DWORD *)&v13->__pad_0[12]; /*0x7bb0f2*/
  v14 = ClipRectIntersection(v43, v46, v45, 0, 0); /*0x7bb0f9*/
  v47[0] = *v14; /*0x7bb100*/
  v47[1] = v14[1]; /*0x7bb106*/
  v15 = v14[2]; /*0x7bb109*/
  v48 = v15; /*0x7bb10c*/
  v16 = (XSurface *)v14[3]; /*0x7bb10f*/
  v49 = v16; /*0x7bb114*/
  if ( v15 <= 0 ) /*0x7bb117*/
    return 0; /*0x7bb117*/
  if ( (int)v16 <= 0 ) /*0x7bb11f*/
    return 0; /*0x7bb11f*/
  aP1a = v16; /*0x7bb125*/
  a2a = (int *)(*(int (__thiscall **)(XSurface *))(*(_DWORD *)v4->__pad_0 + 116))(v4); /*0x7bb132*/
  v17 = CellStruct::Copy(v47, (IUnknown *)&v51); /*0x7bb139*/
  v18 = (*(int (__thiscall **)(XSurface *, _DWORD, _DWORD))(*(_DWORD *)v4->__pad_0 + 92))(v4, *v17, v17[1]); /*0x7bb154*/
  v53 = (char *)v18; /*0x7bb158*/
  if ( !v18 ) /*0x7bb15b*/
    return 0; /*0x7bb333*/
  if ( (*(int (__thiscall **)(XSurface *))(*(_DWORD *)v4->__pad_0 + 112))(v4) == 1 ) /*0x7bb16b*/
  {
    aP1b = 0; /*0x7bb170*/
    if ( (int)v49 > 0 ) /*0x7bb179*/
    {
      do /*0x7bb1b2*/
      {
        LOBYTE(v15) = (_BYTE)aP3; /*0x7bb185*/
        v20 = v48; /*0x7bb187*/
        BYTE1(v15) = (_BYTE)aP3; /*0x7bb189*/
        v21 = v15 << 16; /*0x7bb18f*/
        LOWORD(v21) = v15; /*0x7bb192*/
        v22 = v48 >> 2; /*0x7bb195*/
        memset32((void *)v18, v21, v48 >> 2); /*0x7bb198*/
        memset((void *)(v18 + 4 * v22), (char)aP3, v20 & 3); /*0x7bb19f*/
        v18 += (int)a2a; /*0x7bb1aa*/
        aP1b = (XSurface *)((char *)aP1b + 1); /*0x7bb1af*/
      }
      while ( (int)aP1b < (int)v49 ); /*0x7bb1b2*/
LABEL_9:
      (*(void (__thiscall **)(XSurface *))(*(_DWORD *)v55->__pad_0 + 96))(v55); /*0x7bb1b4*/
      return 1; /*0x7bb1c6*/
    }
  }
  else if ( (v18 & 3) != 0 ) /*0x7bb1d1*/
  {
    if ( (v18 & 3) == 2 ) /*0x7bb1da*/
    {
      if ( v15 > 1 ) /*0x7bb22f*/
      {
        v27 = v15 - 1; /*0x7bb262*/
        v28 = v27; /*0x7bb263*/
        v54 = v27 >> 1; /*0x7bb267*/
        v29 = (__int16)aP3; /*0x7bb26a*/
        v30 = v28 & 1; /*0x7bb26f*/
        v53 = (char *)((unsigned int)aP3 | ((_DWORD)aP3 << 16)); /*0x7bb277*/
        aP3a = aP1a; /*0x7bb285*/
        do /*0x7bb2b8*/
        {
          *(_WORD *)v18 = v29; /*0x7bb28b*/
          v41 = v4; /*0x7bb291*/
          v31 = v54; /*0x7bb292*/
          v32 = (XSurface *)(v18 + 2); /*0x7bb295*/
          if ( v54 > 0 ) /*0x7bb29b*/
          {
            memset32(v32, (int)v53, v54); /*0x7bb2a0*/
            v32 = (XSurface *)((char *)v32 + 4 * v31); /*0x7bb2a0*/
          }
          v33 = v32; /*0x7bb2a2*/
          v4 = v41; /*0x7bb2a4*/
          if ( v30 ) /*0x7bb2a7*/
            *(_WORD *)v33->__pad_0 = v29; /*0x7bb2a9*/
          v18 += (int)a2a; /*0x7bb2b2*/
          aP3a = (XSurface *)((char *)aP3a - 1); /*0x7bb2b5*/
        }
        while ( aP3a ); /*0x7bb2b8*/
        goto LABEL_9; /*0x7bb2b8*/
      }
      v26 = aP1a; /*0x7bb237*/
      do /*0x7bb24e*/
      {
        *(_WORD *)v18 = (_WORD)aP3; /*0x7bb248*/
        v18 += (int)a2a; /*0x7bb24b*/
        v26 = (XSurface *)((char *)v26 - 1); /*0x7bb24d*/
      }
      while ( v26 ); /*0x7bb24e*/
    }
    else
    {
      do /*0x7bb218*/
      {
        LOWORD(v19) = (_WORD)aP3; /*0x7bb1f3*/
        v19 <<= 16; /*0x7bb1f8*/
        LOWORD(v19) = (_WORD)aP3; /*0x7bb1fb*/
        memset32((void *)v18, v19, (unsigned int)v15 >> 1); /*0x7bb202*/
        v24 = (_WORD *)(v18 + 4 * ((unsigned int)v15 >> 1)); /*0x7bb202*/
        for ( i = v15 & 1; i; --i ) /*0x7bb204*/
          *v24++ = (_WORD)aP3; /*0x7bb206*/
        v4 = v55; /*0x7bb209*/
        v18 += (int)a2a; /*0x7bb212*/
        aP1a = (XSurface *)((char *)aP1a - 1); /*0x7bb215*/
      }
      while ( aP1a ); /*0x7bb218*/
    }
  }
  else
  {
    v34 = v15; /*0x7bb2cf*/
    v54 = v15 >> 1; /*0x7bb2d3*/
    v35 = (__int16)aP3; /*0x7bb2d6*/
    v36 = v34 & 1; /*0x7bb2db*/
    v52 = (unsigned int)aP3 | ((_DWORD)aP3 << 16); /*0x7bb2e3*/
    aP3b = aP1a; /*0x7bb2ed*/
    do /*0x7bb31a*/
    {
      v42 = v4; /*0x7bb2f0*/
      v37 = v54; /*0x7bb2f1*/
      v38 = v53; /*0x7bb2f4*/
      if ( v54 > 0 ) /*0x7bb2fa*/
      {
        memset32(v53, v52, v54); /*0x7bb2ff*/
        v38 += 4 * v37; /*0x7bb2ff*/
      }
      v39 = v38; /*0x7bb301*/
      v4 = v42; /*0x7bb303*/
      if ( v36 ) /*0x7bb306*/
        *v39 = v35; /*0x7bb308*/
      v18 += (int)a2a; /*0x7bb311*/
      v40 = aP3b == (XSurface *)1; /*0x7bb313*/
      v53 = (char *)v18; /*0x7bb314*/
      aP3b = (XSurface *)((char *)aP3b - 1); /*0x7bb317*/
    }
    while ( !v40 ); /*0x7bb31a*/
    v4 = v55; /*0x7bb31c*/
  }
  (*(void (__thiscall **)(XSurface *))(*(_DWORD *)v4->__pad_0 + 96))(v4); /*0x7bb21e*/
  return 1; /*0x7bb1c0*/
}
}

// 0x7BB350
namespace gamemd {
int XSurface_DrawEllipseOutline()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall XSurface_DrawEllipseOutline(
        int *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v17; // ecx
  int v18; // ebp
  int v19; // edi
  int v20; // eax
  int v21; // ecx
  int v22; // ecx
  int v23; // edx
  int v24; // ecx
  int v25; // eax
  int v26; // eax
  int v27; // ecx
  int v28; // ebp
  int v29; // eax
  int v30; // eax
  int v31; // ecx
  int v32; // ebp
  int v33; // esi
  int v34; // edx
  int v35; // edi
  int v36; // ecx
  int v37; // edi
  int v38; // ecx
  int v39; // ecx
  int v40; // ecx
  _WORD *v42; // [esp+28h] [ebp-38h]
  _WORD *v43; // [esp+28h] [ebp-38h]
  _WORD *v44; // [esp+2Ch] [ebp-34h]
  _WORD *v45; // [esp+2Ch] [ebp-34h]
  int v46; // [esp+30h] [ebp-30h]
  int v47; // [esp+30h] [ebp-30h]
  int v48; // [esp+34h] [ebp-2Ch]
  int v49; // [esp+34h] [ebp-2Ch]
  int v50; // [esp+38h] [ebp-28h]
  int v51; // [esp+3Ch] [ebp-24h]
  int v52; // [esp+3Ch] [ebp-24h]
  int v53; // [esp+40h] [ebp-20h]
  int v54; // [esp+44h] [ebp-1Ch]
  int v56; // [esp+4Ch] [ebp-14h]
  int v57; // [esp+50h] [ebp-10h] BYREF
  int v58; // [esp+54h] [ebp-Ch]
  int v59; // [esp+58h] [ebp-8h] BYREF
  int v60; // [esp+5Ch] [ebp-4h]
  _WORD *v61; // [esp+6Ch] [ebp+Ch]
  _WORD *v62; // [esp+6Ch] [ebp+Ch]
  int v63; // [esp+70h] [ebp+10h]
  _WORD *v64; // [esp+70h] [ebp+10h]
  _WORD *v65; // [esp+70h] [ebp+10h]

  v54 = (*(int (__fastcall **)(int *))(*this + 116))(this) >> 1; /*0x7bb374*/
  v12 = a3 + a5; /*0x7bb378*/
  v63 = a3 + a5; /*0x7bb37d*/
  if ( a2 >= a6 && a2 < a6 + a8 && v12 >= a7 && v12 < a9 + a7 ) /*0x7bb39d*/
  {
    v58 = v12; /*0x7bb3a3*/
    v13 = *this; /*0x7bb3a7*/
    v57 = a2; /*0x7bb3b1*/
    (*(void (__thiscall **)(int *, int *, int))(v13 + 36))(this, &v57, a10); /*0x7bb3b5*/
  }
  v14 = a3 - a5; /*0x7bb3bc*/
  v51 = a3 - a5; /*0x7bb3c0*/
  if ( a2 >= a6 && a2 < a6 + a8 && v14 >= a7 && v14 < a9 + a7 ) /*0x7bb3e0*/
  {
    v58 = a3 - a5; /*0x7bb3e6*/
    v15 = *this; /*0x7bb3ea*/
    v57 = a2; /*0x7bb3f4*/
    (*(void (__thiscall **)(int *, int *, int))(v15 + 36))(this, &v57, a10); /*0x7bb3f8*/
  }
  v53 = a5 * a5; /*0x7bb409*/
  v17 = a5 * a4 * a4; /*0x7bb40f*/
  v56 = a4 * a4; /*0x7bb412*/
  v58 = a5; /*0x7bb416*/
  v48 = 0; /*0x7bb41d*/
  v46 = 2 * v17; /*0x7bb425*/
  v18 = a4 * a4 / 4 - v17; /*0x7bb438*/
  v19 = (*(int (__thiscall **)(int *, _DWORD, _DWORD))(*this + 92))(this, 0, 0); /*0x7bb449*/
  v50 = a2; /*0x7bb44f*/
  v20 = v54 * v63; /*0x7bb453*/
  v64 = (_WORD *)(v19 + 2 * (v54 * v63 + a2)); /*0x7bb45c*/
  v21 = v54 * v51; /*0x7bb464*/
  v52 = a2; /*0x7bb467*/
  v61 = (_WORD *)(v19 + 2 * (a2 + v21)); /*0x7bb478*/
  v42 = v61; /*0x7bb47f*/
  v44 = (_WORD *)(v19 + 2 * (a2 + v20)); /*0x7bb483*/
  while ( 1 ) /*0x7bb491*/
  {
    v18 += v53 + v48; /*0x7bb491*/
    if ( v18 < 0 ) /*0x7bb493*/
    {
      v22 = v46; /*0x7bb4e2*/
    }
    else
    {
      v22 = v46 - 2 * v56; /*0x7bb49f*/
      v18 -= v22; /*0x7bb4aa*/
      v46 = v22; /*0x7bb4ad*/
      --v58; /*0x7bb4b1*/
      v64 -= v54; /*0x7bb4be*/
      v61 += v54; /*0x7bb4c8*/
      v42 += v54; /*0x7bb4d2*/
      v44 -= v54; /*0x7bb4dc*/
    }
    v48 += 2 * v53; /*0x7bb4f6*/
    ++v52; /*0x7bb4fa*/
    --v50; /*0x7bb503*/
    ++v64; /*0x7bb50e*/
    --v61; /*0x7bb519*/
    ++v42; /*0x7bb524*/
    --v44; /*0x7bb531*/
    if ( v48 >= v22 ) /*0x7bb535*/
      break; /*0x7bb535*/
    v23 = a6; /*0x7bb543*/
    v60 = v58 + a3; /*0x7bb54d*/
    if ( v52 >= a6 && v52 < a6 + a8 && v60 >= a7 && v60 < a9 + a7 ) /*0x7bb577*/
      *v64 = a10; /*0x7bb582*/
    v24 = a3 - v58; /*0x7bb58d*/
    if ( v50 >= a6 ) /*0x7bb595*/
    {
      if ( v50 < a6 + a8 && v24 >= a7 && v24 < a9 + a7 ) /*0x7bb5b5*/
        *v61 = a10; /*0x7bb5c0*/
      v23 = a6; /*0x7bb5c3*/
    }
    v25 = a3 - v58; /*0x7bb5cf*/
    if ( v52 >= v23 ) /*0x7bb5d7*/
    {
      if ( v52 < v23 + a8 && v25 >= a7 && v25 < a9 + a7 ) /*0x7bb5f7*/
        *v42 = a10; /*0x7bb602*/
      v23 = a6; /*0x7bb605*/
    }
    v26 = a3 + v58; /*0x7bb611*/
    if ( v50 >= v23 && v50 < a6 + a8 && v26 >= a7 && v26 < a9 + a7 ) /*0x7bb64b*/
      *v44 = a10; /*0x7bb65a*/
  }
  v27 = a6; /*0x7bb662*/
  if ( a2 + a4 < a6 ) /*0x7bb66f*/
  {
    v28 = a3; /*0x7bb7bd*/
  }
  else
  {
    v28 = a3; /*0x7bb679*/
    if ( a2 + a4 < a6 + a8 && a3 >= a7 ) /*0x7bb689*/
    {
      if ( a3 < a9 + a7 ) /*0x7bb693*/
      {
        v59 = a2 + a4; /*0x7bb699*/
        v60 = a3; /*0x7bb6a1*/
        (*(void (__thiscall **)(int *, int *, int))(*this + 36))(this, &v59, a10); /*0x7bb6ad*/
      }
      v27 = a6; /*0x7bb6b0*/
    }
  }
  if ( a2 - a4 >= v27 && a2 - a4 < v27 + a8 && v28 >= a7 && v28 < a9 + a7 ) /*0x7bb6da*/
  {
    v59 = a2 - a4; /*0x7bb6e5*/
    v29 = *this; /*0x7bb6e9*/
    v60 = v28; /*0x7bb6f0*/
    (*(void (__thiscall **)(int *, int *, int))(v29 + 36))(this, &v59, a10); /*0x7bb6f4*/
  }
  v58 = 0; /*0x7bb700*/
  v47 = 0; /*0x7bb704*/
  v49 = 2 * a4 * v53; /*0x7bb70f*/
  v57 = a4; /*0x7bb713*/
  v30 = v53 / 4 - a4 * v53; /*0x7bb720*/
  v31 = v54 * v28 - a4; /*0x7bb72c*/
  v65 = (_WORD *)(v19 + 2 * (a4 + v54 * v28 + a2)); /*0x7bb733*/
  v32 = v54 * v28; /*0x7bb73e*/
  v33 = a2 - a4; /*0x7bb74e*/
  v43 = (_WORD *)(v19 + 2 * (a4 + a2 + v32)); /*0x7bb75b*/
  v34 = a2 + a4; /*0x7bb75f*/
  v62 = (_WORD *)(v19 + 2 * (a2 + v32 - a4)); /*0x7bb763*/
  v45 = (_WORD *)(v19 + 2 * (a2 + v31)); /*0x7bb767*/
  while ( 1 ) /*0x7bb775*/
  {
    v30 += v56 + v47; /*0x7bb775*/
    if ( v30 < 0 ) /*0x7bb777*/
    {
      v35 = v49; /*0x7bb7c6*/
    }
    else
    {
      v35 = v49 - 2 * v53; /*0x7bb783*/
      v30 -= v35; /*0x7bb78e*/
      --v65; /*0x7bb790*/
      --v34; /*0x7bb79b*/
      ++v62; /*0x7bb79c*/
      ++v33; /*0x7bb7a7*/
      --v43; /*0x7bb7a8*/
      v49 = v35; /*0x7bb7b3*/
      ++v45; /*0x7bb7b7*/
    }
    v47 += 2 * v56; /*0x7bb7d6*/
    ++v58; /*0x7bb7df*/
    v65 += v54; /*0x7bb7eb*/
    v62 -= v54; /*0x7bb7f5*/
    v43 -= v54; /*0x7bb7ff*/
    v45 += v54; /*0x7bb80f*/
    if ( v47 > v35 ) /*0x7bb813*/
      break; /*0x7bb813*/
    v36 = v58 + a3; /*0x7bb821*/
    if ( v34 < a6 || v34 >= a6 + a8 ) /*0x7bb82f*/
    {
      v37 = a7; /*0x7bb852*/
    }
    else
    {
      v37 = a7; /*0x7bb831*/
      if ( v36 >= a7 && v36 < a7 + a9 ) /*0x7bb841*/
        *v65 = a10; /*0x7bb84c*/
    }
    v38 = a3 - v58; /*0x7bb85e*/
    if ( v33 >= a6 && v33 < a6 + a8 && v38 >= v37 && v38 < v37 + a9 ) /*0x7bb87a*/
      *v62 = a10; /*0x7bb885*/
    v39 = a3 - v58; /*0x7bb891*/
    if ( v34 >= a6 && v34 < a6 + a8 && v39 >= v37 && v39 < v37 + a9 ) /*0x7bb8ad*/
      *v43 = a10; /*0x7bb8b8*/
    v40 = a3 + v58; /*0x7bb8c4*/
    if ( v33 >= a6 && v33 < a6 + a8 && v40 >= v37 && v40 < a9 + v37 ) /*0x7bb8ec*/
      *v45 = a10; /*0x7bb8fb*/
  }
  return (*(int (__thiscall **)(int *))(*this + 96))(this); /*0x7bb90c*/
}
}
} // namespace gamemd

// 0x7BBB90
char XSurface::BlitPart(void ** a2, XSurface * a3, void ** arg8, void ** a4, int a6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall XSurface::BlitPart(XSurface *this, void **a2, XSurface *a3, void **arg8, void **a4, int a6)
{
  XSurface *v6; // edi
  int v8; // ebx
  int v9; // eax
  int v10; // edx
  XSurface aP2; // [esp+Ch] [ebp-40h] BYREF
  XSurface aP1; // [esp+1Ch] [ebp-30h] BYREF
  _BYTE v14[16]; // [esp+2Ch] [ebp-20h] BYREF
  _BYTE v15[16]; // [esp+3Ch] [ebp-10h] BYREF

  v6 = a3; /*0x7bbb96*/
  v8 = (*(int (__thiscall **)(XSurface *, _BYTE *))(*(_DWORD *)a3->__pad_0 + 120))(a3, v14); /*0x7bbbaa*/
  v9 = (*(int (__thiscall **)(XSurface *, _BYTE *))(*(_DWORD *)this->__pad_0 + 120))(this, v15); /*0x7bbbb3*/
  *(_DWORD *)aP1.__pad_0 = *a2; /*0x7bbbbd*/
  aP1.Width = (int)a2[1]; /*0x7bbbc4*/
  aP1.Height = (int)a2[2]; /*0x7bbbcb*/
  aP1.LockCount = (int)a2[3]; /*0x7bbbd6*/
  *(_DWORD *)aP2.__pad_0 = *arg8; /*0x7bbbdc*/
  aP2.Width = (int)arg8[1]; /*0x7bbbe3*/
  aP2.Height = (int)arg8[2]; /*0x7bbbea*/
  aP2.LockCount = (int)arg8[3]; /*0x7bbbf6*/
  if ( !IntersectSurfaceRects((IUnknown *)&aP1, v9, &aP2, v8) ) /*0x7bbc00*/
    return 0; /*0x7bbcda*/
  v10 = *(_DWORD *)this->__pad_0; /*0x7bbc11*/
  if ( (_BYTE)a4 ) /*0x7bbc17*/
  {
    if ( (*(int (__thiscall **)(XSurface *))(v10 + 112))(this) == 1 ) /*0x7bbc1f*/
    {
      a4 = &BlitTrans<unsigned char>::`vftable'; /*0x7bbc3d*/
      return BlitterCopySimpleSHP(this, &aP1, v6, (int)&aP2, (int *)&a4, 0, 3, 1000, 0); /*0x7bbc45*/
    }
    else
    {
      a3 = (XSurface *)&BlitTrans<unsigned short>::`vftable'; /*0x7bbc5c*/
      return BlitterCopySimpleSHP(this, &aP1, v6, (int)&aP2, (int *)&a3, 0, 3, 1000, 0); /*0x7bbc6a*/
    }
  }
  else if ( (*(int (__thiscall **)(XSurface *))(v10 + 112))(this) == 1 ) /*0x7bbc72*/
  {
    a2 = &BlitPlain<unsigned char>::`vftable'; /*0x7bbc90*/
    return BlitterCopySimpleSHP(this, &aP1, v6, (int)&aP2, (int *)&a2, 0, 3, 1000, 0); /*0x7bbc98*/
  }
  else
  {
    arg8 = &BlitPlain<unsigned short>::`vftable'; /*0x7bbcaf*/
    return BlitterCopySimpleSHP(this, &aP1, v6, (int)&aP2, (int *)&arg8, 0, 3, 1000, 0); /*0x7bbcca*/
  }
}
}

// 0x7BBCF0
char XSurface::Blit(int a2, void ** a3, XSurface * arg8, int a5, unsigned int * a6, void ** a4, int a8)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall XSurface::Blit(
        XSurface *this,
        int a2,
        void **a3,
        XSurface *arg8,
        int a5,
        _DWORD *a6,
        void **a4,
        int a8)
{
  XSurface aP2; // [esp+4h] [ebp-20h] BYREF
  XSurface aP1; // [esp+14h] [ebp-10h] BYREF

  *(_DWORD *)aP1.__pad_0 = *a3; /*0x7bbcfc*/
  aP1.Width = (int)a3[1]; /*0x7bbd03*/
  aP1.Height = (int)a3[2]; /*0x7bbd0a*/
  aP1.LockCount = (int)a3[3]; /*0x7bbd15*/
  *(_DWORD *)aP2.__pad_0 = *a6; /*0x7bbd1b*/
  aP2.Width = a6[1]; /*0x7bbd22*/
  aP2.Height = a6[2]; /*0x7bbd29*/
  aP2.LockCount = a6[3]; /*0x7bbd39*/
  if ( !IntersectSurfaceRects((IUnknown *)&aP1, a2, &aP2, a5) ) /*0x7bbd46*/
    return 0; /*0x7bbe0d*/
  if ( (_BYTE)a4 ) /*0x7bbd59*/
  {
    if ( (*(int (__thiscall **)(XSurface *))(*(_DWORD *)this->__pad_0 + 112))(this) == 1 ) /*0x7bbd65*/
    {
      a4 = &BlitTrans<unsigned char>::`vftable'; /*0x7bbd70*/
      return BlitterCopySimpleSHP(this, &aP1, arg8, (int)&aP2, (int *)&a4, 0, 3, 1000, 0); /*0x7bbd7e*/
    }
    else
    {
      a3 = &BlitTrans<unsigned short>::`vftable'; /*0x7bbd89*/
      return BlitterCopySimpleSHP(this, &aP1, arg8, (int)&aP2, (int *)&a3, 0, 3, 1000, 0); /*0x7bbda8*/
    }
  }
  else if ( (*(int (__thiscall **)(XSurface *))(*(_DWORD *)this->__pad_0 + 112))(this) == 1 ) /*0x7bbdbe*/
  {
    a4 = &BlitPlain<unsigned char>::`vftable'; /*0x7bbdc9*/
    return BlitterCopySimpleSHP(this, &aP1, arg8, (int)&aP2, (int *)&a4, 0, 3, 1000, 0); /*0x7bbdd7*/
  }
  else
  {
    a3 = &BlitPlain<unsigned short>::`vftable'; /*0x7bbde2*/
    return BlitterCopySimpleSHP(this, &aP1, arg8, (int)&aP2, (int *)&a3, 0, 3, 1000, 0); /*0x7bbe01*/
  }
}
}

// 0x411500
char XSurface::entry_68_(int a1, int a2)
{
return 1;
}

// 0x411590
char XSurface::StubReturnFalse()
{
return 0;
}

// 0x4C9150
int XSurface::vt_entry_68()
{
return 0;
}

// 0x7BAB30
int XSurface::entry_4C_(int a1, int a2, int a3, int a4, int a5, int a6)
{
return 0;
}

// 0x7BAB40
char XSurface::entry_50_(int a1, int a2, int a3, int a4)
{
return 0;
}

// 0x7BAB50
char XSurface::entry_34_(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
return 0;
}

// 0x7BAB60
char XSurface::entry_38_(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
return 0;
}

// 0x7BAB70
namespace gamemd {
int XSurface_entry_3C_()
{
  return 0;
}
} // namespace gamemd

// 0x7BAB80
char XSurface::entry_40_(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
return 0;
}

// 0x7BB340
char XSurface::entry_1C_(int a1, int a2, int a3)
{
return 0;
}
