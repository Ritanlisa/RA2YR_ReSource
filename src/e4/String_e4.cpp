// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_5EEF60_e4.hpp"
#include "e4/classes/E4Recv_7B4A10_e4.hpp"
#include "e4/classes/E4Recv_7B6780_e4.hpp"
#include "e4/classes/E4Recv_7B7660_e4.hpp"
#include "e4/classes/String_e4.hpp"

// 0x49B760
namespace gamemd {
void String::AssignWideToChar(CampaignScore * aP1, CampaignScore * aP2)
{
{
  if ( aP1 ) /*0x49b76b*/
    strcpy(this, ToWideStringChar(aP1->__pad_0)); /*0x49b788*/
  else
    *this = 0; /*0x49b793*/
  if ( aP2 ) /*0x49b79c*/
    strcpy(this + 28, ToWideStringChar(aP2->__pad_0)); /*0x49b7bc*/
  else
    *(this + 28) = 0; /*0x49b7cc*/
}
} // namespace gamemd

// 0x4CB5E0
namespace gamemd {
void * String::AllocAndCopy(RandomStruct * aP1, IUnknown * aP2)
{
{

  strncpy(this, (const char *)aP1, (IUnknown *)4); /*0x4cb5ed*/
  *((_WORD *)this + 2) = 2; /*0x4cb5f4*/
  *((_WORD *)this + 3) = 1; /*0x4cb5fa*/
  char * v4 = (char *)__2_YAPAXI_Z(1u); /*0x4cb600*/
  unsigned int v5 = *((unsigned __int16 *)this + 3); /*0x4cb611*/
  *((_DWORD *)this + 2) = v4; /*0x4cb613*/
  qmemcpy(v4, &aP2, 4 * (v5 >> 2)); /*0x4cb619*/
  char * v6 = &v4[4 * (v5 >> 2)]; /*0x4cb619*/
  qmemcpy(v6, &aP2 + (v5 >> 2), v5 & 3); /*0x4cb625*/
  *((_DWORD *)this + 3) = 0; /*0x4cb628*/
  return this; /*0x4cb627*/
}
} // namespace gamemd

// 0x5BD5A0
namespace gamemd {
void String::Release()
{
{
  if ( *(this + 3) ) /*0x5bd5a3*/
    __3_YAXPAX_Z(*(this + 3)); /*0x5bd5ab*/
  *(this + 3) = 0; /*0x5bd5b3*/
}
} // namespace gamemd

// 0x5D0380
namespace gamemd {
ObjectClass * * String::SplitComma(ObjectClass * aP1)
{
{
  ObjectClass *v3; // ebx
  ObjectClass *v4; // ebx
  ObjectClass *v6; // ebx
  String::Assign((char **)this, 0); /*0x5d0389*/
  *(_DWORD *)(this + 4) = 0; /*0x5d0392*/
  *(_DWORD *)(this + 8) = 0; /*0x5d0395*/
  *(_DWORD *)(this + 12) = 0; /*0x5d0398*/
  int v10; // [esp+Ch] [ebp-4h] BYREF
  unknown_libname_73(&v10); /*0x5d039b*/
  v3 = (ObjectClass *)String::Tokenize((const char **)aP1, 0, &Delimiter, (ObjectClass *)&v10); /*0x5d03ba*/
  if ( String::Length((const char **)&v10) ) /*0x5d03bc*/
    String::Reassign((char **)this, (AbstractClass *)&v10); /*0x5d03cc*/
  v4 = (ObjectClass *)String::Tokenize((const char **)aP1, (int)v3, &Delimiter, (ObjectClass *)&v10); /*0x5d03e7*/
  if ( String::Length((const char **)&v10) ) /*0x5d03e9*/
  {
    __1_Timevec_std__QAE_XZ((std::_Timevec *)&v10); /*0x5d03f6*/
  int v5; // eax
    *(_DWORD *)(this + 4) = v5; /*0x5d03fb*/
  }
  v6 = (ObjectClass *)String::Tokenize((const char **)aP1, (int)v4, &Delimiter, (ObjectClass *)&v10); /*0x5d0414*/
  if ( String::Length((const char **)&v10) ) /*0x5d0416*/
  {
    __1_Timevec_std__QAE_XZ((std::_Timevec *)&v10); /*0x5d0423*/
  int v7; // eax
    *(_DWORD *)(this + 8) = v7; /*0x5d0428*/
  }
  String::Tokenize((const char **)aP1, (int)v6, &Delimiter, (ObjectClass *)&v10); /*0x5d0438*/
  if ( String::Length((const char **)&v10) ) /*0x5d0441*/
  {
    __1_Timevec_std__QAE_XZ((std::_Timevec *)&v10); /*0x5d044e*/
  int v8; // eax
    *(_DWORD *)(this + 12) = v8; /*0x5d0453*/
  }
  DeleteAndZero((void **)&v10); /*0x5d045a*/
  return this; /*0x5d0461*/
}
} // namespace gamemd

// 0x5F3350
namespace gamemd {
int String::NormalizeNewlines()
{
{

  const char * v0 = (const char *)DataGlobal_A8EA7C; /*0x5f3351*/
  __int64 v1 = 0; /*0x5f335d*/
  if ( strlen((const char *)DataGlobal_A8EA7C) ) /*0x5f3361*/
  {
    while ( 1 ) /*0x5f3368*/
    {
      char v2 = v0[HIDWORD(v1)]; /*0x5f3368*/
      if ( v2 == 13 ) /*0x5f336d*/
        break; /*0x5f336d*/
      if ( v2 == 10 ) /*0x5f3377*/
      {
        v0[HIDWORD(v1)] = 2; /*0x5f3379*/
        goto LABEL_6; /*0x5f3379*/
      }
LABEL_7:
      LODWORD(v1) = 0; /*0x5f3383*/
      ++HIDWORD(v1); /*0x5f338a*/
      if ( HIDWORD(v1) >= strlen(v0) ) /*0x5f3392*/
        return v1; /*0x5f3392*/
    }
    v0[HIDWORD(v1)] = 1; /*0x5f336f*/
LABEL_6:
    v0 = (const char *)DataGlobal_A8EA7C; /*0x5f337d*/
    goto LABEL_7; /*0x5f337d*/
  }
  return v1; /*0x5f3394*/
}
} // namespace gamemd

// 0x763690
namespace gamemd {
ControlClass * * String::To_Waypoint()
{
{

  int v2 = -1; /*0x763694*/
  if ( isalpha(*this) && (v2 = toupper(*this) - 65, isalpha(*(this + 1))) ) /*0x7636ba*/
    return toupper(*(this + 1)) + 26 * v2 - 39; /*0x7636db*/
  else
    return v2; /*0x7636e0*/
}
} // namespace gamemd

// 0x7B51D0
namespace gamemd {
void String::TrimLeft(ObjectClass * aP1)
{
{
  int i; // esi

  for ( i = 0; ; ++i )
  {
    signed int v4 = *this ? strlen(*this) : 0;
    if ( i >= v4 ) /*0x7b51f4*/
      break; /*0x7b51f4*/
    const char * v5 = *(const char **)aP1->__pad_0; /*0x7b51f6*/
    if ( !*(_DWORD *)aP1->__pad_0 ) /*0x7b51f6*/
      v5 = &DataGlobal_87F8E4[42624]; /*0x7b51fd*/
    if ( !strchr(v5, (*this)[i]) ) /*0x7b5208*/
      break; /*0x7b5208*/
  }
  if ( i > 0 ) /*0x7b5219*/
    String::Erase(this, 0, i); /*0x7b5220*/
}
} // namespace gamemd

// 0x7B54B0
namespace gamemd {
unsigned int String::Length()
{
{
  if ( *this ) /*0x7b54b1*/
    return strlen(*this); /*0x7b54c6*/
  else
    return 0; /*0x7b54b7*/
}
} // namespace gamemd

// 0x7B57A0
namespace gamemd {
AbstractClass * * String::Replace(char * SubStr, const char * a3)
{
{
  void **v3; // edi
  size_t v7; // eax
  AbstractClass *v9; // edx
  AbstractClass *v14; // edx
  AbstractClass *v18; // edx
  const char *v20; // esi
  AbstractClass *v21; // ecx
  char *v22; // eax
  char *Block; // [esp+10h] [ebp-Ch]
  size_t Count; // [esp+14h] [ebp-8h]
  v3 = (void **)this; /*0x7b57a6*/
  AbstractClass *v4 = 0; /*0x7b57a8*/
  const char * v5 = *this; /*0x7b57ae*/
  if ( !*this ) /*0x7b57ae*/
    v5 = &g_INI_DefaultBuffer; /*0x7b57b4*/
  if ( !v5 ) /*0x7b57bc*/
    goto LABEL_33; /*0x7b57bc*/
  while ( *v5 ) /*0x7b57c6*/
  {
    char * v6 = strstr(v5, SubStr); /*0x7b57d2*/
    char * v27 = v6; /*0x7b57da*/
    if ( !v6 ) /*0x7b57e0*/
    {
      const char * v16 = v4; /*0x7b5924*/
      unsigned int v17 = strlen(v5) + 1; /*0x7b5926*/
      AbstractClass *v28 = v4; /*0x7b592b*/
      v18 = v17; /*0x7b5931*/
      if ( v4 ) /*0x7b5934*/
        v18 = strlen(v4) + v17; /*0x7b5940*/
      char * v19 = (char *)__2_YAPAXI_Z(v18); /*0x7b5943*/
      v4 = v19; /*0x7b594b*/
      if ( v16 ) /*0x7b594f*/
        strcpy(v19, v16); /*0x7b5967*/
      else
        *v19 = 0; /*0x7b5972*/
      strcat(v19, v5); /*0x7b5993*/
      if ( v28 ) /*0x7b59a2*/
        __3_YAXPAX_Z(v28); /*0x7b59a5*/
      break; /*0x7b59a5*/
    }
    v7 = v6 - v5; /*0x7b57e6*/
    Count = v7; /*0x7b57e8*/
    if ( v7 ) /*0x7b57ec*/
    {
      AbstractClass *v8 = v4; /*0x7b57ee*/
      v9 = v7 + 1; /*0x7b57f0*/
      Block = v4; /*0x7b57f5*/
      if ( v4 ) /*0x7b57f9*/
        v9 = strlen(v4) + 1 + v7; /*0x7b5807*/
      char * v10 = (char *)__2_YAPAXI_Z(v9); /*0x7b580a*/
      v4 = v10; /*0x7b5812*/
      if ( v8 ) /*0x7b5816*/
      {
        strcpy(v10, v8); /*0x7b582e*/
        v8 = Block; /*0x7b5837*/
      }
      else
      {
        *v10 = 0; /*0x7b583d*/
      }
      strncat(v10, v5, Count); /*0x7b5847*/
      if ( v8 ) /*0x7b5851*/
        __3_YAXPAX_Z(v8); /*0x7b5854*/
    }
    const char * v11 = a3; /*0x7b585c*/
    if ( a3 ) /*0x7b5862*/
    {
      AbstractClass *v12 = v4; /*0x7b586f*/
      unsigned int v13 = strlen(a3) + 1; /*0x7b5871*/
      v14 = v13; /*0x7b5878*/
      if ( v4 ) /*0x7b587b*/
        v14 = strlen(v4) + v13; /*0x7b5887*/
      char * v15 = (char *)__2_YAPAXI_Z(v14); /*0x7b588a*/
      v4 = v15; /*0x7b5892*/
      if ( v12 ) /*0x7b5896*/
      {
        strcpy(v15, v12); /*0x7b58ae*/
        v11 = a3; /*0x7b58b7*/
      }
      else
      {
        *v15 = 0; /*0x7b58bd*/
      }
      strcat(v15, v11); /*0x7b58de*/
      if ( v12 ) /*0x7b58e9*/
        __3_YAXPAX_Z(v12); /*0x7b58ec*/
    }
    v5 = &v27[strlen(SubStr)]; /*0x7b5908*/
    if ( !v5 ) /*0x7b590a*/
      break; /*0x7b590a*/
  }
  if ( !v4 ) /*0x7b59af*/
  {
    v3 = (void **)this; /*0x7b59b1*/
LABEL_33:
    v20 = &g_INI_DefaultBuffer; /*0x7b59b5*/
    goto LABEL_35; /*0x7b59ba*/
  }
  v3 = (void **)this; /*0x7b59bc*/
  v20 = v4; /*0x7b59c0*/
LABEL_35:
  if ( *v3 ) /*0x7b59c2*/
    __3_YAXPAX_Z(*v3); /*0x7b59c9*/
  *v3 = 0; /*0x7b59d3*/
  if ( v20 ) /*0x7b59d9*/
    v21 = strlen(v20) + 1; /*0x7b59e2*/
  AbstractClass *v21 = 1; /*0x7b59e8*/
  v22 = (char *)__2_YAPAXI_Z(v21); /*0x7b59ee*/
  *this = v22; /*0x7b59fc*/
  *v22 = 0; /*0x7b59fe*/
  if ( v20 ) /*0x7b5a01*/
    strcpy(*this, v20); /*0x7b5a1d*/
  if ( v4 ) /*0x7b5a29*/
    __3_YAXPAX_Z(v4); /*0x7b5a2c*/
  return 1; /*0x7b5a34*/
}
} // namespace gamemd

// 0x7B5F10
namespace gamemd {
AbstractClass * * String::Tokenize(int a2, ObjectClass * aP2, ObjectClass * aP3)
{
{
  AbstractClass *v12; // ecx
  ObjectClass *v14; // edi
  size_t v15; // esi
  ObjectClass *v17; // ebp
  ObjectClass *v18; // esi
  AbstractClass *v19; // ecx
  char *Str; // [esp+18h] [ebp+8h]

  int v4 = a2; /*0x7b5f13*/
  if ( a2 < 0 ) /*0x7b5f1c*/
    return -1; /*0x7b5f21*/
  while ( 1 )
  {
    signed int v7 = *this ? strlen(*this) : 0;
    if ( v4 >= v7 || !strchr(aP2->__pad_0, (*this)[v4]) ) /*0x7b5f4c*/
      break; /*0x7b5f4c*/
    ++v4; /*0x7b5f58*/
  }
  if ( *this ) /*0x7b5f5b*/
    signed int v8 = strlen(*this); /*0x7b5f6e*/
  else
    v8 = 0; /*0x7b5f61*/
  if ( v4 >= v8 ) /*0x7b5f71*/
    return -1; /*0x7b5f76*/
  int v21 = v4; /*0x7b5f7d*/
  while ( 1 )
  {
    signed int v9 = *this ? strlen(*this) : 0;
    if ( v4 >= v9 || strchr(aP2->__pad_0, (*this)[v4]) ) /*0x7b5fa1*/
      break; /*0x7b5fa1*/
    ++v4; /*0x7b5fad*/
  }
  char * v10 = (char *)(v4 - 1); /*0x7b5fb4*/
  const char * v11 = &(*this)[v21]; /*0x7b5fbd*/
  Str = v10; /*0x7b5fbf*/
  if ( *(_DWORD *)aP3->__pad_0 ) /*0x7b5fc3*/
    __3_YAXPAX_Z(*(void **)aP3->__pad_0); /*0x7b5fca*/
  *(_DWORD *)aP3->__pad_0 = 0; /*0x7b5fd4*/
  if ( v11 ) /*0x7b5fda*/
    v12 = strlen(v11) + 1; /*0x7b5fe3*/
  AbstractClass *v12 = 1; /*0x7b5fe9*/
  _BYTE * v13 = (_BYTE *)__2_YAPAXI_Z(v12); /*0x7b5fef*/
  *(_DWORD *)aP3->__pad_0 = v13; /*0x7b5ff7*/
  *v13 = 0; /*0x7b5ffb*/
  if ( v11 ) /*0x7b5ffe*/
    strcpy(*(char **)aP3->__pad_0, v11); /*0x7b6016*/
  v14 = (ObjectClass *)&DataGlobal_87F8E4[42624]; /*0x7b6029*/
  v15 = (size_t)&v10[-v21 + 1]; /*0x7b602e*/
  if ( *(_DWORD *)aP3->__pad_0 ) /*0x7b6023*/
    v14 = *(ObjectClass **)aP3->__pad_0; /*0x7b6033*/
  char * v16 = (char *)__2_YAPAXI_Z((size_t)&v10[-v21 + 2]); /*0x7b6039*/
  v17 = (ObjectClass *)v16; /*0x7b603e*/
  *v16 = 0; /*0x7b6045*/
  if ( v14 ) /*0x7b6049*/
    strncpy(v16, v14->__pad_0, v15); /*0x7b604e*/
  v17->__pad_0[v15] = 0; /*0x7b6056*/
  v18 = (ObjectClass *)&DataGlobal_87F8E4[42624]; /*0x7b605a*/
  if ( v17 ) /*0x7b6061*/
    v18 = v17; /*0x7b6063*/
  if ( *(_DWORD *)aP3->__pad_0 ) /*0x7b6065*/
    __3_YAXPAX_Z(*(void **)aP3->__pad_0); /*0x7b606c*/
  *(_DWORD *)aP3->__pad_0 = 0; /*0x7b6076*/
  if ( v18 ) /*0x7b607c*/
    v19 = strlen(v18->__pad_0) + 1; /*0x7b6085*/
  AbstractClass *v19 = 1; /*0x7b608b*/
  _BYTE * v20 = (_BYTE *)__2_YAPAXI_Z(v19); /*0x7b6091*/
  *(_DWORD *)aP3->__pad_0 = v20; /*0x7b6099*/
  *v20 = 0; /*0x7b609d*/
  if ( v18 ) /*0x7b60a0*/
    strcpy(*(char **)aP3->__pad_0, v18->__pad_0); /*0x7b60b8*/
  if ( v17 ) /*0x7b60c3*/
    __3_YAXPAX_Z(v17); /*0x7b60c6*/
  return (int)(Str + 1); /*0x7b5f1e*/
}
} // namespace gamemd

// 0x7B7A60
namespace gamemd {
AbstractClass * * String::Tokenize2(int a2, wchar_t * Str, void ** a4)
{
{
  const wchar_t *v7; // eax
  const wchar_t *v8; // eax
  const wchar_t *v10; // eax
  const wchar_t *v12; // esi
  size_t v13; // eax
  const wchar_t *v16; // ebp
  DropListClass *v17; // esi
  wchar_t *v18; // eax
  wchar_t *v19; // ebx
  const wchar_t *v20; // esi
  size_t v21; // eax
  int v4 = a2; /*0x7b7a62*/
  if ( a2 < 0 ) /*0x7b7a6b*/
    return -1; /*0x7b7a6f*/
  while ( 1 ) /*0x7b7a7a*/
  {
    v7 = *this; /*0x7b7a7a*/
    if ( *this ) /*0x7b7a7a*/
      v7 = (const wchar_t *)wcslen(*this); /*0x7b7a81*/
    if ( v4 >= (int)v7 || !wcschr(Str, (*this)[v4]) ) /*0x7b7a95*/
      break; /*0x7b7a95*/
    ++v4; /*0x7b7aa1*/
  }
  v8 = *this; /*0x7b7aa4*/
  if ( *this ) /*0x7b7aa4*/
    v8 = (const wchar_t *)wcslen(*this); /*0x7b7aab*/
  if ( v4 >= (int)v8 ) /*0x7b7ab5*/
    return -1; /*0x7b7ab9*/
  int v9 = v4; /*0x7b7ac1*/
  while ( 1 ) /*0x7b7ac3*/
  {
    v10 = *this; /*0x7b7ac3*/
    if ( *this ) /*0x7b7ac3*/
      v10 = (const wchar_t *)wcslen(*this); /*0x7b7aca*/
    if ( v4 >= (int)v10 || wcschr(Str, (*this)[v4]) ) /*0x7b7ade*/
      break; /*0x7b7ade*/
    ++v4; /*0x7b7aea*/
  }
  int v11 = v4 - 1; /*0x7b7af3*/
  int v23 = v4 - 1; /*0x7b7af8*/
  v12 = &(*this)[v9]; /*0x7b7afe*/
  if ( *a4 ) /*0x7b7af6*/
    __3_YAXPAX_Z(*a4); /*0x7b7b04*/
  *a4 = 0; /*0x7b7b0e*/
  if ( v12 ) /*0x7b7b14*/
    v13 = wcslen(v12) + 1; /*0x7b7b1f*/
  else
    v13 = 1; /*0x7b7b22*/
  _WORD * v14 = __2_YAPAXI_Z(2 * v13); /*0x7b7b2b*/
  *a4 = v14; /*0x7b7b33*/
  *v14 = 0; /*0x7b7b37*/
  if ( v12 ) /*0x7b7b3c*/
    wcscpy((wchar_t *)*a4, v12); /*0x7b7b42*/
  int v15 = v11 - v9; /*0x7b7b4e*/
  v16 = &g_TypeClass_DefaultString; /*0x7b7b50*/
  v17 = v15 + 1; /*0x7b7b55*/
  if ( *a4 ) /*0x7b7b4a*/
    v16 = (const wchar_t *)*a4; /*0x7b7b5a*/
  v18 = (wchar_t *)__2_YAPAXI_Z(2 * v17 + 2); /*0x7b7b61*/
  v19 = v18; /*0x7b7b66*/
  *v18 = 0; /*0x7b7b6d*/
  if ( v16 ) /*0x7b7b72*/
    wcsncpy(v18, v16, v17); /*0x7b7b77*/
  v19[v17] = 0; /*0x7b7b7f*/
  v20 = &g_TypeClass_DefaultString; /*0x7b7b88*/
  if ( v19 ) /*0x7b7b8d*/
    v20 = v19; /*0x7b7b8f*/
  if ( *a4 ) /*0x7b7b91*/
    __3_YAXPAX_Z(*a4); /*0x7b7b98*/
  *a4 = 0; /*0x7b7ba2*/
  if ( v20 ) /*0x7b7ba8*/
    v21 = wcslen(v20) + 1; /*0x7b7bb3*/
  else
    v21 = 1; /*0x7b7bb6*/
  _WORD * v22 = __2_YAPAXI_Z(2 * v21); /*0x7b7bbf*/
  *a4 = v22; /*0x7b7bc7*/
  *v22 = 0; /*0x7b7bcb*/
  if ( v20 ) /*0x7b7bd0*/
    wcscpy((wchar_t *)*a4, v20); /*0x7b7bd6*/
  if ( v19 ) /*0x7b7be0*/
    __3_YAXPAX_Z(v19); /*0x7b7be3*/
  return v23 + 1; /*0x7b7a6d*/
}
} // namespace gamemd

// 0x7CCA34
namespace gamemd {
exception * * int sub_7CCA34(unsigned char * a1, unsigned int a2, unsigned char * a3, int a4, void * a5)
{
{
  unsigned __int8 *v6; // esi
  unsigned __int8 v7; // al
  int v10; // [esp+Ch] [ebp-8h]
  unsigned int v11; // [esp+10h] [ebp-4h] BYREF
  v11 = a2; /*0x7cca44*/
  InterlockedIncrement(&CRTGlobal_B78BA4); /*0x7cca48*/
  if ( CRTGlobal_B78BA0 ) /*0x7cca5c*/
  {
    InterlockedDecrement(&CRTGlobal_B78BA4); /*0x7cca5f*/
    _lock(19); /*0x7cca63*/
    v10 = 1; /*0x7cca69*/
  }
  else
  {
    v10 = 0; /*0x7cca72*/
  }
  exception *v5 = a5; /*0x7cca75*/
  if ( !a5 ) /*0x7cca7a*/
    v5 = off_87C1E0; /*0x7cca7c*/
  a5 = v5; /*0x7cca84*/
  if ( v11 ) /*0x7cca87*/
  {
    v6 = a3; /*0x7cca89*/
    do /*0x7ccafe*/
    {
      v7 = *v6; /*0x7cca8c*/
      if ( !*v6 ) /*0x7cca8c*/
        break; /*0x7cca90*/
      if ( v7 == 37 ) /*0x7cca94*/
      {
        CRTGlobal_B78BAC = 0; /*0x7ccac8*/
        char * v8 = (char *)(v6 + 1); /*0x7ccacf*/
        if ( *v8 == 35 ) /*0x7ccad3*/
        {
          CRTGlobal_B78BAC = 1; /*0x7ccad5*/
          ++v8; /*0x7ccadf*/
        }
        _expandtime(*v8, a4, &a1, &v11, a5); /*0x7ccaf1*/
        v6 = (unsigned __int8 *)(v8 + 1); /*0x7ccaf9*/
      }
      else
      {
        if ( *((char *)DataGlobal_87C590 + 2 * v7 + 1) < 0 && v11 > 1 ) /*0x7ccaaa*/
        {
          *a1++ = v7; /*0x7ccaaf*/
          ++v6; /*0x7ccab4*/
          --v11; /*0x7ccab5*/
        }
        *a1++ = *v6++; /*0x7ccabd*/
        --v11; /*0x7ccac3*/
      }
    }
    while ( v11 ); /*0x7ccafe*/
  }
  if ( v10 ) /*0x7ccb04*/
    _unlock(19); /*0x7ccb08*/
  else
    InterlockedDecrement(&CRTGlobal_B78BA4); /*0x7ccb11*/
  if ( !v11 ) /*0x7ccb1a*/
    return 0; /*0x7ccb2a*/
  *a1 = 0; /*0x7ccb1f*/
  return a2 - v11; /*0x7ccb17*/
}
} // namespace gamemd

// 0x4F4C30
namespace gamemd {
char * String::CopyUpper(ObjectClass * aP1)
{
{
    strcpy(this, aP1->__pad_0);
    _strupr(this);
    return this;
}
}
} // namespace gamemd

// 0x4F4C70
namespace gamemd {
char * String::Copy(const char * a2)
{
{
    strcpy(this, a2);
    return this;
}
}
} // namespace gamemd

// 0x4F4CB0
namespace gamemd {
char * String::CopyChecked(const char * a2)
{
{
    strcpy(this, a2);
    return this;
}
}
} // namespace gamemd

// 0x4F4CE0
namespace gamemd {
bool String::Equals(ObjectClass * aP1)
{
{
    return strcmp(this, aP1->__pad_0) == 0;
}
}
} // namespace gamemd

// 0x5E2620
namespace gamemd {
unsigned int String::ComputeHash()
{
{
    unsigned int v2;
    unsigned int i;
    char *v4;
    v2 = String::Length(this);
    for ( i = 0; i < String::Length(this); ++i )
  {
    v4 = String::GetOrEmpty((char **)this);
    v2 = ((i + v4[i] + v2) >> 24) ^ ((i + v4[i] + v2) << 8);
  }
    return v2;
}
}
} // namespace gamemd

// 0x727CF0
namespace gamemd {
char * String::Trim()
{
{
    char v2;
    const char *v3;
    signed int i;
    if ( this )
  {
    v2 = *(void**)this;
    v3 = this;
    if ( *(void**)this )
    {
    do
      {
    if ( (unsigned char)v2 > 0x20u )
    break;
    v2 = *++v3;
      }
    while ( v2 );
    if ( v3 != this )
    strcpy(this, v3);
    }
    for ( i = strlen(this) - 1; i >= 0; --i )
    {
    if ( !*v3 )
    break;
    if ( (unsigned char)*(this + i) > 0x20u )
    break;
    *(this + i) = 0;
    }
  }
    return this;
}
}
} // namespace gamemd

// 0x777B30
namespace gamemd {
ObjectClass * String::FormatDword()
{
{
    sprintf(this, (ObjectClass *)&DataGlobal_817F40.fallRate, DataGlobal_822D1C);
    return (ObjectClass *)this;
}
}
} // namespace gamemd

// 0x777B60
namespace gamemd {
ObjectClass * String::CopyConstant()
{
{
    strncpy(this, g_Str_gsmallwoo, (IUnknown *)0x20);
    return (ObjectClass *)this;
}
}
} // namespace gamemd

// 0x7B4630
namespace gamemd {
char ** String::Assign(const char * a2)
{
{
    size_t v3;
    char *v4;
    *(void**)this = 0;
    if ( a2 )
    v3 = strlen(a2) + 1;
    else
    v3 = 1;
    v4 = (char *)__2_YAPAXI_Z(v3);
    *(void**)this = v4;
    *v4 = 0;
    if ( a2 )
    strcpy(*(void**)this, a2);
    return this;
}
}
} // namespace gamemd

// 0x7B4690
namespace gamemd {
char ** String::AssignFromPtr(const char ** a2)
{
{
    char *v3;
    *(void**)this = 0;
    if ( *a2 )
  {
    v3 = (char *)__2_YAPAXI_Z(strlen(*a2) + 1);
    *(void**)this = v3;
    strcpy(v3, *a2);
  }
    return this;
}
}
} // namespace gamemd

// 0x7B4710
namespace gamemd {
bool String::Equals_Alt(const char * a2)
{
{
    const char *v2;
    v2 = *(void**)this;
    if ( !*(void**)this && !a2 )
    return 1;
    if ( v2 && a2 )
    return strcmp(v2, a2) == 0;
    return 0;
}
}
} // namespace gamemd

// 0x7B4780
namespace gamemd {
bool String::Compare(const char ** a2)
{
{
    const char *v2;
    v2 = *(void**)this;
    if ( !*(void**)this && !*a2 )
    return 1;
    if ( v2 && *a2 )
    return strcmp(v2, *a2) == 0;
    return 0;
}
}
} // namespace gamemd

// 0x7B47F0
namespace gamemd {
bool String::NotEquals(const char * a2)
{
{
    const char *v2;
    v2 = *(void**)this;
    if ( !*(void**)this && !a2 )
    return 0;
    if ( v2 && a2 )
    return strcmp(v2, a2) != 0;
    return 1;
}
}
} // namespace gamemd

// 0x7B48D0
namespace gamemd {
void ** String::Assign_Alt(CCINIClass * aP1)
{
{
    size_t v3;
    char *v4;
    if ( *(void**)this )
    __3_YAXPAX_Z(*(void**)this);
    *(void**)this = 0;
    if ( aP1 )
    v3 = strlen(aP1->__pad_0) + 1;
    else
    v3 = 1;
    v4 = (char *)__2_YAPAXI_Z(v3);
    *(void**)this = v4;
    *v4 = 0;
    if ( aP1 )
    strcpy((char *)*(void**)this, aP1->__pad_0);
    return this;
}
}
} // namespace gamemd

// 0x7B4940
namespace gamemd {
char ** String::Reassign(AbstractClass * aP1)
{
{
    CCINIClass *v3;
    const char *v4;
    size_t v5;
    char *v6;
    v3 = (CCINIClass *)*(void**)this;
    if ( (*(void**)this || *(int *)aP1->__pad_0) && (!v3 || !*(int *)aP1->__pad_0 || strcmp(*(void**)this, *(const char **)aP1->__pad_0)) )
  {
    v4 = *(const char **)aP1->__pad_0;
    if ( !*(int *)aP1->__pad_0 )
    v4 = &DataGlobal_87F8E4[42624];
    if ( v3 )
    __3_YAXPAX_Z(v3);
    *(void**)this = 0;
    if ( v4 )
    v5 = strlen(v4) + 1;
    else
    v5 = 1;
    v6 = (char *)__2_YAPAXI_Z(v5);
    *(void**)this = v6;
    *v6 = 0;
    if ( v4 )
    strcpy(*(void**)this, v4);
  }
    return this;
}
}
} // namespace gamemd

// 0x7B4C20
namespace gamemd {
const char ** String::Append(CCINIClass * aP1)
{
{
    CCINIClass *v2;
    unsigned int v4;
    CCINIClass *v5;
    size_t v6;
    char *v7;
    v2 = aP1;
    if ( aP1 )
  {
    v4 = strlen(aP1->__pad_0) + 1;
    v5 = (CCINIClass *)*(void**)this;
    v6 = v4;
    if ( *(void**)this )
    v6 = strlen(*(void**)this) + v4;
    v7 = (char *)__2_YAPAXI_Z(v6);
    *(void**)this = v7;
    if ( v5 )
    {
    strcpy(v7, v5->__pad_0);
    v2 = aP1;
    }
    else
    {
    *v7 = 0;
    }
    strcat((char *)*(void**)this, v2->__pad_0);
    if ( v5 )
    __3_YAXPAX_Z(v5);
  }
    return this;
}
}
} // namespace gamemd

// 0x7B4CD0
namespace gamemd {
const char ** String::Append2(IUnknown * aP1)
{
{
    ObjectClass *v2;
    ObjectClass *v4;
    unsigned int v5;
    CCINIClass *v6;
    size_t v7;
    char *v8;
    ObjectClass *aP1a;
    v2 = (ObjectClass *)aP1->field_0;
    if ( aP1->field_0 )
  {
    aP1a = (ObjectClass *)aP1->field_0;
    v4 = v2;
  }
    else
  {
    v4 = (ObjectClass *)&DataGlobal_87F8E4[42624];
    aP1a = (ObjectClass *)&DataGlobal_87F8E4[42624];
  }
    if ( v4 )
  {
    v5 = strlen(v4->__pad_0) + 1;
    v6 = (CCINIClass *)*(void**)this;
    v7 = v5;
    if ( *(void**)this )
    v7 = strlen(*(void**)this) + v5;
    v8 = (char *)__2_YAPAXI_Z(v7);
    *(void**)this = v8;
    if ( v6 )
    {
    strcpy(v8, v6->__pad_0);
    v4 = aP1a;
    }
    else
    {
    *v8 = 0;
    }
    strcat((char *)*(void**)this, v4->__pad_0);
    if ( v6 )
    __3_YAXPAX_Z(v6);
  }
    return this;
}
}
} // namespace gamemd

// 0x7B4DA0
namespace gamemd {
char ** String::Concat2(char ** a2, const char * a3)
{
{
    char *v4;
    const char *v5;
    char *v6;
    unsigned int v7;
    size_t v8;
    char *v9;
    char *v10;
    v4 = 0;
    if ( *(void**)this )
  {
    v4 = (char *)__2_YAPAXI_Z(strlen(*(void**)this) + 1);
    strcpy(v4, *(void**)this);
  }
    v5 = a3;
    if ( a3 )
  {
    v6 = v4;
    v7 = strlen(a3) + 1;
    v8 = v7;
    if ( v4 )
    v8 = strlen(v4) + v7;
    v9 = (char *)__2_YAPAXI_Z(v8);
    v4 = v9;
    if ( v6 )
    {
    strcpy(v9, v6);
    v5 = a3;
    }
    else
    {
    *v9 = 0;
    }
    strcat(v9, v5);
    if ( v6 )
    __3_YAXPAX_Z(v6);
  }
    *a2 = 0;
    if ( v4 )
  {
    v10 = (char *)__2_YAPAXI_Z(strlen(v4) + 1);
    *a2 = v10;
    strcpy(v10, v4);
    __3_YAXPAX_Z(v4);
  }
    return a2;
}
}
} // namespace gamemd

// 0x7B4ED0
namespace gamemd {
char ** String::Concat(char ** a1, IUnknown * aP2)
{
{
    char *v4;
    ObjectClass *v5;
    ObjectClass *v6;
    char *v7;
    unsigned int v8;
    size_t v9;
    char *v10;
    char *v11;
    ObjectClass *aP2a;
    v4 = 0;
    if ( *(void**)this )
  {
    v4 = (char *)__2_YAPAXI_Z(strlen(*(void**)this) + 1);
    strcpy(v4, *(void**)this);
  }
    v5 = (ObjectClass *)aP2->field_0;
    if ( aP2->field_0 )
  {
    aP2a = (ObjectClass *)aP2->field_0;
    v6 = v5;
  }
    else
  {
    v6 = (ObjectClass *)&DataGlobal_87C374[56304];
    aP2a = (ObjectClass *)&DataGlobal_87C374[56304];
  }
    if ( v6 )
  {
    v7 = v4;
    v8 = strlen(v6->__pad_0) + 1;
    v9 = v8;
    if ( v4 )
    v9 = strlen(v4) + v8;
    v10 = (char *)__2_YAPAXI_Z(v9);
    v4 = v10;
    if ( v7 )
    {
    strcpy(v10, v7);
    v6 = aP2a;
    }
    else
    {
    *v10 = 0;
    }
    strcat(v10, v6->__pad_0);
    if ( v7 )
    __3_YAXPAX_Z(v7);
  }
    *a1 = 0;
    if ( v4 )
  {
    v11 = (char *)__2_YAPAXI_Z(strlen(v4) + 1);
    *a1 = v11;
    strcpy(v11, v4);
    __3_YAXPAX_Z(v4);
  }
    return a1;
}
}
} // namespace gamemd

// 0x7B5020
namespace gamemd {
char String::Erase(MPCooperative * aP1, int a3)
{
{
    int v4;
    int v5;
    unsigned int v6;
    char *aP1a;
    v4 = (int)aP1;
    v5 = a3;
    v6 = strlen(*(void**)this) + 1;
    if ( (int)aP1 + a3 > (int)(v6 - 1) )
    v4 = v6 - 1 - a3;
    if ( v4 < 0 )
  {
    v5 = v4 + a3;
    v4 = 0;
    a3 = v5;
  }
    if ( v5 <= 0 )
    return 0;
    aP1a = (char *)__2_YAPAXI_Z(v6 - v5);
    (*(void**)this)[v4] = 0;
    (*(void**)this)[v4 - 1 + v5] = 0;
    strcpy(aP1a, *(void**)this);
    strcat(aP1a, &(*(void**)this)[v4 + a3]);
    __3_YAXPAX_Z((void *)*(void**)this);
    *(void**)this = aP1a;
    return 1;
}
}
} // namespace gamemd

// 0x7B5230
namespace gamemd {
void String::TrimRight(ObjectClass * aP1)
{
{
    unsigned int v3;
    unsigned int v4;
    unsigned int v5;
    const char *v6;
    size_t v8;
    ObjectClass *v9;
    CCINIClass *v10;
    CCINIClass *v11;
    ObjectClass *v12;
    size_t v13;
    const char *v14;
    if ( *(void**)this )
    v3 = strlen(*(void**)this);
    else
    v3 = 0;
    v4 = v3;
    v5 = v3 - 1;
    if ( v4 )
  {
    do
    {
    v6 = *(const char **)aP1->__pad_0;
    if ( !*(int *)aP1->__pad_0 )
    v6 = &DataGlobal_87F8E4[42624];
    if ( !strchr(v6, (*(void**)this)[v5]) )
    break;
    }
    while ( v5-- );
  }
    v8 = v5 + 1;
    v9 = (ObjectClass *)&DataGlobal_87F8E4[42624];
    if ( *(void**)this )
    v9 = (ObjectClass *)*(void**)this;
    v10 = (CCINIClass *)__2_YAPAXI_Z(v8 + 1);
    v11 = v10;
    v10->__pad_0[0] = 0;
    if ( v9 )
    strncpy(v10->__pad_0, v9->__pad_0, v8);
    v11->__pad_0[v8] = 0;
    v12 = (ObjectClass *)&DataGlobal_87F8E4[42624];
    if ( v11 )
    v12 = (ObjectClass *)v11;
    if ( *(void**)this )
    __3_YAXPAX_Z((void *)*(void**)this);
    *(void**)this = 0;
    if ( v12 )
    v13 = strlen(v12->__pad_0) + 1;
    else
    v13 = 1;
    v14 = (const char *)__2_YAPAXI_Z(v13);
    *(void**)this = v14;
    *v14 = 0;
    if ( v12 )
    strcpy((char *)*(void**)this, v12->__pad_0);
    if ( v11 )
    __3_YAXPAX_Z(v11);
}
}
} // namespace gamemd

// 0x7B5400
namespace gamemd {
char * String::GetOrEmpty()
{
{
    char *result;
    result = *(void**)this;
    if ( !*(void**)this )
    return &g_INI_DefaultBuffer;
    return result;
}
}
} // namespace gamemd

// 0x7B5440
namespace gamemd {
char * String::GetOrEmpty_Alt()
{
{
    char *result;
    result = *(void**)this;
    if ( !*(void**)this )
    return &g_INI_DefaultBuffer;
    return result;
}
}
} // namespace gamemd

// 0x7B5A40
namespace gamemd {
char String::Assign_Bool(const char * a2)
{
{
    size_t v3;
    char *v4;
    if ( *(void**)this )
    __3_YAXPAX_Z(*(void**)this);
    *(void**)this = 0;
    if ( a2 )
    v3 = strlen(a2) + 1;
    else
    v3 = 1;
    v4 = __2_YAPAXI_Z(v3);
    *(void**)this = v4;
    *v4 = 0;
    if ( a2 )
    strcpy((char *)*(void**)this, a2);
    return 1;
}
}
} // namespace gamemd

// 0x7B5B30
namespace gamemd {
void String::ToLower()
{
{
    unsigned int i;
    char v3;
    for ( i = 0; *(void**)this && i < strlen(*(void**)this); ++i )
  {
    v3 = (*(void**)this)[i];
    if ( v3 >= 65 && v3 <= 90 )
    (*(void**)this)[i] = tolower(v3);
  }
}
}
} // namespace gamemd

// 0x7B5B80
namespace gamemd {
char ** String::ToLowerCopy(ObjectClass * aP1)
{
{
    char *v3;
    unsigned int i;
    char v5;
    char *v6;
    v3 = 0;
    if ( *(void**)this )
  {
    v3 = (char *)__2_YAPAXI_Z(strlen(*(void**)this) + 1);
    strcpy(v3, *(void**)this);
  }
    for ( i = 0; v3 && i < strlen(v3); ++i )
  {
    v5 = v3[i];
    if ( v5 >= 65 && v5 <= 90 )
    v3[i] = tolower(v5);
  }
    *(int *)aP1->__pad_0 = 0;
    if ( v3 )
  {
    v6 = (char *)__2_YAPAXI_Z(strlen(v3) + 1);
    *(int *)aP1->__pad_0 = v6;
    strcpy(v6, v3);
    __3_YAXPAX_Z(v3);
  }
    return (char **)aP1;
}
}
} // namespace gamemd

// 0x7B5D70
namespace gamemd {
char String::CopyTruncated(size_t Count)
{
{
    const char *v3;
    char *v4;
    char *v5;
    const char *v6;
    size_t v7;
    char *v8;
    v3 = (const char *)*(void**)this;
    if ( !*(void**)this )
    v3 = &g_INI_DefaultBuffer;
    v4 = (char *)__2_YAPAXI_Z(Count + 1);
    v5 = v4;
    *v4 = 0;
    if ( v3 )
    strncpy(v4, v3, Count);
    v5[Count] = 0;
    v6 = &g_INI_DefaultBuffer;
    if ( v5 )
    v6 = v5;
    if ( *(void**)this )
    __3_YAXPAX_Z(*(void**)this);
    *(void**)this = 0;
    if ( v6 )
    v7 = strlen(v6) + 1;
    else
    v7 = 1;
    v8 = __2_YAPAXI_Z(v7);
    *(void**)this = v8;
    *v8 = 0;
    if ( v6 )
    strcpy((char *)*(void**)this, v6);
    if ( v5 )
    __3_YAXPAX_Z(v5);
    return 1;
}
}
} // namespace gamemd

// 0x7B78D0
namespace gamemd {
char String::TruncateTo(size_t Count)
{
{
    const wchar_t *v3;
    wchar_t *v4;
    wchar_t *v5;
    const wchar_t *v6;
    size_t v7;
    short *v8;
    v3 = (const wchar_t *)*(void**)this;
    if ( !*(void**)this )
    v3 = &g_TypeClass_DefaultString;
    v4 = (wchar_t *)__2_YAPAXI_Z(2 * Count + 2);
    v5 = v4;
    *v4 = 0;
    if ( v3 )
    wcsncpy(v4, v3, Count);
    v5[Count] = 0;
    v6 = &g_TypeClass_DefaultString;
    if ( v5 )
    v6 = v5;
    if ( *(void**)this )
    __3_YAXPAX_Z(*(void**)this);
    *(void**)this = 0;
    if ( v6 )
    v7 = wcslen(v6) + 1;
    else
    v7 = 1;
    v8 = __2_YAPAXI_Z(2 * v7);
    *(void**)this = v8;
    *v8 = 0;
    if ( v6 )
    wcscpy((wchar_t *)*(void**)this, v6);
    if ( v5 )
    __3_YAXPAX_Z(v5);
    return 1;
}
}
} // namespace gamemd

// 0x7CCA19
namespace gamemd {
int String::Wrapper5to4(CampaignScore * aP0, int a2, int a3, int a4)
{
{
    return String_Helper_7CCA34((unsigned char *)aP0, a2, (unsigned char *)a3, a4, 0);
}
}
} // namespace gamemd
