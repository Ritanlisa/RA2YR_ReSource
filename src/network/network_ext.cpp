#include "network/network_ext.hpp"
#include "e4/e4_globals.hpp"

namespace gamemd {

// --- IPXGlobalConnClass ---

// 0x53fbd0
void IPXGlobalConnClass::Flush() {}
// 0x53fcb0
void IPXGlobalConnClass::GetQueueSize() {}
// 0x53ff10
void IPXGlobalConnClass::ConnectToHost() {}
// 0x540030
void IPXGlobalConnClass::Disconnect() {}
// 0x540050
void IPXGlobalConnClass::GetAddress() {}

// --- Modem ---

// 0x5bb6e0
void Modem::EnumerateDevices() {}
// 0x5f0690
void Modem::CheckStatus() {}
// 0x5f0d60
void Modem::DetectAndConnect() {}
// 0x5f19e0
void Modem::OpenPort() {}

// --- ModemGame ---

// 0x5b59b0
void ModemGame::AdvanceTauntCommand() {}
// 0x5b5ad0
void ModemGame::UpdatePlayerNameAndColor() {}
// 0x5b6020
void ModemGame::ProcessPacket() {}
// 0x5b7360
void ModemGame::ReceiveMapPreview() {}
// 0x6425f0
void ModemGame::RenderPaletteImage() {}

// --- ModemGuest ---

// 0x5b49b0
void ModemGuest::Dialog() {}
// 0x5b4ee0
void ModemGuest::InitDialog() {}
// 0x5b9550
void ModemGuest::UpdateGuestPlayerInfo() {}
// 0x5ba060
void ModemGuest::ProcessPacket() {}

// --- ModemHost ---

// 0x5b77e0
void ModemHost::Dialog() {}
// 0x5b82f0
void ModemHost::InitDialog() {}
// 0x5bac60
void ModemHost::StartGame() {}

// --- MultiplayerBattleTeam ---

// 0x5c1090
void MultiplayerBattleTeam::AddRef() {}
// 0x5c10b0
void MultiplayerBattleTeam::Release() {}
// 0x5c10d0
void MultiplayerBattleTeam::QueryInterface() {}

// --- MultiplayerConfig ---

// 0x5d5b20
void MultiplayerConfig::Cleanup() {}

// --- MultiplayerLobby ---

// 0x5ec030
void MultiplayerLobby::FillSlots() {}

// --- MultiplayerModeVector ---

// 0x5d88b0
void MultiplayerModeVector::Destruct() {}

// --- MultiplayerModeVector2 ---

// 0x5d8900
void MultiplayerModeVector2::Destruct() {}

// --- MultiplayerObserverTeam ---

// 0x5c94c0
void MultiplayerObserverTeam::AddRef() {}
// 0x5c94d0
void MultiplayerObserverTeam::QueryInterface() {}

// --- MultiplayerSiegeAttackerTeam ---

// 0x5caf40
void MultiplayerSiegeAttackerTeam::QueryInterface() {}

// --- MultiplayerSiegeDefenderTeam ---

// 0x5cae70
void MultiplayerSiegeDefenderTeam::AddRef() {}
// 0x5caf10
void MultiplayerSiegeDefenderTeam::QueryInterface() {}

// --- MultiplayerTeam ---

// 0x5d8c50
void MultiplayerTeam::Constructor() {}
// 0x5d8c80
void MultiplayerTeam::Destructor() {}

// --- MultiplayerTeamVector ---

// 0x5d8860
void MultiplayerTeamVector::Destruct() {}

// --- MultiplayerTeam_Destru ---

// 0x5d8d50
void MultiplayerTeam_Destru::QueryInterface() {}

// --- NetworkBuffer ---

// 0x74fd50
void NetworkBuffer::GetField() {}
// 0x74fd60
void NetworkBuffer::UpdateWindow() {}
// 0x74fda0
void NetworkBuffer::GetField2() {}
// 0x74fdb0
void NetworkBuffer::GetField3() {}

// --- NetworkDialog ---

// 0x695fd0
void NetworkDialog::InitModemSettings() {}
// 0x6964c0
void NetworkDialog::Dispatch() {}
// 0x696610
void NetworkDialog::UpdateListBox() {}

// --- NetworkEventClass ---

// 0x645820
void NetworkEventClass::Process() {}

// --- NetworkEventQueueClass ---

// 0x664530
void NetworkEventQueueClass::WaitForResponse() {}

// --- NetworkGameSetup ---

// 0x5b7970
void NetworkGameSetup::DlgProc() {}
// 0x5b9680
void NetworkGameSetup::ReadRulesInitConfig() {}
// 0x5b96b0
void NetworkGameSetup::ReadRulesBases() {}
// 0x5b96e0
void NetworkGameSetup::ReadRulesAlliesAllowed() {}
// 0x5b9710
void NetworkGameSetup::ReadRulesEngineerCount() {}

// --- NetworkID ---

// 0x53ed20
void NetworkID::Assign() {}
// 0x53ef30
void NetworkID::Compare() {}

// --- NetworkManager ---

// 0x664240
void NetworkManager::SetPlayerAddress() {}
// 0x6646c0
void NetworkManager::RemovePlayer() {}

// --- NetworkOptions ---

// 0x560480
void NetworkOptions::DlgProc() {
// [IDA decompile] original pseudocode - translation pending (final goal)
// 0x560480
void NetworkOptions::DlgProc(int hWnd, int a2, int a3, int hCtl)
{
  int result; // eax
  int i; // ebx
  #72 *v10; // eax
  LRESULT (__stdcall *v17)(HWND, UINT, WPARAM, LPARAM); // esi
  __int16 v18; // dx
  #72 *v19; // eax
  #72 *v26; // eax
  #72 *v30; // eax
  #72 *v31; // eax
  #72 *v32; // eax
  #72 *StringCSF; // [esp-10h] [ebp-120h]
  #72 *v34; // [esp-10h] [ebp-120h]
  #72 *v35; // [esp-10h] [ebp-120h]
  #72 *v36; // [esp-10h] [ebp-120h]
  #72 *v37; // [esp-10h] [ebp-120h]
  __int16 v40; // [esp+14h] [ebp-FCh]
  __int128 v46; // [esp+2Ch] [ebp-E4h] BYREF
  const __int16 *v47; // [esp+3Ch] [ebp-D4h]
  const __int16 *v48; // [esp+40h] [ebp-D0h]
  const __int16 *v49; // [esp+44h] [ebp-CCh]
  const __int16 *v50; // [esp+48h] [ebp-C8h]
  const __int16 *v51; // [esp+4Ch] [ebp-C4h]
  int lParam[16]; // [esp+70h] [ebp-A0h] BYREF
  char Destination[32]; // [esp+D0h] [ebp-40h] BYREF
  char String[32]; // [esp+F0h] [ebp-20h] BYREF

  result = BaseDialogProc(hWnd, a2, a3, hCtl);
  if ( !result )
  {
    _DWORD * v45 = (_DWORD *)((int (__stdcall *)(int, int))GetWindowLongA)(hWnd, 8);
    if ( a2 == 273 )
    {
      switch ( (unsigned __int16)a3 )
      {
        case 1u:
          int v16 = ((int (__stdcall *)(int, int))GetDlgItem)(hWnd, 1489);
          v17 = SendMessageA;
          ((void (__stdcall *)(int, int, int, __int128 *))SendMessageA)(v16, 1205, 16, &v46);
          if ( strlen((const char *)&v46) )
          {
            v18 = atoi((const char *)&v46);
            v40 = v18;
            if ( strlen((const char *)&v46) > 5 || (unsigned __int16)v18 > 0x3FFFu )
            {
              v48 = asc_82083C;
              StringCSF = GetStringCSF((#72 *)g_Str_TXT_OK, 0, g_Str_File_MainOpt_cpp, 983);
              v19 = GetStringCSF((#72 *)aTxtInvalidSock, 0, g_Str_File_MainOpt_cpp, 983);
              Dialog::ShowMessageBox(v19, StringCSF, 0, 0, 0);
              return 0;
            }
          }
          else
          {
            v40 = -1;
          }
          int v20 = ((int (__stdcall *)(int, int))GetDlgItem)(hWnd, 1491);
  char v52[32]; // [esp+50h] [ebp-C0h] BYREF
          ((void (__stdcall *)(int, int, int, char *))SendMessageA)(v20, 1205, 32, v52);
          strncpy(Destination, v52, 32);
          if ( strlen(v52) )
          {
            char * v21 = strtok(v52, asc_826598);
            int v22 = -1;
            int v23 = -1;
            int v24 = -1;
            int v41 = -1;
            int v42 = -1;
            int v43 = -1;
            int v44 = -1;
            if ( v21 )
            {
              int * v25 = &v41;
              do
              {
                sscanf(v21, "%x", v25++);
                v21 = strtok(0, asc_826598);
              }
              while ( v21 );
              v24 = v44;
              v23 = v42;
              v22 = v41;
              v17 = SendMessageA;
            }
            if ( (unsigned __int8)v22 != v22
              || (unsigned __int8)v23 != v23
              || (unsigned __int8)v43 != v43
              || (unsigned __int8)v24 != v24 )
            {
              v49 = asc_82083C;
              v34 = GetStringCSF((#72 *)g_Str_TXT_OK, 0, g_Str_File_MainOpt_cpp, 1017);
              v26 = GetStringCSF((#72 *)aTxtDestnetAddr, 0, g_Str_File_MainOpt_cpp, 1017);
              Dialog::ShowMessageBox(v26, v34, 0, 0, 0);
              return 0;
            }
          }
          int v27 = ((int (__stdcall *)(int, int))GetDlgItem)(hWnd, 1492);
          DataGlobal_87F7E8[539891] = ((int (__stdcall *)(int, int, _DWORD, _DWORD))v17)(v27, 327, 0, 0);
          HIWORD(DataGlobal_87F7E8[539888]) = v40;
          strcpy((char *)&DataGlobal_87F7E8[539892], Destination);
          int v28 = ((int (__stdcall *)(int, int))GetDlgItem)(hWnd, 1495);
  char v54[32]; // [esp+B0h] [ebp-60h] BYREF
          memset(v54, 0, sizeof(v54));
          ((void (__stdcall *)(int, int, int, char *))SendMessageA)(v28, 1205, 8, v54);
          strncpy(String, v54, 32);
          int v29 = atoi(String);
          if ( v29 > 0xFFFF )
          {
            v47 = asc_82083C;
            v35 = GetStringCSF((#72 *)g_Str_TXT_OK, 0, g_Str_File_MainOpt_cpp, 1058);
            v30 = GetStringCSF((#72 *)aTxtPortNumberE, 0, g_Str_File_MainOpt_cpp, 1058);
            Dialog::ShowMessageBox(v30, v35, 0, 0, 0);
            return 0;
          }
          if ( ((int (__stdcall *)(int, int, int, _DWORD, _DWORD))SendDlgItemMessageA)(hWnd, 1890, 240, 0, 0) == 1 )
          {
            if ( !LOBYTE(DataGlobal_87F7E8[539238]) )
            {
              v51 = asc_82083C;
              v36 = GetStringCSF((#72 *)g_Str_TXT_OK, 0, g_Str_File_MainOpt_cpp, 1067);
              v31 = GetStringCSF((#72 *)aTxtFirewallSet, 0, g_Str_File_MainOpt_cpp, 1067);
              Dialog::ShowMessageBox(v31, v36, 0, 0, 0);
            }
            LOBYTE(DataGlobal_87F7E8[539238]) = 1;
          }
          else
          {
            LOBYTE(DataGlobal_87F7E8[539238]) = 0;
          }
          if ( v29 > 0 && !DataGlobal_87F7E8[539291] )
          {
            v50 = asc_82083C;
            v37 = GetStringCSF((#72 *)g_Str_TXT_OK, 0, g_Str_File_MainOpt_cpp, 1078);
            v32 = GetStringCSF((#72 *)aTxtFirewallSet_0, 0, g_Str_File_MainOpt_cpp, 1078);
            Dialog::ShowMessageBox(v32, v37, 0, 0, 0);
          }
          DataGlobal_87F7E8[539291] = v29;
          __Release__NonReentrantLock_details_Concurrency__QAEXXZ((#350 *)&dword_A8ED54[50269]);
          RawFileClass::Construct(lParam, (int)g_Str_File_RA2MD_INI);
          INIClass::SetBool(
            (char *)&DataGlobal_87F7E8[7734],
            (unsigned __int8 *)g_INI_Key_MultiPlayer,
            aSenddelay,
            DataGlobal_87F7E8[539238]);
          INIClass::SetInt(
            (char *)&DataGlobal_87F7E8[7734],
            (unsigned __int8 *)g_INI_Key_MultiPlayer,
            aPortnumberover,
            DataGlobal_87F7E8[539291],
            0);
          INIClass::WriteDigest((char *)&DataGlobal_87F7E8[7734], (int)lParam, 0);
          RawFileClass::Dtor(lParam);
          break;
        case 2u:
          break;
        case 0x5D4u:
          int v15 = ((int (__stdcall *)(int, int))GetDlgItem)(hWnd, 1492);
          dword_82A280 = ((int (__stdcall *)(int, int, _DWORD, _DWORD))SendMessageA)(v15, 327, 0, 0);
          return 0;
        default:
          return 0;
      }
      *v45 = 2;
      return 0;
    }
    if ( a2 != 1175 )
    {
      if ( a2 == 1243 )
      {
  int v5; // edx
        LOBYTE(v5) = a3 != 0;
        NavigateDialogTab(hCtl, v5);
        return 0;
      }
      return 0;
    }
    int v6 = ((int (__stdcall *)(int, int))GetDlgItem)(hWnd, 1492);
    char v38 = 0;
    if ( DataGlobal_87F7E8[8080]
  _DWORD *v7; // eax
  _DWORD *v8; // eax
      || ((v7 = (_DWORD *)__2_YAPAXI_Z(258832)) == 0 ? (v8 = 0) : (v8 = IPXInterfaceClass::Construct(v7)),
          DataGlobal_87F7E8[8080] = v8,
          WinsockInterface::Init(v8),
          v38 = 1,
          DataGlobal_87F7E8[8080]) )
    {
      Debug::Log();
      int v39 = DataGlobal_87F7E8[8080];
      for ( i = 0; i < 20; ++i )
      {
        if ( NetworkOptions::ApplySettings(v39, i, (char *)lParam, 64) )
        {
          Debug::Log();
          Debug::Log();
          if ( ((int (__stdcall *)(int, int, _DWORD, int *))SendMessageA)(v6, 1208, 0, lParam) == -1 )
            ((void (__stdcall *)(int, int, _DWORD, int *))SendMessageA)(v6, 1212, 0, lParam);
        }
      }
      if ( !v38 )
      {
LABEL_20:
        if ( !((int (__stdcall *)(int, int, _DWORD, _DWORD))SendMessageA)(v6, 326, 0, 0) )
        {
          v10 = GetStringCSF((#72 *)aTxtNoBoundNetC, 0, g_Str_File_MainOpt_cpp, 894);
          ((void (__stdcall *)(int, int, _DWORD, #72 *))SendMessageA)(v6, 1218, 0, v10);
        }
        int v11 = DataGlobal_87F7E8[539891];
        if ( DataGlobal_87F7E8[539891] < 0
          || v11 >= ((int (__stdcall *)(int, int, _DWORD, _DWORD))SendMessageA)(v6, 326, 0, 0) )
        {
          v11 = 0;
        }
        ((void (__stdcall *)(int, int, int, _DWORD))SendMessageA)(v6, 334, v11, 0);
        ((void (__stdcall *)(int, int, _DWORD, _DWORD))SendMessageA)(hWnd, 1124, 0, 0);
        dword_82A280 = -1;
        int v12 = ((int (__stdcall *)(int, int))GetDlgItem)(hWnd, 1489);
        if ( HIWORD(DataGlobal_87F7E8[539888]) != 0xFFFF )
        {
          sprintf((char *const)&v46, "%d", HIWORD(DataGlobal_87F7E8[539888]));
          ((void (__stdcall *)(int, int, _DWORD, __int128 *))SendMessageA)(v12, 1204, 0, &v46);
        }
        ((void (__stdcall *)(int, int, int, _DWORD))SendMessageA)(v12, 197, 5, 0);
        int v13 = ((int (__stdcall *)(int, int))GetDlgItem)(hWnd, 1491);
        if ( strlen((const char *)&DataGlobal_87F7E8[539892]) )
          ((void (__stdcall *)(int, int, _DWORD, _DWORD *))SendMessageA)(v13, 1204, 0, &DataGlobal_87F7E8[539892]);
        ((void (__stdcall *)(int, int, int, _DWORD))SendMessageA)(v13, 197, 11, 0);
        ((void (__stdcall *)(int, int, int, bool, _DWORD))SendDlgItemMessageA)(
          hWnd,
          1890,
          241,
          LOBYTE(DataGlobal_87F7E8[539238]) != 0,
          0);
        int v14 = ((int (__stdcall *)(int, int))GetDlgItem)(hWnd, 1495);
        if ( v14 != -1 && DataGlobal_87F7E8[539291] )
        {
          sprintf((char *const)&v46, "%d", DataGlobal_87F7E8[539291]);
          ((void (__stdcall *)(int, int, _DWORD, __int128 *))SendMessageA)(v14, 1204, 0, &v46);
          return 0;
        }
        return 0;
      }
      if ( DataGlobal_87F7E8[8080] )
        (**(void (__thiscall ***)(_DWORD, int))DataGlobal_87F7E8[8080])(DataGlobal_87F7E8[8080], 1);
    }
    DataGlobal_87F7E8[8080] = 0;
    goto LABEL_20;
  }
  return result;
}

/* ASM:
lParam          = byte ptr -0A0h
var_60          = byte ptr -60h
Destination     = byte ptr -40h
String          = byte ptr -20h
hWnd            = dword ptr  4
arg_4           = dword ptr  8
arg_8           = dword ptr  0Ch
hCtl            = dword ptr  10h

sub     esp, 100h
push    ebx
mov     ebx, [esp+104h+hCtl]
push    ebp
mov     ebp, [esp+108h+hWnd]
push    esi
mov     esi, [esp+10Ch+arg_8]
push    edi
mov     edi, [esp+110h+arg_4]
push    ebx             ; int
push    esi             ; int
mov     edx, edi
mov     ecx, ebp        ; hWnd
call    BaseDialogProc
test    eax, eax
jnz     loc_560BDC
push    8               ; nIndex
push    ebp             ; hWnd
call    ds:__imp_GetWindowLongA
mov     [esp+110h+var_E8], eax
mov     eax, edi
sub     eax, 111h
jz      loc_560759
sub     eax, 386h
jz      short loc_5604FE
sub     eax, 44h ; 'D'
jnz     loc_560BDA
test    esi, esi
setnz   dl
mov     ecx, ebx        ; hCtl
call    NavigateDialogTab
pop     edi
pop     esi
pop     ebp
xor     eax, eax
pop     ebx
add     esp, 100h
retn    10h
; ---------------------------------------------------------------------------

loc_5604FE:                             ; CODE XREF: NetworkOptions__DlgProc+58↑j
push    5D4h            ; nIDDlgItem
push    ebp             ; hDlg
call    ds:__imp_GetDlgItem
mov     esi, ds:__imp_SendMessageA
mov     edi, eax
mov     eax, ds:887628h
mov     [esp+110h+var_FD], 0
test    eax, eax
jnz     short loc_56055B
push    3F310h          ; Size
call    ??2_YAPAXI_Z
add     esp, 4
test    eax, eax
jz      short loc_56053A
mov     ecx, eax
call    IPXInterfaceClass__Construct
jmp     short loc_56053C
; ---------------------------------------------------------------------------

loc_56053A:                             ; CODE XREF: NetworkOptions__DlgProc+AF↑j
xor     eax, eax

loc_56053C:                             ; CODE XREF: NetworkOptions__DlgProc+B8↑j
mov     ecx, eax
mov     ds:887628h, eax
call    WinsockInterface__Init
mov     ecx, ds:887628h
mov     [esp+110h+var_FD], 1
test    ecx, ecx
jz      loc_5605E6

loc_56055B:                             ; CODE XREF: NetworkOptions__DlgProc+9E↑j
push    offset aCreatingIpxInt ; "Creating IPX Interface\n"
call    Debug__Log
mov     eax, ds:887628h
add     esp, 4
mov     [esp+110h+var_FC], eax
xor     ebx, ebx

loc_560573:                             ; CODE XREF: NetworkOptions__DlgProc+14C↓j
lea     ecx, [esp+110h+lParam]
push    40h ; '@'
push    ecx
mov     ecx, [esp+118h+var_FC]
push    ebx
call    NetworkOptions__ApplySettings
test    eax, eax
jz      short loc_5605C8
push    ebx
push    offset aGotAddressForN ; "Got address for network card %d\n"
call    Debug__Log
lea     edx, [esp+118h+lParam]
push    edx
push    offset aAddressIsS ; "Address is %s\n"
call    Debug__Log
add     esp, 10h
lea     eax, [esp+110h+lParam]
push    eax             ; lParam
push    0               ; wParam
push    4B8h            ; Msg
push    edi             ; hWnd
call    esi ; __imp_SendMessageA
cmp     eax, 0FFFFFFFFh
jnz     short loc_5605C8
lea     ecx, [esp+110h+lParam]
push    ecx             ; lParam
push    0               ; wParam
push    4BCh            ; Msg
push    edi             ; hWnd
call    esi ; __imp_SendMessageA

loc_5605C8:                             ; CODE XREF: NetworkOptions__DlgProc+106↑j
; NetworkOptions__DlgProc+137↑j
inc     ebx
cmp     ebx, 14h
jl      short loc_560573
mov     al, [esp+110h+var_FD]
test    al, al
jz      short loc_5605F0
mov     ecx, ds:887628h
test    ecx, ecx
jz      short loc_5605E6
mov     edx, [ecx]
push    1
call    dword ptr [edx]

loc_5605E6:                             ; CODE XREF: NetworkOptions__DlgProc+D5↑j
; NetworkOptions__DlgProc+15E↑j
mov     dword ptr ds:887628h, 0

loc_5605F0:                             ; CODE XREF: NetworkOptions__DlgProc+154↑j
push    0               ; lParam
push    0               ; wParam
push    146h            ; Msg
push    edi             ; hWnd
call    esi ; __imp_SendMessageA
test    eax, eax
jnz     short loc_560621
push    37Eh            ; int
push    offset g_Str_File_MainOpt_cpp ; "D:\\ra2mdpost\\MainOpt.cpp"
xor     edx, edx
mov     ecx, offset aTxtNoBoundNetC ; "TXT_NO_BOUND_NET_CARD"
call    GetStringCSF
push    eax             ; lParam
push    0               ; wParam
push    4C2h            ; Msg
push    edi             ; hWnd
call    esi ; __imp_SendMessageA

loc_560621:                             ; CODE XREF: NetworkOptions__DlgProc+17E↑j
mov     ebx, ds:0A8EBB4h
test    ebx, ebx
jl      short loc_56063B
push    0               ; lParam
push    0               ; wParam
push    146h            ; Msg
push    edi             ; hWnd
call    esi ; __imp_SendMessageA
cmp     ebx, eax
jl      short loc_56063D

loc_56063B:                             ; CODE XREF: NetworkOptions__DlgProc+1A9↑j
xor     ebx, ebx

loc_56063D:                             ; CODE XREF: NetworkOptions__DlgProc+1B9↑j
push    0               ; lParam
push    ebx             ; wParam
push    14Eh            ; Msg
push    edi             ; hWnd
call    esi ; __imp_SendMessageA
push    0               ; lParam
push    0               ; wParam
push    464h            ; Msg
push    ebp             ; hWnd
call    esi ; __imp_SendMessageA
mov     ebx, ds:__imp_GetDlgItem
push    5D1h            ; nIDDlgItem
push    ebp             ; hDlg
mov     dword_82A280, 0FFFFFFFFh
call    ebx ; __imp_GetDlgItem
mov     edi, eax
mov     ax, ds:0A8EBAAh
cmp     ax, 0FFFFh
jz      short loc_5606A1
xor     ecx, ecx
lea     edx, [esp+110h+var_E4]
mov     cx, ax
push    ecx
push    offset g_Str_Trace__d ; "%d"
push    edx             ; Buffer
call    _sprintf
add     esp, 0Ch
lea     eax, [esp+110h+var_E4]
push    eax             ; lParam
push    0               ; wParam
push    4B4h            ; Msg
push    edi             ; hWnd
call    esi ; __imp_SendMessageA

loc_5606A1:                             ; CODE XREF: NetworkOptions__DlgProc+1F8↑j
push    0               ; lParam
push    5               ; wParam
push    0C5h            ; Msg
push    edi             ; hWnd
call    esi ; __imp_SendMessageA
push    5D3h            ; nIDDlgItem
push    ebp             ; hDlg
call    ebx ; __imp_GetDlgItem
mov     ebx, eax
mov     edi, 0A8EBB8h
or      ecx, 0FFFFFFFFh
xor     eax, eax
repne scasb
not     ecx
dec     ecx
jz      short loc_5606D6
push    0A8EBB8h        ; lParam
push    eax             ; wParam
push    4B4h            ; Msg
push    ebx             ; hWnd
call    esi ; __imp_SendMessageA

loc_5606D6:                             ; CODE XREF: NetworkOptions__DlgProc+246↑j
push    0               ; lParam
push    0Bh             ; wParam
push    0C5h            ; Msg
push    ebx             ; hWnd
call    esi ; __imp_SendMessageA
mov     al, ds:0A8E180h
push    0               ; lParam
test    al, al
jz      short loc_5606F1
push    1
jmp     short loc_5606F3
; ---------------------------------------------------------------------------

loc_5606F1:                             ; CODE XREF: NetworkOptions__DlgProc+26B↑j
push    0               ; wParam

loc_5606F3:                             ; CODE XREF: NetworkOptions__DlgProc+26F↑j
push    0F1h            ; Msg
push    762h            ; nIDDlgItem
push    ebp             ; hDlg
call    ds:__imp_SendDlgItemMessageA
push    5D7h            ; nIDDlgItem
push    ebp             ; hDlg
call    ds:__imp_GetDlgItem
mov     edi, eax
cmp     edi, 0FFFFFFFFh
jz      loc_560BDA
mov     eax, ds:0A8E254h
test    eax, eax
jz      loc_560BDA
push    eax
lea     ecx, [esp+114h+var_E4]
push    offset g_Str_Trace__d ; "%d"
push    ecx             ; Buffer
call    _sprintf
add     esp, 0Ch
lea     edx, [esp+110h+var_E4]
push    edx             ; lParam
push    0               ; wParam
push    4B4h            ; Msg
push    edi             ; hWnd
call    esi ; __imp_SendMessageA
pop     edi
pop     esi
pop     ebp
xor     eax, eax
pop     ebx
add     esp, 100h
retn    10h
; ---------------------------------------------------------------------------

loc_560759:                             ; CODE XREF: NetworkOptions__DlgProc+4D↑j
and     esi, 0FFFFh
dec     esi
jz      short loc_5607A5
dec     esi
jz      loc_560BD0
sub     esi, 5D2h
jnz     loc_560BDA
push    5D4h            ; nIDDlgItem
push    ebp             ; hDlg
call    ds:__imp_GetDlgItem
push    0               ; lParam
push    0               ; wParam
push    147h            ; Msg
push    eax             ; hWnd
call    ds:__imp_SendMessageA
pop     edi
pop     esi
mov     dword_82A280, eax
pop     ebp
xor     eax, eax
pop     ebx
add     esp, 100h
retn    10h
; ---------------------------------------------------------------------------

loc_5607A5:                             ; CODE XREF: NetworkOptions__DlgProc+2E0↑j
mov     ebx, ds:__imp_GetDlgItem
push    5D1h            ; nIDDlgItem
push    ebp             ; hDlg
call    ebx ; __imp_GetDlgItem
mov     esi, ds:__imp_SendMessageA
lea     ecx, [esp+110h+var_E4]
push    ecx             ; lParam
push    10h             ; wParam
push    4B5h            ; Msg
push    eax             ; hWnd
call    esi ; __imp_SendMessageA
lea     edi, [esp+110h+var_E4]
or      ecx, 0FFFFFFFFh
xor     eax, eax
repne scasb
not     ecx
dec     ecx
jz      loc_56085D
lea     edx, [esp+110h+var_E4]
push    edx             ; String
call    _atoi
mov     edx, eax
lea     edi, [esp+114h+var_E4]
or      ecx, 0FFFFFFFFh
xor     eax, eax
add     esp, 4
mov     [esp+110h+var_FC], edx
repne scasb
not     ecx
dec     ecx
cmp     ecx, 5
ja      short loc_560809
cmp     dx, 3FFFh
jbe     short loc_560865

loc_560809:                             ; CODE XREF: NetworkOptions__DlgProc+380↑j
push    0               ; int
push    0               ; LPARAM
push    0               ; LPARAM
push    3D7h            ; int
push    offset g_Str_File_MainOpt_cpp ; "D:\\ra2mdpost\\MainOpt.cpp"
xor     edx, edx
mov     ecx, offset g_Str_TXT_OK ; "TXT_OK"
mov     [esp+124h+var_D0], offset asc_82083C ; " "
call    GetStringCSF
push    eax             ; LPARAM
push    3D7h            ; int
push    offset g_Str_File_MainOpt_cpp ; "D:\\ra2mdpost\\MainOpt.cpp"
xor     edx, edx
mov     ecx, offset aTxtInvalidSock ; "TXT_INVALID_SOCKET"
call    GetStringCSF
push    eax             ; lParam
lea     ecx, [esp+124h+var_D0]
call    Dialog__ShowMessageBox
pop     edi
pop     esi
pop     ebp
xor     eax, eax
pop     ebx
add     esp, 100h
retn    10h
; ---------------------------------------------------------------------------

loc_56085D:                             ; CODE XREF: NetworkOptions__DlgProc+356↑j
mov     [esp+110h+var_FC], 0FFFFh

loc_560865:                             ; CODE XREF: NetworkOptions__DlgProc+387↑j
push    5D3h            ; nIDDlgItem
push    ebp             ; hDlg
call    ebx ; __imp_GetDlgItem
lea     ecx, [esp+110h+var_C0]
push    ecx             ; lParam
push    20h ; ' '       ; wParam
push    4B5h            ; Msg
push    eax             ; hWnd
call    esi ; __imp_SendMessageA
lea     edx, [esp+110h+var_C0]
push    20h ; ' '       ; Count
lea     eax, [esp+114h+Destination]
push    edx             ; Source
push    eax             ; Destination
call    _strncpy
lea     edi, [esp+11Ch+var_C0]
or      ecx, 0FFFFFFFFh
xor     eax, eax
add     esp, 0Ch
repne scasb
not     ecx
dec     ecx
jz      loc_560998
lea     ecx, [esp+110h+var_C0]
push    offset asc_826598 ; "."
push    ecx             ; String
call    _strtok
add     esp, 8
or      ecx, 0FFFFFFFFh
or      edx, 0FFFFFFFFh
or      edi, 0FFFFFFFFh
test    eax, eax
mov     [esp+110h+var_F8], ecx
mov     [esp+110h+var_F4], edx
mov     [esp+110h+var_F0], 0FFFFFFFFh
mov     [esp+110h+var_EC], edi
jz      short loc_560912
lea     esi, [esp+110h+var_F8]

loc_5608DE:                             ; CODE XREF: NetworkOptions__DlgProc+47E↓j
push    esi
push    offset asc_825BD4 ; "%x"
push    eax             ; Buffer
call    _sscanf
push    offset asc_826598 ; "."
push    0               ; String
add     esi, 4
call    _strtok
add     esp, 14h
test    eax, eax
jnz     short loc_5608DE
mov     edi, [esp+110h+var_EC]
mov     edx, [esp+110h+var_F4]
mov     ecx, [esp+110h+var_F8]
mov     esi, ds:__imp_SendMessageA

loc_560912:                             ; CODE XREF: NetworkOptions__DlgProc+458↑j
mov     eax, ecx
and     eax, 0FFh
cmp     eax, ecx
jnz     short loc_560944
mov     ecx, edx
and     ecx, 0FFh
cmp     ecx, edx
jnz     short loc_560944
mov     eax, [esp+110h+var_F0]
mov     edx, eax
and     edx, 0FFh
cmp     edx, eax
jnz     short loc_560944
mov     eax, edi
and     eax, 0FFh
cmp     eax, edi
jz      short loc_560998

loc_560944:                             ; CODE XREF: NetworkOptions__DlgProc+49B↑j
; NetworkOptions__DlgProc+4A7↑j ...
push    0               ; int
push    0               ; LPARAM
push    0               ; LPARAM
push    3F9h            ; int
push    offset g_Str_File_MainOpt_cpp ; "D:\\ra2mdpost\\MainOpt.cpp"
xor     edx, edx
mov     ecx, offset g_Str_TXT_OK ; "TXT_OK"
mov     [esp+124h+var_CC], offset asc_82083C ; " "
call    GetStringCSF
push    eax             ; LPARAM
push    3F9h            ; int
push    offset g_Str_File_MainOpt_cpp ; "D:\\ra2mdpost\\MainOpt.cpp"
xor     edx, edx
mov     ecx, offset aTxtDestnetAddr ; "TXT_DESTNET_ADDR_ERROR"
call    GetStringCSF
push    eax             ; lParam
lea     ecx, [esp+124h+var_CC]
call    Dialog__ShowMessageBox
pop     edi
pop     esi
pop     ebp
xor     eax, eax
pop     ebx
add     esp, 100h
retn    10h
; ---------------------------------------------------------------------------

loc_560998:                             ; CODE XREF: NetworkOptions__DlgProc+421↑j
; NetworkOptions__DlgProc+4C2↑j
push    5D4h            ; nIDDlgItem
push    ebp             ; hDlg
call    ebx ; __imp_GetDlgItem
push    0               ; lParam
push    0               ; wParam
push    147h            ; Msg
push    eax             ; hWnd
call    esi ; __imp_SendMessageA
mov     ds:0A8EBB4h, eax
lea     edi, [esp+110h+Destination]
mov     cx, word ptr [esp+110h+var_FC]
xor     eax, eax
mov     ds:0A8EBAAh, cx
or      ecx, 0FFFFFFFFh
repne scasb
not     ecx
sub     edi, ecx
push    5D7h            ; nIDDlgItem
mov     edx, ecx
mov     esi, edi
mov     edi, 0A8EBB8h
push    ebp             ; hDlg
shr     ecx, 2
rep movsd
mov     ecx, edx
and     ecx, 3
rep movsb
call    ebx ; __imp_GetDlgItem
mov     edx, eax
mov     ecx, 8
xor     eax, eax
lea     edi, [esp+110h+var_60]
rep stosd
lea     eax, [esp+110h+var_60]
push    eax             ; lParam
push    8               ; wParam
push    4B5h            ; Msg
push    edx             ; hWnd
call    ds:__imp_SendMessageA
lea     ecx, [esp+110h+var_60]
push    20h ; ' '       ; Count
lea     edx, [esp+114h+String]
push    ecx             ; Source
push    edx             ; Destination
call    _strncpy
lea     eax, [esp+11Ch+String]
push    eax             ; String
call    _atoi
mov     esi, eax
add     esp, 10h
cmp     esi, 0FFFFh
jle     short loc_560A99
push    0               ; int
push    0               ; LPARAM
push    0               ; LPARAM
push    422h            ; int
push    offset g_Str_File_MainOpt_cpp ; "D:\\ra2mdpost\\MainOpt.cpp"
xor     edx, edx
mov     ecx, offset g_Str_TXT_OK ; "TXT_OK"
mov     [esp+124h+var_D4], offset asc_82083C ; " "
call    GetStringCSF
push    eax             ; LPARAM
push    422h            ; int
push    offset g_Str_File_MainOpt_cpp ; "D:\\ra2mdpost\\MainOpt.cpp"
xor     edx, edx
mov     ecx, offset aTxtPortNumberE ; "TXT_PORT_NUMBER_ERROR"
call    GetStringCSF
push    eax             ; lParam
lea     ecx, [esp+124h+var_D4]
call    Dialog__ShowMessageBox
pop     edi
pop     esi
pop     ebp
xor     eax, eax
pop     ebx
add     esp, 100h
retn    10h
; ---------------------------------------------------------------------------

loc_560A99:                             ; CODE XREF: NetworkOptions__DlgProc+5C3↑j
push    0               ; lParam
push    0               ; wParam
push    0F0h            ; Msg
push    762h            ; nIDDlgItem
push    ebp             ; hDlg
call    ds:__imp_SendDlgItemMessageA
cmp     eax, 1
mov     edi, offset asc_82083C ; " "
jnz     short loc_560B0B
mov     al, ds:0A8E180h
test    al, al
jnz     short loc_560B02
push    0               ; int
push    0               ; LPARAM
push    0               ; LPARAM
push    42Bh            ; int
push    offset g_Str_File_MainOpt_cpp ; "D:\\ra2mdpost\\MainOpt.cpp"
xor     edx, edx
mov     ecx, offset g_Str_TXT_OK ; "TXT_OK"
mov     [esp+124h+var_C4], edi
call    GetStringCSF
push    eax             ; LPARAM
push    42Bh            ; int
push    offset g_Str_File_MainOpt_cpp ; "D:\\ra2mdpost\\MainOpt.cpp"
xor     edx, edx
mov     ecx, offset aTxtFirewallSet ; "TXT_FIREWALL_SETTINGS_WARNING1"
call    GetStringCSF
push    eax             ; lParam
lea     ecx, [esp+124h+var_C4]
call    Dialog__ShowMessageBox

loc_560B02:                             ; CODE XREF: NetworkOptions__DlgProc+63F↑j
mov     byte ptr ds:0A8E180h, 1
jmp     short loc_560B12
; ---------------------------------------------------------------------------

loc_560B0B:                             ; CODE XREF: NetworkOptions__DlgProc+636↑j
mov     byte ptr ds:0A8E180h, 0

loc_560B12:                             ; CODE XREF: NetworkOptions__DlgProc+689↑j
test    esi, esi
jle     short loc_560B60
mov     eax, ds:0A8E254h
test    eax, eax
jnz     short loc_560B60
push    0               ; int
push    0               ; LPARAM
push    0               ; LPARAM
push    436h            ; int
push    offset g_Str_File_MainOpt_cpp ; "D:\\ra2mdpost\\MainOpt.cpp"
xor     edx, edx
mov     ecx, offset g_Str_TXT_OK ; "TXT_OK"
mov     [esp+124h+var_C8], edi
call    GetStringCSF
push    eax             ; LPARAM
push    436h            ; int
push    offset g_Str_File_MainOpt_cpp ; "D:\\ra2mdpost\\MainOpt.cpp"
xor     edx, edx
mov     ecx, offset aTxtFirewallSet_0 ; "TXT_FIREWALL_SETTINGS_WARNING2"
call    GetStringCSF
push    eax             ; lParam
lea     ecx, [esp+124h+var_C8]
call    Dialog__ShowMessageBox

loc_560B60:                             ; CODE XREF: NetworkOptions__DlgProc+694↑j
; NetworkOptions__DlgProc+69D↑j
mov     ecx, (offset dword_A8ED54+31174h) ; this
mov     ds:0A8E254h, esi
call    ?_Release__NonReentrantLock_details_Concurrency__QAEXXZ
push    offset g_Str_File_RA2MD_INI ; "RA2MD.INI"
lea     ecx, [esp+114h+lParam]
call    RawFileClass__Construct
mov     cl, ds:0A8E180h
push    ecx             ; char
push    offset aSenddelay ; "SendDelay"
push    offset g_INI_Key_MultiPlayer ; "MultiPlayer"
mov     ecx, 8870C0h
call    INIClass__SetBool
mov     edx, ds:0A8E254h
push    0               ; int
push    edx             ; int
push    offset aPortnumberover ; "PortNumberOverride"
push    offset g_INI_Key_MultiPlayer ; "MultiPlayer"
mov     ecx, 8870C0h
call    INIClass__SetInt
lea     eax, [esp+110h+lParam]
push    0
push    eax
mov     ecx, 8870C0h
call    INIClass__WriteDigest
lea     ecx, [esp+110h+lParam]
call    RawFileClass__Dtor

loc_560BD0:                             ; CODE XREF: NetworkOptions__DlgProc+2E3↑j
mov     ecx, [esp+110h+var_E8]
mov     dword ptr [ecx], 2

loc_560BDA:                             ; CODE XREF: NetworkOptions__DlgProc+5D↑j
; NetworkOptions__DlgProc+295↑j ...
xor     eax, eax

loc_560BDC:                             ; CODE XREF: NetworkOptions__DlgProc+33↑j
pop     edi
pop     esi
pop     ebp
pop     ebx
add     esp, 100h
retn    10h
*/
}
// 0x7b0f50
void NetworkOptions::ApplySettings() {}

// --- NetworkScore ---

// 0x64ae50
void NetworkScore::DlgProc() {}

// --- NetworkSession ---

// 0x54ee60
void NetworkSession::ResetState() {}
// 0x69b600
void NetworkSession::IsPlayerInGame() {}

// --- NetworkSettings ---

// 0x5ddbd0
void NetworkSettings::DlgProc() {}

// --- NetworkShare ---

// 0x5e8da0
void NetworkShare::GetField() {}

// --- UDPInterfaceClass_Destru ---

// 0x7b2f90
void UDPInterfaceClass_Destru::GetQueueSize() {}
// 0x7b2ff0
void UDPInterfaceClass_Destru::Flush() {}
// 0x7b30b0
void UDPInterfaceClass_Destru::Send() {}
// 0x7b31e0
void UDPInterfaceClass_Destru::SetAddress() {}
// 0x7b3430
void UDPInterfaceClass_Destru::GetAddress() {}

// --- WOLGameClass ---

// 0x78e030
void WOLGameClass::ParseChatMessage() {}

// --- WOLGameList ---

// 0x77a7c0
void WOLGameList::UpdatePlayerStats() {}
// 0x77a840
void WOLGameList::Check() {}
// 0x7a3100
void WOLGameList::PopulateLobbyLists() {}
// 0x7ada70
void WOLGameList::EnsureCapacity() {}
// 0x7ae020
void WOLGameList::GrowBuffer() {}

// --- WOLLogin ---

// 0x78db70
void WOLLogin::DlgProc() {}

// --- WOLOption ---

// 0x77a4a0
void WOLOption::SetValue() {}

// --- WOLPersona ---

// 0x77a4d0
void WOLPersona::FormatDateTime() {}

// --- WOLobby ---

// 0x5e8d00
void WOLobby::FindPlayerIndex() {}
// 0x781d20
void WOLobby::BuildStateList() {}
// 0x783800
void WOLobby::BuildPlayerList() {}
// 0x78ac10
void WOLobby::DlgProc() {}
// 0x78f5c0
void WOLobby::FormatLatencyText() {}

} // namespace gamemd
