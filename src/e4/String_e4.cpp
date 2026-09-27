// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_5EEF60_e4.hpp"
#include "e4/classes/E4Recv_7B4A10_e4.hpp"
#include "e4/classes/E4Recv_7B6780_e4.hpp"
#include "e4/classes/E4Recv_7B7660_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x49B760
namespace gamemd {
void String::AssignWideToChar(CampaignScore * aP1, CampaignScore * aP2)
{
  if ( aP1 ) /*0x49b76b*/
    strcpy(ToWideStringChar(aP1)); /*0x49b788*/
  else
    *(unsigned int *)this = 0; /*0x49b793*/
  if ( aP2 ) /*0x49b79c*/
    strcpy(&this->u32_70, ToWideStringChar(aP2)); /*0x49b7bc*/
  else
    *(&this->ptr_88) = 0; /*0x49b7cc*/
}
}
// 0x4CB5E0
namespace gamemd {
void * String::AllocAndCopy(RandomStruct * aP1, IUnknown * aP2)
{
  char *v4; // eax
  unsigned int v5; // edx
  char *v6; // edi

  strncpy(aP1, 4u); /*0x4cb5ed*/
  this->ptr_4 = 2; /*0x4cb5f4*/
  this->u16_6 = 1; /*0x4cb5fa*/
  v4 = (char *)operator new(1u); /*0x4cb600*/
  v5 = *(unsigned int *)&this->u32_C; /*0x4cb611*/
  this->ptr_8 = v4; /*0x4cb613*/
  qmemcpy(v4, &aP2, 4 * (v5 >> 2)); /*0x4cb619*/
  v6 = &v4[4 * (v5 >> 2)]; /*0x4cb619*/
  qmemcpy(v6, &aP2 + 4 * (v5 >> 2), v5 & 3); /*0x4cb625*/
  this->u32_C = 0; /*0x4cb628*/
  return this; /*0x4cb627*/
}
}
// 0x5BD5A0
namespace gamemd {
void String::Release()
{
  if ( this->u32_C ) /*0x5bd5a3*/
    RA2_OPDEL(this->u32_C); /*0x5bd5ab*/
  this->u32_C = 0; /*0x5bd5b3*/
}
}
// 0x5D0380
namespace gamemd {
ObjectClass * * String::SplitComma(ObjectClass * aP1)
{
  int v3; // ebx
  int v4; // ebx
  int v5; // eax
  int v6; // ebx
  int v7; // eax
  int v8; // eax
  int v10; // [esp+Ch] [ebp-4h] BYREF

  String::Assign(0); /*0x5d0389*/
  this->ptr_4 = 0; /*0x5d0392*/
  this->ptr_8 = 0; /*0x5d0395*/
  this->u32_C = 0; /*0x5d0398*/
  unknown_libname_73(&v10); /*0x5d039b*/
  v3 = String::Tokenize(aP1, 0, Delimiter, (void **)&v10); /*0x5d03ba*/
  if ( String::Length((const char **)&v10) ) /*0x5d03bc*/
    String::Reassign((const char **)&v10); /*0x5d03cc*/
  v4 = String::Tokenize(aP1, v3, Delimiter, (void **)&v10); /*0x5d03e7*/
  if ( String::Length((const char **)&v10) ) /*0x5d03e9*/
  {
    __1_Timevec_std__QAE_XZ((std::_Timevec *)&v10); /*0x5d03f6*/
    this->ptr_4 = v5; /*0x5d03fb*/
  }
  v6 = String::Tokenize(aP1, v4, Delimiter, (void **)&v10); /*0x5d0414*/
  if ( String::Length((const char **)&v10) ) /*0x5d0416*/
  {
    __1_Timevec_std__QAE_XZ((std::_Timevec *)&v10); /*0x5d0423*/
    this->ptr_8 = v7; /*0x5d0428*/
  }
  String::Tokenize(aP1, v6, Delimiter, (void **)&v10); /*0x5d0438*/
  if ( String::Length((const char **)&v10) ) /*0x5d0441*/
  {
    __1_Timevec_std__QAE_XZ((std::_Timevec *)&v10); /*0x5d044e*/
    this->u32_C = v8; /*0x5d0453*/
  }
  DeleteAndZero((void **)&v10); /*0x5d045a*/
  return this; /*0x5d0461*/
}
}
// 0x5F3350
namespace gamemd {
int String::NormalizeNewlines()
{
  const char *v0; // esi
  int64_t v1; // rax
  char v2; // al

  v0 = (const char *)dword_A8EA7C; /*0x5f3351*/
  v1 = 0; /*0x5f335d*/
  if ( strlen((const char *)dword_A8EA7C) ) /*0x5f3361*/
  {
    while ( 1 ) /*0x5f3368*/
    {
      v2 = v0[IDA_HIDWORD(v1)]; /*0x5f3368*/
      if ( v2 == 13 ) /*0x5f336d*/
        break; /*0x5f336d*/
      if ( v2 == 10 ) /*0x5f3377*/
      {
        v0[IDA_HIDWORD(v1)] = 2; /*0x5f3379*/
        goto LABEL_6; /*0x5f3379*/
      }
  LABEL_7:
      IDA_LODWORD(v1) = 0; /*0x5f3383*/
      ++IDA_HIDWORD(v1); /*0x5f338a*/
      if ( IDA_HIDWORD(v1) >= strlen(v0) ) /*0x5f3392*/
        return v1; /*0x5f3392*/
    }
    v0[IDA_HIDWORD(v1)] = 1; /*0x5f336f*/
  LABEL_6:
    v0 = (const char *)dword_A8EA7C; /*0x5f337d*/
    goto LABEL_7; /*0x5f337d*/
  }
  return v1; /*0x5f3394*/
}
}
// 0x763690
namespace gamemd {
ControlClass * * String::To_Waypoint()
{
  int v2; // esi

  v2 = -1; /*0x763694*/
  if ( isalpha(*this) && (v2 = toupper(*this) - 65, isalpha(this->ptr_4)) ) /*0x7636ba*/
    return toupper(this->ptr_4) + 26 * v2 - 39; /*0x7636db*/
  else
    return v2; /*0x7636e0*/
}
}
// 0x7B51D0
namespace gamemd {
void String::TrimLeft(ObjectClass * aP1)
{
  int i; // esi
  signed int v4; // ecx
  const char *v5; // eax

  for ( i = 0; ; ++i )
  {
    v4 = *this ? strlen(*this) : 0;
    if ( i >= v4 ) /*0x7b51f4*/
      break; /*0x7b51f4*/
    v5 = *aP1; /*0x7b51f6*/
    if ( !*aP1 ) /*0x7b51f6*/
      v5 = &g_INI_DefaultBuffer; /*0x7b51fd*/
    if ( !strchr(v5, (*this)[i]) ) /*0x7b5208*/
      break; /*0x7b5208*/
  }
  if ( i > 0 ) /*0x7b5219*/
    String::Erase(0, i); /*0x7b5220*/
}
}
// 0x7B54B0
namespace gamemd {
unsigned int String::Length()
{
  if ( *this ) /*0x7b54b1*/
    return strlen(); /*0x7b54c6*/
  else
    return 0; /*0x7b54b7*/
}
}
// 0x7B57A0
namespace gamemd {
AbstractClass * * String::Replace(char * SubStr, const char * a3)
{
  void **v3; // edi
  char * v4;
  const char *v5; // ebp
  char *v6; // eax
  size_t v7; // eax
  char * v8;
  size_t v9; // edx
  char *v10; // eax
  const char *v11; // esi
  char * v12;
  unsigned int v13; // kr1C_4
  size_t v14; // edx
  char *v15; // eax
  const char * v16;
  unsigned int v17; // kr30_4
  size_t v18; // edx
  char *v19; // eax
  const unsigned int v20;
  size_t v21; // ecx
  char *v22; // eax
  char * Block;
  size_t Count; // [esp+14h] [ebp-8h]
  char *v27; // [esp+18h] [ebp-4h]
  char * v28;

  v3 = (const char *)((void **)this);
  v4 = 0; /*0x7b57a8*/
  v5 = *this; /*0x7b57ae*/
  if ( !*this ) /*0x7b57ae*/
    v5 = &g_INI_DefaultBuffer; /*0x7b57b4*/
  if ( !v5 ) /*0x7b57bc*/
    goto LABEL_33; /*0x7b57bc*/
  while ( *v5 ) /*0x7b57c6*/
  {
    v6 = (char *)(strstr(v5, SubStr));
    v27 = v6; /*0x7b57da*/
    if ( !v6 ) /*0x7b57e0*/
    {
      v16 = v4; /*0x7b5924*/
      v17 = strlen(v5) + 1; /*0x7b5926*/
      v28 = v4; /*0x7b592b*/
      v18 = v17; /*0x7b5931*/
      if ( v4 ) /*0x7b5934*/
        v18 = strlen(v4) + v17; /*0x7b5940*/
      v19 = (char *)operator new(v18); /*0x7b5943*/
      v4 = v19; /*0x7b594b*/
      if ( v16 ) /*0x7b594f*/
        strcpy(v19, v16); /*0x7b5967*/
      else
        *v19 = 0; /*0x7b5972*/
      strcat(v19, v5); /*0x7b5993*/
      if ( v28 ) /*0x7b59a2*/
        RA2_OPDEL(v28); /*0x7b59a5*/
      break; /*0x7b59a5*/
    }
    v7 = v6 - v5; /*0x7b57e6*/
    Count = v7; /*0x7b57e8*/
    if ( v7 ) /*0x7b57ec*/
    {
      v8 = v4; /*0x7b57ee*/
      v9 = v7 + 1; /*0x7b57f0*/
      Block = v4; /*0x7b57f5*/
      if ( v4 ) /*0x7b57f9*/
        v9 = strlen(v4) + 1 + v7; /*0x7b5807*/
      v10 = (char *)operator new(v9); /*0x7b580a*/
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
        RA2_OPDEL(v8); /*0x7b5854*/
    }
    v11 = a3; /*0x7b585c*/
    if ( a3 ) /*0x7b5862*/
    {
      v12 = v4; /*0x7b586f*/
      v13 = strlen(a3) + 1; /*0x7b5871*/
      v14 = v13; /*0x7b5878*/
      if ( v4 ) /*0x7b587b*/
        v14 = strlen(v4) + v13; /*0x7b5887*/
      v15 = (char *)operator new(v14); /*0x7b588a*/
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
        RA2_OPDEL(v12); /*0x7b58ec*/
    }
    v5 = &v27[strlen(SubStr)]; /*0x7b5908*/
    if ( !v5 ) /*0x7b590a*/
      break; /*0x7b590a*/
  }
  if ( !v4 ) /*0x7b59af*/
  {
    v3 = (const unsigned int)((void **)this);
  LABEL_33:
    v20 = &g_INI_DefaultBuffer; /*0x7b59b5*/
    goto LABEL_35; /*0x7b59ba*/
  }
  v3 = (const unsigned int)((void **)this);
  v20 = v4; /*0x7b59c0*/
  LABEL_35:
  if ( *v3 ) /*0x7b59c2*/
    RA2_OPDEL(*v3); /*0x7b59c9*/
  *v3 = 0; /*0x7b59d3*/
  if ( v20 ) /*0x7b59d9*/
    v21 = strlen(v20) + 1; /*0x7b59e2*/
  else
    v21 = 1; /*0x7b59e8*/
  v22 = (char *)operator new(v21); /*0x7b59ee*/
  *this = v22; /*0x7b59fc*/
  *v22 = 0; /*0x7b59fe*/
  if ( v20 ) /*0x7b5a01*/
    strcpy(v20); /*0x7b5a1d*/
  if ( v4 ) /*0x7b5a29*/
    RA2_OPDEL(v4); /*0x7b5a2c*/
  return 1; /*0x7b5a34*/
}
}
// 0x7B5F10
namespace gamemd {
AbstractClass * * String::Tokenize(int a2, ObjectClass * aP2, ObjectClass * aP3)
{
  int v4; // esi
  signed int v7; // ecx
  signed int v8; // ecx
  signed int v9; // ecx
  char *v10; // ebp
  const char *v11; // esi
  size_t v12; // ecx
  unsigned char *v13; // eax
  const char *v14; // edi
  size_t v15; // esi
  char *v16; // eax
  char *v17; // ebp
  const char *v18; // esi
  size_t v19; // ecx
  unsigned char *v20; // eax
  int v21; // [esp+14h] [ebp+4h]
  char *Stra; // [esp+18h] [ebp+8h]

  v4 = a2; /*0x7b5f13*/
  if ( a2 < 0 ) /*0x7b5f1c*/
    return -1; /*0x7b5f21*/
  while ( 1 )
  {
    v7 = *this ? strlen(*this) : 0;
    if ( v4 >= v7 || !strchr(aP2, (*this)[v4]) ) /*0x7b5f4c*/
      break; /*0x7b5f4c*/
    ++v4; /*0x7b5f58*/
  }
  if ( *this ) /*0x7b5f5b*/
    v8 = strlen(*this); /*0x7b5f6e*/
  else
    v8 = 0; /*0x7b5f61*/
  if ( v4 >= v8 ) /*0x7b5f71*/
    return -1; /*0x7b5f76*/
  v21 = v4; /*0x7b5f7d*/
  while ( 1 )
  {
    v9 = *this ? strlen(*this) : 0;
    if ( v4 >= v9 || strchr(aP2, (*this)[v4]) ) /*0x7b5fa1*/
      break; /*0x7b5fa1*/
    ++v4; /*0x7b5fad*/
  }
  v10 = (unsigned char *)((char *)(v4 - 1));
  v11 = &(*this)[v21]; /*0x7b5fbd*/
  Stra = v10; /*0x7b5fbf*/
  if ( *aP3 ) /*0x7b5fc3*/
    RA2_OPDEL(*aP3); /*0x7b5fca*/
  *(unsigned int *)aP3 = 0; /*0x7b5fd4*/
  if ( v11 ) /*0x7b5fda*/
    v12 = strlen(v11) + 1; /*0x7b5fe3*/
  else
    v12 = 1; /*0x7b5fe9*/
  v13 = operator new(v12); /*0x7b5fef*/
  *aP3 = v13; /*0x7b5ff7*/
  *v13 = 0; /*0x7b5ffb*/
  if ( v11 ) /*0x7b5ffe*/
    strcpy((char *)*aP3, v11); /*0x7b6016*/
  v14 = (unsigned char *)(&g_INI_DefaultBuffer);
  v15 = (size_t)&v10[-v21 + 1]; /*0x7b602e*/
  if ( *aP3 ) /*0x7b6023*/
    v14 = (const char *)*aP3; /*0x7b6033*/
  v16 = (char *)operator new((size_t)&v10[-v21 + 2]); /*0x7b6039*/
  v17 = v16; /*0x7b603e*/
  *v16 = 0; /*0x7b6045*/
  if ( v14 ) /*0x7b6049*/
    strncpy(v16, v14, v15); /*0x7b604e*/
  v17[v15] = 0; /*0x7b6056*/
  v18 = &g_INI_DefaultBuffer; /*0x7b605a*/
  if ( v17 ) /*0x7b6061*/
    v18 = v17; /*0x7b6063*/
  if ( *aP3 ) /*0x7b6065*/
    RA2_OPDEL(*aP3); /*0x7b606c*/
  *(unsigned int *)aP3 = 0; /*0x7b6076*/
  if ( v18 ) /*0x7b607c*/
    v19 = strlen(v18) + 1; /*0x7b6085*/
  else
    v19 = 1; /*0x7b608b*/
  v20 = operator new(v19); /*0x7b6091*/
  *aP3 = v20; /*0x7b6099*/
  *v20 = 0; /*0x7b609d*/
  if ( v18 ) /*0x7b60a0*/
    strcpy((char *)*aP3, v18); /*0x7b60b8*/
  if ( v17 ) /*0x7b60c3*/
    RA2_OPDEL(v17); /*0x7b60c6*/
  return (int)(Stra + 1); /*0x7b5f1e*/
}
}
// 0x7B7A60
namespace gamemd {
AbstractClass * * String::Tokenize2(int a2, wchar_t * Str, void ** a4)
{
  int v4; // esi
  const wchar_t *v7; // eax
  const wchar_t *v8; // eax
  int v9; // ebp
  const wchar_t *v10; // eax
  int v11; // ebx
  const wchar_t *v12; // esi
  size_t v13; // eax
  unsigned short *v14; // eax
  int v15; // esi
  const wchar_t *v16; // ebp
  size_t v17; // esi
  wchar_t *v18; // eax
  wchar_t *v19; // ebx
  const wchar_t *v20; // esi
  size_t v21; // eax
  unsigned short *v22; // eax
  int v23; // [esp+10h] [ebp+4h]

  v4 = a2; /*0x7b7a62*/
  if ( a2 < 0 ) /*0x7b7a6b*/
    return -1; /*0x7b7a6f*/
  while ( 1 ) /*0x7b7a7a*/
  {
    v7 = (const wchar_t *)(*this);
    if ( *this ) /*0x7b7a7a*/
      v7 = (const wchar_t *)wcslen(*this); /*0x7b7a81*/
    if ( v4 >= (int)v7 || !wcschr(Str, (*this)[v4]) ) /*0x7b7a95*/
      break; /*0x7b7a95*/
    ++v4; /*0x7b7aa1*/
  }
  v8 = (const wchar_t *)(*this);
  if ( *this ) /*0x7b7aa4*/
    v8 = (const wchar_t *)wcslen(*this); /*0x7b7aab*/
  if ( v4 >= (int)v8 ) /*0x7b7ab5*/
    return -1; /*0x7b7ab9*/
  v9 = v4; /*0x7b7ac1*/
  while ( 1 ) /*0x7b7ac3*/
  {
    v10 = (const wchar_t *)(*this);
    if ( *this ) /*0x7b7ac3*/
      v10 = (const wchar_t *)wcslen(*this); /*0x7b7aca*/
    if ( v4 >= (int)v10 || wcschr(Str, (*this)[v4]) ) /*0x7b7ade*/
      break; /*0x7b7ade*/
    ++v4; /*0x7b7aea*/
  }
  v11 = (unsigned short *)(v4 - 1);
  v23 = v4 - 1; /*0x7b7af8*/
  v12 = &(*this)[v9]; /*0x7b7afe*/
  if ( *a4 ) /*0x7b7af6*/
    RA2_OPDEL(*a4); /*0x7b7b04*/
  *a4 = 0; /*0x7b7b0e*/
  if ( v12 ) /*0x7b7b14*/
    v13 = wcslen(v12) + 1; /*0x7b7b1f*/
  else
    v13 = 1; /*0x7b7b22*/
  v14 = operator new(2 * v13); /*0x7b7b2b*/
  *a4 = v14; /*0x7b7b33*/
  *v14 = 0; /*0x7b7b37*/
  if ( v12 ) /*0x7b7b3c*/
    wcscpy((wchar_t *)*a4, v12); /*0x7b7b42*/
  v15 = v11 - v9; /*0x7b7b4e*/
  v16 = &g_TypeClass_DefaultString; /*0x7b7b50*/
  v17 = v15 + 1; /*0x7b7b55*/
  if ( *a4 ) /*0x7b7b4a*/
    v16 = (const wchar_t *)*a4; /*0x7b7b5a*/
  v18 = (wchar_t *)new wchar_t; /*0x7b7b61*/
  v19 = v18; /*0x7b7b66*/
  *v18 = 0; /*0x7b7b6d*/
  if ( v16 ) /*0x7b7b72*/
    wcsncpy(v18, v16, v17); /*0x7b7b77*/
  v19[v17] = 0; /*0x7b7b7f*/
  v20 = &g_TypeClass_DefaultString; /*0x7b7b88*/
  if ( v19 ) /*0x7b7b8d*/
    v20 = v19; /*0x7b7b8f*/
  if ( *a4 ) /*0x7b7b91*/
    RA2_OPDEL(*a4); /*0x7b7b98*/
  *a4 = 0; /*0x7b7ba2*/
  if ( v20 ) /*0x7b7ba8*/
    v21 = wcslen(v20) + 1; /*0x7b7bb3*/
  else
    v21 = 1; /*0x7b7bb6*/
  v22 = operator new(2 * v21); /*0x7b7bbf*/
  *a4 = v22; /*0x7b7bc7*/
  *v22 = 0; /*0x7b7bcb*/
  if ( v20 ) /*0x7b7bd0*/
    wcscpy((wchar_t *)*a4, v20); /*0x7b7bd6*/
  if ( v19 ) /*0x7b7be0*/
    RA2_OPDEL(v19); /*0x7b7be3*/
  return v23 + 1; /*0x7b7a6d*/
}
}
// 0x7CCA34
namespace gamemd {
exception * * int sub_7CCA34(unsigned char * a1, unsigned int a2, unsigned char * a3, int a4, void * a5)
{
  void *v5; // eax
  uint8_t *v6; // esi
  uint8_t v7; // al
  char *v8; // esi
  int v10; // [esp+Ch] [ebp-8h]
  unsigned int v11; // [esp+10h] [ebp-4h] BYREF

  v11 = a2; /*0x7cca44*/
  InterlockedIncrement(&dword_B78BA4); /*0x7cca48*/
  if ( dword_B78BA0 ) /*0x7cca5c*/
  {
    InterlockedDecrement(&dword_B78BA4); /*0x7cca5f*/
    _lock(19); /*0x7cca63*/
    v10 = 1; /*0x7cca69*/
  }
  else
  {
    v10 = 0; /*0x7cca72*/
  }
  v5 = a5; /*0x7cca75*/
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
        dword_B78BAC = 0; /*0x7ccac8*/
        v8 = (char *)(v6 + 1); /*0x7ccacf*/
        if ( *v8 == 35 ) /*0x7ccad3*/
        {
          dword_B78BAC = 1; /*0x7ccad5*/
          ++v8; /*0x7ccadf*/
        }
        _expandtime(*v8, a4, &a1, &v11, a5); /*0x7ccaf1*/
        v6 = (uint8_t *)(v8 + 1); /*0x7ccaf9*/
      }
      else
      {
        if ( *((char *)off_87C590 + 2 * v7 + 1) < 0 && v11 > 1 ) /*0x7ccaaa*/
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
    InterlockedDecrement(&dword_B78BA4); /*0x7ccb11*/
  if ( !v11 ) /*0x7ccb1a*/
    return 0; /*0x7ccb2a*/
  *a1 = 0; /*0x7ccb1f*/
  return a2 - v11; /*0x7ccb17*/
}
}
// 0x4F4C30
namespace gamemd {
char * String::CopyUpper(ObjectClass * aP1)
{
  strcpy(aP1); /*0x4f4c4e*/
  _strupr(); /*0x4f4c57*/
  return this; /*0x4f4c61*/
}
} // namespace gamemd

// 0x4F4C70
namespace gamemd {
char * String::Copy(const char * a2)
{
  strcpy(a2); /*0x4f4c8c*/
  return this; /*0x4f4c97*/
}
} // namespace gamemd

// 0x4F4CB0
namespace gamemd {
char * String::CopyChecked(const char * a2)
{
  strcpy(a2); /*0x4f4ccc*/
  return this; /*0x4f4cd7*/
}
} // namespace gamemd

// 0x4F4CE0
namespace gamemd {
bool String::Equals(ObjectClass * aP1)
{
  return strcmp(this, aP1) == 0; /*0x4f4d15*/
}
} // namespace gamemd

// 0x5E2620
namespace gamemd {
unsigned int String::ComputeHash()
{
  unsigned int v2; // esi
  unsigned int i; // edi
  char *v4; // eax

  v2 = String::Length(this); /*0x5e262c*/
  for (); ++i ) /*0x5e2630*/
  {
    v4 = String::GetOrEmpty((char **)this); /*0x5e263b*/
    v2 = ((i + v4[i] + v2) >> 24) ^ ((i + v4[i] + v2) << 8); /*0x5e2650*/
  }
  return v2; /*0x5e2660*/
}
} // namespace gamemd

// 0x727CF0
namespace gamemd {
char * String::Trim()
{
  char v2; // al
  const char *v3; // ebx
  signed int i; // ecx

  if ( this ) /*0x727cf5*/
  {
    v2 = *this; /*0x727cf7*/
    v3 = this; /*0x727cfc*/
    if ( *this ) /*0x727cf7*/
    {
      do /*0x727d0a*/
      {
        if ( (uint8_t)v2 > 0x20u ) /*0x727d02*/
          break; /*0x727d02*/
        v2 = *++v3; /*0x727d04*/
      }
      while ( v2 ); /*0x727d0a*/
      if ( v3 != this ) /*0x727d0e*/
        strcpy(v3); /*0x727d27*/
    }
    for ( i = strlen(this) - 1; i >= 0; --i ) /*0x727d3f*/
    {
      if ( !*v3 ) /*0x727d41*/
        break; /*0x727d44*/
      if ( (uint8_t)*(this + i) > 0x20u ) /*0x727d4a*/
        break; /*0x727d4a*/
      *(this + i) = 0; /*0x727d4c*/
    }
  }
  return this; /*0x727d55*/
}
} // namespace gamemd

// 0x777B30
namespace gamemd {
ObjectClass * String::FormatDword()
{
  sprintf(Buffer, "%d", dword_822D1C); /*0x777b3f*/
  return Buffer; /*0x777b49*/
}
} // namespace gamemd

// 0x777B60
namespace gamemd {
ObjectClass * String::CopyConstant()
{
  strncpy(Destination, g_Str_gsmallwoo, 0x20u); /*0x777b6b*/
  return Destination; /*0x777b75*/
}
} // namespace gamemd

// 0x7B4630
namespace gamemd {
char ** String::Assign(const char * a2)
{
  size_t v3; // ecx
  char *v4; // eax

  *this = 0; /*0x7b463b*/
  if ( a2 ) /*0x7b4641*/
    v3 = strlen(a2) + 1; /*0x7b464a*/
  else
    v3 = 1; /*0x7b4650*/
  v4 = (char *)operator new(v3); /*0x7b4656*/
  *this = v4; /*0x7b465e*/
  *v4 = 0; /*0x7b4662*/
  if ( a2 ) /*0x7b4665*/
    strcpy(a2); /*0x7b467d*/
  return this; /*0x7b4686*/
}
} // namespace gamemd

// 0x7B4690
namespace gamemd {
char ** String::AssignFromPtr(const char ** a2)
{
  char *v3; // edx

  *this = 0; /*0x7b4699*/
  if ( *a2 ) /*0x7b469f*/
  {
    v3 = (char *)operator new(strlen(*a2) + 1); /*0x7b46b4*/
    *this = v3; /*0x7b46b9*/
    strcpy(v3, *a2); /*0x7b46d1*/
  }
  return this; /*0x7b46da*/
}
} // namespace gamemd

// 0x7B4710
namespace gamemd {
bool String::Equals_Alt(const char * a2)
{
  const char *v2; // eax

  v2 = *this; /*0x7b4710*/
  if ( !*this && !a2 ) /*0x7b471d*/
    return 1; /*0x7b471f*/
  if ( v2 && a2 ) /*0x7b472b*/
    return strcmp(v2, a2) == 0; /*0x7b474b*/
  return 0; /*0x7b4721*/
}
} // namespace gamemd

// 0x7B4780
namespace gamemd {
bool String::Compare(const char ** a2)
{
  const char *v2; // eax

  v2 = *this; /*0x7b4780*/
  if ( !*this && !*a2 ) /*0x7b478b*/
    return 1; /*0x7b4790*/
  if ( v2 && *a2 ) /*0x7b479a*/
    return strcmp(v2, *a2) == 0; /*0x7b47be*/
  return 0; /*0x7b4792*/
}
} // namespace gamemd

// 0x7B47F0
namespace gamemd {
bool String::NotEquals(const char * a2)
{
  const char *v2; // eax

  v2 = *this; /*0x7b47f0*/
  if ( !*this && !a2 ) /*0x7b47fd*/
    return 0; /*0x7b47ff*/
  if ( v2 && a2 ) /*0x7b480b*/
    return strcmp(v2, a2) != 0; /*0x7b482b*/
  return 1; /*0x7b4801*/
}
} // namespace gamemd

// 0x7B48D0
namespace gamemd {
void ** String::Assign_Alt(CCINIClass * aP1)
{
  size_t v3; // ecx
  unsigned char *v4; // eax

  if ( *this ) /*0x7b48d5*/
    RA2_OPDEL(); /*0x7b48dc*/
  *this = 0; /*0x7b48e8*/
  if ( aP1 ) /*0x7b48f0*/
    v3 = strlen(aP1) + 1; /*0x7b48f9*/
  else
    v3 = 1; /*0x7b48ff*/
  v4 = operator new(v3); /*0x7b4905*/
  *this = v4; /*0x7b490d*/
  *v4 = 0; /*0x7b4911*/
  if ( aP1 ) /*0x7b4914*/
    strcpy(aP1); /*0x7b492c*/
  return this; /*0x7b4935*/
}
} // namespace gamemd

// 0x7B4940
namespace gamemd {
char ** String::Reassign(AbstractClass * aP1)
{
  char *v3; // edi
  char *v4; // esi
  size_t v5; // ecx
  char *v6; // eax

  v3 = *this; /*0x7b4949*/
  if ( (*this || *aP1) && (!v3 || !*aP1 || strcmp(*this, *aP1)) ) /*0x7b496c*/
  {
    v4 = (char *)*aP1; /*0x7b4994*/
    if ( !*aP1 ) /*0x7b4994*/
      v4 = &g_INI_DefaultBuffer; /*0x7b499a*/
    if ( v3 ) /*0x7b49a1*/
      RA2_OPDEL(v3); /*0x7b49a4*/
    *this = 0; /*0x7b49ae*/
    if ( v4 ) /*0x7b49b5*/
      v5 = strlen(v4) + 1; /*0x7b49be*/
    else
      v5 = 1; /*0x7b49c4*/
    v6 = (char *)operator new(v5); /*0x7b49ca*/
    *this = v6; /*0x7b49d2*/
    *v6 = 0; /*0x7b49d7*/
    if ( v4 ) /*0x7b49da*/
      strcpy(v4); /*0x7b49f3*/
  }
  return this; /*0x7b49fc*/
}
} // namespace gamemd

// 0x7B4C20
namespace gamemd {
const char ** String::Append(CCINIClass * aP1)
{
  const char *v2; // esi
  unsigned int v4; // kr08_4
  char *v5; // ebx
  size_t v6; // edx
  char *v7; // eax

  v2 = aP1; /*0x7b4c23*/
  if ( aP1 ) /*0x7b4c2b*/
  {
    v4 = strlen(aP1) + 1; /*0x7b4c39*/
    v5 = (char *)*this; /*0x7b4c3b*/
    v6 = v4; /*0x7b4c43*/
    if ( *this ) /*0x7b4c3b*/
      v6 = strlen(*this) + v4; /*0x7b4c52*/
    v7 = (char *)operator new(v6); /*0x7b4c55*/
    *this = v7; /*0x7b4c61*/
    if ( v5 ) /*0x7b4c64*/
    {
      strcpy(v7, v5); /*0x7b4c7c*/
      v2 = aP1; /*0x7b4c85*/
    }
    else
    {
      *v7 = 0; /*0x7b4c8b*/
    }
    strcat(v2); /*0x7b4cad*/
    if ( v5 ) /*0x7b4cb9*/
      RA2_OPDEL(v5); /*0x7b4cbc*/
  }
  return this; /*0x7b4cc6*/
}
} // namespace gamemd

// 0x7B4CD0
namespace gamemd {
const char ** String::Append2(IUnknown * aP1)
{
  const char *v2; // eax
  const char *v4; // esi
  unsigned int v5; // kr08_4
  char *v6; // ebx
  size_t v7; // edx
  char *v8; // eax
  char *v10; // [esp+10h] [ebp+4h]

  v2 = *aP1; /*0x7b4cd7*/
  if ( *aP1 ) /*0x7b4cd7*/
  {
    v10 = *aP1; /*0x7b4cea*/
    v4 = v2; /*0x7b4cee*/
  }
  else
  {
    v4 = &g_INI_DefaultBuffer; /*0x7b4cdf*/
    v10 = &g_INI_DefaultBuffer; /*0x7b4ce4*/
  }
  if ( v4 ) /*0x7b4cf2*/
  {
    v5 = strlen(v4) + 1; /*0x7b4d00*/
    v6 = (char *)*this; /*0x7b4d02*/
    v7 = v5; /*0x7b4d0a*/
    if ( *this ) /*0x7b4d02*/
      v7 = strlen(*this) + v5; /*0x7b4d19*/
    v8 = (char *)operator new(v7); /*0x7b4d1c*/
    *this = v8; /*0x7b4d28*/
    if ( v6 ) /*0x7b4d2b*/
    {
      strcpy(v8, v6); /*0x7b4d43*/
      v4 = v10; /*0x7b4d4c*/
    }
    else
    {
      *v8 = 0; /*0x7b4d52*/
    }
    strcat(v4); /*0x7b4d74*/
    if ( v6 ) /*0x7b4d80*/
      RA2_OPDEL(v6); /*0x7b4d83*/
  }
  return this; /*0x7b4d8d*/
}
} // namespace gamemd

// 0x7B4DA0
namespace gamemd {
char ** String::Concat2(char ** a2, const char * a3)
{
  char *v4; // ebx
  const char *v5; // esi
  char *v6; // ebp
  unsigned int v7; // kr14_4
  size_t v8; // edx
  char *v9; // eax
  char *v10; // edx

  v4 = 0; /*0x7b4da6*/
  if ( *this ) /*0x7b4da8*/
  {
    v4 = (char *)operator new(strlen(*this) + 1); /*0x7b4dbf*/
    strcpy(v4, *this); /*0x7b4dd8*/
  }
  v5 = a3; /*0x7b4de1*/
  if ( a3 ) /*0x7b4de7*/
  {
    v6 = v4; /*0x7b4df4*/
    v7 = strlen(a3) + 1; /*0x7b4df6*/
    v8 = v7; /*0x7b4dfd*/
    if ( v4 ) /*0x7b4e00*/
      v8 = strlen(v4) + v7; /*0x7b4e0c*/
    v9 = (char *)operator new(v8); /*0x7b4e0f*/
    v4 = v9; /*0x7b4e17*/
    if ( v6 ) /*0x7b4e1b*/
    {
      strcpy(v9, v6); /*0x7b4e33*/
      v5 = a3; /*0x7b4e3c*/
    }
    else
    {
      *v9 = 0; /*0x7b4e42*/
    }
    strcat(v9, v5); /*0x7b4e63*/
    if ( v6 ) /*0x7b4e6e*/
      RA2_OPDEL(v6); /*0x7b4e71*/
  }
  *a2 = 0; /*0x7b4e7f*/
  if ( v4 ) /*0x7b4e86*/
  {
    v10 = (char *)operator new(strlen(v4) + 1); /*0x7b4e99*/
    *a2 = v10; /*0x7b4ea2*/
    strcpy(v10, v4); /*0x7b4eb5*/
    RA2_OPDEL(v4); /*0x7b4ebe*/
  }
  return a2; /*0x7b4ec6*/
}
} // namespace gamemd

// 0x7B4ED0
namespace gamemd {
char ** String::Concat(char ** a1, IUnknown * aP2)
{
  char *v4; // ebx
  const char *v5; // eax
  const char *v6; // esi
  char *v7; // ebp
  unsigned int v8; // kr14_4
  size_t v9; // edx
  char *v10; // eax
  char *v11; // edx
  char *v13; // [esp+18h] [ebp+8h]

  v4 = 0; /*0x7b4ed6*/
  if ( *this ) /*0x7b4ed8*/
  {
    v4 = (char *)operator new(strlen(*this) + 1); /*0x7b4eef*/
    strcpy(v4, *this); /*0x7b4f08*/
  }
  v5 = *aP2; /*0x7b4f15*/
  if ( *aP2 ) /*0x7b4f15*/
  {
    v13 = *aP2; /*0x7b4f26*/
    v6 = v5; /*0x7b4f2a*/
  }
  else
  {
    v6 = &g_INI_DefaultBuffer; /*0x7b4f1b*/
    v13 = &g_INI_DefaultBuffer; /*0x7b4f20*/
  }
  if ( v6 ) /*0x7b4f2e*/
  {
    v7 = v4; /*0x7b4f3b*/
    v8 = strlen(v6) + 1; /*0x7b4f3d*/
    v9 = v8; /*0x7b4f44*/
    if ( v4 ) /*0x7b4f47*/
      v9 = strlen(v4) + v8; /*0x7b4f53*/
    v10 = (char *)operator new(v9); /*0x7b4f56*/
    v4 = v10; /*0x7b4f5e*/
    if ( v7 ) /*0x7b4f62*/
    {
      strcpy(v10, v7); /*0x7b4f7a*/
      v6 = v13; /*0x7b4f83*/
    }
    else
    {
      *v10 = 0; /*0x7b4f89*/
    }
    strcat(v10, v6); /*0x7b4faa*/
    if ( v7 ) /*0x7b4fb5*/
      RA2_OPDEL(v7); /*0x7b4fb8*/
  }
  *a1 = 0; /*0x7b4fc6*/
  if ( v4 ) /*0x7b4fcd*/
  {
    v11 = (char *)operator new(strlen(v4) + 1); /*0x7b4fe0*/
    *a1 = v11; /*0x7b4fe9*/
    strcpy(v11, v4); /*0x7b4ffc*/
    RA2_OPDEL(v4); /*0x7b5005*/
  }
  return a1; /*0x7b500d*/
}
} // namespace gamemd

// 0x7B5020
namespace gamemd {
char String::Erase(MPCooperative * aP1, int a3)
{
  int v4; // ebp
  int v5; // esi
  unsigned int v6; // kr04_4
  char *v8; // [esp+14h] [ebp+4h]

  v4 = aP1; /*0x7b502d*/
  v5 = a3; /*0x7b5031*/
  v6 = strlen(*this) + 1; /*0x7b5035*/
  if ( a3 + aP1 > (int)(v6 - 1) ) /*0x7b503f*/
    v4 = v6 - 1 - a3; /*0x7b5043*/
  if ( v4 < 0 ) /*0x7b5047*/
  {
    v5 = v4 + a3; /*0x7b5049*/
    v4 = 0; /*0x7b504b*/
    a3 = v5; /*0x7b504d*/
  }
  if ( v5 <= 0 ) /*0x7b5053*/
    return 0; /*0x7b5058*/
  v8 = (char *)operator new(v6 - v5); /*0x7b506b*/
  (*this)[v4] = 0; /*0x7b506f*/
  (*this)[v4 - 1 + v5] = 0; /*0x7b507a*/
  strcpy(v8, *this); /*0x7b5092*/
  strcat(v8, &(*this)[v4 + a3]); /*0x7b50c1*/
  RA2_OPDEL(); /*0x7b50cd*/
  *this = v8; /*0x7b50d9*/
  return 1; /*0x7b5055*/
}
} // namespace gamemd

// 0x7B5230
namespace gamemd {
void String::TrimRight(ObjectClass * aP1)
{
  unsigned int v3; // esi
  unsigned int v4; // eax
  unsigned int v5; // esi
  const char *v6; // eax
  size_t v8; // esi
  char *v9; // edi
  char *v10; // eax
  char *v11; // ebx
  const char *v12; // esi
  size_t v13; // ecx
  const char *v14; // eax

  if ( *this ) /*0x7b5236*/
    v3 = strlen(*this); /*0x7b524b*/
  else
    v3 = 0; /*0x7b523d*/
  v4 = v3; /*0x7b524d*/
  v5 = v3 - 1; /*0x7b524f*/
  if ( v4 ) /*0x7b5252*/
  {
    do /*0x7b527d*/
    {
      v6 = *aP1; /*0x7b5258*/
      if ( !*aP1 ) /*0x7b5258*/
        v6 = &g_INI_DefaultBuffer; /*0x7b525e*/
      if ( !strchr(v6, (*this)[v5]) ) /*0x7b526c*/
        break; /*0x7b5276*/
    }
    while ( v5-- ); /*0x7b527d*/
  }
  v8 = v5 + 1; /*0x7b5282*/
  v9 = &g_INI_DefaultBuffer; /*0x7b5285*/
  if ( *this ) /*0x7b527f*/
    v9 = (char *)*this; /*0x7b528c*/
  v10 = (char *)operator new(v8 + 1); /*0x7b5292*/
  v11 = v10; /*0x7b5297*/
  *v10 = 0; /*0x7b529e*/
  if ( v9 ) /*0x7b52a1*/
    strncpy(v10, v9, v8); /*0x7b52a6*/
  v11[v8] = 0; /*0x7b52ae*/
  v12 = &g_INI_DefaultBuffer; /*0x7b52b2*/
  if ( v11 ) /*0x7b52b9*/
    v12 = v11; /*0x7b52bb*/
  if ( *this ) /*0x7b52bd*/
    RA2_OPDEL(); /*0x7b52c5*/
  *this = 0; /*0x7b52cf*/
  if ( v12 ) /*0x7b52d6*/
    v13 = strlen(v12) + 1; /*0x7b52df*/
  else
    v13 = 1; /*0x7b52e5*/
  v14 = (const char *)operator new(v13); /*0x7b52eb*/
  *this = v14; /*0x7b52f3*/
  *v14 = 0; /*0x7b52f8*/
  if ( v12 ) /*0x7b52fb*/
    strcpy(v12); /*0x7b5314*/
  if ( v11 ) /*0x7b531f*/
    RA2_OPDEL(v11); /*0x7b5322*/
}
} // namespace gamemd

// 0x7B5400
namespace gamemd {
char * String::GetOrEmpty()
{
  char *result; // eax

  result = *this; /*0x7b5400*/
  if ( !*this ) /*0x7b5400*/
    return &g_INI_DefaultBuffer; /*0x7b5406*/
  return result; /*0x7b540b*/
}
} // namespace gamemd

// 0x7B5440
namespace gamemd {
char * String::GetOrEmpty_Alt()
{
  char *result; // eax

  result = *this; /*0x7b5440*/
  if ( !*this ) /*0x7b5440*/
    return &g_INI_DefaultBuffer; /*0x7b5446*/
  return result; /*0x7b544b*/
}
} // namespace gamemd

// 0x7B5A40
namespace gamemd {
char String::Assign_Bool(const char * a2)
{
  size_t v3; // ecx
  unsigned char *v4; // eax

  if ( *this ) /*0x7b5a45*/
    RA2_OPDEL(); /*0x7b5a4c*/
  *this = 0; /*0x7b5a58*/
  if ( a2 ) /*0x7b5a60*/
    v3 = strlen(a2) + 1; /*0x7b5a69*/
  else
    v3 = 1; /*0x7b5a6f*/
  v4 = operator new(v3); /*0x7b5a75*/
  *this = v4; /*0x7b5a7d*/
  *v4 = 0; /*0x7b5a81*/
  if ( a2 ) /*0x7b5a84*/
    strcpy(a2); /*0x7b5a9c*/
  return 1; /*0x7b5aa5*/
}
} // namespace gamemd

// 0x7B5B30
namespace gamemd {
void String::ToLower()
{
  unsigned int i; // esi
  char v3; // dl

  for (); ++i ) /*0x7b5b35*/
  {
    v3 = (*this)[i]; /*0x7b5b4d*/
    if ( v3 >= 65 && v3 <= 90 ) /*0x7b5b58*/
      (*this)[i] = tolower(v3); /*0x7b5b68*/
  }
}
} // namespace gamemd

// 0x7B5B80
namespace gamemd {
char ** String::ToLowerCopy(ObjectClass * aP1)
{
  char *v3; // ebx
  unsigned int i; // esi
  char v5; // al
  char *v6; // edx

  v3 = 0; /*0x7b5b86*/
  if ( *this ) /*0x7b5b88*/
  {
    v3 = (char *)operator new(strlen(*this) + 1); /*0x7b5b9f*/
    strcpy(v3, *this); /*0x7b5bb8*/
  }
  for ( i = 0; v3 && i < strlen(v3); ++i ) /*0x7b5bc1*/
  {
    v5 = v3[i]; /*0x7b5bd7*/
    if ( v5 >= 65 && v5 <= 90 ) /*0x7b5be0*/
      v3[i] = tolower(v5); /*0x7b5bee*/
  }
  *aP1 = 0; /*0x7b5bfa*/
  if ( v3 ) /*0x7b5c01*/
  {
    v6 = (char *)operator new(strlen(v3) + 1); /*0x7b5c14*/
    *aP1 = v6; /*0x7b5c1d*/
    strcpy(v6, v3); /*0x7b5c30*/
    RA2_OPDEL(v3); /*0x7b5c39*/
  }
  return aP1; /*0x7b5c41*/
}
} // namespace gamemd

// 0x7B5D70
namespace gamemd {
char String::CopyTruncated(size_t Count)
{
  const char *v3; // esi
  char *v4; // eax
  char *v5; // ebp
  const char *v6; // esi
  size_t v7; // ecx
  unsigned char *v8; // eax

  v3 = (const char *)*this; /*0x7b5d75*/
  if ( !*this ) /*0x7b5d75*/
    v3 = &g_INI_DefaultBuffer; /*0x7b5d7c*/
  v4 = (char *)operator new(Count + 1); /*0x7b5d89*/
  v5 = v4; /*0x7b5d8e*/
  *v4 = 0; /*0x7b5d95*/
  if ( v3 ) /*0x7b5d99*/
    strncpy(v4, v3, Count); /*0x7b5d9e*/
  v5[Count] = 0; /*0x7b5da8*/
  v6 = &g_INI_DefaultBuffer; /*0x7b5dac*/
  if ( v5 ) /*0x7b5db1*/
    v6 = v5; /*0x7b5db3*/
  if ( *this ) /*0x7b5db5*/
    RA2_OPDEL(); /*0x7b5dbc*/
  *this = 0; /*0x7b5dc6*/
  if ( v6 ) /*0x7b5dcc*/
    v7 = strlen(v6) + 1; /*0x7b5dd5*/
  else
    v7 = 1; /*0x7b5ddb*/
  v8 = operator new(v7); /*0x7b5de1*/
  *this = v8; /*0x7b5de9*/
  *v8 = 0; /*0x7b5ded*/
  if ( v6 ) /*0x7b5df0*/
    strcpy(v6); /*0x7b5e08*/
  if ( v5 ) /*0x7b5e13*/
    RA2_OPDEL(v5); /*0x7b5e16*/
  return 1; /*0x7b5e1e*/
}
} // namespace gamemd

// 0x7B78D0
namespace gamemd {
char String::TruncateTo(size_t Count)
{
  const wchar_t *v3; // esi
  wchar_t *v4; // eax
  wchar_t *v5; // edi
  const wchar_t *v6; // esi
  size_t v7; // eax
  unsigned short *v8; // eax

  v3 = (const wchar_t *)*this; /*0x7b78d5*/
  if ( !*this ) /*0x7b78d5*/
    v3 = &g_TypeClass_DefaultString; /*0x7b78db*/
  v4 = (wchar_t *)new wchar_t; /*0x7b78ea*/
  v5 = v4; /*0x7b78ef*/
  *v4 = 0; /*0x7b78f6*/
  if ( v3 ) /*0x7b78fb*/
    wcsncpy(v4, v3, Count); /*0x7b7900*/
  v5[Count] = 0; /*0x7b7908*/
  v6 = &g_TypeClass_DefaultString; /*0x7b7911*/
  if ( v5 ) /*0x7b7916*/
    v6 = v5; /*0x7b7918*/
  if ( *this ) /*0x7b791a*/
    RA2_OPDEL(); /*0x7b7921*/
  *this = 0; /*0x7b792b*/
  if ( v6 ) /*0x7b7931*/
    v7 = wcslen(v6) + 1; /*0x7b793c*/
  else
    v7 = 1; /*0x7b793f*/
  v8 = operator new(2 * v7); /*0x7b7948*/
  *this = v8; /*0x7b7950*/
  *v8 = 0; /*0x7b7954*/
  if ( v6 ) /*0x7b7959*/
    wcscpy(v6); /*0x7b795f*/
  if ( v5 ) /*0x7b7969*/
    RA2_OPDEL(v5); /*0x7b796c*/
  return 1; /*0x7b7974*/
}
} // namespace gamemd

// 0x7CCA19
namespace gamemd {
int String::Wrapper5to4(CampaignScore * aP0, int a2, int a3, int a4)
{
  return String_Helper_7CCA34(aP0, a2, a3, a4, 0); /*0x7cca33*/
}
} // namespace gamemd
