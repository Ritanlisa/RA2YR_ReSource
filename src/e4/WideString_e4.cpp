// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/VectorClass_Wstring_e4.hpp"
#include "e4/classes/FileSystem_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/WebBrowser_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/GameSetup_e4.hpp"
#include "e4/classes/LoadingScreen_e4.hpp"
#include "e4/classes/Flag_e4.hpp"

// 0x5D4B20
namespace gamemd {  // G42.18 ns repair
int WideString::WordWrap(wchar_t * a0, CampaignScore * aP1, int a3, CampaignScore * aP3, int a5)
{

  wchar_t *v6; // ebp
  signed int v7; // eax
  int v8; // ecx
  int v9; // ebx
  wchar_t *v10; // esi
  wchar_t *v11; // edx

  if ( a3 <= 0 ) /*0x5d4b27*/
    return 0; /*0x5d4b2c*/
  v6 = (wchar_t *)(aP1); /*0x5d4b31*/
  v7 = wcslen(aP1); /*0x5d4b37*/
  v8 = (int)(aP3); /*0x5d4b3c*/
  if ( aP3 > v7 ) /*0x5d4b49*/
    v8 = v7; /*0x5d4b4b*/
  if ( a5 ) /*0x5d4b53*/
  {
    v9 = v8; /*0x5d4b79*/
    if ( v8 >= a3 ) /*0x5d4b7b*/
    {
      v11 = (wchar_t *)(&aP1[v8 - 1]); /*0x5d4b7d*/
      while ( !*v11 || *v11 > 0x20u ) /*0x5d4b8d*/
      {
        --v9; /*0x5d4b8f*/
        --v11; /*0x5d4b90*/
        if ( v9 < a3 ) /*0x5d4b95*/
          goto LABEL_17; /*0x5d4b95*/
      }
      goto LABEL_18; /*0x5d4b8d*/
    }
  }
  else
  {
    v9 = a3; /*0x5d4b57*/
    if ( a3 <= v8 ) /*0x5d4b59*/
    {
      v10 = (wchar_t *)(&aP1[a3 - 1]); /*0x5d4b5b*/
      while ( !*v10 || *v10 > 0x20u ) /*0x5d4b6b*/
      {
        ++v9; /*0x5d4b6d*/
        ++v10; /*0x5d4b6e*/
        if ( v9 > v8 ) /*0x5d4b73*/
          goto LABEL_17; /*0x5d4b73*/
      }
      goto LABEL_18; /*0x5d4b6b*/
    }
  }
  LABEL_17:
  v9 = a3; /*0x5d4b97*/
  LABEL_18:
  if ( a0 ) /*0x5d4b9f*/
  {
    memcpy(a0, aP1, 2 * v9); /*0x5d4baf*/
    v6 = (wchar_t *)(aP1); /*0x5d4bb3*/
    a0[v9] = 0; /*0x5d4bbc*/
  }
  memcpy(v6, &v6[v9], 2 * (v7 + 0x7FFFFFFF * v9) + 2); /*0x5d4bdc*/
  return v9; /*0x5d4b2b*/

}
}  // G42.18 ns repair
// 0x7B73F0
namespace gamemd {
AbstractClass * * WideString::Replace(CampaignScore * aP1, wchar_t * String)
{

  void **v3; // ebx
  const wchar_t *v4; // edi
  wchar_t *v5; // esi
  wchar_t *v6; // eax
  size_t v7; // ebp
  wchar_t *v8; // ebx
  wchar_t *v9; // eax
  wchar_t *v10; // ebx
  int v11; // edi
  wchar_t *v12; // eax
  wchar_t *v13; // ebp
  int v14; // ebx
  wchar_t *v15; // eax
  const wchar_t *v16; // edi
  int v17; // eax
  unsigned short *v18; // eax
  size_t v20; // [esp+Ch] [ebp-Ch]
  wchar_t *v22; // [esp+14h] [ebp-4h]

  v3 = (void **)this; /*0x7b73f4*/
  v4 = *(const wchar_t **)this; /*0x7b73f8*/
  v5 = 0; /*0x7b73fa*/
  if ( !*(unsigned int *)this ) /*0x7b73f8*/
  {
    v4 = &g_TypeClass_DefaultString; /*0x7b7404*/
    if ( !&g_TypeClass_DefaultString ) /*0x7b740b*/
      goto LABEL_33; /*0x7b740b*/
  }
  while ( *v4 ) /*0x7b7416*/
  {
    v6 = wcsstr(v4, aP1); /*0x7b7422*/
    v22 = v6; /*0x7b742a*/
    if ( !v6 ) /*0x7b7430*/
    {
      if ( v4 ) /*0x7b7521*/
      {
        v13 = v5; /*0x7b7524*/
        v14 = wcslen(v4) + 1; /*0x7b7530*/
        if ( v5 ) /*0x7b7533*/
          v14 += wcslen(v5); /*0x7b753e*/
        v15 = (wchar_t *)__2_YAPAXI_Z(4 * v14); /*0x7b7548*/
        v5 = v15; /*0x7b7550*/
        if ( v13 ) /*0x7b7554*/
          wcscpy(v15, v13); /*0x7b7558*/
        else
          *v15 = 0; /*0x7b7562*/
        wcscat(v5, v4); /*0x7b7569*/
        if ( v13 ) /*0x7b7573*/
          __3_YAXPAX_Z(v13); /*0x7b7576*/
      }
      break; /*0x7b7576*/
    }
    v7 = (char *)v6 - (char *)v4; /*0x7b7438*/
    if ( v6 != v4 ) /*0x7b743a*/
    {
      v8 = v5; /*0x7b743f*/
      v20 = v7 + 1; /*0x7b7443*/
      if ( v5 ) /*0x7b7447*/
        v20 += wcslen(v5); /*0x7b7458*/
      v9 = (wchar_t *)__2_YAPAXI_Z(4 * v20); /*0x7b7468*/
      v5 = v9; /*0x7b7470*/
      if ( v8 ) /*0x7b7474*/
        wcscpy(v9, v8); /*0x7b7478*/
      else
        *v9 = 0; /*0x7b7482*/
      wcsncat(v5, v4, v7); /*0x7b748a*/
      if ( v8 ) /*0x7b7494*/
        __3_YAXPAX_Z(v8); /*0x7b7497*/
    }
    if ( String ) /*0x7b74a5*/
    {
      v10 = v5; /*0x7b74a8*/
      v11 = wcslen(String) + 1; /*0x7b74b4*/
      if ( v5 ) /*0x7b74b7*/
        v11 += wcslen(v5); /*0x7b74c2*/
      v12 = (wchar_t *)__2_YAPAXI_Z(4 * v11); /*0x7b74cc*/
      v5 = v12; /*0x7b74d4*/
      if ( v10 ) /*0x7b74d8*/
        wcscpy(v12, v10); /*0x7b74dc*/
      else
        *v12 = 0; /*0x7b74e6*/
      wcscat(v5, String); /*0x7b74ed*/
      if ( v10 ) /*0x7b74f7*/
        __3_YAXPAX_Z(v10); /*0x7b74fa*/
    }
    v4 = &v22[wcslen(aP1)]; /*0x7b7513*/
    if ( !v4 ) /*0x7b7518*/
      break; /*0x7b7518*/
  }
  if ( !v5 ) /*0x7b7581*/
  {
    v3 = (void **)this; /*0x7b7583*/
LABEL_33:
    v16 = &g_TypeClass_DefaultString; /*0x7b7587*/
    goto LABEL_35; /*0x7b758c*/
  }
  v3 = (void **)this; /*0x7b758e*/
  v16 = v5; /*0x7b7592*/
LABEL_35:
  if ( *v3 ) /*0x7b7594*/
    __3_YAXPAX_Z(*v3); /*0x7b759b*/
  *v3 = 0; /*0x7b75a5*/
  if ( v16 ) /*0x7b75ab*/
    v17 = wcslen(v16) + 1; /*0x7b75b6*/
  else
    v17 = 1; /*0x7b75b9*/
  v18 = (unsigned short *)__2_YAPAXI_Z(2 * v17); /*0x7b75c1*/
  *v3 = v18; /*0x7b75c9*/
  *v18 = 0; /*0x7b75cd*/
  if ( v16 ) /*0x7b75d2*/
    wcscpy((wchar_t *)*v3, v16); /*0x7b75d8*/
  if ( v5 ) /*0x7b75e2*/
    __3_YAXPAX_Z(v5); /*0x7b75e5*/
  return 1; /*0x7b75ed*/

}
}
// 0x5DAC00
namespace gamemd {
int WideString::Hash(wchar_t * Source)
{

  unsigned int v1 = 0; // esi /*0x5dac0b*/
  int v4; // [esp+4h] [ebp-A4h] BYREF
  v4 = 0; /*0x5dac0f*/
  wchar_t String[80]; // [esp+8h] [ebp-A0h] BYREF
  wcscpy(String, (const wchar_t *)Source); /*0x5dac13*/
  _wcsupr(String); /*0x5dac1d*/
  if ( !wcslen(String) ) /*0x5dac27*/
    return v4; /*0x5dac68*/
  wchar_t *v2 = String; // edi /*0x5dac34*/
  do /*0x5dac59*/
  {
    ComputeHash((unsigned int *)(&v4), *v2); /*0x5dac41*/
    ++v1; /*0x5dac4a*/
    ++v2; /*0x5dac4c*/
  }
  while ( v1 < wcslen(String) ); /*0x5dac59*/
  return v4; /*0x5dac60*/
}
} // namespace gamemd

// 0x727D60
namespace gamemd {
int WideString::Trim(wchar_t * Source)
{

  unsigned __int16 v2; // ax
  WideString *v3; // esi
  int v4; // eax
  WideString *v5; // ecx

  if ( this ) /*0x727d66*/
  {
    v2 = *(unsigned short *)this; /*0x727d68*/
    v3 = this; /*0x727d6b*/
    if ( *(unsigned short *)this ) /*0x727d68*/
    {
      do /*0x727d82*/
      {
        if ( v2 > 0x20u ) /*0x727d76*/
          break; /*0x727d76*/
        v2 = *(unsigned short *)&v3[2]; /*0x727d78*/
        v3 += 2; /*0x727d7c*/
      }
      while ( v2 ); /*0x727d82*/
      if ( v3 != this ) /*0x727d86*/
        wcscpy((wchar_t *)this, (const wchar_t *)v3); /*0x727d8a*/
    }
    v4 = wcslen((const wchar_t *)this) - 1; /*0x727d9b*/
    if ( v4 >= 0 ) /*0x727d9c*/
    {
      v5 = this + 2 * v4; /*0x727d9e*/
      do /*0x727db8*/
      {
        if ( !*(unsigned short *)v3 ) /*0x727da1*/
          break; /*0x727da5*/
        if ( *(unsigned short *)v5 > 0x20u ) /*0x727dab*/
          break; /*0x727dab*/
        *(unsigned short *)v5 = 0; /*0x727dad*/
        --v4; /*0x727db2*/
        v5 -= 2; /*0x727db3*/
      }
      while ( v4 >= 0 ); /*0x727db8*/
    }
  }
  return (wchar_t *)this; /*0x727dbc*/

}
} // namespace gamemd

// 0x7B66D0
namespace gamemd {
int WideString::Assign(wchar_t *aP1)
{

  *(unsigned int *)this = 0; /*0x7b66da*/
  int v3; // eax
  if ( aP1 ) /*0x7b66e0*/
    v3 = wcslen(aP1) + 1; /*0x7b66eb*/
  else
    v3 = 1; /*0x7b66ee*/
  unsigned short *v4; // eax
  v4 = (unsigned short *)operator new(2 * v3); /*0x7b66f6*/
  *(unsigned int *)this = (unsigned int)(v4); /*0x7b66fe*/
  *v4 = 0; /*0x7b6702*/
  if ( aP1 ) /*0x7b6707*/
    wcscpy(aP1); /*0x7b670d*/
  return (int)((wchar_t **)this); /*0x7b6717*/
}
} // namespace gamemd

// 0x7B6720
namespace gamemd {
int WideString::AssignFromPtr(const wchar_t **a2, void *a2_1)
{

  *(unsigned int *)this = 0; /*0x7b6728*/
  if ( *a2 ) /*0x7b672e*/
  {
    int v3; // eax
    v3 = wcslen(*a2); /*0x7b6735*/
    wchar_t *v4; // eax
    v4 = (wchar_t *)operator new(2 * v3 + 2); /*0x7b673f*/
    *(unsigned int *)this = (unsigned int)(v4); /*0x7b6744*/
    wcscpy(v4, *a2); /*0x7b674a*/
  }
  return (int)((wchar_t **)this); /*0x7b6754*/
}
} // namespace gamemd

// 0x7B6880
namespace gamemd {
void ** WideString::Assign_Alt(wchar_t *String, void *a2)
{

  if ( *(unsigned int *)this ) /*0x7b6884*/
    operator delete((*(void **)this)); /*0x7b688b*/
  *(unsigned int *)this = 0; /*0x7b6897*/
  int v3; // eax
  if ( String ) /*0x7b689f*/
    v3 = wcslen(String) + 1; /*0x7b68aa*/
  else
    v3 = 1; /*0x7b68ad*/
  unsigned short *v4; // eax
  v4 = (unsigned short *)operator new(2 * v3); /*0x7b68b5*/
  *(unsigned int *)this = (unsigned int)(v4); /*0x7b68bd*/
  *v4 = 0; /*0x7b68c1*/
  if ( String ) /*0x7b68c6*/
    wcscpy(String); /*0x7b68cc*/
  return (void **)this; /*0x7b68d6*/
}
} // namespace gamemd

// 0x7B68E0
namespace gamemd {
int WideString::Reassign_Alt(const wchar_t **a2, void *a2_1)
{

  const wchar_t *v3; // eax
  v3 = *(const wchar_t **)this; /*0x7b68e8*/
  if ( (*(unsigned int *)this || *a2) && (!v3 || !*a2 || wcscmp(v3, *a2)) ) /*0x7b68ff*/
  {
    wchar_t *v4; // edi
    v4 = (wchar_t *)*a2; /*0x7b690b*/
    if ( !*a2 ) /*0x7b690b*/
      v4 = (wchar_t *)(&g_TypeClass_DefaultString); /*0x7b6911*/
    if ( *(unsigned int *)this ) /*0x7b6916*/
      operator delete((*(void **)this)); /*0x7b691d*/
    *(unsigned int *)this = 0; /*0x7b6927*/
    int v5; // eax
    if ( v4 ) /*0x7b692d*/
      v5 = wcslen(v4) + 1; /*0x7b6938*/
    else
      v5 = 1; /*0x7b693b*/
    unsigned short *v6; // eax
    v6 = (unsigned short *)operator new(2 * v5); /*0x7b6943*/
    *(unsigned int *)this = (unsigned int)(v6); /*0x7b694b*/
    *v6 = 0; /*0x7b694f*/
    if ( v4 ) /*0x7b6954*/
      wcscpy(v4); /*0x7b695a*/
  }
  return (int)((void **)this); /*0x7b6964*/
}
} // namespace gamemd

// 0x7B6AE0
namespace gamemd {
wchar_t ** WideString::Append2(wchar_t *aP1, void *a2)
{

  if ( aP1 ) /*0x7b6aeb*/
  {
    wchar_t *v3; // esi
    v3 = *(wchar_t **)this; /*0x7b6aed*/
    int v4; // edi
    v4 = wcslen(aP1) + 1; /*0x7b6afb*/
    if ( v3 ) /*0x7b6afe*/
      v4 += wcslen(v3); /*0x7b6b09*/
    wchar_t *v5; // eax
    v5 = (wchar_t *)operator new(4 * v4); /*0x7b6b13*/
    *(unsigned int *)this = (unsigned int)(v5); /*0x7b6b1b*/
    if ( v3 ) /*0x7b6b20*/
      wcscpy(v5, v3); /*0x7b6b24*/
    else
      *v5 = 0; /*0x7b6b2e*/
    wcscat(aP1); /*0x7b6b37*/
    if ( v3 ) /*0x7b6b41*/
      operator delete((v3)); /*0x7b6b44*/
  }
  return (wchar_t **)this; /*0x7b6b4c*/
}
} // namespace gamemd

// 0x7B6B60
namespace gamemd {
wchar_t ** WideString::Append(CampaignScore * aP1, void *a2_1)
{


  wchar_t *v2; // ebp
  v2 = (wchar_t *)*a2_1; /*0x7b6b67*/
  if ( *a2_1 || (v2 = &g_TypeClass_DefaultString) != 0 ) /*0x7b6b76*/
  {
    wchar_t *v4; // esi
    v4 = *(wchar_t **)aP1; /*0x7b6b78*/
    int v5; // edi
    v5 = wcslen(v2) + 1; /*0x7b6b86*/
    if ( v4 ) /*0x7b6b89*/
      v5 += wcslen(v4); /*0x7b6b94*/
    wchar_t *v6; // eax
    v6 = (wchar_t *)__2_YAPAXI_Z(4 * v5); /*0x7b6b9e*/
    *(unsigned int *)aP1 = (unsigned int)(v6); /*0x7b6ba6*/
    if ( v4 ) /*0x7b6bab*/
      wcscpy(v6, v4); /*0x7b6baf*/
    else
      *v6 = 0; /*0x7b6bb9*/
    wcscat(*(wchar_t **)aP1, v2); /*0x7b6bc2*/
    if ( v4 ) /*0x7b6bcc*/
      __3_YAXPAX_Z(v4); /*0x7b6bcf*/
  }
  return (wchar_t **)aP1; /*0x7b6bd7*/

}
} // namespace gamemd

// 0x7B6BE0
namespace gamemd {
wchar_t ** WideString::AssignConcat(wchar_t ** a2, wchar_t * String)
{

  wchar_t *v4 = 0; // esi /*0x7b6be4*/
  if ( *(unsigned int *)this ) /*0x7b6be6*/
  {
    int v5; // eax
    v5 = wcslen(*(const wchar_t **)this); /*0x7b6bed*/
    v4 = (wchar_t *)operator new(2 * v5 + 2); /*0x7b6bfe*/
    wcscpy(v4, *(const wchar_t **)this); /*0x7b6c02*/
  }
  if ( String ) /*0x7b6c12*/
  {
    wchar_t *v6 = v4; // ebx /*0x7b6c15*/
    int v7; // edi
    v7 = wcslen(String) + 1; /*0x7b6c21*/
    if ( v4 ) /*0x7b6c24*/
      v7 += wcslen(v4); /*0x7b6c2f*/
    wchar_t *v8; // eax
    v8 = (wchar_t *)operator new(4 * v7); /*0x7b6c39*/
    v4 = v8; /*0x7b6c41*/
    if ( v6 ) /*0x7b6c45*/
      wcscpy(v8, v6); /*0x7b6c49*/
    else
      *v8 = 0; /*0x7b6c53*/
    wcscat(v4, String); /*0x7b6c5a*/
    if ( v6 ) /*0x7b6c64*/
      operator delete((v6)); /*0x7b6c67*/
  }
  *a2 = 0; /*0x7b6c76*/
  if ( v4 ) /*0x7b6c7d*/
  {
    int v9; // eax
    v9 = wcslen(v4); /*0x7b6c80*/
    wchar_t *v10; // eax
    v10 = (wchar_t *)operator new(2 * v9 + 2); /*0x7b6c8a*/
    *a2 = v10; /*0x7b6c91*/
    wcscpy(v10, v4); /*0x7b6c93*/
    operator delete((v4)); /*0x7b6c99*/
  }
  return a2; /*0x7b6ca3*/
}
} // namespace gamemd

// 0x7B6CB0
namespace gamemd {
wchar_t ** WideString::ConcatAlloc(wchar_t ** a1, ObjectClass * aP2)
{

  wchar_t *v4 = 0; // esi /*0x7b6cb4*/
  if ( *(unsigned int *)this ) /*0x7b6cb6*/
  {
    int v5; // eax
    v5 = wcslen(*(const wchar_t **)this); /*0x7b6cbd*/
    v4 = (wchar_t *)operator new(2 * v5 + 2); /*0x7b6cce*/
    wcscpy(v4, *(const wchar_t **)this); /*0x7b6cd2*/
  }
  wchar_t *v6; // ebp
  v6 = (wchar_t *)*aP2; /*0x7b6ce0*/
  if ( *aP2 || (v6 = &g_TypeClass_DefaultString) != 0 ) /*0x7b6ced*/
  {
    wchar_t *v7 = v4; // ebx /*0x7b6cf0*/
    int v8; // edi
    v8 = wcslen(v6) + 1; /*0x7b6cfc*/
    if ( v4 ) /*0x7b6cff*/
      v8 += wcslen(v4); /*0x7b6d0a*/
    wchar_t *v9; // eax
    v9 = (wchar_t *)operator new(4 * v8); /*0x7b6d14*/
    v4 = v9; /*0x7b6d1c*/
    if ( v7 ) /*0x7b6d20*/
      wcscpy(v9, v7); /*0x7b6d24*/
    else
      *v9 = 0; /*0x7b6d2e*/
    wcscat(v4, v6); /*0x7b6d35*/
    if ( v7 ) /*0x7b6d3f*/
      operator delete((v7)); /*0x7b6d42*/
  }
  *a1 = 0; /*0x7b6d51*/
  if ( v4 ) /*0x7b6d58*/
  {
    int v10; // eax
    v10 = wcslen(v4); /*0x7b6d5b*/
    wchar_t *v11; // eax
    v11 = (wchar_t *)operator new(2 * v10 + 2); /*0x7b6d65*/
    *a1 = v11; /*0x7b6d6c*/
    wcscpy(v11, v4); /*0x7b6d6e*/
    operator delete((v4)); /*0x7b6d74*/
  }
  return a1; /*0x7b6d7e*/
}
} // namespace gamemd

// 0x7B6D90
namespace gamemd {
short WideString::Erase(int a2, int a3_2)
{

  int v4; // eax
  v4 = wcslen(*(const wchar_t **)a3_2); /*0x7b6d98*/
  int v5 = a3_2; // esi /*0x7b6d9d*/
  int v6 = a3_2; // ebx /*0x7b6da1*/
  if ( a3_2 + a3_2 > v4 ) /*0x7b6dad*/
    v5 = v4 - a3_2; /*0x7b6db1*/
  if ( v5 < 0 ) /*0x7b6db5*/
  {
    v6 = v5 + a3_2; /*0x7b6db7*/
    v5 = 0; /*0x7b6db9*/
  }
  if ( v6 <= 0 ) /*0x7b6dbd*/
    return 0; /*0x7b6dc1*/
  wchar_t *v8; // ebp
  v8 = (wchar_t *)operator new(2 * (v4 + 0x7FFFFFFF * v6) + 2); /*0x7b6de0*/
  *(unsigned short *)(*&a3_2->ptr_8 * v5) = 0; /*0x7b6de2*/
  int v9; // esi
  v9 = 2 * (v6 + v5); /*0x7b6dec*/
  *(unsigned short *)(v9 + *(unsigned int *)a3_2 - 2) = 0; /*0x7b6dee*/
  wcscpy(v8, *(const wchar_t **)a3_2); /*0x7b6df9*/
  wcscat(v8, (const wchar_t *)(*(unsigned int *)a3_2 + v9)); /*0x7b6e02*/
  operator delete((*(void **)a3_2)); /*0x7b6e0a*/
  *(unsigned int *)a3_2 = (unsigned int)(v8); /*0x7b6e12*/
  return 1; /*0x7b6dbf*/
}
} // namespace gamemd

// 0x7B6E20
namespace gamemd {
char WideString::RemoveChar(wchar_t a2)
{

  char v3 = 0; // bl /*0x7b6e24*/
  if ( !*(unsigned int *)this ) /*0x7b6e26*/
    return 0; /*0x7b6e2d*/
  int v5; // edi
  v5 = wcslen(*(const wchar_t **)this); /*0x7b6e3f*/
  wchar_t *v6; // eax
  v6 = (wchar_t *)(wcschr(*(const wchar_t **)this, a2)); /*0x7b6e45*/
  if ( v6 ) /*0x7b6e4f*/
  {
    v3 = 1; /*0x7b6e51*/
    int v7 = 2 * v5; // edi /*0x7b6e53*/
    do /*0x7b6e88*/
    {
      memcpy(v6, v6 + 1, v7 - (((int)v6 - *(unsigned int *)this) >> 1) - 2); /*0x7b6e6a*/
      v7 -= 2; /*0x7b6e71*/
      *(unsigned short *)(v7 + *(unsigned int *)this) = 0; /*0x7b6e75*/
      v6 = (wchar_t *)(wcschr(*(const wchar_t **)this, a2)); /*0x7b6e7e*/
    }
    while ( v6 ); /*0x7b6e88*/
    int v8; // eax
    v8 = wcslen(*(const wchar_t **)this); /*0x7b6e8d*/
    wchar_t *v9; // edi
    v9 = (wchar_t *)operator new(2 * v8 + 2); /*0x7b6e9c*/
    wcscpy(v9, *(const wchar_t **)this); /*0x7b6ea2*/
    operator delete((*(void **)this)); /*0x7b6eaa*/
    *(unsigned int *)this = (unsigned int)(v9); /*0x7b6eb2*/
  }
  return v3; /*0x7b6e2c*/
}
} // namespace gamemd

// 0x7B7100
namespace gamemd {
int WideString::GetOrEmpty()
{


  wchar_t *result; // eax
  result = *(wchar_t **)this; /*0x7b7100*/
  if ( !*(unsigned int *)this ) /*0x7b7100*/
    return (int)(&g_TypeClass_DefaultString); /*0x7b7106*/
  return (int)(result); /*0x7b710b*/

}
} // namespace gamemd

// 0x7B7140
namespace gamemd {
int WideString::GetOrEmpty_Alt(void *a1)
{


  wchar_t *result; // eax
  result = *(wchar_t **)this; /*0x7b7140*/
  if ( !*(unsigned int *)this ) /*0x7b7140*/
    return &g_TypeClass_DefaultString; /*0x7b7146*/
  return result; /*0x7b714b*/

}
} // namespace gamemd

// 0x7B7180
namespace gamemd {
int WideString::GetChar(size_t aP1)
{

  int result; // eax
  result = wcslen(*(const wchar_t **)this); /*0x7b7186*/
  if ( aP1 >= result ) /*0x7b7194*/
    return 0; /*0x7b71a0*/
  (*((unsigned short *)&(result))) = *(unsigned short *)(((unsigned int)(this->u32_8)) * aP1); /*0x7b7199*/
  return result; /*0x7b7198*/
}
} // namespace gamemd

// 0x7B71B0
namespace gamemd {
int WideString::Length(void *a1)
{


  const wchar_t *result; // eax
  result = *(const wchar_t **)this; /*0x7b71b0*/
  if ( *(unsigned int *)this ) /*0x7b71b0*/
    return (const wchar_t *)wcslen(*(const wchar_t **)this); /*0x7b71b8*/
  return result; /*0x7b71b6*/

}
} // namespace gamemd

// 0x7B7600
namespace gamemd {
short WideString::Reassign(wchar_t * String)
{

  int v3; // eax
  unsigned short *v4; // eax

  if ( *(unsigned int *)this ) /*0x7b7604*/
    __3_YAXPAX_Z(*(void **)this); /*0x7b760b*/
  *(unsigned int *)this = 0; /*0x7b7617*/
  if ( String ) /*0x7b761f*/
    v3 = wcslen(String) + 1; /*0x7b762a*/
  else
    v3 = 1; /*0x7b762d*/
  v4 = (unsigned short *)__2_YAPAXI_Z(2 * v3); /*0x7b7635*/
  *(unsigned int *)this = v4; /*0x7b763d*/
  *v4 = 0; /*0x7b7641*/
  if ( String ) /*0x7b7646*/
    wcscpy(*(wchar_t **)this, String); /*0x7b764c*/
  return 1; /*0x7b7654*/

}
} // namespace gamemd

// 0x7B7D90
namespace gamemd {
char WideString::IsASCII(void *a1)
{
  int result; // eax
  int v3; // ecx
  unsigned short *v4; // edx

  result = *(unsigned int *)this; /*0x7b7d93*/
  if ( *(unsigned int *)this && (result = wcslen(*(const wchar_t **)this), v3 = 0, result > 0) ) /*0x7b7da6*/
  {
    v4 = *(unsigned short **)this; /*0x7b7da8*/
    while ( *v4 < 0x100u ) /*0x7b7daf*/
    {
      ++v3; /*0x7b7db1*/
      ++v4; /*0x7b7db2*/
      if ( v3 >= result ) /*0x7b7db7*/
        goto LABEL_6; /*0x7b7db7*/
    }
    (*((unsigned char *)&(result))) = 0; /*0x7b7dbd*/
  }
  else
  {
    LABEL_6:
    (*((unsigned char *)&(result))) = 1; /*0x7b7db9*/
  }
  return result; /*0x7b7dbb*/
}
} // namespace gamemd
