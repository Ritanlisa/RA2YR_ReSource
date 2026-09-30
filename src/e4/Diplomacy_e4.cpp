// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/Diplomacy_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/Map_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/DisplayClass_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Screen_e4.hpp"
#include "e4/classes/Movie_e4.hpp"

// 0x657DA0
namespace gamemd {
CampaignScore * * Diplomacy::DlgProc(HWND hDlg, unsigned int a2, unsigned int a3, HWND a4)
{

  int result; // eax
  int i; // ebx
  HWND DlgItem; // eax
  HWND v8; // eax
  HWND v9; // ebp
  int v10; // eax
  int v11; // eax
  int ResourceID_Hardcoded; // eax
  HWND v13; // ebp
  bool v14; // cc
  HWND v15; // eax
  HWND v16; // eax
  HWND v17; // ebp
  HWND v18; // ebx
  wchar_t *v19; // eax
  HWND v20; // eax
  int DlgCtrlID; // eax
  int *v22; // ecx
  int *v23; // ecx
  int v24; // edx
  int *v25; // ecx
  int v26; // esi
  int *v27; // ecx
  int v28; // edx
  unsigned int v29; // edi
  HWND hWnd; // [esp+10h] [ebp-14h]
  int v31; // [esp+14h] [ebp-10h]
  int v32; // [esp+18h] [ebp-Ch]
  int v33; // [esp+1Ch] [ebp-8h]
  unsigned __int8 IsAlliedWith; // [esp+20h] [ebp-4h]
  #375 *hDlga; // [esp+28h] [ebp+4h]
  HWND hDlgb; // [esp+28h] [ebp+4h]
  HWND hDlgc; // [esp+28h] [ebp+4h]
  int v38; // [esp+2Ch] [ebp+8h]
  char v39; // [esp+30h] [ebp+Ch]
  char v40; // [esp+34h] [ebp+10h]

  result = BaseDialogProc(hDlg, a2, a3, (unsigned int)a4); /*0x657dbd*/
  if ( result ) /*0x657dc4*/
    return result; /*0x657dc4*/
  if ( a2 != 273 ) /*0x657dd1*/
  {
    if ( a2 == 275 ) /*0x657dda*/
    {
      DrawPowerBarForPlayers(hDlg); /*0x65818a*/
      InvalidateRect(hDlg, 0, 1); /*0x658194*/
      return 0; /*0x6581a3*/
    }
    if ( a2 == 1175 ) /*0x657de5*/
    {
      for ( i = 0; i < 32; i += 4 ) /*0x657df1*/
      {
        DlgItem = GetDlgItem(hDlg, *(int *)((char *)&MEMORY[0x8391FC] + i)); /*0x657dfb*/
        SendMessageA(DlgItem, 0x4B2u, 0, (LPARAM)&MEMORY[0x887734]); /*0x657e10*/
        v8 = GetDlgItem(hDlg, *(int *)((char *)&MEMORY[0x83921C] + i)); /*0x657e1a*/
        SendMessageA(v8, 0x4B2u, 0, (LPARAM)&MEMORY[0x887734]); /*0x657e29*/
      }
      v40 = 0; /*0x657e3e*/
      v39 = 0; /*0x657e43*/
      v33 = HouseClass_Count; /*0x657e48*/
      v32 = 1; /*0x657e4c*/
      v38 = 0; /*0x657e54*/
      do /*0x65807d*/
      {
        v9 = GetDlgItem(hDlg, MEMORY[0x839240][v38]); /*0x657e6a*/
        hWnd = GetDlgItem(hDlg, MEMORY[0x839260][v38]); /*0x657e84*/
        v10 = v32; /*0x657e8b*/
        v31 = v32; /*0x657e8d*/
        if ( v32 == *((unsigned int *)HouseClass_Player + 12) ) /*0x657e91*/
        {
          v31 = 0; /*0x657e93*/
          v10 = 0; /*0x657e9b*/
        }
        if ( v10 < v33 /*0x657ec1*/
          && (v11 = *(unsigned int *)&HouseClass_Array->__pad_0[4 * v10], (hDlga = (#375 *)v11) != 0)
          && *(unsigned char *)(*(unsigned int *)(v11 + 52) + 421) )
        {
          if ( !BYTE1(MEMORY[0x8871E0][1].InfantryBrute) /*0x657ef9*/
            || (#375 *)MEMORY[0xAC1198] == HouseClass_Player
            || MEMORY[0xA8B244] == 2 )
          {
            ShowWindow(v9, 0); /*0x657f73*/
          }
          else
          {
            Diplomacy_Helper(v9); /*0x657eff*/
            IsAlliedWith = HouseClass::IsAlliedWith(HouseClass_Player, hDlga); /*0x657f16*/
            SendMessageA(v9, 0xF1u, IsAlliedWith, 0); /*0x657f2b*/
            HouseClass::IsAlliedWith(hDlga, HouseClass_Player); /*0x657f3c*/
            globalHelper_003DD0(v9); /*0x657f45*/
            v40 = 1; /*0x657f4f*/
            if ( MEMORY[0xA8B538] || !(unsigned __int8)House::IsCurrentPlayer(hDlga) ) /*0x657f5c*/
              EnableWindow(v9, 0); /*0x657f68*/
          }
          if ( (unsigned __int8)House::IsCurrentPlayer(hDlga) ) /*0x657f79*/
          {
            if ( MEMORY[0xA8B538] ) /*0x657f97*/
            {
              SendMessageA(hWnd, 0xF1u, 1u, 0); /*0x657fcc*/
              EnableWindow(hWnd, 0); /*0x657fd5*/
            }
            else
            {
              SendMessageA(hWnd, 0xF1u, *((unsigned __int8 *)&MEMORY[0xA8D108] + v31), 0); /*0x657fb0*/
            }
            v39 = 1; /*0x657fb6*/
          }
          else
          {
            ShowWindow(hWnd, 0); /*0x657f89*/
          }
        }
        else
        {
          ResourceID_Hardcoded = GetResourceIDHardcodedCSF((void *)v32); /*0x657fe5*/
          hDlgb = GetDlgItem(hDlg, ResourceID_Hardcoded); /*0x657ff1*/
          EnableWindow(hDlgb, 0); /*0x657ff5*/
          ShowWindow(hDlgb, 0); /*0x658002*/
          hDlgc = GetDlgItem(hDlg, MEMORY[0x839200][v38]); /*0x658015*/
          EnableWindow(hDlgc, 0); /*0x658019*/
          ShowWindow(hDlgc, 0); /*0x658026*/
          EnableWindow(v9, 0); /*0x65802b*/
          ShowWindow(v9, 0); /*0x658034*/
          EnableWindow(hWnd, 0); /*0x65803d*/
          ShowWindow(hWnd, 0); /*0x658046*/
          v13 = GetDlgItem(hDlg, MEMORY[0x839220][v38]); /*0x658056*/
          EnableWindow(v13, 0); /*0x65805b*/
          ShowWindow(v13, 0); /*0x658064*/
        }
        v14 = v38 * 4 + 4 < 28; /*0x658072*/
        ++v32; /*0x658075*/
        ++v38; /*0x658079*/
      }
      while ( v14 ); /*0x65807d*/
      if ( !v40 ) /*0x658089*/
      {
        v15 = GetDlgItem(hDlg, 1431); /*0x658091*/
        ShowWindow(v15, 0); /*0x658096*/
      }
      if ( !v39 ) /*0x65809e*/
      {
        v16 = GetDlgItem(hDlg, 1061); /*0x6580a6*/
        ShowWindow(v16, 0); /*0x6580ab*/
      }
      v17 = GetDlgItem(hDlg, 1840); /*0x6580b5*/
      if ( v17 ) /*0x6580b9*/
      {
        if ( MEMORY[0xA8B238][0] == 3 || MEMORY[0xA8B238][0] == 4 ) /*0x6580c8*/
        {
          ShowWindow(v17, 5); /*0x6580d4*/
          if ( MEMORY[0xA8B238][0] == 3 ) /*0x6580de*/
          {
            SendMessageA(v17, 0xF1u, (unsigned __int8)MEMORY[0xA8D110], 0); /*0x6580ef*/
          }
          else if ( MEMORY[0xA8B238][0] == 4 ) /*0x6580f4*/
          {
            SendMessageA(v17, 0xF1u, BYTE1(MEMORY[0xA8D110]), 0); /*0x658106*/
          }
        }
        else
        {
          ShowWindow(v17, 0); /*0x6580cd*/
        }
      }
      DrawPowerBarForPlayers(hDlg); /*0x658112*/
      if ( MEMORY[0xA8B238][0] == 3 || MEMORY[0xA8B238][0] == 4 ) /*0x658124*/
      {
        v18 = GetDlgItem(hDlg, 1062); /*0x658134*/
        v19 = WideString::GetOrEmpty_Alt((wchar_t **)(MEMORY[0xA8B23C] + 32)); /*0x658139*/
        SendMessageA(v18, 0x4B2u, 0, (LPARAM)v19); /*0x658147*/
      }
      v20 = GetDlgItem(hDlg, 1819); /*0x658153*/
      SendMessageA(v20, 0x4B2u, 0, 11055906); /*0x658162*/
      SetTimer(hDlg, 0, 0xFAu, 0); /*0x658172*/
      return 0; /*0x658181*/
    }
    return 0; /*0x658319*/
  }
  DlgCtrlID = GetDlgCtrlID(a4); /*0x6581a7*/
  if ( DlgCtrlID == 1059 ) /*0x6581b2*/
  {
    if ( !HIWORD(a3) ) /*0x6581b4*/
    {
      KillTimer(hDlg, 0); /*0x6581c0*/
      *(unsigned int *)GetWindowLongA(hDlg, 8) = 1059; /*0x6581d1*/
      return 0; /*0x6581de*/
    }
    return 0; /*0x6581b7*/
  }
  v22 = &MEMORY[0x83923C]; /*0x6581e1*/
  while ( *v22 != DlgCtrlID ) /*0x6581e8*/
  {
    if ( (int)++v22 >= (int)&MEMORY[0x83925C] ) /*0x6581f3*/
    {
      v23 = &MEMORY[0x83925C]; /*0x6581f5*/
      while ( *v23 != DlgCtrlID ) /*0x6581fc*/
      {
        if ( (int)++v23 >= (int)MEMORY[0x83927C] ) /*0x658207*/
        {
          if ( DlgCtrlID == 1840 ) /*0x6582d8*/
          {
            v29 = HIWORD(a3); /*0x6582da*/
            if ( HIWORD(a3) <= 1u ) /*0x6582e0*/
            {
              if ( MEMORY[0xA8B238][0] == 3 ) /*0x6582ee*/
              {
                LOBYTE(MEMORY[0xA8D110]) = v29 == 1; /*0x6582f9*/
                return 0; /*0x658305*/
              }
              if ( MEMORY[0xA8B238][0] == 4 ) /*0x65830b*/
                BYTE1(MEMORY[0xA8D110]) = v29 == 1; /*0x658313*/
            }
          }
          return 0; /*0x658313*/
        }
      }
      if ( HIWORD(a3) != 1 && HIWORD(a3) ) /*0x65828e*/
        return 0; /*0x65828e*/
      v27 = &MEMORY[0x83925C]; /*0x658298*/
      v28 = 0; /*0x6582a0*/
      while ( *v27 != DlgCtrlID ) /*0x6582a4*/
      {
        ++v27; /*0x6582a6*/
        ++v28; /*0x6582a9*/
        if ( (int)v27 >= (int)MEMORY[0x83927C] ) /*0x6582b0*/
        {
          v28 = -1; /*0x6582b2*/
          break; /*0x6582b2*/
        }
      }
      if ( v28 == *((unsigned int *)HouseClass_Player + 12) ) /*0x6582bd*/
        v28 = 0; /*0x6582bf*/
      *((unsigned char *)&MEMORY[0xA8D108] + v28) = HIWORD(a3) == 1; /*0x6582c3*/
      return 0; /*0x6582d0*/
    }
  }
  if ( HIWORD(a3) > 1u ) /*0x658214*/
    return 0; /*0x658214*/
  v24 = 0; /*0x65821e*/
  v25 = &MEMORY[0x83923C]; /*0x658220*/
  while ( *v25 != DlgCtrlID ) /*0x658227*/
  {
    ++v25; /*0x658229*/
    ++v24; /*0x65822c*/
    if ( (int)v25 >= (int)&MEMORY[0x83925C] ) /*0x658233*/
    {
      v26 = -1; /*0x658235*/
      goto LABEL_60; /*0x658235*/
    }
  }
  v26 = v24; /*0x65824e*/
LABEL_60:
  if ( v26 == *((unsigned int *)HouseClass_Player + 12) ) /*0x658241*/
    v26 = 0; /*0x658243*/
  if ( HIWORD(a3) ) /*0x65820e*/
    SendMessageA(a4, 0xF1u, 0, 0); /*0x658261*/
  else
    SendMessageA(a4, 0xF1u, 1u, 0); /*0x65824c*/
  SquadClass::ProcessMove(v26); /*0x658269*/
  return 0; /*0x658178*/

}
} // namespace gamemd
// 0x603DB0
namespace gamemd {
LRESULT Diplomacy_Helper(HWND hWnd, unsigned char a2)
{
  return SendMessageA(hWnd, 0x4E5u, 0, a2); /*0x603dc5*/
}
} // namespace gamemd

// 0x656580
char * Diplomacy::GetField(BuildingTypeClass * aP1)
{

  return (unsigned char *)this + 24 * aP1->Foundation + 4728; /*0x656595*/

}