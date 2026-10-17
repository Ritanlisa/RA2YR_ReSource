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
#include "e4/classes/Stream_e4.hpp"
#include "e4/classes/SuperClass_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/Struct_e4.hpp"
#include "e4/classes/E4Recv_7B6280_e4.hpp"
#include "e4/classes/DeleteAndZero_e4.hpp"
// [w18j2] C3861 supply (raw-evidenced)

// 0x49B760
namespace gamemd {  // G42.18 ns repair
int String::AssignWideToChar(char *aP1, char *aP2)
{
  int result; // eax

  if ( aP1 ) /*0x49b76b*/
  {
    char *v4; // edi
    v4 = ToWideStringChar((IUnknown *)(aP1)); /*0x49b772*/
    result = strlen(v4) + 1; /*0x49b779*/
    memcpy(v4, result); /*0x49b788*/
  }
  else
  {
    *(_DWORD *)this = 0; /*0x49b793*/
  }
  if ( aP2 ) /*0x49b79c*/
  {
    char *v6; // edi
    v6 = ToWideStringChar((IUnknown *)(aP2)); /*0x49b7a3*/
    result = strlen(v6) + 1; /*0x49b7ad*/
    memcpy(&this->u32_1C, v6, result); /*0x49b7bc*/
  }
  else
  {
    *(&this->ptr_88) = 0; /*0x49b7cc*/
  }
  return result; /*0x49b7c5*/
}
}  // G42.18 ns repair
// 0x4CB5E0
namespace gamemd {
char * String::AllocAndCopy(RandomStruct * aP1, IUnknown * aP2)
{

  char *v4; // eax
  unsigned int v5; // edx
  char *v6; // edi

  strncpy(Destination, aP1, 4u); /*0x4cb5ed*/
  *((unsigned short *)Destination + 2) = 2; /*0x4cb5f4*/
  *((unsigned short *)Destination + 3) = 1; /*0x4cb5fa*/
  v4 = (char *)__2_YAPAXI_Z(1u); /*0x4cb600*/
  v5 = *((unsigned __int16 *)Destination + 3); /*0x4cb611*/
  *((unsigned int *)Destination + 2) = v4; /*0x4cb613*/
  qmemcpy(v4, &aP2, 4 * (v5 >> 2)); /*0x4cb619*/
  v6 = &v4[4 * (v5 >> 2)]; /*0x4cb619*/
  qmemcpy(v6, &aP2 + (v5 >> 2), v5 & 3); /*0x4cb625*/
  *((unsigned int *)Destination + 3) = 0; /*0x4cb628*/
  return Destination; /*0x4cb627*/

}
}
// 0x5BD5A0
namespace gamemd {
int String::Release(void *a1)
{

  int result = this->m_3; // eax /*0x5bd5a3*/
  if ( result ) /*0x5bd5a8*/
    operator delete((void *)(*&this->u32_C)); /*0x5bd5ab*/
  this->m_3 = 0; /*0x5bd5b3*/
  return result; /*0x5bd5ba*/
}
}
// 0x5D0380
namespace gamemd {
ObjectClass * * String::SplitComma(ObjectClass * aP1)
{

  int v3; // ebx
  int v4; // ebx
  ObjectClass *v5; // eax
  int v6; // ebx
  ObjectClass *v7; // eax
  int v8; // eax
  char *v10; // [esp+Ch] [ebp-4h] BYREF

  String::Assign((String *)this, 0); /*0x5d0389*/
  this->ptr_4 = 0; /*0x5d0392*/
  this->ptr_8 = 0; /*0x5d0395*/
  this->u32_C = 0; /*0x5d0398*/
  unknown_libname_73(&v10); /*0x5d039b*/
  v3 = String::Tokenize(aP1, 0, Delimiter, (void **)&v10); /*0x5d03ba*/
  if ( String::Length((String *)&v10) ) /*0x5d03bc*/
    String::Reassign((String *)this, (const char **)&v10); /*0x5d03cc*/
  v4 = String::Tokenize(aP1, v3, Delimiter, (void **)&v10); /*0x5d03e7*/
  if ( String::Length((String *)&v10) ) /*0x5d03e9*/
  {
    __1_Timevec_std__QAE_XZ((const char **)&v10); /*0x5d03f6*/
    this->ptr_4 = v5; /*0x5d03fb*/
  }
  v6 = String::Tokenize(aP1, v4, Delimiter, (void **)&v10); /*0x5d0414*/
  if ( String::Length((String *)&v10) ) /*0x5d0416*/
  {
    __1_Timevec_std__QAE_XZ((const char **)&v10); /*0x5d0423*/
    this->ptr_8 = v7; /*0x5d0428*/
  }
  String::Tokenize(aP1, v6, Delimiter, (void **)&v10); /*0x5d0438*/
  if ( String::Length((String *)&v10) ) /*0x5d0441*/
  {
    __1_Timevec_std__QAE_XZ((const char **)&v10); /*0x5d044e*/
    this->u32_C = v8; /*0x5d0453*/
  }
  DeleteAndZero((ObjectClass *)&v10); /*0x5d045a*/
  return this; /*0x5d0461*/

}
}
// 0x5F3350
namespace gamemd {
int String::NormalizeNewlines()
{

  const char *v0; // esi
  __int64 v1; // rax
  char v2; // al

  v0 = (const char *)MEMORY[0xA8EA7C]; /*0x5f3351*/
  v1 = 0; /*0x5f335d*/
  if ( strlen((const char *)MEMORY[0xA8EA7C]) ) /*0x5f3361*/
  {
    while ( 1 ) /*0x5f3368*/
    {
      v2 = v0[HIDWORD(v1)]; /*0x5f3368*/
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
    v0 = (const char *)MEMORY[0xA8EA7C]; /*0x5f337d*/
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
  if ( isalpha(*this) && (v2 = toupper(*this) - 65, isalpha(this->u8_1)) ) /*0x7636ba*/
    return toupper(this->u8_1) + 26 * v2 - 39; /*0x7636db*/
  else
    return v2; /*0x7636e0*/

}
}
// 0x7B51D0
namespace gamemd {
int String::TrimLeft(const char **a2, const char **aP1, int a1, int a3, int aP2, int aP3, int a4, int a5)
{

  int result; // eax
  signed int v5; // ecx

  int i; // esi
  for ( i = 0; ; ++i ) /*0x7b51da*/
  {
    if ( *(unsigned int *)aP1->__pad_0 ) /*0x7b51dc*/
    {
      result = 0; /*0x7b51eb*/
      v5 = strlen(*(const char **)aP1->__pad_0); /*0x7b51f1*/
    }
    else
    {
      v5 = 0; /*0x7b51e2*/
    }
    if ( i >= v5 ) /*0x7b51f4*/
      break; /*0x7b51f4*/
    char *v6; // eax
    v6 = (char *)*aP1; /*0x7b51f6*/
    if ( !*aP1 ) /*0x7b51f6*/
      v6 = &g_INI_DefaultBuffer; /*0x7b51fd*/
    result = (int)strchr(v6, *(char *)(*(unsigned int *)aP1->__pad_0 + i)); /*0x7b5208*/
    if ( !result ) /*0x7b5212*/
      break; /*0x7b5212*/
  }
  if ( i > 0 ) /*0x7b5219*/
    return (aP1)->Erase(0, i); /*0x7b5220*/
  return result; /*0x7b5225*/

}
}
// 0x7B54B0
namespace gamemd {
unsigned int String::Length(void *a1)
{

  if ( *(unsigned int *)this->q000 ) /*0x7b54b1*/
    return strlen(*(const char **)this->q000); /*0x7b54c6*/
  else
    return 0; /*0x7b54b7*/

}
}
// 0x7B57A0
namespace gamemd {
AbstractClass * * String::Replace(char * SubStr, const char * a3, void *a3_1)
{

  void **v3; // edi
  char *v4; // ebx
  const char *v5; // ebp
  char *v6; // eax
  size_t v7; // eax
  char *v8; // esi
  size_t v9; // edx
  char *v10; // eax
  const char *v11; // esi
  char *v12; // ebp
  unsigned int v13; // kr1C_4
  size_t v14; // edx
  char *v15; // eax
  const char *v16; // esi
  unsigned int v17; // kr30_4
  size_t v18; // edx
  char *v19; // eax
  const char *v20; // esi
  size_t v21; // ecx
  unsigned char *v22; // eax
  char *Block; // [esp+10h] [ebp-Ch]
  size_t Count; // [esp+14h] [ebp-8h]
  char *v27; // [esp+18h] [ebp-4h]
  char *v28; // [esp+24h] [ebp+8h]

  v3 = (void **)this; /*0x7b57a6*/
  v4 = 0; /*0x7b57a8*/
  v5 = *(const char **)this->q000; /*0x7b57ae*/
  if ( !*(unsigned int *)this->q000 ) /*0x7b57ae*/
    v5 = &g_INI_DefaultBuffer; /*0x7b57b4*/
  if ( !v5 ) /*0x7b57bc*/
    goto LABEL_33; /*0x7b57bc*/
  while ( *v5 ) /*0x7b57c6*/
  {
    v6 = (char *)(strstr(v5, SubStr)); /*0x7b57d2*/
    v27 = v6; /*0x7b57da*/
    if ( !v6 ) /*0x7b57e0*/
    {
      v16 = v4; /*0x7b5924*/
      v17 = strlen(v5) + 1; /*0x7b5926*/
      v28 = v4; /*0x7b592b*/
      v18 = v17; /*0x7b5931*/
      if ( v4 ) /*0x7b5934*/
        v18 = strlen(v4) + v17; /*0x7b5940*/
      v19 = (char *)__2_YAPAXI_Z(v18); /*0x7b5943*/
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
      v8 = v4; /*0x7b57ee*/
      v9 = v7 + 1; /*0x7b57f0*/
      Block = v4; /*0x7b57f5*/
      if ( v4 ) /*0x7b57f9*/
        v9 = strlen(v4) + 1 + v7; /*0x7b5807*/
      v10 = (char *)__2_YAPAXI_Z(v9); /*0x7b580a*/
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
    v11 = a3; /*0x7b585c*/
    if ( a3 ) /*0x7b5862*/
    {
      v12 = v4; /*0x7b586f*/
      v13 = strlen(a3) + 1; /*0x7b5871*/
      v14 = v13; /*0x7b5878*/
      if ( v4 ) /*0x7b587b*/
        v14 = strlen(v4) + v13; /*0x7b5887*/
      v15 = (char *)__2_YAPAXI_Z(v14); /*0x7b588a*/
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
  else
    v21 = 1; /*0x7b59e8*/
  v22 = (unsigned char *)__2_YAPAXI_Z(v21); /*0x7b59ee*/
  *(unsigned int *)this->q000 = (unsigned int)(v22); /*0x7b59fc*/
  *v22 = 0; /*0x7b59fe*/
  if ( v20 ) /*0x7b5a01*/
    strcpy(*(char **)this->q000, v20); /*0x7b5a1d*/
  if ( v4 ) /*0x7b5a29*/
    __3_YAXPAX_Z(v4); /*0x7b5a2c*/
  return (gamemd::AbstractClass **)(1); /*0x7b5a34*/

}
}
// 0x7B5F10
namespace gamemd {
AbstractClass * * String::Tokenize(int a2, ObjectClass * aP2, ObjectClass * aP3)
{


  int v4 = a2; // esi /*0x7b5f13*/
  if ( a2 < 0 ) /*0x7b5f1c*/
    return (gamemd::AbstractClass **)(-1); /*0x7b5f21*/
  while ( 1 )
  {
    signed int v7; // ecx
    v7 = *(unsigned int *)this->q000 ? strlen(*(const char **)this->q000) : 0;
    if ( v4 >= v7 || !strchr(aP2, *(char *)(*(unsigned int *)this->q000 + v4)) ) /*0x7b5f4c*/
      break; /*0x7b5f4c*/
    ++v4; /*0x7b5f58*/
  }
  signed int v8; // ecx
  if ( *(unsigned int *)this->q000 ) /*0x7b5f5b*/
    v8 = strlen(*(const char **)this->q000); /*0x7b5f6e*/
  else
    v8 = 0; /*0x7b5f61*/
  if ( v4 >= v8 ) /*0x7b5f71*/
    return (gamemd::AbstractClass **)(-1); /*0x7b5f76*/
  int v21; // [esp+14h] [ebp+4h]
  v21 = v4; /*0x7b5f7d*/
  while ( 1 )
  {
    signed int v9; // ecx
    v9 = *(unsigned int *)this->q000 ? strlen(*(const char **)this->q000) : 0;
    if ( v4 >= v9 || strchr(aP2, *(char *)(*(unsigned int *)this->q000 + v4)) ) /*0x7b5fa1*/
      break; /*0x7b5fa1*/
    ++v4; /*0x7b5fad*/
  }
  char *v10; // ebp
  v10 = (char *)(v4 - 1); /*0x7b5fb4*/
  const char *v11; // esi
  v11 = (const char *)(v21 + *(unsigned int *)this->q000); /*0x7b5fbd*/
  char *Stra; // [esp+18h] [ebp+8h]
  Stra = v10; /*0x7b5fbf*/
  if ( *aP3 ) /*0x7b5fc3*/
    __3_YAXPAX_Z(*aP3); /*0x7b5fca*/
  *aP3 = 0; /*0x7b5fd4*/
  size_t v12; // ecx
  if ( v11 ) /*0x7b5fda*/
    v12 = strlen(v11) + 1; /*0x7b5fe3*/
  else
    v12 = 1; /*0x7b5fe9*/
  unsigned char *v13; // eax
  v13 = (unsigned char *)__2_YAPAXI_Z(v12); /*0x7b5fef*/
  *aP3 = v13; /*0x7b5ff7*/
  *v13 = 0; /*0x7b5ffb*/
  if ( v11 ) /*0x7b5ffe*/
    strcpy((char *)*aP3, v11); /*0x7b6016*/
  const char *v14 = &g_INI_DefaultBuffer; // edi /*0x7b6029*/
  size_t v15; // esi
  v15 = (size_t)&v10[-v21 + 1]; /*0x7b602e*/
  if ( *aP3 ) /*0x7b6023*/
    v14 = (const char *)*aP3; /*0x7b6033*/
  char *v16; // eax
  v16 = (char *)__2_YAPAXI_Z((size_t)&v10[-v21 + 2]); /*0x7b6039*/
  char *v17 = v16; // ebp /*0x7b603e*/
  *v16 = 0; /*0x7b6045*/
  if ( v14 ) /*0x7b6049*/
    strncpy(v16, v14, v15); /*0x7b604e*/
  v17[v15] = 0; /*0x7b6056*/
  const char *v18 = &g_INI_DefaultBuffer; // esi /*0x7b605a*/
  if ( v17 ) /*0x7b6061*/
    v18 = v17; /*0x7b6063*/
  if ( *aP3 ) /*0x7b6065*/
    __3_YAXPAX_Z(*aP3); /*0x7b606c*/
  *aP3 = 0; /*0x7b6076*/
  size_t v19; // ecx
  if ( v18 ) /*0x7b607c*/
    v19 = strlen(v18) + 1; /*0x7b6085*/
  else
    v19 = 1; /*0x7b608b*/
  unsigned char *v20; // eax
  v20 = (unsigned char *)__2_YAPAXI_Z(v19); /*0x7b6091*/
  *aP3 = v20; /*0x7b6099*/
  *v20 = 0; /*0x7b609d*/
  if ( v18 ) /*0x7b60a0*/
    strcpy((char *)*aP3, v18); /*0x7b60b8*/
  if ( v17 ) /*0x7b60c3*/
    __3_YAXPAX_Z(v17); /*0x7b60c6*/
  return (gamemd::AbstractClass **)((int)(Stra + 1)); /*0x7b5f1e*/

}
}
// 0x7B7A60
namespace gamemd {
AbstractClass * * String::Tokenize2(int a2, wchar_t * Str, void ** a4)
{


  int v4 = a2; // esi /*0x7b7a62*/
  if ( a2 < 0 ) /*0x7b7a6b*/
    return (gamemd::AbstractClass **)(-1); /*0x7b7a6f*/
  while ( 1 ) /*0x7b7a7a*/
  {
    int v7; // eax
    v7 = *(unsigned int *)this->q000; /*0x7b7a7a*/
    if ( *(unsigned int *)this->q000 ) /*0x7b7a7a*/
      v7 = wcslen(*(const wchar_t **)this->q000); /*0x7b7a81*/
    if ( v4 >= v7 || !wcschr(Str, *(unsigned short *)(*(unsigned int *)this->q000 + 2 * v4)) ) /*0x7b7a95*/
      break; /*0x7b7a95*/
    ++v4; /*0x7b7aa1*/
  }
  int v8; // eax
  v8 = *(unsigned int *)this->q000; /*0x7b7aa4*/
  if ( *(unsigned int *)this->q000 ) /*0x7b7aa4*/
    v8 = wcslen(*(const wchar_t **)this->q000); /*0x7b7aab*/
  if ( v4 >= v8 ) /*0x7b7ab5*/
    return (gamemd::AbstractClass **)(-1); /*0x7b7ab9*/
  int v9 = v4; // ebp /*0x7b7ac1*/
  while ( 1 ) /*0x7b7ac3*/
  {
    int v10; // eax
    v10 = *(unsigned int *)this->q000; /*0x7b7ac3*/
    if ( *(unsigned int *)this->q000 ) /*0x7b7ac3*/
      v10 = wcslen(*(const wchar_t **)this->q000); /*0x7b7aca*/
    if ( v4 >= v10 || wcschr(Str, *(unsigned short *)(*(unsigned int *)this->q000 + 2 * v4)) ) /*0x7b7ade*/
      break; /*0x7b7ade*/
    ++v4; /*0x7b7aea*/
  }
  int v11 = v4 - 1; // ebx /*0x7b7af3*/
  int v23; // [esp+10h] [ebp+4h]
  v23 = v4 - 1; /*0x7b7af8*/
  const wchar_t *v12; // esi
  v12 = (const wchar_t *)(*(unsigned int *)this->q000 + 2 * v9); /*0x7b7afe*/
  if ( *a4 ) /*0x7b7af6*/
    __3_YAXPAX_Z(*a4); /*0x7b7b04*/
  *a4 = 0; /*0x7b7b0e*/
  int v13; // eax
  if ( v12 ) /*0x7b7b14*/
    v13 = wcslen(v12) + 1; /*0x7b7b1f*/
  else
    v13 = 1; /*0x7b7b22*/
  unsigned short *v14; // eax
  v14 = (unsigned short *)__2_YAPAXI_Z(2 * v13); /*0x7b7b2b*/
  *a4 = v14; /*0x7b7b33*/
  *v14 = 0; /*0x7b7b37*/
  if ( v12 ) /*0x7b7b3c*/
    wcscpy((wchar_t *)*a4, v12); /*0x7b7b42*/
  int v15 = v11 - v9; // esi /*0x7b7b4e*/
  const wchar_t *v16; // ebp
  v16 = (const wchar_t *)(&g_TypeClass_DefaultString); /*0x7b7b50*/
  size_t v17 = v15 + 1; // esi /*0x7b7b55*/
  if ( *a4 ) /*0x7b7b4a*/
    v16 = (const wchar_t *)*a4; /*0x7b7b5a*/
  wchar_t *v18; // eax
  v18 = (wchar_t *)__2_YAPAXI_Z(2 * v17 + 2); /*0x7b7b61*/
  wchar_t *v19 = v18; // ebx /*0x7b7b66*/
  *v18 = 0; /*0x7b7b6d*/
  if ( v16 ) /*0x7b7b72*/
    wcsncpy(v18, v16, v17); /*0x7b7b77*/
  v19[v17] = 0; /*0x7b7b7f*/
  const wchar_t *v20; // esi
  v20 = (const wchar_t *)(&g_TypeClass_DefaultString); /*0x7b7b88*/
  if ( v19 ) /*0x7b7b8d*/
    v20 = v19; /*0x7b7b8f*/
  if ( *a4 ) /*0x7b7b91*/
    __3_YAXPAX_Z(*a4); /*0x7b7b98*/
  *a4 = 0; /*0x7b7ba2*/
  int v21; // eax
  if ( v20 ) /*0x7b7ba8*/
    v21 = wcslen(v20) + 1; /*0x7b7bb3*/
  else
    v21 = 1; /*0x7b7bb6*/
  unsigned short *v22; // eax
  v22 = (unsigned short *)__2_YAPAXI_Z(2 * v21); /*0x7b7bbf*/
  *a4 = v22; /*0x7b7bc7*/
  *v22 = 0; /*0x7b7bcb*/
  if ( v20 ) /*0x7b7bd0*/
    wcscpy((wchar_t *)*a4, v20); /*0x7b7bd6*/
  if ( v19 ) /*0x7b7be0*/
    __3_YAXPAX_Z(v19); /*0x7b7be3*/
  return (gamemd::AbstractClass **)(v23 + 1); /*0x7b7a6d*/

}
}
// 0x7CCA34
namespace gamemd {
unsigned int sub_7CCA34(unsigned char * a1, unsigned int a2, unsigned char * a3, int a4, void * a5)
{
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
  void *v5 = a5; // eax /*0x7cca75*/
  if ( !a5 ) /*0x7cca7a*/
    v5 = off_87C1E0; /*0x7cca7c*/
  a5 = v5; /*0x7cca84*/
  if ( v11 ) /*0x7cca87*/
  {
    uint8_t *v6 = a3; // esi /*0x7cca89*/
    do /*0x7ccafe*/
    {
      uint8_t v7 = *v6; // al /*0x7cca8c*/
      if ( !*v6 ) /*0x7cca8c*/
        break; /*0x7cca90*/
      if ( v7 == 37 ) /*0x7cca94*/
      {
        dword_B78BAC = 0; /*0x7ccac8*/
        char *v8 = &v6->CampaignScore_1; // esi /*0x7ccacf*/
        if ( *v8 == 35 ) /*0x7ccad3*/
        {
          dword_B78BAC = 1; /*0x7ccad5*/
          ++v8; /*0x7ccadf*/
        }
        _expandtime(*v8, a4, &a1, &v11, a5); /*0x7ccaf1*/
        v6 = &v8->u8_1; /*0x7ccaf9*/
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
char * String::CopyUpper(char * String, ObjectClass * aP1)
{
  strcpy(String, aP1); /*0x4f4c4e*/
  _strupr(String); /*0x4f4c57*/
  return String; /*0x4f4c61*/
}
} // namespace gamemd

// 0x4F4C70
namespace gamemd {
char * String::Copy(const char *a2_2, void *a2)
{
  strcpy(a2_2, a2_2); /*0x4f4c8c*/
  return (char *)(a2_2); /*0x4f4c97*/
}
} // namespace gamemd

// 0x4F4CB0
namespace gamemd {
char * String::CopyChecked(const char *a2, void *a2_1)
{
  strcpy(a2); /*0x4f4ccc*/
  return (char *)(this); /*0x4f4cd7*/
}
} // namespace gamemd

// 0x4F4CE0
namespace gamemd {
bool String::Equals(ObjectClass * aP1, void *a2_1)
{

  int result; // eax
  result = strcmp(aP1, a2_1); /*0x4f4cf0*/
  if ( !result ) /*0x4f4d0a*/
    return 1; /*0x4f4d0c*/
  (*((unsigned char *)&(result))) = 0; /*0x4f4d29*/
  return result; /*0x4f4d15*/
}
} // namespace gamemd

// 0x5E2620
namespace gamemd {
unsigned int String::ComputeHash(void *a1_1)
{

  unsigned int v2; // esi
  v2 = String::Length(a1_1); /*0x5e262c*/
  unsigned int i; // edi
  for ( i = 0; i < String::Length(a1_1); ++i ) /*0x5e2630*/
  {
    char *v4; // eax
    v4 = ((String *)(a1_1))->GetOrEmpty(); /*0x5e263b*/
    v2 = ((i + v4[i] + v2) >> 24) ^ ((i + v4[i] + v2) << 8); /*0x5e2650*/
  }
  return v2; /*0x5e2660*/
}
} // namespace gamemd

// 0x727CF0
namespace gamemd {
char * String::Trim(void *a1)
{

  if ( this ) /*0x727cf5*/
  {
    char v2 = *this; // al /*0x727cf7*/
    const char *v3 = this; // ebx /*0x727cfc*/
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
    signed int i; // ecx
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
ObjectClass * String::FormatDword(char * Buffer)
{
  sprintf(Buffer, "%d", dword_822D1C); /*0x777b3f*/
  return (gamemd::ObjectClass *)(Buffer); /*0x777b49*/
}
} // namespace gamemd

// 0x777B60
namespace gamemd {
ObjectClass * String::CopyConstant(char * Destination)
{
  strncpy(Destination, g_Str_gsmallwoo, 0x20u); /*0x777b6b*/
  return (gamemd::ObjectClass *)(Destination); /*0x777b75*/
}
} // namespace gamemd

// 0x7B4630
namespace gamemd {
char ** String::Assign(const char *a2)
{


  *(unsigned int *)this->q000 = 0; /*0x7b463b*/
  size_t v3; // ecx
  if ( a2 ) /*0x7b4641*/
    v3 = strlen(a2) + 1; /*0x7b464a*/
  else
    v3 = 1; /*0x7b4650*/
  unsigned char *v4; // eax
  v4 = (unsigned char *)__2_YAPAXI_Z(v3); /*0x7b4656*/
  *(unsigned int *)this->q000 = (unsigned int)(v4); /*0x7b465e*/
  *v4 = 0; /*0x7b4662*/
  if ( a2 ) /*0x7b4665*/
    strcpy(*(char **)this->q000, a2); /*0x7b467d*/
  return (char **)this; /*0x7b4686*/

}
} // namespace gamemd

// 0x7B4690
namespace gamemd {
char ** String::AssignFromPtr(const char **a2, void *a2_1)
{


  *(unsigned int *)this->q000 = 0; /*0x7b4699*/
  if ( *a2 ) /*0x7b469f*/
  {
    char *v3; // edx
    v3 = (char *)__2_YAPAXI_Z(strlen(*a2) + 1); /*0x7b46b4*/
    *(unsigned int *)this->q000 = (unsigned int)(v3); /*0x7b46b9*/
    strcpy(v3, *a2); /*0x7b46d1*/
  }
  return (char **)this; /*0x7b46da*/

}
} // namespace gamemd

// 0x7B4710
namespace gamemd {
bool String::Equals_Alt(const char *a2)
{


  int result; // eax
  result = *(unsigned int *)this->q000; /*0x7b4710*/
  if ( *(unsigned int *)this->q000 || a2 ) /*0x7b471d*/
  {
    if ( result && a2 ) /*0x7b472b*/
    {
      result = strcmp((const char *)result, a2); /*0x7b4736*/
      if ( result ) /*0x7b4750*/
        LOBYTE(result) = 0; /*0x7b4767*/
      else
        return 1; /*0x7b4752*/
    }
    else
    {
      LOBYTE(result) = 0; /*0x7b476d*/
    }
  }
  else
  {
    LOBYTE(result) = 1; /*0x7b471f*/
  }
  return result; /*0x7b4721*/

}
} // namespace gamemd

// 0x7B4780
namespace gamemd {
bool String::Compare(const char **a2, void *a2_1)
{


  int result; // eax
  result = *(unsigned int *)this->q000; /*0x7b4780*/
  if ( *(unsigned int *)this->q000 || *a2 ) /*0x7b478b*/
  {
    if ( result && *a2 ) /*0x7b479a*/
    {
      result = strcmp((const char *)result, *a2); /*0x7b47a9*/
      if ( result ) /*0x7b47c3*/
        LOBYTE(result) = 0; /*0x7b47da*/
      else
        return 1; /*0x7b47c5*/
    }
    else
    {
      LOBYTE(result) = 0; /*0x7b47e0*/
    }
  }
  else
  {
    LOBYTE(result) = 1; /*0x7b4790*/
  }
  return result; /*0x7b4792*/

}
} // namespace gamemd

// 0x7B47F0
namespace gamemd {
bool String::NotEquals(const char *a2)
{


  int result; // eax
  result = *(unsigned int *)this->q000; /*0x7b47f0*/
  if ( *(unsigned int *)this->q000 || a2 ) /*0x7b47fd*/
  {
    if ( result && a2 ) /*0x7b480b*/
    {
      result = strcmp((const char *)result, a2); /*0x7b4816*/
      if ( result ) /*0x7b4837*/
        LOBYTE(result) = 1; /*0x7b4847*/
    }
    else
    {
      LOBYTE(result) = 1; /*0x7b484d*/
    }
  }
  else
  {
    LOBYTE(result) = 0; /*0x7b47ff*/
  }
  return result; /*0x7b4801*/

}
} // namespace gamemd

// 0x7B48D0
namespace gamemd {
void ** String::Assign_Alt(const char *aP1, void *a2)
{


  if ( *(unsigned int *)this->q000 ) /*0x7b48d5*/
    __3_YAXPAX_Z(*(void **)this->q000); /*0x7b48dc*/
  *(unsigned int *)this->q000 = 0; /*0x7b48e8*/
  size_t v3; // ecx
  if ( aP1 ) /*0x7b48f0*/
    v3 = strlen(aP1) + 1; /*0x7b48f9*/
  else
    v3 = 1; /*0x7b48ff*/
  unsigned char *v4; // eax
  v4 = (unsigned char *)__2_YAPAXI_Z(v3); /*0x7b4905*/
  *(unsigned int *)this->q000 = (unsigned int)(v4); /*0x7b490d*/
  *v4 = 0; /*0x7b4911*/
  if ( aP1 ) /*0x7b4914*/
    strcpy(*(char **)this->q000, aP1); /*0x7b492c*/
  return (void **)this; /*0x7b4935*/

}
} // namespace gamemd

// 0x7B4940
namespace gamemd {
char ** String::Reassign(const char **aP1, void *a2)
{


  void *v3; // edi
  v3 = *(void **)this->q000; /*0x7b4949*/
  if ( (*(unsigned int *)this->q000 || *aP1) && (!v3 || !*aP1 || strcmp(*(const char **)this->q000, *aP1)) ) /*0x7b496c*/
  {
    char *v4; // esi
    v4 = (char *)*aP1; /*0x7b4994*/
    if ( !*aP1 ) /*0x7b4994*/
      v4 = &g_INI_DefaultBuffer; /*0x7b499a*/
    if ( v3 ) /*0x7b49a1*/
      __3_YAXPAX_Z(v3); /*0x7b49a4*/
    *(unsigned int *)this->q000 = 0; /*0x7b49ae*/
    size_t v5; // ecx
    if ( v4 ) /*0x7b49b5*/
      v5 = strlen(v4) + 1; /*0x7b49be*/
    else
      v5 = 1; /*0x7b49c4*/
    unsigned char *v6; // eax
    v6 = (unsigned char *)__2_YAPAXI_Z(v5); /*0x7b49ca*/
    *(unsigned int *)this->q000 = (unsigned int)(v6); /*0x7b49d2*/
    *v6 = 0; /*0x7b49d7*/
    if ( v4 ) /*0x7b49da*/
      strcpy(*(char **)this->q000, v4); /*0x7b49f3*/
  }
  return (char **)this; /*0x7b49fc*/

}
} // namespace gamemd

// 0x7B4C20
namespace gamemd {
const char ** String::Append(const char *aP1, void *a2)
{


  const char *v2 = aP1; // esi /*0x7b4c23*/
  if ( aP1 ) /*0x7b4c2b*/
  {
    unsigned int v4; // kr08_4
    v4 = strlen(aP1) + 1; /*0x7b4c39*/
    char *v5; // ebx
    v5 = *(char **)this->q000; /*0x7b4c3b*/
    size_t v6 = v4; // edx /*0x7b4c43*/
    if ( *(unsigned int *)this->q000 ) /*0x7b4c3b*/
      v6 = strlen(*(const char **)this->q000) + v4; /*0x7b4c52*/
    char *v7; // eax
    v7 = (char *)__2_YAPAXI_Z(v6); /*0x7b4c55*/
    *(unsigned int *)this->q000 = (unsigned int)(v7); /*0x7b4c61*/
    if ( v5 ) /*0x7b4c64*/
    {
      strcpy(v7, v5); /*0x7b4c7c*/
      v2 = aP1; /*0x7b4c85*/
    }
    else
    {
      *v7 = 0; /*0x7b4c8b*/
    }
    strcat(*(char **)this->q000, v2); /*0x7b4cad*/
    if ( v5 ) /*0x7b4cb9*/
      __3_YAXPAX_Z(v5); /*0x7b4cbc*/
  }
  return (const char **)this; /*0x7b4cc6*/

}
} // namespace gamemd

// 0x7B4CD0
namespace gamemd {
const char ** String::Append2(char **aP1, void *a2)
{

  const char *v4; // esi
  char *v10; // [esp+10h] [ebp+4h]

  char *v2 = *aP1; // eax /*0x7b4cd7*/
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
    unsigned int v5; // kr08_4
    v5 = strlen(v4) + 1; /*0x7b4d00*/
    char *v6; // ebx
    v6 = *(char **)this->q000; /*0x7b4d02*/
    size_t v7 = v5; // edx /*0x7b4d0a*/
    if ( *(unsigned int *)this->q000 ) /*0x7b4d02*/
      v7 = strlen(*(const char **)this->q000) + v5; /*0x7b4d19*/
    char *v8; // eax
    v8 = (char *)__2_YAPAXI_Z(v7); /*0x7b4d1c*/
    *(unsigned int *)this->q000 = (unsigned int)(v8); /*0x7b4d28*/
    if ( v6 ) /*0x7b4d2b*/
    {
      strcpy(v8, v6); /*0x7b4d43*/
      v4 = v10; /*0x7b4d4c*/
    }
    else
    {
      *v8 = 0; /*0x7b4d52*/
    }
    strcat(*(char **)this->q000, v4); /*0x7b4d74*/
    if ( v6 ) /*0x7b4d80*/
      __3_YAXPAX_Z(v6); /*0x7b4d83*/
  }
  return (const char **)this; /*0x7b4d8d*/

}
} // namespace gamemd

// 0x7B4DA0
namespace gamemd {
char ** String::Concat2(char **a2, const char *a3)
{


  char *v4 = 0; // ebx /*0x7b4da6*/
  if ( *(unsigned int *)this->q000 ) /*0x7b4da8*/
  {
    v4 = (char *)__2_YAPAXI_Z(strlen(*(const char **)this->q000) + 1); /*0x7b4dbf*/
    strcpy(v4, *(const char **)this->q000); /*0x7b4dd8*/
  }
  const char *v5 = a3; // esi /*0x7b4de1*/
  if ( a3 ) /*0x7b4de7*/
  {
    char *v6 = v4; // ebp /*0x7b4df4*/
    unsigned int v7; // kr14_4
    v7 = strlen(a3) + 1; /*0x7b4df6*/
    size_t v8 = v7; // edx /*0x7b4dfd*/
    if ( v4 ) /*0x7b4e00*/
      v8 = strlen(v4) + v7; /*0x7b4e0c*/
    char *v9; // eax
    v9 = (char *)__2_YAPAXI_Z(v8); /*0x7b4e0f*/
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
      __3_YAXPAX_Z(v6); /*0x7b4e71*/
  }
  *a2 = 0; /*0x7b4e7f*/
  if ( v4 ) /*0x7b4e86*/
  {
    char *v10; // edx
    v10 = (char *)__2_YAPAXI_Z(strlen(v4) + 1); /*0x7b4e99*/
    *a2 = v10; /*0x7b4ea2*/
    strcpy(v10, v4); /*0x7b4eb5*/
    __3_YAXPAX_Z(v4); /*0x7b4ebe*/
  }
  return a2; /*0x7b4ec6*/

}
} // namespace gamemd

// 0x7B4ED0
namespace gamemd {
char ** String::Concat(char **a1, char **aP2, void *a3)
{

  const char *v6; // esi
  char *v13; // [esp+18h] [ebp+8h]

  char *v4 = 0; // ebx /*0x7b4ed6*/
  if ( *(unsigned int *)this->q000 ) /*0x7b4ed8*/
  {
    v4 = (char *)__2_YAPAXI_Z(strlen(*(const char **)this->q000) + 1); /*0x7b4eef*/
    strcpy(v4, *(const char **)this->q000); /*0x7b4f08*/
  }
  char *v5 = *aP2; // eax /*0x7b4f15*/
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
    char *v7 = v4; // ebp /*0x7b4f3b*/
    unsigned int v8; // kr14_4
    v8 = strlen(v6) + 1; /*0x7b4f3d*/
    size_t v9 = v8; // edx /*0x7b4f44*/
    if ( v4 ) /*0x7b4f47*/
      v9 = strlen(v4) + v8; /*0x7b4f53*/
    char *v10; // eax
    v10 = (char *)__2_YAPAXI_Z(v9); /*0x7b4f56*/
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
      __3_YAXPAX_Z(v7); /*0x7b4fb8*/
  }
  *a1 = 0; /*0x7b4fc6*/
  if ( v4 ) /*0x7b4fcd*/
  {
    char *v11; // edx
    v11 = (char *)__2_YAPAXI_Z(strlen(v4) + 1); /*0x7b4fe0*/
    *a1 = v11; /*0x7b4fe9*/
    strcpy(v11, v4); /*0x7b4ffc*/
    __3_YAXPAX_Z(v4); /*0x7b5005*/
  }
  return a1; /*0x7b500d*/

}
} // namespace gamemd

// 0x7B5020
namespace gamemd {
char String::Erase(int aP1, int a3)
{


  int v4 = aP1; // ebp /*0x7b502d*/
  int v5 = a3; // esi /*0x7b5031*/
  unsigned int v6; // kr04_4
  v6 = strlen(*(const char **)this->q000) + 1; /*0x7b5035*/
  int result = a3 + aP1; // eax /*0x7b503a*/
  if ( a3 + aP1 > (int)(v6 - 1) ) /*0x7b503f*/
    v4 = v6 - 1 - a3; /*0x7b5043*/
  if ( v4 < 0 ) /*0x7b5047*/
  {
    v5 = v4 + a3; /*0x7b5049*/
    v4 = 0; /*0x7b504b*/
    a3 = v5; /*0x7b504d*/
  }
  if ( v5 > 0 ) /*0x7b5053*/
  {
    char *v8; // [esp+14h] [ebp+4h]
    v8 = (char *)__2_YAPAXI_Z(v6 - v5); /*0x7b506b*/
    *(unsigned char *)(*(unsigned int *)this->q000 + v4) = 0; /*0x7b506f*/
    *(unsigned char *)(v4 + *(unsigned int *)this->q000 + v5 - 1) = 0; /*0x7b507a*/
    strcpy(v8, *(const char **)this->q000); /*0x7b5092*/
    strcat(v8, (const char *)(a3 + v4 + *(unsigned int *)this->q000)); /*0x7b50c1*/
    __3_YAXPAX_Z(*(void **)this->q000); /*0x7b50cd*/
    *(unsigned int *)this->q000 = (unsigned int)(v8); /*0x7b50d9*/
    LOBYTE(result) = 1; /*0x7b50db*/
  }
  else
  {
    LOBYTE(result) = 0; /*0x7b5058*/
  }
  return result; /*0x7b5055*/

}
} // namespace gamemd

// 0x7B5230
namespace gamemd {
void String::TrimRight(ObjectClass * aP1)
{


  unsigned int v3; // esi
  if ( *(unsigned int *)this->q000 ) /*0x7b5236*/
    v3 = strlen(*(const char **)this->q000); /*0x7b524b*/
  else
    v3 = 0; /*0x7b523d*/
  unsigned int v4 = v3; // eax /*0x7b524d*/
  unsigned int v5 = v3 - 1; // esi /*0x7b524f*/
  if ( v4 ) /*0x7b5252*/
  {
    do /*0x7b527d*/
    {
      char *v6; // eax
      v6 = (char *)*aP1; /*0x7b5258*/
      if ( !*aP1 ) /*0x7b5258*/
        v6 = &g_INI_DefaultBuffer; /*0x7b525e*/
      if ( !strchr(v6, *(char *)(*(unsigned int *)this->q000 + v5)) ) /*0x7b526c*/
        break; /*0x7b5276*/
    }
    while ( v5-- ); /*0x7b527d*/
  }
  size_t v8 = v5 + 1; // esi /*0x7b5282*/
  const char *v9 = &g_INI_DefaultBuffer; // edi /*0x7b5285*/
  if ( *(unsigned int *)this->q000 ) /*0x7b527f*/
    v9 = *(const char **)this->q000; /*0x7b528c*/
  char *v10; // eax
  v10 = (char *)__2_YAPAXI_Z(v8 + 1); /*0x7b5292*/
  char *v11 = v10; // ebx /*0x7b5297*/
  *v10 = 0; /*0x7b529e*/
  if ( v9 ) /*0x7b52a1*/
    strncpy(v10, v9, v8); /*0x7b52a6*/
  v11[v8] = 0; /*0x7b52ae*/
  const char *v12 = &g_INI_DefaultBuffer; // esi /*0x7b52b2*/
  if ( v11 ) /*0x7b52b9*/
    v12 = v11; /*0x7b52bb*/
  if ( *(unsigned int *)this->q000 ) /*0x7b52bd*/
    __3_YAXPAX_Z(*(void **)this->q000); /*0x7b52c5*/
  *(unsigned int *)this->q000 = 0; /*0x7b52cf*/
  size_t v13; // ecx
  if ( v12 ) /*0x7b52d6*/
    v13 = strlen(v12) + 1; /*0x7b52df*/
  else
    v13 = 1; /*0x7b52e5*/
  unsigned char *v14; // eax
  v14 = (unsigned char *)__2_YAPAXI_Z(v13); /*0x7b52eb*/
  *(unsigned int *)this->q000 = (unsigned int)(v14); /*0x7b52f3*/
  *v14 = 0; /*0x7b52f8*/
  if ( v12 ) /*0x7b52fb*/
    strcpy(*(char **)this->q000, v12); /*0x7b5314*/
  if ( v11 ) /*0x7b531f*/
    __3_YAXPAX_Z(v11); /*0x7b5322*/

}
} // namespace gamemd

// 0x7B5400
namespace gamemd {
char * String::GetOrEmpty()
{


  char *result; // eax
  result = *(char **)this->q000; /*0x7b5400*/
  if ( !*(unsigned int *)this->q000 ) /*0x7b5400*/
    return &g_INI_DefaultBuffer; /*0x7b5406*/
  return result; /*0x7b540b*/

}
} // namespace gamemd

// 0x7B5440
namespace gamemd {
char * String::GetOrEmpty_Alt(void *a1)
{


  char *result; // eax
  result = *(char **)this->q000; /*0x7b5440*/
  if ( !*(unsigned int *)this->q000 ) /*0x7b5440*/
    return &g_INI_DefaultBuffer; /*0x7b5446*/
  return result; /*0x7b544b*/

}
} // namespace gamemd

// 0x7B5A40
namespace gamemd {
char String::Assign_Bool(const char *a2, void *a2_1)
{


  if ( *(unsigned int *)this->q000 ) /*0x7b5a45*/
    __3_YAXPAX_Z(*(void **)this->q000); /*0x7b5a4c*/
  *(unsigned int *)this->q000 = 0; /*0x7b5a58*/
  size_t v3; // ecx
  if ( a2 ) /*0x7b5a60*/
    v3 = strlen(a2) + 1; /*0x7b5a69*/
  else
    v3 = 1; /*0x7b5a6f*/
  int result; // eax
  result = (int)(__2_YAPAXI_Z(v3)); /*0x7b5a75*/
  *(unsigned int *)this->q000 = result; /*0x7b5a7d*/
  *(unsigned char *)result = 0; /*0x7b5a81*/
  if ( a2 ) /*0x7b5a84*/
  {
    result = strlen(a2) + 1; /*0x7b5a8d*/
    memcpy(*(void **)this->q000, a2, result); /*0x7b5a9c*/
  }
  LOBYTE(result) = 1; /*0x7b5aa7*/
  return result; /*0x7b5aa5*/

}
} // namespace gamemd

// 0x7B5B30
namespace gamemd {
int String::ToLower()
{

  int result; // eax

  unsigned int i; // esi
  for ( i = 0; *(unsigned int *)this->q000; ++i ) /*0x7b5b35*/
  {
    result = 0; /*0x7b5b42*/
    if ( i >= strlen(*(const char **)this->q000) ) /*0x7b5b4b*/
      break; /*0x7b5b4b*/
    char v4; // dl
    v4 = *(unsigned char *)(*(unsigned int *)this->q000 + i); /*0x7b5b4d*/
    if ( v4 >= 65 && v4 <= 90 ) /*0x7b5b58*/
    {
      result = tolower(v4); /*0x7b5b5e*/
      *(unsigned char *)(*(unsigned int *)this->q000 + i) = result; /*0x7b5b68*/
    }
  }
  return result; /*0x7b5b6e*/

}
} // namespace gamemd

// 0x7B5B80
namespace gamemd {
char ** String::ToLowerCopy(char **aP1, void *a2)
{


  char *v3 = 0; // ebx /*0x7b5b86*/
  if ( *(unsigned int *)this->q000 ) /*0x7b5b88*/
  {
    v3 = (char *)__2_YAPAXI_Z(strlen(*(const char **)this->q000) + 1); /*0x7b5b9f*/
    strcpy(v3, *(const char **)this->q000); /*0x7b5bb8*/
  }
  unsigned int i; // esi
  for ( i = 0; v3 && i < strlen(v3); ++i ) /*0x7b5bc1*/
  {
    char v5; // al
    v5 = v3[i]; /*0x7b5bd7*/
    if ( v5 >= 65 && v5 <= 90 ) /*0x7b5be0*/
      v3[i] = tolower(v5); /*0x7b5bee*/
  }
  *aP1 = 0; /*0x7b5bfa*/
  if ( v3 ) /*0x7b5c01*/
  {
    char *v6; // edx
    v6 = (char *)__2_YAPAXI_Z(strlen(v3) + 1); /*0x7b5c14*/
    *aP1 = v6; /*0x7b5c1d*/
    strcpy(v6, v3); /*0x7b5c30*/
    __3_YAXPAX_Z(v3); /*0x7b5c39*/
  }
  return aP1; /*0x7b5c41*/

}
} // namespace gamemd

// 0x7B5D70
namespace gamemd {
char String::CopyTruncated(size_t Count)
{


  const char *v3; // esi
  v3 = *(const char **)this->q000; /*0x7b5d75*/
  if ( !*(unsigned int *)this->q000 ) /*0x7b5d75*/
    v3 = &g_INI_DefaultBuffer; /*0x7b5d7c*/
  char *v4; // eax
  v4 = (char *)__2_YAPAXI_Z(Count + 1); /*0x7b5d89*/
  char *v5 = v4; // ebp /*0x7b5d8e*/
  *v4 = 0; /*0x7b5d95*/
  if ( v3 ) /*0x7b5d99*/
    strncpy(v4, v3, Count); /*0x7b5d9e*/
  v5[Count] = 0; /*0x7b5da8*/
  const char *v6 = &g_INI_DefaultBuffer; // esi /*0x7b5dac*/
  if ( v5 ) /*0x7b5db1*/
    v6 = v5; /*0x7b5db3*/
  if ( *(unsigned int *)this->q000 ) /*0x7b5db5*/
    __3_YAXPAX_Z(*(void **)this->q000); /*0x7b5dbc*/
  *(unsigned int *)this->q000 = 0; /*0x7b5dc6*/
  size_t v7; // ecx
  if ( v6 ) /*0x7b5dcc*/
    v7 = strlen(v6) + 1; /*0x7b5dd5*/
  else
    v7 = 1; /*0x7b5ddb*/
  unsigned char *v8; // eax
  v8 = (unsigned char *)__2_YAPAXI_Z(v7); /*0x7b5de1*/
  *(unsigned int *)this->q000 = (unsigned int)(v8); /*0x7b5de9*/
  *v8 = 0; /*0x7b5ded*/
  if ( v6 ) /*0x7b5df0*/
    strcpy(*(char **)this->q000, v6); /*0x7b5e08*/
  if ( v5 ) /*0x7b5e13*/
    __3_YAXPAX_Z(v5); /*0x7b5e16*/
  return 1; /*0x7b5e1e*/

}
} // namespace gamemd

// 0x7B78D0
namespace gamemd {
char String::TruncateTo(size_t Count)
{


  const wchar_t *v3; // esi
  v3 = *(const wchar_t **)this->q000; /*0x7b78d5*/
  if ( !*(unsigned int *)this->q000 ) /*0x7b78d5*/
    v3 = &g_TypeClass_DefaultString; /*0x7b78db*/
  wchar_t *v4; // eax
  v4 = (wchar_t *)__2_YAPAXI_Z(2 * Count + 2); /*0x7b78ea*/
  wchar_t *v5 = v4; // edi /*0x7b78ef*/
  *v4 = 0; /*0x7b78f6*/
  if ( v3 ) /*0x7b78fb*/
    wcsncpy(v4, v3, Count); /*0x7b7900*/
  v5[Count] = 0; /*0x7b7908*/
  const wchar_t *v6 = &g_TypeClass_DefaultString; // esi /*0x7b7911*/
  if ( v5 ) /*0x7b7916*/
    v6 = v5; /*0x7b7918*/
  if ( *(unsigned int *)this->q000 ) /*0x7b791a*/
    __3_YAXPAX_Z(*(void **)this->q000); /*0x7b7921*/
  *(unsigned int *)this->q000 = 0; /*0x7b792b*/
  int v7; // eax
  if ( v6 ) /*0x7b7931*/
    v7 = wcslen(v6) + 1; /*0x7b793c*/
  else
    v7 = 1; /*0x7b793f*/
  unsigned short *v8; // eax
  v8 = (unsigned short *)__2_YAPAXI_Z(2 * v7); /*0x7b7948*/
  *(unsigned int *)this->q000 = v8; /*0x7b7950*/
  *v8 = 0; /*0x7b7954*/
  if ( v6 ) /*0x7b7959*/
    wcscpy(*(wchar_t **)this->q000, v6); /*0x7b795f*/
  if ( v5 ) /*0x7b7969*/
    __3_YAXPAX_Z(v5); /*0x7b796c*/
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
