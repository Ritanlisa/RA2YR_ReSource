// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/String_e4.hpp"

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
  int v10; // [esp+0h] [ebp-80h]
  void *v11; // [esp+0h] [ebp-80h]
  void *v12; // [esp+Ch] [ebp-74h] BYREF
  int v13; // [esp+10h] [ebp-70h] BYREF
  _DWORD v14[27]; // [esp+14h] [ebp-6Ch] BYREF

  v10 = dword_B76AC4; /*0x7a19f1*/
  StringCSF = GetStringCSF(aWolMatchfoundw, 0, g_Str_File_wonline_cpp, 28774); /*0x7a19fc*/
  Dialog::ShowMessage(12648447, (size_t)StringCSF, v10); /*0x7a1a07*/
  String::ToLowerCopy((const char **)&dword_B76AC4, (char **)&v12); /*0x7a1a19*/
  if ( dword_B77D84 ) /*0x7a1a25*/
  {
    for ( i = *((_DWORD *)dword_B77D80 + (dword_B77D98(&v12) & ((1 << dword_B77D8C) - 1))); i; i = *(_DWORD *)(i + 112) ) /*0x7a1a4b*/
    {
      if ( String::Compare((const char **)i, (const char **)&v12) ) /*0x7a1a54*/
        break; /*0x7a1a5b*/
    }
  }
  v2 = String::GetOrEmpty((char **)&dword_B76AC4); /*0x7a1a6a*/
  String::Assign((char **)&v13, v2); /*0x7a1a74*/
  v3 = g_WOL_State; /*0x7a1a79*/
  v4 = 0; /*0x7a1a7e*/
  v5 = 0; /*0x7a1a80*/
  if ( (int)g_WOL_State <= 0 ) /*0x7a1a84*/
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
        v4 = (char *)g_WOL_ConnectionFlags + v6; /*0x7a1a96*/
      v7 = String::GetOrEmpty_Alt((char **)&v13); /*0x7a1aa1*/
      if ( !_strcmpi(v7, v4 + 36) ) /*0x7a1aa7*/
        break; /*0x7a1aa7*/
      v3 = g_WOL_State; /*0x7a1ab3*/
      ++v5; /*0x7a1ab8*/
      v6 += 108; /*0x7a1ab9*/
      if ( v5 >= (int)g_WOL_State ) /*0x7a1abe*/
        goto LABEL_12; /*0x7a1abe*/
    }
  }
  DeleteAndZero((void **)&v13); /*0x7a1ac7*/
  if ( v5 == -1 ) /*0x7a1ad0*/
  {
    v8 = GetStringCSF(aWolMatchoppone_0, 0, g_Str_File_wonline_cpp, 28787); /*0x7a1ad7*/
  }
  else
  {
    memset(v14, 0, sizeof(v14)); /*0x7a1ae9*/
    if ( v5 >= 0 && v5 < (int)g_WOL_State ) /*0x7a1af3*/
      qmemcpy(v14, (char *)g_WOL_ConnectionFlags + 108 * v5, sizeof(v14)); /*0x7a1b0d*/
    if ( v14[6] ) /*0x7a1b15*/
    {
      v13 = -1; /*0x7a1b27*/
      (*(void (__stdcall **)(LPVOID, _DWORD, int *))(*(_DWORD *)g_UIPointerTable + 32))(g_UIPointerTable, v14[6], &v13); /*0x7a1b34*/
      if ( v13 != -1 ) /*0x7a1b3e*/
      {
        v11 = (void *)v13; /*0x7a1b40*/
        v9 = GetStringCSF(aWolMatchoppone, 0, g_Str_File_wonline_cpp, 28800); /*0x7a1b52*/
        Dialog::ShowMessage(12648447, (size_t)v9, v11); /*0x7a1b5d*/
        DeleteAndZero(&v12); /*0x7a1b69*/
        return; /*0x7a1b73*/
      }
      v8 = GetStringCSF(aWolMatchoppone_0, 0, g_Str_File_wonline_cpp, 28802); /*0x7a1b85*/
    }
    else
    {
      v8 = GetStringCSF(aWolMatchoppone_0, 0, g_Str_File_wonline_cpp, 28794); /*0x7a1b1c*/
    }
  }
  Dialog::ShowMessage(12648447, (size_t)v8); /*0x7a1b90*/
  DeleteAndZero(&v12); /*0x7a1b9c*/
}
}