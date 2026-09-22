// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/WideString_e4.hpp"

// 0x5D4B20
namespace gamemd {
int WideString::WordWrap(wchar_t * a0, CampaignScore * aP1, int a3, CampaignScore * aP3, int a5)
{
{
  CampaignScore *v6; // ebp
  int v9; // ebx
  if ( a3 <= 0 ) /*0x5d4b27*/
    return 0; /*0x5d4b2c*/
  v6 = aP1; /*0x5d4b31*/
  signed int v7 = wcslen((const wchar_t *)aP1); /*0x5d4b37*/
  int v8 = (int)aP3; /*0x5d4b3c*/
  if ( (int)aP3 > v7 ) /*0x5d4b49*/
    v8 = v7; /*0x5d4b4b*/
  if ( a5 ) /*0x5d4b53*/
  {
    v9 = v8; /*0x5d4b79*/
    if ( v8 >= a3 ) /*0x5d4b7b*/
    {
      char * v11 = &aP1->__pad_0[2 * v8 - 2]; /*0x5d4b7d*/
      while ( !*(_WORD *)v11 || *(_WORD *)v11 > 0x20u ) /*0x5d4b8d*/
      {
        --v9; /*0x5d4b8f*/
        v11 -= 2; /*0x5d4b90*/
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
      char * v10 = &aP1->__pad_0[2 * a3 - 2]; /*0x5d4b5b*/
      while ( !*(_WORD *)v10 || *(_WORD *)v10 > 0x20u ) /*0x5d4b6b*/
      {
        ++v9; /*0x5d4b6d*/
        v10 += 2; /*0x5d4b6e*/
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
    qmemcpy(a0, aP1, 2 * v9); /*0x5d4baf*/
    v6 = aP1; /*0x5d4bb3*/
    a0[v9] = 0; /*0x5d4bbc*/
  }
  memcpy(v6, (AbstractClass *)((char *)v6 + 2 * v9), 2 * (v7 + 0x7FFFFFFF * v9) + 2); /*0x5d4bdc*/
  return v9; /*0x5d4b2b*/
}
} // namespace gamemd
}

// 0x7B73F0
namespace gamemd {
AbstractClass * * WideString::Replace(CampaignScore * aP1, wchar_t * String)
{
{
  GameSetup *v3; // ebx
  const wchar_t *v4; // edi
  CCINIClass *v5; // esi
  wchar_t *v6; // eax
  size_t v7; // ebp
  CCINIClass *v8; // ebx
  CCINIClass *v9; // eax
  CCINIClass *v10; // ebx
  size_t v11; // edi
  CCINIClass *v12; // eax
  CCINIClass *v13; // ebp
  size_t v14; // ebx
  CCINIClass *v15; // eax
  CampaignScore *v16; // edi
  size_t v17; // eax
  size_t v20; // [esp+Ch] [ebp-Ch]
  wchar_t *v22; // [esp+14h] [ebp-4h]
  v3 = (GameSetup *)this; /*0x7b73f4*/
  v4 = (const wchar_t *)*this; /*0x7b73f8*/
  v5 = 0; /*0x7b73fa*/
  if ( !*this ) /*0x7b73f8*/
  {
    v4 = (const wchar_t *)&DataGlobal_87F8E4[32336]; /*0x7b7404*/
    if ( &DataGlobal_87F8E4 == (MouseClass *)-32336 ) /*0x7b740b*/
      goto LABEL_33; /*0x7b740b*/
  }
  while ( *v4 ) /*0x7b7416*/
  {
    v6 = wcsstr(v4, (const wchar_t *)aP1); /*0x7b7422*/
    v22 = v6; /*0x7b742a*/
    if ( !v6 ) /*0x7b7430*/
    {
      if ( v4 ) /*0x7b7521*/
      {
        v13 = v5; /*0x7b7524*/
        v14 = wcslen(v4) + 1; /*0x7b7530*/
        if ( v5 ) /*0x7b7533*/
          v14 += wcslen((const wchar_t *)v5); /*0x7b753e*/
        v15 = (CCINIClass *)__2_YAPAXI_Z(4 * v14); /*0x7b7548*/
        v5 = v15; /*0x7b7550*/
        if ( v13 ) /*0x7b7554*/
          wcscpy((wchar_t *)v15, (const wchar_t *)v13); /*0x7b7558*/
        else
          *(_WORD *)v15->__pad_0 = 0; /*0x7b7562*/
        wcscat((wchar_t *)v5, v4); /*0x7b7569*/
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
        v20 += wcslen((const wchar_t *)v5); /*0x7b7458*/
      v9 = (CCINIClass *)__2_YAPAXI_Z(4 * v20); /*0x7b7468*/
      v5 = v9; /*0x7b7470*/
      if ( v8 ) /*0x7b7474*/
        wcscpy((wchar_t *)v9, (const wchar_t *)v8); /*0x7b7478*/
      else
        *(_WORD *)v9->__pad_0 = 0; /*0x7b7482*/
      wcsncat((wchar_t *)v5, v4, v7); /*0x7b748a*/
      if ( v8 ) /*0x7b7494*/
        __3_YAXPAX_Z(v8); /*0x7b7497*/
    }
    if ( String ) /*0x7b74a5*/
    {
      v10 = v5; /*0x7b74a8*/
      v11 = wcslen(String) + 1; /*0x7b74b4*/
      if ( v5 ) /*0x7b74b7*/
        v11 += wcslen((const wchar_t *)v5); /*0x7b74c2*/
      v12 = (CCINIClass *)__2_YAPAXI_Z(4 * v11); /*0x7b74cc*/
      v5 = v12; /*0x7b74d4*/
      if ( v10 ) /*0x7b74d8*/
        wcscpy((wchar_t *)v12, (const wchar_t *)v10); /*0x7b74dc*/
      else
        *(_WORD *)v12->__pad_0 = 0; /*0x7b74e6*/
      wcscat((wchar_t *)v5, String); /*0x7b74ed*/
      if ( v10 ) /*0x7b74f7*/
        __3_YAXPAX_Z(v10); /*0x7b74fa*/
    }
    v4 = &v22[wcslen((const wchar_t *)aP1)]; /*0x7b7513*/
    if ( !v4 ) /*0x7b7518*/
      break; /*0x7b7518*/
  }
  if ( !v5 ) /*0x7b7581*/
  {
    v3 = (GameSetup *)this; /*0x7b7583*/
LABEL_33:
    v16 = (CampaignScore *)&DataGlobal_87F8E4[32336]; /*0x7b7587*/
    goto LABEL_35; /*0x7b758c*/
  }
  v3 = (GameSetup *)this; /*0x7b758e*/
  v16 = (CampaignScore *)v5; /*0x7b7592*/
LABEL_35:
  if ( *(_DWORD *)v3->__pad_0 ) /*0x7b7594*/
    __3_YAXPAX_Z(*(void **)v3->__pad_0); /*0x7b759b*/
  *(_DWORD *)v3->__pad_0 = 0; /*0x7b75a5*/
  if ( v16 ) /*0x7b75ab*/
    v17 = wcslen((const wchar_t *)v16) + 1; /*0x7b75b6*/
  else
    v17 = 1; /*0x7b75b9*/
  _WORD * v18 = (_WORD *)__2_YAPAXI_Z(2 * v17); /*0x7b75c1*/
  *(_DWORD *)v3->__pad_0 = v18; /*0x7b75c9*/
  *v18 = 0; /*0x7b75cd*/
  if ( v16 ) /*0x7b75d2*/
    wcscpy(*(wchar_t **)v3->__pad_0, (const wchar_t *)v16); /*0x7b75d8*/
  if ( v5 ) /*0x7b75e2*/
    __3_YAXPAX_Z(v5); /*0x7b75e5*/
  return 1; /*0x7b75ed*/
}
} // namespace gamemd
}

// 0x5DAC00
namespace gamemd {
int WideString::Hash()
{
{
    size_t v1;
    wchar_t *v2;
    int v4;
    wchar_t String[80];
    v1 = 0;
    v4 = 0;
    wcscpy(String, this);
    _wcsupr(String);
    if ( !wcslen(String) )
    return v4;
    v2 = String;
    do
  {
    ComputeHash(&v4, *v2);
    ++v1;
    ++v2;
  }
    while ( v1 < wcslen(String) );
    return v4;
}
}
} // namespace gamemd

// 0x727D60
namespace gamemd {
wchar_t * WideString::Trim()
{
{
    wchar_t v2;
    wchar_t *v3;
    signed int v4;
    wchar_t *v5;
    if ( this )
  {
    v2 = *(void**)this;
    v3 = this;
    if ( *(void**)this )
    {
    do
      {
    if ( v2 > 0x20u )
    break;
    v2 = v3[1];
    ++v3;
      }
    while ( v2 );
    if ( v3 != this )
    wcscpy(this, v3);
    }
    v4 = wcslen(this) - 1;
    if ( v4 >= 0 )
    {
    v5 = this + v4;
    do
      {
    if ( !*v3 )
    break;
    if ( *v5 > 0x20u )
    break;
    *v5 = 0;
    --v4;
    --v5;
      }
    while ( v4 >= 0 );
    }
  }
    return this;
}
}
} // namespace gamemd

// 0x7B66D0
namespace gamemd {
wchar_t ** WideString::Assign(CampaignScore * aP1)
{
{
    size_t v3;
    wchar_t *v4;
    *(void**)this = 0;
    if ( aP1 )
    v3 = wcslen((const wchar_t *)aP1) + 1;
    else
    v3 = 1;
    v4 = (wchar_t *)__2_YAPAXI_Z(2 * v3);
    *(void**)this = v4;
    *v4 = 0;
    if ( aP1 )
    wcscpy(*(void**)this, (const wchar_t *)aP1);
    return this;
}
}
} // namespace gamemd

// 0x7B6720
namespace gamemd {
wchar_t ** WideString::AssignFromPtr(const wchar_t ** a2)
{
{
    size_t v3;
    wchar_t *v4;
    *(void**)this = 0;
    if ( *a2 )
  {
    v3 = wcslen(*a2);
    v4 = (wchar_t *)__2_YAPAXI_Z(2 * v3 + 2);
    *(void**)this = v4;
    wcscpy(v4, *a2);
  }
    return this;
}
}
} // namespace gamemd

// 0x7B6880
namespace gamemd {
void ** WideString::Assign_Alt(wchar_t * String)
{
{
    size_t v3;
    short *v4;
    if ( *(void**)this )
    __3_YAXPAX_Z(*(void**)this);
    *(void**)this = 0;
    if ( String )
    v3 = wcslen(String) + 1;
    else
    v3 = 1;
    v4 = __2_YAPAXI_Z(2 * v3);
    *(void**)this = v4;
    *v4 = 0;
    if ( String )
    wcscpy((wchar_t *)*(void**)this, String);
    return this;
}
}
} // namespace gamemd

// 0x7B68E0
namespace gamemd {
void ** WideString::Reassign_Alt(const wchar_t ** a2)
{
{
    const wchar_t *v3;
    wchar_t *v4;
    size_t v5;
    short *v6;
    v3 = (const wchar_t *)*(void**)this;
    if ( (*(void**)this || *a2) && (!v3 || !*a2 || wcscmp(v3, *a2)) )
  {
    v4 = (wchar_t *)*a2;
    if ( !*a2 )
    v4 = &g_TypeClass_DefaultString;
    if ( *(void**)this )
    __3_YAXPAX_Z(*(void**)this);
    *(void**)this = 0;
    if ( v4 )
    v5 = wcslen(v4) + 1;
    else
    v5 = 1;
    v6 = __2_YAPAXI_Z(2 * v5);
    *(void**)this = v6;
    *v6 = 0;
    if ( v4 )
    wcscpy((wchar_t *)*(void**)this, v4);
  }
    return this;
}
}
} // namespace gamemd

// 0x7B6AE0
namespace gamemd {
wchar_t ** WideString::Append2(CampaignScore * aP1)
{
{
    CampaignScore *v3;
    size_t v4;
    wchar_t *v5;
    if ( aP1 )
  {
    v3 = (CampaignScore *)*(void**)this;
    v4 = wcslen((const wchar_t *)aP1) + 1;
    if ( v3 )
    v4 += wcslen((const wchar_t *)v3);
    v5 = (wchar_t *)__2_YAPAXI_Z(4 * v4);
    *(void**)this = v5;
    if ( v3 )
    wcscpy(v5, (const wchar_t *)v3);
    else
    *v5 = 0;
    wcscat(*(void**)this, (const wchar_t *)aP1);
    if ( v3 )
    __3_YAXPAX_Z(v3);
  }
    return this;
}
}
} // namespace gamemd

// 0x7B6B60
namespace gamemd {
wchar_t ** WideString::Append(CampaignScore * aP1)
{
{
    const wchar_t *v2;
    CampaignScore *v4;
    size_t v5;
    wchar_t *v6;
    v2 = *(const wchar_t **)aP1->__pad_0;
    if ( *(int *)aP1->__pad_0 || (v2 = (const wchar_t *)&DataGlobal_87F8E4[32336], &DataGlobal_87F8E4 != (MouseClass *)-32336) )
  {
    v4 = (CampaignScore *)*(void**)this;
    v5 = wcslen(v2) + 1;
    if ( v4 )
    v5 += wcslen((const wchar_t *)v4);
    v6 = (wchar_t *)__2_YAPAXI_Z(4 * v5);
    *(void**)this = v6;
    if ( v4 )
    wcscpy(v6, (const wchar_t *)v4);
    else
    *v6 = 0;
    wcscat(*(void**)this, v2);
    if ( v4 )
    __3_YAXPAX_Z(v4);
  }
    return this;
}
}
} // namespace gamemd

// 0x7B6BE0
namespace gamemd {
wchar_t ** WideString::AssignConcat(wchar_t ** a2, wchar_t * String)
{
{
    wchar_t *v4;
    size_t v5;
    wchar_t *v6;
    size_t v7;
    wchar_t *v8;
    size_t v9;
    wchar_t *v10;
    v4 = 0;
    if ( *(void**)this )
  {
    v5 = wcslen(*(void**)this);
    v4 = (wchar_t *)__2_YAPAXI_Z(2 * v5 + 2);
    wcscpy(v4, *(void**)this);
  }
    if ( String )
  {
    v6 = v4;
    v7 = wcslen(String) + 1;
    if ( v4 )
    v7 += wcslen(v4);
    v8 = (wchar_t *)__2_YAPAXI_Z(4 * v7);
    v4 = v8;
    if ( v6 )
    wcscpy(v8, v6);
    else
    *v8 = 0;
    wcscat(v4, String);
    if ( v6 )
    __3_YAXPAX_Z(v6);
  }
    *a2 = 0;
    if ( v4 )
  {
    v9 = wcslen(v4);
    v10 = (wchar_t *)__2_YAPAXI_Z(2 * v9 + 2);
    *a2 = v10;
    wcscpy(v10, v4);
    __3_YAXPAX_Z(v4);
  }
    return a2;
}
}
} // namespace gamemd

// 0x7B6CB0
namespace gamemd {
wchar_t ** WideString::ConcatAlloc(wchar_t ** a1, ObjectClass * aP2)
{
{
    wchar_t *v4;
    size_t v5;
    const wchar_t *v6;
    CCINIClass *v7;
    size_t v8;
    wchar_t *v9;
    size_t v10;
    wchar_t *v11;
    v4 = 0;
    if ( *(void**)this )
  {
    v5 = wcslen(*(void**)this);
    v4 = (wchar_t *)__2_YAPAXI_Z(2 * v5 + 2);
    wcscpy(v4, *(void**)this);
  }
    v6 = *(const wchar_t **)aP2->__pad_0;
    if ( *(int *)aP2->__pad_0 || (v6 = (const wchar_t *)&DataGlobal_87F8E4[32336], &DataGlobal_87F8E4 != (MouseClass *)-32336) )
  {
    v7 = (CCINIClass *)v4;
    v8 = wcslen(v6) + 1;
    if ( v4 )
    v8 += wcslen(v4);
    v9 = (wchar_t *)__2_YAPAXI_Z(4 * v8);
    v4 = v9;
    if ( v7 )
    wcscpy(v9, (const wchar_t *)v7);
    else
    *v9 = 0;
    wcscat(v4, v6);
    if ( v7 )
    __3_YAXPAX_Z(v7);
  }
    *a1 = 0;
    if ( v4 )
  {
    v10 = wcslen(v4);
    v11 = (wchar_t *)__2_YAPAXI_Z(2 * v10 + 2);
    *a1 = v11;
    wcscpy(v11, v4);
    __3_YAXPAX_Z(v4);
  }
    return a1;
}
}
} // namespace gamemd

// 0x7B6D90
namespace gamemd {
short WideString::Erase(int a2, int a3)
{
{
    signed int v4;
    int v5;
    int v6;
    wchar_t *v8;
    int v9;
    v4 = wcslen(*(void**)this);
    v5 = a2;
    v6 = a3;
    if ( a2 + a3 > v4 )
    v5 = v4 - a3;
    if ( v5 < 0 )
  {
    v6 = v5 + a3;
    v5 = 0;
  }
    if ( v6 <= 0 )
    return 0;
    v8 = (wchar_t *)__2_YAPAXI_Z(2 * (v4 + 0x7FFFFFFF * v6) + 2);
    (*(void**)this)[v5] = 0;
    v9 = v6 + v5;
    (*(void**)this)[v9 - 1] = 0;
    wcscpy(v8, *(void**)this);
    wcscat(v8, &(*(void**)this)[v9]);
    __3_YAXPAX_Z((void *)*(void**)this);
    *(void**)this = v8;
    return 1;
}
}
} // namespace gamemd

// 0x7B6E20
namespace gamemd {
char WideString::RemoveChar(wchar_t a2)
{
{
    char v3;
    size_t v5;
    wchar_t *v6;
    int v7;
    size_t v8;
    wchar_t *v9;
    v3 = 0;
    if ( !*(void**)this )
    return 0;
    v5 = wcslen(*(void**)this);
    v6 = wcschr(*(void**)this, a2);
    if ( v6 )
  {
    v3 = 1;
    v7 = v5;
    do
    {
    memcpy(v6, v6 + 1, v7 * 2 - (v6 - *(void**)this) - 2);
    (*(void**)this)[--v7] = 0;
    v6 = wcschr(*(void**)this, a2);
    }
    while ( v6 );
    v8 = wcslen(*(void**)this);
    v9 = (wchar_t *)__2_YAPAXI_Z(2 * v8 + 2);
    wcscpy(v9, *(void**)this);
    __3_YAXPAX_Z((void *)*(void**)this);
    *(void**)this = v9;
  }
    return v3;
}
}
} // namespace gamemd

// 0x7B7100
namespace gamemd {
CampaignScore * WideString::GetOrEmpty()
{
{
    CampaignScore *result;
    result = (CampaignScore *)*(void**)this;
    if ( !*(void**)this )
    return (CampaignScore *)&DataGlobal_87C374[46016];
    return result;
}
}
} // namespace gamemd

// 0x7B7140
namespace gamemd {
CampaignScore * WideString::GetOrEmpty_Alt()
{
{
    CampaignScore *result;
    result = (CampaignScore *)*(void**)this;
    if ( !*(void**)this )
    return (CampaignScore *)&DataGlobal_87C374[46016];
    return result;
}
}
} // namespace gamemd

// 0x7B7180
namespace gamemd {
wchar_t WideString::GetChar(ObjectClass * aP1)
{
{
    if ( (unsigned int)aP1 >= wcslen(*(void**)this) )
    return 0;
    else
    return (*(void**)this)[(int)aP1];
}
}
} // namespace gamemd

// 0x7B71B0
namespace gamemd {
const wchar_t * WideString::Length()
{
{
    const wchar_t *result;
    result = *(void**)this;
    if ( *(void**)this )
    return (const wchar_t *)wcslen(*(void**)this);
    return result;
}
}
} // namespace gamemd

// 0x7B7600
namespace gamemd {
short WideString::Reassign(wchar_t * String)
{
{
    size_t v3;
    short *v4;
    if ( *(void**)this )
    __3_YAXPAX_Z(*(void**)this);
    *(void**)this = 0;
    if ( String )
    v3 = wcslen(String) + 1;
    else
    v3 = 1;
    v4 = __2_YAPAXI_Z(2 * v3);
    *(void**)this = v4;
    *v4 = 0;
    if ( String )
    wcscpy((wchar_t *)*(void**)this, String);
    return 1;
}
}
} // namespace gamemd

// 0x7B7D90
namespace gamemd {
char WideString::IsASCII()
{
{
    signed int v2;
    int v3;
    const wchar_t *i;
    if ( !*(void**)this )
    return 1;
    v2 = wcslen(*(void**)this);
    v3 = 0;
    if ( v2 <= 0 )
    return 1;
    for ( i = *(void**)this; *i < 0x100u; ++i )
  {
    if ( ++v3 >= v2 )
    return 1;
  }
    return 0;
}
}
} // namespace gamemd
