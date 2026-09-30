// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Screen_e4.hpp"
#include "e4/classes/Buffer_e4.hpp"
#include "e4/classes/Frame_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Math_e4.hpp"

// 0x52FEC0
namespace gamemd {
void Screen_Capture(void * a1, void * a2, void * a3, void * a4)
{
  unsigned int v4;
  int v5; // ebx
  int v6; // ebp
  unsigned int *v7; // eax
  unsigned int *v8; // esi
v4 = (int)((unsigned int *)(a2));
  if ( !a2 ) /*0x52fecf*/
    v4 = g_DSurface_Hidden; /*0x52fed1*/
  (*(void (**)(int, unsigned int, int, int))(v4->nextArrayIndex)(v4, 0, a4, a3); /*0x52fede*/
  v5 = (*(int (**)(int))(v4->q07C)(v4); /*0x52fee8*/
  v6 = (*(int (**)(int))(v4->q080)(v4); /*0x52fef4*/
  v5 = v5; /*0x52ff00*/
  v7 = operator new(0x20u); /*0x52ff08*/
  v8 = v7; /*0x52ff0d*/
  if ( v7 ) /*0x52ff14*/
  {
    v7[2] = (unsigned int)(v6);
    v7[1] = (unsigned int)(v5);
    v7[3] = (unsigned int)(0);
    *v7 = (unsigned int)(&XSurface_Vtable);
    v7[4] = (unsigned int)(2);
    Buffer::Init(0, 2 * v5 * v6); /*0x52ff3b*/
    *v8 = &BSurface_Vtable; /*0x52ff40*/
  }
  else
  {
    v8 = 0; /*0x52ff48*/
  }
  Render_Draw(0); /*0x52ff52*/
  (*(void (**)(int, unsigned int *))(v4->vtable2)(v4, v8); /*0x52ff60*/
  if ( v8 ) /*0x52ff67*/
    (*(void (**)(unsigned int *, int))*v8)(v8, 1); /*0x52ff6f*/
  a1 = a1; /*0x52ff71*/
  if ( a1 ) /*0x52ff77*/
    return ((Frame *)(0))->Present(); /*0x52ff7f*/
}
}
// 0x68F060
int Screen::TransitionRender(AnimClass * aP1, AnimClass * aP2, int a4)
{
    unsigned int v19 = 0;  /* G37 hoist */
    unsigned int v19 = 0;  /* G37 hoist */
    unsigned int v19 = 0;  /* G37 hoist */
    unsigned int v19 = 0;  /* G37 hoist */
    unsigned int v19 = 0;  /* G37 hoist */
    unsigned int v19 = 0;  /* G37 hoist */
    unsigned int v19 = 0;  /* G37 hoist */
    unsigned int v19 = 0;  /* G37 hoist */
    unsigned int v19 = 0;  /* G37 hoist */
  int v5; // ecx
  int v6; // edi
  int v7; // ebp
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ebx
  int v18; // eax
  int v19; // ecx
  int v20; // edx
  int v21; // eax
  int v22; // eax
  unsigned int *v23; // ecx
  int v24; // ebx
  int *v25; // ecx
  int v26; // edx
  int v27; // eax
  unsigned int *v28; // ecx
  int v29; // ebx
  int *v30; // ecx
  int v31; // eax
  int v33; // eax
  const wchar_t *v34; // eax
  unsigned int *v35; // ecx
  int v36; // ebx
  int *v37; // ecx
  int v38; // edx
  int v39; // eax
  ObjectClass *v40; // edx
  unsigned int *v41; // ecx
  int v42; // ebx
  int *v43; // ecx
  int v44; // edx
  int v45; // eax
  int i; // ebx
  int v47; // edx
  int v49; // eax
  DSurface *v51; // ebx
  int v53; // [esp+C8h] [ebp-25Ch] BYREF
  ObjectClass *v54; // [esp+CCh] [ebp-258h]
  int v55; // [esp+D0h] [ebp-254h] BYREF
  int v56; // [esp+D4h] [ebp-250h]
  int v57; // [esp+D8h] [ebp-24Ch]
  int v58; // [esp+DCh] [ebp-248h]
  int v59; // [esp+E0h] [ebp-244h]
  int v60; // [esp+E4h] [ebp-240h]
  int v61; // [esp+E8h] [ebp-23Ch]
  int v62; // [esp+ECh] [ebp-238h]
  int v63; // [esp+F0h] [ebp-234h]
  int v64; // [esp+F4h] [ebp-230h] BYREF
  int v65; // [esp+F8h] [ebp-22Ch]
  int v66; // [esp+FCh] [ebp-228h]
  int v67; // [esp+100h] [ebp-224h]
  int v68; // [esp+104h] [ebp-220h] BYREF
  int v69; // [esp+108h] [ebp-21Ch]
  int v70; // [esp+10Ch] [ebp-218h]
  int v71; // [esp+110h] [ebp-214h]
  int v73; // [esp+118h] [ebp-20Ch]
  wchar_t v76[64]; // [esp+124h] [ebp-200h] BYREF
  wchar_t Buffer[64]; // [esp+1A4h] [ebp-180h] BYREF
  wchar_t v78[64]; // [esp+224h] [ebp-100h] BYREF
  wchar_t v79[64]; // [esp+2A4h] [ebp-80h] BYREF

  v5 = (int)aP2; /*0x68f07a*/
  v6 = *(unsigned int *)this + a4; /*0x68f085*/
  v7 = this->u32_4 + 244; /*0x68f08a*/
  v68 = 0; /*0x68f092*/
  v69 = 0; /*0x68f096*/
  v70 = 0; /*0x68f09a*/
  v71 = 0; /*0x68f09e*/
  v64 = 0; /*0x68f0a2*/
  v65 = 0; /*0x68f0a6*/
  v66 = 0; /*0x68f0aa*/
  v67 = 0; /*0x68f0ae*/
  if ( (int)aP1 > (int)aP2 ) /*0x68f0b2*/
    v5 = (int)aP1; /*0x68f0b4*/
  v60 = v5; /*0x68f0b8*/
  if ( !v5 ) /*0x68f0bc*/
  {
    v5 = 1; /*0x68f0be*/
    v60 = 1; /*0x68f0c3*/
  }
  v8 = 140 * (int)aP1 / v5; /*0x68f0e0*/
  v61 = v8; /*0x68f0eb*/
  v9 = 140 * (int)aP2 / v60; /*0x68f0f6*/
  v59 = v9; /*0x68f0ff*/
  if ( v60 < 20 ) /*0x68f103*/
  {
    v61 = 5 * (unsigned int)aP1; /*0x68f108*/
    v59 = 5 * (unsigned int)aP2; /*0x68f116*/
    v8 = 5 * (unsigned int)aP1; /*0x68f11a*/
    v9 = 5 * (unsigned int)aP2; /*0x68f11e*/
  }
  v60 = v8; /*0x68f124*/
  if ( v8 <= v9 ) /*0x68f128*/
    v60 = v9; /*0x68f12a*/
  if ( !v60 ) /*0x68f134*/
    v60 = 1; /*0x68f136*/
  v58 = v8; /*0x68f140*/
  v10 = v7 - v8; /*0x68f144*/
  v11 = *(unsigned int *)&this->q008; /*0x68f146*/
  v10 = v10; /*0x68f149*/
  v56 = v10; /*0x68f14d*/
  v55 = v6; /*0x68f15a*/
  v57 = 4; /*0x68f15e*/
  IDA_LOWORD(v53) = -18947; /*0x68f166*/
  IDA_BYTE2(v53) = 28; /*0x68f170*/
  (*(void (**)(int, int *, int *, int))(*(unsigned int *)v11 + 28))(v11, &v55, &v53, 25); /*0x68f17b*/
  v58 = v61; /*0x68f189*/
  v55 = v6 + 4; /*0x68f18d*/
  v12 = *(unsigned int *)&this->q008; /*0x68f191*/
  v56 = v10; /*0x68f19b*/
  v57 = 7; /*0x68f19f*/
  IDA_LOWORD(v53) = -18947; /*0x68f1a7*/
  IDA_BYTE2(v53) = 28; /*0x68f1b1*/
  (*(void (**)(int, int *, int *, int))(*(unsigned int *)v12 + 28))(v12, &v55, &v53, 50); /*0x68f1bc*/
  v58 = v61; /*0x68f1ca*/
  v55 = v6 + 11; /*0x68f1ce*/
  v13 = *(unsigned int *)&this->q008; /*0x68f1d2*/
  v56 = v10; /*0x68f1dc*/
  v57 = 4; /*0x68f1e0*/
  IDA_LOWORD(v53) = -18947; /*0x68f1e8*/
  IDA_BYTE2(v53) = 28; /*0x68f1f2*/
  (*(void (**)(int, int *, int *, int))(*(unsigned int *)v13 + 28))(v13, &v55, &v53, 25); /*0x68f1fd*/
  v62 = v6 + 132; /*0x68f20a*/
  v55 = v6 + 132; /*0x68f20e*/
  v58 = v59; /*0x68f214*/
  v14 = *(unsigned int *)&this->q008; /*0x68f21a*/
  v73 = v7 - v59; /*0x68f21d*/
  v56 = v7 - v59; /*0x68f221*/
  v57 = 4; /*0x68f22c*/
  IDA_LOWORD(v53) = 7418; /*0x68f234*/
  IDA_BYTE2(v53) = 28; /*0x68f23d*/
  (*(void (**)(int, int *, int *, int))(*(unsigned int *)v14 + 28))(v14, &v55, &v53, 25); /*0x68f248*/
  v55 = v6 + 136; /*0x68f255*/
  v56 = v73; /*0x68f259*/
  v57 = 7; /*0x68f25d*/
  v15 = *(unsigned int *)&this->q008; /*0x68f269*/
  v58 = v59; /*0x68f26c*/
  IDA_LOWORD(v53) = 7418; /*0x68f277*/
  IDA_BYTE2(v53) = 28; /*0x68f280*/
  (*(void (**)(int, int *, int *, int))(*(unsigned int *)v15 + 28))(v15, &v55, &v53, 50); /*0x68f28b*/
  v58 = v59; /*0x68f29c*/
  v55 = v6 + 143; /*0x68f2a0*/
  v16 = *(unsigned int *)&this->q008; /*0x68f2a4*/
  v56 = v73; /*0x68f2ae*/
  v57 = 4; /*0x68f2b2*/
  IDA_LOWORD(v53) = 7418; /*0x68f2ba*/
  IDA_BYTE2(v53) = 28; /*0x68f2c3*/
  (*(void (**)(int, int *, int *, int))(*(unsigned int *)v16 + 28))(v16, &v55, &v53, 25); /*0x68f2ce*/
  v17 = (int)aP1; /*0x68f2d8*/
  v18 = 1; /*0x68f2df*/
  v63 = 1; /*0x68f2e7*/
  aP2 = aP2; /*0x68f2eb*/
  aP1 = aP1; /*0x68f2ef*/
  v53 = v7 - 1; /*0x68f2f3*/
  while ( 1 ) /*0x68f2f7*/
  {
    v19 = v61; /*0x68f2f7*/
    v20 = v59; /*0x68f2fb*/
    if ( v61 > v59 ) /*0x68f301*/
      v20 = v61; /*0x68f303*/
    if ( v18 > v20 ) /*0x68f307*/
      break; /*0x68f307*/
    if ( v70 > 0 && v71 > 0 ) /*0x68f31b*/
    {
      (*((void (**)(ObjectClass *, int *, DSurface *, int *, unsigned int, int))g_DSurface_Hidden->AbstractClass + 2))( /*0x68f33a*/
        g_DSurface_Hidden,
        &v68,
        DSurface_Alternate,
        &v68,
        0,
        1);
      v19 = v61; /*0x68f33d*/
      v18 = v63; /*0x68f341*/
    }
    if ( v18 > v19 ) /*0x68f347*/
    {
      v54 = g_DSurface_Hidden; /*0x68f414*/
      swprintf(v79, (const size_t)g_Str_Fmt_PctD, (const wchar_t *const)v17); /*0x68f418*/
      v28 = (unsigned int *)this->u32_C; /*0x68f41d*/
      v29 = v7 - v28[2] - v61; /*0x68f430*/
      (*(void (**)(unsigned int *, ObjectClass *, wchar_t *, int, int, int))(*v28 + 12))(v28, v54, v79, v6, v29, 2); /*0x68f443*/
      v30 = (int *)this->u32_C; /*0x68f446*/
      v31 = *v30; /*0x68f44c*/
      v54 = (ObjectClass *)v30[2]; /*0x68f44e*/
      v70 = (*(int (**)(int *, wchar_t *))(v31 + 8))(v30, v79); /*0x68f45d*/
      v68 = v6; /*0x68f465*/
      v69 = v29; /*0x68f469*/
      v71 = (int)v54; /*0x68f46d*/
    }
    else
    {
      v58 = v18; /*0x68f351*/
      v21 = *(unsigned int *)&this->q008; /*0x68f35e*/
      v56 = v53; /*0x68f361*/
      v55 = v6; /*0x68f36c*/
      v57 = 15; /*0x68f370*/
      (*((void (**)(ObjectClass *, int *, int, int *, unsigned int, int))g_DSurface_Hidden->AbstractClass + 2))( /*0x68f37f*/
        g_DSurface_Hidden,
        &v55,
        v21,
        &v55,
        0,
        1);
      v22 = (int)aP1 / v60; /*0x68f38d*/
      v54 = g_DSurface_Hidden; /*0x68f391*/
      if ( (int)aP1 / v60 >= v17 ) /*0x68f397*/
        v22 = v17; /*0x68f399*/
      swprintf(Buffer, (const size_t)g_Str_Fmt_PctD, (const wchar_t *const)v22); /*0x68f3a9*/
      v23 = (unsigned int *)this->u32_C; /*0x68f3ae*/
      v24 = v53 - v23[2]; /*0x68f3c2*/
      (*(void (**)(unsigned int *, ObjectClass *, wchar_t *, int, int, int))(*v23 + 12))( /*0x68f3d0*/
        v23,
        v54,
        Buffer,
        v6,
        v24,
        2);
      v25 = (int *)this->u32_C; /*0x68f3d3*/
      v26 = *v25; /*0x68f3d9*/
      v54 = (ObjectClass *)v25[2]; /*0x68f3db*/
      v27 = (*(int (**)(int *, wchar_t *))(v26 + 8))(v25, Buffer); /*0x68f3e7*/
      v68 = v6; /*0x68f3ee*/
      v69 = v24; /*0x68f3f2*/
      v70 = v27; /*0x68f3f6*/
      v71 = (int)v54; /*0x68f3fa*/
    }
    if ( v66 > 0 && v67 > 0 ) /*0x68f47f*/
      (*((void (**)(ObjectClass *, int *, DSurface *, int *, unsigned int, int))g_DSurface_Hidden->AbstractClass + 2))( /*0x68f49d*/
        g_DSurface_Hidden,
        &v64,
        DSurface_Alternate,
        &v64,
        0,
        1);
    if ( v63 > v59 ) /*0x68f4aa*/
    {
      v54 = g_DSurface_Hidden; /*0x68f585*/
      swprintf(v76, (const size_t)g_Str_Fmt_PctD, aP2); /*0x68f589*/
      v41 = (unsigned int *)this->u32_C; /*0x68f58e*/
      v42 = v7 - v41[2] - v59; /*0x68f5a3*/
      (*(void (**)(unsigned int *, ObjectClass *, wchar_t *, int, int, int))(*v41 + 12))( /*0x68f5b5*/
        v41,
        v54,
        v76,
        v62,
        v42,
        2);
      v43 = (int *)this->u32_C; /*0x68f5b8*/
      v44 = *v43; /*0x68f5be*/
      v54 = (ObjectClass *)v43[2]; /*0x68f5c0*/
      v45 = (*(int (**)(int *, wchar_t *))(v44 + 8))(v43, v76); /*0x68f5c9*/
      v40 = v54; /*0x68f5d0*/
      v64 = v62; /*0x68f5d4*/
      v65 = v42; /*0x68f5d8*/
      v66 = v45; /*0x68f5dc*/
    }
    else
    {
      v53 = v53; /*0x68f4b4*/
      v58 = v63; /*0x68f4b8*/
      v33 = *(unsigned int *)&this->q008; /*0x68f4c5*/
      v55 = v62; /*0x68f4c8*/
      v56 = v53; /*0x68f4d3*/
      v57 = 15; /*0x68f4d7*/
      (*((void (**)(ObjectClass *, int *, int, int *, unsigned int, int))g_DSurface_Hidden->AbstractClass + 2))( /*0x68f4e6*/
        g_DSurface_Hidden,
        &v55,
        v33,
        &v55,
        0,
        1);
      v34 = (const wchar_t *)((int)aP2 / v60); /*0x68f4f4*/
      v54 = g_DSurface_Hidden; /*0x68f4f8*/
      if ( (int)aP2 / v60 >= (int)aP2 ) /*0x68f505*/
        v34 = aP2; /*0x68f507*/
      swprintf(v78, (const size_t)g_Str_Fmt_PctD, v34); /*0x68f517*/
      v35 = (unsigned int *)this->u32_C; /*0x68f51c*/
      v36 = v53 - v35[2]; /*0x68f529*/
      (*(void (**)(unsigned int *, ObjectClass *, wchar_t *, int, int, int))(*v35 + 12))( /*0x68f53e*/
        v35,
        v54,
        v78,
        v62,
        v36,
        2);
      v37 = (int *)this->u32_C; /*0x68f541*/
      v38 = *v37; /*0x68f547*/
      v54 = (ObjectClass *)v37[2]; /*0x68f549*/
      v39 = (*(int (**)(int *, wchar_t *))(v38 + 8))(v37, v78); /*0x68f555*/
      v40 = v54; /*0x68f55c*/
      v64 = v62; /*0x68f560*/
      v65 = v36; /*0x68f564*/
      v66 = v39; /*0x68f568*/
    }
    v67 = (int)v40; /*0x68f5e5*/
    if ( g_INI_Key_BarGraph ) /*0x68f5eb*/
    {
      if ( Audio::IsSoundEnabled() ) /*0x68f5ed*/
      {
        for ( i = 0; i < this->q044; ++i ) /*0x68f5fd*/
        {
          if ( !_strcmpi(g_INI_Key_BarGraph, **(char ***)(this->q00E + 4 * i)) ) /*0x68f60d*/
            break; /*0x68f617*/
        }
      }
    }
    Screen::TransitionLoop(1); /*0x68f625*/
    v63 += 2; /*0x68f646*/
    v53 -= 2; /*0x68f651*/
    aP1 += (int)aP1; /*0x68f660*/
    v17 = (int)aP1; /*0x68f664*/
    v18 = v63; /*0x68f66d*/
    aP2 += (int)aP2; /*0x68f671*/
  }
  if ( v70 > 0 && v71 > 0 ) /*0x68f688*/
  {
    (*((void (**)(ObjectClass *, int *, DSurface *, int *, unsigned int, int))g_DSurface_Hidden->AbstractClass + 2))( /*0x68f6a6*/
      g_DSurface_Hidden,
      &v68,
      DSurface_Alternate,
      &v68,
      0,
      1);
    v19 = v61; /*0x68f6a9*/
  }
  v56 = v10; /*0x68f6b3*/
  v47 = *(unsigned int *)&this->q008; /*0x68f6be*/
  v58 = v19; /*0x68f6c1*/
  v55 = v6; /*0x68f6cc*/
  v57 = 15; /*0x68f6d0*/
  (*((void (**)(DSurface *, int *, int, int *, unsigned int, int))DSurface_Alternate->DSurface_field_0x0 + 2))( /*0x68f6df*/
    DSurface_Alternate,
    &v55,
    v47,
    &v55,
    0,
    1);
  v54 = g_DSurface_Hidden; /*0x68f6f2*/
  swprintf(v76, (const size_t)g_Str_Fmt_PctD, (const wchar_t *const)v17); /*0x68f6f6*/
  (*(void (**)(unsigned int, ObjectClass *, wchar_t *, int, int, int))(**((unsigned int **)this + 3) + 12))( /*0x68f71f*/
    this->u32_C,
    v54,
    v76,
    v6,
    v7 - *(unsigned int *)(this->u32_C + 8) - v61,
    2);
  (*(void (**)(unsigned int, wchar_t *))(**((unsigned int **)this + 3) + 8))(this->u32_C, v76); /*0x68f72c*/
  v54 = (ObjectClass *)DSurface_Alternate; /*0x68f740*/
  swprintf(v76, (const size_t)g_Str_Fmt_PctD, (const wchar_t *const)v17); /*0x68f744*/
  (*(void (__stdcall **)(ObjectClass *, wchar_t *, int, int, int))(**((unsigned int **)this + 3) + 12))( /*0x68f76c*/
    v54,
    v76,
    v6,
    v7 - *(unsigned int *)(this->u32_C + 8) - v61,
    2);
  (*(void (**)(unsigned int, wchar_t *))(**((unsigned int **)this + 3) + 8))(this->u32_C, v76); /*0x68f779*/
  if ( v66 > 0 && v67 > 0 ) /*0x68f78a*/
    (*((void (**)(ObjectClass *, int *, DSurface *, int *, unsigned int, int))g_DSurface_Hidden->AbstractClass + 2))( /*0x68f7a9*/
      g_DSurface_Hidden,
      &v64,
      DSurface_Alternate,
      &v64,
      0,
      1);
  v62 = v62; /*0x68f7b4*/
  v56 = v73; /*0x68f7b8*/
  v49 = *(unsigned int *)&this->q008; /*0x68f7c5*/
  v58 = v59; /*0x68f7c8*/
  v55 = v62; /*0x68f7d3*/
  v57 = 15; /*0x68f7d7*/
  (*((void (**)(DSurface *, int *, int, int *, unsigned int, int))DSurface_Alternate->DSurface_field_0x0 + 2))( /*0x68f7e6*/
    DSurface_Alternate,
    &v55,
    v49,
    &v55,
    0,
    1);
  g_DSurface_Hidden = g_DSurface_Hidden; /*0x68f7f0*/
  swprintf(v76, (const size_t)g_Str_Fmt_PctD, aP2); /*0x68f801*/
  (*(void (**)(unsigned int, ObjectClass *, wchar_t *, int, int, int))(**((unsigned int **)this + 3) + 12))( /*0x68f821*/
    this->u32_C,
    g_DSurface_Hidden,
    v76,
    v62,
    v7 - *(unsigned int *)(this->u32_C + 8) - v59,
    2);
  (*(void (**)(unsigned int, wchar_t *))(**((unsigned int **)this + 3) + 8))(this->u32_C, v76); /*0x68f82e*/
  v51 = DSurface_Alternate; /*0x68f838*/
  swprintf(v76, (const size_t)g_Str_Fmt_PctD, aP2); /*0x68f849*/
  (*(void (__stdcall **)(DSurface *, wchar_t *, int, int, int))(**((unsigned int **)this + 3) + 12))( /*0x68f86b*/
    v51,
    v76,
    v62,
    v7 - *(unsigned int *)(this->u32_C + 8) - v59,
    2);
  (*(void (**)(unsigned int, wchar_t *))(**((unsigned int **)this + 3) + 8))(this->u32_C, v76); /*0x68f878*/
// 0x690160
  return Screen::TransitionLoop(20); /*0x68f884*/
}
// 0x690160
int Screen::TransitionLoop(int a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // esi
  int i; // esi
  int v8; // ecx
  int j; // esi
  int v10; // ecx
  int v11; // esi
  int v12; // eax
  int result; // eax
  bool v14; // cc
  int Ticks; // [esp+24h] [ebp-48h]
  int v16; // [esp+2Ch] [ebp-40h]
  unsigned int v17[4]; // [esp+3Ch] [ebp-30h] BYREF
  struct tagRECT Rect; // [esp+4Ch] [ebp-20h] BYREF
  Rect v19; // [esp+5Ch] [ebp-10h] BYREF

  Ticks = Timer::GetTicks(); /*0x690178*/
  v16 = 1; /*0x69017c*/
  do
  {
    Screen::CleanupTransitionObjects(); /*0x690189*/
    GetClientRect(g_hWnd, &Rect); /*0x69019a*/
    ClientToScreen(g_hWnd, (LPPOINT)&Rect); /*0x6901ab*/
    v3 = *(unsigned int *)this; /*0x6901b1*/
    v4 = this->u32_4; /*0x6901c4*/
    v17[0] = *(unsigned int *)this + Rect.left; /*0x6901c7*/
    v17[1] = v4 + Rect.top; /*0x6901d7*/
    v17[2] = 640; /*0x6901db*/
    v17[3] = 400; /*0x6901e3*/
    Rect::Set(&v19, v3, v4, 640, 400); /*0x6901eb*/
    if ( stru_887598.lineTrailer ) /*0x6901f8*/
      (*(void (**)(void *, ObjectClass *, unsigned int))(*(unsigned int *)stru_887598.lineTrailer + 60))( /*0x690205*/
        stru_887598.lineTrailer,
        g_DSurface_Hidden,
        0);
    (*((void (**)(DSurface *, unsigned int *, ObjectClass *, Rect *, unsigned int, int))g_DSurface_Primary->DSurface_field_0x0 /*0x690225*/
     + 2))(
      g_DSurface_Primary,
      v17,
      g_DSurface_Hidden,
      &v19,
      0,
      1);
    if ( stru_887598.lineTrailer ) /*0x690230*/
      (*(void (**)(void *, ObjectClass *, unsigned int))(*(unsigned int *)stru_887598.lineTrailer + 64))( /*0x69023d*/
        stru_887598.lineTrailer,
        g_DSurface_Hidden,
        0);
    do
    {
      Event::Dispatch(); /*0x690240*/
      MessageLoop(); /*0x690245*/
      if ( !stru_A8EB00.?[412] )
      {
        if ( Ticks == -1
          || ((v5 = Timer::GetTicks() - Ticks, v5 >= v16) ? (v6 = 0) : (v6 = v16 - v5), v16 = v6,
                                                                                        *((unsigned int *)((char *)&stru_A8EB00 + 412)) != 1) )
        {
          for ( i = 0; i < this->u32_2C; ++i ) /*0x690292*/
          {
            v8 = *(unsigned int *)(this->q020 + 4 * i); /*0x690297*/
            (*(void (**)(int))(*(unsigned int *)v8 + 4))(v8); /*0x69029c*/
          }
          while ( !stru_A8EB00.?[412] ) /*0x6902ae*/
          {
            Sleep(0x1F4u); /*0x6902b5*/
            MessageLoop(); /*0x6902b7*/
          }
          for ( j = 0; j < this->u32_2C; ++j ) /*0x6902cc*/
          {
            v10 = *(unsigned int *)(this->q020 + 4 * j); /*0x6902d1*/
            (*(void (**)(int))(*(unsigned int *)v10 + 8))(v10); /*0x6902d6*/
          }
        }
        Ticks = Timer::GetTicks(); /*0x6902f0*/
      }
      Sleep(0); /*0x6902f6*/
      v11 = v16; /*0x6902fc*/
      if ( Ticks != -1 ) /*0x690302*/
      {
        v12 = Timer::GetTicks() - Ticks; /*0x69030d*/
        if ( v12 >= v16 ) /*0x690313*/
          break; /*0x690313*/
        v11 = v16 - v12; /*0x690315*/
      }
    }
    while ( v11 > 0 );
    Ticks = Timer::GetTicks(); /*0x69031f*/
    result = a2 - 1; /*0x690341*/
    v14 = a2 - 1 <= 0; /*0x690346*/
    v16 = 1; /*0x690348*/
    --a2; /*0x69034c*/
  }
  while ( !v14 );
  return result; /*0x690356*/
}
// 0x690360
int Screen::CleanupTransitionObjects()
{
  int result; // eax
  int i; // edi
  int v4; // ecx
  void (***v5)(unsigned int, int); // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // eax

  byte_B05584 = 0; /*0x69036b*/
  if ( g_LoadScreenFlag ) /*0x690372*/
  {
    g_LoadScreenFlag = 0; /*0x69037a*/
    (*(void (**)(int, unsigned int))(*(unsigned int *)g_DSurface_Hidden + 24))(g_DSurface_Hidden, 0); /*0x690385*/
    (*(void (**)(int, int, unsigned int, int))(*(unsigned int *)g_DSurface_Hidden + 4))( /*0x69039a*/
      g_DSurface_Hidden,
      DSurface_Alternate,
      0,
      1);
  }
  result = this->u32_2C; /*0x69039d*/
  for ( i = 0; i < result; ++i ) /*0x6903a4*/
  {
    v4 = *(unsigned int *)(this->q020 + 4 * i); /*0x6903ad*/
    if ( (*(uint8_t (**)(int, unsigned int))(*(unsigned int *)v4 + 12))(v4, *(unsigned int *)&this->q008) == 1 ) /*0x6903b7*/
    {
      v5 = *(void (****)(unsigned int, int))(this->q020 + 4 * i); /*0x6903bc*/
      if ( v5 ) /*0x6903c1*/
        (**v5)(v5, 1); /*0x6903c7*/
      v6 = this->u32_2C; /*0x6903c9*/
      if ( i < v6 ) /*0x6903ce*/
      {
        v7 = v6 - 1; /*0x6903d0*/
        v8 = i; /*0x6903d3*/
        for ( this->u32_2C = v7; /*0x6903da*/
              v8 < this->u32_2C;
              *(unsigned int *)(this->q020 + 4 * v8 - 4) = *(unsigned int *)(this->q020 + 4 * v8) )
        {
          ++v8; /*0x6903df*/
        }
      }
    }
    result = this->u32_2C; /*0x6903ee*/
  }
  return result; /*0x6903f6*/
}