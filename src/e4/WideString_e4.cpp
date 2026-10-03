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
namespace gamemd {
int WideString::WordWrap(wchar_t * a0, CampaignScore * aP1, int a3, CampaignScore * aP3, int a5)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5D4B20)
}
}
// 0x7B73F0
namespace gamemd {
AbstractClass * * WideString::Replace(CampaignScore * aP1, wchar_t * String)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7B73F0)
}
}
// 0x5DAC00
namespace gamemd {
int WideString::Hash(wchar_t * Source)
{

  unsigned int v1; // esi
  wchar_t *v2; // edi
  int v4; // [esp+4h] [ebp-A4h] BYREF
  wchar_t String[80]; // [esp+8h] [ebp-A0h] BYREF

  v1 = 0; /*0x5dac0b*/
  v4 = 0; /*0x5dac0f*/
  wcscpy(String, (const wchar_t *)Source); /*0x5dac13*/
  _wcsupr(String); /*0x5dac1d*/
  if ( !wcslen(String) ) /*0x5dac27*/
    return v4; /*0x5dac68*/
  v2 = String; /*0x5dac34*/
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

  WideString * v2;
  WideString *v3; // esi
  int v4; // eax
  WideString *v5; // ecx

  if ( Source ) /*0x727d66*/
  {
    v2 = (gamemd::WideString *)(*(unsigned short *)Source);
    v3 = (gamemd::WideString *)(Source);
    if ( *(unsigned short *)Source ) /*0x727d68*/
    {
      do /*0x727d82*/
      {
        if ( v2 > (gamemd::WideString *)(0x20u) ) /*0x727d76*/
          break; /*0x727d76*/
        v2 = (gamemd::WideString *)(*(unsigned short *)&v3[2]); /*0x727d78*/
        v3 += 2; /*0x727d7c*/
      }
      while ( v2 ); /*0x727d82*/
      if ( v3 != (gamemd::WideString *)(Source) ) /*0x727d86*/
        wcscpy((wchar_t *)Source, (const wchar_t *)v3); /*0x727d8a*/
    }
    v4 = wcslen((const wchar_t *)Source) - 1; /*0x727d9b*/
    if ( v4 >= 0 ) /*0x727d9c*/
    {
      v5 = (gamemd::WideString *)(Source + 2 * v4);
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
  return (int)((wchar_t *)Source); /*0x727dbc*/

}
} // namespace gamemd

// 0x7B66D0
namespace gamemd {
int WideString::Assign(wchar_t *aP1)
{

  int v3; // eax
  unsigned short *v4; // eax

  *(unsigned int *)this = 0; /*0x7b66da*/
  if ( aP1 ) /*0x7b66e0*/
    v3 = wcslen(aP1) + 1; /*0x7b66eb*/
  else
    v3 = 1; /*0x7b66ee*/
  v4 = (unsigned short *)__2_YAPAXI_Z(2 * v3); /*0x7b66f6*/
  *(unsigned int *)this = (unsigned int)(v4); /*0x7b66fe*/
  *v4 = 0; /*0x7b6702*/
  if ( aP1 ) /*0x7b6707*/
    wcscpy(*(wchar_t **)this, aP1); /*0x7b670d*/
  return (int)((wchar_t **)this); /*0x7b6717*/

}
} // namespace gamemd

// 0x7B6720
namespace gamemd {
int WideString::AssignFromPtr(const wchar_t **a2)
{

  int v3; // eax
  wchar_t *v4; // eax

  *(unsigned int *)this = 0; /*0x7b6728*/
  if ( *a2 ) /*0x7b672e*/
  {
    v3 = (unsigned int)(wcslen(*a2));
    v4 = (wchar_t *)((unsigned int)((wchar_t *)__2_YAPAXI_Z(2 * v3 + 2)));
    *(unsigned int *)this = (unsigned int)(v4); /*0x7b6744*/
    wcscpy(v4, *a2); /*0x7b674a*/
  }
  return (int)((wchar_t **)this);

}
} // namespace gamemd

// 0x7B6880
namespace gamemd {
void ** WideString::Assign_Alt(wchar_t *String)
{

  int v3; // eax
  unsigned short *v4; // eax

  if ( *(unsigned int *)this ) /*0x7b6884*/
    __3_YAXPAX_Z(*(void **)this); /*0x7b688b*/
  *(unsigned int *)this = 0; /*0x7b6897*/
  if ( String ) /*0x7b689f*/
    v3 = wcslen(String) + 1; /*0x7b68aa*/
  else
    v3 = 1; /*0x7b68ad*/
  v4 = (unsigned short *)__2_YAPAXI_Z(2 * v3); /*0x7b68b5*/
  *(unsigned int *)this = (unsigned int)(v4); /*0x7b68bd*/
  *v4 = 0; /*0x7b68c1*/
  if ( String ) /*0x7b68c6*/
    wcscpy(*(wchar_t **)this, String); /*0x7b68cc*/
  return (void **)this; /*0x7b68d6*/

}
} // namespace gamemd

// 0x7B68E0
namespace gamemd {
int WideString::Reassign_Alt(const wchar_t **a2)
{

  const wchar_t *v3; // eax
  wchar_t *v4; // edi
  int v5; // eax
  unsigned short *v6; // eax

  v3 = (wchar_t *)(*(const wchar_t **)this);
  if ( (*(unsigned int *)this || *a2) && (!v3 || !*a2 || wcscmp(v3, *a2)) ) /*0x7b68ff*/
  {
    v4 = (wchar_t *)((unsigned int)((wchar_t *)*a2));
    if ( !*a2 ) /*0x7b690b*/
      v4 = (wchar_t *)(&g_TypeClass_DefaultString); /*0x7b6911*/
    if ( *(unsigned int *)this ) /*0x7b6916*/
      __3_YAXPAX_Z(*(void **)this); /*0x7b691d*/
    *(unsigned int *)this = 0; /*0x7b6927*/
    if ( v4 ) /*0x7b692d*/
      v5 = wcslen(v4) + 1; /*0x7b6938*/
    else
      v5 = 1; /*0x7b693b*/
    v6 = (unsigned short *)__2_YAPAXI_Z(2 * v5); /*0x7b6943*/
    *(unsigned int *)this = (unsigned int)(v6); /*0x7b694b*/
    *v6 = 0; /*0x7b694f*/
    if ( v4 ) /*0x7b6954*/
      wcscpy(*(wchar_t **)this, v4); /*0x7b695a*/
  }
  return (int)((void **)this);

}
} // namespace gamemd

// 0x7B6AE0
namespace gamemd {
wchar_t ** WideString::Append2(wchar_t *aP1)
{

  wchar_t *v3; // esi
  int v4; // edi
  wchar_t *v5; // eax

  if ( aP1 ) /*0x7b6aeb*/
  {
    v3 = (wchar_t *)((unsigned int)(*(wchar_t **)this));
    v4 = (unsigned int)(wcslen((const wchar_t *)(aP1)) + 1);
    if ( v3 ) /*0x7b6afe*/
      v4 += wcslen(v3); /*0x7b6b09*/
    v5 = (wchar_t *)__2_YAPAXI_Z(4 * v4); /*0x7b6b13*/
    *(unsigned int *)this = (unsigned int)(v5); /*0x7b6b1b*/
    if ( v3 ) /*0x7b6b20*/
      wcscpy(v5, v3); /*0x7b6b24*/
    else
      *v5 = 0; /*0x7b6b2e*/
    wcscat(*(wchar_t **)this,(const wchar_t *)(aP1)); /*0x7b6b37*/
    if ( v3 ) /*0x7b6b41*/
      __3_YAXPAX_Z(v3); /*0x7b6b44*/
  }
  return (wchar_t **)this; /*0x7b6b4c*/

}
} // namespace gamemd

// 0x7B6B60
namespace gamemd {
wchar_t ** WideString::Append(CampaignScore * aP1, void *a2_1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7B6B60)
}
} // namespace gamemd

// 0x7B6BE0
namespace gamemd {
wchar_t ** WideString::AssignConcat(wchar_t ** a2, wchar_t * String)
{

  wchar_t *v4; // esi
  int v5; // eax
  wchar_t *v6; // ebx
  int v7; // edi
  wchar_t *v8; // eax
  int v9; // eax
  wchar_t *v10; // eax

  v4 = 0; /*0x7b6be4*/
  if ( *(unsigned int *)this ) /*0x7b6be6*/
  {
    v5 = wcslen(*(const wchar_t **)this); /*0x7b6bed*/
    v4 = (wchar_t *)__2_YAPAXI_Z(2 * v5 + 2); /*0x7b6bfe*/
    wcscpy(v4, *(const wchar_t **)this); /*0x7b6c02*/
  }
  if ( String ) /*0x7b6c12*/
  {
    v6 = v4; /*0x7b6c15*/
    v7 = wcslen(String) + 1; /*0x7b6c21*/
    if ( v4 ) /*0x7b6c24*/
      v7 += wcslen(v4); /*0x7b6c2f*/
    v8 = (wchar_t *)__2_YAPAXI_Z(4 * v7); /*0x7b6c39*/
    v4 = v8; /*0x7b6c41*/
    if ( v6 ) /*0x7b6c45*/
      wcscpy(v8, v6); /*0x7b6c49*/
    else
      *v8 = 0; /*0x7b6c53*/
    wcscat(v4, String); /*0x7b6c5a*/
    if ( v6 ) /*0x7b6c64*/
      __3_YAXPAX_Z(v6); /*0x7b6c67*/
  }
  *a2 = 0; /*0x7b6c76*/
  if ( v4 ) /*0x7b6c7d*/
  {
    v9 = wcslen(v4); /*0x7b6c80*/
    v10 = (wchar_t *)__2_YAPAXI_Z(2 * v9 + 2); /*0x7b6c8a*/
    *a2 = v10; /*0x7b6c91*/
    wcscpy(v10, v4); /*0x7b6c93*/
    __3_YAXPAX_Z(v4); /*0x7b6c99*/
  }
  return a2; /*0x7b6ca3*/

}
} // namespace gamemd

// 0x7B6CB0
namespace gamemd {
wchar_t ** WideString::ConcatAlloc(wchar_t ** a1, ObjectClass * aP2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x7B6CB0)
}
} // namespace gamemd

// 0x7B6D90
namespace gamemd {
short WideString::Erase(int a2, int a3, void *a3_2)
{

  int v4; // eax
  int v5; // esi
  int v6; // ebx
  wchar_t *v8; // ebp
  int v9; // esi

  v4 = wcslen(*(const wchar_t **)this); /*0x7b6d98*/
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
  v8 = (wchar_t *)__2_YAPAXI_Z(2 * (v4 + 0x7FFFFFFF * v6) + 2); /*0x7b6de0*/
  *(unsigned short *)(*(unsigned int *)this + 2 * v5) = 0; /*0x7b6de2*/
  v9 = 2 * (v6 + v5); /*0x7b6dec*/
  *(unsigned short *)(v9 + *(unsigned int *)this - 2) = 0; /*0x7b6dee*/
  wcscpy(v8, *(const wchar_t **)this); /*0x7b6df9*/
  wcscat(v8, (const wchar_t *)(*(unsigned int *)this + v9)); /*0x7b6e02*/
  __3_YAXPAX_Z(*(void **)this); /*0x7b6e0a*/
  *(unsigned int *)this = (unsigned int)(v8); /*0x7b6e12*/
  return 1; /*0x7b6dbf*/

}
} // namespace gamemd

// 0x7B6E20
namespace gamemd {
char WideString::RemoveChar(wchar_t a2)
{

  char v3; // bl
  int v5; // edi
  wchar_t *v6; // eax
  int v7; // edi
  int v8; // eax
  wchar_t *v9; // edi
v3 = (char)((wchar_t *)(0));
  if ( !*(unsigned int *)this ) /*0x7b6e26*/
    return 0; /*0x7b6e2d*/
  v5 = wcslen(*(const wchar_t **)this); /*0x7b6e3f*/
  v6 = (wchar_t *)(wcschr(*(const wchar_t **)this, a2)); /*0x7b6e45*/
  if ( v6 ) /*0x7b6e4f*/
  {
    v3 = 1; /*0x7b6e51*/
    v7 = 2 * v5; /*0x7b6e53*/
    do /*0x7b6e88*/
    {
      memcpy(v6, v6 + 1, v7 - (((int)v6 - *(unsigned int *)this) >> 1) - 2); /*0x7b6e6a*/
      v7 -= 2; /*0x7b6e71*/
      *(unsigned short *)(v7 + *(unsigned int *)this) = 0; /*0x7b6e75*/
      v6 = (wchar_t *)(wcschr(*(const wchar_t **)this, a2)); /*0x7b6e7e*/
    }
    while ( v6 ); /*0x7b6e88*/
    v8 = wcslen(*(const wchar_t **)this); /*0x7b6e8d*/
    v9 = (wchar_t *)__2_YAPAXI_Z(2 * v8 + 2); /*0x7b6e9c*/
    wcscpy(v9, *(const wchar_t **)this); /*0x7b6ea2*/
    __3_YAXPAX_Z(*(void **)this); /*0x7b6eaa*/
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
int WideString::GetOrEmpty_Alt()
{

  wchar_t *result; // eax

  result = *(wchar_t **)this; /*0x7b7140*/
  if ( !*(unsigned int *)this ) /*0x7b7140*/
    return (int)(&g_TypeClass_DefaultString); /*0x7b7146*/
  return (int)(result); /*0x7b714b*/

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
  LOWORD(result) = *(unsigned short *)(*(unsigned int *)this + 2 * aP1); /*0x7b7199*/
  return result; /*0x7b7198*/

}
} // namespace gamemd

// 0x7B71B0
namespace gamemd {
int WideString::Length()
{

  const wchar_t *result; // eax

  result = *(const wchar_t **)this; /*0x7b71b0*/
  if ( *(unsigned int *)this ) /*0x7b71b0*/
    return (int)((const wchar_t *)wcslen(*(const wchar_t **)this)); /*0x7b71b8*/
  return (int)(result); /*0x7b71b6*/

}
} // namespace gamemd

// 0x7B7600
namespace gamemd {
short WideString::Reassign(wchar_t * String, void *a2_1)
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
  *(unsigned int *)this = (unsigned int)(v4); /*0x7b763d*/
  *v4 = 0; /*0x7b7641*/
  if ( String ) /*0x7b7646*/
    wcscpy(*(wchar_t **)this, String); /*0x7b764c*/
  return 1; /*0x7b7654*/

}
} // namespace gamemd

// 0x7B7D90
namespace gamemd {
char WideString::IsASCII()
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
    LOBYTE(result) = 0; /*0x7b7dbd*/
  }
  else
  {
LABEL_6:
    LOBYTE(result) = 1; /*0x7b7db9*/
  }
  return result; /*0x7b7dbb*/

}
} // namespace gamemd
