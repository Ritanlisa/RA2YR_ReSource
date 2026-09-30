// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/GameClass_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/NetworkLobby_e4.hpp"
#include "e4/classes/Session_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/WOLobby_e4.hpp"
#include "e4/classes/HashTable_flat_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/WalkLocomotion_e4.hpp"
#include "e4/classes/ThemeClass_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/WWMouseClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Building_e4.hpp"
#include "e4/classes/WebBrowser_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/ShipLocomotionClass_e4.hpp"

// 0x5E3850
namespace gamemd {
int INIClass::WOLobby_Play()
{

  const char *v1; // edx
  int v2; // ebx
  int result; // eax
  int i; // esi
  char *v6; // eax
  char v7[108]; // [esp+14h] [ebp-234h] BYREF
  unsigned int v8[113]; // [esp+80h] [ebp-1C8h] BYREF
  __int16 v9; // [esp+244h] [ebp-4h]
  char v10; // [esp+246h] [ebp-2h]

  v2 = (int)*(&g_MatrixTransformState + 2263); /*0x5e3857*/
  if ( *(&g_MatrixTransformState + 2263) ) /*0x5e3864*/
  {
    memset(v7, 0, sizeof(v7)); /*0x5e3875*/
    strcpy(&v7[36], this->__pad_0); /*0x5e3892*/
    return (*(int (**)(int, char *, const char *))(*(unsigned int *)v2 + 56))(v2, v7, v1); /*0x5e38a3*/
  }
  else
  {
    memset(v8, 0, sizeof(v8)); /*0x5e38c6*/
    v9 = 0; /*0x5e38c8*/
    v10 = 0; /*0x5e38ca*/
    v8[0] = 24; /*0x5e38d5*/
    strcpy((char *)&v8[1], &HouseClass_Player.__pad_5568[8396]); /*0x5e38f6*/
    strcpy((char *)&v8[11] + 3, v1); /*0x5e3915*/
    *(unsigned int *)&HouseClass_Player.__pad_5568[17731] = Session::GetPlayerColor(&HouseClass_Player.__pad_5568[8068]); /*0x5e392d*/
    *(unsigned int *)&HouseClass_Player.__pad_5568[17735] = WideString::Hash((wchar_t *)&HouseClass_Player.__pad_5568[17244]); /*0x5e3937*/
    result = *(unsigned int *)&HouseClass_Player.__pad_5568[18384]; /*0x5e393c*/
    for ( i = 1; i < *(int *)&HouseClass_Player.__pad_5568[18384]; ++i ) /*0x5e3948*/
    {
      v6 = ToWideStringChar(*(IUnknown **)(*(unsigned int *)&HouseClass_Player.__pad_5568[18372] + 4 * i)); /*0x5e3953*/
      if ( !_strcmpi(v6, this) ) /*0x5e3959*/
      {
        Debug::Log(); /*0x5e3974*/
        Network::SendMessage( /*0x5e39a0*/
          (int)&HouseClass_Player.__pad_5568[22284],
          (int)v8,
          455,
          1,
          *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[18372] + 4 * i) + 40,
          0,
          0);
        Event::Dispatch(); /*0x5e39a5*/
      }
      result = *(unsigned int *)&HouseClass_Player.__pad_5568[18384]; /*0x5e39aa*/
    }
  }
  return result; /*0x5e38a6*/

}
}
// 0x78F7F0
int WOLobby::SetupDlgProc(HWND hDlg, unsigned int a2, unsigned int nIDDlgItem, HWND hWnd)
{

  int result; // eax
  int v5; // ecx
  HWND DlgItem; // eax
  HWND v7; // eax
  HWND v8; // eax
  HWND v9; // ebx
  HWND v10; // ebx
  unsigned int *v11; // eax
  unsigned int *v12; // eax
  HWND v13; // esi
  int v14; // esi
  wchar_t *v15; // eax
  HWND v16; // ebx
  int v17; // esi
  unsigned int v18; // edi
  HWND v19; // eax
  HWND v20; // esi
  const wchar_t **v21; // eax
  wchar_t *v22; // eax
  wchar_t **OwnerName; // eax
  wchar_t *v24; // eax
  void *v25; // esi
  unsigned int *v26; // ecx
  wchar_t *v27; // eax
  void *v28; // esi
  LRESULT v29; // eax
  wchar_t *v30; // eax
  wchar_t *v31; // eax
  int v32; // ebx
  size_t v33; // esi
  wchar_t *v34; // edi
  wchar_t *v35; // eax
  wchar_t *v36; // eax
  wchar_t *v37; // ebp
  const wchar_t *v38; // esi
  struct tagRECT *p_Rect; // edi
  wchar_t v40; // ax
  wchar_t *v41; // eax
  wchar_t *v42; // eax
  size_t v43; // esi
  wchar_t *v44; // edi
  wchar_t *v45; // eax
  wchar_t *v46; // eax
  wchar_t *v47; // eax
  wchar_t *v48; // edi
  size_t v49; // eax
  size_t v50; // eax
  const wchar_t *k; // esi
  char *v52; // eax
  wchar_t *v53; // eax
  wchar_t *v54; // eax
  int v55; // esi
  wchar_t *v56; // eax
  HWND v57; // eax
  int v58; // edx
  void (**v59)(LPVOID, char *, int, char **); // esi
  int v60; // eax
  int v61; // ecx
  wchar_t *v62; // eax
  wchar_t *v63; // eax
  int v64; // esi
  char v65; // cl
  wchar_t *v66; // eax
  int v67; // ebx
  int i; // edi
  int v69; // esi
  wchar_t *v70; // eax
  size_t v71; // ecx
  signed int v72; // eax
  int *v73; // edx
  wchar_t *v74; // eax
  int v75; // edx
  int v76; // esi
  int *v77; // eax
  signed int v78; // ebx
  signed int v79; // esi
  wchar_t *v80; // eax
  int v81; // esi
  wchar_t *v82; // eax
  HWND Current; // eax
  HWND v84; // eax
  int v85; // ebp
  int v86; // edi
  char *v87; // eax
  signed int v88; // eax
  int v89; // edi
  int v90; // eax
  wchar_t *v91; // eax
  wchar_t *v92; // eax
  wchar_t *v93; // eax
  signed int v94; // ebx
  signed int v95; // eax
  struct in_addr *v96; // ebp
  struct in_addr *v97; // eax
  char *v98; // edx
  struct in_addr *j; // eax
  HWND v100; // esi
  int GameUI; // eax
  char (*v102)(); // edx
  int v103; // ecx
  char v104; // al
  bool v105; // bl
  HWND v106; // eax
  int v107; // ecx
  char v108; // bl
  char v109; // al
  unsigned int *v110; // eax
  int v111; // esi
  int v112; // ecx
  int v113; // ebp
  signed int v114; // edi
  signed int v115; // ebx
  ULONG v116; // esi
  char *v117; // eax
  LPARAM v118; // eax
  LPARAM v119; // eax
  unsigned int *First; // ebx
  int v121; // edx
  int *v122; // eax
  HWND v123; // eax
  HWND v124; // eax
  HWND v125; // eax
  HWND v126; // ebx
  HWND v127; // ebx
  signed int v128; // ebx
  int v129; // eax
  int v130; // eax
  int PlayerCount; // esi
  int v132; // ecx
  HWND v133; // eax
  signed int v134; // edi
  int v135; // ebp
  ULONG S_addr; // esi
  char *v137; // eax
  HWND v138; // eax
  void **v139; // ebx
  void *DlgCtrlID; // esi
  LRESULT SelectedRaw; // eax
  wchar_t *ColorTooltip; // eax
  void *Selected; // eax
  wchar_t *Name; // eax
  void *SelectedDefault; // eax
  wchar_t *DifficultyString; // eax
  wchar_t *v147; // esi
  wchar_t *v148; // eax
  wchar_t *v149; // eax
  wchar_t *v150; // eax
  wchar_t *v151; // eax
  void **v152; // ecx
  int v153; // esi
  int v154; // eax
  wchar_t *v155; // eax
  wchar_t *v156; // esi
  wchar_t *v157; // eax
  int v158; // [esp-8h] [ebp-264h]
  int v159; // [esp-4h] [ebp-260h]
  wchar_t *v160; // [esp-4h] [ebp-260h]
  wchar_t *v161; // [esp-4h] [ebp-260h]
  const wchar_t *v162; // [esp+10h] [ebp-24Ch] BYREF
  char v163; // [esp+17h] [ebp-245h]
  void (**v164)(LPVOID, char *, int, char **); // [esp+18h] [ebp-244h] BYREF
  int v165; // [esp+1Ch] [ebp-240h]
  char *v166; // [esp+20h] [ebp-23Ch]
  void (**v167)(LPVOID, char *, int, char **); // [esp+24h] [ebp-238h]
  size_t v168; // [esp+28h] [ebp-234h]
  struct tagRECT Rect; // [esp+2Ch] [ebp-230h] BYREF
  void *v170; // [esp+4Ch] [ebp-210h] BYREF
  void *v171; // [esp+50h] [ebp-20Ch] BYREF
  struct in_addr String[32]; // [esp+54h] [ebp-208h] BYREF
  wchar_t Destination[66]; // [esp+D4h] [ebp-188h] BYREF
  wchar_t String1[130]; // [esp+158h] [ebp-104h] BYREF

  result = BaseDialogProc(hDlg, a2, nIDDlgItem, (unsigned int)hWnd);
  if ( result )
    return result;
  v5 = g_NetworkLobbyState;
  if ( g_NetworkLobbyState )
    goto LABEL_68;
  switch ( a2 )
  {
    case 0x111u:
      if ( (unsigned __int16)nIDDlgItem > 0x596u )
      {
        if ( (unsigned __int16)nIDDlgItem > 0x624u )
        {
          if ( (unsigned __int16)nIDDlgItem == 1690 )
          {
            MEMORY[0xA8B263] = SendDlgItemMessageA(hDlg, 1690, 0xF0u, 0, 0) == 1;
          }
          else
          {
            if ( (unsigned __int16)nIDDlgItem != 1693 )
              goto LABEL_57;
            LOBYTE(MEMORY[0xA8B264]) = SendDlgItemMessageA(hDlg, 1693, 0xF0u, 0, 0) == 1;
          }
          goto LABEL_56;
        }
        switch ( (unsigned __int16)nIDDlgItem )
        {
          case 0x624u:
            MEMORY[0xA8B260] = SendDlgItemMessageA(hDlg, 1572, 0xF0u, 0, 0) == 1;
            break;
          case 0x597u:
            MEMORY[0xA8B31C] = SendDlgItemMessageA(hDlg, 1431, 0xF0u, 0, 0) == 1;
            break;
          case 0x599u:
            MEMORY[0xA8B31F] = SendDlgItemMessageA(hDlg, 1433, 0xF0u, 0, 0) == 1;
            break;
          default:
            goto LABEL_57;
        }
      }
      else if ( (unsigned __int16)nIDDlgItem == 1430 )
      {
        MEMORY[0xA8B31D] = SendDlgItemMessageA(hDlg, 1430, 0xF0u, 0, 0) == 1;
      }
      else if ( (unsigned __int16)nIDDlgItem > 0x54Du )
      {
        if ( (unsigned __int16)nIDDlgItem == 1358 )
        {
          MEMORY[0xA8B262] = 0;
          if ( SendDlgItemMessageA(hDlg, 1358, 0xF0u, 0, 0) == 1 )
          {
            MEMORY[0xA8B262] = 1;
            if ( !MEMORY[0xA8B258] )
            {
              MEMORY[0xA8B258] = 1;
              SendDlgItemMessageA(hDlg, 1355, 0xF1u, 1u, 0);
            }
          }
        }
        else
        {
          if ( (unsigned __int16)nIDDlgItem != 1361 )
            goto LABEL_57;
          MEMORY[0xA8B26C] = SendDlgItemMessageA(hDlg, 1361, 0xF0u, 0, 0) == 1;
        }
      }
      else
      {
        switch ( (unsigned __int16)nIDDlgItem )
        {
          case 0x54Du:
            MEMORY[0xA8B261] = SendDlgItemMessageA(hDlg, 1357, 0xF0u, 0, 0) == 1;
            break;
          case 0x3E8u:
            LOBYTE(MEMORY[0xA8B320]) = SendDlgItemMessageA(hDlg, 1000, 0xF0u, 0, 0) == 1;
            break;
          case 0x54Bu:
            MEMORY[0xA8B258] = 0;
            if ( SendDlgItemMessageA(hDlg, 1355, 0xF0u, 0, 0) == 1 )
            {
              MEMORY[0xA8B258] = 1;
            }
            else if ( !MEMORY[0xA8B258] )
            {
              MEMORY[0xA8B262] = 0;
              SendDlgItemMessageA(hDlg, 1358, 0xF1u, 0, 0);
            }
            break;
          default:
            goto LABEL_57;
        }
      }
      v12 = &unk_B76EF4;
      do
      {
        *v12 = 0;
        v12 += 37;
      }
      while ( (int)v12 < (int)dword_B77300 );
      Game::ResetReadyStates();
      DisplayRankingsWOL(0);
LABEL_56:
      v5 = g_NetworkLobbyState;
      goto LABEL_57;
    case 0x114u:
      if ( (unsigned short)nIDDlgItem == 8 )
      {
        if ( GetDlgItem(hDlg, 1359) )
          MEMORY[0xA8B270] = SendDlgItemMessageA(hDlg, 1359, 0x400u, 0, 0);
        if ( GetDlgItem(hDlg, 1026) )
          MEMORY[0xA8B25C] = SendDlgItemMessageA(hDlg, 1026, 0x400u, 0, 0);
        if ( GetDlgItem(hDlg, 1321) )
          MEMORY[0xA8B268] = 6 - SendDlgItemMessageA(hDlg, 1321, 0x400u, 0, 0);
        v11 = &unk_B76EF4;
        do
        {
          *v11 = 0;
          v11 += 37;
        }
        while ( (int)v11 < (int)dword_B77300 );
        Game::ResetReadyStates();
        DisplayRankingsWOL(0);
      }
      goto LABEL_21;
    case 0x497u:
      if ( MEMORY[0xA8B238][0] == 4 )
      {
        if ( dword_B76B24 || (v163 = BYTE1(dword_B76B30) & 1, (dword_B76B30 & 0x100) != 0) )
        {
          DlgItem = GetDlgItem(hDlg, 1362);
          EnableWindow(DlgItem, 0);
          v7 = GetDlgItem(hDlg, 1363);
          EnableWindow(v7, 0);
          v8 = GetDlgItem(hDlg, 1431);
          EnableWindow(v8, 0);
          MEMORY[0xA8B274] = 0;
          MEMORY[0xA8B31C] = 0;
          v9 = GetDlgItem(hDlg, 1358);
          SendMessageA(v9, 0xF1u, 1u, 0);
          EnableWindow(v9, 0);
          v10 = GetDlgItem(hDlg, 1355);
          SendMessageA(v10, 0xF1u, 1u, 0);
          EnableWindow(v10, 0);
          MEMORY[0xA8B262] = 1;
          MEMORY[0xA8B258] = 1;
        }
      }
      InitSkirmishDialogControls(hDlg, 1);
LABEL_320:
      v118 = HashTable::Find(MEMORY[0xAC4848], MEMORY[0x83614C], 0);
      SendDlgItemMessageA(hDlg, 1005, 0x49Cu, 0, v118);
      v119 = HashTable::Find(MEMORY[0xAC4848], MEMORY[0x836158], 0);
      SendDlgItemMessageA(hDlg, 1005, 0x4AAu, 0, v119);
      First = (unsigned int *)MultiplayerGameMode::GetFirst();
      v121 = First[10];
      MEMORY[0xA8B23C] = (int)First;
      *(unsigned int *)MEMORY[0xA8B250] = v121;
      (*(void (**)(unsigned int *))(*First + 32))(First);
      SetDialogPlayerName(hDlg, (int)First);
      MEMORY[0xA8B254] = (*(int (**)(unsigned int *))(*First + 68))(First);
      LoadScenarioClassByIndex(MEMORY[0xA8B254]);
      SkirmishDialog::FillComboBoxes(hDlg);
      InitGameDropdownColors();
      Lobby::FillPlayerFactions(hDlg);
      _cfltcvt_init();
      GDlg::LoadLetterStrings();
      Lobby::InvalidatePlayerSlots(hDlg);
      RefreshLobbyPlayerSlots(0xFFFFFFFF);
      v122 = MEMORY[0xA8B2FC];
      do
      {
        *(v122 - 8) = -2;
        *v122++ = -2;
      }
      while ( (int)v122 < (int)&MEMORY[0xA8B31C] );
      SetupSkirmishDialogPlayerSlot(hDlg, MEMORY[0xA8DA8C]);
      MapSkirmishDialogPlayerToControl(hDlg, MEMORY[0xA8DA8C]);
      FillLobbyFactionComboBox(hDlg, MEMORY[0xA8DA8C]);
      SetupMultiplayerLobbyPlayers(hDlg, (int)&MEMORY[0xA8B4BC]);
      if ( MEMORY[0xA8B238][0] == 4 )
      {
        if ( dword_B76B24 || (v163 = BYTE1(dword_B76B30) & 1, (dword_B76B30 & 0x100) != 0) )
        {
          v123 = GetDlgItem(hDlg, 1362);
          EnableWindow(v123, 0);
          v124 = GetDlgItem(hDlg, 1363);
          EnableWindow(v124, 0);
          v125 = GetDlgItem(hDlg, 1431);
          EnableWindow(v125, 0);
          MEMORY[0xA8B274] = 0;
          MEMORY[0xA8B31C] = 0;
          v126 = GetDlgItem(hDlg, 1358);
          SendMessageA(v126, 0xF1u, 1u, 0);
          EnableWindow(v126, 0);
          v127 = GetDlgItem(hDlg, 1355);
          SendMessageA(v127, 0xF1u, 1u, 0);
          EnableWindow(v127, 0);
          MEMORY[0xA8B262] = 1;
          MEMORY[0xA8B258] = 1;
        }
      }
      v128 = 0;
      if ( MEMORY[0xA8B23C]
        && !(*(unsigned __int8 (**)(int))(*(unsigned int *)MEMORY[0xA8B23C] + 188))(MEMORY[0xA8B23C]) )
      {
        MEMORY[0x8316A4] = -1;
        MEMORY[0xAC10C8] = 0;
        Dialog::RefreshDialogsGame(0);
        *(unsigned int *)(*(unsigned int *)MEMORY[0xA8DA78] + 107) = 0;
        v129 = (*(int (**)(int))(*(unsigned int *)MEMORY[0xA8B23C] + 40))(MEMORY[0xA8B23C]);
        SessionClass::SetPlayerOption(MEMORY[0xA8DA90], v129);
        SessionClass::SetPlayerColor(MEMORY[0xA8DA90], -2);
        SessionClass::SetOption(MEMORY[0xA8DA90], -2);
        v130 = (*(int (**)(int))(*(unsigned int *)MEMORY[0xA8B23C] + 44))(MEMORY[0xA8B23C]);
        SessionClass::SetOption2(MEMORY[0xA8DA90], v130);
        Lobby::FillPlayerFactions(hDlg);
      }
      SetupSkirmishPlayerSlots(hDlg, 0, (HWND)1);
      SetupMultiplayerLobbyScreen(hDlg, (void *)0xFFFFFFFF, MEMORY[0xA8B254]);
      SessionClass::BuildLaunchString();
      NetworkLobby::Dispatch(hDlg);
      SetDialogPlayerName(hDlg, MEMORY[0xA8B23C]);
      Dialog::ShowPlayerName(hDlg);
      Session::StartGame(hDlg);
      PlayerCount = ReadPlayerCountMap(MEMORY[0xA8B254]);
      if ( !MEMORY[0xA8B23C]
        || !(*(unsigned __int8 (**)(int))(*(unsigned int *)MEMORY[0xA8B23C] + 4))(MEMORY[0xA8B23C])
        || (v132 = *((unsigned int *)MEMORY[0xA8B230] + 1145), v132 > PlayerCount) )
      {
        v132 = PlayerCount;
      }
      ResetLobbyFactionTable(v132);
      Lobby::InvalidateFactionCombos(hDlg);
      Lobby::InvalidatePlayerSlots(hDlg);
      RefreshLobbyPlayerSlots(0xFFFFFFFF);
      MEMORY[0xA8B8C4] = VersionInfo::Read((int)&MEMORY[0xA8ECE0]);
      SetTimer(hDlg, 0x14AF8u, 0x1388u, 0);
      InitSkirmishDialogControls(hDlg, 1);
      RefreshLobbyAll(hDlg, 1);
      v133 = GetDlgItem(hDlg, 1344);
      SetFocus(v133);
      if ( !g_NetworkLobbyState )
      {
        v164 = 0;
        memset(String, 0, 0x6Cu);
        v134 = g_WOL_State;
        v168 = g_WOL_State;
        if ( (int)g_WOL_State > 0 )
        {
          v135 = 0;
          do
          {
            if ( v135 >= 0 && v128 < (int)g_WOL_State )
            {
              qmemcpy(String, (char *)g_WOL_ConnectionFlags + v135, 0x6Cu);
              v134 = v168;
            }
            S_addr = String[6].S_un.S_addr;
            ntoainet(String[6]);
            Debug::Log();
            v167 = *(void (***)(LPVOID, char *, int, char **))MEMORY[0xAC1170];
            v137 = ntoainet((struct in_addr)S_addr);
            v167[6](MEMORY[0xAC1170], v137, 1000, (char **)&v164);
            ++v128;
            v135 += 108;
          }
          while ( v128 < v134 );
          return 0;
        }
      }
      return 0;
  }
LABEL_68:
  if ( a2 > 0x111 )
  {
    if ( a2 <= 0x49B )
    {
      if ( a2 == 1179 )
      {
        v138 = GetDlgItem(hDlg, nIDDlgItem);
        SendMessageA(v138, 0x4B3u, 0x7Fu, (LPARAM)hWnd);
        return 0;
      }
      if ( a2 > 0x115 )
      {
        if ( a2 == 1175 )
          goto LABEL_320;
        return 0;
      }
      if ( a2 < 0x114 )
      {
        if ( a2 == 275 )
        {
          if ( nIDDlgItem != 84728 )
            return 0;
          if ( !Settings::CheckString() )
            return 0;
          Event_Handle_7A0F40();
          if ( g_NetworkLobbyState )
            return 0;
          v113 = 0;
          memset(String, 0, 0x6Cu);
          v114 = g_WOL_State;
          v115 = 0;
          v168 = g_WOL_State;
          v164 = 0;
          if ( (int)g_WOL_State <= 0 )
            return 0;
          do
          {
            if ( v113 >= 0 && v115 < (int)g_WOL_State )
            {
              qmemcpy(String, (char *)g_WOL_ConnectionFlags + v113, 0x6Cu);
              v114 = v168;
            }
            v116 = String[6].S_un.S_addr;
            ntoainet(String[6]);
            Debug::Log();
            v167 = *(void (***)(LPVOID, char *, int, char **))MEMORY[0xAC1170];
            v117 = ntoainet((struct in_addr)v116);
            v167[6](MEMORY[0xAC1170], v117, 1000, (char **)&v164);
            ++v115;
            v113 += 108;
          }
          while ( v115 < v114 );
          return 0;
        }
        return 0;
      }
LABEL_21:
      if ( hWnd == GetDlgItem(hDlg, 1842) )
      {
        if ( !g_NetworkLobbyState )
        {
          MEMORY[0xA8EB68] = SendDlgItemMessageA(hDlg, 1842, 0x400u, 0, 0);
          return 0;
        }
      }
      else if ( !g_NetworkLobbyState )
      {
        MEMORY[0xA8B270] = SendDlgItemMessageA(hDlg, 1359, 0x400u, 0, 0);
        MEMORY[0xA8B25C] = SendDlgItemMessageA(hDlg, 1026, 0x400u, 0, 0);
        MEMORY[0xA8B268] = 6 - SendDlgItemMessageA(hDlg, 1321, 0x400u, 0, 0);
        return 0;
      }
      return 0;
    }
    if ( a2 != 1257 )
    {
      if ( a2 == 1261 )
      {
        ShowWindow(hDlg, 0);
        Dialog::InitWindow(hDlg, 1);
        return 0;
      }
      return 0;
    }
    v139 = (void **)(hWnd + 2);
    WideString::Assign_Alt((void **)hWnd + 2, 0);
    if ( *(unsigned int *)hWnd )
    {
      DlgCtrlID = (void *)GetDlgCtrlID(*(HWND *)hWnd);
      if ( *((unsigned int *)hWnd + 1) != -1 )
      {
        if ( Dialog::MapPlayerIDToIndex(DlgCtrlID) != -1 )
        {
          SelectedDefault = (void *)GetComboBoxSelectedDefault(hDlg, (int)DlgCtrlID, *((unsigned int *)hWnd + 1));
          DifficultyString = GameClass::GetDifficultyString(SelectedDefault);
          WideString::Assign_Alt(v139, DifficultyString);
          return 1;
        }
        if ( CountryCombo::IDToIndex(DlgCtrlID) == -1 )
        {
          if ( StartCombo::IDToIndex(DlgCtrlID) != -1 )
          {
            SelectedRaw = GetComboBoxSelectedRaw(hDlg, (int)DlgCtrlID, *((unsigned int *)hWnd + 1));
            ColorTooltip = (wchar_t *)GameSetup::GetColorTooltip(SelectedRaw);
            WideString::Assign_Alt(v139, ColorTooltip);
            return 1;
          }
        }
        else
        {
          Selected = (void *)GetComboBoxSelected(hDlg, (int)DlgCtrlID, *((unsigned int *)hWnd + 1));
          if ( Selected != (void *)-1 )
          {
            Name = SideClass::GetName(Selected);
            WideString::Assign_Alt(v139, Name);
            return 1;
          }
        }
        return 1;
      }
      if ( Dialog::MapPlayerIDToIndex(DlgCtrlID) == -1 )
      {
        if ( DlgCtrlID == (void *)1876 )
        {
          v153 = 0;
        }
        else if ( DlgCtrlID == (void *)1877 )
        {
          v153 = 1;
        }
        else if ( DlgCtrlID == (void *)1878 )
        {
          v153 = 2;
        }
        else if ( DlgCtrlID == (void *)1879 )
        {
          v153 = 3;
        }
        else if ( DlgCtrlID == (void *)1880 )
        {
          v153 = 4;
        }
        else if ( DlgCtrlID == (void *)1881 )
        {
          v153 = 5;
        }
        else if ( DlgCtrlID == (void *)1882 )
        {
          v153 = 6;
        }
        else
        {
          if ( DlgCtrlID != (void *)1883 )
            return 1;
          v153 = 7;
        }
        unknown_libname_74(&v164);
        v154 = PlayerSlot::IndexToDlgID((void *)v153);
        if ( v154 != -1 )
        {
          v155 = (wchar_t *)GetComboBoxSelectedDefault(hDlg, v154, -1);
          v156 = v155;
          if ( v155 )
          {
            if ( IsKnownPointer(v155) )
            {
              v157 = (wchar_t *)WOLobby::FormatLatencyText(v156);
              WideString::Assign_Alt((void **)&v164, v157);
              WideString::Reassign_Alt(v139, (const wchar_t **)&v164);
            }
          }
        }
        v152 = (void **)&v164;
        goto LABEL_384;
      }
      v147 = (wchar_t *)GetComboBoxSelectedDefault(hDlg, (int)DlgCtrlID, -1);
      if ( v147 )
      {
        GetSkirmishMenuOwnerName((wchar_t **)&v162, hDlg, *(HWND *)hWnd);
        v160 = GetStringCSF(MEMORY[0x8338D4], 0, g_Str_File_wonline_cpp, 15979);
        v148 = WideString::GetOrEmpty((wchar_t **)&v162);
        if ( !wcscmp(v148, v160)
          || (v161 = GetStringCSF(MEMORY[0x833768], 0, g_Str_File_wonline_cpp, 15979),
              v149 = WideString::GetOrEmpty((wchar_t **)&v162),
              !wcscmp(v149, v161)) )
        {
          if ( IsKnownPointer(v147) )
          {
            v150 = (wchar_t *)BuildWOLPlayerTooltip(v147);
            WideString::Assign_Alt((void **)&v162, v150);
          }
        }
        v151 = WideString::GetOrEmpty((wchar_t **)&v162);
        WideString::Assign_Alt(v139, v151);
        v152 = (void **)&v162;
LABEL_384:
        DeleteAndZero::Alt(v152);
      }
    }
    return 1;
  }
  if ( a2 != 273 )
  {
    switch ( a2 )
    {
      case 2u:
        v25 = MEMORY[0xAC1154];
        if ( MEMORY[0xAC1154] )
        {
          ComPtr::Dtor(MEMORY[0xAC1154]);
          __3_YAXPAX_Z(v25);
          MEMORY[0xAC1154] = 0;
        }
        if ( !LoadScreen::IsActive(MEMORY[0xAC4F58]) )
          return 0;
        VtableStub::643E70(MEMORY[0xAC4F58]);
        result = 0;
        break;
      case 3u:
      case 0x18u:
        return 0;
      case 0xFu:
        Dialog::DrawBackground(hDlg);
        Dialog::StopBink(hDlg);
        v26 = MEMORY[0xAC1154];
        if ( MEMORY[0xAC1154] || MEMORY[0xA8B254] == -1 && (v26 = g_Map_TiberiumConfig) != 0 )
          Skirmish::RenderPreview(v26, hDlg);
        if ( LoadScreen::IsActive(MEMORY[0xAC4F58]) )
          LoadScreen::Render((int)MEMORY[0xAC4F58], a2, (int)hDlg, NAN);
        ValidateRect(hDlg, 0);
        result = 0;
        break;
      case 0x14u:
        return 1;
      case 0x2Bu:
        Dialog::Resize((char *)hWnd);
        result = 1;
        break;
      case 0x84u:
        v16 = GetDlgItem(hDlg, 1685);
        if ( !v16 )
          return 0;
        GetWindowRect(hDlg, &Rect);
        v17 = (unsigned __int16)hWnd - Rect.left;
        v18 = ((unsigned int)hWnd >> 16) - Rect.top;
        unknown_libname_74(&v162);
        v19 = ChildWindowFromPointEx(hDlg, (POINT)__PAIR64__(v18, v17), 1u);
        v20 = v19;
        if ( v19 )
        {
          v21 = (const wchar_t **)WOLobby_Setup(&v171, hDlg, v19);
          WideString::Reassign_Alt((void **)&v162, v21);
          DeleteAndZero::Alt(&v171);
          v22 = WideString::GetOrEmpty((wchar_t **)&v162);
          if ( !wcscmp(v22, &MEMORY[0x887734]) )
          {
            OwnerName = GetSkirmishMenuOwnerName((wchar_t **)&v170, hDlg, v20);
            WideString::Reassign_Alt((void **)&v162, (const wchar_t **)OwnerName);
            DeleteAndZero::Alt(&v170);
          }
        }
        v24 = WideString::GetOrEmpty_Alt((wchar_t **)&v162);
        SendMessageA(v16, 0x4B2u, 0, (LPARAM)v24);
        DeleteAndZero::Alt((void **)&v162);
        result = 0;
        break;
      default:
        return 0;
    }
    return result;
  }
LABEL_57:
  if ( (unsigned __int16)nIDDlgItem > 0x588u )
  {
    if ( (unsigned __int16)nIDDlgItem > 0x6A2u )
    {
      switch ( (__int16)nIDDlgItem )
      {
        case 1699:
        case 1700:
        case 1701:
        case 1702:
        case 1703:
        case 1704:
        case 1706:
        case 1707:
          if ( HIWORD(nIDDlgItem) != 1 || v5 )
            return 0;
          AssignPlayerSide(hDlg, (unsigned __int16)nIDDlgItem);
          break;
        case 1901:
        case 1902:
        case 1903:
        case 1904:
        case 1905:
        case 1906:
        case 1907:
        case 1908:
          if ( HIWORD(nIDDlgItem) != 1 || v5 )
            return 0;
          ProcessNetworkLobbyOption(hDlg, (void *)(unsigned __int16)nIDDlgItem);
          break;
        default:
          return 0;
      }
      goto LABEL_250;
    }
    if ( (unsigned __int16)nIDDlgItem == 1698 )
    {
LABEL_293:
      if ( HIWORD(nIDDlgItem) != 1 || v5 )
        return 0;
      AssignPlayerColor(hDlg, (void *)(unsigned __int16)nIDDlgItem);
      goto LABEL_250;
    }
    if ( (unsigned __int16)nIDDlgItem != 1450 )
    {
      if ( (unsigned __int16)nIDDlgItem == 1474 )
      {
        v100 = (HWND)CreateDialog(0xCFu, (INT_PTR (*)(HWND, UINT, WPARAM, LPARAM))OnlineLobbyDlgProcWOL, 0);
        MEMORY[0xA8ED9C] = 1;
        Timer::PumpMessages((HWND *)MEMORY[0x87F770]);
        ShowWindow(v100, 1);
        GameUI = Dialog::FindGameUI();
        v102 = Dialog::UpdateGameUI;
        if ( !GameUI )
          v102 = Dialog::PumpMessages;
        MessageDialogLoopAlt(v100, (unsigned __int8 (*)(void))v102, 0, 1, 1);
        Timer::PumpMessages((HWND *)MEMORY[0x87F770]);
        MEMORY[0xA8ED9C] = *((unsigned char *)MEMORY[0xA8B230] + 13730);
        MapClass::MarkForRedraw(&MEMORY[0x87F7E8], 2);
        return 0;
      }
      if ( (unsigned __int16)nIDDlgItem != 1697 )
        return 0;
      goto LABEL_247;
    }
    if ( v5 )
      return 0;
    v103 = MEMORY[0xA8B23C];
    v164 = (void (**)(LPVOID, char *, int, char **))MEMORY[0xA8B254];
    if ( MEMORY[0xA8B23C] )
    {
      if ( !(*(unsigned __int8 (**)(int))(*(unsigned int *)MEMORY[0xA8B23C] + 64))(MEMORY[0xA8B23C]) )
      {
        v103 = MEMORY[0xA8B23C];
        v163 = 0;
LABEL_260:
        if ( !v103 || (v104 = (*(int (**)(int))(*(unsigned int *)v103 + 188))(v103), HIBYTE(v165) = 0, v104) )
          HIBYTE(v165) = 1;
        strcpy((char *)Destination, &MEMORY[0xA8B8E0]);
        wcscpy(String1, (const wchar_t *)&MEMORY[0xA8B320] + 1);
        MEMORY[0x8316D4] = 0;
        RenderGadgetClassAnimation(hDlg, 0);
        Screen::Capture(1, 0, a2, (int)hDlg);
        v105 = SkirmishDialog::Show(g_hWnd, a2, (int)hDlg) == 2;
        ShowWindow(hDlg, 5);
        Dialog::InitWindow(hDlg, 0);
        v106 = GetDlgItem(hDlg, 1344);
        SetFocus(v106);
        if ( v105 )
        {
          MEMORY[0xA8B254] = (int)v164;
          LoadScenarioClassByIndex((int)v164);
          Session::PrepareGame(hDlg);
          MEMORY[0x8316D4] = 1;
          ShowWindow(hDlg, 5);
          Dialog::InitWindow(hDlg, 0);
          Session::StartGame(hDlg);
          CheckGameSettingsChanged(1, 0);
          InvalidateRect(hDlg, 0, 0);
          return 0;
        }
        if ( !LoadScenarioClassByIndex(MEMORY[0xA8B254]) )
        {
          MEMORY[0xA8B254] = (int)v164;
LABEL_284:
          SessionClass::BuildLaunchString();
          MEMORY[0x8316D4] = 1;
          ShowWindow(hDlg, 5);
          Dialog::InitWindow(hDlg, 0);
          Dialog::ShowPlayerName(hDlg);
          if ( strcmp((const char *)Destination, &MEMORY[0xA8B8E0])
            || wcscmp(String1, (const wchar_t *)&MEMORY[0xA8B320] + 1) )
          {
            v110 = &unk_B76EF4;
            do
            {
              *v110 = 0;
              v110 += 37;
            }
            while ( (int)v110 < (int)dword_B77300 );
          }
          Game::ResetReadyStates();
          Session::StartGame(hDlg);
          v111 = ReadPlayerCountMap(MEMORY[0xA8B254]);
          if ( !MEMORY[0xA8B23C]
            || !(*(unsigned __int8 (**)(int))(*(unsigned int *)MEMORY[0xA8B23C] + 4))(MEMORY[0xA8B23C])
            || (v112 = *((unsigned int *)MEMORY[0xA8B230] + 1145), v112 > v111) )
          {
            v112 = v111;
          }
          ResetLobbyFactionTable(v112);
          Lobby::InvalidateFactionCombos(hDlg);
          NetworkLobby::UpdateLabels(hDlg);
          Lobby::InvalidatePlayerSlots(hDlg);
          RefreshLobbyPlayerSlots(0xFFFFFFFF);
          RefreshLobbyAll(hDlg, 1);
          CheckGameSettingsChanged(1, 0);
          InvalidateRect(hDlg, 0, 0);
          return 0;
        }
        v107 = MEMORY[0xA8B23C];
        if ( MEMORY[0xA8B23C] )
        {
          if ( !(*(unsigned __int8 (**)(int))(*(unsigned int *)MEMORY[0xA8B23C] + 64))(MEMORY[0xA8B23C]) )
          {
            v107 = MEMORY[0xA8B23C];
            v108 = 0;
            goto LABEL_272;
          }
          v107 = MEMORY[0xA8B23C];
        }
        v108 = 1;
LABEL_272:
        if ( !v107 || (v109 = (*(int (**)(int))(*(unsigned int *)v107 + 188))(v107)) != 0 )
          v109 = 1;
        if ( HIBYTE(v165) && !v109 )
          MultiplayerLobby::FillSlots(hDlg);
        if ( v163 && !v108 )
        {
          if ( (unsigned __int8)NetworkLobby::SetupPlayerSlotControls(hDlg) )
          {
            MEMORY[0xA8B274] = 0;
            Lobby::BuildPlayerList();
            DisplayRankingsWOL(0);
            CheckGameSettingsChanged(1, 0);
          }
          else
          {
            DisplayRankingsWOL(0);
          }
        }
        NetworkLobby::FillOptionCombo();
        SetupMultiplayerLobbyScreen(hDlg, v164, MEMORY[0xA8B254]);
        goto LABEL_284;
      }
      v103 = MEMORY[0xA8B23C];
    }
    v163 = 1;
    goto LABEL_260;
  }
  if ( (unsigned __int16)nIDDlgItem == 1416 )
  {
    v57 = GetDlgItem(hDlg, 1344);
    SetFocus(v57);
    if ( byte_B77DEC == 1 )
      return 0;
    SaveMultiplayerLobbySettings(hDlg, (int)&MEMORY[0xA8B4BC]);
    SaveConfigWOL((int)MEMORY[0xA8B238]);
    RefreshLobbyAll(hDlg, 1);
    v58 = MEMORY[0xA8DA84];
    v59 = 0;
    v164 = 0;
    if ( MEMORY[0xA8DA84] > 0 )
    {
      v60 = MEMORY[0xA8DA78];
      v61 = MEMORY[0xA8DA84];
      do
      {
        if ( *(unsigned int *)(*(unsigned int *)v60 + 107) == -1 )
          v59 = (void (**)(LPVOID, char *, int, char **))((char *)v59 + 1);
        v60 += 4;
        --v61;
      }
      while ( v61 );
      v164 = v59;
    }
    if ( (int)(g_WOL_State - (unsigned int)v59) < 2 )
    {
      v62 = GetStringCSF(MEMORY[0x831470], 0, g_Str_File_wonline_cpp, 16492);
      Dialog::ShowMessage(-1, (size_t)v62);
      return 0;
    }
    if ( v59 && MEMORY[0xA8B274] )
    {
      v63 = GetStringCSF(aTxtNoAiObserva, 0, g_Str_File_wonline_cpp, 16504);
      Dialog::ShowMessage(-1, (size_t)v63);
      return 0;
    }
    v64 = 1;
    v65 = 0;
    if ( MEMORY[0xA8DA84] > 1 )
    {
      do
      {
        if ( !*(unsigned int *)(*(unsigned int *)(MEMORY[0xA8DA78] + 4 * v64) + 127) )
        {
          v158 = *(unsigned int *)(MEMORY[0xA8DA78] + 4 * v64);
          v66 = GetStringCSF(MEMORY[0x831460], 0, g_Str_File_wonline_cpp, 16516);
          Dialog::ShowMessage(-1, (size_t)v66, v158, 11055906);
          v58 = MEMORY[0xA8DA84];
          v65 = 1;
        }
        ++v64;
      }
      while ( v64 < v58 );
      if ( v65 )
        return 0;
    }
    NetworkLobby::InitLobbyDropdowns(hDlg);
    v67 = -1;
    for ( i = 0; i < 8; ++i )
    {
      v69 = *(&MEMORY[0xA8DA90] + i);
      if ( (unsigned __int8)NetworkLobby::IsValidPlayerName(v69) )
      {
        if ( !IsKnownPointer((wchar_t *)v69) || *(unsigned int *)(v69 + 107) == -1 )
        {
          if ( Player::IsObserver((void *)v69) && *(unsigned int *)(v69 + 107) != -1 && v67 != MEMORY[0xA8B2FC][i] )
            goto LABEL_184;
        }
        else if ( i )
        {
          if ( v67 != *(unsigned int *)(v69 + 99) )
            goto LABEL_184;
        }
        else
        {
          v67 = *(unsigned int *)(v69 + 99);
        }
      }
    }
    if ( v67 < 0 || (*(unsigned __int8 (**)(int))(*(unsigned int *)MEMORY[0xA8B23C] + 4))(MEMORY[0xA8B23C]) )
    {
LABEL_184:
      v71 = g_WOL_State;
      v72 = 0;
      if ( (int)g_WOL_State <= 0 )
      {
LABEL_188:
        if ( MEMORY[0xA8B238][0] != 4 || MEMORY[0xA8B244] != 3 )
          goto LABEL_201;
        if ( (int)g_WOL_State < dword_B76B18 )
        {
          v159 = dword_B76B18;
          v74 = GetStringCSF(aTxtNeedMorePla, 0, g_Str_File_wonline_cpp, 16585);
          Dialog::ShowMessage(-1, (size_t)v74, v159);
          return 0;
        }
        v75 = 0;
        v76 = 0;
        if ( (int)g_WOL_State <= 0 )
          goto LABEL_201;
        v77 = MEMORY[0xB76E58];
        do
        {
          if ( *v77 )
            ++v75;
          else
            ++v76;
          v77 += 37;
          --v71;
        }
        while ( v71 );
        if ( v75 != v76 )
        {
          v70 = GetStringCSF((wchar_t *)aTxtNeedEqualTe, 0, g_Str_File_wonline_cpp, 16600);
        }
        else
        {
LABEL_201:
          v78 = 0;
          v79 = SessionClass::initPlayers(MEMORY[0xA8B254]);
          if ( v79 < (int)(SendDlgItemMessageA(hDlg, 1362, 0x400u, 0, 0) + g_WOL_State - (unsigned int)v164) )
          {
            v80 = GetStringCSF(g_Str_TXT_SCENARIO_TOO_SMALL, 0, g_Str_File_wonline_cpp, 16611);
            Dialog::ShowMessage(-1, (size_t)v80, v79);
            return 0;
          }
          if ( (int)g_WOL_State <= 6 )
          {
            v81 = MEMORY[0xA8B23C];
            unknown_libname_74(&v162);
            if ( (*(unsigned __int8 (**)(int, const wchar_t **))(*(unsigned int *)v81 + 20))(v81, &v162) )
            {
              if ( MEMORY[0xA8B238][0] != 4 )
                goto LABEL_233;
              v163 = BYTE1(dword_B76B30) & 1;
              if ( (dword_B76B30 & 0x100) == 0 )
                goto LABEL_233;
              LOBYTE(Rect.left) = MEMORY[0x889F64];
              memset((char *)&Rect.left + 1, 0, 9);
              v85 = 0;
              v166 = 0;
              v168 = 0;
              v164 = 0;
              v167 = 0;
              if ( MEMORY[0x8316A4] >= 0 )
              {
                v86 = *(&MEMORY[0xA8DA90] + MEMORY[0x8316A4]);
                if ( (unsigned __int8)NetworkLobby::IsValidPlayerName(v86) )
                {
                  if ( *(unsigned int *)(v86 + 107) == -1 )
                  {
                    v87 = ToWideStringChar((char *)v86);
                    strncpy((char *)&Rect, v87, 0xAu);
                    BYTE1(Rect.right) = 0;
                  }
                }
              }
              v88 = g_WOL_State;
              if ( (int)g_WOL_State > 0 )
              {
                v89 = 0;
                do
                {
                  if ( v89 >= 0 && v78 < v88 )
                    v166 = (char *)g_WOL_ConnectionFlags + v89;
                  if ( _strcmpi(&Rect, v166 + 36) )
                  {
                    v90 = *((unsigned int *)v166 + 5);
                    if ( !v90 )
                    {
                      v92 = GetStringCSF(g_Str_TXT_CLAN_NOSTART, 0, g_Str_File_wonline_cpp, 16661);
                      Dialog::ShowMessage(-1, (size_t)v92);
                      DeleteAndZero::Alt((void **)&v162);
                      return 0;
                    }
                    if ( !v85 || v85 == v90 )
                    {
                      v85 = *((unsigned int *)v166 + 5);
                      v164 = (void (**)(LPVOID, char *, int, char **))((char *)v164 + 1);
                    }
                    else
                    {
                      if ( v168 && v168 != v90 )
                      {
                        v93 = GetStringCSF(g_Str_TXT_CLAN_NOSTART, 0, g_Str_File_wonline_cpp, 16676);
                        Dialog::ShowMessage(-1, (size_t)v93);
                        DeleteAndZero::Alt((void **)&v162);
                        return 0;
                      }
                      v168 = *((unsigned int *)v166 + 5);
                      v167 = (void (**)(LPVOID, char *, int, char **))((char *)v167 + 1);
                    }
                  }
                  v88 = g_WOL_State;
                  ++v78;
                  v89 += 108;
                }
                while ( v78 < (int)g_WOL_State );
                if ( v164 == v167 )
                  goto LABEL_233;
                v91 = GetStringCSF(g_Str_TXT_CLAN_NOSTART, 0, g_Str_File_wonline_cpp, 16682);
                Dialog::ShowMessage(-1, (size_t)v91);
                DeleteAndZero::Alt((void **)&v162);
                return 0;
              }
              else
              {
LABEL_233:
                (*(void (**)(int))(*(unsigned int *)v81 + 104))(v81);
                Player::RandomAssign(MEMORY[0xA8B238]);
                Lobby::BuildPlayerList();
                CheckGameSettingsChanged(1, 1);
                (*(void (**)(int))(*(unsigned int *)v81 + 100))(v81);
                (*(void (**)(int))(*(unsigned int *)v81 + 36))(v81);
                v94 = 0;
                memset(String, 0, 0x6Cu);
                v95 = g_WOL_State;
                v96 = 0;
                if ( (int)g_WOL_State > 0 )
                {
                  v166 = 0;
                  do
                  {
                    if ( (int)v166 >= 0 && v94 < v95 )
                      qmemcpy(String, &v166[(unsigned int)g_WOL_ConnectionFlags], 0x6Cu);
                    v97 = (struct in_addr *)__2_YAPAXI_Z(0x6Cu);
                    v98 = v166;
                    qmemcpy(v97, String, 0x6Cu);
                    v97[8].S_un.S_addr = (ULONG)v96;
                    v96 = v97;
                    v95 = g_WOL_State;
                    ++v94;
                    v166 = v98 + 108;
                  }
                  while ( v94 < (int)g_WOL_State );
                }
                (*(void (**)(LPVOID, struct in_addr *))(*(unsigned int *)MEMORY[0xAC116C] + 72))(
                  MEMORY[0xAC116C],
                  v96);
                g_NetworkLobbyState = 1;
                byte_B77DEC = 1;
                for ( j = v96; v96; j = v96 )
                {
                  v96 = (struct in_addr *)v96[8].S_un.S_addr;
                  __3_YAXPAX_Z(j);
                }
LABEL_134:
                DeleteAndZero::Alt((void **)&v162);
                return 0;
              }
            }
            else
            {
              v82 = WideString::GetOrEmpty((wchar_t **)&v162);
              Dialog::ShowMessage(-1, (size_t)v82);
              Current = Dialog::GetCurrent();
              v84 = GetDlgItem(Current, 1416);
              EnableWindow(v84, 1);
              DeleteAndZero::Alt((void **)&v162);
              return 0;
            }
          }
          v70 = GetStringCSF(aTxtTooManyPlay, 0, g_Str_File_wonline_cpp, 16619);
        }
      }
      else
      {
        v73 = MEMORY[0xB76E60];
        while ( *v73 )
        {
          ++v72;
          v73 += 37;
          if ( v72 >= (int)g_WOL_State )
            goto LABEL_188;
        }
        Network_Create();
        v70 = GetStringCSF(MEMORY[0x831438], 0, g_Str_File_wonline_cpp, 16575);
      }
    }
    else
    {
      v70 = GetStringCSF(MEMORY[0x831450], 0, g_Str_File_wonline_cpp, 16559);
    }
    Dialog::ShowMessage(-1, (size_t)v70);
    return 0;
  }
  if ( (unsigned __int16)nIDDlgItem > 0x514u )
  {
    switch ( (__int16)nIDDlgItem )
    {
      case 1310:
      case 1311:
      case 1312:
      case 1313:
        goto LABEL_247;
      case 1314:
      case 1315:
      case 1316:
      case 1317:
      case 1318:
      case 1319:
      case 1320:
        goto LABEL_293;
      case 1344:
        ReadChatMessage((wchar_t **)&v162, hWnd);
        if ( HIWORD(nIDDlgItem) != 1281 )
          goto LABEL_134;
        SendMessageA(hWnd, 0x4B2u, 0, (LPARAM)&MEMORY[0x887734]);
        if ( !WideString::Length(&v162) )
          goto LABEL_134;
        v30 = WideString::GetOrEmpty((wchar_t **)&v162);
        v31 = HandlePageWOL(v30);
        if ( v31 )
        {
          if ( v31 != (wchar_t *)1 )
            goto LABEL_134;
          v32 = 0;
          v33 = (size_t)WideString::Length(&v162) + 1;
          v34 = (wchar_t *)__2_YAPAXI_Z(2 * v33);
          v35 = GetStringCSF(g_Str_TXT_PAGE_COMMAND, 0, g_Str_File_wonline_cpp, 16778);
          wcscpy((wchar_t *)String, v35);
          if ( !v34 )
            goto LABEL_134;
          v36 = WideString::GetOrEmpty((wchar_t **)&v162);
          v37 = wcsncpy(v34, v36, v33);
          if ( !v37 )
            goto LABEL_134;
          v38 = &v37[wcslen((const wchar_t *)String)];
          if ( *v38 )
          {
            do
            {
              if ( wcsncmp(v38, stru_82083C, 1u) )
                break;
              ++v38;
            }
            while ( *v38 );
            if ( *v38 )
            {
              p_Rect = &Rect;
              do
              {
                if ( !wcsncmp(v38, stru_82083C, 1u) )
                  break;
                if ( v32 > 10 )
                  break;
                v40 = *v38++;
                LOWORD(p_Rect->left) = v40;
                ++v32;
                p_Rect = (struct tagRECT *)((char *)p_Rect + 2);
              }
              while ( *v38 );
            }
          }
          for ( *((unsigned short *)&Rect.left + v32) = 0; *v38; ++v38 )
          {
            if ( wcsncmp(v38, stru_82083C, 1u) )
              break;
          }
          if ( v32 <= 10 )
          {
            if ( v32 )
            {
              if ( wcslen(v38) )
              {
                Dialog::ShowMessage(16744576, (size_t)g_Str_Trace___hs____s_, g_WebBrowser, &Rect, v38);
                __3_YAXPAX_Z(v37);
                DeleteAndZero::Alt((void **)&v162);
                return 0;
              }
              v41 = GetStringCSF(g_Str_TXT_CANT_SEND_BLANK_PAGE, 0, g_Str_File_wonline_cpp, 16816);
            }
            else
            {
              v41 = GetStringCSF(g_Str_TXT_NO_NAME_SPECIFIED, 0, g_Str_File_wonline_cpp, 16810);
            }
          }
          else
          {
            v41 = GetStringCSF((wchar_t *)g_Str_TXT_NAME_TOO_LONG, 0, g_Str_File_wonline_cpp, 16808);
          }
          Dialog::ShowMessage(-1, (size_t)v41);
          __3_YAXPAX_Z(v37);
          DeleteAndZero::Alt((void **)&v162);
          result = 0;
        }
        else
        {
          v42 = WideString::GetOrEmpty((wchar_t **)&v162);
          if ( !HandleReplyWOL(v42) )
          {
            v54 = WideString::GetOrEmpty((wchar_t **)&v162);
            if ( !HandleOnlineWOL(v54) )
            {
              v55 = (int)Math::InitDegToRad;
              if ( FillPlayerListWOL(&v162) == 1 )
                v55 = 16744576;
              v56 = WideString::GetOrEmpty((wchar_t **)&v162);
              Dialog::ShowMessage(v55, (size_t)MEMORY[0x84B94C], g_WebBrowser, v56);
            }
            goto LABEL_134;
          }
          v43 = (size_t)WideString::Length(&v162) + 1;
          v44 = (wchar_t *)__2_YAPAXI_Z(2 * v43);
          v45 = GetStringCSF(MEMORY[0x82A0D4], 0, g_Str_File_wonline_cpp, 16834);
          wcscpy((wchar_t *)String, v45);
          v46 = GetStringCSF(MEMORY[0x82A0BC], 0, g_Str_File_wonline_cpp, 16835);
          wcscpy(Destination, v46);
          if ( !v44 )
            goto LABEL_134;
          v47 = WideString::GetOrEmpty((wchar_t **)&v162);
          v48 = wcsncpy(v44, v47, v43);
          if ( !v48 )
            goto LABEL_134;
          v49 = wcslen((const wchar_t *)String);
          if ( !wcsncmp(v48, (const wchar_t *)String, v49) )
            v50 = wcslen((const wchar_t *)String);
          else
            v50 = wcslen(Destination);
          for ( k = &v48[v50]; *k; ++k )
          {
            if ( wcsncmp(k, stru_82083C, 1u) )
              break;
          }
          v52 = CharToWideString(byte_B77E30);
          wcscpy((wchar_t *)&Rect, (const wchar_t *)v52);
          if ( wcslen(k) && wcslen((const wchar_t *)&Rect) )
          {
            Dialog::ShowMessage(16744576, (size_t)g_Str_Trace___hs____s_, g_WebBrowser, &Rect, k);
            __3_YAXPAX_Z(v48);
            DeleteAndZero::Alt((void **)&v162);
            result = 0;
          }
          else
          {
            if ( wcslen((const wchar_t *)&Rect) )
            {
              v53 = GetStringCSF(g_Str_TXT_CANT_SEND_BLANK_PAGE, 0, g_Str_File_wonline_cpp, 16864);
              Dialog::ShowMessage(-1, (size_t)v53);
            }
            __3_YAXPAX_Z(v48);
            DeleteAndZero::Alt((void **)&v162);
            result = 0;
          }
        }
        break;
      default:
        return 0;
    }
    return result;
  }
  if ( (unsigned __int16)nIDDlgItem >= 0x513u )
    goto LABEL_247;
  if ( (unsigned __int16)nIDDlgItem > 0x418u )
  {
    if ( (unsigned __int16)nIDDlgItem != 1296 )
      return 0;
LABEL_247:
    if ( HIWORD(nIDDlgItem) != 1 || v5 )
      return 0;
    SelectLobbyCountry(hDlg, (void *)(unsigned __int16)nIDDlgItem);
LABEL_250:
    CheckGameSettingsChanged(1, 0);
    RefreshLobbyAll(hDlg, 1);
    return 0;
  }
  if ( (unsigned __int16)nIDDlgItem >= 0x411u )
  {
    if ( HIWORD(nIDDlgItem) == 1 && !v5 && Settings::CheckString() )
    {
      v29 = GetComboBoxSelectedDefault(hDlg, (unsigned __int16)nIDDlgItem, -1);
      PlayerSkirmishSlotHandler(hDlg, (unsigned __int16)nIDDlgItem, v29, 2);
      return 0;
    }
    return 0;
  }
  if ( (unsigned __int16)nIDDlgItem == 2 )
  {
    if ( v5 )
      return 0;
    SaveMultiplayerLobbySettings(hDlg, (int)&MEMORY[0xA8B4BC]);
    SaveConfigWOL((int)MEMORY[0xA8B238]);
    v28 = MEMORY[0xAC1154];
    if ( MEMORY[0xAC1154] )
    {
      ComPtr::Dtor(MEMORY[0xAC1154]);
      __3_YAXPAX_Z(v28);
      MEMORY[0xAC1154] = 0;
    }
    CloseDialog(hDlg, 2);
    CleanupFileTree();
    ShowWindow(hDlg, 0);
    Dialog::InitWindow(hDlg, 1);
    (*(void (**)(LPVOID))(*(unsigned int *)MEMORY[0xAC116C] + 36))(MEMORY[0xAC116C]);
    g_WOL_ChannelLeaveState = 1;
    return 0;
  }
  else
  {
    if ( (unsigned __int16)nIDDlgItem != 1005 )
      return 0;
    v13 = GetDlgItem(hDlg, 1344);
    ReadChatMessage((wchar_t **)&v162, v13);
    SendMessageA(v13, 0x4B2u, 0, (LPARAM)&MEMORY[0x887734]);
    SetFocus(v13);
    InvalidateRect(v13, 0, 0);
    v14 = 3166463;
    if ( !strlen(g_WOL_IdleFlag) )
    {
      v15 = GetStringCSF(g_Str_TXT_NOT_IN_CHAN, 0, g_Str_File_wonline_cpp, 16894);
LABEL_93:
      Dialog::ShowMessage(-1, (size_t)v15);
      DeleteAndZero::Alt((void **)&v162);
      return 0;
    }
    if ( !WideString::Length(&v162) )
    {
      v15 = GetStringCSF(g_Str_TXT_ENTER_MESSAGE, 0, g_Str_File_wonline_cpp, 16901);
      goto LABEL_93;
    }
    if ( FillBuddyListExWOL(&v162) )
      v14 = 16711935;
    v27 = WideString::GetOrEmpty((wchar_t **)&v162);
    Dialog::ShowMessage(v14, (size_t)g_Str_Trace__hs, g_WebBrowser, v27);
    DeleteAndZero::Alt((void **)&v162);
    return 0;
  }

}

// 0x791B10
int WOLobby::ChatDlgProc(HWND hDlg, UINT a2, WPARAM a3, HWND hWnd)
{

  int result; // eax
  HWND v5; // ebx
  int v6; // ebp
  unsigned int v7; // edi
  HWND v8; // eax
  HWND v9; // edi
  wchar_t **v10; // eax
  CampaignScore *v11; // eax
  wchar_t **SkirmishMenuOwnerName; // eax
  CampaignScore *v13; // eax
  ObjectClass *v14; // esi
  HWND v15; // esi
  int v16; // esi
  wchar_t *v17; // eax
  CampaignScore *v19; // eax
  wchar_t *eax40; // eax
  int v20; // ebx
  DropListClass *v21; // esi
  AbstractClass *v23; // edi
  wchar_t *StringCSF; // eax
  CampaignScore *v25; // eax
  wchar_t *ebp44; // ebp
  const wchar_t *v26; // esi
  wchar_t *v27; // edi
  wchar_t v28; // ax
  wchar_t *v29; // eax
  CampaignScore *v31; // eax
  DropListClass *esi66; // esi
  wchar_t *v32; // edi
  wchar_t *v33; // eax
  wchar_t *v34; // eax
  CampaignScore *v36; // eax
  wchar_t *edi67; // edi
  size_t v37; // eax
  size_t v38; // eax
  const wchar_t *i; // esi
  char *v40; // eax
  wchar_t *v41; // eax
  CampaignScore *v43; // eax
  int esi82; // esi
  SkirmishDialog *v46; // esi
  int GameUI; // eax
  char (*edx90)(); // edx
  HWND v47; // edi
  HWND v48; // eax
  void *v49; // edi
  int v50; // ebx
  int v51; // eax
  void *ResourceID2CSF; // ebp
  void *ResourceIDCSF; // ebx
  void *ResourceID4CSF; // eax
  INIClass *v57; // edi
  INIClass *v56; // eax
  void **ebx114; // ebx
  void *DlgCtrlID; // ebp
  void *ComboBoxSelectedRaw; // eax
  wchar_t *ColorTooltip; // eax
  void *ComboBoxSelected; // eax
  wchar_t *Name; // eax
  void *ComboBoxSelectedDefault; // eax
  wchar_t *DifficultyString; // eax
  SessionClass *v70; // ebx
  CampaignScore *v71; // eax
  CampaignScore *v72; // eax
  wchar_t *v68; // eax
  CampaignScore *v74; // eax
  int edi132; // edi
  int eax147; // eax
  SessionClass *eax148; // eax
  SessionClass *v78; // esi
  wchar_t *eax150; // eax
  HWND DlgItem; // eax
  LPARAM v76; // eax
  LPARAM v77; // eax
  unsigned int *First; // edi
  int v79; // edi
  int v80; // ebx
  int PlayerCountMap; // ecx
  unsigned char v82[184]; // [esp-Ch] [ebp-170h] BYREF
  wchar_t String[64]; // [esp+E4h] [ebp-80h] BYREF

  result = BaseDialogProc((SkirmishDialog *)hDlg, a2, a3, (unsigned int)hWnd);
  if ( result )
    return result;
  if ( a2 > 0x111 )
  {
    if ( a2 == 1175 )
    {
      DlgItem = GetDlgItem(hDlg, 1344);
      SetFocus(DlgItem);
      v76 = HashTable::Find(&g_MatrixTransformState + 5774, &stru_830620.__pad_579C[912], 0);
      SendDlgItemMessageA(hDlg, 1005, 0x49Cu, 0, v76);
      v77 = HashTable::Find(&g_MatrixTransformState + 5774, &stru_830620.__pad_579C[924], 0);
      SendDlgItemMessageA(hDlg, 1005, 0x4AAu, 0, v77);
      First = (unsigned int *)MultiplayerGameMode::GetFirst();
      *(unsigned int *)&HouseClass_Player.__pad_5568[8092] = First[10];
      SetDialogPlayerName(hDlg, (int)First);
      v79 = (*(int (**)(unsigned int *))(*First + 68))(First);
      *(unsigned int *)&HouseClass_Player.__pad_5568[8096] = v79;
      LoadScenarioClassByIndex(v79);
      SkirmishDialog::FillComboBoxes((SkirmishDialog *)hDlg);
      InitGameDropdownColors();
      Lobby::FillPlayerFactions(hDlg);
      _cfltcvt_init();
      GDlg::LoadLetterStrings();
      Lobby::InvalidatePlayerSlots(hDlg);
      RefreshLobbyPlayerSlots(0xFFFFFFFF);
      LoadScenarioClassByIndex(-1);
      *((unsigned char *)&g_MatrixTransformState + 9138) = 0;
      *(unsigned int *)&HouseClass_Player.__pad_5568[10328] = 8;
      Dialog::ShowPlayerName(hDlg);
      Session::PrepareGame(hDlg);
      if ( *(unsigned int *)&HouseClass_Player.__pad_5568[8072]
        && (*(unsigned __int8 (**)(unsigned int))(**(unsigned int **)&HouseClass_Player.__pad_5568[8072] + 4))(*(unsigned int *)&HouseClass_Player.__pad_5568[8072])
        && (v80 = *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[8060] + 4580), v80 <= ReadPlayerCountMap(v79)) )
      {
        PlayerCountMap = v80;
      }
      else
      {
        PlayerCountMap = ReadPlayerCountMap(v79);
      }
      ResetLobbyFactionTable(PlayerCountMap);
      Lobby::InvalidateFactionCombos(hDlg);
      Lobby::InvalidatePlayerSlots(hDlg);
      RefreshLobbyPlayerSlots(0xFFFFFFFF);
      InitSkirmishDialogControls(hDlg, 1);
      DisplayRankingsWOL(0, 0);
      return 0;
    }
    if ( a2 != 1257 )
    {
      if ( a2 == 1261 )
      {
        ShowWindow(hDlg, 0);
        Dialog::InitWindow((SkirmishDialog *)hDlg, 1);
        return 0;
      }
      return 0;
    }
    ebx114 = (void **)(hWnd + 2);
    *(unsigned int *)&v82[32] = hWnd + 2;
    WideString::Assign_Alt((void **)hWnd + 2, 0);
    if ( *(unsigned int *)hWnd )
    {
      DlgCtrlID = (void *)GetDlgCtrlID(*(HWND *)hWnd);
      if ( *((unsigned int *)hWnd + 1) != -1 )
      {
        if ( Dialog::MapPlayerIDToIndex(DlgCtrlID) != -1 )
        {
          ComboBoxSelectedDefault = (void *)GetComboBoxSelectedDefault(
                                              (SkirmishDialog *)hDlg,
                                              (int)DlgCtrlID,
                                              *((unsigned int *)hWnd + 1));
          DifficultyString = GameClass::GetDifficultyString(ComboBoxSelectedDefault);
          WideString::Assign_Alt((void **)hWnd + 2, DifficultyString);
          return 1;
        }
        if ( CountryCombo::IDToIndex(DlgCtrlID) == -1 )
        {
          if ( StartCombo::IDToIndex(DlgCtrlID) != -1 )
          {
            ComboBoxSelectedRaw = (void *)GetComboBoxSelectedRaw(
                                            (ReferenceCounted *)hDlg,
                                            (int)DlgCtrlID,
                                            *((unsigned int *)hWnd + 1));
            ColorTooltip = GameSetup::GetColorTooltip(ComboBoxSelectedRaw);
            WideString::Assign_Alt((void **)hWnd + 2, ColorTooltip);
            return 1;
          }
        }
        else
        {
          ComboBoxSelected = (void *)GetComboBoxSelected(
                                       (ReferenceCounted *)hDlg,
                                       (int)DlgCtrlID,
                                       *((unsigned int *)hWnd + 1));
          if ( ComboBoxSelected != (void *)-1 )
          {
            Name = SideClass::GetName(ComboBoxSelected);
            WideString::Assign_Alt((void **)hWnd + 2, Name);
            return 1;
          }
        }
        return 1;
      }
      if ( Dialog::MapPlayerIDToIndex(DlgCtrlID) != -1 )
      {
        v70 = (SessionClass *)GetComboBoxSelectedDefault((SkirmishDialog *)hDlg, (int)DlgCtrlID, 0xFFFFFFFF);
        if ( v70 )
        {
          GetSkirmishMenuOwnerName((SkirmishDialog *)&v82[28], hDlg, *(HWND *)hWnd);
          *(unsigned int *)&v82[8] = GetStringCSF(
                                 (wchar_t *)&stru_830620.__pad_14B0[7684],
                                 0,
                                 (CampaignScore *)g_Str_File_wonline_cpp,
                                 17364);
          v71 = WideString::GetOrEmpty((wchar_t **)&v82[28]);
          if ( !wcscmp((const wchar_t *)v71, *(const wchar_t **)&v82[8])
            || (*(unsigned int *)&v82[8] = GetStringCSF(
                                       (wchar_t *)&stru_830620.__pad_14B0[7320],
                                       0,
                                       (CampaignScore *)g_Str_File_wonline_cpp,
                                       17364),
                v72 = WideString::GetOrEmpty((wchar_t **)&v82[28]),
                !wcscmp((const wchar_t *)v72, *(const wchar_t **)&v82[8])) )
          {
            if ( IsKnownPointer((wchar_t *)v70) )
            {
              v68 = BuildWOLPlayerTooltip((IUnknown *)v70);
              WideString::Assign_Alt((void **)&v82[28], v68);
            }
          }
          v74 = WideString::GetOrEmpty((wchar_t **)&v82[28]);
          WideString::Assign_Alt(*(void ***)&v82[32], (wchar_t *)v74);
          DeleteAndZero::Alt((void **)&v82[28]);
        }
        ebx114 = *(void ***)&v82[32];
      }
      if ( DlgCtrlID == (void *)1876 )
      {
        edi132 = 0;
        goto LABEL_147;
      }
      if ( DlgCtrlID == (void *)1877 )
      {
        edi132 = 1;
        goto LABEL_147;
      }
      if ( DlgCtrlID == (void *)1878 )
      {
        edi132 = 2;
        goto LABEL_147;
      }
      if ( DlgCtrlID == (void *)1879 )
      {
        edi132 = 3;
        goto LABEL_147;
      }
      if ( DlgCtrlID == (void *)1880 )
      {
        edi132 = 4;
        goto LABEL_147;
      }
      if ( DlgCtrlID == (void *)1881 )
      {
        edi132 = 5;
        goto LABEL_147;
      }
      if ( DlgCtrlID == (void *)1882 )
      {
        edi132 = 6;
        goto LABEL_147;
      }
      if ( DlgCtrlID == (void *)1883 )
      {
        edi132 = 7;
LABEL_147:
        unknown_libname_74(&v82[32]);
        eax147 = PlayerSlot::IndexToDlgID((void *)edi132);
        if ( eax147 != -1 )
        {
          eax148 = (SessionClass *)GetComboBoxSelectedDefault((SkirmishDialog *)hDlg, eax147, 0xFFFFFFFF);
          v78 = eax148;
          if ( eax148 )
          {
            if ( IsKnownPointer((wchar_t *)eax148) )
            {
              eax150 = WOLobby::FormatLatencyText((wchar_t *)v78);
              WideString::Assign_Alt((void **)&v82[32], eax150);
              WideString::Reassign_Alt(ebx114, (const wchar_t **)&v82[32]);
            }
          }
        }
        DeleteAndZero::Alt((void **)&v82[32]);
      }
    }
    return 1;
  }
  if ( a2 != 273 )
  {
    switch ( a2 )
    {
      case 2u:
        if ( LoadScreen::IsActive((ProgressScreenClass *)&g_MatrixTransformState + 283) )
          VtableStub::643E70(&g_MatrixTransformState + 6226);
        v14 = (ObjectClass *)*(&g_MatrixTransformState + 2257);
        if ( !*(&g_MatrixTransformState + 2257) )
          return 0;
        ComPtr::Dtor(*(&g_MatrixTransformState + 2257));
        __3_YAXPAX_Z(v14);
        *(&g_MatrixTransformState + 2257) = 0;
        result = 0;
        break;
      case 0xFu:
        Dialog::DrawBackground(hDlg);
        Dialog::StopBink(hDlg);
        if ( *(&g_MatrixTransformState + 2257) )
          Skirmish::RenderPreview(*(&g_MatrixTransformState + 2257), (SkirmishDialog *)hDlg);
        if ( LoadScreen::IsActive((ProgressScreenClass *)&g_MatrixTransformState + 283) )
          LoadScreen::Render((ProgressScreenClass *)&g_MatrixTransformState + 283);
        ValidateRect(hDlg, 0);
        result = 0;
        break;
      case 0x2Bu:
        Dialog::Resize((char *)hWnd);
        result = 1;
        break;
      case 0x84u:
        v5 = GetDlgItem(hDlg, 1685);
        if ( !v5 )
          return 0;
        GetWindowRect(hDlg, (LPRECT)&v82[76]);
        v6 = (unsigned __int16)hWnd - *(unsigned int *)&v82[76];
        v7 = ((unsigned int)hWnd >> 16) - *(unsigned int *)&v82[80];
        unknown_libname_74(&v82[28]);
        v8 = ChildWindowFromPointEx(hDlg, (POINT)__PAIR64__(v7, v6), 1u);
        v9 = v8;
        if ( v8 )
        {
          v10 = WOLobby_Setup((wchar_t **)&v82[60], hDlg, (LPARAM)v8);
          WideString::Reassign_Alt((void **)&v82[28], (const wchar_t **)v10);
          DeleteAndZero::Alt((void **)&v82[60]);
          v11 = WideString::GetOrEmpty((wchar_t **)&v82[28]);
          if ( !wcscmp((const wchar_t *)v11, (const wchar_t *)&stru_87C374.__pad_579C[23588]) )
          {
            SkirmishMenuOwnerName = GetSkirmishMenuOwnerName((SkirmishDialog *)&v82[64], hDlg, v9);
            WideString::Reassign_Alt((void **)&v82[28], (const wchar_t **)SkirmishMenuOwnerName);
            DeleteAndZero::Alt((void **)&v82[64]);
          }
        }
        v13 = WideString::GetOrEmpty_Alt((wchar_t **)&v82[28]);
        SendMessageA(v5, 0x4B2u, 0, (LPARAM)v13);
        DeleteAndZero::Alt((void **)&v82[28]);
        result = 0;
        break;
      default:
        return 0;
    }
    return result;
  }
  if ( (unsigned __int16)a3 > 0x540u )
  {
    if ( (unsigned __int16)a3 > 0x6A8u )
    {
      switch ( (__int16)a3 )
      {
        case 1706:
        case 1707:
        case 1901:
        case 1902:
        case 1903:
        case 1904:
        case 1905:
        case 1906:
        case 1907:
        case 1908:
          goto LABEL_95;
        default:
          return 0;
      }
    }
    if ( (unsigned __int16)a3 < 0x6A1u )
    {
      if ( (unsigned __int16)a3 == 1439 )
      {
        *(unsigned int *)(**(unsigned int **)&HouseClass_Player.__pad_5568[18372] + 119) = 1;
        sprintf(&v82[112], (ObjectClass *)&stru_830620.__pad_DFC[620], *(INIClass **)&v82[12]);
        Network::SendOptionsGame(&v82[112]);
        EnablePlayerSlotControls(hDlg, 0);
        v47 = GetDlgItem(hDlg, 1439);
        EnableWindow(v47, 0);
        InvalidateRect(v47, 0, 0);
        SendMessageA(v47, 0x4DCu, 0, 0);
        DisplayRankingsWOL(0, 0);
        v48 = GetDlgItem(hDlg, 1344);
        SetFocus(v48);
        return 0;
      }
      if ( (unsigned __int16)a3 == 1474 )
      {
        v46 = (SkirmishDialog *)CreateDialog(
                                  0xCFu,
                                  (INT_PTR (*)(HWND, UINT, WPARAM, LPARAM))OnlineLobbyDlgProcWOL,
                                  0);
        HouseClass_Player.__pad_5568[23272] = 1;
        Timer::PumpMessages(*(HWND **)&stru_87C374.__pad_14B0[8012]);
        ShowWindow((HWND)v46, 1);
        GameUI = Dialog::FindGameUI();
        edx90 = Dialog::UpdateGameUI;
        if ( !GameUI )
          edx90 = Dialog::PumpMessages;
        MessageDialogLoopAlt((HWND)v46, (unsigned __int8 (*)(void))edx90, 0, 1, 1);
        Timer::PumpMessages(*(HWND **)&stru_87C374.__pad_14B0[8012]);
        HouseClass_Player.__pad_5568[23272] = *(unsigned char *)(*(unsigned int *)&HouseClass_Player.__pad_5568[8060] + 13730);
        MapClass::MarkForRedraw(&stru_87C374.__pad_14B0[8132], 2);
        return 0;
      }
      return 0;
    }
LABEL_95:
    if ( HIWORD(a3) == 1 )
    {
      v49 = (void *)CountryCombo::IDToIndex((void *)(unsigned __int16)a3);
      *(unsigned int *)&v82[48] = v49;
      v50 = StartCombo::IDToIndex((void *)(unsigned __int16)a3);
      *(unsigned int *)&v82[52] = v50;
      *(unsigned int *)&v82[32] = Dialog::SideIDToIndex((void *)(unsigned __int16)a3);
      v51 = Dialog::OptionIDToIndex((void *)(unsigned __int16)a3);
      if ( (int)v49 <= v50 )
        v49 = (void *)v50;
      if ( (int)v49 <= *(int *)&v82[32] )
        v49 = *(void **)&v82[32];
      if ( (int)v49 <= v51 )
        v49 = (void *)v51;
      ResourceID2CSF = (void *)GetResourceID2CSF(v49);
      ResourceIDCSF = (void *)GetResourceIDCSF(v49);
      *(unsigned int *)&v82[36] = GetResourceID3CSF(v49);
      ResourceID4CSF = (void *)GetResourceID4CSF(v49);
      *(unsigned int *)&v82[56] = ResourceID4CSF;
      if ( v49 == *(void **)&v82[48] )
      {
        SelectLobbyCountry(hDlg, ResourceID2CSF);
      }
      else if ( v49 == *(void **)&v82[52] )
      {
        AssignPlayerColor(hDlg, ResourceIDCSF);
      }
      else if ( v49 == *(void **)&v82[32] )
      {
        AssignPlayerSide(hDlg, *(int *)&v82[36]);
      }
      else
      {
        ProcessNetworkLobbyOption((SessionClass *)hDlg, ResourceID4CSF);
      }
      v57 = (INIClass *)GetComboBoxSelected((ReferenceCounted *)hDlg, (int)ResourceID2CSF, 0xFFFFFFFF);
      GetComboBoxSelectedRaw((ReferenceCounted *)hDlg, (int)ResourceIDCSF, 0xFFFFFFFF);
      SetComboBoxSelection(hDlg, *(int *)&v82[36], 0xFFFFFFFF);
      GetComboBoxSelectedRaw2(hDlg, *(int *)&v82[56], 0xFFFFFFFF);
      Network::GetAddress(&HouseClass_Player.__pad_5568[18700], &v82[108], (ObjectClass *)&v82[68], &v82[28]);
      sprintf(&v82[112], &stru_84BBE0, v57);
      Debug::Log();
      WideString::Assign((wchar_t **)&v82[40], (CampaignScore *)&HouseClass_Player.__pad_5568[17244]);
      ToWideStringCharAlt((char **)&v82[44], (const wchar_t **)&v82[40]);
      DeleteAndZero::Alt((void **)&v82[40]);
      v56 = (INIClass *)String::GetOrEmpty((char **)&v82[44]);
      WOLobby_Play(v56);
      DeleteAndZero((int)&v82[44]);
      return 0;
    }
    return 0;
  }
  if ( (unsigned __int16)a3 == 1344 )
  {
    ReadChatMessage((wchar_t **)&v82[28], hWnd);
    if ( HIWORD(a3) != 1281 )
      goto LABEL_43;
    SendMessageA(hWnd, 0x4B2u, 0, (LPARAM)&stru_87C374.__pad_579C[23588]);
    if ( !WideString::Length((const wchar_t **)&v82[28]) )
      goto LABEL_43;
    v19 = WideString::GetOrEmpty((wchar_t **)&v82[28]);
    eax40 = HandlePageWOL((ObjectClass *)v19);
    if ( eax40 )
    {
      if ( eax40 != (wchar_t *)1
        || (v20 = 0,
            v21 = (DropListClass *)((char *)WideString::Length((const wchar_t **)&v82[28]) + 1),
            v23 = (AbstractClass *)__2_YAPAXI_Z(2 * (unsigned int)v21),
            StringCSF = GetStringCSF(g_Str_TXT_PAGE_COMMAND, 0, (CampaignScore *)g_Str_File_wonline_cpp, 17577),
            wcscpy((wchar_t *)&v82[112], StringCSF),
            !v23) )
      {
LABEL_43:
        DeleteAndZero::Alt((void **)&v82[28]);
        return 0;
      }
      v25 = WideString::GetOrEmpty((wchar_t **)&v82[28]);
      ebp44 = wcsncpy((wchar_t *)v23, (const wchar_t *)v25, v21);
      if ( ebp44 )
      {
        v26 = &ebp44[wcslen((const wchar_t *)&v82[112])];
        if ( *v26 )
        {
          do
          {
            if ( wcsncmp(v26, &stru_82083C, 1u) )
              break;
            ++v26;
          }
          while ( *v26 );
          if ( *v26 )
          {
            v27 = (wchar_t *)&v82[76];
            do
            {
              if ( !wcsncmp(v26, &stru_82083C, 1u) )
                break;
              if ( v20 > 10 )
                break;
              v28 = *v26++;
              *v27 = v28;
              ++v20;
              ++v27;
            }
            while ( *v26 );
          }
        }
        for ( *(unsigned short *)&v82[2 * v20 + 76] = 0; *v26; ++v26 )
        {
          if ( wcsncmp(v26, &stru_82083C, 1u) )
            break;
        }
        if ( v20 <= 10 )
        {
          if ( v20 )
          {
            if ( wcslen(v26) )
            {
              *(unsigned int *)&v82[8] = v26;
              *(unsigned int *)&v82[4] = &v82[76];
              *(unsigned int *)v82 = *(unsigned int *)g_WebBrowser.__pad_0;
              Dialog::ShowMessage((ObjectClass *)0xFF8080, (CampaignScore *)g_Str_Trace___hs____s_, *(ObjectClass *)v82);
              __3_YAXPAX_Z(ebp44);
              DeleteAndZero::Alt((void **)&v82[28]);
              return 0;
            }
            v29 = GetStringCSF(g_Str_TXT_CANT_SEND_BLANK_PAGE, 0, (CampaignScore *)g_Str_File_wonline_cpp, 17615);
          }
          else
          {
            v29 = GetStringCSF(g_Str_TXT_NO_NAME_SPECIFIED, 0, (CampaignScore *)g_Str_File_wonline_cpp, 17609);
          }
        }
        else
        {
          v29 = GetStringCSF((wchar_t *)g_Str_TXT_NAME_TOO_LONG, 0, (CampaignScore *)g_Str_File_wonline_cpp, 17607);
        }
        Dialog::ShowMessage((ObjectClass *)0xFFFFFFFF, (CampaignScore *)v29, *(ObjectClass *)&v82[12]);
        __3_YAXPAX_Z(ebp44);
        DeleteAndZero::Alt((void **)&v82[28]);
        return 0;
      }
    }
    else
    {
      v31 = WideString::GetOrEmpty((wchar_t **)&v82[28]);
      if ( !HandleReplyWOL((wchar_t *)v31, 1281) )
      {
        v43 = WideString::GetOrEmpty((wchar_t **)&v82[28]);
        if ( !HandleOnlineWOL((wchar_t *)v43) )
        {
          esi82 = (int)Math::InitDegToRad;
          if ( FillPlayerListWOL((wchar_t **)&v82[28]) == 1 )
            esi82 = 16744576;
          *(unsigned int *)&v82[8] = WideString::GetOrEmpty((wchar_t **)&v82[28]);
          *(unsigned int *)&v82[4] = *(unsigned int *)g_WebBrowser.__pad_0;
          Dialog::ShowMessage((ObjectClass *)esi82, (CampaignScore *)&stru_84B8E0.health, *(ObjectClass *)&v82[4]);
        }
        goto LABEL_43;
      }
      esi66 = (DropListClass *)((char *)WideString::Length((const wchar_t **)&v82[28]) + 1);
      v32 = (wchar_t *)__2_YAPAXI_Z(2 * (unsigned int)esi66);
      v33 = GetStringCSF((wchar_t *)stru_82A038.location, 0, (CampaignScore *)g_Str_File_wonline_cpp, 17633);
      wcscpy((wchar_t *)&v82[112], v33);
      v34 = GetStringCSF((wchar_t *)&stru_82A038.hasParachute, 0, (CampaignScore *)g_Str_File_wonline_cpp, 17634);
      wcscpy(String, v34);
      if ( v32 )
      {
        v36 = WideString::GetOrEmpty((wchar_t **)&v82[28]);
        edi67 = wcsncpy(v32, (const wchar_t *)v36, esi66);
        if ( edi67 )
        {
          v37 = wcslen((const wchar_t *)&v82[112]);
          if ( !wcsncmp(edi67, (CampaignScore *)&v82[112], v37) )
            v38 = wcslen((const wchar_t *)&v82[112]);
          else
            v38 = wcslen(String);
          for ( i = &edi67[v38]; *i; ++i )
          {
            if ( wcsncmp(i, &stru_82083C, 1u) )
              break;
          }
          v40 = CharToWideString(byte_B77E30);
          wcscpy((wchar_t *)&v82[76], (const wchar_t *)v40);
          if ( wcslen((const wchar_t *)&v82[76]) && wcslen(i) )
          {
            *(unsigned int *)&v82[8] = i;
            *(unsigned int *)&v82[4] = &v82[76];
            *(unsigned int *)v82 = *(unsigned int *)g_WebBrowser.__pad_0;
            Dialog::ShowMessage((ObjectClass *)0xFF8080, (CampaignScore *)g_Str_Trace___hs____s_, *(ObjectClass *)v82);
            __3_YAXPAX_Z(edi67);
            DeleteAndZero::Alt((void **)&v82[28]);
            return 0;
          }
          else
          {
            if ( wcslen((const wchar_t *)&v82[76]) )
            {
              v41 = GetStringCSF(g_Str_TXT_CANT_SEND_BLANK_PAGE, 0, (CampaignScore *)g_Str_File_wonline_cpp, 17663);
              Dialog::ShowMessage((ObjectClass *)0xFFFFFFFF, (CampaignScore *)v41, *(ObjectClass *)&v82[12]);
            }
            __3_YAXPAX_Z(edi67);
            DeleteAndZero::Alt((void **)&v82[28]);
            return 0;
          }
        }
      }
    }
    DeleteAndZero::Alt((void **)&v82[28]);
    return 0;
  }
  if ( (unsigned __int16)a3 > 0x510u )
  {
    switch ( (__int16)a3 )
    {
      case 1299:
      case 1300:
      case 1310:
      case 1311:
      case 1312:
      case 1313:
      case 1314:
      case 1315:
      case 1316:
      case 1317:
      case 1318:
      case 1319:
      case 1320:
        goto LABEL_95;
      default:
        return 0;
    }
  }
  if ( (unsigned __int16)a3 == 1296 )
    goto LABEL_95;
  if ( (unsigned __int16)a3 == 2 )
  {
    if ( !g_NetworkLobbyState
      && (*(int (**)(unsigned int))((*(&g_MatrixTransformState + 2263))->X + 36))(*(&g_MatrixTransformState + 2263)) < 0 )
    {
      CloseDialog(hDlg, 2);
      CleanupFileTree();
      return 0;
    }
    return 0;
  }
  if ( (unsigned __int16)a3 != 1005 )
    return 0;
  v15 = GetDlgItem(hDlg, 1344);
  ReadChatMessage((wchar_t **)&v82[28], v15);
  SendMessageA(v15, 0x4B2u, 0, (LPARAM)&stru_87C374.__pad_579C[23588]);
  SetFocus(v15);
  InvalidateRect(v15, 0, 0);
  v16 = 3166463;
  if ( !strlen((const char *)&g_WOL_IdleFlag) )
  {
    v17 = GetStringCSF(g_Str_TXT_NOT_IN_CHAN, 0, (CampaignScore *)g_Str_File_wonline_cpp, 17692);
LABEL_33:
    Dialog::ShowMessage((ObjectClass *)0xFFFFFFFF, (CampaignScore *)v17, *(ObjectClass *)&v82[12]);
    DeleteAndZero::Alt((void **)&v82[28]);
    return 0;
  }
  if ( !WideString::Length((const wchar_t **)&v82[28]) )
  {
    v17 = GetStringCSF(g_Str_TXT_ENTER_MESSAGE, 0, (CampaignScore *)g_Str_File_wonline_cpp, 17700);
    goto LABEL_33;
  }
  if ( FillBuddyListExWOL((wchar_t **)&v82[28]) )
    v16 = 16711935;
  *(unsigned int *)&v82[8] = WideString::GetOrEmpty((wchar_t **)&v82[28]);
  *(unsigned int *)&v82[4] = *(unsigned int *)g_WebBrowser.__pad_0;
  Dialog::ShowMessage((ObjectClass *)v16, (CampaignScore *)g_Str_Trace__hs, *(ObjectClass *)&v82[4]);
  DeleteAndZero::Alt((void **)&v82[28]);
  return 0;

}

// 0x603F60
namespace gamemd {
wchar_t ** WOLobby_Setup(wchar_t ** a1, HWND a2, LPARAM a3)
{
  LPARAM lParam[2]; // [esp+8h] [ebp-Ch] BYREF
  wchar_t *v7; // [esp+10h] [ebp-4h] BYREF

  unknown_libname_74(&v7); /*0x603f6d*/
  lParam[0] = a3; /*0x603f83*/
  lParam[1] = -1; /*0x603f87*/
  SendMessageA(a2, 0x4E9u, 0, (LPARAM)lParam); /*0x603f8f*/
  WideString::AssignFromPtr((WideString *)a1, (const wchar_t **)&v7); /*0x603f9c*/
  DeleteAndZero::Alt((DeleteAndZero *)&v7); /*0x603fa5*/
  return a1; /*0x603fac*/
}
} // namespace gamemd

// 0x72BAC0
namespace gamemd {
char sub_72BAC0()
{
  char result; // al

  result = byte_B0FD51; /*0x72bac0*/
  if ( !byte_B0FD51 ) /*0x72bac7*/
  {
    if ( g_DisplayWidth == 800 ) /*0x72bad3*/
      dword_B0FB2C = LoadFileSHP(off_844DBC, (bool *)&byte_B0FD50); /*0x72bae5*/
    result = LoadPaletteSimple(off_844DC0, &dword_B0FD54, &dword_B0FD58); /*0x72bafa*/
    byte_B0FD51 = 1; /*0x72baff*/
  }
  return result; /*0x72bb06*/
}
} // namespace gamemd

// 0x72BB10
namespace gamemd {
void sub_72BB10()
{
  void *v1; // esi

  if ( g_BuildingLoadQueue_Array.__pad_F70[1441] ) /*0x72bb1a*/
  {
    if ( g_BuildingLoadQueue_Array.__pad_F70[1440] ) /*0x72bb22*/
    {
      v1 = *(void **)&g_BuildingLoadQueue_Array.__pad_F70[892]; /*0x72bb25*/
      if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[892] ) /*0x72bb2d*/
      {
        FileTreeNode::Destroy(*(FileTreeNode **)&g_BuildingLoadQueue_Array.__pad_F70[892]); /*0x72bb31*/
        RA2_OPDEL(v1); /*0x72bb37*/
      }
      g_BuildingLoadQueue_Array.__pad_F70[1440] = 0; /*0x72bb3f*/
    }
    *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[892] = 0; /*0x72bb4b*/
    if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1444] ) /*0x72bb53*/
    {
      RA2_OPDEL(*(void **)&g_BuildingLoadQueue_Array.__pad_F70[1444]); /*0x72bb56*/
      *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1444] = 0; /*0x72bb5e*/
    }
    if ( *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1448] ) /*0x72bb6c*/
    {
      (***(void (****)(unsigned int, int))&g_BuildingLoadQueue_Array.__pad_F70[1448])( /*0x72bb72*/
        *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1448],
        1);
      *(unsigned int *)&g_BuildingLoadQueue_Array.__pad_F70[1448] = 0; /*0x72bb74*/
    }
  }
  g_BuildingLoadQueue_Array.__pad_F70[1441] = 0; /*0x72bb7a*/
}
} // namespace gamemd

// 0x781090
namespace gamemd {
CampaignScore * WOLobby_Get(wchar_t ** a1, HWND a2, WPARAM wParam)
{
  wchar_t *StringCSF; // eax
  LRESULT v5; // eax
  char v7[108]; // [esp+4h] [ebp-6Ch] BYREF

  if ( wParam == -1 ) /*0x78109d*/
  {
    StringCSF = GetStringCSF(aSttLobbylistus, 0, g_Str_File_wonline_cpp, 3050); /*0x7810a4*/
  }
  else
  {
    v5 = SendMessageA(a2, 0x199u, wParam, 0); /*0x7810af*/
    if ( v5 >= 0 && v5 < (int)dword_B77900 ) /*0x7810c1*/
    {
      qmemcpy(v7, (char *)dword_B77908 + 108 * v5, sizeof(v7)); /*0x7810ee*/
      FormatWOLPlayerInfo(a1, v7); /*0x7810f2*/
      return a1; /*0x7810ff*/
    }
    StringCSF = GetStringCSF(aSttLobbylistus, 0, g_Str_File_wonline_cpp, 3055); /*0x781113*/
  }
  WideString::Assign((WideString *)a1, StringCSF); /*0x78111b*/
  return a1; /*0x7810fb*/
}
} // namespace gamemd
