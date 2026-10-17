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
#include "e4/classes/Lobby_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/classes/SkirmishDialog_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/DeleteAndZero_e4.hpp"
#include "e4/classes/FileTreeNode_e4.hpp"

// 0x5E3850
namespace gamemd {  // G42.18 ns repair
int INIClass::WOLobby_Play(const char *a1, const char *a2, int a3)
{

  int result; // eax

  LPVOID v2; // ebx
  v2 = (LPVOID)(ppv); /*0x5e3857*/
  if ( ppv ) /*0x5e3864*/
  {
    char v7[108]; // [esp+14h] [ebp-234h] BYREF
    memset(v7, 0, sizeof(v7)); /*0x5e3875*/
    strcpy(&v7[36], a1); /*0x5e3892*/
    return (*(int (**)(LPVOID, char *, const char *))(*(unsigned int *)v2 + 56))(v2, v7, a2); /*0x5e38a3*/
  }
  else
  {
    unsigned int v8[113]; // [esp+80h] [ebp-1C8h] BYREF
    memset(v8, 0, sizeof(v8)); /*0x5e38c6*/
    __int16 v9; // [esp+244h] [ebp-4h]
    v9 = 0; /*0x5e38c8*/
    char v10; // [esp+246h] [ebp-2h]
    v10 = 0; /*0x5e38ca*/
    v8[0] = 24; /*0x5e38d5*/
    strcpy((char *)&v8[1], unk_A8B380); /*0x5e38f6*/
    strcpy((char *)&v8[11] + 3, a2); /*0x5e3915*/
    dword_A8D7F7 = Session::GetPlayerColor(dword_A8B238); /*0x5e392d*/
    dword_A8D7FB = WideString::Hash(word_A8D610); /*0x5e3937*/
    result = dword_A8DA84; /*0x5e393c*/
    int i; // esi
    for ( i = 1; i < dword_A8DA84; ++i ) /*0x5e3948*/
    {
      char *v6; // eax
      v6 = ToWideStringChar(*(char **)(dword_A8DA78 + 4 * i)); /*0x5e3953*/
      if ( !_strcmpi(v6, a1) ) /*0x5e3959*/
      {
        Debug::Log(); /*0x5e3974*/
        Network::SendMessage((int)unk_A8E9C0, (int)v8, 455, 1, *(unsigned int *)(dword_A8DA78 + 4 * i) + 40, 0, 0); /*0x5e39a0*/
        Event::Dispatch(); /*0x5e39a5*/
      }
      result = dword_A8DA84; /*0x5e39aa*/
    }
  }
  return result; /*0x5e38a6*/

}
}  // G42.18 ns repair
// 0x78F7F0
namespace gamemd {  // G42.18c ns repair
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
  wchar_t **v21; // eax
  wchar_t *v22; // eax
  wchar_t **SkirmishMenuOwnerName; // eax
  wchar_t *v24; // eax
  Skirmish *v25; // esi
  Skirmish *v26; // ecx
  wchar_t *v27; // eax
  Skirmish *v28; // esi
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
  wchar_t *v39; // edi
  wchar_t v40; // ax
  wchar_t *v41; // eax
  wchar_t *v42; // eax
  size_t v43; // esi
  // w15f4: v3-export truncated tail (RHS lost): wchar_t *v... ...
  // live body via get_context/0x78F7F0 — w15f4 regrafted decls only
  wchar_t *v44; // edi
  wchar_t *v45; // eax
  wchar_t *v46; // eax
  wchar_t *v47; // eax
  wchar_t *v48; // edi
  size_t v49; // eax
  int v50; // eax
  const wchar_t *k; // esi
  char *v52; // eax
  wchar_t *v53; // eax
  wchar_t *v54; // eax
  int v55; // esi
  wchar_t *v56; // eax
  HWND v57; // eax
  int v58; // edx
  int v59; // esi
  unsigned int *v60; // eax
  int v61; // ecx
  wchar_t *v62; // eax
  wchar_t *v63; // eax
  int v64; // esi
  char v65; // cl
  wchar_t *v66; // eax
  int v67; // ebx
  LPARAM v69; // esi
  wchar_t *v70; // eax
  int v71; // ecx
  int v72; // eax
  int *ambientSoundController; // edx
  wchar_t *v74; // eax
  int v75; // edx
  int v76; // esi
  TagClass **p_attachedTag; // eax
  int v78; // ebx
  signed int inited; // esi
  wchar_t *v80; // eax
  ObjectClass *v81; // esi
  wchar_t *v82; // eax
  HWND Current; // eax
  HWND v84; // eax
  int v85; // ebp
  LPARAM v86; // edi
  char *v87; // eax
  int v88; // eax
  int v89; // edi
  int v90; // eax
  wchar_t *v91; // eax
  wchar_t *v92; // eax
  wchar_t *v93; // eax
  int v94; // ebx
  int v95; // eax
  unsigned int *v96; // ebp
  unsigned int *v97; // eax
  int v98; // edx
  void *j; // eax
  HWND Dialog; // esi
  int GameUI; // eax
  unsigned char (*v102)(void); // edx
  ObjectClass *v103; // ecx
  char v104; // al
  bool v105; // bl
  HWND v106; // eax
  ObjectClass *v107; // ecx
  char v108; // bl
  char v109; // al
  unsigned int *v110; // eax
  int v111; // esi
  void *v112; // ecx
  int v113; // ebp
  int v114; // edi
  int v115; // ebx
  char *v117; // eax
  LPARAM v118; // eax
  LPARAM v119; // eax
  ObjectClass *First; // ebx
  int owningHouseIndex; // edx
  char *v122; // eax
  HWND v123; // eax
  HWND v124; // eax
  HWND v125; // eax
  HWND v126; // ebx
  HWND v127; // ebx
  int v128; // ebx
  int v129; // eax
  int v130; // eax
  int PlayerCountMap; // esi
  void *vtable2; // ecx
  HWND v133; // eax
  int v134; // edi
  int v135; // ebp
  char *v137; // eax
  HWND v138; // eax
  void **v139; // ebx
  gamemd::Dialog *DlgCtrlID; // esi
  GameSetup *ComboBoxSelectedRaw; // eax
  wchar_t *ColorTooltip; // eax
  SideClass *ComboBoxSelected; // eax
  wchar_t *Name; // eax
  GameClass *ComboBoxSelectedDefault; // eax
  wchar_t *DifficultyString; // eax
  char *v147; // esi
  wchar_t *v148; // eax
  wchar_t *v149; // eax
  wchar_t *v150; // eax
  wchar_t *v151; // eax
  DeleteAndZero *v152; // ecx
  int v153; // esi
  int v154; // eax
  ObjectClass *v155; // eax
  WOLobby *v156; // esi
  wchar_t *v157; // eax
  int v158; // [esp-8h] [ebp-264h]
  DeleteAndZero v159; // [esp-4h] [ebp-260h]
  int v160; // [esp-4h] [ebp-260h]
  wchar_t *StringCSF; // [esp-4h] [ebp-260h]
  wchar_t *v162; // [esp-4h] [ebp-260h]
  ObjectClass *v163; // [esp+0h] [ebp-25Ch]
  SessionClass *v164; // [esp+0h] [ebp-25Ch]
  unsigned char v165[176]; // [esp+10h] [ebp-24Ch] BYREF
  wchar_t Destination[66]; // [esp+D4h] [ebp-188h] BYREF
  wchar_t String1[130]; // [esp+158h] [ebp-104h] BYREF
}
}  // G42.18c ns repair

// 0x791B10
namespace gamemd {  // G42.18c ns repair
int WOLobby::ChatDlgProc(HWND hDlg, UINT, WPARAM, HWND hWnd)
{

  int result; // eax
  HWND v5; // ebx
  unsigned int v6; // ebp
  unsigned int v7; // edi
  HWND v8; // eax
  HWND v9; // edi
  wchar_t **v10; // eax
  wchar_t *v11; // eax
  wchar_t **SkirmishMenuOwnerName; // eax
  wchar_t *v13; // eax
  Skirmish *v14; // esi
  HWND v15; // esi
  int v16; // esi
  wchar_t *v17; // eax
  wchar_t *v18; // eax
  wchar_t *v19; // eax
  wchar_t *v20; // eax
  int v21; // ebx
  size_t v22; // esi
  wchar_t *v23; // edi
  wchar_t *v24; // eax
  wchar_t *v25; // eax
  wchar_t *v26; // ebp
  const wchar_t *v27; // esi
  ObjectClass **p_nextObject; // edi
  wchar_t v29; // ax
  wchar_t *v30; // eax
  wchar_t *v31; // eax
  size_t v32; // esi
  wchar_t *v33; // edi
  wchar_t *v34; // eax
  wchar_t *v35; // eax
  wchar_t *v36; // eax
  wchar_t *v37; // edi
  size_t v38; // eax
  int v39; // eax
  const wchar_t *i; // esi
  char *v41; // eax
  wchar_t *v42; // eax
  int v44; // esi
  wchar_t *v45; // eax
  HWND Dialog; // esi
  int GameUI; // eax
  unsigned char (*v48)(void); // edx
  HWND v49; // edi
  HWND v50; // eax
  ObjectClass *v51; // edi
  int v52; // ebx
  int v53; // eax
  CountryCombo *ResourceID2CSF; // ebp
  StartCombo *ResourceIDCSF; // ebx
  gamemd::Dialog *ResourceID4CSF; // eax
  int v57; // edi
  int v58; // ebx
  int v59; // ebp
  int ComboBoxSelectedRaw2; // esi
  char *v61; // eax
  void **vtable1; // ebx
  gamemd::Dialog *DlgCtrlID; // ebp
  GameSetup *ComboBoxSelectedRaw; // eax
  wchar_t *ColorTooltip; // eax
  SideClass *ComboBoxSelected; // eax
  wchar_t *Name; // eax
  GameClass *ComboBoxSelectedDefault; // eax
  wchar_t *DifficultyString; // eax
  char *v70; // ebx
  wchar_t *v71; // eax
  wchar_t *v72; // eax
  wchar_t *v73; // eax
  wchar_t *v74; // eax
  int v75; // edi
  int v76; // eax
  ObjectClass *v77; // eax
  WOLobby *v78; // esi
  wchar_t *v79; // eax
  LPARAM v81; // eax
  LPARAM v82; // eax
  unsigned int *First; // edi
  int v84; // edi
  void *vtable2; // ebx
  int PlayerCountMap; // ecx
  DeleteAndZero v87; // [esp-4h] [ebp-168h]
  wchar_t *StringCSF; // [esp-4h] [ebp-168h]
  wchar_t *v89; // [esp-4h] [ebp-168h]
  ObjectClass *v90; // [esp+0h] [ebp-164h]
  ObjectClass v91; // [esp+10h] [ebp-154h] BYREF
  wchar_t String[64]; // [esp+E4h] [ebp-80h] BYREF
}
}  // G42.18c ns repair

// 0x603F60
namespace gamemd {
wchar_t ** WOLobby_Setup(wchar_t ** a1, HWND a2, LPARAM)
{

  LPARAM lParam[2]; // [esp+8h] [ebp-Ch] BYREF
  wchar_t *v7; // [esp+10h] [ebp-4h] BYREF

  unknown_libname_74(&v7); /*0x603f6d*/
  lParam[0] = LPARAM; /*0x603f83*/
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

  char result = byte_B0FD51; // al /*0x72bac0*/
  if ( !byte_B0FD51 ) /*0x72bac7*/
  {
    if ( g_DisplayWidth == 800 ) /*0x72bad3*/
      dword_B0FB2C = (unsigned int)(LoadFileSHP((char *)(off_844DBC), (bool *)&byte_B0FD50)); /*0x72bae5*/
    result = LoadPaletteSimple((char *)(off_844DC0), &dword_B0FD54, &dword_B0FD58); /*0x72bafa*/
    byte_B0FD51 = 1; /*0x72baff*/
  }
  return result; /*0x72bb06*/
}
} // namespace gamemd

// 0x72BB10
namespace gamemd {
void sub_72BB10()
{

  if ( DataGlobal_B0FD51 ) /*0x72bb1a*/
  {
    if ( DataGlobal_B0FD50 ) /*0x72bb22*/
    {
      void *v1; // esi
      v1 = *(void **)&DataGlobal_B0FB2C; /*0x72bb25*/
      if ( *(unsigned int *)&DataGlobal_B0FB2C ) /*0x72bb2d*/
      {
        (*(FileTreeNode **)&DataGlobal_B0FB2C)->Destroy(); /*0x72bb31*/
        operator delete((v1)); /*0x72bb37*/
      }
      DataGlobal_B0FD50 = 0; /*0x72bb3f*/
    }
    *(unsigned int *)&DataGlobal_B0FB2C = 0; /*0x72bb4b*/
    if ( *(unsigned int *)&DataGlobal_B0FD54 ) /*0x72bb53*/
    {
      operator delete((*(void **)&DataGlobal_B0FD54)); /*0x72bb56*/
      *(unsigned int *)&DataGlobal_B0FD54 = 0; /*0x72bb5e*/
    }
    if ( *(unsigned int *)&DataGlobal_B0FD58 ) /*0x72bb6c*/
    {
      (***(void (****)(unsigned int, int))&DataGlobal_B0FD58)( /*0x72bb72*/
        *(unsigned int *)&DataGlobal_B0FD58,
        1);
      *(unsigned int *)&DataGlobal_B0FD58 = 0; /*0x72bb74*/
    }
  }
  DataGlobal_B0FD51 = 0; /*0x72bb7a*/
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
    if ( v5 >= 0 && v5 < *(int *)&stru_B778FC.m_3[1] ) /*0x7810c1*/
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
