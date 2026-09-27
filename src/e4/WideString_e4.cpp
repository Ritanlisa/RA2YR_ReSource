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

// 0x5D4B20
namespace gamemd {
int WideString::WordWrap(wchar_t * a0, CampaignScore * aP1, int a3, CampaignScore * aP3, int a5)
{
  wchar_t *v6; // ebp
  signed int v7; // eax
  unsigned int v8;
  CampaignScore * v9;
  wchar_t *v10; // esi
  wchar_t *v11; // edx

  if ( a3 <= 0 ) /*0x5d4b27*/
    return 0; /*0x5d4b2c*/
  v6 = aP1; /*0x5d4b31*/
  v7 = wcslen(aP1); /*0x5d4b37*/
  v8 = aP3; /*0x5d4b3c*/
  if ( aP3 > v7 ) /*0x5d4b49*/
    v8 = v7; /*0x5d4b4b*/
  if ( a5 ) /*0x5d4b53*/
  {
    v9 = (gamemd::CampaignScore *)(v8);
    if ( v8 >= a3 ) /*0x5d4b7b*/
    {
      v11 = (wchar_t *)(&aP1[v8 - 1]);
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
    v9 = (gamemd::CampaignScore *)(a3);
    if ( a3 <= v8 ) /*0x5d4b59*/
    {
      v10 = (wchar_t *)(&aP1[a3 - 1]);
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
  LABEL_17: v9 = (gamemd::CampaignScore *)(a3);
  LABEL_18:
  if ( a0 ) /*0x5d4b9f*/
  {
    qmemcpy(a0, aP1, 2 * v9); /*0x5d4baf*/
    v6 = aP1; /*0x5d4bb3*/
    a0[v9] = 0; /*0x5d4bbc*/
  }
  memcpy(v6, &v6[v9], 2 * (v7 + 0x7FFFFFFF * v9) + 2); /*0x5d4bdc*/
  return v9; /*0x5d4b2b*/
}
}
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
  size_t v11; // edi
  wchar_t *v12; // eax
  wchar_t *v13; // ebp
  size_t v14; // ebx
  wchar_t *v15; // eax
  const wchar_t *v16; // edi
  size_t v17; // eax
  unsigned short *v18; // eax
  size_t v20; // [esp+Ch] [ebp-Ch]
  wchar_t *v22; // [esp+14h] [ebp-4h]

  v3 = (void **)(this);
  v4 = (const wchar_t *)*this; /*0x7b73f8*/
  v5 = 0; /*0x7b73fa*/
  if ( !*this ) /*0x7b73f8*/
  {
    v4 = (const wchar_t *)(&g_TypeClass_DefaultString);
    if ( !&g_TypeClass_DefaultString ) /*0x7b740b*/
      goto LABEL_33; /*0x7b740b*/
  }
  while ( *v4 ) /*0x7b7416*/
  {
    v6 = (wchar_t *)(wcsstr(v4, aP1));
    v22 = v6; /*0x7b742a*/
    if ( !v6 ) /*0x7b7430*/
    {
      if ( v4 ) /*0x7b7521*/
      {
        v13 = v5; /*0x7b7524*/
        v14 = wcslen(v4) + 1; /*0x7b7530*/
        if ( v5 ) /*0x7b7533*/
          v14 += wcslen(v5); /*0x7b753e*/
        v15 = (wchar_t *)new wchar_t; /*0x7b7548*/
        v5 = v15; /*0x7b7550*/
        if ( v13 ) /*0x7b7554*/
          wcscpy(v15, v13); /*0x7b7558*/
        else
          *v15 = 0; /*0x7b7562*/
        wcscat(v5, v4); /*0x7b7569*/
        if ( v13 ) /*0x7b7573*/
          RA2_OPDEL(v13); /*0x7b7576*/
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
      v9 = (wchar_t *)new wchar_t; /*0x7b7468*/
      v5 = v9; /*0x7b7470*/
      if ( v8 ) /*0x7b7474*/
        wcscpy(v9, v8); /*0x7b7478*/
      else
        *v9 = 0; /*0x7b7482*/
      wcsncat(v5, v4, v7); /*0x7b748a*/
      if ( v8 ) /*0x7b7494*/
        RA2_OPDEL(v8); /*0x7b7497*/
    }
    if ( String ) /*0x7b74a5*/
    {
      v10 = v5; /*0x7b74a8*/
      v11 = wcslen(String) + 1; /*0x7b74b4*/
      if ( v5 ) /*0x7b74b7*/
        v11 += wcslen(v5); /*0x7b74c2*/
      v12 = (wchar_t *)new wchar_t; /*0x7b74cc*/
      v5 = v12; /*0x7b74d4*/
      if ( v10 ) /*0x7b74d8*/
        wcscpy(v12, v10); /*0x7b74dc*/
      else
        *v12 = 0; /*0x7b74e6*/
      wcscat(v5, String); /*0x7b74ed*/
      if ( v10 ) /*0x7b74f7*/
        RA2_OPDEL(v10); /*0x7b74fa*/
    }
    v4 = &v22[wcslen(aP1)]; /*0x7b7513*/
    if ( !v4 ) /*0x7b7518*/
      break; /*0x7b7518*/
  }
  if ( !v5 ) /*0x7b7581*/
  {
    v3 = (const wchar_t *)(this);
  LABEL_33:
    v16 = &g_TypeClass_DefaultString; /*0x7b7587*/
    goto LABEL_35; /*0x7b758c*/
  }
  v3 = (unsigned short *)(this);
  v16 = v5; /*0x7b7592*/
  LABEL_35:
  if ( *v3 ) /*0x7b7594*/
    RA2_OPDEL(*v3); /*0x7b759b*/
  *v3 = 0; /*0x7b75a5*/
  if ( v16 ) /*0x7b75ab*/
    v17 = wcslen(v16) + 1; /*0x7b75b6*/
  else
    v17 = 1; /*0x7b75b9*/
  v18 = operator new(2 * v17); /*0x7b75c1*/
  *v3 = v18; /*0x7b75c9*/
  *v18 = 0; /*0x7b75cd*/
  if ( v16 ) /*0x7b75d2*/
    wcscpy((wchar_t *)*v3, v16); /*0x7b75d8*/
  if ( v5 ) /*0x7b75e2*/
    RA2_OPDEL(v5); /*0x7b75e5*/
  return 1; /*0x7b75ed*/
}
}
// 0x5DAC00
namespace gamemd {
int WideString::Hash()
{
  size_t v1; // esi
  wchar_t *v2; // edi
  int v4; // [esp+4h] [ebp-A4h] BYREF
  wchar_t String[80]; // [esp+8h] [ebp-A0h] BYREF

  v1 = 0; /*0x5dac0b*/
  v4 = 0; /*0x5dac0f*/
  wcscpy(String, Source); /*0x5dac13*/
  _wcsupr(String); /*0x5dac1d*/
  if ( !wcslen(String) ) /*0x5dac27*/
    return v4; /*0x5dac68*/
  v2 = String; /*0x5dac34*/
  do /*0x5dac59*/
  {
    ComputeHash(&v4, *v2); /*0x5dac41*/
    ++v1; /*0x5dac4a*/
    ++v2; /*0x5dac4c*/
  }
  while ( v1 < wcslen(String) ); /*0x5dac59*/
  return v4; /*0x5dac60*/
}
} // namespace gamemd

// 0x727D60
namespace gamemd {
wchar_t * WideString::Trim()
{
  wchar_t v2; // ax
  unsigned int v3;
  signed int v4; // eax
  wchar_t *v5; // ecx

  if ( Source ) /*0x727d66*/
  {
    v2 = *Source; /*0x727d68*/
    v3 = Source; /*0x727d6b*/
    if ( *Source ) /*0x727d68*/
    {
      do /*0x727d82*/
      {
        if ( v2 > 0x20u ) /*0x727d76*/
          break; /*0x727d76*/
        v2 = v3[1]; /*0x727d78*/
        ++v3; /*0x727d7c*/
      }
      while ( v2 ); /*0x727d82*/
      if ( v3 != Source ) /*0x727d86*/
        wcscpy(Source, v3); /*0x727d8a*/
    }
    v4 = wcslen(Source) - 1; /*0x727d9b*/
    if ( v4 >= 0 ) /*0x727d9c*/
    {
      v5 = (wchar_t *)(Source + v4);
      do /*0x727db8*/
      {
        if ( !*v3 ) /*0x727da1*/
          break; /*0x727da5*/
        if ( *v5 > 0x20u ) /*0x727dab*/
          break; /*0x727dab*/
        *v5 = 0; /*0x727dad*/
        --v4; /*0x727db2*/
        --v5; /*0x727db3*/
      }
      while ( v4 >= 0 ); /*0x727db8*/
    }
  }
  return (wchar_t *)(Source);
}
} // namespace gamemd

// 0x7B66D0
namespace gamemd {
wchar_t ** WideString::Assign(CampaignScore * aP1)
{
  size_t v3; // eax
  wchar_t *v4; // eax

  *(unsigned int *)this = 0; /*0x7b66da*/
  if ( aP1 ) /*0x7b66e0*/
    v3 = wcslen(aP1) + 1; /*0x7b66eb*/
  else
    v3 = 1; /*0x7b66ee*/
  v4 = (wchar_t *)new wchar_t; /*0x7b66f6*/
  *this = v4; /*0x7b66fe*/
  *v4 = 0; /*0x7b6702*/
  if ( aP1 ) /*0x7b6707*/
    wcscpy(aP1); /*0x7b670d*/
  return this; /*0x7b6717*/
}
} // namespace gamemd

// 0x7B6720
namespace gamemd {
wchar_t ** WideString::AssignFromPtr(const wchar_t ** a2)
{
  size_t v3; // eax
  wchar_t *v4; // eax

  *(unsigned int *)this = 0; /*0x7b6728*/
  if ( *a2 ) /*0x7b672e*/
  {
    v3 = wcslen(*a2); /*0x7b6735*/
    v4 = (wchar_t *)new wchar_t; /*0x7b673f*/
    *this = v4; /*0x7b6744*/
    wcscpy(v4, *a2); /*0x7b674a*/
  }
  return (wchar_t **)(this);
}
} // namespace gamemd

// 0x7B6880
namespace gamemd {
void ** WideString::Assign_Alt(wchar_t * String)
{
  size_t v3; // eax
  unsigned short *v4; // eax

  if ( *this ) /*0x7b6884*/
    RA2_OPDEL(); /*0x7b688b*/
  *(unsigned int *)this = 0; /*0x7b6897*/
  if ( String ) /*0x7b689f*/
    v3 = wcslen(String) + 1; /*0x7b68aa*/
  else
    v3 = 1; /*0x7b68ad*/
  v4 = operator new(2 * v3); /*0x7b68b5*/
  *this = v4; /*0x7b68bd*/
  *v4 = 0; /*0x7b68c1*/
  if ( String ) /*0x7b68c6*/
    wcscpy(String); /*0x7b68cc*/
  return this; /*0x7b68d6*/
}
} // namespace gamemd

// 0x7B68E0
namespace gamemd {
void ** WideString::Reassign_Alt(const wchar_t ** a2)
{
  const wchar_t *v3; // eax
  wchar_t *v4; // edi
  size_t v5; // eax
  unsigned short *v6; // eax

  v3 = (const wchar_t *)*this; /*0x7b68e8*/
  if ( (*this || *a2) && (!v3 || !*a2 || wcscmp(v3, *a2)) ) /*0x7b68ff*/
  {
    v4 = (unsigned short *)((wchar_t *)*a2);
    if ( !*a2 ) /*0x7b690b*/
      v4 = &g_TypeClass_DefaultString; /*0x7b6911*/
    if ( *this ) /*0x7b6916*/
      RA2_OPDEL(); /*0x7b691d*/
    *(unsigned int *)this = 0; /*0x7b6927*/
    if ( v4 ) /*0x7b692d*/
      v5 = wcslen(v4) + 1; /*0x7b6938*/
    else
      v5 = 1; /*0x7b693b*/
    v6 = operator new(2 * v5); /*0x7b6943*/
    *this = v6; /*0x7b694b*/
    *v6 = 0; /*0x7b694f*/
    if ( v4 ) /*0x7b6954*/
      wcscpy(v4); /*0x7b695a*/
  }
  return (void **)(this);
}
} // namespace gamemd

// 0x7B6AE0
namespace gamemd {
wchar_t ** WideString::Append2(CampaignScore * aP1)
{
  wchar_t *v3; // esi
  size_t v4; // edi
  wchar_t *v5; // eax

  if ( aP1 ) /*0x7b6aeb*/
  {
    v3 = (wchar_t *)(*this);
    v4 = wcslen(aP1) + 1; /*0x7b6afb*/
    if ( v3 ) /*0x7b6afe*/
      v4 += wcslen(v3); /*0x7b6b09*/
    v5 = (wchar_t *)new wchar_t; /*0x7b6b13*/
    *this = v5; /*0x7b6b1b*/
    if ( v3 ) /*0x7b6b20*/
      wcscpy(v5, v3); /*0x7b6b24*/
    else
      *v5 = 0; /*0x7b6b2e*/
    wcscat(aP1); /*0x7b6b37*/
    if ( v3 ) /*0x7b6b41*/
      RA2_OPDEL(v3); /*0x7b6b44*/
  }
  return (wchar_t **)(this);
}
} // namespace gamemd

// 0x7B6B60
namespace gamemd {
wchar_t ** WideString::Append(CampaignScore * aP1)
{
  const wchar_t *v2; // ebp
  wchar_t *v4; // esi
  size_t v5; // edi
  wchar_t *v6; // eax

  v2 = (const wchar_t *)(*aP1);
  if ( *aP1 || (v2 = &g_TypeClass_DefaultString) != 0 ) /*0x7b6b76*/
  {
    v4 = (wchar_t *)(*this);
    v5 = wcslen(v2) + 1; /*0x7b6b86*/
    if ( v4 ) /*0x7b6b89*/
      v5 += wcslen(v4); /*0x7b6b94*/
    v6 = (wchar_t *)new wchar_t; /*0x7b6b9e*/
    *this = v6; /*0x7b6ba6*/
    if ( v4 ) /*0x7b6bab*/
      wcscpy(v6, v4); /*0x7b6baf*/
    else
      *v6 = 0; /*0x7b6bb9*/
    wcscat(v2); /*0x7b6bc2*/
    if ( v4 ) /*0x7b6bcc*/
      RA2_OPDEL(v4); /*0x7b6bcf*/
  }
  return (wchar_t **)(this);
}
} // namespace gamemd

// 0x7B6BE0
namespace gamemd {
wchar_t ** WideString::AssignConcat(wchar_t ** a2, wchar_t * String)
{
  wchar_t *v4; // esi
  size_t v5; // eax
  wchar_t *v6; // ebx
  size_t v7; // edi
  wchar_t *v8; // eax
  size_t v9; // eax
  wchar_t *v10; // eax

  v4 = 0; /*0x7b6be4*/
  if ( *this ) /*0x7b6be6*/
  {
    v5 = wcslen(*this); /*0x7b6bed*/
    v4 = (wchar_t *)new wchar_t; /*0x7b6bfe*/
    wcscpy(v4, *this); /*0x7b6c02*/
  }
  if ( String ) /*0x7b6c12*/
  {
    v6 = v4; /*0x7b6c15*/
    v7 = wcslen(String) + 1; /*0x7b6c21*/
    if ( v4 ) /*0x7b6c24*/
      v7 += wcslen(v4); /*0x7b6c2f*/
    v8 = (wchar_t *)new wchar_t; /*0x7b6c39*/
    v4 = v8; /*0x7b6c41*/
    if ( v6 ) /*0x7b6c45*/
      wcscpy(v8, v6); /*0x7b6c49*/
    else
      *v8 = 0; /*0x7b6c53*/
    wcscat(v4, String); /*0x7b6c5a*/
    if ( v6 ) /*0x7b6c64*/
      RA2_OPDEL(v6); /*0x7b6c67*/
  }
  *a2 = 0; /*0x7b6c76*/
  if ( v4 ) /*0x7b6c7d*/
  {
    v9 = wcslen(v4); /*0x7b6c80*/
    v10 = (wchar_t *)new wchar_t; /*0x7b6c8a*/
    *a2 = v10; /*0x7b6c91*/
    wcscpy(v10, v4); /*0x7b6c93*/
    RA2_OPDEL(v4); /*0x7b6c99*/
  }
  return a2; /*0x7b6ca3*/
}
} // namespace gamemd

// 0x7B6CB0
namespace gamemd {
wchar_t ** WideString::ConcatAlloc(wchar_t ** a1, ObjectClass * aP2)
{
  wchar_t *v4; // esi
  size_t v5; // eax
  const wchar_t *v6; // ebp
  wchar_t *v7; // ebx
  size_t v8; // edi
  wchar_t *v9; // eax
  size_t v10; // eax
  wchar_t *v11; // eax

  v4 = 0; /*0x7b6cb4*/
  if ( *this ) /*0x7b6cb6*/
  {
    v5 = wcslen(*this); /*0x7b6cbd*/
    v4 = (wchar_t *)new wchar_t; /*0x7b6cce*/
    wcscpy(v4, *this); /*0x7b6cd2*/
  }
  v6 = (const wchar_t *)(*aP2);
  if ( *aP2 || (v6 = &g_TypeClass_DefaultString) != 0 ) /*0x7b6ced*/
  {
    v7 = v4; /*0x7b6cf0*/
    v8 = wcslen(v6) + 1; /*0x7b6cfc*/
    if ( v4 ) /*0x7b6cff*/
      v8 += wcslen(v4); /*0x7b6d0a*/
    v9 = (wchar_t *)new wchar_t; /*0x7b6d14*/
    v4 = v9; /*0x7b6d1c*/
    if ( v7 ) /*0x7b6d20*/
      wcscpy(v9, v7); /*0x7b6d24*/
    else
      *v9 = 0; /*0x7b6d2e*/
    wcscat(v4, v6); /*0x7b6d35*/
    if ( v7 ) /*0x7b6d3f*/
      RA2_OPDEL(v7); /*0x7b6d42*/
  }
  *a1 = 0; /*0x7b6d51*/
  if ( v4 ) /*0x7b6d58*/
  {
    v10 = wcslen(v4); /*0x7b6d5b*/
    v11 = (wchar_t *)new wchar_t; /*0x7b6d65*/
    *a1 = v11; /*0x7b6d6c*/
    wcscpy(v11, v4); /*0x7b6d6e*/
    RA2_OPDEL(v4); /*0x7b6d74*/
  }
  return a1; /*0x7b6d7e*/
}
} // namespace gamemd

// 0x7B6D90
namespace gamemd {
short WideString::Erase(int a2, int a3)
{
  signed int v4; // eax
  int v5; // esi
  int v6; // ebx
  wchar_t *v8; // ebp
  int v9; // esi

  v4 = wcslen(*this); /*0x7b6d98*/
  v5 = a2; /*0x7b6d9d*/
  v6 = a3; /*0x7b6da1*/
  if ( a2 + a3 > v4 ) /*0x7b6dad*/
    v5 = v4 - a3; /*0x7b6db1*/
  if ( v5 < 0 ) /*0x7b6db5*/
  {
    v6 = v5 + a3; /*0x7b6db7*/
    v5 = 0; /*0x7b6db9*/
  }
  if ( v6 <= 0 ) /*0x7b6dbd*/
    return 0; /*0x7b6dc1*/
  v8 = (wchar_t *)new wchar_t; /*0x7b6de0*/
  (*this)[v5] = 0; /*0x7b6de2*/
  v9 = v6 + v5; /*0x7b6dec*/
  (*this)[v9 - 1] = 0; /*0x7b6dee*/
  wcscpy(v8, *this); /*0x7b6df9*/
  wcscat(v8, &(*this)[v9]); /*0x7b6e02*/
  RA2_OPDEL(); /*0x7b6e0a*/
  *this = v8; /*0x7b6e12*/
  return 1; /*0x7b6dbf*/
}
} // namespace gamemd

// 0x7B6E20
namespace gamemd {
char WideString::RemoveChar(wchar_t a2)
{
  char v3; // bl
  size_t v5; // edi
  wchar_t *v6; // eax
  int v7; // edi
  size_t v8; // eax
  wchar_t *v9; // edi

  v3 = (wchar_t *)(0);
  if ( !*this ) /*0x7b6e26*/
    return 0; /*0x7b6e2d*/
  v5 = wcslen(*this); /*0x7b6e3f*/
  v6 = wcschr(*this, a2); /*0x7b6e45*/
  if ( v6 ) /*0x7b6e4f*/
  {
    v3 = 1; /*0x7b6e51*/
    v7 = v5; /*0x7b6e53*/
    do /*0x7b6e88*/
    {
      memcpy(v6, v6 + 1, v7 * 2 - (v6 - *this) - 2); /*0x7b6e6a*/
      (*this)[--v7] = 0; /*0x7b6e75*/
      v6 = wcschr(*this, a2); /*0x7b6e7e*/
    }
    while ( v6 ); /*0x7b6e88*/
    v8 = wcslen(*this); /*0x7b6e8d*/
    v9 = (wchar_t *)new wchar_t; /*0x7b6e9c*/
    wcscpy(v9, *this); /*0x7b6ea2*/
    RA2_OPDEL(); /*0x7b6eaa*/
    *this = v9; /*0x7b6eb2*/
  }
  return v3; /*0x7b6e2c*/
}
} // namespace gamemd

// 0x7B7100
namespace gamemd {
CampaignScore * WideString::GetOrEmpty()
{
  wchar_t *result; // eax

  result = *this; /*0x7b7100*/
  if ( !*this ) /*0x7b7100*/
    return &g_TypeClass_DefaultString; /*0x7b7106*/
  return result; /*0x7b710b*/
}
} // namespace gamemd

// 0x7B7140
namespace gamemd {
CampaignScore * WideString::GetOrEmpty_Alt()
{
  wchar_t *result; // eax

  result = *this; /*0x7b7140*/
  if ( !*this ) /*0x7b7140*/
    return &g_TypeClass_DefaultString; /*0x7b7146*/
  return result; /*0x7b714b*/
}
} // namespace gamemd

// 0x7B7180
namespace gamemd {
wchar_t WideString::GetChar(ObjectClass * aP1)
{
  if ( aP1 >= wcslen(*this) ) /*0x7b7194*/
    return 0; /*0x7b71a0*/
  else
    return (*this)[aP1]; /*0x7b7199*/
}
} // namespace gamemd

// 0x7B71B0
namespace gamemd {
const wchar_t * WideString::Length()
{
  const wchar_t *result; // eax

  result = *this; /*0x7b71b0*/
  if ( *this ) /*0x7b71b0*/
    return 0; /*0x7b71b8*/
  return result; /*0x7b71b6*/
}
} // namespace gamemd

// 0x7B7600
namespace gamemd {
short WideString::Reassign(wchar_t * String)
{
  size_t v3; // eax
  unsigned short *v4; // eax

  if ( *this ) /*0x7b7604*/
    RA2_OPDEL(); /*0x7b760b*/
  *this = 0; /*0x7b7617*/
  if ( String ) /*0x7b761f*/
    v3 = wcslen(String) + 1; /*0x7b762a*/
  else
    v3 = 1; /*0x7b762d*/
  v4 = operator new(2 * v3); /*0x7b7635*/
  *this = v4; /*0x7b763d*/
  *v4 = 0; /*0x7b7641*/
  if ( String ) /*0x7b7646*/
    wcscpy(String); /*0x7b764c*/
  return 1; /*0x7b7654*/
}
} // namespace gamemd

// 0x7B7D90
namespace gamemd {
char WideString::IsASCII()
{
  signed int v2; // eax
  int v3; // ecx
  const wchar_t *i; // edx

  if ( !*this ) /*0x7b7d93*/
    return 1; /*0x7b7d93*/
  v2 = wcslen(*this); /*0x7b7d9a*/
  v3 = 0; /*0x7b7da2*/
  if ( v2 <= 0 ) /*0x7b7da6*/
    return 1; /*0x7b7db9*/
  for ( i = *this; *i < 0x100u; ++i ) /*0x7b7da8*/
  {
    if ( ++v3 >= v2 ) /*0x7b7db7*/
      return 1; /*0x7b7db7*/
  }
  return 0; /*0x7b7dbb*/
}
} // namespace gamemd
