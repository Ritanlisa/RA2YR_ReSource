// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/DeleteAndZero_e4.hpp"

// 0x7A19E0
namespace gamemd {
void sub_7A19E0()
{
  wchar_t *StringCSF; // eax
  int i; // esi
  char *v2; // eax
  signed int v3; // eax
  char *v4; // ebx
  int v5; // esi
  int v6; // edi
  char *v7; // eax
  wchar_t *v8; // eax
  wchar_t *v9; // eax
  wchar_t * v10;
  void *v11; // [esp+0h] [ebp-80h]
  void *v12; // [esp+Ch] [ebp-74h] BYREF
  int v13; // [esp+10h] [ebp-70h] BYREF
  unsigned int v14[27]; // [esp+14h] [ebp-6Ch] BYREF

  v10 = (wchar_t *)((int)((wchar_t *)(stru_B76AC4)));
  StringCSF = (wchar_t *)(GetStringCSF((wchar_t *)(aWolMatchfoundw), 0,(const char *)(g_Str_File_wonline_cpp), 28774));
  Dialog::ShowMessage((gamemd::ObjectClass *)(12648447),(gamemd::CampaignScore *)((size_t)StringCSF), v10); /*0x7a1a07*/
  ((String *)((const char **)&stru_B76AC4))->ToLowerCopy((char **)&v12); /*0x7a1a19*/
  if ( dword_B77D84 ) /*0x7a1a25*/
  {
    for ( i = *((unsigned int *)stru_B77D80 + (dword_B77D98(&v12) & ((1 << dword_B77D8C) - 1))); i; i = *(unsigned int *)(i + 112) ) /*0x7a1a4b*/
    {
      if ( ((String *)((const char **)i))->Compare((const char **)&v12) ) /*0x7a1a54*/
        break; /*0x7a1a5b*/
    }
  }
  v2 = ((String *)((char **)&stru_B76AC4))->GetOrEmpty(); /*0x7a1a6a*/
  ((String *)((char **)&v13))->Assign(v2); /*0x7a1a74*/
  v3 = dword_B77900; /*0x7a1a79*/
  v4 = 0; /*0x7a1a7e*/
  v5 = 0; /*0x7a1a80*/
  if ( (int)dword_B77900 <= 0 ) /*0x7a1a84*/
  {
  LABEL_12:
    v5 = -1; /*0x7a1ac0*/
  }
  else
  {
    v6 = 0; /*0x7a1a86*/
    while ( 1 ) /*0x7a1a88*/
    {
      if ( v6 >= 0 && v5 < v3 ) /*0x7a1a8e*/
        v4 = (char *)dword_B77908 + v6; /*0x7a1a96*/
      v7 = ((String *)((char **)&v13))->GetOrEmpty_Alt(); /*0x7a1aa1*/
      if ( !_strcmpi(v7, v4 + 36) ) /*0x7a1aa7*/
        break; /*0x7a1aa7*/
      v3 = dword_B77900; /*0x7a1ab3*/
      ++v5; /*0x7a1ab8*/
      v6 += 108; /*0x7a1ab9*/
      if ( v5 >= (int)dword_B77900 ) /*0x7a1abe*/
        goto LABEL_12; /*0x7a1abe*/
    }
  }
  j_DeleteAndZero((void **)&v13); /*0x7a1ac7*/
  if ( v5 == -1 ) /*0x7a1ad0*/
  {
    v8 = (wchar_t *)(GetStringCSF((wchar_t *)(aWolMatchoppone_0), 0,(const char *)(g_Str_File_wonline_cpp), 28787));
  }
  else
  {
    memset(v14, 0, sizeof(v14)); /*0x7a1ae9*/
    if ( v5 >= 0 && v5 < (int)dword_B77900 ) /*0x7a1af3*/
      qmemcpy(v14, (char *)dword_B77908 + 108 * v5, sizeof(v14)); /*0x7a1b0d*/
    if ( v14[6] ) /*0x7a1b15*/
    {
      v13 = -1; /*0x7a1b27*/
      (*(void (**)(LPVOID, unsigned int, int *))(*(unsigned int *)g_UIPointerTable + 32))((LPVOID)g_UIPointerTable, v14[6], &v13); /*0x7a1b34*/
      if ( v13 != -1 ) /*0x7a1b3e*/
      {
        v11 = (wchar_t *)((void *)v13);
        v9 = (wchar_t *)(GetStringCSF((wchar_t *)(aWolMatchoppone), 0,(const char *)(g_Str_File_wonline_cpp), 28800));
        Dialog::ShowMessage((gamemd::ObjectClass *)(12648447),(gamemd::CampaignScore *)((size_t)v9), v11); /*0x7a1b5d*/
        DeleteAndZero(&v12); /*0x7a1b69*/
        return; /*0x7a1b73*/
      }
      v8 = (wchar_t *)(GetStringCSF((wchar_t *)(aWolMatchoppone_0), 0,(const char *)(g_Str_File_wonline_cpp), 28802));
    }
    else
    {
      v8 = (wchar_t *)(GetStringCSF((wchar_t *)(aWolMatchoppone_0), 0,(const char *)(g_Str_File_wonline_cpp), 28794));
    }
  }
  Dialog::ShowMessage(12648447, (size_t)v8); /*0x7a1b90*/
  DeleteAndZero(&v12); /*0x7a1b9c*/
}
}
