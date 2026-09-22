// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/Timer_e4.hpp"

// 0x52FEC0
namespace gamemd {
void Screen_Capture()
{
{
  char result; // al
  int retaddr; // [esp+26h] [ebp+0h]

  AbstractClass *v4 = a2; /*0x52fec5*/
  if ( !a2 ) /*0x52fecf*/
    v4 = g_DSurface_Hidden; /*0x52fed1*/
  v4->COMStub_6(0, a4, a3); /*0x52fede*/
  int v5 = v4->IsAboveScreenMargin(); /*0x52fee8*/
  int v6 = v4->vt_slot_128(); /*0x52fef4*/
  retaddr = v5; /*0x52ff00*/
  _DWORD * v7 = __2_YAPAXI_Z(0x20u); /*0x52ff08*/
  _DWORD * v8 = v7; /*0x52ff0d*/
  if ( v7 ) /*0x52ff14*/
  {
    v7[2] = v6; /*0x52ff16*/
    v7[1] = v5; /*0x52ff24*/
    v7[3] = 0; /*0x52ff27*/
    *v7 = &XSurface_Vtable; /*0x52ff2e*/
    v7[4] = 2; /*0x52ff34*/
    Buffer::Init(0, 2 * v5 * v6); /*0x52ff3b*/
    *v8 = &BSurface_Vtable; /*0x52ff40*/
  }
  else
  {
    v8 = 0; /*0x52ff48*/
  }
  Render_Draw(0); /*0x52ff52*/
  v4->COMStub_AddRef(v8); /*0x52ff60*/
  if ( v8 ) /*0x52ff67*/
    (*(void (__thiscall **)(_DWORD *, int))*v8)(v8, 1); /*0x52ff6f*/
  result = a1; /*0x52ff71*/
  if ( a1 ) /*0x52ff77*/
    return Frame::Present(0); /*0x52ff7f*/
  return result; /*0x52ff84*/
}
} // namespace gamemd

// 0x68F060
int Screen::TransitionRender(AnimClass * aP1, AnimClass * aP2, int a4)
{
{
  CampaignScore *v17; // ebx
  int v19; // ecx
  CampaignScore *v22; // eax
  CampaignScore *v24; // ebx
  CampaignScore *v29; // ebx
  AnimClass *v34; // eax
  int i; // ebx
  int v47; // edx
  wchar_t *v48; // edi
  int v49; // eax
  AbstractClass *v50; // ebx
  AbstractClass *v51; // ebx
  CampaignScore *v53; // [esp+B8h] [ebp-26Ch]
  CampaignScore *v54; // [esp+B8h] [ebp-26Ch]
  CampaignScore *v55; // [esp+B8h] [ebp-26Ch]
  CampaignScore *v56; // [esp+B8h] [ebp-26Ch]
  CampaignScore *v57; // [esp+B8h] [ebp-26Ch]
  int v58; // [esp+C8h] [ebp-25Ch] BYREF
  int v59; // [esp+CCh] [ebp-258h]
  wchar_t *v60; // [esp+D0h] [ebp-254h] BYREF
  int v61; // [esp+D4h] [ebp-250h]
  int var24C; // [esp+D8h] [ebp-24Ch]
  int v63; // [esp+DCh] [ebp-248h]
  int v64; // [esp+E0h] [ebp-244h]
  int v65; // [esp+E4h] [ebp-240h]
  int v66; // [esp+E8h] [ebp-23Ch]
  wchar_t *v62; // [esp+ECh] [ebp-238h]
  int v68; // [esp+F0h] [ebp-234h]
  wchar_t *v69; // [esp+F4h] [ebp-230h] BYREF
  int v70; // [esp+F8h] [ebp-22Ch]
  int v71; // [esp+FCh] [ebp-228h]
  int v72; // [esp+100h] [ebp-224h]
  int v73; // [esp+104h] [ebp-220h] BYREF
  CampaignScore *v74; // [esp+108h] [ebp-21Ch]
  int v75; // [esp+10Ch] [ebp-218h]
  int v76; // [esp+110h] [ebp-214h]
  int v77; // [esp+114h] [ebp-210h]
  int v78; // [esp+118h] [ebp-20Ch]
  AnimClass *v79; // [esp+11Ch] [ebp-208h]
  AnimClass *v80; // [esp+120h] [ebp-204h]
  wchar_t v81[64]; // [esp+124h] [ebp-200h] BYREF
  wchar_t Buffer[64]; // [esp+1A4h] [ebp-180h] BYREF
  wchar_t v83[64]; // [esp+224h] [ebp-100h] BYREF
  wchar_t v84[64]; // [esp+2A4h] [ebp-80h] BYREF

  int v5 = (int)aP2; /*0x68f07a*/
  int v6 = *this + a4; /*0x68f085*/
  int v7 = this->q001 + 244; /*0x68f08a*/
  v73 = 0; /*0x68f092*/
  v74 = 0; /*0x68f096*/
  v75 = 0; /*0x68f09a*/
  v76 = 0; /*0x68f09e*/
  v69 = 0; /*0x68f0a2*/
  v70 = 0; /*0x68f0a6*/
  v71 = 0; /*0x68f0aa*/
  v72 = 0; /*0x68f0ae*/
  if ( (int)aP1 > (int)aP2 ) /*0x68f0b2*/
    v5 = (int)aP1; /*0x68f0b4*/
  v65 = v5; /*0x68f0b8*/
  if ( !v5 ) /*0x68f0bc*/
  {
    v5 = 1; /*0x68f0be*/
    v65 = 1; /*0x68f0c3*/
  }
  int v8 = 140 * (int)aP1 / v5; /*0x68f0e0*/
  v66 = v8; /*0x68f0eb*/
  int v9 = 140 * (int)aP2 / v65; /*0x68f0f6*/
  v64 = v9; /*0x68f0ff*/
  if ( v65 < 20 ) /*0x68f103*/
  {
    v66 = 5 * (_DWORD)aP1; /*0x68f108*/
    v64 = 5 * (_DWORD)aP2; /*0x68f116*/
    v8 = 5 * (_DWORD)aP1; /*0x68f11a*/
    v9 = 5 * (_DWORD)aP2; /*0x68f11e*/
  }
  v65 = v8; /*0x68f124*/
  if ( v8 <= v9 ) /*0x68f128*/
    v65 = v9; /*0x68f12a*/
  if ( !v65 ) /*0x68f134*/
    v65 = 1; /*0x68f136*/
  v63 = v8; /*0x68f140*/
  int v10 = v7 - v8; /*0x68f144*/
  int v11 = this->q008; /*0x68f146*/
  v77 = v10; /*0x68f149*/
  v61 = v10; /*0x68f14d*/
  v60 = (wchar_t *)v6; /*0x68f15a*/
  var24C = 4; /*0x68f15e*/
  LOWORD(v58) = -18947; /*0x68f166*/
  BYTE2(v58) = 28; /*0x68f170*/
  (*(void (__thiscall **)(int, wchar_t **, int *, int))(*(_DWORD *)v11 + 28))(v11, &v60, &v58, 25); /*0x68f17b*/
  v63 = v66; /*0x68f189*/
  v60 = (wchar_t *)(v6 + 4); /*0x68f18d*/
  int v12 = this->q008; /*0x68f191*/
  v61 = v77; /*0x68f19b*/
  var24C = 7; /*0x68f19f*/
  LOWORD(v58) = -18947; /*0x68f1a7*/
  BYTE2(v58) = 28; /*0x68f1b1*/
  (*(void (__thiscall **)(int, wchar_t **, int *, int))(*(_DWORD *)v12 + 28))(v12, &v60, &v58, 50); /*0x68f1bc*/
  v63 = v66; /*0x68f1ca*/
  v60 = (wchar_t *)(v6 + 11); /*0x68f1ce*/
  int v13 = this->q008; /*0x68f1d2*/
  v61 = v77; /*0x68f1dc*/
  var24C = 4; /*0x68f1e0*/
  LOWORD(v58) = -18947; /*0x68f1e8*/
  BYTE2(v58) = 28; /*0x68f1f2*/
  (*(void (__thiscall **)(int, wchar_t **, int *, int))(*(_DWORD *)v13 + 28))(v13, &v60, &v58, 25); /*0x68f1fd*/
  v62 = (wchar_t *)(v6 + 132); /*0x68f20a*/
  v60 = (wchar_t *)(v6 + 132); /*0x68f20e*/
  v63 = v64; /*0x68f214*/
  int v14 = this->q008; /*0x68f21a*/
  v78 = v7 - v64; /*0x68f21d*/
  v61 = v7 - v64; /*0x68f221*/
  var24C = 4; /*0x68f22c*/
  LOWORD(v58) = 7418; /*0x68f234*/
  BYTE2(v58) = 28; /*0x68f23d*/
  (*(void (__thiscall **)(int, wchar_t **, int *, int))(*(_DWORD *)v14 + 28))(v14, &v60, &v58, 25); /*0x68f248*/
  v60 = (wchar_t *)(v6 + 136); /*0x68f255*/
  v61 = v78; /*0x68f259*/
  var24C = 7; /*0x68f25d*/
  int v15 = this->q008; /*0x68f269*/
  v63 = v64; /*0x68f26c*/
  LOWORD(v58) = 7418; /*0x68f277*/
  BYTE2(v58) = 28; /*0x68f280*/
  (*(void (__thiscall **)(int, wchar_t **, int *, int))(*(_DWORD *)v15 + 28))(v15, &v60, &v58, 50); /*0x68f28b*/
  v63 = v64; /*0x68f29c*/
  v60 = (wchar_t *)(v6 + 143); /*0x68f2a0*/
  int v16 = this->q008; /*0x68f2a4*/
  v61 = v78; /*0x68f2ae*/
  var24C = 4; /*0x68f2b2*/
  LOWORD(v58) = 7418; /*0x68f2ba*/
  BYTE2(v58) = 28; /*0x68f2c3*/
  (*(void (__thiscall **)(int, wchar_t **, int *, int))(*(_DWORD *)v16 + 28))(v16, &v60, &v58, 25); /*0x68f2ce*/
  v17 = (CampaignScore *)aP1; /*0x68f2d8*/
  int v18 = 1; /*0x68f2df*/
  v68 = 1; /*0x68f2e7*/
  v79 = aP2; /*0x68f2eb*/
  v80 = aP1; /*0x68f2ef*/
  v58 = v7 - 1; /*0x68f2f3*/
  while ( 1 ) /*0x68f2f7*/
  {
  int v40; // edx
    v19 = v66; /*0x68f2f7*/
    int v20 = v64; /*0x68f2fb*/
    if ( v66 > v64 ) /*0x68f301*/
      v20 = v66; /*0x68f303*/
    if ( v18 > v20 ) /*0x68f307*/
      break; /*0x68f307*/
    if ( v75 > 0 && v76 > 0 ) /*0x68f31b*/
    {
      (*(void (__thiscall **)(_DWORD, int *, _DWORD, int *, _DWORD, int))(**(_DWORD **)&stru_87C374[44952] + 8))( /*0x68f33a*/
        *(_DWORD *)&stru_87C374[44952],
        &v73,
        *(_DWORD *)&stru_87C374[44956],
        &v73,
        0,
        1);
      v19 = v66; /*0x68f33d*/
      v18 = v68; /*0x68f341*/
    }
    if ( v18 > v19 ) /*0x68f347*/
    {
      v59 = *(_DWORD *)&stru_87C374[44952]; /*0x68f414*/
      swprintf(v84, (const size_t)&g_Str_Fmt_PctD, (const wchar_t *const)v17, v53); /*0x68f418*/
      _DWORD * v28 = (_DWORD *)this->q003; /*0x68f41d*/
      v29 = (CampaignScore *)(v7 - v28[2] - v66); /*0x68f430*/
      (*(void (__thiscall **)(_DWORD *, int, wchar_t *, int, CampaignScore *, int))(*v28 + 12))( /*0x68f443*/
        v28,
        v59,
        v84,
        v6,
        v29,
        2);
      int * v30 = (int *)this->q003; /*0x68f446*/
      int v31 = *v30; /*0x68f44c*/
      v59 = v30[2]; /*0x68f44e*/
      v75 = (*(int (__thiscall **)(int *, wchar_t *))(v31 + 8))(v30, v84); /*0x68f45d*/
      v73 = v6; /*0x68f465*/
      v74 = v29; /*0x68f469*/
      v76 = v59; /*0x68f46d*/
    }
    else
    {
      v63 = v18; /*0x68f351*/
      int v21 = this->q008; /*0x68f35e*/
      v61 = v58; /*0x68f361*/
      v60 = (wchar_t *)v6; /*0x68f36c*/
      var24C = 15; /*0x68f370*/
      (*(void (__thiscall **)(_DWORD, wchar_t **, int, wchar_t **, _DWORD, int))(**(_DWORD **)&stru_87C374[44952] /*0x68f37f*/
                                                                               + 8))(
        *(_DWORD *)&stru_87C374[44952],
        &v60,
        v21,
        &v60,
        0,
        1);
      v22 = (CampaignScore *)((int)v80 / v65); /*0x68f38d*/
      v59 = *(_DWORD *)&stru_87C374[44952]; /*0x68f391*/
      if ( (int)v80 / v65 >= (int)v17 ) /*0x68f397*/
        v22 = v17; /*0x68f399*/
      swprintf(Buffer, (const size_t)&g_Str_Fmt_PctD, (const wchar_t *const)v22, v53); /*0x68f3a9*/
      _DWORD * v23 = (_DWORD *)this->q003; /*0x68f3ae*/
      v24 = (CampaignScore *)(v58 - v23[2]); /*0x68f3c2*/
      (*(void (__thiscall **)(_DWORD *, int, wchar_t *, int, CampaignScore *, int))(*v23 + 12))( /*0x68f3d0*/
        v23,
        v59,
        Buffer,
        v6,
        v24,
        2);
      int * v25 = (int *)this->q003; /*0x68f3d3*/
      int v26 = *v25; /*0x68f3d9*/
      v59 = v25[2]; /*0x68f3db*/
      int v27 = (*(int (__thiscall **)(int *, wchar_t *))(v26 + 8))(v25, Buffer); /*0x68f3e7*/
      v73 = v6; /*0x68f3ee*/
      v74 = v24; /*0x68f3f2*/
      v75 = v27; /*0x68f3f6*/
      v76 = v59; /*0x68f3fa*/
    }
    if ( v71 > 0 && v72 > 0 ) /*0x68f47f*/
      (*(void (__thiscall **)(_DWORD, wchar_t **, _DWORD, wchar_t **, _DWORD, int))(**(_DWORD **)&stru_87C374[44952] /*0x68f49d*/
                                                                                  + 8))(
        *(_DWORD *)&stru_87C374[44952],
        &v69,
        *(_DWORD *)&stru_87C374[44956],
        &v69,
        0,
        1);
    if ( v68 > v64 ) /*0x68f4aa*/
    {
      v59 = *(_DWORD *)&stru_87C374[44952]; /*0x68f585*/
      swprintf(v81, (const size_t)&g_Str_Fmt_PctD, (const wchar_t *const)aP2, v54); /*0x68f589*/
      _DWORD * v41 = (_DWORD *)this->q003; /*0x68f58e*/
      int v42 = v7 - v41[2] - v64; /*0x68f5a3*/
      (*(void (__thiscall **)(_DWORD *, int, wchar_t *, wchar_t *, int, int))(*v41 + 12))(v41, v59, v81, v62, v42, 2); /*0x68f5b5*/
      int * v43 = (int *)this->q003; /*0x68f5b8*/
      int v44 = *v43; /*0x68f5be*/
      v59 = v43[2]; /*0x68f5c0*/
      int v45 = (*(int (__thiscall **)(int *, wchar_t *))(v44 + 8))(v43, v81); /*0x68f5c9*/
      v40 = v59; /*0x68f5d0*/
      v69 = v62; /*0x68f5d4*/
      v70 = v42; /*0x68f5d8*/
      v71 = v45; /*0x68f5dc*/
    }
    else
    {
      int v32 = v58; /*0x68f4b4*/
      v63 = v68; /*0x68f4b8*/
      int v33 = this->q008; /*0x68f4c5*/
      v60 = v62; /*0x68f4c8*/
      v61 = v58; /*0x68f4d3*/
      var24C = 15; /*0x68f4d7*/
      (*(void (__thiscall **)(_DWORD, wchar_t **, int, wchar_t **, _DWORD, int))(**(_DWORD **)&stru_87C374[44952] /*0x68f4e6*/
                                                                               + 8))(
        *(_DWORD *)&stru_87C374[44952],
        &v60,
        v33,
        &v60,
        0,
        1);
      v34 = (AnimClass *)((int)v79 / v65); /*0x68f4f4*/
      v59 = *(_DWORD *)&stru_87C374[44952]; /*0x68f4f8*/
      if ( (int)v79 / v65 >= (int)aP2 ) /*0x68f505*/
        v34 = aP2; /*0x68f507*/
      swprintf(v83, (const size_t)&g_Str_Fmt_PctD, (const wchar_t *const)v34, v54); /*0x68f517*/
      _DWORD * v35 = (_DWORD *)this->q003; /*0x68f51c*/
      int v36 = v32 - v35[2]; /*0x68f529*/
      (*(void (__thiscall **)(_DWORD *, int, wchar_t *, wchar_t *, int, int))(*v35 + 12))(v35, v59, v83, v62, v36, 2); /*0x68f53e*/
      int * v37 = (int *)this->q003; /*0x68f541*/
      int v38 = *v37; /*0x68f547*/
      v59 = v37[2]; /*0x68f549*/
      int v39 = (*(int (__thiscall **)(int *, wchar_t *))(v38 + 8))(v37, v83); /*0x68f555*/
      v40 = v59; /*0x68f55c*/
      v69 = v62; /*0x68f560*/
      v70 = v36; /*0x68f564*/
      v71 = v39; /*0x68f568*/
    }
    v72 = v40; /*0x68f5e5*/
    if ( &stru_830620 != (IUnknown *)-56784 ) /*0x68f5eb*/
    {
      if ( Audio::IsSoundEnabled() ) /*0x68f5ed*/
      {
        for ( i = 0; i < this->q011; ++i ) /*0x68f5fd*/
        {
          if ( !_strcmpi(&stru_830620[56784], **(const void ***)(this->q00E + 4 * i)) ) /*0x68f60d*/
            break; /*0x68f617*/
        }
      }
    }
    Screen::TransitionLoop((MPCooperative *)this, 1); /*0x68f625*/
    v68 += 2; /*0x68f646*/
    v58 -= 2; /*0x68f651*/
    v80 = (AnimClass *)((char *)v80 + 2 * (_DWORD)aP1); /*0x68f660*/
    v17 = (CampaignScore *)aP1; /*0x68f664*/
    v18 = v68; /*0x68f66d*/
    v79 = (AnimClass *)((char *)v79 + 2 * (_DWORD)aP2); /*0x68f671*/
  }
  if ( v75 > 0 && v76 > 0 ) /*0x68f688*/
  {
    (*(void (__thiscall **)(_DWORD, int *, _DWORD, int *, _DWORD, int))(**(_DWORD **)&stru_87C374[44952] + 8))( /*0x68f6a6*/
      *(_DWORD *)&stru_87C374[44952],
      &v73,
      *(_DWORD *)&stru_87C374[44956],
      &v73,
      0,
      1);
    v19 = v66; /*0x68f6a9*/
  }
  v61 = v77; /*0x68f6b3*/
  v47 = this->q008; /*0x68f6be*/
  v63 = v19; /*0x68f6c1*/
  v60 = (wchar_t *)v6; /*0x68f6cc*/
  var24C = 15; /*0x68f6d0*/
  (*(void (__thiscall **)(_DWORD, wchar_t **, int, wchar_t **, _DWORD, int))(**(_DWORD **)&stru_87C374[44956] /*0x68f6df*/
                                                                           + 8))(
    *(_DWORD *)&stru_87C374[44956],
    &v60,
    v47,
    &v60,
    0,
    1);
  v59 = *(_DWORD *)&stru_87C374[44952]; /*0x68f6f2*/
  swprintf(v81, (const size_t)&g_Str_Fmt_PctD, (const wchar_t *const)v17, v53); /*0x68f6f6*/
  *(_DWORD *)this->q003->vt_slot_12(/*0x68f71f*/
    this->q003,
    v59,
    v81,
    v6,
    v7 - *(_DWORD *)(this->q003 + 8) - v66,
    2);
  *(_DWORD *)this->q003->vt_slot_8(this->q003, v81); /*0x68f72c*/
  v59 = *(_DWORD *)&stru_87C374[44956]; /*0x68f740*/
  swprintf(v81, (const size_t)&g_Str_Fmt_PctD, (const wchar_t *const)v17, v55); /*0x68f744*/
  *(_DWORD *)this->q003->vt_slot_12(/*0x68f76c*/
    v59, v81, v6, v7 - *(_DWORD *)(this->q003 + 8) - v66,
    2);
  *(_DWORD *)this->q003->vt_slot_8(this->q003, v81); /*0x68f779*/
  if ( v71 > 0 && v72 > 0 ) /*0x68f78a*/
    (*(void (__thiscall **)(_DWORD, wchar_t **, _DWORD, wchar_t **, _DWORD, int))(**(_DWORD **)&stru_87C374[44952] /*0x68f7a9*/
                                                                                + 8))(
      *(_DWORD *)&stru_87C374[44952],
      &v69,
      *(_DWORD *)&stru_87C374[44956],
      &v69,
      0,
      1);
  v48 = v62; /*0x68f7b4*/
  v61 = v78; /*0x68f7b8*/
  v49 = this->q008; /*0x68f7c5*/
  v63 = v64; /*0x68f7c8*/
  v60 = v62; /*0x68f7d3*/
  var24C = 15; /*0x68f7d7*/
  (*(void (__thiscall **)(_DWORD, wchar_t **, int, wchar_t **, _DWORD, int))(**(_DWORD **)&stru_87C374[44956] /*0x68f7e6*/
                                                                           + 8))(
    *(_DWORD *)&stru_87C374[44956],
    &v60,
    v49,
    &v60,
    0,
    1);
  v50 = *(ObjectClass **)&stru_87C374[44952]; /*0x68f7f0*/
  swprintf(v81, (const size_t)&g_Str_Fmt_PctD, (const wchar_t *const)aP2, v56); /*0x68f801*/
  *(_DWORD *)this->q003->vt_slot_12(/*0x68f821*/
    this->q003,
    v50,
    v81,
    v48,
    v7 - *(_DWORD *)(this->q003 + 8) - v64,
    2);
  *(_DWORD *)this->q003->vt_slot_8(this->q003, v81); /*0x68f82e*/
  v51 = *(ObjectClass **)&stru_87C374[44956]; /*0x68f838*/
  swprintf(v81, (const size_t)&g_Str_Fmt_PctD, (const wchar_t *const)aP2, v57); /*0x68f849*/
  *(_DWORD *)this->q003->vt_slot_12(/*0x68f86b*/
    v51, v81, v48, v7 - *(_DWORD *)(this->q003 + 8) - v64,
    2);
  *(_DWORD *)this->q003->vt_slot_8(this->q003, v81); /*0x68f878*/
  return Screen::TransitionLoop((MPCooperative *)this, 20); /*0x68f884*/
}

// 0x690160
int Screen::TransitionLoop(int a2)
{
{
  int i; // esi
  int j; // esi
  int result; // eax
  bool v14; // cc
  DWORD Ticks; // [esp+24h] [ebp-48h]
  int v16; // [esp+2Ch] [ebp-40h]
  struct tagRECT Rect; // [esp+4Ch] [ebp-20h] BYREF

  Ticks = Timer::GetTicks(); /*0x690178*/
  v16 = 1; /*0x69017c*/
  do
  {
  int v11; // esi
    Screen::CleanupTransitionObjects(this); /*0x690189*/
    GetClientRect(g_hWnd, &Rect); /*0x69019a*/
    ClientToScreen(g_hWnd, (LPPOINT)&Rect); /*0x6901ab*/
    int v3 = *(_DWORD *)this->field_0; /*0x6901b1*/
    int v4 = *(_DWORD *)&this->?[3]; /*0x6901c4*/
  _DWORD v17[4]; // [esp+3Ch] [ebp-30h] BYREF
    v17[0] = *(_DWORD *)this->field_0 + Rect.left; /*0x6901c7*/
    v17[1] = v4 + Rect.top; /*0x6901d7*/
    v17[2] = 640; /*0x6901db*/
    v17[3] = 400; /*0x6901e3*/
  _DWORD v19[4]; // [esp+5Ch] [ebp-10h] BYREF
    Rect::Set(v19, v3, v4, 640, 400); /*0x6901eb*/
    if ( g_WWMouseClass_Instance ) /*0x6901f8*/
      (*(void (__thiscall **)(int, IUnknown *, _DWORD))(*(_DWORD *)g_WWMouseClass_Instance + 60))( /*0x690205*/
        g_WWMouseClass_Instance,
        g_DSurface_Hidden,
        0);
    (*(void (__thiscall **)(int, _DWORD *, IUnknown *, _DWORD *, _DWORD, int))(*(_DWORD *)g_DSurface_Primary + 8))( /*0x690225*/
      g_DSurface_Primary,
      v17,
      g_DSurface_Hidden,
      v19,
      0,
      1);
    if ( g_WWMouseClass_Instance ) /*0x690230*/
      (*(void (__thiscall **)(int, IUnknown *, _DWORD))(*(_DWORD *)g_WWMouseClass_Instance + 64))( /*0x69023d*/
        g_WWMouseClass_Instance,
        g_DSurface_Hidden,
        0);
    do
    {
      Event::Dispatch(); /*0x690240*/
      MessageLoop(); /*0x690245*/
      if ( !g_EventManager[784] )
      {
        if ( Ticks == -1
  int v5; // eax
  int v6; // esi
          || ((v5 = Timer::GetTicks() - Ticks, v5 >= v16) ? (v6 = 0) : (v6 = v16 - v5),
              v16 = v6,
              g_EventManager[784] != 1) )
        {
          for ( i = 0; i < (int)this->field_2C; ++i ) /*0x690292*/
          {
            int v8 = *(_DWORD *)(*(_DWORD *)&this->__pad_18[8] + 4 * i); /*0x690297*/
            (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 4))(v8); /*0x69029c*/
          }
          while ( !g_EventManager[784] ) /*0x6902ae*/
          {
            Sleep(0x1F4u); /*0x6902b5*/
            MessageLoop(); /*0x6902b7*/
          }
          for ( j = 0; j < (int)this->field_2C; ++j ) /*0x6902cc*/
          {
            int v10 = *(_DWORD *)(*(_DWORD *)&this->__pad_18[8] + 4 * j); /*0x6902d1*/
            (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 8))(v10); /*0x6902d6*/
          }
        }
        Ticks = Timer::GetTicks(); /*0x6902f0*/
      }
      Sleep(0); /*0x6902f6*/
      v11 = v16; /*0x6902fc*/
      if ( Ticks != -1 ) /*0x690302*/
      {
        int v12 = Timer::GetTicks() - Ticks; /*0x69030d*/
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
{
    int result;
    int i;
    int v4;
    void (__thiscall ***v5)(int, int);
    char *v6;
    char *v7;
    int v8;
    DataGlobal_B05584 = 0;
    if ( g_LoadScreenFlag )
  {
    g_LoadScreenFlag = 0;
    (*(void (__thiscall **)(IUnknown *, int))(g_DSurface_Hidden->field_0 + 24))(g_DSurface_Hidden, 0);
    (*(void (__thiscall **)(IUnknown *, int, int, int))(g_DSurface_Hidden->field_0 + 4))( g_DSurface_Hidden, DSurface_Alternate, 0, 1);
  }
    result = (int)this->field_2C;
    for ( i = 0; i < result; ++i )
  {
    v4 = *(int *)(*(int *)&this->__pad_18[8] + 4 * i);
    if ( (*(unsigned char (__thiscall **)(int, void *))(*(int *)(v4) + 12))(v4, this->field_8) == 1 )
    {
    v5 = *(void (__thiscall ****)(int, int))(*(int *)&this->__pad_18[8] + 4 * i);
    if ( v5 )
    (**v5)(v5, 1);
    v6 = (char *)this->field_2C;
    if ( i < (int)v6 )
      {
    v7 = v6 - 1;
    v8 = i;
    for ( this->field_2C = v7;
    v8 < (int)this->field_2C;
    *(int *)(*(int *)&this->__pad_18[8] + 4 * v8 - 4) = *(int *)(*(int *)&this->__pad_18[8] + 4 * v8) ) {
    ++v8;
        }
      }
    }
    result = (int)this->field_2C;
  }
    return result;
}
}
