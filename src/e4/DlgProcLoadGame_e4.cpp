// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_6967B0_e4.hpp"
#include "e4/classes/E4Recv_696AE0_e4.hpp"
#include "e4/classes/E4Recv_696C40_e4.hpp"

// 0x6967B0
namespace gamemd {
HWND E4Recv_6967B0::DlgProcLoadGame_Load()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
HWND __thiscall DlgProcLoadGame_Load(int this)
{
  ObjectClass *DlgItem; // ebx
  HWND result; // eax
  HWND v4; // ebp
  int v5; // eax
  char v6; // al
  wchar_t *v7; // eax
  LRESULT ListBoxItem; // eax
  wchar_t *StringCSF; // [esp-10h] [ebp-24h]
  int v10; // [esp+0h] [ebp-14h]

  DlgItem = (ObjectClass *)GetDlgItem(*(HWND *)this, 1623); /*0x6967cf*/
  result = GetDlgItem(*(HWND *)this, 1631); /*0x6967d1*/
  v4 = result; /*0x6967d5*/
  if ( DlgItem && result ) /*0x6967df*/
  {
    ShowWindow(result, 0); /*0x6967e8*/
    EnableWindow(v4, 0); /*0x6967f1*/
    SendMessageA(v4, 0x4B5u, 0x40u, this + 8); /*0x696809*/
    *(_BYTE *)(this + 71) = 0; /*0x69680d*/
    String::Trim((char *)(this + 8)); /*0x696811*/
    _strupr((char *)(this + 8)); /*0x696817*/
    if ( !_strcmpi((const void *)(this + 8), &stru_830620.__pad_579C[36660]) ) /*0x69682c*/
    {
LABEL_17:
      v5 = 0; /*0x69691b*/
      goto LABEL_18; /*0x69691b*/
    }
    if ( !_strcmpi((const void *)(this + 8), &stru_830620.__pad_579C[36656]) ) /*0x696838*/
    {
LABEL_5:
      v5 = 1; /*0x696844*/
LABEL_18:
      ListBoxItem = FindListBoxItem((HWND)DlgItem, -1, v5); /*0x69691d*/
      return (HWND)SendMessageA((HWND)DlgItem, 0x14Eu, ListBoxItem, 0); /*0x696931*/
    }
    if ( !_strcmpi((const void *)(this + 8), &stru_830620.__pad_579C[36652]) ) /*0x696854*/
    {
LABEL_7:
      v5 = 2; /*0x696860*/
      goto LABEL_18; /*0x696865*/
    }
    if ( !_strcmpi((const void *)(this + 8), &stru_830620.__pad_579C[36648]) ) /*0x696870*/
    {
LABEL_9:
      v5 = 3; /*0x69687c*/
      goto LABEL_18; /*0x696881*/
    }
    if ( !strncmp((AnimClass *)(this + 8), &stru_830620.__pad_579C[36644], 3u) ) /*0x69688e*/
    {
      v6 = (unsigned char)this->M11; /*0x69689a*/
      switch ( v6 ) /*0x6968a8*/
      {
        case '1': /*0x6968a8*/
          goto LABEL_17;
        case '2': /*0x6968a8*/
          goto LABEL_5;
        case '3': /*0x6968a8*/
          goto LABEL_7;
        case '4': /*0x6968a8*/
          goto LABEL_9;
        default:
          if ( v6 <= 57 && v6 > 48 ) /*0x6968b5*/
          {
            *(_BYTE *)(this + 12) = 0; /*0x6968b7*/
            return ListBox::SetCustomEntry((HWND *)this, 1623, 4, (void *)(this + 8)); /*0x6968b7*/
          }
          StringCSF = GetStringCSF(g_Str_TXT_OK, 0, &stru_830620.__pad_579C[36460], 1088); /*0x6968f4*/
          v7 = GetStringCSF((wchar_t *)&stru_830620.__pad_579C[36616], 0, &stru_830620.__pad_579C[36460], 1088); /*0x696906*/
          result = (HWND)Dialog::ShowMessageBox((int)v7, StringCSF, 0, 0, 0, v10); /*0x696910*/
          break; /*0x69691a*/
      }
    }
    else
    {
      return ListBox::SetCustomEntry((HWND *)this, 1623, 4, (void *)(this + 8)); /*0x6968bb*/
    }
  }
  return result; /*0x6968ca*/
}
}
} // namespace gamemd

// 0x696AE0
namespace gamemd {
HWND E4Recv_696AE0::sub_696AE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
HWND __thiscall sub_696AE0(int this)
{
  HWND DlgItem; // edi
  HWND result; // eax
  HWND v4; // ebp
  char *v5; // esi
  LRESULT v6; // edi
  int v7; // eax
  char *v8; // [esp+10h] [ebp-8h]

  DlgItem = GetDlgItem(*(HWND *)this, 1629); /*0x696b05*/
  result = GetDlgItem(*(HWND *)this, 1630); /*0x696b07*/
  v4 = result; /*0x696b0b*/
  if ( DlgItem ) /*0x696b0d*/
  {
    if ( result ) /*0x696b15*/
    {
      v5 = (char *)(this + 8); /*0x696b21*/
      SendMessageA(DlgItem, 0x4B5u, 0x80u, (LPARAM)v5); /*0x696b30*/
      SendMessageA(DlgItem, 0x4B4u, 0, (LPARAM)&MEMORY[0x889F64]); /*0x696b3f*/
      String::Trim(v5); /*0x696b43*/
      result = 0; /*0x696b4d*/
      if ( strlen(v5) ) /*0x696b4f*/
      {
        _strupr(v5); /*0x696b5b*/
        v6 = SendMessageA(v4, 0x4C4u, 0xFFFFFFFF, (LPARAM)v5); /*0x696b6e*/
        if ( v6 == -1 ) /*0x696b73*/
        {
          v8 = (char *)__2_YAPAXI_Z(0x29u); /*0x696b8c*/
          strcpy(v8, v5); /*0x696ba2*/
          result = (HWND)SendMessageA(v4, 0x4C8u, 0, (LPARAM)v8); /*0x696bb1*/
          v6 = (LRESULT)result; /*0x696bb3*/
          if ( result == HWND_MESSAGE|0x2 ) /*0x696bb8*/
            return result; /*0x696bb8*/
          if ( MEMORY[0xA8DB5C] < MEMORY[0xA8DB54] /*0x696bf1*/
            || (MEMORY[0xA8DB59] || !MEMORY[0xA8DB54])
            && MEMORY[0xA8DB60] > 0
            && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0xA8DB4C] + 8))(
                 &MEMORY[0xA8DB4C],
                 MEMORY[0xA8DB54] + MEMORY[0xA8DB60],
                 0) )
          {
            v7 = MEMORY[0xA8DB5C]++; /*0x696c02*/
            *(_DWORD *)(MEMORY[0xA8DB50] + 4 * v7) = v8; /*0x696c11*/
          }
        }
        SendMessageA(v4, 0x186u, v6, 0); /*0x696c1d*/
        SendMessageA(v4, 0x197u, v6, 0); /*0x696c28*/
        this->M152 = v6; /*0x696c2e*/
        return (HWND)this; /*0x696c2a*/
      }
    }
  }
  return result; /*0x696c34*/
}
}
} // namespace gamemd

// 0x696C40
namespace gamemd {
HWND E4Recv_696C40::sub_696C40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
HWND __thiscall sub_696C40(int this)
{
  HWND result; // eax
  HWND v3; // edi
  LRESULT v4; // esi
  int v5; // eax

  result = GetDlgItem(*(HWND *)this, 1630); /*0x696c4f*/
  v3 = result; /*0x696c55*/
  if ( result ) /*0x696c59*/
  {
    result = (HWND)SendMessageA(result, 0x18Bu, 0, 0); /*0x696c6f*/
    if ( (int)result > 0 ) /*0x696c73*/
    {
      result = (HWND)SendMessageA(v3, 0x188u, 0, 0); /*0x696c7f*/
      v4 = (LRESULT)result; /*0x696c81*/
      if ( result != HWND_MESSAGE|0x2 ) /*0x696c86*/
      {
        SendMessageA(v3, 0x182u, (WPARAM)result, 0); /*0x696c91*/
        if ( v4 < MEMORY[0xA8DB5C] ) /*0x696c9b*/
        {
          v5 = v4; /*0x696c9e*/
          if ( v4 < --MEMORY[0xA8DB5C] ) /*0x696ca8*/
          {
            do /*0x696cc0*/
            {
              ++v5; /*0x696cb0*/
              *(_DWORD *)(MEMORY[0xA8DB50] + 4 * v5 - 4) = *(_DWORD *)(MEMORY[0xA8DB50] + 4 * v5); /*0x696cb4*/
            }
            while ( v5 < MEMORY[0xA8DB5C] ); /*0x696cc0*/
          }
        }
        if ( v4 >= SendMessageA(v3, 0x18Bu, 0, 0) ) /*0x696cd0*/
          --v4; /*0x696cd2*/
        SendMessageA(v3, 0x186u, v4, 0); /*0x696cdc*/
        result = (HWND)SendMessageA(v3, 0x197u, v4, 0); /*0x696ce7*/
        this->M152 = v4; /*0x696ce9*/
      }
    }
  }
  return result; /*0x696cef*/
}
}
} // namespace gamemd
